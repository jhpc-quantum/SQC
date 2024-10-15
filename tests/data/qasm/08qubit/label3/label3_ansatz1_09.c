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

  sqcRYGate(q, 0.0893507316410229, 0);
  sqcRZGate(q, -0.8115534235806106, 0);
  sqcRYGate(q, -1.1473024042689106, 1);
  sqcRZGate(q, -0.8094257472206685, 1);
  sqcRYGate(q, 2.8070802739329426, 2);
  sqcRZGate(q, 1.7043885826582357, 2);
  sqcRYGate(q, -0.5712392238223334, 3);
  sqcRZGate(q, -2.8359886112378425, 3);
  sqcRYGate(q, 3.138695938011217, 4);
  sqcRZGate(q, 0.0008353316020969044, 4);
  sqcRYGate(q, 1.5620453165533081, 5);
  sqcRZGate(q, -1.4511725688649573, 5);
  sqcRYGate(q, 1.6463284534905378, 6);
  sqcRZGate(q, 3.0156357611130917, 6);
  sqcRYGate(q, -2.2991098961984577, 7);
  sqcRZGate(q, 2.785279879427822, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.140844150595922, 0);
  sqcRZGate(q, -1.0891357088083025, 0);
  sqcRYGate(q, -3.1255508226507214, 1);
  sqcRZGate(q, 0.38240432072684266, 1);
  sqcRYGate(q, -1.453473324714967, 2);
  sqcRZGate(q, -1.0462722558232065, 2);
  sqcRYGate(q, 2.2571274493718008, 3);
  sqcRZGate(q, -2.167643616727048, 3);
  sqcRYGate(q, -1.5704185773891726, 4);
  sqcRZGate(q, -0.05888861650814707, 4);
  sqcRYGate(q, 0.8154721600965464, 5);
  sqcRZGate(q, -2.266746147759208, 5);
  sqcRYGate(q, -2.8524829946358623, 6);
  sqcRZGate(q, -2.1634692707357948, 6);
  sqcRYGate(q, 1.1631376928560315, 7);
  sqcRZGate(q, -1.1699160801079849, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.07229871594014359, 0);
  sqcRZGate(q, -1.946977501874823, 0);
  sqcRYGate(q, -0.6249237945346973, 1);
  sqcRZGate(q, -0.08173762592364499, 1);
  sqcRYGate(q, 1.392089629664821, 2);
  sqcRZGate(q, -1.2718181464014, 2);
  sqcRYGate(q, -1.5708172253967003, 3);
  sqcRZGate(q, -2.5483329957271015, 3);
  sqcRYGate(q, 1.5209054087599798, 4);
  sqcRZGate(q, -1.8878098575553126, 4);
  sqcRYGate(q, -1.5756572650071363, 5);
  sqcRZGate(q, -1.5641180277617597, 5);
  sqcRYGate(q, 2.902095929801366, 6);
  sqcRZGate(q, 0.5177608133963991, 6);
  sqcRYGate(q, 2.9308029796092163, 7);
  sqcRZGate(q, 1.2001280703095905, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5716935406484627, 0);
  sqcRZGate(q, -2.6358079080917127, 0);
  sqcRYGate(q, 3.1184129134973877, 1);
  sqcRZGate(q, -2.2883762795564837, 1);
  sqcRYGate(q, -1.5707452043700547, 2);
  sqcRZGate(q, -2.491760138774093, 2);
  sqcRYGate(q, -1.8072190746603145, 3);
  sqcRZGate(q, -0.014613567201647193, 3);
  sqcRYGate(q, -2.8163952771213863, 4);
  sqcRZGate(q, 1.6160386791072399, 4);
  sqcRYGate(q, 1.405669808352032, 5);
  sqcRZGate(q, 3.127861016578552, 5);
  sqcRYGate(q, 0.013260644288330957, 6);
  sqcRZGate(q, 2.596391175757121, 6);
  sqcRYGate(q, 0.5414366350832429, 7);
  sqcRZGate(q, -1.6817073709444386, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5905536171729544, 0);
  sqcRZGate(q, 1.4261248434254077, 0);
  sqcRYGate(q, -1.569642117921629, 1);
  sqcRZGate(q, 2.6697489208416085, 1);
  sqcRYGate(q, 3.083188110126668, 2);
  sqcRZGate(q, 0.6986443553080273, 2);
  sqcRYGate(q, 3.0926041991274795, 3);
  sqcRZGate(q, 0.030999575284655592, 3);
  sqcRYGate(q, -1.6105060000760416, 4);
  sqcRZGate(q, 3.131155359412356, 4);
  sqcRYGate(q, 1.660837559005767, 5);
  sqcRZGate(q, 0.03521828042168096, 5);
  sqcRYGate(q, -0.9233674011675839, 6);
  sqcRZGate(q, 2.2919242841954883, 6);
  sqcRYGate(q, 1.1952181288472126, 7);
  sqcRZGate(q, -2.365198560619075, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.3904258829183447, 0);
  sqcRZGate(q, -0.5170726610167868, 0);
  sqcRYGate(q, 0.10529397058840573, 1);
  sqcRZGate(q, 1.867986143014642, 1);
  sqcRYGate(q, -0.005589360847397806, 2);
  sqcRZGate(q, -0.7313240272271313, 2);
  sqcRYGate(q, 1.491497158107343, 3);
  sqcRZGate(q, -1.588918018608669, 3);
  sqcRYGate(q, -1.2446558643807388, 4);
  sqcRZGate(q, 3.139383418677899, 4);
  sqcRYGate(q, -0.01278660781378018, 5);
  sqcRZGate(q, -1.5998773756622264, 5);
  sqcRYGate(q, 1.5576483551895985, 6);
  sqcRZGate(q, 2.662496765871293, 6);
  sqcRYGate(q, -3.130743322804434, 7);
  sqcRZGate(q, -2.350971129768741, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.736493598821957, 0);
  sqcRZGate(q, 1.591660290867927, 0);
  sqcRYGate(q, 3.141205073316408, 1);
  sqcRZGate(q, -1.6881352687915834, 1);
  sqcRYGate(q, 0.015650097105109676, 2);
  sqcRZGate(q, -0.575508465386239, 2);
  sqcRYGate(q, 1.5766059928385028, 3);
  sqcRZGate(q, 1.1153444966747814, 3);
  sqcRYGate(q, -1.3192336652059722, 4);
  sqcRZGate(q, -1.5710107599203973, 4);
  sqcRYGate(q, 2.7385141626695697, 5);
  sqcRZGate(q, -0.7777069652961257, 5);
  sqcRYGate(q, 2.5970366891448675, 6);
  sqcRZGate(q, -3.132824017919433, 6);
  sqcRYGate(q, -1.3303604500042248, 7);
  sqcRZGate(q, -3.1048289643865807, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.682231132971703, 0);
  sqcRZGate(q, -1.9856545088973456, 0);
  sqcRYGate(q, -0.5508711655366687, 1);
  sqcRZGate(q, 2.074350778672647, 1);
  sqcRYGate(q, 1.5696690382458716, 2);
  sqcRZGate(q, -2.733472886462287, 2);
  sqcRYGate(q, -1.9751887174820733, 3);
  sqcRZGate(q, 1.2858272117770264, 3);
  sqcRYGate(q, 1.9908992472235658, 4);
  sqcRZGate(q, 2.8313334626883337, 4);
  sqcRYGate(q, -0.1438852585345849, 5);
  sqcRZGate(q, -2.324368777342062, 5);
  sqcRYGate(q, 3.0703932902916415, 6);
  sqcRZGate(q, -2.8995666685389407, 6);
  sqcRYGate(q, 0.023514682766091286, 7);
  sqcRZGate(q, -0.10080311795501462, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7010203725878656, 0);
  sqcRZGate(q, 2.9490182078435185, 0);
  sqcRYGate(q, 1.9289682433836625e-05, 1);
  sqcRZGate(q, -2.1086789259448544, 1);
  sqcRYGate(q, 3.1043781066847367, 2);
  sqcRZGate(q, -2.7395486670111335, 2);
  sqcRYGate(q, 1.5842792124952565, 3);
  sqcRZGate(q, 3.1243626954822625, 3);
  sqcRYGate(q, -1.6468720480214065, 4);
  sqcRZGate(q, -1.471443825302515, 4);
  sqcRYGate(q, -2.0898584005778407, 5);
  sqcRZGate(q, -0.7255590475774217, 5);
  sqcRYGate(q, -0.12748570268954215, 6);
  sqcRZGate(q, 1.7732337941511203, 6);
  sqcRYGate(q, 1.1838501989688743, 7);
  sqcRZGate(q, -2.6493899058252848, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.884619639530404, 0);
  sqcRZGate(q, -1.6906291804644895, 0);
  sqcRYGate(q, 0.6968003480948992, 1);
  sqcRZGate(q, 3.1300968390726536, 1);
  sqcRYGate(q, 2.0840283544018625, 2);
  sqcRZGate(q, -0.014475817783775147, 2);
  sqcRYGate(q, 3.122702966137561, 3);
  sqcRZGate(q, 2.09961477375922, 3);
  sqcRYGate(q, 1.5698325000335243, 4);
  sqcRZGate(q, 0.03516146076275728, 4);
  sqcRYGate(q, 3.114267869494451, 5);
  sqcRZGate(q, -2.3071870682206175, 5);
  sqcRYGate(q, 1.5582082048713977, 6);
  sqcRZGate(q, 1.3486011673112543, 6);
  sqcRYGate(q, -3.1273987879796117, 7);
  sqcRZGate(q, 1.0367072642566935, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.803950503556931, 0);
  sqcRZGate(q, -1.1714690569362567, 0);
  sqcRYGate(q, -3.0094407652996895, 1);
  sqcRZGate(q, -3.129602370018819, 1);
  sqcRYGate(q, 1.5258326285118278, 2);
  sqcRZGate(q, 1.565416215311424, 2);
  sqcRYGate(q, 3.134203616961768, 3);
  sqcRZGate(q, -1.1360160590366153, 3);
  sqcRYGate(q, 1.9276502099361004, 4);
  sqcRZGate(q, 0.012586967314125452, 4);
  sqcRYGate(q, 1.5726222636554512, 5);
  sqcRZGate(q, 3.1068550865490097, 5);
  sqcRYGate(q, 1.6461479096992702, 6);
  sqcRZGate(q, -1.7820920014845179, 6);
  sqcRYGate(q, -3.0072440051781335, 7);
  sqcRZGate(q, -2.087670360077248, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.13175797872627, 0);
  sqcRZGate(q, -1.1944486072582654, 0);
  sqcRYGate(q, 1.578804110462891, 1);
  sqcRZGate(q, -1.6904353065024418, 1);
  sqcRYGate(q, -1.561649167693063, 2);
  sqcRZGate(q, -2.4686865386915664, 2);
  sqcRYGate(q, -0.012964117878919268, 3);
  sqcRZGate(q, -2.0915959414189063, 3);
  sqcRYGate(q, -3.088309042184569, 4);
  sqcRZGate(q, -0.11861286189354354, 4);
  sqcRYGate(q, 0.09227399106192456, 5);
  sqcRZGate(q, 0.15364193529184522, 5);
  sqcRYGate(q, 1.5731526253849817, 6);
  sqcRZGate(q, -2.132632325225863, 6);
  sqcRYGate(q, 3.1411180215483014, 7);
  sqcRZGate(q, -1.9353288607226409, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.1814932978895714, 0);
  sqcRZGate(q, 2.413264205056089, 0);
  sqcRYGate(q, 1.8014265963336868, 1);
  sqcRZGate(q, 1.8061170178485801, 1);
  sqcRYGate(q, -1.6884438862511224, 2);
  sqcRZGate(q, 0.23639226944693625, 2);
  sqcRYGate(q, -0.20240898679050626, 3);
  sqcRZGate(q, -0.6951834404168338, 3);
  sqcRYGate(q, 1.6695555603196353, 4);
  sqcRZGate(q, 1.7608160573420868, 4);
  sqcRYGate(q, -1.4550779833279621, 5);
  sqcRZGate(q, 1.8190351768768496, 5);
  sqcRYGate(q, -0.13669574386641195, 6);
  sqcRZGate(q, 0.8046167622640852, 6);
  sqcRYGate(q, 1.6890322056689273, 7);
  sqcRZGate(q, -2.8807139268711226, 7);

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
