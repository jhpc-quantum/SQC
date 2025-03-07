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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -1.6445989723577814, 0);
  sqcRZGate(q, 3.1396817156523107, 0);
  sqcRYGate(q, -0.25312797971959833, 1);
  sqcRZGate(q, -3.0610117359266313, 1);
  sqcRYGate(q, 3.141592054649164, 2);
  sqcRZGate(q, 2.481541427230411, 2);
  sqcRYGate(q, 3.135079285070868, 3);
  sqcRZGate(q, -0.059683689055609605, 3);
  sqcRYGate(q, 3.141561240601026, 4);
  sqcRZGate(q, 0.5794613398582388, 4);
  sqcRYGate(q, 3.141393373183474, 5);
  sqcRZGate(q, 1.6734997592171155, 5);
  sqcRYGate(q, -0.00039906363543362744, 6);
  sqcRZGate(q, 1.5546125585900858, 6);
  sqcRYGate(q, -8.773263511203196e-05, 7);
  sqcRZGate(q, -2.0158101956580197, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.6434468141712777, 0);
  sqcRZGate(q, 2.390971094262546, 0);
  sqcRYGate(q, 3.1414827828229277, 1);
  sqcRZGate(q, 2.5854502204774743, 1);
  sqcRYGate(q, 3.141578724513627, 2);
  sqcRZGate(q, -3.032965959283575, 2);
  sqcRYGate(q, 3.086630546088508, 3);
  sqcRZGate(q, -2.364714940091653, 3);
  sqcRYGate(q, 0.0021607442473028614, 4);
  sqcRZGate(q, -1.606119231160659, 4);
  sqcRYGate(q, 2.0860420001702717, 5);
  sqcRZGate(q, -0.2995771267174217, 5);
  sqcRYGate(q, 2.8838927057795742, 6);
  sqcRZGate(q, -1.3060200094790895, 6);
  sqcRYGate(q, 0.04621642928061298, 7);
  sqcRZGate(q, 2.6113174934348606, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.005657886945891199, 0);
  sqcRZGate(q, -1.8983277016663038, 0);
  sqcRYGate(q, -0.021469541752478172, 1);
  sqcRZGate(q, 1.4926737782030008, 1);
  sqcRYGate(q, -3.1415744725368335, 2);
  sqcRZGate(q, -0.0788829911020914, 2);
  sqcRYGate(q, 0.07537342064811567, 3);
  sqcRZGate(q, 1.1848319611648281, 3);
  sqcRYGate(q, -0.0015382723338217591, 4);
  sqcRZGate(q, 0.6882495994100385, 4);
  sqcRYGate(q, 1.2979700624303705, 5);
  sqcRZGate(q, -3.0170801550596695, 5);
  sqcRYGate(q, -3.1393703048134793, 6);
  sqcRZGate(q, -0.7116745167312235, 6);
  sqcRYGate(q, 0.021819014874870923, 7);
  sqcRZGate(q, 0.3180769321361696, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.12384593702641, 0);
  sqcRZGate(q, -2.9413005683459477, 0);
  sqcRYGate(q, 0.05187664762563582, 1);
  sqcRZGate(q, -1.0554804907725444, 1);
  sqcRYGate(q, -3.141575691616852, 2);
  sqcRZGate(q, 2.05418866542684, 2);
  sqcRYGate(q, 2.889796814810879, 3);
  sqcRZGate(q, -0.6001457033038278, 3);
  sqcRYGate(q, 1.5520321709411253, 4);
  sqcRZGate(q, 2.788479940443358, 4);
  sqcRYGate(q, 0.6335340579463145, 5);
  sqcRZGate(q, -1.8664733478063689, 5);
  sqcRYGate(q, -3.140562425957148, 6);
  sqcRZGate(q, -3.0372357407957518, 6);
  sqcRYGate(q, -0.02145813352282655, 7);
  sqcRZGate(q, -2.5522878863118983, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.0001372312680600309, 0);
  sqcRZGate(q, 1.58552831798091, 0);
  sqcRYGate(q, 0.0006416240903508054, 1);
  sqcRZGate(q, 1.939100219331786, 1);
  sqcRYGate(q, 3.14159080321037, 2);
  sqcRZGate(q, 2.1014037653694446, 2);
  sqcRYGate(q, -0.004817843410627745, 3);
  sqcRZGate(q, 0.2787289866313669, 3);
  sqcRYGate(q, 0.01847995238459162, 4);
  sqcRZGate(q, 1.912649015922006, 4);
  sqcRYGate(q, 3.13759784750624, 5);
  sqcRZGate(q, 1.494872461998538, 5);
  sqcRYGate(q, -0.34544865125606705, 6);
  sqcRZGate(q, -1.4945638034538042, 6);
  sqcRYGate(q, -2.1686198820157667, 7);
  sqcRZGate(q, 1.0850980577630107, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -5.458241494338267e-07, 0);
  sqcRZGate(q, 1.4677019456299043, 0);
  sqcRYGate(q, 3.141566921020369, 1);
  sqcRZGate(q, -1.8453158666092513, 1);
  sqcRYGate(q, -1.8704508558193777e-07, 2);
  sqcRZGate(q, -1.1567253947427207, 2);
  sqcRYGate(q, 8.644553600775683e-07, 3);
  sqcRZGate(q, 2.9198915052366465, 3);
  sqcRYGate(q, -1.0762552249579684, 4);
  sqcRZGate(q, 1.5665073885809246, 4);
  sqcRYGate(q, -6.470296542282482e-05, 5);
  sqcRZGate(q, -0.7816700888803466, 5);
  sqcRYGate(q, -0.0004880364469022069, 6);
  sqcRZGate(q, 2.278427793407835, 6);
  sqcRYGate(q, 0.009145792921533058, 7);
  sqcRZGate(q, 3.1046911288292334, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.004733835743512493, 0);
  sqcRZGate(q, 2.212986884826249, 0);
  sqcRYGate(q, -2.8032847517445494, 1);
  sqcRZGate(q, 2.5527361545257516, 1);
  sqcRYGate(q, 3.141583568125061, 2);
  sqcRZGate(q, -1.803810387569535, 2);
  sqcRYGate(q, -0.09587611974467569, 3);
  sqcRZGate(q, 0.2482696120740105, 3);
  sqcRYGate(q, -1.4427142390330099, 4);
  sqcRZGate(q, -0.25744444218104995, 4);
  sqcRYGate(q, -3.130947084866932, 5);
  sqcRZGate(q, -1.7426170945503607, 5);
  sqcRYGate(q, 2.8953015325128346, 6);
  sqcRZGate(q, -0.31403230874991234, 6);
  sqcRYGate(q, 2.1918554971964195, 7);
  sqcRZGate(q, 2.1670499871947086, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.134943407063676, 0);
  sqcRZGate(q, -2.3407236128331244, 0);
  sqcRYGate(q, 0.11004475300558937, 1);
  sqcRZGate(q, 2.2537435917530475, 1);
  sqcRYGate(q, 1.5707930332271205, 2);
  sqcRZGate(q, -1.5707901526695327, 2);
  sqcRYGate(q, -2.818336355281219, 3);
  sqcRZGate(q, -1.524230577639571, 3);
  sqcRYGate(q, 3.1193382042779247, 4);
  sqcRZGate(q, 1.243076327835321, 4);
  sqcRYGate(q, -0.0016997663546891991, 5);
  sqcRZGate(q, 0.28562703021702196, 5);
  sqcRYGate(q, 3.1380434497322054, 6);
  sqcRZGate(q, -2.9179522490649688, 6);
  sqcRYGate(q, -0.0011410124207174024, 7);
  sqcRZGate(q, 0.6893174230588794, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5707973926381091, 0);
  sqcRZGate(q, 3.141592270822819, 0);
  sqcRYGate(q, -1.5707995835513877, 1);
  sqcRZGate(q, -3.141592490253494, 1);
  sqcRYGate(q, -1.716519686851953, 2);
  sqcRZGate(q, 1.5707913721146998, 2);
  sqcRYGate(q, 1.5707965859545776, 3);
  sqcRZGate(q, 3.1415905488556106, 3);
  sqcRYGate(q, 1.5707975617008223, 4);
  sqcRZGate(q, 3.1415913312399093, 4);
  sqcRYGate(q, -1.5707964645138517, 5);
  sqcRZGate(q, -3.141590273219558, 5);
  sqcRYGate(q, 1.5707975306324282, 6);
  sqcRZGate(q, 2.2454762209633827e-06, 6);
  sqcRYGate(q, 1.5707967420741118, 7);
  sqcRZGate(q, 3.141590482046994, 7);

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
