import json
import sys
import os, winreg
import logging
from environs import Env

from compiler import *
# from machine import *

logging.basicConfig(level=logging.INFO,
                    format="%(asctime)s - %(levelname)s - %(message)s")
logger = logging.getLogger()

APP_NAME = 'DcUg'
SETTINGS_KEY_NAME = 'settings'

HELP_MESSAGE = """This is a help message
"""  # TODO create help message

try:
    Env().read_env('../variables.env')
except OSError:
    pass


def prettify(args):
    return '\t' + '\n\t'.join(args)


def run(args=sys.argv):
    if os.name == 'nt':
        proc_arch = os.getenv('PROCESSOR_ARCHITECTURE', '').lower()

        if proc_arch == 'amd64' or proc_arch == 'x86':
            sub_key = 'SOFTWARE\\WOW6432Node\\%s' % APP_NAME
        else:
            raise Exception("Unhandled arch: %s" % proc_arch)

        settings_file = os.getenv(SETTINGS_KEY_NAME, None)  # get settings_file name from variables.env
        try:
            if not settings_file:  # if does not exist try to get settings_file name from win registry
                with winreg.OpenKey(winreg.HKEY_LOCAL_MACHINE, sub_key, 0, winreg.KEY_READ) as key:
                    settings_file = winreg.QueryValueEx(key, SETTINGS_KEY_NAME)[0]

            try:
                with open(settings_file) as fp:
                    settings = json.load(fp)
            except FileNotFoundError:
                print('here')
                raise SettingsFileNotFoundError('settings file: %s not found' % settings_file)

            logger.info('settings file is loaded: %s' % settings_file)
            # from pdb import set_trace; set_trace()
            logger.info('command parameters:\n' + prettify(args))

            try:
                if args[1] == 'compile':
                    machine = LocalMachine(**settings["local machine"])
                    logger.info(machine)

                    jwasm = JwasmCompilerBuilder(machine=machine, **settings["local compiler"]).target(args[4]).build()
                    # jwasm = JwasmCompiler(machine=machine, **settings["local compiler"])
                    logger.info(jwasm)
                    res = jwasm.compile(args[2])
                    logger.info('windows command line:\n' + prettify(res))

            except IndexError:
                logger.info(HELP_MESSAGE)

        except FileNotFoundError as err:  # if key 'DcUg' not found in win registry trigger the error message
            logger.error('key \'%s\' or its value name \'settings\' do not exist' % APP_NAME)


if __name__ == '__main__':
    run()
