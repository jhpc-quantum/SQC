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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 2.6636639448983113, 0);
  sqcRYGate(q, 2.1714599334860694, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5511454306018297, 0);
  sqcRYGate(q, 1.205568555464156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.34063179603241966, 1);
  sqcRYGate(q, -1.2238401192403854, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.793374817660632, 1);
  sqcRYGate(q, -0.5982470813834326, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.788448244833585, 2);
  sqcRYGate(q, 0.2962880949019101, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4722190884850113, 2);
  sqcRYGate(q, 2.0972624969692433, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13575295148854136, 3);
  sqcRYGate(q, -0.6006245204115563, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.819775526875941, 3);
  sqcRYGate(q, -1.2391489789435972, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.23270222024101272, 4);
  sqcRYGate(q, 0.9040262890574684, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.066844646988862, 4);
  sqcRYGate(q, 1.9068174661169088, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.41091379265632355, 5);
  sqcRYGate(q, 2.6802750300898284, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.030840763481899, 5);
  sqcRYGate(q, -1.5403724417373255, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1226484214798695, 6);
  sqcRYGate(q, -1.12246436091303, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5797108475926961, 6);
  sqcRYGate(q, 1.5489224587445543, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.378984683820875, 7);
  sqcRYGate(q, 1.5744892434851634, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.2770746692775283, 7);
  sqcRYGate(q, -0.8911679999316009, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.565347419694918, 8);
  sqcRYGate(q, -1.246160175460651, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1388334077278497, 8);
  sqcRYGate(q, 3.0238320522920747, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4668974550704412, 9);
  sqcRYGate(q, 0.6032808607232584, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.2385733264056418, 9);
  sqcRYGate(q, -1.2702949324852655, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.474278065670104, 10);
  sqcRYGate(q, 2.100475280058257, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.410147159145109, 10);
  sqcRYGate(q, -1.5937682457510502, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2890650769825447, 11);
  sqcRYGate(q, 1.4797546060730875, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.7639203235176149, 11);
  sqcRYGate(q, 1.7596863855437934, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.0057557551343927985, 12);
  sqcRYGate(q, -3.1174168873884778, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.33691398919618426, 12);
  sqcRYGate(q, -1.5398068201797068, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.943279811709023, 13);
  sqcRYGate(q, 1.6172157763302188, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.726671258675847, 13);
  sqcRYGate(q, -0.025609187122728194, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.3786355560547596, 14);
  sqcRYGate(q, -2.464774478537358, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.0911514135220606, 14);
  sqcRYGate(q, -2.3673850939702135, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.8100173925970182, 0);
  sqcRYGate(q, -1.8562542529257344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.20498644798382148, 0);
  sqcRYGate(q, 2.0732079297487864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9567324597083229, 1);
  sqcRYGate(q, -1.0644486794378007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8167264358427639, 1);
  sqcRYGate(q, 0.5451565193390682, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7777620006204122, 2);
  sqcRYGate(q, 0.9742824676943383, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5376822377263535, 2);
  sqcRYGate(q, -2.497296502631638, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4861736580241187, 3);
  sqcRYGate(q, 1.6526734399376188, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5199977912283098, 3);
  sqcRYGate(q, 0.38321200096548397, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.993828137915366, 4);
  sqcRYGate(q, -0.004116155482960515, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5331898039868512, 4);
  sqcRYGate(q, -1.6412752230786911, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9371218200887537, 5);
  sqcRYGate(q, -0.6879246948716569, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.141060377674617, 5);
  sqcRYGate(q, -3.072128172899157, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8686348544656023, 6);
  sqcRYGate(q, -1.545632623394571, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8338445614247791, 6);
  sqcRYGate(q, -3.0915852944221043, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5658366059142113, 7);
  sqcRYGate(q, 1.5429907149774564, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.8378364942674545, 7);
  sqcRYGate(q, 2.6818285309672105, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.974917623169811, 8);
  sqcRYGate(q, 3.029521654888234, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.981763184414393, 8);
  sqcRYGate(q, 0.7182910089829083, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.56212900996593, 9);
  sqcRYGate(q, 1.566961836037597, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.38244798357865767, 9);
  sqcRYGate(q, -1.6837759578628981, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5512961915755614, 10);
  sqcRYGate(q, -1.5349043642350988, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.14403220201312728, 10);
  sqcRYGate(q, -1.6303287566641205, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5477317938984665, 11);
  sqcRYGate(q, -2.379591784083019, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.887598122876697, 11);
  sqcRYGate(q, 1.4654460324530207, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.7218134417487527, 12);
  sqcRYGate(q, -1.1709449714733218, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.3838566677779507, 12);
  sqcRYGate(q, -0.6059713765641904, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.7672633334164303, 13);
  sqcRYGate(q, -0.5687579307905944, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.131628382340562, 13);
  sqcRYGate(q, 0.1392496258122003, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5589084460706655, 14);
  sqcRYGate(q, 2.4491686482533317, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.8486677012651003, 14);
  sqcRYGate(q, 2.599973009747181, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.0959468276450988, 0);
  sqcRYGate(q, 1.7293415427210643, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5860174997944245, 0);
  sqcRYGate(q, -1.8103133654038466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0378136814236667, 1);
  sqcRYGate(q, 2.7072051210699826, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3721393123529867, 1);
  sqcRYGate(q, -0.7920382672791256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1169457204460276, 2);
  sqcRYGate(q, 1.223584251180597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.246294672171759, 2);
  sqcRYGate(q, -0.1460414454149417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6771896334859766, 3);
  sqcRYGate(q, -3.0865074112841784, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2993602178682708, 3);
  sqcRYGate(q, -0.029134077249120694, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3862204656896102, 4);
  sqcRYGate(q, -0.11660161572697891, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5575105406032836, 4);
  sqcRYGate(q, -2.5517759506519235, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.007567838735223376, 5);
  sqcRYGate(q, -1.7333184484363668, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.017444562021954, 5);
  sqcRYGate(q, -1.4717958398495297, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.550258419073842, 6);
  sqcRYGate(q, 1.5895436936471499, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6396624600795775, 6);
  sqcRYGate(q, 1.5406563582375847, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2601029266916877, 7);
  sqcRYGate(q, 1.5157008648791015, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4972428155277662, 7);
  sqcRYGate(q, -3.132423691385954, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.010087462496904287, 8);
  sqcRYGate(q, -0.3177271044117198, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1352387941536612, 8);
  sqcRYGate(q, 1.6367379476410235, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6740992804463275, 9);
  sqcRYGate(q, -1.564314143536163, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.19660876667888424, 9);
  sqcRYGate(q, 0.008198063325008498, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.07674750461102064, 10);
  sqcRYGate(q, -1.57590072216007, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9144870908436515, 10);
  sqcRYGate(q, -2.7692889382841996, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6703749088481956, 11);
  sqcRYGate(q, 1.5943888673262867, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6853174717917812, 11);
  sqcRYGate(q, -1.1986120093131314, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.72349635190505, 12);
  sqcRYGate(q, -1.2935466837967038, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.7623151513764452, 12);
  sqcRYGate(q, 0.09725211625300023, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.873969657758314, 13);
  sqcRYGate(q, -2.565983790364241, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.05964038186874113, 13);
  sqcRYGate(q, 1.6349145658730388, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.9479148525649164, 14);
  sqcRYGate(q, -2.0775414135304255, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.1693903363208635, 14);
  sqcRYGate(q, -0.15623851925123855, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.335260181940558, 0);
  sqcRYGate(q, -0.9308804874740758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.088345375797549, 0);
  sqcRYGate(q, 2.931908833948965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.837787179637056, 1);
  sqcRYGate(q, -0.17543341659598433, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2367506184641526, 1);
  sqcRYGate(q, -1.2999872683956202, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.13570275352901662, 2);
  sqcRYGate(q, 0.6186997763146297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3646767015000689, 2);
  sqcRYGate(q, -0.5043065007133354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0153939959474516, 3);
  sqcRYGate(q, -0.4951041640192564, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.27391948901209595, 3);
  sqcRYGate(q, 1.5735956509385791, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.31533167280684543, 4);
  sqcRYGate(q, -3.0293845160133603, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.05608467799430775, 4);
  sqcRYGate(q, -0.6818001094014221, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6971353284665067, 5);
  sqcRYGate(q, 3.066285088033958, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7048609747806996, 5);
  sqcRYGate(q, -1.9303315008788635, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6443762067725072, 6);
  sqcRYGate(q, -0.9231907065654533, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1394218143193164, 6);
  sqcRYGate(q, -1.5697393911595645, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.59874980563652, 7);
  sqcRYGate(q, 1.5546921591909229, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.391606315014651, 7);
  sqcRYGate(q, 0.08355517642876986, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.140699430456274, 8);
  sqcRYGate(q, 1.2847209296791138, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5708305559375564, 8);
  sqcRYGate(q, -1.449861897760942, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.2194659606237828, 9);
  sqcRYGate(q, 0.09451938315897035, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.601303620644446, 9);
  sqcRYGate(q, -3.1209529621003496, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4088140194570142, 10);
  sqcRYGate(q, 2.1523191367907564, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.04545870532219176, 10);
  sqcRYGate(q, 0.00972903299241157, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8367634379226618, 11);
  sqcRYGate(q, -0.6637026429408337, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.092783622220189, 11);
  sqcRYGate(q, 0.4868492848920649, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.2475572423219625, 12);
  sqcRYGate(q, -2.0189092992990005, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.034098457312018535, 12);
  sqcRYGate(q, -3.135118558100152, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.4959349556673595, 13);
  sqcRYGate(q, 2.796096220917291, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.120229957124079, 13);
  sqcRYGate(q, -0.20049513006632247, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.4531860331470496, 14);
  sqcRYGate(q, 1.706914868213753, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.9186440930948183, 14);
  sqcRYGate(q, 1.5686601581692434, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.91938114485139, 0);
  sqcRYGate(q, 1.933121310869307, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5940104257885976, 0);
  sqcRYGate(q, 2.718422793386899, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15559319123305748, 1);
  sqcRYGate(q, 2.898202979100991, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2014143611591654, 1);
  sqcRYGate(q, -0.8729702263330864, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9647158240700159, 2);
  sqcRYGate(q, -1.6092165021672404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.31373990173907895, 2);
  sqcRYGate(q, 3.134302357070372, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.026414848198037, 3);
  sqcRYGate(q, 1.5771391749353638, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7155084550023183, 3);
  sqcRYGate(q, 0.0037518437022753476, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5581229915365833, 4);
  sqcRYGate(q, -2.957260831340391, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.015330785758026268, 4);
  sqcRYGate(q, -1.2647109811517279, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3740908348314353, 5);
  sqcRYGate(q, 1.6197199129852744, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.25182370908799784, 5);
  sqcRYGate(q, -2.211450684156179, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0806187792410005, 6);
  sqcRYGate(q, 2.3074871650090505, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.586737494882656, 6);
  sqcRYGate(q, 1.5412484453370539, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1346754797587675, 7);
  sqcRYGate(q, -1.208315268101157, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.002646118836611126, 7);
  sqcRYGate(q, -1.6059379618512886, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.1549247601478023, 8);
  sqcRYGate(q, -0.3135643506624932, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5478159058177985, 8);
  sqcRYGate(q, 2.047204808853836, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.767644711763449, 9);
  sqcRYGate(q, 1.7886463214631556, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.007216646045032, 9);
  sqcRYGate(q, 1.1435177000566252, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.076600025403972, 10);
  sqcRYGate(q, -1.420288395656637, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6107086237817985, 10);
  sqcRYGate(q, 0.3058320794966116, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.4472939515008924, 11);
  sqcRYGate(q, -1.2597122397943752, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5740720900419476, 11);
  sqcRYGate(q, 3.1370531021954564, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.0548009009885164, 12);
  sqcRYGate(q, 0.7924727132254014, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.4832735038121134, 12);
  sqcRYGate(q, -3.004940505467153, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.10132391103923871, 13);
  sqcRYGate(q, 1.799487449890471, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.93098239629204, 13);
  sqcRYGate(q, -1.5555432451462832, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.7223596797646206, 14);
  sqcRYGate(q, -2.3443819393898164, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.117508107129926, 14);
  sqcRYGate(q, 1.5909485066895397, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.20318500896890246, 0);
  sqcRYGate(q, -2.500144716668789, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.257250365501691, 0);
  sqcRYGate(q, 0.4932275090321241, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9771196918142824, 1);
  sqcRYGate(q, -2.2466232747503616, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.048356229283516, 1);
  sqcRYGate(q, -2.2038221668954954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.138219684915375, 2);
  sqcRYGate(q, -2.7019509303956832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.134708777184228, 2);
  sqcRYGate(q, 1.5582494160684286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.325951143176641, 3);
  sqcRYGate(q, -1.6293167111041318, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4399510292934434, 3);
  sqcRYGate(q, -0.010477446235122543, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6770371951333485, 4);
  sqcRYGate(q, 2.4532412555100396, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.005836530220573621, 4);
  sqcRYGate(q, -3.0894155940791803, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0538404141435835, 5);
  sqcRYGate(q, -0.0023083105010470303, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5530803229319439, 5);
  sqcRYGate(q, -3.1332697407499923, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5753917766039223, 6);
  sqcRYGate(q, 1.5707976126104162, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5403490063496814, 6);
  sqcRYGate(q, -0.18924797645399052, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1278763973886203, 7);
  sqcRYGate(q, 2.558278180498369, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.015588105256703953, 7);
  sqcRYGate(q, -1.666553354052094, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.5298517791832906, 8);
  sqcRYGate(q, 0.4089474010843295, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.0220997179084641, 8);
  sqcRYGate(q, -0.29078061880884476, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.408802314546949, 9);
  sqcRYGate(q, 3.095893039050994, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5741995946070713, 9);
  sqcRYGate(q, 1.9841777460571428, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.0164055531207548, 10);
  sqcRYGate(q, 1.35526259279142, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.080701032416463, 10);
  sqcRYGate(q, -1.6717045668457526, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.41619192946415623, 11);
  sqcRYGate(q, 1.9724038629041152, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.0766363620416928, 11);
  sqcRYGate(q, 1.5771328533838211, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.039200509470497, 12);
  sqcRYGate(q, -1.4925055050919953, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.413494964070278, 12);
  sqcRYGate(q, -0.2735706814583648, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.1183868428191923, 13);
  sqcRYGate(q, -3.0280562707334977, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.7709093380043368, 13);
  sqcRYGate(q, -1.666006186551882, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.2773265545815033, 14);
  sqcRYGate(q, -2.427185264652841, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.2990122627047707, 14);
  sqcRYGate(q, -0.311065090799806, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.6023524986339623, 0);
  sqcRYGate(q, -3.062103667115412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.765449736219839, 0);
  sqcRYGate(q, -0.2675516561859199, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0038968326107653, 1);
  sqcRYGate(q, 1.5589582757994045, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.601575725087521, 1);
  sqcRYGate(q, -1.56477186621827, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6276333645519094, 2);
  sqcRYGate(q, -2.051412925287865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9352405191324995, 2);
  sqcRYGate(q, -0.7650155114131962, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9740802411859937, 3);
  sqcRYGate(q, 1.7386410858486252, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8481761666719916, 3);
  sqcRYGate(q, -3.1397427805053475, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5319887530424259, 4);
  sqcRYGate(q, 1.9511066840182902, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0025394939494121417, 4);
  sqcRYGate(q, -1.602355123879294, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3858649804972724, 5);
  sqcRYGate(q, 1.4740559038770698, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8582891926313785, 5);
  sqcRYGate(q, -1.5692170520943778, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.590476888663814, 6);
  sqcRYGate(q, 2.8977064711240668, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1287999418460783, 6);
  sqcRYGate(q, 0.04207153815709614, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7821663360344822, 7);
  sqcRYGate(q, 2.935565378112903, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.12626929233175, 7);
  sqcRYGate(q, 1.5607583819907755, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9704640358745036, 8);
  sqcRYGate(q, -1.549084060420725, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.563607210934682, 8);
  sqcRYGate(q, -1.5429695689836307, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5388864229084094, 9);
  sqcRYGate(q, -3.0989040734399653, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.56497390820648, 9);
  sqcRYGate(q, 1.6076142597094765, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4532920415393922, 10);
  sqcRYGate(q, 1.0337944460337445, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.010805440503139252, 10);
  sqcRYGate(q, 5.2638106845863354e-05, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5038038691591892, 11);
  sqcRYGate(q, -2.886465980295737, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.1332276183149195, 11);
  sqcRYGate(q, 1.673395368770782, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.881171728898325, 12);
  sqcRYGate(q, 0.010310086095303306, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.02686520460924857, 12);
  sqcRYGate(q, -0.26651243471486286, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5827714389330625, 13);
  sqcRYGate(q, -0.28822324609350397, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.966927127881512, 13);
  sqcRYGate(q, -1.5712100286912714, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.2431531498095862, 14);
  sqcRYGate(q, -2.2806411228140777, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.9639143043306487, 14);
  sqcRYGate(q, 1.5609049555508119, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.304159835008983, 0);
  sqcRYGate(q, -1.5749231099071466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6468040995954951, 0);
  sqcRYGate(q, 1.5699513950974433, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4383142131546762, 1);
  sqcRYGate(q, -2.763067893009356, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.140530032231852, 1);
  sqcRYGate(q, 3.13988227330513, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9775299743932995, 2);
  sqcRYGate(q, 0.9783526223153133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9462857754558285, 2);
  sqcRYGate(q, 2.4537245141209887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3644376703144663, 3);
  sqcRYGate(q, -3.134803455932494, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5612024323753686, 3);
  sqcRYGate(q, -1.5747882038383851, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6026553682430809, 4);
  sqcRYGate(q, -1.6032441693210189, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.009149800831970001, 4);
  sqcRYGate(q, -3.136002273650826, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.04208833887027752, 5);
  sqcRYGate(q, -0.07693532524244637, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5956418180645404, 5);
  sqcRYGate(q, 1.5394686410747198, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.719952520639418, 6);
  sqcRYGate(q, 1.118414555540757, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.002572947858660597, 6);
  sqcRYGate(q, 0.0004936929476013985, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.42225914703853906, 7);
  sqcRYGate(q, 3.117467719520442, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.02612094259101662, 7);
  sqcRYGate(q, 1.089859836724497, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5566618734648712, 8);
  sqcRYGate(q, 3.1407165381127258, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5700113887502676, 8);
  sqcRYGate(q, -1.5652869631663253, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.016323666307992646, 9);
  sqcRYGate(q, -1.6387003214636549, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1330674249629125, 9);
  sqcRYGate(q, 0.0014793887274073825, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.071597206367544, 10);
  sqcRYGate(q, 1.3118407771437592, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1361291817416306, 10);
  sqcRYGate(q, 0.0005300759045603343, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.897355626671961, 11);
  sqcRYGate(q, 3.13821716202212, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5835084378012088, 11);
  sqcRYGate(q, -1.537235766564187, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.8948931666268365, 12);
  sqcRYGate(q, 0.82175440776458, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.1405932629039666, 12);
  sqcRYGate(q, 0.00792289510166471, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.22567642291534362, 13);
  sqcRYGate(q, 0.007336305731375337, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5592337343345664, 13);
  sqcRYGate(q, 2.829578217414143, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.17967516884355217, 14);
  sqcRYGate(q, 1.4093690432415176, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.00629673573522039, 14);
  sqcRYGate(q, -1.4972183447542573, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.6929446707919698, 0);
  sqcRYGate(q, 1.6700590465963607, 1);
  sqcRYGate(q, -2.3479535522812847, 2);
  sqcRYGate(q, 1.7985009574889628, 3);
  sqcRYGate(q, 1.6134651057170548, 4);
  sqcRYGate(q, 0.1207538977627922, 5);
  sqcRYGate(q, -3.086766831898433, 6);
  sqcRYGate(q, 0.007059567905693953, 7);
  sqcRYGate(q, 2.943941609513434, 8);
  sqcRYGate(q, -1.4285142341846833, 9);
  sqcRYGate(q, -1.268833912953867, 10);
  sqcRYGate(q, -0.2950765751811363, 11);
  sqcRYGate(q, 2.727701187588153, 12);
  sqcRYGate(q, 2.3720000085612787, 13);
  sqcRYGate(q, -1.6877231928949905, 14);
  sqcRYGate(q, 0.8771996173035049, 15);

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
