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

  sqcRYGate(q, -0.914013053742926, 0);
  sqcRYGate(q, 0.6861453384127679, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1732962050961904, 0);
  sqcRYGate(q, 0.22444534247482384, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3960899609402029, 2);
  sqcRYGate(q, -1.3354883950250585, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4081429494471811, 2);
  sqcRYGate(q, 0.6478436681307512, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1166055208771866, 4);
  sqcRYGate(q, -2.4083721859761127, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4396444390271432, 4);
  sqcRYGate(q, 1.265571855751587, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.06262549247473981, 6);
  sqcRYGate(q, -2.6198802203961664, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5537139349567676, 6);
  sqcRYGate(q, -1.2965980030851934, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9338418901061747, 0);
  sqcRYGate(q, 2.437302554161674, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0594237368604862, 0);
  sqcRYGate(q, -0.4052570463763898, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4247543742257038, 2);
  sqcRYGate(q, -2.15924048115728, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2200396995519969, 2);
  sqcRYGate(q, 0.7929213635857444, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.176723585457321, 4);
  sqcRYGate(q, 0.9754425025163052, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4493190033110408, 4);
  sqcRYGate(q, 2.2072084101214067, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.19498213936961975, 1);
  sqcRYGate(q, -2.67195691465819, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.844480885173585, 1);
  sqcRYGate(q, -0.09489951075104486, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6815121716940093, 3);
  sqcRYGate(q, -1.9988048674307437, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.0898758203380967, 3);
  sqcRYGate(q, 1.2628270037723273, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5501167515301822, 5);
  sqcRYGate(q, -1.6913100324101098, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.455468754093089, 5);
  sqcRYGate(q, -1.2662880948568205, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7045280772492786, 0);
  sqcRYGate(q, 2.4987774179933777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1426729852687636, 0);
  sqcRYGate(q, -0.1497459574256121, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3995550928306644, 2);
  sqcRYGate(q, -2.0211324152827683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7221784866559284, 2);
  sqcRYGate(q, 3.1367820823357913, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2922286357882182, 4);
  sqcRYGate(q, 0.6764408784197604, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2245232676208877, 4);
  sqcRYGate(q, 1.4686785924546462, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7354761589080123, 6);
  sqcRYGate(q, -2.103284427470138, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7107623384425505, 6);
  sqcRYGate(q, 1.9687350557493735, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7278600465464606, 0);
  sqcRYGate(q, 2.7063026053401824, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3873988499380334, 0);
  sqcRYGate(q, 0.8313630747606139, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4484660656738813, 2);
  sqcRYGate(q, -2.821469073374896, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.32384127892007, 2);
  sqcRYGate(q, -2.181123488483953, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.7185456747285965, 4);
  sqcRYGate(q, 2.816859589344916, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.9446502544475397, 4);
  sqcRYGate(q, -0.23155597888233181, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.8906696348047972, 1);
  sqcRYGate(q, -0.8962294462822206, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8278710663642156, 1);
  sqcRYGate(q, 2.9414949203444634, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3379624713464042, 3);
  sqcRYGate(q, 2.395123058860705, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.132833164406169, 3);
  sqcRYGate(q, -2.1745528218798844, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.33550354366057444, 5);
  sqcRYGate(q, -1.3637526020657844, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4905073960164632, 5);
  sqcRYGate(q, 3.092612149008002, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.330455948979785, 0);
  sqcRYGate(q, 0.5232479951614897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.33949079382259306, 0);
  sqcRYGate(q, 0.6562725497049137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3489902540599044, 2);
  sqcRYGate(q, 0.3947101474313799, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.46636314766475917, 2);
  sqcRYGate(q, 0.627563591461004, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3244663365579834, 4);
  sqcRYGate(q, -1.716593958534271, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1113963672916882, 4);
  sqcRYGate(q, -1.2303658687675507, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.131549455832074, 6);
  sqcRYGate(q, -2.917709166882226, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.848468120008251, 6);
  sqcRYGate(q, 2.3699796389294185, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.531930322263009, 0);
  sqcRYGate(q, -1.642056645386079, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.572181792768227, 0);
  sqcRYGate(q, 1.6282378220800506, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1362776917869155, 2);
  sqcRYGate(q, 0.17631239031996326, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.279907355054857, 2);
  sqcRYGate(q, 2.150217031109991, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.9617690966912017, 4);
  sqcRYGate(q, -1.3658907065842651, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.9502574222864997, 4);
  sqcRYGate(q, -0.7610443277904073, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7146586834782889, 1);
  sqcRYGate(q, 0.26300199289098636, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2480264536562802, 1);
  sqcRYGate(q, -1.1141661351680505, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6088581779499598, 3);
  sqcRYGate(q, -2.0047367585385683, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.8269011030496767, 3);
  sqcRYGate(q, -1.4516868277393997, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8787170039717056, 5);
  sqcRYGate(q, 1.3866375467415013, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4720686084304764, 5);
  sqcRYGate(q, 2.6659843006390807, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4902790439890232, 0);
  sqcRYGate(q, -2.7290085921218328, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3611617469193637, 0);
  sqcRYGate(q, 1.7495216280773904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3696700453089745, 2);
  sqcRYGate(q, -2.8783413535546205, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7853251880363776, 2);
  sqcRYGate(q, 1.2985214768490279, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4006730189913965, 4);
  sqcRYGate(q, 2.4970851933840716, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.19241752399421763, 4);
  sqcRYGate(q, 1.621834350042696, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.325217558520505, 6);
  sqcRYGate(q, 1.8279225668312007, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9724097046241347, 6);
  sqcRYGate(q, -0.4416105269638626, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.927077056900077, 0);
  sqcRYGate(q, 1.3213583857040592, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9185125206679051, 0);
  sqcRYGate(q, -0.766938330246334, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8615153326126808, 2);
  sqcRYGate(q, -2.0651897864533035, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.25355571941745136, 2);
  sqcRYGate(q, 2.443173802311371, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.49546832877838, 4);
  sqcRYGate(q, -0.7496859163132426, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.8877520187697416, 4);
  sqcRYGate(q, 2.6822952896097543, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.20486232855422415, 1);
  sqcRYGate(q, 0.40424910419104243, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.325479441853381, 1);
  sqcRYGate(q, 2.8906723510042864, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.51981123187267, 3);
  sqcRYGate(q, -2.822669555722277, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.5102246765973195, 3);
  sqcRYGate(q, 1.5295749798277019, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.125526590376323, 5);
  sqcRYGate(q, -0.5594610653538286, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.1728916008177048, 5);
  sqcRYGate(q, 2.1410795271469625, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.7413331823400005, 0);
  sqcRYGate(q, -0.18543831236687236, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0064600451394314, 0);
  sqcRYGate(q, 0.09308634005205452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7124876939996443, 2);
  sqcRYGate(q, -2.2304024015131487, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.953366645484591, 2);
  sqcRYGate(q, 2.0968282201966284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.48934382214710853, 4);
  sqcRYGate(q, 1.5971849005645746, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4323849910269426, 4);
  sqcRYGate(q, 1.9218221962016164, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5700191238228547, 6);
  sqcRYGate(q, 1.5298113205906763, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0024368196860935, 6);
  sqcRYGate(q, 1.2199334375969997, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2895787244661876, 0);
  sqcRYGate(q, 2.5316740315453945, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2168326704050578, 0);
  sqcRYGate(q, -3.105291128302925, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.283235442166015, 2);
  sqcRYGate(q, 1.6810133294904, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.07153502852083, 2);
  sqcRYGate(q, 2.97636827685706, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4859760889811935, 4);
  sqcRYGate(q, 2.7721745699674014, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.7065425082032473, 4);
  sqcRYGate(q, -0.029699254755744718, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0284986514600156, 1);
  sqcRYGate(q, -0.24910503819648144, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.483987274087131, 1);
  sqcRYGate(q, 2.4613273594580565, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.87786377338789, 3);
  sqcRYGate(q, 2.8313797828200156, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.1105631198186243, 3);
  sqcRYGate(q, 1.6050707034005658, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.738452522632627, 5);
  sqcRYGate(q, -0.8481084576962301, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.2518525337970292, 5);
  sqcRYGate(q, 2.452771556392164, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.683086064992477, 0);
  sqcRYGate(q, 3.008762470377836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2984223833407, 0);
  sqcRYGate(q, 3.0609076361189644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4074810688398705, 2);
  sqcRYGate(q, -0.2494832673520169, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1918671905235847, 2);
  sqcRYGate(q, 1.0199866392168881, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.303391842392894, 4);
  sqcRYGate(q, -1.497776524944118, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9853970380498198, 4);
  sqcRYGate(q, 0.8780119747865013, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.038812385403407, 6);
  sqcRYGate(q, -0.22915457639302605, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.584741851981899, 6);
  sqcRYGate(q, 3.1048219365402443, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0228207721830676, 0);
  sqcRYGate(q, -1.1624164937307648, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1991037317853417, 0);
  sqcRYGate(q, -0.5611516314193874, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6260325238301778, 2);
  sqcRYGate(q, -2.274917358350409, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3138784500392289, 2);
  sqcRYGate(q, 0.8910031784526917, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.9456296444154271, 4);
  sqcRYGate(q, 0.5989755864477254, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7111618052644024, 4);
  sqcRYGate(q, -0.9190974798791807, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.09761456196286576, 1);
  sqcRYGate(q, 1.7213224817382713, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6433888863446662, 1);
  sqcRYGate(q, 2.6221832490576875, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6166750775727492, 3);
  sqcRYGate(q, -0.3568579711968827, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7349307460134715, 3);
  sqcRYGate(q, 0.7820399863341654, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.0507740337611704, 5);
  sqcRYGate(q, 1.7368931453495684, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.0316315336055695, 5);
  sqcRYGate(q, 1.5958202271865902, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8351573429248225, 0);
  sqcRYGate(q, -1.5984068945311882, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21816206262417914, 0);
  sqcRYGate(q, -0.7406375598591914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5851871342738173, 2);
  sqcRYGate(q, -3.0672556863517735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.929317542086861, 2);
  sqcRYGate(q, 3.001608521028622, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.674420781664262, 4);
  sqcRYGate(q, 1.0123245146609658, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4568183538943869, 4);
  sqcRYGate(q, -0.2488787683101652, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.056940663089072155, 6);
  sqcRYGate(q, -2.5166059321377348, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0708593064608942, 6);
  sqcRYGate(q, -1.4798923484054691, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4477054594043466, 0);
  sqcRYGate(q, 3.002879974373052, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3013999173628286, 0);
  sqcRYGate(q, -2.8532117134594603, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.03287778208986225, 2);
  sqcRYGate(q, 2.096734499129819, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6838089062665504, 2);
  sqcRYGate(q, 0.45020247140939074, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.2102916070963998, 4);
  sqcRYGate(q, -0.8865976297961087, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4958939671419322, 4);
  sqcRYGate(q, 2.467138717335084, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.001839732995882, 1);
  sqcRYGate(q, -1.1863204732200705, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7921235540137412, 1);
  sqcRYGate(q, 2.1345276396767234, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9738481709208546, 3);
  sqcRYGate(q, 1.3470271358179309, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8315021689943032, 3);
  sqcRYGate(q, 0.22084595121295436, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.623848271932761, 5);
  sqcRYGate(q, 2.372033069074678, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.2423815341131943, 5);
  sqcRYGate(q, 2.3474916785740305, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.27865364133686565, 0);
  sqcRYGate(q, 1.0239052408256923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.769977074769205, 0);
  sqcRYGate(q, -2.798103653810435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4685039226259646, 2);
  sqcRYGate(q, -1.3682530644385107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1743119683494614, 2);
  sqcRYGate(q, 2.2622015397645328, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9291457591432015, 4);
  sqcRYGate(q, 3.1035056155427165, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.618519360777751, 4);
  sqcRYGate(q, 2.44225204295801, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8692001136517478, 6);
  sqcRYGate(q, 1.6218050494885423, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.29627336392607173, 6);
  sqcRYGate(q, -1.686940438371411, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8195515153523482, 0);
  sqcRYGate(q, 0.9408258429687715, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.331926845439477, 0);
  sqcRYGate(q, -0.11844900293072236, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0063238369848417, 2);
  sqcRYGate(q, -2.731650417958702, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4801481148491302, 2);
  sqcRYGate(q, 3.0304125138728013, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3748777572795925, 4);
  sqcRYGate(q, 1.5328914132208968, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.4680216416474394, 4);
  sqcRYGate(q, 2.503223864583332, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3052894546019385, 1);
  sqcRYGate(q, -3.0822848883252836, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.13432640162437615, 1);
  sqcRYGate(q, -2.676548379955004, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0538495748520145, 3);
  sqcRYGate(q, 1.342694929965357, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8909135045491698, 3);
  sqcRYGate(q, 2.8119069408358452, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.282949459103212, 5);
  sqcRYGate(q, 2.686686940492176, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7973458310752284, 5);
  sqcRYGate(q, -2.4419331238321025, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.543229316730744, 0);
  sqcRYGate(q, -0.06958012227101003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.468692425456564, 0);
  sqcRYGate(q, 0.16803015537445126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.557185100555202, 2);
  sqcRYGate(q, 1.9077390402375403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.576050050621659, 2);
  sqcRYGate(q, 2.089684113261261, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.815747318158936, 4);
  sqcRYGate(q, 2.8396084789718588, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1693829186152245, 4);
  sqcRYGate(q, -2.3171179196491303, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.21155006834201373, 6);
  sqcRYGate(q, -2.6653143392467085, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1781404534711446, 6);
  sqcRYGate(q, -2.944409135103207, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.073264860096161, 0);
  sqcRYGate(q, -1.4403205802599122, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4526907098365016, 0);
  sqcRYGate(q, -1.683832876018673, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.20950360984993033, 2);
  sqcRYGate(q, -1.3543830258927159, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.8773789828027322, 2);
  sqcRYGate(q, 2.985478078700963, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.1193265916386346, 4);
  sqcRYGate(q, -0.4581032168456041, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.2508915802813865, 4);
  sqcRYGate(q, 2.491053143518191, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2790600747403644, 1);
  sqcRYGate(q, 1.0592577736229591, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.039911157954637844, 1);
  sqcRYGate(q, -0.6408743430545596, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9178292283399587, 3);
  sqcRYGate(q, -1.2830881508057892, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.6013116630601614, 3);
  sqcRYGate(q, -3.024732905372278, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9876373684483977, 5);
  sqcRYGate(q, -1.9485599091124348, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.39157729000123, 5);
  sqcRYGate(q, 0.8109231557044058, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.7933455531867244, 0);
  sqcRYGate(q, 3.0410495141552096, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.43879673253044427, 0);
  sqcRYGate(q, -0.9840925886590897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.754665792410158, 2);
  sqcRYGate(q, -0.1615074553474193, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7078922124987264, 2);
  sqcRYGate(q, -0.9533755114065529, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9856315564495723, 4);
  sqcRYGate(q, -0.5948126639548521, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2473196323211404, 4);
  sqcRYGate(q, -0.6848835400040246, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4745755204168414, 6);
  sqcRYGate(q, 0.6184254045908478, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7048074388159247, 6);
  sqcRYGate(q, 2.47577048161747, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6708088459941326, 0);
  sqcRYGate(q, -1.439688863427488, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9181094774763343, 0);
  sqcRYGate(q, 2.2725952674372563, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.881929970478436, 2);
  sqcRYGate(q, 2.769361999971613, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.333681038438001, 2);
  sqcRYGate(q, -1.5818586991033095, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.5942954251925037, 4);
  sqcRYGate(q, -3.0660990686159892, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.331909083044439, 4);
  sqcRYGate(q, 2.094077181239438, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.5806695137761815, 1);
  sqcRYGate(q, -1.477286556839606, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6392610416770974, 1);
  sqcRYGate(q, 2.6643931936753473, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.28111166063265713, 3);
  sqcRYGate(q, 1.1000882639863674, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.09314207537837049, 3);
  sqcRYGate(q, -2.801686982292279, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8874204012632614, 5);
  sqcRYGate(q, -2.7860974111905294, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.15093850484337548, 5);
  sqcRYGate(q, 1.2701803930365858, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.8646426490827235, 0);
  sqcRYGate(q, -1.1608155225135908, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.148491762657791, 0);
  sqcRYGate(q, -0.37549820226197367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.302877028394825, 2);
  sqcRYGate(q, -1.6310193672874127, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8025265134562387, 2);
  sqcRYGate(q, -1.5935448231690792, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9074717478254142, 4);
  sqcRYGate(q, -3.1240289022939223, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3863627365543554, 4);
  sqcRYGate(q, -0.2222560825686717, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3395443938703817, 6);
  sqcRYGate(q, 1.2203871093843157, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1225506537938137, 6);
  sqcRYGate(q, 2.656246780513249, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5093457711442435, 0);
  sqcRYGate(q, 2.087594081052517, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.20972207992805192, 0);
  sqcRYGate(q, 3.0967263796261104, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8606632799620841, 2);
  sqcRYGate(q, 2.5508745763011165, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.6183806756996604, 2);
  sqcRYGate(q, -0.1398159587196508, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.746971989543755, 4);
  sqcRYGate(q, 1.2932914012322394, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.9297565770494094, 4);
  sqcRYGate(q, 1.2989477856160523, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.2065629923986383, 1);
  sqcRYGate(q, -1.0649334783063047, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7151768290518907, 1);
  sqcRYGate(q, 0.5985868487839506, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1303499038900884, 3);
  sqcRYGate(q, -1.8777883978555971, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.2886239394863621, 3);
  sqcRYGate(q, -0.24929706262422613, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.106915976389194, 5);
  sqcRYGate(q, 3.048202773389674, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.8117095909516472, 5);
  sqcRYGate(q, 0.91850469410136, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.2076469486932666, 0);
  sqcRYGate(q, -2.557483984045371, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6198264546962355, 0);
  sqcRYGate(q, -2.886573742418491, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6953381313547755, 2);
  sqcRYGate(q, -0.29670036214352624, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0006966633895664, 2);
  sqcRYGate(q, -2.1011979019924714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7096180909236712, 4);
  sqcRYGate(q, 2.095826442500508, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9796695021503994, 4);
  sqcRYGate(q, -0.286309422993033, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9484776086121771, 6);
  sqcRYGate(q, 0.30216345317357196, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6912059771811059, 6);
  sqcRYGate(q, -1.1975617699537198, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.30557627198439036, 0);
  sqcRYGate(q, 1.97026952561503, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8971559337776559, 0);
  sqcRYGate(q, 0.41706114263344884, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0174603653955936, 2);
  sqcRYGate(q, 0.43589320004942866, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.4742749607803836, 2);
  sqcRYGate(q, 2.9017355089194345, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.2526527836533257, 4);
  sqcRYGate(q, -1.8407809568640596, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5428249045895095, 4);
  sqcRYGate(q, 0.6995643927816628, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.015994852795706, 1);
  sqcRYGate(q, 3.069135581331781, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5619349689123092, 1);
  sqcRYGate(q, -2.106861168242979, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3348873010846258, 3);
  sqcRYGate(q, 1.5385242681150906, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.128719696646452, 3);
  sqcRYGate(q, -2.407142495806523, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8341952727350181, 5);
  sqcRYGate(q, 2.3579153633348118, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8841161466711913, 5);
  sqcRYGate(q, 2.0242197229857273, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.624631055983322, 0);
  sqcRYGate(q, -1.517627071550083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7710890941505895, 0);
  sqcRYGate(q, 2.475181604811201, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2539047190809294, 2);
  sqcRYGate(q, -0.6760997182821107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7975873312256128, 2);
  sqcRYGate(q, -2.8406942155363852, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.248241753385648, 4);
  sqcRYGate(q, -0.9362373764057078, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2058515597860433, 4);
  sqcRYGate(q, -3.1242577935619447, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2113687316492054, 6);
  sqcRYGate(q, 1.9774847266409739, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.016301879492606197, 6);
  sqcRYGate(q, 2.597802830626795, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.276635151261881, 0);
  sqcRYGate(q, -1.9764336864022345, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9492295412289966, 0);
  sqcRYGate(q, -2.291494738998244, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.138485016206672, 2);
  sqcRYGate(q, 0.12020459643896998, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.441637552487769, 2);
  sqcRYGate(q, 0.332182870126391, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.031655963032712, 4);
  sqcRYGate(q, -2.0114646781069743, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.6858034730506226, 4);
  sqcRYGate(q, -0.5863399020067087, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.6637044618624479, 1);
  sqcRYGate(q, 2.450384974285169, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.918966802553151, 1);
  sqcRYGate(q, -0.028946867559275218, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5725151228765695, 3);
  sqcRYGate(q, 1.534005805307448, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.6356291502746503, 3);
  sqcRYGate(q, 0.88899990379901, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.12091077312591825, 5);
  sqcRYGate(q, -2.7307653615907532, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.9426321966860458, 5);
  sqcRYGate(q, -2.0148145624806, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.1290395915409146, 0);
  sqcRYGate(q, -1.4716144102308206, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.717668681935811, 0);
  sqcRYGate(q, 1.9588556713313636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5443443188299995, 2);
  sqcRYGate(q, 1.9356062194374957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.88597456705394, 2);
  sqcRYGate(q, 2.1411151103857065, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8565588387080515, 4);
  sqcRYGate(q, -2.2760976048318504, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5919194557146397, 4);
  sqcRYGate(q, 2.80815668202807, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.367345659488283, 6);
  sqcRYGate(q, -2.7522142485197625, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.740809358057597, 6);
  sqcRYGate(q, -1.2033601247540684, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.766807921208962, 0);
  sqcRYGate(q, 1.950393216456706, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.01818080133601363, 0);
  sqcRYGate(q, -0.5717787482610251, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0418050084775787, 2);
  sqcRYGate(q, 1.230137910117213, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.4882681314515525, 2);
  sqcRYGate(q, -0.47102034188327313, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.636938551041065, 4);
  sqcRYGate(q, -2.818788757645009, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.5923292221663012, 4);
  sqcRYGate(q, 1.4150694118767841, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.10365670238872404, 1);
  sqcRYGate(q, -0.9585854119496169, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2403761182363615, 1);
  sqcRYGate(q, -2.4829306030922322, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7895550604848616, 3);
  sqcRYGate(q, 1.4239114123961303, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.4606192618238367, 3);
  sqcRYGate(q, -2.923668331350184, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.2307256197529206, 5);
  sqcRYGate(q, -1.7766592078856214, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.19560363337301548, 5);
  sqcRYGate(q, 2.892787336605026, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.25927398520577505, 0);
  sqcRYGate(q, 0.3377501782407668, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6350144030567417, 0);
  sqcRYGate(q, 2.411833565553185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0463013174225377, 2);
  sqcRYGate(q, -1.596730265297424, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5227600457970447, 2);
  sqcRYGate(q, -1.0878834659087948, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.277822576960645, 4);
  sqcRYGate(q, -2.370661598421349, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.123150902784656, 4);
  sqcRYGate(q, 0.781487553826112, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2669352079995813, 6);
  sqcRYGate(q, -0.15768958843009234, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7341643184422493, 6);
  sqcRYGate(q, -1.6499218815512826, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9263277220230663, 0);
  sqcRYGate(q, 0.027593472509019, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.413798428222765, 0);
  sqcRYGate(q, 2.3895538665351306, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2010300460785883, 2);
  sqcRYGate(q, 2.8015431411363796, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1019084125532779, 2);
  sqcRYGate(q, 0.714255512333183, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.42125889084707113, 4);
  sqcRYGate(q, -0.9239220799776273, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.4516301305498196, 4);
  sqcRYGate(q, -0.27559223316874615, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.1407872658624034, 1);
  sqcRYGate(q, -1.2814770633487553, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.094317264444143, 1);
  sqcRYGate(q, 0.6716538339496498, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.661774560601071, 3);
  sqcRYGate(q, 1.988102287307258, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.9631819261574287, 3);
  sqcRYGate(q, -1.4811490628120036, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.0964955016618116, 5);
  sqcRYGate(q, -0.5220459533630928, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.6328650959302076, 5);
  sqcRYGate(q, -2.867323875407799, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.926328976909536, 0);
  sqcRYGate(q, -0.14793873168945915, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.069685958419712, 0);
  sqcRYGate(q, -1.5626105850646335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7879003634541957, 2);
  sqcRYGate(q, 2.1048486965124695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7171622112236475, 2);
  sqcRYGate(q, -1.0287104772452738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0862400580882605, 4);
  sqcRYGate(q, 2.841467083589792, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7187707866956097, 4);
  sqcRYGate(q, -2.0700266350582126, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.013264356255683, 6);
  sqcRYGate(q, -1.3333253604948503, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2808620921401235, 6);
  sqcRYGate(q, -1.5872764789688718, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3047838796766134, 0);
  sqcRYGate(q, 0.8080550556652186, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.45633196505268, 0);
  sqcRYGate(q, -2.188432546015804, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.315141633260492, 2);
  sqcRYGate(q, -2.255378100521556, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.9903775015560945, 2);
  sqcRYGate(q, -0.19487752804162736, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7608395035505318, 4);
  sqcRYGate(q, 0.7186442102398143, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.91589440651921, 4);
  sqcRYGate(q, -1.8786007503764008, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.0896943550652085, 1);
  sqcRYGate(q, -0.918213236971626, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.882528828146734, 1);
  sqcRYGate(q, 2.539111616488282, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.040787332561224, 3);
  sqcRYGate(q, -0.8642487167405752, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.1083328590852058, 3);
  sqcRYGate(q, -1.6110847954111378, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.6738037801338868, 5);
  sqcRYGate(q, -1.8147363398622876, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.1283334974290646, 5);
  sqcRYGate(q, -2.565367403129297, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.14747791008295333, 0);
  sqcRYGate(q, -0.5877039160116261, 1);
  sqcRYGate(q, -2.6263745430113166, 2);
  sqcRYGate(q, -1.4788978744056887, 3);
  sqcRYGate(q, -0.7607833675454813, 4);
  sqcRYGate(q, 2.9591402901385946, 5);
  sqcRYGate(q, -0.3812524919920577, 6);
  sqcRYGate(q, 1.3409041964078368, 7);

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
