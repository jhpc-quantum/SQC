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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -1.5707967626281931, 0);
  sqcRZGate(q, -1.2467118475751537, 0);
  sqcRYGate(q, 1.5721022253148218, 1);
  sqcRZGate(q, 0.6311961377378725, 1);
  sqcRYGate(q, -1.5708249305828224, 2);
  sqcRZGate(q, 4.604658841547587e-05, 2);
  sqcRYGate(q, -3.1415911616115673, 3);
  sqcRZGate(q, 1.292928955562771, 3);
  sqcRYGate(q, 1.1556892777971675, 4);
  sqcRZGate(q, -1.0713211829516127, 4);
  sqcRYGate(q, -1.570794640841692, 5);
  sqcRZGate(q, 1.4275394102711836, 5);
  sqcRYGate(q, -3.1408478319106594, 6);
  sqcRZGate(q, -1.5119682988574077, 6);
  sqcRYGate(q, 0.1617195034913097, 7);
  sqcRZGate(q, -1.9632522192038393, 7);
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
  sqcRYGate(q, -3.141565794580021, 0);
  sqcRZGate(q, 1.894875603438809, 0);
  sqcRYGate(q, -7.285701166564581e-06, 1);
  sqcRZGate(q, 2.521467041816938, 1);
  sqcRYGate(q, 2.856761712064557, 2);
  sqcRZGate(q, -1.5708394211691719, 2);
  sqcRYGate(q, 1.5709412292368024, 3);
  sqcRZGate(q, -0.03623100707198012, 3);
  sqcRYGate(q, -3.1415916375579056, 4);
  sqcRZGate(q, 2.244088398504008, 4);
  sqcRYGate(q, 2.0686591023897667e-05, 5);
  sqcRZGate(q, 0.4989499951726044, 5);
  sqcRYGate(q, -3.1415591500749933, 6);
  sqcRZGate(q, 2.36517191980143, 6);
  sqcRYGate(q, 1.5992200323223065, 7);
  sqcRZGate(q, -2.754545852275451, 7);
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
  sqcRYGate(q, -1.5708062245140537, 0);
  sqcRZGate(q, 1.5910821005655496, 0);
  sqcRYGate(q, -1.5946449049996188, 1);
  sqcRZGate(q, -2.69773606306646, 1);
  sqcRYGate(q, 1.572551425920901, 2);
  sqcRZGate(q, 1.570801464239716, 2);
  sqcRYGate(q, 3.1415742071766855, 3);
  sqcRZGate(q, -3.0512451332893065, 3);
  sqcRYGate(q, -0.43627926104059345, 4);
  sqcRZGate(q, -2.9820276081711685, 4);
  sqcRYGate(q, 3.141588799927605, 5);
  sqcRZGate(q, 2.2318007456378135, 5);
  sqcRYGate(q, 3.1188858466384204, 6);
  sqcRZGate(q, 1.9871589996503571, 6);
  sqcRYGate(q, -2.7348404655292797, 7);
  sqcRZGate(q, 1.8678054810614748, 7);
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
  sqcRYGate(q, -3.024187001336252, 0);
  sqcRZGate(q, 3.112624540118427, 0);
  sqcRYGate(q, -1.5823729817266174, 1);
  sqcRZGate(q, 0.7313902726466238, 1);
  sqcRYGate(q, 1.5707991776692933, 2);
  sqcRZGate(q, -1.6139874496349134, 2);
  sqcRYGate(q, 0.014241522426458195, 3);
  sqcRZGate(q, -0.28957824265383925, 3);
  sqcRYGate(q, -3.1415923309999396, 4);
  sqcRZGate(q, 2.46791072157338, 4);
  sqcRYGate(q, 3.1415887684826598, 5);
  sqcRZGate(q, 0.00020632331214225978, 5);
  sqcRYGate(q, -3.1415643975646717, 6);
  sqcRZGate(q, 0.6112759268469591, 6);
  sqcRYGate(q, 0.4396834613408718, 7);
  sqcRZGate(q, -1.4491570247434389, 7);
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
  sqcRYGate(q, -1.570795183792016, 0);
  sqcRZGate(q, 1.8924865799931796, 0);
  sqcRYGate(q, 0.03547930705695716, 1);
  sqcRZGate(q, 1.203923654949435, 1);
  sqcRYGate(q, 3.1415529745330257, 2);
  sqcRZGate(q, -2.6052617683462467, 2);
  sqcRYGate(q, -3.1415920538823685, 3);
  sqcRZGate(q, -1.2890283375612483, 3);
  sqcRYGate(q, 1.50704140221616, 4);
  sqcRZGate(q, -1.5683055785302882, 4);
  sqcRYGate(q, 7.716254248890663e-07, 5);
  sqcRZGate(q, -1.6512446956118225, 5);
  sqcRYGate(q, -1.584054034433227, 6);
  sqcRZGate(q, 1.552390409905808, 6);
  sqcRYGate(q, -1.9144425032825108, 7);
  sqcRZGate(q, -0.7219150267987763, 7);
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
  sqcRYGate(q, 3.1415612741223953, 0);
  sqcRZGate(q, -1.4267278895284272, 0);
  sqcRYGate(q, 3.141584550839757, 1);
  sqcRZGate(q, -2.8347404870044612, 1);
  sqcRYGate(q, -1.5738785478661743, 2);
  sqcRZGate(q, -0.17777450543732962, 2);
  sqcRYGate(q, 1.5675581825502765, 3);
  sqcRZGate(q, -1.640743865021421, 3);
  sqcRYGate(q, -1.5707975169822355, 4);
  sqcRZGate(q, -0.17788194341838712, 4);
  sqcRYGate(q, -3.1410157250263557, 5);
  sqcRZGate(q, 0.4674432771242847, 5);
  sqcRYGate(q, -1.5707959042037931, 6);
  sqcRZGate(q, 1.3929141217167365, 6);
  sqcRYGate(q, 0.0010326531501527352, 7);
  sqcRZGate(q, 1.734122997379049, 7);

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
