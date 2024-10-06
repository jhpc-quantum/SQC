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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -1.5708081893664676, 0);
  sqcRZGate(q, 1.6169027274426995, 0);
  sqcRYGate(q, -1.5707969280585194, 1);
  sqcRZGate(q, -3.1415901060728606, 1);
  sqcRYGate(q, -1.570792843091114, 2);
  sqcRZGate(q, 1.5708010508071533, 2);
  sqcRYGate(q, -2.06475688914201, 3);
  sqcRZGate(q, -3.1415679374439915, 3);
  sqcRYGate(q, -1.57079612976527, 4);
  sqcRZGate(q, 1.5707150408599468, 4);
  sqcRYGate(q, -1.5707942961763353, 5);
  sqcRZGate(q, -0.5422510456201879, 5);
  sqcRYGate(q, -1.634143643030245, 6);
  sqcRZGate(q, 1.1636855283766057, 6);
  sqcRYGate(q, 4.114808603033284e-06, 7);
  sqcRZGate(q, -0.9255250210694499, 7);
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
  sqcRYGate(q, -1.3871727041410846, 0);
  sqcRZGate(q, -0.07141138698854643, 0);
  sqcRYGate(q, 1.8140617092096942, 1);
  sqcRZGate(q, -1.5712531218921153, 1);
  sqcRYGate(q, 1.570790651241734, 2);
  sqcRZGate(q, -1.3645321991066695, 2);
  sqcRYGate(q, 0.23328040302707465, 3);
  sqcRZGate(q, -2.431330611016288e-05, 3);
  sqcRYGate(q, 0.11897888935085085, 4);
  sqcRZGate(q, 1.570878061308096, 4);
  sqcRYGate(q, 3.1415833468783654, 5);
  sqcRZGate(q, 1.028545524353259, 5);
  sqcRYGate(q, 2.746452207039088e-06, 6);
  sqcRZGate(q, -2.7344818261270407, 6);
  sqcRYGate(q, 2.6938507773804776, 7);
  sqcRZGate(q, -1.5708195196206498, 7);
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
  sqcRYGate(q, -3.141293891640638, 0);
  sqcRZGate(q, 1.7469300588108023, 0);
  sqcRYGate(q, 1.570884370656959, 1);
  sqcRZGate(q, 3.1413723040767434, 1);
  sqcRYGate(q, 1.5707933412537938, 2);
  sqcRZGate(q, 1.719064174465542, 2);
  sqcRYGate(q, 1.570796221302497, 3);
  sqcRZGate(q, 0.17244565125379377, 3);
  sqcRYGate(q, -1.5707964719861245, 4);
  sqcRZGate(q, 1.5708068296945512, 4);
  sqcRYGate(q, 1.5708046534592217, 5);
  sqcRZGate(q, -3.141592581226466, 5);
  sqcRYGate(q, -1.570813467766536, 6);
  sqcRZGate(q, 1.4007690591349824, 6);
  sqcRYGate(q, 1.5707986267723975, 7);
  sqcRZGate(q, 1.570793171897856, 7);
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
  sqcRYGate(q, 3.031842000401045, 0);
  sqcRZGate(q, -3.141561672772751, 0);
  sqcRYGate(q, -0.04763416692688749, 1);
  sqcRZGate(q, -1.570656715097419, 1);
  sqcRYGate(q, -3.213081516406646e-07, 2);
  sqcRZGate(q, -1.7190544778555668, 2);
  sqcRYGate(q, 2.439676069165841e-06, 3);
  sqcRZGate(q, 0.9759011767249958, 3);
  sqcRYGate(q, -1.5585703570476672, 4);
  sqcRZGate(q, 3.1415877461595216, 4);
  sqcRYGate(q, -1.570793822531983, 5);
  sqcRZGate(q, 2.1506735242491484, 5);
  sqcRYGate(q, -1.5707905267478068, 6);
  sqcRZGate(q, 3.0014364820051194, 6);
  sqcRYGate(q, 1.570792648039962, 7);
  sqcRZGate(q, -0.07790244635255922, 7);
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
  sqcRYGate(q, -1.5708541425120481, 0);
  sqcRZGate(q, -0.3387270310107544, 0);
  sqcRYGate(q, -1.5712436501976565, 1);
  sqcRZGate(q, -2.644857505970382, 1);
  sqcRYGate(q, 1.5707957578510463, 2);
  sqcRZGate(q, 1.2317847583766444, 2);
  sqcRYGate(q, 7.222397524486723e-08, 3);
  sqcRZGate(q, -0.6514888439167941, 3);
  sqcRYGate(q, 1.5707975818601252, 4);
  sqcRZGate(q, 1.2317802863193759, 4);
  sqcRYGate(q, 3.1415915347659, 5);
  sqcRZGate(q, 2.647491709041303, 5);
  sqcRYGate(q, 2.623047628880215e-06, 6);
  sqcRZGate(q, -0.19885823185609958, 6);
  sqcRYGate(q, -3.141591292191314, 7);
  sqcRZGate(q, -2.7226699771707934, 7);

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
