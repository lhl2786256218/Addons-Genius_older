#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
int main()
{
	MessageBox(NULL, TEXT("感谢您使用Addons Genius"), TEXT("Addons Genius"), MB_OK);
	MessageBox(NULL, TEXT("请注意，该项目用于学习研究为免费开源项目!!!内部软件资源均来自互联网，如果你看到支付等相关字眼那么你一定是被骗了"), TEXT("Addons Genius"), MB_OK);
	MessageBox(NULL, TEXT("由ZPAU Team-Code storm 零点编写!仅一人维护难免出现Bug，发现不能运行及其他影响使用的问题请通过关于选项中的联系方式告诉我。资源收集不易。"), TEXT("Addons Genius"), MB_OK);
	while (1)
	{
UI1:	system("cls");
		system("color ed");
		cout << "欢迎使用Addons Genius" << endl;
		cout << "如果有需要的插件可以群内留言或私信我，我会尽力寻找并在下个版本添加!" << endl;
		cout << "技术讨论群630942685" << endl;
		cout << "1.混音工具" << endl;
		cout << "2.其他资源" << endl;
		cout << "3.关于"<<endl;
		cout << "0.退出" << endl;
		int selectUI;
		selectUI = getch();
		if (selectUI == '1')
		{
			while (1)
			{
UI2:			system("cls");
				cout << "1.插件" << endl;
				cout << "2.宿主软件" << endl;
				cout << "3.解决运行环境故障" << endl;
				cout << "0.返回上一级" << endl;
				int audiotools;
				audiotools = getch();
				if (audiotools == '1')
				{
UI3:				system("cls");
					cout << "请选择要查看的对象!" << endl;
					cout << "1. A.O.M Total Bundle" << endl;
					cout << "2. Antares Auto Tune Pro" << endl;
					cout << "3. Baby Audio Crystalline" << endl;
					cout << "4. Bertom DenoiserPro" << endl;
					cout << "5. Caelum Audio Choric" << endl;
					cout << "6. Cakewalk CA-2A" << endl;
					cout << "7. Eiosis E2Deesser" << endl;
					cout << "8. FabFilter Total Bundle" << endl;
					cout << "9. iZotope Ozone 10 Advanced" << endl;
					cout << "10. Klevgrand Pads" << endl;
					cout << "11. Maag Audio EQ4" << endl;
					cout << "12. Melodyne Studio" << endl;
					cout << "13. MiMU The Jellyfish" << endl;
					cout << "14. Effects Series" << endl;
					cout << "15. Reverb Classics" << endl;
					cout << "16. NovoNotes 3DX" << endl;
					cout << "17. Orb Synth" << endl;
					cout << "18. OrbProducerSuite" << endl;
					cout << "19. Output Portal" << endl;
					cout << "20. Roland ZENOLOGY Pro" << endl;
					cout << "21. SIR Audio Tools" << endl;
					cout << "22. Slate Digital 8件套" << endl;
					cout << "23. Soothe2" << endl;
					cout << "24. Sonible SmartEq" << endl;
					cout << "25. Steinberg Silk Emulator" << endl;
					cout << "26. TBProAudio bundle" << endl;
					cout << "27. Unfiltered Audio Indent" << endl;
					cout << "28. Unfiltered Audio Needlepoint" << endl;
					cout << "29. Valhalla" << endl;
					cout << "30. Wave Arts Tube Saturator" << endl;
					cout << "31. Waves Complete" << endl;
					cout << "32. Waves Ultimate" << endl;
					cout << "33. Waves Tune" << endl;
					cout << "0. 返回上一级" << endl;
					cout << "" << endl;
					cout << "请输入选项按回车键结束!" << endl;
					int addonsinfo;
					cout << "选项: ";
					cin>>addonsinfo;
					if (addonsinfo == 1)
					{
						while (1)
						{
							system("cls");
							cout << "1. 安装" << endl;
							cout << "2. 激活" << endl;
							cout << "0. 返回上一级" << endl;
							int AOM;
							AOM = getch();
							if (AOM == '1')
							{
								system("cls");
								system("A.O.M_Total_Bundle.bat");
								break;
							}
							else if (AOM == '2')
							{
								system("cls");
								system("A.O.M_Total_Bundle_Crack.bat");
								break;
							}
							else if (AOM == '0')
							{
								goto UI3;
							}
							else
							{
								system("cls");
								cout << "没这个选项!" << endl;
								Sleep(1000);
							}
						}
					}
					else if (addonsinfo == 2)
					{
						while (1)
						{
							system("cls");
							cout << "1. Antares Auto-Tune Vocal Compressor v1.0.0 CE.exe" << endl;
							cout << "2. Antares Auto-Tune Pro X v10.2.0 CE" << endl;
							cout << "0. 返回上一级" << endl;
							int Autotune;
							Autotune = getch();
							if (Autotune == '1')
							{
								system("cls");
								system("Antares Auto-Tune Vocal Compressor v1.0.0 CE.bat");
								break;
							}
							else if (Autotune == '2')
							{
								system("cls");
								system("Antares Auto-Tune Pro X v10.2.0 CE.bat");
								break;
							}
							else if (Autotune == '0')
							{
								goto UI3;
							}
							else
							{
								system("cls");
								cout << "错了!" << endl;
								Sleep(1000);
							}
						}

					}
					else if (addonsinfo == 3)
					{
						system("cls");
						system("Baby_Audio_Crystalline.bat");
					}
					else if (addonsinfo == 4)
					{
						system("cls");
						system("Bertom_DenoiserPro.bat");
					}
					else if (addonsinfo == 5)
					{
						while (1)
						{
							system("cls");
							cout << "1. 安装" << endl;
							cout << "2. 激活" << endl;
							cout << "0. 返回上一级" << endl;
							int CAC;
							CAC = getch();
							if (CAC == '1')
							{
								system("Caelum_Audio_Choric.bat");
								break;
							}
							else if (CAC == '2')
							{
								system("Caelum_Audio_Choric_Crack.bat");
								break;
							}
							else if (CAC == '0')
							{
								goto UI3;
							}
							else
							{
								cout << "哎呀，错啦!" << endl;
								Sleep(1000);
							}
						}
					}
					else if (addonsinfo == 6)
					{
						while (1)
						{
							system("cls");
							cout << "1. 安装" << endl;
							cout << "2. 激活" << endl;
							cout << "0. 返回上一级" << endl;
							int CA2A;
							CA2A = getch();
							if (CA2A == '1')
							{
								system("Cakewalk_CA-2A_Leveling_Amplifier.bat");
								break;
							}
							else if (CA2A == '2')
							{
								system("Cakewalk_CA-2A_Leveling_Amplifier_Crack.bat");
								break;
							}
							else if (CA2A == '0')
							{
								goto UI3;
							}
							else
							{
								cout << "错啦哦~" << endl;
								Sleep(1000);
							}
						}
					}
					else if (addonsinfo == 7)
					{
						system("cls");
						system("Eiosis.E2Deesser.bat");
					}
					else if (addonsinfo == 8)
					{
						system("cls");
						system("FabFilter_Total_Bundle.bat");
					}
					else if (addonsinfo == 9)
					{
						while (1)
						{
							system("cls");
							cout << "1. 安装Meter Tap 3" << endl;
							cout << "2. 安装Ozone Pro" << endl;
							cout << "0. 返回上一级" << endl;
							int iZotope;
							iZotope = getch();
							if (iZotope == '1')
							{
								system("Meter Tap 3.bat");
								break;
							}
							else if (iZotope == '2')
							{
								system("Ozone Pro.bat");
								break;
							}
							else if (iZotope == '0')
							{
								goto UI3;
							}
							else
							{
								cout << "哎呀!不对不对!" << endl;
								Sleep(1000);
							}
						}
					}
					else if (addonsinfo == 10)
					{
						system("cls");
						system("Klevgrand_Pads.bat");
					}
					else if (addonsinfo == 11)
					{
						while (1)
						{
							system("cls");
							cout << "1. 安装" << endl;
							cout << "2. 激活" << endl;
							cout << "0. 返回上一级" << endl;
							int MAE;
							MAE = getch();
							if (MAE == '1')
							{
								system("Maag_Audio_EQ4.bat");
								break;
							}
							else if (MAE == '2')
							{
								system("Maag_Audio_EQ4_Crack.bat");
								break;
							}
							else if (MAE == '0')
							{
								goto UI3;
							}
							else
							{
								cout << "这个选项不存在哦~" << endl;
								Sleep(1000);
							}
						}
					}
					else if (addonsinfo == 12)
					{
						system("cls");
						system("Melodyne_Studio.bat");
					}
					else if (addonsinfo == 13)
					{
						system("cls");
						system("MiMU_The_Jellyfish.bat");
					}
					else if (addonsinfo == 14)
					{
						while (1)
						{
							system("cls");
							cout << "1. 安装" << endl;
							cout << "2. 激活" << endl;
							cout << "0. 返回上一级" << endl;
							int NIES;
							NIES = getch();
							if (NIES == '1')
							{
								MessageBox(NULL, TEXT("请注意!!!该插件有“Choras(合唱)、Flanger(镶边)、Phaser(移相)”三种效果器将同时被安装，三次安装向导弹窗请全部确认不要关闭，否则将影响部分功能"), TEXT("Addons Genius"), MB_OK);
								MessageBox(NULL, TEXT("请注意!!!该插件有“Choras(合唱)、Flanger(镶边)、Phaser(移相)”三种效果器将同时被安装，三次安装向导弹窗请全部确认不要关闭，否则将影响部分功能"), TEXT("Addons Genius"), MB_OK);
								MessageBox(NULL, TEXT("请注意!!!该插件有“Choras(合唱)、Flanger(镶边)、Phaser(移相)”三种效果器将同时被安装，三次安装向导弹窗请全部确认不要关闭，否则将影响部分功能"), TEXT("Addons Genius"), MB_OK);
								system("Native_Instruments_Effects_Series_Phasis.bat");
								Sleep(1000);
								system("Native_Instruments_Effects_Series_Flair.bat");
								Sleep(1000);
								system("Native_Instruments_Effects_Series_Choral.bat");
								break;
							}
							else if (NIES == '2')
							{
								system("cls");
								cout << "该插件激活时将替换一份XML文件，如果你的插件运行报错那么请手动将/Packages/Native_Instruments_Effects_Series/R2R中的NativeAccess.xml";
								cout << "替换掉%COMMONPROGRAMFILES%/Native Instruments/Service Center/的NativeAccess.xml文件" << endl;
								system("Native_Instruments_Effects_Series_Crack.bat");
								break;
							}
							else if (NIES == '0')
							{
								goto UI3;
							}
							else
							{
								cout << "错啦错啦~" << endl;
								Sleep(1000);
							}
						}
					}
					else if (addonsinfo == 15)
					{
						while (1)
						{
							system("cls");
							cout << "1. 安装" << endl;
							cout << "2. 激活" << endl;
							cout << "0. 返回上一级" << endl;
							int RCIN;
							RCIN = getch();
							if (RCIN == '1')
							{
								system("cls");
								cout << "1. 安装Reverb Classics 24" << endl;
								cout << "2. 安装Reverb Classics 48" << endl;
								int RC;
								RC = getch();
								if (RC == '1')
								{
									system("RC24.bat");
									break;
								}
								else if (RC == '2')
								{
									system("RC48.bat");
									break;
								}
								else if (RC == '0')
								{
									goto UI3;
								}
								else
								{
									cout << "错啦!" << endl;
									Sleep(1000);
								}
							}
							else if (RCIN == '2')
							{
								cout << "该插件激活时将替换一份XML文件，如果你的插件运行报错那么请手动将/Packages/Native_Instruments_Reverb_Classics/R2R中的NativeAccess.xml";
								cout << "替换掉%COMMONPROGRAMFILES%/Native Instruments/Service Center/的NativeAccess.xml文件" << endl;
								system("RC_Crack.bat");
							}
							else
							{
								cout << "唉，没有这个选项啦~" << endl;
							}
						}
					}
					else if (addonsinfo == 16)
					{
						system("cls");
						system("NovoNotes_3DX.bat");
					}
					else if (addonsinfo == 17)
					{
						system("cls");
						system("Orb_Synth.bat");
					}
					else if (addonsinfo == 18)
					{
						system("cls");
						system("OrbProducerSuite.bat");
					}
					else if (addonsinfo == 19)
					{
						while (1)
						{
							system("cls");
							cout << "1. 安装" << endl;
							cout << "2. 激活" << endl;
							cout << "0. 返回上一级" << endl;
							int Output_Portal;
							Output_Portal = getch();
							if (Output_Portal == '1')
							{
								system("Output_Portal.bat");
								break;
							}
							else if (Output_Portal == '2')
							{
								system("Output_Portal_Crack.bat");
								break;
							}
							else if (Output_Portal == '0')
							{
								goto UI3;
							}
							else
							{
								system("cls");
								cout << "错误!" << endl;
								Sleep(1000);
							}
						}
					}
					else if (addonsinfo == 20)
					{
						system("cls");
						system("Roland_ZENOLOGY_Pro.bat");
					}
					else if (addonsinfo == 21)
					{
						while (1)
						{
							system("cls");
							cout << "1. 安装" << endl;
							cout << "2. 激活" << endl;
							cout << "0. 返回上一级" << endl;
							int StandardCLIP;
							StandardCLIP = getch();
							if (StandardCLIP == '1')
							{
								system("SIR_Audio_Tools_Standard_CLIP.bat");
								break;
							}
							else if (StandardCLIP == '2')
							{
								system("SIR_Audio_Tools_Standard_CLIP_Crack.bat");
								break;
							}
							else if (StandardCLIP == '0')
							{
								goto UI3;
							}
							else
							{
								system("cls");
								cout << "不是这样的" << endl;
								Sleep(1000);
							}
						}
					}
					else if (addonsinfo == 22)
					{
						while (1)
						{
						UI4:					system("cls");
							cout << "这是一个非常遗憾的消息！我并没有找到MetaTune有效的破解插件，或许你真的要使用官方版了。" << endl;
							cout << "1. Murda Melodies" << endl;
							cout << "2. Slate Digital FG-X" << endl;
							cout << "3. Slate.Digital.FG-X升级包" << endl;
							cout << "4. Slate.Digital.Fresh.Air" << endl;
							cout << "5. Slate.Digital.Infinity.EQ" << endl;
							cout << "6. Slate.Digital.VerbSuite.Classics" << endl;
							cout << "7. Slate.Digital.Virtual.Bus.Compressors" << endl;
							cout << "8. Slate.Digital.Virtual.Mix.Rack.Complete" << endl;
							cout << "9. Slate.Digital.Virtual.Tape.Machines" << endl;
							cout << "0. 返回上一级" << endl;
							int SDselectUI;
							SDselectUI = getch();
							if (SDselectUI == '1')
							{
								system("cls");
								system("Murda_Melodies.bat");
								break;
							}
							else if (SDselectUI == '2')
							{
								system("cls");
								system("Slate.Digital.FG-X.v1.4.0.4.bat");
								break;
							}
							else if (SDselectUI == '3')
							{
								system("cls");
								system("Slate_Digital FG-X v1.4.0.bat");
								break;
							}
							else if (SDselectUI == '4')
							{
								system("cls");
								system("Slate.Digital.Fresh.Air.bat");
								break;
							}
							else if (SDselectUI == '5')
							{
								system("cls");
								system("Slate.Digital.Infinity.EQ.bat");
								break;
							}
							else if (SDselectUI == '6')
							{
								while (1)
								{
									system("cls");
									cout << "1. 安装" << endl;
									cout << "2. 激活" << endl;
									cout << "0. 返回上一级" << endl;
									int SDVC;
									SDVC = getch();
									if (SDVC == '1')
									{
										system("Slate.Digital.VerbSuite.Classics.bat");
										break;
									}
									else if (SDVC == '2')
									{
										system("Slate.Digital.VerbSuite.Classics_Crack.bat");
										break;
									}
									else if (SDVC == '0')
									{
										goto UI4;
									}
									else
									{
										system("cls");
										cout << "这个选项是不存在的" << endl;
										Sleep(1000);
									}
									break;
								}
							}
							else if (SDselectUI == '7')
							{
								system("Slate.Digital.Virtual.Bus.Compressors.bat");
							}
							else if (SDselectUI == '8')
							{
								system("Slate.Digital.Virtual.Mix.Rack.Complete.bat");
							}
							else if (SDselectUI == '9')
							{
								system("Slate.Digital.Virtual.Tape.Machines.bat");
							}
							else if (SDselectUI == '0')
							{
								goto UI3;
							}
							else
							{
								cout << "不不不，这是不存在的!" << endl;
								Sleep(1000);
							}
						}
					}
					else if (addonsinfo == 23)
					{
						system("cls");
						system("Soothe2.bat");
					}
					else if (addonsinfo == 24)
					{
						system("cls");
						system("Sonible_SmartEqLive.bat");
					}
					else if (addonsinfo == 25)
					{
						system("cls");
						system("Steinberg_Silk_Emulator.bat");
					}
					else if (addonsinfo == 26)
					{
						system("cls");
						system("TBProAudio_bundle.bat");
					}
					else if (addonsinfo == 27)
					{
						system("cls");
						system("Unfiltered.Audio.Indent.bat");
					}
					else if (addonsinfo == 28)
					{
						system("cls");
						system("Unfiltered.Audio.Needlepoint.bat");
					}
					else if (addonsinfo == 29)
					{
						system("cls");
						system("ValhallaDSP_bundle.bat");
					}
					else if (addonsinfo == 30)
					{
						system("cls");
						system("Wave.Arts.Tube.Saturator.bat");
					}
					else if (addonsinfo == 31)
					{
						while (1)
						{
							system("cls");
							cout << "1. 安装" << endl;
							cout << "2. 服务修复" << endl;
							cout << "0. 返回上一级" << endl;
							int WAC;
							WAC = getch();
							if (WAC == '1')
							{
								MessageBox(NULL, TEXT("Waves Complete需要安装声卡驱动，和插件安装向导一共将有两个弹窗请一律同意不要关闭。"), TEXT("Addons Genius"), MB_OK);
								MessageBox(NULL, TEXT("请注意!!!如果驱动安装后你的电脑没有声音，请在任务栏(右下角)音频(就音量那)设置将输出选择为你电脑本身的声卡驱动"), TEXT("Addons Genius"), MB_OK);
								MessageBox(NULL, TEXT("安装后如果软件无法使用请选择第二项“服务修复”来修复，之后使用插件时报错某些python(.py)文件丢失直接忽略即可"), TEXT("Addons Genius"), MB_OK);
								system("cls");
								system("Waves_Complete.bat");
								break;
							}
							else if (WAC == '2')
							{
								system("cls");
								system("Waves_Complete_Servers_Repair.bat");
								break;
							}
							else if (WAC == '0')
							{
								goto UI3;
							}
							else
							{
								system("cls");
								cout << "错啦吖!" << endl;
								Sleep(1000);
							}
						}
					}
					else if (addonsinfo == 32)
					{
						while (1)
						{
							system("cls");
							cout << "1. 安装" << endl;
							cout << "2. 服务修复" << endl;
							cout << "0. 返回上一级" << endl;
							int WAU;
							WAU = getch();
							if (WAU == '1')
							{
								MessageBox(NULL, TEXT("安装后如果软件无法使用请选择第二项“服务修复”来修复，之后使用插件时报错某些python(.py)文件丢失直接忽略即可"), TEXT("Addons Genius"), MB_OK);
								system("cls");
								system("Waves_Ultimate.bat");
								break;
							}
							else if (WAU == '2')
							{
								system("cls");
								system("Waves_Ultimate_Servers_Repair.bat");
								break;
							}
							else if (WAU == '2')
							{
								goto UI3;
							}
							else
							{
								system("cls");
								cout << "哎呀!再试一下吧!" << endl;
								Sleep(1000);
							}
						}
					}
					else if (addonsinfo == 33)
					{
						system("cls");
						system("Waves_Tune.bat");
					}
					else if (addonsinfo == 0)
					{
						goto UI2;
					}
					else
					{
						system("cls");
						cout << "这个选项不在列表中哦~" << endl;
						Sleep(1000);
					}
				}
				else if (audiotools == '2')
				{
					while (1)
					{
UI5:					system("cls");
						cout << "请选择要安装的宿主软件!" << endl;
						cout << "1. Studio One 6" << endl;
						cout << "2. FL Studio" << endl;
						cout << "3. Pro tools" << endl;
						cout << "4. Cubase Pro" << endl;
						cout << "0. 返回上一级" << endl;
						int mix;
						mix = getch();
						if (mix == '1')
						{
							while (1)
							{
							UI6:					system("cls");
								cout << "1.方式1(较新)" << endl;
								cout << "2.方式2(较旧)" << endl;
								cout << "0.返回上一级" << endl;
								int STO;
								STO = getch();
								if (STO == '1')
								{
									while (1)
									{
										system("cls");
										cout << "1. 安装" << endl;
										cout << "2. 激活" << endl;
										cout << "0. 返回上一级" << endl;
										int STOIN;
										STOIN = getch();
										if (STOIN == '1')
										{
											system("Studio_one_6_Way1.bat");
										}
										else if (STOIN == '2')
										{
											cout << "已为你打开目录和注册机，请复制打开目录中的Studio One.exe文件替换你Studio One 6安装目录下的同名文件,之后使用注册机注册" << endl;
											system("Studio_one_6_Way1_Crack.bat");
										}
										else if (STOIN == '0')
										{
											goto UI6;
										}
										else
										{
											system("cls");
											cout << "木有这个选项!" << endl;
											Sleep(1000);
										}
									}
								}
								else if (STO == '2')
								{
									while (1)
									{
										system("cls");
										cout << "1.安装" << endl;
										cout << "2. 激活" << endl;
										cout << "0. 返回上一级" << endl;
										int STOIN2;
										STOIN2 = getch();
										if (STOIN2 == '1')
										{
											system("Studio_one_6_Way2.bat");
										}
										else if (STOIN2 == '2')
										{
											system("Studio_one_6_Way2_Crack.bat");
										}
										else if (STOIN2 == '0')
										{
											goto UI6;
										}
										else
										{
											system("cls");
											cout << "这选项有问题诶!" << endl;
											Sleep(1000);
										}
									}
								}
								else if (STO == '0')
								{
									goto UI5;
								}
								else
								{
									system("cls");
									cout << "一不小心又错啦~" << endl;
									Sleep(1000);
								}
							}
						}
						else if (mix == '2')
						{
							system("FL_Studio.bat");
						}
						else if (mix == '3')
						{
							system("Pro_Tools.bat");
						}
						else if (mix == '4')
						{
							while (1)
							{
								system("cls");
								cout << "1. 安装" << endl;
								cout << "2. 修复插件" << endl;
								cout << "0. 返回上一级" << endl;
								int Prot;
								Prot = getch();
								if (Prot == '1')
								{
									MessageBox(NULL, TEXT("这将运行3个安装向导请一律同意，以免影响插件正常使用!"), TEXT("Addons Genius"), MB_OK);
									system("Cubase_Pro.bat");
									break;
								}
								else if (Prot == '2')
								{
									system("Cubase_Pro_VST_Repair.bat");
									break;
								}
								else if (Prot == '0')
								{
									goto UI5;
								}
								else
								{
									system("cls");
									cout << "不对哦~" << endl;
									Sleep(1000);
								}
							}
						}
						else if (mix == '0')
						{
							goto UI2;
						}
						else
						{
							system("cls");
							cout << "错啦~" << endl;
							Sleep(1000);
						}
					}
				}
				else if (audiotools == '3')
				{
					MessageBox(NULL, TEXT("如果大多数插件及宿主软件均无法运行那么很可能是你的运行库没有安装!"), TEXT("Addons Genius"), MB_OK);
					system("Runtime.bat");
				}
				else if (audiotools == '0')
				{
					goto UI1;
				}
				else
				{
					cout << "嗷呜~没这个选项!" << endl;;
					Sleep(1000);
					goto UI1;
				}
			}
		}
		else if (selectUI == '2')
		{
			while (1)
			{
OTUI:			system("cls");
				cout << "1. 百度网盘加速" << endl;
				cout << "2. 国外网盘加速" << endl;
				cout << "3. 免费插件下载网站" << endl;
				cout << "4. 免费资源下载网站" << endl;
				cout << "5. 免费的数据恢复软件" << endl;
				cout << "6. 压缩包密码破解工具" << endl;
				int OTS;
				OTS = getch();
				if (OTS == '1')
				{
					MessageBox(NULL, TEXT("你会看到一个视频播放器的安装向导，但是请别惊讶，你的眼睛是对的!这个播放器是有网盘不限速下载功能的。"), TEXT("Addons Genius"), MB_OK);
					system("Geeplayer.bat");
				}
				else if (OTS == '2')
				{
					MessageBox(NULL, TEXT("当你看到一个很好的破解版插件需要下载它的时候，总是悲剧的发现这些网盘收费。"), TEXT("Addons Genius"), MB_OK);
					MessageBox(NULL, TEXT("但是不充钱它会比百度云还要“缺德”，200MB足够你下载5个小时。这时就需要用到加速平台了"), TEXT("Addons Genius"), MB_OK);
					while (1)
					{
						cout << "1. 速方云" << endl;
						cout << "2. 木薯云" << endl;
						int NDS;
						NDS = getch();
						if (NDS == '1')
						{
							system("start https://suufun.com/");
						}
						else if (NDS == '2')
						{
							system("start https://www.mushuniu.com/files/index.php");
						}
						else if (NDS == '0')
						{
							goto OTUI;
						}
						else
						{
							system("cls");
							cout << "错误!" << endl;
							Sleep(1000);
						}
					}
				}
				else if (OTS == '3')
				{
					MessageBox(NULL, TEXT("不要再去拼夕夕，头孢，某音商城，某东...去浪费钱买插件了!!!"), TEXT("Addons Genius"), MB_OK);
					MessageBox(NULL, TEXT("用这里的网站搜索都有"), TEXT("Addons Genius"), MB_OK);
					while (1)
					{
						system("cls");
						cout << "1. audioplugins.net" << endl;
						cout << "2. audiotools.pro" << endl;
						cout << "3. audioz.download" << endl;
						cout << "4. bedroomproducersblog.com" << endl;
						cout << "5. cracksvst.com" << endl;
						cout << "6. www.magesy.blog" << endl;
						cout << "7. www.magesypro.com" << endl;
						cout << "8. plugin-torrent.com" << endl;
						cout << "9. vst-crack.com" << endl;
						cout << "10. vsthd.com" << endl;
						cout << "11. vstoriginal.com" << endl;
						cout << "12. www.0daydown.net" << endl;
						cout << "13. 4download.net" << endl;
						cout << "0.返回上一级" << endl;
						cout << "" << endl;
						cout << "回车键结束!" << endl;
						cout << "选项: ";
						int ADDW;
						cin >> ADDW;
						switch (ADDW)
						{
						case 1:system("start https://audioplugins.net/"); break;
						case 2:system("start https://audiotools.pro/"); break;
						case 3:system("start https://audioz.download/"); break;
						case 4:system("start https://bedroomproducersblog.com/"); break;
						case 5:system("start https://cracksvst.com/"); break;
						case 6:system("start https://www.magesy.blog/"); break;
						case 7:system("start http://www.magesypro.com/"); break;
						case 8:system("start https://plugin-torrent.com/"); break;
						case 9:system("start https://vst-crack.com/"); break;
						case 10:system("start https://vsthd.com/"); break;
						case 11:system("start https://vstoriginal.com/"); break;
						case 12:system("start http://www.0daydown.net/"); break;
						case 13:system("start https://4download.net/"); break;
						case 0:goto OTUI; break;
						}
					}
				}
				else if (OTS == '4')
				{
					while (1)
					{
						system("cls");
						cout << "提供一些免费资源下载网站包括音视频素材和破解版软件" << endl;
						cout << "1. 4download.net" << endl;
						cout << "2. 辅助狗" << endl;
						cout << "3. 奇异秀工具箱" << endl;
						cout << "4. 软仓" << endl;
						cout << "5. 吾爱破解" << endl;
						cout << "0.返回上一级" << endl;
						int CSW;
						CSW = getch();
						switch (CSW)
						{
						case '1':system("start https://4download.net/"); break;
						case '2':system("start http://www.dogfuzhu.com/"); break;
						case '3':system("start http://www.qijishow.com/"); break;
						case '4':system("start https://ruancang.net/"); break;
						case '5':system("start https://www.52pojie.cn/forum.php"); break;
						case '0':goto OTUI; break;
						}
					}
				}
				else if (OTS == '5')
				{
					cout << "1. 安装" << endl;
					cout << "2. 激活" << endl;
					int DR;
					DR = getch();
					if (DR == '1')
					{
						system("EaseUS_Data_Recovery_Wizard.bat");
					}
					else if (DR == '2')
					{
						system("EaseUS_Data_Recovery_Wizard_Crack.bat");
					}
					else if (DR == '0')
					{
						goto OTUI;
					}
					else
					{
						system("cls");
						cout << "输入错误!" << endl;
						Sleep(1000);
					}
				}
				else if (OTS == '6')
				{
					system("Advanced.bat");
					break;
				}
				else if (OTS == '0')
				{
					goto UI1;
				}
				else
				{
					cout << "没有没有！" << endl;
				}
			}
		}
		else if (selectUI == '3')
		{
			cout << "Addons Genius";
			cout << "版本V1.0" << endl;
			cout << "Code storm 零点编写" << endl;
			cout << "QQ:2786256218" << endl;
			cout << "微信:zpauteamcodestorm0"<<endl;
			cout << "Github项目地址:https://github.com/lhl2786256218/Addons-Genius";
			int info;
			info = getch();
			goto UI1;
			if (info == '0')
			{
				goto UI1;
			}
			else
			{
				goto UI1;
			}
		}
		else if (selectUI == '0')
		{
			cout << "确定要退出吗?[Y/N]" << endl;
			char exits;
			exits = getch();
			if (exits == 'y')
			{
				exit(0);
			}
			else if (exits == 'n')
			{
				goto UI1;
			}
			else
			{
				goto UI1;
			}
		}
		else
		{
			cout << "请重试!任意键继续" << endl;
			Sleep(1000);
			goto UI1;
		}
	}
}