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

  sqcRYGate(q, -0.2280963810996654, 0);
  sqcRYGate(q, -0.6090174932834627, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.140143390506713, 0);
  sqcRYGate(q, -1.593551016971233, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0502922404331865, 1);
  sqcRYGate(q, -0.14312583369883747, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5065594569207987, 1);
  sqcRYGate(q, -0.7096270980560704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4953453383052588, 2);
  sqcRYGate(q, 0.5598501751347812, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2707548331836005, 2);
  sqcRYGate(q, 0.6835411982598831, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9216447951082989, 0);
  sqcRYGate(q, 2.9406148598969186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3642771319184592, 0);
  sqcRYGate(q, 0.4527174132170524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.098591906219394, 1);
  sqcRYGate(q, -3.127159981566712, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4906940415883531, 1);
  sqcRYGate(q, -1.652564530053408, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0317381264632175, 2);
  sqcRYGate(q, -2.8616297467381453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5486833048891775, 2);
  sqcRYGate(q, 0.5701075695635272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7625758904397174, 0);
  sqcRYGate(q, -2.19557330442652, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10850143283376656, 0);
  sqcRYGate(q, 2.958005776297382, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3537040779778358, 1);
  sqcRYGate(q, -1.1264273074102942, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3377504391303705, 1);
  sqcRYGate(q, 2.124527320884999, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.25791275127550195, 2);
  sqcRYGate(q, 1.4259666132419913, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.892430449853176, 2);
  sqcRYGate(q, 2.7739116936441, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8011304941867308, 0);
  sqcRYGate(q, -1.7116700733757124, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4552698032078308, 0);
  sqcRYGate(q, 0.19555060533368884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.94994866965883, 1);
  sqcRYGate(q, -0.21953408505714211, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0178008836795813, 1);
  sqcRYGate(q, 2.0956927708605693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.908763982158662, 2);
  sqcRYGate(q, -1.4615583303043458, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.95249792391108, 2);
  sqcRYGate(q, 0.9321368969592667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3065537446085305, 0);
  sqcRYGate(q, -3.07579178665679, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5263694097003869, 0);
  sqcRYGate(q, 1.9809777583912656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1889493626941525, 1);
  sqcRYGate(q, -1.4904634799331125, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6341266994242022, 1);
  sqcRYGate(q, 1.9573818034444324, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5536102307853898, 2);
  sqcRYGate(q, -2.220546561386877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6289911508936492, 2);
  sqcRYGate(q, 2.948007161379913, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.774141288864348, 0);
  sqcRYGate(q, -1.4320201589158836, 1);
  sqcRYGate(q, -1.6146090637563333, 2);
  sqcRYGate(q, -1.2148750878553554, 3);

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
