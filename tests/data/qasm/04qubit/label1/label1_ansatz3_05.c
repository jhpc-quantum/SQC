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

  sqcRYGate(q, -1.756455415901994, 0);
  sqcRZGate(q, -2.007627006838013, 0);
  sqcRYGate(q, -2.604948528884392, 1);
  sqcRZGate(q, -2.862197901259042, 1);
  sqcRYGate(q, 0.8837021117128696, 2);
  sqcRZGate(q, 2.8762097784465586, 2);
  sqcRYGate(q, -1.0597097683510073, 3);
  sqcRZGate(q, 1.6977079263537576, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.32663862924926107, 0);
  sqcRZGate(q, -1.8115928873324707, 0);
  sqcRYGate(q, 0.07653098049639567, 1);
  sqcRZGate(q, -1.3772505750585364, 1);
  sqcRYGate(q, 0.3568120816877647, 2);
  sqcRZGate(q, -2.660500438378276, 2);
  sqcRYGate(q, 2.4512163737993213, 3);
  sqcRZGate(q, -0.6884724985853798, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.0409572825161266, 0);
  sqcRZGate(q, -0.10293730235609572, 0);
  sqcRYGate(q, 0.9728492770569885, 1);
  sqcRZGate(q, -0.7706194724826296, 1);
  sqcRYGate(q, -2.9127526675475384, 2);
  sqcRZGate(q, -0.008298068921924084, 2);
  sqcRYGate(q, -2.1866398064350037, 3);
  sqcRZGate(q, -2.4065577621572705, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.09316926258620808, 0);
  sqcRZGate(q, -0.9938616493103999, 0);
  sqcRYGate(q, -0.7918041934168811, 1);
  sqcRZGate(q, 1.9658135624568613, 1);
  sqcRYGate(q, -0.5167290966836102, 2);
  sqcRZGate(q, -0.44398605191412166, 2);
  sqcRYGate(q, 0.8089789446905357, 3);
  sqcRZGate(q, -2.9244265659264403, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.4808398171950916, 0);
  sqcRZGate(q, 1.7358994662183886, 0);
  sqcRYGate(q, 2.917149245164304, 1);
  sqcRZGate(q, -0.2376669691124975, 1);
  sqcRYGate(q, -1.0841393621229498, 2);
  sqcRZGate(q, 1.3511352759422008, 2);
  sqcRYGate(q, -0.05308386852631398, 3);
  sqcRZGate(q, 2.15777665153907, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.8193888387167534, 0);
  sqcRZGate(q, -2.300948738103052, 0);
  sqcRYGate(q, -2.353148943013567, 1);
  sqcRZGate(q, -2.0777044071838446, 1);
  sqcRYGate(q, 1.6392532778685105, 2);
  sqcRZGate(q, -2.7230206201970266, 2);
  sqcRYGate(q, -1.2638036385385325, 3);
  sqcRZGate(q, 2.1400242661476967, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.941593201406761, 0);
  sqcRZGate(q, 0.11370359820215992, 0);
  sqcRYGate(q, 0.45852294689490547, 1);
  sqcRZGate(q, 1.1800886487143152, 1);
  sqcRYGate(q, -0.7585491069577754, 2);
  sqcRZGate(q, -2.1736382820207165, 2);
  sqcRYGate(q, 2.982151178233721, 3);
  sqcRZGate(q, -0.6236269543346076, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.162031056934557, 0);
  sqcRZGate(q, -2.7884706243891593, 0);
  sqcRYGate(q, -1.0225510044770039, 1);
  sqcRZGate(q, 2.9858902848252367, 1);
  sqcRYGate(q, -0.9619522249670034, 2);
  sqcRZGate(q, -3.0665155087378504, 2);
  sqcRYGate(q, 0.054879593186305975, 3);
  sqcRZGate(q, -2.6298134353494795, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.3404905758583672, 0);
  sqcRZGate(q, 0.3102888129303194, 0);
  sqcRYGate(q, -0.5902427456225885, 1);
  sqcRZGate(q, 1.987712178659189, 1);
  sqcRYGate(q, 2.95715184842167, 2);
  sqcRZGate(q, 2.903007799685839, 2);
  sqcRYGate(q, -1.7851925651540634, 3);
  sqcRZGate(q, -0.9754674896463095, 3);

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
