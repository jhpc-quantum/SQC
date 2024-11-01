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

  sqcRYGate(q, 2.2255306911975588, 0);
  sqcRYGate(q, -0.36407299412944205, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8638462107380329, 0);
  sqcRYGate(q, -2.9084835900443444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.12321556908556135, 1);
  sqcRYGate(q, -0.22655208667723753, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.551979921934461, 1);
  sqcRYGate(q, -3.06558141571149, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5423490967012166, 2);
  sqcRYGate(q, -2.2447885829153935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.279586869099955, 2);
  sqcRYGate(q, 0.876117937508914, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.051345361666674284, 3);
  sqcRYGate(q, 1.812079705317747, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0391604421579044, 3);
  sqcRYGate(q, -3.1102576208444055, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.699770547384868, 4);
  sqcRYGate(q, 3.010232539855111, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0450366037610404, 4);
  sqcRYGate(q, -1.0751713095304574, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.825699913189411, 5);
  sqcRYGate(q, 2.225836573824384, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1397272959777536, 5);
  sqcRYGate(q, 0.0056168379609451815, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7642013160853816, 6);
  sqcRYGate(q, -1.0212891468077416, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.380094958092269, 6);
  sqcRYGate(q, -2.063131251519598, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2387250509828098, 7);
  sqcRYGate(q, -1.07605621787063, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5515053261539529, 7);
  sqcRYGate(q, -0.7328987061113557, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.8505808883173356, 8);
  sqcRYGate(q, -1.25160737801213, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.737743600301014, 8);
  sqcRYGate(q, -1.7084445348760897, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7882205020766968, 9);
  sqcRYGate(q, 1.5641760517962164, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.2298457599233874, 9);
  sqcRYGate(q, -3.139361473875935, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5379547705546024, 10);
  sqcRYGate(q, -1.4361606594771865, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.025079934384418082, 10);
  sqcRYGate(q, 1.5511049774372565, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.081874576781333, 11);
  sqcRYGate(q, -2.693237849745214, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.05228429863520124, 11);
  sqcRYGate(q, -0.05737619359228948, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.959517367182336, 12);
  sqcRYGate(q, -2.979815310156103, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.18583398897454906, 12);
  sqcRYGate(q, 2.9567923381223826, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.22321617161158686, 13);
  sqcRYGate(q, 0.04754170004007641, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.8577162999574517, 13);
  sqcRYGate(q, -1.3296037701300571, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.29116421208422, 14);
  sqcRYGate(q, -1.5733968079995604, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.4401075531913374, 14);
  sqcRYGate(q, 0.011937269440590743, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.5095297727558795, 15);
  sqcRYGate(q, -1.6587041957954682, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.0948624713450874, 15);
  sqcRYGate(q, -0.9619548437905028, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.6015014356351678, 16);
  sqcRYGate(q, -2.1975571386556356, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -3.1412954750454847, 16);
  sqcRYGate(q, 0.00265758381496954, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.5845041166641289, 17);
  sqcRYGate(q, 2.7112619733107253, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.5975436039009098, 17);
  sqcRYGate(q, -1.7130917078048187, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.17022082865422591, 18);
  sqcRYGate(q, -2.179076842073766, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.9090998390317875, 18);
  sqcRYGate(q, 1.1676453622192986, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.1318206299270934, 0);
  sqcRYGate(q, -2.579901602924821, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2986576533906606, 0);
  sqcRYGate(q, 2.364132297109341, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0109915679051302, 1);
  sqcRYGate(q, 0.3721865591415615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.12592888162443175, 1);
  sqcRYGate(q, 2.538522993014217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7902215514664235, 2);
  sqcRYGate(q, -0.9761222514033928, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.090306601616595, 2);
  sqcRYGate(q, -0.031127462898885128, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.702819992614376, 3);
  sqcRYGate(q, 0.9081320501205283, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.36350770732531407, 3);
  sqcRYGate(q, 3.1412380206824313, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.115562406315589, 4);
  sqcRYGate(q, -2.3858435326572494, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1841538570886942, 4);
  sqcRYGate(q, -3.0723966092382726, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0503772518818706, 5);
  sqcRYGate(q, -0.502140965485802, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.018073266698448616, 5);
  sqcRYGate(q, 3.1311440290423787, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.721538656900197, 6);
  sqcRYGate(q, 0.6582520454082744, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.368452686919529, 6);
  sqcRYGate(q, 0.8948518266192552, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5045364846347953, 7);
  sqcRYGate(q, -2.0167520911007655, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.7002718334736864, 7);
  sqcRYGate(q, -2.329322372073632, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.9441731386810774, 8);
  sqcRYGate(q, 1.0077222148487035, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0078014370549255, 8);
  sqcRYGate(q, -3.0196735491942652, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.11919376054140347, 9);
  sqcRYGate(q, -1.5856992807061427, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.3873920084078277, 9);
  sqcRYGate(q, 3.1353166992753416, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.4040488176974586, 10);
  sqcRYGate(q, -1.6463632241347552, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.1968383995663787, 10);
  sqcRYGate(q, 2.2072230963776573, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0461827457930362, 11);
  sqcRYGate(q, 0.5469190501904029, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.0592943022104118, 11);
  sqcRYGate(q, -2.9934208305031738, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.08715647451326074, 12);
  sqcRYGate(q, -1.2150293703478656, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.8436288481552054, 12);
  sqcRYGate(q, -1.5593356984537845, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.2020912784418996, 13);
  sqcRYGate(q, -1.7038287721639058, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.8639843761102592, 13);
  sqcRYGate(q, 3.1178940434182048, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.0353556275866582, 14);
  sqcRYGate(q, -1.517284245702019, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.02067734587262038, 14);
  sqcRYGate(q, 3.1386087516067884, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.495501009609875, 15);
  sqcRYGate(q, -2.204446339092886, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.185912761207166, 15);
  sqcRYGate(q, 2.4382246519585835, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.3322023275961286, 16);
  sqcRYGate(q, -2.4322148528850818, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.0099439228511398, 16);
  sqcRYGate(q, -0.258039073857868, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.3295638870028057, 17);
  sqcRYGate(q, -2.1318398931343596, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.0003973308083002891, 17);
  sqcRYGate(q, 0.0002550629773923416, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.014552657383872977, 18);
  sqcRYGate(q, -2.7659987968031072, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.341209207018184, 18);
  sqcRYGate(q, 2.0584065296919105, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.2978402992479956, 0);
  sqcRYGate(q, -1.360580431364391, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1292756396934616, 0);
  sqcRYGate(q, -0.7569358694980544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3584630618142162, 1);
  sqcRYGate(q, -2.418017262690353, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1001358219463806, 1);
  sqcRYGate(q, -2.919292523872953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9328116830763005, 2);
  sqcRYGate(q, -1.088495294539141, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5658398060254695, 2);
  sqcRYGate(q, 2.6061734335107536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8502607814796175, 3);
  sqcRYGate(q, -2.663771935825789, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.18648064765986572, 3);
  sqcRYGate(q, -2.818518450853666, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.502311792415158, 4);
  sqcRYGate(q, 2.212178949289404, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.132270341525272, 4);
  sqcRYGate(q, 0.007685837954168662, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6749292518859944, 5);
  sqcRYGate(q, -1.4415916639413737, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.005330822098926303, 5);
  sqcRYGate(q, -2.948510616948399, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9450492263302293, 6);
  sqcRYGate(q, -1.095996081040617, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.584965170977706, 6);
  sqcRYGate(q, 0.9418923564295762, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4069920486080232, 7);
  sqcRYGate(q, -2.1048003640215276, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.25422548969091885, 7);
  sqcRYGate(q, 2.7917909216557035, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.956778094788957, 8);
  sqcRYGate(q, -2.9141314100891913, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.738956431515101, 8);
  sqcRYGate(q, 0.45882351096773366, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5941106113191506, 9);
  sqcRYGate(q, 1.5794512570111126, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.1194425152584042, 9);
  sqcRYGate(q, -3.1278174892692157, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.5616300583961467, 10);
  sqcRYGate(q, -0.7243250636085329, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.1386085075883137, 10);
  sqcRYGate(q, -0.011424050210042584, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6552109470583933, 11);
  sqcRYGate(q, 2.7383971675711747, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.06360050002927747, 11);
  sqcRYGate(q, 3.0964855194043484, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.1031959004568224, 12);
  sqcRYGate(q, 2.218805960887354, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.09784957508086, 12);
  sqcRYGate(q, 1.5728841665406244, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.5618454981973326, 13);
  sqcRYGate(q, 0.9349006650939347, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.25586925007751465, 13);
  sqcRYGate(q, -3.128647578976911, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.6706872924417944, 14);
  sqcRYGate(q, 0.9329066657063745, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5542387517955072, 14);
  sqcRYGate(q, -3.089939193352308, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.9218549809921657, 15);
  sqcRYGate(q, -1.4049861722262582, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.2075001619586763, 15);
  sqcRYGate(q, -3.1321636398498347, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.7440742836702547, 16);
  sqcRYGate(q, -2.25962892804815, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.3398114471950233, 16);
  sqcRYGate(q, 2.8853742434134944, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.1346081752439785, 17);
  sqcRYGate(q, -0.019258603221044446, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.2852293060232896, 17);
  sqcRYGate(q, 0.005297522906048017, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.64304153419614, 18);
  sqcRYGate(q, -0.05859507122830021, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.8160283295349418, 18);
  sqcRYGate(q, 1.7383534651735266, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.10064321310678173, 0);
  sqcRYGate(q, 2.1898251039205068, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9739394698727444, 0);
  sqcRYGate(q, -0.6656971645488988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2131007680977373, 1);
  sqcRYGate(q, -0.16094015608612885, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.35747481100964423, 1);
  sqcRYGate(q, 2.033742643283885, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2682023439054152, 2);
  sqcRYGate(q, 0.641883336734784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.024774094972819682, 2);
  sqcRYGate(q, -2.89980088140628, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13888943417279087, 3);
  sqcRYGate(q, 0.9720546117869553, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.005495665494900401, 3);
  sqcRYGate(q, -0.10771838606386196, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0426134749349363, 4);
  sqcRYGate(q, 1.5806588757778077, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1091237465399386, 4);
  sqcRYGate(q, 0.00028174982043062814, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4746623911405805, 5);
  sqcRYGate(q, -2.6246264503834165, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0776711891063706, 5);
  sqcRYGate(q, 1.8516835596065446, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4955699360259496, 6);
  sqcRYGate(q, 0.18059212015570658, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.42818890114457986, 6);
  sqcRYGate(q, 0.0030658953756885765, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.525977491101235, 7);
  sqcRYGate(q, -1.7351469050065127, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.120711509486326, 7);
  sqcRYGate(q, -0.0015738135974165957, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.6506534888956006, 8);
  sqcRYGate(q, -2.3537320917795346, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0637338473501226, 8);
  sqcRYGate(q, -1.0727785223248538, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7754850846317594, 9);
  sqcRYGate(q, 1.2605683288001384, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.3662172151563086, 9);
  sqcRYGate(q, -0.03918900922278912, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.287003363960583, 10);
  sqcRYGate(q, 2.397744470218325, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.054997226260348, 10);
  sqcRYGate(q, -0.6995977355765589, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.40911536163391, 11);
  sqcRYGate(q, -2.4733448105706057, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.3884100248666567, 11);
  sqcRYGate(q, 3.137585477531623, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.8018080635392675, 12);
  sqcRYGate(q, 1.028229649882478, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.4637669300140461, 12);
  sqcRYGate(q, 0.1653497768188661, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.3353921378985456, 13);
  sqcRYGate(q, -2.3559434657386356, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.008459081762743239, 13);
  sqcRYGate(q, -0.1768984546883203, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.249840314816354, 14);
  sqcRYGate(q, 2.907612277204513, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.3752305647270866, 14);
  sqcRYGate(q, -3.108037376195391, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.6546952816944487, 15);
  sqcRYGate(q, 2.4015843986907512, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.7677733068010596, 15);
  sqcRYGate(q, 1.8393676546347797, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.7586111239559763, 16);
  sqcRYGate(q, 2.5066037517783877, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.999147531271675, 16);
  sqcRYGate(q, -0.033537196824730664, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.896415924363048, 17);
  sqcRYGate(q, -2.039018022840337, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.7575684508315499, 17);
  sqcRYGate(q, -2.4036358291362077, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.3948900436413283, 18);
  sqcRYGate(q, 2.2196236217239296, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.129860148266883, 18);
  sqcRYGate(q, 1.1776150841435233, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.2892200562387153, 0);
  sqcRYGate(q, 2.5915328403497617, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.19460698691761902, 0);
  sqcRYGate(q, 2.926865337526168, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.384686433934764, 1);
  sqcRYGate(q, 3.090520792871798, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2529681341158465, 1);
  sqcRYGate(q, -2.8667980178490264, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3374280162917644, 2);
  sqcRYGate(q, 0.5932370338926409, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8637204101194413, 2);
  sqcRYGate(q, 0.8608429774458788, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.721317781240867, 3);
  sqcRYGate(q, 0.396679972466885, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.02861559962899545, 3);
  sqcRYGate(q, -0.10313311917502073, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4894326522240524, 4);
  sqcRYGate(q, -0.9710142185573476, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7434329055604803, 4);
  sqcRYGate(q, 2.659313813158093e-05, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6927526782280262, 5);
  sqcRYGate(q, 0.6981744499504047, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0090524137488055, 5);
  sqcRYGate(q, 0.373500419603782, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.28592147176791016, 6);
  sqcRYGate(q, 0.7338975019668859, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2834360596035186, 6);
  sqcRYGate(q, -2.7010996301922674, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5697244510188002, 7);
  sqcRYGate(q, -0.4211444053716047, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1242157679562967, 7);
  sqcRYGate(q, 0.8092254572835696, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.2096256019319297, 8);
  sqcRYGate(q, 2.455832918449302, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.8416841533646019, 8);
  sqcRYGate(q, -0.07168704989057684, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.5298925504364775, 9);
  sqcRYGate(q, 2.6146216824202586, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.00016838743625907616, 9);
  sqcRYGate(q, -0.004665850514824044, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.6049880271836603, 10);
  sqcRYGate(q, -0.37827302476800817, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.126757898230146, 10);
  sqcRYGate(q, 2.398949209263251, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.633597274261805, 11);
  sqcRYGate(q, -2.257231510357723, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.0339505482225784, 11);
  sqcRYGate(q, -3.0715060534596157, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.36007212271918043, 12);
  sqcRYGate(q, 1.6291477359979922, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.822559658862054, 12);
  sqcRYGate(q, -3.140846556033145, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.100190807697101, 13);
  sqcRYGate(q, -0.39749629790163965, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.1165518842453457, 13);
  sqcRYGate(q, -3.0395552757566575, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.774502156141302, 14);
  sqcRYGate(q, -1.017408259624057, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.1203962815105983, 14);
  sqcRYGate(q, -0.00982392013876251, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.4961598658128379, 15);
  sqcRYGate(q, 0.9285741327110326, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.0014787553942197105, 15);
  sqcRYGate(q, 2.184968352622914, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.691494761483972, 16);
  sqcRYGate(q, -1.233559037462086, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.11450644530005559, 16);
  sqcRYGate(q, -1.472262673970314, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.813617693253958, 17);
  sqcRYGate(q, 2.2753672841780475, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.4632968883062052, 17);
  sqcRYGate(q, 3.1413416937205034, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.0214610547239618, 18);
  sqcRYGate(q, -1.203146988332507, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.2116312539418876, 18);
  sqcRYGate(q, -2.6423159715944036, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.8628504918636892, 0);
  sqcRYGate(q, -1.2482939686902723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06846181514830452, 0);
  sqcRYGate(q, -0.5868236726565166, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7046568234623631, 1);
  sqcRYGate(q, -1.3649414947122658, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1045707225071766, 1);
  sqcRYGate(q, 2.2299234637516756, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4923436894242488, 2);
  sqcRYGate(q, -0.4998537138885464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.299424141531226, 2);
  sqcRYGate(q, -2.193292773362049, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3343279468623683, 3);
  sqcRYGate(q, -2.0093614152484163, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1411676557288195, 3);
  sqcRYGate(q, 0.2926947516145354, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0726844905145498, 4);
  sqcRYGate(q, -2.5661612923634403, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.20728854912119055, 4);
  sqcRYGate(q, -3.141584330927954, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0750966836889444, 5);
  sqcRYGate(q, -0.8157897604210913, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.35616837598416495, 5);
  sqcRYGate(q, -1.7051110231009128, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.583591539805569, 6);
  sqcRYGate(q, -1.0367961485112476, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.006150515871464535, 6);
  sqcRYGate(q, -3.140861584530345, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.105679425231421, 7);
  sqcRYGate(q, 1.1209659429853946, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0666426450487672, 7);
  sqcRYGate(q, 2.2976535007165966, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4061038517383175, 8);
  sqcRYGate(q, -0.9132984700285727, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.052471730341396, 8);
  sqcRYGate(q, 2.916007219491717, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.1174052278180624, 9);
  sqcRYGate(q, -2.624263742343522, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.1333592016058103, 9);
  sqcRYGate(q, 2.9103963679238545, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.646430050336503, 10);
  sqcRYGate(q, 2.242670388152648, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.13976616405202932, 10);
  sqcRYGate(q, -2.7576608492459376, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.4445101038349488, 11);
  sqcRYGate(q, -0.9643334586506637, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.0965405340819028, 11);
  sqcRYGate(q, 0.5356065984272692, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.8627502129597593, 12);
  sqcRYGate(q, 2.8098794622721974, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.2314453017869544, 12);
  sqcRYGate(q, -1.715133863762266, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.267701908522643, 13);
  sqcRYGate(q, -1.516463315059963, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.135035530131336, 13);
  sqcRYGate(q, -2.9740663354927053, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.0304946865831386, 14);
  sqcRYGate(q, 1.603440911073668, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.452992318436381, 14);
  sqcRYGate(q, -3.1242395950348896, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.8720520303199136, 15);
  sqcRYGate(q, -0.9949237505043776, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -3.141115663601122, 15);
  sqcRYGate(q, 3.138929888793959, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.1445430598261073, 16);
  sqcRYGate(q, 0.6915876545167147, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.9013292564195416, 16);
  sqcRYGate(q, -1.6599251414911282, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.6163876259299758, 17);
  sqcRYGate(q, -2.2239375574979166, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.513615558152071, 17);
  sqcRYGate(q, 0.8352186831312425, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.251312909819582, 18);
  sqcRYGate(q, -0.29154685717580886, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.6494826686644027, 18);
  sqcRYGate(q, -0.032065655038633845, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.9777499733742475, 0);
  sqcRYGate(q, 0.020796703569595287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08414187715972776, 0);
  sqcRYGate(q, -0.0920759870048822, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0931702435944324, 1);
  sqcRYGate(q, 0.3546237420238141, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.09513305943269962, 1);
  sqcRYGate(q, 0.8406231661165824, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.33441383805082187, 2);
  sqcRYGate(q, 0.8844355633318332, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1109865351029478, 2);
  sqcRYGate(q, -2.3053291884613047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7042881421445703, 3);
  sqcRYGate(q, 2.3731489735718876, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.710303499490772, 3);
  sqcRYGate(q, -2.344130156402231, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.64405351570315, 4);
  sqcRYGate(q, 1.4911496859913838, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1386032746707357, 4);
  sqcRYGate(q, 0.08092707081288797, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.494396994756217, 5);
  sqcRYGate(q, 2.225590289002818, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5683930036047395, 5);
  sqcRYGate(q, -3.1086094644249145, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6244613275181221, 6);
  sqcRYGate(q, -1.1730394343108737, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.027040212698125683, 6);
  sqcRYGate(q, 2.681437696921755, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.156122242678941, 7);
  sqcRYGate(q, -1.8480922387480407, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.0734624300560296, 7);
  sqcRYGate(q, -0.001283957173684236, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.0510725441759208, 8);
  sqcRYGate(q, -1.6210023662592894, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.429632620813343, 8);
  sqcRYGate(q, -0.07980928645483318, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6662897392886773, 9);
  sqcRYGate(q, -1.2945825773901625, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.139350633726312, 9);
  sqcRYGate(q, -3.114170168667227, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.903766700407698, 10);
  sqcRYGate(q, 2.427751204664101, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.116354002122403, 10);
  sqcRYGate(q, 0.8235165658048418, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8876457555977942, 11);
  sqcRYGate(q, -1.9486481446487547, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.021700734447653903, 11);
  sqcRYGate(q, 0.0011559977448447611, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.8545780326977919, 12);
  sqcRYGate(q, 2.39980387881832, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.3409319932160297, 12);
  sqcRYGate(q, -0.3885221751668167, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.454377027439844, 13);
  sqcRYGate(q, 1.7508506088201266, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.0367611514589345, 13);
  sqcRYGate(q, 3.0975865050829667, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.4094655619874663, 14);
  sqcRYGate(q, 2.251407538756813, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.4330179330917199, 14);
  sqcRYGate(q, 0.8233948983635466, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.17971164028081724, 15);
  sqcRYGate(q, -2.7747453234974455, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.1409973579435753, 15);
  sqcRYGate(q, -0.17935896058785517, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.21533042725817264, 16);
  sqcRYGate(q, -2.0633041209863467, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.0170728243598586, 16);
  sqcRYGate(q, 0.5874691124929222, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.297826154210588, 17);
  sqcRYGate(q, -2.6634138794341613, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.1836657842800662, 17);
  sqcRYGate(q, -2.1816920501833352, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.0224700924550119, 18);
  sqcRYGate(q, 2.9280779789648963, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.3261267810652435, 18);
  sqcRYGate(q, -3.0355169663531187, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 3.1049804752150876, 0);
  sqcRYGate(q, 1.3746026305915242, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3807282109705952, 0);
  sqcRYGate(q, 0.25257209552843973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0486002401584753, 1);
  sqcRYGate(q, -0.8848445349879088, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.517557076129331, 1);
  sqcRYGate(q, 0.333014029867096, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1449141447603104, 2);
  sqcRYGate(q, 0.03740732860080698, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7726702975453272, 2);
  sqcRYGate(q, -2.9966985125196937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.830082267927537, 3);
  sqcRYGate(q, 3.073478535673898, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0024862327179278054, 3);
  sqcRYGate(q, -3.1337633810767995, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.869782563242192, 4);
  sqcRYGate(q, -0.6571900077571078, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.141335680449063, 4);
  sqcRYGate(q, 3.121146322422687, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9733814927725257, 5);
  sqcRYGate(q, 1.3864417892118865, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.37739948855632, 5);
  sqcRYGate(q, 3.0850599564053156, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5822868045595033, 6);
  sqcRYGate(q, -2.9507081401089827, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.46452262161494823, 6);
  sqcRYGate(q, -1.9816904311166508, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7092742299357093, 7);
  sqcRYGate(q, 0.6003875303248636, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.016824364839947325, 7);
  sqcRYGate(q, -0.019929059867489052, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.7418888071047585, 8);
  sqcRYGate(q, 1.7363205204976055, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5109065162804036, 8);
  sqcRYGate(q, -0.5484517890790506, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7132697530925576, 9);
  sqcRYGate(q, 0.021547603630546072, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.137077461594224, 9);
  sqcRYGate(q, -0.07069114585671432, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.1978581121846839, 10);
  sqcRYGate(q, 2.2796061822423757, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.3349327085498395, 10);
  sqcRYGate(q, -0.0800249520877896, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.46337495652791133, 11);
  sqcRYGate(q, 0.21958281079485967, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.00017002009032562881, 11);
  sqcRYGate(q, -3.1370713912764074, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.38060631608736806, 12);
  sqcRYGate(q, -0.4242820966266754, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.922708855623299, 12);
  sqcRYGate(q, -0.6887166195010376, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.2261706522379603, 13);
  sqcRYGate(q, -0.9169694696022633, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.114619689828365, 13);
  sqcRYGate(q, -0.04423258022637154, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.1800291132953493, 14);
  sqcRYGate(q, 2.7332452777400533, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.7581255887004864, 14);
  sqcRYGate(q, -1.909589939971148, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.727490761120499, 15);
  sqcRYGate(q, 1.5632900245535, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -3.120644029490105, 15);
  sqcRYGate(q, 3.0301162323767046, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.39921742097945945, 16);
  sqcRYGate(q, -1.5346529348232132, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.3291811479125384, 16);
  sqcRYGate(q, -0.010258544715043998, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.6130834237771343, 17);
  sqcRYGate(q, 2.9354615335948924, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.052049082416475746, 17);
  sqcRYGate(q, -1.7400770626446391, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.06932890521335366, 18);
  sqcRYGate(q, -1.706976948961864, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.8911084592109768, 18);
  sqcRYGate(q, -2.5312646307053015, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.914439231952064, 0);
  sqcRYGate(q, -1.2162717891775747, 1);
  sqcRYGate(q, 1.759447057980562, 2);
  sqcRYGate(q, 1.3178595986584591, 3);
  sqcRYGate(q, 0.25731260859961025, 4);
  sqcRYGate(q, 2.801290632277695, 5);
  sqcRYGate(q, -0.5994982377822824, 6);
  sqcRYGate(q, 0.6316759214736066, 7);
  sqcRYGate(q, 2.5595994990309405, 8);
  sqcRYGate(q, -0.02030788119921287, 9);
  sqcRYGate(q, -2.12118614415376, 10);
  sqcRYGate(q, 1.1850891386899312, 11);
  sqcRYGate(q, 2.635703995904772, 12);
  sqcRYGate(q, 0.21133941854685823, 13);
  sqcRYGate(q, 0.5064931395894776, 14);
  sqcRYGate(q, -0.0044091932601793005, 15);
  sqcRYGate(q, -1.9852062623311533, 16);
  sqcRYGate(q, -0.03656669396591011, 17);
  sqcRYGate(q, -2.992873676579398, 18);
  sqcRYGate(q, 2.062325458451226, 19);

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
