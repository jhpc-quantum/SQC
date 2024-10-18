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

  sqcRYGate(q, -0.5660686375595363, 0);
  sqcRYGate(q, -2.5661528149500565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1739712676920835, 0);
  sqcRYGate(q, 0.9238521508896749, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.46671515078573833, 2);
  sqcRYGate(q, -2.592651056238616, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.66725158188052, 2);
  sqcRYGate(q, -1.97003838487618, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.227214067311632, 0);
  sqcRYGate(q, -2.3250364636652114, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9192938507853703, 0);
  sqcRYGate(q, -1.4655751858389419, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5202334920431808, 1);
  sqcRYGate(q, 0.16464175231712583, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2796245801168817, 1);
  sqcRYGate(q, 2.37103101842498, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4416961234947303, 0);
  sqcRYGate(q, -2.1991973362162476, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.131049096450884, 0);
  sqcRYGate(q, 0.7725119360424042, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5664703546270108, 1);
  sqcRYGate(q, -1.4413784789378976, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0466650879767463, 1);
  sqcRYGate(q, -2.663351290188151, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7401036593504036, 0);
  sqcRYGate(q, 0.9001911183876485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3190065142650758, 0);
  sqcRYGate(q, 2.2096735372193503, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.034043023364593, 2);
  sqcRYGate(q, 2.93396142459142, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.146638987148359, 2);
  sqcRYGate(q, -2.058795049461775, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22281874533037804, 0);
  sqcRYGate(q, 0.9405150878849868, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9931318312216842, 0);
  sqcRYGate(q, -0.41051452015951556, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7491238661364766, 1);
  sqcRYGate(q, -2.8316009068034993, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.07258551711138526, 1);
  sqcRYGate(q, -0.2731207628276161, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1333679764103772, 0);
  sqcRYGate(q, 1.6926067657084412, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3344923689206736, 0);
  sqcRYGate(q, 2.8754077219063436, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4479691263631107, 1);
  sqcRYGate(q, -2.9319202065227614, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5446660728972605, 1);
  sqcRYGate(q, -1.0447144735424923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2736575786601398, 0);
  sqcRYGate(q, 0.8036652685892873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9451842701855933, 0);
  sqcRYGate(q, -2.7184668900746107, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1732704489311776, 2);
  sqcRYGate(q, -3.0293041451442924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4270907700729305, 2);
  sqcRYGate(q, -1.135544914946042, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6720788743418764, 0);
  sqcRYGate(q, 0.4745492532366029, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.936204710042341, 0);
  sqcRYGate(q, 0.2686070072145119, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.310598954173067, 1);
  sqcRYGate(q, 0.342596375637949, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3605671449720138, 1);
  sqcRYGate(q, -1.9688767245139243, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.262842166480159, 0);
  sqcRYGate(q, -1.1620502662256795, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.195322624924801, 0);
  sqcRYGate(q, -0.1638669487024166, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.18559663565336035, 1);
  sqcRYGate(q, -1.6660262230401166, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.547634798468895, 1);
  sqcRYGate(q, -2.97205102676562, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4481964628549138, 0);
  sqcRYGate(q, -0.6266551729285255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0192459608216473, 0);
  sqcRYGate(q, 1.3013493315104485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9861117443822924, 2);
  sqcRYGate(q, 0.3400228347345928, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5364724483373804, 2);
  sqcRYGate(q, -2.5951850978436704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5200544459925025, 0);
  sqcRYGate(q, 1.0948531291479924, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.795140579382954, 0);
  sqcRYGate(q, 1.0041101079887496, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5272184518760595, 1);
  sqcRYGate(q, -2.8250970893803418, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9287104001832128, 1);
  sqcRYGate(q, 3.0306597964968214, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.03892351565116137, 0);
  sqcRYGate(q, 1.9522528434825173, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7986908399825605, 0);
  sqcRYGate(q, 0.3221816408693237, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9111715607175417, 1);
  sqcRYGate(q, -2.247387431848354, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.497696014205611, 1);
  sqcRYGate(q, 2.743983821151694, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.006488618767574293, 0);
  sqcRYGate(q, -0.9614026462065697, 1);
  sqcRYGate(q, 0.9846597777804078, 2);
  sqcRYGate(q, 1.8566528159275053, 3);

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
