import dcug.__main__
from dcug import prettify

import os
from pathlib import Path
import filecmp
import pytest
import json


@pytest.fixture
def src_dir():
    """
    The fixture returns path to the src directory of the project
    """
    return str(Path(__file__).parent.parent.joinpath('src'))

@pytest.fixture
def test_settings_file(tmpdir, src_dir):
    """
    The fixture returns a settings file where bin and include dirs are redefined 
    for them to point directly to the files in src directory of the project
    """
    with open(Path(src_dir).joinpath('settings.json')) as fp:
        settings = json.load(fp)

    settings['local machine']['bin_dir'] = str(Path(src_dir).joinpath('bin'))
    settings['local machine']['include_dir'] = str(Path(src_dir).joinpath('include/QNX650'))

    settings_file = tmpdir.join("settings_file.json")
    settings_file.write(json.dumps(settings))

    return settings_file


class TestStnCompilation:
    """
    station compilation set of tests
    """

    @staticmethod
    def get_rel_path(*args):
        if len(args) == 0:
            return str(Path(__file__).parent.joinpath(args))
        
        else:
            return str(Path(__file__).parent.joinpath(os.path.join(*args)))


    def test_kuz_campilation(self, test_settings_file):
        dcug.__main__.run.settings_file = test_settings_file
        res = dcug.__main__.run(['compile', self.get_rel_path('test_central_post/dclkuz.asm'), 'as', 'stn'])
        print(res.stdout)
        print(prettify(res.args))

        assert filecmp.cmp(
            self.get_rel_path('test_central_post/dclkuz.dat'), 
            self.get_rel_path('test_central_post/successfully_compiled/dclkuz.dat')
        ), "dclkuz.asm is wrongly compiled"

        