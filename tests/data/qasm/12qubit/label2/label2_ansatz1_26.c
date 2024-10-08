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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 0.9960365687007844, 0);
  sqcRZGate(q, -1.2619653534372213, 0);
  sqcRYGate(q, -1.9289749816232222, 1);
  sqcRZGate(q, -1.6852944112380521, 1);
  sqcRYGate(q, -0.002604873385237196, 2);
  sqcRZGate(q, -2.187625782352815, 2);
  sqcRYGate(q, 0.6893655305416422, 3);
  sqcRZGate(q, 3.1059660061685452, 3);
  sqcRYGate(q, -0.03367223444267495, 4);
  sqcRZGate(q, 2.589590902068273, 4);
  sqcRYGate(q, 3.1415474724103296, 5);
  sqcRZGate(q, 0.21938203745400112, 5);
  sqcRYGate(q, -0.7623894521771986, 6);
  sqcRZGate(q, 0.22520782290695696, 6);
  sqcRYGate(q, 2.7615796270405104, 7);
  sqcRZGate(q, -2.941537925735678, 7);
  sqcRYGate(q, -3.121800262749853, 8);
  sqcRZGate(q, -2.4442020236499125, 8);
  sqcRYGate(q, -3.079641494522813, 9);
  sqcRZGate(q, -0.8291149104311816, 9);
  sqcRYGate(q, -2.43735504139619, 10);
  sqcRZGate(q, 0.5267797838604542, 10);
  sqcRYGate(q, 2.343515519709366, 11);
  sqcRZGate(q, 2.8434728271730747, 11);
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
  sqcRYGate(q, 1.6244035104657835, 0);
  sqcRZGate(q, -1.9123927031205277, 0);
  sqcRYGate(q, -0.6470889319070009, 1);
  sqcRZGate(q, 0.38887018481954627, 1);
  sqcRYGate(q, 0.8160951200403395, 2);
  sqcRZGate(q, -2.533953951675728, 2);
  sqcRYGate(q, -2.498231439188826, 3);
  sqcRZGate(q, -0.5410521842177245, 3);
  sqcRYGate(q, -0.3708628148497644, 4);
  sqcRZGate(q, 3.0617378028683264, 4);
  sqcRYGate(q, 0.006559340527973134, 5);
  sqcRZGate(q, 2.431625994981799, 5);
  sqcRYGate(q, -1.9474901756215743, 6);
  sqcRZGate(q, -1.5575920285259832, 6);
  sqcRYGate(q, -0.024146091486868144, 7);
  sqcRZGate(q, -0.47989641326452664, 7);
  sqcRYGate(q, 0.0010159293125093782, 8);
  sqcRZGate(q, 2.203540425994446, 8);
  sqcRYGate(q, 3.014276993294974, 9);
  sqcRZGate(q, 1.0573147525267474, 9);
  sqcRYGate(q, 2.1109615927107326, 10);
  sqcRZGate(q, -1.2319502601469594, 10);
  sqcRYGate(q, -0.04099043062432184, 11);
  sqcRZGate(q, 1.3326147363648975, 11);
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
  sqcRYGate(q, -0.2502591741685638, 0);
  sqcRZGate(q, 2.1866189757219683, 0);
  sqcRYGate(q, 0.3090228982326267, 1);
  sqcRZGate(q, 1.493684605071275, 1);
  sqcRYGate(q, 1.9711594249744335, 2);
  sqcRZGate(q, 0.5825562385091941, 2);
  sqcRYGate(q, -3.068899595109437, 3);
  sqcRZGate(q, 2.2380715519849548, 3);
  sqcRYGate(q, -0.4324345607409086, 4);
  sqcRZGate(q, 2.286361105764732, 4);
  sqcRYGate(q, 3.0889430935297986, 5);
  sqcRZGate(q, 1.0697917422935808, 5);
  sqcRYGate(q, -0.31567822342472224, 6);
  sqcRZGate(q, -1.5024115606943154, 6);
  sqcRYGate(q, -0.4294860481455632, 7);
  sqcRZGate(q, 2.9005736561551414, 7);
  sqcRYGate(q, -3.1197922770150046, 8);
  sqcRZGate(q, 2.952833178176058, 8);
  sqcRYGate(q, -2.044898773244766, 9);
  sqcRZGate(q, -3.0334013755869544, 9);
  sqcRYGate(q, 0.8559465646511649, 10);
  sqcRZGate(q, 2.928595564688613, 10);
  sqcRYGate(q, -2.4770330943103978, 11);
  sqcRZGate(q, 1.1981417313808214, 11);
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
  sqcRYGate(q, 1.9202486357811648, 0);
  sqcRZGate(q, 0.6862695833355534, 0);
  sqcRYGate(q, -0.20103504174837822, 1);
  sqcRZGate(q, 2.827243405990713, 1);
  sqcRYGate(q, 0.6798784005824289, 2);
  sqcRZGate(q, -1.3488369806748468, 2);
  sqcRYGate(q, -3.099770293057881, 3);
  sqcRZGate(q, -1.588924329849876, 3);
  sqcRYGate(q, -0.036347098338028475, 4);
  sqcRZGate(q, 0.6762454608497759, 4);
  sqcRYGate(q, -0.30544804405457937, 5);
  sqcRZGate(q, 1.4891553829554816, 5);
  sqcRYGate(q, -0.7093748668551747, 6);
  sqcRZGate(q, 1.1539318632455573, 6);
  sqcRYGate(q, 0.8025117127670801, 7);
  sqcRZGate(q, 1.3888814812381256, 7);
  sqcRYGate(q, 2.238222205374849, 8);
  sqcRZGate(q, -0.19897471244277734, 8);
  sqcRYGate(q, -0.2202526759054999, 9);
  sqcRZGate(q, 1.0832659248076224, 9);
  sqcRYGate(q, 3.0964158986535866, 10);
  sqcRZGate(q, 0.6610548647879084, 10);
  sqcRYGate(q, 0.11168389072685833, 11);
  sqcRZGate(q, -0.3210776066984611, 11);
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
  sqcRYGate(q, 0.9831960468585937, 0);
  sqcRZGate(q, 3.0455810457942607, 0);
  sqcRYGate(q, 2.6414477802017404, 1);
  sqcRZGate(q, -0.14330792199366815, 1);
  sqcRYGate(q, -0.23630341170309066, 2);
  sqcRZGate(q, -1.950790565256547, 2);
  sqcRYGate(q, 0.006644820678421759, 3);
  sqcRZGate(q, 3.1157888937527267, 3);
  sqcRYGate(q, -0.03234053964043789, 4);
  sqcRZGate(q, 1.1390764528652801, 4);
  sqcRYGate(q, 0.27100538647661754, 5);
  sqcRZGate(q, -1.117976293336283, 5);
  sqcRYGate(q, -0.8357721948709749, 6);
  sqcRZGate(q, 1.0482990594941555, 6);
  sqcRYGate(q, -0.6837428465845816, 7);
  sqcRZGate(q, -1.7088174706310184, 7);
  sqcRYGate(q, -3.1399980500252633, 8);
  sqcRZGate(q, 2.0386428109050456, 8);
  sqcRYGate(q, 0.005529242148562651, 9);
  sqcRZGate(q, 1.2214853488572002, 9);
  sqcRYGate(q, 0.7212350064606516, 10);
  sqcRZGate(q, -1.5030268587655078, 10);
  sqcRYGate(q, 1.7058917717888695, 11);
  sqcRZGate(q, 1.6080661304076953, 11);
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
  sqcRYGate(q, -2.4363005153925834, 0);
  sqcRZGate(q, 0.5591875684702012, 0);
  sqcRYGate(q, 2.013049160659712, 1);
  sqcRZGate(q, 0.45064655488516525, 1);
  sqcRYGate(q, -0.3146831157024845, 2);
  sqcRZGate(q, -0.4384539211566869, 2);
  sqcRYGate(q, -0.04890394216572158, 3);
  sqcRZGate(q, -0.5046645098269265, 3);
  sqcRYGate(q, 3.0848506424717574, 4);
  sqcRZGate(q, 2.254078555816583, 4);
  sqcRYGate(q, -3.124402593027542, 5);
  sqcRZGate(q, -0.25834312666356524, 5);
  sqcRYGate(q, -3.1415109958802407, 6);
  sqcRZGate(q, -2.5054878251533914, 6);
  sqcRYGate(q, 3.1400101491727046, 7);
  sqcRZGate(q, -1.7070475572912212, 7);
  sqcRYGate(q, -3.1321720618103988, 8);
  sqcRZGate(q, 2.088785722430702, 8);
  sqcRYGate(q, -2.048734148648775, 9);
  sqcRZGate(q, -2.3643970692073477, 9);
  sqcRYGate(q, 0.40705019232387823, 10);
  sqcRZGate(q, -0.23525616632088653, 10);
  sqcRYGate(q, 1.5627095490007203, 11);
  sqcRZGate(q, 2.0904598767261864, 11);
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
  sqcRYGate(q, -2.025349748949524, 0);
  sqcRZGate(q, 2.2055312991844636, 0);
  sqcRYGate(q, -2.1718527028945225, 1);
  sqcRZGate(q, -3.032920785368381, 1);
  sqcRYGate(q, -1.270024157599969, 2);
  sqcRZGate(q, -1.41630438153591, 2);
  sqcRYGate(q, 0.04084416562874025, 3);
  sqcRZGate(q, 2.6984749486686885, 3);
  sqcRYGate(q, 1.4956109875199823, 4);
  sqcRZGate(q, -2.3174304162065678, 4);
  sqcRYGate(q, -0.1510340969621904, 5);
  sqcRZGate(q, 2.880617929595851, 5);
  sqcRYGate(q, -0.7247390055462813, 6);
  sqcRZGate(q, -1.889001149926682, 6);
  sqcRYGate(q, 0.6740937154411055, 7);
  sqcRZGate(q, 2.2785574678479206, 7);
  sqcRYGate(q, 0.00017455587215530388, 8);
  sqcRZGate(q, 0.15548820446073638, 8);
  sqcRYGate(q, 3.136933416539089, 9);
  sqcRZGate(q, -1.2600922678004087, 9);
  sqcRYGate(q, 1.0299546899869338, 10);
  sqcRZGate(q, -1.0325983122994895, 10);
  sqcRYGate(q, -0.9852960122980637, 11);
  sqcRZGate(q, -1.9563316754165254, 11);
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
  sqcRYGate(q, -3.0591849375766684, 0);
  sqcRZGate(q, 1.5557328265040518, 0);
  sqcRYGate(q, -0.6946004227238527, 1);
  sqcRZGate(q, 1.1227027129920275, 1);
  sqcRYGate(q, -2.6862542935803573, 2);
  sqcRZGate(q, 0.8650629882860406, 2);
  sqcRYGate(q, 1.446976075952086, 3);
  sqcRZGate(q, -0.3642310614565345, 3);
  sqcRYGate(q, 0.009853769351172659, 4);
  sqcRZGate(q, -1.397424428658803, 4);
  sqcRYGate(q, -3.1360829776803456, 5);
  sqcRZGate(q, -0.7438062451166795, 5);
  sqcRYGate(q, 0.13511405627398093, 6);
  sqcRZGate(q, -0.3610310676529238, 6);
  sqcRYGate(q, 0.02975634580538336, 7);
  sqcRZGate(q, 2.896460611983946, 7);
  sqcRYGate(q, 2.2402152339825694, 8);
  sqcRZGate(q, 2.557207291788892, 8);
  sqcRYGate(q, -1.6005695210676487, 9);
  sqcRZGate(q, 2.0449688355238522, 9);
  sqcRYGate(q, 1.5667935637981454, 10);
  sqcRZGate(q, -1.5202782794891423, 10);
  sqcRYGate(q, 1.6905848946584388, 11);
  sqcRZGate(q, -1.0893012534315458, 11);
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
  sqcRYGate(q, 0.5694021944693253, 0);
  sqcRZGate(q, -0.4169424694097188, 0);
  sqcRYGate(q, 0.40877274499627425, 1);
  sqcRZGate(q, 0.6231165525941273, 1);
  sqcRYGate(q, -1.8212540712610732, 2);
  sqcRZGate(q, -2.306154893806896, 2);
  sqcRYGate(q, -0.015990809821318445, 3);
  sqcRZGate(q, 1.1093013471512991, 3);
  sqcRYGate(q, -0.44569015423752273, 4);
  sqcRZGate(q, -1.7989451258997775, 4);
  sqcRYGate(q, 2.4326838018717534, 5);
  sqcRZGate(q, 1.8138335483809929, 5);
  sqcRYGate(q, -0.2953176812192151, 6);
  sqcRZGate(q, -2.3543182385899546, 6);
  sqcRYGate(q, 1.1240051526301071, 7);
  sqcRZGate(q, 3.0169437980084695, 7);
  sqcRYGate(q, 0.0019235465041209981, 8);
  sqcRZGate(q, 2.395225978917001, 8);
  sqcRYGate(q, 0.37830147944695547, 9);
  sqcRZGate(q, -1.9825887413937595, 9);
  sqcRYGate(q, -2.0478943472256517, 10);
  sqcRZGate(q, 1.771608425945845, 10);
  sqcRYGate(q, 1.1437793979549076, 11);
  sqcRZGate(q, -0.628845151372712, 11);
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
  sqcRYGate(q, -0.08618396800485593, 0);
  sqcRZGate(q, -0.11084174192383145, 0);
  sqcRYGate(q, 1.3728913910850578, 1);
  sqcRZGate(q, -0.6150354016956969, 1);
  sqcRYGate(q, -2.965275451288335, 2);
  sqcRZGate(q, -2.91996073801355, 2);
  sqcRYGate(q, -2.9975226798988497, 3);
  sqcRZGate(q, 2.0538943043942517, 3);
  sqcRYGate(q, -3.1281657803491747, 4);
  sqcRZGate(q, 2.587654571130876, 4);
  sqcRYGate(q, 3.1315619197846654, 5);
  sqcRZGate(q, -1.3266898100027162, 5);
  sqcRYGate(q, -3.0609066394317557, 6);
  sqcRZGate(q, -2.621544714314059, 6);
  sqcRYGate(q, 0.34961797045333665, 7);
  sqcRZGate(q, 2.909877185893279, 7);
  sqcRYGate(q, -3.1385987492149767, 8);
  sqcRZGate(q, 0.3067026822077308, 8);
  sqcRYGate(q, -2.67398340565192, 9);
  sqcRZGate(q, 0.9618992877897493, 9);
  sqcRYGate(q, 2.9881093241027887, 10);
  sqcRZGate(q, 1.0768200646912902, 10);
  sqcRYGate(q, -2.6086692930581408, 11);
  sqcRZGate(q, 1.7143813543162556, 11);
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
  sqcRYGate(q, 1.4285460903581733, 0);
  sqcRZGate(q, -2.524177210357016, 0);
  sqcRYGate(q, 0.763681857713162, 1);
  sqcRZGate(q, -1.4576301432539944, 1);
  sqcRYGate(q, 0.1333209673917772, 2);
  sqcRZGate(q, -2.4549242278926373, 2);
  sqcRYGate(q, 2.867416504907235, 3);
  sqcRZGate(q, 0.8202984189307184, 3);
  sqcRYGate(q, -2.0728100306290766, 4);
  sqcRZGate(q, -0.8052097280945212, 4);
  sqcRYGate(q, 0.6559938120115382, 5);
  sqcRZGate(q, -2.4780637334268656, 5);
  sqcRYGate(q, -0.029774085625483972, 6);
  sqcRZGate(q, 0.5380590138141308, 6);
  sqcRYGate(q, 2.522972458766787, 7);
  sqcRZGate(q, -1.7750247075609602, 7);
  sqcRYGate(q, 3.1410831349396586, 8);
  sqcRZGate(q, 1.5924320271245618, 8);
  sqcRYGate(q, 2.831735305337637, 9);
  sqcRZGate(q, -2.301453162671156, 9);
  sqcRYGate(q, 1.4880102157239872, 10);
  sqcRZGate(q, -1.3418300067558304, 10);
  sqcRYGate(q, -2.13244305919146, 11);
  sqcRZGate(q, 1.2545226869679649, 11);
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
  sqcRYGate(q, -0.6411305436381305, 0);
  sqcRZGate(q, -1.623516685402716, 0);
  sqcRYGate(q, -1.8309112343127043, 1);
  sqcRZGate(q, 2.469790185546272, 1);
  sqcRYGate(q, 2.9286048848254285, 2);
  sqcRZGate(q, -1.8177159059339163, 2);
  sqcRYGate(q, -3.0047263860167654, 3);
  sqcRZGate(q, 1.0822382935631534, 3);
  sqcRYGate(q, -0.1626879766862439, 4);
  sqcRZGate(q, 0.44674630716101127, 4);
  sqcRYGate(q, 0.013640022633383143, 5);
  sqcRZGate(q, 2.491826298976125, 5);
  sqcRYGate(q, 0.5218650037514792, 6);
  sqcRZGate(q, 2.842123531578965, 6);
  sqcRYGate(q, 2.810599540360875, 7);
  sqcRZGate(q, 1.9369714704089516, 7);
  sqcRYGate(q, 3.1324562559120506, 8);
  sqcRZGate(q, -0.5972357048571642, 8);
  sqcRYGate(q, -0.6575175538501227, 9);
  sqcRZGate(q, -0.45008634299185346, 9);
  sqcRYGate(q, 1.31494523877517, 10);
  sqcRZGate(q, 0.16255580528044158, 10);
  sqcRYGate(q, -1.1143532246731784, 11);
  sqcRZGate(q, 1.259235020390627, 11);
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
  sqcRYGate(q, 1.5021992361173666, 0);
  sqcRZGate(q, -1.5767854847682812, 0);
  sqcRYGate(q, 2.352325326630138, 1);
  sqcRZGate(q, -1.006704119107268, 1);
  sqcRYGate(q, 2.4438184600544886, 2);
  sqcRZGate(q, 2.291909598779752, 2);
  sqcRYGate(q, -0.392746613804257, 3);
  sqcRZGate(q, -1.6465663907976942, 3);
  sqcRYGate(q, -1.2356770520928801, 4);
  sqcRZGate(q, -0.26031213708676404, 4);
  sqcRYGate(q, -0.0009707747503320263, 5);
  sqcRZGate(q, 0.601583424736856, 5);
  sqcRYGate(q, -0.03516623177660031, 6);
  sqcRZGate(q, -0.6532892982875111, 6);
  sqcRYGate(q, 0.210246650366134, 7);
  sqcRZGate(q, 1.4266652886534958, 7);
  sqcRYGate(q, -0.0024073652926661637, 8);
  sqcRZGate(q, -2.964355009221877, 8);
  sqcRYGate(q, -0.4350244536037797, 9);
  sqcRZGate(q, -0.6685502761725176, 9);
  sqcRYGate(q, -2.893087120013511, 10);
  sqcRZGate(q, 2.082949888014085, 10);
  sqcRYGate(q, 0.9607591363300116, 11);
  sqcRZGate(q, -2.318743861390262, 11);
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
  sqcRYGate(q, -0.7929351820731441, 0);
  sqcRZGate(q, 0.8908731523156773, 0);
  sqcRYGate(q, 1.9833558347166658, 1);
  sqcRZGate(q, 2.578308397723773, 1);
  sqcRYGate(q, 0.005322476630635009, 2);
  sqcRZGate(q, 2.649036984793903, 2);
  sqcRYGate(q, 0.2889041792766745, 3);
  sqcRZGate(q, 0.6460197368100502, 3);
  sqcRYGate(q, 2.021784266806568, 4);
  sqcRZGate(q, 0.5600117290926385, 4);
  sqcRYGate(q, 0.006114461472285154, 5);
  sqcRZGate(q, -0.26206927488457504, 5);
  sqcRYGate(q, 1.9638463370149015, 6);
  sqcRZGate(q, 2.566192915856636, 6);
  sqcRYGate(q, 2.796489505050027, 7);
  sqcRZGate(q, 1.1655032958745746, 7);
  sqcRYGate(q, 3.1322364585592055, 8);
  sqcRZGate(q, 2.7733897404032106, 8);
  sqcRYGate(q, -1.2424481609078182, 9);
  sqcRZGate(q, 3.072699120707633, 9);
  sqcRYGate(q, 0.29854387843744945, 10);
  sqcRZGate(q, -2.633786109499526, 10);
  sqcRYGate(q, 0.08037460634791958, 11);
  sqcRZGate(q, -2.600740064920238, 11);
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
  sqcRYGate(q, -1.665139264288198, 0);
  sqcRZGate(q, -2.3932960452617067, 0);
  sqcRYGate(q, 1.7663544160888982, 1);
  sqcRZGate(q, -0.833509945313063, 1);
  sqcRYGate(q, -3.076813706499408, 2);
  sqcRZGate(q, -2.9274092492975416, 2);
  sqcRYGate(q, 3.0321237732913624, 3);
  sqcRZGate(q, 1.8261002880311166, 3);
  sqcRYGate(q, 0.820155789552738, 4);
  sqcRZGate(q, -0.9429602976305028, 4);
  sqcRYGate(q, -3.140908932240627, 5);
  sqcRZGate(q, 0.4133969262208479, 5);
  sqcRYGate(q, 0.21966547986130258, 6);
  sqcRZGate(q, -0.48457583084644856, 6);
  sqcRYGate(q, -1.6005448993310847, 7);
  sqcRZGate(q, 0.09540465834655718, 7);
  sqcRYGate(q, -0.004448308458012735, 8);
  sqcRZGate(q, -2.4769615074367, 8);
  sqcRYGate(q, -1.9984603278300312, 9);
  sqcRZGate(q, 2.3287862331566167, 9);
  sqcRYGate(q, -2.517872766670454, 10);
  sqcRZGate(q, 1.2882072740065775, 10);
  sqcRYGate(q, 0.5098284881644469, 11);
  sqcRZGate(q, -1.4957046749947416, 11);
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
  sqcRYGate(q, 1.5342454512423904, 0);
  sqcRZGate(q, 2.5610595172832373, 0);
  sqcRYGate(q, 2.5192380731445723, 1);
  sqcRZGate(q, -0.46881147661103295, 1);
  sqcRYGate(q, 3.0454830146394536, 2);
  sqcRZGate(q, -1.6017122363098162, 2);
  sqcRYGate(q, 1.5745449212424294, 3);
  sqcRZGate(q, -2.87831347828223, 3);
  sqcRYGate(q, 1.726208969731521, 4);
  sqcRZGate(q, -1.7149984752110115, 4);
  sqcRYGate(q, -0.00046308101513342897, 5);
  sqcRZGate(q, 2.0599649193591683, 5);
  sqcRYGate(q, -0.2519206522661735, 6);
  sqcRZGate(q, 0.9915778758847305, 6);
  sqcRYGate(q, 2.584737639086064, 7);
  sqcRZGate(q, -1.754525390643473, 7);
  sqcRYGate(q, 1.587810129923753, 8);
  sqcRZGate(q, 1.2444076118600942, 8);
  sqcRYGate(q, 2.5190577963237137, 9);
  sqcRZGate(q, 2.167142751825576, 9);
  sqcRYGate(q, -1.5301015919930119, 10);
  sqcRZGate(q, -2.4328557855464563, 10);
  sqcRYGate(q, -1.8775915055225418, 11);
  sqcRZGate(q, -1.114221918166202, 11);
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
  sqcRYGate(q, 0.7430523496705357, 0);
  sqcRZGate(q, -0.25122748470725187, 0);
  sqcRYGate(q, 0.16336658928367243, 1);
  sqcRZGate(q, -0.37589362973743334, 1);
  sqcRYGate(q, -0.009970164340440846, 2);
  sqcRZGate(q, -1.6275437647680107, 2);
  sqcRYGate(q, 0.18572354347006073, 3);
  sqcRZGate(q, 3.02463746242401, 3);
  sqcRYGate(q, -3.1329676207571335, 4);
  sqcRZGate(q, 1.9479504124893705, 4);
  sqcRYGate(q, -3.138282589932638, 5);
  sqcRZGate(q, 0.6160950524576888, 5);
  sqcRYGate(q, -2.911220410205737, 6);
  sqcRZGate(q, -0.8998536698805893, 6);
  sqcRYGate(q, 3.133258506390951, 7);
  sqcRZGate(q, 1.581163814946638, 7);
  sqcRYGate(q, 0.0018288292726701895, 8);
  sqcRZGate(q, -2.645386777766195, 8);
  sqcRYGate(q, -2.0301467040729886, 9);
  sqcRZGate(q, 1.2147027951542957, 9);
  sqcRYGate(q, 2.5618614376696245, 10);
  sqcRZGate(q, -3.004515227125625, 10);
  sqcRYGate(q, 0.9647121273386245, 11);
  sqcRZGate(q, -2.2083644030493734, 11);
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
  sqcRYGate(q, -0.5248421907267318, 0);
  sqcRZGate(q, -1.1546044437397154, 0);
  sqcRYGate(q, -2.2352605671685577, 1);
  sqcRZGate(q, -2.611437682916771, 1);
  sqcRYGate(q, 3.035681771563916, 2);
  sqcRZGate(q, -1.4793349394627597, 2);
  sqcRYGate(q, 1.4814420812039337, 3);
  sqcRZGate(q, -0.6601167239627488, 3);
  sqcRYGate(q, 1.2896122472124125, 4);
  sqcRZGate(q, 3.0388912082106376, 4);
  sqcRYGate(q, 0.005706643491468988, 5);
  sqcRZGate(q, -1.4993540560226994, 5);
  sqcRYGate(q, 0.3758191565564637, 6);
  sqcRZGate(q, 0.2265930209669733, 6);
  sqcRYGate(q, 0.03402891214894144, 7);
  sqcRZGate(q, -0.8200961128643858, 7);
  sqcRYGate(q, -0.7487601073070324, 8);
  sqcRZGate(q, -2.826873148903962, 8);
  sqcRYGate(q, 0.1044879197790334, 9);
  sqcRZGate(q, 2.886704037314461, 9);
  sqcRYGate(q, 0.6309435161713202, 10);
  sqcRZGate(q, -3.005361994862927, 10);
  sqcRYGate(q, -1.6956158178793583, 11);
  sqcRZGate(q, -2.853989839974289, 11);
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
  sqcRYGate(q, 1.6715268188672254, 0);
  sqcRZGate(q, 2.0415770982886308, 0);
  sqcRYGate(q, -2.9435978291817895, 1);
  sqcRZGate(q, -2.1834066913596635, 1);
  sqcRYGate(q, 2.9109322070822947, 2);
  sqcRZGate(q, 0.11970050527274267, 2);
  sqcRYGate(q, 2.9980124594248903, 3);
  sqcRZGate(q, 1.8407528388332646, 3);
  sqcRYGate(q, 1.0815378648960685, 4);
  sqcRZGate(q, -2.4547043778740805, 4);
  sqcRYGate(q, -3.1385821614612177, 5);
  sqcRZGate(q, 0.45539209819288834, 5);
  sqcRYGate(q, 2.777048778984715, 6);
  sqcRZGate(q, -1.7871704282785057, 6);
  sqcRYGate(q, 0.6110409346168687, 7);
  sqcRZGate(q, 1.408539010364504, 7);
  sqcRYGate(q, -3.140887912198757, 8);
  sqcRZGate(q, 1.0946183535514784, 8);
  sqcRYGate(q, -0.6881042265521193, 9);
  sqcRZGate(q, -1.683115923543342, 9);
  sqcRYGate(q, 0.4650693014175005, 10);
  sqcRZGate(q, -0.30530878554394536, 10);
  sqcRYGate(q, 0.23942173713682724, 11);
  sqcRZGate(q, -0.7827276687078274, 11);
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
  sqcRYGate(q, 2.8233178760112017, 0);
  sqcRZGate(q, 2.7185437023177594, 0);
  sqcRYGate(q, 2.483597925578236, 1);
  sqcRZGate(q, 1.0506750720447728, 1);
  sqcRYGate(q, 0.19862138367619578, 2);
  sqcRZGate(q, 1.5090087951918756, 2);
  sqcRYGate(q, -1.5894783085982256, 3);
  sqcRZGate(q, 1.166796357070223, 3);
  sqcRYGate(q, -2.164590192241393, 4);
  sqcRZGate(q, -0.2280243676060918, 4);
  sqcRYGate(q, -1.9547298395435726, 5);
  sqcRZGate(q, -2.445630317832971, 5);
  sqcRYGate(q, -3.1172269078139503, 6);
  sqcRZGate(q, 1.3830615786349065, 6);
  sqcRYGate(q, 0.004235693338747737, 7);
  sqcRZGate(q, -0.08265324464766828, 7);
  sqcRYGate(q, -3.138109282351614, 8);
  sqcRZGate(q, -0.061529180343634415, 8);
  sqcRYGate(q, -1.3114966379090633, 9);
  sqcRZGate(q, -0.3568238435885034, 9);
  sqcRYGate(q, -2.9899311559299155, 10);
  sqcRZGate(q, -0.4285666796340503, 10);
  sqcRYGate(q, -1.0746373950471764, 11);
  sqcRZGate(q, 0.6506079043762822, 11);
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
  sqcRYGate(q, 0.8700685932025005, 0);
  sqcRZGate(q, 3.0542198554865587, 0);
  sqcRYGate(q, -0.5331360592985934, 1);
  sqcRZGate(q, -2.86761865622623, 1);
  sqcRYGate(q, -2.963170877523913, 2);
  sqcRZGate(q, 2.987420845980726, 2);
  sqcRYGate(q, -0.26904698723343606, 3);
  sqcRZGate(q, -2.97838551655084, 3);
  sqcRYGate(q, 3.135184107410103, 4);
  sqcRZGate(q, 1.747899848121601, 4);
  sqcRYGate(q, -3.0881195970719957, 5);
  sqcRZGate(q, -1.0369766962181153, 5);
  sqcRYGate(q, -1.8149958553243177, 6);
  sqcRZGate(q, 0.8665891363005914, 6);
  sqcRYGate(q, 0.5244788081355738, 7);
  sqcRZGate(q, 2.4183903705485736, 7);
  sqcRYGate(q, 3.140719783447905, 8);
  sqcRZGate(q, 0.812390650750105, 8);
  sqcRYGate(q, 2.310445587389224, 9);
  sqcRZGate(q, 1.1989541480326171, 9);
  sqcRYGate(q, -1.6953540571337131, 10);
  sqcRZGate(q, -1.9477897719204451, 10);
  sqcRYGate(q, 1.0281551419848802, 11);
  sqcRZGate(q, 1.853154489596419, 11);
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
  sqcRYGate(q, 0.250781973580882, 0);
  sqcRZGate(q, -1.9942925670209393, 0);
  sqcRYGate(q, -1.809411666108889, 1);
  sqcRZGate(q, 0.9122077394745798, 1);
  sqcRYGate(q, -0.34251734153700125, 2);
  sqcRZGate(q, 2.685692944994881, 2);
  sqcRYGate(q, -1.700970425904216, 3);
  sqcRZGate(q, 2.6357192553421536, 3);
  sqcRYGate(q, 0.06943291868934716, 4);
  sqcRZGate(q, -0.22523502405079568, 4);
  sqcRYGate(q, -0.2694674946593105, 5);
  sqcRZGate(q, -2.3995859691528985, 5);
  sqcRYGate(q, 0.004125180023906503, 6);
  sqcRZGate(q, 0.8909622400018915, 6);
  sqcRYGate(q, -0.08336648724297452, 7);
  sqcRZGate(q, 0.7304067232149601, 7);
  sqcRYGate(q, -3.139541037695702, 8);
  sqcRZGate(q, -2.4119263336096, 8);
  sqcRYGate(q, -2.093924427187225, 9);
  sqcRZGate(q, -2.6905673144137383, 9);
  sqcRYGate(q, -1.2133871532847822, 10);
  sqcRZGate(q, 0.4049577586346584, 10);
  sqcRYGate(q, -2.9475603223417157, 11);
  sqcRZGate(q, -0.0874875622872322, 11);
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
  sqcRYGate(q, -2.4574629812050977, 0);
  sqcRZGate(q, -0.013729213891167269, 0);
  sqcRYGate(q, -1.9599345474066538, 1);
  sqcRZGate(q, -2.1740319846404073, 1);
  sqcRYGate(q, 0.09349561526576411, 2);
  sqcRZGate(q, -0.19806253727436474, 2);
  sqcRYGate(q, -2.966218663330319, 3);
  sqcRZGate(q, -1.6726567512771136, 3);
  sqcRYGate(q, 3.121277453449633, 4);
  sqcRZGate(q, 1.3276717947503434, 4);
  sqcRYGate(q, 3.1223687972834107, 5);
  sqcRZGate(q, -1.5969187013313144, 5);
  sqcRYGate(q, 0.09758700928776237, 6);
  sqcRZGate(q, 2.2421398618473387, 6);
  sqcRYGate(q, -0.689171817979009, 7);
  sqcRZGate(q, -3.077416667956255, 7);
  sqcRYGate(q, 3.133784851010521, 8);
  sqcRZGate(q, -0.1689762229700733, 8);
  sqcRYGate(q, 0.15043160552658552, 9);
  sqcRZGate(q, -1.2045488107096298, 9);
  sqcRYGate(q, -3.08418931151152, 10);
  sqcRZGate(q, 2.197101490035842, 10);
  sqcRYGate(q, -0.13256599147916245, 11);
  sqcRZGate(q, -0.1912538702517761, 11);
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
  sqcRYGate(q, -1.968665298187692, 0);
  sqcRZGate(q, -1.20288508153088, 0);
  sqcRYGate(q, 1.6344555221107473, 1);
  sqcRZGate(q, 2.6120396058976825, 1);
  sqcRYGate(q, -1.4687643705610034, 2);
  sqcRZGate(q, -1.5220754980044777, 2);
  sqcRYGate(q, -0.026681867272524154, 3);
  sqcRZGate(q, 1.6439196045419744, 3);
  sqcRYGate(q, -2.2144647199140435, 4);
  sqcRZGate(q, -2.9335014188060775, 4);
  sqcRYGate(q, 2.7531108151880708, 5);
  sqcRZGate(q, -2.4648226537130093, 5);
  sqcRYGate(q, 0.290452173790019, 6);
  sqcRZGate(q, 0.25261092763993387, 6);
  sqcRYGate(q, 0.011886591791344988, 7);
  sqcRZGate(q, -0.22566505920839097, 7);
  sqcRYGate(q, 0.00400982379788406, 8);
  sqcRZGate(q, 0.8163067756175634, 8);
  sqcRYGate(q, 0.8825464866302939, 9);
  sqcRZGate(q, -0.7754028730376401, 9);
  sqcRYGate(q, 2.416529354400903, 10);
  sqcRZGate(q, 1.4854449588031318, 10);
  sqcRYGate(q, -2.7461484587228884, 11);
  sqcRZGate(q, 1.2384464716985906, 11);
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
  sqcRYGate(q, -2.9520206566368983, 0);
  sqcRZGate(q, 1.8041351931096044, 0);
  sqcRYGate(q, -3.116440259734835, 1);
  sqcRZGate(q, -0.8872206363410005, 1);
  sqcRYGate(q, 2.906979034925776, 2);
  sqcRZGate(q, 0.9505043809580128, 2);
  sqcRYGate(q, 2.8639117856996066, 3);
  sqcRZGate(q, 2.04652294381087, 3);
  sqcRYGate(q, -2.4581250091298728, 4);
  sqcRZGate(q, -3.000103681361698, 4);
  sqcRYGate(q, -3.1372087215718416, 5);
  sqcRZGate(q, -0.3716320286341591, 5);
  sqcRYGate(q, 1.873168216894614, 6);
  sqcRZGate(q, 2.814174154812538, 6);
  sqcRYGate(q, 3.1144906038843057, 7);
  sqcRZGate(q, 1.489298257197718, 7);
  sqcRYGate(q, -0.05339842687836266, 8);
  sqcRZGate(q, 0.4564007959312198, 8);
  sqcRYGate(q, -0.18634227570828354, 9);
  sqcRZGate(q, -2.5674991924286825, 9);
  sqcRYGate(q, -2.9179708984647617, 10);
  sqcRZGate(q, 1.3834328569708456, 10);
  sqcRYGate(q, 0.09397848122395028, 11);
  sqcRZGate(q, -0.37658228822785134, 11);
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
  sqcRYGate(q, 2.0757878920782455, 0);
  sqcRZGate(q, 2.6767211374743507, 0);
  sqcRYGate(q, 1.0753446332325034, 1);
  sqcRZGate(q, -0.27260525769385163, 1);
  sqcRYGate(q, -0.00827970920456167, 2);
  sqcRZGate(q, 2.4031834132673344, 2);
  sqcRYGate(q, -0.0060127838981580695, 3);
  sqcRZGate(q, 2.7893964528342616, 3);
  sqcRYGate(q, -0.9077841809663854, 4);
  sqcRZGate(q, -2.554231692218153, 4);
  sqcRYGate(q, 3.1401683522764534, 5);
  sqcRZGate(q, 0.5318449579394491, 5);
  sqcRYGate(q, -2.8584932853501446, 6);
  sqcRZGate(q, -2.1082035543769333, 6);
  sqcRYGate(q, -0.018643594266607444, 7);
  sqcRZGate(q, -0.09061052327526463, 7);
  sqcRYGate(q, -3.1406208667392876, 8);
  sqcRZGate(q, 0.6590626884257315, 8);
  sqcRYGate(q, -1.1207137934729516, 9);
  sqcRZGate(q, 3.0038033773434445, 9);
  sqcRYGate(q, -0.4014481259341576, 10);
  sqcRZGate(q, 1.6451251704057972, 10);
  sqcRYGate(q, 1.2780675444633154, 11);
  sqcRZGate(q, 0.020905592182969234, 11);
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
  sqcRYGate(q, 2.017140936584832, 0);
  sqcRZGate(q, -1.0233886778797876, 0);
  sqcRYGate(q, -1.417524543233112, 1);
  sqcRZGate(q, -1.4876280840393417, 1);
  sqcRYGate(q, -3.050474774690253, 2);
  sqcRZGate(q, 1.856905335179686, 2);
  sqcRYGate(q, -2.8434388819610605, 3);
  sqcRZGate(q, 2.637207576740034, 3);
  sqcRYGate(q, -0.8790386233606557, 4);
  sqcRZGate(q, -1.8760230174490122, 4);
  sqcRYGate(q, 0.048989009406127076, 5);
  sqcRZGate(q, -0.4193116250219691, 5);
  sqcRYGate(q, 2.08334872003346, 6);
  sqcRZGate(q, -0.5063919358602991, 6);
  sqcRYGate(q, 0.8465965968245338, 7);
  sqcRZGate(q, -0.6884633757064552, 7);
  sqcRYGate(q, 2.9480942729443504, 8);
  sqcRZGate(q, 2.364493500774525, 8);
  sqcRYGate(q, -2.3106671661704485, 9);
  sqcRZGate(q, 2.5345488981160917, 9);
  sqcRYGate(q, -0.056646895007226306, 10);
  sqcRZGate(q, 2.4699953066998344, 10);
  sqcRYGate(q, -0.4575980414101398, 11);
  sqcRZGate(q, 0.12968505052781332, 11);
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
  sqcRYGate(q, -2.924394358268766, 0);
  sqcRZGate(q, 2.0834648415322485, 0);
  sqcRYGate(q, 0.19636043213007862, 1);
  sqcRZGate(q, 1.1791662198091415, 1);
  sqcRYGate(q, 0.001004894886993484, 2);
  sqcRZGate(q, -2.9809435199996996, 2);
  sqcRYGate(q, -0.002894921374808846, 3);
  sqcRZGate(q, 1.9234643505015665, 3);
  sqcRYGate(q, 3.063681494360727, 4);
  sqcRZGate(q, 1.6599490491934816, 4);
  sqcRYGate(q, -3.1310971855617726, 5);
  sqcRZGate(q, -0.13384227617323116, 5);
  sqcRYGate(q, -0.21729417676642265, 6);
  sqcRZGate(q, 0.8701759664235382, 6);
  sqcRYGate(q, -2.891970078057169, 7);
  sqcRZGate(q, -0.9162728066294344, 7);
  sqcRYGate(q, -0.03578118465571571, 8);
  sqcRZGate(q, -2.0715008638261123, 8);
  sqcRYGate(q, -0.23237686129160023, 9);
  sqcRZGate(q, -1.6156221292203066, 9);
  sqcRYGate(q, -3.084233967657791, 10);
  sqcRZGate(q, -3.0580354709148088, 10);
  sqcRYGate(q, -1.2720060983536172, 11);
  sqcRZGate(q, -0.009800068034747868, 11);
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
  sqcRYGate(q, -2.9449356242797786, 0);
  sqcRZGate(q, 2.3496745039516154, 0);
  sqcRYGate(q, 1.451838244483182, 1);
  sqcRZGate(q, -2.9205716676974807, 1);
  sqcRYGate(q, -3.053911146938936, 2);
  sqcRZGate(q, 1.2933287326705578, 2);
  sqcRYGate(q, 1.5939013144504974, 3);
  sqcRZGate(q, -0.6925259043477415, 3);
  sqcRYGate(q, 1.450670395374848, 4);
  sqcRZGate(q, -2.3573523092404254, 4);
  sqcRYGate(q, 3.118355128819701, 5);
  sqcRZGate(q, -0.9988816394674761, 5);
  sqcRYGate(q, -3.135208972878568, 6);
  sqcRZGate(q, 2.098895779995622, 6);
  sqcRYGate(q, 2.9114945990048082, 7);
  sqcRZGate(q, -2.5433703793100824, 7);
  sqcRYGate(q, 2.9387585708618285, 8);
  sqcRZGate(q, -0.7313907720044144, 8);
  sqcRYGate(q, 0.14769477296380715, 9);
  sqcRZGate(q, -1.6114401235031932, 9);
  sqcRYGate(q, 2.459562708538693, 10);
  sqcRZGate(q, -0.3658697240052291, 10);
  sqcRYGate(q, -1.6215180438142447, 11);
  sqcRZGate(q, -1.037102795998138, 11);
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
  sqcRYGate(q, 0.03751854387750253, 0);
  sqcRZGate(q, -2.461147910078622, 0);
  sqcRYGate(q, 2.124765840968021, 1);
  sqcRZGate(q, 2.972121507149565, 1);
  sqcRYGate(q, -1.7132968977050844, 2);
  sqcRZGate(q, 2.8353095915410846, 2);
  sqcRYGate(q, -3.0139301695222094, 3);
  sqcRZGate(q, 0.782048241374459, 3);
  sqcRYGate(q, 1.731732840374187, 4);
  sqcRZGate(q, -0.46843963971083014, 4);
  sqcRYGate(q, 0.6442807203746304, 5);
  sqcRZGate(q, -2.909548441449272, 5);
  sqcRYGate(q, 1.0802620574503639, 6);
  sqcRZGate(q, -0.35568575016744186, 6);
  sqcRYGate(q, 1.631658720410343, 7);
  sqcRZGate(q, 1.1535282528642883, 7);
  sqcRYGate(q, -2.9848566081732386, 8);
  sqcRZGate(q, 1.9420145569426985, 8);
  sqcRYGate(q, -0.4511863163371501, 9);
  sqcRZGate(q, 1.5409123904419868, 9);
  sqcRYGate(q, -0.980506526334797, 10);
  sqcRZGate(q, -2.950059276219279, 10);
  sqcRYGate(q, -1.795464600352106, 11);
  sqcRZGate(q, 1.7167921108463482, 11);

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
