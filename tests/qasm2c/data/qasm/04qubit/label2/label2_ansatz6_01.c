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

  sqcRYGate(q, 0.30279285823856206, 0);
  sqcRYGate(q, 1.7818173944491942, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.15537625857295514, 0);
  sqcRYGate(q, -1.6680349654796172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07022178521902668, 1);
  sqcRYGate(q, -0.059005176120044925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.579071130256838, 1);
  sqcRYGate(q, -0.9394378079550858, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6550853831808157, 2);
  sqcRYGate(q, -0.9295213774279042, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.923796087302364, 2);
  sqcRYGate(q, -2.9626053016530953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4592018340787556, 0);
  sqcRYGate(q, -2.2030632667689543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6247060852635653, 0);
  sqcRYGate(q, 1.3474283817509407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0742782410197342, 1);
  sqcRYGate(q, -2.9218156742916896, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9633095240591127, 1);
  sqcRYGate(q, 2.091108484406453, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6345283692683248, 2);
  sqcRYGate(q, -3.079435775073629, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6561738690861778, 2);
  sqcRYGate(q, 2.9280887754827156, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17513159707375348, 0);
  sqcRYGate(q, 2.8543249745254733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.884725658976854, 0);
  sqcRYGate(q, -2.219393903152004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6921544009440411, 1);
  sqcRYGate(q, -1.189222766287828, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7015921121654998, 1);
  sqcRYGate(q, -0.8815849803124715, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.034274936232790765, 2);
  sqcRYGate(q, 3.008479439115191, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8150158531147822, 2);
  sqcRYGate(q, 3.0043061260873394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9113746824790798, 0);
  sqcRYGate(q, 1.2780372294232543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6558618755715757, 0);
  sqcRYGate(q, -2.8379880393711323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0673820116763242, 1);
  sqcRYGate(q, 0.32261282552329884, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2141377006212448, 1);
  sqcRYGate(q, -0.09425690370299299, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8295365048848992, 2);
  sqcRYGate(q, -3.0662995049905053, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1723380251612476, 2);
  sqcRYGate(q, -0.6992195506208408, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9003143197949988, 0);
  sqcRYGate(q, -2.729139153973735, 1);
  sqcRYGate(q, -1.6481467220496822, 2);
  sqcRYGate(q, -1.3866331444247117, 3);

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
