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

  sqcRYGate(q, 2.792850533429026, 0);
  sqcRYGate(q, -0.8337146768558208, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4816618326604276, 0);
  sqcRYGate(q, 2.667398784645825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1462128195366237, 1);
  sqcRYGate(q, 2.3264425270801676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1011648652023244, 1);
  sqcRYGate(q, 0.3585837007994055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3785415194384232, 2);
  sqcRYGate(q, -2.072710674868368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6379453871188436, 2);
  sqcRYGate(q, -1.1468681666205842, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4866221238479143, 0);
  sqcRYGate(q, 0.26163170815050313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.327442023831523, 0);
  sqcRYGate(q, 0.4193730696020374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5679978963398775, 1);
  sqcRYGate(q, -1.8759194770671581, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.11902953694240104, 1);
  sqcRYGate(q, 0.42867317276123174, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9161534280463135, 2);
  sqcRYGate(q, 1.7858412661959158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2877284571230647, 2);
  sqcRYGate(q, -2.239084065646742, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8872616859121878, 0);
  sqcRYGate(q, -1.8081815006842117, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.241870635385224, 0);
  sqcRYGate(q, 1.7916343906851389, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7147467029157313, 1);
  sqcRYGate(q, 2.785149989750021, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.183978937517208, 1);
  sqcRYGate(q, -2.787502181063211, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2968138796593083, 2);
  sqcRYGate(q, -2.36985981786923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7007883064222682, 2);
  sqcRYGate(q, -1.5312978268089292, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.478333494770226, 0);
  sqcRYGate(q, 1.5639278097084004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.041448128035772136, 0);
  sqcRYGate(q, -1.9853989144480473, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7836318204253783, 1);
  sqcRYGate(q, -2.6007401887854913, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.882510906917871, 1);
  sqcRYGate(q, -1.68157007397282, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5035688552333077, 2);
  sqcRYGate(q, 1.785711872247938, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.137220864855747, 2);
  sqcRYGate(q, -0.2942583019642373, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8108581113849316, 0);
  sqcRYGate(q, -0.1373083064626234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8645424914087112, 0);
  sqcRYGate(q, 0.8245784932704799, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7273783923430839, 1);
  sqcRYGate(q, 0.8172262903803095, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.642052982920447, 1);
  sqcRYGate(q, 1.0719225872600653, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.32912167516484914, 2);
  sqcRYGate(q, -1.7569144674020583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.983620995517733, 2);
  sqcRYGate(q, -2.330184289317337, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4874440379007177, 0);
  sqcRYGate(q, -2.654111214476759, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.940781201105139, 0);
  sqcRYGate(q, -1.2366624302309253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3045478617144717, 1);
  sqcRYGate(q, 0.8429470709462956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6451236281189514, 1);
  sqcRYGate(q, 0.3777737587545201, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.021823537446562086, 2);
  sqcRYGate(q, -2.786118780055825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.113270972800476, 2);
  sqcRYGate(q, -2.6192249076303455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5619326001453446, 0);
  sqcRYGate(q, -1.8286605481532838, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7146010292825595, 0);
  sqcRYGate(q, -0.029507896994950513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10562988337337045, 1);
  sqcRYGate(q, 0.34788954862687455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9964496960035989, 1);
  sqcRYGate(q, 2.2585392440227796, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2199008137357206, 2);
  sqcRYGate(q, -1.4798710182907708, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6787819117021385, 2);
  sqcRYGate(q, 0.08125669914364231, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.606412304504893, 0);
  sqcRYGate(q, 2.3610077964410734, 1);
  sqcRYGate(q, 0.6942299328172424, 2);
  sqcRYGate(q, -1.7843009767551772, 3);

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
