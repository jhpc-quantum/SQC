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

  sqcRYGate(q, -1.9233573818752774, 0);
  sqcRYGate(q, -2.623846565414432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.750534113111317, 0);
  sqcRYGate(q, -0.7690130327880197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.59120596771527, 2);
  sqcRYGate(q, -0.594624900516096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0342810950764396, 2);
  sqcRYGate(q, 3.0626982186335083, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8607472329398247, 0);
  sqcRYGate(q, -2.642963803095501, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.093781484990342, 0);
  sqcRYGate(q, -2.819280208436649, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9994456401174852, 1);
  sqcRYGate(q, 1.7957040027749542, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.938434853962918, 1);
  sqcRYGate(q, 1.6252987556639462, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6422961299600927, 0);
  sqcRYGate(q, 0.9123062736021077, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2545317263667426, 0);
  sqcRYGate(q, -2.0568367215463343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2522663902587434, 2);
  sqcRYGate(q, 1.9017478102387972, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.102258184280788, 2);
  sqcRYGate(q, -0.8717656477169964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8139736349724687, 0);
  sqcRYGate(q, -2.943325748124581, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0641438200853104, 0);
  sqcRYGate(q, 0.004340356847714882, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.392345939520361, 1);
  sqcRYGate(q, 2.5133078709297276, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0525234614645664, 1);
  sqcRYGate(q, -2.2925201340004118, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6154844888546003, 0);
  sqcRYGate(q, 0.37867779826354475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6063297130978738, 0);
  sqcRYGate(q, -1.4818933154127445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8152289433305855, 2);
  sqcRYGate(q, 0.4999148017493837, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8856174611952783, 2);
  sqcRYGate(q, -0.39766621867229907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.40011575146546186, 0);
  sqcRYGate(q, 2.2608167438781495, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.958872436358046, 0);
  sqcRYGate(q, 1.2256320905543474, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1294049012884786, 1);
  sqcRYGate(q, 3.0818941953979198, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8039721327054856, 1);
  sqcRYGate(q, -2.6750223078979283, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3372794988195027, 0);
  sqcRYGate(q, -2.399569997242944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8876263999348843, 0);
  sqcRYGate(q, 0.9855149210620922, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.29729782180924813, 2);
  sqcRYGate(q, 2.441519198022271, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1551355265912875, 2);
  sqcRYGate(q, -0.7687493126797404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6861412592195446, 0);
  sqcRYGate(q, 1.6315699623443811, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6292481062379567, 0);
  sqcRYGate(q, 1.2619035313344282, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.015082074285994129, 1);
  sqcRYGate(q, -0.955320388347622, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6132493893897255, 1);
  sqcRYGate(q, 2.9167963453137755, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.409016911836664, 0);
  sqcRYGate(q, -3.0648615405328057, 1);
  sqcRYGate(q, 0.821737102061504, 2);
  sqcRYGate(q, 1.247216627982234, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
