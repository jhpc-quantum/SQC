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

  sqcRYGate(q, -0.6972741622826052, 0);
  sqcRZGate(q, 2.6143891895275253, 0);
  sqcRYGate(q, 0.38224971916716405, 1);
  sqcRZGate(q, 1.402671736963704, 1);
  sqcRYGate(q, 1.2606543737283733, 2);
  sqcRZGate(q, 0.63104838385046, 2);
  sqcRYGate(q, -2.9026923668664226, 3);
  sqcRZGate(q, -2.593159312747912, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.678017991431487, 0);
  sqcRZGate(q, -0.9962438113521532, 0);
  sqcRYGate(q, 0.6263858024068316, 1);
  sqcRZGate(q, 1.054591956582687, 1);
  sqcRYGate(q, -1.045053967464411, 2);
  sqcRZGate(q, 1.933989722186814, 2);
  sqcRYGate(q, -2.1377657977882185, 3);
  sqcRZGate(q, 2.502759986796342, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6386266607781925, 0);
  sqcRZGate(q, -0.9074925935481283, 0);
  sqcRYGate(q, 2.4641439302880204, 1);
  sqcRZGate(q, -2.508127561720631, 1);
  sqcRYGate(q, 0.9067510524920768, 2);
  sqcRZGate(q, -1.3430971673621146, 2);
  sqcRYGate(q, -0.7642165404259796, 3);
  sqcRZGate(q, -1.5267796673465748, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5544995650353397, 0);
  sqcRZGate(q, 0.6403622842559864, 0);
  sqcRYGate(q, -2.2783531601593783, 1);
  sqcRZGate(q, -1.4098299412942872, 1);
  sqcRYGate(q, 2.572956783206636, 2);
  sqcRZGate(q, 1.7549246578823237, 2);
  sqcRYGate(q, -0.20811704425999272, 3);
  sqcRZGate(q, 2.447692724753326, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.4515870344880466, 0);
  sqcRZGate(q, -0.2631610635011529, 0);
  sqcRYGate(q, -2.4291266866452754, 1);
  sqcRZGate(q, 2.794196602501941, 1);
  sqcRYGate(q, 2.4465403985993412, 2);
  sqcRZGate(q, -1.4648059548282264, 2);
  sqcRYGate(q, 0.5382029942734166, 3);
  sqcRZGate(q, 2.92031980488864, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4446800613762798, 0);
  sqcRZGate(q, 0.37099647023261484, 0);
  sqcRYGate(q, -2.8809321059195705, 1);
  sqcRZGate(q, -0.6442509175079892, 1);
  sqcRYGate(q, -0.01706330711818032, 2);
  sqcRZGate(q, -0.5652621548397976, 2);
  sqcRYGate(q, 2.807782362894974, 3);
  sqcRZGate(q, -0.5505664148347313, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6627645401494044, 0);
  sqcRZGate(q, 1.901817788750649, 0);
  sqcRYGate(q, -2.292645769223186, 1);
  sqcRZGate(q, -1.5898314093838062, 1);
  sqcRYGate(q, -2.062766664160293, 2);
  sqcRZGate(q, -2.536559814953016, 2);
  sqcRYGate(q, 1.0451337408329993, 3);
  sqcRZGate(q, 1.1935204024497852, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5189865297916354, 0);
  sqcRZGate(q, -2.910915342643625, 0);
  sqcRYGate(q, 2.7783775137482603, 1);
  sqcRZGate(q, -1.842194069201506, 1);
  sqcRYGate(q, -0.1528455320258119, 2);
  sqcRZGate(q, 0.8572655590767617, 2);
  sqcRYGate(q, 1.646117473269838, 3);
  sqcRZGate(q, 2.916354424327621, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9281148147402298, 0);
  sqcRZGate(q, 2.281726726432442, 0);
  sqcRYGate(q, -1.7907472502605986, 1);
  sqcRZGate(q, -2.431957716950829, 1);
  sqcRYGate(q, 2.6523645975845214, 2);
  sqcRZGate(q, -2.8782611973554806, 2);
  sqcRYGate(q, 0.7095179622178326, 3);
  sqcRZGate(q, 0.12836894864566692, 3);

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
