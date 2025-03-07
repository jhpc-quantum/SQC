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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -1.4581473382420285, 0);
  sqcRZGate(q, 1.5797831157066313, 0);
  sqcRYGate(q, 1.5712245524157777, 1);
  sqcRZGate(q, -1.6939603575993696, 1);
  sqcRYGate(q, -0.520293323718129, 2);
  sqcRZGate(q, 3.1311861328216413, 2);
  sqcRYGate(q, -3.074362788157033, 3);
  sqcRZGate(q, 1.5650236251761367, 3);
  sqcRYGate(q, 1.5147137945601674, 4);
  sqcRZGate(q, -1.5716563595977617, 4);
  sqcRYGate(q, -3.0559740275760645, 5);
  sqcRZGate(q, -3.0402057837243643, 5);
  sqcRYGate(q, -2.7899018149471413, 6);
  sqcRZGate(q, -0.006407454767923148, 6);
  sqcRYGate(q, -3.1223552261756815, 7);
  sqcRZGate(q, -2.7994266374391317, 7);
  sqcRYGate(q, 1.3530478602417657, 8);
  sqcRZGate(q, 0.24751003814939343, 8);
  sqcRYGate(q, 1.4513614248272757, 9);
  sqcRZGate(q, -2.4640456641839124, 9);
  sqcRYGate(q, 0.14983062843256345, 10);
  sqcRZGate(q, -2.4357931044075376, 10);
  sqcRYGate(q, 2.6024349466244945, 11);
  sqcRZGate(q, -0.021557928305310448, 11);
  sqcRYGate(q, -0.17861350148795552, 12);
  sqcRZGate(q, -2.3636665667258536, 12);
  sqcRYGate(q, 0.5502752863404279, 13);
  sqcRZGate(q, 0.06648887457310691, 13);
  sqcRYGate(q, -0.08238217056696469, 14);
  sqcRZGate(q, -1.2013573272148503, 14);
  sqcRYGate(q, -1.9466358254386158, 15);
  sqcRZGate(q, 1.7168849070370864, 15);
  sqcRYGate(q, 0.06704932253033569, 16);
  sqcRZGate(q, -1.561236588606607, 16);
  sqcRYGate(q, -0.4571035543348536, 17);
  sqcRZGate(q, 0.052205786009526634, 17);
  sqcRYGate(q, -1.5636595329680976, 18);
  sqcRZGate(q, 1.4393629557876668, 18);
  sqcRYGate(q, -2.0149838835472194, 19);
  sqcRZGate(q, -1.7235294715709235, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.2675923249277812, 0);
  sqcRZGate(q, -0.0015746202416318026, 0);
  sqcRYGate(q, -1.5781959701258605, 1);
  sqcRZGate(q, 1.5701044844518925, 1);
  sqcRYGate(q, 0.3418115276419127, 2);
  sqcRZGate(q, -1.5845252175006457, 2);
  sqcRYGate(q, 0.7786812195842912, 3);
  sqcRZGate(q, -0.08004048952817737, 3);
  sqcRYGate(q, -1.5557726639540252, 4);
  sqcRZGate(q, -0.2595007272722727, 4);
  sqcRYGate(q, -1.5892483333975984, 5);
  sqcRZGate(q, -1.3512667540029453, 5);
  sqcRYGate(q, -2.853016988570646, 6);
  sqcRZGate(q, -1.5862963381491568, 6);
  sqcRYGate(q, -2.706083588440928, 7);
  sqcRZGate(q, 0.05068734860901992, 7);
  sqcRYGate(q, 0.07150010517034847, 8);
  sqcRZGate(q, 2.8920786741180478, 8);
  sqcRYGate(q, 3.113949205578564, 9);
  sqcRZGate(q, 0.6449633442973033, 9);
  sqcRYGate(q, 2.9144391455268184, 10);
  sqcRZGate(q, -1.915632422269183, 10);
  sqcRYGate(q, 0.33617388150418304, 11);
  sqcRZGate(q, 0.037433173248120656, 11);
  sqcRYGate(q, 1.6787729074224123, 12);
  sqcRZGate(q, -0.06566538567652512, 12);
  sqcRYGate(q, -0.47612632597770727, 13);
  sqcRZGate(q, -2.386394172676989, 13);
  sqcRYGate(q, -1.5456654533114986, 14);
  sqcRZGate(q, 1.7725586568469118, 14);
  sqcRYGate(q, -1.635621105934387, 15);
  sqcRZGate(q, 2.769864979605344, 15);
  sqcRYGate(q, -0.7312042966178733, 16);
  sqcRZGate(q, -1.9955956309516598, 16);
  sqcRYGate(q, -2.722001060628071, 17);
  sqcRZGate(q, 1.4741261186276238, 17);
  sqcRYGate(q, -1.6738484003767349, 18);
  sqcRZGate(q, -1.5912258232946055, 18);
  sqcRYGate(q, 0.24412206534542324, 19);
  sqcRZGate(q, -3.1013607790042275, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.6909478116243746, 0);
  sqcRZGate(q, 0.06702390446487319, 0);
  sqcRYGate(q, 1.5761519230560332, 1);
  sqcRZGate(q, -0.007631339749254619, 1);
  sqcRYGate(q, 0.061089668330218005, 2);
  sqcRZGate(q, -2.320223531813403, 2);
  sqcRYGate(q, -0.2851233026683967, 3);
  sqcRZGate(q, 0.08639234124948046, 3);
  sqcRYGate(q, 0.0011400626614691534, 4);
  sqcRZGate(q, -1.2627721494235489, 4);
  sqcRYGate(q, -0.00781902441891269, 5);
  sqcRZGate(q, 1.3351834035311427, 5);
  sqcRYGate(q, 3.024671307875956, 6);
  sqcRZGate(q, -1.5340448945734346, 6);
  sqcRYGate(q, 2.7686298768868367, 7);
  sqcRZGate(q, 0.08924457898297612, 7);
  sqcRYGate(q, -1.3264938386783274, 8);
  sqcRZGate(q, -3.040391507646353, 8);
  sqcRYGate(q, 1.689106973095182, 9);
  sqcRZGate(q, -0.05379712489447552, 9);
  sqcRYGate(q, -2.7239742414643997, 10);
  sqcRZGate(q, 1.2748073970656475, 10);
  sqcRYGate(q, -2.648044401302407, 11);
  sqcRZGate(q, -0.014017893682352955, 11);
  sqcRYGate(q, -2.77060781447567, 12);
  sqcRZGate(q, 0.1856064933447007, 12);
  sqcRYGate(q, -0.06125598303591575, 13);
  sqcRZGate(q, 2.491930887040569, 13);
  sqcRYGate(q, -3.129300799271465, 14);
  sqcRZGate(q, 1.6577603790924715, 14);
  sqcRYGate(q, 3.110443363254792, 15);
  sqcRZGate(q, -1.4656766314473861, 15);
  sqcRYGate(q, 0.30466277597335356, 16);
  sqcRZGate(q, 1.9721295505121823, 16);
  sqcRYGate(q, -0.11334636692574929, 17);
  sqcRZGate(q, 1.0070056230556368, 17);
  sqcRYGate(q, 1.5681551533439846, 18);
  sqcRZGate(q, 0.0016308917293650943, 18);
  sqcRYGate(q, 2.027345256976318, 19);
  sqcRZGate(q, 2.991341619290104, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -3.108818157312109, 0);
  sqcRZGate(q, -2.118804554514269, 0);
  sqcRYGate(q, 0.1652819873173845, 1);
  sqcRZGate(q, -2.1837512245965103, 1);
  sqcRYGate(q, 3.1372541815096624, 2);
  sqcRZGate(q, -2.949128298241338, 2);
  sqcRYGate(q, 2.9870471971453014, 3);
  sqcRZGate(q, 0.957656087643163, 3);
  sqcRYGate(q, -1.5739849904946712, 4);
  sqcRZGate(q, 2.5493767720225766, 4);
  sqcRYGate(q, -1.7549238215901104, 5);
  sqcRZGate(q, 0.8698355623235097, 5);
  sqcRYGate(q, 0.09892112880147952, 6);
  sqcRZGate(q, 0.9213433226601193, 6);
  sqcRYGate(q, 2.9469300632090434, 7);
  sqcRZGate(q, 0.9606614544687148, 7);
  sqcRYGate(q, -0.09219729839287058, 8);
  sqcRZGate(q, -2.2691352532903792, 8);
  sqcRYGate(q, -3.006357653906485, 9);
  sqcRZGate(q, -2.2739790557848405, 9);
  sqcRYGate(q, 3.059390281469934, 10);
  sqcRZGate(q, -2.103400006391313, 10);
  sqcRYGate(q, -0.10250967146612636, 11);
  sqcRZGate(q, 0.9660597574625163, 11);
  sqcRYGate(q, 1.2962454116518964, 12);
  sqcRZGate(q, 2.856505755513187, 12);
  sqcRYGate(q, 3.0203049561572386, 13);
  sqcRZGate(q, -2.0928482531812334, 13);
  sqcRYGate(q, 1.58814989317004, 14);
  sqcRZGate(q, -0.2504583216563905, 14);
  sqcRYGate(q, 1.7402421408763162, 15);
  sqcRZGate(q, -0.6910591057470619, 15);
  sqcRYGate(q, -0.17820681411958686, 16);
  sqcRZGate(q, -2.2228480244224027, 16);
  sqcRYGate(q, -0.010419766209242308, 17);
  sqcRZGate(q, 1.5573628402507596, 17);
  sqcRYGate(q, -3.0363985115573757, 18);
  sqcRZGate(q, 0.904266018446684, 18);
  sqcRYGate(q, 0.0005601974865624873, 19);
  sqcRZGate(q, -2.1018330525470055, 19);

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
