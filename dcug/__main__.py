import argparse
import textwrap

from dcug import *
from dcug.compiler import *


settings_file='tests/settings.json'
settings, settings_file = load_settings(SETTINGS_KEY_NAME, settings_file)


def compile(args):
    '''
    Compile method runs if the command 'compile' is invoked in a command line
    '''
    machine = LocalMachine(**settings["local machine"])
    logger.info(machine)
    jwasm = JwasmCompilerBuilder(machine=machine, **settings["local compiler"]).target(args.target).build()
    return jwasm.compile(args.file)


parser = argparse.ArgumentParser(prog='dcug',
                                 description='Compile DcUg files.')
subparsers = parser.add_subparsers(title='commands',
                                   description='valid commands',
                                   help='additional help')

compile_cmd = subparsers.add_parser('compile', formatter_class=argparse.RawTextHelpFormatter)
compile_cmd.add_argument('file', type=str, help='adsolute path to the file')
compile_cmd.add_argument('as', type=str)
compile_cmd.add_argument('target', type=str, choices=['stn', 'fkl', 'rts', 'track'],
                         help=textwrap.dedent('''\
                                              stn - compile dcl*.asm file as a central post station configuration file
                                              fkl - compile dclfkl.asm file as a central post functional keyboard configuration file
                                              rts - compile dclrts.asm file as a central post network configuration file
                                              track - compile dcltrack.asm file as a central post tracking configuration file'''))
compile_cmd.set_defaults(func=compile)


def run(args=None):
    args = args or sys.argv
    logger.info('settings file is loaded: %s' % settings_file)
    logger.info('command parameters:' + prettify(args))
    validated_args = parser.parse_args(args)
    return validated_args.func(validated_args)


if __name__ == '__main__':
    run()
