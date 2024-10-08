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

  sqcRYGate(q, -1.6858573225177471, 0);
  sqcRYGate(q, -2.1882925575563226, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.129674334614663, 0);
  sqcRYGate(q, -2.263240990497776, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.872344186286776, 0);
  sqcRYGate(q, 0.4861952135464547, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1377679740486095, 0);
  sqcRYGate(q, 0.6623263852852415, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2268974708206005, 0);
  sqcRYGate(q, -1.5493816549376942, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.11071047924282702, 0);
  sqcRYGate(q, -2.264456588422524, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0657636488989146, 1);
  sqcRYGate(q, -1.1131016994683671, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03954838615164828, 1);
  sqcRYGate(q, 1.0690696693216006, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4422676760795321, 1);
  sqcRYGate(q, 2.7055736834831183, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4091259508603429, 1);
  sqcRYGate(q, 2.8899145849667778, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2883334780955887, 2);
  sqcRYGate(q, -1.0012482182066906, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.944481533822788, 2);
  sqcRYGate(q, -2.2261479247476097, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7575719967069348, 0);
  sqcRYGate(q, -2.4526993180088743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.00020139934496032907, 0);
  sqcRYGate(q, -0.1369773749362057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8822399233097045, 0);
  sqcRYGate(q, -0.5758287404410591, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1220028139225953, 0);
  sqcRYGate(q, -2.104755465640964, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0370566939130237, 0);
  sqcRYGate(q, -2.000199287575193, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2518478995808873, 0);
  sqcRYGate(q, 0.43939904140622765, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.247187242183826, 1);
  sqcRYGate(q, -2.7502106488999685, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0112905411273716, 1);
  sqcRYGate(q, -3.085465552255736, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1300209990991927, 1);
  sqcRYGate(q, 2.34608129207691, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5994034960046203, 1);
  sqcRYGate(q, 0.6780790899268032, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.518243496051025, 2);
  sqcRYGate(q, 2.0455071966682863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3075587483123163, 2);
  sqcRYGate(q, 1.069714554412176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4206411894802202, 0);
  sqcRYGate(q, -0.9880455361533763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1901987215745615, 0);
  sqcRYGate(q, -2.8812716646519543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6687651444663647, 0);
  sqcRYGate(q, -2.3712247614445623, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.997463895924487, 0);
  sqcRYGate(q, 2.3425965355390437, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8773406970445992, 0);
  sqcRYGate(q, 0.8286963360200738, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0175314850774524, 0);
  sqcRYGate(q, -1.0047799950429548, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1627194923659703, 1);
  sqcRYGate(q, -0.6694742224979944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4548938667875717, 1);
  sqcRYGate(q, 3.014427307048404, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.45550527258037915, 1);
  sqcRYGate(q, -2.807821295373898, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9134060783602945, 1);
  sqcRYGate(q, 0.9265846397293688, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4872098915699637, 2);
  sqcRYGate(q, 0.7509141905044618, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.49836875950201076, 2);
  sqcRYGate(q, 0.9838035674462003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6421067117589327, 0);
  sqcRYGate(q, 1.0628160053366378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3188440538159165, 0);
  sqcRYGate(q, -1.3604355252178422, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0129546928766304, 0);
  sqcRYGate(q, 0.6623374633613057, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3200339691398577, 0);
  sqcRYGate(q, -1.7561248430648893, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.514102821845545, 0);
  sqcRYGate(q, 2.782488268873615, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9701947600444171, 0);
  sqcRYGate(q, 1.7202617915517893, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9126536020102978, 1);
  sqcRYGate(q, -1.6546850045146737, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2569149296679942, 1);
  sqcRYGate(q, -1.6918629851585045, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.25531126082132793, 1);
  sqcRYGate(q, 1.274582299502777, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.16514733099578066, 1);
  sqcRYGate(q, -1.9448588553221664, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.453993128284827, 2);
  sqcRYGate(q, -0.4692870980680723, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.395067303113294, 2);
  sqcRYGate(q, -1.4045782019248105, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2601913020016382, 0);
  sqcRYGate(q, 0.7485420434480857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4722245096189086, 0);
  sqcRYGate(q, -0.21361995095146166, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9359516270745027, 0);
  sqcRYGate(q, -0.31776012569719647, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2739178002346527, 0);
  sqcRYGate(q, 2.0917982474423074, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.590511465005768, 0);
  sqcRYGate(q, 0.23687202766966134, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.08534179555373544, 0);
  sqcRYGate(q, -0.6700362889516145, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.07606231784806265, 1);
  sqcRYGate(q, 2.0261303503632933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1552898679115073, 1);
  sqcRYGate(q, -0.3335906259147787, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0816397394738493, 1);
  sqcRYGate(q, -3.02405753990741, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.027058608629015, 1);
  sqcRYGate(q, 0.03958026114067252, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.061521130108778, 2);
  sqcRYGate(q, -2.2658578929786595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6317583135213436, 2);
  sqcRYGate(q, 1.9821371964731593, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6343614087743097, 0);
  sqcRYGate(q, -0.8130828345949487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6859537224964649, 0);
  sqcRYGate(q, -1.6185388370201157, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6415139050907883, 0);
  sqcRYGate(q, 1.6231809359133667, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.82766351177535, 0);
  sqcRYGate(q, 2.8753425006793374, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.37355089329690666, 0);
  sqcRYGate(q, -1.8773921822368684, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.588557915302111, 0);
  sqcRYGate(q, 1.9649656892137886, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8831569475447972, 1);
  sqcRYGate(q, -2.003114006860288, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.06539048895758691, 1);
  sqcRYGate(q, 1.4508777976353473, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9806465429208622, 1);
  sqcRYGate(q, 2.351444752364221, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.717269183236309, 1);
  sqcRYGate(q, -0.06866491684791409, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.08769269995001046, 2);
  sqcRYGate(q, -2.793390603157995, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9935037502083468, 2);
  sqcRYGate(q, 0.6355343733364736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.015546878086172278, 0);
  sqcRYGate(q, -0.45398458747099246, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5308500266951981, 0);
  sqcRYGate(q, 2.508752400031413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3486931571805442, 0);
  sqcRYGate(q, -1.6574011468125673, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4742276318596967, 0);
  sqcRYGate(q, 2.8201748303833094, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6399123716663828, 0);
  sqcRYGate(q, -1.3450738551486394, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.417890676010809, 0);
  sqcRYGate(q, -2.9401236678349405, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3319464413013278, 1);
  sqcRYGate(q, 0.6520886700288538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.408363987941412, 1);
  sqcRYGate(q, 2.7956488249364093, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8617162315058744, 1);
  sqcRYGate(q, 1.7671087609986051, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.413563500542617, 1);
  sqcRYGate(q, 1.0036245622996476, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2564226972917645, 2);
  sqcRYGate(q, -2.4318702355633004, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5120247318750522, 2);
  sqcRYGate(q, 2.745008621439899, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.480474838446738, 0);
  sqcRYGate(q, 1.9013722781672413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9853785838103317, 0);
  sqcRYGate(q, 0.0707801676112183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.827974805485148, 0);
  sqcRYGate(q, 1.4571860271034511, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0584576794189227, 0);
  sqcRYGate(q, -2.3441422237509295, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6243236798968755, 0);
  sqcRYGate(q, -2.0613429734404294, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.235746066931112, 0);
  sqcRYGate(q, 0.157171914685535, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.298744410433998, 1);
  sqcRYGate(q, -0.0016346921201781939, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3167279332530176, 1);
  sqcRYGate(q, -0.5161425888523394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6859667995964251, 1);
  sqcRYGate(q, -1.4445435025831364, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6554808343025202, 1);
  sqcRYGate(q, -2.3018362125824856, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0384320509980025, 2);
  sqcRYGate(q, 0.020521859134856157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0227368970048802, 2);
  sqcRYGate(q, 1.1259116203547006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6681970995993863, 0);
  sqcRYGate(q, -1.8086697104510818, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.36607435986078674, 0);
  sqcRYGate(q, -1.3778565916650867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9349962573623438, 0);
  sqcRYGate(q, 1.3144133807042229, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1453518441613717, 0);
  sqcRYGate(q, 1.282717694242737, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9770321495813048, 0);
  sqcRYGate(q, 1.0694766816363845, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7822567122469999, 0);
  sqcRYGate(q, 1.4522054309236252, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3604550336533228, 1);
  sqcRYGate(q, -2.1994499362343785, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4234852266089604, 1);
  sqcRYGate(q, -1.0877147695914564, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.115710434233591, 1);
  sqcRYGate(q, -2.738357637549196, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.046664279639887826, 1);
  sqcRYGate(q, -1.632194758156671, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.006756795967062132, 2);
  sqcRYGate(q, 0.5522019313817833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.742853643013146, 2);
  sqcRYGate(q, -2.377369557520853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8621177799929542, 0);
  sqcRYGate(q, 0.7284551111630515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5018260233880403, 0);
  sqcRYGate(q, -2.3417304461745605, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.30166463605442817, 0);
  sqcRYGate(q, -0.3886412498150218, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7416533423145317, 0);
  sqcRYGate(q, 0.04667006700093168, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.668230136205958, 0);
  sqcRYGate(q, 1.0180744588821655, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6052302376805816, 0);
  sqcRYGate(q, 2.134563753039465, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4388075347614535, 1);
  sqcRYGate(q, 2.0936936043783074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4135065318328595, 1);
  sqcRYGate(q, 0.32421769420680846, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.347754450881819, 1);
  sqcRYGate(q, -3.112514565155552, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7177634779128872, 1);
  sqcRYGate(q, -2.487190784072611, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9134166802306924, 2);
  sqcRYGate(q, -1.0623444065425973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3070525019426593, 2);
  sqcRYGate(q, 0.4916005592231605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1507813386665986, 0);
  sqcRYGate(q, 0.5182570987704086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.009102662125666, 0);
  sqcRYGate(q, 2.8781659156436925, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5390718760724518, 0);
  sqcRYGate(q, -1.4875022236486057, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4213958635828696, 0);
  sqcRYGate(q, -1.3115053867811637, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4793895252511766, 0);
  sqcRYGate(q, 0.7957046704519231, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5136454910263268, 0);
  sqcRYGate(q, 2.3970126636912115, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.338779752411902, 1);
  sqcRYGate(q, 0.9399699748293111, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2979388663723843, 1);
  sqcRYGate(q, -1.4513051700796407, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4518014433755049, 1);
  sqcRYGate(q, -1.829598301415503, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.11182879650984502, 1);
  sqcRYGate(q, -1.299829006621879, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8995957820072613, 2);
  sqcRYGate(q, 0.32104686834840557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.19619273750554297, 2);
  sqcRYGate(q, 2.410272292621636, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.49882269384671485, 0);
  sqcRYGate(q, -1.6069833467528756, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2378613536445977, 0);
  sqcRYGate(q, 1.1522740673594762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0981088689583745, 0);
  sqcRYGate(q, -2.9076949279643305, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9867008841105724, 0);
  sqcRYGate(q, -0.8451600332799493, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4468420613391544, 0);
  sqcRYGate(q, 0.09711348378016114, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.443656601793628, 0);
  sqcRYGate(q, -0.13491769047888447, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7089094287192554, 1);
  sqcRYGate(q, -2.8528461186221077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5954726673488411, 1);
  sqcRYGate(q, -0.526847300557054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7217115571290385, 1);
  sqcRYGate(q, 2.8844680049561564, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9947029201494022, 1);
  sqcRYGate(q, 1.9108578923518433, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.147504019638217, 2);
  sqcRYGate(q, -2.429010301970895, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.949986707298429, 2);
  sqcRYGate(q, 1.7489593721993344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8211981164486523, 0);
  sqcRYGate(q, -1.486898371358379, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.010095270863082, 0);
  sqcRYGate(q, -0.738430574812573, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.392297448018012, 0);
  sqcRYGate(q, 2.0197515995505326, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7434757261437706, 0);
  sqcRYGate(q, -1.9131463805871458, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5084261312580463, 0);
  sqcRYGate(q, -1.563656809687234, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8939137011382041, 0);
  sqcRYGate(q, -0.3074585046547848, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.1439710790186597, 1);
  sqcRYGate(q, -2.6357583497641084, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.08137849539408, 1);
  sqcRYGate(q, 0.11701520716174751, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1363516657213144, 1);
  sqcRYGate(q, 2.7157458599720847, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5798989672676775, 1);
  sqcRYGate(q, 0.2023273453698182, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9216633584490509, 2);
  sqcRYGate(q, 2.0288324467775407, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3084277738568324, 2);
  sqcRYGate(q, -2.8402879708060844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9051897900786345, 0);
  sqcRYGate(q, 2.161757869203303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6238829393043279, 0);
  sqcRYGate(q, 1.1918741314191557, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06796565964232382, 0);
  sqcRYGate(q, -0.026096073673227416, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5796939675092316, 0);
  sqcRYGate(q, 0.8559594163059268, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1400365869090976, 0);
  sqcRYGate(q, 0.7748720578142196, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.49860417878645613, 0);
  sqcRYGate(q, -1.4156363010239745, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7472310832415777, 1);
  sqcRYGate(q, -3.0179844642864615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.189110476062468, 1);
  sqcRYGate(q, 0.40089948726679836, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9402394131562803, 1);
  sqcRYGate(q, -1.2204191510516627, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1796014129874326, 1);
  sqcRYGate(q, -2.9325601141072877, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3057972110153255, 2);
  sqcRYGate(q, -2.3577203894968526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.54852585048224, 2);
  sqcRYGate(q, 1.139943373894666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4248587508675388, 0);
  sqcRYGate(q, 1.5752716110864302, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8687694778555057, 0);
  sqcRYGate(q, 1.498549130749546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4944342997567337, 0);
  sqcRYGate(q, 0.24847092511347849, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6575805447751364, 0);
  sqcRYGate(q, 2.2660879137514587, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.10984043086513438, 0);
  sqcRYGate(q, 0.6792065990171618, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2842568378989436, 0);
  sqcRYGate(q, 0.4747591158970703, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2882317371203227, 1);
  sqcRYGate(q, -2.38314760090363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6348852181708269, 1);
  sqcRYGate(q, 2.2795500019515265, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.841287014447845, 1);
  sqcRYGate(q, 1.216218779474673, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.474410078434219, 1);
  sqcRYGate(q, 0.7349252542985427, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9410617861326007, 2);
  sqcRYGate(q, 2.4511740106624003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9072478976736404, 2);
  sqcRYGate(q, -2.3052612305754585, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.36689264503657026, 0);
  sqcRYGate(q, 2.3071858706618564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9422696263783861, 0);
  sqcRYGate(q, -0.11521840934983613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.477642395238698, 0);
  sqcRYGate(q, -1.1477605831450166, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3051450920235865, 0);
  sqcRYGate(q, 2.2757312917998633, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5472771798108865, 0);
  sqcRYGate(q, 2.706681731930735, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8698003882981453, 0);
  sqcRYGate(q, -3.0819729501861928, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.096649712782989, 1);
  sqcRYGate(q, 1.6997146945007733, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.171720184647774, 1);
  sqcRYGate(q, 0.5734731096316867, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1562763659586937, 1);
  sqcRYGate(q, 2.3092752401353884, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.80634577783431, 1);
  sqcRYGate(q, 1.5291116238931073, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2477186051074414, 2);
  sqcRYGate(q, 1.8168122449837405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.668221215297153, 2);
  sqcRYGate(q, -0.20848076773987145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.658230654154848, 0);
  sqcRYGate(q, -2.675587949088852, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7302745567569373, 0);
  sqcRYGate(q, 0.7805989544123619, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.44623241576458245, 0);
  sqcRYGate(q, -0.1432641997785691, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3532233502076805, 0);
  sqcRYGate(q, -2.4037138447839435, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7623239387697964, 0);
  sqcRYGate(q, -2.4887018671507346, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.16466187665132978, 0);
  sqcRYGate(q, 0.2723422155359936, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.402392844661251, 1);
  sqcRYGate(q, 0.33745811520456487, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.657771931866094, 1);
  sqcRYGate(q, -0.11363852927324734, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7979500357472336, 1);
  sqcRYGate(q, 1.8231743542092396, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7941652239309362, 1);
  sqcRYGate(q, -0.062088475378589976, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.129962374065086, 2);
  sqcRYGate(q, 0.7036870538629589, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1276993262402613, 2);
  sqcRYGate(q, -0.3531388025790312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8024889257551102, 0);
  sqcRYGate(q, -0.5655464048867778, 1);
  sqcRYGate(q, 0.685180605951235, 2);
  sqcRYGate(q, -0.7658741325156013, 3);

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
