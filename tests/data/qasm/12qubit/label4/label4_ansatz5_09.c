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

  sqcRYGate(q, 1.2526380057543625, 0);
  sqcRYGate(q, -0.7693816443811023, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0994072658323653, 0);
  sqcRYGate(q, 0.7416237807274457, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.993582425241177, 2);
  sqcRYGate(q, -1.7152261788999335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.010845880261411355, 2);
  sqcRYGate(q, 0.9854176338221734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.028414902545277343, 4);
  sqcRYGate(q, -0.2668740321396779, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.581430655090263, 4);
  sqcRYGate(q, 1.2273767774057316, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6412205174705177, 6);
  sqcRYGate(q, -1.4354840773522701, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.777783348983486, 6);
  sqcRYGate(q, 0.5336414372710988, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2337798809918388, 8);
  sqcRYGate(q, -1.09225008037407, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.2260578642986433, 8);
  sqcRYGate(q, 1.9549953647064473, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.879869724143643, 10);
  sqcRYGate(q, 0.0200497995221669, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8641743162416047, 10);
  sqcRYGate(q, -0.868544643920095, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2895695329199053, 1);
  sqcRYGate(q, -1.3125068587011304, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.111305195307913, 1);
  sqcRYGate(q, -1.1364937885557378, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6494878442623295, 3);
  sqcRYGate(q, -2.597742215353031, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4261916587797936, 3);
  sqcRYGate(q, -1.4860283516883823, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6167009184493613, 5);
  sqcRYGate(q, -1.8764869219772333, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9650382221104704, 5);
  sqcRYGate(q, -0.016664848420422755, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2214854099444565, 7);
  sqcRYGate(q, 2.386385934690357, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4301455006084298, 7);
  sqcRYGate(q, 1.115979055063705, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.38924486998744856, 9);
  sqcRYGate(q, 0.9197817368348271, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7426326244704087, 9);
  sqcRYGate(q, -1.0388588171412145, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.21868132783131955, 0);
  sqcRYGate(q, -0.4491053440584496, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4837126955012145, 0);
  sqcRYGate(q, -0.7454749353512742, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.37129383092951773, 2);
  sqcRYGate(q, -1.0537073788699347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9155044593783135, 2);
  sqcRYGate(q, -2.877118990500545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0887787005604073, 4);
  sqcRYGate(q, 1.8437714813210726, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.118552215436968, 4);
  sqcRYGate(q, -1.4659683572026232, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5919540291256382, 6);
  sqcRYGate(q, 1.5662967713407951, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9177804300582026, 6);
  sqcRYGate(q, -0.718742223664715, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8268384883394001, 8);
  sqcRYGate(q, 2.8177418852217553, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.622944508857127, 8);
  sqcRYGate(q, -0.6282104025393951, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8300355672075108, 10);
  sqcRYGate(q, 0.49615656732484137, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1819978222244167, 10);
  sqcRYGate(q, -1.7261643207878297, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6486497507748012, 1);
  sqcRYGate(q, 2.653554479833914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1417806273461055, 1);
  sqcRYGate(q, 1.6454090277554734, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2412512600327288, 3);
  sqcRYGate(q, -0.8659415884138815, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.15167537707658063, 3);
  sqcRYGate(q, 1.6490996136208844, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.678384620551569, 5);
  sqcRYGate(q, 0.7922481880819122, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.015545744968794573, 5);
  sqcRYGate(q, -1.4573625963280803, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7973746180268568, 7);
  sqcRYGate(q, -2.7943020389963302, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.967623564764774, 7);
  sqcRYGate(q, -2.180259700947632, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.054265361024987, 9);
  sqcRYGate(q, 2.4189050574240567, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.1976515997191104, 9);
  sqcRYGate(q, -2.4332964014167686, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.9296839032768722, 0);
  sqcRYGate(q, 2.6841688502582035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8191702967409378, 0);
  sqcRYGate(q, 1.8116488989706179, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3586038064462196, 2);
  sqcRYGate(q, 0.16732425676119078, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1073945286349307, 2);
  sqcRYGate(q, 0.7535219710009766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9074842245592869, 4);
  sqcRYGate(q, -1.6125971559428165, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0046275203284373845, 4);
  sqcRYGate(q, -0.054497833293865566, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8856735365557322, 6);
  sqcRYGate(q, 2.6558260087251626, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8458090796353012, 6);
  sqcRYGate(q, 0.3526420027404039, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.302888061398996, 8);
  sqcRYGate(q, 2.5353774370708075, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4005870730791692, 8);
  sqcRYGate(q, 3.0565926860608896, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3979021944667904, 10);
  sqcRYGate(q, 0.8542189109090915, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5267079110591517, 10);
  sqcRYGate(q, -0.38163875788351476, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.302089543046291, 1);
  sqcRYGate(q, -0.1848915744975761, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1466857327014246, 1);
  sqcRYGate(q, -0.8099098225257867, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.375222125750665, 3);
  sqcRYGate(q, -0.6644310109431597, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0818753837882107, 3);
  sqcRYGate(q, -1.8742471005256283, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0095323902104107, 5);
  sqcRYGate(q, 1.9490989717386524, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.37380114077809257, 5);
  sqcRYGate(q, -0.15079894256558077, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.338822272288904, 7);
  sqcRYGate(q, -2.314639920632342, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.8087624093422692, 7);
  sqcRYGate(q, 2.1648551144823607, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.7251317699931263, 9);
  sqcRYGate(q, 2.501629814773598, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.8546151001038012, 9);
  sqcRYGate(q, 1.3103484928364735, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.13016898828460977, 0);
  sqcRYGate(q, 3.0247146334412713, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.30752441784354473, 0);
  sqcRYGate(q, 0.15977609655702896, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2195640452687622, 2);
  sqcRYGate(q, -2.1456151753410495, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9218653847379018, 2);
  sqcRYGate(q, 1.7411435273318416, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.23043175959429973, 4);
  sqcRYGate(q, -0.03562627206571462, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0826792298153567, 4);
  sqcRYGate(q, 0.008528200364081862, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7495404085649604, 6);
  sqcRYGate(q, 1.6005950842169172, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0466341792683281, 6);
  sqcRYGate(q, 1.4446327165438293, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1449957415391467, 8);
  sqcRYGate(q, 2.814108426247104, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.989320907705153, 8);
  sqcRYGate(q, 3.0702828896898917, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.7591767403087495, 10);
  sqcRYGate(q, -1.4366462914571374, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.820084297857058, 10);
  sqcRYGate(q, -0.3406073225154467, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.388404266771195, 1);
  sqcRYGate(q, 2.104461087512721, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.954975735692126, 1);
  sqcRYGate(q, -2.4003365930682015, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3075120233465848, 3);
  sqcRYGate(q, -1.8632171231037638, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.12322382933835258, 3);
  sqcRYGate(q, -0.24865843793838346, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5891047558949261, 5);
  sqcRYGate(q, -1.6914107138943422, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.25251203640501707, 5);
  sqcRYGate(q, -3.137431129342266, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.907207206709003, 7);
  sqcRYGate(q, -2.382244837616103, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3359047207155985, 7);
  sqcRYGate(q, -1.7051336487004143, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.4806253451782805, 9);
  sqcRYGate(q, -1.3917350905126185, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.439880111824345, 9);
  sqcRYGate(q, -2.947693608263586, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.3656252865657517, 0);
  sqcRYGate(q, -1.9427305293085153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8332462172931807, 0);
  sqcRYGate(q, -2.093933480793317, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6615196488495214, 2);
  sqcRYGate(q, 0.31422929561103174, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.832577221637314, 2);
  sqcRYGate(q, -1.2732590695213375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.25916414919262876, 4);
  sqcRYGate(q, 1.4314403919762728, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9708298051486595, 4);
  sqcRYGate(q, 3.130450118362759, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0210064941306998, 6);
  sqcRYGate(q, -2.8357509411898554, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8254433210009742, 6);
  sqcRYGate(q, 2.8888436771595876, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.74808603406298, 8);
  sqcRYGate(q, 0.9989462071845407, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.464642312190512, 8);
  sqcRYGate(q, -1.4186835443189425, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.758526052690566, 10);
  sqcRYGate(q, -2.810517907981872, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0011019995293164, 10);
  sqcRYGate(q, 0.3674000056315841, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2639712353338286, 1);
  sqcRYGate(q, 2.507585821105654, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0185745373455184, 1);
  sqcRYGate(q, 0.5494202052048092, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0633061433456206, 3);
  sqcRYGate(q, -1.2647265902685902, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0434473336318998, 3);
  sqcRYGate(q, 2.4137423200637746, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.733407496884116, 5);
  sqcRYGate(q, 1.015397667964944, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.08150078684659, 5);
  sqcRYGate(q, 3.1332527177973777, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6492949502109195, 7);
  sqcRYGate(q, -1.4207480536798562, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.249815630998218, 7);
  sqcRYGate(q, 1.7646520622575679, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.6266180415964323, 9);
  sqcRYGate(q, 0.0027421439505976863, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.2121324525185182, 9);
  sqcRYGate(q, -0.011979705769411986, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.6642783504452545, 0);
  sqcRYGate(q, 1.172514564255966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.792034689853721, 0);
  sqcRYGate(q, 0.7219991999714583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.008532844542568, 2);
  sqcRYGate(q, 3.0876460018548175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.03600154647894158, 2);
  sqcRYGate(q, 1.1286851779849096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2177577717758794, 4);
  sqcRYGate(q, 0.12619450656222675, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9282970844797376, 4);
  sqcRYGate(q, -3.140579508996665, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8746082187245603, 6);
  sqcRYGate(q, -2.5653741733929003, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.059924604828157, 6);
  sqcRYGate(q, -1.0938824225075006, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.908775683082682, 8);
  sqcRYGate(q, 1.6858940150737025, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.08818755560415158, 8);
  sqcRYGate(q, 1.0289532578995617, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.5691021962423837, 10);
  sqcRYGate(q, -0.46352079573921046, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.877564498518913, 10);
  sqcRYGate(q, 0.6286077397269363, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9224177174022616, 1);
  sqcRYGate(q, 1.295652561952842, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.993130847996169, 1);
  sqcRYGate(q, -0.6126768609812272, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3855600155082364, 3);
  sqcRYGate(q, 0.16330566723913295, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2631566002473704, 3);
  sqcRYGate(q, -0.46498240948319275, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8189605610527986, 5);
  sqcRYGate(q, -0.6376076534592996, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3642892262294033, 5);
  sqcRYGate(q, 0.02140452181953246, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.115128587772691, 7);
  sqcRYGate(q, 0.6946425102354495, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.4594977648205045, 7);
  sqcRYGate(q, 2.8584268003633895, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.5356618838734923, 9);
  sqcRYGate(q, 2.8310413290901786, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5877603054988694, 9);
  sqcRYGate(q, 3.137314049923117, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.095849924515403, 0);
  sqcRYGate(q, -1.4740651313372848, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.04271222450885553, 0);
  sqcRYGate(q, 1.3884763254505827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.335179972805012, 2);
  sqcRYGate(q, 2.3215139510848606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14932816330133353, 2);
  sqcRYGate(q, -1.1071554164243036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.448709132372005, 4);
  sqcRYGate(q, -2.1275342921694125, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0040889433389506395, 4);
  sqcRYGate(q, 0.03840370557682338, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8612801673509152, 6);
  sqcRYGate(q, 0.8262469081172688, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.134579450672588, 6);
  sqcRYGate(q, 2.7622207135331758, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1071020740624244, 8);
  sqcRYGate(q, 2.2303653164668953, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.11778353779674412, 8);
  sqcRYGate(q, 0.9297012454501674, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4468983792592611, 10);
  sqcRYGate(q, -1.6529964309293792, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7213604811556116, 10);
  sqcRYGate(q, 0.11985264820265304, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.25589606235266427, 1);
  sqcRYGate(q, -1.281854796786375, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.36916637679108977, 1);
  sqcRYGate(q, -0.6786237902152223, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6424662581595184, 3);
  sqcRYGate(q, -0.06685522714974054, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0464707092434674, 3);
  sqcRYGate(q, -2.2500883608332227, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.067214620342517, 5);
  sqcRYGate(q, 1.1891010599353895, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2694560014381025, 5);
  sqcRYGate(q, -0.016016605012056928, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.346269411926799, 7);
  sqcRYGate(q, -2.154747732394367, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.389167588182685, 7);
  sqcRYGate(q, -3.114431139669691, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.504222397370088, 9);
  sqcRYGate(q, -1.628342735473546, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.7725081439570003, 9);
  sqcRYGate(q, -0.009174844033118745, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2383177601291493, 0);
  sqcRYGate(q, 1.6590813340840702, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.773913831709166, 0);
  sqcRYGate(q, -1.4146990183978212, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5157228078337033, 2);
  sqcRYGate(q, 0.3245031951278614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5869344921023004, 2);
  sqcRYGate(q, -3.028150715955335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06467595353301016, 4);
  sqcRYGate(q, 0.794730603171321, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.781548613262065, 4);
  sqcRYGate(q, 0.6050524928974016, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9308767319551614, 6);
  sqcRYGate(q, -2.8745866999218634, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9721356100538756, 6);
  sqcRYGate(q, 1.0061367208591583, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7573818734917332, 8);
  sqcRYGate(q, 1.8397696621631119, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.0554848807111501, 8);
  sqcRYGate(q, -1.4320876415995916, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.796899171101832, 10);
  sqcRYGate(q, -0.08773581280330411, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5212285047714849, 10);
  sqcRYGate(q, 1.248905706612896, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5795395933188056, 1);
  sqcRYGate(q, -1.4818651417041302, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.06084400764626817, 1);
  sqcRYGate(q, 2.8466918983967626, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5287256769727406, 3);
  sqcRYGate(q, -1.581710454448773, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.909227676551734, 3);
  sqcRYGate(q, 2.970237150383801, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6786265705492589, 5);
  sqcRYGate(q, -0.9548334414531129, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0034044342925012567, 5);
  sqcRYGate(q, 3.1377133327368165, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5825301941564576, 7);
  sqcRYGate(q, 0.21200580859087026, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.03970867054479501, 7);
  sqcRYGate(q, -1.3455783300986326, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.035033350294399, 9);
  sqcRYGate(q, -2.1818759236638874, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7392756433713954, 9);
  sqcRYGate(q, 1.5645875667475266, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.5556672729185568, 0);
  sqcRYGate(q, 1.7659020525212004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5963333102631951, 0);
  sqcRYGate(q, -1.3438580119560128, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5369210681697218, 2);
  sqcRYGate(q, 2.665963211955886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.417666970337766, 2);
  sqcRYGate(q, 1.6600292071607492, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1327578521467574, 4);
  sqcRYGate(q, -0.6630734116228416, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6354516994307735, 4);
  sqcRYGate(q, -0.062037679157819, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.721008958832991, 6);
  sqcRYGate(q, 1.1858545940055882, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6814569177727912, 6);
  sqcRYGate(q, -0.17261790936314667, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.051616708638422, 8);
  sqcRYGate(q, 1.1290179830808993, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7695043228689524, 8);
  sqcRYGate(q, 1.863174118160483, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.08697911682629424, 10);
  sqcRYGate(q, -2.2918890748343954, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.212018448760138, 10);
  sqcRYGate(q, 1.9222743048942579, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7975825129744596, 1);
  sqcRYGate(q, -0.4644196728750281, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6071403659233185, 1);
  sqcRYGate(q, -0.36766672111200777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6625733500148359, 3);
  sqcRYGate(q, 2.261876315229414, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.31651215598594096, 3);
  sqcRYGate(q, -1.795819585043163, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6099950894921997, 5);
  sqcRYGate(q, -0.9068972549592438, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4773965548153791, 5);
  sqcRYGate(q, -1.665357610765182, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1530908250067666, 7);
  sqcRYGate(q, 2.3861265016650868, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1256543081286137, 7);
  sqcRYGate(q, 0.020155025633281202, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.3409319705341999, 9);
  sqcRYGate(q, 0.7968088985858409, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.01955106010143817, 9);
  sqcRYGate(q, 0.005242328383420869, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.579961509754142, 0);
  sqcRYGate(q, -0.24350773968002676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.007856184059495952, 0);
  sqcRYGate(q, 3.030907206605383, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0699117014318063, 2);
  sqcRYGate(q, -2.0793547055570483, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0941689362306737, 2);
  sqcRYGate(q, 1.6430610655698024, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3410801497231877, 4);
  sqcRYGate(q, -1.6686381620650308, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0272113191760841, 4);
  sqcRYGate(q, -2.9744942205198344, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5698266334499626, 6);
  sqcRYGate(q, 1.9456858085109783, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5433991450888982, 6);
  sqcRYGate(q, -0.7318351533182531, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5915423822062004, 8);
  sqcRYGate(q, 1.0824001148883156, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.4016978826680258, 8);
  sqcRYGate(q, -2.2106836352033694, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.222919314050673, 10);
  sqcRYGate(q, -2.284685391654422, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8901077353934346, 10);
  sqcRYGate(q, 1.2913531902190067, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8402388115632142, 1);
  sqcRYGate(q, 0.7752150368749149, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2928752155582997, 1);
  sqcRYGate(q, 3.139946150611415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.482546586795384, 3);
  sqcRYGate(q, -2.2831063036014276, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.12689506687492713, 3);
  sqcRYGate(q, 2.028133285716059, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.760760229640986, 5);
  sqcRYGate(q, -1.571076718262071, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.767497288188926, 5);
  sqcRYGate(q, -1.712271605129493, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.567361457222912, 7);
  sqcRYGate(q, -3.0301349599653324, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5745529256654844, 7);
  sqcRYGate(q, -1.5365399870989989, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.010013826982246, 9);
  sqcRYGate(q, 1.8220132029280065, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.7674141267672154, 9);
  sqcRYGate(q, -1.8118534304257636, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.2713549153729664, 0);
  sqcRYGate(q, -0.2469100934120405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1470771726331774, 0);
  sqcRYGate(q, 2.7479393528289067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5512900997338718, 2);
  sqcRYGate(q, 2.4316521969803664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09983846286908271, 2);
  sqcRYGate(q, -0.6396960099289918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.838511870042178, 4);
  sqcRYGate(q, 0.10975561850236802, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.00015342147985721277, 4);
  sqcRYGate(q, 0.001157543861625896, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5024366118965615, 6);
  sqcRYGate(q, 1.5727019428341178, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.097862676027284, 6);
  sqcRYGate(q, -3.1402214227804355, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6767680891528368, 8);
  sqcRYGate(q, 1.553937177553032, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6033950423614778, 8);
  sqcRYGate(q, 0.0015277505656667038, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.353496230875723, 10);
  sqcRYGate(q, -2.655267462144077, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.448371380358243, 10);
  sqcRYGate(q, 0.30070195863799126, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0220112532495036, 1);
  sqcRYGate(q, 1.8460403959123521, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8230820487424544, 1);
  sqcRYGate(q, -3.116563179692076, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7093674628495625, 3);
  sqcRYGate(q, -2.8852517110286984, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.12450864107914, 3);
  sqcRYGate(q, -1.1506181144796956, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4100425632139513, 5);
  sqcRYGate(q, 2.620817076887212, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0117885232442205, 5);
  sqcRYGate(q, -1.86038459114146, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5712586780507274, 7);
  sqcRYGate(q, 2.4677118842860835, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.5271815287229176, 7);
  sqcRYGate(q, 1.30251924241486, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.687449248591296, 9);
  sqcRYGate(q, -2.273177863278721, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5603102733921628, 9);
  sqcRYGate(q, -3.1005548627013875, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.7465299022872482, 0);
  sqcRYGate(q, 1.7490385813539593, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.128270498453298, 0);
  sqcRYGate(q, 0.10169905145662896, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.585512648978848, 2);
  sqcRYGate(q, -2.6838752581951355, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1265140328400416, 2);
  sqcRYGate(q, 1.395363927811361, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5162937982206977, 4);
  sqcRYGate(q, 1.4578236486982403, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.140463899163979, 4);
  sqcRYGate(q, -0.016949729409661884, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5511261503871978, 6);
  sqcRYGate(q, -1.5676037467167345, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9933106450860762, 6);
  sqcRYGate(q, -1.772097994942464, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5674508254690076, 8);
  sqcRYGate(q, -1.6816482065885632, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.8409266733092085, 8);
  sqcRYGate(q, 1.4853174245998328, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.607704264214351, 10);
  sqcRYGate(q, 3.094150143935022, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5790236117401388, 10);
  sqcRYGate(q, -3.088097164213068, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.6144287000286943, 1);
  sqcRYGate(q, 3.0522699239358007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2008705626674223, 1);
  sqcRYGate(q, 1.5823765959305396, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3298417943062101, 3);
  sqcRYGate(q, -0.8453502418241122, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1669556663615424, 3);
  sqcRYGate(q, -2.457033067074735, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9054686757764885, 5);
  sqcRYGate(q, 1.5736755338183295, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0743810085202607, 5);
  sqcRYGate(q, -2.274066745004931, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.570997834637726, 7);
  sqcRYGate(q, -2.2076099063189525, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0026462569322722724, 7);
  sqcRYGate(q, 1.4707992574757427, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5802822078970236, 9);
  sqcRYGate(q, -2.2355688587848244, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.1394706254448232, 9);
  sqcRYGate(q, 0.5971461842000667, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.3165564342837377, 0);
  sqcRYGate(q, 1.572899474664521, 1);
  sqcRYGate(q, 0.18974066016467983, 2);
  sqcRYGate(q, -1.0926768956605857, 3);
  sqcRYGate(q, -0.7385439745118934, 4);
  sqcRYGate(q, -1.573202782782829, 5);
  sqcRYGate(q, 0.00046423767195843724, 6);
  sqcRYGate(q, 1.5709127242407996, 7);
  sqcRYGate(q, 0.6347866248263997, 8);
  sqcRYGate(q, 1.5650062778869196, 9);
  sqcRYGate(q, 2.4372805992034974, 10);
  sqcRYGate(q, 1.5691870856517025, 11);

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
