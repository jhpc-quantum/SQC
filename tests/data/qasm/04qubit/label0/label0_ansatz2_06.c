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

  sqcRYGate(q, 2.826012376246648, 0);
  sqcRZGate(q, 2.4324076531112073, 0);
  sqcRYGate(q, 0.3069611852106595, 1);
  sqcRZGate(q, 2.5897563893520172, 1);
  sqcRYGate(q, -0.2829260866385086, 2);
  sqcRZGate(q, 1.7073926047373424, 2);
  sqcRYGate(q, -0.263066906064398, 3);
  sqcRZGate(q, 1.4126827581541868, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.8314243930127398, 0);
  sqcRZGate(q, -2.9359364797687086, 0);
  sqcRYGate(q, -1.317791691437126, 1);
  sqcRZGate(q, -2.6924518815790606, 1);
  sqcRYGate(q, 1.9861931546841574, 2);
  sqcRZGate(q, 1.9644681384623723, 2);
  sqcRYGate(q, -0.6256853630456555, 3);
  sqcRZGate(q, 2.21482376601874, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.3901441599246709, 0);
  sqcRZGate(q, 0.30025802898277565, 0);
  sqcRYGate(q, -0.34892350386698734, 1);
  sqcRZGate(q, 2.2661997430810477, 1);
  sqcRYGate(q, -1.275041520720273, 2);
  sqcRZGate(q, 0.20978857406093174, 2);
  sqcRYGate(q, -0.17470464504770344, 3);
  sqcRZGate(q, 1.8547753116798662, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.47206783568354105, 0);
  sqcRZGate(q, 0.18383239282630456, 0);
  sqcRYGate(q, -0.40966851366074186, 1);
  sqcRZGate(q, 1.027634609534821, 1);
  sqcRYGate(q, -2.8254274905694703, 2);
  sqcRZGate(q, -0.5689401360940327, 2);
  sqcRYGate(q, 2.9975408250849127, 3);
  sqcRZGate(q, -1.4898736565739796, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.044159828182353, 0);
  sqcRZGate(q, -2.421129819762643, 0);
  sqcRYGate(q, -0.7375155910756852, 1);
  sqcRZGate(q, -2.2856188073775567, 1);
  sqcRYGate(q, -0.51337943686113, 2);
  sqcRZGate(q, -0.47889252726755677, 2);
  sqcRYGate(q, -0.4531807260389527, 3);
  sqcRZGate(q, -1.6629574597590695, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.1116265814039996, 0);
  sqcRZGate(q, 0.3921590206403542, 0);
  sqcRYGate(q, -1.2707812713626048, 1);
  sqcRZGate(q, 0.929519554895145, 1);
  sqcRYGate(q, -1.9692847725317644, 2);
  sqcRZGate(q, -1.052415329937471, 2);
  sqcRYGate(q, 0.9318287826416196, 3);
  sqcRZGate(q, 1.1937606351809724, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.455595746810647, 0);
  sqcRZGate(q, -1.8676456851897518, 0);
  sqcRYGate(q, -2.6525350533331973, 1);
  sqcRZGate(q, 2.644275096947349, 1);
  sqcRYGate(q, -0.37179286434085407, 2);
  sqcRZGate(q, 0.08956156835710873, 2);
  sqcRYGate(q, -0.07425744382032295, 3);
  sqcRZGate(q, -1.86109182326178, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.5431969471953723, 0);
  sqcRZGate(q, -2.7064329350075615, 0);
  sqcRYGate(q, -0.9156056437553406, 1);
  sqcRZGate(q, 0.45057901451301063, 1);
  sqcRYGate(q, -0.4879394107089077, 2);
  sqcRZGate(q, -1.2947121666486532, 2);
  sqcRYGate(q, -2.426491426587038, 3);
  sqcRZGate(q, 2.6026984679314893, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.8116028333774836, 0);
  sqcRZGate(q, -1.6571975472495886, 0);
  sqcRYGate(q, 1.9191435907306413, 1);
  sqcRZGate(q, 0.25482531825845095, 1);
  sqcRYGate(q, 2.9550609389797104, 2);
  sqcRZGate(q, 1.6688808690732044, 2);
  sqcRYGate(q, -3.12847447697646, 3);
  sqcRZGate(q, -0.8974889011298806, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.2584414159776228, 0);
  sqcRZGate(q, -0.3742557766587224, 0);
  sqcRYGate(q, 2.6920249958758586, 1);
  sqcRZGate(q, 0.7779952207104389, 1);
  sqcRYGate(q, 2.780262439322656, 2);
  sqcRZGate(q, 0.5690740075095986, 2);
  sqcRYGate(q, 0.6491117563504654, 3);
  sqcRZGate(q, 0.3923348300126997, 3);

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
