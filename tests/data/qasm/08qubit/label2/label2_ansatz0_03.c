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
  q = sqcQuantumCircuit(8);

  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.3518303692283655, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.5181102303219874, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.08047588339865713, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.26153598485882723, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.5675170677147408, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.05250506429046929, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.30792804038776733, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.2310303342774446, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.16437737789497878, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.008343376522351124, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.009691328493609187, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.15728280522501883, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.6070457406313964, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.31096965014497185, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.19483944759903676, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.126455368480681, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.7640055338410694, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.09510406864828887, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.15541604297441383, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.027874490785123787, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.15905379728073368, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, 0.344434716224678, 0);
  sqcRZGate(q, -0.18993135650203619, 0);
  sqcRXGate(q, 1.025583029893552, 1);
  sqcRZGate(q, -0.12698913735004616, 1);
  sqcRXGate(q, -0.054009976975468596, 2);
  sqcRZGate(q, -0.4654249603736169, 2);
  sqcRXGate(q, 0.2942901948818134, 3);
  sqcRZGate(q, -0.5672984031514134, 3);
  sqcRXGate(q, 0.17585595759344086, 4);
  sqcRZGate(q, -0.46919274130311045, 4);
  sqcRXGate(q, -0.013870453931827066, 5);
  sqcRZGate(q, 0.014865928286377146, 5);
  sqcRXGate(q, -0.6514577565220815, 6);
  sqcRZGate(q, -0.017562437152855173, 6);
  sqcRXGate(q, -0.38344628027297323, 7);
  sqcRZGate(q, -0.19613082611957086, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.00838900833548597, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.3199716957265988, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.0011246993965029995, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.13526270005366392, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.2794751730479859, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.07092630925837205, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.11571344709758828, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.12937273163783986, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.0735244130258321, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.01860508873091478, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.018110032177234125, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.008838638611897763, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.10741653204034135, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.9046389858473616, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.03729487071858431, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.03465781227016953, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.1108873611696477, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.06710698444219623, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.10184219475269972, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.4391660767499622, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.15126555731785482, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, 0.06025211365320374, 0);
  sqcRZGate(q, -0.4051609111576588, 0);
  sqcRXGate(q, 0.6805684780831954, 1);
  sqcRZGate(q, 0.2450516530226742, 1);
  sqcRXGate(q, 0.5338425229852796, 2);
  sqcRZGate(q, 0.2256785278718682, 2);
  sqcRXGate(q, -0.06045507536652953, 3);
  sqcRZGate(q, -0.06371699550683547, 3);
  sqcRXGate(q, 0.36034065654013187, 4);
  sqcRZGate(q, -0.097929683458089, 4);
  sqcRXGate(q, 0.04894114154996499, 5);
  sqcRZGate(q, -0.02155245812555498, 5);
  sqcRXGate(q, -0.12235976560411745, 6);
  sqcRZGate(q, 0.07937711260110189, 6);
  sqcRXGate(q, 0.10164436011803739, 7);
  sqcRZGate(q, -0.5267559257552399, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.07737687465642115, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.26952294312190117, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.05088377622843782, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.21114860605389016, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.40796364205490615, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.06822540790985256, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.14474494548557845, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2853457616379445, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.04298675366290397, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.01362529703649731, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.00434023423504266, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.0030844542160199705, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.07346947941099254, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.284157929410608, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.0310203494615544, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.005908443521339168, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.2089490829760396, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.06062952160972652, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.4495320118196686, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.30525381421946873, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.21294059148658137, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, 0.18601231102978566, 0);
  sqcRZGate(q, -0.39403800819188856, 0);
  sqcRXGate(q, 1.0562326082090123, 1);
  sqcRZGate(q, -0.062234763945467286, 1);
  sqcRXGate(q, 0.07719356336906515, 2);
  sqcRZGate(q, 0.2310060756634332, 2);
  sqcRXGate(q, -0.08169738376961336, 3);
  sqcRZGate(q, 0.1422382107010726, 3);
  sqcRXGate(q, -0.9620557112552333, 4);
  sqcRZGate(q, -0.38631717175606023, 4);
  sqcRXGate(q, -0.5687072640302524, 5);
  sqcRZGate(q, 1.2841698355768172, 5);
  sqcRXGate(q, 0.1421743553102927, 6);
  sqcRZGate(q, 0.6548229461757837, 6);
  sqcRXGate(q, -0.4192304500789026, 7);
  sqcRZGate(q, -0.2723826409633582, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.01780069052611405, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.2721577939365654, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.36221043782384915, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.27671651584704815, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.8891907798345652, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.13348291500750528, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.07188940779413977, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.7845288623030527, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.060150402808341996, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.0015724239725232285, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.009801847437779175, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.0035229593850256823, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.06681491468357846, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.06420118358911678, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.08164007895692921, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.03697009149598383, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.03456236107838397, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.057812552018146106, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.6356035356641394, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.5354772821803891, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.6837790206735742, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, 0.3999046896751269, 0);
  sqcRZGate(q, -0.40459430936164714, 0);
  sqcRXGate(q, 0.5348721293904758, 1);
  sqcRZGate(q, -0.03837062945902686, 1);
  sqcRXGate(q, 1.030688349460044, 2);
  sqcRZGate(q, -0.051886016984678505, 2);
  sqcRXGate(q, 0.04980624894078148, 3);
  sqcRZGate(q, 0.47596752728491215, 3);
  sqcRXGate(q, -0.9275257248115518, 4);
  sqcRZGate(q, 0.6715448273089419, 4);
  sqcRXGate(q, -0.7070167904765414, 5);
  sqcRZGate(q, -0.13800341532842442, 5);
  sqcRXGate(q, -0.47246551325715935, 6);
  sqcRZGate(q, 0.34391844269445193, 6);
  sqcRXGate(q, -0.004656302470281306, 7);
  sqcRZGate(q, -0.06721153248935405, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.8358290279259539, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.47694281820990364, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.0771277159733657, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.08135488202951958, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.002543779737719329, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.049249734757611116, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.8825188857146617, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.06562059140284113, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.04406987318470429, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.00030130233084329117, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.007990386714338426, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.0007022731364624642, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.08199722145495408, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.14978942593213296, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.5996363634017253, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.0692566519193061, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.011207605760051831, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.008793851430561841, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 1.091649937182492, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.27433189824923276, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.37083634573358093, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, 0.5023507417243804, 0);
  sqcRZGate(q, -0.5282374313016169, 0);
  sqcRXGate(q, 0.2817789622177579, 1);
  sqcRZGate(q, 0.1169031422955562, 1);
  sqcRXGate(q, 1.6209050772753177, 2);
  sqcRZGate(q, -0.70329349290482, 2);
  sqcRXGate(q, 0.030896102870760986, 3);
  sqcRZGate(q, 0.6894136432271257, 3);
  sqcRXGate(q, 0.06376450781595845, 4);
  sqcRZGate(q, -0.6367771398160911, 4);
  sqcRXGate(q, -0.06938858108665695, 5);
  sqcRZGate(q, -0.18702160738167667, 5);
  sqcRXGate(q, -0.6141364836494022, 6);
  sqcRZGate(q, -0.020855677298303885, 6);
  sqcRXGate(q, -0.25067099828848666, 7);
  sqcRZGate(q, -0.1557854982064303, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.172992049194829, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.4726299846311469, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.025749233186652, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.04043958987836051, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.059830172181024065, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.058641772790319936, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.4365280560060374, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.14267259054629128, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.013006304235461862, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.0393624025714145, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.05471666714648325, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.04838897326704904, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.8000498953258364, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.724920245465905, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.768101781241922, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.05789118222877518, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.060181833934819705, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.06187387323893322, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.7636759844063933, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.6998436998196705, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.7245798625723611, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, 0.623067930442996, 0);
  sqcRZGate(q, -0.7129815469174423, 0);
  sqcRXGate(q, -0.07287524563778505, 1);
  sqcRZGate(q, -0.15327363357925622, 1);
  sqcRXGate(q, 0.07764890866440567, 2);
  sqcRZGate(q, -0.04026320136893169, 2);
  sqcRXGate(q, -0.37438190437492525, 3);
  sqcRZGate(q, 0.09056818772975947, 3);
  sqcRXGate(q, -0.39985256557179594, 4);
  sqcRZGate(q, 0.15039980880662232, 4);
  sqcRXGate(q, -0.3404428405019204, 5);
  sqcRZGate(q, 0.10250532076856048, 5);
  sqcRXGate(q, -0.31504581229370837, 6);
  sqcRZGate(q, 0.12264823254096455, 6);
  sqcRXGate(q, -0.3467204134104973, 7);
  sqcRZGate(q, 0.1400930864127891, 7);

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
