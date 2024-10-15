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

  sqcRYGate(q, 3.048727115202877, 0);
  sqcRYGate(q, -0.983741704672692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.076468163610352, 0);
  sqcRYGate(q, -0.7222059077719294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1480700698379036, 2);
  sqcRYGate(q, 0.15915150975184744, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0355623152675184, 2);
  sqcRYGate(q, -0.8188724858784809, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1376243512050488, 4);
  sqcRYGate(q, -1.4382111379629292, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1202131743041757, 4);
  sqcRYGate(q, -0.9018335151618954, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3342334542877996, 6);
  sqcRYGate(q, -2.117935068682397, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0211276083502399, 6);
  sqcRYGate(q, -0.06360142628138642, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7373755375455229, 8);
  sqcRYGate(q, -0.11748270972452207, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.4040761077780681, 8);
  sqcRYGate(q, -2.4821131811412545, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.290214931522658, 10);
  sqcRYGate(q, -2.4842787665114696, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.381968632462054, 10);
  sqcRYGate(q, 2.2335787546726555, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.129872605844038, 1);
  sqcRYGate(q, 1.8313896494907438, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4397861558538447, 1);
  sqcRYGate(q, -1.5885348803366721, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5459898570898836, 3);
  sqcRYGate(q, -0.7539694779191188, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.015799965066864985, 3);
  sqcRYGate(q, -3.05866370318553, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7875698587007678, 5);
  sqcRYGate(q, 1.2723149620613705, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2450085792818433, 5);
  sqcRYGate(q, 1.1104885590502294, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.25026933781724736, 7);
  sqcRYGate(q, 2.6668574385180595, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.2757495557084093, 7);
  sqcRYGate(q, -1.6800432636300207, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.07579695030479729, 9);
  sqcRYGate(q, 1.8371403668895665, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.978910884409044, 9);
  sqcRYGate(q, 2.295415469509808, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.35773398579797444, 0);
  sqcRYGate(q, 0.719497829335997, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7223851435423886, 0);
  sqcRYGate(q, -2.593610929433525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5440201984611792, 2);
  sqcRYGate(q, -1.0920406230157047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7369021095013262, 2);
  sqcRYGate(q, -0.67895861758584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.103801124019866, 4);
  sqcRYGate(q, 1.2409453465516522, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6254422347048303, 4);
  sqcRYGate(q, -2.646424884579722, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2652360718377607, 6);
  sqcRYGate(q, -1.9498429955497802, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6601127541932983, 6);
  sqcRYGate(q, 1.7544733547318305, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4403487300603817, 8);
  sqcRYGate(q, 2.058302076451101, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.042685600004030246, 8);
  sqcRYGate(q, -1.2446150737949235, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9616521345400938, 10);
  sqcRYGate(q, -1.9566104753699998, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8764659994273163, 10);
  sqcRYGate(q, -0.004934119634370618, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0155320279509317, 1);
  sqcRYGate(q, -2.2272804746798314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.120548285311856, 1);
  sqcRYGate(q, 3.0399201189853198, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6648684531563789, 3);
  sqcRYGate(q, -0.578526756768019, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7053973753062723, 3);
  sqcRYGate(q, 0.09049933454106807, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.121392588912707, 5);
  sqcRYGate(q, -1.3027000645650202, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.085689327918802, 5);
  sqcRYGate(q, 1.456990291673769, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0628821042650112, 7);
  sqcRYGate(q, -3.0842896572517517, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.034465891399541, 7);
  sqcRYGate(q, 0.5911277835199291, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.2378778249339923, 9);
  sqcRYGate(q, 2.065194677508077, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.36306046241591, 9);
  sqcRYGate(q, 0.3094083119754463, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.6616273646796369, 0);
  sqcRYGate(q, -2.178657754939323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.739311042572302, 0);
  sqcRYGate(q, -0.30080808476227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.136413828887701, 2);
  sqcRYGate(q, 1.452674528060404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.142430930858539, 2);
  sqcRYGate(q, 0.05462599015449854, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.378262897488593, 4);
  sqcRYGate(q, -1.9457615733985532, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.109892299076455, 4);
  sqcRYGate(q, -1.5343955757848273, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0560460846856767, 6);
  sqcRYGate(q, 2.802037658502859, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9303602478003867, 6);
  sqcRYGate(q, 2.9891668312251003, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5731619084500592, 8);
  sqcRYGate(q, -1.7564421017770444, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.1426408805316295, 8);
  sqcRYGate(q, 0.09283365626214, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.026922284842337, 10);
  sqcRYGate(q, -1.9769714164811734, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.029603809162074054, 10);
  sqcRYGate(q, 0.012339323602973197, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2419781258118032, 1);
  sqcRYGate(q, -0.6873326801451071, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5861009691694354, 1);
  sqcRYGate(q, -0.8992333188412256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6810725269382258, 3);
  sqcRYGate(q, -1.4705843389931048, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3564966949636337, 3);
  sqcRYGate(q, 2.362318475295417, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.775977069101641, 5);
  sqcRYGate(q, 2.4837229339912636, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.21710203684696516, 5);
  sqcRYGate(q, -0.6207867922488619, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7034454256447513, 7);
  sqcRYGate(q, -2.408451346144911, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5311928737418112, 7);
  sqcRYGate(q, -2.406191464431907, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.016448735331638, 9);
  sqcRYGate(q, -2.3235872109727773, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.09478636345691, 9);
  sqcRYGate(q, 2.8633321158091465, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.701795215550807, 0);
  sqcRYGate(q, -0.3086572932205369, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.00989879803847024, 0);
  sqcRYGate(q, -0.917804329208719, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.291187544370227, 2);
  sqcRYGate(q, -0.5919997869035869, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5664569885460853, 2);
  sqcRYGate(q, -1.6184606587458576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3174752944862854, 4);
  sqcRYGate(q, -0.9712380881112024, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.13383709095642704, 4);
  sqcRYGate(q, 0.01493451249660982, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.645314910773272, 6);
  sqcRYGate(q, -1.3762742669124153, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.382384786297133, 6);
  sqcRYGate(q, -0.046249155582264015, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.560395944563898, 8);
  sqcRYGate(q, 1.8210250870689704, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.8173236095803293, 8);
  sqcRYGate(q, -0.9295258480636919, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8920807398838164, 10);
  sqcRYGate(q, 1.5092396724316919, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.1746802822101614, 10);
  sqcRYGate(q, 3.037161274793939, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.1154535293426833, 1);
  sqcRYGate(q, 0.9442171308081289, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5650133135514497, 1);
  sqcRYGate(q, 1.9437504344065228, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6412640978471347, 3);
  sqcRYGate(q, 1.3268646826458836, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6691512960454595, 3);
  sqcRYGate(q, -1.3529075708708689, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.267289763107765, 5);
  sqcRYGate(q, 2.8053841776567996, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.011859084247358, 5);
  sqcRYGate(q, 0.614858416087114, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.39327093904174504, 7);
  sqcRYGate(q, 0.375759323005404, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.38313970083971405, 7);
  sqcRYGate(q, 1.836005306727877, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.274850413002582, 9);
  sqcRYGate(q, 1.7095169311756184, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6387867690125448, 9);
  sqcRYGate(q, 3.055549503408934, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.13616610114485897, 0);
  sqcRYGate(q, 2.197337146138816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0873189616772567, 0);
  sqcRYGate(q, 2.6525711214851215, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.895625159190209, 2);
  sqcRYGate(q, 2.6819522237640014, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1412016853642735, 2);
  sqcRYGate(q, 1.4963230193408368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8121979991041655, 4);
  sqcRYGate(q, 2.515011574291677, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3395073070722456, 4);
  sqcRYGate(q, 2.9790144533667826, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.47280469055084406, 6);
  sqcRYGate(q, -3.1335588400004895, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8590332408815033, 6);
  sqcRYGate(q, -3.014212980577785, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0005128094399502459, 8);
  sqcRYGate(q, -2.0211410502480414, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.968840583168374, 8);
  sqcRYGate(q, -2.872267342496504, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.3074718119919155, 10);
  sqcRYGate(q, 1.1906084516047555, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0070443391796209, 10);
  sqcRYGate(q, -3.1061728605018426, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.275086748056637, 1);
  sqcRYGate(q, -0.16891393552369052, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.059986975089285, 1);
  sqcRYGate(q, 2.177819367168965, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4295680915874864, 3);
  sqcRYGate(q, -1.787643238516146, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8955870356763533, 3);
  sqcRYGate(q, -2.108337665284307, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.36916029016706825, 5);
  sqcRYGate(q, 1.5549296889661361, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1402025664435107, 5);
  sqcRYGate(q, 0.01025068140280739, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6540159457256434, 7);
  sqcRYGate(q, -1.1816676970787992, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.0160989393662891, 7);
  sqcRYGate(q, -1.2344780006827167, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.8335957472650808, 9);
  sqcRYGate(q, -0.4552992656556673, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.09834145473470486, 9);
  sqcRYGate(q, 1.1661515545179242, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.7273762810028326, 0);
  sqcRYGate(q, 1.517910164972353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2332285263012635, 0);
  sqcRYGate(q, -2.335261017253769, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3748101202075054, 2);
  sqcRYGate(q, 1.1817104575623851, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1151654267958087, 2);
  sqcRYGate(q, 2.711001172980167, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.019446291202451782, 4);
  sqcRYGate(q, 0.567723449920333, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0625702455643382, 4);
  sqcRYGate(q, -0.09634290089471964, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.24765754322780664, 6);
  sqcRYGate(q, 0.7860627765603708, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.009338260280958624, 6);
  sqcRYGate(q, -0.25139596341171444, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1153793095578437, 8);
  sqcRYGate(q, 1.7937296300913044, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.343727123928399, 8);
  sqcRYGate(q, 2.485169642322755, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.724236526517343, 10);
  sqcRYGate(q, 2.4933395522659265, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.9336153109566454, 10);
  sqcRYGate(q, 2.000801359919982, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.9229740060724387, 1);
  sqcRYGate(q, -1.2104927345765322, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.141573468603418, 1);
  sqcRYGate(q, 1.8204170966478908, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6627887621467972, 3);
  sqcRYGate(q, -0.2684979429964623, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.35882850638547, 3);
  sqcRYGate(q, 1.2409964890186895, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8828768317669689, 5);
  sqcRYGate(q, -2.0587222536982446, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.129217529924954, 5);
  sqcRYGate(q, 3.1053660700070624, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.27840029082329565, 7);
  sqcRYGate(q, -1.562615230680911, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.3598049540829367, 7);
  sqcRYGate(q, 0.3582673223648203, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.571268852376769, 9);
  sqcRYGate(q, 2.603387377478867, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9065087625033428, 9);
  sqcRYGate(q, -3.0696700755627364, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6002583490405413, 0);
  sqcRYGate(q, -1.1370749620694494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3398611831849219, 0);
  sqcRYGate(q, 0.4526322656950068, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7827568357994089, 2);
  sqcRYGate(q, -2.8623229995500066, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.26668695629787553, 2);
  sqcRYGate(q, -3.0198404881056446, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.504009277146803, 4);
  sqcRYGate(q, -1.8020866641745883, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2768650825802856, 4);
  sqcRYGate(q, -2.9744203078946034, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.34948944869036946, 6);
  sqcRYGate(q, 1.7422142755412091, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0922861237041572, 6);
  sqcRYGate(q, -3.1283514738083156, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.907488249235536, 8);
  sqcRYGate(q, -2.041748409096611, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.07581738547440654, 8);
  sqcRYGate(q, -2.8341947741881786, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.10343456677964573, 10);
  sqcRYGate(q, -1.6810805605043964, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.799150222818449, 10);
  sqcRYGate(q, -1.341576519015341, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9481338269049226, 1);
  sqcRYGate(q, 0.06695375226022104, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.22052327195885432, 1);
  sqcRYGate(q, 2.4630850930471975, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4519325813689266, 3);
  sqcRYGate(q, -2.1403593471905173, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.312169925078982, 3);
  sqcRYGate(q, 2.666705869019493, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7908483157254649, 5);
  sqcRYGate(q, -2.1506028180736996, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0308448613798715, 5);
  sqcRYGate(q, 0.11370007352756487, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5667446928463944, 7);
  sqcRYGate(q, -1.983655005483227, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.4909464662793699, 7);
  sqcRYGate(q, 0.3773293457006734, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.1083552501310443, 9);
  sqcRYGate(q, -1.9977978003906747, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.35617075325058, 9);
  sqcRYGate(q, -0.257390492365637, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.19868284489357, 0);
  sqcRYGate(q, 2.8284823586883423, 1);
  sqcRYGate(q, 0.07232532719982483, 2);
  sqcRYGate(q, -1.3584640563445225, 3);
  sqcRYGate(q, -2.627092101602546, 4);
  sqcRYGate(q, 1.5782709058216025, 5);
  sqcRYGate(q, 3.0615072896973863, 6);
  sqcRYGate(q, 3.140492829344554, 7);
  sqcRYGate(q, -0.009291076800469256, 8);
  sqcRYGate(q, -1.574271751588717, 9);
  sqcRYGate(q, 1.6343188081224886, 10);
  sqcRYGate(q, 3.1051928579839645, 11);

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
