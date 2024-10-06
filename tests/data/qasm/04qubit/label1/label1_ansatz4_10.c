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

  sqcRYGate(q, 0.9387533142055625, 0);
  sqcRZGate(q, -1.0008581821370608, 0);
  sqcRYGate(q, -1.8341143238131956, 1);
  sqcRZGate(q, 1.6085959179830456, 1);
  sqcRYGate(q, -2.792076377897915, 2);
  sqcRZGate(q, -3.0086256977116883, 2);
  sqcRYGate(q, 1.3630238641514971, 3);
  sqcRZGate(q, -1.3663942516628715, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7588699505082377, 0);
  sqcRZGate(q, 0.1540903634811004, 0);
  sqcRYGate(q, -2.064167555570001, 1);
  sqcRZGate(q, 1.8859911916316818, 1);
  sqcRYGate(q, 1.3834694446109044, 2);
  sqcRZGate(q, 0.5256561480871461, 2);
  sqcRYGate(q, 2.8466886178315405, 3);
  sqcRZGate(q, -1.791891585982179, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8102356500074992, 0);
  sqcRZGate(q, -2.4421659930541635, 0);
  sqcRYGate(q, -2.5937975716152497, 1);
  sqcRZGate(q, -1.1055064616897559, 1);
  sqcRYGate(q, -3.038610875111001, 2);
  sqcRZGate(q, -2.5164984911642327, 2);
  sqcRYGate(q, 1.548489544332999, 3);
  sqcRZGate(q, -0.8973969805814022, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1278005327542937, 0);
  sqcRZGate(q, -1.2428591047661879, 0);
  sqcRYGate(q, 2.2617550108432933, 1);
  sqcRZGate(q, 1.4657000518027727, 1);
  sqcRYGate(q, 2.4662607387749285, 2);
  sqcRZGate(q, 0.6379175953194537, 2);
  sqcRYGate(q, -0.6066868487165644, 3);
  sqcRZGate(q, 1.10553725638558, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5783336069771354, 0);
  sqcRZGate(q, 1.4915063342202606, 0);
  sqcRYGate(q, 1.6798535521347915, 1);
  sqcRZGate(q, 2.2389494634626486, 1);
  sqcRYGate(q, -0.12414684559377687, 2);
  sqcRZGate(q, -0.325937523844134, 2);
  sqcRYGate(q, -2.310256208196181, 3);
  sqcRZGate(q, -0.17610528869507105, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5645582311261794, 0);
  sqcRZGate(q, -1.59011879329328, 0);
  sqcRYGate(q, -1.7076522651573645, 1);
  sqcRZGate(q, -2.847770252115992, 1);
  sqcRYGate(q, -1.0586464240058442, 2);
  sqcRZGate(q, 2.8301436148649968, 2);
  sqcRYGate(q, 0.3698287920253334, 3);
  sqcRZGate(q, 2.6126587667357684, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9132943565009395, 0);
  sqcRZGate(q, -0.6517771272900372, 0);
  sqcRYGate(q, -2.0660420961575445, 1);
  sqcRZGate(q, -1.4121976915629428, 1);
  sqcRYGate(q, -1.7003634604158027, 2);
  sqcRZGate(q, 2.4350796815112945, 2);
  sqcRYGate(q, -0.25616504394833844, 3);
  sqcRZGate(q, -1.3007984506107468, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.999177001465361, 0);
  sqcRZGate(q, -1.510419781978186, 0);
  sqcRYGate(q, -1.712770189411402, 1);
  sqcRZGate(q, 0.2575751462959331, 1);
  sqcRYGate(q, 1.3663559174131463, 2);
  sqcRZGate(q, 0.5989694370863591, 2);
  sqcRYGate(q, -1.0595217986525791, 3);
  sqcRZGate(q, 1.8388727188709384, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.461860013943223, 0);
  sqcRZGate(q, -2.5992730765386796, 0);
  sqcRYGate(q, -1.237216418710008, 1);
  sqcRZGate(q, -2.1321225466060554, 1);
  sqcRYGate(q, 2.2629822357921867, 2);
  sqcRZGate(q, 1.8293122797891743, 2);
  sqcRYGate(q, -2.4218633808459185, 3);
  sqcRZGate(q, 0.7853844709784692, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6743852219794721, 0);
  sqcRZGate(q, 2.8882430088668047, 0);
  sqcRYGate(q, 0.7302108930174525, 1);
  sqcRZGate(q, 2.0870764626321447, 1);
  sqcRYGate(q, -1.0006164712271488, 2);
  sqcRZGate(q, 0.6805040300928376, 2);
  sqcRYGate(q, -0.1245698080803245, 3);
  sqcRZGate(q, -1.9457368319273511, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.562987393696286, 0);
  sqcRZGate(q, -2.3988264115496385, 0);
  sqcRYGate(q, -1.9236720321190024, 1);
  sqcRZGate(q, 2.2949571605933996, 1);
  sqcRYGate(q, -2.1919785402894547, 2);
  sqcRZGate(q, 0.9322850535998555, 2);
  sqcRYGate(q, -0.3624498454356842, 3);
  sqcRZGate(q, -3.124087907875121, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.001191540432538, 0);
  sqcRZGate(q, -1.1890217748150822, 0);
  sqcRYGate(q, 0.3787440393304629, 1);
  sqcRZGate(q, 0.9895426506894045, 1);
  sqcRYGate(q, -1.2678496609412404, 2);
  sqcRZGate(q, -1.196117791653453, 2);
  sqcRYGate(q, 0.2790856087431368, 3);
  sqcRZGate(q, 2.758798565366106, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6571823400237617, 0);
  sqcRZGate(q, -2.8275698348483447, 0);
  sqcRYGate(q, -1.7943308345389142, 1);
  sqcRZGate(q, -1.0605786962090447, 1);
  sqcRYGate(q, -2.626020687878358, 2);
  sqcRZGate(q, -1.9948171937720096, 2);
  sqcRYGate(q, -1.5418365227949868, 3);
  sqcRZGate(q, -2.5724407737616297, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3487602145393134, 0);
  sqcRZGate(q, -1.4212984342336268, 0);
  sqcRYGate(q, 0.45280568615009553, 1);
  sqcRZGate(q, 2.429356574947684, 1);
  sqcRYGate(q, -1.8016229985704424, 2);
  sqcRZGate(q, -1.0812596599509547, 2);
  sqcRYGate(q, 0.10380291280682852, 3);
  sqcRZGate(q, -2.7598546182380446, 3);

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
