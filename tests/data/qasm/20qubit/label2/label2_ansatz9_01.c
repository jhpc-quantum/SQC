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

  sqcRYGate(q, -0.764107508642698, 0);
  sqcRYGate(q, 2.1028817711620835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3875785998284051, 0);
  sqcRYGate(q, -1.2373122791278854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7944959328997587, 2);
  sqcRYGate(q, -0.28953132652723657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.996542620022523, 2);
  sqcRYGate(q, 0.0661304414501469, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3557939017414573, 4);
  sqcRYGate(q, -1.7833810633267317, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6098389647558804, 4);
  sqcRYGate(q, -0.1812213463673249, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9777172464399237, 6);
  sqcRYGate(q, -0.08204454423162753, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8927180213646198, 6);
  sqcRYGate(q, -1.798545536082943, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.873556726648795, 8);
  sqcRYGate(q, -1.5765526706137178, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.671329598670128, 8);
  sqcRYGate(q, 3.0822725012700314, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.4262049624947806, 10);
  sqcRYGate(q, -0.34446705205322564, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.7293491020155295, 10);
  sqcRYGate(q, 2.2656308829992877, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.589869432551087, 12);
  sqcRYGate(q, 1.5002299020318846, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.7172316447639835, 12);
  sqcRYGate(q, 0.21876630874192493, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.135791925935591, 14);
  sqcRYGate(q, 1.5393076801173615, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.010147213186210806, 14);
  sqcRYGate(q, 3.1270227484735478, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.9585997873985663, 16);
  sqcRYGate(q, -1.5862295638300343, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.9499899945354224, 16);
  sqcRYGate(q, -1.3532403254401528, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.2501079600942417, 18);
  sqcRYGate(q, -1.8317372783468384, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.1576851035375, 18);
  sqcRYGate(q, 1.9055779664289598, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.400087863783348, 0);
  sqcRYGate(q, -2.2810654703088904, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9234213015311143, 0);
  sqcRYGate(q, -0.7911876976759508, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7179457252217256, 2);
  sqcRYGate(q, -0.6517975862227736, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.15877596482533443, 2);
  sqcRYGate(q, 3.058000980935801, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.099372647718348, 4);
  sqcRYGate(q, 0.24402606853675765, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.910614041235572, 4);
  sqcRYGate(q, -0.00049523238318816, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.6089029610918809, 6);
  sqcRYGate(q, -0.7163769179056692, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.7675672563953757, 6);
  sqcRYGate(q, -2.5283519629360236, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.3240958864530388, 8);
  sqcRYGate(q, 3.0344920872438124, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.1323123103928605, 8);
  sqcRYGate(q, -0.011287273611940467, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.0790008369672384, 10);
  sqcRYGate(q, -0.5407564711822317, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.18655902131603666, 10);
  sqcRYGate(q, -2.9517451857254304, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.679553979636589, 12);
  sqcRYGate(q, -2.982764711805489, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.052294180951724556, 12);
  sqcRYGate(q, 3.069373948470048, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.9990717453060871, 14);
  sqcRYGate(q, 2.5566071621932998, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -1.4601495109609302, 14);
  sqcRYGate(q, 1.648515335115066, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.38143627043218054, 16);
  sqcRYGate(q, -2.768276027983534, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.6653465366977338, 16);
  sqcRYGate(q, -1.311947169357655, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -2.6577144462917643, 1);
  sqcRYGate(q, -2.262867437573928, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0005930505046323, 1);
  sqcRYGate(q, -3.038734373782265, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2257703942942353, 3);
  sqcRYGate(q, 0.7390982248645459, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1335889968767763, 3);
  sqcRYGate(q, -0.1690476142967956, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.1083735067534253, 5);
  sqcRYGate(q, 2.122004049256309, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.3363657844345376, 5);
  sqcRYGate(q, 3.1413143631634126, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.4928283182737943, 7);
  sqcRYGate(q, -0.39595225249929866, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.963309600487739, 7);
  sqcRYGate(q, -0.09147419154113035, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.6879664512155523, 9);
  sqcRYGate(q, -1.5625792148809499, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.0974137930166585, 9);
  sqcRYGate(q, 0.08032647689812933, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.7918405304908314, 11);
  sqcRYGate(q, -2.3289412931087816, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.7572309596146214, 11);
  sqcRYGate(q, -2.7983427608481715, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.7686659289665867, 13);
  sqcRYGate(q, -2.003651521125753, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.656749696127398, 13);
  sqcRYGate(q, 0.5073004185003454, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.22885429200941992, 15);
  sqcRYGate(q, 1.4376353413413137, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -0.25646780995597496, 15);
  sqcRYGate(q, -0.03655743867341476, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -1.6274141426154332, 17);
  sqcRYGate(q, -1.5338721919350071, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -3.133683631594962, 17);
  sqcRYGate(q, 0.5404459118408376, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -2.957933641721416, 0);
  sqcRYGate(q, -2.799855773715543, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.436438480058703, 0);
  sqcRYGate(q, 0.6655462900326553, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9354554821838024, 1);
  sqcRYGate(q, -1.6611352271337472, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7149614786512433, 1);
  sqcRYGate(q, 0.5051724209475394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4459651301622384, 2);
  sqcRYGate(q, -3.0693848484995656, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.027726037711334812, 2);
  sqcRYGate(q, -0.017154544221091087, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.2188017305980545, 3);
  sqcRYGate(q, 0.397758643351378, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8220051893983298, 3);
  sqcRYGate(q, 0.32966898859107335, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.15396757505964676, 4);
  sqcRYGate(q, -0.4895397483139798, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.10192683072228359, 4);
  sqcRYGate(q, 0.0005197262322038654, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.2952363672172584, 5);
  sqcRYGate(q, 0.872688316591909, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.00010376850947410362, 5);
  sqcRYGate(q, -3.1415759096895477, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.264726506161745, 6);
  sqcRYGate(q, 0.8563386279102632, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -0.10373799739915945, 6);
  sqcRYGate(q, -1.6409216943718634, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 2.5989472228322286, 7);
  sqcRYGate(q, 3.0476644820743863, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.0116396565364516, 7);
  sqcRYGate(q, -1.8344854815327962, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.9213783834847367, 8);
  sqcRYGate(q, 0.4142044305585353, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 3.0604315143289744, 8);
  sqcRYGate(q, 0.026050036928930542, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.2437372013551554, 9);
  sqcRYGate(q, 0.29749916720884517, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.136456241213608, 9);
  sqcRYGate(q, 3.1368725140404448, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6750203273323507, 10);
  sqcRYGate(q, -0.48480488432089697, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 2.2519932349499165, 10);
  sqcRYGate(q, 0.03083893063437804, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 2.013175419284483, 11);
  sqcRYGate(q, 0.4539247309268335, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.233921134972401, 11);
  sqcRYGate(q, -0.30595333332290725, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.722501963913058, 12);
  sqcRYGate(q, -2.8771396034821666, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -3.045760309746289, 12);
  sqcRYGate(q, 3.1405874789937798, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -0.23505045345341904, 13);
  sqcRYGate(q, -2.3245173554599368, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.04522692989264311, 13);
  sqcRYGate(q, 0.01788289632929274, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.044684901047491, 14);
  sqcRYGate(q, 1.8627734560712028, 17);
  sqcCXGate(q, 14, 17);
  sqcRYGate(q, 2.8307222777228427, 14);
  sqcRYGate(q, -2.9940779417670043, 17);
  sqcCXGate(q, 14, 17);
  sqcRYGate(q, -1.119366174408328, 15);
  sqcRYGate(q, 0.9228487899350029, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.12306285991728937, 15);
  sqcRYGate(q, 2.998027632501847, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.5663167499960648, 16);
  sqcRYGate(q, -0.017618708985768335, 19);
  sqcCXGate(q, 16, 19);
  sqcRYGate(q, -1.8203419996851364, 16);
  sqcRYGate(q, -3.1356248680105305, 19);
  sqcCXGate(q, 16, 19);
  sqcRYGate(q, 0.24807663039984096, 17);
  sqcRYGate(q, -0.1874681393217255, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.021106627975530756, 17);
  sqcRYGate(q, -3.133288899893921, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.26955150215316, 0);
  sqcRYGate(q, -1.8645730407831786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7783425109036521, 0);
  sqcRYGate(q, -3.03180721138274, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07984043258151541, 2);
  sqcRYGate(q, -1.5071029281413821, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5417701804043549, 2);
  sqcRYGate(q, -1.8843059903533894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0855262573072801, 4);
  sqcRYGate(q, -2.4539911370064154, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1392472658527053, 4);
  sqcRYGate(q, -0.4548551624696738, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4036166428298453, 6);
  sqcRYGate(q, -2.7054824456709614, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7356784572176533, 6);
  sqcRYGate(q, -1.1933506942913645, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7707702705262796, 8);
  sqcRYGate(q, 0.2830057036066775, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.4345834014986396, 8);
  sqcRYGate(q, -0.9736037267840546, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.05371100190339705, 10);
  sqcRYGate(q, -2.6327761502199722, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.267849458163227, 10);
  sqcRYGate(q, 0.6333594925781032, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.0677019407311769, 12);
  sqcRYGate(q, 1.054207417211479, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.813463569011414, 12);
  sqcRYGate(q, 0.24989406505943457, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.914472151488025, 14);
  sqcRYGate(q, 2.54874721158072, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.005662349332379968, 14);
  sqcRYGate(q, -2.9771389268928097, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.0830150852200333, 16);
  sqcRYGate(q, 2.459137005949817, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.0194244395006278, 16);
  sqcRYGate(q, -1.9994984853240556, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.7419157674620163, 18);
  sqcRYGate(q, -3.1242765710727256, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.9375671055396055, 18);
  sqcRYGate(q, -3.115764124913845, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.6885314650651067, 0);
  sqcRYGate(q, 2.789566162230726, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3812767752752385, 0);
  sqcRYGate(q, -0.22227056016371893, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8579219564872451, 2);
  sqcRYGate(q, -1.2477867998698047, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.44036409770546747, 2);
  sqcRYGate(q, -2.3263003761411065, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.9428565368309266, 4);
  sqcRYGate(q, -0.07182537635084635, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.1394864870671833, 4);
  sqcRYGate(q, 0.006376887065872694, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.510611117293224, 6);
  sqcRYGate(q, 0.7831798784947127, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.01832744323056, 6);
  sqcRYGate(q, 0.443915887147301, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.27603698228658313, 8);
  sqcRYGate(q, -2.5469275470637114, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.1318422591732498, 8);
  sqcRYGate(q, -3.1318202756168945, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.5411427952481036, 10);
  sqcRYGate(q, 2.1266938519362446, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.03648019232964713, 10);
  sqcRYGate(q, -3.085045287246055, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.002141088782515, 12);
  sqcRYGate(q, 2.801553395816644, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.1306250975054675, 12);
  sqcRYGate(q, 0.06551746069398799, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.9925224620402461, 14);
  sqcRYGate(q, -2.381004820674662, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -1.4018288864042263, 14);
  sqcRYGate(q, -0.07286473767702617, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -2.0868513002421603, 16);
  sqcRYGate(q, -0.19823219768916436, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 3.14016072758782, 16);
  sqcRYGate(q, 0.011047156257580806, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.545106732934556, 1);
  sqcRYGate(q, 0.9219272872654657, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3375298341315893, 1);
  sqcRYGate(q, 1.0343615499778407, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3140149203442082, 3);
  sqcRYGate(q, 2.773756010074132, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.251682402507956, 3);
  sqcRYGate(q, 2.931519522694925, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.0507457391433426, 5);
  sqcRYGate(q, 0.10497746788133089, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.000633362976132408, 5);
  sqcRYGate(q, 0.00039747298406389575, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.36266776674367124, 7);
  sqcRYGate(q, 1.066790193724997, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.3647167265012656, 7);
  sqcRYGate(q, -1.8030779514623276, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.40997206843262185, 9);
  sqcRYGate(q, -0.6560028587767335, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.5015646161487831, 9);
  sqcRYGate(q, -0.01074597601069538, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.3701060720419562, 11);
  sqcRYGate(q, -0.21836220816298332, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.010715430722598285, 11);
  sqcRYGate(q, 3.1294353262498302, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.772946479229999, 13);
  sqcRYGate(q, 2.1184240262048206, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.4891277358039336, 13);
  sqcRYGate(q, 2.2183970341889494, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.363270911672962, 15);
  sqcRYGate(q, -0.4220772615698517, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -3.0071647536803563, 15);
  sqcRYGate(q, -0.14440715292560102, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -2.8893410920296114, 17);
  sqcRYGate(q, 0.21024189604103133, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 3.1209047644711, 17);
  sqcRYGate(q, 3.135439534022935, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 2.5778736316651396, 0);
  sqcRYGate(q, 0.2309584289997197, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.152403490572831, 0);
  sqcRYGate(q, 1.8628120352177122, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8206701523378245, 1);
  sqcRYGate(q, -0.07062769022360449, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.897043964985206, 1);
  sqcRYGate(q, -3.0439911533166972, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0931885836893223, 2);
  sqcRYGate(q, -0.39911885913955664, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.17880449445643085, 2);
  sqcRYGate(q, -0.47778418847573945, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.13283367968236795, 3);
  sqcRYGate(q, -1.562336267426896, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.729422765319649, 3);
  sqcRYGate(q, -3.1358638978467743, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2052073773547285, 4);
  sqcRYGate(q, 2.8963319541903836, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -3.1402640997321853, 4);
  sqcRYGate(q, 0.000972598440910319, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.6032793622303891, 5);
  sqcRYGate(q, -0.6595703238358078, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.878659527785851, 5);
  sqcRYGate(q, -0.0006466767687210075, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2152464308927278, 6);
  sqcRYGate(q, -2.4631884925745693, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -2.7889338214797808, 6);
  sqcRYGate(q, 2.911693244623318, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.5088485779383528, 7);
  sqcRYGate(q, -0.5513405579969125, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.0488160583067208, 7);
  sqcRYGate(q, 3.1117859715795215, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.1739510394546375, 8);
  sqcRYGate(q, -0.812303017299962, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.3115559278921099, 8);
  sqcRYGate(q, 0.02677856099955733, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -2.1209593489367156, 9);
  sqcRYGate(q, -0.8084507941920986, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.04448572404694762, 9);
  sqcRYGate(q, 1.2953935328815585, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1128244499663147, 10);
  sqcRYGate(q, -3.026070056430722, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -3.1402074810677836, 10);
  sqcRYGate(q, -0.003939174657894958, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 2.2548899863446383, 11);
  sqcRYGate(q, 1.9628817436552073, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.1402537974060927, 11);
  sqcRYGate(q, 0.0004211823655628777, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.719465443777219, 12);
  sqcRYGate(q, 1.7870811911131383, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -0.07478144741288784, 12);
  sqcRYGate(q, -3.1196801737864677, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -1.7507151841485555, 13);
  sqcRYGate(q, 2.067382275034925, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.15300831577619312, 13);
  sqcRYGate(q, 0.2824234970904991, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.9298180765826154, 14);
  sqcRYGate(q, -0.7960468814851254, 17);
  sqcCXGate(q, 14, 17);
  sqcRYGate(q, -2.2579797688393697, 14);
  sqcRYGate(q, -0.016657850271905694, 17);
  sqcCXGate(q, 14, 17);
  sqcRYGate(q, -0.6561706419343256, 15);
  sqcRYGate(q, 1.9446767043649462, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.3955616730356404, 15);
  sqcRYGate(q, -0.0788257142336703, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.8872568761784538, 16);
  sqcRYGate(q, 0.12852986838611227, 19);
  sqcCXGate(q, 16, 19);
  sqcRYGate(q, 2.582349348189736, 16);
  sqcRYGate(q, -0.10732007348095429, 19);
  sqcCXGate(q, 16, 19);
  sqcRYGate(q, 2.8066670065897124, 17);
  sqcRYGate(q, -1.3975436952491653, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.3029524960994525, 17);
  sqcRYGate(q, -0.003068691790124589, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.3027303742652085, 0);
  sqcRYGate(q, 2.7748350252940854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07340375148580898, 0);
  sqcRYGate(q, 2.6944246071945246, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9287063744273694, 2);
  sqcRYGate(q, -0.8495464594934519, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.48763109587837583, 2);
  sqcRYGate(q, -1.417349988502056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.18382472541502, 4);
  sqcRYGate(q, 1.0495618130035085, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.086703336048507, 4);
  sqcRYGate(q, -1.5560964506054349, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7382026408397522, 6);
  sqcRYGate(q, 0.5107800856388194, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1322669636326443, 6);
  sqcRYGate(q, 0.033650996484743345, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7493894104109726, 8);
  sqcRYGate(q, -1.575058294521109, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.3634777754914801, 8);
  sqcRYGate(q, 0.008210747468813118, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.713508978879348, 10);
  sqcRYGate(q, -2.2665519503047076, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.6202360140267587, 10);
  sqcRYGate(q, -1.6125848845707909, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.210911249616259, 12);
  sqcRYGate(q, 2.3764200016903154, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.915813931100473, 12);
  sqcRYGate(q, -0.28844200541064513, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.5867355154969407, 14);
  sqcRYGate(q, -1.446229657673948, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.472353485817639, 14);
  sqcRYGate(q, 2.883832424131799, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.9739424637175664, 16);
  sqcRYGate(q, 1.7302563863637783, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.0729176315110656, 16);
  sqcRYGate(q, 1.7522865007503974, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.1736340334848574, 18);
  sqcRYGate(q, 3.0969769027338776, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.4970791515449147, 18);
  sqcRYGate(q, -2.084630838390975, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -3.118611594316122, 0);
  sqcRYGate(q, -2.8298468132285586, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2063487112907954, 0);
  sqcRYGate(q, -1.3351577749720454, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.41187420260005986, 2);
  sqcRYGate(q, 1.6251631288593504, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.1136946598188677, 2);
  sqcRYGate(q, -2.537242568960643, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.1797315012380127, 4);
  sqcRYGate(q, -0.16792775733610824, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.00877036804939509, 4);
  sqcRYGate(q, -0.0002601627775904447, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2035558154754649, 6);
  sqcRYGate(q, -0.626602952559737, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.3095021546008683, 6);
  sqcRYGate(q, 0.8489714618596711, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.9269960390795577, 8);
  sqcRYGate(q, 1.3962741246832222, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.572507285275833, 8);
  sqcRYGate(q, -0.031456183605167005, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.9441159498801257, 10);
  sqcRYGate(q, -2.585693609257182, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.04625454122109079, 10);
  sqcRYGate(q, 0.042595732351408344, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.2629871201087228, 12);
  sqcRYGate(q, -1.2866541145628547, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -3.126625026803083, 12);
  sqcRYGate(q, 0.010965453969409535, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.9813950876601942, 14);
  sqcRYGate(q, 0.7770431232913015, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -3.1367572962084584, 14);
  sqcRYGate(q, 3.134931591742065, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -1.3309581123471759, 16);
  sqcRYGate(q, -1.5952408620457295, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 2.3592121966891964, 16);
  sqcRYGate(q, -3.105340046478062, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -2.1349150786420363, 1);
  sqcRYGate(q, -0.0003723941791230913, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2408931706393291, 1);
  sqcRYGate(q, -1.8441007194920684, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3915529443173975, 3);
  sqcRYGate(q, 1.220194444321744, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.02301468919672986, 3);
  sqcRYGate(q, 0.2693370363452052, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8052473189609213, 5);
  sqcRYGate(q, 2.895933534656741, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.007367856998814255, 5);
  sqcRYGate(q, 0.048894698860016975, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.4056125873060482, 7);
  sqcRYGate(q, 2.1335197370023007, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.1386762210090042, 7);
  sqcRYGate(q, -0.006116117107691797, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.626235958591758, 9);
  sqcRYGate(q, 1.3185328266892675, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.0329530396896682, 9);
  sqcRYGate(q, -1.596797504183557, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.3125542640724086, 11);
  sqcRYGate(q, -2.9550024296694652, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.141525190257534, 11);
  sqcRYGate(q, -3.141523407381191, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.3028686411380868, 13);
  sqcRYGate(q, 2.499509637835392, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.08877694747057432, 13);
  sqcRYGate(q, -0.03532555975953677, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.9270347386909803, 15);
  sqcRYGate(q, -0.43489901604373227, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 3.1277071692405802, 15);
  sqcRYGate(q, -3.0994354696756212, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -2.579482716172887, 17);
  sqcRYGate(q, 2.0517834712862073, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 1.434050055866298, 17);
  sqcRYGate(q, 3.084746183963667, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 2.0815730172529747, 0);
  sqcRYGate(q, -0.27671131079957867, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.30666972730106395, 0);
  sqcRYGate(q, 0.012793594612356178, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1197486304913045, 1);
  sqcRYGate(q, -1.8504856807681733, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.655022211710034, 1);
  sqcRYGate(q, 2.738789472761185, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6694648422684153, 2);
  sqcRYGate(q, -0.6604150324358962, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 3.106026289474324, 2);
  sqcRYGate(q, 0.00254841065404758, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.5090534931658856, 3);
  sqcRYGate(q, -0.09096223687832072, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.026432356855511152, 3);
  sqcRYGate(q, 2.2225307425120606, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.683079635596017, 4);
  sqcRYGate(q, 1.3214028135576226, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.3664344979493293, 4);
  sqcRYGate(q, -3.1389443718929853, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.5724547563641016, 5);
  sqcRYGate(q, 1.4170743620253523, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0076117663810364045, 5);
  sqcRYGate(q, 3.0936895822646933, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8284145745043932, 6);
  sqcRYGate(q, 1.7889189511862535, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 3.1263710557564997, 6);
  sqcRYGate(q, 1.9435225103804692, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 1.7649463241262087, 7);
  sqcRYGate(q, 2.2200182348291486, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0001514408489060304, 7);
  sqcRYGate(q, 1.5972954099185823, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7532861066395524, 8);
  sqcRYGate(q, 2.759612194590598, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -1.57775707909508, 8);
  sqcRYGate(q, 1.593823881188806, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -1.576515547749345, 9);
  sqcRYGate(q, 0.886874399037967, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.003357450821494667, 9);
  sqcRYGate(q, 0.0036103607198464866, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.24816243970811946, 10);
  sqcRYGate(q, -2.324378170906642, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -2.8629206614145732, 10);
  sqcRYGate(q, -3.1272972915008266, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -0.2646711588470666, 11);
  sqcRYGate(q, -1.6130308344948796, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.062826599294125, 11);
  sqcRYGate(q, 3.1414913252992314, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.3346242998433206, 12);
  sqcRYGate(q, -2.1582195664249206, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, 3.067036897068875, 12);
  sqcRYGate(q, -3.0840807658788165, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, 2.838395093264478, 13);
  sqcRYGate(q, -2.842837163477423, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.1140840471353433, 13);
  sqcRYGate(q, -3.1300812630897927, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.9089940742722717, 14);
  sqcRYGate(q, -2.168507081356537, 17);
  sqcCXGate(q, 14, 17);
  sqcRYGate(q, -3.095835311502798, 14);
  sqcRYGate(q, -3.12981054899991, 17);
  sqcCXGate(q, 14, 17);
  sqcRYGate(q, -2.9884033555011045, 15);
  sqcRYGate(q, -1.2411287090796734, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -3.0790621643674125, 15);
  sqcRYGate(q, 0.032755185656155206, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.8340398170412808, 16);
  sqcRYGate(q, -1.8960146646462093, 19);
  sqcCXGate(q, 16, 19);
  sqcRYGate(q, -0.05019069515450081, 16);
  sqcRYGate(q, -0.03501450901710346, 19);
  sqcCXGate(q, 16, 19);
  sqcRYGate(q, 2.7173050216032104, 17);
  sqcRYGate(q, 3.1084397484756057, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.336158953258361, 17);
  sqcRYGate(q, -3.070859362164502, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.1927389383914182, 0);
  sqcRYGate(q, -2.0531785543694934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7587566688599878, 0);
  sqcRYGate(q, 1.213763254431293, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8977563604766634, 2);
  sqcRYGate(q, -0.6414542646558994, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4557730059450151, 2);
  sqcRYGate(q, 2.046920206935754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.435312347462846, 4);
  sqcRYGate(q, 0.667567802778926, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.04969178911145312, 4);
  sqcRYGate(q, -0.0016918817025075585, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5081098921098066, 6);
  sqcRYGate(q, -3.1304772146592725, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5751581175994742, 6);
  sqcRYGate(q, -1.57025002434652, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.014753428424893095, 8);
  sqcRYGate(q, -1.7326374708750538, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.0016805664735412538, 8);
  sqcRYGate(q, -0.00037243746390203114, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.2680797956172558, 10);
  sqcRYGate(q, 1.5532661486145694, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.002881361746527311, 10);
  sqcRYGate(q, -0.17149401022939426, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8786069471351432, 12);
  sqcRYGate(q, -1.6970553961701222, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.6531979528953702, 12);
  sqcRYGate(q, 2.0046413695667096, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.0978644847790244, 14);
  sqcRYGate(q, 1.75478770608464, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.8326009717058146, 14);
  sqcRYGate(q, 1.3287594633212352, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.27666973043279786, 16);
  sqcRYGate(q, 0.7514645655034764, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.602105414812183, 16);
  sqcRYGate(q, -0.19274843325165092, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -3.1370273029391496, 18);
  sqcRYGate(q, 0.3420590936387132, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.644915457983381, 18);
  sqcRYGate(q, -2.0953099748213333, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.9078505085922648, 0);
  sqcRYGate(q, 2.5596068124763613, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8451325075483793, 0);
  sqcRYGate(q, 0.42435035830004875, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1762490890543031, 2);
  sqcRYGate(q, 0.8066570490414845, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1415508618323065, 2);
  sqcRYGate(q, 0.35263192456480086, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.932970623647779, 4);
  sqcRYGate(q, 3.129480981139933, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.376568472817518, 4);
  sqcRYGate(q, 3.1366973124899293, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5804104698772683, 6);
  sqcRYGate(q, 1.2725437613510113, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.134468309833506, 6);
  sqcRYGate(q, 2.3919708622637095, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.2258071827910193, 8);
  sqcRYGate(q, -1.0174572089969054, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.1405600401160143, 8);
  sqcRYGate(q, 3.140559201109165, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.1549667395938457, 10);
  sqcRYGate(q, 0.9721894366590578, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.098770732057644, 10);
  sqcRYGate(q, 3.1153705272778236, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.9999369292078106, 12);
  sqcRYGate(q, 3.0867811247220796, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.11619880042464, 12);
  sqcRYGate(q, 3.131091954395435, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.1158409081315668, 14);
  sqcRYGate(q, 0.3123679527754941, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -3.0893117726420676, 14);
  sqcRYGate(q, -3.110185380269048, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -2.9759241785121686, 16);
  sqcRYGate(q, 1.6438924504698065, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 3.1367853691691887, 16);
  sqcRYGate(q, 0.08147261383333237, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.3787983696661898, 1);
  sqcRYGate(q, 0.5542206332986632, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.912774411504228, 1);
  sqcRYGate(q, 0.2837732088366251, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4448061187809937, 3);
  sqcRYGate(q, -1.6754295816015272, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.12117356067505991, 3);
  sqcRYGate(q, -0.0034106639470829715, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.01590215578665255, 5);
  sqcRYGate(q, -1.8232800809653964, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.0006683873405731681, 5);
  sqcRYGate(q, 0.00022947575631942168, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.3139405996223763, 7);
  sqcRYGate(q, -1.948159171529829, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.531338667168046, 7);
  sqcRYGate(q, 1.1994616108989975, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.015914198928466128, 9);
  sqcRYGate(q, 2.390845170060356, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.031392241876770824, 9);
  sqcRYGate(q, 1.5806158284314151, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.308323891542997, 11);
  sqcRYGate(q, -1.4461959625681606, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.8867313146302465, 11);
  sqcRYGate(q, -3.1412765284891537, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.6010342540047413, 13);
  sqcRYGate(q, 1.5193711744127711, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.009041732728329421, 13);
  sqcRYGate(q, -3.128140979474303, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -3.1389275498925384, 15);
  sqcRYGate(q, -2.6226340321838513, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 3.1260549285172434, 15);
  sqcRYGate(q, -3.1207971632258897, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -2.081884123677307, 17);
  sqcRYGate(q, 1.3882781493188867, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -3.0463988193683367, 17);
  sqcRYGate(q, -3.0960789058628175, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -2.4443439610207442, 0);
  sqcRYGate(q, 3.0682840377083562, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.1266460272719865, 0);
  sqcRYGate(q, -0.3930607762244446, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0912037134819643, 1);
  sqcRYGate(q, -1.6290308123699218, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8976833122368473, 1);
  sqcRYGate(q, 0.27634281625774726, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8007445645512763, 2);
  sqcRYGate(q, -0.04595195066877309, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.14283716239779132, 2);
  sqcRYGate(q, 3.140803189089153, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.556448682517054, 3);
  sqcRYGate(q, -0.4503626037155941, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.012645559739624931, 3);
  sqcRYGate(q, 0.027111324898131173, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0450997527963386, 4);
  sqcRYGate(q, 2.7735670783308333, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.14141604264024, 4);
  sqcRYGate(q, -0.0009336264321601936, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.113921082225332, 5);
  sqcRYGate(q, 2.6728287734211724, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.000303030897777782, 5);
  sqcRYGate(q, 0.0011693307864653858, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4709456984739357, 6);
  sqcRYGate(q, 2.3863787553550155, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 3.135016129708145, 6);
  sqcRYGate(q, -1.6078476863246098, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 2.0843954383777015, 7);
  sqcRYGate(q, 1.629005856619488, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5329505131897854, 7);
  sqcRYGate(q, 3.1391550475950614, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.0962354646961314, 8);
  sqcRYGate(q, 1.6175832036729858, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.004946387066825153, 8);
  sqcRYGate(q, 1.8525527830357846, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 2.604431919493356, 9);
  sqcRYGate(q, 2.257809879854646, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.0166530515096337, 9);
  sqcRYGate(q, 3.113033217235669, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.504112215059757, 10);
  sqcRYGate(q, -1.4464183071050227, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -0.20437337787396093, 10);
  sqcRYGate(q, 0.0178744973021272, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 1.2448780741377576, 11);
  sqcRYGate(q, -0.9976301956505651, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.9436549237195755, 11);
  sqcRYGate(q, -0.0034660122181102075, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.1581108204070727, 12);
  sqcRYGate(q, 2.8815034458311746, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, 3.1395674739158794, 12);
  sqcRYGate(q, 0.00411246636090823, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -2.8963072678990027, 13);
  sqcRYGate(q, 0.5184422087066355, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.012093716099576213, 13);
  sqcRYGate(q, 3.126732516888968, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.9469293303377445, 14);
  sqcRYGate(q, 1.5308921766804795, 17);
  sqcCXGate(q, 14, 17);
  sqcRYGate(q, -0.00471738189013049, 14);
  sqcRYGate(q, -3.133480763178556, 17);
  sqcCXGate(q, 14, 17);
  sqcRYGate(q, -0.7314622061788246, 15);
  sqcRYGate(q, 0.9445944443824734, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.114485007585193, 15);
  sqcRYGate(q, -0.020250742885970296, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.062489189154177, 16);
  sqcRYGate(q, 2.6666189949896464, 19);
  sqcCXGate(q, 16, 19);
  sqcRYGate(q, -0.012579547020996174, 16);
  sqcRYGate(q, 3.0839909477560496, 19);
  sqcCXGate(q, 16, 19);
  sqcRYGate(q, -2.3633258818182465, 17);
  sqcRYGate(q, 1.7461882757629086, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.10955332453194355, 17);
  sqcRYGate(q, -0.061971411967526535, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.5597793669250315, 0);
  sqcRYGate(q, -0.45723452547150084, 1);
  sqcRYGate(q, -0.3340585322522811, 2);
  sqcRYGate(q, 2.1526254321349314, 3);
  sqcRYGate(q, 0.9287429664251501, 4);
  sqcRYGate(q, -0.03115972319317795, 5);
  sqcRYGate(q, 0.6254189948487072, 6);
  sqcRYGate(q, 1.3671538464714024, 7);
  sqcRYGate(q, 2.000209313373417, 8);
  sqcRYGate(q, -2.4755312208166522, 9);
  sqcRYGate(q, 0.6411353238218167, 10);
  sqcRYGate(q, 0.43935649970443874, 11);
  sqcRYGate(q, -1.5727384793880077, 12);
  sqcRYGate(q, -0.10991278122007041, 13);
  sqcRYGate(q, -0.7985673013609283, 14);
  sqcRYGate(q, 1.3424023221594235, 15);
  sqcRYGate(q, 1.055644449623854, 16);
  sqcRYGate(q, -1.738510001852609, 17);
  sqcRYGate(q, -0.4962615560163144, 18);
  sqcRYGate(q, -0.11018586104448591, 19);

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
