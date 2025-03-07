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

  sqcRYGate(q, 2.9081454698478106, 0);
  sqcRZGate(q, 0.0007680228067433752, 0);
  sqcRYGate(q, -1.5688598393690636, 1);
  sqcRZGate(q, 1.1572946768419605, 1);
  sqcRYGate(q, -2.1706893454795377, 2);
  sqcRZGate(q, -0.004762660810177246, 2);
  sqcRYGate(q, -2.6679450752090133, 3);
  sqcRZGate(q, 1.5680867420830937, 3);
  sqcRYGate(q, 3.140250011692124, 4);
  sqcRZGate(q, 1.9460370971965404, 4);
  sqcRYGate(q, -3.1388554776081077, 5);
  sqcRZGate(q, -1.7649202090738214, 5);
  sqcRYGate(q, 0.05841935863552461, 6);
  sqcRZGate(q, -0.44365590420285633, 6);
  sqcRYGate(q, 3.107524061406139, 7);
  sqcRZGate(q, 0.6362149129001639, 7);
  sqcRYGate(q, 0.0001775742597702376, 8);
  sqcRZGate(q, -0.18569442511779388, 8);
  sqcRYGate(q, -3.1412760799226116, 9);
  sqcRZGate(q, 2.7990749979212985, 9);
  sqcRYGate(q, 1.5707310338642806, 10);
  sqcRZGate(q, -0.3104411564313121, 10);
  sqcRYGate(q, 1.5707684870822183, 11);
  sqcRZGate(q, -0.04608769254626565, 11);
  sqcRYGate(q, -3.1413912645267086, 12);
  sqcRZGate(q, -1.9230035957306686, 12);
  sqcRYGate(q, -2.4933768280875905, 13);
  sqcRZGate(q, -1.2259081403667418, 13);
  sqcRYGate(q, -0.07141967570759726, 14);
  sqcRZGate(q, 1.9577378978544306, 14);
  sqcRYGate(q, -1.5695909781435162, 15);
  sqcRZGate(q, -1.2835145763382478, 15);
  sqcRYGate(q, -1.6360338186909011, 16);
  sqcRZGate(q, -0.4393207036665108, 16);
  sqcRYGate(q, -1.5710106447767105, 17);
  sqcRZGate(q, -2.2564944813615155, 17);
  sqcRYGate(q, 1.569966722065239, 18);
  sqcRZGate(q, -1.5718671084156675, 18);
  sqcRYGate(q, -3.1413569919718323, 19);
  sqcRZGate(q, 1.0124755444601847, 19);
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
  sqcRYGate(q, 1.5697665365730789, 0);
  sqcRZGate(q, 2.771288630841553, 0);
  sqcRYGate(q, -1.5770119517595427, 1);
  sqcRZGate(q, -1.813382967503677, 1);
  sqcRYGate(q, 1.568947787132272, 2);
  sqcRZGate(q, -1.4570640347213182, 2);
  sqcRYGate(q, -0.35924474126403094, 3);
  sqcRZGate(q, 3.1341800476842154, 3);
  sqcRYGate(q, -0.00023791662403217082, 4);
  sqcRZGate(q, -0.7548694433427023, 4);
  sqcRYGate(q, -1.8380502539528285, 5);
  sqcRZGate(q, -0.0029498715622787055, 5);
  sqcRYGate(q, 1.5810584766625082, 6);
  sqcRZGate(q, 0.11503554866722462, 6);
  sqcRYGate(q, 1.54336287417539, 7);
  sqcRZGate(q, 3.1214112563609113, 7);
  sqcRYGate(q, -3.1406538444777854, 8);
  sqcRZGate(q, 2.902274976106335, 8);
  sqcRYGate(q, 1.5698084813129904, 9);
  sqcRZGate(q, 0.0004681329235287634, 9);
  sqcRYGate(q, -0.002500261550142824, 10);
  sqcRZGate(q, 1.794249770379385, 10);
  sqcRYGate(q, 2.1914538531032433, 11);
  sqcRZGate(q, 2.295790903078127, 11);
  sqcRYGate(q, 2.173047092746553e-05, 12);
  sqcRZGate(q, -0.6112303815995844, 12);
  sqcRYGate(q, 3.141544932547934, 13);
  sqcRZGate(q, 1.9128923797566717, 13);
  sqcRYGate(q, 0.00029840181350971684, 14);
  sqcRZGate(q, 2.7040013902774844, 14);
  sqcRYGate(q, -0.0023828262882233412, 15);
  sqcRZGate(q, -2.834745422527951, 15);
  sqcRYGate(q, -2.7503973536845074, 16);
  sqcRZGate(q, 2.8229649414687588, 16);
  sqcRYGate(q, -3.1308858154494605, 17);
  sqcRZGate(q, -0.7003905550853504, 17);
  sqcRYGate(q, 1.5704916800559028, 18);
  sqcRZGate(q, 2.026592863914807, 18);
  sqcRYGate(q, -0.0013669393140901406, 19);
  sqcRZGate(q, 0.7984147257697902, 19);
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
  sqcRYGate(q, -2.0564647510785408, 0);
  sqcRZGate(q, -2.958940278330286, 0);
  sqcRYGate(q, -3.1223569391992276, 1);
  sqcRZGate(q, 1.442177339121855, 1);
  sqcRYGate(q, -3.1412861012370836, 2);
  sqcRZGate(q, 1.2876987732728455, 2);
  sqcRYGate(q, 0.5511526343081344, 3);
  sqcRZGate(q, -1.558303668190076, 3);
  sqcRYGate(q, -6.81632933927645e-05, 4);
  sqcRZGate(q, 1.5349519395785594, 4);
  sqcRYGate(q, -3.0242174492822893, 5);
  sqcRZGate(q, 2.4796051542560824, 5);
  sqcRYGate(q, 0.002739789389385593, 6);
  sqcRZGate(q, 1.4011829708983932, 6);
  sqcRYGate(q, -1.5734523642599187, 7);
  sqcRZGate(q, -1.3979956591176628, 7);
  sqcRYGate(q, 1.5711971627688366, 8);
  sqcRZGate(q, 1.5709401829095262, 8);
  sqcRYGate(q, 1.5076591262593952, 9);
  sqcRZGate(q, -1.569926407240458, 9);
  sqcRYGate(q, -1.5727940810918963, 10);
  sqcRZGate(q, 2.5153893172864596, 10);
  sqcRYGate(q, 0.00010314521489540596, 11);
  sqcRZGate(q, -0.2734366208494288, 11);
  sqcRYGate(q, -1.5712960465942114, 12);
  sqcRZGate(q, 0.9860506028160567, 12);
  sqcRYGate(q, -1.6080416572611358, 13);
  sqcRZGate(q, -1.5784588275912126, 13);
  sqcRYGate(q, 1.5710202416051775, 14);
  sqcRZGate(q, 3.088953194697739, 14);
  sqcRYGate(q, 3.1390231920160594, 15);
  sqcRZGate(q, 2.1650394867703646, 15);
  sqcRYGate(q, -3.1376658816736924, 16);
  sqcRZGate(q, 3.063876247692542, 16);
  sqcRYGate(q, -1.5884693648013544, 17);
  sqcRZGate(q, -1.9651499834477257, 17);
  sqcRYGate(q, 1.4820987208687004, 18);
  sqcRZGate(q, -2.6600303098442524, 18);
  sqcRYGate(q, 1.620785661080648, 19);
  sqcRZGate(q, -1.6378600018652183, 19);
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
  sqcRYGate(q, -3.138158694877481, 0);
  sqcRZGate(q, 2.513153003688507, 0);
  sqcRYGate(q, -0.0010546919101130925, 1);
  sqcRZGate(q, -1.6938698905797418, 1);
  sqcRYGate(q, -1.5673521514993674, 2);
  sqcRZGate(q, -1.617083165928685, 2);
  sqcRYGate(q, -1.5786647233450308, 3);
  sqcRZGate(q, -0.0777459578855737, 3);
  sqcRYGate(q, 1.5765029248248708, 4);
  sqcRZGate(q, -2.5382983337964005, 4);
  sqcRYGate(q, 3.141286680979864, 5);
  sqcRZGate(q, -2.777872396445325, 5);
  sqcRYGate(q, 0.0001451543679422486, 6);
  sqcRZGate(q, 1.0409447004801535, 6);
  sqcRYGate(q, 3.6309101007216908e-06, 7);
  sqcRZGate(q, 0.825641341519619, 7);
  sqcRYGate(q, -1.4954472425271699, 8);
  sqcRZGate(q, 1.5690510262129287, 8);
  sqcRYGate(q, 1.5719846718809363, 9);
  sqcRZGate(q, -0.00017312635051912724, 9);
  sqcRYGate(q, 3.1415146529114497, 10);
  sqcRZGate(q, -0.6302102511517961, 10);
  sqcRYGate(q, -3.141561197428259, 11);
  sqcRZGate(q, -2.62606011630269, 11);
  sqcRYGate(q, -3.14076969862746, 12);
  sqcRZGate(q, 2.5844944419109335, 12);
  sqcRYGate(q, 0.0005199989799029581, 13);
  sqcRZGate(q, 1.5756649369858167, 13);
  sqcRYGate(q, 1.5439815257529423, 14);
  sqcRZGate(q, 0.35968608594914453, 14);
  sqcRYGate(q, 1.571792003535304, 15);
  sqcRZGate(q, -2.715115529695106, 15);
  sqcRYGate(q, -1.5718548006495139, 16);
  sqcRZGate(q, 1.0074651678474333, 16);
  sqcRYGate(q, -1.5718048264389461, 17);
  sqcRZGate(q, -1.8212782483524537, 17);
  sqcRYGate(q, -0.022780907646527838, 18);
  sqcRZGate(q, 1.2070257551927872, 18);
  sqcRYGate(q, -0.2230532902319376, 19);
  sqcRZGate(q, -1.512191341346134, 19);
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
  sqcRYGate(q, -2.11416668244573, 0);
  sqcRZGate(q, -3.1160409954342105, 0);
  sqcRYGate(q, -0.41440284371822056, 1);
  sqcRZGate(q, 2.723757310708275, 1);
  sqcRYGate(q, -0.011514137991830887, 2);
  sqcRZGate(q, -3.0906798223709915, 2);
  sqcRYGate(q, 2.9955946161659344, 3);
  sqcRZGate(q, 3.1129211690877505, 3);
  sqcRYGate(q, 3.141563886593064, 4);
  sqcRZGate(q, 2.931404953623902, 4);
  sqcRYGate(q, -3.138405035984593, 5);
  sqcRZGate(q, 1.7326939828195052, 5);
  sqcRYGate(q, 3.141330698694143, 6);
  sqcRZGate(q, 2.5321150174496108, 6);
  sqcRYGate(q, -0.00035141213159756634, 7);
  sqcRZGate(q, -2.5693382920964183, 7);
  sqcRYGate(q, -1.5071354942573736, 8);
  sqcRZGate(q, -1.7994341313199096, 8);
  sqcRYGate(q, 1.5801096190712867, 9);
  sqcRZGate(q, -1.5711357669714012, 9);
  sqcRYGate(q, -3.0049174758931994, 10);
  sqcRZGate(q, -1.5324236309022132, 10);
  sqcRYGate(q, 1.912330679017926, 11);
  sqcRZGate(q, 1.6174383206829022, 11);
  sqcRYGate(q, -3.1168855174845724, 12);
  sqcRZGate(q, -1.721480766977142, 12);
  sqcRYGate(q, 0.7599083581045383, 13);
  sqcRZGate(q, 2.5101582997896568, 13);
  sqcRYGate(q, 3.1361521097668303, 14);
  sqcRZGate(q, 0.3595650595882831, 14);
  sqcRYGate(q, -3.1414540448148025, 15);
  sqcRZGate(q, 2.8598591858354427, 15);
  sqcRYGate(q, -0.007302637014115189, 16);
  sqcRZGate(q, -1.0063428328821535, 16);
  sqcRYGate(q, -3.1248680237902398, 17);
  sqcRZGate(q, 1.3196304053968022, 17);
  sqcRYGate(q, 1.4820779989196688, 18);
  sqcRZGate(q, 2.071015235968825, 18);
  sqcRYGate(q, -1.5714391813253938, 19);
  sqcRZGate(q, 1.6013018648013975, 19);
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
  sqcRYGate(q, -0.014475123701154224, 0);
  sqcRZGate(q, -0.656690596331388, 0);
  sqcRYGate(q, 2.1530210042364217e-05, 1);
  sqcRZGate(q, 0.4300657818805611, 1);
  sqcRYGate(q, -2.2201951584503394, 2);
  sqcRZGate(q, -1.5683457353618442, 2);
  sqcRYGate(q, -1.5698415851488832, 3);
  sqcRZGate(q, -0.004888980578887492, 3);
  sqcRYGate(q, 0.006964639418182375, 4);
  sqcRZGate(q, 0.9235749442118593, 4);
  sqcRYGate(q, -3.141180560291686, 5);
  sqcRZGate(q, 1.9200780946757083, 5);
  sqcRYGate(q, 1.5707602864477386, 6);
  sqcRZGate(q, -3.133398512421292, 6);
  sqcRYGate(q, -1.5707538744290008, 7);
  sqcRZGate(q, -0.006769524920323469, 7);
  sqcRYGate(q, 3.1398758791792027, 8);
  sqcRZGate(q, -1.7992489037871184, 8);
  sqcRYGate(q, 1.6050703467304892, 9);
  sqcRZGate(q, 0.09923246279119036, 9);
  sqcRYGate(q, -3.141218216169731, 10);
  sqcRZGate(q, -1.5282453595001142, 10);
  sqcRYGate(q, 0.00021482430656475336, 11);
  sqcRZGate(q, -1.6124963669040664, 11);
  sqcRYGate(q, -1.5444294862554386e-05, 12);
  sqcRZGate(q, -2.96282046205511, 12);
  sqcRYGate(q, -3.14110591685265, 13);
  sqcRZGate(q, -0.6896072695303763, 13);
  sqcRYGate(q, 1.5516603757243397, 14);
  sqcRZGate(q, -0.051865448892518456, 14);
  sqcRYGate(q, -3.141394242479061, 15);
  sqcRZGate(q, 2.433529898364071, 15);
  sqcRYGate(q, 1.5631040139287045, 16);
  sqcRZGate(q, -0.03698331412879608, 16);
  sqcRYGate(q, 1.5641789582458632, 17);
  sqcRZGate(q, -3.1038609664453602, 17);
  sqcRYGate(q, -0.18275591823126638, 18);
  sqcRZGate(q, 2.218795101276882, 18);
  sqcRYGate(q, -3.128922207178747, 19);
  sqcRZGate(q, 1.8652593268888236, 19);
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
  sqcRYGate(q, 0.9232376046958537, 0);
  sqcRZGate(q, 1.6266145538124772, 0);
  sqcRYGate(q, 0.6074176914619365, 1);
  sqcRZGate(q, 1.5735340401618136, 1);
  sqcRYGate(q, 1.5935302136776244, 2);
  sqcRZGate(q, 1.5709134999226657, 2);
  sqcRYGate(q, 1.4503176556302924, 3);
  sqcRZGate(q, 0.00019823631015558618, 3);
  sqcRYGate(q, 3.1065401536655277, 4);
  sqcRZGate(q, 0.12698745263925826, 4);
  sqcRYGate(q, -3.1414461051379114, 5);
  sqcRZGate(q, 0.15560370858761544, 5);
  sqcRYGate(q, 1.570827759312766, 6);
  sqcRZGate(q, -3.139665578343976, 6);
  sqcRYGate(q, 1.5707005811942532, 7);
  sqcRZGate(q, 3.134724558005346, 7);
  sqcRYGate(q, 1.5693256621332459, 8);
  sqcRZGate(q, -0.7531469320320481, 8);
  sqcRYGate(q, 1.572288451373752, 9);
  sqcRZGate(q, -1.5706707423883979, 9);
  sqcRYGate(q, -1.568825666827368, 10);
  sqcRZGate(q, 2.4882775242228377, 10);
  sqcRYGate(q, -1.5026857774934694, 11);
  sqcRZGate(q, -0.8536708171237316, 11);
  sqcRYGate(q, 1.5700718990410822, 12);
  sqcRZGate(q, -3.0865853058466803, 12);
  sqcRYGate(q, -3.1237888617224323, 13);
  sqcRZGate(q, 1.5165390040955975, 13);
  sqcRYGate(q, 1.5767865863663648, 14);
  sqcRZGate(q, -1.9494494784151772, 14);
  sqcRYGate(q, 1.571152362853562, 15);
  sqcRZGate(q, 0.5207104198104939, 15);
  sqcRYGate(q, -1.336183993088766, 16);
  sqcRZGate(q, -0.08390527025207248, 16);
  sqcRYGate(q, 1.8646267597659463, 17);
  sqcRZGate(q, 0.6217186301672181, 17);
  sqcRYGate(q, 2.9581949302506465, 18);
  sqcRZGate(q, 2.0793730565264674, 18);
  sqcRYGate(q, -3.088827718159384, 19);
  sqcRZGate(q, 1.9574102281101382, 19);
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
  sqcRYGate(q, 0.7836725365527962, 0);
  sqcRZGate(q, 2.2965510185446933, 0);
  sqcRYGate(q, -0.7637739172188441, 1);
  sqcRZGate(q, 1.5679043054364807, 1);
  sqcRYGate(q, -1.566088685246049, 2);
  sqcRZGate(q, -2.8082627462442034, 2);
  sqcRYGate(q, 1.569157950347455, 3);
  sqcRZGate(q, 0.0033702822772721168, 3);
  sqcRYGate(q, 3.040365747498774, 4);
  sqcRZGate(q, 1.5866747008992368, 4);
  sqcRYGate(q, -0.001075434662297356, 5);
  sqcRZGate(q, 2.625581941018669, 5);
  sqcRYGate(q, 0.0003285548252771495, 6);
  sqcRZGate(q, 1.2240674622615062, 6);
  sqcRYGate(q, -0.00043608970720399043, 7);
  sqcRZGate(q, -1.2197559808376308, 7);
  sqcRYGate(q, 3.141530466749848, 8);
  sqcRZGate(q, -2.212536876256763, 8);
  sqcRYGate(q, -1.5707297137102945, 9);
  sqcRZGate(q, 3.141254617855031, 9);
  sqcRYGate(q, -3.1381500966790767, 10);
  sqcRZGate(q, 0.9233462800946102, 10);
  sqcRYGate(q, -0.001365256857299056, 11);
  sqcRZGate(q, 2.423016985881048, 11);
  sqcRYGate(q, 0.02917110847198402, 12);
  sqcRZGate(q, 0.4894877444361446, 12);
  sqcRYGate(q, 1.570775886536213, 13);
  sqcRZGate(q, 0.7392748846292604, 13);
  sqcRYGate(q, -1.0625839899718579, 14);
  sqcRZGate(q, 2.9947667373726246, 14);
  sqcRYGate(q, -3.141002566221117, 15);
  sqcRZGate(q, -2.475314275950373, 15);
  sqcRYGate(q, 3.1375273971183826, 16);
  sqcRZGate(q, 2.425866732806079, 16);
  sqcRYGate(q, -3.1414236655999437, 17);
  sqcRZGate(q, 1.8928716975036242, 17);
  sqcRYGate(q, 3.139982956169018, 18);
  sqcRZGate(q, -2.3055951275283917, 18);
  sqcRYGate(q, 1.575870959832169, 19);
  sqcRZGate(q, -0.6816913343569595, 19);
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
  sqcRYGate(q, 1.571169378540451, 0);
  sqcRZGate(q, -1.557765079010036, 0);
  sqcRYGate(q, -1.5713360672905123, 1);
  sqcRZGate(q, 1.6982653813523, 1);
  sqcRYGate(q, -1.0665824175859484e-05, 2);
  sqcRZGate(q, 2.807389938753689, 2);
  sqcRYGate(q, 1.5708843830051658, 3);
  sqcRZGate(q, -1.5636844979655375, 3);
  sqcRYGate(q, 1.571004389591876, 4);
  sqcRZGate(q, -1.5423435332391575, 4);
  sqcRYGate(q, -1.5708054237560551, 5);
  sqcRZGate(q, 0.7804777950368864, 5);
  sqcRYGate(q, -3.135755935814937, 6);
  sqcRZGate(q, -1.971089798313639, 6);
  sqcRYGate(q, -3.135412941938916, 7);
  sqcRZGate(q, 1.4675508514487279, 7);
  sqcRYGate(q, -3.0570475319060484, 8);
  sqcRZGate(q, 0.11171107723931595, 8);
  sqcRYGate(q, 1.47144271606019, 9);
  sqcRZGate(q, 1.860620952155444, 9);
  sqcRYGate(q, -1.5707387346480886, 10);
  sqcRZGate(q, 0.9977526055059718, 10);
  sqcRYGate(q, 1.57077733861167, 11);
  sqcRZGate(q, -3.0932003883275185, 11);
  sqcRYGate(q, 3.1409534265536436, 12);
  sqcRZGate(q, 1.0685286470676623, 12);
  sqcRYGate(q, -0.00596782115996497, 13);
  sqcRZGate(q, -2.281116713244183, 13);
  sqcRYGate(q, -3.1411209753871985, 14);
  sqcRZGate(q, 2.445525533114336, 14);
  sqcRYGate(q, 0.2011808114468883, 15);
  sqcRZGate(q, -0.05539391967012772, 15);
  sqcRYGate(q, -0.0007955006606596982, 16);
  sqcRZGate(q, -2.505919238540388, 16);
  sqcRYGate(q, 3.140916438828362, 17);
  sqcRZGate(q, -1.8649346705385552, 17);
  sqcRYGate(q, -1.5719640555419518, 18);
  sqcRZGate(q, -2.349616789196364, 18);
  sqcRYGate(q, -0.008472788945256049, 19);
  sqcRZGate(q, 0.6328347651260745, 19);
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
  sqcRYGate(q, 1.530306192199924, 0);
  sqcRZGate(q, -2.835876778131365, 0);
  sqcRYGate(q, -1.1153057828732975, 1);
  sqcRZGate(q, -1.6237676165960773, 1);
  sqcRYGate(q, -1.5700414202085835, 2);
  sqcRZGate(q, 1.385829268069359, 2);
  sqcRYGate(q, -1.570480046661008, 3);
  sqcRZGate(q, -2.178399757830167, 3);
  sqcRYGate(q, 1.567763416802741, 4);
  sqcRZGate(q, 1.3346238017704029, 4);
  sqcRYGate(q, 3.1358101965780096, 5);
  sqcRZGate(q, 0.769728769873355, 5);
  sqcRYGate(q, 0.00012578271895266236, 6);
  sqcRZGate(q, 0.22102764406781716, 6);
  sqcRYGate(q, 3.141495502020127, 7);
  sqcRZGate(q, 1.1271380156510813, 7);
  sqcRYGate(q, -1.5702045867259757, 8);
  sqcRZGate(q, 0.0008263092076328249, 8);
  sqcRYGate(q, 3.1397213352580335, 9);
  sqcRZGate(q, -0.07206603676163931, 9);
  sqcRYGate(q, 3.141433144355154, 10);
  sqcRZGate(q, -0.5721533128193886, 10);
  sqcRYGate(q, -3.129086561676288, 11);
  sqcRZGate(q, 0.04370904644124618, 11);
  sqcRYGate(q, -3.1406808713209076, 12);
  sqcRZGate(q, 2.2143481715629965, 12);
  sqcRYGate(q, -3.141528311800356, 13);
  sqcRZGate(q, 0.029789373496090125, 13);
  sqcRYGate(q, 2.6235921692604447, 14);
  sqcRZGate(q, 0.6919976259106646, 14);
  sqcRYGate(q, -0.00020854841585205008, 15);
  sqcRZGate(q, -0.11726456497549209, 15);
  sqcRYGate(q, 2.7073275075004157, 16);
  sqcRZGate(q, -1.4328183673198316, 16);
  sqcRYGate(q, 0.6233590923391021, 17);
  sqcRZGate(q, 2.8916050854269546, 17);
  sqcRYGate(q, 0.001297952172650163, 18);
  sqcRZGate(q, -2.105078643132117, 18);
  sqcRYGate(q, -0.28382091798541104, 19);
  sqcRZGate(q, -3.09180550348069, 19);
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
  sqcRYGate(q, 2.2672609622953086, 0);
  sqcRZGate(q, 0.45803465005750765, 0);
  sqcRYGate(q, 1.5672280025332679, 1);
  sqcRZGate(q, -0.11306245882948021, 1);
  sqcRYGate(q, 0.00028161345247035285, 2);
  sqcRZGate(q, -2.8919230317978797, 2);
  sqcRYGate(q, -3.106692000681779, 3);
  sqcRZGate(q, -2.993821409210191, 3);
  sqcRYGate(q, -5.552196791036578e-05, 4);
  sqcRZGate(q, 0.23738150210030942, 4);
  sqcRYGate(q, 0.02541752812550541, 5);
  sqcRZGate(q, 0.010925965627581746, 5);
  sqcRYGate(q, -0.0055167463016942975, 6);
  sqcRZGate(q, -0.122809045269533, 6);
  sqcRYGate(q, 0.03778721081372165, 7);
  sqcRZGate(q, 3.1361447800773186, 7);
  sqcRYGate(q, 1.4869447730949918, 8);
  sqcRZGate(q, -3.1239972750935827, 8);
  sqcRYGate(q, 0.0009023740450263234, 9);
  sqcRZGate(q, -2.7778267986106586, 9);
  sqcRYGate(q, -1.570740583848397, 10);
  sqcRZGate(q, 1.5115526659065428, 10);
  sqcRYGate(q, -3.0392009680658343, 11);
  sqcRZGate(q, 1.5664840773569766, 11);
  sqcRYGate(q, -1.5698427061869644, 12);
  sqcRZGate(q, -0.0020061511841831248, 12);
  sqcRYGate(q, -1.5734059496450303, 13);
  sqcRZGate(q, 1.5310322809759571, 13);
  sqcRYGate(q, -8.96335963409643e-05, 14);
  sqcRZGate(q, -0.8862783048919467, 14);
  sqcRYGate(q, -2.768570968823037, 15);
  sqcRZGate(q, 0.386565489027479, 15);
  sqcRYGate(q, 3.1401103439586597, 16);
  sqcRZGate(q, 0.1322394937283681, 16);
  sqcRYGate(q, 0.003310203704414353, 17);
  sqcRZGate(q, 2.211732350316196, 17);
  sqcRYGate(q, 3.140730294601971, 18);
  sqcRZGate(q, 1.8231514778969578, 18);
  sqcRYGate(q, 1.568313434265666, 19);
  sqcRZGate(q, 0.0009215433502491877, 19);
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
  sqcRYGate(q, 1.4462740141238593, 0);
  sqcRZGate(q, 0.47421459419683476, 0);
  sqcRYGate(q, -0.15794526823727906, 1);
  sqcRZGate(q, -0.5509017012922701, 1);
  sqcRYGate(q, 0.004005558535718378, 2);
  sqcRZGate(q, 1.5059562127257813, 2);
  sqcRYGate(q, -0.00030193808483540825, 3);
  sqcRZGate(q, -2.8608444271513367, 3);
  sqcRYGate(q, -1.5459667565752009, 4);
  sqcRZGate(q, -1.6427399668158094, 4);
  sqcRYGate(q, 1.5676471705880282, 5);
  sqcRZGate(q, -1.5745443450576169, 5);
  sqcRYGate(q, -1.5600317689232135, 6);
  sqcRZGate(q, -3.1412929196734534, 6);
  sqcRYGate(q, 1.570873131493452, 7);
  sqcRZGate(q, -3.121376522405682, 7);
  sqcRYGate(q, 0.004545931922393466, 8);
  sqcRZGate(q, -2.0065424290178147, 8);
  sqcRYGate(q, 1.5471907592630352, 9);
  sqcRZGate(q, 2.956258091213326, 9);
  sqcRYGate(q, 1.9618109325889834e-06, 10);
  sqcRZGate(q, 0.46161477859432587, 10);
  sqcRYGate(q, 2.819944701711331, 11);
  sqcRZGate(q, -0.8306329491233866, 11);
  sqcRYGate(q, -1.5707985307729095, 12);
  sqcRZGate(q, 6.36709623267773e-05, 12);
  sqcRYGate(q, -1.5708476066055548, 13);
  sqcRZGate(q, 3.1415834396435085, 13);
  sqcRYGate(q, 3.141579059705969, 14);
  sqcRZGate(q, 2.910201972056673, 14);
  sqcRYGate(q, -3.1193058780533907, 15);
  sqcRZGate(q, -2.7516071284127945, 15);
  sqcRYGate(q, -1.5709841131550324, 16);
  sqcRZGate(q, -1.6843582964787993, 16);
  sqcRYGate(q, 3.1413484028212166, 17);
  sqcRZGate(q, -1.1749730138697467, 17);
  sqcRYGate(q, -1.5662209812028811, 18);
  sqcRZGate(q, -1.5703721322316095, 18);
  sqcRYGate(q, -1.325682633746843, 19);
  sqcRZGate(q, 1.5676337951178514, 19);
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
  sqcRYGate(q, 0.8720310485972463, 0);
  sqcRZGate(q, -1.8904862897517691, 0);
  sqcRYGate(q, 0.06332558513888742, 1);
  sqcRZGate(q, -2.4796609246895702, 1);
  sqcRYGate(q, 1.5702157028283912, 2);
  sqcRZGate(q, -1.5820125452534957, 2);
  sqcRYGate(q, 1.5730796461135093, 3);
  sqcRZGate(q, 0.259543969645776, 3);
  sqcRYGate(q, -0.00042179481896353996, 4);
  sqcRZGate(q, 2.846214895484557, 4);
  sqcRYGate(q, -1.571149526734044, 5);
  sqcRZGate(q, -1.5708231772707384, 5);
  sqcRYGate(q, -2.960098444991952, 6);
  sqcRZGate(q, 2.6096969210918983, 6);
  sqcRYGate(q, -3.141477237990039, 7);
  sqcRZGate(q, -3.1320465874302426, 7);
  sqcRYGate(q, -3.1415856324489453, 8);
  sqcRZGate(q, 2.7187453741416183, 8);
  sqcRYGate(q, -3.1415455597271578, 9);
  sqcRZGate(q, -0.1853560694638594, 9);
  sqcRYGate(q, 1.9198663741448744e-05, 10);
  sqcRZGate(q, -0.40224324489771496, 10);
  sqcRYGate(q, -1.9742955178946038e-05, 11);
  sqcRZGate(q, 0.8304386858441761, 11);
  sqcRYGate(q, -1.5706533400914937, 12);
  sqcRZGate(q, 0.0009291639579052101, 12);
  sqcRYGate(q, -1.5707721367373004, 13);
  sqcRZGate(q, 2.1646105316967943, 13);
  sqcRYGate(q, 3.1415729790658222, 14);
  sqcRZGate(q, 1.1632033191841185, 14);
  sqcRYGate(q, 3.1040666610534178, 15);
  sqcRZGate(q, 1.5517050515614392, 15);
  sqcRYGate(q, 0.0003956625278034309, 16);
  sqcRZGate(q, -3.0280949870350344, 16);
  sqcRYGate(q, 1.5705555254131343, 17);
  sqcRZGate(q, 3.111407446803022, 17);
  sqcRYGate(q, 1.570889020426798, 18);
  sqcRZGate(q, -1.5698973513133678, 18);
  sqcRYGate(q, -0.15111216586724652, 19);
  sqcRZGate(q, -1.567565317614358, 19);
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
  sqcRYGate(q, 1.5698492636654073, 0);
  sqcRZGate(q, -2.6212780119881085, 0);
  sqcRYGate(q, 3.027864455096747, 1);
  sqcRZGate(q, -2.0484903023528855, 1);
  sqcRYGate(q, 1.5708342342810773, 2);
  sqcRZGate(q, 0.5202749404261379, 2);
  sqcRYGate(q, 3.1415735788861654, 3);
  sqcRZGate(q, 1.3459922032949283, 3);
  sqcRYGate(q, -3.141584347748691, 4);
  sqcRZGate(q, 1.7211332859877921, 4);
  sqcRYGate(q, -1.5706320583229214, 5);
  sqcRZGate(q, 2.662684338912704, 5);
  sqcRYGate(q, -0.0005516510828016408, 6);
  sqcRZGate(q, -2.088854857305221, 6);
  sqcRYGate(q, 1.576156223499785, 7);
  sqcRZGate(q, 1.0945327246585776, 7);
  sqcRYGate(q, 1.5709429420042795, 8);
  sqcRZGate(q, -1.0483936681333101, 8);
  sqcRYGate(q, 1.5988324898479467, 9);
  sqcRZGate(q, -2.051890785753007, 9);
  sqcRYGate(q, -1.5707323179576858, 10);
  sqcRZGate(q, 0.5206545937508577, 10);
  sqcRYGate(q, -1.5707758942699037, 11);
  sqcRZGate(q, -2.0484617514715273, 11);
  sqcRYGate(q, -1.5698430634027403, 12);
  sqcRZGate(q, 2.073173536782813, 12);
  sqcRYGate(q, 0.0015135519751963145, 13);
  sqcRZGate(q, 2.063517106793133, 13);
  sqcRYGate(q, -0.0004920233309748667, 14);
  sqcRZGate(q, 0.41796822922765303, 14);
  sqcRYGate(q, -1.5875366937985262, 15);
  sqcRZGate(q, -2.075239477512101, 15);
  sqcRYGate(q, 1.5706283713754479, 16);
  sqcRZGate(q, -2.623330895771335, 16);
  sqcRYGate(q, -0.022951236899669603, 17);
  sqcRZGate(q, 1.1191412043459883, 17);
  sqcRYGate(q, -1.5708429360413483, 18);
  sqcRZGate(q, -1.053814917617361, 18);
  sqcRYGate(q, -1.570484360382946, 19);
  sqcRZGate(q, 1.0837617734314582, 19);

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
