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

  sqcRYGate(q, -2.7431370596458344, 0);
  sqcRZGate(q, -0.5032952103445095, 0);
  sqcRYGate(q, 1.5190109414300237, 1);
  sqcRZGate(q, 2.011327048395096, 1);
  sqcRYGate(q, 2.5023434080100997, 2);
  sqcRZGate(q, -2.531125282103484, 2);
  sqcRYGate(q, -1.772841760944758, 3);
  sqcRZGate(q, -2.888800590104846, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7323316968589078, 0);
  sqcRZGate(q, 0.9191384241023757, 0);
  sqcRYGate(q, 2.1937287994064176, 1);
  sqcRZGate(q, 0.4352510853418181, 1);
  sqcRYGate(q, 1.3775148946631663, 2);
  sqcRZGate(q, -2.8663097470735406, 2);
  sqcRYGate(q, -0.6829768934027795, 3);
  sqcRZGate(q, 1.831614317551409, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.179467506338193, 0);
  sqcRZGate(q, 2.5524220035808294, 0);
  sqcRYGate(q, 1.3212711818871923, 1);
  sqcRZGate(q, -2.1099356880929987, 1);
  sqcRYGate(q, 1.326538913375439, 2);
  sqcRZGate(q, 1.2643173200803208, 2);
  sqcRYGate(q, 2.094707050160082, 3);
  sqcRZGate(q, -0.8247118527544872, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.835109802846212, 0);
  sqcRZGate(q, 1.0653539124437081, 0);
  sqcRYGate(q, 2.1021103419638636, 1);
  sqcRZGate(q, 0.9454370271399554, 1);
  sqcRYGate(q, -2.196518872078298, 2);
  sqcRZGate(q, 0.9969328347106866, 2);
  sqcRYGate(q, 0.24297892648398986, 3);
  sqcRZGate(q, -0.9468765568946979, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6432093629807492, 0);
  sqcRZGate(q, -0.5198508398597883, 0);
  sqcRYGate(q, 1.055084842255033, 1);
  sqcRZGate(q, 0.501802845005833, 1);
  sqcRYGate(q, -1.7942516344617117, 2);
  sqcRZGate(q, 2.6926213027419745, 2);
  sqcRYGate(q, 0.1616480672670324, 3);
  sqcRZGate(q, 1.024500507702965, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.818585138819578, 0);
  sqcRZGate(q, -2.4770224285314515, 0);
  sqcRYGate(q, -2.513979457446976, 1);
  sqcRZGate(q, 1.9481063552346256, 1);
  sqcRYGate(q, 1.1748542463554417, 2);
  sqcRZGate(q, -0.6685497299979897, 2);
  sqcRYGate(q, -2.6098985423801904, 3);
  sqcRZGate(q, 0.2983244739165318, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.7187669235913976, 0);
  sqcRZGate(q, -2.925471887666819, 0);
  sqcRYGate(q, 0.07761079439220811, 1);
  sqcRZGate(q, 1.3755738569897673, 1);
  sqcRYGate(q, 1.1838297930529045, 2);
  sqcRZGate(q, -1.6331296215565108, 2);
  sqcRYGate(q, -2.019006941697259, 3);
  sqcRZGate(q, -3.031008835127564, 3);

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
