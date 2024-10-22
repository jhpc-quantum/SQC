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

  sqcRYGate(q, 0.940730297462199, 0);
  sqcRZGate(q, -0.20616549834940479, 0);
  sqcRYGate(q, -2.2426158002594825, 1);
  sqcRZGate(q, -2.9245622664607844, 1);
  sqcRYGate(q, -0.622613232894369, 2);
  sqcRZGate(q, 1.0292239983593572, 2);
  sqcRYGate(q, -0.529373657956686, 3);
  sqcRZGate(q, -1.5282468007957766, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.09780506530860608, 0);
  sqcRZGate(q, -0.06477398369592537, 0);
  sqcRYGate(q, 0.056039485692004266, 1);
  sqcRZGate(q, 0.5696370216738705, 1);
  sqcRYGate(q, 2.0999275108226163, 2);
  sqcRZGate(q, 1.6626515784268219, 2);
  sqcRYGate(q, 0.18194527402564914, 3);
  sqcRZGate(q, -1.5569393924178403, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.12863354917070546, 0);
  sqcRZGate(q, 2.3810866085689435, 0);
  sqcRYGate(q, 0.8786506733781665, 1);
  sqcRZGate(q, 3.0646524343708275, 1);
  sqcRYGate(q, -2.421190101306812, 2);
  sqcRZGate(q, -0.9448971732116512, 2);
  sqcRYGate(q, 2.1440677635936165, 3);
  sqcRZGate(q, -0.1653204292172405, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2728550105719465, 0);
  sqcRZGate(q, -1.2223073437680254, 0);
  sqcRYGate(q, 3.0964464071238713, 1);
  sqcRZGate(q, 1.51241615315409, 1);
  sqcRYGate(q, 1.9264131440995136, 2);
  sqcRZGate(q, -0.7619902181286209, 2);
  sqcRYGate(q, 2.536406917888813, 3);
  sqcRZGate(q, 0.43576788339164896, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.080549396140315, 0);
  sqcRZGate(q, -1.0472751582653133, 0);
  sqcRYGate(q, -0.5109801009325166, 1);
  sqcRZGate(q, -2.571987579948051, 1);
  sqcRYGate(q, -1.7377919501840777, 2);
  sqcRZGate(q, -1.1352943993473323, 2);
  sqcRYGate(q, -0.7649417847369981, 3);
  sqcRZGate(q, 0.20636327754818382, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.8945023480442154, 0);
  sqcRZGate(q, 2.706781142944379, 0);
  sqcRYGate(q, 2.0420377678147466, 1);
  sqcRZGate(q, -2.0433684994760895, 1);
  sqcRYGate(q, 2.1790548331821116, 2);
  sqcRZGate(q, -2.4799572345379106, 2);
  sqcRYGate(q, -2.0693040827181193, 3);
  sqcRZGate(q, 1.1251553445018814, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2908481244415377, 0);
  sqcRZGate(q, 1.7233222812542501, 0);
  sqcRYGate(q, -1.4417807740478026, 1);
  sqcRZGate(q, -2.2997702067686427, 1);
  sqcRYGate(q, 2.7197805972420643, 2);
  sqcRZGate(q, 1.230459898130018, 2);
  sqcRYGate(q, 0.7909778119437008, 3);
  sqcRZGate(q, 2.674844667806335, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1318715742371213, 0);
  sqcRZGate(q, -2.2817250050143576, 0);
  sqcRYGate(q, -0.3563830423710639, 1);
  sqcRZGate(q, -1.0219523477358088, 1);
  sqcRYGate(q, -2.6710639363473545, 2);
  sqcRZGate(q, -1.2324030269843025, 2);
  sqcRYGate(q, 2.601840760948765, 3);
  sqcRZGate(q, -0.6884384264513352, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5697676973122091, 0);
  sqcRZGate(q, -3.0259560495748037, 0);
  sqcRYGate(q, -2.695397169431912, 1);
  sqcRZGate(q, -1.9650228337800497, 1);
  sqcRYGate(q, -0.6550182069764796, 2);
  sqcRZGate(q, 2.2456088021856564, 2);
  sqcRYGate(q, 0.9765055709658205, 3);
  sqcRZGate(q, 2.644690833990978, 3);

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
