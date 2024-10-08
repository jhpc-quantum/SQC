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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -5.741260089564548e-08, 0);
  sqcRZGate(q, 2.1826968230600974, 0);
  sqcRYGate(q, -1.1003754063104934, 1);
  sqcRZGate(q, 3.1402542077601137, 1);
  sqcRYGate(q, 2.5697451859968705, 2);
  sqcRZGate(q, -1.5657135748145572, 2);
  sqcRYGate(q, 1.5108581621112345, 3);
  sqcRZGate(q, 1.0378005031987578, 3);
  sqcRYGate(q, 1.5707982452238316, 4);
  sqcRZGate(q, -1.5707972665206977, 4);
  sqcRYGate(q, -2.5090628051610434e-07, 5);
  sqcRZGate(q, -1.6324549158084645, 5);
  sqcRYGate(q, -1.5708789678974968, 6);
  sqcRZGate(q, -2.384762439961123, 6);
  sqcRYGate(q, 1.88835727772462, 7);
  sqcRZGate(q, -1.5709044997759865, 7);
  sqcRYGate(q, 1.5707962524916887, 8);
  sqcRZGate(q, -1.5707858478735854, 8);
  sqcRYGate(q, -2.6540988002896593, 9);
  sqcRZGate(q, -2.13135478470039, 9);
  sqcRYGate(q, -3.141555422990612, 10);
  sqcRZGate(q, -3.1078786230151523, 10);
  sqcRYGate(q, -0.9054723759878445, 11);
  sqcRZGate(q, 6.666207645711354e-05, 11);
  sqcRYGate(q, 3.1393553433316037, 12);
  sqcRZGate(q, -2.986207594567597, 12);
  sqcRYGate(q, -2.9328254879148625, 13);
  sqcRZGate(q, 3.1414506360991594, 13);
  sqcRYGate(q, -1.6245765425982819, 14);
  sqcRZGate(q, -3.141100162667605, 14);
  sqcRYGate(q, -1.5053997545851492, 15);
  sqcRZGate(q, 2.6100076686476243, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 3.141592148988873, 0);
  sqcRZGate(q, 3.0040835365638974, 0);
  sqcRYGate(q, -1.4845294126624207, 1);
  sqcRZGate(q, -3.1081589804088328, 1);
  sqcRYGate(q, 1.5707952703844712, 2);
  sqcRZGate(q, -0.0397748685643366, 2);
  sqcRYGate(q, -3.129219962208629, 3);
  sqcRZGate(q, -1.2360673684651287, 3);
  sqcRYGate(q, -1.9419437700920181, 4);
  sqcRZGate(q, -2.798591446987504, 4);
  sqcRYGate(q, -1.786890277455763, 5);
  sqcRZGate(q, 1.6167225207781608, 5);
  sqcRYGate(q, 1.2271001470646388, 6);
  sqcRZGate(q, -1.1581672428896699, 6);
  sqcRYGate(q, -2.732492830287035, 7);
  sqcRZGate(q, -1.5709011392847338, 7);
  sqcRYGate(q, 0.38115878634917305, 8);
  sqcRZGate(q, -1.5708076561122408, 8);
  sqcRYGate(q, 3.1415924869249854, 9);
  sqcRZGate(q, -2.131464741824594, 9);
  sqcRYGate(q, 0.00038029550620298025, 10);
  sqcRZGate(q, -0.5852925141165236, 10);
  sqcRYGate(q, -1.8264820582373202, 11);
  sqcRZGate(q, 1.448051001175232, 11);
  sqcRYGate(q, 0.04262197085273359, 12);
  sqcRZGate(q, -3.139629726844652, 12);
  sqcRYGate(q, -1.5915977232352752, 13);
  sqcRZGate(q, 3.141012148713901, 13);
  sqcRYGate(q, -1.5699082112971237, 14);
  sqcRZGate(q, -0.6684163649857678, 14);
  sqcRYGate(q, 3.1405912349037024, 15);
  sqcRZGate(q, -0.20266965893665742, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.8431087181345953, 0);
  sqcRZGate(q, 2.6751481896292137, 0);
  sqcRYGate(q, 0.3208875350144922, 1);
  sqcRZGate(q, -0.021368009327042085, 1);
  sqcRYGate(q, -0.00013718181389243966, 2);
  sqcRZGate(q, 0.03977542835410209, 2);
  sqcRYGate(q, 2.44231307470101e-07, 3);
  sqcRZGate(q, 2.6160355827895385, 3);
  sqcRYGate(q, 3.1415888183694354, 4);
  sqcRZGate(q, 1.9137970916951108, 4);
  sqcRYGate(q, 5.980673691482876e-07, 5);
  sqcRZGate(q, 1.5249038602319147, 5);
  sqcRYGate(q, 1.570943107240317, 6);
  sqcRZGate(q, 3.135911661031978, 6);
  sqcRYGate(q, -1.58470040997042, 7);
  sqcRZGate(q, -2.265550156366203e-07, 7);
  sqcRYGate(q, 1.5707966610882724, 8);
  sqcRZGate(q, 1.8492979091331743, 8);
  sqcRYGate(q, 2.082646896740142, 9);
  sqcRZGate(q, -1.2431551442482201e-05, 9);
  sqcRYGate(q, 3.141584158007527, 10);
  sqcRZGate(q, 2.4386066281654126, 10);
  sqcRYGate(q, -3.1409077071716567, 11);
  sqcRZGate(q, 1.4479580743452949, 11);
  sqcRYGate(q, -1.6155192878285076, 12);
  sqcRZGate(q, 0.9303986111935547, 12);
  sqcRYGate(q, -1.2727847392091416, 13);
  sqcRZGate(q, 0.0015469286517966199, 13);
  sqcRYGate(q, -1.5286613881109055, 14);
  sqcRZGate(q, -3.1082469425556454, 14);
  sqcRYGate(q, -3.141446773243833, 15);
  sqcRZGate(q, 2.802767711856468, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -8.424525065480204e-07, 0);
  sqcRZGate(q, 0.5487499741440379, 0);
  sqcRYGate(q, -3.02573332263818, 1);
  sqcRZGate(q, -2.7137525635053126, 1);
  sqcRYGate(q, -1.57079677164762, 2);
  sqcRZGate(q, 0.08230703153804785, 2);
  sqcRYGate(q, -3.099703492311327, 3);
  sqcRZGate(q, -2.3857345822610116, 3);
  sqcRYGate(q, -1.5707942788071942, 4);
  sqcRZGate(q, 1.653131026745511, 4);
  sqcRYGate(q, -3.07406011247934, 5);
  sqcRZGate(q, 0.42798423571228467, 5);
  sqcRYGate(q, 3.14159256657187, 6);
  sqcRZGate(q, 0.07697041871707087, 6);
  sqcRYGate(q, 1.5328837502341672, 7);
  sqcRZGate(q, 0.42791844597998097, 7);
  sqcRYGate(q, 3.1415898145409638, 8);
  sqcRZGate(q, -1.2099645175662754, 8);
  sqcRYGate(q, -1.5188065708510834, 9);
  sqcRZGate(q, -2.7136270786855614, 9);
  sqcRYGate(q, 3.1415631765221566, 10);
  sqcRZGate(q, -2.9202182231750777, 10);
  sqcRYGate(q, -1.7413564164193183, 11);
  sqcRZGate(q, -2.7137218157765357, 11);
  sqcRYGate(q, -3.1415350461785065, 12);
  sqcRZGate(q, 1.755811355229055, 12);
  sqcRYGate(q, -0.03202754130611041, 13);
  sqcRZGate(q, -2.715368205953305, 13);
  sqcRYGate(q, 1.5707885535874837, 14);
  sqcRZGate(q, -2.316155403288573, 14);
  sqcRYGate(q, -0.7614768084050355, 15);
  sqcRZGate(q, 0.4278589449192732, 15);

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
