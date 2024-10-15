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

  sqcRYGate(q, 0.09338467210439916, 0);
  sqcRZGate(q, 1.7342788275518057, 0);
  sqcRYGate(q, 1.5706313069028424, 1);
  sqcRZGate(q, -1.5711238883645915, 1);
  sqcRYGate(q, -2.1230866939909143, 2);
  sqcRZGate(q, -1.1563292756412749, 2);
  sqcRYGate(q, 1.942731730290797, 3);
  sqcRZGate(q, 2.396952721036702, 3);
  sqcRYGate(q, -2.7785472665480007, 4);
  sqcRZGate(q, -0.41601236426930055, 4);
  sqcRYGate(q, -3.138007867779618, 5);
  sqcRZGate(q, 2.542615743072522, 5);
  sqcRYGate(q, -0.013169296911644146, 6);
  sqcRZGate(q, -1.519834830224755, 6);
  sqcRYGate(q, -2.3547181515672206, 7);
  sqcRZGate(q, -1.019222143892741, 7);
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
  sqcRYGate(q, -1.5702598312567164, 0);
  sqcRZGate(q, 2.1831561937558357, 0);
  sqcRYGate(q, 1.0093168286197418, 1);
  sqcRZGate(q, 1.6549702987535675, 1);
  sqcRYGate(q, 2.04087943585463, 2);
  sqcRZGate(q, -1.5318257490807452, 2);
  sqcRYGate(q, 3.139984700492774, 3);
  sqcRZGate(q, 0.5099372235427972, 3);
  sqcRYGate(q, -0.47404402549536157, 4);
  sqcRZGate(q, 1.2723229561929221, 4);
  sqcRYGate(q, -0.0005781794580856925, 5);
  sqcRZGate(q, -1.3254848321049426, 5);
  sqcRYGate(q, 1.5447703374167188, 6);
  sqcRZGate(q, 0.3304804635447915, 6);
  sqcRYGate(q, 2.093177972963696, 7);
  sqcRZGate(q, -0.6610158426710238, 7);
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
  sqcRYGate(q, -3.135989012293098, 0);
  sqcRZGate(q, -2.537274580993315, 0);
  sqcRYGate(q, 0.28560821235676137, 1);
  sqcRZGate(q, -1.9894076499708753, 1);
  sqcRYGate(q, 1.5706413146316076, 2);
  sqcRZGate(q, -3.1413633771290717, 2);
  sqcRYGate(q, -1.1114298192496619, 3);
  sqcRZGate(q, -1.0457788784583721, 3);
  sqcRYGate(q, -3.124928629294446, 4);
  sqcRZGate(q, -0.8646593609173419, 4);
  sqcRYGate(q, 3.1262525359934403, 5);
  sqcRZGate(q, 1.5378566605790338, 5);
  sqcRYGate(q, 1.556602167799469, 6);
  sqcRZGate(q, 0.6035262356136712, 6);
  sqcRYGate(q, 1.5945018482699114, 7);
  sqcRZGate(q, -1.0385374890962957, 7);
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
  sqcRYGate(q, -1.5538155896626265, 0);
  sqcRZGate(q, 2.620717593224147, 0);
  sqcRYGate(q, -0.012896134306931373, 1);
  sqcRZGate(q, -1.4482176160389733, 1);
  sqcRYGate(q, -0.8975020795322474, 2);
  sqcRZGate(q, 2.3395952050413364, 2);
  sqcRYGate(q, 1.6121147820608055, 3);
  sqcRZGate(q, 1.7274191709013564, 3);
  sqcRYGate(q, -6.829490476865369e-06, 4);
  sqcRZGate(q, -2.1983186938153114, 4);
  sqcRYGate(q, -0.017463511337433273, 5);
  sqcRZGate(q, -2.7257985663848108, 5);
  sqcRYGate(q, -0.032557888197643325, 6);
  sqcRZGate(q, -2.1844966011286875, 6);
  sqcRYGate(q, -2.427585137235059, 7);
  sqcRZGate(q, -0.10629114947408187, 7);
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
  sqcRYGate(q, -1.5745292254587693, 0);
  sqcRZGate(q, 1.701753973440739, 0);
  sqcRYGate(q, 0.005910162749480641, 1);
  sqcRZGate(q, -0.5369382677671037, 1);
  sqcRYGate(q, 3.1339638494400717, 2);
  sqcRZGate(q, -0.802700329464458, 2);
  sqcRYGate(q, -0.24770929432186695, 3);
  sqcRZGate(q, 1.4601214121390869, 3);
  sqcRYGate(q, -1.5411569519495174, 4);
  sqcRZGate(q, 1.6245135613586523, 4);
  sqcRYGate(q, 2.3875705384921395, 5);
  sqcRZGate(q, 2.7067904939376684, 5);
  sqcRYGate(q, 1.074556569551215, 6);
  sqcRZGate(q, 1.578025907002547, 6);
  sqcRYGate(q, 3.1298363563401126, 7);
  sqcRZGate(q, 0.7490483748226104, 7);
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
  sqcRYGate(q, -2.9712521931371487, 0);
  sqcRZGate(q, 0.13175986531988215, 0);
  sqcRYGate(q, -0.0017537586457718746, 1);
  sqcRZGate(q, -1.877509427803954, 1);
  sqcRYGate(q, 1.570880990507881, 2);
  sqcRZGate(q, -1.5704793960775962, 2);
  sqcRYGate(q, -3.0459209452737683, 3);
  sqcRZGate(q, 1.4819904583544743, 3);
  sqcRYGate(q, -0.00010992881123924578, 4);
  sqcRZGate(q, -2.4720466214505, 4);
  sqcRYGate(q, -0.4972610786212277, 5);
  sqcRZGate(q, -0.20176385791247228, 5);
  sqcRYGate(q, 1.576110548282599, 6);
  sqcRZGate(q, 2.1534097886264187, 6);
  sqcRYGate(q, 1.9761712043816944, 7);
  sqcRZGate(q, 2.371176765098192, 7);
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
  sqcRYGate(q, 1.574263651667965, 0);
  sqcRZGate(q, -1.7579254913648343, 0);
  sqcRYGate(q, 0.006154000942691695, 1);
  sqcRZGate(q, 1.0570405462770585, 1);
  sqcRYGate(q, 1.5725882199418542, 2);
  sqcRZGate(q, 0.44055548070257394, 2);
  sqcRYGate(q, 0.00030861858175025233, 3);
  sqcRZGate(q, -3.0383784127010744, 3);
  sqcRYGate(q, 0.00014382600271917295, 4);
  sqcRZGate(q, 1.4106231135963678, 4);
  sqcRYGate(q, -1.881699920882839, 5);
  sqcRZGate(q, 0.08960567073383618, 5);
  sqcRYGate(q, -3.1403498770578886, 6);
  sqcRZGate(q, -0.9205020754940374, 6);
  sqcRYGate(q, -0.07478872160507823, 7);
  sqcRZGate(q, -2.371002274365216, 7);
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
  sqcRYGate(q, 3.063638359164386, 0);
  sqcRZGate(q, 3.1309446120817253, 0);
  sqcRYGate(q, 2.991520484681424, 1);
  sqcRZGate(q, -2.901025973960955, 1);
  sqcRYGate(q, -3.0913993407153115, 2);
  sqcRZGate(q, 2.3327158392559704, 2);
  sqcRYGate(q, -1.570023134705199, 3);
  sqcRZGate(q, 1.6023531116691894, 3);
  sqcRYGate(q, -5.482667843568494e-05, 4);
  sqcRZGate(q, 2.616067147115266, 4);
  sqcRYGate(q, -2.622258520462794, 5);
  sqcRZGate(q, -2.8699447560617686, 5);
  sqcRYGate(q, 2.835249969452305, 6);
  sqcRZGate(q, 0.10189007471069733, 6);
  sqcRYGate(q, -2.541123532208925, 7);
  sqcRZGate(q, 0.659414874998668, 7);
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
  sqcRYGate(q, -3.1401026758075936, 0);
  sqcRZGate(q, 3.0823905900572957, 0);
  sqcRYGate(q, 0.00026381443627150836, 1);
  sqcRZGate(q, -0.22738954162174263, 1);
  sqcRYGate(q, -1.3306570964451918, 2);
  sqcRZGate(q, 1.7903788244883199, 2);
  sqcRYGate(q, -1.5705593790835577, 3);
  sqcRZGate(q, -0.004168238444613337, 3);
  sqcRYGate(q, 1.5720918133902109, 4);
  sqcRZGate(q, 3.1414523207921463, 4);
  sqcRYGate(q, -1.568206520807462, 5);
  sqcRZGate(q, -0.4827120780638131, 5);
  sqcRYGate(q, 0.005791676489916071, 6);
  sqcRZGate(q, -0.14621767638419758, 6);
  sqcRYGate(q, 3.0838015242938, 7);
  sqcRZGate(q, 0.5142649818551361, 7);
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
  sqcRYGate(q, -3.12461320081876, 0);
  sqcRZGate(q, -1.5529534410516683, 0);
  sqcRYGate(q, 1.5318941692511396, 1);
  sqcRZGate(q, -2.397562388367604, 1);
  sqcRYGate(q, 0.00028438691271989735, 2);
  sqcRZGate(q, 2.895445366809943, 2);
  sqcRYGate(q, -3.0960986226877103, 3);
  sqcRZGate(q, 1.1564767111155294, 3);
  sqcRYGate(q, 1.5704877007035758, 4);
  sqcRZGate(q, -3.1377664032313515, 4);
  sqcRYGate(q, -3.141275634765144, 5);
  sqcRZGate(q, 0.973862585992614, 5);
  sqcRYGate(q, -1.5748550296773907, 6);
  sqcRZGate(q, -1.6201911354558416, 6);
  sqcRYGate(q, 0.05801143887830517, 7);
  sqcRZGate(q, 3.07821269259006, 7);
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
  sqcRYGate(q, -0.10503902592513761, 0);
  sqcRZGate(q, -1.8114591413511867, 0);
  sqcRYGate(q, -3.1370551513098417, 1);
  sqcRZGate(q, -0.9453848428679014, 1);
  sqcRYGate(q, -1.5707995086402493, 2);
  sqcRZGate(q, 8.474700524727921e-05, 2);
  sqcRYGate(q, 0.005597800349834699, 3);
  sqcRZGate(q, 1.9814601525495998, 3);
  sqcRYGate(q, -1.885194687282401, 4);
  sqcRZGate(q, 2.439765986156069, 4);
  sqcRYGate(q, -1.570845349020117, 5);
  sqcRZGate(q, -1.5711756589926984, 5);
  sqcRYGate(q, 3.0619223916225633, 6);
  sqcRZGate(q, 1.515766386223473, 6);
  sqcRYGate(q, 1.570952586057432, 7);
  sqcRZGate(q, 2.255295858162098, 7);
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
  sqcRYGate(q, 1.5707452658775738, 0);
  sqcRZGate(q, 1.570675071806197, 0);
  sqcRYGate(q, 1.5865711523511647, 1);
  sqcRZGate(q, 1.6086125370048565, 1);
  sqcRYGate(q, -0.09962905496836287, 2);
  sqcRZGate(q, -0.24433496984378228, 2);
  sqcRYGate(q, 1.5763702871381302, 3);
  sqcRZGate(q, 1.3705961715593284, 3);
  sqcRYGate(q, 4.534287176216622e-05, 4);
  sqcRZGate(q, -1.018752272122427, 4);
  sqcRYGate(q, 1.5758294277360756, 5);
  sqcRZGate(q, 3.4049147375370126e-05, 5);
  sqcRYGate(q, -1.5916892920381838, 6);
  sqcRZGate(q, -2.2512076975690807, 6);
  sqcRYGate(q, -0.000769463056466968, 7);
  sqcRZGate(q, -0.6767550649396981, 7);
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
  sqcRYGate(q, 1.5700540721379022, 0);
  sqcRZGate(q, 2.388640868562903, 0);
  sqcRYGate(q, 1.5709827759060557, 1);
  sqcRZGate(q, 3.1412637246716897, 1);
  sqcRYGate(q, -3.1413636706718555, 2);
  sqcRZGate(q, 2.8979824822989917, 2);
  sqcRYGate(q, -0.0015540538926632763, 3);
  sqcRZGate(q, 1.954260273489095, 3);
  sqcRYGate(q, 0.013078485874995494, 4);
  sqcRZGate(q, -1.4173712295243348, 4);
  sqcRYGate(q, -1.6178622043197985, 5);
  sqcRZGate(q, -2.150540440065187, 5);
  sqcRYGate(q, 3.1349500220079443, 6);
  sqcRZGate(q, 0.8902735612639017, 6);
  sqcRYGate(q, 3.056219833494875, 7);
  sqcRZGate(q, 0.021150414192089052, 7);
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
  sqcRYGate(q, -0.0009499670437658122, 0);
  sqcRZGate(q, 1.1086257671896702, 0);
  sqcRYGate(q, 1.5759411096459168, 1);
  sqcRZGate(q, 0.3486018172200325, 1);
  sqcRYGate(q, -1.5701937988207393, 2);
  sqcRZGate(q, -2.7861884495357225, 2);
  sqcRYGate(q, -3.1365064793651327, 3);
  sqcRZGate(q, 0.5323586166425676, 3);
  sqcRYGate(q, -1.571405276414211, 4);
  sqcRZGate(q, 1.9267066267706716, 4);
  sqcRYGate(q, -3.141451888508568, 5);
  sqcRZGate(q, 1.3402210206014271, 5);
  sqcRYGate(q, 1.5695998679784386, 6);
  sqcRZGate(q, -2.7920984675348444, 6);
  sqcRYGate(q, -0.0059085644216713435, 7);
  sqcRZGate(q, -2.805612988212702, 7);

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
