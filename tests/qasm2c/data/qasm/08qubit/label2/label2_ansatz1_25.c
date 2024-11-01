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

  sqcRYGate(q, 2.937009956460682, 0);
  sqcRZGate(q, -2.265716504070152, 0);
  sqcRYGate(q, 2.102889129461719, 1);
  sqcRZGate(q, 2.0830711562027253, 1);
  sqcRYGate(q, -1.067753416868583, 2);
  sqcRZGate(q, 3.0749861675804504, 2);
  sqcRYGate(q, 0.49700300580397805, 3);
  sqcRZGate(q, 0.5946678374766623, 3);
  sqcRYGate(q, -3.138024774763186, 4);
  sqcRZGate(q, -1.4189718627148848, 4);
  sqcRYGate(q, -1.2297192574332083, 5);
  sqcRZGate(q, -0.4591253747063812, 5);
  sqcRYGate(q, -0.2836040203893383, 6);
  sqcRZGate(q, 0.8705086411833334, 6);
  sqcRYGate(q, -1.4814111813881032, 7);
  sqcRZGate(q, 1.344793664299902, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.093777050754009, 0);
  sqcRZGate(q, 1.5371711950996536, 0);
  sqcRYGate(q, 0.26830342731737983, 1);
  sqcRZGate(q, -3.0029000360577767, 1);
  sqcRYGate(q, -1.6404180778664228, 2);
  sqcRZGate(q, -0.24981203550587328, 2);
  sqcRYGate(q, -1.106402066683005, 3);
  sqcRZGate(q, 0.6035218004196476, 3);
  sqcRYGate(q, -0.0029243691810997667, 4);
  sqcRZGate(q, -1.0914494830385968, 4);
  sqcRYGate(q, 2.669324667334686, 5);
  sqcRZGate(q, 2.867153879479523, 5);
  sqcRYGate(q, -2.95763968144787, 6);
  sqcRZGate(q, -0.0320289861493368, 6);
  sqcRYGate(q, 1.3787853839143782, 7);
  sqcRZGate(q, -1.0119981790933394, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.783880881485406, 0);
  sqcRZGate(q, 0.20131879497151403, 0);
  sqcRYGate(q, 0.8556806858977773, 1);
  sqcRZGate(q, 2.014942791378894, 1);
  sqcRYGate(q, -2.069291588178314, 2);
  sqcRZGate(q, -2.0690109198972753, 2);
  sqcRYGate(q, 3.0993002800184173, 3);
  sqcRZGate(q, -2.9809999387102084, 3);
  sqcRYGate(q, -3.124423527327791, 4);
  sqcRZGate(q, 2.0549754722776807, 4);
  sqcRYGate(q, 1.1077042415899936, 5);
  sqcRZGate(q, 0.13684237097430607, 5);
  sqcRYGate(q, -0.07018825177534425, 6);
  sqcRZGate(q, 0.7852418773648671, 6);
  sqcRYGate(q, -0.21990065341145648, 7);
  sqcRZGate(q, 2.459066508657076, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.0789146462168997, 0);
  sqcRZGate(q, 2.6515775819109044, 0);
  sqcRYGate(q, -0.03766581340992925, 1);
  sqcRZGate(q, -1.6401517979134357, 1);
  sqcRYGate(q, 0.46519374450574436, 2);
  sqcRZGate(q, 0.8413858818956462, 2);
  sqcRYGate(q, 2.7863520020107613, 3);
  sqcRZGate(q, 2.5580873609002097, 3);
  sqcRYGate(q, -0.002362253911508425, 4);
  sqcRZGate(q, -0.9962197261126539, 4);
  sqcRYGate(q, -0.03999226273958836, 5);
  sqcRZGate(q, -1.1791777677457416, 5);
  sqcRYGate(q, -0.4674103895752504, 6);
  sqcRZGate(q, -2.172008277958211, 6);
  sqcRYGate(q, -1.6382961653340034, 7);
  sqcRZGate(q, 2.9484087905803746, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5903871345879672, 0);
  sqcRZGate(q, -0.3053890938522063, 0);
  sqcRYGate(q, -0.1234944391538983, 1);
  sqcRZGate(q, 2.0792560034227376, 1);
  sqcRYGate(q, 1.0430289900934717, 2);
  sqcRZGate(q, -1.7443904648510247, 2);
  sqcRYGate(q, -3.0672163967460784, 3);
  sqcRZGate(q, -0.3520849689697118, 3);
  sqcRYGate(q, 0.29311153440704973, 4);
  sqcRZGate(q, 0.9248519384235256, 4);
  sqcRYGate(q, 0.3829142723170431, 5);
  sqcRZGate(q, 2.882216893428148, 5);
  sqcRYGate(q, 3.0922360197472294, 6);
  sqcRZGate(q, 1.3597265463661692, 6);
  sqcRYGate(q, -0.12316203962899022, 7);
  sqcRZGate(q, -1.4707286387942862, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.2874495504165355, 0);
  sqcRZGate(q, -1.1686043799646013, 0);
  sqcRYGate(q, -2.548243606695196, 1);
  sqcRZGate(q, 2.4602302919737387, 1);
  sqcRYGate(q, -1.7644530508553626, 2);
  sqcRZGate(q, 0.6384848389496314, 2);
  sqcRYGate(q, 2.8401756471734574, 3);
  sqcRZGate(q, 1.6656376571002056, 3);
  sqcRYGate(q, 2.842288647266828, 4);
  sqcRZGate(q, -2.4594149858334347, 4);
  sqcRYGate(q, 0.013385988567840457, 5);
  sqcRZGate(q, -2.0358788405062924, 5);
  sqcRYGate(q, -3.02487449957918, 6);
  sqcRZGate(q, 2.394889755445093, 6);
  sqcRYGate(q, 0.923926036227656, 7);
  sqcRZGate(q, -2.9918973973816994, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9849071568440904, 0);
  sqcRZGate(q, -0.10595515076981687, 0);
  sqcRYGate(q, 2.3250145660382313, 1);
  sqcRZGate(q, 2.529028237377732, 1);
  sqcRYGate(q, -0.028876710187777672, 2);
  sqcRZGate(q, -1.9598399636987578, 2);
  sqcRYGate(q, 2.9357942694543806, 3);
  sqcRZGate(q, -0.6750032810680259, 3);
  sqcRYGate(q, 2.34960847923631, 4);
  sqcRZGate(q, 0.40066717353523457, 4);
  sqcRYGate(q, -3.130899843930408, 5);
  sqcRZGate(q, -0.280227639811166, 5);
  sqcRYGate(q, -3.0183444493110105, 6);
  sqcRZGate(q, -1.6103566966498766, 6);
  sqcRYGate(q, 1.3878353088509399, 7);
  sqcRZGate(q, -1.3885690514647875, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.655261933366146, 0);
  sqcRZGate(q, 1.9136663746327436, 0);
  sqcRYGate(q, 1.9892652939706084, 1);
  sqcRZGate(q, 1.5982373023320122, 1);
  sqcRYGate(q, -3.0886956073217644, 2);
  sqcRZGate(q, -3.1045461872780344, 2);
  sqcRYGate(q, 2.193110181351877, 3);
  sqcRZGate(q, 0.11627767290671544, 3);
  sqcRYGate(q, 2.2792663657348458, 4);
  sqcRZGate(q, 2.8432080760134277, 4);
  sqcRYGate(q, 0.8530665495111803, 5);
  sqcRZGate(q, -1.6440098513821937, 5);
  sqcRYGate(q, 2.122832181130158, 6);
  sqcRZGate(q, 0.6908486786566106, 6);
  sqcRYGate(q, -2.395187314083489, 7);
  sqcRZGate(q, 2.246056474957335, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.637617719232903, 0);
  sqcRZGate(q, -1.6698172941501852, 0);
  sqcRYGate(q, -1.543774946692695, 1);
  sqcRZGate(q, -0.24295292418953562, 1);
  sqcRYGate(q, -0.011515180846955086, 2);
  sqcRZGate(q, -1.9034484785116041, 2);
  sqcRYGate(q, 0.3038584378845046, 3);
  sqcRZGate(q, 1.0120329755767732, 3);
  sqcRYGate(q, -0.11394803536773779, 4);
  sqcRZGate(q, -2.576293183632701, 4);
  sqcRYGate(q, 0.3332108429798888, 5);
  sqcRZGate(q, -1.228095887169637, 5);
  sqcRYGate(q, -0.011878783051494146, 6);
  sqcRZGate(q, 1.9190571229054765, 6);
  sqcRYGate(q, -2.616972188727666, 7);
  sqcRZGate(q, 2.1589081296761456, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.2204619531642801, 0);
  sqcRZGate(q, 0.9844514354608814, 0);
  sqcRYGate(q, 2.451491876667449, 1);
  sqcRZGate(q, -1.7112033739429267, 1);
  sqcRYGate(q, -0.6369611053401671, 2);
  sqcRZGate(q, 2.089498313788151, 2);
  sqcRYGate(q, -1.3917457441516066, 3);
  sqcRZGate(q, 2.360097387392141, 3);
  sqcRYGate(q, 3.130430938611308, 4);
  sqcRZGate(q, -2.6496627390610485, 4);
  sqcRYGate(q, 0.11503508473216151, 5);
  sqcRZGate(q, 1.4242646084367316, 5);
  sqcRYGate(q, -0.9290171805124849, 6);
  sqcRZGate(q, 0.9699356378105826, 6);
  sqcRYGate(q, 2.7671300901189357, 7);
  sqcRZGate(q, 1.1460276259705573, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9173214568702805, 0);
  sqcRZGate(q, 1.2180701764706434, 0);
  sqcRYGate(q, -1.4196174280706115, 1);
  sqcRZGate(q, -3.0513722211973224, 1);
  sqcRYGate(q, -0.07235699582096533, 2);
  sqcRZGate(q, 1.2314417638451278, 2);
  sqcRYGate(q, -0.44351524287812366, 3);
  sqcRZGate(q, 0.2556380017114659, 3);
  sqcRYGate(q, -0.02270894242386401, 4);
  sqcRZGate(q, 2.90193523957961, 4);
  sqcRYGate(q, -1.1624237757665403, 5);
  sqcRZGate(q, 2.577453540507939, 5);
  sqcRYGate(q, -0.006859434580614555, 6);
  sqcRZGate(q, 2.690258113489752, 6);
  sqcRYGate(q, 2.724443608782612, 7);
  sqcRZGate(q, 0.7345871000728366, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.73510069574125, 0);
  sqcRZGate(q, -1.595576815301346, 0);
  sqcRYGate(q, -0.20193473146123864, 1);
  sqcRZGate(q, 1.979956017823663, 1);
  sqcRYGate(q, -3.1333665482603124, 2);
  sqcRZGate(q, -2.62804781386774, 2);
  sqcRYGate(q, -1.5401185874587124, 3);
  sqcRZGate(q, -0.7775019579083704, 3);
  sqcRYGate(q, -3.138224412058608, 4);
  sqcRZGate(q, 2.071824322379677, 4);
  sqcRYGate(q, 0.043114705545684195, 5);
  sqcRZGate(q, 0.5217733812212376, 5);
  sqcRYGate(q, 3.14131918679896, 6);
  sqcRZGate(q, -0.14330603380404586, 6);
  sqcRYGate(q, 0.7952604820163974, 7);
  sqcRZGate(q, -2.711392787787165, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.2622992691994308, 0);
  sqcRZGate(q, -1.307435543064748, 0);
  sqcRYGate(q, -0.19758479081625513, 1);
  sqcRZGate(q, 1.360612147825998, 1);
  sqcRYGate(q, -2.4855292528388087, 2);
  sqcRZGate(q, 0.5455462213357095, 2);
  sqcRYGate(q, -3.061706377313758, 3);
  sqcRZGate(q, 2.3504937752287325, 3);
  sqcRYGate(q, 3.0317809351568408, 4);
  sqcRZGate(q, 0.9428248575557819, 4);
  sqcRYGate(q, -1.3696419297525058, 5);
  sqcRZGate(q, -1.7906547024722048, 5);
  sqcRYGate(q, 3.1277835527805204, 6);
  sqcRZGate(q, 2.2446484858130042, 6);
  sqcRYGate(q, 3.0121265932748997, 7);
  sqcRZGate(q, 0.7659153546033313, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4820068141244542, 0);
  sqcRZGate(q, -1.2862044308802192, 0);
  sqcRYGate(q, 1.7406626156621754, 1);
  sqcRZGate(q, 0.12166845574791818, 1);
  sqcRYGate(q, 3.135424040689326, 2);
  sqcRZGate(q, 1.0109860066208611, 2);
  sqcRYGate(q, -1.5636117706010717, 3);
  sqcRZGate(q, -1.4794568596016706, 3);
  sqcRYGate(q, 1.0797417400393448, 4);
  sqcRZGate(q, 1.5742252940918213, 4);
  sqcRYGate(q, 1.923252821337874, 5);
  sqcRZGate(q, -2.1271122293406717, 5);
  sqcRYGate(q, 1.0997294034975063, 6);
  sqcRZGate(q, 2.641362559823431, 6);
  sqcRYGate(q, 0.2610505538673068, 7);
  sqcRZGate(q, 0.26495091846827845, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.0931740994741412, 0);
  sqcRZGate(q, -2.1342614781665152, 0);
  sqcRYGate(q, 1.8326857877344827, 1);
  sqcRZGate(q, 3.110741631876783, 1);
  sqcRYGate(q, -0.2708697699220908, 2);
  sqcRZGate(q, -0.23349589554008074, 2);
  sqcRYGate(q, -0.3934436610779876, 3);
  sqcRZGate(q, 2.5361839237827457, 3);
  sqcRYGate(q, 0.5462278154041349, 4);
  sqcRZGate(q, -1.1200878856667735, 4);
  sqcRYGate(q, -3.1386970836815733, 5);
  sqcRZGate(q, -2.0374018092536836, 5);
  sqcRYGate(q, 3.139131712442075, 6);
  sqcRZGate(q, -0.4789994044142453, 6);
  sqcRYGate(q, 0.7219312390204812, 7);
  sqcRZGate(q, -0.5057967444968706, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.6328491674920622, 0);
  sqcRZGate(q, -2.0350451627637813, 0);
  sqcRYGate(q, -1.9979792924486346, 1);
  sqcRZGate(q, -1.5643143205460064, 1);
  sqcRYGate(q, 3.137158889388701, 2);
  sqcRZGate(q, -2.439713543363571, 2);
  sqcRYGate(q, -1.5731295259606337, 3);
  sqcRZGate(q, 2.172958170782337, 3);
  sqcRYGate(q, -2.159450873550545, 4);
  sqcRZGate(q, 2.0652303263883196, 4);
  sqcRYGate(q, 2.633252713047104, 5);
  sqcRZGate(q, -1.8034597528639438, 5);
  sqcRYGate(q, 0.6452636426426231, 6);
  sqcRZGate(q, -2.8333754154032156, 6);
  sqcRYGate(q, 0.5874549043619508, 7);
  sqcRZGate(q, -2.077209489285699, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.7382833838757783, 0);
  sqcRZGate(q, -1.097666428946857, 0);
  sqcRYGate(q, -1.6008252880231533, 1);
  sqcRZGate(q, -1.661347215158401, 1);
  sqcRYGate(q, -0.022870722582944755, 2);
  sqcRZGate(q, 1.8779948977000143, 2);
  sqcRYGate(q, -2.287146041487339, 3);
  sqcRZGate(q, -1.974685144498487, 3);
  sqcRYGate(q, 1.2912690261556192, 4);
  sqcRZGate(q, -2.4855189299050706, 4);
  sqcRYGate(q, -0.22943139278365088, 5);
  sqcRZGate(q, -1.2274420959297203, 5);
  sqcRYGate(q, -0.004424132789824675, 6);
  sqcRZGate(q, -0.8572881589575924, 6);
  sqcRYGate(q, 2.7026357035752375, 7);
  sqcRZGate(q, -1.6536280831927983, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.976962828178981, 0);
  sqcRZGate(q, 1.9437100092325708, 0);
  sqcRYGate(q, 3.0623215562830537, 1);
  sqcRZGate(q, 1.8230637085445098, 1);
  sqcRYGate(q, -2.5069229181676107, 2);
  sqcRZGate(q, -0.9337616007541241, 2);
  sqcRYGate(q, -3.0085144564018225, 3);
  sqcRZGate(q, 2.08397624332253, 3);
  sqcRYGate(q, 0.48060569484389687, 4);
  sqcRZGate(q, -2.2124983071488007, 4);
  sqcRYGate(q, -1.4379171768009653, 5);
  sqcRZGate(q, -1.0251744117828885, 5);
  sqcRYGate(q, 3.1344576460743614, 6);
  sqcRZGate(q, 1.0980415380179442, 6);
  sqcRYGate(q, -0.8639175351348705, 7);
  sqcRZGate(q, 0.08675653622172419, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.5653101351113731, 0);
  sqcRZGate(q, -1.0297995480689197, 0);
  sqcRYGate(q, 0.49726365529424604, 1);
  sqcRZGate(q, -2.4435120235210874, 1);
  sqcRYGate(q, -0.10544809206044635, 2);
  sqcRZGate(q, -0.7194952028559687, 2);
  sqcRYGate(q, 2.287629219933613, 3);
  sqcRZGate(q, 3.121480713228341, 3);
  sqcRYGate(q, -2.2443828553810037, 4);
  sqcRZGate(q, 1.2936345593339034, 4);
  sqcRYGate(q, -2.6152900730807147, 5);
  sqcRZGate(q, 0.4232476149952759, 5);
  sqcRYGate(q, 1.7103151729277704, 6);
  sqcRZGate(q, -1.0987236633953472, 6);
  sqcRYGate(q, -1.836720905668265, 7);
  sqcRZGate(q, 2.9291477308930896, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.14001001732638757, 0);
  sqcRZGate(q, 0.5319421333310986, 0);
  sqcRYGate(q, -0.16124631149471472, 1);
  sqcRZGate(q, -2.2154471084767984, 1);
  sqcRYGate(q, -0.006894461776827092, 2);
  sqcRZGate(q, 0.41390122286339265, 2);
  sqcRYGate(q, -0.1796937640478543, 3);
  sqcRZGate(q, -2.867954240267178, 3);
  sqcRYGate(q, -0.09206812789985097, 4);
  sqcRZGate(q, 0.2850708202074845, 4);
  sqcRYGate(q, -3.138332013355241, 5);
  sqcRZGate(q, 1.2053014133781257, 5);
  sqcRYGate(q, -3.1413878508721638, 6);
  sqcRZGate(q, -2.4495501612363237, 6);
  sqcRYGate(q, -1.3837455939463492, 7);
  sqcRZGate(q, 2.3639177041841855, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.19538061394350922, 0);
  sqcRZGate(q, 1.5522761631966415, 0);
  sqcRYGate(q, 1.0953959473445776, 1);
  sqcRZGate(q, -2.443379830836546, 1);
  sqcRYGate(q, 1.5592695106998116, 2);
  sqcRZGate(q, -2.094234978365856, 2);
  sqcRYGate(q, 1.2479580844078226, 3);
  sqcRZGate(q, -0.018848085938723017, 3);
  sqcRYGate(q, -1.033194005888122, 4);
  sqcRZGate(q, 1.5571286175244232, 4);
  sqcRYGate(q, -0.5981901444254097, 5);
  sqcRZGate(q, 0.8515694671252246, 5);
  sqcRYGate(q, -3.0268902467025756, 6);
  sqcRZGate(q, 2.6401765338008, 6);
  sqcRYGate(q, 1.5305671829486305, 7);
  sqcRZGate(q, -1.6365129821683522, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6072045854226886, 0);
  sqcRZGate(q, -0.7555844128555077, 0);
  sqcRYGate(q, 0.012574620654136837, 1);
  sqcRZGate(q, 2.4966509861611352, 1);
  sqcRYGate(q, 3.141166473398676, 2);
  sqcRZGate(q, -2.0516443529514037, 2);
  sqcRYGate(q, 0.022935732367310845, 3);
  sqcRZGate(q, 0.9819750989946632, 3);
  sqcRYGate(q, 2.6160959893307045, 4);
  sqcRZGate(q, -3.1180596520343773, 4);
  sqcRYGate(q, 0.00247301686253204, 5);
  sqcRZGate(q, -3.0443798670429847, 5);
  sqcRYGate(q, 3.130437113952857, 6);
  sqcRZGate(q, 3.0066842891835455, 6);
  sqcRYGate(q, 1.0928787249061838, 7);
  sqcRZGate(q, -1.4174693103480909, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.089470805977492, 0);
  sqcRZGate(q, 0.12316898880490701, 0);
  sqcRYGate(q, 1.1927668106193903, 1);
  sqcRZGate(q, -3.139282519810509, 1);
  sqcRYGate(q, -1.5921400147407203, 2);
  sqcRZGate(q, -1.1684548127333796, 2);
  sqcRYGate(q, 0.9894092168585424, 3);
  sqcRZGate(q, -0.261500925011001, 3);
  sqcRYGate(q, 0.31282123812313234, 4);
  sqcRZGate(q, -2.651833841892544, 4);
  sqcRYGate(q, 2.287803843193594, 5);
  sqcRZGate(q, 0.9979911652903707, 5);
  sqcRYGate(q, 1.7919990778224282, 6);
  sqcRZGate(q, -0.7708289663352523, 6);
  sqcRYGate(q, 0.6705388024631711, 7);
  sqcRZGate(q, 2.930704651555585, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.4703340200356093, 0);
  sqcRZGate(q, 1.979340014074968, 0);
  sqcRYGate(q, 0.35110172250636956, 1);
  sqcRZGate(q, 3.0218827367499435, 1);
  sqcRYGate(q, 0.14450153107132413, 2);
  sqcRZGate(q, 2.4569217871053763, 2);
  sqcRYGate(q, -2.672300816084243, 3);
  sqcRZGate(q, -2.0934899020505036, 3);
  sqcRYGate(q, -0.3255146811837991, 4);
  sqcRZGate(q, -0.4656216259315523, 4);
  sqcRYGate(q, 0.006548789555953505, 5);
  sqcRZGate(q, -2.9269165494806133, 5);
  sqcRYGate(q, 2.4149107636537948, 6);
  sqcRZGate(q, -0.6231411348788238, 6);
  sqcRYGate(q, 0.6932807327734443, 7);
  sqcRZGate(q, 1.839573306814728, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4040926031160796, 0);
  sqcRZGate(q, 0.02745960948354842, 0);
  sqcRYGate(q, 2.760268474690865, 1);
  sqcRZGate(q, -0.027645377353141317, 1);
  sqcRYGate(q, 2.4820309897793247, 2);
  sqcRZGate(q, 2.275037241171362, 2);
  sqcRYGate(q, -3.083921701380153, 3);
  sqcRZGate(q, 0.7524244553377442, 3);
  sqcRYGate(q, -1.314906975937319, 4);
  sqcRZGate(q, 0.14808668378874118, 4);
  sqcRYGate(q, 2.9728296818227773, 5);
  sqcRZGate(q, 2.771419962907564, 5);
  sqcRYGate(q, 1.1090968911801227, 6);
  sqcRZGate(q, -3.030216595533912, 6);
  sqcRYGate(q, 2.8998837506275152, 7);
  sqcRZGate(q, -1.656726930751261, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.6464693653580365, 0);
  sqcRZGate(q, 2.7064361265923673, 0);
  sqcRYGate(q, 2.1352567590345126, 1);
  sqcRZGate(q, 2.904544249472318, 1);
  sqcRYGate(q, -0.1475264202163542, 2);
  sqcRZGate(q, 0.9511677898129723, 2);
  sqcRYGate(q, -3.1367092059174215, 3);
  sqcRZGate(q, -2.0415087944724464, 3);
  sqcRYGate(q, 0.10068442953333678, 4);
  sqcRZGate(q, -0.10494233367080764, 4);
  sqcRYGate(q, -3.104230231248896, 5);
  sqcRZGate(q, -2.183307300869944, 5);
  sqcRYGate(q, -0.0189088223947727, 6);
  sqcRZGate(q, -3.130591336868968, 6);
  sqcRYGate(q, -1.700187694001033, 7);
  sqcRZGate(q, 0.31789605439771235, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.280432948521069, 0);
  sqcRZGate(q, -2.253347446818455, 0);
  sqcRYGate(q, -2.346962259395825, 1);
  sqcRZGate(q, 2.811697210047196, 1);
  sqcRYGate(q, 0.7570018183529057, 2);
  sqcRZGate(q, 1.4674047280118612, 2);
  sqcRYGate(q, -2.425796658469525, 3);
  sqcRZGate(q, -0.5091000602315152, 3);
  sqcRYGate(q, -2.7431502380155797, 4);
  sqcRZGate(q, 1.8631525552985488, 4);
  sqcRYGate(q, 2.0521082746327384, 5);
  sqcRZGate(q, -2.100796604038438, 5);
  sqcRYGate(q, 2.93417424362931, 6);
  sqcRZGate(q, 1.0568441716479882, 6);
  sqcRYGate(q, 2.1735875279259265, 7);
  sqcRZGate(q, -2.9491832377131995, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.1118181150013733, 0);
  sqcRZGate(q, 1.7757837749283771, 0);
  sqcRYGate(q, 0.6344233086833508, 1);
  sqcRZGate(q, 1.0644726849593278, 1);
  sqcRYGate(q, -3.1277352491923707, 2);
  sqcRZGate(q, -1.105685953228174, 2);
  sqcRYGate(q, 3.1004248082412205, 3);
  sqcRZGate(q, -3.0484154108426122, 3);
  sqcRYGate(q, -3.141311872367688, 4);
  sqcRZGate(q, -1.3913273863257363, 4);
  sqcRYGate(q, 3.102646732833365, 5);
  sqcRZGate(q, 0.4147176526762139, 5);
  sqcRYGate(q, -0.051736673546082905, 6);
  sqcRZGate(q, 2.1726030706936297, 6);
  sqcRYGate(q, -1.5628906970787335, 7);
  sqcRZGate(q, -1.1489229612946472, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.17387286615247022, 0);
  sqcRZGate(q, 3.0333923796823843, 0);
  sqcRYGate(q, -1.72592911044919, 1);
  sqcRZGate(q, 2.6593284941728768, 1);
  sqcRYGate(q, 0.849701722722374, 2);
  sqcRZGate(q, 1.6085238616443949, 2);
  sqcRYGate(q, 1.1173879630311474, 3);
  sqcRZGate(q, -0.5066781288864777, 3);
  sqcRYGate(q, 0.63247638093, 4);
  sqcRZGate(q, 2.95572836651325, 4);
  sqcRYGate(q, -1.361755963116405, 5);
  sqcRZGate(q, -0.37420912993260114, 5);
  sqcRYGate(q, 1.263041254258944, 6);
  sqcRZGate(q, 1.1773249217031903, 6);
  sqcRYGate(q, -1.0569926695649032, 7);
  sqcRZGate(q, -1.8593327130126602, 7);

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
