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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -1.8911152360117391, 0);
  sqcRZGate(q, 1.0542991048018242, 0);
  sqcRYGate(q, -0.05328759215948864, 1);
  sqcRZGate(q, 0.2880305306744093, 1);
  sqcRYGate(q, -1.5708822076112228, 2);
  sqcRZGate(q, -3.0856860016647567, 2);
  sqcRYGate(q, 1.2109345128901106, 3);
  sqcRZGate(q, -2.8370318347030237, 3);
  sqcRYGate(q, -1.571286733934941, 4);
  sqcRZGate(q, -3.1399822588098156, 4);
  sqcRYGate(q, 0.04155767093450269, 5);
  sqcRZGate(q, 2.8996666010238195, 5);
  sqcRYGate(q, -1.520598503930512, 6);
  sqcRZGate(q, 0.7747899887513832, 6);
  sqcRYGate(q, 1.6455235524404748, 7);
  sqcRZGate(q, 1.1289123331224653, 7);
  sqcRYGate(q, -3.120435311299019, 8);
  sqcRZGate(q, 0.3787050924986372, 8);
  sqcRYGate(q, 3.0573744242413396, 9);
  sqcRZGate(q, -0.031291414909661634, 9);
  sqcRYGate(q, -1.5651483175847398, 10);
  sqcRZGate(q, -2.058504509193021, 10);
  sqcRYGate(q, 0.6655888128491219, 11);
  sqcRZGate(q, 3.1403609201404663, 11);
  sqcRYGate(q, -1.5743236079404168, 12);
  sqcRZGate(q, 1.442655247321837, 12);
  sqcRYGate(q, -1.5983394038418228, 13);
  sqcRZGate(q, -0.14308849696830528, 13);
  sqcRYGate(q, -0.07471956757117314, 14);
  sqcRZGate(q, 0.007503484574811645, 14);
  sqcRYGate(q, -0.7057256635750822, 15);
  sqcRZGate(q, -3.13548483063596, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.331211249242415, 0);
  sqcRZGate(q, 2.1711024519295496, 0);
  sqcRYGate(q, 1.5700426808392223, 1);
  sqcRZGate(q, 1.3970201919949856, 1);
  sqcRYGate(q, -1.3994865635633218, 2);
  sqcRZGate(q, 1.2394476514991455, 2);
  sqcRYGate(q, 3.089962030886554, 3);
  sqcRZGate(q, -0.9203016391661271, 3);
  sqcRYGate(q, -1.5859859528023017, 4);
  sqcRZGate(q, 0.05584186979464967, 4);
  sqcRYGate(q, 0.3173903322969833, 5);
  sqcRZGate(q, 3.039390665286859, 5);
  sqcRYGate(q, 2.0296835771362467, 6);
  sqcRZGate(q, -1.1891280457548534, 6);
  sqcRYGate(q, 2.0594658569500126, 7);
  sqcRZGate(q, -2.0840295330520195, 7);
  sqcRYGate(q, -1.4502240924088445, 8);
  sqcRZGate(q, 1.0708322601907203, 8);
  sqcRYGate(q, -3.1106067875384396, 9);
  sqcRZGate(q, -0.03742569865116518, 9);
  sqcRYGate(q, -0.014684962030749205, 10);
  sqcRZGate(q, 2.0584097606075735, 10);
  sqcRYGate(q, -0.9405113633026128, 11);
  sqcRZGate(q, 0.07576074437802215, 11);
  sqcRYGate(q, 3.0566285030213343, 12);
  sqcRZGate(q, -1.5380818841834654, 12);
  sqcRYGate(q, -1.6333773221476149, 13);
  sqcRZGate(q, 2.37811717834913, 13);
  sqcRYGate(q, -1.571715466765859, 14);
  sqcRZGate(q, 1.5788539392425793, 14);
  sqcRYGate(q, -0.4927368288284378, 15);
  sqcRZGate(q, -0.017552196818217396, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.5734957793038795, 0);
  sqcRZGate(q, -1.7470933061036371, 0);
  sqcRYGate(q, -3.0943161515546405, 1);
  sqcRZGate(q, 3.1328957840814504, 1);
  sqcRYGate(q, 0.04937232253680653, 2);
  sqcRZGate(q, -1.498625258104894, 2);
  sqcRYGate(q, 0.01822012860833588, 3);
  sqcRZGate(q, 2.4686970795469736, 3);
  sqcRYGate(q, -1.5681192178212031, 4);
  sqcRZGate(q, -0.003052315148854845, 4);
  sqcRYGate(q, -0.8659990606228103, 5);
  sqcRZGate(q, -0.4249397186396029, 5);
  sqcRYGate(q, 2.1319868018669332, 6);
  sqcRZGate(q, 2.9782028855096088, 6);
  sqcRYGate(q, -0.2835376425254247, 7);
  sqcRZGate(q, 1.1311617284131448, 7);
  sqcRYGate(q, -2.908153753538919, 8);
  sqcRZGate(q, 1.3450567051507298, 8);
  sqcRYGate(q, -2.575118007865641, 9);
  sqcRZGate(q, -1.6864489045692954, 9);
  sqcRYGate(q, -1.570531601891097, 10);
  sqcRZGate(q, 1.3279489831491311, 10);
  sqcRYGate(q, 2.476029884143505, 11);
  sqcRZGate(q, 1.5585623814006242, 11);
  sqcRYGate(q, 0.045327399590568966, 12);
  sqcRZGate(q, -0.037189882088375, 12);
  sqcRYGate(q, 0.06501927974145705, 13);
  sqcRZGate(q, 0.42179853015395313, 13);
  sqcRYGate(q, -0.22415453649601905, 14);
  sqcRZGate(q, -1.654877839227355, 14);
  sqcRYGate(q, -1.5747685201571624, 15);
  sqcRZGate(q, 0.7284686269867576, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.5734885411602733, 0);
  sqcRZGate(q, 2.720697692551524, 0);
  sqcRYGate(q, -1.5424060951674177, 1);
  sqcRZGate(q, 2.865053081806189, 1);
  sqcRYGate(q, -2.959977881328607, 2);
  sqcRZGate(q, -2.1107787438775243, 2);
  sqcRYGate(q, -3.132109156842722, 3);
  sqcRZGate(q, -0.6599360983926835, 3);
  sqcRYGate(q, -1.5416440210683637, 4);
  sqcRZGate(q, -1.8769898592618737, 4);
  sqcRYGate(q, 3.1342685234462877, 5);
  sqcRZGate(q, 0.840699567488099, 5);
  sqcRYGate(q, -0.001420611294351679, 6);
  sqcRZGate(q, -2.843255361688324, 6);
  sqcRYGate(q, -1.5228829323710602, 7);
  sqcRZGate(q, -2.8846931949517955, 7);
  sqcRYGate(q, -1.4216103570730099, 8);
  sqcRZGate(q, 1.943450947077398, 8);
  sqcRYGate(q, -0.0036554538913993184, 9);
  sqcRZGate(q, 0.48869491362434037, 9);
  sqcRYGate(q, -3.139099739732065, 10);
  sqcRZGate(q, -2.9849153856144435, 10);
  sqcRYGate(q, 3.1390709993788612, 11);
  sqcRZGate(q, 0.3305945937627817, 11);
  sqcRYGate(q, 1.5442684825760908, 12);
  sqcRZGate(q, 0.4096136540111485, 12);
  sqcRYGate(q, -1.6777795925472194, 13);
  sqcRZGate(q, 0.4777331159005075, 13);
  sqcRYGate(q, 1.4489540739377729, 14);
  sqcRZGate(q, 2.0475961521872925, 14);
  sqcRYGate(q, 3.02894498986596, 15);
  sqcRZGate(q, -0.3775753190370602, 15);

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
