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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -0.2818982960955079, 0);
  sqcRZGate(q, 2.6805215273977754, 0);
  sqcRYGate(q, 2.646533738247753, 1);
  sqcRZGate(q, 0.6995576351946329, 1);
  sqcRYGate(q, 1.858162875919221, 2);
  sqcRZGate(q, 1.6484416485299698, 2);
  sqcRYGate(q, 0.9140318194029087, 3);
  sqcRZGate(q, -0.6671877861506639, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.188709564569023, 0);
  sqcRZGate(q, 0.705373851218468, 0);
  sqcRYGate(q, 2.4227907274854874, 1);
  sqcRZGate(q, -1.381115099079147, 1);
  sqcRYGate(q, 0.728969918056282, 2);
  sqcRZGate(q, 2.192558774116174, 2);
  sqcRYGate(q, 2.949243833353784, 3);
  sqcRZGate(q, -2.826067285019429, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.218011869385217, 0);
  sqcRZGate(q, -3.1112448561863006, 0);
  sqcRYGate(q, -2.0642815769880896, 1);
  sqcRZGate(q, -1.1485864896872708, 1);
  sqcRYGate(q, -1.4860343046138882, 2);
  sqcRZGate(q, -0.2990010277090534, 2);
  sqcRYGate(q, 0.8534520152847458, 3);
  sqcRZGate(q, 0.28290242412485256, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5126358634576862, 0);
  sqcRZGate(q, -1.1018375059986916, 0);
  sqcRYGate(q, 1.7770962956292058, 1);
  sqcRZGate(q, 3.123026323092693, 1);
  sqcRYGate(q, 0.36542713506725044, 2);
  sqcRZGate(q, -0.9792838551985943, 2);
  sqcRYGate(q, 0.055306640391164494, 3);
  sqcRZGate(q, 0.3078246946604691, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.1095139406536636, 0);
  sqcRZGate(q, 2.2685227709642186, 0);
  sqcRYGate(q, -2.0022429062763005, 1);
  sqcRZGate(q, -2.908671515491127, 1);
  sqcRYGate(q, 0.3533779226762622, 2);
  sqcRZGate(q, 2.5674956143426972, 2);
  sqcRYGate(q, -2.462061663585744, 3);
  sqcRZGate(q, -2.7769781776089104, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.664037703147532, 0);
  sqcRZGate(q, -1.6919869780383021, 0);
  sqcRYGate(q, 0.997191127579778, 1);
  sqcRZGate(q, -0.5740746901472803, 1);
  sqcRYGate(q, -3.0973719329330174, 2);
  sqcRZGate(q, -2.0448062857046616, 2);
  sqcRYGate(q, -0.6033964081232566, 3);
  sqcRZGate(q, 1.6397540583484629, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1559435530160345, 0);
  sqcRZGate(q, 3.0194228149397793, 0);
  sqcRYGate(q, 0.30755024522592134, 1);
  sqcRZGate(q, 2.8607989296459464, 1);
  sqcRYGate(q, 0.8550308685059308, 2);
  sqcRZGate(q, 0.655024497462204, 2);
  sqcRYGate(q, 0.3724863127434421, 3);
  sqcRZGate(q, -2.2377502374944953, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3354923180417018, 0);
  sqcRZGate(q, 0.08575947946082305, 0);
  sqcRYGate(q, 1.8205935522906942, 1);
  sqcRZGate(q, 2.955385651507077, 1);
  sqcRYGate(q, 0.4973331412330637, 2);
  sqcRZGate(q, 2.2599145175589634, 2);
  sqcRYGate(q, -1.2058117118140466, 3);
  sqcRZGate(q, 3.0695861082767917, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.867989643440724, 0);
  sqcRZGate(q, -0.5935081691638419, 0);
  sqcRYGate(q, -2.8244396271776617, 1);
  sqcRZGate(q, 0.9875251132474379, 1);
  sqcRYGate(q, 1.3153490114276378, 2);
  sqcRZGate(q, 0.8805919921202977, 2);
  sqcRYGate(q, 2.5381489718733987, 3);
  sqcRZGate(q, -1.9764878050065486, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.451747964553817, 0);
  sqcRZGate(q, -2.371940705375646, 0);
  sqcRYGate(q, 0.9330178847768001, 1);
  sqcRZGate(q, 1.1407502962307867, 1);
  sqcRYGate(q, -0.5109077524193347, 2);
  sqcRZGate(q, 0.15812561544491383, 2);
  sqcRYGate(q, 1.0922991909363944, 3);
  sqcRZGate(q, 2.5853221167376548, 3);

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
