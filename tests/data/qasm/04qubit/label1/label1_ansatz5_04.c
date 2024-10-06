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

  sqcRYGate(q, 2.0314369731884474, 0);
  sqcRYGate(q, 2.050415485417734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9940739621529042, 0);
  sqcRYGate(q, 2.5265494786845792, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9004465713155296, 2);
  sqcRYGate(q, 1.653557095472663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8495654606438947, 2);
  sqcRYGate(q, -1.5854626642612546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2511200235641327, 1);
  sqcRYGate(q, 0.31674496141784303, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6594341082776203, 1);
  sqcRYGate(q, 1.6390066965260748, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3358328420008219, 0);
  sqcRYGate(q, -2.783264417178196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1386861306677285, 0);
  sqcRYGate(q, 0.8929704923138716, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.34384556187027826, 2);
  sqcRYGate(q, -1.9703259488755291, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.27308933979497785, 2);
  sqcRYGate(q, 0.08634630677567263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.456443377801798, 1);
  sqcRYGate(q, -1.435898805888985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6904147977555946, 1);
  sqcRYGate(q, 2.038136058300962, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2631993341602126, 0);
  sqcRYGate(q, 3.0938625941932423, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3015368357237793, 0);
  sqcRYGate(q, 0.5791141376964856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.358023227774098, 2);
  sqcRYGate(q, -2.354401900946067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7961600186953537, 2);
  sqcRYGate(q, -0.22498618236352833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6403668083451932, 1);
  sqcRYGate(q, 1.4578257718580314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.10763753885879, 1);
  sqcRYGate(q, 1.8334451445495008, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3445213636805038, 0);
  sqcRYGate(q, 1.7811484740182433, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4178250641179713, 0);
  sqcRYGate(q, 2.282564410952428, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0202238467112505, 2);
  sqcRYGate(q, -0.9453238053443339, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.002929456608582, 2);
  sqcRYGate(q, -1.1909057432222356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7949407174496974, 1);
  sqcRYGate(q, 2.884719710912234, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.321424905189505, 1);
  sqcRYGate(q, 2.844463477855364, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1761592220637231, 0);
  sqcRYGate(q, -1.5358880700113975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4590611951652732, 0);
  sqcRYGate(q, 0.2690740971635206, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1846892935330136, 2);
  sqcRYGate(q, 2.114838978181307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5017623985132875, 2);
  sqcRYGate(q, -0.6920334111306556, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4165875432672353, 1);
  sqcRYGate(q, 2.4576936280312003, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3311577849805927, 1);
  sqcRYGate(q, 1.7155329382675957, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1603397645700015, 0);
  sqcRYGate(q, -1.1196799550360779, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9922547805386874, 0);
  sqcRYGate(q, -0.8549035310919192, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8208900085546428, 2);
  sqcRYGate(q, 0.6602644392729804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3823993227228137, 2);
  sqcRYGate(q, 2.306856852053987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.696140325490329, 1);
  sqcRYGate(q, -1.8729420198299056, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.155768727911113, 1);
  sqcRYGate(q, 3.0481048231511454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.97279774576031, 0);
  sqcRYGate(q, -2.421060321392739, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8538989657731688, 0);
  sqcRYGate(q, 0.8071278083630924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1215210170364144, 2);
  sqcRYGate(q, -1.9993206744074976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2386032906625555, 2);
  sqcRYGate(q, 0.8191859446594162, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9432735753793775, 1);
  sqcRYGate(q, 2.0501105358642184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4380987448353912, 1);
  sqcRYGate(q, 1.5374479861219603, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7628372010975671, 0);
  sqcRYGate(q, 0.35867603907931306, 1);
  sqcRYGate(q, -1.1469779040899535, 2);
  sqcRYGate(q, -2.439936637885997, 3);

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
