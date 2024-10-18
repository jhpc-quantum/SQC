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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -0.023941152830686183, 0);
  sqcRZGate(q, 2.9602001483095712, 0);
  sqcRYGate(q, -1.1217404433591882, 1);
  sqcRZGate(q, -1.5874099440857574, 1);
  sqcRYGate(q, -1.5825572297944133, 2);
  sqcRZGate(q, -3.141499010145673, 2);
  sqcRYGate(q, 1.570829405675658, 3);
  sqcRZGate(q, 1.8321549146605842, 3);
  sqcRYGate(q, -1.5708194133747906, 4);
  sqcRZGate(q, -0.07534201840404181, 4);
  sqcRYGate(q, 1.1503886163769511e-07, 5);
  sqcRZGate(q, -0.680782948224758, 5);
  sqcRYGate(q, -1.926366017401007, 6);
  sqcRZGate(q, 2.497475767666583, 6);
  sqcRYGate(q, 1.5707976775180514, 7);
  sqcRZGate(q, 1.5709881718968843, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.00016073827507582866, 0);
  sqcRZGate(q, 1.787002016096826, 0);
  sqcRYGate(q, 1.5710786115214577, 1);
  sqcRZGate(q, 1.57079881090295, 1);
  sqcRYGate(q, 0.09807614462638733, 2);
  sqcRZGate(q, -3.1414035541317094, 2);
  sqcRYGate(q, -2.7777078380932716, 3);
  sqcRZGate(q, 1.8495529264475885, 3);
  sqcRYGate(q, 1.5707984588746138, 4);
  sqcRZGate(q, 1.5707928993370217, 4);
  sqcRYGate(q, 2.2607796275091053e-06, 5);
  sqcRZGate(q, -2.2470786063298216, 5);
  sqcRYGate(q, 3.141589390416819, 6);
  sqcRZGate(q, -2.2149455040852706, 6);
  sqcRYGate(q, 1.3650817272253821, 7);
  sqcRZGate(q, 2.826150592410395, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5704999441758698, 0);
  sqcRZGate(q, -1.5708018332278684, 0);
  sqcRYGate(q, -1.5707583858784762, 1);
  sqcRZGate(q, -3.1415592123547817, 1);
  sqcRYGate(q, -1.5707964661082503, 2);
  sqcRZGate(q, 1.5707931393100483, 2);
  sqcRYGate(q, -1.5707962423911779, 3);
  sqcRZGate(q, 0.36728679063927044, 3);
  sqcRYGate(q, 1.5708050516638241, 4);
  sqcRZGate(q, 4.2492995400600364e-05, 4);
  sqcRYGate(q, -1.5707895637336602, 5);
  sqcRZGate(q, 2.288487150216714, 5);
  sqcRYGate(q, 1.570806892965475, 6);
  sqcRZGate(q, 3.1414478873976703, 6);
  sqcRYGate(q, -0.00015115062878212623, 7);
  sqcRZGate(q, 0.3198323109005008, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.605318968627141, 0);
  sqcRZGate(q, -0.0003268570872387855, 0);
  sqcRYGate(q, -1.5710996814234166, 1);
  sqcRZGate(q, -0.22331354147376814, 1);
  sqcRYGate(q, 1.5707963348188612, 2);
  sqcRZGate(q, 1.5707976394269583, 2);
  sqcRYGate(q, -1.4751144485782893e-06, 3);
  sqcRZGate(q, 1.203536659527104, 3);
  sqcRYGate(q, 1.5707962331507526, 4);
  sqcRZGate(q, -0.7558441700024804, 4);
  sqcRYGate(q, 2.6053562575789613e-05, 5);
  sqcRZGate(q, -0.7290026884772374, 5);
  sqcRYGate(q, -1.5705216424771349, 6);
  sqcRZGate(q, 2.5116330368048936, 6);
  sqcRYGate(q, 1.5845377124009579, 7);
  sqcRZGate(q, -3.1405135954634673, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5707962152256796, 0);
  sqcRZGate(q, -1.6558351403128961, 0);
  sqcRYGate(q, 1.57079582950547, 1);
  sqcRZGate(q, 1.4070226950286528, 1);
  sqcRYGate(q, 1.570797089961916, 2);
  sqcRZGate(q, 2.5303071363201726, 2);
  sqcRYGate(q, 1.5849334254893697, 3);
  sqcRZGate(q, -3.1415879346310174, 3);
  sqcRYGate(q, 5.227228366422724e-07, 4);
  sqcRZGate(q, 2.8547131962120242, 4);
  sqcRYGate(q, 3.1329303868885834, 5);
  sqcRZGate(q, 3.130281248029228, 5);
  sqcRYGate(q, 4.469756849978523e-06, 6);
  sqcRZGate(q, 1.1070325561945495, 6);
  sqcRYGate(q, -0.044912983844178474, 7);
  sqcRZGate(q, -2.832325002856276, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.14147338377358, 0);
  sqcRZGate(q, -2.6382973575010604, 0);
  sqcRYGate(q, -1.4557172227647188e-05, 1);
  sqcRZGate(q, 2.6179656990756373, 1);
  sqcRYGate(q, 3.1415917411899645, 2);
  sqcRZGate(q, -1.5937474953018431, 2);
  sqcRYGate(q, -1.5707969044271584, 3);
  sqcRZGate(q, 2.4541921059652463, 3);
  sqcRYGate(q, -3.141592256668972, 4);
  sqcRZGate(q, 1.1163575977110245, 4);
  sqcRYGate(q, 1.570795173072497, 5);
  sqcRZGate(q, -0.6873998474916759, 5);
  sqcRYGate(q, -0.00031325011741521096, 6);
  sqcRZGate(q, 0.11125661706686453, 6);
  sqcRYGate(q, -3.127162090426988, 7);
  sqcRZGate(q, -0.37707412018340425, 7);

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
