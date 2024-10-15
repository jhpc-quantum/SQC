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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -0.0002791997554689729, 0);
  sqcRZGate(q, 1.8022746823538611, 0);
  sqcRYGate(q, 1.5705195226225772, 1);
  sqcRZGate(q, 3.125750628238358, 1);
  sqcRYGate(q, -3.1291360753910644, 2);
  sqcRZGate(q, 0.5885428221441673, 2);
  sqcRYGate(q, -0.236982792778595, 3);
  sqcRZGate(q, -2.867834248752226, 3);
  sqcRYGate(q, -0.009035675485416091, 4);
  sqcRZGate(q, 2.059149512700785, 4);
  sqcRYGate(q, 1.4668957545712562, 5);
  sqcRZGate(q, 2.319688620932158, 5);
  sqcRYGate(q, -0.794356733682502, 6);
  sqcRZGate(q, 1.1518971494827115, 6);
  sqcRYGate(q, 4.70917120836134e-05, 7);
  sqcRZGate(q, -0.9145596918052852, 7);
  sqcRYGate(q, 2.506862258575877e-05, 8);
  sqcRZGate(q, 1.3583549780488127, 8);
  sqcRYGate(q, -1.5733098639969034, 9);
  sqcRZGate(q, 2.861789052780273, 9);
  sqcRYGate(q, -1.570754555816717, 10);
  sqcRZGate(q, -1.5707723830132017, 10);
  sqcRYGate(q, 1.572692223318703, 11);
  sqcRZGate(q, -2.941231681443111, 11);
  sqcRYGate(q, -2.889359573289973, 12);
  sqcRZGate(q, 2.230216151883605, 12);
  sqcRYGate(q, -0.027294204380167386, 13);
  sqcRZGate(q, -1.74329294852516, 13);
  sqcRYGate(q, -3.1225759793083476, 14);
  sqcRZGate(q, 1.700886205581186, 14);
  sqcRYGate(q, 0.29524209874546165, 15);
  sqcRZGate(q, 2.4321487571691005, 15);
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
  sqcRYGate(q, 3.1335853307197286, 0);
  sqcRZGate(q, -1.8645858455218285, 0);
  sqcRYGate(q, 1.5970011005825713, 1);
  sqcRZGate(q, 1.7980740682229985, 1);
  sqcRYGate(q, 0.11179518602984118, 2);
  sqcRZGate(q, -0.04892650272354748, 2);
  sqcRYGate(q, 1.5700738822361995, 3);
  sqcRZGate(q, -2.2665293260495893, 3);
  sqcRYGate(q, -1.2818558445432606, 4);
  sqcRZGate(q, 0.11863465444058184, 4);
  sqcRYGate(q, 2.985365572181254, 5);
  sqcRZGate(q, -0.24732930701681166, 5);
  sqcRYGate(q, -1.1779956463493217, 6);
  sqcRZGate(q, -0.6792014560843932, 6);
  sqcRYGate(q, 3.141590351213453, 7);
  sqcRZGate(q, 2.846077052055994, 7);
  sqcRYGate(q, -1.570404035374306, 8);
  sqcRZGate(q, -1.9451431294422172, 8);
  sqcRYGate(q, 0.38888613616434947, 9);
  sqcRZGate(q, -1.5056251161728609, 9);
  sqcRYGate(q, -0.3121222646829915, 10);
  sqcRZGate(q, 1.5708933491643322, 10);
  sqcRYGate(q, 0.0002604036623065799, 11);
  sqcRZGate(q, 1.1086603130691213, 11);
  sqcRYGate(q, -1.0906268098409555e-05, 12);
  sqcRZGate(q, 2.4613873708273455, 12);
  sqcRYGate(q, -3.104916779831884, 13);
  sqcRZGate(q, 0.776833116264676, 13);
  sqcRYGate(q, 1.5541162458939768, 14);
  sqcRZGate(q, -1.7476769245147536, 14);
  sqcRYGate(q, -1.7913461710750163, 15);
  sqcRZGate(q, 0.34618327619957695, 15);
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
  sqcRYGate(q, -0.0015689607827480817, 0);
  sqcRZGate(q, -1.5394418364662317, 0);
  sqcRYGate(q, -3.022998058969534, 1);
  sqcRZGate(q, -0.8108232608805929, 1);
  sqcRYGate(q, -0.8551919400004425, 2);
  sqcRZGate(q, -0.0183807744898798, 2);
  sqcRYGate(q, -0.0023476786688352287, 3);
  sqcRZGate(q, 0.7491902558108511, 3);
  sqcRYGate(q, -3.1353441280307615, 4);
  sqcRZGate(q, 1.077401463306618, 4);
  sqcRYGate(q, -1.572743084230974, 5);
  sqcRZGate(q, -1.5722338368465196, 5);
  sqcRYGate(q, 3.13668280444834, 6);
  sqcRZGate(q, 1.599880153983925, 6);
  sqcRYGate(q, 1.5707689870360206, 7);
  sqcRZGate(q, -1.2749329745667133, 7);
  sqcRYGate(q, -1.5717055713748416, 8);
  sqcRZGate(q, -1.5704159952739323, 8);
  sqcRYGate(q, 1.5632605897746847, 9);
  sqcRZGate(q, 2.0738946765043496, 9);
  sqcRYGate(q, 1.570920026185477, 10);
  sqcRZGate(q, -0.34800325390114484, 10);
  sqcRYGate(q, -0.0636447333089798, 11);
  sqcRZGate(q, -1.3505707665716344, 11);
  sqcRYGate(q, -1.0343135983436387, 12);
  sqcRZGate(q, -1.564658156680438, 12);
  sqcRYGate(q, -3.1328867345161004, 13);
  sqcRZGate(q, 2.5862899833250244, 13);
  sqcRYGate(q, -1.3698455580208675, 14);
  sqcRZGate(q, -1.3957233831357638, 14);
  sqcRYGate(q, -1.6406679846769343, 15);
  sqcRZGate(q, -0.4604234944293033, 15);
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
  sqcRYGate(q, 0.013411715713580463, 0);
  sqcRZGate(q, 1.8208434833659384, 0);
  sqcRYGate(q, 0.0306309205273271, 1);
  sqcRZGate(q, 1.1757118556822288, 1);
  sqcRYGate(q, 0.1361152501066966, 2);
  sqcRZGate(q, -1.6492947119660801, 2);
  sqcRYGate(q, 3.1311815417079534, 3);
  sqcRZGate(q, 1.6223677377240833, 3);
  sqcRYGate(q, -3.1379278252389384, 4);
  sqcRZGate(q, -2.1823665329628725, 4);
  sqcRYGate(q, -1.5706910527586293, 5);
  sqcRZGate(q, -3.1408380111059784, 5);
  sqcRYGate(q, -0.2628812822698814, 6);
  sqcRZGate(q, -2.2129309582223753, 6);
  sqcRYGate(q, -3.141542363949686, 7);
  sqcRZGate(q, 0.2980721211329289, 7);
  sqcRYGate(q, -1.570816526538743, 8);
  sqcRZGate(q, 2.0111179416188474, 8);
  sqcRYGate(q, 1.3790015340712524e-05, 9);
  sqcRZGate(q, 1.0664485301247995, 9);
  sqcRYGate(q, -3.1405018674516554, 10);
  sqcRZGate(q, 1.6937294885936736, 10);
  sqcRYGate(q, 3.134730565821561, 11);
  sqcRZGate(q, 1.7278656307452793, 11);
  sqcRYGate(q, -1.5706961272719484, 12);
  sqcRZGate(q, -3.1345913796553764, 12);
  sqcRYGate(q, -1.5715341359617998, 13);
  sqcRZGate(q, 0.7133764528328541, 13);
  sqcRYGate(q, 1.5691687689664886, 14);
  sqcRZGate(q, 0.002781256355783412, 14);
  sqcRYGate(q, 3.1217870290490994, 15);
  sqcRZGate(q, 1.108074000986516, 15);
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
  sqcRYGate(q, -3.137851806613844, 0);
  sqcRZGate(q, -2.7027111926185126, 0);
  sqcRYGate(q, 1.327661746507344, 1);
  sqcRZGate(q, -3.1320544231589933, 1);
  sqcRYGate(q, 1.4598910166483612, 2);
  sqcRZGate(q, -2.4196001790910175, 2);
  sqcRYGate(q, -1.5707441208628639, 3);
  sqcRZGate(q, 0.8256004600950454, 3);
  sqcRYGate(q, -1.5658946378230816, 4);
  sqcRZGate(q, 3.1413416801922263, 4);
  sqcRYGate(q, -2.023055816354823, 5);
  sqcRZGate(q, 3.1412808038002207, 5);
  sqcRYGate(q, -2.672504635548023e-05, 6);
  sqcRZGate(q, 2.5839273224077144, 6);
  sqcRYGate(q, -1.5751979267346345, 7);
  sqcRZGate(q, -3.1367482691905946, 7);
  sqcRYGate(q, 1.4644978557318806, 8);
  sqcRZGate(q, 1.0127487828345743, 8);
  sqcRYGate(q, -1.5703206663204403, 9);
  sqcRZGate(q, -1.1058750668115813, 9);
  sqcRYGate(q, 3.1415615140287647, 10);
  sqcRZGate(q, -0.29158911120816045, 10);
  sqcRYGate(q, -1.6238583212130486, 11);
  sqcRZGate(q, -0.04105096858515849, 11);
  sqcRYGate(q, -1.5840731217701773, 12);
  sqcRZGate(q, -3.1398578149129093, 12);
  sqcRYGate(q, -0.0011237894826958694, 13);
  sqcRZGate(q, 2.5125714364738903, 13);
  sqcRYGate(q, -1.5706992956044405, 14);
  sqcRZGate(q, 0.03765712080383214, 14);
  sqcRYGate(q, -3.075531818183227, 15);
  sqcRZGate(q, 1.7912709709615742, 15);
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
  sqcRYGate(q, -1.5491748397600444, 0);
  sqcRZGate(q, -1.5589376275976932, 0);
  sqcRYGate(q, 0.006095883389795276, 1);
  sqcRZGate(q, -3.0848305990351106, 1);
  sqcRYGate(q, -1.5667117928800849, 2);
  sqcRZGate(q, 2.6459103731189577, 2);
  sqcRYGate(q, -0.0004106721136577936, 3);
  sqcRZGate(q, 1.1850786462481269, 3);
  sqcRYGate(q, 3.0722371408839595, 4);
  sqcRZGate(q, -0.00031244472666891454, 4);
  sqcRYGate(q, -3.088924522685523, 5);
  sqcRZGate(q, -3.1405214678456215, 5);
  sqcRYGate(q, -3.14158731864271, 6);
  sqcRZGate(q, -3.047887099285192, 6);
  sqcRYGate(q, -0.2772038984880151, 7);
  sqcRZGate(q, 1.5697406702078622, 7);
  sqcRYGate(q, -0.0010744845333688264, 8);
  sqcRZGate(q, 0.5155385290076638, 8);
  sqcRYGate(q, -3.1415747175339424, 9);
  sqcRZGate(q, 0.4650179125371361, 9);
  sqcRYGate(q, 0.00011632149399432394, 10);
  sqcRZGate(q, -2.5277539828310562, 10);
  sqcRYGate(q, 0.000544682105665542, 11);
  sqcRZGate(q, -3.00666300962801, 11);
  sqcRYGate(q, 0.9572417570990287, 12);
  sqcRZGate(q, 3.140279818323735, 12);
  sqcRYGate(q, 1.5800673605162772, 13);
  sqcRZGate(q, -0.6801015808471832, 13);
  sqcRYGate(q, 3.122951599111005, 14);
  sqcRZGate(q, -3.0695417662467137, 14);
  sqcRYGate(q, -1.5810079614111243, 15);
  sqcRZGate(q, -3.0675304341726304, 15);
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
  sqcRYGate(q, 3.043227027456207, 0);
  sqcRZGate(q, -1.9690293948671556, 0);
  sqcRYGate(q, -2.647032354461514, 1);
  sqcRZGate(q, -2.4431219861051345, 1);
  sqcRYGate(q, 3.1269729775377337, 2);
  sqcRZGate(q, 2.719465631094648, 2);
  sqcRYGate(q, -3.137450091713031, 3);
  sqcRZGate(q, -1.6910741413749173, 3);
  sqcRYGate(q, 1.5707924588328093, 4);
  sqcRZGate(q, 1.5707072981289327, 4);
  sqcRYGate(q, 0.43880634445596134, 5);
  sqcRZGate(q, 1.986342197772359, 5);
  sqcRYGate(q, -2.1274533093236425e-05, 6);
  sqcRZGate(q, -1.298220439281761, 6);
  sqcRYGate(q, -1.5698633513000102, 7);
  sqcRZGate(q, -0.8650517903703213, 7);
  sqcRYGate(q, -2.0104928966794495, 8);
  sqcRZGate(q, 3.0397223422618085, 8);
  sqcRYGate(q, 1.5622290873453715, 9);
  sqcRZGate(q, 2.6291715278220993, 9);
  sqcRYGate(q, 3.141562884640242, 10);
  sqcRZGate(q, 1.0129367939722624, 10);
  sqcRYGate(q, 0.21355666581209762, 11);
  sqcRZGate(q, 2.7653658224315367, 11);
  sqcRYGate(q, -1.5242199102390543, 12);
  sqcRZGate(q, 1.5711274972454001, 12);
  sqcRYGate(q, -3.039448945391368, 13);
  sqcRZGate(q, 0.31336880592833477, 13);
  sqcRYGate(q, -0.004245507079851052, 14);
  sqcRZGate(q, -1.5871950612926085, 14);
  sqcRYGate(q, 3.057352643334511, 15);
  sqcRZGate(q, -1.3213018238071044, 15);
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
  sqcRYGate(q, 3.112248658493685, 0);
  sqcRZGate(q, 2.3773357432142292, 0);
  sqcRYGate(q, 0.33395079978123654, 1);
  sqcRZGate(q, 2.4012962015159687, 1);
  sqcRYGate(q, -0.004832134482629418, 2);
  sqcRZGate(q, 1.8017366759312132, 2);
  sqcRYGate(q, 3.14147368836696, 3);
  sqcRZGate(q, -1.4806451466704704, 3);
  sqcRYGate(q, -1.5708262154856374, 4);
  sqcRZGate(q, -2.152191200643334, 4);
  sqcRYGate(q, 3.1400684399076835, 5);
  sqcRZGate(q, -3.07242593701684, 5);
  sqcRYGate(q, 0.21967299292266562, 6);
  sqcRZGate(q, 2.8055336018691417, 6);
  sqcRYGate(q, 1.6187305297333339, 7);
  sqcRZGate(q, -3.1081730623004526, 7);
  sqcRYGate(q, 1.6394582042772452, 8);
  sqcRZGate(q, 0.17137184021801516, 8);
  sqcRYGate(q, 3.1413203627335133, 9);
  sqcRZGate(q, -1.5794411456010256, 9);
  sqcRYGate(q, -3.138395120252505, 10);
  sqcRZGate(q, 0.567396835277931, 10);
  sqcRYGate(q, -0.09693701660236759, 11);
  sqcRZGate(q, 0.17258760293849476, 11);
  sqcRYGate(q, -1.5694888113155843, 12);
  sqcRZGate(q, 0.9627528896726005, 12);
  sqcRYGate(q, -0.02307709876873475, 13);
  sqcRZGate(q, -0.9505505021635365, 13);
  sqcRYGate(q, -1.5704237950607907, 14);
  sqcRZGate(q, 1.5678924830254615, 14);
  sqcRYGate(q, 0.20385868204078453, 15);
  sqcRZGate(q, -0.7523941792746403, 15);
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
  sqcRYGate(q, -0.0002192127605501663, 0);
  sqcRZGate(q, 0.36739315191635935, 0);
  sqcRYGate(q, -0.4952422056211887, 1);
  sqcRZGate(q, 1.2396484168736466, 1);
  sqcRYGate(q, 1.5707198728471292, 2);
  sqcRZGate(q, -1.570790321387836, 2);
  sqcRYGate(q, 0.004385551150435596, 3);
  sqcRZGate(q, -0.6510135234738481, 3);
  sqcRYGate(q, -3.1415442914144034, 4);
  sqcRZGate(q, 1.0068017539308824, 4);
  sqcRYGate(q, -1.4355654927022954e-05, 5);
  sqcRZGate(q, 0.40219318283234984, 5);
  sqcRYGate(q, -4.162538091101453e-05, 6);
  sqcRZGate(q, 0.5721159560025978, 6);
  sqcRYGate(q, -0.028459743061532983, 7);
  sqcRZGate(q, -0.029151121262790642, 7);
  sqcRYGate(q, -1.5715062803467508, 8);
  sqcRZGate(q, -0.026245645400559958, 8);
  sqcRYGate(q, -0.00019653508491852652, 9);
  sqcRZGate(q, -0.47674804793790226, 9);
  sqcRYGate(q, 3.141592168307588, 10);
  sqcRZGate(q, -0.9282305058248059, 10);
  sqcRYGate(q, 2.9272108621157065, 11);
  sqcRZGate(q, -0.2279123370070962, 11);
  sqcRYGate(q, 0.6383336041105938, 12);
  sqcRZGate(q, -2.8299937101372112, 12);
  sqcRYGate(q, -3.140870624798167, 13);
  sqcRZGate(q, -0.06279663765711961, 13);
  sqcRYGate(q, -0.6764798213833991, 14);
  sqcRZGate(q, 1.5690142097989952, 14);
  sqcRYGate(q, 0.001453830833709124, 15);
  sqcRZGate(q, -2.55729579252932, 15);
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
  sqcRYGate(q, 1.5674489975501809, 0);
  sqcRZGate(q, -1.4756634567567835, 0);
  sqcRYGate(q, -2.938147250636443, 1);
  sqcRZGate(q, -1.9508960071617385, 1);
  sqcRYGate(q, 1.569920694813245, 2);
  sqcRZGate(q, 1.5711013074873768, 2);
  sqcRYGate(q, 3.06669229164599, 3);
  sqcRZGate(q, 1.569705617228165, 3);
  sqcRYGate(q, 1.563430028170121, 4);
  sqcRZGate(q, 2.9250410870626062, 4);
  sqcRYGate(q, 0.0012300903429256493, 5);
  sqcRZGate(q, -3.0187056306013265, 5);
  sqcRYGate(q, 8.049336379745142e-05, 6);
  sqcRZGate(q, 2.2864927560198187, 6);
  sqcRYGate(q, -1.5191074723369251, 7);
  sqcRZGate(q, 2.0930202435299137, 7);
  sqcRYGate(q, 0.06979765171422425, 8);
  sqcRZGate(q, -0.4656964430520887, 8);
  sqcRYGate(q, 3.141586571460872, 9);
  sqcRZGate(q, 1.5973537928362505, 9);
  sqcRYGate(q, -1.5707997554339297, 10);
  sqcRZGate(q, -2.911407725060862, 10);
  sqcRYGate(q, -0.11362295372245777, 11);
  sqcRZGate(q, 0.16564512426521608, 11);
  sqcRYGate(q, 1.5701391646614684, 12);
  sqcRZGate(q, 0.00037694714000594687, 12);
  sqcRYGate(q, 1.5735605307154898, 13);
  sqcRZGate(q, -0.01292359682836453, 13);
  sqcRYGate(q, -1.569630810668606, 14);
  sqcRZGate(q, -2.0665421119763208, 14);
  sqcRYGate(q, 1.7648879815825316, 15);
  sqcRZGate(q, 1.9832607327085436, 15);
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
  sqcRYGate(q, -3.140906169624621, 0);
  sqcRZGate(q, -2.456313815671662, 0);
  sqcRYGate(q, 1.5708307955371943, 1);
  sqcRZGate(q, 0.00037796996499450344, 1);
  sqcRYGate(q, 1.570767440671081, 2);
  sqcRZGate(q, -1.069042839159161, 2);
  sqcRYGate(q, 1.5643209241531784, 3);
  sqcRZGate(q, -5.588950823674992e-05, 3);
  sqcRYGate(q, 2.3084374523967854, 4);
  sqcRZGate(q, -1.2465772781955653, 4);
  sqcRYGate(q, -3.1414959305614794, 5);
  sqcRZGate(q, -2.2850970243037954, 5);
  sqcRYGate(q, -3.1415686838401533, 6);
  sqcRZGate(q, 0.20620656808403853, 6);
  sqcRYGate(q, 1.5263241307757718, 7);
  sqcRZGate(q, -2.1633383166293965, 7);
  sqcRYGate(q, 9.616408226931069e-05, 8);
  sqcRZGate(q, 2.0630843787101187, 8);
  sqcRYGate(q, 1.5703126509498946, 9);
  sqcRZGate(q, 0.361554029769181, 9);
  sqcRYGate(q, -6.438862590307792e-05, 10);
  sqcRZGate(q, 1.3406410473996455, 10);
  sqcRYGate(q, -1.570796250241367, 11);
  sqcRZGate(q, 0.5152600497553593, 11);
  sqcRYGate(q, 1.5707898812779548, 12);
  sqcRZGate(q, -1.5708086862045638, 12);
  sqcRYGate(q, -1.5358472757668966, 13);
  sqcRZGate(q, -1.57225536957689, 13);
  sqcRYGate(q, 9.541793795496737e-05, 14);
  sqcRZGate(q, 2.0677934414798185, 14);
  sqcRYGate(q, -0.0036152160962117795, 15);
  sqcRZGate(q, -2.00759850489366, 15);
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
  sqcRYGate(q, -3.14147037190479, 0);
  sqcRZGate(q, -1.3323153476408152, 0);
  sqcRYGate(q, -1.5941912919714643, 1);
  sqcRZGate(q, -2.787781501493911, 1);
  sqcRYGate(q, -3.1410519778946746, 2);
  sqcRZGate(q, 0.8530854911433928, 2);
  sqcRYGate(q, 1.5707983304936741, 3);
  sqcRZGate(q, 2.0585461011153634, 3);
  sqcRYGate(q, 5.340300072376181e-06, 4);
  sqcRZGate(q, 0.6428262591963821, 4);
  sqcRYGate(q, 0.00018784349863221195, 5);
  sqcRZGate(q, 0.5371237170987336, 5);
  sqcRYGate(q, 3.488185609601402e-05, 6);
  sqcRZGate(q, 1.4922946547583988, 6);
  sqcRYGate(q, 0.00010678911554542696, 7);
  sqcRZGate(q, 2.6986544027504182, 7);
  sqcRYGate(q, 1.5708006272331634, 8);
  sqcRZGate(q, -0.7856878501792002, 8);
  sqcRYGate(q, 3.141585167266457, 9);
  sqcRZGate(q, 2.284071332492587, 9);
  sqcRYGate(q, 1.570822543901383, 10);
  sqcRZGate(q, 2.7825329668684105, 10);
  sqcRYGate(q, 3.1415715832202955, 11);
  sqcRZGate(q, -2.995172910192677, 11);
  sqcRYGate(q, -1.5708110298418825, 12);
  sqcRZGate(q, 2.3677737951830635, 12);
  sqcRYGate(q, 1.5708792833631675, 13);
  sqcRZGate(q, 0.8036453881886046, 13);
  sqcRYGate(q, 1.5707115286907927, 14);
  sqcRZGate(q, -2.7827781368495814, 14);
  sqcRYGate(q, -3.1102874459290675, 15);
  sqcRZGate(q, 2.320953193221725, 15);
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
  sqcRYGate(q, -1.2177281347466122, 0);
  sqcRZGate(q, 2.3446386405995367, 0);
  sqcRYGate(q, -1.9195476927747437, 1);
  sqcRZGate(q, -0.7902340470724107, 1);
  sqcRYGate(q, -1.9247803979688367, 2);
  sqcRZGate(q, -0.7967223341425976, 2);
  sqcRYGate(q, -2.764609031650654, 3);
  sqcRZGate(q, 1.1721470493089248, 3);
  sqcRYGate(q, 1.1969451333223715, 4);
  sqcRZGate(q, 1.1039095399151764, 4);
  sqcRYGate(q, -1.223119032869595, 5);
  sqcRZGate(q, 2.3533056404889012, 5);
  sqcRYGate(q, -0.4931116037980587, 6);
  sqcRZGate(q, -1.610803907673472, 6);
  sqcRYGate(q, -2.8160387532335553, 7);
  sqcRZGate(q, 1.2504214277839092, 7);
  sqcRYGate(q, -0.49275622197186575, 8);
  sqcRZGate(q, -1.6112483489410148, 8);
  sqcRYGate(q, -1.922157774211147, 9);
  sqcRZGate(q, -0.7973919864136999, 9);
  sqcRYGate(q, -1.915846829700202, 10);
  sqcRZGate(q, -2.4485615672686247, 10);
  sqcRYGate(q, -1.2367624083798312, 11);
  sqcRZGate(q, 2.3919599855962907, 11);
  sqcRYGate(q, -0.4926496014387993, 12);
  sqcRZGate(q, -1.611502114570345, 12);
  sqcRYGate(q, 0.49259715503452467, 13);
  sqcRZGate(q, 1.5247340886815666, 13);
  sqcRYGate(q, -1.2256072403673208, 14);
  sqcRZGate(q, 0.6933501950182318, 14);
  sqcRYGate(q, 0.49260458177823185, 15);
  sqcRZGate(q, 1.5250717248856918, 15);

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
