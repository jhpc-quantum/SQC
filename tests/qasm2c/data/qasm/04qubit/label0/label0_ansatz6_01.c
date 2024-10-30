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

  sqcRYGate(q, 2.496309532819828, 0);
  sqcRYGate(q, 1.9416407017044994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3442349948760768, 0);
  sqcRYGate(q, 3.0826400053635465, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0760573351992244, 1);
  sqcRYGate(q, -1.5740437778378968, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7811281123740335, 1);
  sqcRYGate(q, 0.9033838348640995, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6745970604761067, 2);
  sqcRYGate(q, 1.0840688961367595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4216473959899503, 2);
  sqcRYGate(q, 1.5296805817927952, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.84492344867372, 0);
  sqcRYGate(q, -2.7696998483007738, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0346781335836903, 0);
  sqcRYGate(q, -1.1800817437071878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1878257607944347, 1);
  sqcRYGate(q, 2.560312813638443, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.113484419664408, 1);
  sqcRYGate(q, -0.8883679285179342, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.350632597044849, 2);
  sqcRYGate(q, 1.1548459124087804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.600147997869296, 2);
  sqcRYGate(q, -1.9030887401983436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9771830031073305, 0);
  sqcRYGate(q, 0.7870796093420589, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3568035811847636, 0);
  sqcRYGate(q, 1.1100162340438091, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4821662727949592, 1);
  sqcRYGate(q, -0.8914354409342033, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3723320116429156, 1);
  sqcRYGate(q, -2.451102594034455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.552682832801595, 2);
  sqcRYGate(q, -0.09821843527501171, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17282817067968148, 2);
  sqcRYGate(q, 2.3199922586953927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.678045250214827, 0);
  sqcRYGate(q, -1.0993495379205813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.24801415545165373, 0);
  sqcRYGate(q, -1.3443585611490327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17928009846138193, 1);
  sqcRYGate(q, -1.8684769229654403, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2214479110649528, 1);
  sqcRYGate(q, -2.3613132901092806, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3984802944572685, 2);
  sqcRYGate(q, 2.4235219304567317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5051707527352625, 2);
  sqcRYGate(q, 2.6678116498348783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9292179105045033, 0);
  sqcRYGate(q, -1.4645592743149551, 1);
  sqcRYGate(q, 1.945697043868625, 2);
  sqcRYGate(q, -1.6316533231599282, 3);

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
