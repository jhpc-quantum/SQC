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

  sqcRYGate(q, -0.44799793164967916, 0);
  sqcRZGate(q, -1.4078096774751137, 0);
  sqcRYGate(q, -2.706755198371221, 1);
  sqcRZGate(q, -1.833391932368168, 1);
  sqcRYGate(q, 2.515509821043657, 2);
  sqcRZGate(q, -1.2253450928428127, 2);
  sqcRYGate(q, 0.12363503516935827, 3);
  sqcRZGate(q, 0.1376616665267054, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.664573043787912, 0);
  sqcRZGate(q, 0.34199760231635784, 0);
  sqcRYGate(q, -2.075332328828494, 1);
  sqcRZGate(q, 2.886823477267448, 1);
  sqcRYGate(q, 2.549392250568754, 2);
  sqcRZGate(q, 2.5313403328411397, 2);
  sqcRYGate(q, 1.531391762551475, 3);
  sqcRZGate(q, 0.840055230132446, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.637751220487178, 0);
  sqcRZGate(q, 2.245409875352455, 0);
  sqcRYGate(q, -1.4845889563005294, 1);
  sqcRZGate(q, 0.8873954223826737, 1);
  sqcRYGate(q, -0.2386110649829626, 2);
  sqcRZGate(q, -1.113337032000424, 2);
  sqcRYGate(q, -3.0344305035979264, 3);
  sqcRZGate(q, -0.3742448018600717, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0272865809197853, 0);
  sqcRZGate(q, 2.5625363536579986, 0);
  sqcRYGate(q, 2.194697188459499, 1);
  sqcRZGate(q, 1.5877163792131526, 1);
  sqcRYGate(q, 1.5966751029381325, 2);
  sqcRZGate(q, 2.6139907761247336, 2);
  sqcRYGate(q, -0.5560563795259368, 3);
  sqcRZGate(q, 2.5493759632690933, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.029966170167971, 0);
  sqcRZGate(q, 0.433818269285661, 0);
  sqcRYGate(q, 0.019786599632172223, 1);
  sqcRZGate(q, 2.393216130889447, 1);
  sqcRYGate(q, 0.147729603682202, 2);
  sqcRZGate(q, 0.6204019203910278, 2);
  sqcRYGate(q, 0.6546377282457554, 3);
  sqcRZGate(q, -1.4230457670228391, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.531121370505212, 0);
  sqcRZGate(q, 0.9628387172650648, 0);
  sqcRYGate(q, 3.1345020021711885, 1);
  sqcRZGate(q, 1.423093121833935, 1);
  sqcRYGate(q, -2.4091621767526292, 2);
  sqcRZGate(q, 0.0906774327676591, 2);
  sqcRYGate(q, -0.6440402016138772, 3);
  sqcRZGate(q, -0.2045809308062747, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6753760932759407, 0);
  sqcRZGate(q, 0.5314573920063419, 0);
  sqcRYGate(q, 0.6550843583034274, 1);
  sqcRZGate(q, -2.2356660816778824, 1);
  sqcRYGate(q, -0.9097807294561413, 2);
  sqcRZGate(q, -0.8482953269590104, 2);
  sqcRYGate(q, 1.8997187913584188, 3);
  sqcRZGate(q, 2.9704143543775485, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4386404077590544, 0);
  sqcRZGate(q, 2.9765729975417425, 0);
  sqcRYGate(q, 1.6282463795085882, 1);
  sqcRZGate(q, 2.8541402869709778, 1);
  sqcRYGate(q, -1.4823595568479038, 2);
  sqcRZGate(q, 1.1196226485154757, 2);
  sqcRYGate(q, 3.0901936033134585, 3);
  sqcRZGate(q, -1.9145211807911258, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1256368493746987, 0);
  sqcRZGate(q, 1.1897334491964378, 0);
  sqcRYGate(q, -0.40196547985667064, 1);
  sqcRZGate(q, 1.321978196754742, 1);
  sqcRYGate(q, 1.2134927208386364, 2);
  sqcRZGate(q, -0.47396162191449687, 2);
  sqcRYGate(q, -0.45352598681603684, 3);
  sqcRZGate(q, -0.2852542994710969, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9770925370469596, 0);
  sqcRZGate(q, 1.060733053148418, 0);
  sqcRYGate(q, 0.4195988505078381, 1);
  sqcRZGate(q, 3.1063698842951797, 1);
  sqcRYGate(q, -1.1290138323325811, 2);
  sqcRZGate(q, -1.6850919935211959, 2);
  sqcRYGate(q, 0.0355624071371435, 3);
  sqcRZGate(q, -0.6321092842278208, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.274930133021603, 0);
  sqcRZGate(q, -2.0432341283917044, 0);
  sqcRYGate(q, -2.905309516540426, 1);
  sqcRZGate(q, 3.0120487978521266, 1);
  sqcRYGate(q, -2.4690968247721683, 2);
  sqcRZGate(q, 2.006155868981338, 2);
  sqcRYGate(q, -1.1314107908333773, 3);
  sqcRZGate(q, -2.408914610931263, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9689436556112128, 0);
  sqcRZGate(q, -0.6144692740186821, 0);
  sqcRYGate(q, 0.09916687157999958, 1);
  sqcRZGate(q, -1.6894695907811226, 1);
  sqcRYGate(q, -1.8555015556527525, 2);
  sqcRZGate(q, -1.9446668538920866, 2);
  sqcRYGate(q, -1.2652211132684767, 3);
  sqcRZGate(q, -0.0617904764979409, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2527611020789036, 0);
  sqcRZGate(q, -0.25749424707834034, 0);
  sqcRYGate(q, -1.9742757530924235, 1);
  sqcRZGate(q, -1.2905587327091042, 1);
  sqcRYGate(q, -2.1058816936369267, 2);
  sqcRZGate(q, 2.1018156092745244, 2);
  sqcRYGate(q, 2.047415122923229, 3);
  sqcRZGate(q, 2.8629985286352673, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.869836174586752, 0);
  sqcRZGate(q, -0.4380621440716981, 0);
  sqcRYGate(q, 0.31155279139941694, 1);
  sqcRZGate(q, 0.2537490476356253, 1);
  sqcRYGate(q, 0.621239575028242, 2);
  sqcRZGate(q, 0.5686599575241874, 2);
  sqcRYGate(q, 0.08136388544217815, 3);
  sqcRZGate(q, 1.1446550234216701, 3);

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
