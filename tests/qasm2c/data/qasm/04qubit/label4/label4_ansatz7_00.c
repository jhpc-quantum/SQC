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

  sqcRYGate(q, 1.7987910483857235, 0);
  sqcRYGate(q, -1.1578428307519324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3654852671042126, 0);
  sqcRYGate(q, 0.009441564271376102, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7714136999190884, 0);
  sqcRYGate(q, 1.5674822802879673, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7483659401431275, 0);
  sqcRYGate(q, 2.271777813746879, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9949661968001275, 0);
  sqcRYGate(q, 0.8606975957302839, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.48713510623926837, 0);
  sqcRYGate(q, 1.3501097508752933, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7299744756042258, 1);
  sqcRYGate(q, 2.0917733814040496, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3363517593538705, 1);
  sqcRYGate(q, 0.8685874643070122, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.676130833796488, 1);
  sqcRYGate(q, -2.5326724694547864, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.337835462733162, 1);
  sqcRYGate(q, 0.5997709865253897, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.684692210345302, 2);
  sqcRYGate(q, -0.4106180475769661, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.599689912702308, 2);
  sqcRYGate(q, 1.4171460000749612, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5489470219769057, 0);
  sqcRYGate(q, 1.8779305553276782, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6621831625438084, 0);
  sqcRYGate(q, 1.4743112515473893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3891929585915745, 0);
  sqcRYGate(q, 0.809526358336365, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.804690695330248, 0);
  sqcRYGate(q, 1.2085512281719313, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2827106703292896, 0);
  sqcRYGate(q, -1.7124075817077742, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.0543679332350382, 0);
  sqcRYGate(q, 1.4477368384230758, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6460784014947788, 1);
  sqcRYGate(q, 2.5544887482905247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1538026428244623, 1);
  sqcRYGate(q, 0.49926474447945024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.806316309629179, 1);
  sqcRYGate(q, -0.882997529873134, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8519623654541669, 1);
  sqcRYGate(q, -1.0720722147609791, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7451766468207364, 2);
  sqcRYGate(q, -2.5379849753349517, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1845444237604177, 2);
  sqcRYGate(q, 2.714231260496165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.574503374653155, 0);
  sqcRYGate(q, 0.022473021073167933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.248443347332761, 0);
  sqcRYGate(q, 2.7799909606292275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5492357133300825, 0);
  sqcRYGate(q, 2.0220934559033834, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2326098139970734, 0);
  sqcRYGate(q, 3.080406531362962, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.117186190045446, 0);
  sqcRYGate(q, -0.8346827192004354, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6934376240105027, 0);
  sqcRYGate(q, 1.0159938458212388, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.049202763821407, 1);
  sqcRYGate(q, -1.1220642083896193, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9098661835879511, 1);
  sqcRYGate(q, 2.684001469088563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4933569399852553, 1);
  sqcRYGate(q, -0.9378430907794878, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4991145452720396, 1);
  sqcRYGate(q, -2.5055092313326797, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2559974357666004, 2);
  sqcRYGate(q, 2.100441552589248, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.27236832451301485, 2);
  sqcRYGate(q, 2.637575981143277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1449065518016743, 0);
  sqcRYGate(q, -2.991890029063801, 1);
  sqcRYGate(q, -0.8554019510790881, 2);
  sqcRYGate(q, 0.433547384907472, 3);

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
