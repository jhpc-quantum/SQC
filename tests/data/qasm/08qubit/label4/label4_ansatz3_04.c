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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -3.1415457580919934, 0);
  sqcRZGate(q, 0.30498214553511716, 0);
  sqcRYGate(q, -0.4930597528939087, 1);
  sqcRZGate(q, -3.1415792016814867, 1);
  sqcRYGate(q, -0.05612114304167935, 2);
  sqcRZGate(q, 0.015377314972001344, 2);
  sqcRYGate(q, -2.1401289566093324, 3);
  sqcRZGate(q, -1.2272424750153168e-07, 3);
  sqcRYGate(q, 0.23103577633448305, 4);
  sqcRZGate(q, -2.2133290214954355, 4);
  sqcRYGate(q, -1.5708703543319442, 5);
  sqcRZGate(q, 1.0191176823081702, 5);
  sqcRYGate(q, -0.00029755667576303324, 6);
  sqcRZGate(q, 2.1887704759058395, 6);
  sqcRYGate(q, -0.09018364946849022, 7);
  sqcRZGate(q, 0.0018834785957771107, 7);
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
  sqcRYGate(q, 3.141558611046354, 0);
  sqcRZGate(q, -1.5646608300258, 0);
  sqcRYGate(q, -1.3426986325579706, 1);
  sqcRZGate(q, 1.5707750131261564, 1);
  sqcRYGate(q, -0.00920384334410145, 2);
  sqcRZGate(q, 1.0078274503420246, 2);
  sqcRYGate(q, -1.570873273443123, 3);
  sqcRZGate(q, 2.5233218122344785, 3);
  sqcRYGate(q, 2.770100203441928e-06, 4);
  sqcRZGate(q, 1.0490257355514685, 4);
  sqcRYGate(q, 3.1415866257037193, 5);
  sqcRZGate(q, -2.2507484667943807, 5);
  sqcRYGate(q, 3.1410044661020193, 6);
  sqcRZGate(q, -1.4079542872962476, 6);
  sqcRYGate(q, 1.5707724399873724, 7);
  sqcRZGate(q, 1.0905131378380588, 7);
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
  sqcRYGate(q, -1.5708225128723023, 0);
  sqcRZGate(q, -2.6793862695755575, 0);
  sqcRYGate(q, 1.570778412732092, 1);
  sqcRZGate(q, -2.9438199050256504, 1);
  sqcRYGate(q, 3.141592243934087, 2);
  sqcRZGate(q, -0.5487542098412677, 2);
  sqcRYGate(q, 3.140976531308626, 3);
  sqcRZGate(q, -2.1884009353015688, 3);
  sqcRYGate(q, -1.663550457321016, 4);
  sqcRZGate(q, 0.4135513770236479, 4);
  sqcRYGate(q, 1.57075352761293, 5);
  sqcRZGate(q, -0.42029119896667055, 5);
  sqcRYGate(q, 3.141555539069298, 6);
  sqcRZGate(q, -2.989810940003087, 6);
  sqcRYGate(q, 2.9975488509669055, 7);
  sqcRZGate(q, -2.0360627575508143, 7);
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
  sqcRYGate(q, -6.32048136314018e-05, 0);
  sqcRZGate(q, -1.5178823106697994, 0);
  sqcRYGate(q, 3.1415552426955102, 1);
  sqcRZGate(q, 1.447086494891642, 1);
  sqcRYGate(q, 1.5707808549021915, 2);
  sqcRZGate(q, -1.5872518168281582, 2);
  sqcRYGate(q, 1.5708411310766515, 3);
  sqcRZGate(q, -0.1481957752794587, 3);
  sqcRYGate(q, -1.3944167064572355e-05, 4);
  sqcRZGate(q, 2.5171989730847857, 4);
  sqcRYGate(q, 3.141558178652047, 5);
  sqcRZGate(q, 2.72121550538785, 5);
  sqcRYGate(q, 3.1395867455880206, 6);
  sqcRZGate(q, -0.055814498622084756, 6);
  sqcRYGate(q, 1.1641848973213333, 7);
  sqcRZGate(q, 0.503025491234823, 7);
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
  sqcRYGate(q, 0.4640648195351425, 0);
  sqcRZGate(q, -1.3232338074710366, 0);
  sqcRYGate(q, -2.6865491554929664, 1);
  sqcRZGate(q, -0.3824980315162003, 1);
  sqcRYGate(q, 0.41677090514316806, 2);
  sqcRZGate(q, 0.9619481695610287, 2);
  sqcRYGate(q, -3.131004742738773, 3);
  sqcRZGate(q, -2.5863981646138456, 3);
  sqcRYGate(q, 1.5712248916968576, 4);
  sqcRZGate(q, -1.9387183818826212, 4);
  sqcRYGate(q, -1.570857456977593, 5);
  sqcRZGate(q, -0.5186272875311388, 5);
  sqcRYGate(q, 1.5707735294818912, 6);
  sqcRZGate(q, 1.983683744223965, 6);
  sqcRYGate(q, 1.4408117983667819, 7);
  sqcRZGate(q, -1.6471163073732855, 7);
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
  sqcRYGate(q, 0.00011328650363129356, 0);
  sqcRZGate(q, -0.7154149175864237, 0);
  sqcRYGate(q, 2.9584272842138858e-06, 1);
  sqcRZGate(q, 0.027379721260023082, 1);
  sqcRYGate(q, 3.1414812091057787, 2);
  sqcRZGate(q, 2.5167358291561475, 2);
  sqcRYGate(q, -3.1415255434068614, 3);
  sqcRZGate(q, 0.5561112020554734, 3);
  sqcRYGate(q, -1.555533219052915, 4);
  sqcRZGate(q, 2.911023032575936, 4);
  sqcRYGate(q, 3.1210656946722244, 5);
  sqcRZGate(q, 2.7117934107144075, 5);
  sqcRYGate(q, 3.1415723633890904, 6);
  sqcRZGate(q, -0.7457377143148065, 6);
  sqcRYGate(q, -1.5707971603994197, 7);
  sqcRZGate(q, 1.570797230588707, 7);
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
  sqcRYGate(q, 1.3467367237065029, 0);
  sqcRZGate(q, -2.35715193226789, 0);
  sqcRYGate(q, 2.0011413498264528, 1);
  sqcRZGate(q, 0.23271084978542766, 1);
  sqcRYGate(q, 0.5210081977197687, 2);
  sqcRZGate(q, 2.812695610783644, 2);
  sqcRYGate(q, 0.010589897191905697, 3);
  sqcRZGate(q, -2.328983697443317, 3);
  sqcRYGate(q, -1.569599326316284, 4);
  sqcRZGate(q, -1.5704089879606, 4);
  sqcRYGate(q, -3.141591655678488, 5);
  sqcRZGate(q, -1.1455458863558974, 5);
  sqcRYGate(q, -3.1415741031409414, 6);
  sqcRZGate(q, 0.4121953246982484, 6);
  sqcRYGate(q, -1.5707917018372564, 7);
  sqcRZGate(q, 1.7393491513971173, 7);
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
  sqcRYGate(q, -3.462505250809377e-05, 0);
  sqcRZGate(q, -1.6061739141492655, 0);
  sqcRYGate(q, -1.9673685914169968e-05, 1);
  sqcRZGate(q, -1.2089895462634184, 1);
  sqcRYGate(q, -3.1408133000347846, 2);
  sqcRZGate(q, 1.2021373715796564, 2);
  sqcRYGate(q, -1.0798085972929528e-05, 3);
  sqcRZGate(q, 1.6526140791310988, 3);
  sqcRYGate(q, -1.5707811069186122, 4);
  sqcRZGate(q, -1.5969023262856232, 4);
  sqcRYGate(q, -3.141584022666951, 5);
  sqcRZGate(q, -0.48686798820787275, 5);
  sqcRYGate(q, -1.5708652981662539, 6);
  sqcRZGate(q, -1.6146201899373782, 6);
  sqcRYGate(q, 0.006811182219600198, 7);
  sqcRZGate(q, -3.0605949339858665, 7);

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
