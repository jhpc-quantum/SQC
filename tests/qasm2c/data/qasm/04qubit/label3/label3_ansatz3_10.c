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

  sqcRYGate(q, 0.9550442467974349, 0);
  sqcRZGate(q, -1.941842681940783, 0);
  sqcRYGate(q, -0.9409184979747492, 1);
  sqcRZGate(q, -2.8037869643596673, 1);
  sqcRYGate(q, 0.4818658641040825, 2);
  sqcRZGate(q, -1.4628602655918401, 2);
  sqcRYGate(q, -2.8916904296411987, 3);
  sqcRZGate(q, 1.2337839042008554, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.11658521678722966, 0);
  sqcRZGate(q, -0.22650536170141586, 0);
  sqcRYGate(q, -1.4873612364429791, 1);
  sqcRZGate(q, 0.3376371331998351, 1);
  sqcRYGate(q, 0.2058916112096447, 2);
  sqcRZGate(q, 0.26775122063626716, 2);
  sqcRYGate(q, 2.5144793290699576, 3);
  sqcRZGate(q, -0.6909750190305116, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.4136886905151576, 0);
  sqcRZGate(q, -1.1371153300322963, 0);
  sqcRYGate(q, -1.1446035793336053, 1);
  sqcRZGate(q, 1.8607465007424135, 1);
  sqcRYGate(q, 2.868282271550279, 2);
  sqcRZGate(q, -2.6168737325670985, 2);
  sqcRYGate(q, 2.118420096045147, 3);
  sqcRZGate(q, 1.119863069177252, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.3374851146459596, 0);
  sqcRZGate(q, 3.099772359684828, 0);
  sqcRYGate(q, -3.062030471917315, 1);
  sqcRZGate(q, -1.727981973440075, 1);
  sqcRYGate(q, 2.679285054593199, 2);
  sqcRZGate(q, 0.8793882937168532, 2);
  sqcRYGate(q, 1.7377278022179574, 3);
  sqcRZGate(q, 0.09696492525677962, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.8957357688622305, 0);
  sqcRZGate(q, 1.1963883629085397, 0);
  sqcRYGate(q, -0.6997316413293196, 1);
  sqcRZGate(q, 2.8797098129082195, 1);
  sqcRYGate(q, 2.5378525069041618, 2);
  sqcRZGate(q, 2.95034548525171, 2);
  sqcRYGate(q, 1.0753914894962473, 3);
  sqcRZGate(q, 0.6916984738910578, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.4545060692806797, 0);
  sqcRZGate(q, 3.07363731917548, 0);
  sqcRYGate(q, -2.465985297681621, 1);
  sqcRZGate(q, -2.7011283181645585, 1);
  sqcRYGate(q, 0.3131665232540657, 2);
  sqcRZGate(q, -2.2879165444775205, 2);
  sqcRYGate(q, -2.5666180691046847, 3);
  sqcRZGate(q, 1.689031523560594, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.7400755869258733, 0);
  sqcRZGate(q, 1.5755968630338895, 0);
  sqcRYGate(q, 0.14090446162031547, 1);
  sqcRZGate(q, -2.0909688701729046, 1);
  sqcRYGate(q, -2.2504280476400167, 2);
  sqcRZGate(q, 0.1868457833529975, 2);
  sqcRYGate(q, -1.5527028631305657, 3);
  sqcRZGate(q, 1.2301839489922308, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.88030615071796, 0);
  sqcRZGate(q, -1.5221056748354265, 0);
  sqcRYGate(q, -0.8592888799223543, 1);
  sqcRZGate(q, -1.4870696740631901, 1);
  sqcRYGate(q, 2.0178932598438792, 2);
  sqcRZGate(q, 1.9230194885669034, 2);
  sqcRYGate(q, -3.0016411028942813, 3);
  sqcRZGate(q, -1.8598878693396628, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.1833600531630292, 0);
  sqcRZGate(q, 3.1104910700306108, 0);
  sqcRYGate(q, -1.6174538191479444, 1);
  sqcRZGate(q, -2.0168717774669016, 1);
  sqcRYGate(q, -0.9940093225074477, 2);
  sqcRZGate(q, 2.64056278299078, 2);
  sqcRYGate(q, -1.301540704827647, 3);
  sqcRZGate(q, -1.6449344963691992, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8479802886977907, 0);
  sqcRZGate(q, 0.8941178705091382, 0);
  sqcRYGate(q, 0.17000405414748876, 1);
  sqcRZGate(q, -1.977292311674939, 1);
  sqcRYGate(q, 1.1846247028953045, 2);
  sqcRZGate(q, -1.4055353006144413, 2);
  sqcRYGate(q, -0.952115227014381, 3);
  sqcRZGate(q, 1.504595490541752, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.7237998474346066, 0);
  sqcRZGate(q, 0.9241397776853931, 0);
  sqcRYGate(q, 0.6486121005831044, 1);
  sqcRZGate(q, -1.2854566810798798, 1);
  sqcRYGate(q, -0.5519138533286707, 2);
  sqcRZGate(q, -1.3205703652338514, 2);
  sqcRYGate(q, 1.937407370711064, 3);
  sqcRZGate(q, 0.30009810649218566, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.1812883341646203, 0);
  sqcRZGate(q, 1.0520254320687112, 0);
  sqcRYGate(q, 2.361642012182935, 1);
  sqcRZGate(q, 2.594943889148361, 1);
  sqcRYGate(q, 1.252926733850916, 2);
  sqcRZGate(q, -3.032864906683955, 2);
  sqcRYGate(q, -0.6806399387416446, 3);
  sqcRZGate(q, -1.4464008364899417, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.3520310970437275, 0);
  sqcRZGate(q, -1.9096393755386227, 0);
  sqcRYGate(q, -1.0819038056718284, 1);
  sqcRZGate(q, 1.1656939338432517, 1);
  sqcRYGate(q, 1.7730810632454501, 2);
  sqcRZGate(q, -1.3110139827819411, 2);
  sqcRYGate(q, 2.1880526059582355, 3);
  sqcRZGate(q, -0.016743289452808462, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.13259181717613597, 0);
  sqcRZGate(q, 2.768369565592825, 0);
  sqcRYGate(q, -2.133070668111754, 1);
  sqcRZGate(q, -2.789368698479765, 1);
  sqcRYGate(q, -1.470174877689369, 2);
  sqcRZGate(q, -1.614107196517459, 2);
  sqcRYGate(q, -0.06829501823267536, 3);
  sqcRZGate(q, 0.44839051149837417, 3);

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
