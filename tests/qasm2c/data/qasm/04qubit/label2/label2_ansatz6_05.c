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

  sqcRYGate(q, 0.7539671798198029, 0);
  sqcRYGate(q, -1.6428318092666065, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6478840176905091, 0);
  sqcRYGate(q, 1.5080709090849682, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0818882129540355, 1);
  sqcRYGate(q, -0.22531691007878152, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04650646747064524, 1);
  sqcRYGate(q, 3.116726781678815, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4509798968630107, 2);
  sqcRYGate(q, -2.0277729992898426, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0815898996274256, 2);
  sqcRYGate(q, 2.6896792761652577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6577008751296087, 0);
  sqcRYGate(q, 2.1806799699507824, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4043579746881916, 0);
  sqcRYGate(q, -1.3450289802948356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.075656280004665, 1);
  sqcRYGate(q, -0.9526463591369403, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6713517491163947, 1);
  sqcRYGate(q, 1.8490363709789348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7521173675963753, 2);
  sqcRYGate(q, -1.2401232790961874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2072480908074876, 2);
  sqcRYGate(q, -2.9213166189968556, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0621862694469204, 0);
  sqcRYGate(q, 1.042367570313148, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.517403496977207, 0);
  sqcRYGate(q, 1.4169744226884988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3147212787298383, 1);
  sqcRYGate(q, -1.0758024583611796, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.34106770567219347, 1);
  sqcRYGate(q, -2.7399107328318704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6423244880793115, 2);
  sqcRYGate(q, 1.7227536307380884, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4168453849792302, 2);
  sqcRYGate(q, -2.1363647623472044, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8953515634106849, 0);
  sqcRYGate(q, -2.99348442302713, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1421074806291216, 0);
  sqcRYGate(q, -2.526191856986802, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.171193395489441, 1);
  sqcRYGate(q, 2.405328604844299, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.968433382688896, 1);
  sqcRYGate(q, 0.6063813553829615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2749186535951342, 2);
  sqcRYGate(q, -2.7269180481288404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6617337504373637, 2);
  sqcRYGate(q, 0.04612627023995142, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.985014971280884, 0);
  sqcRYGate(q, 0.30721314003485123, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6154327511297555, 0);
  sqcRYGate(q, 0.9346065276678983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5047611762200024, 1);
  sqcRYGate(q, 2.6009296349957802, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.219179096636428, 1);
  sqcRYGate(q, -0.3281918326043618, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.268651786007205, 2);
  sqcRYGate(q, 1.6747543416379214, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.599314973999807, 2);
  sqcRYGate(q, -2.3993577490725504, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.669857454185243, 0);
  sqcRYGate(q, -1.973976858110503, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4459692426245714, 0);
  sqcRYGate(q, 0.4620329027834425, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.62325456153917, 1);
  sqcRYGate(q, -2.8163398951341687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.765733746366841, 1);
  sqcRYGate(q, -0.753154671560993, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6015307148445386, 2);
  sqcRYGate(q, -2.245933544229092, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3881378770667761, 2);
  sqcRYGate(q, -1.8150415133811855, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.05864749457451, 0);
  sqcRYGate(q, 0.9091454548317648, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9106154002711397, 0);
  sqcRYGate(q, 2.0384791891545886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.153689027701975, 1);
  sqcRYGate(q, 2.6842419782176696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1294066421720426, 1);
  sqcRYGate(q, 0.8095418167368953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3253987742833022, 2);
  sqcRYGate(q, 1.9186446195577405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.876586156104863, 2);
  sqcRYGate(q, -1.641243325611596, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9587314786951745, 0);
  sqcRYGate(q, 2.914370255482299, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.839730300043174, 0);
  sqcRYGate(q, 1.2541702287944805, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3727675384256814, 1);
  sqcRYGate(q, 0.08103782616814659, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8788878908317301, 1);
  sqcRYGate(q, -0.003921366351683359, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.39834011869029506, 2);
  sqcRYGate(q, 1.1960966538335054, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7141004447753152, 2);
  sqcRYGate(q, 2.0902633903671237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0900706760589736, 0);
  sqcRYGate(q, 0.8753749282941445, 1);
  sqcRYGate(q, 0.1524762525614045, 2);
  sqcRYGate(q, -0.10414167817670056, 3);

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
