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

  sqcRYGate(q, 3.0908847633961853, 0);
  sqcRZGate(q, -2.3522424198927436, 0);
  sqcRYGate(q, -1.4765389076703193, 1);
  sqcRZGate(q, -1.7617192004734212, 1);
  sqcRYGate(q, 0.0006474283951856492, 2);
  sqcRZGate(q, 1.5282064585307182, 2);
  sqcRYGate(q, -0.011207910218779203, 3);
  sqcRZGate(q, -2.9731628512374986, 3);
  sqcRYGate(q, -0.2816748385143817, 4);
  sqcRZGate(q, -1.7255436773422876, 4);
  sqcRYGate(q, -1.308057859539302, 5);
  sqcRZGate(q, 3.044863334660481, 5);
  sqcRYGate(q, -0.07318966984033014, 6);
  sqcRZGate(q, 1.7985021847002673, 6);
  sqcRYGate(q, -1.084788792222514, 7);
  sqcRZGate(q, -1.553226304226591, 7);
  sqcRYGate(q, -3.1241636514492153, 8);
  sqcRZGate(q, 2.6845123213270488, 8);
  sqcRYGate(q, 0.0024009611239841173, 9);
  sqcRZGate(q, -1.269206481778948, 9);
  sqcRYGate(q, 0.0028768483325603005, 10);
  sqcRZGate(q, 0.5704718228322961, 10);
  sqcRYGate(q, 0.00246639987034758, 11);
  sqcRZGate(q, 2.4097129470639644, 11);
  sqcRYGate(q, -0.9282062609386363, 12);
  sqcRZGate(q, -2.485894218183438, 12);
  sqcRYGate(q, -1.4744849649470615, 13);
  sqcRZGate(q, -3.055609096808327, 13);
  sqcRYGate(q, 0.01689609825701308, 14);
  sqcRZGate(q, 1.1933288355605522, 14);
  sqcRYGate(q, -0.08042806604260855, 15);
  sqcRZGate(q, -2.3193063480700293, 15);
  sqcRYGate(q, 0.0009611304007695055, 16);
  sqcRZGate(q, -2.7179735748999443, 16);
  sqcRYGate(q, -3.093942766894481, 17);
  sqcRZGate(q, -1.61163218415492, 17);
  sqcRYGate(q, 0.054546161338709154, 18);
  sqcRZGate(q, -1.7622147195641966, 18);
  sqcRYGate(q, 1.611694495717286, 19);
  sqcRZGate(q, 1.6195152383607057, 19);
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
  sqcRYGate(q, -2.9385009495937684, 0);
  sqcRZGate(q, -0.25939846180329157, 0);
  sqcRYGate(q, 0.5658269018488864, 1);
  sqcRZGate(q, -2.1000325817778744, 1);
  sqcRYGate(q, -3.140661812583202, 2);
  sqcRZGate(q, 2.7711809479743232, 2);
  sqcRYGate(q, 0.0017489064082644985, 3);
  sqcRZGate(q, -1.1056312082367599, 3);
  sqcRYGate(q, -3.133066184954376, 4);
  sqcRZGate(q, 0.5713965204910302, 4);
  sqcRYGate(q, 2.0554762247174763, 5);
  sqcRZGate(q, 1.6603060853668266, 5);
  sqcRYGate(q, 3.1105582229580833, 6);
  sqcRZGate(q, 2.0129692726315453, 6);
  sqcRYGate(q, 1.1831021931178682, 7);
  sqcRZGate(q, 0.09176114508649547, 7);
  sqcRYGate(q, 1.6196359538185232, 8);
  sqcRZGate(q, -2.563697739254146, 8);
  sqcRYGate(q, -1.5415021210148292, 9);
  sqcRZGate(q, 0.5674075184855792, 9);
  sqcRYGate(q, 1.5620247843900854, 10);
  sqcRZGate(q, 1.3262604654570218, 10);
  sqcRYGate(q, 1.5545941842444222, 11);
  sqcRZGate(q, -0.03831268617836008, 11);
  sqcRYGate(q, -0.12832652753999818, 12);
  sqcRZGate(q, 2.5971717621354515, 12);
  sqcRYGate(q, -1.4338835589361076, 13);
  sqcRZGate(q, -0.04891712712800701, 13);
  sqcRYGate(q, -0.43336855639098815, 14);
  sqcRZGate(q, -2.30180008836074, 14);
  sqcRYGate(q, -3.040426489546996, 15);
  sqcRZGate(q, 1.2925199735020054, 15);
  sqcRYGate(q, -3.1347761909374237, 16);
  sqcRZGate(q, -2.241914648812224, 16);
  sqcRYGate(q, 3.1372384947536895, 17);
  sqcRZGate(q, -0.41855478794910805, 17);
  sqcRYGate(q, -2.828481557859446, 18);
  sqcRZGate(q, 2.6393723452366413, 18);
  sqcRYGate(q, 1.4254055664534782, 19);
  sqcRZGate(q, -1.1573307764041996, 19);
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
  sqcRYGate(q, -3.1048455817177643, 0);
  sqcRZGate(q, 1.0241446297173489, 0);
  sqcRYGate(q, -1.9698725197120528, 1);
  sqcRZGate(q, -0.5185667917958803, 1);
  sqcRYGate(q, -0.015129401814923317, 2);
  sqcRZGate(q, 0.46255850838519835, 2);
  sqcRYGate(q, 3.137957678492498, 3);
  sqcRZGate(q, -0.13037671839083168, 3);
  sqcRYGate(q, 0.04440157042378117, 4);
  sqcRZGate(q, 1.4149064684386345, 4);
  sqcRYGate(q, 2.0552698214343685, 5);
  sqcRZGate(q, 2.764227783585133, 5);
  sqcRYGate(q, -0.0004159521428972468, 6);
  sqcRZGate(q, 0.2592454149913444, 6);
  sqcRYGate(q, -0.0013152427204286, 7);
  sqcRZGate(q, 0.7358440312965346, 7);
  sqcRYGate(q, -0.11294967196412774, 8);
  sqcRZGate(q, -0.8284739740217597, 8);
  sqcRYGate(q, -0.09275891517870072, 9);
  sqcRZGate(q, 2.581416027153221, 9);
  sqcRYGate(q, 1.6707264240890662, 10);
  sqcRZGate(q, 1.9464139358306987, 10);
  sqcRYGate(q, 1.1062008842410265, 11);
  sqcRZGate(q, -0.9931885440504609, 11);
  sqcRYGate(q, 0.9398933955913638, 12);
  sqcRZGate(q, 1.4845925444101473, 12);
  sqcRYGate(q, 0.006962756029028307, 13);
  sqcRZGate(q, -0.028228872471978257, 13);
  sqcRYGate(q, 1.3443137684786697, 14);
  sqcRZGate(q, -0.7306552177402414, 14);
  sqcRYGate(q, -3.072589651146688, 15);
  sqcRZGate(q, 0.2618181853027953, 15);
  sqcRYGate(q, 3.1401384224372606, 16);
  sqcRZGate(q, 0.94937598062016, 16);
  sqcRYGate(q, -3.0914627664741787, 17);
  sqcRZGate(q, -0.9556457069484208, 17);
  sqcRYGate(q, -1.4448810320791328, 18);
  sqcRZGate(q, 1.3660210662151657, 18);
  sqcRYGate(q, 1.9229577372586588, 19);
  sqcRZGate(q, -2.2237405535974757, 19);
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
  sqcRYGate(q, 3.0535744939472114, 0);
  sqcRZGate(q, -1.455510136811226, 0);
  sqcRYGate(q, 3.0181621655996183, 1);
  sqcRZGate(q, 0.49329088521141706, 1);
  sqcRYGate(q, -0.372688146091658, 2);
  sqcRZGate(q, 3.0118453911080043, 2);
  sqcRYGate(q, -3.1053248988627233, 3);
  sqcRZGate(q, 2.737797929065114, 3);
  sqcRYGate(q, -0.07371680632582844, 4);
  sqcRZGate(q, -0.6940512541759768, 4);
  sqcRYGate(q, -0.1254458329022041, 5);
  sqcRZGate(q, 0.34619954819754994, 5);
  sqcRYGate(q, 3.1071675758140045, 6);
  sqcRZGate(q, -2.6232225160120644, 6);
  sqcRYGate(q, 2.682235527432199, 7);
  sqcRZGate(q, 0.3980498656480075, 7);
  sqcRYGate(q, -1.5227362698941531, 8);
  sqcRZGate(q, -2.5189751914264162, 8);
  sqcRYGate(q, 1.5664195199100701, 9);
  sqcRZGate(q, 1.3779097717599371, 9);
  sqcRYGate(q, 3.113171826848415, 10);
  sqcRZGate(q, -0.197284607848216, 10);
  sqcRYGate(q, -0.011803787593444668, 11);
  sqcRZGate(q, -2.394691181104895, 11);
  sqcRYGate(q, 1.5518810942906291, 12);
  sqcRZGate(q, 1.572838720096276, 12);
  sqcRYGate(q, -1.572597597486924, 13);
  sqcRZGate(q, -1.5452711604892457, 13);
  sqcRYGate(q, 0.04473470347029718, 14);
  sqcRZGate(q, -2.278114551169752, 14);
  sqcRYGate(q, -0.00043906051579956085, 15);
  sqcRZGate(q, -2.958844812042805, 15);
  sqcRYGate(q, -0.002018152249140037, 16);
  sqcRZGate(q, 2.2144038526842573, 16);
  sqcRYGate(q, 3.130082397359693, 17);
  sqcRZGate(q, -2.1475857846658095, 17);
  sqcRYGate(q, -0.05202908809473694, 18);
  sqcRZGate(q, 1.4306149402707948, 18);
  sqcRYGate(q, 2.2823322182081447, 19);
  sqcRZGate(q, -1.2506428403589434, 19);
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
  sqcRYGate(q, 0.11436903605325795, 0);
  sqcRZGate(q, -0.25401559127116613, 0);
  sqcRYGate(q, 0.6933472326885262, 1);
  sqcRZGate(q, 0.259926397809461, 1);
  sqcRYGate(q, 0.030013999987945662, 2);
  sqcRZGate(q, -1.8596847068490758, 2);
  sqcRYGate(q, 3.064813338492622, 3);
  sqcRZGate(q, 0.332707293766771, 3);
  sqcRYGate(q, -0.00042218457502688725, 4);
  sqcRZGate(q, -0.15722211320179968, 4);
  sqcRYGate(q, -3.1383562264543725, 5);
  sqcRZGate(q, 1.4678487925000554, 5);
  sqcRYGate(q, -1.244414379589161, 6);
  sqcRZGate(q, 1.9580995377062123, 6);
  sqcRYGate(q, -1.4291919690073636, 7);
  sqcRZGate(q, 1.3381404188823607, 7);
  sqcRYGate(q, 0.014556358857721996, 8);
  sqcRZGate(q, -0.020855893285484765, 8);
  sqcRYGate(q, -0.06966816613137411, 9);
  sqcRZGate(q, -1.0752794090658724, 9);
  sqcRYGate(q, -3.1401786136092538, 10);
  sqcRZGate(q, -0.17948813216128953, 10);
  sqcRYGate(q, 0.0021608983159397965, 11);
  sqcRZGate(q, -1.2957075969454124, 11);
  sqcRYGate(q, -1.6186560490844677, 12);
  sqcRZGate(q, -0.6942541841073817, 12);
  sqcRYGate(q, 2.506268433417329, 13);
  sqcRZGate(q, -2.21412785382537, 13);
  sqcRYGate(q, -3.1014782184588, 14);
  sqcRZGate(q, -2.6598222120203014, 14);
  sqcRYGate(q, 2.9141660460488152, 15);
  sqcRZGate(q, 0.15996272037872086, 15);
  sqcRYGate(q, 3.140667598390284, 16);
  sqcRZGate(q, -2.1837607121950104, 16);
  sqcRYGate(q, -3.123403970286962, 17);
  sqcRZGate(q, 2.0936694575577954, 17);
  sqcRYGate(q, 1.690284549391626, 18);
  sqcRZGate(q, 1.5676024276225675, 18);
  sqcRYGate(q, -1.8531287178298845, 19);
  sqcRZGate(q, -1.8816389670164906, 19);
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
  sqcRYGate(q, 0.12515434185505825, 0);
  sqcRZGate(q, -0.32985917704456885, 0);
  sqcRYGate(q, 3.025432669537936, 1);
  sqcRZGate(q, -1.214427187215723, 1);
  sqcRYGate(q, -0.06297992596395863, 2);
  sqcRZGate(q, -1.702301443160056, 2);
  sqcRYGate(q, -1.6476751703066863, 3);
  sqcRZGate(q, -3.119083717606388, 3);
  sqcRYGate(q, -3.117346858675709, 4);
  sqcRZGate(q, 2.834564395520638, 4);
  sqcRYGate(q, -2.987568221347801, 5);
  sqcRZGate(q, -0.04193439284129674, 5);
  sqcRYGate(q, 1.4325824271951833, 6);
  sqcRZGate(q, -1.5881706348598317, 6);
  sqcRYGate(q, -0.308126441790642, 7);
  sqcRZGate(q, 0.24780930741729162, 7);
  sqcRYGate(q, 0.0063881979123463495, 8);
  sqcRZGate(q, 1.6598609548322423, 8);
  sqcRYGate(q, -0.0007970812671924676, 9);
  sqcRZGate(q, -1.8299252167709446, 9);
  sqcRYGate(q, 2.119540572605306, 10);
  sqcRZGate(q, -0.022794996147006797, 10);
  sqcRYGate(q, 1.563514163834095, 11);
  sqcRZGate(q, 0.1844694886737095, 11);
  sqcRYGate(q, -3.131204198611746, 12);
  sqcRZGate(q, 0.5930998385740978, 12);
  sqcRYGate(q, -0.01737249906210536, 13);
  sqcRZGate(q, 1.264814810852477, 13);
  sqcRYGate(q, -1.5241462355328448, 14);
  sqcRZGate(q, -2.814900282117584, 14);
  sqcRYGate(q, -0.009586758394979356, 15);
  sqcRZGate(q, -1.7848488649349852, 15);
  sqcRYGate(q, 1.5092189934190214, 16);
  sqcRZGate(q, -0.21295147008618615, 16);
  sqcRYGate(q, 0.13030678651853791, 17);
  sqcRZGate(q, -1.2176217660850985, 17);
  sqcRYGate(q, -2.154077283889827, 18);
  sqcRZGate(q, 0.28923185130514595, 18);
  sqcRYGate(q, -3.033039144177854, 19);
  sqcRZGate(q, 1.7703014637236014, 19);
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
  sqcRYGate(q, 3.0425040439350375, 0);
  sqcRZGate(q, 1.466256844956007, 0);
  sqcRYGate(q, -3.0933004359080565, 1);
  sqcRZGate(q, 2.336906074576454, 1);
  sqcRYGate(q, -0.0009759223266314621, 2);
  sqcRZGate(q, 2.844559028625454, 2);
  sqcRYGate(q, -0.05814118986476302, 3);
  sqcRZGate(q, 1.8775794481363628, 3);
  sqcRYGate(q, -0.051489886246177896, 4);
  sqcRZGate(q, -3.094334691460434, 4);
  sqcRYGate(q, -3.1015873500934186, 5);
  sqcRZGate(q, -2.9010662208161455, 5);
  sqcRYGate(q, -1.6923885320191603, 6);
  sqcRZGate(q, 1.5633413534381406, 6);
  sqcRYGate(q, -0.302383005716087, 7);
  sqcRZGate(q, -2.9262776296898165, 7);
  sqcRYGate(q, -3.1357200471302393, 8);
  sqcRZGate(q, -0.6923389131334633, 8);
  sqcRYGate(q, -3.141278003093588, 9);
  sqcRZGate(q, -1.357969835922618, 9);
  sqcRYGate(q, 0.23803211332295415, 10);
  sqcRZGate(q, 0.040417113347376805, 10);
  sqcRYGate(q, 3.1397640329621535, 11);
  sqcRZGate(q, 0.40317334903974145, 11);
  sqcRYGate(q, 0.2559942621773681, 12);
  sqcRZGate(q, 0.799272991575104, 12);
  sqcRYGate(q, -3.1386350161695087, 13);
  sqcRZGate(q, 2.976284302626287, 13);
  sqcRYGate(q, 0.0021044853338860747, 14);
  sqcRZGate(q, -1.4911290359950966, 14);
  sqcRYGate(q, 2.886207034920785, 15);
  sqcRZGate(q, 2.178371372795567, 15);
  sqcRYGate(q, 6.421971632786239e-05, 16);
  sqcRZGate(q, -1.242721068215305, 16);
  sqcRYGate(q, -0.0002323770876245444, 17);
  sqcRZGate(q, -1.45335031717513, 17);
  sqcRYGate(q, -1.5177115934118255, 18);
  sqcRZGate(q, 1.6143335601481876, 18);
  sqcRYGate(q, 1.5716944440858, 19);
  sqcRZGate(q, -0.9771242081753575, 19);
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
  sqcRYGate(q, 0.044298333597383166, 0);
  sqcRZGate(q, 1.6470710536679667, 0);
  sqcRYGate(q, 0.044015236192248786, 1);
  sqcRZGate(q, -2.2307883413225724, 1);
  sqcRYGate(q, -0.004729823541031131, 2);
  sqcRZGate(q, 0.8960489010113601, 2);
  sqcRYGate(q, -0.0062275512997027604, 3);
  sqcRZGate(q, 1.1870526836917135, 3);
  sqcRYGate(q, -1.239457714343929, 4);
  sqcRZGate(q, 1.5445553893670478, 4);
  sqcRYGate(q, -0.09102526130695118, 5);
  sqcRZGate(q, -1.826095025637853, 5);
  sqcRYGate(q, -1.868721660206381, 6);
  sqcRZGate(q, 0.7298969844465699, 6);
  sqcRYGate(q, 0.08811700926785981, 7);
  sqcRZGate(q, 2.261753973258319, 7);
  sqcRYGate(q, 1.5727600922553586, 8);
  sqcRZGate(q, -0.877044081661661, 8);
  sqcRYGate(q, -1.331141780479097, 9);
  sqcRZGate(q, 1.264298542572378, 9);
  sqcRYGate(q, 2.574446266751568, 10);
  sqcRZGate(q, -3.1301238710271257, 10);
  sqcRYGate(q, 3.131203837433067, 11);
  sqcRZGate(q, 0.22184187841249048, 11);
  sqcRYGate(q, -3.13963973214924, 12);
  sqcRZGate(q, 2.926024995510323, 12);
  sqcRYGate(q, -3.1274355315820697, 13);
  sqcRZGate(q, 2.4181971357546974, 13);
  sqcRYGate(q, -1.5385290329216836, 14);
  sqcRZGate(q, -0.5057129952109704, 14);
  sqcRYGate(q, 3.137428308717335, 15);
  sqcRZGate(q, -0.2005045434970004, 15);
  sqcRYGate(q, 0.004207416050739087, 16);
  sqcRZGate(q, 1.1458789578348343, 16);
  sqcRYGate(q, 2.8801787686094493, 17);
  sqcRZGate(q, 1.8921506648379447, 17);
  sqcRYGate(q, -2.7885481982158233, 18);
  sqcRZGate(q, -1.5129966060193856, 18);
  sqcRYGate(q, -0.013679180389433832, 19);
  sqcRZGate(q, 2.4055782560281216, 19);
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
  sqcRYGate(q, -0.10801162485872061, 0);
  sqcRZGate(q, 1.980185909512163, 0);
  sqcRYGate(q, 3.079838753261919, 1);
  sqcRZGate(q, -1.6544863990477285, 1);
  sqcRYGate(q, 0.013653463631396967, 2);
  sqcRZGate(q, -2.9414842553663325, 2);
  sqcRYGate(q, -0.23720765767067725, 3);
  sqcRZGate(q, 0.18213744605397153, 3);
  sqcRYGate(q, -0.05368642106491021, 4);
  sqcRZGate(q, 0.8558805691884784, 4);
  sqcRYGate(q, 0.06099539693799238, 5);
  sqcRZGate(q, -2.6807594689631338, 5);
  sqcRYGate(q, 0.0009282451751776049, 6);
  sqcRZGate(q, 2.08468215624791, 6);
  sqcRYGate(q, 3.141583333001502, 7);
  sqcRZGate(q, 2.1044162030830975, 7);
  sqcRYGate(q, 3.139540121861978, 8);
  sqcRZGate(q, 1.8773067300146327, 8);
  sqcRYGate(q, -3.1367760932924402, 9);
  sqcRZGate(q, -0.34637533072626514, 9);
  sqcRYGate(q, 1.5047002232775777, 10);
  sqcRZGate(q, -0.000682700237677874, 10);
  sqcRYGate(q, 2.2739122792731012, 11);
  sqcRZGate(q, 0.21747533713427106, 11);
  sqcRYGate(q, -0.007845531526272431, 12);
  sqcRZGate(q, -2.1247833481178464, 12);
  sqcRYGate(q, 1.631297567062792, 13);
  sqcRZGate(q, -3.0953154062543304, 13);
  sqcRYGate(q, 3.140599398105573, 14);
  sqcRZGate(q, -2.3988802642624965, 14);
  sqcRYGate(q, -3.1294141563733784, 15);
  sqcRZGate(q, 2.116645854352771, 15);
  sqcRYGate(q, 3.141407303596401, 16);
  sqcRZGate(q, -0.42137317113911593, 16);
  sqcRYGate(q, -3.1383750654786855, 17);
  sqcRZGate(q, 1.8812427040303419, 17);
  sqcRYGate(q, -1.6038386400698925, 18);
  sqcRZGate(q, -1.5887686680722013, 18);
  sqcRYGate(q, 1.5860136930894073, 19);
  sqcRZGate(q, 1.5421914936094994, 19);
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
  sqcRYGate(q, 3.1216600127333396, 0);
  sqcRZGate(q, -3.0820619226218007, 0);
  sqcRYGate(q, 1.6169409486018358, 1);
  sqcRZGate(q, -1.5882390883020419, 1);
  sqcRYGate(q, -3.0689670081558362, 2);
  sqcRZGate(q, 2.754193214953332, 2);
  sqcRYGate(q, -3.1297288667485126, 3);
  sqcRZGate(q, -2.635003556760086, 3);
  sqcRYGate(q, -1.3314302347866738, 4);
  sqcRZGate(q, -2.51448538140964, 4);
  sqcRYGate(q, -1.8959836607853449, 5);
  sqcRZGate(q, 2.454171097676961, 5);
  sqcRYGate(q, -0.018965522576630405, 6);
  sqcRZGate(q, 0.2329807461666166, 6);
  sqcRYGate(q, 2.963382447593782, 7);
  sqcRZGate(q, 1.2107353257604492, 7);
  sqcRYGate(q, -0.10621198988683593, 8);
  sqcRZGate(q, -0.20539415222369908, 8);
  sqcRYGate(q, 2.75077862571432, 9);
  sqcRZGate(q, 2.8570091780308884, 9);
  sqcRYGate(q, -2.878483351052609, 10);
  sqcRZGate(q, -1.572155515526922, 10);
  sqcRYGate(q, -0.005541651535751335, 11);
  sqcRZGate(q, 1.3553380546954257, 11);
  sqcRYGate(q, 0.02188621768968879, 12);
  sqcRZGate(q, -1.7541042533460482, 12);
  sqcRYGate(q, 0.006307223192161141, 13);
  sqcRZGate(q, 1.5266975223305717, 13);
  sqcRYGate(q, 0.012410528798517896, 14);
  sqcRZGate(q, 0.540104077161134, 14);
  sqcRYGate(q, -3.113737550738606, 15);
  sqcRZGate(q, 3.1238948849439008, 15);
  sqcRYGate(q, -2.9777231629658685, 16);
  sqcRZGate(q, -2.7134869703390496, 16);
  sqcRYGate(q, -2.005725624310614, 17);
  sqcRZGate(q, -0.18500353531815628, 17);
  sqcRYGate(q, 0.005982043149848515, 18);
  sqcRZGate(q, 0.769886236074738, 18);
  sqcRYGate(q, 1.2427239979312246, 19);
  sqcRZGate(q, -3.1367791540851853, 19);
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
  sqcRYGate(q, 3.1391675679600435, 0);
  sqcRZGate(q, 0.17693129515966036, 0);
  sqcRYGate(q, -1.5550710773394045, 1);
  sqcRZGate(q, -0.013271380861205275, 1);
  sqcRYGate(q, 0.0027220736408253288, 2);
  sqcRZGate(q, -2.7009983388403764, 2);
  sqcRYGate(q, 0.0006967467632438117, 3);
  sqcRZGate(q, 2.7930146730098686, 3);
  sqcRYGate(q, -0.043415399666137056, 4);
  sqcRZGate(q, -1.9604558932624103, 4);
  sqcRYGate(q, 3.0743083459472373, 5);
  sqcRZGate(q, 1.5438932355848545, 5);
  sqcRYGate(q, -3.1415641176046845, 6);
  sqcRZGate(q, 1.3695714289961618, 6);
  sqcRYGate(q, 3.1415151931561667, 7);
  sqcRZGate(q, 2.9708251869549205, 7);
  sqcRYGate(q, -3.140736147848079, 8);
  sqcRZGate(q, 0.9463160831305972, 8);
  sqcRYGate(q, -3.1374234785484187, 9);
  sqcRZGate(q, -1.6091525804630955, 9);
  sqcRYGate(q, 1.5669370916840364, 10);
  sqcRZGate(q, 1.5923292186262268, 10);
  sqcRYGate(q, 1.5678349447699849, 11);
  sqcRZGate(q, -0.7624118010128746, 11);
  sqcRYGate(q, 1.5616834076128927, 12);
  sqcRZGate(q, 1.4911974937272596, 12);
  sqcRYGate(q, -1.5688379527567027, 13);
  sqcRZGate(q, -1.5896370201651449, 13);
  sqcRYGate(q, 0.0009089691899821703, 14);
  sqcRZGate(q, -1.4116921671076836, 14);
  sqcRYGate(q, -3.141313379040267, 15);
  sqcRZGate(q, 1.7446203739968442, 15);
  sqcRYGate(q, 0.001076374702690508, 16);
  sqcRZGate(q, -0.6690945945191754, 16);
  sqcRYGate(q, 3.138353115318467, 17);
  sqcRZGate(q, -1.7584671773926894, 17);
  sqcRYGate(q, 0.003183223897029147, 18);
  sqcRZGate(q, 2.412564861274242, 18);
  sqcRYGate(q, -0.4187472103571322, 19);
  sqcRZGate(q, 2.236351374112413, 19);
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
  sqcRYGate(q, 1.570157627635596, 0);
  sqcRZGate(q, 0.0026256447608359323, 0);
  sqcRYGate(q, 0.3114472193163822, 1);
  sqcRZGate(q, 1.5950499632909174, 1);
  sqcRYGate(q, -1.5533536777388477, 2);
  sqcRZGate(q, 0.015803215056489905, 2);
  sqcRYGate(q, 1.5577192789167675, 3);
  sqcRZGate(q, -1.4800370977283268, 3);
  sqcRYGate(q, -0.8533532258534522, 4);
  sqcRZGate(q, 2.4637156576780717, 4);
  sqcRYGate(q, 0.49489476339295724, 5);
  sqcRZGate(q, 0.8135528089620877, 5);
  sqcRYGate(q, 0.019252765882227685, 6);
  sqcRZGate(q, -1.7860852989068983, 6);
  sqcRYGate(q, -1.6562307724017202, 7);
  sqcRZGate(q, 2.8894600277327904, 7);
  sqcRYGate(q, -1.5670207438435093, 8);
  sqcRZGate(q, -1.58185310706829, 8);
  sqcRYGate(q, 3.129617619959872, 9);
  sqcRZGate(q, -2.938364477089299, 9);
  sqcRYGate(q, 1.6142777447880536, 10);
  sqcRZGate(q, 3.095503104274411, 10);
  sqcRYGate(q, 1.5809823660019717, 11);
  sqcRZGate(q, 1.5954714493650255, 11);
  sqcRYGate(q, -0.1829830503402574, 12);
  sqcRZGate(q, -3.051615461286075, 12);
  sqcRYGate(q, 1.6064037639864441, 13);
  sqcRZGate(q, -1.5582867206685298, 13);
  sqcRYGate(q, 3.124991749792197, 14);
  sqcRZGate(q, 0.37623227181717395, 14);
  sqcRYGate(q, 1.581951805870487, 15);
  sqcRZGate(q, -3.108833615601542, 15);
  sqcRYGate(q, 0.14776937528162737, 16);
  sqcRZGate(q, -1.3991607776451678, 16);
  sqcRYGate(q, 1.5582487379429142, 17);
  sqcRZGate(q, -1.1053939824264256, 17);
  sqcRYGate(q, 1.5739080576170834, 18);
  sqcRZGate(q, -0.0035950029146149297, 18);
  sqcRYGate(q, -3.1063105894843175, 19);
  sqcRZGate(q, -2.480765282819131, 19);

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
