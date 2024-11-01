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

  sqcRYGate(q, -0.002538723128544085, 0);
  sqcRZGate(q, 2.209905660891849, 0);
  sqcRYGate(q, -1.6753289184212738, 1);
  sqcRZGate(q, 0.29620066149513813, 1);
  sqcRYGate(q, 0.7808106064632234, 2);
  sqcRZGate(q, -0.9596005360226894, 2);
  sqcRYGate(q, 1.8966925495544311, 3);
  sqcRZGate(q, 1.1877952367676274, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.6707083910095974, 0);
  sqcRZGate(q, 2.131173909502333, 0);
  sqcRYGate(q, -1.826345452073686, 1);
  sqcRZGate(q, -0.27628779827286376, 1);
  sqcRYGate(q, 1.7870585121644729, 2);
  sqcRZGate(q, -0.04718702144442095, 2);
  sqcRYGate(q, 0.07028905216024396, 3);
  sqcRZGate(q, -1.6702322888469372, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.3316050356732507, 0);
  sqcRZGate(q, -0.4675731466131404, 0);
  sqcRYGate(q, -1.3508309456150884, 1);
  sqcRZGate(q, -0.09809828140874723, 1);
  sqcRYGate(q, 2.021095756558461, 2);
  sqcRZGate(q, -2.4605621043853834, 2);
  sqcRYGate(q, 2.768362628998132, 3);
  sqcRZGate(q, -1.7933629384871388, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.7195764389281942, 0);
  sqcRZGate(q, 0.6198194219240163, 0);
  sqcRYGate(q, -1.517801632361358, 1);
  sqcRZGate(q, 2.611464122898462, 1);
  sqcRYGate(q, 1.243919231025527, 2);
  sqcRZGate(q, -1.8879395207347553, 2);
  sqcRYGate(q, -2.9002650829311256, 3);
  sqcRZGate(q, -1.377366201837035, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.21652741813425092, 0);
  sqcRZGate(q, -2.8507248326194583, 0);
  sqcRYGate(q, 3.0724703016513426, 1);
  sqcRZGate(q, 0.7107916199728718, 1);
  sqcRYGate(q, 0.9166340200790017, 2);
  sqcRZGate(q, 0.7796060169573034, 2);
  sqcRYGate(q, -1.0976598103809894, 3);
  sqcRZGate(q, 2.98425499698339, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.0392462597528143, 0);
  sqcRZGate(q, 1.896204637405084, 0);
  sqcRYGate(q, 0.1729637831132509, 1);
  sqcRZGate(q, 1.361710414997379, 1);
  sqcRYGate(q, -0.48383146183729764, 2);
  sqcRZGate(q, -2.4527680121845763, 2);
  sqcRYGate(q, -1.3013030113780646, 3);
  sqcRZGate(q, -1.4025300655162578, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.2380497752936637, 0);
  sqcRZGate(q, 2.995465520783983, 0);
  sqcRYGate(q, -2.3503653675974423, 1);
  sqcRZGate(q, 0.6384206494684821, 1);
  sqcRYGate(q, -1.832381265764572, 2);
  sqcRZGate(q, -0.8958200027590258, 2);
  sqcRYGate(q, -2.180163272260037, 3);
  sqcRZGate(q, 0.3291239348413271, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4560092616971048, 0);
  sqcRZGate(q, -2.1487242675651297, 0);
  sqcRYGate(q, 2.6301046791266898, 1);
  sqcRZGate(q, -2.3491420003906556, 1);
  sqcRYGate(q, 1.8014486500404425, 2);
  sqcRZGate(q, -1.3696748155773033, 2);
  sqcRYGate(q, 2.3551480467655654, 3);
  sqcRZGate(q, -0.6811325961367082, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.18957640879667, 0);
  sqcRZGate(q, 3.1290810152674493, 0);
  sqcRYGate(q, -0.10536686997004008, 1);
  sqcRZGate(q, 2.728766551568565, 1);
  sqcRYGate(q, -0.18321367326814375, 2);
  sqcRZGate(q, -1.4477196717321363, 2);
  sqcRYGate(q, -1.2287387930954008, 3);
  sqcRZGate(q, 0.4422856007965539, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.310938470658563, 0);
  sqcRZGate(q, 1.4320136237547203, 0);
  sqcRYGate(q, -0.15842969161904094, 1);
  sqcRZGate(q, 2.601241026979795, 1);
  sqcRYGate(q, -0.1098373633670118, 2);
  sqcRZGate(q, -2.1730091661946336, 2);
  sqcRYGate(q, -1.1437183548559358, 3);
  sqcRZGate(q, -1.006894057917302, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.8131592154953156, 0);
  sqcRZGate(q, 0.16898081908068477, 0);
  sqcRYGate(q, 3.074270806747093, 1);
  sqcRZGate(q, -2.5962180271486304, 1);
  sqcRYGate(q, 0.3078920452102567, 2);
  sqcRZGate(q, 2.13120133458671, 2);
  sqcRYGate(q, -1.8033301921005618, 3);
  sqcRZGate(q, -1.4243107872494312, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.4748420849286297, 0);
  sqcRZGate(q, -0.891990290587656, 0);
  sqcRYGate(q, -0.11070306178658318, 1);
  sqcRZGate(q, -1.7484187876868622, 1);
  sqcRYGate(q, 3.0023513250307188, 2);
  sqcRZGate(q, 0.2847696133250883, 2);
  sqcRYGate(q, -3.1217458002854657, 3);
  sqcRZGate(q, -0.6859251091628372, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.9364528026057974, 0);
  sqcRZGate(q, -0.0629996799137142, 0);
  sqcRYGate(q, 0.8545717360332301, 1);
  sqcRZGate(q, 2.0553258214846473, 1);
  sqcRYGate(q, -1.8869935958168593, 2);
  sqcRZGate(q, -2.3230157571695806, 2);
  sqcRYGate(q, -2.253475075260698, 3);
  sqcRZGate(q, -2.4351622477335617, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.1447225905676377, 0);
  sqcRZGate(q, 2.637619410962108, 0);
  sqcRYGate(q, 1.6507232272846442, 1);
  sqcRZGate(q, -1.519274250701945, 1);
  sqcRYGate(q, 1.201810692681061, 2);
  sqcRZGate(q, 2.4517219195971625, 2);
  sqcRYGate(q, 2.5123837002924123, 3);
  sqcRZGate(q, -0.22398336912789765, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.14769917331688553, 0);
  sqcRZGate(q, 1.1474550876507914, 0);
  sqcRYGate(q, -2.2389792792486873, 1);
  sqcRZGate(q, 1.099598423013686, 1);
  sqcRYGate(q, 1.9041099855056816, 2);
  sqcRZGate(q, 1.9264295535724805, 2);
  sqcRYGate(q, 0.9881746042213883, 3);
  sqcRZGate(q, -1.0033099533203922, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8269301820603786, 0);
  sqcRZGate(q, 2.9498714260466348, 0);
  sqcRYGate(q, -2.037606354727919, 1);
  sqcRZGate(q, -0.009986654183651671, 1);
  sqcRYGate(q, -1.5350817833657275, 2);
  sqcRZGate(q, 0.5108382061136139, 2);
  sqcRYGate(q, 0.27185378532653726, 3);
  sqcRZGate(q, -0.790227691105411, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.283597292119233, 0);
  sqcRZGate(q, -2.7811204483383696, 0);
  sqcRYGate(q, -1.1967487041049019, 1);
  sqcRZGate(q, 2.460124767055397, 1);
  sqcRYGate(q, -2.882813476103404, 2);
  sqcRZGate(q, 1.493997039066902, 2);
  sqcRYGate(q, 1.0589806735012004, 3);
  sqcRZGate(q, 3.0117910621424993, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.8737013582262616, 0);
  sqcRZGate(q, 0.7583452925388865, 0);
  sqcRYGate(q, -1.0020260336476108, 1);
  sqcRZGate(q, -0.5091869871264371, 1);
  sqcRYGate(q, 0.7416880678554909, 2);
  sqcRZGate(q, 2.3099359091611746, 2);
  sqcRYGate(q, -0.23175843226431336, 3);
  sqcRZGate(q, -2.225262379867649, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.005987521604562, 0);
  sqcRZGate(q, 1.4448042356431947, 0);
  sqcRYGate(q, -0.3806900287026159, 1);
  sqcRZGate(q, 3.117993780927131, 1);
  sqcRYGate(q, -2.6427918197094464, 2);
  sqcRZGate(q, 0.11776285349406289, 2);
  sqcRYGate(q, -2.3469885640949526, 3);
  sqcRZGate(q, -2.1624117394604907, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.39409259282102854, 0);
  sqcRZGate(q, -1.2551103829696881, 0);
  sqcRYGate(q, 1.2018592012110243, 1);
  sqcRZGate(q, -0.5941668352507269, 1);
  sqcRYGate(q, 2.760793866892854, 2);
  sqcRZGate(q, 0.08576374124658552, 2);
  sqcRYGate(q, 1.3880548273998425, 3);
  sqcRZGate(q, 2.997287698231805, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.939440245441593, 0);
  sqcRZGate(q, -2.425872196559796, 0);
  sqcRYGate(q, 1.9528694885315157, 1);
  sqcRZGate(q, 0.1437931961605836, 1);
  sqcRYGate(q, -0.6662714238990628, 2);
  sqcRZGate(q, -0.7616478504295996, 2);
  sqcRYGate(q, 0.8439541308994292, 3);
  sqcRZGate(q, -0.979994154870548, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.4853284749435547, 0);
  sqcRZGate(q, 1.313884025157123, 0);
  sqcRYGate(q, 0.5106024580438671, 1);
  sqcRZGate(q, 2.2900629017605456, 1);
  sqcRYGate(q, 1.4413329805448722, 2);
  sqcRZGate(q, 3.005844925358181, 2);
  sqcRYGate(q, -0.1354144002387421, 3);
  sqcRZGate(q, -2.425019840476287, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.69246261648445, 0);
  sqcRZGate(q, -0.5140329416362772, 0);
  sqcRYGate(q, 1.919987090807416, 1);
  sqcRZGate(q, 3.109229709332424, 1);
  sqcRYGate(q, 0.691487386345405, 2);
  sqcRZGate(q, -2.027626878096794, 2);
  sqcRYGate(q, -2.4829132211035585, 3);
  sqcRZGate(q, 1.8684468495151583, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.281801716683973, 0);
  sqcRZGate(q, 2.3587592652681666, 0);
  sqcRYGate(q, -1.3389291612149057, 1);
  sqcRZGate(q, -2.8133396489565765, 1);
  sqcRYGate(q, 2.6350368258286343, 2);
  sqcRZGate(q, 0.6693169867364296, 2);
  sqcRYGate(q, 1.3470330227238758, 3);
  sqcRZGate(q, -2.3049355872543016, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.6071717727672663, 0);
  sqcRZGate(q, 0.8207562034683153, 0);
  sqcRYGate(q, -0.1362326860204055, 1);
  sqcRZGate(q, -2.60334445816314, 1);
  sqcRYGate(q, 1.8446514678080577, 2);
  sqcRZGate(q, 2.894567469541707, 2);
  sqcRYGate(q, -0.4910188116319105, 3);
  sqcRZGate(q, 2.6431763715067733, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.7118589258997308, 0);
  sqcRZGate(q, -2.8286226375557675, 0);
  sqcRYGate(q, 2.613747293834644, 1);
  sqcRZGate(q, 3.0534092183443815, 1);
  sqcRYGate(q, 2.5885095203848487, 2);
  sqcRZGate(q, 0.8885845878684968, 2);
  sqcRYGate(q, 2.7935673275001203, 3);
  sqcRZGate(q, -2.8251147420727714, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.4629026479402563, 0);
  sqcRZGate(q, 2.276252051764687, 0);
  sqcRYGate(q, -0.65029283397062, 1);
  sqcRZGate(q, 0.839940302323204, 1);
  sqcRYGate(q, -1.1544964311390329, 2);
  sqcRZGate(q, -2.1242258064147883, 2);
  sqcRYGate(q, -1.4299048056075678, 3);
  sqcRZGate(q, -2.936865531312942, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.649798634443676, 0);
  sqcRZGate(q, -1.0472943091430809, 0);
  sqcRYGate(q, -1.6936920846424306, 1);
  sqcRZGate(q, -0.29655840895730623, 1);
  sqcRYGate(q, 2.698010097254991, 2);
  sqcRZGate(q, 0.6339871083235691, 2);
  sqcRYGate(q, 0.6849690169185298, 3);
  sqcRZGate(q, 1.9172389993942498, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.047928416336007, 0);
  sqcRZGate(q, -0.6082018512850609, 0);
  sqcRYGate(q, 1.5949234198809021, 1);
  sqcRZGate(q, -0.45951682633612906, 1);
  sqcRYGate(q, -0.7644495888155489, 2);
  sqcRZGate(q, -0.8149254590405314, 2);
  sqcRYGate(q, 1.032924170589119, 3);
  sqcRZGate(q, 2.8643586622233848, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.021691745896641024, 0);
  sqcRZGate(q, -0.36336916430107363, 0);
  sqcRYGate(q, -1.640200385498595, 1);
  sqcRZGate(q, 1.9568189619865635, 1);
  sqcRYGate(q, 0.218568772606913, 2);
  sqcRZGate(q, -0.937953943156968, 2);
  sqcRYGate(q, 2.4103900120883903, 3);
  sqcRZGate(q, 0.24471301983646887, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2590893798290632, 0);
  sqcRZGate(q, -1.2340505792893113, 0);
  sqcRYGate(q, 0.0008609820533340695, 1);
  sqcRZGate(q, 2.318220705705565, 1);
  sqcRYGate(q, -2.8943011757680575, 2);
  sqcRZGate(q, 0.40875676108803116, 2);
  sqcRYGate(q, 0.5098647967266041, 3);
  sqcRZGate(q, -1.3227959131031246, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.17251455050642228, 0);
  sqcRZGate(q, -2.8090069590618394, 0);
  sqcRYGate(q, 1.8464338471421469, 1);
  sqcRZGate(q, -2.0522593275562073, 1);
  sqcRYGate(q, -2.2378910449504454, 2);
  sqcRZGate(q, -0.4280225652465326, 2);
  sqcRYGate(q, -0.3290912326367268, 3);
  sqcRZGate(q, 0.37851534575426843, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.6270765201767743, 0);
  sqcRZGate(q, -1.0068370220698277, 0);
  sqcRYGate(q, 1.6605433709509612, 1);
  sqcRZGate(q, -2.417832843610288, 1);
  sqcRYGate(q, -0.8217123753999861, 2);
  sqcRZGate(q, -0.770956137054908, 2);
  sqcRYGate(q, 0.04573172791897399, 3);
  sqcRZGate(q, 0.14043608000796762, 3);

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
