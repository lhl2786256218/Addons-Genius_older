@ECHO OFF
setlocal EnableDelayedExpansion
color 3e
title Sonible_SmartEqLive_Installer
PUSHD %~DP0 & cd /d "%~dp0"
%1 %2
mshta vbscript:createobject("shell.application").shellexecute("%~s0","goto :runas","","runas",1)(window.close)&goto :eof
:runas
taskkill /f /im COSMOS.exe
taskkill /f /im WavesLocalServer.exe
taskkill /f /im WavesPluginServer.exe
choice /t 1 /d y /n >nul
start  "" "%PROGRAMDATA%\Waves Audio\WavesLocalServer\WavesLocalServer.bundle\Contents\Win64\WavesLocalServer.exe"
start "" "%PROGRAMDATA%\Waves Audio\WavesPluginServer\WavesPluginServerV14.1.bundle\Contents\Win64\WavesPluginServer.exe"
echo Done!
echo Copyright ZPAU Team!
echo Thank you!
pause >nul
exit
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    