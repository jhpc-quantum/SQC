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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 4.245223234278229e-05, 0);
  sqcRZGate(q, 2.972440113052647, 0);
  sqcRYGate(q, -3.1415494744270305, 1);
  sqcRZGate(q, -0.6881569021562735, 1);
  sqcRYGate(q, -6.74830465872134e-05, 2);
  sqcRZGate(q, 1.4862875466831174, 2);
  sqcRYGate(q, 3.141518692056898, 3);
  sqcRZGate(q, 2.4614349200202366, 3);
  sqcRYGate(q, -3.1404115134950836, 4);
  sqcRZGate(q, 1.9763733404538746, 4);
  sqcRYGate(q, -0.016290136175923904, 5);
  sqcRZGate(q, -1.5696947338320464, 5);
  sqcRYGate(q, 3.095778375855669, 6);
  sqcRZGate(q, 0.0028507640038650806, 6);
  sqcRYGate(q, 7.774120655668071e-06, 7);
  sqcRZGate(q, 2.316911313685406, 7);
  sqcRYGate(q, 1.540198800858584, 8);
  sqcRZGate(q, 8.85720942545021e-06, 8);
  sqcRYGate(q, 0.8767043789264353, 9);
  sqcRZGate(q, -1.4076584452514158, 9);
  sqcRYGate(q, 1.537173519486716, 10);
  sqcRZGate(q, 2.474204674013887, 10);
  sqcRYGate(q, 1.5731756554588072, 11);
  sqcRZGate(q, -1.6131013597086208, 11);
  sqcRYGate(q, 1.569415303763149, 12);
  sqcRZGate(q, -1.8091172788001584, 12);
  sqcRYGate(q, 1.5708595737104498, 13);
  sqcRZGate(q, 0.6138425452884473, 13);
  sqcRYGate(q, -1.5476087297634553, 14);
  sqcRZGate(q, 0.04798145904093421, 14);
  sqcRYGate(q, 1.5755278799296322, 15);
  sqcRZGate(q, 2.2822319750132367, 15);
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
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, 0.033812540874386336, 0);
  sqcRZGate(q, 2.8726894464981e-05, 0);
  sqcRYGate(q, -3.141138501131049, 1);
  sqcRZGate(q, -0.9539529199368646, 1);
  sqcRYGate(q, -3.135578190989406, 2);
  sqcRZGate(q, -1.5615147643692895, 2);
  sqcRYGate(q, 4.387786353809986e-06, 3);
  sqcRZGate(q, -3.1064129627854102, 3);
  sqcRYGate(q, 3.0054070961701074, 4);
  sqcRZGate(q, -1.5712532362468792, 4);
  sqcRYGate(q, 1.4708087980437692, 5);
  sqcRZGate(q, -2.162611650562347, 5);
  sqcRYGate(q, 1.5708400901838062, 6);
  sqcRZGate(q, -0.05308936970681178, 6);
  sqcRYGate(q, 1.5707859158509185, 7);
  sqcRZGate(q, 3.141589859790322, 7);
  sqcRYGate(q, -1.5657580841216712, 8);
  sqcRZGate(q, 1.4850754090896443, 8);
  sqcRYGate(q, 3.1385942535499014, 9);
  sqcRZGate(q, -1.6785304000759442, 9);
  sqcRYGate(q, -3.1271733971207647, 10);
  sqcRZGate(q, 0.4349958952931671, 10);
  sqcRYGate(q, -3.1410344865510917, 11);
  sqcRZGate(q, 1.4660907911546364, 11);
  sqcRYGate(q, -0.001346996670238238, 12);
  sqcRZGate(q, -0.7038388756842613, 12);
  sqcRYGate(q, -1.585516334667858e-05, 13);
  sqcRZGate(q, -1.6379048484456893, 13);
  sqcRYGate(q, 3.1352562189070583, 14);
  sqcRZGate(q, 1.614025039362523, 14);
  sqcRYGate(q, 3.141512458210743, 15);
  sqcRZGate(q, -2.4313554125844026, 15);
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
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, 1.5708010052327233, 0);
  sqcRZGate(q, -1.5179922216995303, 0);
  sqcRYGate(q, -0.004411196708837828, 1);
  sqcRZGate(q, -0.7065948280090611, 1);
  sqcRYGate(q, 1.5209419649685891, 2);
  sqcRZGate(q, 0.3159642546502335, 2);
  sqcRYGate(q, 1.5753356839166501, 3);
  sqcRZGate(q, 1.5706686689911487, 3);
  sqcRYGate(q, 0.004064926022073944, 4);
  sqcRZGate(q, -3.138489339577953, 4);
  sqcRYGate(q, -7.143752501104217e-05, 5);
  sqcRZGate(q, -1.2090137773774465, 5);
  sqcRYGate(q, 6.194319141261673e-05, 6);
  sqcRZGate(q, 1.5705248167290158, 6);
  sqcRYGate(q, -1.5708222440026898, 7);
  sqcRZGate(q, 0.9716759588404879, 7);
  sqcRYGate(q, 2.9165729582558697e-06, 8);
  sqcRZGate(q, 3.1374870035142823, 8);
  sqcRYGate(q, 3.1415919374493426, 9);
  sqcRZGate(q, -3.007539503706376, 9);
  sqcRYGate(q, 1.685757433901463e-06, 10);
  sqcRZGate(q, -1.580645167659718, 10);
  sqcRYGate(q, 3.1415922463534445, 11);
  sqcRZGate(q, 1.1922719342523225, 11);
  sqcRYGate(q, -3.1415918511659906, 12);
  sqcRZGate(q, 0.6093125900083738, 12);
  sqcRYGate(q, 1.1087150426641376e-06, 13);
  sqcRZGate(q, 0.33692552624741623, 13);
  sqcRYGate(q, 0.00022086612968384044, 14);
  sqcRZGate(q, -1.642001043027717, 14);
  sqcRYGate(q, -3.1413782730245274, 15);
  sqcRZGate(q, -1.2768506821551995, 15);
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
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, 1.5947214349054661e-06, 0);
  sqcRZGate(q, 3.1113596239071484, 0);
  sqcRYGate(q, 1.5707956590299914, 1);
  sqcRZGate(q, 1.858884983419455, 1);
  sqcRYGate(q, -4.495702806739388e-05, 2);
  sqcRZGate(q, 0.5416782833803385, 2);
  sqcRYGate(q, 1.3519973266497436, 3);
  sqcRZGate(q, -3.1406968295765205, 3);
  sqcRYGate(q, -3.1415853326113923, 4);
  sqcRZGate(q, 1.4157508471028644, 4);
  sqcRYGate(q, -0.0006634581492570749, 5);
  sqcRZGate(q, 1.550850411535298, 5);
  sqcRYGate(q, 3.1414498583494503, 6);
  sqcRZGate(q, 2.7684342866455407, 6);
  sqcRYGate(q, -6.56652216195562e-07, 7);
  sqcRZGate(q, -1.2720197514112552, 7);
  sqcRYGate(q, 7.659401637383212e-07, 8);
  sqcRZGate(q, 0.160220773757314, 8);
  sqcRYGate(q, -1.8274835316134386e-06, 9);
  sqcRZGate(q, 3.0746763296460653, 9);
  sqcRYGate(q, -5.564199222800801e-06, 10);
  sqcRZGate(q, 0.5800765614413079, 10);
  sqcRYGate(q, 3.1415919303063204, 11);
  sqcRZGate(q, -2.3077157255488183, 11);
  sqcRYGate(q, 1.1425220143301829e-05, 12);
  sqcRZGate(q, -0.8096146519189849, 12);
  sqcRYGate(q, -3.1415904054732704, 13);
  sqcRZGate(q, 2.581274741446408, 13);
  sqcRYGate(q, 1.9406807509560094e-05, 14);
  sqcRZGate(q, -3.06588616979585, 14);
  sqcRYGate(q, 1.36615934927851e-07, 15);
  sqcRZGate(q, 2.851977194126433, 15);
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
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, -3.4621596056871224e-06, 0);
  sqcRZGate(q, -1.7511195565460387, 0);
  sqcRYGate(q, 1.5663402341750867, 1);
  sqcRZGate(q, 2.206194341712006, 1);
  sqcRYGate(q, 3.1415880509791423, 2);
  sqcRZGate(q, 0.5013412386661975, 2);
  sqcRYGate(q, 1.2827105772741154, 3);
  sqcRZGate(q, -0.5609324191172407, 3);
  sqcRYGate(q, -3.1415782454961594, 4);
  sqcRZGate(q, 1.9744021092528887, 4);
  sqcRYGate(q, 0.00022896440671747688, 5);
  sqcRZGate(q, 0.5622213051429635, 5);
  sqcRYGate(q, -3.1415919599029727, 6);
  sqcRZGate(q, -2.6647898242773946, 6);
  sqcRYGate(q, -6.546680328391943e-05, 7);
  sqcRZGate(q, 0.9375230421599288, 7);
  sqcRYGate(q, 3.1415466372089362, 8);
  sqcRZGate(q, -0.20785041627012468, 8);
  sqcRYGate(q, -0.00027986638328305794, 9);
  sqcRZGate(q, 2.803756788420012, 9);
  sqcRYGate(q, 0.10595287774883809, 10);
  sqcRZGate(q, 1.468485502087723, 10);
  sqcRYGate(q, -1.2765309584509401, 11);
  sqcRZGate(q, 2.56659588387957, 11);
  sqcRYGate(q, 2.332766654324657, 12);
  sqcRZGate(q, 0.5706373540464942, 12);
  sqcRYGate(q, 1.554647142238779, 13);
  sqcRZGate(q, 1.7076550318632995, 13);
  sqcRYGate(q, 1.5645154850174523, 14);
  sqcRZGate(q, 0.0027031138738147224, 14);
  sqcRYGate(q, 1.6046721791459122, 15);
  sqcRZGate(q, 0.16117092062752825, 15);
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
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, 3.141578411885033, 0);
  sqcRZGate(q, 2.237829357680286, 0);
  sqcRYGate(q, -3.1415917444032013, 1);
  sqcRZGate(q, 2.207126787752154, 1);
  sqcRYGate(q, 1.2424451109565304e-05, 2);
  sqcRZGate(q, -2.78529084878601, 2);
  sqcRYGate(q, -3.141588819191456, 3);
  sqcRZGate(q, 1.0126806865648357, 3);
  sqcRYGate(q, 3.5504581889611586e-05, 4);
  sqcRZGate(q, 2.5801612012865633, 4);
  sqcRYGate(q, -3.1414052487716697, 5);
  sqcRZGate(q, 0.3122266038220989, 5);
  sqcRYGate(q, -3.1414880697973397, 6);
  sqcRZGate(q, -0.9024779301279782, 6);
  sqcRYGate(q, 3.1414791314256894, 7);
  sqcRZGate(q, -1.352560030187548, 7);
  sqcRYGate(q, -8.400523989315898e-06, 8);
  sqcRZGate(q, -0.9389563110601459, 8);
  sqcRYGate(q, -1.5707711114699954, 9);
  sqcRZGate(q, 1.655076354636997, 9);
  sqcRYGate(q, -1.6146201167100602, 10);
  sqcRZGate(q, -1.5709261911582981, 10);
  sqcRYGate(q, 1.5367633875318303, 11);
  sqcRZGate(q, 1.5707968372983958, 11);
  sqcRYGate(q, 0.022578476194757856, 12);
  sqcRZGate(q, 1.5642756853349757, 12);
  sqcRYGate(q, 3.140720997996519, 13);
  sqcRZGate(q, 0.010881323127255982, 13);
  sqcRYGate(q, 1.570784011313935, 14);
  sqcRZGate(q, 1.5253762289263981, 14);
  sqcRYGate(q, 1.5708000851435173, 15);
  sqcRZGate(q, -1.5736979463742637, 15);
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
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, -1.57089767044059, 0);
  sqcRZGate(q, -2.768125783514411, 0);
  sqcRYGate(q, -1.5708467613917827, 1);
  sqcRZGate(q, 0.19394085765516242, 1);
  sqcRYGate(q, 1.570796428114553, 2);
  sqcRZGate(q, 1.9443041635619889, 2);
  sqcRYGate(q, 1.5707961938385695, 3);
  sqcRZGate(q, -1.376853396294315, 3);
  sqcRYGate(q, -1.5707957543037177, 4);
  sqcRZGate(q, -1.1974419133084524, 4);
  sqcRYGate(q, 1.5708020572832107, 5);
  sqcRZGate(q, -0.9201132228614661, 5);
  sqcRYGate(q, 1.5645561123199563, 6);
  sqcRZGate(q, -2.7671457832846085, 6);
  sqcRYGate(q, -1.5742625838847122, 7);
  sqcRZGate(q, -2.486013448987295, 7);
  sqcRYGate(q, -1.5655200467652417, 8);
  sqcRZGate(q, -2.770895419148863, 8);
  sqcRYGate(q, 1.5752827383009838, 9);
  sqcRZGate(q, 0.6445866792649204, 9);
  sqcRYGate(q, 1.570826477321404, 10);
  sqcRZGate(q, 1.9293305998178518, 10);
  sqcRYGate(q, 1.5707856844126467, 11);
  sqcRZGate(q, -2.4648978635682575, 11);
  sqcRYGate(q, -1.5708122450507354, 12);
  sqcRZGate(q, -1.2015822190476384, 12);
  sqcRYGate(q, 1.5705384027267648, 13);
  sqcRZGate(q, 0.6366520942693991, 13);
  sqcRYGate(q, 2.976946197266785, 14);
  sqcRZGate(q, 0.312109255961228, 14);
  sqcRYGate(q, -1.571181571926207, 15);
  sqcRZGate(q, -2.4797982640633984, 15);

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
