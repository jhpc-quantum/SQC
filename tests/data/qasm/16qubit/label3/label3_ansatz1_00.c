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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 1.7006382986118505, 0);
  sqcRZGate(q, 1.500629899210798, 0);
  sqcRYGate(q, -1.5585366371090865, 1);
  sqcRZGate(q, -0.21734251367648127, 1);
  sqcRYGate(q, 1.572573370591818, 2);
  sqcRZGate(q, 3.140890787893765, 2);
  sqcRYGate(q, -2.073071690824432, 3);
  sqcRZGate(q, -3.140986281385094, 3);
  sqcRYGate(q, -0.3006839391399926, 4);
  sqcRZGate(q, 3.10913886424798, 4);
  sqcRYGate(q, -3.0670221440657057, 5);
  sqcRZGate(q, -0.16087731439956077, 5);
  sqcRYGate(q, 3.074463766897282, 6);
  sqcRZGate(q, -3.0557921693700116, 6);
  sqcRYGate(q, -1.564456589009347, 7);
  sqcRZGate(q, -1.2250466275893204, 7);
  sqcRYGate(q, 1.6567591690227381, 8);
  sqcRZGate(q, -1.2664941379080723, 8);
  sqcRYGate(q, 1.571027647340765, 9);
  sqcRZGate(q, 1.5659297815281539, 9);
  sqcRYGate(q, 3.1171715978297847, 10);
  sqcRZGate(q, -3.034060999479716, 10);
  sqcRYGate(q, -0.3070738494324183, 11);
  sqcRZGate(q, 0.03672812747531662, 11);
  sqcRYGate(q, 1.0759693973857853, 12);
  sqcRZGate(q, 0.0006957407537442851, 12);
  sqcRYGate(q, 1.572781558333907, 13);
  sqcRZGate(q, 3.131238144943098, 13);
  sqcRYGate(q, 1.5575212150749875, 14);
  sqcRZGate(q, 0.23026607109799713, 14);
  sqcRYGate(q, -1.6994492523674725, 15);
  sqcRZGate(q, -1.4999040008121778, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.0302228682210743, 0);
  sqcRZGate(q, -1.647326563621939, 0);
  sqcRYGate(q, 2.089664307805079, 1);
  sqcRZGate(q, 2.4266739134646156, 1);
  sqcRYGate(q, -1.4912777229219405, 2);
  sqcRZGate(q, 1.8124753841607462, 2);
  sqcRYGate(q, 1.5411540082595536, 3);
  sqcRZGate(q, 1.7329581479500948, 3);
  sqcRYGate(q, -1.850662073671919, 4);
  sqcRZGate(q, 1.5621516214669962, 4);
  sqcRYGate(q, 1.6579268789578858, 5);
  sqcRZGate(q, 1.5529068437778517, 5);
  sqcRYGate(q, 1.5714180482276234, 6);
  sqcRZGate(q, 1.4962430988371684, 6);
  sqcRYGate(q, -0.1954205439914787, 7);
  sqcRZGate(q, 2.8096100625969584, 7);
  sqcRYGate(q, 1.5735821782640242, 8);
  sqcRZGate(q, -2.783013458334542, 8);
  sqcRYGate(q, 2.0578064400292426, 9);
  sqcRZGate(q, 3.0576158488573246, 9);
  sqcRYGate(q, 1.5606355826528313, 10);
  sqcRZGate(q, -1.568601038783501, 10);
  sqcRYGate(q, -1.8768987544912348, 11);
  sqcRZGate(q, -1.5642645382478975, 11);
  sqcRYGate(q, 1.6018406570130317, 12);
  sqcRZGate(q, -1.733302694683098, 12);
  sqcRYGate(q, 1.487672257628173, 13);
  sqcRZGate(q, 1.3280267574956053, 13);
  sqcRYGate(q, 1.0468411634021335, 14);
  sqcRZGate(q, 2.43403300617499, 14);
  sqcRYGate(q, 3.0215274947949937, 15);
  sqcRZGate(q, -1.4931656728601501, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.586559081112981, 0);
  sqcRZGate(q, 0.10528531735775942, 0);
  sqcRYGate(q, 1.5351399039062699, 1);
  sqcRZGate(q, 0.03975186989419802, 1);
  sqcRYGate(q, -0.7678568077916391, 2);
  sqcRZGate(q, 2.192597891014945, 2);
  sqcRYGate(q, -2.9730752448443893, 3);
  sqcRZGate(q, -0.38192196234067494, 3);
  sqcRYGate(q, -2.8849104134710304, 4);
  sqcRZGate(q, -2.70160196088885, 4);
  sqcRYGate(q, 0.47609871819723315, 5);
  sqcRZGate(q, -1.5728627783579292, 5);
  sqcRYGate(q, -2.691442886646708, 6);
  sqcRZGate(q, 3.0526972212168118, 6);
  sqcRYGate(q, 2.7854651657673823, 7);
  sqcRZGate(q, 2.753958607707129, 7);
  sqcRYGate(q, 1.4897269399237156, 8);
  sqcRZGate(q, 0.8344760177352182, 8);
  sqcRYGate(q, -2.690132872529863, 9);
  sqcRZGate(q, 1.4792091095470177, 9);
  sqcRYGate(q, 2.663573630122436, 10);
  sqcRZGate(q, -3.0983296921204837, 10);
  sqcRYGate(q, 2.8863894321600556, 11);
  sqcRZGate(q, -2.8360857225947975, 11);
  sqcRYGate(q, 2.9705473672199227, 12);
  sqcRZGate(q, 0.746358748500367, 12);
  sqcRYGate(q, 0.775043012890591, 13);
  sqcRZGate(q, 2.4346314182709397, 13);
  sqcRYGate(q, -1.5332163243683476, 14);
  sqcRZGate(q, 1.547327834098847, 14);
  sqcRYGate(q, 1.5860905466326392, 15);
  sqcRZGate(q, 1.3872851688455858, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.2319442214220544, 0);
  sqcRZGate(q, -1.6518269217258812, 0);
  sqcRYGate(q, 0.5411415164606002, 1);
  sqcRZGate(q, 1.6379408660243016, 1);
  sqcRYGate(q, -1.4856496246086888, 2);
  sqcRZGate(q, -0.15942441347076547, 2);
  sqcRYGate(q, -1.5786487239861327, 3);
  sqcRZGate(q, -3.0565623932010824, 3);
  sqcRYGate(q, 0.08485861478905754, 4);
  sqcRZGate(q, -0.6271201930262027, 4);
  sqcRYGate(q, -0.4429167210336021, 5);
  sqcRZGate(q, -1.47453582159874, 5);
  sqcRYGate(q, -1.6385108143399945, 6);
  sqcRZGate(q, 2.9249415138955395, 6);
  sqcRYGate(q, 1.558194078504071, 7);
  sqcRZGate(q, 0.0796766314960724, 7);
  sqcRYGate(q, -0.07523871554301995, 8);
  sqcRZGate(q, -2.700447005460503, 8);
  sqcRYGate(q, -0.3415667513595141, 9);
  sqcRZGate(q, -1.4283802716041636, 9);
  sqcRYGate(q, 1.5185079638389691, 10);
  sqcRZGate(q, 2.828280923137498, 10);
  sqcRYGate(q, -1.5672759136862373, 11);
  sqcRZGate(q, 0.1969841141501312, 11);
  sqcRYGate(q, 3.0848530942042274, 12);
  sqcRZGate(q, -2.6463934811449397, 12);
  sqcRYGate(q, -0.28171016690039974, 13);
  sqcRZGate(q, -1.3401762961163541, 13);
  sqcRYGate(q, 1.6032174625771942, 14);
  sqcRZGate(q, -0.4015892719631333, 14);
  sqcRYGate(q, 1.766193269526588, 15);
  sqcRZGate(q, 1.0344830798945817, 15);

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
