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

  sqcRYGate(q, -2.0648873912130545, 0);
  sqcRYGate(q, -1.6807733812172856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5756151288279556, 0);
  sqcRYGate(q, -0.4124138112212999, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1584712860903714, 1);
  sqcRYGate(q, 2.9789269270962424, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6237188049010403, 1);
  sqcRYGate(q, 0.3472409194640501, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.525059009119095, 2);
  sqcRYGate(q, -1.8884395536594436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2845685591820093, 2);
  sqcRYGate(q, 1.4275319035702496, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0656930229365495, 3);
  sqcRYGate(q, -2.6033632823641684, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4496563302129327, 3);
  sqcRYGate(q, -0.8772380881496946, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2330408528497276, 4);
  sqcRYGate(q, -3.122217648272496, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3958277697119934, 4);
  sqcRYGate(q, -2.93246367574699, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.36084656351134115, 5);
  sqcRYGate(q, -0.9314366394766774, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4624344835934542, 5);
  sqcRYGate(q, -3.011765492926597, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9226630885799612, 6);
  sqcRYGate(q, 0.42894894373153125, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4568216124865367, 6);
  sqcRYGate(q, 0.1154754915770244, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3337569339174804, 0);
  sqcRYGate(q, 1.1310056231192005, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7363299407631265, 0);
  sqcRYGate(q, 1.2200126047583342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.489682057625072, 1);
  sqcRYGate(q, -1.105039694530278, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1299246653192956, 1);
  sqcRYGate(q, 2.048619450448421, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1899466247707409, 2);
  sqcRYGate(q, 1.1903281065111184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7200002756879487, 2);
  sqcRYGate(q, -0.7242970290505595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6106553305984654, 3);
  sqcRYGate(q, 2.8055658059630724, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.14733674204427682, 3);
  sqcRYGate(q, 0.8971791040923609, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2312293789171054, 4);
  sqcRYGate(q, 2.891327094581696, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8805333916840272, 4);
  sqcRYGate(q, -1.5945315054029332, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.041603810889903, 5);
  sqcRYGate(q, -2.8794201118028435, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7314318572107665, 5);
  sqcRYGate(q, -1.6889429353496024, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6064945998397366, 6);
  sqcRYGate(q, -1.8736392606235175, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2924334089761995, 6);
  sqcRYGate(q, -2.9548847211884137, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8105131685499423, 0);
  sqcRYGate(q, 1.8354566938298351, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8285414660502499, 0);
  sqcRYGate(q, -3.0909827574717026, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1278144484984216, 1);
  sqcRYGate(q, -1.2495615369794053, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1225436699996103, 1);
  sqcRYGate(q, 2.640500404052551, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2398342487586973, 2);
  sqcRYGate(q, -1.1398071758932153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1822969397525602, 2);
  sqcRYGate(q, 1.758251571648003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.791974042613242, 3);
  sqcRYGate(q, -0.039557995515302515, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6235300400232946, 3);
  sqcRYGate(q, -1.2430523782689464, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.565393193552853, 4);
  sqcRYGate(q, 3.1341834131348794, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6815436683131877, 4);
  sqcRYGate(q, 2.6559717286962443, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.00684254211063795, 5);
  sqcRYGate(q, 1.584052053660911, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5795871688283625, 5);
  sqcRYGate(q, 1.577308349605154, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.006264630128292586, 6);
  sqcRYGate(q, -0.0804903880937219, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5607249457868173, 6);
  sqcRYGate(q, -1.5672138939282274, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.235562504494667, 0);
  sqcRYGate(q, -0.4682329352957381, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8538900502242115, 0);
  sqcRYGate(q, 3.0998558078243845, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4403254378907369, 1);
  sqcRYGate(q, 0.29564286525982286, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5533256679923149, 1);
  sqcRYGate(q, -1.574298573867513, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.838586620766928, 2);
  sqcRYGate(q, 0.005371495895551435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5630398355672062, 2);
  sqcRYGate(q, -3.1410670798511395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.00020666166429245906, 3);
  sqcRYGate(q, 0.003012293709845115, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5710881366087124, 3);
  sqcRYGate(q, -1.5752459874456928, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.749784256847719, 4);
  sqcRYGate(q, -1.615507266442313, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5638964799488801, 4);
  sqcRYGate(q, 3.1197113893261545, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0018288355700655091, 5);
  sqcRYGate(q, -1.5737986280646288, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5704468291112013, 5);
  sqcRYGate(q, -1.57181760236828, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.035702457208156, 6);
  sqcRYGate(q, 2.0251148217031814, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1415468367610138, 6);
  sqcRYGate(q, -3.1413962631186925, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6222397213833553, 0);
  sqcRYGate(q, 3.0576708336963137, 1);
  sqcRYGate(q, -2.888513083973951, 2);
  sqcRYGate(q, 0.003242790644022177, 3);
  sqcRYGate(q, 1.1770034033460497, 4);
  sqcRYGate(q, 1.571934116145795, 5);
  sqcRYGate(q, -3.0371020209533413, 6);
  sqcRYGate(q, -2.6379785333160775, 7);

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
