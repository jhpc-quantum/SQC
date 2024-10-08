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
  sqcInitialize();

  sqcQC* q;
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 2.1302199023875286, 0);
  sqcRZGate(q, 2.3884167762773414, 0);
  sqcRYGate(q, 1.3114550002789858, 1);
  sqcRZGate(q, -2.5223466182046383, 1);
  sqcRYGate(q, -1.2194770112967541, 2);
  sqcRZGate(q, 1.1424484576293477, 2);
  sqcRYGate(q, -0.44056838465356213, 3);
  sqcRZGate(q, 0.3582310050599294, 3);
  sqcRYGate(q, -1.6047076772737396, 4);
  sqcRZGate(q, -2.792028835840988, 4);
  sqcRYGate(q, 0.8276240455232919, 5);
  sqcRZGate(q, -3.0869696984818655, 5);
  sqcRYGate(q, 2.554557529302677, 6);
  sqcRZGate(q, -0.8122866060965982, 6);
  sqcRYGate(q, 1.9165094657921866, 7);
  sqcRZGate(q, 3.046928313835676, 7);
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
  sqcRYGate(q, 1.6413333669336136, 0);
  sqcRZGate(q, 2.3196196599751135, 0);
  sqcRYGate(q, -0.6215366171682497, 1);
  sqcRZGate(q, 1.6650052420031098, 1);
  sqcRYGate(q, -1.781853393475573, 2);
  sqcRZGate(q, -0.31315636246361933, 2);
  sqcRYGate(q, -3.0222884185032304, 3);
  sqcRZGate(q, 2.988326524444181, 3);
  sqcRYGate(q, -2.7137325123757217, 4);
  sqcRZGate(q, -0.3880845629490466, 4);
  sqcRYGate(q, -0.9975413056395926, 5);
  sqcRZGate(q, 1.731349868405026, 5);
  sqcRYGate(q, -0.6071854148078853, 6);
  sqcRZGate(q, 2.607709324555039, 6);
  sqcRYGate(q, 2.5806523759746613, 7);
  sqcRZGate(q, -2.567118410467538, 7);
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
  sqcRYGate(q, 0.8071836764050208, 0);
  sqcRZGate(q, 1.718584380711589, 0);
  sqcRYGate(q, 1.0132913770391547, 1);
  sqcRZGate(q, 0.9887666185724171, 1);
  sqcRYGate(q, -0.7856533268281467, 2);
  sqcRZGate(q, 2.3071870434337174, 2);
  sqcRYGate(q, 2.424384978835393, 3);
  sqcRZGate(q, -0.7963334755609395, 3);
  sqcRYGate(q, 2.8997317147507147, 4);
  sqcRZGate(q, 1.6550039234941174, 4);
  sqcRYGate(q, -2.052029292788671, 5);
  sqcRZGate(q, 1.3329454982969677, 5);
  sqcRYGate(q, 1.4695267455821606, 6);
  sqcRZGate(q, 0.8440185015621786, 6);
  sqcRYGate(q, 0.6164573074403432, 7);
  sqcRZGate(q, 1.690100500745759, 7);
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
  sqcRYGate(q, -1.169980288696158, 0);
  sqcRZGate(q, 0.06424996571371633, 0);
  sqcRYGate(q, 2.321044328018131, 1);
  sqcRZGate(q, 0.19152552858313052, 1);
  sqcRYGate(q, -0.42732827046905436, 2);
  sqcRZGate(q, -0.7332178037041854, 2);
  sqcRYGate(q, -0.7118632288244333, 3);
  sqcRZGate(q, -0.7223425699171561, 3);
  sqcRYGate(q, 2.843406535855423, 4);
  sqcRZGate(q, -0.7453136200339925, 4);
  sqcRYGate(q, -1.9238987972657542, 5);
  sqcRZGate(q, 0.6666972589010937, 5);
  sqcRYGate(q, -1.6698185653335456, 6);
  sqcRZGate(q, -2.5152789812262015, 6);
  sqcRYGate(q, 2.4127167703847587, 7);
  sqcRZGate(q, 2.246273515548233, 7);
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
  sqcRYGate(q, 0.6426837210128671, 0);
  sqcRZGate(q, 0.19573813426147735, 0);
  sqcRYGate(q, 1.6292847266979342, 1);
  sqcRZGate(q, 2.7237925255475544, 1);
  sqcRYGate(q, -0.7539256950634927, 2);
  sqcRZGate(q, 0.43650661419308673, 2);
  sqcRYGate(q, -1.9094619669129322, 3);
  sqcRZGate(q, -2.755470810736057, 3);
  sqcRYGate(q, 1.074082198081979, 4);
  sqcRZGate(q, 0.0646095382882043, 4);
  sqcRYGate(q, 1.6083373293777707, 5);
  sqcRZGate(q, -1.782364171248287, 5);
  sqcRYGate(q, 1.858510171022563, 6);
  sqcRZGate(q, -0.08280080071805695, 6);
  sqcRYGate(q, -2.4342612456707915, 7);
  sqcRZGate(q, 0.124142633355512, 7);
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
  sqcRYGate(q, -1.0122918529293283, 0);
  sqcRZGate(q, -0.9231194337953572, 0);
  sqcRYGate(q, -1.7979590678046655, 1);
  sqcRZGate(q, 2.3350284346187764, 1);
  sqcRYGate(q, 1.8715706666537377, 2);
  sqcRZGate(q, 2.329315655665528, 2);
  sqcRYGate(q, -0.620551184578234, 3);
  sqcRZGate(q, -2.2002018139755215, 3);
  sqcRYGate(q, -2.565391209328664, 4);
  sqcRZGate(q, 1.6816915872816292, 4);
  sqcRYGate(q, -3.011246378771611, 5);
  sqcRZGate(q, 0.5465554757406483, 5);
  sqcRYGate(q, -1.2552497515533163, 6);
  sqcRZGate(q, -0.593071427463234, 6);
  sqcRYGate(q, -1.3198713745692083, 7);
  sqcRZGate(q, -2.372328540542704, 7);
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
  sqcRYGate(q, 2.0244259113793968, 0);
  sqcRZGate(q, 2.7709338487133652, 0);
  sqcRYGate(q, -2.600436112229838, 1);
  sqcRZGate(q, 2.244638710363966, 1);
  sqcRYGate(q, 1.950288472754477, 2);
  sqcRZGate(q, -0.7294848632125841, 2);
  sqcRYGate(q, 1.5578571704216184, 3);
  sqcRZGate(q, 1.7458956883826744, 3);
  sqcRYGate(q, -0.5869511472380365, 4);
  sqcRZGate(q, 0.5936184785317448, 4);
  sqcRYGate(q, -2.2903651322886254, 5);
  sqcRZGate(q, -1.9257121508139172, 5);
  sqcRYGate(q, 2.2434031253961173, 6);
  sqcRZGate(q, -0.9717309629105628, 6);
  sqcRYGate(q, 1.850816556844405, 7);
  sqcRZGate(q, 1.5426780154359205, 7);
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
  sqcRYGate(q, 2.3923516139912913, 0);
  sqcRZGate(q, -2.0114166968434386, 0);
  sqcRYGate(q, -2.1735753064495764, 1);
  sqcRZGate(q, -1.567906501029297, 1);
  sqcRYGate(q, -0.3253151429790135, 2);
  sqcRZGate(q, -1.8521271322242325, 2);
  sqcRYGate(q, -2.19679247697645, 3);
  sqcRZGate(q, 1.6148454231991287, 3);
  sqcRYGate(q, -2.7562934271970123, 4);
  sqcRZGate(q, 0.9417247260863597, 4);
  sqcRYGate(q, 1.1583001358971619, 5);
  sqcRZGate(q, 0.04028764607221104, 5);
  sqcRYGate(q, 0.11660897077035326, 6);
  sqcRZGate(q, -0.7670127427844484, 6);
  sqcRYGate(q, 2.8260816371403585, 7);
  sqcRZGate(q, 1.240670228292992, 7);
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
  sqcRYGate(q, 2.4199106399762633, 0);
  sqcRZGate(q, 1.3889368301685527, 0);
  sqcRYGate(q, -1.883188193131831, 1);
  sqcRZGate(q, -0.16655512618146942, 1);
  sqcRYGate(q, -1.3254822999600773, 2);
  sqcRZGate(q, 0.013332271480349107, 2);
  sqcRYGate(q, 0.6841586068797837, 3);
  sqcRZGate(q, -0.9487232820606709, 3);
  sqcRYGate(q, 1.0460202205258915, 4);
  sqcRZGate(q, -1.910588105491779, 4);
  sqcRYGate(q, 1.8997499240620008, 5);
  sqcRZGate(q, -1.0584558991007562, 5);
  sqcRYGate(q, 1.2429336148741887, 6);
  sqcRZGate(q, -2.630351296365756, 6);
  sqcRYGate(q, -1.3903587828752215, 7);
  sqcRZGate(q, 3.114760517064209, 7);
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
  sqcRYGate(q, -1.2156172245493526, 0);
  sqcRZGate(q, -2.7084222602141663, 0);
  sqcRYGate(q, -2.540453418858943, 1);
  sqcRZGate(q, -1.9855226436162052, 1);
  sqcRYGate(q, 1.9166757114207744, 2);
  sqcRZGate(q, -0.6407434471332483, 2);
  sqcRYGate(q, -0.4951734055897644, 3);
  sqcRZGate(q, -0.5175663035410653, 3);
  sqcRYGate(q, 0.37314700578669213, 4);
  sqcRZGate(q, 1.2253320052937529, 4);
  sqcRYGate(q, 0.9521963368927561, 5);
  sqcRZGate(q, 2.793395666126137, 5);
  sqcRYGate(q, -2.4553280364238677, 6);
  sqcRZGate(q, 2.6483519343384736, 6);
  sqcRYGate(q, 0.5859198578949423, 7);
  sqcRZGate(q, 0.828339846927147, 7);
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
  sqcRYGate(q, 1.2752034560803476, 0);
  sqcRZGate(q, -2.2293078177800956, 0);
  sqcRYGate(q, 1.0799509795789741, 1);
  sqcRZGate(q, -1.6425715686854572, 1);
  sqcRYGate(q, 1.1932719579423814, 2);
  sqcRZGate(q, 0.4579850605915441, 2);
  sqcRYGate(q, 1.6447050693514587, 3);
  sqcRZGate(q, -0.3489206683492938, 3);
  sqcRYGate(q, 2.7888352526274613, 4);
  sqcRZGate(q, -0.8810051167600887, 4);
  sqcRYGate(q, 1.6692856191110845, 5);
  sqcRZGate(q, -2.5886681494356782, 5);
  sqcRYGate(q, 1.25908550817246, 6);
  sqcRZGate(q, 3.064282209969984, 6);
  sqcRYGate(q, -0.9144619889866218, 7);
  sqcRZGate(q, 1.9832175410465638, 7);
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
  sqcRYGate(q, 0.6660189984728087, 0);
  sqcRZGate(q, -1.1355922255102726, 0);
  sqcRYGate(q, 1.0066397586495102, 1);
  sqcRZGate(q, 2.3977634206632197, 1);
  sqcRYGate(q, 2.9491846394448045, 2);
  sqcRZGate(q, -1.0668962615641053, 2);
  sqcRYGate(q, -2.3438232522585576, 3);
  sqcRZGate(q, -2.7307297333596217, 3);
  sqcRYGate(q, -1.2619286967633503, 4);
  sqcRZGate(q, 2.7437431135329127, 4);
  sqcRYGate(q, -1.4625224531465233, 5);
  sqcRZGate(q, 0.8312735529551314, 5);
  sqcRYGate(q, 2.8254174724583208, 6);
  sqcRZGate(q, 0.8193243139197713, 6);
  sqcRYGate(q, -1.3623632928989156, 7);
  sqcRZGate(q, -1.5227783330996647, 7);
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
  sqcRYGate(q, -2.5626504968452766, 0);
  sqcRZGate(q, -0.16126768827113602, 0);
  sqcRYGate(q, 0.9477008744721119, 1);
  sqcRZGate(q, -0.1523829547325142, 1);
  sqcRYGate(q, 2.276237069960951, 2);
  sqcRZGate(q, -0.6107430421444751, 2);
  sqcRYGate(q, -1.774234928931322, 3);
  sqcRZGate(q, 2.831573570474987, 3);
  sqcRYGate(q, -1.0030595942223361, 4);
  sqcRZGate(q, -0.42755611460989945, 4);
  sqcRYGate(q, -1.9698722787435121, 5);
  sqcRZGate(q, -2.3401639566340213, 5);
  sqcRYGate(q, -0.7667245584031983, 6);
  sqcRZGate(q, -1.708117691462019, 6);
  sqcRYGate(q, -0.11317965829103882, 7);
  sqcRZGate(q, 3.050632520770717, 7);
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
  sqcRYGate(q, -1.2524925021640485, 0);
  sqcRZGate(q, 2.277606030398025, 0);
  sqcRYGate(q, -2.5211200441667305, 1);
  sqcRZGate(q, 0.37289985997725067, 1);
  sqcRYGate(q, -3.0886422692573583, 2);
  sqcRZGate(q, -1.3871039734507047, 2);
  sqcRYGate(q, -1.0553242224816, 3);
  sqcRZGate(q, 1.1554504535803531, 3);
  sqcRYGate(q, 2.985360927372084, 4);
  sqcRZGate(q, 0.34961945805905015, 4);
  sqcRYGate(q, 1.829483203657938, 5);
  sqcRZGate(q, 0.450804478202897, 5);
  sqcRYGate(q, -0.6291076046923259, 6);
  sqcRZGate(q, 0.21290799724356232, 6);
  sqcRYGate(q, 0.6842229538185469, 7);
  sqcRZGate(q, 2.2765197932149492, 7);
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
  sqcRYGate(q, -1.9533486937226152, 0);
  sqcRZGate(q, -0.1371850937569559, 0);
  sqcRYGate(q, 1.1424370754681326, 1);
  sqcRZGate(q, 2.5880241135959414, 1);
  sqcRYGate(q, -0.31521639634868454, 2);
  sqcRZGate(q, 1.4024897942750179, 2);
  sqcRYGate(q, -2.251206165341207, 3);
  sqcRZGate(q, -2.827745999400714, 3);
  sqcRYGate(q, 1.822893794771848, 4);
  sqcRZGate(q, 1.1860622956580835, 4);
  sqcRYGate(q, -0.5328941050483689, 5);
  sqcRZGate(q, -2.3107946462073565, 5);
  sqcRYGate(q, 1.529078657042491, 6);
  sqcRZGate(q, 2.860083226783018, 6);
  sqcRYGate(q, -1.6162209565377204, 7);
  sqcRZGate(q, -1.6266205286313191, 7);
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
  sqcRYGate(q, -2.144086368645314, 0);
  sqcRZGate(q, -2.8213081604514088, 0);
  sqcRYGate(q, 1.5610498142265374, 1);
  sqcRZGate(q, 1.9374201049333162, 1);
  sqcRYGate(q, 2.7436196623184896, 2);
  sqcRZGate(q, 1.580511843575084, 2);
  sqcRYGate(q, -2.7499523598752322, 3);
  sqcRZGate(q, -1.7109476723758896, 3);
  sqcRYGate(q, -2.0813148883947834, 4);
  sqcRZGate(q, 2.9604250815486646, 4);
  sqcRYGate(q, 0.6735084038225083, 5);
  sqcRZGate(q, 2.083182527922627, 5);
  sqcRYGate(q, -2.630857233278467, 6);
  sqcRZGate(q, 2.517048155375519, 6);
  sqcRYGate(q, -0.3884307587042454, 7);
  sqcRZGate(q, -1.7452102399537335, 7);
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
  sqcRYGate(q, 1.2426910703134246, 0);
  sqcRZGate(q, 0.9655914219815874, 0);
  sqcRYGate(q, 0.6262586232936646, 1);
  sqcRZGate(q, 1.4227609533625625, 1);
  sqcRYGate(q, -1.8849850190176338, 2);
  sqcRZGate(q, -0.0458767593659779, 2);
  sqcRYGate(q, -0.6006319225687022, 3);
  sqcRZGate(q, -2.442023168601363, 3);
  sqcRYGate(q, 1.627031386429799, 4);
  sqcRZGate(q, -1.8980335373483666, 4);
  sqcRYGate(q, -0.219404994629266, 5);
  sqcRZGate(q, -0.8450697774026509, 5);
  sqcRYGate(q, 1.3651805142977582, 6);
  sqcRZGate(q, 2.5923779090296684, 6);
  sqcRYGate(q, -3.0455646365203206, 7);
  sqcRZGate(q, -0.4101678538191234, 7);
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
  sqcRYGate(q, -2.2215916965065903, 0);
  sqcRZGate(q, 0.48433216697955656, 0);
  sqcRYGate(q, -1.784091243893064, 1);
  sqcRZGate(q, 3.039441850522337, 1);
  sqcRYGate(q, -0.11120389988780843, 2);
  sqcRZGate(q, -1.0149609504437995, 2);
  sqcRYGate(q, 2.432290426649022, 3);
  sqcRZGate(q, -1.8620239684089057, 3);
  sqcRYGate(q, -1.5109878858475283, 4);
  sqcRZGate(q, 2.5679660197945156, 4);
  sqcRYGate(q, -1.9394656602705105, 5);
  sqcRZGate(q, 2.4337745950585594, 5);
  sqcRYGate(q, -2.231996943172843, 6);
  sqcRZGate(q, -2.3962805753637166, 6);
  sqcRYGate(q, 0.672261684447543, 7);
  sqcRZGate(q, 1.4203600877615106, 7);
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
  sqcRYGate(q, -0.42960968542401506, 0);
  sqcRZGate(q, 0.5366203179250206, 0);
  sqcRYGate(q, 2.060228274023107, 1);
  sqcRZGate(q, -0.9397629780323095, 1);
  sqcRYGate(q, 1.1476170895580216, 2);
  sqcRZGate(q, 2.1851192552757226, 2);
  sqcRYGate(q, -0.658645899228931, 3);
  sqcRZGate(q, 0.16932315340813808, 3);
  sqcRYGate(q, 0.9684858412394428, 4);
  sqcRZGate(q, 0.2272335341019735, 4);
  sqcRYGate(q, -1.3369437540988078, 5);
  sqcRZGate(q, 0.7319130223191124, 5);
  sqcRYGate(q, 2.0091907973986967, 6);
  sqcRZGate(q, 1.3575033477866736, 6);
  sqcRYGate(q, -2.404440385127772, 7);
  sqcRZGate(q, 2.6653962995451423, 7);
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
  sqcRYGate(q, 2.873314367927369, 0);
  sqcRZGate(q, -2.5144362453895566, 0);
  sqcRYGate(q, 1.3144159852377557, 1);
  sqcRZGate(q, -3.047514099423082, 1);
  sqcRYGate(q, 2.33471569732574, 2);
  sqcRZGate(q, 2.62553546208015, 2);
  sqcRYGate(q, -1.2577467387836028, 3);
  sqcRZGate(q, -0.0764291339875446, 3);
  sqcRYGate(q, -2.7059911975447424, 4);
  sqcRZGate(q, -1.455749253708159, 4);
  sqcRYGate(q, -3.0591821229653458, 5);
  sqcRZGate(q, -1.9148084274809862, 5);
  sqcRYGate(q, -0.018162909081267387, 6);
  sqcRZGate(q, -2.1405820062053267, 6);
  sqcRYGate(q, 1.4017203429700427, 7);
  sqcRZGate(q, -1.4534752399647672, 7);
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
  sqcRYGate(q, -2.4504246443303406, 0);
  sqcRZGate(q, 0.5238598733313671, 0);
  sqcRYGate(q, -1.1597483807910711, 1);
  sqcRZGate(q, 1.441219237249607, 1);
  sqcRYGate(q, -1.005673234209382, 2);
  sqcRZGate(q, -2.0885343094284954, 2);
  sqcRYGate(q, -1.394100796933608, 3);
  sqcRZGate(q, 1.1458701018345228, 3);
  sqcRYGate(q, -0.49456200045535337, 4);
  sqcRZGate(q, 3.105767539149392, 4);
  sqcRYGate(q, 1.839612299162055, 5);
  sqcRZGate(q, 2.2749266379444566, 5);
  sqcRYGate(q, -0.19464846883625989, 6);
  sqcRZGate(q, -3.015715519456566, 6);
  sqcRYGate(q, 2.317628826877921, 7);
  sqcRZGate(q, -0.35646397373871247, 7);
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
  sqcRYGate(q, 2.739641878106015, 0);
  sqcRZGate(q, 2.3957989091489904, 0);
  sqcRYGate(q, -0.7599224963540747, 1);
  sqcRZGate(q, 0.05098036116376559, 1);
  sqcRYGate(q, -0.17302910633994456, 2);
  sqcRZGate(q, 1.8233858605340214, 2);
  sqcRYGate(q, 0.3599566925628015, 3);
  sqcRZGate(q, 1.7826258480232147, 3);
  sqcRYGate(q, -2.5494866003123966, 4);
  sqcRZGate(q, -0.15857715631456462, 4);
  sqcRYGate(q, 1.504435063637389, 5);
  sqcRZGate(q, -2.8570157761089017, 5);
  sqcRYGate(q, -0.3290671651836556, 6);
  sqcRZGate(q, -2.4040091674936837, 6);
  sqcRYGate(q, 2.8209266274789693, 7);
  sqcRZGate(q, 0.9228420065719751, 7);
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
  sqcRYGate(q, -0.7887910694886281, 0);
  sqcRZGate(q, 0.4420142828515302, 0);
  sqcRYGate(q, 0.42958299151330515, 1);
  sqcRZGate(q, 0.8767164563504206, 1);
  sqcRYGate(q, -2.831398022615588, 2);
  sqcRZGate(q, -0.7519817403089991, 2);
  sqcRYGate(q, 1.4957991406396667, 3);
  sqcRZGate(q, 1.9569036189847844, 3);
  sqcRYGate(q, 1.5547569189896011, 4);
  sqcRZGate(q, 2.6092177490418282, 4);
  sqcRYGate(q, 2.8899776609570758, 5);
  sqcRZGate(q, 0.8601937442837938, 5);
  sqcRYGate(q, 0.5520602202324596, 6);
  sqcRZGate(q, -2.7190760534820386, 6);
  sqcRYGate(q, 0.36773330268622034, 7);
  sqcRZGate(q, 1.0759162960212336, 7);
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
  sqcRYGate(q, 1.2732182359337727, 0);
  sqcRZGate(q, 0.4526521597407806, 0);
  sqcRYGate(q, 2.234037278112595, 1);
  sqcRZGate(q, 1.4522342538380986, 1);
  sqcRYGate(q, -1.9376139202672578, 2);
  sqcRZGate(q, -2.406521734116916, 2);
  sqcRYGate(q, -2.320297009243104, 3);
  sqcRZGate(q, -2.1487795496835473, 3);
  sqcRYGate(q, 1.0993542475182885, 4);
  sqcRZGate(q, -1.2844533624351901, 4);
  sqcRYGate(q, -1.1848739509702004, 5);
  sqcRZGate(q, 1.1779271248471028, 5);
  sqcRYGate(q, -2.511177721068551, 6);
  sqcRZGate(q, 0.49664357427065947, 6);
  sqcRYGate(q, -2.746440631290891, 7);
  sqcRZGate(q, -2.6669785554124443, 7);
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
  sqcRYGate(q, -1.5336895822217391, 0);
  sqcRZGate(q, 0.23362012982316332, 0);
  sqcRYGate(q, -2.5948241983266533, 1);
  sqcRZGate(q, 2.7031640536800445, 1);
  sqcRYGate(q, 0.7420907291167209, 2);
  sqcRZGate(q, 2.064992579081517, 2);
  sqcRYGate(q, 2.455894841166015, 3);
  sqcRZGate(q, -1.3862203956560313, 3);
  sqcRYGate(q, -2.935540483557839, 4);
  sqcRZGate(q, -0.08467929825459652, 4);
  sqcRYGate(q, -1.4836534912619068, 5);
  sqcRZGate(q, -2.9752423409970232, 5);
  sqcRYGate(q, 0.5785115992948757, 6);
  sqcRZGate(q, -2.754243176168716, 6);
  sqcRYGate(q, -0.43677125196745514, 7);
  sqcRZGate(q, 0.5017111079334411, 7);
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
  sqcRYGate(q, -1.377986134331704, 0);
  sqcRZGate(q, -2.062725736831695, 0);
  sqcRYGate(q, 1.4855114780252878, 1);
  sqcRZGate(q, -1.8839109621405585, 1);
  sqcRYGate(q, 2.466256150945712, 2);
  sqcRZGate(q, -2.9977094428021824, 2);
  sqcRYGate(q, -1.9140791067119445, 3);
  sqcRZGate(q, 0.4486419611326058, 3);
  sqcRYGate(q, 2.670095126843376, 4);
  sqcRZGate(q, -0.45513912696968095, 4);
  sqcRYGate(q, -1.5089154752891654, 5);
  sqcRZGate(q, -0.9830853697763962, 5);
  sqcRYGate(q, 1.3581145483871104, 6);
  sqcRZGate(q, -1.9499617328326444, 6);
  sqcRYGate(q, 2.8005641163642254, 7);
  sqcRZGate(q, -1.6408691834914864, 7);
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
  sqcRYGate(q, 0.5058883624085553, 0);
  sqcRZGate(q, -2.2725615858309656, 0);
  sqcRYGate(q, -2.1285541597123774, 1);
  sqcRZGate(q, 1.554031948621424, 1);
  sqcRYGate(q, -0.8886173545933769, 2);
  sqcRZGate(q, -0.9122305422949856, 2);
  sqcRYGate(q, -0.4223013367211683, 3);
  sqcRZGate(q, -0.025829686773846564, 3);
  sqcRYGate(q, 2.150818512698927, 4);
  sqcRZGate(q, 2.660533961072054, 4);
  sqcRYGate(q, 1.199476564691957, 5);
  sqcRZGate(q, -2.6904686694944955, 5);
  sqcRYGate(q, -1.4276168204901767, 6);
  sqcRZGate(q, 0.4952597020764707, 6);
  sqcRYGate(q, -1.7224382364569253, 7);
  sqcRZGate(q, 0.5452804030562735, 7);
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
  sqcRYGate(q, 2.8422941804743433, 0);
  sqcRZGate(q, -2.269611558069837, 0);
  sqcRYGate(q, -2.6835168269960588, 1);
  sqcRZGate(q, 1.908963939119296, 1);
  sqcRYGate(q, 1.4167625540172635, 2);
  sqcRZGate(q, 2.3966233952281844, 2);
  sqcRYGate(q, -0.29811889707243994, 3);
  sqcRZGate(q, -3.1129602683164785, 3);
  sqcRYGate(q, 0.6958858059598079, 4);
  sqcRZGate(q, 1.4398842636898026, 4);
  sqcRYGate(q, 2.491975561516629, 5);
  sqcRZGate(q, 2.9582484847298143, 5);
  sqcRYGate(q, 2.550612201966116, 6);
  sqcRZGate(q, 3.0742387733740073, 6);
  sqcRYGate(q, 1.4149223732784333, 7);
  sqcRZGate(q, 3.056600112980874, 7);
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
  sqcRYGate(q, 2.612954365268352, 0);
  sqcRZGate(q, 2.0811532036198694, 0);
  sqcRYGate(q, -2.5825073839898227, 1);
  sqcRZGate(q, -0.013987666279287046, 1);
  sqcRYGate(q, -2.2961951001217984, 2);
  sqcRZGate(q, 0.6765511678096395, 2);
  sqcRYGate(q, -1.108925702056088, 3);
  sqcRZGate(q, 0.6729151303474853, 3);
  sqcRYGate(q, -0.9583911327095181, 4);
  sqcRZGate(q, -2.0449529077753184, 4);
  sqcRYGate(q, -2.513037869744178, 5);
  sqcRZGate(q, 0.015136312021162597, 5);
  sqcRYGate(q, -2.003602876058668, 6);
  sqcRZGate(q, -1.4821688339302945, 6);
  sqcRYGate(q, -2.8377414437495765, 7);
  sqcRZGate(q, 0.1572131006861812, 7);
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
  sqcRYGate(q, 2.2941132686020516, 0);
  sqcRZGate(q, 1.1777904018275727, 0);
  sqcRYGate(q, 1.64682100762671, 1);
  sqcRZGate(q, -0.9632347618134515, 1);
  sqcRYGate(q, -2.3581921758170385, 2);
  sqcRZGate(q, 2.4071234822709004, 2);
  sqcRYGate(q, 2.8751149448807003, 3);
  sqcRZGate(q, -0.4568353371080292, 3);
  sqcRYGate(q, 1.2577445076503926, 4);
  sqcRZGate(q, 2.7831148986146217, 4);
  sqcRYGate(q, 0.2467649642197879, 5);
  sqcRZGate(q, -0.4589773924352061, 5);
  sqcRYGate(q, -0.6061536164896497, 6);
  sqcRZGate(q, -1.9181975672229612, 6);
  sqcRYGate(q, -0.2062941455278554, 7);
  sqcRZGate(q, 0.7732120727766594, 7);
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
  sqcRYGate(q, 1.6659061345891155, 0);
  sqcRZGate(q, 0.12142746633230748, 0);
  sqcRYGate(q, -0.8641838539069306, 1);
  sqcRZGate(q, 0.8410787621763802, 1);
  sqcRYGate(q, 0.9909980525319071, 2);
  sqcRZGate(q, 1.9036107012437977, 2);
  sqcRYGate(q, 1.9329067038998151, 3);
  sqcRZGate(q, 0.8027208934068691, 3);
  sqcRYGate(q, -2.8463889515864955, 4);
  sqcRZGate(q, -2.4549807300627218, 4);
  sqcRYGate(q, 0.20738747766996202, 5);
  sqcRZGate(q, 2.8270446824129203, 5);
  sqcRYGate(q, 1.0835151246591992, 6);
  sqcRZGate(q, -2.461484746666572, 6);
  sqcRYGate(q, 1.040844047408493, 7);
  sqcRZGate(q, 2.433293021659474, 7);

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
