#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
int main()
{
	MessageBox(NULL, TEXT("��л��ʹ��Addons Genius"), TEXT("Addons Genius"), MB_OK);
	MessageBox(NULL, TEXT("��ע�⣬����Ŀ����ѧϰ�о�Ϊ��ѿ�Դ��Ŀ!!!�ڲ������Դ�����Ի�����������㿴��֧�������������ô��һ���Ǳ�ƭ��"), TEXT("Addons Genius"), MB_OK);
	MessageBox(NULL, TEXT("��ZPAU Team-Code storm ����д!��һ��ά���������Bug�����ֲ������м�����Ӱ��ʹ�õ�������ͨ������ѡ���е���ϵ��ʽ�����ҡ���Դ�ռ����ס�"), TEXT("Addons Genius"), MB_OK);
	while (1)
	{
UI1:	system("cls");
		system("color ed");
		cout << "��ӭʹ��Addons Genius" << endl;
		cout << "�������Ҫ�Ĳ������Ⱥ�����Ի�˽���ң��һᾡ��Ѱ�Ҳ����¸��汾���!" << endl;
		cout << "��������Ⱥ630942685" << endl;
		cout << "1.��������" << endl;
		cout << "2.������Դ" << endl;
		cout << "3.����"<<endl;
		cout << "0.�˳�" << endl;
		int selectUI;
		selectUI = getch();
		if (selectUI == '1')
		{
			while (1)
			{
UI2:			system("cls");
				cout << "1.���" << endl;
				cout << "2.�������" << endl;
				cout << "3.������л�������" << endl;
				cout << "0.������һ��" << endl;
				int audiotools;
				audiotools = getch();
				if (audiotools == '1')
				{
UI3:				system("cls");
					cout << "��ѡ��Ҫ�鿴�Ķ���!" << endl;
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
					cout << "22. Slate Digital 8����" << endl;
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
					cout << "0. ������һ��" << endl;
					cout << "" << endl;
					cout << "������ѡ��س�������!" << endl;
					int addonsinfo;
					cout << "ѡ��: ";
					cin>>addonsinfo;
					if (addonsinfo == 1)
					{
						while (1)
						{
							system("cls");
							cout << "1. ��װ" << endl;
							cout << "2. ����" << endl;
							cout << "0. ������һ��" << endl;
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
								cout << "û���ѡ��!" << endl;
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
							cout << "0. ������һ��" << endl;
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
								cout << "����!" << endl;
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
							cout << "1. ��װ" << endl;
							cout << "2. ����" << endl;
							cout << "0. ������һ��" << endl;
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
								cout << "��ѽ������!" << endl;
								Sleep(1000);
							}
						}
					}
					else if (addonsinfo == 6)
					{
						while (1)
						{
							system("cls");
							cout << "1. ��װ" << endl;
							cout << "2. ����" << endl;
							cout << "0. ������һ��" << endl;
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
								cout << "����Ŷ~" << endl;
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
							cout << "1. ��װMeter Tap 3" << endl;
							cout << "2. ��װOzone Pro" << endl;
							cout << "0. ������һ��" << endl;
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
								cout << "��ѽ!���Բ���!" << endl;
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
							cout << "1. ��װ" << endl;
							cout << "2. ����" << endl;
							cout << "0. ������һ��" << endl;
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
								cout << "���ѡ�����Ŷ~" << endl;
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
							cout << "1. ��װ" << endl;
							cout << "2. ����" << endl;
							cout << "0. ������һ��" << endl;
							int NIES;
							NIES = getch();
							if (NIES == '1')
							{
								MessageBox(NULL, TEXT("��ע��!!!�ò���С�Choras(�ϳ�)��Flanger(���)��Phaser(����)������Ч������ͬʱ����װ�����ΰ�װ�򵼵�����ȫ��ȷ�ϲ�Ҫ�رգ�����Ӱ�첿�ֹ���"), TEXT("Addons Genius"), MB_OK);
								MessageBox(NULL, TEXT("��ע��!!!�ò���С�Choras(�ϳ�)��Flanger(���)��Phaser(����)������Ч������ͬʱ����װ�����ΰ�װ�򵼵�����ȫ��ȷ�ϲ�Ҫ�رգ�����Ӱ�첿�ֹ���"), TEXT("Addons Genius"), MB_OK);
								MessageBox(NULL, TEXT("��ע��!!!�ò���С�Choras(�ϳ�)��Flanger(���)��Phaser(����)������Ч������ͬʱ����װ�����ΰ�װ�򵼵�����ȫ��ȷ�ϲ�Ҫ�رգ�����Ӱ�첿�ֹ���"), TEXT("Addons Genius"), MB_OK);
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
								cout << "�ò������ʱ���滻һ��XML�ļ��������Ĳ�����б�����ô���ֶ���/Packages/Native_Instruments_Effects_Series/R2R�е�NativeAccess.xml";
								cout << "�滻��%COMMONPROGRAMFILES%/Native Instruments/Service Center/��NativeAccess.xml�ļ�" << endl;
								system("Native_Instruments_Effects_Series_Crack.bat");
								break;
							}
							else if (NIES == '0')
							{
								goto UI3;
							}
							else
							{
								cout << "��������~" << endl;
								Sleep(1000);
							}
						}
					}
					else if (addonsinfo == 15)
					{
						while (1)
						{
							system("cls");
							cout << "1. ��װ" << endl;
							cout << "2. ����" << endl;
							cout << "0. ������һ��" << endl;
							int RCIN;
							RCIN = getch();
							if (RCIN == '1')
							{
								system("cls");
								cout << "1. ��װReverb Classics 24" << endl;
								cout << "2. ��װReverb Classics 48" << endl;
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
									cout << "����!" << endl;
									Sleep(1000);
								}
							}
							else if (RCIN == '2')
							{
								cout << "�ò������ʱ���滻һ��XML�ļ��������Ĳ�����б�����ô���ֶ���/Packages/Native_Instruments_Reverb_Classics/R2R�е�NativeAccess.xml";
								cout << "�滻��%COMMONPROGRAMFILES%/Native Instruments/Service Center/��NativeAccess.xml�ļ�" << endl;
								system("RC_Crack.bat");
							}
							else
							{
								cout << "����û�����ѡ����~" << endl;
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
							cout << "1. ��װ" << endl;
							cout << "2. ����" << endl;
							cout << "0. ������һ��" << endl;
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
								cout << "����!" << endl;
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
							cout << "1. ��װ" << endl;
							cout << "2. ����" << endl;
							cout << "0. ������һ��" << endl;
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
								cout << "����������" << endl;
								Sleep(1000);
							}
						}
					}
					else if (addonsinfo == 22)
					{
						while (1)
						{
						UI4:					system("cls");
							cout << "����һ���ǳ��ź�����Ϣ���Ҳ�û���ҵ�MetaTune��Ч���ƽ��������������Ҫʹ�ùٷ����ˡ�" << endl;
							cout << "1. Murda Melodies" << endl;
							cout << "2. Slate Digital FG-X" << endl;
							cout << "3. Slate.Digital.FG-X������" << endl;
							cout << "4. Slate.Digital.Fresh.Air" << endl;
							cout << "5. Slate.Digital.Infinity.EQ" << endl;
							cout << "6. Slate.Digital.VerbSuite.Classics" << endl;
							cout << "7. Slate.Digital.Virtual.Bus.Compressors" << endl;
							cout << "8. Slate.Digital.Virtual.Mix.Rack.Complete" << endl;
							cout << "9. Slate.Digital.Virtual.Tape.Machines" << endl;
							cout << "0. ������һ��" << endl;
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
									cout << "1. ��װ" << endl;
									cout << "2. ����" << endl;
									cout << "0. ������һ��" << endl;
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
										cout << "���ѡ���ǲ����ڵ�" << endl;
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
								cout << "�����������ǲ����ڵ�!" << endl;
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
							cout << "1. ��װ" << endl;
							cout << "2. �����޸�" << endl;
							cout << "0. ������һ��" << endl;
							int WAC;
							WAC = getch();
							if (WAC == '1')
							{
								MessageBox(NULL, TEXT("Waves Complete��Ҫ��װ�����������Ͳ����װ��һ����������������һ��ͬ�ⲻҪ�رա�"), TEXT("Addons Genius"), MB_OK);
								MessageBox(NULL, TEXT("��ע��!!!���������װ����ĵ���û������������������(���½�)��Ƶ(��������)���ý����ѡ��Ϊ����Ա������������"), TEXT("Addons Genius"), MB_OK);
								MessageBox(NULL, TEXT("��װ���������޷�ʹ����ѡ��ڶ�������޸������޸���֮��ʹ�ò��ʱ����ĳЩpython(.py)�ļ���ʧֱ�Ӻ��Լ���"), TEXT("Addons Genius"), MB_OK);
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
								cout << "����߹!" << endl;
								Sleep(1000);
							}
						}
					}
					else if (addonsinfo == 32)
					{
						while (1)
						{
							system("cls");
							cout << "1. ��װ" << endl;
							cout << "2. �����޸�" << endl;
							cout << "0. ������һ��" << endl;
							int WAU;
							WAU = getch();
							if (WAU == '1')
							{
								MessageBox(NULL, TEXT("��װ���������޷�ʹ����ѡ��ڶ�������޸������޸���֮��ʹ�ò��ʱ����ĳЩpython(.py)�ļ���ʧֱ�Ӻ��Լ���"), TEXT("Addons Genius"), MB_OK);
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
								cout << "��ѽ!����һ�°�!" << endl;
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
						cout << "���ѡ����б���Ŷ~" << endl;
						Sleep(1000);
					}
				}
				else if (audiotools == '2')
				{
					while (1)
					{
UI5:					system("cls");
						cout << "��ѡ��Ҫ��װ���������!" << endl;
						cout << "1. Studio One 6" << endl;
						cout << "2. FL Studio" << endl;
						cout << "3. Pro tools" << endl;
						cout << "4. Cubase Pro" << endl;
						cout << "0. ������һ��" << endl;
						int mix;
						mix = getch();
						if (mix == '1')
						{
							while (1)
							{
							UI6:					system("cls");
								cout << "1.��ʽ1(����)" << endl;
								cout << "2.��ʽ2(�Ͼ�)" << endl;
								cout << "0.������һ��" << endl;
								int STO;
								STO = getch();
								if (STO == '1')
								{
									while (1)
									{
										system("cls");
										cout << "1. ��װ" << endl;
										cout << "2. ����" << endl;
										cout << "0. ������һ��" << endl;
										int STOIN;
										STOIN = getch();
										if (STOIN == '1')
										{
											system("Studio_one_6_Way1.bat");
										}
										else if (STOIN == '2')
										{
											cout << "��Ϊ���Ŀ¼��ע������븴�ƴ�Ŀ¼�е�Studio One.exe�ļ��滻��Studio One 6��װĿ¼�µ�ͬ���ļ�,֮��ʹ��ע���ע��" << endl;
											system("Studio_one_6_Way1_Crack.bat");
										}
										else if (STOIN == '0')
										{
											goto UI6;
										}
										else
										{
											system("cls");
											cout << "ľ�����ѡ��!" << endl;
											Sleep(1000);
										}
									}
								}
								else if (STO == '2')
								{
									while (1)
									{
										system("cls");
										cout << "1.��װ" << endl;
										cout << "2. ����" << endl;
										cout << "0. ������һ��" << endl;
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
											cout << "��ѡ����������!" << endl;
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
									cout << "һ��С���ִ���~" << endl;
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
								cout << "1. ��װ" << endl;
								cout << "2. �޸����" << endl;
								cout << "0. ������һ��" << endl;
								int Prot;
								Prot = getch();
								if (Prot == '1')
								{
									MessageBox(NULL, TEXT("�⽫����3����װ����һ��ͬ�⣬����Ӱ��������ʹ��!"), TEXT("Addons Genius"), MB_OK);
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
									cout << "����Ŷ~" << endl;
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
							cout << "����~" << endl;
							Sleep(1000);
						}
					}
				}
				else if (audiotools == '3')
				{
					MessageBox(NULL, TEXT("�����������������������޷�������ô�ܿ�����������п�û�а�װ!"), TEXT("Addons Genius"), MB_OK);
					system("Runtime.bat");
				}
				else if (audiotools == '0')
				{
					goto UI1;
				}
				else
				{
					cout << "���~û���ѡ��!" << endl;;
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
				cout << "1. �ٶ����̼���" << endl;
				cout << "2. �������̼���" << endl;
				cout << "3. ��Ѳ��������վ" << endl;
				cout << "4. �����Դ������վ" << endl;
				cout << "5. ��ѵ����ݻָ����" << endl;
				cout << "6. ѹ���������ƽ⹤��" << endl;
				int OTS;
				OTS = getch();
				if (OTS == '1')
				{
					MessageBox(NULL, TEXT("��ῴ��һ����Ƶ�������İ�װ�򵼣���������ȣ�����۾��ǶԵ�!����������������̲��������ع��ܵġ�"), TEXT("Addons Genius"), MB_OK);
					system("Geeplayer.bat");
				}
				else if (OTS == '2')
				{
					MessageBox(NULL, TEXT("���㿴��һ���ܺõ��ƽ������Ҫ��������ʱ�����Ǳ���ķ�����Щ�����շѡ�"), TEXT("Addons Genius"), MB_OK);
					MessageBox(NULL, TEXT("���ǲ���Ǯ����Ȱٶ��ƻ�Ҫ��ȱ�¡���200MB�㹻������5��Сʱ����ʱ����Ҫ�õ�����ƽ̨��"), TEXT("Addons Genius"), MB_OK);
					while (1)
					{
						cout << "1. �ٷ���" << endl;
						cout << "2. ľ����" << endl;
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
							cout << "����!" << endl;
							Sleep(1000);
						}
					}
				}
				else if (OTS == '3')
				{
					MessageBox(NULL, TEXT("��Ҫ��ȥƴϦϦ��ͷ�ߣ�ĳ���̳ǣ�ĳ��...ȥ�˷�Ǯ������!!!"), TEXT("Addons Genius"), MB_OK);
					MessageBox(NULL, TEXT("���������վ��������"), TEXT("Addons Genius"), MB_OK);
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
						cout << "0.������һ��" << endl;
						cout << "" << endl;
						cout << "�س�������!" << endl;
						cout << "ѡ��: ";
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
						cout << "�ṩһЩ�����Դ������վ��������Ƶ�زĺ��ƽ�����" << endl;
						cout << "1. 4download.net" << endl;
						cout << "2. ������" << endl;
						cout << "3. �����㹤����" << endl;
						cout << "4. ���" << endl;
						cout << "5. �ᰮ�ƽ�" << endl;
						cout << "0.������һ��" << endl;
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
					cout << "1. ��װ" << endl;
					cout << "2. ����" << endl;
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
						cout << "�������!" << endl;
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
					cout << "û��û�У�" << endl;
				}
			}
		}
		else if (selectUI == '3')
		{
			cout << "Addons Genius";
			cout << "�汾V1.0" << endl;
			cout << "Code storm ����д" << endl;
			cout << "QQ:2786256218" << endl;
			cout << "΢��:zpauteamcodestorm0"<<endl;
			cout << "Github��Ŀ��ַ:https://github.com/lhl2786256218/Addons-Genius";
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
			cout << "ȷ��Ҫ�˳���?[Y/N]" << endl;
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
			cout << "������!���������" << endl;
			Sleep(1000);
			goto UI1;
		}
	}
}