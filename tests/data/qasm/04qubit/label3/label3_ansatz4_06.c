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

  sqcRYGate(q, -0.8663410285855733, 0);
  sqcRZGate(q, -2.2038473819517543, 0);
  sqcRYGate(q, 1.066093149615281, 1);
  sqcRZGate(q, -0.34009040068984575, 1);
  sqcRYGate(q, 3.015407848040953, 2);
  sqcRZGate(q, -2.29023629170677, 2);
  sqcRYGate(q, -3.0785416274252917, 3);
  sqcRZGate(q, 3.068801252569042, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9336006551448917, 0);
  sqcRZGate(q, 2.4643697339511537, 0);
  sqcRYGate(q, -0.9244640286280408, 1);
  sqcRZGate(q, -2.800496046997349, 1);
  sqcRYGate(q, -1.9344800688792692, 2);
  sqcRZGate(q, 0.0766571060653476, 2);
  sqcRYGate(q, 0.22777058231045633, 3);
  sqcRZGate(q, -1.394808970026637, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8328048385708886, 0);
  sqcRZGate(q, -1.8487599525791856, 0);
  sqcRYGate(q, -1.4872815920365365, 1);
  sqcRZGate(q, 0.7833629972735688, 1);
  sqcRYGate(q, -1.2232811461616804, 2);
  sqcRZGate(q, -0.8376865233833319, 2);
  sqcRYGate(q, -1.6689387462197063, 3);
  sqcRZGate(q, -1.296236541961308, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.258930373897953, 0);
  sqcRZGate(q, 2.459415356305321, 0);
  sqcRYGate(q, 0.5344161740563489, 1);
  sqcRZGate(q, 2.5887892644484336, 1);
  sqcRYGate(q, 2.215601394011709, 2);
  sqcRZGate(q, -0.5425665420545895, 2);
  sqcRYGate(q, 0.4261177534126119, 3);
  sqcRZGate(q, 0.5277622823312451, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9818520111442903, 0);
  sqcRZGate(q, 0.976847822612468, 0);
  sqcRYGate(q, -0.15372633150823137, 1);
  sqcRZGate(q, 0.6416958349882479, 1);
  sqcRYGate(q, 1.48736817541789, 2);
  sqcRZGate(q, -0.5496132639142514, 2);
  sqcRYGate(q, -0.06719587196064847, 3);
  sqcRZGate(q, 1.5015771347881364, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.100660495923579, 0);
  sqcRZGate(q, 2.436927328936356, 0);
  sqcRYGate(q, 2.3077663179202714, 1);
  sqcRZGate(q, -1.2893589447986082, 1);
  sqcRYGate(q, -0.028413155054467547, 2);
  sqcRZGate(q, -2.442951125006744, 2);
  sqcRYGate(q, -1.2760137774260851, 3);
  sqcRZGate(q, 0.2997255737945, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9300372216361836, 0);
  sqcRZGate(q, -0.3750603461651769, 0);
  sqcRYGate(q, 0.003367894568163443, 1);
  sqcRZGate(q, -0.41662122988777384, 1);
  sqcRYGate(q, 2.93731430248884, 2);
  sqcRZGate(q, 0.30301180345747003, 2);
  sqcRYGate(q, 0.44841252781759283, 3);
  sqcRZGate(q, -1.7676860735271687, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7487995326272339, 0);
  sqcRZGate(q, -0.3032878661381489, 0);
  sqcRYGate(q, -2.0245615023874297, 1);
  sqcRZGate(q, 0.9337878723621831, 1);
  sqcRYGate(q, 1.156788288151252, 2);
  sqcRZGate(q, -2.7179811130980536, 2);
  sqcRYGate(q, 1.4980889635313863, 3);
  sqcRZGate(q, -2.1468782580896955, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.49571638102033, 0);
  sqcRZGate(q, 0.7963578856522924, 0);
  sqcRYGate(q, -1.0566091967203972, 1);
  sqcRZGate(q, -2.2343266518568936, 1);
  sqcRYGate(q, 2.7446496950608754, 2);
  sqcRZGate(q, -2.316405376471294, 2);
  sqcRYGate(q, -0.9595286771023743, 3);
  sqcRZGate(q, 0.1693264434761872, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.231688218920556, 0);
  sqcRZGate(q, 3.1117295738971626, 0);
  sqcRYGate(q, 2.640053365937616, 1);
  sqcRZGate(q, 2.069894593514643, 1);
  sqcRYGate(q, 1.380699582462721, 2);
  sqcRZGate(q, 1.371999042444726, 2);
  sqcRYGate(q, -0.48828563118111745, 3);
  sqcRZGate(q, -1.6054038845083403, 3);

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
