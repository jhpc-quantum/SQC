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

  sqcRYGate(q, 1.074459407344242, 0);
  sqcRZGate(q, 1.2291066830629207, 0);
  sqcRYGate(q, 1.1517138478460085, 1);
  sqcRZGate(q, -1.3956608465980924, 1);
  sqcRYGate(q, -0.516690290087352, 2);
  sqcRZGate(q, 1.1420750145439331, 2);
  sqcRYGate(q, -1.7464171584052073, 3);
  sqcRZGate(q, -2.0499573664086124, 3);
  sqcRYGate(q, 1.537957804001489, 4);
  sqcRZGate(q, -2.915031017146284, 4);
  sqcRYGate(q, 1.6593661557609818, 5);
  sqcRZGate(q, -0.8061909131698539, 5);
  sqcRYGate(q, 1.597210247318943, 6);
  sqcRZGate(q, 0.6527265750813216, 6);
  sqcRYGate(q, 1.6178804605247772, 7);
  sqcRZGate(q, 2.1443446260679195, 7);
  sqcRYGate(q, -1.6780633353712417, 8);
  sqcRZGate(q, -2.4758982302116768, 8);
  sqcRYGate(q, 0.7187826078291444, 9);
  sqcRZGate(q, 1.0312522537456248, 9);
  sqcRYGate(q, 2.7273141379016916, 10);
  sqcRZGate(q, 1.626917225334505, 10);
  sqcRYGate(q, -1.8783423850187546, 11);
  sqcRZGate(q, -0.9348919602872784, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, -1.234832302040867, 0);
  sqcRZGate(q, 2.2767833836267934, 0);
  sqcRYGate(q, 1.7947358030200764, 1);
  sqcRZGate(q, 1.3092968457533107, 1);
  sqcRYGate(q, 0.8179591754594242, 2);
  sqcRZGate(q, -0.5179463373485472, 2);
  sqcRYGate(q, -0.4308730228986218, 3);
  sqcRZGate(q, 0.7041431992520968, 3);
  sqcRYGate(q, 3.1390466068006546, 4);
  sqcRZGate(q, 1.8266182840615135, 4);
  sqcRYGate(q, 3.1376811168746825, 5);
  sqcRZGate(q, -2.1821217586050037, 5);
  sqcRYGate(q, 3.138414400025927, 6);
  sqcRZGate(q, 1.452121540792074, 6);
  sqcRYGate(q, 3.140706510123057, 7);
  sqcRZGate(q, 0.5265033606456433, 7);
  sqcRYGate(q, -2.4033403234000086, 8);
  sqcRZGate(q, -1.5612893092026399, 8);
  sqcRYGate(q, 2.3270040539277743, 9);
  sqcRZGate(q, -1.598783782239215, 9);
  sqcRYGate(q, -1.9283818117045883, 10);
  sqcRZGate(q, 2.199725120776617, 10);
  sqcRYGate(q, -2.8977174709616045, 11);
  sqcRZGate(q, -2.3702262789870336, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 0.8600956705621661, 0);
  sqcRZGate(q, -1.0835667536213167, 0);
  sqcRYGate(q, 0.6598554158073001, 1);
  sqcRZGate(q, 2.4928931660284506, 1);
  sqcRYGate(q, -2.2133609332063537, 2);
  sqcRZGate(q, 2.069647417294755, 2);
  sqcRYGate(q, 1.3144408534293266, 3);
  sqcRZGate(q, 2.5406445337858066, 3);
  sqcRYGate(q, 1.67215465846797, 4);
  sqcRZGate(q, -1.965018576400178, 4);
  sqcRYGate(q, 0.4226029006613643, 5);
  sqcRZGate(q, 1.2679481677808828, 5);
  sqcRYGate(q, -3.0969349162319286, 6);
  sqcRZGate(q, -1.1088297231950939, 6);
  sqcRYGate(q, -2.56252722930346, 7);
  sqcRZGate(q, -0.07535587356182738, 7);
  sqcRYGate(q, 2.36546439014867, 8);
  sqcRZGate(q, 1.9609929564451747, 8);
  sqcRYGate(q, 0.274628620014985, 9);
  sqcRZGate(q, 2.21663016083176, 9);
  sqcRYGate(q, 1.9494302597520132, 10);
  sqcRZGate(q, 3.090957440044718, 10);
  sqcRYGate(q, 0.7091140638062345, 11);
  sqcRZGate(q, -1.553237852897562, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, -2.256871410580385, 0);
  sqcRZGate(q, 1.8455750903523107, 0);
  sqcRYGate(q, -0.4562510791321375, 1);
  sqcRZGate(q, 0.0496798814188832, 1);
  sqcRYGate(q, 2.046212198907533, 2);
  sqcRZGate(q, 3.0358820518925005, 2);
  sqcRYGate(q, -1.693834826356372, 3);
  sqcRZGate(q, -0.49368280607433057, 3);
  sqcRYGate(q, 0.006615516085217111, 4);
  sqcRZGate(q, 2.0751819965255667, 4);
  sqcRYGate(q, 0.006278251248303379, 5);
  sqcRZGate(q, -1.023542102412173, 5);
  sqcRYGate(q, -3.1365044516559606, 6);
  sqcRZGate(q, -0.3310627715855903, 6);
  sqcRYGate(q, 0.002194319383203697, 7);
  sqcRZGate(q, 0.13311539609211143, 7);
  sqcRYGate(q, 1.3753874796277035, 8);
  sqcRZGate(q, -0.8013621022098539, 8);
  sqcRYGate(q, -0.1416242745155738, 9);
  sqcRZGate(q, -2.2637082777794735, 9);
  sqcRYGate(q, -2.6003586135090746, 10);
  sqcRZGate(q, -0.06411606971607701, 10);
  sqcRYGate(q, -0.6618403742067871, 11);
  sqcRZGate(q, 2.017203521598633, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, -0.9305284721088762, 0);
  sqcRZGate(q, -0.6210316142910912, 0);
  sqcRYGate(q, 1.0076461496256623, 1);
  sqcRZGate(q, -2.802767228927064, 1);
  sqcRYGate(q, -2.0995822406172517, 2);
  sqcRZGate(q, -1.0361620608590574, 2);
  sqcRYGate(q, 1.5022578390592445, 3);
  sqcRZGate(q, -3.0886721846250107, 3);
  sqcRYGate(q, 0.38348472047859605, 4);
  sqcRZGate(q, -0.8289231972133678, 4);
  sqcRYGate(q, -0.03060650025497047, 5);
  sqcRZGate(q, 1.921864702484669, 5);
  sqcRYGate(q, -0.45929908535663644, 6);
  sqcRZGate(q, 2.4057117238110033, 6);
  sqcRYGate(q, 2.5814271539033844, 7);
  sqcRZGate(q, 2.6216473627768395, 7);
  sqcRYGate(q, -2.675798232586009, 8);
  sqcRZGate(q, 2.400372828001732, 8);
  sqcRYGate(q, -0.941248451619078, 9);
  sqcRZGate(q, -1.9914438891451338, 9);
  sqcRYGate(q, -1.185201766967001, 10);
  sqcRZGate(q, 0.19794044402993194, 10);
  sqcRYGate(q, 2.828855809435454, 11);
  sqcRZGate(q, -0.37041173741560035, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 1.4979587804558816, 0);
  sqcRZGate(q, 0.1546100194225488, 0);
  sqcRYGate(q, 0.35516931716922534, 1);
  sqcRZGate(q, -2.9689694990931392, 1);
  sqcRYGate(q, 2.3339354380186808, 2);
  sqcRZGate(q, -3.0546091558261357, 2);
  sqcRYGate(q, -2.8968705135497945, 3);
  sqcRZGate(q, -2.713951875256466, 3);
  sqcRYGate(q, -0.05466857671248778, 4);
  sqcRZGate(q, 0.7090905581158401, 4);
  sqcRYGate(q, -0.06095840207006059, 5);
  sqcRZGate(q, 0.7882086776747208, 5);
  sqcRYGate(q, -0.0006476596071642859, 6);
  sqcRZGate(q, -2.2137110485198455, 6);
  sqcRYGate(q, -0.006506480936253389, 7);
  sqcRZGate(q, 0.3656624899163354, 7);
  sqcRYGate(q, -0.9696097728676458, 8);
  sqcRZGate(q, -2.9354603154882977, 8);
  sqcRYGate(q, 1.1163553826949224, 9);
  sqcRZGate(q, -2.98193261634057, 9);
  sqcRYGate(q, -1.040570443519008, 10);
  sqcRZGate(q, -0.11809217104009674, 10);
  sqcRYGate(q, 1.6947719564530548, 11);
  sqcRZGate(q, 0.3972079593911522, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 0.9589069243248297, 0);
  sqcRZGate(q, 2.8952654712138686, 0);
  sqcRYGate(q, 0.585554563981882, 1);
  sqcRZGate(q, -1.088383914327662, 1);
  sqcRYGate(q, 0.3084654677506826, 2);
  sqcRZGate(q, -0.2549118359427937, 2);
  sqcRYGate(q, 0.3414617691862717, 3);
  sqcRZGate(q, 2.7406593700736503, 3);
  sqcRYGate(q, -1.565955392741367, 4);
  sqcRZGate(q, 0.8129976241347343, 4);
  sqcRYGate(q, 0.7927808208520963, 5);
  sqcRZGate(q, -2.5297639860737537, 5);
  sqcRYGate(q, 0.13421097773348123, 6);
  sqcRZGate(q, 1.373446773251744, 6);
  sqcRYGate(q, -3.0131433771528124, 7);
  sqcRZGate(q, -1.7908199001766656, 7);
  sqcRYGate(q, -2.447608845052364, 8);
  sqcRZGate(q, 1.086000028621968, 8);
  sqcRYGate(q, -0.7998351428412828, 9);
  sqcRZGate(q, -2.8545071569606697, 9);
  sqcRYGate(q, 1.7585309201685249, 10);
  sqcRZGate(q, 2.3499582959529453, 10);
  sqcRYGate(q, 1.3945816998139586, 11);
  sqcRZGate(q, 1.2682645581363614, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 1.5686095088763017, 0);
  sqcRZGate(q, -1.7865156149171952, 0);
  sqcRYGate(q, -0.004450815930509222, 1);
  sqcRZGate(q, 2.552950986948715, 1);
  sqcRYGate(q, -3.091074042612575, 2);
  sqcRZGate(q, -1.6046543589797617, 2);
  sqcRYGate(q, 0.9798116907097159, 3);
  sqcRZGate(q, -1.5799812492942547, 3);
  sqcRYGate(q, 0.1731673756301584, 4);
  sqcRZGate(q, 1.0838101465911354, 4);
  sqcRYGate(q, -0.25544625251226805, 5);
  sqcRZGate(q, 0.9023253290856902, 5);
  sqcRYGate(q, 1.595116879375956, 6);
  sqcRZGate(q, 0.5099903288057197, 6);
  sqcRYGate(q, -1.5866656331854188, 7);
  sqcRZGate(q, -0.04111722380238714, 7);
  sqcRYGate(q, -0.9292842636730754, 8);
  sqcRZGate(q, -0.9939492504962243, 8);
  sqcRYGate(q, 2.665773080473727, 9);
  sqcRZGate(q, 2.240452739149852, 9);
  sqcRYGate(q, -1.503746927456592, 10);
  sqcRZGate(q, 1.0111446966988369, 10);
  sqcRYGate(q, 2.3925880410976057, 11);
  sqcRZGate(q, -0.37668273664267804, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 3.1258478801338456, 0);
  sqcRZGate(q, 2.5165609689229025, 0);
  sqcRYGate(q, -2.9277766979282736, 1);
  sqcRZGate(q, 2.4764440863057975, 1);
  sqcRYGate(q, 1.5942123743176464, 2);
  sqcRZGate(q, 1.6075862695209935, 2);
  sqcRYGate(q, 1.6102981961049538, 3);
  sqcRZGate(q, -2.138133850288206, 3);
  sqcRYGate(q, 0.004570673609992447, 4);
  sqcRZGate(q, 2.736745993964261, 4);
  sqcRYGate(q, -0.005440792621889123, 5);
  sqcRZGate(q, -3.03691157593657, 5);
  sqcRYGate(q, 0.007437378490329765, 6);
  sqcRZGate(q, 2.8833776110300073, 6);
  sqcRYGate(q, -3.139082530168975, 7);
  sqcRZGate(q, 0.388558747845725, 7);
  sqcRYGate(q, 0.1355645008046764, 8);
  sqcRZGate(q, 1.6074254200581095, 8);
  sqcRYGate(q, 2.463345238479996, 9);
  sqcRZGate(q, 2.2302760242822197, 9);
  sqcRYGate(q, -1.263153182932606, 10);
  sqcRZGate(q, 1.4657837396612639, 10);
  sqcRYGate(q, 0.933626595175209, 11);
  sqcRZGate(q, -0.958425347602086, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 1.0650383733416855, 0);
  sqcRZGate(q, -0.6578951464359273, 0);
  sqcRYGate(q, 2.5963300909784874, 1);
  sqcRZGate(q, 2.8514264491475143, 1);
  sqcRYGate(q, -1.8325945512947097, 2);
  sqcRZGate(q, -3.0754127946639565, 2);
  sqcRYGate(q, 0.05041687838994946, 3);
  sqcRZGate(q, 0.5424271252792208, 3);
  sqcRYGate(q, 1.5070421354510195, 4);
  sqcRZGate(q, 1.5353086789924486, 4);
  sqcRYGate(q, -1.5066277870249891, 5);
  sqcRZGate(q, -1.5862694991242243, 5);
  sqcRYGate(q, 0.11903072330848995, 6);
  sqcRZGate(q, -1.8222820977805378, 6);
  sqcRYGate(q, 3.0161341035364844, 7);
  sqcRZGate(q, 1.9972902185946455, 7);
  sqcRYGate(q, 2.7889852803443613, 8);
  sqcRZGate(q, -1.0375245522119014, 8);
  sqcRYGate(q, -1.6496011827337727, 9);
  sqcRZGate(q, -1.6473488240266567, 9);
  sqcRYGate(q, 2.1504388168142388, 10);
  sqcRZGate(q, 2.488891978195853, 10);
  sqcRYGate(q, 2.684501371377311, 11);
  sqcRZGate(q, 2.632577293154447, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 2.2271598174616063, 0);
  sqcRZGate(q, 1.8807563181157398, 0);
  sqcRYGate(q, 2.1579177252010258, 1);
  sqcRZGate(q, 0.15043222897901015, 1);
  sqcRYGate(q, 1.451619423732506, 2);
  sqcRZGate(q, -0.7695640826360415, 2);
  sqcRYGate(q, -1.5744193820334293, 3);
  sqcRZGate(q, 2.9537236151382227, 3);
  sqcRYGate(q, 2.812225564478607, 4);
  sqcRZGate(q, -3.118275143157154, 4);
  sqcRYGate(q, -2.7519202100885467, 5);
  sqcRZGate(q, 0.05772459263625773, 5);
  sqcRYGate(q, -2.021664265220439, 6);
  sqcRZGate(q, 0.44106304501494975, 6);
  sqcRYGate(q, -2.0247522235408706, 7);
  sqcRZGate(q, -2.7757710888856333, 7);
  sqcRYGate(q, -1.5317626966330087, 8);
  sqcRZGate(q, 1.4281373789003162, 8);
  sqcRYGate(q, -2.3738154725531015, 9);
  sqcRZGate(q, 0.3155118759411583, 9);
  sqcRYGate(q, 2.3491659448433917, 10);
  sqcRZGate(q, -2.8059432713594887, 10);
  sqcRYGate(q, -1.4272135921672877, 11);
  sqcRZGate(q, -2.565908131385967, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 1.9268999647748117, 0);
  sqcRZGate(q, 2.4940745110068643, 0);
  sqcRYGate(q, 1.1110373156439861, 1);
  sqcRZGate(q, 1.6534090155622474, 1);
  sqcRYGate(q, 3.0953310935988494, 2);
  sqcRZGate(q, 1.8310555728025706, 2);
  sqcRYGate(q, -0.011453230354481325, 3);
  sqcRZGate(q, -1.709237502338185, 3);
  sqcRYGate(q, -2.8152481641584655, 4);
  sqcRZGate(q, 0.11996432939480396, 4);
  sqcRYGate(q, 2.804457630443793, 5);
  sqcRZGate(q, 0.06724753794752267, 5);
  sqcRYGate(q, 0.18448302960928228, 6);
  sqcRZGate(q, -0.45587525366069104, 6);
  sqcRYGate(q, -0.23523439630398002, 7);
  sqcRZGate(q, 2.7704652992453984, 7);
  sqcRYGate(q, -0.8988651088967918, 8);
  sqcRZGate(q, 1.8427954769848471, 8);
  sqcRYGate(q, 2.112111043374777, 9);
  sqcRZGate(q, 0.35838310692995556, 9);
  sqcRYGate(q, -0.10587082533989904, 10);
  sqcRZGate(q, -0.35145961781825596, 10);
  sqcRYGate(q, -2.5995114961451424, 11);
  sqcRZGate(q, 1.5765387859623177, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 2.7863064275916254, 0);
  sqcRZGate(q, -0.2915226252391549, 0);
  sqcRYGate(q, 2.464924145633855, 1);
  sqcRZGate(q, -1.9473149039066713, 1);
  sqcRYGate(q, -3.1273493278202107, 2);
  sqcRZGate(q, -3.106922804543018, 2);
  sqcRYGate(q, -1.556387297668063, 3);
  sqcRZGate(q, -2.856006349035467, 3);
  sqcRYGate(q, 0.02668319382771145, 4);
  sqcRZGate(q, -1.6317684384568145, 4);
  sqcRYGate(q, 1.9634603714941463, 5);
  sqcRZGate(q, -1.580839389861171, 5);
  sqcRYGate(q, 0.3417269706797876, 6);
  sqcRZGate(q, 1.5874089957274125, 6);
  sqcRYGate(q, -2.172950826665088, 7);
  sqcRZGate(q, 1.5823822544656219, 7);
  sqcRYGate(q, 1.5321988940683786, 8);
  sqcRZGate(q, 0.8379550714468129, 8);
  sqcRYGate(q, -0.039776509619164374, 9);
  sqcRZGate(q, 2.4373295339957584, 9);
  sqcRYGate(q, 0.1733533081395713, 10);
  sqcRZGate(q, 3.0169168511545523, 10);
  sqcRYGate(q, 0.45390521245910154, 11);
  sqcRZGate(q, 3.0854045423409846, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 3.0640212599074435, 0);
  sqcRZGate(q, 0.6937188688473342, 0);
  sqcRYGate(q, 2.801186366597167, 1);
  sqcRZGate(q, 2.270440276649759, 1);
  sqcRYGate(q, 3.10954382800843, 2);
  sqcRZGate(q, 1.0968679293617543, 2);
  sqcRYGate(q, -3.1040771151873736, 3);
  sqcRZGate(q, -1.8135503998491458, 3);
  sqcRYGate(q, -1.5471061405755713, 4);
  sqcRZGate(q, 2.2866030984150236, 4);
  sqcRYGate(q, 1.5449207461337, 5);
  sqcRZGate(q, 0.011260427955185724, 5);
  sqcRYGate(q, -1.5683251270656078, 6);
  sqcRZGate(q, -2.1180765304557987, 6);
  sqcRYGate(q, -1.5657064146288946, 7);
  sqcRZGate(q, 0.6037083199346869, 7);
  sqcRYGate(q, -3.1350877413743428, 8);
  sqcRZGate(q, 2.581390776333959, 8);
  sqcRYGate(q, -0.035016602004718664, 9);
  sqcRZGate(q, 2.205094633536204, 9);
  sqcRYGate(q, 2.9019707104186216, 10);
  sqcRZGate(q, 1.5528387042691199, 10);
  sqcRYGate(q, 0.2973981761749909, 11);
  sqcRZGate(q, -1.2932831867324004, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 2.9149013750125508, 0);
  sqcRZGate(q, 0.9100344655839994, 0);
  sqcRYGate(q, -1.668959025394119, 1);
  sqcRZGate(q, -1.3060424308859904, 1);
  sqcRYGate(q, 2.234666748663401, 2);
  sqcRZGate(q, -2.1371265959359427, 2);
  sqcRYGate(q, 1.461163505175472, 3);
  sqcRZGate(q, 2.2676555899012545, 3);
  sqcRYGate(q, 1.2270737294232692, 4);
  sqcRZGate(q, 1.3348309791706319, 4);
  sqcRYGate(q, 0.9699540753766444, 5);
  sqcRZGate(q, 2.109046503002694, 5);
  sqcRYGate(q, 1.941346219226267, 6);
  sqcRZGate(q, -0.8275753506694131, 6);
  sqcRYGate(q, -2.110289387319814, 7);
  sqcRZGate(q, -0.9183189721620513, 7);
  sqcRYGate(q, 1.3230698817186397, 8);
  sqcRZGate(q, -0.0416333433475662, 8);
  sqcRYGate(q, 2.6111959019585105, 9);
  sqcRZGate(q, -1.9757365062948686, 9);
  sqcRYGate(q, -1.3254382817989694, 10);
  sqcRZGate(q, -2.779572014813156, 10);
  sqcRYGate(q, -1.3218975274312466, 11);
  sqcRZGate(q, 0.3800402830693699, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 0.2189957927470525, 0);
  sqcRZGate(q, -0.09011450080249873, 0);
  sqcRYGate(q, 2.186304942973973, 1);
  sqcRZGate(q, 2.1230047798979426, 1);
  sqcRYGate(q, -3.1089907972391893, 2);
  sqcRZGate(q, 0.24607704212682308, 2);
  sqcRYGate(q, -0.0615737366576683, 3);
  sqcRZGate(q, 1.2877264004519553, 3);
  sqcRYGate(q, -3.1404586840998983, 4);
  sqcRZGate(q, -3.0808637318518723, 4);
  sqcRYGate(q, 0.0007959864178474314, 5);
  sqcRZGate(q, -2.1034927326471737, 5);
  sqcRYGate(q, -1.5735262000887467, 6);
  sqcRZGate(q, -1.5869965436908464, 6);
  sqcRYGate(q, 1.57597635196014, 7);
  sqcRZGate(q, -0.38364893370416286, 7);
  sqcRYGate(q, 1.8530518726967595, 8);
  sqcRZGate(q, 2.034474667023848, 8);
  sqcRYGate(q, 0.07477041604458248, 9);
  sqcRZGate(q, 1.6055429923256703, 9);
  sqcRYGate(q, -1.293370315631062, 10);
  sqcRZGate(q, 1.4156077637073674, 10);
  sqcRYGate(q, 2.4584141151369177, 11);
  sqcRZGate(q, -1.6305150184901955, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, -3.1283118753741963, 0);
  sqcRZGate(q, 0.41231164688285443, 0);
  sqcRYGate(q, 1.5309782756819068, 1);
  sqcRZGate(q, 2.6020453362219924, 1);
  sqcRYGate(q, -2.2361058869530837, 2);
  sqcRZGate(q, -1.5337306291670334, 2);
  sqcRYGate(q, -2.8229294318205005, 3);
  sqcRZGate(q, -1.9263949071516855, 3);
  sqcRYGate(q, 0.10098558718726348, 4);
  sqcRZGate(q, -0.11133929450106142, 4);
  sqcRYGate(q, 2.983660428167642, 5);
  sqcRZGate(q, -1.0306870664829884, 5);
  sqcRYGate(q, 3.071321480646374, 6);
  sqcRZGate(q, 1.5454012539483017, 6);
  sqcRYGate(q, 0.0026555824507568104, 7);
  sqcRZGate(q, 0.39248450955389386, 7);
  sqcRYGate(q, -1.6002083029890533, 8);
  sqcRZGate(q, 1.2144073935575017, 8);
  sqcRYGate(q, -0.05001185680492348, 9);
  sqcRZGate(q, -3.117346981521295, 9);
  sqcRYGate(q, 0.031916527297950636, 10);
  sqcRZGate(q, 2.7126674093042, 10);
  sqcRYGate(q, 3.1346512933079724, 11);
  sqcRZGate(q, 2.54916359598837, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, -0.3006915415584363, 0);
  sqcRZGate(q, -2.5956665137508317, 0);
  sqcRYGate(q, -1.3156783145882978, 1);
  sqcRZGate(q, 2.173157051461175, 1);
  sqcRYGate(q, 1.570049431056912, 2);
  sqcRZGate(q, 1.5878959273807256, 2);
  sqcRYGate(q, -3.1013775957627834, 3);
  sqcRZGate(q, 1.1695053495243561, 3);
  sqcRYGate(q, 0.019461315743613875, 4);
  sqcRZGate(q, -1.4153234894421347, 4);
  sqcRYGate(q, 0.004943329439209165, 5);
  sqcRZGate(q, -0.5340095358256596, 5);
  sqcRYGate(q, -1.5738525844659128, 6);
  sqcRZGate(q, -0.17640741130555257, 6);
  sqcRYGate(q, 1.5652964054978802, 7);
  sqcRZGate(q, 3.1183226867831366, 7);
  sqcRYGate(q, -2.0339534337063494, 8);
  sqcRZGate(q, -0.6574980545912772, 8);
  sqcRYGate(q, -0.0924965097760506, 9);
  sqcRZGate(q, 0.34609763405475746, 9);
  sqcRYGate(q, -3.0299577361022787, 10);
  sqcRZGate(q, 1.6448521420515754, 10);
  sqcRYGate(q, -0.006144180149037837, 11);
  sqcRZGate(q, 0.93681817007265, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, -3.1251626631611162, 0);
  sqcRZGate(q, -0.9056135965153231, 0);
  sqcRYGate(q, -3.0849652392668094, 1);
  sqcRZGate(q, 0.4500054706978536, 1);
  sqcRYGate(q, -1.5571945411438648, 2);
  sqcRZGate(q, -1.2565246521132378, 2);
  sqcRYGate(q, -0.02709914666668869, 3);
  sqcRZGate(q, -2.461676753316862, 3);
  sqcRYGate(q, 1.879380160157882, 4);
  sqcRZGate(q, -2.7000845635748183, 4);
  sqcRYGate(q, 1.1695197466416445, 5);
  sqcRZGate(q, -2.6944145048359065, 5);
  sqcRYGate(q, -0.9013414038127792, 6);
  sqcRZGate(q, 0.6130147426703347, 6);
  sqcRYGate(q, -1.4392568700985235, 7);
  sqcRZGate(q, -2.640681175778649, 7);
  sqcRYGate(q, -2.5234592692625655, 8);
  sqcRZGate(q, -2.542613680883451, 8);
  sqcRYGate(q, -0.0609330919303266, 9);
  sqcRZGate(q, 0.3131039832980167, 9);
  sqcRYGate(q, 3.137144446546929, 10);
  sqcRZGate(q, -0.8535835779928559, 10);
  sqcRYGate(q, -3.1362936796023293, 11);
  sqcRZGate(q, -3.124426344828347, 11);

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
