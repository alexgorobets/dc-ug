@echo off

set version=3.8
set venv=dc-ug

echo %venv% virtual environment is being removed
py -%version% -m pew rm %venv%
echo %venv% virtual environment is removed
