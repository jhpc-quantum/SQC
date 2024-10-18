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

  sqcRYGate(q, -1.5707981489083718, 0);
  sqcRZGate(q, -1.5708193744797985, 0);
  sqcRYGate(q, -1.570745626254839, 1);
  sqcRZGate(q, 1.5857907294402065, 1);
  sqcRYGate(q, 3.1415919668454713, 2);
  sqcRZGate(q, -2.117706658216969, 2);
  sqcRYGate(q, -0.3126954872182779, 3);
  sqcRZGate(q, 1.5708319038738097, 3);
  sqcRYGate(q, 1.570799588572253, 4);
  sqcRZGate(q, 1.4799496895750315, 4);
  sqcRYGate(q, 1.570797216363227, 5);
  sqcRZGate(q, 0.4460118394317087, 5);
  sqcRYGate(q, -1.570797187852939, 6);
  sqcRZGate(q, -1.570958145205398, 6);
  sqcRYGate(q, -3.141589477587978, 7);
  sqcRZGate(q, 1.0533168373106383, 7);
  sqcRYGate(q, 3.141580172697708, 8);
  sqcRZGate(q, -2.1928093163352473, 8);
  sqcRYGate(q, -3.1415767438852433, 9);
  sqcRZGate(q, 2.787077435167841, 9);
  sqcRYGate(q, -2.7841424449259824, 10);
  sqcRZGate(q, 2.158420637373169, 10);
  sqcRYGate(q, 3.1415871246492593, 11);
  sqcRZGate(q, -1.3719138072155541, 11);
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
  sqcRYGate(q, -1.862223853236765, 0);
  sqcRZGate(q, 1.5707943626570025, 0);
  sqcRYGate(q, 3.141570259977969, 1);
  sqcRZGate(q, -2.031529922382876, 1);
  sqcRYGate(q, 1.5707951683212222, 2);
  sqcRZGate(q, 2.712914581295725, 2);
  sqcRYGate(q, 1.5708044396469665, 3);
  sqcRZGate(q, 1.5709535468157205, 3);
  sqcRYGate(q, 1.1157289097865642e-06, 4);
  sqcRZGate(q, -2.9642030059364424, 4);
  sqcRYGate(q, 0.005656852094690024, 5);
  sqcRZGate(q, 2.6956191820686786, 5);
  sqcRYGate(q, -0.09894668403864142, 6);
  sqcRZGate(q, -3.1414301864856533, 6);
  sqcRYGate(q, -2.7251413795292945, 7);
  sqcRZGate(q, 1.0531293614983341, 7);
  sqcRYGate(q, -1.5707965858294335, 8);
  sqcRZGate(q, -3.0932827924295383, 8);
  sqcRYGate(q, 3.1415717984499882, 9);
  sqcRZGate(q, -0.9262305103105728, 9);
  sqcRYGate(q, 1.7749641476414324, 10);
  sqcRZGate(q, -0.2954783955304284, 10);
  sqcRYGate(q, -3.1415882514348574, 11);
  sqcRZGate(q, 1.013591329032879, 11);
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
  sqcRYGate(q, 1.5707944511043064, 0);
  sqcRZGate(q, 1.4668988628316868, 0);
  sqcRYGate(q, -1.5706625803354664, 1);
  sqcRZGate(q, -1.570658188135338, 1);
  sqcRYGate(q, -3.141592267170514, 2);
  sqcRZGate(q, -0.046214523268614194, 2);
  sqcRYGate(q, 0.031867581924901245, 3);
  sqcRZGate(q, -1.9086930686220314, 3);
  sqcRYGate(q, -3.1075768850763663, 4);
  sqcRZGate(q, -0.0935298232856443, 4);
  sqcRYGate(q, -2.8783294624263465, 5);
  sqcRZGate(q, -3.130242413618312, 5);
  sqcRYGate(q, 1.5707906127241547, 6);
  sqcRZGate(q, -1.5707864315323565, 6);
  sqcRYGate(q, 3.1856759230564076e-06, 7);
  sqcRZGate(q, -1.0531509215723425, 7);
  sqcRYGate(q, -3.1415883697537828, 8);
  sqcRZGate(q, 2.5852288722014207, 8);
  sqcRYGate(q, 1.5707948365877047, 9);
  sqcRZGate(q, 1.6611233231573257, 9);
  sqcRYGate(q, 1.5707985964605982, 10);
  sqcRZGate(q, 0.2952849422400039, 10);
  sqcRYGate(q, 0.7671509004912168, 11);
  sqcRZGate(q, -1.5707853417083153, 11);
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
  sqcRYGate(q, -3.141583196418819, 0);
  sqcRZGate(q, -0.23760767803117488, 0);
  sqcRYGate(q, -3.0272428815298786, 1);
  sqcRZGate(q, 1.3659222421681991, 1);
  sqcRYGate(q, -3.1415893329269085, 2);
  sqcRZGate(q, 1.7855368685633557, 2);
  sqcRYGate(q, 6.303940283913789e-05, 3);
  sqcRZGate(q, 0.13266620911111102, 3);
  sqcRYGate(q, -1.5864768165840815e-06, 4);
  sqcRZGate(q, -1.187284150611677, 4);
  sqcRYGate(q, 3.0171566977903765, 5);
  sqcRZGate(q, 1.3772832400553436, 5);
  sqcRYGate(q, 1.5707948277795896, 6);
  sqcRZGate(q, 0.3033930617905085, 6);
  sqcRYGate(q, -1.5707912597407143, 7);
  sqcRZGate(q, -1.7757105161523734, 7);
  sqcRYGate(q, -2.0847387670641295e-06, 8);
  sqcRZGate(q, 1.363153686644373, 8);
  sqcRYGate(q, -1.5707980764912888, 9);
  sqcRZGate(q, -0.20491352448666927, 9);
  sqcRYGate(q, -7.693273704312276e-06, 10);
  sqcRZGate(q, -2.6784048904184576, 10);
  sqcRYGate(q, 1.5708009260578897, 11);
  sqcRZGate(q, -1.775711483865326, 11);

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
