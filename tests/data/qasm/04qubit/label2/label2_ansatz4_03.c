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

  sqcRYGate(q, -1.7742908011092775, 0);
  sqcRZGate(q, 0.25740750740895196, 0);
  sqcRYGate(q, -1.4223055772334088, 1);
  sqcRZGate(q, -1.7839252634244316, 1);
  sqcRYGate(q, 0.39916890439683606, 2);
  sqcRZGate(q, -0.5389704466087581, 2);
  sqcRYGate(q, -2.8405256430484114, 3);
  sqcRZGate(q, -2.7858664942098006, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7892357615800342, 0);
  sqcRZGate(q, -1.8631437062730363, 0);
  sqcRYGate(q, 1.8901871853104555, 1);
  sqcRZGate(q, 0.8511627995018661, 1);
  sqcRYGate(q, -0.7766245039122186, 2);
  sqcRZGate(q, 1.7806437058834588, 2);
  sqcRYGate(q, 0.8612300689326249, 3);
  sqcRZGate(q, -0.16333882278881445, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.24961432207090972, 0);
  sqcRZGate(q, 0.44279108829120567, 0);
  sqcRYGate(q, -1.8929255267240075, 1);
  sqcRZGate(q, -0.5579662834859027, 1);
  sqcRYGate(q, 1.0488390954382358, 2);
  sqcRZGate(q, -2.2106851323021104, 2);
  sqcRYGate(q, 2.7383707421827994, 3);
  sqcRZGate(q, -1.336237542981186, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0564420476649072, 0);
  sqcRZGate(q, -0.7154145476264915, 0);
  sqcRYGate(q, 2.929808021659022, 1);
  sqcRZGate(q, 1.3100354215327028, 1);
  sqcRYGate(q, -1.7559278810727488, 2);
  sqcRZGate(q, 0.4740494556090038, 2);
  sqcRYGate(q, -2.6979804386580897, 3);
  sqcRZGate(q, -0.8787084809948551, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.43480640580941854, 0);
  sqcRZGate(q, 0.9846891537971408, 0);
  sqcRYGate(q, -2.425441104466053, 1);
  sqcRZGate(q, 0.24227353112599023, 1);
  sqcRYGate(q, -2.3267078935385146, 2);
  sqcRZGate(q, 1.9168895923368972, 2);
  sqcRYGate(q, -3.1376750531258355, 3);
  sqcRZGate(q, -2.921699986394984, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0781067480738873, 0);
  sqcRZGate(q, -0.6680649127368388, 0);
  sqcRYGate(q, 1.1232174148021004, 1);
  sqcRZGate(q, 3.0005443170914936, 1);
  sqcRYGate(q, 0.2278222528763382, 2);
  sqcRZGate(q, 1.8667385063816315, 2);
  sqcRYGate(q, -1.6966335628637204, 3);
  sqcRZGate(q, 0.1850596100357844, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4064186072579887, 0);
  sqcRZGate(q, 2.561954033571787, 0);
  sqcRYGate(q, 0.20580901873834279, 1);
  sqcRZGate(q, -2.7502663402745116, 1);
  sqcRYGate(q, -2.632411865049887, 2);
  sqcRZGate(q, -1.3173664090350545, 2);
  sqcRYGate(q, 0.618314909659371, 3);
  sqcRZGate(q, 2.193221833082294, 3);

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
