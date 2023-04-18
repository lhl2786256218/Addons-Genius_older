@ECHO OFF
setlocal EnableDelayedExpansion
color 3e
title Addons Genius
PUSHD %~DP0 & cd /d "%~dp0"
%1 %2
mshta vbscript:createobject("shell.application").shellexecute("%~s0","goto :runas","","runas",1)(window.close)&goto :eof
:runas
cd "Bin\"
start "" "Addons Genius.exe"
echo Done!
echo Copyright ZPAU Team!
echo Thank you!
exit

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             