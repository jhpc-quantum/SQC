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

  sqcRYGate(q, -1.9653813380231944, 0);
  sqcRZGate(q, 2.2659761120123116, 0);
  sqcRYGate(q, 0.7759213611760174, 1);
  sqcRZGate(q, -1.6197922880253743, 1);
  sqcRYGate(q, -1.0015651792849463, 2);
  sqcRZGate(q, 0.6114207920875812, 2);
  sqcRYGate(q, 2.694395491414068, 3);
  sqcRZGate(q, -2.80360446187487, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.06503395034388149, 0);
  sqcRZGate(q, -0.630991617255798, 0);
  sqcRYGate(q, -1.96625861573564, 1);
  sqcRZGate(q, -2.0803779176258743, 1);
  sqcRYGate(q, 2.766109433996775, 2);
  sqcRZGate(q, -1.458582132321386, 2);
  sqcRYGate(q, 0.8473291913936645, 3);
  sqcRZGate(q, 2.591733799557707, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.260656463711677, 0);
  sqcRZGate(q, 3.0393982554093997, 0);
  sqcRYGate(q, -3.086578773747884, 1);
  sqcRZGate(q, -2.6040875808352832, 1);
  sqcRYGate(q, -1.7387081653818752, 2);
  sqcRZGate(q, 1.5438048103587896, 2);
  sqcRYGate(q, 1.8151783943316833, 3);
  sqcRZGate(q, -1.6510021778742898, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2524235997766247, 0);
  sqcRZGate(q, -2.9219313425967237, 0);
  sqcRYGate(q, 2.46167480571129, 1);
  sqcRZGate(q, -0.7967379156381657, 1);
  sqcRYGate(q, 1.3326905583789934, 2);
  sqcRZGate(q, 1.5855221845576057, 2);
  sqcRYGate(q, -0.6798410443731304, 3);
  sqcRZGate(q, 0.18659995455943612, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1200217582979304, 0);
  sqcRZGate(q, -3.0727070135846533, 0);
  sqcRYGate(q, -0.2484404080649925, 1);
  sqcRZGate(q, -1.85363862765701, 1);
  sqcRYGate(q, -0.22829037308132066, 2);
  sqcRZGate(q, -1.3254061993754878, 2);
  sqcRYGate(q, -2.266837797499761, 3);
  sqcRZGate(q, 0.04434058054751142, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6842421396113124, 0);
  sqcRZGate(q, 0.2342973505230552, 0);
  sqcRYGate(q, -0.30090027321301266, 1);
  sqcRZGate(q, 0.6925464125218542, 1);
  sqcRYGate(q, -2.7441372871330705, 2);
  sqcRZGate(q, -1.8077239080978202, 2);
  sqcRYGate(q, -1.979476992476262, 3);
  sqcRZGate(q, -1.7318576435215798, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.559796480313244, 0);
  sqcRZGate(q, 3.0017496991297627, 0);
  sqcRYGate(q, 0.6551632273699601, 1);
  sqcRZGate(q, 0.11121953269702002, 1);
  sqcRYGate(q, 0.6778187181751442, 2);
  sqcRZGate(q, -2.276723785840526, 2);
  sqcRYGate(q, 2.2320185033532787, 3);
  sqcRZGate(q, 1.5676172192163946, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0668317635551947, 0);
  sqcRZGate(q, 0.29722245050261437, 0);
  sqcRYGate(q, 2.0511776278237908, 1);
  sqcRZGate(q, 1.844289715732928, 1);
  sqcRYGate(q, -2.4942355954164452, 2);
  sqcRZGate(q, 2.726955771291867, 2);
  sqcRYGate(q, 3.106170799959659, 3);
  sqcRZGate(q, 1.69994476568482, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.1121275608908334, 0);
  sqcRZGate(q, 0.9905635060977165, 0);
  sqcRYGate(q, 1.8281732782248383, 1);
  sqcRZGate(q, 0.4597054544398738, 1);
  sqcRYGate(q, -2.991031618470469, 2);
  sqcRZGate(q, -1.3437485336867694, 2);
  sqcRYGate(q, -0.17319295343107685, 3);
  sqcRZGate(q, -2.2102493366994933, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.729681811769163, 0);
  sqcRZGate(q, 0.9595172051219639, 0);
  sqcRYGate(q, -0.9774939515768946, 1);
  sqcRZGate(q, 0.3015188911695735, 1);
  sqcRYGate(q, 0.6562491606012664, 2);
  sqcRZGate(q, 2.1520656056256433, 2);
  sqcRYGate(q, 0.6583051157244323, 3);
  sqcRZGate(q, 1.5703803162375312, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6515855143817717, 0);
  sqcRZGate(q, 2.935440834156726, 0);
  sqcRYGate(q, -2.452665149928453, 1);
  sqcRZGate(q, -2.9088588420170765, 1);
  sqcRYGate(q, 0.7252867631670501, 2);
  sqcRZGate(q, 2.168885945548412, 2);
  sqcRYGate(q, -1.2014270668110951, 3);
  sqcRZGate(q, 0.8895780234955689, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.344271678514843, 0);
  sqcRZGate(q, 2.0715338965588517, 0);
  sqcRYGate(q, 2.0558425431845713, 1);
  sqcRZGate(q, 2.8542336493714506, 1);
  sqcRYGate(q, 1.672195496986558, 2);
  sqcRZGate(q, -0.9293239908393733, 2);
  sqcRYGate(q, -2.1549837205661957, 3);
  sqcRZGate(q, 1.6627061884287455, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.004818457433, 0);
  sqcRZGate(q, -1.5886405821484182, 0);
  sqcRYGate(q, 2.6156201221618756, 1);
  sqcRZGate(q, 0.9335445665083382, 1);
  sqcRYGate(q, 2.0754720361815235, 2);
  sqcRZGate(q, 0.7008926039329999, 2);
  sqcRYGate(q, -0.9102758753368194, 3);
  sqcRZGate(q, 2.6177014656697364, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0277141580671758, 0);
  sqcRZGate(q, 0.17956404500111475, 0);
  sqcRYGate(q, -1.6827405277238228, 1);
  sqcRZGate(q, -0.47552684925119415, 1);
  sqcRYGate(q, -0.7839622037181249, 2);
  sqcRZGate(q, 0.8485442308579813, 2);
  sqcRYGate(q, -0.5871700636291255, 3);
  sqcRZGate(q, -1.061769070098393, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4236430731351963, 0);
  sqcRZGate(q, -1.2300777685628939, 0);
  sqcRYGate(q, -1.5803279707380964, 1);
  sqcRZGate(q, -2.510341052361089, 1);
  sqcRYGate(q, -1.7939024746577967, 2);
  sqcRZGate(q, -2.246641554914958, 2);
  sqcRYGate(q, -2.37267976991381, 3);
  sqcRZGate(q, -1.7159205785929825, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.027953825631031, 0);
  sqcRZGate(q, 1.1903736844736352, 0);
  sqcRYGate(q, 0.8145309830875824, 1);
  sqcRZGate(q, 0.8325611748203966, 1);
  sqcRYGate(q, -1.182202387167087, 2);
  sqcRZGate(q, -1.0981801048087032, 2);
  sqcRYGate(q, -0.5496466872472929, 3);
  sqcRZGate(q, -3.060894986634287, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9986801404636791, 0);
  sqcRZGate(q, 2.454140251157359, 0);
  sqcRYGate(q, -1.5448978915156477, 1);
  sqcRZGate(q, 1.5038902166359813, 1);
  sqcRYGate(q, 2.2904129331847303, 2);
  sqcRZGate(q, 1.932846037855295, 2);
  sqcRYGate(q, -1.2536927061302716, 3);
  sqcRZGate(q, -0.6535191189054181, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.26642825410436793, 0);
  sqcRZGate(q, 1.3261702710140952, 0);
  sqcRYGate(q, -2.132490179963119, 1);
  sqcRZGate(q, -1.4311602156953587, 1);
  sqcRYGate(q, -1.9407481692780146, 2);
  sqcRZGate(q, -0.05769349111159148, 2);
  sqcRYGate(q, -0.6042013125539256, 3);
  sqcRZGate(q, 2.487119953334458, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.054145834351548, 0);
  sqcRZGate(q, -3.1317989614740727, 0);
  sqcRYGate(q, -2.6739291120331607, 1);
  sqcRZGate(q, -1.1439660291116607, 1);
  sqcRYGate(q, -0.24121121274753143, 2);
  sqcRZGate(q, -1.4819089609351888, 2);
  sqcRYGate(q, 1.852749795461457, 3);
  sqcRZGate(q, 3.0025275142553345, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7248591187744584, 0);
  sqcRZGate(q, 0.9546913572106597, 0);
  sqcRYGate(q, 1.502763173733558, 1);
  sqcRZGate(q, -2.416298335179096, 1);
  sqcRYGate(q, -2.010325151286105, 2);
  sqcRZGate(q, -3.1129661854394373, 2);
  sqcRYGate(q, 2.4617302117324513, 3);
  sqcRZGate(q, -1.9368976459315064, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3750438580517597, 0);
  sqcRZGate(q, 1.3420366816024418, 0);
  sqcRYGate(q, 0.9232722691154257, 1);
  sqcRZGate(q, -2.453686998303829, 1);
  sqcRYGate(q, -1.4979341281048446, 2);
  sqcRZGate(q, 2.714858404470367, 2);
  sqcRYGate(q, 2.968272842912999, 3);
  sqcRZGate(q, -2.984565049489345, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7158350777096156, 0);
  sqcRZGate(q, 1.723009464597558, 0);
  sqcRYGate(q, 2.2093163236809756, 1);
  sqcRZGate(q, 0.2597231036249825, 1);
  sqcRYGate(q, -0.4980160045578479, 2);
  sqcRZGate(q, 2.5625877015774234, 2);
  sqcRYGate(q, -2.0349109941630177, 3);
  sqcRZGate(q, 0.33410837911395763, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.050078302467571056, 0);
  sqcRZGate(q, -1.1571343848774862, 0);
  sqcRYGate(q, 1.6343438202407656, 1);
  sqcRZGate(q, 2.8250670148581976, 1);
  sqcRYGate(q, -2.915557378013583, 2);
  sqcRZGate(q, -1.7582983841080368, 2);
  sqcRYGate(q, 2.484644831059113, 3);
  sqcRZGate(q, -0.8565781391657942, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8545446792714335, 0);
  sqcRZGate(q, 1.1068673855258342, 0);
  sqcRYGate(q, -1.2905196534148615, 1);
  sqcRZGate(q, 2.808246455281268, 1);
  sqcRYGate(q, 1.0307721233179237, 2);
  sqcRZGate(q, -2.8904496262759656, 2);
  sqcRYGate(q, -2.5391377412412535, 3);
  sqcRZGate(q, -1.6677180144890835, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.83412412913722, 0);
  sqcRZGate(q, 1.1016052005796118, 0);
  sqcRYGate(q, 0.4313906217976751, 1);
  sqcRZGate(q, 1.2599475238159945, 1);
  sqcRYGate(q, -1.3014505859412022, 2);
  sqcRZGate(q, 0.03658717540269191, 2);
  sqcRYGate(q, 1.371779047337328, 3);
  sqcRZGate(q, -2.8163023221502512, 3);

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
