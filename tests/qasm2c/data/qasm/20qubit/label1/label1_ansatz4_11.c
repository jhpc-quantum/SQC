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

  sqcRYGate(q, 1.1237324411002074, 0);
  sqcRZGate(q, -1.4952764498634163, 0);
  sqcRYGate(q, -2.304490705273641, 1);
  sqcRZGate(q, -0.9799152714070098, 1);
  sqcRYGate(q, 2.020470799164142, 2);
  sqcRZGate(q, -3.083095095086941, 2);
  sqcRYGate(q, -2.108108909863933, 3);
  sqcRZGate(q, -1.2269574886516847, 3);
  sqcRYGate(q, 1.5023977653693956, 4);
  sqcRZGate(q, 0.9313964368716676, 4);
  sqcRYGate(q, 1.540694050814067, 5);
  sqcRZGate(q, 2.912737448473844, 5);
  sqcRYGate(q, -1.3186562234652717, 6);
  sqcRZGate(q, 1.4350395422702726, 6);
  sqcRYGate(q, -1.1099089916511704, 7);
  sqcRZGate(q, -0.3574055160436965, 7);
  sqcRYGate(q, -2.8361336743599996, 8);
  sqcRZGate(q, 0.5731297849045571, 8);
  sqcRYGate(q, -1.1192054648744287, 9);
  sqcRZGate(q, -1.1819576702583765, 9);
  sqcRYGate(q, -3.1303062813732754, 10);
  sqcRZGate(q, -0.9191632519568653, 10);
  sqcRYGate(q, 0.0023208519310848885, 11);
  sqcRZGate(q, -0.21902955188841777, 11);
  sqcRYGate(q, 1.403316783839943, 12);
  sqcRZGate(q, 0.055915993768626306, 12);
  sqcRYGate(q, 1.7857969801204823, 13);
  sqcRZGate(q, -3.0959110937850327, 13);
  sqcRYGate(q, 3.135608225598731, 14);
  sqcRZGate(q, -1.0181651456267584, 14);
  sqcRYGate(q, 3.119195114477611, 15);
  sqcRZGate(q, -1.6881578070063383, 15);
  sqcRYGate(q, -2.9292787060176684, 16);
  sqcRZGate(q, -1.735611025125957, 16);
  sqcRYGate(q, 2.9422806883115524, 17);
  sqcRZGate(q, 1.864490930714659, 17);
  sqcRYGate(q, -1.8125850301442599, 18);
  sqcRZGate(q, 1.5613465380830691, 18);
  sqcRYGate(q, -1.6373853018018303, 19);
  sqcRZGate(q, -2.6417733680068096, 19);
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
  sqcRYGate(q, -1.1101185294234055, 0);
  sqcRZGate(q, -1.0418324846365528, 0);
  sqcRYGate(q, -2.0296343297092037, 1);
  sqcRZGate(q, -0.4495709378664375, 1);
  sqcRYGate(q, -2.843682016255959, 2);
  sqcRZGate(q, -0.380014740023799, 2);
  sqcRYGate(q, 2.1943249251407093, 3);
  sqcRZGate(q, 1.0080880691857192, 3);
  sqcRYGate(q, -0.0028001103528181304, 4);
  sqcRZGate(q, -0.42987557564392986, 4);
  sqcRYGate(q, 3.140851852607759, 5);
  sqcRZGate(q, -0.16161018300105476, 5);
  sqcRYGate(q, 3.0956507631293495, 6);
  sqcRZGate(q, -1.9282326521065505, 6);
  sqcRYGate(q, -0.12858226769457123, 7);
  sqcRZGate(q, -1.5178047770978265, 7);
  sqcRYGate(q, 2.9459571487511558, 8);
  sqcRZGate(q, 1.860145312732109, 8);
  sqcRYGate(q, -0.05705329024020767, 9);
  sqcRZGate(q, 2.8504563890776855, 9);
  sqcRYGate(q, 0.08570642482272174, 10);
  sqcRZGate(q, 2.6929101248462173, 10);
  sqcRYGate(q, -0.022676551828832103, 11);
  sqcRZGate(q, -2.923167045642902, 11);
  sqcRYGate(q, -2.327463107954124, 12);
  sqcRZGate(q, -0.07971249893113619, 12);
  sqcRYGate(q, 2.124215765679532, 13);
  sqcRZGate(q, -2.934498404051803, 13);
  sqcRYGate(q, -0.5957309884101414, 14);
  sqcRZGate(q, -2.9511253306875065, 14);
  sqcRYGate(q, -0.19290347966457602, 15);
  sqcRZGate(q, 1.111523473701947, 15);
  sqcRYGate(q, -1.6011999368470555, 16);
  sqcRZGate(q, 0.17493951717511558, 16);
  sqcRYGate(q, 1.7300442281792983, 17);
  sqcRZGate(q, 2.914747550660531, 17);
  sqcRYGate(q, -1.2321199173638862, 18);
  sqcRZGate(q, -1.6490928386017614, 18);
  sqcRYGate(q, 1.8785350441447832, 19);
  sqcRZGate(q, 2.7160029618111476, 19);
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
  sqcRYGate(q, 3.017871861432287, 0);
  sqcRZGate(q, 0.5834167776715061, 0);
  sqcRYGate(q, 1.6846610332331282, 1);
  sqcRZGate(q, 1.5792816180418896, 1);
  sqcRYGate(q, 1.7486042268403175, 2);
  sqcRZGate(q, -0.05518248790034035, 2);
  sqcRYGate(q, 0.1935909933681649, 3);
  sqcRZGate(q, -2.0402818305582118, 3);
  sqcRYGate(q, 0.10199032592815449, 4);
  sqcRZGate(q, 0.46932101847701374, 4);
  sqcRYGate(q, -0.08824750157841521, 5);
  sqcRZGate(q, 2.3383462848338383, 5);
  sqcRYGate(q, 1.4365980491970305, 6);
  sqcRZGate(q, 2.2541866298527737, 6);
  sqcRYGate(q, -0.7669508988590144, 7);
  sqcRZGate(q, 2.422827235318966, 7);
  sqcRYGate(q, -1.5833446231215893, 8);
  sqcRZGate(q, 2.2260769569470202, 8);
  sqcRYGate(q, -1.6931283696754709, 9);
  sqcRZGate(q, -0.09387514784791706, 9);
  sqcRYGate(q, -1.5520613174175044, 10);
  sqcRZGate(q, -2.075238933621083, 10);
  sqcRYGate(q, -1.601962938012533, 11);
  sqcRZGate(q, 1.3962540889122037, 11);
  sqcRYGate(q, 1.30056926679677, 12);
  sqcRZGate(q, -1.3462827548848393, 12);
  sqcRYGate(q, -1.9431665738193846, 13);
  sqcRZGate(q, -1.0998822775234307, 13);
  sqcRYGate(q, 3.1184721829716104, 14);
  sqcRZGate(q, 0.3119298788471294, 14);
  sqcRYGate(q, 3.108165560862246, 15);
  sqcRZGate(q, 1.8735486685646556, 15);
  sqcRYGate(q, -0.19908744201926715, 16);
  sqcRZGate(q, -1.2267562267100076, 16);
  sqcRYGate(q, -2.931416989105442, 17);
  sqcRZGate(q, 0.8352050554189084, 17);
  sqcRYGate(q, -0.2944367222693074, 18);
  sqcRZGate(q, -0.6303233559050072, 18);
  sqcRYGate(q, -1.523701441224345, 19);
  sqcRZGate(q, -0.7577051455317193, 19);
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
  sqcRYGate(q, -1.9886718868037114, 0);
  sqcRZGate(q, -1.41532611024659, 0);
  sqcRYGate(q, 2.1535008100191018, 1);
  sqcRZGate(q, -2.0080577767770373, 1);
  sqcRYGate(q, 1.3105710890911144, 2);
  sqcRZGate(q, -0.606258788010589, 2);
  sqcRYGate(q, 1.8092467428606758, 3);
  sqcRZGate(q, 1.307848444243266, 3);
  sqcRYGate(q, -3.1405976567363063, 4);
  sqcRZGate(q, 2.036657401578868, 4);
  sqcRYGate(q, 0.0032914788344164943, 5);
  sqcRZGate(q, -1.8537620637709609, 5);
  sqcRYGate(q, 1.5422028284069267, 6);
  sqcRZGate(q, 1.9703158283436588, 6);
  sqcRYGate(q, 0.38833630804377434, 7);
  sqcRZGate(q, 0.4627163800886258, 7);
  sqcRYGate(q, 3.1343708253635985, 8);
  sqcRZGate(q, 0.947875781498031, 8);
  sqcRYGate(q, -0.007641458687656311, 9);
  sqcRZGate(q, 2.9648698442090433, 9);
  sqcRYGate(q, -0.00350034894930453, 10);
  sqcRZGate(q, -2.84266424864715, 10);
  sqcRYGate(q, 3.123531523279688, 11);
  sqcRZGate(q, 1.2665488117957666, 11);
  sqcRYGate(q, 2.7304924550832146, 12);
  sqcRZGate(q, 1.2634267463147655, 12);
  sqcRYGate(q, -2.444675647815208, 13);
  sqcRZGate(q, 2.6646586620080606, 13);
  sqcRYGate(q, 1.232814993939205, 14);
  sqcRZGate(q, 1.0302150318853724, 14);
  sqcRYGate(q, 2.565166030933307, 15);
  sqcRZGate(q, 2.864364585797671, 15);
  sqcRYGate(q, -2.9565209401191077, 16);
  sqcRZGate(q, -1.747772418098322, 16);
  sqcRYGate(q, 2.1730502090914268, 17);
  sqcRZGate(q, 0.7126208824058868, 17);
  sqcRYGate(q, 2.680021556485651, 18);
  sqcRZGate(q, 0.24380507085365985, 18);
  sqcRYGate(q, -1.0914548034918008, 19);
  sqcRZGate(q, -2.782819176254735, 19);
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
  sqcRYGate(q, -1.206812449778102, 0);
  sqcRZGate(q, -0.9447036128487577, 0);
  sqcRYGate(q, 0.7465230353478294, 1);
  sqcRZGate(q, 3.088353692937983, 1);
  sqcRYGate(q, 1.0423242844963254, 2);
  sqcRZGate(q, -1.403823495748633, 2);
  sqcRYGate(q, 1.058896126956974, 3);
  sqcRZGate(q, 1.2123400467194838, 3);
  sqcRYGate(q, 1.5735054657300624, 4);
  sqcRZGate(q, -1.469672028190116, 4);
  sqcRYGate(q, 1.5666140845753995, 5);
  sqcRZGate(q, 1.8769960370971814, 5);
  sqcRYGate(q, -3.1034194431588915, 6);
  sqcRZGate(q, 1.3352512454614767, 6);
  sqcRYGate(q, -0.056283874805686196, 7);
  sqcRZGate(q, 2.425006220194992, 7);
  sqcRYGate(q, -2.115822501402898, 8);
  sqcRZGate(q, 2.67552077170815, 8);
  sqcRYGate(q, -0.030578219053940536, 9);
  sqcRZGate(q, -1.2304524716564158, 9);
  sqcRYGate(q, 2.968844877394362, 10);
  sqcRZGate(q, 1.3260675170178633, 10);
  sqcRYGate(q, 3.082451111313117, 11);
  sqcRZGate(q, -1.9494413001936028, 11);
  sqcRYGate(q, 0.10359328581704154, 12);
  sqcRZGate(q, -1.5690877443471676, 12);
  sqcRYGate(q, -3.1035952172030727, 13);
  sqcRZGate(q, -0.48620190736150626, 13);
  sqcRYGate(q, -3.1353639369201, 14);
  sqcRZGate(q, 2.032005994109917, 14);
  sqcRYGate(q, 0.006050639516133494, 15);
  sqcRZGate(q, -0.059691931790532254, 15);
  sqcRYGate(q, -0.635884839457499, 16);
  sqcRZGate(q, -2.872577155605754, 16);
  sqcRYGate(q, 0.8220449443176827, 17);
  sqcRZGate(q, 0.4188631795929777, 17);
  sqcRYGate(q, 2.0120817609277384, 18);
  sqcRZGate(q, -3.058194424432933, 18);
  sqcRYGate(q, 1.0890736819021853, 19);
  sqcRZGate(q, -2.013319826884472, 19);
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
  sqcRYGate(q, 1.302316695394289, 0);
  sqcRZGate(q, 2.1401095453710273, 0);
  sqcRYGate(q, -2.245169483422143, 1);
  sqcRZGate(q, -2.6810248805127137, 1);
  sqcRYGate(q, 3.1240172704218883, 2);
  sqcRZGate(q, -2.602538116492542, 2);
  sqcRYGate(q, -0.011946976515372241, 3);
  sqcRZGate(q, 0.8116153433520134, 3);
  sqcRYGate(q, 0.0005137869262110684, 4);
  sqcRZGate(q, -1.6688343417575062, 4);
  sqcRYGate(q, 3.1370845964740917, 5);
  sqcRZGate(q, 1.8794102019661805, 5);
  sqcRYGate(q, 3.0756784599133864, 6);
  sqcRZGate(q, 0.1076354553718728, 6);
  sqcRYGate(q, 1.5682202101176452, 7);
  sqcRZGate(q, -1.0789313845074764, 7);
  sqcRYGate(q, -0.0076545782002988005, 8);
  sqcRZGate(q, 1.5479074328695894, 8);
  sqcRYGate(q, 3.1219835959269164, 9);
  sqcRZGate(q, -2.374185548548934, 9);
  sqcRYGate(q, 0.32991413200225145, 10);
  sqcRZGate(q, 0.1494370640326259, 10);
  sqcRYGate(q, 2.2033118836660033, 11);
  sqcRZGate(q, 1.2774749436767037, 11);
  sqcRYGate(q, -2.660814711333091, 12);
  sqcRZGate(q, -3.1162782303119423, 12);
  sqcRYGate(q, 2.5922797508189954, 13);
  sqcRZGate(q, 0.2266859310153322, 13);
  sqcRYGate(q, -0.31536011453456764, 14);
  sqcRZGate(q, 1.7491844680899513, 14);
  sqcRYGate(q, 1.0812396111094997, 15);
  sqcRZGate(q, 0.8007863433044476, 15);
  sqcRYGate(q, -0.6609476213920701, 16);
  sqcRZGate(q, -0.2181736835934016, 16);
  sqcRYGate(q, -0.8944002222402831, 17);
  sqcRZGate(q, 1.1446199379446984, 17);
  sqcRYGate(q, -1.9590469019752916, 18);
  sqcRZGate(q, -1.5315884996656266, 18);
  sqcRYGate(q, -2.8572316821272863, 19);
  sqcRZGate(q, 0.04258922539005105, 19);
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
  sqcRYGate(q, -2.123960261698538, 0);
  sqcRZGate(q, 3.046862538204939, 0);
  sqcRYGate(q, -0.7880583464693958, 1);
  sqcRZGate(q, -0.2524452522609727, 1);
  sqcRYGate(q, 1.9512626880785282, 2);
  sqcRZGate(q, 0.19485551122980532, 2);
  sqcRYGate(q, -1.211181997153954, 3);
  sqcRZGate(q, 2.3552397502812163, 3);
  sqcRYGate(q, 1.5654938928682818, 4);
  sqcRZGate(q, 2.356322039860273, 4);
  sqcRYGate(q, -1.5685999442346694, 5);
  sqcRZGate(q, -0.7427656364797871, 5);
  sqcRYGate(q, -0.3409246395085201, 6);
  sqcRZGate(q, 1.7748955590228368, 6);
  sqcRYGate(q, 0.03373718413999901, 7);
  sqcRZGate(q, -2.11208191661422, 7);
  sqcRYGate(q, -1.71067197935463, 8);
  sqcRZGate(q, -2.888042974295154, 8);
  sqcRYGate(q, 1.8327264782516821, 9);
  sqcRZGate(q, 3.035836857502828, 9);
  sqcRYGate(q, 1.5343037569675149, 10);
  sqcRZGate(q, -1.6077652588007973, 10);
  sqcRYGate(q, 1.5443163097075772, 11);
  sqcRZGate(q, -2.0924843368713963, 11);
  sqcRYGate(q, 3.101830501130899, 12);
  sqcRZGate(q, 1.9254862918755673, 12);
  sqcRYGate(q, 3.0930814877386297, 13);
  sqcRZGate(q, -1.2618065451794875, 13);
  sqcRYGate(q, -0.02859841531090712, 14);
  sqcRZGate(q, 1.1142948701600703, 14);
  sqcRYGate(q, -0.023609000162743147, 15);
  sqcRZGate(q, -0.7778832227001132, 15);
  sqcRYGate(q, 0.36959342433736087, 16);
  sqcRZGate(q, 3.1068275332798065, 16);
  sqcRYGate(q, 1.6578355287211268, 17);
  sqcRZGate(q, -2.0749547426829738, 17);
  sqcRYGate(q, -1.5338078144545362, 18);
  sqcRZGate(q, 0.4448730036748696, 18);
  sqcRYGate(q, -0.1958858506970893, 19);
  sqcRZGate(q, 1.8873811607228559, 19);
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
  sqcRYGate(q, 1.297264463825458, 0);
  sqcRZGate(q, 2.109038169528289, 0);
  sqcRYGate(q, -1.7909277378056552, 1);
  sqcRZGate(q, 3.015035983179003, 1);
  sqcRYGate(q, -0.6563843384727485, 2);
  sqcRZGate(q, -1.0998366613756607, 2);
  sqcRYGate(q, 1.0623277004368392, 3);
  sqcRZGate(q, -2.426291111513987, 3);
  sqcRYGate(q, -1.3252210968845848, 4);
  sqcRZGate(q, 2.1800972034563397, 4);
  sqcRYGate(q, 0.673562850867377, 5);
  sqcRZGate(q, -3.014567385105764, 5);
  sqcRYGate(q, 1.1427960397028838, 6);
  sqcRZGate(q, -0.5658721175143652, 6);
  sqcRYGate(q, -1.6584245904910508, 7);
  sqcRZGate(q, 1.5716711927381537, 7);
  sqcRYGate(q, -1.5593302566059055, 8);
  sqcRZGate(q, 0.4350402005453472, 8);
  sqcRYGate(q, -1.575043638771831, 9);
  sqcRZGate(q, 0.1908553953897974, 9);
  sqcRYGate(q, -2.067160386814529, 10);
  sqcRZGate(q, -0.15633706635551972, 10);
  sqcRYGate(q, 0.7363394045216793, 11);
  sqcRZGate(q, -0.14329833803041414, 11);
  sqcRYGate(q, 2.871955737624475, 12);
  sqcRZGate(q, 2.5252581387649284, 12);
  sqcRYGate(q, 0.11901680802084424, 13);
  sqcRZGate(q, 1.604557885117389, 13);
  sqcRYGate(q, 0.015823751699413722, 14);
  sqcRZGate(q, -0.39391424466127684, 14);
  sqcRYGate(q, -0.08870012879191816, 15);
  sqcRZGate(q, -2.8268602927089836, 15);
  sqcRYGate(q, -1.6445393045203254, 16);
  sqcRZGate(q, -1.5995994341835285, 16);
  sqcRYGate(q, 0.4596795954461843, 17);
  sqcRZGate(q, 2.818697565595028, 17);
  sqcRYGate(q, 3.1372588926875014, 18);
  sqcRZGate(q, -2.943437053361076, 18);
  sqcRYGate(q, -0.021333353754735995, 19);
  sqcRZGate(q, -0.8824923165405223, 19);
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
  sqcRYGate(q, -0.7554196470180865, 0);
  sqcRZGate(q, -2.9812522438767743, 0);
  sqcRYGate(q, 1.2610559391468987, 1);
  sqcRZGate(q, -2.530159634781308, 1);
  sqcRYGate(q, 0.0029224383251951645, 2);
  sqcRZGate(q, -2.6279288822609184, 2);
  sqcRYGate(q, 3.1405490252314423, 3);
  sqcRZGate(q, 0.8012018662092566, 3);
  sqcRYGate(q, 0.011259278763033898, 4);
  sqcRZGate(q, 0.9513865147198262, 4);
  sqcRYGate(q, -3.1402280361129464, 5);
  sqcRZGate(q, 0.13392209686175688, 5);
  sqcRYGate(q, 0.11642419046032604, 6);
  sqcRZGate(q, 1.6143645201342407, 6);
  sqcRYGate(q, 2.924771362352272, 7);
  sqcRZGate(q, -1.539486873978771, 7);
  sqcRYGate(q, 0.22481461042849715, 8);
  sqcRZGate(q, 2.4733472525099125, 8);
  sqcRYGate(q, -3.118910060180205, 9);
  sqcRZGate(q, -0.7440742175863049, 9);
  sqcRYGate(q, -0.495727391690669, 10);
  sqcRZGate(q, 0.24967284300212175, 10);
  sqcRYGate(q, -1.7006788537578634, 11);
  sqcRZGate(q, -2.44276719778168, 11);
  sqcRYGate(q, -0.01515679071146436, 12);
  sqcRZGate(q, 0.6272685503836062, 12);
  sqcRYGate(q, -3.132713861494584, 13);
  sqcRZGate(q, 2.6354524560366466, 13);
  sqcRYGate(q, 0.03350554497734609, 14);
  sqcRZGate(q, -0.39023981483403875, 14);
  sqcRYGate(q, 0.0050332782247783925, 15);
  sqcRZGate(q, 1.827494977485563, 15);
  sqcRYGate(q, -1.7671402023416833, 16);
  sqcRZGate(q, 0.6146605759030725, 16);
  sqcRYGate(q, -0.16170478494922882, 17);
  sqcRZGate(q, 1.351305034010415, 17);
  sqcRYGate(q, 1.725442662650556, 18);
  sqcRZGate(q, 2.0417993078941303, 18);
  sqcRYGate(q, -0.9206917922857798, 19);
  sqcRZGate(q, 1.676289057833501, 19);
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
  sqcRYGate(q, 1.7021818361911523, 0);
  sqcRZGate(q, 2.4110525576853457, 0);
  sqcRYGate(q, 1.0071489873542367, 1);
  sqcRZGate(q, -1.2779124734865386, 1);
  sqcRYGate(q, 2.305672972507052, 2);
  sqcRZGate(q, -3.0157869052970545, 2);
  sqcRYGate(q, -0.2816101885716398, 3);
  sqcRZGate(q, 2.3008252205071758, 3);
  sqcRYGate(q, -1.8096990476830648, 4);
  sqcRZGate(q, 0.3015234085140763, 4);
  sqcRYGate(q, -2.4597010841594966, 5);
  sqcRZGate(q, 2.8305719505975393, 5);
  sqcRYGate(q, 1.5824296833175113, 6);
  sqcRZGate(q, 2.281025567467677, 6);
  sqcRYGate(q, 1.481863986518377, 7);
  sqcRZGate(q, -1.5201249456776953, 7);
  sqcRYGate(q, 0.0013091985414126486, 8);
  sqcRZGate(q, -0.005703972383683713, 8);
  sqcRYGate(q, -0.013235628090441747, 9);
  sqcRZGate(q, 1.016086401188348, 9);
  sqcRYGate(q, 3.134251642672209, 10);
  sqcRZGate(q, 0.9369125326505489, 10);
  sqcRYGate(q, 3.0967874554082906, 11);
  sqcRZGate(q, -0.30219948809669717, 11);
  sqcRYGate(q, 0.8398249084262162, 12);
  sqcRZGate(q, -0.24184753020195782, 12);
  sqcRYGate(q, 1.3018754375965778, 13);
  sqcRZGate(q, 2.7065654069420253, 13);
  sqcRYGate(q, -0.4222824144689703, 14);
  sqcRZGate(q, 0.5776446971055833, 14);
  sqcRYGate(q, -1.8813063348151218, 15);
  sqcRZGate(q, 1.9069999360083107, 15);
  sqcRYGate(q, 2.86711843782046, 16);
  sqcRZGate(q, 0.5422901761283935, 16);
  sqcRYGate(q, -0.38028759589384076, 17);
  sqcRZGate(q, -0.6980260235619783, 17);
  sqcRYGate(q, -1.4498890582482806, 18);
  sqcRZGate(q, 1.3123490910329183, 18);
  sqcRYGate(q, 1.7046722981249598, 19);
  sqcRZGate(q, -2.297239949536726, 19);
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
  sqcRYGate(q, 0.5052953390530082, 0);
  sqcRZGate(q, 2.1541267409291254, 0);
  sqcRYGate(q, -1.2757795085903663, 1);
  sqcRZGate(q, -2.401623493347847, 1);
  sqcRYGate(q, 3.0665932328643204, 2);
  sqcRZGate(q, 0.34619983365624485, 2);
  sqcRYGate(q, 2.2734036230830026, 3);
  sqcRZGate(q, -2.014074708428844, 3);
  sqcRYGate(q, -1.5777046979158589, 4);
  sqcRZGate(q, -0.7319944635970396, 4);
  sqcRYGate(q, 1.57685455879718, 5);
  sqcRZGate(q, 1.597056283967668, 5);
  sqcRYGate(q, -0.022759930868336508, 6);
  sqcRZGate(q, -2.741934502770974, 6);
  sqcRYGate(q, -1.5235748734412633, 7);
  sqcRZGate(q, 1.6654564901202902, 7);
  sqcRYGate(q, -1.762540125118225, 8);
  sqcRZGate(q, -1.9428475817283024, 8);
  sqcRYGate(q, 1.5463067479848611, 9);
  sqcRZGate(q, 2.1872615462031293, 9);
  sqcRYGate(q, -3.13923286700388, 10);
  sqcRZGate(q, 1.3892837221379322, 10);
  sqcRYGate(q, 0.20074231781785548, 11);
  sqcRZGate(q, 0.9080941591029887, 11);
  sqcRYGate(q, -1.57316227943973, 12);
  sqcRZGate(q, 1.5384312850875126, 12);
  sqcRYGate(q, 1.5702767347248963, 13);
  sqcRZGate(q, 1.5854212015408082, 13);
  sqcRYGate(q, -0.3806276511429179, 14);
  sqcRZGate(q, 2.8174561599585317, 14);
  sqcRYGate(q, 0.03973829713797127, 15);
  sqcRZGate(q, 2.3966610609714563, 15);
  sqcRYGate(q, 0.95510864938768, 16);
  sqcRZGate(q, -2.9826718646080335, 16);
  sqcRYGate(q, 1.535020911092203, 17);
  sqcRZGate(q, -2.741755439954335, 17);
  sqcRYGate(q, 2.0360847027927957, 18);
  sqcRZGate(q, -0.4575075385989491, 18);
  sqcRYGate(q, 2.9436482246587925, 19);
  sqcRZGate(q, 2.9990560451074466, 19);
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
  sqcRYGate(q, 3.109435925810506, 0);
  sqcRZGate(q, 0.04790269919262453, 0);
  sqcRYGate(q, -3.0362276446630165, 1);
  sqcRZGate(q, -1.9873526090593565, 1);
  sqcRYGate(q, -3.1014418417798466, 2);
  sqcRZGate(q, 0.44245169006318985, 2);
  sqcRYGate(q, 0.9661319910700179, 3);
  sqcRZGate(q, 2.416595152056774, 3);
  sqcRYGate(q, 3.0232240586550154, 4);
  sqcRZGate(q, -2.252062193205682, 4);
  sqcRYGate(q, -3.056003308681994, 5);
  sqcRZGate(q, 3.134521077871315, 5);
  sqcRYGate(q, 1.6127781132120995, 6);
  sqcRZGate(q, 1.425063697251958, 6);
  sqcRYGate(q, 2.2044322586974228, 7);
  sqcRZGate(q, 1.4832652967291073, 7);
  sqcRYGate(q, 0.09643037211577088, 8);
  sqcRZGate(q, -1.106215304825903, 8);
  sqcRYGate(q, 3.0531544178532783, 9);
  sqcRZGate(q, -2.3099127444240826, 9);
  sqcRYGate(q, -3.1198915813533836, 10);
  sqcRZGate(q, -1.0236540872289703, 10);
  sqcRYGate(q, 0.013268051080847167, 11);
  sqcRZGate(q, -2.3721279946076583, 11);
  sqcRYGate(q, 1.646868998291378, 12);
  sqcRZGate(q, 2.76846157413323, 12);
  sqcRYGate(q, -0.22201926955806695, 13);
  sqcRZGate(q, 1.4483360366309732, 13);
  sqcRYGate(q, -0.007352465930949787, 14);
  sqcRZGate(q, 2.299594070563039, 14);
  sqcRYGate(q, 0.024762391637806032, 15);
  sqcRZGate(q, -0.5594231976168055, 15);
  sqcRYGate(q, 2.894819123796367, 16);
  sqcRZGate(q, -2.9631101406173044, 16);
  sqcRYGate(q, 3.0693860719486277, 17);
  sqcRZGate(q, -2.762624562396604, 17);
  sqcRYGate(q, 2.2500206736069335, 18);
  sqcRZGate(q, -1.15454798510638, 18);
  sqcRYGate(q, 0.07269236082660721, 19);
  sqcRZGate(q, 2.8848484616174703, 19);
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
  sqcRYGate(q, 3.100966656430971, 0);
  sqcRZGate(q, 1.8678187210188169, 0);
  sqcRYGate(q, 0.0969765579299322, 1);
  sqcRZGate(q, 0.776395028278885, 1);
  sqcRYGate(q, 0.12946196687898187, 2);
  sqcRZGate(q, -2.759744056235441, 2);
  sqcRYGate(q, -0.8034774784828785, 3);
  sqcRZGate(q, -2.6398333182293383, 3);
  sqcRYGate(q, -3.130712680906138, 4);
  sqcRZGate(q, 1.6286240871291726, 4);
  sqcRYGate(q, -0.18176052027251455, 5);
  sqcRZGate(q, 1.5844949198941185, 5);
  sqcRYGate(q, 1.578720612958183, 6);
  sqcRZGate(q, -3.1176019757432116, 6);
  sqcRYGate(q, -1.6032977961520196, 7);
  sqcRZGate(q, -3.141378530402903, 7);
  sqcRYGate(q, -1.0085577986317, 8);
  sqcRZGate(q, -1.114423492903253, 8);
  sqcRYGate(q, 3.0882314251684684, 9);
  sqcRZGate(q, 0.15499363804223354, 9);
  sqcRYGate(q, -3.1086178456116835, 10);
  sqcRZGate(q, -1.2716907747486514, 10);
  sqcRYGate(q, -2.9345324188737107, 11);
  sqcRZGate(q, -1.9196593551560832, 11);
  sqcRYGate(q, -3.1222933055077866, 12);
  sqcRZGate(q, 1.1967551027565266, 12);
  sqcRYGate(q, 3.14153816625828, 13);
  sqcRZGate(q, 3.0222238613397368, 13);
  sqcRYGate(q, 0.3128223987087278, 14);
  sqcRZGate(q, -0.17304124662376452, 14);
  sqcRYGate(q, 0.009033230851802188, 15);
  sqcRZGate(q, -0.9815260298927856, 15);
  sqcRYGate(q, 2.3278616860775703, 16);
  sqcRZGate(q, 1.2108847272598364, 16);
  sqcRYGate(q, 0.3862647889190017, 17);
  sqcRZGate(q, 1.0408100687167556, 17);
  sqcRYGate(q, 1.7621208688814658, 18);
  sqcRZGate(q, 1.517406476808644, 18);
  sqcRYGate(q, -0.11611292443943833, 19);
  sqcRZGate(q, 1.8413072342613968, 19);
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
  sqcRYGate(q, 3.1195567535026076, 0);
  sqcRZGate(q, 0.12071362719720823, 0);
  sqcRYGate(q, -2.958538643478462, 1);
  sqcRZGate(q, 1.8017507505049526, 1);
  sqcRYGate(q, 3.094981481968684, 2);
  sqcRZGate(q, -2.196325901031852, 2);
  sqcRYGate(q, 2.593552313471665, 3);
  sqcRZGate(q, -2.4150658071377276, 3);
  sqcRYGate(q, 1.5701435533779344, 4);
  sqcRZGate(q, 2.712212015505207, 4);
  sqcRYGate(q, 1.5864129862232208, 5);
  sqcRZGate(q, 0.4978401824964591, 5);
  sqcRYGate(q, 1.5734020017860237, 6);
  sqcRZGate(q, 2.7010327647915116, 6);
  sqcRYGate(q, 1.5725282735657355, 7);
  sqcRZGate(q, 3.123333075952202, 7);
  sqcRYGate(q, -0.02895203552056902, 8);
  sqcRZGate(q, -2.346256929332469, 8);
  sqcRYGate(q, 0.014838697856911054, 9);
  sqcRZGate(q, -1.8343614121950285, 9);
  sqcRYGate(q, -3.1075573384726005, 10);
  sqcRZGate(q, -2.89389239086786, 10);
  sqcRYGate(q, 0.015925272896978093, 11);
  sqcRZGate(q, -0.5933477250048489, 11);
  sqcRYGate(q, -1.584787775221431, 12);
  sqcRZGate(q, -1.3546784006043726, 12);
  sqcRYGate(q, -1.5657783726200833, 13);
  sqcRZGate(q, 0.3019960712440454, 13);
  sqcRYGate(q, 0.007701458034375311, 14);
  sqcRZGate(q, -1.1701496147946617, 14);
  sqcRYGate(q, -3.129254495569017, 15);
  sqcRZGate(q, 0.9521861457427174, 15);
  sqcRYGate(q, 3.118484870480064, 16);
  sqcRZGate(q, -0.624711024019008, 16);
  sqcRYGate(q, -0.10144203868140522, 17);
  sqcRZGate(q, 0.44644771935068944, 17);
  sqcRYGate(q, -1.5538976771158952, 18);
  sqcRZGate(q, 1.6302861312396724, 18);
  sqcRYGate(q, 3.113315206713664, 19);
  sqcRZGate(q, 1.585663194262545, 19);
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
  sqcRYGate(q, -0.059399916502218986, 0);
  sqcRZGate(q, 2.244016487447714, 0);
  sqcRYGate(q, -2.9969347208983037, 1);
  sqcRZGate(q, -1.3408600942497995, 1);
  sqcRYGate(q, -3.1266791107816494, 2);
  sqcRZGate(q, -2.4975463271197467, 2);
  sqcRYGate(q, -2.4150884250968394, 3);
  sqcRZGate(q, -1.9379986841619923, 3);
  sqcRYGate(q, -1.007910423141979, 4);
  sqcRZGate(q, 0.7824361428752509, 4);
  sqcRYGate(q, -1.7569685204522585, 5);
  sqcRZGate(q, 0.8359922153055728, 5);
  sqcRYGate(q, -1.764389362672353, 6);
  sqcRZGate(q, 1.1553313543138488, 6);
  sqcRYGate(q, 1.7559834718828675, 7);
  sqcRZGate(q, 2.7162812581741558, 7);
  sqcRYGate(q, 0.4558284141587565, 8);
  sqcRZGate(q, 2.973095910314388, 8);
  sqcRYGate(q, 2.0638970228614975, 9);
  sqcRZGate(q, 2.2747934700373547, 9);
  sqcRYGate(q, -2.4563781568319887, 10);
  sqcRZGate(q, 2.9216706409462083, 10);
  sqcRYGate(q, -0.3199883943582833, 11);
  sqcRZGate(q, 3.0716134712962417, 11);
  sqcRYGate(q, 2.732409808533223, 12);
  sqcRZGate(q, -0.803793555868012, 12);
  sqcRYGate(q, -1.3459258504059939, 13);
  sqcRZGate(q, -0.5768413421525097, 13);
  sqcRYGate(q, 0.07683064949846127, 14);
  sqcRZGate(q, 1.8408373343455287, 14);
  sqcRYGate(q, -1.8823840510915741, 15);
  sqcRZGate(q, -0.3550887156706395, 15);
  sqcRYGate(q, -1.4511394853702968, 16);
  sqcRZGate(q, -1.2577057645060372, 16);
  sqcRYGate(q, 1.5169607783491568, 17);
  sqcRZGate(q, 2.0847510434683274, 17);
  sqcRYGate(q, 1.2442298232661475, 18);
  sqcRZGate(q, 3.0480712961817185, 18);
  sqcRYGate(q, -0.12671528471611093, 19);
  sqcRZGate(q, -0.8874829697638614, 19);

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
