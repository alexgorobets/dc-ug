import os
from abc import ABC, abstractmethod
from settings import *
import subprocess


class Machine(ABC):
    """The interface for interacting with a machine"""

    @abstractmethod
    def upload(self): pass  # the method opens a session

    @abstractmethod
    def download(self): pass  # the method opens a session

    @abstractmethod
    def run(self, cmd): pass  # run command in the machine

    @abstractmethod
    def clean(self, file=None): pass


class LocalMachine(Machine):

    def __init__(self, bin_dir, include_dir):
        self.bin_dir = bin_dir
        self.include_dir = include_dir

    def __str__(self):
        return f'Local Machine settings:\n' \
               f'\tbin_dir: {self.bin_dir}\n\tinclude_dir: {self.include_dir}'

    def upload(self): pass

    def download(self): pass

    def run(self, cmd):
        try:
            subprocess.run(cmd)
            return cmd
        except FileNotFoundError as err:
            print(err)

    def clean(self, file=None):
        try:
            if file:
                os.remove(file)
        except FileNotFoundError:
            pass
