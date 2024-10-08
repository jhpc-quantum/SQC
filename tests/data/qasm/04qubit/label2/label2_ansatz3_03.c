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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -0.26706811210994985, 0);
  sqcRZGate(q, 0.8436766718900053, 0);
  sqcRYGate(q, -2.164945165360263, 1);
  sqcRZGate(q, -2.978606672194361, 1);
  sqcRYGate(q, -3.108793096911894, 2);
  sqcRZGate(q, 0.27056229219260075, 2);
  sqcRYGate(q, -1.7462754570232348, 3);
  sqcRZGate(q, -2.7982478909600816, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.5937156835078077, 0);
  sqcRZGate(q, -1.5800781074681967, 0);
  sqcRYGate(q, -3.0037707183810713, 1);
  sqcRZGate(q, 3.0394497635723408, 1);
  sqcRYGate(q, 2.0617492976971477, 2);
  sqcRZGate(q, -0.4904644182824641, 2);
  sqcRYGate(q, -1.3892023144358503, 3);
  sqcRZGate(q, -2.183693440726822, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.1213161954097275, 0);
  sqcRZGate(q, -1.2956854677993683, 0);
  sqcRYGate(q, 0.262951807867295, 1);
  sqcRZGate(q, 0.820450201075813, 1);
  sqcRYGate(q, -3.0441298205531946, 2);
  sqcRZGate(q, -3.0488608104821084, 2);
  sqcRYGate(q, 0.4869302013087493, 3);
  sqcRZGate(q, 1.2426023065503091, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9526867678424047, 0);
  sqcRZGate(q, -1.827615513860151, 0);
  sqcRYGate(q, -0.32684791883253983, 1);
  sqcRZGate(q, -0.43703934808023986, 1);
  sqcRYGate(q, 1.6130892918702875, 2);
  sqcRZGate(q, 1.523921164808703, 2);
  sqcRYGate(q, 0.9604251281589953, 3);
  sqcRZGate(q, 0.9442325212389803, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8877945447583231, 0);
  sqcRZGate(q, -0.9590851876931481, 0);
  sqcRYGate(q, 2.5521011821496593, 1);
  sqcRZGate(q, -1.7615881446205544, 1);
  sqcRYGate(q, 2.9930827053242166, 2);
  sqcRZGate(q, -1.6587589485927154, 2);
  sqcRYGate(q, 0.35844497399200037, 3);
  sqcRZGate(q, 2.735807142655599, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6212047672076066, 0);
  sqcRZGate(q, -0.09143260271996655, 0);
  sqcRYGate(q, -1.3830486422231114, 1);
  sqcRZGate(q, -3.066491693720836, 1);
  sqcRYGate(q, -0.7015469961552716, 2);
  sqcRZGate(q, -2.746940848270037, 2);
  sqcRYGate(q, 0.806874519425814, 3);
  sqcRZGate(q, -0.3307530628451124, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5956580771106914, 0);
  sqcRZGate(q, 1.580876927413698, 0);
  sqcRYGate(q, -2.1278348374200036, 1);
  sqcRZGate(q, -1.276052657161955, 1);
  sqcRYGate(q, -3.0310408678333682, 2);
  sqcRZGate(q, -2.0476144859311365, 2);
  sqcRYGate(q, -2.821879937820053, 3);
  sqcRZGate(q, 0.5689786801981072, 3);

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
