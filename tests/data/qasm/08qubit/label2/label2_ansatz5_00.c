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

  sqcRYGate(q, -2.0297138553432856, 0);
  sqcRYGate(q, -0.6323391038711161, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5278612660742823, 0);
  sqcRYGate(q, -0.5859448470775703, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6569972422665047, 2);
  sqcRYGate(q, -1.8173833561428658, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7516611643357315, 2);
  sqcRYGate(q, -2.2603776554458497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.148582996542106, 4);
  sqcRYGate(q, 0.19221937774002384, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3291419696649092, 4);
  sqcRYGate(q, -2.9219581762005262, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.791497547231683, 6);
  sqcRYGate(q, -1.7161261121313498, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.514076985816077, 6);
  sqcRYGate(q, 0.46647374486737053, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.29532095591720364, 1);
  sqcRYGate(q, -1.657922943824735, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.009634853178164416, 1);
  sqcRYGate(q, 0.8924501559106348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.937858458574864, 3);
  sqcRYGate(q, -2.7444892914259817, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0747126664996887, 3);
  sqcRYGate(q, -0.0729847174056632, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7589919532269698, 5);
  sqcRYGate(q, 2.7626411923241103, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.404786596712651, 5);
  sqcRYGate(q, -0.06959684640190607, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.071724109341218, 0);
  sqcRYGate(q, 1.2406220040960951, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.98679394338886, 0);
  sqcRYGate(q, -0.5563350629662924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.49032916404868465, 2);
  sqcRYGate(q, -1.6062911670607285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8369256355414142, 2);
  sqcRYGate(q, -1.3634473849646573, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.242115948017766, 4);
  sqcRYGate(q, 2.8802910336105323, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1334822082020706, 4);
  sqcRYGate(q, 0.001097359790280805, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.726841602980143, 6);
  sqcRYGate(q, -1.2404041204422596, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.09334563744749794, 6);
  sqcRYGate(q, 2.3452771591261437, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2767402202046325, 1);
  sqcRYGate(q, -0.23706428262928103, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0862157946502715, 1);
  sqcRYGate(q, -2.947955055675267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.11884963957826147, 3);
  sqcRYGate(q, 0.749919475333029, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.732989341857871, 3);
  sqcRYGate(q, -2.801450361479506, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5108678230262482, 5);
  sqcRYGate(q, 2.364924615250927, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.31007293158464727, 5);
  sqcRYGate(q, 3.0632714919475683, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.29461230262559246, 0);
  sqcRYGate(q, -2.5933452492344324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.45544765014138, 0);
  sqcRYGate(q, -0.6733592176638385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2398143073420866, 2);
  sqcRYGate(q, 1.4196597332829706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0754806262151417, 2);
  sqcRYGate(q, -3.112692275695863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4655543875547936, 4);
  sqcRYGate(q, -2.9227556652487556, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1084643065368023, 4);
  sqcRYGate(q, 0.07293969167302983, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.414354411544022, 6);
  sqcRYGate(q, -1.2258572638495704, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9624422559881778, 6);
  sqcRYGate(q, -1.4903772085952296, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.26639701941551436, 1);
  sqcRYGate(q, 0.9506970213987646, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0007389086380554863, 1);
  sqcRYGate(q, 0.08568841834746059, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7641955944663426, 3);
  sqcRYGate(q, -1.574633136879882, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4095869160376373, 3);
  sqcRYGate(q, 0.33689740252173495, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6525705813706555, 5);
  sqcRYGate(q, 0.11778851551559007, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.136214082984814, 5);
  sqcRYGate(q, 0.00079441984269657, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6409143224312714, 0);
  sqcRYGate(q, -2.9101754087051983, 1);
  sqcRYGate(q, 0.9961265218945058, 2);
  sqcRYGate(q, 1.5204312057456875, 3);
  sqcRYGate(q, 0.025922207358052063, 4);
  sqcRYGate(q, -2.769394476652254, 5);
  sqcRYGate(q, 2.2978562518612597, 6);
  sqcRYGate(q, -1.3938273516719144, 7);

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
