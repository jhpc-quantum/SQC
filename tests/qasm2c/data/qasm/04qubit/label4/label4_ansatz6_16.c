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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 2.5722400827143987, 0);
  sqcRYGate(q, 1.7170722978278603, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.022934104729095, 0);
  sqcRYGate(q, -2.4958948183088165, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1149454324095105, 1);
  sqcRYGate(q, 1.903182170585735, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9611593863374797, 1);
  sqcRYGate(q, 2.3922606687632197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.46212236348076935, 2);
  sqcRYGate(q, 2.949250301606048, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10081044255090088, 2);
  sqcRYGate(q, -2.8309752084799356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3837556033768602, 0);
  sqcRYGate(q, 0.10524006003579746, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9983148181189697, 0);
  sqcRYGate(q, 1.053081325918865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9280596846891909, 1);
  sqcRYGate(q, 1.1210492193394375, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8842763262972593, 1);
  sqcRYGate(q, -1.8510969534261992, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.147679357506121, 2);
  sqcRYGate(q, -1.661504691057713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9523044679195896, 2);
  sqcRYGate(q, -0.12364542971283862, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3291835699095957, 0);
  sqcRYGate(q, -0.7284073794911619, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6330988836135072, 0);
  sqcRYGate(q, 1.1363060283651778, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7433408779530337, 1);
  sqcRYGate(q, -0.07052545303038293, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0971340120167135, 1);
  sqcRYGate(q, -1.26914070308775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5570983874832401, 2);
  sqcRYGate(q, -0.8801394140781804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7787703538629831, 2);
  sqcRYGate(q, -0.4784439357360654, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.394113402550869, 0);
  sqcRYGate(q, 2.8168658344385378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0192003045356652, 0);
  sqcRYGate(q, -2.4230427627622544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.902141756208615, 1);
  sqcRYGate(q, 2.3815097931767992, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.195111058721608, 1);
  sqcRYGate(q, 0.4452353079689084, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.09482729461642864, 2);
  sqcRYGate(q, -2.5631436126988425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8172472021378816, 2);
  sqcRYGate(q, -2.9078896475317713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4982090380877175, 0);
  sqcRYGate(q, 0.36622109016925286, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0596307913450915, 0);
  sqcRYGate(q, 0.003537264160485043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.592578684099054, 1);
  sqcRYGate(q, -2.4899172937233662, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.243309639771022, 1);
  sqcRYGate(q, 0.6953206423685556, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9070694145272473, 2);
  sqcRYGate(q, 2.4737646490885545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.136972114587736, 2);
  sqcRYGate(q, -1.8212907343328786, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4690376165596328, 0);
  sqcRYGate(q, 2.767099232767905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.18845622055975, 0);
  sqcRYGate(q, 0.5762423972357535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.48229621022405, 1);
  sqcRYGate(q, -2.320081824060204, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.833663504162991, 1);
  sqcRYGate(q, 2.9923931354701923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8342547064253066, 2);
  sqcRYGate(q, -2.3404652394908667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.09841816646444013, 2);
  sqcRYGate(q, -2.3764845605468636, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4570965137377296, 0);
  sqcRYGate(q, -0.626279894477678, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.842823910960728, 0);
  sqcRYGate(q, 0.9579210871261669, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.242154911647843, 1);
  sqcRYGate(q, 1.1364841937781056, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5409713781690416, 1);
  sqcRYGate(q, -2.5735750769642465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7655177247449111, 2);
  sqcRYGate(q, 0.20979546741158708, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9192433430703937, 2);
  sqcRYGate(q, 2.0945293986347178, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2363248895202363, 0);
  sqcRYGate(q, -0.4985638306125098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.050627364091523, 0);
  sqcRYGate(q, -3.123826286548401, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4148646105522458, 1);
  sqcRYGate(q, -2.8605563697609155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5548222144274417, 1);
  sqcRYGate(q, 1.8686174958715913, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.942299601879274, 2);
  sqcRYGate(q, -0.9653379296865756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0335277438051422, 2);
  sqcRYGate(q, 2.2058009633464275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.558231625019658, 0);
  sqcRYGate(q, 1.1477669686065937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1842665829453987, 0);
  sqcRYGate(q, -0.3075533529181955, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.48100409662955185, 1);
  sqcRYGate(q, 2.6515390040876237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07328917632257334, 1);
  sqcRYGate(q, -1.3086867184007263, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.529343807419097, 2);
  sqcRYGate(q, -0.05710153753174385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.337263079030554, 2);
  sqcRYGate(q, 2.8455158066746953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7340393804657968, 0);
  sqcRYGate(q, -0.5062695956358585, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0211223063903567, 0);
  sqcRYGate(q, -2.081150551439662, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6973404301976753, 1);
  sqcRYGate(q, -3.0158615405471454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.653917124464604, 1);
  sqcRYGate(q, -2.978627826197768, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5614125103549193, 2);
  sqcRYGate(q, -1.970647844889247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.145452880471084, 2);
  sqcRYGate(q, -1.384352149850611, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.299098712104075, 0);
  sqcRYGate(q, -2.017356901400799, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7854833633901951, 0);
  sqcRYGate(q, -2.621035509498603, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10672896033126791, 1);
  sqcRYGate(q, 3.089415503063403, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7090259107417324, 1);
  sqcRYGate(q, 1.0077238152721586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.56117506901785, 2);
  sqcRYGate(q, 0.4618103727916783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5765685084582275, 2);
  sqcRYGate(q, 2.76394285339557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8041081268331389, 0);
  sqcRYGate(q, -2.2058564067739095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.889207158427071, 0);
  sqcRYGate(q, -2.1881285904580823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.197607171295319, 1);
  sqcRYGate(q, -2.772422808076791, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4830932586035686, 1);
  sqcRYGate(q, 0.4789739796338628, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9373139133957898, 2);
  sqcRYGate(q, -3.1152213246375813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8804781332905396, 2);
  sqcRYGate(q, 0.16920114866768543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8814361391264527, 0);
  sqcRYGate(q, 0.6654404446509622, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9959687997480122, 0);
  sqcRYGate(q, 2.0890159090192446, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5824121974633725, 1);
  sqcRYGate(q, 2.4020153341605686, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.15410979617033715, 1);
  sqcRYGate(q, 1.7948398548554538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7292349548407211, 2);
  sqcRYGate(q, -2.2846536419821137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3577122174054255, 2);
  sqcRYGate(q, -0.6816695525899922, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5538148343770763, 0);
  sqcRYGate(q, 2.1108686695200474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.023127784574978, 0);
  sqcRYGate(q, -2.0051671340315824, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5368348277677392, 1);
  sqcRYGate(q, 0.7445078064875297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8483972330274253, 1);
  sqcRYGate(q, -2.9782567334087493, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8849902914407295, 2);
  sqcRYGate(q, 3.0615115879644708, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5741294507962047, 2);
  sqcRYGate(q, -2.840528664327622, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2427995589103737, 0);
  sqcRYGate(q, -1.6314495177023807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.030139998672067, 0);
  sqcRYGate(q, -1.3984673882550258, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.142850668708017, 1);
  sqcRYGate(q, 2.0236440704527987, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.091099968180642, 1);
  sqcRYGate(q, 0.006670455164659082, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.06051413208325407, 2);
  sqcRYGate(q, -2.007849826964139, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0190250875561917, 2);
  sqcRYGate(q, 2.748889132851188, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0764394644201274, 0);
  sqcRYGate(q, 0.8943552987154468, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0003156003829847, 0);
  sqcRYGate(q, -1.0432111760082803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.965041518254478, 1);
  sqcRYGate(q, -1.2601134739580029, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.44324028278710714, 1);
  sqcRYGate(q, 1.95325903720917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0874737331423494, 2);
  sqcRYGate(q, 2.1915187431529084, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.818060860815163, 2);
  sqcRYGate(q, -0.40748031944422747, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.359911574721985, 0);
  sqcRYGate(q, -1.0480625977942581, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9836578597615444, 0);
  sqcRYGate(q, 0.04448377579286067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0659088700337627, 1);
  sqcRYGate(q, -1.34935640103527, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.039073276521681, 1);
  sqcRYGate(q, -0.5078716338930452, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.550306358529871, 2);
  sqcRYGate(q, -1.414753483637825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.587160795023383, 2);
  sqcRYGate(q, -2.3697196261533193, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0092028623949956, 0);
  sqcRYGate(q, 1.217281143737568, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.831406988970049, 0);
  sqcRYGate(q, 2.517762993463289, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.367071238446013, 1);
  sqcRYGate(q, 2.883257690340766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.848701750594057, 1);
  sqcRYGate(q, 2.007252632004352, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6339624947631028, 2);
  sqcRYGate(q, -0.6310299678103224, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.857970720226646, 2);
  sqcRYGate(q, -0.25656545812697396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.728145218249666, 0);
  sqcRYGate(q, -0.286224264338895, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7377853239963512, 0);
  sqcRYGate(q, -0.042458388818097374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2860788375553032, 1);
  sqcRYGate(q, -0.04094827915485939, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.798614711052617, 1);
  sqcRYGate(q, -1.5211364753464593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5006994930792006, 2);
  sqcRYGate(q, -2.7867813209082537, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.28639622373490103, 2);
  sqcRYGate(q, 1.268872673128675, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7120650486731432, 0);
  sqcRYGate(q, -1.7017586480615627, 1);
  sqcRYGate(q, 0.4415183593799155, 2);
  sqcRYGate(q, -2.5744319085841982, 3);

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
