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

  sqcRYGate(q, 0.851080740769205, 0);
  sqcRZGate(q, 1.3632528869320388, 0);
  sqcRYGate(q, 0.15480076958881844, 1);
  sqcRZGate(q, -0.02276714598433197, 1);
  sqcRYGate(q, -1.802107255386461, 2);
  sqcRZGate(q, 2.146656614335291, 2);
  sqcRYGate(q, 2.280285955631893, 3);
  sqcRZGate(q, -2.4311340627570517, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.6501276299179457, 0);
  sqcRZGate(q, 1.1808627231938258, 0);
  sqcRYGate(q, -2.0167987957291076, 1);
  sqcRZGate(q, 1.7684644409824892, 1);
  sqcRYGate(q, 0.13692358228450066, 2);
  sqcRZGate(q, 2.425917140551296, 2);
  sqcRYGate(q, 1.697190092479088, 3);
  sqcRZGate(q, -1.8988601849335727, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.9077306420720388, 0);
  sqcRZGate(q, 0.496816751226671, 0);
  sqcRYGate(q, 0.7485717498224629, 1);
  sqcRZGate(q, 1.0142556006269003, 1);
  sqcRYGate(q, 0.27331141553940413, 2);
  sqcRZGate(q, 2.896594026846981, 2);
  sqcRYGate(q, -1.9098676282861708, 3);
  sqcRZGate(q, -0.24377075384638225, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.07111847095362991, 0);
  sqcRZGate(q, 2.1905359338906347, 0);
  sqcRYGate(q, 0.1610180663057701, 1);
  sqcRZGate(q, -1.6194680140104518, 1);
  sqcRYGate(q, 2.704028619772963, 2);
  sqcRZGate(q, -2.0911520933426, 2);
  sqcRYGate(q, 1.7660039331091044, 3);
  sqcRZGate(q, 1.8993497969469821, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.5822250149213198, 0);
  sqcRZGate(q, 0.862682580447022, 0);
  sqcRYGate(q, 0.32930339444274104, 1);
  sqcRZGate(q, -2.843866474285835, 1);
  sqcRYGate(q, 2.846730732469429, 2);
  sqcRZGate(q, 2.081816045180914, 2);
  sqcRYGate(q, 1.1263381528432541, 3);
  sqcRZGate(q, -2.721865627765469, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.890210460055029, 0);
  sqcRZGate(q, -2.9762252567206144, 0);
  sqcRYGate(q, -1.2101624904438755, 1);
  sqcRZGate(q, 0.6392344285840578, 1);
  sqcRYGate(q, 2.8784460594533767, 2);
  sqcRZGate(q, -2.7982918980303366, 2);
  sqcRYGate(q, 1.967558234178135, 3);
  sqcRZGate(q, -3.1399045794666147, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.8903336787317143, 0);
  sqcRZGate(q, -0.6204987997419522, 0);
  sqcRYGate(q, -2.869831208062886, 1);
  sqcRZGate(q, -1.1747774790389895, 1);
  sqcRYGate(q, 1.4004133180186136, 2);
  sqcRZGate(q, -2.789248760338021, 2);
  sqcRYGate(q, 2.7714737250973234, 3);
  sqcRZGate(q, -0.39265771164480956, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.529648613764731, 0);
  sqcRZGate(q, -1.0109654009657867, 0);
  sqcRYGate(q, 1.5737832577982942, 1);
  sqcRZGate(q, 0.29203247785460545, 1);
  sqcRYGate(q, 2.1640834942169245, 2);
  sqcRZGate(q, 1.345441446205034, 2);
  sqcRYGate(q, 1.0388248289797373, 3);
  sqcRZGate(q, -0.9433101240479703, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.1968260416382455, 0);
  sqcRZGate(q, 2.865207439048828, 0);
  sqcRYGate(q, 0.646355254304896, 1);
  sqcRZGate(q, -1.5226799609402897, 1);
  sqcRYGate(q, 2.9520917323527813, 2);
  sqcRZGate(q, -0.36042898574970206, 2);
  sqcRYGate(q, 0.4387809455736198, 3);
  sqcRZGate(q, 1.7590138497293253, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.2046424206425104, 0);
  sqcRZGate(q, 2.4594844145650345, 0);
  sqcRYGate(q, -2.2002008689907724, 1);
  sqcRZGate(q, 1.8491983459627956, 1);
  sqcRYGate(q, 0.5613060317761203, 2);
  sqcRZGate(q, 1.2829790450185459, 2);
  sqcRYGate(q, -2.573451863297013, 3);
  sqcRZGate(q, 1.0881591059531048, 3);

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
