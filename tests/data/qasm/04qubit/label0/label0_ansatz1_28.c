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

  sqcRYGate(q, -0.31244887618883777, 0);
  sqcRZGate(q, -2.606023909221695, 0);
  sqcRYGate(q, -1.423297316013513, 1);
  sqcRZGate(q, -1.7534268799444668, 1);
  sqcRYGate(q, 2.671589540271404, 2);
  sqcRZGate(q, 1.5985227591274616, 2);
  sqcRYGate(q, 0.24737593264079472, 3);
  sqcRZGate(q, 2.165774588960316, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.255221614908015, 0);
  sqcRZGate(q, -2.657283485487809, 0);
  sqcRYGate(q, -2.8624906423311534, 1);
  sqcRZGate(q, -1.9306750245024291, 1);
  sqcRYGate(q, -0.9919152251727695, 2);
  sqcRZGate(q, 2.6313891731767014, 2);
  sqcRYGate(q, -0.8204560046674264, 3);
  sqcRZGate(q, -0.9630754502734502, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3635451013183566, 0);
  sqcRZGate(q, 2.509813352075829, 0);
  sqcRYGate(q, -0.9131110187197831, 1);
  sqcRZGate(q, -1.6183218491052318, 1);
  sqcRYGate(q, -1.0389717845953244, 2);
  sqcRZGate(q, -0.9005675848579688, 2);
  sqcRYGate(q, 1.638789358746501, 3);
  sqcRZGate(q, 1.6260285744758594, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1117433478894259, 0);
  sqcRZGate(q, 2.0684063657631304, 0);
  sqcRYGate(q, 0.5896147260447837, 1);
  sqcRZGate(q, 0.12298699513886469, 1);
  sqcRYGate(q, -2.5390758355294727, 2);
  sqcRZGate(q, -0.6034229315854153, 2);
  sqcRYGate(q, -1.8303758095994898, 3);
  sqcRZGate(q, 0.35477314134561766, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.092978480138403, 0);
  sqcRZGate(q, -0.20195914392175496, 0);
  sqcRYGate(q, -1.9765778087789994, 1);
  sqcRZGate(q, -0.41087439881109145, 1);
  sqcRYGate(q, 0.5890672729945994, 2);
  sqcRZGate(q, -2.785131929435819, 2);
  sqcRYGate(q, -2.5625023749993425, 3);
  sqcRZGate(q, -0.9548225332215923, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9496855896791514, 0);
  sqcRZGate(q, 1.259459707557877, 0);
  sqcRYGate(q, -1.9683161799991535, 1);
  sqcRZGate(q, 0.023423288310605805, 1);
  sqcRYGate(q, -2.6632376621135374, 2);
  sqcRZGate(q, -1.7993850947297698, 2);
  sqcRYGate(q, -3.058112533689722, 3);
  sqcRZGate(q, -0.5594316738475555, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.193133488822453, 0);
  sqcRZGate(q, -0.9294256402266337, 0);
  sqcRYGate(q, -3.1001488992517645, 1);
  sqcRZGate(q, -1.1226713870489515, 1);
  sqcRYGate(q, -2.27448255778456, 2);
  sqcRZGate(q, -1.7526892994365413, 2);
  sqcRYGate(q, 1.6259489538453813, 3);
  sqcRZGate(q, 0.1312135866350283, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9782821242182331, 0);
  sqcRZGate(q, 1.2440784283137143, 0);
  sqcRYGate(q, 1.5827795064582841, 1);
  sqcRZGate(q, -2.28647376076744, 1);
  sqcRYGate(q, -1.0280548887377747, 2);
  sqcRZGate(q, -2.8062739551693032, 2);
  sqcRYGate(q, -0.5562622093025835, 3);
  sqcRZGate(q, 2.3709535266818342, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2839881687304355, 0);
  sqcRZGate(q, 0.981033601276194, 0);
  sqcRYGate(q, -2.0641486783751626, 1);
  sqcRZGate(q, -2.81397547110632, 1);
  sqcRYGate(q, -0.8135118992950207, 2);
  sqcRZGate(q, 1.4065656448248531, 2);
  sqcRYGate(q, 0.4313681361156606, 3);
  sqcRZGate(q, 0.9154772045744268, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.306708296245104, 0);
  sqcRZGate(q, -1.6560811214619662, 0);
  sqcRYGate(q, 0.15598208985108997, 1);
  sqcRZGate(q, 0.24094763314691559, 1);
  sqcRYGate(q, -2.298497702093674, 2);
  sqcRZGate(q, 0.15651307365604178, 2);
  sqcRYGate(q, -2.9812021200129064, 3);
  sqcRZGate(q, -0.2857198031495019, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.337241359849724, 0);
  sqcRZGate(q, 2.7433238761189145, 0);
  sqcRYGate(q, 1.5608591566093948, 1);
  sqcRZGate(q, 2.025277122635419, 1);
  sqcRYGate(q, 2.0999925901909053, 2);
  sqcRZGate(q, 3.0042474277656357, 2);
  sqcRYGate(q, -1.1951467516203174, 3);
  sqcRZGate(q, -0.6857114163098572, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.33494052230904264, 0);
  sqcRZGate(q, 0.327066092985115, 0);
  sqcRYGate(q, -2.944620734252887, 1);
  sqcRZGate(q, -2.904137173470577, 1);
  sqcRYGate(q, -0.5457485145156508, 2);
  sqcRZGate(q, -1.0626807643332563, 2);
  sqcRYGate(q, -1.7147843597164725, 3);
  sqcRZGate(q, -2.090346126054196, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.851882444685749, 0);
  sqcRZGate(q, 2.690555613320698, 0);
  sqcRYGate(q, -1.6262366969779916, 1);
  sqcRZGate(q, 2.49928732205806, 1);
  sqcRYGate(q, 0.07585931968234405, 2);
  sqcRZGate(q, 1.4205452342831064, 2);
  sqcRYGate(q, -1.2721597261698006, 3);
  sqcRZGate(q, 1.8130921091778234, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.582143634319126, 0);
  sqcRZGate(q, 1.1441395740597118, 0);
  sqcRYGate(q, -1.3851918411659763, 1);
  sqcRZGate(q, 0.6331031515627634, 1);
  sqcRYGate(q, 0.9526514389867204, 2);
  sqcRZGate(q, -2.244138607746189, 2);
  sqcRYGate(q, -0.5328794650005904, 3);
  sqcRZGate(q, -0.8213270379017779, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.761078065037335, 0);
  sqcRZGate(q, 2.007165724319419, 0);
  sqcRYGate(q, 1.1558459146332716, 1);
  sqcRZGate(q, 0.504812991361252, 1);
  sqcRYGate(q, -2.7581827929372835, 2);
  sqcRZGate(q, -1.8428852585075766, 2);
  sqcRYGate(q, 2.4539544545218246, 3);
  sqcRZGate(q, 2.5808787549339036, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.718676080606949, 0);
  sqcRZGate(q, 1.199270261642135, 0);
  sqcRYGate(q, 0.0963996432053875, 1);
  sqcRZGate(q, 0.0023536044690580177, 1);
  sqcRYGate(q, -0.2222793182269108, 2);
  sqcRZGate(q, 2.521653767301706, 2);
  sqcRYGate(q, 2.167876282900443, 3);
  sqcRZGate(q, 1.5181818241454925, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8043016576493685, 0);
  sqcRZGate(q, 0.5724254328681537, 0);
  sqcRYGate(q, 2.836851741274419, 1);
  sqcRZGate(q, -0.32186073716174, 1);
  sqcRYGate(q, 1.2713784165154458, 2);
  sqcRZGate(q, 0.20419861049153926, 2);
  sqcRYGate(q, 1.9328379953160997, 3);
  sqcRZGate(q, -2.3441555278011657, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.07848583026003927, 0);
  sqcRZGate(q, -0.7611978682390239, 0);
  sqcRYGate(q, -0.7323547991644572, 1);
  sqcRZGate(q, 1.2946212681461489, 1);
  sqcRYGate(q, -2.1666440249574195, 2);
  sqcRZGate(q, -1.7344307523110194, 2);
  sqcRYGate(q, -1.672282383863008, 3);
  sqcRZGate(q, 2.2713957296331015, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5810689140561105, 0);
  sqcRZGate(q, -1.1271323970505223, 0);
  sqcRYGate(q, 0.9839564446535246, 1);
  sqcRZGate(q, 1.7650019960271432, 1);
  sqcRYGate(q, -3.011520035585896, 2);
  sqcRZGate(q, -1.9181413136690262, 2);
  sqcRYGate(q, -0.3806542379720206, 3);
  sqcRZGate(q, 3.0730953131069016, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.09249384800225113, 0);
  sqcRZGate(q, 2.2630930492918298, 0);
  sqcRYGate(q, 1.018327361940317, 1);
  sqcRZGate(q, 1.0783630878406691, 1);
  sqcRYGate(q, 2.0791717643515804, 2);
  sqcRZGate(q, -1.0554773499319543, 2);
  sqcRYGate(q, 2.4547742314262684, 3);
  sqcRZGate(q, -0.9789866245592824, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.886511592544838, 0);
  sqcRZGate(q, -2.296412981531592, 0);
  sqcRYGate(q, -2.837738446578678, 1);
  sqcRZGate(q, 1.8087229081672547, 1);
  sqcRYGate(q, -2.6673263277246746, 2);
  sqcRZGate(q, -1.7867905811885476, 2);
  sqcRYGate(q, -0.760345648161759, 3);
  sqcRZGate(q, -0.574800115660445, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.008389859616478, 0);
  sqcRZGate(q, 2.747068433198802, 0);
  sqcRYGate(q, -1.9956807863197321, 1);
  sqcRZGate(q, 0.14418446022222842, 1);
  sqcRYGate(q, 0.901421642226885, 2);
  sqcRZGate(q, 1.395687976408241, 2);
  sqcRYGate(q, 2.8034664198033927, 3);
  sqcRZGate(q, -1.2624410969431867, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6996767638766286, 0);
  sqcRZGate(q, -2.1381146571448575, 0);
  sqcRYGate(q, 3.0632032296696123, 1);
  sqcRZGate(q, 2.8866475745100413, 1);
  sqcRYGate(q, -2.346721137970764, 2);
  sqcRZGate(q, -1.9251063004077964, 2);
  sqcRYGate(q, -2.9931260800142043, 3);
  sqcRZGate(q, -1.8253804163832834, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.4084294981378677, 0);
  sqcRZGate(q, -0.6073374061093927, 0);
  sqcRYGate(q, -2.0861255647453376, 1);
  sqcRZGate(q, -0.7201760994995685, 1);
  sqcRYGate(q, -2.6401080136146375, 2);
  sqcRZGate(q, -1.302620273379014, 2);
  sqcRYGate(q, -1.8423679152860286, 3);
  sqcRZGate(q, -0.1847607207295763, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8185055752815744, 0);
  sqcRZGate(q, 0.19334330374724318, 0);
  sqcRYGate(q, -1.702385205877223, 1);
  sqcRZGate(q, -2.905199202872796, 1);
  sqcRYGate(q, -1.2190607231046329, 2);
  sqcRZGate(q, -1.1572151612111892, 2);
  sqcRYGate(q, 1.7646299089499562, 3);
  sqcRZGate(q, -2.585783941352894, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7613309531537755, 0);
  sqcRZGate(q, -0.06838497901644276, 0);
  sqcRYGate(q, -1.079108449201524, 1);
  sqcRZGate(q, -0.10157003567052046, 1);
  sqcRYGate(q, 2.833053027432933, 2);
  sqcRZGate(q, 2.36175131605378, 2);
  sqcRYGate(q, 0.5619003691478843, 3);
  sqcRZGate(q, 1.5147105356811545, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2508234792055632, 0);
  sqcRZGate(q, -1.7069569031964544, 0);
  sqcRYGate(q, -2.7535670447381095, 1);
  sqcRZGate(q, -1.9293705653460202, 1);
  sqcRYGate(q, -1.4372050208903473, 2);
  sqcRZGate(q, -0.07176900229676164, 2);
  sqcRYGate(q, 3.1009399688657626, 3);
  sqcRZGate(q, -3.0927282332110124, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.38751651671561, 0);
  sqcRZGate(q, 2.3104464040834487, 0);
  sqcRYGate(q, 0.17815620641874036, 1);
  sqcRZGate(q, 1.3946450620968311, 1);
  sqcRYGate(q, 0.5626642968121613, 2);
  sqcRZGate(q, 1.5099251580447177, 2);
  sqcRYGate(q, 1.2672367974787835, 3);
  sqcRZGate(q, -1.5898391632396098, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1661524062493056, 0);
  sqcRZGate(q, 1.5520951796352729, 0);
  sqcRYGate(q, -0.9830924548715593, 1);
  sqcRZGate(q, -1.5835618504433615, 1);
  sqcRYGate(q, -0.21648247786269434, 2);
  sqcRZGate(q, 1.9753079837011696, 2);
  sqcRYGate(q, -1.897002582390022, 3);
  sqcRZGate(q, -0.8305056059662527, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.604932474602935, 0);
  sqcRZGate(q, -0.2028339137415336, 0);
  sqcRYGate(q, -2.4646334408050263, 1);
  sqcRZGate(q, 1.8907879967138648, 1);
  sqcRYGate(q, 2.9965551412421543, 2);
  sqcRZGate(q, 1.6753470051237365, 2);
  sqcRYGate(q, 1.8188472662541386, 3);
  sqcRZGate(q, -2.3150781007469687, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3775917166528684, 0);
  sqcRZGate(q, -3.1248323011428525, 0);
  sqcRYGate(q, -1.3389179486666831, 1);
  sqcRZGate(q, 2.8630108807462613, 1);
  sqcRYGate(q, 2.2250249934799333, 2);
  sqcRZGate(q, 1.2962911575974436, 2);
  sqcRYGate(q, -2.9046000693713956, 3);
  sqcRZGate(q, 1.044768393301478, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1842716066126493, 0);
  sqcRZGate(q, 2.065974820465044, 0);
  sqcRYGate(q, -2.040575593396288, 1);
  sqcRZGate(q, 1.958188138085405, 1);
  sqcRYGate(q, 2.873804767776141, 2);
  sqcRZGate(q, -1.0674248643927218, 2);
  sqcRYGate(q, -1.7321002256533298, 3);
  sqcRZGate(q, 0.9040773640883603, 3);

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
