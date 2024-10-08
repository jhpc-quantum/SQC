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

  sqcRYGate(q, -0.1700479996471951, 0);
  sqcRZGate(q, 0.03733650229826534, 0);
  sqcRYGate(q, -1.2290018704056687, 1);
  sqcRZGate(q, -0.6268550274638846, 1);
  sqcRYGate(q, 2.152249049385888, 2);
  sqcRZGate(q, -1.3563604455134077, 2);
  sqcRYGate(q, 1.9956530180443481, 3);
  sqcRZGate(q, -1.4914601770324376, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.04229137963921771, 0);
  sqcRZGate(q, 0.2980159563621988, 0);
  sqcRYGate(q, 2.98639884486349, 1);
  sqcRZGate(q, 2.968893693429695, 1);
  sqcRYGate(q, -2.90443775295973, 2);
  sqcRZGate(q, -1.0493758070385582, 2);
  sqcRYGate(q, -1.4817539177458983, 3);
  sqcRZGate(q, -0.9297134493473357, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.4105362339426384, 0);
  sqcRZGate(q, -2.5028603345100158, 0);
  sqcRYGate(q, 0.8521674537198473, 1);
  sqcRZGate(q, -2.0045628839145477, 1);
  sqcRYGate(q, 0.1083837048930576, 2);
  sqcRZGate(q, 1.8393136475148135, 2);
  sqcRYGate(q, 1.619768144010413, 3);
  sqcRZGate(q, -2.3261026150352153, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.291785956011533, 0);
  sqcRZGate(q, -2.1762605970557627, 0);
  sqcRYGate(q, 0.7601067840704667, 1);
  sqcRZGate(q, -2.3281594335985867, 1);
  sqcRYGate(q, -1.5255784417963687, 2);
  sqcRZGate(q, -0.710341294346128, 2);
  sqcRYGate(q, -0.3940587717494748, 3);
  sqcRZGate(q, 2.659780221676015, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.943023681622841, 0);
  sqcRZGate(q, 1.1678948791490975, 0);
  sqcRYGate(q, -2.597059132824371, 1);
  sqcRZGate(q, -0.10189747653614853, 1);
  sqcRYGate(q, 1.545532393833779, 2);
  sqcRZGate(q, 1.451262395932437, 2);
  sqcRYGate(q, -0.8197103231983895, 3);
  sqcRZGate(q, -0.3193313220375815, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.598756935522072, 0);
  sqcRZGate(q, 0.1744175827368851, 0);
  sqcRYGate(q, 2.161830109684224, 1);
  sqcRZGate(q, 0.09788787403969312, 1);
  sqcRYGate(q, 0.7761668041713552, 2);
  sqcRZGate(q, 1.4227744804104736, 2);
  sqcRYGate(q, 3.0949261393628347, 3);
  sqcRZGate(q, 2.544261854337778, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.2280852838431988, 0);
  sqcRZGate(q, -1.2903824081276227, 0);
  sqcRYGate(q, -1.918027567895578, 1);
  sqcRZGate(q, 3.1308220368628286, 1);
  sqcRYGate(q, 0.04865068397327963, 2);
  sqcRZGate(q, -2.479290058468136, 2);
  sqcRYGate(q, -0.6267869739824088, 3);
  sqcRZGate(q, -1.6544331644386876, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.6294341116292372, 0);
  sqcRZGate(q, -0.3191958833605548, 0);
  sqcRYGate(q, 1.1257466553145719, 1);
  sqcRZGate(q, -0.2452780546458745, 1);
  sqcRYGate(q, 2.3667491953362365, 2);
  sqcRZGate(q, 0.44276823392718223, 2);
  sqcRYGate(q, 0.19344932463730657, 3);
  sqcRZGate(q, -2.8517293847309664, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9332609967245659, 0);
  sqcRZGate(q, 0.8720363042524806, 0);
  sqcRYGate(q, -0.7916166806064426, 1);
  sqcRZGate(q, -0.45412211016012344, 1);
  sqcRYGate(q, -0.3015912429208265, 2);
  sqcRZGate(q, -0.0509364283604965, 2);
  sqcRYGate(q, 0.7643043674454708, 3);
  sqcRZGate(q, 2.9737902109478833, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.4793361803094136, 0);
  sqcRZGate(q, 3.027028630698226, 0);
  sqcRYGate(q, 3.1407988814857073, 1);
  sqcRZGate(q, 1.7221146879178608, 1);
  sqcRYGate(q, 0.08491506027169748, 2);
  sqcRZGate(q, -0.8739813323560406, 2);
  sqcRYGate(q, 2.837158366516264, 3);
  sqcRZGate(q, 2.2136099180154667, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8754076041982242, 0);
  sqcRZGate(q, -1.6464584947153098, 0);
  sqcRYGate(q, -0.9877941619669316, 1);
  sqcRZGate(q, 2.7781626919917324, 1);
  sqcRYGate(q, 1.5356567224688789, 2);
  sqcRZGate(q, 1.640479754954872, 2);
  sqcRYGate(q, -2.4316627638137365, 3);
  sqcRZGate(q, -1.5910246829949508, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.4819270597967773, 0);
  sqcRZGate(q, -2.1392674401432905, 0);
  sqcRYGate(q, 0.8596581094396499, 1);
  sqcRZGate(q, 2.2836133206967117, 1);
  sqcRYGate(q, -0.8081740048053082, 2);
  sqcRZGate(q, 0.46392980818357454, 2);
  sqcRYGate(q, -1.9063409223209584, 3);
  sqcRZGate(q, 2.5968406140018696, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.560365763907485, 0);
  sqcRZGate(q, 1.2793117041285462, 0);
  sqcRYGate(q, 0.45994436086059665, 1);
  sqcRZGate(q, 1.5294535067835424, 1);
  sqcRYGate(q, -2.5065142049018587, 2);
  sqcRZGate(q, -2.462887757450867, 2);
  sqcRYGate(q, -0.4686559605848499, 3);
  sqcRZGate(q, -2.6930778700789255, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.241336354149074, 0);
  sqcRZGate(q, -0.08944228575282502, 0);
  sqcRYGate(q, -1.2577223082271924, 1);
  sqcRZGate(q, -1.205689409392415, 1);
  sqcRYGate(q, -0.3066552214009289, 2);
  sqcRZGate(q, 0.7309960091031314, 2);
  sqcRYGate(q, 2.962579185232166, 3);
  sqcRZGate(q, -1.220403559253767, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6022737967274647, 0);
  sqcRZGate(q, -2.1044953359876226, 0);
  sqcRYGate(q, -2.936237849617524, 1);
  sqcRZGate(q, -1.5621364157968127, 1);
  sqcRYGate(q, 1.9179637984701217, 2);
  sqcRZGate(q, -3.124177736146249, 2);
  sqcRYGate(q, -0.23028476252257385, 3);
  sqcRZGate(q, -1.5400373957132447, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.008005815793739, 0);
  sqcRZGate(q, -1.826632588112342, 0);
  sqcRYGate(q, 0.27588690157675233, 1);
  sqcRZGate(q, -1.4609664146200245, 1);
  sqcRYGate(q, -2.8625739147353375, 2);
  sqcRZGate(q, -0.4159322270447765, 2);
  sqcRYGate(q, -1.106931980302513, 3);
  sqcRZGate(q, -2.4544526223984353, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7092845170267799, 0);
  sqcRZGate(q, 0.8289101244880969, 0);
  sqcRYGate(q, -2.822651208394701, 1);
  sqcRZGate(q, 3.0490095254246743, 1);
  sqcRYGate(q, -0.26133822027748144, 2);
  sqcRZGate(q, 2.6551076951972057, 2);
  sqcRYGate(q, 0.21478368465193143, 3);
  sqcRZGate(q, 1.5358391140592467, 3);

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
