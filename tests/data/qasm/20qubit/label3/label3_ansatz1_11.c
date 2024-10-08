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

  sqcRYGate(q, -1.584394717188185, 0);
  sqcRZGate(q, -0.8479732147745072, 0);
  sqcRYGate(q, -0.7302042479297582, 1);
  sqcRZGate(q, -1.0513315240657022, 1);
  sqcRYGate(q, -1.6305037942405438, 2);
  sqcRZGate(q, 1.4468192572156688, 2);
  sqcRYGate(q, 0.008232832755308728, 3);
  sqcRZGate(q, -0.3681379713709614, 3);
  sqcRYGate(q, -1.535120566804092, 4);
  sqcRZGate(q, 0.6562405756412967, 4);
  sqcRYGate(q, 1.5502166553110253, 5);
  sqcRZGate(q, 2.244379621807939, 5);
  sqcRYGate(q, 0.02469156388781955, 6);
  sqcRZGate(q, -3.094031577581663, 6);
  sqcRYGate(q, -1.5706327582951225, 7);
  sqcRZGate(q, 0.6939948197452512, 7);
  sqcRYGate(q, -1.5706650358623062, 8);
  sqcRZGate(q, -0.8807574678929806, 8);
  sqcRYGate(q, 0.6439966822451062, 9);
  sqcRZGate(q, -0.00043673498181393417, 9);
  sqcRYGate(q, 1.6770193461553677, 10);
  sqcRZGate(q, 2.088808512916354, 10);
  sqcRYGate(q, -1.3663480126115077, 11);
  sqcRZGate(q, -1.8043887427787177, 11);
  sqcRYGate(q, 3.1333652950624176, 12);
  sqcRZGate(q, 2.454581654569429, 12);
  sqcRYGate(q, -1.067452613211812, 13);
  sqcRZGate(q, 2.153887641976683, 13);
  sqcRYGate(q, -3.065895190736118, 14);
  sqcRZGate(q, 1.1386470582283614, 14);
  sqcRYGate(q, -2.664503096746925, 15);
  sqcRZGate(q, 1.6175013250892647, 15);
  sqcRYGate(q, -1.2850735234926738, 16);
  sqcRZGate(q, 0.9695644711137136, 16);
  sqcRYGate(q, 0.744083181655248, 17);
  sqcRZGate(q, 0.41729503159986575, 17);
  sqcRYGate(q, -1.553808319259461, 18);
  sqcRZGate(q, -1.5738157789661615, 18);
  sqcRYGate(q, 2.168425336161711, 19);
  sqcRZGate(q, 1.076463190827463, 19);
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
  sqcRYGate(q, -3.014672406938198, 0);
  sqcRZGate(q, -0.004254784259362499, 0);
  sqcRYGate(q, -2.2681631801188127, 1);
  sqcRZGate(q, 3.1290690792072984, 1);
  sqcRYGate(q, 0.24191223948986187, 2);
  sqcRZGate(q, -1.4289276263638535, 2);
  sqcRYGate(q, 2.816710494480048, 3);
  sqcRZGate(q, -1.966843212582904, 3);
  sqcRYGate(q, -3.1000679285864425, 4);
  sqcRZGate(q, -2.903286321866301, 4);
  sqcRYGate(q, -0.07863701034869823, 5);
  sqcRZGate(q, -0.6475026265672392, 5);
  sqcRYGate(q, 1.5701586095449904, 6);
  sqcRZGate(q, -1.6759604054550508, 6);
  sqcRYGate(q, -0.6439643234812253, 7);
  sqcRZGate(q, 1.8503049611924125, 7);
  sqcRYGate(q, -2.430115662194545, 8);
  sqcRZGate(q, -0.5749395883932173, 8);
  sqcRYGate(q, -1.5695876530710278, 9);
  sqcRZGate(q, 3.023670821357566, 9);
  sqcRYGate(q, -3.139129465597749, 10);
  sqcRZGate(q, -2.449040557126708, 10);
  sqcRYGate(q, -1.7372271352222812, 11);
  sqcRZGate(q, -0.06947399999726667, 11);
  sqcRYGate(q, 0.6561447060868435, 12);
  sqcRZGate(q, 1.1611143932337418, 12);
  sqcRYGate(q, 0.7617796910005018, 13);
  sqcRZGate(q, 1.3090498951115626, 13);
  sqcRYGate(q, 2.4408619724484817, 14);
  sqcRZGate(q, -3.0276653736597723, 14);
  sqcRYGate(q, 1.365169964404008, 15);
  sqcRZGate(q, 1.600096425506271, 15);
  sqcRYGate(q, 3.0923729425082893, 16);
  sqcRZGate(q, 2.1092189794742455, 16);
  sqcRYGate(q, -1.6024263936076322, 17);
  sqcRZGate(q, 0.46720564063063286, 17);
  sqcRYGate(q, -2.5170272046564635, 18);
  sqcRZGate(q, -2.9706645728686785, 18);
  sqcRYGate(q, -3.1120843847411277, 19);
  sqcRZGate(q, -1.1916839115665523, 19);
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
  sqcRYGate(q, -0.027757374068030364, 0);
  sqcRZGate(q, -2.2534608829917477, 0);
  sqcRYGate(q, 2.1460753142723874, 1);
  sqcRZGate(q, 3.141415496453689, 1);
  sqcRYGate(q, -1.5801798818729638, 2);
  sqcRZGate(q, -3.1130821443294248, 2);
  sqcRYGate(q, -0.4766898049473614, 3);
  sqcRZGate(q, 1.221540609251506, 3);
  sqcRYGate(q, -0.0007651530550889518, 4);
  sqcRZGate(q, -2.7866536420812666, 4);
  sqcRYGate(q, -1.9871472596733422, 5);
  sqcRZGate(q, -1.5746900375697128, 5);
  sqcRYGate(q, 0.3735008472299267, 6);
  sqcRZGate(q, 1.6170988230029246, 6);
  sqcRYGate(q, 2.4301098138789357, 7);
  sqcRZGate(q, 2.828453866388649, 7);
  sqcRYGate(q, 1.9599328763748802, 8);
  sqcRZGate(q, -0.06344721897488187, 8);
  sqcRYGate(q, 1.671576862768901, 9);
  sqcRZGate(q, -1.197949734754074, 9);
  sqcRYGate(q, 1.57078273677054, 10);
  sqcRZGate(q, -0.026681581956746744, 10);
  sqcRYGate(q, 2.2892692870938007, 11);
  sqcRZGate(q, -1.5713063549273905, 11);
  sqcRYGate(q, 0.0001318670675326728, 12);
  sqcRZGate(q, 2.7470869445798702, 12);
  sqcRYGate(q, -0.0019910746471625274, 13);
  sqcRZGate(q, -0.47553619941694375, 13);
  sqcRYGate(q, -1.5746542312726275, 14);
  sqcRZGate(q, -0.17705690854691888, 14);
  sqcRYGate(q, -0.5096264790722618, 15);
  sqcRZGate(q, 3.0565464297154277, 15);
  sqcRYGate(q, -1.810701273343538, 16);
  sqcRZGate(q, -0.06218450136981257, 16);
  sqcRYGate(q, 2.367976771125829, 17);
  sqcRZGate(q, -1.2573623112193593, 17);
  sqcRYGate(q, 0.8227778096360261, 18);
  sqcRZGate(q, -1.8289187172243686, 18);
  sqcRYGate(q, 2.5927732984094507, 19);
  sqcRZGate(q, -1.3044618046303773, 19);
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
  sqcRYGate(q, -0.8778955806981319, 0);
  sqcRZGate(q, -1.5788311858441169, 0);
  sqcRYGate(q, 1.5179939739195252, 1);
  sqcRZGate(q, -0.5307867694293575, 1);
  sqcRYGate(q, -1.4537559447223518, 2);
  sqcRZGate(q, -1.7447831426560012, 2);
  sqcRYGate(q, 0.01727161396703121, 3);
  sqcRZGate(q, 0.35952711410711835, 3);
  sqcRYGate(q, -0.9847712747679659, 4);
  sqcRZGate(q, -3.1394747957209743, 4);
  sqcRYGate(q, 0.8524199954894591, 5);
  sqcRZGate(q, 0.004477384769199234, 5);
  sqcRYGate(q, -3.14109408358478, 6);
  sqcRZGate(q, 1.6965408950436613, 6);
  sqcRYGate(q, 0.2719041586765139, 7);
  sqcRZGate(q, -0.9380034795341579, 7);
  sqcRYGate(q, 3.029836833966148, 8);
  sqcRZGate(q, -2.236234243297525, 8);
  sqcRYGate(q, -3.100745328202375, 9);
  sqcRZGate(q, -1.453885578586851, 9);
  sqcRYGate(q, 1.628913565320409, 10);
  sqcRZGate(q, 0.7897237878859923, 10);
  sqcRYGate(q, -1.570268222768748, 11);
  sqcRZGate(q, -3.0876914756460887, 11);
  sqcRYGate(q, -0.6142427476035517, 12);
  sqcRZGate(q, 0.9251928548748047, 12);
  sqcRYGate(q, 1.3826745949066979, 13);
  sqcRZGate(q, -0.05856614648669556, 13);
  sqcRYGate(q, -0.6591283878268941, 14);
  sqcRZGate(q, -3.127288203814042, 14);
  sqcRYGate(q, 0.2209388724166983, 15);
  sqcRZGate(q, 2.0011325069493986, 15);
  sqcRYGate(q, -1.587195295728305, 16);
  sqcRZGate(q, 1.5406097169390935, 16);
  sqcRYGate(q, -3.078013222992763, 17);
  sqcRZGate(q, -2.305412012549385, 17);
  sqcRYGate(q, 0.9388420266726945, 18);
  sqcRZGate(q, 3.027217851647532, 18);
  sqcRYGate(q, -1.9300305218750733, 19);
  sqcRZGate(q, -2.3867742822133833, 19);
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
  sqcRYGate(q, -1.5356219306093208, 0);
  sqcRZGate(q, -2.6298544339349768, 0);
  sqcRYGate(q, -3.133277344452156, 1);
  sqcRZGate(q, -0.5619218482390896, 1);
  sqcRYGate(q, -1.3575222904892739, 2);
  sqcRZGate(q, 2.280568417560426, 2);
  sqcRYGate(q, 1.0176518423463115, 3);
  sqcRZGate(q, 3.0551221622361573, 3);
  sqcRYGate(q, 1.8360439993786333, 4);
  sqcRZGate(q, 0.3797167373532468, 4);
  sqcRYGate(q, -1.567725949035085, 5);
  sqcRZGate(q, -0.012303239001249555, 5);
  sqcRYGate(q, -1.8209553659583362, 6);
  sqcRZGate(q, 1.103783256592953, 6);
  sqcRYGate(q, 2.9709703735667827, 7);
  sqcRZGate(q, 2.023828999902685, 7);
  sqcRYGate(q, -1.539304510371222, 8);
  sqcRZGate(q, -0.8721140649827159, 8);
  sqcRYGate(q, -1.5156415985168132, 9);
  sqcRZGate(q, 2.254667549042638, 9);
  sqcRYGate(q, 0.15679706725763598, 10);
  sqcRZGate(q, 0.02384711462502801, 10);
  sqcRYGate(q, -0.4974488966133339, 11);
  sqcRZGate(q, -0.04932200524623736, 11);
  sqcRYGate(q, -1.5704277696667557, 12);
  sqcRZGate(q, 1.3744302756260245, 12);
  sqcRYGate(q, 2.3584740700042452, 13);
  sqcRZGate(q, 0.0003977097411108792, 13);
  sqcRYGate(q, 0.049635711132892446, 14);
  sqcRZGate(q, 3.0501753418320203, 14);
  sqcRYGate(q, 2.6037775853798015, 15);
  sqcRZGate(q, 0.2910328302390242, 15);
  sqcRYGate(q, -1.4921722679798544, 16);
  sqcRZGate(q, -1.3080539556595816, 16);
  sqcRYGate(q, -3.1396307255580544, 17);
  sqcRZGate(q, 2.8536327367367558, 17);
  sqcRYGate(q, 1.1209355913062016, 18);
  sqcRZGate(q, -0.36292438371838553, 18);
  sqcRYGate(q, -2.4605995958776954, 19);
  sqcRZGate(q, -3.0950781583261366, 19);
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
  sqcRYGate(q, -0.17794354655357836, 0);
  sqcRZGate(q, 1.0057081085579131, 0);
  sqcRYGate(q, 1.6010571756822078, 1);
  sqcRZGate(q, -1.56959278464259, 1);
  sqcRYGate(q, 1.8093594302831562, 2);
  sqcRZGate(q, 0.5634135684362169, 2);
  sqcRYGate(q, 3.09925556664801, 3);
  sqcRZGate(q, 1.8509719028875136, 3);
  sqcRYGate(q, 3.1408997844528397, 4);
  sqcRZGate(q, -2.759348980109158, 4);
  sqcRYGate(q, -1.6196796419453854, 5);
  sqcRZGate(q, -2.4042316567838755, 5);
  sqcRYGate(q, -0.08667607372829533, 6);
  sqcRZGate(q, -1.0614847928949098, 6);
  sqcRYGate(q, -1.1466713862313016, 7);
  sqcRZGate(q, -0.08026033829106184, 7);
  sqcRYGate(q, 0.1158258227221225, 8);
  sqcRZGate(q, -0.7322989384121614, 8);
  sqcRYGate(q, 0.026867890815801765, 9);
  sqcRZGate(q, -1.8347643532329176, 9);
  sqcRYGate(q, 3.0705382529870278, 10);
  sqcRZGate(q, 0.7449633173234016, 10);
  sqcRYGate(q, 0.19690306074419128, 11);
  sqcRZGate(q, 2.8170208544759108, 11);
  sqcRYGate(q, -3.1135584513585632, 12);
  sqcRZGate(q, -0.1815306498318142, 12);
  sqcRYGate(q, 1.570948253153433, 13);
  sqcRZGate(q, 1.5892384340875076, 13);
  sqcRYGate(q, 3.1402942695754064, 14);
  sqcRZGate(q, -0.22099282040214538, 14);
  sqcRYGate(q, 0.14166364243031163, 15);
  sqcRZGate(q, -1.3794800718954079, 15);
  sqcRYGate(q, -1.580996987276325, 16);
  sqcRZGate(q, 1.5237376088236005, 16);
  sqcRYGate(q, -1.5796034997845703, 17);
  sqcRZGate(q, -1.521705947816169, 17);
  sqcRYGate(q, 0.15776489407285688, 18);
  sqcRZGate(q, 0.8015835190790774, 18);
  sqcRYGate(q, -2.7603716302874894, 19);
  sqcRZGate(q, 2.523411474572373, 19);
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
  sqcRYGate(q, 0.2345678087002243, 0);
  sqcRZGate(q, -3.1360334041588303, 0);
  sqcRYGate(q, 1.5850965521812368, 1);
  sqcRZGate(q, -2.197287815176981, 1);
  sqcRYGate(q, -0.026795645613094443, 2);
  sqcRZGate(q, 1.0299455892637006, 2);
  sqcRYGate(q, 2.332320171264582, 3);
  sqcRZGate(q, 2.069659411809436, 3);
  sqcRYGate(q, -1.7925633521910198, 4);
  sqcRZGate(q, -3.138236342539294, 4);
  sqcRYGate(q, -0.0028051794448646916, 5);
  sqcRZGate(q, 2.36559391395191, 5);
  sqcRYGate(q, 0.024336134920144303, 6);
  sqcRZGate(q, -2.4299041397034875, 6);
  sqcRYGate(q, 2.2594301240502634, 7);
  sqcRZGate(q, 3.099727931453541, 7);
  sqcRYGate(q, 0.13171954668403973, 8);
  sqcRZGate(q, 1.7706337432248969, 8);
  sqcRYGate(q, -2.8236235544481354, 9);
  sqcRZGate(q, 2.679088234601528, 9);
  sqcRYGate(q, -1.5309009023566418, 10);
  sqcRZGate(q, -3.061965765748657, 10);
  sqcRYGate(q, 3.097397236507624, 11);
  sqcRZGate(q, 2.8659516719210565, 11);
  sqcRYGate(q, -1.6070680567573765, 12);
  sqcRZGate(q, 1.790294291442414, 12);
  sqcRYGate(q, 1.6203215777395634, 13);
  sqcRZGate(q, 0.8119585660984986, 13);
  sqcRYGate(q, -1.5704307153725612, 14);
  sqcRZGate(q, -1.7407555567163042, 14);
  sqcRYGate(q, -1.5269916231904594, 15);
  sqcRZGate(q, -1.561953254322506, 15);
  sqcRYGate(q, 1.5917391243425945, 16);
  sqcRZGate(q, -1.5168250021558585, 16);
  sqcRYGate(q, -0.5670728093253244, 17);
  sqcRZGate(q, 3.12775573725956, 17);
  sqcRYGate(q, -2.6970611197949785, 18);
  sqcRZGate(q, 0.012722554004398036, 18);
  sqcRYGate(q, 1.5364549140033903, 19);
  sqcRZGate(q, -2.1869429774802933, 19);
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
  sqcRYGate(q, -1.651624881518921, 0);
  sqcRZGate(q, 2.8336853055204734, 0);
  sqcRYGate(q, -0.04129620205709936, 1);
  sqcRZGate(q, 3.0118530001974464, 1);
  sqcRYGate(q, 1.5637491361001947, 2);
  sqcRZGate(q, 1.670436312168504, 2);
  sqcRYGate(q, -0.21647091277304045, 3);
  sqcRZGate(q, 0.7439238632604468, 3);
  sqcRYGate(q, -1.5702519942002027, 4);
  sqcRZGate(q, -1.5614125713226403, 4);
  sqcRYGate(q, -1.8451557947495252, 5);
  sqcRZGate(q, -2.7967218138240706, 5);
  sqcRYGate(q, 0.1412516392145804, 6);
  sqcRZGate(q, -2.323765157089759, 6);
  sqcRYGate(q, 2.07640581376219, 7);
  sqcRZGate(q, 1.2256129959106525, 7);
  sqcRYGate(q, -0.34710773472489853, 8);
  sqcRZGate(q, 1.9578688289232868, 8);
  sqcRYGate(q, 0.007751429682672395, 9);
  sqcRZGate(q, 3.057658491192918, 9);
  sqcRYGate(q, -0.5017963411995677, 10);
  sqcRZGate(q, -0.9902651421935751, 10);
  sqcRYGate(q, 2.005298125592487, 11);
  sqcRZGate(q, 0.006209646944542513, 11);
  sqcRYGate(q, -2.678612277899172, 12);
  sqcRZGate(q, -3.1293521176255306, 12);
  sqcRYGate(q, -2.088639757346243, 13);
  sqcRZGate(q, 2.926909008566338, 13);
  sqcRYGate(q, 1.5646697027725676, 14);
  sqcRZGate(q, -0.032063513454479775, 14);
  sqcRYGate(q, 1.5713632090850886, 15);
  sqcRZGate(q, 0.2571524208549203, 15);
  sqcRYGate(q, -3.1219259937265287, 16);
  sqcRZGate(q, 1.5591353907055028, 16);
  sqcRYGate(q, 1.5879714528217237, 17);
  sqcRZGate(q, 0.029507805029853174, 17);
  sqcRYGate(q, 0.618451018771693, 18);
  sqcRZGate(q, 0.08831597255615078, 18);
  sqcRYGate(q, 0.06775407003548152, 19);
  sqcRZGate(q, 2.4731940082639845, 19);
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
  sqcRYGate(q, 2.68444480917084, 0);
  sqcRZGate(q, -2.894348420743669, 0);
  sqcRYGate(q, 0.3178626104249549, 1);
  sqcRZGate(q, -0.8733318373298352, 1);
  sqcRYGate(q, 3.1029231607109096, 2);
  sqcRZGate(q, 0.32239070653401924, 2);
  sqcRYGate(q, 1.6685024503417898, 3);
  sqcRZGate(q, -1.6765460403273618, 3);
  sqcRYGate(q, -1.4656332992153727, 4);
  sqcRZGate(q, -2.336284872213058, 4);
  sqcRYGate(q, -2.524257372691972, 5);
  sqcRZGate(q, -1.2606254967795287, 5);
  sqcRYGate(q, 1.5585248932249582, 6);
  sqcRZGate(q, 2.8227615426053037, 6);
  sqcRYGate(q, 2.252436606834502, 7);
  sqcRZGate(q, -2.1811306096527763, 7);
  sqcRYGate(q, 2.2574979491059297, 8);
  sqcRZGate(q, 1.9818101880358334, 8);
  sqcRYGate(q, -0.004953421456451302, 9);
  sqcRZGate(q, -1.3881670417800311, 9);
  sqcRYGate(q, 3.0470657150551315, 10);
  sqcRZGate(q, -0.8288137441165446, 10);
  sqcRYGate(q, 2.7260994486897636, 11);
  sqcRZGate(q, 2.8285368845228525, 11);
  sqcRYGate(q, 3.1385154759472615, 12);
  sqcRZGate(q, -2.9863827157654375, 12);
  sqcRYGate(q, -1.0563248226429893, 13);
  sqcRZGate(q, -2.2780441258250175, 13);
  sqcRYGate(q, 1.6220189483198615, 14);
  sqcRZGate(q, -2.9328338492022556, 14);
  sqcRYGate(q, -2.255552630984576, 15);
  sqcRZGate(q, -1.510040647200471, 15);
  sqcRYGate(q, -1.570784994852962, 16);
  sqcRZGate(q, 3.111463028956709, 16);
  sqcRYGate(q, 2.058170921145125, 17);
  sqcRZGate(q, -3.1285032124255276, 17);
  sqcRYGate(q, 1.5720644970515565, 18);
  sqcRZGate(q, 0.00039342313244105753, 18);
  sqcRYGate(q, -2.3093529184094876, 19);
  sqcRZGate(q, -0.5116771361437648, 19);
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
  sqcRYGate(q, -3.092595336600142, 0);
  sqcRZGate(q, -0.022581415940804234, 0);
  sqcRYGate(q, 3.084204897239842, 1);
  sqcRZGate(q, 3.103968867532482, 1);
  sqcRYGate(q, -0.0006528615313988596, 2);
  sqcRZGate(q, 2.911668612094484, 2);
  sqcRYGate(q, -2.8579136721013794, 3);
  sqcRZGate(q, 0.0011165711804288494, 3);
  sqcRYGate(q, 3.141111010601326, 4);
  sqcRZGate(q, -0.6913987160905578, 4);
  sqcRYGate(q, 2.5810306759184787, 5);
  sqcRZGate(q, 1.6475669421156562, 5);
  sqcRYGate(q, -3.059797482327264, 6);
  sqcRZGate(q, 1.1035093202562085, 6);
  sqcRYGate(q, -3.1260066030223563, 7);
  sqcRZGate(q, -1.9540500563987493, 7);
  sqcRYGate(q, 2.866559647058372, 8);
  sqcRZGate(q, -1.1435896176510096, 8);
  sqcRYGate(q, 3.121181186605132, 9);
  sqcRZGate(q, -2.570357319408532, 9);
  sqcRYGate(q, 0.000368469132284055, 10);
  sqcRZGate(q, 1.763853026351975, 10);
  sqcRYGate(q, 0.006830635663807705, 11);
  sqcRZGate(q, -3.0417883500339133, 11);
  sqcRYGate(q, -2.3130278643591677, 12);
  sqcRZGate(q, -1.929517583881461, 12);
  sqcRYGate(q, 3.120513313462201, 13);
  sqcRZGate(q, -2.7812557576852663, 13);
  sqcRYGate(q, -3.076556481618391, 14);
  sqcRZGate(q, -1.3128361346226098, 14);
  sqcRYGate(q, 0.2218397267197032, 15);
  sqcRZGate(q, 1.4702220698195503, 15);
  sqcRYGate(q, -3.1334047977958828, 16);
  sqcRZGate(q, -3.093962153081791, 16);
  sqcRYGate(q, 1.5704254112676883, 17);
  sqcRZGate(q, -0.08377157782169409, 17);
  sqcRYGate(q, -1.8848324292861365, 18);
  sqcRZGate(q, 1.5696739545543614, 18);
  sqcRYGate(q, -3.137487312065244, 19);
  sqcRZGate(q, -0.9097292129498786, 19);
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
  sqcRYGate(q, -2.8731194001146543, 0);
  sqcRZGate(q, 0.8391987951195929, 0);
  sqcRYGate(q, -1.772009281116973, 1);
  sqcRZGate(q, -1.923392308788713, 1);
  sqcRYGate(q, 1.5036860253847195, 2);
  sqcRZGate(q, 1.5724481275780304, 2);
  sqcRYGate(q, 2.395313839962241, 3);
  sqcRZGate(q, 0.22481162465870067, 3);
  sqcRYGate(q, 1.586846467025378, 4);
  sqcRZGate(q, -1.6633583594147823, 4);
  sqcRYGate(q, -2.561190528163834, 5);
  sqcRZGate(q, 1.7267943893206992, 5);
  sqcRYGate(q, -3.1347373420129103, 6);
  sqcRZGate(q, -1.7926956095797073, 6);
  sqcRYGate(q, -2.1045235952487977, 7);
  sqcRZGate(q, -1.7657294996912691, 7);
  sqcRYGate(q, -2.987421314938633, 8);
  sqcRZGate(q, 2.682881614188991, 8);
  sqcRYGate(q, -1.7203945130728773, 9);
  sqcRZGate(q, -1.7802963086760828, 9);
  sqcRYGate(q, 0.17949556619524643, 10);
  sqcRZGate(q, -1.8903822139087234, 10);
  sqcRYGate(q, -3.1302563023525964, 11);
  sqcRZGate(q, -0.22851821181978604, 11);
  sqcRYGate(q, -3.140830715152589, 12);
  sqcRZGate(q, 1.1989536401900907, 12);
  sqcRYGate(q, 2.4602912199101183, 13);
  sqcRZGate(q, -0.41009986250309094, 13);
  sqcRYGate(q, 1.5673000388234983, 14);
  sqcRZGate(q, 1.5744162482784474, 14);
  sqcRYGate(q, 2.2382618248013184, 15);
  sqcRZGate(q, 1.2505856169923895, 15);
  sqcRYGate(q, 1.226270954629854, 16);
  sqcRZGate(q, 1.5319058676341553, 16);
  sqcRYGate(q, 0.6940449858733179, 17);
  sqcRZGate(q, -2.1000630797166573, 17);
  sqcRYGate(q, 1.5707249292857857, 18);
  sqcRZGate(q, -3.1399109260631706, 18);
  sqcRYGate(q, 1.7848629761050532, 19);
  sqcRZGate(q, 1.4804505289161245, 19);
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
  sqcRYGate(q, -3.1096500490544265, 0);
  sqcRZGate(q, 2.8672381256204753, 0);
  sqcRYGate(q, -1.5659900034829777, 1);
  sqcRZGate(q, 1.5709056847341225, 1);
  sqcRYGate(q, -1.5709795151611754, 2);
  sqcRZGate(q, 0.0005877260860295354, 2);
  sqcRYGate(q, -3.139675824440893, 3);
  sqcRZGate(q, 1.676940998245004, 3);
  sqcRYGate(q, -3.0933733182836907, 4);
  sqcRZGate(q, -0.004174027568370356, 4);
  sqcRYGate(q, -1.5722626005391485, 5);
  sqcRZGate(q, 0.1481295405926662, 5);
  sqcRYGate(q, -3.0463472201039687, 6);
  sqcRZGate(q, -0.6007250869208762, 6);
  sqcRYGate(q, 0.6765999376101526, 7);
  sqcRZGate(q, 0.0780706547590884, 7);
  sqcRYGate(q, -0.9600836646991375, 8);
  sqcRZGate(q, -1.5312737368859133, 8);
  sqcRYGate(q, 1.4640018403301713, 9);
  sqcRZGate(q, 0.8187600622887947, 9);
  sqcRYGate(q, -1.5447448156383439, 10);
  sqcRZGate(q, 3.112375593592037, 10);
  sqcRYGate(q, 1.9808805407290047, 11);
  sqcRZGate(q, 0.4099820138680074, 11);
  sqcRYGate(q, -2.456021248045318, 12);
  sqcRZGate(q, 0.19058827568291029, 12);
  sqcRYGate(q, -1.5095331634522475, 13);
  sqcRZGate(q, 0.578507139516125, 13);
  sqcRYGate(q, -1.4840588823496343, 14);
  sqcRZGate(q, -1.1480936681485845, 14);
  sqcRYGate(q, 2.981357796518018, 15);
  sqcRZGate(q, -0.13636098252413031, 15);
  sqcRYGate(q, 2.3249551550166294, 16);
  sqcRZGate(q, 0.02735052788653192, 16);
  sqcRYGate(q, -0.040870149964123324, 17);
  sqcRZGate(q, -2.5662925845731706, 17);
  sqcRYGate(q, -1.0416128170152597, 18);
  sqcRZGate(q, 1.6497817317190195, 18);
  sqcRYGate(q, 1.5707857787431014, 19);
  sqcRZGate(q, -1.99112492566445, 19);
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
  sqcRYGate(q, -3.0488374380064713, 0);
  sqcRZGate(q, 3.0471820458853625, 0);
  sqcRYGate(q, -1.5715448270913566, 1);
  sqcRZGate(q, -0.0010333740860755116, 1);
  sqcRYGate(q, 1.6552820432749815, 2);
  sqcRZGate(q, 0.00010020887283790357, 2);
  sqcRYGate(q, -0.09437771540681646, 3);
  sqcRZGate(q, -0.43434599901834847, 3);
  sqcRYGate(q, 1.6039139600964134, 4);
  sqcRZGate(q, 1.2150552256316756, 4);
  sqcRYGate(q, -1.7040921036215082, 5);
  sqcRZGate(q, 1.5387687124241543, 5);
  sqcRYGate(q, -0.0044468956486675565, 6);
  sqcRZGate(q, -1.1980716572098666, 6);
  sqcRYGate(q, -2.7010908184665574, 7);
  sqcRZGate(q, -3.0487853579057433, 7);
  sqcRYGate(q, -3.138723368079493, 8);
  sqcRZGate(q, 1.6635546426286718, 8);
  sqcRYGate(q, -3.0735923538254135, 9);
  sqcRZGate(q, -1.2384691608318916, 9);
  sqcRYGate(q, 1.2799709541823647, 10);
  sqcRZGate(q, 1.4778593786774725, 10);
  sqcRYGate(q, 0.11914137366780993, 11);
  sqcRZGate(q, 1.2148260074828783, 11);
  sqcRYGate(q, 1.3882785313051262, 12);
  sqcRZGate(q, 1.2413688096020012, 12);
  sqcRYGate(q, 0.7854035011822988, 13);
  sqcRZGate(q, -1.747285524280633, 13);
  sqcRYGate(q, 3.076320901613127, 14);
  sqcRZGate(q, 1.2924663511362535, 14);
  sqcRYGate(q, -0.023864716919123733, 15);
  sqcRZGate(q, 0.010414019176638867, 15);
  sqcRYGate(q, -2.5950702854311625, 16);
  sqcRZGate(q, 0.04104914853147691, 16);
  sqcRYGate(q, 2.7677628162912997, 17);
  sqcRZGate(q, -1.0143908368153476, 17);
  sqcRYGate(q, -1.7377192128271415, 18);
  sqcRZGate(q, -1.341948374818293, 18);
  sqcRYGate(q, 1.443262603134707, 19);
  sqcRZGate(q, 2.3209710846994778, 19);
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
  sqcRYGate(q, 1.5711643927583605, 0);
  sqcRZGate(q, -2.5687997165244316, 0);
  sqcRYGate(q, -1.606636870157332, 1);
  sqcRZGate(q, 0.696791663900381, 1);
  sqcRYGate(q, -1.5713866527373836, 2);
  sqcRZGate(q, -2.811695274885904, 2);
  sqcRYGate(q, -0.0065323953023472825, 3);
  sqcRZGate(q, -2.0184575990803153, 3);
  sqcRYGate(q, 0.039008666860599665, 4);
  sqcRZGate(q, 2.579040366206933, 4);
  sqcRYGate(q, -1.5313056334331314, 5);
  sqcRZGate(q, 1.617647894430611, 5);
  sqcRYGate(q, 3.0198699418333654, 6);
  sqcRZGate(q, 3.0030908264589167, 6);
  sqcRYGate(q, 2.456666118867325, 7);
  sqcRZGate(q, 0.018292977216602398, 7);
  sqcRYGate(q, -0.9638061473847999, 8);
  sqcRZGate(q, 0.42031484836846383, 8);
  sqcRYGate(q, 0.14306604845342097, 9);
  sqcRZGate(q, -2.1297455029601977, 9);
  sqcRYGate(q, -3.0148940498473915, 10);
  sqcRZGate(q, 3.0448261765564486, 10);
  sqcRYGate(q, 0.024170764013014007, 11);
  sqcRZGate(q, -0.15833455093647117, 11);
  sqcRYGate(q, 0.02586437404402009, 12);
  sqcRZGate(q, -1.927884632338224, 12);
  sqcRYGate(q, 3.1251507935278102, 13);
  sqcRZGate(q, -1.999428108187268, 13);
  sqcRYGate(q, -3.0531860339749652, 14);
  sqcRZGate(q, -0.8726381534909944, 14);
  sqcRYGate(q, 0.17503185235934726, 15);
  sqcRZGate(q, 1.3281521792457074, 15);
  sqcRYGate(q, 2.289326288141629, 16);
  sqcRZGate(q, -0.9940583052179219, 16);
  sqcRYGate(q, 0.023628956019133618, 17);
  sqcRZGate(q, 1.8771350255225236, 17);
  sqcRYGate(q, -2.9835633921693674, 18);
  sqcRZGate(q, -3.1209407502866395, 18);
  sqcRYGate(q, 0.0008400824900229864, 19);
  sqcRZGate(q, 1.0348684878438308, 19);
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
  sqcRYGate(q, -2.9208945265336017, 0);
  sqcRZGate(q, 1.6420867743635812, 0);
  sqcRYGate(q, 2.963095335747074, 1);
  sqcRZGate(q, -1.3835547722496777, 1);
  sqcRYGate(q, -2.7732655451300037, 2);
  sqcRZGate(q, 1.3927687761182632, 2);
  sqcRYGate(q, 2.963411764805305, 3);
  sqcRZGate(q, -1.3801159962450704, 3);
  sqcRYGate(q, -0.17727516237763064, 4);
  sqcRZGate(q, 3.0827544776182796, 4);
  sqcRYGate(q, 1.6789173309863545, 5);
  sqcRZGate(q, 2.633572742215868, 5);
  sqcRYGate(q, 1.4514096452678935, 6);
  sqcRZGate(q, -0.48692490350672424, 6);
  sqcRYGate(q, -2.998703494466357, 7);
  sqcRZGate(q, 1.2902911787945794, 7);
  sqcRYGate(q, -2.946552020139815, 8);
  sqcRZGate(q, 1.6715423544291124, 8);
  sqcRYGate(q, -0.2175677616320741, 9);
  sqcRZGate(q, -2.4061857790578394, 9);
  sqcRYGate(q, -1.3938994611965745, 10);
  sqcRZGate(q, 1.5552466446193822, 10);
  sqcRYGate(q, 1.4664658951003877, 11);
  sqcRZGate(q, -1.7521108158715024, 11);
  sqcRYGate(q, -0.012187625344532846, 12);
  sqcRZGate(q, 2.5379123025030554, 12);
  sqcRYGate(q, 0.7084534389453392, 13);
  sqcRZGate(q, -1.0986600122602088, 13);
  sqcRYGate(q, 1.283721306938693, 14);
  sqcRZGate(q, 0.3768621336187498, 14);
  sqcRYGate(q, -1.6526347116618392, 15);
  sqcRZGate(q, 2.8225558219427267, 15);
  sqcRYGate(q, -1.0070006740062194, 16);
  sqcRZGate(q, -0.42435769475077295, 16);
  sqcRYGate(q, -0.1979244958911522, 17);
  sqcRZGate(q, -2.755416443358635, 17);
  sqcRYGate(q, 1.810524934889338, 18);
  sqcRZGate(q, 1.6693070150194491, 18);
  sqcRYGate(q, -1.7142183907274378, 19);
  sqcRZGate(q, -1.426168756221469, 19);

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
