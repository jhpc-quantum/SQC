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

  sqcRYGate(q, 1.3806154657093481, 0);
  sqcRZGate(q, -0.4349719803446719, 0);
  sqcRYGate(q, -1.5611162720197829, 1);
  sqcRZGate(q, -2.7062780718903072, 1);
  sqcRYGate(q, -0.9381804490697281, 2);
  sqcRZGate(q, 2.1975299021673864, 2);
  sqcRYGate(q, 2.6161640207680956, 3);
  sqcRZGate(q, -2.0916465681456025, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.0645819187194139, 0);
  sqcRZGate(q, 2.4745834751497995, 0);
  sqcRYGate(q, 2.714313755431106, 1);
  sqcRZGate(q, -0.1937116615980878, 1);
  sqcRYGate(q, -0.9529783404591465, 2);
  sqcRZGate(q, 0.662060250942044, 2);
  sqcRYGate(q, 0.4416075056960391, 3);
  sqcRZGate(q, 2.7978596956587802, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.7186042863751858, 0);
  sqcRZGate(q, -2.97286583544974, 0);
  sqcRYGate(q, -0.6186930946429481, 1);
  sqcRZGate(q, 1.7536645914352071, 1);
  sqcRYGate(q, 1.6137192092444683, 2);
  sqcRZGate(q, -2.4799017157376446, 2);
  sqcRYGate(q, -2.86019080098491, 3);
  sqcRZGate(q, -0.3171514636762387, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.6963971928111183, 0);
  sqcRZGate(q, 2.3526825627605734, 0);
  sqcRYGate(q, 0.1450753699031284, 1);
  sqcRZGate(q, 2.5340765689474116, 1);
  sqcRYGate(q, -2.8184421678733234, 2);
  sqcRZGate(q, 3.0286119379603815, 2);
  sqcRYGate(q, 2.596959101865554, 3);
  sqcRZGate(q, -1.3273502710834724, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.8074946393723086, 0);
  sqcRZGate(q, -1.7358741453870512, 0);
  sqcRYGate(q, 1.2868484756693785, 1);
  sqcRZGate(q, 0.8849715803409248, 1);
  sqcRYGate(q, -1.6101987542484064, 2);
  sqcRZGate(q, -1.9091660934841264, 2);
  sqcRYGate(q, -2.426552447703174, 3);
  sqcRZGate(q, 2.9605151344390777, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.3983917510165949, 0);
  sqcRZGate(q, -0.36849966875583234, 0);
  sqcRYGate(q, -3.0747790271273887, 1);
  sqcRZGate(q, 3.066503811931632, 1);
  sqcRYGate(q, 1.1063705201640412, 2);
  sqcRZGate(q, 1.3446640048433514, 2);
  sqcRYGate(q, -1.0225825872993706, 3);
  sqcRZGate(q, 1.6290395220223663, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.9907749910304844, 0);
  sqcRZGate(q, -1.8585673769477726, 0);
  sqcRYGate(q, -0.16636768105477628, 1);
  sqcRZGate(q, 0.7533163209131825, 1);
  sqcRYGate(q, -0.753161424369817, 2);
  sqcRZGate(q, 3.1259141161088952, 2);
  sqcRYGate(q, -1.26841918327401, 3);
  sqcRZGate(q, 1.2619192966539465, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8084287433071911, 0);
  sqcRZGate(q, 0.6643476673815039, 0);
  sqcRYGate(q, 1.214930212013111, 1);
  sqcRZGate(q, 1.0771731024150935, 1);
  sqcRYGate(q, -0.9976808925319745, 2);
  sqcRZGate(q, 1.967318705793515, 2);
  sqcRYGate(q, -0.5572874112915187, 3);
  sqcRZGate(q, -0.17937893744808261, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9492512511842532, 0);
  sqcRZGate(q, -0.17859110218834384, 0);
  sqcRYGate(q, 1.0168067526474607, 1);
  sqcRZGate(q, -0.469295931693675, 1);
  sqcRYGate(q, 2.283026120573348, 2);
  sqcRZGate(q, -2.232835508289063, 2);
  sqcRYGate(q, -1.5942786380462834, 3);
  sqcRZGate(q, -0.5552152265394065, 3);

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
