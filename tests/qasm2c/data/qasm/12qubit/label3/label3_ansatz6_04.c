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

  sqcRYGate(q, 0.6547597407074273, 0);
  sqcRYGate(q, -0.7357661871488967, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6052470761463367, 0);
  sqcRYGate(q, 0.5477786831117868, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5162398246473232, 1);
  sqcRYGate(q, -1.3307030072974477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0477908779190415, 1);
  sqcRYGate(q, -1.3447241879663254, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5769135750894643, 2);
  sqcRYGate(q, -1.2821729578401249, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.658430676861491, 2);
  sqcRYGate(q, -2.06859596768689, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.858796009543297, 3);
  sqcRYGate(q, 1.0502067562781623, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.104460084638278, 3);
  sqcRYGate(q, -0.0032740007968552073, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.576306639764864, 4);
  sqcRYGate(q, -0.2246521726778763, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2203314345093363, 4);
  sqcRYGate(q, -1.5679363165544222, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1783729736778126, 5);
  sqcRYGate(q, -0.33341110400088264, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7115485477479175, 5);
  sqcRYGate(q, 1.5694766150119623, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0768373120439103, 6);
  sqcRYGate(q, -0.12518407044310395, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.683503824582373, 6);
  sqcRYGate(q, 1.5341916191064238, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3462352656911367, 7);
  sqcRYGate(q, 2.1499584994229, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6613700994741096, 7);
  sqcRYGate(q, 0.5732665356146692, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.319785865184409, 8);
  sqcRYGate(q, -1.5767406515168911, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.3673227676268765, 8);
  sqcRYGate(q, 3.1402027724259045, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.9750635458074939, 9);
  sqcRYGate(q, -1.302113901669186, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.0366326628205913, 9);
  sqcRYGate(q, 2.633856702172813, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.3531899219800168, 10);
  sqcRYGate(q, -2.4953378273860096, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.3202624128656262, 10);
  sqcRYGate(q, -1.2615930680825798, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.9606742639559422, 0);
  sqcRYGate(q, 2.849645680966149, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5906369347991314, 0);
  sqcRYGate(q, 0.11039934549306171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7196784720981, 1);
  sqcRYGate(q, -1.4672532895271673, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.91807612748432, 1);
  sqcRYGate(q, 0.18215735617986598, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5098413028055595, 2);
  sqcRYGate(q, 1.0226601371677004, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.579043895525088, 2);
  sqcRYGate(q, -2.1032723571750322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.09692624690342, 3);
  sqcRYGate(q, 2.2159245563800396, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6254424665066864, 3);
  sqcRYGate(q, 1.62146905729956, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1033492426855185, 4);
  sqcRYGate(q, 1.4546596074195994, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5235737232106181, 4);
  sqcRYGate(q, 0.36193456243690353, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5219463072833925, 5);
  sqcRYGate(q, -1.2015429431751823, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5494294039728855, 5);
  sqcRYGate(q, -2.5462997426847287, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2731167486311854, 6);
  sqcRYGate(q, 0.21210194358961565, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9357485893992314, 6);
  sqcRYGate(q, -0.010904738052165009, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3062416230877807, 7);
  sqcRYGate(q, 2.1468243799488365, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.5360251567684355, 7);
  sqcRYGate(q, -1.2988333662470033, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.8775244611735369, 8);
  sqcRYGate(q, -0.6582632421256355, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.9466827856555105, 8);
  sqcRYGate(q, -3.0943986191775315, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5186977966956086, 9);
  sqcRYGate(q, -0.4937700953438098, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1238094026355143, 9);
  sqcRYGate(q, -3.136327883706895, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.658921478250786, 10);
  sqcRYGate(q, 0.9548950749373085, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.084058939422781, 10);
  sqcRYGate(q, -1.1062838046802517, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7683053033198481, 0);
  sqcRYGate(q, 2.1316265007058046, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0809243581866668, 0);
  sqcRYGate(q, -3.1375436633462757, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21602541789955865, 1);
  sqcRYGate(q, 0.5932216783611098, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5595275228981322, 1);
  sqcRYGate(q, 2.612751271907606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8457496380541176, 2);
  sqcRYGate(q, 3.094774638906899, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5681503641246284, 2);
  sqcRYGate(q, 3.1415284566338375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.588480368010272, 3);
  sqcRYGate(q, 0.05725910222159252, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5841161849893894, 3);
  sqcRYGate(q, -1.5309680198959659, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.602528779783846, 4);
  sqcRYGate(q, -1.6353091636380885, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5619948658384428, 4);
  sqcRYGate(q, -2.893524692024561, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6243700182427254, 5);
  sqcRYGate(q, -0.7033032189046228, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1339109389918196, 5);
  sqcRYGate(q, 0.17304066401752216, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5076029248299487, 6);
  sqcRYGate(q, -1.9577988249951865, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.136733582259651, 6);
  sqcRYGate(q, 2.6701097398898934, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5666726049394056, 7);
  sqcRYGate(q, 1.5300674204078244, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1289647726196006, 7);
  sqcRYGate(q, -2.017915101545318, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.7881358400089455, 8);
  sqcRYGate(q, 2.716537674031709, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.8345785899183373, 8);
  sqcRYGate(q, 1.5844354790194022, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3774063846925424, 9);
  sqcRYGate(q, -1.5234730084344976, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.328913862122126, 9);
  sqcRYGate(q, 1.7609932375483612, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.968954493732103, 10);
  sqcRYGate(q, 0.11410990264951469, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.7110914961700745, 10);
  sqcRYGate(q, 1.5988912189418603, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6843643473733314, 0);
  sqcRYGate(q, 2.889044576804168, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9019434706921973, 0);
  sqcRYGate(q, 0.004604534605671343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04927658471633478, 1);
  sqcRYGate(q, -0.3104899419232394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.130526643685423, 1);
  sqcRYGate(q, 0.015053027522589425, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0232029697866574, 2);
  sqcRYGate(q, -1.3716013820202353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.31778143326166486, 2);
  sqcRYGate(q, 1.570814328766826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4434877195601186, 3);
  sqcRYGate(q, 0.1955341297384274, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6911039547083435, 3);
  sqcRYGate(q, -1.5795427229259449, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8584811480735492, 4);
  sqcRYGate(q, -1.5528031978183414, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5404760858073372, 4);
  sqcRYGate(q, -1.596670776020546, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.02816211342711287, 5);
  sqcRYGate(q, -1.0551543863020723, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.01550151586684747, 5);
  sqcRYGate(q, -1.589850444868742, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0051968940346594, 6);
  sqcRYGate(q, 3.0945971924934166, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5706504064212288, 6);
  sqcRYGate(q, -1.6487440408594092, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6112388497047148, 7);
  sqcRYGate(q, 2.415236578807128, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.0216903040981045, 7);
  sqcRYGate(q, -3.0696128879596074, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.8187230651804027, 8);
  sqcRYGate(q, 0.12087576066878458, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.7685264970679118, 8);
  sqcRYGate(q, -3.103307886202713, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4959256137441332, 9);
  sqcRYGate(q, 1.557197952329715, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.1398630273861503, 9);
  sqcRYGate(q, 1.5325537792895325, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6928987706854126, 10);
  sqcRYGate(q, 2.71174471592289, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5646209507557003, 10);
  sqcRYGate(q, -0.7912641271162407, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6758796799956048, 0);
  sqcRYGate(q, 2.0518027627660187, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6498850856387082, 0);
  sqcRYGate(q, -0.0031747405258088918, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.521471837339446, 1);
  sqcRYGate(q, 0.023824951390529175, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4970891586212054, 1);
  sqcRYGate(q, -1.576476660829513, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5194961509934979, 2);
  sqcRYGate(q, 1.5854747079004252, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09731468215041694, 2);
  sqcRYGate(q, 0.7684326575012362, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.617736926832844, 3);
  sqcRYGate(q, 0.5816344038187578, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0015246271935863, 3);
  sqcRYGate(q, -3.0553495512372333, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5130711429059822, 4);
  sqcRYGate(q, 2.542821637716262, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0030818851206403657, 4);
  sqcRYGate(q, 3.139574308622715, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.215964124094695, 5);
  sqcRYGate(q, 2.977714270070583, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4620551731689195, 5);
  sqcRYGate(q, -1.5588457885313796, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5248868381534733, 6);
  sqcRYGate(q, 0.9973429762483647, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0570174496907865, 6);
  sqcRYGate(q, 0.06317156710982808, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9864353801859338, 7);
  sqcRYGate(q, -0.1614601431238908, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.8597152752079493, 7);
  sqcRYGate(q, -1.5136729085653906, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6889608239528286, 8);
  sqcRYGate(q, -1.559442856706366, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.4178824550563007, 8);
  sqcRYGate(q, 2.436413235958323, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.135355341352114, 9);
  sqcRYGate(q, 0.09255537770452991, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5020178666819488, 9);
  sqcRYGate(q, 0.43929453076503844, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.3925549870544567, 10);
  sqcRYGate(q, -1.5609170096131555, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6985430691392671, 10);
  sqcRYGate(q, -0.09749702646948322, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.451978714290782, 0);
  sqcRYGate(q, -1.489367396339399, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0732697464268526, 0);
  sqcRYGate(q, -1.2003034503599825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3535772521939613, 1);
  sqcRYGate(q, 1.632469013627685, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7255495974199793, 1);
  sqcRYGate(q, -3.1032955017302806, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.03536336135168572, 2);
  sqcRYGate(q, 1.0174000469453235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.003173206087625502, 2);
  sqcRYGate(q, -1.5502819820319824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.027476160281587166, 3);
  sqcRYGate(q, -0.34250016658521876, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.012679876957254, 3);
  sqcRYGate(q, -3.1320040468937873, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4907960211005165, 4);
  sqcRYGate(q, -3.026972180713835, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.06505491650064342, 4);
  sqcRYGate(q, 0.010892556685170831, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7434616489154457, 5);
  sqcRYGate(q, 1.3122596524758934, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8931744049277166, 5);
  sqcRYGate(q, 0.008723304067314253, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3820145213931174, 6);
  sqcRYGate(q, -1.5499705578654357, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.132160177941283, 6);
  sqcRYGate(q, -3.137583280247201, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5075880933136663, 7);
  sqcRYGate(q, 1.193971499922541, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.21996416491047174, 7);
  sqcRYGate(q, 3.1086845894047292, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.275665940620815, 8);
  sqcRYGate(q, -0.09399871649835742, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.088098597656336, 8);
  sqcRYGate(q, 0.7183258663934757, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0323846539273274, 9);
  sqcRYGate(q, 0.18784098673890645, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5652430657364444, 9);
  sqcRYGate(q, -0.2981118389422676, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.086214453243815, 10);
  sqcRYGate(q, 0.001758471615437962, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5368406957503196, 10);
  sqcRYGate(q, 1.5962978202886542, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.09715960527459074, 0);
  sqcRYGate(q, -1.9016453935143842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5750632602433345, 0);
  sqcRYGate(q, -1.2559604940295428, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.130517937918339, 1);
  sqcRYGate(q, 1.945291533989801, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.137622577859726, 1);
  sqcRYGate(q, -1.5722439665097694, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.604777054099431, 2);
  sqcRYGate(q, 2.46673977266629, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1365763126079917, 2);
  sqcRYGate(q, 1.5763452389425883, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5606844514128018, 3);
  sqcRYGate(q, -0.13444187521002332, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5295430052845, 3);
  sqcRYGate(q, 1.565310968283027, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.537178421943211, 4);
  sqcRYGate(q, -1.3017084015609983, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5177450912280959, 4);
  sqcRYGate(q, -0.008782333021122694, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5714454264169844, 5);
  sqcRYGate(q, 2.2503082770315572, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6098092315700523, 5);
  sqcRYGate(q, -1.6077637325531455, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7115319197336936, 6);
  sqcRYGate(q, 2.173149188007235, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5702446544943605, 6);
  sqcRYGate(q, 0.007884726725928992, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.140547811621383, 7);
  sqcRYGate(q, 3.1250339350404617, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5295773542876594, 7);
  sqcRYGate(q, -1.5713995514986876, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1131117308875966, 8);
  sqcRYGate(q, 0.016136021440109616, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5712262774458061, 8);
  sqcRYGate(q, -0.004061111846088039, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.07871494918902044, 9);
  sqcRYGate(q, 3.135475990192133, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5709710070954976, 9);
  sqcRYGate(q, 1.5730649001633639, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 9.666016565496693e-05, 10);
  sqcRYGate(q, -2.875263981876475, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.00014429575018100763, 10);
  sqcRYGate(q, -1.57467224052309, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3898643960726016, 0);
  sqcRYGate(q, -0.723669380782746, 1);
  sqcRYGate(q, 2.4069996518377295, 2);
  sqcRYGate(q, 0.8448507127926046, 3);
  sqcRYGate(q, -0.8496973046656047, 4);
  sqcRYGate(q, -0.7615106779771271, 5);
  sqcRYGate(q, 0.6492763064647376, 6);
  sqcRYGate(q, 0.858317959470482, 7);
  sqcRYGate(q, 0.7664434857813542, 8);
  sqcRYGate(q, 0.833540513541478, 9);
  sqcRYGate(q, 2.3654854908466847, 10);
  sqcRYGate(q, 0.32159915998821464, 11);

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
