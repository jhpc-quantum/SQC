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

  sqcRYGate(q, -1.9462285283545846, 0);
  sqcRZGate(q, 1.2566524475630099, 0);
  sqcRYGate(q, -2.8098325216985782, 1);
  sqcRZGate(q, -1.020456520953032, 1);
  sqcRYGate(q, 3.141585915902359, 2);
  sqcRZGate(q, -0.8907180881505659, 2);
  sqcRYGate(q, 1.5707952232634594, 3);
  sqcRZGate(q, -1.5707598869975916, 3);
  sqcRYGate(q, -3.141589538967574, 4);
  sqcRZGate(q, -1.0018873240130226, 4);
  sqcRYGate(q, 1.886430894231923, 5);
  sqcRZGate(q, 1.2784811306293382, 5);
  sqcRYGate(q, -1.5708012414461494, 6);
  sqcRZGate(q, -2.146280709595878, 6);
  sqcRYGate(q, -0.670886019492655, 7);
  sqcRZGate(q, 1.2630621627847685, 7);
  sqcRYGate(q, -1.5707925224728676, 8);
  sqcRZGate(q, 0.6243332988812561, 8);
  sqcRYGate(q, -5.560236151661858e-07, 9);
  sqcRZGate(q, 0.18620974084724118, 9);
  sqcRYGate(q, 3.1415916424052592, 10);
  sqcRZGate(q, -1.0229311241105976, 10);
  sqcRYGate(q, -0.4447390397267821, 11);
  sqcRZGate(q, -2.176735329981739, 11);
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
  sqcRYGate(q, -2.5512329354882013e-05, 0);
  sqcRZGate(q, -1.2566627493944682, 0);
  sqcRYGate(q, -3.1411773794176576, 1);
  sqcRZGate(q, 2.121111508033213, 1);
  sqcRYGate(q, 3.1415925324289047, 2);
  sqcRZGate(q, -2.644173607941348, 2);
  sqcRYGate(q, -1.8479804249564842, 3);
  sqcRZGate(q, -1.5708198753558165, 3);
  sqcRYGate(q, -1.570797000882863, 4);
  sqcRZGate(q, 1.570794139640821, 4);
  sqcRYGate(q, 1.57075526417934, 5);
  sqcRZGate(q, -1.363613673219974, 5);
  sqcRYGate(q, -0.746525228770727, 6);
  sqcRZGate(q, 0.894935621591439, 6);
  sqcRYGate(q, -3.1415909338730397, 7);
  sqcRZGate(q, -2.6533853970695263, 7);
  sqcRYGate(q, 1.9332205280803363, 8);
  sqcRZGate(q, 2.6842296362528058, 8);
  sqcRYGate(q, -1.570800854148645, 9);
  sqcRZGate(q, -3.111454945214165e-06, 9);
  sqcRYGate(q, 3.1415911567826913, 10);
  sqcRZGate(q, -1.648404761437852, 10);
  sqcRYGate(q, 2.7065476403399713, 11);
  sqcRZGate(q, -1.0781666323524766, 11);
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
  sqcRYGate(q, -1.1953606667745553, 0);
  sqcRZGate(q, 1.7102985667278825, 0);
  sqcRYGate(q, -1.6647828374315234, 1);
  sqcRZGate(q, -0.7606756499545773, 1);
  sqcRYGate(q, -1.570796538242659, 2);
  sqcRZGate(q, -2.0490691996271466, 2);
  sqcRYGate(q, -1.5753517819183898, 3);
  sqcRZGate(q, 1.6478537444727261, 3);
  sqcRYGate(q, -1.5707966648297873, 4);
  sqcRZGate(q, -1.610192489631463, 4);
  sqcRYGate(q, -1.570796854640692, 5);
  sqcRZGate(q, -1.5707974792926322, 5);
  sqcRYGate(q, 1.5707821298999916, 6);
  sqcRZGate(q, 1.5708104718483304, 6);
  sqcRYGate(q, 3.1415921168311383, 7);
  sqcRZGate(q, -2.3192750174621515, 7);
  sqcRYGate(q, -1.5708041921562217, 8);
  sqcRZGate(q, -0.30272157685371753, 8);
  sqcRYGate(q, -1.570789966420942, 9);
  sqcRZGate(q, -1.142763755609547, 9);
  sqcRYGate(q, -1.5707962806530666, 10);
  sqcRZGate(q, -1.4662906477506858, 10);
  sqcRYGate(q, 1.5707896616576358, 11);
  sqcRZGate(q, -1.570806588189824, 11);
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
  sqcRYGate(q, -1.5708136728555375, 0);
  sqcRZGate(q, 2.0170773385477263, 0);
  sqcRYGate(q, 1.5709286435999048, 1);
  sqcRZGate(q, 1.5708610658248543, 1);
  sqcRYGate(q, -1.57080058356274, 2);
  sqcRZGate(q, 1.5708010640922756, 2);
  sqcRYGate(q, 1.8226111057831275e-07, 3);
  sqcRZGate(q, -2.813531612449877, 3);
  sqcRYGate(q, 3.1415835363631675, 4);
  sqcRZGate(q, 3.102197376815539, 4);
  sqcRYGate(q, 1.5707959086032286, 5);
  sqcRZGate(q, -1.688730196632613, 5);
  sqcRYGate(q, -0.09165224439280184, 6);
  sqcRZGate(q, 1.570787907553118, 6);
  sqcRYGate(q, -5.287262204815507e-07, 7);
  sqcRZGate(q, 3.1152141953659274, 7);
  sqcRYGate(q, -4.00566912972522e-07, 8);
  sqcRZGate(q, 0.3027284004678972, 8);
  sqcRYGate(q, 3.141584187122366, 9);
  sqcRZGate(q, -1.1427713458472397, 9);
  sqcRYGate(q, -4.213760315785464e-06, 10);
  sqcRZGate(q, -0.10450679188700306, 10);
  sqcRYGate(q, -1.5707954546116027, 11);
  sqcRZGate(q, -3.461111333538516e-06, 11);
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
  sqcRYGate(q, -5.279987260172847e-07, 0);
  sqcRZGate(q, 1.025042983359749, 0);
  sqcRYGate(q, 3.01233340167054, 1);
  sqcRZGate(q, 0.40783829384104386, 1);
  sqcRYGate(q, -1.5707945374114662, 2);
  sqcRZGate(q, 3.0421254369139215, 2);
  sqcRYGate(q, 3.1415546908909087, 3);
  sqcRZGate(q, -2.3287513282111547, 3);
  sqcRYGate(q, -1.570796982896626, 4);
  sqcRZGate(q, -0.09947460307169881, 4);
  sqcRYGate(q, 1.5460584879181054, 5);
  sqcRZGate(q, -1.368632803900658, 5);
  sqcRYGate(q, -1.5707823764060889, 6);
  sqcRZGate(q, -2.565179679941768, 6);
  sqcRYGate(q, 1.5707949955163096, 7);
  sqcRZGate(q, -2.733694971136458, 7);
  sqcRYGate(q, -1.5708021706830864, 8);
  sqcRZGate(q, -1.6702467929433877, 8);
  sqcRYGate(q, 1.65078971471824, 9);
  sqcRZGate(q, -2.7336943279032524, 9);
  sqcRYGate(q, -1.5707953448160827, 10);
  sqcRZGate(q, 1.4713264889897824, 10);
  sqcRYGate(q, -1.5327814914052764, 11);
  sqcRZGate(q, 1.978694993535681, 11);

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
