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

  sqcRYGate(q, -0.37296860285019834, 0);
  sqcRZGate(q, -0.6579763796957571, 0);
  sqcRYGate(q, -0.3578140602059713, 1);
  sqcRZGate(q, 1.2971498243973913, 1);
  sqcRYGate(q, 1.3549188863623014, 2);
  sqcRZGate(q, -1.7238719817999586, 2);
  sqcRYGate(q, 0.04136890798490193, 3);
  sqcRZGate(q, 2.3781393522088266, 3);
  sqcRYGate(q, 3.1024288798834325, 4);
  sqcRZGate(q, -1.4580608722717656, 4);
  sqcRYGate(q, -0.7786265042075837, 5);
  sqcRZGate(q, 0.4293313986862788, 5);
  sqcRYGate(q, -2.0468596073586474, 6);
  sqcRZGate(q, 1.117599620546173, 6);
  sqcRYGate(q, -3.107359841765674, 7);
  sqcRZGate(q, 0.21627653627742482, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.2931066842605077, 0);
  sqcRZGate(q, -2.329291183637812, 0);
  sqcRYGate(q, 1.6551906606540883, 1);
  sqcRZGate(q, -1.2033294181308392, 1);
  sqcRYGate(q, 2.455699128115909, 2);
  sqcRZGate(q, -3.002277210530173, 2);
  sqcRYGate(q, -1.6070903790120104, 3);
  sqcRZGate(q, -0.7446170858422425, 3);
  sqcRYGate(q, -2.981894321814024, 4);
  sqcRZGate(q, 3.1369865383618807, 4);
  sqcRYGate(q, -3.1161374787670346, 5);
  sqcRZGate(q, -0.8646976468520959, 5);
  sqcRYGate(q, -2.248620700006505, 6);
  sqcRZGate(q, -0.6666635404284822, 6);
  sqcRYGate(q, -3.1330488549027553, 7);
  sqcRZGate(q, -0.3915354209254538, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.2572229204377772, 0);
  sqcRZGate(q, -0.11171205565345411, 0);
  sqcRYGate(q, -1.5535957253187176, 1);
  sqcRZGate(q, -2.5797909158897983, 1);
  sqcRYGate(q, -1.9649926269236517, 2);
  sqcRZGate(q, -1.4146268303664078, 2);
  sqcRYGate(q, -0.010999956878498196, 3);
  sqcRZGate(q, -1.1644203763707237, 3);
  sqcRYGate(q, 0.03014546696371312, 4);
  sqcRZGate(q, 2.263469150779806, 4);
  sqcRYGate(q, 3.0858238613828304, 5);
  sqcRZGate(q, -1.6798087992781638, 5);
  sqcRYGate(q, 0.9722393637127489, 6);
  sqcRZGate(q, 0.04037672669616832, 6);
  sqcRYGate(q, -2.7634434294559522, 7);
  sqcRZGate(q, -2.4736425645334066, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.4167188804850195, 0);
  sqcRZGate(q, -1.9907339759692315, 0);
  sqcRYGate(q, 3.0097797589587074, 1);
  sqcRZGate(q, -2.5736201731087793, 1);
  sqcRYGate(q, -1.1790345241099844, 2);
  sqcRZGate(q, 1.4489083614099814, 2);
  sqcRYGate(q, -1.6671789161740196, 3);
  sqcRZGate(q, 2.8410463585106296, 3);
  sqcRYGate(q, -1.5591758230220476, 4);
  sqcRZGate(q, 0.691146351728692, 4);
  sqcRYGate(q, 1.1492494472374042, 5);
  sqcRZGate(q, -1.2973964196233405, 5);
  sqcRYGate(q, -0.7075425835893974, 6);
  sqcRZGate(q, 1.5245694000817105, 6);
  sqcRYGate(q, 0.005412737353093849, 7);
  sqcRZGate(q, 1.6318041327776291, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.1164647315667668, 0);
  sqcRZGate(q, -2.852559161125968, 0);
  sqcRYGate(q, -1.7596516339697852, 1);
  sqcRZGate(q, -2.9818792438773225, 1);
  sqcRYGate(q, -0.005263315483408526, 2);
  sqcRZGate(q, -1.7187771592608438, 2);
  sqcRYGate(q, 3.135053158225831, 3);
  sqcRZGate(q, -1.7432177761268477, 3);
  sqcRYGate(q, 3.141036388998763, 4);
  sqcRZGate(q, 2.3414922698288496, 4);
  sqcRYGate(q, -1.429398931437416, 5);
  sqcRZGate(q, 1.5835119039610304, 5);
  sqcRYGate(q, -1.5731881861716204, 6);
  sqcRZGate(q, 2.6465735952747322, 6);
  sqcRYGate(q, 1.6636067432447406, 7);
  sqcRZGate(q, -1.6081974770141185, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.989058423032453, 0);
  sqcRZGate(q, -0.44971185698019767, 0);
  sqcRYGate(q, -1.0054129831123526, 1);
  sqcRZGate(q, 2.7301753380256826, 1);
  sqcRYGate(q, -0.719683585027286, 2);
  sqcRZGate(q, 1.0302165544575654, 2);
  sqcRYGate(q, 1.631172513286664, 3);
  sqcRZGate(q, 0.10740987051271053, 3);
  sqcRYGate(q, 1.5720615317256719, 4);
  sqcRZGate(q, -0.8677493611493112, 4);
  sqcRYGate(q, -1.608369459909457, 5);
  sqcRZGate(q, 0.0507815784644502, 5);
  sqcRYGate(q, -3.1348712346969947, 6);
  sqcRZGate(q, 1.150114208173013, 6);
  sqcRYGate(q, -1.562635147323296, 7);
  sqcRZGate(q, 1.7540296346892599, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 3.0406330598658355, 0);
  sqcRZGate(q, -0.5493677328644535, 0);
  sqcRYGate(q, 3.1393796447716973, 1);
  sqcRZGate(q, 2.839452912640883, 1);
  sqcRYGate(q, 7.747042540291396e-05, 2);
  sqcRZGate(q, 0.5027170039466132, 2);
  sqcRYGate(q, -0.1367979933762653, 3);
  sqcRZGate(q, -3.1027528439667407, 3);
  sqcRYGate(q, -1.5708810039413703, 4);
  sqcRZGate(q, -1.5706617763113553, 4);
  sqcRYGate(q, 1.5891834573917334, 5);
  sqcRZGate(q, 2.46858807086353, 5);
  sqcRYGate(q, 0.009735470079964212, 6);
  sqcRZGate(q, 1.81452907689958, 6);
  sqcRYGate(q, 3.061156475292001, 7);
  sqcRZGate(q, -2.95575314993695, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.9167883124086018, 0);
  sqcRZGate(q, -0.4427352010546254, 0);
  sqcRYGate(q, -1.0004583085080458, 1);
  sqcRZGate(q, 3.1156492920774514, 1);
  sqcRYGate(q, -0.0011930635627619424, 2);
  sqcRZGate(q, 1.4817902712027964, 2);
  sqcRYGate(q, 1.541942333001061, 3);
  sqcRZGate(q, 3.1375230422213045, 3);
  sqcRYGate(q, -1.569148917652254, 4);
  sqcRZGate(q, 2.8292534119496233, 4);
  sqcRYGate(q, 6.420610651503011e-05, 5);
  sqcRZGate(q, -0.8977547295838431, 5);
  sqcRYGate(q, 3.138456106897521, 6);
  sqcRZGate(q, -1.157503923845824, 6);
  sqcRYGate(q, -1.5702135695111628, 7);
  sqcRZGate(q, -2.4886354628270078, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.8002596973450329, 0);
  sqcRZGate(q, 0.45486885224316925, 0);
  sqcRYGate(q, -1.5640636527961185, 1);
  sqcRZGate(q, 0.07004143818978115, 1);
  sqcRYGate(q, -0.0010330531732292, 2);
  sqcRZGate(q, -0.014682743801815334, 2);
  sqcRYGate(q, -1.016875238833391, 3);
  sqcRZGate(q, -0.0008134454489328036, 3);
  sqcRYGate(q, -0.48181968877173653, 4);
  sqcRZGate(q, -3.0501157829234686, 4);
  sqcRYGate(q, 1.571006755690986, 5);
  sqcRZGate(q, 2.6617642462992817, 5);
  sqcRYGate(q, -1.570071241560712, 6);
  sqcRZGate(q, -1.54150341250099, 6);
  sqcRYGate(q, -1.4823856594555327, 7);
  sqcRZGate(q, 1.3522601370464296, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.0012263144720607855, 0);
  sqcRZGate(q, 1.15687385659568, 0);
  sqcRYGate(q, 3.05834691653119, 1);
  sqcRZGate(q, -1.500983490751063, 1);
  sqcRYGate(q, 0.0013645498644407894, 2);
  sqcRZGate(q, -0.8819543615546448, 2);
  sqcRYGate(q, 1.563559822061939, 3);
  sqcRZGate(q, 3.138092000539526, 3);
  sqcRYGate(q, 3.1412836422544945, 4);
  sqcRZGate(q, -0.9577311423243725, 4);
  sqcRYGate(q, -3.139446482608297, 5);
  sqcRZGate(q, -0.31189504479762054, 5);
  sqcRYGate(q, 3.0331380617174797, 6);
  sqcRZGate(q, -1.9824091595497857, 6);
  sqcRYGate(q, 0.8273546952097242, 7);
  sqcRZGate(q, -2.946329601068299, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.1595272485032133, 0);
  sqcRZGate(q, -3.080037697466264, 0);
  sqcRYGate(q, 1.7176148913216904, 1);
  sqcRZGate(q, -0.0012849394464602426, 1);
  sqcRYGate(q, -3.141304809115158, 2);
  sqcRZGate(q, 1.8651815030685093, 2);
  sqcRYGate(q, 0.5289977479676714, 3);
  sqcRZGate(q, 0.2413815138762072, 3);
  sqcRYGate(q, 0.35410650408977146, 4);
  sqcRZGate(q, -0.3536686821547092, 4);
  sqcRYGate(q, -3.1289033902380488, 5);
  sqcRZGate(q, 3.0916627200404725, 5);
  sqcRYGate(q, -3.1389291702455044, 6);
  sqcRZGate(q, -0.4407076692694613, 6);
  sqcRYGate(q, -2.2168314666399875, 7);
  sqcRZGate(q, 1.4973646111882282, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5741613958748069, 0);
  sqcRZGate(q, 3.106831815786456, 0);
  sqcRYGate(q, 1.560208667571614, 1);
  sqcRZGate(q, 1.089282825442359, 1);
  sqcRYGate(q, 0.01671740217283871, 2);
  sqcRZGate(q, 2.594366744739707, 2);
  sqcRYGate(q, -3.091650078700294, 3);
  sqcRZGate(q, 0.25788442355291863, 3);
  sqcRYGate(q, -0.00025544267721404606, 4);
  sqcRZGate(q, -1.9589870548298847, 4);
  sqcRYGate(q, 3.1386222025047457, 5);
  sqcRZGate(q, -0.19616545993385803, 5);
  sqcRYGate(q, -1.5689684775711523, 6);
  sqcRZGate(q, 1.5853256101899316, 6);
  sqcRYGate(q, 1.7712868352075637, 7);
  sqcRZGate(q, 0.7815634805645288, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.6272160688624409, 0);
  sqcRZGate(q, 3.1051397946725525, 0);
  sqcRYGate(q, -3.1210541611455884, 1);
  sqcRZGate(q, 1.032870261984368, 1);
  sqcRYGate(q, 0.06417533726675373, 2);
  sqcRZGate(q, 0.5561723192504177, 2);
  sqcRYGate(q, 1.5688405023326066, 3);
  sqcRZGate(q, 3.086684410759193, 3);
  sqcRYGate(q, -1.604002988669839, 4);
  sqcRZGate(q, -1.603407960483766, 4);
  sqcRYGate(q, -1.5665835967461357, 5);
  sqcRZGate(q, -0.048567532369231614, 5);
  sqcRYGate(q, 1.5363263781998668, 6);
  sqcRZGate(q, -1.6033620080353244, 6);
  sqcRYGate(q, -1.5501693081811627, 7);
  sqcRZGate(q, 1.5204206222351777, 7);

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
