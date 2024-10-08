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
  q = sqcQuantumCircuit(12);

  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.1589531603728784, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.0162386661671974, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.0341991391347261, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.2668279502400215, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.38941113154149, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.22299692613763597, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.6731036154113155, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.8452491485820655, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.3992488851173053, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.013933017546394913, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.24935828382543085, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -1.0539964742606216, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.8347326911591043, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 2.306396345628823, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.5555498976411418, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.18559585798289166, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.18572337206288475, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.5230801297251864, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 2.0837733650834616, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 1.0630527925666278, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.6854061131003774, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.04298777839837004, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.043091600041475116, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -1.366704552405193, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.1401640228404559, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.1418255595261892, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 2.096566294541378, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 3.1219268785865686, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -3.123461069540866, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -1.214179188581711, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 3.1321258413748434, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcSdgGate(q, 11);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 3.13231648329623, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcHGate(q, 11);
  sqcSGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.34965630198650555, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.22364453777707852, 0);
  sqcRZGate(q, 1.1540520185177867, 1);
  sqcRZGate(q, -0.004918287508175395, 2);
  sqcRZGate(q, 1.1364148080103211, 3);
  sqcRZGate(q, 0.9805684208779707, 4);
  sqcRZGate(q, 0.3245782219458908, 5);
  sqcRZGate(q, 0.3817046123923929, 6);
  sqcRZGate(q, -0.35102705697089365, 7);
  sqcRZGate(q, 0.9973837127696827, 8);
  sqcRZGate(q, -0.027663488964166493, 9);
  sqcRZGate(q, 1.2532690868828207, 10);
  sqcRZGate(q, -2.4085355024905373, 11);
  sqcRXGate(q, 1.4525401975655177, 0);
  sqcRXGate(q, -1.7034890150069801, 1);
  sqcRXGate(q, 1.3501777537785964, 2);
  sqcRXGate(q, -3.1250571546373904, 3);
  sqcRXGate(q, 3.1320346901212246, 4);
  sqcRXGate(q, 0.0020882708948851, 5);
  sqcRXGate(q, -3.1411095281689487, 6);
  sqcRXGate(q, 2.18918012009157, 7);
  sqcRXGate(q, 3.135218126039455, 8);
  sqcRXGate(q, -3.1395619132812276, 9);
  sqcRXGate(q, -3.1379265429233407, 10);
  sqcRXGate(q, 0.02446030670376942, 11);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.9244853779474244, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 2.3513766895898667, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.9457556319371234, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.012565075708105295, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.02571267057173, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 1.638792251717123, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 1.1005781668801902, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.22810644897617297, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 1.9783126082260312, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -1.9615896123594907, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 1.2077099989067095, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 1.2940448540166485, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.6155423912844112, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 2.51830959117809, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.020648470985417444, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 1.1456596165111197, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.1398683692745242, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 1.859936903859799, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -1.5804634084667608, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -1.5704389504204663, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -1.569955667992754, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.06809354038433844, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -3.0715343251767804, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.028193293928462614, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.3735568046954317, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.36817140080137456, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -1.595805323168592, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 2.8653074890782744, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -2.866491910023033, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.10440833615489678, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 3.068045528085764, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcSdgGate(q, 11);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -3.0680748901029857, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcHGate(q, 11);
  sqcSGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.050201226158058214, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 1.6179407781675978, 0);
  sqcRZGate(q, -0.23988054868996467, 1);
  sqcRZGate(q, 1.0343649939268136, 2);
  sqcRZGate(q, -0.26092275813167487, 3);
  sqcRZGate(q, -2.105030207061889, 4);
  sqcRZGate(q, -0.8500422300645448, 5);
  sqcRZGate(q, -0.00033271757760543425, 6);
  sqcRZGate(q, -1.120833484175468, 7);
  sqcRZGate(q, -1.544159818780803, 8);
  sqcRZGate(q, 2.420023752851715, 9);
  sqcRZGate(q, -0.777852827894244, 10);
  sqcRZGate(q, 0.11210132894457399, 11);
  sqcRXGate(q, 2.63358305836218, 0);
  sqcRXGate(q, -1.4277137615158544, 1);
  sqcRXGate(q, -3.1360022868466335, 2);
  sqcRXGate(q, -3.132367467484623, 3);
  sqcRXGate(q, 3.140121243345988, 4);
  sqcRXGate(q, 0.0010871128054355515, 5);
  sqcRXGate(q, -2.189049859004417, 6);
  sqcRXGate(q, -3.1414885251641564, 7);
  sqcRXGate(q, 3.134439950210671, 8);
  sqcRXGate(q, 0.0017149753187209907, 9);
  sqcRXGate(q, 3.137917118533068, 10);
  sqcRXGate(q, -3.1171007901310785, 11);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.7527551469838196, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.8750337893035276, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.8114314094729767, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.0565151837646936, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.5894723381893021, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.08166408492680767, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5707862709669289, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.5694194384428725, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.547289189194315, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.025548031581286365, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.028632596740378005, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.09151881954867291, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.6200454524742154, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.6188382807073071, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.06173070988041953, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 2.535012838898393, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.6108377172392829, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.05630962481390701, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.8536388433116658, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -2.294736540541531, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -2.9831829459065577, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.7314603750134989, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.730852422157368, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.16960503189799322, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.40936078146391064, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.40895556380342873, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -2.9398822884137257, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -2.1589722249204097, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -2.162124972533666, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 2.8048098193219992, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 2.9101464659522573, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcSdgGate(q, 11);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -2.9116425473398393, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcHGate(q, 11);
  sqcSGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -1.6564091700101784, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.6492027591434075, 0);
  sqcRZGate(q, -1.1341473416321448, 1);
  sqcRZGate(q, -1.0675623453320024, 2);
  sqcRZGate(q, -1.0822247613611724, 3);
  sqcRZGate(q, -2.7426080593861686, 4);
  sqcRZGate(q, 0.9578239147100039, 5);
  sqcRZGate(q, 0.32934588216330496, 6);
  sqcRZGate(q, 3.0520623783118457, 7);
  sqcRZGate(q, -1.1764887087882665, 8);
  sqcRZGate(q, -1.7969743308283608, 9);
  sqcRZGate(q, -1.8474756701562347, 10);
  sqcRZGate(q, -2.6634441370135207, 11);
  sqcRXGate(q, 2.011578275043707, 0);
  sqcRXGate(q, -1.8756573454601022, 1);
  sqcRXGate(q, 3.1314137004721876, 2);
  sqcRXGate(q, -3.1350584309825766, 3);
  sqcRXGate(q, -3.1411068588993274, 4);
  sqcRXGate(q, 9.660011317662846e-05, 5);
  sqcRXGate(q, 3.1394684535940716, 6);
  sqcRXGate(q, -5.7782544742757125e-05, 7);
  sqcRXGate(q, 0.0005086038578421661, 8);
  sqcRXGate(q, 3.1414703582376777, 9);
  sqcRXGate(q, -3.1404211005846854, 10);
  sqcRXGate(q, -3.1386024904675414, 11);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.5876284905664588, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 2.9226649907838023, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.008109714464555384, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.0173890637994414, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.000667134290656931, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.0021694640940775043, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6619239135063701, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.6682406180192776, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5323210241836387, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.11820574400795712, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.12060249205457942, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.11729082279331407, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.6860252827577156, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.6866183523045803, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.20453720113039126, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.37439180835187974, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.3753006203603362, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.2106615290918101, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.2882687933311994, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.286520143756049, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.13094936101522872, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.761482387976404, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.7643309289833929, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.35471089976484005, 8);
  sqcCXGate(q, 7, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.5082205970052267, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcSdgGate(q, 8);
  sqcHGate(q, 8);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 2.6335594644308657, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 8);
  sqcSGate(q, 8);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.356400438376849, 9);
  sqcCXGate(q, 8, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 2.4072801726406667, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcSdgGate(q, 9);
  sqcHGate(q, 9);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -2.4047125595599046, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 9);
  sqcSGate(q, 9);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.4115239253789729, 10);
  sqcCXGate(q, 9, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -2.5093004833344614, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcSdgGate(q, 10);
  sqcHGate(q, 10);
  sqcSdgGate(q, 11);
  sqcHGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.6329250408151449, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 10);
  sqcSGate(q, 10);
  sqcHGate(q, 11);
  sqcSGate(q, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.3835712955965175, 11);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.10422856337558231, 0);
  sqcRZGate(q, 0.02333893705648529, 1);
  sqcRZGate(q, -2.7134683533457755, 2);
  sqcRZGate(q, -0.2281991746093849, 3);
  sqcRZGate(q, 0.26833828487386874, 4);
  sqcRZGate(q, -0.43631785572552584, 5);
  sqcRZGate(q, 3.0970626600262507, 6);
  sqcRZGate(q, -0.38865128030237406, 7);
  sqcRZGate(q, -0.5823587666856689, 8);
  sqcRZGate(q, -1.3493462080361964, 9);
  sqcRZGate(q, 1.6408725785723683, 10);
  sqcRZGate(q, -0.40963360558003453, 11);
  sqcRXGate(q, 1.5055425604114365, 0);
  sqcRXGate(q, -1.9186571490910718, 1);
  sqcRXGate(q, 3.1390642054172413, 2);
  sqcRXGate(q, -0.00044917569534395815, 3);
  sqcRXGate(q, 3.140708408938875, 4);
  sqcRXGate(q, -0.0024015060421133244, 5);
  sqcRXGate(q, 3.1393941703117894, 6);
  sqcRXGate(q, 3.1409148466738106, 7);
  sqcRXGate(q, 3.141256844527122, 8);
  sqcRXGate(q, 3.140996251545046, 9);
  sqcRXGate(q, -3.141523579595815, 10);
  sqcRXGate(q, -0.0033656347962566493, 11);

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
