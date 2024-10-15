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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 1.5689421296499908, 0);
  sqcRZGate(q, 0.526649315458629, 0);
  sqcRYGate(q, 0.04845479809401531, 1);
  sqcRZGate(q, 0.5838286605382043, 1);
  sqcRYGate(q, -1.6049716017406555, 2);
  sqcRZGate(q, 3.1348205170397563, 2);
  sqcRYGate(q, -1.5708233224071864, 3);
  sqcRZGate(q, -1.61619336132894, 3);
  sqcRYGate(q, 1.7427672239047531, 4);
  sqcRZGate(q, -0.009226283790351045, 4);
  sqcRYGate(q, 1.625690014043279, 5);
  sqcRZGate(q, 0.1508662792662914, 5);
  sqcRYGate(q, -1.7820729623654339, 6);
  sqcRZGate(q, -3.1354785002799144, 6);
  sqcRYGate(q, -0.0994384760197807, 7);
  sqcRZGate(q, 0.08100702621267668, 7);
  sqcRYGate(q, -1.568761944307868, 8);
  sqcRZGate(q, 1.6723312195423725, 8);
  sqcRYGate(q, 1.5366740026658776, 9);
  sqcRZGate(q, -2.568203067307715, 9);
  sqcRYGate(q, -3.0928752834078423, 10);
  sqcRZGate(q, 3.1101360078008597, 10);
  sqcRYGate(q, 1.4774020119898585, 11);
  sqcRZGate(q, -0.09188836841448644, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.2217143131000014, 0);
  sqcRZGate(q, 0.7661907998558999, 0);
  sqcRYGate(q, 1.5703969368523159, 1);
  sqcRZGate(q, -1.5727433046513255, 1);
  sqcRYGate(q, 1.568456123136177, 2);
  sqcRZGate(q, 1.6135272094133324, 2);
  sqcRYGate(q, 3.08569968151817, 3);
  sqcRZGate(q, -1.5980791209591256, 3);
  sqcRYGate(q, 2.3804269805423712, 4);
  sqcRZGate(q, -3.0937722221198007, 4);
  sqcRYGate(q, 3.1415332163222653, 5);
  sqcRZGate(q, -2.9905602351252605, 5);
  sqcRYGate(q, 0.03121803204783038, 6);
  sqcRZGate(q, 3.1354744785877906, 6);
  sqcRYGate(q, -2.370025630711317, 7);
  sqcRZGate(q, 2.6193217002145346, 7);
  sqcRYGate(q, -2.5485196320925882, 8);
  sqcRZGate(q, 1.6996163637136843, 8);
  sqcRYGate(q, -1.6194722635324883, 9);
  sqcRZGate(q, -1.4611477476917392, 9);
  sqcRYGate(q, -1.570788370153447, 10);
  sqcRZGate(q, 1.6201872759204043, 10);
  sqcRYGate(q, 2.7924978348023286, 11);
  sqcRZGate(q, -0.09455444613634079, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.575728383333792, 0);
  sqcRZGate(q, 0.21094488149515467, 0);
  sqcRYGate(q, 3.077383930310173, 1);
  sqcRZGate(q, 1.3826279472237544, 1);
  sqcRYGate(q, 0.04600002147498676, 2);
  sqcRZGate(q, -1.7904832452740653, 2);
  sqcRYGate(q, -3.0968160564363822, 3);
  sqcRZGate(q, 2.9370929923837363, 3);
  sqcRYGate(q, 1.7427829925414007, 4);
  sqcRZGate(q, -0.8188908630394264, 4);
  sqcRYGate(q, -1.610540970186384, 5);
  sqcRZGate(q, -2.413919353660611, 5);
  sqcRYGate(q, -1.419722317738364, 6);
  sqcRZGate(q, -2.420163969516501, 6);
  sqcRYGate(q, 0.09836602998397126, 7);
  sqcRZGate(q, -0.7178228126292635, 7);
  sqcRYGate(q, 0.04522536530838921, 8);
  sqcRZGate(q, -0.20997029850420915, 8);
  sqcRYGate(q, 3.0953037616230534, 9);
  sqcRZGate(q, -1.311038461295264, 9);
  sqcRYGate(q, 3.093465686140945, 10);
  sqcRZGate(q, -1.3302225621753272, 10);
  sqcRYGate(q, 1.575724927978337, 11);
  sqcRZGate(q, 2.951695627820753, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.100325611539982, 0);
  sqcRZGate(q, -2.890422486553132, 0);
  sqcRYGate(q, 1.7886709550603248, 1);
  sqcRZGate(q, -3.0388634819261755, 1);
  sqcRYGate(q, 1.3899530463720198, 2);
  sqcRZGate(q, 1.7146335085450843, 2);
  sqcRYGate(q, -1.3874865787527135, 3);
  sqcRZGate(q, -1.4293378520077444, 3);
  sqcRYGate(q, 0.2484551319542767, 4);
  sqcRZGate(q, -2.1875787554373503, 4);
  sqcRYGate(q, -2.866027776193053, 5);
  sqcRZGate(q, -2.290618065437066, 5);
  sqcRYGate(q, 2.8661217286959992, 6);
  sqcRZGate(q, 0.84988722134488, 6);
  sqcRYGate(q, -0.19120801805812085, 7);
  sqcRZGate(q, 1.380490389047262, 7);
  sqcRYGate(q, -1.3873777440546533, 8);
  sqcRZGate(q, -1.4807168083092757, 8);
  sqcRYGate(q, 1.7594346956340416, 9);
  sqcRZGate(q, -1.46434431208354, 9);
  sqcRYGate(q, -1.4114404294784846, 10);
  sqcRZGate(q, -3.0644503968645584, 10);
  sqcRYGate(q, -1.4803417654458304, 11);
  sqcRZGate(q, 0.1252752438716973, 11);

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
