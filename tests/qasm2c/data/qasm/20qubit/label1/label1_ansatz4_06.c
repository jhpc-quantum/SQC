#include "sqc_api.h"
#include <stdlib.h>
#include <string.h>

#if defined(FAKE_PROVIDER) 
#define KIND (Fake20QV1)
#ifndef OPT_LEVEL
sqcFakeProviderOption opt = {0};
#else
sqcFakeProviderOption opt = {OPT_LEVEL};
#endif
#elif defined(IBM_PROVIDER)
#fatal /* Not Implemented */
#else /* other */
#fatal 
#endif

int main(int argc, char *argv[])
{
  sqcInitialize(NULL, NULL);

  sqcQC* q;
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -2.2357299974909344, 0);
  sqcRZGate(q, 1.493866319987287, 0);
  sqcRYGate(q, -0.18110981101835014, 1);
  sqcRZGate(q, -0.4117582019168878, 1);
  sqcRYGate(q, 1.5692829333072549, 2);
  sqcRZGate(q, 0.20892875153438872, 2);
  sqcRYGate(q, 1.5864181162690056, 3);
  sqcRZGate(q, -2.661695947548919, 3);
  sqcRYGate(q, 3.127062059091581, 4);
  sqcRZGate(q, 0.12225363451804849, 4);
  sqcRYGate(q, 3.0635012434444624, 5);
  sqcRZGate(q, 3.118041425580781, 5);
  sqcRYGate(q, -0.024869789196854213, 6);
  sqcRZGate(q, -0.1328168564010328, 6);
  sqcRYGate(q, -3.1129089729324972, 7);
  sqcRZGate(q, -0.09178789748685735, 7);
  sqcRYGate(q, -0.14829668020108144, 8);
  sqcRZGate(q, -2.880971851918243, 8);
  sqcRYGate(q, -0.4499912893996978, 9);
  sqcRZGate(q, 0.09948842257566781, 9);
  sqcRYGate(q, 1.8929882358863503, 10);
  sqcRZGate(q, -2.91371338859075, 10);
  sqcRYGate(q, 2.623663261677976, 11);
  sqcRZGate(q, 2.620218873394946, 11);
  sqcRYGate(q, 0.007936232671563636, 12);
  sqcRZGate(q, -3.068419097491548, 12);
  sqcRYGate(q, -0.004681815156476254, 13);
  sqcRZGate(q, -0.02831643239078474, 13);
  sqcRYGate(q, 1.0544819832744556, 14);
  sqcRZGate(q, -1.88500786277835, 14);
  sqcRYGate(q, -1.4333285469173722, 15);
  sqcRZGate(q, -3.1246086962806436, 15);
  sqcRYGate(q, -2.862277712141234, 16);
  sqcRZGate(q, -3.1220650323460184, 16);
  sqcRYGate(q, -0.23725541871101719, 17);
  sqcRZGate(q, 0.05756867864039345, 17);
  sqcRYGate(q, -2.8598061378665474, 18);
  sqcRZGate(q, 2.5352386778424907, 18);
  sqcRYGate(q, 2.9173887364013673, 19);
  sqcRZGate(q, -2.9520687603324216, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.7242001481397702, 0);
  sqcRZGate(q, 1.2212014273031968, 0);
  sqcRYGate(q, -2.2221228382998715, 1);
  sqcRZGate(q, 1.660144035832889, 1);
  sqcRYGate(q, -0.31088360596746334, 2);
  sqcRZGate(q, -0.06590284908351435, 2);
  sqcRYGate(q, 2.866381421766429, 3);
  sqcRZGate(q, -2.6299370296577864, 3);
  sqcRYGate(q, -3.116831746642087, 4);
  sqcRZGate(q, -3.110973963646011, 4);
  sqcRYGate(q, 3.124461111431622, 5);
  sqcRZGate(q, -0.09800250685157945, 5);
  sqcRYGate(q, 1.546883985079267, 6);
  sqcRZGate(q, -2.6594599261796943, 6);
  sqcRYGate(q, 1.5379175207178584, 7);
  sqcRZGate(q, 0.0011143059697146422, 7);
  sqcRYGate(q, -0.8928792693019583, 8);
  sqcRZGate(q, 2.6238504692518076, 8);
  sqcRYGate(q, -0.1766732607398877, 9);
  sqcRZGate(q, 0.08501376768072699, 9);
  sqcRYGate(q, 2.4555841408155894, 10);
  sqcRZGate(q, -0.42945703088155085, 10);
  sqcRYGate(q, -0.059320928119143794, 11);
  sqcRZGate(q, -2.6572126666415707, 11);
  sqcRYGate(q, -2.3496836065109448, 12);
  sqcRZGate(q, 1.6893065523232187, 12);
  sqcRYGate(q, 1.746950851990303, 13);
  sqcRZGate(q, 1.2869239174671678, 13);
  sqcRYGate(q, -1.5793880797916078, 14);
  sqcRZGate(q, -1.5438311422408988, 14);
  sqcRYGate(q, -1.70704555788408, 15);
  sqcRZGate(q, -2.2490440874407884, 15);
  sqcRYGate(q, 0.028162756474048756, 16);
  sqcRZGate(q, -0.5236560511984344, 16);
  sqcRYGate(q, -0.02348038822413656, 17);
  sqcRZGate(q, 1.4414322730135987, 17);
  sqcRYGate(q, 2.5932891634446382, 18);
  sqcRZGate(q, 1.11547871882249, 18);
  sqcRYGate(q, -1.965195693798097, 19);
  sqcRZGate(q, 0.3085090079675643, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.07638375993262513, 0);
  sqcRZGate(q, -2.7079302344136034, 0);
  sqcRYGate(q, -1.9920096006152723, 1);
  sqcRZGate(q, 1.5728873608804799, 1);
  sqcRYGate(q, -1.565287654986129, 2);
  sqcRZGate(q, 1.8925371376191116, 2);
  sqcRYGate(q, -1.626019998772659, 3);
  sqcRZGate(q, -2.941879575815743, 3);
  sqcRYGate(q, -0.04881971431818322, 4);
  sqcRZGate(q, -0.05630918767823978, 4);
  sqcRYGate(q, -2.861340423707726, 5);
  sqcRZGate(q, -0.04478002156328245, 5);
  sqcRYGate(q, 3.13911597773953, 6);
  sqcRZGate(q, -2.6637728354546812, 6);
  sqcRYGate(q, 0.8406958714548741, 7);
  sqcRZGate(q, 3.1396662537069844, 7);
  sqcRYGate(q, -3.125255734498484, 8);
  sqcRZGate(q, -0.6537068551160373, 8);
  sqcRYGate(q, 2.569552286742605, 9);
  sqcRZGate(q, -0.004092534403313586, 9);
  sqcRYGate(q, -3.140049394310475, 10);
  sqcRZGate(q, 2.42714895712249, 10);
  sqcRYGate(q, -3.1354710245663346, 11);
  sqcRZGate(q, -0.050993002053004055, 11);
  sqcRYGate(q, -3.1325432601741374, 12);
  sqcRZGate(q, -1.176789928397456, 12);
  sqcRYGate(q, 3.1313138562257294, 13);
  sqcRZGate(q, -0.6559519112881748, 13);
  sqcRYGate(q, -1.2679782317000439, 14);
  sqcRZGate(q, -2.226671967649761, 14);
  sqcRYGate(q, -3.1069319157112267, 15);
  sqcRZGate(q, -0.6990350025326558, 15);
  sqcRYGate(q, -0.08012763261697727, 16);
  sqcRZGate(q, -2.4302581976584277, 16);
  sqcRYGate(q, -2.941417679805384, 17);
  sqcRZGate(q, 1.8476565879209659, 17);
  sqcRYGate(q, -1.5524242881824988, 18);
  sqcRZGate(q, -2.544951946755302, 18);
  sqcRYGate(q, -1.6690963835928212, 19);
  sqcRZGate(q, 1.6160323086343908, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.4433462171407716, 0);
  sqcRZGate(q, -1.4322671268313512, 0);
  sqcRYGate(q, -0.5886930306208856, 1);
  sqcRZGate(q, -1.3643321176129382, 1);
  sqcRYGate(q, -1.5535053874819433, 2);
  sqcRZGate(q, -1.6869184860739184, 2);
  sqcRYGate(q, 2.8717717818138158, 3);
  sqcRZGate(q, 0.2915865106847759, 3);
  sqcRYGate(q, 1.8315086132766005, 4);
  sqcRZGate(q, 0.03261957531679104, 4);
  sqcRYGate(q, -0.14871667247837336, 5);
  sqcRZGate(q, 1.3849447802768404, 5);
  sqcRYGate(q, -1.5963306735277873, 6);
  sqcRZGate(q, -0.04416950642710265, 6);
  sqcRYGate(q, 1.5847502096202382, 7);
  sqcRZGate(q, 3.047952699147817, 7);
  sqcRYGate(q, 0.24031873402582885, 8);
  sqcRZGate(q, 3.0906412613013985, 8);
  sqcRYGate(q, 1.363167595598897, 9);
  sqcRZGate(q, -2.4593692997072187, 9);
  sqcRYGate(q, 1.415200319117086, 10);
  sqcRZGate(q, 1.4046576860096138, 10);
  sqcRYGate(q, 0.07339115644193135, 11);
  sqcRZGate(q, -2.6991913473314586, 11);
  sqcRYGate(q, 0.26154230240503973, 12);
  sqcRZGate(q, -2.2284721411715043, 12);
  sqcRYGate(q, -1.492945231368871, 13);
  sqcRZGate(q, -2.7914675599135603, 13);
  sqcRYGate(q, -0.1792573434956699, 14);
  sqcRZGate(q, -1.5173087953114948, 14);
  sqcRYGate(q, -0.6308168278576636, 15);
  sqcRZGate(q, -2.8553150247743657, 15);
  sqcRYGate(q, -2.5540520819254215, 16);
  sqcRZGate(q, -1.6329562462285956, 16);
  sqcRYGate(q, -1.9210227479080073, 17);
  sqcRZGate(q, -2.0687932592473985, 17);
  sqcRYGate(q, 0.7995505404624149, 18);
  sqcRZGate(q, 2.4054307642265553, 18);
  sqcRYGate(q, -0.3302879551306699, 19);
  sqcRZGate(q, -0.2939364768864686, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5571054270184241, 0);
  sqcRZGate(q, 1.6279224623128679, 0);
  sqcRYGate(q, 1.6591040910100692, 1);
  sqcRZGate(q, -0.23326323048585232, 1);
  sqcRYGate(q, 3.115856579109544, 2);
  sqcRZGate(q, -1.2874245899689258, 2);
  sqcRYGate(q, 1.6185691631278702, 3);
  sqcRZGate(q, -1.973767831061288, 3);
  sqcRYGate(q, 2.8428886416325114, 4);
  sqcRZGate(q, 1.5957666910747168, 4);
  sqcRYGate(q, 0.003064064999751537, 5);
  sqcRZGate(q, 0.29040657668912484, 5);
  sqcRYGate(q, 2.950801797728564, 6);
  sqcRZGate(q, 2.9361433931067986, 6);
  sqcRYGate(q, -0.5574250347675678, 7);
  sqcRZGate(q, 0.11690547224249402, 7);
  sqcRYGate(q, 1.2386084130119284, 8);
  sqcRZGate(q, -2.2387457599837925, 8);
  sqcRYGate(q, 0.13224691695089683, 9);
  sqcRZGate(q, 2.6352627976674654, 9);
  sqcRYGate(q, -1.72297865088463, 10);
  sqcRZGate(q, -0.41651489110661455, 10);
  sqcRYGate(q, 0.3543121031595962, 11);
  sqcRZGate(q, -2.1618453201104195, 11);
  sqcRYGate(q, 0.5248798739272142, 12);
  sqcRZGate(q, -0.4557357440062945, 12);
  sqcRYGate(q, 1.889303346744394, 13);
  sqcRZGate(q, 2.04994984776836, 13);
  sqcRYGate(q, -0.3012470338667745, 14);
  sqcRZGate(q, -2.748674029166839, 14);
  sqcRYGate(q, -0.08933748237510475, 15);
  sqcRZGate(q, 3.0011452082879098, 15);
  sqcRYGate(q, -1.410109668783761, 16);
  sqcRZGate(q, -1.4758802384649234, 16);
  sqcRYGate(q, -1.3919452475157175, 17);
  sqcRZGate(q, -1.5506546027109005, 17);
  sqcRYGate(q, 1.5336977559648555, 18);
  sqcRZGate(q, 0.6076702345457896, 18);
  sqcRYGate(q, -2.60614721092255, 19);
  sqcRZGate(q, -2.212139791160479, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.651782786502527, 0);
  sqcRZGate(q, -1.6137664273362937, 0);
  sqcRYGate(q, -3.0060863237178523, 1);
  sqcRZGate(q, 3.0782993416013684, 1);
  sqcRYGate(q, 3.0065967135407905, 2);
  sqcRZGate(q, -1.8477097364693122, 2);
  sqcRYGate(q, 3.0800074586251958, 3);
  sqcRZGate(q, 1.2891049793047227, 3);
  sqcRYGate(q, -2.481445904265494, 4);
  sqcRZGate(q, 1.4602641689345774, 4);
  sqcRYGate(q, 1.4199694975388215, 5);
  sqcRZGate(q, 1.5508201197797105, 5);
  sqcRYGate(q, 0.012824153067739492, 6);
  sqcRZGate(q, -2.9371476452272898, 6);
  sqcRYGate(q, 0.02546473673056042, 7);
  sqcRZGate(q, 3.0599422455106122, 7);
  sqcRYGate(q, 3.1091212081829642, 8);
  sqcRZGate(q, -2.169093789408838, 8);
  sqcRYGate(q, -3.115662056753443, 9);
  sqcRZGate(q, 0.23301791587325044, 9);
  sqcRYGate(q, 3.1220330863766286, 10);
  sqcRZGate(q, -0.4409414574352182, 10);
  sqcRYGate(q, 2.952077016904779, 11);
  sqcRZGate(q, -2.2882846161648347, 11);
  sqcRYGate(q, 0.001903889595594595, 12);
  sqcRZGate(q, 1.5911700983164887, 12);
  sqcRYGate(q, 0.004369054712527464, 13);
  sqcRZGate(q, -0.4926888349032851, 13);
  sqcRYGate(q, -1.5714413181370253, 14);
  sqcRZGate(q, 1.0120829844507226, 14);
  sqcRYGate(q, 1.5670090571124788, 15);
  sqcRZGate(q, 1.5305395400321005, 15);
  sqcRYGate(q, -2.282125364750574, 16);
  sqcRZGate(q, 0.01480871751941848, 16);
  sqcRYGate(q, -0.890157437581512, 17);
  sqcRZGate(q, 2.600551609573156, 17);
  sqcRYGate(q, 2.8317501794641915, 18);
  sqcRZGate(q, -1.0528420521700212, 18);
  sqcRYGate(q, 0.3028285844032981, 19);
  sqcRZGate(q, -2.8012450274383984, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.562345602226622, 0);
  sqcRZGate(q, -0.3610571090541068, 0);
  sqcRYGate(q, -0.2904332260261979, 1);
  sqcRZGate(q, -1.727907402042733, 1);
  sqcRYGate(q, -3.120142495387674, 2);
  sqcRZGate(q, 0.7646877625569699, 2);
  sqcRYGate(q, 3.11786542687361, 3);
  sqcRZGate(q, 3.1231697546460016, 3);
  sqcRYGate(q, 0.0008009081508164038, 4);
  sqcRZGate(q, 1.532420805386036, 4);
  sqcRYGate(q, -3.1271146554839917, 5);
  sqcRZGate(q, -0.013855638996551671, 5);
  sqcRYGate(q, -2.506416100619866, 6);
  sqcRZGate(q, 1.5482898227064572, 6);
  sqcRYGate(q, -0.9924992902473919, 7);
  sqcRZGate(q, 1.5663180899459714, 7);
  sqcRYGate(q, 1.0191773312375867, 8);
  sqcRZGate(q, 2.7785877170987274, 8);
  sqcRYGate(q, 0.37183192458295355, 9);
  sqcRZGate(q, -2.8095699066900184, 9);
  sqcRYGate(q, -1.7265467811987518, 10);
  sqcRZGate(q, -1.674001323938345, 10);
  sqcRYGate(q, 0.2063636423234163, 11);
  sqcRZGate(q, -2.7405208349509103, 11);
  sqcRYGate(q, -0.0804317625260561, 12);
  sqcRZGate(q, 2.284461455699391, 12);
  sqcRYGate(q, 0.12535377200361025, 13);
  sqcRZGate(q, -1.5423750805449938, 13);
  sqcRYGate(q, 0.024513818933293408, 14);
  sqcRZGate(q, -1.0109470791228459, 14);
  sqcRYGate(q, 3.079462538662863, 15);
  sqcRZGate(q, 1.5341319685161503, 15);
  sqcRYGate(q, 0.8061168870455795, 16);
  sqcRZGate(q, 2.855904440440905, 16);
  sqcRYGate(q, -0.08572226717656742, 17);
  sqcRZGate(q, 0.4801816129318724, 17);
  sqcRYGate(q, -2.1441015275582185, 18);
  sqcRZGate(q, 1.3873629428351828, 18);
  sqcRYGate(q, 1.514887383486693, 19);
  sqcRZGate(q, -0.9977685443436561, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -3.0739281754534167, 0);
  sqcRZGate(q, 0.22606948709487037, 0);
  sqcRYGate(q, 1.6630045992087927, 1);
  sqcRZGate(q, -1.2813097508035973, 1);
  sqcRYGate(q, -1.4615542314189005, 2);
  sqcRZGate(q, 0.011268734127787283, 2);
  sqcRYGate(q, 2.266073329407299, 3);
  sqcRZGate(q, -1.6728157766569476, 3);
  sqcRYGate(q, 0.02972504621378924, 4);
  sqcRZGate(q, -2.8399079837099306, 4);
  sqcRYGate(q, -1.5637374795009285, 5);
  sqcRZGate(q, -0.019765425890675203, 5);
  sqcRYGate(q, -1.5696634128154028, 6);
  sqcRZGate(q, -0.03390310028754051, 6);
  sqcRYGate(q, 1.5704440903058803, 7);
  sqcRZGate(q, 3.101656166664884, 7);
  sqcRYGate(q, -3.086455062662514, 8);
  sqcRZGate(q, -0.1003157895580822, 8);
  sqcRYGate(q, 0.006359008412633926, 9);
  sqcRZGate(q, 2.6515455870252844, 9);
  sqcRYGate(q, 3.015653721810571, 10);
  sqcRZGate(q, -2.860839141284732, 10);
  sqcRYGate(q, -0.9893810206564283, 11);
  sqcRZGate(q, -1.6658450437939527, 11);
  sqcRYGate(q, 1.6266914588465415, 12);
  sqcRZGate(q, -3.108199412649059, 12);
  sqcRYGate(q, 1.6079811213360298, 13);
  sqcRZGate(q, -3.119992776525538, 13);
  sqcRYGate(q, 1.5749609636984345, 14);
  sqcRZGate(q, 2.037551428099854, 14);
  sqcRYGate(q, -1.5654681656620495, 15);
  sqcRZGate(q, 1.828115371017282, 15);
  sqcRYGate(q, -0.15424325138322015, 16);
  sqcRZGate(q, -2.075958141827167, 16);
  sqcRYGate(q, 2.5077634625778544, 17);
  sqcRZGate(q, 1.589228422401385, 17);
  sqcRYGate(q, 0.3702943057351492, 18);
  sqcRZGate(q, 2.245617000446673, 18);
  sqcRYGate(q, -0.625546034347213, 19);
  sqcRZGate(q, -2.3939183579931615, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.0943098396462854, 0);
  sqcRZGate(q, -0.7598516107438505, 0);
  sqcRYGate(q, 0.10496012637135631, 1);
  sqcRZGate(q, -0.11836033046519656, 1);
  sqcRYGate(q, -0.6828876621591151, 2);
  sqcRZGate(q, 1.5826238645239128, 2);
  sqcRYGate(q, -0.02690450794157329, 3);
  sqcRZGate(q, 1.7984897588752786, 3);
  sqcRYGate(q, -0.003646811539369933, 4);
  sqcRZGate(q, -0.15798268227868628, 4);
  sqcRYGate(q, 3.1411195251766313, 5);
  sqcRZGate(q, -0.46319338395390053, 5);
  sqcRYGate(q, 1.5738527435607224, 6);
  sqcRZGate(q, 0.0045317435935460434, 6);
  sqcRYGate(q, -1.56645439940932, 7);
  sqcRZGate(q, 3.004729476624092, 7);
  sqcRYGate(q, 3.01801688474737, 8);
  sqcRZGate(q, -2.6445208537926406, 8);
  sqcRYGate(q, 2.9852401794241072, 9);
  sqcRZGate(q, 0.23986811956544063, 9);
  sqcRYGate(q, -3.1105810419772704, 10);
  sqcRZGate(q, 0.2666186829324966, 10);
  sqcRYGate(q, -3.133652180710722, 11);
  sqcRZGate(q, 1.4509689142931324, 11);
  sqcRYGate(q, -1.5852605079872206, 12);
  sqcRZGate(q, 3.0791521441709953, 12);
  sqcRYGate(q, -1.6427396459427932, 13);
  sqcRZGate(q, -3.0875805177236244, 13);
  sqcRYGate(q, 0.03060750480911079, 14);
  sqcRZGate(q, 2.9159912825888705, 14);
  sqcRYGate(q, 3.1314192782136394, 15);
  sqcRZGate(q, 2.3451356860200723, 15);
  sqcRYGate(q, -1.5368786893896234, 16);
  sqcRZGate(q, 0.37888463993433874, 16);
  sqcRYGate(q, -1.3976421447127318, 17);
  sqcRZGate(q, 2.892025009690708, 17);
  sqcRYGate(q, 2.0673116778677048, 18);
  sqcRZGate(q, 0.27460241146583186, 18);
  sqcRYGate(q, 1.6450556224241337, 19);
  sqcRZGate(q, -0.49512466403106536, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.04837967884158001, 0);
  sqcRZGate(q, 1.8582475907992713, 0);
  sqcRYGate(q, -3.054171871471357, 1);
  sqcRZGate(q, 1.8006600481669937, 1);
  sqcRYGate(q, -1.6575095369293047, 2);
  sqcRZGate(q, -1.193519823063695, 2);
  sqcRYGate(q, 3.068242692678139, 3);
  sqcRZGate(q, -1.0753074117114123, 3);
  sqcRYGate(q, -0.24726947274911382, 4);
  sqcRZGate(q, 1.8322819459281072, 4);
  sqcRYGate(q, -1.6045735618141466, 5);
  sqcRZGate(q, -2.9479184780875984, 5);
  sqcRYGate(q, 0.624341490183757, 6);
  sqcRZGate(q, 1.7871400752876418, 6);
  sqcRYGate(q, -2.929211065403748, 7);
  sqcRZGate(q, 1.6513429864039286, 7);
  sqcRYGate(q, -3.0075551864680774, 8);
  sqcRZGate(q, -0.9666588508197596, 8);
  sqcRYGate(q, 0.10025337996953876, 9);
  sqcRZGate(q, -1.7386251683864757, 9);
  sqcRYGate(q, 2.378158177274503, 10);
  sqcRZGate(q, -1.3438800176263455, 10);
  sqcRYGate(q, -1.7764977161926288, 11);
  sqcRZGate(q, -1.4520757377804514, 11);
  sqcRYGate(q, 1.924681838775508, 12);
  sqcRZGate(q, -1.4638348401732078, 12);
  sqcRYGate(q, 2.0565698283177256, 13);
  sqcRZGate(q, -1.2147916477945628, 13);
  sqcRYGate(q, 2.200108813938394, 14);
  sqcRZGate(q, 2.2200296253248517, 14);
  sqcRYGate(q, 1.8122921418398776, 15);
  sqcRZGate(q, 2.0947330077299506, 15);
  sqcRYGate(q, 2.5962673297798484, 16);
  sqcRZGate(q, -2.1285846187409048, 16);
  sqcRYGate(q, 0.4106427078535395, 17);
  sqcRZGate(q, -1.3959456247833977, 17);
  sqcRYGate(q, -2.721624608522465, 18);
  sqcRZGate(q, -1.4687428890843914, 18);
  sqcRYGate(q, -0.1628941966765275, 19);
  sqcRZGate(q, 1.7302790765411205, 19);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
