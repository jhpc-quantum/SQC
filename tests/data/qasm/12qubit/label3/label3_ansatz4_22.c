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

  sqcRYGate(q, -1.5752810148819536, 0);
  sqcRZGate(q, -1.5374433538524113, 0);
  sqcRYGate(q, -3.096309536097065, 1);
  sqcRZGate(q, 0.8644515284911618, 1);
  sqcRYGate(q, -1.9388953531467785, 2);
  sqcRZGate(q, 2.3540175455003816, 2);
  sqcRYGate(q, -1.5391957248800325, 3);
  sqcRZGate(q, -0.5906148465011718, 3);
  sqcRYGate(q, -3.1397535911053027, 4);
  sqcRZGate(q, 0.1951668522915506, 4);
  sqcRYGate(q, 0.6046563275501882, 5);
  sqcRZGate(q, 2.773668212364683, 5);
  sqcRYGate(q, -0.01192910082011585, 6);
  sqcRZGate(q, 2.606040126790974, 6);
  sqcRYGate(q, -3.1201030270287835, 7);
  sqcRZGate(q, 2.7379121568943625, 7);
  sqcRYGate(q, 0.24999918971076784, 8);
  sqcRZGate(q, -3.077344226716261, 8);
  sqcRYGate(q, -0.11369386512161395, 9);
  sqcRZGate(q, -2.8545375186301385, 9);
  sqcRYGate(q, -1.360366846862637, 10);
  sqcRZGate(q, -2.6945955103195045, 10);
  sqcRYGate(q, 1.5428725425104266, 11);
  sqcRZGate(q, -1.4715400924036361, 11);
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
  sqcRYGate(q, -1.5329566229182885, 0);
  sqcRZGate(q, -2.7653492383766167, 0);
  sqcRYGate(q, 3.09388368676506, 1);
  sqcRZGate(q, -0.015805394826859335, 1);
  sqcRYGate(q, 3.1279873232532895, 2);
  sqcRZGate(q, 0.13327698357505852, 2);
  sqcRYGate(q, 0.009314974224120753, 3);
  sqcRZGate(q, -1.0296577892893275, 3);
  sqcRYGate(q, 3.1413029523369635, 4);
  sqcRZGate(q, -3.0370135048159494, 4);
  sqcRYGate(q, 3.137143473579297, 5);
  sqcRZGate(q, -0.07413312291412666, 5);
  sqcRYGate(q, -0.2067766101471724, 6);
  sqcRZGate(q, 0.30448095897808075, 6);
  sqcRYGate(q, -0.3316506757116411, 7);
  sqcRZGate(q, 0.8532715820498994, 7);
  sqcRYGate(q, 1.3149895811540695, 8);
  sqcRZGate(q, 0.3191013241510729, 8);
  sqcRYGate(q, 1.638937431951974, 9);
  sqcRZGate(q, -0.4385117821421334, 9);
  sqcRYGate(q, 1.494846699273843, 10);
  sqcRZGate(q, -1.9061995846698556, 10);
  sqcRYGate(q, -2.7753747361338843, 11);
  sqcRZGate(q, 1.5561634645585305, 11);
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
  sqcRYGate(q, -1.4699687538292068, 0);
  sqcRZGate(q, -0.1496761684794219, 0);
  sqcRYGate(q, 0.7728877557385317, 1);
  sqcRZGate(q, -1.7578839346898327, 1);
  sqcRYGate(q, 0.008127830534912839, 2);
  sqcRZGate(q, 0.31426798154743274, 2);
  sqcRYGate(q, 1.6472068153850021, 3);
  sqcRZGate(q, 1.5822392396433738, 3);
  sqcRYGate(q, -2.1131041923361238e-05, 4);
  sqcRZGate(q, -0.18716887797593887, 4);
  sqcRYGate(q, -0.03828868147803564, 5);
  sqcRZGate(q, -1.6746350599864823, 5);
  sqcRYGate(q, -0.025381979043261227, 6);
  sqcRZGate(q, -1.6294531396585725, 6);
  sqcRYGate(q, 0.018797175523995516, 7);
  sqcRZGate(q, 2.130149113173753, 7);
  sqcRYGate(q, 1.9361649837954797, 8);
  sqcRZGate(q, -2.692163873703054, 8);
  sqcRYGate(q, -0.6148044035038439, 9);
  sqcRZGate(q, -0.0875712664031619, 9);
  sqcRYGate(q, 1.6576044297955865, 10);
  sqcRZGate(q, 1.108846585338424, 10);
  sqcRYGate(q, 2.038869744005104, 11);
  sqcRZGate(q, 2.7417699801896016, 11);
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
  sqcRYGate(q, 2.3059397067297644, 0);
  sqcRZGate(q, 0.904409121583219, 0);
  sqcRYGate(q, -0.6623625790532747, 1);
  sqcRZGate(q, 2.550299809479782, 1);
  sqcRYGate(q, 2.8820975925899646, 2);
  sqcRZGate(q, 2.4099913650318676, 2);
  sqcRYGate(q, 0.25673377523410146, 3);
  sqcRZGate(q, 3.060581292938254, 3);
  sqcRYGate(q, 0.00259234440015188, 4);
  sqcRZGate(q, 0.6891430189464556, 4);
  sqcRYGate(q, -0.0997232357036108, 5);
  sqcRZGate(q, -0.6694936632272066, 5);
  sqcRYGate(q, 2.1717052246291546, 6);
  sqcRZGate(q, 2.0799011998308474, 6);
  sqcRYGate(q, -2.07723587592138, 7);
  sqcRZGate(q, 1.2529129790900189, 7);
  sqcRYGate(q, 1.7805684616631015, 8);
  sqcRZGate(q, 1.9594789809872788, 8);
  sqcRYGate(q, -2.007176559158943, 9);
  sqcRZGate(q, -1.9886792577888899, 9);
  sqcRYGate(q, 1.4614653362551893, 10);
  sqcRZGate(q, 2.2092800195074473, 10);
  sqcRYGate(q, 0.3443655567891595, 11);
  sqcRZGate(q, -2.2958167500865336, 11);
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
  sqcRYGate(q, 2.112939793340134, 0);
  sqcRZGate(q, 2.559798342649564, 0);
  sqcRYGate(q, 0.6717887376318847, 1);
  sqcRZGate(q, 0.9603574313255742, 1);
  sqcRYGate(q, 3.0254366879962187, 2);
  sqcRZGate(q, 0.4565549279962659, 2);
  sqcRYGate(q, 3.0068722924507636, 3);
  sqcRZGate(q, 0.33527375598520326, 3);
  sqcRYGate(q, 3.1413936353535328, 4);
  sqcRZGate(q, -2.57127010246639, 4);
  sqcRYGate(q, 0.012118724839510264, 5);
  sqcRZGate(q, -1.1923766931371265, 5);
  sqcRYGate(q, -0.03307238024422781, 6);
  sqcRZGate(q, -0.2370917402464796, 6);
  sqcRYGate(q, 3.064544152723533, 7);
  sqcRZGate(q, 0.5993894514534555, 7);
  sqcRYGate(q, -0.48834428573012545, 8);
  sqcRZGate(q, -2.8849615201300285, 8);
  sqcRYGate(q, -0.628679222446733, 9);
  sqcRZGate(q, -0.16213261576425886, 9);
  sqcRYGate(q, 1.5682289769703088, 10);
  sqcRZGate(q, -1.6623982986622305, 10);
  sqcRYGate(q, -1.2199404630865367, 11);
  sqcRZGate(q, -0.5167281791685506, 11);
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
  sqcRYGate(q, -1.937100508773081, 0);
  sqcRZGate(q, -0.5027389553995208, 0);
  sqcRYGate(q, -3.012370314985276, 1);
  sqcRZGate(q, 2.9842633188048064, 1);
  sqcRYGate(q, -1.5080199401000831, 2);
  sqcRZGate(q, 1.241994143403697, 2);
  sqcRYGate(q, -1.758066027552809, 3);
  sqcRZGate(q, 2.8393923499533, 3);
  sqcRYGate(q, -0.004532232168194206, 4);
  sqcRZGate(q, 1.8713837969173923, 4);
  sqcRYGate(q, -0.6435121534902447, 5);
  sqcRZGate(q, 1.1452378198088546, 5);
  sqcRYGate(q, -2.908321285549756, 6);
  sqcRZGate(q, 0.062225743374376925, 6);
  sqcRYGate(q, -1.9648650122561504, 7);
  sqcRZGate(q, -0.6968633321225459, 7);
  sqcRYGate(q, -1.3991936823129603, 8);
  sqcRZGate(q, 2.210899399113144, 8);
  sqcRYGate(q, -1.6745170037996562, 9);
  sqcRZGate(q, -2.250295169001748, 9);
  sqcRYGate(q, 1.980328089432363, 10);
  sqcRZGate(q, 2.3423561873960796, 10);
  sqcRYGate(q, -1.055978205280086, 11);
  sqcRZGate(q, 3.068918495000212, 11);
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
  sqcRYGate(q, 0.43632611017805184, 0);
  sqcRZGate(q, -2.329675243990161, 0);
  sqcRYGate(q, 1.0622432334902148, 1);
  sqcRZGate(q, -2.678102277718265, 1);
  sqcRYGate(q, 2.4314310544982454, 2);
  sqcRZGate(q, -0.3448628231758706, 2);
  sqcRYGate(q, 1.1081034069654345, 3);
  sqcRZGate(q, -0.3347490634541268, 3);
  sqcRYGate(q, 3.141552302951859, 4);
  sqcRZGate(q, 2.984604362053465, 4);
  sqcRYGate(q, 0.016549911096921832, 5);
  sqcRZGate(q, 1.945841499269585, 5);
  sqcRYGate(q, -1.6297291252638102, 6);
  sqcRZGate(q, -2.9408392527285856, 6);
  sqcRYGate(q, -1.7629554524540814, 7);
  sqcRZGate(q, -1.3221789091384701, 7);
  sqcRYGate(q, 1.5068829067894842, 8);
  sqcRZGate(q, 2.8662053449084053, 8);
  sqcRYGate(q, -1.473919645108887, 9);
  sqcRZGate(q, -2.7212338520974133, 9);
  sqcRYGate(q, -1.147140178192977, 10);
  sqcRZGate(q, 2.1404255633628835, 10);
  sqcRYGate(q, -0.12314137354525556, 11);
  sqcRZGate(q, 2.6599526590159686, 11);
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
  sqcRYGate(q, 2.4867443650044674, 0);
  sqcRZGate(q, -0.9476018691019401, 0);
  sqcRYGate(q, -2.3821954143302406, 1);
  sqcRZGate(q, -1.9819849134946887, 1);
  sqcRYGate(q, 1.1250002507346037, 2);
  sqcRZGate(q, 0.9977504031257992, 2);
  sqcRYGate(q, 2.715687727347779, 3);
  sqcRZGate(q, 2.1773844486366585, 3);
  sqcRYGate(q, 3.141582352342073, 4);
  sqcRZGate(q, -1.6539044566749124, 4);
  sqcRYGate(q, -0.0032973399791460523, 5);
  sqcRZGate(q, -0.6063931716830417, 5);
  sqcRYGate(q, -2.2752186925278863, 6);
  sqcRZGate(q, 0.8264345268463194, 6);
  sqcRYGate(q, 0.5358321203316381, 7);
  sqcRZGate(q, 0.2122023572317283, 7);
  sqcRYGate(q, 1.224735423179295, 8);
  sqcRZGate(q, -1.0967036402745876, 8);
  sqcRYGate(q, 1.1087140750496571, 9);
  sqcRZGate(q, 0.6090176440053449, 9);
  sqcRYGate(q, -1.6318298757937053, 10);
  sqcRZGate(q, -0.4312918978768172, 10);
  sqcRYGate(q, -2.354812647775937, 11);
  sqcRZGate(q, -1.3448803708154506, 11);
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
  sqcRYGate(q, -0.3549362382011571, 0);
  sqcRZGate(q, -1.4683337494869895, 0);
  sqcRYGate(q, 1.4908990984409547, 1);
  sqcRZGate(q, 0.7591725641217191, 1);
  sqcRYGate(q, 0.47007113475720796, 2);
  sqcRZGate(q, 3.086177564326997, 2);
  sqcRYGate(q, 2.9610425748336846, 3);
  sqcRZGate(q, 0.48822798342808105, 3);
  sqcRYGate(q, -1.5710137782588047, 4);
  sqcRZGate(q, 2.1867632490995423, 4);
  sqcRYGate(q, -1.5716342999086552, 5);
  sqcRZGate(q, -0.05948795998590235, 5);
  sqcRYGate(q, 2.5081017340749385, 6);
  sqcRZGate(q, 1.2026119887204583, 6);
  sqcRYGate(q, -0.7270262855310633, 7);
  sqcRZGate(q, 1.1477078785439616, 7);
  sqcRYGate(q, -3.01071133485821, 8);
  sqcRZGate(q, -1.5230122348603015, 8);
  sqcRYGate(q, 2.9961035417270807, 9);
  sqcRZGate(q, 1.0233578499259437, 9);
  sqcRYGate(q, 1.5200094079276534, 10);
  sqcRZGate(q, -1.296409165491476, 10);
  sqcRYGate(q, 1.8740303767958588, 11);
  sqcRZGate(q, -2.7534049285164226, 11);
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
  sqcRYGate(q, 3.0894054023962862, 0);
  sqcRZGate(q, 1.2060209476125519, 0);
  sqcRYGate(q, 2.6420922566640073, 1);
  sqcRZGate(q, -1.2518438956199514, 1);
  sqcRYGate(q, 3.141306127171945, 2);
  sqcRZGate(q, -1.563786831469265, 2);
  sqcRYGate(q, -0.0004747854341986332, 3);
  sqcRZGate(q, 1.614971116898901, 3);
  sqcRYGate(q, -3.134353654279436, 4);
  sqcRZGate(q, 0.5319861068368299, 4);
  sqcRYGate(q, 0.00398610762853302, 5);
  sqcRZGate(q, -1.512822141712201, 5);
  sqcRYGate(q, 1.5708958621117832, 6);
  sqcRZGate(q, -2.246561529791559, 6);
  sqcRYGate(q, 3.1412274407328202, 7);
  sqcRZGate(q, -0.5287395916099142, 7);
  sqcRYGate(q, -2.3452539787025626, 8);
  sqcRZGate(q, -2.295131294505074, 8);
  sqcRYGate(q, 0.751843920552427, 9);
  sqcRZGate(q, 2.39473588024144, 9);
  sqcRYGate(q, -1.6315573516848247, 10);
  sqcRZGate(q, -2.636267564009732, 10);
  sqcRYGate(q, 0.04796857154184593, 11);
  sqcRZGate(q, -3.1026168602779123, 11);
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
  sqcRYGate(q, -2.8151214505743893, 0);
  sqcRZGate(q, 2.0246343164184664, 0);
  sqcRYGate(q, 2.535646699630945, 1);
  sqcRZGate(q, 1.1960778301640607, 1);
  sqcRYGate(q, 2.1248209389282904, 2);
  sqcRZGate(q, 1.97963813149698, 2);
  sqcRYGate(q, -1.2223058251590149, 3);
  sqcRZGate(q, -0.05321937702843783, 3);
  sqcRYGate(q, -3.125770001725286, 4);
  sqcRZGate(q, 3.0554541105759103, 4);
  sqcRYGate(q, -1.5875708494736571, 5);
  sqcRZGate(q, -0.19814147337418309, 5);
  sqcRYGate(q, -0.0006336309029331133, 6);
  sqcRZGate(q, -2.461713019232914, 6);
  sqcRYGate(q, -1.5702321337621035, 7);
  sqcRZGate(q, -1.5715256847427401, 7);
  sqcRYGate(q, 0.001319741986006484, 8);
  sqcRZGate(q, 0.988925746589577, 8);
  sqcRYGate(q, -0.000548491621270093, 9);
  sqcRZGate(q, 2.4539288248457445, 9);
  sqcRYGate(q, -0.8743422826956007, 10);
  sqcRZGate(q, 1.4098010429950936, 10);
  sqcRYGate(q, -1.2522598259069133, 11);
  sqcRZGate(q, -1.2987700910129325, 11);
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
  sqcRYGate(q, 0.15461334783847658, 0);
  sqcRZGate(q, 1.7085945924735764, 0);
  sqcRYGate(q, -1.3254721569830132, 1);
  sqcRZGate(q, -1.377564201952413, 1);
  sqcRYGate(q, -1.5602529097206803, 2);
  sqcRZGate(q, -2.687082069095322, 2);
  sqcRYGate(q, 1.5719740826964097, 3);
  sqcRZGate(q, 1.7121549632471507, 3);
  sqcRYGate(q, -1.590992746966924, 4);
  sqcRZGate(q, 2.972646155930707, 4);
  sqcRYGate(q, 0.019801277230380793, 5);
  sqcRZGate(q, -0.1213927246638109, 5);
  sqcRYGate(q, 1.189469782353922, 6);
  sqcRZGate(q, 0.49463295676566416, 6);
  sqcRYGate(q, 1.5738638658218589, 7);
  sqcRZGate(q, 3.069295419170194, 7);
  sqcRYGate(q, -1.5704338159229927, 8);
  sqcRZGate(q, -1.571849816099624, 8);
  sqcRYGate(q, -1.56832560571187, 9);
  sqcRZGate(q, 1.56674573269762, 9);
  sqcRYGate(q, 0.5871979871548803, 10);
  sqcRZGate(q, 0.05298604145770547, 10);
  sqcRYGate(q, -0.41957978403343876, 11);
  sqcRZGate(q, -0.9851404885743951, 11);
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
  sqcRYGate(q, -0.4759514189423235, 0);
  sqcRZGate(q, 0.6255267267112992, 0);
  sqcRYGate(q, -1.6697067146906903, 1);
  sqcRZGate(q, -0.09642014227617411, 1);
  sqcRYGate(q, -3.0357600504390287, 2);
  sqcRZGate(q, 1.958271241314499, 2);
  sqcRYGate(q, 2.5879339158046375, 3);
  sqcRZGate(q, 0.4924724168238984, 3);
  sqcRYGate(q, -3.1389705723529056, 4);
  sqcRZGate(q, 2.9760477802369967, 4);
  sqcRYGate(q, 0.0002737251961795195, 5);
  sqcRZGate(q, -2.8219236948949695, 5);
  sqcRYGate(q, 3.1407719876778346, 6);
  sqcRZGate(q, 0.49887284103316637, 6);
  sqcRYGate(q, 3.139889306050474, 7);
  sqcRZGate(q, 2.5770191639052995, 7);
  sqcRYGate(q, 0.5584459245752891, 8);
  sqcRZGate(q, -3.1406417778946154, 8);
  sqcRYGate(q, -0.32178348365088816, 9);
  sqcRZGate(q, 0.002183341650112433, 9);
  sqcRYGate(q, 0.8969890610398057, 10);
  sqcRZGate(q, 0.2256056622499711, 10);
  sqcRYGate(q, 2.6713784721505744, 11);
  sqcRZGate(q, 2.428456488648463, 11);
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
  sqcRYGate(q, 3.1110225565887415, 0);
  sqcRZGate(q, -2.0218403463630876, 0);
  sqcRYGate(q, 0.14695696799480196, 1);
  sqcRZGate(q, -3.104254211831197, 1);
  sqcRYGate(q, -1.626884919652064, 2);
  sqcRZGate(q, 3.0245669901517713, 2);
  sqcRYGate(q, 2.4531241431767152, 3);
  sqcRZGate(q, -2.815246730151532, 3);
  sqcRYGate(q, -1.5467416413263029, 4);
  sqcRZGate(q, 1.4490637410596552, 4);
  sqcRYGate(q, -1.5691347420263435, 5);
  sqcRZGate(q, -1.5163219305494735, 5);
  sqcRYGate(q, 1.214927639629555, 6);
  sqcRZGate(q, -0.004270068975740198, 6);
  sqcRYGate(q, -1.5741425661798223, 7);
  sqcRZGate(q, 1.570534157428014, 7);
  sqcRYGate(q, -2.4144008245090824, 8);
  sqcRZGate(q, 1.5677558873506996, 8);
  sqcRYGate(q, -2.0930585932997916, 9);
  sqcRZGate(q, 2.0530698477386258, 9);
  sqcRYGate(q, 1.3789912245424956, 10);
  sqcRZGate(q, -1.9586385183053376, 10);
  sqcRYGate(q, 2.4446424609057176, 11);
  sqcRZGate(q, -0.6657701092812577, 11);
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
  sqcRYGate(q, -0.0026112223990575503, 0);
  sqcRZGate(q, 0.45829825921436024, 0);
  sqcRYGate(q, 1.7928280212631367, 1);
  sqcRZGate(q, 1.5658398071389499, 1);
  sqcRYGate(q, 1.0762065029422416, 2);
  sqcRZGate(q, -1.3986350798059917, 2);
  sqcRYGate(q, -1.539312257757542, 3);
  sqcRZGate(q, 1.5876344908119362, 3);
  sqcRYGate(q, -3.133340860787634, 4);
  sqcRZGate(q, 2.2840294751885324, 4);
  sqcRYGate(q, 0.016388309892874098, 5);
  sqcRZGate(q, -1.6272872638817355, 5);
  sqcRYGate(q, -1.5713332858787536, 6);
  sqcRZGate(q, 2.2527759011294393, 6);
  sqcRYGate(q, 1.5703845244591088, 7);
  sqcRZGate(q, -1.2617939893944339, 7);
  sqcRYGate(q, -2.3784421670352422, 8);
  sqcRZGate(q, -1.5798616275669437, 8);
  sqcRYGate(q, -0.015427773200379136, 9);
  sqcRZGate(q, -2.0501382039475633, 9);
  sqcRYGate(q, -1.2412257485847746, 10);
  sqcRZGate(q, 2.51281152918958, 10);
  sqcRYGate(q, -3.0482866830178907, 11);
  sqcRZGate(q, 0.28996288887802457, 11);
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
  sqcRYGate(q, 1.4655551658478903, 0);
  sqcRZGate(q, 1.5579970523318902, 0);
  sqcRYGate(q, 1.5838051111647973, 1);
  sqcRZGate(q, -0.6190599473660781, 1);
  sqcRYGate(q, -0.6062932412602837, 2);
  sqcRZGate(q, 1.563150968536179, 2);
  sqcRYGate(q, -2.868060930423115, 3);
  sqcRZGate(q, 0.964245185900146, 3);
  sqcRYGate(q, -3.1404178277189416, 4);
  sqcRZGate(q, 2.08219486085562, 4);
  sqcRYGate(q, -1.5690060943008335, 5);
  sqcRZGate(q, -3.046667334994356, 5);
  sqcRYGate(q, 3.1414489037985156, 6);
  sqcRZGate(q, -0.8895283942186909, 6);
  sqcRYGate(q, -3.1411740421872754, 7);
  sqcRZGate(q, -1.2616726074919946, 7);
  sqcRYGate(q, -2.78212192450075, 8);
  sqcRZGate(q, -2.938264675859794, 8);
  sqcRYGate(q, 0.36790554784781104, 9);
  sqcRZGate(q, -1.5707276367715937, 9);
  sqcRYGate(q, -2.600560830120079, 10);
  sqcRZGate(q, 1.3058381960028989, 10);
  sqcRYGate(q, 0.11868586438002993, 11);
  sqcRZGate(q, -2.2070410035248393, 11);
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
  sqcRYGate(q, -2.792076687369423, 0);
  sqcRZGate(q, 1.025404067129168, 0);
  sqcRYGate(q, 0.009061357224281688, 1);
  sqcRZGate(q, 2.6985478905962483, 1);
  sqcRYGate(q, 0.7964771426607651, 2);
  sqcRZGate(q, -0.9988797173161978, 2);
  sqcRYGate(q, -0.5038647989051546, 3);
  sqcRZGate(q, -1.3328060674520632, 3);
  sqcRYGate(q, 0.0009121734748736432, 4);
  sqcRZGate(q, -1.6494174704946658, 4);
  sqcRYGate(q, -0.0003834449598482062, 5);
  sqcRZGate(q, 2.951476570576591, 5);
  sqcRYGate(q, 1.5715576718681639, 6);
  sqcRZGate(q, 0.5332254870031335, 6);
  sqcRYGate(q, 1.5707948261931917, 7);
  sqcRZGate(q, -0.0004042871636064051, 7);
  sqcRYGate(q, 0.0015974584764411048, 8);
  sqcRZGate(q, -1.7769112201105788, 8);
  sqcRYGate(q, -0.9591855534057059, 9);
  sqcRZGate(q, -1.5748300201687249, 9);
  sqcRYGate(q, -1.2745820527317644, 10);
  sqcRZGate(q, 2.2889909263257735, 10);
  sqcRYGate(q, 1.4889863298610695, 11);
  sqcRZGate(q, 1.783717507649878, 11);
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
  sqcRYGate(q, 0.06103356188117011, 0);
  sqcRZGate(q, -1.039583988208664, 0);
  sqcRYGate(q, -0.008215776721924861, 1);
  sqcRZGate(q, -1.0063233741969904, 1);
  sqcRYGate(q, -0.6303828372929603, 2);
  sqcRZGate(q, 0.25964966855059046, 2);
  sqcRYGate(q, 0.318892301043537, 3);
  sqcRZGate(q, -1.7078169300607149, 3);
  sqcRYGate(q, -0.007420435509237322, 4);
  sqcRZGate(q, 1.974885151066672, 4);
  sqcRYGate(q, -3.141150162850823, 5);
  sqcRZGate(q, -1.6659418561664958, 5);
  sqcRYGate(q, 0.0002785639358319203, 6);
  sqcRZGate(q, 3.130684762045993, 6);
  sqcRYGate(q, -1.5707067524107297, 7);
  sqcRZGate(q, -1.3056141786136248, 7);
  sqcRYGate(q, -1.5707217502242, 8);
  sqcRZGate(q, -0.39470783889552263, 8);
  sqcRYGate(q, 1.2920929422326883, 9);
  sqcRZGate(q, -1.547560825898028, 9);
  sqcRYGate(q, 1.8734585543741114, 10);
  sqcRZGate(q, -3.054698109024627, 10);
  sqcRYGate(q, -2.5617509423240525, 11);
  sqcRZGate(q, -1.3072981616495465, 11);
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
  sqcRYGate(q, -1.5898105014788881, 0);
  sqcRZGate(q, 1.2766418992474167, 0);
  sqcRYGate(q, 3.141102052324015, 1);
  sqcRZGate(q, 1.8468497502064707, 1);
  sqcRYGate(q, 1.9299284569067634, 2);
  sqcRZGate(q, -1.5817376286936993, 2);
  sqcRYGate(q, 1.975743666042366, 3);
  sqcRZGate(q, 0.5138513162033324, 3);
  sqcRYGate(q, -1.567136162354384, 4);
  sqcRZGate(q, -2.1631445960491327, 4);
  sqcRYGate(q, -1.569539786402796, 5);
  sqcRZGate(q, -1.7857187047649905, 5);
  sqcRYGate(q, 5.9768994896458594e-05, 6);
  sqcRZGate(q, 1.0151616611434284, 6);
  sqcRYGate(q, -0.0005262222952224294, 7);
  sqcRZGate(q, 0.6678250423756936, 7);
  sqcRYGate(q, -1.5713190271535904, 8);
  sqcRZGate(q, -2.06661807290358, 8);
  sqcRYGate(q, -1.5707382288079776, 9);
  sqcRZGate(q, 1.5929196367803833, 9);
  sqcRYGate(q, -1.5706740088066067, 10);
  sqcRZGate(q, 0.027714284133961736, 10);
  sqcRYGate(q, 1.5712504862514765, 11);
  sqcRZGate(q, 1.5911892610322458, 11);
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
  sqcRYGate(q, 3.133089961391053, 0);
  sqcRZGate(q, -0.571641636944622, 0);
  sqcRYGate(q, -0.000425899825908182, 1);
  sqcRZGate(q, -2.4081626449527236, 1);
  sqcRYGate(q, 0.9380912427715185, 2);
  sqcRZGate(q, -1.9266079096604383, 2);
  sqcRYGate(q, 2.686985057506022, 3);
  sqcRZGate(q, -2.3125401939799612, 3);
  sqcRYGate(q, 3.1404980113468373, 4);
  sqcRZGate(q, 0.9781593360439738, 4);
  sqcRYGate(q, 0.0006910752226153503, 5);
  sqcRZGate(q, 1.7855998134381295, 5);
  sqcRYGate(q, -0.020884477852697383, 6);
  sqcRZGate(q, 0.07542913338853494, 6);
  sqcRYGate(q, 3.140916852481345, 7);
  sqcRZGate(q, 1.5319892954073078, 7);
  sqcRYGate(q, 3.1356885724586028, 8);
  sqcRZGate(q, 1.579018839821404, 8);
  sqcRYGate(q, -1.5597849437602047, 9);
  sqcRZGate(q, 0.7600260809173426, 9);
  sqcRYGate(q, 2.409716258731069, 10);
  sqcRZGate(q, 0.057303091038073184, 10);
  sqcRYGate(q, -3.1404382340854164, 11);
  sqcRZGate(q, -1.5401719607459343, 11);
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
  sqcRYGate(q, 3.0459412828140713, 0);
  sqcRZGate(q, -0.637684871452358, 0);
  sqcRYGate(q, 1.5785030671553502, 1);
  sqcRZGate(q, -0.00897466650242684, 1);
  sqcRYGate(q, 1.7456370186210104, 2);
  sqcRZGate(q, 0.9619931058067941, 2);
  sqcRYGate(q, -1.464589688613673, 3);
  sqcRZGate(q, -0.31638705094393327, 3);
  sqcRYGate(q, 1.5722699121953925, 4);
  sqcRZGate(q, 2.56457504470347, 4);
  sqcRYGate(q, 1.567652930082791, 5);
  sqcRZGate(q, 0.00010519036898648483, 5);
  sqcRYGate(q, -0.001274952319346973, 6);
  sqcRZGate(q, -0.9158564190220648, 6);
  sqcRYGate(q, 0.00014491958696893903, 7);
  sqcRZGate(q, 2.1151741959154835, 7);
  sqcRYGate(q, -3.140598967839973, 8);
  sqcRZGate(q, 0.5063955905695057, 8);
  sqcRYGate(q, -3.140932708624591, 9);
  sqcRZGate(q, -0.809805509958185, 9);
  sqcRYGate(q, 3.1235098614580745, 10);
  sqcRZGate(q, 0.06331936427038591, 10);
  sqcRYGate(q, -3.0436148416197826, 11);
  sqcRZGate(q, 0.011909076951686968, 11);
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
  sqcRYGate(q, 3.13520983951656, 0);
  sqcRZGate(q, 2.7761832092869096, 0);
  sqcRYGate(q, 1.5798230241353801, 1);
  sqcRZGate(q, -2.9028235900907293, 1);
  sqcRYGate(q, -1.5690776413390024, 2);
  sqcRZGate(q, -1.5620724382787643, 2);
  sqcRYGate(q, -3.1308042361795287, 3);
  sqcRZGate(q, 2.3764678735463747, 3);
  sqcRYGate(q, 0.00014439818784890595, 4);
  sqcRZGate(q, 2.0863361909619034, 4);
  sqcRYGate(q, 1.5701563652158, 5);
  sqcRZGate(q, -1.8111015355599864, 5);
  sqcRYGate(q, 0.0011953094700522721, 6);
  sqcRZGate(q, 3.0220950001920865, 6);
  sqcRYGate(q, 3.1412858888697732, 7);
  sqcRZGate(q, 1.49290902333186, 7);
  sqcRYGate(q, 1.567862911669895, 8);
  sqcRZGate(q, 1.6827378884349047, 8);
  sqcRYGate(q, 1.5482229731495867, 9);
  sqcRZGate(q, 0.013935897638043924, 9);
  sqcRYGate(q, -0.6125917657535715, 10);
  sqcRZGate(q, -0.031093747470260977, 10);
  sqcRYGate(q, 2.966625540343722, 11);
  sqcRZGate(q, 2.805445519497895, 11);
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
  sqcRYGate(q, -1.4986410682922324, 0);
  sqcRZGate(q, -3.016250648682301, 0);
  sqcRYGate(q, 3.0960465047093795, 1);
  sqcRZGate(q, 0.20396860628426014, 1);
  sqcRYGate(q, 1.570599806466217, 2);
  sqcRZGate(q, -0.795702898752177, 2);
  sqcRYGate(q, -1.5699483345845264, 3);
  sqcRZGate(q, 0.0004287919505987503, 3);
  sqcRYGate(q, -3.1408948636536413, 4);
  sqcRZGate(q, 0.8399160850494449, 4);
  sqcRYGate(q, 3.1393445795965134, 5);
  sqcRZGate(q, 0.6816616731563766, 5);
  sqcRYGate(q, -3.141255749251909, 6);
  sqcRZGate(q, 1.7630277406776411, 6);
  sqcRYGate(q, 3.1373170234650933, 7);
  sqcRZGate(q, 0.1542720456311256, 7);
  sqcRYGate(q, 1.5483079391735375, 8);
  sqcRZGate(q, 0.00012634878880161255, 8);
  sqcRYGate(q, -0.08947865716381997, 9);
  sqcRZGate(q, 1.3885525752394785, 9);
  sqcRYGate(q, 2.6040398605466235, 10);
  sqcRZGate(q, -2.460144581697366, 10);
  sqcRYGate(q, 3.132603435246866, 11);
  sqcRZGate(q, 2.6744410666116556, 11);
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
  sqcRYGate(q, -2.325810792266915, 0);
  sqcRZGate(q, 1.5689274322584326, 0);
  sqcRYGate(q, -0.19235252500231284, 1);
  sqcRZGate(q, 1.570902683785392, 1);
  sqcRYGate(q, -0.0005139220027699458, 2);
  sqcRZGate(q, -1.5893525688349506, 2);
  sqcRYGate(q, -1.5706423965485188, 3);
  sqcRZGate(q, -1.1021379021855138, 3);
  sqcRYGate(q, -3.0215111283909506, 4);
  sqcRZGate(q, 0.3884880623210267, 4);
  sqcRYGate(q, -1.4274668584827488, 5);
  sqcRZGate(q, -1.8140544842203605, 5);
  sqcRYGate(q, 0.3795616042427024, 6);
  sqcRZGate(q, 2.701624650623482, 6);
  sqcRYGate(q, -0.1792275501829991, 7);
  sqcRZGate(q, -2.4406295683925294, 7);
  sqcRYGate(q, -1.5724175564172613, 8);
  sqcRZGate(q, 3.117253229064173, 8);
  sqcRYGate(q, 0.001284836312457322, 9);
  sqcRZGate(q, -1.6780728549495316, 9);
  sqcRYGate(q, -1.310394063605535, 10);
  sqcRZGate(q, 0.3083151908236429, 10);
  sqcRYGate(q, 1.5586613997474448, 11);
  sqcRZGate(q, -0.051458457425050945, 11);
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
  sqcRYGate(q, -1.5704512430211084, 0);
  sqcRZGate(q, -2.3032817258990774, 0);
  sqcRYGate(q, 1.5706639280205505, 1);
  sqcRZGate(q, -1.1887718108348864, 1);
  sqcRYGate(q, 0.0010311068668569234, 2);
  sqcRZGate(q, 2.8782789932368633, 2);
  sqcRYGate(q, -0.0035075849526506886, 3);
  sqcRZGate(q, 2.7932849511709326, 3);
  sqcRYGate(q, -3.1413833623780065, 4);
  sqcRZGate(q, 1.8768961119685539, 4);
  sqcRYGate(q, -0.001070581926424426, 5);
  sqcRZGate(q, -2.51403109993844, 5);
  sqcRYGate(q, -9.237156853652615e-05, 6);
  sqcRZGate(q, -1.946828515035162, 6);
  sqcRYGate(q, -0.00021813431065317415, 7);
  sqcRZGate(q, 2.316708949054264, 7);
  sqcRYGate(q, 0.00027448708480282136, 8);
  sqcRZGate(q, 1.12828530218958, 8);
  sqcRYGate(q, -3.1407980082657345, 9);
  sqcRZGate(q, -2.1572922205576015, 9);
  sqcRYGate(q, 1.5706227187579902, 10);
  sqcRZGate(q, 2.269535264727504, 10);
  sqcRYGate(q, 1.57118627767235, 11);
  sqcRZGate(q, -1.7395258818348396, 11);
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
  sqcRYGate(q, 0.47687651938769693, 0);
  sqcRZGate(q, -1.2549548653420057, 0);
  sqcRYGate(q, 2.156432378474152, 1);
  sqcRZGate(q, 1.4313313382138102, 1);
  sqcRYGate(q, 0.3561419300008237, 2);
  sqcRZGate(q, -0.8788392471469368, 2);
  sqcRYGate(q, -1.887465985860034, 3);
  sqcRZGate(q, 2.7835640858257484, 3);
  sqcRYGate(q, 0.32342479821042147, 4);
  sqcRZGate(q, -1.2231938958284765, 4);
  sqcRYGate(q, 0.5328806843353924, 5);
  sqcRZGate(q, 0.9499815060011452, 5);
  sqcRYGate(q, 3.10264443093446, 6);
  sqcRZGate(q, -0.018573163427079823, 6);
  sqcRYGate(q, -1.5403211054394328, 7);
  sqcRZGate(q, 1.186064538843669, 7);
  sqcRYGate(q, -2.7912975168479086, 8);
  sqcRZGate(q, -0.8501260344582799, 8);
  sqcRYGate(q, -1.7180058069619113, 9);
  sqcRZGate(q, 1.1638519838486336, 9);
  sqcRYGate(q, -0.24213790678845104, 10);
  sqcRZGate(q, 2.0495460022734893, 10);
  sqcRYGate(q, 2.092392156923796, 11);
  sqcRZGate(q, 2.6506169819971888, 11);

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
