from dcug import *
from dcug.compiler import *


def run(args=None):
    if args is None: args = sys.argv
    logger.info('settings file is loaded: %s' % settings_file)
    logger.info('command parameters:' + prettify(args))

    try:
        if args[1] == 'compile':
            machine = LocalMachine(**settings["local machine"])
            logger.info(machine)
            jwasm = JwasmCompilerBuilder(machine=machine, **settings["local compiler"]).target(args[4]).build()
            return jwasm.compile(args[2])

    except IndexError:
        logger.info(HELP_MESSAGE)


if __name__ == '__main__':
    run()
