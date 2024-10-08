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

  sqcRYGate(q, -2.4364653365220925, 0);
  sqcRYGate(q, 2.5393561044984647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9440263490195954, 0);
  sqcRYGate(q, -3.047548918072872, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.11145164233407, 0);
  sqcRYGate(q, -2.3632804149705464, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9563018876246288, 0);
  sqcRYGate(q, -0.09011751321302881, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9527266109058357, 0);
  sqcRYGate(q, -2.6965922676198395, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6933265270671646, 0);
  sqcRYGate(q, -0.8856935541359681, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.958246909024863, 1);
  sqcRYGate(q, 0.5116178129879172, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.498962704707605, 1);
  sqcRYGate(q, -2.818713159945915, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6407874319362344, 1);
  sqcRYGate(q, 0.5367157507529097, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.497459660843756, 1);
  sqcRYGate(q, -0.6937267775216699, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1987983877987518, 2);
  sqcRYGate(q, -1.2191183058316648, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1364548746553482, 2);
  sqcRYGate(q, 1.4047133870999062, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0950081552785256, 0);
  sqcRYGate(q, -2.618469269904601, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.16206126529144216, 0);
  sqcRYGate(q, -1.5530677963929023, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23820351482275104, 0);
  sqcRYGate(q, 1.7209262342136564, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2251053436253745, 0);
  sqcRYGate(q, 1.5549517123131225, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.09849888968413101, 0);
  sqcRYGate(q, 1.8207034558510218, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.301633422019448, 0);
  sqcRYGate(q, -3.0131900751270364, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4802545065393353, 1);
  sqcRYGate(q, 1.7772125337093692, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.006251823651108131, 1);
  sqcRYGate(q, 1.9485117145855817, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8785071447234607, 1);
  sqcRYGate(q, -0.2551442813338126, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0619049646852803, 1);
  sqcRYGate(q, 2.5730595351123027, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0317045257351074, 2);
  sqcRYGate(q, -1.1852519184978503, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.593883550831525, 2);
  sqcRYGate(q, 2.933776273701248, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6903017563758342, 0);
  sqcRYGate(q, -1.3407667181207605, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1457897112386801, 0);
  sqcRYGate(q, 1.7514047434351405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5713686709647776, 0);
  sqcRYGate(q, -0.647171438241205, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.009582128233199, 0);
  sqcRYGate(q, 1.1303411961486742, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.874664547713606, 0);
  sqcRYGate(q, -1.0865096135553067, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2537879051462184, 0);
  sqcRYGate(q, -1.3863867056638408, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7013246375963802, 1);
  sqcRYGate(q, -1.2692893743492135, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.607684966468419, 1);
  sqcRYGate(q, -0.9305341712916201, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0577980023736009, 1);
  sqcRYGate(q, 1.7008552315165977, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7878332947064195, 1);
  sqcRYGate(q, -2.112897861364023, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6299329563531322, 2);
  sqcRYGate(q, 2.5902271831768533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.24127403763637645, 2);
  sqcRYGate(q, 0.5350306804203857, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2899110837434188, 0);
  sqcRYGate(q, -0.7062357751999344, 1);
  sqcRYGate(q, -2.9295299475229597, 2);
  sqcRYGate(q, 0.5403269604437886, 3);

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
