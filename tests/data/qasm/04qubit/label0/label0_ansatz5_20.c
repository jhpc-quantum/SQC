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

  sqcRYGate(q, -3.1021314966843754, 0);
  sqcRYGate(q, 2.8888059404888073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.143780218091809, 0);
  sqcRYGate(q, -2.24848817258, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20168358662954944, 2);
  sqcRYGate(q, 1.9554739877784648, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7511592066839068, 2);
  sqcRYGate(q, 1.9779567568651828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.027669678249751, 1);
  sqcRYGate(q, 1.795290952970099, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8262329966420623, 1);
  sqcRYGate(q, -2.7578042451455125, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9453809695179789, 0);
  sqcRYGate(q, 0.9522037832052742, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.526094644232919, 0);
  sqcRYGate(q, 1.8661325262242523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9876675797994513, 2);
  sqcRYGate(q, -0.5468959556156822, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.003887338896165, 2);
  sqcRYGate(q, -1.505029304480021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.54852245988425, 1);
  sqcRYGate(q, -0.768937761496983, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5024389084884566, 1);
  sqcRYGate(q, -3.0408907468796778, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2532363083226757, 0);
  sqcRYGate(q, -1.709939333913863, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11095012476139302, 0);
  sqcRYGate(q, 0.24373698249104844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5470684679262732, 2);
  sqcRYGate(q, -1.3831977874039099, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5376161227895622, 2);
  sqcRYGate(q, -0.5399492151458345, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4937116134047543, 1);
  sqcRYGate(q, -2.986358728118853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5953209780586897, 1);
  sqcRYGate(q, -0.8063935271945165, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.336564263128901, 0);
  sqcRYGate(q, -1.5155172597661775, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.007380704222795, 0);
  sqcRYGate(q, 0.01570190049184994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08891423702352697, 2);
  sqcRYGate(q, 1.7699910909275058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7709218191549834, 2);
  sqcRYGate(q, 1.5581113361112164, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9946449218254747, 1);
  sqcRYGate(q, -0.7578539901890818, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8032671409392449, 1);
  sqcRYGate(q, 2.231078093548243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6016212484122214, 0);
  sqcRYGate(q, 1.733918762984013, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0583063459938362, 0);
  sqcRYGate(q, 2.7512920471308795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9763871656898209, 2);
  sqcRYGate(q, -0.8051199086535438, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7230076690023246, 2);
  sqcRYGate(q, -0.5859185286475567, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6550901139479368, 1);
  sqcRYGate(q, 2.830767829985476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4609883198422298, 1);
  sqcRYGate(q, 0.616211131770318, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.45221340896893114, 0);
  sqcRYGate(q, -2.182474293373551, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1265432175659713, 0);
  sqcRYGate(q, 1.1541240271864073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5942604304185883, 2);
  sqcRYGate(q, 0.9911878878729395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.44109764609297, 2);
  sqcRYGate(q, 1.6256744960797394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.33496887457819013, 1);
  sqcRYGate(q, -2.653558787653068, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.19664705801232163, 1);
  sqcRYGate(q, 0.62804965643606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.24448179754004595, 0);
  sqcRYGate(q, 0.9916723049489038, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0020434727025718, 0);
  sqcRYGate(q, -0.9992030141373666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9263242753444452, 2);
  sqcRYGate(q, 0.17235010179824872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3392961639935172, 2);
  sqcRYGate(q, 2.4841654639717667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7466591511860905, 1);
  sqcRYGate(q, -1.2035184604801323, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2501005930702981, 1);
  sqcRYGate(q, -2.336386480360417, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10724619357308411, 0);
  sqcRYGate(q, -0.08985497884394497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0535578505733043, 0);
  sqcRYGate(q, -0.11594913437511511, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.49586498884543634, 2);
  sqcRYGate(q, -2.8457153765772656, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0424679948974998, 2);
  sqcRYGate(q, 1.173113606565867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1957983469217117, 1);
  sqcRYGate(q, 2.1728039766893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8115434788347273, 1);
  sqcRYGate(q, 1.9656920945579888, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.07397908970245146, 0);
  sqcRYGate(q, -0.79641508023796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.030509211703888543, 0);
  sqcRYGate(q, -0.02396345598442196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7816004146127544, 2);
  sqcRYGate(q, -2.1376191922019374, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7157613025734149, 2);
  sqcRYGate(q, -0.20573541196362932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9043415544716593, 1);
  sqcRYGate(q, -0.27490500057867706, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3563301345656535, 1);
  sqcRYGate(q, -2.2043114036900855, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2565140683200404, 0);
  sqcRYGate(q, -3.003209431630147, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1178371956111564, 0);
  sqcRYGate(q, -1.9864408458915408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9297960231884594, 2);
  sqcRYGate(q, 3.1117157485927063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0880611994812006, 2);
  sqcRYGate(q, -1.232097226413721, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.15154109124450094, 1);
  sqcRYGate(q, -1.2899080583382005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.715459675795893, 1);
  sqcRYGate(q, -3.002782822735286, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.94258735174327, 0);
  sqcRYGate(q, -0.688266724870923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2777644158339534, 0);
  sqcRYGate(q, 1.893056835968756, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1277300882123589, 2);
  sqcRYGate(q, 0.5611465986392146, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1158952889257745, 2);
  sqcRYGate(q, -2.33799787407508, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7779671859719386, 1);
  sqcRYGate(q, 1.4076033306551106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10722231036597486, 1);
  sqcRYGate(q, 0.9875800296535084, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9262879941876987, 0);
  sqcRYGate(q, -0.8441305680803382, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7198828078624744, 0);
  sqcRYGate(q, -1.36183945635091, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7928844670372461, 2);
  sqcRYGate(q, -2.686002612028012, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1077621227129768, 2);
  sqcRYGate(q, 1.71202820676025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4822328426360074, 1);
  sqcRYGate(q, 1.5176246100371205, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.011802801128321, 1);
  sqcRYGate(q, 1.9362676672271635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.625135846684005, 0);
  sqcRYGate(q, -1.9311729763650771, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.01776193356196, 0);
  sqcRYGate(q, 0.549412934454752, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.366257284004174, 2);
  sqcRYGate(q, 1.5479289105770846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8390466755268093, 2);
  sqcRYGate(q, 0.27598991095188996, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7032213173626445, 1);
  sqcRYGate(q, -2.6359401231575506, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8834471001213777, 1);
  sqcRYGate(q, -2.835967198863191, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8897972113668784, 0);
  sqcRYGate(q, -2.4978473066693834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7678005113430426, 0);
  sqcRYGate(q, 0.7653461525201575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5876433162506922, 2);
  sqcRYGate(q, 1.3174837979734804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.022350067993921, 2);
  sqcRYGate(q, -1.8408671018779221, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6805172613251744, 1);
  sqcRYGate(q, 0.45196244038515343, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.068272088224524, 1);
  sqcRYGate(q, -0.7367492355571066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3657242278307544, 0);
  sqcRYGate(q, 2.179549180543054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6148670760211876, 0);
  sqcRYGate(q, 0.502401597300521, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.84358552069296, 2);
  sqcRYGate(q, -1.709487310211621, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.14346314053060422, 2);
  sqcRYGate(q, 1.30443733992475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2924334793918284, 1);
  sqcRYGate(q, 0.0745648605252545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9690887096331284, 1);
  sqcRYGate(q, -1.948995722644388, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8900394894187919, 0);
  sqcRYGate(q, -0.015208287413866373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.16323124286808757, 0);
  sqcRYGate(q, 1.357004919946399, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.66959105143818, 2);
  sqcRYGate(q, -0.8083214034238045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7011685834204793, 2);
  sqcRYGate(q, -1.2310757103273577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.546365853774529, 1);
  sqcRYGate(q, 0.30136488577355897, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4154884100616396, 1);
  sqcRYGate(q, 0.7696480238074894, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.446274854034034, 0);
  sqcRYGate(q, 1.078302596223177, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.393118960043632, 0);
  sqcRYGate(q, 1.3354814272878366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8423547317454947, 2);
  sqcRYGate(q, 0.8383354430173116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0791462328801176, 2);
  sqcRYGate(q, -0.4142026016157139, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4121127638679873, 1);
  sqcRYGate(q, 2.8057151884580054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9737395520281201, 1);
  sqcRYGate(q, 2.0509987125569396, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6405783101362035, 0);
  sqcRYGate(q, 1.5022782829478922, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4929042703828441, 0);
  sqcRYGate(q, 2.9869553411976972, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.002879936270624, 2);
  sqcRYGate(q, -3.102735318389777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2454068457217176, 2);
  sqcRYGate(q, -2.476565130170595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9103831507301994, 1);
  sqcRYGate(q, -0.8720514534469956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.073269962701777, 1);
  sqcRYGate(q, 0.716762784029733, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9795102841758632, 0);
  sqcRYGate(q, -0.4326214167377505, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07382870046575629, 0);
  sqcRYGate(q, -2.6266852788602506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0167780927828165, 2);
  sqcRYGate(q, 3.073423069882007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1104038679020967, 2);
  sqcRYGate(q, 1.1154386947623367, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9224867854031418, 1);
  sqcRYGate(q, 1.967649860157727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.45748115814353146, 1);
  sqcRYGate(q, 1.4795789403848216, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.018110971917885, 0);
  sqcRYGate(q, -1.8821889486196763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1972617646582453, 0);
  sqcRYGate(q, -1.4124054739277367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.187913338564643, 2);
  sqcRYGate(q, -1.4226272163130242, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07562362330747069, 2);
  sqcRYGate(q, -2.5072636702687827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4586660032912055, 1);
  sqcRYGate(q, 0.7361649447871106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9182334919039405, 1);
  sqcRYGate(q, 0.059376527974065764, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5174156803177787, 0);
  sqcRYGate(q, 1.0710363076834524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.954060734302329, 0);
  sqcRYGate(q, 0.8159608746529311, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2938224089382002, 2);
  sqcRYGate(q, 1.4337502469207528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0067514370628623, 2);
  sqcRYGate(q, -2.0736512750153198, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6623853621014169, 1);
  sqcRYGate(q, -3.0220008457057284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0166269702234514, 1);
  sqcRYGate(q, -1.7157382894526731, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5406216017370102, 0);
  sqcRYGate(q, -0.3051961394800372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8154965424678355, 0);
  sqcRYGate(q, 0.4747938701187424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8618682061550533, 2);
  sqcRYGate(q, 1.2274108286977299, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.045967136254432, 2);
  sqcRYGate(q, -0.47594570837735356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1464679870819694, 1);
  sqcRYGate(q, 0.8190230529599855, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4543962152352785, 1);
  sqcRYGate(q, 1.0495315746028049, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.032845359763473, 0);
  sqcRYGate(q, 0.6061479582395304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.33456089187021365, 0);
  sqcRYGate(q, 1.9092574945563117, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2015804546276558, 2);
  sqcRYGate(q, -1.2802227541841305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8789996303115368, 2);
  sqcRYGate(q, -2.496227550431908, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7962434196443975, 1);
  sqcRYGate(q, 3.0340860574560433, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.85204504926417, 1);
  sqcRYGate(q, 3.101690628067593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.31464246972810317, 0);
  sqcRYGate(q, 2.0241938985902737, 1);
  sqcRYGate(q, -2.3204012877991103, 2);
  sqcRYGate(q, 1.3442217095793236, 3);

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
