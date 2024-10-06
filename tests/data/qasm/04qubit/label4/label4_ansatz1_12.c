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

  sqcRYGate(q, 0.30419453399533397, 0);
  sqcRZGate(q, -1.2962071091530207, 0);
  sqcRYGate(q, 2.6612839973299636, 1);
  sqcRZGate(q, -0.438450775342484, 1);
  sqcRYGate(q, -1.1367460333044743, 2);
  sqcRZGate(q, -2.9333728657039044, 2);
  sqcRYGate(q, -2.716140030087513, 3);
  sqcRZGate(q, -1.4662866178724956, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6096246140030432, 0);
  sqcRZGate(q, 2.606259284896036, 0);
  sqcRYGate(q, 0.621618188623617, 1);
  sqcRZGate(q, 1.6478626185310867, 1);
  sqcRYGate(q, 0.6668128078087765, 2);
  sqcRZGate(q, -1.2067744624788084, 2);
  sqcRYGate(q, -0.14443454853512416, 3);
  sqcRZGate(q, -1.8588977152038526, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.19039514816703323, 0);
  sqcRZGate(q, -0.3092363648915877, 0);
  sqcRYGate(q, 2.9948388655378846, 1);
  sqcRZGate(q, -1.457834808393401, 1);
  sqcRYGate(q, 2.16534993497927, 2);
  sqcRZGate(q, -1.3402614834021334, 2);
  sqcRYGate(q, -2.9555294220301866, 3);
  sqcRZGate(q, 0.0287584889279431, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2260114704519056, 0);
  sqcRZGate(q, -2.8260118344482277, 0);
  sqcRYGate(q, -2.0112739513581257, 1);
  sqcRZGate(q, -2.3339146499634422, 1);
  sqcRYGate(q, -2.5172992342473473, 2);
  sqcRZGate(q, 1.8716060931186842, 2);
  sqcRYGate(q, -2.4010430208779954, 3);
  sqcRZGate(q, 0.24523161689909304, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.09541490861696289, 0);
  sqcRZGate(q, -0.6270191615651733, 0);
  sqcRYGate(q, 1.9554246049388695, 1);
  sqcRZGate(q, -0.7971968929729725, 1);
  sqcRYGate(q, -0.9022495208069216, 2);
  sqcRZGate(q, -0.23944087866271585, 2);
  sqcRYGate(q, -1.666486432381884, 3);
  sqcRZGate(q, -1.5752091654728133, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5764146945727708, 0);
  sqcRZGate(q, 1.1695490881002781, 0);
  sqcRYGate(q, -2.9906222467173653, 1);
  sqcRZGate(q, -1.6021230958556023, 1);
  sqcRYGate(q, 3.0185939903197214, 2);
  sqcRZGate(q, 3.0200728701046526, 2);
  sqcRYGate(q, -0.633277938297853, 3);
  sqcRZGate(q, 2.433985479009016, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5268774843207704, 0);
  sqcRZGate(q, 2.1593195747423737, 0);
  sqcRYGate(q, -0.9552264267305102, 1);
  sqcRZGate(q, 0.40249684932060736, 1);
  sqcRYGate(q, -1.7597901879324913, 2);
  sqcRZGate(q, 0.915575999930221, 2);
  sqcRYGate(q, -0.607655563013429, 3);
  sqcRZGate(q, 0.7056338137436448, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7928605301720202, 0);
  sqcRZGate(q, -0.4052340246697988, 0);
  sqcRYGate(q, 1.96102039927326, 1);
  sqcRZGate(q, 2.066651023114747, 1);
  sqcRYGate(q, -2.1457484742001203, 2);
  sqcRZGate(q, 0.4318105422917323, 2);
  sqcRYGate(q, -1.9683924876547143, 3);
  sqcRZGate(q, 2.139827893823696, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5454247660934364, 0);
  sqcRZGate(q, 1.463191051992231, 0);
  sqcRYGate(q, -0.7355751609688655, 1);
  sqcRZGate(q, -0.2425972256040382, 1);
  sqcRYGate(q, -2.8183442867983923, 2);
  sqcRZGate(q, 1.4357307260959642, 2);
  sqcRYGate(q, -0.768400338746539, 3);
  sqcRZGate(q, 2.2473519835323224, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.12511848710266982, 0);
  sqcRZGate(q, -1.9346308905592318, 0);
  sqcRYGate(q, 2.00662032745952, 1);
  sqcRZGate(q, 1.1549083388341905, 1);
  sqcRYGate(q, -1.2869585349832553, 2);
  sqcRZGate(q, 0.09976305808228414, 2);
  sqcRYGate(q, 0.8895465687418804, 3);
  sqcRZGate(q, 1.4895144470456507, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9088404598550898, 0);
  sqcRZGate(q, -2.8484026813909944, 0);
  sqcRYGate(q, -0.18157163822946784, 1);
  sqcRZGate(q, -3.0945436369971095, 1);
  sqcRYGate(q, 1.7103666722532713, 2);
  sqcRZGate(q, 0.8722268575493706, 2);
  sqcRYGate(q, 3.0107786771988265, 3);
  sqcRZGate(q, 2.8449646473394603, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8265040280895963, 0);
  sqcRZGate(q, -3.092152838389911, 0);
  sqcRYGate(q, -1.5964075851986665, 1);
  sqcRZGate(q, 1.7381927258046712, 1);
  sqcRYGate(q, 2.236315430469716, 2);
  sqcRZGate(q, -1.8835825983663508, 2);
  sqcRYGate(q, 0.832634746597793, 3);
  sqcRZGate(q, -1.405637617264343, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.186175395042369, 0);
  sqcRZGate(q, -0.9200138443503952, 0);
  sqcRYGate(q, 2.3882476727047846, 1);
  sqcRZGate(q, 2.9190907277384945, 1);
  sqcRYGate(q, 0.0748807131042044, 2);
  sqcRZGate(q, 2.971607994011822, 2);
  sqcRYGate(q, 0.980807858364197, 3);
  sqcRZGate(q, -1.2259876804259573, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8269049436622637, 0);
  sqcRZGate(q, -2.114622823396929, 0);
  sqcRYGate(q, 2.413559136726976, 1);
  sqcRZGate(q, 2.131086433343726, 1);
  sqcRYGate(q, 3.134693643057117, 2);
  sqcRZGate(q, -2.6280943283706093, 2);
  sqcRYGate(q, 2.9805846739547803, 3);
  sqcRZGate(q, -2.783770857002971, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3916507736219068, 0);
  sqcRZGate(q, -0.2709994181085432, 0);
  sqcRYGate(q, -2.3096280254797503, 1);
  sqcRZGate(q, -2.5463553728247645, 1);
  sqcRYGate(q, -2.2897942825844826, 2);
  sqcRZGate(q, 1.6781336037538792, 2);
  sqcRYGate(q, -3.0554250964996417, 3);
  sqcRZGate(q, 0.30684992214680573, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6780783839819375, 0);
  sqcRZGate(q, -0.4780061487666534, 0);
  sqcRYGate(q, 0.7366685503803517, 1);
  sqcRZGate(q, 1.6253026742892214, 1);
  sqcRYGate(q, 1.272685999665745, 2);
  sqcRZGate(q, 0.9634430284977948, 2);
  sqcRYGate(q, -1.4607084640525745, 3);
  sqcRZGate(q, 0.31027378074144085, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
