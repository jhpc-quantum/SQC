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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 0.08564186968444772, 0);
  sqcRZGate(q, 1.8399698099575952, 0);
  sqcRYGate(q, -2.807115470146332, 1);
  sqcRZGate(q, -1.6200015850645189, 1);
  sqcRYGate(q, -2.5150985640192878, 2);
  sqcRZGate(q, 2.371995568183012, 2);
  sqcRYGate(q, 0.4793086182291308, 3);
  sqcRZGate(q, 1.168673272702887, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5742550013606538, 0);
  sqcRZGate(q, -2.7543533760073737, 0);
  sqcRYGate(q, -0.48688533783932364, 1);
  sqcRZGate(q, -2.3310536738815535, 1);
  sqcRYGate(q, 2.708561799555989, 2);
  sqcRZGate(q, -2.7159478579218317, 2);
  sqcRYGate(q, 2.87110513672092, 3);
  sqcRZGate(q, 2.1182121373172365, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.684259815592253, 0);
  sqcRZGate(q, -0.021341565857710323, 0);
  sqcRYGate(q, -0.8857295186081888, 1);
  sqcRZGate(q, 1.5204500118815862, 1);
  sqcRYGate(q, -2.459656612283254, 2);
  sqcRZGate(q, -3.0838470415327337, 2);
  sqcRYGate(q, -2.9850070344912587, 3);
  sqcRZGate(q, -0.15268428403979775, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2814314865869142, 0);
  sqcRZGate(q, 1.7833868333365892, 0);
  sqcRYGate(q, -1.1340293239895365, 1);
  sqcRZGate(q, 1.0945294863351265, 1);
  sqcRYGate(q, -2.6639002138105066, 2);
  sqcRZGate(q, -2.2012962924386503, 2);
  sqcRYGate(q, -1.6840853859337184, 3);
  sqcRZGate(q, -1.4490809188234144, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3653589359368494, 0);
  sqcRZGate(q, -2.7229092797895236, 0);
  sqcRYGate(q, 1.4851663075332182, 1);
  sqcRZGate(q, 1.5757907975823269, 1);
  sqcRYGate(q, -0.0963726069548736, 2);
  sqcRZGate(q, -2.360589392111584, 2);
  sqcRYGate(q, 0.7344232949009019, 3);
  sqcRZGate(q, -2.027310107939159, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.722604082979373, 0);
  sqcRZGate(q, 1.7373032080681376, 0);
  sqcRYGate(q, 2.69065361192951, 1);
  sqcRZGate(q, 2.3771050818599893, 1);
  sqcRYGate(q, -0.632828967071603, 2);
  sqcRZGate(q, 1.1915975146193138, 2);
  sqcRYGate(q, -0.6061952971684521, 3);
  sqcRZGate(q, 2.330848896121395, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8504913534029177, 0);
  sqcRZGate(q, 0.4226810482479584, 0);
  sqcRYGate(q, -0.8297364793103892, 1);
  sqcRZGate(q, 2.0619558691359856, 1);
  sqcRYGate(q, -3.0699919205004087, 2);
  sqcRZGate(q, -2.62474526861131, 2);
  sqcRYGate(q, -0.7071466349996601, 3);
  sqcRZGate(q, 2.7565861908406286, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9018274682715646, 0);
  sqcRZGate(q, -2.2291062899532665, 0);
  sqcRYGate(q, 1.30522040447896, 1);
  sqcRZGate(q, -0.6410915495696247, 1);
  sqcRYGate(q, 2.930620086984919, 2);
  sqcRZGate(q, -1.0798422725668217, 2);
  sqcRYGate(q, -1.823470125192252, 3);
  sqcRZGate(q, -2.2139453355471104, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.05312675423205, 0);
  sqcRZGate(q, 0.4452670118761404, 0);
  sqcRYGate(q, -1.1866758964215822, 1);
  sqcRZGate(q, -2.8394438998056146, 1);
  sqcRYGate(q, -1.2117739992184828, 2);
  sqcRZGate(q, 2.1102329591756988, 2);
  sqcRYGate(q, -1.9239885916106807, 3);
  sqcRZGate(q, 3.1239343793227445, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.44713611575345896, 0);
  sqcRZGate(q, -1.9464269208402447, 0);
  sqcRYGate(q, -2.112106238454862, 1);
  sqcRZGate(q, -2.0019953038516443, 1);
  sqcRYGate(q, -1.8906103654814663, 2);
  sqcRZGate(q, -1.3527558550280634, 2);
  sqcRYGate(q, 2.7914856861085986, 3);
  sqcRZGate(q, 0.24022259534273704, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3171636274877936, 0);
  sqcRZGate(q, -0.9428109878398929, 0);
  sqcRYGate(q, 0.01771973402427829, 1);
  sqcRZGate(q, 0.6229461041812181, 1);
  sqcRYGate(q, -1.5548422308928371, 2);
  sqcRZGate(q, -0.20085965790846133, 2);
  sqcRYGate(q, 1.3839899422085076, 3);
  sqcRZGate(q, -0.33994180361093573, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9173249881810562, 0);
  sqcRZGate(q, 0.36012604696784317, 0);
  sqcRYGate(q, -0.7402395527660035, 1);
  sqcRZGate(q, -0.5605518290513832, 1);
  sqcRYGate(q, -0.5732475897997691, 2);
  sqcRZGate(q, 0.11093133143249337, 2);
  sqcRYGate(q, 2.2458166294881803, 3);
  sqcRZGate(q, 0.07540783072772418, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5728513368442045, 0);
  sqcRZGate(q, -2.9136007058811093, 0);
  sqcRYGate(q, -1.7560569189219741, 1);
  sqcRZGate(q, 1.3047113523739102, 1);
  sqcRYGate(q, -1.3043264073705967, 2);
  sqcRZGate(q, 0.18770886998450603, 2);
  sqcRYGate(q, 2.592831295974655, 3);
  sqcRZGate(q, -1.7545987024907852, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5072884055862844, 0);
  sqcRZGate(q, -2.477984335499733, 0);
  sqcRYGate(q, 2.8474654272596163, 1);
  sqcRZGate(q, 0.7994836023043216, 1);
  sqcRYGate(q, -1.1363736481387443, 2);
  sqcRZGate(q, 0.06216035265827547, 2);
  sqcRYGate(q, 2.0476397802083453, 3);
  sqcRZGate(q, -0.35323873510313764, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.057299731807428, 0);
  sqcRZGate(q, 0.34945957868197414, 0);
  sqcRYGate(q, -2.141975491931012, 1);
  sqcRZGate(q, 1.3548187555828068, 1);
  sqcRYGate(q, -2.1003897100173994, 2);
  sqcRZGate(q, -1.4764811424040598, 2);
  sqcRYGate(q, -0.5128617161615878, 3);
  sqcRZGate(q, 2.3474142489482657, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4754804578725824, 0);
  sqcRZGate(q, -1.5189744789591366, 0);
  sqcRYGate(q, 2.6585389895191414, 1);
  sqcRZGate(q, 0.8692351376701879, 1);
  sqcRYGate(q, 1.5212457541843771, 2);
  sqcRZGate(q, 2.5859898357140323, 2);
  sqcRYGate(q, 1.4024564120511105, 3);
  sqcRZGate(q, -0.9922332043831963, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.36494714897326386, 0);
  sqcRZGate(q, -0.9266548575356991, 0);
  sqcRYGate(q, -1.2716408689096994, 1);
  sqcRZGate(q, -0.8282501799647005, 1);
  sqcRYGate(q, 0.14481580176510442, 2);
  sqcRZGate(q, 0.23746675804378128, 2);
  sqcRYGate(q, 2.3013849638752744, 3);
  sqcRZGate(q, 1.5979729848467907, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.8511212637966663, 0);
  sqcRZGate(q, -2.9818268479482515, 0);
  sqcRYGate(q, 2.422414013197414, 1);
  sqcRZGate(q, -2.188727284260381, 1);
  sqcRYGate(q, 3.135660186952846, 2);
  sqcRZGate(q, -0.006968340069377634, 2);
  sqcRYGate(q, -3.077689496477798, 3);
  sqcRZGate(q, 2.337909136709509, 3);

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
