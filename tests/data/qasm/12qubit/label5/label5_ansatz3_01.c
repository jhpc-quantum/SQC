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

  sqcRYGate(q, -1.7228566286549896, 0);
  sqcRZGate(q, 2.6900092818565273, 0);
  sqcRYGate(q, 5.501185203557076e-07, 1);
  sqcRZGate(q, 2.740723817227995, 1);
  sqcRYGate(q, 5.160310806062417e-08, 2);
  sqcRZGate(q, -0.17409730676997456, 2);
  sqcRYGate(q, 1.1207089175879723, 3);
  sqcRZGate(q, -0.5457851316361668, 3);
  sqcRYGate(q, -1.5690691161989976, 4);
  sqcRZGate(q, 3.910083066145513e-05, 4);
  sqcRYGate(q, -6.05865968296368e-07, 5);
  sqcRZGate(q, -0.11609426541630528, 5);
  sqcRYGate(q, -1.5707919967510173, 6);
  sqcRZGate(q, 2.2583932061427774, 6);
  sqcRYGate(q, 3.1415904343966248, 7);
  sqcRZGate(q, 3.0569400601458807, 7);
  sqcRYGate(q, 1.5708254364689545, 8);
  sqcRZGate(q, -1.1781358190096058, 8);
  sqcRYGate(q, 3.1361982908528603, 9);
  sqcRZGate(q, -0.7253438634384279, 9);
  sqcRYGate(q, 0.009224930843688956, 10);
  sqcRZGate(q, 2.0232057092214863, 10);
  sqcRYGate(q, 2.7086974776960444, 11);
  sqcRZGate(q, 1.9964232094694743, 11);
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
  sqcRYGate(q, 0.6391227917215819, 0);
  sqcRZGate(q, 0.6052402488336704, 0);
  sqcRYGate(q, -3.141590989058631, 1);
  sqcRZGate(q, 2.5514307126380507, 1);
  sqcRYGate(q, -3.1415921879468085, 2);
  sqcRZGate(q, -1.8298612435892068, 2);
  sqcRYGate(q, -1.43955168682061, 3);
  sqcRZGate(q, -0.9551854418357113, 3);
  sqcRYGate(q, -1.5707896951868152, 4);
  sqcRZGate(q, -2.666715168042999, 4);
  sqcRYGate(q, -1.5708065950905772, 5);
  sqcRZGate(q, 1.286406758183034e-05, 5);
  sqcRYGate(q, 3.141586425528905, 6);
  sqcRZGate(q, -2.834013457649975, 6);
  sqcRYGate(q, -1.812383062114243e-05, 7);
  sqcRZGate(q, 2.3381472260890086, 7);
  sqcRYGate(q, 3.5721562730017813e-06, 8);
  sqcRZGate(q, 2.7490087159636176, 8);
  sqcRYGate(q, 1.5756004964487973, 9);
  sqcRZGate(q, 1.225310419491123, 9);
  sqcRYGate(q, 1.5708387033413818, 10);
  sqcRZGate(q, 0.04097363586245262, 10);
  sqcRYGate(q, -1.520431994778944, 11);
  sqcRZGate(q, 0.3951285026856288, 11);
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
  sqcRYGate(q, -2.281125447435056, 0);
  sqcRZGate(q, 1.3587590462858996, 0);
  sqcRYGate(q, 2.357157018552394, 1);
  sqcRZGate(q, -3.1415871610573363, 1);
  sqcRYGate(q, -1.570795926351371, 2);
  sqcRZGate(q, -1.203184063702686, 2);
  sqcRYGate(q, 1.5708010889238353, 3);
  sqcRZGate(q, -1.586327604770084, 3);
  sqcRYGate(q, -2.983558934133157e-06, 4);
  sqcRZGate(q, 1.775753646686458, 4);
  sqcRYGate(q, -1.6875815674654808, 5);
  sqcRZGate(q, 3.1415861074443407, 5);
  sqcRYGate(q, 3.1253571193950083, 6);
  sqcRZGate(q, -1.9406538609387098, 6);
  sqcRYGate(q, 2.0934063814048915, 7);
  sqcRZGate(q, 0.9468577550450925, 7);
  sqcRYGate(q, -2.0154699145471926, 8);
  sqcRZGate(q, 0.10161710686096281, 8);
  sqcRYGate(q, 0.0014843425491109607, 9);
  sqcRZGate(q, 1.9160881693043157, 9);
  sqcRYGate(q, -0.0420511577427285, 10);
  sqcRZGate(q, 1.5297779513836787, 10);
  sqcRYGate(q, 1.5706172010777317, 11);
  sqcRZGate(q, -2.0122645554232985, 11);
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
  sqcRYGate(q, -1.5707976957759044, 0);
  sqcRZGate(q, -0.5015437179437034, 0);
  sqcRYGate(q, 1.570799239565748, 1);
  sqcRZGate(q, -1.1593627196095333, 1);
  sqcRYGate(q, 3.1415925682348806, 2);
  sqcRZGate(q, 1.938408560578928, 2);
  sqcRYGate(q, -3.0717043486561124e-07, 3);
  sqcRZGate(q, -1.5552957611916243, 3);
  sqcRYGate(q, 3.1415920862717703, 4);
  sqcRZGate(q, 1.2506846368989981, 4);
  sqcRYGate(q, -2.533457445320917, 5);
  sqcRZGate(q, 3.1415865474302223, 5);
  sqcRYGate(q, -5.134688629837569e-07, 6);
  sqcRZGate(q, -1.3039144675815213, 6);
  sqcRYGate(q, -3.141339252235195, 7);
  sqcRZGate(q, 0.9468656933468313, 7);
  sqcRYGate(q, 3.005532129048957e-05, 8);
  sqcRZGate(q, 1.5072698989850535, 8);
  sqcRYGate(q, 1.5708030725493638, 9);
  sqcRZGate(q, -0.016556427012213763, 9);
  sqcRYGate(q, -2.7709447697217082, 10);
  sqcRZGate(q, 1.570716401797358, 10);
  sqcRYGate(q, 1.5161187580589894, 11);
  sqcRZGate(q, -2.8862928404457455, 11);
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
  sqcRYGate(q, -3.1415922676404042, 0);
  sqcRZGate(q, -0.31502675204726405, 0);
  sqcRYGate(q, -3.4714836074656014e-07, 1);
  sqcRZGate(q, -1.3731577157148442, 1);
  sqcRYGate(q, 1.57079529289933, 2);
  sqcRZGate(q, 0.18651742630154547, 2);
  sqcRYGate(q, -1.5707982000602039, 3);
  sqcRZGate(q, 0.6090735905723415, 3);
  sqcRYGate(q, 6.419784133626649e-06, 4);
  sqcRZGate(q, -2.2587774992551566, 4);
  sqcRYGate(q, -1.515929543906914, 5);
  sqcRZGate(q, -2.532489429519499, 5);
  sqcRYGate(q, 3.1259187461284976, 6);
  sqcRZGate(q, 1.7307571282665997, 6);
  sqcRYGate(q, -1.5707951928933355, 7);
  sqcRZGate(q, 0.6090576282938324, 7);
  sqcRYGate(q, 3.1412827049500014, 8);
  sqcRZGate(q, -0.9830521861050696, 8);
  sqcRYGate(q, -0.008410232741465682, 9);
  sqcRZGate(q, 0.6256796594407665, 9);
  sqcRYGate(q, -1.5666041030403726, 10);
  sqcRZGate(q, 2.1204584474577945, 10);
  sqcRYGate(q, 0.7881982196351559, 11);
  sqcRZGate(q, 0.6090175888005929, 11);

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
