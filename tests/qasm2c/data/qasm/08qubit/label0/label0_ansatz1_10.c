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

  sqcRYGate(q, 2.734741616356003, 0);
  sqcRZGate(q, 1.8928199172842692, 0);
  sqcRYGate(q, 2.0799208195179126, 1);
  sqcRZGate(q, 0.4372497515850184, 1);
  sqcRYGate(q, 2.9878163691389554, 2);
  sqcRZGate(q, -1.7001546482963876, 2);
  sqcRYGate(q, 3.140059551124223, 3);
  sqcRZGate(q, -0.07735999952230224, 3);
  sqcRYGate(q, -0.5351712424549461, 4);
  sqcRZGate(q, 0.018835951991759258, 4);
  sqcRYGate(q, -3.1411859054923705, 5);
  sqcRZGate(q, -0.3347992768078602, 5);
  sqcRYGate(q, 0.9937456690311954, 6);
  sqcRZGate(q, 2.208246461048919, 6);
  sqcRYGate(q, 1.0590405178892972, 7);
  sqcRZGate(q, -1.2749384249386064, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7320520697045367, 0);
  sqcRZGate(q, -0.56898839843989, 0);
  sqcRYGate(q, -0.8035664211289967, 1);
  sqcRZGate(q, 0.09787096342675561, 1);
  sqcRYGate(q, -0.04223932835443741, 2);
  sqcRZGate(q, 1.6635052072716006, 2);
  sqcRYGate(q, -0.09551532968926857, 3);
  sqcRZGate(q, 1.6775294300918353, 3);
  sqcRYGate(q, 0.5696760563028977, 4);
  sqcRZGate(q, -0.9014473642692009, 4);
  sqcRYGate(q, -0.683828743042968, 5);
  sqcRZGate(q, -0.29978705842604914, 5);
  sqcRYGate(q, -0.1861251483615627, 6);
  sqcRZGate(q, 2.503823993247508, 6);
  sqcRYGate(q, -2.892701929688879, 7);
  sqcRZGate(q, -1.901098366716015, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.0401872573779958, 0);
  sqcRZGate(q, 0.11528437978241257, 0);
  sqcRYGate(q, -0.9772721745388822, 1);
  sqcRZGate(q, -2.8318277443840327, 1);
  sqcRYGate(q, 2.9670393178379704, 2);
  sqcRZGate(q, 2.8235563217019877, 2);
  sqcRYGate(q, -1.7532797517807168, 3);
  sqcRZGate(q, 1.6743674149619716, 3);
  sqcRYGate(q, 0.0037788376523437183, 4);
  sqcRZGate(q, -0.5171045385145758, 4);
  sqcRYGate(q, 0.603620336478851, 5);
  sqcRZGate(q, -2.986478960145981, 5);
  sqcRYGate(q, -2.3244491337168975, 6);
  sqcRZGate(q, -0.45829009858568626, 6);
  sqcRYGate(q, -2.267595352377065, 7);
  sqcRZGate(q, 1.6889561021854318, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.3589402556677417, 0);
  sqcRZGate(q, 2.4291340927771787, 0);
  sqcRYGate(q, -2.108899004620157, 1);
  sqcRZGate(q, 0.7818770327648443, 1);
  sqcRYGate(q, -3.1336563077443165, 2);
  sqcRZGate(q, -2.008409536716182, 2);
  sqcRYGate(q, 1.7416774824570451, 3);
  sqcRZGate(q, -0.8782847999899346, 3);
  sqcRYGate(q, -0.03546680430597959, 4);
  sqcRZGate(q, 1.9017110251154772, 4);
  sqcRYGate(q, -2.8837916403820762, 5);
  sqcRZGate(q, 1.2941479461562264, 5);
  sqcRYGate(q, -3.1306783350615075, 6);
  sqcRZGate(q, 1.2816795197989999, 6);
  sqcRYGate(q, 0.015619853439316184, 7);
  sqcRZGate(q, -2.416574677644813, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.182675295613958, 0);
  sqcRZGate(q, -2.2378482106194064, 0);
  sqcRYGate(q, -0.16934773107851428, 1);
  sqcRZGate(q, -2.6284891866834417, 1);
  sqcRYGate(q, -0.03811093713638769, 2);
  sqcRZGate(q, -2.1419108316731132, 2);
  sqcRYGate(q, 0.12186549564277625, 3);
  sqcRZGate(q, -2.3263541694262604, 3);
  sqcRYGate(q, 0.00018820664712571045, 4);
  sqcRZGate(q, 1.2476433899931854, 4);
  sqcRYGate(q, -0.6261383377303664, 5);
  sqcRZGate(q, 0.12104842130127214, 5);
  sqcRYGate(q, -2.7591291091905306, 6);
  sqcRZGate(q, 2.891335269100688, 6);
  sqcRYGate(q, 1.7578195406460122, 7);
  sqcRZGate(q, -0.43973076186462917, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9090555683243955, 0);
  sqcRZGate(q, -1.9253514416097306, 0);
  sqcRYGate(q, 0.9994133091404418, 1);
  sqcRZGate(q, -0.6702817850448727, 1);
  sqcRYGate(q, -3.1384725535135343, 2);
  sqcRZGate(q, -2.238803989498145, 2);
  sqcRYGate(q, -1.6692443669190773, 3);
  sqcRZGate(q, -0.3808567918917536, 3);
  sqcRYGate(q, 0.032162578354355986, 4);
  sqcRZGate(q, 0.18164814131552567, 4);
  sqcRYGate(q, -1.9856580767674248, 5);
  sqcRZGate(q, -1.7763345861907087, 5);
  sqcRYGate(q, 2.0443982407265464, 6);
  sqcRZGate(q, 1.251888601682711, 6);
  sqcRYGate(q, -0.596882861346758, 7);
  sqcRZGate(q, -0.1222337288763411, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.12906737988326647, 0);
  sqcRZGate(q, 1.436271119354779, 0);
  sqcRYGate(q, 2.1956949824270855, 1);
  sqcRZGate(q, 2.7599626943296287, 1);
  sqcRYGate(q, -3.079512563937451, 2);
  sqcRZGate(q, 2.6294763929979776, 2);
  sqcRYGate(q, -2.7478144479794606, 3);
  sqcRZGate(q, -0.13099084987261023, 3);
  sqcRYGate(q, -3.1213987125660823, 4);
  sqcRZGate(q, -2.466781850404014, 4);
  sqcRYGate(q, -0.8131018105496528, 5);
  sqcRZGate(q, -0.2805667157771632, 5);
  sqcRYGate(q, 0.007600086075042614, 6);
  sqcRZGate(q, -3.061173290093411, 6);
  sqcRYGate(q, 3.139718918663667, 7);
  sqcRZGate(q, -2.374765640862194, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.957129705078552, 0);
  sqcRZGate(q, -1.8394615884026504, 0);
  sqcRYGate(q, 2.122506966905707, 1);
  sqcRZGate(q, 1.6765672237873386, 1);
  sqcRYGate(q, 0.6225287883388653, 2);
  sqcRZGate(q, -2.727788117578997, 2);
  sqcRYGate(q, -0.15823017317801874, 3);
  sqcRZGate(q, 2.999726353319204, 3);
  sqcRYGate(q, 1.5050100764720522, 4);
  sqcRZGate(q, 0.5361255076441892, 4);
  sqcRYGate(q, -1.2928792889313594, 5);
  sqcRZGate(q, -1.2781532353295058, 5);
  sqcRYGate(q, 1.7490370264701252, 6);
  sqcRZGate(q, 1.0361457439253732, 6);
  sqcRYGate(q, 0.7760911818517231, 7);
  sqcRZGate(q, -1.95006958462768, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.5899584625423357, 0);
  sqcRZGate(q, 2.3354839389915547, 0);
  sqcRYGate(q, 2.9973548896917386, 1);
  sqcRZGate(q, 0.33164318957121486, 1);
  sqcRYGate(q, -3.132113150289084, 2);
  sqcRZGate(q, -2.7017802966120015, 2);
  sqcRYGate(q, -0.339337224783188, 3);
  sqcRZGate(q, 1.0027499361631182, 3);
  sqcRYGate(q, 3.109797783764096, 4);
  sqcRZGate(q, 0.03326782269341688, 4);
  sqcRYGate(q, 2.5296136168268677, 5);
  sqcRZGate(q, -0.05282461318284521, 5);
  sqcRYGate(q, -0.0009729320398121064, 6);
  sqcRZGate(q, 2.0929882466893974, 6);
  sqcRYGate(q, 3.122649576269469, 7);
  sqcRZGate(q, 1.232045667301677, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6445340336598153, 0);
  sqcRZGate(q, 1.263854997171129, 0);
  sqcRYGate(q, 0.9725821429982515, 1);
  sqcRZGate(q, 2.5311426062002416, 1);
  sqcRYGate(q, -2.4239444427460017, 2);
  sqcRZGate(q, -3.095187691374348, 2);
  sqcRYGate(q, -0.0016448593208009399, 3);
  sqcRZGate(q, 2.179632898750746, 3);
  sqcRYGate(q, -3.1368800565647352, 4);
  sqcRZGate(q, 2.177590725324884, 4);
  sqcRYGate(q, 2.6159923233533653, 5);
  sqcRZGate(q, -0.0808336546291679, 5);
  sqcRYGate(q, 1.2784187653477126, 6);
  sqcRZGate(q, -1.8195961422734623, 6);
  sqcRYGate(q, 0.8991853858358914, 7);
  sqcRZGate(q, -1.8128900918286188, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.744748254163096, 0);
  sqcRZGate(q, 1.550661121828119, 0);
  sqcRYGate(q, -0.023012253434853396, 1);
  sqcRZGate(q, -0.007851271547360676, 1);
  sqcRYGate(q, 0.2309884736440857, 2);
  sqcRZGate(q, 0.3228661859652652, 2);
  sqcRYGate(q, -2.4201246221408574, 3);
  sqcRZGate(q, 0.004547958212083536, 3);
  sqcRYGate(q, 0.016693904998124835, 4);
  sqcRZGate(q, 0.6747271901633233, 4);
  sqcRYGate(q, 2.709945276078426, 5);
  sqcRZGate(q, -0.49674750681166024, 5);
  sqcRYGate(q, 0.0023213666785757425, 6);
  sqcRZGate(q, -0.18681770827943733, 6);
  sqcRYGate(q, 2.753603410372728, 7);
  sqcRZGate(q, -2.151457826047969, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4660834792860253, 0);
  sqcRZGate(q, 1.6143296161329843, 0);
  sqcRYGate(q, 2.159964853607386, 1);
  sqcRZGate(q, 0.04246064133751771, 1);
  sqcRYGate(q, -1.781440180658416, 2);
  sqcRZGate(q, -3.122274598965077, 2);
  sqcRYGate(q, -2.6910700994421863, 3);
  sqcRZGate(q, 3.105603051857674, 3);
  sqcRYGate(q, 2.3752150161826537, 4);
  sqcRZGate(q, 2.156071267791944, 4);
  sqcRYGate(q, 0.2159604404307407, 5);
  sqcRZGate(q, 0.2340865622100324, 5);
  sqcRYGate(q, 0.6897983182273615, 6);
  sqcRZGate(q, -0.1464398017446511, 6);
  sqcRYGate(q, 2.8664833597461112, 7);
  sqcRZGate(q, -1.3543356974246086, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.49718162951423484, 0);
  sqcRZGate(q, 2.459724295751909, 0);
  sqcRYGate(q, 1.5748514560620335, 1);
  sqcRZGate(q, 0.0003768996972084437, 1);
  sqcRYGate(q, 0.05313089117860059, 2);
  sqcRZGate(q, -0.2625533850757886, 2);
  sqcRYGate(q, 3.0848156450881357, 3);
  sqcRZGate(q, 1.818586029278443, 3);
  sqcRYGate(q, -3.118347092991704, 4);
  sqcRZGate(q, -1.0086046129899282, 4);
  sqcRYGate(q, 0.0038401673826946587, 5);
  sqcRZGate(q, 1.077241899606508, 5);
  sqcRYGate(q, 0.03826324050563823, 6);
  sqcRZGate(q, 0.23416033679889647, 6);
  sqcRYGate(q, 0.8281992030874639, 7);
  sqcRZGate(q, 0.26198133006232993, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5733292258171638, 0);
  sqcRZGate(q, -3.136530026472087, 0);
  sqcRYGate(q, -2.0328988372585117, 1);
  sqcRZGate(q, -1.567422077376656, 1);
  sqcRYGate(q, -0.018230955045306675, 2);
  sqcRZGate(q, 1.8475842537670804, 2);
  sqcRYGate(q, -0.03291951024176143, 3);
  sqcRZGate(q, 2.9982485656984594, 3);
  sqcRYGate(q, 0.7198839848007914, 4);
  sqcRZGate(q, -1.781246243740041, 4);
  sqcRYGate(q, 3.070966705273142, 5);
  sqcRZGate(q, -0.41488305635695677, 5);
  sqcRYGate(q, -2.821898448745365, 6);
  sqcRZGate(q, -1.5432380005278121, 6);
  sqcRYGate(q, -1.6629873953180958, 7);
  sqcRZGate(q, 0.8253146963265624, 7);

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
