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

  sqcRYGate(q, 0.15020492494306573, 0);
  sqcRZGate(q, 1.9257993254206112, 0);
  sqcRYGate(q, 0.6011296902648228, 1);
  sqcRZGate(q, -2.87873195207282, 1);
  sqcRYGate(q, -0.04654862934384684, 2);
  sqcRZGate(q, -2.2809286778530824, 2);
  sqcRYGate(q, -2.381556859564164, 3);
  sqcRZGate(q, -0.6768528470570474, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5469170755146242, 0);
  sqcRZGate(q, 2.9949792206356087, 0);
  sqcRYGate(q, -0.7019887471208234, 1);
  sqcRZGate(q, 2.967635613571204, 1);
  sqcRYGate(q, -0.19965478671010217, 2);
  sqcRZGate(q, -1.7318995892324935, 2);
  sqcRYGate(q, 2.1731034087077528, 3);
  sqcRZGate(q, 2.7655178340424476, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6011906556100217, 0);
  sqcRZGate(q, 0.5263181343658331, 0);
  sqcRYGate(q, 0.9933903888631042, 1);
  sqcRZGate(q, -2.008072750641893, 1);
  sqcRYGate(q, 0.48749864169015567, 2);
  sqcRZGate(q, -2.7804702987936993, 2);
  sqcRYGate(q, 0.5868169540578725, 3);
  sqcRZGate(q, -2.3145103068004698, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.07000417308396, 0);
  sqcRZGate(q, 0.37274703281713256, 0);
  sqcRYGate(q, 0.06250214329569374, 1);
  sqcRZGate(q, 0.4755965032377984, 1);
  sqcRYGate(q, -0.6022128706936245, 2);
  sqcRZGate(q, 0.555652976766014, 2);
  sqcRYGate(q, -1.6995166302469906, 3);
  sqcRZGate(q, -2.282952939030218, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8713188457789771, 0);
  sqcRZGate(q, 1.6991582649272978, 0);
  sqcRYGate(q, 0.3882064998794702, 1);
  sqcRZGate(q, 0.2182085901449178, 1);
  sqcRYGate(q, -2.0897257511651492, 2);
  sqcRZGate(q, -0.46217941650178, 2);
  sqcRYGate(q, 2.3052527623821604, 3);
  sqcRZGate(q, 2.56508424936532, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.0185831575810846, 0);
  sqcRZGate(q, 0.10978788243912396, 0);
  sqcRYGate(q, -2.6442859975229664, 1);
  sqcRZGate(q, 0.7402360929181812, 1);
  sqcRYGate(q, 2.0179646809030234, 2);
  sqcRZGate(q, -1.477537171799657, 2);
  sqcRYGate(q, -2.9800579621485928, 3);
  sqcRZGate(q, 0.10138143745303818, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.465993288002046, 0);
  sqcRZGate(q, -0.3503450839818461, 0);
  sqcRYGate(q, -0.3162302022680454, 1);
  sqcRZGate(q, -2.619372032567505, 1);
  sqcRYGate(q, -3.039357569408039, 2);
  sqcRZGate(q, 1.7476611246396525, 2);
  sqcRYGate(q, 0.34907817801306606, 3);
  sqcRZGate(q, -1.2879309865208528, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6332486195445655, 0);
  sqcRZGate(q, -0.1727723669693566, 0);
  sqcRYGate(q, -1.634788627212183, 1);
  sqcRZGate(q, -3.104986217407763, 1);
  sqcRYGate(q, -0.5653027360673236, 2);
  sqcRZGate(q, -2.3448580106667465, 2);
  sqcRYGate(q, 2.5192614228004504, 3);
  sqcRZGate(q, -1.9427518727993993, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4573998150932053, 0);
  sqcRZGate(q, 2.881366975249843, 0);
  sqcRYGate(q, 1.155932974062203, 1);
  sqcRZGate(q, 1.3283356973796563, 1);
  sqcRYGate(q, -1.275202662036703, 2);
  sqcRZGate(q, -0.5914629411278751, 2);
  sqcRYGate(q, 2.7363852884711437, 3);
  sqcRZGate(q, -1.7541826509396756, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7930470272124523, 0);
  sqcRZGate(q, -0.27467868327274036, 0);
  sqcRYGate(q, -1.983725177795093, 1);
  sqcRZGate(q, -0.7963049902309765, 1);
  sqcRYGate(q, 1.5815570141007076, 2);
  sqcRZGate(q, 2.2847786001130697, 2);
  sqcRYGate(q, -3.113038881125212, 3);
  sqcRZGate(q, -2.4943351108409244, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7755465433137854, 0);
  sqcRZGate(q, -2.240061945418833, 0);
  sqcRYGate(q, -2.3808941172458997, 1);
  sqcRZGate(q, 2.037961744801418, 1);
  sqcRYGate(q, 1.710957727747998, 2);
  sqcRZGate(q, -0.11590341717041852, 2);
  sqcRYGate(q, 1.2521943357428365, 3);
  sqcRZGate(q, 0.009047617927471151, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5798659322827344, 0);
  sqcRZGate(q, 2.031603421536782, 0);
  sqcRYGate(q, 1.6467674057310564, 1);
  sqcRZGate(q, -1.9396623736395187, 1);
  sqcRYGate(q, 1.3826321484589734, 2);
  sqcRZGate(q, 2.446325125113346, 2);
  sqcRYGate(q, 2.8284478818872465, 3);
  sqcRZGate(q, -0.24470703239418645, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3144397932168417, 0);
  sqcRZGate(q, -2.7532146362739325, 0);
  sqcRYGate(q, -0.35066167231499984, 1);
  sqcRZGate(q, -2.039551858866523, 1);
  sqcRYGate(q, 2.764907415983972, 2);
  sqcRZGate(q, 1.068386206806902, 2);
  sqcRYGate(q, -1.2707154996839047, 3);
  sqcRZGate(q, 2.1876434383477052, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4634536828664726, 0);
  sqcRZGate(q, 2.8668093616927663, 0);
  sqcRYGate(q, -0.0380406962263633, 1);
  sqcRZGate(q, -1.8018290337068308, 1);
  sqcRYGate(q, 1.0157998171900662, 2);
  sqcRZGate(q, -1.8440749934766856, 2);
  sqcRYGate(q, 1.4775798228895927, 3);
  sqcRZGate(q, 0.450891806779989, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7026778332182693, 0);
  sqcRZGate(q, -2.7621082081277137, 0);
  sqcRYGate(q, 0.8392736877125038, 1);
  sqcRZGate(q, 1.4847605478017998, 1);
  sqcRYGate(q, 0.3899307936371903, 2);
  sqcRZGate(q, -1.6378793105079306, 2);
  sqcRYGate(q, 0.5147068089801508, 3);
  sqcRZGate(q, -0.720989525006393, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.31865008785112714, 0);
  sqcRZGate(q, 1.4904914352943137, 0);
  sqcRYGate(q, -1.3470807527269821, 1);
  sqcRZGate(q, 0.3001946230541055, 1);
  sqcRYGate(q, 2.8465347822136184, 2);
  sqcRZGate(q, 3.030922500891037, 2);
  sqcRYGate(q, -2.087042782054754, 3);
  sqcRZGate(q, 2.788748277854326, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.740220512431635, 0);
  sqcRZGate(q, -1.1526030986984352, 0);
  sqcRYGate(q, -0.7974555501140506, 1);
  sqcRZGate(q, 1.9201238724388725, 1);
  sqcRYGate(q, -0.5944300509592715, 2);
  sqcRZGate(q, 1.7362450898923367, 2);
  sqcRYGate(q, -2.853149037050547, 3);
  sqcRZGate(q, 0.8877812057140764, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5951241951112558, 0);
  sqcRZGate(q, -1.093689946313607, 0);
  sqcRYGate(q, 2.004810672957107, 1);
  sqcRZGate(q, -2.142869930723446, 1);
  sqcRYGate(q, 3.0648071458396267, 2);
  sqcRZGate(q, -2.798512401206323, 2);
  sqcRYGate(q, 2.1664800682794016, 3);
  sqcRZGate(q, 2.7328886376600616, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1464828940621974, 0);
  sqcRZGate(q, -2.946110987550815, 0);
  sqcRYGate(q, -1.8849582635003497, 1);
  sqcRZGate(q, -3.1173115457316007, 1);
  sqcRYGate(q, 1.1520297397068355, 2);
  sqcRZGate(q, 2.6794478206591363, 2);
  sqcRYGate(q, -2.1290494333929697, 3);
  sqcRZGate(q, -1.124445351526514, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.994337168324505, 0);
  sqcRZGate(q, 1.1349423191185817, 0);
  sqcRYGate(q, 2.493711032189506, 1);
  sqcRZGate(q, 2.604551709435449, 1);
  sqcRYGate(q, -1.0353585759003208, 2);
  sqcRZGate(q, 0.45679413348569586, 2);
  sqcRYGate(q, 1.7822647907780773, 3);
  sqcRZGate(q, 2.4405585204589015, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.979453249848957, 0);
  sqcRZGate(q, 3.1185251501386726, 0);
  sqcRYGate(q, -1.0738991295336207, 1);
  sqcRZGate(q, -2.680559130454018, 1);
  sqcRYGate(q, 2.4197710965980908, 2);
  sqcRZGate(q, -2.4653006460349096, 2);
  sqcRYGate(q, 0.9156123778278361, 3);
  sqcRZGate(q, 2.335484582999283, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5145047867804404, 0);
  sqcRZGate(q, 0.7840458602112025, 0);
  sqcRYGate(q, 3.0428662347261612, 1);
  sqcRZGate(q, -0.4445587457856037, 1);
  sqcRYGate(q, 3.067108274096588, 2);
  sqcRZGate(q, 2.6318946180707172, 2);
  sqcRYGate(q, 2.5801208120359895, 3);
  sqcRZGate(q, -1.12537720025019, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9198851934922025, 0);
  sqcRZGate(q, -1.314192946321337, 0);
  sqcRYGate(q, -2.9841524875911087, 1);
  sqcRZGate(q, 1.3689194331379781, 1);
  sqcRYGate(q, 1.356103217658653, 2);
  sqcRZGate(q, 1.7857007908905338, 2);
  sqcRYGate(q, 1.464606943351039, 3);
  sqcRZGate(q, -0.11054982088925784, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.714309436895051, 0);
  sqcRZGate(q, 1.6286682986699188, 0);
  sqcRYGate(q, -1.6103884206777075, 1);
  sqcRZGate(q, -0.9343614002600779, 1);
  sqcRYGate(q, -0.8429759579602862, 2);
  sqcRZGate(q, 0.7181791790540215, 2);
  sqcRYGate(q, 0.5147588525339034, 3);
  sqcRZGate(q, -2.969900045314134, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6331888340446952, 0);
  sqcRZGate(q, 2.6407803287842335, 0);
  sqcRYGate(q, 2.331133016685321, 1);
  sqcRZGate(q, -1.6918586775786832, 1);
  sqcRYGate(q, 1.1896765942734857, 2);
  sqcRZGate(q, 0.6942725332127314, 2);
  sqcRYGate(q, -2.504047361539389, 3);
  sqcRZGate(q, -2.8248824259637013, 3);

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
