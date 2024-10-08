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

  sqcRYGate(q, -2.927447311514861, 0);
  sqcRYGate(q, -2.370433000607634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4383523099922069, 0);
  sqcRYGate(q, 0.1439865883727408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6568540752347007, 2);
  sqcRYGate(q, 1.34819339284775, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2049445322475869, 2);
  sqcRYGate(q, -0.09620693290870364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.011788802145439, 4);
  sqcRYGate(q, 2.1415603579327653, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.21810241877807143, 4);
  sqcRYGate(q, -0.12576504605314964, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3714288169188128, 6);
  sqcRYGate(q, -2.150094285818051, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.542700828331983, 6);
  sqcRYGate(q, 1.6830789091270033, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3350046673315596, 0);
  sqcRYGate(q, 1.1146795653834007, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9029376561220726, 0);
  sqcRYGate(q, 0.22750453588230635, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8214937423480295, 2);
  sqcRYGate(q, 1.9428287348653779, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.570964439905362, 2);
  sqcRYGate(q, 1.5707712374480822, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.1982443994201786, 4);
  sqcRYGate(q, -0.7005720147522059, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1415896292257157, 4);
  sqcRYGate(q, 2.139100065426672, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.8449681213009437, 1);
  sqcRYGate(q, -2.799571487776845, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.071302896070523, 1);
  sqcRYGate(q, 1.584966817613398, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7543866789112245, 3);
  sqcRYGate(q, 1.0569146001766143, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.570901961612857, 3);
  sqcRYGate(q, 1.5707940021497615, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.4472000538401337, 5);
  sqcRYGate(q, 1.5061088105480143, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 6.9692927852939474e-06, 5);
  sqcRYGate(q, -1.9547646219894428, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.004372185406244681, 0);
  sqcRYGate(q, 0.4105857298760752, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1187119370226783, 0);
  sqcRYGate(q, -1.5729842620981556, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8766940782859829, 2);
  sqcRYGate(q, 0.5540259150558574, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0962550798978006, 2);
  sqcRYGate(q, 0.4744060153199954, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5708642723319768, 4);
  sqcRYGate(q, 1.5707961400582116, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5707898016659332, 4);
  sqcRYGate(q, 0.15477205015065998, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.142813393311733, 6);
  sqcRYGate(q, 0.15312084636720344, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6396203277061994, 6);
  sqcRYGate(q, -2.0953145301370104, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6918005495667838, 0);
  sqcRYGate(q, 1.8048747083190175, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1948456869879696, 0);
  sqcRYGate(q, 1.5708468787477505, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8376532727553974, 2);
  sqcRYGate(q, 1.9894878811315966, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.14157577666616, 2);
  sqcRYGate(q, -0.2744504787398061, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.41877019836835316, 4);
  sqcRYGate(q, 2.9244993390303775, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5708162335064593, 4);
  sqcRYGate(q, -1.570812541993842, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0702178781275733, 1);
  sqcRYGate(q, 1.9360226828843112, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6018990998170966, 1);
  sqcRYGate(q, 3.08158819089567, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7675164076221277, 3);
  sqcRYGate(q, 1.4860537963432714, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.01063981347591625, 3);
  sqcRYGate(q, -0.00012620513098130127, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.8798261501708606, 5);
  sqcRYGate(q, -0.9431841575357843, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.8038548080053403, 5);
  sqcRYGate(q, -0.7470984213378973, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.1192687245917483, 0);
  sqcRYGate(q, 1.5393542768678334, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.141451140721514, 0);
  sqcRYGate(q, -6.166987545519476e-06, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.44436496935939834, 2);
  sqcRYGate(q, 2.790834652645626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8767540805682607e-05, 2);
  sqcRYGate(q, 0.000130394449024962, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2403900992390735, 4);
  sqcRYGate(q, 0.7116288329940534, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.009845131025096, 4);
  sqcRYGate(q, 0.7916737329606239, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5708094584452252, 6);
  sqcRYGate(q, -0.6593684043040202, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7104579939486832e-05, 6);
  sqcRYGate(q, 1.5708061964605426, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.419007660459818, 0);
  sqcRYGate(q, -2.4377106574117504, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7063392711669263, 0);
  sqcRYGate(q, -3.1414004065458774, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5768474403261834, 2);
  sqcRYGate(q, -1.3698736544562298, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.570802533312696, 2);
  sqcRYGate(q, -3.1415869031925676, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6262466494458492, 4);
  sqcRYGate(q, 0.47281026941203486, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5707968748559018, 4);
  sqcRYGate(q, -3.1415869935957987, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.6635047066491273, 1);
  sqcRYGate(q, 2.6291739568021577, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6080438526031566, 1);
  sqcRYGate(q, -1.5108830075421533, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5290107255941983, 3);
  sqcRYGate(q, -2.214790084736436, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5706757477257185, 3);
  sqcRYGate(q, 5.410236516567579e-06, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5709886036525424, 5);
  sqcRYGate(q, -0.22669293766596682, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5707972493799913, 5);
  sqcRYGate(q, -0.31716454874680095, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.8418669438741624, 0);
  sqcRYGate(q, -3.137931481992152, 1);
  sqcRYGate(q, -2.106314259696253, 2);
  sqcRYGate(q, -1.615363510873761, 3);
  sqcRYGate(q, -2.515348939545478, 4);
  sqcRYGate(q, 1.570582133232688, 5);
  sqcRYGate(q, 1.5708021602457416, 6);
  sqcRYGate(q, -1.5707980193167086, 7);

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
