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

  sqcRYGate(q, -3.1415446188277145, 0);
  sqcRZGate(q, -0.16166681015874573, 0);
  sqcRYGate(q, -0.025496330827319724, 1);
  sqcRZGate(q, -2.258256611303268, 1);
  sqcRYGate(q, -2.7295299790019967, 2);
  sqcRZGate(q, -0.861605735451799, 2);
  sqcRYGate(q, -3.1122782406758907, 3);
  sqcRZGate(q, 0.6440509474288333, 3);
  sqcRYGate(q, -1.394275516123174, 4);
  sqcRZGate(q, -3.0474251554613203, 4);
  sqcRYGate(q, -1.991679983580358e-05, 5);
  sqcRZGate(q, -0.09634816663744061, 5);
  sqcRYGate(q, -1.6927984723724991, 6);
  sqcRZGate(q, -0.06672548028602152, 6);
  sqcRYGate(q, -0.12504886251285363, 7);
  sqcRZGate(q, -2.2006950665105274, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 6.916826806779852e-05, 0);
  sqcRZGate(q, 0.15864212958989385, 0);
  sqcRYGate(q, -1.8318257190589444, 1);
  sqcRZGate(q, -2.9900893265530257, 1);
  sqcRYGate(q, -3.0529064510271064, 2);
  sqcRZGate(q, 2.023493860762794, 2);
  sqcRYGate(q, -1.569042447544752, 3);
  sqcRZGate(q, -1.6475392679191323, 3);
  sqcRYGate(q, 2.4625108021034774, 4);
  sqcRZGate(q, -2.0961739668404613, 4);
  sqcRYGate(q, 3.1415924998444567, 5);
  sqcRZGate(q, 2.4988804701274363, 5);
  sqcRYGate(q, 0.8638223982118349, 6);
  sqcRZGate(q, -2.26787462276138, 6);
  sqcRYGate(q, 1.5748811824124012, 7);
  sqcRZGate(q, -3.12829160193236, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.0006534957112595381, 0);
  sqcRZGate(q, -2.5357867103215237, 0);
  sqcRYGate(q, -0.08501520297348088, 1);
  sqcRZGate(q, 1.4797794944367597, 1);
  sqcRYGate(q, 3.0044797788961755, 2);
  sqcRZGate(q, -0.08297193646293836, 2);
  sqcRYGate(q, 0.03838077928272701, 3);
  sqcRZGate(q, -3.091749828787033, 3);
  sqcRYGate(q, -1.6353607565857968, 4);
  sqcRZGate(q, 0.40569841308751986, 4);
  sqcRYGate(q, -0.0002879656982182864, 5);
  sqcRZGate(q, 2.088934539037833, 5);
  sqcRYGate(q, 1.705789994890746, 6);
  sqcRZGate(q, -3.001369115178603, 6);
  sqcRYGate(q, -1.6038088667472212, 7);
  sqcRZGate(q, 1.6754223215302728, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.00013995751035444925, 0);
  sqcRZGate(q, 1.5406521723990219, 0);
  sqcRYGate(q, 0.0431717854346525, 1);
  sqcRZGate(q, -1.6218361242056745, 1);
  sqcRYGate(q, 3.028852218674039, 2);
  sqcRZGate(q, -1.9770324122696543, 2);
  sqcRYGate(q, 2.3874143152902887, 3);
  sqcRZGate(q, -2.9478222578407145, 3);
  sqcRYGate(q, -2.453006627701781, 4);
  sqcRZGate(q, -2.9540856342060624, 4);
  sqcRYGate(q, 3.14153558461467, 5);
  sqcRZGate(q, 0.8621310940280984, 5);
  sqcRYGate(q, -0.92253283478031, 6);
  sqcRZGate(q, -2.2670162061804575, 6);
  sqcRYGate(q, 2.501512892726839, 7);
  sqcRZGate(q, 0.25543890362173194, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.5712304247614128, 0);
  sqcRZGate(q, 0.02999044942721858, 0);
  sqcRYGate(q, -0.4987559546594949, 1);
  sqcRZGate(q, 2.1951013125108196, 1);
  sqcRYGate(q, -1.6927365937480179, 2);
  sqcRZGate(q, 1.800718797993505, 2);
  sqcRYGate(q, -0.38298140468043806, 3);
  sqcRZGate(q, 2.927431971166879, 3);
  sqcRYGate(q, 2.503202337828031, 4);
  sqcRZGate(q, -2.565319573292969, 4);
  sqcRYGate(q, 1.5709257769892713, 5);
  sqcRZGate(q, -1.5710813991227779, 5);
  sqcRYGate(q, -1.442967519314582, 6);
  sqcRZGate(q, -0.8585722570436474, 6);
  sqcRYGate(q, -1.8483396774323042, 7);
  sqcRZGate(q, 0.4841842703048313, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.135492447404061, 0);
  sqcRZGate(q, -3.111406916171787, 0);
  sqcRYGate(q, -3.141505999225467, 1);
  sqcRZGate(q, 2.200403771758917, 1);
  sqcRYGate(q, 2.303372372569612e-05, 2);
  sqcRZGate(q, 1.4722196496424775, 2);
  sqcRYGate(q, -1.5708672392616898, 3);
  sqcRZGate(q, 1.570801353977144, 3);
  sqcRYGate(q, 3.14152429312867, 4);
  sqcRZGate(q, 0.6879229496064739, 4);
  sqcRYGate(q, -1.5708093766764353, 5);
  sqcRZGate(q, -2.7138609436279353, 5);
  sqcRYGate(q, -3.1415171824717185, 6);
  sqcRZGate(q, -2.4219448568653337, 6);
  sqcRYGate(q, -1.5707988444849332, 7);
  sqcRZGate(q, 1.574569968604182, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5628801140225574, 0);
  sqcRZGate(q, -2.7725826981070596, 0);
  sqcRYGate(q, 1.5708481936578604, 1);
  sqcRZGate(q, -0.7639445978196326, 1);
  sqcRYGate(q, -1.571024684310852, 2);
  sqcRZGate(q, -2.413272607338032, 2);
  sqcRYGate(q, -1.5708555611678936, 3);
  sqcRZGate(q, -1.570056243082883, 3);
  sqcRYGate(q, 1.5709840826395984, 4);
  sqcRZGate(q, 2.7658687911216795, 4);
  sqcRYGate(q, 0.01232824306015404, 5);
  sqcRZGate(q, 1.1485538799796562, 5);
  sqcRYGate(q, -1.5708233408925407, 6);
  sqcRZGate(q, 0.68604689111299, 6);
  sqcRYGate(q, -1.5707943700983649, 7);
  sqcRZGate(q, 1.5713933835779579, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.00011088948468174208, 0);
  sqcRZGate(q, 2.8664315713246893, 0);
  sqcRYGate(q, -0.0009549179338392833, 1);
  sqcRZGate(q, 2.4291681730269885, 1);
  sqcRYGate(q, -3.141464055372116, 2);
  sqcRZGate(q, -0.7485233805906323, 2);
  sqcRYGate(q, 1.5714403127749454, 3);
  sqcRZGate(q, 0.0944513883815068, 3);
  sqcRYGate(q, 3.1414209944242155, 4);
  sqcRZGate(q, 1.2893875964632011, 4);
  sqcRYGate(q, 1.5713768243363848, 5);
  sqcRZGate(q, -1.476277730423055, 5);
  sqcRYGate(q, -0.00018719941091723175, 6);
  sqcRZGate(q, 0.9790668789151268, 6);
  sqcRYGate(q, -1.571302796217906, 7);
  sqcRZGate(q, -3.0470926955748725, 7);

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
