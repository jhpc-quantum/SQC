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

  sqcRYGate(q, -0.22596081082910854, 0);
  sqcRZGate(q, 2.3042389877508183, 0);
  sqcRYGate(q, 0.26656380220717774, 1);
  sqcRZGate(q, 0.5859216288464684, 1);
  sqcRYGate(q, -2.63542670409871, 2);
  sqcRZGate(q, 0.3649034842010801, 2);
  sqcRYGate(q, 0.3614588249579853, 3);
  sqcRZGate(q, 2.277266869877103, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7589768344816404, 0);
  sqcRZGate(q, -0.37140444307410553, 0);
  sqcRYGate(q, -1.290971431644718, 1);
  sqcRZGate(q, -1.5397988547970272, 1);
  sqcRYGate(q, -2.0568156715168495, 2);
  sqcRZGate(q, -2.2790872183813016, 2);
  sqcRYGate(q, -2.0697862432640024, 3);
  sqcRZGate(q, -0.5220247062227248, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.674495872958123, 0);
  sqcRZGate(q, -2.572243909731515, 0);
  sqcRYGate(q, 1.7359513249909868, 1);
  sqcRZGate(q, 3.082479926698926, 1);
  sqcRYGate(q, 3.110267670512691, 2);
  sqcRZGate(q, 1.1773563307915889, 2);
  sqcRYGate(q, 1.4607822964699817, 3);
  sqcRZGate(q, -1.4793824509788338, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.007600756810474, 0);
  sqcRZGate(q, 1.0351462000607095, 0);
  sqcRYGate(q, 1.939122041853615, 1);
  sqcRZGate(q, 0.8933222110697442, 1);
  sqcRYGate(q, -0.2865046408533738, 2);
  sqcRZGate(q, 0.461916719697971, 2);
  sqcRYGate(q, 2.1271835350199355, 3);
  sqcRZGate(q, 0.7065939558412321, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.07074499073835307, 0);
  sqcRZGate(q, -1.1345099464891133, 0);
  sqcRYGate(q, -2.4559625695094534, 1);
  sqcRZGate(q, 2.046363395560391, 1);
  sqcRYGate(q, 0.8134814605673948, 2);
  sqcRZGate(q, 1.4515095284487665, 2);
  sqcRYGate(q, 2.7091940116417494, 3);
  sqcRZGate(q, 2.1544902968911, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3416468135308035, 0);
  sqcRZGate(q, 2.3061504471204017, 0);
  sqcRYGate(q, 2.6226600296605995, 1);
  sqcRZGate(q, -0.1360658825994213, 1);
  sqcRYGate(q, 0.12269893690808406, 2);
  sqcRZGate(q, -1.1475239035416163, 2);
  sqcRYGate(q, -1.9887171372082486, 3);
  sqcRZGate(q, -1.096744424901412, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6339756081191819, 0);
  sqcRZGate(q, -0.10379302862716866, 0);
  sqcRYGate(q, 2.794199561306553, 1);
  sqcRZGate(q, -1.2726280059105848, 1);
  sqcRYGate(q, 1.4416309310131075, 2);
  sqcRZGate(q, 0.4158375477349488, 2);
  sqcRYGate(q, -1.9720606009239958, 3);
  sqcRZGate(q, -0.05379061574018472, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4299660676410815, 0);
  sqcRZGate(q, 0.6401086824416016, 0);
  sqcRYGate(q, 1.4237141475170223, 1);
  sqcRZGate(q, -0.8202761620441645, 1);
  sqcRYGate(q, 0.5805416564399399, 2);
  sqcRZGate(q, -2.202435477562431, 2);
  sqcRYGate(q, -0.4036825747345906, 3);
  sqcRZGate(q, 0.5787347187448493, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.837426829909883, 0);
  sqcRZGate(q, 2.48594933126703, 0);
  sqcRYGate(q, -2.6826994586381296, 1);
  sqcRZGate(q, -0.27422500607089884, 1);
  sqcRYGate(q, 0.9300988977652187, 2);
  sqcRZGate(q, -1.2459701927925533, 2);
  sqcRYGate(q, 1.959117200439028, 3);
  sqcRZGate(q, -0.5569962082370782, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8552636773533173, 0);
  sqcRZGate(q, -2.6103060580636206, 0);
  sqcRYGate(q, -1.9953698918474245, 1);
  sqcRZGate(q, -2.9489512996487752, 1);
  sqcRYGate(q, -2.548924747888844, 2);
  sqcRZGate(q, 0.8777949951001868, 2);
  sqcRYGate(q, 0.6316909571833229, 3);
  sqcRZGate(q, -0.2675629359055174, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8712747528237719, 0);
  sqcRZGate(q, 0.15680615198094155, 0);
  sqcRYGate(q, 3.012834814707924, 1);
  sqcRZGate(q, -2.837030728446211, 1);
  sqcRYGate(q, -1.6230645377528168, 2);
  sqcRZGate(q, -2.5289140471529237, 2);
  sqcRYGate(q, 0.3720113894001629, 3);
  sqcRZGate(q, 0.8991571853615995, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8182792661893714, 0);
  sqcRZGate(q, 1.6316251142623042, 0);
  sqcRYGate(q, -1.0314029124474218, 1);
  sqcRZGate(q, 2.0092476025171297, 1);
  sqcRYGate(q, 3.0492216184384735, 2);
  sqcRZGate(q, -1.2189067625517467, 2);
  sqcRYGate(q, -1.0063557026041359, 3);
  sqcRZGate(q, -2.5842783627698447, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.39375022777580454, 0);
  sqcRZGate(q, 1.9105406327778436, 0);
  sqcRYGate(q, -0.49167113088652903, 1);
  sqcRZGate(q, 0.6855181524914018, 1);
  sqcRYGate(q, 3.1354156567893057, 2);
  sqcRZGate(q, -0.22686607728744443, 2);
  sqcRYGate(q, 3.052089228978771, 3);
  sqcRZGate(q, -2.465047167270953, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6693180023814662, 0);
  sqcRZGate(q, 2.510614169319072, 0);
  sqcRYGate(q, 2.4462415308102026, 1);
  sqcRZGate(q, 0.03938122842348601, 1);
  sqcRYGate(q, 2.8692763649945374, 2);
  sqcRZGate(q, 1.331786852222602, 2);
  sqcRYGate(q, 0.9040049485215575, 3);
  sqcRZGate(q, -1.9373718138435176, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
