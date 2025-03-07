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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 1.9527467139809076, 0);
  sqcRYGate(q, -0.7492420563834843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8544170812302134, 0);
  sqcRYGate(q, -2.011653051831513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6267676941406397, 2);
  sqcRYGate(q, 2.963961197981527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4655849675824362, 2);
  sqcRYGate(q, -2.0223981146171726, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.489661497578248, 4);
  sqcRYGate(q, -0.9437987161666901, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.122111266889309, 4);
  sqcRYGate(q, 2.5816975258052057, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.47735713431387783, 6);
  sqcRYGate(q, 2.541622150107163, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.266030907435219, 6);
  sqcRYGate(q, -1.4325187523610303, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4395498374155636, 8);
  sqcRYGate(q, 1.1729101641760271, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.23134326248150483, 8);
  sqcRYGate(q, 1.3115416011908705, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.2423336704284995, 10);
  sqcRYGate(q, -1.6381266549657694, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4031094623643732, 10);
  sqcRYGate(q, -2.7150473487006357, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.6969332293703374, 12);
  sqcRYGate(q, 1.081625097540883, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.9178969558815262, 12);
  sqcRYGate(q, -1.9852066313631056, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.0258783901907744, 14);
  sqcRYGate(q, -2.6020558429948717, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.5812363123765842, 14);
  sqcRYGate(q, -1.2065037181700686, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.7357856860323075, 16);
  sqcRYGate(q, -1.1334941691663791, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.6966141743942167, 16);
  sqcRYGate(q, 0.2117519768811818, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.750662766987551, 18);
  sqcRYGate(q, -2.1428398361691134, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 3.0913178661516096, 18);
  sqcRYGate(q, -0.8105612536072133, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.9396511477817557, 1);
  sqcRYGate(q, 0.6472357819219716, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8040145178341263, 1);
  sqcRYGate(q, -2.6376593780032738, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8434455919246991, 3);
  sqcRYGate(q, -1.9259477970200738, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6626785910354255, 3);
  sqcRYGate(q, -0.17872940918945382, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4001869929576554, 5);
  sqcRYGate(q, -3.015534875553086, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9996298679518976, 5);
  sqcRYGate(q, -1.2146123513032565, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.268256985211083, 7);
  sqcRYGate(q, 2.878529039187839, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.5707623146794334, 7);
  sqcRYGate(q, 2.678241236188409, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.14871618859907, 9);
  sqcRYGate(q, -0.20103802237811585, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.9322859387889713, 9);
  sqcRYGate(q, -1.1075699736661881, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.39106064707231525, 11);
  sqcRYGate(q, -3.0630590677579796, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5511146681280352, 11);
  sqcRYGate(q, -1.5358093632260814, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.7322095104426415, 13);
  sqcRYGate(q, 0.4700803047613928, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5843408774667551, 13);
  sqcRYGate(q, 1.4721338863696207, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.20882258076481275, 15);
  sqcRYGate(q, -1.9075833566075584, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.26531933849773, 15);
  sqcRYGate(q, 2.4479794310646774, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.3524320743947085, 17);
  sqcRYGate(q, 1.2557142575842544, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.00400554469682479, 17);
  sqcRYGate(q, 0.022666561953087416, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.570879384262597, 0);
  sqcRYGate(q, -3.0413260071204062, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6157849108335078, 0);
  sqcRYGate(q, -1.210390488956965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.864501974933364, 2);
  sqcRYGate(q, -1.4466397376066533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5299248537162344, 2);
  sqcRYGate(q, -2.267109736405547, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0900811928005463, 4);
  sqcRYGate(q, -2.7412151604189963, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5598491510195038, 4);
  sqcRYGate(q, 1.5895310687450317, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.308269470686835, 6);
  sqcRYGate(q, 0.14427320582920436, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4050198689998519, 6);
  sqcRYGate(q, -0.03037620096370919, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.95235062949388, 8);
  sqcRYGate(q, 0.27413673100976954, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3657998102362336, 8);
  sqcRYGate(q, 1.7741974461608319, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.5614482870951982, 10);
  sqcRYGate(q, 2.0171100439472562, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2647986837438625, 10);
  sqcRYGate(q, 2.9755614337471656, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1251417834868116, 12);
  sqcRYGate(q, 1.128113115605382, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.0938768205876266, 12);
  sqcRYGate(q, 1.1873712174341942, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5041892442254534, 14);
  sqcRYGate(q, -2.882461756752177, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.6126344327076845, 14);
  sqcRYGate(q, -1.784240655817137, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.580320249529821, 16);
  sqcRYGate(q, 1.6726521770659541, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.2205322982491615, 16);
  sqcRYGate(q, 1.2681198063233152, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.332862618341511, 18);
  sqcRYGate(q, 1.2371374221622433, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.7416559399924262, 18);
  sqcRYGate(q, -3.137995943742146, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.2536624178913005, 1);
  sqcRYGate(q, -0.9426606755079963, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5942819262504297, 1);
  sqcRYGate(q, 1.063777570676276, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.715164223045543, 3);
  sqcRYGate(q, -2.0176547836205705, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.031432272499376517, 3);
  sqcRYGate(q, -1.1483447785640701, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9220598422357327, 5);
  sqcRYGate(q, 1.8903018148141923, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1976901049017492, 5);
  sqcRYGate(q, -0.922568403413627, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.883709388861859, 7);
  sqcRYGate(q, 0.5728083748956418, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.7340847631395633, 7);
  sqcRYGate(q, -0.5313895474860172, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.3982927580559634, 9);
  sqcRYGate(q, 2.6467272339788264, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.23431092744000015, 9);
  sqcRYGate(q, 1.7761032294200385, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.7651529160656525, 11);
  sqcRYGate(q, -1.6316798267323813, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.2090921332181699, 11);
  sqcRYGate(q, 0.003776228920174314, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.48088189625876143, 13);
  sqcRYGate(q, -0.31905039993741374, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.012837022518713, 13);
  sqcRYGate(q, -2.7844399561362896, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.005312678682835137, 15);
  sqcRYGate(q, 3.061379189641235, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.5595440579506978, 15);
  sqcRYGate(q, -0.11112134890990877, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.229141688566224, 17);
  sqcRYGate(q, -2.7015468864016867, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.2954199038391945, 17);
  sqcRYGate(q, 3.1113925321076077, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.2982194553303383, 0);
  sqcRYGate(q, 0.675507521845117, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8391698245148835, 0);
  sqcRYGate(q, -1.8453038638814467, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.008366950711067, 2);
  sqcRYGate(q, -2.188514207143954, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.007746033873405918, 2);
  sqcRYGate(q, -2.871424430625146, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.022594191935874582, 4);
  sqcRYGate(q, 2.79766616128831, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.25876173221031296, 4);
  sqcRYGate(q, -3.139823539276603, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7518699038072651, 6);
  sqcRYGate(q, 0.7559270657725855, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8442127163065285, 6);
  sqcRYGate(q, 0.658448413454029, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6021402483186591, 8);
  sqcRYGate(q, -2.432066441959026, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5259516588434372, 8);
  sqcRYGate(q, -1.573289783160985, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.19084966663594827, 10);
  sqcRYGate(q, -1.4635238921103606, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.85939697088964, 10);
  sqcRYGate(q, 0.29829803694436696, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5529946296497723, 12);
  sqcRYGate(q, -2.283614604675714, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.9400786776448307, 12);
  sqcRYGate(q, 1.3820062660488155, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.867303283228052, 14);
  sqcRYGate(q, 1.474699542994542, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.6367298620878827, 14);
  sqcRYGate(q, -1.5341862404930025, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5551645345872815, 16);
  sqcRYGate(q, -1.3644973534715374, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.050108838797124904, 16);
  sqcRYGate(q, -2.079513950960913, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.400559607574333, 18);
  sqcRYGate(q, 0.46387520123356474, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.1414607675204946, 18);
  sqcRYGate(q, 1.5811289031608968, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.61173627639623, 1);
  sqcRYGate(q, -1.844724433789418, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.722054819266714, 1);
  sqcRYGate(q, 1.3290841705192369, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.857266300429982, 3);
  sqcRYGate(q, 1.8699718589513417, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3787796002442612, 3);
  sqcRYGate(q, -0.9204078916400799, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6273379466501523, 5);
  sqcRYGate(q, -3.0082170310232645, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0953776309910026, 5);
  sqcRYGate(q, 2.856202007495744, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.676186377523117, 7);
  sqcRYGate(q, 2.536959260814765, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.07037013172403307, 7);
  sqcRYGate(q, -2.792487714338478, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5925991683591345, 9);
  sqcRYGate(q, 0.82991938835737, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5352012070243388, 9);
  sqcRYGate(q, 1.666002760133413, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.3655077842186243, 11);
  sqcRYGate(q, 2.8133030171123594, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5631858290303071, 11);
  sqcRYGate(q, 1.5728774743166871, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5882438924318876, 13);
  sqcRYGate(q, 0.12119294768818432, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.969449585727571, 13);
  sqcRYGate(q, -1.6420977572321718, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.6369828865088327, 15);
  sqcRYGate(q, 2.6355681881899558, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.12495952393867481, 15);
  sqcRYGate(q, -2.297458388998466, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.2734146358135483, 17);
  sqcRYGate(q, 1.1814374648741754, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.7848640644064249, 17);
  sqcRYGate(q, 2.4864114014702716, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.7944399452842221, 0);
  sqcRYGate(q, 0.3217554714603017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4140579185673063, 0);
  sqcRYGate(q, -0.9801760589536164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.01900458661761295, 2);
  sqcRYGate(q, -1.2703075106389337, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5247103172681973, 2);
  sqcRYGate(q, 3.0933761870633867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.808180341355529, 4);
  sqcRYGate(q, -0.6118001203133288, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0015408547476472023, 4);
  sqcRYGate(q, -2.9579001887357945, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.154423456442653, 6);
  sqcRYGate(q, 2.209003394490887, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3735638138846942, 6);
  sqcRYGate(q, -1.6189434882755709, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.16649862166727886, 8);
  sqcRYGate(q, 1.143702433074025, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.024944771242405572, 8);
  sqcRYGate(q, 1.1213954341197376, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6119991368798505, 10);
  sqcRYGate(q, -0.0073106724741030405, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.39330899668684516, 10);
  sqcRYGate(q, -3.140026459768219, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5553856940015418, 12);
  sqcRYGate(q, 0.27930087070454496, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.05021371957653908, 12);
  sqcRYGate(q, 1.2893276542981906, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.4188013572408749, 14);
  sqcRYGate(q, 0.31005019090326424, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.02958360659681247, 14);
  sqcRYGate(q, -2.811935365779726, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.065935782859296, 16);
  sqcRYGate(q, 1.4485345743925686, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.0041843368576186535, 16);
  sqcRYGate(q, -1.062354291972265, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.1669118361024429, 18);
  sqcRYGate(q, -0.30413001079314816, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.009565018688713, 18);
  sqcRYGate(q, 2.6212632598494445, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.4696228723019269, 1);
  sqcRYGate(q, 1.797633931123059, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5659892419705405, 1);
  sqcRYGate(q, 2.8923679226958248, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4931308133598737, 3);
  sqcRYGate(q, -2.9230933033449475, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9373144061259207, 3);
  sqcRYGate(q, -2.7296356761805898, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.09033982706316251, 5);
  sqcRYGate(q, 0.05685219719318348, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4708878258642395, 5);
  sqcRYGate(q, 1.599952453499819, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0466364084504732, 7);
  sqcRYGate(q, 1.738465693930836, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.009389522376818992, 7);
  sqcRYGate(q, -0.19634871190604056, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.12160845230185165, 9);
  sqcRYGate(q, -0.13017889128313428, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.8638090484435708, 9);
  sqcRYGate(q, -3.134436755701813, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.564796952214853, 11);
  sqcRYGate(q, 0.06155965653103391, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.947187979938485, 11);
  sqcRYGate(q, -1.590775207856859, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.3389164514914407, 13);
  sqcRYGate(q, 3.0922836187822713, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.086737419212139, 13);
  sqcRYGate(q, 1.458284463149468, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.3292845054905237, 15);
  sqcRYGate(q, 1.1418922373479665, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.04881704162598855, 15);
  sqcRYGate(q, -1.9870963735772058, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.4681752702254984, 17);
  sqcRYGate(q, 0.06593982169430301, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.8565208996028932, 17);
  sqcRYGate(q, -3.12496117359048, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.6734325457351522, 0);
  sqcRYGate(q, -2.231988276010145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4397786330079734, 0);
  sqcRYGate(q, -1.7127326774841807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6711148017201397, 2);
  sqcRYGate(q, 1.206629693510418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4845775652000026, 2);
  sqcRYGate(q, 0.6498537739474376, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0954984147287097, 4);
  sqcRYGate(q, -2.6686908173617803, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.122064229901774, 4);
  sqcRYGate(q, -2.093142350776323, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3024045932415638, 6);
  sqcRYGate(q, 2.9371222332075804, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.489039686462922, 6);
  sqcRYGate(q, -3.019505212531623, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.582725648656755, 8);
  sqcRYGate(q, 2.7136812360446805, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.056807315695562, 8);
  sqcRYGate(q, -1.7709928918709652, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.2725573623987545, 10);
  sqcRYGate(q, -1.5802611802870459, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8808205766992383, 10);
  sqcRYGate(q, 2.334291326151205, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6037250705258523, 12);
  sqcRYGate(q, 3.025847056227121, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.1240495179570735, 12);
  sqcRYGate(q, -1.7612284025507607, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.11583749617315676, 14);
  sqcRYGate(q, -1.593267446224325, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.9900328194126637, 14);
  sqcRYGate(q, -0.01148327519543634, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.025095771416817, 16);
  sqcRYGate(q, -1.6329828399374442, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.5583253682407685, 16);
  sqcRYGate(q, 0.9372651195918442, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.3369365224954555, 18);
  sqcRYGate(q, -1.186296293280311, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.2103960208842746, 18);
  sqcRYGate(q, -1.6521809935663345, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.546285853085297, 1);
  sqcRYGate(q, 2.0007456375238815, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5297518379552755, 1);
  sqcRYGate(q, 1.9673495044198037, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7522244270981793, 3);
  sqcRYGate(q, -0.2666683666464085, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8370558112588504, 3);
  sqcRYGate(q, 0.49951476944460893, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5462321014298226, 5);
  sqcRYGate(q, -1.2430518507095518, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8138433655939468, 5);
  sqcRYGate(q, 2.7643271611556077, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0058213538936083, 7);
  sqcRYGate(q, -1.757074017232223, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.015727083631917438, 7);
  sqcRYGate(q, -0.01466067929372894, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6518576579183994, 9);
  sqcRYGate(q, -1.2718598882261674, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9269720872197703, 9);
  sqcRYGate(q, 2.157328442411466, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.6376386782530414, 11);
  sqcRYGate(q, -2.8113269874878695, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.14461365792830438, 11);
  sqcRYGate(q, -0.0006525894722697602, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.10365730500794877, 13);
  sqcRYGate(q, 3.0987187725340886, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.1194130485460123, 13);
  sqcRYGate(q, 1.262011830802818, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.8582910095087555, 15);
  sqcRYGate(q, -1.6609138633498688, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.014227443488602276, 15);
  sqcRYGate(q, -1.2256476509197003, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.04986010239553158, 17);
  sqcRYGate(q, -1.4143378920740082, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -3.1261484633063397, 17);
  sqcRYGate(q, 0.2659533861909402, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.662321048140763, 0);
  sqcRYGate(q, 2.1215295499870823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9948371492698986, 0);
  sqcRYGate(q, 3.027022951072173, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.136903602321645, 2);
  sqcRYGate(q, 1.6259386087093963, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1145888418117136, 2);
  sqcRYGate(q, 0.3669515919480446, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.174895583900974, 4);
  sqcRYGate(q, 0.4950897218524984, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.007516383511222728, 4);
  sqcRYGate(q, -3.0927431874956057, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2134672458610198, 6);
  sqcRYGate(q, -0.8928250469026304, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9250479452939862, 6);
  sqcRYGate(q, -1.6844391025938907, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6263270317250913, 8);
  sqcRYGate(q, -1.7236360544621019, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.838011966861259, 8);
  sqcRYGate(q, 2.161607588694168, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5070397639622106, 10);
  sqcRYGate(q, 2.9134751771781375, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.694515756529318, 10);
  sqcRYGate(q, 2.256421379278203, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.7942732981470875, 12);
  sqcRYGate(q, -1.9861053118085228, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.0999073555868755, 12);
  sqcRYGate(q, -1.6395570956096328, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.3101447783729505, 14);
  sqcRYGate(q, 2.4452294162600996, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5407861569688253, 14);
  sqcRYGate(q, 3.1319632706409917, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.5646739465178023, 16);
  sqcRYGate(q, 1.6342080963295942, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.878280666001587, 16);
  sqcRYGate(q, -1.5719764940616456, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.7253104841752183, 18);
  sqcRYGate(q, -1.2094045199725345, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.9933306869011598, 18);
  sqcRYGate(q, 1.4771036557876231, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.9628524744840208, 1);
  sqcRYGate(q, -1.7219721584885637, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.507420114769153, 1);
  sqcRYGate(q, 2.804533217206037, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7447327957916183, 3);
  sqcRYGate(q, 0.32186949228074274, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.244978213864959, 3);
  sqcRYGate(q, 3.0080270482866363, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.685842607110887, 5);
  sqcRYGate(q, 0.6243365035414975, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2060255126034498, 5);
  sqcRYGate(q, 0.03572245157850328, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.280697391301846, 7);
  sqcRYGate(q, -0.47803157304074184, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.010913221379583464, 7);
  sqcRYGate(q, -0.030109596589685886, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.0009578282443015, 9);
  sqcRYGate(q, 1.4769698864557919, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6005630363151653, 9);
  sqcRYGate(q, -0.025156229063222568, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.7537164955600697, 11);
  sqcRYGate(q, 0.5877500510073892, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.0471318633932816, 11);
  sqcRYGate(q, 0.002289683091529551, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.16397282426976983, 13);
  sqcRYGate(q, 0.6458237113113965, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.7009716428965227, 13);
  sqcRYGate(q, -1.7050789695040631, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.024019006281618883, 15);
  sqcRYGate(q, -0.7603475514614784, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.5081389561484997, 15);
  sqcRYGate(q, -1.5442449481559004, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.611718024717308, 17);
  sqcRYGate(q, -0.05385151220133567, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.594212875214077, 17);
  sqcRYGate(q, -1.5714538586001563, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.4574920489478675, 0);
  sqcRYGate(q, -0.2048414214812235, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5925609799304048, 0);
  sqcRYGate(q, -2.0536499130003936, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5157242864639269, 2);
  sqcRYGate(q, -1.1699876972620589, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1363656592693774, 2);
  sqcRYGate(q, 1.1437996813684452, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.24167581638849978, 4);
  sqcRYGate(q, -0.30731942861817674, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.01817184207892495, 4);
  sqcRYGate(q, 1.2634137440935733, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6204488220596462, 6);
  sqcRYGate(q, 1.178459037632287, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1291845090532564, 6);
  sqcRYGate(q, 0.9708247697978528, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3786537672582852, 8);
  sqcRYGate(q, -2.2545692456366977, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5434416427289217, 8);
  sqcRYGate(q, 0.9925767213078069, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.728884663289217, 10);
  sqcRYGate(q, -2.807161603673058, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.063640115190177, 10);
  sqcRYGate(q, -2.980104813752981, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0216883124703369, 12);
  sqcRYGate(q, -0.7490274933906451, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.008135353967401393, 12);
  sqcRYGate(q, -0.041812515272612316, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.0286265566108637, 14);
  sqcRYGate(q, -1.2666939767388037, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.011563086518401988, 14);
  sqcRYGate(q, -3.1125222218572186, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.05203885823269674, 16);
  sqcRYGate(q, -2.4501485091630464, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.110868223000545, 16);
  sqcRYGate(q, -0.48626130158558367, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.003962155825741221, 18);
  sqcRYGate(q, 2.2552358501076206, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.5494512569047423, 18);
  sqcRYGate(q, -1.6998973104640038, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.4073982596852606, 1);
  sqcRYGate(q, 3.141240491050075, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5834354199712914, 1);
  sqcRYGate(q, 1.566424181643404, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3187005150694937, 3);
  sqcRYGate(q, 0.04208975766869802, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5850276793161213, 3);
  sqcRYGate(q, -1.5593473559209963, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.06352334203541, 5);
  sqcRYGate(q, -1.5662143518767078, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.450813531091853, 5);
  sqcRYGate(q, -0.021271162460132942, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5437462721564366, 7);
  sqcRYGate(q, -2.098447773990614, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.136004715172864, 7);
  sqcRYGate(q, 0.039114575316089785, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1129746259526163, 9);
  sqcRYGate(q, -2.998499846850677, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.478578901685576, 9);
  sqcRYGate(q, -1.600713669952115, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.25991534827994994, 11);
  sqcRYGate(q, 1.0029545377158238, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.104076581864425, 11);
  sqcRYGate(q, -3.115199331831756, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.4893754262118235, 13);
  sqcRYGate(q, -0.0021699946397779613, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5312513100939675, 13);
  sqcRYGate(q, 1.3491604621089666, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.6227854453079829, 15);
  sqcRYGate(q, -1.6788796107302495, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.7903457794964357, 15);
  sqcRYGate(q, -3.0966923805995656, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.8928402979311487, 17);
  sqcRYGate(q, -0.0010975319084750197, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.5886665564191218, 17);
  sqcRYGate(q, -1.563899357309119, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.2798580547047802, 0);
  sqcRYGate(q, -2.792255033807643, 1);
  sqcRYGate(q, -2.61303282954914, 2);
  sqcRYGate(q, -2.765929764342173, 3);
  sqcRYGate(q, 0.3866299596284447, 4);
  sqcRYGate(q, -1.646992042445608, 5);
  sqcRYGate(q, -2.1784941743095385, 6);
  sqcRYGate(q, -0.9517465323630434, 7);
  sqcRYGate(q, 1.1414489338464884, 8);
  sqcRYGate(q, 1.4394309900252402, 9);
  sqcRYGate(q, -2.870291277391196, 10);
  sqcRYGate(q, 2.3185333072598704, 11);
  sqcRYGate(q, 1.4480463172075773, 12);
  sqcRYGate(q, 0.25359934379713456, 13);
  sqcRYGate(q, -1.520286059219351, 14);
  sqcRYGate(q, -3.016492883816849, 15);
  sqcRYGate(q, -1.067235612383518, 16);
  sqcRYGate(q, 0.4273267182068299, 17);
  sqcRYGate(q, 0.5100459367235732, 18);
  sqcRYGate(q, 1.999254447232956, 19);

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
