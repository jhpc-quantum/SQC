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

  sqcRYGate(q, 1.5708614827369454, 0);
  sqcRZGate(q, 1.5702065002176044, 0);
  sqcRYGate(q, -3.1415211259132607, 1);
  sqcRZGate(q, 0.8748781137911529, 1);
  sqcRYGate(q, 1.571829207187246, 2);
  sqcRZGate(q, -0.2132312730750387, 2);
  sqcRYGate(q, 3.1415925437826413, 3);
  sqcRZGate(q, 2.275405843130759, 3);
  sqcRYGate(q, 2.159514641515255e-07, 4);
  sqcRZGate(q, 0.39813252546717953, 4);
  sqcRYGate(q, 3.0673982096709826, 5);
  sqcRZGate(q, 1.328186447437681, 5);
  sqcRYGate(q, -1.5707831812533595, 6);
  sqcRZGate(q, 1.5707933184429557, 6);
  sqcRYGate(q, 2.974101697539311e-05, 7);
  sqcRZGate(q, 1.6959932362564856, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.3577236760434772, 0);
  sqcRZGate(q, -1.9604308578362921, 0);
  sqcRYGate(q, -1.5707628241287228, 1);
  sqcRZGate(q, -1.5704029937653212, 1);
  sqcRYGate(q, 1.3409325017373899, 2);
  sqcRZGate(q, 0.02872394466411911, 2);
  sqcRYGate(q, 3.141591895591363, 3);
  sqcRZGate(q, 0.4789112860022643, 3);
  sqcRYGate(q, -3.0624385221469885, 4);
  sqcRZGate(q, -1.5708855070480803, 4);
  sqcRYGate(q, -3.141592326088491, 5);
  sqcRZGate(q, -1.5983977816998503, 5);
  sqcRYGate(q, -1.7856641441971557, 6);
  sqcRZGate(q, -1.5708198235674458, 6);
  sqcRYGate(q, -1.5707977360046987, 7);
  sqcRZGate(q, -0.7039813362889449, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5681655864469999, 0);
  sqcRZGate(q, -1.5706841749995162, 0);
  sqcRYGate(q, 1.5717884030143574, 1);
  sqcRZGate(q, -1.5707983839548223, 1);
  sqcRYGate(q, -3.141500050010267, 2);
  sqcRZGate(q, -3.1135593514606716, 2);
  sqcRYGate(q, 1.5707972853789613, 3);
  sqcRZGate(q, 1.40790291100145, 3);
  sqcRYGate(q, -1.5707978175583135, 4);
  sqcRZGate(q, 1.5707955777790867, 4);
  sqcRYGate(q, -0.05855828550493919, 5);
  sqcRZGate(q, 3.042035451220708, 5);
  sqcRYGate(q, 1.5708115613156002, 6);
  sqcRZGate(q, -1.1716447074381007, 6);
  sqcRYGate(q, -1.9979084385842084e-05, 7);
  sqcRZGate(q, 2.168279018168655, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5709083483289834, 0);
  sqcRZGate(q, -0.485704140657036, 0);
  sqcRYGate(q, 1.5701365901240496, 1);
  sqcRZGate(q, -0.12851533771132395, 1);
  sqcRYGate(q, -3.066577884153688, 2);
  sqcRZGate(q, 1.5707956847448745, 2);
  sqcRYGate(q, 1.0582881825181294e-06, 3);
  sqcRZGate(q, 0.1625986003482111, 3);
  sqcRYGate(q, -1.5695141240377464, 4);
  sqcRZGate(q, 1.5706556411574144, 4);
  sqcRYGate(q, -4.288665709327966e-07, 5);
  sqcRZGate(q, 1.6702825910944992, 5);
  sqcRYGate(q, -1.570726252051972, 6);
  sqcRZGate(q, 1.6494956482215468, 6);
  sqcRYGate(q, 3.1414092840691015, 7);
  sqcRZGate(q, 1.6025313370910934, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.0010806797436688006, 0);
  sqcRZGate(q, -1.4127992556567737, 0);
  sqcRYGate(q, -0.0016721424870529563, 1);
  sqcRZGate(q, -1.4420995980862166, 1);
  sqcRYGate(q, 1.5708854604292297, 2);
  sqcRZGate(q, -3.1396406151952014, 2);
  sqcRYGate(q, 1.5708000116422522, 3);
  sqcRZGate(q, -2.33364776132417, 3);
  sqcRYGate(q, -1.5707962935641984, 4);
  sqcRZGate(q, 0.5731055412138221, 4);
  sqcRYGate(q, 1.5707962954113348, 5);
  sqcRZGate(q, 3.141144690710266, 5);
  sqcRYGate(q, -5.852461835775813e-05, 6);
  sqcRZGate(q, -1.4555368314151735, 6);
  sqcRYGate(q, -1.5709113941509258, 7);
  sqcRZGate(q, -3.141587021942334, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.0003999840276396327, 0);
  sqcRZGate(q, -2.8747429261966095, 0);
  sqcRYGate(q, -0.30519729789391725, 1);
  sqcRZGate(q, -0.0002834508732139446, 1);
  sqcRYGate(q, -3.1210241449077714, 2);
  sqcRZGate(q, -0.8807262018191314, 2);
  sqcRYGate(q, 1.1500477153006687e-07, 3);
  sqcRZGate(q, -0.8078895392508532, 3);
  sqcRYGate(q, 1.0965806476193054e-06, 4);
  sqcRZGate(q, -0.573111316592935, 4);
  sqcRYGate(q, 0.07557353634788798, 5);
  sqcRZGate(q, -0.45143239382601585, 5);
  sqcRYGate(q, -3.141535513966442, 6);
  sqcRZGate(q, -2.947601593887047, 6);
  sqcRYGate(q, 1.5707948682031647, 7);
  sqcRZGate(q, 0.189974769584083, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.1414622273488573, 0);
  sqcRZGate(q, -0.7180430669630339, 0);
  sqcRYGate(q, -1.5733651396645443, 1);
  sqcRZGate(q, 0.7428074272514318, 1);
  sqcRYGate(q, 0.0001320819659216852, 2);
  sqcRZGate(q, 0.22506636265634405, 2);
  sqcRYGate(q, 1.5707914033468182, 3);
  sqcRZGate(q, -2.397595955106061, 3);
  sqcRYGate(q, 1.5708165149379962, 4);
  sqcRZGate(q, 2.4842092849967075, 4);
  sqcRYGate(q, -4.261539059413621e-07, 5);
  sqcRZGate(q, -0.37494481988974737, 5);
  sqcRYGate(q, 1.5708720480156257, 6);
  sqcRZGate(q, 0.9134193642133215, 6);
  sqcRYGate(q, 0.00011987160705206888, 7);
  sqcRZGate(q, -2.5875649827858322, 7);

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
