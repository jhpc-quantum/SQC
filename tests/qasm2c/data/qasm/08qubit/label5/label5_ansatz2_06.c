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

  sqcRYGate(q, 1.5708019260076238, 0);
  sqcRZGate(q, -7.936550300513543e-06, 0);
  sqcRYGate(q, 1.1262993333451519, 1);
  sqcRZGate(q, 2.4308632711439606, 1);
  sqcRYGate(q, -1.5708194470384234, 2);
  sqcRZGate(q, -2.1617303392800813, 2);
  sqcRYGate(q, -2.9776932693851823e-05, 3);
  sqcRZGate(q, 1.7720491406041508, 3);
  sqcRYGate(q, -1.5707988862371252, 4);
  sqcRZGate(q, 0.08930879389081703, 4);
  sqcRYGate(q, 0.6456983063308099, 5);
  sqcRZGate(q, 1.571046330766351, 5);
  sqcRYGate(q, -4.969292424991032e-05, 6);
  sqcRZGate(q, -1.6703732385772898, 6);
  sqcRYGate(q, -3.141534766572711, 7);
  sqcRZGate(q, 0.3155993649607761, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.7427806688849237, 0);
  sqcRZGate(q, 0.09275991766199188, 0);
  sqcRYGate(q, 3.141551211152163, 1);
  sqcRZGate(q, 0.8600324375514037, 1);
  sqcRYGate(q, -1.340079656115339, 2);
  sqcRZGate(q, 1.2422562883102621, 2);
  sqcRYGate(q, 1.8869401685606133e-07, 3);
  sqcRZGate(q, 1.2471074732619076, 3);
  sqcRYGate(q, -3.141219136270286, 4);
  sqcRZGate(q, -1.4830498560674699, 4);
  sqcRYGate(q, -1.5707880391088365, 5);
  sqcRZGate(q, 3.141565937939267, 5);
  sqcRYGate(q, -1.5708631148118628, 6);
  sqcRZGate(q, 1.0219207428437667, 6);
  sqcRYGate(q, 1.570801430420972, 7);
  sqcRZGate(q, -0.9700836632181955, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.7538831828421844e-06, 0);
  sqcRZGate(q, 3.0488366391299766, 0);
  sqcRYGate(q, 2.8511351013483335, 1);
  sqcRZGate(q, 1.5707499359293733, 1);
  sqcRYGate(q, 0.3858691918063778, 2);
  sqcRZGate(q, 3.1415713542405417, 2);
  sqcRYGate(q, -1.755929509350551e-05, 3);
  sqcRZGate(q, -2.908863404755712, 3);
  sqcRYGate(q, -3.07918121082953, 4);
  sqcRZGate(q, -0.001560509797623233, 4);
  sqcRYGate(q, 1.5708038759863268, 5);
  sqcRZGate(q, 5.854134818310326e-05, 5);
  sqcRYGate(q, -1.5707892921892999, 6);
  sqcRZGate(q, -1.407179489076302, 6);
  sqcRYGate(q, -1.1702238674082821e-05, 7);
  sqcRZGate(q, 1.2454752321150826, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.26792915705723175, 0);
  sqcRZGate(q, -1.9239729592995007, 0);
  sqcRYGate(q, 1.5712345296079482, 1);
  sqcRZGate(q, 0.505232197834518, 1);
  sqcRYGate(q, -2.5824795844897634, 2);
  sqcRZGate(q, -0.00010230825747643145, 2);
  sqcRYGate(q, 5.426652420642686e-06, 3);
  sqcRZGate(q, -2.8853375861326835, 3);
  sqcRYGate(q, 1.570783703053615, 4);
  sqcRZGate(q, -2.874185656520843, 4);
  sqcRYGate(q, 1.7101699528767813, 5);
  sqcRZGate(q, -2.182892761003612, 5);
  sqcRYGate(q, 0.0002600770404501517, 6);
  sqcRZGate(q, -1.7344180058544767, 6);
  sqcRYGate(q, 3.1415918842028248, 7);
  sqcRZGate(q, 2.3205304439724848, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 4.1455454330330516e-06, 0);
  sqcRZGate(q, -1.3502399226361472, 0);
  sqcRYGate(q, -3.141591498590607, 1);
  sqcRZGate(q, 2.076016109372277, 1);
  sqcRYGate(q, 1.5707821477529862, 2);
  sqcRZGate(q, 2.3283260095638076, 2);
  sqcRYGate(q, -3.1415923305783306, 3);
  sqcRZGate(q, 0.1818972936762746, 3);
  sqcRYGate(q, -1.5710235527644105, 4);
  sqcRZGate(q, -3.013297980110352, 4);
  sqcRYGate(q, 3.141569981898663, 5);
  sqcRZGate(q, 0.9586275938137304, 5);
  sqcRYGate(q, 1.5707987271851809, 6);
  sqcRZGate(q, 3.1415614771846583, 6);
  sqcRYGate(q, 3.1415874947809534, 7);
  sqcRZGate(q, 0.7101282573473959, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -5.301102401876281e-06, 0);
  sqcRZGate(q, -0.5196097532128072, 0);
  sqcRYGate(q, -1.9565233743862842, 1);
  sqcRZGate(q, -2.922173187029255, 1);
  sqcRYGate(q, -3.141563785563083, 2);
  sqcRZGate(q, -0.9341855553047483, 2);
  sqcRYGate(q, -1.570795492489391, 3);
  sqcRZGate(q, 2.073465811616556, 3);
  sqcRYGate(q, -3.1415907936862317, 4);
  sqcRZGate(q, -1.742776349719172, 4);
  sqcRYGate(q, 1.5708915925145277, 5);
  sqcRZGate(q, 1.305554992418051, 5);
  sqcRYGate(q, -1.5707526657564141, 6);
  sqcRZGate(q, -2.6661762961080453, 6);
  sqcRYGate(q, -0.7036335281626427, 7);
  sqcRZGate(q, -2.770004480751382, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 6.398273999508319e-08, 0);
  sqcRZGate(q, 2.3186441115620955, 0);
  sqcRYGate(q, -8.044416786034958e-07, 1);
  sqcRZGate(q, 1.351344583500104, 1);
  sqcRYGate(q, -3.1415916789502973, 2);
  sqcRZGate(q, 1.7745730260928434, 2);
  sqcRYGate(q, 0.00037698074931746817, 3);
  sqcRZGate(q, -0.5026611220242712, 3);
  sqcRYGate(q, -1.5707964279695508, 4);
  sqcRZGate(q, -3.141591819853863, 4);
  sqcRYGate(q, 1.5708034387702363, 5);
  sqcRZGate(q, -1.570874976593461, 5);
  sqcRYGate(q, 1.5707960684543503, 6);
  sqcRZGate(q, -3.141590506297852, 6);
  sqcRYGate(q, -4.421697303260779e-06, 7);
  sqcRZGate(q, -0.9084354684395174, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 4.780395768122503e-07, 0);
  sqcRZGate(q, 3.045965305771412, 0);
  sqcRYGate(q, -1.5707921290732614, 1);
  sqcRZGate(q, -1.5705510615857703, 1);
  sqcRYGate(q, -3.141590551339556, 2);
  sqcRZGate(q, 1.8954789972399206, 2);
  sqcRYGate(q, 1.5708291632403935, 3);
  sqcRZGate(q, -1.7104707941158832, 3);
  sqcRYGate(q, 0.6014832020012895, 4);
  sqcRZGate(q, 3.1415923637389445, 4);
  sqcRYGate(q, -1.570802483414477, 5);
  sqcRZGate(q, -1.4548413322532683, 5);
  sqcRYGate(q, 1.1216281605241498, 6);
  sqcRZGate(q, -9.222221217797255e-07, 6);
  sqcRYGate(q, -3.14158855125044, 7);
  sqcRZGate(q, -1.3550207650360053, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.9203267896591912, 0);
  sqcRZGate(q, 3.1415898151012187, 0);
  sqcRYGate(q, 0.12468559012321201, 1);
  sqcRZGate(q, -0.0002330219887678453, 1);
  sqcRYGate(q, 0.6683080248552331, 2);
  sqcRZGate(q, -3.1415924606596546, 2);
  sqcRYGate(q, 0.0005341247474276702, 3);
  sqcRZGate(q, -1.431354775106357, 3);
  sqcRYGate(q, -1.570793489359677, 4);
  sqcRZGate(q, 1.6351239715531802, 4);
  sqcRYGate(q, 1.5711520071485197, 5);
  sqcRZGate(q, -1.5708043321941871, 5);
  sqcRYGate(q, 1.5707962725780693, 6);
  sqcRZGate(q, -2.339959557108473, 6);
  sqcRYGate(q, 1.5707965012576677, 7);
  sqcRZGate(q, 1.5708049509360216, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5707962814122793, 0);
  sqcRZGate(q, -0.020593599498926522, 0);
  sqcRYGate(q, 1.570858458426764, 1);
  sqcRZGate(q, -1.5182260947338369, 1);
  sqcRYGate(q, -1.5707960145369597, 2);
  sqcRZGate(q, -1.591392522223349, 2);
  sqcRYGate(q, 1.570792591953414, 3);
  sqcRZGate(q, -1.5182417888197164, 3);
  sqcRYGate(q, 5.7308588247198137e-08, 4);
  sqcRZGate(q, 1.4858745338335906, 4);
  sqcRYGate(q, -1.5708052715505048, 5);
  sqcRZGate(q, -1.5182322803625456, 5);
  sqcRYGate(q, 3.3941405739312813e-06, 6);
  sqcRZGate(q, -2.3930248332559856, 6);
  sqcRYGate(q, 1.5707947154563255, 7);
  sqcRZGate(q, 0.05255781416511156, 7);

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
