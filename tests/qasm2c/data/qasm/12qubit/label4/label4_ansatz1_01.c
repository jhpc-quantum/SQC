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

  sqcRYGate(q, 0.6563291236145294, 0);
  sqcRZGate(q, 1.7221520378433919, 0);
  sqcRYGate(q, -1.5694922849932045, 1);
  sqcRZGate(q, -2.81283306647334, 1);
  sqcRYGate(q, 1.5691828347764418, 2);
  sqcRZGate(q, -3.140976966631188, 2);
  sqcRYGate(q, 1.570948259083226, 3);
  sqcRZGate(q, -1.5710848348354696, 3);
  sqcRYGate(q, -1.5707972249335018, 4);
  sqcRZGate(q, 1.614288452450812, 4);
  sqcRYGate(q, -1.5732069889363682, 5);
  sqcRZGate(q, -1.7921169925552158, 5);
  sqcRYGate(q, 1.570787425458274, 6);
  sqcRZGate(q, 1.5707750255294153, 6);
  sqcRYGate(q, -1.5708815385813466, 7);
  sqcRZGate(q, 0.00094890017113336, 7);
  sqcRYGate(q, 1.5708077230692528, 8);
  sqcRZGate(q, -3.141570312966919, 8);
  sqcRYGate(q, -1.5707951693294293, 9);
  sqcRZGate(q, -1.5773007611853886, 9);
  sqcRYGate(q, 1.587850208840897, 10);
  sqcRZGate(q, 1.5669179589664448, 10);
  sqcRYGate(q, -1.6034028283672468, 11);
  sqcRZGate(q, -1.7851140955360227, 11);
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
  sqcRYGate(q, -1.2918788085324486, 0);
  sqcRZGate(q, -1.6145503815154778, 0);
  sqcRYGate(q, 0.0006129363113203112, 1);
  sqcRZGate(q, 0.7988170592721664, 1);
  sqcRYGate(q, -0.1912772634093001, 2);
  sqcRZGate(q, -1.2462311918614342, 2);
  sqcRYGate(q, -1.607567393284019, 3);
  sqcRZGate(q, -0.04091916853729667, 3);
  sqcRYGate(q, -2.8086780515750576, 4);
  sqcRZGate(q, 3.141203128346542, 4);
  sqcRYGate(q, 0.013757975046324266, 5);
  sqcRZGate(q, -1.2560264868224895, 5);
  sqcRYGate(q, 0.5235124638557863, 6);
  sqcRZGate(q, -0.00014438610144957434, 6);
  sqcRYGate(q, 1.4880858945449695, 7);
  sqcRZGate(q, -1.0827431014841216, 7);
  sqcRYGate(q, -1.5446733090227314, 8);
  sqcRZGate(q, 0.00885226073666918, 8);
  sqcRYGate(q, 1.570794855192303, 9);
  sqcRZGate(q, -3.141586705465052, 9);
  sqcRYGate(q, -0.1902649431146501, 10);
  sqcRZGate(q, 1.5708761666650553, 10);
  sqcRYGate(q, 0.0014158954809064294, 11);
  sqcRZGate(q, -2.926851441540621, 11);
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
  sqcRYGate(q, 1.9172290507562137, 0);
  sqcRZGate(q, 1.4479871606503907, 0);
  sqcRYGate(q, 1.5728909182422457, 1);
  sqcRZGate(q, -1.571607961666383, 1);
  sqcRYGate(q, 0.1354154626662325, 2);
  sqcRZGate(q, -0.3276960914060498, 2);
  sqcRYGate(q, 0.004171704472887505, 3);
  sqcRZGate(q, 0.040889045460066796, 3);
  sqcRYGate(q, -2.820161012525596, 4);
  sqcRZGate(q, 3.009099350695951, 4);
  sqcRYGate(q, 1.5735764045367695, 5);
  sqcRZGate(q, -1.5741054978707893, 5);
  sqcRYGate(q, -2.6854760766419012, 6);
  sqcRZGate(q, -2.076508611951726, 6);
  sqcRYGate(q, -3.139968360132882, 7);
  sqcRZGate(q, -1.0827406212475061, 7);
  sqcRYGate(q, -0.027380913459821115, 8);
  sqcRZGate(q, 3.132738100220374, 8);
  sqcRYGate(q, -0.45169428483405094, 9);
  sqcRZGate(q, 1.5708084326254683, 9);
  sqcRYGate(q, -1.5707690960205545, 10);
  sqcRZGate(q, -3.1415303644448143, 10);
  sqcRYGate(q, -1.558038431398546, 11);
  sqcRZGate(q, 3.108310918195461, 11);
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
  sqcRYGate(q, -1.5708879444503736, 0);
  sqcRZGate(q, 1.7517952204164474e-05, 0);
  sqcRYGate(q, -1.5707182398881834, 1);
  sqcRZGate(q, -1.5701208980547916, 1);
  sqcRYGate(q, 1.570757239196493, 2);
  sqcRZGate(q, -1.5703697196433302, 2);
  sqcRYGate(q, 1.5299768957564182, 3);
  sqcRZGate(q, 1.5704178388167966, 3);
  sqcRYGate(q, 0.0009717194453306987, 4);
  sqcRZGate(q, 1.7028628649570612, 4);
  sqcRYGate(q, -1.570925776307315, 5);
  sqcRZGate(q, -1.564017208492693, 5);
  sqcRYGate(q, 1.9231477790704336e-05, 6);
  sqcRZGate(q, -2.63605228630296, 6);
  sqcRYGate(q, -1.6640435501788355, 7);
  sqcRZGate(q, 1.5708264508812781, 7);
  sqcRYGate(q, 1.5404507526309246, 8);
  sqcRZGate(q, 1.5708065786943193, 8);
  sqcRYGate(q, -1.5715806855611234, 9);
  sqcRZGate(q, 0.022517274488836572, 9);
  sqcRYGate(q, -0.8777037597626778, 10);
  sqcRZGate(q, 1.5707971932764826, 10);
  sqcRYGate(q, -1.5708581955112715, 11);
  sqcRZGate(q, 3.138706314910997, 11);
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
  sqcRYGate(q, -1.5704362895140118, 0);
  sqcRZGate(q, 2.8086386058147785, 0);
  sqcRYGate(q, 1.6823471676345179, 1);
  sqcRZGate(q, 2.4623409806253123, 1);
  sqcRYGate(q, 1.5707971693296356, 2);
  sqcRZGate(q, 1.2381879946353491, 2);
  sqcRYGate(q, -1.570745655949487, 3);
  sqcRZGate(q, 0.8915991259553158, 3);
  sqcRYGate(q, 1.570794099477654, 4);
  sqcRZGate(q, -1.9050032023953856, 4);
  sqcRYGate(q, -1.6728085042089453, 5);
  sqcRZGate(q, 2.5561445647148333, 5);
  sqcRYGate(q, 1.5707859424694712, 6);
  sqcRZGate(q, -0.3339869366980479, 6);
  sqcRYGate(q, -1.5742239441210462, 7);
  sqcRZGate(q, -2.250266160410681, 7);
  sqcRYGate(q, 1.5708150695778755, 8);
  sqcRZGate(q, -0.33633962398325506, 8);
  sqcRYGate(q, 1.5707932531692743, 9);
  sqcRZGate(q, -2.2502394067036544, 9);
  sqcRYGate(q, -1.5703940518004982, 10);
  sqcRZGate(q, 1.2344601577421432, 10);
  sqcRYGate(q, -3.141514854088462, 11);
  sqcRZGate(q, 0.8884827307627031, 11);

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
