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

  sqcRYGate(q, -2.224563254742491, 0);
  sqcRYGate(q, 0.6856880085570891, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2166358472991385, 0);
  sqcRYGate(q, -1.7489542573058454, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.427813804590015, 1);
  sqcRYGate(q, 2.166750561404213, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2391380757185634, 1);
  sqcRYGate(q, 1.1945105591518894, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7128506752358679, 2);
  sqcRYGate(q, -1.1352788700921321, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7041030650061633, 2);
  sqcRYGate(q, 3.1125512762889964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.42294930527415264, 3);
  sqcRYGate(q, -2.4445800466970944, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5190933536486293, 3);
  sqcRYGate(q, -2.0975121870347904, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8045060091442278, 4);
  sqcRYGate(q, 0.13597741827425647, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.46987974326547816, 4);
  sqcRYGate(q, -1.8762548133055006, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.014399853338297, 5);
  sqcRYGate(q, -0.7766714543653688, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9801979120967294, 5);
  sqcRYGate(q, 2.760307540794348, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6454718229803968, 6);
  sqcRYGate(q, -0.7360008475687971, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3369742105456366, 6);
  sqcRYGate(q, 0.7750797496779669, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3851739964393017, 0);
  sqcRYGate(q, -1.7666168075324846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.034375729453075, 0);
  sqcRYGate(q, 1.3070986134566651, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5839000154074386, 1);
  sqcRYGate(q, -1.6952078925917127, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.399581724256934, 1);
  sqcRYGate(q, 2.695765486142181, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2913205270576027, 2);
  sqcRYGate(q, 1.5768479111953138, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.423751477206359, 2);
  sqcRYGate(q, -0.39035400856498986, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5899879761898323, 3);
  sqcRYGate(q, -1.5735660452975193, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9004564968607331, 3);
  sqcRYGate(q, -1.6513899266740417, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.528327289666083, 4);
  sqcRYGate(q, -1.3800892639156066, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.67418727945017, 4);
  sqcRYGate(q, 1.5406230129239287, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5124579609667155, 5);
  sqcRYGate(q, -1.2177905171804064, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8854488918753685, 5);
  sqcRYGate(q, 2.0899294107131903, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4148737438691814, 6);
  sqcRYGate(q, -1.8841351967789048, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2091662718193392, 6);
  sqcRYGate(q, -2.677517332801232, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1074969485675616, 0);
  sqcRYGate(q, 0.47917609363718, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5699610157446475, 0);
  sqcRYGate(q, 1.9226074238619404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5845046557342233, 1);
  sqcRYGate(q, -1.8892192593901334, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5710398341175054, 1);
  sqcRYGate(q, 3.1067420420650227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.080214169226882, 2);
  sqcRYGate(q, 1.5702288948047753, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5702781992371997, 2);
  sqcRYGate(q, -3.141464138275826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5708226935814291, 3);
  sqcRYGate(q, 1.554256458871114, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.570556572324817, 3);
  sqcRYGate(q, 1.9241411310013863, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5706330088092957, 4);
  sqcRYGate(q, 1.626447166466491, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5707747713470706, 4);
  sqcRYGate(q, -2.960451148916336, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5073464164758033, 5);
  sqcRYGate(q, -1.0131425978384705, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.570783066668886, 5);
  sqcRYGate(q, 3.139868122261955, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1111561293863046, 6);
  sqcRYGate(q, 1.748354232763445, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5716453030257342, 6);
  sqcRYGate(q, 3.1415537046521287, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.601951486610305, 0);
  sqcRYGate(q, 1.5842960593806845, 1);
  sqcRYGate(q, -1.0613114850077396, 2);
  sqcRYGate(q, 1.5707995011121245, 3);
  sqcRYGate(q, -1.571801557081617, 4);
  sqcRYGate(q, -0.6341229405894957, 5);
  sqcRYGate(q, 2.030459374518915, 6);
  sqcRYGate(q, -1.5707357843479546, 7);

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
