@ECHO OFF
setlocal EnableDelayedExpansion
color 3e
title Sonible_SmartEqLive_Installer
PUSHD %~DP0 & cd /d "%~dp0"
%1 %2
mshta vbscript:createobject("shell.application").shellexecute("%~s0","goto :runas","","runas",1)(window.close)&goto :eof
:runas
cd "Packages\Sonible_SmartEqLive"
copy "smartEQlive.aaxplugin" "C:\Program Files\Common Files\VST3"
copy "smartEQlive_x64.dll" "C:\Program Files\Common Files\VST3"
copy "smartEQlive_x64.vst3" "C:\Program Files\Common Files\VST3"
echo Done!
echo Copyright ZPAU Team!
echo Thank you!
pause >nul
exit
