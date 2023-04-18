@ECHO OFF
setlocal EnableDelayedExpansion
color 3e
title Slate_Digital_VerbSuite_Classics_Installer
PUSHD %~DP0 & cd /d "%~dp0"
%1 %2
mshta vbscript:createobject("shell.application").shellexecute("%~s0","goto :runas","","runas",1)(window.close)&goto :eof
:runas
cd "Packages\Slate_Digital_Set_of_8\Slate_Digital_VerbSuite_Classic\"
xcopy "Packages\Slate_Digital_Set_of_8\Slate_Digital_VerbSuite_Classic\Impulse Responses\" "C:\Program files\Impulse Responses\" /E/C/I/F
start "" "C:\Program files\Impulse Responses\VSC_LibPlacer.exe"
echo Done!
echo Copyright ZPAU Team!
echo Thank you!
pause >nul
exit

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             