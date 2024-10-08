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

  sqcRYGate(q, 1.7051559159963317, 0);
  sqcRZGate(q, 1.3112564855773159, 0);
  sqcRYGate(q, -1.8797582939541355, 1);
  sqcRZGate(q, 2.5439656898620755, 1);
  sqcRYGate(q, -1.7803424965743924, 2);
  sqcRZGate(q, -2.5956830994453246, 2);
  sqcRYGate(q, -0.2925857308078905, 3);
  sqcRZGate(q, 2.987722902123537, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.899355228049528, 0);
  sqcRZGate(q, -1.2389814328393909, 0);
  sqcRYGate(q, 2.831363262013767, 1);
  sqcRZGate(q, -2.2360855660470893, 1);
  sqcRYGate(q, 1.089436798040379, 2);
  sqcRZGate(q, -0.9936626458500212, 2);
  sqcRYGate(q, 0.4810475113571099, 3);
  sqcRZGate(q, -1.9962106985747736, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8495447842865097, 0);
  sqcRZGate(q, -2.4205098288322366, 0);
  sqcRYGate(q, 1.7541258095177341, 1);
  sqcRZGate(q, 3.03433371055343, 1);
  sqcRYGate(q, 1.7726269418393015, 2);
  sqcRZGate(q, -0.3154245578609406, 2);
  sqcRYGate(q, 1.5398133707841761, 3);
  sqcRZGate(q, 0.7230347674455464, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5482911682959138, 0);
  sqcRZGate(q, 0.8064850511913625, 0);
  sqcRYGate(q, -2.498584730882102, 1);
  sqcRZGate(q, 0.8166850179022288, 1);
  sqcRYGate(q, 1.6353995044134915, 2);
  sqcRZGate(q, 2.705124829437353, 2);
  sqcRYGate(q, 1.8122721486712798, 3);
  sqcRZGate(q, -1.2288778859883749, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.2820764470811021, 0);
  sqcRZGate(q, 1.0061125956264627, 0);
  sqcRYGate(q, -1.979793862069392, 1);
  sqcRZGate(q, 0.40466197921218505, 1);
  sqcRYGate(q, -3.0512655066950374, 2);
  sqcRZGate(q, -1.9908907383692644, 2);
  sqcRYGate(q, 0.3469893110582286, 3);
  sqcRZGate(q, -0.03953583647575546, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.5810436317592643, 0);
  sqcRZGate(q, 0.6955369668647844, 0);
  sqcRYGate(q, 2.5928291158432173, 1);
  sqcRZGate(q, 2.479147133605619, 1);
  sqcRYGate(q, -2.9651538778741333, 2);
  sqcRZGate(q, 2.3744986189041275, 2);
  sqcRYGate(q, 2.875458276037108, 3);
  sqcRZGate(q, 1.1783222357399818, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.3373471629062396, 0);
  sqcRZGate(q, -2.681065591223845, 0);
  sqcRYGate(q, 2.401275745502145, 1);
  sqcRZGate(q, 1.7811869397810658, 1);
  sqcRYGate(q, 1.0731012221687786, 2);
  sqcRZGate(q, -2.0115731296717403, 2);
  sqcRYGate(q, -1.5331262628195041, 3);
  sqcRZGate(q, -1.8147430825529125, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.218620617857794, 0);
  sqcRZGate(q, 2.4653354195685186, 0);
  sqcRYGate(q, 2.569509534227026, 1);
  sqcRZGate(q, 2.3149741586887997, 1);
  sqcRYGate(q, -1.1625788777572104, 2);
  sqcRZGate(q, -0.8160663233413885, 2);
  sqcRYGate(q, -1.3101800199524005, 3);
  sqcRZGate(q, 3.067366005602639, 3);

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
