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

  sqcRYGate(q, -0.42031193742468625, 0);
  sqcRZGate(q, 0.898794702089455, 0);
  sqcRYGate(q, -2.7768527853418647, 1);
  sqcRZGate(q, 1.2747277437682272, 1);
  sqcRYGate(q, -0.38072923457528846, 2);
  sqcRZGate(q, -1.6337192332036632, 2);
  sqcRYGate(q, -0.9563852701876332, 3);
  sqcRZGate(q, 2.5279630643688416, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8836540934169346, 0);
  sqcRZGate(q, -1.2924309214513183, 0);
  sqcRYGate(q, 1.2248371725185205, 1);
  sqcRZGate(q, 1.4055842811952548, 1);
  sqcRYGate(q, -1.648652668008388, 2);
  sqcRZGate(q, -1.9760518783371346, 2);
  sqcRYGate(q, -1.1525297692354375, 3);
  sqcRZGate(q, 1.4156882553896977, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9785991153331102, 0);
  sqcRZGate(q, 1.4600100450513736, 0);
  sqcRYGate(q, 1.1041180079736532, 1);
  sqcRZGate(q, -2.7989477216999754, 1);
  sqcRYGate(q, 2.499307578027012, 2);
  sqcRZGate(q, 0.7547525186860895, 2);
  sqcRYGate(q, 2.3457599421798134, 3);
  sqcRZGate(q, 1.1622253983729238, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.044473706020689896, 0);
  sqcRZGate(q, -0.9591544679538595, 0);
  sqcRYGate(q, 1.6289926628649807, 1);
  sqcRZGate(q, -0.7116365816083344, 1);
  sqcRYGate(q, -2.783011907997435, 2);
  sqcRZGate(q, 2.053225590239184, 2);
  sqcRYGate(q, 0.676369414432083, 3);
  sqcRZGate(q, -1.513009224895788, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.110449094232637, 0);
  sqcRZGate(q, -3.0354131659639934, 0);
  sqcRYGate(q, 0.6685402627310744, 1);
  sqcRZGate(q, -2.2955631016438085, 1);
  sqcRYGate(q, -1.0633290097052979, 2);
  sqcRZGate(q, 2.6912546731399782, 2);
  sqcRYGate(q, 2.649497362659463, 3);
  sqcRZGate(q, -0.5630670877968207, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.799258558306461, 0);
  sqcRZGate(q, 1.2665054083201202, 0);
  sqcRYGate(q, -0.9033933220334894, 1);
  sqcRZGate(q, 2.6899792022342104, 1);
  sqcRYGate(q, -2.3339820076651856, 2);
  sqcRZGate(q, 1.8858707511987935, 2);
  sqcRYGate(q, 0.7640117773854377, 3);
  sqcRZGate(q, -0.8093717752879651, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7650663154989674, 0);
  sqcRZGate(q, 0.1770821121443425, 0);
  sqcRYGate(q, 2.859300154153378, 1);
  sqcRZGate(q, -1.8350021809062322, 1);
  sqcRYGate(q, -2.7927454746730977, 2);
  sqcRZGate(q, -1.7283076994230413, 2);
  sqcRYGate(q, 0.6454659695185079, 3);
  sqcRZGate(q, 1.4868596338142708, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2015322818984313, 0);
  sqcRZGate(q, -0.9546901340777968, 0);
  sqcRYGate(q, -0.03970993379574246, 1);
  sqcRZGate(q, -0.9972162829482537, 1);
  sqcRYGate(q, 2.8110890817750085, 2);
  sqcRZGate(q, -0.9045765801749628, 2);
  sqcRYGate(q, -0.7709960892803487, 3);
  sqcRZGate(q, 1.7406439717133164, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9111508091396292, 0);
  sqcRZGate(q, 0.6300385105197622, 0);
  sqcRYGate(q, -2.874383470931709, 1);
  sqcRZGate(q, 2.231955877468134, 1);
  sqcRYGate(q, 1.0616297464704967, 2);
  sqcRZGate(q, 1.7540381185739573, 2);
  sqcRYGate(q, 1.749862748392668, 3);
  sqcRZGate(q, -2.2768046757247387, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0972516532082315, 0);
  sqcRZGate(q, 2.5386879607399098, 0);
  sqcRYGate(q, -0.03397244660775333, 1);
  sqcRZGate(q, 1.7618664095970948, 1);
  sqcRYGate(q, -1.9048394711203205, 2);
  sqcRZGate(q, -2.6222581214450718, 2);
  sqcRYGate(q, 1.8961106538543788, 3);
  sqcRZGate(q, 1.840868135570627, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.1367249051438133, 0);
  sqcRZGate(q, -0.316015543171516, 0);
  sqcRYGate(q, 2.257146616126988, 1);
  sqcRZGate(q, 0.8476792376322024, 1);
  sqcRYGate(q, -2.6945936644025514, 2);
  sqcRZGate(q, -0.9037838770329385, 2);
  sqcRYGate(q, 0.8075868190543058, 3);
  sqcRZGate(q, -1.3547828018069499, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5187516016378018, 0);
  sqcRZGate(q, -1.5173064167166814, 0);
  sqcRYGate(q, 2.469202272316933, 1);
  sqcRZGate(q, -0.5142076090409126, 1);
  sqcRYGate(q, -0.7550044874079785, 2);
  sqcRZGate(q, 2.504953689863713, 2);
  sqcRYGate(q, 0.24730428065453314, 3);
  sqcRZGate(q, 0.8418282826915657, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6482333176728255, 0);
  sqcRZGate(q, 0.7934047970105443, 0);
  sqcRYGate(q, -1.4250740591734692, 1);
  sqcRZGate(q, -2.0743518012627478, 1);
  sqcRYGate(q, 2.673826423874875, 2);
  sqcRZGate(q, 2.678992371205862, 2);
  sqcRYGate(q, -2.704000425204739, 3);
  sqcRZGate(q, 0.13294106570252048, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6102474501674654, 0);
  sqcRZGate(q, -2.6031858042311056, 0);
  sqcRYGate(q, 2.3074808624742174, 1);
  sqcRZGate(q, 2.532304390794165, 1);
  sqcRYGate(q, 0.7426965104950778, 2);
  sqcRZGate(q, -0.32601464329965424, 2);
  sqcRYGate(q, -2.8917354991544224, 3);
  sqcRZGate(q, -0.8306130992718637, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9317415588310505, 0);
  sqcRZGate(q, -1.5151354136095314, 0);
  sqcRYGate(q, -0.6479875775378021, 1);
  sqcRZGate(q, 0.7428069959516788, 1);
  sqcRYGate(q, -1.1987757892602222, 2);
  sqcRZGate(q, 1.5879985763094389, 2);
  sqcRYGate(q, 2.075835377765168, 3);
  sqcRZGate(q, -2.795970482173104, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1190389123917264, 0);
  sqcRZGate(q, -2.0488500722478156, 0);
  sqcRYGate(q, 0.41224334065695073, 1);
  sqcRZGate(q, -1.7876606695820356, 1);
  sqcRYGate(q, 0.2864703899388026, 2);
  sqcRZGate(q, 0.6285981559520648, 2);
  sqcRYGate(q, 0.004552845134425888, 3);
  sqcRZGate(q, -2.402142297851796, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7029832278675592, 0);
  sqcRZGate(q, 1.5191684326488137, 0);
  sqcRYGate(q, 0.9046140135728633, 1);
  sqcRZGate(q, 0.846872414298338, 1);
  sqcRYGate(q, -0.8416063642193407, 2);
  sqcRZGate(q, 2.911002139763168, 2);
  sqcRYGate(q, 3.0948090114987226, 3);
  sqcRZGate(q, 1.2578706627457397, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.065413687767942, 0);
  sqcRZGate(q, 0.6585832617550853, 0);
  sqcRYGate(q, 1.7891083240631878, 1);
  sqcRZGate(q, 0.5942628648488899, 1);
  sqcRYGate(q, -2.115949301057041, 2);
  sqcRZGate(q, 0.7805890017777886, 2);
  sqcRYGate(q, -2.967939450205284, 3);
  sqcRZGate(q, -2.1276066843101606, 3);

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
