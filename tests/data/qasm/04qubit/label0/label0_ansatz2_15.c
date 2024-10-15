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

  sqcRYGate(q, 2.793687497046859, 0);
  sqcRZGate(q, 2.5929145014502537, 0);
  sqcRYGate(q, -0.46933618684399736, 1);
  sqcRZGate(q, 0.16225756781787495, 1);
  sqcRYGate(q, -1.691134519535992, 2);
  sqcRZGate(q, 2.2754379794344253, 2);
  sqcRYGate(q, -2.4996409681459837, 3);
  sqcRZGate(q, -1.06762379911411, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.8740192985956108, 0);
  sqcRZGate(q, -0.7401665552527996, 0);
  sqcRYGate(q, 0.12594775941449576, 1);
  sqcRZGate(q, 0.9922479375415413, 1);
  sqcRYGate(q, 0.926634208319256, 2);
  sqcRZGate(q, 2.4756914663791862, 2);
  sqcRYGate(q, 2.5725182376842244, 3);
  sqcRZGate(q, -0.5747812912481098, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.1780713574856465, 0);
  sqcRZGate(q, 1.366986286914429, 0);
  sqcRYGate(q, -1.370839938328805, 1);
  sqcRZGate(q, -2.5337675456002344, 1);
  sqcRYGate(q, -1.9739518131242793, 2);
  sqcRZGate(q, 2.869883468532407, 2);
  sqcRYGate(q, -1.6062226293967061, 3);
  sqcRZGate(q, -0.4154887088600727, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.6104177323951276, 0);
  sqcRZGate(q, 2.0822843989446618, 0);
  sqcRYGate(q, 3.090043717508805, 1);
  sqcRZGate(q, -0.9426224568770323, 1);
  sqcRYGate(q, -1.086501839004029, 2);
  sqcRZGate(q, -0.2634451824387082, 2);
  sqcRYGate(q, 2.8777441234675925, 3);
  sqcRZGate(q, 2.3931548148553348, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9534025117977222, 0);
  sqcRZGate(q, -2.8961583085889635, 0);
  sqcRYGate(q, -2.952651345940763, 1);
  sqcRZGate(q, 2.6226501676903284, 1);
  sqcRYGate(q, -1.514296272090943, 2);
  sqcRZGate(q, 1.151201028626419, 2);
  sqcRYGate(q, 0.221319860168351, 3);
  sqcRZGate(q, -2.031425498800507, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.807142604839928, 0);
  sqcRZGate(q, 0.7818197665158352, 0);
  sqcRYGate(q, -0.4123187331863098, 1);
  sqcRZGate(q, 2.926877781179962, 1);
  sqcRYGate(q, -0.13385471917038938, 2);
  sqcRZGate(q, 3.0552552278450587, 2);
  sqcRYGate(q, 3.092158975537647, 3);
  sqcRZGate(q, -1.0454614146250096, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.0037601893005426885, 0);
  sqcRZGate(q, 2.4224291782505003, 0);
  sqcRYGate(q, -1.7517563073106908, 1);
  sqcRZGate(q, 0.3533690585101032, 1);
  sqcRYGate(q, 1.641120036110306, 2);
  sqcRZGate(q, 2.154009406121645, 2);
  sqcRYGate(q, -1.1032386567707255, 3);
  sqcRZGate(q, 3.0217684676839673, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.9512979207655363, 0);
  sqcRZGate(q, 2.100670285057186, 0);
  sqcRYGate(q, -1.3050732164803547, 1);
  sqcRZGate(q, -2.2289408165235916, 1);
  sqcRYGate(q, 2.617723144614871, 2);
  sqcRZGate(q, -2.816808385411483, 2);
  sqcRYGate(q, -2.5471576148917796, 3);
  sqcRZGate(q, 2.064262791025979, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.6986420689118287, 0);
  sqcRZGate(q, 0.4706225679707768, 0);
  sqcRYGate(q, -1.9823793418339202, 1);
  sqcRZGate(q, -0.9705415549540497, 1);
  sqcRYGate(q, -1.3809626615211341, 2);
  sqcRZGate(q, 0.20037982013582575, 2);
  sqcRYGate(q, 2.9588046313647065, 3);
  sqcRZGate(q, 0.8773525886825696, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.1429577939715054, 0);
  sqcRZGate(q, 0.9886292398226942, 0);
  sqcRYGate(q, 1.9276174566858915, 1);
  sqcRZGate(q, 0.7180622815735811, 1);
  sqcRYGate(q, 2.9889974489100055, 2);
  sqcRZGate(q, 1.2223231718187462, 2);
  sqcRYGate(q, -2.3428854365998086, 3);
  sqcRZGate(q, -2.5966492770452767, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2931024386087824, 0);
  sqcRZGate(q, 2.3134632231511025, 0);
  sqcRYGate(q, 1.5593251656865281, 1);
  sqcRZGate(q, -1.1705287219790292, 1);
  sqcRYGate(q, -1.5077068500338893, 2);
  sqcRZGate(q, -2.0193399924127027, 2);
  sqcRYGate(q, -1.1085820736004335, 3);
  sqcRZGate(q, 2.7323559332873892, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.3343977965343186, 0);
  sqcRZGate(q, 1.6652764538922804, 0);
  sqcRYGate(q, 0.8439181805897294, 1);
  sqcRZGate(q, 2.607037488606612, 1);
  sqcRYGate(q, 2.7546777557008073, 2);
  sqcRZGate(q, 0.6340516413896591, 2);
  sqcRYGate(q, 1.6303321910854562, 3);
  sqcRZGate(q, 2.8067677211086175, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.8011225477822113, 0);
  sqcRZGate(q, -2.873392085522809, 0);
  sqcRYGate(q, -1.2968269295207637, 1);
  sqcRZGate(q, 2.489907621419106, 1);
  sqcRYGate(q, 2.4725174618732404, 2);
  sqcRZGate(q, -0.15855156980701482, 2);
  sqcRYGate(q, -3.052711434978224, 3);
  sqcRZGate(q, 2.15549203137467, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.40671712185007713, 0);
  sqcRZGate(q, -1.9620751834793912, 0);
  sqcRYGate(q, -2.703136156997323, 1);
  sqcRZGate(q, -1.2978011536449297, 1);
  sqcRYGate(q, -1.5169883594169935, 2);
  sqcRZGate(q, 1.6007576460011113, 2);
  sqcRYGate(q, 2.294760630800196, 3);
  sqcRZGate(q, -2.813177674134563, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.041943375232865, 0);
  sqcRZGate(q, 2.40275306076183, 0);
  sqcRYGate(q, 1.322689072371302, 1);
  sqcRZGate(q, 2.5630538309445328, 1);
  sqcRYGate(q, 2.4097689926616015, 2);
  sqcRZGate(q, -0.061286610084740005, 2);
  sqcRYGate(q, 1.3712154414304578, 3);
  sqcRZGate(q, -1.367755884981655, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9839433187807263, 0);
  sqcRZGate(q, -1.4327657684467778, 0);
  sqcRYGate(q, 2.2788377467559817, 1);
  sqcRZGate(q, 2.5171120896176946, 1);
  sqcRYGate(q, -1.8762196997179599, 2);
  sqcRZGate(q, 2.51703084521543, 2);
  sqcRYGate(q, 0.5861253445608278, 3);
  sqcRZGate(q, -1.4943652644409289, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.0887688179670407, 0);
  sqcRZGate(q, 0.8741155320448878, 0);
  sqcRYGate(q, -3.1247175572713957, 1);
  sqcRZGate(q, -2.8866655537749737, 1);
  sqcRYGate(q, 0.3438907964361064, 2);
  sqcRZGate(q, -0.4123520806389661, 2);
  sqcRYGate(q, -2.5670765227024903, 3);
  sqcRZGate(q, -2.1034343471801806, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.6793627485546097, 0);
  sqcRZGate(q, -1.5498643274036799, 0);
  sqcRYGate(q, 0.7331670780550059, 1);
  sqcRZGate(q, 2.589386928887621, 1);
  sqcRYGate(q, -2.1069375865435225, 2);
  sqcRZGate(q, 2.4113793310387868, 2);
  sqcRYGate(q, -3.133993765332187, 3);
  sqcRZGate(q, -2.5744665670063314, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4721525181681139, 0);
  sqcRZGate(q, 1.0914171754239084, 0);
  sqcRYGate(q, 1.880451158256607, 1);
  sqcRZGate(q, -0.844845149351187, 1);
  sqcRYGate(q, -1.204609391089103, 2);
  sqcRZGate(q, -3.010988889654739, 2);
  sqcRYGate(q, 2.7102674771644586, 3);
  sqcRZGate(q, -0.914987446111045, 3);

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
