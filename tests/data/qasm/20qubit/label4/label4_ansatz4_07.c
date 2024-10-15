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

  sqcRYGate(q, -1.567908090788126, 0);
  sqcRZGate(q, -0.09343507375008708, 0);
  sqcRYGate(q, -1.5651845720571156, 1);
  sqcRZGate(q, 1.2694553838191345, 1);
  sqcRYGate(q, -1.5663233819369111, 2);
  sqcRZGate(q, -0.24332871241372533, 2);
  sqcRYGate(q, -1.5707607294820558, 3);
  sqcRZGate(q, 0.00018954425203787648, 3);
  sqcRYGate(q, -2.9418978608652075, 4);
  sqcRZGate(q, -0.304286698417525, 4);
  sqcRYGate(q, 1.50401910771836, 5);
  sqcRZGate(q, 0.0011362473107730232, 5);
  sqcRYGate(q, 3.1414875252656502, 6);
  sqcRZGate(q, 0.47876259318582365, 6);
  sqcRYGate(q, -3.1414120388526463, 7);
  sqcRZGate(q, -0.5761753494111268, 7);
  sqcRYGate(q, -1.57070726042062, 8);
  sqcRZGate(q, 3.1415518404048823, 8);
  sqcRYGate(q, 1.5592398026596779, 9);
  sqcRZGate(q, -1.8796066568169998, 9);
  sqcRYGate(q, -3.1402902887396156, 10);
  sqcRZGate(q, -2.596553787759208, 10);
  sqcRYGate(q, -1.5707079299054818, 11);
  sqcRZGate(q, 0.8539635052681185, 11);
  sqcRYGate(q, -1.5707776585691586, 12);
  sqcRZGate(q, 1.570486642926039, 12);
  sqcRYGate(q, 1.570799020944946, 13);
  sqcRZGate(q, 0.11269457762868944, 13);
  sqcRYGate(q, 3.141567392938932, 14);
  sqcRZGate(q, -0.028548856572251147, 14);
  sqcRYGate(q, 3.140993211601404, 15);
  sqcRZGate(q, 2.151541476012783, 15);
  sqcRYGate(q, 1.4540269496851093, 16);
  sqcRZGate(q, -0.15169201063483512, 16);
  sqcRYGate(q, -0.08107415278115404, 17);
  sqcRZGate(q, 1.0530627319892192, 17);
  sqcRYGate(q, -0.1786981474978229, 18);
  sqcRZGate(q, 2.4725532812185107, 18);
  sqcRYGate(q, 0.00044493933256043437, 19);
  sqcRZGate(q, 1.7789770885768421, 19);
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
  sqcRYGate(q, -0.0004728672356524299, 0);
  sqcRZGate(q, 0.09603286219635265, 0);
  sqcRYGate(q, 2.0753191688127976e-05, 1);
  sqcRZGate(q, 2.2641391845953267, 1);
  sqcRYGate(q, 0.38661581191794653, 2);
  sqcRZGate(q, -1.3481263829513823, 2);
  sqcRYGate(q, -0.3764062207675508, 3);
  sqcRZGate(q, 0.0015989583346076584, 3);
  sqcRYGate(q, 0.01357807379223678, 4);
  sqcRZGate(q, -2.8118886730860884, 4);
  sqcRYGate(q, 0.027217948992659644, 5);
  sqcRZGate(q, 3.1394458375126035, 5);
  sqcRYGate(q, -6.400337395184863e-06, 6);
  sqcRZGate(q, 2.8455336021699185, 6);
  sqcRYGate(q, -5.756252675239671e-07, 7);
  sqcRZGate(q, 0.655680837108349, 7);
  sqcRYGate(q, 0.3367306472681406, 8);
  sqcRZGate(q, 1.57075022756994, 8);
  sqcRYGate(q, -2.62488494793082, 9);
  sqcRZGate(q, 2.364004146597157, 9);
  sqcRYGate(q, 3.2070171247511325e-06, 10);
  sqcRZGate(q, 0.460745253227814, 10);
  sqcRYGate(q, 3.1415688982986962, 11);
  sqcRZGate(q, 0.8540800811683885, 11);
  sqcRYGate(q, 1.5708284480268642, 12);
  sqcRZGate(q, -1.6860420939617162, 12);
  sqcRYGate(q, -1.5914914120861834, 13);
  sqcRZGate(q, -2.6792664346422543, 13);
  sqcRYGate(q, 1.5708388145988978, 14);
  sqcRZGate(q, -0.018460132003058405, 14);
  sqcRYGate(q, -1.5707704306889578, 15);
  sqcRZGate(q, -0.6137084534077905, 15);
  sqcRYGate(q, 1.5690840277233598, 16);
  sqcRZGate(q, 2.465952948063939, 16);
  sqcRYGate(q, -0.00032035325950741415, 17);
  sqcRZGate(q, 2.793022809965777, 17);
  sqcRYGate(q, 1.5541965237560245, 18);
  sqcRZGate(q, -0.3685152853874601, 18);
  sqcRYGate(q, 1.5706764593514695, 19);
  sqcRZGate(q, -1.5851036483436822, 19);
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
  sqcRYGate(q, 1.5701912371141016, 0);
  sqcRZGate(q, -0.6130574619194058, 0);
  sqcRYGate(q, 0.005569035316140614, 1);
  sqcRZGate(q, -1.5839662440723963, 1);
  sqcRYGate(q, -2.296218570983355, 2);
  sqcRZGate(q, -0.38405042717300564, 2);
  sqcRYGate(q, 1.5706459031631725, 3);
  sqcRZGate(q, -1.4124293523589282, 3);
  sqcRYGate(q, 1.3855023613429243, 4);
  sqcRZGate(q, 0.759888776589839, 4);
  sqcRYGate(q, 1.503887095452401, 5);
  sqcRZGate(q, -2.6339757954062626, 5);
  sqcRYGate(q, 1.581750069771874, 6);
  sqcRZGate(q, 1.2829452088930728, 6);
  sqcRYGate(q, 0.00019342137314360604, 7);
  sqcRZGate(q, -1.0018184100137209, 7);
  sqcRYGate(q, -1.578862525702783, 8);
  sqcRZGate(q, -0.7011869412748144, 8);
  sqcRYGate(q, 0.029960153837467262, 9);
  sqcRZGate(q, -1.9435202664357345, 9);
  sqcRYGate(q, -0.0003040441737880429, 10);
  sqcRZGate(q, 0.6046062699469461, 10);
  sqcRYGate(q, 2.7586607819870763, 11);
  sqcRZGate(q, -3.141502044273895, 11);
  sqcRYGate(q, -3.141496159123195, 12);
  sqcRZGate(q, 3.1226989645565064, 12);
  sqcRYGate(q, -3.1415920045967156, 13);
  sqcRZGate(q, 0.4765831118859127, 13);
  sqcRYGate(q, -3.0137493142578684, 14);
  sqcRZGate(q, -0.10671585846862004, 14);
  sqcRYGate(q, 0.0033432088028675366, 15);
  sqcRZGate(q, -0.9575131939465145, 15);
  sqcRYGate(q, -1.5707418511126832, 16);
  sqcRZGate(q, -2.5010361356763613, 16);
  sqcRYGate(q, -1.571173603559836, 17);
  sqcRZGate(q, -0.002967644950191861, 17);
  sqcRYGate(q, 0.013926251291151338, 18);
  sqcRZGate(q, -2.0137014254593937, 18);
  sqcRYGate(q, -2.33606993599853, 19);
  sqcRZGate(q, 2.7747485194007084, 19);
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
  sqcRYGate(q, -3.100612598382068, 0);
  sqcRZGate(q, -1.5365907954500788, 0);
  sqcRYGate(q, -3.136882390890972, 1);
  sqcRZGate(q, -2.7023062581586488, 1);
  sqcRYGate(q, -0.0006270375582495546, 2);
  sqcRZGate(q, 1.9538680191112396, 2);
  sqcRYGate(q, -0.17427730765214733, 3);
  sqcRZGate(q, -1.5516760974868937, 3);
  sqcRYGate(q, 3.141571633494464, 4);
  sqcRZGate(q, -2.3867791150288693, 4);
  sqcRYGate(q, 1.570754104851151, 5);
  sqcRZGate(q, -0.0004042714395007252, 5);
  sqcRYGate(q, 3.1415919512276065, 6);
  sqcRZGate(q, -0.45574832495301815, 6);
  sqcRYGate(q, 3.1415825252164957, 7);
  sqcRZGate(q, 0.22274079998515361, 7);
  sqcRYGate(q, 5.833684771694436e-06, 8);
  sqcRZGate(q, 2.2719136147603143, 8);
  sqcRYGate(q, -3.14158649292746, 9);
  sqcRZGate(q, -1.916830630091508, 9);
  sqcRYGate(q, 1.5707817644125317, 10);
  sqcRZGate(q, 1.5707632200155177, 10);
  sqcRYGate(q, -1.570790485767528, 11);
  sqcRZGate(q, -1.5899058815187095, 11);
  sqcRYGate(q, -1.5711238842039896, 12);
  sqcRZGate(q, -1.5707701089214081, 12);
  sqcRYGate(q, 1.5055516762505778, 13);
  sqcRZGate(q, 3.0247477960356037, 13);
  sqcRYGate(q, 2.994841554294005e-05, 14);
  sqcRZGate(q, -2.231504308301182, 14);
  sqcRYGate(q, -1.5705091537126918, 15);
  sqcRZGate(q, 1.5723289365176836, 15);
  sqcRYGate(q, -2.6452661137260365, 16);
  sqcRZGate(q, -0.5612951213637426, 16);
  sqcRYGate(q, -0.43123388488975145, 17);
  sqcRZGate(q, 1.5745827621013193, 17);
  sqcRYGate(q, 1.6114994309284447, 18);
  sqcRZGate(q, 3.1409256579943703, 18);
  sqcRYGate(q, -1.5344795883564135, 19);
  sqcRZGate(q, 0.014438718122739896, 19);
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
  sqcRYGate(q, 1.574052838811315, 0);
  sqcRZGate(q, 3.1415306141971286, 0);
  sqcRYGate(q, 0.019401605799794552, 1);
  sqcRZGate(q, -0.26015779359540137, 1);
  sqcRYGate(q, 1.5714796208720534, 2);
  sqcRZGate(q, -0.5509019840228566, 2);
  sqcRYGate(q, 1.1549836806947806, 3);
  sqcRZGate(q, -0.00013765342285498863, 3);
  sqcRYGate(q, -1.5707492726482366, 4);
  sqcRZGate(q, -0.7961555201042136, 4);
  sqcRYGate(q, 1.5727986059556596, 5);
  sqcRZGate(q, -1.9709359982039114, 5);
  sqcRYGate(q, 0.000375187215555961, 6);
  sqcRZGate(q, 0.07320111538332251, 6);
  sqcRYGate(q, 1.55903290186764, 7);
  sqcRZGate(q, 5.684678344553775e-05, 7);
  sqcRYGate(q, 1.5710435596061867, 8);
  sqcRZGate(q, -1.645303687415249, 8);
  sqcRYGate(q, -0.00102491309725532, 9);
  sqcRZGate(q, 1.3216944838786873, 9);
  sqcRYGate(q, 1.5708029068098799, 10);
  sqcRZGate(q, -0.15559171486114565, 10);
  sqcRYGate(q, -1.5712017097262558, 11);
  sqcRZGate(q, 2.4752451808822, 11);
  sqcRYGate(q, 0.3748480689902145, 12);
  sqcRZGate(q, 4.861326523730724e-05, 12);
  sqcRYGate(q, 4.7034973915671685e-06, 13);
  sqcRZGate(q, -0.5098592048215629, 13);
  sqcRYGate(q, -0.17479854934096384, 14);
  sqcRZGate(q, -1.6638913753606577, 14);
  sqcRYGate(q, 0.11858498355193095, 15);
  sqcRZGate(q, -0.0015194468738517486, 15);
  sqcRYGate(q, 3.140374415155669, 16);
  sqcRZGate(q, 2.2910296210627585, 16);
  sqcRYGate(q, -1.5575433759178554, 17);
  sqcRZGate(q, 0.34986778762508636, 17);
  sqcRYGate(q, 1.571896607115174, 18);
  sqcRZGate(q, 0.011990804153089842, 18);
  sqcRYGate(q, -1.5703109817767837, 19);
  sqcRZGate(q, 1.5592113032476207, 19);
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
  sqcRYGate(q, -1.5768060515971254, 0);
  sqcRZGate(q, -6.417038160741692e-07, 0);
  sqcRYGate(q, 3.1409691609083827, 1);
  sqcRZGate(q, 1.3680090159874787, 1);
  sqcRYGate(q, 6.251313526917102e-05, 2);
  sqcRZGate(q, 0.5580290394168479, 2);
  sqcRYGate(q, 2.6829812987471944, 3);
  sqcRZGate(q, 3.1413568939500047, 3);
  sqcRYGate(q, 3.6814545150088984e-08, 4);
  sqcRZGate(q, -2.3516646403546466, 4);
  sqcRYGate(q, -3.141537929563965, 5);
  sqcRZGate(q, 1.170660426899012, 5);
  sqcRYGate(q, 3.141428249388393, 6);
  sqcRZGate(q, -2.894915606517188, 6);
  sqcRYGate(q, 2.9206507248467912, 7);
  sqcRZGate(q, 1.5709111205850164, 7);
  sqcRYGate(q, -2.942933120041808e-06, 8);
  sqcRZGate(q, -3.0622306748487915, 8);
  sqcRYGate(q, -0.006430205435390958, 9);
  sqcRZGate(q, -1.7405894594520275, 9);
  sqcRYGate(q, 2.4271970385084204e-06, 10);
  sqcRZGate(q, 0.15490432018858957, 10);
  sqcRYGate(q, -3.141585676974421, 11);
  sqcRZGate(q, 0.9047216436149791, 11);
  sqcRYGate(q, -1.570817132769627, 12);
  sqcRZGate(q, -3.141233532123594, 12);
  sqcRYGate(q, -5.287764324624078e-05, 13);
  sqcRZGate(q, 2.068311540069053, 13);
  sqcRYGate(q, 3.1414572519209902, 14);
  sqcRZGate(q, 1.2303488923388535, 14);
  sqcRYGate(q, -1.5707525362173511, 15);
  sqcRZGate(q, -1.5710301897688188, 15);
  sqcRYGate(q, -1.7288635690022904, 16);
  sqcRZGate(q, -0.4017304649209704, 16);
  sqcRYGate(q, 2.91892850241367, 17);
  sqcRZGate(q, 1.8206805652775948, 17);
  sqcRYGate(q, 2.0713552877632955, 18);
  sqcRZGate(q, 2.57496586837131, 18);
  sqcRYGate(q, 2.066256232637317, 19);
  sqcRZGate(q, 1.0432040684076345, 19);
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
  sqcRYGate(q, 1.5703533557892406, 0);
  sqcRZGate(q, -1.8463983925434042, 0);
  sqcRYGate(q, -0.7436391631910162, 1);
  sqcRZGate(q, 1.575084379561562, 1);
  sqcRYGate(q, 1.5709946265420038, 2);
  sqcRZGate(q, 3.141296549338799, 2);
  sqcRYGate(q, -1.5690386196591892, 3);
  sqcRZGate(q, 1.5681370889009576, 3);
  sqcRYGate(q, 1.5707561770914062, 4);
  sqcRZGate(q, 1.5714358960058403, 4);
  sqcRYGate(q, -1.5725901168121936, 5);
  sqcRZGate(q, 2.353642147216486, 5);
  sqcRYGate(q, 3.141236642558957, 6);
  sqcRZGate(q, -2.900366700207204, 6);
  sqcRYGate(q, 1.5707483789501735, 7);
  sqcRZGate(q, -1.8832510937703313, 7);
  sqcRYGate(q, 1.5709602976352028, 8);
  sqcRZGate(q, -1.57048646439822, 8);
  sqcRYGate(q, -0.0004971098071020029, 9);
  sqcRZGate(q, 1.496709488608576, 9);
  sqcRYGate(q, -3.136742378430254, 10);
  sqcRZGate(q, -2.250112544640327, 10);
  sqcRYGate(q, 1.5707396269431992, 11);
  sqcRZGate(q, 1.5707937415876954, 11);
  sqcRYGate(q, -1.5708019384973222, 12);
  sqcRZGate(q, 0.04930361563293406, 12);
  sqcRYGate(q, 3.132509831104862, 13);
  sqcRZGate(q, 2.0002467392247647, 13);
  sqcRYGate(q, -1.6388443427103802e-05, 14);
  sqcRZGate(q, -2.594893044622246, 14);
  sqcRYGate(q, -2.8102386683657037, 15);
  sqcRZGate(q, -1.5611501968040629, 15);
  sqcRYGate(q, -1.5708912295506332, 16);
  sqcRZGate(q, -3.139568426839919, 16);
  sqcRYGate(q, -1.5701036405616948, 17);
  sqcRZGate(q, 1.5736282080878563, 17);
  sqcRYGate(q, -0.00011673142296732508, 18);
  sqcRZGate(q, 2.148636528014599, 18);
  sqcRYGate(q, 3.1415434364484134, 19);
  sqcRZGate(q, -2.081291181583241, 19);
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
  sqcRYGate(q, -3.1393819367028035, 0);
  sqcRZGate(q, -0.2731544530922489, 0);
  sqcRYGate(q, 1.570866592157775, 1);
  sqcRZGate(q, -2.139598579293338, 1);
  sqcRYGate(q, 1.5707841420761677, 2);
  sqcRZGate(q, -2.9892111506683423, 2);
  sqcRYGate(q, 1.5016403690842246, 3);
  sqcRZGate(q, -0.4274747534442395, 3);
  sqcRYGate(q, -0.3584170685651082, 4);
  sqcRZGate(q, 1.722717095953569, 4);
  sqcRYGate(q, -3.1415460345399273, 5);
  sqcRZGate(q, 0.7769466037773647, 5);
  sqcRYGate(q, -3.1415910316948303, 6);
  sqcRZGate(q, -1.6910765637636955, 6);
  sqcRYGate(q, -0.0022347955178358718, 7);
  sqcRZGate(q, 0.32419381125022984, 7);
  sqcRYGate(q, -0.35713400636905046, 8);
  sqcRZGate(q, 3.141556088531998, 8);
  sqcRYGate(q, -3.141561219252124, 9);
  sqcRZGate(q, -1.7291723621006354, 9);
  sqcRYGate(q, -3.1415895785173777, 10);
  sqcRZGate(q, -2.24945510032964, 10);
  sqcRYGate(q, 0.32633968024232995, 11);
  sqcRZGate(q, 3.385875451122899e-06, 11);
  sqcRYGate(q, 0.020895184113521204, 12);
  sqcRZGate(q, 3.091285269431647, 12);
  sqcRYGate(q, 3.141587826436667, 13);
  sqcRZGate(q, 0.5778206528526856, 13);
  sqcRYGate(q, 9.686135180947738e-06, 14);
  sqcRZGate(q, 0.5539042391732396, 14);
  sqcRYGate(q, 0.01902476293706279, 15);
  sqcRZGate(q, -1.5806180090247415, 15);
  sqcRYGate(q, 1.5694369444607865, 16);
  sqcRZGate(q, -1.5735729823119566, 16);
  sqcRYGate(q, 1.3306066427014847, 17);
  sqcRZGate(q, -1.7536379652047467, 17);
  sqcRYGate(q, 1.5698063837853065, 18);
  sqcRZGate(q, 3.0530596424200556, 18);
  sqcRYGate(q, 1.420050057184181, 19);
  sqcRZGate(q, 1.7167677448013863, 19);
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
  sqcRYGate(q, -1.5708510333886654, 0);
  sqcRZGate(q, 1.5736993387235032, 0);
  sqcRYGate(q, -0.0006726997996784334, 1);
  sqcRZGate(q, -1.1373091335061511, 1);
  sqcRYGate(q, 2.1044102206335204e-06, 2);
  sqcRZGate(q, 1.5252789778194442, 2);
  sqcRYGate(q, -3.137474339104326, 3);
  sqcRZGate(q, -0.42651631795503503, 3);
  sqcRYGate(q, 0.0002844010192165025, 4);
  sqcRZGate(q, 2.989684780338494, 4);
  sqcRYGate(q, -3.1147308700148915, 5);
  sqcRZGate(q, 1.5075378103069328, 5);
  sqcRYGate(q, 1.5707754011964319, 6);
  sqcRZGate(q, -0.565982892542908, 6);
  sqcRYGate(q, -1.5708543180854662, 7);
  sqcRZGate(q, 2.502689493735149, 7);
  sqcRYGate(q, -1.5677933261312926, 8);
  sqcRZGate(q, -1.6916312642768592, 8);
  sqcRYGate(q, 0.002034441197237058, 9);
  sqcRZGate(q, 2.724300221038873, 9);
  sqcRYGate(q, 1.5487414734058333, 10);
  sqcRZGate(q, 3.141453002540545, 10);
  sqcRYGate(q, -1.5711698302744874, 11);
  sqcRZGate(q, 0.28860201179938993, 11);
  sqcRYGate(q, 1.5706882118371563, 12);
  sqcRZGate(q, 0.006320313222067498, 12);
  sqcRYGate(q, 1.570960659167589, 13);
  sqcRZGate(q, -1.5547688558960457, 13);
  sqcRYGate(q, -3.1412880732030257, 14);
  sqcRZGate(q, -1.7005971870581362, 14);
  sqcRYGate(q, 1.5684538240576194, 15);
  sqcRZGate(q, -2.7887576401411107, 15);
  sqcRYGate(q, -1.5706569052143415, 16);
  sqcRZGate(q, -3.1404247662443345, 16);
  sqcRYGate(q, -0.001956968128570047, 17);
  sqcRZGate(q, 2.621214991152322, 17);
  sqcRYGate(q, -2.666830719689618e-05, 18);
  sqcRZGate(q, -1.5921748477446753, 18);
  sqcRYGate(q, 3.1413967046443005, 19);
  sqcRZGate(q, 1.7180147668347452, 19);
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
  sqcRYGate(q, -1.5708006511513086, 0);
  sqcRZGate(q, 1.5686831738001121, 0);
  sqcRYGate(q, 3.120179158465662, 1);
  sqcRZGate(q, -2.261193681671565, 1);
  sqcRYGate(q, 0.002479490265455918, 2);
  sqcRZGate(q, 3.034078135709092, 2);
  sqcRYGate(q, -1.570801699645498, 3);
  sqcRZGate(q, 2.6312367793884883, 3);
  sqcRYGate(q, 1.5708087399271984, 4);
  sqcRZGate(q, 1.5707076724353297, 4);
  sqcRYGate(q, -0.01183339734170552, 5);
  sqcRZGate(q, -3.083939872848014, 5);
  sqcRYGate(q, -3.141589556234277, 6);
  sqcRZGate(q, -1.3923663675762317, 6);
  sqcRYGate(q, 0.00011489624270598345, 7);
  sqcRZGate(q, 0.6389515359036048, 7);
  sqcRYGate(q, 0.0003010796741195463, 8);
  sqcRZGate(q, 0.1206644759409583, 8);
  sqcRYGate(q, -0.0008843998353675886, 9);
  sqcRZGate(q, 0.3615026629067053, 9);
  sqcRYGate(q, -0.38424820706201324, 10);
  sqcRZGate(q, -1.5707051024722378, 10);
  sqcRYGate(q, -3.1415759449449343, 11);
  sqcRZGate(q, -1.28224513129151, 11);
  sqcRYGate(q, -0.029237591843151996, 12);
  sqcRZGate(q, 3.135405119170506, 12);
  sqcRYGate(q, -3.025085758082752, 13);
  sqcRZGate(q, 0.01551472232667428, 13);
  sqcRYGate(q, 2.7703057338206944e-06, 14);
  sqcRZGate(q, 1.993547474859632, 14);
  sqcRYGate(q, -9.408486223527746e-05, 15);
  sqcRZGate(q, -1.9236261317994026, 15);
  sqcRYGate(q, 3.0045490932762244, 16);
  sqcRZGate(q, 1.5721754004443942, 16);
  sqcRYGate(q, 0.00019044848337923526, 17);
  sqcRZGate(q, 0.7049846576615825, 17);
  sqcRYGate(q, -1.5709403949047847, 18);
  sqcRZGate(q, -2.1861320756041636, 18);
  sqcRYGate(q, -1.5707565946838231, 19);
  sqcRZGate(q, -2.505949439738037, 19);
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
  sqcRYGate(q, -1.5708526586033846, 0);
  sqcRZGate(q, 1.1521465432810942, 0);
  sqcRYGate(q, -3.1386542103433483, 1);
  sqcRZGate(q, -0.025367781662967978, 1);
  sqcRYGate(q, -1.570810614650671, 2);
  sqcRZGate(q, -0.42101210815828605, 2);
  sqcRYGate(q, 0.0005623971292987306, 3);
  sqcRZGate(q, -2.1021796007687943, 3);
  sqcRYGate(q, 1.570534340310254, 4);
  sqcRZGate(q, 1.145015061002912, 4);
  sqcRYGate(q, -1.4620449968287819, 5);
  sqcRZGate(q, 0.5286989850972557, 5);
  sqcRYGate(q, 3.141429117775149, 6);
  sqcRZGate(q, -1.2522635814201504, 6);
  sqcRYGate(q, 1.5707848236704933, 7);
  sqcRZGate(q, -2.612839919038431, 7);
  sqcRYGate(q, 1.5707627482081041, 8);
  sqcRZGate(q, 2.7174497769808945, 8);
  sqcRYGate(q, -1.5679899971533162, 9);
  sqcRZGate(q, -1.0415105861504377, 9);
  sqcRYGate(q, 1.5708414278885074, 10);
  sqcRZGate(q, -1.9757429521664651, 10);
  sqcRYGate(q, 1.5708281762152736, 11);
  sqcRZGate(q, 2.100305942526826, 11);
  sqcRYGate(q, -1.5708922300015753, 12);
  sqcRZGate(q, -1.9952208343096987, 12);
  sqcRYGate(q, -1.6660681787853917, 13);
  sqcRZGate(q, -2.613186731050652, 13);
  sqcRYGate(q, -0.0002964060038620271, 14);
  sqcRZGate(q, 0.8968460113293988, 14);
  sqcRYGate(q, 1.5710257143683464, 15);
  sqcRZGate(q, -1.039479566857878, 15);
  sqcRYGate(q, -1.569176379616261, 16);
  sqcRZGate(q, 2.7241764155446604, 16);
  sqcRYGate(q, 0.05789351163879048, 17);
  sqcRZGate(q, 0.5257935874964624, 17);
  sqcRYGate(q, -3.141346149311766, 18);
  sqcRZGate(q, -1.0324785652522384, 18);
  sqcRYGate(q, 3.141531098546695, 19);
  sqcRZGate(q, 2.7341552560334352, 19);

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
