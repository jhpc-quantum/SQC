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

  sqcRYGate(q, 1.7888221577353034, 0);
  sqcRZGate(q, -0.9111002545048235, 0);
  sqcRYGate(q, -1.8873549640093732, 1);
  sqcRZGate(q, 1.1690177432928586, 1);
  sqcRYGate(q, 2.5905331560326528, 2);
  sqcRZGate(q, -2.9235128833730366, 2);
  sqcRYGate(q, 0.8861999382509183, 3);
  sqcRZGate(q, -1.6861925774781525, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5578501456221687, 0);
  sqcRZGate(q, 0.3851447806662751, 0);
  sqcRYGate(q, -1.7677089616992812, 1);
  sqcRZGate(q, 1.339529403269161, 1);
  sqcRYGate(q, 2.2243361293740804, 2);
  sqcRZGate(q, 0.7640379377614045, 2);
  sqcRYGate(q, -2.8804510760877307, 3);
  sqcRZGate(q, -1.6485179449607814, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.078907674707582, 0);
  sqcRZGate(q, -2.591960582263124, 0);
  sqcRYGate(q, -2.047296313355555, 1);
  sqcRZGate(q, -0.8122523076239041, 1);
  sqcRYGate(q, -2.928578221938762, 2);
  sqcRZGate(q, -2.444276621180107, 2);
  sqcRYGate(q, 1.0534960795360395, 3);
  sqcRZGate(q, -0.3080238723041051, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.690848569907568, 0);
  sqcRZGate(q, -1.2455913379987071, 0);
  sqcRYGate(q, 2.3163417883787014, 1);
  sqcRZGate(q, 1.6304313577508964, 1);
  sqcRYGate(q, 2.103493648468949, 2);
  sqcRZGate(q, 0.6908327315485463, 2);
  sqcRYGate(q, -0.5685716713219184, 3);
  sqcRZGate(q, 1.3703536823392595, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5685946583246932, 0);
  sqcRZGate(q, 1.672157635830844, 0);
  sqcRYGate(q, 1.7669213840960305, 1);
  sqcRZGate(q, 2.196708209426769, 1);
  sqcRYGate(q, -0.02137919831962165, 2);
  sqcRZGate(q, -0.4229334731047478, 2);
  sqcRYGate(q, 2.9934049763769583, 3);
  sqcRZGate(q, 0.02076734850967008, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8444379812838252, 0);
  sqcRZGate(q, -1.590254186881819, 0);
  sqcRYGate(q, -1.007281355747257, 1);
  sqcRZGate(q, 2.8980601826442896, 1);
  sqcRYGate(q, -0.8403386572426426, 2);
  sqcRZGate(q, 3.0249185374901613, 2);
  sqcRYGate(q, 0.1438769693074322, 3);
  sqcRZGate(q, 2.7531740313151807, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2972113698143033, 0);
  sqcRZGate(q, -1.1511433571796745, 0);
  sqcRYGate(q, -2.826117271366562, 1);
  sqcRZGate(q, -0.8624184011358808, 1);
  sqcRYGate(q, -1.0075697542015822, 2);
  sqcRZGate(q, 2.3134862909318943, 2);
  sqcRYGate(q, 0.2757270801618317, 3);
  sqcRZGate(q, -1.4670685835603468, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.958226004999037, 0);
  sqcRZGate(q, -1.1604409432508644, 0);
  sqcRYGate(q, -1.0941176723742494, 1);
  sqcRZGate(q, -0.5912504843145513, 1);
  sqcRYGate(q, 0.9506641398134281, 2);
  sqcRZGate(q, 0.3980594180539418, 2);
  sqcRYGate(q, -0.24595118581835418, 3);
  sqcRZGate(q, 1.3443741788635524, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7579601509622466, 0);
  sqcRZGate(q, -2.2435276159246706, 0);
  sqcRYGate(q, -2.588068882104644, 1);
  sqcRZGate(q, -2.355326858389947, 1);
  sqcRYGate(q, 2.363447423176555, 2);
  sqcRZGate(q, 1.4918300969251435, 2);
  sqcRYGate(q, -2.9298632143914345, 3);
  sqcRZGate(q, 0.5855590763980585, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1876704256897648, 0);
  sqcRZGate(q, 2.8836593325985365, 0);
  sqcRYGate(q, 0.7119622041526724, 1);
  sqcRZGate(q, 1.2781627990637068, 1);
  sqcRYGate(q, -1.755369870963824, 2);
  sqcRZGate(q, 0.27601455082482046, 2);
  sqcRYGate(q, -0.34052701687091075, 3);
  sqcRZGate(q, -1.5492584832220597, 3);

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
