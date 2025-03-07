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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -2.422450774276735, 0);
  sqcRZGate(q, 2.6955425054138167, 0);
  sqcRYGate(q, 1.8481198125432545, 1);
  sqcRZGate(q, -1.6232937085225254, 1);
  sqcRYGate(q, 2.276737667094345, 2);
  sqcRZGate(q, -0.8682313720225546, 2);
  sqcRYGate(q, -0.004586367577220714, 3);
  sqcRZGate(q, 2.3613399257914773, 3);
  sqcRYGate(q, -3.141567726217688, 4);
  sqcRZGate(q, 1.32897774462453, 4);
  sqcRYGate(q, 1.5707940131093154, 5);
  sqcRZGate(q, -2.177697797237405, 5);
  sqcRYGate(q, 1.5707957373499528, 6);
  sqcRZGate(q, 2.483184699017253, 6);
  sqcRYGate(q, -3.141054546089163, 7);
  sqcRZGate(q, -2.8435571157546926, 7);
  sqcRYGate(q, 1.043558934138883, 8);
  sqcRZGate(q, -3.0423937322198045, 8);
  sqcRYGate(q, 1.7563068970476152, 9);
  sqcRZGate(q, 0.12720740314370507, 9);
  sqcRYGate(q, 0.09653412828128616, 10);
  sqcRZGate(q, 2.4913030325693204, 10);
  sqcRYGate(q, 0.6574047071440196, 11);
  sqcRZGate(q, 0.46969785534238184, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.241673299063244, 0);
  sqcRZGate(q, -2.0710990954662174, 0);
  sqcRYGate(q, 1.152609739177018, 1);
  sqcRZGate(q, -1.4272567474791376, 1);
  sqcRYGate(q, -1.8922562647667474, 2);
  sqcRZGate(q, 0.1764622589995639, 2);
  sqcRYGate(q, -3.1380222769441426, 3);
  sqcRZGate(q, 2.7446361653651103, 3);
  sqcRYGate(q, 1.5707983109037438, 4);
  sqcRZGate(q, -2.4326337877013087, 4);
  sqcRYGate(q, -0.5259761078911733, 5);
  sqcRZGate(q, -0.8930496132793113, 5);
  sqcRYGate(q, 0.4599727414848535, 6);
  sqcRZGate(q, 0.9016944830034346, 6);
  sqcRYGate(q, 1.5707964482728318, 7);
  sqcRZGate(q, 3.0725325979859544, 7);
  sqcRYGate(q, 2.2341666663684583, 8);
  sqcRZGate(q, 0.13984949149920747, 8);
  sqcRYGate(q, 1.6069952376592305, 9);
  sqcRZGate(q, 3.137687965273831, 9);
  sqcRYGate(q, 0.004791466234956261, 10);
  sqcRZGate(q, 2.874347736781108, 10);
  sqcRYGate(q, -1.2452745393173896, 11);
  sqcRZGate(q, 0.07350157857272155, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.47764415066582, 0);
  sqcRZGate(q, 0.08373227123086951, 0);
  sqcRYGate(q, 1.9338824537438715, 1);
  sqcRZGate(q, -2.5080384102489, 1);
  sqcRYGate(q, -0.3930693138289897, 2);
  sqcRZGate(q, 2.4748244211540618, 2);
  sqcRYGate(q, -1.570794422831524, 3);
  sqcRZGate(q, -3.069198707125109, 3);
  sqcRYGate(q, 2.901105718032113, 4);
  sqcRZGate(q, 1.751585758535838, 4);
  sqcRYGate(q, -2.1584895984531864, 5);
  sqcRZGate(q, -2.038619548358416, 5);
  sqcRYGate(q, 1.113889494194757, 6);
  sqcRZGate(q, 0.9475851119424412, 6);
  sqcRYGate(q, 0.04224855185323673, 7);
  sqcRZGate(q, 0.8435503896595024, 7);
  sqcRYGate(q, 1.5708010770540752, 8);
  sqcRZGate(q, 3.135549030049792, 8);
  sqcRYGate(q, 1.0032011052839562, 9);
  sqcRZGate(q, -3.050534635510714, 9);
  sqcRYGate(q, -3.0227759981999864, 10);
  sqcRZGate(q, 0.8808002074335867, 10);
  sqcRYGate(q, 2.659068009105365, 11);
  sqcRZGate(q, -2.4539825182721264, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.5311992112424044, 0);
  sqcRZGate(q, 2.27456866938907, 0);
  sqcRYGate(q, -1.393961749329252, 1);
  sqcRZGate(q, 2.567857096033665, 1);
  sqcRYGate(q, -1.5707982217868315, 2);
  sqcRZGate(q, 0.004591626358059702, 2);
  sqcRYGate(q, -3.0855464499770076, 3);
  sqcRZGate(q, -1.8509378922073312, 3);
  sqcRYGate(q, 0.7012088167502242, 4);
  sqcRZGate(q, -0.07732993978267189, 4);
  sqcRYGate(q, 0.056691284380398436, 5);
  sqcRZGate(q, -0.20162564248144543, 5);
  sqcRYGate(q, -0.05934826727449227, 6);
  sqcRZGate(q, 1.6828953973574294, 6);
  sqcRYGate(q, -3.0407883258836343, 7);
  sqcRZGate(q, 0.2857169068686698, 7);
  sqcRYGate(q, 1.7660233197874666, 8);
  sqcRZGate(q, 2.2508448650907775, 8);
  sqcRYGate(q, -1.5708039311575983, 9);
  sqcRZGate(q, 2.614133469754973, 9);
  sqcRYGate(q, 3.020298195555014, 10);
  sqcRZGate(q, 1.450203317596988, 10);
  sqcRYGate(q, 2.3665402047023494, 11);
  sqcRZGate(q, 2.435441916467043, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.201711315805352, 0);
  sqcRZGate(q, 1.857699858942678, 0);
  sqcRYGate(q, 1.5707923792969138, 1);
  sqcRZGate(q, 2.3774532033428737, 1);
  sqcRYGate(q, 0.23933319218052915, 2);
  sqcRZGate(q, -0.004814535763682849, 2);
  sqcRYGate(q, 0.005589952914213314, 3);
  sqcRZGate(q, 0.13004861805844703, 3);
  sqcRYGate(q, 1.7077512129038688, 4);
  sqcRZGate(q, -0.00623212148903196, 4);
  sqcRYGate(q, -0.015949250230737455, 5);
  sqcRZGate(q, -1.8708318503451338, 5);
  sqcRYGate(q, -3.127640228049676, 6);
  sqcRZGate(q, 1.2450764154718084, 6);
  sqcRYGate(q, 1.741689634038028, 7);
  sqcRZGate(q, -2.98071508167205, 7);
  sqcRYGate(q, -0.24155900736949595, 8);
  sqcRZGate(q, 2.431283944191094, 8);
  sqcRYGate(q, -2.5413022608597067, 9);
  sqcRZGate(q, -0.14967209629106196, 9);
  sqcRYGate(q, -1.5707954653570102, 10);
  sqcRZGate(q, -2.8018928507203733, 10);
  sqcRYGate(q, 2.157018029789465, 11);
  sqcRZGate(q, 1.6580041644090011, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5707955701331422, 0);
  sqcRZGate(q, -0.40931347551456715, 0);
  sqcRYGate(q, -0.31893784069469966, 1);
  sqcRZGate(q, 1.1318638112365749, 1);
  sqcRYGate(q, 1.0279304719607019, 2);
  sqcRZGate(q, 0.4035838597643701, 2);
  sqcRYGate(q, -0.05096474314549759, 3);
  sqcRZGate(q, -1.5239679518267915, 3);
  sqcRYGate(q, -0.7001080460206337, 4);
  sqcRZGate(q, 0.7079981967356553, 4);
  sqcRYGate(q, -3.1339650904874077, 5);
  sqcRZGate(q, -0.02096208080022155, 5);
  sqcRYGate(q, 3.1281923392964335, 6);
  sqcRZGate(q, -2.7543343444458435, 6);
  sqcRYGate(q, -0.07617464313766575, 7);
  sqcRZGate(q, -1.461574500932273, 7);
  sqcRYGate(q, -3.1051684596139046, 8);
  sqcRZGate(q, -1.014600652748348, 8);
  sqcRYGate(q, -0.07727665119710991, 9);
  sqcRZGate(q, -0.8180934711314, 9);
  sqcRYGate(q, -2.9969617329874394, 10);
  sqcRZGate(q, 1.675745958781807, 10);
  sqcRYGate(q, -1.5707936466723562, 11);
  sqcRZGate(q, -1.8267148873543397, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.3296935527518357, 0);
  sqcRZGate(q, -0.9997314955674111, 0);
  sqcRYGate(q, 2.297636487912997, 1);
  sqcRZGate(q, 2.703495577615596, 1);
  sqcRYGate(q, 0.8327505487839594, 2);
  sqcRZGate(q, 2.148664174646292, 2);
  sqcRYGate(q, 2.239096215929419, 3);
  sqcRZGate(q, -0.9738478406089763, 3);
  sqcRYGate(q, 1.6521971144099314, 4);
  sqcRZGate(q, 0.6538463042680469, 4);
  sqcRYGate(q, 2.819783960701056, 5);
  sqcRZGate(q, 2.500862911915037, 5);
  sqcRYGate(q, 1.8427507344637633, 6);
  sqcRZGate(q, 0.009477923280020839, 6);
  sqcRYGate(q, 1.7965105973782585, 7);
  sqcRZGate(q, 1.9576294745755887, 7);
  sqcRYGate(q, 2.361776586257911, 8);
  sqcRZGate(q, -2.3735067109394516, 8);
  sqcRYGate(q, 0.9847504020974441, 9);
  sqcRZGate(q, 0.761776391350146, 9);
  sqcRYGate(q, -2.6460788095732877, 10);
  sqcRZGate(q, -2.4721944258509834, 10);
  sqcRYGate(q, -2.6413123481754326, 11);
  sqcRZGate(q, -2.5132517130645704, 11);

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
