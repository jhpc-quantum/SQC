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

  sqcRYGate(q, -1.352076284154224, 0);
  sqcRZGate(q, 2.4745146663709483, 0);
  sqcRYGate(q, 2.590657967531157, 1);
  sqcRZGate(q, 1.7888327736815643, 1);
  sqcRYGate(q, -2.6009270578300923, 2);
  sqcRZGate(q, -1.154609312435437, 2);
  sqcRYGate(q, -1.4536615322905053, 3);
  sqcRZGate(q, -0.986226064674952, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0533122336204919, 0);
  sqcRZGate(q, 1.097107729810269, 0);
  sqcRYGate(q, 2.0367079349628874, 1);
  sqcRZGate(q, 1.3129017036697208, 1);
  sqcRYGate(q, -2.0847465323444716, 2);
  sqcRZGate(q, -2.246910193697631, 2);
  sqcRYGate(q, -1.4430997271307193, 3);
  sqcRZGate(q, -1.6336890136126856, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8235565447127744, 0);
  sqcRZGate(q, -0.18396709363372846, 0);
  sqcRYGate(q, 0.7843847282581962, 1);
  sqcRZGate(q, -2.0437097114250915, 1);
  sqcRYGate(q, 0.1028745844999966, 2);
  sqcRZGate(q, 2.810954163482818, 2);
  sqcRYGate(q, 2.4007427154047125, 3);
  sqcRZGate(q, 1.120575245848604, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6415719711342085, 0);
  sqcRZGate(q, 1.1305096640284438, 0);
  sqcRYGate(q, 1.1982169925864863, 1);
  sqcRZGate(q, 1.9886863066932958, 1);
  sqcRYGate(q, 1.0332612917432142, 2);
  sqcRZGate(q, 2.8745125168145567, 2);
  sqcRYGate(q, 0.06222041557765467, 3);
  sqcRZGate(q, 2.8724720769219654, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2877066209543464, 0);
  sqcRZGate(q, 2.754337594699187, 0);
  sqcRYGate(q, -0.8975370746563897, 1);
  sqcRZGate(q, 1.4337966595816891, 1);
  sqcRYGate(q, 2.41946802352372, 2);
  sqcRZGate(q, -3.092412063700604, 2);
  sqcRYGate(q, 2.7293641654422283, 3);
  sqcRZGate(q, 1.3303514941582435, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7251616873073936, 0);
  sqcRZGate(q, -0.1841749534271203, 0);
  sqcRYGate(q, -2.446147890530007, 1);
  sqcRZGate(q, 1.2680892871311524, 1);
  sqcRYGate(q, -1.912554805491068, 2);
  sqcRZGate(q, -0.6602119941748739, 2);
  sqcRYGate(q, -2.4983292097760783, 3);
  sqcRZGate(q, 1.0731391041574483, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.8578727123344327, 0);
  sqcRZGate(q, -2.243609981524643, 0);
  sqcRYGate(q, 1.5871656385200423, 1);
  sqcRZGate(q, -1.621506194892436, 1);
  sqcRYGate(q, 1.3767447505601673, 2);
  sqcRZGate(q, 0.04961735513340936, 2);
  sqcRYGate(q, 0.9470732511011275, 3);
  sqcRZGate(q, -2.365807500886473, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5538906510719216, 0);
  sqcRZGate(q, 0.20525521712435424, 0);
  sqcRYGate(q, -0.4501301771469835, 1);
  sqcRZGate(q, -1.5460506040986939, 1);
  sqcRYGate(q, 1.6381724022819284, 2);
  sqcRZGate(q, 1.1278699949780184, 2);
  sqcRYGate(q, -2.6650642878475983, 3);
  sqcRZGate(q, -0.5500953112747972, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5577119524127168, 0);
  sqcRZGate(q, -0.9187216862572483, 0);
  sqcRYGate(q, 0.39043994540926974, 1);
  sqcRZGate(q, -1.0723473736332747, 1);
  sqcRYGate(q, -1.8146940142596695, 2);
  sqcRZGate(q, 2.372030277888077, 2);
  sqcRYGate(q, -0.7061957542946882, 3);
  sqcRZGate(q, 2.4847438069772374, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.4596581644932788, 0);
  sqcRZGate(q, -1.2083359527627808, 0);
  sqcRYGate(q, 1.7362773205284756, 1);
  sqcRZGate(q, 1.3853636997355268, 1);
  sqcRYGate(q, 0.7635552105928886, 2);
  sqcRZGate(q, -2.7439493470011715, 2);
  sqcRYGate(q, -2.4552765543393122, 3);
  sqcRZGate(q, 2.6987060842414197, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5611460794010583, 0);
  sqcRZGate(q, -0.47681110998513176, 0);
  sqcRYGate(q, 1.9965403416677336, 1);
  sqcRZGate(q, 0.8834535766603495, 1);
  sqcRYGate(q, -0.15808056278055688, 2);
  sqcRZGate(q, 0.8196505367037217, 2);
  sqcRYGate(q, 0.9583516642036206, 3);
  sqcRZGate(q, -0.6506940257422782, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.060034236425516, 0);
  sqcRZGate(q, 0.7658209944769144, 0);
  sqcRYGate(q, 1.5186652561718565, 1);
  sqcRZGate(q, -1.2178446879622369, 1);
  sqcRYGate(q, -1.1354404989200662, 2);
  sqcRZGate(q, 0.8446449219093468, 2);
  sqcRYGate(q, 0.162424622850954, 3);
  sqcRZGate(q, -3.1040833189943497, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2603694421125384, 0);
  sqcRZGate(q, -1.7303240732431955, 0);
  sqcRYGate(q, 2.0786449740025312, 1);
  sqcRZGate(q, -0.057138925553873184, 1);
  sqcRYGate(q, 0.05903523571991176, 2);
  sqcRZGate(q, -1.7254042495748037, 2);
  sqcRYGate(q, -1.3576307401836267, 3);
  sqcRZGate(q, -0.5466248950489945, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0782671825212624, 0);
  sqcRZGate(q, 1.220453771972493, 0);
  sqcRYGate(q, 2.378089414541808, 1);
  sqcRZGate(q, 2.832233370166157, 1);
  sqcRYGate(q, 2.510914282802997, 2);
  sqcRZGate(q, 0.9438356798828736, 2);
  sqcRYGate(q, 1.0604570832911133, 3);
  sqcRZGate(q, -1.5213931599186086, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.0321401581615595, 0);
  sqcRZGate(q, -1.388409469714742, 0);
  sqcRYGate(q, -0.7137604864382566, 1);
  sqcRZGate(q, 0.842437740124424, 1);
  sqcRYGate(q, -0.8014394645560455, 2);
  sqcRZGate(q, 0.706398635895691, 2);
  sqcRYGate(q, -1.4502211100235802, 3);
  sqcRZGate(q, -2.6105368190911515, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.1785622069873023, 0);
  sqcRZGate(q, -2.879035499835267, 0);
  sqcRYGate(q, -1.1058533362752856, 1);
  sqcRZGate(q, -1.7975409415490784, 1);
  sqcRYGate(q, 2.7865193292172297, 2);
  sqcRZGate(q, 0.015190388563955286, 2);
  sqcRYGate(q, -0.019491782378593885, 3);
  sqcRZGate(q, -2.907402167934171, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.809560515084245, 0);
  sqcRZGate(q, -2.6936371307585842, 0);
  sqcRYGate(q, 1.0007656912940612, 1);
  sqcRZGate(q, -0.8437045433034855, 1);
  sqcRYGate(q, -0.39170438045150396, 2);
  sqcRZGate(q, 1.5338509986183748, 2);
  sqcRYGate(q, 2.0555938566394234, 3);
  sqcRZGate(q, -0.9182640404528777, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8376685186375252, 0);
  sqcRZGate(q, 2.86340186908903, 0);
  sqcRYGate(q, -0.5328289506955188, 1);
  sqcRZGate(q, 0.1635571864857186, 1);
  sqcRYGate(q, -1.6309115424885143, 2);
  sqcRZGate(q, 1.084628259527844, 2);
  sqcRYGate(q, -1.202575394291027, 3);
  sqcRZGate(q, -2.7712129513655666, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.110024612449357, 0);
  sqcRZGate(q, 2.1555819461664174, 0);
  sqcRYGate(q, -0.9968963771773695, 1);
  sqcRZGate(q, -1.974626553988605, 1);
  sqcRYGate(q, -3.102180729025288, 2);
  sqcRZGate(q, 2.3847047582045673, 2);
  sqcRYGate(q, 0.09742611462072782, 3);
  sqcRZGate(q, -2.9161205600402718, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7260240217303311, 0);
  sqcRZGate(q, 0.5085002093654902, 0);
  sqcRYGate(q, -2.964212691611392, 1);
  sqcRZGate(q, 0.38600534674615883, 1);
  sqcRYGate(q, 1.5532703398919354, 2);
  sqcRZGate(q, -2.3599908165998063, 2);
  sqcRYGate(q, -0.665731842946107, 3);
  sqcRZGate(q, -2.228883292037371, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1986229930186685, 0);
  sqcRZGate(q, -2.344343108745222, 0);
  sqcRYGate(q, 1.403295759618996, 1);
  sqcRZGate(q, -2.255842236814403, 1);
  sqcRYGate(q, -0.061636273116895436, 2);
  sqcRZGate(q, -0.4199934233313467, 2);
  sqcRYGate(q, 1.5309237675161744, 3);
  sqcRZGate(q, -2.8132985626546945, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9131194369276397, 0);
  sqcRZGate(q, 1.5318239705347783, 0);
  sqcRYGate(q, -2.169328479127362, 1);
  sqcRZGate(q, -2.782725891372776, 1);
  sqcRYGate(q, -0.05244974751170428, 2);
  sqcRZGate(q, -0.7030515012873216, 2);
  sqcRYGate(q, 0.0586267193429413, 3);
  sqcRZGate(q, 2.0416313290159653, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8318517016627913, 0);
  sqcRZGate(q, -2.6909611131985853, 0);
  sqcRYGate(q, 3.1382397186457376, 1);
  sqcRZGate(q, -0.07683665542835247, 1);
  sqcRYGate(q, -2.528892503122606, 2);
  sqcRZGate(q, -2.899944154757464, 2);
  sqcRYGate(q, -1.4370151820956751, 3);
  sqcRZGate(q, -2.3215877960206908, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8901474291167393, 0);
  sqcRZGate(q, 3.1104008271955856, 0);
  sqcRYGate(q, -1.3945494990205567, 1);
  sqcRZGate(q, -1.4859188948415372, 1);
  sqcRYGate(q, 1.0581835444147405, 2);
  sqcRZGate(q, 2.252296993728007, 2);
  sqcRYGate(q, 0.5269498683932037, 3);
  sqcRZGate(q, 0.6359712060741183, 3);

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
