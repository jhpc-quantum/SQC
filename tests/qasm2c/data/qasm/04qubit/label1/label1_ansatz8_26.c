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

  sqcRYGate(q, 2.684780428371554, 0);
  sqcRYGate(q, -0.4151683782387998, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.278364793344716, 0);
  sqcRYGate(q, -0.1619840548410656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.435452168857562, 2);
  sqcRYGate(q, -1.0397759871358563, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.17960558727730944, 2);
  sqcRYGate(q, 0.2601879522214086, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7023324015970935, 0);
  sqcRYGate(q, -2.6905546562950473, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2660867717294515, 0);
  sqcRYGate(q, 0.12859608981218398, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.683047433623023, 1);
  sqcRYGate(q, -1.1998033614467076, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.436688487738785, 1);
  sqcRYGate(q, 1.873422947785369, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7699048846020053, 0);
  sqcRYGate(q, -1.4372129681259285, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5562501116929556, 0);
  sqcRYGate(q, 2.166133598707903, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6631769356526716, 2);
  sqcRYGate(q, 2.8517296654800974, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5519319462032772, 2);
  sqcRYGate(q, -1.6037203615245739, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.699774514428373, 0);
  sqcRYGate(q, 1.0629262816936498, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.828193012243676, 0);
  sqcRYGate(q, 2.392928390594089, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.13908495367125737, 1);
  sqcRYGate(q, -2.510991546359137, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.24548590298263215, 1);
  sqcRYGate(q, -1.1525248239953318, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.023010369058579, 0);
  sqcRYGate(q, -1.6916293196704653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.538623039036117, 0);
  sqcRYGate(q, 1.3999767478255694, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.45504243101054753, 2);
  sqcRYGate(q, -0.8739113004306063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0742423248886082, 2);
  sqcRYGate(q, -0.7598485008014171, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.024771319045177, 0);
  sqcRYGate(q, -2.592415273932787, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5216199595567983, 0);
  sqcRYGate(q, -2.92627759847192, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8276405300098393, 1);
  sqcRYGate(q, 0.7279798936674213, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.31594979974638, 1);
  sqcRYGate(q, -2.305171917310821, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.04621782418060967, 0);
  sqcRYGate(q, 1.3136386945195424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5795519812295593, 0);
  sqcRYGate(q, -1.6953014332648646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.727046705233577, 2);
  sqcRYGate(q, -2.172743517772703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8685645699162524, 2);
  sqcRYGate(q, -0.05199705160728799, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0533387621300725, 0);
  sqcRYGate(q, 1.6310532539506015, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5571425195122464, 0);
  sqcRYGate(q, -1.420701948557646, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.344755860050652, 1);
  sqcRYGate(q, -0.8571596668147645, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.888434937747465, 1);
  sqcRYGate(q, 2.907887988123168, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8381608033050876, 0);
  sqcRYGate(q, 1.8298250383750894, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9887680388823112, 0);
  sqcRYGate(q, 1.9959015466417442, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7037905178347137, 2);
  sqcRYGate(q, 0.03997050560665327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7588845884012256, 2);
  sqcRYGate(q, 3.122508538295646, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5299754143393258, 0);
  sqcRYGate(q, -2.721093840411355, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7749034726858683, 0);
  sqcRYGate(q, -2.6220771141565296, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.08454824115954587, 1);
  sqcRYGate(q, -1.9335712635167788, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5827093329168884, 1);
  sqcRYGate(q, 1.405788603949753, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.575159325347526, 0);
  sqcRYGate(q, -2.6185979222443847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3267731951778452, 0);
  sqcRYGate(q, 2.2501368357337306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.734929152371968, 2);
  sqcRYGate(q, 0.9794686894011341, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5171234496071044, 2);
  sqcRYGate(q, -0.3676140679799746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.012827006346839, 0);
  sqcRYGate(q, 1.217002270304377, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4975149461388588, 0);
  sqcRYGate(q, 0.4868897214640304, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.36057276524324816, 1);
  sqcRYGate(q, 2.497603565463698, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8970464382668593, 1);
  sqcRYGate(q, 2.389143957196546, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8820089885793374, 0);
  sqcRYGate(q, -2.6290914042356177, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6523474249955665, 0);
  sqcRYGate(q, -0.47891998519262025, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6269633742280194, 2);
  sqcRYGate(q, 1.8661867340494753, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8564262575079908, 2);
  sqcRYGate(q, 0.3523444318909529, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2477266972673657, 0);
  sqcRYGate(q, -2.1980986721052718, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5035541752682082, 0);
  sqcRYGate(q, -0.12676461418542215, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.15136429873262, 1);
  sqcRYGate(q, -2.0548302716510207, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5518045846477185, 1);
  sqcRYGate(q, -2.5794657004941857, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1238464115284199, 0);
  sqcRYGate(q, 0.30761597787049855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9885990009933594, 0);
  sqcRYGate(q, 0.20486158377366812, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.77013637244726, 2);
  sqcRYGate(q, -1.3865091707645192, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.435799616274168, 2);
  sqcRYGate(q, 1.2959343222283166, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.16453431597439067, 0);
  sqcRYGate(q, -2.058253219112787, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7887915446942952, 0);
  sqcRYGate(q, 1.9748857686429862, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.363177209596817, 1);
  sqcRYGate(q, 1.092232107684791, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.12110238530268351, 1);
  sqcRYGate(q, -2.1105443773679022, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3809679714910676, 0);
  sqcRYGate(q, -2.0157996079425677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.513942278406252, 0);
  sqcRYGate(q, -2.8324228954644637, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.134237537517347, 2);
  sqcRYGate(q, -1.2840141686750153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7831163626674122, 2);
  sqcRYGate(q, -2.3077732925483962, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8969963259237895, 0);
  sqcRYGate(q, 1.6251105022064403, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2380184151491527, 0);
  sqcRYGate(q, -2.703555319246047, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.414612383652073, 1);
  sqcRYGate(q, 2.5245719131451656, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8083839316994887, 1);
  sqcRYGate(q, -2.045009288142557, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.395356917139817, 0);
  sqcRYGate(q, 0.24085355071572112, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3962240699150215, 0);
  sqcRYGate(q, 0.8488380331071808, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8084260665462608, 2);
  sqcRYGate(q, -0.2911015262939509, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6247656821152798, 2);
  sqcRYGate(q, -0.7935127471839283, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.776728790953817, 0);
  sqcRYGate(q, -0.6258767005165131, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.952073724259741, 0);
  sqcRYGate(q, -0.48149151492891823, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.0397719906376572, 1);
  sqcRYGate(q, 0.8126820225642876, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1197804336971418, 1);
  sqcRYGate(q, 0.10891006399972891, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0821894084666477, 0);
  sqcRYGate(q, -3.101949282360116, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9084078217006448, 0);
  sqcRYGate(q, -2.0196592399793785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3019196506859615, 2);
  sqcRYGate(q, -0.18898288178024236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1064810159986571, 2);
  sqcRYGate(q, 0.058500113911049034, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1770430740906628, 0);
  sqcRYGate(q, -0.9911329401355484, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7552785872638326, 0);
  sqcRYGate(q, 3.037583021804246, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5752852135720236, 1);
  sqcRYGate(q, 2.6678939023663935, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0293451020705198, 1);
  sqcRYGate(q, -1.9421123954103259, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8146367220382091, 0);
  sqcRYGate(q, 2.9421174643906, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.174279890959518, 0);
  sqcRYGate(q, -2.5183280948539513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5705290795655458, 2);
  sqcRYGate(q, -0.10432971415929515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5006391135745898, 2);
  sqcRYGate(q, -2.121529894011923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.04184439013424631, 0);
  sqcRYGate(q, -2.666777336414723, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6320348072510913, 0);
  sqcRYGate(q, -1.4063671839116132, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.673395102481838, 1);
  sqcRYGate(q, -2.176203931877057, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.641392518305936, 1);
  sqcRYGate(q, -0.10247411841472984, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.10851913824824244, 0);
  sqcRYGate(q, 0.16326150381734195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5731079001319548, 0);
  sqcRYGate(q, -0.9138247176443048, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9620324870794144, 2);
  sqcRYGate(q, 0.35290696005058864, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9449749167570245, 2);
  sqcRYGate(q, 2.63179833616208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.321130250680804, 0);
  sqcRYGate(q, -1.1334094526654543, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.871032107211316, 0);
  sqcRYGate(q, -1.2017032207821519, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6832787485957024, 1);
  sqcRYGate(q, -1.3890106158925997, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7408954843904283, 1);
  sqcRYGate(q, 2.0913415658198433, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6098411428187468, 0);
  sqcRYGate(q, 0.29359290830689133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9118747079377894, 0);
  sqcRYGate(q, -2.0240796706549906, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.147845653687086, 2);
  sqcRYGate(q, -1.675677260951404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5632445003392907, 2);
  sqcRYGate(q, 0.910495980486746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.19585351906435447, 0);
  sqcRYGate(q, 1.6136375430929668, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.34416645718475075, 0);
  sqcRYGate(q, 1.261754790177581, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9590736430177289, 1);
  sqcRYGate(q, 0.5066311581963729, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.510806505671642, 1);
  sqcRYGate(q, 1.198069104445409, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8295850979941948, 0);
  sqcRYGate(q, 1.170048904963189, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.089876181543456, 0);
  sqcRYGate(q, -0.910039002784362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1611314135764488, 2);
  sqcRYGate(q, 0.3471959758504201, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.087217198130837, 2);
  sqcRYGate(q, 2.068792768901905, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08586274363034097, 0);
  sqcRYGate(q, -0.17983968557775398, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.980160527309942, 0);
  sqcRYGate(q, 0.24702085907113802, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.365598011860097, 1);
  sqcRYGate(q, -2.5065927464454636, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.258468033780109, 1);
  sqcRYGate(q, 0.06818522840568825, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3389752720817176, 0);
  sqcRYGate(q, 2.688099702438944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4549621722223123, 0);
  sqcRYGate(q, -3.0978071077570717, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2215884311621839, 2);
  sqcRYGate(q, -2.6442338380247916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.27018438842375847, 2);
  sqcRYGate(q, -2.4736769966790404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2348450431895552, 0);
  sqcRYGate(q, 2.142326557621634, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.032321104736911, 0);
  sqcRYGate(q, 1.6482852123235436, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.904172782500573, 1);
  sqcRYGate(q, -1.0799736563501394, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.863466064415288, 1);
  sqcRYGate(q, 0.5323519488523751, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.749547553443027, 0);
  sqcRYGate(q, -1.679895219099696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.960372879151678, 0);
  sqcRYGate(q, -0.8097904981094511, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.26834259389267645, 2);
  sqcRYGate(q, -1.7497551593934055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1664994572260419, 2);
  sqcRYGate(q, -2.7656018659052615, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2378956887800485, 0);
  sqcRYGate(q, 1.1404573849371915, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.058832145929806, 0);
  sqcRYGate(q, -1.7989414542197837, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.013725198295657, 1);
  sqcRYGate(q, 1.3932263188349445, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2483329470474305, 1);
  sqcRYGate(q, 2.445283809137459, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7379618020531231, 0);
  sqcRYGate(q, 1.2583673641880027, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0688570954386876, 0);
  sqcRYGate(q, -2.839536341338131, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.141175967798639, 2);
  sqcRYGate(q, 0.6367615019088149, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1561336580713264, 2);
  sqcRYGate(q, -1.5556507393069936, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5384474558527788, 0);
  sqcRYGate(q, 1.0073185958689548, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.861807600806988, 0);
  sqcRYGate(q, -2.528926391587544, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7462170676881306, 1);
  sqcRYGate(q, 2.4124018622926178, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0197438285985765, 1);
  sqcRYGate(q, 0.9942101745389778, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3927553526371055, 0);
  sqcRYGate(q, 2.539515409820069, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0045002829402785, 0);
  sqcRYGate(q, -1.4851750044722785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.058255786453835334, 2);
  sqcRYGate(q, -1.874165163793553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.950381590697673, 2);
  sqcRYGate(q, -0.05121033856793211, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5408781814278916, 0);
  sqcRYGate(q, 1.2301080719402337, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1350276875077323, 0);
  sqcRYGate(q, 1.4338129205213919, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.754170607689058, 1);
  sqcRYGate(q, 0.07542941939059881, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8817673851945145, 1);
  sqcRYGate(q, -2.902923422878827, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6190660830507624, 0);
  sqcRYGate(q, -1.4487713072645363, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7743757010820205, 0);
  sqcRYGate(q, -2.9501986127520636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.19314350433723326, 2);
  sqcRYGate(q, -2.792335956366732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.13883897854667, 2);
  sqcRYGate(q, -0.7298452957338473, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4739800794180331, 0);
  sqcRYGate(q, -1.8064213732795946, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.24513985430840485, 0);
  sqcRYGate(q, -2.8782455949451897, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.954636141273796, 1);
  sqcRYGate(q, -1.1984921584588548, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3127877761222746, 1);
  sqcRYGate(q, -0.4555709888900541, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4289508938609873, 0);
  sqcRYGate(q, 2.005614007106275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20503683521396798, 0);
  sqcRYGate(q, -1.5723230843559788, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.001278239907044565, 2);
  sqcRYGate(q, 0.7309725445987683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0153160862485713, 2);
  sqcRYGate(q, 2.069117984841772, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.200315488955641, 0);
  sqcRYGate(q, -0.4433487079754802, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7525212402181953, 0);
  sqcRYGate(q, -2.903759420887491, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7008736719486066, 1);
  sqcRYGate(q, -1.3842084796082734, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7111074289508887, 1);
  sqcRYGate(q, 2.43063051819308, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.537558625954179, 0);
  sqcRYGate(q, -1.092154684246979, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.46189361871439716, 0);
  sqcRYGate(q, 2.9703384710283385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6711145060468438, 2);
  sqcRYGate(q, 0.68845023414275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.582762133108391, 2);
  sqcRYGate(q, -2.450194123268069, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.357962026748131, 0);
  sqcRYGate(q, -1.2120185557711847, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8456700003067974, 0);
  sqcRYGate(q, -3.073796081165817, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.551082983917367, 1);
  sqcRYGate(q, 3.005267298257053, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5709474511063655, 1);
  sqcRYGate(q, -0.4948330211231875, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6682440215484552, 0);
  sqcRYGate(q, 0.4548209188558672, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6813996832527344, 0);
  sqcRYGate(q, -1.7554903552719674, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9886742772723056, 2);
  sqcRYGate(q, -0.6443147779327992, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9361553681780537, 2);
  sqcRYGate(q, 2.1183850953641654, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6162382273223033, 0);
  sqcRYGate(q, 1.2021126292296809, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6900661545449579, 0);
  sqcRYGate(q, 0.0038384380862899192, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.04928274319877, 1);
  sqcRYGate(q, -0.9587619198566619, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7430730418912884, 1);
  sqcRYGate(q, -3.1178199716263815, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7690055294593696, 0);
  sqcRYGate(q, -1.9645032183609168, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6044477600941205, 0);
  sqcRYGate(q, 0.33715607953284493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5835135129053022, 2);
  sqcRYGate(q, 0.02500779556629082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2947552033554297, 2);
  sqcRYGate(q, -0.9434263594880541, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17197622155004044, 0);
  sqcRYGate(q, -1.9835152636303555, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.00015426658691165154, 0);
  sqcRYGate(q, -1.7018916414689782, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.960530815836428, 1);
  sqcRYGate(q, 2.51894993072311, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9452636211767222, 1);
  sqcRYGate(q, -3.042738758836953, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8854264322970593, 0);
  sqcRYGate(q, -1.2741495751122347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8501278350393421, 0);
  sqcRYGate(q, 1.618181041005835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1365958738629358, 2);
  sqcRYGate(q, -1.4375217527622448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.978283658858766, 2);
  sqcRYGate(q, 1.0593476232761505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.074325929705534, 0);
  sqcRYGate(q, 1.080558241198755, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0264022185181982, 0);
  sqcRYGate(q, 1.0988298793775684, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.341496889657632, 1);
  sqcRYGate(q, 2.3232482336928113, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4125863348015299, 1);
  sqcRYGate(q, 0.4995864577859855, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.43339406267696634, 0);
  sqcRYGate(q, 2.5631920981640635, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.128800074131805, 0);
  sqcRYGate(q, 0.23003773479358358, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9818616507479909, 2);
  sqcRYGate(q, -0.5283523671351888, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3382985872035073, 2);
  sqcRYGate(q, -1.967937117074304, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.25707588427433403, 0);
  sqcRYGate(q, 3.026485984754913, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6023522072455574, 0);
  sqcRYGate(q, -2.5918805259573445, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.16378230342465822, 1);
  sqcRYGate(q, -1.7393640043811154, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6147949431587176, 1);
  sqcRYGate(q, 0.8275327604260668, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.33997547048009, 0);
  sqcRYGate(q, 0.1228062578438527, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3045859631679748, 0);
  sqcRYGate(q, -0.6918251655425652, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2356057508235274, 2);
  sqcRYGate(q, 0.8936701635074835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5377801240386324, 2);
  sqcRYGate(q, 0.771717142321191, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.41776530712856025, 0);
  sqcRYGate(q, 0.18964159950013837, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6736177808547623, 0);
  sqcRYGate(q, -0.19821392187518147, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.0181529511612111, 1);
  sqcRYGate(q, -1.4639250689160637, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1658876842507864, 1);
  sqcRYGate(q, 0.053495528101660195, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8660755603045063, 0);
  sqcRYGate(q, 1.786554075920069, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4539357122451004, 0);
  sqcRYGate(q, -1.7720282053884198, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.285922106495688, 2);
  sqcRYGate(q, 2.3115621951527228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2752632714887424, 2);
  sqcRYGate(q, -2.925557788350417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4941871249807837, 0);
  sqcRYGate(q, -0.8710031003679246, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.105517353690618, 0);
  sqcRYGate(q, -1.7577816505449224, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.105526522712263, 1);
  sqcRYGate(q, -2.247195520084119, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4193409050862593, 1);
  sqcRYGate(q, 2.117223694882269, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6814279434836958, 0);
  sqcRYGate(q, 1.221298117156774, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9797491783368797, 0);
  sqcRYGate(q, 1.5324612636036608, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.237135380283817, 2);
  sqcRYGate(q, 1.4165432931616024, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3750389598161104, 2);
  sqcRYGate(q, 1.5617458078316917, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6179945906904292, 0);
  sqcRYGate(q, -1.7792307971551684, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4124949710317187, 0);
  sqcRYGate(q, -2.7437841930176567, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.17281076769473735, 1);
  sqcRYGate(q, -1.9780252179594093, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4462338289381462, 1);
  sqcRYGate(q, 1.3063902758580106, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8774256513247414, 0);
  sqcRYGate(q, 2.444780532256326, 1);
  sqcRYGate(q, -1.2753680380400754, 2);
  sqcRYGate(q, 0.7515432327975597, 3);

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
