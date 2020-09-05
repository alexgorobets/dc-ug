import dcug.__main__
from dcug import prettify

import os
from pathlib import Path
import filecmp


class TestStnCompilation:
    """
    station compilation set of tests
    """
    rel_path = 'test_central_post'

    @staticmethod
    def get_path(*args):
        if len(args) == 0:
            return str(Path(__file__).parent.joinpath(args))
        
        else:
            return str(Path(__file__).parent.joinpath(os.path.join(*args)))


    def test_kuz_campilation(self):
        res = dcug.__main__.run(['compile', self.get_path(self.rel_path ,'dclkuz.asm'), 'as', 'stn'])
        print(res.stdout)
        print(prettify(res.args))

        assert filecmp.cmp(
            self.get_path(self.rel_path, 'dclkuz.dat'), 
            self.get_path(self.rel_path, 'successfully_compiled', 'dclkuz.dat')
        ), "dclkuz_ok.asm is wrongly compiled"
        