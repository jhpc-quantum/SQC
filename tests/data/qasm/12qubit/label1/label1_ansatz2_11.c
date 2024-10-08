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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.003059449331129116, 0);
  sqcRZGate(q, 2.710231207602783, 0);
  sqcRYGate(q, -0.06073909941537892, 1);
  sqcRZGate(q, -2.9984874872516643, 1);
  sqcRYGate(q, -6.818848179257486e-05, 2);
  sqcRZGate(q, 1.9464574626136555, 2);
  sqcRYGate(q, -0.009804020433209715, 3);
  sqcRZGate(q, 0.1687823582034776, 3);
  sqcRYGate(q, 0.005718050809844265, 4);
  sqcRZGate(q, 2.8878637430548726, 4);
  sqcRYGate(q, 3.106231264666368, 5);
  sqcRZGate(q, -0.04589108905076067, 5);
  sqcRYGate(q, -0.4528319105024279, 6);
  sqcRZGate(q, 0.01450698549757433, 6);
  sqcRYGate(q, -0.007139997080397784, 7);
  sqcRZGate(q, 1.1977417433132684, 7);
  sqcRYGate(q, -2.143681887489803, 8);
  sqcRZGate(q, -0.02786031390297783, 8);
  sqcRYGate(q, -0.3206664583844825, 9);
  sqcRZGate(q, -3.106866745211936, 9);
  sqcRYGate(q, -3.099567212110591, 10);
  sqcRZGate(q, -0.09085939868983771, 10);
  sqcRYGate(q, -0.010151300715930844, 11);
  sqcRZGate(q, 1.6058549142556302, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.1415300785096916, 0);
  sqcRZGate(q, 1.3115554954318565, 0);
  sqcRYGate(q, -1.462456399346773, 1);
  sqcRZGate(q, -0.012868514939810649, 1);
  sqcRYGate(q, 4.738242354579527e-05, 2);
  sqcRZGate(q, -1.2150647356691016, 2);
  sqcRYGate(q, -0.04539290121601949, 3);
  sqcRZGate(q, -1.5516401110751392, 3);
  sqcRYGate(q, -3.138943077599402, 4);
  sqcRZGate(q, -1.7868836605541367, 4);
  sqcRYGate(q, 0.12206454313067681, 5);
  sqcRZGate(q, 1.5493707688847984, 5);
  sqcRYGate(q, -0.5304432757423935, 6);
  sqcRZGate(q, -1.5906918237348782, 6);
  sqcRYGate(q, -0.01310422822333468, 7);
  sqcRZGate(q, 2.6060632186954282, 7);
  sqcRYGate(q, 2.5006587465946555, 8);
  sqcRZGate(q, 1.534620393523113, 8);
  sqcRYGate(q, 1.689415570504936, 9);
  sqcRZGate(q, -0.6153938892624711, 9);
  sqcRYGate(q, -1.9473667804878634, 10);
  sqcRZGate(q, 0.7973396163134714, 10);
  sqcRYGate(q, -1.5706798458459055, 11);
  sqcRZGate(q, 0.9145610271585038, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.117665551028397, 0);
  sqcRZGate(q, 0.6844946876909859, 0);
  sqcRYGate(q, 1.5649163487011075, 1);
  sqcRZGate(q, 1.6779368586449923, 1);
  sqcRYGate(q, 0.00013666974697099213, 2);
  sqcRZGate(q, 2.357142753484583, 2);
  sqcRYGate(q, -2.5872374199892585, 3);
  sqcRZGate(q, 0.019489231971691154, 3);
  sqcRYGate(q, 2.9283019612170174, 4);
  sqcRZGate(q, 1.5517542866073335, 4);
  sqcRYGate(q, -2.1990775452287052, 5);
  sqcRZGate(q, 2.995818725466104, 5);
  sqcRYGate(q, -2.865363213395743, 6);
  sqcRZGate(q, -2.324085838826544, 6);
  sqcRYGate(q, -0.18867148582461457, 7);
  sqcRZGate(q, -1.8310354619148068, 7);
  sqcRYGate(q, -3.004869930486657, 8);
  sqcRZGate(q, 2.9496411428293094, 8);
  sqcRYGate(q, -0.003847133915715791, 9);
  sqcRZGate(q, 2.154546028365786, 9);
  sqcRYGate(q, 0.0019659998831783442, 10);
  sqcRZGate(q, -2.43590200347215, 10);
  sqcRYGate(q, -3.140216554984563, 11);
  sqcRZGate(q, 2.476147125186585, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.062366853791392, 0);
  sqcRZGate(q, -1.6000985770829832, 0);
  sqcRYGate(q, 1.7786171351466278, 1);
  sqcRZGate(q, 1.5819322968571834, 1);
  sqcRYGate(q, 3.1415529945036837, 2);
  sqcRZGate(q, -1.9948693718598143, 2);
  sqcRYGate(q, -2.728963229213415, 3);
  sqcRZGate(q, -1.3014144523834605, 3);
  sqcRYGate(q, 1.5233499775942887, 4);
  sqcRZGate(q, 0.42485937185478073, 4);
  sqcRYGate(q, -3.0237227785387155, 5);
  sqcRZGate(q, -2.09374040285663, 5);
  sqcRYGate(q, -0.0005580546914178838, 6);
  sqcRZGate(q, 0.25527835776188385, 6);
  sqcRYGate(q, 0.038747965800078, 7);
  sqcRZGate(q, -2.711524185069335, 7);
  sqcRYGate(q, -3.1297405746214206, 8);
  sqcRZGate(q, -2.1840241425164195, 8);
  sqcRYGate(q, -3.122836728563849, 9);
  sqcRZGate(q, -1.876417100897469, 9);
  sqcRYGate(q, -0.030321858800094432, 10);
  sqcRZGate(q, 1.569741220759295, 10);
  sqcRYGate(q, -1.668188842656483, 11);
  sqcRZGate(q, -1.5606837332007935, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 2.237636273929952, 0);
  sqcRZGate(q, -0.030084341758611643, 0);
  sqcRYGate(q, -1.8797953720106575, 1);
  sqcRZGate(q, -1.696161457173146, 1);
  sqcRYGate(q, 0.0001253251237116615, 2);
  sqcRZGate(q, 2.4808247477305923, 2);
  sqcRYGate(q, 2.21696454807019, 3);
  sqcRZGate(q, 3.1384047261659656, 3);
  sqcRYGate(q, -1.448654178281739, 4);
  sqcRZGate(q, -1.117410412195646, 4);
  sqcRYGate(q, 2.9933612247119856, 5);
  sqcRZGate(q, -2.574829929279696, 5);
  sqcRYGate(q, 3.1272183638333235, 6);
  sqcRZGate(q, 0.011083309268870798, 6);
  sqcRYGate(q, -1.647689709493364, 7);
  sqcRZGate(q, 0.013204920118899816, 7);
  sqcRYGate(q, -0.007405805565099276, 8);
  sqcRZGate(q, 0.35263039827319614, 8);
  sqcRYGate(q, 0.002610143254607955, 9);
  sqcRZGate(q, 2.450665851530223, 9);
  sqcRYGate(q, 1.554050288399861, 10);
  sqcRZGate(q, 2.840266245622525, 10);
  sqcRYGate(q, 2.8312679438946824, 11);
  sqcRZGate(q, 1.5866344556374878, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -2.267953030159843, 0);
  sqcRZGate(q, -0.03253720151343486, 0);
  sqcRYGate(q, -3.133414867584539, 1);
  sqcRZGate(q, 1.4416729663860093, 1);
  sqcRYGate(q, -3.141436724267504, 2);
  sqcRZGate(q, 0.314005264955501, 2);
  sqcRYGate(q, 2.736937565670557, 3);
  sqcRZGate(q, 0.023234530340077168, 3);
  sqcRYGate(q, -3.040703667268438, 4);
  sqcRZGate(q, -2.9808962833270956, 4);
  sqcRYGate(q, -3.1066911405708635, 5);
  sqcRZGate(q, -0.49531904506098096, 5);
  sqcRYGate(q, 3.139340146304411, 6);
  sqcRZGate(q, -0.03349880431668236, 6);
  sqcRYGate(q, -0.25685959942070635, 7);
  sqcRZGate(q, -2.6643211919705294, 7);
  sqcRYGate(q, 0.001911910807871564, 8);
  sqcRZGate(q, 0.0029412686309315816, 8);
  sqcRYGate(q, -3.1413227160975716, 9);
  sqcRZGate(q, 1.9370215982419765, 9);
  sqcRYGate(q, 0.013643180238557403, 10);
  sqcRZGate(q, 0.9796751225472357, 10);
  sqcRYGate(q, -0.0023666320380266725, 11);
  sqcRZGate(q, 1.5630213859104114, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -1.5231918226843568, 0);
  sqcRZGate(q, 0.5381034414361361, 0);
  sqcRYGate(q, -3.017812048417252, 1);
  sqcRZGate(q, 2.3989546771977692, 1);
  sqcRYGate(q, -1.570869311331799, 2);
  sqcRZGate(q, 3.141540424576453, 2);
  sqcRYGate(q, -2.5343387481446014, 3);
  sqcRZGate(q, 1.3383951431303185, 3);
  sqcRYGate(q, 2.9398815576979485, 4);
  sqcRZGate(q, -1.7968776065602938, 4);
  sqcRYGate(q, -3.107228880988722, 5);
  sqcRZGate(q, -0.30169994067641104, 5);
  sqcRYGate(q, 0.0005401823072279655, 6);
  sqcRZGate(q, 2.337406500766412, 6);
  sqcRYGate(q, 3.128456262324609, 7);
  sqcRZGate(q, -2.4425381005874587, 7);
  sqcRYGate(q, 3.140713877583175, 8);
  sqcRZGate(q, -0.006008607387153798, 8);
  sqcRYGate(q, -0.0019221989159308754, 9);
  sqcRZGate(q, 0.06819225655058073, 9);
  sqcRYGate(q, -3.132036721423012, 10);
  sqcRZGate(q, 2.248337410059034, 10);
  sqcRYGate(q, 3.023139316980125, 11);
  sqcRZGate(q, 1.8690149165625993, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.000125518740364788, 0);
  sqcRZGate(q, 2.337781198609011, 0);
  sqcRYGate(q, 3.1415905583823838, 1);
  sqcRZGate(q, -2.339466018191116, 1);
  sqcRYGate(q, -1.571083403262942, 2);
  sqcRZGate(q, -0.33290973597396256, 2);
  sqcRYGate(q, -3.141509488747907, 3);
  sqcRZGate(q, 0.6410087955371724, 3);
  sqcRYGate(q, 3.141509256388685, 4);
  sqcRZGate(q, 1.1105152688379567, 4);
  sqcRYGate(q, -1.9903300043644382e-05, 5);
  sqcRZGate(q, 2.4731683083881557, 5);
  sqcRYGate(q, 0.00010749854652480906, 6);
  sqcRZGate(q, -0.41908645903450165, 6);
  sqcRYGate(q, -3.1412399336886105, 7);
  sqcRZGate(q, -2.816184800329149, 7);
  sqcRYGate(q, 3.1414940369475732, 8);
  sqcRZGate(q, -2.189443150267194, 8);
  sqcRYGate(q, 3.1415612533338595, 9);
  sqcRZGate(q, 1.523832129550848, 9);
  sqcRYGate(q, -1.5707000380863017, 10);
  sqcRZGate(q, -1.7640131994970556, 10);
  sqcRYGate(q, 9.082068505429755e-05, 11);
  sqcRZGate(q, 0.2916096142458296, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.0008270954955797387, 0);
  sqcRZGate(q, 2.9386256268466284, 0);
  sqcRYGate(q, 1.5710371785111887, 1);
  sqcRZGate(q, -2.3211299297224866, 1);
  sqcRYGate(q, -0.0019385853920574903, 2);
  sqcRZGate(q, -1.71771388440696, 2);
  sqcRYGate(q, 3.1379807000466644, 3);
  sqcRZGate(q, -0.27932071530962227, 3);
  sqcRYGate(q, -0.723512486914645, 4);
  sqcRZGate(q, -3.0433165351462694, 4);
  sqcRYGate(q, 0.3545070110289443, 5);
  sqcRZGate(q, -0.2811070951046439, 5);
  sqcRYGate(q, -3.079680452616346, 6);
  sqcRZGate(q, 0.5640972435729729, 6);
  sqcRYGate(q, -0.4528449163772204, 7);
  sqcRZGate(q, -1.7197435000314256, 7);
  sqcRYGate(q, 3.0351595759490637, 8);
  sqcRZGate(q, 1.2257805135078277, 8);
  sqcRYGate(q, 0.18931499976714683, 9);
  sqcRZGate(q, -2.483547129367542, 9);
  sqcRYGate(q, 3.1401083656820625, 10);
  sqcRZGate(q, -1.764027186580207, 10);
  sqcRYGate(q, -3.118424202388917, 11);
  sqcRZGate(q, 1.2419782904152452, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.983897034740778e-05, 0);
  sqcRZGate(q, -1.8070670953603987, 0);
  sqcRYGate(q, 3.141446087870792, 1);
  sqcRZGate(q, 0.9201881517397705, 1);
  sqcRYGate(q, -3.141565323885922, 2);
  sqcRZGate(q, -2.3691812872629234, 2);
  sqcRYGate(q, -5.17724558217873e-05, 3);
  sqcRZGate(q, 1.509659374496099, 3);
  sqcRYGate(q, 3.156829558123754e-06, 4);
  sqcRZGate(q, -0.6328258268618806, 4);
  sqcRYGate(q, -2.267914463537462e-05, 5);
  sqcRZGate(q, 0.4573912289795617, 5);
  sqcRYGate(q, -3.141565281460677, 6);
  sqcRZGate(q, -2.480674688998481, 6);
  sqcRYGate(q, -1.5707892791681684, 7);
  sqcRZGate(q, -3.9833521814637796e-07, 7);
  sqcRYGate(q, 3.141552420804752, 8);
  sqcRZGate(q, -1.1481459110047794, 8);
  sqcRYGate(q, -0.00010609183174636883, 9);
  sqcRZGate(q, -2.6299849717755066, 9);
  sqcRYGate(q, -1.5708473613121514, 10);
  sqcRZGate(q, -1.6003408476543786, 10);
  sqcRYGate(q, 2.5063855016327352e-05, 11);
  sqcRZGate(q, 2.2221377017224775, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.028764002354267237, 0);
  sqcRZGate(q, 0.28864285702673337, 0);
  sqcRYGate(q, 1.573397592557935, 1);
  sqcRZGate(q, -0.002086125311182661, 1);
  sqcRYGate(q, 0.0024756203687450293, 2);
  sqcRZGate(q, -2.3129810457578297, 2);
  sqcRYGate(q, 0.032582714024017356, 3);
  sqcRZGate(q, -0.02520747034300275, 3);
  sqcRYGate(q, 3.1299763640968066, 4);
  sqcRZGate(q, -2.7577962061823182, 4);
  sqcRYGate(q, -0.011313770988323313, 5);
  sqcRZGate(q, -2.2728781145788624, 5);
  sqcRYGate(q, -0.006777075059744674, 6);
  sqcRZGate(q, 0.08668953621833797, 6);
  sqcRYGate(q, -1.5708142997198808, 7);
  sqcRZGate(q, -0.3698419323273171, 7);
  sqcRYGate(q, 0.008955100737909838, 8);
  sqcRZGate(q, 3.0598229310496197, 8);
  sqcRYGate(q, -3.137693172649469, 9);
  sqcRZGate(q, 1.2897417364140158, 9);
  sqcRYGate(q, 2.0963175631232476, 10);
  sqcRZGate(q, 1.9235019168315493, 10);
  sqcRYGate(q, 0.0006273740337964503, 11);
  sqcRZGate(q, 0.5729165748849153, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.1409361097433948, 0);
  sqcRZGate(q, -0.7746642278319786, 0);
  sqcRYGate(q, 1.576285217282317, 1);
  sqcRZGate(q, -2.7703297833045393, 1);
  sqcRYGate(q, -3.140457591549804, 2);
  sqcRZGate(q, 1.510099275896638, 2);
  sqcRYGate(q, -0.035200951294375164, 3);
  sqcRZGate(q, -2.971889166176634, 3);
  sqcRYGate(q, -0.12414735350616367, 4);
  sqcRZGate(q, 0.5524567748537729, 4);
  sqcRYGate(q, 0.14701559087563384, 5);
  sqcRZGate(q, -0.9935255108166418, 5);
  sqcRYGate(q, -0.8373232980305714, 6);
  sqcRZGate(q, -2.6960768642915096, 6);
  sqcRYGate(q, -1.5708254001885835, 7);
  sqcRZGate(q, -3.141524427426203, 7);
  sqcRYGate(q, 0.9262402851807714, 8);
  sqcRZGate(q, -2.265726210952395, 8);
  sqcRYGate(q, 1.9313843486023579, 9);
  sqcRZGate(q, -2.264990730070225, 9);
  sqcRYGate(q, 2.9655693154508254, 10);
  sqcRZGate(q, -1.2028062001178617, 10);
  sqcRYGate(q, 0.3365463505832296, 11);
  sqcRZGate(q, -1.3415091872367446, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.1415516132530574, 0);
  sqcRZGate(q, -1.667326921066936, 0);
  sqcRYGate(q, 4.7005888457707586e-05, 1);
  sqcRZGate(q, 2.6988508664355377, 1);
  sqcRYGate(q, -3.1415398582214102, 2);
  sqcRZGate(q, 0.9270744591031495, 2);
  sqcRYGate(q, 3.1415885325406117, 3);
  sqcRZGate(q, 2.0251279428491213, 3);
  sqcRYGate(q, -1.0357870420041039e-05, 4);
  sqcRZGate(q, 0.07668214882172551, 4);
  sqcRYGate(q, 5.161444061307918e-05, 5);
  sqcRZGate(q, 1.6322480921238063, 5);
  sqcRYGate(q, 6.683012735574144e-05, 6);
  sqcRZGate(q, -1.7759822065583135, 6);
  sqcRYGate(q, 1.5707199811613402, 7);
  sqcRZGate(q, -1.5715804909388797, 7);
  sqcRYGate(q, 3.141586228906174, 8);
  sqcRZGate(q, 2.695835462448919, 8);
  sqcRYGate(q, -3.1415805341761796, 9);
  sqcRZGate(q, 2.3507560560293674, 9);
  sqcRYGate(q, -1.5707509149061887, 10);
  sqcRZGate(q, -1.5748660640251826, 10);
  sqcRYGate(q, -4.535611666228471e-05, 11);
  sqcRZGate(q, -3.0572846095267754, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.140676249819593, 0);
  sqcRZGate(q, 0.48510933476760865, 0);
  sqcRYGate(q, -1.6495390320301198, 1);
  sqcRZGate(q, 2.22174825971534, 1);
  sqcRYGate(q, -0.010502077983922218, 2);
  sqcRZGate(q, -2.4503402948683624, 2);
  sqcRYGate(q, -3.124622946725222, 3);
  sqcRZGate(q, -0.32328425661751675, 3);
  sqcRYGate(q, 2.426429776165168, 4);
  sqcRZGate(q, 0.7576013917793034, 4);
  sqcRYGate(q, -0.380966488074999, 5);
  sqcRZGate(q, 0.4046167748321002, 5);
  sqcRYGate(q, 3.1232328519749046, 6);
  sqcRZGate(q, 2.586501439473567, 6);
  sqcRYGate(q, -1.5184422784393539, 7);
  sqcRZGate(q, -0.7736143070728093, 7);
  sqcRYGate(q, 2.934682247675372, 8);
  sqcRZGate(q, -0.18975134445020012, 8);
  sqcRYGate(q, 0.521300674747799, 9);
  sqcRZGate(q, -1.4226660401862994, 9);
  sqcRYGate(q, 0.0853641365382982, 10);
  sqcRZGate(q, 1.574967429226028, 10);
  sqcRYGate(q, -1.5419614071194934, 11);
  sqcRZGate(q, 2.4074137768865684, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.1415751600169597, 0);
  sqcRZGate(q, -1.5162812429645705, 0);
  sqcRYGate(q, 5.82636599337899e-05, 1);
  sqcRZGate(q, 0.7756111027450733, 1);
  sqcRYGate(q, -3.14154856789481, 2);
  sqcRZGate(q, 2.027064257807969, 2);
  sqcRYGate(q, -2.464937184054605e-05, 3);
  sqcRZGate(q, 1.7078574074725708, 3);
  sqcRYGate(q, -2.0449967937867343e-05, 4);
  sqcRZGate(q, -0.6260306708205126, 4);
  sqcRYGate(q, 3.1415551478955672, 5);
  sqcRZGate(q, 0.5706497732991661, 5);
  sqcRYGate(q, 3.1415709214824674, 6);
  sqcRZGate(q, 0.35563274709757253, 6);
  sqcRYGate(q, 3.141570812671094, 7);
  sqcRZGate(q, 0.37649513219567404, 7);
  sqcRYGate(q, 3.141564467498578, 8);
  sqcRZGate(q, 0.7061071449352795, 8);
  sqcRYGate(q, -8.507407545355995e-05, 9);
  sqcRZGate(q, 2.686643433726318, 9);
  sqcRYGate(q, -1.5709689363005186, 10);
  sqcRZGate(q, -1.9890960561285624, 10);
  sqcRYGate(q, 0.00012093930044265733, 11);
  sqcRZGate(q, 0.3899197207939271, 11);

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
