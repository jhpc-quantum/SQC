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

  sqcRYGate(q, -0.8086216270044959, 0);
  sqcRZGate(q, -2.045431130701631, 0);
  sqcRYGate(q, -0.752986586551267, 1);
  sqcRZGate(q, -0.7883883253703399, 1);
  sqcRYGate(q, 1.0207908711830473, 2);
  sqcRZGate(q, 2.420051369861082, 2);
  sqcRYGate(q, 1.7574666370279308, 3);
  sqcRZGate(q, 2.6396305788188683, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.5210708674326996, 0);
  sqcRZGate(q, 2.055226993538841, 0);
  sqcRYGate(q, 2.5127871446588537, 1);
  sqcRZGate(q, 0.018112686399524236, 1);
  sqcRYGate(q, 0.5432865307085146, 2);
  sqcRZGate(q, -1.7361920650746918, 2);
  sqcRYGate(q, 3.108712927695, 3);
  sqcRZGate(q, -1.7513736476331792, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.06432802094320156, 0);
  sqcRZGate(q, 2.1839506807540534, 0);
  sqcRYGate(q, 2.994600347667058, 1);
  sqcRZGate(q, 2.2005415185007964, 1);
  sqcRYGate(q, 1.5124962052103026, 2);
  sqcRZGate(q, 0.24123694143712315, 2);
  sqcRYGate(q, -0.9891192311316805, 3);
  sqcRZGate(q, 1.9540734168011538, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.424280985109507, 0);
  sqcRZGate(q, -2.4758585881060555, 0);
  sqcRYGate(q, -3.0618678681329587, 1);
  sqcRZGate(q, -0.38311480603507475, 1);
  sqcRYGate(q, -1.3016115833251172, 2);
  sqcRZGate(q, 2.8004889750622195, 2);
  sqcRYGate(q, -2.7421771293950896, 3);
  sqcRZGate(q, 1.2971045293593972, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.375500107025383, 0);
  sqcRZGate(q, -1.5051618481493376, 0);
  sqcRYGate(q, 1.9113500606486964, 1);
  sqcRZGate(q, 3.0557833796204217, 1);
  sqcRYGate(q, -0.9672565141637706, 2);
  sqcRZGate(q, 2.06279165640074, 2);
  sqcRYGate(q, 0.20020493288291494, 3);
  sqcRZGate(q, -0.9821280735090676, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.0138723833223016, 0);
  sqcRZGate(q, -1.55541021848782, 0);
  sqcRYGate(q, -0.1382540570680142, 1);
  sqcRZGate(q, 2.184127315408611, 1);
  sqcRYGate(q, -2.6524880247888394, 2);
  sqcRZGate(q, -0.2229481907554778, 2);
  sqcRYGate(q, 0.5262968228773861, 3);
  sqcRZGate(q, 2.5157664703987903, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.7871060915611339, 0);
  sqcRZGate(q, -1.0570819915022884, 0);
  sqcRYGate(q, -0.9072721589739549, 1);
  sqcRZGate(q, -0.7252142314001438, 1);
  sqcRYGate(q, -0.20919023791850577, 2);
  sqcRZGate(q, 0.574004744098004, 2);
  sqcRYGate(q, 0.9213105422791096, 3);
  sqcRZGate(q, 2.5610900061070843, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.6672906839311783, 0);
  sqcRZGate(q, -2.9535495808019543, 0);
  sqcRYGate(q, -1.6936741154448747, 1);
  sqcRZGate(q, 2.797027447564336, 1);
  sqcRYGate(q, -1.3900690181062574, 2);
  sqcRZGate(q, 0.32261816245310193, 2);
  sqcRYGate(q, 1.851597873814562, 3);
  sqcRZGate(q, -2.077214511556609, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.0557408578060095, 0);
  sqcRZGate(q, -2.491360425186883, 0);
  sqcRYGate(q, 0.49466377699349096, 1);
  sqcRZGate(q, 0.22176657290509108, 1);
  sqcRYGate(q, 0.6132378662957614, 2);
  sqcRZGate(q, -0.6641388337607292, 2);
  sqcRYGate(q, 1.165030020976281, 3);
  sqcRZGate(q, -0.05204436128954841, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2071664841713006, 0);
  sqcRZGate(q, -2.212493760515446, 0);
  sqcRYGate(q, -3.004695068202424, 1);
  sqcRZGate(q, -0.8769920106683807, 1);
  sqcRYGate(q, 1.3601816813360905, 2);
  sqcRZGate(q, -2.0290630015591438, 2);
  sqcRYGate(q, -2.810584425863187, 3);
  sqcRZGate(q, 2.8617172008618326, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.091831402931168, 0);
  sqcRZGate(q, -2.95314827256236, 0);
  sqcRYGate(q, 1.6019740616862894, 1);
  sqcRZGate(q, 1.7742859057404825, 1);
  sqcRYGate(q, 0.32045299759280477, 2);
  sqcRZGate(q, -2.5360508096995167, 2);
  sqcRYGate(q, -1.2963562200026428, 3);
  sqcRZGate(q, 0.09264331134019496, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5456989339113836, 0);
  sqcRZGate(q, -0.7917395354299385, 0);
  sqcRYGate(q, 2.474874189788405, 1);
  sqcRZGate(q, 0.9919566631250624, 1);
  sqcRYGate(q, 0.259192029293434, 2);
  sqcRZGate(q, 0.13450087257812093, 2);
  sqcRYGate(q, -0.10054804611289012, 3);
  sqcRZGate(q, -0.68226187035998, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.23209768282375, 0);
  sqcRZGate(q, 1.9860689497804307, 0);
  sqcRYGate(q, -0.49120937709996765, 1);
  sqcRZGate(q, -0.037649072504541595, 1);
  sqcRYGate(q, 1.125681213702113, 2);
  sqcRZGate(q, -2.9401486966668133, 2);
  sqcRYGate(q, 2.362851651992325, 3);
  sqcRZGate(q, -1.613663661898265, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.2756193539166514, 0);
  sqcRZGate(q, -0.9824558254802555, 0);
  sqcRYGate(q, 1.551584291989425, 1);
  sqcRZGate(q, -1.7771905672500559, 1);
  sqcRYGate(q, -1.8331315315853605, 2);
  sqcRZGate(q, -0.409081031627002, 2);
  sqcRYGate(q, 0.7999745913324592, 3);
  sqcRZGate(q, -2.3873701945374375, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.8819864353756905, 0);
  sqcRZGate(q, -1.8197533216056563, 0);
  sqcRYGate(q, 2.9663464492184564, 1);
  sqcRZGate(q, -2.731868694911947, 1);
  sqcRYGate(q, -0.618462572055982, 2);
  sqcRZGate(q, -0.4161027991139732, 2);
  sqcRYGate(q, 1.1287328081713293, 3);
  sqcRZGate(q, 0.0737627442894819, 3);

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
