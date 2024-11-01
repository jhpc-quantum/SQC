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

  sqcRYGate(q, -0.2505031209138595, 0);
  sqcRZGate(q, -0.9441368430956523, 0);
  sqcRYGate(q, -1.537372521247482, 1);
  sqcRZGate(q, 0.010406351734988587, 1);
  sqcRYGate(q, 0.007598733616607234, 2);
  sqcRZGate(q, -3.0743113513526876, 2);
  sqcRYGate(q, -3.1332925385948514, 3);
  sqcRZGate(q, 1.0936192406258596, 3);
  sqcRYGate(q, 2.5750943043178482, 4);
  sqcRZGate(q, 1.9912451541118081, 4);
  sqcRYGate(q, 1.457082269074535, 5);
  sqcRZGate(q, -2.8182100527582246, 5);
  sqcRYGate(q, -2.8790909939811935, 6);
  sqcRZGate(q, -2.5391890347966752, 6);
  sqcRYGate(q, -1.728449859448375, 7);
  sqcRZGate(q, 1.3182972219512195, 7);
  sqcRYGate(q, 3.139325182502782, 8);
  sqcRZGate(q, 2.046198335447256, 8);
  sqcRYGate(q, -1.567266824134242, 9);
  sqcRZGate(q, 1.5738068273784709, 9);
  sqcRYGate(q, 3.1404840875173, 10);
  sqcRZGate(q, -1.3735994126318014, 10);
  sqcRYGate(q, -3.135189325509238, 11);
  sqcRZGate(q, 0.10907656952894394, 11);
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
  sqcRYGate(q, -0.002835120471773145, 0);
  sqcRZGate(q, -1.3943146889920905, 0);
  sqcRYGate(q, 1.670807553341905, 1);
  sqcRZGate(q, 1.169147445888754, 1);
  sqcRYGate(q, -1.573652743859605, 2);
  sqcRZGate(q, 2.4512595780579063, 2);
  sqcRYGate(q, -1.5263743058990338, 3);
  sqcRZGate(q, -1.8133052933200617, 3);
  sqcRYGate(q, -3.141477074561529, 4);
  sqcRZGate(q, 0.6905646411389093, 4);
  sqcRYGate(q, 3.138152334499273, 5);
  sqcRZGate(q, -2.0157185685542878, 5);
  sqcRYGate(q, -3.14076790819019, 6);
  sqcRZGate(q, 1.7805060637397299, 6);
  sqcRYGate(q, -3.1404528501141633, 7);
  sqcRZGate(q, -0.2495556130914585, 7);
  sqcRYGate(q, 3.112443735574125, 8);
  sqcRZGate(q, 0.07222390453535736, 8);
  sqcRYGate(q, 1.54503225754219, 9);
  sqcRZGate(q, 0.1871900876875947, 9);
  sqcRYGate(q, 1.376034874031883, 10);
  sqcRZGate(q, 1.8972828671778295, 10);
  sqcRYGate(q, 0.7392116339408988, 11);
  sqcRZGate(q, 2.7529424974621852, 11);
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
  sqcRYGate(q, 0.00785576678100508, 0);
  sqcRZGate(q, 1.4856174560802442, 0);
  sqcRYGate(q, -3.1331889649848734, 1);
  sqcRZGate(q, -0.7797173169206149, 1);
  sqcRYGate(q, 0.0024761936390698125, 2);
  sqcRZGate(q, 2.3596802615670924, 2);
  sqcRYGate(q, -1.540735959585943, 3);
  sqcRZGate(q, 0.05542918523688911, 3);
  sqcRYGate(q, -0.012266325131438884, 4);
  sqcRZGate(q, -0.3016157232558215, 4);
  sqcRYGate(q, 3.078858247299409, 5);
  sqcRZGate(q, 2.369129735463136, 5);
  sqcRYGate(q, -0.07291502772218277, 6);
  sqcRZGate(q, -2.2591449171631437, 6);
  sqcRYGate(q, -1.6605179037466022, 7);
  sqcRZGate(q, -2.554400561717001, 7);
  sqcRYGate(q, -0.008682726687698948, 8);
  sqcRZGate(q, -1.7784581745859056, 8);
  sqcRYGate(q, -3.135874706189316, 9);
  sqcRZGate(q, -2.853854766414994, 9);
  sqcRYGate(q, 0.017789506233782507, 10);
  sqcRZGate(q, 3.057991550775117, 10);
  sqcRYGate(q, 3.080065661206623, 11);
  sqcRZGate(q, -0.003468346303000477, 11);
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
  sqcRYGate(q, -0.0036528730216147665, 0);
  sqcRZGate(q, -2.582802120395353, 0);
  sqcRYGate(q, -3.126641133562041, 1);
  sqcRZGate(q, 2.839393204125603, 1);
  sqcRYGate(q, 0.3396374706978227, 2);
  sqcRZGate(q, 1.4697659857243623, 2);
  sqcRYGate(q, -2.4819358137022123, 3);
  sqcRZGate(q, 2.5070061186947643, 3);
  sqcRYGate(q, -3.025557966759346, 4);
  sqcRZGate(q, -0.10864468910468815, 4);
  sqcRYGate(q, -3.1153473176827653, 5);
  sqcRZGate(q, 3.10712925685426, 5);
  sqcRYGate(q, -3.1403930695819966, 6);
  sqcRZGate(q, 2.2723604136523696, 6);
  sqcRYGate(q, 0.0011416600404237087, 7);
  sqcRZGate(q, 1.1280263534682173, 7);
  sqcRYGate(q, -1.6283977466580177, 8);
  sqcRZGate(q, 0.00977728097115893, 8);
  sqcRYGate(q, -0.27869405473572506, 9);
  sqcRZGate(q, -2.762642650556693, 9);
  sqcRYGate(q, -2.600006699845707, 10);
  sqcRZGate(q, -1.5620868378653086, 10);
  sqcRYGate(q, 2.778009711528938, 11);
  sqcRZGate(q, -3.0426556481884344, 11);
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
  sqcRYGate(q, -3.1413423196179107, 0);
  sqcRZGate(q, 1.280388827363633, 0);
  sqcRYGate(q, -0.05178833220323131, 1);
  sqcRZGate(q, 0.7007811849922072, 1);
  sqcRYGate(q, -1.534582799522248, 2);
  sqcRZGate(q, -2.878214520412545, 2);
  sqcRYGate(q, 3.1271273007382407, 3);
  sqcRZGate(q, -2.2246861174449206, 3);
  sqcRYGate(q, 1.6358102957062646, 4);
  sqcRZGate(q, -1.5750422736676766, 4);
  sqcRYGate(q, 1.648485497500944, 5);
  sqcRZGate(q, 3.117108816348379, 5);
  sqcRYGate(q, 3.133539027034493, 6);
  sqcRZGate(q, 0.04675240434616827, 6);
  sqcRYGate(q, -0.0027185841358736695, 7);
  sqcRZGate(q, 0.1298958693041099, 7);
  sqcRYGate(q, 0.23554548497673533, 8);
  sqcRZGate(q, 2.503841380960905, 8);
  sqcRYGate(q, -3.118757401560923, 9);
  sqcRZGate(q, 2.1983496795804265, 9);
  sqcRYGate(q, 3.1002539876617625, 10);
  sqcRZGate(q, -2.9697069344923688, 10);
  sqcRYGate(q, -0.8058816429967228, 11);
  sqcRZGate(q, 1.709798683779404, 11);
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
  sqcRYGate(q, -3.1379470093424766, 0);
  sqcRZGate(q, -1.6859145007245577, 0);
  sqcRYGate(q, 0.011617294526771182, 1);
  sqcRZGate(q, -0.46265741952070266, 1);
  sqcRYGate(q, -0.008099108745346584, 2);
  sqcRZGate(q, -1.7508015565058253, 2);
  sqcRYGate(q, -3.109363517577139, 3);
  sqcRZGate(q, 1.9453939838437027, 3);
  sqcRYGate(q, 1.575083228240188, 4);
  sqcRZGate(q, 0.08704989031105194, 4);
  sqcRYGate(q, 1.5812613826312407, 5);
  sqcRZGate(q, 2.1911867752158845, 5);
  sqcRYGate(q, 0.06628381396846184, 6);
  sqcRZGate(q, -1.3085255934251006, 6);
  sqcRYGate(q, -3.1327750718228713, 7);
  sqcRZGate(q, -1.973528078998315, 7);
  sqcRYGate(q, -3.0389170604355327, 8);
  sqcRZGate(q, 1.3516197452584597, 8);
  sqcRYGate(q, 0.018997991349871877, 9);
  sqcRZGate(q, -1.71430399500173, 9);
  sqcRYGate(q, -2.8838462580169697, 10);
  sqcRZGate(q, 0.4723847458801043, 10);
  sqcRYGate(q, -2.3210519366736446, 11);
  sqcRZGate(q, -1.3646521906011468, 11);
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
  sqcRYGate(q, -0.0018768673825810822, 0);
  sqcRZGate(q, 1.992733455073358, 0);
  sqcRYGate(q, 0.027909739131774892, 1);
  sqcRZGate(q, 0.25415921939945285, 1);
  sqcRYGate(q, -1.5274470922244632, 2);
  sqcRZGate(q, -0.9750389541665642, 2);
  sqcRYGate(q, -0.03717668396055096, 3);
  sqcRZGate(q, 2.6792556649532826, 3);
  sqcRYGate(q, -0.09697212398554214, 4);
  sqcRZGate(q, -1.9367918507228783, 4);
  sqcRYGate(q, -0.04469336894282883, 5);
  sqcRZGate(q, -0.3302083394822652, 5);
  sqcRYGate(q, 3.141563257720607, 6);
  sqcRZGate(q, 1.678462190139201, 6);
  sqcRYGate(q, -1.0295877483912363e-05, 7);
  sqcRZGate(q, -1.5894474737114845, 7);
  sqcRYGate(q, -0.027179804339405145, 8);
  sqcRZGate(q, -1.9777428989827506, 8);
  sqcRYGate(q, 1.5194169690089545, 9);
  sqcRZGate(q, 1.5722658586233371, 9);
  sqcRYGate(q, 1.4895449389664417, 10);
  sqcRZGate(q, -1.8075161498318595, 10);
  sqcRYGate(q, -0.6140801652123599, 11);
  sqcRZGate(q, 2.1986162643086624, 11);
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
  sqcRYGate(q, -0.001325340833169264, 0);
  sqcRZGate(q, -1.638734188907246, 0);
  sqcRYGate(q, -0.003083926641815893, 1);
  sqcRZGate(q, 1.0871148122409284, 1);
  sqcRYGate(q, 1.4789878868937656, 2);
  sqcRZGate(q, 0.04731886465759256, 2);
  sqcRYGate(q, -0.06303536213327401, 3);
  sqcRZGate(q, -1.4755672995928792, 3);
  sqcRYGate(q, -0.017350566849821725, 4);
  sqcRZGate(q, 0.2782401419653367, 4);
  sqcRYGate(q, 0.011537271539491025, 5);
  sqcRZGate(q, 2.7069682239644792, 5);
  sqcRYGate(q, -3.139735613425124, 6);
  sqcRZGate(q, -1.8046312775838362, 6);
  sqcRYGate(q, -4.106088338199861e-05, 7);
  sqcRZGate(q, -1.008229340390865, 7);
  sqcRYGate(q, -1.5692080294480073, 8);
  sqcRZGate(q, 1.5150330811966084, 8);
  sqcRYGate(q, 1.591274395714719, 9);
  sqcRZGate(q, -1.8740508616104465, 9);
  sqcRYGate(q, 1.575294775739322, 10);
  sqcRZGate(q, 0.17492787255814066, 10);
  sqcRYGate(q, 0.012452125712229643, 11);
  sqcRZGate(q, 1.9282428230958946, 11);
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
  sqcRYGate(q, -0.03883108233149901, 0);
  sqcRZGate(q, 3.113134138558449, 0);
  sqcRYGate(q, 0.10205992740409542, 1);
  sqcRZGate(q, -2.9925656422227784, 1);
  sqcRYGate(q, -2.732845090285733, 2);
  sqcRZGate(q, 1.632226110669053, 2);
  sqcRYGate(q, -1.6182861171310035, 3);
  sqcRZGate(q, -1.640468104233824, 3);
  sqcRYGate(q, -2.028497864926227, 4);
  sqcRZGate(q, -1.5706598880694775, 4);
  sqcRYGate(q, 0.01865309201499618, 5);
  sqcRZGate(q, 1.718139447337654, 5);
  sqcRYGate(q, -0.24223691652705615, 6);
  sqcRZGate(q, 2.126755077975192, 6);
  sqcRYGate(q, -3.1103381034377438, 7);
  sqcRZGate(q, -2.505734019953539, 7);
  sqcRYGate(q, 0.5616741254712347, 8);
  sqcRZGate(q, -0.20832127721291205, 8);
  sqcRYGate(q, 1.4909480950725849, 9);
  sqcRZGate(q, -1.6913838484431523, 9);
  sqcRYGate(q, -1.9432476770494096, 10);
  sqcRZGate(q, -1.6875886839889294, 10);
  sqcRYGate(q, 1.4693343096198905, 11);
  sqcRZGate(q, -3.0850600897250247, 11);
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
  sqcRYGate(q, 3.1179910369162482, 0);
  sqcRZGate(q, -3.1369044035444085, 0);
  sqcRYGate(q, -0.24195238560021878, 1);
  sqcRZGate(q, 3.108666980769132, 1);
  sqcRYGate(q, 1.5534303400208396, 2);
  sqcRZGate(q, 2.5288830291816264, 2);
  sqcRYGate(q, -1.5310780260255186, 3);
  sqcRZGate(q, 0.12092797727162233, 3);
  sqcRYGate(q, 1.4980038238425395, 4);
  sqcRZGate(q, -1.0731814353239293, 4);
  sqcRYGate(q, -1.5698617755537494, 5);
  sqcRZGate(q, 1.5385283474783975, 5);
  sqcRYGate(q, 9.464339311384949e-05, 6);
  sqcRZGate(q, -0.5175562963629886, 6);
  sqcRYGate(q, 7.602881544510609e-05, 7);
  sqcRZGate(q, -2.113603765206817, 7);
  sqcRYGate(q, 0.00023587953347766548, 8);
  sqcRZGate(q, -1.1596112010833286, 8);
  sqcRYGate(q, 3.140322161965823, 9);
  sqcRZGate(q, 3.0027124454783403, 9);
  sqcRYGate(q, 1.6209645389353773, 10);
  sqcRZGate(q, 1.760533850867671, 10);
  sqcRYGate(q, 1.4331043028756276, 11);
  sqcRZGate(q, -0.3339522656942408, 11);
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
  sqcRYGate(q, -1.5801180435676605, 0);
  sqcRZGate(q, -3.1414437803704236, 0);
  sqcRYGate(q, 1.5413236436774058, 1);
  sqcRZGate(q, -0.00012985755750628445, 1);
  sqcRYGate(q, 0.04727811852406372, 2);
  sqcRZGate(q, -2.5189997916904976, 2);
  sqcRYGate(q, -1.5709799321285853, 3);
  sqcRZGate(q, 0.021431951417367753, 3);
  sqcRYGate(q, 3.1072069257570853, 4);
  sqcRZGate(q, 2.075972944284382, 4);
  sqcRYGate(q, 1.5363371186516321, 5);
  sqcRZGate(q, -3.1342279979374332, 5);
  sqcRYGate(q, -1.5699532518575534, 6);
  sqcRZGate(q, 0.0014425652052265647, 6);
  sqcRYGate(q, -1.571118674656483, 7);
  sqcRZGate(q, -0.0010128142602141565, 7);
  sqcRYGate(q, -0.013351351199542262, 8);
  sqcRZGate(q, 3.056707051544182, 8);
  sqcRYGate(q, -1.4907452571812936, 9);
  sqcRZGate(q, 1.7827157910720848, 9);
  sqcRYGate(q, 1.5928818031591518, 10);
  sqcRZGate(q, -2.062559870803095, 10);
  sqcRYGate(q, -1.453119474370502, 11);
  sqcRZGate(q, -0.9905609948496614, 11);

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
