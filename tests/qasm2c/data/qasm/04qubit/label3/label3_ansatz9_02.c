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

  sqcRYGate(q, -2.3846525625352095, 0);
  sqcRYGate(q, 1.8451466212435368, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0641856764708124, 0);
  sqcRYGate(q, 0.4280281108322874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.325174063234571, 2);
  sqcRYGate(q, 0.3413928655984151, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7389879824862455, 2);
  sqcRYGate(q, 1.4053798548749348, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9319872246779455, 0);
  sqcRYGate(q, -1.5702352312450891, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4436310981335663, 0);
  sqcRYGate(q, 2.80052165208456, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2692689396787027, 1);
  sqcRYGate(q, 1.017992141726804, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8260390661278016, 1);
  sqcRYGate(q, 2.141485064289971, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1921464898380147, 0);
  sqcRYGate(q, 1.1949336125093148, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.43958950110058065, 0);
  sqcRYGate(q, -1.3132566063349476, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3283517420174675, 1);
  sqcRYGate(q, 1.0091819719438617, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.35259724051954505, 1);
  sqcRYGate(q, 1.7926059568577333, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6950842413011538, 0);
  sqcRYGate(q, -2.7284721106739074, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.109360248539866, 0);
  sqcRYGate(q, 2.317601585524831, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2591881306536106, 2);
  sqcRYGate(q, -2.996351918873201, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8262306742513361, 2);
  sqcRYGate(q, -2.8300159939527947, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1539342047535444, 0);
  sqcRYGate(q, -2.7761238512911004, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4691165670692574, 0);
  sqcRYGate(q, 0.3914270390130022, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.606156668126821, 1);
  sqcRYGate(q, -0.2213644638194223, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9917427781994523, 1);
  sqcRYGate(q, 2.8739771964725382, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9363532452012681, 0);
  sqcRYGate(q, -0.10993946466285909, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.11391299001657, 0);
  sqcRYGate(q, 0.42371503074847716, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9859026791971752, 1);
  sqcRYGate(q, -2.7730456230736915, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1471943775983835, 1);
  sqcRYGate(q, 0.665486116821679, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.407580545603385, 0);
  sqcRYGate(q, 3.135801448497925, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5117832035230983, 0);
  sqcRYGate(q, -2.2516937086225384, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2141080369815995, 2);
  sqcRYGate(q, 0.7154263273060311, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.04549512772397, 2);
  sqcRYGate(q, -2.9260918472197535, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10860108884954764, 0);
  sqcRYGate(q, 0.12035149992047518, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1764153707386074, 0);
  sqcRYGate(q, 1.937761384782255, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4940505789223968, 1);
  sqcRYGate(q, 1.7622117600365028, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.060217912649632, 1);
  sqcRYGate(q, -0.9526113072551938, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.591379820675633, 0);
  sqcRYGate(q, 0.8323559304528452, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4911916565546797, 0);
  sqcRYGate(q, -1.2628164536315074, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6171557069932971, 1);
  sqcRYGate(q, 3.1359710969805117, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.634049385832256, 1);
  sqcRYGate(q, 1.433558898392027, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.500629476373181, 0);
  sqcRYGate(q, 1.25959864170325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.967905201800424, 0);
  sqcRYGate(q, 1.3385559106840086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1205793826676707, 2);
  sqcRYGate(q, -0.2853889253901709, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0547243952754104, 2);
  sqcRYGate(q, -1.506635582451825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3924377844413095, 0);
  sqcRYGate(q, -3.102940899189137, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9056174135731291, 0);
  sqcRYGate(q, 1.3302182258500466, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0827167988033866, 1);
  sqcRYGate(q, 2.041482705564958, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.479591985160932, 1);
  sqcRYGate(q, -1.942364537695168, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.677576383839294, 0);
  sqcRYGate(q, 1.6605822372306207, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3023024740902522, 0);
  sqcRYGate(q, 0.5109897299620104, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.04148007659245856, 1);
  sqcRYGate(q, 0.836885374368685, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4204552956187837, 1);
  sqcRYGate(q, 2.334219081680335, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.906761025707591, 0);
  sqcRYGate(q, -2.339401372938993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1108278606908089, 0);
  sqcRYGate(q, 0.044921861567016386, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.160513402150009, 2);
  sqcRYGate(q, -1.8951148170202083, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3395780476246286, 2);
  sqcRYGate(q, -0.9184826478077115, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9064758995973632, 0);
  sqcRYGate(q, -1.3893996979741725, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.42284905392686667, 0);
  sqcRYGate(q, 1.3194198301325095, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1491779264965114, 1);
  sqcRYGate(q, 0.8335802868201693, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1201224963575813, 1);
  sqcRYGate(q, -0.0852909642623087, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1176724353412153, 0);
  sqcRYGate(q, 1.3838912122236764, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8982402654006387, 0);
  sqcRYGate(q, -1.0552607345873086, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5688663844524573, 1);
  sqcRYGate(q, 1.6059052691185782, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4615209331969998, 1);
  sqcRYGate(q, 0.9774742443707308, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.54897412275461, 0);
  sqcRYGate(q, -2.2469980496499593, 1);
  sqcRYGate(q, 2.8318176615899677, 2);
  sqcRYGate(q, 1.5881503137868735, 3);

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
