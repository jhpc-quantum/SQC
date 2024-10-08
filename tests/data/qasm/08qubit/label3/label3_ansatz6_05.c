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
  sqcInitialize();

  sqcQC* q;
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 2.8612492167337025, 0);
  sqcRYGate(q, -3.03577686078129, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2911859072412924, 0);
  sqcRYGate(q, -2.3088481118422264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5626358014460333, 1);
  sqcRYGate(q, -0.5524367837230937, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7709379497978756, 1);
  sqcRYGate(q, -0.06524231436380022, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9817980489825855, 2);
  sqcRYGate(q, 0.5660755838044684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6484862947705423, 2);
  sqcRYGate(q, -1.9536196118265867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.19868613592790121, 3);
  sqcRYGate(q, -2.73881922432978, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.37375557409008914, 3);
  sqcRYGate(q, -0.7898807041053615, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1190824154355135, 4);
  sqcRYGate(q, 1.8296522064510763, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6252284822609266, 4);
  sqcRYGate(q, -0.960674144305926, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.400527940181135, 5);
  sqcRYGate(q, 1.8411544203379373, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.954515550688817, 5);
  sqcRYGate(q, -2.943410201331196, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5817074544543277, 6);
  sqcRYGate(q, -2.7579544197647947, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.592141933473062, 6);
  sqcRYGate(q, -0.8723593701111251, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9609756363918596, 0);
  sqcRYGate(q, 2.672432177227784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.011122744217990645, 0);
  sqcRYGate(q, -1.823180524896072, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.410317492970723, 1);
  sqcRYGate(q, -1.4395691528828625, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0787546495021842, 1);
  sqcRYGate(q, -3.1367921949293147, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9059363090669986, 2);
  sqcRYGate(q, 2.7375978658466757, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3749843134304167, 2);
  sqcRYGate(q, -2.3056069722860704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9122721091068844, 3);
  sqcRYGate(q, 2.803249314420641, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3013118994809911, 3);
  sqcRYGate(q, 0.667464163625175, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.14330391815476368, 4);
  sqcRYGate(q, 0.6679527114147454, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.894592839420251, 4);
  sqcRYGate(q, 1.207932943937423, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0244621347570197, 5);
  sqcRYGate(q, 1.9364173952085837, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.746677323170772, 5);
  sqcRYGate(q, -1.2384788321284734, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.096394219034199, 6);
  sqcRYGate(q, 2.8389607220123723, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.1963347700172665, 6);
  sqcRYGate(q, -1.9814211607358627, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1305312923285389, 0);
  sqcRYGate(q, 1.4294264105840928, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.006577722296490398, 0);
  sqcRYGate(q, 1.6566386469353986, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.526168135504514, 1);
  sqcRYGate(q, 1.715921313343786, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.655360825852395, 1);
  sqcRYGate(q, 3.1034618376755785, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5927617077063002, 2);
  sqcRYGate(q, -2.2870809708234243, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.419428539523769, 2);
  sqcRYGate(q, 0.7771626553141469, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0645519287469596, 3);
  sqcRYGate(q, 0.41209101536559506, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.688150031841605, 3);
  sqcRYGate(q, -1.1470548508537926, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0401120208709647, 4);
  sqcRYGate(q, -1.3212738940506696, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.990516440520548, 4);
  sqcRYGate(q, -2.717526867449831, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5795297239832342, 5);
  sqcRYGate(q, -0.48052589282060865, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1150820897015716, 5);
  sqcRYGate(q, -1.923978163795878, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2394522552819363, 6);
  sqcRYGate(q, 2.747848804085851, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.1664750525851628, 6);
  sqcRYGate(q, 0.23009261839891515, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2190087073451428, 0);
  sqcRYGate(q, -0.7706364395925309, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0027453843031963743, 0);
  sqcRYGate(q, -1.127905656189209, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.93493198152742, 1);
  sqcRYGate(q, 0.3731448159007249, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4302842697928888, 1);
  sqcRYGate(q, -0.7741469425349472, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9254822009157326, 2);
  sqcRYGate(q, 1.1667872808226847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9976263406356295, 2);
  sqcRYGate(q, -2.7761202842538855, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6461196374631364, 3);
  sqcRYGate(q, 2.7516609838892103, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3376154642155909, 3);
  sqcRYGate(q, 2.7005404543658855, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7788249613341014, 4);
  sqcRYGate(q, 0.2720847173793919, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7906451246264896, 4);
  sqcRYGate(q, 2.6646162744916873, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5666967715470523, 5);
  sqcRYGate(q, -2.6263317024856563, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9598631745871162, 5);
  sqcRYGate(q, 1.2197185628593739, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.149336655504519, 6);
  sqcRYGate(q, 1.5858659672867121, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8914566856372637, 6);
  sqcRYGate(q, -0.6376158430957959, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.013245520427346329, 0);
  sqcRYGate(q, 2.4694940865423995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.004947493387792434, 0);
  sqcRYGate(q, -1.5579653831423421, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1416593163465123, 1);
  sqcRYGate(q, 3.091623205017166, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6054199893642025, 1);
  sqcRYGate(q, 2.245998744342219, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9660217268136728, 2);
  sqcRYGate(q, 1.1981947154406596, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11611732109849182, 2);
  sqcRYGate(q, -0.013544239679649621, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.567447776663788, 3);
  sqcRYGate(q, 0.2717839806217839, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6957372238284514, 3);
  sqcRYGate(q, 0.9366279541821341, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9634450907619216, 4);
  sqcRYGate(q, 0.3446695438450588, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.972365496992276, 4);
  sqcRYGate(q, -2.026292174994773, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8835776332926952, 5);
  sqcRYGate(q, -3.057866723514432, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3658953278322667, 5);
  sqcRYGate(q, -2.3009499696270534, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5801147908945303, 6);
  sqcRYGate(q, -0.5102715729941207, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.20412203665586895, 6);
  sqcRYGate(q, -1.6626650840649484, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0004007678528497039, 0);
  sqcRYGate(q, -2.7622488384211143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7684330123216774, 0);
  sqcRYGate(q, 2.0503681711402963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.67654948680024, 1);
  sqcRYGate(q, -0.49458151288620605, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1378144875008136, 1);
  sqcRYGate(q, -1.0649884923548587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7389176223923787, 2);
  sqcRYGate(q, 1.540228826494719, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.906986947304131, 2);
  sqcRYGate(q, -2.8563483836286414, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5881672180284987, 3);
  sqcRYGate(q, 1.0894989447986827, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0083571625701226, 3);
  sqcRYGate(q, 0.061386587477062694, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9499881289969725, 4);
  sqcRYGate(q, 1.1224258954922375, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0312904332824935, 4);
  sqcRYGate(q, 0.061461496174098386, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1540055315000899, 5);
  sqcRYGate(q, 0.7421984869244387, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5688421448976841, 5);
  sqcRYGate(q, -1.8830565795410754, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2142600089664297, 6);
  sqcRYGate(q, 0.9954809720503208, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0442552275568313, 6);
  sqcRYGate(q, 0.5670482384638823, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9473796929435307, 0);
  sqcRYGate(q, 2.298897901557608, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.351629516110757, 0);
  sqcRYGate(q, -0.007737632266520578, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8885321914610742, 1);
  sqcRYGate(q, -1.5680299006511103, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.569922188717283, 1);
  sqcRYGate(q, 2.4234875235767346, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5730969121529346, 2);
  sqcRYGate(q, -1.6162160878680183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5704651347593526, 2);
  sqcRYGate(q, -1.787787457097397, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.18717244191161345, 3);
  sqcRYGate(q, -2.20268935981417, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.570167449650456, 3);
  sqcRYGate(q, -3.07276832541764, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0828032602275464, 4);
  sqcRYGate(q, -1.4717917602989186, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9297295279833573, 4);
  sqcRYGate(q, -3.141556095259515, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3391781379378835, 5);
  sqcRYGate(q, 1.4259013444933486, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.141064677430363, 5);
  sqcRYGate(q, -0.16401559342248176, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1409475509151057, 6);
  sqcRYGate(q, 1.2877457942337722, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2233059430747912, 6);
  sqcRYGate(q, -3.0762452046784716, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.761520866292534, 0);
  sqcRYGate(q, -0.13889602200504217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.573152354227103, 0);
  sqcRYGate(q, -1.0792178012327378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5689915916895592, 1);
  sqcRYGate(q, 1.812433191817612, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5707891973854036, 1);
  sqcRYGate(q, -1.5650686459947005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.00013319208036399743, 2);
  sqcRYGate(q, -1.4663894979246297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1351801972884203, 2);
  sqcRYGate(q, 1.6828975890733409, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.487623761204623, 3);
  sqcRYGate(q, -0.25481645336709313, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1415786499060476, 3);
  sqcRYGate(q, 1.4719800912402996, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1139306319451676, 4);
  sqcRYGate(q, -1.7226889814012496, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.35979298048115643, 4);
  sqcRYGate(q, -0.0013200489441848266, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8830760216856434, 5);
  sqcRYGate(q, 0.18463366532205633, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.570392459937012, 5);
  sqcRYGate(q, 0.06116165533720963, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5690438483232994, 6);
  sqcRYGate(q, 2.5891781727398495, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5706798112036247, 6);
  sqcRYGate(q, 0.4085989485164691, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.307975234178801, 0);
  sqcRYGate(q, -0.8299307374162963, 1);
  sqcRYGate(q, -0.8283089930669147, 2);
  sqcRYGate(q, 2.313197633658762, 3);
  sqcRYGate(q, 2.5992269234652574, 4);
  sqcRYGate(q, 2.9294921508632674, 5);
  sqcRYGate(q, -0.8279785483662594, 6);
  sqcRYGate(q, 2.3125660149717713, 7);

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
