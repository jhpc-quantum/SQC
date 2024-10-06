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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 3.1415905624115315, 0);
  sqcRZGate(q, 2.452029504234354, 0);
  sqcRYGate(q, 3.141590152541498, 1);
  sqcRZGate(q, 1.1149675392393492, 1);
  sqcRYGate(q, -3.141592096371226, 2);
  sqcRZGate(q, -2.8059439784245925, 2);
  sqcRYGate(q, 2.5340769310685882, 3);
  sqcRZGate(q, 9.171806451213627e-06, 3);
  sqcRYGate(q, 1.5707761225209176, 4);
  sqcRZGate(q, 0.5911573459927837, 4);
  sqcRYGate(q, -1.5707910894492805, 5);
  sqcRZGate(q, 2.329610687345911, 5);
  sqcRYGate(q, -1.5707963772354123, 6);
  sqcRZGate(q, -0.5046111915534413, 6);
  sqcRYGate(q, 3.1415872065100543, 7);
  sqcRZGate(q, -0.05835602789218263, 7);
  sqcRYGate(q, 3.1415293621965836, 8);
  sqcRZGate(q, -2.2225676809586883, 8);
  sqcRYGate(q, -3.1415145980056374, 9);
  sqcRZGate(q, 2.3444835258437116, 9);
  sqcRYGate(q, 1.302001150715451, 10);
  sqcRZGate(q, -1.3232386728675316, 10);
  sqcRYGate(q, 3.140767186181906, 11);
  sqcRZGate(q, 3.0422499071696594, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 3.141591422773743, 0);
  sqcRZGate(q, 0.6011100787554169, 0);
  sqcRYGate(q, -0.7844246908357099, 1);
  sqcRZGate(q, -1.824091333436248e-06, 1);
  sqcRYGate(q, 1.5707954256083247, 2);
  sqcRZGate(q, -0.1670819496404592, 2);
  sqcRYGate(q, -1.5708023544429377, 3);
  sqcRZGate(q, -0.775532019027758, 3);
  sqcRYGate(q, -3.1415923556791805, 4);
  sqcRZGate(q, 1.7079185343763832, 4);
  sqcRYGate(q, -0.0001473999748371962, 5);
  sqcRZGate(q, 0.8119707984356727, 5);
  sqcRYGate(q, 3.1415923870829103, 6);
  sqcRZGate(q, -2.0754076283613756, 6);
  sqcRYGate(q, 2.084396722091916, 7);
  sqcRZGate(q, -3.0588735315155815, 7);
  sqcRYGate(q, 1.5707786505212904, 8);
  sqcRZGate(q, 2.08110937139333, 8);
  sqcRYGate(q, -6.375164201521955e-05, 9);
  sqcRZGate(q, -2.9713560379165, 9);
  sqcRYGate(q, 0.843787983838169, 10);
  sqcRZGate(q, -1.9341783068871352, 10);
  sqcRYGate(q, 0.0002199184271054739, 11);
  sqcRZGate(q, -0.25634655470810347, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.5707950431203137, 0);
  sqcRZGate(q, -1.159718519962535, 0);
  sqcRYGate(q, 1.5707988768422647, 1);
  sqcRZGate(q, 0.6038910175425691, 1);
  sqcRYGate(q, 4.3806336424978554e-07, 2);
  sqcRZGate(q, -2.974512504993227, 2);
  sqcRYGate(q, 3.141592307072936, 3);
  sqcRZGate(q, -0.7754954277836186, 3);
  sqcRYGate(q, -1.3767458960365443e-06, 4);
  sqcRZGate(q, 0.603538023743118, 4);
  sqcRYGate(q, -2.5340021784132016, 5);
  sqcRZGate(q, 3.140078188485556, 5);
  sqcRYGate(q, 1.5707703332852443, 6);
  sqcRZGate(q, -1.5707942377133073, 6);
  sqcRYGate(q, 5.615681038406705e-06, 7);
  sqcRZGate(q, -1.653513281719114, 7);
  sqcRYGate(q, -3.1412848992329887, 8);
  sqcRZGate(q, 0.40047387390915506, 8);
  sqcRYGate(q, -1.6623681140060995, 9);
  sqcRZGate(q, -1.5707968956808727, 9);
  sqcRYGate(q, 1.5707929253110402, 10);
  sqcRZGate(q, 2.118177803884665, 10);
  sqcRYGate(q, 1.5700850733510343, 11);
  sqcRZGate(q, 0.7646986104707453, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -7.237399881954873e-06, 0);
  sqcRZGate(q, 1.5866769344836174, 0);
  sqcRYGate(q, 9.463845116180675e-07, 1);
  sqcRZGate(q, -1.8626793519598102, 1);
  sqcRYGate(q, -1.5707965831980415, 2);
  sqcRZGate(q, -2.7146336664002435, 2);
  sqcRYGate(q, -1.5707969957597099, 3);
  sqcRZGate(q, 1.8828079086496543, 3);
  sqcRYGate(q, 6.16298567352164e-07, 4);
  sqcRZGate(q, -0.8180898305494827, 4);
  sqcRYGate(q, 3.079324928638408, 5);
  sqcRZGate(q, 1.8813401164795371, 5);
  sqcRYGate(q, -1.5707968000356836, 6);
  sqcRZGate(q, -2.2395155316758077, 6);
  sqcRYGate(q, -1.5707983316296965, 7);
  sqcRZGate(q, 1.8828361996922205, 7);
  sqcRYGate(q, -3.688315316900599e-06, 8);
  sqcRZGate(q, -1.5964601651191048, 8);
  sqcRYGate(q, -1.5707961277605698, 9);
  sqcRZGate(q, 1.8828114500007895, 9);
  sqcRYGate(q, 3.1415883911575175, 10);
  sqcRZGate(q, 1.9827833686832808, 10);
  sqcRYGate(q, 1.570748107040586, 11);
  sqcRZGate(q, -2.829538319619096, 11);

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
