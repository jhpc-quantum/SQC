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

  sqcRYGate(q, 0.04653483568552108, 0);
  sqcRYGate(q, -0.6937773277904479, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3203898488536726, 0);
  sqcRYGate(q, 2.1540585548411517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.060566995373468, 2);
  sqcRYGate(q, -2.969873667675996, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2314452920274124, 2);
  sqcRYGate(q, -0.11387182189292838, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1839583581793196, 0);
  sqcRYGate(q, 2.167770389558405, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7178311477975133, 0);
  sqcRYGate(q, 0.4893547371609916, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8791351393160185, 1);
  sqcRYGate(q, -0.9543820236682325, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5145491690273176, 1);
  sqcRYGate(q, -1.8331881546409161, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.02828793454057, 0);
  sqcRYGate(q, 1.4989700725294621, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3556485455621896, 0);
  sqcRYGate(q, -1.608330600874365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.378399324148251, 2);
  sqcRYGate(q, -0.7381946941584818, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8480057921078052, 2);
  sqcRYGate(q, 1.1254170744663732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.697728908006464, 0);
  sqcRYGate(q, 1.5105027622617555, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.24757812044240296, 0);
  sqcRYGate(q, -1.8457991327859935, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8531466074585605, 1);
  sqcRYGate(q, 0.3546014283527153, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.14561480943918959, 1);
  sqcRYGate(q, 2.882303848089492, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8780920395841306, 0);
  sqcRYGate(q, -2.3824428396639816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4148222421495607, 0);
  sqcRYGate(q, 2.0358355440806433, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.009484235987313525, 2);
  sqcRYGate(q, 2.40515077584634, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7011343564245037, 2);
  sqcRYGate(q, -1.091207139113665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5699094714865514, 0);
  sqcRYGate(q, -1.8013775753439203, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.248916706870651, 0);
  sqcRYGate(q, -3.0440643365313957, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1377117899937284, 1);
  sqcRYGate(q, 1.7649926411380736, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.19531218676403217, 1);
  sqcRYGate(q, 0.21952020562268956, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.780725916231567, 0);
  sqcRYGate(q, -0.4076977026231807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.589506864876645, 0);
  sqcRYGate(q, -0.11167636490726054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.759030372303327, 2);
  sqcRYGate(q, -0.42190685288179886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4227132147218904, 2);
  sqcRYGate(q, -1.7371326009678354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7697467605095012, 0);
  sqcRYGate(q, 1.2376780018333615, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.11457821138087176, 0);
  sqcRYGate(q, -0.1155196712285415, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.40239658999270517, 1);
  sqcRYGate(q, -2.429282874674351, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.31745396481994087, 1);
  sqcRYGate(q, -1.9621129701442985, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4871676695691193, 0);
  sqcRYGate(q, -2.2479418316171467, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6319659504624795, 0);
  sqcRYGate(q, -2.744954909952122, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5431199839956546, 2);
  sqcRYGate(q, -1.67785632054263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.29398092162310985, 2);
  sqcRYGate(q, -0.45913818328667855, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2998521086704136, 0);
  sqcRYGate(q, 2.2977704524520766, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0464732271451203, 0);
  sqcRYGate(q, -0.7078583527398027, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5335542049083536, 1);
  sqcRYGate(q, 2.2355311385863907, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.0641496724487638, 1);
  sqcRYGate(q, -0.16289043080648233, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2656243945875199, 0);
  sqcRYGate(q, -1.2627215755441021, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.18164630669138632, 0);
  sqcRYGate(q, 2.8825440352351146, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2598285163541792, 2);
  sqcRYGate(q, -1.5516225006345756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.26833148833827636, 2);
  sqcRYGate(q, 0.8701585552123082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.678971715711654, 0);
  sqcRYGate(q, -2.2396060494608876, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.946113528707624, 0);
  sqcRYGate(q, -1.5007392368836447, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.1692795926470847, 1);
  sqcRYGate(q, 0.2960712853130216, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9721327700877962, 1);
  sqcRYGate(q, -2.211861310762452, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7120400977924284, 0);
  sqcRYGate(q, 2.4276979560272225, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.399237161489138, 0);
  sqcRYGate(q, -1.0829369559101316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21074915921920181, 2);
  sqcRYGate(q, -0.18942306378500096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.091824932704321, 2);
  sqcRYGate(q, 1.1223311683306845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5971088263163917, 0);
  sqcRYGate(q, -0.2199692828765139, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.304921661834754, 0);
  sqcRYGate(q, -1.7175402046067596, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6751082998261393, 1);
  sqcRYGate(q, 0.15820207803045014, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5290126472621655, 1);
  sqcRYGate(q, -1.5398461194452802, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8748687402775026, 0);
  sqcRYGate(q, 1.0345597102449722, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4026020133040569, 0);
  sqcRYGate(q, -0.9211364356732084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4097781822746702, 2);
  sqcRYGate(q, 3.128681996616911, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1888587760187157, 2);
  sqcRYGate(q, -2.9661116895490145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.097287177636412, 0);
  sqcRYGate(q, -0.10633221959248143, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4538242555483525, 0);
  sqcRYGate(q, -2.509048525069324, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.009696047851027, 1);
  sqcRYGate(q, 1.1665997933415022, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7315491789001607, 1);
  sqcRYGate(q, -2.893273246590698, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5658104881371804, 0);
  sqcRYGate(q, -1.5562756303119203, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.930692759552315, 0);
  sqcRYGate(q, 2.0380519995722186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0462952696526164, 2);
  sqcRYGate(q, -2.950824500342291, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.706408209393377, 2);
  sqcRYGate(q, 2.8909683366451273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7680938522807603, 0);
  sqcRYGate(q, 2.1199837614004897, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.21863547605119482, 0);
  sqcRYGate(q, 0.18066865560668433, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3835744706872166, 1);
  sqcRYGate(q, -2.1830927379264864, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9436059628263695, 1);
  sqcRYGate(q, 1.4549472042912406, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9686346512613175, 0);
  sqcRYGate(q, 1.38837772193755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.431599163426088, 0);
  sqcRYGate(q, 1.398198017502211, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6780314239149066, 2);
  sqcRYGate(q, -1.4899175361318389, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4746261117721, 2);
  sqcRYGate(q, 1.6692079340142492, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7430326233138204, 0);
  sqcRYGate(q, 1.2299985559866649, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4602787241891417, 0);
  sqcRYGate(q, 2.017437862496645, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0093684753599197, 1);
  sqcRYGate(q, 1.232971863551503, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1273041539363176, 1);
  sqcRYGate(q, 2.7008798947835646, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1044539575845524, 0);
  sqcRYGate(q, 0.12187520251940853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6487939841394379, 0);
  sqcRYGate(q, -1.4802992029675588, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20858741389693305, 2);
  sqcRYGate(q, 2.7163716886461913, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4806986250692846, 2);
  sqcRYGate(q, -1.8128354609491704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0817275571664067, 0);
  sqcRYGate(q, 0.8269218395516411, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.08890082544434376, 0);
  sqcRYGate(q, -0.4472994728691191, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9075588421850007, 1);
  sqcRYGate(q, -3.0586506449675364, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4072778036011398, 1);
  sqcRYGate(q, 2.3044893598057037, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9700667052832861, 0);
  sqcRYGate(q, -2.5410114388051794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2922664475055603, 0);
  sqcRYGate(q, -2.5921114619009913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.978065299248159, 2);
  sqcRYGate(q, 0.4289582423116139, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.701936413681293, 2);
  sqcRYGate(q, 0.5169332845652184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5348206739681014, 0);
  sqcRYGate(q, 0.6810407204794213, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8104899871489615, 0);
  sqcRYGate(q, -0.8149867767131438, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5852910863987966, 1);
  sqcRYGate(q, -1.4309956850969607, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.526982549125956, 1);
  sqcRYGate(q, -0.36812731897796036, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4636245773797056, 0);
  sqcRYGate(q, 2.5672096093995047, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.478568626887746, 0);
  sqcRYGate(q, -3.045105073194143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.981763803053288, 2);
  sqcRYGate(q, 0.26779063814467563, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0661029008575289, 2);
  sqcRYGate(q, -1.4650111606202723, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7251314000660543, 0);
  sqcRYGate(q, -1.3081845132300354, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.38155681929935703, 0);
  sqcRYGate(q, -2.723655359739272, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4267328938775634, 1);
  sqcRYGate(q, 1.9222847330661597, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.496873356635038, 1);
  sqcRYGate(q, -1.0002108423982738, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4944573447714884, 0);
  sqcRYGate(q, 1.3103140624765466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9589776221243334, 0);
  sqcRYGate(q, -2.586003585727686, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3622281522618387, 2);
  sqcRYGate(q, 0.24118095105759813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.734559888020285, 2);
  sqcRYGate(q, 1.4469629061929403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.476804801798353, 0);
  sqcRYGate(q, 1.9901592121986913, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.255264696224161, 0);
  sqcRYGate(q, 1.4639273691118406, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3287051940876475, 1);
  sqcRYGate(q, 1.6909515102377224, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2447582037968576, 1);
  sqcRYGate(q, -1.1248753625306516, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7784412329648744, 0);
  sqcRYGate(q, 0.017397204263125274, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0668645921892752, 0);
  sqcRYGate(q, -0.011808726262781732, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.234392418521118, 2);
  sqcRYGate(q, 1.5653807904448016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9354316401967075, 2);
  sqcRYGate(q, -2.9718171407121767, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.327791265193892, 0);
  sqcRYGate(q, 0.9973082136950566, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.108397019945624, 0);
  sqcRYGate(q, -0.2670905209748158, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5366890769411059, 1);
  sqcRYGate(q, -2.959667557676479, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.826092382325883, 1);
  sqcRYGate(q, -1.610861314884385, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3693422419321457, 0);
  sqcRYGate(q, -2.8507493273585576, 1);
  sqcRYGate(q, 1.989736757879073, 2);
  sqcRYGate(q, -0.5163275378273555, 3);

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
