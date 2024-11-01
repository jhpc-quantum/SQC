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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -3.1398568796512127, 0);
  sqcRZGate(q, 2.780695761983303, 0);
  sqcRYGate(q, -0.0007679340907573717, 1);
  sqcRZGate(q, -0.8054941944980072, 1);
  sqcRYGate(q, -3.1340525265158603, 2);
  sqcRZGate(q, 1.567957401230753, 2);
  sqcRYGate(q, 3.141420025250034, 3);
  sqcRZGate(q, -0.03221897267717555, 3);
  sqcRYGate(q, -0.002241595072499436, 4);
  sqcRZGate(q, -1.6240891557727863, 4);
  sqcRYGate(q, -0.0008620285631959078, 5);
  sqcRZGate(q, 2.4330453716363447, 5);
  sqcRYGate(q, 7.258231510333633e-05, 6);
  sqcRZGate(q, 3.1085149902873015, 6);
  sqcRYGate(q, -0.021493205248219738, 7);
  sqcRZGate(q, -3.1410460961262343, 7);
  sqcRYGate(q, -0.0020775556074106305, 8);
  sqcRZGate(q, -1.5475215235822783, 8);
  sqcRYGate(q, -0.009005625976297617, 9);
  sqcRZGate(q, 1.55749464008162, 9);
  sqcRYGate(q, -3.1070353311808914, 10);
  sqcRZGate(q, -1.5708531137272688, 10);
  sqcRYGate(q, 3.0121320946271393, 11);
  sqcRZGate(q, -1.5729086121363292, 11);
  sqcRYGate(q, -2.640634936074296, 12);
  sqcRZGate(q, -1.6041144993503942, 12);
  sqcRYGate(q, 1.571463980477776, 13);
  sqcRZGate(q, 0.004158787250795178, 13);
  sqcRYGate(q, -0.8138216806408218, 14);
  sqcRZGate(q, 2.0155832089507983, 14);
  sqcRYGate(q, 2.957805918575817, 15);
  sqcRZGate(q, -0.2907699787495801, 15);
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
  sqcRYGate(q, 0.00013646510966403014, 0);
  sqcRZGate(q, 0.44304760591191344, 0);
  sqcRYGate(q, -3.1401369055377506, 1);
  sqcRZGate(q, 1.4348213103200773, 1);
  sqcRYGate(q, -3.1369333633243257, 2);
  sqcRZGate(q, -1.5639474468997498, 2);
  sqcRYGate(q, -0.006926316759189533, 3);
  sqcRZGate(q, -1.5816054741449213, 3);
  sqcRYGate(q, -0.035040187742596096, 4);
  sqcRZGate(q, -1.570398849688971, 4);
  sqcRYGate(q, 0.14330054078468726, 5);
  sqcRZGate(q, -1.5710466032442012, 5);
  sqcRYGate(q, 0.5854392588232233, 6);
  sqcRZGate(q, 1.5634595057073781, 6);
  sqcRYGate(q, 1.570796742616979, 7);
  sqcRZGate(q, 3.1125136325681835, 7);
  sqcRYGate(q, -2.554627291640071, 8);
  sqcRZGate(q, -1.5698991620209994, 8);
  sqcRYGate(q, 2.9980754370710083, 9);
  sqcRZGate(q, 1.6013621253818817, 9);
  sqcRYGate(q, -0.03782005186296101, 10);
  sqcRZGate(q, -1.6178111010508571, 10);
  sqcRYGate(q, 0.010224009696870467, 11);
  sqcRZGate(q, -1.5675874401480414, 11);
  sqcRYGate(q, 3.137974136772282, 12);
  sqcRZGate(q, 1.5380650322713967, 12);
  sqcRYGate(q, 1.5720467388351373, 13);
  sqcRZGate(q, -0.0004016330088205678, 13);
  sqcRYGate(q, -0.0029302217608044856, 14);
  sqcRZGate(q, 1.1260497767441238, 14);
  sqcRYGate(q, 0.00013324229150209568, 15);
  sqcRZGate(q, 0.2900296697621014, 15);
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
  sqcRYGate(q, 0.33540323946854206, 0);
  sqcRZGate(q, 3.5407117013816024e-05, 0);
  sqcRYGate(q, -0.9163470009399313, 1);
  sqcRZGate(q, -6.573429010003906e-07, 1);
  sqcRYGate(q, -2.0735565606155517, 2);
  sqcRZGate(q, 4.688687641042519e-05, 2);
  sqcRYGate(q, 2.5521360610812427, 3);
  sqcRZGate(q, 1.2845214934387174e-05, 3);
  sqcRYGate(q, -0.2483027279686949, 4);
  sqcRZGate(q, 3.141559941277081, 4);
  sqcRYGate(q, -3.0605975545501782, 5);
  sqcRZGate(q, 3.1413853740298516, 5);
  sqcRYGate(q, 3.137007326717909, 6);
  sqcRZGate(q, -0.007419808900404056, 6);
  sqcRYGate(q, 1.5707673712894872, 7);
  sqcRZGate(q, 1.5706810359203167, 7);
  sqcRYGate(q, 3.1257740377948067, 8);
  sqcRZGate(q, 0.0009714948799537383, 8);
  sqcRYGate(q, 3.1342470495447934, 9);
  sqcRZGate(q, 0.030496928155494988, 9);
  sqcRYGate(q, -3.1338673873895404, 10);
  sqcRZGate(q, 3.0947972123149423, 10);
  sqcRYGate(q, -0.015701569460204286, 11);
  sqcRZGate(q, -0.0010542852359263222, 11);
  sqcRYGate(q, -0.0426132001900239, 12);
  sqcRZGate(q, 3.1412768307076875, 12);
  sqcRYGate(q, -0.10273138353288935, 13);
  sqcRZGate(q, 5.929106295894669e-05, 13);
  sqcRYGate(q, -0.07086966246035509, 14);
  sqcRZGate(q, 0.00018225327524223903, 14);
  sqcRYGate(q, 0.016863381262088417, 15);
  sqcRZGate(q, 0.0006343931988614809, 15);
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
  sqcRYGate(q, 0.30045020102402775, 0);
  sqcRZGate(q, 1.3537982025575295, 0);
  sqcRYGate(q, -0.8157170921530273, 1);
  sqcRZGate(q, 1.3538250978033062, 1);
  sqcRYGate(q, 0.5228374563299037, 2);
  sqcRZGate(q, 1.353775326639097, 2);
  sqcRYGate(q, -2.373772315191633, 3);
  sqcRZGate(q, -1.7877719091589346, 3);
  sqcRYGate(q, 2.1901342560945753, 4);
  sqcRZGate(q, -1.7877875155353342, 4);
  sqcRYGate(q, -0.9510510760842683, 5);
  sqcRZGate(q, 1.3537881371112859, 5);
  sqcRYGate(q, -1.0231958119033753, 6);
  sqcRZGate(q, -1.7878246443972712, 6);
  sqcRYGate(q, 1.5811043030858942, 7);
  sqcRZGate(q, 1.3537127007930296, 7);
  sqcRYGate(q, 2.111047243966305, 8);
  sqcRZGate(q, -1.7878375927358698, 8);
  sqcRYGate(q, 2.1711115083250503, 9);
  sqcRZGate(q, 1.3537358499560082, 9);
  sqcRYGate(q, 2.0734164523268026, 10);
  sqcRZGate(q, -1.7876984355027465, 10);
  sqcRYGate(q, 1.011046575649466, 11);
  sqcRZGate(q, -1.7878159012140211, 11);
  sqcRYGate(q, -2.2144532787149753, 12);
  sqcRZGate(q, 1.3536924574387696, 12);
  sqcRYGate(q, 1.555377679887723, 13);
  sqcRZGate(q, 1.3535148232987773, 13);
  sqcRYGate(q, 1.9821974515806045, 14);
  sqcRZGate(q, -1.7879979142273663, 14);
  sqcRYGate(q, -0.3506665047393831, 15);
  sqcRZGate(q, 1.3536958335700984, 15);

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
