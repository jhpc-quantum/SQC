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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -2.0165724546171484, 0);
  sqcRYGate(q, -0.598117704501961, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.38522830611740355, 0);
  sqcRYGate(q, 2.0381908308416827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3424291799548989, 1);
  sqcRYGate(q, 1.2159782986277001, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3625294252785505, 1);
  sqcRYGate(q, -2.527481752046071, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.169007581283983, 2);
  sqcRYGate(q, 1.6111865853531468, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.12208173265412159, 2);
  sqcRYGate(q, -2.7220313089416597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.494624611447532, 3);
  sqcRYGate(q, -1.8129922779596435, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.098945214535259, 3);
  sqcRYGate(q, 2.8199997756065653, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5916359057372893, 4);
  sqcRYGate(q, -1.1274639385310756, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4322195725204434, 4);
  sqcRYGate(q, 2.914427338770917, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0381827693916934, 5);
  sqcRYGate(q, 0.6502076928644184, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7653717504709912, 5);
  sqcRYGate(q, -1.100573503145969, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6669600102516489, 6);
  sqcRYGate(q, 2.901963065516162, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9443212927294844, 6);
  sqcRYGate(q, -1.8512048567615906, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1065599221581257, 7);
  sqcRYGate(q, 0.9153090518366874, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.9750418562631236, 7);
  sqcRYGate(q, -0.29282707485199394, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.24718801780292396, 8);
  sqcRYGate(q, 2.2239888677209834, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.5315736714683204, 8);
  sqcRYGate(q, -0.009093113442047773, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.2597979426078858, 9);
  sqcRYGate(q, -0.738685320739582, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.7696393297685299, 9);
  sqcRYGate(q, 1.199034226010899, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.4904328613750315, 10);
  sqcRYGate(q, 2.6296878828383043, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4600026441411142, 10);
  sqcRYGate(q, -0.6073693689897439, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.1558548699151485, 0);
  sqcRYGate(q, 0.7359733673405913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.728104596983616, 0);
  sqcRYGate(q, 0.7541292719552132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.01607269037263137, 1);
  sqcRYGate(q, -0.8116836949140301, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2966526871316144, 1);
  sqcRYGate(q, -1.894512014324723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.073430584502084, 2);
  sqcRYGate(q, -2.4940147788439986, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3719010592481635, 2);
  sqcRYGate(q, 1.5143349680320375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8673432709019977, 3);
  sqcRYGate(q, 1.8307606676081656, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8764735514983832, 3);
  sqcRYGate(q, -2.9250808176680834, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4041887777853848, 4);
  sqcRYGate(q, 2.3887807250145525, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.225304794765367, 4);
  sqcRYGate(q, 0.007574693952085099, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2504575398486524, 5);
  sqcRYGate(q, -0.60325548777806, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.164591808476203, 5);
  sqcRYGate(q, 2.0044678603349104, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.409365564027882, 6);
  sqcRYGate(q, 0.13347464074623439, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.1512809956862639, 6);
  sqcRYGate(q, -0.27614136725610106, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5545392361402524, 7);
  sqcRYGate(q, 1.127548829019636, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0277210387478686, 7);
  sqcRYGate(q, -2.1982111612004767, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.39077464204132223, 8);
  sqcRYGate(q, -2.120158483443209, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.22411138325440694, 8);
  sqcRYGate(q, -0.18690859953760164, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.604900821685142, 9);
  sqcRYGate(q, 2.8089855107159414, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.865821910304707, 9);
  sqcRYGate(q, 0.026655448735191215, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6660928652394182, 10);
  sqcRYGate(q, -0.712067365499354, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.9136737399477277, 10);
  sqcRYGate(q, 2.233972335395154, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.9212322164118607, 0);
  sqcRYGate(q, 1.0870777083644683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.025805804024948, 0);
  sqcRYGate(q, -1.9781672905280852, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.005691450764022221, 1);
  sqcRYGate(q, -3.031173749877404, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1747266447764309, 1);
  sqcRYGate(q, 0.20778789819421756, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.372740807829557, 2);
  sqcRYGate(q, -0.6146839719642959, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9926729380271158, 2);
  sqcRYGate(q, 2.217847150405964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8006969140816573, 3);
  sqcRYGate(q, -0.7159893681586924, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.16126235213095175, 3);
  sqcRYGate(q, -0.46558306369590735, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8541073213409307, 4);
  sqcRYGate(q, 2.0819397182173605, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.737326239668338, 4);
  sqcRYGate(q, -3.0235160382183848, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.285246951193035, 5);
  sqcRYGate(q, 0.9467551267359069, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.947223903855046, 5);
  sqcRYGate(q, -1.941046695204051, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5237586396341234, 6);
  sqcRYGate(q, 0.013261346802929692, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.113733122886048, 6);
  sqcRYGate(q, 3.055440639404822, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2296694774203823, 7);
  sqcRYGate(q, 0.9619212957218419, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.1577849152309836, 7);
  sqcRYGate(q, 2.290273829252747, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.6640892303601547, 8);
  sqcRYGate(q, -1.7146781425356352, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.902570196005312, 8);
  sqcRYGate(q, -2.3138502760766313, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9324204456124088, 9);
  sqcRYGate(q, -2.956491186170758, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4212653263102766, 9);
  sqcRYGate(q, 3.115696630353769, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.457304918741684, 10);
  sqcRYGate(q, -0.5118627357523549, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3469480469187787, 10);
  sqcRYGate(q, 0.028661634435301557, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5384879319750824, 0);
  sqcRYGate(q, 2.904163509482033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.288191127993721, 0);
  sqcRYGate(q, 1.6328856670177556, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6057995031373966, 1);
  sqcRYGate(q, 0.8972912512332881, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1147807157248926, 1);
  sqcRYGate(q, 1.760043402500015, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3160348793532792, 2);
  sqcRYGate(q, -2.465516140330657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3070527768639444, 2);
  sqcRYGate(q, 2.3902288017511477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9590828400452847, 3);
  sqcRYGate(q, 2.2765312158649977, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4274732277872053, 3);
  sqcRYGate(q, -0.031085941089594723, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.072485256364628, 4);
  sqcRYGate(q, -1.2534638673227907, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.953235629980532, 4);
  sqcRYGate(q, -3.1151132443367633, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0832456965039199, 5);
  sqcRYGate(q, 0.3170591465730251, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7424602642185951, 5);
  sqcRYGate(q, 1.5646961226493805, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5258502954648447, 6);
  sqcRYGate(q, -1.9759081297301435, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.064743240396675, 6);
  sqcRYGate(q, -1.94200414094029, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2546761245100493, 7);
  sqcRYGate(q, -1.0483318701109736, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6977235455792234, 7);
  sqcRYGate(q, -0.9648191852605953, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.0171821124776939, 8);
  sqcRYGate(q, 1.48057459417711, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.07611008465555169, 8);
  sqcRYGate(q, 2.03371359934403, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.5790643462825122, 9);
  sqcRYGate(q, 3.108080944783482, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.2821849730006888, 9);
  sqcRYGate(q, -2.6253825005168254, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4768044041431934, 10);
  sqcRYGate(q, -3.0542304018413797, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.965238828882977, 10);
  sqcRYGate(q, 3.0749843759674165, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0418993254718536, 0);
  sqcRYGate(q, 1.741085201056886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11296009353342029, 0);
  sqcRYGate(q, -0.001897229676855737, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.235309363591047, 1);
  sqcRYGate(q, -1.2148176743373964, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8391112722448254, 1);
  sqcRYGate(q, 2.319314539510531, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6725945814549934, 2);
  sqcRYGate(q, -0.025374691261261385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7368529310157301, 2);
  sqcRYGate(q, 2.6479922049806195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.108510410583855, 3);
  sqcRYGate(q, 1.0813118864600657, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7333121814863199, 3);
  sqcRYGate(q, 0.15838427839885053, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2539029119608573, 4);
  sqcRYGate(q, 0.9792051136005164, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.16737870201293337, 4);
  sqcRYGate(q, -0.06705583937852336, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.361514627483872, 5);
  sqcRYGate(q, 1.9824352105905543, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.918936909272782, 5);
  sqcRYGate(q, 2.4720275597696872, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7007316689907768, 6);
  sqcRYGate(q, 1.4203994885194122, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.014603514704710996, 6);
  sqcRYGate(q, 2.616698112454796, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5439267192529662, 7);
  sqcRYGate(q, 0.41830459971436285, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.271458578878216, 7);
  sqcRYGate(q, 1.1945780229111982, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.17531649956855874, 8);
  sqcRYGate(q, 2.1337420472676234, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0882188799459773, 8);
  sqcRYGate(q, 0.18392105502168093, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7036045990617106, 9);
  sqcRYGate(q, -0.45721882760562504, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.291554914473883, 9);
  sqcRYGate(q, -0.5214758622788285, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.0226144559557073, 10);
  sqcRYGate(q, -1.9235680954084424, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.773474662082494, 10);
  sqcRYGate(q, -2.6535963520711583, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9170319198886745, 0);
  sqcRYGate(q, -2.8806020555445775, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1542534383230607, 0);
  sqcRYGate(q, 0.7649579153841026, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.449850053575644, 1);
  sqcRYGate(q, 0.8604205862469732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.01579492576052841, 1);
  sqcRYGate(q, -0.14943427845672463, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.923926872014036, 2);
  sqcRYGate(q, 1.9106334713104314, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0878426080276293, 2);
  sqcRYGate(q, -0.5326676281357191, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1076375824390454, 3);
  sqcRYGate(q, 0.09457748419488787, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.124133972291452, 3);
  sqcRYGate(q, -3.080453186289564, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3367846542981927, 4);
  sqcRYGate(q, -0.3475606441090484, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8475034061719144, 4);
  sqcRYGate(q, 1.5183470431252566, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3571803327829663, 5);
  sqcRYGate(q, 3.1232168404659406, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.1000912040481623, 5);
  sqcRYGate(q, -1.5743237612523329, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5783785866180865, 6);
  sqcRYGate(q, 0.07075864660846243, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.048100502275154715, 6);
  sqcRYGate(q, 2.268849228874574, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4419423576582275, 7);
  sqcRYGate(q, -2.4395058724191983, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7408274105518151, 7);
  sqcRYGate(q, 3.1061952748805637, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.2391971343532635, 8);
  sqcRYGate(q, -2.9736304113207135, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.7490663036344714, 8);
  sqcRYGate(q, -0.43047378031881234, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.352812483522568, 9);
  sqcRYGate(q, 0.8429644968454317, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.629919163192699, 9);
  sqcRYGate(q, -2.064960585650394, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.08904950052086, 10);
  sqcRYGate(q, -1.9885247258937548, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0482741379085647, 10);
  sqcRYGate(q, -1.3248318221905047, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8573140549128998, 0);
  sqcRYGate(q, -2.707421556591302, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5674152118613587, 0);
  sqcRYGate(q, -2.6413693946627865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8036283399746775, 1);
  sqcRYGate(q, 2.4916814176011215, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.542148435638067, 1);
  sqcRYGate(q, -0.6475195466538608, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2139012996681915, 2);
  sqcRYGate(q, -1.1483750771007122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5597833661068705, 2);
  sqcRYGate(q, -2.9278867254559344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7062714715235918, 3);
  sqcRYGate(q, -2.068812900287453, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1022282753567323, 3);
  sqcRYGate(q, -2.102907517261203, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2801805924920053, 4);
  sqcRYGate(q, 0.3620717702394662, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.024676787816607777, 4);
  sqcRYGate(q, 0.014687367281449147, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7774828197853854, 5);
  sqcRYGate(q, -1.6491657635231916, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8721855076980627, 5);
  sqcRYGate(q, -0.6572518061106523, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.02587657456680237, 6);
  sqcRYGate(q, 0.522488040180737, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.41413118092157486, 6);
  sqcRYGate(q, -1.6029656312740321, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0829236350825869, 7);
  sqcRYGate(q, 1.3138251486849262, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.0301996766704007, 7);
  sqcRYGate(q, -1.062260303315277, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.724489407516301, 8);
  sqcRYGate(q, 3.112845611319113, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.594318418193053, 8);
  sqcRYGate(q, -3.0457048698177993, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.8889136568561513, 9);
  sqcRYGate(q, 2.3534595669578535, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.995428637977383, 9);
  sqcRYGate(q, 0.003324858599063063, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.7049318443503293, 10);
  sqcRYGate(q, -0.6868238139210252, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.491101798625821, 10);
  sqcRYGate(q, 1.252413395139814, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5693408179140453, 0);
  sqcRYGate(q, -2.7882322569784694, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3416162863529504, 0);
  sqcRYGate(q, -1.4998818101325602, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6544058274357547, 1);
  sqcRYGate(q, 2.839399136325385, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.60217744001984, 1);
  sqcRYGate(q, 1.2365928390502114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.897850816113733, 2);
  sqcRYGate(q, -0.5055808890545607, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.092628440320758, 2);
  sqcRYGate(q, 0.040383040025843364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5530948449878168, 3);
  sqcRYGate(q, -1.0636181452982296, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0476174785483328, 3);
  sqcRYGate(q, -0.33072075286403113, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.509412531669213, 4);
  sqcRYGate(q, 1.6798965421472385, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0929223473171028, 4);
  sqcRYGate(q, -3.125727122667997, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.521391800186435, 5);
  sqcRYGate(q, -2.601294873093797, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.725731126535585, 5);
  sqcRYGate(q, -2.545249255400262, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5201657277028031, 6);
  sqcRYGate(q, 1.8441064170156574, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0945095569629903, 6);
  sqcRYGate(q, -1.784999927841707, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8893101627033608, 7);
  sqcRYGate(q, 2.467781170190712, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.994442733871929, 7);
  sqcRYGate(q, 1.8319101897028203, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.009781500076536, 8);
  sqcRYGate(q, 3.0834621478699065, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5248709633753041, 8);
  sqcRYGate(q, 3.097324014336565, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7997985582007434, 9);
  sqcRYGate(q, 1.8529097401168868, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4889342126984604, 9);
  sqcRYGate(q, -1.5598690483292001, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.8899837207800418, 10);
  sqcRYGate(q, -2.9036577438470865, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.986459800500184, 10);
  sqcRYGate(q, 0.6233101918630819, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.6044583740128373, 0);
  sqcRYGate(q, -1.1316993181818784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9167975009586895, 0);
  sqcRYGate(q, -0.1903058429269473, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.091752930581447, 1);
  sqcRYGate(q, -1.1333942877733112, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.116521889261667, 1);
  sqcRYGate(q, 0.1353782715484043, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0308686214736138, 2);
  sqcRYGate(q, 1.4188405805691668, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.006622721761591, 2);
  sqcRYGate(q, 1.2718299162324644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.428209527111267, 3);
  sqcRYGate(q, 1.3848762906943168, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.587905924911346, 3);
  sqcRYGate(q, -2.921318339464475, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5589057757045, 4);
  sqcRYGate(q, 2.246391753192479, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.00224548022810036, 4);
  sqcRYGate(q, -2.250582963025998, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0463714638558592, 5);
  sqcRYGate(q, -1.528582203874847, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1850871149692717, 5);
  sqcRYGate(q, 2.5675433685856315, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.063035097834126, 6);
  sqcRYGate(q, -0.025674673871430406, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4228865758844416, 6);
  sqcRYGate(q, 0.06208070588931369, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.02332150925058052, 7);
  sqcRYGate(q, -2.464911640632356, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6218051733308498, 7);
  sqcRYGate(q, 1.5156822279230646, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0979652645421587, 8);
  sqcRYGate(q, 2.546411818343504, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4230823234196572, 8);
  sqcRYGate(q, 2.18403041178201, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.053040525357924, 9);
  sqcRYGate(q, -2.8024447722889643, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.7976840411271353, 9);
  sqcRYGate(q, -3.0693343038038203, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9612059523726586, 10);
  sqcRYGate(q, -0.7570803562692117, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.02006682354758, 10);
  sqcRYGate(q, 1.3747012559835812, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7095614450861092, 0);
  sqcRYGate(q, 0.3150665020506418, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6673805010416944, 0);
  sqcRYGate(q, -0.3321730270781859, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.968907916337697, 1);
  sqcRYGate(q, -3.053081653399665, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5062081938211813, 1);
  sqcRYGate(q, 2.0123499887682605, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0213639420218903, 2);
  sqcRYGate(q, 2.465517482067208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5569207247380275, 2);
  sqcRYGate(q, -2.454303531270754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.401489512531921, 3);
  sqcRYGate(q, -2.3749043089363555, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.026681848475784697, 3);
  sqcRYGate(q, -0.04074991563839702, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2950099195220748, 4);
  sqcRYGate(q, 0.517878696946223, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.134138243092765, 4);
  sqcRYGate(q, 2.984716189954929, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5172015155788412, 5);
  sqcRYGate(q, -3.1050669762113587, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9279628481859024, 5);
  sqcRYGate(q, 2.174078074523736, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.228269617103951, 6);
  sqcRYGate(q, -1.5965498359738621, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.576849856551923, 6);
  sqcRYGate(q, -3.108187513895658, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.868958699930295, 7);
  sqcRYGate(q, 3.1041077264507764, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.03448172448457647, 7);
  sqcRYGate(q, 3.1289963962792258, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.185909744599396, 8);
  sqcRYGate(q, 0.07603325246991705, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.15410004105861005, 8);
  sqcRYGate(q, 1.822538380903822, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7419392965923963, 9);
  sqcRYGate(q, 2.979146720195013, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.529033754198494, 9);
  sqcRYGate(q, -0.006976422064985499, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.25432688055069885, 10);
  sqcRYGate(q, -3.138846744551402, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.17716072321001003, 10);
  sqcRYGate(q, 1.8005463553341112, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.493210539884351, 0);
  sqcRYGate(q, -0.05623030232634019, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0017234933313821088, 0);
  sqcRYGate(q, 3.0197249367033883, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.017038174570739712, 1);
  sqcRYGate(q, 2.4160696861933704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.09971438370700181, 1);
  sqcRYGate(q, 1.0142989043072002, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.121313276079746, 2);
  sqcRYGate(q, -1.5334450035482456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7223878674528129, 2);
  sqcRYGate(q, 2.6815351585241793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2094029918634117, 3);
  sqcRYGate(q, 1.319703442553191, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.10348461378495498, 3);
  sqcRYGate(q, 0.04269832272621742, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4172669955345287, 4);
  sqcRYGate(q, 1.4359520823181793, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1148077028069374, 4);
  sqcRYGate(q, 0.21443969580810654, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6148512432069504, 5);
  sqcRYGate(q, 0.9918919076126552, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8620834222192079, 5);
  sqcRYGate(q, -2.595077686941089, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.594286663093441, 6);
  sqcRYGate(q, 1.2807197208441403, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.111155526319462, 6);
  sqcRYGate(q, -1.9291202697447511, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.672754825354449, 7);
  sqcRYGate(q, 0.5927497179408467, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.6273619214051532, 7);
  sqcRYGate(q, -0.04421170540321565, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9819134673938503, 8);
  sqcRYGate(q, -1.0253640933972201, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.10642971089459, 8);
  sqcRYGate(q, 3.0644171594566414, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9015435822142304, 9);
  sqcRYGate(q, -2.9994831335006555, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.7885934073353597, 9);
  sqcRYGate(q, 3.14102819980952, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.205996069359117, 10);
  sqcRYGate(q, 1.7800946774173252, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5886056840150953, 10);
  sqcRYGate(q, -2.831135561468174, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.9231492343075876, 0);
  sqcRYGate(q, -1.821662225310632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8557057652865102, 0);
  sqcRYGate(q, -0.8015222754211462, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1397797012604665, 1);
  sqcRYGate(q, -2.0153440826909796, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9978179981291015, 1);
  sqcRYGate(q, -2.6902194254652136, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.408617955280989, 2);
  sqcRYGate(q, -1.696844958034984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.313402001165642, 2);
  sqcRYGate(q, 0.04333436757110576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1137332768054555, 3);
  sqcRYGate(q, -1.5456125776158487, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.08790736197868036, 3);
  sqcRYGate(q, -2.912351156114001, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7726230011841702, 4);
  sqcRYGate(q, 1.806400757986295, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5520743610044194, 4);
  sqcRYGate(q, -0.99834346623848, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5700945589512596, 5);
  sqcRYGate(q, 1.556610076577383, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5544375099778458, 5);
  sqcRYGate(q, 2.0089689126000922, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.726260977766914, 6);
  sqcRYGate(q, 1.8866215810452314, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6093831772109538, 6);
  sqcRYGate(q, 2.0033965417718624, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8683789362382328, 7);
  sqcRYGate(q, -1.7966713721068515, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.140804495668517, 7);
  sqcRYGate(q, -3.1392713809573016, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.547994963298108, 8);
  sqcRYGate(q, 2.539665901655339, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5437477421504187, 8);
  sqcRYGate(q, 0.36475612315698047, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3022078275101452, 9);
  sqcRYGate(q, -1.0145697502007636, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6187500516834614, 9);
  sqcRYGate(q, 0.8487601484775941, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.4308164484637078, 10);
  sqcRYGate(q, -1.3694631236692034, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.18391972501465045, 10);
  sqcRYGate(q, 0.0019929643658356255, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.20949792483494442, 0);
  sqcRYGate(q, -0.8374466301639005, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3162828090420455, 0);
  sqcRYGate(q, 1.358103492954246, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.631439015863482, 1);
  sqcRYGate(q, -2.7349346055941153, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.284393785432541, 1);
  sqcRYGate(q, -0.007461339925976418, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1166967588378527, 2);
  sqcRYGate(q, -1.3717656142832109, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.041086094391155126, 2);
  sqcRYGate(q, 3.0832023323749485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2951453465613447, 3);
  sqcRYGate(q, -1.5828805535205097, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1815400029240557, 3);
  sqcRYGate(q, 1.7028897898945763, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5722281003707943, 4);
  sqcRYGate(q, 1.5758546803427849, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9828324319210517, 4);
  sqcRYGate(q, -1.5534236594507342, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2898512904766122, 5);
  sqcRYGate(q, 2.8681172657363487, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.00011246072030229092, 5);
  sqcRYGate(q, 0.006356036304851759, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7999003014972808, 6);
  sqcRYGate(q, 1.7470483339030096, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0138956106488217, 6);
  sqcRYGate(q, 1.1148906937166059, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.719864211349089, 7);
  sqcRYGate(q, -1.2504345758832889, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.141108610154712, 7);
  sqcRYGate(q, 3.029898776427838, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.3934360185098225, 8);
  sqcRYGate(q, -1.484630198414413, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.1377888184797413, 8);
  sqcRYGate(q, -0.0024932843671505722, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.073958048117413, 9);
  sqcRYGate(q, 1.7454896896373224, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9960023067742263, 9);
  sqcRYGate(q, -1.5799644067346303, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.7654110193777863, 10);
  sqcRYGate(q, 1.3480532293815912, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9535420349434554, 10);
  sqcRYGate(q, 0.0038218310084187214, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.231280199932444, 0);
  sqcRYGate(q, 0.7795066069137034, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3050436602293374, 0);
  sqcRYGate(q, -0.6128595482604183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1806409267867797, 1);
  sqcRYGate(q, -1.1825663986093966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3855955127046808, 1);
  sqcRYGate(q, 3.1055744393172766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0329151265844667, 2);
  sqcRYGate(q, -0.011713126379430647, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5784537996876402, 2);
  sqcRYGate(q, 2.5226006272433517, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0003272867486270315, 3);
  sqcRYGate(q, 3.1336948757692906, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0043908435885185, 3);
  sqcRYGate(q, -0.01714938787803799, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.07952582676856247, 4);
  sqcRYGate(q, -0.3016998323886965, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.685908697870409, 4);
  sqcRYGate(q, 3.117901285108259, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1595071472907827, 5);
  sqcRYGate(q, -0.7663397912360573, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0002993729228979447, 5);
  sqcRYGate(q, -3.1413272695423653, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7424606686508857, 6);
  sqcRYGate(q, -0.11966935639585807, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0052802789274055024, 6);
  sqcRYGate(q, 0.8192589021921802, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9166594722837598, 7);
  sqcRYGate(q, -0.7325010534867936, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.002784418556109468, 7);
  sqcRYGate(q, 2.436374226526722, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.17248225875832662, 8);
  sqcRYGate(q, -2.306812978001236, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.351671189872973, 8);
  sqcRYGate(q, 3.0264993358861316, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5402350825517426, 9);
  sqcRYGate(q, 2.5927486469762204, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1354819212946827, 9);
  sqcRYGate(q, 1.8039825436809052, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.04528791629173244, 10);
  sqcRYGate(q, -3.1228893549424166, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.269865628173544, 10);
  sqcRYGate(q, -1.5661219048281698, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3569590684655104, 0);
  sqcRYGate(q, -2.248224342715033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.032721040443458, 0);
  sqcRYGate(q, 1.969876922239056, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3020681660661442, 1);
  sqcRYGate(q, -2.8031292148891853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.00029773285450678406, 1);
  sqcRYGate(q, 0.006789827001505877, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.011262388746339, 2);
  sqcRYGate(q, -1.5644624705786916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5588652590861019, 2);
  sqcRYGate(q, 3.134035174460986, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.007590286687589654, 3);
  sqcRYGate(q, -1.4852018752253207, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5494906366896029, 3);
  sqcRYGate(q, -1.4955851934607924, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5457241039258314, 4);
  sqcRYGate(q, 2.164607514509723, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5658656971340275, 4);
  sqcRYGate(q, 0.00805085477230072, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1541091702114443, 5);
  sqcRYGate(q, -0.7596481104896441, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0006778266745126567, 5);
  sqcRYGate(q, -3.139596845077847, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1061211529389796, 6);
  sqcRYGate(q, 2.1209724600915383, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.006785015768293157, 6);
  sqcRYGate(q, 1.4939547771748158, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7071292985127335, 7);
  sqcRYGate(q, -1.0002895327145356, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0003624717027390645, 7);
  sqcRYGate(q, -3.132315954589444, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.5893587081873664, 8);
  sqcRYGate(q, -0.006579817684917533, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5894074448496083, 8);
  sqcRYGate(q, -1.5658363262668393, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.22553491056455344, 9);
  sqcRYGate(q, -1.5656516329692103, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5473778216385083, 9);
  sqcRYGate(q, 1.5910528642703103, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5771408143139818, 10);
  sqcRYGate(q, 1.7558631421708049, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5613049723941557, 10);
  sqcRYGate(q, 1.8179447469336196, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.321630124276175, 0);
  sqcRYGate(q, -2.6890721899728263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.742990903521223, 0);
  sqcRYGate(q, -1.0704875055872494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9500446605942016, 1);
  sqcRYGate(q, -0.3396543832106365, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.127413985204166, 1);
  sqcRYGate(q, -0.0038299922368398853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4849873897197066, 2);
  sqcRYGate(q, 1.588211989475334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.61443386982864, 2);
  sqcRYGate(q, 3.136329896999663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5551253789828605, 3);
  sqcRYGate(q, 1.5990404937834661, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7396263817212123, 3);
  sqcRYGate(q, 0.06836171329375781, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0599628357173767, 4);
  sqcRYGate(q, 2.4654981211231726, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1318881086865575, 4);
  sqcRYGate(q, 3.141501797813905, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.25959412493782236, 5);
  sqcRYGate(q, -1.604999402480436, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.568600877265796, 5);
  sqcRYGate(q, -1.5701087631689434, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5764631217773761, 6);
  sqcRYGate(q, 2.944946574547373, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.007651664439086048, 6);
  sqcRYGate(q, -3.0134817101985196, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6231900027980735, 7);
  sqcRYGate(q, -1.5457023612357652, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5720998821958823, 7);
  sqcRYGate(q, -0.6157537156570712, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5712732417709503, 8);
  sqcRYGate(q, -1.5707310658971156, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5693733220388664, 8);
  sqcRYGate(q, -1.7318019296559322, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9615143718341796, 9);
  sqcRYGate(q, -1.5664758159111578, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5710694751965537, 9);
  sqcRYGate(q, 3.141223468901566, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5676828704526973, 10);
  sqcRYGate(q, -0.04930095695803708, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5679810893909965, 10);
  sqcRYGate(q, 2.8730261114818476, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.903030800438024, 0);
  sqcRYGate(q, 1.5142225801215865, 1);
  sqcRYGate(q, -1.533429536244022, 2);
  sqcRYGate(q, 1.5558684269890746, 3);
  sqcRYGate(q, 0.05888141791218349, 4);
  sqcRYGate(q, -1.570738409338883, 5);
  sqcRYGate(q, -1.5764541233341536, 6);
  sqcRYGate(q, -1.5710594697098763, 7);
  sqcRYGate(q, -1.5709533348993494, 8);
  sqcRYGate(q, 0.9617267073707563, 9);
  sqcRYGate(q, -1.5680127270386632, 10);
  sqcRYGate(q, -1.5731335021977024, 11);

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
