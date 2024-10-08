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

  sqcRYGate(q, -1.8213597265742267, 0);
  sqcRZGate(q, 0.4053484584105362, 0);
  sqcRYGate(q, -0.40536080035503286, 1);
  sqcRZGate(q, 1.3946807901026526, 1);
  sqcRYGate(q, 0.9639076717240531, 2);
  sqcRZGate(q, 1.2010455548197996, 2);
  sqcRYGate(q, 0.4270344029887695, 3);
  sqcRZGate(q, -0.6854584649505452, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.928274640594738, 0);
  sqcRZGate(q, -2.9095187753651213, 0);
  sqcRYGate(q, -0.8740078622982095, 1);
  sqcRZGate(q, -1.62134075359824, 1);
  sqcRYGate(q, -0.9762545972075104, 2);
  sqcRZGate(q, 0.8036718511196433, 2);
  sqcRYGate(q, -1.5360051669464951, 3);
  sqcRZGate(q, 2.6050352502513667, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.893357309216194, 0);
  sqcRZGate(q, -0.41686329207329964, 0);
  sqcRYGate(q, 1.5001967854886802, 1);
  sqcRZGate(q, 0.8180347716723366, 1);
  sqcRYGate(q, -1.4045969383749304, 2);
  sqcRZGate(q, -1.0475027413947977, 2);
  sqcRYGate(q, 2.962400500169285, 3);
  sqcRZGate(q, 2.9247199317482266, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.9605484661401218, 0);
  sqcRZGate(q, 1.3747981571403907, 0);
  sqcRYGate(q, -1.156695767061357, 1);
  sqcRZGate(q, 2.7344633557662075, 1);
  sqcRYGate(q, -0.20433791953028696, 2);
  sqcRZGate(q, -0.9441816222624925, 2);
  sqcRYGate(q, -2.4235442217679117, 3);
  sqcRZGate(q, -1.1070268609238525, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.2816276964220998, 0);
  sqcRZGate(q, 2.0798132893455983, 0);
  sqcRYGate(q, 2.1491424606019964, 1);
  sqcRZGate(q, 0.3225441416722825, 1);
  sqcRYGate(q, -2.350332706661099, 2);
  sqcRZGate(q, 2.3988746000923595, 2);
  sqcRYGate(q, -0.31729204901800084, 3);
  sqcRZGate(q, 2.212994850848726, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.7545994102557345, 0);
  sqcRZGate(q, -1.7258333848168783, 0);
  sqcRYGate(q, 1.2305188822256938, 1);
  sqcRZGate(q, -1.0404897554158712, 1);
  sqcRYGate(q, 1.2833653057277736, 2);
  sqcRZGate(q, -2.6806602421836696, 2);
  sqcRYGate(q, 0.49222990974839964, 3);
  sqcRZGate(q, 2.264457221095821, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.114132611064258, 0);
  sqcRZGate(q, -0.6535756802943692, 0);
  sqcRYGate(q, 0.4669669861036622, 1);
  sqcRZGate(q, -1.728678127737708, 1);
  sqcRYGate(q, -1.80088065105056, 2);
  sqcRZGate(q, 2.729362373439992, 2);
  sqcRYGate(q, -0.923134889094447, 3);
  sqcRZGate(q, 2.7562965699437862, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.2543182519169505, 0);
  sqcRZGate(q, 1.134215982909227, 0);
  sqcRYGate(q, -2.2600109945508193, 1);
  sqcRZGate(q, 1.1240984738562911, 1);
  sqcRYGate(q, 2.9454289079526417, 2);
  sqcRZGate(q, -1.344032685333162, 2);
  sqcRYGate(q, 2.6629558942788067, 3);
  sqcRZGate(q, 2.2892675384418397, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.7997211209983575, 0);
  sqcRZGate(q, 0.7315507914480691, 0);
  sqcRYGate(q, -0.6349401023474553, 1);
  sqcRZGate(q, -3.020272975764704, 1);
  sqcRYGate(q, -1.019500290674599, 2);
  sqcRZGate(q, 1.9433165921960693, 2);
  sqcRYGate(q, 0.6271751996695549, 3);
  sqcRZGate(q, 0.0038703195750754804, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5023482215288668, 0);
  sqcRZGate(q, 0.1411983945812471, 0);
  sqcRYGate(q, 0.27073725061488485, 1);
  sqcRZGate(q, 0.2501022500896156, 1);
  sqcRYGate(q, -2.6697031243950606, 2);
  sqcRZGate(q, 2.9217546194642336, 2);
  sqcRYGate(q, 1.1258107313231394, 3);
  sqcRZGate(q, 0.8106681042241427, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.16797543322797726, 0);
  sqcRZGate(q, 1.7251971734898168, 0);
  sqcRYGate(q, 0.4573812735460736, 1);
  sqcRZGate(q, 1.4499692596262719, 1);
  sqcRYGate(q, 1.9356338707117997, 2);
  sqcRZGate(q, 0.5645916522072174, 2);
  sqcRYGate(q, -0.5790561134844046, 3);
  sqcRZGate(q, 1.4439041850655139, 3);

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
