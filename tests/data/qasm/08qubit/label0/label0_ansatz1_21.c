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

  sqcRYGate(q, -2.68521296330161, 0);
  sqcRZGate(q, -2.021966617549089, 0);
  sqcRYGate(q, -0.30264079004771166, 1);
  sqcRZGate(q, 2.237400866770281, 1);
  sqcRYGate(q, -0.0015933546807955778, 2);
  sqcRZGate(q, -1.579346324405145, 2);
  sqcRYGate(q, -1.1146926529886196, 3);
  sqcRZGate(q, -2.7886966811096903, 3);
  sqcRYGate(q, 1.7451195018426835, 4);
  sqcRZGate(q, -0.06753189032969138, 4);
  sqcRYGate(q, -3.1415721006021524, 5);
  sqcRZGate(q, -2.0964624502913907, 5);
  sqcRYGate(q, 2.690586431004354, 6);
  sqcRZGate(q, -1.020190813646908, 6);
  sqcRYGate(q, -2.950557929843831, 7);
  sqcRZGate(q, 0.5560352249554077, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.573561200268667, 0);
  sqcRZGate(q, 1.1215392866112144, 0);
  sqcRYGate(q, -1.2747585295070791, 1);
  sqcRZGate(q, 2.410564249241831, 1);
  sqcRYGate(q, 2.123204554238436, 2);
  sqcRZGate(q, -0.1122492830892559, 2);
  sqcRYGate(q, -1.240016482739624, 3);
  sqcRZGate(q, -2.77790753975576, 3);
  sqcRYGate(q, 2.1314982537488296, 4);
  sqcRZGate(q, -2.624037733912122, 4);
  sqcRYGate(q, 0.0013160427350165094, 5);
  sqcRZGate(q, 2.7934715167432076, 5);
  sqcRYGate(q, -1.2595623910682097, 6);
  sqcRZGate(q, 2.1504585166759815, 6);
  sqcRYGate(q, 1.7387774450493172, 7);
  sqcRZGate(q, -1.295650512803764, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.9095075865276585, 0);
  sqcRZGate(q, 1.1295626298098238, 0);
  sqcRYGate(q, 0.006281363822465024, 1);
  sqcRZGate(q, -2.4086530549239193, 1);
  sqcRYGate(q, 0.0033316407700976214, 2);
  sqcRZGate(q, -2.9805890615395456, 2);
  sqcRYGate(q, -0.99076736156339, 3);
  sqcRZGate(q, 3.1095623373541756, 3);
  sqcRYGate(q, -3.0366473300582006, 4);
  sqcRZGate(q, -0.9418456386778358, 4);
  sqcRYGate(q, -3.1250160555389948, 5);
  sqcRZGate(q, 1.0432074916951275, 5);
  sqcRYGate(q, -2.3697321268014715, 6);
  sqcRZGate(q, 2.4103152331062296, 6);
  sqcRYGate(q, 2.71210003424192, 7);
  sqcRZGate(q, 1.5761832961590256, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.612792310999609, 0);
  sqcRZGate(q, 2.409334151281818, 0);
  sqcRYGate(q, 2.8225932048822884, 1);
  sqcRZGate(q, 0.37520105345265214, 1);
  sqcRYGate(q, 1.3157262102403833, 2);
  sqcRZGate(q, -0.5229700006635725, 2);
  sqcRYGate(q, 2.944982249387632, 3);
  sqcRZGate(q, -1.3207335986444475, 3);
  sqcRYGate(q, -3.136249592671896, 4);
  sqcRZGate(q, -1.789018579904118, 4);
  sqcRYGate(q, -3.1403798797478713, 5);
  sqcRZGate(q, 1.2192859027083278, 5);
  sqcRYGate(q, 0.6088273683571579, 6);
  sqcRZGate(q, 2.02735637775125, 6);
  sqcRYGate(q, 2.457658764964538, 7);
  sqcRZGate(q, 0.7256132754689122, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.594482345160059, 0);
  sqcRZGate(q, 1.2027315025234646, 0);
  sqcRYGate(q, -3.1387507806132877, 1);
  sqcRZGate(q, -0.7544821348302433, 1);
  sqcRYGate(q, -3.134549651487624, 2);
  sqcRZGate(q, -1.4919774932086636, 2);
  sqcRYGate(q, -0.36465650320969445, 3);
  sqcRZGate(q, -2.350666786461394, 3);
  sqcRYGate(q, 0.8365144830024471, 4);
  sqcRZGate(q, -2.997140903502946, 4);
  sqcRYGate(q, 0.83945497163633, 5);
  sqcRZGate(q, -0.03848816036115465, 5);
  sqcRYGate(q, -0.6810714643296629, 6);
  sqcRZGate(q, -1.6409483064169195, 6);
  sqcRYGate(q, -2.593867177963063, 7);
  sqcRZGate(q, 1.215247980284106, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9794674001013863, 0);
  sqcRZGate(q, 1.2391809316729319, 0);
  sqcRYGate(q, 1.2121657181420853, 1);
  sqcRZGate(q, 1.813887034945152, 1);
  sqcRYGate(q, 2.1585404636490386, 2);
  sqcRZGate(q, 1.9195697215604204, 2);
  sqcRYGate(q, -0.043226468864605405, 3);
  sqcRZGate(q, 1.7186415685577858, 3);
  sqcRYGate(q, -3.1387656417770438, 4);
  sqcRZGate(q, -0.8531371514265798, 4);
  sqcRYGate(q, -0.024876576763009695, 5);
  sqcRZGate(q, 3.116676923044267, 5);
  sqcRYGate(q, 3.0636386923521575, 6);
  sqcRZGate(q, -1.2053867456972986, 6);
  sqcRYGate(q, 1.3399464868205024, 7);
  sqcRZGate(q, -3.039526133317958, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.909102147212589, 0);
  sqcRZGate(q, 0.970541200790925, 0);
  sqcRYGate(q, -0.4421487048872761, 1);
  sqcRZGate(q, -1.3662129687674747, 1);
  sqcRYGate(q, 0.5355948956842701, 2);
  sqcRZGate(q, -2.2300170580679852, 2);
  sqcRYGate(q, -1.2873238116475096, 3);
  sqcRZGate(q, 2.2083635704482525, 3);
  sqcRYGate(q, -1.0317613957054017, 4);
  sqcRZGate(q, -1.0986595778992132, 4);
  sqcRYGate(q, -2.411971483878496, 5);
  sqcRZGate(q, -1.742093512078604, 5);
  sqcRYGate(q, -0.019444576897816646, 6);
  sqcRZGate(q, -0.7556269159308936, 6);
  sqcRYGate(q, 1.2188716654288818, 7);
  sqcRZGate(q, -0.8712460139677907, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.7456031240748056, 0);
  sqcRZGate(q, 1.2559515347533496, 0);
  sqcRYGate(q, 3.001249713783342, 1);
  sqcRZGate(q, 1.167984407323458, 1);
  sqcRYGate(q, 0.06539871988274704, 2);
  sqcRZGate(q, -1.2242082346199705, 2);
  sqcRYGate(q, 0.005703924048052755, 3);
  sqcRZGate(q, 1.7140434297586724, 3);
  sqcRYGate(q, 3.081053252607167, 4);
  sqcRZGate(q, -2.1474971537337195, 4);
  sqcRYGate(q, 3.1197676451405276, 5);
  sqcRZGate(q, 1.2609555744985692, 5);
  sqcRYGate(q, 3.0474188379533023, 6);
  sqcRZGate(q, -1.8035466682119496, 6);
  sqcRYGate(q, -1.8404909328622168, 7);
  sqcRZGate(q, 1.6351153519793196, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.635596437529386, 0);
  sqcRZGate(q, 1.9566061959822285, 0);
  sqcRYGate(q, -1.5079297746566853, 1);
  sqcRZGate(q, -2.5968754243723455, 1);
  sqcRYGate(q, -2.5811855614455492, 2);
  sqcRZGate(q, -1.6202344890769154, 2);
  sqcRYGate(q, 1.3360423855049515, 3);
  sqcRZGate(q, -2.2874005428868616, 3);
  sqcRYGate(q, -2.3152269692823513, 4);
  sqcRZGate(q, -2.916474646690504, 4);
  sqcRYGate(q, 3.0198556564145145, 5);
  sqcRZGate(q, -2.1973902587440177, 5);
  sqcRYGate(q, -1.6888919898682562, 6);
  sqcRZGate(q, 1.7349658898345202, 6);
  sqcRYGate(q, 0.2844316640597864, 7);
  sqcRZGate(q, 1.3014565503099078, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.06546580996398077, 0);
  sqcRZGate(q, 0.5025054669141464, 0);
  sqcRYGate(q, -2.9142872962535487, 1);
  sqcRZGate(q, -2.3997372383068987, 1);
  sqcRYGate(q, 3.137050748737328, 2);
  sqcRZGate(q, 1.7233448700782088, 2);
  sqcRYGate(q, 3.1389536063220618, 3);
  sqcRZGate(q, -1.7044450541164138, 3);
  sqcRYGate(q, -1.3231982047886213, 4);
  sqcRZGate(q, 3.0503777128259864, 4);
  sqcRYGate(q, 3.1186826172188233, 5);
  sqcRZGate(q, -0.7053463573128668, 5);
  sqcRYGate(q, -0.8277896196654817, 6);
  sqcRZGate(q, -1.6312657226958236, 6);
  sqcRYGate(q, 0.6745659818445823, 7);
  sqcRZGate(q, 2.771388931164665, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.246363843165325, 0);
  sqcRZGate(q, -2.543477140652191, 0);
  sqcRYGate(q, 1.9234390873493339, 1);
  sqcRZGate(q, 1.118583650577495, 1);
  sqcRYGate(q, -1.5896250595350676, 2);
  sqcRZGate(q, 0.38668626554804586, 2);
  sqcRYGate(q, -0.6278327520792688, 3);
  sqcRZGate(q, 1.0267313412683237, 3);
  sqcRYGate(q, 2.8395674699839244, 4);
  sqcRZGate(q, 0.20584410488461097, 4);
  sqcRYGate(q, -0.0014076310369857126, 5);
  sqcRZGate(q, 2.9486596533699023, 5);
  sqcRYGate(q, -0.2711940800263887, 6);
  sqcRZGate(q, 0.27627547716900025, 6);
  sqcRYGate(q, -2.16646633575252, 7);
  sqcRZGate(q, -1.7067292479715714, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9104802195025048, 0);
  sqcRZGate(q, -0.9548031553320591, 0);
  sqcRYGate(q, 0.4540927727199451, 1);
  sqcRZGate(q, 3.030229799920001, 1);
  sqcRYGate(q, 0.007281179237687674, 2);
  sqcRZGate(q, -1.1362727894299303, 2);
  sqcRYGate(q, -0.36916381861030173, 3);
  sqcRZGate(q, -1.1341365859183918, 3);
  sqcRYGate(q, -2.5432855679091877, 4);
  sqcRZGate(q, -1.4737466383762738, 4);
  sqcRYGate(q, -3.0946614484427095, 5);
  sqcRZGate(q, -2.4841753135570515, 5);
  sqcRYGate(q, -2.5794065242275224, 6);
  sqcRZGate(q, -1.4637706362580278, 6);
  sqcRYGate(q, 0.3119577477857574, 7);
  sqcRZGate(q, 2.5270439485753333, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.3630710050425208, 0);
  sqcRZGate(q, 2.1374933185063156, 0);
  sqcRYGate(q, 2.4586034855414365, 1);
  sqcRZGate(q, 0.5075496334755156, 1);
  sqcRYGate(q, -0.006729149882974222, 2);
  sqcRZGate(q, -0.5119329245678328, 2);
  sqcRYGate(q, 2.442073729309433, 3);
  sqcRZGate(q, -0.4327919552738572, 3);
  sqcRYGate(q, 1.6837551647853617, 4);
  sqcRZGate(q, -1.3469788622087213, 4);
  sqcRYGate(q, 0.0019574406569712014, 5);
  sqcRZGate(q, 0.9186217977053583, 5);
  sqcRYGate(q, 1.9488132344312286, 6);
  sqcRZGate(q, 1.5006393547599197, 6);
  sqcRYGate(q, 0.5620574839943702, 7);
  sqcRZGate(q, -1.7183666668476505, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.805431288296438, 0);
  sqcRZGate(q, -1.6362472826057077, 0);
  sqcRYGate(q, -1.1151295726148271, 1);
  sqcRZGate(q, 3.1187789500522123, 1);
  sqcRYGate(q, 2.5329650914863406, 2);
  sqcRZGate(q, 1.1860558612879557, 2);
  sqcRYGate(q, 2.022536145178811, 3);
  sqcRZGate(q, 0.6327820021541488, 3);
  sqcRYGate(q, -1.8194007071839868, 4);
  sqcRZGate(q, 0.4230342548360504, 4);
  sqcRYGate(q, -0.0004180014592862335, 5);
  sqcRZGate(q, -0.7593538415062095, 5);
  sqcRYGate(q, 0.37200237474048503, 6);
  sqcRZGate(q, -0.01494458702535173, 6);
  sqcRYGate(q, 2.419526772132401, 7);
  sqcRZGate(q, -2.078232942195662, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.065981531498778, 0);
  sqcRZGate(q, 2.13111648136647, 0);
  sqcRYGate(q, -3.074226629192277, 1);
  sqcRZGate(q, -0.19849829279070885, 1);
  sqcRYGate(q, 2.242415659173949, 2);
  sqcRZGate(q, -1.456263427298115, 2);
  sqcRYGate(q, -2.1967786598221197, 3);
  sqcRZGate(q, -0.5312058831330129, 3);
  sqcRYGate(q, 0.3672158198299025, 4);
  sqcRZGate(q, -2.9699823689921767, 4);
  sqcRYGate(q, 0.709620945267859, 5);
  sqcRZGate(q, -0.011085166666897628, 5);
  sqcRYGate(q, 1.5786170402812578, 6);
  sqcRZGate(q, -2.519260510667409, 6);
  sqcRYGate(q, -2.65936686734816, 7);
  sqcRZGate(q, 1.5411746770524284, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.1015261192355723, 0);
  sqcRZGate(q, 3.1277290715553967, 0);
  sqcRYGate(q, 0.003958547474534057, 1);
  sqcRZGate(q, 1.029991650317002, 1);
  sqcRYGate(q, 2.5995183233159813, 2);
  sqcRZGate(q, 0.9976634728438172, 2);
  sqcRYGate(q, -0.42170560814220703, 3);
  sqcRZGate(q, 1.9762899416513457, 3);
  sqcRYGate(q, 3.140783796723771, 4);
  sqcRZGate(q, 0.1170345347716204, 4);
  sqcRYGate(q, -3.1404139254323167, 5);
  sqcRZGate(q, 3.127903185691529, 5);
  sqcRYGate(q, 3.1414011161406754, 6);
  sqcRZGate(q, -2.4042553429022337, 6);
  sqcRYGate(q, -2.67272755426748, 7);
  sqcRZGate(q, 0.8293623404441471, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.766449910102053, 0);
  sqcRZGate(q, -2.360561154019056, 0);
  sqcRYGate(q, -3.0263916567814113, 1);
  sqcRZGate(q, 1.1909100654628055, 1);
  sqcRYGate(q, 1.0711503724773146, 2);
  sqcRZGate(q, -0.8388261827117, 2);
  sqcRYGate(q, 0.08360150964689872, 3);
  sqcRZGate(q, 2.2723919206757626, 3);
  sqcRYGate(q, 1.2974731802155892, 4);
  sqcRZGate(q, 2.1661469070624957, 4);
  sqcRYGate(q, 0.7094736013475915, 5);
  sqcRZGate(q, 3.1082254956671918, 5);
  sqcRYGate(q, 0.1365961454727967, 6);
  sqcRZGate(q, 1.828620678182272, 6);
  sqcRYGate(q, 2.6785247834079695, 7);
  sqcRZGate(q, -1.6142695223507975, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.0772693772225167, 0);
  sqcRZGate(q, 2.322659670107089, 0);
  sqcRYGate(q, -3.132718578465075, 1);
  sqcRZGate(q, 0.7070231742134814, 1);
  sqcRYGate(q, 1.3903466930278618, 2);
  sqcRZGate(q, 0.06190729364900481, 2);
  sqcRYGate(q, -0.05953936366552792, 3);
  sqcRZGate(q, -0.9702017485031375, 3);
  sqcRYGate(q, 2.944826076393359, 4);
  sqcRZGate(q, -1.4613762831222485, 4);
  sqcRYGate(q, 2.8946571307887865, 5);
  sqcRZGate(q, -2.8416237674841147, 5);
  sqcRYGate(q, 2.9113249725512507, 6);
  sqcRZGate(q, -0.8150254128801713, 6);
  sqcRYGate(q, 1.103258824593384, 7);
  sqcRZGate(q, 0.38151652827808, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.40172996041333286, 0);
  sqcRZGate(q, 0.8305783255650399, 0);
  sqcRYGate(q, 0.008000127634747223, 1);
  sqcRZGate(q, -0.14764899465238673, 1);
  sqcRYGate(q, 0.5507512845522826, 2);
  sqcRZGate(q, 1.1747441058604826, 2);
  sqcRYGate(q, -0.8370217148111498, 3);
  sqcRZGate(q, -0.26361592333983, 3);
  sqcRYGate(q, -3.1400031551287095, 4);
  sqcRZGate(q, 0.21745880669218032, 4);
  sqcRYGate(q, 8.571018728014372e-05, 5);
  sqcRZGate(q, 2.669878186078849, 5);
  sqcRYGate(q, -0.4199085195221379, 6);
  sqcRZGate(q, 1.0039671770776053, 6);
  sqcRYGate(q, -2.1949896350434996, 7);
  sqcRZGate(q, -2.5905561966921966, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.40915754200884624, 0);
  sqcRZGate(q, -0.9355391966547113, 0);
  sqcRYGate(q, -0.12526402716819884, 1);
  sqcRZGate(q, -2.1758965496606093, 1);
  sqcRYGate(q, -0.1352842878892337, 2);
  sqcRZGate(q, -1.8823332912336408, 2);
  sqcRYGate(q, 0.2538281903364261, 3);
  sqcRZGate(q, -1.8717406990448013, 3);
  sqcRYGate(q, -2.6611036188983754, 4);
  sqcRZGate(q, -2.74259024092484, 4);
  sqcRYGate(q, -0.3532214374222793, 5);
  sqcRZGate(q, 0.9474269800227804, 5);
  sqcRYGate(q, 0.5472531146351395, 6);
  sqcRZGate(q, 2.7809001290542503, 6);
  sqcRYGate(q, 2.5029645540409393, 7);
  sqcRZGate(q, -2.3934268761742232, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.983474533107375, 0);
  sqcRZGate(q, 2.4910744134578797, 0);
  sqcRYGate(q, 0.016375335379591682, 1);
  sqcRZGate(q, 2.6870717773252673, 1);
  sqcRYGate(q, 2.3422671582448142, 2);
  sqcRZGate(q, 2.0187692916064317, 2);
  sqcRYGate(q, 0.2713217727672682, 3);
  sqcRZGate(q, 1.3630868911272873, 3);
  sqcRYGate(q, -0.022314185379492386, 4);
  sqcRZGate(q, 2.263243620400627, 4);
  sqcRYGate(q, 0.00043346316700198823, 5);
  sqcRZGate(q, -0.03627988906756764, 5);
  sqcRYGate(q, 2.949450490744201, 6);
  sqcRZGate(q, -0.3770533144529309, 6);
  sqcRYGate(q, -3.082047415538403, 7);
  sqcRZGate(q, 1.3118700486924766, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.6469471732577285, 0);
  sqcRZGate(q, -2.047985840408969, 0);
  sqcRYGate(q, -0.19034199722041567, 1);
  sqcRZGate(q, 0.11431177365332647, 1);
  sqcRYGate(q, 2.34816388841948, 2);
  sqcRZGate(q, -0.15806240016137618, 2);
  sqcRYGate(q, -2.995719535487923, 3);
  sqcRZGate(q, -1.5871175493122731, 3);
  sqcRYGate(q, -0.8604914569377788, 4);
  sqcRZGate(q, 2.8352327506229, 4);
  sqcRYGate(q, -3.0034384786646964, 5);
  sqcRZGate(q, -0.3265507742173516, 5);
  sqcRYGate(q, -0.33559142111308254, 6);
  sqcRZGate(q, -3.046910663633095, 6);
  sqcRYGate(q, 1.763225072647204, 7);
  sqcRZGate(q, -1.3723196614771977, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6946187382502362, 0);
  sqcRZGate(q, 1.9383251965735404, 0);
  sqcRYGate(q, 1.3827703574071086, 1);
  sqcRZGate(q, 2.126644481078379, 1);
  sqcRYGate(q, 2.9183283187797744, 2);
  sqcRZGate(q, -2.908504457438126, 2);
  sqcRYGate(q, -2.381794384683841, 3);
  sqcRZGate(q, -1.7634599348516884, 3);
  sqcRYGate(q, -0.10915158445893791, 4);
  sqcRZGate(q, -2.4489087005825807, 4);
  sqcRYGate(q, 1.571192492557051, 5);
  sqcRZGate(q, 0.6508772348480986, 5);
  sqcRYGate(q, 1.5576659961298422, 6);
  sqcRZGate(q, -1.1227203111575035, 6);
  sqcRYGate(q, 0.360733664992932, 7);
  sqcRZGate(q, -0.782200745276761, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6358559498571408, 0);
  sqcRZGate(q, -0.03245001194231839, 0);
  sqcRYGate(q, 0.01251531186556143, 1);
  sqcRZGate(q, 0.049703902893709746, 1);
  sqcRYGate(q, 0.13845289130466298, 2);
  sqcRZGate(q, 1.8180995039019179, 2);
  sqcRYGate(q, 3.1184110407382755, 3);
  sqcRZGate(q, 0.2508059067119038, 3);
  sqcRYGate(q, -3.1384511236765635, 4);
  sqcRZGate(q, -0.4626387292299316, 4);
  sqcRYGate(q, -0.0002943465576548121, 5);
  sqcRZGate(q, -0.6528578067513395, 5);
  sqcRYGate(q, -1.568238518223339, 6);
  sqcRZGate(q, 0.005485863948838835, 6);
  sqcRYGate(q, -0.09219111649506928, 7);
  sqcRZGate(q, 2.0612484685387686, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.6522312075391996, 0);
  sqcRZGate(q, -1.6148966070417827, 0);
  sqcRYGate(q, -3.020202262735587, 1);
  sqcRZGate(q, 0.6595894028306502, 1);
  sqcRYGate(q, 0.2310980881403859, 2);
  sqcRZGate(q, 0.18097285001415123, 2);
  sqcRYGate(q, 2.6387319654433985, 3);
  sqcRZGate(q, 2.155530483522086, 3);
  sqcRYGate(q, -3.138562551647774, 4);
  sqcRZGate(q, 0.49953982157504795, 4);
  sqcRYGate(q, 0.8591190161643958, 5);
  sqcRZGate(q, -1.566105409944741, 5);
  sqcRYGate(q, -0.2651623107026781, 6);
  sqcRZGate(q, 1.5629877173693423, 6);
  sqcRYGate(q, 1.5701080662659916, 7);
  sqcRZGate(q, -3.1403792019814576, 7);

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
