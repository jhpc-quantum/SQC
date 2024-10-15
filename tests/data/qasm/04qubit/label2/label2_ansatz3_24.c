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

  sqcRYGate(q, 2.361628877747326, 0);
  sqcRZGate(q, 2.5351897701730683, 0);
  sqcRYGate(q, -1.1988976166893035, 1);
  sqcRZGate(q, -2.4908872737398142, 1);
  sqcRYGate(q, -0.03766942378848093, 2);
  sqcRZGate(q, 2.0139864095059714, 2);
  sqcRYGate(q, -1.9701608286733407, 3);
  sqcRZGate(q, -0.23320133765222134, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.2923782401219345, 0);
  sqcRZGate(q, -1.3417481254452301, 0);
  sqcRYGate(q, -1.9153575259552948, 1);
  sqcRZGate(q, 2.468314898275775, 1);
  sqcRYGate(q, 0.5395776347289312, 2);
  sqcRZGate(q, -0.13189637261614306, 2);
  sqcRYGate(q, 0.9517911074996137, 3);
  sqcRZGate(q, 2.6058401816368777, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8039175046982194, 0);
  sqcRZGate(q, -1.0815965327977033, 0);
  sqcRYGate(q, 0.6913696303388255, 1);
  sqcRZGate(q, 3.0311159595286563, 1);
  sqcRYGate(q, 2.9664539368494434, 2);
  sqcRZGate(q, -3.1366771079009266, 2);
  sqcRYGate(q, -2.8512229283646326, 3);
  sqcRZGate(q, 1.0360890090763133, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.0323860799115523, 0);
  sqcRZGate(q, -1.794530464607668, 0);
  sqcRYGate(q, 1.2462078704659936, 1);
  sqcRZGate(q, -1.478177910116825, 1);
  sqcRYGate(q, 2.8712810195452168, 2);
  sqcRZGate(q, 2.7182063961772784, 2);
  sqcRYGate(q, 2.7873944729281717, 3);
  sqcRZGate(q, -2.0986140574397023, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.557062512172476, 0);
  sqcRZGate(q, 1.352106720128186, 0);
  sqcRYGate(q, -1.0166141323084807, 1);
  sqcRZGate(q, 3.1381938598943, 1);
  sqcRYGate(q, 1.769035459045013, 2);
  sqcRZGate(q, -1.8088957297744663, 2);
  sqcRYGate(q, 2.167039046798462, 3);
  sqcRZGate(q, -2.593000860454946, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.5904915533413968, 0);
  sqcRZGate(q, -2.0827932910606073, 0);
  sqcRYGate(q, -1.253600334929195, 1);
  sqcRZGate(q, 1.821192694484755, 1);
  sqcRYGate(q, 1.7821450005802961, 2);
  sqcRZGate(q, 2.1348713435067967, 2);
  sqcRYGate(q, -0.8433959311460537, 3);
  sqcRZGate(q, -0.569217434412579, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.0563706054368796, 0);
  sqcRZGate(q, 2.5481600687234893, 0);
  sqcRYGate(q, -2.7895555503832745, 1);
  sqcRZGate(q, -2.397892679957681, 1);
  sqcRYGate(q, 1.1240161544155525, 2);
  sqcRZGate(q, 2.4306709376640563, 2);
  sqcRYGate(q, 1.9943662970176943, 3);
  sqcRZGate(q, 0.5837078636344725, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.23290726752606972, 0);
  sqcRZGate(q, 1.3381706981678567, 0);
  sqcRYGate(q, -1.464663468899519, 1);
  sqcRZGate(q, -2.7957217218335564, 1);
  sqcRYGate(q, 2.0303597074694495, 2);
  sqcRZGate(q, -0.04302907311615095, 2);
  sqcRYGate(q, 1.7401924303503853, 3);
  sqcRZGate(q, 2.267861456400331, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.7974324060277826, 0);
  sqcRZGate(q, -1.19524927816928, 0);
  sqcRYGate(q, -2.910215477799833, 1);
  sqcRZGate(q, 0.5204561724116376, 1);
  sqcRYGate(q, -1.3018489345499757, 2);
  sqcRZGate(q, -0.6602477866217702, 2);
  sqcRYGate(q, -0.1335372205583182, 3);
  sqcRZGate(q, 0.2305397030676038, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.65531130734019, 0);
  sqcRZGate(q, 0.5994778306232131, 0);
  sqcRYGate(q, -2.1775900837118574, 1);
  sqcRZGate(q, 0.22608725998304688, 1);
  sqcRYGate(q, 1.9527758313163899, 2);
  sqcRZGate(q, -1.065370441246122, 2);
  sqcRYGate(q, 2.0125039799843227, 3);
  sqcRZGate(q, 0.18020673435575835, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.016871577603766674, 0);
  sqcRZGate(q, -0.2228473347417447, 0);
  sqcRYGate(q, -3.0501831457727264, 1);
  sqcRZGate(q, 0.755120935673515, 1);
  sqcRYGate(q, 0.047147067325657994, 2);
  sqcRZGate(q, -0.895355871023698, 2);
  sqcRYGate(q, -2.775071998905742, 3);
  sqcRZGate(q, -2.25929748994974, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.5621911199070437, 0);
  sqcRZGate(q, -1.78362594025978, 0);
  sqcRYGate(q, -0.12878155496302665, 1);
  sqcRZGate(q, -1.1100727437602202, 1);
  sqcRYGate(q, 2.162374291812257, 2);
  sqcRZGate(q, -0.3639029597168117, 2);
  sqcRYGate(q, 3.0425707291560102, 3);
  sqcRZGate(q, 3.0450221351136477, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.2467793022246871, 0);
  sqcRZGate(q, 2.85960706481254, 0);
  sqcRYGate(q, 0.6052176181111584, 1);
  sqcRZGate(q, 1.9165630651025607, 1);
  sqcRYGate(q, 1.6083199928028136, 2);
  sqcRZGate(q, -1.544396409903412, 2);
  sqcRYGate(q, 1.1680633626160386, 3);
  sqcRZGate(q, 1.3490018733396154, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.4527272380106417, 0);
  sqcRZGate(q, -0.7200989452449278, 0);
  sqcRYGate(q, -0.7067867328015822, 1);
  sqcRZGate(q, 0.2920234887513322, 1);
  sqcRYGate(q, 2.8254894860842414, 2);
  sqcRZGate(q, -2.2985284101295576, 2);
  sqcRYGate(q, 1.7456961841224379, 3);
  sqcRZGate(q, 2.527113069733195, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.907527762951618, 0);
  sqcRZGate(q, -0.3170432419985536, 0);
  sqcRYGate(q, -2.8551012459382674, 1);
  sqcRZGate(q, 0.463373233465253, 1);
  sqcRYGate(q, -0.4929748265339449, 2);
  sqcRZGate(q, 0.7681150528655447, 2);
  sqcRYGate(q, 2.279917498021556, 3);
  sqcRZGate(q, -2.397350922003839, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7912207654527111, 0);
  sqcRZGate(q, 2.492900890835834, 0);
  sqcRYGate(q, -0.328314031249202, 1);
  sqcRZGate(q, -2.4021779398224865, 1);
  sqcRYGate(q, -2.6359993878731514, 2);
  sqcRZGate(q, 1.1228302540539519, 2);
  sqcRYGate(q, -0.12218900700536461, 3);
  sqcRZGate(q, -2.7741372981092516, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.283791002455838, 0);
  sqcRZGate(q, 0.050273086315441515, 0);
  sqcRYGate(q, -2.458559338074399, 1);
  sqcRZGate(q, -0.7008945460538336, 1);
  sqcRYGate(q, 0.9901734447070776, 2);
  sqcRZGate(q, 1.0830500852359137, 2);
  sqcRYGate(q, -1.8680486579312232, 3);
  sqcRZGate(q, -0.011113538427776957, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.5960183158980046, 0);
  sqcRZGate(q, -2.576381586094725, 0);
  sqcRYGate(q, 2.1420842465198007, 1);
  sqcRZGate(q, 2.8364058298143084, 1);
  sqcRYGate(q, -1.7759004439811878, 2);
  sqcRZGate(q, -0.4669492574294409, 2);
  sqcRYGate(q, -1.3799743773117548, 3);
  sqcRZGate(q, -1.7807053361669591, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.692488421617095, 0);
  sqcRZGate(q, 1.452196668808669, 0);
  sqcRYGate(q, -2.057661685417923, 1);
  sqcRZGate(q, 0.22473253699856421, 1);
  sqcRYGate(q, -1.1350662899406547, 2);
  sqcRZGate(q, 0.9741682714705108, 2);
  sqcRYGate(q, 3.1287645496900187, 3);
  sqcRZGate(q, -1.3341863598352266, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.274519611108129, 0);
  sqcRZGate(q, 0.32334447265472027, 0);
  sqcRYGate(q, 1.0275628577654343, 1);
  sqcRZGate(q, 2.2582530759830597, 1);
  sqcRYGate(q, -1.216937091957379, 2);
  sqcRZGate(q, -0.5610477508116068, 2);
  sqcRYGate(q, 1.8264801760561722, 3);
  sqcRZGate(q, 1.1856823174730193, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.20660544258876534, 0);
  sqcRZGate(q, 0.47651228486138325, 0);
  sqcRYGate(q, 0.800740975612972, 1);
  sqcRZGate(q, -2.216154318242877, 1);
  sqcRYGate(q, 2.5515821891554187, 2);
  sqcRZGate(q, -2.972691437899334, 2);
  sqcRYGate(q, 1.6863605202296352, 3);
  sqcRZGate(q, 2.504995677426585, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.8362605018973577, 0);
  sqcRZGate(q, -2.0888739621197283, 0);
  sqcRYGate(q, 1.6469717958098313, 1);
  sqcRZGate(q, 2.3582537598506224, 1);
  sqcRYGate(q, -0.20568234206089003, 2);
  sqcRZGate(q, -0.8085053850140675, 2);
  sqcRYGate(q, -2.5219945994194446, 3);
  sqcRZGate(q, -1.971975061749905, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.170905467085511, 0);
  sqcRZGate(q, 2.7908985127091457, 0);
  sqcRYGate(q, -0.015357445853934061, 1);
  sqcRZGate(q, 3.020253768029682, 1);
  sqcRYGate(q, 1.297134164973536, 2);
  sqcRZGate(q, 1.3216343618732962, 2);
  sqcRYGate(q, 0.5530247905430172, 3);
  sqcRZGate(q, -0.4089570794606809, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.655989364088722, 0);
  sqcRZGate(q, 2.611577021515688, 0);
  sqcRYGate(q, 2.956315639565433, 1);
  sqcRZGate(q, 3.0649225784041567, 1);
  sqcRYGate(q, -2.1890321838163587, 2);
  sqcRZGate(q, -2.949798994311, 2);
  sqcRYGate(q, 0.12700304418565622, 3);
  sqcRZGate(q, 2.3839176189317666, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8518171450583791, 0);
  sqcRZGate(q, 0.8612949883988651, 0);
  sqcRYGate(q, -0.35759599115728147, 1);
  sqcRZGate(q, -1.0053816672990878, 1);
  sqcRYGate(q, -1.6599733436316653, 2);
  sqcRZGate(q, -2.3578518826844417, 2);
  sqcRYGate(q, 0.34179294495780965, 3);
  sqcRZGate(q, -2.8472410710725384, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.7763433979983994, 0);
  sqcRZGate(q, 1.2387752011221496, 0);
  sqcRYGate(q, -0.5685545280974937, 1);
  sqcRZGate(q, -1.0957000046547227, 1);
  sqcRYGate(q, 0.0976400435937439, 2);
  sqcRZGate(q, -0.6029718570461137, 2);
  sqcRYGate(q, 0.11012771134482285, 3);
  sqcRZGate(q, -0.7543401747645412, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.78871220415488, 0);
  sqcRZGate(q, -2.2589425122331783, 0);
  sqcRYGate(q, -0.09346440105701607, 1);
  sqcRZGate(q, 2.6887299962884073, 1);
  sqcRYGate(q, -1.2895413815322554, 2);
  sqcRZGate(q, 1.6828939930500055, 2);
  sqcRYGate(q, -0.06696432430885671, 3);
  sqcRZGate(q, -1.9401641216912768, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.7073241566857975, 0);
  sqcRZGate(q, -2.701955250538561, 0);
  sqcRYGate(q, -3.1326426976100215, 1);
  sqcRZGate(q, 2.8771039767874114, 1);
  sqcRYGate(q, 1.8344183619149956, 2);
  sqcRZGate(q, 1.0434086789058064, 2);
  sqcRYGate(q, 2.3271019281750798, 3);
  sqcRZGate(q, -2.368995888709815, 3);

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
