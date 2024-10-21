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

  sqcRYGate(q, -2.0722395917539753, 0);
  sqcRYGate(q, -1.2854169988402377, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9711228257641995, 0);
  sqcRYGate(q, 0.8023373686334578, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1623214624812359, 2);
  sqcRYGate(q, -1.024626321753094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0627921381656584, 2);
  sqcRYGate(q, 0.07086588994522458, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.899965044500468, 1);
  sqcRYGate(q, 1.8635197180428253, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8037168250425806, 1);
  sqcRYGate(q, 2.226635044138767, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.530056896608542, 0);
  sqcRYGate(q, -0.9399046911515819, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8042907618646598, 0);
  sqcRYGate(q, 2.7944766639438217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.026135170736375276, 2);
  sqcRYGate(q, 0.5549910705406269, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.497908942337532, 2);
  sqcRYGate(q, -2.092473550942924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8074599447867952, 1);
  sqcRYGate(q, -2.5528299202765523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8189765953004144, 1);
  sqcRYGate(q, 0.384704412981415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3130037837431279, 0);
  sqcRYGate(q, 1.1294605777001157, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8868940553646105, 0);
  sqcRYGate(q, 1.8619046099612335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5323196990556676, 2);
  sqcRYGate(q, -0.6458204657733649, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3853904421450745, 2);
  sqcRYGate(q, 1.4289902484194839, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.28504869783677333, 1);
  sqcRYGate(q, -1.7024040830251899, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.36842075451123146, 1);
  sqcRYGate(q, -1.0972318650623327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3914263864203897, 0);
  sqcRYGate(q, -0.17397815637137376, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.762483752045285, 0);
  sqcRYGate(q, 2.355536412770534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9019122530094705, 2);
  sqcRYGate(q, -1.4646372467625672, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.811843205117917, 2);
  sqcRYGate(q, -0.29204096593465323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4513912629285974, 1);
  sqcRYGate(q, 2.2067321370919917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8317911762249413, 1);
  sqcRYGate(q, -1.4268191563558863, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2609047626890675, 0);
  sqcRYGate(q, 3.011013660822054, 1);
  sqcRYGate(q, 2.1250702819128326, 2);
  sqcRYGate(q, -2.864856833075969, 3);

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
