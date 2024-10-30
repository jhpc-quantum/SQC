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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.030516505566851926, 0);
  sqcRZGate(q, 1.3366708705800547, 0);
  sqcRYGate(q, -1.5707913278892525, 1);
  sqcRZGate(q, 1.5723419944315216, 1);
  sqcRYGate(q, 1.5707136822847252, 2);
  sqcRZGate(q, -0.2829989574822116, 2);
  sqcRYGate(q, -1.5708742306070418, 3);
  sqcRZGate(q, 2.770574016337873, 3);
  sqcRYGate(q, 3.141586208218712, 4);
  sqcRZGate(q, 2.83161233763251, 4);
  sqcRYGate(q, -3.1415891880792373, 5);
  sqcRZGate(q, -1.1405460654388566, 5);
  sqcRYGate(q, -1.5400909148070268, 6);
  sqcRZGate(q, -0.9193512730642097, 6);
  sqcRYGate(q, 0.514038440367515, 7);
  sqcRZGate(q, 1.2486133516571012, 7);
  sqcRYGate(q, -1.8149688578716907e-06, 8);
  sqcRZGate(q, 0.08380324003219285, 8);
  sqcRYGate(q, 1.2152567605296545, 9);
  sqcRZGate(q, -0.12289236815087672, 9);
  sqcRYGate(q, 7.49641614330443e-05, 10);
  sqcRZGate(q, -0.25770256315430373, 10);
  sqcRYGate(q, -1.586517534525704, 11);
  sqcRZGate(q, 2.3989484388376225, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5726982631965827, 0);
  sqcRZGate(q, 2.9538780588138067, 0);
  sqcRYGate(q, 0.3485253489757917, 1);
  sqcRZGate(q, -3.0749448935893424, 1);
  sqcRYGate(q, -1.570845402005385, 2);
  sqcRZGate(q, 1.8529262121013528, 2);
  sqcRYGate(q, 0.6357626004023986, 3);
  sqcRZGate(q, -2.7398524385266554, 3);
  sqcRYGate(q, -1.5707906627113493, 4);
  sqcRZGate(q, -0.0011951693321868473, 4);
  sqcRYGate(q, 1.5707828518116373, 5);
  sqcRZGate(q, -1.57087064642766, 5);
  sqcRYGate(q, -1.7890130655103968, 6);
  sqcRZGate(q, -2.4182930595001557, 6);
  sqcRYGate(q, -0.5982051078011175, 7);
  sqcRZGate(q, -0.4236148730530748, 7);
  sqcRYGate(q, -1.570791726443254, 8);
  sqcRZGate(q, -1.5707981541605986, 8);
  sqcRYGate(q, 1.95399970226577, 9);
  sqcRZGate(q, 1.7037580267305286, 9);
  sqcRYGate(q, 1.570692808768049, 10);
  sqcRZGate(q, 0.7284500863351192, 10);
  sqcRYGate(q, 3.1202276254525803, 11);
  sqcRZGate(q, 2.2341930226207958, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.35085013515987823, 0);
  sqcRZGate(q, 1.3325589704965313, 0);
  sqcRYGate(q, 1.6922205355321944, 1);
  sqcRZGate(q, -1.570838119707453, 1);
  sqcRYGate(q, 3.1415557489520936, 2);
  sqcRZGate(q, -2.8236816620537817, 2);
  sqcRYGate(q, -0.9341370177611799, 3);
  sqcRZGate(q, 0.0018984429461184373, 3);
  sqcRYGate(q, 0.06226252685473986, 4);
  sqcRZGate(q, 2.3078093501130033, 4);
  sqcRYGate(q, -1.5708925565323606, 5);
  sqcRZGate(q, 1.570791825885844, 5);
  sqcRYGate(q, 3.590359083194272e-05, 6);
  sqcRZGate(q, -0.5156218598190563, 6);
  sqcRYGate(q, 3.1415854639602188, 7);
  sqcRZGate(q, -2.0247157559872373, 7);
  sqcRYGate(q, 1.5687064630104575, 8);
  sqcRZGate(q, -3.0586826141030943, 8);
  sqcRYGate(q, -1.5705839609649486, 9);
  sqcRZGate(q, 1.478203708969076, 9);
  sqcRYGate(q, -1.8281724047002346, 10);
  sqcRZGate(q, 1.5823664767940295, 10);
  sqcRYGate(q, 1.3716385290877922, 11);
  sqcRZGate(q, -0.8681318809899031, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -4.831065931368726e-06, 0);
  sqcRZGate(q, -1.1337375217161219, 0);
  sqcRYGate(q, -1.5711584014622777, 1);
  sqcRZGate(q, -1.2802395018858839, 1);
  sqcRYGate(q, -0.18849477799260492, 2);
  sqcRZGate(q, 2.8492225159650784, 2);
  sqcRYGate(q, 0.1895726452912676, 3);
  sqcRZGate(q, 2.0676399313858447, 3);
  sqcRYGate(q, 3.1415742810083573, 4);
  sqcRZGate(q, -0.8349966102160646, 4);
  sqcRYGate(q, 1.5707857092377309, 5);
  sqcRZGate(q, 1.5688586362364116, 5);
  sqcRYGate(q, 1.5707957178676049, 6);
  sqcRZGate(q, -1.5708016761643053, 6);
  sqcRYGate(q, 2.780651178073517, 7);
  sqcRZGate(q, -1.570597125901819, 7);
  sqcRYGate(q, -3.1398440352053254, 8);
  sqcRZGate(q, 0.08290997805560084, 8);
  sqcRYGate(q, 1.5706014087696547, 9);
  sqcRZGate(q, 2.2929493504156664, 9);
  sqcRYGate(q, 0.09177678825184561, 10);
  sqcRZGate(q, 1.5594949821194826, 10);
  sqcRYGate(q, -0.002633555510048069, 11);
  sqcRZGate(q, 0.040781363951602145, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.569994696624945, 0);
  sqcRZGate(q, -1.5619039216524842, 0);
  sqcRYGate(q, -3.1410622886373294, 1);
  sqcRZGate(q, -1.2875479594212769, 1);
  sqcRYGate(q, 3.1411650362157095, 2);
  sqcRZGate(q, 1.3126966564043725, 2);
  sqcRYGate(q, -3.089877966295384, 3);
  sqcRZGate(q, 0.4645844620413555, 3);
  sqcRYGate(q, -1.5707311697466442, 4);
  sqcRZGate(q, 1.5707972297776793, 4);
  sqcRYGate(q, 1.5707881463788906, 5);
  sqcRZGate(q, -2.1544935293290332e-05, 5);
  sqcRYGate(q, 1.573027749022029, 6);
  sqcRZGate(q, -1.5707931580935668, 6);
  sqcRYGate(q, 0.9203393865756522, 7);
  sqcRZGate(q, 1.5707968177476133, 7);
  sqcRYGate(q, 1.5689438070376447, 8);
  sqcRZGate(q, 1.5707961553615162, 8);
  sqcRYGate(q, -0.12228161614144925, 9);
  sqcRZGate(q, -0.7258990617224566, 9);
  sqcRYGate(q, 1.5707923051374846, 10);
  sqcRZGate(q, -1.5707903104737584, 10);
  sqcRYGate(q, -1.5593744756588235, 11);
  sqcRZGate(q, 0.7830135854192755, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.00068622577692512, 0);
  sqcRZGate(q, -0.8664161906658894, 0);
  sqcRYGate(q, -0.33779513983748927, 1);
  sqcRZGate(q, 1.3935789812581199, 1);
  sqcRYGate(q, 1.5774414386308486, 2);
  sqcRZGate(q, -1.0438051449603316, 2);
  sqcRYGate(q, -1.562203990477081, 3);
  sqcRZGate(q, 2.599875550645075, 3);
  sqcRYGate(q, -1.5708145687962212, 4);
  sqcRZGate(q, -2.423107809887826, 4);
  sqcRYGate(q, 1.6290895075072298, 5);
  sqcRZGate(q, 2.5999495428454624, 5);
  sqcRYGate(q, 1.5707996131739452, 6);
  sqcRZGate(q, -2.423117850635654, 6);
  sqcRYGate(q, 1.5707517241907958, 7);
  sqcRZGate(q, -0.5412899649760771, 7);
  sqcRYGate(q, -1.5707876604033022, 8);
  sqcRZGate(q, -0.852324189668173, 8);
  sqcRYGate(q, 1.5707894506799818, 9);
  sqcRZGate(q, -0.5415918197494429, 9);
  sqcRYGate(q, 1.5708290673757976, 10);
  sqcRZGate(q, -0.8549468238179233, 10);
  sqcRYGate(q, 1.570002696583081, 11);
  sqcRZGate(q, -2.1117119527012904, 11);

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
