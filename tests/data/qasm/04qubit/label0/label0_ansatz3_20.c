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

  sqcRYGate(q, -2.75602556681263, 0);
  sqcRZGate(q, 0.6292727942572114, 0);
  sqcRYGate(q, -0.500910151686039, 1);
  sqcRZGate(q, 2.9676416439361697, 1);
  sqcRYGate(q, -0.4965722670119659, 2);
  sqcRZGate(q, -2.9710835006719116, 2);
  sqcRYGate(q, 2.973386596453199, 3);
  sqcRZGate(q, -0.9499891413251422, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.2403248067207613, 0);
  sqcRZGate(q, 2.423438973823164, 0);
  sqcRYGate(q, -1.8031285316926304, 1);
  sqcRZGate(q, 0.7502537268812863, 1);
  sqcRYGate(q, 1.2755705703402442, 2);
  sqcRZGate(q, 1.8392753111984597, 2);
  sqcRYGate(q, -0.8086702725952345, 3);
  sqcRZGate(q, 3.010659503801468, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.9572845042997242, 0);
  sqcRZGate(q, 2.1962796984011996, 0);
  sqcRYGate(q, -1.3954617936199893, 1);
  sqcRZGate(q, -1.819443005858434, 1);
  sqcRYGate(q, 2.182635906691281, 2);
  sqcRZGate(q, -2.697687345473802, 2);
  sqcRYGate(q, -2.702790083772522, 3);
  sqcRZGate(q, 1.9283979495128734, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.5011328467100906, 0);
  sqcRZGate(q, 0.0615872813176237, 0);
  sqcRYGate(q, -1.9711105106306448, 1);
  sqcRZGate(q, -0.8310149657328115, 1);
  sqcRYGate(q, -0.9005288435757164, 2);
  sqcRZGate(q, 0.2943030159433686, 2);
  sqcRYGate(q, -2.8105419158045724, 3);
  sqcRZGate(q, 0.873935576618824, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.045396382890833, 0);
  sqcRZGate(q, 0.7572059718531847, 0);
  sqcRYGate(q, 1.9764666281301662, 1);
  sqcRZGate(q, 0.7619081780379887, 1);
  sqcRYGate(q, 3.0883138514867072, 2);
  sqcRZGate(q, 1.2466425667799177, 2);
  sqcRYGate(q, -2.886204317730026, 3);
  sqcRZGate(q, -2.543053268942209, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9407895865149261, 0);
  sqcRZGate(q, 2.3259131423385546, 0);
  sqcRYGate(q, 2.125280644705475, 1);
  sqcRZGate(q, -1.3983222335257364, 1);
  sqcRYGate(q, -1.922022349543762, 2);
  sqcRZGate(q, -2.013202690074007, 2);
  sqcRYGate(q, -0.9736746814026294, 3);
  sqcRZGate(q, 3.0865213535048284, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.2489305150461691, 0);
  sqcRZGate(q, 2.026323460550201, 0);
  sqcRYGate(q, 0.836917699308519, 1);
  sqcRZGate(q, 2.7548705565273908, 1);
  sqcRYGate(q, 2.7155669964455402, 2);
  sqcRZGate(q, 0.5500070295781105, 2);
  sqcRYGate(q, 1.6392963773381082, 3);
  sqcRZGate(q, 3.0683584830877666, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.0386115992827594, 0);
  sqcRZGate(q, -2.9836202756612913, 0);
  sqcRYGate(q, -1.2554612020134643, 1);
  sqcRZGate(q, 2.1001896943287592, 1);
  sqcRYGate(q, 2.863651110041211, 2);
  sqcRZGate(q, -0.37328951236161906, 2);
  sqcRYGate(q, 2.8692110224718568, 3);
  sqcRZGate(q, 1.9364536007199837, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.5191006217251006, 0);
  sqcRZGate(q, -1.8509683699715769, 0);
  sqcRYGate(q, -2.8075996242661, 1);
  sqcRZGate(q, -0.8858213128353007, 1);
  sqcRYGate(q, -1.5320592800845247, 2);
  sqcRZGate(q, 1.812393978198511, 2);
  sqcRYGate(q, 2.7724132168641518, 3);
  sqcRZGate(q, -2.492938246315158, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.9810359921454004, 0);
  sqcRZGate(q, 2.268991789287338, 0);
  sqcRYGate(q, 1.3306184732721746, 1);
  sqcRZGate(q, 2.345045217988014, 1);
  sqcRYGate(q, 2.3423577687464916, 2);
  sqcRZGate(q, -0.014928695021911409, 2);
  sqcRYGate(q, 1.7454590154217389, 3);
  sqcRZGate(q, -1.4099590010056895, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9392852064135555, 0);
  sqcRZGate(q, -1.8307978901440218, 0);
  sqcRYGate(q, 2.3661945107794313, 1);
  sqcRZGate(q, 2.5413405205086637, 1);
  sqcRYGate(q, -1.4696912211132558, 2);
  sqcRZGate(q, 2.304716680171559, 2);
  sqcRYGate(q, 0.523010470812804, 3);
  sqcRZGate(q, -1.7987735370174154, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.514576798810102, 0);
  sqcRZGate(q, 0.44427217524589935, 0);
  sqcRYGate(q, 2.6185418082669085, 1);
  sqcRZGate(q, -2.806643246719664, 1);
  sqcRYGate(q, -0.1362619279745827, 2);
  sqcRZGate(q, -0.5664280511831651, 2);
  sqcRYGate(q, -2.0236281859955376, 3);
  sqcRZGate(q, -2.0449900435597987, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.9973236403257664, 0);
  sqcRZGate(q, -1.269594548133843, 0);
  sqcRYGate(q, 0.7415938542472076, 1);
  sqcRZGate(q, 2.4792288267258105, 1);
  sqcRYGate(q, -2.2956751777650215, 2);
  sqcRZGate(q, 3.022623829829823, 2);
  sqcRYGate(q, 3.1144239320594473, 3);
  sqcRZGate(q, -2.6445642121826394, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5894538043564759, 0);
  sqcRZGate(q, 1.5284729279066074, 0);
  sqcRYGate(q, 1.6965882275276762, 1);
  sqcRZGate(q, -1.4691934834085787, 1);
  sqcRYGate(q, -1.2008660639851325, 2);
  sqcRZGate(q, 2.8849384872648023, 2);
  sqcRYGate(q, 2.648174319070944, 3);
  sqcRZGate(q, -0.7387779583966815, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.3440247143668655, 0);
  sqcRZGate(q, 1.6874825041313128, 0);
  sqcRYGate(q, -0.6696611888867753, 1);
  sqcRZGate(q, 0.36055759998926806, 1);
  sqcRYGate(q, 0.9899027210230547, 2);
  sqcRZGate(q, 3.1289451966941204, 2);
  sqcRYGate(q, 0.13041067813223325, 3);
  sqcRZGate(q, -1.980610820506177, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.3388515451716141, 0);
  sqcRZGate(q, -1.1551626423338892, 0);
  sqcRYGate(q, -2.2451415109068416, 1);
  sqcRZGate(q, -0.4382091664536722, 1);
  sqcRYGate(q, 0.7306009381809461, 2);
  sqcRZGate(q, 0.2323582932362118, 2);
  sqcRYGate(q, -0.21575624122671402, 3);
  sqcRZGate(q, 0.5570698795610927, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.651032296801795, 0);
  sqcRZGate(q, -2.077564677275726, 0);
  sqcRYGate(q, -1.6421491561374246, 1);
  sqcRZGate(q, -1.7256862086199245, 1);
  sqcRYGate(q, -1.5023615003224222, 2);
  sqcRZGate(q, -2.9326657683063053, 2);
  sqcRYGate(q, 0.33845330822506714, 3);
  sqcRZGate(q, -0.06384495092002228, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7304404018869848, 0);
  sqcRZGate(q, -2.136206919854284, 0);
  sqcRYGate(q, 2.481102827552454, 1);
  sqcRZGate(q, 1.4331596626010112, 1);
  sqcRYGate(q, -2.3613650378291244, 2);
  sqcRZGate(q, 0.23483301117910127, 2);
  sqcRYGate(q, 1.6490080408790728, 3);
  sqcRZGate(q, 1.826131135513121, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.2785971162190837, 0);
  sqcRZGate(q, 2.468786418116372, 0);
  sqcRYGate(q, -3.0501749921604335, 1);
  sqcRZGate(q, 1.7964888334712823, 1);
  sqcRYGate(q, 3.1284588939248694, 2);
  sqcRZGate(q, 1.100520646882113, 2);
  sqcRYGate(q, 2.1732624137366, 3);
  sqcRZGate(q, 0.31450714694426113, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.1143114302324246, 0);
  sqcRZGate(q, -1.089067016788307, 0);
  sqcRYGate(q, 0.18714822293994882, 1);
  sqcRZGate(q, -2.1151028364158346, 1);
  sqcRYGate(q, 2.9748197401968057, 2);
  sqcRZGate(q, 0.8119497411617743, 2);
  sqcRYGate(q, -1.1227866436583378, 3);
  sqcRZGate(q, 0.03751847352911437, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.4748143845180967, 0);
  sqcRZGate(q, 2.4537920907995963, 0);
  sqcRYGate(q, 0.6317430768084129, 1);
  sqcRZGate(q, 1.507707263679135, 1);
  sqcRYGate(q, 1.7747550346189485, 2);
  sqcRZGate(q, -2.9428648556430255, 2);
  sqcRYGate(q, -2.8352743235846387, 3);
  sqcRZGate(q, -2.7660017960253156, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9766235629490856, 0);
  sqcRZGate(q, 2.6394023815126055, 0);
  sqcRYGate(q, -0.8929597124144495, 1);
  sqcRZGate(q, 0.8335465909565029, 1);
  sqcRYGate(q, -2.0196132790753887, 2);
  sqcRZGate(q, 1.9288603181607298, 2);
  sqcRYGate(q, 2.1468961574060277, 3);
  sqcRZGate(q, 2.4324129621585677, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1457747107225087, 0);
  sqcRZGate(q, -0.732978839934276, 0);
  sqcRYGate(q, -2.0483034161136597, 1);
  sqcRZGate(q, 1.8727188406830821, 1);
  sqcRYGate(q, 1.0183450596193768, 2);
  sqcRZGate(q, -1.9447541066942557, 2);
  sqcRYGate(q, 2.663658983647675, 3);
  sqcRZGate(q, 1.4363322548467272, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.6811968332305058, 0);
  sqcRZGate(q, 0.230056743171741, 0);
  sqcRYGate(q, -0.7790878920215745, 1);
  sqcRZGate(q, 2.6925837603908844, 1);
  sqcRYGate(q, -1.0375100423280523, 2);
  sqcRZGate(q, -0.2530909714003499, 2);
  sqcRYGate(q, -1.5910741098236547, 3);
  sqcRZGate(q, -0.6122113742648141, 3);

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
