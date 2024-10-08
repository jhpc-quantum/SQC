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

  sqcRYGate(q, 3.023549003136338, 0);
  sqcRYGate(q, -1.82462602484237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3703253956990711, 0);
  sqcRYGate(q, 2.008463758715177, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.541217904270075, 2);
  sqcRYGate(q, 0.2787259736278722, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6717540503258472, 2);
  sqcRYGate(q, 3.1118456820163494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9059836377260808, 0);
  sqcRYGate(q, -2.62328504337552, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.770094171750852, 0);
  sqcRYGate(q, -0.5633730606678021, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6566145318420831, 1);
  sqcRYGate(q, 1.7957506890154697, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.347447533758578, 1);
  sqcRYGate(q, -1.6695897691767734, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7071086753499007, 0);
  sqcRYGate(q, -1.8499643885352999, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3463816151959267, 0);
  sqcRYGate(q, 0.4753315973101913, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.319117353580141, 1);
  sqcRYGate(q, -2.3913342664316515, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.23918117267206124, 1);
  sqcRYGate(q, 1.7558638254167855, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.844097967176201, 0);
  sqcRYGate(q, -0.0320184175032594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8449391874546553, 0);
  sqcRYGate(q, 2.913889225184197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8247037147488494, 2);
  sqcRYGate(q, 2.6963224757946502, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1191957255513343, 2);
  sqcRYGate(q, -2.52097887266409, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2633935827552403, 0);
  sqcRYGate(q, 0.4184185538446022, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4262209191195185, 0);
  sqcRYGate(q, 0.3088316559748973, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.346043951046132, 1);
  sqcRYGate(q, -0.23869198942249792, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.43655403011028326, 1);
  sqcRYGate(q, 1.4950515540754887, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6610063019152748, 0);
  sqcRYGate(q, 2.9932555720921017, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2999812379626614, 0);
  sqcRYGate(q, 1.313343527725893, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.27402635712190815, 1);
  sqcRYGate(q, -0.13854015820996324, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1096154576043475, 1);
  sqcRYGate(q, -2.892600863930993, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1716260696815708, 0);
  sqcRYGate(q, -0.051962162548017866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0461853332534337, 0);
  sqcRYGate(q, -2.79168431598817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.38489987856860797, 2);
  sqcRYGate(q, 0.9370182505120559, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.163368679047168, 2);
  sqcRYGate(q, 2.9731772326349755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.153938290724775, 0);
  sqcRYGate(q, 1.3023749878079514, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.88551290384163, 0);
  sqcRYGate(q, -3.104051871543654, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0601488353658812, 1);
  sqcRYGate(q, 2.3044774493732714, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4653270005628265, 1);
  sqcRYGate(q, 1.5929684268791486, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4975324195551156, 0);
  sqcRYGate(q, 2.995630254967205, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6099855743660862, 0);
  sqcRYGate(q, -0.4522805551306535, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7854137883338168, 1);
  sqcRYGate(q, 1.603628854360432, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.054386899838231, 1);
  sqcRYGate(q, 0.2132426450471352, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.16055748515381849, 0);
  sqcRYGate(q, -0.943109894214258, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8936121790732718, 0);
  sqcRYGate(q, 0.7502515416207745, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6006552876455028, 2);
  sqcRYGate(q, 2.667416401373494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0482785368822443, 2);
  sqcRYGate(q, -0.5542714332429296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3871802439973688, 0);
  sqcRYGate(q, 2.7251094537543112, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.17094606556614422, 0);
  sqcRYGate(q, -0.6107690691458307, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0211350354918953, 1);
  sqcRYGate(q, 1.743662257898706, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.962391944539898, 1);
  sqcRYGate(q, 1.5128389484873495, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8346839785301903, 0);
  sqcRYGate(q, 1.4811521896629085, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8051360467861417, 0);
  sqcRYGate(q, 0.9129473951272562, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.904124506858308, 1);
  sqcRYGate(q, -2.2208322675322547, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8581110643329315, 1);
  sqcRYGate(q, -2.411859416290479, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1156104981783324, 0);
  sqcRYGate(q, -2.0798859420878397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8455323825659729, 0);
  sqcRYGate(q, -1.1889598595495348, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.283728686558307, 2);
  sqcRYGate(q, -0.5096377776884258, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.203481013463323, 2);
  sqcRYGate(q, -1.3127511537041725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.167385463353109, 0);
  sqcRYGate(q, 0.8730650061901324, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.579606334367595, 0);
  sqcRYGate(q, 2.4633693803339436, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.277883668788454, 1);
  sqcRYGate(q, 2.2686082930145575, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4102171364977272, 1);
  sqcRYGate(q, -2.612001194432475, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.02856684668657028, 0);
  sqcRYGate(q, 1.8157496992958355, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9432254131952507, 0);
  sqcRYGate(q, -0.12960344929693002, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4501416663031044, 1);
  sqcRYGate(q, -1.6195388422199022, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1152967400239344, 1);
  sqcRYGate(q, 2.4544619363142424, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4437692269894411, 0);
  sqcRYGate(q, -0.2075769455792334, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8165117740514738, 0);
  sqcRYGate(q, 2.6247665505741042, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6785280021243714, 2);
  sqcRYGate(q, -0.8791257970757118, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.012450429904109, 2);
  sqcRYGate(q, -3.0440510030316847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9153937142191695, 0);
  sqcRYGate(q, -3.068372433745655, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6241342944018, 0);
  sqcRYGate(q, 0.9328236606240288, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0982570562324314, 1);
  sqcRYGate(q, -1.7454517724457328, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.057532305822324, 1);
  sqcRYGate(q, -1.4072231690351247, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8263078193383113, 0);
  sqcRYGate(q, 2.59256422507239, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7956774173680894, 0);
  sqcRYGate(q, -2.03508349717527, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5225660788762648, 1);
  sqcRYGate(q, 1.2282819756126004, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0590452212001134, 1);
  sqcRYGate(q, 2.9713674700390755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6613385976633375, 0);
  sqcRYGate(q, -1.6270188948142739, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.13783721932204, 0);
  sqcRYGate(q, -2.6606021964521096, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4794582764701192, 2);
  sqcRYGate(q, -2.0746990393623257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2684788859927254, 2);
  sqcRYGate(q, 1.76131894895965, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.020286947530385, 0);
  sqcRYGate(q, 1.8822919106844926, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8146464464746472, 0);
  sqcRYGate(q, -0.888957694395944, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.097247069656211, 1);
  sqcRYGate(q, 2.599496996596759, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.995792609369318, 1);
  sqcRYGate(q, -2.466591911928859, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2024183062759803, 0);
  sqcRYGate(q, 2.289504071667438, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9467870612499238, 0);
  sqcRYGate(q, 0.31131194756661823, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.09208955647711292, 1);
  sqcRYGate(q, 1.1834228096911676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6358007161791512, 1);
  sqcRYGate(q, -2.6663637756586778, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.978607811485125, 0);
  sqcRYGate(q, 0.23353976737052934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.832163233081197, 0);
  sqcRYGate(q, 2.4050001297006376, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5324058408783792, 2);
  sqcRYGate(q, -1.2519288083214954, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1028000457091145, 2);
  sqcRYGate(q, 0.4156573860444255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3037928596233392, 0);
  sqcRYGate(q, -0.5199251982887377, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.13584504875472156, 0);
  sqcRYGate(q, 0.12227930461601898, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.748017135355566, 1);
  sqcRYGate(q, 0.6828856165185327, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3032129255546505, 1);
  sqcRYGate(q, 0.1893042530850954, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.811672314689628, 0);
  sqcRYGate(q, -1.2379718687373442, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0599623087663477, 0);
  sqcRYGate(q, 0.3658196106259018, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.04015115527254487, 1);
  sqcRYGate(q, -0.11167620058584515, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.076688108798939, 1);
  sqcRYGate(q, 0.570265454828088, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.02279798995054108, 0);
  sqcRYGate(q, -1.0014689542899768, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8850710850080024, 0);
  sqcRYGate(q, -2.3876907282537636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.68432083808406, 2);
  sqcRYGate(q, -1.933474635025732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07148554629626425, 2);
  sqcRYGate(q, -1.1430488428508978, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3508999679074334, 0);
  sqcRYGate(q, -0.274688078891062, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1053438237170052, 0);
  sqcRYGate(q, -3.10296946223556, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2450170232127746, 1);
  sqcRYGate(q, 2.8315803186772794, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7231490873240025, 1);
  sqcRYGate(q, 2.068984158040564, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.606552458475547, 0);
  sqcRYGate(q, -1.547521650783534, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1011656126113678, 0);
  sqcRYGate(q, 1.288883988895048, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.503921996934992, 1);
  sqcRYGate(q, -0.693557245903137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8249251201069417, 1);
  sqcRYGate(q, 0.37387062325454856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8362793862326443, 0);
  sqcRYGate(q, -2.3490452253911194, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7237945675989685, 0);
  sqcRYGate(q, 2.3285898680328705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0720939410032222, 2);
  sqcRYGate(q, -0.39388790885236613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8103242054393767, 2);
  sqcRYGate(q, 0.305969721190094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3665912682055006, 0);
  sqcRYGate(q, 0.7843730051447748, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.352071578185543, 0);
  sqcRYGate(q, -2.0661622718263217, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6923255845117434, 1);
  sqcRYGate(q, 2.5187198428751834, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.31122639067053187, 1);
  sqcRYGate(q, -2.4442323744804684, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4688662947496, 0);
  sqcRYGate(q, 1.1003738390213063, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.16635800973552356, 0);
  sqcRYGate(q, -2.4506612563608825, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1509303841161485, 1);
  sqcRYGate(q, -0.08838691395392986, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4321483872543768, 1);
  sqcRYGate(q, -0.8761903848760776, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2164874276915145, 0);
  sqcRYGate(q, 1.0045634449269611, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.758743722858653, 0);
  sqcRYGate(q, -0.021511874595220526, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5284556055669123, 2);
  sqcRYGate(q, -2.4738863413578702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9820321324478154, 2);
  sqcRYGate(q, 2.8324067252530782, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8740757897023697, 0);
  sqcRYGate(q, -0.7322800342169664, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2707814028216364, 0);
  sqcRYGate(q, -1.9941661918070814, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5378840596340444, 1);
  sqcRYGate(q, 1.1546617181032126, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.150305077730712, 1);
  sqcRYGate(q, 0.354894376513216, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1521001856186315, 0);
  sqcRYGate(q, 0.7668475813285985, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1280845176807204, 0);
  sqcRYGate(q, -1.293486274302517, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.969732241134202, 1);
  sqcRYGate(q, 0.5858324799414119, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.375110545104767, 1);
  sqcRYGate(q, 2.467663068348059, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4639256882902218, 0);
  sqcRYGate(q, -0.8406526649880973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.841523555913514, 0);
  sqcRYGate(q, 1.1445840792454467, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.575797587992386, 2);
  sqcRYGate(q, 0.43587898476334364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5987584206704426, 2);
  sqcRYGate(q, -1.8989234808507678, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5621905494449857, 0);
  sqcRYGate(q, -2.930788634705452, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5363240594041736, 0);
  sqcRYGate(q, 2.341147998512193, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4759772029475715, 1);
  sqcRYGate(q, -2.3186703343493464, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3229526086922436, 1);
  sqcRYGate(q, 2.456943483720497, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.01324169675177119, 0);
  sqcRYGate(q, -0.5630506683849664, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.292552966661681, 0);
  sqcRYGate(q, -1.8363594037075883, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.248628086013989, 1);
  sqcRYGate(q, 3.065436336149747, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.15949197631333334, 1);
  sqcRYGate(q, 2.8980034584792156, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1294377109006184, 0);
  sqcRYGate(q, 1.3774190324223277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7162206883322928, 0);
  sqcRYGate(q, -0.3292114264446048, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.582433766881405, 2);
  sqcRYGate(q, 2.518870185809349, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0590292811532724, 2);
  sqcRYGate(q, 3.0623467941939264, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.504854575453414, 0);
  sqcRYGate(q, 2.9893395135134178, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.11498864830424615, 0);
  sqcRYGate(q, 2.7961808502881698, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8846307583345308, 1);
  sqcRYGate(q, 0.8818708522462848, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3829519337993057, 1);
  sqcRYGate(q, -0.979149843174902, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.513542022245444, 0);
  sqcRYGate(q, -2.48178668597306, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.496258523790921, 0);
  sqcRYGate(q, -2.574635220573723, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9341857964219717, 1);
  sqcRYGate(q, 0.987483584463023, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8450246591294734, 1);
  sqcRYGate(q, -1.0469564031919658, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.26794435611296574, 0);
  sqcRYGate(q, -0.8011261964963793, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3328587815494, 0);
  sqcRYGate(q, -0.5130555026611986, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6943945621053216, 2);
  sqcRYGate(q, -2.407803520442311, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.36921037479140983, 2);
  sqcRYGate(q, 2.6913104628219546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.42293228468695, 0);
  sqcRYGate(q, 1.845565250726029, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.06721314988356332, 0);
  sqcRYGate(q, -1.8787090192856217, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.563932601765753, 1);
  sqcRYGate(q, -2.5079237151023506, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.029395408266213, 1);
  sqcRYGate(q, 2.7757559290207108, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0369298952254984, 0);
  sqcRYGate(q, 1.095385333871618, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3192044406261956, 0);
  sqcRYGate(q, -2.541616722816788, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7037145304874804, 1);
  sqcRYGate(q, 1.7076437577548855, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8397909073202552, 1);
  sqcRYGate(q, -3.0480456265822022, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.09331837588438846, 0);
  sqcRYGate(q, 1.10710684160207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.30213201507472043, 0);
  sqcRYGate(q, 1.3576930997797403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6541436744853613, 2);
  sqcRYGate(q, -2.0367211680702946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.12447416463565884, 2);
  sqcRYGate(q, -1.805081999517696, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.983179333913936, 0);
  sqcRYGate(q, -1.111272542752814, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3786474023294546, 0);
  sqcRYGate(q, 2.8910048344484163, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5898966820316609, 1);
  sqcRYGate(q, -0.356898762446308, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8832478769310923, 1);
  sqcRYGate(q, 0.0718519582275768, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0665677773222724, 0);
  sqcRYGate(q, 0.3566865360609485, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2863657653699805, 0);
  sqcRYGate(q, 0.5738544135546557, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5940217010086062, 1);
  sqcRYGate(q, 0.730090345929753, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2314610151371692, 1);
  sqcRYGate(q, -2.5448175578199472, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.022869215709740764, 0);
  sqcRYGate(q, 0.6734267503494527, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.30968201487561886, 0);
  sqcRYGate(q, -2.0755845181519605, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2419890808124228, 2);
  sqcRYGate(q, -1.83564973316021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.021135737448513, 2);
  sqcRYGate(q, -1.22005131421506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9683306294859144, 0);
  sqcRYGate(q, 0.7938326499166469, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7757681829472293, 0);
  sqcRYGate(q, -0.1262075205946616, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9257563180922435, 1);
  sqcRYGate(q, -1.1825009760263505, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.37385650297485096, 1);
  sqcRYGate(q, -2.295746055571744, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.21698231404217724, 0);
  sqcRYGate(q, 2.2479050890565486, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.34089961953355546, 0);
  sqcRYGate(q, -1.9878749424680944, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.124001585459217, 1);
  sqcRYGate(q, 1.9756157690142473, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.905373151685193, 1);
  sqcRYGate(q, 2.0340896798802977, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8401264395228882, 0);
  sqcRYGate(q, -0.36354783645060884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0213703117441084, 0);
  sqcRYGate(q, 0.8584678682085424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8415663108680773, 2);
  sqcRYGate(q, 0.683091344990664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.39706625205259993, 2);
  sqcRYGate(q, 1.6350160475870907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7971605670119735, 0);
  sqcRYGate(q, 1.2545989908899464, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6844635764512975, 0);
  sqcRYGate(q, -2.902077803268878, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4509844054820586, 1);
  sqcRYGate(q, 1.2123741234144885, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.412034837586558, 1);
  sqcRYGate(q, -0.8272776938274554, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7490316982022412, 0);
  sqcRYGate(q, 0.4124198181797398, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.131276571862434, 0);
  sqcRYGate(q, 3.005240769053963, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3090105437302366, 1);
  sqcRYGate(q, -2.073957971332491, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.24335355138509218, 1);
  sqcRYGate(q, 1.9746246335538888, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3963707255146095, 0);
  sqcRYGate(q, 0.5668930242056587, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.29671615896702, 0);
  sqcRYGate(q, 2.0759081791304563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4598699948397567, 2);
  sqcRYGate(q, -2.130727814887543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8626526642845, 2);
  sqcRYGate(q, -1.3456889678978161, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.289914159541183, 0);
  sqcRYGate(q, -2.0092187318198476, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.095472944592646, 0);
  sqcRYGate(q, 1.520795753232628, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9711118969739418, 1);
  sqcRYGate(q, -1.944812357445004, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0769061365850283, 1);
  sqcRYGate(q, 1.4275023875931023, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.45184267629534974, 0);
  sqcRYGate(q, 2.567391257403067, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.401598620442385, 0);
  sqcRYGate(q, 2.9725827599452046, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1010674255479524, 1);
  sqcRYGate(q, 1.4377004198758436, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8542868718455578, 1);
  sqcRYGate(q, -1.4368932401509895, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.007423335189917, 0);
  sqcRYGate(q, 1.7676311808453464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5101351999530959, 0);
  sqcRYGate(q, 1.7618645734931806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.166523463119674, 2);
  sqcRYGate(q, -1.6701261703127157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1930832739857293, 2);
  sqcRYGate(q, -1.066581857333919, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8106904046306518, 0);
  sqcRYGate(q, 0.20421199866932224, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.07004076524150271, 0);
  sqcRYGate(q, 1.5739014091129673, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3898470876229285, 1);
  sqcRYGate(q, 2.6967244263961283, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1034976246133468, 1);
  sqcRYGate(q, -1.7900582227715338, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1946234238077564, 0);
  sqcRYGate(q, -3.121229484239495, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8617075413032913, 0);
  sqcRYGate(q, 2.7250314098158492, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3753785615566887, 1);
  sqcRYGate(q, 0.5983380414410521, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9654727406867056, 1);
  sqcRYGate(q, -1.0937293030202033, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3415122887649029, 0);
  sqcRYGate(q, 2.1577055517658073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8918954712836498, 0);
  sqcRYGate(q, 1.205257816712579, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.16459498462813915, 2);
  sqcRYGate(q, 2.922667535316205, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.007992128008189, 2);
  sqcRYGate(q, 1.7209222818192642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4385077932668686, 0);
  sqcRYGate(q, 0.6798183653266667, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8132946989769277, 0);
  sqcRYGate(q, -2.556005308034453, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8948326838769416, 1);
  sqcRYGate(q, 0.060273464765868354, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.38353307672316833, 1);
  sqcRYGate(q, 2.881965558867651, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.546564476092735, 0);
  sqcRYGate(q, -0.4529710632824946, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6765656204289321, 0);
  sqcRYGate(q, 0.740728199529328, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0774428111047385, 1);
  sqcRYGate(q, 1.7232000330262578, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0226586368776593, 1);
  sqcRYGate(q, 1.3818326809841286, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0061489882265409, 0);
  sqcRYGate(q, -2.179788465414612, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.49152515905253047, 0);
  sqcRYGate(q, -0.45502015270401336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6605219432166634, 2);
  sqcRYGate(q, -2.150997942882995, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9411371901644965, 2);
  sqcRYGate(q, 1.4093786157849655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.816970473517836, 0);
  sqcRYGate(q, -0.4366646741779834, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5757914752535656, 0);
  sqcRYGate(q, -0.85846570799775, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.897986558530124, 1);
  sqcRYGate(q, -3.0162260869101463, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9276132221829041, 1);
  sqcRYGate(q, 0.04206523161828863, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2201078724381806, 0);
  sqcRYGate(q, 1.9616700090649601, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4093823651985167, 0);
  sqcRYGate(q, -0.9096584442137257, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.30740470172155326, 1);
  sqcRYGate(q, 2.4667397349620557, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2848560465554737, 1);
  sqcRYGate(q, -0.9193823246924414, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2215960886132455, 0);
  sqcRYGate(q, -3.0926990793891513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9567061601556699, 0);
  sqcRYGate(q, 0.5253234013260526, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8461733774493396, 2);
  sqcRYGate(q, -0.9065507022763342, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9511186130968987, 2);
  sqcRYGate(q, 0.15161115542556924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9614129292515499, 0);
  sqcRYGate(q, 1.213538686239083, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5673748152643046, 0);
  sqcRYGate(q, 1.9941356715108753, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9633816228143807, 1);
  sqcRYGate(q, -0.6582524314440715, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.81729451283565, 1);
  sqcRYGate(q, -2.844642280043347, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0830798984821646, 0);
  sqcRYGate(q, 1.9726954703469834, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3735506908837651, 0);
  sqcRYGate(q, 2.0986893428570785, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.077442870002783, 1);
  sqcRYGate(q, -1.958182663025104, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.694978659709634, 1);
  sqcRYGate(q, -0.17307317665319177, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.03103619997264, 0);
  sqcRYGate(q, 1.2866879045721784, 1);
  sqcRYGate(q, 2.6987854831330225, 2);
  sqcRYGate(q, -0.1397584843812174, 3);

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
