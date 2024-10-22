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
  q = sqcQuantumCircuit(4);

#ifdef BARRIER_CHECK
  sqcBarrier(q, 0);
#elif defined(RESET_CHECK)
  sqcReset(q, 1);
#elif defined(ECR_CHECK)
  sqcECRGate(q, 0, 1);
#elif defined(SX_CHECK)
  sqcSXGate(q, 1);
#elif defined(ID_CHECK)
  sqcIDGate(q, 1);
#elif defined(DELAY_CHECK)
  #ifdef UNITS
  sqcDelay(q, 1.0 ,UnitS ,2);
  #elif defined(UNITMS) 
  sqcDelay(q, 1 ,UnitMS ,2);
  #elif defined(UNITUS) 
  sqcDelay(q, 1.0 ,UnitUS ,2);
  #elif defined(UNITNS) 
  sqcDelay(q, 1.0 ,UnitNS ,2);
  #elif defined(UNITDT) 
  sqcDelay(q, 1 ,UnitDT ,2);
  #endif
#elif defined(DELAYALL_CHECK)
  #ifdef UNITS
  sqcDelayAll(q, 1.0 ,UnitS);
  #elif defined(UNITMS) 
  sqcDelayAll(q, 1.0 ,UnitMS); 
  #elif defined(UNITUS) 
  sqcDelayAll(q, 1 ,UnitUS);
  #elif defined(UNITNS) 
  sqcDelayAll(q, 1 ,UnitNS);
  #elif defined(UNITDT) 
  sqcDelayAll(q, 1.0 ,UnitDT);
  #endif
#endif

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file);
  fclose(IR_file);

#ifndef NO_TRANSPILE
  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file);
  fclose(Transpile_file);
#else
  
#endif

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
