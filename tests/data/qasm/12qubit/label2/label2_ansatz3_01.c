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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 0.14344574522806663, 0);
  sqcRZGate(q, 1.5153227689503401, 0);
  sqcRYGate(q, -2.910860966235859, 1);
  sqcRZGate(q, -0.9684981039687071, 1);
  sqcRYGate(q, -0.003976861523689479, 2);
  sqcRZGate(q, -2.842510874863408, 2);
  sqcRYGate(q, 3.1414595486108534, 3);
  sqcRZGate(q, 2.031785059268831, 3);
  sqcRYGate(q, 0.012622673236393211, 4);
  sqcRZGate(q, -3.1353354940126588, 4);
  sqcRYGate(q, 1.413228456962207, 5);
  sqcRZGate(q, -2.058348681003622, 5);
  sqcRYGate(q, -1.6467940880835572, 6);
  sqcRZGate(q, 2.984897150458727, 6);
  sqcRYGate(q, 0.7229104696061278, 7);
  sqcRZGate(q, -2.245315159105778, 7);
  sqcRYGate(q, -3.1161859068209217, 8);
  sqcRZGate(q, 1.2705145233696884, 8);
  sqcRYGate(q, -0.08880874885241641, 9);
  sqcRZGate(q, -1.2836399965779481, 9);
  sqcRYGate(q, -1.6615726309665249, 10);
  sqcRZGate(q, -2.009043309696839, 10);
  sqcRYGate(q, -2.413102936221945, 11);
  sqcRZGate(q, -0.07686079129957424, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.712935235494556, 0);
  sqcRZGate(q, -0.1505210765042051, 0);
  sqcRYGate(q, 1.783295000843399, 1);
  sqcRZGate(q, -0.7810908046035907, 1);
  sqcRYGate(q, -3.1403680419759477, 2);
  sqcRZGate(q, -1.3045042932941606, 2);
  sqcRYGate(q, -3.141138322333021, 3);
  sqcRZGate(q, 0.9159080830596888, 3);
  sqcRYGate(q, 0.6904105208905602, 4);
  sqcRZGate(q, -1.5233013229973142, 4);
  sqcRYGate(q, -1.5864005145994593, 5);
  sqcRZGate(q, 1.5485784109450935, 5);
  sqcRYGate(q, -1.5277843720620625, 6);
  sqcRZGate(q, 0.706427299279979, 6);
  sqcRYGate(q, 3.1368617128634106, 7);
  sqcRZGate(q, 2.4530326722241007, 7);
  sqcRYGate(q, 1.6917157204027264, 8);
  sqcRZGate(q, 0.4412500746480559, 8);
  sqcRYGate(q, 0.004573816702987757, 9);
  sqcRZGate(q, 2.901277218863636, 9);
  sqcRYGate(q, -0.3056084222023525, 10);
  sqcRZGate(q, 1.8057845092010738, 10);
  sqcRYGate(q, 1.543833990627987, 11);
  sqcRZGate(q, -2.187381145102025, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.0730625775277307, 0);
  sqcRZGate(q, -2.2720204511652167, 0);
  sqcRYGate(q, 2.1649547666833198, 1);
  sqcRZGate(q, 1.4705274038215226, 1);
  sqcRYGate(q, 1.5744819167920123, 2);
  sqcRZGate(q, 1.1013445914883855, 2);
  sqcRYGate(q, 0.07371512991885738, 3);
  sqcRZGate(q, -0.6658624996448143, 3);
  sqcRYGate(q, -2.855283300545231, 4);
  sqcRZGate(q, 1.9471824851342454, 4);
  sqcRYGate(q, -1.5798974312466123, 5);
  sqcRZGate(q, -2.8999962277992704, 5);
  sqcRYGate(q, -3.1381526736673133, 6);
  sqcRZGate(q, 2.3435676471419558, 6);
  sqcRYGate(q, 3.0652058908776096, 7);
  sqcRZGate(q, -0.960522521847009, 7);
  sqcRYGate(q, -0.08313279017974093, 8);
  sqcRZGate(q, -0.4358426807355782, 8);
  sqcRYGate(q, -0.08049109408096691, 9);
  sqcRZGate(q, -0.22331639847173826, 9);
  sqcRYGate(q, 3.1349923486191886, 10);
  sqcRZGate(q, -0.8970927691903744, 10);
  sqcRYGate(q, 0.9949592830245259, 11);
  sqcRZGate(q, -0.21409283724628345, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.5374814257052265, 0);
  sqcRZGate(q, -1.5628609920373626, 0);
  sqcRYGate(q, 0.04549027499046332, 1);
  sqcRZGate(q, -1.5005768726517799, 1);
  sqcRYGate(q, -3.141337757041661, 2);
  sqcRZGate(q, -0.4920151662498791, 2);
  sqcRYGate(q, 0.06603780928103228, 3);
  sqcRZGate(q, -0.5089371058759945, 3);
  sqcRYGate(q, -0.003482788464005092, 4);
  sqcRZGate(q, -0.6719439274019805, 4);
  sqcRYGate(q, 0.505888926880381, 5);
  sqcRZGate(q, 0.8580015793956681, 5);
  sqcRYGate(q, -2.989270355358689, 6);
  sqcRZGate(q, 0.6620820409635337, 6);
  sqcRYGate(q, 0.005446776821021274, 7);
  sqcRZGate(q, 3.036028673563372, 7);
  sqcRYGate(q, 1.4501001976777386, 8);
  sqcRZGate(q, 2.6889608370285387, 8);
  sqcRYGate(q, 3.1395961710117253, 9);
  sqcRZGate(q, 1.9615981505823012, 9);
  sqcRYGate(q, 1.5457938507523403, 10);
  sqcRZGate(q, 2.142843435735183, 10);
  sqcRYGate(q, 3.101407500931233, 11);
  sqcRZGate(q, -2.7819136117537955, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.4190450207481682, 0);
  sqcRZGate(q, -1.6656112567212853, 0);
  sqcRYGate(q, -2.989625697882794, 1);
  sqcRZGate(q, 1.5156666929345501, 1);
  sqcRYGate(q, 1.7184393046385023, 2);
  sqcRZGate(q, 1.5605646423433672, 2);
  sqcRYGate(q, 3.029322192535197, 3);
  sqcRZGate(q, -2.0957441022332954, 3);
  sqcRYGate(q, -0.05026039982639705, 4);
  sqcRZGate(q, -0.15159326372600201, 4);
  sqcRYGate(q, 0.15101661660871368, 5);
  sqcRZGate(q, 1.421283981912657, 5);
  sqcRYGate(q, -3.010905362553243, 6);
  sqcRZGate(q, 1.3562822802207206, 6);
  sqcRYGate(q, -3.0124512910163626, 7);
  sqcRZGate(q, 1.2476695666513589, 7);
  sqcRYGate(q, 3.0388387243237402, 8);
  sqcRZGate(q, -1.2498234097939547, 8);
  sqcRYGate(q, 2.9939225540847865, 9);
  sqcRZGate(q, -1.7740246924690486, 9);
  sqcRYGate(q, -2.973437602381773, 10);
  sqcRZGate(q, 1.3718716654568401, 10);
  sqcRYGate(q, -1.8876060635850016, 11);
  sqcRZGate(q, -2.360258574491194, 11);

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
