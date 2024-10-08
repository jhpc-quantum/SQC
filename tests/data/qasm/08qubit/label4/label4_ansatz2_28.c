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

  sqcRYGate(q, 2.9495141476441344, 0);
  sqcRZGate(q, 1.1980187887106355, 0);
  sqcRYGate(q, -1.7853940473832945, 1);
  sqcRZGate(q, 2.28447391937398, 1);
  sqcRYGate(q, -1.058555909455828, 2);
  sqcRZGate(q, -1.673897904747455, 2);
  sqcRYGate(q, -0.4382152314731877, 3);
  sqcRZGate(q, -0.7814640671942791, 3);
  sqcRYGate(q, 1.1776632421987667, 4);
  sqcRZGate(q, 0.8299905945561723, 4);
  sqcRYGate(q, -0.20566018679209172, 5);
  sqcRZGate(q, 2.9415039494173336, 5);
  sqcRYGate(q, -1.993431289639725, 6);
  sqcRZGate(q, 2.693833800477932, 6);
  sqcRYGate(q, -2.576076133866609, 7);
  sqcRZGate(q, -2.4023274210662375, 7);
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
  sqcRYGate(q, 2.851616593355284, 0);
  sqcRZGate(q, 1.5897827415794867, 0);
  sqcRYGate(q, -2.142711076675635, 1);
  sqcRZGate(q, -1.3840829412169622, 1);
  sqcRYGate(q, 1.3693839601436633, 2);
  sqcRZGate(q, -2.694630107472624, 2);
  sqcRYGate(q, 1.3283792856256689, 3);
  sqcRZGate(q, 2.5771008981639576, 3);
  sqcRYGate(q, -1.4062031887069524, 4);
  sqcRZGate(q, 2.2940646497017334, 4);
  sqcRYGate(q, -1.356291626320738, 5);
  sqcRZGate(q, -1.920960371355664, 5);
  sqcRYGate(q, 2.5313580163461604, 6);
  sqcRZGate(q, 0.5893089628131077, 6);
  sqcRYGate(q, -0.6394071029506323, 7);
  sqcRZGate(q, -0.6525850406409941, 7);
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
  sqcRYGate(q, -0.42627867134447833, 0);
  sqcRZGate(q, 3.029779268098514, 0);
  sqcRYGate(q, 2.2853982661540484, 1);
  sqcRZGate(q, 1.0610493955993563, 1);
  sqcRYGate(q, -2.9759226270864683, 2);
  sqcRZGate(q, 0.17352890749795868, 2);
  sqcRYGate(q, -0.9188518947237058, 3);
  sqcRZGate(q, -1.8303158178892938, 3);
  sqcRYGate(q, -2.2630841130473534, 4);
  sqcRZGate(q, 0.8909100047909851, 4);
  sqcRYGate(q, -1.2622427653863104, 5);
  sqcRZGate(q, 0.4538726245710728, 5);
  sqcRYGate(q, -0.1859858537880994, 6);
  sqcRZGate(q, 0.6318563942177753, 6);
  sqcRYGate(q, -2.9480243335717935, 7);
  sqcRZGate(q, 1.4627855658554498, 7);
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
  sqcRYGate(q, 2.759446374698301, 0);
  sqcRZGate(q, 2.620366697945008, 0);
  sqcRYGate(q, 0.47176960803033186, 1);
  sqcRZGate(q, 1.752321223790678, 1);
  sqcRYGate(q, -1.7599270465500538, 2);
  sqcRZGate(q, 0.7187188968385678, 2);
  sqcRYGate(q, 0.9336430851102051, 3);
  sqcRZGate(q, -0.8789203403174106, 3);
  sqcRYGate(q, 2.7763979635337757, 4);
  sqcRZGate(q, -0.6768818310667823, 4);
  sqcRYGate(q, -2.7334942063196763, 5);
  sqcRZGate(q, -2.2928892062691073, 5);
  sqcRYGate(q, 1.126425716533905, 6);
  sqcRZGate(q, -0.2677165315782923, 6);
  sqcRYGate(q, -1.3927055511179314, 7);
  sqcRZGate(q, 1.712682769508814, 7);
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
  sqcRYGate(q, -2.5065516375992534, 0);
  sqcRZGate(q, 2.0152066636291845, 0);
  sqcRYGate(q, -2.3706732140768048, 1);
  sqcRZGate(q, 1.5629790465684286, 1);
  sqcRYGate(q, -0.7156632514760971, 2);
  sqcRZGate(q, 2.9147555880778357, 2);
  sqcRYGate(q, -1.7146822464129476, 3);
  sqcRZGate(q, 1.0499835061326976, 3);
  sqcRYGate(q, -1.695421033118992, 4);
  sqcRZGate(q, -1.848589728007922, 4);
  sqcRYGate(q, -1.1356267965357716, 5);
  sqcRZGate(q, 2.6227849044113882, 5);
  sqcRYGate(q, 1.8491433556789734, 6);
  sqcRZGate(q, 2.771366511742451, 6);
  sqcRYGate(q, 1.2680830647904644, 7);
  sqcRZGate(q, -1.752527886339881, 7);
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
  sqcRYGate(q, -0.8926899328547275, 0);
  sqcRZGate(q, -0.6838173029827708, 0);
  sqcRYGate(q, -2.5820035898518787, 1);
  sqcRZGate(q, 0.09762272841660645, 1);
  sqcRYGate(q, -2.5901335353354247, 2);
  sqcRZGate(q, 2.8088675619464407, 2);
  sqcRYGate(q, 3.121850143401125, 3);
  sqcRZGate(q, 2.555720101584757, 3);
  sqcRYGate(q, -1.5369970363609156, 4);
  sqcRZGate(q, 1.191947963435748, 4);
  sqcRYGate(q, -1.8282199798722991, 5);
  sqcRZGate(q, -2.228975609787133, 5);
  sqcRYGate(q, -1.2071188992999966, 6);
  sqcRZGate(q, 1.1197578850018566, 6);
  sqcRYGate(q, -1.9883343964942903, 7);
  sqcRZGate(q, -2.2264022062668913, 7);
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
  sqcRYGate(q, -1.3682569778884435, 0);
  sqcRZGate(q, 2.1118169453966753, 0);
  sqcRYGate(q, -0.8885797728571498, 1);
  sqcRZGate(q, -0.19388706514231127, 1);
  sqcRYGate(q, 2.7695031742661715, 2);
  sqcRZGate(q, 2.0583826540185943, 2);
  sqcRYGate(q, -0.17989279948886963, 3);
  sqcRZGate(q, 2.990607991746114, 3);
  sqcRYGate(q, 2.41978910550711, 4);
  sqcRZGate(q, 0.9878750591495784, 4);
  sqcRYGate(q, 1.9227813300923442, 5);
  sqcRZGate(q, -1.1960033830337489, 5);
  sqcRYGate(q, 1.9596371031907205, 6);
  sqcRZGate(q, -0.6434056852720759, 6);
  sqcRYGate(q, 0.7422933124467814, 7);
  sqcRZGate(q, 0.20744046509789452, 7);
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
  sqcRYGate(q, -2.866151802319175, 0);
  sqcRZGate(q, -3.08289137556127, 0);
  sqcRYGate(q, -2.266590084634019, 1);
  sqcRZGate(q, 1.153764882353169, 1);
  sqcRYGate(q, 0.723706060966753, 2);
  sqcRZGate(q, -1.530542511990122, 2);
  sqcRYGate(q, 2.1175667752842102, 3);
  sqcRZGate(q, -0.35241688273761623, 3);
  sqcRYGate(q, 0.06060392394115828, 4);
  sqcRZGate(q, 2.5171333755162353, 4);
  sqcRYGate(q, 2.2884594401064318, 5);
  sqcRZGate(q, -0.3898031671808954, 5);
  sqcRYGate(q, 1.0520319363203998, 6);
  sqcRZGate(q, -2.250083629343186, 6);
  sqcRYGate(q, 2.5360016000311583, 7);
  sqcRZGate(q, 2.8537722406478827, 7);
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
  sqcRYGate(q, 0.32883788397036096, 0);
  sqcRZGate(q, -2.813185693609206, 0);
  sqcRYGate(q, 1.1119942580719755, 1);
  sqcRZGate(q, 2.471848069035844, 1);
  sqcRYGate(q, 1.850353143810821, 2);
  sqcRZGate(q, 3.0079072560313485, 2);
  sqcRYGate(q, -0.618663683354729, 3);
  sqcRZGate(q, 1.0524880328084236, 3);
  sqcRYGate(q, 2.505394046472152, 4);
  sqcRZGate(q, 0.12856686908786644, 4);
  sqcRYGate(q, 2.0609844826337502, 5);
  sqcRZGate(q, -2.1373842379965766, 5);
  sqcRYGate(q, 2.6973812363544973, 6);
  sqcRZGate(q, -0.8829984613180654, 6);
  sqcRYGate(q, -3.061157840516881, 7);
  sqcRZGate(q, 0.48572261494050395, 7);
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
  sqcRYGate(q, -0.9927969489751272, 0);
  sqcRZGate(q, -0.9020812277991531, 0);
  sqcRYGate(q, 0.22674696377560188, 1);
  sqcRZGate(q, 1.5507954938629998, 1);
  sqcRYGate(q, 0.20519902171660734, 2);
  sqcRZGate(q, 2.3233941689824933, 2);
  sqcRYGate(q, -2.581760511660673, 3);
  sqcRZGate(q, -1.5692954867457818, 3);
  sqcRYGate(q, 2.375954684537765, 4);
  sqcRZGate(q, -2.3131003132949273, 4);
  sqcRYGate(q, -0.272747052514565, 5);
  sqcRZGate(q, 2.9385352214184306, 5);
  sqcRYGate(q, 2.9900981285102075, 6);
  sqcRZGate(q, -1.850089724549535, 6);
  sqcRYGate(q, -2.4747635532588514, 7);
  sqcRZGate(q, 0.23722379169609378, 7);
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
  sqcRYGate(q, 1.4087055383547726, 0);
  sqcRZGate(q, -0.5658107173639707, 0);
  sqcRYGate(q, -0.6490987630989871, 1);
  sqcRZGate(q, -0.5803328546953361, 1);
  sqcRYGate(q, -2.0364240154597884, 2);
  sqcRZGate(q, -0.043078865316789096, 2);
  sqcRYGate(q, 0.42694525728880256, 3);
  sqcRZGate(q, -0.7049393790736256, 3);
  sqcRYGate(q, 2.0511256955035013, 4);
  sqcRZGate(q, -2.6460582959394237, 4);
  sqcRYGate(q, 2.3243829385630965, 5);
  sqcRZGate(q, -1.7469759640528588, 5);
  sqcRYGate(q, 2.4215536120775685, 6);
  sqcRZGate(q, 2.394657427766013, 6);
  sqcRYGate(q, 2.840319456272664, 7);
  sqcRZGate(q, 0.38106472585921125, 7);
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
  sqcRYGate(q, 1.4099874895886417, 0);
  sqcRZGate(q, -0.6884443946325047, 0);
  sqcRYGate(q, 1.1813273499711654, 1);
  sqcRZGate(q, -1.8081471899836554, 1);
  sqcRYGate(q, 1.6491986664938931, 2);
  sqcRZGate(q, -2.9024492621083584, 2);
  sqcRYGate(q, -0.525893534794533, 3);
  sqcRZGate(q, 0.1969746577473845, 3);
  sqcRYGate(q, -0.4838057740859396, 4);
  sqcRZGate(q, 0.9678165026493578, 4);
  sqcRYGate(q, 0.3888042774254261, 5);
  sqcRZGate(q, 0.2843681643247175, 5);
  sqcRYGate(q, -0.7391286451908279, 6);
  sqcRZGate(q, -0.6545390635092591, 6);
  sqcRYGate(q, -0.49195320655102925, 7);
  sqcRZGate(q, 2.8160894516243125, 7);
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
  sqcRYGate(q, -0.7839460296931529, 0);
  sqcRZGate(q, 2.7860265782165965, 0);
  sqcRYGate(q, 1.326098413663316, 1);
  sqcRZGate(q, -2.642695151388835, 1);
  sqcRYGate(q, 0.4326323741029834, 2);
  sqcRZGate(q, -0.44440346281661913, 2);
  sqcRYGate(q, 3.116087867641362, 3);
  sqcRZGate(q, -2.9217082481761296, 3);
  sqcRYGate(q, 2.1236093080595926, 4);
  sqcRZGate(q, -2.6486858913646842, 4);
  sqcRYGate(q, 2.1105845622614963, 5);
  sqcRZGate(q, 2.5565011758111638, 5);
  sqcRYGate(q, -0.6574372412860805, 6);
  sqcRZGate(q, 2.0639060646991245, 6);
  sqcRYGate(q, 1.7809548847339567, 7);
  sqcRZGate(q, 1.2426855446961067, 7);
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
  sqcRYGate(q, 1.1060639631345055, 0);
  sqcRZGate(q, -0.4805933583638753, 0);
  sqcRYGate(q, 2.019500096086599, 1);
  sqcRZGate(q, 2.5810861392464135, 1);
  sqcRYGate(q, 0.7588679090225945, 2);
  sqcRZGate(q, -1.9470921830792678, 2);
  sqcRYGate(q, 2.2649553556140063, 3);
  sqcRZGate(q, -2.2533653359399035, 3);
  sqcRYGate(q, 1.7761881428031432, 4);
  sqcRZGate(q, -1.8724874426378202, 4);
  sqcRYGate(q, -0.5648115917548164, 5);
  sqcRZGate(q, 0.9487963508641707, 5);
  sqcRYGate(q, 1.4294450320525973, 6);
  sqcRZGate(q, -1.4746820576664499, 6);
  sqcRYGate(q, -2.9139204250028667, 7);
  sqcRZGate(q, -1.204383250371528, 7);
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
  sqcRYGate(q, -3.0623059246622226, 0);
  sqcRZGate(q, 0.7992787129710379, 0);
  sqcRYGate(q, 1.2797242368420603, 1);
  sqcRZGate(q, 2.235314635969856, 1);
  sqcRYGate(q, -2.7687980123749747, 2);
  sqcRZGate(q, 2.471469541414349, 2);
  sqcRYGate(q, 3.0338034787518615, 3);
  sqcRZGate(q, 1.1740092559532247, 3);
  sqcRYGate(q, -1.1754172243471386, 4);
  sqcRZGate(q, -2.195137534272586, 4);
  sqcRYGate(q, -1.5647077416101585, 5);
  sqcRZGate(q, -1.9701859504865213, 5);
  sqcRYGate(q, -2.4032147426409227, 6);
  sqcRZGate(q, 2.1510945195975735, 6);
  sqcRYGate(q, -2.3093392922341827, 7);
  sqcRZGate(q, 0.8426275816086239, 7);
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
  sqcRYGate(q, -2.6360312011659928, 0);
  sqcRZGate(q, 1.8702596937557283, 0);
  sqcRYGate(q, 2.1638895853471, 1);
  sqcRZGate(q, 0.8037887922872071, 1);
  sqcRYGate(q, -0.430179791413563, 2);
  sqcRZGate(q, -0.6338830128070966, 2);
  sqcRYGate(q, 0.3338101961999884, 3);
  sqcRZGate(q, -1.086457015141332, 3);
  sqcRYGate(q, -0.5996508301257433, 4);
  sqcRZGate(q, -0.32875748138242505, 4);
  sqcRYGate(q, -2.391398283450307, 5);
  sqcRZGate(q, 0.864687640369189, 5);
  sqcRYGate(q, -2.446540406069868, 6);
  sqcRZGate(q, 1.4419655473343986, 6);
  sqcRYGate(q, -1.326265852687021, 7);
  sqcRZGate(q, -2.912348154003589, 7);
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
  sqcRYGate(q, -0.12942218025395477, 0);
  sqcRZGate(q, 0.6142087804671421, 0);
  sqcRYGate(q, -0.5957216499260323, 1);
  sqcRZGate(q, 1.8144052815353113, 1);
  sqcRYGate(q, 0.1346413968680853, 2);
  sqcRZGate(q, -1.764845390072684, 2);
  sqcRYGate(q, -0.9003862445601607, 3);
  sqcRZGate(q, -0.12116806394953511, 3);
  sqcRYGate(q, 2.3317984407862498, 4);
  sqcRZGate(q, 1.7766336602991943, 4);
  sqcRYGate(q, -1.2421113962884673, 5);
  sqcRZGate(q, -0.31647206991177157, 5);
  sqcRYGate(q, 1.3763826003509372, 6);
  sqcRZGate(q, -1.4126832284253554, 6);
  sqcRYGate(q, -0.6573299001082828, 7);
  sqcRZGate(q, -2.799342353656834, 7);
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
  sqcRYGate(q, -0.7479123846048363, 0);
  sqcRZGate(q, 1.0377435972499773, 0);
  sqcRYGate(q, -0.09116089041029252, 1);
  sqcRZGate(q, 2.799493729390823, 1);
  sqcRYGate(q, 0.6557460256378969, 2);
  sqcRZGate(q, 2.91597448695453, 2);
  sqcRYGate(q, -1.999251527827362, 3);
  sqcRZGate(q, 2.6934929805199794, 3);
  sqcRYGate(q, 2.2756230756716733, 4);
  sqcRZGate(q, -1.2123945422048834, 4);
  sqcRYGate(q, -2.571780158838573, 5);
  sqcRZGate(q, -2.7385542424086853, 5);
  sqcRYGate(q, -0.5221511246432637, 6);
  sqcRZGate(q, 1.4978014869239822, 6);
  sqcRYGate(q, -0.9369916703992828, 7);
  sqcRZGate(q, -3.0237817731723644, 7);
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
  sqcRYGate(q, 2.557795755058859, 0);
  sqcRZGate(q, -1.9512665983028938, 0);
  sqcRYGate(q, 2.4308022319616422, 1);
  sqcRZGate(q, -2.9743278956450694, 1);
  sqcRYGate(q, 2.9094689890853833, 2);
  sqcRZGate(q, -0.15791309261040354, 2);
  sqcRYGate(q, -1.785136673488113, 3);
  sqcRZGate(q, 1.6850080392621933, 3);
  sqcRYGate(q, -1.7149635423579348, 4);
  sqcRZGate(q, 1.8178746657288987, 4);
  sqcRYGate(q, -1.2178695938450907, 5);
  sqcRZGate(q, 2.7117488212144765, 5);
  sqcRYGate(q, 2.6302895926734235, 6);
  sqcRZGate(q, -1.6282032412501668, 6);
  sqcRYGate(q, -1.5008286046918795, 7);
  sqcRZGate(q, 0.30682544562988046, 7);
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
  sqcRYGate(q, -2.6233229930475597, 0);
  sqcRZGate(q, 1.7412687127049122, 0);
  sqcRYGate(q, -2.9337899574300876, 1);
  sqcRZGate(q, -1.132228707306993, 1);
  sqcRYGate(q, 0.749662582841709, 2);
  sqcRZGate(q, 0.10728515124503811, 2);
  sqcRYGate(q, -3.032832463620495, 3);
  sqcRZGate(q, 0.6307184720779961, 3);
  sqcRYGate(q, 0.41636876390026123, 4);
  sqcRZGate(q, 1.2884109512546384, 4);
  sqcRYGate(q, -2.9400935765836445, 5);
  sqcRZGate(q, 1.3572627107921698, 5);
  sqcRYGate(q, -1.6631575807273764, 6);
  sqcRZGate(q, 2.9718581607775554, 6);
  sqcRYGate(q, 0.8933769333511972, 7);
  sqcRZGate(q, -1.8675744077356997, 7);
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
  sqcRYGate(q, -1.3446370105182814, 0);
  sqcRZGate(q, 3.119680993740075, 0);
  sqcRYGate(q, 2.198851412417067, 1);
  sqcRZGate(q, -0.451439830737387, 1);
  sqcRYGate(q, -1.3066578406395568, 2);
  sqcRZGate(q, 2.260958861220025, 2);
  sqcRYGate(q, -0.898562438452754, 3);
  sqcRZGate(q, -1.5764207425330763, 3);
  sqcRYGate(q, 0.4571150931495165, 4);
  sqcRZGate(q, 0.1229958849314024, 4);
  sqcRYGate(q, -2.91429548811198, 5);
  sqcRZGate(q, -1.2101176624662877, 5);
  sqcRYGate(q, 2.926235943758865, 6);
  sqcRZGate(q, -0.9563161865076594, 6);
  sqcRYGate(q, -2.1573749221625538, 7);
  sqcRZGate(q, 2.2221442862294603, 7);
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
  sqcRYGate(q, 1.5598481044058825, 0);
  sqcRZGate(q, 1.899320687467637, 0);
  sqcRYGate(q, -2.2792745993923083, 1);
  sqcRZGate(q, -2.1222177837872764, 1);
  sqcRYGate(q, 1.4302171931621608, 2);
  sqcRZGate(q, -2.4071235045740735, 2);
  sqcRYGate(q, 1.3097613534141213, 3);
  sqcRZGate(q, -0.40416762307245335, 3);
  sqcRYGate(q, 1.90635442442082, 4);
  sqcRZGate(q, -0.08421223193626393, 4);
  sqcRYGate(q, 2.095400032125875, 5);
  sqcRZGate(q, 0.3033421288585654, 5);
  sqcRYGate(q, -1.364539425864846, 6);
  sqcRZGate(q, -0.13331159680798788, 6);
  sqcRYGate(q, -2.083104797144874, 7);
  sqcRZGate(q, -3.0013891278925064, 7);
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
  sqcRYGate(q, -0.01199210882847224, 0);
  sqcRZGate(q, 2.3401030714264226, 0);
  sqcRYGate(q, -1.9255361717817987, 1);
  sqcRZGate(q, -1.0924463999220606, 1);
  sqcRYGate(q, 2.232315192739799, 2);
  sqcRZGate(q, -2.3647195576698214, 2);
  sqcRYGate(q, -1.6706335001626944, 3);
  sqcRZGate(q, -0.13622552058697668, 3);
  sqcRYGate(q, 1.7110558073077264, 4);
  sqcRZGate(q, -1.7774118834403048, 4);
  sqcRYGate(q, 1.172328597623368, 5);
  sqcRZGate(q, 2.5386184933272276, 5);
  sqcRYGate(q, -1.5035610029551123, 6);
  sqcRZGate(q, 1.6094194488491746, 6);
  sqcRYGate(q, 1.8559918755366647, 7);
  sqcRZGate(q, -1.7023740020417397, 7);
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
  sqcRYGate(q, 1.2583855170361828, 0);
  sqcRZGate(q, -3.01741521656255, 0);
  sqcRYGate(q, -0.6589551517870641, 1);
  sqcRZGate(q, -2.2533638860517082, 1);
  sqcRYGate(q, -1.420382997682433, 2);
  sqcRZGate(q, -1.8853001096622208, 2);
  sqcRYGate(q, 2.558801310430515, 3);
  sqcRZGate(q, -1.998813234662203, 3);
  sqcRYGate(q, 0.5847410353965203, 4);
  sqcRZGate(q, 1.417483873477697, 4);
  sqcRYGate(q, -2.278608421036203, 5);
  sqcRZGate(q, 2.2166939811188726, 5);
  sqcRYGate(q, -0.6982982236618369, 6);
  sqcRZGate(q, 1.0452931420470488, 6);
  sqcRYGate(q, 2.171363852585766, 7);
  sqcRZGate(q, 1.2644459554317309, 7);
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
  sqcRYGate(q, 1.0965533609004434, 0);
  sqcRZGate(q, 2.2922317257241396, 0);
  sqcRYGate(q, 3.0231527146668613, 1);
  sqcRZGate(q, 2.0498080322262693, 1);
  sqcRYGate(q, -2.341832555973128, 2);
  sqcRZGate(q, 1.4770834129824868, 2);
  sqcRYGate(q, 2.233021329014408, 3);
  sqcRZGate(q, -0.5701516593317395, 3);
  sqcRYGate(q, -0.17638069896503594, 4);
  sqcRZGate(q, -1.1677225794934918, 4);
  sqcRYGate(q, -2.5696583232973476, 5);
  sqcRZGate(q, 1.9337504525805935, 5);
  sqcRYGate(q, 1.996098464654057, 6);
  sqcRZGate(q, 1.0493312942817117, 6);
  sqcRYGate(q, -2.9571420138189253, 7);
  sqcRZGate(q, 0.4228275665625186, 7);
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
  sqcRYGate(q, 2.1548135036529064, 0);
  sqcRZGate(q, -0.8381302369555703, 0);
  sqcRYGate(q, 3.006382615811199, 1);
  sqcRZGate(q, -1.2512290383230378, 1);
  sqcRYGate(q, 1.3247343628617374, 2);
  sqcRZGate(q, -1.548623724531045, 2);
  sqcRYGate(q, -1.9933357772657398, 3);
  sqcRZGate(q, -0.7063823006771974, 3);
  sqcRYGate(q, 2.2857830180775065, 4);
  sqcRZGate(q, -3.099443126069224, 4);
  sqcRYGate(q, -1.7437658585553717, 5);
  sqcRZGate(q, 1.9315742934958082, 5);
  sqcRYGate(q, 2.2611724653388894, 6);
  sqcRZGate(q, 1.2334977163420642, 6);
  sqcRYGate(q, -0.17870771037263558, 7);
  sqcRZGate(q, 0.9549596125280837, 7);
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
  sqcRYGate(q, 1.9499709672369259, 0);
  sqcRZGate(q, 1.3462669706893862, 0);
  sqcRYGate(q, 3.120952639030382, 1);
  sqcRZGate(q, 0.6441003456786144, 1);
  sqcRYGate(q, 1.0526925738439772, 2);
  sqcRZGate(q, -2.841599920772884, 2);
  sqcRYGate(q, -1.2753785244375875, 3);
  sqcRZGate(q, 3.0217872804713264, 3);
  sqcRYGate(q, 0.904790947589767, 4);
  sqcRZGate(q, -0.8937919725049942, 4);
  sqcRYGate(q, 2.2051803667294116, 5);
  sqcRZGate(q, 2.288256405378125, 5);
  sqcRYGate(q, 0.6202735775950465, 6);
  sqcRZGate(q, 1.0211949391578037, 6);
  sqcRYGate(q, -1.98995944154984, 7);
  sqcRZGate(q, -0.13190981289863313, 7);
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
  sqcRYGate(q, -1.776999193389706, 0);
  sqcRZGate(q, 0.27705471262722714, 0);
  sqcRYGate(q, -0.12060618414552644, 1);
  sqcRZGate(q, -2.150288304491121, 1);
  sqcRYGate(q, 2.506993418972852, 2);
  sqcRZGate(q, -2.4995692241916876, 2);
  sqcRYGate(q, 2.008798276499189, 3);
  sqcRZGate(q, -1.1500294283750843, 3);
  sqcRYGate(q, -1.7597323466231551, 4);
  sqcRZGate(q, 1.2487880410046952, 4);
  sqcRYGate(q, -0.368259730596491, 5);
  sqcRZGate(q, -1.604789957385698, 5);
  sqcRYGate(q, -2.0201530336479507, 6);
  sqcRZGate(q, -2.5382772219676384, 6);
  sqcRYGate(q, -2.1713882128243682, 7);
  sqcRZGate(q, 0.7876417746769633, 7);
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
  sqcRYGate(q, 0.46517010345275, 0);
  sqcRZGate(q, -0.8410280381698727, 0);
  sqcRYGate(q, 0.6702634447248111, 1);
  sqcRZGate(q, -2.425879646427058, 1);
  sqcRYGate(q, -3.0321240156670766, 2);
  sqcRZGate(q, 2.0202668977610156, 2);
  sqcRYGate(q, -2.606421593232828, 3);
  sqcRZGate(q, -2.61820296482519, 3);
  sqcRYGate(q, 1.5947627061054082, 4);
  sqcRZGate(q, -1.144523630916357, 4);
  sqcRYGate(q, 1.1405877851416113, 5);
  sqcRZGate(q, 2.871874095814651, 5);
  sqcRYGate(q, 2.2904453655858714, 6);
  sqcRZGate(q, -2.4575875338257225, 6);
  sqcRYGate(q, -0.5876555200185606, 7);
  sqcRZGate(q, 2.073349822424019, 7);
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
  sqcRYGate(q, 1.2988864576490755, 0);
  sqcRZGate(q, -1.6175705678524317, 0);
  sqcRYGate(q, -2.3690247571000627, 1);
  sqcRZGate(q, -0.771387646403011, 1);
  sqcRYGate(q, 1.5152315230727202, 2);
  sqcRZGate(q, -2.264860506131418, 2);
  sqcRYGate(q, -3.018151293605039, 3);
  sqcRZGate(q, 2.234072551569815, 3);
  sqcRYGate(q, -0.9455433163397018, 4);
  sqcRZGate(q, -1.964078468304093, 4);
  sqcRYGate(q, 0.768370879410295, 5);
  sqcRZGate(q, 0.5379666053071085, 5);
  sqcRYGate(q, -2.8729541566234573, 6);
  sqcRZGate(q, -1.4917735373198349, 6);
  sqcRYGate(q, -0.31864876667169817, 7);
  sqcRZGate(q, 1.8340494517907933, 7);
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
  sqcRYGate(q, -1.3522021680824015, 0);
  sqcRZGate(q, -1.7422425237665229, 0);
  sqcRYGate(q, 1.4378234168747417, 1);
  sqcRZGate(q, 1.3669038834597556, 1);
  sqcRYGate(q, 2.494898378306801, 2);
  sqcRZGate(q, -0.14571427263720693, 2);
  sqcRYGate(q, 0.7848833082725681, 3);
  sqcRZGate(q, -2.234957181630084, 3);
  sqcRYGate(q, -1.7834996074636809, 4);
  sqcRZGate(q, 1.599301272589404, 4);
  sqcRYGate(q, 0.8991119699356639, 5);
  sqcRZGate(q, 1.4029036904631604, 5);
  sqcRYGate(q, 0.07144334760531096, 6);
  sqcRZGate(q, -0.04108060395703195, 6);
  sqcRYGate(q, -2.1839036969724344, 7);
  sqcRZGate(q, -2.573318091893578, 7);
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
  sqcRYGate(q, 1.7712122479805985, 0);
  sqcRZGate(q, 0.8934920625051808, 0);
  sqcRYGate(q, 1.1114168688706145, 1);
  sqcRZGate(q, 1.255521533237776, 1);
  sqcRYGate(q, 1.8412746776992561, 2);
  sqcRZGate(q, -2.008745194103178, 2);
  sqcRYGate(q, 2.534987739712954, 3);
  sqcRZGate(q, -0.3868643822933251, 3);
  sqcRYGate(q, 0.8419811735824566, 4);
  sqcRZGate(q, -2.2165392560829162, 4);
  sqcRYGate(q, 2.3685635796121813, 5);
  sqcRZGate(q, -2.8815793997544414, 5);
  sqcRYGate(q, -1.6092491941239226, 6);
  sqcRZGate(q, -1.123260215371178, 6);
  sqcRYGate(q, 0.6398888968907671, 7);
  sqcRZGate(q, -3.034974750300697, 7);

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
