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

  sqcRYGate(q, 3.1315669248517244, 0);
  sqcRZGate(q, 1.5565472904298574, 0);
  sqcRYGate(q, -2.48348558539623, 1);
  sqcRZGate(q, 0.18676841758893678, 1);
  sqcRYGate(q, -2.886037901245821, 2);
  sqcRZGate(q, -0.4846508622077638, 2);
  sqcRYGate(q, -0.9097389982287298, 3);
  sqcRZGate(q, -0.5307479746206472, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3373528798924754, 0);
  sqcRZGate(q, -0.9659361189608852, 0);
  sqcRYGate(q, 2.165703484276074, 1);
  sqcRZGate(q, 2.0855871267108435, 1);
  sqcRYGate(q, 2.0867472220473764, 2);
  sqcRZGate(q, 2.2388270328047857, 2);
  sqcRYGate(q, 1.3326823240025236, 3);
  sqcRZGate(q, 0.7272940322238559, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8931968758326514, 0);
  sqcRZGate(q, -1.6654490719056652, 0);
  sqcRYGate(q, -0.36437578701457785, 1);
  sqcRZGate(q, -1.6027877455082522, 1);
  sqcRYGate(q, -1.5395473939177526, 2);
  sqcRZGate(q, -1.508205906457979, 2);
  sqcRYGate(q, -0.1600421471637686, 3);
  sqcRZGate(q, 0.2708421947306867, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0026621912255376, 0);
  sqcRZGate(q, 0.8854970766763116, 0);
  sqcRYGate(q, -0.6980573010833176, 1);
  sqcRZGate(q, -0.8406561048347636, 1);
  sqcRYGate(q, -1.6211917314673636, 2);
  sqcRZGate(q, 3.0327858241402965, 2);
  sqcRYGate(q, 2.981559886490149, 3);
  sqcRZGate(q, -0.5415638739993863, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5034504361306553, 0);
  sqcRZGate(q, -2.0067669326693753, 0);
  sqcRYGate(q, -0.43606536117063377, 1);
  sqcRZGate(q, 0.8239301130651381, 1);
  sqcRYGate(q, -0.39215863918680155, 2);
  sqcRZGate(q, -0.40372345218580774, 2);
  sqcRYGate(q, 1.4612571044725788, 3);
  sqcRZGate(q, -1.650390086907839, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9497986401834595, 0);
  sqcRZGate(q, 0.8688868982375428, 0);
  sqcRYGate(q, -0.008408479222778098, 1);
  sqcRZGate(q, 0.8639102037777189, 1);
  sqcRYGate(q, 2.947532944637063, 2);
  sqcRZGate(q, 2.784065993747308, 2);
  sqcRYGate(q, 0.5810392515018843, 3);
  sqcRZGate(q, -0.6178747982522187, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6688325563454711, 0);
  sqcRZGate(q, 1.6679673552042376, 0);
  sqcRYGate(q, 0.5966375061965596, 1);
  sqcRZGate(q, 1.7415701474507372, 1);
  sqcRYGate(q, 1.6478140348308745, 2);
  sqcRZGate(q, 1.1120593430260959, 2);
  sqcRYGate(q, -1.1185518814567095, 3);
  sqcRZGate(q, -1.0319609013707858, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.317323772770445, 0);
  sqcRZGate(q, -2.075340060180591, 0);
  sqcRYGate(q, -0.6546548896739951, 1);
  sqcRZGate(q, 1.3993934673382649, 1);
  sqcRYGate(q, 1.238544593966819, 2);
  sqcRZGate(q, -2.0217728557026704, 2);
  sqcRYGate(q, 0.7431398743029567, 3);
  sqcRZGate(q, 2.518089755011594, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4341653398834796, 0);
  sqcRZGate(q, -0.30040106430240154, 0);
  sqcRYGate(q, -2.6832162816538405, 1);
  sqcRZGate(q, 1.6172230592873431, 1);
  sqcRYGate(q, -2.275678509345524, 2);
  sqcRZGate(q, -2.1860301296505904, 2);
  sqcRYGate(q, -1.2050331442918436, 3);
  sqcRZGate(q, -2.2569156958164918, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5361232058834418, 0);
  sqcRZGate(q, 1.5185349710167422, 0);
  sqcRYGate(q, 1.002111856109753, 1);
  sqcRZGate(q, 0.26717522800605525, 1);
  sqcRYGate(q, 2.3103888756675683, 2);
  sqcRZGate(q, 2.3011078098939906, 2);
  sqcRYGate(q, -1.4125815336000782, 3);
  sqcRZGate(q, 2.896907200252284, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5200982696103695, 0);
  sqcRZGate(q, -0.320124514031439, 0);
  sqcRYGate(q, 3.1031790309984912, 1);
  sqcRZGate(q, -0.16893567029207543, 1);
  sqcRYGate(q, 1.4508614648405078, 2);
  sqcRZGate(q, -0.8962350660894747, 2);
  sqcRYGate(q, -2.245458605807632, 3);
  sqcRZGate(q, -0.7456830857815309, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.743088385074448, 0);
  sqcRZGate(q, 1.7022470293468095, 0);
  sqcRYGate(q, -0.07176438160432543, 1);
  sqcRZGate(q, -1.2646181789289166, 1);
  sqcRYGate(q, -0.2929092051960649, 2);
  sqcRZGate(q, 0.5424459743087722, 2);
  sqcRYGate(q, -2.420045843510375, 3);
  sqcRZGate(q, 0.7647848683295335, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.359108738448029, 0);
  sqcRZGate(q, 0.04812200201510283, 0);
  sqcRYGate(q, -2.253600441725405, 1);
  sqcRZGate(q, -0.4606291262999438, 1);
  sqcRYGate(q, -1.3023479859107334, 2);
  sqcRZGate(q, 0.23705214246006595, 2);
  sqcRYGate(q, 0.5073289502129503, 3);
  sqcRZGate(q, -0.3737996051352897, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.42217071840166126, 0);
  sqcRZGate(q, -1.5945789867967646, 0);
  sqcRYGate(q, -1.2151704416032878, 1);
  sqcRZGate(q, -1.5252153775290769, 1);
  sqcRYGate(q, -1.3635273844194806, 2);
  sqcRZGate(q, 1.1419094881768037, 2);
  sqcRYGate(q, -2.979111735334718, 3);
  sqcRZGate(q, -0.006119438678334596, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4376349553213714, 0);
  sqcRZGate(q, 3.070519952402131, 0);
  sqcRYGate(q, -0.34283178131169434, 1);
  sqcRZGate(q, 1.9101160306279532, 1);
  sqcRYGate(q, -1.4547196050454518, 2);
  sqcRZGate(q, 1.5715514218493223, 2);
  sqcRYGate(q, -2.993097982913028, 3);
  sqcRZGate(q, -1.3346095750865343, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3921387586870402, 0);
  sqcRZGate(q, 0.039510572539633415, 0);
  sqcRYGate(q, 0.8510069591352276, 1);
  sqcRZGate(q, -2.983713457178268, 1);
  sqcRYGate(q, -1.4078475877855192, 2);
  sqcRZGate(q, 2.244745556480072, 2);
  sqcRYGate(q, 2.550942214646087, 3);
  sqcRZGate(q, 1.1106289562805243, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8446135658990261, 0);
  sqcRZGate(q, -2.7936429005561276, 0);
  sqcRYGate(q, -0.8463329231452787, 1);
  sqcRZGate(q, 0.4906270443765801, 1);
  sqcRYGate(q, 0.9584601569082523, 2);
  sqcRZGate(q, -0.8186196636221289, 2);
  sqcRYGate(q, -0.2978390978214236, 3);
  sqcRZGate(q, -0.9325692806918626, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7823355189185763, 0);
  sqcRZGate(q, -2.2806614749257896, 0);
  sqcRYGate(q, -0.3952947866348066, 1);
  sqcRZGate(q, 0.7479350475879405, 1);
  sqcRYGate(q, -2.9961658155618762, 2);
  sqcRZGate(q, -0.4671635725557816, 2);
  sqcRYGate(q, -1.4893014804806826, 3);
  sqcRZGate(q, -0.2685006320529366, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.33502624304412, 0);
  sqcRZGate(q, -2.0082397001852703, 0);
  sqcRYGate(q, -1.9598126792440513, 1);
  sqcRZGate(q, 1.7408754242249034, 1);
  sqcRYGate(q, -1.7180139292452923, 2);
  sqcRZGate(q, 2.8753884840619834, 2);
  sqcRYGate(q, 0.07326316444734715, 3);
  sqcRZGate(q, 3.0238679836356606, 3);

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
