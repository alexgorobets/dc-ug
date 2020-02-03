import json
import logging
import os

__version__ = 1.0

import sys
import winreg

from environs import Env

APP_NAME = 'DcUg'
SETTINGS_KEY_NAME = 'settings'

HELP_MESSAGE = """This is a help message
"""  # TODO create help message

try:
    Env().read_env('../variables.env')
except OSError:
    pass


def prettify(args):
    return '\n\t' + '\n\t'.join(args)


class StreamToLogger(object):
    """
    Fake file-like stream object that redirects writes to a logger instance.
    """

    def __init__(self, logger, log_level=logging.INFO):
        self.logger = logger
        self.log_level = log_level
        self.linebuf = ''

    def write(self, buf):
        for line in buf.rstrip().splitlines():
            self.logger.log(self.log_level, line.rstrip())


def load_settings(settings_key_name):
    """
    Function that loads settings from settings_file which is found via a virtual environment or a Windows key
    :param settings_key_name:
    :return:
    """

    if os.name == 'nt':

        proc_arch = os.getenv('PROCESSOR_ARCHITECTURE', '').lower()

        if proc_arch == 'amd64' or proc_arch == 'x86':
            sub_key = 'SOFTWARE\\WOW6432Node\\%s' % APP_NAME
        else:
            raise Exception("Unhandled arch: %s" % proc_arch)

        _settings_file = os.getenv(settings_key_name, None)  # get settings_file name from variables.env

        try:
            if not _settings_file:  # if does not exist try to get settings_file name from win registry
                with winreg.OpenKey(winreg.HKEY_LOCAL_MACHINE, sub_key, 0, winreg.KEY_READ) as key:
                    _settings_file = winreg.QueryValueEx(key, settings_key_name)[0]

        except FileNotFoundError as err:  # if key 'DcUg' not found in win registry triggers the error message
            logger.error('key \'%s\' or its value name \'settings\' do not exist' % APP_NAME)

        with open(_settings_file) as fp:
            _settings = json.load(fp)

        formatter = logging.Formatter('%(asctime)s - %(name)s - %(levelname)s - %(message)s')

        _error_handler = logging.FileHandler('PythonErr.log')
        _error_handler.setFormatter(formatter)

    return _settings, _settings_file, _error_handler


logging.basicConfig(level=logging.INFO,
                    format="%(asctime)s - %(levelname)s - %(message)s")

logger = logging.getLogger(APP_NAME)
python_err_logger = logging.getLogger('PythonERR')

settings, settings_file, error_handler = load_settings(SETTINGS_KEY_NAME)

python_err_logger.addHandler(error_handler)

sys.stderr = StreamToLogger(python_err_logger, logging.ERROR)

with winreg.OpenKey(winreg.HKEY_LOCAL_MACHINE,
                    'SOFTWARE\\Microsoft\\Cryptography',
                    0,
                    winreg.KEY_READ | winreg.KEY_WOW64_64KEY) as key:
    machine_guid = winreg.QueryValueEx(key, 'MachineGuid')[0]
    logger.info('MachineGuid: ' + machine_guid)
