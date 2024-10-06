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

  sqcRYGate(q, 0.6610894546459791, 0);
  sqcRYGate(q, -0.4038579686070529, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.527569771213612, 0);
  sqcRYGate(q, -2.8331927670998236, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.16452311735612635, 2);
  sqcRYGate(q, 1.0574517210179966, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3094054314708314, 2);
  sqcRYGate(q, -2.0130174056302774, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.13090218740686407, 0);
  sqcRYGate(q, -2.1878047937374405, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2677414175181556, 0);
  sqcRYGate(q, 1.1697521898186487, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9160047857682696, 1);
  sqcRYGate(q, -1.1833213673503824, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5428501391291722, 1);
  sqcRYGate(q, -2.6035711762406795, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.629159077630009, 0);
  sqcRYGate(q, 0.1261940277092499, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9713406526680686, 0);
  sqcRYGate(q, -0.8221029659257084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7584224677670957, 2);
  sqcRYGate(q, 1.9015167742544925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.28537387289665284, 2);
  sqcRYGate(q, -2.0170528949112008, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8969389722730274, 0);
  sqcRYGate(q, -1.6702010453857783, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8506949183210186, 0);
  sqcRYGate(q, 2.383016188571368, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3951198994696252, 1);
  sqcRYGate(q, 3.0689354307401264, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.674259036105277, 1);
  sqcRYGate(q, 0.41282172872533435, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8928867960191418, 0);
  sqcRYGate(q, -0.1699968182587222, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.594977378705205, 0);
  sqcRYGate(q, 0.23872855733187937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6213731992493676, 2);
  sqcRYGate(q, -2.216964545928861, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5388378053284635, 2);
  sqcRYGate(q, -0.41509307218327757, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1684506712601603, 0);
  sqcRYGate(q, 1.0938996304353894, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9706431607621004, 0);
  sqcRYGate(q, 2.5672824194068893, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.522597173911731, 1);
  sqcRYGate(q, -2.178825426939138, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2963467711203511, 1);
  sqcRYGate(q, -1.616929298983434, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7432793727297259, 0);
  sqcRYGate(q, 1.6733403682884678, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5194966019653222, 0);
  sqcRYGate(q, 0.8447283219954835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5021302201906597, 2);
  sqcRYGate(q, 2.4502524808534023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0371794347578196, 2);
  sqcRYGate(q, -0.42962512222050986, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.23230267487770093, 0);
  sqcRYGate(q, 1.8584915604095535, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0166319910698434, 0);
  sqcRYGate(q, 1.4310823031544821, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4806496027975715, 1);
  sqcRYGate(q, -0.09047969698094782, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6724407619806194, 1);
  sqcRYGate(q, -0.7911210125520697, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.114156232781137, 0);
  sqcRYGate(q, 0.937016759981157, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7731086041118527, 0);
  sqcRYGate(q, -0.7500518680275257, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.028330900709530767, 2);
  sqcRYGate(q, 0.49403211413378, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8939008835394437, 2);
  sqcRYGate(q, 1.4188398934237805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6779300993635595, 0);
  sqcRYGate(q, 2.128090597145742, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4548348773662774, 0);
  sqcRYGate(q, 1.3080112160338153, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4147207453989883, 1);
  sqcRYGate(q, -2.9006946359248835, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9569794767040585, 1);
  sqcRYGate(q, 2.782571770595711, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.148064908514775, 0);
  sqcRYGate(q, -0.8553488703273235, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9137719037750944, 0);
  sqcRYGate(q, -1.9259044177261027, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.636411302981429, 2);
  sqcRYGate(q, 2.9307549852567365, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.45851888789489276, 2);
  sqcRYGate(q, 3.139988219317464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.032811297832514, 0);
  sqcRYGate(q, -0.7706927171988841, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.253601561112463, 0);
  sqcRYGate(q, -0.7205892147696318, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.157713828977611, 1);
  sqcRYGate(q, -2.5020721641906944, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7375044090406355, 1);
  sqcRYGate(q, -1.2068203820442784, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4228132129933257, 0);
  sqcRYGate(q, 0.15816035552483432, 1);
  sqcRYGate(q, -2.4392073172160114, 2);
  sqcRYGate(q, -2.022618133198276, 3);

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
