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

  sqcRYGate(q, 2.784068083066853, 0);
  sqcRZGate(q, -1.0445811261830555, 0);
  sqcRYGate(q, 0.3523813034763137, 1);
  sqcRZGate(q, 0.2978633133358075, 1);
  sqcRYGate(q, 0.021695492753462275, 2);
  sqcRZGate(q, 0.9797712774923977, 2);
  sqcRYGate(q, -0.8401168992040223, 3);
  sqcRZGate(q, 0.1051098660450709, 3);
  sqcRYGate(q, 0.44125430439255986, 4);
  sqcRZGate(q, 2.783147488091343, 4);
  sqcRYGate(q, 0.8817051763878271, 5);
  sqcRZGate(q, 0.1308902883366122, 5);
  sqcRYGate(q, -2.9746780327743765, 6);
  sqcRZGate(q, -0.5269994795991177, 6);
  sqcRYGate(q, 0.06298473527835997, 7);
  sqcRZGate(q, -0.729218389450658, 7);
  sqcRYGate(q, 3.0673879701610716, 8);
  sqcRZGate(q, 1.5645348531239756, 8);
  sqcRYGate(q, -1.4995931934340634, 9);
  sqcRZGate(q, 1.0745859003279814, 9);
  sqcRYGate(q, -0.2575441070702614, 10);
  sqcRZGate(q, 2.5919063565588583, 10);
  sqcRYGate(q, -3.0999729566963725, 11);
  sqcRZGate(q, 3.106876026256952, 11);
  sqcRYGate(q, 1.9495485362697285, 12);
  sqcRZGate(q, -3.0347240049684503, 12);
  sqcRYGate(q, -1.309725060021468, 13);
  sqcRZGate(q, -0.060159759354738586, 13);
  sqcRYGate(q, 3.104158233288079, 14);
  sqcRZGate(q, -1.935536711778428, 14);
  sqcRYGate(q, -0.06293679052231038, 15);
  sqcRZGate(q, -1.8248789211982799, 15);
  sqcRYGate(q, -0.5345319712980885, 16);
  sqcRZGate(q, 1.9210869354193374, 16);
  sqcRYGate(q, 0.0047521703089321654, 17);
  sqcRZGate(q, 2.9938455462395117, 17);
  sqcRYGate(q, 1.7444057378596556, 18);
  sqcRZGate(q, -0.8679713974837888, 18);
  sqcRYGate(q, -0.5965232295491479, 19);
  sqcRZGate(q, -1.4144859378430568, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.811073523116098, 0);
  sqcRZGate(q, 1.8086752583364403, 0);
  sqcRYGate(q, 1.7123738781411326, 1);
  sqcRZGate(q, 0.9655617022481762, 1);
  sqcRYGate(q, -0.4380185851932996, 2);
  sqcRZGate(q, -3.053419193625576, 2);
  sqcRYGate(q, -0.8884776241907101, 3);
  sqcRZGate(q, 0.7728834145001967, 3);
  sqcRYGate(q, -0.9292949713152768, 4);
  sqcRZGate(q, -2.801754979773065, 4);
  sqcRYGate(q, -0.8164106947884404, 5);
  sqcRZGate(q, 1.3705297128560932, 5);
  sqcRYGate(q, -1.678824108818998, 6);
  sqcRZGate(q, 2.8173795054737165, 6);
  sqcRYGate(q, -3.0671113880674192, 7);
  sqcRZGate(q, -0.7215538255327596, 7);
  sqcRYGate(q, 1.327399464206898, 8);
  sqcRZGate(q, 0.8092518510565823, 8);
  sqcRYGate(q, -1.744205483199301, 9);
  sqcRZGate(q, 1.9805249502898574, 9);
  sqcRYGate(q, 2.411397414840739, 10);
  sqcRZGate(q, 1.1444555707085575, 10);
  sqcRYGate(q, 1.9230034127998406, 11);
  sqcRZGate(q, -0.21727722223352366, 11);
  sqcRYGate(q, 2.070494121924506, 12);
  sqcRZGate(q, -3.0074470162652527, 12);
  sqcRYGate(q, -2.1293418630623515, 13);
  sqcRZGate(q, 3.0846093966177484, 13);
  sqcRYGate(q, -1.5484521145436885, 14);
  sqcRZGate(q, 0.1676196242774436, 14);
  sqcRYGate(q, 0.07569063380084806, 15);
  sqcRZGate(q, 0.7720225114088177, 15);
  sqcRYGate(q, -0.6723235856429437, 16);
  sqcRZGate(q, 0.24712097024094307, 16);
  sqcRYGate(q, -3.136522130455765, 17);
  sqcRZGate(q, 1.716922655856445, 17);
  sqcRYGate(q, 1.2111867469747355, 18);
  sqcRZGate(q, -1.1133665005610522, 18);
  sqcRYGate(q, -2.071413568364734, 19);
  sqcRZGate(q, -0.6846445168320807, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.1494984744542549, 0);
  sqcRZGate(q, -0.5628498203859889, 0);
  sqcRYGate(q, 0.45640810936404647, 1);
  sqcRZGate(q, 2.3086865425008325, 1);
  sqcRYGate(q, 0.052456715183418545, 2);
  sqcRZGate(q, 2.6710095613459934, 2);
  sqcRYGate(q, 3.1155688900179666, 3);
  sqcRZGate(q, 2.4013812652734896, 3);
  sqcRYGate(q, -0.276071249262496, 4);
  sqcRZGate(q, 0.8694988195168061, 4);
  sqcRYGate(q, -3.0961787515744184, 5);
  sqcRZGate(q, 0.03165917991416143, 5);
  sqcRYGate(q, 2.045487552166265, 6);
  sqcRZGate(q, -1.5103113204557699, 6);
  sqcRYGate(q, -3.0782407002247956, 7);
  sqcRZGate(q, -1.42836522835508, 7);
  sqcRYGate(q, 2.947686397841836, 8);
  sqcRZGate(q, 0.650218338393653, 8);
  sqcRYGate(q, -3.1305085418518286, 9);
  sqcRZGate(q, -2.683329873545861, 9);
  sqcRYGate(q, -3.1393106653197536, 10);
  sqcRZGate(q, -1.7424736624900188, 10);
  sqcRYGate(q, 3.1408369059132104, 11);
  sqcRZGate(q, 1.2232777456262907, 11);
  sqcRYGate(q, -1.5691299212476428, 12);
  sqcRZGate(q, 1.1199417352781806, 12);
  sqcRYGate(q, 1.5020528614102586, 13);
  sqcRZGate(q, -0.07407483789820812, 13);
  sqcRYGate(q, -1.7843812768993068, 14);
  sqcRZGate(q, 0.22868889590572913, 14);
  sqcRYGate(q, -2.7051415109824655, 15);
  sqcRZGate(q, 2.7146245651427603, 15);
  sqcRYGate(q, -0.04411428816916851, 16);
  sqcRZGate(q, -0.2280586166117233, 16);
  sqcRYGate(q, 0.004756975896109239, 17);
  sqcRZGate(q, -2.9261241556866406, 17);
  sqcRYGate(q, -1.5631236675027074, 18);
  sqcRZGate(q, 0.7132885971927081, 18);
  sqcRYGate(q, -0.7982815163584069, 19);
  sqcRZGate(q, -1.630649363316915, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.8149990029492891, 0);
  sqcRZGate(q, 2.204411496560984, 0);
  sqcRYGate(q, 1.6861591022906484, 1);
  sqcRZGate(q, -1.8150964583349818, 1);
  sqcRYGate(q, 1.8578410458229717, 2);
  sqcRZGate(q, -1.4894318786286571, 2);
  sqcRYGate(q, -1.1471247276312713, 3);
  sqcRZGate(q, -0.6091894483395399, 3);
  sqcRYGate(q, 0.918291173247348, 4);
  sqcRZGate(q, 0.9794960291825452, 4);
  sqcRYGate(q, 2.04226244546636, 5);
  sqcRZGate(q, -2.3847354562110596, 5);
  sqcRYGate(q, -3.098429364766118, 6);
  sqcRZGate(q, -1.444757231686875, 6);
  sqcRYGate(q, 0.015465526019386179, 7);
  sqcRZGate(q, 2.5235844873124478, 7);
  sqcRYGate(q, -2.804868234222876, 8);
  sqcRZGate(q, 2.6163852157353786, 8);
  sqcRYGate(q, -1.0842030027820238, 9);
  sqcRZGate(q, -2.702647348907629, 9);
  sqcRYGate(q, -0.6578947920337406, 10);
  sqcRZGate(q, -0.9901234464038169, 10);
  sqcRYGate(q, -1.8074329987447824, 11);
  sqcRZGate(q, 1.1936445994227638, 11);
  sqcRYGate(q, -3.118518868847918, 12);
  sqcRZGate(q, 2.517134200287602, 12);
  sqcRYGate(q, -0.26753129527339503, 13);
  sqcRZGate(q, 0.48631848575199305, 13);
  sqcRYGate(q, -0.6579401260854434, 14);
  sqcRZGate(q, -0.3142983720016762, 14);
  sqcRYGate(q, -0.5807414703196603, 15);
  sqcRZGate(q, -1.1818240033458896, 15);
  sqcRYGate(q, -0.8889277283827274, 16);
  sqcRZGate(q, -0.16218274613381617, 16);
  sqcRYGate(q, 3.140620446848954, 17);
  sqcRZGate(q, -0.621117925945457, 17);
  sqcRYGate(q, 2.1859596753999515, 18);
  sqcRZGate(q, -1.339955127553218, 18);
  sqcRYGate(q, 1.5225892438810567, 19);
  sqcRZGate(q, 2.80749173558267, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.9318781908669234, 0);
  sqcRZGate(q, -1.2368746741033458, 0);
  sqcRYGate(q, 2.858864076100642, 1);
  sqcRZGate(q, -1.470756799870669, 1);
  sqcRYGate(q, 2.7817052889222835, 2);
  sqcRZGate(q, -3.029504402587097, 2);
  sqcRYGate(q, -3.1112616052511464, 3);
  sqcRZGate(q, -0.23124706084072436, 3);
  sqcRYGate(q, -3.1202287872602024, 4);
  sqcRZGate(q, 1.8346719886805216, 4);
  sqcRYGate(q, -0.07047471459300188, 5);
  sqcRZGate(q, -0.7451083122902631, 5);
  sqcRYGate(q, -2.43133934911497, 6);
  sqcRZGate(q, 3.0042971110551018, 6);
  sqcRYGate(q, 1.7751331680552613, 7);
  sqcRZGate(q, 0.5032260098814794, 7);
  sqcRYGate(q, -1.563373303907741, 8);
  sqcRZGate(q, -0.08463327582012554, 8);
  sqcRYGate(q, -0.03206580414865812, 9);
  sqcRZGate(q, -0.48404948843185225, 9);
  sqcRYGate(q, 0.3404202607296481, 10);
  sqcRZGate(q, 3.0867667903733786, 10);
  sqcRYGate(q, -0.0782725335986387, 11);
  sqcRZGate(q, 0.4228030643637013, 11);
  sqcRYGate(q, 1.9382547511615957, 12);
  sqcRZGate(q, -1.0690156613353583, 12);
  sqcRYGate(q, -2.81028057255657, 13);
  sqcRZGate(q, -0.4185809888018843, 13);
  sqcRYGate(q, 0.14632054524683902, 14);
  sqcRZGate(q, 0.6843372162467319, 14);
  sqcRYGate(q, 0.4243205786155597, 15);
  sqcRZGate(q, 2.3521287946490217, 15);
  sqcRYGate(q, 1.2193620106548337, 16);
  sqcRZGate(q, 0.28634286317772867, 16);
  sqcRYGate(q, 2.8818702367264946, 17);
  sqcRZGate(q, -0.10480558059491785, 17);
  sqcRYGate(q, -1.585478184726873, 18);
  sqcRZGate(q, -1.4016361099843122, 18);
  sqcRYGate(q, 0.6441247009962492, 19);
  sqcRZGate(q, 1.8295570498959206, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.4275051656182445, 0);
  sqcRZGate(q, -0.7837413853724593, 0);
  sqcRYGate(q, 2.8249836227577623, 1);
  sqcRZGate(q, 2.145003087116212, 1);
  sqcRYGate(q, 1.5187371584002112, 2);
  sqcRZGate(q, 2.6472937659810016, 2);
  sqcRYGate(q, -1.6821228076696693, 3);
  sqcRZGate(q, 2.3669240736952384, 3);
  sqcRYGate(q, -1.5371660175851352, 4);
  sqcRZGate(q, -0.3068239084357451, 4);
  sqcRYGate(q, -0.9552166315750786, 5);
  sqcRZGate(q, 1.5090485860870313, 5);
  sqcRYGate(q, -0.2636319150858961, 6);
  sqcRZGate(q, -0.009965726296264242, 6);
  sqcRYGate(q, 3.098530007675335, 7);
  sqcRZGate(q, -2.4143817716105964, 7);
  sqcRYGate(q, -0.2764125183298951, 8);
  sqcRZGate(q, -0.001411992283872898, 8);
  sqcRYGate(q, 0.1867124573911889, 9);
  sqcRZGate(q, 0.02085905763531315, 9);
  sqcRYGate(q, 0.17931325344272267, 10);
  sqcRZGate(q, 1.5964062897745868, 10);
  sqcRYGate(q, 1.6269339710396364, 11);
  sqcRZGate(q, -1.6826690803199194, 11);
  sqcRYGate(q, 0.23336017218679397, 12);
  sqcRZGate(q, -1.72990824432907, 12);
  sqcRYGate(q, -0.17947685362763097, 13);
  sqcRZGate(q, -0.6999864201043838, 13);
  sqcRYGate(q, 0.0181271359688303, 14);
  sqcRZGate(q, 0.15790502088167718, 14);
  sqcRYGate(q, 1.2692706890193275, 15);
  sqcRZGate(q, -3.1342814927988645, 15);
  sqcRYGate(q, 3.125649989483152, 16);
  sqcRZGate(q, -1.9084661001823762, 16);
  sqcRYGate(q, 1.6355314680764268, 17);
  sqcRZGate(q, 0.8343308505421455, 17);
  sqcRYGate(q, 1.61267194970508, 18);
  sqcRZGate(q, -1.1950865162522206, 18);
  sqcRYGate(q, -1.3764577336010717, 19);
  sqcRZGate(q, -0.9626837484413402, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.2559416312847242, 0);
  sqcRZGate(q, -2.535553868590896, 0);
  sqcRYGate(q, -0.42836757172037704, 1);
  sqcRZGate(q, 0.0998370237881856, 1);
  sqcRYGate(q, -0.15566305119484625, 2);
  sqcRZGate(q, -1.2993952113349079, 2);
  sqcRYGate(q, -3.118799405809656, 3);
  sqcRZGate(q, 2.3569552106047476, 3);
  sqcRYGate(q, -3.1211762601561897, 4);
  sqcRZGate(q, -0.3549293189633219, 4);
  sqcRYGate(q, 0.12547208681529107, 5);
  sqcRZGate(q, 2.673182518538844, 5);
  sqcRYGate(q, -1.1678160468731136, 6);
  sqcRZGate(q, -1.2742837454519869, 6);
  sqcRYGate(q, 1.8120861409133122, 7);
  sqcRZGate(q, 0.012039821812650509, 7);
  sqcRYGate(q, -1.49773278848857, 8);
  sqcRZGate(q, 2.139197477835912, 8);
  sqcRYGate(q, -0.2382772182517154, 9);
  sqcRZGate(q, 0.011924821611621892, 9);
  sqcRYGate(q, -3.0422385733688144, 10);
  sqcRZGate(q, 1.5260098510937041, 10);
  sqcRYGate(q, 3.129722017121133, 11);
  sqcRZGate(q, 1.4548404432979813, 11);
  sqcRYGate(q, 3.1346755011401317, 12);
  sqcRZGate(q, 0.30984113909542593, 12);
  sqcRYGate(q, -0.1478175671732922, 13);
  sqcRZGate(q, -3.0746620479753766, 13);
  sqcRYGate(q, -0.034568575136234334, 14);
  sqcRZGate(q, -1.0893559907239654, 14);
  sqcRYGate(q, -2.812867540142721, 15);
  sqcRZGate(q, -1.7266998125666255, 15);
  sqcRYGate(q, -3.1102452070745796, 16);
  sqcRZGate(q, -3.0281426602612576, 16);
  sqcRYGate(q, -0.00892412883852245, 17);
  sqcRZGate(q, 1.1350022817643293, 17);
  sqcRYGate(q, -1.5333780993220865, 18);
  sqcRZGate(q, -0.07880762046718577, 18);
  sqcRYGate(q, 2.8783312354050343, 19);
  sqcRZGate(q, -2.9775283760153552, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.8953405760038609, 0);
  sqcRZGate(q, 2.8037203086130233, 0);
  sqcRYGate(q, -1.5076034867738217, 1);
  sqcRZGate(q, -0.2753637101552705, 1);
  sqcRYGate(q, 0.11134925745334714, 2);
  sqcRZGate(q, -2.3038045222944294, 2);
  sqcRYGate(q, -2.20401372099996, 3);
  sqcRZGate(q, -1.5589903119807764, 3);
  sqcRYGate(q, 1.5822675028886026, 4);
  sqcRZGate(q, 0.049030949862519435, 4);
  sqcRYGate(q, 3.132255855342261, 5);
  sqcRZGate(q, -0.4187746983022631, 5);
  sqcRYGate(q, 3.0629093749574228, 6);
  sqcRZGate(q, 2.13770446233929, 6);
  sqcRYGate(q, 1.5771348755251888, 7);
  sqcRZGate(q, 0.13586598234645783, 7);
  sqcRYGate(q, 0.010400351784348496, 8);
  sqcRZGate(q, 1.4373835748232855, 8);
  sqcRYGate(q, -1.5800807650538717, 9);
  sqcRZGate(q, -3.0697136661362268, 9);
  sqcRYGate(q, 1.5721041624697136, 10);
  sqcRZGate(q, 0.008014697151630832, 10);
  sqcRYGate(q, -1.5021733252464635, 11);
  sqcRZGate(q, 1.580490015439735, 11);
  sqcRYGate(q, -1.7112589677015118, 12);
  sqcRZGate(q, -0.21105146910965633, 12);
  sqcRYGate(q, 0.27440901443028043, 13);
  sqcRZGate(q, 1.6076040625422374, 13);
  sqcRYGate(q, 0.16077048800718163, 14);
  sqcRZGate(q, -2.7776984539561136, 14);
  sqcRYGate(q, 1.8481818560208518, 15);
  sqcRZGate(q, -1.5781730692259854, 15);
  sqcRYGate(q, -0.13941423171872902, 16);
  sqcRZGate(q, 1.4308652097640226, 16);
  sqcRYGate(q, -0.0740268804873789, 17);
  sqcRZGate(q, -0.36130993388050214, 17);
  sqcRYGate(q, -2.9403882158746963, 18);
  sqcRZGate(q, 1.5020355030458195, 18);
  sqcRYGate(q, 1.5677792448172496, 19);
  sqcRZGate(q, -0.0026625447327690566, 19);

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
