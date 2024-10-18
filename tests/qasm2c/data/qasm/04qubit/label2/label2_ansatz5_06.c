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

  sqcRYGate(q, -2.277711845366107, 0);
  sqcRYGate(q, 3.030957524266681, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.14457585414561097, 0);
  sqcRYGate(q, -1.456388743485455, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5301898179289746, 2);
  sqcRYGate(q, 1.77823071440747, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9008947117504222, 2);
  sqcRYGate(q, 0.27194345743783116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9283728470882506, 1);
  sqcRYGate(q, 2.5664876607708544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8182290890220152, 1);
  sqcRYGate(q, -0.10307345285720171, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9419327834739708, 0);
  sqcRYGate(q, -0.014217253672117494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9268180759950213, 0);
  sqcRYGate(q, -1.1761754200079664, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.120629305404613, 2);
  sqcRYGate(q, -1.1747886195573634, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5376591599809969, 2);
  sqcRYGate(q, 2.2221272269856804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.18622452677528428, 1);
  sqcRYGate(q, -1.0985115135380985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7034299503026676, 1);
  sqcRYGate(q, 2.947067011555465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.153202248960443, 0);
  sqcRYGate(q, 2.573134826233882, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8928309752779324, 0);
  sqcRYGate(q, 2.0559212370924396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0456287759905925, 2);
  sqcRYGate(q, -1.5281403513525529, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0023329279407154, 2);
  sqcRYGate(q, -0.3369957186087332, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4530717588005422, 1);
  sqcRYGate(q, 2.7316429999314358, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3423250038095238, 1);
  sqcRYGate(q, -2.7953105838495906, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3011385980816662, 0);
  sqcRYGate(q, 0.16403223860111016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23739462006598444, 0);
  sqcRYGate(q, 1.2876898886829702, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6804959302247287, 2);
  sqcRYGate(q, 1.2428706658419149, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3591764408451943, 2);
  sqcRYGate(q, 1.7609502340248344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.180348493621289, 1);
  sqcRYGate(q, -0.5733083056549904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8087283674028756, 1);
  sqcRYGate(q, 2.680328788526107, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1779838554068163, 0);
  sqcRYGate(q, -0.6363788669236667, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6782440344096028, 0);
  sqcRYGate(q, 2.1069260779633847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5831792633075952, 2);
  sqcRYGate(q, -0.09753713525752516, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.952709053275941, 2);
  sqcRYGate(q, -2.8100616526019198, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.309500702797826, 1);
  sqcRYGate(q, 0.9156892388742044, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9931037852324672, 1);
  sqcRYGate(q, -2.1157927052742336, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.077935069517388, 0);
  sqcRYGate(q, -2.6060224038295186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9486356456427463, 0);
  sqcRYGate(q, -0.34854594397724203, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.75514770912334, 2);
  sqcRYGate(q, -0.38214984585217865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1072455377394665, 2);
  sqcRYGate(q, 3.0425866188907205, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6699737865862483, 1);
  sqcRYGate(q, 0.6083039850120233, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9226528666396125, 1);
  sqcRYGate(q, -1.7487972705262207, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.394193481689954, 0);
  sqcRYGate(q, -2.0274174886000926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9991987525405133, 0);
  sqcRYGate(q, 2.8581098331214894, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.408634632898492, 2);
  sqcRYGate(q, 0.8766501784764882, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3298249624400134, 2);
  sqcRYGate(q, 3.00818093594362, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1536401669805136, 1);
  sqcRYGate(q, 2.5306335925727623, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5056899760011593, 1);
  sqcRYGate(q, 0.15111281325724324, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.12887935268883322, 0);
  sqcRYGate(q, 2.508635132912573, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3463788308999274, 0);
  sqcRYGate(q, 0.9312403720402012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6066557269417717, 2);
  sqcRYGate(q, 1.4756091926742276, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.744846832960965, 2);
  sqcRYGate(q, 1.2532173557118556, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5092562417779467, 1);
  sqcRYGate(q, 0.06090023592741911, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7554487155519468, 1);
  sqcRYGate(q, 1.9427505208508153, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7318339746798435, 0);
  sqcRYGate(q, -2.1845692697914005, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0702014704799059, 0);
  sqcRYGate(q, 1.5032695050844347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2519899251987124, 2);
  sqcRYGate(q, 2.033570166023486, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7770778139221317, 2);
  sqcRYGate(q, -1.661984208315689, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3736742590144546, 1);
  sqcRYGate(q, -1.9655774642078008, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1408150134313502, 1);
  sqcRYGate(q, 0.13750873558142374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.03449771161144, 0);
  sqcRYGate(q, -1.760583669384036, 1);
  sqcRYGate(q, -0.8906365068460833, 2);
  sqcRYGate(q, 0.6034075493183043, 3);

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
