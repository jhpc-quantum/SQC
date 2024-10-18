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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.05197602580679699, 0);
  sqcRZGate(q, -1.5467026633229493, 0);
  sqcRYGate(q, 0.07343277963351813, 1);
  sqcRZGate(q, -1.6036188015393202, 1);
  sqcRYGate(q, -1.5073644564583908, 2);
  sqcRZGate(q, 1.2280083107691224, 2);
  sqcRYGate(q, 1.571119563965409, 3);
  sqcRZGate(q, -0.0009274816869124791, 3);
  sqcRYGate(q, 1.5685620235734339, 4);
  sqcRZGate(q, -0.8146802557453613, 4);
  sqcRYGate(q, -1.5715706085568597, 5);
  sqcRZGate(q, 0.3180776105336738, 5);
  sqcRYGate(q, 1.6202730749386491, 6);
  sqcRZGate(q, -1.5373272281047203, 6);
  sqcRYGate(q, -6.531287226781046e-05, 7);
  sqcRZGate(q, 0.15391424196261383, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6130176830943912, 0);
  sqcRZGate(q, -0.003771861041721891, 0);
  sqcRYGate(q, 1.5480958993059257, 1);
  sqcRZGate(q, 3.1388905585113687, 1);
  sqcRYGate(q, -0.06316520066387721, 2);
  sqcRZGate(q, 1.9068890521789417, 2);
  sqcRYGate(q, -0.02125254063630784, 3);
  sqcRZGate(q, 1.7274995032870901, 3);
  sqcRYGate(q, 3.1415771410279856, 4);
  sqcRZGate(q, -2.8254964645732716, 4);
  sqcRYGate(q, -1.2783764914390153e-08, 5);
  sqcRZGate(q, -0.19905252723802835, 5);
  sqcRYGate(q, 1.5687178434701572, 6);
  sqcRZGate(q, -3.141424413217436, 6);
  sqcRYGate(q, -0.022551825470771725, 7);
  sqcRZGate(q, 0.5837337859488205, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5112332022714874, 0);
  sqcRZGate(q, 1.4083566065899642, 0);
  sqcRYGate(q, -1.5115104348092063, 1);
  sqcRZGate(q, 1.6726604696434944, 1);
  sqcRYGate(q, 2.973777435960813, 2);
  sqcRZGate(q, -0.3597390149801374, 2);
  sqcRYGate(q, -1.572044903805533, 3);
  sqcRZGate(q, 1.571052100945007, 3);
  sqcRYGate(q, 0.40432739347583, 4);
  sqcRZGate(q, -2.7938104661289027, 4);
  sqcRYGate(q, -1.7298606991562129, 5);
  sqcRZGate(q, 2.9372570329451673, 5);
  sqcRYGate(q, 0.5878192211272673, 6);
  sqcRZGate(q, -1.5683936156720142, 6);
  sqcRYGate(q, 1.5716989731682605, 7);
  sqcRZGate(q, 0.039339433893052424, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.4084392975988984, 0);
  sqcRZGate(q, -2.2169009358483605, 0);
  sqcRYGate(q, 2.2270123191560818, 1);
  sqcRZGate(q, -2.1322891532504102, 1);
  sqcRYGate(q, 3.140076754334996, 2);
  sqcRZGate(q, 1.2188138023677189, 2);
  sqcRYGate(q, 3.0934995073292533, 3);
  sqcRZGate(q, 1.5704472136665055, 3);
  sqcRYGate(q, 1.5708830432208127, 4);
  sqcRZGate(q, -0.00016781075160743342, 4);
  sqcRYGate(q, 1.5707517570182787, 5);
  sqcRZGate(q, -0.00032168428478929195, 5);
  sqcRYGate(q, 0.8270471286193402, 6);
  sqcRZGate(q, -1.8508480679494728, 6);
  sqcRYGate(q, -2.2734963916750246, 7);
  sqcRZGate(q, -1.4990989593403663, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1411487818655885, 0);
  sqcRZGate(q, 0.9408048100668106, 0);
  sqcRYGate(q, 0.0010811638347127863, 1);
  sqcRZGate(q, -0.9900864292093645, 1);
  sqcRYGate(q, 1.5726394400520924, 2);
  sqcRZGate(q, -0.5571786538441068, 2);
  sqcRYGate(q, -1.5725852535819973, 3);
  sqcRZGate(q, -2.7084377743966646, 3);
  sqcRYGate(q, 1.5711717562282752, 4);
  sqcRZGate(q, 1.5934929763520633, 4);
  sqcRYGate(q, -1.5705345607264953, 5);
  sqcRZGate(q, -0.09731354668096417, 5);
  sqcRYGate(q, 3.1411686220634607, 6);
  sqcRZGate(q, -2.644217150860712, 6);
  sqcRYGate(q, 0.012292779948236188, 7);
  sqcRZGate(q, -0.688851116694264, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.946554162964202, 0);
  sqcRZGate(q, -2.1626501304165178, 0);
  sqcRYGate(q, 2.690848198141417, 1);
  sqcRZGate(q, -2.3727693123923044, 1);
  sqcRYGate(q, 2.041834873619118, 2);
  sqcRZGate(q, 3.0860778831079325, 2);
  sqcRYGate(q, 2.2143069012951377, 3);
  sqcRZGate(q, -1.264939225148722, 3);
  sqcRYGate(q, 0.8081111900796925, 4);
  sqcRZGate(q, -2.2100688729838955, 4);
  sqcRYGate(q, -0.6407492116631253, 5);
  sqcRZGate(q, 0.6595341055356752, 5);
  sqcRYGate(q, 2.0555734973164874, 6);
  sqcRZGate(q, -0.38700732611814814, 6);
  sqcRYGate(q, -2.2390476806897066, 7);
  sqcRZGate(q, 0.7339682600436114, 7);

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
