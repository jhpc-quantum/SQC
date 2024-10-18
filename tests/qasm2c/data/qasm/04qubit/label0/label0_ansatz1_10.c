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

  sqcRYGate(q, 0.2404190636433836, 0);
  sqcRZGate(q, -2.3732690098867537, 0);
  sqcRYGate(q, -0.0561005112526356, 1);
  sqcRZGate(q, 1.056568055731244, 1);
  sqcRYGate(q, -1.8696842888105385, 2);
  sqcRZGate(q, 1.9951636746145387, 2);
  sqcRYGate(q, 1.2119601112716343, 3);
  sqcRZGate(q, 1.4046830988389754, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4448496347674877, 0);
  sqcRZGate(q, 1.7756803130839185, 0);
  sqcRYGate(q, -3.05736692270795, 1);
  sqcRZGate(q, -0.38767642309883593, 1);
  sqcRYGate(q, 1.6219738025994233, 2);
  sqcRZGate(q, 0.3523319475375825, 2);
  sqcRYGate(q, 0.9675377181807673, 3);
  sqcRZGate(q, -1.8781072906314655, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2455107074045633, 0);
  sqcRZGate(q, -1.699341267483853, 0);
  sqcRYGate(q, 2.125324050072635, 1);
  sqcRZGate(q, 2.9189036221957294, 1);
  sqcRYGate(q, 0.37314434049838946, 2);
  sqcRZGate(q, 1.032603410416545, 2);
  sqcRYGate(q, -2.607119305564988, 3);
  sqcRZGate(q, -1.6829913936277243, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.693221314476238, 0);
  sqcRZGate(q, -0.27587359155103375, 0);
  sqcRYGate(q, -3.079662160916737, 1);
  sqcRZGate(q, -2.2300486679846454, 1);
  sqcRYGate(q, 1.35895728022882, 2);
  sqcRZGate(q, -3.0377724655457197, 2);
  sqcRYGate(q, -0.08474028934080848, 3);
  sqcRZGate(q, 3.0210530538745504, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7207078198255186, 0);
  sqcRZGate(q, -0.5769503654958648, 0);
  sqcRYGate(q, 2.1635926260480796, 1);
  sqcRZGate(q, 1.0195043810845013, 1);
  sqcRYGate(q, -1.840205618229355, 2);
  sqcRZGate(q, 2.7238598918882944, 2);
  sqcRYGate(q, 1.4381421537923846, 3);
  sqcRZGate(q, -2.3580420991796918, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8274314854289958, 0);
  sqcRZGate(q, 2.9876536932259934, 0);
  sqcRYGate(q, 0.5271199969692146, 1);
  sqcRZGate(q, -0.5146038340416381, 1);
  sqcRYGate(q, -0.43413035722570165, 2);
  sqcRZGate(q, 3.0703718119175267, 2);
  sqcRYGate(q, 0.08917173874927364, 3);
  sqcRZGate(q, -2.5653237646142957, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.1553397292797927, 0);
  sqcRZGate(q, 2.9637343897637933, 0);
  sqcRYGate(q, -2.5446203353125574, 1);
  sqcRZGate(q, 0.20564476625152842, 1);
  sqcRYGate(q, -2.447304500106269, 2);
  sqcRZGate(q, 0.47296530995227126, 2);
  sqcRYGate(q, 0.04717593047818803, 3);
  sqcRZGate(q, -2.7939372398804414, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.66841161347946, 0);
  sqcRZGate(q, -0.1259715639822616, 0);
  sqcRYGate(q, 0.5603169927059172, 1);
  sqcRZGate(q, 2.680548294735877, 1);
  sqcRYGate(q, -2.6963288460943082, 2);
  sqcRZGate(q, -2.717572162977806, 2);
  sqcRYGate(q, 2.9598619426407384, 3);
  sqcRZGate(q, 0.8141655424547767, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.551013702041633, 0);
  sqcRZGate(q, 2.967622874601978, 0);
  sqcRYGate(q, 1.8913621625919408, 1);
  sqcRZGate(q, 1.1288522138047776, 1);
  sqcRYGate(q, -1.2852708139656346, 2);
  sqcRZGate(q, 0.07155232445880112, 2);
  sqcRYGate(q, -1.4281528731773974, 3);
  sqcRZGate(q, -2.3607043092095186, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.383485008625434, 0);
  sqcRZGate(q, 2.9596253025597306, 0);
  sqcRYGate(q, 1.477967321015107, 1);
  sqcRZGate(q, 0.8087916203215775, 1);
  sqcRYGate(q, -2.3309970017542025, 2);
  sqcRZGate(q, -1.3880565556552007, 2);
  sqcRYGate(q, 1.2451553147889192, 3);
  sqcRZGate(q, -0.7328986579241504, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.8286175067419035, 0);
  sqcRZGate(q, 0.94146231825634, 0);
  sqcRYGate(q, 0.7799224411945253, 1);
  sqcRZGate(q, -1.6725127106417128, 1);
  sqcRYGate(q, 2.7075625508277152, 2);
  sqcRZGate(q, 3.12413212772027, 2);
  sqcRYGate(q, 0.15129549428924582, 3);
  sqcRZGate(q, 2.7832096864725275, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.20584131888444304, 0);
  sqcRZGate(q, 0.2952917192543616, 0);
  sqcRYGate(q, 1.07227022558246, 1);
  sqcRZGate(q, 1.7610612189180024, 1);
  sqcRYGate(q, -0.7187007537592145, 2);
  sqcRZGate(q, -2.4369980254610892, 2);
  sqcRYGate(q, -1.0217419607578009, 3);
  sqcRZGate(q, 3.0137921161762016, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9058780564716153, 0);
  sqcRZGate(q, -0.5484933925894238, 0);
  sqcRYGate(q, -1.2805651581251656, 1);
  sqcRZGate(q, 2.724913460640022, 1);
  sqcRYGate(q, -2.9210696423396727, 2);
  sqcRZGate(q, 0.7072515790003884, 2);
  sqcRYGate(q, -0.5272796000735853, 3);
  sqcRZGate(q, 3.1323222163517515, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4398872471980262, 0);
  sqcRZGate(q, -2.5396918596219717, 0);
  sqcRYGate(q, 1.8031930152505984, 1);
  sqcRZGate(q, 1.6779106284423866, 1);
  sqcRYGate(q, 2.4607593697319867, 2);
  sqcRZGate(q, 2.624794089545115, 2);
  sqcRYGate(q, -3.0453287637998394, 3);
  sqcRZGate(q, 0.2013265214013904, 3);

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
