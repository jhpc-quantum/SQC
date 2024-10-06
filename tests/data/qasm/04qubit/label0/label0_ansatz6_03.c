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

  sqcRYGate(q, 1.53952806693039, 0);
  sqcRYGate(q, -2.2575782448442725, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8652447919247725, 0);
  sqcRYGate(q, 2.959912996907785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.083368259275467, 1);
  sqcRYGate(q, -2.139786403050082, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2768978940103335, 1);
  sqcRYGate(q, -2.649647323686868, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1137251346481793, 2);
  sqcRYGate(q, 1.4761278373083417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5538218629863181, 2);
  sqcRYGate(q, 2.0057358943991934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3081113991467967, 0);
  sqcRYGate(q, 1.985760700511399, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.55942817503382, 0);
  sqcRYGate(q, -2.141189381467269, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1850665775073592, 1);
  sqcRYGate(q, 0.31797271037359154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8335463730606967, 1);
  sqcRYGate(q, 0.07454285371828005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8299650854480078, 2);
  sqcRYGate(q, 0.9470457943815935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8113112706426349, 2);
  sqcRYGate(q, -0.9414000976901722, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.33159614513127167, 0);
  sqcRYGate(q, -0.09501326135165744, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5047693898160306, 0);
  sqcRYGate(q, -1.4933989845421403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.883993922236212, 1);
  sqcRYGate(q, 1.8079882066094255, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.11190263082808993, 1);
  sqcRYGate(q, 0.9359521364712187, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5849703616263275, 2);
  sqcRYGate(q, 3.066633301238622, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.348003718205317, 2);
  sqcRYGate(q, 1.7956712969435271, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08547466537856155, 0);
  sqcRYGate(q, 0.6621959897307503, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4367900804331775, 0);
  sqcRYGate(q, 1.2543754225434878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8194503951817368, 1);
  sqcRYGate(q, 1.152728563560654, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0859728269318552, 1);
  sqcRYGate(q, 2.356946687371468, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8811611470386318, 2);
  sqcRYGate(q, -0.675619448057649, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1347889713175467, 2);
  sqcRYGate(q, -2.4139848569931415, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8017489662020783, 0);
  sqcRYGate(q, 1.2561327843630608, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7264008294709805, 0);
  sqcRYGate(q, -0.42994554550407743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0505068262290513, 1);
  sqcRYGate(q, 0.8426866011974674, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7237635537003464, 1);
  sqcRYGate(q, -1.3060959348042238, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.768356775958698, 2);
  sqcRYGate(q, 2.1581970999621833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9534252208967784, 2);
  sqcRYGate(q, -2.287072773015065, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2231669917100323, 0);
  sqcRYGate(q, -1.5773937624366452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.850261373133627, 0);
  sqcRYGate(q, -2.200093332303961, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6817837014085795, 1);
  sqcRYGate(q, 2.455969870269574, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.48107174765417793, 1);
  sqcRYGate(q, -0.0849057421663062, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9154554317523951, 2);
  sqcRYGate(q, 2.639454720423081, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.696991367651564, 2);
  sqcRYGate(q, -1.72075722084142, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5329238515679755, 0);
  sqcRYGate(q, 0.5681346303782285, 1);
  sqcRYGate(q, 0.7607359771278105, 2);
  sqcRYGate(q, 0.7827510672157949, 3);

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
