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

  sqcRYGate(q, 0.11859652799968866, 0);
  sqcRYGate(q, -0.8887300814961928, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2679576918287069, 0);
  sqcRYGate(q, 1.8734898269340872, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.810252133820618, 1);
  sqcRYGate(q, 1.6345227340076054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3797549699547185, 1);
  sqcRYGate(q, 3.1050551601829057, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.640603609157504, 2);
  sqcRYGate(q, -2.328728393045382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.36097620174855194, 2);
  sqcRYGate(q, -0.33791812095298795, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0478519133613355, 3);
  sqcRYGate(q, -1.4338414248691758, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2524767245521623, 3);
  sqcRYGate(q, 0.13634239347316068, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.956165847184737, 4);
  sqcRYGate(q, -3.0323330359254546, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5138425781287648, 4);
  sqcRYGate(q, -1.63087057432481, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2750884238084605, 5);
  sqcRYGate(q, -0.0044626463353596435, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4133845115568737, 5);
  sqcRYGate(q, 1.459711661726036, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0510491358583804, 6);
  sqcRYGate(q, -2.462483704188379, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1625360673320124, 6);
  sqcRYGate(q, -0.6667515503948559, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.38609554470250096, 7);
  sqcRYGate(q, 1.9018741524578662, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0633547500103693, 7);
  sqcRYGate(q, -3.126872711936097, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.1537938960189973, 8);
  sqcRYGate(q, 1.4654871016119033, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.14610639575530382, 8);
  sqcRYGate(q, -0.08249103724241813, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.730631381298152, 9);
  sqcRYGate(q, -1.238188698068292, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.572029512506793, 9);
  sqcRYGate(q, 1.6219732336793344, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.528311674419655, 10);
  sqcRYGate(q, 1.6246572813640443, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.1833168502032327, 10);
  sqcRYGate(q, -0.051062219540032316, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.892225387795155, 0);
  sqcRYGate(q, -1.8190226240650054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4819322062398106, 0);
  sqcRYGate(q, -1.5280857978543598, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1144082344113295, 1);
  sqcRYGate(q, -2.3003098099671884, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.819779150984793, 1);
  sqcRYGate(q, 0.08097968093204598, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2183631602648619, 2);
  sqcRYGate(q, 1.3551217649953233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1224361045082718, 2);
  sqcRYGate(q, 2.567131761991916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2954734277427624, 3);
  sqcRYGate(q, -1.3803629642909954, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3021825153442257, 3);
  sqcRYGate(q, -2.129541380667657, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6630455625513771, 4);
  sqcRYGate(q, 0.06914660731073673, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9242137156639219, 4);
  sqcRYGate(q, -3.140781488393337, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5922273611101496, 5);
  sqcRYGate(q, -0.7803571574221762, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5632661702459327, 5);
  sqcRYGate(q, 1.4404726814242317, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8124165604140732, 6);
  sqcRYGate(q, -2.672803679648098, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1837151871544456, 6);
  sqcRYGate(q, 0.1694513016522814, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.012547277177979765, 7);
  sqcRYGate(q, -2.9289580787174314, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.0871463795180385, 7);
  sqcRYGate(q, -0.0003111995418860758, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0036715698174899078, 8);
  sqcRYGate(q, -1.700308092055282, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9714783581850113, 8);
  sqcRYGate(q, -0.0147415332969612, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8897570301684066, 9);
  sqcRYGate(q, 1.4261537861056512, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1033165146668193, 9);
  sqcRYGate(q, -0.5832465640084136, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.41237333893993977, 10);
  sqcRYGate(q, -1.3379435670690318, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.203319115996093, 10);
  sqcRYGate(q, -0.4385085374547702, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.19515314885956328, 0);
  sqcRYGate(q, 1.824859200610783, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.588332924792186, 0);
  sqcRYGate(q, 2.244605522498658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6448257909542647, 1);
  sqcRYGate(q, -2.699853508902419, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.40679735512656473, 1);
  sqcRYGate(q, -3.12365999291839, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6628130809463335, 2);
  sqcRYGate(q, -1.9223020480631856, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07644393104217874, 2);
  sqcRYGate(q, 1.5890467109457598, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1201926199919159, 3);
  sqcRYGate(q, 0.7514703382757203, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1283209351504966, 3);
  sqcRYGate(q, 3.1250989451815023, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9258490458625075, 4);
  sqcRYGate(q, 0.036675053019425974, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2249908428601468, 4);
  sqcRYGate(q, 3.0320452440960977, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8288658790196817, 5);
  sqcRYGate(q, 2.0526697726201464, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6753921571911103, 5);
  sqcRYGate(q, -0.15996814781120453, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.08096998231598425, 6);
  sqcRYGate(q, 3.024219488207873, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.09845070030014065, 6);
  sqcRYGate(q, -0.25614517340730364, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.45305042427310704, 7);
  sqcRYGate(q, -0.43122077858705515, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.600299272214142, 7);
  sqcRYGate(q, 0.035701317549751976, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.49969890544289725, 8);
  sqcRYGate(q, 1.0258243444545794, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.2056269371466257, 8);
  sqcRYGate(q, -0.0365567984891797, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.012754921413070178, 9);
  sqcRYGate(q, 1.2871472191993512, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5853760499191163, 9);
  sqcRYGate(q, -1.7119368579875702, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.027004674272251093, 10);
  sqcRYGate(q, -0.8431494486848635, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.07999604672739025, 10);
  sqcRYGate(q, -0.14489748640645123, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2689103551349743, 0);
  sqcRYGate(q, 1.3437710338340623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.15168785370521237, 0);
  sqcRYGate(q, -0.6044522446869616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6862136869966937, 1);
  sqcRYGate(q, -1.7042323143498592, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4724259598291614, 1);
  sqcRYGate(q, 3.066292518480616, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0087389484234484, 2);
  sqcRYGate(q, -0.22481220661827983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6557874925854583, 2);
  sqcRYGate(q, -2.661520544506233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.460298967549822, 3);
  sqcRYGate(q, 2.609648534860722, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.002981346241817562, 3);
  sqcRYGate(q, 0.11828021369374841, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6233273666936543, 4);
  sqcRYGate(q, -3.0149353799102494, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.697488868501814, 4);
  sqcRYGate(q, -1.8040449118964155, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6696240923270245, 5);
  sqcRYGate(q, 1.0148694861334204, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.080899412295752, 5);
  sqcRYGate(q, 0.017918855234296593, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.16461211988887264, 6);
  sqcRYGate(q, -0.245204548171384, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.1296271309577601, 6);
  sqcRYGate(q, -3.0881153179116163, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3821640273163265, 7);
  sqcRYGate(q, 0.3094824342726694, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.379113119357237, 7);
  sqcRYGate(q, -0.17052827437857052, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.704214538181948, 8);
  sqcRYGate(q, -0.7245388037668747, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.014203522627916186, 8);
  sqcRYGate(q, -3.119225245357513, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0110067756820635, 9);
  sqcRYGate(q, -0.008626121603519723, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6155967945031788, 9);
  sqcRYGate(q, 1.536091065136902, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.864684003606957, 10);
  sqcRYGate(q, 1.8719756387995856, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.46442567026779097, 10);
  sqcRYGate(q, 0.07060039957246965, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5073862124374505, 0);
  sqcRYGate(q, -2.3524083073422424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4229874935959015, 0);
  sqcRYGate(q, 0.5343831824077525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.16306315360664492, 1);
  sqcRYGate(q, 0.928019949338216, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0039053673522246872, 1);
  sqcRYGate(q, -0.5402737797026491, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.640433871426125, 2);
  sqcRYGate(q, -2.025247332677268, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.110869971180566, 2);
  sqcRYGate(q, -2.7508800339987585, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6669914670875592, 3);
  sqcRYGate(q, -1.7410552996861384, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1331424582953185, 3);
  sqcRYGate(q, 3.1347344061453746, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.591854465670326, 4);
  sqcRYGate(q, -2.3039372505163467, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.889134420772384, 4);
  sqcRYGate(q, -1.968638171014823, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.06456946346821808, 5);
  sqcRYGate(q, 0.48705866901012757, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1948135971273004, 5);
  sqcRYGate(q, 3.1031817707722396, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3643892159542527, 6);
  sqcRYGate(q, 0.5682801332506844, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1267032874739686, 6);
  sqcRYGate(q, 0.06467844365706643, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.204248205148043, 7);
  sqcRYGate(q, -0.7165019720230319, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.7474403224381887, 7);
  sqcRYGate(q, -0.2540282942922473, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.8735397133613647, 8);
  sqcRYGate(q, -1.5678367358981955, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.46322622957776716, 8);
  sqcRYGate(q, -2.1149016748506835, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.6537624649208571, 9);
  sqcRYGate(q, -2.7295308085173358, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.8800380794339081, 9);
  sqcRYGate(q, -0.05874130543869412, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.439174221281907, 10);
  sqcRYGate(q, 2.427432987303945, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.005351924079040102, 10);
  sqcRYGate(q, -1.889730724404549, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.621122564592587, 0);
  sqcRYGate(q, 0.22530756466780072, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4271729617624294, 0);
  sqcRYGate(q, -0.2107372532168416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5869400759754304, 1);
  sqcRYGate(q, 3.09642315901709, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0735242820961117, 1);
  sqcRYGate(q, 2.834344715362591, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7705033768307752, 2);
  sqcRYGate(q, -1.713772040038862, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2327133456748502, 2);
  sqcRYGate(q, 0.904694158890452, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1095913205055695, 3);
  sqcRYGate(q, -2.212244960551491, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.005305224615404634, 3);
  sqcRYGate(q, 1.8288265827532246, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.059904090285627, 4);
  sqcRYGate(q, -1.259103257053769, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.663250919299998, 4);
  sqcRYGate(q, 3.0851505166135618, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7714871176673452, 5);
  sqcRYGate(q, -0.3515937791235473, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9664995615889777, 5);
  sqcRYGate(q, 3.1249252619096706, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.103011335824262, 6);
  sqcRYGate(q, 1.919595571037763, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4301932354125668, 6);
  sqcRYGate(q, 0.8711980213233349, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2415674052528334, 7);
  sqcRYGate(q, -2.400882694011928, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.805866241574315, 7);
  sqcRYGate(q, -3.140405497680072, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.6177579146629881, 8);
  sqcRYGate(q, -0.7819268538682088, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.1140600140861725, 8);
  sqcRYGate(q, -0.0848924625164873, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8833415575270127, 9);
  sqcRYGate(q, -2.3196710605392346, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.975286399806705, 9);
  sqcRYGate(q, -0.014865075457478838, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5591196186676264, 10);
  sqcRYGate(q, 2.1092086578356604, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8562288008681778, 10);
  sqcRYGate(q, 2.49547430387303, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.7641529024917744, 0);
  sqcRYGate(q, 2.9378838011925694, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8445769444372422, 0);
  sqcRYGate(q, 0.42086280179625196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.107478059769112, 1);
  sqcRYGate(q, 0.27386317466631915, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.014295615022337671, 1);
  sqcRYGate(q, -3.0454850409550156, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5905090602004255, 2);
  sqcRYGate(q, -1.5657748667500329, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.725892646577436, 2);
  sqcRYGate(q, 0.0015721194630845294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5213992982749618, 3);
  sqcRYGate(q, 2.6128452850379076, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.127700446065132, 3);
  sqcRYGate(q, 1.811497797762102, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7186603794994317, 4);
  sqcRYGate(q, 0.08772368942779529, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.19330253303597, 4);
  sqcRYGate(q, -0.7786717034982239, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6123510470804314, 5);
  sqcRYGate(q, 0.6651969314347159, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.02497001996735767, 5);
  sqcRYGate(q, 0.08016966698729266, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5284419673601624, 6);
  sqcRYGate(q, -1.8200076607893154, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.989731400436765, 6);
  sqcRYGate(q, 1.7889049707235876, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8743381112822886, 7);
  sqcRYGate(q, 0.4784696993901243, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.553236844721533, 7);
  sqcRYGate(q, 0.03765322311324848, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7598805937700215, 8);
  sqcRYGate(q, -0.09679922490938697, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.004043609569596394, 8);
  sqcRYGate(q, -0.9800133624786254, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.018395934502901, 9);
  sqcRYGate(q, -0.858644577440816, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.37030366298735906, 9);
  sqcRYGate(q, -0.04821209010147574, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.111540430157673, 10);
  sqcRYGate(q, -2.196306768224031, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.14909028927721923, 10);
  sqcRYGate(q, 1.7792054814092828, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.807177162232757, 0);
  sqcRYGate(q, 2.297744893901871, 1);
  sqcRYGate(q, -1.6937506709896442, 2);
  sqcRYGate(q, -0.8446519035178545, 3);
  sqcRYGate(q, -2.2502085752190686, 4);
  sqcRYGate(q, -3.057429837641165, 5);
  sqcRYGate(q, 2.5622003679299428, 6);
  sqcRYGate(q, -0.14813540211331275, 7);
  sqcRYGate(q, 2.37460024879642, 8);
  sqcRYGate(q, 1.6304099435395374, 9);
  sqcRYGate(q, -1.542929493320539, 10);
  sqcRYGate(q, -1.01479424493829, 11);

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
