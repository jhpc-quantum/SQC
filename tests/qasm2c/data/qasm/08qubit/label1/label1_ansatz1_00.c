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

  sqcRYGate(q, -2.2267545488649736, 0);
  sqcRZGate(q, 3.1415831603574875, 0);
  sqcRYGate(q, -0.146134996219903, 1);
  sqcRZGate(q, -3.0623715940869545e-05, 1);
  sqcRYGate(q, -1.570781586756528, 2);
  sqcRZGate(q, -2.899749497176374, 2);
  sqcRYGate(q, -1.5707952121182143, 3);
  sqcRZGate(q, 2.3987548107839984e-06, 3);
  sqcRYGate(q, -1.5708009265160827, 4);
  sqcRZGate(q, -7.930393441490935e-06, 4);
  sqcRYGate(q, -1.570741211651935, 5);
  sqcRZGate(q, 2.8997482551563407, 5);
  sqcRYGate(q, -2.9954505938388896, 6);
  sqcRZGate(q, 3.14155815646298, 6);
  sqcRYGate(q, -0.9147850622627809, 7);
  sqcRZGate(q, 3.141589027588206, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.238442139868467, 0);
  sqcRZGate(q, 1.5707644422057871, 0);
  sqcRYGate(q, 1.5707892315764265, 1);
  sqcRZGate(q, -0.7152967550223686, 1);
  sqcRYGate(q, 1.5707954107758269, 2);
  sqcRZGate(q, -3.1415908770856236, 2);
  sqcRYGate(q, -0.34221893119062724, 3);
  sqcRZGate(q, 3.141591856765199, 3);
  sqcRYGate(q, -0.3422204341816375, 4);
  sqcRZGate(q, 3.141592152140268, 4);
  sqcRYGate(q, 1.570799553409113, 5);
  sqcRZGate(q, -1.6299263112529159e-06, 5);
  sqcRYGate(q, -1.5707791852497046, 6);
  sqcRZGate(q, 2.4262948279167613, 6);
  sqcRYGate(q, -1.9032058328235264, 7);
  sqcRZGate(q, -1.5707792607848872, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.3393420891582646, 0);
  sqcRZGate(q, 0.2545522524597317, 0);
  sqcRYGate(q, 1.570797407065698, 1);
  sqcRZGate(q, 1.5707961699343251, 1);
  sqcRYGate(q, -2.854562297785241, 2);
  sqcRZGate(q, 1.5707967596600563, 2);
  sqcRYGate(q, -1.5707837648078649, 3);
  sqcRZGate(q, 1.5707963755748036, 3);
  sqcRYGate(q, 1.5707395141343228, 4);
  sqcRZGate(q, -1.5707971455671403, 4);
  sqcRYGate(q, -0.28704189860479, 5);
  sqcRZGate(q, 1.5707974074445348, 5);
  sqcRYGate(q, 1.5707909227143748, 6);
  sqcRZGate(q, -1.5708010294697647, 6);
  sqcRYGate(q, 0.8022517696423792, 7);
  sqcRZGate(q, -1.2268932480583699, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1415924110936837, 0);
  sqcRZGate(q, -0.5043718954462232, 0);
  sqcRYGate(q, -1.5707977250657628, 1);
  sqcRZGate(q, -0.7589240091456353, 1);
  sqcRYGate(q, 1.570798927542115, 2);
  sqcRZGate(q, 2.3826781835090522, 2);
  sqcRYGate(q, 1.5707969928257164, 3);
  sqcRZGate(q, -2.32970182919602, 3);
  sqcRYGate(q, -1.5707967401034955, 4);
  sqcRZGate(q, 2.3826613033433293, 4);
  sqcRYGate(q, 1.5707923645967372, 5);
  sqcRZGate(q, 0.8118701295767864, 5);
  sqcRYGate(q, -1.5707944044011128, 6);
  sqcRZGate(q, -2.329705752704941, 6);
  sqcRYGate(q, 8.746164914653136e-07, 7);
  sqcRZGate(q, 2.038782933372088, 7);

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
