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

  sqcRYGate(q, 0.5169053404421415, 0);
  sqcRZGate(q, -1.2499469832330359, 0);
  sqcRYGate(q, -2.7121822143883567, 1);
  sqcRZGate(q, 1.5575305286229901, 1);
  sqcRYGate(q, 2.284687810710383, 2);
  sqcRZGate(q, -0.301237906183721, 2);
  sqcRYGate(q, 1.4737748552343446, 3);
  sqcRZGate(q, -1.618005551854977, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.38342669676309526, 0);
  sqcRZGate(q, 2.940022452133011, 0);
  sqcRYGate(q, -2.0970152855185136, 1);
  sqcRZGate(q, 1.2870039898308356, 1);
  sqcRYGate(q, 1.63594244541739, 2);
  sqcRZGate(q, 2.066797176899632, 2);
  sqcRYGate(q, -1.5363736215475363, 3);
  sqcRZGate(q, -3.105940427905159, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9212323261859137, 0);
  sqcRZGate(q, 0.2942781173678108, 0);
  sqcRYGate(q, 2.107326800246959, 1);
  sqcRZGate(q, 0.4594055940874044, 1);
  sqcRYGate(q, 2.4448409100150883, 2);
  sqcRZGate(q, 2.119972090322685, 2);
  sqcRYGate(q, 2.143953962393665, 3);
  sqcRZGate(q, -2.370942650810071, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9654707735160555, 0);
  sqcRZGate(q, 1.852809424540674, 0);
  sqcRYGate(q, -0.32100489216648764, 1);
  sqcRZGate(q, -2.392724702795847, 1);
  sqcRYGate(q, -1.7762318331628995, 2);
  sqcRZGate(q, -2.155362872959736, 2);
  sqcRYGate(q, 0.05730085310280528, 3);
  sqcRZGate(q, 2.2776612388207043, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.056364072050951, 0);
  sqcRZGate(q, -0.1793028035704303, 0);
  sqcRYGate(q, -0.5475980346807883, 1);
  sqcRZGate(q, -1.251573013582749, 1);
  sqcRYGate(q, -2.023983157395983, 2);
  sqcRZGate(q, -2.511073776222682, 2);
  sqcRYGate(q, 0.5186034156655941, 3);
  sqcRZGate(q, 2.121419020107837, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.029185785445938, 0);
  sqcRZGate(q, 1.3576982314371169, 0);
  sqcRYGate(q, 1.6552234881814223, 1);
  sqcRZGate(q, -2.89101406545858, 1);
  sqcRYGate(q, 0.35729172860007, 2);
  sqcRZGate(q, -2.690522431410395, 2);
  sqcRYGate(q, -0.15984512963441783, 3);
  sqcRZGate(q, 2.6049577202203915, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5656962483740839, 0);
  sqcRZGate(q, 0.19610691733677918, 0);
  sqcRYGate(q, -1.2747331426518385, 1);
  sqcRZGate(q, 2.6267990845099516, 1);
  sqcRYGate(q, 0.05562428395566111, 2);
  sqcRZGate(q, 0.29344380677613147, 2);
  sqcRYGate(q, 1.4758670328827108, 3);
  sqcRZGate(q, -2.9226364908938214, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5584036985316132, 0);
  sqcRZGate(q, -2.2559318319141273, 0);
  sqcRYGate(q, -1.1182178122632969, 1);
  sqcRZGate(q, 0.7260771501221506, 1);
  sqcRYGate(q, -1.0961150712505132, 2);
  sqcRZGate(q, 2.9617555242413114, 2);
  sqcRYGate(q, -3.058514310887258, 3);
  sqcRZGate(q, -2.7858963739708313, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5617596176218624, 0);
  sqcRZGate(q, -2.420240139873596, 0);
  sqcRYGate(q, 0.8815054359866245, 1);
  sqcRZGate(q, -0.059725067770492586, 1);
  sqcRYGate(q, 2.4749673337562155, 2);
  sqcRZGate(q, -2.1361015569018456, 2);
  sqcRYGate(q, 1.3788337003147069, 3);
  sqcRZGate(q, -2.927640218642635, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8021609638769687, 0);
  sqcRZGate(q, 0.36576846401580904, 0);
  sqcRYGate(q, -0.5281713201284878, 1);
  sqcRZGate(q, 0.2898112469854981, 1);
  sqcRYGate(q, 0.20723308037331645, 2);
  sqcRZGate(q, -0.8728331144935737, 2);
  sqcRYGate(q, 0.6487706097551696, 3);
  sqcRZGate(q, 0.26206563847729836, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6671677383475685, 0);
  sqcRZGate(q, 1.9052218571150872, 0);
  sqcRYGate(q, -1.9977211262935521, 1);
  sqcRZGate(q, 2.355902926530132, 1);
  sqcRYGate(q, -0.22529659922470913, 2);
  sqcRZGate(q, 0.9263673226026352, 2);
  sqcRYGate(q, -2.6040291976773986, 3);
  sqcRZGate(q, 1.1704093969957556, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4325524989135947, 0);
  sqcRZGate(q, 0.3059773710041716, 0);
  sqcRYGate(q, -2.4365800377204554, 1);
  sqcRZGate(q, 1.1358024868191678, 1);
  sqcRYGate(q, -2.8537735144142613, 2);
  sqcRZGate(q, -2.225498848169056, 2);
  sqcRYGate(q, -0.661777862067805, 3);
  sqcRZGate(q, -0.37480466840812143, 3);

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
