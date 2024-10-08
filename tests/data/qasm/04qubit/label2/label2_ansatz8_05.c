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

  sqcRYGate(q, -2.004736489301466, 0);
  sqcRYGate(q, -0.7644413085235928, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9580038778024482, 0);
  sqcRYGate(q, -1.102801593986067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.834508233141548, 2);
  sqcRYGate(q, 1.2816310043605617, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.874235444966048, 2);
  sqcRYGate(q, -0.2038162090272033, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8281427157859276, 0);
  sqcRYGate(q, 1.9005826696725885, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8674228634678753, 0);
  sqcRYGate(q, 1.8317177135769072, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9759749638348507, 1);
  sqcRYGate(q, 0.9050876165256732, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.739150470165362, 1);
  sqcRYGate(q, -0.8534069772213595, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8378601452058794, 0);
  sqcRYGate(q, 0.6776281788562697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.420711345878561, 0);
  sqcRYGate(q, -0.33797515625138885, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.399655861643045, 2);
  sqcRYGate(q, 0.19526297754196698, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7798485851747583, 2);
  sqcRYGate(q, -2.6487732014226473, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.21963654640402816, 0);
  sqcRYGate(q, 1.5513404287408452, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.295596114893747, 0);
  sqcRYGate(q, -1.5054233386969476, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3240255744416745, 1);
  sqcRYGate(q, 2.3840095998997133, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5221992024891149, 1);
  sqcRYGate(q, 2.4139473873492556, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.28479339581570606, 0);
  sqcRYGate(q, 0.005787745313900139, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4402859426614745, 0);
  sqcRYGate(q, -1.4653880116063596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1646768485059709, 2);
  sqcRYGate(q, -2.194339055378089, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.549392478935828, 2);
  sqcRYGate(q, -0.21407096683051918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3274241880774754, 0);
  sqcRYGate(q, 1.1991111533099934, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.621991941373475, 0);
  sqcRYGate(q, -1.3369128275273405, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.271367980424055, 1);
  sqcRYGate(q, 1.3993981972438485, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4082074687692563, 1);
  sqcRYGate(q, 0.21683080091139556, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.07101441729416991, 0);
  sqcRYGate(q, -1.3828565698172914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3956829378671145, 0);
  sqcRYGate(q, -2.7009803718094414, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3021560470890632, 2);
  sqcRYGate(q, 0.09085297546742233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4570929312480008, 2);
  sqcRYGate(q, -2.1179754172514356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17530263075043617, 0);
  sqcRYGate(q, -0.9024581232401088, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4870763496150206, 0);
  sqcRYGate(q, -2.872852161819831, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0879052174338764, 1);
  sqcRYGate(q, -1.3933576805255838, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.427052399132663, 1);
  sqcRYGate(q, 0.6395953661931917, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.40705876587337464, 0);
  sqcRYGate(q, 1.9784541665676068, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7640265272021924, 0);
  sqcRYGate(q, -0.6450815988999167, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3684072985212845, 2);
  sqcRYGate(q, 0.7665257794107458, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1265498676404, 2);
  sqcRYGate(q, -1.1104674428663985, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9185127041115059, 0);
  sqcRYGate(q, -2.522697727736492, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.042689081525384, 0);
  sqcRYGate(q, -0.9644109282278102, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9524334902938953, 1);
  sqcRYGate(q, -0.657082752485684, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.037238234238592, 1);
  sqcRYGate(q, 1.262325727333319, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2658358598196449, 0);
  sqcRYGate(q, 0.8886407389467444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.138602259300493, 0);
  sqcRYGate(q, -1.4860016545538937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5602920887144187, 2);
  sqcRYGate(q, 0.8803492759279453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.711621849323289, 2);
  sqcRYGate(q, 0.04567833651064657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5323730094251056, 0);
  sqcRYGate(q, 2.1119370138640794, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0432893341717477, 0);
  sqcRYGate(q, -1.8615470561395897, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.065973224591816, 1);
  sqcRYGate(q, -1.4016447250793007, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3533251384041273, 1);
  sqcRYGate(q, -2.2007318361145263, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.06667662395636532, 0);
  sqcRYGate(q, 2.6112046402556133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7483058721953997, 0);
  sqcRYGate(q, -0.6562866237773939, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9931451072963777, 2);
  sqcRYGate(q, 2.911296862424897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08527344853883358, 2);
  sqcRYGate(q, -3.107265847216323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.782458843758461, 0);
  sqcRYGate(q, -1.5867489765764127, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.29321214253098343, 0);
  sqcRYGate(q, 1.852157495180965, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8074602066883262, 1);
  sqcRYGate(q, 2.7767746421560804, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1112446239627656, 1);
  sqcRYGate(q, 2.574898116274043, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0239789343844343, 0);
  sqcRYGate(q, 0.4210027978658575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.46825591938906325, 0);
  sqcRYGate(q, -2.756431397589941, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9667850641209802, 2);
  sqcRYGate(q, -0.4137507466928374, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5288079142686648, 2);
  sqcRYGate(q, 0.30771099446005945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4437490528285901, 0);
  sqcRYGate(q, -0.24125312733647597, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.631700250272453, 0);
  sqcRYGate(q, -1.143540755304853, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8640481447762056, 1);
  sqcRYGate(q, -0.44156794566653007, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5807502452271436, 1);
  sqcRYGate(q, 1.0363213256790935, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4814933724109816, 0);
  sqcRYGate(q, 2.3747900598784506, 1);
  sqcRYGate(q, 1.0094057246770625, 2);
  sqcRYGate(q, 2.6457188334148425, 3);

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
