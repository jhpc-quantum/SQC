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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 2.1058407819316347, 0);
  sqcRYGate(q, 1.8248118330702754, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7922821381808585, 0);
  sqcRYGate(q, -2.8380788567507875, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0552111157263435, 2);
  sqcRYGate(q, -2.007297738125808, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.276065751438556, 2);
  sqcRYGate(q, 1.3259184980321157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9111347953142478, 4);
  sqcRYGate(q, 2.864117465120638, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.523739966258896, 4);
  sqcRYGate(q, 2.76685572467232, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8651500584592524, 6);
  sqcRYGate(q, 1.7829692094667626, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4257045993313096, 6);
  sqcRYGate(q, 1.4325396033742681, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.147462301175465, 8);
  sqcRYGate(q, 0.7576436450469872, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.20010046124114209, 8);
  sqcRYGate(q, -1.4440171002309086, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5359859359970733, 10);
  sqcRYGate(q, -2.234250252010609, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.8265949119298575, 10);
  sqcRYGate(q, -0.8010230008770101, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.14986242614809858, 1);
  sqcRYGate(q, 2.735396677935602, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2584202877203827, 1);
  sqcRYGate(q, -1.6374083249165183, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.078257318801491, 3);
  sqcRYGate(q, 0.45429219372948765, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2065277885166683, 3);
  sqcRYGate(q, -3.1399121154483067, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8747914491697752, 5);
  sqcRYGate(q, 1.9123628661710432, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.569104264233217, 5);
  sqcRYGate(q, -1.3942867290370808, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4501531315099205, 7);
  sqcRYGate(q, -1.4863538903628826, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.571258727976346, 7);
  sqcRYGate(q, 1.5706713948514173, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.2925150536408267, 9);
  sqcRYGate(q, 2.6370606549751847, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.140520041006214, 9);
  sqcRYGate(q, 2.8153371887254415, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.09572520532838, 0);
  sqcRYGate(q, 0.5898990897232936, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4950893474052935, 0);
  sqcRYGate(q, -0.007919574685407705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.066772330771868, 2);
  sqcRYGate(q, 0.8117005137770658, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.338820486971664, 2);
  sqcRYGate(q, 1.5890890701921958, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5874779177697067, 4);
  sqcRYGate(q, 1.5689934876493496, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5583778690651302, 4);
  sqcRYGate(q, -1.6109913372530764, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5708468375487499, 6);
  sqcRYGate(q, -1.5754775076443082, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.22248914236084147, 6);
  sqcRYGate(q, 1.5718569371232602, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.04223077563441092, 8);
  sqcRYGate(q, 0.002391303037665194, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5785796156296756, 8);
  sqcRYGate(q, 1.558660357677126, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5116490495530386, 10);
  sqcRYGate(q, 0.12826620389816967, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.358548284939176, 10);
  sqcRYGate(q, 2.133724194689626, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.12942950430158187, 1);
  sqcRYGate(q, -2.8318418393615823, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5601410255999282, 1);
  sqcRYGate(q, -1.5699036202289776, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.17653021354419454, 3);
  sqcRYGate(q, 0.022573406823802083, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5768094821674346, 3);
  sqcRYGate(q, 1.5673736084704144, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5706760263456039, 5);
  sqcRYGate(q, 0.0035254121195064693, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5518385486466872, 5);
  sqcRYGate(q, 1.571419081397039, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0802837654298245, 7);
  sqcRYGate(q, 1.5781366497648257, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.7302936934693278, 7);
  sqcRYGate(q, -1.4104411864314288, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.0313734830965746, 9);
  sqcRYGate(q, 1.3035165980633163, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4232720360656934, 9);
  sqcRYGate(q, 1.9846105091904769, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0896059868322734, 0);
  sqcRYGate(q, 1.361761798611606, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1095142437549868, 0);
  sqcRYGate(q, 3.0622024364862677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6939856682331387, 2);
  sqcRYGate(q, 1.5785301392125102, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8096676093193915, 2);
  sqcRYGate(q, -1.5697231921606245, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3229242166310141, 4);
  sqcRYGate(q, 1.4871895422249848, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1318470941497054, 4);
  sqcRYGate(q, 1.5741956642848152, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.114812336003725, 6);
  sqcRYGate(q, -1.4461135942507841, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5553245204335209, 6);
  sqcRYGate(q, -1.5292306210142703, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8961575352684231, 8);
  sqcRYGate(q, 1.5701726199085329, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5692876990769724, 8);
  sqcRYGate(q, -3.140647736067113, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7335027073541625, 10);
  sqcRYGate(q, -1.8150925818708683, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5268450609849618, 10);
  sqcRYGate(q, 0.0006072177254936264, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.192034574513059, 1);
  sqcRYGate(q, -3.1276798209493806, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5782312775128238, 1);
  sqcRYGate(q, 1.580507669159771, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8771501521981122, 3);
  sqcRYGate(q, 2.567059808116048, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.08572068498526819, 3);
  sqcRYGate(q, -3.121061927645122, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5799772548449598, 5);
  sqcRYGate(q, 1.6789462302947404, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.139004418426733, 5);
  sqcRYGate(q, 0.2682907950056028, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4660293714816115, 7);
  sqcRYGate(q, 0.9791222856987558, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.570708031649402, 7);
  sqcRYGate(q, -1.5643048986062995, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0027630363809256764, 9);
  sqcRYGate(q, 0.77505134644203, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5694367372032358, 9);
  sqcRYGate(q, 1.570186701120808, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6894332759123314, 0);
  sqcRYGate(q, 1.573564297449618, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5711833190848064, 0);
  sqcRYGate(q, -1.5720187008543565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.571827944706703, 2);
  sqcRYGate(q, 2.804441291852928, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.02530224353342863, 2);
  sqcRYGate(q, -1.5716055715710775, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5700334937676512, 4);
  sqcRYGate(q, 1.386355875230157, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.010214650704247319, 4);
  sqcRYGate(q, -1.5673467143429551, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8463164470989053, 6);
  sqcRYGate(q, 0.08014250578237193, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5707928199533807, 6);
  sqcRYGate(q, 1.6125110440348878, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5603074441988563, 8);
  sqcRYGate(q, -2.728115415696333, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.622887753148704, 8);
  sqcRYGate(q, -0.0487326813791406, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.140558197296456, 10);
  sqcRYGate(q, -3.075545701689937, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5721438564603725, 10);
  sqcRYGate(q, -1.5702767767424026, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.0007537521960290266, 1);
  sqcRYGate(q, -1.575814732371307, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1117578514337887, 1);
  sqcRYGate(q, -1.5765173773059447, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5436106252669888, 3);
  sqcRYGate(q, 2.808914700275456, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5487247045528152, 3);
  sqcRYGate(q, -1.5729751103788403, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6842787586498307, 5);
  sqcRYGate(q, -2.9921657862636186, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5707516261869103, 5);
  sqcRYGate(q, 1.5704165706132975, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4082371887097467, 7);
  sqcRYGate(q, -1.5813002509253116, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5808976010440992, 7);
  sqcRYGate(q, 3.1402270176922524, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.00019022245013289307, 9);
  sqcRYGate(q, 0.003069767044412838, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5707068693352981, 9);
  sqcRYGate(q, -1.5708156212298052, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2211242119913175, 0);
  sqcRYGate(q, 2.783186808146607, 1);
  sqcRYGate(q, -0.3570599656846838, 2);
  sqcRYGate(q, -1.887898067769652, 3);
  sqcRYGate(q, -0.3950470227490559, 4);
  sqcRYGate(q, 1.2550199797196784, 5);
  sqcRYGate(q, -0.32966189477501207, 6);
  sqcRYGate(q, -1.1597776852347215, 7);
  sqcRYGate(q, 1.2403198318834054, 8);
  sqcRYGate(q, 2.8172744680266244, 9);
  sqcRYGate(q, 2.8117134296560105, 10);
  sqcRYGate(q, 1.2462363843054478, 11);

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
