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

  sqcRYGate(q, -2.0803098940798606, 0);
  sqcRZGate(q, 1.8635778738702133, 0);
  sqcRYGate(q, -2.485587972538351, 1);
  sqcRZGate(q, -2.0461574287721467, 1);
  sqcRYGate(q, 0.06101065824215724, 2);
  sqcRZGate(q, 1.2830712712398495, 2);
  sqcRYGate(q, -2.9736976578125582, 3);
  sqcRZGate(q, -2.525663948759578, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8090362093109633, 0);
  sqcRZGate(q, 1.1413441806354794, 0);
  sqcRYGate(q, 1.5307119183808169, 1);
  sqcRZGate(q, -1.1970958914793983, 1);
  sqcRYGate(q, -0.30017070540025337, 2);
  sqcRZGate(q, 2.859372863141866, 2);
  sqcRYGate(q, 2.9240190274955182, 3);
  sqcRZGate(q, 1.8843722575278976, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.321504462685127, 0);
  sqcRZGate(q, -1.2434367345130442, 0);
  sqcRYGate(q, -1.170701540266289, 1);
  sqcRZGate(q, -3.09894095323644, 1);
  sqcRYGate(q, 2.973535925852578, 2);
  sqcRZGate(q, -2.689019016669822, 2);
  sqcRYGate(q, -0.06207776078071614, 3);
  sqcRZGate(q, 1.9610246096777726, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.1644616405169792, 0);
  sqcRZGate(q, -2.512944595240633, 0);
  sqcRYGate(q, 2.5953855015888436, 1);
  sqcRZGate(q, -0.9870342424929133, 1);
  sqcRYGate(q, -0.25543687980721685, 2);
  sqcRZGate(q, 2.265408068254839, 2);
  sqcRYGate(q, 2.468906339723161, 3);
  sqcRZGate(q, -2.6907423263755, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.4465080751105477, 0);
  sqcRZGate(q, 0.09481948561986986, 0);
  sqcRYGate(q, -1.5113896767920674, 1);
  sqcRZGate(q, 1.8249591076155316, 1);
  sqcRYGate(q, -0.10418900257267971, 2);
  sqcRZGate(q, -0.4187470054118058, 2);
  sqcRYGate(q, 1.9203411900361704, 3);
  sqcRZGate(q, 1.7292977206316205, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.4000629207482316, 0);
  sqcRZGate(q, -0.26605992785518057, 0);
  sqcRYGate(q, 0.39732981639645004, 1);
  sqcRZGate(q, 1.2577235104068734, 1);
  sqcRYGate(q, -1.4664972191284829, 2);
  sqcRZGate(q, -0.7618549290063346, 2);
  sqcRYGate(q, -0.8451389097912827, 3);
  sqcRZGate(q, -1.1797917256547343, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.5032202240104494, 0);
  sqcRZGate(q, 3.102431675499625, 0);
  sqcRYGate(q, -2.9525977155762, 1);
  sqcRZGate(q, -0.6786618686733606, 1);
  sqcRYGate(q, -0.02073594689461793, 2);
  sqcRZGate(q, -3.107359802499636, 2);
  sqcRYGate(q, 0.760591457639862, 3);
  sqcRZGate(q, 2.6519997064540046, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.316242370729138, 0);
  sqcRZGate(q, 0.13196330998965577, 0);
  sqcRYGate(q, 1.6866025560374185, 1);
  sqcRZGate(q, 1.0784762706484907, 1);
  sqcRYGate(q, 1.4092624926861719, 2);
  sqcRZGate(q, 0.635332692294989, 2);
  sqcRYGate(q, -2.1833646819290466, 3);
  sqcRZGate(q, 1.6864443422839799, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.6933687261603503, 0);
  sqcRZGate(q, 2.6168298584861787, 0);
  sqcRYGate(q, -0.44556772776445897, 1);
  sqcRZGate(q, 0.0035076985537143552, 1);
  sqcRYGate(q, -3.0446258050410164, 2);
  sqcRZGate(q, -1.8431061908103583, 2);
  sqcRYGate(q, -1.1772797215178805, 3);
  sqcRZGate(q, 2.7546745833823043, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.2073432009892269, 0);
  sqcRZGate(q, -1.461622624323879, 0);
  sqcRYGate(q, -1.6872618622730586, 1);
  sqcRZGate(q, 1.3191515502135225, 1);
  sqcRYGate(q, -0.6492138501434335, 2);
  sqcRZGate(q, 1.3377167613406513, 2);
  sqcRYGate(q, 0.6734115759619393, 3);
  sqcRZGate(q, -1.2125138791503616, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.672856650835114, 0);
  sqcRZGate(q, 2.7121469138016137, 0);
  sqcRYGate(q, 0.6526139812104743, 1);
  sqcRZGate(q, -2.665945598086639, 1);
  sqcRYGate(q, 3.035687508673809, 2);
  sqcRZGate(q, 2.855707743489175, 2);
  sqcRYGate(q, 1.1982230779882501, 3);
  sqcRZGate(q, -2.6364906301492206, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.35804412305169897, 0);
  sqcRZGate(q, -2.8543117769119166, 0);
  sqcRYGate(q, -0.05346759311256515, 1);
  sqcRZGate(q, -0.9071115711539788, 1);
  sqcRYGate(q, 1.7674186222969999, 2);
  sqcRZGate(q, 0.09641943379181404, 2);
  sqcRYGate(q, 2.789969650228502, 3);
  sqcRZGate(q, -1.2853259735674036, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.712281078578609, 0);
  sqcRZGate(q, -2.054048517639248, 0);
  sqcRYGate(q, 2.7828390406226067, 1);
  sqcRZGate(q, -2.887237326942287, 1);
  sqcRYGate(q, -1.4975023273939243, 2);
  sqcRZGate(q, -2.160691442879841, 2);
  sqcRYGate(q, -1.3983195939429338, 3);
  sqcRZGate(q, -0.3760938141094554, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.0424397870898194, 0);
  sqcRZGate(q, 2.990574401722394, 0);
  sqcRYGate(q, -3.105946478549314, 1);
  sqcRZGate(q, -2.813756159958689, 1);
  sqcRYGate(q, -1.7838663688342322, 2);
  sqcRZGate(q, 0.9371471205185538, 2);
  sqcRYGate(q, -1.5728275509630525, 3);
  sqcRZGate(q, 1.5283750785555155, 3);

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
