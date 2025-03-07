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

  sqcRYGate(q, -0.03246834311346891, 0);
  sqcRZGate(q, 0.5125034572300982, 0);
  sqcRYGate(q, 1.6240835661635504, 1);
  sqcRZGate(q, -3.1317173994465004, 1);
  sqcRYGate(q, -2.955692781174201, 2);
  sqcRZGate(q, 0.5628727114306313, 2);
  sqcRYGate(q, -1.772607689216098, 3);
  sqcRZGate(q, 1.376234344678947, 3);
  sqcRYGate(q, -0.0408855309348155, 4);
  sqcRZGate(q, -1.3273557228442567, 4);
  sqcRYGate(q, -0.024735500292858117, 5);
  sqcRZGate(q, -1.2069230886615134, 5);
  sqcRYGate(q, 0.15780932398670444, 6);
  sqcRZGate(q, 2.7739498387386665, 6);
  sqcRYGate(q, -0.0650392659924416, 7);
  sqcRZGate(q, -2.630282115702583, 7);
  sqcRYGate(q, -0.883535169337967, 8);
  sqcRZGate(q, -1.9011423069710651, 8);
  sqcRYGate(q, 0.19039924294562777, 9);
  sqcRZGate(q, -0.080666958714108, 9);
  sqcRYGate(q, -2.224091172078162, 10);
  sqcRZGate(q, -2.54098512974239, 10);
  sqcRYGate(q, 0.05170210620448401, 11);
  sqcRZGate(q, 2.837939703358001, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.010925409852606703, 0);
  sqcRZGate(q, 3.067598068210223, 0);
  sqcRYGate(q, 1.7354671236602899, 1);
  sqcRZGate(q, -0.6792736546771216, 1);
  sqcRYGate(q, 2.473715431546383, 2);
  sqcRZGate(q, 1.5706824314282164, 2);
  sqcRYGate(q, -3.0862712320411965, 3);
  sqcRZGate(q, 1.8094066452867503, 3);
  sqcRYGate(q, -0.2649023017170019, 4);
  sqcRZGate(q, -1.9895352229628358, 4);
  sqcRYGate(q, -2.768991183999082, 5);
  sqcRZGate(q, 1.8537934458257137, 5);
  sqcRYGate(q, 0.6792927595174438, 6);
  sqcRZGate(q, 0.8752690391911608, 6);
  sqcRYGate(q, -2.45727239507576, 7);
  sqcRZGate(q, -1.2601143519816325, 7);
  sqcRYGate(q, -0.8869663724913392, 8);
  sqcRZGate(q, 0.5856454973390505, 8);
  sqcRYGate(q, -2.8230838454453595, 9);
  sqcRZGate(q, 1.9655627440007548, 9);
  sqcRYGate(q, 2.0222496389251523, 10);
  sqcRZGate(q, -2.4395290020672316, 10);
  sqcRYGate(q, -0.01256636950005241, 11);
  sqcRZGate(q, -1.2410515123721835, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.957414609506967, 0);
  sqcRZGate(q, 0.6387453366141171, 0);
  sqcRYGate(q, -2.5353986947978986, 1);
  sqcRZGate(q, 1.3496927986258402, 1);
  sqcRYGate(q, 0.2481367692320053, 2);
  sqcRZGate(q, 0.6843162020795068, 2);
  sqcRYGate(q, 2.809940304965467, 3);
  sqcRZGate(q, 0.5852716604937712, 3);
  sqcRYGate(q, -3.120904161304991, 4);
  sqcRZGate(q, -1.7578185545949971, 4);
  sqcRYGate(q, 0.0515821370674594, 5);
  sqcRZGate(q, -1.2350998711498067, 5);
  sqcRYGate(q, 1.7689202345178892, 6);
  sqcRZGate(q, -1.0914160392399754, 6);
  sqcRYGate(q, -0.020489051319341218, 7);
  sqcRZGate(q, -0.7575690644188477, 7);
  sqcRYGate(q, -1.7311200516271221, 8);
  sqcRZGate(q, 2.1658605461153533, 8);
  sqcRYGate(q, 2.2827070007411523, 9);
  sqcRZGate(q, -1.045380282800212, 9);
  sqcRYGate(q, -1.5531331702232887, 10);
  sqcRZGate(q, 1.2113616997251304, 10);
  sqcRYGate(q, 3.0824456549410235, 11);
  sqcRZGate(q, -1.1222961365914061, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.1634296090857474, 0);
  sqcRZGate(q, -2.5153676872781174, 0);
  sqcRYGate(q, -0.08637562520563069, 1);
  sqcRZGate(q, 1.9315992796597143, 1);
  sqcRYGate(q, 2.8238594439885705, 2);
  sqcRZGate(q, -1.7869228697434227, 2);
  sqcRYGate(q, -1.6505706173184052, 3);
  sqcRZGate(q, 2.2502666473233184, 3);
  sqcRYGate(q, 2.559688265940825, 4);
  sqcRZGate(q, 0.6915778807186691, 4);
  sqcRYGate(q, -2.4549821418922004, 5);
  sqcRZGate(q, 3.084992912383516, 5);
  sqcRYGate(q, 1.2211880041120464, 6);
  sqcRZGate(q, -2.080732732348713, 6);
  sqcRYGate(q, 3.0870465122693145, 7);
  sqcRZGate(q, 0.06292599519054232, 7);
  sqcRYGate(q, 2.5919399316222327, 8);
  sqcRZGate(q, 2.2705441095296335, 8);
  sqcRYGate(q, 2.0559403910967093, 9);
  sqcRZGate(q, 1.0113744996144067, 9);
  sqcRYGate(q, -0.22994998848805623, 10);
  sqcRZGate(q, 1.2965478436746798, 10);
  sqcRYGate(q, -1.8312473484840561, 11);
  sqcRZGate(q, 2.839281509206982, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.032337843783026, 0);
  sqcRZGate(q, 0.734400991216579, 0);
  sqcRYGate(q, 0.08512958462616194, 1);
  sqcRZGate(q, 2.894659339465842, 1);
  sqcRYGate(q, -2.689440877117422, 2);
  sqcRZGate(q, 0.056153814783377776, 2);
  sqcRYGate(q, 0.2979828532214354, 3);
  sqcRZGate(q, -2.38402702128283, 3);
  sqcRYGate(q, 0.07175883738509438, 4);
  sqcRZGate(q, -0.025560012760048743, 4);
  sqcRYGate(q, -2.3535343490856535, 5);
  sqcRZGate(q, 1.9358448439436509, 5);
  sqcRYGate(q, -0.05909124888748401, 6);
  sqcRZGate(q, 2.108984301613459, 6);
  sqcRYGate(q, 0.041647832190709895, 7);
  sqcRZGate(q, 1.7644804606676505, 7);
  sqcRYGate(q, -0.7829316543194693, 8);
  sqcRZGate(q, 1.9805958733743836, 8);
  sqcRYGate(q, 1.5992167067754552, 9);
  sqcRZGate(q, 2.358999036272141, 9);
  sqcRYGate(q, 3.138560844189212, 10);
  sqcRZGate(q, -1.8999497510041632, 10);
  sqcRYGate(q, 3.107232219126757, 11);
  sqcRZGate(q, -0.2579242688822498, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.2648848129421295, 0);
  sqcRZGate(q, 2.949668035987085, 0);
  sqcRYGate(q, -2.4949582056132122, 1);
  sqcRZGate(q, -1.6013894722412203, 1);
  sqcRYGate(q, -0.00035544675731908845, 2);
  sqcRZGate(q, -0.4601398471498001, 2);
  sqcRYGate(q, -1.0061246302204623, 3);
  sqcRZGate(q, 0.7829638400309722, 3);
  sqcRYGate(q, 1.6363765164712234, 4);
  sqcRZGate(q, 1.3155404982339751, 4);
  sqcRYGate(q, -2.845332146866004, 5);
  sqcRZGate(q, 1.5144124778656562, 5);
  sqcRYGate(q, -2.8967336267099086, 6);
  sqcRZGate(q, 2.0019326358806495, 6);
  sqcRYGate(q, 3.087668277243314, 7);
  sqcRZGate(q, -1.731300831491847, 7);
  sqcRYGate(q, -1.975355603259282, 8);
  sqcRZGate(q, 2.7460419996962186, 8);
  sqcRYGate(q, 0.5965427500973999, 9);
  sqcRZGate(q, -2.9635664764441354, 9);
  sqcRYGate(q, 2.8370113255091702, 10);
  sqcRZGate(q, 3.0596155674641268, 10);
  sqcRYGate(q, 1.813740229760282, 11);
  sqcRZGate(q, -2.194220214457605, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.49750449832797, 0);
  sqcRZGate(q, 3.0252249141720697, 0);
  sqcRYGate(q, 3.135152878892723, 1);
  sqcRZGate(q, -0.538721697881616, 1);
  sqcRYGate(q, -3.0293168249568083, 2);
  sqcRZGate(q, 1.4052089241077406, 2);
  sqcRYGate(q, 0.3206182757651024, 3);
  sqcRZGate(q, -3.0389944557631554, 3);
  sqcRYGate(q, 0.009685739923194894, 4);
  sqcRZGate(q, -1.4928711620799375, 4);
  sqcRYGate(q, -2.4275592828068655, 5);
  sqcRZGate(q, 2.2520372696884565, 5);
  sqcRYGate(q, -0.3470504885944612, 6);
  sqcRZGate(q, 1.8149035867286614, 6);
  sqcRYGate(q, 0.1734414771366053, 7);
  sqcRZGate(q, -0.6215609100721942, 7);
  sqcRYGate(q, 1.6422604484417804, 8);
  sqcRZGate(q, 2.8987986912744685, 8);
  sqcRYGate(q, 0.5231019662182517, 9);
  sqcRZGate(q, -0.8172290354345416, 9);
  sqcRYGate(q, 0.6679893643445322, 10);
  sqcRZGate(q, -1.1071362730435652, 10);
  sqcRYGate(q, -3.1373538344665315, 11);
  sqcRZGate(q, 1.5181596811613893, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.8716477028863192, 0);
  sqcRZGate(q, -2.2364153117369776, 0);
  sqcRYGate(q, -3.1353826240310756, 1);
  sqcRZGate(q, 2.5790457974854344, 1);
  sqcRYGate(q, 2.0766166575883496, 2);
  sqcRZGate(q, 0.17230854508591986, 2);
  sqcRYGate(q, 1.106215518536762, 3);
  sqcRZGate(q, 2.2504542315373453, 3);
  sqcRYGate(q, 1.8275254093922468, 4);
  sqcRZGate(q, -2.81203135313506, 4);
  sqcRYGate(q, -1.8547894497775754, 5);
  sqcRZGate(q, -0.9632593502822467, 5);
  sqcRYGate(q, -1.0886127632072593, 6);
  sqcRZGate(q, 2.704311149503405, 6);
  sqcRYGate(q, 0.05120666546235686, 7);
  sqcRZGate(q, 0.5367228576118208, 7);
  sqcRYGate(q, 0.1124165912468127, 8);
  sqcRZGate(q, 2.9430374317579275, 8);
  sqcRYGate(q, -1.9558019349167868, 9);
  sqcRZGate(q, -0.49158913921917446, 9);
  sqcRYGate(q, -3.0550728488809984, 10);
  sqcRZGate(q, 1.3733866432221316, 10);
  sqcRYGate(q, 0.04440561953315642, 11);
  sqcRZGate(q, 1.43162883803038, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5350756046077008, 0);
  sqcRZGate(q, -1.8950288813412834, 0);
  sqcRYGate(q, 3.078139262782104, 1);
  sqcRZGate(q, 0.3907811670139508, 1);
  sqcRYGate(q, -1.2800069228780178, 2);
  sqcRZGate(q, -0.7321249343974856, 2);
  sqcRYGate(q, 0.008264751392223603, 3);
  sqcRZGate(q, 1.3475431983549573, 3);
  sqcRYGate(q, -0.7810463411617734, 4);
  sqcRZGate(q, 0.3443141876025021, 4);
  sqcRYGate(q, 0.34534795388334244, 5);
  sqcRZGate(q, -0.6826189608702231, 5);
  sqcRYGate(q, -2.4575986763114073, 6);
  sqcRZGate(q, -1.8512432460140094, 6);
  sqcRYGate(q, -0.7622829637966868, 7);
  sqcRZGate(q, 2.1781483082601767, 7);
  sqcRYGate(q, -2.8422884012500567, 8);
  sqcRZGate(q, -0.9953806950525956, 8);
  sqcRYGate(q, -1.8156118697478538, 9);
  sqcRZGate(q, -2.944127193636378, 9);
  sqcRYGate(q, 1.8247094322042672, 10);
  sqcRZGate(q, -2.2600538623923248, 10);
  sqcRYGate(q, 3.0934549017630038, 11);
  sqcRZGate(q, -3.1010368288398737, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.859709347516226, 0);
  sqcRZGate(q, -0.4387313176587506, 0);
  sqcRYGate(q, -2.7174395213083313, 1);
  sqcRZGate(q, -0.5113559552440394, 1);
  sqcRYGate(q, 0.3379571181763863, 2);
  sqcRZGate(q, -0.25459413963676575, 2);
  sqcRYGate(q, -1.6653646513805487, 3);
  sqcRZGate(q, 1.5448863847916474, 3);
  sqcRYGate(q, -2.6334051700535714, 4);
  sqcRZGate(q, -1.1824537332266847, 4);
  sqcRYGate(q, -1.3201232007254602, 5);
  sqcRZGate(q, -2.423424147122634, 5);
  sqcRYGate(q, 0.02668160327913665, 6);
  sqcRZGate(q, 1.8049185411979751, 6);
  sqcRYGate(q, 3.0655408208982022, 7);
  sqcRZGate(q, 0.13973911476776824, 7);
  sqcRYGate(q, 2.0595382645965357, 8);
  sqcRZGate(q, -2.959035495968976, 8);
  sqcRYGate(q, 1.7122940699165312, 9);
  sqcRZGate(q, 2.3416326877164417, 9);
  sqcRYGate(q, 3.0191729562966394, 10);
  sqcRZGate(q, 1.9548155207389666, 10);
  sqcRYGate(q, -3.129764553941261, 11);
  sqcRZGate(q, -2.4801412181711178, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.1667194902281683, 0);
  sqcRZGate(q, 0.3667852515852751, 0);
  sqcRYGate(q, -0.061135879546556623, 1);
  sqcRZGate(q, 1.171324352528626, 1);
  sqcRYGate(q, 1.113697553832778, 2);
  sqcRZGate(q, 0.3032013228089157, 2);
  sqcRYGate(q, -2.457693602150857, 3);
  sqcRZGate(q, 1.8275227440773314, 3);
  sqcRYGate(q, -3.136432461521759, 4);
  sqcRZGate(q, 3.003814095262178, 4);
  sqcRYGate(q, -3.0461208211145845, 5);
  sqcRZGate(q, -2.317616507365439, 5);
  sqcRYGate(q, -0.1587293287793603, 6);
  sqcRZGate(q, -0.18585901579877362, 6);
  sqcRYGate(q, -1.3384231092619556, 7);
  sqcRZGate(q, 3.0208321345696505, 7);
  sqcRYGate(q, -2.9088527538161464, 8);
  sqcRZGate(q, -1.9193466270380704, 8);
  sqcRYGate(q, 1.7334173030174305, 9);
  sqcRZGate(q, -1.3972684171260967, 9);
  sqcRYGate(q, -0.11395466549761324, 10);
  sqcRZGate(q, 0.11341694236002108, 10);
  sqcRYGate(q, -0.08936385084508053, 11);
  sqcRZGate(q, -3.024920817362172, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.3540088545947642, 0);
  sqcRZGate(q, -0.3614522707363941, 0);
  sqcRYGate(q, 2.667466099063534, 1);
  sqcRZGate(q, -2.259230385721032, 1);
  sqcRYGate(q, 1.722453028360599, 2);
  sqcRZGate(q, 2.265286588590117, 2);
  sqcRYGate(q, -1.3340989031439472, 3);
  sqcRZGate(q, -0.20426633525055227, 3);
  sqcRYGate(q, 0.24751074722172933, 4);
  sqcRZGate(q, -0.7790698472540694, 4);
  sqcRYGate(q, -1.0872724708103867, 5);
  sqcRZGate(q, 2.396920794114362, 5);
  sqcRYGate(q, 1.5301485567248285, 6);
  sqcRZGate(q, 1.5760619559100109, 6);
  sqcRYGate(q, -3.0360296502572166, 7);
  sqcRZGate(q, -1.4169995596280565, 7);
  sqcRYGate(q, 0.18393789098023738, 8);
  sqcRZGate(q, 0.5688217130911513, 8);
  sqcRYGate(q, -0.8427422219008571, 9);
  sqcRZGate(q, 1.274829665205528, 9);
  sqcRYGate(q, -0.9962749510011182, 10);
  sqcRZGate(q, -0.5720271360343203, 10);
  sqcRYGate(q, -3.129220659081438, 11);
  sqcRZGate(q, 0.2359765645475515, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.916344323369775, 0);
  sqcRZGate(q, -2.540060564465349, 0);
  sqcRYGate(q, -0.08597793629789408, 1);
  sqcRZGate(q, 0.9437767539223604, 1);
  sqcRYGate(q, -0.7295300344068282, 2);
  sqcRZGate(q, -0.8661331062513361, 2);
  sqcRYGate(q, 1.2278145376685998, 3);
  sqcRZGate(q, -2.6067121970697684, 3);
  sqcRYGate(q, -2.750246332151082, 4);
  sqcRZGate(q, -0.9281342102565713, 4);
  sqcRYGate(q, -2.9613884896386153, 5);
  sqcRZGate(q, -0.040668237677093266, 5);
  sqcRYGate(q, -0.10892780362003376, 6);
  sqcRZGate(q, -2.152648451579034, 6);
  sqcRYGate(q, -1.1191588438629636, 7);
  sqcRZGate(q, 0.890942879772619, 7);
  sqcRYGate(q, -2.4281201434981963, 8);
  sqcRZGate(q, -1.0727733403242945, 8);
  sqcRYGate(q, -2.681900410105892, 9);
  sqcRZGate(q, -0.8572090527425155, 9);
  sqcRYGate(q, -2.181536286539911, 10);
  sqcRZGate(q, -1.237519856086782, 10);
  sqcRYGate(q, -0.0006453760724096147, 11);
  sqcRZGate(q, -0.8698601255102036, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.0334047199995595, 0);
  sqcRZGate(q, 0.6084219168958557, 0);
  sqcRYGate(q, -2.3418269517157513, 1);
  sqcRZGate(q, 0.14783355075183116, 1);
  sqcRYGate(q, 2.763419948512426, 2);
  sqcRZGate(q, -2.9703523574366715, 2);
  sqcRYGate(q, -2.994966083892574, 3);
  sqcRZGate(q, -2.5634852343748045, 3);
  sqcRYGate(q, -3.0891232915711813, 4);
  sqcRZGate(q, -2.2527495038178262, 4);
  sqcRYGate(q, 3.0665727688685505, 5);
  sqcRZGate(q, 3.016211439675619, 5);
  sqcRYGate(q, -3.1316785815130928, 6);
  sqcRZGate(q, 3.015388269982095, 6);
  sqcRYGate(q, 0.03243186771463158, 7);
  sqcRZGate(q, -0.4272075300645404, 7);
  sqcRYGate(q, -3.028395333323746, 8);
  sqcRZGate(q, 2.472647127846523, 8);
  sqcRYGate(q, -0.051838107319315256, 9);
  sqcRZGate(q, 1.387881670593364, 9);
  sqcRYGate(q, 1.6936664068093654, 10);
  sqcRZGate(q, 2.8567027334945, 10);
  sqcRYGate(q, -3.1337499610609396, 11);
  sqcRZGate(q, -0.86843956613715, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.4361223265272152, 0);
  sqcRZGate(q, -1.5512101747910452, 0);
  sqcRYGate(q, -0.02799771684599478, 1);
  sqcRZGate(q, 1.4395314857251398, 1);
  sqcRYGate(q, 1.095185310222641, 2);
  sqcRZGate(q, -0.14594441731720675, 2);
  sqcRYGate(q, -1.6830797295692568, 3);
  sqcRZGate(q, 0.5181987586147234, 3);
  sqcRYGate(q, 0.8815044004299066, 4);
  sqcRZGate(q, 0.2847241406070527, 4);
  sqcRYGate(q, 1.7569490285403644, 5);
  sqcRZGate(q, 0.9810892742485767, 5);
  sqcRYGate(q, -0.49630535610238535, 6);
  sqcRZGate(q, -2.0202656314198175, 6);
  sqcRYGate(q, 1.181185315215851, 7);
  sqcRZGate(q, -1.7949569772814737, 7);
  sqcRYGate(q, -2.4522496872135173, 8);
  sqcRZGate(q, -1.3226615204293406, 8);
  sqcRYGate(q, -2.1324152934967175, 9);
  sqcRZGate(q, -1.4579009534145584, 9);
  sqcRYGate(q, 1.4334971680470652, 10);
  sqcRZGate(q, 1.2383563835296743, 10);
  sqcRYGate(q, 3.120739884109037, 11);
  sqcRZGate(q, 2.467312116665128, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.4939553904731957, 0);
  sqcRZGate(q, -2.901181823102564, 0);
  sqcRYGate(q, -0.7693049126528629, 1);
  sqcRZGate(q, 3.035498006344136, 1);
  sqcRYGate(q, -0.9747239678745032, 2);
  sqcRZGate(q, -0.3515508510141849, 2);
  sqcRYGate(q, 1.5738375290198467, 3);
  sqcRZGate(q, 0.04790421297602153, 3);
  sqcRYGate(q, -1.5909180319481733, 4);
  sqcRZGate(q, 3.1356755034664565, 4);
  sqcRYGate(q, -3.126472525344685, 5);
  sqcRZGate(q, -0.7586219040304654, 5);
  sqcRYGate(q, 0.25444153400348135, 6);
  sqcRZGate(q, -0.03836676382201443, 6);
  sqcRYGate(q, 0.06330533933541105, 7);
  sqcRZGate(q, 1.6264982110392305, 7);
  sqcRYGate(q, -0.4471258261382287, 8);
  sqcRZGate(q, 2.0960626489209284, 8);
  sqcRYGate(q, 2.3941725146675443, 9);
  sqcRZGate(q, 2.428052639194401, 9);
  sqcRYGate(q, 1.8919903065936945, 10);
  sqcRZGate(q, 1.6248304799169986, 10);
  sqcRYGate(q, -0.07894457260036615, 11);
  sqcRZGate(q, -0.07391703916024782, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.4072473017065263, 0);
  sqcRZGate(q, 2.385532907493073, 0);
  sqcRYGate(q, 0.9580742169249533, 1);
  sqcRZGate(q, -2.9185705298023175, 1);
  sqcRYGate(q, 3.081036855205113, 2);
  sqcRZGate(q, -3.0919717236152087, 2);
  sqcRYGate(q, 1.5740238814813203, 3);
  sqcRZGate(q, -0.00030203355979008256, 3);
  sqcRYGate(q, -3.0019536057580347, 4);
  sqcRZGate(q, -0.005141719310304959, 4);
  sqcRYGate(q, -3.1383984932594786, 5);
  sqcRZGate(q, -0.058356757129546466, 5);
  sqcRYGate(q, -1.5798140713887097, 6);
  sqcRZGate(q, 3.132964594146521, 6);
  sqcRYGate(q, -2.8327658970786174, 7);
  sqcRZGate(q, 2.2648482142520274, 7);
  sqcRYGate(q, 2.9166674326702444, 8);
  sqcRZGate(q, 2.5034956398427353, 8);
  sqcRYGate(q, 2.076676667066489, 9);
  sqcRZGate(q, 1.3911011352974023, 9);
  sqcRYGate(q, -1.063335076233649, 10);
  sqcRZGate(q, -0.7678861155605785, 10);
  sqcRYGate(q, 2.9442944531470907, 11);
  sqcRZGate(q, 2.4030148063709826, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.6480561550561879, 0);
  sqcRZGate(q, 1.80835054089707, 0);
  sqcRYGate(q, 0.6669021803933813, 1);
  sqcRZGate(q, -2.9930675131850766, 1);
  sqcRYGate(q, 1.5703582455277356, 2);
  sqcRZGate(q, 1.5763814714252977, 2);
  sqcRYGate(q, 1.7171533888415236, 3);
  sqcRZGate(q, 1.6205092031955861, 3);
  sqcRYGate(q, -2.6424625718950074, 4);
  sqcRZGate(q, 0.03229257866483959, 4);
  sqcRYGate(q, 3.071985270796305, 5);
  sqcRZGate(q, 1.7075152537230718, 5);
  sqcRYGate(q, 0.27711226160676644, 6);
  sqcRZGate(q, -2.188246947003788, 6);
  sqcRYGate(q, 0.030282994607407302, 7);
  sqcRZGate(q, 0.9288554895279092, 7);
  sqcRYGate(q, 0.08440410883014145, 8);
  sqcRZGate(q, 0.6887050259257916, 8);
  sqcRYGate(q, 0.7013301037707781, 9);
  sqcRZGate(q, 1.8315761242069453, 9);
  sqcRYGate(q, 0.9896810498897022, 10);
  sqcRZGate(q, -0.3100659176432075, 10);
  sqcRYGate(q, 2.2979409122696204, 11);
  sqcRZGate(q, 0.05836593357332288, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.8958012292515916, 0);
  sqcRZGate(q, -1.2944753526074406, 0);
  sqcRYGate(q, 1.5668781627026203, 1);
  sqcRZGate(q, -0.6742888766910158, 1);
  sqcRYGate(q, 2.385524807977516, 2);
  sqcRZGate(q, -3.064766553324505, 2);
  sqcRYGate(q, 1.5697380048982956, 3);
  sqcRZGate(q, 0.5356721518326593, 3);
  sqcRYGate(q, 2.49535120439574, 4);
  sqcRZGate(q, 1.6039263920402567, 4);
  sqcRYGate(q, 1.8674870234272976, 5);
  sqcRZGate(q, -3.133347901939918, 5);
  sqcRYGate(q, 1.6214523535508694, 6);
  sqcRZGate(q, -0.2733456723454717, 6);
  sqcRYGate(q, 2.0435653304832107, 7);
  sqcRZGate(q, -1.1801749219377138, 7);
  sqcRYGate(q, -1.348501514162028, 8);
  sqcRZGate(q, 1.8566522300998374, 8);
  sqcRYGate(q, -1.2619830272351589, 9);
  sqcRZGate(q, -1.8985713510962379, 9);
  sqcRYGate(q, -2.221626870529662, 10);
  sqcRZGate(q, 0.14225016509216068, 10);
  sqcRYGate(q, -0.19576939622766076, 11);
  sqcRZGate(q, 0.8696246837743503, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5733296738980453, 0);
  sqcRZGate(q, -1.570504875170606, 0);
  sqcRYGate(q, -3.1372409528463194, 1);
  sqcRZGate(q, -2.244166755218164, 1);
  sqcRYGate(q, 0.01738588461260173, 2);
  sqcRZGate(q, 3.0722743370866437, 2);
  sqcRYGate(q, -3.1399656102460014, 3);
  sqcRZGate(q, 2.06991759227944, 3);
  sqcRYGate(q, 0.04666833724741881, 4);
  sqcRZGate(q, -0.002477898097308747, 4);
  sqcRYGate(q, -3.0011216714932707, 5);
  sqcRZGate(q, 1.5665121819150896, 5);
  sqcRYGate(q, -3.0906244163553804, 6);
  sqcRZGate(q, -0.15273213408813296, 6);
  sqcRYGate(q, -0.0064441242594073245, 7);
  sqcRZGate(q, -1.2937394666923103, 7);
  sqcRYGate(q, 3.1218612367724567, 8);
  sqcRZGate(q, 0.8761030496154212, 8);
  sqcRYGate(q, -3.1249141981010533, 9);
  sqcRZGate(q, -0.40356934368661257, 9);
  sqcRYGate(q, -1.5984356750492448, 10);
  sqcRZGate(q, 1.6358629095501889, 10);
  sqcRYGate(q, 2.365416225895453, 11);
  sqcRZGate(q, 1.4879457133499392, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5682336375829378, 0);
  sqcRZGate(q, 1.8636125392619611, 0);
  sqcRYGate(q, -1.5737628622844797, 1);
  sqcRZGate(q, 2.067635783298795, 1);
  sqcRYGate(q, -0.8135011791131355, 2);
  sqcRZGate(q, 1.3489655587014837, 2);
  sqcRYGate(q, 0.04611238819426777, 3);
  sqcRZGate(q, -1.0494435019476978, 3);
  sqcRYGate(q, -1.5837798093061535, 4);
  sqcRZGate(q, -1.437893909322065, 4);
  sqcRYGate(q, -1.5500525595626762, 5);
  sqcRZGate(q, -1.3158348938733584, 5);
  sqcRYGate(q, 1.643730563928133, 6);
  sqcRZGate(q, 1.4285477012661545, 6);
  sqcRYGate(q, -3.0075810153706453, 7);
  sqcRZGate(q, -2.8422467131653617, 7);
  sqcRYGate(q, 0.41498023213100854, 8);
  sqcRZGate(q, 3.1014264352823853, 8);
  sqcRYGate(q, -1.6219867060103714, 9);
  sqcRZGate(q, 2.730515500644646, 9);
  sqcRYGate(q, 1.5177995463342973, 10);
  sqcRZGate(q, -1.1969900560111997, 10);
  sqcRYGate(q, -0.05319622630278342, 11);
  sqcRZGate(q, -0.43865924763205477, 11);

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
