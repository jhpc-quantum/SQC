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

  sqcRYGate(q, 1.5000416566802786, 0);
  sqcRYGate(q, -3.0116161347033907, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.22854596620434, 0);
  sqcRYGate(q, -2.4697463007455807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8368071551340783, 1);
  sqcRYGate(q, -0.18326511607092844, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0725739703291788, 1);
  sqcRYGate(q, 2.7424475124166174, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3641458466966556, 2);
  sqcRYGate(q, 2.1900580340349167, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1763277870610329, 2);
  sqcRYGate(q, -3.1353093933849716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9621041788397546, 3);
  sqcRYGate(q, 0.26246470998186483, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4774504980194418, 3);
  sqcRYGate(q, 0.4990340372292952, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8561125032073758, 4);
  sqcRYGate(q, 1.4534304510674927, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.30170199862432273, 4);
  sqcRYGate(q, 1.9726436083911434, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3380491923006943, 5);
  sqcRYGate(q, 1.5470475684825775, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.082975129864712, 5);
  sqcRYGate(q, 3.1391919672051047, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0569559696005606, 6);
  sqcRYGate(q, 0.8667018384794494, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1220253332799017, 6);
  sqcRYGate(q, 0.8823713993398659, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9455269689777995, 7);
  sqcRYGate(q, -0.5455131952553838, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.5500271933904939, 7);
  sqcRYGate(q, 2.5205694390219797, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.786611856269215, 8);
  sqcRYGate(q, -1.131076898397317, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.130061961860008, 8);
  sqcRYGate(q, -3.139595391637128, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.4587233301625817, 9);
  sqcRYGate(q, -2.254412018821058, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2065929279558203, 9);
  sqcRYGate(q, 0.6205497771672736, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.9625591767984903, 10);
  sqcRYGate(q, 1.493444086593957, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0498791933604705, 10);
  sqcRYGate(q, -0.12835288175211, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.314735857201417, 11);
  sqcRYGate(q, 1.0607173656428739, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.1170513208422745, 11);
  sqcRYGate(q, -3.124104698592318, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.0331747710359656, 12);
  sqcRYGate(q, 0.04698766820986602, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.5755831441764134, 12);
  sqcRYGate(q, 0.45054635917563607, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.4288784484643093, 13);
  sqcRYGate(q, 1.428904710933814, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.3731427980579256, 13);
  sqcRYGate(q, -0.02330462745307571, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.4654103581987739, 14);
  sqcRYGate(q, 2.915763111788984, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.1062340157161317, 14);
  sqcRYGate(q, -3.062274209421792, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.6070163127842889, 0);
  sqcRYGate(q, -0.313855576623962, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9096759384459787, 0);
  sqcRYGate(q, 2.3146333289553493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9785819548131336, 1);
  sqcRYGate(q, 3.1147324526720848, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.23847532550018702, 1);
  sqcRYGate(q, 0.06690998511874025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.037255735801583256, 2);
  sqcRYGate(q, -1.8614119268506824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.01346900503943349, 2);
  sqcRYGate(q, -0.004096628694460591, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5214484608803998, 3);
  sqcRYGate(q, -1.6340535489989114, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.018276656975600703, 3);
  sqcRYGate(q, 0.011707470992442709, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5799497484304057, 4);
  sqcRYGate(q, 1.2049544359238817, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.13561980013958766, 4);
  sqcRYGate(q, -2.423478415904492, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.46058446529605046, 5);
  sqcRYGate(q, -2.6734314770853835, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.36429108002462146, 5);
  sqcRYGate(q, -2.5801984418957775, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4775028974127684, 6);
  sqcRYGate(q, -1.9171374909284848, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.012624230736938635, 6);
  sqcRYGate(q, -3.131723595896115, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0495558108904306, 7);
  sqcRYGate(q, 2.2623115929748567, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9318698591852794, 7);
  sqcRYGate(q, -1.6646412060182199, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.7141590010694205, 8);
  sqcRYGate(q, -1.4682733444027456, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.083785248183181, 8);
  sqcRYGate(q, 3.1201301081811423, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.36793684619296163, 9);
  sqcRYGate(q, -1.3083196223732003, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.656144390007605, 9);
  sqcRYGate(q, 1.396053824837878, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6196022844738465, 10);
  sqcRYGate(q, -1.6004861111798034, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3303785593417778, 10);
  sqcRYGate(q, 1.5803978785747548, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.1697870774243286, 11);
  sqcRYGate(q, -2.006199298714339, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.1314757612314286, 11);
  sqcRYGate(q, -0.02100004513665077, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.7777067700903277, 12);
  sqcRYGate(q, -1.1473644636782738, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.5333821481020102, 12);
  sqcRYGate(q, 0.037304395676358126, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.3550462257250424, 13);
  sqcRYGate(q, 0.1397363859376634, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.3412131873649162, 13);
  sqcRYGate(q, -1.7452962834624044, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.2118850855796137, 14);
  sqcRYGate(q, -2.5368228251748444, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.35067753347366626, 14);
  sqcRYGate(q, 0.058708813327232275, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.2042852797054364, 0);
  sqcRYGate(q, -0.3008837492243996, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5870332785958534, 0);
  sqcRYGate(q, 2.125890959515954, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1214456816627134, 1);
  sqcRYGate(q, 0.579169892210757, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.536116892341587, 1);
  sqcRYGate(q, -2.093170340587096, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7370975111254419, 2);
  sqcRYGate(q, 2.512441293640482, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.032312370855214496, 2);
  sqcRYGate(q, -0.01115092861634448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8308317013140027, 3);
  sqcRYGate(q, 1.3929908095228667, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8794621946516008, 3);
  sqcRYGate(q, -0.19014299738394927, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5639534142324338, 4);
  sqcRYGate(q, -1.861121168659283, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7389475641526295, 4);
  sqcRYGate(q, -2.5254524513499503, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4952148874018173, 5);
  sqcRYGate(q, 2.8106374316601412, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3661460823866265, 5);
  sqcRYGate(q, 3.123230677751481, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8077695679207033, 6);
  sqcRYGate(q, 0.16484210093094642, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.504031489589706, 6);
  sqcRYGate(q, -0.013246197256710168, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8674541199481958, 7);
  sqcRYGate(q, -1.6327533339529872, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.085635277468131, 7);
  sqcRYGate(q, -2.925158012231133, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.6376586085099134, 8);
  sqcRYGate(q, -3.135389489811196, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.046373736612011, 8);
  sqcRYGate(q, -3.1109951457707665, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9875888288547623, 9);
  sqcRYGate(q, -1.5325607750833488, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.6867925330591675, 9);
  sqcRYGate(q, -0.3653443982270641, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.42370186779155006, 10);
  sqcRYGate(q, 1.6032321874894029, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.375202855539745, 10);
  sqcRYGate(q, 0.2639578980924053, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5465356508224377, 11);
  sqcRYGate(q, 0.4249378738597964, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.00020121294475217155, 11);
  sqcRYGate(q, 0.011034087360754327, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.441629409186861, 12);
  sqcRYGate(q, -1.5647986714112854, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.4779611074994112, 12);
  sqcRYGate(q, -0.060096655469285665, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.6370608223893375, 13);
  sqcRYGate(q, 0.4767390738066054, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.6764051792863057, 13);
  sqcRYGate(q, 2.781213203587017, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.5279665148684765, 14);
  sqcRYGate(q, -0.1705568919286451, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.22786360061074673, 14);
  sqcRYGate(q, -3.0874733359125566, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.4080211886397062, 0);
  sqcRYGate(q, 0.820287294224949, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7066303766632114, 0);
  sqcRYGate(q, 2.3464251652543413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.538925987844496, 1);
  sqcRYGate(q, 2.362210025036497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0995317270646985, 1);
  sqcRYGate(q, 1.4912257428271358, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.677871430397125, 2);
  sqcRYGate(q, 0.7903096312476938, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.642381372312526, 2);
  sqcRYGate(q, -3.1125100436056945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9375172147568155, 3);
  sqcRYGate(q, -2.097980161029076, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.021897664194026348, 3);
  sqcRYGate(q, 0.036758544456315004, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8706677379062936, 4);
  sqcRYGate(q, 1.2962218011569098, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.841947995776509, 4);
  sqcRYGate(q, -0.892888943401094, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8592891961130062, 5);
  sqcRYGate(q, 1.1717922909974254, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.134247040392473, 5);
  sqcRYGate(q, 2.5347660523723112, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.646305681514213, 6);
  sqcRYGate(q, 1.1586267596469177, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7192178862457688, 6);
  sqcRYGate(q, -1.2275208750721802, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5948497909594375, 7);
  sqcRYGate(q, 3.0122269619660207, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.5246939705455356, 7);
  sqcRYGate(q, -3.129678782406642, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5930862897526792, 8);
  sqcRYGate(q, 1.5639593654108115, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.10487445952707564, 8);
  sqcRYGate(q, 0.6633042880679927, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6765358084609217, 9);
  sqcRYGate(q, 1.2805312755584093, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2061280374189833, 9);
  sqcRYGate(q, -3.0306965227115428, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.3200659565298252, 10);
  sqcRYGate(q, 2.3614273268091246, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0564416663213514, 10);
  sqcRYGate(q, 2.8017398703004064, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.8409111459352593, 11);
  sqcRYGate(q, 1.2382739021686635, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.0057829307250131644, 11);
  sqcRYGate(q, -0.01348389678247841, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.7268442511423334, 12);
  sqcRYGate(q, 1.6075598182470234, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.527638391748639, 12);
  sqcRYGate(q, 0.7256908970095957, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.7634033803375022, 13);
  sqcRYGate(q, -2.3930018001730797, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.458776718656552, 13);
  sqcRYGate(q, -0.9129846743217246, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.6913551130276021, 14);
  sqcRYGate(q, -2.300530387054128, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.2230953719899063, 14);
  sqcRYGate(q, -1.2920413967077806, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.0765715647820895, 0);
  sqcRYGate(q, -3.0689847430453545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0872303566503394, 0);
  sqcRYGate(q, -1.5088185116648836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0919303896571115, 1);
  sqcRYGate(q, -1.8238957673250873, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.11418588838241651, 1);
  sqcRYGate(q, 1.911131258832453, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9524123888640803, 2);
  sqcRYGate(q, 1.1659151576317575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.695055216009296, 2);
  sqcRYGate(q, 2.90133938067584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.347650311227747, 3);
  sqcRYGate(q, 1.7998953632734966, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0005271198036623306, 3);
  sqcRYGate(q, -0.010139004301414012, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6496887494473551, 4);
  sqcRYGate(q, -1.9682479349579862, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2644306470177113, 4);
  sqcRYGate(q, -1.801408496436155, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.049011347401147994, 5);
  sqcRYGate(q, -2.7029539273365284, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.02753808882363906, 5);
  sqcRYGate(q, 0.051812103361374866, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.43896307560593173, 6);
  sqcRYGate(q, -3.0748247375285143, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.17752283760049004, 6);
  sqcRYGate(q, 1.6369965569791871, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4860105426347734, 7);
  sqcRYGate(q, 1.5680928319875018, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.489259652565069, 7);
  sqcRYGate(q, -3.104411574572226, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.17668010451054048, 8);
  sqcRYGate(q, 0.3187483674070517, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.314369556468229, 8);
  sqcRYGate(q, -1.0857151567623236, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.0709414668937143, 9);
  sqcRYGate(q, -0.755789796811496, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.9248435296025077, 9);
  sqcRYGate(q, 0.010821527902151323, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.727808695799821, 10);
  sqcRYGate(q, 0.2851100592481153, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.03127963050687936, 10);
  sqcRYGate(q, 1.720126919522389, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5574589723961427, 11);
  sqcRYGate(q, 1.5900316647431687, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.055137283642022084, 11);
  sqcRYGate(q, 3.085988538909179, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.019357997425922993, 12);
  sqcRYGate(q, -1.5846125478968487, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.15581722773089, 12);
  sqcRYGate(q, -2.09875192087201, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.2156970955239474, 13);
  sqcRYGate(q, 0.8583517099059729, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.0271063142237664, 13);
  sqcRYGate(q, -3.1358217505025143, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.8451629030206496, 14);
  sqcRYGate(q, 2.1513254406563584, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.28650923332796907, 14);
  sqcRYGate(q, -1.452439075678346, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.15769652890785135, 0);
  sqcRYGate(q, 1.9763392808900173, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9670286700954414, 0);
  sqcRYGate(q, -0.68656542544087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.020408184263414, 1);
  sqcRYGate(q, 1.0167123450457893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2323432814956846, 1);
  sqcRYGate(q, 0.2736514654228568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.323371576868092, 2);
  sqcRYGate(q, -2.347144942185667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.229364504450774, 2);
  sqcRYGate(q, 1.238718134061238, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.750371793528065, 3);
  sqcRYGate(q, -0.6011295885533273, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0975291081295877, 3);
  sqcRYGate(q, -3.113481784011687, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6979273173571804, 4);
  sqcRYGate(q, 1.3887499415859121, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8714066509352643, 4);
  sqcRYGate(q, 2.8397797037297496, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8082229211873506, 5);
  sqcRYGate(q, 3.0149829227570963, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.05146064398924377, 5);
  sqcRYGate(q, -3.102574735909146, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.806640091982461, 6);
  sqcRYGate(q, -2.370764380791826, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.831238278404634, 6);
  sqcRYGate(q, -0.11822887943711002, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.283887724358653, 7);
  sqcRYGate(q, 0.6531020689877539, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.006343948660827027, 7);
  sqcRYGate(q, -0.05901694840564982, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6290431532371459, 8);
  sqcRYGate(q, 1.0684634314581443, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.3311787970359323, 8);
  sqcRYGate(q, 1.5177527552187815, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8362241781819701, 9);
  sqcRYGate(q, 1.6630674132739456, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3212726786717486, 9);
  sqcRYGate(q, -3.128091745025855, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.137487193040366, 10);
  sqcRYGate(q, 0.5727428180442979, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.06348224556016736, 10);
  sqcRYGate(q, -0.35343311663795235, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.47561100507858944, 11);
  sqcRYGate(q, -1.786498438431583, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.140296188289513, 11);
  sqcRYGate(q, 3.0871605939070537, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.01013746888364, 12);
  sqcRYGate(q, 1.2337578934862945, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.7835035404864072, 12);
  sqcRYGate(q, 1.4918071841983738, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.23156829251765426, 13);
  sqcRYGate(q, -2.704690829034471, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.559903272462183, 13);
  sqcRYGate(q, 0.05993989217463902, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.10379073635758296, 14);
  sqcRYGate(q, -1.778136980118893, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.5621056374055673, 14);
  sqcRYGate(q, 1.3683872575705631, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.5873092519339784, 0);
  sqcRYGate(q, 2.5299240335138875, 1);
  sqcRYGate(q, 0.8970835198891987, 2);
  sqcRYGate(q, 1.752736955707148, 3);
  sqcRYGate(q, -0.9927578747558865, 4);
  sqcRYGate(q, -2.330729742487325, 5);
  sqcRYGate(q, 2.633998931904527, 6);
  sqcRYGate(q, 1.9283520400847776, 7);
  sqcRYGate(q, 2.4151078323818456, 8);
  sqcRYGate(q, -0.5164051241952552, 9);
  sqcRYGate(q, -0.6516002125560627, 10);
  sqcRYGate(q, -3.051979088552649, 11);
  sqcRYGate(q, 0.6426629789140827, 12);
  sqcRYGate(q, -2.5240048769947556, 13);
  sqcRYGate(q, -2.053223717915912, 14);
  sqcRYGate(q, -0.45222950096712666, 15);

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
