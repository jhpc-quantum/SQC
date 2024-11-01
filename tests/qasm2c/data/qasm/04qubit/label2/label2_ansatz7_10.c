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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -0.489907117342728, 0);
  sqcRYGate(q, -2.246802038178636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3389614239092626, 0);
  sqcRYGate(q, 1.0720254887239775, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4071646288065489, 0);
  sqcRYGate(q, -2.5071294430178526, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6092787068172425, 0);
  sqcRYGate(q, -1.8716905271250324, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.079544705685399, 0);
  sqcRYGate(q, -2.3216963983215035, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.903881369028934, 0);
  sqcRYGate(q, -1.104549066040966, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7273821584656404, 1);
  sqcRYGate(q, 0.0832324369603744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.967419488126315, 1);
  sqcRYGate(q, 2.3236147102995885, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.282220987975023, 1);
  sqcRYGate(q, -2.4366099333843514, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6024979814181368, 1);
  sqcRYGate(q, 0.5814254141066382, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6740417092350017, 2);
  sqcRYGate(q, -1.6037386754134477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1808712868258766, 2);
  sqcRYGate(q, -2.698919462777951, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9173188166179194, 0);
  sqcRYGate(q, 1.0254272273797493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9776424877318355, 0);
  sqcRYGate(q, 2.44180009136113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9882958149613192, 0);
  sqcRYGate(q, 3.058998001604748, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1881614684292754, 0);
  sqcRYGate(q, -2.391397365610038, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.0859499974838487, 0);
  sqcRYGate(q, 1.0413267632330774, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.692841813156649, 0);
  sqcRYGate(q, -0.33438776206017096, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8300099219592884, 1);
  sqcRYGate(q, -3.058378620307045, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.12943956324820075, 1);
  sqcRYGate(q, -0.45581088285164095, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2310363135727185, 1);
  sqcRYGate(q, 1.4286275999889435, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2050038405334957, 1);
  sqcRYGate(q, -3.137920565425138, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4262980281851938, 2);
  sqcRYGate(q, -2.8370955851134316, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.447287950318556, 2);
  sqcRYGate(q, -0.7021540583571256, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1394145811809548, 0);
  sqcRYGate(q, 0.6793366189605079, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9623899918054297, 0);
  sqcRYGate(q, -2.4085665505479565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1639158958206737, 0);
  sqcRYGate(q, -2.8505970315991678, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0612360723777066, 0);
  sqcRYGate(q, -1.4350764148570478, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4857962671901879, 0);
  sqcRYGate(q, 0.7806371742628739, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9434862451343493, 0);
  sqcRYGate(q, -0.09444946381032349, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4954098097892383, 1);
  sqcRYGate(q, 0.6129050357366784, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6881781736598409, 1);
  sqcRYGate(q, -1.4143082748708151, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9556881467500788, 1);
  sqcRYGate(q, -0.9802933993091684, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.055331299645662, 1);
  sqcRYGate(q, -0.0783530111345117, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.02791214093606434, 2);
  sqcRYGate(q, -1.963116283364827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5783111445540194, 2);
  sqcRYGate(q, 2.7630367171375014, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1459683314613525, 0);
  sqcRYGate(q, -0.8452569091974079, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4140502076890002, 0);
  sqcRYGate(q, 1.762464518035448, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7110375959375699, 0);
  sqcRYGate(q, 0.41128772208611775, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.583808562360801, 0);
  sqcRYGate(q, -2.3519386639111133, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3741599808332587, 0);
  sqcRYGate(q, 0.9816849089634996, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0629889399527173, 0);
  sqcRYGate(q, 1.3932976965959551, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6526385659430632, 1);
  sqcRYGate(q, -3.04645188213627, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7118060337884728, 1);
  sqcRYGate(q, 3.1105047111720006, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1491467406782938, 1);
  sqcRYGate(q, 1.8447205073611639, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.628287438378164, 1);
  sqcRYGate(q, 0.01587322349725593, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0650158914762846, 2);
  sqcRYGate(q, -2.077916600741207, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1371003273839797, 2);
  sqcRYGate(q, 3.139472497634399, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.18935047386138767, 0);
  sqcRYGate(q, -0.7112145058999353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7975983408921934, 0);
  sqcRYGate(q, 2.0452000963794505, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.031313373305015, 0);
  sqcRYGate(q, 1.1657495630463321, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5491407169927845, 0);
  sqcRYGate(q, -1.8218751285749264, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.555089290822834, 0);
  sqcRYGate(q, -2.3693272215248777, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.320571433631189, 0);
  sqcRYGate(q, -2.1767089963396433, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.09202309716448, 1);
  sqcRYGate(q, -0.4986804857707741, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.178480638380182, 1);
  sqcRYGate(q, -2.6796441272252394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5094191639675962, 1);
  sqcRYGate(q, -1.0441058416858473, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7576810426567304, 1);
  sqcRYGate(q, 0.10263878764921737, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9334619380832945, 2);
  sqcRYGate(q, -2.820848334258776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1300695880147793, 2);
  sqcRYGate(q, -0.9013714825704539, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5949050895378143, 0);
  sqcRYGate(q, -1.2017890356213607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.765389633575944, 0);
  sqcRYGate(q, 2.3540351086677904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3973231023887527, 0);
  sqcRYGate(q, -1.0906474547765241, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2528342277388553, 0);
  sqcRYGate(q, -2.725729431806498, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4227412814573535, 0);
  sqcRYGate(q, -0.4856265619295292, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1840983834868597, 0);
  sqcRYGate(q, -0.017810592571983346, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8676808376620615, 1);
  sqcRYGate(q, -3.01994910722355, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.393212166287229, 1);
  sqcRYGate(q, 0.15674592591169123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.47009087026052576, 1);
  sqcRYGate(q, -2.923285693959439, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.561151473215774, 1);
  sqcRYGate(q, 2.9865508583705647, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7979817607003802, 2);
  sqcRYGate(q, 0.8630323670173006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0855314206983984, 2);
  sqcRYGate(q, -1.9880752232597203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3042972241385264, 0);
  sqcRYGate(q, -1.4542733992944266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8722649611892472, 0);
  sqcRYGate(q, -3.080364014191098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4716374547029458, 0);
  sqcRYGate(q, 0.12982978278475546, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5606805889094139, 0);
  sqcRYGate(q, 2.0033833694088736, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0434024832065374, 0);
  sqcRYGate(q, -0.8254452391163108, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4725755220202815, 0);
  sqcRYGate(q, 0.6140593177835938, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5412268408357566, 1);
  sqcRYGate(q, 2.6581435847021315, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0255334774346867, 1);
  sqcRYGate(q, -2.221307765264793, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.213901776505507, 1);
  sqcRYGate(q, 0.9882624235401174, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8521836449484523, 1);
  sqcRYGate(q, -2.4918694936879415, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6269761560306026, 2);
  sqcRYGate(q, -1.6296565982352273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5843919968526505, 2);
  sqcRYGate(q, 1.1990129266386997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.46640761050492685, 0);
  sqcRYGate(q, 3.121289555299176, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.383850678493193, 0);
  sqcRYGate(q, -2.881430595678857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.701113887117747, 0);
  sqcRYGate(q, -1.1522128168928978, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.08825207270239055, 0);
  sqcRYGate(q, 0.17956914663833956, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3931848040440613, 0);
  sqcRYGate(q, -1.5361245191974486, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5303560961257006, 0);
  sqcRYGate(q, -1.6761993809308668, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2881116232272953, 1);
  sqcRYGate(q, -0.35291597325925744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2974823494301466, 1);
  sqcRYGate(q, 1.5285898518711962, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9655076703826357, 1);
  sqcRYGate(q, 2.595362780812438, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2760809840085754, 1);
  sqcRYGate(q, -0.9765582321785757, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1564844837106873, 2);
  sqcRYGate(q, 1.2721079872151277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3976211119097144, 2);
  sqcRYGate(q, -1.1134773198026346, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5864280357517455, 0);
  sqcRYGate(q, -2.294776363655716, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.24513931843562162, 0);
  sqcRYGate(q, 1.7098484777537084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0677345775160187, 0);
  sqcRYGate(q, -2.6453895303934143, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5806615118912295, 0);
  sqcRYGate(q, 2.4599463554458874, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2313103646490244, 0);
  sqcRYGate(q, 2.7585883700702576, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8309720483439533, 0);
  sqcRYGate(q, -2.565072619356208, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.17808712468661092, 1);
  sqcRYGate(q, 1.519280791032477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6225970022688323, 1);
  sqcRYGate(q, -1.1152899117054051, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0717759873464185, 1);
  sqcRYGate(q, 2.5390129627927434, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.056900865558895, 1);
  sqcRYGate(q, 0.03194154572060626, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7899805211576963, 2);
  sqcRYGate(q, -2.4432899493396816, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.530907179787764, 2);
  sqcRYGate(q, -1.1391776283663546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.30737461165145596, 0);
  sqcRYGate(q, 0.7132049624749425, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0741357677795365, 0);
  sqcRYGate(q, 0.9314231615971094, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7453869536014137, 0);
  sqcRYGate(q, -0.8385389119494708, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6300331868732867, 0);
  sqcRYGate(q, 2.8112466000637646, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1305857828469394, 0);
  sqcRYGate(q, -2.735351843803681, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9585624678985387, 0);
  sqcRYGate(q, -0.2161030342876936, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9045930696463733, 1);
  sqcRYGate(q, -0.010144341681153614, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7622491690412234, 1);
  sqcRYGate(q, -2.927174338578922, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.23271497848097944, 1);
  sqcRYGate(q, 0.806046014279233, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.053770501434286, 1);
  sqcRYGate(q, -2.98591847881215, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0639987145793137, 2);
  sqcRYGate(q, 1.2678927847468886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4746462716163293, 2);
  sqcRYGate(q, 0.6734462032424128, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7783510468634843, 0);
  sqcRYGate(q, -0.0558782129538107, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7464919911612906, 0);
  sqcRYGate(q, -0.0935094331310342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.128364490899766, 0);
  sqcRYGate(q, -0.8075423487133881, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9511816306029647, 0);
  sqcRYGate(q, -2.8532810488259686, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7007203185599608, 0);
  sqcRYGate(q, 0.7364140398182322, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.149494435297773, 0);
  sqcRYGate(q, -2.788486989354022, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.053446941252048, 1);
  sqcRYGate(q, 2.58722688684149, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9233753937390357, 1);
  sqcRYGate(q, 2.801156443428578, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.47181180174047466, 1);
  sqcRYGate(q, 0.6550249321964818, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.211771374938535, 1);
  sqcRYGate(q, 1.6748640115459865, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6680341578208946, 2);
  sqcRYGate(q, -1.7058965788967488, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7662846321520832, 2);
  sqcRYGate(q, -3.0015144442900246, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.360272880942043, 0);
  sqcRYGate(q, 2.720073584258548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.30586962249129, 0);
  sqcRYGate(q, 0.6155703582562475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6408595975140714, 0);
  sqcRYGate(q, 0.6744029301914578, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2429382176802555, 0);
  sqcRYGate(q, 2.286724656037805, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.451678475289227, 0);
  sqcRYGate(q, -0.8870464199456556, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.805117026765822, 0);
  sqcRYGate(q, 2.1206580415297562, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.19584832934609883, 1);
  sqcRYGate(q, 2.311760257642197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9121462325881717, 1);
  sqcRYGate(q, 1.9191443654777975, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2610865631391364, 1);
  sqcRYGate(q, -1.386265328543753, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2637599694134063, 1);
  sqcRYGate(q, -0.8369445683593061, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8874883319829108, 2);
  sqcRYGate(q, -2.937041447699908, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4953609491566002, 2);
  sqcRYGate(q, -1.6486681182878877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.659572367073133, 0);
  sqcRYGate(q, -0.13029039002879816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1180259554719005, 0);
  sqcRYGate(q, -1.2996947846479854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.046213040553546, 0);
  sqcRYGate(q, -0.5739267330223825, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0903436294833133, 0);
  sqcRYGate(q, -2.959972690573242, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2755072916688825, 0);
  sqcRYGate(q, 2.880628987555073, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3175546237356306, 0);
  sqcRYGate(q, 1.4258828036548477, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.461969923225891, 1);
  sqcRYGate(q, -0.6962909989964974, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2277821910047207, 1);
  sqcRYGate(q, 1.8804607145533616, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9920941598998727, 1);
  sqcRYGate(q, -0.5928430129556929, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1650713099780843, 1);
  sqcRYGate(q, 2.7048195145676774, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8822112591884568, 2);
  sqcRYGate(q, -1.298586008433257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9071703815854235, 2);
  sqcRYGate(q, -0.12796214430243769, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22068626199858077, 0);
  sqcRYGate(q, 1.1813064139897467, 1);
  sqcRYGate(q, -1.6862233128570558, 2);
  sqcRYGate(q, 2.0557278216079053, 3);

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
