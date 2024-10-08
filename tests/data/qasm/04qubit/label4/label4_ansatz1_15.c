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

  sqcRYGate(q, 1.1579717499452566, 0);
  sqcRZGate(q, -0.2450696016893135, 0);
  sqcRYGate(q, -0.40878140085286463, 1);
  sqcRZGate(q, -3.128707046059734, 1);
  sqcRYGate(q, -2.067619227304405, 2);
  sqcRZGate(q, 0.6933519015892092, 2);
  sqcRYGate(q, -2.7560670462183356, 3);
  sqcRZGate(q, 0.0406768667037003, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3949499554845288, 0);
  sqcRZGate(q, 0.12112544259508783, 0);
  sqcRYGate(q, 0.005592083617996124, 1);
  sqcRZGate(q, -2.4208092749921795, 1);
  sqcRYGate(q, 1.5391865128927282, 2);
  sqcRZGate(q, 0.7074770285831855, 2);
  sqcRYGate(q, 2.5893017669491503, 3);
  sqcRZGate(q, -2.2280985353979634, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.17482154133602035, 0);
  sqcRZGate(q, -1.0036102101952025, 0);
  sqcRYGate(q, -0.7178994125573961, 1);
  sqcRZGate(q, -1.2300627127085328, 1);
  sqcRYGate(q, -1.4304123276696705, 2);
  sqcRZGate(q, -1.5017326262041084, 2);
  sqcRYGate(q, -1.9487178131319083, 3);
  sqcRZGate(q, -1.6119096498472634, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0521006350124036, 0);
  sqcRZGate(q, 1.7670223444724273, 0);
  sqcRYGate(q, -2.4206051016144317, 1);
  sqcRZGate(q, 3.103947039206226, 1);
  sqcRYGate(q, -1.2814527410057053, 2);
  sqcRZGate(q, 1.2206217986623367, 2);
  sqcRYGate(q, -3.1337150019417384, 3);
  sqcRZGate(q, -0.05469861155868827, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8119030597630443, 0);
  sqcRZGate(q, 0.8003897884173954, 0);
  sqcRYGate(q, 0.7044451790864577, 1);
  sqcRZGate(q, 2.1377491761778233, 1);
  sqcRYGate(q, 1.4776877684196421, 2);
  sqcRZGate(q, -1.1197212901384361, 2);
  sqcRYGate(q, -2.6503759452421316, 3);
  sqcRZGate(q, -2.779585574144104, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7692075184893903, 0);
  sqcRZGate(q, -1.7297778892144449, 0);
  sqcRYGate(q, -0.45164670306444776, 1);
  sqcRZGate(q, -2.5188157920215293, 1);
  sqcRYGate(q, -1.1827727951528313, 2);
  sqcRZGate(q, 2.3335406676086623, 2);
  sqcRYGate(q, 1.3184194346809583, 3);
  sqcRZGate(q, -0.45543643643534454, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.19198868798927848, 0);
  sqcRZGate(q, 0.3603047619692257, 0);
  sqcRYGate(q, 1.577116964024274, 1);
  sqcRZGate(q, -2.5315599959608583, 1);
  sqcRYGate(q, -0.9068091425591103, 2);
  sqcRZGate(q, -2.736504620973538, 2);
  sqcRYGate(q, -0.5133321878648759, 3);
  sqcRZGate(q, -0.5225075243118732, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6883770602748394, 0);
  sqcRZGate(q, -1.162348999968037, 0);
  sqcRYGate(q, 1.8462934681070762, 1);
  sqcRZGate(q, -0.27303101392080187, 1);
  sqcRYGate(q, -0.3135387446561833, 2);
  sqcRZGate(q, -1.2969563769166887, 2);
  sqcRYGate(q, 2.0449574355845943, 3);
  sqcRZGate(q, -1.3261167851592999, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0266802399356996, 0);
  sqcRZGate(q, 1.106565737520861, 0);
  sqcRYGate(q, 0.9490661299915816, 1);
  sqcRZGate(q, -0.5017188271013115, 1);
  sqcRYGate(q, 0.9762660965826839, 2);
  sqcRZGate(q, -1.537552891530355, 2);
  sqcRYGate(q, -0.224687665179407, 3);
  sqcRZGate(q, 2.845828389584944, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9273200496198557, 0);
  sqcRZGate(q, 1.2958097267877942, 0);
  sqcRYGate(q, 2.032080681378532, 1);
  sqcRZGate(q, 1.9426391008153518, 1);
  sqcRYGate(q, -0.5726988080850938, 2);
  sqcRZGate(q, 0.9753757421154082, 2);
  sqcRYGate(q, -2.9641091705666374, 3);
  sqcRZGate(q, -1.142284272368394, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.1038609454066153, 0);
  sqcRZGate(q, -0.22531706533730492, 0);
  sqcRYGate(q, 2.851649691433561, 1);
  sqcRZGate(q, 0.6936166290743, 1);
  sqcRYGate(q, -2.4996954407566676, 2);
  sqcRZGate(q, 2.585278136104201, 2);
  sqcRYGate(q, -0.33907030582641895, 3);
  sqcRZGate(q, 2.3162200481852833, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3548217522924506, 0);
  sqcRZGate(q, 2.9860459574413136, 0);
  sqcRYGate(q, 2.8312442465981555, 1);
  sqcRZGate(q, 1.2087041657278315, 1);
  sqcRYGate(q, -1.448435473776717, 2);
  sqcRZGate(q, 2.1923982306411625, 2);
  sqcRYGate(q, 1.907620421805861, 3);
  sqcRZGate(q, 2.417172950843478, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.02593025964070229, 0);
  sqcRZGate(q, 1.200789182364521, 0);
  sqcRYGate(q, 2.9343416642252858, 1);
  sqcRZGate(q, 0.5836361490226674, 1);
  sqcRYGate(q, -0.12486515731019399, 2);
  sqcRZGate(q, 1.7279091080545133, 2);
  sqcRYGate(q, 0.28788690603113626, 3);
  sqcRZGate(q, -1.6952038122495994, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.887463059219668, 0);
  sqcRZGate(q, -2.027605796349124, 0);
  sqcRYGate(q, -0.8877743165655393, 1);
  sqcRZGate(q, -3.1412075352936686, 1);
  sqcRYGate(q, 2.5578759544429652, 2);
  sqcRZGate(q, 0.7743471149865735, 2);
  sqcRYGate(q, 2.0810066987163722, 3);
  sqcRZGate(q, -1.0719925146088878, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3821816254458588, 0);
  sqcRZGate(q, -0.680152347066482, 0);
  sqcRYGate(q, -0.565982747291936, 1);
  sqcRZGate(q, 0.7727778490501261, 1);
  sqcRYGate(q, -2.0839018346070146, 2);
  sqcRZGate(q, -1.0550495996617384, 2);
  sqcRYGate(q, 2.6962512756259955, 3);
  sqcRZGate(q, -0.1943916541146452, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5798272350943208, 0);
  sqcRZGate(q, -0.3283877860858251, 0);
  sqcRYGate(q, 1.4456954107435278, 1);
  sqcRZGate(q, -2.395927114967806, 1);
  sqcRYGate(q, -1.979146957414299, 2);
  sqcRZGate(q, -0.3751199977653458, 2);
  sqcRYGate(q, -2.8686545905930685, 3);
  sqcRZGate(q, -1.457858948636293, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4628370510250317, 0);
  sqcRZGate(q, 0.698605245574815, 0);
  sqcRYGate(q, 1.0851756778275767, 1);
  sqcRZGate(q, -1.9608492500263082, 1);
  sqcRYGate(q, -2.5933874667338808, 2);
  sqcRZGate(q, -2.5470681823950354, 2);
  sqcRYGate(q, 0.5130882827745173, 3);
  sqcRZGate(q, 3.057028707552346, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5996400351385445, 0);
  sqcRZGate(q, 0.7205392270079658, 0);
  sqcRYGate(q, -2.12607387632103, 1);
  sqcRZGate(q, -1.1395539861849446, 1);
  sqcRYGate(q, 2.623646229247078, 2);
  sqcRZGate(q, -2.4948197419457023, 2);
  sqcRYGate(q, -2.9014260401836314, 3);
  sqcRZGate(q, 2.692260437814118, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5595519000160509, 0);
  sqcRZGate(q, -2.2443231791048657, 0);
  sqcRYGate(q, 2.194805822775547, 1);
  sqcRZGate(q, -2.8284030845980275, 1);
  sqcRYGate(q, 1.7382571750053408, 2);
  sqcRZGate(q, -0.8244545065206967, 2);
  sqcRYGate(q, 0.4862127839071136, 3);
  sqcRZGate(q, 2.5885690715722327, 3);

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
