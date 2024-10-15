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

  sqcRYGate(q, -0.4200632747551526, 0);
  sqcRZGate(q, 2.6741602785887535, 0);
  sqcRYGate(q, 1.0843157360981655, 1);
  sqcRZGate(q, -2.4964632432152727, 1);
  sqcRYGate(q, -0.9661447678458259, 2);
  sqcRZGate(q, 0.8669826414394777, 2);
  sqcRYGate(q, 2.8298008541592496, 3);
  sqcRZGate(q, 2.211604851872262, 3);
  sqcRYGate(q, 0.006551640032197053, 4);
  sqcRZGate(q, 1.1649498554476514, 4);
  sqcRYGate(q, -0.06167266732277543, 5);
  sqcRZGate(q, 2.5383623867044887, 5);
  sqcRYGate(q, -0.010359981606855223, 6);
  sqcRZGate(q, -0.42568640297229016, 6);
  sqcRYGate(q, 0.04682019122609619, 7);
  sqcRZGate(q, 2.6597447422029177, 7);
  sqcRYGate(q, 3.140554863521581, 8);
  sqcRZGate(q, 0.2129180810608835, 8);
  sqcRYGate(q, 3.1412766037148994, 9);
  sqcRZGate(q, -0.3231975878103315, 9);
  sqcRYGate(q, -0.00025165580956088007, 10);
  sqcRZGate(q, 1.9970075105946012, 10);
  sqcRYGate(q, -3.133873651037536, 11);
  sqcRZGate(q, -0.09402281710443372, 11);
  sqcRYGate(q, 0.017425424990535097, 12);
  sqcRZGate(q, 1.5991642363612169, 12);
  sqcRYGate(q, 3.068354382926573, 13);
  sqcRZGate(q, -1.579176634271719, 13);
  sqcRYGate(q, 1.5646076613068907, 14);
  sqcRZGate(q, 0.002426711639463619, 14);
  sqcRYGate(q, -0.075760834856478, 15);
  sqcRZGate(q, -2.4551959523107842, 15);
  sqcRYGate(q, 0.026449046822865085, 16);
  sqcRZGate(q, 0.5358069460864255, 16);
  sqcRYGate(q, 0.008775409709106646, 17);
  sqcRZGate(q, -1.9827724210012658, 17);
  sqcRYGate(q, 3.1381707960166065, 18);
  sqcRZGate(q, 2.6106825926774127, 18);
  sqcRYGate(q, 3.1405766239911292, 19);
  sqcRZGate(q, -3.073326950065453, 19);
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
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, -3.141388079483073, 0);
  sqcRZGate(q, 2.335913768425168, 0);
  sqcRYGate(q, 3.139132524287813, 1);
  sqcRZGate(q, 2.7747702273402877, 1);
  sqcRYGate(q, -0.0017691974399732138, 2);
  sqcRZGate(q, -1.8544791337257784, 2);
  sqcRYGate(q, 3.140653932543778, 3);
  sqcRZGate(q, 1.5484021841930238, 3);
  sqcRYGate(q, 0.006526813302904142, 4);
  sqcRZGate(q, 1.5688203713461357, 4);
  sqcRYGate(q, -0.0015727463132790833, 5);
  sqcRZGate(q, -1.6992383049778539, 5);
  sqcRYGate(q, 0.0003105474225046923, 6);
  sqcRZGate(q, 0.2545749828865112, 6);
  sqcRYGate(q, -3.1406901949210693, 7);
  sqcRZGate(q, 1.0736207420529906, 7);
  sqcRYGate(q, 0.026059660917224243, 8);
  sqcRZGate(q, -1.5756691470942117, 8);
  sqcRYGate(q, -2.9959641405249773, 9);
  sqcRZGate(q, -1.575489998100194, 9);
  sqcRYGate(q, 2.5248271078431643, 10);
  sqcRZGate(q, -1.557067130218056, 10);
  sqcRYGate(q, -1.5701592357721559, 11);
  sqcRZGate(q, -0.04508420326744477, 11);
  sqcRYGate(q, 0.565368082641279, 12);
  sqcRZGate(q, 1.5484831007642903, 12);
  sqcRYGate(q, -3.0131593595662283, 13);
  sqcRZGate(q, -1.6131769624519314, 13);
  sqcRYGate(q, 1.5670373430711262, 14);
  sqcRZGate(q, -0.06534848651800078, 14);
  sqcRYGate(q, 0.0005764248652138093, 15);
  sqcRZGate(q, -0.5265156106640495, 15);
  sqcRYGate(q, -3.1413379277680047, 16);
  sqcRZGate(q, 0.5288202206214656, 16);
  sqcRYGate(q, -0.00010313032410291192, 17);
  sqcRZGate(q, -3.1169036577119127, 17);
  sqcRYGate(q, -3.081026453754729e-05, 18);
  sqcRZGate(q, 2.839277832845486, 18);
  sqcRYGate(q, 3.1415911369075795, 19);
  sqcRZGate(q, 1.945106040127218, 19);
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
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, -3.1413942047326042, 0);
  sqcRZGate(q, -0.35103754513857854, 0);
  sqcRYGate(q, -3.1412544576163346, 1);
  sqcRZGate(q, 2.1460560448850723, 1);
  sqcRYGate(q, -0.002127928191333271, 2);
  sqcRZGate(q, -2.6532965728580105, 2);
  sqcRYGate(q, 0.014908350884192572, 3);
  sqcRZGate(q, 0.051058935109158446, 3);
  sqcRYGate(q, -0.00765263773046243, 4);
  sqcRZGate(q, -0.05640489203055399, 4);
  sqcRYGate(q, -0.10004047087596392, 5);
  sqcRZGate(q, 2.3166241439100506, 5);
  sqcRYGate(q, -0.5418567412866199, 6);
  sqcRZGate(q, 1.2880667830521544, 6);
  sqcRYGate(q, -1.5977860871024712, 7);
  sqcRZGate(q, -3.0422510296578205, 7);
  sqcRYGate(q, -2.4890106295724705, 8);
  sqcRZGate(q, 1.184224053208406, 8);
  sqcRYGate(q, -2.9804906954763073, 9);
  sqcRZGate(q, 1.7037904200014402, 9);
  sqcRYGate(q, 3.0888557722167342, 10);
  sqcRZGate(q, -1.5574636722306774, 10);
  sqcRYGate(q, -1.5694871829579213, 11);
  sqcRZGate(q, 0.16057205267602995, 11);
  sqcRYGate(q, -0.022554599306174872, 12);
  sqcRZGate(q, 2.223182869794046, 12);
  sqcRYGate(q, 0.00668332568434149, 13);
  sqcRZGate(q, 1.5750055950817288, 13);
  sqcRYGate(q, -0.028453311838302454, 14);
  sqcRZGate(q, 2.8870030516221536, 14);
  sqcRYGate(q, -1.8486849880793205e-05, 15);
  sqcRZGate(q, 0.0740435941548876, 15);
  sqcRYGate(q, -0.0003135984704289996, 16);
  sqcRZGate(q, -2.0488683407124153, 16);
  sqcRYGate(q, 3.2880974646544695e-05, 17);
  sqcRZGate(q, 2.6219332665342616, 17);
  sqcRYGate(q, -3.1415917123018664, 18);
  sqcRZGate(q, 2.0299018192101244, 18);
  sqcRYGate(q, 4.470809780143816e-06, 19);
  sqcRZGate(q, -2.4634431049388192, 19);
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
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, 3.1109727328989143, 0);
  sqcRZGate(q, -0.016094368023992393, 0);
  sqcRYGate(q, 2.962617294896459, 1);
  sqcRZGate(q, -2.57946489920547, 1);
  sqcRYGate(q, -0.061620114542471786, 2);
  sqcRZGate(q, -2.556724092821803, 2);
  sqcRYGate(q, 2.6067463499333248, 3);
  sqcRZGate(q, 1.960512646487867, 3);
  sqcRYGate(q, 1.5606449709932915, 4);
  sqcRZGate(q, 0.02179737796563493, 4);
  sqcRYGate(q, -0.6641880710501472, 5);
  sqcRZGate(q, -2.0087612269399133, 5);
  sqcRYGate(q, -0.14890002599918328, 6);
  sqcRZGate(q, 1.7711954326939046, 6);
  sqcRYGate(q, 1.6235139512702705, 7);
  sqcRZGate(q, 3.113223217463427, 7);
  sqcRYGate(q, -3.0803074250398303, 8);
  sqcRZGate(q, 1.2043194332579652, 8);
  sqcRYGate(q, 0.01867733647932379, 9);
  sqcRZGate(q, 1.4407247645197172, 9);
  sqcRYGate(q, 0.0072628950898017105, 10);
  sqcRZGate(q, -1.577169253856435, 10);
  sqcRYGate(q, 3.1358698777072216, 11);
  sqcRZGate(q, -1.3901334210062881, 11);
  sqcRYGate(q, -0.0031079952107103386, 12);
  sqcRZGate(q, 0.928593255843484, 12);
  sqcRYGate(q, -3.1415206043179587, 13);
  sqcRZGate(q, 1.518521641380345, 13);
  sqcRYGate(q, 2.8581634577303063, 14);
  sqcRZGate(q, -0.2513773182965715, 14);
  sqcRYGate(q, 3.1389778446662073, 15);
  sqcRZGate(q, -2.9318535129962404, 15);
  sqcRYGate(q, 0.0006438340218511047, 16);
  sqcRZGate(q, -1.0964251983101425, 16);
  sqcRYGate(q, 7.696336584306351e-05, 17);
  sqcRZGate(q, 2.510301564020827, 17);
  sqcRYGate(q, -0.00013331127051671417, 18);
  sqcRZGate(q, 2.797151800243969, 18);
  sqcRYGate(q, 3.2156457002940904e-05, 19);
  sqcRZGate(q, -2.7936910500261893, 19);
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
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, -0.005284081629233874, 0);
  sqcRZGate(q, -3.0817903426162543, 0);
  sqcRYGate(q, -0.00465612080887734, 1);
  sqcRZGate(q, -0.6171201837004977, 1);
  sqcRYGate(q, 0.013143594488584032, 2);
  sqcRZGate(q, -0.20836689461538369, 2);
  sqcRYGate(q, 0.009176599471501793, 3);
  sqcRZGate(q, 0.3410473041949791, 3);
  sqcRYGate(q, 1.587563223112807, 4);
  sqcRZGate(q, 0.8954329996186471, 4);
  sqcRYGate(q, -0.016050727361760053, 5);
  sqcRZGate(q, 2.9727569428230782, 5);
  sqcRYGate(q, 0.015371646848720387, 6);
  sqcRZGate(q, -3.0607746438725165, 6);
  sqcRYGate(q, 3.1108751925417675, 7);
  sqcRZGate(q, 3.116491421087689, 7);
  sqcRYGate(q, -0.017874194631589235, 8);
  sqcRZGate(q, -0.01561087309558377, 8);
  sqcRYGate(q, 3.1312214723746985, 9);
  sqcRZGate(q, -3.13283357834417, 9);
  sqcRYGate(q, -3.1181447158047977, 10);
  sqcRZGate(q, -0.0018628201521721703, 10);
  sqcRYGate(q, 3.0985371802629422, 11);
  sqcRZGate(q, 0.012600161109214802, 11);
  sqcRYGate(q, -3.1045946493799983, 12);
  sqcRZGate(q, 3.135290450685259, 12);
  sqcRYGate(q, 3.0244199283916795, 13);
  sqcRZGate(q, 3.1264637798778017, 13);
  sqcRYGate(q, -1.6908483295822698, 14);
  sqcRZGate(q, 0.028081323959050986, 14);
  sqcRYGate(q, -3.0242751740553695, 15);
  sqcRZGate(q, -0.015621357604831645, 15);
  sqcRYGate(q, 0.023006283827167236, 16);
  sqcRZGate(q, -0.006092927128574963, 16);
  sqcRYGate(q, -3.1372613279244, 17);
  sqcRZGate(q, -3.123178512714499, 17);
  sqcRYGate(q, 3.1408126708276485, 18);
  sqcRZGate(q, -0.5330109648082253, 18);
  sqcRYGate(q, -3.141466848590486, 19);
  sqcRZGate(q, 0.01690061239950147, 19);
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
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, 0.277088748289434, 0);
  sqcRZGate(q, 0.2494331112723112, 0);
  sqcRYGate(q, 0.80867126765646, 1);
  sqcRZGate(q, -2.8179561311902375, 1);
  sqcRYGate(q, -2.5961244209866945, 2);
  sqcRZGate(q, 0.19346155412790916, 2);
  sqcRYGate(q, 0.7471098839880131, 3);
  sqcRZGate(q, -2.7155138114015718, 3);
  sqcRYGate(q, 1.8115135730120322, 4);
  sqcRZGate(q, 0.429583493860207, 4);
  sqcRYGate(q, 2.198169559311421, 5);
  sqcRZGate(q, 0.4932953102971149, 5);
  sqcRYGate(q, -2.2366515240076503, 6);
  sqcRZGate(q, 0.4984360172402749, 6);
  sqcRYGate(q, 1.5069520427481737, 7);
  sqcRZGate(q, 0.49415679471044677, 7);
  sqcRYGate(q, -1.043101896241172, 8);
  sqcRZGate(q, -2.6488797332844256, 8);
  sqcRYGate(q, 2.2808137788464626, 9);
  sqcRZGate(q, 0.49215365250396786, 9);
  sqcRYGate(q, 1.0586774035286437, 10);
  sqcRZGate(q, 0.49362678039768293, 10);
  sqcRYGate(q, -1.5454121062626056, 11);
  sqcRZGate(q, 0.4960306500584385, 11);
  sqcRYGate(q, -1.0125181054063077, 12);
  sqcRZGate(q, -2.649658930945394, 12);
  sqcRYGate(q, 2.1653157386288604, 13);
  sqcRZGate(q, 0.4859120598882667, 13);
  sqcRYGate(q, 0.5245170330310813, 14);
  sqcRZGate(q, -2.683388382624534, 14);
  sqcRYGate(q, 2.1038499395453196, 15);
  sqcRZGate(q, 0.4851653299843654, 15);
  sqcRYGate(q, 1.0480957150818724, 16);
  sqcRZGate(q, 0.4881733538174729, 16);
  sqcRYGate(q, -1.018736202046215, 17);
  sqcRZGate(q, 0.4891889085290281, 17);
  sqcRYGate(q, -1.1460704684666747, 18);
  sqcRZGate(q, -2.6522021152832043, 18);
  sqcRYGate(q, 0.5207099262419783, 19);
  sqcRZGate(q, -2.652097925063581, 19);

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
