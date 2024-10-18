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

  sqcRYGate(q, 1.5707965741337064, 0);
  sqcRZGate(q, -3.141527125041064, 0);
  sqcRYGate(q, -1.5707963393652475, 1);
  sqcRZGate(q, -1.5708979552143596, 1);
  sqcRYGate(q, -1.572371633361399, 2);
  sqcRZGate(q, 1.573778141810186, 2);
  sqcRYGate(q, -0.4874771174675297, 3);
  sqcRZGate(q, -0.7752552838001887, 3);
  sqcRYGate(q, 1.570797458422458, 4);
  sqcRZGate(q, -1.5707959081410403, 4);
  sqcRYGate(q, 3.0966740816680396, 5);
  sqcRZGate(q, 3.141244227200315, 5);
  sqcRYGate(q, 0.18019190946412494, 6);
  sqcRZGate(q, 1.5707979565518375, 6);
  sqcRYGate(q, 1.5708014252784794, 7);
  sqcRZGate(q, -0.9151237191068029, 7);
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
  sqcRYGate(q, -1.5716572307715266, 0);
  sqcRZGate(q, -1.393916852038429, 0);
  sqcRYGate(q, 1.570787406197475, 1);
  sqcRZGate(q, -0.699669135644519, 1);
  sqcRYGate(q, -0.08600274845202387, 2);
  sqcRZGate(q, 3.141222302936316, 2);
  sqcRYGate(q, 3.589432919781643e-07, 3);
  sqcRZGate(q, 2.34605205793339, 3);
  sqcRYGate(q, -1.57327327701032, 4);
  sqcRZGate(q, 1.5707962179023145, 4);
  sqcRYGate(q, 1.5708042150495483, 5);
  sqcRZGate(q, 1.5708433358775198, 5);
  sqcRYGate(q, -1.5700419311253642, 6);
  sqcRZGate(q, -3.139023247707687, 6);
  sqcRYGate(q, 8.741744806251004e-06, 7);
  sqcRZGate(q, 2.4859202292497877, 7);
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
  sqcRYGate(q, 3.141590648353651, 0);
  sqcRZGate(q, -1.4577607321034478, 0);
  sqcRYGate(q, 3.1414673539480766, 1);
  sqcRZGate(q, 2.8486867933578535, 1);
  sqcRYGate(q, 1.076959449918152, 2);
  sqcRZGate(q, 1.1704604820135296, 2);
  sqcRYGate(q, 1.570796296802319, 3);
  sqcRZGate(q, 1.5707964136238726, 3);
  sqcRYGate(q, -1.570795990815819, 4);
  sqcRZGate(q, 0.6673295693330347, 4);
  sqcRYGate(q, 3.043398385356827, 5);
  sqcRZGate(q, 0.00023234407334804533, 5);
  sqcRYGate(q, 1.5962990376037578, 6);
  sqcRZGate(q, 0.09934479231295514, 6);
  sqcRYGate(q, 1.9645188530381077, 7);
  sqcRZGate(q, 3.140554931791131, 7);
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
  sqcRYGate(q, -0.0018189467653468964, 0);
  sqcRZGate(q, -1.50695206384626, 0);
  sqcRYGate(q, -1.570508509780524, 1);
  sqcRZGate(q, 2.1812239888906957, 1);
  sqcRYGate(q, -3.141589237933637, 2);
  sqcRZGate(q, -1.9711203778601634, 2);
  sqcRYGate(q, -1.5656858993841833, 3);
  sqcRZGate(q, -3.1415919551857887, 3);
  sqcRYGate(q, -1.0020812668543044e-06, 4);
  sqcRZGate(q, -0.6346488990842837, 4);
  sqcRYGate(q, -3.0977663166394143, 5);
  sqcRZGate(q, 1.5691975070770194, 5);
  sqcRYGate(q, 1.5707958990986732, 6);
  sqcRZGate(q, 1.5707959809153293, 6);
  sqcRYGate(q, -3.1411870348719995, 7);
  sqcRZGate(q, 2.0813289245396875, 7);
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
  sqcRYGate(q, 1.570794272639355, 0);
  sqcRZGate(q, -0.3900115297080608, 0);
  sqcRYGate(q, 3.1392289697788325, 1);
  sqcRZGate(q, -2.531262169927809, 1);
  sqcRYGate(q, 1.6166481417277068, 2);
  sqcRZGate(q, 0.2758200148576545, 2);
  sqcRYGate(q, -1.5707081492677664, 3);
  sqcRZGate(q, 2.8753379239574612, 3);
  sqcRYGate(q, -1.5688200238187149, 4);
  sqcRZGate(q, -1.5708805575636762, 4);
  sqcRYGate(q, 1.5708841584542064, 5);
  sqcRZGate(q, -2.0005398057840433, 5);
  sqcRYGate(q, -1.570794788309599, 6);
  sqcRZGate(q, -0.93857858104833, 6);
  sqcRYGate(q, -3.553020015978347e-06, 7);
  sqcRZGate(q, -2.0823661598839487, 7);
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
  sqcRYGate(q, -7.295615424722389e-07, 0);
  sqcRZGate(q, -2.751663097639171, 0);
  sqcRYGate(q, -1.5707967600890893, 1);
  sqcRZGate(q, 1.5707969733385965, 1);
  sqcRYGate(q, -3.1415924958844688, 2);
  sqcRZGate(q, 1.847445551743438, 2);
  sqcRYGate(q, 3.78524225794763e-05, 3);
  sqcRZGate(q, 0.2662558704547298, 3);
  sqcRYGate(q, -1.6141571278800306, 4);
  sqcRZGate(q, 1.5712319276751607, 4);
  sqcRYGate(q, -3.1415890116502863, 5);
  sqcRZGate(q, 1.76277205263671, 5);
  sqcRYGate(q, 3.1415327580232195, 6);
  sqcRZGate(q, 0.6581316901780365, 6);
  sqcRYGate(q, 1.5707964903365443, 7);
  sqcRZGate(q, 1.2121458430127896, 7);
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
  sqcRYGate(q, -1.5707966282885435, 0);
  sqcRZGate(q, 0.7304003486672936, 0);
  sqcRYGate(q, -1.5707962446497312, 1);
  sqcRZGate(q, -0.16066918037316272, 1);
  sqcRYGate(q, -1.569932596259175, 2);
  sqcRZGate(q, -0.11417985801903859, 2);
  sqcRYGate(q, 1.570797288102453, 3);
  sqcRZGate(q, -1.3314555631025708, 3);
  sqcRYGate(q, -1.5704970160501839, 4);
  sqcRZGate(q, -1.2488051372010576, 4);
  sqcRYGate(q, -3.141591994013749, 5);
  sqcRZGate(q, -0.7073410213290457, 5);
  sqcRYGate(q, 1.5708563011296812, 6);
  sqcRZGate(q, 2.3192198822071926, 6);
  sqcRYGate(q, -2.9621655625115225e-07, 7);
  sqcRZGate(q, -0.983743523773942, 7);

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
