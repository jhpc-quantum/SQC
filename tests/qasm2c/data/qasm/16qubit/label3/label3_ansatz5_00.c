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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -2.347761380184093, 0);
  sqcRYGate(q, 0.4466467248930143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2337992137441898, 0);
  sqcRYGate(q, -2.7737467420153874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.518221330670218, 2);
  sqcRYGate(q, 1.6880499889924527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.991803011026302, 2);
  sqcRYGate(q, 1.456751065069206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3775590131605506, 4);
  sqcRYGate(q, 0.7281845142790306, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8033270833207977, 4);
  sqcRYGate(q, 2.670776725984244, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.911503370716933, 6);
  sqcRYGate(q, 1.2588536993923547, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.787020834322656, 6);
  sqcRYGate(q, 2.136509183648778, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2581819794165616, 8);
  sqcRYGate(q, -1.162759364475198, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.952144745523607, 8);
  sqcRYGate(q, -1.421785886242363, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.6389554176017116, 10);
  sqcRYGate(q, -0.13361886086315702, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6359418903293584, 10);
  sqcRYGate(q, 2.6213575499530655, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.450576973820711, 12);
  sqcRYGate(q, -1.11856382808383, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.2078324963671734, 12);
  sqcRYGate(q, -1.2506579387650436, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.251768218656133, 14);
  sqcRYGate(q, -0.7045964390096993, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.4691330295986571, 14);
  sqcRYGate(q, 2.824448192502688, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.316585709471671, 1);
  sqcRYGate(q, 0.9314200136764903, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5697825408755965, 1);
  sqcRYGate(q, -1.9355453930995656, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.12007485769048287, 3);
  sqcRYGate(q, 0.04646201876679612, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5027898094313417, 3);
  sqcRYGate(q, -1.5249754585102366, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5898734581554113, 5);
  sqcRYGate(q, -0.1864560109962392, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8143847007750333, 5);
  sqcRYGate(q, 1.499187526863894, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7406927602098038, 7);
  sqcRYGate(q, 2.7505296379743434, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.35387173698214563, 7);
  sqcRYGate(q, -1.516645830662621, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.8527005080288044, 9);
  sqcRYGate(q, 2.650927144780876, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7972958990985906, 9);
  sqcRYGate(q, -1.350034537586179, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.33712820381531156, 11);
  sqcRYGate(q, -0.1671393055905437, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5543583224521746, 11);
  sqcRYGate(q, 1.7535225200470055, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.0033311260966564, 13);
  sqcRYGate(q, -0.8328113820415055, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.2842260429961356, 13);
  sqcRYGate(q, -1.6864584696603462, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.6898765041047872, 0);
  sqcRYGate(q, 1.6059026041113516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.576071377524813, 0);
  sqcRYGate(q, 2.6399460455749653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4712055695725905, 2);
  sqcRYGate(q, 0.13875464204338872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5283922676257236, 2);
  sqcRYGate(q, -1.5873178811752364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0038071637177493098, 4);
  sqcRYGate(q, 2.2503639678245566, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.02223760563005861, 4);
  sqcRYGate(q, 2.876357217453861, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0329265085604074, 6);
  sqcRYGate(q, -2.96943211169156, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5689403387744698, 6);
  sqcRYGate(q, 1.5551630985422815, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6595356416323495, 8);
  sqcRYGate(q, 0.11732680150547202, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.87649298889351, 8);
  sqcRYGate(q, -0.48680851175219786, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9326201449847837, 10);
  sqcRYGate(q, -0.07415078357010074, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.645291861363935, 10);
  sqcRYGate(q, 0.005036392938241541, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.022185903062478456, 12);
  sqcRYGate(q, -0.3087013831861434, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.11684745911724422, 12);
  sqcRYGate(q, 0.4870524906729719, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.5969024782496457, 14);
  sqcRYGate(q, -1.2454507986896255, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.739897077199597, 14);
  sqcRYGate(q, 0.6105268938483938, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.7295688907220166, 1);
  sqcRYGate(q, 0.005355449399365497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2546097875406945, 1);
  sqcRYGate(q, 1.7820353137967402, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8264348308904492, 3);
  sqcRYGate(q, 3.140572051810501, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0836038878230223, 3);
  sqcRYGate(q, 2.0143258772182335, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.390399054288258, 5);
  sqcRYGate(q, 0.1537466406300438, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.344113979880269, 5);
  sqcRYGate(q, 3.0619337497803674, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.023502761250591, 7);
  sqcRYGate(q, 0.039544811493160914, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.809539912732254, 7);
  sqcRYGate(q, 0.2746953060571764, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6547169340630012, 9);
  sqcRYGate(q, -1.0807040348039432, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.545677284574729, 9);
  sqcRYGate(q, 1.614149091707431, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0178674883425187, 11);
  sqcRYGate(q, -3.0236728952443395, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5637886765429032, 11);
  sqcRYGate(q, 1.4685332743894524, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.7118137074586137, 13);
  sqcRYGate(q, -0.06850139015471335, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.279666678487163, 13);
  sqcRYGate(q, 1.4970102911237348, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.1962515885910374, 0);
  sqcRYGate(q, 0.0708400814935654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3573537374443294, 0);
  sqcRYGate(q, -1.4832335319558647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.002240457715594765, 2);
  sqcRYGate(q, 1.546574117537224, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5318115755189206, 2);
  sqcRYGate(q, -1.562604066327054, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1198473484196407, 4);
  sqcRYGate(q, -0.07218693678002543, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.094301800218215, 4);
  sqcRYGate(q, 2.928485488039188, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.012907558961040344, 6);
  sqcRYGate(q, -0.06223090402156827, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5754564605224655, 6);
  sqcRYGate(q, -1.5623055779493837, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5748981047299706, 8);
  sqcRYGate(q, -0.14262263051209526, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.5422569939470068, 8);
  sqcRYGate(q, -0.15441900856409685, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.05541989711455776, 10);
  sqcRYGate(q, -2.983912184008203, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.21837990682890565, 10);
  sqcRYGate(q, -2.602177724035478, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.8301120940078883, 12);
  sqcRYGate(q, -0.09473004560889782, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.4014624771323057, 12);
  sqcRYGate(q, -0.11128485940658363, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.9694394214136965, 14);
  sqcRYGate(q, -0.04275755599187352, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.507745529622762, 14);
  sqcRYGate(q, -2.5988995935555455, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.0277719172447286, 1);
  sqcRYGate(q, 3.131496863690063, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5670935036168165, 1);
  sqcRYGate(q, 1.5683681460024315, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6780704227516414, 3);
  sqcRYGate(q, 3.140458522997803, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4960126232762514, 3);
  sqcRYGate(q, -1.5667776842787784, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6056694975168702, 5);
  sqcRYGate(q, -2.9877341065192184, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.13780393848645645, 5);
  sqcRYGate(q, -3.058993714255049, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.007224549781891021, 7);
  sqcRYGate(q, -0.4378481746103376, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.13050588162346, 7);
  sqcRYGate(q, 1.8868469496116438, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.03154750051044879, 9);
  sqcRYGate(q, 0.008297496926815327, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6160535552168263, 9);
  sqcRYGate(q, -1.5209126077477748, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1095861235698363, 11);
  sqcRYGate(q, -3.0784950035653633, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.03908214151393528, 11);
  sqcRYGate(q, 3.0654573050093816, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.04361412918978136, 13);
  sqcRYGate(q, 0.05949821018776813, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.6223824575217503, 13);
  sqcRYGate(q, 1.664645884451308, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.006563195122384, 0);
  sqcRYGate(q, -3.0969203681105486, 1);
  sqcRYGate(q, -1.4139345578181852, 2);
  sqcRYGate(q, -3.099364649514715, 3);
  sqcRYGate(q, 0.15162081836795416, 4);
  sqcRYGate(q, -1.4971493323307676, 5);
  sqcRYGate(q, 0.014066101508638518, 6);
  sqcRYGate(q, -1.534073510304312, 7);
  sqcRYGate(q, -0.22739060851464135, 8);
  sqcRYGate(q, -3.1204626736727534, 9);
  sqcRYGate(q, -1.2752780578341232, 10);
  sqcRYGate(q, -2.9339241474472666, 11);
  sqcRYGate(q, -1.7386226128524456, 12);
  sqcRYGate(q, 0.1280747928350685, 13);
  sqcRYGate(q, 2.569744668435682, 14);
  sqcRYGate(q, -1.3984047555873318, 15);

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
