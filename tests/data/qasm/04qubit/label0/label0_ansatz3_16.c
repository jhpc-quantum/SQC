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

  sqcRYGate(q, -1.9677303415856642, 0);
  sqcRZGate(q, 1.4948013478355044, 0);
  sqcRYGate(q, 3.0499351540890505, 1);
  sqcRZGate(q, -0.9855080536873775, 1);
  sqcRYGate(q, -0.9602736774566774, 2);
  sqcRZGate(q, -0.39868059440350995, 2);
  sqcRYGate(q, 2.7822706199354825, 3);
  sqcRZGate(q, 2.3150044913948844, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.0120574556767536, 0);
  sqcRZGate(q, -2.6104788364304548, 0);
  sqcRYGate(q, -2.5053248413795233, 1);
  sqcRZGate(q, 2.4714562255590864, 1);
  sqcRYGate(q, -1.4523442302466705, 2);
  sqcRZGate(q, 0.9597421800739783, 2);
  sqcRYGate(q, 0.6586659656946938, 3);
  sqcRZGate(q, -2.191246749234617, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.489927572043251, 0);
  sqcRZGate(q, 0.4809891385415783, 0);
  sqcRYGate(q, -0.33434078076778034, 1);
  sqcRZGate(q, 3.04507045461462, 1);
  sqcRYGate(q, -0.2085980185077272, 2);
  sqcRZGate(q, 3.036060565098158, 2);
  sqcRYGate(q, 2.990621412574002, 3);
  sqcRZGate(q, -0.847266204040694, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5741393628813343, 0);
  sqcRZGate(q, 2.169296186253227, 0);
  sqcRYGate(q, -1.711708608276475, 1);
  sqcRZGate(q, 0.8457623356703465, 1);
  sqcRYGate(q, 1.326886472537453, 2);
  sqcRZGate(q, 2.063261083843016, 2);
  sqcRYGate(q, -1.1717644665319609, 3);
  sqcRZGate(q, 2.8922290896747507, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.9167130649225266, 0);
  sqcRZGate(q, 2.3102660031583184, 0);
  sqcRYGate(q, -1.3529473831064855, 1);
  sqcRZGate(q, -1.5283966368997735, 1);
  sqcRYGate(q, 1.9943662713732415, 2);
  sqcRZGate(q, -2.876924934367842, 2);
  sqcRYGate(q, -2.773634789303519, 3);
  sqcRZGate(q, 2.167478384586876, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.5526939580576173, 0);
  sqcRZGate(q, 0.22499745691645945, 0);
  sqcRYGate(q, -1.7003909074693793, 1);
  sqcRZGate(q, -0.9334788836793866, 1);
  sqcRYGate(q, -0.8154931401341683, 2);
  sqcRZGate(q, 0.1790112823432128, 2);
  sqcRYGate(q, -2.3945360142762913, 3);
  sqcRZGate(q, 0.5739539644244439, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9699736489863993, 0);
  sqcRZGate(q, 1.0643364693286306, 0);
  sqcRYGate(q, 2.1156104070288624, 1);
  sqcRZGate(q, 0.6323986030179274, 1);
  sqcRYGate(q, -3.118606495135471, 2);
  sqcRZGate(q, 1.3403220787171815, 2);
  sqcRYGate(q, -3.070064389263951, 3);
  sqcRZGate(q, -2.1044061489022785, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.154553874229559, 0);
  sqcRZGate(q, 2.538141990109059, 0);
  sqcRYGate(q, 2.277704883678542, 1);
  sqcRZGate(q, -1.3533595630858983, 1);
  sqcRYGate(q, -2.112587331956508, 2);
  sqcRZGate(q, -2.0487026230425074, 2);
  sqcRYGate(q, -1.1119210924689051, 3);
  sqcRZGate(q, 2.756923792333225, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.4752352738568366, 0);
  sqcRZGate(q, 1.811583685934025, 0);
  sqcRYGate(q, 0.9298350222798462, 1);
  sqcRZGate(q, 2.8989888486628783, 1);
  sqcRYGate(q, -3.030411590935998, 2);
  sqcRZGate(q, 0.7882406307798046, 2);
  sqcRYGate(q, 1.4528312485927288, 3);
  sqcRZGate(q, 2.7746190301444034, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8324025018567993, 0);
  sqcRZGate(q, -3.080652687992187, 0);
  sqcRYGate(q, -1.840636862957998, 1);
  sqcRZGate(q, 2.1595808203174283, 1);
  sqcRYGate(q, -3.0461261753575264, 2);
  sqcRZGate(q, -0.5336958757611934, 2);
  sqcRYGate(q, -3.0952547074590004, 3);
  sqcRZGate(q, 2.211266832207346, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.002052357224981982, 0);
  sqcRZGate(q, -1.823298662318832, 0);
  sqcRYGate(q, -2.881945351895618, 1);
  sqcRZGate(q, -1.115991216719598, 1);
  sqcRYGate(q, -1.3529608890149547, 2);
  sqcRZGate(q, 1.3330664555975464, 2);
  sqcRYGate(q, 2.970762475252232, 3);
  sqcRZGate(q, -2.7130138781966444, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.9387741192841523, 0);
  sqcRZGate(q, 2.23457436412734, 0);
  sqcRYGate(q, 0.8566000851900277, 1);
  sqcRZGate(q, 2.1288611435844995, 1);
  sqcRYGate(q, 2.3128131727857624, 2);
  sqcRZGate(q, 0.21883187331825837, 2);
  sqcRYGate(q, 1.628374408274702, 3);
  sqcRZGate(q, -1.253294768622804, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.5693599545349617, 0);
  sqcRZGate(q, -1.7908759056596966, 0);
  sqcRYGate(q, 2.0977173042265456, 1);
  sqcRZGate(q, 2.3975128313669565, 1);
  sqcRYGate(q, -1.1464513917697827, 2);
  sqcRZGate(q, 2.1775194043003547, 2);
  sqcRYGate(q, 0.8043377113907387, 3);
  sqcRZGate(q, -1.6081930633989208, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.481001632654957, 0);
  sqcRZGate(q, 0.3344637892298623, 0);
  sqcRYGate(q, 2.5920832231602016, 1);
  sqcRZGate(q, -2.6212915248391213, 1);
  sqcRYGate(q, -0.2591946828961982, 2);
  sqcRZGate(q, -0.7543847768667868, 2);
  sqcRYGate(q, -2.336252202245895, 3);
  sqcRZGate(q, -1.8379255140019355, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.940308489551265, 0);
  sqcRZGate(q, -1.1947505277056805, 0);
  sqcRYGate(q, 0.9426957358690315, 1);
  sqcRZGate(q, 2.5384621544374326, 1);
  sqcRYGate(q, -2.293228967934537, 2);
  sqcRZGate(q, 2.8092302782237235, 2);
  sqcRYGate(q, 2.9038877557197824, 3);
  sqcRZGate(q, -2.7938340909019663, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.0522761868234265, 0);
  sqcRZGate(q, 1.571519606859613, 0);
  sqcRYGate(q, 1.9534650634539412, 1);
  sqcRZGate(q, -1.357420352539677, 1);
  sqcRYGate(q, -0.9323853359177182, 2);
  sqcRZGate(q, 3.136675737250697, 2);
  sqcRYGate(q, 2.5244167639854904, 3);
  sqcRZGate(q, -0.5484599803782293, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9609671413534316, 0);
  sqcRZGate(q, 1.8012002280729744, 0);
  sqcRYGate(q, -0.3770705669395924, 1);
  sqcRZGate(q, 0.5126431540315171, 1);
  sqcRYGate(q, 0.9914816191437238, 2);
  sqcRZGate(q, -2.792746945314123, 2);
  sqcRYGate(q, 0.3613901369582494, 3);
  sqcRZGate(q, -1.8488604140254994, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.6063300879235777, 0);
  sqcRZGate(q, -0.9812526433451685, 0);
  sqcRYGate(q, -2.1537066681442445, 1);
  sqcRZGate(q, -0.14794949860798426, 1);
  sqcRYGate(q, 0.7658891434538647, 2);
  sqcRZGate(q, 0.4755449980080181, 2);
  sqcRYGate(q, 0.051810943889230465, 3);
  sqcRZGate(q, 0.6042105230038901, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.8367702698259643, 0);
  sqcRZGate(q, -2.2172993612904195, 0);
  sqcRYGate(q, -1.4876607917119238, 1);
  sqcRZGate(q, -1.4755039248997734, 1);
  sqcRYGate(q, -1.2210435526600516, 2);
  sqcRZGate(q, -2.854248553233979, 2);
  sqcRYGate(q, 0.6402953563453746, 3);
  sqcRZGate(q, 0.037129218334318814, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9139876309771591, 0);
  sqcRZGate(q, -1.9056768228247478, 0);
  sqcRYGate(q, 2.4728774625770162, 1);
  sqcRZGate(q, 1.31643630634385, 1);
  sqcRYGate(q, -1.8846753706501929, 2);
  sqcRZGate(q, -0.08173414620871709, 2);
  sqcRYGate(q, 1.6585390360477101, 3);
  sqcRZGate(q, 1.5692054118635976, 3);

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
