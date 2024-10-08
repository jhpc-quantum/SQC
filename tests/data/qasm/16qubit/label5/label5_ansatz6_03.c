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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 2.7921123404500143, 0);
  sqcRYGate(q, 2.2635602990511248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7563824104860908, 0);
  sqcRYGate(q, 2.5687347910293727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2780488317992473, 1);
  sqcRYGate(q, -2.03453694714545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4458860712409827, 1);
  sqcRYGate(q, 0.7534088127166972, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.089105637004933, 2);
  sqcRYGate(q, 0.07372093497340912, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6525322926351493, 2);
  sqcRYGate(q, -0.006663680250611081, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4971145651219393, 3);
  sqcRYGate(q, 0.08516196101233424, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4490831232452805, 3);
  sqcRYGate(q, 0.8852613484690028, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8689914584376135, 4);
  sqcRYGate(q, 1.7231076676479429, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.120291440043903, 4);
  sqcRYGate(q, 1.3865307978725177, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9490890999272317, 5);
  sqcRYGate(q, 3.13875681298992, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.583425765345799, 5);
  sqcRYGate(q, -0.02573186105346359, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8846883941473767, 6);
  sqcRYGate(q, -3.0965509250445247, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5058196335777927, 6);
  sqcRYGate(q, -1.5527927701023234, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4599464092785177, 7);
  sqcRYGate(q, 0.4623253881119497, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.266516688482396, 7);
  sqcRYGate(q, 3.140320414718127, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.0753882186651962, 8);
  sqcRYGate(q, -3.106637567181992, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5727808000254317, 8);
  sqcRYGate(q, -1.4522491427383777, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.26433800829711185, 9);
  sqcRYGate(q, -2.456623539887162, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.161859628935572, 9);
  sqcRYGate(q, -3.139803087562031, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.9411674920997235, 10);
  sqcRYGate(q, 0.8590096894158128, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.45865761724227755, 10);
  sqcRYGate(q, -1.5737034487458483, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9966314576021535, 11);
  sqcRYGate(q, -0.7022653871328329, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.020927270903150053, 11);
  sqcRYGate(q, 3.131422564098131, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.35449430592478665, 12);
  sqcRYGate(q, -2.3154555533885777, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.566238576319228, 12);
  sqcRYGate(q, 1.8234918900388564, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.17376193179138522, 13);
  sqcRYGate(q, -0.03339086559065141, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.6060944826888894, 13);
  sqcRYGate(q, 1.3685406893923526, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.0802667291625072, 14);
  sqcRYGate(q, -1.3815625271295406, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.0024523718615435, 14);
  sqcRYGate(q, -3.1354678238699396, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.2191226097425782, 0);
  sqcRYGate(q, -1.3088923997759063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.613843520732109, 0);
  sqcRYGate(q, 0.8363339287224205, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.372558061781804, 1);
  sqcRYGate(q, -0.29852693368470007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5353782368489515, 1);
  sqcRYGate(q, -1.6857964999265853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3675249345814997, 2);
  sqcRYGate(q, 0.4006995806722254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0082946501674583, 2);
  sqcRYGate(q, -0.09295839082020319, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2574689590207546, 3);
  sqcRYGate(q, 2.311527865856481, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.054706591643576, 3);
  sqcRYGate(q, -3.141519430549425, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7296331029219493, 4);
  sqcRYGate(q, -1.1127829710905128, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5246753406800053, 4);
  sqcRYGate(q, -0.49547192159344444, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.607819812656067, 5);
  sqcRYGate(q, 0.019263028565084106, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7648530187898253, 5);
  sqcRYGate(q, -0.4967808703162596, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8831171537981666, 6);
  sqcRYGate(q, 2.705516623728874, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5952026557166326, 6);
  sqcRYGate(q, 3.140187611884215, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.08994877459470807, 7);
  sqcRYGate(q, 1.57236097176789, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5734215903520496, 7);
  sqcRYGate(q, 0.8616154146735949, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.09350300856492844, 8);
  sqcRYGate(q, 1.1160966336385838, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6701244965936173, 8);
  sqcRYGate(q, 1.5926652823430336, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5719660567254312, 9);
  sqcRYGate(q, -1.553938135482852, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.955138439388757, 9);
  sqcRYGate(q, 1.5662260240044426, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5521708923375526, 10);
  sqcRYGate(q, -0.262020388082946, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8436340086412004, 10);
  sqcRYGate(q, -1.5791900852920353, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.9746471063699783, 11);
  sqcRYGate(q, -3.0377836850579296, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.4453196503739703, 11);
  sqcRYGate(q, -2.599029924588658, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.3458009302131282, 12);
  sqcRYGate(q, 1.6120576336629033, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.535827653715912, 12);
  sqcRYGate(q, -0.014604834222024708, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.023112469058993668, 13);
  sqcRYGate(q, 0.717223260941253, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.6835873266898003, 13);
  sqcRYGate(q, -1.5710963068995971, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.9460321869422383, 14);
  sqcRYGate(q, 0.04016728896082282, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.1358345643347443, 14);
  sqcRYGate(q, -0.019990144252102018, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.3843014882269693, 0);
  sqcRYGate(q, -0.17713025699866014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1322717907656643, 0);
  sqcRYGate(q, -0.8360358472053405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21676945744893672, 1);
  sqcRYGate(q, -0.40906050479367395, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9421280182332605, 1);
  sqcRYGate(q, -0.3706952671382587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9106668465139363, 2);
  sqcRYGate(q, -2.7537624333680246, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7423236344951629, 2);
  sqcRYGate(q, -0.17255155737433556, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5718024965320554, 3);
  sqcRYGate(q, -1.5914936552359293, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0900578824777196, 3);
  sqcRYGate(q, -0.3917829975767564, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8832786487234572, 4);
  sqcRYGate(q, -1.569233120652992, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7680271170856836, 4);
  sqcRYGate(q, -0.0011979428773036815, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.024473042945397, 5);
  sqcRYGate(q, 1.1642597899209877, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9161343158880833, 5);
  sqcRYGate(q, -1.1977625840665322, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4044678722544885, 6);
  sqcRYGate(q, 1.000103781168854, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.590445277133955, 6);
  sqcRYGate(q, 2.3038902207911645, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9359257946507327, 7);
  sqcRYGate(q, 2.091647207403196, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0007417419201219493, 7);
  sqcRYGate(q, 3.1415539853763668, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.3480143968167342, 8);
  sqcRYGate(q, -0.4057343409054015, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.14922205276413175, 8);
  sqcRYGate(q, -1.5720153082658168, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.408162234690729, 9);
  sqcRYGate(q, -1.5744679082047695, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.3263600298783285, 9);
  sqcRYGate(q, -0.6138364521407691, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.7297056985033972, 10);
  sqcRYGate(q, -1.5691805382499275, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5464417334275224, 10);
  sqcRYGate(q, 1.5978913411195992, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7420617686510174, 11);
  sqcRYGate(q, -0.19147880530935482, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.5416868026244943, 11);
  sqcRYGate(q, -3.135602367835056, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.9819874992480226, 12);
  sqcRYGate(q, 1.7274688244607126, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.4466511031689362, 12);
  sqcRYGate(q, -1.4702499266709301, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.7949260675334684, 13);
  sqcRYGate(q, 1.559271049790601, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.589853653060148, 13);
  sqcRYGate(q, 0.055550059937303525, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.333067446368451, 14);
  sqcRYGate(q, -1.767433883200708, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.3192910775595243, 14);
  sqcRYGate(q, 3.1207189647989555, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.3845986824464067, 0);
  sqcRYGate(q, -1.9792938413747825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4161316115313127e-05, 0);
  sqcRYGate(q, 2.5521712912400734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9503621735098076, 1);
  sqcRYGate(q, 1.4797865777313843, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.469578845214663, 1);
  sqcRYGate(q, -0.9049937094515297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5040466580382938, 2);
  sqcRYGate(q, -1.563969794215824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5548839555000178, 2);
  sqcRYGate(q, 3.1130232464324776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.824808954048616, 3);
  sqcRYGate(q, 0.20010986317919066, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.336064746106814, 3);
  sqcRYGate(q, 2.892274965865673, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5714970664421397, 4);
  sqcRYGate(q, 1.8094019485400006, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.116962620770094, 4);
  sqcRYGate(q, -1.7497566840914733, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6206388104574607, 5);
  sqcRYGate(q, -0.2286192778512319, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1412271126098656, 5);
  sqcRYGate(q, -3.125529415927505, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7832941017888082, 6);
  sqcRYGate(q, 2.9757037465021883, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4945157457935654, 6);
  sqcRYGate(q, -2.090936677337719, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6814122562330094, 7);
  sqcRYGate(q, 1.5710631528795647, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.790994272261969, 7);
  sqcRYGate(q, 0.8658051327329784, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5710844518717342, 8);
  sqcRYGate(q, 1.5731184779462415, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5605402257285865, 8);
  sqcRYGate(q, 1.5694384038181015, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5739105274425524, 9);
  sqcRYGate(q, -1.5711425670432289, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5734033686317055, 9);
  sqcRYGate(q, -1.5764228299785454, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.4172053252157126, 10);
  sqcRYGate(q, 0.4953620303114725, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.214925982135634, 10);
  sqcRYGate(q, 0.8836712988009939, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6440756513640276, 11);
  sqcRYGate(q, 2.4600250290056977, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.1364427212439105, 11);
  sqcRYGate(q, 3.120688033785337, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.272355925272172, 12);
  sqcRYGate(q, 2.790679144559098, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5248416785841672, 12);
  sqcRYGate(q, -1.4105021715158672, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5681009125906673, 13);
  sqcRYGate(q, -0.49808862884553795, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.5124269803372336, 13);
  sqcRYGate(q, 1.5995377469522998, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.065105325509665, 14);
  sqcRYGate(q, 3.116362776753009, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.8105797646533494, 14);
  sqcRYGate(q, -0.0948739979272073, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.19975510047678, 0);
  sqcRYGate(q, 1.5610632060889016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.570546284812963, 0);
  sqcRYGate(q, 0.5127871014000513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6020277288267764, 1);
  sqcRYGate(q, -2.1436439593594514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5188954307949727, 1);
  sqcRYGate(q, 0.4271182814880945, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9816556353996904, 2);
  sqcRYGate(q, 0.08748984073628717, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5684916212845086, 2);
  sqcRYGate(q, -1.449865337042696, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5709915215279677, 3);
  sqcRYGate(q, 1.5687267854743492, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0997379024437777, 3);
  sqcRYGate(q, -1.632235758680407, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.57103404009362, 4);
  sqcRYGate(q, 2.690158516805128, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7001458435996097, 4);
  sqcRYGate(q, 1.271121341658807, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5733393106862827, 5);
  sqcRYGate(q, 2.252164168728334, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.225284030919624, 5);
  sqcRYGate(q, 1.5643301489123944, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5686481159759076, 6);
  sqcRYGate(q, -1.5699631853312659, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5206525196264393, 6);
  sqcRYGate(q, -1.572496295327018, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5705145092545028, 7);
  sqcRYGate(q, -2.167487325102324, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.01110589044734045, 7);
  sqcRYGate(q, -1.5687131669476906, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.167324930959012, 8);
  sqcRYGate(q, 2.2163135043807642, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.002556573830318891, 8);
  sqcRYGate(q, -1.5119611951023124, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.33048468469803094, 9);
  sqcRYGate(q, 2.991255748658696, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.139113916708037, 9);
  sqcRYGate(q, -3.1415835242372916, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.228885772222659, 10);
  sqcRYGate(q, 0.4984264561829077, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.0868874488215687, 10);
  sqcRYGate(q, 2.110544066533139, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.385625120746412, 11);
  sqcRYGate(q, -3.0373931941135566, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.9669595487417372, 11);
  sqcRYGate(q, -1.5638655156206926, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5693664338230509, 12);
  sqcRYGate(q, -1.488957374462929, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.3864390289423028, 12);
  sqcRYGate(q, 2.59614938074824, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.752002809198374, 13);
  sqcRYGate(q, -1.7205038868030882, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.08427473984704648, 13);
  sqcRYGate(q, 3.1412354699775675, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.33370198995662, 14);
  sqcRYGate(q, -1.4101138529362662, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.130039616567525, 14);
  sqcRYGate(q, 0.11659726583655182, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.609975761636823, 0);
  sqcRYGate(q, -2.7668094167089516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5409626049253948, 0);
  sqcRYGate(q, 0.7280382473259738, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.371094868323955, 1);
  sqcRYGate(q, 0.3003498074865671, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.00017332937008696092, 1);
  sqcRYGate(q, 3.1325319142351944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0775496380080822, 2);
  sqcRYGate(q, -2.89578577523432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.138621069714739, 2);
  sqcRYGate(q, -0.11380881442991819, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0795759507582021, 3);
  sqcRYGate(q, -1.5694737128636866, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3136795558871517, 3);
  sqcRYGate(q, -0.0004729420610465855, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0166292352280712, 4);
  sqcRYGate(q, -1.569517254682867, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0073585178915998, 4);
  sqcRYGate(q, 3.1397895442838935, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5688802459478484, 5);
  sqcRYGate(q, -1.570966078774509, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4953988946966792, 5);
  sqcRYGate(q, -1.5690527980762985, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6380354527750387, 6);
  sqcRYGate(q, 1.5701888609095078, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9834703454829037, 6);
  sqcRYGate(q, -3.139063765260261, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7218932494652464, 7);
  sqcRYGate(q, 1.5708242803130172, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5683843706537848, 7);
  sqcRYGate(q, 3.1371535192661923, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6549343146954967, 8);
  sqcRYGate(q, -2.826757553587519, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5693729295208358, 8);
  sqcRYGate(q, 3.0834115590404916, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.570690047416066, 9);
  sqcRYGate(q, 2.311961618497649, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5666185907487042, 9);
  sqcRYGate(q, 1.5720322723191669, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5706407672102412, 10);
  sqcRYGate(q, -1.5529006652615336, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6817310194486677, 10);
  sqcRYGate(q, 0.5450443836674168, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5560748451712927, 11);
  sqcRYGate(q, -1.56784248653792, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.402254687152236, 11);
  sqcRYGate(q, 1.5800351529626762, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.2798261546525265, 12);
  sqcRYGate(q, 1.7615579508454682, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.4506508922147927, 12);
  sqcRYGate(q, 3.140861012886209, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.9058826076456805, 13);
  sqcRYGate(q, 2.4830241659204435, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.265274541381224, 13);
  sqcRYGate(q, 0.010548922525163817, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.908601820514062, 14);
  sqcRYGate(q, 2.1288248365655074, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5661805594756268, 14);
  sqcRYGate(q, 0.050328244878562245, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.8068340525815083, 0);
  sqcRYGate(q, -2.3445751606557796, 1);
  sqcRYGate(q, 1.5565161736779833, 2);
  sqcRYGate(q, -0.252635830077494, 3);
  sqcRYGate(q, 3.016945868215675, 4);
  sqcRYGate(q, 1.5707494285183976, 5);
  sqcRYGate(q, -1.5033731241979627, 6);
  sqcRYGate(q, -1.4198734011490448, 7);
  sqcRYGate(q, 1.4865467855609067, 8);
  sqcRYGate(q, -1.5707389035537291, 9);
  sqcRYGate(q, -1.5709661981939504, 10);
  sqcRYGate(q, -1.5703133810734542, 11);
  sqcRYGate(q, -0.2825994122725204, 12);
  sqcRYGate(q, 1.2447220282946327, 13);
  sqcRYGate(q, 1.316279576833086, 14);
  sqcRYGate(q, 1.5761926739624834, 15);

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
