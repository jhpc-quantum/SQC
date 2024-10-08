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

  sqcRYGate(q, -2.1522775176124695, 0);
  sqcRZGate(q, -1.0710047990550233, 0);
  sqcRYGate(q, -1.2537053861854006, 1);
  sqcRZGate(q, 2.5888540609927233, 1);
  sqcRYGate(q, -1.0051652995935807, 2);
  sqcRZGate(q, 1.3744787498996438, 2);
  sqcRYGate(q, -3.0248841139303733, 3);
  sqcRZGate(q, 0.9969693879651407, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.3742595939660704, 0);
  sqcRZGate(q, 0.7774596701371221, 0);
  sqcRYGate(q, -2.896659084719812, 1);
  sqcRZGate(q, 0.3878236376457291, 1);
  sqcRYGate(q, 1.906002400581709, 2);
  sqcRZGate(q, -0.4958170227323145, 2);
  sqcRYGate(q, -1.0826105526022465, 3);
  sqcRZGate(q, 0.6402199244178421, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.723517269661851, 0);
  sqcRZGate(q, 1.573188063491619, 0);
  sqcRYGate(q, -1.9154866397629942, 1);
  sqcRZGate(q, 2.4971147576313064, 1);
  sqcRYGate(q, -0.8705322012459781, 2);
  sqcRZGate(q, -0.8609835436952217, 2);
  sqcRYGate(q, 1.585416259436444, 3);
  sqcRZGate(q, 1.700107713359972, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.628442379117603, 0);
  sqcRZGate(q, -0.36484357754647784, 0);
  sqcRYGate(q, -0.600155713583665, 1);
  sqcRZGate(q, -2.5343899626023054, 1);
  sqcRYGate(q, -1.7597624912848175, 2);
  sqcRZGate(q, 1.2069776439394804, 2);
  sqcRYGate(q, -2.698370465740493, 3);
  sqcRZGate(q, 0.2790390865380852, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.19703167068451055, 0);
  sqcRZGate(q, 2.309406309922342, 0);
  sqcRYGate(q, 0.2075071544404747, 1);
  sqcRZGate(q, 1.842254072030193, 1);
  sqcRYGate(q, 1.4117993355335583, 2);
  sqcRZGate(q, -2.9074116016495557, 2);
  sqcRYGate(q, -0.3873670326848541, 3);
  sqcRZGate(q, -0.915869418189102, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.39477375194831255, 0);
  sqcRZGate(q, -0.41622616099783816, 0);
  sqcRYGate(q, -2.9156134478077784, 1);
  sqcRZGate(q, -0.527549644971142, 1);
  sqcRYGate(q, 0.6847352020892821, 2);
  sqcRZGate(q, 3.133517699894507, 2);
  sqcRYGate(q, 1.0751420622275027, 3);
  sqcRZGate(q, 2.6153119894038532, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.1059958645379733, 0);
  sqcRZGate(q, 1.155719832656069, 0);
  sqcRYGate(q, -1.4920035940429122, 1);
  sqcRZGate(q, -3.135839707996599, 1);
  sqcRYGate(q, -2.5920872146307707, 2);
  sqcRZGate(q, -2.09775601345478, 2);
  sqcRYGate(q, -1.6241229441728775, 3);
  sqcRZGate(q, 0.576864447583638, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.17522587566862846, 0);
  sqcRZGate(q, 0.5650094378059913, 0);
  sqcRYGate(q, 1.9639521559690563, 1);
  sqcRZGate(q, -3.1390186899402504, 1);
  sqcRYGate(q, -1.3812346939958875, 2);
  sqcRZGate(q, 2.420071373041532, 2);
  sqcRYGate(q, 0.9362460310019971, 3);
  sqcRZGate(q, 2.9426807642237067, 3);

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
