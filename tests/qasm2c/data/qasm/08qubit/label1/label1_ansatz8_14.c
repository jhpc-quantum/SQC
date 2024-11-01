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

  sqcRYGate(q, 1.6215687254730884, 0);
  sqcRYGate(q, 2.2359727224936323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.016494736091556383, 0);
  sqcRYGate(q, 1.9022343633774321, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.106945772813754, 2);
  sqcRYGate(q, -2.2702576219044257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5401622366600328, 2);
  sqcRYGate(q, -2.921415384856833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.33693069151488997, 4);
  sqcRYGate(q, 0.8028305727276681, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.028327031899181065, 4);
  sqcRYGate(q, -1.1378963014524377, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.39049853118087074, 6);
  sqcRYGate(q, -1.822353779452187, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4991184980164014, 6);
  sqcRYGate(q, 1.2151109622673226, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.483452086735519, 0);
  sqcRYGate(q, 1.832117587655622, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3198822456269114, 0);
  sqcRYGate(q, -0.5152369422797228, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7988721303822625, 2);
  sqcRYGate(q, -2.3110687709153486, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.260296206173842, 2);
  sqcRYGate(q, -2.0025992693439054, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.646473819213689, 4);
  sqcRYGate(q, -2.5744015593630634, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.9797716795866833, 4);
  sqcRYGate(q, 1.2592582931054774, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5798194892332902, 1);
  sqcRYGate(q, -3.0202412795057216, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3920694005327874, 1);
  sqcRYGate(q, -0.3524453290449005, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4169261348576113, 3);
  sqcRYGate(q, 0.3223563191772465, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8227963618400698, 3);
  sqcRYGate(q, 2.374628285353077, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3043145152151574, 5);
  sqcRYGate(q, 0.4352756059432554, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5161521701410958, 5);
  sqcRYGate(q, -2.427455081476209, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.2180768387493472, 0);
  sqcRYGate(q, 1.5798203724076454, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6817747587258406, 0);
  sqcRYGate(q, -1.4666469303503493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.209440562672433, 2);
  sqcRYGate(q, -1.9867506046917285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08405285538551903, 2);
  sqcRYGate(q, -0.701004841210154, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.597038694007683, 4);
  sqcRYGate(q, 2.0054483453372685, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.615094941917139, 4);
  sqcRYGate(q, -0.38084803354793806, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.042298168412338, 6);
  sqcRYGate(q, -0.5684651553011824, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1787343912862869, 6);
  sqcRYGate(q, 3.0303975296470806, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.48275408198142, 0);
  sqcRYGate(q, 0.2084859776990733, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8192187146615284, 0);
  sqcRYGate(q, 1.6851653992045115, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8518834652654217, 2);
  sqcRYGate(q, 2.6738918738464306, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.39797008517879856, 2);
  sqcRYGate(q, 1.0201221882958598, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.200434938483547, 4);
  sqcRYGate(q, -0.6266235936812752, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.6820410469492237, 4);
  sqcRYGate(q, -2.2269502266722094, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.8977798093099167, 1);
  sqcRYGate(q, -0.8386836273640972, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.11686021703739047, 1);
  sqcRYGate(q, -0.5020946034693603, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8064870311304375, 3);
  sqcRYGate(q, -2.7499653082110056, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7575478130657964, 3);
  sqcRYGate(q, -0.9051996670229627, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.637260566090955, 5);
  sqcRYGate(q, 0.9758144586161973, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.4317894605705477, 5);
  sqcRYGate(q, -2.7188311082272403, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.3974657446222665, 0);
  sqcRYGate(q, -2.878419910187655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4133746116777175, 0);
  sqcRYGate(q, -1.0849712169027401, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9359649232527552, 2);
  sqcRYGate(q, 3.008839582388318, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1558927222612767, 2);
  sqcRYGate(q, -1.5650880512760272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7676055279518577, 4);
  sqcRYGate(q, 1.9326516406636072, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2239590005433056, 4);
  sqcRYGate(q, 2.40768675556774, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1623419208994115, 6);
  sqcRYGate(q, 0.04382875004618292, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1562511063997594, 6);
  sqcRYGate(q, 1.234514883798036, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6529229183685432, 0);
  sqcRYGate(q, 0.16657985139517706, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2384725358503852, 0);
  sqcRYGate(q, -2.0190842992800446, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0587265691184142, 2);
  sqcRYGate(q, -3.0753641738253568, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.3428851734511174, 2);
  sqcRYGate(q, 0.00454004590407564, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5266861857024667, 4);
  sqcRYGate(q, -0.20477455149198232, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.6430922997208834, 4);
  sqcRYGate(q, -2.5756538850074686, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.1100231934003073, 1);
  sqcRYGate(q, 2.8341481825957358, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3356170715192528, 1);
  sqcRYGate(q, 3.1089301256349593, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.101396965435723, 3);
  sqcRYGate(q, 1.484309457053583, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.8382830637670124, 3);
  sqcRYGate(q, -2.23782817754432, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.683940548027604, 5);
  sqcRYGate(q, 1.0583147341833614, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.9935297162765195, 5);
  sqcRYGate(q, 2.7206744436856125, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.0425773735945283, 0);
  sqcRYGate(q, -1.990485796824619, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5175592381194796, 0);
  sqcRYGate(q, 2.080437816586304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4781178926758747, 2);
  sqcRYGate(q, 2.430915606747472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.665879177172469, 2);
  sqcRYGate(q, 2.7819123429877908, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.067601444078621, 4);
  sqcRYGate(q, -0.09231945008835656, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4503456123519862, 4);
  sqcRYGate(q, -0.5554358176019014, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4073934672029669, 6);
  sqcRYGate(q, -2.056835429353345, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7714882700781889, 6);
  sqcRYGate(q, 1.6634954864646936, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8865702196153702, 0);
  sqcRYGate(q, -2.5415722509936747, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.408082513585038, 0);
  sqcRYGate(q, -3.020090592758326, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.468105557004745, 2);
  sqcRYGate(q, 1.5837866005686914, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.8334133650473707, 2);
  sqcRYGate(q, 1.356519230434564, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2720397450961025, 4);
  sqcRYGate(q, -0.7716897389743345, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.017725033667506, 4);
  sqcRYGate(q, -2.1073476866508885, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7926403939480546, 1);
  sqcRYGate(q, 0.01857433615477337, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5354517109471826, 1);
  sqcRYGate(q, -0.10448038673257631, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.496600828687042, 3);
  sqcRYGate(q, 1.4249291691130193, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9578424871957602, 3);
  sqcRYGate(q, 0.8983489221490039, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.12744336573341694, 5);
  sqcRYGate(q, -0.22104011926396988, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5979263711266478, 5);
  sqcRYGate(q, 1.5841192151567407, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.3175826308557888, 0);
  sqcRYGate(q, 2.3306452858409616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8212802896187579, 0);
  sqcRYGate(q, -1.407337695376158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4447619453704095, 2);
  sqcRYGate(q, -2.9890566463306354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.95520130425392, 2);
  sqcRYGate(q, -2.241446690382566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.025810208008942816, 4);
  sqcRYGate(q, -2.2070502260566767, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1538605766706025, 4);
  sqcRYGate(q, 1.7584547779277422, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0361163744146227, 6);
  sqcRYGate(q, -2.97587165912444, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.70334576013184, 6);
  sqcRYGate(q, 1.671750956292837, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.972693967420525, 0);
  sqcRYGate(q, -2.5076625477326107, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.308031056274329, 0);
  sqcRYGate(q, 2.3060530173554366, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.086958408536521, 2);
  sqcRYGate(q, 1.6745643168367303, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.6319168978740426, 2);
  sqcRYGate(q, -1.0215936218809327, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6873868465765531, 4);
  sqcRYGate(q, -1.6718108788179435, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4325142143007912, 4);
  sqcRYGate(q, -2.305030299180079, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3680559263740264, 1);
  sqcRYGate(q, -1.1156775887040524, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.762290154721846, 1);
  sqcRYGate(q, -1.1582187759244214, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.010448872901407393, 3);
  sqcRYGate(q, 0.22896872447135153, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.8662281490158208, 3);
  sqcRYGate(q, -1.540450620896817, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.2869728302422759, 5);
  sqcRYGate(q, 2.9629330799647597, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.2292565239766908, 5);
  sqcRYGate(q, -2.6577095016713126, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.9639780700002877, 0);
  sqcRYGate(q, -2.954083618215416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4280761471925976, 0);
  sqcRYGate(q, 1.2120089670829257, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.04960630323579327, 2);
  sqcRYGate(q, 0.36716044002336634, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.999912379999581, 2);
  sqcRYGate(q, -0.22829708612843536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5549539248853987, 4);
  sqcRYGate(q, -1.240206065266729, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1783585998426203, 4);
  sqcRYGate(q, -2.195139040788713, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.418926990141296, 6);
  sqcRYGate(q, -2.66444097751778, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.083411816575922, 6);
  sqcRYGate(q, -2.0531914479341835, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8987621630730886, 0);
  sqcRYGate(q, 3.039640754548653, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5494288718387366, 0);
  sqcRYGate(q, -0.030249102523399966, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9035538520818179, 2);
  sqcRYGate(q, 2.640915832666442, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9118648428369358, 2);
  sqcRYGate(q, -0.7274016137676932, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.782622781709465, 4);
  sqcRYGate(q, -1.702433861921044, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.16819076810818778, 4);
  sqcRYGate(q, 1.2888371792293958, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.9080234208405926, 1);
  sqcRYGate(q, -2.920297945136472, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.24672991497332308, 1);
  sqcRYGate(q, 0.8429964364877955, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2784969144299128, 3);
  sqcRYGate(q, 1.1095206383075484, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.2069054887729616, 3);
  sqcRYGate(q, 1.3324297014822744, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3440884818222811, 5);
  sqcRYGate(q, -2.3549890354645773, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5092215769239825, 5);
  sqcRYGate(q, 2.9957053775676843, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.3318722415900077, 0);
  sqcRYGate(q, -1.131580422791487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1798865980308306, 0);
  sqcRYGate(q, 1.5973079811902666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8028901213812397, 2);
  sqcRYGate(q, -0.8146708797534647, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.583419418182733, 2);
  sqcRYGate(q, 2.079181763329399, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5462607701237152, 4);
  sqcRYGate(q, -3.120144754243015, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.110911139985436, 4);
  sqcRYGate(q, 1.8553444790128086, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5368357784194016, 6);
  sqcRYGate(q, -1.0447811196693262, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9990011863279822, 6);
  sqcRYGate(q, -1.470832966796827, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.017405462228011093, 0);
  sqcRYGate(q, 0.9941264317900657, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1208451838915887, 0);
  sqcRYGate(q, -0.25567822039644605, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3871409355823004, 2);
  sqcRYGate(q, 1.0309274875523344, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.706576640438932, 2);
  sqcRYGate(q, -2.4438972140926505, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7260331883518948, 4);
  sqcRYGate(q, 1.182590644683855, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2614411719753242, 4);
  sqcRYGate(q, 0.38486708063133246, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.5948731672452858, 1);
  sqcRYGate(q, 2.2551266497835942, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.252350944794542, 1);
  sqcRYGate(q, 0.8173018974154551, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.392015300907667, 3);
  sqcRYGate(q, -1.8543656081333653, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.8570319442181953, 3);
  sqcRYGate(q, -2.6006821340727297, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.4767285307068451, 5);
  sqcRYGate(q, 0.34857036527527097, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.524054495596285, 5);
  sqcRYGate(q, 0.40893176074413523, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.5416585044077595, 0);
  sqcRYGate(q, -1.8928064178313084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8354245688557169, 0);
  sqcRYGate(q, -0.11087535499468723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20274926778035382, 2);
  sqcRYGate(q, -0.6346484165274308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5181389027658403, 2);
  sqcRYGate(q, -0.007310741856253331, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5116408222123523, 4);
  sqcRYGate(q, -1.669211506040847, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7846004462817868, 4);
  sqcRYGate(q, -2.632773068407552, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2027425999035488, 6);
  sqcRYGate(q, -0.9355634472581764, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.137934342480567, 6);
  sqcRYGate(q, -1.946123407682852, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.016568640789957456, 0);
  sqcRYGate(q, -2.0099861748813472, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.55607646953294, 0);
  sqcRYGate(q, -1.452943144431701, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.981843437337126, 2);
  sqcRYGate(q, -0.5096933707262234, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.40431000546516693, 2);
  sqcRYGate(q, 2.063759810245114, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.3007261625740236, 4);
  sqcRYGate(q, 1.679017898178353, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.0870727554305915, 4);
  sqcRYGate(q, -0.872614451114425, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.103081912185314, 1);
  sqcRYGate(q, -1.6423725513016354, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.047389748127781, 1);
  sqcRYGate(q, 1.9954972089046121, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7371612253536383, 3);
  sqcRYGate(q, 2.4646613694185944, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8460810451328276, 3);
  sqcRYGate(q, 2.365305249812247, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.2376268820920417, 5);
  sqcRYGate(q, -0.9480541751826932, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.8733024766989574, 5);
  sqcRYGate(q, -2.8373223957341516, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.8940718252857716, 0);
  sqcRYGate(q, 0.4827613882519825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0999215329207903, 0);
  sqcRYGate(q, -0.19537835599840553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.023411354746436, 2);
  sqcRYGate(q, 2.2335588252068055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9835445926168065, 2);
  sqcRYGate(q, -1.1045380506291478, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3319861877877584, 4);
  sqcRYGate(q, 2.5176483060374806, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8975402829103403, 4);
  sqcRYGate(q, 1.9685789888312648, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6676946648057729, 6);
  sqcRYGate(q, 0.11570781579952705, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8932169534570744, 6);
  sqcRYGate(q, -1.5270235958068827, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.016022711783231006, 0);
  sqcRYGate(q, -0.36975753455395655, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.897404635994888, 0);
  sqcRYGate(q, -2.633493555275485, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.634099499935979, 2);
  sqcRYGate(q, 0.6572937513098722, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1110926656925706, 2);
  sqcRYGate(q, -0.7991466542485905, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4114862717442536, 4);
  sqcRYGate(q, 0.1712275432959105, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5567043043754697, 4);
  sqcRYGate(q, -1.0864732280383027, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5616343428657077, 1);
  sqcRYGate(q, 1.4774949611649637, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9782602247417578, 1);
  sqcRYGate(q, 0.9631118399867324, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5144833221205354, 3);
  sqcRYGate(q, -0.8167006495367863, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.8836584880434426, 3);
  sqcRYGate(q, 2.0724573132897017, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.021076235463044, 5);
  sqcRYGate(q, 2.7315331109881753, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.6933300962766857, 5);
  sqcRYGate(q, 0.9509195844717268, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.48131308411138285, 0);
  sqcRYGate(q, 1.9744051256589525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.120041734736733, 0);
  sqcRYGate(q, -2.651125363576893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4196874736123357, 2);
  sqcRYGate(q, -2.8249327620457234, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07531400792383458, 2);
  sqcRYGate(q, 0.15852353192915736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.602004187909075, 4);
  sqcRYGate(q, -1.0185733201338625, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.419102833342014, 4);
  sqcRYGate(q, 2.8730890490760217, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4360150788127977, 6);
  sqcRYGate(q, -2.9349898931870033, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.726477754363366, 6);
  sqcRYGate(q, 2.7650966629493956, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0535973549998148, 0);
  sqcRYGate(q, -0.07428987411794781, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5147761124452197, 0);
  sqcRYGate(q, 0.541716621943365, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6956709568920223, 2);
  sqcRYGate(q, 0.21336504104207862, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.411530204029174, 2);
  sqcRYGate(q, -1.0804342881229418, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.105906114915627, 4);
  sqcRYGate(q, 1.6967723196729807, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.053163420696541, 4);
  sqcRYGate(q, -1.433972793568961, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.2097888288188914, 1);
  sqcRYGate(q, 2.7433750166758046, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9900731959594662, 1);
  sqcRYGate(q, 2.4186066857340216, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.67681599956446, 3);
  sqcRYGate(q, 1.9580303748092298, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8867517668725586, 3);
  sqcRYGate(q, -0.18209393675078367, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.2776072857047027, 5);
  sqcRYGate(q, 1.5114349917638679, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5147599497533348, 5);
  sqcRYGate(q, -2.2851464532396792, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.3054230164201743, 0);
  sqcRYGate(q, -0.8928797346632243, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3883692313269211, 0);
  sqcRYGate(q, -0.24899443180554834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9179396342911321, 2);
  sqcRYGate(q, -2.535535918951449, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7044372113890445, 2);
  sqcRYGate(q, -1.9335801655961122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3553415413900205, 4);
  sqcRYGate(q, 1.6991183786675785, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7565110483925062, 4);
  sqcRYGate(q, 3.0131928507801704, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6522411234497376, 6);
  sqcRYGate(q, -2.5723643917228496, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9622373530700186, 6);
  sqcRYGate(q, 0.9235489508673158, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.932768660318937, 0);
  sqcRYGate(q, 1.23913247753381, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0518966892806265, 0);
  sqcRYGate(q, 3.018606819045397, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.595201025900426, 2);
  sqcRYGate(q, 2.142819222476453, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.7210173415560397, 2);
  sqcRYGate(q, -2.421918128176534, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.5612725258410074, 4);
  sqcRYGate(q, -0.07191353510483367, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.2848447165747183, 4);
  sqcRYGate(q, -0.9455262550026582, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.1392990133594547, 1);
  sqcRYGate(q, -2.1865649976579347, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6331586100754176, 1);
  sqcRYGate(q, 2.842659385677769, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0668212732253421, 3);
  sqcRYGate(q, -1.11757791208899, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8054447440268575, 3);
  sqcRYGate(q, 1.6864052409332364, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.1299997583140304, 5);
  sqcRYGate(q, 0.6557934668274807, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.8573913704750162, 5);
  sqcRYGate(q, -0.9523125192286175, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.1058316201920773, 0);
  sqcRYGate(q, -2.8214061267544457, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.690859960608414, 0);
  sqcRYGate(q, 0.7973603716294102, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.927729607792902, 2);
  sqcRYGate(q, 0.9486911757638872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8580468236874295, 2);
  sqcRYGate(q, 0.19556473477990277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.884151858038185, 4);
  sqcRYGate(q, -1.3624759079228108, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8762486563303076, 4);
  sqcRYGate(q, 0.5291219111118195, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.17298089685285056, 6);
  sqcRYGate(q, -1.7087693297676734, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3688964124694407, 6);
  sqcRYGate(q, -3.0694416645509777, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3362000343585305, 0);
  sqcRYGate(q, 0.21315200430171116, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.550705713807255, 0);
  sqcRYGate(q, 1.377132625264426, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6327933202119222, 2);
  sqcRYGate(q, 2.9079146055236005, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5039716388808613, 2);
  sqcRYGate(q, 1.4667124570362642, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1066902242792835, 4);
  sqcRYGate(q, -2.4011602054812005, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.1692073387544461, 4);
  sqcRYGate(q, -0.001931530056386525, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0191471127384757, 1);
  sqcRYGate(q, -2.367553704798255, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.481368991516396, 1);
  sqcRYGate(q, -2.6581153663789547, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3698076203259657, 3);
  sqcRYGate(q, -0.8328191222749127, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.8029705986707745, 3);
  sqcRYGate(q, -0.3489897561121227, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.7440714703218045, 5);
  sqcRYGate(q, 1.8710654379250908, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.06649730429785361, 5);
  sqcRYGate(q, -0.964547657060542, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.3571687395499987, 0);
  sqcRYGate(q, -1.251381595674227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7558134631180309, 0);
  sqcRYGate(q, -0.3894295927417566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.03924911960140243, 2);
  sqcRYGate(q, 2.237090497988678, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.960064152742102, 2);
  sqcRYGate(q, 0.8084782478390347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.037632465299992, 4);
  sqcRYGate(q, -1.9976896628270113, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7502740326397881, 4);
  sqcRYGate(q, -2.4080357932127323, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.42107716503376563, 6);
  sqcRYGate(q, 1.315927583870006, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2402594551900945, 6);
  sqcRYGate(q, -2.335017859968415, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.929407587656941, 0);
  sqcRYGate(q, 0.472919209729846, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6745684015861633, 0);
  sqcRYGate(q, 0.7593915185399913, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5674808663240309, 2);
  sqcRYGate(q, 1.8067283951651678, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.9332067146036787, 2);
  sqcRYGate(q, -0.8229521015859325, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.3867916315317812, 4);
  sqcRYGate(q, 0.9989209217758926, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.762661831880943, 4);
  sqcRYGate(q, -0.48724971026582065, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4558312545466627, 1);
  sqcRYGate(q, 1.1532732775082537, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3279913530530106, 1);
  sqcRYGate(q, -2.9983578835191635, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4626321360745487, 3);
  sqcRYGate(q, -1.5541954364349542, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.568512397617907, 3);
  sqcRYGate(q, 0.45402467223970927, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.3604206963518335, 5);
  sqcRYGate(q, 2.350322559360949, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.12711616917896812, 5);
  sqcRYGate(q, 2.7653440826229247, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.7639230259460392, 0);
  sqcRYGate(q, -1.1994116664646661, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5612327003568816, 0);
  sqcRYGate(q, 1.3832151105015993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9314517944936828, 2);
  sqcRYGate(q, -1.7653154986560935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0615450389104826, 2);
  sqcRYGate(q, 0.5475018855250031, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8171804106740828, 4);
  sqcRYGate(q, 2.5884414789027397, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3400176409376696, 4);
  sqcRYGate(q, 1.7746695274085884, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.830121305437507, 6);
  sqcRYGate(q, 2.2926495237074724, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6546679495494319, 6);
  sqcRYGate(q, 2.7909834223660512, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6381060389081, 0);
  sqcRYGate(q, -1.2966221138566474, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5846642575693795, 0);
  sqcRYGate(q, 0.10021316394124716, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2326630569318075, 2);
  sqcRYGate(q, -0.09394883086217347, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.0344553519002675, 2);
  sqcRYGate(q, 0.1593830726357366, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.69171057500012, 4);
  sqcRYGate(q, -1.1423100160019983, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.544985023413131, 4);
  sqcRYGate(q, 0.6451869126278105, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.6612215456656787, 1);
  sqcRYGate(q, -1.152839327211947, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.967416367066171, 1);
  sqcRYGate(q, 1.7479593157004787, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.15968275631207943, 3);
  sqcRYGate(q, -2.494316684008151, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7924202752526721, 3);
  sqcRYGate(q, 0.8451338492563316, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9985524161126103, 5);
  sqcRYGate(q, -2.5420959389636466, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.094984176955125, 5);
  sqcRYGate(q, -2.64542542530247, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.414895431028058, 0);
  sqcRYGate(q, 1.6624849751621877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.015659448457768, 0);
  sqcRYGate(q, 0.21629305020115605, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6239857939873223, 2);
  sqcRYGate(q, -0.010601260532840407, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6811176703087054, 2);
  sqcRYGate(q, 1.3250435444486, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6452082610072827, 4);
  sqcRYGate(q, -2.4555739266362, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3552027692575774, 4);
  sqcRYGate(q, 2.6519579409072525, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3348265882423878, 6);
  sqcRYGate(q, 1.7169541771361234, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1447537950832603, 6);
  sqcRYGate(q, -1.1144545391176253, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.21137008749569947, 0);
  sqcRYGate(q, 0.2867020614799329, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5272256694386734, 0);
  sqcRYGate(q, -2.238544091335532, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.047272359571572053, 2);
  sqcRYGate(q, 2.7173926592890716, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.10588032191116, 2);
  sqcRYGate(q, 1.909197445350153, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0897464613122203, 4);
  sqcRYGate(q, -2.882942664340186, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.2347161669468827, 4);
  sqcRYGate(q, -2.047205668609232, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2237700860827294, 1);
  sqcRYGate(q, -1.33050836722498, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4426947886882644, 1);
  sqcRYGate(q, 2.4472323216312484, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.39113401930799, 3);
  sqcRYGate(q, -2.4489644701443147, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.5829638270860404, 3);
  sqcRYGate(q, 2.327126489926612, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.4123047345329582, 5);
  sqcRYGate(q, -1.7484985226227614, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.1229736562154233, 5);
  sqcRYGate(q, 2.5693584060801444, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.20039672998051827, 0);
  sqcRYGate(q, 0.8464601806579486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6670304322565515, 0);
  sqcRYGate(q, 1.7073056500154458, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9122526420902344, 2);
  sqcRYGate(q, -0.02302152810913485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.708029511071102, 2);
  sqcRYGate(q, 2.699086119663959, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0812766090653696, 4);
  sqcRYGate(q, -1.788843707982639, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.11941978075166122, 4);
  sqcRYGate(q, 1.175606198120494, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3325519520349538, 6);
  sqcRYGate(q, 2.5331046563366972, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.585647339742398, 6);
  sqcRYGate(q, -2.2608849918160603, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8862411876426433, 0);
  sqcRYGate(q, -1.2067958150631055, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.32791792758792937, 0);
  sqcRYGate(q, 0.020742287730758594, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.20549670947779133, 2);
  sqcRYGate(q, -0.6453424990308838, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.532860611124477, 2);
  sqcRYGate(q, 2.497547855360633, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.5572424489434296, 4);
  sqcRYGate(q, -0.5720048609218749, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.938603022470635, 4);
  sqcRYGate(q, 1.4578850130432501, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7338489294134991, 1);
  sqcRYGate(q, 2.6728712278540785, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1226800334973017, 1);
  sqcRYGate(q, 1.2701906077515615, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.244724355719077, 3);
  sqcRYGate(q, -1.6851541108052566, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.7284591580602755, 3);
  sqcRYGate(q, -2.469223524643567, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.3673696901524286, 5);
  sqcRYGate(q, -0.7219216949948501, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.15174647069555486, 5);
  sqcRYGate(q, 2.0930408427732052, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.2093583224858788, 0);
  sqcRYGate(q, -0.7483169068447315, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.844632784357972, 0);
  sqcRYGate(q, -0.03286188300444426, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9965374576272854, 2);
  sqcRYGate(q, -2.644007603823892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3871899195052828, 2);
  sqcRYGate(q, -1.7756837134679877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1464882725438688, 4);
  sqcRYGate(q, -0.8870843868114507, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0941012078331376, 4);
  sqcRYGate(q, 2.2627201807057706, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.051738867694332, 6);
  sqcRYGate(q, 1.6613681066880723, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.048336845379190585, 6);
  sqcRYGate(q, 0.13813348204858517, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.13847166720372867, 0);
  sqcRYGate(q, -1.457064376440838, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6872231116626364, 0);
  sqcRYGate(q, -1.7180416543808983, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.930744042427137, 2);
  sqcRYGate(q, -1.3976515690226208, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5770121604430918, 2);
  sqcRYGate(q, 1.1718428555955762, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.394313590018773, 4);
  sqcRYGate(q, -1.566814293926904, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.8126094580759853, 4);
  sqcRYGate(q, -2.7877325333900065, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.4726732711940142, 1);
  sqcRYGate(q, 1.1917627642499127, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5582649586119088, 1);
  sqcRYGate(q, -0.24844289033903874, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9458851087361664, 3);
  sqcRYGate(q, -0.4788190154984909, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.6523492553394177, 3);
  sqcRYGate(q, 0.9585654220424678, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.0782819524530516, 5);
  sqcRYGate(q, 3.0772068009896083, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.0402794231826462, 5);
  sqcRYGate(q, -1.3172262625640803, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5723844635090254, 0);
  sqcRYGate(q, -1.3095161859825921, 1);
  sqcRYGate(q, -1.4469914139655806, 2);
  sqcRYGate(q, -2.3499355032398155, 3);
  sqcRYGate(q, -0.7566654136888841, 4);
  sqcRYGate(q, -0.9847585429822113, 5);
  sqcRYGate(q, 0.9465498543905905, 6);
  sqcRYGate(q, 2.031477744297522, 7);

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
