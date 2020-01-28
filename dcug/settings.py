from abc import ABC, abstractmethod


class SettingsError(Exception): pass


class SettingsFileNotFoundError(FileNotFoundError): pass


class Settings(ABC):
    """The Settings defines the interface for loading and modifying the main settings of the application"""

    def __init__(self, settings=None):
        self.values = self.load(settings)

    def __str__(self):
        return str(self.values)

    def load(self, settings: dict=None) -> dict:
        return settings


class JwasmSettings(Settings):

    def load(self, settings: dict=None) -> dict:
        if settings.keys() >= {'name', 'flags', 'ts_incs'}:
            return settings

        else:
            raise SettingsError


