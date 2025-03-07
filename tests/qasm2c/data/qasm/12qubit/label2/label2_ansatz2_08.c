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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -1.5707992763821894, 0);
  sqcRZGate(q, -0.4811517475298298, 0);
  sqcRYGate(q, -1.5703354418664401, 1);
  sqcRZGate(q, 2.154963597918054, 1);
  sqcRYGate(q, -1.5705932376229637, 2);
  sqcRZGate(q, -4.583098609001412e-05, 2);
  sqcRYGate(q, -1.5095900116076504, 3);
  sqcRZGate(q, -2.1693913588112563, 3);
  sqcRYGate(q, 3.1415860118580254, 4);
  sqcRZGate(q, 1.4413099349751413, 4);
  sqcRYGate(q, -1.570740017874604, 5);
  sqcRZGate(q, 8.231749211784489e-05, 5);
  sqcRYGate(q, 3.141222753691503, 6);
  sqcRZGate(q, 2.1169896308695626, 6);
  sqcRYGate(q, -4.871755587387838e-06, 7);
  sqcRZGate(q, -0.36203613378476374, 7);
  sqcRYGate(q, 0.00014488694627257104, 8);
  sqcRZGate(q, 1.9926363897315353, 8);
  sqcRYGate(q, -3.1415896122326616, 9);
  sqcRZGate(q, 1.336868566815535, 9);
  sqcRYGate(q, -2.0610345335870818e-05, 10);
  sqcRZGate(q, 1.4053687628768978, 10);
  sqcRYGate(q, 3.1415681837404246, 11);
  sqcRZGate(q, -1.955165847113207, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 4.227755408491235e-05, 0);
  sqcRZGate(q, 2.2598332993391717, 0);
  sqcRYGate(q, -3.1415239933554537, 1);
  sqcRZGate(q, -2.5587749886272726, 1);
  sqcRYGate(q, -2.588983923638956, 2);
  sqcRZGate(q, 1.5705249598677424, 2);
  sqcRYGate(q, -0.0011003769730967166, 3);
  sqcRZGate(q, 0.184979761418803, 3);
  sqcRYGate(q, 0.06555257765865452, 4);
  sqcRZGate(q, 2.378245220937012, 4);
  sqcRYGate(q, 1.0174675078503057, 5);
  sqcRZGate(q, -1.5708694380438213, 5);
  sqcRYGate(q, -1.4827304104557306, 6);
  sqcRZGate(q, 0.35648844803713675, 6);
  sqcRYGate(q, -1.892519914100746, 7);
  sqcRZGate(q, -2.966803956475819, 7);
  sqcRYGate(q, -1.2392662274152144e-07, 8);
  sqcRZGate(q, 0.9295684473421829, 8);
  sqcRYGate(q, 3.1411103050542994, 9);
  sqcRZGate(q, 1.5703318399849202, 9);
  sqcRYGate(q, -0.0003703752555352935, 10);
  sqcRZGate(q, 0.20086749739296297, 10);
  sqcRYGate(q, -0.0001395379567101784, 11);
  sqcRZGate(q, 1.4118729065140752, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.139587644626517, 0);
  sqcRZGate(q, -0.719894659002062, 0);
  sqcRYGate(q, -2.950915498173292, 1);
  sqcRZGate(q, 2.054865728915468, 1);
  sqcRYGate(q, -2.15570805976352, 2);
  sqcRZGate(q, -0.0007408501338586939, 2);
  sqcRYGate(q, -3.1165488350477153, 3);
  sqcRZGate(q, 2.723349665508479, 3);
  sqcRYGate(q, 3.1280235710836815, 4);
  sqcRZGate(q, -1.674147276216985, 4);
  sqcRYGate(q, -1.9827055953754238, 5);
  sqcRZGate(q, 0.0002165697295515301, 5);
  sqcRYGate(q, 0.3076718228152055, 6);
  sqcRZGate(q, 2.073847929517176, 6);
  sqcRYGate(q, -1.7982942207641592, 7);
  sqcRZGate(q, 0.7559522972406417, 7);
  sqcRYGate(q, -3.141516138708075, 8);
  sqcRZGate(q, 0.6182832116254042, 8);
  sqcRYGate(q, 0.001824802027552002, 9);
  sqcRZGate(q, -1.5445654072633108, 9);
  sqcRYGate(q, -0.00023839459988187202, 10);
  sqcRZGate(q, 1.488473561053003, 10);
  sqcRYGate(q, 0.001473997635421228, 11);
  sqcRZGate(q, 2.082109794389692, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.1405776419091844, 0);
  sqcRZGate(q, 2.2148403665954777, 0);
  sqcRYGate(q, -3.051495741462314, 1);
  sqcRZGate(q, -1.0524785649700292, 1);
  sqcRYGate(q, 1.5711893912740118, 2);
  sqcRZGate(q, -1.2721531956299308, 2);
  sqcRYGate(q, 1.574528503317702, 3);
  sqcRZGate(q, -2.5508704794336743, 3);
  sqcRYGate(q, -3.13593940486484, 4);
  sqcRZGate(q, 3.046315437669333, 4);
  sqcRYGate(q, -1.5709883424200375, 5);
  sqcRZGate(q, -0.8231097727934586, 5);
  sqcRYGate(q, -2.382563586154161, 6);
  sqcRZGate(q, 1.4712992508271063, 6);
  sqcRYGate(q, 2.735107458962531, 7);
  sqcRZGate(q, 1.011346514480434, 7);
  sqcRYGate(q, -1.5708982077497107, 8);
  sqcRZGate(q, -3.141525122347608, 8);
  sqcRYGate(q, -1.5707496438087651, 9);
  sqcRZGate(q, 1.3909589125810253, 9);
  sqcRYGate(q, 3.093900420109256, 10);
  sqcRZGate(q, 2.144724612518917, 10);
  sqcRYGate(q, -2.9114424603312377, 11);
  sqcRZGate(q, -2.8377047870761163, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 2.117106616185583, 0);
  sqcRZGate(q, 1.5446499657555015, 0);
  sqcRYGate(q, -2.117668610212084, 1);
  sqcRZGate(q, 2.420705503521759, 1);
  sqcRYGate(q, 1.5708075764222176, 2);
  sqcRZGate(q, 3.141576607436297, 2);
  sqcRYGate(q, -1.5708034325842999, 3);
  sqcRZGate(q, 2.0182350665819397, 3);
  sqcRYGate(q, 4.93627706779501e-06, 4);
  sqcRZGate(q, -1.8524857846277907, 4);
  sqcRYGate(q, -1.5687638239824646, 5);
  sqcRZGate(q, -0.0001824422645324973, 5);
  sqcRYGate(q, -4.419583704252251e-05, 6);
  sqcRZGate(q, -2.8520985359585116, 6);
  sqcRYGate(q, 3.736003979870617e-05, 7);
  sqcRZGate(q, -0.9265059659848865, 7);
  sqcRYGate(q, 1.5707573861376145, 8);
  sqcRZGate(q, 1.6231056658072491, 8);
  sqcRYGate(q, -3.141482378829776, 9);
  sqcRZGate(q, -2.2197115369807, 9);
  sqcRYGate(q, -9.120013126917569e-07, 10);
  sqcRZGate(q, -0.5640544133709774, 10);
  sqcRYGate(q, -1.1793901401437132e-05, 11);
  sqcRZGate(q, -0.29827158391122044, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -1.546514138080794, 0);
  sqcRZGate(q, 0.807293861041549, 0);
  sqcRYGate(q, -0.03604931194514395, 1);
  sqcRZGate(q, 0.15911795735343365, 1);
  sqcRYGate(q, -1.8778800484404439, 2);
  sqcRZGate(q, 3.1214425611435437, 2);
  sqcRYGate(q, -8.984115324572883e-06, 3);
  sqcRZGate(q, 2.6618209077926003, 3);
  sqcRYGate(q, -7.923817998620752e-06, 4);
  sqcRZGate(q, 1.1049998529788327, 4);
  sqcRYGate(q, 0.30710103002176586, 5);
  sqcRZGate(q, -1.512230116942372, 5);
  sqcRYGate(q, -3.141547619153489, 6);
  sqcRZGate(q, 2.069083653207031, 6);
  sqcRYGate(q, 3.6219903704558865e-05, 7);
  sqcRZGate(q, -2.774060186587084, 7);
  sqcRYGate(q, -3.084093413141529, 8);
  sqcRZGate(q, 1.6278612601854014, 8);
  sqcRYGate(q, -2.9109527056734623, 9);
  sqcRZGate(q, 2.69286648703477, 9);
  sqcRYGate(q, 1.5712474407139227, 10);
  sqcRZGate(q, 1.6536467498231624, 10);
  sqcRYGate(q, -1.5698072829713479, 11);
  sqcRZGate(q, 3.1058539085536148, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.140663386815217, 0);
  sqcRZGate(q, -0.7856272234151634, 0);
  sqcRYGate(q, -0.0009858006212386528, 1);
  sqcRZGate(q, 0.6016828622614456, 1);
  sqcRYGate(q, -3.141584617155093, 2);
  sqcRZGate(q, -1.1726794261764226, 2);
  sqcRYGate(q, -3.14077885070987, 3);
  sqcRZGate(q, 1.5383606656914337, 3);
  sqcRYGate(q, -3.1415763875962024, 4);
  sqcRZGate(q, 0.14100588587741228, 4);
  sqcRYGate(q, -0.0007903346157335209, 5);
  sqcRZGate(q, 3.131560977311095, 5);
  sqcRYGate(q, -0.0025904042038691344, 6);
  sqcRZGate(q, -1.4496826333562032, 6);
  sqcRYGate(q, -3.1392826150200532, 7);
  sqcRZGate(q, 1.4876060556173931, 7);
  sqcRYGate(q, -0.22968095354804338, 8);
  sqcRZGate(q, 0.1621634195620025, 8);
  sqcRYGate(q, 1.7952302688378146, 9);
  sqcRZGate(q, -1.5718332827421713, 9);
  sqcRYGate(q, -2.9138002511251573, 10);
  sqcRZGate(q, 1.663600311671144, 10);
  sqcRYGate(q, -1.590373235909167, 11);
  sqcRZGate(q, -2.7617058360055045, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.5440346631151023, 0);
  sqcRZGate(q, -0.9184609887379418, 0);
  sqcRYGate(q, -1.6191552909687703, 1);
  sqcRZGate(q, -0.90869265385787, 1);
  sqcRYGate(q, 0.05273325005580087, 2);
  sqcRZGate(q, 2.6667502791225104, 2);
  sqcRYGate(q, 1.5654450444678139, 3);
  sqcRZGate(q, -2.708767939032127, 3);
  sqcRYGate(q, 3.130430435508116, 4);
  sqcRZGate(q, 1.7007636523952794, 4);
  sqcRYGate(q, 1.571939076186018, 5);
  sqcRZGate(q, 1.0943654556176952, 5);
  sqcRYGate(q, 2.144385342641944, 6);
  sqcRZGate(q, 0.10833811675682802, 6);
  sqcRYGate(q, -1.2297564486741663, 7);
  sqcRZGate(q, 0.04654662672173766, 7);
  sqcRYGate(q, -0.0037350048803813573, 8);
  sqcRZGate(q, 0.5064465606506687, 8);
  sqcRYGate(q, -0.3880870908370976, 9);
  sqcRZGate(q, -1.5632882575989158, 9);
  sqcRYGate(q, 1.1858152245671407, 10);
  sqcRZGate(q, 1.5785540226761852, 10);
  sqcRYGate(q, 1.501362814471408, 11);
  sqcRZGate(q, 0.13222986042983464, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -1.5334001369966568, 0);
  sqcRZGate(q, 1.932764216616643, 0);
  sqcRYGate(q, 1.6081814630050797, 1);
  sqcRZGate(q, 1.8853416108031853, 1);
  sqcRYGate(q, 0.0002752115278781275, 2);
  sqcRZGate(q, 0.7837181879168005, 2);
  sqcRYGate(q, -3.1415650293356476, 3);
  sqcRZGate(q, 0.43828222947524154, 3);
  sqcRYGate(q, -0.002586775836094095, 4);
  sqcRZGate(q, -2.762474737270474, 4);
  sqcRYGate(q, -3.1409019369502045, 5);
  sqcRZGate(q, -2.6349876935988044, 5);
  sqcRYGate(q, 1.563264571951179, 6);
  sqcRZGate(q, 0.058634922904622584, 6);
  sqcRYGate(q, 1.562923451630775, 7);
  sqcRZGate(q, 0.03574701075862752, 7);
  sqcRYGate(q, -3.1414217715780715, 8);
  sqcRZGate(q, 2.4299866977919606, 8);
  sqcRYGate(q, 1.570925687900349, 9);
  sqcRZGate(q, -1.3983841065054186, 9);
  sqcRYGate(q, -1.5706859244760052, 10);
  sqcRZGate(q, -1.489452080778509, 10);
  sqcRYGate(q, 1.5709116361555286, 11);
  sqcRZGate(q, 1.6215576175871678, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.137054529664179, 0);
  sqcRZGate(q, -2.9476487741220745, 0);
  sqcRYGate(q, -3.137138271229964, 1);
  sqcRZGate(q, 0.5369137802429638, 1);
  sqcRYGate(q, 6.84954467203504e-05, 2);
  sqcRZGate(q, 2.413909155670801, 2);
  sqcRYGate(q, 1.5708553071410378, 3);
  sqcRZGate(q, -0.9694509169339222, 3);
  sqcRYGate(q, 1.5686347139071595, 4);
  sqcRZGate(q, 2.3724313850433303, 4);
  sqcRYGate(q, 0.00014436334043121948, 5);
  sqcRZGate(q, -0.9657697343854811, 5);
  sqcRYGate(q, -2.7876513583022056, 6);
  sqcRZGate(q, -0.4769070138383239, 6);
  sqcRYGate(q, -2.53152640652612, 7);
  sqcRZGate(q, -0.3429126140060248, 7);
  sqcRYGate(q, 1.5897650731442026, 8);
  sqcRZGate(q, 1.6312727920569134, 8);
  sqcRYGate(q, 3.122334098580348, 9);
  sqcRZGate(q, -1.398787372692995, 9);
  sqcRYGate(q, 0.02340406016681129, 10);
  sqcRZGate(q, -1.650606794568887, 10);
  sqcRYGate(q, -0.02337351171759927, 11);
  sqcRZGate(q, -1.61998685950328, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.0013639575702377729, 0);
  sqcRZGate(q, 2.322634946495481, 0);
  sqcRYGate(q, -0.0013589120807191183, 1);
  sqcRZGate(q, 2.602151603633726, 1);
  sqcRYGate(q, 1.567874580452005, 2);
  sqcRZGate(q, -1.5623279688282148, 2);
  sqcRYGate(q, -0.0006394747890823284, 3);
  sqcRZGate(q, -0.7192217729379529, 3);
  sqcRYGate(q, 3.141557931122089, 4);
  sqcRZGate(q, -2.336766551467485, 4);
  sqcRYGate(q, 1.5707984893436115, 5);
  sqcRZGate(q, -1.5717169413857506, 5);
  sqcRYGate(q, -3.141440468643115, 6);
  sqcRZGate(q, 2.585385454605033, 6);
  sqcRYGate(q, -3.141427447263115, 7);
  sqcRZGate(q, -0.39609486219865264, 7);
  sqcRYGate(q, 0.002371733421761668, 8);
  sqcRZGate(q, -0.02997560267620525, 8);
  sqcRYGate(q, 1.5732022451167458, 9);
  sqcRZGate(q, 0.013828180078618855, 9);
  sqcRYGate(q, -1.5737476518657418, 10);
  sqcRZGate(q, -3.125219688344133, 10);
  sqcRYGate(q, 1.5737652506622313, 11);
  sqcRZGate(q, -3.12523900803583, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -1.6027220385517182e-05, 0);
  sqcRZGate(q, -2.8316883527156276, 0);
  sqcRYGate(q, -3.141586907993639, 1);
  sqcRZGate(q, -0.9943068061878845, 1);
  sqcRYGate(q, 1.5724934042864094, 2);
  sqcRZGate(q, 2.46213718685119, 2);
  sqcRYGate(q, -0.00855882089104109, 3);
  sqcRZGate(q, -2.1324591281383896, 3);
  sqcRYGate(q, -1.5699083788770691, 4);
  sqcRZGate(q, 0.8866168864864784, 4);
  sqcRYGate(q, 1.5682573521045686, 5);
  sqcRZGate(q, -0.6845713881718669, 5);
  sqcRYGate(q, 1.5645227900752998, 6);
  sqcRZGate(q, 0.8798495467636771, 6);
  sqcRYGate(q, -1.5644411578383937, 7);
  sqcRZGate(q, -2.2617597657179833, 7);
  sqcRYGate(q, -1.5846067769426906, 8);
  sqcRZGate(q, 0.8746569945320221, 8);
  sqcRYGate(q, -1.5402783494356385, 9);
  sqcRZGate(q, 2.444959021507984, 9);
  sqcRYGate(q, -1.5383207876770837, 10);
  sqcRZGate(q, 2.443372306118552, 10);
  sqcRYGate(q, 1.538301301825171, 11);
  sqcRZGate(q, -0.6982517148036993, 11);

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
