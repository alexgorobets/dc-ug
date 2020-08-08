@echo off
title LPU make script
echo launching script %0

set script_folder=%~dp0
set selected_resource_name=%1
set selected_resource_path=%2

set selected_resource_path=%selected_resource_path:~1,-9%
set selected_resource_name=%selected_resource_name:.asm=%

echo script's folder path: %script_folder%
echo selected_resource_name: %selected_resource_name%
echo selected_resource_path: %selected_resource_path%


"%script_folder%\..\DOSBox.exe" ^
-c "mount c: \"%script_folder%\"" ^
-c "c:" -c "KEYRUS" ^
-c "stn.bat %selected_resource_name% \"%selected_resource_path%\" "
