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

  sqcRYGate(q, -2.6975170538596744, 0);
  sqcRYGate(q, -0.9082054610274994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1111215784084463, 0);
  sqcRYGate(q, -0.7450616921202255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.79020231045797, 2);
  sqcRYGate(q, 0.8534164688993827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2076407215876996, 2);
  sqcRYGate(q, -1.4301332302247785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0321492774519279, 1);
  sqcRYGate(q, 0.7581711000999697, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1322060240480085, 1);
  sqcRYGate(q, -0.05519611729165184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.407686347156524, 0);
  sqcRYGate(q, 1.711803944325878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6321153155386892, 0);
  sqcRYGate(q, -3.011243160077223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8390585448103387, 2);
  sqcRYGate(q, 2.3560231564985648, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.783890741273615, 2);
  sqcRYGate(q, -1.9625166443426778, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4120895764393544, 1);
  sqcRYGate(q, -0.8243172417757627, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.853681033755394, 1);
  sqcRYGate(q, 1.6708896975681427, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0389888880812577, 0);
  sqcRYGate(q, -2.5351672582476414, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6496172675137455, 0);
  sqcRYGate(q, 0.8107684290343382, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9179267630357569, 2);
  sqcRYGate(q, 2.0287953835641073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6712935197353342, 2);
  sqcRYGate(q, 2.2301687011911575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.16095138985813, 1);
  sqcRYGate(q, 1.8137608153912268, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2516039878512393, 1);
  sqcRYGate(q, -1.499730564475789, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6397018202643288, 0);
  sqcRYGate(q, 0.2902911731891798, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2563899002524061, 0);
  sqcRYGate(q, 2.5927346713002515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8054630055574306, 2);
  sqcRYGate(q, -0.029518134039902832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8524187838826176, 2);
  sqcRYGate(q, -1.1543769691682852, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.832932377677582, 1);
  sqcRYGate(q, -1.899245204596759, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6895048183793844, 1);
  sqcRYGate(q, -1.1093325435889616, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8703581384999886, 0);
  sqcRYGate(q, -1.0793517441326357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.14863624272122597, 0);
  sqcRYGate(q, -0.586974950463711, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5611600170323419, 2);
  sqcRYGate(q, -2.527658928162146, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.041085248660999, 2);
  sqcRYGate(q, 1.3403596266722821, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4548837583374086, 1);
  sqcRYGate(q, -0.16909620415390653, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0399676492790952, 1);
  sqcRYGate(q, -0.8400961925452525, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.095588884718177, 0);
  sqcRYGate(q, -2.1252546923461066, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0891254969314241, 0);
  sqcRYGate(q, 2.53213463193963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0620667198125107, 2);
  sqcRYGate(q, 0.03667401783749936, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3308728920595674, 2);
  sqcRYGate(q, 2.5065533756742373, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8737114249971683, 1);
  sqcRYGate(q, -2.919278625839588, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.016774389195987, 1);
  sqcRYGate(q, -1.9239593765239744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3467837858712448, 0);
  sqcRYGate(q, -3.0215348072112516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6812618151800844, 0);
  sqcRYGate(q, 3.129217611909428, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9382288671241876, 2);
  sqcRYGate(q, 1.7984846376400991, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.477710271781194, 2);
  sqcRYGate(q, 1.5102514314209867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.575231330440343, 1);
  sqcRYGate(q, -1.6230590911555958, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3309772886506875, 1);
  sqcRYGate(q, -1.2265055853041051, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7878655315940106, 0);
  sqcRYGate(q, 2.269453839857128, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9370602143528848, 0);
  sqcRYGate(q, 0.06641542508652795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4298731563362042, 2);
  sqcRYGate(q, 2.075435900460824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.41852752871567933, 2);
  sqcRYGate(q, 2.367099320400831, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.853873111205124, 1);
  sqcRYGate(q, -1.454671580848709, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.748227528142755, 1);
  sqcRYGate(q, 1.219454062247614, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.808839385200033, 0);
  sqcRYGate(q, -2.6508888362046137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7979232946039323, 0);
  sqcRYGate(q, -2.367342609840169, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4994783868015666, 2);
  sqcRYGate(q, -0.28038224530143996, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8375006291693667, 2);
  sqcRYGate(q, 2.293185145725096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8614348574270867, 1);
  sqcRYGate(q, 2.01991321481987, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9207395621396572, 1);
  sqcRYGate(q, 1.336464123605177, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7527685605083165, 0);
  sqcRYGate(q, 0.8242852820081231, 1);
  sqcRYGate(q, 0.9023610849700119, 2);
  sqcRYGate(q, -0.5245716721540568, 3);

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
