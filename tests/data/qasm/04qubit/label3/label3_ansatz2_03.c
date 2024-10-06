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

  sqcRYGate(q, 0.7207588291536863, 0);
  sqcRZGate(q, -1.8067817607202374, 0);
  sqcRYGate(q, -1.5046391467929086, 1);
  sqcRZGate(q, -0.7553359811784274, 1);
  sqcRYGate(q, -2.1749491709937097, 2);
  sqcRZGate(q, 2.7988775532638894, 2);
  sqcRYGate(q, 2.01318235812327, 3);
  sqcRZGate(q, 2.4037789687169586, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.1899131309441167, 0);
  sqcRZGate(q, -0.44701694026243205, 0);
  sqcRYGate(q, -1.4643608426953554, 1);
  sqcRZGate(q, 2.784424426740975, 1);
  sqcRYGate(q, -1.4844342287875945, 2);
  sqcRZGate(q, -2.9239309198909607, 2);
  sqcRYGate(q, 0.4792272485530855, 3);
  sqcRZGate(q, 1.8415504198457382, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.7748650719278792, 0);
  sqcRZGate(q, 2.6702449175320213, 0);
  sqcRYGate(q, -3.0453912016136155, 1);
  sqcRZGate(q, 0.32655800062659746, 1);
  sqcRYGate(q, 1.853088602758707, 2);
  sqcRZGate(q, -2.9860568494671225, 2);
  sqcRYGate(q, -2.119712168473564, 3);
  sqcRZGate(q, -2.006749193242533, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4085143845404702, 0);
  sqcRZGate(q, -1.8827821285532709, 0);
  sqcRYGate(q, 0.2598520521420058, 1);
  sqcRZGate(q, 1.944312029948645, 1);
  sqcRYGate(q, 3.067868125130123, 2);
  sqcRZGate(q, -0.9990050656288583, 2);
  sqcRYGate(q, 1.5701283995434097, 3);
  sqcRZGate(q, -2.98254720720302, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.8404447862279996, 0);
  sqcRZGate(q, 2.8018874450280595, 0);
  sqcRYGate(q, 0.6153891060664511, 1);
  sqcRZGate(q, 1.6495265486016424, 1);
  sqcRYGate(q, -1.9207713761190928, 2);
  sqcRZGate(q, -1.8485121056547795, 2);
  sqcRYGate(q, -1.9458343423725148, 3);
  sqcRZGate(q, -0.7343136761081881, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.2131456704873953, 0);
  sqcRZGate(q, -1.8103755835226005, 0);
  sqcRYGate(q, 1.9753802953180133, 1);
  sqcRZGate(q, 1.221889020967823, 1);
  sqcRYGate(q, -2.04031558459652, 2);
  sqcRZGate(q, 2.2077200418622662, 2);
  sqcRYGate(q, 0.8682898227489098, 3);
  sqcRZGate(q, -2.3648018767214687, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.5937501889026082, 0);
  sqcRZGate(q, -1.4726679119012673, 0);
  sqcRYGate(q, 0.8916054832273028, 1);
  sqcRZGate(q, 0.46139149139336844, 1);
  sqcRYGate(q, -2.7675380744001896, 2);
  sqcRZGate(q, 2.7889876413346744, 2);
  sqcRYGate(q, -2.432405881254686, 3);
  sqcRZGate(q, 0.45830325230764035, 3);

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
