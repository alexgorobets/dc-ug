import argparse
import textwrap

from dcug import *
from dcug.compiler import *


def compile(args):
    '''
    Compile method runs if the command 'compile' is invoked in a command line
    '''
    machine = LocalMachine(**compile.settings["local machine"])
    logger.info(machine)
    jwasm = JwasmCompilerBuilder(machine=machine, **compile.settings["local compiler"]).target(args.target).build()
    return jwasm.compile(args.file)


parser = argparse.ArgumentParser(prog='dcug',
                                 description='Compile DcUg files.',
                                 add_help=True)
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
    # if run.settings_file is None then load_settings function is searching settings_file in win registry
    # On finding the settings file it loads settings frim that file
    settings, settings_file = load_settings(SETTINGS_KEY_NAME, run.settings_file)

    args = args or sys.argv[1:]

    logger.info('settings file is loaded: %s' % settings_file)
    logger.info('command parameters:' + prettify(args))

    try:
        validated_args = parser.parse_args(args)
        # validated_args.func returns 'compile' function if compile command is found in command line
        validated_args.func.settings = settings
        return validated_args.func(validated_args)

    except AttributeError:
        parser.print_help()
        sys.exit(0)

run.settings_file = None


if __name__ == '__main__':
    run()
