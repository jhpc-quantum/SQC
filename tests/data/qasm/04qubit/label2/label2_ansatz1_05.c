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

  sqcRYGate(q, -0.12377748113381593, 0);
  sqcRZGate(q, -1.8686712779573293, 0);
  sqcRYGate(q, 2.426532914441776, 1);
  sqcRZGate(q, 1.4895737522551447, 1);
  sqcRYGate(q, -2.8082437132542166, 2);
  sqcRZGate(q, -1.796590523920744, 2);
  sqcRYGate(q, 0.10762630897425879, 3);
  sqcRZGate(q, -1.6200243354521526, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1922352666109566, 0);
  sqcRZGate(q, -1.8521958647327394, 0);
  sqcRYGate(q, -1.2193393597014088, 1);
  sqcRZGate(q, 1.527636571019027, 1);
  sqcRYGate(q, -0.19911784549769582, 2);
  sqcRZGate(q, 1.8618381189208986, 2);
  sqcRYGate(q, 2.870184212797358, 3);
  sqcRZGate(q, 0.06276842501237065, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.558231711011924, 0);
  sqcRZGate(q, 2.8152367064348804, 0);
  sqcRYGate(q, -0.7559853133305415, 1);
  sqcRZGate(q, 1.4840641807944381, 1);
  sqcRYGate(q, 1.0877910294574664, 2);
  sqcRZGate(q, 0.005921772041095772, 2);
  sqcRYGate(q, -0.19459766004591897, 3);
  sqcRZGate(q, -2.28557657642186, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2871053061914988, 0);
  sqcRZGate(q, 2.4076083478167467, 0);
  sqcRYGate(q, -1.926773766654208, 1);
  sqcRZGate(q, -0.30892966457849197, 1);
  sqcRYGate(q, 0.8975901398755846, 2);
  sqcRZGate(q, 1.0849866202180614, 2);
  sqcRYGate(q, -3.1056657896090822, 3);
  sqcRZGate(q, 2.258221993524193, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6734928642188915, 0);
  sqcRZGate(q, 1.1573273886848616, 0);
  sqcRYGate(q, -2.380392254702118, 1);
  sqcRZGate(q, 0.4454218927547055, 1);
  sqcRYGate(q, 0.26246856614277553, 2);
  sqcRZGate(q, -1.8468943045389947, 2);
  sqcRYGate(q, -2.7456374700253274, 3);
  sqcRZGate(q, -0.6494432908987599, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6596119450305578, 0);
  sqcRZGate(q, 1.8696229140464402, 0);
  sqcRYGate(q, -2.7888843666813523, 1);
  sqcRZGate(q, -3.104788977854875, 1);
  sqcRYGate(q, -3.0570232063728047, 2);
  sqcRZGate(q, -2.8196917665605667, 2);
  sqcRYGate(q, -0.7191922937998073, 3);
  sqcRZGate(q, -2.161771027072255, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8710253804615515, 0);
  sqcRZGate(q, -0.0798897478493263, 0);
  sqcRYGate(q, 1.6560630052790302, 1);
  sqcRZGate(q, 2.424616020469651, 1);
  sqcRYGate(q, -0.0001067399992509266, 2);
  sqcRZGate(q, -1.8526536218680483, 2);
  sqcRYGate(q, 1.7025997134363804, 3);
  sqcRZGate(q, 3.0138163811102414, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9036065885148264, 0);
  sqcRZGate(q, 3.089758094854616, 0);
  sqcRYGate(q, 2.8262188497846856, 1);
  sqcRZGate(q, 2.0936777255898633, 1);
  sqcRYGate(q, 0.019325795845768576, 2);
  sqcRZGate(q, 2.9453526174104687, 2);
  sqcRYGate(q, -1.2050398373828761, 3);
  sqcRZGate(q, 0.6145223803019677, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5957594154836476, 0);
  sqcRZGate(q, 0.4015480389489481, 0);
  sqcRYGate(q, -1.1810421080282525, 1);
  sqcRZGate(q, 0.8042747730230076, 1);
  sqcRYGate(q, 2.236665811743909, 2);
  sqcRZGate(q, 2.6533379425485335, 2);
  sqcRYGate(q, -0.20839829786203357, 3);
  sqcRZGate(q, 2.9584340471604635, 3);

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
