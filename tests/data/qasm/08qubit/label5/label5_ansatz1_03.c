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

  sqcRYGate(q, -3.0037876994893487, 0);
  sqcRZGate(q, 0.23377277400543875, 0);
  sqcRYGate(q, 3.140901612586635, 1);
  sqcRZGate(q, 1.34456084011458, 1);
  sqcRYGate(q, 0.06377765998052531, 2);
  sqcRZGate(q, 1.2809143199464779, 2);
  sqcRYGate(q, -1.5702675991557573, 3);
  sqcRZGate(q, -3.1415803167639136, 3);
  sqcRYGate(q, 3.0735505000472263, 4);
  sqcRZGate(q, -3.0496796382394162, 4);
  sqcRYGate(q, 1.5072780092811033, 5);
  sqcRZGate(q, -0.40431634754496837, 5);
  sqcRYGate(q, -1.5717034790277726, 6);
  sqcRZGate(q, -0.06656219019335678, 6);
  sqcRYGate(q, -2.711359606568215, 7);
  sqcRZGate(q, 0.11260315753950234, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4298517726311935, 0);
  sqcRZGate(q, 3.104538415084916, 0);
  sqcRYGate(q, 1.5740366226958784, 1);
  sqcRZGate(q, 3.1123359776570014, 1);
  sqcRYGate(q, 0.00018226004069239323, 2);
  sqcRZGate(q, -2.8401732676761346, 2);
  sqcRYGate(q, -1.5713211957879412, 3);
  sqcRZGate(q, -3.1301362622681084, 3);
  sqcRYGate(q, -1.5707947019702333, 4);
  sqcRZGate(q, -1.5697744111857432, 4);
  sqcRYGate(q, -1.5760666652129576, 5);
  sqcRZGate(q, 0.024388621245164718, 5);
  sqcRYGate(q, -1.716447647022334, 6);
  sqcRZGate(q, 2.838968893445109, 6);
  sqcRYGate(q, 1.452118165108875, 7);
  sqcRZGate(q, -3.029158756989025, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7477449719481268, 0);
  sqcRZGate(q, 3.1133211598206874, 0);
  sqcRYGate(q, 2.7059324758508407, 1);
  sqcRZGate(q, 1.570107107265513, 1);
  sqcRYGate(q, 1.570775262277711, 2);
  sqcRZGate(q, -1.5703608744279447, 2);
  sqcRYGate(q, 1.566512639474783, 3);
  sqcRZGate(q, 1.5705320586474087, 3);
  sqcRYGate(q, -1.5699637053025726, 4);
  sqcRZGate(q, -3.107409938752722, 4);
  sqcRYGate(q, 3.141424727516011, 5);
  sqcRZGate(q, 1.2805060071236147, 5);
  sqcRYGate(q, -0.7560694538199264, 6);
  sqcRZGate(q, -3.138113298282421, 6);
  sqcRYGate(q, -1.76901660681025, 7);
  sqcRZGate(q, -1.831354433344437, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5786629389383524, 0);
  sqcRZGate(q, 3.1414953343923986, 0);
  sqcRYGate(q, -1.5706925236791351, 1);
  sqcRZGate(q, 1.570796173323493, 1);
  sqcRYGate(q, 1.5712660745250135, 2);
  sqcRZGate(q, 0.65435805706533, 2);
  sqcRYGate(q, -0.06437499265534274, 3);
  sqcRZGate(q, -1.2400052658672838, 3);
  sqcRYGate(q, 3.141045949645376, 4);
  sqcRZGate(q, 0.034341041736198, 4);
  sqcRYGate(q, -0.0009639712814957235, 5);
  sqcRZGate(q, -2.1010022947853493, 5);
  sqcRYGate(q, -1.9529154407327352, 6);
  sqcRZGate(q, 0.028032427700519946, 6);
  sqcRYGate(q, 2.769998549486626, 7);
  sqcRZGate(q, 2.960967402102233, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.571220035653073, 0);
  sqcRZGate(q, -3.141575456725688, 0);
  sqcRYGate(q, 1.5705639938756761, 1);
  sqcRZGate(q, 2.981822715973634, 1);
  sqcRYGate(q, -1.2048906094204224, 2);
  sqcRZGate(q, 0.8097431122171024, 2);
  sqcRYGate(q, 1.529752261835217, 3);
  sqcRZGate(q, 2.5670323173387106, 3);
  sqcRYGate(q, 1.5716056294120804, 4);
  sqcRZGate(q, 0.8769672000847439, 4);
  sqcRYGate(q, 1.5708462101506588, 5);
  sqcRZGate(q, -1.5708475348032347, 5);
  sqcRYGate(q, -2.8022484106018064, 6);
  sqcRZGate(q, -2.764604351093473, 6);
  sqcRYGate(q, -0.2599672929341743, 7);
  sqcRZGate(q, 2.3450095035428564, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5700818490045636, 0);
  sqcRZGate(q, 1.121964513567493, 0);
  sqcRYGate(q, -0.00041389945799428954, 1);
  sqcRZGate(q, 1.3561397534245225, 1);
  sqcRYGate(q, 0.0003931139114390781, 2);
  sqcRZGate(q, 1.1972707135499931, 2);
  sqcRYGate(q, 2.959145695591303e-05, 3);
  sqcRZGate(q, 2.2646482734473583, 3);
  sqcRYGate(q, -0.0003587691887926148, 4);
  sqcRZGate(q, 2.2641109775514523, 4);
  sqcRYGate(q, -1.570669344203833, 5);
  sqcRZGate(q, 1.5737957244688223, 5);
  sqcRYGate(q, 3.1408050949740023, 6);
  sqcRZGate(q, -1.5949001704269579, 6);
  sqcRYGate(q, 1.4672351762483256, 7);
  sqcRZGate(q, 1.9285505011640531, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.141587839488604, 0);
  sqcRZGate(q, 2.654078979377011, 0);
  sqcRYGate(q, 4.901966196796715e-05, 1);
  sqcRZGate(q, 1.192045347239063, 1);
  sqcRYGate(q, -2.4047653057753897, 2);
  sqcRZGate(q, 2.0940617100032504, 2);
  sqcRYGate(q, -2.808743295210145, 3);
  sqcRZGate(q, -0.6268345923175582, 3);
  sqcRYGate(q, -1.5709388653286667, 4);
  sqcRZGate(q, 3.102945891967817, 4);
  sqcRYGate(q, 1.5696971787145118, 5);
  sqcRZGate(q, -3.0030641097472275, 5);
  sqcRYGate(q, -4.9308730432073844e-08, 6);
  sqcRZGate(q, -1.3594291034463621, 6);
  sqcRYGate(q, -1.5524644870604936, 7);
  sqcRZGate(q, 2.1054504361280846, 7);

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
