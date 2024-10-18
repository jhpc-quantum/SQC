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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 1.0663062114169009e-05, 0);
  sqcRZGate(q, 1.759617278567779, 0);
  sqcRYGate(q, 0.22852855382370865, 1);
  sqcRZGate(q, -1.5633981307429075, 1);
  sqcRYGate(q, 1.5707990172813717, 2);
  sqcRZGate(q, -3.141241639905891, 2);
  sqcRYGate(q, -1.5723730268914538, 3);
  sqcRZGate(q, -1.8786437787782704, 3);
  sqcRYGate(q, 0.23628476364294324, 4);
  sqcRZGate(q, 1.5225954123609295, 4);
  sqcRYGate(q, -3.1415925660173225, 5);
  sqcRZGate(q, -2.394956843647718, 5);
  sqcRYGate(q, 0.1667949443528265, 6);
  sqcRZGate(q, 1.406269743102012, 6);
  sqcRYGate(q, -1.574880522931859, 7);
  sqcRZGate(q, -0.513323695977877, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.1212507501447395, 0);
  sqcRZGate(q, 1.5612732542472818, 0);
  sqcRYGate(q, 1.4937130121090245, 1);
  sqcRZGate(q, -1.5713192167093433, 1);
  sqcRYGate(q, 1.5706400790066681, 2);
  sqcRZGate(q, -1.4890130847276626, 2);
  sqcRYGate(q, 1.5711731423570006, 3);
  sqcRZGate(q, 0.0694182118895883, 3);
  sqcRYGate(q, -3.141592556869651, 4);
  sqcRZGate(q, 1.5137859529859758, 4);
  sqcRYGate(q, -1.570979811394221, 5);
  sqcRZGate(q, 1.082499275231932, 5);
  sqcRYGate(q, -2.8831842115095965, 6);
  sqcRZGate(q, 1.8495198718696866, 6);
  sqcRYGate(q, 3.130251032178164, 7);
  sqcRZGate(q, 1.1298940174864063, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.909392023796004, 0);
  sqcRZGate(q, 1.5705337485992774, 0);
  sqcRYGate(q, 1.5708485365587452, 1);
  sqcRZGate(q, 3.1415885470239076, 1);
  sqcRYGate(q, -1.5687558250964084, 2);
  sqcRZGate(q, 1.562666162834715, 2);
  sqcRYGate(q, 8.412706282712179e-07, 3);
  sqcRZGate(q, -0.07021965727643337, 3);
  sqcRYGate(q, -0.200923295912955, 4);
  sqcRZGate(q, -1.570862448067957, 4);
  sqcRYGate(q, 3.1415419119551053, 5);
  sqcRZGate(q, 1.082518912683631, 5);
  sqcRYGate(q, 0.04302936422957691, 6);
  sqcRZGate(q, -1.852105343878689, 6);
  sqcRYGate(q, -1.570777929475656, 7);
  sqcRZGate(q, 3.141589238022481, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5708012913348224, 0);
  sqcRZGate(q, -2.8650028562778822e-05, 0);
  sqcRYGate(q, 1.570357233569361, 1);
  sqcRZGate(q, -1.5708829398839503, 1);
  sqcRYGate(q, -1.5707967804105465, 2);
  sqcRZGate(q, -3.198195062528786e-06, 2);
  sqcRYGate(q, 0.008427873821733378, 3);
  sqcRZGate(q, -1.5699940659528204, 3);
  sqcRYGate(q, 1.5707963194885113, 4);
  sqcRZGate(q, 2.236984921031323e-06, 4);
  sqcRYGate(q, -1.570724633745572, 5);
  sqcRZGate(q, -1.5709898665519924, 5);
  sqcRYGate(q, 1.5707908622594287, 6);
  sqcRZGate(q, -4.5820122439366166e-05, 6);
  sqcRYGate(q, 1.5011957995684693, 7);
  sqcRZGate(q, -1.570791842186516, 7);

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
