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

  sqcRYGate(q, -0.027516859103704522, 0);
  sqcRZGate(q, 3.141576745396116, 0);
  sqcRYGate(q, -0.016571160190782308, 1);
  sqcRZGate(q, 3.141293176736112, 1);
  sqcRYGate(q, 3.004661847675259, 2);
  sqcRZGate(q, 9.158977600343121e-06, 2);
  sqcRYGate(q, 0.01392501485180464, 3);
  sqcRZGate(q, 3.1383699047431843, 3);
  sqcRYGate(q, -0.00017878793657732928, 4);
  sqcRZGate(q, 2.9066715123061875, 4);
  sqcRYGate(q, -0.018361335169001514, 5);
  sqcRZGate(q, -0.0015415997089376669, 5);
  sqcRYGate(q, 2.544440087539335, 6);
  sqcRZGate(q, -2.9250715982698242e-05, 6);
  sqcRYGate(q, -0.02109479186994001, 7);
  sqcRZGate(q, 3.1405741720894884, 7);
  sqcRYGate(q, 1.4989228363322367, 8);
  sqcRZGate(q, -3.141579729180084, 8);
  sqcRYGate(q, 3.320474607791826e-08, 9);
  sqcRZGate(q, -1.4149025247866833, 9);
  sqcRYGate(q, -0.7056372384045211, 10);
  sqcRZGate(q, -3.1415514276508802, 10);
  sqcRYGate(q, -0.057069507893663385, 11);
  sqcRZGate(q, -0.010626986432467445, 11);
  sqcRYGate(q, 0.16546442095873576, 12);
  sqcRZGate(q, 0.0003389702534539747, 12);
  sqcRYGate(q, 3.115723919710485, 13);
  sqcRZGate(q, 0.001177361012016043, 13);
  sqcRYGate(q, 3.1019197022079896, 14);
  sqcRZGate(q, -3.1399112020585207, 14);
  sqcRYGate(q, 0.008211811457999652, 15);
  sqcRZGate(q, 0.049277237906540705, 15);
  sqcRYGate(q, 2.0635075644648282e-05, 16);
  sqcRZGate(q, -1.727160490440502, 16);
  sqcRYGate(q, -0.0027476861822120758, 17);
  sqcRZGate(q, -2.9714402645082876, 17);
  sqcRYGate(q, -3.129899696870801, 18);
  sqcRZGate(q, -0.0053410561924343005, 18);
  sqcRYGate(q, -0.0016006253256599385, 19);
  sqcRZGate(q, 1.2869304421929637, 19);
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
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, 2.9621064431466304, 0);
  sqcRZGate(q, 1.544642054601848, 0);
  sqcRYGate(q, 0.03784306844376584, 1);
  sqcRZGate(q, -0.8772581156151347, 1);
  sqcRYGate(q, -2.4052387304780343, 2);
  sqcRZGate(q, 1.5684319496856443, 2);
  sqcRYGate(q, -0.0335108440732208, 3);
  sqcRZGate(q, 0.8684534767647101, 3);
  sqcRYGate(q, -1.5708283927342546, 4);
  sqcRZGate(q, -3.1305572686830057, 4);
  sqcRYGate(q, -3.0312332518910017, 5);
  sqcRZGate(q, 3.0918388080507677, 5);
  sqcRYGate(q, -2.4100146492438754, 6);
  sqcRZGate(q, -1.5955903397437012, 6);
  sqcRYGate(q, -0.043303134645463544, 7);
  sqcRZGate(q, -0.6512136672054298, 7);
  sqcRYGate(q, 1.9906991911434848, 8);
  sqcRZGate(q, -1.595740678469506, 8);
  sqcRYGate(q, -3.1415924972175175, 9);
  sqcRZGate(q, 1.5556650564641223, 9);
  sqcRYGate(q, -2.92494170640405, 10);
  sqcRZGate(q, -1.55254028363008, 10);
  sqcRYGate(q, -3.135919125428861, 11);
  sqcRZGate(q, -1.610269951203085, 11);
  sqcRYGate(q, -0.015067619300224995, 12);
  sqcRZGate(q, 1.5859492153444599, 12);
  sqcRYGate(q, 0.00944805222095847, 13);
  sqcRZGate(q, -1.555134560991407, 13);
  sqcRYGate(q, -0.007852790843648982, 14);
  sqcRZGate(q, -1.5587323405643083, 14);
  sqcRYGate(q, 3.1392940175545685, 15);
  sqcRZGate(q, -1.535335944642978, 15);
  sqcRYGate(q, -3.1370516585115378, 16);
  sqcRZGate(q, -3.1313469334941226, 16);
  sqcRYGate(q, 0.0010088639761822017, 17);
  sqcRZGate(q, 1.4252110544980907, 17);
  sqcRYGate(q, 3.139615455060063, 18);
  sqcRZGate(q, -1.582784111322832, 18);
  sqcRYGate(q, -3.14145780045117, 19);
  sqcRZGate(q, 2.849080011224868, 19);
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
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, -0.0022420491415720985, 0);
  sqcRZGate(q, 1.5974858239171938, 0);
  sqcRYGate(q, -0.0004979224925669712, 1);
  sqcRZGate(q, -2.254190141567691, 1);
  sqcRYGate(q, 0.0070620647311360205, 2);
  sqcRZGate(q, -1.5685297863918133, 2);
  sqcRYGate(q, 0.00023405155911881482, 3);
  sqcRZGate(q, 2.272505288034541, 3);
  sqcRYGate(q, 1.5706493489775792, 4);
  sqcRZGate(q, -0.00047823483933839833, 4);
  sqcRYGate(q, -0.0001739599589662235, 5);
  sqcRZGate(q, 0.04956164029718554, 5);
  sqcRYGate(q, 3.128267021114098, 6);
  sqcRZGate(q, -1.5958366598140934, 6);
  sqcRYGate(q, -0.0007844098440067266, 7);
  sqcRZGate(q, 0.6515266075920194, 7);
  sqcRYGate(q, -0.023814810329294233, 8);
  sqcRZGate(q, 1.596155732968803, 8);
  sqcRYGate(q, -3.1415925034975136, 9);
  sqcRZGate(q, 0.5862218165886661, 9);
  sqcRYGate(q, -0.0399981908134091, 10);
  sqcRZGate(q, 1.5518784559659788, 10);
  sqcRYGate(q, -3.1292839644131925, 11);
  sqcRZGate(q, -1.5999571395323429, 11);
  sqcRYGate(q, -0.13791062242493446, 12);
  sqcRZGate(q, 1.5554325367878894, 12);
  sqcRYGate(q, 0.03052486697107959, 13);
  sqcRZGate(q, 1.5538218724589774, 13);
  sqcRYGate(q, -2.5625599056631767, 14);
  sqcRZGate(q, 1.5847703321403719, 14);
  sqcRYGate(q, -3.124107038509805, 15);
  sqcRZGate(q, -1.5861412215411352, 15);
  sqcRYGate(q, 1.5707845377188805, 16);
  sqcRZGate(q, -3.1161351815366487, 16);
  sqcRYGate(q, -3.050936301667013, 17);
  sqcRZGate(q, -1.594897376382666, 17);
  sqcRYGate(q, -2.2750066962551, 18);
  sqcRZGate(q, 1.5607744290564503, 18);
  sqcRYGate(q, -3.0481134243566923, 19);
  sqcRZGate(q, 2.8151646912446693, 19);
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
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, 3.125304559851432, 0);
  sqcRZGate(q, 1.3091845110244567, 0);
  sqcRYGate(q, -0.007007315448264484, 1);
  sqcRZGate(q, -1.363391179788663, 1);
  sqcRYGate(q, 3.096737230522344, 2);
  sqcRZGate(q, -0.06568568879733963, 2);
  sqcRYGate(q, -0.03423905485216002, 3);
  sqcRZGate(q, 0.5722525582799238, 3);
  sqcRYGate(q, 3.0722020012867617, 4);
  sqcRZGate(q, -2.926483911941423, 4);
  sqcRYGate(q, -2.9939676154914765, 5);
  sqcRZGate(q, 1.8006396266386162, 5);
  sqcRYGate(q, -3.0534908439073063, 6);
  sqcRZGate(q, 1.7099440853484618, 6);
  sqcRYGate(q, 0.6398052413767442, 7);
  sqcRZGate(q, 0.16206672486324258, 7);
  sqcRYGate(q, -0.09949840066020194, 8);
  sqcRZGate(q, 1.0464740162545452, 8);
  sqcRYGate(q, 1.5707978045272446, 9);
  sqcRZGate(q, 3.1415925782571956, 9);
  sqcRYGate(q, -0.039714476372432805, 10);
  sqcRZGate(q, 2.4746291443782815, 10);
  sqcRYGate(q, 0.6775774098712327, 11);
  sqcRZGate(q, 0.13343505265045863, 11);
  sqcRYGate(q, -3.104785444043379, 12);
  sqcRZGate(q, 2.831604695659595, 12);
  sqcRYGate(q, -0.15112600220065414, 13);
  sqcRZGate(q, 1.3340961500966264, 13);
  sqcRYGate(q, 3.11620180751634, 14);
  sqcRZGate(q, -2.39624794031009, 14);
  sqcRYGate(q, -0.03395894670166738, 15);
  sqcRZGate(q, 2.6456758272743746, 15);
  sqcRYGate(q, -1.571080052123487, 16);
  sqcRZGate(q, 2.5239898718111453, 16);
  sqcRYGate(q, 3.134730143037656, 17);
  sqcRZGate(q, -0.7909942624095674, 17);
  sqcRYGate(q, -0.020004567248381733, 18);
  sqcRZGate(q, 0.18708802919109532, 18);
  sqcRYGate(q, -0.00012002099387942167, 19);
  sqcRZGate(q, -1.1182136188394018, 19);
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
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, 3.141592117600042, 0);
  sqcRZGate(q, -3.0239385723356293, 0);
  sqcRYGate(q, 2.69527685184162e-06, 1);
  sqcRZGate(q, 0.16248723284891525, 1);
  sqcRYGate(q, 3.1415923642947874, 2);
  sqcRZGate(q, 1.8850133442497032, 2);
  sqcRYGate(q, 3.141590312798976, 3);
  sqcRZGate(q, 2.522172143399368, 3);
  sqcRYGate(q, -3.2653879561001363e-09, 4);
  sqcRZGate(q, 1.735015667174258, 4);
  sqcRYGate(q, 4.899141998748746e-07, 5);
  sqcRZGate(q, 0.14972969630874466, 5);
  sqcRYGate(q, -2.5164738559624306e-07, 6);
  sqcRZGate(q, 0.240409724222066, 6);
  sqcRYGate(q, -3.1415913537131868, 7);
  sqcRZGate(q, -1.0291463137959889, 7);
  sqcRYGate(q, 6.678363781986718e-07, 8);
  sqcRZGate(q, -2.237842449532712, 8);
  sqcRYGate(q, 1.570798622910508, 9);
  sqcRZGate(q, -1.1912197808061646, 9);
  sqcRYGate(q, -3.1415921012574843, 10);
  sqcRZGate(q, -1.8586038550312793, 10);
  sqcRYGate(q, -3.141591326992489, 11);
  sqcRZGate(q, -1.0577882208774139, 11);
  sqcRYGate(q, 1.2119903658458497e-07, 12);
  sqcRZGate(q, 2.2609203051597886, 12);
  sqcRYGate(q, -3.1415924377946767, 13);
  sqcRZGate(q, -2.998719088213281, 13);
  sqcRYGate(q, 3.1415923509322194, 14);
  sqcRZGate(q, 2.6975258241679656, 14);
  sqcRYGate(q, 3.141592344285497, 15);
  sqcRZGate(q, -1.687422687166202, 15);
  sqcRYGate(q, -3.141591751847967, 16);
  sqcRZGate(q, -0.2222519831346383, 16);
  sqcRYGate(q, -7.849306548986526e-07, 17);
  sqcRZGate(q, -0.4085564677769396, 17);
  sqcRYGate(q, -3.1415914389006274, 18);
  sqcRZGate(q, -0.9983739403476038, 18);
  sqcRYGate(q, 3.1415924966742597, 19);
  sqcRZGate(q, -1.049278908262627, 19);

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
