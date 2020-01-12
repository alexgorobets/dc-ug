import os
import sys


compiler = '..\\dc-ug\\bin\\jwasm.exe'
incfiles = ['..\\dc-ug\\include\\dcl_ts.inc', '..\\dc-ug\\include\\dcl_tu.inc', '..\\dc-ug\\include\\dcl_rts.inc']
flags = '-mz'


def include(files: list) -> str:
    inc_line = ''
    for inc in files:
        inc_line += ' -Fi=' + inc

    return inc_line


def output(src_name: str) -> str:
    return ' -Fo=' + src_name.replace('.asm', '.dat')


if __name__ == '__main__':
    source = sys.argv[2]
    if ['compile', source, 'as', 'stn'] == sys.argv[1:]:
        """
        jwasm.exe -Fi=../include/dcl_ts.inc -Fi=../include/dcl_tu.inc -Fo=dclXXX.dat -mz dclXXX.asm
        """
        print(compiler)
        cmd = compiler + include(incfiles.copy()) + output(source) + ' ' + flags + ' ' + source
        print(cmd)
        os.system(cmd)
