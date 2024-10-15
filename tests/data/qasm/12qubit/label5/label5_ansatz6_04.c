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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 0.6703045152003488, 0);
  sqcRYGate(q, 0.22533799997305604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7235138365958298, 0);
  sqcRYGate(q, 0.06163480428913282, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.43060205182854183, 1);
  sqcRYGate(q, 0.8228492249682816, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9935690312705381, 1);
  sqcRYGate(q, 2.1259146340984247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.722564359338709, 2);
  sqcRYGate(q, 0.1177937731977421, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4408743119752776, 2);
  sqcRYGate(q, -2.720369762150316, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.004151827719328394, 3);
  sqcRYGate(q, -1.0752953806351542, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.48805401135122545, 3);
  sqcRYGate(q, 2.6236106850604544, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2330677852885827, 4);
  sqcRYGate(q, -2.955117528744212, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1336183362943202, 4);
  sqcRYGate(q, -0.2076429754412139, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.210061359177443, 5);
  sqcRYGate(q, 0.03517952363647048, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6039447173236958, 5);
  sqcRYGate(q, 1.6318745158710612, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6090621461600296, 6);
  sqcRYGate(q, 0.9464253335663375, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.170722862192277, 6);
  sqcRYGate(q, -1.714599402031907, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5379015524023243, 7);
  sqcRYGate(q, -3.089946961078383, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.171152197474797, 7);
  sqcRYGate(q, 1.6514713547914548, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.502950627568949, 8);
  sqcRYGate(q, 1.5550537721123245, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7994937694178401, 8);
  sqcRYGate(q, 1.6192330389623981, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.09034081289391072, 9);
  sqcRYGate(q, -0.9085551381809429, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1374172580250352, 9);
  sqcRYGate(q, -1.6925815415744627, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.3002158543088886, 10);
  sqcRYGate(q, -0.6587786832992536, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.3498709059469265, 10);
  sqcRYGate(q, 2.99769587130511, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8882735881653556, 0);
  sqcRYGate(q, -0.07804431633445752, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.289092271862305, 0);
  sqcRYGate(q, 0.5981665801625513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.206414374227645, 1);
  sqcRYGate(q, -0.8333451203142754, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7101253992658468, 1);
  sqcRYGate(q, -0.39745398526666376, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.519399069012902, 2);
  sqcRYGate(q, 1.4060139746717286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0409137083930844, 2);
  sqcRYGate(q, -1.9751914760153682, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7829924693091338, 3);
  sqcRYGate(q, 2.7916668556897446, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.022831050473641, 3);
  sqcRYGate(q, 1.2196810952250325, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0835571818452423, 4);
  sqcRYGate(q, 3.1059483247225974, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3295358537899915, 4);
  sqcRYGate(q, 3.139789068570931, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.598125265578297, 5);
  sqcRYGate(q, -2.08124212645202, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.05361085032640368, 5);
  sqcRYGate(q, 1.4763400486068512, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.358981208806392, 6);
  sqcRYGate(q, 1.561821634275759, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3612816077254681, 6);
  sqcRYGate(q, 0.5221559494914212, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.19011125895618033, 7);
  sqcRYGate(q, -1.5685752902941208, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9315416648529457, 7);
  sqcRYGate(q, 1.989779228923282, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5185432906496743, 8);
  sqcRYGate(q, 1.560844834617865, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.554540901292393, 8);
  sqcRYGate(q, 3.1209588484773096, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.0310255605836005, 9);
  sqcRYGate(q, -2.4140900829015184, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.535430458510806, 9);
  sqcRYGate(q, -0.09339819876877345, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.26612252658525, 10);
  sqcRYGate(q, 2.3062111232885094, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.581958010153109, 10);
  sqcRYGate(q, 3.017010085376637, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2087632044087364, 0);
  sqcRYGate(q, 0.8650396373253447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0775335826999375, 0);
  sqcRYGate(q, -1.8141973454904905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.121588553168373, 1);
  sqcRYGate(q, 1.425054700270741, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.47035550041225616, 1);
  sqcRYGate(q, -1.9454975849147853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.116788532206658, 2);
  sqcRYGate(q, 2.5143458554516247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.10494109591879663, 2);
  sqcRYGate(q, -1.6169928218246552, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2690019569606, 3);
  sqcRYGate(q, -3.1357879300236466, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6138922682412848, 3);
  sqcRYGate(q, -1.1716022443308187, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0481068420462654, 4);
  sqcRYGate(q, -0.015523839128114015, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5497090549384431, 4);
  sqcRYGate(q, -0.07241598460746523, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.105544342977738, 5);
  sqcRYGate(q, 2.2932137686893195, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4845592006703014, 5);
  sqcRYGate(q, -1.3135806062300208, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.503419060331115, 6);
  sqcRYGate(q, -1.6157686515443557, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.273918824816652, 6);
  sqcRYGate(q, -0.002388760979711968, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5968015800996425, 7);
  sqcRYGate(q, -2.2878903063527973, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1229795324350205, 7);
  sqcRYGate(q, -1.974883849615522, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.4167742139607542, 8);
  sqcRYGate(q, 1.7683343510420864, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.17351528521074755, 8);
  sqcRYGate(q, -2.984345319399236, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.059040266144407, 9);
  sqcRYGate(q, -1.909188852767623, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.049069730960638, 9);
  sqcRYGate(q, -1.0391308386008136, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.9531973375002387, 10);
  sqcRYGate(q, 1.8609715140453513, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.012303305900146, 10);
  sqcRYGate(q, 1.559760119643493, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6916776419604267, 0);
  sqcRYGate(q, 1.187745699374375, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2386619632948834, 0);
  sqcRYGate(q, 1.5503392312122266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.868667318831067, 1);
  sqcRYGate(q, 1.3329280992319648, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9967782144514157, 1);
  sqcRYGate(q, -0.7727748089341723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8791628069871651, 2);
  sqcRYGate(q, -0.9429841958893878, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.479370859526792, 2);
  sqcRYGate(q, 1.9856028336084126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5229824237448542, 3);
  sqcRYGate(q, 2.1990739168582243, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.19559662126841104, 3);
  sqcRYGate(q, 3.1102623232518636, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6461742484014011, 4);
  sqcRYGate(q, 1.3335066150488686, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5692330417799214, 4);
  sqcRYGate(q, 0.07799015519969554, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.579710093947547, 5);
  sqcRYGate(q, 1.4519274940340638, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0710181331225948, 5);
  sqcRYGate(q, -1.6863688722826025, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6146240179621256, 6);
  sqcRYGate(q, 0.39398256360328743, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9833350674994072, 6);
  sqcRYGate(q, 2.9484525267957618, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8346349481015152, 7);
  sqcRYGate(q, -2.2717980978651795, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.52204300184063, 7);
  sqcRYGate(q, 0.6427328956151548, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.8398111201710177, 8);
  sqcRYGate(q, -1.5405021327712904, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5673073034678255, 8);
  sqcRYGate(q, -1.5740231460221554, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.461269744912454, 9);
  sqcRYGate(q, 0.21320311015193671, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5780807258498388, 9);
  sqcRYGate(q, 1.1339163336586604, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2194047663544367, 10);
  sqcRYGate(q, -0.4448412019228197, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.4107150094087597, 10);
  sqcRYGate(q, 0.07531768637891467, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.36241276081866847, 0);
  sqcRYGate(q, -3.1270250848667933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.12695968287370185, 0);
  sqcRYGate(q, 2.2727652549933666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.41956377527685, 1);
  sqcRYGate(q, 3.0188675767157935, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4740848755956097, 1);
  sqcRYGate(q, -2.38058293110722, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3604532450683653, 2);
  sqcRYGate(q, -2.4923418398331236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4523444557049423, 2);
  sqcRYGate(q, 0.8374926567858423, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6167009449381196, 3);
  sqcRYGate(q, 2.284134493763447, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.010790660152430487, 3);
  sqcRYGate(q, 2.8501849530145935, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5590705302854126, 4);
  sqcRYGate(q, 0.6584424398616845, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1728533344039447, 4);
  sqcRYGate(q, 1.1567895938181723, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7484559302080585, 5);
  sqcRYGate(q, 2.8821174681601276, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8271859801532149, 5);
  sqcRYGate(q, 2.3497878955699787, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.03228071666509802, 6);
  sqcRYGate(q, 1.519440462753578, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5840600022003128, 6);
  sqcRYGate(q, -1.8743441946176649, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.034648667852462865, 7);
  sqcRYGate(q, 0.871730018005029, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5711391761545885, 7);
  sqcRYGate(q, -2.341524978076648, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.8269733059773383, 8);
  sqcRYGate(q, -1.7703062094906077, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.12404053499776069, 8);
  sqcRYGate(q, 0.0012465010498385431, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.012063128061616, 9);
  sqcRYGate(q, -1.1641319808517103, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.00808983472098707, 9);
  sqcRYGate(q, 0.9682728600377635, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.521647264452791, 10);
  sqcRYGate(q, -1.3185589922557945, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.289400802030414, 10);
  sqcRYGate(q, -3.089438468590093, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.1861186660865683, 0);
  sqcRYGate(q, 1.710285561257205, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1690639959124098, 0);
  sqcRYGate(q, 2.5049492644305054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.374174998885147, 1);
  sqcRYGate(q, 1.5250219409515378, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8686091655855517, 1);
  sqcRYGate(q, 0.03441141650242141, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9917242534034907, 2);
  sqcRYGate(q, 1.665275158331804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7655177097247434, 2);
  sqcRYGate(q, -0.8238340365283251, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4483778600890993, 3);
  sqcRYGate(q, 1.4757698313472498, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5648502431069604, 3);
  sqcRYGate(q, 0.012209667919430591, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9373424967854898, 4);
  sqcRYGate(q, -1.627576737464391, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6012984571302882, 4);
  sqcRYGate(q, -3.139541440072523, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5851923300853477, 5);
  sqcRYGate(q, 1.5855374984060993, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5751214550193526, 5);
  sqcRYGate(q, 1.2728828345022372, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5691923512568176, 6);
  sqcRYGate(q, -1.5684019257401445, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.65647756569873, 6);
  sqcRYGate(q, -2.2189073019093333, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.570985642452345, 7);
  sqcRYGate(q, -0.23700947962390995, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.140824337405674, 7);
  sqcRYGate(q, 0.5546926122478197, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.507773326489929, 8);
  sqcRYGate(q, -2.8433838555283186, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.673813635006697, 8);
  sqcRYGate(q, -1.562104035448077, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.027162682743952615, 9);
  sqcRYGate(q, 2.327479596381679, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.565741237828029, 9);
  sqcRYGate(q, -1.5704922052449286, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5655943413006914, 10);
  sqcRYGate(q, -0.8460198409358879, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.140290161673482, 10);
  sqcRYGate(q, -1.5584300753369629, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.8841028805291224, 0);
  sqcRYGate(q, 0.502857074315016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.019871766467996, 0);
  sqcRYGate(q, 0.8368181515315721, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.094534338583383, 1);
  sqcRYGate(q, -0.8689889093955473, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8959135169636827, 1);
  sqcRYGate(q, -1.6867587109236697, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8420704160514163, 2);
  sqcRYGate(q, 1.0649159681684024, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.572123600032762, 2);
  sqcRYGate(q, -0.0014309383452927957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5687225484966907, 3);
  sqcRYGate(q, 2.925581027748602, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.079066583961196, 3);
  sqcRYGate(q, -1.6002477499631782, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7564805288320517, 4);
  sqcRYGate(q, -1.569856211922188, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5682193079725018, 4);
  sqcRYGate(q, -3.1389450132761905, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5713168034192002, 5);
  sqcRYGate(q, -1.5725769228024133, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6157092795672102, 5);
  sqcRYGate(q, -1.5659570596461636, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5754497677583377, 6);
  sqcRYGate(q, 1.573999800305082, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4628974910758092, 6);
  sqcRYGate(q, 0.31425319488257425, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5714021539633025, 7);
  sqcRYGate(q, -1.5702062764526747, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5460520857031785, 7);
  sqcRYGate(q, 2.5355425057460304, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5705309950498405, 8);
  sqcRYGate(q, -1.569657917400204, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.567763354005736, 8);
  sqcRYGate(q, -1.4423510132834068, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.08379380993005638, 9);
  sqcRYGate(q, -1.5710408982828368, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5797097777130467, 9);
  sqcRYGate(q, 3.1409368227228627, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6482746557769072, 10);
  sqcRYGate(q, -1.4952888655144518, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5649402599196758, 10);
  sqcRYGate(q, -3.1320269841510675, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.34512734482173596, 0);
  sqcRYGate(q, -1.7587124946715855, 1);
  sqcRYGate(q, 1.5452176614252973, 2);
  sqcRYGate(q, -1.5735465358440175, 3);
  sqcRYGate(q, -1.385317783600862, 4);
  sqcRYGate(q, -1.5699764216318688, 5);
  sqcRYGate(q, -1.5651173889417533, 6);
  sqcRYGate(q, 1.570190382067258, 7);
  sqcRYGate(q, 1.572064636280622, 8);
  sqcRYGate(q, 3.0600916675457204, 9);
  sqcRYGate(q, 1.6381956804556552, 10);
  sqcRYGate(q, 0.0006005166436304777, 11);

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
