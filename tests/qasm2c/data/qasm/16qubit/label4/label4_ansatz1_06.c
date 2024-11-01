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

  sqcRYGate(q, -0.6707550875390446, 0);
  sqcRZGate(q, 1.2926465317436096, 0);
  sqcRYGate(q, 1.9215443801405563, 1);
  sqcRZGate(q, -1.0803836662564608, 1);
  sqcRYGate(q, -1.643491678660573, 2);
  sqcRZGate(q, 2.9848609372432056, 2);
  sqcRYGate(q, -1.5006155705129645, 3);
  sqcRZGate(q, 1.1713583794015223, 3);
  sqcRYGate(q, 2.628745847472934, 4);
  sqcRZGate(q, 1.6325318591373295, 4);
  sqcRYGate(q, -3.0922228160591096, 5);
  sqcRZGate(q, 0.041369014474624245, 5);
  sqcRYGate(q, -3.132559249947692, 6);
  sqcRZGate(q, 0.9078730794267953, 6);
  sqcRYGate(q, 0.9795461146699871, 7);
  sqcRZGate(q, -0.2951011031266768, 7);
  sqcRYGate(q, 1.5288943348006738, 8);
  sqcRZGate(q, -1.8109087051982433, 8);
  sqcRYGate(q, -3.141005497591727, 9);
  sqcRZGate(q, -0.8777263505526518, 9);
  sqcRYGate(q, 1.6605942083305325, 10);
  sqcRZGate(q, -2.6824407184734036, 10);
  sqcRYGate(q, 0.9854671688242247, 11);
  sqcRZGate(q, -2.085718710965385, 11);
  sqcRYGate(q, -3.1017537581602976, 12);
  sqcRZGate(q, -2.012255317674336, 12);
  sqcRYGate(q, 1.898698385300765, 13);
  sqcRZGate(q, 2.3729389483114303, 13);
  sqcRYGate(q, 2.055649328736788, 14);
  sqcRZGate(q, 0.8333690740383934, 14);
  sqcRYGate(q, -3.1382264142047003, 15);
  sqcRZGate(q, 1.111977500261377, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.011856516731419721, 0);
  sqcRZGate(q, -2.642195579047104, 0);
  sqcRYGate(q, -3.134085222683666, 1);
  sqcRZGate(q, 2.248506915684381, 1);
  sqcRYGate(q, 1.47691710487202, 2);
  sqcRZGate(q, 2.2242587629205817, 2);
  sqcRYGate(q, -1.041591241418226, 3);
  sqcRZGate(q, 1.643626850937476, 3);
  sqcRYGate(q, -1.5667417728207582, 4);
  sqcRZGate(q, -1.9060123162604719, 4);
  sqcRYGate(q, 1.5281322305110558, 5);
  sqcRZGate(q, -3.1372049499356027, 5);
  sqcRYGate(q, -1.5679052976709118, 6);
  sqcRZGate(q, -0.0013822707751138807, 6);
  sqcRYGate(q, 1.6310702553205823, 7);
  sqcRZGate(q, 3.140048839926898, 7);
  sqcRYGate(q, 0.3068611631474907, 8);
  sqcRZGate(q, 0.23682021651700308, 8);
  sqcRYGate(q, -3.088525196589305, 9);
  sqcRZGate(q, 3.0813719589789414, 9);
  sqcRYGate(q, 0.25739657165983054, 10);
  sqcRZGate(q, -0.539290306786673, 10);
  sqcRYGate(q, -3.0779021358897345, 11);
  sqcRZGate(q, 1.1899088475407953, 11);
  sqcRYGate(q, 3.1165782426875066, 12);
  sqcRZGate(q, -0.5982455584746819, 12);
  sqcRYGate(q, -1.3675322750371832, 13);
  sqcRZGate(q, -1.6483047499026764, 13);
  sqcRYGate(q, -2.1921150252057786, 14);
  sqcRZGate(q, -1.5702974216374634, 14);
  sqcRYGate(q, 1.9637046037406252, 15);
  sqcRZGate(q, -0.7295496465831794, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.7183258991672663, 0);
  sqcRZGate(q, 2.6384915174055856, 0);
  sqcRYGate(q, -1.2440730557063375, 1);
  sqcRZGate(q, 1.9873890727894823, 1);
  sqcRYGate(q, -0.2923301794562261, 2);
  sqcRZGate(q, 2.59516682292117, 2);
  sqcRYGate(q, -0.024095562374044196, 3);
  sqcRZGate(q, 0.1472260551918012, 3);
  sqcRYGate(q, -0.016087733099079102, 4);
  sqcRZGate(q, -2.7751436446946376, 4);
  sqcRYGate(q, -1.576780893748703, 5);
  sqcRZGate(q, 3.126611786851515, 5);
  sqcRYGate(q, 1.2215362795870954, 6);
  sqcRZGate(q, -3.141361216327858, 6);
  sqcRYGate(q, -1.5664759101745194, 7);
  sqcRZGate(q, 3.1285648752457815, 7);
  sqcRYGate(q, 1.5612874085203245, 8);
  sqcRZGate(q, 1.5642790193074587, 8);
  sqcRYGate(q, 0.00042517778714490356, 9);
  sqcRZGate(q, -1.1523106524178823, 9);
  sqcRYGate(q, -1.5639287766788297, 10);
  sqcRZGate(q, -2.954593297519981, 10);
  sqcRYGate(q, 2.12774008600576, 11);
  sqcRZGate(q, -0.4623468817578909, 11);
  sqcRYGate(q, -1.5572718722653676, 12);
  sqcRZGate(q, -2.157601318856684, 12);
  sqcRYGate(q, -2.9466500029037985, 13);
  sqcRZGate(q, -1.4397721006251487, 13);
  sqcRYGate(q, 2.0112812394522592, 14);
  sqcRZGate(q, -2.557424019622469, 14);
  sqcRYGate(q, 3.0765963630370368, 15);
  sqcRZGate(q, -1.4410195860183457, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.05618260019445989, 0);
  sqcRZGate(q, -2.4555881556515584, 0);
  sqcRYGate(q, 3.132175277245439, 1);
  sqcRZGate(q, -0.7641459309357224, 1);
  sqcRYGate(q, -1.2980114696269345, 2);
  sqcRZGate(q, 2.3167070077128633, 2);
  sqcRYGate(q, -0.9793077591063941, 3);
  sqcRZGate(q, -2.836447763302898, 3);
  sqcRYGate(q, -2.8392157723081297, 4);
  sqcRZGate(q, 0.48276744154091583, 4);
  sqcRYGate(q, -0.0018401169451464313, 5);
  sqcRZGate(q, 0.018864295156612698, 5);
  sqcRYGate(q, -1.5595940392608494, 6);
  sqcRZGate(q, 0.0007840156957682821, 6);
  sqcRYGate(q, 2.5407292005169313, 7);
  sqcRZGate(q, 0.2287164057556584, 7);
  sqcRYGate(q, -1.5643503850202263, 8);
  sqcRZGate(q, 1.5689731289445887, 8);
  sqcRYGate(q, -0.49777121088852677, 9);
  sqcRZGate(q, -1.7552593383797805, 9);
  sqcRYGate(q, 1.371216103662391, 10);
  sqcRZGate(q, 1.513680061313504, 10);
  sqcRYGate(q, 2.7290142202094922, 11);
  sqcRZGate(q, -2.0823456263712536, 11);
  sqcRYGate(q, 3.1259348109509166, 12);
  sqcRZGate(q, -3.0252198803881525, 12);
  sqcRYGate(q, -1.9384476811383682, 13);
  sqcRZGate(q, -2.7604842107587153, 13);
  sqcRYGate(q, 0.0423533668632592, 14);
  sqcRZGate(q, 0.6481504598543805, 14);
  sqcRYGate(q, 0.9220507669756186, 15);
  sqcRZGate(q, -2.2513108476958195, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.865795188583915, 0);
  sqcRZGate(q, 2.7543099385053673, 0);
  sqcRYGate(q, -1.3721738647525967, 1);
  sqcRZGate(q, -2.2502206639744453, 1);
  sqcRYGate(q, 0.15518442711763658, 2);
  sqcRZGate(q, -2.66033296239031, 2);
  sqcRYGate(q, -3.1341284153060647, 3);
  sqcRZGate(q, -0.5352997525929482, 3);
  sqcRYGate(q, 0.009682169753350735, 4);
  sqcRZGate(q, 2.664488840083705, 4);
  sqcRYGate(q, 0.6060889311101502, 5);
  sqcRZGate(q, 0.1881855196617048, 5);
  sqcRYGate(q, 1.9770696558289003, 6);
  sqcRZGate(q, -0.16238240229479306, 6);
  sqcRYGate(q, 2.470094246502664, 7);
  sqcRZGate(q, -0.015418141374122563, 7);
  sqcRYGate(q, 1.5782391386666212, 8);
  sqcRZGate(q, 3.141077020382765, 8);
  sqcRYGate(q, 2.575833999442444, 9);
  sqcRZGate(q, 0.8021524555900075, 9);
  sqcRYGate(q, -2.9256211776619168, 10);
  sqcRZGate(q, 3.132147570856138, 10);
  sqcRYGate(q, 0.28799339056463236, 11);
  sqcRZGate(q, -0.25481319091200805, 11);
  sqcRYGate(q, -0.0012817018029839056, 12);
  sqcRZGate(q, -0.8817216394166429, 12);
  sqcRYGate(q, 2.3557436173090824, 13);
  sqcRZGate(q, -1.0772592337667746, 13);
  sqcRYGate(q, 0.009883443759016744, 14);
  sqcRZGate(q, 0.19909726997503976, 14);
  sqcRYGate(q, 2.0372822437416223, 15);
  sqcRZGate(q, -0.9819273027637091, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.127164296398266, 0);
  sqcRZGate(q, 2.7626367476247506, 0);
  sqcRYGate(q, -3.1371427992275596, 1);
  sqcRZGate(q, 2.8172259387445657, 1);
  sqcRYGate(q, 1.3956990756902954, 2);
  sqcRZGate(q, -1.3776569021681047, 2);
  sqcRYGate(q, -0.8367577762317557, 3);
  sqcRZGate(q, -0.7575235915227776, 3);
  sqcRYGate(q, 1.3048495774656281, 4);
  sqcRZGate(q, -0.0017268774720363346, 4);
  sqcRYGate(q, -0.002361111647036118, 5);
  sqcRZGate(q, 2.847249572001831, 5);
  sqcRYGate(q, -1.1427371811313547, 6);
  sqcRZGate(q, -0.3033087367470507, 6);
  sqcRYGate(q, -2.6612259414077655, 7);
  sqcRZGate(q, -2.887228334548489, 7);
  sqcRYGate(q, -1.5722724679036881, 8);
  sqcRZGate(q, 3.1337200599516244, 8);
  sqcRYGate(q, 3.1411572651892055, 9);
  sqcRZGate(q, -2.339070435352588, 9);
  sqcRYGate(q, 0.7039297095761758, 10);
  sqcRZGate(q, -0.8217685803409055, 10);
  sqcRYGate(q, 0.5754075112519984, 11);
  sqcRZGate(q, 0.8734416341094949, 11);
  sqcRYGate(q, 3.107672830459441, 12);
  sqcRZGate(q, 3.0636650751719285, 12);
  sqcRYGate(q, -1.0162871197658643, 13);
  sqcRZGate(q, 2.7262684720263355, 13);
  sqcRYGate(q, 1.5646399688359043, 14);
  sqcRZGate(q, 1.7318552969075434, 14);
  sqcRYGate(q, -0.0847939682729401, 15);
  sqcRZGate(q, 3.067784586328723, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.5967642455083529, 0);
  sqcRZGate(q, 1.6602493774360285, 0);
  sqcRYGate(q, 0.967848953210285, 1);
  sqcRZGate(q, 2.716871471708181, 1);
  sqcRYGate(q, 1.508734910517967, 2);
  sqcRZGate(q, -2.918367316557917, 2);
  sqcRYGate(q, 0.48630438740032655, 3);
  sqcRZGate(q, 3.063026071195612, 3);
  sqcRYGate(q, -2.648097284802378, 4);
  sqcRZGate(q, 3.1359916832023433, 4);
  sqcRYGate(q, 0.007279881378330687, 5);
  sqcRZGate(q, 0.18046214037280262, 5);
  sqcRYGate(q, 3.1374876564650536, 6);
  sqcRZGate(q, -0.6938018291453706, 6);
  sqcRYGate(q, 0.006920089288682329, 7);
  sqcRZGate(q, -1.442639159549322, 7);
  sqcRYGate(q, -0.010708983001133095, 8);
  sqcRZGate(q, -3.131941867567017, 8);
  sqcRYGate(q, 1.573613852562563, 9);
  sqcRZGate(q, 6.653083840646445e-05, 9);
  sqcRYGate(q, -0.0010612490168787467, 10);
  sqcRZGate(q, -2.3206205347902276, 10);
  sqcRYGate(q, 0.5251057409273798, 11);
  sqcRZGate(q, 0.014797174001512464, 11);
  sqcRYGate(q, -1.5529236522573513, 12);
  sqcRZGate(q, -3.1399666732540648, 12);
  sqcRYGate(q, -1.574615904627942, 13);
  sqcRZGate(q, -3.0383962514184866, 13);
  sqcRYGate(q, 2.5678323834785246, 14);
  sqcRZGate(q, 1.5546993411669061, 14);
  sqcRYGate(q, -2.1885014672909393, 15);
  sqcRZGate(q, 1.9795611217948892, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.011035940573988158, 0);
  sqcRZGate(q, -2.1170573797235326, 0);
  sqcRYGate(q, -1.5657454793662593, 1);
  sqcRZGate(q, 3.135344042948188, 1);
  sqcRYGate(q, 1.564690180929908, 2);
  sqcRZGate(q, -0.00823390696918973, 2);
  sqcRYGate(q, 1.570600427874938, 3);
  sqcRZGate(q, -1.6240638944204946, 3);
  sqcRYGate(q, 2.3423183448917464, 4);
  sqcRZGate(q, -1.8946418300064318, 4);
  sqcRYGate(q, 2.9140085138999874, 5);
  sqcRZGate(q, -0.04225988094263346, 5);
  sqcRYGate(q, 2.7021787605062237, 6);
  sqcRZGate(q, -0.006394980873294819, 6);
  sqcRYGate(q, -2.9928381843717435, 7);
  sqcRZGate(q, 2.18312831612235, 7);
  sqcRYGate(q, -3.023622448892996, 8);
  sqcRZGate(q, -0.0008850022512669753, 8);
  sqcRYGate(q, 1.5714625054267093, 9);
  sqcRZGate(q, 3.1373804242183514, 9);
  sqcRYGate(q, -1.5751060732987607, 10);
  sqcRZGate(q, -0.00033048639111221695, 10);
  sqcRYGate(q, -1.5839626947769008, 11);
  sqcRZGate(q, 0.005722712124148586, 11);
  sqcRYGate(q, 1.5784958246017045, 12);
  sqcRZGate(q, -1.6429744091197556, 12);
  sqcRYGate(q, 2.0135621786839457, 13);
  sqcRZGate(q, 2.501765813477553, 13);
  sqcRYGate(q, 2.3313264710932677, 14);
  sqcRZGate(q, 2.065036123841487, 14);
  sqcRYGate(q, 0.023059738438279354, 15);
  sqcRZGate(q, 0.6241542059549419, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5648215986302865, 0);
  sqcRZGate(q, -0.010733064866959642, 0);
  sqcRYGate(q, -1.5685393932018286, 1);
  sqcRZGate(q, -1.5729605481216122, 1);
  sqcRYGate(q, 1.5673834979722108, 2);
  sqcRZGate(q, -1.572611700371043, 2);
  sqcRYGate(q, -3.019590467095001, 3);
  sqcRZGate(q, -0.05320990749159549, 3);
  sqcRYGate(q, -3.141536437279456, 4);
  sqcRZGate(q, -0.3245335678565855, 4);
  sqcRYGate(q, -0.0001729149802299387, 5);
  sqcRZGate(q, 1.5124143453539214, 5);
  sqcRYGate(q, -0.0031076154329735426, 6);
  sqcRZGate(q, 1.2241569780432604, 6);
  sqcRYGate(q, -1.5627018735673426, 7);
  sqcRZGate(q, -1.5739978573113678, 7);
  sqcRYGate(q, -3.133347294886363, 8);
  sqcRZGate(q, -1.5739354990437642, 8);
  sqcRYGate(q, 0.8016238660143733, 9);
  sqcRZGate(q, 1.4789968063192855, 9);
  sqcRYGate(q, -2.8031283289272997, 10);
  sqcRZGate(q, 1.5704300228993375, 10);
  sqcRYGate(q, -0.2867870113235621, 11);
  sqcRZGate(q, 3.13077802377679, 11);
  sqcRYGate(q, -0.0004669537318822137, 12);
  sqcRZGate(q, 0.07308141416638758, 12);
  sqcRYGate(q, -0.003567262364509993, 13);
  sqcRZGate(q, 1.2543235116864169, 13);
  sqcRYGate(q, 0.0005304151487524704, 14);
  sqcRZGate(q, 1.0389781197815928, 14);
  sqcRYGate(q, 1.108668727269219, 15);
  sqcRZGate(q, -2.600772208312535, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5757213816085098, 0);
  sqcRZGate(q, -1.375172193664845, 0);
  sqcRYGate(q, 1.3324189813945349, 1);
  sqcRZGate(q, -2.1931469934561623, 1);
  sqcRYGate(q, -1.5685388057910963, 2);
  sqcRZGate(q, -2.180190465076409, 2);
  sqcRYGate(q, 1.5716930111385192, 3);
  sqcRZGate(q, -0.611869121156837, 3);
  sqcRYGate(q, 1.582028862044347, 4);
  sqcRZGate(q, -0.5814650355523936, 4);
  sqcRYGate(q, -1.5917066548364636, 5);
  sqcRZGate(q, -0.39719363695831417, 5);
  sqcRYGate(q, 1.5704343496601965, 6);
  sqcRZGate(q, -2.944195010038346, 6);
  sqcRYGate(q, -1.5688257372482637, 7);
  sqcRZGate(q, -1.1746778148628287, 7);
  sqcRYGate(q, 1.570757556632488, 8);
  sqcRZGate(q, -1.3756837328036735, 8);
  sqcRYGate(q, -1.5704096565206784, 9);
  sqcRZGate(q, 2.518249073796936, 9);
  sqcRYGate(q, -1.5701315119448251, 10);
  sqcRZGate(q, 1.7608358803704791, 10);
  sqcRYGate(q, -3.1330535256410386, 11);
  sqcRZGate(q, 0.9382522217026308, 11);
  sqcRYGate(q, 1.571049246545547, 12);
  sqcRZGate(q, -1.374955805660483, 12);
  sqcRYGate(q, -2.6227518379998345, 13);
  sqcRZGate(q, 3.0449527447179356, 13);
  sqcRYGate(q, -2.1537151109018433, 14);
  sqcRZGate(q, -2.168640925331115, 14);
  sqcRYGate(q, 0.047723220578797604, 15);
  sqcRZGate(q, -0.8404125597136419, 15);

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
