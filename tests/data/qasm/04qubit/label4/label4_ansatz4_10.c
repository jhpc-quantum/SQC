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

  sqcRYGate(q, 1.0895162453590128, 0);
  sqcRZGate(q, 1.842789798402913, 0);
  sqcRYGate(q, 0.4000985332533148, 1);
  sqcRZGate(q, 1.9083545706390685, 1);
  sqcRYGate(q, -1.5500310391966652, 2);
  sqcRZGate(q, 1.9974375452837698, 2);
  sqcRYGate(q, -2.06636677236279, 3);
  sqcRZGate(q, -2.307626549507795, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7671589629651088, 0);
  sqcRZGate(q, 0.6833855966891926, 0);
  sqcRYGate(q, 2.0395708531235286, 1);
  sqcRZGate(q, 2.1586837004261543, 1);
  sqcRYGate(q, 0.8403343775332317, 2);
  sqcRZGate(q, -2.5036836443963133, 2);
  sqcRYGate(q, -0.0496033306279345, 3);
  sqcRZGate(q, -0.7818524491488031, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.405375963248, 0);
  sqcRZGate(q, -1.563079730615743, 0);
  sqcRYGate(q, 2.910086266089923, 1);
  sqcRZGate(q, 2.7877934015262835, 1);
  sqcRYGate(q, 0.5861276494934673, 2);
  sqcRZGate(q, -1.6207044878512784, 2);
  sqcRYGate(q, -1.1390305312431124, 3);
  sqcRZGate(q, 0.06612429623873141, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.736918203093408, 0);
  sqcRZGate(q, 1.337623486319791, 0);
  sqcRYGate(q, 2.157836618500891, 1);
  sqcRZGate(q, 0.2638214833198698, 1);
  sqcRYGate(q, 2.5945840909424827, 2);
  sqcRZGate(q, -1.2694798026996066, 2);
  sqcRYGate(q, -1.9249814597756225, 3);
  sqcRZGate(q, 2.4580458278924135, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.313914294524548, 0);
  sqcRZGate(q, -1.6593226842015367, 0);
  sqcRYGate(q, -2.811531726158947, 1);
  sqcRZGate(q, -1.5212528304453308, 1);
  sqcRYGate(q, -0.9451346422036239, 2);
  sqcRZGate(q, -0.40838522060894444, 2);
  sqcRYGate(q, -2.050908025644548, 3);
  sqcRZGate(q, 1.016880643301656, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.337846346734584, 0);
  sqcRZGate(q, -2.351112078191722, 0);
  sqcRYGate(q, -0.7298644624840775, 1);
  sqcRZGate(q, -0.3602312084222247, 1);
  sqcRYGate(q, -0.4690367325444302, 2);
  sqcRZGate(q, -0.6216334399416104, 2);
  sqcRYGate(q, -2.134916293481367, 3);
  sqcRZGate(q, -0.46698703631644006, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.410038635084468, 0);
  sqcRZGate(q, 2.8640127571299177, 0);
  sqcRYGate(q, 1.1152234139154418, 1);
  sqcRZGate(q, 1.7216554135795477, 1);
  sqcRYGate(q, 1.501808204018063, 2);
  sqcRZGate(q, -0.3284751211826733, 2);
  sqcRYGate(q, -3.068018450709302, 3);
  sqcRZGate(q, 0.17196287110468872, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2920155805982168, 0);
  sqcRZGate(q, -1.5294738298997967, 0);
  sqcRYGate(q, -1.7148142394376702, 1);
  sqcRZGate(q, 1.6541509139730617, 1);
  sqcRYGate(q, 2.253456113809569, 2);
  sqcRZGate(q, -1.7417401521201454, 2);
  sqcRYGate(q, -1.0437375952016126, 3);
  sqcRZGate(q, 3.0239058337783895, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7483954189833013, 0);
  sqcRZGate(q, 1.0914584985032354, 0);
  sqcRYGate(q, 2.785877179845454, 1);
  sqcRZGate(q, -1.202238227085756, 1);
  sqcRYGate(q, 2.239920573394925, 2);
  sqcRZGate(q, -1.2679262616355125, 2);
  sqcRYGate(q, -2.416148999227164, 3);
  sqcRZGate(q, -1.0627689083166205, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.459170680533652, 0);
  sqcRZGate(q, -1.4225821371329619, 0);
  sqcRYGate(q, 2.780440229408431, 1);
  sqcRZGate(q, -1.8314528662220821, 1);
  sqcRYGate(q, 1.7992978685550136, 2);
  sqcRZGate(q, 2.9943401582494613, 2);
  sqcRYGate(q, 3.0035780513504085, 3);
  sqcRZGate(q, -2.087154737534531, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0912645471717584, 0);
  sqcRZGate(q, 0.9147922081251058, 0);
  sqcRYGate(q, 2.938931282444601, 1);
  sqcRZGate(q, 1.5946914194055088, 1);
  sqcRYGate(q, 1.7124971595157277, 2);
  sqcRZGate(q, 1.3722482871162835, 2);
  sqcRYGate(q, -2.8255608517900446, 3);
  sqcRZGate(q, -0.7303884698995341, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9238345822669434, 0);
  sqcRZGate(q, 3.0090456036447364, 0);
  sqcRYGate(q, 0.055155590085634566, 1);
  sqcRZGate(q, -0.29248851518601526, 1);
  sqcRYGate(q, 0.6273699933442072, 2);
  sqcRZGate(q, 0.9113749377239069, 2);
  sqcRYGate(q, 2.7637792292126533, 3);
  sqcRZGate(q, -1.1414196784613084, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.24002924156586491, 0);
  sqcRZGate(q, -2.704775948654759, 0);
  sqcRYGate(q, 1.6373107061194265, 1);
  sqcRZGate(q, 0.025397926701115736, 1);
  sqcRYGate(q, 1.99314760150427, 2);
  sqcRZGate(q, -2.879064114582086, 2);
  sqcRYGate(q, 0.6316207629039516, 3);
  sqcRZGate(q, 1.6877877476210281, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.42292178260209656, 0);
  sqcRZGate(q, 0.4273426812868477, 0);
  sqcRYGate(q, -0.25432238576748567, 1);
  sqcRZGate(q, -1.142433865775164, 1);
  sqcRYGate(q, -0.6666692928212878, 2);
  sqcRZGate(q, 1.647637336239531, 2);
  sqcRYGate(q, -1.3553524565910209, 3);
  sqcRZGate(q, 2.0513282266547845, 3);

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
