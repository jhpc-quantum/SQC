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

  sqcRYGate(q, -2.492352551966449, 0);
  sqcRZGate(q, -0.5956409116840399, 0);
  sqcRYGate(q, -2.887465469035271, 1);
  sqcRZGate(q, 2.469997714601051, 1);
  sqcRYGate(q, 3.1404785728023854, 2);
  sqcRZGate(q, -1.2785044638508327, 2);
  sqcRYGate(q, 3.1409587936621093, 3);
  sqcRZGate(q, -1.1759090887552182, 3);
  sqcRYGate(q, -1.5736672293245748, 4);
  sqcRZGate(q, -1.7340887061503008, 4);
  sqcRYGate(q, -1.579585570009204, 5);
  sqcRZGate(q, 2.7166888498639445, 5);
  sqcRYGate(q, -3.1415485080385093, 6);
  sqcRZGate(q, -2.4477549232053977, 6);
  sqcRYGate(q, -0.0007630165469345096, 7);
  sqcRZGate(q, -2.727616629518815, 7);
  sqcRYGate(q, 0.007265152421967791, 8);
  sqcRZGate(q, 1.0893629469092543, 8);
  sqcRYGate(q, 0.0018931808857987065, 9);
  sqcRZGate(q, -0.02181779760934344, 9);
  sqcRYGate(q, -1.5645310533861503, 10);
  sqcRZGate(q, 2.70792924643155, 10);
  sqcRYGate(q, 1.5661180624830333, 11);
  sqcRZGate(q, -0.42028639606067586, 11);
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
  sqcRYGate(q, -0.7930684053675652, 0);
  sqcRZGate(q, 0.015497363656262968, 0);
  sqcRYGate(q, -1.7034441940846825, 1);
  sqcRZGate(q, 0.6380267655891637, 1);
  sqcRYGate(q, -0.0039828645266668265, 2);
  sqcRZGate(q, 1.1391193294853155, 2);
  sqcRYGate(q, 0.01344469069577059, 3);
  sqcRZGate(q, -1.686090155878687, 3);
  sqcRYGate(q, -1.8107609331620322, 4);
  sqcRZGate(q, 1.7727637199011397, 4);
  sqcRYGate(q, 2.2194614637167613, 5);
  sqcRZGate(q, -3.044720245975799, 5);
  sqcRYGate(q, -3.0121024069072924, 6);
  sqcRZGate(q, -2.981724180343959, 6);
  sqcRYGate(q, -0.6076650412951483, 7);
  sqcRZGate(q, 1.0733631681490232, 7);
  sqcRYGate(q, 1.5884013142711417, 8);
  sqcRZGate(q, -0.16129530976701145, 8);
  sqcRYGate(q, -1.5836957273755443, 9);
  sqcRZGate(q, -1.3111185546765194, 9);
  sqcRYGate(q, 2.113516582008427, 10);
  sqcRZGate(q, -3.0724841066919963, 10);
  sqcRYGate(q, -0.9022645246740201, 11);
  sqcRZGate(q, -0.35432054208617286, 11);
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
  sqcRYGate(q, -1.7987571239028757, 0);
  sqcRZGate(q, -1.53179804879628, 0);
  sqcRYGate(q, -2.664991598267732, 1);
  sqcRZGate(q, 0.22138935390000913, 1);
  sqcRYGate(q, 0.0020715145116438904, 2);
  sqcRZGate(q, 2.635101060423419, 2);
  sqcRYGate(q, 3.13449405113208, 3);
  sqcRZGate(q, -0.9205465700480023, 3);
  sqcRYGate(q, 3.1396254054441513, 4);
  sqcRZGate(q, 1.3648868573693822, 4);
  sqcRYGate(q, -0.010321092761633921, 5);
  sqcRZGate(q, -1.672961845198099, 5);
  sqcRYGate(q, -0.0008753825309355451, 6);
  sqcRZGate(q, -0.8633523392997965, 6);
  sqcRYGate(q, 3.1409294320715264, 7);
  sqcRZGate(q, -2.9296393242728813, 7);
  sqcRYGate(q, 3.1306775058305853, 8);
  sqcRZGate(q, 1.4449811206453373, 8);
  sqcRYGate(q, -0.03222802396847102, 9);
  sqcRZGate(q, 2.7838139306961027, 9);
  sqcRYGate(q, -0.5233622908051163, 10);
  sqcRZGate(q, -0.1689313250799618, 10);
  sqcRYGate(q, -2.9970110639745413, 11);
  sqcRZGate(q, 1.12350230066503, 11);
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
  sqcRYGate(q, -2.8530245529631992, 0);
  sqcRZGate(q, -1.8245188124128364, 0);
  sqcRYGate(q, 2.8790127185970333, 1);
  sqcRZGate(q, 2.2842190277513423, 1);
  sqcRYGate(q, -1.4552949330106708, 2);
  sqcRZGate(q, 0.4292530863272099, 2);
  sqcRYGate(q, 1.280190160640851, 3);
  sqcRZGate(q, 1.4757127456160495, 3);
  sqcRYGate(q, 0.14834272636792323, 4);
  sqcRZGate(q, -2.2449341004422214, 4);
  sqcRYGate(q, -1.928904410448065, 5);
  sqcRZGate(q, 2.0209625300833007, 5);
  sqcRYGate(q, -0.15258549414712738, 6);
  sqcRZGate(q, -2.5950327956419263, 6);
  sqcRYGate(q, -0.3133615042123603, 7);
  sqcRZGate(q, 2.9202380211168357, 7);
  sqcRYGate(q, -3.078572360487829, 8);
  sqcRZGate(q, 1.6160572444407626, 8);
  sqcRYGate(q, 0.018075262625230515, 9);
  sqcRZGate(q, 1.5811077363049, 9);
  sqcRYGate(q, -0.3313838836289033, 10);
  sqcRZGate(q, 1.7161257707791504, 10);
  sqcRYGate(q, -0.025845953330879076, 11);
  sqcRZGate(q, -0.42355640331791333, 11);
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
  sqcRYGate(q, 2.4778994334916207, 0);
  sqcRZGate(q, -2.3552192282658475, 0);
  sqcRYGate(q, 2.5255909334141124, 1);
  sqcRZGate(q, -2.410070709480166, 1);
  sqcRYGate(q, 2.0172302509579905, 2);
  sqcRZGate(q, -0.5690430785134575, 2);
  sqcRYGate(q, -1.8450592571126947, 3);
  sqcRZGate(q, -1.8361085907347545, 3);
  sqcRYGate(q, 3.1295225447822506, 4);
  sqcRZGate(q, -2.82842472242608, 4);
  sqcRYGate(q, 3.128761595549432, 5);
  sqcRZGate(q, -1.3274116759767878, 5);
  sqcRYGate(q, 1.5693973667580339, 6);
  sqcRZGate(q, -1.8378691087153747, 6);
  sqcRYGate(q, 1.5606143620824355, 7);
  sqcRZGate(q, -2.6333225148602732, 7);
  sqcRYGate(q, -1.140729736225482, 8);
  sqcRZGate(q, -1.6908261425520283, 8);
  sqcRYGate(q, 1.9917910073222251, 9);
  sqcRZGate(q, -0.43115866548944837, 9);
  sqcRYGate(q, -1.7854558179907654, 10);
  sqcRZGate(q, -3.1077304635697516, 10);
  sqcRYGate(q, 1.856473247820591, 11);
  sqcRZGate(q, -2.566382841252666, 11);
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
  sqcRYGate(q, 1.3487028304865563, 0);
  sqcRZGate(q, -2.4215737884844883, 0);
  sqcRYGate(q, -1.8424806528019593, 1);
  sqcRZGate(q, 2.5580533911764247, 1);
  sqcRYGate(q, 2.731583725747743, 2);
  sqcRZGate(q, 0.7860633852580621, 2);
  sqcRYGate(q, 2.8960703401027112, 3);
  sqcRZGate(q, 1.1318140058538269, 3);
  sqcRYGate(q, 3.0617698729402965, 4);
  sqcRZGate(q, -0.3970757473647729, 4);
  sqcRYGate(q, -0.034931950023247005, 5);
  sqcRZGate(q, 2.1675168268516534, 5);
  sqcRYGate(q, 2.62259464980729, 6);
  sqcRZGate(q, 1.2136169279870028, 6);
  sqcRYGate(q, 3.0036909558760767, 7);
  sqcRZGate(q, -0.878261892235372, 7);
  sqcRYGate(q, 1.571926926406879, 8);
  sqcRZGate(q, -2.32295522088934, 8);
  sqcRYGate(q, 0.010322671063460296, 9);
  sqcRZGate(q, -2.1571393256897773, 9);
  sqcRYGate(q, 2.1968343482043124, 10);
  sqcRZGate(q, -2.5286019772142496, 10);
  sqcRYGate(q, 2.1226663386814097, 11);
  sqcRZGate(q, 1.9034372664171233, 11);
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
  sqcRYGate(q, 1.0062289308309804, 0);
  sqcRZGate(q, 0.6311608702378572, 0);
  sqcRYGate(q, -0.9775967880575047, 1);
  sqcRZGate(q, 0.9923462445116514, 1);
  sqcRYGate(q, -1.6538038073301058, 2);
  sqcRZGate(q, 2.6955323618091676, 2);
  sqcRYGate(q, -0.06786020138454447, 3);
  sqcRZGate(q, 1.640350099122974, 3);
  sqcRYGate(q, -0.004089974132989414, 4);
  sqcRZGate(q, -2.4049020459995734, 4);
  sqcRYGate(q, -3.133845716171641, 5);
  sqcRZGate(q, 0.8308901569059115, 5);
  sqcRYGate(q, 0.7769131519037803, 6);
  sqcRZGate(q, -1.1878603067110625, 6);
  sqcRYGate(q, 1.696032762181325, 7);
  sqcRZGate(q, -0.17433758185523457, 7);
  sqcRYGate(q, -3.0713906810175002, 8);
  sqcRZGate(q, 0.43698665717295254, 8);
  sqcRYGate(q, -0.8172668887623793, 9);
  sqcRZGate(q, 2.7840518091933535, 9);
  sqcRYGate(q, -2.9803696713813386, 10);
  sqcRZGate(q, -2.5032340880604766, 10);
  sqcRYGate(q, 0.1361457887551773, 11);
  sqcRZGate(q, -1.962541088051796, 11);
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
  sqcRYGate(q, -2.006875470082118, 0);
  sqcRZGate(q, -2.2628811823876998, 0);
  sqcRYGate(q, -1.8384573741329167, 1);
  sqcRZGate(q, 0.613046296107158, 1);
  sqcRYGate(q, -0.37457141939959937, 2);
  sqcRZGate(q, 2.5847795892660286, 2);
  sqcRYGate(q, 2.759726839210717, 3);
  sqcRZGate(q, 0.02725360157477308, 3);
  sqcRYGate(q, 1.7172804158326307, 4);
  sqcRZGate(q, -0.45731470828634696, 4);
  sqcRYGate(q, -1.4742699642305699, 5);
  sqcRZGate(q, 1.1708608212631413, 5);
  sqcRYGate(q, 3.137214484383077, 6);
  sqcRZGate(q, -2.8141569692911856, 6);
  sqcRYGate(q, 3.1120657847474917, 7);
  sqcRZGate(q, 0.42251748212712315, 7);
  sqcRYGate(q, -0.014178938761619799, 8);
  sqcRZGate(q, -0.0312615919342889, 8);
  sqcRYGate(q, -3.131296235873093, 9);
  sqcRZGate(q, -2.906802910051917, 9);
  sqcRYGate(q, 2.9543554330687205, 10);
  sqcRZGate(q, -0.31227588758664737, 10);
  sqcRYGate(q, -2.9597902286430227, 11);
  sqcRZGate(q, 0.018146505506718032, 11);
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
  sqcRYGate(q, -0.13209547843343272, 0);
  sqcRZGate(q, -0.6752189803380362, 0);
  sqcRYGate(q, 2.628221883717766, 1);
  sqcRZGate(q, 2.310399346587947, 1);
  sqcRYGate(q, 0.015978393964776853, 2);
  sqcRZGate(q, 0.6764923823755788, 2);
  sqcRYGate(q, -0.02020598969421794, 3);
  sqcRZGate(q, -2.532871558917886, 3);
  sqcRYGate(q, -0.03237462611869546, 4);
  sqcRZGate(q, -1.948473273828952, 4);
  sqcRYGate(q, 3.132345868107541, 5);
  sqcRZGate(q, -2.8025898640365425, 5);
  sqcRYGate(q, -3.110397273679035, 6);
  sqcRZGate(q, 2.8253969990233423, 6);
  sqcRYGate(q, 3.12619287226655, 7);
  sqcRZGate(q, 0.4046269127544838, 7);
  sqcRYGate(q, 0.8612164754135048, 8);
  sqcRZGate(q, -1.3977819246879195, 8);
  sqcRYGate(q, 1.597161748160989, 9);
  sqcRZGate(q, -1.5270259763300524, 9);
  sqcRYGate(q, -0.6729765563175443, 10);
  sqcRZGate(q, -1.0465312185531612, 10);
  sqcRYGate(q, -2.1222162289749673, 11);
  sqcRZGate(q, 3.1395317087694767, 11);
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
  sqcRYGate(q, 2.1726037965535205, 0);
  sqcRZGate(q, -1.7375880179894105, 0);
  sqcRYGate(q, 1.6474792574867294, 1);
  sqcRZGate(q, 1.040382842998533, 1);
  sqcRYGate(q, 0.5083902935994355, 2);
  sqcRZGate(q, 2.855058676835552, 2);
  sqcRYGate(q, -1.3301406213767164, 3);
  sqcRZGate(q, -2.0858997108400703, 3);
  sqcRYGate(q, 2.020073690196503, 4);
  sqcRZGate(q, 2.993252652340296, 4);
  sqcRYGate(q, 1.1179109603939814, 5);
  sqcRZGate(q, -1.0506168759093777, 5);
  sqcRYGate(q, 0.004680816962962029, 6);
  sqcRZGate(q, -1.0793539039851714, 6);
  sqcRYGate(q, -3.124079831480379, 7);
  sqcRZGate(q, 1.2616807921614543, 7);
  sqcRYGate(q, -3.128680590961245, 8);
  sqcRZGate(q, -1.0037009859068686, 8);
  sqcRYGate(q, -3.133544760061514, 9);
  sqcRZGate(q, -1.1768204657537762, 9);
  sqcRYGate(q, 3.0991494763259064, 10);
  sqcRZGate(q, 1.703733215438609, 10);
  sqcRYGate(q, 0.045898078845325686, 11);
  sqcRZGate(q, 3.108254393848189, 11);
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
  sqcRYGate(q, 1.6631222106028898, 0);
  sqcRZGate(q, 2.361216279677672, 0);
  sqcRYGate(q, 3.1263218442847758, 1);
  sqcRZGate(q, 3.1371756001263313, 1);
  sqcRYGate(q, 3.1389165224619306, 2);
  sqcRZGate(q, 2.952661861062023, 2);
  sqcRYGate(q, -3.139360916835307, 3);
  sqcRZGate(q, 1.1440361669054437, 3);
  sqcRYGate(q, 3.0946781235351466, 4);
  sqcRZGate(q, 1.1056345247158283, 4);
  sqcRYGate(q, -0.07912953605698382, 5);
  sqcRZGate(q, -1.6680665406238344, 5);
  sqcRYGate(q, 1.9925616325907127, 6);
  sqcRZGate(q, -0.4427244284213261, 6);
  sqcRYGate(q, -2.480757645153618, 7);
  sqcRZGate(q, 0.5774504090289616, 7);
  sqcRYGate(q, -2.6154764785487994, 8);
  sqcRZGate(q, -0.04371496817173633, 8);
  sqcRYGate(q, -1.0257728748136394, 9);
  sqcRZGate(q, 1.5295885084622851, 9);
  sqcRYGate(q, -0.9070815862973858, 10);
  sqcRZGate(q, -1.6777789519035666, 10);
  sqcRYGate(q, -1.973190975014127, 11);
  sqcRZGate(q, -0.16208308238871683, 11);
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
  sqcRYGate(q, 2.386871299353717, 0);
  sqcRZGate(q, -1.2011973807771001, 0);
  sqcRYGate(q, -2.0244031416048083, 1);
  sqcRZGate(q, 1.6296000477728092, 1);
  sqcRYGate(q, -3.0214175146585385, 2);
  sqcRZGate(q, 0.4592261897858201, 2);
  sqcRYGate(q, -2.6815715634906456, 3);
  sqcRZGate(q, 1.4551649051864801, 3);
  sqcRYGate(q, -0.28536467373290186, 4);
  sqcRZGate(q, -1.5166616751156448, 4);
  sqcRYGate(q, 3.1207796446848293, 5);
  sqcRZGate(q, 0.07818331573239372, 5);
  sqcRYGate(q, -3.1150224494994614, 6);
  sqcRZGate(q, -0.8638672532550546, 6);
  sqcRYGate(q, -3.1167188716414413, 7);
  sqcRZGate(q, 3.052001511577861, 7);
  sqcRYGate(q, 2.867736876481729, 8);
  sqcRZGate(q, -2.520210806260066, 8);
  sqcRYGate(q, 0.2180000274262479, 9);
  sqcRZGate(q, 2.2607819003034626, 9);
  sqcRYGate(q, -1.6418389246529532, 10);
  sqcRZGate(q, 0.7605053681525088, 10);
  sqcRYGate(q, -0.9160652109143349, 11);
  sqcRZGate(q, -1.986656138093931, 11);
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
  sqcRYGate(q, 1.1884150349935125, 0);
  sqcRZGate(q, -2.2979105713120105, 0);
  sqcRYGate(q, 1.6953896410248648, 1);
  sqcRZGate(q, -2.2088758404485542, 1);
  sqcRYGate(q, 0.025854141543065094, 2);
  sqcRZGate(q, -2.59698183256798, 2);
  sqcRYGate(q, 3.105557522347217, 3);
  sqcRZGate(q, 1.2759336155544496, 3);
  sqcRYGate(q, 1.5286351343475355, 4);
  sqcRZGate(q, 0.7061754467286772, 4);
  sqcRYGate(q, -1.586808909522432, 5);
  sqcRZGate(q, -0.8295561413128825, 5);
  sqcRYGate(q, -0.0073962395449767016, 6);
  sqcRZGate(q, -0.21691613132758933, 6);
  sqcRYGate(q, -0.22610505620859822, 7);
  sqcRZGate(q, 1.383816297845479, 7);
  sqcRYGate(q, -3.105212154319171, 8);
  sqcRZGate(q, -1.0400643815133044, 8);
  sqcRYGate(q, 0.049876221469741, 9);
  sqcRZGate(q, -0.34172873486228905, 9);
  sqcRYGate(q, 2.90336357413483, 10);
  sqcRZGate(q, 0.0073480324736255355, 10);
  sqcRYGate(q, -0.027024726331414478, 11);
  sqcRZGate(q, -2.17095446439305, 11);
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
  sqcRYGate(q, 0.7362229747428319, 0);
  sqcRZGate(q, -0.395308165252489, 0);
  sqcRYGate(q, -0.8257391235420881, 1);
  sqcRZGate(q, -0.7943504575797729, 1);
  sqcRYGate(q, -1.5917554050728417, 2);
  sqcRZGate(q, 1.4882408262903155, 2);
  sqcRYGate(q, -1.4753139638904749, 3);
  sqcRZGate(q, -2.731822673841014, 3);
  sqcRYGate(q, 0.0023516531298159965, 4);
  sqcRZGate(q, 0.09702400641683795, 4);
  sqcRYGate(q, 5.928838257846132e-05, 5);
  sqcRZGate(q, -1.9560175213485491, 5);
  sqcRYGate(q, 1.221553873570997, 6);
  sqcRZGate(q, 0.5939052660232196, 6);
  sqcRYGate(q, 1.9465181365051327, 7);
  sqcRZGate(q, -1.1099010540046412, 7);
  sqcRYGate(q, -0.08800746088818467, 8);
  sqcRZGate(q, 0.6574520397613653, 8);
  sqcRYGate(q, -3.032700298556722, 9);
  sqcRZGate(q, 2.7795819786795124, 9);
  sqcRYGate(q, 0.853828631871675, 10);
  sqcRZGate(q, -0.0637759291407276, 10);
  sqcRYGate(q, -0.2445119289141865, 11);
  sqcRZGate(q, -0.1561395709395286, 11);
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
  sqcRYGate(q, -3.1090219453741317, 0);
  sqcRZGate(q, -2.3499010039201917, 0);
  sqcRYGate(q, 3.1369372399906252, 1);
  sqcRZGate(q, 0.5687315791900543, 1);
  sqcRYGate(q, -0.01095885878694336, 2);
  sqcRZGate(q, 0.2462597108954672, 2);
  sqcRYGate(q, -0.006569727769439203, 3);
  sqcRZGate(q, 2.860021844875761, 3);
  sqcRYGate(q, 3.1328452296705667, 4);
  sqcRZGate(q, 0.794647026022315, 4);
  sqcRYGate(q, -0.008329028068064882, 5);
  sqcRZGate(q, 2.7279210245088628, 5);
  sqcRYGate(q, 3.056080040085179, 6);
  sqcRZGate(q, -2.5166087932315357, 6);
  sqcRYGate(q, -2.983026957406041, 7);
  sqcRZGate(q, -1.0740517900044377, 7);
  sqcRYGate(q, -3.137228669859341, 8);
  sqcRZGate(q, -1.8065799455420857, 8);
  sqcRYGate(q, 0.008574836054954193, 9);
  sqcRZGate(q, 1.3778827295261378, 9);
  sqcRYGate(q, -3.0564645371087837, 10);
  sqcRZGate(q, 1.6850136915078824, 10);
  sqcRYGate(q, -2.9635099142847956, 11);
  sqcRZGate(q, 1.329497483480999, 11);
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
  sqcRYGate(q, 1.4244337437536796, 0);
  sqcRZGate(q, -0.2464752076751449, 0);
  sqcRYGate(q, -1.6190427552805309, 1);
  sqcRZGate(q, -0.2674485576619299, 1);
  sqcRYGate(q, -1.8171608666135013, 2);
  sqcRZGate(q, 0.0674597229441618, 2);
  sqcRYGate(q, -3.063809389924863, 3);
  sqcRZGate(q, -1.4195488251823907, 3);
  sqcRYGate(q, -1.521886898677713, 4);
  sqcRZGate(q, -0.18561450352838096, 4);
  sqcRYGate(q, -1.583839892071619, 5);
  sqcRZGate(q, -3.0057678844343454, 5);
  sqcRYGate(q, 1.90483194674139, 6);
  sqcRZGate(q, 0.9318810008239626, 6);
  sqcRYGate(q, -1.2003212457320043, 7);
  sqcRZGate(q, -2.1846537603546548, 7);
  sqcRYGate(q, -1.8575396082817797, 8);
  sqcRZGate(q, 2.280496943407498, 8);
  sqcRYGate(q, -1.6580383680333988, 9);
  sqcRZGate(q, 1.0855344443932484, 9);
  sqcRYGate(q, 2.5339838484892447, 10);
  sqcRZGate(q, 1.4181678297093405, 10);
  sqcRYGate(q, 0.9814233657850134, 11);
  sqcRZGate(q, -1.8569546151655612, 11);
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
  sqcRYGate(q, -3.1145681083321635, 0);
  sqcRZGate(q, -1.0487625416063264, 0);
  sqcRYGate(q, 3.130587289924446, 1);
  sqcRZGate(q, -0.8717577771919354, 1);
  sqcRYGate(q, 1.6326499873504994, 2);
  sqcRZGate(q, 1.6991816157075528, 2);
  sqcRYGate(q, 1.7029811164827515, 3);
  sqcRZGate(q, 1.5716706213071172, 3);
  sqcRYGate(q, 3.1323012145941274, 4);
  sqcRZGate(q, -1.0334757954100207, 4);
  sqcRYGate(q, -3.136119162816779, 5);
  sqcRZGate(q, 1.8620494826257037, 5);
  sqcRYGate(q, -3.1373127779563847, 6);
  sqcRZGate(q, -2.6676009948229162, 6);
  sqcRYGate(q, 3.141362856363422, 7);
  sqcRZGate(q, 1.2454141951340656, 7);
  sqcRYGate(q, -2.5926851926650016, 8);
  sqcRZGate(q, 1.1794496257703118, 8);
  sqcRYGate(q, 2.3150404440714105, 9);
  sqcRZGate(q, 1.728679551103654, 9);
  sqcRYGate(q, -0.7623022266359688, 10);
  sqcRZGate(q, 1.59552090710771, 10);
  sqcRYGate(q, -2.623433251022961, 11);
  sqcRZGate(q, -1.4040032792966928, 11);
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
  sqcRYGate(q, -1.0089272863257355, 0);
  sqcRZGate(q, -2.871847573327341, 0);
  sqcRYGate(q, -1.4976398691537325, 1);
  sqcRZGate(q, -2.64006921169102, 1);
  sqcRYGate(q, -1.5341880030151633, 2);
  sqcRZGate(q, -2.7538600021887927, 2);
  sqcRYGate(q, -1.773062851025854, 3);
  sqcRZGate(q, 1.6144748835718261, 3);
  sqcRYGate(q, 0.17047368922699135, 4);
  sqcRZGate(q, 0.4708288177238531, 4);
  sqcRYGate(q, -2.9696659671102683, 5);
  sqcRZGate(q, -1.2649556263195292, 5);
  sqcRYGate(q, -0.03572071200670113, 6);
  sqcRZGate(q, -1.349038259965221, 6);
  sqcRYGate(q, -0.0643347217456946, 7);
  sqcRZGate(q, 0.8497595367462444, 7);
  sqcRYGate(q, 3.0955645038173745, 8);
  sqcRZGate(q, 2.1438276748348004, 8);
  sqcRYGate(q, -0.031986088717023665, 9);
  sqcRZGate(q, -1.5655100454761444, 9);
  sqcRYGate(q, 2.982824825535333, 10);
  sqcRZGate(q, -0.7813367346202078, 10);
  sqcRYGate(q, 2.9682871895338327, 11);
  sqcRZGate(q, 0.7992004453889159, 11);
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
  sqcRYGate(q, 1.0070022699211654, 0);
  sqcRZGate(q, -2.661946221143748, 0);
  sqcRYGate(q, 1.306509101470538, 1);
  sqcRZGate(q, 1.0392890838621989, 1);
  sqcRYGate(q, 0.01756095565086195, 2);
  sqcRZGate(q, 2.584592011468726, 2);
  sqcRYGate(q, -3.1048771241764666, 3);
  sqcRZGate(q, -0.7602546126733696, 3);
  sqcRYGate(q, 0.010358502040619832, 4);
  sqcRZGate(q, -1.6375249396252343, 4);
  sqcRYGate(q, -0.0021507071405917344, 5);
  sqcRZGate(q, 2.2104520619634007, 5);
  sqcRYGate(q, -3.1371238610460526, 6);
  sqcRZGate(q, -0.14052891839847173, 6);
  sqcRYGate(q, -3.137800179525836, 7);
  sqcRZGate(q, -0.562640279856141, 7);
  sqcRYGate(q, 1.5015720744146068, 8);
  sqcRZGate(q, 1.5016310645707291, 8);
  sqcRYGate(q, 2.2371612489200086, 9);
  sqcRZGate(q, 1.494179894721971, 9);
  sqcRYGate(q, -0.888645194976427, 10);
  sqcRZGate(q, -1.075726658094415, 10);
  sqcRYGate(q, 0.7181801821883651, 11);
  sqcRZGate(q, -1.8135443164443248, 11);
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
  sqcRYGate(q, 0.8797663624404057, 0);
  sqcRZGate(q, 0.775209756073628, 0);
  sqcRYGate(q, 2.0028305161120095, 1);
  sqcRZGate(q, 0.26252578242750185, 1);
  sqcRYGate(q, -2.10455006257527, 2);
  sqcRZGate(q, -2.311325988421574, 2);
  sqcRYGate(q, 1.7136467634624202, 3);
  sqcRZGate(q, -0.8408319376018768, 3);
  sqcRYGate(q, 1.1944558565675507, 4);
  sqcRZGate(q, 1.3356315313045002, 4);
  sqcRYGate(q, -1.9141291085964833, 5);
  sqcRZGate(q, 1.3360943978576332, 5);
  sqcRYGate(q, 0.8853358839758246, 6);
  sqcRZGate(q, -2.8858668348904986, 6);
  sqcRYGate(q, -2.2041303316686256, 7);
  sqcRZGate(q, -2.906335820631849, 7);
  sqcRYGate(q, -2.237722720086398, 8);
  sqcRZGate(q, 0.9560602728909268, 8);
  sqcRYGate(q, 0.8906535353944411, 9);
  sqcRZGate(q, -2.9229815077646983, 9);
  sqcRYGate(q, -2.174044805006487, 10);
  sqcRZGate(q, 1.055894839470824, 10);
  sqcRYGate(q, -0.9824484250533034, 11);
  sqcRZGate(q, -2.0862610000911057, 11);

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
