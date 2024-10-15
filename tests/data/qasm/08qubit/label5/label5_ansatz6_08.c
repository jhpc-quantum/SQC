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

  sqcRYGate(q, 1.9959907396199164, 0);
  sqcRYGate(q, -2.0263221577093216, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2524545373852334, 0);
  sqcRYGate(q, -2.330036945388475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8949873848826315, 1);
  sqcRYGate(q, 0.9889933044903886, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9936406342664252, 1);
  sqcRYGate(q, -0.9133293271027225, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0268382766329698, 2);
  sqcRYGate(q, -2.7171907078018727, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.20494014657044, 2);
  sqcRYGate(q, -0.25766660506910277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.854065105481603, 3);
  sqcRYGate(q, 3.001720600288729, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3378910725206454, 3);
  sqcRYGate(q, 1.9759115766341022, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6533068991809101, 4);
  sqcRYGate(q, 2.6073219205461613, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.102416004288723, 4);
  sqcRYGate(q, 1.6658788619716194, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4624387518997453, 5);
  sqcRYGate(q, -2.3384673462545353, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2352822171138449, 5);
  sqcRYGate(q, 1.3505175475154791, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.571975015661893, 6);
  sqcRYGate(q, 0.9031905737922612, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.674717290618146, 6);
  sqcRYGate(q, 1.5720559594123305, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6724738260832797, 0);
  sqcRYGate(q, 2.3140267586628602, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5985226530260563, 0);
  sqcRYGate(q, 0.8940531196747132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.263662354143537, 1);
  sqcRYGate(q, -2.7781800268999794, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8900070447303114, 1);
  sqcRYGate(q, -2.4228721330976746, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1057131606622344, 2);
  sqcRYGate(q, 2.6945330747009653, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7235684910173772, 2);
  sqcRYGate(q, 1.303659357795297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.33054668109860086, 3);
  sqcRYGate(q, -1.0186312168722118, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.735443288756682, 3);
  sqcRYGate(q, -1.7170551592682854, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5815159815141326, 4);
  sqcRYGate(q, -2.568152553144908, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5844548094847841, 4);
  sqcRYGate(q, 2.8300152056352736, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.234237096217032, 5);
  sqcRYGate(q, 0.9988600659545449, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.38223227966031104, 5);
  sqcRYGate(q, -1.4687013577988581, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.091291458117501, 6);
  sqcRYGate(q, 0.9431766611386809, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.248467164992839, 6);
  sqcRYGate(q, 0.18150041582026866, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6419424559565439, 0);
  sqcRYGate(q, -0.0848498354294902, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4133493537406556, 0);
  sqcRYGate(q, 2.306234807337538, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4879205946302605, 1);
  sqcRYGate(q, 0.2898292835183467, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0793569380713857, 1);
  sqcRYGate(q, 2.0521581928092205, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1206111053372823, 2);
  sqcRYGate(q, -1.4729487834649957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.061375494813743, 2);
  sqcRYGate(q, 2.5599099962506617, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5407986453846196, 3);
  sqcRYGate(q, 2.9801476545043233, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.676185740382362, 3);
  sqcRYGate(q, -2.81121558011247, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.48438124829060913, 4);
  sqcRYGate(q, -1.4569098888499674, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.748856644650494, 4);
  sqcRYGate(q, 0.7825919528373174, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.065356644231211, 5);
  sqcRYGate(q, -2.8703941222170273, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1465835870630574, 5);
  sqcRYGate(q, -0.6914085729322759, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.39348968433707054, 6);
  sqcRYGate(q, -0.3567526011036106, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7491118220278628, 6);
  sqcRYGate(q, -2.4836206738249818, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5975681028970401, 0);
  sqcRYGate(q, -3.0310361036985265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3830186667510445, 0);
  sqcRYGate(q, -2.198137689756119, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.353748248741656, 1);
  sqcRYGate(q, 0.7646869139189238, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.318959417844166, 1);
  sqcRYGate(q, -2.7353325475770554, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.634622186250251, 2);
  sqcRYGate(q, -2.182969677022716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3145273419941654, 2);
  sqcRYGate(q, -2.1144225846812694, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3755224920423963, 3);
  sqcRYGate(q, 3.1113345336003424, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1702666561281836, 3);
  sqcRYGate(q, -0.786770076004375, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5722931559082713, 4);
  sqcRYGate(q, -2.1540428675853627, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.543618871013627, 4);
  sqcRYGate(q, 0.8125142372820379, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5302014837876952, 5);
  sqcRYGate(q, 0.919168118166287, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.790566013508565, 5);
  sqcRYGate(q, -2.303716950284706, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8294143187577867, 6);
  sqcRYGate(q, -2.2804453152553616, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.791765674932955, 6);
  sqcRYGate(q, 0.6663955323680807, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7448431160543854, 0);
  sqcRYGate(q, -1.4258087463951425, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4923633352927361, 0);
  sqcRYGate(q, 2.4747847134835013, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.22688405473951032, 1);
  sqcRYGate(q, -2.2108110518492055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.139632997601283, 1);
  sqcRYGate(q, 1.857734741307639, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8167500820287774, 2);
  sqcRYGate(q, -1.2156843497361485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.683581700825718, 2);
  sqcRYGate(q, -0.3311429595857776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9297541528960398, 3);
  sqcRYGate(q, 0.18794739671490657, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7680104450828968, 3);
  sqcRYGate(q, 0.676729661876127, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.19350494083264932, 4);
  sqcRYGate(q, -0.3244084011062176, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6576043678513868, 4);
  sqcRYGate(q, 1.6595611462781679, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8200864206176757, 5);
  sqcRYGate(q, 2.6533180063012898, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0606268782982595, 5);
  sqcRYGate(q, -1.4134424570333328, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.062477931000797, 6);
  sqcRYGate(q, -1.1031520116521163, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.093823414644443, 6);
  sqcRYGate(q, 0.3900530497085494, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.23751198336430512, 0);
  sqcRYGate(q, -0.06811762515831118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.161576417432033, 0);
  sqcRYGate(q, -0.7140976315622325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4135787053787494, 1);
  sqcRYGate(q, 0.810647536358025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5738410304777881, 1);
  sqcRYGate(q, -3.0953651185795907, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08137478731030523, 2);
  sqcRYGate(q, -2.806790095400284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7899475139695414, 2);
  sqcRYGate(q, -1.663442709834731, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6120276960542308, 3);
  sqcRYGate(q, -2.8961650599959077, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.036558508312201, 3);
  sqcRYGate(q, -1.7352105760086491, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.275694376411203, 4);
  sqcRYGate(q, 1.1342673980118243, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.153650776549004, 4);
  sqcRYGate(q, 2.2451035163581565, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.42223045683565, 5);
  sqcRYGate(q, -1.6051002226835402, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5387557660745131, 5);
  sqcRYGate(q, 1.792689643034592, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9854511353201395, 6);
  sqcRYGate(q, 1.8293475167152773, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5184250110309936, 6);
  sqcRYGate(q, -0.6085122313087657, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.915535057378608, 0);
  sqcRYGate(q, 2.6147196215623554, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0662881377503566, 0);
  sqcRYGate(q, 1.8442910496393405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.443958151282279, 1);
  sqcRYGate(q, 2.065638383426297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9888350835970108, 1);
  sqcRYGate(q, -0.8733259231791284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.822635516264056, 2);
  sqcRYGate(q, 2.6666437531817286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5662595956581593, 2);
  sqcRYGate(q, -1.7391659590291897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7693920595172346, 3);
  sqcRYGate(q, 1.192220271296323, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6460546770564821, 3);
  sqcRYGate(q, -0.6013110456330741, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8119195935389623, 4);
  sqcRYGate(q, 2.067046598456853, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4704690698520066, 4);
  sqcRYGate(q, -1.7901327667158062, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8007716580871476, 5);
  sqcRYGate(q, 1.3709528795723793, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1348797064542713, 5);
  sqcRYGate(q, -0.9926621931076812, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6494444621109077, 6);
  sqcRYGate(q, 0.9008297943958414, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7896230565169156, 6);
  sqcRYGate(q, -0.1442781441071677, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6024754148280995, 0);
  sqcRYGate(q, 0.47069445496375195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6238064443409348, 0);
  sqcRYGate(q, 3.0774273048963408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0568234855455758, 1);
  sqcRYGate(q, 0.21422027265017307, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0131236054488566, 1);
  sqcRYGate(q, 1.0618187364566873, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.548457887108451, 2);
  sqcRYGate(q, -2.382008817698146, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4151473382395912, 2);
  sqcRYGate(q, -0.9288469634124299, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5275054673242128, 3);
  sqcRYGate(q, -1.532471520727071, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1391745277473673, 3);
  sqcRYGate(q, -1.9587257358891383, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.011761465611141, 4);
  sqcRYGate(q, -0.05895113331858681, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4958341276014817, 4);
  sqcRYGate(q, 0.7852917668195659, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.719368576166783, 5);
  sqcRYGate(q, 2.5944726637434097, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0618502495945745, 5);
  sqcRYGate(q, 0.4783750470069146, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2291502896978985, 6);
  sqcRYGate(q, -2.0294620695049184, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8743798652786294, 6);
  sqcRYGate(q, -1.6198188636526458, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3567079286784836, 0);
  sqcRYGate(q, 2.898281301337945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.814125188698732, 0);
  sqcRYGate(q, 1.5367965882702432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9711162318179891, 1);
  sqcRYGate(q, 2.5812408525928925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2909487313870602, 1);
  sqcRYGate(q, 2.430544636677411, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.926685611254539, 2);
  sqcRYGate(q, 2.585222672451253, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4843864251762522, 2);
  sqcRYGate(q, -0.7969789997663187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0864963960388865, 3);
  sqcRYGate(q, 3.0050128381494168, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9114398558279357, 3);
  sqcRYGate(q, 2.4041097303000263, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8788269615538518, 4);
  sqcRYGate(q, -2.580744580768539, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4623383786072237, 4);
  sqcRYGate(q, -2.7453733328834726, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.816942300430509, 5);
  sqcRYGate(q, -2.679673239611793, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.08677862524469847, 5);
  sqcRYGate(q, -1.3815900138497201, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.951432886289775, 6);
  sqcRYGate(q, -1.723774890280419, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.270166226542927, 6);
  sqcRYGate(q, 0.7288709188649012, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7920412434936673, 0);
  sqcRYGate(q, -0.023922556242391604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1635185650672275, 0);
  sqcRYGate(q, 1.973218578361065, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6687704136131842, 1);
  sqcRYGate(q, -1.120801781729508, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.687435032877608, 1);
  sqcRYGate(q, 0.9697839473309768, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4964959362479933, 2);
  sqcRYGate(q, -1.6117791324593098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.218468249358238, 2);
  sqcRYGate(q, -1.5426245981974516, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9540607526056153, 3);
  sqcRYGate(q, -2.5380938351405837, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5957496671791391, 3);
  sqcRYGate(q, 1.6309637230409866, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0651014276970234, 4);
  sqcRYGate(q, -3.1280758641572333, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8831004079902378, 4);
  sqcRYGate(q, -2.382420635564518, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5105371297821906, 5);
  sqcRYGate(q, 2.329846351433633, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.831539249336456, 5);
  sqcRYGate(q, 1.908995461225115, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6647396866635793, 6);
  sqcRYGate(q, 1.072929591258787, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5549579084207004, 6);
  sqcRYGate(q, -1.1452869608001661, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0225845985002389, 0);
  sqcRYGate(q, 0.2918499345703722, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.612579291330686, 0);
  sqcRYGate(q, 1.2919395639715046, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.347202007253327, 1);
  sqcRYGate(q, 1.356250331259388, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5090423240330411, 1);
  sqcRYGate(q, -3.117685260826309, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1342616268948507, 2);
  sqcRYGate(q, 0.6973271079663865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.41862539559830036, 2);
  sqcRYGate(q, 2.1757071830191217, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0759608915391412, 3);
  sqcRYGate(q, -1.5952994246706185, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8386130280001458, 3);
  sqcRYGate(q, 2.7532666245879724, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8843970689129721, 4);
  sqcRYGate(q, -2.2484873886160335, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.39568188600723975, 4);
  sqcRYGate(q, -1.3580091744532294, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.548028550948678, 5);
  sqcRYGate(q, 2.921391988444926, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8891074989770589, 5);
  sqcRYGate(q, 1.2636752369681252, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5753703055944825, 6);
  sqcRYGate(q, -2.2493264311723413, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0082661607845482, 6);
  sqcRYGate(q, 0.3659009887457805, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3457600519855777, 0);
  sqcRYGate(q, -1.9585100107471212, 1);
  sqcRYGate(q, 0.83901411911929, 2);
  sqcRYGate(q, 1.036650298650611, 3);
  sqcRYGate(q, 0.04926718681423611, 4);
  sqcRYGate(q, -2.30331718909914, 5);
  sqcRYGate(q, 0.6326345131620492, 6);
  sqcRYGate(q, 2.9063529634390104, 7);

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
