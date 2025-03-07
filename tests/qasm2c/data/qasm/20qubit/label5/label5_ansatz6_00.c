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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -2.245256480960017, 0);
  sqcRYGate(q, -3.1236011233377683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2353188559557493, 0);
  sqcRYGate(q, -0.3606348749285743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9105564591287951, 1);
  sqcRYGate(q, 2.598964358819488, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.20462520489282632, 1);
  sqcRYGate(q, 1.7844649813375444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.054687998210994, 2);
  sqcRYGate(q, -1.8674912051182933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3513369647870983, 2);
  sqcRYGate(q, 1.1418187615525432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4793075568669467, 3);
  sqcRYGate(q, -0.08594219112250734, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5089165742595068, 3);
  sqcRYGate(q, 3.1170617166213463, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9581338548760104, 4);
  sqcRYGate(q, 1.0387579264058937, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.685590198560696, 4);
  sqcRYGate(q, -2.2072941945037385, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.48299826009863, 5);
  sqcRYGate(q, 1.454424494245189, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6861111944895173, 5);
  sqcRYGate(q, -1.7968191683704662, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4254062028201604, 6);
  sqcRYGate(q, 2.9500898814082173, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5302126211023426, 6);
  sqcRYGate(q, -1.558668683709439, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.974689448712903, 7);
  sqcRYGate(q, 2.5205910602484507, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.795581257820282, 7);
  sqcRYGate(q, -2.2576509266367992, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.863595140341209, 8);
  sqcRYGate(q, -3.1403187082085844, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.5157714824444826, 8);
  sqcRYGate(q, -1.5636760138668255, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.799673543650604, 9);
  sqcRYGate(q, -0.47665630616356586, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.161442051109356, 9);
  sqcRYGate(q, -2.1495932289652933, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5965362225520607, 10);
  sqcRYGate(q, -2.5225959754881564, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.17610981897595, 10);
  sqcRYGate(q, 1.5615846489696343, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3940263881263393, 11);
  sqcRYGate(q, -0.8373976094313267, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.9918569254589389, 11);
  sqcRYGate(q, -0.5756516911104441, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.862025309900445, 12);
  sqcRYGate(q, -2.696563070571483, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.36562101847717715, 12);
  sqcRYGate(q, -1.5644843485743207, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.14259556592923328, 13);
  sqcRYGate(q, -3.1190443984197542, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.539465734675609, 13);
  sqcRYGate(q, -1.4507013330889529, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.413886337302266, 14);
  sqcRYGate(q, 2.179185140908317, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.1906890723843837, 14);
  sqcRYGate(q, 1.5669136226954006, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.015876188270382556, 15);
  sqcRYGate(q, 2.036014243424574, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.8143823367852892, 15);
  sqcRYGate(q, 0.4528594270416525, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.4033870525772216, 16);
  sqcRYGate(q, -0.07665331720608301, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.5264801429182224, 16);
  sqcRYGate(q, -1.5580776841296933, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.4476933166611086, 17);
  sqcRYGate(q, -2.8844629758163096, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.3397441721675394, 17);
  sqcRYGate(q, -0.7274777030374056, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.8912961053201657, 18);
  sqcRYGate(q, 2.3403549067268945, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.464417297491641, 18);
  sqcRYGate(q, 1.568250351935399, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.096487578160459, 0);
  sqcRYGate(q, 0.3758794816815615, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1254959277842094, 0);
  sqcRYGate(q, 1.1311990216599241, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8694312928427186, 1);
  sqcRYGate(q, -0.3117825005782047, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2709396899738428, 1);
  sqcRYGate(q, -0.9573924828313976, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6559322494445823, 2);
  sqcRYGate(q, 0.20445280940957195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.122149144869229, 2);
  sqcRYGate(q, 0.5973738804118779, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4792317534702526, 3);
  sqcRYGate(q, 1.5905818748017717, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3550070447104952, 3);
  sqcRYGate(q, -1.7419902437637063, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5682138383540885, 4);
  sqcRYGate(q, -1.5708759889654647, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5472527117786528, 4);
  sqcRYGate(q, -0.8611291708962275, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5755173589828848, 5);
  sqcRYGate(q, 1.5467944519686956, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1561161716054134, 5);
  sqcRYGate(q, -1.8633689692868314, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.60277594653573, 6);
  sqcRYGate(q, -1.5668859855729809, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6324978713351457, 6);
  sqcRYGate(q, -0.6600962062066675, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.51661033469791, 7);
  sqcRYGate(q, -1.720509746993819, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.18345724555709708, 7);
  sqcRYGate(q, -1.4480588035305024, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.7659029346338702, 8);
  sqcRYGate(q, 1.5714910378010292, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5836993909518027, 8);
  sqcRYGate(q, -0.5561996536124075, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.543864843223318, 9);
  sqcRYGate(q, -1.4686820136357719, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.4627559156647868, 9);
  sqcRYGate(q, 1.6981305987647515, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4660335315356408, 10);
  sqcRYGate(q, 1.5700368964812048, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5675995137625967, 10);
  sqcRYGate(q, 2.039468842696774, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6000937585625943, 11);
  sqcRYGate(q, 1.5789654776846627, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.895529714579868, 11);
  sqcRYGate(q, 1.7585715933046033, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5551280771511562, 12);
  sqcRYGate(q, -1.5689372321575723, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5852507654621064, 12);
  sqcRYGate(q, -0.5406052902654075, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5865496765427236, 13);
  sqcRYGate(q, -1.9878743008581718, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.8796064086069992, 13);
  sqcRYGate(q, 1.6262689372086339, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.9782482154303584, 14);
  sqcRYGate(q, -1.57162763154731, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5653413763700088, 14);
  sqcRYGate(q, -1.4896442884612187, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.6374981033109943, 15);
  sqcRYGate(q, -1.3959269663991805, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.38294998543270126, 15);
  sqcRYGate(q, -1.223945684334512, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.7429662385540992, 16);
  sqcRYGate(q, 1.5704497187064925, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.5757564214579336, 16);
  sqcRYGate(q, -2.515292315927562, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.6339522873157737, 17);
  sqcRYGate(q, 1.6559671577739687, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.127926526169933, 17);
  sqcRYGate(q, -1.497696538586679, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.4085047082918078, 18);
  sqcRYGate(q, -2.4965578187716715, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.5655336550183974, 18);
  sqcRYGate(q, -3.0018768226224717, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.7640763552863208, 0);
  sqcRYGate(q, 2.415329238399539, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.985839541689972, 0);
  sqcRYGate(q, -3.054525371377814, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.370698534421699, 1);
  sqcRYGate(q, 2.160063312138739, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9926485692461706, 1);
  sqcRYGate(q, 0.952570809719883, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9442874697929848, 2);
  sqcRYGate(q, -1.5874285539961344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6636398340595977, 2);
  sqcRYGate(q, -0.8758291015331636, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5362507171071613, 3);
  sqcRYGate(q, -2.8752281002388056, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1299558095466655, 3);
  sqcRYGate(q, -1.4299348963028382, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8941977805963712, 4);
  sqcRYGate(q, -1.5697089158450594, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.611456646514779, 4);
  sqcRYGate(q, -2.633699031539879, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5798143480190543, 5);
  sqcRYGate(q, -1.5675357495606317, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.54630079507327, 5);
  sqcRYGate(q, -1.8401732548786225, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.567135336596338, 6);
  sqcRYGate(q, -1.569687284085493, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4965616227562055, 6);
  sqcRYGate(q, 1.005323051102955, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5719804937994448, 7);
  sqcRYGate(q, 1.5652398222456672, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5693624433290134, 7);
  sqcRYGate(q, -1.7614668478106845, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.556365144222843, 8);
  sqcRYGate(q, 1.5708299110585955, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.578541373818316, 8);
  sqcRYGate(q, -0.785301383291925, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5706798074132733, 9);
  sqcRYGate(q, 1.5652457467833933, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0424352931071426, 9);
  sqcRYGate(q, 1.4801868409891454, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5650549732215682, 10);
  sqcRYGate(q, -1.5715067099322333, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5824077515227222, 10);
  sqcRYGate(q, -0.7015767395942225, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5650799829280608, 11);
  sqcRYGate(q, 1.5718321992027056, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.5186017205965463, 11);
  sqcRYGate(q, 1.780346839153232, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5527240288458792, 12);
  sqcRYGate(q, -1.570797532306673, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5892274333945324, 12);
  sqcRYGate(q, -1.1464667240461954, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5651228189784687, 13);
  sqcRYGate(q, -1.5718168316682695, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.578359516016016, 13);
  sqcRYGate(q, 1.5723519857458728, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.572927637112115, 14);
  sqcRYGate(q, -1.5703615212520898, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.567201066960742, 14);
  sqcRYGate(q, 0.37366356237198683, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.562710088177484, 15);
  sqcRYGate(q, -1.5682348753648645, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.570938445864101, 15);
  sqcRYGate(q, 1.8815716561247464, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5723656739817535, 16);
  sqcRYGate(q, -1.5712927097875298, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.567559944456575, 16);
  sqcRYGate(q, 1.9086012981276488, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.555329526897078, 17);
  sqcRYGate(q, -1.6110677629782442, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.9534532954261654, 17);
  sqcRYGate(q, 1.355157037209025, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.5120425333295149, 18);
  sqcRYGate(q, -0.6710069783671662, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.5688686957595857, 18);
  sqcRYGate(q, -3.1024947358362605, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.08802946615980822, 0);
  sqcRYGate(q, -0.6896671212264655, 1);
  sqcRYGate(q, 1.5555438106135036, 2);
  sqcRYGate(q, -1.567623287198817, 3);
  sqcRYGate(q, 1.5586386038291273, 4);
  sqcRYGate(q, 1.5737052370064841, 5);
  sqcRYGate(q, -1.5590709336983508, 6);
  sqcRYGate(q, 1.569505050815287, 7);
  sqcRYGate(q, -1.5562087301100043, 8);
  sqcRYGate(q, 1.571078157871411, 9);
  sqcRYGate(q, -1.5592658796061392, 10);
  sqcRYGate(q, 1.57027050154852, 11);
  sqcRYGate(q, 1.5747040647698842, 12);
  sqcRYGate(q, 1.570638306905539, 13);
  sqcRYGate(q, -1.5745530581522753, 14);
  sqcRYGate(q, -1.5731431524142836, 15);
  sqcRYGate(q, -1.5934122231142123, 16);
  sqcRYGate(q, 1.572519285571542, 17);
  sqcRYGate(q, -1.5060406204432741, 18);
  sqcRYGate(q, 3.1412015284429593, 19);

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
