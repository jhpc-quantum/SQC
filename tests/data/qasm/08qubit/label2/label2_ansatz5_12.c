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

  sqcRYGate(q, 1.3088520808078457, 0);
  sqcRYGate(q, -1.3101154192486177, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5575729921886823, 0);
  sqcRYGate(q, 2.7166462764016797, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.217568465186384, 2);
  sqcRYGate(q, -1.5882704870020472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6310312512681047, 2);
  sqcRYGate(q, -3.133284721672422, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4662440335719085, 4);
  sqcRYGate(q, -1.1235179477593138, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9461750349945413, 4);
  sqcRYGate(q, -0.17156451249230828, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.91772613107749, 6);
  sqcRYGate(q, 2.862432864687076, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3420252580312622, 6);
  sqcRYGate(q, 1.7435686836648436, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1706226392956713, 1);
  sqcRYGate(q, 2.9479019953815353, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7233942902851003, 1);
  sqcRYGate(q, -3.139753191863149, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0353897912605152, 3);
  sqcRYGate(q, 0.62811283988945, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9290786769100836, 3);
  sqcRYGate(q, 0.1827508919075148, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2091375224506553, 5);
  sqcRYGate(q, 0.5289792306767058, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0037506789600403327, 5);
  sqcRYGate(q, 3.139610655183501, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.14475390259965337, 0);
  sqcRYGate(q, 1.9636302751943058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8470466410596886, 0);
  sqcRYGate(q, -1.3350644731802879, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.49497527385503215, 2);
  sqcRYGate(q, -3.0121789763908335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.140835483296056, 2);
  sqcRYGate(q, -2.427121300662277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4930570357690558, 4);
  sqcRYGate(q, 2.278462151184687, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2222577191663655, 4);
  sqcRYGate(q, -2.441235349053206, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.711920501096791, 6);
  sqcRYGate(q, -2.1494290886783274, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.10980204928073, 6);
  sqcRYGate(q, -0.13247394797867268, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.640925364542612, 1);
  sqcRYGate(q, -2.5658538784440292, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6528615975121211, 1);
  sqcRYGate(q, 3.105318030979801, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8349267949249364, 3);
  sqcRYGate(q, 1.5960616576686608, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8876586734317637, 3);
  sqcRYGate(q, -3.1190473434626633, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1579133570539186, 5);
  sqcRYGate(q, -2.9258492085573664, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3723489932962156, 5);
  sqcRYGate(q, 2.021841521478133, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3684655049283396, 0);
  sqcRYGate(q, 0.5713440367144171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9333272588397885, 0);
  sqcRYGate(q, 1.1867948340298629, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.368467253864094, 2);
  sqcRYGate(q, 1.5438646330617884, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.00011189911347319207, 2);
  sqcRYGate(q, 1.5049654145049367, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.37439934578450873, 4);
  sqcRYGate(q, 0.27896655472452775, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.004796612074283757, 4);
  sqcRYGate(q, 3.138828727307379, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.003550044985292544, 6);
  sqcRYGate(q, 2.9611547491006585, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6506604166778143, 6);
  sqcRYGate(q, 0.49790571952161267, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5818802960277809, 1);
  sqcRYGate(q, -1.5322020302207513, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2975650187394785, 1);
  sqcRYGate(q, 2.5532451247778822, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5296411558533236, 3);
  sqcRYGate(q, 0.631446129819583, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5783554800855368, 3);
  sqcRYGate(q, 3.1274582528103307, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3280373802550395, 5);
  sqcRYGate(q, -1.6386290752019317, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7890396922577905, 5);
  sqcRYGate(q, -2.318189800386561, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4230363810174167, 0);
  sqcRYGate(q, -1.3663937244874513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2802948013705233, 0);
  sqcRYGate(q, -1.4519278363717092, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8377895923418867, 2);
  sqcRYGate(q, -2.6852596732639866, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8664828705460095, 2);
  sqcRYGate(q, 0.01568080987440279, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6360113711535904, 4);
  sqcRYGate(q, -0.6263041152644053, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.077811318694359, 4);
  sqcRYGate(q, -0.0012170304059368523, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6385545413789013, 6);
  sqcRYGate(q, 2.5329286960886663, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1723496020956925, 6);
  sqcRYGate(q, 0.6179878702276689, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9802818331156491, 1);
  sqcRYGate(q, 0.7772717230161148, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04612809165701022, 1);
  sqcRYGate(q, -1.795240935483517, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5736978112905695, 3);
  sqcRYGate(q, 0.6417986693345745, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0051800954098909155, 3);
  sqcRYGate(q, 0.011535148169105726, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0650393520948762, 5);
  sqcRYGate(q, 1.0697675699135551, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.842052226447832, 5);
  sqcRYGate(q, -0.0805566684964172, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3549408992203267, 0);
  sqcRYGate(q, -1.0667336610948635, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3402408699850745, 0);
  sqcRYGate(q, -0.179160471119487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4753957715059232, 2);
  sqcRYGate(q, -1.0232782281110193, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5705973342384922, 2);
  sqcRYGate(q, -1.3579356130256077, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.782523399195975, 4);
  sqcRYGate(q, 0.20677806949584512, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3661688930731026, 4);
  sqcRYGate(q, 3.135485745175643, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4437206750714093, 6);
  sqcRYGate(q, 0.7950090737457043, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7342603076888521, 6);
  sqcRYGate(q, 0.0932397237982308, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4754640550372469, 1);
  sqcRYGate(q, -0.306030730578525, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9821455209969807, 1);
  sqcRYGate(q, 1.8722683736954968, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4376601925898151, 3);
  sqcRYGate(q, -2.614505561407706, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0008905687291722587, 3);
  sqcRYGate(q, -0.02606197685906775, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.15107532904627516, 5);
  sqcRYGate(q, -2.6746902333673437, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.09902833859392501, 5);
  sqcRYGate(q, -3.088977688673872, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4047119868337195, 0);
  sqcRYGate(q, -2.8347910323126797, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.897771080849665, 0);
  sqcRYGate(q, -2.154062861153892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9525890642981056, 2);
  sqcRYGate(q, -1.5731099509971784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9220533162899414, 2);
  sqcRYGate(q, 0.3432250818758842, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.559603311329582, 4);
  sqcRYGate(q, 0.9263787186904642, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.759405658384641, 4);
  sqcRYGate(q, 3.13589381722983, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.691728652319422, 6);
  sqcRYGate(q, -0.7910975066874916, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3949295380174904, 6);
  sqcRYGate(q, -1.0758873205582933, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.60578676216216, 1);
  sqcRYGate(q, 0.8053238678045593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.18888303912456195, 1);
  sqcRYGate(q, -2.6510881579659813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.816441815698868, 3);
  sqcRYGate(q, -2.684465185312333, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.004504339776169232, 3);
  sqcRYGate(q, 3.0911681162522413, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6934781621434056, 5);
  sqcRYGate(q, -1.7780362109273744, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3770067343639236, 5);
  sqcRYGate(q, 2.2635350753124266, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6919752384156848, 0);
  sqcRYGate(q, 1.1528557641011083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5998374693147506, 0);
  sqcRYGate(q, 0.5919990983813079, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.70318899744184, 2);
  sqcRYGate(q, 2.085634855421805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.772938639838539, 2);
  sqcRYGate(q, -2.933260323015591, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9106323610444244, 4);
  sqcRYGate(q, -2.404533758418673, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1395077352242822, 4);
  sqcRYGate(q, -2.320109463708997, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.96153806853834, 6);
  sqcRYGate(q, -1.9680161259401645, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.463539861658373, 6);
  sqcRYGate(q, -2.0616632178007133, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.238267790607143, 1);
  sqcRYGate(q, -1.6494186834281077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.64995027641125, 1);
  sqcRYGate(q, 2.6295887859227123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.013231655908439, 3);
  sqcRYGate(q, -1.3798336372948883, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.997318651882477, 3);
  sqcRYGate(q, 0.9247879291410586, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0242285766335726, 5);
  sqcRYGate(q, -2.1669589322523533, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6502038214616732, 5);
  sqcRYGate(q, -0.027343925219562318, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1574402062342204, 0);
  sqcRYGate(q, -1.0497725930728654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0753639531108443, 0);
  sqcRYGate(q, 2.8835998364550464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6360169030476216, 2);
  sqcRYGate(q, -1.3399327106311212, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1478523212407232, 2);
  sqcRYGate(q, 1.5870338896316214, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5002982414921084, 4);
  sqcRYGate(q, 2.0475509541779946, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1233262134187276, 4);
  sqcRYGate(q, -0.7000614054272633, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3511914467477597, 6);
  sqcRYGate(q, -1.7052999650184884, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.901578559257652, 6);
  sqcRYGate(q, 0.5061189741221728, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7551269994705367, 1);
  sqcRYGate(q, 2.2160588518952236, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0031785102688003312, 1);
  sqcRYGate(q, -2.5865770450520214, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0667974567198106, 3);
  sqcRYGate(q, -2.7356441296394354, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4301542418251607, 3);
  sqcRYGate(q, 2.2363625309720914, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.16979858180683305, 5);
  sqcRYGate(q, 2.2157090801512473, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4445771282277002, 5);
  sqcRYGate(q, 0.024234901318960663, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.16390799081672558, 0);
  sqcRYGate(q, 0.5543292709438941, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5834229514482097, 0);
  sqcRYGate(q, -0.08365067015845835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.019493641079484, 2);
  sqcRYGate(q, -1.8422397226286695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2483853416819501, 2);
  sqcRYGate(q, -2.2003646426996717, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.594074041032577, 4);
  sqcRYGate(q, -1.2622665714775188, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1339947909922057, 4);
  sqcRYGate(q, -2.9922603998427904, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.18638200761138, 6);
  sqcRYGate(q, -0.4401226264539865, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7819761367994489, 6);
  sqcRYGate(q, 0.4733262484312361, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8772340736882165, 1);
  sqcRYGate(q, -2.5303959641765736, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0007610477432136163, 1);
  sqcRYGate(q, -2.9662864023306614, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.508613365816839, 3);
  sqcRYGate(q, -3.12863352527324, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.023871661079267525, 3);
  sqcRYGate(q, -1.9001774465960617, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5506885691280567, 5);
  sqcRYGate(q, -0.10997934861221738, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8157340714685264, 5);
  sqcRYGate(q, 3.1233507452233997, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1314617542202132, 0);
  sqcRYGate(q, 2.5102499423679374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6798474931805947, 0);
  sqcRYGate(q, -1.4159015838141098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6216320439852169, 2);
  sqcRYGate(q, 2.303853659357944, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.536337912138265, 2);
  sqcRYGate(q, -0.004224696353698043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9118870086720321, 4);
  sqcRYGate(q, 0.3447149487809386, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7194054786371192, 4);
  sqcRYGate(q, -2.2677394499744112, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1860942556387872, 6);
  sqcRYGate(q, 2.8720610535971396, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.48698591228127963, 6);
  sqcRYGate(q, -2.923449872923554, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6742752758355368, 1);
  sqcRYGate(q, 2.4921584460701753, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0021804898893514188, 1);
  sqcRYGate(q, -1.0847988601488767, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.06820806306777917, 3);
  sqcRYGate(q, -2.778526222206634, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6956304624926313, 3);
  sqcRYGate(q, -0.025476301892819967, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2805653056274324, 5);
  sqcRYGate(q, 0.14600706100365368, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8566608524229702, 5);
  sqcRYGate(q, 0.6217882092627018, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6502594437872624, 0);
  sqcRYGate(q, -0.16608520979101407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2464203418434341, 0);
  sqcRYGate(q, -0.27915892974184825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9690817446417483, 2);
  sqcRYGate(q, 1.9382295999309913, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.012179723832846464, 2);
  sqcRYGate(q, -3.1338077407728, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5981399949476247, 4);
  sqcRYGate(q, 1.0238344137442852, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1208042305770753, 4);
  sqcRYGate(q, 0.026863411865497788, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6449033447046197, 6);
  sqcRYGate(q, -2.617866128908605, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0965495903049423, 6);
  sqcRYGate(q, -0.07186987087619637, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6530961370667097, 1);
  sqcRYGate(q, -2.5351682475292234, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.00066396906905133, 1);
  sqcRYGate(q, 1.3939175705559401, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1091147338408325, 3);
  sqcRYGate(q, -1.579585684279056, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6810111166699873, 3);
  sqcRYGate(q, -0.37378579920771665, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7547141087839413, 5);
  sqcRYGate(q, -0.11045481787658863, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8451655259941635, 5);
  sqcRYGate(q, 2.8281772535390854, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4093619217842754, 0);
  sqcRYGate(q, -0.6868852243285595, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6198791911540287, 0);
  sqcRYGate(q, -2.363774179967873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5408505396201773, 2);
  sqcRYGate(q, 0.508919950372035, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9174657218425333, 2);
  sqcRYGate(q, -3.127165207460279, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.363423013233618, 4);
  sqcRYGate(q, 3.0025212642047037, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4762295868964497, 4);
  sqcRYGate(q, 3.079272616793286, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1707733424791096, 6);
  sqcRYGate(q, -0.9885502436109609, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9514315149599382, 6);
  sqcRYGate(q, 0.5863107102506058, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3311750729603906, 1);
  sqcRYGate(q, 2.0879406542742993, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0891678253281443, 1);
  sqcRYGate(q, -1.4338522109713834, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1768974582170055, 3);
  sqcRYGate(q, -0.5141444602019436, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.647238715464246, 3);
  sqcRYGate(q, 2.914124634977193, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6851982737929463, 5);
  sqcRYGate(q, -1.170480500492098, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7972080385110653, 5);
  sqcRYGate(q, 2.4084900833954217, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2923438865275907, 0);
  sqcRYGate(q, -0.7513981615993911, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8742959332551906, 0);
  sqcRYGate(q, 2.5101896697018975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9233368158113264, 2);
  sqcRYGate(q, 2.310473132047176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.05244942957180765, 2);
  sqcRYGate(q, 1.44142700875837, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08676424518561632, 4);
  sqcRYGate(q, 2.477340940590766, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0152371110868486, 4);
  sqcRYGate(q, -3.1045489748823054, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4612907521921508, 6);
  sqcRYGate(q, 2.051940422714819, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7371345081667866, 6);
  sqcRYGate(q, 2.3623427180238665, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1945066410112206, 1);
  sqcRYGate(q, -2.784675747690711, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.073693005697766, 1);
  sqcRYGate(q, -0.46324870560796516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.111240144532096, 3);
  sqcRYGate(q, 0.017149861391605015, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3115338581916376, 3);
  sqcRYGate(q, 0.007351300322834043, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6591556093367928, 5);
  sqcRYGate(q, -2.0471430625156346, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1424136518321677, 5);
  sqcRYGate(q, 2.633272854446393, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9813507601136688, 0);
  sqcRYGate(q, -2.956625656138428, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5435892239753521, 0);
  sqcRYGate(q, -2.689314270271633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5703376523450429, 2);
  sqcRYGate(q, 0.9732728787551173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0023628334429552926, 2);
  sqcRYGate(q, 2.369124684017319, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.221820969925554, 4);
  sqcRYGate(q, -2.643430459830295, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0031647030705048707, 4);
  sqcRYGate(q, -3.1134666759131977, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.17205259920476446, 6);
  sqcRYGate(q, -1.1027372373687445, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1279416833614775, 6);
  sqcRYGate(q, -0.3983423429664663, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.995405055656241, 1);
  sqcRYGate(q, 2.568907810263562, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0890456732840956, 1);
  sqcRYGate(q, -1.750506961190966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1314433441789653, 3);
  sqcRYGate(q, 1.1463029635652022, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9195116179893883, 3);
  sqcRYGate(q, 0.027833803041036553, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9146543125472206, 5);
  sqcRYGate(q, 1.361527287698649, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1052531481302394, 5);
  sqcRYGate(q, 2.189109808819449, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0310288525336526, 0);
  sqcRYGate(q, 0.7547161309105674, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9424550059720105, 0);
  sqcRYGate(q, 2.247441568904108, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5733942364420497, 2);
  sqcRYGate(q, -1.436969701070282, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.005431614919296917, 2);
  sqcRYGate(q, 1.9940383190222077, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6648004556526756, 4);
  sqcRYGate(q, -0.8937240647647879, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.08272724169100165, 4);
  sqcRYGate(q, -0.6833204742232111, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.21372000590411844, 6);
  sqcRYGate(q, 1.845334141482003, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6212907014608264, 6);
  sqcRYGate(q, -1.1159703745626797, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.585641191260239, 1);
  sqcRYGate(q, -0.0014361508995506256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.022663461790869397, 1);
  sqcRYGate(q, 3.0534633609417523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5269924198574041, 3);
  sqcRYGate(q, -1.472100387598544, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9375424395916925, 3);
  sqcRYGate(q, -0.011149778971486057, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.03007451890543, 5);
  sqcRYGate(q, 0.434954521477378, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2469898378977478, 5);
  sqcRYGate(q, 0.03986466749084183, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.795159405892333, 0);
  sqcRYGate(q, -0.33048193379031815, 1);
  sqcRYGate(q, 0.08205004497868161, 2);
  sqcRYGate(q, 0.12062550735843573, 3);
  sqcRYGate(q, -0.277752365118559, 4);
  sqcRYGate(q, -0.9641606399046937, 5);
  sqcRYGate(q, -1.8860301846504273, 6);
  sqcRYGate(q, 2.3160211410119524, 7);

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
