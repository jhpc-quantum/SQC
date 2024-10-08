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

  sqcRYGate(q, 0.08649202952510482, 0);
  sqcRZGate(q, -3.1097463989748624, 0);
  sqcRYGate(q, -2.271342524687221, 1);
  sqcRZGate(q, -2.8570501812025118, 1);
  sqcRYGate(q, -3.141416895075856, 2);
  sqcRZGate(q, -1.389904571777743, 2);
  sqcRYGate(q, 4.796347174096383e-05, 3);
  sqcRZGate(q, 2.542220721084414, 3);
  sqcRYGate(q, -1.5708878530271173, 4);
  sqcRZGate(q, 2.163362057980352, 4);
  sqcRYGate(q, 1.4765972755512413, 5);
  sqcRZGate(q, -1.5707824699667485, 5);
  sqcRYGate(q, 1.5708007392443715, 6);
  sqcRZGate(q, -1.1114973271271351, 6);
  sqcRYGate(q, 1.5708025608068794, 7);
  sqcRZGate(q, -2.6661576197819414, 7);
  sqcRYGate(q, 3.1415583583311375, 8);
  sqcRZGate(q, -0.022295534690135455, 8);
  sqcRYGate(q, -1.1437438210956943, 9);
  sqcRZGate(q, -0.19775632413439315, 9);
  sqcRYGate(q, 2.959203944202275, 10);
  sqcRZGate(q, 2.479547967389106, 10);
  sqcRYGate(q, 1.5715749086235056, 11);
  sqcRZGate(q, -1.5701405524995498, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5801489935169202, 0);
  sqcRZGate(q, 1.322526459421046, 0);
  sqcRYGate(q, 0.09244316288895525, 1);
  sqcRZGate(q, -1.5299615508425188, 1);
  sqcRYGate(q, 1.570892266244214, 2);
  sqcRZGate(q, 1.5704515911771049, 2);
  sqcRYGate(q, 1.999028998181523, 3);
  sqcRZGate(q, 1.5231438142714655, 3);
  sqcRYGate(q, -3.1415776006046476, 4);
  sqcRZGate(q, -0.9781536552356309, 4);
  sqcRYGate(q, 1.5707935157560327, 5);
  sqcRZGate(q, 1.570811972503925, 5);
  sqcRYGate(q, 1.4960421757536126, 6);
  sqcRZGate(q, 0.6987733001533547, 6);
  sqcRYGate(q, 2.4108342113472, 7);
  sqcRZGate(q, 1.5585483911019762, 7);
  sqcRYGate(q, -1.570793860707897, 8);
  sqcRZGate(q, 1.5707884953909845, 8);
  sqcRYGate(q, 3.134559503325538, 9);
  sqcRZGate(q, 2.945953425951436, 9);
  sqcRYGate(q, -1.570815345821932, 10);
  sqcRZGate(q, 1.5232372074947644, 10);
  sqcRYGate(q, 2.480968108268441, 11);
  sqcRZGate(q, -3.1232043822460054, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.3161129148123524, 0);
  sqcRZGate(q, -1.3082740272048925, 0);
  sqcRYGate(q, 1.570795216013483, 1);
  sqcRZGate(q, 1.5087427599541292, 1);
  sqcRYGate(q, 1.5707873789488194, 2);
  sqcRZGate(q, 1.5707976468958158, 2);
  sqcRYGate(q, -0.0007950242461864931, 3);
  sqcRZGate(q, 1.6184540386996098, 3);
  sqcRYGate(q, -2.2212425263241204, 4);
  sqcRZGate(q, 1.5707932169927092, 4);
  sqcRYGate(q, -1.5707552483830094, 5);
  sqcRZGate(q, -1.7007195264911923e-07, 5);
  sqcRYGate(q, -3.1415859112620472, 6);
  sqcRZGate(q, 0.33706929796593865, 6);
  sqcRYGate(q, 3.1415925453295093, 7);
  sqcRZGate(q, 1.0601545018162961, 7);
  sqcRYGate(q, 0.8407086707433011, 8);
  sqcRZGate(q, 1.5708347801988962, 8);
  sqcRYGate(q, 1.5707999554798218, 9);
  sqcRZGate(q, 1.6149116757704354, 9);
  sqcRYGate(q, -0.972481545365106, 10);
  sqcRZGate(q, -1.3508252747928235, 10);
  sqcRYGate(q, -3.0651526414912125, 11);
  sqcRZGate(q, 1.5686019019574928, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5706103638332243, 0);
  sqcRZGate(q, 0.35040982211682165, 0);
  sqcRYGate(q, -1.4846357833964534, 1);
  sqcRZGate(q, -1.6041845390450429, 1);
  sqcRYGate(q, 1.570800285540823, 2);
  sqcRZGate(q, 1.9275239737610885, 2);
  sqcRYGate(q, -1.5707841624820227, 3);
  sqcRZGate(q, -0.0077372210797168745, 3);
  sqcRYGate(q, -1.5707929921234716, 4);
  sqcRZGate(q, 0.22904755212209033, 4);
  sqcRYGate(q, -1.570795527319489, 5);
  sqcRZGate(q, -1.3258560082738622, 5);
  sqcRYGate(q, -3.141585518938734, 6);
  sqcRZGate(q, -0.13270404617688758, 6);
  sqcRYGate(q, -1.5760761177157656, 7);
  sqcRZGate(q, 1.3361281755832108, 7);
  sqcRYGate(q, 1.5707829778974407, 8);
  sqcRZGate(q, -2.6707941931332, 8);
  sqcRYGate(q, -1.6187347199291469, 9);
  sqcRZGate(q, 0.021638253042254973, 9);
  sqcRYGate(q, 1.5707835130920942, 10);
  sqcRZGate(q, 2.0431981134446993, 10);
  sqcRYGate(q, 3.1397767676874935, 11);
  sqcRZGate(q, 1.5982709512181277, 11);

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
