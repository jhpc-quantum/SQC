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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -0.05302250917953, 0);
  sqcRYGate(q, -0.13045930573107511, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.087745249935834, 0);
  sqcRYGate(q, -0.9967197315249169, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.09135457075881, 1);
  sqcRYGate(q, 0.81399385674667, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3105481323280108, 1);
  sqcRYGate(q, 3.0026068371146546, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.553862965106368, 2);
  sqcRYGate(q, -0.2501608327348937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.33931262750467517, 2);
  sqcRYGate(q, -2.680146668054522, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8082648068727245, 3);
  sqcRYGate(q, 1.6784544902139702, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.2038993218715941, 3);
  sqcRYGate(q, 0.8637526923473589, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6229244134570298, 4);
  sqcRYGate(q, 0.5990341737155823, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.47172961257890833, 4);
  sqcRYGate(q, -1.231960561064982, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0704941731694673, 5);
  sqcRYGate(q, 3.107313915716285, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.553397617576697, 5);
  sqcRYGate(q, 1.5662053025774785, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6672096066368938, 6);
  sqcRYGate(q, 0.8898861464884424, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7954481816415164, 6);
  sqcRYGate(q, 2.6142555890959387, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6320715822966099, 7);
  sqcRYGate(q, -1.3853245489557198, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9057091952513745, 7);
  sqcRYGate(q, -1.6545634811084815, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.007344321668126597, 8);
  sqcRYGate(q, 0.010769468366714998, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5455432213944305, 8);
  sqcRYGate(q, 1.5855215342607236, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.1509052903899772, 9);
  sqcRYGate(q, 2.0245230367019023, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.006596669312445513, 9);
  sqcRYGate(q, -3.1015529337003653, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.7112483697818135, 10);
  sqcRYGate(q, -1.0065500678129844, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.2223103082890466, 10);
  sqcRYGate(q, 2.9273979593954333, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.4091775933939674, 11);
  sqcRYGate(q, 0.22663242229239078, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.6415292009522274, 11);
  sqcRYGate(q, -0.6188482511444784, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.061524151675338, 12);
  sqcRYGate(q, 0.38091371924646555, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1282105255730106, 12);
  sqcRYGate(q, -0.18688560542959998, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.728344413014045, 13);
  sqcRYGate(q, 2.5186162593075525, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.8248472068608592, 13);
  sqcRYGate(q, 2.5807896894973688, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.3479109506394398, 14);
  sqcRYGate(q, 0.3024604486394527, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.2234762668809853, 14);
  sqcRYGate(q, 2.892746519541554, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.7176203153402819, 0);
  sqcRYGate(q, 2.406062450682853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9950102324072283, 0);
  sqcRYGate(q, 2.6616586369610644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1386459709178176, 1);
  sqcRYGate(q, -0.6936657758937116, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.399455832563247, 1);
  sqcRYGate(q, 0.9450822416611608, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08792203350978166, 2);
  sqcRYGate(q, -2.6328610840576925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2092929534468695, 2);
  sqcRYGate(q, -0.3167082092811597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1745443030038665, 3);
  sqcRYGate(q, -0.6691724580015048, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.2961914887423678, 3);
  sqcRYGate(q, 0.8151783197131284, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.579792965204129, 4);
  sqcRYGate(q, 2.7057368809733853, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.048825276699348, 4);
  sqcRYGate(q, -0.044445118016127626, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.568431716046086, 5);
  sqcRYGate(q, 0.5992837138367293, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1332788412171215, 5);
  sqcRYGate(q, -1.5472133301322266, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9418918841125388, 6);
  sqcRYGate(q, -0.842320395099704, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1910739998288533, 6);
  sqcRYGate(q, -0.003039391886295261, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6344598165877828, 7);
  sqcRYGate(q, -1.5686326608531465, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6078679554993016, 7);
  sqcRYGate(q, -1.5642876797511116, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.881577183871755, 8);
  sqcRYGate(q, -1.775865712948689, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5604684432745262, 8);
  sqcRYGate(q, -2.6944690325989464, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9286704260717182, 9);
  sqcRYGate(q, -0.48200018060573385, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5968121352888804, 9);
  sqcRYGate(q, 1.5311129537229793, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.29805951098413086, 10);
  sqcRYGate(q, -1.7711504439494983, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.61829363502199, 10);
  sqcRYGate(q, -1.5636589207766707, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6743927060754231, 11);
  sqcRYGate(q, -1.9961001619534957, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.9471183185927683, 11);
  sqcRYGate(q, 2.5074151453689213, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.42235639403766, 12);
  sqcRYGate(q, 2.6249257542617745, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.854754846733029, 12);
  sqcRYGate(q, -0.5223613335600356, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.7060860715117623, 13);
  sqcRYGate(q, -3.0661069978081525, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.1383049519248662, 13);
  sqcRYGate(q, -1.5074566980049633, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.4656572830137531, 14);
  sqcRYGate(q, -1.2547166637430072, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.2134660179562955, 14);
  sqcRYGate(q, -0.5679634295837745, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.3859404913186113, 0);
  sqcRYGate(q, 2.114980043134894, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.276402468706971, 0);
  sqcRYGate(q, -1.7593217079168495, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2593551136719077, 1);
  sqcRYGate(q, -0.8977650477336149, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.027337802883614, 1);
  sqcRYGate(q, 2.0614288460625128, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4291523895831146, 2);
  sqcRYGate(q, 1.2050571470451954, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0972228967548805, 2);
  sqcRYGate(q, -1.6835221906124067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.779004254133493, 3);
  sqcRYGate(q, -1.7102906297651377, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5012819118419802, 3);
  sqcRYGate(q, -1.1658561185184813, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.44516890861226, 4);
  sqcRYGate(q, -1.7541226522741895, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.020568038163109925, 4);
  sqcRYGate(q, 0.31463380893698023, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.595186397707633, 5);
  sqcRYGate(q, -2.353320624564009, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1136071225108917, 5);
  sqcRYGate(q, 1.6162681370188396, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.224883509757499, 6);
  sqcRYGate(q, -1.5706245196575241, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5383127275428894, 6);
  sqcRYGate(q, 1.4930746572645557, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6143097137273168, 7);
  sqcRYGate(q, 0.08415718710996149, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.874938650756639, 7);
  sqcRYGate(q, -0.1965460390239171, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.24491466785372776, 8);
  sqcRYGate(q, 3.047121261398066, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.915667589670465, 8);
  sqcRYGate(q, -3.092055886599205, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5863115437159898, 9);
  sqcRYGate(q, 1.5082860363792683, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.3318825829673315, 9);
  sqcRYGate(q, -1.5443759870250067, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5655736315745166, 10);
  sqcRYGate(q, -0.5385087484473894, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1124855696515294, 10);
  sqcRYGate(q, 2.8917707846187053, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.8719373589720484, 11);
  sqcRYGate(q, 2.669375807881281, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.43028512108973443, 11);
  sqcRYGate(q, 0.6426972815850185, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.785684622916753, 12);
  sqcRYGate(q, -1.0082914647328869, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.6000614147001866, 12);
  sqcRYGate(q, 1.6650836171057577, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.7287305405681379, 13);
  sqcRYGate(q, -0.9610012488299488, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5826496972875257, 13);
  sqcRYGate(q, 1.4207531074936703, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.005954845573270973, 14);
  sqcRYGate(q, -0.416109018274466, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.3121512506986988, 14);
  sqcRYGate(q, -2.2435654654165704, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.35815713303369634, 0);
  sqcRYGate(q, 1.393471870191341, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8468424711958926, 0);
  sqcRYGate(q, 2.3027513465041607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3236581492288462, 1);
  sqcRYGate(q, -1.626074953681706, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.42063995351537614, 1);
  sqcRYGate(q, 1.921785983001738, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8707875802341194, 2);
  sqcRYGate(q, 2.96310870456991, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5222056358064435, 2);
  sqcRYGate(q, 1.8825631570984704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0037224176660136, 3);
  sqcRYGate(q, -1.5726298880881284, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5511942906530563, 3);
  sqcRYGate(q, 2.880943645432329, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.04115419889222542, 4);
  sqcRYGate(q, -1.8979779426125347, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.622722076140981, 4);
  sqcRYGate(q, 1.613973875286272, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2546356729088175, 5);
  sqcRYGate(q, 1.4617533017658937, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.519841381511532, 5);
  sqcRYGate(q, 1.534173566687528, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6600092189804974, 6);
  sqcRYGate(q, 1.9084143738512518, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.585030031123352, 6);
  sqcRYGate(q, 0.563246860127741, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6191143949865954, 7);
  sqcRYGate(q, -2.470013128932258, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0644013016986937, 7);
  sqcRYGate(q, 0.20830876494436784, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5552913960055899, 8);
  sqcRYGate(q, 1.8913591881135852, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.025210490930694, 8);
  sqcRYGate(q, -2.622136222182253, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.030720726952915358, 9);
  sqcRYGate(q, 1.7700664444608998, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4382908258544585, 9);
  sqcRYGate(q, 0.07516550073496484, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.402526279135107, 10);
  sqcRYGate(q, -1.2397790000081006, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.315278487061465, 10);
  sqcRYGate(q, -0.34856829877128437, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.517245034937396, 11);
  sqcRYGate(q, -2.3158275187129753, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.09407173681829734, 11);
  sqcRYGate(q, -2.9300771330171584, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.06577518328087609, 12);
  sqcRYGate(q, -0.7937809867495942, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.0696262532578062, 12);
  sqcRYGate(q, 2.6478932830925292, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.5403294247464281, 13);
  sqcRYGate(q, 0.4629576511178124, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.605219363224636, 13);
  sqcRYGate(q, -0.8257706105782372, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.060274903528907506, 14);
  sqcRYGate(q, 2.1710776007490455, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.5260536988193696, 14);
  sqcRYGate(q, 1.3955426639988202, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5044123760265329, 0);
  sqcRYGate(q, -0.7529767399099007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.027811551672179, 0);
  sqcRYGate(q, 0.7220343726743987, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6105448007137807, 1);
  sqcRYGate(q, -2.510367337626214, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.003700809358026, 1);
  sqcRYGate(q, 1.1584697981093448, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.363851565697701, 2);
  sqcRYGate(q, 1.2921252528226388, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.646311046531757, 2);
  sqcRYGate(q, -0.8453096065703815, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5941511729615492, 3);
  sqcRYGate(q, 0.8571692237134837, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.120317487878381, 3);
  sqcRYGate(q, 1.7632462563986666, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8577885603670117, 4);
  sqcRYGate(q, -1.8313376355805318, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0349094075484935, 4);
  sqcRYGate(q, -1.9285581103064648, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.09307955760368, 5);
  sqcRYGate(q, -1.5722235854395419, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5740346381150083, 5);
  sqcRYGate(q, 1.6410516972015818, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5498387039933483, 6);
  sqcRYGate(q, -0.059996054887048345, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5715576824370916, 6);
  sqcRYGate(q, 1.450201207613566, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.771762494688967, 7);
  sqcRYGate(q, 0.7264908329062861, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5827016235687243, 7);
  sqcRYGate(q, -2.081191711678799, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5903781453539985, 8);
  sqcRYGate(q, 2.1974621167274657, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6235504791696878, 8);
  sqcRYGate(q, 0.7674980420257276, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1389248732076926, 9);
  sqcRYGate(q, -0.5746834892478079, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.028210050736377182, 9);
  sqcRYGate(q, -1.7847834231853463, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0258817414839254, 10);
  sqcRYGate(q, -1.6928393993716853, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8318981905595857, 10);
  sqcRYGate(q, 0.015760061851697035, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.466726911540531, 11);
  sqcRYGate(q, 1.6181336471020682, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.0907325761760696, 11);
  sqcRYGate(q, -0.2128919399354216, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.0748068530484884, 12);
  sqcRYGate(q, -1.5618362474231677, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.026947845285868, 12);
  sqcRYGate(q, -0.2617999325451651, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.9179030951428153, 13);
  sqcRYGate(q, 1.0796562757113781, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.1121205041603925, 13);
  sqcRYGate(q, 2.3891091641484348, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.8419222784763319, 14);
  sqcRYGate(q, -1.6514730038145116, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.638894564246697, 14);
  sqcRYGate(q, 1.2932113571601491, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.6036947219582687, 0);
  sqcRYGate(q, -1.954520597533259, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7097743889505053, 0);
  sqcRYGate(q, -1.7029580832482232, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5833799150972299, 1);
  sqcRYGate(q, -1.0763932936070053, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6493482567851458, 1);
  sqcRYGate(q, 2.784248570068113, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.076982761783192, 2);
  sqcRYGate(q, 1.5238095722678944, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9726049576087749, 2);
  sqcRYGate(q, -3.125006292135582, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.035534845614519917, 3);
  sqcRYGate(q, -1.7263563662412416, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2230306330666996, 3);
  sqcRYGate(q, 1.5366942919756965, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7132157096729346, 4);
  sqcRYGate(q, -2.550593203035871, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1127078849949537, 4);
  sqcRYGate(q, -0.046785351845188665, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4964389671707509, 5);
  sqcRYGate(q, 1.4121465291827735, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6835987351696506, 5);
  sqcRYGate(q, 0.9060033122539766, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3429546849223362, 6);
  sqcRYGate(q, 1.2112330984974373, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1330493394094034, 6);
  sqcRYGate(q, 3.1235515090883825, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.005283815281609072, 7);
  sqcRYGate(q, 1.0349724402153546, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0073860531457064, 7);
  sqcRYGate(q, -2.110003795933202, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.202048066607602, 8);
  sqcRYGate(q, 1.5867352247985047, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.536073668666921, 8);
  sqcRYGate(q, -0.33337024747903055, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.1049057816439722, 9);
  sqcRYGate(q, -0.7976374474279675, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5826089418350315, 9);
  sqcRYGate(q, -1.558203249575259, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6011500559946057, 10);
  sqcRYGate(q, 3.1389480428635594, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5440795712419524, 10);
  sqcRYGate(q, 1.5941110725989256, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.4200079773231593, 11);
  sqcRYGate(q, -0.3984988424864185, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.4059847447182898, 11);
  sqcRYGate(q, 0.04185855523862259, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.554886513520812, 12);
  sqcRYGate(q, 2.3233131475297317, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.2204124852026519, 12);
  sqcRYGate(q, 0.5589254053097862, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.3466417211730697, 13);
  sqcRYGate(q, -1.0329343383413256, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.698377994017955, 13);
  sqcRYGate(q, -1.5492704775212607, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.004485136424296487, 14);
  sqcRYGate(q, -0.05324780154150144, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5011596501274815, 14);
  sqcRYGate(q, -2.8176217687776535, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.9536270437048993, 0);
  sqcRYGate(q, 0.6101872250053181, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6847869269839073, 0);
  sqcRYGate(q, 1.100899335094999, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.24213863194054408, 1);
  sqcRYGate(q, -0.8086482559493684, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1741991367552274, 1);
  sqcRYGate(q, -2.431144944869516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8312211298159586, 2);
  sqcRYGate(q, -1.6518412792088304, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.108195888395198, 2);
  sqcRYGate(q, -2.9582212341560816, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2345121846554425, 3);
  sqcRYGate(q, -1.2724422936945934, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3445547062145122, 3);
  sqcRYGate(q, 3.132750062257901, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3777850405771543, 4);
  sqcRYGate(q, -0.32313304491579337, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.05530296246989939, 4);
  sqcRYGate(q, -2.0619684220038357, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6537911148698663, 5);
  sqcRYGate(q, -1.682494630366486, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.36667038719527856, 5);
  sqcRYGate(q, 2.9710999352824925, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0467685562602984, 6);
  sqcRYGate(q, -0.4999185505074065, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.138475369934449, 6);
  sqcRYGate(q, -3.139871089200821, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1274682641667426, 7);
  sqcRYGate(q, -0.32958334597959293, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1330406053256272, 7);
  sqcRYGate(q, -1.042945941126388, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.40398695368489695, 8);
  sqcRYGate(q, -1.7742127155613996, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.114203388742065, 8);
  sqcRYGate(q, 2.467040081504104, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.704004634054419, 9);
  sqcRYGate(q, 3.0011461387758445, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.1283507871725145, 9);
  sqcRYGate(q, -1.837265306687151, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.047117727080853385, 10);
  sqcRYGate(q, 1.624952089622683, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.011721911815855907, 10);
  sqcRYGate(q, 2.4712398456835465, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.4879069597128005, 11);
  sqcRYGate(q, 0.6445479313246718, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.966788657731647, 11);
  sqcRYGate(q, 3.1193902141306995, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.116365054675338, 12);
  sqcRYGate(q, 3.0813917368919674, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.3105397333517301, 12);
  sqcRYGate(q, 0.39617557540465403, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5453390462589347, 13);
  sqcRYGate(q, -0.3516796396302121, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.8465244716188625, 13);
  sqcRYGate(q, 1.360924896673712, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.1134414706802693, 14);
  sqcRYGate(q, 1.9190130529575438, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.8900313222055553, 14);
  sqcRYGate(q, -1.18824797038485, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.8137030973331636, 0);
  sqcRYGate(q, 1.6800400341825472, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5375449744874539, 0);
  sqcRYGate(q, -1.4601650243468454, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9561369349069768, 1);
  sqcRYGate(q, 1.3772358130689284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0944496196015783, 1);
  sqcRYGate(q, 0.9312511617805499, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0989086987891179, 2);
  sqcRYGate(q, -0.07597752127782267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6617339053757623, 2);
  sqcRYGate(q, -1.5370488600362595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6884304398210555, 3);
  sqcRYGate(q, 1.5761374968234958, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8254049752913745, 3);
  sqcRYGate(q, 0.006314605570508114, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0967303927678698, 4);
  sqcRYGate(q, 2.219876122556801, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1899909338952764, 4);
  sqcRYGate(q, -0.655490511005967, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8531997790400547, 5);
  sqcRYGate(q, -0.47213632119772075, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7384212905415257, 5);
  sqcRYGate(q, 0.11133668800240533, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3724660229422048, 6);
  sqcRYGate(q, 1.721012126626949, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0723904779222072, 6);
  sqcRYGate(q, 0.0006188687854820074, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4512171775671023, 7);
  sqcRYGate(q, -2.585998942640344, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.0407958759326843, 7);
  sqcRYGate(q, 1.3440769854369492, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.3013600483266132, 8);
  sqcRYGate(q, 0.15962162963683024, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.04963634062807021, 8);
  sqcRYGate(q, -0.009709046184370962, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.2146762144978638, 9);
  sqcRYGate(q, -1.0902980973825476, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.2531059208057212, 9);
  sqcRYGate(q, 2.747730394535761, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.1507637985550083, 10);
  sqcRYGate(q, -0.43311844358868523, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.07284470816956887, 10);
  sqcRYGate(q, 0.9897173796514375, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9477403966950706, 11);
  sqcRYGate(q, 2.6313878279487324, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.551241080692595, 11);
  sqcRYGate(q, 1.5945334666029038, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.4255303689349403, 12);
  sqcRYGate(q, -0.164006983810646, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.033238513779234875, 12);
  sqcRYGate(q, 2.8556695675027215, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.6074458540786578, 13);
  sqcRYGate(q, -1.6420025948760022, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.4884136069807036, 13);
  sqcRYGate(q, 1.5850856486808063, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.9734952802167127, 14);
  sqcRYGate(q, -0.6719053270209105, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.330501173760029, 14);
  sqcRYGate(q, 1.5916478351161867, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.831731124948715, 0);
  sqcRYGate(q, 0.7256125454112041, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0430554534346346, 0);
  sqcRYGate(q, 1.619353065661975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.546841067379744, 1);
  sqcRYGate(q, 1.4576194806289893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5654933445007062, 1);
  sqcRYGate(q, 1.557817459499798, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.137909756645575, 2);
  sqcRYGate(q, -1.1524509836167693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1399821066104274, 2);
  sqcRYGate(q, -1.5697150808114242, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3915416555271346, 3);
  sqcRYGate(q, 0.3942324645171791, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1333994269417755, 3);
  sqcRYGate(q, -0.019081891783409848, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7858584694643496, 4);
  sqcRYGate(q, 2.166280556545699, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.616032936871014, 4);
  sqcRYGate(q, -1.8829421280939664, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3529359145735995, 5);
  sqcRYGate(q, 0.9113456990405675, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9934787979099293, 5);
  sqcRYGate(q, 3.1277530589695086, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2553146924437604, 6);
  sqcRYGate(q, 2.5155841303227318, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.023389828675851376, 6);
  sqcRYGate(q, -0.013759377572271525, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0761129549683393, 7);
  sqcRYGate(q, -0.0811535027675895, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7370572430432415, 7);
  sqcRYGate(q, -1.5382263413179809, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5810762408062928, 8);
  sqcRYGate(q, 2.0249245332354646, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1304172041497194, 8);
  sqcRYGate(q, -0.0278444618935616, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.4408017049594792, 9);
  sqcRYGate(q, 0.05144597071650618, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6469110513920417, 9);
  sqcRYGate(q, 1.3438988576435231, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4742692737687939, 10);
  sqcRYGate(q, 0.25549298037349816, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.3258934096734229, 10);
  sqcRYGate(q, 0.017002451808963315, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.11482991471317, 11);
  sqcRYGate(q, 1.713051315576764, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5577230117929557, 11);
  sqcRYGate(q, -1.5656176031160722, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.1295515002925907, 12);
  sqcRYGate(q, -1.6177874007230344, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.4616052545580196, 12);
  sqcRYGate(q, -1.5402424097934866, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.10758089268305687, 13);
  sqcRYGate(q, 3.109913070396017, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5680905900388504, 13);
  sqcRYGate(q, 1.6485695176895119, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.1023526543867153, 14);
  sqcRYGate(q, 2.457064520468214, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.13912485569224, 14);
  sqcRYGate(q, 1.5633470448962106, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.533825355683045, 0);
  sqcRYGate(q, 0.38503447963396814, 1);
  sqcRYGate(q, -1.6278985675380582, 2);
  sqcRYGate(q, 0.730157199793017, 3);
  sqcRYGate(q, -2.9321408706253385, 4);
  sqcRYGate(q, 0.15344971949624037, 5);
  sqcRYGate(q, -0.12755298352591826, 6);
  sqcRYGate(q, 2.721053711631519, 7);
  sqcRYGate(q, -1.3737541791650705, 8);
  sqcRYGate(q, -0.8950632315852545, 9);
  sqcRYGate(q, 1.8501387244696612, 10);
  sqcRYGate(q, 2.4389900945684553, 11);
  sqcRYGate(q, -1.0740214193175603, 12);
  sqcRYGate(q, -2.3093122902739824, 13);
  sqcRYGate(q, 2.0497680883263616, 14);
  sqcRYGate(q, 0.3774466552663446, 15);

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
