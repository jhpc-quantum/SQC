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

  sqcRYGate(q, -0.601952854769342, 0);
  sqcRZGate(q, -0.19194863644643398, 0);
  sqcRYGate(q, -2.910269111408618, 1);
  sqcRZGate(q, -1.1806075543403627, 1);
  sqcRYGate(q, 2.2381834748313576, 2);
  sqcRZGate(q, -1.3824790799781426, 2);
  sqcRYGate(q, 1.5778712802480692, 3);
  sqcRZGate(q, -0.13599767872560256, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5966978927955306, 0);
  sqcRZGate(q, 1.5638649109766898, 0);
  sqcRYGate(q, -1.8819674121371508, 1);
  sqcRZGate(q, 2.5966285374362705, 1);
  sqcRYGate(q, -3.084055560884333, 2);
  sqcRZGate(q, 1.0028005575739707, 2);
  sqcRYGate(q, -0.08440333431110769, 3);
  sqcRZGate(q, 1.4157442613307945, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0513030729149202, 0);
  sqcRZGate(q, 1.304128223405094, 0);
  sqcRYGate(q, 1.8153322868423638, 1);
  sqcRZGate(q, 1.286259046718775, 1);
  sqcRYGate(q, -1.029201183626513, 2);
  sqcRZGate(q, -2.644713865667041, 2);
  sqcRYGate(q, 3.1011585152575347, 3);
  sqcRZGate(q, -0.005469980886655631, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6573253450865972, 0);
  sqcRZGate(q, 0.5229407334368521, 0);
  sqcRYGate(q, 1.855394532073185, 1);
  sqcRZGate(q, 1.959513519880915, 1);
  sqcRYGate(q, 0.2312605235392029, 2);
  sqcRZGate(q, 2.145431123853991, 2);
  sqcRYGate(q, -1.1160238832336304, 3);
  sqcRZGate(q, 1.8587830075327822, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.453734676540568, 0);
  sqcRZGate(q, 0.9849836554780146, 0);
  sqcRYGate(q, -1.827709201126644, 1);
  sqcRZGate(q, 1.548008622247408, 1);
  sqcRYGate(q, -1.9130647261820855, 2);
  sqcRZGate(q, -1.7686907047395357, 2);
  sqcRYGate(q, 0.6816370184618953, 3);
  sqcRZGate(q, 1.2858609706707258, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.0314710727585297, 0);
  sqcRZGate(q, 2.7971377341725816, 0);
  sqcRYGate(q, -0.219205470371995, 1);
  sqcRZGate(q, 0.6552713115740616, 1);
  sqcRYGate(q, 2.0756705639381474, 2);
  sqcRZGate(q, -0.7905707663251088, 2);
  sqcRYGate(q, -1.1117305705221483, 3);
  sqcRZGate(q, -0.5201524513242965, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3850562930189296, 0);
  sqcRZGate(q, -2.8268415584418434, 0);
  sqcRYGate(q, 1.9530893023706097, 1);
  sqcRZGate(q, 2.87297283356515, 1);
  sqcRYGate(q, 2.632248175412306, 2);
  sqcRZGate(q, 0.3646522185679762, 2);
  sqcRYGate(q, -2.2117591049188485, 3);
  sqcRZGate(q, 2.739225233277233, 3);

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
