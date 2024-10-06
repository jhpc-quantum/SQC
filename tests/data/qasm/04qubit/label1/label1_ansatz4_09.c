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

  sqcRYGate(q, 1.1164891567139716, 0);
  sqcRZGate(q, -0.8618799898324829, 0);
  sqcRYGate(q, -1.92099134649671, 1);
  sqcRZGate(q, -1.9774811445142806, 1);
  sqcRYGate(q, 3.056322815507038, 2);
  sqcRZGate(q, 2.620342356278399, 2);
  sqcRYGate(q, 2.6994356570709384, 3);
  sqcRZGate(q, -2.769977655527834, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.673260082756304, 0);
  sqcRZGate(q, -2.7982160078884073, 0);
  sqcRYGate(q, 0.3432611819185869, 1);
  sqcRZGate(q, -2.669629897761027, 1);
  sqcRYGate(q, 1.5644137977839438, 2);
  sqcRZGate(q, -3.1209857580356903, 2);
  sqcRYGate(q, 0.004107445501247754, 3);
  sqcRZGate(q, -2.3004114785071366, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1559851629084057, 0);
  sqcRZGate(q, 0.6710170828172145, 0);
  sqcRYGate(q, -0.13864123053312927, 1);
  sqcRZGate(q, 2.0681153387244393, 1);
  sqcRYGate(q, -1.463157853358302, 2);
  sqcRZGate(q, -2.187847784565723, 2);
  sqcRYGate(q, -0.12702293982384827, 3);
  sqcRZGate(q, -0.3076532556179922, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.473256853294102, 0);
  sqcRZGate(q, -0.031744060054800904, 0);
  sqcRYGate(q, 2.760930573079642, 1);
  sqcRZGate(q, -2.5882493014435846, 1);
  sqcRYGate(q, 0.6686458876696824, 2);
  sqcRZGate(q, 0.6449519604142104, 2);
  sqcRYGate(q, -2.31846543817559, 3);
  sqcRZGate(q, -1.9751008131371117, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.26503051446906145, 0);
  sqcRZGate(q, -0.8995470532106856, 0);
  sqcRYGate(q, -1.731719181800726, 1);
  sqcRZGate(q, 0.35129675619986506, 1);
  sqcRYGate(q, -1.4104200770353128, 2);
  sqcRZGate(q, 1.6515217421728323, 2);
  sqcRYGate(q, -2.792630542255192, 3);
  sqcRZGate(q, -0.7448203149166831, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1974513070947372, 0);
  sqcRZGate(q, 1.1122423432109223, 0);
  sqcRYGate(q, -2.943938142782706, 1);
  sqcRZGate(q, -2.3786630674170395, 1);
  sqcRYGate(q, -1.7630860026018746, 2);
  sqcRZGate(q, -2.788132169719285, 2);
  sqcRYGate(q, 1.0611944599520575, 3);
  sqcRZGate(q, -2.622986300864285, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4886880074554103, 0);
  sqcRZGate(q, -1.0975983188918939, 0);
  sqcRYGate(q, 2.8526231602573415, 1);
  sqcRZGate(q, 2.654876214503434, 1);
  sqcRYGate(q, 0.4134744939470343, 2);
  sqcRZGate(q, 2.432887650536934, 2);
  sqcRYGate(q, 2.1080468650936055, 3);
  sqcRZGate(q, 2.5338858703121683, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.237829608026557, 0);
  sqcRZGate(q, 0.2625498553021229, 0);
  sqcRYGate(q, -2.243507493181375, 1);
  sqcRZGate(q, -0.18447279392805166, 1);
  sqcRYGate(q, -0.5564082736411528, 2);
  sqcRZGate(q, -1.452692868881451, 2);
  sqcRYGate(q, -1.868608030364045, 3);
  sqcRZGate(q, -0.38300908074428275, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6341801803930212, 0);
  sqcRZGate(q, 2.3091806423790437, 0);
  sqcRYGate(q, -1.8352654160385686, 1);
  sqcRZGate(q, -0.041598577527497835, 1);
  sqcRYGate(q, -0.5911694781366859, 2);
  sqcRZGate(q, -0.5800001993312156, 2);
  sqcRYGate(q, 1.3132062998102967, 3);
  sqcRZGate(q, -2.9415240021530455, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7971190093336347, 0);
  sqcRZGate(q, 0.08294658781221925, 0);
  sqcRYGate(q, 2.445300561160916, 1);
  sqcRZGate(q, 1.7770361739694183, 1);
  sqcRYGate(q, -0.8793406089064412, 2);
  sqcRZGate(q, 2.2726075072051932, 2);
  sqcRYGate(q, 0.44450177911106614, 3);
  sqcRZGate(q, 2.8085116330556255, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6764532011389885, 0);
  sqcRZGate(q, -2.753893054111766, 0);
  sqcRYGate(q, -1.1016089783390526, 1);
  sqcRZGate(q, -0.6716697952463981, 1);
  sqcRYGate(q, -0.8268036403116303, 2);
  sqcRZGate(q, 1.2253482179927055, 2);
  sqcRYGate(q, -0.6169627429218889, 3);
  sqcRZGate(q, -0.3791527245083987, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6975264263739147, 0);
  sqcRZGate(q, 1.1086262561077174, 0);
  sqcRYGate(q, 1.2880184351298043, 1);
  sqcRZGate(q, 2.141654672051912, 1);
  sqcRYGate(q, 1.5842270226538666, 2);
  sqcRZGate(q, 0.7939481023069453, 2);
  sqcRYGate(q, -2.1098610590880007, 3);
  sqcRZGate(q, -2.1241248372205, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4082568496036274, 0);
  sqcRZGate(q, -0.2863550274942443, 0);
  sqcRYGate(q, -1.3864542798732797, 1);
  sqcRZGate(q, 1.487050156955931, 1);
  sqcRYGate(q, 2.1994606645010126, 2);
  sqcRZGate(q, 0.013993075951603722, 2);
  sqcRYGate(q, -3.138875499272577, 3);
  sqcRZGate(q, -1.2007449649537676, 3);

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
