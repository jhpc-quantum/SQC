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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -2.0553642286227642, 0);
  sqcRYGate(q, -1.9748268564239704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1127604254136068, 0);
  sqcRYGate(q, 1.305275108307801, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23361271016950552, 2);
  sqcRYGate(q, -2.0670531548057776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13444790283850938, 2);
  sqcRYGate(q, 2.599440473939718, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2368246470923587, 4);
  sqcRYGate(q, -1.6081662829987904, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0668099438141714, 4);
  sqcRYGate(q, -0.3362573968342941, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5031374540472138, 6);
  sqcRYGate(q, 0.39816944399222454, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.949181861114894, 6);
  sqcRYGate(q, 1.7619396299086714, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.753514554325817, 8);
  sqcRYGate(q, -2.1177577698241214, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8528530760806037, 8);
  sqcRYGate(q, -0.4591710472365442, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9025364736872625, 10);
  sqcRYGate(q, 0.7440316690103572, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8523003318124351, 10);
  sqcRYGate(q, -1.0179008670572045, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.751393079463327, 12);
  sqcRYGate(q, -0.05062289648813581, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.98326048041013, 12);
  sqcRYGate(q, -2.6987298717508703, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.6807875441455096, 14);
  sqcRYGate(q, 1.2206827676967218, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.3783654701158465, 14);
  sqcRYGate(q, 2.527223986367067, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.7853086198021284, 1);
  sqcRYGate(q, -0.588789262181515, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6169421529712092, 1);
  sqcRYGate(q, -0.6298186171555298, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5485862585520305, 3);
  sqcRYGate(q, 2.1280579280925798, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.117159986419279, 3);
  sqcRYGate(q, 3.0273730905865026, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5889209169710399, 5);
  sqcRYGate(q, -0.5509621582489439, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6038199815651106, 5);
  sqcRYGate(q, 2.8751732492032795, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5482217126186884, 7);
  sqcRYGate(q, 2.641361459696484, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.9453667356575688, 7);
  sqcRYGate(q, -0.0009480317839578588, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7550678500018595, 9);
  sqcRYGate(q, -0.24555361026119993, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.773190287938072, 9);
  sqcRYGate(q, 2.0084792617460883, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.2226411201517444, 11);
  sqcRYGate(q, 0.006316584733880859, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.9051729302326326, 11);
  sqcRYGate(q, 0.7000391819930512, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5046445104383457, 13);
  sqcRYGate(q, 1.1753914004016037, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.5826655860582742, 13);
  sqcRYGate(q, 2.937886568352406, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.9973880002731716, 0);
  sqcRYGate(q, 1.0117807565295482, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.33529266078285236, 0);
  sqcRYGate(q, -1.268736813305659, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5402267441239965, 2);
  sqcRYGate(q, -0.33063058233395104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.44267971450696, 2);
  sqcRYGate(q, -2.0161998167265542, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7026275588823683, 4);
  sqcRYGate(q, -0.2623166746242183, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.025447972742871805, 4);
  sqcRYGate(q, 2.359089695098753, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5911374350364968, 6);
  sqcRYGate(q, -0.6445862767515552, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.081680191691837, 6);
  sqcRYGate(q, -1.20606571864759, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3284826154943512, 8);
  sqcRYGate(q, -0.7864821094289609, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.2715980527425774, 8);
  sqcRYGate(q, -0.12281957103341361, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9909422535131347, 10);
  sqcRYGate(q, -2.1744867703228583, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.012113806422853202, 10);
  sqcRYGate(q, 0.016020199726539452, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.3993541855531828, 12);
  sqcRYGate(q, -2.831965125781784, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.021494493740036386, 12);
  sqcRYGate(q, 3.11372441390237, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.221724291447788, 14);
  sqcRYGate(q, 0.36309767407484556, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.6234050788501849, 14);
  sqcRYGate(q, 0.3119700953382587, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.1877602608740019, 1);
  sqcRYGate(q, 1.7682362834409362, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.505033517536258, 1);
  sqcRYGate(q, 0.001786445968367977, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5318837929588599, 3);
  sqcRYGate(q, 1.4341653530968896, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.026163793017626166, 3);
  sqcRYGate(q, 1.6771592677401574, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0913174122533063, 5);
  sqcRYGate(q, 1.2967328441004042, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.067480633758585, 5);
  sqcRYGate(q, -2.749765938372513, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6380267073794816, 7);
  sqcRYGate(q, 3.032318435930252, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.2526317252169088, 7);
  sqcRYGate(q, -0.010539032786512493, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5786237277294033, 9);
  sqcRYGate(q, -0.14869496975758878, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.755119213486123, 9);
  sqcRYGate(q, -0.9115913511644989, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.1607544198555177, 11);
  sqcRYGate(q, 1.3271820051476517, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5949811447723363, 11);
  sqcRYGate(q, -2.2235354986011755, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.0354289921849085, 13);
  sqcRYGate(q, 0.9608861050880627, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.1185557259135943, 13);
  sqcRYGate(q, 0.21878097438544916, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.5507991063080286, 0);
  sqcRYGate(q, 2.4709135295428983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.21253557511398305, 0);
  sqcRYGate(q, -0.8826965648410839, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5771149087194072, 2);
  sqcRYGate(q, -1.91854400500364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.097893834844912, 2);
  sqcRYGate(q, 1.1142671106240805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0443575343638747, 4);
  sqcRYGate(q, 1.2021050310904329, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.13478411908193344, 4);
  sqcRYGate(q, -2.856132358107119, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.04742352145142117, 6);
  sqcRYGate(q, -3.001770184049048, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.06856705883733483, 6);
  sqcRYGate(q, -1.5000787090230787, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5982410295347211, 8);
  sqcRYGate(q, 1.3135865720874937, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.05541388753484444, 8);
  sqcRYGate(q, 0.261593834910805, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7288843311112103, 10);
  sqcRYGate(q, 2.9519007239943047, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6804051469538903, 10);
  sqcRYGate(q, -0.05329064345333034, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0141173560664787, 12);
  sqcRYGate(q, -0.7265777709098212, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.684680690641236, 12);
  sqcRYGate(q, 2.9825229998918137, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.4948138484131666, 14);
  sqcRYGate(q, 2.9355695846551506, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.9683994730767098, 14);
  sqcRYGate(q, -1.9852968056064535, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.906230268040841, 1);
  sqcRYGate(q, -0.12464478387175901, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.015223041249112376, 1);
  sqcRYGate(q, 0.9863019018996223, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6368561372521166, 3);
  sqcRYGate(q, 2.6292888514810175, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1337484208219446, 3);
  sqcRYGate(q, 2.885418442734428, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4494102146623504, 5);
  sqcRYGate(q, -2.056791560250155, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.77364389213853, 5);
  sqcRYGate(q, -0.7747114223119542, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9186231639181601, 7);
  sqcRYGate(q, 1.7491978543105673, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.3538714956781339, 7);
  sqcRYGate(q, 0.05287423166397165, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.3030628914492075, 9);
  sqcRYGate(q, -1.7592600881105505, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.00789848890268452, 9);
  sqcRYGate(q, 0.9715853353229171, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4149065505628031, 11);
  sqcRYGate(q, 2.4798296713550134, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.0848772243464784, 11);
  sqcRYGate(q, -0.009095323351136386, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.9923875239270714, 13);
  sqcRYGate(q, -1.6829469811926978, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.7798681100536422, 13);
  sqcRYGate(q, -3.045496503046157, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.1439354694372317, 0);
  sqcRYGate(q, 1.8690286370395555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0916398851223956, 0);
  sqcRYGate(q, -3.042249781795233, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.33063882069987205, 2);
  sqcRYGate(q, 1.3994608166543407, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1276776774620227, 2);
  sqcRYGate(q, 3.141083900542481, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7280769275533596, 4);
  sqcRYGate(q, 1.5890473502503917, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.592758827305479, 4);
  sqcRYGate(q, 0.04016409005069641, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6958856490082326, 6);
  sqcRYGate(q, -1.8705389573262166, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.15482946925906163, 6);
  sqcRYGate(q, 3.1327330918375225, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3924122527770812, 8);
  sqcRYGate(q, -2.225817476038566, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.4225040939077773, 8);
  sqcRYGate(q, 1.7792718844229434, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.9091407067348488, 10);
  sqcRYGate(q, -2.4160408611275423, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7210864527811457, 10);
  sqcRYGate(q, 1.0561583007355155, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.1447832981704176, 12);
  sqcRYGate(q, -1.6054957610974887, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.608546227413359, 12);
  sqcRYGate(q, -1.4604237185214093, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.0923520533537654, 14);
  sqcRYGate(q, 1.6051686365241769, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.9282140875354585, 14);
  sqcRYGate(q, 0.13580011105230128, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.2801231666307418, 1);
  sqcRYGate(q, -1.4570923282306694, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6724422147315487, 1);
  sqcRYGate(q, 1.9486566881362093, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.25435568356616306, 3);
  sqcRYGate(q, 1.0639867229631068, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1351753703667384, 3);
  sqcRYGate(q, 0.3143420246796568, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5880709665153656, 5);
  sqcRYGate(q, 2.175851087826625, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.054836676137859, 5);
  sqcRYGate(q, -0.8779174763101184, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4058974801225572, 7);
  sqcRYGate(q, 0.5569664545372266, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9823350091874317, 7);
  sqcRYGate(q, -3.122398900651005, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.0041328277067234, 9);
  sqcRYGate(q, -2.3869879574931216, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.07398145571422077, 9);
  sqcRYGate(q, -3.139575883672278, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.456493698904937, 11);
  sqcRYGate(q, -1.8963144916434576, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.121209626762735, 11);
  sqcRYGate(q, 0.06218454025502141, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.137343580207875, 13);
  sqcRYGate(q, 2.4241482699737653, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.8826638292469404, 13);
  sqcRYGate(q, -3.124220285823575, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.3296289323490975, 0);
  sqcRYGate(q, -3.06757313563968, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.496599694559285, 0);
  sqcRYGate(q, 1.2341242772386867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8787386553863872, 2);
  sqcRYGate(q, 1.1305996254281723, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.011947821012644994, 2);
  sqcRYGate(q, -3.112761207026241, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1226748542130442, 4);
  sqcRYGate(q, 1.6080223640460485, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4164622190278733, 4);
  sqcRYGate(q, -2.8875429157541697, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.21776248926608854, 6);
  sqcRYGate(q, -0.9865445977106564, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3496537085693268, 6);
  sqcRYGate(q, 2.8999899890136915, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2189233860559643, 8);
  sqcRYGate(q, -2.2726653746077474, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.1383084245829, 8);
  sqcRYGate(q, 1.06078958320024, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8168452367952175, 10);
  sqcRYGate(q, -2.8358784563774515, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.08192716396435529, 10);
  sqcRYGate(q, 3.0500246830359523, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.466260536762249, 12);
  sqcRYGate(q, 3.1395453074798625, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.1186523552878445, 12);
  sqcRYGate(q, 2.1977034380017546, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.9957994713323375, 14);
  sqcRYGate(q, 1.423546390406102, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.1277218966605664, 14);
  sqcRYGate(q, -0.8726821209873564, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.6341089668475994, 1);
  sqcRYGate(q, 2.108547700282748, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9422855888650226, 1);
  sqcRYGate(q, 0.026011394647923607, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4534043452587229, 3);
  sqcRYGate(q, 2.306954576932685, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.138114041442422, 3);
  sqcRYGate(q, -1.585260566289044, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5919376654128936, 5);
  sqcRYGate(q, -0.1079927499963187, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1323453861075934, 5);
  sqcRYGate(q, 2.976392523368036, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2468800510339424, 7);
  sqcRYGate(q, -1.553914478127941, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.065126583354308, 7);
  sqcRYGate(q, -0.02646549484643759, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.6886040784109158, 9);
  sqcRYGate(q, 0.4376597875997916, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.06552123000842874, 9);
  sqcRYGate(q, 3.1308876678677606, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.0463843687468297, 11);
  sqcRYGate(q, 0.12458453358831979, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.07110613102372466, 11);
  sqcRYGate(q, 0.049679626579084826, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.453267746221531, 13);
  sqcRYGate(q, -2.7183988803844685, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.728756625436874, 13);
  sqcRYGate(q, -3.0856190674841066, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.3287804903396327, 0);
  sqcRYGate(q, 2.427230010715149, 1);
  sqcRYGate(q, -0.5754194330432929, 2);
  sqcRYGate(q, 2.3120781977416196, 3);
  sqcRYGate(q, -0.3885273688779749, 4);
  sqcRYGate(q, 2.979559912844066, 5);
  sqcRYGate(q, -0.1330611730903383, 6);
  sqcRYGate(q, -0.04953185853290165, 7);
  sqcRYGate(q, -1.8932246739050882, 8);
  sqcRYGate(q, 1.463726299062392, 9);
  sqcRYGate(q, -2.644527578079348, 10);
  sqcRYGate(q, -2.0413598170329346, 11);
  sqcRYGate(q, 0.21196212875206122, 12);
  sqcRYGate(q, 0.02599220448468984, 13);
  sqcRYGate(q, 0.648084075432103, 14);
  sqcRYGate(q, 1.6502497681810349, 15);

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
