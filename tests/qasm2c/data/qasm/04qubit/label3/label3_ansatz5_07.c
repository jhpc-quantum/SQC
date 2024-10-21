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

  sqcRYGate(q, 1.1520740893996884, 0);
  sqcRYGate(q, -1.7392368989019968, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.543517662857533, 0);
  sqcRYGate(q, 1.407257788745036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.234102863096183, 2);
  sqcRYGate(q, -0.985800243480003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6907329688877832, 2);
  sqcRYGate(q, -0.454339052582748, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1057192202539152, 1);
  sqcRYGate(q, 1.895255081593483, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3100264402385475, 1);
  sqcRYGate(q, 2.948653023691259, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03505145810805785, 0);
  sqcRYGate(q, -2.339448370966512, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.49436271652826314, 0);
  sqcRYGate(q, 1.4720516484528285, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.30830196003115784, 2);
  sqcRYGate(q, 1.542949743813044, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2551675495753054, 2);
  sqcRYGate(q, -2.6050975975491495, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.846993813097221, 1);
  sqcRYGate(q, 0.14580046220017978, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2945364296457491, 1);
  sqcRYGate(q, 1.374074414148069, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3936523223948294, 0);
  sqcRYGate(q, 0.4206652067225763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6852389706218887, 0);
  sqcRYGate(q, -2.489684807832283, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5636917815138567, 2);
  sqcRYGate(q, -1.9806918152654838, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9880566427635916, 2);
  sqcRYGate(q, 1.0730912182278063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.506493734428771, 1);
  sqcRYGate(q, 1.138608557791268, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.812670043792033, 1);
  sqcRYGate(q, 0.27857172576135447, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7835974524107856, 0);
  sqcRYGate(q, 0.654069936548206, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5809157238026907, 0);
  sqcRYGate(q, 2.4825132096213487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.510364454015046, 2);
  sqcRYGate(q, -0.5512207844678364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4004300318711342, 2);
  sqcRYGate(q, -1.9720608953491596, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.026237230342309, 1);
  sqcRYGate(q, -1.5667260453503797, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7783242188608122, 1);
  sqcRYGate(q, 2.807933854617978, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.995484558522513, 0);
  sqcRYGate(q, 2.422626319462054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.677134764899261, 0);
  sqcRYGate(q, 2.6860453908666333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7694627835644816, 2);
  sqcRYGate(q, -1.9425368326347572, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4429587460538618, 2);
  sqcRYGate(q, 2.2768803804650664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.05784042031996, 1);
  sqcRYGate(q, 0.14113977344463877, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6054013585407967, 1);
  sqcRYGate(q, -2.4329664746198207, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.001759603357220918, 0);
  sqcRYGate(q, 3.0138808705075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.174621192158253, 0);
  sqcRYGate(q, -2.4713590335992834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.42529810103184507, 2);
  sqcRYGate(q, -2.8881024459053695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1398043946511836, 2);
  sqcRYGate(q, 2.2668693983397237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3011639414072134, 1);
  sqcRYGate(q, -2.888657353371719, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.834712306656676, 1);
  sqcRYGate(q, 0.6051227342084626, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.024077098234253, 0);
  sqcRYGate(q, 0.4378278406092244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8798634962516318, 0);
  sqcRYGate(q, -2.71879882872982, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.053026818696205, 2);
  sqcRYGate(q, 0.5528733530537271, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.029314098662426, 2);
  sqcRYGate(q, -3.11982106855836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9440919963674927, 1);
  sqcRYGate(q, -3.110556751952867, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5962490702598624, 1);
  sqcRYGate(q, 2.5841848724308094, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3613634319710588, 0);
  sqcRYGate(q, 0.9970740151725169, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5602067956534524, 0);
  sqcRYGate(q, -1.8700510874539003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7073713650144481, 2);
  sqcRYGate(q, -1.3726297326901546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.808821962335476, 2);
  sqcRYGate(q, -3.101296316575111, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.00047796711546523247, 1);
  sqcRYGate(q, 0.6533121829882926, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6673325689773257, 1);
  sqcRYGate(q, 0.48503005035095814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.279670352154344, 0);
  sqcRYGate(q, 1.3949796685064673, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.41838457824842834, 0);
  sqcRYGate(q, -1.3935319220547164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.385755355305028, 2);
  sqcRYGate(q, -0.5176236607316644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0223286286083377, 2);
  sqcRYGate(q, -2.8062148344052407, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3481995357094276, 1);
  sqcRYGate(q, 2.7751163274830652, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.17942311938769162, 1);
  sqcRYGate(q, 2.6021654713825564, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7484649047074895, 0);
  sqcRYGate(q, 0.28987948685966813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5752373064937464, 0);
  sqcRYGate(q, 2.6924110111038297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.630088050849208, 2);
  sqcRYGate(q, 3.020572012117509, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.892988882029246, 2);
  sqcRYGate(q, 2.606976796226382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07366778602812249, 1);
  sqcRYGate(q, 0.9895667732484544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.308742469108389, 1);
  sqcRYGate(q, 0.7756863319901656, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9289161988673653, 0);
  sqcRYGate(q, -3.0970770427481003, 1);
  sqcRYGate(q, 1.219533920621019, 2);
  sqcRYGate(q, -2.1193587349351892, 3);

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
