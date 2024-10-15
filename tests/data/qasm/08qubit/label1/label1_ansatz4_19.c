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

  sqcRYGate(q, 2.416672398549541, 0);
  sqcRZGate(q, 0.7800254284693032, 0);
  sqcRYGate(q, 2.6014104148737607, 1);
  sqcRZGate(q, -0.39010413669398447, 1);
  sqcRYGate(q, 2.7214674173442135, 2);
  sqcRZGate(q, 1.8741111440826224, 2);
  sqcRYGate(q, 0.5968627203046495, 3);
  sqcRZGate(q, 0.9490693803061083, 3);
  sqcRYGate(q, -2.8168610541451686, 4);
  sqcRZGate(q, 1.115012355247206, 4);
  sqcRYGate(q, 0.32276374792818435, 5);
  sqcRZGate(q, 2.5268857096507236, 5);
  sqcRYGate(q, 1.8848572532558796, 6);
  sqcRZGate(q, -1.8740233200698007, 6);
  sqcRYGate(q, 2.903288396682313, 7);
  sqcRZGate(q, -2.1662066393137214, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.730674419198211, 0);
  sqcRZGate(q, -0.44262615073086703, 0);
  sqcRYGate(q, 2.1174399499442345, 1);
  sqcRZGate(q, 2.5047088243537385, 1);
  sqcRYGate(q, -2.13504916284621, 2);
  sqcRZGate(q, 2.4104750045178336, 2);
  sqcRYGate(q, 2.0513413124619655, 3);
  sqcRZGate(q, 1.9295607607089311, 3);
  sqcRYGate(q, 1.38025099375439, 4);
  sqcRZGate(q, -0.7100170988942651, 4);
  sqcRYGate(q, -0.7728232576889633, 5);
  sqcRZGate(q, -1.0371046738727228, 5);
  sqcRYGate(q, -2.1723216588026437, 6);
  sqcRZGate(q, 2.5730480518721053, 6);
  sqcRYGate(q, -1.170068016385128, 7);
  sqcRZGate(q, -2.7093094116001937, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.4433982406596817, 0);
  sqcRZGate(q, 2.4884103900808, 0);
  sqcRYGate(q, 2.299913023109479, 1);
  sqcRZGate(q, 1.9631746495117408, 1);
  sqcRYGate(q, -0.08343971263321659, 2);
  sqcRZGate(q, -1.3203787845311412, 2);
  sqcRYGate(q, 0.6346775953479078, 3);
  sqcRZGate(q, 2.624636418866889, 3);
  sqcRYGate(q, -2.8467697269120475, 4);
  sqcRZGate(q, -1.1905524194511727, 4);
  sqcRYGate(q, -0.29303723683422594, 5);
  sqcRZGate(q, -2.8188631360683853, 5);
  sqcRYGate(q, -0.5581361484675647, 6);
  sqcRZGate(q, 0.23829022384151965, 6);
  sqcRYGate(q, -1.2083517654977287, 7);
  sqcRZGate(q, 1.5165154880402394, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.06920525341299, 0);
  sqcRZGate(q, 2.642623413860962, 0);
  sqcRYGate(q, -1.289893630302152, 1);
  sqcRZGate(q, 3.140918404719221, 1);
  sqcRYGate(q, -2.5523426404783836, 2);
  sqcRZGate(q, 1.045980114868669, 2);
  sqcRYGate(q, -3.004591545308222, 3);
  sqcRZGate(q, -0.7232104207386795, 3);
  sqcRYGate(q, 2.1710470054495676, 4);
  sqcRZGate(q, 2.822264806356143, 4);
  sqcRYGate(q, -2.4251653684946053, 5);
  sqcRZGate(q, -1.710814317292563, 5);
  sqcRYGate(q, -2.6334805084864534, 6);
  sqcRZGate(q, 1.3466026965331803, 6);
  sqcRYGate(q, 0.19434458801982588, 7);
  sqcRZGate(q, 2.4421225075213675, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.0870338262175587, 0);
  sqcRZGate(q, 1.7871752361589364, 0);
  sqcRYGate(q, -2.506167350693357, 1);
  sqcRZGate(q, -1.1715137273540064, 1);
  sqcRYGate(q, -2.8870269510014883, 2);
  sqcRZGate(q, -2.152091229096751, 2);
  sqcRYGate(q, -0.9909530424604887, 3);
  sqcRZGate(q, -0.5393071354816055, 3);
  sqcRYGate(q, 2.7511985005099167, 4);
  sqcRZGate(q, 1.3050352855590448, 4);
  sqcRYGate(q, -2.3255489121285886, 5);
  sqcRZGate(q, 0.7030778305435039, 5);
  sqcRYGate(q, 0.6035217496543975, 6);
  sqcRZGate(q, -0.8062791573746759, 6);
  sqcRYGate(q, 1.3925980798330304, 7);
  sqcRZGate(q, 1.639853580914868, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.1647576502141996, 0);
  sqcRZGate(q, 2.568974928557224, 0);
  sqcRYGate(q, -2.5458617130004915, 1);
  sqcRZGate(q, -2.708797435575031, 1);
  sqcRYGate(q, -2.648849568608184, 2);
  sqcRZGate(q, 0.3617778037331796, 2);
  sqcRYGate(q, -2.1544001413514655, 3);
  sqcRZGate(q, 0.15659975940431628, 3);
  sqcRYGate(q, 2.7101720157454094, 4);
  sqcRZGate(q, -2.1702507745193182, 4);
  sqcRYGate(q, -2.5949211582655805, 5);
  sqcRZGate(q, 0.501501358049211, 5);
  sqcRYGate(q, 3.071501054670598, 6);
  sqcRZGate(q, 1.9242806585860703, 6);
  sqcRYGate(q, -0.8472956724747324, 7);
  sqcRZGate(q, 1.8509367734400801, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.3163983249669113, 0);
  sqcRZGate(q, -2.790675992867789, 0);
  sqcRYGate(q, 1.9916140045362205, 1);
  sqcRZGate(q, -1.7823858276426783, 1);
  sqcRYGate(q, -2.884766233445853, 2);
  sqcRZGate(q, -2.529998765765896, 2);
  sqcRYGate(q, 2.840333693438421, 3);
  sqcRZGate(q, -0.019216493612185914, 3);
  sqcRYGate(q, -0.5463314141511066, 4);
  sqcRZGate(q, -0.925697289125112, 4);
  sqcRYGate(q, 2.450441560525745, 5);
  sqcRZGate(q, -2.9494819722732544, 5);
  sqcRYGate(q, 2.0265353110826263, 6);
  sqcRZGate(q, -0.8857132276217264, 6);
  sqcRYGate(q, 1.5236500167417557, 7);
  sqcRZGate(q, -2.2817340519848877, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.206885534891084, 0);
  sqcRZGate(q, 1.3018392223847606, 0);
  sqcRYGate(q, 2.916772294684243, 1);
  sqcRZGate(q, -1.7680642423915214, 1);
  sqcRYGate(q, -0.7887984022270169, 2);
  sqcRZGate(q, 1.579479310867179, 2);
  sqcRYGate(q, -2.3187163595914146, 3);
  sqcRZGate(q, 1.165844080953165, 3);
  sqcRYGate(q, -2.435641943909991, 4);
  sqcRZGate(q, -0.8961652538422054, 4);
  sqcRYGate(q, -1.8805414612543614, 5);
  sqcRZGate(q, 0.9537342905568734, 5);
  sqcRYGate(q, -0.9200942959986778, 6);
  sqcRZGate(q, -0.4521768719996846, 6);
  sqcRYGate(q, -1.2562807042790032, 7);
  sqcRZGate(q, -2.759723651216011, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5055899168158255, 0);
  sqcRZGate(q, 0.9071023943514545, 0);
  sqcRYGate(q, -1.2864670312718882, 1);
  sqcRZGate(q, -1.4139697919001097, 1);
  sqcRYGate(q, 1.4935133605443442, 2);
  sqcRZGate(q, 2.7179944354203958, 2);
  sqcRYGate(q, -2.1631920736889687, 3);
  sqcRZGate(q, 1.279959678979469, 3);
  sqcRYGate(q, 0.6564915306069192, 4);
  sqcRZGate(q, 3.001163610184476, 4);
  sqcRYGate(q, 0.9986710850949729, 5);
  sqcRZGate(q, -0.8162727841187788, 5);
  sqcRYGate(q, -1.959634448645125, 6);
  sqcRZGate(q, -2.489987854635792, 6);
  sqcRYGate(q, -0.7940436147784729, 7);
  sqcRZGate(q, -2.2912180322801827, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.19887799435080178, 0);
  sqcRZGate(q, -2.7789200574870407, 0);
  sqcRYGate(q, 2.2556481959941936, 1);
  sqcRZGate(q, 0.3731947600375347, 1);
  sqcRYGate(q, 0.39293477896605444, 2);
  sqcRZGate(q, -1.4177438282052996, 2);
  sqcRYGate(q, 2.765213308621408, 3);
  sqcRZGate(q, 2.6644792586036163, 3);
  sqcRYGate(q, -2.511539500882146, 4);
  sqcRZGate(q, -0.4830541933547181, 4);
  sqcRYGate(q, 2.64808071051957, 5);
  sqcRZGate(q, 1.4668403024434973, 5);
  sqcRYGate(q, 0.20942531806367154, 6);
  sqcRZGate(q, 1.947298326556684, 6);
  sqcRYGate(q, -2.9579318904463734, 7);
  sqcRZGate(q, -2.665878523983324, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.35217090729867806, 0);
  sqcRZGate(q, 0.05274959816490842, 0);
  sqcRYGate(q, -2.8282374436703863, 1);
  sqcRZGate(q, -0.015859989337706853, 1);
  sqcRYGate(q, -0.6876873490616102, 2);
  sqcRZGate(q, 2.372954931507534, 2);
  sqcRYGate(q, -1.3026635231036925, 3);
  sqcRZGate(q, -0.5952001121387313, 3);
  sqcRYGate(q, -0.4396835380416757, 4);
  sqcRZGate(q, -0.8637829740738782, 4);
  sqcRYGate(q, -0.8882522338544021, 5);
  sqcRZGate(q, 0.8192000501456871, 5);
  sqcRYGate(q, 1.4838657710464016, 6);
  sqcRZGate(q, 0.2151771126895365, 6);
  sqcRYGate(q, -0.5701677698944598, 7);
  sqcRZGate(q, -2.540318414815359, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.232308946702192, 0);
  sqcRZGate(q, 0.9315112563350593, 0);
  sqcRYGate(q, 2.1869475098757656, 1);
  sqcRZGate(q, 1.0491354515447113, 1);
  sqcRYGate(q, 2.5546763927673397, 2);
  sqcRZGate(q, 1.126782747362145, 2);
  sqcRYGate(q, -2.880796689245915, 3);
  sqcRZGate(q, 0.7553225472193159, 3);
  sqcRYGate(q, -0.4747267412511181, 4);
  sqcRZGate(q, -0.42363039609631026, 4);
  sqcRYGate(q, 3.1229879691526845, 5);
  sqcRZGate(q, 0.43705237385654877, 5);
  sqcRYGate(q, 2.229576607060851, 6);
  sqcRZGate(q, -1.806506347259445, 6);
  sqcRYGate(q, 1.7693535014784985, 7);
  sqcRZGate(q, 1.8804012266072494, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.8797799403570108, 0);
  sqcRZGate(q, 1.6068515928132092, 0);
  sqcRYGate(q, 0.9366421782415991, 1);
  sqcRZGate(q, -0.24690368488085151, 1);
  sqcRYGate(q, 1.497852407124941, 2);
  sqcRZGate(q, -2.46438965966299, 2);
  sqcRYGate(q, 1.7740083145099685, 3);
  sqcRZGate(q, -1.3454621334696126, 3);
  sqcRYGate(q, 1.1995925076471565, 4);
  sqcRZGate(q, 2.660277374211309, 4);
  sqcRYGate(q, 1.063750504572664, 5);
  sqcRZGate(q, 0.2190167020494814, 5);
  sqcRYGate(q, 2.2576223114407163, 6);
  sqcRZGate(q, 2.896881210680728, 6);
  sqcRYGate(q, 0.4807814817133954, 7);
  sqcRZGate(q, -0.2842462913295771, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1526643278020534, 0);
  sqcRZGate(q, -2.908060825500126, 0);
  sqcRYGate(q, -0.5703374395222857, 1);
  sqcRZGate(q, 0.3984801604110718, 1);
  sqcRYGate(q, -2.8771053747758164, 2);
  sqcRZGate(q, -0.05699575679548145, 2);
  sqcRYGate(q, -2.987443667276393, 3);
  sqcRZGate(q, -2.4820317161076906, 3);
  sqcRYGate(q, -1.1732697634221467, 4);
  sqcRZGate(q, -1.1685991410368495, 4);
  sqcRYGate(q, -2.7793893232788927, 5);
  sqcRZGate(q, -3.115623771166131, 5);
  sqcRYGate(q, 0.8917623084415676, 6);
  sqcRZGate(q, -1.6585009452715307, 6);
  sqcRYGate(q, -2.3691602124199314, 7);
  sqcRZGate(q, 1.0760942691730833, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.6553810538140854, 0);
  sqcRZGate(q, 1.731266951226961, 0);
  sqcRYGate(q, 0.7449053691110151, 1);
  sqcRZGate(q, 1.9685511455896103, 1);
  sqcRYGate(q, -0.3410275094571311, 2);
  sqcRZGate(q, -2.951107738063475, 2);
  sqcRYGate(q, -1.9246491616174932, 3);
  sqcRZGate(q, 1.3697712623571445, 3);
  sqcRYGate(q, 0.22328139013957404, 4);
  sqcRZGate(q, -1.7332646594735792, 4);
  sqcRYGate(q, -0.8481655408326515, 5);
  sqcRZGate(q, 2.5572978903015877, 5);
  sqcRYGate(q, -1.3085199167733013, 6);
  sqcRZGate(q, -0.8777829217675474, 6);
  sqcRYGate(q, 1.5074567940220744, 7);
  sqcRZGate(q, 1.4468508842147534, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.22316565554196366, 0);
  sqcRZGate(q, -1.298404360447754, 0);
  sqcRYGate(q, 0.23059217820085287, 1);
  sqcRZGate(q, -0.6723051425753209, 1);
  sqcRYGate(q, -1.6911141973687434, 2);
  sqcRZGate(q, 2.2446709348298706, 2);
  sqcRYGate(q, -1.3561224229196662, 3);
  sqcRZGate(q, -0.8189692325042355, 3);
  sqcRYGate(q, 1.0284478846399383, 4);
  sqcRZGate(q, 0.08776436234107736, 4);
  sqcRYGate(q, 1.5866202833792222, 5);
  sqcRZGate(q, -1.3576115555779504, 5);
  sqcRYGate(q, 1.0627231579737613, 6);
  sqcRZGate(q, -2.1296914271564975, 6);
  sqcRYGate(q, -0.4257946042795471, 7);
  sqcRZGate(q, 2.4643590918967644, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.3381864677493693, 0);
  sqcRZGate(q, -2.306648749686615, 0);
  sqcRYGate(q, 2.922675739659987, 1);
  sqcRZGate(q, -1.8856853450045907, 1);
  sqcRYGate(q, -0.6836947277225304, 2);
  sqcRZGate(q, 2.9851776784317026, 2);
  sqcRYGate(q, -2.954964326442908, 3);
  sqcRZGate(q, 0.7227080631400823, 3);
  sqcRYGate(q, -0.5818864616302655, 4);
  sqcRZGate(q, 2.018033220175573, 4);
  sqcRYGate(q, -0.4718180087878799, 5);
  sqcRZGate(q, -0.3385720643356977, 5);
  sqcRYGate(q, -1.4506609396319652, 6);
  sqcRZGate(q, -2.192816241612876, 6);
  sqcRYGate(q, 0.7483778528178044, 7);
  sqcRZGate(q, 1.4874064760595649, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.4925278270448086, 0);
  sqcRZGate(q, 1.2338117360221779, 0);
  sqcRYGate(q, -3.0060603857866606, 1);
  sqcRZGate(q, -1.8785414680689754, 1);
  sqcRYGate(q, 3.0966535662619314, 2);
  sqcRZGate(q, -2.715729005037114, 2);
  sqcRYGate(q, -0.38546059191112736, 3);
  sqcRZGate(q, -2.0693711816412375, 3);
  sqcRYGate(q, 0.4468528400638048, 4);
  sqcRZGate(q, -1.2625141620866425, 4);
  sqcRYGate(q, -2.7115746729792622, 5);
  sqcRZGate(q, -2.9887706626714485, 5);
  sqcRYGate(q, 1.9704810897433733, 6);
  sqcRZGate(q, -0.7339279387628982, 6);
  sqcRYGate(q, 0.7686436154349, 7);
  sqcRZGate(q, 2.894436636632302, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.7635847185805652, 0);
  sqcRZGate(q, 1.3860728217124736, 0);
  sqcRYGate(q, -2.8050183902802717, 1);
  sqcRZGate(q, 1.8269717956603901, 1);
  sqcRYGate(q, 0.7772123859320956, 2);
  sqcRZGate(q, 1.488940541029426, 2);
  sqcRYGate(q, 2.6529027490036614, 3);
  sqcRZGate(q, -3.0345737927383953, 3);
  sqcRYGate(q, 0.716957759058209, 4);
  sqcRZGate(q, -1.2343094425288008, 4);
  sqcRYGate(q, -2.0388127736921513, 5);
  sqcRZGate(q, 2.7250464326364043, 5);
  sqcRYGate(q, -0.16706044947299772, 6);
  sqcRZGate(q, -3.0889725925969937, 6);
  sqcRYGate(q, 1.6654913528499957, 7);
  sqcRZGate(q, 2.871723250215417, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.590707084431551, 0);
  sqcRZGate(q, -2.9190520260263466, 0);
  sqcRYGate(q, -2.006438157642201, 1);
  sqcRZGate(q, -0.07726361723450464, 1);
  sqcRYGate(q, 3.0362358836108774, 2);
  sqcRZGate(q, -1.156989441537581, 2);
  sqcRYGate(q, -0.2791925016165652, 3);
  sqcRZGate(q, 0.33475363343288933, 3);
  sqcRYGate(q, 1.9965924169841154, 4);
  sqcRZGate(q, 2.696676936822453, 4);
  sqcRYGate(q, -0.17663256318480236, 5);
  sqcRZGate(q, 1.7690868212268591, 5);
  sqcRYGate(q, -1.119093436962616, 6);
  sqcRZGate(q, -3.002379601543674, 6);
  sqcRYGate(q, -1.237738881109093, 7);
  sqcRZGate(q, -0.003443016054663981, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.730296296465057, 0);
  sqcRZGate(q, -0.005816099932196925, 0);
  sqcRYGate(q, 2.7722790442416265, 1);
  sqcRZGate(q, -1.5407851007074254, 1);
  sqcRYGate(q, 1.243457833661843, 2);
  sqcRZGate(q, 2.891833183302905, 2);
  sqcRYGate(q, -0.14066234037862957, 3);
  sqcRZGate(q, 1.423236304477114, 3);
  sqcRYGate(q, -1.8297360380082897, 4);
  sqcRZGate(q, -1.3489626640191825, 4);
  sqcRYGate(q, 2.3328271189983756, 5);
  sqcRZGate(q, -1.579844629148306, 5);
  sqcRYGate(q, 0.5489774539812506, 6);
  sqcRZGate(q, 2.247933666418772, 6);
  sqcRYGate(q, -0.9955752826607602, 7);
  sqcRZGate(q, -1.6083410053434406, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9277248426872093, 0);
  sqcRZGate(q, -0.3539129834739907, 0);
  sqcRYGate(q, -1.758362134853946, 1);
  sqcRZGate(q, 1.0294557805570905, 1);
  sqcRYGate(q, -2.550114588636207, 2);
  sqcRZGate(q, 2.9257446994565544, 2);
  sqcRYGate(q, -2.0353336232895023, 3);
  sqcRZGate(q, -1.7949425714046627, 3);
  sqcRYGate(q, 2.9277347296330105, 4);
  sqcRZGate(q, -1.8005804470949363, 4);
  sqcRYGate(q, 0.664556928695033, 5);
  sqcRZGate(q, -1.7315109907637245, 5);
  sqcRYGate(q, 0.9951781083419817, 6);
  sqcRZGate(q, 2.9555326576945045, 6);
  sqcRYGate(q, 2.473582580057767, 7);
  sqcRZGate(q, -1.0335376158463148, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.9213778115857507, 0);
  sqcRZGate(q, -1.2981912995810672, 0);
  sqcRYGate(q, 0.1713469980668867, 1);
  sqcRZGate(q, -1.851679446561997, 1);
  sqcRYGate(q, -0.6279836184544553, 2);
  sqcRZGate(q, -0.3885485670541575, 2);
  sqcRYGate(q, 1.1093931923598788, 3);
  sqcRZGate(q, -0.5946709708226257, 3);
  sqcRYGate(q, -1.8862202949614177, 4);
  sqcRZGate(q, -2.61508605520741, 4);
  sqcRYGate(q, -0.16497217543251352, 5);
  sqcRZGate(q, 1.1825162979152868, 5);
  sqcRYGate(q, -2.460970742194631, 6);
  sqcRZGate(q, -0.7991423034726585, 6);
  sqcRYGate(q, 0.14381615169158843, 7);
  sqcRZGate(q, 0.09496348265307922, 7);

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
