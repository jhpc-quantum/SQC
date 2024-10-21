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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 2.5500850387043776, 0);
  sqcRZGate(q, -2.362953425012518, 0);
  sqcRYGate(q, 3.037545463315129, 1);
  sqcRZGate(q, -1.9736961650035978, 1);
  sqcRYGate(q, -2.5046207433006704, 2);
  sqcRZGate(q, -0.54001531088439, 2);
  sqcRYGate(q, -2.2644216728713173, 3);
  sqcRZGate(q, 0.982008540758536, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.148770314958153, 0);
  sqcRZGate(q, -2.603535043327007, 0);
  sqcRYGate(q, 2.77498307003751, 1);
  sqcRZGate(q, 1.6654927796894654, 1);
  sqcRYGate(q, -2.1796727487667606, 2);
  sqcRZGate(q, -0.5226669397943144, 2);
  sqcRYGate(q, -0.4390681960247803, 3);
  sqcRZGate(q, 1.8266482129574353, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9988822729109437, 0);
  sqcRZGate(q, -2.907154589723209, 0);
  sqcRYGate(q, 0.8418706861204718, 1);
  sqcRZGate(q, 0.9481079533072317, 1);
  sqcRYGate(q, 3.0109773750335234, 2);
  sqcRZGate(q, 0.8533751564361437, 2);
  sqcRYGate(q, -0.07704135022696901, 3);
  sqcRZGate(q, -1.93301741686016, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.144872636217972, 0);
  sqcRZGate(q, -1.591686103646995, 0);
  sqcRYGate(q, 0.48230010334482015, 1);
  sqcRZGate(q, -3.1253428555214526, 1);
  sqcRYGate(q, -2.271566402976558, 2);
  sqcRZGate(q, -3.0064278958031503, 2);
  sqcRYGate(q, -2.2992761386881395, 3);
  sqcRZGate(q, 1.4030013433241253, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0875782358274038, 0);
  sqcRZGate(q, 0.2440652553832765, 0);
  sqcRYGate(q, -2.473323612092926, 1);
  sqcRZGate(q, -0.272078689421563, 1);
  sqcRYGate(q, 2.4630636477900176, 2);
  sqcRZGate(q, 1.3043060668554456, 2);
  sqcRYGate(q, -0.9890510084365456, 3);
  sqcRZGate(q, 0.5721152001960093, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0975746498587284, 0);
  sqcRZGate(q, -1.9877035538730532, 0);
  sqcRYGate(q, 0.8700152010334653, 1);
  sqcRZGate(q, -1.030126623736344, 1);
  sqcRYGate(q, -2.674109951157541, 2);
  sqcRZGate(q, -1.8361130052194303, 2);
  sqcRYGate(q, -0.2111340713666836, 3);
  sqcRZGate(q, -0.1510329472990639, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.240847839504596, 0);
  sqcRZGate(q, -0.3257339337173696, 0);
  sqcRYGate(q, 1.744166474676483, 1);
  sqcRZGate(q, 1.1793063846940428, 1);
  sqcRYGate(q, 1.1870036452601347, 2);
  sqcRZGate(q, 2.761268414895519, 2);
  sqcRYGate(q, -1.0863700157296865, 3);
  sqcRZGate(q, -0.9613404357409313, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.970790647042735, 0);
  sqcRZGate(q, 2.7432186390047484, 0);
  sqcRYGate(q, 1.133912577189741, 1);
  sqcRZGate(q, 1.032839528652861, 1);
  sqcRYGate(q, 0.9338449222861254, 2);
  sqcRZGate(q, 1.9740171831499693, 2);
  sqcRYGate(q, -0.17543722239664294, 3);
  sqcRZGate(q, 2.6576331062172325, 3);

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
