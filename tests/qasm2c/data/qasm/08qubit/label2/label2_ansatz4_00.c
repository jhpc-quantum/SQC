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

  sqcRYGate(q, 3.0935542445865334, 0);
  sqcRZGate(q, 1.5722291605288816, 0);
  sqcRYGate(q, 0.048074453256031734, 1);
  sqcRZGate(q, 1.5693909405886348, 1);
  sqcRYGate(q, -1.534853571809247, 2);
  sqcRZGate(q, 1.035912891919204, 2);
  sqcRYGate(q, -1.558063809869488, 3);
  sqcRZGate(q, -2.60157769049613, 3);
  sqcRYGate(q, 6.984397040099566e-05, 4);
  sqcRZGate(q, -2.026753096885954, 4);
  sqcRYGate(q, -5.172280731690207e-05, 5);
  sqcRZGate(q, 0.2152919428960489, 5);
  sqcRYGate(q, -1.5666150047251046, 6);
  sqcRZGate(q, -2.5128885488889603, 6);
  sqcRYGate(q, 1.6588642245792178, 7);
  sqcRZGate(q, 0.48491635559615065, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.1951156386363007, 0);
  sqcRZGate(q, -1.5706849854529736, 0);
  sqcRYGate(q, -0.9460017499541421, 1);
  sqcRZGate(q, -1.5709213354242864, 1);
  sqcRYGate(q, 2.534124701896543, 2);
  sqcRZGate(q, -2.1959055774594938, 2);
  sqcRYGate(q, 1.2754157630734921, 3);
  sqcRZGate(q, -0.1726760429385097, 3);
  sqcRYGate(q, -0.08236389978609482, 4);
  sqcRZGate(q, 1.5631091467334501, 4);
  sqcRYGate(q, 0.6636969640689028, 5);
  sqcRZGate(q, 1.577269283054446, 5);
  sqcRYGate(q, 2.4093770398068863, 6);
  sqcRZGate(q, -0.8149489092264882, 6);
  sqcRYGate(q, -1.042625815052511, 7);
  sqcRZGate(q, 1.5531183693420914, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.570820460781996, 0);
  sqcRZGate(q, 1.0426536191133953, 0);
  sqcRYGate(q, 1.5709669208149535, 1);
  sqcRZGate(q, 2.217483299518465, 1);
  sqcRYGate(q, -1.5667864285854494, 2);
  sqcRZGate(q, -2.757521820869934, 2);
  sqcRYGate(q, 1.566774971143372, 3);
  sqcRZGate(q, -2.8051914664782243, 3);
  sqcRYGate(q, -1.5703079740244332, 4);
  sqcRZGate(q, 3.1258698186507066, 4);
  sqcRYGate(q, -1.5657507390810572, 5);
  sqcRZGate(q, -0.5641980505353595, 5);
  sqcRYGate(q, 1.5679302421090533, 6);
  sqcRZGate(q, 1.720527754994097, 6);
  sqcRYGate(q, 1.567487087679341, 7);
  sqcRZGate(q, 3.0501160071325195, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7474403739014237, 0);
  sqcRZGate(q, -1.0923297166245056, 0);
  sqcRYGate(q, 1.80185444033828, 1);
  sqcRZGate(q, 1.1788559235765093, 1);
  sqcRYGate(q, 0.06805755808012748, 2);
  sqcRZGate(q, -0.35478074247201186, 2);
  sqcRYGate(q, -0.07015683635056735, 3);
  sqcRZGate(q, 2.79828973753155, 3);
  sqcRYGate(q, 1.5025294133013551, 4);
  sqcRZGate(q, 0.005106551367859324, 4);
  sqcRYGate(q, -0.05199767865357481, 5);
  sqcRZGate(q, 1.231892531109029, 5);
  sqcRYGate(q, 3.141309657475766, 6);
  sqcRZGate(q, 1.3013495312542815, 6);
  sqcRYGate(q, 3.139352866076388, 7);
  sqcRZGate(q, 2.5703834699781556, 7);

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
