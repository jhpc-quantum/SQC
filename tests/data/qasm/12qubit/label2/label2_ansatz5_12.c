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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 2.98132812043197, 0);
  sqcRYGate(q, -0.2137894773772426, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9833039569482684, 0);
  sqcRYGate(q, -0.06974463777143784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8347878688788478, 2);
  sqcRYGate(q, 1.6124690702733158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0499660751244186, 2);
  sqcRYGate(q, -0.00035388419150031355, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.741377375929564, 4);
  sqcRYGate(q, -2.2764112904103353, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.40030127784413777, 4);
  sqcRYGate(q, 0.29230666692739354, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1858836112672044, 6);
  sqcRYGate(q, -2.2820505513103178, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3690983931229619, 6);
  sqcRYGate(q, 2.8414127986619477, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.033557588939081, 8);
  sqcRYGate(q, -1.046149045280278, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5084326133796997, 8);
  sqcRYGate(q, -0.5128344141639065, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.6348711075668083, 10);
  sqcRYGate(q, 1.6541192420868005, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.1251581576650227, 10);
  sqcRYGate(q, -2.940754802862253, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0375565705827454, 1);
  sqcRYGate(q, -1.5412583632305985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.993140378931719, 1);
  sqcRYGate(q, -3.1289768773318007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2326606982903936, 3);
  sqcRYGate(q, -2.0633557880146114, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0480063292327166, 3);
  sqcRYGate(q, -0.7047410171347726, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.031928806645007, 5);
  sqcRYGate(q, -1.4875226023477977, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5819603001322325, 5);
  sqcRYGate(q, 0.6935988048221066, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6278316527127545, 7);
  sqcRYGate(q, -2.7951299697255476, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.8473417062381916, 7);
  sqcRYGate(q, -0.4059895731692913, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.146082492519398, 9);
  sqcRYGate(q, 2.1323942399808127, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.7820663577262374, 9);
  sqcRYGate(q, -0.14567803840203375, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0456493523873434, 0);
  sqcRYGate(q, 2.8520487176509426, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.008785969161919205, 0);
  sqcRYGate(q, 1.6332668859744486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8459296592753258, 2);
  sqcRYGate(q, 1.5150517559530148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.03276908905657106, 2);
  sqcRYGate(q, -0.49978410804084034, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.654141366917447, 4);
  sqcRYGate(q, -0.1536833903217673, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3419957527887776, 4);
  sqcRYGate(q, 2.3465435422736896, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.903878681621677, 6);
  sqcRYGate(q, 1.5751747193080605, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.140924139844802, 6);
  sqcRYGate(q, -3.0072703288119658, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9188617704015134, 8);
  sqcRYGate(q, -2.250672625656162, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.2724617994477192, 8);
  sqcRYGate(q, -0.3170338844428544, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.958966829313118, 10);
  sqcRYGate(q, -1.3167628705662722, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0180435428125598, 10);
  sqcRYGate(q, 0.8286772253699854, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.808305760973882, 1);
  sqcRYGate(q, 0.47292859953882055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.308449041500806, 1);
  sqcRYGate(q, -1.2005796103554522, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1708637406894935, 3);
  sqcRYGate(q, 2.811856018479941, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4374898324445963, 3);
  sqcRYGate(q, -1.3265543936961866, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9978393123542437, 5);
  sqcRYGate(q, -0.19090474655427694, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1408892617577826, 5);
  sqcRYGate(q, -0.00012671368351803842, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9163962749602286, 7);
  sqcRYGate(q, -1.061095196010211, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.47386523304732037, 7);
  sqcRYGate(q, -2.755099000074437, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.932659483160296, 9);
  sqcRYGate(q, -0.45267830959865185, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6773102752129139, 9);
  sqcRYGate(q, -0.5784951336100213, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.2414414418953674, 0);
  sqcRYGate(q, 1.5992032450087477, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.906858488617808, 0);
  sqcRYGate(q, 1.598201782637979, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.026537830933917483, 2);
  sqcRYGate(q, 1.2640297316846913, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1402055802905733, 2);
  sqcRYGate(q, 2.0859821958663782, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.955725860594365, 4);
  sqcRYGate(q, 1.6514511493715496, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9695336477396941, 4);
  sqcRYGate(q, -2.02109325266265, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0660791210522937, 6);
  sqcRYGate(q, -2.9351417450365394, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1413182359912057, 6);
  sqcRYGate(q, -3.136604915300098, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5830880766455242, 8);
  sqcRYGate(q, 1.9344135736473642, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.12020428682595659, 8);
  sqcRYGate(q, -2.8661245996060685, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0187415462055167, 10);
  sqcRYGate(q, 1.504520857641202, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.24987308176892137, 10);
  sqcRYGate(q, 2.3607922876304905, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0811959946026706, 1);
  sqcRYGate(q, 1.8202331332959858, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.126023121572197, 1);
  sqcRYGate(q, -0.6829832293658065, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.469817776550768, 3);
  sqcRYGate(q, -2.340288475811541, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.703674672895591, 3);
  sqcRYGate(q, -2.083722844052067, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5164606091541675, 5);
  sqcRYGate(q, 0.671890527647263, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5696385236509776, 5);
  sqcRYGate(q, 3.1364793409987795, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4777684739116357, 7);
  sqcRYGate(q, -2.653511681203148, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.4355311877093673, 7);
  sqcRYGate(q, -0.3862007656785242, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.005729977862274698, 9);
  sqcRYGate(q, -1.2662631132415583, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.026201919288456384, 9);
  sqcRYGate(q, 0.5533948463380026, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.8445183000394936, 0);
  sqcRYGate(q, 0.13631482760337033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8406705068965716, 0);
  sqcRYGate(q, 0.10084241969425722, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1807762790273832, 2);
  sqcRYGate(q, -2.9377917451024764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7491216847534623, 2);
  sqcRYGate(q, 0.08966916458187547, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.49370694910748103, 4);
  sqcRYGate(q, -1.5639043576320448, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.007591245435148877, 4);
  sqcRYGate(q, -2.5191874310721034, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4442350612584642, 6);
  sqcRYGate(q, 2.087936285150855, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1412696450151443, 6);
  sqcRYGate(q, 3.1411034647419642, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.794600779315365, 8);
  sqcRYGate(q, 3.032220070604285, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.474351891493845, 8);
  sqcRYGate(q, 3.1090924278198075, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.6411432720964368, 10);
  sqcRYGate(q, -0.827121428265384, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.137698949335959, 10);
  sqcRYGate(q, -2.426072752377145, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1359137937463135, 1);
  sqcRYGate(q, -2.8831756376882427, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.843839542217338, 1);
  sqcRYGate(q, 2.5976876199086534, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6462904527530033, 3);
  sqcRYGate(q, -2.041269375877155, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.105884253563092, 3);
  sqcRYGate(q, 0.1264059355903866, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2411973097886284, 5);
  sqcRYGate(q, 2.198063171436677, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.625103412146958, 5);
  sqcRYGate(q, 0.004237939133815113, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8771153416882185, 7);
  sqcRYGate(q, 0.12177021678409261, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.8514174000863064, 7);
  sqcRYGate(q, 1.1580737979359332, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.5921295703210796, 9);
  sqcRYGate(q, 0.5452235060437927, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.43036883777724283, 9);
  sqcRYGate(q, -2.7557245990974186, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.1410161562645875, 0);
  sqcRYGate(q, 1.0395057179164378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5556994658006675, 0);
  sqcRYGate(q, -1.1989399594593022, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8751563366973905, 2);
  sqcRYGate(q, -1.5531908325501331, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7308517756217368, 2);
  sqcRYGate(q, 2.781448700323478, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.779882639156854, 4);
  sqcRYGate(q, 1.6564051745231896, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7513938502497601, 4);
  sqcRYGate(q, 2.582048495607779, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2048912779469059, 6);
  sqcRYGate(q, 2.195426963385882, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.132241268454417, 6);
  sqcRYGate(q, -3.128227985065363, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.895403588732094, 8);
  sqcRYGate(q, 2.7798104253947917, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.1504123179380157, 8);
  sqcRYGate(q, -0.26097577222078167, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.14989901816688744, 10);
  sqcRYGate(q, 0.28735464965353597, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.756363420076025, 10);
  sqcRYGate(q, 1.0916981367071052, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.8318150171085118, 1);
  sqcRYGate(q, -0.04970404929299736, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.034109577374269, 1);
  sqcRYGate(q, -1.4254293350560463, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0685397946774167, 3);
  sqcRYGate(q, 1.6329900877163563, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.269346423079255, 3);
  sqcRYGate(q, 2.8349180350685113, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4169707388178114, 5);
  sqcRYGate(q, 3.074669740324294, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1333591835360384, 5);
  sqcRYGate(q, 0.0009368885941292149, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0756483582241587, 7);
  sqcRYGate(q, -1.4831884019764152, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.2192022256884165, 7);
  sqcRYGate(q, 2.0319745453619986, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.4461525652259508, 9);
  sqcRYGate(q, -2.1622482654513826, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6428704411898227, 9);
  sqcRYGate(q, 0.3870846636374683, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.573790072479871, 0);
  sqcRYGate(q, 1.4869518830372195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.37168378320246465, 0);
  sqcRYGate(q, -2.5690543394674266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.46455752515895826, 2);
  sqcRYGate(q, 0.6026435569170765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.14854026344143545, 2);
  sqcRYGate(q, 1.7458008581491438, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5984138388894928, 4);
  sqcRYGate(q, 2.928242557366896, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0135617874601368, 4);
  sqcRYGate(q, -0.6793344588646759, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.055508262519268214, 6);
  sqcRYGate(q, 2.0118820166447424, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7358371413684024, 6);
  sqcRYGate(q, -2.363252136678649, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2950696749860158, 8);
  sqcRYGate(q, 3.134005741863129, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.17116110776478255, 8);
  sqcRYGate(q, 2.9940208186364843, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.7989509491615414, 10);
  sqcRYGate(q, 2.6985992085459336, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.4856549281434415, 10);
  sqcRYGate(q, 2.924501580557609, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2062724737258512, 1);
  sqcRYGate(q, 1.5089325467954922, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0378738368729514, 1);
  sqcRYGate(q, -0.1400132271312282, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9707787360999687, 3);
  sqcRYGate(q, 0.9323430226213013, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1274974312297932, 3);
  sqcRYGate(q, 0.6111561106609538, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.054847571120453006, 5);
  sqcRYGate(q, -0.12662390117308647, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0012899611118397658, 5);
  sqcRYGate(q, -3.1411676204668453, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.186334522717744, 7);
  sqcRYGate(q, -2.1273609453114677, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.962726503441509, 7);
  sqcRYGate(q, -3.0212785589735307, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0929409210394927, 9);
  sqcRYGate(q, 1.8505061125282598, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.2281082318772345, 9);
  sqcRYGate(q, -0.7939822754966803, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.7892569708910067, 0);
  sqcRYGate(q, -0.9539066369524943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.904268609993426, 0);
  sqcRYGate(q, -0.9841565467363085, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7666069573783731, 2);
  sqcRYGate(q, -3.1274768776159245, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6540020449492872, 2);
  sqcRYGate(q, -0.8336265028372454, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4252895843432019, 4);
  sqcRYGate(q, 1.8850443523436713, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0165693503949376, 4);
  sqcRYGate(q, 2.8293609662741006, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.153240282513727, 6);
  sqcRYGate(q, -1.0394742010017044, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2646132865705466, 6);
  sqcRYGate(q, -1.582872730028635, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9952930700078308, 8);
  sqcRYGate(q, 0.01577544557482495, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1228262348903995, 8);
  sqcRYGate(q, -1.6565927269992629, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.8807603155759773, 10);
  sqcRYGate(q, -0.7246188147753655, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2959985244865346, 10);
  sqcRYGate(q, 0.5315901121098836, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6967510658330703, 1);
  sqcRYGate(q, 2.9947810199070886, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.20267715752582746, 1);
  sqcRYGate(q, -3.097601086288975, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.546368345855712, 3);
  sqcRYGate(q, -1.960041862723421, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.05301638297044686, 3);
  sqcRYGate(q, 2.6177611490703665, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.41329073142260286, 5);
  sqcRYGate(q, 2.84890741213838, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.138644213323897, 5);
  sqcRYGate(q, 0.00024488681544365676, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.613810446879458, 7);
  sqcRYGate(q, -0.7004643297246442, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.2883697031762195, 7);
  sqcRYGate(q, 2.796858663386351, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5945144301683323, 9);
  sqcRYGate(q, 2.4891657506083567, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3902065923954148, 9);
  sqcRYGate(q, -3.1319036410794783, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.076463071854065, 0);
  sqcRYGate(q, 0.8068609244297839, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23353748200288676, 0);
  sqcRYGate(q, -1.6114772049458632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1134798704450155, 2);
  sqcRYGate(q, -0.4484632340416095, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2737566362286383, 2);
  sqcRYGate(q, -1.1539414552951976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1756192189418027, 4);
  sqcRYGate(q, -2.728710568384006, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4759004446273187, 4);
  sqcRYGate(q, 2.0375373298576784, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9598393682660256, 6);
  sqcRYGate(q, -2.645919011915354, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2537715463967798, 6);
  sqcRYGate(q, -2.2391610348204223, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9394586037126057, 8);
  sqcRYGate(q, 2.5450612612523775, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4356142791023565, 8);
  sqcRYGate(q, -1.906917236391898, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.7362914179115181, 10);
  sqcRYGate(q, 0.7806890584935996, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.451759921013733, 10);
  sqcRYGate(q, 0.1353122590808642, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.606126139000989, 1);
  sqcRYGate(q, -1.9070280904291392, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5373134372277066, 1);
  sqcRYGate(q, 2.4673960883618133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4070725916668192, 3);
  sqcRYGate(q, 2.67591565101652, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5748500165817716, 3);
  sqcRYGate(q, 2.322759274707137, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.286885421741436, 5);
  sqcRYGate(q, -2.323134544337058, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7472969141567365, 5);
  sqcRYGate(q, 3.127380120323301, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.285300604744147, 7);
  sqcRYGate(q, 2.690177143030626, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1337695649672828, 7);
  sqcRYGate(q, 3.0829466967698558, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.682873433953026, 9);
  sqcRYGate(q, 2.107366510364206, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.133838377780198, 9);
  sqcRYGate(q, -3.121911802902888, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.1015166485456716, 0);
  sqcRYGate(q, 0.543652102216308, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.506613469715968, 0);
  sqcRYGate(q, 0.16196614653719263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6710962801033338, 2);
  sqcRYGate(q, 1.9354779169099088, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.32920060798601103, 2);
  sqcRYGate(q, -0.07356283488868608, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.123000965264882, 4);
  sqcRYGate(q, 0.2534856332476214, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.012488308557081796, 4);
  sqcRYGate(q, 0.014563352372190466, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4039779057771122, 6);
  sqcRYGate(q, 2.1676151531209253, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.541211363967102, 6);
  sqcRYGate(q, 1.5186501958020802, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4192912503106552, 8);
  sqcRYGate(q, 1.6580947008403575, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6790097153605439, 8);
  sqcRYGate(q, 0.3958689686217962, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.9893229084693234, 10);
  sqcRYGate(q, 1.6201500331419856, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5977417385216324, 10);
  sqcRYGate(q, -0.9582965624068482, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6794676707272256, 1);
  sqcRYGate(q, -2.056241968987198, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.035137983085394, 1);
  sqcRYGate(q, 1.4542149714640438, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3308683620041148, 3);
  sqcRYGate(q, 2.9942531631026066, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.985434556114234, 3);
  sqcRYGate(q, -1.041321269326489, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1352739299242733, 5);
  sqcRYGate(q, -0.5561128127568115, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3987861106469976, 5);
  sqcRYGate(q, 3.130737591660705, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.01685894846535696, 7);
  sqcRYGate(q, -3.041271654138086, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.9217645157905907, 7);
  sqcRYGate(q, 2.9608542972718817, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.6202681702553692, 9);
  sqcRYGate(q, -1.8789254555594808, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0057916691126016, 9);
  sqcRYGate(q, 0.03447332974555601, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0689527366634746, 0);
  sqcRYGate(q, 1.595408434138593, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.00945848718086049, 0);
  sqcRYGate(q, -2.0702735754808996, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.959404426333693, 2);
  sqcRYGate(q, -2.6088104719917813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06347340417312783, 2);
  sqcRYGate(q, 2.013290243601693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.966472621702642, 4);
  sqcRYGate(q, -1.915783605190926, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3275971068660115, 4);
  sqcRYGate(q, -0.07971183256572859, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2364996167954169, 6);
  sqcRYGate(q, 2.3292060415885185, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.30935442186454437, 6);
  sqcRYGate(q, 2.178744994492658, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.540324193061922, 8);
  sqcRYGate(q, -1.7797583480749801, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.0014200700331148397, 8);
  sqcRYGate(q, -0.016642073378562685, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.284212363875532, 10);
  sqcRYGate(q, -0.7388893421012522, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6390829784146278, 10);
  sqcRYGate(q, -1.4901485386253812, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4874767319934215, 1);
  sqcRYGate(q, -1.3985851931929156, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4159865059495669, 1);
  sqcRYGate(q, -2.357030139411469, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6784101474949025, 3);
  sqcRYGate(q, -2.1219292233314344, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0006851786388821332, 3);
  sqcRYGate(q, -0.019332520711649988, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.650733619093459, 5);
  sqcRYGate(q, -0.9556941308734848, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0570901929855494, 5);
  sqcRYGate(q, 0.0053736540609712335, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6788181409236453, 7);
  sqcRYGate(q, 0.30632430887674733, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.3085775601436636, 7);
  sqcRYGate(q, -0.04679138842960739, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.1192509362800616, 9);
  sqcRYGate(q, -0.8239830073043848, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.3423996102802342, 9);
  sqcRYGate(q, -3.138117266124711, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.782713719988818, 0);
  sqcRYGate(q, 0.7606153230829733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5954841210386106, 0);
  sqcRYGate(q, 1.690788631316098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5778884376819755, 2);
  sqcRYGate(q, -0.17707754317541458, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2801745895104223, 2);
  sqcRYGate(q, -0.02857550672272247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8558712538255997, 4);
  sqcRYGate(q, 1.6923323541122868, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3654259955014854, 4);
  sqcRYGate(q, -1.5871449925392538, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6037948735197186, 6);
  sqcRYGate(q, 3.0473816542837713, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0038573023950237, 6);
  sqcRYGate(q, -0.5375320925746071, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.05676190644355917, 8);
  sqcRYGate(q, -2.0099656770502463, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.129709056097783, 8);
  sqcRYGate(q, -1.4306427670082833, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8659590020728868, 10);
  sqcRYGate(q, 0.11528684235729703, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1422528080202632, 10);
  sqcRYGate(q, 0.35139016997163536, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.8717275413402765, 1);
  sqcRYGate(q, 2.322366310740087, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6600355715758712, 1);
  sqcRYGate(q, 0.5795568478486006, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1281735848279024, 3);
  sqcRYGate(q, -0.04849756196083726, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0796967759599876, 3);
  sqcRYGate(q, -3.0995273204144667, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6120908499915192, 5);
  sqcRYGate(q, 2.3213036518924928, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6225128007672076, 5);
  sqcRYGate(q, -3.1056229696289868, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8402444823398594, 7);
  sqcRYGate(q, 1.5934421764713997, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.706965565432684, 7);
  sqcRYGate(q, -1.6412920164300466, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.26453547930491317, 9);
  sqcRYGate(q, -0.2453950541903301, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2268187610549335, 9);
  sqcRYGate(q, 1.422479934197545, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.42941730471082, 0);
  sqcRYGate(q, -0.4256273529229261, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.888084098404888, 0);
  sqcRYGate(q, -1.8723735641517774, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5024333478494567, 2);
  sqcRYGate(q, -2.513680510473743, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9449732168878766, 2);
  sqcRYGate(q, -0.19832692306533325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1650275837287838, 4);
  sqcRYGate(q, 0.6960586593589584, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.007864395771768087, 4);
  sqcRYGate(q, -0.04871422093848476, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.419495604989809, 6);
  sqcRYGate(q, -0.8177886216564989, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.044417294227032, 6);
  sqcRYGate(q, -0.08380193031132775, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.993443584647529, 8);
  sqcRYGate(q, 1.878236809621554, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1382371641903712, 8);
  sqcRYGate(q, -0.0002636494668435764, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6455153625026693, 10);
  sqcRYGate(q, 0.09278043940216829, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.29761284736048765, 10);
  sqcRYGate(q, 2.0544520447598367, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.41966892139729683, 1);
  sqcRYGate(q, -1.5913771066496056, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.180834197099843, 1);
  sqcRYGate(q, -0.6693170842427091, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3542983793853676, 3);
  sqcRYGate(q, 2.5760726809645083, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.02080028569267109, 3);
  sqcRYGate(q, 0.04982935179788495, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.20556808162647822, 5);
  sqcRYGate(q, -2.997470820507145, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6520634819474767, 5);
  sqcRYGate(q, 3.135980967442775, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.366198452829421, 7);
  sqcRYGate(q, -1.4142349783645536, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.013044808706395907, 7);
  sqcRYGate(q, -1.5422289737311277, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.629898451036964, 9);
  sqcRYGate(q, -0.518608126038961, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6903448082019004, 9);
  sqcRYGate(q, -1.2677048546653094, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.8710438715289621, 0);
  sqcRYGate(q, -0.7583164135503632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09242941228677914, 0);
  sqcRYGate(q, 1.1083678255587037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9171944670839961, 2);
  sqcRYGate(q, -1.8639975052683893, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7457111976630695, 2);
  sqcRYGate(q, -2.476917085611728, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7237978222061567, 4);
  sqcRYGate(q, 1.7122595392455655, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.630609961463154, 4);
  sqcRYGate(q, 2.7710339750305644, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.10186682037907424, 6);
  sqcRYGate(q, 2.0446837865635494, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9508486169752004, 6);
  sqcRYGate(q, -1.314475302025897, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.021418398472099476, 8);
  sqcRYGate(q, -1.1941293119069418, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.8775154061419275, 8);
  sqcRYGate(q, -0.014260796493369499, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3281089168619216, 10);
  sqcRYGate(q, -1.5757903163469356, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3252010303672652, 10);
  sqcRYGate(q, -1.5355272225020133, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.239405805163738, 1);
  sqcRYGate(q, -3.091173555946952, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.232158469098751, 1);
  sqcRYGate(q, 2.7719023739946986, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5088640422953112, 3);
  sqcRYGate(q, -1.9706176718743755, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.137699227132921, 3);
  sqcRYGate(q, -0.010921691477555555, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7028276804828133, 5);
  sqcRYGate(q, -0.22110619846860047, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1332712136556724, 5);
  sqcRYGate(q, 0.02636244339774141, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0401389677954627, 7);
  sqcRYGate(q, 1.3564582121144149, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1364153649928683, 7);
  sqcRYGate(q, -0.026257078619328134, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5850209485728879, 9);
  sqcRYGate(q, 1.842675917818818, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.120486157505766, 9);
  sqcRYGate(q, -0.8262129011521766, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.6600256202037403, 0);
  sqcRYGate(q, -0.23461300996487186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.019206969915715, 0);
  sqcRYGate(q, 0.47381754006959076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2508561841110835, 2);
  sqcRYGate(q, -1.6374002865593136, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.085375835603942, 2);
  sqcRYGate(q, 1.4571226318201402, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.189565578894106, 4);
  sqcRYGate(q, -1.738033228985004, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.599790521550364, 4);
  sqcRYGate(q, 2.9978465992295225, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5392620423285814, 6);
  sqcRYGate(q, 2.9501697543575265, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7642214040646345, 6);
  sqcRYGate(q, -0.9537504408874157, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.097261911469852, 8);
  sqcRYGate(q, 1.4846461648694493, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8910818401170061, 8);
  sqcRYGate(q, 0.436913710900682, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.03960319794057614, 10);
  sqcRYGate(q, 0.3879028986094326, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.052285821100842, 10);
  sqcRYGate(q, -1.4437794865138132, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2175804708470814, 1);
  sqcRYGate(q, 1.4512079099159267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1773815154677614, 1);
  sqcRYGate(q, 1.0411468582384102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4369314013494145, 3);
  sqcRYGate(q, -2.007088351299516, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9387171247796733, 3);
  sqcRYGate(q, -3.049895298414524, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.283180331808607, 5);
  sqcRYGate(q, 1.399402039253503, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2888465286104556, 5);
  sqcRYGate(q, -0.15996767532586859, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.173177567695478, 7);
  sqcRYGate(q, 2.199379663531186, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.131709620482442, 7);
  sqcRYGate(q, -0.0026090231359221505, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4685400458919284, 9);
  sqcRYGate(q, -2.948210602526699, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.7863505338605571, 9);
  sqcRYGate(q, -3.034611012018361, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.6968928701733765, 0);
  sqcRYGate(q, -2.0709342291299295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.135938884313538, 0);
  sqcRYGate(q, 2.029704587605253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9735116893826685, 2);
  sqcRYGate(q, 3.125309434744311, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.804523983469541, 2);
  sqcRYGate(q, -0.04415249900157914, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.085841138475745, 4);
  sqcRYGate(q, -0.857296966125582, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0122798360078625, 4);
  sqcRYGate(q, 3.1116031640426014, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5812245627234365, 6);
  sqcRYGate(q, -1.8507385051546983, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.614238046849488, 6);
  sqcRYGate(q, 0.24334373383024746, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2282913354687828, 8);
  sqcRYGate(q, 2.4088101716405914, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.1897775404093234, 8);
  sqcRYGate(q, 1.7713773266633845, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0704589287253308, 10);
  sqcRYGate(q, -0.35500233912410817, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.09278339255001988, 10);
  sqcRYGate(q, -1.6074380337278626, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.1549140260066926, 1);
  sqcRYGate(q, 2.1915900638960775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.03370210023388033, 1);
  sqcRYGate(q, 0.8335287822748536, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4678368119474663, 3);
  sqcRYGate(q, 1.2752118390139335, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.94020867280411, 3);
  sqcRYGate(q, -0.011892336985461325, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9239459947460397, 5);
  sqcRYGate(q, 1.349210752611615, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2186564949070948, 5);
  sqcRYGate(q, -0.15505698064458256, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3843667728406728, 7);
  sqcRYGate(q, 3.0986380886664415, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0870649952626503, 7);
  sqcRYGate(q, -3.132494440714055, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.15614004584099367, 9);
  sqcRYGate(q, 0.17690061049007433, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.0637498542014756, 9);
  sqcRYGate(q, 0.0003229074285276988, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.4162295218322033, 0);
  sqcRYGate(q, -0.7862169827012009, 1);
  sqcRYGate(q, 0.026779561404754862, 2);
  sqcRYGate(q, -1.961862086124528, 3);
  sqcRYGate(q, -2.572249387171158, 4);
  sqcRYGate(q, -0.4633192077831465, 5);
  sqcRYGate(q, 1.8388059280316345, 6);
  sqcRYGate(q, -1.4310269156629456, 7);
  sqcRYGate(q, -1.4041520262700382, 8);
  sqcRYGate(q, 2.949721834072351, 9);
  sqcRYGate(q, -2.2626722705741695, 10);
  sqcRYGate(q, 1.5900903381524492, 11);

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
