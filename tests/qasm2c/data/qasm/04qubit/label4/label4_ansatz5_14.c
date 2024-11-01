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

  sqcRYGate(q, 1.3604620042248898, 0);
  sqcRYGate(q, 0.5837390230943061, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5631679763842686, 0);
  sqcRYGate(q, -0.4748770213136968, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.575229113627607, 2);
  sqcRYGate(q, 1.3643423245186534, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1998173865435406, 2);
  sqcRYGate(q, 1.408513228639296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8116220772450644, 1);
  sqcRYGate(q, 1.8068953722296381, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.537149862258688, 1);
  sqcRYGate(q, -0.009376317431218445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3768399556653117, 0);
  sqcRYGate(q, -1.866062674906198, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2603000509769415, 0);
  sqcRYGate(q, 2.067241954007927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.39507325616282285, 2);
  sqcRYGate(q, 2.5327115683074335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8654622785959041, 2);
  sqcRYGate(q, 0.517087198587296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9544567569834923, 1);
  sqcRYGate(q, 2.906129748442985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9222895357409725, 1);
  sqcRYGate(q, 0.6887363434028977, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.42618821114843, 0);
  sqcRYGate(q, -1.8528770188532413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3999593404714803, 0);
  sqcRYGate(q, 0.8982971110025906, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1232817959735353, 2);
  sqcRYGate(q, 0.733177592531229, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9443942981302946, 2);
  sqcRYGate(q, -0.9345533439953193, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9695545257916329, 1);
  sqcRYGate(q, 0.608592179325053, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3976940478757554, 1);
  sqcRYGate(q, -1.9310733580293835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8738712053991011, 0);
  sqcRYGate(q, 2.173785889760195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5531110504514625, 0);
  sqcRYGate(q, -3.0666140888383793, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1571988421526063, 2);
  sqcRYGate(q, -1.6741777812246943, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.638366318557736, 2);
  sqcRYGate(q, 0.8340759271427821, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.705480818100781, 1);
  sqcRYGate(q, -0.9314565851379899, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.567680375889882, 1);
  sqcRYGate(q, -0.02009654955268139, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0117332445664466, 0);
  sqcRYGate(q, -2.2870303078154524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8548584274738085, 0);
  sqcRYGate(q, 0.3279642550879709, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4610218435091795, 2);
  sqcRYGate(q, 1.7264377269580524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4449015131237477, 2);
  sqcRYGate(q, 3.0750596371551286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5542681302011889, 1);
  sqcRYGate(q, -0.6292661465817426, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.70144080947851, 1);
  sqcRYGate(q, -0.1263617105293889, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.989426451657388, 0);
  sqcRYGate(q, 1.5769044899831264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5387974188259106, 0);
  sqcRYGate(q, 2.495301122631669, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4845717172624733, 2);
  sqcRYGate(q, -0.46788893771940465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.307759269938599, 2);
  sqcRYGate(q, 1.132072084733948, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.27512050140264394, 1);
  sqcRYGate(q, 2.238565227814151, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5738055756969169, 1);
  sqcRYGate(q, 0.18015614755450668, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.11813097935763008, 0);
  sqcRYGate(q, -0.501292257011677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.13688540726157147, 0);
  sqcRYGate(q, 1.0030768597596076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10759884313173362, 2);
  sqcRYGate(q, 0.02458816836244586, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9468788602919674, 2);
  sqcRYGate(q, -1.6423024453379187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8244525145382233, 1);
  sqcRYGate(q, 1.7525961638722738, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.104342703170301, 1);
  sqcRYGate(q, 2.3212860484130737, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9133356582873198, 0);
  sqcRYGate(q, 1.4141484007419607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.026419593760007, 0);
  sqcRYGate(q, 0.14221114871154877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7359587199840546, 2);
  sqcRYGate(q, -2.259579855897461, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.941259488996106, 2);
  sqcRYGate(q, -2.3428291655902957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.49397772438257986, 1);
  sqcRYGate(q, -0.0912459183853524, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7784584120778466, 1);
  sqcRYGate(q, -2.698847415609753, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7217101802103851, 0);
  sqcRYGate(q, 0.3927008090192512, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4436963053741296, 0);
  sqcRYGate(q, 0.5614276843281942, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.539865830889736, 2);
  sqcRYGate(q, 0.9899629679826435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.199894693505625, 2);
  sqcRYGate(q, 1.3513785668705287, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2869900795693399, 1);
  sqcRYGate(q, 1.673916378063779, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5086039501188186, 1);
  sqcRYGate(q, 2.7661016036479227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9750047504343407, 0);
  sqcRYGate(q, 3.015925357329934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.605433588149932, 0);
  sqcRYGate(q, 1.3540464819039633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6814520047191155, 2);
  sqcRYGate(q, -0.031722589184305004, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.056706169402676, 2);
  sqcRYGate(q, 2.871699437329565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6738447311890843, 1);
  sqcRYGate(q, 2.5773708219969893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.438063583128013, 1);
  sqcRYGate(q, -0.9071808471658092, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.434740081314996, 0);
  sqcRYGate(q, -1.5274360645779534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3466603760438747, 0);
  sqcRYGate(q, -0.03361350977339583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8537067642517844, 2);
  sqcRYGate(q, -0.5282949012923739, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.189832623321572, 2);
  sqcRYGate(q, -0.7657266410412222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2398776899004527, 1);
  sqcRYGate(q, 3.0876840843305273, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6385246377572389, 1);
  sqcRYGate(q, 0.3252594737803319, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5305657811911209, 0);
  sqcRYGate(q, -1.420420689505145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7997475657791142, 0);
  sqcRYGate(q, 1.4798000589350395, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.110998915748917, 2);
  sqcRYGate(q, -2.5304191368937565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.123196095615671, 2);
  sqcRYGate(q, 3.0838421041989448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2492394793443884, 1);
  sqcRYGate(q, 0.15252138818203465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9117990329738377, 1);
  sqcRYGate(q, 2.252378929831985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.340919711638116, 0);
  sqcRYGate(q, -1.9762609767228119, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.397722140213542, 0);
  sqcRYGate(q, 0.047573190515907804, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.366418623686714, 2);
  sqcRYGate(q, -1.2077038202518873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6548706555699245, 2);
  sqcRYGate(q, 1.3244589924116241, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0213476631011265, 1);
  sqcRYGate(q, 2.08975642183087, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.028607402612311567, 1);
  sqcRYGate(q, -2.775720955529471, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.926198268975552, 0);
  sqcRYGate(q, 2.737083486713254, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8627591902253824, 0);
  sqcRYGate(q, 2.5740563046677343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.549234718819692, 2);
  sqcRYGate(q, 1.940195925589438, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3603462864734985, 2);
  sqcRYGate(q, 3.107554967972107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.759998043759195, 1);
  sqcRYGate(q, -0.8086260641766412, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14690842912286112, 1);
  sqcRYGate(q, -2.6300177699590326, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4125647033047515, 0);
  sqcRYGate(q, 1.7860439806521828, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7888971635191427, 0);
  sqcRYGate(q, -0.7636422910877236, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9091621891574988, 2);
  sqcRYGate(q, 1.4294197597522977, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.129826268946887, 2);
  sqcRYGate(q, -1.5520609116242785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7612944268552124, 1);
  sqcRYGate(q, 0.3258209094728715, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7403781562547183, 1);
  sqcRYGate(q, 1.6933735056452779, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6390596878373525, 0);
  sqcRYGate(q, -0.3427263784016237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9897934780836053, 0);
  sqcRYGate(q, -0.6225559027006786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0464849484307437, 2);
  sqcRYGate(q, 0.5103437823657345, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1091801509561359, 2);
  sqcRYGate(q, 2.827770886726266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.11713862217681649, 1);
  sqcRYGate(q, 2.4444158836064616, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.293029280057525, 1);
  sqcRYGate(q, 2.888270386067278, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9862530724443435, 0);
  sqcRYGate(q, 0.3431436285518865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4669790711975186, 0);
  sqcRYGate(q, 2.7393002905795325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.469435994591028, 2);
  sqcRYGate(q, 2.983434493068941, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.694835105666693, 2);
  sqcRYGate(q, -0.783985738162222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.967812339908045, 1);
  sqcRYGate(q, -3.122282977836514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5155429996906067, 1);
  sqcRYGate(q, 2.0707054613329943, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3093864816406091, 0);
  sqcRYGate(q, 2.133771059990625, 1);
  sqcRYGate(q, -1.4221806313341778, 2);
  sqcRYGate(q, 1.9603237052329787, 3);

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
