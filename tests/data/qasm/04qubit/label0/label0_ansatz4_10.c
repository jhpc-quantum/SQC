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

  sqcRYGate(q, 0.12970195369870763, 0);
  sqcRZGate(q, 1.9970712394446573, 0);
  sqcRYGate(q, 1.5057660147255332, 1);
  sqcRZGate(q, 2.8649514240365077, 1);
  sqcRYGate(q, 0.6694474205010499, 2);
  sqcRZGate(q, 1.445401536463497, 2);
  sqcRYGate(q, 2.7399425702620226, 3);
  sqcRZGate(q, -1.5728868306050403, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.0650240693154679, 0);
  sqcRZGate(q, -1.2182422532892636, 0);
  sqcRYGate(q, -2.2264679167398183, 1);
  sqcRZGate(q, 0.09372701859831523, 1);
  sqcRYGate(q, 2.73691487907078, 2);
  sqcRZGate(q, -1.888713491298594, 2);
  sqcRYGate(q, -3.1188687633505787, 3);
  sqcRZGate(q, 0.06757815145004908, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3106297449074757, 0);
  sqcRZGate(q, 2.854876811067289, 0);
  sqcRYGate(q, -1.8166780743011088, 1);
  sqcRZGate(q, -2.1167132586690514, 1);
  sqcRYGate(q, 2.6543885241835428, 2);
  sqcRZGate(q, 1.821999952711521, 2);
  sqcRYGate(q, -2.9324293083496062, 3);
  sqcRZGate(q, 2.1192897016399908, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5037245353431334, 0);
  sqcRZGate(q, -2.1952312057455816, 0);
  sqcRYGate(q, -1.1506642573605221, 1);
  sqcRZGate(q, 1.7136556452021472, 1);
  sqcRYGate(q, -3.024126064013628, 2);
  sqcRZGate(q, -0.11149821964520384, 2);
  sqcRYGate(q, -0.09355621191040657, 3);
  sqcRZGate(q, -2.418634288033934, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.347942238182127, 0);
  sqcRZGate(q, -1.857963762433203, 0);
  sqcRYGate(q, 1.0079473991310355, 1);
  sqcRZGate(q, 1.6384607837247982, 1);
  sqcRYGate(q, -3.027009656101626, 2);
  sqcRZGate(q, -0.8995143363181892, 2);
  sqcRYGate(q, 2.883885414443425, 3);
  sqcRZGate(q, 2.258785232536363, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.464415665791988, 0);
  sqcRZGate(q, 2.3491333939046104, 0);
  sqcRYGate(q, 0.6623898082798902, 1);
  sqcRZGate(q, 2.2835941324488775, 1);
  sqcRYGate(q, -0.17510156283813852, 2);
  sqcRZGate(q, 1.4034247283096004, 2);
  sqcRYGate(q, -0.5235267064940361, 3);
  sqcRZGate(q, 1.2523455522253188, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2365027555025243, 0);
  sqcRZGate(q, -2.8806122506988747, 0);
  sqcRYGate(q, -1.9359846082886862, 1);
  sqcRZGate(q, -2.5131347358826637, 1);
  sqcRYGate(q, 2.4247310335442016, 2);
  sqcRZGate(q, 1.7118262497204155, 2);
  sqcRYGate(q, -0.8349999250811108, 3);
  sqcRZGate(q, 1.9553523073763737, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8795167450033144, 0);
  sqcRZGate(q, -0.15760376818957852, 0);
  sqcRYGate(q, -0.1747339206807608, 1);
  sqcRZGate(q, 2.428221342453962, 1);
  sqcRYGate(q, -1.258635559289452, 2);
  sqcRZGate(q, 0.8613217250844888, 2);
  sqcRYGate(q, 0.012013836303652603, 3);
  sqcRZGate(q, 1.9845629855795728, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5902559956916154, 0);
  sqcRZGate(q, 0.2228825921286816, 0);
  sqcRYGate(q, 0.16393003556489993, 1);
  sqcRZGate(q, 1.3711346034002516, 1);
  sqcRYGate(q, -2.1935150950453246, 2);
  sqcRZGate(q, -0.878106914114866, 2);
  sqcRYGate(q, -2.7925662667687896, 3);
  sqcRZGate(q, -1.6270137836932967, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.757685409563735, 0);
  sqcRZGate(q, -2.975694670089499, 0);
  sqcRYGate(q, -0.7024205474596074, 1);
  sqcRZGate(q, -2.522648204916608, 1);
  sqcRYGate(q, -0.3851462827975052, 2);
  sqcRZGate(q, -0.6576242001520775, 2);
  sqcRYGate(q, -0.5958643493000582, 3);
  sqcRZGate(q, -2.053222069474913, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.14685763602997282, 0);
  sqcRZGate(q, 0.34305467736390427, 0);
  sqcRYGate(q, -0.834867122629115, 1);
  sqcRZGate(q, 0.7362238395863052, 1);
  sqcRYGate(q, -2.1901954277509694, 2);
  sqcRZGate(q, -0.6366805681263097, 2);
  sqcRYGate(q, 0.3816516957177536, 3);
  sqcRZGate(q, 0.8706932931336915, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9253790674531297, 0);
  sqcRZGate(q, -1.7301998530957372, 0);
  sqcRYGate(q, -3.1287499466232265, 1);
  sqcRZGate(q, 2.886915584669752, 1);
  sqcRYGate(q, -0.5539553698748917, 2);
  sqcRZGate(q, 0.6805390484790639, 2);
  sqcRYGate(q, 0.23980253240745067, 3);
  sqcRZGate(q, -2.0259911789855902, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.30006138751176026, 0);
  sqcRZGate(q, -2.424585124635225, 0);
  sqcRYGate(q, -1.0660875735376272, 1);
  sqcRZGate(q, 0.3115759690501259, 1);
  sqcRYGate(q, -0.49219264624518577, 2);
  sqcRZGate(q, -0.8121124931920022, 2);
  sqcRYGate(q, -1.8094262940011852, 3);
  sqcRZGate(q, 2.897310982912726, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6112386380593793, 0);
  sqcRZGate(q, -1.719776470743805, 0);
  sqcRYGate(q, 1.8972763083816622, 1);
  sqcRZGate(q, -0.30132408044469994, 1);
  sqcRYGate(q, -3.052136716893291, 2);
  sqcRZGate(q, 1.1842366222554594, 2);
  sqcRYGate(q, -3.080395708372174, 3);
  sqcRZGate(q, -1.247545057571393, 3);

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
