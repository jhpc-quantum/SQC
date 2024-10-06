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

  sqcRYGate(q, -2.80788255941605, 0);
  sqcRYGate(q, 2.158859557128428, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8056978670327084, 0);
  sqcRYGate(q, 2.353089048514667, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6997949269097419, 1);
  sqcRYGate(q, -1.5156505472338269, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7858737529641164, 1);
  sqcRYGate(q, 0.06301804171355804, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6002070042828844, 2);
  sqcRYGate(q, -2.735096823061412, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.345901304399696, 2);
  sqcRYGate(q, -0.9391603449368071, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5841341472541592, 3);
  sqcRYGate(q, 0.6768466499209062, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5967920103077904, 3);
  sqcRYGate(q, -1.7218663126634663, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.49066196513526356, 4);
  sqcRYGate(q, 1.7911181375464755, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1098210268456539, 4);
  sqcRYGate(q, 2.848894957555642, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2932360474442484, 5);
  sqcRYGate(q, -2.9242829155498833, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1744381032696927, 5);
  sqcRYGate(q, 0.0025066605806731783, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.06478738484174683, 6);
  sqcRYGate(q, 0.9141111685682152, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.010992295179962525, 6);
  sqcRYGate(q, 1.9510524178206248, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8220045650277052, 0);
  sqcRYGate(q, -1.009474826711843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.28000009045784624, 0);
  sqcRYGate(q, 0.218110248321417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6342533099367627, 1);
  sqcRYGate(q, 1.7265800674683125, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.979370380746591, 1);
  sqcRYGate(q, 3.1021068920319097, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.678189622757353, 2);
  sqcRYGate(q, 1.731671040663425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0002689839236023061, 2);
  sqcRYGate(q, -0.00018986706417845056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0358319653303667, 3);
  sqcRYGate(q, 0.4946567563276538, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.380497055272644, 3);
  sqcRYGate(q, 0.5891146269185703, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0155935429681078, 4);
  sqcRYGate(q, -1.7669270363713716, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0017420974022881452, 4);
  sqcRYGate(q, 0.04550682520557219, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1302383347856253, 5);
  sqcRYGate(q, 2.6413785759985124, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7297200224330616, 5);
  sqcRYGate(q, -3.1413476023056086, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.33584602788221984, 6);
  sqcRYGate(q, 2.4231773562503762, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1233981753542643, 6);
  sqcRYGate(q, 1.9923691155838013, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8122357239109927, 0);
  sqcRYGate(q, 3.064628689024924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8102030859685663, 0);
  sqcRYGate(q, -0.44452575553802764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9837888881421912, 1);
  sqcRYGate(q, 0.8441771741033682, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6715191226478225, 1);
  sqcRYGate(q, 2.7762506791821893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5824572196581608, 2);
  sqcRYGate(q, -2.7130143771155386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.128256937912323, 2);
  sqcRYGate(q, 3.0769545098015763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5904678823653062, 3);
  sqcRYGate(q, -0.46797152268654746, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3062816256218666, 3);
  sqcRYGate(q, -2.5998751380700518, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.22463459253754706, 4);
  sqcRYGate(q, 2.745028513676514, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.01597477631505928, 4);
  sqcRYGate(q, -0.7829681278869867, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5676006210313802, 5);
  sqcRYGate(q, 0.9850722875175855, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9399419761550378, 5);
  sqcRYGate(q, -0.44173103530600294, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4782540545054546, 6);
  sqcRYGate(q, 1.8668541060011359, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.941799210948578, 6);
  sqcRYGate(q, -2.7308012111666544, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5888000899803423, 0);
  sqcRYGate(q, -0.32313442685008376, 1);
  sqcRYGate(q, -3.1293363308679067, 2);
  sqcRYGate(q, 0.602028497147405, 3);
  sqcRYGate(q, -1.121953455751033, 4);
  sqcRYGate(q, -3.139270788556011, 5);
  sqcRYGate(q, 3.1164670423204623, 6);
  sqcRYGate(q, 0.24526326982755012, 7);

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
