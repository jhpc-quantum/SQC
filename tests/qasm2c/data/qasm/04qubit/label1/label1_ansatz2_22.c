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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 1.026035567946578, 0);
  sqcRZGate(q, 2.7024287658971575, 0);
  sqcRYGate(q, 1.2655848486170347, 1);
  sqcRZGate(q, -0.07347104329279741, 1);
  sqcRYGate(q, -1.2468529492443645, 2);
  sqcRZGate(q, 0.04601011741258709, 2);
  sqcRYGate(q, 0.1354915414114002, 3);
  sqcRZGate(q, 1.5434379522269854, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.12582166334920952, 0);
  sqcRZGate(q, 2.4924981197101252, 0);
  sqcRYGate(q, 1.147583725693698, 1);
  sqcRZGate(q, 1.3868766314330117, 1);
  sqcRYGate(q, 0.4209656630875003, 2);
  sqcRZGate(q, 0.4926515063927868, 2);
  sqcRYGate(q, -0.25899713251840556, 3);
  sqcRZGate(q, -3.102033154751926, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.5442849422400542, 0);
  sqcRZGate(q, -2.9388822199107163, 0);
  sqcRYGate(q, -2.552116608041113, 1);
  sqcRZGate(q, -1.7512701527164876, 1);
  sqcRYGate(q, -2.078380947974198, 2);
  sqcRZGate(q, 1.2618409113243674, 2);
  sqcRYGate(q, -1.8385951742359807, 3);
  sqcRZGate(q, -0.18990735055522653, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.2104206748160986, 0);
  sqcRZGate(q, -2.5879788425843406, 0);
  sqcRYGate(q, -2.9652991047297856, 1);
  sqcRZGate(q, 1.1108797794241374, 1);
  sqcRYGate(q, -1.3986883552079143, 2);
  sqcRZGate(q, -1.29700512511271, 2);
  sqcRYGate(q, -0.7257496703563091, 3);
  sqcRZGate(q, 1.7050272409031546, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.10100013010151579, 0);
  sqcRZGate(q, -0.13182469507336234, 0);
  sqcRYGate(q, -3.0020868230698317, 1);
  sqcRZGate(q, -2.2887665952369334, 1);
  sqcRYGate(q, -2.326192045296099, 2);
  sqcRZGate(q, 2.0281244607439985, 2);
  sqcRYGate(q, 3.075146991165175, 3);
  sqcRZGate(q, -2.3798260802823394, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.9111273355542933, 0);
  sqcRZGate(q, -1.733637053220911, 0);
  sqcRYGate(q, -0.29971697841892375, 1);
  sqcRZGate(q, 0.42482157603433635, 1);
  sqcRYGate(q, 0.2254009265145216, 2);
  sqcRZGate(q, -2.4744197643203028, 2);
  sqcRYGate(q, -0.30034352449186086, 3);
  sqcRZGate(q, 0.523517111213093, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.395783411103835, 0);
  sqcRZGate(q, 2.9101625051784845, 0);
  sqcRYGate(q, -2.9011148436343555, 1);
  sqcRZGate(q, -2.6599227397114276, 1);
  sqcRYGate(q, -1.450590606935206, 2);
  sqcRZGate(q, 0.1576789472618612, 2);
  sqcRYGate(q, -1.5816602933974198, 3);
  sqcRZGate(q, -2.5943424712718044, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.518324064773239, 0);
  sqcRZGate(q, 1.6854116831157677, 0);
  sqcRYGate(q, 1.2660685046384756, 1);
  sqcRZGate(q, 1.7036384415721946, 1);
  sqcRYGate(q, -1.3750514783594634, 2);
  sqcRZGate(q, -2.794040442543369, 2);
  sqcRYGate(q, 0.9459176178261571, 3);
  sqcRZGate(q, -2.2464080642470847, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.371583085097437, 0);
  sqcRZGate(q, 0.25169061149552363, 0);
  sqcRYGate(q, -3.0073907645589424, 1);
  sqcRZGate(q, 1.922120439926089, 1);
  sqcRYGate(q, 0.5168473420745594, 2);
  sqcRZGate(q, -2.9810123551135823, 2);
  sqcRYGate(q, 2.3064588302037325, 3);
  sqcRZGate(q, -2.3973237186801155, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8534241715800669, 0);
  sqcRZGate(q, -1.3786853656521503, 0);
  sqcRYGate(q, 0.02123231610111274, 1);
  sqcRZGate(q, -2.1316467306051514, 1);
  sqcRYGate(q, -2.0815165818445474, 2);
  sqcRZGate(q, 0.5011466856975245, 2);
  sqcRYGate(q, 1.001802236595089, 3);
  sqcRZGate(q, -1.9628884977962298, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4723385447365225, 0);
  sqcRZGate(q, 0.28812471753010843, 0);
  sqcRYGate(q, 2.3481260762531764, 1);
  sqcRZGate(q, 1.0269091347712476, 1);
  sqcRYGate(q, 0.6625232319461992, 2);
  sqcRZGate(q, 2.490523315370419, 2);
  sqcRYGate(q, -0.6651142211494214, 3);
  sqcRZGate(q, -0.9080644045127286, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.7526466949704178, 0);
  sqcRZGate(q, -2.6347055227604907, 0);
  sqcRYGate(q, -1.2629412770233155, 1);
  sqcRZGate(q, -2.0162964889463946, 1);
  sqcRYGate(q, -3.141361160046427, 2);
  sqcRZGate(q, -1.9897432503371801, 2);
  sqcRYGate(q, -2.821465594553321, 3);
  sqcRZGate(q, 0.7118240398916816, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.3457196864737626, 0);
  sqcRZGate(q, 2.207747884446764, 0);
  sqcRYGate(q, -0.6403780117749197, 1);
  sqcRZGate(q, 0.7401440481053926, 1);
  sqcRYGate(q, -0.29240419761594405, 2);
  sqcRZGate(q, 1.2285608501422831, 2);
  sqcRYGate(q, -2.2150566303212527, 3);
  sqcRZGate(q, 0.43561126490132546, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.8148603092167552, 0);
  sqcRZGate(q, 0.041281047779448535, 0);
  sqcRYGate(q, 0.8064836012802497, 1);
  sqcRZGate(q, 1.6086152599358927, 1);
  sqcRYGate(q, 3.058133496173244, 2);
  sqcRZGate(q, 0.98473249691836, 2);
  sqcRYGate(q, -2.40692951869151, 3);
  sqcRZGate(q, 0.5016537645189221, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.5679125479530338, 0);
  sqcRZGate(q, -0.5425670099765015, 0);
  sqcRYGate(q, 1.327767287733768, 1);
  sqcRZGate(q, 2.0555798140321437, 1);
  sqcRYGate(q, 1.887827100406119, 2);
  sqcRZGate(q, -1.2579288296115454, 2);
  sqcRYGate(q, 2.5799153172914773, 3);
  sqcRZGate(q, 1.4738015026675126, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.5654594278696097, 0);
  sqcRZGate(q, 2.9872397036730796, 0);
  sqcRYGate(q, 0.7984867964308461, 1);
  sqcRZGate(q, 3.0767431473738207, 1);
  sqcRYGate(q, -1.0452415375603126, 2);
  sqcRZGate(q, 2.571991797723252, 2);
  sqcRYGate(q, -2.3848960884094312, 3);
  sqcRZGate(q, -3.0611083389711125, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.8212406114700546, 0);
  sqcRZGate(q, 1.6913031498402544, 0);
  sqcRYGate(q, -1.238301376005209, 1);
  sqcRZGate(q, -0.9647325738794866, 1);
  sqcRYGate(q, -0.21697642787172086, 2);
  sqcRZGate(q, 0.7153545583925592, 2);
  sqcRYGate(q, -3.013400850601157, 3);
  sqcRZGate(q, 1.3035403306713045, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.634198221325711, 0);
  sqcRZGate(q, 2.992753155783333, 0);
  sqcRYGate(q, 0.5007902271744615, 1);
  sqcRZGate(q, -1.9524918139832907, 1);
  sqcRYGate(q, -0.8476492195625775, 2);
  sqcRZGate(q, 2.97126716530161, 2);
  sqcRYGate(q, -2.0986359619663384, 3);
  sqcRZGate(q, -1.865702373253284, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.1665830243644821, 0);
  sqcRZGate(q, -0.6788399964276146, 0);
  sqcRYGate(q, -1.7432505315011964, 1);
  sqcRZGate(q, 1.3889868720268943, 1);
  sqcRYGate(q, -2.0246324620833627, 2);
  sqcRZGate(q, 2.2169062213090696, 2);
  sqcRYGate(q, 0.8409576128885304, 3);
  sqcRZGate(q, 3.014393963960168, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.9455576092880326, 0);
  sqcRZGate(q, -2.0640371060134592, 0);
  sqcRYGate(q, -1.3820492046245232, 1);
  sqcRZGate(q, 0.140204532921279, 1);
  sqcRYGate(q, -0.36275940754432406, 2);
  sqcRZGate(q, -1.9049614552434841, 2);
  sqcRYGate(q, 2.945176025791871, 3);
  sqcRZGate(q, 2.4560018303571804, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.812215300239114, 0);
  sqcRZGate(q, 3.0231782733138504, 0);
  sqcRYGate(q, -2.9869977875311036, 1);
  sqcRZGate(q, -3.0262901551407624, 1);
  sqcRYGate(q, 2.989808064651406, 2);
  sqcRZGate(q, -2.555201131698383, 2);
  sqcRYGate(q, -1.0396753155492933, 3);
  sqcRZGate(q, 3.095746691192259, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.00311884990357, 0);
  sqcRZGate(q, -1.6709792945549982, 0);
  sqcRYGate(q, 0.3058154166111864, 1);
  sqcRZGate(q, -1.9045625823845225, 1);
  sqcRYGate(q, -1.7414924861163827, 2);
  sqcRZGate(q, 2.4736314146337284, 2);
  sqcRYGate(q, 2.5852791771279793, 3);
  sqcRZGate(q, 2.263406289769793, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.8759007340607456, 0);
  sqcRZGate(q, -1.7940365140380736, 0);
  sqcRYGate(q, -0.9808401886666074, 1);
  sqcRZGate(q, 1.8687325875839356, 1);
  sqcRYGate(q, -0.9663849818244366, 2);
  sqcRZGate(q, -0.029998685731391736, 2);
  sqcRYGate(q, 0.17716341922048606, 3);
  sqcRZGate(q, -2.8401199710489924, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.8880702670687661, 0);
  sqcRZGate(q, 2.414979625839152, 0);
  sqcRYGate(q, -1.1980173234191955, 1);
  sqcRZGate(q, 1.8495347076884219, 1);
  sqcRYGate(q, 1.3122900834369926, 2);
  sqcRZGate(q, 0.6671230069235071, 2);
  sqcRYGate(q, 1.2845889074292391, 3);
  sqcRZGate(q, 2.446267018964376, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.7013018234890236, 0);
  sqcRZGate(q, -0.22270474085382888, 0);
  sqcRYGate(q, 1.7721063476746304, 1);
  sqcRZGate(q, 1.0187455584431877, 1);
  sqcRYGate(q, -2.588924416748843, 2);
  sqcRZGate(q, 0.3025958135924247, 2);
  sqcRYGate(q, 2.0659102073307203, 3);
  sqcRZGate(q, 1.911555795726964, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.02574259143817503, 0);
  sqcRZGate(q, 1.2941961425920399, 0);
  sqcRYGate(q, -2.4681765723975233, 1);
  sqcRZGate(q, -0.9695149493355683, 1);
  sqcRYGate(q, 0.08512418674609117, 2);
  sqcRZGate(q, 3.0910979049613068, 2);
  sqcRYGate(q, -2.0983504732654406, 3);
  sqcRZGate(q, -2.2653209293909597, 3);

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
