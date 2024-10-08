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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 0.5296486346687974, 0);
  sqcRZGate(q, -3.0550733372416152, 0);
  sqcRYGate(q, -2.1224116230682313, 1);
  sqcRZGate(q, -2.348764450636016, 1);
  sqcRYGate(q, 2.333155716808333, 2);
  sqcRZGate(q, 2.57468830428167, 2);
  sqcRYGate(q, 1.1211494821151877, 3);
  sqcRZGate(q, -1.1328217222038683, 3);
  sqcRYGate(q, -0.013256660045103175, 4);
  sqcRZGate(q, -0.34513548526518445, 4);
  sqcRYGate(q, -0.028392672290268095, 5);
  sqcRZGate(q, -2.185001445943704, 5);
  sqcRYGate(q, 0.927105258595813, 6);
  sqcRZGate(q, 0.7143914143890784, 6);
  sqcRYGate(q, -1.4570033102541693, 7);
  sqcRZGate(q, 0.6638376519462932, 7);
  sqcRYGate(q, -0.482375243171194, 8);
  sqcRZGate(q, 2.395959839940776, 8);
  sqcRYGate(q, 1.5768817842114726, 9);
  sqcRZGate(q, 1.539803005172739, 9);
  sqcRYGate(q, 0.0017385938832310543, 10);
  sqcRZGate(q, 1.9945045060791065, 10);
  sqcRYGate(q, -0.0025183326050752792, 11);
  sqcRZGate(q, 1.1836514762231998, 11);
  sqcRYGate(q, -2.3211903367103712, 12);
  sqcRZGate(q, 2.202403796137922, 12);
  sqcRYGate(q, -1.602058933528264, 13);
  sqcRZGate(q, -0.04417942133919354, 13);
  sqcRYGate(q, -0.040613927733184056, 14);
  sqcRZGate(q, -1.817258719337275, 14);
  sqcRYGate(q, 3.0892293930509025, 15);
  sqcRZGate(q, 1.6661589459251145, 15);
  sqcRYGate(q, -0.9800744912858388, 16);
  sqcRZGate(q, -3.124737828997163, 16);
  sqcRYGate(q, -1.0452383131614935, 17);
  sqcRZGate(q, -3.136153809067138, 17);
  sqcRYGate(q, -0.47284998849305754, 18);
  sqcRZGate(q, -3.1078851733910073, 18);
  sqcRYGate(q, -0.7392177583970699, 19);
  sqcRZGate(q, 0.010983086460741214, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.9919998528928082, 0);
  sqcRZGate(q, 2.2637576172779212, 0);
  sqcRYGate(q, -2.6522569277717247, 1);
  sqcRZGate(q, 0.17198823783321868, 1);
  sqcRYGate(q, -0.6528078034349564, 2);
  sqcRZGate(q, -0.6113115177491872, 2);
  sqcRYGate(q, 1.7282060133766954, 3);
  sqcRZGate(q, -0.19489201590159144, 3);
  sqcRYGate(q, 3.1406223571897307, 4);
  sqcRZGate(q, -1.8093438273452964, 4);
  sqcRYGate(q, -3.1389002919860833, 5);
  sqcRZGate(q, -1.938124295491889, 5);
  sqcRYGate(q, -0.14497040403061945, 6);
  sqcRZGate(q, 1.4913460452428309, 6);
  sqcRYGate(q, 0.025371785755759005, 7);
  sqcRZGate(q, -2.120180528160022, 7);
  sqcRYGate(q, 2.9371151104201663, 8);
  sqcRZGate(q, 1.8205140893377938, 8);
  sqcRYGate(q, 1.6876661159245863, 9);
  sqcRZGate(q, -0.3712521777929681, 9);
  sqcRYGate(q, -2.89994000872329, 10);
  sqcRZGate(q, 1.0780134097538552, 10);
  sqcRYGate(q, 2.962965016780052, 11);
  sqcRZGate(q, -2.2858071507563937, 11);
  sqcRYGate(q, 0.06963227407067485, 12);
  sqcRZGate(q, -2.0557677490348887, 12);
  sqcRYGate(q, 1.6140911598373, 13);
  sqcRZGate(q, -2.2243284340716545, 13);
  sqcRYGate(q, 3.1094685518944636, 14);
  sqcRZGate(q, -0.017264762996813232, 14);
  sqcRYGate(q, -0.2123519057592904, 15);
  sqcRZGate(q, 0.00833478184906955, 15);
  sqcRYGate(q, -2.35251327647401, 16);
  sqcRZGate(q, 0.011320320995876543, 16);
  sqcRYGate(q, -0.17168058351011492, 17);
  sqcRZGate(q, 3.0697958865699526, 17);
  sqcRYGate(q, 2.6782145846165153, 18);
  sqcRZGate(q, -3.105709609086158, 18);
  sqcRYGate(q, -0.588313321381455, 19);
  sqcRZGate(q, 3.1144237860027477, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.76941210586191, 0);
  sqcRZGate(q, 0.008742835525545445, 0);
  sqcRYGate(q, -0.6330505006432874, 1);
  sqcRZGate(q, 2.3785807071613765, 1);
  sqcRYGate(q, -2.6716863165872553, 2);
  sqcRZGate(q, -2.9794485240032236, 2);
  sqcRYGate(q, 2.0281983703288287, 3);
  sqcRZGate(q, 1.5027080935128696, 3);
  sqcRYGate(q, -3.1210770929092235, 4);
  sqcRZGate(q, -0.06663117368281936, 4);
  sqcRYGate(q, -2.667705191512262, 5);
  sqcRZGate(q, -0.9516778188562087, 5);
  sqcRYGate(q, -0.21072370334189858, 6);
  sqcRZGate(q, -2.4941616286202075, 6);
  sqcRYGate(q, 1.8868303637028165, 7);
  sqcRZGate(q, 2.0170425012893256, 7);
  sqcRYGate(q, 1.6283741394082705, 8);
  sqcRZGate(q, -1.9276175106831974, 8);
  sqcRYGate(q, -1.0493894919636821, 9);
  sqcRZGate(q, 0.003078341641036685, 9);
  sqcRYGate(q, 1.1982663142158456, 10);
  sqcRZGate(q, 0.1728906593923787, 10);
  sqcRYGate(q, 0.52363846832609, 11);
  sqcRZGate(q, 0.09092549738910007, 11);
  sqcRYGate(q, 1.5959696042563358, 12);
  sqcRZGate(q, 2.502706155460341, 12);
  sqcRYGate(q, -0.26063119972255683, 13);
  sqcRZGate(q, 0.7572448760426161, 13);
  sqcRYGate(q, -0.43516664908655045, 14);
  sqcRZGate(q, 0.5701958406217713, 14);
  sqcRYGate(q, 1.6868612548696964, 15);
  sqcRZGate(q, 0.8738785318815582, 15);
  sqcRYGate(q, -0.8264060884624252, 16);
  sqcRZGate(q, -1.5828874053947564, 16);
  sqcRYGate(q, 3.030478880484808, 17);
  sqcRZGate(q, -0.11296600929450175, 17);
  sqcRYGate(q, 0.8948310317383354, 18);
  sqcRZGate(q, -1.5629737428439396, 18);
  sqcRYGate(q, -0.31442941336815444, 19);
  sqcRZGate(q, 3.1348292944166207, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.6455282058847978, 0);
  sqcRZGate(q, -1.85793214970673, 0);
  sqcRYGate(q, -2.156008925409422, 1);
  sqcRZGate(q, -1.9927695530083134, 1);
  sqcRYGate(q, -2.9593335844514272, 2);
  sqcRZGate(q, 2.9586892061035335, 2);
  sqcRYGate(q, -1.2776539943933525, 3);
  sqcRZGate(q, 0.028947655058334625, 3);
  sqcRYGate(q, 0.007505223656092852, 4);
  sqcRZGate(q, 1.175922872299135, 4);
  sqcRYGate(q, 3.1122719079864662, 5);
  sqcRZGate(q, 0.45481623540937033, 5);
  sqcRYGate(q, -0.08923465395484158, 6);
  sqcRZGate(q, 2.45072005328462, 6);
  sqcRYGate(q, 3.080858044051092, 7);
  sqcRZGate(q, -0.3030415990514914, 7);
  sqcRYGate(q, 1.5675511647693596, 8);
  sqcRZGate(q, -0.054701701700528134, 8);
  sqcRYGate(q, -0.2626775298409631, 9);
  sqcRZGate(q, -1.185059904297323, 9);
  sqcRYGate(q, 0.02174014970672389, 10);
  sqcRZGate(q, -2.1735091443654153, 10);
  sqcRYGate(q, -0.05248015375982035, 11);
  sqcRZGate(q, -1.513848211259303, 11);
  sqcRYGate(q, -1.5672924266641521, 12);
  sqcRZGate(q, 1.8295953550301725, 12);
  sqcRYGate(q, 1.5798202649907414, 13);
  sqcRZGate(q, -1.5525803799998603, 13);
  sqcRYGate(q, 0.006143805491545252, 14);
  sqcRZGate(q, -2.1368597770350144, 14);
  sqcRYGate(q, -3.1299320284260475, 15);
  sqcRZGate(q, -0.6834674858828107, 15);
  sqcRYGate(q, 1.5761050513899084, 16);
  sqcRZGate(q, -2.653148314219557, 16);
  sqcRYGate(q, -0.043050174828806576, 17);
  sqcRZGate(q, -3.0941749866586457, 17);
  sqcRYGate(q, 1.599101289499392, 18);
  sqcRZGate(q, -0.5597315649783997, 18);
  sqcRYGate(q, -1.6254197369879255, 19);
  sqcRZGate(q, 1.5707946363978424, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.046122094998723905, 0);
  sqcRZGate(q, -2.064608302021046, 0);
  sqcRYGate(q, -0.10375315138197506, 1);
  sqcRZGate(q, -1.8670108066789262, 1);
  sqcRYGate(q, -3.065520820869155, 2);
  sqcRZGate(q, 2.24496547297362, 2);
  sqcRYGate(q, -2.212597273981088, 3);
  sqcRZGate(q, -2.7255126892787853, 3);
  sqcRYGate(q, -1.4681539313096623, 4);
  sqcRZGate(q, 0.026509695872805498, 4);
  sqcRYGate(q, 2.463117091285231, 5);
  sqcRZGate(q, -0.20694043408031954, 5);
  sqcRYGate(q, 2.4667843141917714, 6);
  sqcRZGate(q, 0.3267311487365016, 6);
  sqcRYGate(q, 1.6498274517647777, 7);
  sqcRZGate(q, 2.728122622114308, 7);
  sqcRYGate(q, -0.40605896617380655, 8);
  sqcRZGate(q, -1.1206320300231154, 8);
  sqcRYGate(q, -1.3858507994960663, 9);
  sqcRZGate(q, 0.040804177017040574, 9);
  sqcRYGate(q, -3.1232167282239236, 10);
  sqcRZGate(q, 3.0042283205272815, 10);
  sqcRYGate(q, -0.1525948803630262, 11);
  sqcRZGate(q, -1.1995969669731599, 11);
  sqcRYGate(q, -0.02262096379652601, 12);
  sqcRZGate(q, 1.3134241702562408, 12);
  sqcRYGate(q, -1.1691837106746528, 13);
  sqcRZGate(q, -1.5613419417797436, 13);
  sqcRYGate(q, -0.893581879732781, 14);
  sqcRZGate(q, -1.5780657973444772, 14);
  sqcRYGate(q, -0.12890492043445612, 15);
  sqcRZGate(q, 1.5615329468038583, 15);
  sqcRYGate(q, -3.114440634828898, 16);
  sqcRZGate(q, 0.8424987009360712, 16);
  sqcRYGate(q, -2.7421273647318536, 17);
  sqcRZGate(q, 1.559707611065975, 17);
  sqcRYGate(q, -0.37789438000713144, 18);
  sqcRZGate(q, -0.18576357285679812, 18);
  sqcRYGate(q, -1.5691934090178048, 19);
  sqcRZGate(q, 1.547087797072641, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.17391742840666718, 0);
  sqcRZGate(q, 0.09149223881177537, 0);
  sqcRYGate(q, 1.139894992615285, 1);
  sqcRZGate(q, 2.9702398290088583, 1);
  sqcRYGate(q, -0.012735050489235178, 2);
  sqcRZGate(q, 2.9298426086902256, 2);
  sqcRYGate(q, 1.4359450415356525, 3);
  sqcRZGate(q, -1.6518449344956763, 3);
  sqcRYGate(q, 0.04443434344150532, 4);
  sqcRZGate(q, -1.425536348851723, 4);
  sqcRYGate(q, 3.059425199798273, 5);
  sqcRZGate(q, -0.7744156078401813, 5);
  sqcRYGate(q, 3.1396395498193606, 6);
  sqcRZGate(q, -1.204058009534192, 6);
  sqcRYGate(q, 0.0020435682971653435, 7);
  sqcRZGate(q, 1.2388775600516895, 7);
  sqcRYGate(q, 0.24260477582377768, 8);
  sqcRZGate(q, 2.7562195710699124, 8);
  sqcRYGate(q, 0.4630667037016588, 9);
  sqcRZGate(q, -0.5896628245889977, 9);
  sqcRYGate(q, -0.025342280428495734, 10);
  sqcRZGate(q, 2.733201476951902, 10);
  sqcRYGate(q, -3.116883850132066, 11);
  sqcRZGate(q, -1.0509408204082837, 11);
  sqcRYGate(q, -1.560089802526639, 12);
  sqcRZGate(q, 0.19508744604083536, 12);
  sqcRYGate(q, 1.5691265481363201, 13);
  sqcRZGate(q, -0.07089593058276773, 13);
  sqcRYGate(q, -3.0771211973819628, 14);
  sqcRZGate(q, -1.5824440156898225, 14);
  sqcRYGate(q, -0.03915145357868077, 15);
  sqcRZGate(q, -1.639350320388419, 15);
  sqcRYGate(q, 3.111788161627743, 16);
  sqcRZGate(q, -1.6529608040336639, 16);
  sqcRYGate(q, 2.956319380939859, 17);
  sqcRZGate(q, -3.064954482855594, 17);
  sqcRYGate(q, -2.5372420088829166, 18);
  sqcRZGate(q, 2.5196939052680647, 18);
  sqcRYGate(q, 1.5707522844567643, 19);
  sqcRZGate(q, 0.4347056621541201, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.0013266097419808364, 0);
  sqcRZGate(q, -0.3091728213920241, 0);
  sqcRYGate(q, 0.001320099090489759, 1);
  sqcRZGate(q, -0.3997481194724708, 1);
  sqcRYGate(q, 3.128571920141194, 2);
  sqcRZGate(q, 1.0129575699573339, 2);
  sqcRYGate(q, -1.5296347129117027, 3);
  sqcRZGate(q, -1.0639803441667173, 3);
  sqcRYGate(q, -1.7247196470518276, 4);
  sqcRZGate(q, 1.923132459187241, 4);
  sqcRYGate(q, 0.20628686798618984, 5);
  sqcRZGate(q, -2.0772752098582234, 5);
  sqcRYGate(q, -2.53993488713955, 6);
  sqcRZGate(q, 0.09754111067290652, 6);
  sqcRYGate(q, 0.7825041029649219, 7);
  sqcRZGate(q, -2.9945730095496086, 7);
  sqcRYGate(q, 2.1949829474650273, 8);
  sqcRZGate(q, 1.17357629418835, 8);
  sqcRYGate(q, 1.409035817427541, 9);
  sqcRZGate(q, 2.64207308978193, 9);
  sqcRYGate(q, -2.5832384224410636, 10);
  sqcRZGate(q, 0.8563683431153378, 10);
  sqcRYGate(q, 2.419567080736946, 11);
  sqcRZGate(q, 0.9467492117799104, 11);
  sqcRYGate(q, 2.0196624810826824, 12);
  sqcRZGate(q, 1.3764007244506402, 12);
  sqcRYGate(q, 1.277906788811021, 13);
  sqcRZGate(q, -1.9609975301079448, 13);
  sqcRYGate(q, 1.8555069623485885, 14);
  sqcRZGate(q, -2.1819203030354197, 14);
  sqcRYGate(q, -0.17927115592048004, 15);
  sqcRZGate(q, 1.0237697114458584, 15);
  sqcRYGate(q, -1.562549611642201, 16);
  sqcRZGate(q, -0.6102680726871618, 16);
  sqcRYGate(q, -0.06711355971094642, 17);
  sqcRZGate(q, 0.8764350008910438, 17);
  sqcRYGate(q, -1.5905075987583945, 18);
  sqcRZGate(q, -0.6196229959355247, 18);
  sqcRYGate(q, -0.004043803256971402, 19);
  sqcRZGate(q, -1.0695661246681365, 19);

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
