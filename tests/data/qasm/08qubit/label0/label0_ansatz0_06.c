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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.03851192154997727, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.06762088008341866, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.0021135098031846607, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.0879156335924589, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.02546702093549391, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.03355995132900768, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.04609479690648496, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 1.0162563878382516, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.9449321406753688, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.06602981776142657, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.0133268513630296, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 1.5409194839014992, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 1.1515801280807523, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 1.2195062633360205, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.00017331882962201822, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.18096975777533694, 0);
  sqcRZGate(q, -0.09628107782521583, 1);
  sqcRZGate(q, -0.33896281323795985, 2);
  sqcRZGate(q, -0.37746824652758065, 3);
  sqcRZGate(q, -0.804786320136431, 4);
  sqcRZGate(q, 0.19006333735470823, 5);
  sqcRZGate(q, -0.6897772953097819, 6);
  sqcRZGate(q, -0.6045088003326363, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.25194401505632447, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.01903235338802118, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.185810887239737, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.4260431173256766, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.520506100811376, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.4182471817076094, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.7320311261897858, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.599607987295473, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.6907686949827437, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.018771652345307782, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3293787750126357, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.012559245639364627, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 1.2505114608010788, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 1.1870929701812591, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.5449337801805436, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.40873003720876544, 0);
  sqcRZGate(q, -0.39282730375716923, 1);
  sqcRZGate(q, -0.3806116315959717, 2);
  sqcRZGate(q, -0.6098648173288589, 3);
  sqcRZGate(q, -0.1495422705560881, 4);
  sqcRZGate(q, 0.032767263804248124, 5);
  sqcRZGate(q, -0.7338577560018755, 6);
  sqcRZGate(q, -0.5655427528956498, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.6219313130030144, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.15173708067190644, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.25297021302764255, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.7037633693342095, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.5172297137920399, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.0184520088624358, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.00563777255925223, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.07778010089869748, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.04766221157461241, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 1.3243662155121854, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.780335429503007, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.03319035028184858, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.609207400390615, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.6386138830615696, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.3177680284786304, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.35854079393926197, 0);
  sqcRZGate(q, -0.8123994574809619, 1);
  sqcRZGate(q, -0.5581019764827179, 2);
  sqcRZGate(q, -0.4603807739926891, 3);
  sqcRZGate(q, -0.3243282112352514, 4);
  sqcRZGate(q, -0.07168172834587498, 5);
  sqcRZGate(q, -0.4553564180965715, 6);
  sqcRZGate(q, -0.3972165751191853, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.5347873140157047, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.49430760622336883, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.013009634041830833, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.2975497169563145, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.21474664623061118, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.12443132575209828, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.03120672566832892, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.2438457707534106, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.10493395080866505, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.33174147273404225, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.017127740752825325, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.4159516881840835, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.5001421605324462, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.0534667974581133, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.24785499601506314, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.35340470939282814, 0);
  sqcRZGate(q, -0.5885252012784575, 1);
  sqcRZGate(q, -0.6270247959504568, 2);
  sqcRZGate(q, -0.4573926342870423, 3);
  sqcRZGate(q, -0.11572859812481837, 4);
  sqcRZGate(q, 0.09918140903632094, 5);
  sqcRZGate(q, -0.38011676811564205, 6);
  sqcRZGate(q, -0.524480820671083, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2503822541714891, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.1112876205418016, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.15855480263195543, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.2264939508574428, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.037317829988362014, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.1032250530778825, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.2370560444340124, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.7769852312179337, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.41390410606679395, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.03863795150449134, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.3246054655793748, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.17908129547441815, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.2871882847007456, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.2675594126649365, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.008947363528186423, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.18742251014995948, 0);
  sqcRZGate(q, -0.20875150734216186, 1);
  sqcRZGate(q, -0.4639244107358727, 2);
  sqcRZGate(q, -0.09724487785259846, 3);
  sqcRZGate(q, 0.17959982769919378, 4);
  sqcRZGate(q, -0.024417218490565797, 5);
  sqcRZGate(q, -0.19176480633418277, 6);
  sqcRZGate(q, -0.571575772032482, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.23272338488722655, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.23805079058839246, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.03735561642286503, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.7225603710765759, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.15473276452374646, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.21056287986515565, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.037405945115745784, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.42384101602262514, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.28704457812073625, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.5693425479818588, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.11405108099866572, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.6447411513172747, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.07591889193506372, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.014286649565964373, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.5847193641175207, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.1868561048847817, 0);
  sqcRZGate(q, 0.04759515025370221, 1);
  sqcRZGate(q, 0.006311333981361679, 2);
  sqcRZGate(q, -0.04710053736114159, 3);
  sqcRZGate(q, 0.851588904376612, 4);
  sqcRZGate(q, 0.005976838858279752, 5);
  sqcRZGate(q, 0.11644626127228515, 6);
  sqcRZGate(q, -0.04343711892420916, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.8051801169427338, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.7090894701259733, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.041001851861107004, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.5670612767093672, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.5028290065072318, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.05152904115908758, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.2343034636533664, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.048790023868499635, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.8860788585298014, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.5559884717132679, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.007395048455813892, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.6112928647502943, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.5206468593880772, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.009571122481101355, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.32706401641268074, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.17702054153769525, 0);
  sqcRZGate(q, -0.2313430315696338, 1);
  sqcRZGate(q, 0.011237853957804966, 2);
  sqcRZGate(q, 0.03256666292007143, 3);
  sqcRZGate(q, -0.021005430564857923, 4);
  sqcRZGate(q, 0.031794504892818466, 5);
  sqcRZGate(q, 0.0837776831114499, 6);
  sqcRZGate(q, 0.15064669006322778, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.009817867008954095, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.5561404911642487, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.23557029331601917, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.42023716935915023, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.022696142896246767, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.6919497718752633, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.4583702328182979, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.03568571552428992, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.0486685521604606, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.5937090309162997, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.05166346794578623, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -1.2603848125503214, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.43337001619013854, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.442909673009519, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.34096840516645055, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.0077540599196433135, 0);
  sqcRZGate(q, 0.2233239472383789, 1);
  sqcRZGate(q, -0.13382078312245765, 2);
  sqcRZGate(q, -0.08602523935886333, 3);
  sqcRZGate(q, -0.337781601219174, 4);
  sqcRZGate(q, 0.009780866442004427, 5);
  sqcRZGate(q, -0.0036445456762788653, 6);
  sqcRZGate(q, 0.3244258702926994, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.9546361391791213, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.23518521928379565, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.14803259478430544, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.23149761784267403, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.013330279495246945, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.0259421740812315, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.6459947377272816, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 1.6016365549415623, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.224544085817562, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.03195399143144341, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.08928278011537602, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -1.0212132348814933, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.2241341748795957, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.6024066089925022, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.41159828470171933, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.012638598296826242, 0);
  sqcRZGate(q, -0.005621971376724474, 1);
  sqcRZGate(q, 0.1239801860618991, 2);
  sqcRZGate(q, 0.2055614906601314, 3);
  sqcRZGate(q, 0.9495060301870047, 4);
  sqcRZGate(q, -0.06360651295324114, 5);
  sqcRZGate(q, 0.008253872363830416, 6);
  sqcRZGate(q, 0.24343436629932685, 7);

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
