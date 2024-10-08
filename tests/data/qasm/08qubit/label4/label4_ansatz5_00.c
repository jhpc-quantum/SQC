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

  sqcRYGate(q, 2.769869095758302, 0);
  sqcRYGate(q, 0.07907629039281971, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2373920966174632, 0);
  sqcRYGate(q, 1.1579360771872977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0597727110660442, 2);
  sqcRYGate(q, -2.676157801331705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4268842132256179, 2);
  sqcRYGate(q, 1.9970407707204334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6887380730669967, 4);
  sqcRYGate(q, -2.703681146641834, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8320638910651988, 4);
  sqcRYGate(q, 1.7450870358621522, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6930037725013636, 6);
  sqcRYGate(q, -3.140219298864659, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.673401448137973, 6);
  sqcRYGate(q, 2.9974599534028408, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.44161283596661993, 1);
  sqcRYGate(q, -1.7759253200286427, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6019473451027022, 1);
  sqcRYGate(q, 1.5416184690826729, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2400919126291415, 3);
  sqcRYGate(q, -0.7181833063085118, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.263528187198598, 3);
  sqcRYGate(q, 1.3012203037572583, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4862161099475542, 5);
  sqcRYGate(q, 2.7734730190435677, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5076981016149524, 5);
  sqcRYGate(q, -1.570804245874247, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.44592426888499, 0);
  sqcRYGate(q, -1.5707925727049536, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6196749804491306, 0);
  sqcRYGate(q, -1.4095144059633093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5708147067580887, 2);
  sqcRYGate(q, -3.141576313580328, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5707907743611365, 2);
  sqcRYGate(q, 1.5749457302594203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.570808374840984, 4);
  sqcRYGate(q, 4.800817462002275e-05, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.57080264973851, 4);
  sqcRYGate(q, 1.5708089429536392, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6418883377547426e-06, 6);
  sqcRYGate(q, -0.5153816804625917, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8417032683940426, 6);
  sqcRYGate(q, 1.5707489263022245, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.570808376723269, 1);
  sqcRYGate(q, 1.5707940119851012, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5708021902708371, 1);
  sqcRYGate(q, -1.5480299232375867, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.141582422894572, 3);
  sqcRYGate(q, 3.1415464450270125, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7106491045295535, 3);
  sqcRYGate(q, 1.570755706286647, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3812541950828212, 5);
  sqcRYGate(q, 0.0015368379887265328, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4188742590960883, 5);
  sqcRYGate(q, 3.141570326320527, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8807679212628622, 0);
  sqcRYGate(q, 3.1415709611160314, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5707475119307608, 0);
  sqcRYGate(q, 0.36513338145724195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1415825013803897, 2);
  sqcRYGate(q, 1.5707995787838511, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5708025548650673, 2);
  sqcRYGate(q, -1.5707995720724093, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5707993298046858, 4);
  sqcRYGate(q, 1.760338157660633, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.570802552820651, 4);
  sqcRYGate(q, 1.570806123788913, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.95280484070014, 6);
  sqcRYGate(q, -3.141592161763431, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5707685773288045, 6);
  sqcRYGate(q, -1.0745724888572282e-05, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.570795330906113, 1);
  sqcRYGate(q, -3.141577855113375, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5707961146416398, 1);
  sqcRYGate(q, -1.5707958061744867, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3841110286501346, 3);
  sqcRYGate(q, 1.4051374541671056, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.838356059659986e-06, 3);
  sqcRYGate(q, 3.1415905924364154, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6979388524811743, 5);
  sqcRYGate(q, -2.611883920288147, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 9.302659783827494e-06, 5);
  sqcRYGate(q, -3.1415729003951203, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.37532944722050576, 0);
  sqcRYGate(q, 1.570795203429439, 1);
  sqcRYGate(q, -3.14158867513121, 2);
  sqcRYGate(q, 0.7574845578243129, 3);
  sqcRYGate(q, -2.9759473610709812, 4);
  sqcRYGate(q, 0.44366712494229166, 5);
  sqcRYGate(q, -0.34115273530901646, 6);
  sqcRYGate(q, -1.5707974566582816, 7);

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
