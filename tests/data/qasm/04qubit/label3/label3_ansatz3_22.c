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

  sqcRYGate(q, -2.1093902985473014, 0);
  sqcRZGate(q, 0.82585904367778, 0);
  sqcRYGate(q, -0.9242824725191979, 1);
  sqcRZGate(q, 1.4205325633905928, 1);
  sqcRYGate(q, -2.3989659911731467, 2);
  sqcRZGate(q, -1.9497319792847103, 2);
  sqcRYGate(q, 1.9936503905580019, 3);
  sqcRZGate(q, -1.517739363920923, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.0614997568516893, 0);
  sqcRZGate(q, -1.9429244713424714, 0);
  sqcRYGate(q, 1.2473927819999577, 1);
  sqcRZGate(q, -2.646888744374645, 1);
  sqcRYGate(q, -1.8799217379034858, 2);
  sqcRZGate(q, 1.5729439670386158, 2);
  sqcRYGate(q, -2.8878139816619592, 3);
  sqcRZGate(q, -1.9588127348947995, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8278967609032054, 0);
  sqcRZGate(q, -3.026074535176509, 0);
  sqcRYGate(q, -0.7096491756609593, 1);
  sqcRZGate(q, -0.9135413448907546, 1);
  sqcRYGate(q, -2.7519647129898424, 2);
  sqcRZGate(q, 0.8317468595889365, 2);
  sqcRYGate(q, 2.7710674873876386, 3);
  sqcRZGate(q, -0.703257200280154, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.1515292653274356, 0);
  sqcRZGate(q, -2.9822331621097367, 0);
  sqcRYGate(q, -1.8003107290182063, 1);
  sqcRZGate(q, -1.3975584956124951, 1);
  sqcRYGate(q, -2.3119017011328555, 2);
  sqcRZGate(q, -0.865671591399499, 2);
  sqcRYGate(q, -3.10251729056936, 3);
  sqcRZGate(q, -0.5689440004464648, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.0707420161875354, 0);
  sqcRZGate(q, -2.630405249238322, 0);
  sqcRYGate(q, -2.4959317159798218, 1);
  sqcRZGate(q, 2.5914225756301152, 1);
  sqcRYGate(q, 1.2741757719862763, 2);
  sqcRZGate(q, -2.676609874388042, 2);
  sqcRYGate(q, 0.8753587526099018, 3);
  sqcRZGate(q, 0.009297374906102718, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.886633246910214, 0);
  sqcRZGate(q, 1.7907955985855746, 0);
  sqcRYGate(q, 0.6154997982071376, 1);
  sqcRZGate(q, -0.11115441622169088, 1);
  sqcRYGate(q, -2.5827786176037626, 2);
  sqcRZGate(q, -1.7291688089609034, 2);
  sqcRYGate(q, -1.9918997676951626, 3);
  sqcRZGate(q, -1.4501484222651213, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.9388634244639138, 0);
  sqcRZGate(q, -2.841668149759593, 0);
  sqcRYGate(q, -2.7496559770229365, 1);
  sqcRZGate(q, 0.6698932858484579, 1);
  sqcRYGate(q, 2.9375467311321226, 2);
  sqcRZGate(q, -0.5417073306032708, 2);
  sqcRYGate(q, 1.5526588671832506, 3);
  sqcRZGate(q, -3.054184697222184, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.7737872656691986, 0);
  sqcRZGate(q, -1.6826481586780322, 0);
  sqcRYGate(q, 0.9999689759260341, 1);
  sqcRZGate(q, 0.6441329857420355, 1);
  sqcRYGate(q, 0.5306646840730734, 2);
  sqcRZGate(q, -1.4503378841574905, 2);
  sqcRYGate(q, 0.7223686200261802, 3);
  sqcRZGate(q, 1.223188777873168, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.910879337275189, 0);
  sqcRZGate(q, 2.8947167611821016, 0);
  sqcRYGate(q, -2.190871292219363, 1);
  sqcRZGate(q, -1.827960542313258, 1);
  sqcRYGate(q, -2.3147139986373526, 2);
  sqcRZGate(q, 2.8290659494067665, 2);
  sqcRYGate(q, 0.9266258420773558, 3);
  sqcRZGate(q, 1.404307178382118, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.0132818925768943, 0);
  sqcRZGate(q, -0.35066698616939806, 0);
  sqcRYGate(q, -1.979790548055752, 1);
  sqcRZGate(q, -2.5453685370926045, 1);
  sqcRYGate(q, -2.701939249857796, 2);
  sqcRZGate(q, 0.6799276321425527, 2);
  sqcRYGate(q, 0.48909059487113193, 3);
  sqcRZGate(q, 1.4832977687709796, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.1102508935227853, 0);
  sqcRZGate(q, -0.747631620969245, 0);
  sqcRYGate(q, 0.6861614157159169, 1);
  sqcRZGate(q, 0.5097938480013816, 1);
  sqcRYGate(q, -0.8910107298009955, 2);
  sqcRZGate(q, -3.084910081180546, 2);
  sqcRYGate(q, -2.7190576479945987, 3);
  sqcRZGate(q, 0.8937456272717401, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6519966745861214, 0);
  sqcRZGate(q, -1.4336904948332307, 0);
  sqcRYGate(q, 1.0674210364339765, 1);
  sqcRZGate(q, 3.1097368326795474, 1);
  sqcRYGate(q, 2.8543384744077085, 2);
  sqcRZGate(q, 2.454826381617288, 2);
  sqcRYGate(q, -2.1092144478833745, 3);
  sqcRZGate(q, -3.0277117728046843, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.0153993104504173, 0);
  sqcRZGate(q, 2.987103198765119, 0);
  sqcRYGate(q, -2.1674489495196645, 1);
  sqcRZGate(q, 2.1947549876673347, 1);
  sqcRYGate(q, 0.06119918473682251, 2);
  sqcRZGate(q, -2.437430924372354, 2);
  sqcRYGate(q, -2.189844670473653, 3);
  sqcRZGate(q, -3.020485986562026, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.3253892474380287, 0);
  sqcRZGate(q, -3.1384924056208856, 0);
  sqcRYGate(q, 1.9947694539277983, 1);
  sqcRZGate(q, 3.0171916055114325, 1);
  sqcRYGate(q, 0.19655256064751647, 2);
  sqcRZGate(q, -0.22080086855714867, 2);
  sqcRYGate(q, 1.5489722717655017, 3);
  sqcRZGate(q, -1.6812214117537883, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.2088895371939918, 0);
  sqcRZGate(q, 2.829714020366468, 0);
  sqcRYGate(q, 2.3568921292855465, 1);
  sqcRZGate(q, 1.0372436976985202, 1);
  sqcRYGate(q, 1.6302207212119777, 2);
  sqcRZGate(q, -0.686774207485727, 2);
  sqcRYGate(q, 0.7171047938249132, 3);
  sqcRZGate(q, 0.25682925887665325, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6465100096039232, 0);
  sqcRZGate(q, 0.36321513236086306, 0);
  sqcRYGate(q, 1.3020920908707887, 1);
  sqcRZGate(q, -3.0628643509508877, 1);
  sqcRYGate(q, 2.285981226406465, 2);
  sqcRZGate(q, -0.008410206299853229, 2);
  sqcRYGate(q, -1.7858506419539155, 3);
  sqcRZGate(q, 1.9232815659670166, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.3873914968574406, 0);
  sqcRZGate(q, -1.998004339598187, 0);
  sqcRYGate(q, -2.5740728242466906, 1);
  sqcRZGate(q, -0.5848032843886931, 1);
  sqcRYGate(q, 1.2028746280528688, 2);
  sqcRZGate(q, 3.0442452050357947, 2);
  sqcRYGate(q, 0.07604875042395479, 3);
  sqcRZGate(q, -1.4049474740895636, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.2041588082313766, 0);
  sqcRZGate(q, -1.4662095517166707, 0);
  sqcRYGate(q, -2.749200769572808, 1);
  sqcRZGate(q, 1.521590300570046, 1);
  sqcRYGate(q, 2.525072336194336, 2);
  sqcRZGate(q, -0.09009854173006193, 2);
  sqcRYGate(q, -0.10068114111994042, 3);
  sqcRZGate(q, -0.09205552056018007, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.4878914261217746, 0);
  sqcRZGate(q, -2.488479497646672, 0);
  sqcRYGate(q, -1.2858842942040702, 1);
  sqcRZGate(q, -1.7451975927225605, 1);
  sqcRYGate(q, -1.9280897693425523, 2);
  sqcRZGate(q, 1.312485034872514, 2);
  sqcRYGate(q, 2.310635262166569, 3);
  sqcRZGate(q, 0.1624168822164437, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.39070759847139674, 0);
  sqcRZGate(q, 1.4230549869889868, 0);
  sqcRYGate(q, -1.8293221659206302, 1);
  sqcRZGate(q, 1.4899551001416427, 1);
  sqcRYGate(q, -1.6452602316878195, 2);
  sqcRZGate(q, 1.4551882551230755, 2);
  sqcRYGate(q, -0.999567350541528, 3);
  sqcRZGate(q, 1.5331280200006232, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8963195737017493, 0);
  sqcRZGate(q, -3.131022762842354, 0);
  sqcRYGate(q, -2.8852162178093215, 1);
  sqcRZGate(q, 1.8669584378485782, 1);
  sqcRYGate(q, 0.3788042519543807, 2);
  sqcRZGate(q, -2.1514204037345834, 2);
  sqcRYGate(q, 1.448479539994959, 3);
  sqcRZGate(q, 0.6373582906657462, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6371395248705585, 0);
  sqcRZGate(q, 2.742378214818697, 0);
  sqcRYGate(q, 2.57046745464058, 1);
  sqcRZGate(q, 1.2406424247646888, 1);
  sqcRYGate(q, -0.1122607968326957, 2);
  sqcRZGate(q, -1.262142756698931, 2);
  sqcRYGate(q, 0.5146838720259062, 3);
  sqcRZGate(q, 1.7263817749253332, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8447900899026076, 0);
  sqcRZGate(q, 2.9360807874339465, 0);
  sqcRYGate(q, 1.531319839516806, 1);
  sqcRZGate(q, 1.7764311362196734, 1);
  sqcRYGate(q, 0.6652804853657122, 2);
  sqcRZGate(q, -0.8109154497826302, 2);
  sqcRYGate(q, -2.0153786884145433, 3);
  sqcRZGate(q, 2.824065905049443, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.7467690810202425, 0);
  sqcRZGate(q, -1.6703662013434535, 0);
  sqcRYGate(q, -0.07281784528771651, 1);
  sqcRZGate(q, 1.667213251688222, 1);
  sqcRYGate(q, -0.09126728552992122, 2);
  sqcRZGate(q, -2.7997568960255172, 2);
  sqcRYGate(q, 1.262742787036394, 3);
  sqcRZGate(q, 2.11495499644871, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.0647140058001483, 0);
  sqcRZGate(q, 0.0020880412979966683, 0);
  sqcRYGate(q, -0.8371935591362815, 1);
  sqcRZGate(q, -2.5028706358756976, 1);
  sqcRYGate(q, 1.0584314725096766, 2);
  sqcRZGate(q, 2.6247595581843566, 2);
  sqcRYGate(q, -0.17587270777344963, 3);
  sqcRZGate(q, -2.385452374372225, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.3669638630451963, 0);
  sqcRZGate(q, -1.9632560681833926, 0);
  sqcRYGate(q, -1.3262320247713832, 1);
  sqcRZGate(q, -2.207706013603574, 1);
  sqcRYGate(q, 1.0141344755795698, 2);
  sqcRZGate(q, -2.819245727628746, 2);
  sqcRYGate(q, -1.8330194197930547, 3);
  sqcRZGate(q, 0.7642407709890765, 3);

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
