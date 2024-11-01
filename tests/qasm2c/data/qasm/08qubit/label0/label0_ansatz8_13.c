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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 1.1487881381742784, 0);
  sqcRYGate(q, 2.0731603706428965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.36666005520926626, 0);
  sqcRYGate(q, 1.1962597910313875, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.357993507049871, 2);
  sqcRYGate(q, 2.7142197733904476, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.141020148003336, 2);
  sqcRYGate(q, 0.3548447388103222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6737131154037419, 4);
  sqcRYGate(q, 3.0024994401002054, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.767363297355652, 4);
  sqcRYGate(q, -0.13499727667462214, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.079989117508221, 6);
  sqcRYGate(q, 1.5712162801737615, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3198278114130284, 6);
  sqcRYGate(q, -0.8895017909243128, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.952680006743282, 0);
  sqcRYGate(q, -1.4748482407812855, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.398802825902405, 0);
  sqcRYGate(q, 0.6500478395387007, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.959739809008874, 2);
  sqcRYGate(q, 0.9759897229341342, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.7663033541800611, 2);
  sqcRYGate(q, -1.1420316326630386, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6469025933544348, 4);
  sqcRYGate(q, -2.791923776154532, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.0501952574996385, 4);
  sqcRYGate(q, 3.015284328962885, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.3763642122487343, 1);
  sqcRYGate(q, 3.0945909283402355, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5917292756736886, 1);
  sqcRYGate(q, 0.014210384143137189, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.032380313028458, 3);
  sqcRYGate(q, -0.7089032611790299, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7451333604319392, 3);
  sqcRYGate(q, 2.681008290170618, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.447282913964784, 5);
  sqcRYGate(q, 2.599144860855418, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.6300714012535513, 5);
  sqcRYGate(q, -0.6158888525422308, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.542673721105563, 0);
  sqcRYGate(q, 1.5755110505583796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6155587882380322, 0);
  sqcRYGate(q, 0.4492356976803314, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3712638901482042, 2);
  sqcRYGate(q, -1.211531027086144, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9629234591805997, 2);
  sqcRYGate(q, -1.4527547428962182, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9767636015266179, 4);
  sqcRYGate(q, -0.7122589428844097, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.132247786431308, 4);
  sqcRYGate(q, -2.67058565906439, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.17111395433871301, 6);
  sqcRYGate(q, 0.5817745053621206, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8434841798770814, 6);
  sqcRYGate(q, 0.7347865320921843, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7083568782979057, 0);
  sqcRYGate(q, 1.9790349113259198, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0261535806583584, 0);
  sqcRYGate(q, -0.6746557914240752, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.978923184134718, 2);
  sqcRYGate(q, -1.844306577926143, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.089521267567977, 2);
  sqcRYGate(q, 0.09326355263195385, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.591510755021155, 4);
  sqcRYGate(q, 0.7935330703370306, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5938541827566133, 4);
  sqcRYGate(q, -1.5915998296570317, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.2679293930959212, 1);
  sqcRYGate(q, 1.756929736809793, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.532177462147666, 1);
  sqcRYGate(q, 2.1051357088613702, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.345639557052323, 3);
  sqcRYGate(q, 0.5349222709655601, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.3089406787557323, 3);
  sqcRYGate(q, -1.211849239962417, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.0269082235870766, 5);
  sqcRYGate(q, 1.3112958059621465, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8607439541692221, 5);
  sqcRYGate(q, -1.3724385416858098, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5468806134583444, 0);
  sqcRYGate(q, 2.8168366219669747, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9609444408575778, 0);
  sqcRYGate(q, 1.4750560460270372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.952302764444078, 2);
  sqcRYGate(q, 2.1291332846010076, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5221188211049808, 2);
  sqcRYGate(q, -1.7137089462695307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0509562004103723, 4);
  sqcRYGate(q, -2.896421146071988, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2209805085823897, 4);
  sqcRYGate(q, 1.3267414838413136, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.718087556953832, 6);
  sqcRYGate(q, 2.198846018435008, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.04024852822686, 6);
  sqcRYGate(q, 2.9220326979879823, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.17796508246469944, 0);
  sqcRYGate(q, 2.2281146596692283, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8001878913265786, 0);
  sqcRYGate(q, -0.2379389728318415, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.742249772208411, 2);
  sqcRYGate(q, 1.0996483959459018, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6085893509675664, 2);
  sqcRYGate(q, -1.9126138514274587, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.03397712931696405, 4);
  sqcRYGate(q, 2.197926878305477, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.652899086018049, 4);
  sqcRYGate(q, -1.528701512919917, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.735854273516861, 1);
  sqcRYGate(q, -0.10538617284409142, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.517060054189558, 1);
  sqcRYGate(q, 1.6409988223253358, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9485062920472407, 3);
  sqcRYGate(q, -2.439946810084209, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8687136597581412, 3);
  sqcRYGate(q, 2.470100178034558, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.7066718476336692, 5);
  sqcRYGate(q, -2.560819426674176, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.392123672921384, 5);
  sqcRYGate(q, 1.0291076192876039, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.834699733976946, 0);
  sqcRYGate(q, 2.609945941770096, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5048090662861844, 0);
  sqcRYGate(q, -1.0870090595178825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.555156917723926, 2);
  sqcRYGate(q, 0.4606811127028104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.31044353351790976, 2);
  sqcRYGate(q, 1.7184400123674208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8576569807754428, 4);
  sqcRYGate(q, -2.866947526764621, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9917802139205358, 4);
  sqcRYGate(q, 2.3483745489206544, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4241539496243079, 6);
  sqcRYGate(q, 2.3153637247441248, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.222946321856886, 6);
  sqcRYGate(q, 1.4362488014918606, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7887019837757973, 0);
  sqcRYGate(q, -2.1631226016167595, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.27652571637257406, 0);
  sqcRYGate(q, 1.8811770384213613, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.438328433397644, 2);
  sqcRYGate(q, -1.2601059273855695, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.520079467671778, 2);
  sqcRYGate(q, 0.8676373062257127, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9700621079631997, 4);
  sqcRYGate(q, -2.4441886880007124, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.1797758674864642, 4);
  sqcRYGate(q, 1.1708771056133038, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.27537603178915, 1);
  sqcRYGate(q, -1.6201230671883304, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4995163711820734, 1);
  sqcRYGate(q, -1.9666576555289685, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.967356227029762, 3);
  sqcRYGate(q, -2.3703893098788624, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.351031601605781, 3);
  sqcRYGate(q, -2.8529909917750294, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.9360431851031628, 5);
  sqcRYGate(q, 2.698626493686341, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.6005075013622583, 5);
  sqcRYGate(q, -1.1257911942847105, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.6484706822417747, 0);
  sqcRYGate(q, 1.1956921241925809, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5267229396047277, 0);
  sqcRYGate(q, 2.0409959504292603, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7214637883486812, 2);
  sqcRYGate(q, 1.9842742251763743, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.027586026415675313, 2);
  sqcRYGate(q, -0.048528128630499275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.480941237182684, 4);
  sqcRYGate(q, 1.6967435583613721, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.46732080837632506, 4);
  sqcRYGate(q, 0.9813722157357264, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6058402971799604, 6);
  sqcRYGate(q, 0.2631808699710074, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1277305923224308, 6);
  sqcRYGate(q, -2.889288436293385, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.752217128471257, 0);
  sqcRYGate(q, 2.665968490160812, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3226045466878302, 0);
  sqcRYGate(q, 2.831480253077965, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.047314763237817914, 2);
  sqcRYGate(q, -2.7152452525863984, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.1620767206297682, 2);
  sqcRYGate(q, -2.6973488207573855, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.5472923041191287, 4);
  sqcRYGate(q, 0.6663877513103549, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.3295013277390217, 4);
  sqcRYGate(q, -2.391546137456692, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.02087805344686093, 1);
  sqcRYGate(q, 1.2907947131993742, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.04311965016746289, 1);
  sqcRYGate(q, -2.7949195090349654, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3635022243627954, 3);
  sqcRYGate(q, 0.8486573981369104, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.09053867232209536, 3);
  sqcRYGate(q, 0.30119849498355755, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.811309933082971, 5);
  sqcRYGate(q, 2.2006720038056287, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.32018253764679855, 5);
  sqcRYGate(q, 1.6595382163682244, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.9771853211323283, 0);
  sqcRYGate(q, 3.1405118165529706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0557779088446466, 0);
  sqcRYGate(q, 1.145399330838243, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.382212624442255, 2);
  sqcRYGate(q, 1.9729871177600984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.005491797983468, 2);
  sqcRYGate(q, 2.691076686144462, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5617870882408629, 4);
  sqcRYGate(q, 0.2850442828966218, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.427665767701962, 4);
  sqcRYGate(q, -1.6239515087085348, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0776004404098387, 6);
  sqcRYGate(q, 2.013255467137728, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.18920683545770794, 6);
  sqcRYGate(q, -0.0016180847082853944, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.49107047013630667, 0);
  sqcRYGate(q, 1.9485671390735697, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8827920588368725, 0);
  sqcRYGate(q, -0.10261108163687632, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.940291067391474, 2);
  sqcRYGate(q, 1.5330910118327674, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.8637778310044206, 2);
  sqcRYGate(q, -2.742537551070095, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.7300364964802217, 4);
  sqcRYGate(q, -0.605271671811856, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.9947986370469541, 4);
  sqcRYGate(q, -3.0915425969747803, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.126954593384089, 1);
  sqcRYGate(q, 1.7592961913034664, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1847957522178492, 1);
  sqcRYGate(q, -1.6767888605140024, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8715332428205482, 3);
  sqcRYGate(q, -2.7158576274816375, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.0048089806548397, 3);
  sqcRYGate(q, -2.7359129352313363, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.5194432110109064, 5);
  sqcRYGate(q, -0.7582353262167132, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.4327679191503506, 5);
  sqcRYGate(q, 0.506972800825265, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.029130832573685064, 0);
  sqcRYGate(q, -2.559743127155807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2663421600802636, 0);
  sqcRYGate(q, -0.4113673704777594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1217008062960265, 2);
  sqcRYGate(q, 0.30795439686865134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.94517522681399, 2);
  sqcRYGate(q, 1.0442250026253221, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6815410620702531, 4);
  sqcRYGate(q, 0.0686299639876838, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2559977010259418, 4);
  sqcRYGate(q, -2.45358013623056, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.857185570702964, 6);
  sqcRYGate(q, 0.793326688663317, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7028645606154742, 6);
  sqcRYGate(q, 1.0167766071603106, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4284504498359088, 0);
  sqcRYGate(q, -1.4714412723210504, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6647623610368469, 0);
  sqcRYGate(q, 1.7929485229276134, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.609113629208486, 2);
  sqcRYGate(q, -1.1517537211040398, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.30613149908824, 2);
  sqcRYGate(q, 0.3905152845953701, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9799985361524906, 4);
  sqcRYGate(q, -1.8839258355299435, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.49899994518408475, 4);
  sqcRYGate(q, -1.5384291193771504, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.4607436357623307, 1);
  sqcRYGate(q, 0.58503091033494, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.178005829474132, 1);
  sqcRYGate(q, -2.751709377811362, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.14404407854743884, 3);
  sqcRYGate(q, -1.5221261353027726, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.9132959780135033, 3);
  sqcRYGate(q, 0.21961344854966658, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.0536015921534823, 5);
  sqcRYGate(q, -0.016145590269107224, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.138733658424016, 5);
  sqcRYGate(q, 1.7410266613446848, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.0780367395050763, 0);
  sqcRYGate(q, -1.4448239180701485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.594483788809358, 0);
  sqcRYGate(q, 2.776234923926625, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6063278156180418, 2);
  sqcRYGate(q, -2.5952344337112834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5892149187260546, 2);
  sqcRYGate(q, 2.1040934628684482, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0696653498668716, 4);
  sqcRYGate(q, 2.511523088311919, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2252720751365143, 4);
  sqcRYGate(q, -1.2523037678844742, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9634370879049854, 6);
  sqcRYGate(q, -1.332799493835091, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8920429816442406, 6);
  sqcRYGate(q, 2.539736042983796, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1476657969298847, 0);
  sqcRYGate(q, 0.9021875825152438, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0819614647565095, 0);
  sqcRYGate(q, -1.4856671009898825, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2926075437025797, 2);
  sqcRYGate(q, -2.8960335653122566, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.2434606136644443, 2);
  sqcRYGate(q, 2.663837979488498, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.7882153942729357, 4);
  sqcRYGate(q, -2.269208095321634, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7026911223570869, 4);
  sqcRYGate(q, 2.29379478540821, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.437836584991105, 1);
  sqcRYGate(q, -2.564683533224352, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0746559013025978, 1);
  sqcRYGate(q, 2.8279667490797005, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.22148903112979212, 3);
  sqcRYGate(q, 1.3551119401810807, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2826176938185387, 3);
  sqcRYGate(q, 0.1963617499884535, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.0699874287816935, 5);
  sqcRYGate(q, 0.6497206873609086, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.9802220725887871, 5);
  sqcRYGate(q, 2.114159409922628, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.7348269036843846, 0);
  sqcRYGate(q, -0.3140721253755235, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.784274652333826, 0);
  sqcRYGate(q, 1.7394708407268877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0405803161333582, 2);
  sqcRYGate(q, 0.6877573621719153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7698921480871515, 2);
  sqcRYGate(q, -1.820507394090491, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8122104924815543, 4);
  sqcRYGate(q, 1.4033632463200196, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.527811111548978, 4);
  sqcRYGate(q, 2.786450011409805, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6541139109764073, 6);
  sqcRYGate(q, -2.4722268493948287, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2736712509316979, 6);
  sqcRYGate(q, -0.33975879716165686, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5976748236242999, 0);
  sqcRYGate(q, -1.1472553660376705, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4060050760854992, 0);
  sqcRYGate(q, -0.43584567750768777, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0761007985022095, 2);
  sqcRYGate(q, -2.023322892199586, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3108263252214272, 2);
  sqcRYGate(q, -0.6997290108629128, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.09262225353888363, 4);
  sqcRYGate(q, 1.2305465700524305, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.4122697061410412, 4);
  sqcRYGate(q, 1.1637821928460934, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.2978807970369757, 1);
  sqcRYGate(q, 2.186107009415677, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.92606936580567, 1);
  sqcRYGate(q, 2.0089529887526547, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8684086197983235, 3);
  sqcRYGate(q, 3.1278685402761712, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.786509571220666, 3);
  sqcRYGate(q, -0.8742261544303596, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.5242085233718163, 5);
  sqcRYGate(q, -1.9041805805768008, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5060523370971544, 5);
  sqcRYGate(q, -0.186355959269098, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.8605312317674794, 0);
  sqcRYGate(q, 2.0558270456502026, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2206408284727095, 0);
  sqcRYGate(q, 1.9581631591048365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20511888700363468, 2);
  sqcRYGate(q, 0.6421454600127091, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8672985814250334, 2);
  sqcRYGate(q, -0.6040716385123717, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9681231420316463, 4);
  sqcRYGate(q, -1.8165447269292905, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.15781812926407499, 4);
  sqcRYGate(q, 1.3439828467893777, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5740105450040858, 6);
  sqcRYGate(q, 3.0149896063144217, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4535222372532894, 6);
  sqcRYGate(q, 2.4418596998964124, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1568012613473537, 0);
  sqcRYGate(q, -1.7802908599377307, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2919091659521595, 0);
  sqcRYGate(q, 0.9561080807217603, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8791196585713311, 2);
  sqcRYGate(q, 1.2022233883394904, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.0524375240600836, 2);
  sqcRYGate(q, 1.7875983581297383, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.653218855243784, 4);
  sqcRYGate(q, -0.9479862309820778, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.363709119591725, 4);
  sqcRYGate(q, -0.5139597129282114, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.4247650065490056, 1);
  sqcRYGate(q, -0.9457415959974602, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2272636429684045, 1);
  sqcRYGate(q, 0.2943707788814569, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2061620516421483, 3);
  sqcRYGate(q, 2.8651979511759964, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.0794560908019672, 3);
  sqcRYGate(q, 2.9740272044654983, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.1010775887871758, 5);
  sqcRYGate(q, 1.6636063944952637, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4749390082600204, 5);
  sqcRYGate(q, 0.7649861458025952, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.118821118047634, 0);
  sqcRYGate(q, 0.4003412459443442, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8333742018156167, 0);
  sqcRYGate(q, 0.331584566794192, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.13145047576961488, 2);
  sqcRYGate(q, -3.0993986119123744, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.049154986767112, 2);
  sqcRYGate(q, -1.5129819886422275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6303285791347966, 4);
  sqcRYGate(q, 0.004464140807643346, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6364630275193401, 4);
  sqcRYGate(q, -0.4488889843939168, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1209923748634019, 6);
  sqcRYGate(q, 1.0917983728375331, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6415388093890027, 6);
  sqcRYGate(q, -2.752134273608325, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.10819440657616, 0);
  sqcRYGate(q, -3.0715297795241816, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7719865742816878, 0);
  sqcRYGate(q, -1.7434654745422007, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3796052049630108, 2);
  sqcRYGate(q, -2.9364563279829863, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.424379411661298, 2);
  sqcRYGate(q, -3.023470254801741, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4973882684646245, 4);
  sqcRYGate(q, 2.538433365242133, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.218981377779165, 4);
  sqcRYGate(q, 2.662235138418393, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.7178175379997502, 1);
  sqcRYGate(q, 1.4015973517586966, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0343489626693532, 1);
  sqcRYGate(q, 1.0119645326959008, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2550874999452537, 3);
  sqcRYGate(q, 0.1060007579679872, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.497346284186228, 3);
  sqcRYGate(q, 2.074486944109993, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.0005083191344764, 5);
  sqcRYGate(q, 0.2679772513096914, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.784456885153172, 5);
  sqcRYGate(q, -1.1830477539095159, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.3913847131092165, 0);
  sqcRYGate(q, -1.098234256348154, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.570645806734076, 0);
  sqcRYGate(q, 2.7139660248245456, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.18815880862399936, 2);
  sqcRYGate(q, -2.3495999187673964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8222844807635583, 2);
  sqcRYGate(q, 1.8888274445395568, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6623495275013607, 4);
  sqcRYGate(q, -3.1068558155925894, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9977963592701514, 4);
  sqcRYGate(q, -2.140591209842627, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5804820047243044, 6);
  sqcRYGate(q, -2.968367750704358, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9412765744764235, 6);
  sqcRYGate(q, -1.4757655064694006, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.751905269345715, 0);
  sqcRYGate(q, 0.8297807854451235, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9207006354161704, 0);
  sqcRYGate(q, 1.3320134934470653, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5450700638962003, 2);
  sqcRYGate(q, 2.8129638020433867, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.057160064524632, 2);
  sqcRYGate(q, -1.424257749388274, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.4743818916359976, 4);
  sqcRYGate(q, -2.829008389483461, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.13516181612854972, 4);
  sqcRYGate(q, -2.5988357274329332, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.5237342292830105, 1);
  sqcRYGate(q, -0.448058955173796, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5011298929008907, 1);
  sqcRYGate(q, -0.8734503465211336, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.413259808769189, 3);
  sqcRYGate(q, 0.17114806872714802, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5352619764587273, 3);
  sqcRYGate(q, -2.181244816912394, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3799049008417505, 5);
  sqcRYGate(q, -1.6277744668235983, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.8341597549764987, 5);
  sqcRYGate(q, -1.899370081528284, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.721552747486914, 0);
  sqcRYGate(q, 0.43450058421222426, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.975977440077852, 0);
  sqcRYGate(q, 0.9091244162353481, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2436898742931328, 2);
  sqcRYGate(q, 0.0732122089248081, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4824483614391646, 2);
  sqcRYGate(q, 1.367462401600766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0076926053707673, 4);
  sqcRYGate(q, 0.18472949750908232, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5368816444708855, 4);
  sqcRYGate(q, -0.8164475792664927, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7329335628092482, 6);
  sqcRYGate(q, 0.6343233539083082, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6087369250287926, 6);
  sqcRYGate(q, 1.5739951351612866, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.750580702464541, 0);
  sqcRYGate(q, -0.2594878127329327, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.11569694305618011, 0);
  sqcRYGate(q, -1.8723367896480863, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5731652146391457, 2);
  sqcRYGate(q, -2.7616079054955964, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.9126232473415805, 2);
  sqcRYGate(q, -1.3236319351972656, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.4388338455474836, 4);
  sqcRYGate(q, 1.9883113159916024, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.706933308061363, 4);
  sqcRYGate(q, 0.8197801542576002, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.2666410545725002, 1);
  sqcRYGate(q, -0.7103314246927841, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9451795778520669, 1);
  sqcRYGate(q, -0.7781660813405828, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0807020449279703, 3);
  sqcRYGate(q, -0.27325966740933055, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3210402140983604, 3);
  sqcRYGate(q, 0.9408365170063568, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.6624107761835742, 5);
  sqcRYGate(q, -1.3180032078088288, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5027086751913936, 5);
  sqcRYGate(q, 2.071835190898974, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5552608280810495, 0);
  sqcRYGate(q, -1.971763484208148, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.441468918477094, 0);
  sqcRYGate(q, 1.9997150152385477, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.794012515201369, 2);
  sqcRYGate(q, -1.6272478764601253, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3748418457304905, 2);
  sqcRYGate(q, 0.2991653859919486, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3311369516293916, 4);
  sqcRYGate(q, -0.00888200805397727, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3051706428918732, 4);
  sqcRYGate(q, 0.13442732336203456, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5253232524772863, 6);
  sqcRYGate(q, -2.834955521224598, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6293077159909416, 6);
  sqcRYGate(q, -1.2864049010618448, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.471371785601471, 0);
  sqcRYGate(q, 0.3441629386679601, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0264030218326265, 0);
  sqcRYGate(q, 0.1712198553821684, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9141271102754107, 2);
  sqcRYGate(q, -0.3206073275131512, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.2636172692111174, 2);
  sqcRYGate(q, -2.7027724121266115, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.059934043080654, 4);
  sqcRYGate(q, -0.735423389407064, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.25715524028827197, 4);
  sqcRYGate(q, -1.2965385109311853, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.178283032165905, 1);
  sqcRYGate(q, 0.20474483410338562, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7965190573947374, 1);
  sqcRYGate(q, -0.16632787594645534, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3490829396714998, 3);
  sqcRYGate(q, 0.5043761683286804, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.11627032695400971, 3);
  sqcRYGate(q, 2.576088295419311, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5349544101479458, 5);
  sqcRYGate(q, 0.3343445673476897, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5216631881737342, 5);
  sqcRYGate(q, 2.1270978991538327, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.1431074570251973, 0);
  sqcRYGate(q, -0.6878379817034043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.09624599029884529, 0);
  sqcRYGate(q, -2.016923910405284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9191793699049935, 2);
  sqcRYGate(q, -2.8065875813135213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0449408363289363, 2);
  sqcRYGate(q, 1.2070142311843135, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3107316703361915, 4);
  sqcRYGate(q, -0.05800193611224014, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.640408415732402, 4);
  sqcRYGate(q, 1.1745255377694124, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5592621864213365, 6);
  sqcRYGate(q, 1.2815835131472282, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.03600945580574104, 6);
  sqcRYGate(q, -0.6480261587326659, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5081674627170334, 0);
  sqcRYGate(q, -2.0944095731017107, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4006007116775274, 0);
  sqcRYGate(q, -2.9269911215073705, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1129812130145886, 2);
  sqcRYGate(q, 2.724880918155827, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5447013670643663, 2);
  sqcRYGate(q, 0.4113351611817908, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.239465991802927, 4);
  sqcRYGate(q, -0.1758014809640178, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6581930622221064, 4);
  sqcRYGate(q, -2.294281807218398, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.08159313827070357, 1);
  sqcRYGate(q, -2.671245257099685, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.15403967503602684, 1);
  sqcRYGate(q, -0.06868781952288483, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0427189921134694, 3);
  sqcRYGate(q, -2.165395773222455, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.3676804767966804, 3);
  sqcRYGate(q, 0.09686076597043924, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.25508334351532097, 5);
  sqcRYGate(q, 0.2093527487268657, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.249806404258247, 5);
  sqcRYGate(q, 1.7203745644235466, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5039958949109029, 0);
  sqcRYGate(q, 0.5468066702942335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5342694833481417, 0);
  sqcRYGate(q, -1.7424179104218485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0884828419728128, 2);
  sqcRYGate(q, 2.125958561662344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.35623912950079095, 2);
  sqcRYGate(q, -3.044761865879874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1748406898690136, 4);
  sqcRYGate(q, 2.1307383871716508, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8504311131564226, 4);
  sqcRYGate(q, 1.819092691246585, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.206071245950862, 6);
  sqcRYGate(q, -0.5800431123527516, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1611172974129387, 6);
  sqcRYGate(q, -0.8064802534520709, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.058753460471022825, 0);
  sqcRYGate(q, 2.200467637899385, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.059644937335939, 0);
  sqcRYGate(q, 2.4257682538598098, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7723778986229872, 2);
  sqcRYGate(q, 0.6423023137729773, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.596836228036679, 2);
  sqcRYGate(q, 1.3449149710843749, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.5005476367692325, 4);
  sqcRYGate(q, 1.1885865924815526, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.04272844505197693, 4);
  sqcRYGate(q, 2.625415279181296, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.3670560273636188, 1);
  sqcRYGate(q, -0.793685939467645, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6080827670763185, 1);
  sqcRYGate(q, 1.6973199160520407, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.002467714550926, 3);
  sqcRYGate(q, -2.54228330378787, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.6260600711164106, 3);
  sqcRYGate(q, 2.1448048329823877, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.146833838620797, 5);
  sqcRYGate(q, -0.9150243020883942, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.7928928185559925, 5);
  sqcRYGate(q, 2.1698123174108654, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.436109858189163, 0);
  sqcRYGate(q, -1.0193593071630118, 1);
  sqcRYGate(q, 0.05837513683758111, 2);
  sqcRYGate(q, 2.4056088491779777, 3);
  sqcRYGate(q, -2.06344446285618, 4);
  sqcRYGate(q, -0.4004902830991687, 5);
  sqcRYGate(q, -1.4388588492740666, 6);
  sqcRYGate(q, 1.3297847593950625, 7);

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
