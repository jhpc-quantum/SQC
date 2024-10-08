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

  sqcRYGate(q, -1.8533734847964523, 0);
  sqcRZGate(q, -1.9336181900353804, 0);
  sqcRYGate(q, 2.9688004876725733, 1);
  sqcRZGate(q, 1.5929030943344442, 1);
  sqcRYGate(q, -2.903152136705826, 2);
  sqcRZGate(q, -2.321896999188077, 2);
  sqcRYGate(q, 2.5253819502405355, 3);
  sqcRZGate(q, 2.395608862805123, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6150703134915422, 0);
  sqcRZGate(q, 2.1433220636232906, 0);
  sqcRYGate(q, -0.017077134357719306, 1);
  sqcRZGate(q, -0.7428992378334422, 1);
  sqcRYGate(q, -0.21280955707863125, 2);
  sqcRZGate(q, -0.16358279512181054, 2);
  sqcRYGate(q, 1.4152332406914914, 3);
  sqcRZGate(q, -2.3878376297228106, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7771924993495434, 0);
  sqcRZGate(q, 0.9089860036358302, 0);
  sqcRYGate(q, -1.782626994908715, 1);
  sqcRZGate(q, -1.8909196552476857, 1);
  sqcRYGate(q, -1.8701418966833796, 2);
  sqcRZGate(q, -2.7182804646045455, 2);
  sqcRYGate(q, -1.221440590246983, 3);
  sqcRZGate(q, 0.769625241413781, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8530326464007212, 0);
  sqcRZGate(q, -3.076285101312669, 0);
  sqcRYGate(q, -0.32485740865065155, 1);
  sqcRZGate(q, -1.880397184844375, 1);
  sqcRYGate(q, 0.9370888970185698, 2);
  sqcRZGate(q, -3.083770724496873, 2);
  sqcRYGate(q, -2.337860911943463, 3);
  sqcRZGate(q, -3.0482895675893027, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.38740949911062916, 0);
  sqcRZGate(q, -1.948471009929575, 0);
  sqcRYGate(q, 1.9989664881519433, 1);
  sqcRZGate(q, -2.698198974005495, 1);
  sqcRYGate(q, -0.9546082573980831, 2);
  sqcRZGate(q, -1.525412197143691, 2);
  sqcRYGate(q, -2.323543274433052, 3);
  sqcRZGate(q, 1.2792844931961929, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.6402358906100911, 0);
  sqcRZGate(q, -2.293334984984986, 0);
  sqcRYGate(q, 0.8683083804273793, 1);
  sqcRZGate(q, 2.443705664378503, 1);
  sqcRYGate(q, -2.0274475152067, 2);
  sqcRZGate(q, 2.702931902374919, 2);
  sqcRYGate(q, 1.151456111312028, 3);
  sqcRZGate(q, -0.7569896586846204, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8299670680872593, 0);
  sqcRZGate(q, -0.6759584547894818, 0);
  sqcRYGate(q, -0.43159193424351644, 1);
  sqcRZGate(q, -1.1358367379276526, 1);
  sqcRYGate(q, 2.065062225713792, 2);
  sqcRZGate(q, -2.7399548065263444, 2);
  sqcRYGate(q, 2.7979328200488887, 3);
  sqcRZGate(q, 1.8992265855774346, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.0865229768641322, 0);
  sqcRZGate(q, 2.7652035234857615, 0);
  sqcRYGate(q, 2.8281440727877083, 1);
  sqcRZGate(q, -0.6683096451034807, 1);
  sqcRYGate(q, 1.2017219424325056, 2);
  sqcRZGate(q, 2.7765840042350365, 2);
  sqcRYGate(q, -2.1019787264560215, 3);
  sqcRZGate(q, 2.5903561122968246, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6663119936322306, 0);
  sqcRZGate(q, -0.34913441402893935, 0);
  sqcRYGate(q, 2.580171484328884, 1);
  sqcRZGate(q, -1.6444312494118023, 1);
  sqcRYGate(q, 1.903846831222399, 2);
  sqcRZGate(q, -0.7419361889813602, 2);
  sqcRYGate(q, 1.2941836708899748, 3);
  sqcRZGate(q, -1.7786117342423131, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.5406071472637706, 0);
  sqcRZGate(q, 2.018174926011376, 0);
  sqcRYGate(q, 1.255863033899038, 1);
  sqcRZGate(q, 2.1259634457279972, 1);
  sqcRYGate(q, -0.4852429589964323, 2);
  sqcRZGate(q, 1.8360062236414123, 2);
  sqcRYGate(q, -1.6778502354724534, 3);
  sqcRZGate(q, 0.8284263309132928, 3);

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
