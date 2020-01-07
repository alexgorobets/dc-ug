@echo off

set version=3.8
set venv=dc-ug

py -%version% -m pew in %venv% main.py %*
