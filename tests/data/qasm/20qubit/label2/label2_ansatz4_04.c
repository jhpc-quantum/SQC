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

  sqcRYGate(q, 3.135405981468049, 0);
  sqcRZGate(q, -1.9548980227345139, 0);
  sqcRYGate(q, -0.03566337256567654, 1);
  sqcRZGate(q, -1.2378507182171, 1);
  sqcRYGate(q, 1.6121043139594553, 2);
  sqcRZGate(q, 1.329751633593366, 2);
  sqcRYGate(q, -1.5392932192622777, 3);
  sqcRZGate(q, 1.4673371471577106, 3);
  sqcRYGate(q, 3.1127517417181156, 4);
  sqcRZGate(q, 0.891215000397362, 4);
  sqcRYGate(q, 0.02667757313532411, 5);
  sqcRZGate(q, 3.0939667110995317, 5);
  sqcRYGate(q, 0.14519360759590272, 6);
  sqcRZGate(q, 1.4982099248841392, 6);
  sqcRYGate(q, -1.884505955672733, 7);
  sqcRZGate(q, -1.5677641198776888, 7);
  sqcRYGate(q, 1.3990689596472323, 8);
  sqcRZGate(q, -0.3686208767354815, 8);
  sqcRYGate(q, -1.617101734288472, 9);
  sqcRZGate(q, -2.813825218617013, 9);
  sqcRYGate(q, -1.5719583132986985, 10);
  sqcRZGate(q, 3.060067762288518, 10);
  sqcRYGate(q, -1.5685977630910024, 11);
  sqcRZGate(q, 1.028616048715296, 11);
  sqcRYGate(q, -1.5690765913041458, 12);
  sqcRZGate(q, -1.5522650620499274, 12);
  sqcRYGate(q, -0.1715118034524874, 13);
  sqcRZGate(q, 0.04077864370072006, 13);
  sqcRYGate(q, 3.141588715263698, 14);
  sqcRZGate(q, 1.6151750404713052, 14);
  sqcRYGate(q, -3.1415772591603557, 15);
  sqcRZGate(q, -1.9077889422447836, 15);
  sqcRYGate(q, 1.5562192580394385, 16);
  sqcRZGate(q, -1.7427174555804976, 16);
  sqcRYGate(q, -1.5776006708215393, 17);
  sqcRZGate(q, 1.8323119773450445, 17);
  sqcRYGate(q, -3.0955062336163697, 18);
  sqcRZGate(q, -2.381513615183019, 18);
  sqcRYGate(q, -3.0888395027098157, 19);
  sqcRZGate(q, -2.1403531375651355, 19);
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
  sqcRYGate(q, 1.4845817283514213, 0);
  sqcRZGate(q, 1.2738217370033924, 0);
  sqcRYGate(q, -0.8987610260813301, 1);
  sqcRZGate(q, -1.5661773191841757, 1);
  sqcRYGate(q, -1.4555433816976493, 2);
  sqcRZGate(q, -0.9145248445232291, 2);
  sqcRYGate(q, 1.3377732506194366, 3);
  sqcRZGate(q, -2.7864622990610326, 3);
  sqcRYGate(q, 3.0765136973378935, 4);
  sqcRZGate(q, -2.9385349051965903, 4);
  sqcRYGate(q, 0.02789279251742224, 5);
  sqcRZGate(q, -1.1716238081085475, 5);
  sqcRYGate(q, 1.5015119862880522, 6);
  sqcRZGate(q, 2.544887482640607, 6);
  sqcRYGate(q, 1.5636431799190396, 7);
  sqcRZGate(q, 0.0981073999517601, 7);
  sqcRYGate(q, -3.1415474633513023, 8);
  sqcRZGate(q, -1.9460074152118325, 8);
  sqcRYGate(q, 3.141455455111615, 9);
  sqcRZGate(q, 1.898269928554579, 9);
  sqcRYGate(q, 8.37511075504338e-05, 10);
  sqcRZGate(q, 1.650655733117025, 10);
  sqcRYGate(q, -3.141535575612291, 11);
  sqcRZGate(q, 2.504876042049626, 11);
  sqcRYGate(q, -3.116275188557091, 12);
  sqcRZGate(q, -1.5545519353502066, 12);
  sqcRYGate(q, 1.5686206340594036, 13);
  sqcRZGate(q, -1.9870728333771037, 13);
  sqcRYGate(q, 3.1012365160436315, 14);
  sqcRZGate(q, -2.695058967944714, 14);
  sqcRYGate(q, -0.01243985677366373, 15);
  sqcRZGate(q, 2.58688258550385, 15);
  sqcRYGate(q, -1.5089140717389418, 16);
  sqcRZGate(q, -0.31235680432344903, 16);
  sqcRYGate(q, 1.3787513848184876, 17);
  sqcRZGate(q, -2.531555934864999, 17);
  sqcRYGate(q, 1.5519601795159175, 18);
  sqcRZGate(q, -0.054012155413468044, 18);
  sqcRYGate(q, 1.6019272959045492, 19);
  sqcRZGate(q, -2.9901759141348325, 19);
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
  sqcRYGate(q, -1.434676179127722, 0);
  sqcRZGate(q, 2.4412138495810156, 0);
  sqcRYGate(q, 1.8616378769938826, 1);
  sqcRZGate(q, 1.5088806733661473, 1);
  sqcRYGate(q, -3.0972794745724403, 2);
  sqcRZGate(q, -0.03267420329564796, 2);
  sqcRYGate(q, -0.014273150243776735, 3);
  sqcRZGate(q, -0.9015867412413971, 3);
  sqcRYGate(q, 3.132506869813214, 4);
  sqcRZGate(q, -0.7232453276757921, 4);
  sqcRYGate(q, -0.0032187891702406546, 5);
  sqcRZGate(q, 2.0734941096067496, 5);
  sqcRYGate(q, 1.7232892524779677, 6);
  sqcRZGate(q, 0.5906443556411595, 6);
  sqcRYGate(q, 0.9660112523800857, 7);
  sqcRZGate(q, -1.753595422055546, 7);
  sqcRYGate(q, -2.8871999062861318, 8);
  sqcRZGate(q, -3.040762642474327, 8);
  sqcRYGate(q, 1.8281161014099858, 9);
  sqcRZGate(q, -2.650751299986208, 9);
  sqcRYGate(q, 2.3812468988037185, 10);
  sqcRZGate(q, 1.5758525631110403, 10);
  sqcRYGate(q, -2.3753334814061624, 11);
  sqcRZGate(q, -1.9459439889001169, 11);
  sqcRYGate(q, -1.586020330614497, 12);
  sqcRZGate(q, -1.574375540018864, 12);
  sqcRYGate(q, 3.1391965350008073, 13);
  sqcRZGate(q, 2.7820934395189356, 13);
  sqcRYGate(q, 1.5928988009463287, 14);
  sqcRZGate(q, -1.5556006245996947, 14);
  sqcRYGate(q, -1.5856592250627202, 15);
  sqcRZGate(q, -0.19045732478546434, 15);
  sqcRYGate(q, -0.3274209275343506, 16);
  sqcRZGate(q, -1.0550239789353055, 16);
  sqcRYGate(q, -2.947661179007495, 17);
  sqcRZGate(q, -2.655423999970984, 17);
  sqcRYGate(q, 0.39841133667501616, 18);
  sqcRZGate(q, -0.5893465428525002, 18);
  sqcRYGate(q, -2.7424821851307817, 19);
  sqcRZGate(q, 2.582125622306938, 19);
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
  sqcRYGate(q, -2.2448044919176313, 0);
  sqcRZGate(q, 1.1996962396787534, 0);
  sqcRYGate(q, 0.5393433475707372, 1);
  sqcRZGate(q, 2.2158012615468348, 1);
  sqcRYGate(q, 0.969619708734605, 2);
  sqcRZGate(q, 1.9390386027815159, 2);
  sqcRYGate(q, 1.0551534762381891, 3);
  sqcRZGate(q, 0.7184443573498163, 3);
  sqcRYGate(q, 1.4107164448235432, 4);
  sqcRZGate(q, 0.14597261105577164, 4);
  sqcRYGate(q, -1.3966512800710085, 5);
  sqcRZGate(q, 3.0572228346805415, 5);
  sqcRYGate(q, -3.131436735185747, 6);
  sqcRZGate(q, 1.7644610113086527, 6);
  sqcRYGate(q, -1.560014239275813, 7);
  sqcRZGate(q, -1.3746154949162808, 7);
  sqcRYGate(q, -3.0951266079023205, 8);
  sqcRZGate(q, 0.30801007189468743, 8);
  sqcRYGate(q, 3.1413868569965904, 9);
  sqcRZGate(q, 0.5314317672099973, 9);
  sqcRYGate(q, -2.365645367383191, 10);
  sqcRZGate(q, 2.3902154143856924, 10);
  sqcRYGate(q, 2.340988700246573, 11);
  sqcRZGate(q, -1.8456287407064007, 11);
  sqcRYGate(q, 1.570062370910816, 12);
  sqcRZGate(q, -0.007479780392510552, 12);
  sqcRYGate(q, -1.5703014463859326, 13);
  sqcRZGate(q, 0.018500155445644314, 13);
  sqcRYGate(q, -0.1864267619868505, 14);
  sqcRZGate(q, -2.3404946430048637, 14);
  sqcRYGate(q, -2.927302500778309, 15);
  sqcRZGate(q, -0.11866723172576554, 15);
  sqcRYGate(q, -1.5632103664488348, 16);
  sqcRZGate(q, 3.1387813678568235, 16);
  sqcRYGate(q, 1.570041741526626, 17);
  sqcRZGate(q, -3.032249603623904, 17);
  sqcRYGate(q, -3.117991750731892, 18);
  sqcRZGate(q, -2.7856234657834382, 18);
  sqcRYGate(q, 0.022311110647660115, 19);
  sqcRZGate(q, -0.050627657891070044, 19);
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
  sqcRYGate(q, -1.493373986016139, 0);
  sqcRZGate(q, 0.8584725385477362, 0);
  sqcRYGate(q, 1.5895694107581653, 1);
  sqcRZGate(q, 0.5655765368806992, 1);
  sqcRYGate(q, 0.15164437130244224, 2);
  sqcRZGate(q, -1.5475982529732528, 2);
  sqcRYGate(q, 3.1165416945452793, 3);
  sqcRZGate(q, -2.755660737727578, 3);
  sqcRYGate(q, 0.41519296790391014, 4);
  sqcRZGate(q, 1.3490105693023815, 4);
  sqcRYGate(q, 1.9753220285369215, 5);
  sqcRZGate(q, -0.1790788349675445, 5);
  sqcRYGate(q, -2.3288750603536883, 6);
  sqcRZGate(q, -2.656524810591683, 6);
  sqcRYGate(q, -0.8500275935310526, 7);
  sqcRZGate(q, 0.44382556042301835, 7);
  sqcRYGate(q, -2.294771658981633, 8);
  sqcRZGate(q, -2.6471612276483683, 8);
  sqcRYGate(q, -2.432061740893776, 9);
  sqcRZGate(q, -1.3408738681329853, 9);
  sqcRYGate(q, -2.946265329358328, 10);
  sqcRZGate(q, -1.9455021771533005, 10);
  sqcRYGate(q, -0.00424372434554865, 11);
  sqcRZGate(q, 0.267028853278273, 11);
  sqcRYGate(q, 1.6703894111067763, 12);
  sqcRZGate(q, 2.843680244955405, 12);
  sqcRYGate(q, -1.6681083575935993, 13);
  sqcRZGate(q, -1.3100534877916905, 13);
  sqcRYGate(q, -3.096624481727193, 14);
  sqcRZGate(q, -1.214728114334184, 14);
  sqcRYGate(q, -3.1054374913117604, 15);
  sqcRZGate(q, 0.9515594272959161, 15);
  sqcRYGate(q, -1.202082868156637, 16);
  sqcRZGate(q, 2.746739085637474, 16);
  sqcRYGate(q, 1.8800458447751138, 17);
  sqcRZGate(q, 1.9696905487555343, 17);
  sqcRYGate(q, -0.7456422796970339, 18);
  sqcRZGate(q, 0.8666199146501989, 18);
  sqcRYGate(q, -1.2151493718659165, 19);
  sqcRZGate(q, -1.1366556873233584, 19);
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
  sqcRYGate(q, -2.9016985240030233, 0);
  sqcRZGate(q, -1.3484439560390742, 0);
  sqcRYGate(q, -3.0630845495279146, 1);
  sqcRZGate(q, -0.5469885429651518, 1);
  sqcRYGate(q, -0.818157875972463, 2);
  sqcRZGate(q, -1.5761799942000572, 2);
  sqcRYGate(q, 2.3376334604217797, 3);
  sqcRZGate(q, -1.2655851710035235, 3);
  sqcRYGate(q, 1.5149301332944474, 4);
  sqcRZGate(q, -1.696573540630643, 4);
  sqcRYGate(q, -2.876718895971567, 5);
  sqcRZGate(q, 2.7381721210316385, 5);
  sqcRYGate(q, 1.1914719745912694, 6);
  sqcRZGate(q, 0.6000199765353376, 6);
  sqcRYGate(q, -1.9641117064382414, 7);
  sqcRZGate(q, 2.5485053066269794, 7);
  sqcRYGate(q, -3.1396980411369952, 8);
  sqcRZGate(q, -2.870815745107216, 8);
  sqcRYGate(q, 0.002062556661934778, 9);
  sqcRZGate(q, 1.37484326402706, 9);
  sqcRYGate(q, -0.035129285341820804, 10);
  sqcRZGate(q, -1.9381370597503191, 10);
  sqcRYGate(q, -2.9253216566081077, 11);
  sqcRZGate(q, -1.535958077510584, 11);
  sqcRYGate(q, -0.060691095532719966, 12);
  sqcRZGate(q, 0.1369937263464518, 12);
  sqcRYGate(q, 3.137773028799959, 13);
  sqcRZGate(q, 0.8994178457350078, 13);
  sqcRYGate(q, 2.235663926982207, 14);
  sqcRZGate(q, -2.5257778616702677, 14);
  sqcRYGate(q, -2.4681607121273603, 15);
  sqcRZGate(q, 0.9193933946416335, 15);
  sqcRYGate(q, -0.841595859840151, 16);
  sqcRZGate(q, -1.8850429373006967, 16);
  sqcRYGate(q, -2.699475591175991, 17);
  sqcRZGate(q, 1.0260611683536816, 17);
  sqcRYGate(q, 2.0077381331137745, 18);
  sqcRZGate(q, -0.5289282632090905, 18);
  sqcRYGate(q, 1.9852846930936672, 19);
  sqcRZGate(q, 2.589122944251648, 19);
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
  sqcRYGate(q, -2.356839381041748, 0);
  sqcRZGate(q, 1.1863850036308223, 0);
  sqcRYGate(q, 2.379072181049324, 1);
  sqcRZGate(q, 1.6869468985119989, 1);
  sqcRYGate(q, 3.1251688853936592, 2);
  sqcRZGate(q, 1.9903057955510686, 2);
  sqcRYGate(q, -0.13223879403843608, 3);
  sqcRZGate(q, -2.3501849819470118, 3);
  sqcRYGate(q, -0.7098970819740884, 4);
  sqcRZGate(q, 2.575215424382902, 4);
  sqcRYGate(q, 0.9183783697894166, 5);
  sqcRZGate(q, 0.8899595302339431, 5);
  sqcRYGate(q, -1.5907083593484777, 6);
  sqcRZGate(q, -2.358945059487284, 6);
  sqcRYGate(q, 1.564658085276717, 7);
  sqcRZGate(q, 0.7692584662807977, 7);
  sqcRYGate(q, -0.8370191852744419, 8);
  sqcRZGate(q, -1.9985643022431434, 8);
  sqcRYGate(q, 0.6916543740395403, 9);
  sqcRZGate(q, 0.630432685643914, 9);
  sqcRYGate(q, -1.5409906263536544, 10);
  sqcRZGate(q, -0.8242146026352657, 10);
  sqcRYGate(q, -1.5716679245764331, 11);
  sqcRZGate(q, 0.8424014515800902, 11);
  sqcRYGate(q, -1.608973932547606, 12);
  sqcRZGate(q, 1.2071004177337015, 12);
  sqcRYGate(q, 3.1348629727074666, 13);
  sqcRZGate(q, -0.04180844020494544, 13);
  sqcRYGate(q, -0.004567932591212333, 14);
  sqcRZGate(q, -0.8163906206316699, 14);
  sqcRYGate(q, 0.002908413967182888, 15);
  sqcRZGate(q, -0.18431623303496011, 15);
  sqcRYGate(q, 2.4372662929068944, 16);
  sqcRZGate(q, -0.9100502960115842, 16);
  sqcRYGate(q, 0.40744599438617135, 17);
  sqcRZGate(q, 2.1964021045095525, 17);
  sqcRYGate(q, -1.5236416544339075, 18);
  sqcRZGate(q, 1.66117945929295, 18);
  sqcRYGate(q, 1.5142304639317778, 19);
  sqcRZGate(q, 1.6560177889893888, 19);
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
  sqcRYGate(q, 0.5062477634196412, 0);
  sqcRZGate(q, -1.8966491192351178, 0);
  sqcRYGate(q, 2.6492093555082197, 1);
  sqcRZGate(q, 1.1178734657851117, 1);
  sqcRYGate(q, -2.497130121305293, 2);
  sqcRZGate(q, -2.0059132266943926, 2);
  sqcRYGate(q, -0.4896460220126219, 3);
  sqcRZGate(q, 1.1891236647336925, 3);
  sqcRYGate(q, -0.9885893719519504, 4);
  sqcRZGate(q, -1.250478127021207, 4);
  sqcRYGate(q, 1.127895178797007, 5);
  sqcRZGate(q, 0.034447288316787304, 5);
  sqcRYGate(q, -0.6105488616080165, 6);
  sqcRZGate(q, -0.7996025744472282, 6);
  sqcRYGate(q, 0.5931962184053319, 7);
  sqcRZGate(q, 2.3574621704091863, 7);
  sqcRYGate(q, -1.2582963914647642, 8);
  sqcRZGate(q, -1.3987615603830728, 8);
  sqcRYGate(q, -2.691665055481595, 9);
  sqcRZGate(q, -2.4259140972925923, 9);
  sqcRYGate(q, -2.6738601018299017, 10);
  sqcRZGate(q, -2.1087095287352, 10);
  sqcRYGate(q, -2.660848395521309, 11);
  sqcRZGate(q, -2.1527678059344075, 11);
  sqcRYGate(q, 1.1669912920115006, 12);
  sqcRZGate(q, 1.772952317476384, 12);
  sqcRYGate(q, 2.600329784545152, 13);
  sqcRZGate(q, 1.0277921242071981, 13);
  sqcRYGate(q, 1.8390845528146766, 14);
  sqcRZGate(q, -2.985197720520897, 14);
  sqcRYGate(q, -1.8435747055469562, 15);
  sqcRZGate(q, 0.18571663491318163, 15);
  sqcRYGate(q, 1.628332002481961, 16);
  sqcRZGate(q, 0.7539922994332093, 16);
  sqcRYGate(q, 0.7324999727565457, 17);
  sqcRZGate(q, 0.015540149465665488, 17);
  sqcRYGate(q, 1.553531075041314, 18);
  sqcRZGate(q, 2.5928815508614655, 18);
  sqcRYGate(q, -1.4987668544552646, 19);
  sqcRZGate(q, -0.5110158356710245, 19);

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
