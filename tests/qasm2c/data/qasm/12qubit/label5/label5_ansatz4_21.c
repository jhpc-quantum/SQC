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

  sqcRYGate(q, -2.0315148312454143, 0);
  sqcRZGate(q, -2.5275302647105464, 0);
  sqcRYGate(q, 2.3779248958618564, 1);
  sqcRZGate(q, 0.3970092081214318, 1);
  sqcRYGate(q, 2.6233198170020087, 2);
  sqcRZGate(q, -2.6241493331224945, 2);
  sqcRYGate(q, -1.3794923967974198, 3);
  sqcRZGate(q, -2.0291347364822236, 3);
  sqcRYGate(q, -2.240638706560535, 4);
  sqcRZGate(q, 1.5716556057284672, 4);
  sqcRYGate(q, 1.9052129824861361, 5);
  sqcRZGate(q, 1.3025184071787992, 5);
  sqcRYGate(q, 3.1391968357221214, 6);
  sqcRZGate(q, 0.9258664558022023, 6);
  sqcRYGate(q, 0.0022709260692259647, 7);
  sqcRZGate(q, -0.045248555051443616, 7);
  sqcRYGate(q, -0.9333882260553894, 8);
  sqcRZGate(q, -0.25637588670922895, 8);
  sqcRYGate(q, 1.4118576038276798, 9);
  sqcRZGate(q, -0.8338793633666226, 9);
  sqcRYGate(q, -2.228948052825489, 10);
  sqcRZGate(q, 0.7244766870449412, 10);
  sqcRYGate(q, 1.9695826622337012, 11);
  sqcRZGate(q, -1.5356361599625414, 11);
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
  sqcRYGate(q, -1.2440485190218675, 0);
  sqcRZGate(q, -2.3079917081113717, 0);
  sqcRYGate(q, -1.332855947289369, 1);
  sqcRZGate(q, -2.5890832311483583, 1);
  sqcRYGate(q, 2.166594596767667, 2);
  sqcRZGate(q, -0.8718320934608119, 2);
  sqcRYGate(q, -0.8681741456629696, 3);
  sqcRZGate(q, -1.4255372219051186, 3);
  sqcRYGate(q, -0.1652898939476124, 4);
  sqcRZGate(q, 2.1632720940919796, 4);
  sqcRYGate(q, 2.611974625417867, 5);
  sqcRZGate(q, 2.9999808164176813, 5);
  sqcRYGate(q, 0.0004640025962285688, 6);
  sqcRZGate(q, 2.549840073972575, 6);
  sqcRYGate(q, -0.0018948450850092273, 7);
  sqcRZGate(q, 0.010870092713903858, 7);
  sqcRYGate(q, 0.3132497006154322, 8);
  sqcRZGate(q, -1.6333212118532172, 8);
  sqcRYGate(q, 2.675508808395754, 9);
  sqcRZGate(q, -1.4045247540887411, 9);
  sqcRYGate(q, 0.22070219666255664, 10);
  sqcRZGate(q, 0.2047117375780081, 10);
  sqcRYGate(q, -3.0303800211728475, 11);
  sqcRZGate(q, -0.2404448319173148, 11);
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
  sqcRYGate(q, -0.8211315091751641, 0);
  sqcRZGate(q, 0.15962632121063203, 0);
  sqcRYGate(q, 1.1493896479693184, 1);
  sqcRZGate(q, 0.45329260974167335, 1);
  sqcRYGate(q, -2.6396983618704475, 2);
  sqcRZGate(q, -1.6421804848741282, 2);
  sqcRYGate(q, -0.4763792026506133, 3);
  sqcRZGate(q, -0.49821423480975113, 3);
  sqcRYGate(q, -2.196853011936389, 4);
  sqcRZGate(q, 2.940545182587145, 4);
  sqcRYGate(q, 3.1044500185012627, 5);
  sqcRZGate(q, 2.62752227104369, 5);
  sqcRYGate(q, -0.0017027851275384766, 6);
  sqcRZGate(q, -2.801415686803874, 6);
  sqcRYGate(q, 3.140793398323558, 7);
  sqcRZGate(q, -2.5054188678157616, 7);
  sqcRYGate(q, 0.5984699084888101, 8);
  sqcRZGate(q, -1.861676077917881, 8);
  sqcRYGate(q, 0.194924992890761, 9);
  sqcRZGate(q, 0.602475021880201, 9);
  sqcRYGate(q, -0.5962508509339837, 10);
  sqcRZGate(q, -2.4645271834147136, 10);
  sqcRYGate(q, -1.6732171279415553, 11);
  sqcRZGate(q, -0.008741590901584216, 11);
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
  sqcRYGate(q, -1.953318133698561, 0);
  sqcRZGate(q, -0.8709776740816569, 0);
  sqcRYGate(q, -2.010831936241793, 1);
  sqcRZGate(q, 0.9604657745541533, 1);
  sqcRYGate(q, 2.2108406911986647, 2);
  sqcRZGate(q, -0.6812390116590166, 2);
  sqcRYGate(q, 2.2724032017332707, 3);
  sqcRZGate(q, -1.370929131272292, 3);
  sqcRYGate(q, 1.9576493828712618, 4);
  sqcRZGate(q, -2.67483695891744, 4);
  sqcRYGate(q, 0.7719804179607932, 5);
  sqcRZGate(q, 0.18648193862819884, 5);
  sqcRYGate(q, -1.5697005976796277, 6);
  sqcRZGate(q, 1.5716138050000055, 6);
  sqcRYGate(q, 1.5721691484921054, 7);
  sqcRZGate(q, -1.567100596224029, 7);
  sqcRYGate(q, 1.3945690484435662, 8);
  sqcRZGate(q, -1.1825869876928383, 8);
  sqcRYGate(q, -1.5400373628694863, 9);
  sqcRZGate(q, 0.9734405794705898, 9);
  sqcRYGate(q, -3.129896364250918, 10);
  sqcRZGate(q, 1.2569446349456852, 10);
  sqcRYGate(q, 2.8945094933577793, 11);
  sqcRZGate(q, 0.17598985827830393, 11);
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
  sqcRYGate(q, -0.030120563203535157, 0);
  sqcRZGate(q, 2.5596609861279793, 0);
  sqcRYGate(q, -2.568767871554139, 1);
  sqcRZGate(q, -1.694744010595329, 1);
  sqcRYGate(q, -1.3020607804419804, 2);
  sqcRZGate(q, -0.6477433102707275, 2);
  sqcRYGate(q, -1.914314195556095, 3);
  sqcRZGate(q, 0.17985045113725126, 3);
  sqcRYGate(q, -3.13750272103112, 4);
  sqcRZGate(q, 2.4816744049749486, 4);
  sqcRYGate(q, -3.1354956531140514, 5);
  sqcRZGate(q, 0.24907528421445893, 5);
  sqcRYGate(q, -1.5693410664851428, 6);
  sqcRZGate(q, 0.3342696552744408, 6);
  sqcRYGate(q, -1.5752055723217582, 7);
  sqcRZGate(q, 2.808029291571625, 7);
  sqcRYGate(q, -1.790794689583272, 8);
  sqcRZGate(q, -0.46852561788963115, 8);
  sqcRYGate(q, 2.8290336987430953, 9);
  sqcRZGate(q, 1.4561723276675729, 9);
  sqcRYGate(q, 3.022983220925579, 10);
  sqcRZGate(q, 0.9479403764518805, 10);
  sqcRYGate(q, -2.0773102300851205, 11);
  sqcRZGate(q, -1.5304573979691485, 11);
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
  sqcRYGate(q, 1.6436054549216295, 0);
  sqcRZGate(q, -1.4310876339695096, 0);
  sqcRYGate(q, 2.027844135068725, 1);
  sqcRZGate(q, -2.004203780289297, 1);
  sqcRYGate(q, -2.7752525643216304, 2);
  sqcRZGate(q, -0.1701310143064018, 2);
  sqcRYGate(q, 0.450891679607361, 3);
  sqcRZGate(q, 1.434496743237732, 3);
  sqcRYGate(q, 3.1406052626116896, 4);
  sqcRZGate(q, -0.9151140424288371, 4);
  sqcRYGate(q, 3.131868664201142, 5);
  sqcRZGate(q, 2.2637257822428003, 5);
  sqcRYGate(q, 1.567497718677349, 6);
  sqcRZGate(q, -0.0026881797530426965, 6);
  sqcRYGate(q, -1.5749413745661673, 7);
  sqcRZGate(q, 1.879432071975856, 7);
  sqcRYGate(q, -0.44358059772143665, 8);
  sqcRZGate(q, -1.7808487782617028, 8);
  sqcRYGate(q, -0.29045203604075986, 9);
  sqcRZGate(q, 0.4185878314546858, 9);
  sqcRYGate(q, -2.923091479834381, 10);
  sqcRZGate(q, 2.5272785224402794, 10);
  sqcRYGate(q, 0.03720137881046693, 11);
  sqcRZGate(q, 1.1926926326672387, 11);
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
  sqcRYGate(q, 2.5170798146908084, 0);
  sqcRZGate(q, 1.2384449527862629, 0);
  sqcRYGate(q, -2.0842347021722762, 1);
  sqcRZGate(q, -2.9017392425433552, 1);
  sqcRYGate(q, 0.5142646198587116, 2);
  sqcRZGate(q, -2.4544714518330255, 2);
  sqcRYGate(q, 1.8946848270594348, 3);
  sqcRZGate(q, -0.8408851958865377, 3);
  sqcRYGate(q, -0.12937772835448413, 4);
  sqcRZGate(q, 1.656124556896177, 4);
  sqcRYGate(q, 0.9805684553068014, 5);
  sqcRZGate(q, -2.6402539536703946, 5);
  sqcRYGate(q, 1.3653751650788477, 6);
  sqcRZGate(q, -1.0025642210823702, 6);
  sqcRYGate(q, -0.002049605982534039, 7);
  sqcRZGate(q, 0.20509478413758164, 7);
  sqcRYGate(q, 0.5554420145712106, 8);
  sqcRZGate(q, -0.6491030487676133, 8);
  sqcRYGate(q, 2.554031896084931, 9);
  sqcRZGate(q, 0.10586657118589303, 9);
  sqcRYGate(q, -3.0411635787339746, 10);
  sqcRZGate(q, 1.921314084512928, 10);
  sqcRYGate(q, -1.7979584267226576, 11);
  sqcRZGate(q, -2.239974249264085, 11);
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
  sqcRYGate(q, 2.032146123427781, 0);
  sqcRZGate(q, -0.02345043016454973, 0);
  sqcRYGate(q, -1.2217053591145837, 1);
  sqcRZGate(q, -2.1855550307398017, 1);
  sqcRYGate(q, 1.0574948077723794, 2);
  sqcRZGate(q, 2.7976768279719155, 2);
  sqcRYGate(q, -1.9301207852804043, 3);
  sqcRZGate(q, 1.6450998735396376, 3);
  sqcRYGate(q, -0.022012315506312087, 4);
  sqcRZGate(q, -3.0104089264082288, 4);
  sqcRYGate(q, -0.02444012892377856, 5);
  sqcRZGate(q, -0.13062948474385358, 5);
  sqcRYGate(q, -0.015943470212301136, 6);
  sqcRZGate(q, 1.0104882650024667, 6);
  sqcRYGate(q, -3.126888183642112, 7);
  sqcRZGate(q, 2.094730256592123, 7);
  sqcRYGate(q, -1.7319577252005605, 8);
  sqcRZGate(q, -2.4848964690217366, 8);
  sqcRYGate(q, 2.909201214698449, 9);
  sqcRZGate(q, 1.2479307607155565, 9);
  sqcRYGate(q, 1.2320939547405683, 10);
  sqcRZGate(q, -1.6406349963865878, 10);
  sqcRYGate(q, -2.136900387323549, 11);
  sqcRZGate(q, 0.21844498339261043, 11);
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
  sqcRYGate(q, 0.5963551693211578, 0);
  sqcRZGate(q, -0.928511714181286, 0);
  sqcRYGate(q, -1.5670609497197001, 1);
  sqcRZGate(q, 2.6340520617861025, 1);
  sqcRYGate(q, -0.9932945543943856, 2);
  sqcRZGate(q, 2.505912896093424, 2);
  sqcRYGate(q, 2.9810109210177798, 3);
  sqcRZGate(q, -1.3709346211237978, 3);
  sqcRYGate(q, -1.7605343567929816, 4);
  sqcRZGate(q, 1.0052000807096535, 4);
  sqcRYGate(q, 1.7275266375124287, 5);
  sqcRZGate(q, -0.1786495767776577, 5);
  sqcRYGate(q, -1.7164529502007997, 6);
  sqcRZGate(q, 1.5590452202001508, 6);
  sqcRYGate(q, -1.5180616715940305, 7);
  sqcRZGate(q, 2.010439881889478, 7);
  sqcRYGate(q, 0.8261531859763606, 8);
  sqcRZGate(q, 1.712436644887918, 8);
  sqcRYGate(q, -3.0183493558192733, 9);
  sqcRZGate(q, -0.2710322077424774, 9);
  sqcRYGate(q, -2.458810233268803, 10);
  sqcRZGate(q, 1.0678300636139, 10);
  sqcRYGate(q, 1.7169327325706396, 11);
  sqcRZGate(q, 0.31605595831036126, 11);
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
  sqcRYGate(q, 1.9636841313857205, 0);
  sqcRZGate(q, -0.38076579507025216, 0);
  sqcRYGate(q, 0.9224285569030242, 1);
  sqcRZGate(q, 1.409766700011292, 1);
  sqcRYGate(q, 1.1225997923842876, 2);
  sqcRZGate(q, 0.5955792252652918, 2);
  sqcRYGate(q, -2.2876144631225683, 3);
  sqcRZGate(q, 1.4081129642781969, 3);
  sqcRYGate(q, -3.117645343273464, 4);
  sqcRZGate(q, -0.045370516369906334, 4);
  sqcRYGate(q, 0.005497842342709235, 5);
  sqcRZGate(q, 1.0338269710382129, 5);
  sqcRYGate(q, -3.1411245014810425, 6);
  sqcRZGate(q, 3.1332332590685508, 6);
  sqcRYGate(q, 3.141078151189129, 7);
  sqcRZGate(q, 0.4396222443560627, 7);
  sqcRYGate(q, 0.15196919137605036, 8);
  sqcRZGate(q, -1.2909909092951917, 8);
  sqcRYGate(q, 3.1013085204265725, 9);
  sqcRZGate(q, -0.42029567270646684, 9);
  sqcRYGate(q, -3.1272726851265222, 10);
  sqcRZGate(q, -2.089151173387429, 10);
  sqcRYGate(q, -3.1287142737369535, 11);
  sqcRZGate(q, 1.868326025427427, 11);
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
  sqcRYGate(q, -2.069963657912977, 0);
  sqcRZGate(q, -0.25511445833352964, 0);
  sqcRYGate(q, 0.4467091495192151, 1);
  sqcRZGate(q, -2.1467686712054057, 1);
  sqcRYGate(q, -1.5365843238720611, 2);
  sqcRZGate(q, -2.536213419500518, 2);
  sqcRYGate(q, -1.4813431631396234, 3);
  sqcRZGate(q, 1.3083400253716742, 3);
  sqcRYGate(q, -2.0947007105856885, 4);
  sqcRZGate(q, 0.09952177352789758, 4);
  sqcRYGate(q, -1.9990826673413262, 5);
  sqcRZGate(q, -2.231476254283716, 5);
  sqcRYGate(q, 1.5821178108695184, 6);
  sqcRZGate(q, -2.2253663330109927, 6);
  sqcRYGate(q, -1.5709540632287828, 7);
  sqcRZGate(q, 2.134136705197031, 7);
  sqcRYGate(q, 0.14931486191961074, 8);
  sqcRZGate(q, 0.3901508603656716, 8);
  sqcRYGate(q, -0.29705647273598407, 9);
  sqcRZGate(q, -1.148846703163331, 9);
  sqcRYGate(q, -0.959341661810206, 10);
  sqcRZGate(q, 0.9576302631119211, 10);
  sqcRYGate(q, -2.738582503173829, 11);
  sqcRZGate(q, 1.4377698271220645, 11);
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
  sqcRYGate(q, -1.763810916180493, 0);
  sqcRZGate(q, -2.9398609154571886, 0);
  sqcRYGate(q, -0.6377141475533428, 1);
  sqcRZGate(q, -0.7439446244359125, 1);
  sqcRYGate(q, 1.7399730314864152, 2);
  sqcRZGate(q, -1.964627073152144, 2);
  sqcRYGate(q, -2.199757954466187, 3);
  sqcRZGate(q, 0.4157285197640564, 3);
  sqcRYGate(q, -1.1883299560152238, 4);
  sqcRZGate(q, 2.6674556484894505, 4);
  sqcRYGate(q, 0.1837822076781323, 5);
  sqcRZGate(q, -2.874927705120515, 5);
  sqcRYGate(q, 1.6348504538837014, 6);
  sqcRZGate(q, 1.543218749998782, 6);
  sqcRYGate(q, 1.4923863263165138, 7);
  sqcRZGate(q, 1.53207372822942, 7);
  sqcRYGate(q, -0.13847428039612739, 8);
  sqcRZGate(q, -1.6379050966961346, 8);
  sqcRYGate(q, 1.0935466586483882, 9);
  sqcRZGate(q, 0.07057395777762304, 9);
  sqcRYGate(q, 1.3142786039816752, 10);
  sqcRZGate(q, -0.3292901731168478, 10);
  sqcRYGate(q, 2.0588190247205795, 11);
  sqcRZGate(q, 1.076159355974931, 11);
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
  sqcRYGate(q, 2.0669963900313473, 0);
  sqcRZGate(q, 2.1805471836796646, 0);
  sqcRYGate(q, 2.4921280078750074, 1);
  sqcRZGate(q, -1.1668814446508586, 1);
  sqcRYGate(q, 0.3674568186202426, 2);
  sqcRZGate(q, 2.2297292190291245, 2);
  sqcRYGate(q, -2.630322961833796, 3);
  sqcRZGate(q, 1.0860943482783423, 3);
  sqcRYGate(q, -1.5887413664205992, 4);
  sqcRZGate(q, -2.631461199987681, 4);
  sqcRYGate(q, -1.5715238028184677, 5);
  sqcRZGate(q, 1.461234161869747, 5);
  sqcRYGate(q, -1.5630647521644676, 6);
  sqcRZGate(q, 0.683109517160481, 6);
  sqcRYGate(q, -1.5721286223616582, 7);
  sqcRZGate(q, 3.027020551239302, 7);
  sqcRYGate(q, 2.4289327794600206, 8);
  sqcRZGate(q, 1.1512021473447174, 8);
  sqcRYGate(q, 2.5361226259389893, 9);
  sqcRZGate(q, -2.0668416526974, 9);
  sqcRYGate(q, 0.4249406614570437, 10);
  sqcRZGate(q, -1.0714901867136728, 10);
  sqcRYGate(q, -1.7834345741143613, 11);
  sqcRZGate(q, 1.3743084843076827, 11);
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
  sqcRYGate(q, -0.2958768195710295, 0);
  sqcRZGate(q, -0.5309371816962881, 0);
  sqcRYGate(q, -2.609815616907015, 1);
  sqcRZGate(q, 3.029890980112508, 1);
  sqcRYGate(q, -3.0667859534789312, 2);
  sqcRZGate(q, -2.3133330637141034, 2);
  sqcRYGate(q, 1.5932052874385068, 3);
  sqcRZGate(q, -3.061272516452946, 3);
  sqcRYGate(q, 3.1391008673507828, 4);
  sqcRZGate(q, 0.5436393725509904, 4);
  sqcRYGate(q, -0.003762476179580363, 5);
  sqcRZGate(q, 1.70052467156978, 5);
  sqcRYGate(q, -3.1410406098100037, 6);
  sqcRZGate(q, -0.7870683570146306, 6);
  sqcRYGate(q, -0.0008511654442045482, 7);
  sqcRZGate(q, 1.6269672319131263, 7);
  sqcRYGate(q, -2.2173373510776644, 8);
  sqcRZGate(q, -0.8365811409671451, 8);
  sqcRYGate(q, 1.0459831046732981, 9);
  sqcRZGate(q, 0.04156189122165088, 9);
  sqcRYGate(q, -1.7029110564184775, 10);
  sqcRZGate(q, -2.172595680156405, 10);
  sqcRYGate(q, -1.545625187355558, 11);
  sqcRZGate(q, -0.6622413724133894, 11);
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
  sqcRYGate(q, 1.7218823373454295, 0);
  sqcRZGate(q, 1.7257614265941144, 0);
  sqcRYGate(q, -2.2827295669210095, 1);
  sqcRZGate(q, 2.08224981323292, 1);
  sqcRYGate(q, -1.5860760402007497, 2);
  sqcRZGate(q, 2.115195435747934, 2);
  sqcRYGate(q, 1.540710189866152, 3);
  sqcRZGate(q, 1.6116281806707144, 3);
  sqcRYGate(q, 3.128817880079149, 4);
  sqcRZGate(q, 1.6063145532903427, 4);
  sqcRYGate(q, 1.5610446931284163, 5);
  sqcRZGate(q, -3.135525759970365, 5);
  sqcRYGate(q, -0.04000617292555257, 6);
  sqcRZGate(q, 1.4125426257712552, 6);
  sqcRYGate(q, -1.6012710221604394, 7);
  sqcRZGate(q, 1.5627327375541746, 7);
  sqcRYGate(q, 1.423454090892827, 8);
  sqcRZGate(q, 3.0366853988124705, 8);
  sqcRYGate(q, -2.992778475127434, 9);
  sqcRZGate(q, -0.321224080687236, 9);
  sqcRYGate(q, 2.1521950306187314, 10);
  sqcRZGate(q, 2.8075922782529275, 10);
  sqcRYGate(q, 1.7097575428446223, 11);
  sqcRZGate(q, -0.7503502113891926, 11);
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
  sqcRYGate(q, -1.3819660668125975, 0);
  sqcRZGate(q, -1.665070687316069, 0);
  sqcRYGate(q, -2.2862063798370147, 1);
  sqcRZGate(q, -1.7347312947054405, 1);
  sqcRYGate(q, -0.0028550628814834056, 2);
  sqcRZGate(q, 1.4218134148823172, 2);
  sqcRYGate(q, -3.140216638853099, 3);
  sqcRZGate(q, -0.636754238957348, 3);
  sqcRYGate(q, 2.365981816320604, 4);
  sqcRZGate(q, -3.1415721716344196, 4);
  sqcRYGate(q, -3.1414343430716265, 5);
  sqcRZGate(q, 2.7934780607612586, 5);
  sqcRYGate(q, 1.5688169102342897, 6);
  sqcRZGate(q, 1.3985793856705735, 6);
  sqcRYGate(q, -2.3590647488198715, 7);
  sqcRZGate(q, -2.2471029509565428, 7);
  sqcRYGate(q, -3.1349058492854973, 8);
  sqcRZGate(q, 0.737952152819978, 8);
  sqcRYGate(q, -2.1587814091209876, 9);
  sqcRZGate(q, 2.924405609085619, 9);
  sqcRYGate(q, -1.8068539132417714, 10);
  sqcRZGate(q, -2.364326544372451, 10);
  sqcRYGate(q, -1.6456804211331608, 11);
  sqcRZGate(q, 1.0855836107557746, 11);
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
  sqcRYGate(q, 2.4957633933122874, 0);
  sqcRZGate(q, 1.23650934065542, 0);
  sqcRYGate(q, -1.8561085804557067, 1);
  sqcRZGate(q, 1.7209373033075699, 1);
  sqcRYGate(q, -1.5683534729611512, 2);
  sqcRZGate(q, 2.7889836040129006, 2);
  sqcRYGate(q, -1.5689578889796103, 3);
  sqcRZGate(q, -1.5946161232300184, 3);
  sqcRYGate(q, -0.8047232462599986, 4);
  sqcRZGate(q, 0.003111310520844235, 4);
  sqcRYGate(q, -0.17766769258250184, 5);
  sqcRZGate(q, 0.8985492525835116, 5);
  sqcRYGate(q, 0.00024368648429793586, 6);
  sqcRZGate(q, -1.4150401379245976, 6);
  sqcRYGate(q, -0.000486572614331493, 7);
  sqcRZGate(q, -2.467094624150755, 7);
  sqcRYGate(q, -0.00027731010364195896, 8);
  sqcRZGate(q, 2.0992194978599104, 8);
  sqcRYGate(q, -1.1503939496115834e-05, 9);
  sqcRZGate(q, -1.746483909053902, 9);
  sqcRYGate(q, 3.1361522855992203, 10);
  sqcRZGate(q, 1.8924060584024025, 10);
  sqcRYGate(q, -1.349085631054697, 11);
  sqcRZGate(q, -0.7752328890970454, 11);
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
  sqcRYGate(q, -1.769926310388129, 0);
  sqcRZGate(q, 0.8037594245686035, 0);
  sqcRYGate(q, 1.123707686126946, 1);
  sqcRZGate(q, 0.2957686615472541, 1);
  sqcRYGate(q, -3.1402243552622564, 2);
  sqcRZGate(q, -0.0732351428313405, 2);
  sqcRYGate(q, 3.0259453874817663, 3);
  sqcRZGate(q, -2.8954605290887416, 3);
  sqcRYGate(q, 1.5708228029718443, 4);
  sqcRZGate(q, -0.6115950621462259, 4);
  sqcRYGate(q, 3.140450496646819, 5);
  sqcRZGate(q, -2.497476058048909, 5);
  sqcRYGate(q, 1.5720166386743573, 6);
  sqcRZGate(q, -1.5706500868984992, 6);
  sqcRYGate(q, -1.572769964927402, 7);
  sqcRZGate(q, 2.575212030016944, 7);
  sqcRYGate(q, 1.5511989424438521, 8);
  sqcRZGate(q, 2.49141947359604, 8);
  sqcRYGate(q, -2.4261437774601897, 9);
  sqcRZGate(q, 0.6281220165311414, 9);
  sqcRYGate(q, -2.9216810387860606, 10);
  sqcRZGate(q, -2.657293516035539, 10);
  sqcRYGate(q, 2.4838712692651486, 11);
  sqcRZGate(q, -1.5663806713980923, 11);
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
  sqcRYGate(q, 1.6465184953804766, 0);
  sqcRZGate(q, -3.126936084521679, 0);
  sqcRYGate(q, -1.5119902719051637, 1);
  sqcRZGate(q, -1.550326595036599, 1);
  sqcRYGate(q, 3.1386795418786977, 2);
  sqcRZGate(q, -1.010098571901166, 2);
  sqcRYGate(q, -0.0008990780040739253, 3);
  sqcRZGate(q, -0.26968901383241756, 3);
  sqcRYGate(q, 3.1410424910250545, 4);
  sqcRZGate(q, -2.9047147387627192, 4);
  sqcRYGate(q, 0.1542704164963307, 5);
  sqcRZGate(q, 3.0899716479555104, 5);
  sqcRYGate(q, -2.0820624863852824, 6);
  sqcRZGate(q, -2.8543315518595245, 6);
  sqcRYGate(q, -0.002763242604420846, 7);
  sqcRZGate(q, -2.9236735618927523, 7);
  sqcRYGate(q, -0.00018580389936282421, 8);
  sqcRZGate(q, -2.0450869698162375, 8);
  sqcRYGate(q, -0.0010604699916901036, 9);
  sqcRZGate(q, 2.005491796955296, 9);
  sqcRYGate(q, -0.015304813033579471, 10);
  sqcRZGate(q, -1.8259565740616521, 10);
  sqcRYGate(q, -3.139920493703483, 11);
  sqcRZGate(q, -2.1566846653168295, 11);
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
  sqcRYGate(q, 1.5890264466120194, 0);
  sqcRZGate(q, -2.7241805943544577, 0);
  sqcRYGate(q, -1.0726163999061802, 1);
  sqcRZGate(q, -2.2308482554073867, 1);
  sqcRYGate(q, 0.0007332325391491423, 2);
  sqcRZGate(q, -1.8286011169616838, 2);
  sqcRYGate(q, -1.5668903619718895, 3);
  sqcRZGate(q, 1.5242024558381733, 3);
  sqcRYGate(q, -0.001860147777239085, 4);
  sqcRZGate(q, -2.2843802126277866, 4);
  sqcRYGate(q, -3.141080857179005, 5);
  sqcRZGate(q, 2.0989122917637886, 5);
  sqcRYGate(q, 3.1242531153150663, 6);
  sqcRZGate(q, -2.8543865844571616, 6);
  sqcRYGate(q, 0.00440387053652147, 7);
  sqcRZGate(q, 0.3561438540017084, 7);
  sqcRYGate(q, 0.00019778155850755749, 8);
  sqcRZGate(q, -2.6800728177913102, 8);
  sqcRYGate(q, 1.928300258097047, 9);
  sqcRZGate(q, 3.1410855103268145, 9);
  sqcRYGate(q, -0.2455640478093788, 10);
  sqcRZGate(q, -0.20472414274718503, 10);
  sqcRYGate(q, -1.1369315743229327, 11);
  sqcRZGate(q, 1.5788677106082845, 11);
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
  sqcRYGate(q, 1.5689190807592814, 0);
  sqcRZGate(q, -1.5819930934100404, 0);
  sqcRYGate(q, -1.5501886246162029, 1);
  sqcRZGate(q, -2.332347754581249, 1);
  sqcRYGate(q, -1.5844961358644838, 2);
  sqcRZGate(q, -3.1405314058468323, 2);
  sqcRYGate(q, 1.5690858727605916, 3);
  sqcRZGate(q, -8.968241855961367e-05, 3);
  sqcRYGate(q, 0.009395555007680653, 4);
  sqcRZGate(q, -0.3321208302766747, 4);
  sqcRYGate(q, -3.141207051158372, 5);
  sqcRZGate(q, -0.8797320811199802, 5);
  sqcRYGate(q, -2.128933960618501, 6);
  sqcRZGate(q, -0.5987199264211444, 6);
  sqcRYGate(q, 1.7215387175373937, 7);
  sqcRZGate(q, -2.3556655647773694, 7);
  sqcRYGate(q, -0.00016156963192059948, 8);
  sqcRZGate(q, 1.4839068526457355, 8);
  sqcRYGate(q, -1.5708924374199187, 9);
  sqcRZGate(q, 1.5938635220312511, 9);
  sqcRYGate(q, 0.00044989293186858964, 10);
  sqcRZGate(q, -1.67854299424995, 10);
  sqcRYGate(q, -0.00026148966835156637, 11);
  sqcRZGate(q, 1.3402557213453368, 11);
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
  sqcRYGate(q, 3.1080060257430806, 0);
  sqcRZGate(q, -0.027902304817800004, 0);
  sqcRYGate(q, -3.1388217362417503, 1);
  sqcRZGate(q, -2.331777930716895, 1);
  sqcRYGate(q, 1.5826109067499106, 2);
  sqcRZGate(q, -0.9579015322087097, 2);
  sqcRYGate(q, 1.5714229835122833, 3);
  sqcRZGate(q, -0.002206794224404417, 3);
  sqcRYGate(q, -0.0003289794541053748, 4);
  sqcRZGate(q, 1.766393297351959, 4);
  sqcRYGate(q, -0.032361649440590945, 5);
  sqcRZGate(q, 3.023657026959565, 5);
  sqcRYGate(q, -3.137710010213342, 6);
  sqcRZGate(q, -0.5036116973385178, 6);
  sqcRYGate(q, -0.0011245460547506525, 7);
  sqcRZGate(q, -0.24601286074350526, 7);
  sqcRYGate(q, 1.571051418162283, 8);
  sqcRZGate(q, 0.0011243615180771555, 8);
  sqcRYGate(q, 1.5777703742810738, 9);
  sqcRZGate(q, -0.3944198761366522, 9);
  sqcRYGate(q, -3.041073048244081, 10);
  sqcRZGate(q, -0.28264550124986604, 10);
  sqcRYGate(q, 1.5711284200332185, 11);
  sqcRZGate(q, -2.0901320195480153, 11);
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
  sqcRYGate(q, 1.572751437817053, 0);
  sqcRZGate(q, -0.3633218411822278, 0);
  sqcRYGate(q, 1.3077864931277485, 1);
  sqcRZGate(q, -2.3704787072245828, 1);
  sqcRYGate(q, -3.1044610497955984, 2);
  sqcRZGate(q, -2.1918369131628523, 2);
  sqcRYGate(q, 1.5696054184935933, 3);
  sqcRZGate(q, -0.016103476511662853, 3);
  sqcRYGate(q, 1.5698514570512332, 4);
  sqcRZGate(q, -0.5376242213032325, 4);
  sqcRYGate(q, 1.5710318051623986, 5);
  sqcRZGate(q, 1.5436462144576257, 5);
  sqcRYGate(q, 0.0020720978732375883, 6);
  sqcRZGate(q, -1.6688288600101844, 6);
  sqcRYGate(q, -6.0515715545706365e-05, 7);
  sqcRZGate(q, 1.8973469718255078, 7);
  sqcRYGate(q, -1.5698694208526656, 8);
  sqcRZGate(q, 1.5732600386422089, 8);
  sqcRYGate(q, 1.5690333938892091, 9);
  sqcRZGate(q, 2.553975536436587, 9);
  sqcRYGate(q, 0.1171279193848542, 10);
  sqcRZGate(q, 0.048729308291033814, 10);
  sqcRYGate(q, -0.1314779467467829, 11);
  sqcRZGate(q, -2.8038766391515795, 11);
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
  sqcRYGate(q, -3.133676000880248, 0);
  sqcRZGate(q, 2.7107454706821144, 0);
  sqcRYGate(q, 3.140388799194441, 1);
  sqcRZGate(q, -1.5394267477789887, 1);
  sqcRYGate(q, 3.1406809316613478, 2);
  sqcRZGate(q, -1.2353257754213938, 2);
  sqcRYGate(q, -2.518249215619644, 3);
  sqcRZGate(q, -1.7483715023965538, 3);
  sqcRYGate(q, -0.00027771979698668834, 4);
  sqcRZGate(q, -1.1005895759237276, 4);
  sqcRYGate(q, -3.099546040383988, 5);
  sqcRZGate(q, 1.5438012443027596, 5);
  sqcRYGate(q, 2.986423003692808, 6);
  sqcRZGate(q, 1.5692157407669054, 6);
  sqcRYGate(q, 0.0008521699715124953, 7);
  sqcRZGate(q, -1.7857587584880026, 7);
  sqcRYGate(q, -0.024666842629450517, 8);
  sqcRZGate(q, -2.4008941097475027, 8);
  sqcRYGate(q, -0.0010393233577934424, 9);
  sqcRZGate(q, 0.5879938583508312, 9);
  sqcRYGate(q, -3.138505213145701, 10);
  sqcRZGate(q, -0.1466989138592547, 10);
  sqcRYGate(q, 3.087492979717602, 11);
  sqcRZGate(q, -2.8064294466899, 11);
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
  sqcRYGate(q, -1.57228095201947, 0);
  sqcRZGate(q, -2.6810290052853065, 0);
  sqcRYGate(q, 0.00043958127672993896, 1);
  sqcRZGate(q, 2.935484174355281, 1);
  sqcRYGate(q, -1.58992571635509, 2);
  sqcRZGate(q, -2.693292277410979, 2);
  sqcRYGate(q, -3.139907318854436, 3);
  sqcRZGate(q, 0.3663495584136145, 3);
  sqcRYGate(q, 3.134315842461729, 4);
  sqcRZGate(q, 0.591311426889259, 4);
  sqcRYGate(q, 1.5712051675150356, 5);
  sqcRZGate(q, -1.3241114403902583, 5);
  sqcRYGate(q, -1.5730740286139246, 6);
  sqcRZGate(q, 2.0328367454928182, 6);
  sqcRYGate(q, -3.1404953097544235, 7);
  sqcRZGate(q, -1.9420538620138559, 7);
  sqcRYGate(q, -3.1402740547553245, 8);
  sqcRZGate(q, 2.8145238355567233, 8);
  sqcRYGate(q, -1.5690498320497752, 9);
  sqcRZGate(q, 2.313361477508485, 9);
  sqcRYGate(q, -2.9963219994760446, 10);
  sqcRZGate(q, -2.068342659673667, 10);
  sqcRYGate(q, 3.0084067467380122, 11);
  sqcRZGate(q, 2.6869933864026154, 11);

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
