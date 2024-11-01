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

  sqcRYGate(q, 0.27552768588607945, 0);
  sqcRZGate(q, 1.6003972194206382, 0);
  sqcRYGate(q, 1.6719961018510405, 1);
  sqcRZGate(q, 0.5515947914987578, 1);
  sqcRYGate(q, 2.823409135477485, 2);
  sqcRZGate(q, -0.43159019065212995, 2);
  sqcRYGate(q, -1.018553355295881, 3);
  sqcRZGate(q, 0.21555190054570697, 3);
  sqcRYGate(q, -1.5749112107682057, 4);
  sqcRZGate(q, 3.094435711871654, 4);
  sqcRYGate(q, 1.76066559522918, 5);
  sqcRZGate(q, 3.1377547813154725, 5);
  sqcRYGate(q, 1.2899758018141698, 6);
  sqcRZGate(q, -0.7632201835396213, 6);
  sqcRYGate(q, -1.5915157133367117, 7);
  sqcRZGate(q, -1.9772880887679198, 7);
  sqcRYGate(q, -2.9068187670295402, 8);
  sqcRZGate(q, 0.31833598216714964, 8);
  sqcRYGate(q, 3.1009213516095544, 9);
  sqcRZGate(q, -2.6565877892926233, 9);
  sqcRYGate(q, -1.396774458679242, 10);
  sqcRZGate(q, 3.131962800335835, 10);
  sqcRYGate(q, -1.6166674429578165, 11);
  sqcRZGate(q, -0.44124258089115465, 11);
  sqcRYGate(q, -1.5834399564547388, 12);
  sqcRZGate(q, -0.4279497327935689, 12);
  sqcRYGate(q, -1.6059560061274258, 13);
  sqcRZGate(q, -3.020076764399229, 13);
  sqcRYGate(q, -2.7487155231969274, 14);
  sqcRZGate(q, -0.1589798351136815, 14);
  sqcRYGate(q, 1.7507854153811853, 15);
  sqcRZGate(q, -2.5752939608314196, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.8808872779860035, 0);
  sqcRZGate(q, -2.409739089060731, 0);
  sqcRYGate(q, 1.7224430445513896, 1);
  sqcRZGate(q, -0.2994989254534337, 1);
  sqcRYGate(q, 1.322213673811441, 2);
  sqcRZGate(q, -1.7821322525451588, 2);
  sqcRYGate(q, 1.5738597420826743, 3);
  sqcRZGate(q, 1.4723304806369422, 3);
  sqcRYGate(q, 1.5827384292046576, 4);
  sqcRZGate(q, -2.6042427214823864, 4);
  sqcRYGate(q, -2.6250958244578455, 5);
  sqcRZGate(q, -0.31913535425555745, 5);
  sqcRYGate(q, 0.17188419533767121, 6);
  sqcRZGate(q, 0.020180771891713967, 6);
  sqcRYGate(q, 2.3305912075097353, 7);
  sqcRZGate(q, 0.5417337191644106, 7);
  sqcRYGate(q, 0.2730711957507097, 8);
  sqcRZGate(q, -0.015078018506508657, 8);
  sqcRYGate(q, -1.197057837915202, 9);
  sqcRZGate(q, -0.017965260870249054, 9);
  sqcRYGate(q, -1.5883186714830915, 10);
  sqcRZGate(q, -0.5610363741118094, 10);
  sqcRYGate(q, 1.6616198593966531, 11);
  sqcRZGate(q, 0.7234729626666452, 11);
  sqcRYGate(q, 2.891955260464865, 12);
  sqcRZGate(q, 0.1704313144679368, 12);
  sqcRYGate(q, -1.5809781434012358, 13);
  sqcRZGate(q, -2.3011418096970444, 13);
  sqcRYGate(q, -1.6193988277160551, 14);
  sqcRZGate(q, -2.970868082027671, 14);
  sqcRYGate(q, 2.834063562920081, 15);
  sqcRZGate(q, -2.60035736579185, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.2945316773055633, 0);
  sqcRZGate(q, 1.7007545701243327, 0);
  sqcRYGate(q, 1.0982140936645992, 1);
  sqcRZGate(q, 0.22656970729644854, 1);
  sqcRYGate(q, 1.633428565134892, 2);
  sqcRZGate(q, 1.5822554898736767, 2);
  sqcRYGate(q, 0.09556284691263883, 3);
  sqcRZGate(q, 1.5291162063852575, 3);
  sqcRYGate(q, -1.7661106625517615, 4);
  sqcRZGate(q, -2.96798729631058, 4);
  sqcRYGate(q, -1.5167047115098693, 5);
  sqcRZGate(q, -1.9910501144729231, 5);
  sqcRYGate(q, -1.3331666212470576, 6);
  sqcRZGate(q, -2.9431144734055894, 6);
  sqcRYGate(q, 2.9542283395455016, 7);
  sqcRZGate(q, -0.7440104352187348, 7);
  sqcRYGate(q, 0.5091842922643348, 8);
  sqcRZGate(q, -2.976530828855375, 8);
  sqcRYGate(q, -1.6167084850116238, 9);
  sqcRZGate(q, 3.0837613377384123, 9);
  sqcRYGate(q, 0.14641850154164437, 10);
  sqcRZGate(q, -3.130055173408783, 10);
  sqcRYGate(q, 1.6401956695224917, 11);
  sqcRZGate(q, 1.7668050617370126, 11);
  sqcRYGate(q, 2.8948837241722525, 12);
  sqcRZGate(q, -1.8041100258230347, 12);
  sqcRYGate(q, -2.1284396061845046, 13);
  sqcRZGate(q, -1.5131753123557377, 13);
  sqcRYGate(q, 1.0116375894637182, 14);
  sqcRZGate(q, -0.43319180845375527, 14);
  sqcRYGate(q, 1.7423909904475712, 15);
  sqcRZGate(q, 2.320867588304599, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.498722171862303, 0);
  sqcRZGate(q, -1.1983202629215077, 0);
  sqcRYGate(q, 0.16791590545301838, 1);
  sqcRZGate(q, 1.495042249217307, 1);
  sqcRYGate(q, -1.6099848006561537, 2);
  sqcRZGate(q, 1.1411915317045274, 2);
  sqcRYGate(q, -0.46369290876394587, 3);
  sqcRZGate(q, 0.14072435129626354, 3);
  sqcRYGate(q, 1.1035157217173313, 4);
  sqcRZGate(q, -0.512124476444694, 4);
  sqcRYGate(q, -0.10520751156269521, 5);
  sqcRZGate(q, -1.3448017789653433, 5);
  sqcRYGate(q, 3.1150127032824715, 6);
  sqcRZGate(q, 0.2926145194369531, 6);
  sqcRYGate(q, 1.6117643087181612, 7);
  sqcRZGate(q, -2.9606485592967027, 7);
  sqcRYGate(q, 0.3597096789721146, 8);
  sqcRZGate(q, 0.0004451589009564216, 8);
  sqcRYGate(q, -1.176125552085446, 9);
  sqcRZGate(q, -0.3584214755552457, 9);
  sqcRYGate(q, 1.590207133875353, 10);
  sqcRZGate(q, -0.44523901175894454, 10);
  sqcRYGate(q, -1.4502978125952863, 11);
  sqcRZGate(q, 1.2577012261782834, 11);
  sqcRYGate(q, 1.378986320244362, 12);
  sqcRZGate(q, -1.9983784873398556, 12);
  sqcRYGate(q, -1.0554164056831594, 13);
  sqcRZGate(q, 0.08023534316179948, 13);
  sqcRYGate(q, 2.8629141970354968, 14);
  sqcRZGate(q, -0.40775739441291853, 14);
  sqcRYGate(q, 2.933244462654757, 15);
  sqcRZGate(q, 0.9000515484571577, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.815859141995544, 0);
  sqcRZGate(q, 2.4176626437628643, 0);
  sqcRYGate(q, -1.59265089748828, 1);
  sqcRZGate(q, -1.4290042406816512, 1);
  sqcRYGate(q, 1.5719870061385377, 2);
  sqcRZGate(q, -2.1631636390602367, 2);
  sqcRYGate(q, 0.16795820243739712, 3);
  sqcRZGate(q, -0.438235056743028, 3);
  sqcRYGate(q, 0.7619353405313554, 4);
  sqcRZGate(q, -1.600757663842108, 4);
  sqcRYGate(q, -0.11701810718752005, 5);
  sqcRZGate(q, 1.7608837512071949, 5);
  sqcRYGate(q, 1.8027381019641169, 6);
  sqcRZGate(q, 1.2303771108860815, 6);
  sqcRYGate(q, 1.6297223661681415, 7);
  sqcRZGate(q, 1.8614593572718947, 7);
  sqcRYGate(q, -1.347660621895355, 8);
  sqcRZGate(q, -0.9927519801341305, 8);
  sqcRYGate(q, -1.7178192604081302, 9);
  sqcRZGate(q, 1.577519408353461, 9);
  sqcRYGate(q, -2.236156796517999, 10);
  sqcRZGate(q, -0.7404667958253838, 10);
  sqcRYGate(q, -0.049403022018012485, 11);
  sqcRZGate(q, 0.6209532891461466, 11);
  sqcRYGate(q, -0.05898294515310906, 12);
  sqcRZGate(q, 0.06715357957031592, 12);
  sqcRYGate(q, -1.03429896826174, 13);
  sqcRZGate(q, -0.05667830604533429, 13);
  sqcRYGate(q, -1.606658792750654, 14);
  sqcRZGate(q, -1.7216730922902166, 14);
  sqcRYGate(q, -1.5714070663319017, 15);
  sqcRZGate(q, 0.18175359104730582, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.094128991425004, 0);
  sqcRZGate(q, -2.110611632210132, 0);
  sqcRYGate(q, -2.1115375708469917, 1);
  sqcRZGate(q, -3.057104385115673, 1);
  sqcRYGate(q, -0.7680334910677531, 2);
  sqcRZGate(q, 2.208444165711381, 2);
  sqcRYGate(q, 0.041408390971582776, 3);
  sqcRZGate(q, -2.8387352093640565, 3);
  sqcRYGate(q, -0.5665694807783667, 4);
  sqcRZGate(q, 0.5456426523205914, 4);
  sqcRYGate(q, 2.5660042042094195, 5);
  sqcRZGate(q, 2.5169707339619074, 5);
  sqcRYGate(q, 0.5541950759102532, 6);
  sqcRZGate(q, -2.728338415267889, 6);
  sqcRYGate(q, -2.994746306597159, 7);
  sqcRZGate(q, 0.27196296793878943, 7);
  sqcRYGate(q, -0.49275272050919844, 8);
  sqcRZGate(q, -1.4278305746795243, 8);
  sqcRYGate(q, 2.541694554968765, 9);
  sqcRZGate(q, -2.531773582228957, 9);
  sqcRYGate(q, 1.6181629292279853, 10);
  sqcRZGate(q, 1.6577072609991579, 10);
  sqcRYGate(q, -0.189604088282338, 11);
  sqcRZGate(q, 2.6760893908396963, 11);
  sqcRYGate(q, 1.4051183758284136, 12);
  sqcRZGate(q, -2.2655612982377034, 12);
  sqcRYGate(q, -2.172411144868148, 13);
  sqcRZGate(q, 1.3085554247531037, 13);
  sqcRYGate(q, 1.5857465735461842, 14);
  sqcRZGate(q, -1.4124010729132095, 14);
  sqcRYGate(q, 1.4491914310656746, 15);
  sqcRZGate(q, -1.5946865137463624, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.72915401817942, 0);
  sqcRZGate(q, -0.14996976091102826, 0);
  sqcRYGate(q, 2.047749934665653, 1);
  sqcRZGate(q, -1.468530939720216, 1);
  sqcRYGate(q, 1.7677191398549899, 2);
  sqcRZGate(q, -2.0704943701640595, 2);
  sqcRYGate(q, -2.079965660082026, 3);
  sqcRZGate(q, -1.5308072800699106, 3);
  sqcRYGate(q, 2.957716167555979, 4);
  sqcRZGate(q, 1.8742298505309338, 4);
  sqcRYGate(q, -0.007861010204452512, 5);
  sqcRZGate(q, -0.8773170930830679, 5);
  sqcRYGate(q, 1.770500055121679, 6);
  sqcRZGate(q, -1.2627772408440838, 6);
  sqcRYGate(q, 1.5594023598828788, 7);
  sqcRZGate(q, 1.640932616236915, 7);
  sqcRYGate(q, 2.9908708640088215, 8);
  sqcRZGate(q, -1.9144941068729606, 8);
  sqcRYGate(q, 3.132667876581737, 9);
  sqcRZGate(q, 2.2773687295562373, 9);
  sqcRYGate(q, -1.6846270032575195, 10);
  sqcRZGate(q, -1.1634608552824863, 10);
  sqcRYGate(q, 1.5800695807415142, 11);
  sqcRZGate(q, -1.4199651094973662, 11);
  sqcRYGate(q, -2.946686074982889, 12);
  sqcRZGate(q, 1.1061666945982709, 12);
  sqcRYGate(q, -3.1113077812612424, 13);
  sqcRZGate(q, -1.617402669459268, 13);
  sqcRYGate(q, 1.4760367811101904, 14);
  sqcRZGate(q, -2.955562000502982, 14);
  sqcRYGate(q, 1.5248399486274413, 15);
  sqcRZGate(q, -2.952504908961408, 15);

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
