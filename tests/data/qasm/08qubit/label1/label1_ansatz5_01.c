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

  sqcRYGate(q, 0.2365254269492707, 0);
  sqcRYGate(q, -0.23867460163338924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3559432490562974, 0);
  sqcRYGate(q, 2.4143624456946213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3125668434570337, 2);
  sqcRYGate(q, -2.3633057208877406, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9005586064805878, 2);
  sqcRYGate(q, -3.1364999690837325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9248704633929155, 4);
  sqcRYGate(q, -1.2618680639877702, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8301723447276341, 4);
  sqcRYGate(q, -0.7859661624198794, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5227327405715227, 6);
  sqcRYGate(q, 0.23187040532800918, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.582942418214053, 6);
  sqcRYGate(q, 2.396750278539905, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.05033591667987115, 1);
  sqcRYGate(q, -0.5625898527403828, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3879785768624121, 1);
  sqcRYGate(q, 2.4627654011377116, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.363079749590943, 3);
  sqcRYGate(q, 1.580912613751648, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6920460296861948, 3);
  sqcRYGate(q, 1.0854508151181594, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.715705901436507, 5);
  sqcRYGate(q, 3.1008171345334414, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.202772142311562, 5);
  sqcRYGate(q, 0.8400395352509599, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0875325920359247, 0);
  sqcRYGate(q, -1.912726446955493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.22602446038615479, 0);
  sqcRYGate(q, -0.8973284055901551, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5676202669786408, 2);
  sqcRYGate(q, 2.6081869414325642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.34098249580247586, 2);
  sqcRYGate(q, -0.6044756887114673, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.348767908739271, 4);
  sqcRYGate(q, -0.8632964341879141, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.11818063498568157, 4);
  sqcRYGate(q, 2.685288342415538, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5770387849567031, 6);
  sqcRYGate(q, -1.8428624654713988, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2876473919828415, 6);
  sqcRYGate(q, -0.3076327547161677, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.302887003615851, 1);
  sqcRYGate(q, 2.67195409854828, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2608690056513803, 1);
  sqcRYGate(q, -0.40842915789770445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7794978291751065, 3);
  sqcRYGate(q, 1.7431915961931246, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0492144325182482, 3);
  sqcRYGate(q, 2.8446197062190772, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0622830287280243, 5);
  sqcRYGate(q, 2.748727531281054, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.13451651745556592, 5);
  sqcRYGate(q, -0.7130300264935618, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.12865085515760555, 0);
  sqcRYGate(q, 2.6986773551812204, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.145341782817221, 0);
  sqcRYGate(q, -1.8417989220587834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2525293487575144, 2);
  sqcRYGate(q, 0.9412602654364943, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9614844142428867, 2);
  sqcRYGate(q, -2.534777553243833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3746527442303726, 4);
  sqcRYGate(q, -0.3023112659688705, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3720292313597467, 4);
  sqcRYGate(q, 2.6568459259152437, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.08126779421770713, 6);
  sqcRYGate(q, -1.298651728653681, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.410436862851379, 6);
  sqcRYGate(q, 2.868670475116539, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.746506739751224, 1);
  sqcRYGate(q, -0.9967488081421281, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9197492880317499, 1);
  sqcRYGate(q, -1.506490558298312, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2349817271189056, 3);
  sqcRYGate(q, -0.25897650753058127, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.039184947284901, 3);
  sqcRYGate(q, -2.839887104522844, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.392118416583545, 5);
  sqcRYGate(q, 2.9373809657679475, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.475943619742994, 5);
  sqcRYGate(q, -1.250055313984469, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1429689098878217, 0);
  sqcRYGate(q, -0.1698702653074041, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.550493437217491, 0);
  sqcRYGate(q, -1.184719552737594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8731616190332695, 2);
  sqcRYGate(q, -2.056280479678616, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07479631624921118, 2);
  sqcRYGate(q, 3.0555931400116814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.693746996668796, 4);
  sqcRYGate(q, 2.7689232148828804, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.01291546373724195, 4);
  sqcRYGate(q, -3.0424051238688046, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6285241797141765, 6);
  sqcRYGate(q, 1.6510325888343365, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3401177577891267, 6);
  sqcRYGate(q, 2.4564282494533396, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2713538044783415, 1);
  sqcRYGate(q, 0.5837257099356181, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8594602333530923, 1);
  sqcRYGate(q, 0.4534598961353522, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5329230982365978, 3);
  sqcRYGate(q, 1.1737465830215248, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.016859944307667, 3);
  sqcRYGate(q, 2.887568557854697, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8777719968168682, 5);
  sqcRYGate(q, 2.520156222331415, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.30423420961227254, 5);
  sqcRYGate(q, 2.7541668669360053, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8328359808564496, 0);
  sqcRYGate(q, -1.7717286224169846, 1);
  sqcRYGate(q, 0.30440663873657225, 2);
  sqcRYGate(q, -1.3016822678757975, 3);
  sqcRYGate(q, -0.23319469594619557, 4);
  sqcRYGate(q, -2.4029996846119044, 5);
  sqcRYGate(q, -0.6974591531330399, 6);
  sqcRYGate(q, 2.1963488493311987, 7);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
