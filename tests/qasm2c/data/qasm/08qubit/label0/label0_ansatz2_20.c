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

  sqcRYGate(q, 0.6717720529740336, 0);
  sqcRZGate(q, -0.516658279990768, 0);
  sqcRYGate(q, 0.395777193606755, 1);
  sqcRZGate(q, -0.05140099448184094, 1);
  sqcRYGate(q, 2.022694169573801, 2);
  sqcRZGate(q, 2.5090919795894524, 2);
  sqcRYGate(q, -2.6868918825969104, 3);
  sqcRZGate(q, -1.159870103771544, 3);
  sqcRYGate(q, -2.0128582055244424, 4);
  sqcRZGate(q, 2.692373674415279, 4);
  sqcRYGate(q, 0.16506423202583687, 5);
  sqcRZGate(q, 0.015027779236764335, 5);
  sqcRYGate(q, 0.8153964357811132, 6);
  sqcRZGate(q, -2.4612857927266965, 6);
  sqcRYGate(q, -2.9616816479824455, 7);
  sqcRZGate(q, 2.0431455302810555, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.8618798639882463, 0);
  sqcRZGate(q, 0.5537431907947677, 0);
  sqcRYGate(q, -0.31880722163856107, 1);
  sqcRZGate(q, 1.2479524268473356, 1);
  sqcRYGate(q, 2.7508560902450956, 2);
  sqcRZGate(q, -2.273411548469535, 2);
  sqcRYGate(q, -1.2863003455864277, 3);
  sqcRZGate(q, -1.3538759372914786, 3);
  sqcRYGate(q, -2.5162889768426324, 4);
  sqcRZGate(q, -0.2601448791240557, 4);
  sqcRYGate(q, 1.8592443396257359, 5);
  sqcRZGate(q, 1.1687184624501592, 5);
  sqcRYGate(q, -1.303671748923894, 6);
  sqcRZGate(q, -0.945733461854732, 6);
  sqcRYGate(q, 1.1553635366438562, 7);
  sqcRZGate(q, 1.8475286645787117, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.355558189584463, 0);
  sqcRZGate(q, 2.294237726051051, 0);
  sqcRYGate(q, -2.8207623802853115, 1);
  sqcRZGate(q, -0.22249622990893503, 1);
  sqcRYGate(q, -2.67521489663037, 2);
  sqcRZGate(q, 0.1654866754403619, 2);
  sqcRYGate(q, 2.320268039210857, 3);
  sqcRZGate(q, -1.6468373116419992, 3);
  sqcRYGate(q, -1.861645293968831, 4);
  sqcRZGate(q, -1.1778871920947236, 4);
  sqcRYGate(q, 0.10801650249823869, 5);
  sqcRZGate(q, -0.5429440558978398, 5);
  sqcRYGate(q, 1.1118126515498645, 6);
  sqcRZGate(q, 2.929771439072526, 6);
  sqcRYGate(q, 0.24284132677686276, 7);
  sqcRZGate(q, -1.2088257791685035, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.6467600830578655, 0);
  sqcRZGate(q, 1.1449140750766844, 0);
  sqcRYGate(q, 2.509885095350152, 1);
  sqcRZGate(q, -3.0672125031423025, 1);
  sqcRYGate(q, 0.3044039078619676, 2);
  sqcRZGate(q, -0.16162705783633324, 2);
  sqcRYGate(q, 2.379077381165531, 3);
  sqcRZGate(q, -0.33142478702054207, 3);
  sqcRYGate(q, 0.3844797758761737, 4);
  sqcRZGate(q, -0.46723470147970053, 4);
  sqcRYGate(q, 0.39368703933162136, 5);
  sqcRZGate(q, -3.078870788452214, 5);
  sqcRYGate(q, 0.34921549851794825, 6);
  sqcRZGate(q, 1.0695316815642917, 6);
  sqcRYGate(q, 0.4934335115443027, 7);
  sqcRZGate(q, -1.85412426922408, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.282226163611188, 0);
  sqcRZGate(q, -2.73911487692335, 0);
  sqcRYGate(q, -1.619387134612168, 1);
  sqcRZGate(q, 2.6378891842386, 1);
  sqcRYGate(q, 1.640031635299481, 2);
  sqcRZGate(q, -3.0085188313694036, 2);
  sqcRYGate(q, -2.4938612187629348, 3);
  sqcRZGate(q, -1.6928249697509345, 3);
  sqcRYGate(q, -2.5442341230777834, 4);
  sqcRZGate(q, 2.74738520738039, 4);
  sqcRYGate(q, 2.9219823059217482, 5);
  sqcRZGate(q, 0.9208470006164865, 5);
  sqcRYGate(q, 0.9866335875320652, 6);
  sqcRZGate(q, 2.715940021256867, 6);
  sqcRYGate(q, -0.48392626040636877, 7);
  sqcRZGate(q, -1.8224418631839672, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.8998707838529718, 0);
  sqcRZGate(q, 1.1711379811750193, 0);
  sqcRYGate(q, 0.5373862080492353, 1);
  sqcRZGate(q, 0.7665284297100161, 1);
  sqcRYGate(q, -1.8648093284409315, 2);
  sqcRZGate(q, 0.14516232590937772, 2);
  sqcRYGate(q, 2.3190383579492786, 3);
  sqcRZGate(q, -1.9461018904976415, 3);
  sqcRYGate(q, -0.22126216405013843, 4);
  sqcRZGate(q, -1.278221964005579, 4);
  sqcRYGate(q, -0.20108255321475133, 5);
  sqcRZGate(q, -1.8981635648807031, 5);
  sqcRYGate(q, -1.500864047618166, 6);
  sqcRZGate(q, -0.9760212017588028, 6);
  sqcRYGate(q, -1.6847865951982524, 7);
  sqcRZGate(q, -0.04002272219412759, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.1757026836565512, 0);
  sqcRZGate(q, -0.7974914866203227, 0);
  sqcRYGate(q, -2.1531053247042564, 1);
  sqcRZGate(q, -0.9849265683299955, 1);
  sqcRYGate(q, -1.0413000150178364, 2);
  sqcRZGate(q, 2.0942828505417097, 2);
  sqcRYGate(q, -0.45205996820751526, 3);
  sqcRZGate(q, 2.4445477260704465, 3);
  sqcRYGate(q, -2.267899528585059, 4);
  sqcRZGate(q, 2.116243222407012, 4);
  sqcRYGate(q, 0.3345522023436125, 5);
  sqcRZGate(q, 1.4845755212517628, 5);
  sqcRYGate(q, -2.3071204131019107, 6);
  sqcRZGate(q, 2.0520802626451538, 6);
  sqcRYGate(q, -0.3754131943991775, 7);
  sqcRZGate(q, 2.6020056373876583, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.265226301003173, 0);
  sqcRZGate(q, 0.4822919512088131, 0);
  sqcRYGate(q, -1.6166657791330494, 1);
  sqcRZGate(q, -1.3591568611975207, 1);
  sqcRYGate(q, 1.3773256809643764, 2);
  sqcRZGate(q, -1.936264477085231, 2);
  sqcRYGate(q, -1.342800523263426, 3);
  sqcRZGate(q, 0.20556909174438143, 3);
  sqcRYGate(q, 0.6394878314073801, 4);
  sqcRZGate(q, -1.9148899630416598, 4);
  sqcRYGate(q, -1.052625728927354, 5);
  sqcRZGate(q, 1.6811903962628245, 5);
  sqcRYGate(q, 1.1247718665594615, 6);
  sqcRZGate(q, 3.0230615331729123, 6);
  sqcRYGate(q, 1.5942447330025402, 7);
  sqcRZGate(q, 2.05295535299614, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.3868704962809004, 0);
  sqcRZGate(q, 0.9848475142491684, 0);
  sqcRYGate(q, 0.7010238377022311, 1);
  sqcRZGate(q, -2.0523565029671262, 1);
  sqcRYGate(q, 1.1938205937681063, 2);
  sqcRZGate(q, 1.0223614610796548, 2);
  sqcRYGate(q, 0.9624460728871099, 3);
  sqcRZGate(q, 1.6115936090217273, 3);
  sqcRYGate(q, -2.7478448570070104, 4);
  sqcRZGate(q, -2.5433166784150734, 4);
  sqcRYGate(q, 2.1388350142068453, 5);
  sqcRZGate(q, -0.9043513092833075, 5);
  sqcRYGate(q, -2.475445614774801, 6);
  sqcRZGate(q, 1.145003526986044, 6);
  sqcRYGate(q, 2.182197222206846, 7);
  sqcRZGate(q, 2.9392716056905104, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5675326583611555, 0);
  sqcRZGate(q, 2.4962150518118156, 0);
  sqcRYGate(q, 1.42239024153553, 1);
  sqcRZGate(q, -2.681616027556124, 1);
  sqcRYGate(q, 0.7531021116665366, 2);
  sqcRZGate(q, -1.2336320316496243, 2);
  sqcRYGate(q, -1.583615018797867, 3);
  sqcRZGate(q, -1.86408956184262, 3);
  sqcRYGate(q, 0.8983076516566655, 4);
  sqcRZGate(q, 1.7427923437723924, 4);
  sqcRYGate(q, -0.18896382564422165, 5);
  sqcRZGate(q, 2.7942447675106665, 5);
  sqcRYGate(q, -1.297294871066378, 6);
  sqcRZGate(q, -1.925109515785101, 6);
  sqcRYGate(q, -2.1619156815438467, 7);
  sqcRZGate(q, -0.1987439274110443, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.734570103517937, 0);
  sqcRZGate(q, -0.6196408779955336, 0);
  sqcRYGate(q, -2.1071000881374466, 1);
  sqcRZGate(q, 1.133521279130617, 1);
  sqcRYGate(q, -0.27052430478011846, 2);
  sqcRZGate(q, 1.3409407366462058, 2);
  sqcRYGate(q, -2.152492846659846, 3);
  sqcRZGate(q, 2.9864510284987755, 3);
  sqcRYGate(q, -1.0733452833325297, 4);
  sqcRZGate(q, -0.24387120101757362, 4);
  sqcRYGate(q, 1.399518216743157, 5);
  sqcRZGate(q, -3.073324950024701, 5);
  sqcRYGate(q, -1.668789267356071, 6);
  sqcRZGate(q, 0.8596462269829708, 6);
  sqcRYGate(q, -1.6822485428778977, 7);
  sqcRZGate(q, 2.169379811825415, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.462255562456136, 0);
  sqcRZGate(q, 0.2523445709412764, 0);
  sqcRYGate(q, -1.6268479160483198, 1);
  sqcRZGate(q, 0.177283896155779, 1);
  sqcRYGate(q, -0.38570352997175994, 2);
  sqcRZGate(q, -0.7221487402546218, 2);
  sqcRYGate(q, -0.9408083531201479, 3);
  sqcRZGate(q, 2.4215643428191886, 3);
  sqcRYGate(q, 0.5115707342891262, 4);
  sqcRZGate(q, -2.3409885836176114, 4);
  sqcRYGate(q, -2.685502451678, 5);
  sqcRZGate(q, 2.6034595189228336, 5);
  sqcRYGate(q, -1.6723909565336694, 6);
  sqcRZGate(q, -1.9602668549733067, 6);
  sqcRYGate(q, 0.13898153947511918, 7);
  sqcRZGate(q, -0.6357592008119548, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.12547612403026884, 0);
  sqcRZGate(q, -1.9944330284878435, 0);
  sqcRYGate(q, -2.3200486860776697, 1);
  sqcRZGate(q, 1.5065081354688177, 1);
  sqcRYGate(q, -2.5453509575951463, 2);
  sqcRZGate(q, -0.03892862689413329, 2);
  sqcRYGate(q, -2.038520660835439, 3);
  sqcRZGate(q, 2.9314402405816455, 3);
  sqcRYGate(q, -0.8614745622524831, 4);
  sqcRZGate(q, 1.4966535215838748, 4);
  sqcRYGate(q, -2.8550623996194533, 5);
  sqcRZGate(q, 0.5007091598684986, 5);
  sqcRYGate(q, -3.0783865038944227, 6);
  sqcRZGate(q, -1.4250537679977933, 6);
  sqcRYGate(q, -1.9196272247041788, 7);
  sqcRZGate(q, -2.0890929345792033, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.273081170457694, 0);
  sqcRZGate(q, 2.093067056494853, 0);
  sqcRYGate(q, -1.9611057506334182, 1);
  sqcRZGate(q, -3.096034098559264, 1);
  sqcRYGate(q, 2.869277109547727, 2);
  sqcRZGate(q, -2.6427088066518185, 2);
  sqcRYGate(q, -1.9133794457719384, 3);
  sqcRZGate(q, -2.258906664241633, 3);
  sqcRYGate(q, -1.3494044852255798, 4);
  sqcRZGate(q, -1.3680219620183198, 4);
  sqcRYGate(q, 1.386565247443101, 5);
  sqcRZGate(q, -1.2673355099151813, 5);
  sqcRYGate(q, -0.6644392839194424, 6);
  sqcRZGate(q, 2.9480513164979034, 6);
  sqcRYGate(q, 2.098261585664897, 7);
  sqcRZGate(q, -1.1134868747108246, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.20525350571520032, 0);
  sqcRZGate(q, -1.1102784428607344, 0);
  sqcRYGate(q, 2.0128691676613677, 1);
  sqcRZGate(q, 1.706514413563237, 1);
  sqcRYGate(q, -1.5778911217493319, 2);
  sqcRZGate(q, -2.894671273390713, 2);
  sqcRYGate(q, -1.7454565667494437, 3);
  sqcRZGate(q, 2.562967384778555, 3);
  sqcRYGate(q, -2.716722795173816, 4);
  sqcRZGate(q, 0.22894290881373447, 4);
  sqcRYGate(q, -1.9050919008835436, 5);
  sqcRZGate(q, 2.0062271095587283, 5);
  sqcRYGate(q, -0.8392708183437287, 6);
  sqcRZGate(q, 2.694633269237275, 6);
  sqcRYGate(q, 2.9786418366947185, 7);
  sqcRZGate(q, -3.1055859433200967, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.6314880563789282, 0);
  sqcRZGate(q, 2.6275161373736196, 0);
  sqcRYGate(q, -0.7978814999567163, 1);
  sqcRZGate(q, -2.5978770305160688, 1);
  sqcRYGate(q, -2.671749775121767, 2);
  sqcRZGate(q, 2.663040004378904, 2);
  sqcRYGate(q, 0.9558522419819532, 3);
  sqcRZGate(q, 1.3851215080252328, 3);
  sqcRYGate(q, -0.3339446608690847, 4);
  sqcRZGate(q, 2.426529926626933, 4);
  sqcRYGate(q, -1.4172876992023793, 5);
  sqcRZGate(q, -3.0013447419972574, 5);
  sqcRYGate(q, 2.245163568698889, 6);
  sqcRZGate(q, 1.173569599939713, 6);
  sqcRYGate(q, 1.0823355558945085, 7);
  sqcRZGate(q, -1.7963780793580657, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.4432224070459752, 0);
  sqcRZGate(q, 1.2236101443932543, 0);
  sqcRYGate(q, -2.6299497677754533, 1);
  sqcRZGate(q, 2.0608809793406095, 1);
  sqcRYGate(q, -1.1036394332420696, 2);
  sqcRZGate(q, -1.1741711434723652, 2);
  sqcRYGate(q, -2.412271489636875, 3);
  sqcRZGate(q, 2.3693752023729604, 3);
  sqcRYGate(q, -1.7113008902755595, 4);
  sqcRZGate(q, 1.780875088965586, 4);
  sqcRYGate(q, 0.30942975647940285, 5);
  sqcRZGate(q, -0.3117402421961071, 5);
  sqcRYGate(q, 2.894260646760946, 6);
  sqcRZGate(q, -2.800342708750179, 6);
  sqcRYGate(q, 1.7087409409872887, 7);
  sqcRZGate(q, 0.5447445618422329, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.0103729333849936, 0);
  sqcRZGate(q, 2.1282446726995508, 0);
  sqcRYGate(q, 0.3430696610723567, 1);
  sqcRZGate(q, -1.639748231875835, 1);
  sqcRYGate(q, -2.910739140260569, 2);
  sqcRZGate(q, 1.9464034466897533, 2);
  sqcRYGate(q, 2.6894036759600817, 3);
  sqcRZGate(q, -1.0438801967491882, 3);
  sqcRYGate(q, 1.7661515634033291, 4);
  sqcRZGate(q, -0.9973731889498723, 4);
  sqcRYGate(q, 1.2129945673392943, 5);
  sqcRZGate(q, -2.51470949253682, 5);
  sqcRYGate(q, -0.8316873338336372, 6);
  sqcRZGate(q, -1.0480455226620233, 6);
  sqcRYGate(q, -2.3936635440382825, 7);
  sqcRZGate(q, -0.9090376799273923, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.4477946134665323, 0);
  sqcRZGate(q, 2.2108769939961816, 0);
  sqcRYGate(q, -0.47152559544103667, 1);
  sqcRZGate(q, 0.784894575013845, 1);
  sqcRYGate(q, 1.3798922075375095, 2);
  sqcRZGate(q, 1.1174139787610713, 2);
  sqcRYGate(q, 1.0388297789582668, 3);
  sqcRZGate(q, 0.5687249107355616, 3);
  sqcRYGate(q, -2.6357098425661025, 4);
  sqcRZGate(q, -2.2754303534904867, 4);
  sqcRYGate(q, -1.275559361467167, 5);
  sqcRZGate(q, 2.7038261297242725, 5);
  sqcRYGate(q, 1.0059547442632224, 6);
  sqcRZGate(q, -2.609986828930589, 6);
  sqcRYGate(q, 2.674719744494134, 7);
  sqcRZGate(q, -1.7972789501030502, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.0389604810775779, 0);
  sqcRZGate(q, -0.7066547755593334, 0);
  sqcRYGate(q, 1.1080639578934477, 1);
  sqcRZGate(q, -0.005601827536612092, 1);
  sqcRYGate(q, -1.3925077524523726, 2);
  sqcRZGate(q, 0.3397218341273875, 2);
  sqcRYGate(q, -3.1145928230397897, 3);
  sqcRZGate(q, -1.209506288255664, 3);
  sqcRYGate(q, 1.8646197264184943, 4);
  sqcRZGate(q, 2.304470810157205, 4);
  sqcRYGate(q, -2.0868614979365714, 5);
  sqcRZGate(q, -2.8932302349875245, 5);
  sqcRYGate(q, 1.7827604942403001, 6);
  sqcRZGate(q, -2.391377782718632, 6);
  sqcRYGate(q, -1.8795712581350417, 7);
  sqcRZGate(q, 1.8067447154481764, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.6631129831715503, 0);
  sqcRZGate(q, 2.1869941560540056, 0);
  sqcRYGate(q, 1.5384104386264141, 1);
  sqcRZGate(q, -0.8626557988600538, 1);
  sqcRYGate(q, 2.0722306973367894, 2);
  sqcRZGate(q, 2.3304209156289746, 2);
  sqcRYGate(q, 0.8723306592050832, 3);
  sqcRZGate(q, 2.0359511513275126, 3);
  sqcRYGate(q, -1.6493598332967179, 4);
  sqcRZGate(q, -1.7552947442357287, 4);
  sqcRYGate(q, -0.38117485772205084, 5);
  sqcRZGate(q, 0.3903726883949024, 5);
  sqcRYGate(q, -0.8737735070177406, 6);
  sqcRZGate(q, -2.8322051297032638, 6);
  sqcRYGate(q, 1.50643410527818, 7);
  sqcRZGate(q, 0.10919148261741096, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.630043967283411, 0);
  sqcRZGate(q, -2.043869463198952, 0);
  sqcRYGate(q, 0.7288064691964359, 1);
  sqcRZGate(q, 2.0594451176334214, 1);
  sqcRYGate(q, -0.3760791649057733, 2);
  sqcRZGate(q, 2.913214259429157, 2);
  sqcRYGate(q, -1.2606613281596104, 3);
  sqcRZGate(q, 1.282109275456947, 3);
  sqcRYGate(q, -1.7662142065996933, 4);
  sqcRZGate(q, 2.109534102667899, 4);
  sqcRYGate(q, 0.7701015827717183, 5);
  sqcRZGate(q, 1.7373176489524074, 5);
  sqcRYGate(q, 3.033751040924929, 6);
  sqcRZGate(q, 0.2996294529824173, 6);
  sqcRYGate(q, 0.17078137132475277, 7);
  sqcRZGate(q, 2.8987522279293163, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.8021869152129204, 0);
  sqcRZGate(q, 1.7245144549032854, 0);
  sqcRYGate(q, 2.821615698361293, 1);
  sqcRZGate(q, 0.377209397210847, 1);
  sqcRYGate(q, -1.9174145694964537, 2);
  sqcRZGate(q, 1.4977291158237775, 2);
  sqcRYGate(q, -0.17166010471742, 3);
  sqcRZGate(q, -2.1456861382741113, 3);
  sqcRYGate(q, 2.867116494374716, 4);
  sqcRZGate(q, 2.1648851083630114, 4);
  sqcRYGate(q, 2.361334721381451, 5);
  sqcRZGate(q, -2.494670941828801, 5);
  sqcRYGate(q, 2.203832860436795, 6);
  sqcRZGate(q, 0.4453033199703551, 6);
  sqcRYGate(q, -1.9346814573519495, 7);
  sqcRZGate(q, -2.368819372574335, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.3213130039773473, 0);
  sqcRZGate(q, 0.9575496037064741, 0);
  sqcRYGate(q, -2.4740585823206076, 1);
  sqcRZGate(q, 1.0629150297428749, 1);
  sqcRYGate(q, 1.5766994334499056, 2);
  sqcRZGate(q, 2.0387398967709958, 2);
  sqcRYGate(q, 1.4207130320609496, 3);
  sqcRZGate(q, 1.9305664996657346, 3);
  sqcRYGate(q, 1.6316437973146198, 4);
  sqcRZGate(q, 0.3328331190852771, 4);
  sqcRYGate(q, 2.2444209320234147, 5);
  sqcRZGate(q, -2.1597853676628604, 5);
  sqcRYGate(q, 0.6667746346639015, 6);
  sqcRZGate(q, -1.5515325600866465, 6);
  sqcRYGate(q, 2.159643864746232, 7);
  sqcRZGate(q, -0.8567399900107455, 7);

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
