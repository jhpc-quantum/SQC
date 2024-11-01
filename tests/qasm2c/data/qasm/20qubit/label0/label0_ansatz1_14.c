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

  sqcRYGate(q, 2.289726022676405, 0);
  sqcRZGate(q, -2.2688411248157183, 0);
  sqcRYGate(q, 0.02483075412557323, 1);
  sqcRZGate(q, -1.6688650614742366, 1);
  sqcRYGate(q, 2.4419318598296846, 2);
  sqcRZGate(q, -2.530842158431865, 2);
  sqcRYGate(q, 3.0937850420038635, 3);
  sqcRZGate(q, -1.1570921694000513, 3);
  sqcRYGate(q, 2.044844089279578, 4);
  sqcRZGate(q, -2.8356241783903435, 4);
  sqcRYGate(q, -0.44728065676414624, 5);
  sqcRZGate(q, -1.9340525072427432, 5);
  sqcRYGate(q, 0.3433205543369926, 6);
  sqcRZGate(q, 2.5971890340991064, 6);
  sqcRYGate(q, -2.083414799577646, 7);
  sqcRZGate(q, -3.1130473305616007, 7);
  sqcRYGate(q, 1.3147688536186326, 8);
  sqcRZGate(q, -2.744343998810513, 8);
  sqcRYGate(q, -1.1385720295692128, 9);
  sqcRZGate(q, 1.593611858178545, 9);
  sqcRYGate(q, -3.136290389639586, 10);
  sqcRZGate(q, -2.8824918345773556, 10);
  sqcRYGate(q, -3.013678434771557, 11);
  sqcRZGate(q, -0.9134045110031059, 11);
  sqcRYGate(q, 0.6404368799526737, 12);
  sqcRZGate(q, -0.06872259846099738, 12);
  sqcRYGate(q, -0.18239813445498854, 13);
  sqcRZGate(q, 2.6565279260465395, 13);
  sqcRYGate(q, 1.3344842607840446, 14);
  sqcRZGate(q, -1.757528932310878, 14);
  sqcRYGate(q, 0.0019612552834598063, 15);
  sqcRZGate(q, 2.6564939698914576, 15);
  sqcRYGate(q, 0.8654908451853265, 16);
  sqcRZGate(q, -3.1375006330327495, 16);
  sqcRYGate(q, -0.000698661179836968, 17);
  sqcRZGate(q, 0.05199531755116278, 17);
  sqcRYGate(q, -2.008543290059227, 18);
  sqcRZGate(q, 2.1281946948353294, 18);
  sqcRYGate(q, -0.9346798177107258, 19);
  sqcRZGate(q, 0.5038049241323481, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.0526205914750018, 0);
  sqcRZGate(q, -1.6633131865857522, 0);
  sqcRYGate(q, 0.008790407492990452, 1);
  sqcRZGate(q, -1.9871272522530712, 1);
  sqcRYGate(q, 0.4552939647523078, 2);
  sqcRZGate(q, 1.6894996750329199, 2);
  sqcRYGate(q, 0.014048357027450107, 3);
  sqcRZGate(q, -2.3373179143282816, 3);
  sqcRYGate(q, -0.15306270015891912, 4);
  sqcRZGate(q, 0.8340597904297518, 4);
  sqcRYGate(q, -2.7892910302575022, 5);
  sqcRZGate(q, 0.24246599050644715, 5);
  sqcRYGate(q, 0.29561051012795847, 6);
  sqcRZGate(q, -2.715163931561535, 6);
  sqcRYGate(q, 3.078106535749884, 7);
  sqcRZGate(q, -2.0065973158578614, 7);
  sqcRYGate(q, 2.921971739649582, 8);
  sqcRZGate(q, -3.1213184003173717, 8);
  sqcRYGate(q, -0.3933075425106489, 9);
  sqcRZGate(q, -2.5298591543254063, 9);
  sqcRYGate(q, -2.7950820272817434, 10);
  sqcRZGate(q, 2.5775528395940963, 10);
  sqcRYGate(q, 0.06745280220467051, 11);
  sqcRZGate(q, 2.717445757151914, 11);
  sqcRYGate(q, -1.1536332876784012, 12);
  sqcRZGate(q, 1.7408091748067671, 12);
  sqcRYGate(q, -0.03527868092120027, 13);
  sqcRZGate(q, -2.0762490892485994, 13);
  sqcRYGate(q, -2.9966667621998977, 14);
  sqcRZGate(q, 0.6049330931008533, 14);
  sqcRYGate(q, 2.6866294730403926, 15);
  sqcRZGate(q, -2.0695022902986793, 15);
  sqcRYGate(q, 0.8694566608652785, 16);
  sqcRZGate(q, 2.1978185951050553, 16);
  sqcRYGate(q, -0.8800416223425893, 17);
  sqcRZGate(q, 0.1767066343974966, 17);
  sqcRYGate(q, -0.7936135044137277, 18);
  sqcRZGate(q, -0.2173998873311831, 18);
  sqcRYGate(q, -0.46434376278086714, 19);
  sqcRZGate(q, 2.223350175049018, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.37280432073779457, 0);
  sqcRZGate(q, -2.6551083789893237, 0);
  sqcRYGate(q, -3.131359209508627, 1);
  sqcRZGate(q, 2.2101140729409043, 1);
  sqcRYGate(q, 1.2187612860988244, 2);
  sqcRZGate(q, -0.8259104749632646, 2);
  sqcRYGate(q, 3.0874336498575614, 3);
  sqcRZGate(q, -1.1743641463326224, 3);
  sqcRYGate(q, 1.8363482084901497, 4);
  sqcRZGate(q, -0.5115302669420085, 4);
  sqcRYGate(q, -2.2188493596810543, 5);
  sqcRZGate(q, -0.6258058559752717, 5);
  sqcRYGate(q, 0.16778874915153622, 6);
  sqcRZGate(q, 2.8325256611367613, 6);
  sqcRYGate(q, 0.49813231694333654, 7);
  sqcRZGate(q, -0.5558689424547679, 7);
  sqcRYGate(q, -1.8738292486912602, 8);
  sqcRZGate(q, 0.7333411593551604, 8);
  sqcRYGate(q, -3.134804554476006, 9);
  sqcRZGate(q, 1.575029223347054, 9);
  sqcRYGate(q, 0.0072543389164012595, 10);
  sqcRZGate(q, 1.5363031380051888, 10);
  sqcRYGate(q, -2.663550308137064, 11);
  sqcRZGate(q, -2.670788972016096, 11);
  sqcRYGate(q, -1.4625226343426272, 12);
  sqcRZGate(q, 2.468844954769957, 12);
  sqcRYGate(q, 3.0098572699117554, 13);
  sqcRZGate(q, 2.5715167751301298, 13);
  sqcRYGate(q, 1.1392740159642503, 14);
  sqcRZGate(q, -2.0593471209809486, 14);
  sqcRYGate(q, 2.771319053907343, 15);
  sqcRZGate(q, -1.7818280142377239, 15);
  sqcRYGate(q, 0.29947228605798504, 16);
  sqcRZGate(q, 1.0047184267078437, 16);
  sqcRYGate(q, -0.14961039061988401, 17);
  sqcRZGate(q, 0.2797080070614322, 17);
  sqcRYGate(q, 2.9905187609813897, 18);
  sqcRZGate(q, 2.399630760678961, 18);
  sqcRYGate(q, 2.2757225981996614, 19);
  sqcRZGate(q, -1.8852026254327257, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.847001993107017, 0);
  sqcRZGate(q, -3.070913857258703, 0);
  sqcRYGate(q, 0.02179469471165819, 1);
  sqcRZGate(q, 0.140636149012324, 1);
  sqcRYGate(q, -2.1947689678813305, 2);
  sqcRZGate(q, 0.8591467020671503, 2);
  sqcRYGate(q, -2.772481472387274, 3);
  sqcRZGate(q, 2.6666101053950855, 3);
  sqcRYGate(q, 2.4233429462920264, 4);
  sqcRZGate(q, -2.715719282344737, 4);
  sqcRYGate(q, 0.8105189739068841, 5);
  sqcRZGate(q, 0.3161488659595974, 5);
  sqcRYGate(q, 0.17142347153179038, 6);
  sqcRZGate(q, 1.9901150013721267, 6);
  sqcRYGate(q, 0.7942160254821503, 7);
  sqcRZGate(q, 2.090499355869471, 7);
  sqcRYGate(q, -2.957514603876934, 8);
  sqcRZGate(q, 0.2586312669367619, 8);
  sqcRYGate(q, -0.4788879909768131, 9);
  sqcRZGate(q, 2.5804895783081965, 9);
  sqcRYGate(q, 0.22738048334030214, 10);
  sqcRZGate(q, 0.5425984613095698, 10);
  sqcRYGate(q, 2.6454976556231977, 11);
  sqcRZGate(q, 1.2093750433802724, 11);
  sqcRYGate(q, -1.485819120675553, 12);
  sqcRZGate(q, 2.6600198581722654, 12);
  sqcRYGate(q, -3.094307121878808, 13);
  sqcRZGate(q, 1.855305302151292, 13);
  sqcRYGate(q, 2.277095767337099, 14);
  sqcRZGate(q, -0.008307421568235716, 14);
  sqcRYGate(q, 3.1368048851093597, 15);
  sqcRZGate(q, 1.5736721710133856, 15);
  sqcRYGate(q, 3.036314310973747, 16);
  sqcRZGate(q, 0.693290640805051, 16);
  sqcRYGate(q, -0.2900616869587384, 17);
  sqcRZGate(q, 2.760527346371616, 17);
  sqcRYGate(q, -1.1458793634069746, 18);
  sqcRZGate(q, -2.5783399444781647, 18);
  sqcRYGate(q, -2.842125992005992, 19);
  sqcRZGate(q, -1.2812901527218843, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.9300881816472693, 0);
  sqcRZGate(q, 1.9349028755517717, 0);
  sqcRYGate(q, -0.017230314543968794, 1);
  sqcRZGate(q, 2.1300903677605456, 1);
  sqcRYGate(q, -0.06518604204853862, 2);
  sqcRZGate(q, -1.3276032267498836, 2);
  sqcRYGate(q, 3.1131670877663673, 3);
  sqcRZGate(q, -0.5055452041169958, 3);
  sqcRYGate(q, 3.099774627709245, 4);
  sqcRZGate(q, -2.6951602060990902, 4);
  sqcRYGate(q, 1.4237961564366028, 5);
  sqcRZGate(q, 2.8554474715167144, 5);
  sqcRYGate(q, -0.0789886988310058, 6);
  sqcRZGate(q, 0.46180075677914356, 6);
  sqcRYGate(q, 0.4842971925857636, 7);
  sqcRZGate(q, 0.8008198689016272, 7);
  sqcRYGate(q, -2.180686808618939, 8);
  sqcRZGate(q, 0.10842553585630142, 8);
  sqcRYGate(q, -3.099569078188752, 9);
  sqcRZGate(q, -0.5424803480685195, 9);
  sqcRYGate(q, -3.1401720366239556, 10);
  sqcRZGate(q, 1.9608122149502556, 10);
  sqcRYGate(q, 2.9966446108301636, 11);
  sqcRZGate(q, 1.1748137784992914, 11);
  sqcRYGate(q, -0.16333532744532508, 12);
  sqcRZGate(q, 2.5961918632626313, 12);
  sqcRYGate(q, 1.2719440419674486, 13);
  sqcRZGate(q, -2.911736364378324, 13);
  sqcRYGate(q, 1.3559682471134948, 14);
  sqcRZGate(q, 2.066769472494156, 14);
  sqcRYGate(q, -0.0956354822259522, 15);
  sqcRZGate(q, -0.21378268199280992, 15);
  sqcRYGate(q, -2.7390353716056697, 16);
  sqcRZGate(q, -1.0186325476729117, 16);
  sqcRYGate(q, 0.16490691233675125, 17);
  sqcRZGate(q, 2.4850830981639693, 17);
  sqcRYGate(q, -0.16232893953528504, 18);
  sqcRZGate(q, -2.820183363166624, 18);
  sqcRYGate(q, -1.469134486884084, 19);
  sqcRZGate(q, 1.1786300421363016, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.681653688657773, 0);
  sqcRZGate(q, -0.16979222993257445, 0);
  sqcRYGate(q, -3.1349246612926867, 1);
  sqcRZGate(q, 1.9317062293840994, 1);
  sqcRYGate(q, 0.34722379752327426, 2);
  sqcRZGate(q, 0.03377019828880333, 2);
  sqcRYGate(q, -0.37177930061435194, 3);
  sqcRZGate(q, 0.2679042660333541, 3);
  sqcRYGate(q, -2.593719158837632, 4);
  sqcRZGate(q, 1.280933639595668, 4);
  sqcRYGate(q, 1.8234877763094772, 5);
  sqcRZGate(q, 2.1615629739538162, 5);
  sqcRYGate(q, -1.8064177983569172, 6);
  sqcRZGate(q, 0.30846896762288867, 6);
  sqcRYGate(q, 0.02611650953319344, 7);
  sqcRZGate(q, -1.539422480005551, 7);
  sqcRYGate(q, -0.16457420436116005, 8);
  sqcRZGate(q, -0.21071285933148598, 8);
  sqcRYGate(q, 2.8476794012167645, 9);
  sqcRZGate(q, -0.07369827700918416, 9);
  sqcRYGate(q, -2.7942628369595446, 10);
  sqcRZGate(q, -2.9355561994670474, 10);
  sqcRYGate(q, 2.5574722991415837, 11);
  sqcRZGate(q, 0.22681113116826715, 11);
  sqcRYGate(q, 2.9054207119672726, 12);
  sqcRZGate(q, -2.8880509182404266, 12);
  sqcRYGate(q, 2.8370196118356215, 13);
  sqcRZGate(q, -1.509237103444309, 13);
  sqcRYGate(q, 1.4905264376047862, 14);
  sqcRZGate(q, 0.8580775787456066, 14);
  sqcRYGate(q, -2.8293805351237045, 15);
  sqcRZGate(q, 1.0043895384812858, 15);
  sqcRYGate(q, -0.7011318405819704, 16);
  sqcRZGate(q, -0.5473658360954595, 16);
  sqcRYGate(q, 2.1465403284531863, 17);
  sqcRZGate(q, 1.936475820452364, 17);
  sqcRYGate(q, 3.0357690224763476, 18);
  sqcRZGate(q, -1.490266828629058, 18);
  sqcRYGate(q, -1.7204816205118645, 19);
  sqcRZGate(q, 1.11639332284902, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.943693011049291, 0);
  sqcRZGate(q, 0.913951816792685, 0);
  sqcRYGate(q, 3.140806118274406, 1);
  sqcRZGate(q, 1.2303951538508286, 1);
  sqcRYGate(q, 1.39148378208068, 2);
  sqcRZGate(q, 0.9105111774695043, 2);
  sqcRYGate(q, -0.07289143051353948, 3);
  sqcRZGate(q, -0.7222039755701183, 3);
  sqcRYGate(q, -1.9340037992555452, 4);
  sqcRZGate(q, -3.0034849610479366, 4);
  sqcRYGate(q, -1.5616195864587055, 5);
  sqcRZGate(q, 0.24838014682008225, 5);
  sqcRYGate(q, 2.8956465545961523, 6);
  sqcRZGate(q, -0.3669780084848759, 6);
  sqcRYGate(q, -3.011275688234883, 7);
  sqcRZGate(q, 1.1559723363301238, 7);
  sqcRYGate(q, -2.3215227177887776, 8);
  sqcRZGate(q, 2.347564384203465, 8);
  sqcRYGate(q, -0.7364379896763843, 9);
  sqcRZGate(q, -1.4876967870425244, 9);
  sqcRYGate(q, -2.7217984970006697, 10);
  sqcRZGate(q, 2.3743204766767145, 10);
  sqcRYGate(q, -3.02184311355996, 11);
  sqcRZGate(q, 0.40362947979907743, 11);
  sqcRYGate(q, -2.644420440385231, 12);
  sqcRZGate(q, 0.2384591738483318, 12);
  sqcRYGate(q, -2.9293700657090485, 13);
  sqcRZGate(q, 1.4564018875372011, 13);
  sqcRYGate(q, 0.004900924753067757, 14);
  sqcRZGate(q, 1.2105096128964163, 14);
  sqcRYGate(q, 2.955778801087273, 15);
  sqcRZGate(q, -0.5644380119914342, 15);
  sqcRYGate(q, 0.0031936007137005618, 16);
  sqcRZGate(q, 0.05654301621376856, 16);
  sqcRYGate(q, 0.01776456843164098, 17);
  sqcRZGate(q, 2.124508756043303, 17);
  sqcRYGate(q, -0.7338039529695144, 18);
  sqcRZGate(q, -1.7367635544818907, 18);
  sqcRYGate(q, -2.096928030670597, 19);
  sqcRZGate(q, -2.48417139522571, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.3883982881847214, 0);
  sqcRZGate(q, 1.6492121029217435, 0);
  sqcRYGate(q, 0.004278010347410266, 1);
  sqcRZGate(q, 1.1114508021148453, 1);
  sqcRYGate(q, -0.4571157632482514, 2);
  sqcRZGate(q, -0.6430377712919341, 2);
  sqcRYGate(q, -2.6701149094763386, 3);
  sqcRZGate(q, -0.7354848524434403, 3);
  sqcRYGate(q, -1.5923117519846768, 4);
  sqcRZGate(q, -2.9800510114118186, 4);
  sqcRYGate(q, 0.7832805494621118, 5);
  sqcRZGate(q, 3.0938011629151614, 5);
  sqcRYGate(q, 1.527123204128632, 6);
  sqcRZGate(q, 1.0419415379645107, 6);
  sqcRYGate(q, 0.5051023951074791, 7);
  sqcRZGate(q, -1.8249218154247784, 7);
  sqcRYGate(q, 1.51639256162726, 8);
  sqcRZGate(q, -2.9833679778928133, 8);
  sqcRYGate(q, -0.29725230181589074, 9);
  sqcRZGate(q, -1.239947096264217, 9);
  sqcRYGate(q, 0.07142179521813798, 10);
  sqcRZGate(q, 0.9044379033829264, 10);
  sqcRYGate(q, -3.062540239298965, 11);
  sqcRZGate(q, -2.8081283355119835, 11);
  sqcRYGate(q, -0.3047723056465381, 12);
  sqcRZGate(q, -1.0876287212717954, 12);
  sqcRYGate(q, 2.419969744325247, 13);
  sqcRZGate(q, -0.7961319564362576, 13);
  sqcRYGate(q, -3.125522606046772, 14);
  sqcRZGate(q, 2.226992479000903, 14);
  sqcRYGate(q, -0.2661263824186992, 15);
  sqcRZGate(q, -0.5206785403520029, 15);
  sqcRYGate(q, -1.8403683793530226, 16);
  sqcRZGate(q, -0.4591854998499207, 16);
  sqcRYGate(q, 2.798712629941034, 17);
  sqcRZGate(q, -2.964296506440785, 17);
  sqcRYGate(q, 3.105922082504852, 18);
  sqcRZGate(q, 1.2910092943219045, 18);
  sqcRYGate(q, -1.4201360120746653, 19);
  sqcRZGate(q, -0.31986445932082164, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.6298696547962374, 0);
  sqcRZGate(q, -2.496213593918682, 0);
  sqcRYGate(q, -3.136586700840279, 1);
  sqcRZGate(q, 0.2984138943314587, 1);
  sqcRYGate(q, -1.0863144283068542, 2);
  sqcRZGate(q, -2.6530385081048196, 2);
  sqcRYGate(q, 0.0062164366593649234, 3);
  sqcRZGate(q, -2.6983321503927287, 3);
  sqcRYGate(q, 3.116542139647202, 4);
  sqcRZGate(q, -0.6681095158888547, 4);
  sqcRYGate(q, 1.0192870780258865, 5);
  sqcRZGate(q, -1.5427357597291185, 5);
  sqcRYGate(q, -1.2515290184705277, 6);
  sqcRZGate(q, 1.0231533288132233, 6);
  sqcRYGate(q, 2.8192887283712977, 7);
  sqcRZGate(q, 0.5732765011814909, 7);
  sqcRYGate(q, -2.8592145129132858, 8);
  sqcRZGate(q, 2.283810856582358, 8);
  sqcRYGate(q, 0.8488664394156666, 9);
  sqcRZGate(q, 1.6295450361634982, 9);
  sqcRYGate(q, -0.7588020846016379, 10);
  sqcRZGate(q, -0.722990137283074, 10);
  sqcRYGate(q, -0.059493731427624784, 11);
  sqcRZGate(q, -0.9014743066065729, 11);
  sqcRYGate(q, 0.27498747857708183, 12);
  sqcRZGate(q, -3.1053073133265956, 12);
  sqcRYGate(q, 2.949434469016596, 13);
  sqcRZGate(q, -0.2444428703614475, 13);
  sqcRYGate(q, 0.1530907805482927, 14);
  sqcRZGate(q, -1.687666752646983, 14);
  sqcRYGate(q, 3.048968317284095, 15);
  sqcRZGate(q, -1.8900827582870914, 15);
  sqcRYGate(q, -3.1248628451823848, 16);
  sqcRZGate(q, -2.870048019247081, 16);
  sqcRYGate(q, 0.08988573054137117, 17);
  sqcRZGate(q, -0.10762191524281306, 17);
  sqcRYGate(q, 0.28887896718096007, 18);
  sqcRZGate(q, -2.7389016576385887, 18);
  sqcRYGate(q, 2.078518398419872, 19);
  sqcRZGate(q, -0.23328769919449854, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.2396043337333068, 0);
  sqcRZGate(q, 0.23876244181705533, 0);
  sqcRYGate(q, 1.0323692128709308, 1);
  sqcRZGate(q, 1.4273287886665127, 1);
  sqcRYGate(q, -2.593513713972869, 2);
  sqcRZGate(q, 3.009241822298808, 2);
  sqcRYGate(q, -2.161565641335148, 3);
  sqcRZGate(q, -2.244594327559386, 3);
  sqcRYGate(q, 1.0388919079477301, 4);
  sqcRZGate(q, -0.40980422767522834, 4);
  sqcRYGate(q, 1.755505470789267, 5);
  sqcRZGate(q, 1.4088653649837717, 5);
  sqcRYGate(q, -2.889961930795174, 6);
  sqcRZGate(q, -2.2478818319896616, 6);
  sqcRYGate(q, 0.09880227469469816, 7);
  sqcRZGate(q, -1.4416925097642226, 7);
  sqcRYGate(q, 0.05183228551527048, 8);
  sqcRZGate(q, -3.0960677803650536, 8);
  sqcRYGate(q, -0.012044746895914907, 9);
  sqcRZGate(q, 1.4694170734394802, 9);
  sqcRYGate(q, -3.120660612966093, 10);
  sqcRZGate(q, 2.3695199380821395, 10);
  sqcRYGate(q, 2.829384013851923, 11);
  sqcRZGate(q, -1.7224360179320393, 11);
  sqcRYGate(q, -3.083427964700459, 12);
  sqcRZGate(q, -0.5928046017776667, 12);
  sqcRYGate(q, 0.2821460949172554, 13);
  sqcRZGate(q, 0.82546522748834, 13);
  sqcRYGate(q, -2.5814793884180953, 14);
  sqcRZGate(q, -0.2817726328068434, 14);
  sqcRYGate(q, 0.25182105428407553, 15);
  sqcRZGate(q, -1.5105047990218052, 15);
  sqcRYGate(q, -1.0493811942323301, 16);
  sqcRZGate(q, 0.34347693540163876, 16);
  sqcRYGate(q, -1.1916106713197674, 17);
  sqcRZGate(q, 1.6345774485596318, 17);
  sqcRYGate(q, 0.001458980866309467, 18);
  sqcRZGate(q, 1.3421964764975511, 18);
  sqcRYGate(q, -1.199634652409161, 19);
  sqcRZGate(q, -1.0235060662063844, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.2899220465686388, 0);
  sqcRZGate(q, -1.8597417706758108, 0);
  sqcRYGate(q, -3.139936546585814, 1);
  sqcRZGate(q, -0.6733178022939185, 1);
  sqcRYGate(q, -0.011846325545828495, 2);
  sqcRZGate(q, 1.8242873043723582, 2);
  sqcRYGate(q, -3.122768067995332, 3);
  sqcRZGate(q, 1.1574003048513875, 3);
  sqcRYGate(q, 3.116369857163606, 4);
  sqcRZGate(q, 2.3427313568896513, 4);
  sqcRYGate(q, 1.0866770299756006, 5);
  sqcRZGate(q, -0.49535832553112885, 5);
  sqcRYGate(q, 2.7829190852618426, 6);
  sqcRZGate(q, -2.6301014542549503, 6);
  sqcRYGate(q, 0.21552673773954953, 7);
  sqcRZGate(q, 1.517924443271066, 7);
  sqcRYGate(q, -0.3215121741287321, 8);
  sqcRZGate(q, 1.8892109852935182, 8);
  sqcRYGate(q, 2.08150535786293, 9);
  sqcRZGate(q, -1.2682569374507875, 9);
  sqcRYGate(q, -2.73519702329111, 10);
  sqcRZGate(q, -1.5269416533063436, 10);
  sqcRYGate(q, -0.10051204335393564, 11);
  sqcRZGate(q, -0.25130703194313697, 11);
  sqcRYGate(q, -2.0865199250724675, 12);
  sqcRZGate(q, 2.7655558872015593, 12);
  sqcRYGate(q, 0.14588784521167814, 13);
  sqcRZGate(q, -0.5722302702162533, 13);
  sqcRYGate(q, 3.064345930131622, 14);
  sqcRZGate(q, 0.2581331846132093, 14);
  sqcRYGate(q, 0.32058271958486234, 15);
  sqcRZGate(q, 2.0795639926056984, 15);
  sqcRYGate(q, -0.2670523835395033, 16);
  sqcRZGate(q, -2.9064844871730555, 16);
  sqcRYGate(q, 1.7633280227027912, 17);
  sqcRZGate(q, -1.6601449263593135, 17);
  sqcRYGate(q, 0.393554109820931, 18);
  sqcRZGate(q, -2.2941162686082137, 18);
  sqcRYGate(q, -0.45152421071676047, 19);
  sqcRZGate(q, -2.117179175680355, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.37006753672968, 0);
  sqcRZGate(q, 1.283164397860049, 0);
  sqcRYGate(q, -0.7673642436371682, 1);
  sqcRZGate(q, 0.09702561039015833, 1);
  sqcRYGate(q, 0.8204765747091709, 2);
  sqcRZGate(q, 2.6809295457880635, 2);
  sqcRYGate(q, -2.5747635274084684, 3);
  sqcRZGate(q, 1.757498410450576, 3);
  sqcRYGate(q, 1.663245295173084, 4);
  sqcRZGate(q, -0.8251503460818694, 4);
  sqcRYGate(q, 2.6141701136991515, 5);
  sqcRZGate(q, -0.3494327903642054, 5);
  sqcRYGate(q, -2.1444155801796305, 6);
  sqcRZGate(q, 1.813951758683297, 6);
  sqcRYGate(q, -0.07882726069809645, 7);
  sqcRZGate(q, 1.5928210600595252, 7);
  sqcRYGate(q, -2.9883667909241174, 8);
  sqcRZGate(q, -2.052728832142058, 8);
  sqcRYGate(q, -3.077644868963587, 9);
  sqcRZGate(q, 2.9121962612237713, 9);
  sqcRYGate(q, -1.322718042225947, 10);
  sqcRZGate(q, -1.4621010581957163, 10);
  sqcRYGate(q, -3.088876184678331, 11);
  sqcRZGate(q, 2.2050768101726472, 11);
  sqcRYGate(q, 2.907197354112924, 12);
  sqcRZGate(q, 2.2873721947212076, 12);
  sqcRYGate(q, -0.18294286012656702, 13);
  sqcRZGate(q, -2.6764879918197515, 13);
  sqcRYGate(q, -0.07109540241357504, 14);
  sqcRZGate(q, -2.246416831649931, 14);
  sqcRYGate(q, 0.02462807888553087, 15);
  sqcRZGate(q, -0.26392761284385724, 15);
  sqcRYGate(q, -0.559300434025395, 16);
  sqcRZGate(q, -2.40919167836841, 16);
  sqcRYGate(q, 3.0784655044874834, 17);
  sqcRZGate(q, -1.2890721708062376, 17);
  sqcRYGate(q, -0.0053933351210146445, 18);
  sqcRZGate(q, 1.914822966298658, 18);
  sqcRYGate(q, -2.869388325569887, 19);
  sqcRZGate(q, -1.3403820314502397, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.014849707211523186, 0);
  sqcRZGate(q, 0.16417248054254682, 0);
  sqcRYGate(q, -3.1244061141353336, 1);
  sqcRZGate(q, 2.4608137022548586, 1);
  sqcRYGate(q, -0.7752475720699078, 2);
  sqcRZGate(q, 1.5884960744482906, 2);
  sqcRYGate(q, 0.8125229996343126, 3);
  sqcRZGate(q, 1.2637107211909036, 3);
  sqcRYGate(q, -0.01626910131017123, 4);
  sqcRZGate(q, 0.5420351318076282, 4);
  sqcRYGate(q, -3.089663898781181, 5);
  sqcRZGate(q, 1.6619926853662934, 5);
  sqcRYGate(q, -0.012397379716993683, 6);
  sqcRZGate(q, -1.6742838933948248, 6);
  sqcRYGate(q, -0.07595137365989489, 7);
  sqcRZGate(q, -1.0274243604213058, 7);
  sqcRYGate(q, 0.16888738917763924, 8);
  sqcRZGate(q, -2.412589973734648, 8);
  sqcRYGate(q, 3.1132130158684785, 9);
  sqcRZGate(q, 2.210607971380987, 9);
  sqcRYGate(q, -2.171337634532337, 10);
  sqcRZGate(q, -3.0679056048001496, 10);
  sqcRYGate(q, -2.8134207792029615, 11);
  sqcRZGate(q, -1.458358588558643, 11);
  sqcRYGate(q, -1.102674068874283, 12);
  sqcRZGate(q, -1.4834593612380331, 12);
  sqcRYGate(q, -0.10437874213798091, 13);
  sqcRZGate(q, -1.2977049087266432, 13);
  sqcRYGate(q, 1.4303662413121794, 14);
  sqcRZGate(q, 0.6609483752826308, 14);
  sqcRYGate(q, 0.014613132097568203, 15);
  sqcRZGate(q, -1.1101477094529022, 15);
  sqcRYGate(q, -2.7326156323818998, 16);
  sqcRZGate(q, 0.15570349996849994, 16);
  sqcRYGate(q, 1.3548986873667561, 17);
  sqcRZGate(q, -0.21901178778719346, 17);
  sqcRYGate(q, 0.534806762653728, 18);
  sqcRZGate(q, -2.915737915273452, 18);
  sqcRYGate(q, 0.26517597026945516, 19);
  sqcRZGate(q, -0.4230369453774321, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.9035505541795246, 0);
  sqcRZGate(q, -1.4496034038230317, 0);
  sqcRYGate(q, 0.03159098541403214, 1);
  sqcRZGate(q, -0.02131856205071405, 1);
  sqcRYGate(q, -0.005698762374122701, 2);
  sqcRZGate(q, 0.24246484458158868, 2);
  sqcRYGate(q, 3.1389213918840415, 3);
  sqcRZGate(q, -2.003587999120821, 3);
  sqcRYGate(q, 0.053388141936306255, 4);
  sqcRZGate(q, -3.0129980380700845, 4);
  sqcRYGate(q, 1.877572881673696, 5);
  sqcRZGate(q, -1.3345292378555342, 5);
  sqcRYGate(q, -2.1125266016882187, 6);
  sqcRZGate(q, -0.8429841314699646, 6);
  sqcRYGate(q, 0.09754041023519734, 7);
  sqcRZGate(q, -2.073227709926519, 7);
  sqcRYGate(q, -0.15560913319661238, 8);
  sqcRZGate(q, 1.7882506960260904, 8);
  sqcRYGate(q, -0.04787748160343131, 9);
  sqcRZGate(q, -1.5083469133972842, 9);
  sqcRYGate(q, 1.6446156164266499, 10);
  sqcRZGate(q, 0.3725160256229208, 10);
  sqcRYGate(q, -0.6142822336762448, 11);
  sqcRZGate(q, -3.1361103664547025, 11);
  sqcRYGate(q, 1.1242298470246754, 12);
  sqcRZGate(q, -2.1347165610612375, 12);
  sqcRYGate(q, -0.1201979305174698, 13);
  sqcRZGate(q, 1.3243709320220862, 13);
  sqcRYGate(q, -2.14885149683895, 14);
  sqcRZGate(q, 0.06949467338566075, 14);
  sqcRYGate(q, -1.2405087143801348, 15);
  sqcRZGate(q, 0.5461001804612476, 15);
  sqcRYGate(q, 1.2207482994326195, 16);
  sqcRZGate(q, 1.8846224415183226, 16);
  sqcRYGate(q, -1.4766116001642777, 17);
  sqcRZGate(q, 1.304475791713843, 17);
  sqcRYGate(q, 0.04629384053310304, 18);
  sqcRZGate(q, 1.3704755053457536, 18);
  sqcRYGate(q, 2.583504907804408, 19);
  sqcRZGate(q, 1.4223445776461485, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.1470461649703705, 0);
  sqcRZGate(q, -2.4609868762864395, 0);
  sqcRYGate(q, -3.0582895793810936, 1);
  sqcRZGate(q, 0.3164211009422937, 1);
  sqcRYGate(q, 2.534883001424139, 2);
  sqcRZGate(q, 2.1795424427290473, 2);
  sqcRYGate(q, 1.3213513244427804, 3);
  sqcRZGate(q, 0.9623530201918363, 3);
  sqcRYGate(q, -0.08297741792413016, 4);
  sqcRZGate(q, -0.7184465417838631, 4);
  sqcRYGate(q, -0.4498392106179637, 5);
  sqcRZGate(q, 1.0234817069151676, 5);
  sqcRYGate(q, 2.6906172423391617, 6);
  sqcRZGate(q, 0.6907978329194097, 6);
  sqcRYGate(q, 0.5647156244215462, 7);
  sqcRZGate(q, 0.10898685653538553, 7);
  sqcRYGate(q, -0.8870827784043468, 8);
  sqcRZGate(q, -0.38488769737551376, 8);
  sqcRYGate(q, -0.02787304744136716, 9);
  sqcRZGate(q, -1.5480186491447745, 9);
  sqcRYGate(q, 0.9391853694339779, 10);
  sqcRZGate(q, -1.6778618444952773, 10);
  sqcRYGate(q, 1.7458242314480374, 11);
  sqcRZGate(q, 3.138944468680489, 11);
  sqcRYGate(q, -3.1392922052096823, 12);
  sqcRZGate(q, 3.0268631124093894, 12);
  sqcRYGate(q, -3.133341155929403, 13);
  sqcRZGate(q, -2.1069437169973186, 13);
  sqcRYGate(q, 0.014037319490459943, 14);
  sqcRZGate(q, 0.14827899481437434, 14);
  sqcRYGate(q, -0.00648313510861484, 15);
  sqcRZGate(q, -0.5505617603776445, 15);
  sqcRYGate(q, -3.139786871081209, 16);
  sqcRZGate(q, -1.9643371183706777, 16);
  sqcRYGate(q, 2.9372038137279683, 17);
  sqcRZGate(q, 0.5681616222972873, 17);
  sqcRYGate(q, 2.7752168841226723, 18);
  sqcRZGate(q, -3.0017664664328607, 18);
  sqcRYGate(q, -1.7242330303283717, 19);
  sqcRZGate(q, 1.2255580159615853, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.843587266195848, 0);
  sqcRZGate(q, 0.7853638339784804, 0);
  sqcRYGate(q, 3.137522712972295, 1);
  sqcRZGate(q, -2.506281927456203, 1);
  sqcRYGate(q, -1.687386707705408, 2);
  sqcRZGate(q, 3.132564815686883, 2);
  sqcRYGate(q, -0.01822853523329505, 3);
  sqcRZGate(q, -1.3887755475780923, 3);
  sqcRYGate(q, -2.8671634171230607, 4);
  sqcRZGate(q, 1.9401575352320737, 4);
  sqcRYGate(q, 0.6757123518987688, 5);
  sqcRZGate(q, -2.7111229445522094, 5);
  sqcRYGate(q, -1.3657696479669055, 6);
  sqcRZGate(q, -2.229516471204449, 6);
  sqcRYGate(q, 0.07757885348901185, 7);
  sqcRZGate(q, -1.804512255898652, 7);
  sqcRYGate(q, -0.1412137267222633, 8);
  sqcRZGate(q, -2.686641109474989, 8);
  sqcRYGate(q, 0.059716297100087516, 9);
  sqcRZGate(q, 2.256357780004718, 9);
  sqcRYGate(q, -3.135714725080828, 10);
  sqcRZGate(q, -1.6666109051384277, 10);
  sqcRYGate(q, 1.3713710074744396, 11);
  sqcRZGate(q, 3.0971548877709134, 11);
  sqcRYGate(q, 2.9821009371013747, 12);
  sqcRZGate(q, -1.17896176117603, 12);
  sqcRYGate(q, -3.030945610146144, 13);
  sqcRZGate(q, 1.586329373098252, 13);
  sqcRYGate(q, 1.0409531580453724, 14);
  sqcRZGate(q, 0.650614156197511, 14);
  sqcRYGate(q, 1.9077505777202362, 15);
  sqcRZGate(q, -0.8318163044692505, 15);
  sqcRYGate(q, -2.400079395010748, 16);
  sqcRZGate(q, 2.3919368499952474, 16);
  sqcRYGate(q, -3.071115753358949, 17);
  sqcRZGate(q, -2.7939689565395587, 17);
  sqcRYGate(q, 0.7507798164657206, 18);
  sqcRZGate(q, 2.2962030432093803, 18);
  sqcRYGate(q, -2.6803825702204525, 19);
  sqcRZGate(q, 2.6100612535715157, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.082309921028762, 0);
  sqcRZGate(q, 1.2579795622696484, 0);
  sqcRYGate(q, 1.606050184855853, 1);
  sqcRZGate(q, -0.28718730512983914, 1);
  sqcRYGate(q, 2.07981280148492, 2);
  sqcRZGate(q, 3.130474106749019, 2);
  sqcRYGate(q, -0.07107081839528726, 3);
  sqcRZGate(q, 0.970718165210946, 3);
  sqcRYGate(q, 3.0673075506489447, 4);
  sqcRZGate(q, 2.569509035300899, 4);
  sqcRYGate(q, -0.07046476547877084, 5);
  sqcRZGate(q, -0.3565181773379456, 5);
  sqcRYGate(q, -3.13920895342592, 6);
  sqcRZGate(q, 2.9672655697915973, 6);
  sqcRYGate(q, -3.0964740350339177, 7);
  sqcRZGate(q, -0.39221816034477325, 7);
  sqcRYGate(q, 2.5754011936975907, 8);
  sqcRZGate(q, -3.0195041446175215, 8);
  sqcRYGate(q, 3.1375336702696446, 9);
  sqcRZGate(q, 0.6167488658485611, 9);
  sqcRYGate(q, 2.6502625104896067, 10);
  sqcRZGate(q, 1.273529948382626, 10);
  sqcRYGate(q, -1.618236200857118, 11);
  sqcRZGate(q, 0.13599958696833703, 11);
  sqcRYGate(q, -0.031611361178584645, 12);
  sqcRZGate(q, -2.2765707790625287, 12);
  sqcRYGate(q, -0.03193845415606451, 13);
  sqcRZGate(q, -1.331936653352333, 13);
  sqcRYGate(q, -1.1794719424483517, 14);
  sqcRZGate(q, -2.1681233547282313, 14);
  sqcRYGate(q, -0.07669539639056525, 15);
  sqcRZGate(q, -2.9259774481981657, 15);
  sqcRYGate(q, 2.818907825919132, 16);
  sqcRZGate(q, 0.5176675094663592, 16);
  sqcRYGate(q, -0.04703943710139403, 17);
  sqcRZGate(q, -1.218556609870297, 17);
  sqcRYGate(q, 0.15906515259501397, 18);
  sqcRZGate(q, -2.3641132225720862, 18);
  sqcRYGate(q, 2.640659519629598, 19);
  sqcRZGate(q, 0.03033370616910673, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5717741012459818, 0);
  sqcRZGate(q, 0.003716865806596401, 0);
  sqcRYGate(q, -3.1363289777882977, 1);
  sqcRZGate(q, 1.2756872346940034, 1);
  sqcRYGate(q, -0.0989107868702801, 2);
  sqcRZGate(q, -1.5019103954279749, 2);
  sqcRYGate(q, 3.0910162926795186, 3);
  sqcRZGate(q, 1.789911338552992, 3);
  sqcRYGate(q, -0.6605986163001374, 4);
  sqcRZGate(q, -2.3021180267592545, 4);
  sqcRYGate(q, 1.9250295870073755, 5);
  sqcRZGate(q, -1.1357870234142249, 5);
  sqcRYGate(q, -2.652638251020976, 6);
  sqcRZGate(q, 2.2883136244925453, 6);
  sqcRYGate(q, -1.3876681683333962, 7);
  sqcRZGate(q, -2.9954160319741963, 7);
  sqcRYGate(q, -3.114702726093126, 8);
  sqcRZGate(q, -2.6383667385318628, 8);
  sqcRYGate(q, 2.9820172472641935, 9);
  sqcRZGate(q, 0.005697170034637369, 9);
  sqcRYGate(q, 3.1123867711142386, 10);
  sqcRZGate(q, -0.3721996133833674, 10);
  sqcRYGate(q, -0.3300909713616642, 11);
  sqcRZGate(q, 2.9403994240286253, 11);
  sqcRYGate(q, -1.4508241818828207, 12);
  sqcRZGate(q, 1.5826370586655365, 12);
  sqcRYGate(q, 0.06760164298608956, 13);
  sqcRZGate(q, -0.1684811656805337, 13);
  sqcRYGate(q, -2.8084638724442987, 14);
  sqcRZGate(q, -1.8754374589779728, 14);
  sqcRYGate(q, -2.121177031786446, 15);
  sqcRZGate(q, -2.960903738660137, 15);
  sqcRYGate(q, 0.24812781819846919, 16);
  sqcRZGate(q, 0.0116088177195941, 16);
  sqcRYGate(q, -2.659300271935244, 17);
  sqcRZGate(q, 2.9662055095300484, 17);
  sqcRYGate(q, -0.8391331909478951, 18);
  sqcRZGate(q, -0.18913314545020832, 18);
  sqcRYGate(q, -1.1382118300923247, 19);
  sqcRZGate(q, -0.4929208119147491, 19);

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
