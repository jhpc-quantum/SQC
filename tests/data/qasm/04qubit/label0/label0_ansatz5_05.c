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

  sqcRYGate(q, 1.8826320533763288, 0);
  sqcRYGate(q, 2.604862169174799, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0104152323718365, 0);
  sqcRYGate(q, 0.9634668251953695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.228711695847025, 2);
  sqcRYGate(q, 3.113118824239147, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5077042523613633, 2);
  sqcRYGate(q, -0.8792570793228555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.148587362057282, 1);
  sqcRYGate(q, 1.70934256767973, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2572962889426798, 1);
  sqcRYGate(q, 0.025597513817158912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3180026821004178, 0);
  sqcRYGate(q, 0.22411795664419623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0956353791834417, 0);
  sqcRYGate(q, -2.3480016997912223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3941932239347126, 2);
  sqcRYGate(q, 1.3888741199385797, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.551591854790159, 2);
  sqcRYGate(q, -2.717482663550453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1071076926109988, 1);
  sqcRYGate(q, -2.740131912698149, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.133977498153754, 1);
  sqcRYGate(q, 0.7096169244358421, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.12284135017079745, 0);
  sqcRYGate(q, 1.522148525520899, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6872979711437226, 0);
  sqcRYGate(q, -3.028648884825867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.732720741861948, 2);
  sqcRYGate(q, -1.0138372793323667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.26615557350607, 2);
  sqcRYGate(q, -1.01068338220729, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8962548647588222, 1);
  sqcRYGate(q, -0.9848116242890423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8235699023906582, 1);
  sqcRYGate(q, -0.19006302013990106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0219841020478331, 0);
  sqcRYGate(q, 2.1960167878597336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10102801664109173, 0);
  sqcRYGate(q, 2.257737423521877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.602765457204969, 2);
  sqcRYGate(q, 0.8585517180955833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5054306732055176, 2);
  sqcRYGate(q, 2.472616654580788, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8599783381082724, 1);
  sqcRYGate(q, -1.363864915271817, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9505799714537886, 1);
  sqcRYGate(q, -0.36629537049746475, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0777420941393858, 0);
  sqcRYGate(q, -1.3448219041792748, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9453605575392006, 0);
  sqcRYGate(q, 0.8528690468201647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0269709000855156, 2);
  sqcRYGate(q, -2.8008577547080877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9375253796083047, 2);
  sqcRYGate(q, 0.11107447385003669, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9386236302482232, 1);
  sqcRYGate(q, 2.562825883321181, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.171069380936129, 1);
  sqcRYGate(q, -1.3987572527383727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.595479608806757, 0);
  sqcRYGate(q, 0.8778856226796323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.42043694244198626, 0);
  sqcRYGate(q, -0.44576796357788134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15806563343671257, 2);
  sqcRYGate(q, -2.4596981204787887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6441136532099223, 2);
  sqcRYGate(q, -2.045519871508116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8934452129057027, 1);
  sqcRYGate(q, 1.3662832503998477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5933864628753724, 1);
  sqcRYGate(q, 2.081721156443791, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3696691121747406, 0);
  sqcRYGate(q, -2.5697549186312028, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1173788671982057, 0);
  sqcRYGate(q, -1.6628920833594192, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1494156442171521, 2);
  sqcRYGate(q, 2.6531366681102684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1146392916938646, 2);
  sqcRYGate(q, -0.7217613761243324, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.629420771886762, 1);
  sqcRYGate(q, 2.2537878854625415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1161274172708262, 1);
  sqcRYGate(q, -1.8567497406066682, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6726290614920213, 0);
  sqcRYGate(q, -1.0957195841522696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.032392239538, 0);
  sqcRYGate(q, 1.3540313362551544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8920874167852187, 2);
  sqcRYGate(q, 1.962583545579592, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7593459697647281, 2);
  sqcRYGate(q, 0.33604551793263765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.159260006932411, 1);
  sqcRYGate(q, -0.5233699258723447, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9997846209834058, 1);
  sqcRYGate(q, 0.42321761615452047, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.617535080520843, 0);
  sqcRYGate(q, 0.12442210342366966, 1);
  sqcRYGate(q, -2.1355975681606543, 2);
  sqcRYGate(q, -0.38489835698202146, 3);

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
