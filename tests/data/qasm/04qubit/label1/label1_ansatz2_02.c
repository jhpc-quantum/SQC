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

  sqcRYGate(q, 1.126473166951681, 0);
  sqcRZGate(q, -2.7202297692943653, 0);
  sqcRYGate(q, -3.1415924092075853, 1);
  sqcRZGate(q, -0.3266441501255581, 1);
  sqcRYGate(q, 2.1750381712050175, 2);
  sqcRZGate(q, 2.7209797841785197, 2);
  sqcRYGate(q, -0.7823798583362266, 3);
  sqcRZGate(q, 0.5489834646388272, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8464424456983838, 0);
  sqcRZGate(q, -1.7484184893008266, 0);
  sqcRYGate(q, -3.1779543014920364e-06, 1);
  sqcRZGate(q, -0.22791982099633018, 1);
  sqcRYGate(q, -0.7036473532651879, 2);
  sqcRZGate(q, -2.8540019081650296, 2);
  sqcRYGate(q, 0.9848822631101695, 3);
  sqcRZGate(q, -2.252393890980325, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.29586370061675, 0);
  sqcRZGate(q, 0.2839257537154393, 0);
  sqcRYGate(q, 3.141591304303908, 1);
  sqcRZGate(q, -0.19180320695674363, 1);
  sqcRYGate(q, -2.5709654602210654, 2);
  sqcRZGate(q, -1.991620911344353, 2);
  sqcRYGate(q, -1.9495197625369753, 3);
  sqcRZGate(q, 1.6382444610212228, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.6900727240786635, 0);
  sqcRZGate(q, -1.8049461663349566, 0);
  sqcRYGate(q, -2.380368413253925e-06, 1);
  sqcRZGate(q, 1.7922842912140098, 1);
  sqcRYGate(q, -2.8431297211170024, 2);
  sqcRZGate(q, 1.8370369492838174, 2);
  sqcRYGate(q, 1.0700917963691843, 3);
  sqcRZGate(q, -1.0884700232684583, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.1060523525445567, 0);
  sqcRZGate(q, -2.163311914716063, 0);
  sqcRYGate(q, -1.5707954028986313, 1);
  sqcRZGate(q, 3.1415924822529195, 1);
  sqcRYGate(q, 2.1719080861991307, 2);
  sqcRZGate(q, -2.395948605065763, 2);
  sqcRYGate(q, -2.4738398473889918, 3);
  sqcRZGate(q, -1.982520210097146, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.3673596488526835e-07, 0);
  sqcRZGate(q, 2.263649021991479, 0);
  sqcRYGate(q, 1.5707938820714702, 1);
  sqcRZGate(q, -2.773543046473816, 1);
  sqcRYGate(q, -3.141591114622551, 2);
  sqcRZGate(q, 1.723349974073745, 2);
  sqcRYGate(q, 3.141592267161876, 3);
  sqcRZGate(q, -1.710590947601598, 3);

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
