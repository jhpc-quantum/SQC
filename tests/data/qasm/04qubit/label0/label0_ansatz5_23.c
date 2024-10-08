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

  sqcRYGate(q, 1.8209795107300875, 0);
  sqcRYGate(q, 0.48255934790624444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2817630587622677, 0);
  sqcRYGate(q, 0.7517711081635999, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6431133453964517, 2);
  sqcRYGate(q, 1.0793879536186148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7647522210927806, 2);
  sqcRYGate(q, -2.440504389596945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2427761354698523, 1);
  sqcRYGate(q, 3.1029439261220157, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.045430133701524, 1);
  sqcRYGate(q, -1.5567987991693397, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8619602696328883, 0);
  sqcRYGate(q, 2.4727554765848163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4846448045382523, 0);
  sqcRYGate(q, 3.082459354533353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4934678985027574, 2);
  sqcRYGate(q, -1.5135184812218014, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8578530607366277, 2);
  sqcRYGate(q, -0.7784081325226946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.692144269970634, 1);
  sqcRYGate(q, -0.544491241183759, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.858852065509895, 1);
  sqcRYGate(q, -1.834580284760292, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6983451322291802, 0);
  sqcRYGate(q, -2.9175694836962163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7809177328824264, 0);
  sqcRYGate(q, -0.3847472627440421, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.896507082494713, 2);
  sqcRYGate(q, 0.24925035630562853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5658349177221816, 2);
  sqcRYGate(q, -1.503726473786104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.096865684598643, 1);
  sqcRYGate(q, 2.218550960978084, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7296531454168536, 1);
  sqcRYGate(q, 2.352799808376935, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7718835829144304, 0);
  sqcRYGate(q, 2.6412118438217096, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3087763951877163, 0);
  sqcRYGate(q, 1.755390865927502, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0912989278827219, 2);
  sqcRYGate(q, 0.7327170803015326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4443399524099094, 2);
  sqcRYGate(q, -0.44437076039126444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7377671913520127, 1);
  sqcRYGate(q, -0.011025829077462745, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2277636714533067, 1);
  sqcRYGate(q, 2.727665661364254, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.526162193922318, 0);
  sqcRYGate(q, -0.4414420601958871, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5939329177014336, 0);
  sqcRYGate(q, -2.3969292707646956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6803853529993313, 2);
  sqcRYGate(q, 0.2808786703152757, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0929299332157889, 2);
  sqcRYGate(q, -1.175429657725768, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.461937533930195, 1);
  sqcRYGate(q, 2.9972344832144633, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8194507884301938, 1);
  sqcRYGate(q, -0.8980046755586324, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1107068943128087, 0);
  sqcRYGate(q, 0.7560706470502124, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.35638339075562353, 0);
  sqcRYGate(q, 1.3941262335617548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4791429617061392, 2);
  sqcRYGate(q, -2.96441321558561, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5239081186903105, 2);
  sqcRYGate(q, -0.05979091635694633, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7280316217835407, 1);
  sqcRYGate(q, 2.9556249685438725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7154475839233001, 1);
  sqcRYGate(q, 1.7401501258773777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8695739510495377, 0);
  sqcRYGate(q, -0.12375664005634235, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1887597075470175, 0);
  sqcRYGate(q, -2.20708002938155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5633816247257227, 2);
  sqcRYGate(q, 2.987900851245647, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4154809598285336, 2);
  sqcRYGate(q, 2.318754553256039, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22924340167021118, 1);
  sqcRYGate(q, -2.5204340262287745, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.20860690220900224, 1);
  sqcRYGate(q, 2.0480647319387995, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.946193145376098, 0);
  sqcRYGate(q, -2.26821301768425, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6453669996939415, 0);
  sqcRYGate(q, -1.6356957156083134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0928864483766136, 2);
  sqcRYGate(q, -0.743588684951118, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22241722251259483, 2);
  sqcRYGate(q, -1.694768754891389, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.957191415175827, 1);
  sqcRYGate(q, -2.346674418747657, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5616732809216467, 1);
  sqcRYGate(q, 0.23786039520892466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.13646463014843668, 0);
  sqcRYGate(q, -1.6928439796179475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6501271631764265, 0);
  sqcRYGate(q, 1.618795186249213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.223264855880318, 2);
  sqcRYGate(q, -1.7570156387683555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3927089336330165, 2);
  sqcRYGate(q, -2.4058717149563025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5799586574004483, 1);
  sqcRYGate(q, 1.3133336255554342, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4325017802447855, 1);
  sqcRYGate(q, 1.9690142574427358, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8819952972299571, 0);
  sqcRYGate(q, 3.039711123355333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.434952662971254, 0);
  sqcRYGate(q, -1.348838462083025, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2260934542710054, 2);
  sqcRYGate(q, 0.9895942994633105, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.01817366041019585, 2);
  sqcRYGate(q, -1.177718435162414, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6229134619331957, 1);
  sqcRYGate(q, -1.9809742873700318, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2325814972197338, 1);
  sqcRYGate(q, -2.996659057453413, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2431906146110183, 0);
  sqcRYGate(q, -1.8217264282506198, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1414685523550725, 0);
  sqcRYGate(q, 2.4826445900979497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1559324576824164, 2);
  sqcRYGate(q, 0.388007070846815, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.36831471977325125, 2);
  sqcRYGate(q, 1.6161727719494152, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.825269174742338, 1);
  sqcRYGate(q, -0.7716335494567543, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8476117096785287, 1);
  sqcRYGate(q, 1.7162491418817982, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.13091566625132411, 0);
  sqcRYGate(q, -0.7473998931467145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4530113504041295, 0);
  sqcRYGate(q, -2.944539398089647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.06904330838379001, 2);
  sqcRYGate(q, -1.7696019989461127, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5727161484269372, 2);
  sqcRYGate(q, 0.13380120207511406, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6621093127075983, 1);
  sqcRYGate(q, -2.729498145933485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3188187424693942, 1);
  sqcRYGate(q, -2.473585380275061, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.399851734904783, 0);
  sqcRYGate(q, 0.3681542475722398, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7802241874410223, 0);
  sqcRYGate(q, 0.6696587753851309, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6815780898054005, 2);
  sqcRYGate(q, -1.7578903417319875, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5769820412282272, 2);
  sqcRYGate(q, -2.024028599024524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2045663645527893, 1);
  sqcRYGate(q, -0.7123969694341517, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.04303657789687, 1);
  sqcRYGate(q, -2.49139478605536, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.21495504437189883, 0);
  sqcRYGate(q, 1.215314685512581, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2582188620259984, 0);
  sqcRYGate(q, -0.19013058926824655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.141348719711046, 2);
  sqcRYGate(q, 1.7285788685359273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.562661411154803, 2);
  sqcRYGate(q, 2.591203596375362, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0780151564245277, 1);
  sqcRYGate(q, -1.2874600903420816, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.598005249846513, 1);
  sqcRYGate(q, -0.9809862181672058, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.48454809484875, 0);
  sqcRYGate(q, 1.9174600373098185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2621740959750944, 0);
  sqcRYGate(q, 1.876613816982137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.998211548154103, 2);
  sqcRYGate(q, -1.3834747435911874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0025746617733961585, 2);
  sqcRYGate(q, 1.869050103859081, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.345760903805109, 1);
  sqcRYGate(q, 0.6809383009633576, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9939975857319377, 1);
  sqcRYGate(q, 3.0765481896929647, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7429260127102277, 0);
  sqcRYGate(q, -0.6352739827517041, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5326329785519288, 0);
  sqcRYGate(q, 2.546454254234973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0861469448999053, 2);
  sqcRYGate(q, 2.0484083273352054, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7934720672101383, 2);
  sqcRYGate(q, 1.9971452067362208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6165276983965713, 1);
  sqcRYGate(q, -1.5150256414548569, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9349173881744699, 1);
  sqcRYGate(q, 1.4278331864397527, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9229913013506401, 0);
  sqcRYGate(q, -0.621538142076413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.04448273218575904, 0);
  sqcRYGate(q, 2.115685519897344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4967390309716336, 2);
  sqcRYGate(q, -0.22096657566250943, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.526196809133648, 2);
  sqcRYGate(q, -2.18236507935228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.101824146256323, 1);
  sqcRYGate(q, -0.5113830979470615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.823809250982972, 1);
  sqcRYGate(q, -2.058128804422787, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1067420505865817, 0);
  sqcRYGate(q, -0.4777096983482164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0555369719509264, 0);
  sqcRYGate(q, 0.8689254122554786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9170362221215294, 2);
  sqcRYGate(q, -1.2172063585934012, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9589933958722217, 2);
  sqcRYGate(q, 1.0529834515742218, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0458916944905736, 1);
  sqcRYGate(q, -2.1314832725449455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8413436965615598, 1);
  sqcRYGate(q, 0.7775181337279635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.675261238171152, 0);
  sqcRYGate(q, -1.800642485170769, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.425373853509127, 0);
  sqcRYGate(q, 0.17765660626011393, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4648681003934056, 2);
  sqcRYGate(q, 1.5475113837945904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7714639960574381, 2);
  sqcRYGate(q, 0.8360643839837386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5198536984472737, 1);
  sqcRYGate(q, -0.39387918098128294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5274746864632122, 1);
  sqcRYGate(q, 2.8694525447793136, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.809815074691343, 0);
  sqcRYGate(q, -2.384884600687284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.362670287937553, 0);
  sqcRYGate(q, -2.7193515992662474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.584893937829379, 2);
  sqcRYGate(q, 2.5713326775429506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1986057186361014, 2);
  sqcRYGate(q, -0.4128890119018944, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.780862667459482, 1);
  sqcRYGate(q, -1.8154986953071433, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4144465174782654, 1);
  sqcRYGate(q, -0.617545362954255, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4686654222319584, 0);
  sqcRYGate(q, 1.6427862674886933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.84147076674188, 0);
  sqcRYGate(q, -2.8222135424003825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.529626991898725, 2);
  sqcRYGate(q, 1.9040200182999634, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1246450687461422, 2);
  sqcRYGate(q, 1.782094710730459, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7758559363731612, 1);
  sqcRYGate(q, 0.2889483304206406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0090122933396701, 1);
  sqcRYGate(q, -0.5131824312474542, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.278417937533802, 0);
  sqcRYGate(q, 1.6993159782239369, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3967882954592099, 0);
  sqcRYGate(q, -0.9174885585859051, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7123797095672824, 2);
  sqcRYGate(q, -1.2928661842197835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8869626809218367, 2);
  sqcRYGate(q, 1.4264055881488908, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0310403498491034, 1);
  sqcRYGate(q, 1.5582694250882936, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.438404369845534, 1);
  sqcRYGate(q, 0.7893929870093723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.23272800083089235, 0);
  sqcRYGate(q, 1.2175066669510264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.154353824560717, 0);
  sqcRYGate(q, -0.15439056547079844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.000632259582184, 2);
  sqcRYGate(q, -2.750470768218041, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08340857353615405, 2);
  sqcRYGate(q, 0.6822678896317269, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2843002923688953, 1);
  sqcRYGate(q, 0.8675500987999172, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0782110067663115, 1);
  sqcRYGate(q, -1.58675991894482, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9054408602199961, 0);
  sqcRYGate(q, 1.0229843047508878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2043979196791854, 0);
  sqcRYGate(q, 3.079290637948019, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2878064716343252, 2);
  sqcRYGate(q, 0.47462575862695566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9058477611177471, 2);
  sqcRYGate(q, -0.5234668853980916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2412066118272893, 1);
  sqcRYGate(q, 1.8182848343375762, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0887054173816069, 1);
  sqcRYGate(q, 1.8921291631174055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1498740990539682, 0);
  sqcRYGate(q, -1.2185768278920444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.230465552901837, 0);
  sqcRYGate(q, -2.420172782686676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6417382131126192, 2);
  sqcRYGate(q, -0.4839696078458785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.398065772816331, 2);
  sqcRYGate(q, 2.147829614410763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.325656983522358, 1);
  sqcRYGate(q, 2.3262386028406388, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5159276498109963, 1);
  sqcRYGate(q, 1.1988704211424797, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.19187174402575913, 0);
  sqcRYGate(q, -1.176700930981081, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.403488281790752, 0);
  sqcRYGate(q, -2.034518633548278, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.974081911385834, 2);
  sqcRYGate(q, 1.884858900665071, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.120245137533077, 2);
  sqcRYGate(q, -3.0050091100551897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0584888105036443, 1);
  sqcRYGate(q, -0.5846876421443321, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4772280505796376, 1);
  sqcRYGate(q, -2.010323011875977, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.193599635643821, 0);
  sqcRYGate(q, 2.9984854892578245, 1);
  sqcRYGate(q, -2.0519742680946216, 2);
  sqcRYGate(q, 1.7094930047990529, 3);

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
