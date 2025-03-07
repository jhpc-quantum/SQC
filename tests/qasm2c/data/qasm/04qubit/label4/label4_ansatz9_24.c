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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 1.855912572989359, 0);
  sqcRYGate(q, 2.107065330067362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.717985771280528, 0);
  sqcRYGate(q, 1.3093874873691718, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7136709152739267, 2);
  sqcRYGate(q, -0.5077933957053147, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9759199072400715, 2);
  sqcRYGate(q, -2.6082384797166407, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1286796092740623, 0);
  sqcRYGate(q, 2.683653848603259, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.912929916765558, 0);
  sqcRYGate(q, 2.2831288044823657, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.312433414309768, 1);
  sqcRYGate(q, 2.2368437417687472, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.335782166240989, 1);
  sqcRYGate(q, -0.9798255702963646, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5501336946957094, 0);
  sqcRYGate(q, -1.45271702254904, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1221525257467784, 0);
  sqcRYGate(q, 0.25778277678201, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3063776632835333, 1);
  sqcRYGate(q, 1.3407287359452473, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.084898402793297, 1);
  sqcRYGate(q, 0.6092543883466996, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5734793454909848, 0);
  sqcRYGate(q, -1.6189801446488605, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.557214635317183, 0);
  sqcRYGate(q, 2.6843318056474574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.911500804486887, 2);
  sqcRYGate(q, 0.4870156273276588, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3540270153224112, 2);
  sqcRYGate(q, 1.4106032420515229, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4077814343865712, 0);
  sqcRYGate(q, -1.6687221940000878, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8420431994288284, 0);
  sqcRYGate(q, 1.702665299310576, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.442063631071299, 1);
  sqcRYGate(q, -1.011487495454178, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7211309254867908, 1);
  sqcRYGate(q, -0.2418125567135565, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8863565916483785, 0);
  sqcRYGate(q, -2.6904140906168137, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.777170557789046, 0);
  sqcRYGate(q, -1.120708192476476, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7625741092529, 1);
  sqcRYGate(q, -0.9137680429144589, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8016800939386258, 1);
  sqcRYGate(q, 2.7906883746401663, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8207706888534947, 0);
  sqcRYGate(q, -1.980515914008305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.791197500314112, 0);
  sqcRYGate(q, -3.015417543076583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7682741058507664, 2);
  sqcRYGate(q, 0.6587410704560064, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.79242407517807, 2);
  sqcRYGate(q, 0.11748134464968274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8492936688241812, 0);
  sqcRYGate(q, -3.131163623011783, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5482945341936503, 0);
  sqcRYGate(q, 1.7125329415694546, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0262102503148536, 1);
  sqcRYGate(q, 2.4333593178873225, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8412198721868226, 1);
  sqcRYGate(q, -2.2525706606062403, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9918576570304192, 0);
  sqcRYGate(q, 1.0509614441612483, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2502102845994365, 0);
  sqcRYGate(q, -1.2698133906545594, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9994897410470127, 1);
  sqcRYGate(q, 0.9536094242648137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.100119183997753, 1);
  sqcRYGate(q, 0.7521156578918795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1617125786820433, 0);
  sqcRYGate(q, 0.3134696343870811, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7893121015319904, 0);
  sqcRYGate(q, -1.5795710970627763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7608573485013224, 2);
  sqcRYGate(q, -0.9245231608587523, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.523187932503624, 2);
  sqcRYGate(q, -0.5900480731581523, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0996512256477278, 0);
  sqcRYGate(q, -2.710546892064311, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3304644414123458, 0);
  sqcRYGate(q, 0.5536907546258913, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.902125797960026, 1);
  sqcRYGate(q, -2.480854901608241, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.624555597269656, 1);
  sqcRYGate(q, 1.276581020597085, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6114922526991995, 0);
  sqcRYGate(q, -0.7786316487855807, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.170401463745102, 0);
  sqcRYGate(q, -0.004804795290555219, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0542990163107038, 1);
  sqcRYGate(q, -2.756262209482682, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.15377848713876108, 1);
  sqcRYGate(q, 0.6988731191290403, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.675810650537569, 0);
  sqcRYGate(q, -1.7527813858838128, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.391248642154266, 0);
  sqcRYGate(q, -2.3006471040683265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1096180282339345, 2);
  sqcRYGate(q, 1.7369592202536792, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4295604718004506, 2);
  sqcRYGate(q, 1.0316692071102302, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.031327918126829, 0);
  sqcRYGate(q, 0.11345514289744951, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.61830521852858, 0);
  sqcRYGate(q, 0.054337377814754895, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6326564638887366, 1);
  sqcRYGate(q, -0.4039711333379943, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2553214758638918, 1);
  sqcRYGate(q, 1.9652089463455127, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.314604054986406, 0);
  sqcRYGate(q, -0.9810167971637932, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7345755115339685, 0);
  sqcRYGate(q, 1.5441932497247635, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.814040226783107, 1);
  sqcRYGate(q, -1.6133254761980202, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4788420830301261, 1);
  sqcRYGate(q, -1.9812956592787172, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9752055610497337, 0);
  sqcRYGate(q, -2.9950764642084886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4888674465734786, 0);
  sqcRYGate(q, 1.702611533919387, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.713592575258068, 2);
  sqcRYGate(q, 2.3470677614518736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6130955170681496, 2);
  sqcRYGate(q, -1.0874584089413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.011694076431625, 0);
  sqcRYGate(q, -0.5593793662756887, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.535497914803259, 0);
  sqcRYGate(q, -2.3234756077716803, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2858025803556075, 1);
  sqcRYGate(q, -0.3328498949787928, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1532296217235052, 1);
  sqcRYGate(q, 1.3678300031411448, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7900671182483716, 0);
  sqcRYGate(q, -1.7688328962680986, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2985527285816234, 0);
  sqcRYGate(q, -1.4819129601241283, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6437810906308705, 1);
  sqcRYGate(q, -2.0041230334711884, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2002623243271722, 1);
  sqcRYGate(q, 1.4784437213756567, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.225212768538756, 0);
  sqcRYGate(q, 1.189466638828264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5171669768585219, 0);
  sqcRYGate(q, 2.3305987910747845, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.81401162561761, 2);
  sqcRYGate(q, -1.7166115912945608, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6732818823781614, 2);
  sqcRYGate(q, -1.0336023575056987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5502893675877853, 0);
  sqcRYGate(q, -1.13768747179681, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0481811696209036, 0);
  sqcRYGate(q, -1.5637939890210941, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.32842752397632685, 1);
  sqcRYGate(q, 2.956611994968147, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9903422568864776, 1);
  sqcRYGate(q, -2.197027722683506, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.05194505895693313, 0);
  sqcRYGate(q, -0.1916629829582659, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9641846214120091, 0);
  sqcRYGate(q, 0.6023362732095059, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4012388147908164, 1);
  sqcRYGate(q, -1.437945354227488, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1145611139384588, 1);
  sqcRYGate(q, -1.089482625782777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3583822667165832, 0);
  sqcRYGate(q, -1.1599232604383642, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.684718951310214, 0);
  sqcRYGate(q, 1.5378415395944565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.071499140200303, 2);
  sqcRYGate(q, 0.7623037059898401, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0102283283125137, 2);
  sqcRYGate(q, -0.9023613844291241, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.469306642720098, 0);
  sqcRYGate(q, 2.952036306517391, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5963146919221138, 0);
  sqcRYGate(q, -0.026807618061531535, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0443036582051604, 1);
  sqcRYGate(q, 0.24052363783052397, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.495193990430959, 1);
  sqcRYGate(q, -0.35161851910492903, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3572845274681304, 0);
  sqcRYGate(q, -0.9653719933697538, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8784640310795364, 0);
  sqcRYGate(q, 0.23440352885911597, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6586285999114714, 1);
  sqcRYGate(q, 1.0238267170489632, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.858189830031904, 1);
  sqcRYGate(q, 0.5956358458719979, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.174667706689421, 0);
  sqcRYGate(q, -3.112110754571356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4482056224855127, 0);
  sqcRYGate(q, -0.77694785822146, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.49235549007183677, 2);
  sqcRYGate(q, -1.2632202170959357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.446117377730627, 2);
  sqcRYGate(q, -0.7300059518839789, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8836362962903597, 0);
  sqcRYGate(q, 1.096747904784825, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.77594202468823, 0);
  sqcRYGate(q, 1.4932527637593205, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9860867525482776, 1);
  sqcRYGate(q, -2.730407728227473, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1822560066418903, 1);
  sqcRYGate(q, -1.3031496648058045, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9937870691062174, 0);
  sqcRYGate(q, -0.3552496463267789, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0399697165402562, 0);
  sqcRYGate(q, 0.42070592299467613, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4236472997848946, 1);
  sqcRYGate(q, 0.6556023434550547, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0037791103769926, 1);
  sqcRYGate(q, -2.0096620382534067, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8842236261518277, 0);
  sqcRYGate(q, 1.4171589626381476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1771403427547981, 0);
  sqcRYGate(q, 0.11564852922036412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1309556011368262, 2);
  sqcRYGate(q, 0.47290691987776423, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0933337881333136, 2);
  sqcRYGate(q, 2.2005512614978215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7049333822133232, 0);
  sqcRYGate(q, -0.5382618508588951, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0613593255757063, 0);
  sqcRYGate(q, 3.0943840116489683, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.983569815019387, 1);
  sqcRYGate(q, 0.14204377281014358, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.24709771530594882, 1);
  sqcRYGate(q, -2.0052007935036995, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0055981000997227, 0);
  sqcRYGate(q, -1.4217273421122287, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.965630542544532, 0);
  sqcRYGate(q, -0.9051367226184847, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9107573682764238, 1);
  sqcRYGate(q, 1.1034006411191466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.937057049780428, 1);
  sqcRYGate(q, -0.5809696003755384, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3882800878775852, 0);
  sqcRYGate(q, -0.7353247313678286, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.719188822488433, 0);
  sqcRYGate(q, -1.7575641432345757, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8396360587518048, 2);
  sqcRYGate(q, 1.1529543066607761, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8831511004343167, 2);
  sqcRYGate(q, 2.814263289461737, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.615629384279683, 0);
  sqcRYGate(q, -0.37899100134753994, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.993846184489806, 0);
  sqcRYGate(q, -1.0400871864113848, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.264310486869965, 1);
  sqcRYGate(q, 2.5354339562441894, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0837140049670513, 1);
  sqcRYGate(q, 1.2130124517326772, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7750965157552636, 0);
  sqcRYGate(q, 0.143647083631539, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5671027140729463, 0);
  sqcRYGate(q, 1.6157405409296208, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3117855630051753, 1);
  sqcRYGate(q, 1.5374894613332302, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4474706827626393, 1);
  sqcRYGate(q, 1.4397413423974426, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5817020869734377, 0);
  sqcRYGate(q, -2.0091093804767697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8056966710898865, 0);
  sqcRYGate(q, -1.9953567539886217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.066525906062381, 2);
  sqcRYGate(q, -0.8949218677440127, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7451202043505676, 2);
  sqcRYGate(q, 2.132514609846008, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0793473251224495, 0);
  sqcRYGate(q, 2.5287710057648973, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6006608374174793, 0);
  sqcRYGate(q, -1.757031558308422, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7644116888325976, 1);
  sqcRYGate(q, 2.858574885115642, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.052131786641617, 1);
  sqcRYGate(q, 1.9121794532304506, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2366175314560284, 0);
  sqcRYGate(q, 0.9462850587299351, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0880211719558934, 0);
  sqcRYGate(q, 2.323010980352118, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5942913303011927, 1);
  sqcRYGate(q, 1.7373750204078373, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0957875805747967, 1);
  sqcRYGate(q, -0.3470221719008339, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2335459453848, 0);
  sqcRYGate(q, 2.07393727373211, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.064725991727321, 0);
  sqcRYGate(q, 0.863331542805277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.825475932380183, 2);
  sqcRYGate(q, -2.733563156852712, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8883860463482822, 2);
  sqcRYGate(q, 1.6285937753717856, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9175386933774052, 0);
  sqcRYGate(q, 0.22953923136154494, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8220780694193652, 0);
  sqcRYGate(q, 1.6692428102932633, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.200130197193955, 1);
  sqcRYGate(q, 0.47955883894085855, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.020598172429030268, 1);
  sqcRYGate(q, 0.20708661838559816, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5463705430716033, 0);
  sqcRYGate(q, -1.8392707886541855, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7991346900533833, 0);
  sqcRYGate(q, -1.695197853757571, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8215124095917243, 1);
  sqcRYGate(q, 2.458617785301418, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.22217726349356726, 1);
  sqcRYGate(q, 0.0057625953042519384, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.904379826159274, 0);
  sqcRYGate(q, -2.431552035180745, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9239468976665912, 0);
  sqcRYGate(q, -0.6075076112477208, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8987458292055575, 2);
  sqcRYGate(q, -0.6360672368068466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7043301343186651, 2);
  sqcRYGate(q, 0.4340264546433048, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0597331427165084, 0);
  sqcRYGate(q, -3.071641720228311, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.328297059228882, 0);
  sqcRYGate(q, 2.4739674513989023, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0649595382025137, 1);
  sqcRYGate(q, -1.4827942990790712, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3880634373651919, 1);
  sqcRYGate(q, -2.121572652105482, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9625456579976404, 0);
  sqcRYGate(q, 1.8909672525959345, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5477122185690018, 0);
  sqcRYGate(q, 0.2813688668473775, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2732410260649718, 1);
  sqcRYGate(q, 0.9867328025173876, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.303798558983452, 1);
  sqcRYGate(q, 2.5348790253540416, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.295284037125969, 0);
  sqcRYGate(q, -1.7174874818245396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1562094259955877, 0);
  sqcRYGate(q, -2.693203741507658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.00780333014698, 2);
  sqcRYGate(q, 0.5107566238773034, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0559531210984456, 2);
  sqcRYGate(q, 1.2637198852441862, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4173467461206855, 0);
  sqcRYGate(q, -0.6301532195379418, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7515623193175247, 0);
  sqcRYGate(q, 1.8983051081130162, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6835141827467393, 1);
  sqcRYGate(q, 2.6668428099818278, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9928559958044545, 1);
  sqcRYGate(q, -2.657590739165347, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.013182629120110256, 0);
  sqcRYGate(q, -0.7245824598841958, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0519644088992761, 0);
  sqcRYGate(q, 1.0405151787122744, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.193427951682396, 1);
  sqcRYGate(q, -2.9273454781964197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1580313903701227, 1);
  sqcRYGate(q, -1.4397894372327766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2272410942046004, 0);
  sqcRYGate(q, -1.3697729697338592, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2393791169387063, 0);
  sqcRYGate(q, 0.8846891878193723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4972285108713752, 2);
  sqcRYGate(q, -2.0266629753134633, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5091041625899613, 2);
  sqcRYGate(q, 0.28603746805543184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.02013514737940754, 0);
  sqcRYGate(q, -1.8836019737011034, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5408000812427693, 0);
  sqcRYGate(q, 1.8370560842543509, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.156550295428806, 1);
  sqcRYGate(q, 2.1003407511971943, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1342285899845308, 1);
  sqcRYGate(q, -2.596727539130573, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.08014708344551558, 0);
  sqcRYGate(q, 2.4144722234180476, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1206230015595233, 0);
  sqcRYGate(q, -1.9575329910832937, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.439616352670458, 1);
  sqcRYGate(q, 1.3513890462144553, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.852505891740416, 1);
  sqcRYGate(q, -1.678417094296595, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9819577913165718, 0);
  sqcRYGate(q, 2.277384357416083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0915631016654705, 0);
  sqcRYGate(q, 0.24058351495020255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2778792203316504, 2);
  sqcRYGate(q, 2.960215149765871, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7945212469139593, 2);
  sqcRYGate(q, 0.0655175007148749, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9498796145974051, 0);
  sqcRYGate(q, -1.1865719341428944, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8011426981786505, 0);
  sqcRYGate(q, -1.9403320139748432, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3102961165406946, 1);
  sqcRYGate(q, -1.184418238558207, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5265764515272942, 1);
  sqcRYGate(q, -0.5931610305490976, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.14066520140478267, 0);
  sqcRYGate(q, 0.905492673517464, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7773168347850268, 0);
  sqcRYGate(q, -1.7187352291125304, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8988746111219144, 1);
  sqcRYGate(q, -2.68498034423399, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3922329530825843, 1);
  sqcRYGate(q, 1.5621305159074825, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3853466560386225, 0);
  sqcRYGate(q, 2.6610117517308507, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4263976127056304, 0);
  sqcRYGate(q, -2.118238294661036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.086930648146199, 2);
  sqcRYGate(q, -2.9996993959208136, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1787090320205877, 2);
  sqcRYGate(q, -0.6687835019327987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8726603650784996, 0);
  sqcRYGate(q, -0.14257174087348776, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4895617006497748, 0);
  sqcRYGate(q, -2.85035397515767, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.209130522909807, 1);
  sqcRYGate(q, 0.28710855102134225, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9543086244115946, 1);
  sqcRYGate(q, 1.9858068162362033, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4787835781678444, 0);
  sqcRYGate(q, -1.3510586105171436, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3083637300113855, 0);
  sqcRYGate(q, -0.6347090106156045, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2960896197018426, 1);
  sqcRYGate(q, -1.134089267266205, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7433788643708517, 1);
  sqcRYGate(q, -1.1717414868400127, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6930712141333, 0);
  sqcRYGate(q, 2.706090414154819, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3239746247767348, 0);
  sqcRYGate(q, -0.8282118587588894, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.293273123662478, 2);
  sqcRYGate(q, -2.804042681448495, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8881671884828377, 2);
  sqcRYGate(q, -2.2961460809844496, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9993520250265053, 0);
  sqcRYGate(q, -2.8776679968315704, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6544055368432518, 0);
  sqcRYGate(q, -2.3972826377041785, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.808378396340377, 1);
  sqcRYGate(q, 2.836270679023739, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5643144449983453, 1);
  sqcRYGate(q, -2.643333023874566, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0407883315422115, 0);
  sqcRYGate(q, -1.7298660224256768, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3596585071430105, 0);
  sqcRYGate(q, 0.610250452140118, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.06261439632193877, 1);
  sqcRYGate(q, 1.6531898070657007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.10298684472903, 1);
  sqcRYGate(q, -0.503548154547385, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3311709252680037, 0);
  sqcRYGate(q, 2.2578410290893522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.024128611268824658, 0);
  sqcRYGate(q, -0.32285769572840106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9059208296585215, 2);
  sqcRYGate(q, -1.7706269309855953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0450910913511207, 2);
  sqcRYGate(q, 0.8974356642513893, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7987271797240985, 0);
  sqcRYGate(q, 2.9599198937013784, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8472500947334534, 0);
  sqcRYGate(q, 1.215359912189517, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.273886241757849, 1);
  sqcRYGate(q, -1.7784853240030218, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.955229890596592, 1);
  sqcRYGate(q, -1.2421806739249917, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5573267478931325, 0);
  sqcRYGate(q, 2.085655462572433, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.683949495033561, 0);
  sqcRYGate(q, 0.8494833323776153, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.746320317712047, 1);
  sqcRYGate(q, 2.421976539032516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7647294504251796, 1);
  sqcRYGate(q, 1.4183824666409839, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2864188455096244, 0);
  sqcRYGate(q, -2.721828376879266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.185946144842444, 0);
  sqcRYGate(q, -2.25645764248158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5272008774355779, 2);
  sqcRYGate(q, 0.8303740582315459, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.858089329664957, 2);
  sqcRYGate(q, -1.4696446315305263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3213486218968491, 0);
  sqcRYGate(q, 0.11874673193903384, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0318576417641974, 0);
  sqcRYGate(q, 0.6828277279725112, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4430146878758876, 1);
  sqcRYGate(q, -2.091347144314806, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.12797336812032434, 1);
  sqcRYGate(q, 0.7026430909373959, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0716200963018445, 0);
  sqcRYGate(q, -0.8748403745999743, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8355389293647184, 0);
  sqcRYGate(q, -0.7885192728023701, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.696574918160461, 1);
  sqcRYGate(q, 0.8159548846155977, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8721534823420863, 1);
  sqcRYGate(q, -0.4934970584569838, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.987119393914895, 0);
  sqcRYGate(q, -0.7627732666697132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4017842221141965, 0);
  sqcRYGate(q, -1.3137166701820435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07876367739220569, 2);
  sqcRYGate(q, 2.156686019682966, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9357249553710024, 2);
  sqcRYGate(q, 0.5732267593967902, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9242856265042382, 0);
  sqcRYGate(q, 0.8507877507347875, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.532990644503692, 0);
  sqcRYGate(q, 1.6007221361818247, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.517169024867455, 1);
  sqcRYGate(q, -2.443665314898054, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.93191687569339, 1);
  sqcRYGate(q, -1.9848286488688922, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.929630498848244, 0);
  sqcRYGate(q, -0.17423625356943884, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.22663591337865174, 0);
  sqcRYGate(q, 3.0114195649986018, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5839187485634385, 1);
  sqcRYGate(q, 1.2900086856283135, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0239305335450322, 1);
  sqcRYGate(q, 1.1814075668028163, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5551845454969806, 0);
  sqcRYGate(q, -1.228572972339102, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.29097130727836656, 0);
  sqcRYGate(q, 0.09381405086900063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.30304716275827825, 2);
  sqcRYGate(q, 1.7311228897166098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7204561891942944, 2);
  sqcRYGate(q, 2.1154328697053693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.225536665234454, 0);
  sqcRYGate(q, 2.016503493142083, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.776957461349695, 0);
  sqcRYGate(q, 0.23256876638467888, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.49825473536561077, 1);
  sqcRYGate(q, -2.860956946504476, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9434000544360694, 1);
  sqcRYGate(q, -2.063392653998352, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4189593327218282, 0);
  sqcRYGate(q, -0.45542795607821507, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.544577248133882, 0);
  sqcRYGate(q, 1.9561311920587323, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.134159377447911, 1);
  sqcRYGate(q, 0.1486993530029012, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.076301820505892, 1);
  sqcRYGate(q, 0.5321191768401917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4644333243169356, 0);
  sqcRYGate(q, -2.5097535836374862, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5563810399005771, 0);
  sqcRYGate(q, -0.06508512894734331, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7781822887736796, 2);
  sqcRYGate(q, 1.555667733263343, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.452881236511935, 2);
  sqcRYGate(q, -0.456486259311677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2306351768674046, 0);
  sqcRYGate(q, -0.4575277117017032, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3987847927560213, 0);
  sqcRYGate(q, -2.4318005694349645, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.11804966210645063, 1);
  sqcRYGate(q, -2.586452386275958, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4735844264790621, 1);
  sqcRYGate(q, -1.3594386469335804, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3674844796107277, 0);
  sqcRYGate(q, 1.4240422834960522, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.005979213403144, 0);
  sqcRYGate(q, -0.09173014444776939, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7751610698068578, 1);
  sqcRYGate(q, -2.695742625209832, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.601830490721759, 1);
  sqcRYGate(q, -0.41673276970911655, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.30929657386551324, 0);
  sqcRYGate(q, 0.2958589631335764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0773988373907355, 0);
  sqcRYGate(q, -0.8740757808786901, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0341163480666353, 2);
  sqcRYGate(q, 2.3621253891013607, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4484830924943612, 2);
  sqcRYGate(q, -3.0415315244912633, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.42949521238208277, 0);
  sqcRYGate(q, -0.8928092659678564, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.36615489045497607, 0);
  sqcRYGate(q, -1.4484781198984111, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6006846904990376, 1);
  sqcRYGate(q, 0.9944400879175541, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7733604367834594, 1);
  sqcRYGate(q, -3.137218298619971, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8559306285998413, 0);
  sqcRYGate(q, 1.344281141026082, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6082334266935967, 0);
  sqcRYGate(q, -0.07035790736549609, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4895935143496128, 1);
  sqcRYGate(q, 2.652671713967653, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7119320753906608, 1);
  sqcRYGate(q, 0.15479113942480272, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.28411997058024063, 0);
  sqcRYGate(q, 1.2673918848763588, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8100969968410797, 0);
  sqcRYGate(q, -0.0013393911607941789, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8199568351265281, 2);
  sqcRYGate(q, -3.031341917790688, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6779369027206106, 2);
  sqcRYGate(q, 0.5260265942085574, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.763420819471059, 0);
  sqcRYGate(q, 3.1144226934455648, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.979717971530719, 0);
  sqcRYGate(q, -2.264148658921094, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.673250878959962, 1);
  sqcRYGate(q, -3.1211362243757184, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8828325498930545, 1);
  sqcRYGate(q, 1.2871890849117822, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7948340493742965, 0);
  sqcRYGate(q, -0.03401607467416177, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.152855607821195, 0);
  sqcRYGate(q, 0.0011815579280085589, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8101360543087408, 1);
  sqcRYGate(q, -1.6766897081375305, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0289420852503897, 1);
  sqcRYGate(q, 2.6139562175320634, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.326214259912142, 0);
  sqcRYGate(q, 1.7439071106757789, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.087303567657983, 0);
  sqcRYGate(q, 1.1045221409537298, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9349679375912567, 2);
  sqcRYGate(q, 2.1743630812766552, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9776237241964117, 2);
  sqcRYGate(q, 1.8481178770546063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7896230370458275, 0);
  sqcRYGate(q, 0.7628476581109058, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5141150944454385, 0);
  sqcRYGate(q, 1.9700690799009875, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.504941514030361, 1);
  sqcRYGate(q, 2.6183297334083715, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.0584654667926392, 1);
  sqcRYGate(q, 0.35349097409230623, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5268903693238536, 0);
  sqcRYGate(q, 0.3921029246448544, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7712366748573456, 0);
  sqcRYGate(q, 2.8245743400257513, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.1416846907728777, 1);
  sqcRYGate(q, 0.7482673775343108, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.36144610764918816, 1);
  sqcRYGate(q, -2.9070945289985866, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.550138964636936, 0);
  sqcRYGate(q, -1.1604031159840398, 1);
  sqcRYGate(q, -1.7907948325012484, 2);
  sqcRYGate(q, 0.27771873542066583, 3);

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
