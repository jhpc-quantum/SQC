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

  sqcRYGate(q, -2.7131716396345427, 0);
  sqcRYGate(q, -0.44189043654528964, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0415154205596497, 0);
  sqcRYGate(q, 2.9788243576494287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9700154305880577, 0);
  sqcRYGate(q, 0.04764831049399969, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.16882628084674955, 0);
  sqcRYGate(q, -2.163746685726413, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.834902567000324, 0);
  sqcRYGate(q, -1.3756277109580506, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9420409260516904, 0);
  sqcRYGate(q, -1.1769070170614326, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0364126888369634, 1);
  sqcRYGate(q, 1.038979163102014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1026744644902227, 1);
  sqcRYGate(q, -0.5892943933008069, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4534207464614957, 1);
  sqcRYGate(q, -0.6590926099174784, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.664402649449594, 1);
  sqcRYGate(q, -1.64857341006206, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8735308057815052, 2);
  sqcRYGate(q, 1.2117404108678798, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9868824899576323, 2);
  sqcRYGate(q, 2.6678143202422793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5768623661054977, 0);
  sqcRYGate(q, -0.3952472336588846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9754186204203465, 0);
  sqcRYGate(q, -1.2442188881630518, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.644650422245571, 0);
  sqcRYGate(q, 2.681640192985739, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.973350977702954, 0);
  sqcRYGate(q, 1.3300467030256213, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.921763058580801, 0);
  sqcRYGate(q, -0.07355128954108354, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3931571413207853, 0);
  sqcRYGate(q, 1.3177415311087017, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.185617900597072, 1);
  sqcRYGate(q, 1.6452523227962859, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1946787065734945, 1);
  sqcRYGate(q, 1.3524887534038532, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.821983477125505, 1);
  sqcRYGate(q, -2.228708744734811, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7346402028461458, 1);
  sqcRYGate(q, -1.581937851344625, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0751065509523006, 2);
  sqcRYGate(q, -0.9403930744881803, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6710596335769292, 2);
  sqcRYGate(q, 2.201377640727811, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1661304156798598, 0);
  sqcRYGate(q, 2.5535314148698074, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7138818909904625, 0);
  sqcRYGate(q, -1.5504416822218055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8379457565257316, 0);
  sqcRYGate(q, 2.5316873595673957, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.93986843093976, 0);
  sqcRYGate(q, 1.9481870062906186, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.122265906175498, 0);
  sqcRYGate(q, 0.9921787170247764, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.962207570397177, 0);
  sqcRYGate(q, 2.4238070235457054, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4642856519874135, 1);
  sqcRYGate(q, 2.1001227648509326, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0644801342340444, 1);
  sqcRYGate(q, -0.6343809482099215, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.238320692500124, 1);
  sqcRYGate(q, 2.009810421853386, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.922764243829789, 1);
  sqcRYGate(q, 0.8080867366923018, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0838544815934625, 2);
  sqcRYGate(q, -2.990289641650559, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6010349872141064, 2);
  sqcRYGate(q, 1.8817162189456649, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.108287743914738, 0);
  sqcRYGate(q, 0.35044046532780815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.904436767842315, 0);
  sqcRYGate(q, 1.6899548838246699, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1004353602516774, 0);
  sqcRYGate(q, 0.5945462667620776, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.15533442728900282, 0);
  sqcRYGate(q, 0.17927892305536552, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5834757004537152, 0);
  sqcRYGate(q, -1.9539261154355119, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7169316070724538, 0);
  sqcRYGate(q, -1.7027528138427341, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8903184663924986, 1);
  sqcRYGate(q, 2.4831862925840413, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.011261452631675821, 1);
  sqcRYGate(q, -0.1478546037264552, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9607629813617833, 1);
  sqcRYGate(q, -2.6097947208825896, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6874302491729223, 1);
  sqcRYGate(q, -0.40918948423693724, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8135152686798155, 2);
  sqcRYGate(q, -0.7851851722098884, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5969397524158415, 2);
  sqcRYGate(q, 0.151634091216789, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8731336138618817, 0);
  sqcRYGate(q, 3.0917819472732293, 1);
  sqcRYGate(q, 2.4467558248927848, 2);
  sqcRYGate(q, 2.5373508805576064, 3);

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
