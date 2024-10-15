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

  sqcRYGate(q, 1.5707174480383788, 0);
  sqcRZGate(q, -0.01489637826428188, 0);
  sqcRYGate(q, -1.5708222195169768, 1);
  sqcRZGate(q, -1.6485105565641185, 1);
  sqcRYGate(q, 4.010027470702226e-05, 2);
  sqcRZGate(q, 0.7049538496047347, 2);
  sqcRYGate(q, -1.570854238376012, 3);
  sqcRZGate(q, -0.7978816976255663, 3);
  sqcRYGate(q, 1.5720133285375157, 4);
  sqcRZGate(q, 1.5488197735998224, 4);
  sqcRYGate(q, 0.0022553640235569716, 5);
  sqcRZGate(q, 1.5337912023681135, 5);
  sqcRYGate(q, -1.5707707473533026, 6);
  sqcRZGate(q, -2.5425352847530767, 6);
  sqcRYGate(q, -1.5714701997754348, 7);
  sqcRZGate(q, 0.002100721526640647, 7);
  sqcRYGate(q, -1.5708055536702743, 8);
  sqcRZGate(q, -1.2266852532368153, 8);
  sqcRYGate(q, 1.5708246806756918, 9);
  sqcRZGate(q, 2.529969966333508, 9);
  sqcRYGate(q, 1.5706685422548274, 10);
  sqcRZGate(q, -0.015060869187649423, 10);
  sqcRYGate(q, -1.5708083153414365, 11);
  sqcRZGate(q, 0.06725467088165525, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -2.3601816362473653, 0);
  sqcRZGate(q, -1.2508532248918363, 0);
  sqcRYGate(q, -1.5525276675698676, 1);
  sqcRZGate(q, -0.33094061174697037, 1);
  sqcRYGate(q, -3.14143319372403, 2);
  sqcRZGate(q, 2.457617940552364, 2);
  sqcRYGate(q, 3.10517679821372, 3);
  sqcRZGate(q, -2.3474324994352123, 3);
  sqcRYGate(q, 1.585491321650999, 4);
  sqcRZGate(q, 1.359865627531792, 4);
  sqcRYGate(q, -1.5688541898952633, 5);
  sqcRZGate(q, 1.138160060457368, 5);
  sqcRYGate(q, -2.9522611648729504, 6);
  sqcRZGate(q, 2.169173608972616, 6);
  sqcRYGate(q, -1.7428543156717602, 7);
  sqcRZGate(q, 1.5249331929248597, 7);
  sqcRYGate(q, -0.0021880921182884094, 8);
  sqcRZGate(q, -0.5362708723406808, 8);
  sqcRYGate(q, -0.0001044318476521866, 9);
  sqcRZGate(q, 2.18237937594564, 9);
  sqcRYGate(q, 2.9576698038805844, 10);
  sqcRZGate(q, 1.6243200862681855, 10);
  sqcRYGate(q, -3.1407400403331445, 11);
  sqcRZGate(q, -0.0006263241917254803, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 2.3371073796538666, 0);
  sqcRZGate(q, 1.8058885821871797, 0);
  sqcRYGate(q, -1.480251940537456, 1);
  sqcRZGate(q, 0.1868809478646991, 1);
  sqcRYGate(q, 3.141544556561565, 2);
  sqcRZGate(q, -2.9248268759527623, 2);
  sqcRYGate(q, 2.0905138385373334, 3);
  sqcRZGate(q, 1.989555359988306, 3);
  sqcRYGate(q, -1.8956565702055173e-05, 4);
  sqcRZGate(q, -0.8184332182996362, 4);
  sqcRYGate(q, 0.00021088530478419187, 5);
  sqcRZGate(q, -1.7053885784752607, 5);
  sqcRYGate(q, 0.001442074048958315, 6);
  sqcRZGate(q, -0.9186732483398741, 6);
  sqcRYGate(q, -0.011351093497450115, 7);
  sqcRZGate(q, 2.3073201864152733, 7);
  sqcRYGate(q, -3.141282957064504, 8);
  sqcRZGate(q, 1.6631674948361548, 8);
  sqcRYGate(q, 2.739630008026347, 9);
  sqcRZGate(q, 3.1398761303444496, 9);
  sqcRYGate(q, -0.0004994445577395886, 10);
  sqcRZGate(q, 1.212920826578404, 10);
  sqcRYGate(q, -3.1415847057296906, 11);
  sqcRZGate(q, 3.0737173028173905, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -2.6227226826080057, 0);
  sqcRZGate(q, 2.5578995035549528, 0);
  sqcRYGate(q, 1.576430159048039, 1);
  sqcRZGate(q, -2.767160750602231, 1);
  sqcRYGate(q, -3.1415638324756636, 2);
  sqcRZGate(q, -1.1793833542595633, 2);
  sqcRYGate(q, 3.1401523932274893, 3);
  sqcRZGate(q, -1.2071304811706136, 3);
  sqcRYGate(q, -9.996469090900462e-05, 4);
  sqcRZGate(q, 2.418525635073996, 4);
  sqcRYGate(q, 3.140069960286351, 5);
  sqcRZGate(q, 0.3239312972048235, 5);
  sqcRYGate(q, 3.128885107585465, 6);
  sqcRZGate(q, 0.3172584917154521, 6);
  sqcRYGate(q, 3.1409898873522386, 7);
  sqcRZGate(q, 2.242968783117484, 7);
  sqcRYGate(q, -1.0102567890696514, 8);
  sqcRZGate(q, 1.4166789197167655, 8);
  sqcRYGate(q, -1.5683274807636658, 9);
  sqcRZGate(q, -2.5408680002040316, 9);
  sqcRYGate(q, -1.0435981610881757, 10);
  sqcRZGate(q, 1.7193828518858203, 10);
  sqcRYGate(q, 1.409272392263305, 11);
  sqcRZGate(q, -0.2585542324573824, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -6.074909499886872e-07, 0);
  sqcRZGate(q, 0.5896211790477706, 0);
  sqcRYGate(q, 4.821418805525207e-05, 1);
  sqcRZGate(q, -1.6205967377805894, 1);
  sqcRYGate(q, -3.14152869735542, 2);
  sqcRZGate(q, -1.746435527462154, 2);
  sqcRYGate(q, 3.1405183299205106, 3);
  sqcRZGate(q, -0.0693312613293875, 3);
  sqcRYGate(q, 3.141543697674215, 4);
  sqcRZGate(q, -1.612901949733109, 4);
  sqcRYGate(q, -3.1415306616945062, 5);
  sqcRZGate(q, 0.8821252352028539, 5);
  sqcRYGate(q, -7.604465487679434e-06, 6);
  sqcRZGate(q, -2.9567331511913113, 6);
  sqcRYGate(q, 0.0010996113593462198, 7);
  sqcRZGate(q, 1.5884052291664066, 7);
  sqcRYGate(q, 1.5708491321522708, 8);
  sqcRZGate(q, -0.7335515261235557, 8);
  sqcRYGate(q, 1.5632657543721997, 9);
  sqcRZGate(q, -0.005038983639646055, 9);
  sqcRYGate(q, -1.5708419686123316, 10);
  sqcRZGate(q, 1.3582935233677391, 10);
  sqcRYGate(q, 2.167471864211734e-06, 11);
  sqcRZGate(q, -1.6476602127755857, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -1.1462832472520885, 0);
  sqcRZGate(q, 1.386900741660921, 0);
  sqcRYGate(q, -0.4822753827006574, 1);
  sqcRZGate(q, -1.8900624725170625, 1);
  sqcRYGate(q, -3.1414286691108635, 2);
  sqcRZGate(q, 0.09489844801730563, 2);
  sqcRYGate(q, 1.5616079336118416, 3);
  sqcRZGate(q, 0.3093652201570265, 3);
  sqcRYGate(q, 1.5502116825152017, 4);
  sqcRZGate(q, -0.019013960723021306, 4);
  sqcRYGate(q, 1.5684976727099214, 5);
  sqcRZGate(q, 1.5654951250608888, 5);
  sqcRYGate(q, 0.6529299950571136, 6);
  sqcRZGate(q, -1.7304860425348538, 6);
  sqcRYGate(q, 1.7392331058687076, 7);
  sqcRZGate(q, -0.0021190541718860622, 7);
  sqcRYGate(q, 0.000884964194671182, 8);
  sqcRZGate(q, 2.2929278734056546, 8);
  sqcRYGate(q, 1.5739573129285351, 9);
  sqcRZGate(q, -1.6095702811492298, 9);
  sqcRYGate(q, -3.138916624190226, 10);
  sqcRZGate(q, -0.20874495772239718, 10);
  sqcRYGate(q, 1.2123642625899787e-05, 11);
  sqcRZGate(q, 0.3354262662461174, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.140849031763602, 0);
  sqcRZGate(q, -1.620633992176792, 0);
  sqcRYGate(q, 3.140352954508175, 1);
  sqcRZGate(q, -1.9608921685668865, 1);
  sqcRYGate(q, 3.141533946883613, 2);
  sqcRZGate(q, 0.07711343283998405, 2);
  sqcRYGate(q, 1.5710029501216196, 3);
  sqcRZGate(q, 2.693725238028996, 3);
  sqcRYGate(q, 0.7943821852187867, 4);
  sqcRZGate(q, 1.5710571278101293, 4);
  sqcRYGate(q, -1.5717248504794474, 5);
  sqcRZGate(q, 0.0007901218672735195, 5);
  sqcRYGate(q, -1.5917350210297716, 6);
  sqcRZGate(q, -1.5781567227249342, 6);
  sqcRYGate(q, -1.5708142752691368, 7);
  sqcRZGate(q, -2.6634325532169645, 7);
  sqcRYGate(q, 2.8770565877499847, 8);
  sqcRZGate(q, -0.011802138941697573, 8);
  sqcRYGate(q, -3.0474450632720704, 9);
  sqcRZGate(q, 3.1027108039440225, 9);
  sqcRYGate(q, 3.1304823133911825, 10);
  sqcRZGate(q, -3.137859820332758, 10);
  sqcRYGate(q, -1.0700461920061697, 11);
  sqcRZGate(q, -1.5708001440452306, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.1413597444726578, 0);
  sqcRZGate(q, -2.077968018308355, 0);
  sqcRYGate(q, -3.1413677269243236, 1);
  sqcRZGate(q, 0.4432826753066587, 1);
  sqcRYGate(q, 6.848314312080106e-06, 2);
  sqcRZGate(q, -1.6508605451979093, 2);
  sqcRYGate(q, -3.141586810713245, 3);
  sqcRZGate(q, 2.392602845810168, 3);
  sqcRYGate(q, 1.5770299252977356, 4);
  sqcRZGate(q, 1.5714614927245147, 4);
  sqcRYGate(q, 1.5720941799922707, 5);
  sqcRZGate(q, -1.56798162220787, 5);
  sqcRYGate(q, 0.8108726393958916, 6);
  sqcRZGate(q, -2.8677382756112864, 6);
  sqcRYGate(q, 1.5717696449185325, 7);
  sqcRZGate(q, -0.0020404989768427386, 7);
  sqcRYGate(q, -1.561835646701115, 8);
  sqcRZGate(q, 2.9802793374714143, 8);
  sqcRYGate(q, 1.5786243202834696, 9);
  sqcRZGate(q, -1.5716630923193264, 9);
  sqcRYGate(q, -1.5785288460687656, 10);
  sqcRZGate(q, 1.57097868291714, 10);
  sqcRYGate(q, 2.392117848731104, 11);
  sqcRZGate(q, 1.6870829942172716, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.141304766978974, 0);
  sqcRZGate(q, 2.3261304769610054, 0);
  sqcRYGate(q, -0.0002234351144405622, 1);
  sqcRZGate(q, -2.503110448885255, 1);
  sqcRYGate(q, 3.141435555187248, 2);
  sqcRZGate(q, 2.220833480115281, 2);
  sqcRYGate(q, 3.14001270152613, 3);
  sqcRZGate(q, 1.281729180413297, 3);
  sqcRYGate(q, 1.5690777265180182, 4);
  sqcRZGate(q, -3.1215169317689133, 4);
  sqcRYGate(q, -1.5697487928949947, 5);
  sqcRZGate(q, 1.5313055570625205, 5);
  sqcRYGate(q, 3.130187652487157, 6);
  sqcRZGate(q, 0.876883232589681, 6);
  sqcRYGate(q, 1.5701565506865072, 7);
  sqcRZGate(q, -1.6272436629740463, 7);
  sqcRYGate(q, -0.00035294333355443596, 8);
  sqcRZGate(q, -0.507923562299526, 8);
  sqcRYGate(q, -1.5725863551672516, 9);
  sqcRZGate(q, -1.5714118397458403, 9);
  sqcRYGate(q, 1.568557672293507, 10);
  sqcRZGate(q, -1.5710305468400882, 10);
  sqcRYGate(q, 3.1408170210042914, 11);
  sqcRZGate(q, 1.0083824835908768, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.0459561328355327, 0);
  sqcRZGate(q, 0.3834562769783797, 0);
  sqcRYGate(q, -2.873888230064885, 1);
  sqcRZGate(q, 2.6467031122835074, 1);
  sqcRYGate(q, -1.5701602255476634, 2);
  sqcRZGate(q, 0.00015944859932215394, 2);
  sqcRYGate(q, -2.874571141682585, 3);
  sqcRZGate(q, -0.5273548288848598, 3);
  sqcRYGate(q, -0.09810944104989615, 4);
  sqcRZGate(q, -2.3966447232091372, 4);
  sqcRYGate(q, -0.03377805473541339, 5);
  sqcRZGate(q, 0.0968838899432272, 5);
  sqcRYGate(q, 3.141210351989503, 6);
  sqcRZGate(q, 1.3468917386387769, 6);
  sqcRYGate(q, 2.230757990862031e-05, 7);
  sqcRZGate(q, -0.9040010230280648, 7);
  sqcRYGate(q, 0.0007122008549523286, 8);
  sqcRZGate(q, -2.454983724041085, 8);
  sqcRYGate(q, 1.5713285836521482, 9);
  sqcRZGate(q, 2.8205657780727758, 9);
  sqcRYGate(q, 1.571653507005974, 10);
  sqcRZGate(q, 2.903011917582974, 10);
  sqcRYGate(q, -3.965404371086834e-06, 11);
  sqcRZGate(q, 2.2494995959211987, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.7977591635096767e-05, 0);
  sqcRZGate(q, 1.1829135482389581, 0);
  sqcRYGate(q, 7.5919391384735e-05, 1);
  sqcRZGate(q, -0.24663090695177647, 1);
  sqcRYGate(q, 1.5713512835023107, 2);
  sqcRZGate(q, 3.140084743612632, 2);
  sqcRYGate(q, -0.0001386239935395794, 3);
  sqcRZGate(q, -2.607554438860463, 3);
  sqcRYGate(q, 3.0245814702567486e-05, 4);
  sqcRZGate(q, 0.8357705630290582, 4);
  sqcRYGate(q, 0.00014581247347233983, 5);
  sqcRZGate(q, -0.05828032403799188, 5);
  sqcRYGate(q, -3.141563446204426, 6);
  sqcRZGate(q, 0.7438853844428167, 6);
  sqcRYGate(q, 3.1415918341319946, 7);
  sqcRZGate(q, 0.6100931329907837, 7);
  sqcRYGate(q, 3.1415632965837146, 8);
  sqcRZGate(q, 0.017362347790674745, 8);
  sqcRYGate(q, 3.141550117369276, 9);
  sqcRZGate(q, -2.7391051344468815, 9);
  sqcRYGate(q, -2.6900410308172692e-05, 10);
  sqcRZGate(q, 0.4389796930500976, 10);
  sqcRYGate(q, 1.5706557902036566, 11);
  sqcRZGate(q, -1.5675689841141658, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.00028622745400453515, 0);
  sqcRZGate(q, 1.389892635384096, 0);
  sqcRYGate(q, 0.0006777134704178103, 1);
  sqcRZGate(q, 0.6740615734580703, 1);
  sqcRYGate(q, 1.5728270143480878, 2);
  sqcRZGate(q, -3.1405397654999727, 2);
  sqcRYGate(q, -1.570336042781737, 3);
  sqcRZGate(q, 0.004289103101024492, 3);
  sqcRYGate(q, -3.134014104547113, 4);
  sqcRZGate(q, 1.604764219614423, 4);
  sqcRYGate(q, -0.7758382886557454, 5);
  sqcRZGate(q, 0.02667901001724804, 5);
  sqcRYGate(q, -1.5705558465641771, 6);
  sqcRZGate(q, 1.576813031515881, 6);
  sqcRYGate(q, 1.5707477900583937, 7);
  sqcRZGate(q, 0.0005989510605634612, 7);
  sqcRYGate(q, -1.5701236736216677, 8);
  sqcRZGate(q, -1.5707756893246998, 8);
  sqcRYGate(q, 3.140474777443818, 9);
  sqcRZGate(q, -0.8472735565692666, 9);
  sqcRYGate(q, -0.0015015619020477544, 10);
  sqcRZGate(q, 1.3704009852419092, 10);
  sqcRYGate(q, 2.978813456697485, 11);
  sqcRZGate(q, 1.5740117711561363, 11);

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
