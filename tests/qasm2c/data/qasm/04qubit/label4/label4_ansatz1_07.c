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

  sqcRYGate(q, 2.05539982025541, 0);
  sqcRZGate(q, 1.1202851646827698, 0);
  sqcRYGate(q, 0.975883804065897, 1);
  sqcRZGate(q, -0.1552198083751453, 1);
  sqcRYGate(q, -0.7222508803531641, 2);
  sqcRZGate(q, 1.371390461056599, 2);
  sqcRYGate(q, 1.5586119101970972, 3);
  sqcRZGate(q, -2.852312653567632, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3706370671478805, 0);
  sqcRZGate(q, -0.6390897691196944, 0);
  sqcRYGate(q, -1.4687075624875314, 1);
  sqcRZGate(q, 2.6771895955250007, 1);
  sqcRYGate(q, -1.876006656598718, 2);
  sqcRZGate(q, 3.0043863949813523, 2);
  sqcRYGate(q, 0.03647911466749742, 3);
  sqcRZGate(q, -0.9066465462122268, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0305272019390506, 0);
  sqcRZGate(q, 2.3780582041279583, 0);
  sqcRYGate(q, -1.685117236143089, 1);
  sqcRZGate(q, -0.1973078839266549, 1);
  sqcRYGate(q, -0.3436946243717067, 2);
  sqcRZGate(q, -2.7055762203822193, 2);
  sqcRYGate(q, -0.3234087868696919, 3);
  sqcRZGate(q, -2.9532969898636945, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.010087055222419, 0);
  sqcRZGate(q, 1.9187106605406756, 0);
  sqcRYGate(q, 0.537877093358138, 1);
  sqcRZGate(q, -1.5181754776338445, 1);
  sqcRYGate(q, 3.129979752609286, 2);
  sqcRZGate(q, -2.2415438262051737, 2);
  sqcRYGate(q, -0.6661555336694507, 3);
  sqcRZGate(q, -2.343506439730477, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6767049896158692, 0);
  sqcRZGate(q, -2.650537040489225, 0);
  sqcRYGate(q, -1.4218651836907767, 1);
  sqcRZGate(q, -2.2796113659211796, 1);
  sqcRYGate(q, 0.9747814753040203, 2);
  sqcRZGate(q, 2.2829020384999987, 2);
  sqcRYGate(q, -2.346229040400377, 3);
  sqcRZGate(q, 2.4669666685319203, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.972267768052393, 0);
  sqcRZGate(q, 0.9120036483891029, 0);
  sqcRYGate(q, -1.7644886532462758, 1);
  sqcRZGate(q, 1.2070519134717586, 1);
  sqcRYGate(q, 2.3886010696675095, 2);
  sqcRZGate(q, 1.8181157803736996, 2);
  sqcRYGate(q, 1.7759019318499922, 3);
  sqcRZGate(q, 1.8392405603640682, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5911928599918834, 0);
  sqcRZGate(q, -2.1860059397379614, 0);
  sqcRYGate(q, -0.8624492941265665, 1);
  sqcRZGate(q, 0.6569038320967318, 1);
  sqcRYGate(q, -1.3900977636772138, 2);
  sqcRZGate(q, 2.1427487916713654, 2);
  sqcRYGate(q, -0.41699447020001656, 3);
  sqcRZGate(q, -2.051837212873732, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1638149356644476, 0);
  sqcRZGate(q, 0.534216939238549, 0);
  sqcRYGate(q, 0.20808026208541186, 1);
  sqcRZGate(q, 2.977437034912855, 1);
  sqcRYGate(q, -1.9356411925968162, 2);
  sqcRZGate(q, 1.7605783774052863, 2);
  sqcRYGate(q, -0.7046219684096333, 3);
  sqcRZGate(q, -1.4574475732676064, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5789371530949987, 0);
  sqcRZGate(q, -0.5530481217370843, 0);
  sqcRYGate(q, -2.3432587978108836, 1);
  sqcRZGate(q, 1.6720103046874035, 1);
  sqcRYGate(q, 1.6829300338586313, 2);
  sqcRZGate(q, -1.5945092104795604, 2);
  sqcRYGate(q, 2.290245561596303, 3);
  sqcRZGate(q, 2.111452442244507, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.2573141378252579, 0);
  sqcRZGate(q, 3.129624883914085, 0);
  sqcRYGate(q, -2.2583246956096277, 1);
  sqcRZGate(q, -3.0810946184524326, 1);
  sqcRYGate(q, 2.767385082466188, 2);
  sqcRZGate(q, 0.05201167209936842, 2);
  sqcRYGate(q, -2.3409296958903085, 3);
  sqcRZGate(q, 1.6453208702289999, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6123628991850385, 0);
  sqcRZGate(q, 2.7840224062795236, 0);
  sqcRYGate(q, 1.4053237898844966, 1);
  sqcRZGate(q, -0.18136050621255076, 1);
  sqcRYGate(q, -3.088141360250879, 2);
  sqcRZGate(q, -1.9174114163236942, 2);
  sqcRYGate(q, 2.9836069141122517, 3);
  sqcRZGate(q, -3.058164691782091, 3);

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
