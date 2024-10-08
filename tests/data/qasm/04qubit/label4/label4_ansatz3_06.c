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

  sqcRYGate(q, 2.836183085357597, 0);
  sqcRZGate(q, -0.6069649781725097, 0);
  sqcRYGate(q, 2.148902255932421, 1);
  sqcRZGate(q, -0.9487402290617065, 1);
  sqcRYGate(q, -1.151240975923915, 2);
  sqcRZGate(q, 1.3800943023163106, 2);
  sqcRYGate(q, 1.0244441047129698, 3);
  sqcRZGate(q, 1.1888715712077946, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.4316725007280957, 0);
  sqcRZGate(q, -2.9269161097870797, 0);
  sqcRYGate(q, -0.7379652739479211, 1);
  sqcRZGate(q, -1.4055507879036728, 1);
  sqcRYGate(q, -3.1121883370528076, 2);
  sqcRZGate(q, 3.0669598567215868, 2);
  sqcRYGate(q, 1.244963639993447, 3);
  sqcRZGate(q, -0.22744231925774283, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.3347513845007102, 0);
  sqcRZGate(q, 2.1074462728088577, 0);
  sqcRYGate(q, 0.5477281739396145, 1);
  sqcRZGate(q, 1.9210609227635933, 1);
  sqcRYGate(q, -1.7127339380508033, 2);
  sqcRZGate(q, 2.1967738101619023, 2);
  sqcRYGate(q, -1.6506263096005216, 3);
  sqcRZGate(q, -2.5959894518113855, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.6305333123800096, 0);
  sqcRZGate(q, 0.7799239156950879, 0);
  sqcRYGate(q, 2.468294861029113, 1);
  sqcRZGate(q, 2.244074839574685, 1);
  sqcRYGate(q, 1.1470747753374466, 2);
  sqcRZGate(q, -2.5488515280616864, 2);
  sqcRYGate(q, -0.029209963070919914, 3);
  sqcRZGate(q, -1.0883986590825299, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.278422861293188, 0);
  sqcRZGate(q, -1.4189351312577423, 0);
  sqcRYGate(q, 2.622457689558756, 1);
  sqcRZGate(q, 2.660820224119921, 1);
  sqcRYGate(q, 0.49387733671429945, 2);
  sqcRZGate(q, -1.610406487608583, 2);
  sqcRYGate(q, -0.693799115255465, 3);
  sqcRZGate(q, 0.3434335388019978, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8346810172431471, 0);
  sqcRZGate(q, 1.2516022703857315, 0);
  sqcRYGate(q, 1.6347893677652658, 1);
  sqcRZGate(q, 0.14478108577726148, 1);
  sqcRYGate(q, 2.36542896511729, 2);
  sqcRZGate(q, -1.698825585550323, 2);
  sqcRYGate(q, -2.1436448952322817, 3);
  sqcRZGate(q, 2.601477541620089, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.97697818483336, 0);
  sqcRZGate(q, -1.7369120087224383, 0);
  sqcRYGate(q, -2.5429696789506724, 1);
  sqcRZGate(q, -1.5889692764219268, 1);
  sqcRYGate(q, -0.7457036982275875, 2);
  sqcRZGate(q, -0.6563370420160606, 2);
  sqcRYGate(q, -2.3221191193102695, 3);
  sqcRZGate(q, 1.0779117901007826, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.750229704729307, 0);
  sqcRZGate(q, -2.3084189664637726, 0);
  sqcRYGate(q, -0.4048789451278137, 1);
  sqcRZGate(q, -0.3708226361001845, 1);
  sqcRYGate(q, -0.7692248916886693, 2);
  sqcRZGate(q, -0.8861371705255925, 2);
  sqcRYGate(q, -2.0503095625393346, 3);
  sqcRZGate(q, -0.9400473045512292, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5722850448152825, 0);
  sqcRZGate(q, 2.214751295617374, 0);
  sqcRYGate(q, 1.0199832115589853, 1);
  sqcRZGate(q, 1.5017589011077837, 1);
  sqcRYGate(q, 1.4307151379863607, 2);
  sqcRZGate(q, -0.08892673888722014, 2);
  sqcRYGate(q, -3.134314358728676, 3);
  sqcRZGate(q, 0.5945005551231464, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.3571558912048634, 0);
  sqcRZGate(q, -1.6648188612917276, 0);
  sqcRYGate(q, -1.6785123332489462, 1);
  sqcRZGate(q, 1.6425321417903875, 1);
  sqcRYGate(q, 2.4748951818121276, 2);
  sqcRZGate(q, -1.669417993452405, 2);
  sqcRYGate(q, -1.0590759453738752, 3);
  sqcRZGate(q, 2.852346802258261, 3);

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
