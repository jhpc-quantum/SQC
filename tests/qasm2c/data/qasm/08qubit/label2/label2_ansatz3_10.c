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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.0654014168440433, 0);
  sqcRZGate(q, -1.241135200264979, 0);
  sqcRYGate(q, -0.0014062352862227456, 1);
  sqcRZGate(q, -1.1569078303324236, 1);
  sqcRYGate(q, -3.141508784364113, 2);
  sqcRZGate(q, 0.6446766804575033, 2);
  sqcRYGate(q, 1.5722399783978203, 3);
  sqcRZGate(q, 2.5632284990711938, 3);
  sqcRYGate(q, -1.7706927354830544, 4);
  sqcRZGate(q, 1.4764536594255704, 4);
  sqcRYGate(q, 2.062766463312358, 5);
  sqcRZGate(q, -2.8620835108823712, 5);
  sqcRYGate(q, 0.7637151797775656, 6);
  sqcRZGate(q, 0.5885800006758352, 6);
  sqcRYGate(q, 0.35392110676998634, 7);
  sqcRZGate(q, -0.3173719238492838, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.6180901112497322, 0);
  sqcRZGate(q, -2.119299495302803, 0);
  sqcRYGate(q, -1.5713818935529682, 1);
  sqcRZGate(q, -2.9273253214494184, 1);
  sqcRYGate(q, -6.079073707536031e-06, 2);
  sqcRZGate(q, 1.8924791777344836, 2);
  sqcRYGate(q, 3.1392715544064695, 3);
  sqcRZGate(q, -2.957029154190799, 3);
  sqcRYGate(q, 1.0551695864163817, 4);
  sqcRZGate(q, 1.1197123480280382, 4);
  sqcRYGate(q, -3.1405011644073233, 5);
  sqcRZGate(q, 0.1878844465021725, 5);
  sqcRYGate(q, -1.6746364341432356, 6);
  sqcRZGate(q, 0.5167252591791421, 6);
  sqcRYGate(q, -2.515212852986078, 7);
  sqcRZGate(q, -2.5187428770427083, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.570870444506744, 0);
  sqcRZGate(q, -0.003957230167979553, 0);
  sqcRYGate(q, 1.5227808831525078, 1);
  sqcRZGate(q, -1.545190818333371, 1);
  sqcRYGate(q, -1.5708302264577878, 2);
  sqcRZGate(q, 1.5408285194409421, 2);
  sqcRYGate(q, 2.8377074544522602, 3);
  sqcRZGate(q, 1.1835090536746726, 3);
  sqcRYGate(q, -0.6381669327805563, 4);
  sqcRZGate(q, 2.5824741193305045, 4);
  sqcRYGate(q, -2.414946403227319, 5);
  sqcRZGate(q, 2.713837568749904, 5);
  sqcRYGate(q, -3.11901176821526, 6);
  sqcRZGate(q, 0.19906100886425213, 6);
  sqcRYGate(q, 1.1546324096309766, 7);
  sqcRZGate(q, 1.4878590753581618, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.57079655661232, 0);
  sqcRZGate(q, -1.9105817144714818, 0);
  sqcRYGate(q, -1.4612853596597184, 1);
  sqcRZGate(q, -1.8014351100871282, 1);
  sqcRYGate(q, -1.718514158716443, 2);
  sqcRZGate(q, 2.2258263849737143, 2);
  sqcRYGate(q, 3.1415633946942094, 3);
  sqcRZGate(q, -2.738746441031286, 3);
  sqcRYGate(q, -0.00013581737797069136, 4);
  sqcRZGate(q, 1.377214405407055, 4);
  sqcRYGate(q, 3.1377774693860196, 5);
  sqcRZGate(q, -1.147356019522286, 5);
  sqcRYGate(q, 2.9285274494143083, 6);
  sqcRZGate(q, 0.38766471557037036, 6);
  sqcRYGate(q, -0.49983025874377046, 7);
  sqcRZGate(q, -1.7407967712184884, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5707755329745394, 0);
  sqcRZGate(q, -1.3091911762781956, 0);
  sqcRYGate(q, -1.5696126166034414, 1);
  sqcRZGate(q, 1.9105736967203977, 1);
  sqcRYGate(q, -1.8452095570388058, 2);
  sqcRZGate(q, 1.8550142852801885, 2);
  sqcRYGate(q, 0.7731273107351351, 3);
  sqcRZGate(q, -2.5867947795532373, 3);
  sqcRYGate(q, -6.603289798613766e-05, 4);
  sqcRZGate(q, -0.09783348755710478, 4);
  sqcRYGate(q, 0.09959806341671153, 5);
  sqcRZGate(q, 1.4700821652651095, 5);
  sqcRYGate(q, 3.108109887757234, 6);
  sqcRZGate(q, 2.136812473915208, 6);
  sqcRYGate(q, -0.13422650827320037, 7);
  sqcRZGate(q, -2.7624855073501355, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.003661322397362455, 0);
  sqcRZGate(q, -0.26068740837843946, 0);
  sqcRYGate(q, 1.3335816797662146, 1);
  sqcRZGate(q, 1.2542821595040436, 1);
  sqcRYGate(q, -3.141557835996372, 2);
  sqcRZGate(q, -1.5083770785182222, 2);
  sqcRYGate(q, -3.141481476728537, 3);
  sqcRZGate(q, -2.424094926961936, 3);
  sqcRYGate(q, 3.1415857734808363, 4);
  sqcRZGate(q, 1.2938978762087574, 4);
  sqcRYGate(q, -3.1409937019230987, 5);
  sqcRZGate(q, -2.7734832112805474, 5);
  sqcRYGate(q, -1.2956697691858938, 6);
  sqcRZGate(q, 2.986620010101848, 6);
  sqcRYGate(q, 1.5547284574349776, 7);
  sqcRZGate(q, -0.5038707005772746, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.8814571685896049, 0);
  sqcRZGate(q, 1.470342458789608, 0);
  sqcRYGate(q, 1.9283159088234392e-05, 1);
  sqcRZGate(q, 1.5514345170200174, 1);
  sqcRYGate(q, -1.5343248702446148, 2);
  sqcRZGate(q, -3.0620920352886056, 2);
  sqcRYGate(q, 1.8096901838126813, 3);
  sqcRZGate(q, 1.5718536543295465, 3);
  sqcRYGate(q, -0.010378951595219732, 4);
  sqcRZGate(q, -1.5277305651926962, 4);
  sqcRYGate(q, -1.2051294673845918, 5);
  sqcRZGate(q, 0.3673311402652205, 5);
  sqcRYGate(q, 0.03243287977888709, 6);
  sqcRZGate(q, 1.5810843524414309, 6);
  sqcRYGate(q, -1.9335443366865661, 7);
  sqcRZGate(q, -1.1699519222524897, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5290295301833066, 0);
  sqcRZGate(q, 3.090008330037864, 0);
  sqcRYGate(q, -1.5451712504981936, 1);
  sqcRZGate(q, 0.5062463576593927, 1);
  sqcRYGate(q, -0.0011274718648107624, 2);
  sqcRZGate(q, 1.0442230189137687, 2);
  sqcRYGate(q, 1.570523983096339, 3);
  sqcRZGate(q, -1.5701166843075358, 3);
  sqcRYGate(q, 3.141487032012273, 4);
  sqcRZGate(q, 2.3634647401394644, 4);
  sqcRYGate(q, -1.5734250177968816, 5);
  sqcRZGate(q, 1.4289094560825537, 5);
  sqcRYGate(q, -1.6205189780795937, 6);
  sqcRZGate(q, 0.029603627040090785, 6);
  sqcRYGate(q, -2.732495345439844, 7);
  sqcRZGate(q, 2.602850158084975, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.7828376116420381, 0);
  sqcRZGate(q, 0.5835326758149685, 0);
  sqcRYGate(q, -0.6820176341559989, 1);
  sqcRZGate(q, -1.5020764551387131, 1);
  sqcRYGate(q, 1.2380430997207821e-05, 2);
  sqcRZGate(q, 0.7714247844104171, 2);
  sqcRYGate(q, -1.5707947150740207, 3);
  sqcRZGate(q, -3.1211764588838147, 3);
  sqcRYGate(q, -0.00013755414600879473, 4);
  sqcRZGate(q, 0.5282509532780618, 4);
  sqcRYGate(q, -3.141478203931168, 5);
  sqcRZGate(q, -0.14275192689979332, 5);
  sqcRYGate(q, 1.5144116015362243, 6);
  sqcRZGate(q, -0.27127237794234715, 6);
  sqcRYGate(q, 3.141306349935848, 7);
  sqcRZGate(q, 1.076619461957214, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.141513871936583, 0);
  sqcRZGate(q, -0.8014737184107626, 0);
  sqcRYGate(q, -2.021726856452668e-05, 1);
  sqcRZGate(q, -1.6402782958146878, 1);
  sqcRYGate(q, 0.00014502649699606602, 2);
  sqcRZGate(q, 0.9565554485207979, 2);
  sqcRYGate(q, -0.001372484442172528, 3);
  sqcRZGate(q, 1.5504039929798485, 3);
  sqcRYGate(q, 1.5721285079970992, 4);
  sqcRZGate(q, -1.5849669872912395, 4);
  sqcRYGate(q, -1.5707970420221897, 5);
  sqcRZGate(q, 5.857308379053383e-06, 5);
  sqcRYGate(q, 1.4621331814270742, 6);
  sqcRZGate(q, 2.340268900843439, 6);
  sqcRYGate(q, -0.9030281290704867, 7);
  sqcRZGate(q, -2.937711043594147, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.6482789488734982, 0);
  sqcRZGate(q, -0.06635359816771787, 0);
  sqcRYGate(q, -2.459556331511868, 1);
  sqcRZGate(q, 0.10718732055087887, 1);
  sqcRYGate(q, 3.1415748865458557, 2);
  sqcRZGate(q, -3.0052050573831086, 2);
  sqcRYGate(q, 1.5708095168846352, 3);
  sqcRZGate(q, -0.5568379369348175, 3);
  sqcRYGate(q, 0.6249920951121357, 4);
  sqcRZGate(q, 1.5558066565450113, 4);
  sqcRYGate(q, -1.5707987809315604, 5);
  sqcRZGate(q, -1.6489895885292212, 5);
  sqcRYGate(q, 0.19998486363778387, 6);
  sqcRZGate(q, 0.5145600952165211, 6);
  sqcRYGate(q, 3.1415838888936136, 7);
  sqcRZGate(q, 0.5608781674825648, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.870598987236373, 0);
  sqcRZGate(q, -2.621626411281223, 0);
  sqcRYGate(q, -3.1288759455644106, 1);
  sqcRZGate(q, 1.0535192760859458, 1);
  sqcRYGate(q, -0.16672434287382915, 2);
  sqcRZGate(q, -1.6228187652667476, 2);
  sqcRYGate(q, -1.5704273084444649, 3);
  sqcRZGate(q, 1.266881752253216, 3);
  sqcRYGate(q, 3.1415379533372136, 4);
  sqcRZGate(q, -0.4244237387971788, 4);
  sqcRYGate(q, -1.5707754832612757, 5);
  sqcRZGate(q, 1.5703154777213133, 5);
  sqcRYGate(q, 1.5428383225513969, 6);
  sqcRZGate(q, 1.51891511351277, 6);
  sqcRYGate(q, -3.1415889185130457, 7);
  sqcRZGate(q, 1.1266936667013818, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.4769703290884929, 0);
  sqcRZGate(q, 1.7474240916896233, 0);
  sqcRYGate(q, 0.05843635535120582, 1);
  sqcRZGate(q, 0.9829248199811635, 1);
  sqcRYGate(q, 3.1415817806621416, 2);
  sqcRZGate(q, -1.3348341604288496, 2);
  sqcRYGate(q, -4.278695394715283e-06, 3);
  sqcRZGate(q, 2.7490205511038424, 3);
  sqcRYGate(q, -3.1415771677729323, 4);
  sqcRZGate(q, -0.6723627757977512, 4);
  sqcRYGate(q, -1.5707962042850234, 5);
  sqcRZGate(q, -0.3945055318854411, 5);
  sqcRYGate(q, 1.5665944861677552, 6);
  sqcRZGate(q, 0.7622469977493316, 6);
  sqcRYGate(q, 1.610206561629137, 7);
  sqcRZGate(q, 0.10193235033571037, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.6785114189970844, 0);
  sqcRZGate(q, 2.078266535984088, 0);
  sqcRYGate(q, 1.3276205891028292, 1);
  sqcRZGate(q, 1.210521412373702, 1);
  sqcRYGate(q, 1.8447621135952483, 2);
  sqcRZGate(q, -0.34129281438487463, 2);
  sqcRYGate(q, 1.8195999599903068, 3);
  sqcRZGate(q, -1.9169525911173277, 3);
  sqcRYGate(q, -1.1057697463297398, 4);
  sqcRZGate(q, -0.26820003178075674, 4);
  sqcRYGate(q, 0.26499282209027886, 5);
  sqcRZGate(q, -1.6234950589026955, 5);
  sqcRYGate(q, 0.42214737943164415, 6);
  sqcRZGate(q, -2.94391112030765, 6);
  sqcRYGate(q, -2.89537846823895, 7);
  sqcRZGate(q, -1.8640021843704648, 7);

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
