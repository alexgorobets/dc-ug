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
        res = dcug.__main__.run(['test', 'compile', self.get_path(self.rel_path ,'dclkuz_ok.asm'), 'as', 'stn'])
        print(prettify(res.args))
        print(res.stdout)

        assert filecmp.cmp(
            self.get_path(self.rel_path, 'dclkuz_ok.dat'), 
            self.get_path(self.rel_path, 'successfully_compiled', 'dclkuz_ok.dat')
        ), "dclkuz_ok.asm is wrongly compiled"
        