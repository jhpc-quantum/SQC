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

  sqcRYGate(q, -3.1415924617278925, 0);
  sqcRZGate(q, 0.12807054710108193, 0);
  sqcRYGate(q, 1.570762918757924, 1);
  sqcRZGate(q, -1.139789927773194e-05, 1);
  sqcRYGate(q, 3.141591556617566, 2);
  sqcRZGate(q, 2.901524518450428, 2);
  sqcRYGate(q, -1.5707963961465001, 3);
  sqcRZGate(q, -1.4153476700673782, 3);
  sqcRYGate(q, 0.10879447301781223, 4);
  sqcRZGate(q, 1.5750970971788387, 4);
  sqcRYGate(q, -1.5707968503135534, 5);
  sqcRZGate(q, -1.602473352419696, 5);
  sqcRYGate(q, -1.9582955569141802e-05, 6);
  sqcRZGate(q, 0.6597578924121933, 6);
  sqcRYGate(q, -3.1415877106205983, 7);
  sqcRZGate(q, 1.2190606944639737, 7);
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
  sqcRYGate(q, -1.57079675963438, 0);
  sqcRZGate(q, 3.0422180269124577, 0);
  sqcRYGate(q, -1.5707956505632883, 1);
  sqcRZGate(q, 1.4152676771209054, 1);
  sqcRYGate(q, -1.5707964803439083, 2);
  sqcRZGate(q, -1.4090012822994894e-07, 2);
  sqcRYGate(q, -1.5707963975891452, 3);
  sqcRZGate(q, 2.2954192006893843e-07, 3);
  sqcRYGate(q, 3.127421269287409, 4);
  sqcRZGate(q, 0.004264157965810256, 4);
  sqcRYGate(q, 8.071573478396486e-05, 5);
  sqcRZGate(q, 1.4286643067083218, 5);
  sqcRYGate(q, -3.1415913940363485, 6);
  sqcRZGate(q, -1.3649353837737213, 6);
  sqcRYGate(q, -1.6642909466206453, 7);
  sqcRZGate(q, 1.5707966396027384, 7);
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
  sqcRYGate(q, -1.441581312441331, 0);
  sqcRZGate(q, -2.0299896878318227, 0);
  sqcRYGate(q, 1.570798064056275, 1);
  sqcRZGate(q, -1.9250149636161165, 1);
  sqcRYGate(q, 1.5707956088349375, 2);
  sqcRZGate(q, 3.141589335527213, 2);
  sqcRYGate(q, 1.5707958269553233, 3);
  sqcRZGate(q, 2.0888901720300295, 3);
  sqcRYGate(q, 1.0910262878405863, 4);
  sqcRZGate(q, -8.170979011623558e-06, 4);
  sqcRYGate(q, 3.1415744826041743, 5);
  sqcRZGate(q, 1.3969577886840956, 5);
  sqcRYGate(q, 1.5707957628571605, 6);
  sqcRZGate(q, 1.5707935263796782, 6);
  sqcRYGate(q, -1.570825888053478, 7);
  sqcRZGate(q, -1.570794840047843, 7);
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
  sqcRYGate(q, -1.570781535724571, 0);
  sqcRZGate(q, -1.2537012844714157, 0);
  sqcRYGate(q, 3.1415903783208035, 1);
  sqcRZGate(q, -2.9842130173067, 1);
  sqcRYGate(q, 1.5707963325649172, 2);
  sqcRZGate(q, 1.8878779564815336, 2);
  sqcRYGate(q, -1.1000706055706857e-06, 3);
  sqcRZGate(q, -0.006498961943618119, 3);
  sqcRYGate(q, -1.5707963600706047, 4);
  sqcRZGate(q, 0.3170872798580809, 4);
  sqcRYGate(q, -1.570796631592036, 5);
  sqcRZGate(q, -2.629811132477812, 5);
  sqcRYGate(q, 1.5372934589953147, 6);
  sqcRZGate(q, 0.3170892106501482, 6);
  sqcRYGate(q, 1.5707967032010206, 7);
  sqcRZGate(q, -1.0590147188886034, 7);

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
