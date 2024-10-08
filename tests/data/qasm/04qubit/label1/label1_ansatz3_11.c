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

  sqcRYGate(q, 1.4274777943339712, 0);
  sqcRZGate(q, 1.9337639954524424, 0);
  sqcRYGate(q, 1.0280480262442313, 1);
  sqcRZGate(q, 2.1168470538426547, 1);
  sqcRYGate(q, 2.9789998473966244, 2);
  sqcRZGate(q, 1.1227693064009765, 2);
  sqcRYGate(q, -0.8085646427527884, 3);
  sqcRZGate(q, 1.1690450131165386, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.3613073293224897, 0);
  sqcRZGate(q, 1.9030799542484704, 0);
  sqcRYGate(q, 2.5695075393253983, 1);
  sqcRZGate(q, 2.082071375522906, 1);
  sqcRYGate(q, 2.369800708270555, 2);
  sqcRZGate(q, -0.09636907282239715, 2);
  sqcRYGate(q, 3.1134809955437865, 3);
  sqcRZGate(q, -2.5938526010507332, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.5857846628897683, 0);
  sqcRZGate(q, 2.8916438944416827, 0);
  sqcRYGate(q, 2.4700875313761483, 1);
  sqcRZGate(q, -2.606136237645991, 1);
  sqcRYGate(q, 0.027563452531630617, 2);
  sqcRZGate(q, 1.1077403330718927, 2);
  sqcRYGate(q, -1.4360751975259394, 3);
  sqcRZGate(q, 2.227759827536964, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.13895805527246424, 0);
  sqcRZGate(q, -2.9848668050255807, 0);
  sqcRYGate(q, -0.8313805267854645, 1);
  sqcRZGate(q, 1.2837151565695146, 1);
  sqcRYGate(q, 0.23974776684904953, 2);
  sqcRZGate(q, -1.5537516499444128, 2);
  sqcRYGate(q, -2.809000181266787, 3);
  sqcRZGate(q, -0.08383729605312654, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.9423872612864255, 0);
  sqcRZGate(q, 0.685401247586625, 0);
  sqcRYGate(q, 0.05310601262652348, 1);
  sqcRZGate(q, -2.353281147129232, 1);
  sqcRYGate(q, 0.22171264093401888, 2);
  sqcRZGate(q, -0.1432301525638513, 2);
  sqcRYGate(q, -2.1392166957392265, 3);
  sqcRZGate(q, 3.051670347091882, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6384414180474614, 0);
  sqcRZGate(q, -1.1259913840313693, 0);
  sqcRYGate(q, -1.7335971156781183, 1);
  sqcRZGate(q, -1.5360684140156204, 1);
  sqcRYGate(q, -2.200992506681455, 2);
  sqcRZGate(q, -0.330164924970755, 2);
  sqcRYGate(q, 2.558127396268329, 3);
  sqcRZGate(q, 2.709606699117, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.6165956036647815, 0);
  sqcRZGate(q, 0.7319341863988753, 0);
  sqcRYGate(q, 1.0172313718608326, 1);
  sqcRZGate(q, -3.0892272632896063, 1);
  sqcRYGate(q, -1.7835591368736663, 2);
  sqcRZGate(q, -0.7706271450792526, 2);
  sqcRYGate(q, 1.6656467184625343, 3);
  sqcRZGate(q, -2.9755318154402137, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.5127122569510778, 0);
  sqcRZGate(q, -2.7540917337634454, 0);
  sqcRYGate(q, 3.126968480063085, 1);
  sqcRZGate(q, -0.8285049497201266, 1);
  sqcRYGate(q, 1.8555398990364633, 2);
  sqcRZGate(q, 1.4513970943039487, 2);
  sqcRYGate(q, 1.1887763448129967, 3);
  sqcRZGate(q, -1.5235673578916753, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.3144953495707794, 0);
  sqcRZGate(q, 2.710787762629854, 0);
  sqcRYGate(q, -2.893968433872338, 1);
  sqcRZGate(q, -2.925439187955149, 1);
  sqcRYGate(q, 2.0286945227806945, 2);
  sqcRZGate(q, -0.42660018887446755, 2);
  sqcRYGate(q, 1.615350968478017, 3);
  sqcRZGate(q, -1.1814142381302135, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8764078600284304, 0);
  sqcRZGate(q, 0.36078475841387575, 0);
  sqcRYGate(q, -2.8880516035079804, 1);
  sqcRZGate(q, 1.5730236672237234, 1);
  sqcRYGate(q, 1.5466558338200598, 2);
  sqcRZGate(q, 0.8955780958535806, 2);
  sqcRYGate(q, 0.29998021386047213, 3);
  sqcRZGate(q, -0.3645534412405071, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5050059127469632, 0);
  sqcRZGate(q, 1.5008816386617776, 0);
  sqcRYGate(q, 1.613931201656714, 1);
  sqcRZGate(q, -2.3662810691707064, 1);
  sqcRYGate(q, 1.4790775196813466, 2);
  sqcRZGate(q, 1.9567942708832131, 2);
  sqcRYGate(q, -1.7429720369886548, 3);
  sqcRZGate(q, -2.201732763173684, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.10664272465950297, 0);
  sqcRZGate(q, 2.894870136592389, 0);
  sqcRYGate(q, 0.55401277494503, 1);
  sqcRZGate(q, 0.16498119986783297, 1);
  sqcRYGate(q, 0.3502834508828574, 2);
  sqcRZGate(q, 0.5664121698772934, 2);
  sqcRYGate(q, 2.453118339334603, 3);
  sqcRZGate(q, 1.6646003210784226, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.961529455103265, 0);
  sqcRZGate(q, -2.385695553205647, 0);
  sqcRYGate(q, 2.148287278728901, 1);
  sqcRZGate(q, -0.38960466878307354, 1);
  sqcRYGate(q, 2.7277350973896293, 2);
  sqcRZGate(q, 0.7830360275605458, 2);
  sqcRYGate(q, 0.5009896671465786, 3);
  sqcRZGate(q, -2.0031623458505567, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8527324957829083, 0);
  sqcRZGate(q, 0.751635876080238, 0);
  sqcRYGate(q, -1.9205124215969278, 1);
  sqcRZGate(q, -2.136445646988159, 1);
  sqcRYGate(q, 1.206981494660599, 2);
  sqcRZGate(q, 0.7267726429944894, 2);
  sqcRYGate(q, -0.07112895495216609, 3);
  sqcRZGate(q, -2.135383776080892, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8848640921035358, 0);
  sqcRZGate(q, 0.8101312328768425, 0);
  sqcRYGate(q, -0.9695121370423483, 1);
  sqcRZGate(q, 3.052265762445009, 1);
  sqcRYGate(q, -0.8937197197306626, 2);
  sqcRZGate(q, 2.706781991747675, 2);
  sqcRYGate(q, 2.586965878165551, 3);
  sqcRZGate(q, 3.133400219882338, 3);

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
