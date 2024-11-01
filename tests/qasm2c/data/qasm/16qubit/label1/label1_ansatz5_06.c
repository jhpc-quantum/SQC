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

  sqcRYGate(q, 3.106445236215828, 0);
  sqcRYGate(q, 0.41827374864837985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.55926752306903, 0);
  sqcRYGate(q, -2.6735174355697064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.576028974479179, 2);
  sqcRYGate(q, 1.7380913625124894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5577987304457044, 2);
  sqcRYGate(q, -2.256511386831897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4383004212487096, 4);
  sqcRYGate(q, -2.5037675426798933, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2288184322649964, 4);
  sqcRYGate(q, -2.075535557652751, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3812250988884438, 6);
  sqcRYGate(q, 2.514919899627912, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.47882835656401773, 6);
  sqcRYGate(q, 2.412252698887572, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6147778795909995, 8);
  sqcRYGate(q, 2.3016155451578926, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7103975207467617, 8);
  sqcRYGate(q, 0.5417905335338071, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3812864452399558, 10);
  sqcRYGate(q, 1.874094644092194, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.9201303669734315, 10);
  sqcRYGate(q, 3.0684919768941556, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2990112476980666, 12);
  sqcRYGate(q, -1.3542463686446622, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.6539826433607684, 12);
  sqcRYGate(q, -3.105085696357676, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.039818298465946485, 14);
  sqcRYGate(q, -0.845979835965125, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.7597878065964845, 14);
  sqcRYGate(q, -3.096043132583246, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.289438796928378, 1);
  sqcRYGate(q, 1.5025930165957, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3898254703300994, 1);
  sqcRYGate(q, -3.1242633762358483, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8574047371605289, 3);
  sqcRYGate(q, 0.07496464189615944, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8047223705139803, 3);
  sqcRYGate(q, 0.2578432401575671, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.16846764587289456, 5);
  sqcRYGate(q, -1.130151626741529, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1511997941438104, 5);
  sqcRYGate(q, -1.2498389821237028, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.093904933624506, 7);
  sqcRYGate(q, -1.2358630894411127, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.476945207711464, 7);
  sqcRYGate(q, -2.9865069486825266, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.390115631853211, 9);
  sqcRYGate(q, 2.5877168180899663, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.1020555457551318, 9);
  sqcRYGate(q, 1.5828003621785172, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.824418722962931, 11);
  sqcRYGate(q, 1.7233062818740892, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.1002017932470727, 11);
  sqcRYGate(q, 0.6238072405244551, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.940899186649931, 13);
  sqcRYGate(q, 0.6008952217566657, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.0384864534652825, 13);
  sqcRYGate(q, -2.1165047046613092, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.12074229525734116, 0);
  sqcRYGate(q, -1.6713941274579462, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5704969427800755, 0);
  sqcRYGate(q, 1.8474635690873198, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4104608622507335, 2);
  sqcRYGate(q, -0.49845244536017097, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0065251121146455, 2);
  sqcRYGate(q, -0.8884944894415998, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8570707739711423, 4);
  sqcRYGate(q, 1.120756107946492, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.01777615551780265, 4);
  sqcRYGate(q, 0.2988884720892344, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6706354494548084, 6);
  sqcRYGate(q, 0.24765273654753836, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.022924808229609, 6);
  sqcRYGate(q, -2.8432956879029874, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.09116648363305374, 8);
  sqcRYGate(q, 2.6514912901880314, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9101909225631877, 8);
  sqcRYGate(q, 0.7180107670164584, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.353217655202875, 10);
  sqcRYGate(q, 1.436969002858941, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6869513309851765, 10);
  sqcRYGate(q, 0.65895236947153, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3748940041800075, 12);
  sqcRYGate(q, 1.2866886075326498, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.1571058664316007, 12);
  sqcRYGate(q, 1.7682301511489174, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.720526620496802, 14);
  sqcRYGate(q, -1.4953877588352373, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.7252767836416101, 14);
  sqcRYGate(q, 0.9387407131945762, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.3824608143932675, 1);
  sqcRYGate(q, -0.359504221409777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5526042633155615, 1);
  sqcRYGate(q, -0.7020955043888029, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7276967107750112, 3);
  sqcRYGate(q, 2.9922113858106107, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.007978831603933464, 3);
  sqcRYGate(q, 0.6318305635151046, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.16038313462046894, 5);
  sqcRYGate(q, 1.9493608689862434, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.09454743570659385, 5);
  sqcRYGate(q, 2.5302868731425785, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8534603963758765, 7);
  sqcRYGate(q, 1.2736779846207709, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.0010788003114444, 7);
  sqcRYGate(q, 1.4415845340958917, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5170800572643905, 9);
  sqcRYGate(q, -1.2453416005911393, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.773510283237109, 9);
  sqcRYGate(q, -1.0556312477194398, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.6590431641235087, 11);
  sqcRYGate(q, 2.1234488098861415, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.28511216720623184, 11);
  sqcRYGate(q, -3.0972299053654035, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.4417886754730125, 13);
  sqcRYGate(q, 3.0845177382621722, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.718453700224711, 13);
  sqcRYGate(q, -3.065987443455867, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.6968991731550078, 0);
  sqcRYGate(q, -0.3176990064986263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.009611790291516265, 0);
  sqcRYGate(q, 0.6914962269672724, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.045593825004393, 2);
  sqcRYGate(q, -1.7926797536440269, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.02375812772642316, 2);
  sqcRYGate(q, -3.1308794150881183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6610505549020091, 4);
  sqcRYGate(q, -1.9153835947433935, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4853834675541886, 4);
  sqcRYGate(q, -2.674721630693518, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.08723500935365616, 6);
  sqcRYGate(q, 1.6824241398432074, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0809584634414526, 6);
  sqcRYGate(q, -2.363297277350435, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2260847988183015, 8);
  sqcRYGate(q, 1.749086702757041, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.6115879478734785, 8);
  sqcRYGate(q, 1.2233358295824683, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.618412511688909, 10);
  sqcRYGate(q, 2.6241992028048178, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.3068129365784129, 10);
  sqcRYGate(q, -2.324949744059609, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.816856554489289, 12);
  sqcRYGate(q, -1.6166505641491078, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.23921553049245758, 12);
  sqcRYGate(q, 2.2768084243413966, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.6769643985570698, 14);
  sqcRYGate(q, -1.0817963733068876, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.5022095193196199, 14);
  sqcRYGate(q, 1.891875617472068, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.2904449911220945, 1);
  sqcRYGate(q, 3.136852966316175, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.267968766734012, 1);
  sqcRYGate(q, 0.6783307382384667, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5546614061752402, 3);
  sqcRYGate(q, -0.8002430741345234, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0318012715918146, 3);
  sqcRYGate(q, -0.6140652468944983, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.743367357946319, 5);
  sqcRYGate(q, -0.7800403346770394, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5863610645883439, 5);
  sqcRYGate(q, -0.14695856902043186, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2419967893647559, 7);
  sqcRYGate(q, -1.399347739434082, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.9394055171486295, 7);
  sqcRYGate(q, -1.1789693494628417, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9375411013877741, 9);
  sqcRYGate(q, -2.0095509189176752, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9585049300075471, 9);
  sqcRYGate(q, 2.194055149237272, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2761793011538989, 11);
  sqcRYGate(q, 2.1956120990384296, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.747174969466235, 11);
  sqcRYGate(q, 0.0164188435818593, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.562580264407429, 13);
  sqcRYGate(q, -0.7100891413479884, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.19903800688698595, 13);
  sqcRYGate(q, -1.861915322722966, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.971288966450266, 0);
  sqcRYGate(q, -0.15142709357460568, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9147550240589801, 0);
  sqcRYGate(q, 3.090670509632244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6563929485166464, 2);
  sqcRYGate(q, 2.0995339692851616, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1069897033480056, 2);
  sqcRYGate(q, -3.0663464144108605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4515578268484725, 4);
  sqcRYGate(q, -1.2358132668543145, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8225307329105498, 4);
  sqcRYGate(q, 1.4638562202869938, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8990516678291254, 6);
  sqcRYGate(q, -0.4711450016498686, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1185310030127305, 6);
  sqcRYGate(q, -3.1355788993960783, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7233503566476471, 8);
  sqcRYGate(q, 2.1553498778487246, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.273236303762666, 8);
  sqcRYGate(q, -1.2135246955480508, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8992467817185164, 10);
  sqcRYGate(q, -2.155826168234758, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3107715990619204, 10);
  sqcRYGate(q, 0.8875669222364618, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.18949864577314646, 12);
  sqcRYGate(q, -1.908553739207483, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.7093776588595148, 12);
  sqcRYGate(q, 2.609824901272667, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.9660869294357826, 14);
  sqcRYGate(q, -1.9667197114080865, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.1280734239150467, 14);
  sqcRYGate(q, 0.2344753292907849, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.764077053495586, 1);
  sqcRYGate(q, -1.9229971266525858, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.401912190624305, 1);
  sqcRYGate(q, 1.2434714464072592, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1081188795345165, 3);
  sqcRYGate(q, 0.9737916820847089, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6409130245348402, 3);
  sqcRYGate(q, 2.0248705606728263, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9490812043193906, 5);
  sqcRYGate(q, 0.6789133417765916, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6283938821830457, 5);
  sqcRYGate(q, -1.8596154722996536, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.46337109605518556, 7);
  sqcRYGate(q, 1.4485787389939884, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.055141148091319, 7);
  sqcRYGate(q, -0.9059747676004448, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.584744855690925, 9);
  sqcRYGate(q, 2.078146043124006, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.987313039930774, 9);
  sqcRYGate(q, 2.807219470261701, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.4618854239474177, 11);
  sqcRYGate(q, 2.0505225127375737, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.2420698980429927, 11);
  sqcRYGate(q, -2.351363981003747, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.864639248336352, 13);
  sqcRYGate(q, -0.21492618797353913, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.9122052429468344, 13);
  sqcRYGate(q, 0.12423376080070803, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.985595760716722, 0);
  sqcRYGate(q, 3.1228691663975687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6906521540479, 0);
  sqcRYGate(q, 0.5106372890074979, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5998479838877984, 2);
  sqcRYGate(q, -2.7226401788397236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.573674151129825, 2);
  sqcRYGate(q, -0.06015326743294036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.589139587303154, 4);
  sqcRYGate(q, 1.5903386070507368, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.643308930331688, 4);
  sqcRYGate(q, 0.05883899765022882, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0362427816860853, 6);
  sqcRYGate(q, -0.4161247107544366, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0655899830415754, 6);
  sqcRYGate(q, 1.4923952787863488, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.327054176958842, 8);
  sqcRYGate(q, -1.2559427404992811, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7168780353756219, 8);
  sqcRYGate(q, -2.0781732990253925, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0351051101082582, 10);
  sqcRYGate(q, 1.4775790120033168, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4156206138558491, 10);
  sqcRYGate(q, -0.19357334675971494, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.1985003042753437, 12);
  sqcRYGate(q, 2.6224335936641356, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.4130151006040794, 12);
  sqcRYGate(q, 1.4407926694786912, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.8348668282249814, 14);
  sqcRYGate(q, -0.915947682923745, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5269851855060723, 14);
  sqcRYGate(q, -0.1382057601380397, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5014932818358462, 1);
  sqcRYGate(q, -2.3784379329358862, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1133567222242533, 1);
  sqcRYGate(q, 2.780944878194601, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6846317834341038, 3);
  sqcRYGate(q, 2.97828193845204, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.176625628337635, 3);
  sqcRYGate(q, -3.0306362585216897, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5847791936046312, 5);
  sqcRYGate(q, 1.0740421724677673, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0850375431137538, 5);
  sqcRYGate(q, 1.498120125614145, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4474153421523903, 7);
  sqcRYGate(q, -2.270935540812187, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.6172759151810343, 7);
  sqcRYGate(q, 0.03475986449831581, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.0134303081639393, 9);
  sqcRYGate(q, -0.16533560322127894, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.914820722643962, 9);
  sqcRYGate(q, 1.0127717743147695, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.8647791935304037, 11);
  sqcRYGate(q, -0.3053859401320879, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.9361645468687609, 11);
  sqcRYGate(q, -0.866603515453904, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.6917869307947071, 13);
  sqcRYGate(q, 0.620126336890821, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.249808097607555, 13);
  sqcRYGate(q, 0.16034647755982098, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.131426909221463, 0);
  sqcRYGate(q, 0.12572252300805453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8844652350035243, 0);
  sqcRYGate(q, 2.1327425812808736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8387491759833035, 2);
  sqcRYGate(q, 2.4938995328899844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5009584717756216, 2);
  sqcRYGate(q, 0.22148293132144173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4607493881994218, 4);
  sqcRYGate(q, 2.1812342884091125, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.03457690690822279, 4);
  sqcRYGate(q, -1.4832999126711068, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9669421843752177, 6);
  sqcRYGate(q, -0.06833231574362564, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0305255691166186, 6);
  sqcRYGate(q, 2.7753434403054364, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.146045665293725, 8);
  sqcRYGate(q, 3.02553705707924, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.104679431839685, 8);
  sqcRYGate(q, 3.0711127191689664, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.772360710910501, 10);
  sqcRYGate(q, 2.013966648585426, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2469092432729616, 10);
  sqcRYGate(q, 0.3606178673304773, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5484696553203614, 12);
  sqcRYGate(q, 1.277184921207044, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.4700058053919074, 12);
  sqcRYGate(q, 1.677576980735422, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.3125159043322032, 14);
  sqcRYGate(q, -0.9808056073324174, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.542288609855255, 14);
  sqcRYGate(q, 3.135803416315604, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.67064711923411, 1);
  sqcRYGate(q, -2.2450253840726537, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.59801632128648, 1);
  sqcRYGate(q, -0.40812809267241956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.706140641246994, 3);
  sqcRYGate(q, -3.117069258629532, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6419089286881496, 3);
  sqcRYGate(q, -1.5879846709018253, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9720462660796976, 5);
  sqcRYGate(q, -0.7430779936444307, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8036132794090536, 5);
  sqcRYGate(q, 0.012004717546370766, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.45215197993325074, 7);
  sqcRYGate(q, 1.6672797924030753, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.13005324303361832, 7);
  sqcRYGate(q, 3.1151604949775753, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.298462203389948, 9);
  sqcRYGate(q, 2.639293899083233, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.03787849004217961, 9);
  sqcRYGate(q, -2.4136274007625054, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.982981501769718, 11);
  sqcRYGate(q, -1.4297060273528979, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.17740709681204, 11);
  sqcRYGate(q, 1.747177423254196, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.16217951101625872, 13);
  sqcRYGate(q, 2.0347752645624233, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.107414096373538, 13);
  sqcRYGate(q, -0.990117002035042, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.0192532724518757, 0);
  sqcRYGate(q, -1.0328405589358658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.137376456149319, 0);
  sqcRYGate(q, 2.558335246955576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4256876104358054, 2);
  sqcRYGate(q, 0.047891219297137196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9617507172699442, 2);
  sqcRYGate(q, -1.6134554247820043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7602930050353977, 4);
  sqcRYGate(q, 2.3258550823257127, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0449863939338755, 4);
  sqcRYGate(q, -1.462735020131949, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5588676111092, 6);
  sqcRYGate(q, 0.4313079807741591, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5558501800801245, 6);
  sqcRYGate(q, -1.7884810229717427, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.072698765531226, 8);
  sqcRYGate(q, 1.9788355327483644, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.04611869769155269, 8);
  sqcRYGate(q, 0.21077947986393386, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3943966253888562, 10);
  sqcRYGate(q, 1.1140217077985666, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.9155271995940997, 10);
  sqcRYGate(q, -2.8189622594679813, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2126512647673575, 12);
  sqcRYGate(q, 2.6783687112988637, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1248276294393813, 12);
  sqcRYGate(q, -0.19032761897795503, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.2766439677280461, 14);
  sqcRYGate(q, -0.7176191824646782, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.6812653767757437, 14);
  sqcRYGate(q, -0.2967334831583787, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.121916076707623, 1);
  sqcRYGate(q, -1.6709132735018624, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3114351292307806, 1);
  sqcRYGate(q, 1.5605558170259988, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.489671637749994, 3);
  sqcRYGate(q, 0.29353079691148215, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.031153263782237, 3);
  sqcRYGate(q, 0.21924165507149776, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8631256417791446, 5);
  sqcRYGate(q, -1.621402648835188, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.772980471931658, 5);
  sqcRYGate(q, -2.594925229419212, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7749215918467653, 7);
  sqcRYGate(q, 1.6773623896386072, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.03337582928228322, 7);
  sqcRYGate(q, -3.0066273350510757, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.81013720229199, 9);
  sqcRYGate(q, 0.8135785672473003, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.683997530434205, 9);
  sqcRYGate(q, -0.4981776289435949, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.029209351599750296, 11);
  sqcRYGate(q, 1.457508213924731, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.1832452102435, 11);
  sqcRYGate(q, -0.19548879844406208, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.038163182434121, 13);
  sqcRYGate(q, -2.915592771648162, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.0701618077070805, 13);
  sqcRYGate(q, -0.18330835734769568, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.1742923356700725, 0);
  sqcRYGate(q, 0.2655657161706841, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1362044771327064, 0);
  sqcRYGate(q, -1.4895459748071032, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9962106242385746, 2);
  sqcRYGate(q, -3.0929159375875956, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.514044822210409, 2);
  sqcRYGate(q, 1.6092308704102178, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0063448843442107, 4);
  sqcRYGate(q, 1.4910246595680625, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.06758307853511222, 4);
  sqcRYGate(q, 3.0812054159875237, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.734441578072727, 6);
  sqcRYGate(q, -1.5727188803937793, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1848699825791753, 6);
  sqcRYGate(q, -0.08564162533304831, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.288281949505647, 8);
  sqcRYGate(q, 0.9855594469425679, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0890647599411643, 8);
  sqcRYGate(q, -3.02602380668777, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4409640238075867, 10);
  sqcRYGate(q, 0.38315082615582163, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.001347690147111, 10);
  sqcRYGate(q, 0.2141861177178392, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7102614216275107, 12);
  sqcRYGate(q, -2.6398841855830186, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.3890709389319413, 12);
  sqcRYGate(q, -0.3248830454144879, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.63172934368513, 14);
  sqcRYGate(q, -1.9893650554597588, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.43012855616706297, 14);
  sqcRYGate(q, -3.011631676500644, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.192729405587233, 1);
  sqcRYGate(q, 0.2837038617042381, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7752313517973244, 1);
  sqcRYGate(q, 0.15472927412149243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.39982394245324393, 3);
  sqcRYGate(q, -0.6005188124104448, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.14324198287237877, 3);
  sqcRYGate(q, 0.020057789440889984, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3174104436757177, 5);
  sqcRYGate(q, -0.48351506264340216, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5104258740641594, 5);
  sqcRYGate(q, -2.20880193172638, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4229908502812618, 7);
  sqcRYGate(q, 1.3668805826835093, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.16516564915361906, 7);
  sqcRYGate(q, 0.3926666828683912, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.34765473707519495, 9);
  sqcRYGate(q, 2.0179775875092165, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.493396574549623, 9);
  sqcRYGate(q, 1.007412642552402, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.110601981569565, 11);
  sqcRYGate(q, 0.1389846585122072, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.132822398216007, 11);
  sqcRYGate(q, -0.7228763439499337, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.26316822585577, 13);
  sqcRYGate(q, 2.4295483229052817, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.3946653591803324, 13);
  sqcRYGate(q, 2.0630476211216617, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5265222274326729, 0);
  sqcRYGate(q, 2.7265211008103254, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6669550173724181, 0);
  sqcRYGate(q, -0.9848736005834127, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3089182868155386, 2);
  sqcRYGate(q, 1.482204441146389, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5445746569842962, 2);
  sqcRYGate(q, -1.4637424065971478, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.900113610466611, 4);
  sqcRYGate(q, 2.5590699293414696, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.121404057182509, 4);
  sqcRYGate(q, 3.0152820347665434, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8126342306500209, 6);
  sqcRYGate(q, -1.8155468055737864, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5308581763768454, 6);
  sqcRYGate(q, 0.05518973424595508, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.721140980572263, 8);
  sqcRYGate(q, 1.2613190878400786, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.09884149590738213, 8);
  sqcRYGate(q, 3.017723114861267, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.7639415459297174, 10);
  sqcRYGate(q, 1.8449818513038423, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.29418127924148413, 10);
  sqcRYGate(q, -0.2856164055304227, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.0097426826460176, 12);
  sqcRYGate(q, -1.2849958621906539, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.6374377323133825, 12);
  sqcRYGate(q, -0.19249189634057726, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.737130438846048, 14);
  sqcRYGate(q, 2.208154025387992, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.0858631971412924, 14);
  sqcRYGate(q, -2.4238881652999784, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5513552741522831, 1);
  sqcRYGate(q, -0.022599844088092277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5487138624675243, 1);
  sqcRYGate(q, 2.3747564897902698, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.043572899025114076, 3);
  sqcRYGate(q, -1.7375302099963363, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1013686179332467, 3);
  sqcRYGate(q, -2.830051193320541, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7816954674729861, 5);
  sqcRYGate(q, -0.6238182828254273, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.06667480872805, 5);
  sqcRYGate(q, 0.3093064374533032, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6901746514767808, 7);
  sqcRYGate(q, -2.0985494766674, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.0220735057273553, 7);
  sqcRYGate(q, 2.785360988575146, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9810941306725693, 9);
  sqcRYGate(q, -0.64450787894679, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.23069930466969818, 9);
  sqcRYGate(q, -0.12189788882806596, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.675137098038978, 11);
  sqcRYGate(q, 0.16403275246023252, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.1662630372125964, 11);
  sqcRYGate(q, -0.8774625643530527, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6974362102446312, 13);
  sqcRYGate(q, -1.651218366418413, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.6188842889970836, 13);
  sqcRYGate(q, 0.5128952533249916, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.490690281429014, 0);
  sqcRYGate(q, 1.5771400595890785, 1);
  sqcRYGate(q, 0.006336528023414863, 2);
  sqcRYGate(q, -1.4551638574262027, 3);
  sqcRYGate(q, 3.1367405186665596, 4);
  sqcRYGate(q, -2.4328099657665074, 5);
  sqcRYGate(q, 2.0429894334142507, 6);
  sqcRYGate(q, -2.1336371348334056, 7);
  sqcRYGate(q, 0.006814924586064919, 8);
  sqcRYGate(q, 1.435539557489962, 9);
  sqcRYGate(q, -0.4801579977628173, 10);
  sqcRYGate(q, -3.1218134641083473, 11);
  sqcRYGate(q, -2.9698307397198342, 12);
  sqcRYGate(q, 1.6553853866894306, 13);
  sqcRYGate(q, 3.0337175861631547, 14);
  sqcRYGate(q, 1.0922737665312887, 15);

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
