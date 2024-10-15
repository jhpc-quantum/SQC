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

  sqcRYGate(q, 0.7051796202414902, 0);
  sqcRZGate(q, -3.00545235648517, 0);
  sqcRYGate(q, 2.2932054101398074, 1);
  sqcRZGate(q, -2.8862533274213114, 1);
  sqcRYGate(q, 0.25359293386200843, 2);
  sqcRZGate(q, 0.41213790163560304, 2);
  sqcRYGate(q, 1.7416580653408642, 3);
  sqcRZGate(q, -1.5059345362200307, 3);
  sqcRYGate(q, -2.142293472999408, 4);
  sqcRZGate(q, 1.913728707060219, 4);
  sqcRYGate(q, 0.6493919146746027, 5);
  sqcRZGate(q, -2.12831300453288, 5);
  sqcRYGate(q, 0.31888400109402704, 6);
  sqcRZGate(q, -0.4447982402295729, 6);
  sqcRYGate(q, 2.7787409224411777, 7);
  sqcRZGate(q, 2.9745575860605835, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.081895565484622, 0);
  sqcRZGate(q, -1.2142579722967903, 0);
  sqcRYGate(q, -2.2113494912841842, 1);
  sqcRZGate(q, 1.0761177997143183, 1);
  sqcRYGate(q, -1.609794003404072, 2);
  sqcRZGate(q, -2.224741339258039, 2);
  sqcRYGate(q, -0.8135869054223965, 3);
  sqcRZGate(q, -0.9051897244739112, 3);
  sqcRYGate(q, -1.2289884549160996, 4);
  sqcRZGate(q, 0.0002584418366176066, 4);
  sqcRYGate(q, 1.2893450623328677, 5);
  sqcRZGate(q, 1.3284245417577358, 5);
  sqcRYGate(q, 0.6424603181777432, 6);
  sqcRZGate(q, -2.150625678582095, 6);
  sqcRYGate(q, 2.1224207124424623, 7);
  sqcRZGate(q, -1.4300097207062261, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.3688991352890885, 0);
  sqcRZGate(q, 0.8232694157188424, 0);
  sqcRYGate(q, 2.748540065609554, 1);
  sqcRZGate(q, 2.9028755915109157, 1);
  sqcRYGate(q, 1.4851943615824301, 2);
  sqcRZGate(q, 2.548489068933475, 2);
  sqcRYGate(q, -2.9132534518820377, 3);
  sqcRZGate(q, 0.15391952661321062, 3);
  sqcRYGate(q, -1.8565990753672406, 4);
  sqcRZGate(q, 1.8141871630785322, 4);
  sqcRYGate(q, 2.023293329268504, 5);
  sqcRZGate(q, -1.302573016682838, 5);
  sqcRYGate(q, -2.314162595282565, 6);
  sqcRZGate(q, 1.0288556762933325, 6);
  sqcRYGate(q, 2.425065058646584, 7);
  sqcRZGate(q, -0.49507713621040317, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.0123752309008727, 0);
  sqcRZGate(q, -0.5709281281731923, 0);
  sqcRYGate(q, 0.8713554961673138, 1);
  sqcRZGate(q, 1.7657941728307214, 1);
  sqcRYGate(q, 0.22272627215674756, 2);
  sqcRZGate(q, 3.1232984434117688, 2);
  sqcRYGate(q, -0.7882275341168015, 3);
  sqcRZGate(q, 2.171268653430461, 3);
  sqcRYGate(q, 2.559732332763557, 4);
  sqcRZGate(q, -1.8700484173995067, 4);
  sqcRYGate(q, 0.9330852463534375, 5);
  sqcRZGate(q, -0.9006079774552727, 5);
  sqcRYGate(q, -2.1043013847184415, 6);
  sqcRZGate(q, 2.72951183147518, 6);
  sqcRYGate(q, -2.745950779751518, 7);
  sqcRZGate(q, -0.5273343388486976, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.6252056140209161, 0);
  sqcRZGate(q, 2.1469686137342237, 0);
  sqcRYGate(q, 2.1285447931161063, 1);
  sqcRZGate(q, -1.9812799268655152, 1);
  sqcRYGate(q, 1.7169590646584005, 2);
  sqcRZGate(q, -2.577610383728259, 2);
  sqcRYGate(q, -2.091260458943345, 3);
  sqcRZGate(q, 2.135083027669884, 3);
  sqcRYGate(q, -1.4507414061987154, 4);
  sqcRZGate(q, -1.8898782071363662, 4);
  sqcRYGate(q, 1.9742825903447832, 5);
  sqcRZGate(q, 2.3473641819045574, 5);
  sqcRYGate(q, -3.068242801480811, 6);
  sqcRZGate(q, -0.4648214370227392, 6);
  sqcRYGate(q, -0.17062609171335286, 7);
  sqcRZGate(q, 1.3020745401475349, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.7231543934094552, 0);
  sqcRZGate(q, -0.5286092269487302, 0);
  sqcRYGate(q, 0.6665638594900728, 1);
  sqcRZGate(q, -2.026105134448409, 1);
  sqcRYGate(q, 2.168865970930247, 2);
  sqcRZGate(q, -0.9545652294521003, 2);
  sqcRYGate(q, -1.1012240648362686, 3);
  sqcRZGate(q, 2.7301084197668875, 3);
  sqcRYGate(q, 0.8233126639612601, 4);
  sqcRZGate(q, -1.9734164519402055, 4);
  sqcRYGate(q, -2.496626194769275, 5);
  sqcRZGate(q, 2.494096244858128, 5);
  sqcRYGate(q, 1.6889466549690442, 6);
  sqcRZGate(q, 0.11801682751430091, 6);
  sqcRYGate(q, -1.7695907328190357, 7);
  sqcRZGate(q, 1.057191109049021, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.26597565513086063, 0);
  sqcRZGate(q, -0.22175152746267335, 0);
  sqcRYGate(q, 2.2983613296733383, 1);
  sqcRZGate(q, 2.6708447355276923, 1);
  sqcRYGate(q, 2.701409265683395, 2);
  sqcRZGate(q, -0.02592372277710364, 2);
  sqcRYGate(q, 2.790052196420864, 3);
  sqcRZGate(q, -0.07664451724968835, 3);
  sqcRYGate(q, 0.37504165076230805, 4);
  sqcRZGate(q, 0.14467342802178432, 4);
  sqcRYGate(q, -2.531067598773481, 5);
  sqcRZGate(q, -2.8316252033884335, 5);
  sqcRYGate(q, -1.4512235972352032, 6);
  sqcRZGate(q, -1.4091050601544968, 6);
  sqcRYGate(q, -1.2098746252308668, 7);
  sqcRZGate(q, 2.3569845012200066, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.512865504254312, 0);
  sqcRZGate(q, -0.948456692674524, 0);
  sqcRYGate(q, 2.452104569052309, 1);
  sqcRZGate(q, -2.708295651704375, 1);
  sqcRYGate(q, 0.4945090198009091, 2);
  sqcRZGate(q, 1.6972048815596723, 2);
  sqcRYGate(q, 1.3978979563978227, 3);
  sqcRZGate(q, 2.625457021000678, 3);
  sqcRYGate(q, 1.118562784061712, 4);
  sqcRZGate(q, 2.41915999453277, 4);
  sqcRYGate(q, 2.8493784372420556, 5);
  sqcRZGate(q, 0.8095473092913034, 5);
  sqcRYGate(q, -0.9339924660928308, 6);
  sqcRZGate(q, 1.8372025186340106, 6);
  sqcRYGate(q, -1.7516245659284901, 7);
  sqcRZGate(q, -2.3558110146626903, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.4847740359330537, 0);
  sqcRZGate(q, -0.38692048772016513, 0);
  sqcRYGate(q, 0.9231535004211491, 1);
  sqcRZGate(q, -3.134305668124185, 1);
  sqcRYGate(q, -2.697611637318737, 2);
  sqcRZGate(q, -1.2425355294480598, 2);
  sqcRYGate(q, -1.5712766797672812, 3);
  sqcRZGate(q, 1.9408979855624302, 3);
  sqcRYGate(q, -1.2378722250271432, 4);
  sqcRZGate(q, 0.11174770449457155, 4);
  sqcRYGate(q, -0.36564764725770693, 5);
  sqcRZGate(q, -0.4190362936949515, 5);
  sqcRYGate(q, -2.0436816863462126, 6);
  sqcRZGate(q, -2.0074823983902528, 6);
  sqcRYGate(q, -0.4503345737121961, 7);
  sqcRZGate(q, 2.444658636911143, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.1135222329028096, 0);
  sqcRZGate(q, 0.68416395450393, 0);
  sqcRYGate(q, 2.1115631092876077, 1);
  sqcRZGate(q, -1.9936103137911347, 1);
  sqcRYGate(q, 2.0431944164027867, 2);
  sqcRZGate(q, -1.7308128105485483, 2);
  sqcRYGate(q, -0.8939748414202908, 3);
  sqcRZGate(q, 1.1375394158078895, 3);
  sqcRYGate(q, -1.6446166992643718, 4);
  sqcRZGate(q, -1.0420414793278252, 4);
  sqcRYGate(q, -0.2994009201664167, 5);
  sqcRZGate(q, -2.3138677324163375, 5);
  sqcRYGate(q, -1.8551197578336946, 6);
  sqcRZGate(q, 1.4615164130877405, 6);
  sqcRYGate(q, -0.4152718853911681, 7);
  sqcRZGate(q, 1.705992313144236, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.694983549702941, 0);
  sqcRZGate(q, -0.5798863584645968, 0);
  sqcRYGate(q, 1.4228436331792682, 1);
  sqcRZGate(q, 2.1674784663441153, 1);
  sqcRYGate(q, -0.06279269096156082, 2);
  sqcRZGate(q, 0.14065454036853223, 2);
  sqcRYGate(q, -2.1004901203733377, 3);
  sqcRZGate(q, -3.1097094104830063, 3);
  sqcRYGate(q, 2.286190441913168, 4);
  sqcRZGate(q, 1.0560910064386564, 4);
  sqcRYGate(q, 2.289089277864748, 5);
  sqcRZGate(q, -2.2357835657394896, 5);
  sqcRYGate(q, -0.6097850526388005, 6);
  sqcRZGate(q, -1.3363165047192478, 6);
  sqcRYGate(q, -2.8090128807340546, 7);
  sqcRZGate(q, -1.2602600824980321, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.2481174901771395, 0);
  sqcRZGate(q, 1.9112207445557141, 0);
  sqcRYGate(q, -0.5584093142696616, 1);
  sqcRZGate(q, -2.5535190166183783, 1);
  sqcRYGate(q, 1.3603763297232863, 2);
  sqcRZGate(q, 3.0188287309236266, 2);
  sqcRYGate(q, -1.4208261034741234, 3);
  sqcRZGate(q, 1.9607001100268784, 3);
  sqcRYGate(q, -1.7055724467180515, 4);
  sqcRZGate(q, 2.87639940651318, 4);
  sqcRYGate(q, -1.2640034027156697, 5);
  sqcRZGate(q, -1.1979068611028754, 5);
  sqcRYGate(q, -0.827461916212175, 6);
  sqcRZGate(q, -1.0367580334625617, 6);
  sqcRYGate(q, -0.9060080294097332, 7);
  sqcRZGate(q, 0.3341265409668983, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.2638992698705054, 0);
  sqcRZGate(q, -0.9095849389225218, 0);
  sqcRYGate(q, -1.7806324666470195, 1);
  sqcRZGate(q, -2.9242931955635854, 1);
  sqcRYGate(q, -2.3533309056731575, 2);
  sqcRZGate(q, -0.5582925337099445, 2);
  sqcRYGate(q, 1.6201321955458026, 3);
  sqcRZGate(q, 0.4234815531386769, 3);
  sqcRYGate(q, -2.4922344417347744, 4);
  sqcRZGate(q, -0.9241835448413065, 4);
  sqcRYGate(q, 1.5257386890054345, 5);
  sqcRZGate(q, 0.41767093114563014, 5);
  sqcRYGate(q, 2.0864540012644355, 6);
  sqcRZGate(q, -0.7282009455357913, 6);
  sqcRYGate(q, 0.441513977616963, 7);
  sqcRZGate(q, -0.7326984190431307, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.7935504442814136, 0);
  sqcRZGate(q, -2.055186916554022, 0);
  sqcRYGate(q, -1.9969171508712802, 1);
  sqcRZGate(q, 1.9473319139077077, 1);
  sqcRYGate(q, 2.794937331564259, 2);
  sqcRZGate(q, -1.661470348486773, 2);
  sqcRYGate(q, 1.2557490936633295, 3);
  sqcRZGate(q, -0.6139394465080867, 3);
  sqcRYGate(q, -1.691598824817662, 4);
  sqcRZGate(q, -0.8264541329479282, 4);
  sqcRYGate(q, -2.438175598400249, 5);
  sqcRZGate(q, 1.612519692417699, 5);
  sqcRYGate(q, 2.4900560166310326, 6);
  sqcRZGate(q, -0.6887042735296399, 6);
  sqcRYGate(q, -2.909201605924218, 7);
  sqcRZGate(q, 0.3035553971067584, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.5838826113177377, 0);
  sqcRZGate(q, -2.2882615233662214, 0);
  sqcRYGate(q, -0.24301798798895669, 1);
  sqcRZGate(q, 0.30763838912840147, 1);
  sqcRYGate(q, -0.5712158547854435, 2);
  sqcRZGate(q, 2.07448661165753, 2);
  sqcRYGate(q, 0.9505477327243684, 3);
  sqcRZGate(q, -0.21634392014907938, 3);
  sqcRYGate(q, -0.9585640653122844, 4);
  sqcRZGate(q, -2.339548098773136, 4);
  sqcRYGate(q, 0.6005861275130675, 5);
  sqcRZGate(q, 2.1130228784673597, 5);
  sqcRYGate(q, 1.1740048278505935, 6);
  sqcRZGate(q, 1.6846882768442704, 6);
  sqcRYGate(q, 2.556185003064927, 7);
  sqcRZGate(q, 2.836426385972418, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.7263687584627623, 0);
  sqcRZGate(q, 0.06062944866639075, 0);
  sqcRYGate(q, -3.049366064796278, 1);
  sqcRZGate(q, -0.46834602381558166, 1);
  sqcRYGate(q, 1.0315601167657429, 2);
  sqcRZGate(q, 1.390195072442203, 2);
  sqcRYGate(q, -1.0062007957966541, 3);
  sqcRZGate(q, 1.6307448640331896, 3);
  sqcRYGate(q, 0.6765097132495778, 4);
  sqcRZGate(q, -2.549739731820277, 4);
  sqcRYGate(q, -2.9991321520826633, 5);
  sqcRZGate(q, 1.7321661686573506, 5);
  sqcRYGate(q, -1.393739096686816, 6);
  sqcRZGate(q, -0.2617512857345119, 6);
  sqcRYGate(q, -2.9565806806444987, 7);
  sqcRZGate(q, 0.007995228827340385, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.8707953293694233, 0);
  sqcRZGate(q, -2.8670299578646676, 0);
  sqcRYGate(q, -0.4194116843651115, 1);
  sqcRZGate(q, 1.2124630577706785, 1);
  sqcRYGate(q, -1.0083394830954573, 2);
  sqcRZGate(q, 0.5826086634939861, 2);
  sqcRYGate(q, -2.9076191659951602, 3);
  sqcRZGate(q, 2.204828853178682, 3);
  sqcRYGate(q, -0.7451402995686829, 4);
  sqcRZGate(q, -1.644645762196748, 4);
  sqcRYGate(q, -1.4591425169697574, 5);
  sqcRZGate(q, 2.355677650869598, 5);
  sqcRYGate(q, -0.39901730373587796, 6);
  sqcRZGate(q, 2.6911341615023896, 6);
  sqcRYGate(q, 2.5046578162114077, 7);
  sqcRZGate(q, -1.5633826440521261, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.9062081018729721, 0);
  sqcRZGate(q, 2.562192120714956, 0);
  sqcRYGate(q, -1.0975982487924392, 1);
  sqcRZGate(q, 1.6103128401171487, 1);
  sqcRYGate(q, -1.3728196807643822, 2);
  sqcRZGate(q, 0.5991933527690348, 2);
  sqcRYGate(q, -2.999279487602106, 3);
  sqcRZGate(q, 2.287955346499727, 3);
  sqcRYGate(q, -0.3644030138373928, 4);
  sqcRZGate(q, 1.7103457198063472, 4);
  sqcRYGate(q, -2.348055038687152, 5);
  sqcRZGate(q, -0.16328209424595116, 5);
  sqcRYGate(q, 2.1557901837631905, 6);
  sqcRZGate(q, -0.3350964000870613, 6);
  sqcRYGate(q, 1.150872185598948, 7);
  sqcRZGate(q, 2.7227440140917145, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.6468485401383228, 0);
  sqcRZGate(q, -0.7434106301388251, 0);
  sqcRYGate(q, -0.10300731075848966, 1);
  sqcRZGate(q, -0.8393332892293219, 1);
  sqcRYGate(q, -2.971464980381726, 2);
  sqcRZGate(q, -0.3238627737665307, 2);
  sqcRYGate(q, 1.8971293067234993, 3);
  sqcRZGate(q, 2.105924821494151, 3);
  sqcRYGate(q, -0.12798315437202223, 4);
  sqcRZGate(q, -0.6252242565905866, 4);
  sqcRYGate(q, -1.4560481408305854, 5);
  sqcRZGate(q, 1.24909559536048, 5);
  sqcRYGate(q, -0.272575959021379, 6);
  sqcRZGate(q, 3.0638785828184454, 6);
  sqcRYGate(q, -0.4741652682702169, 7);
  sqcRZGate(q, 1.2703796872610678, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.8925905670430745, 0);
  sqcRZGate(q, -2.660035271379175, 0);
  sqcRYGate(q, -1.1263012960607721, 1);
  sqcRZGate(q, 1.2075133913791882, 1);
  sqcRYGate(q, -2.255524416086301, 2);
  sqcRZGate(q, 0.4834329929659212, 2);
  sqcRYGate(q, 2.3482830405614745, 3);
  sqcRZGate(q, -1.916024954704178, 3);
  sqcRYGate(q, 0.2175373886141827, 4);
  sqcRZGate(q, -2.4569436514240377, 4);
  sqcRYGate(q, 1.85327419160901, 5);
  sqcRZGate(q, -1.1531264993126815, 5);
  sqcRYGate(q, -2.900277428740206, 6);
  sqcRZGate(q, -1.1664046242407196, 6);
  sqcRYGate(q, -0.8914492068609574, 7);
  sqcRZGate(q, 1.4162116160410643, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.4971124701014391, 0);
  sqcRZGate(q, -0.36337229958887407, 0);
  sqcRYGate(q, 2.751146365187879, 1);
  sqcRZGate(q, 1.854719654261194, 1);
  sqcRYGate(q, -1.1594438595557919, 2);
  sqcRZGate(q, -1.3372281008067612, 2);
  sqcRYGate(q, 0.42215965922142296, 3);
  sqcRZGate(q, -1.6360613781304452, 3);
  sqcRYGate(q, -1.73792618645052, 4);
  sqcRZGate(q, -0.19887704800260514, 4);
  sqcRYGate(q, 2.0980591432384434, 5);
  sqcRZGate(q, 1.6283786446361361, 5);
  sqcRYGate(q, -1.7152269328660452, 6);
  sqcRZGate(q, 2.752916884001248, 6);
  sqcRYGate(q, -1.0211721623883012, 7);
  sqcRZGate(q, -2.0656364858583203, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.5035788163676644, 0);
  sqcRZGate(q, 2.7732698802079083, 0);
  sqcRYGate(q, 1.6908706906104247, 1);
  sqcRZGate(q, -2.0507887818345276, 1);
  sqcRYGate(q, -1.8082258392332564, 2);
  sqcRZGate(q, 0.9210233729908728, 2);
  sqcRYGate(q, -0.8079364933211891, 3);
  sqcRZGate(q, 0.8070762371723724, 3);
  sqcRYGate(q, 1.6474146701984267, 4);
  sqcRZGate(q, 0.25707989689595306, 4);
  sqcRYGate(q, 1.585642032521023, 5);
  sqcRZGate(q, 2.8510065352715235, 5);
  sqcRYGate(q, 1.3040141977085047, 6);
  sqcRZGate(q, -1.3486766952725253, 6);
  sqcRYGate(q, 0.7437833727581795, 7);
  sqcRZGate(q, 2.8723071093947157, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.9550555774509197, 0);
  sqcRZGate(q, 2.487144107675555, 0);
  sqcRYGate(q, 1.5904376239113702, 1);
  sqcRZGate(q, -0.8299829012511344, 1);
  sqcRYGate(q, -2.176538139731565, 2);
  sqcRZGate(q, -2.223875171345171, 2);
  sqcRYGate(q, 1.2833916215119032, 3);
  sqcRZGate(q, -1.5465053319934823, 3);
  sqcRYGate(q, 1.2797361182873965, 4);
  sqcRZGate(q, 2.414843574864741, 4);
  sqcRYGate(q, -3.141558418434831, 5);
  sqcRZGate(q, 1.1084144125161308, 5);
  sqcRYGate(q, -1.3124965925796745, 6);
  sqcRZGate(q, -0.9903876188710974, 6);
  sqcRYGate(q, 1.3466456638879716, 7);
  sqcRZGate(q, 0.11691695445611572, 7);

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
