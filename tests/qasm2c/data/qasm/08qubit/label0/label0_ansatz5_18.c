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

  sqcRYGate(q, 0.5328978062470271, 0);
  sqcRYGate(q, -0.12928907412627522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5498729729067495, 0);
  sqcRYGate(q, 1.2287864820445784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0240263723463716, 2);
  sqcRYGate(q, 1.8597966956066472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4396406137098591, 2);
  sqcRYGate(q, 2.342297737162978, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9058568278147969, 4);
  sqcRYGate(q, -1.0867414501988795, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8520100778096604, 4);
  sqcRYGate(q, -0.49733798320496947, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.073032726034417, 6);
  sqcRYGate(q, 1.1466439677354776, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.162631951015996, 6);
  sqcRYGate(q, 2.935897341794816, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4126683563722107, 1);
  sqcRYGate(q, -0.9286213628637227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6301138669814712, 1);
  sqcRYGate(q, -2.6288898983925404, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1587988303111958, 3);
  sqcRYGate(q, 1.9951257182918871, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5657694966888087, 3);
  sqcRYGate(q, 1.1628351750639272, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6974365911030045, 5);
  sqcRYGate(q, -2.8510951839853016, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.369259593953964, 5);
  sqcRYGate(q, -1.2670301644747504, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.750378328740989, 0);
  sqcRYGate(q, -0.2112324243330752, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1042436226989887, 0);
  sqcRYGate(q, -0.6117120729371726, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1391091901176504, 2);
  sqcRYGate(q, 0.5794149246050475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7761293255287045, 2);
  sqcRYGate(q, -0.9177820068411418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.03238758508703, 4);
  sqcRYGate(q, 2.505667870244934, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.903487975292892, 4);
  sqcRYGate(q, -1.6517430889386586, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.869376494022509, 6);
  sqcRYGate(q, -2.250127601479803, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9241972195346743, 6);
  sqcRYGate(q, 1.4294330697887423, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.41575443985071714, 1);
  sqcRYGate(q, 0.12202423828133124, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6385847098823686, 1);
  sqcRYGate(q, 2.8874214564582337, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.05626916174801, 3);
  sqcRYGate(q, -2.940160528281205, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.473568155988018, 3);
  sqcRYGate(q, -1.3478263569078996, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9946957130817318, 5);
  sqcRYGate(q, 2.258218212281279, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9203746879865349, 5);
  sqcRYGate(q, -1.2524167613386101, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3744047060193596, 0);
  sqcRYGate(q, 1.4774348129817234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.771812514519977, 0);
  sqcRYGate(q, -2.703527761840212, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6442087941104395, 2);
  sqcRYGate(q, 0.4718056238044726, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2833802513952897, 2);
  sqcRYGate(q, -0.42265720583081545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1699521857449686, 4);
  sqcRYGate(q, -1.9587163095468134, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7548182195776958, 4);
  sqcRYGate(q, 2.118803977890396, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8682212687888335, 6);
  sqcRYGate(q, 2.0833574056090467, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7829533512169364, 6);
  sqcRYGate(q, -2.5093386951886365, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.07085037750704, 1);
  sqcRYGate(q, 1.9772215820188876, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1691087997798397, 1);
  sqcRYGate(q, 0.34508208088304393, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.572074186466076, 3);
  sqcRYGate(q, 0.2299715888342393, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5705375812059486, 3);
  sqcRYGate(q, -2.385659230209993, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0078456188527327, 5);
  sqcRYGate(q, -0.44158683929375814, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7504465612075562, 5);
  sqcRYGate(q, 0.8183419972940724, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3405946347153229, 0);
  sqcRYGate(q, -1.264596977809243, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3204050402588237, 0);
  sqcRYGate(q, -0.28286713611455977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8570513894143756, 2);
  sqcRYGate(q, -0.6101033342568027, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0728310392534546, 2);
  sqcRYGate(q, -0.24402976235408882, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.816277120522076, 4);
  sqcRYGate(q, 2.5032931525160023, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.425420364702342, 4);
  sqcRYGate(q, -2.2672129189386037, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5993656374960903, 6);
  sqcRYGate(q, 0.36463777189556534, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.36828085710112, 6);
  sqcRYGate(q, 1.481712406992748, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.73297147683658, 1);
  sqcRYGate(q, -0.6192383481166459, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.036882548179656, 1);
  sqcRYGate(q, 1.131713353219677, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9991601732841906, 3);
  sqcRYGate(q, 1.3654846583094926, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6324675174205185, 3);
  sqcRYGate(q, 3.103827554719805, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3670268586347074, 5);
  sqcRYGate(q, 1.9349573878873443, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6768594252610742, 5);
  sqcRYGate(q, 2.5443526992194094, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.534329888875102, 0);
  sqcRYGate(q, -1.5357346139778798, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0198023866215298, 0);
  sqcRYGate(q, -2.573045959162228, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6949953825381905, 2);
  sqcRYGate(q, 1.3017965111169643, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0039330550972778, 2);
  sqcRYGate(q, 1.2616875463914683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.463635465728939, 4);
  sqcRYGate(q, 2.1064129267510676, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.766989385740161, 4);
  sqcRYGate(q, 0.1998451394120617, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7575762193833726, 6);
  sqcRYGate(q, 1.4312231750293254, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.401668716420962, 6);
  sqcRYGate(q, -0.21727580938812707, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6212934519544553, 1);
  sqcRYGate(q, -1.5283328687535105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1134452180293064, 1);
  sqcRYGate(q, -2.9866062346923172, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4186446999517996, 3);
  sqcRYGate(q, 2.2495758620935975, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9480942590945465, 3);
  sqcRYGate(q, -2.212502669688978, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9018171123332317, 5);
  sqcRYGate(q, -2.986498352475137, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3155988532154117, 5);
  sqcRYGate(q, 0.4972557481779711, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3336707142163461, 0);
  sqcRYGate(q, -1.6567273282505255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8601526711466556, 0);
  sqcRYGate(q, -1.2817266878311635, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.211523070942021, 2);
  sqcRYGate(q, 0.2660697125514955, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.512369641165416, 2);
  sqcRYGate(q, -0.18940590165741622, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.150289913511296, 4);
  sqcRYGate(q, 3.1378053958626078, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0284540635256905, 4);
  sqcRYGate(q, -2.059036325014195, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5894296435805817, 6);
  sqcRYGate(q, -1.067061929531006, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1243139644520803, 6);
  sqcRYGate(q, -1.5400298758259285, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2292078200843521, 1);
  sqcRYGate(q, -0.7621676701559617, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1448999824102444, 1);
  sqcRYGate(q, 0.01737178715540999, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8782639138528625, 3);
  sqcRYGate(q, 0.629512727972811, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.310219574204896, 3);
  sqcRYGate(q, 1.0073882911502574, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2955615864789347, 5);
  sqcRYGate(q, -2.565967142545877, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9378137719660304, 5);
  sqcRYGate(q, -2.626051793884175, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.95136167081285, 0);
  sqcRYGate(q, 1.9615162650676148, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21232970296338657, 0);
  sqcRYGate(q, 0.22098441148369788, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8237862501442174, 2);
  sqcRYGate(q, 2.907242412530085, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.350779380300562, 2);
  sqcRYGate(q, 0.9943547045547756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2776407985065372, 4);
  sqcRYGate(q, -2.3490724482395944, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3398373089724034, 4);
  sqcRYGate(q, -0.5928834380341634, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.92587705110274, 6);
  sqcRYGate(q, 1.6669116288967052, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7300671014275526, 6);
  sqcRYGate(q, 0.634219501679118, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.87622904819041, 1);
  sqcRYGate(q, -0.9074373876646806, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.033349204249491, 1);
  sqcRYGate(q, -1.8314662275546933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.783994198222926, 3);
  sqcRYGate(q, -0.26421455406444977, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.357595035526816, 3);
  sqcRYGate(q, -0.2309113162628009, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7505057300681357, 5);
  sqcRYGate(q, 2.0628310936863485, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7133148595268208, 5);
  sqcRYGate(q, -2.2965143847677805, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4294841899790733, 0);
  sqcRYGate(q, 1.0757959933023187, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5673998183336203, 0);
  sqcRYGate(q, -1.19827951879991, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0940278638227605, 2);
  sqcRYGate(q, 1.2180500005738029, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2426813983460077, 2);
  sqcRYGate(q, -0.29648335738025194, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.76436738153927, 4);
  sqcRYGate(q, 1.5409863492312201, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5607820450861645, 4);
  sqcRYGate(q, -1.9476891776760512, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8073063244199536, 6);
  sqcRYGate(q, 1.1199558551409803, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0997795784122717, 6);
  sqcRYGate(q, 2.5685799720286426, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0435211458378073, 1);
  sqcRYGate(q, -1.1583457822384267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.112558530242884, 1);
  sqcRYGate(q, 0.25674197831939516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.325982091414649, 3);
  sqcRYGate(q, -1.4537233991953737, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3058292109315561, 3);
  sqcRYGate(q, 2.1896181574839515, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9284974484011937, 5);
  sqcRYGate(q, -1.8218442890536728, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2629717724952619, 5);
  sqcRYGate(q, -2.2264471747987633, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.286297900597855, 0);
  sqcRYGate(q, 2.9951857464381693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3999783532528642, 0);
  sqcRYGate(q, 2.1915810236824322, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.112533555406647, 2);
  sqcRYGate(q, -1.2085575302766847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7227943496395994, 2);
  sqcRYGate(q, -0.4178482644455697, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9828076906857799, 4);
  sqcRYGate(q, -0.5464447205892196, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.418697376047577, 4);
  sqcRYGate(q, -2.080061461939274, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5576213949161763, 6);
  sqcRYGate(q, -1.6977798278940963, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.43210913478124, 6);
  sqcRYGate(q, -0.025900887895144078, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0295307428440026, 1);
  sqcRYGate(q, 2.8487343319072322, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9852571493253421, 1);
  sqcRYGate(q, 0.7199550721574166, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1432437893393694, 3);
  sqcRYGate(q, -0.8868054179299456, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6056238652945449, 3);
  sqcRYGate(q, 0.0803360826084011, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.716606861290716, 5);
  sqcRYGate(q, -2.679483441399295, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0396382985780805, 5);
  sqcRYGate(q, -0.6291198814746056, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4655263568697228, 0);
  sqcRYGate(q, 2.3912176764778144, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9502961871951946, 0);
  sqcRYGate(q, -0.3102772901715705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9906493687149798, 2);
  sqcRYGate(q, 0.4603172092256083, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08310682711440652, 2);
  sqcRYGate(q, 1.9620365511910525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.018504052637835562, 4);
  sqcRYGate(q, 0.6549364743951156, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.568219587995797, 4);
  sqcRYGate(q, -1.415315288500685, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8202509958254777, 6);
  sqcRYGate(q, 1.1505706613385256, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8039284109046974, 6);
  sqcRYGate(q, 0.4915872769811829, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7498172611470246, 1);
  sqcRYGate(q, 2.6966745584301632, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.37133345395725775, 1);
  sqcRYGate(q, -0.8369861890720642, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7202469824296998, 3);
  sqcRYGate(q, -0.27412435233280397, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9886554452543823, 3);
  sqcRYGate(q, -1.507125743962554, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9710956775985295, 5);
  sqcRYGate(q, 1.1282237303552058, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3036844093587497, 5);
  sqcRYGate(q, -0.1741939979764826, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2689386726326024, 0);
  sqcRYGate(q, 0.682738427794586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9721856627929, 0);
  sqcRYGate(q, 2.208215234446567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9130668013104329, 2);
  sqcRYGate(q, -2.266031865315607, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9237261176018796, 2);
  sqcRYGate(q, -0.20449402647117762, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7188861608651909, 4);
  sqcRYGate(q, 2.1848745524598217, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0242394154644603, 4);
  sqcRYGate(q, 2.8009688237917705, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5899299102598291, 6);
  sqcRYGate(q, 2.1628266675027543, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6298222584425712, 6);
  sqcRYGate(q, -0.44736953768965726, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6711159117044012, 1);
  sqcRYGate(q, -2.7323957848111706, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3705220536113285, 1);
  sqcRYGate(q, 3.082445278451911, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5978952037086204, 3);
  sqcRYGate(q, -2.272622888393115, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9768398374534826, 3);
  sqcRYGate(q, -0.7417284086267939, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2884386250169744, 5);
  sqcRYGate(q, 1.2670334117301496, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5034981915446428, 5);
  sqcRYGate(q, -0.9471058408051479, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3396359585774791, 0);
  sqcRYGate(q, -2.173099971202327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8364829449568134, 0);
  sqcRYGate(q, -0.652818145396945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.225426123605671, 2);
  sqcRYGate(q, -2.721900509295152, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.32558851408015393, 2);
  sqcRYGate(q, -1.256601285710711, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09098415030106922, 4);
  sqcRYGate(q, 0.8795387148206775, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8343191496498705, 4);
  sqcRYGate(q, -1.0004415089126946, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.590173621008951, 6);
  sqcRYGate(q, 2.5707649216678545, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7562292329486615, 6);
  sqcRYGate(q, -1.8188413345159964, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5051578573334954, 1);
  sqcRYGate(q, -0.5901387190930645, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9801418125425423, 1);
  sqcRYGate(q, -1.6426025127049266, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.483657283730214, 3);
  sqcRYGate(q, 2.0146374317471243, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7190913947739261, 3);
  sqcRYGate(q, -3.08203937742286, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.133826849599442, 5);
  sqcRYGate(q, -3.1198592682055972, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8467520566631492, 5);
  sqcRYGate(q, 2.6703696346978694, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7779835969153543, 0);
  sqcRYGate(q, -2.0387948521236003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0914160497676901, 0);
  sqcRYGate(q, 1.450140478106709, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.332531299161317, 2);
  sqcRYGate(q, -2.534707893944297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.445459874162857, 2);
  sqcRYGate(q, 1.9127208996933258, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5277257056851808, 4);
  sqcRYGate(q, -1.5724814099942304, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5510836623976965, 4);
  sqcRYGate(q, -2.5936115602848098, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.21696232391078313, 6);
  sqcRYGate(q, -2.835132922752133, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.478605367022163, 6);
  sqcRYGate(q, -2.6831996247226706, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3046955960243549, 1);
  sqcRYGate(q, -1.7824988027843167, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8686727438154378, 1);
  sqcRYGate(q, 2.655878019141836, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.304171904574833, 3);
  sqcRYGate(q, -1.5241093956099885, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8592353961555745, 3);
  sqcRYGate(q, 1.6752646591212645, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.362496756470433, 5);
  sqcRYGate(q, 1.4173382597682804, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6024029743367445, 5);
  sqcRYGate(q, 0.206220282864218, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4683456269372046, 0);
  sqcRYGate(q, 0.07224235540520496, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07767895791408076, 0);
  sqcRYGate(q, -1.6246502657704736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3119519010749938, 2);
  sqcRYGate(q, 1.6256646222376425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2058707675981974, 2);
  sqcRYGate(q, -2.673009627723109, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3242703353975225, 4);
  sqcRYGate(q, -2.680414352528179, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2070722719411147, 4);
  sqcRYGate(q, 2.099975315799204, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0395226656194074, 6);
  sqcRYGate(q, -1.2045233343771145, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5879944539059743, 6);
  sqcRYGate(q, 0.6152067307372582, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0592274809738091, 1);
  sqcRYGate(q, -0.7209163652253379, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8849567115942599, 1);
  sqcRYGate(q, 0.5114753854473486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10921880375702503, 3);
  sqcRYGate(q, -2.8076832696456155, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.974349391639177, 3);
  sqcRYGate(q, 0.7949662555149541, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8206631077597846, 5);
  sqcRYGate(q, 1.3441855214422929, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0614733114505273, 5);
  sqcRYGate(q, -1.648633653696617, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1968662523736415, 0);
  sqcRYGate(q, 1.2558389920386877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.938468843338708, 0);
  sqcRYGate(q, 2.071717439698552, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4819641031704642, 2);
  sqcRYGate(q, -2.5372361370947663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1264344977443699, 2);
  sqcRYGate(q, -3.0388050432174096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6723460545236664, 4);
  sqcRYGate(q, 2.874437272755259, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7665701397461586, 4);
  sqcRYGate(q, -2.303713217993807, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1320443790229406, 6);
  sqcRYGate(q, 1.7404344886433805, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5734253570424651, 6);
  sqcRYGate(q, -2.4697673355214613, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3576877875960998, 1);
  sqcRYGate(q, -1.9497492137392403, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3073052131162273, 1);
  sqcRYGate(q, 1.5360216869493502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9185841183469332, 3);
  sqcRYGate(q, -2.4509990026029382, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3017227689678212, 3);
  sqcRYGate(q, 2.9238530731691146, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9651020176985257, 5);
  sqcRYGate(q, -0.3811834724597762, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.338588440859766, 5);
  sqcRYGate(q, 1.1567947357587935, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2571974400423733, 0);
  sqcRYGate(q, 0.8218265387408431, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8238711159356322, 0);
  sqcRYGate(q, 0.32459136045209647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.436780500175028, 2);
  sqcRYGate(q, 2.09080061473158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5215524843764197, 2);
  sqcRYGate(q, 2.0543742106142258, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.881432012091143, 4);
  sqcRYGate(q, 2.9271883374363967, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.35633604143144254, 4);
  sqcRYGate(q, 1.363883023634402, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.864158390381011, 6);
  sqcRYGate(q, -0.5935749314873058, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.034095206450661, 6);
  sqcRYGate(q, 1.4401482331371778, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.769557250453306, 1);
  sqcRYGate(q, -1.2476038186433698, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1543545124333154, 1);
  sqcRYGate(q, -0.22323908736082743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6033937131369242, 3);
  sqcRYGate(q, 2.8605422672958913, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6515525979830432, 3);
  sqcRYGate(q, -0.861404096541973, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9894536993348356, 5);
  sqcRYGate(q, 1.625077193046757, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2951555710173044, 5);
  sqcRYGate(q, -2.0131379497763646, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1275158137263785, 0);
  sqcRYGate(q, -0.29209614884364216, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.109308762503251, 0);
  sqcRYGate(q, 0.5986347721704401, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4468566954225732, 2);
  sqcRYGate(q, -1.030233584743621, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22948578110891216, 2);
  sqcRYGate(q, -1.6212336416998825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.613687905964079, 4);
  sqcRYGate(q, -0.3601694876671683, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.326649670382708, 4);
  sqcRYGate(q, 0.5894311747249624, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9021219553615206, 6);
  sqcRYGate(q, 2.5515103558219985, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9563203334118016, 6);
  sqcRYGate(q, 0.18172923184464052, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2665960823334217, 1);
  sqcRYGate(q, -1.1824543823187392, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.295614356202657, 1);
  sqcRYGate(q, -0.06820721379240435, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.052793577578484394, 3);
  sqcRYGate(q, -3.044897943905928, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.23332056723369643, 3);
  sqcRYGate(q, -2.4321122460238365, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8696690108652487, 5);
  sqcRYGate(q, 1.9025093494293843, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0003267473266648224, 5);
  sqcRYGate(q, -1.9752275481463615, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.468228945138463, 0);
  sqcRYGate(q, -2.9550113722039084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.674378818086127, 0);
  sqcRYGate(q, 3.1343782089032173, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.988265707869679, 2);
  sqcRYGate(q, 0.4535435794047571, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.344940252218361, 2);
  sqcRYGate(q, 0.6201585266317835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7571828178982676, 4);
  sqcRYGate(q, -1.6938867653707825, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7749971185340101, 4);
  sqcRYGate(q, 2.1661598401929485, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6996076256377877, 6);
  sqcRYGate(q, -1.5520901324288283, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.376248590466608, 6);
  sqcRYGate(q, -0.7349367113130665, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5475327439035172, 1);
  sqcRYGate(q, -1.3211356332092707, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7703641800078596, 1);
  sqcRYGate(q, 1.23258893890875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9223564494527463, 3);
  sqcRYGate(q, -1.905817536731889, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7280919526106755, 3);
  sqcRYGate(q, 0.8081940120926607, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3167110670616875, 5);
  sqcRYGate(q, -3.013953876727304, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9339838930954205, 5);
  sqcRYGate(q, 0.7131083734960111, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8176061784320915, 0);
  sqcRYGate(q, 2.77621304624013, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1425578745889793, 0);
  sqcRYGate(q, -0.7917516138337684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.84784513389942, 2);
  sqcRYGate(q, 1.886104418517169, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0052695850811126, 2);
  sqcRYGate(q, -2.1021920951319175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3967668785407734, 4);
  sqcRYGate(q, -1.5906477077955996, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4443731195469516, 4);
  sqcRYGate(q, 1.097363422865289, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6806450600942515, 6);
  sqcRYGate(q, -3.1209971462411836, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8666943382382373, 6);
  sqcRYGate(q, 2.449449261746025, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5548031940561927, 1);
  sqcRYGate(q, -0.23344284806863522, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.887392882443495, 1);
  sqcRYGate(q, 2.9429069196431605, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5693459273139214, 3);
  sqcRYGate(q, 0.3310563626039009, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.881210407489391, 3);
  sqcRYGate(q, -0.5390911782804161, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5858640474123398, 5);
  sqcRYGate(q, 2.2853323577353413, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6091488302940604, 5);
  sqcRYGate(q, -2.6615015690179193, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3899503596338254, 0);
  sqcRYGate(q, -1.6771801372878121, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2645435330757522, 0);
  sqcRYGate(q, -2.4808831369965425, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0152421870441204, 2);
  sqcRYGate(q, -0.6081048214803769, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6437978360227613, 2);
  sqcRYGate(q, 1.7962192539181117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4134342828948539, 4);
  sqcRYGate(q, -0.3104198667311469, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.731140512948665, 4);
  sqcRYGate(q, -2.523149562719068, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5028588356192665, 6);
  sqcRYGate(q, -2.881625842316973, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6058450400598763, 6);
  sqcRYGate(q, -0.9867605801197747, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.291972567726439, 1);
  sqcRYGate(q, -2.580696567160171, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7690955735111276, 1);
  sqcRYGate(q, -1.2468477419347965, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1273400601361754, 3);
  sqcRYGate(q, 2.925605187772956, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2257086837230333, 3);
  sqcRYGate(q, -2.7059145325915086, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5932185995578712, 5);
  sqcRYGate(q, 2.327745167055968, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8047231424833754, 5);
  sqcRYGate(q, 2.6346528412477386, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1060003213237986, 0);
  sqcRYGate(q, 1.8816884015025934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2931443163581986, 0);
  sqcRYGate(q, 1.1181362053013606, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9571919895679778, 2);
  sqcRYGate(q, 1.4642572542634418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4805884579838606, 2);
  sqcRYGate(q, -2.3379781730308613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.09016629016388299, 4);
  sqcRYGate(q, -0.045817785244587274, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.489240703704297, 4);
  sqcRYGate(q, -1.385014286780128, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.42356138997891, 6);
  sqcRYGate(q, -2.6413860626698065, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.336021999111802, 6);
  sqcRYGate(q, 1.0363915804986974, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7980032115352218, 1);
  sqcRYGate(q, -2.0115654812745616, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.735728939921947, 1);
  sqcRYGate(q, -2.5226814152500348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5471589650179216, 3);
  sqcRYGate(q, 0.012777936703472825, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5524431277697106, 3);
  sqcRYGate(q, -3.0251374719509867, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2127078259214441, 5);
  sqcRYGate(q, -2.069069720030189, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6807980152576254, 5);
  sqcRYGate(q, -2.3360947124216653, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4425776723584178, 0);
  sqcRYGate(q, -3.1064697600512416, 1);
  sqcRYGate(q, -0.991690707191025, 2);
  sqcRYGate(q, -2.0071730030518626, 3);
  sqcRYGate(q, 2.450975078740151, 4);
  sqcRYGate(q, 1.4298768238743262, 5);
  sqcRYGate(q, 3.0423813366061183, 6);
  sqcRYGate(q, 1.0257827410358715, 7);

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
