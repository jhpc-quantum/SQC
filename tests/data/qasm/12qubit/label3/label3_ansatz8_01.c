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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 2.0020246441713265, 0);
  sqcRYGate(q, 0.40340111676105117, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.344596916319185, 0);
  sqcRYGate(q, 2.074688214641702, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0111014571132113, 2);
  sqcRYGate(q, 1.0850197847054588, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3352629649142573, 2);
  sqcRYGate(q, 1.0754886865270954, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.057786733950891, 4);
  sqcRYGate(q, 2.553994196244036, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3309932380487193, 4);
  sqcRYGate(q, -2.72751078012172, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.283252255622877, 6);
  sqcRYGate(q, 2.582084578945249, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4077471609802066, 6);
  sqcRYGate(q, 2.409567379799347, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.10005359629117361, 8);
  sqcRYGate(q, 1.8119382021916182, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.3972107152477503, 8);
  sqcRYGate(q, -0.12122745794795264, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.527504732983321, 10);
  sqcRYGate(q, -2.6674200983458918, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.1246893622386251, 10);
  sqcRYGate(q, 1.7653935039535815, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0785685319604688, 0);
  sqcRYGate(q, 2.8866023771197886, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.569847310819604, 0);
  sqcRYGate(q, -0.6758304031792389, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3304051337641596, 2);
  sqcRYGate(q, 0.010532564897393576, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4869334446173639, 2);
  sqcRYGate(q, -1.4401285170489482, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9004627600894526, 4);
  sqcRYGate(q, 0.01688135889442055, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.2760333656815643, 4);
  sqcRYGate(q, -1.698256919604885, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.8743272396205765, 6);
  sqcRYGate(q, 2.7194744019820933, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.8759528074847, 6);
  sqcRYGate(q, -2.986768153976074, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.6010974414942765, 8);
  sqcRYGate(q, -2.5857556541398377, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.0264637913368109, 8);
  sqcRYGate(q, 1.5001689385242185, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.3304446547225655, 1);
  sqcRYGate(q, -1.6724664714052169, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1948536114233024, 1);
  sqcRYGate(q, -2.2764799214964553, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5020710429481223, 3);
  sqcRYGate(q, -2.607501216047612, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9990185624739896, 3);
  sqcRYGate(q, 0.32771520361373113, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.5695229320465782, 5);
  sqcRYGate(q, 0.335149329907216, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.44608043596601965, 5);
  sqcRYGate(q, 0.13318068066650568, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.0362822703613355, 7);
  sqcRYGate(q, -2.750140124439054, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.5209992743776581, 7);
  sqcRYGate(q, 0.4343993820880634, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.4534469380660657, 9);
  sqcRYGate(q, -2.973996941232923, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.598477925139105, 9);
  sqcRYGate(q, -2.466415637330802, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.3548753564200013, 0);
  sqcRYGate(q, 0.6314838165500607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21365723125832659, 0);
  sqcRYGate(q, -2.4643027967533735, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7569904931448934, 2);
  sqcRYGate(q, -1.3331367940042038, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9742230112852437, 2);
  sqcRYGate(q, -1.1455057057487203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5791424812997281, 4);
  sqcRYGate(q, 2.026413992373692, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.055442593168618215, 4);
  sqcRYGate(q, -0.06369429347858357, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4638379836365885, 6);
  sqcRYGate(q, -1.9432279430839134, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.130013314949084, 6);
  sqcRYGate(q, 3.110368863074141, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6547038356817265, 8);
  sqcRYGate(q, 3.064611246217187, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9812216806805334, 8);
  sqcRYGate(q, -0.12810838158913287, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.668238821844989, 10);
  sqcRYGate(q, 0.9948393280229225, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.9328546427448847, 10);
  sqcRYGate(q, 2.8699378511676006, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.374614839961589, 0);
  sqcRYGate(q, 2.6419539858379415, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.743445599559341, 0);
  sqcRYGate(q, -1.5686418691037316, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.26030077184887, 2);
  sqcRYGate(q, 1.2941049863050642, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1474010807059551, 2);
  sqcRYGate(q, 0.726519646093716, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.01453271142852497, 4);
  sqcRYGate(q, 1.1830798040333246, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.027918909395406, 4);
  sqcRYGate(q, 2.382892373644707, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.24968408975306744, 6);
  sqcRYGate(q, 2.527424295555574, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.931646833998293, 6);
  sqcRYGate(q, 0.014882768449706596, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.8012894343049943, 8);
  sqcRYGate(q, -0.5153550093404284, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.9782909408911157, 8);
  sqcRYGate(q, 2.6860194674584155, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.887921865307258, 1);
  sqcRYGate(q, 2.815075775778098, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.173026974311774, 1);
  sqcRYGate(q, -1.6985952016803085, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4644010413574122, 3);
  sqcRYGate(q, -0.5963641877361292, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.040263142158821985, 3);
  sqcRYGate(q, 2.7174705637746785, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3342212329932022, 5);
  sqcRYGate(q, 0.28420340128294264, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.3848252771864593, 5);
  sqcRYGate(q, 0.6663643639808106, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.4548463853992981, 7);
  sqcRYGate(q, -0.9318896154880925, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.8919804493928556, 7);
  sqcRYGate(q, -0.1333900300395149, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.1997528584420518, 9);
  sqcRYGate(q, -2.1074197094491245, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.176408850505087, 9);
  sqcRYGate(q, -1.6101209538158692, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.876999724136119, 0);
  sqcRYGate(q, -2.947845717639859, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.230974872089914, 0);
  sqcRYGate(q, 1.0441759232306556, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8075072060197351, 2);
  sqcRYGate(q, 1.883577282446421, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.226797002078393, 2);
  sqcRYGate(q, 3.0970817513003843, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5163896465513109, 4);
  sqcRYGate(q, 0.6092504051636611, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.13097469534917508, 4);
  sqcRYGate(q, 0.02271518724828514, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.39164918286862, 6);
  sqcRYGate(q, 2.6187377420131877, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0922605202888183, 6);
  sqcRYGate(q, 0.014988419469061043, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.760819993155518, 8);
  sqcRYGate(q, -1.1591828724191773, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1170510691462106, 8);
  sqcRYGate(q, 3.109643660900657, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9188821889742949, 10);
  sqcRYGate(q, -2.9868951472694487, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0029068498301346, 10);
  sqcRYGate(q, -3.140506590465215, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.448221366092648, 0);
  sqcRYGate(q, 0.6762154529924923, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8966913308094137, 0);
  sqcRYGate(q, -2.52397075325316, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.584758296137237, 2);
  sqcRYGate(q, -2.1992098334328016, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.4952202421591927, 2);
  sqcRYGate(q, -2.727760505350251, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3205988177313288, 4);
  sqcRYGate(q, 0.49272503413124413, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.10241886694429962, 4);
  sqcRYGate(q, 0.6661450591078452, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.8511855345060284, 6);
  sqcRYGate(q, -3.1409505124078483, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.8149545621574408, 6);
  sqcRYGate(q, 1.8552924741926256, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.3100922276919085, 8);
  sqcRYGate(q, 0.5162077037650814, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.52141052263232, 8);
  sqcRYGate(q, 2.7245953273633243, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.3267195769028604, 1);
  sqcRYGate(q, -2.4123729216373326, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.896667724927461, 1);
  sqcRYGate(q, -2.0050929396684714, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3306314464377387, 3);
  sqcRYGate(q, 3.0948733583004007, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.8172155307848596, 3);
  sqcRYGate(q, -0.24959377307293992, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6444515065514728, 5);
  sqcRYGate(q, -3.010922501873665, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.765997836381756, 5);
  sqcRYGate(q, -0.5650403184573012, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.9227898195858674, 7);
  sqcRYGate(q, 2.1799692624834295, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.897544626775729, 7);
  sqcRYGate(q, -2.7593798431801453, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.0452308852924599, 9);
  sqcRYGate(q, 1.7110079719191624, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.10922271175601854, 9);
  sqcRYGate(q, 2.052611638668285, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.9591228503627773, 0);
  sqcRYGate(q, 1.989048452221809, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10046424871229134, 0);
  sqcRYGate(q, 0.036859189184814234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7587777463735854, 2);
  sqcRYGate(q, 2.9019308699709847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.015973716364975132, 2);
  sqcRYGate(q, 3.131972650546431, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0847735423881524, 4);
  sqcRYGate(q, -2.6005770178547585, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.032380215846787, 4);
  sqcRYGate(q, 3.1310053895384264, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.416904680936004, 6);
  sqcRYGate(q, 3.077961246124237, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1395293070263044, 6);
  sqcRYGate(q, -3.1244336248774154, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.349894026645758, 8);
  sqcRYGate(q, 1.1325896602844008, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.016163735135799658, 8);
  sqcRYGate(q, -0.028927130765228348, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9333665659927686, 10);
  sqcRYGate(q, 1.3936707403027777, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0717607472063286, 10);
  sqcRYGate(q, -3.0330811232567063, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8921429412075269, 0);
  sqcRYGate(q, 2.011981088295431, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2440750293954927, 0);
  sqcRYGate(q, -1.5015629157683987, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6234053273090696, 2);
  sqcRYGate(q, -3.0717704326780573, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.0415902778776474, 2);
  sqcRYGate(q, 0.2809399446610501, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.561521710835582, 4);
  sqcRYGate(q, -2.1759786222783912, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.9357169073394282, 4);
  sqcRYGate(q, -0.07315548905828884, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7874275867684026, 6);
  sqcRYGate(q, 0.053852963895525185, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.2887212660295218, 6);
  sqcRYGate(q, 1.919777979805678, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.0780374023388877, 8);
  sqcRYGate(q, 1.7655344983609158, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.1709898562063383, 8);
  sqcRYGate(q, -3.0120148658768287, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.49121615938329394, 1);
  sqcRYGate(q, -2.3465248029312393, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.127524025902221, 1);
  sqcRYGate(q, 0.7491628867268068, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.982637863714891, 3);
  sqcRYGate(q, 0.842218901802627, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.933064763731854, 3);
  sqcRYGate(q, -0.2723169890818013, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5543645665731932, 5);
  sqcRYGate(q, -0.7084514858821607, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.042201818363732, 5);
  sqcRYGate(q, -0.0007875874993032995, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5033488507437172, 7);
  sqcRYGate(q, -2.8738509850197733, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.9393484800301168, 7);
  sqcRYGate(q, -2.754017330324396, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.05705299924568451, 9);
  sqcRYGate(q, -1.7579665689112596, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.1374750046879978, 9);
  sqcRYGate(q, -1.7035140063759737, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.8713080507231404, 0);
  sqcRYGate(q, -1.2049030379509864, 1);
  sqcRYGate(q, 1.7433807798599723, 2);
  sqcRYGate(q, 0.8773185250771682, 3);
  sqcRYGate(q, -0.009566355824915718, 4);
  sqcRYGate(q, -1.8882112392549342, 5);
  sqcRYGate(q, 3.009023071965553, 6);
  sqcRYGate(q, -0.13231223699253078, 7);
  sqcRYGate(q, 2.3115179551238825, 8);
  sqcRYGate(q, -0.680564532405369, 9);
  sqcRYGate(q, 2.6811893362686376, 10);
  sqcRYGate(q, 2.5889279919992605, 11);

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
