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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 1.0984790946073302, 0);
  sqcRYGate(q, -2.079174598218026, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.379893661426291, 0);
  sqcRYGate(q, -0.6765670626375769, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.225197080535293, 2);
  sqcRYGate(q, -0.3402347522117468, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.181232698085811, 2);
  sqcRYGate(q, -0.8685838047197968, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.58286031413072, 0);
  sqcRYGate(q, -0.07313369797323285, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4493664274759437, 0);
  sqcRYGate(q, -0.8185870321499829, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2278271269649066, 1);
  sqcRYGate(q, -2.4212852505148565, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.074935349366739, 1);
  sqcRYGate(q, -2.2917272762008105, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5055789711038895, 0);
  sqcRYGate(q, -2.421235734638409, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0580007369331121, 0);
  sqcRYGate(q, 1.9516567942676297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0941486250609678, 2);
  sqcRYGate(q, 0.8738926230125446, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.783235619036691, 2);
  sqcRYGate(q, 2.4109902716045886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9421980887070838, 0);
  sqcRYGate(q, 3.064938617384417, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1942484541710936, 0);
  sqcRYGate(q, -3.1321736343978244, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9321004461228863, 1);
  sqcRYGate(q, -1.2921080050050548, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9538918857463896, 1);
  sqcRYGate(q, -2.377506518448624, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8735010157145071, 0);
  sqcRYGate(q, -1.0964880256967753, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5683236229674452, 0);
  sqcRYGate(q, -2.0226383594047386, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0545766473042757, 2);
  sqcRYGate(q, -2.7359185786255966, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2270300019108387, 2);
  sqcRYGate(q, -3.1185831915763935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3169213010300143, 0);
  sqcRYGate(q, 0.10005624437040012, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6629494300898626, 0);
  sqcRYGate(q, 1.0420476186413525, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4119343414128314, 1);
  sqcRYGate(q, 0.3662730420672675, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9900741249106302, 1);
  sqcRYGate(q, 1.2680110493323828, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3645708135037935, 0);
  sqcRYGate(q, 2.9078263545515104, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.658137418359824, 0);
  sqcRYGate(q, -0.7685926074657052, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.281512276915751, 2);
  sqcRYGate(q, 0.9783405398232734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.712553888373273, 2);
  sqcRYGate(q, 0.7224052553575975, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0141422217666136, 0);
  sqcRYGate(q, -2.238676029114801, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6832289359607518, 0);
  sqcRYGate(q, -0.36688824823387356, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9273303700150909, 1);
  sqcRYGate(q, 0.7706441770482337, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8928503310165965, 1);
  sqcRYGate(q, 1.8410187018347228, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7466874426341463, 0);
  sqcRYGate(q, 2.363158197166719, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5735709420044626, 0);
  sqcRYGate(q, 2.11512836404113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2617625136249804, 2);
  sqcRYGate(q, -2.316017982823987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.398740105416621, 2);
  sqcRYGate(q, 2.3063138890497443, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3334208411702659, 0);
  sqcRYGate(q, -2.25533058101449, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8468876370243041, 0);
  sqcRYGate(q, -1.2774471480405116, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.204149992374293, 1);
  sqcRYGate(q, 2.30343440960384, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3956260030323455, 1);
  sqcRYGate(q, 2.232084742013068, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2413523918124088, 0);
  sqcRYGate(q, -0.40409565137958925, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.188568014721407, 0);
  sqcRYGate(q, 2.5626275261844764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2737392414839928, 2);
  sqcRYGate(q, 2.5379892630369327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.132532491328341, 2);
  sqcRYGate(q, 2.3765548438448456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7209664118066672, 0);
  sqcRYGate(q, 2.6994230775326047, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8761002677653287, 0);
  sqcRYGate(q, 0.3114919080405762, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4379075964875465, 1);
  sqcRYGate(q, 2.5230584750893494, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.254241004978314, 1);
  sqcRYGate(q, -1.4340800767626247, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7613830466801919, 0);
  sqcRYGate(q, -1.7811709888419678, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.38728954265996585, 0);
  sqcRYGate(q, 2.4567861139680334, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8958555501519414, 2);
  sqcRYGate(q, -0.9048306674606712, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8263281942859566, 2);
  sqcRYGate(q, -2.864860725832151, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6463624619150392, 0);
  sqcRYGate(q, 2.4545358059858393, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6964512071811333, 0);
  sqcRYGate(q, 1.5979781368305426, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4787073743450418, 1);
  sqcRYGate(q, -2.0444136536259743, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4205689864486635, 1);
  sqcRYGate(q, -1.1507145578209035, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2740373318293372, 0);
  sqcRYGate(q, -1.326095333998924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7204845151231047, 0);
  sqcRYGate(q, 1.2219556184122375, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6611724052348862, 2);
  sqcRYGate(q, 2.131413186721926, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.022404983157659153, 2);
  sqcRYGate(q, -2.694600522329568, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.004342420249837886, 0);
  sqcRYGate(q, -1.4624479447780643, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3741594825621917, 0);
  sqcRYGate(q, 0.6294983196888649, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.983950985997519, 1);
  sqcRYGate(q, 2.7177619993618136, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8095297407165187, 1);
  sqcRYGate(q, 0.1567305368237248, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.008619314127748188, 0);
  sqcRYGate(q, -1.450107060688592, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.008870434230211, 0);
  sqcRYGate(q, 1.5172574555064398, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.003245652951086, 2);
  sqcRYGate(q, -3.061077067207164, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0506854473680047, 2);
  sqcRYGate(q, 3.071664256206208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.728282108643131, 0);
  sqcRYGate(q, 2.2003156752183743, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3798256183233697, 0);
  sqcRYGate(q, 1.3007369069252848, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8236362850431442, 1);
  sqcRYGate(q, 0.3107924634131223, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5573750830547106, 1);
  sqcRYGate(q, -2.1324712494983054, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.924517526492457, 0);
  sqcRYGate(q, 1.2157880584000709, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.382739669904095, 0);
  sqcRYGate(q, 2.2611052010657775, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8565141311997966, 2);
  sqcRYGate(q, -0.18004408450771872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0627413826565368, 2);
  sqcRYGate(q, -0.3519805666994227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.771495624051025, 0);
  sqcRYGate(q, 1.0647926830372247, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.17217090683013664, 0);
  sqcRYGate(q, 2.912211928522764, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2438949069710672, 1);
  sqcRYGate(q, -0.7033724500465535, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4080386127102056, 1);
  sqcRYGate(q, -2.2779242754960567, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5465735221953927, 0);
  sqcRYGate(q, 0.09703580098088688, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6509631921252609, 0);
  sqcRYGate(q, 1.507555111944228, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3496564857927726, 2);
  sqcRYGate(q, -1.501131534013292, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9580733833077268, 2);
  sqcRYGate(q, -0.011139812662126047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.824200522215583, 0);
  sqcRYGate(q, 1.7732101109593623, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.363745101875467, 0);
  sqcRYGate(q, -2.6017346234344876, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.860934446839579, 1);
  sqcRYGate(q, 1.0745521811991763, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0191477418723114, 1);
  sqcRYGate(q, -1.5074702637405855, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.461060345953176, 0);
  sqcRYGate(q, -0.4864737722348861, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.34481777612050557, 0);
  sqcRYGate(q, 0.47673472435999925, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8196286490305936, 2);
  sqcRYGate(q, -2.6455525473385224, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1974709434569926, 2);
  sqcRYGate(q, 1.4620398163101125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.26162120701884134, 0);
  sqcRYGate(q, 0.7641299120148615, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.39560278012547023, 0);
  sqcRYGate(q, 0.9095216659355403, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.124383116931048, 1);
  sqcRYGate(q, 1.6753643990669174, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3754172909287496, 1);
  sqcRYGate(q, 2.7774549618285307, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1356262285279586, 0);
  sqcRYGate(q, -1.001436757567534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.784984896860629, 0);
  sqcRYGate(q, -2.732034901080106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7690240257643888, 2);
  sqcRYGate(q, 2.7195482657269796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7963419461977197, 2);
  sqcRYGate(q, -0.08624928298911527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.04965075271012305, 0);
  sqcRYGate(q, 0.46497047284867676, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9685643434892808, 0);
  sqcRYGate(q, 2.183778141236327, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7709317453648243, 1);
  sqcRYGate(q, 1.6211104822931004, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9271244862479056, 1);
  sqcRYGate(q, 0.8427235990576616, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5670322640635317, 0);
  sqcRYGate(q, 2.8307647152725814, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6816382939802788, 0);
  sqcRYGate(q, 3.0939601780252683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.29432645745082375, 2);
  sqcRYGate(q, -2.1616299367902094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2839558366839545, 2);
  sqcRYGate(q, -2.1045837722629894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.983696669379956, 0);
  sqcRYGate(q, -0.11458961463314932, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8860128285080117, 0);
  sqcRYGate(q, -2.374017293281017, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.42798683893692235, 1);
  sqcRYGate(q, -1.9405416920868004, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4346218118738396, 1);
  sqcRYGate(q, -0.4950102190057697, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7987154027706493, 0);
  sqcRYGate(q, -0.9018210857592033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8577862603363149, 0);
  sqcRYGate(q, 0.07785680697368287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9884746520365646, 2);
  sqcRYGate(q, 2.285192664048506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7057916207256403, 2);
  sqcRYGate(q, -1.5516621095309464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4808441551073956, 0);
  sqcRYGate(q, -1.5852009348882907, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.490605978021625, 0);
  sqcRYGate(q, -1.2071130553324507, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.858776901056855, 1);
  sqcRYGate(q, -0.92147091154375, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.261643859401172, 1);
  sqcRYGate(q, 2.217772042511789, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5221820842988594, 0);
  sqcRYGate(q, -1.507714550672732, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.16301259361118592, 0);
  sqcRYGate(q, 0.16751131180681708, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7059761612224862, 2);
  sqcRYGate(q, 2.610032913599083, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7452700022323007, 2);
  sqcRYGate(q, 1.1017507305683534, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8740571012884502, 0);
  sqcRYGate(q, -2.2104900989394385, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4458156315436879, 0);
  sqcRYGate(q, 1.772801140392084, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.26938018442378847, 1);
  sqcRYGate(q, 1.31917442129651, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7251594077081522, 1);
  sqcRYGate(q, 0.9479366322116913, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.03570155761079, 0);
  sqcRYGate(q, 0.38992225832436844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.00501514850228, 0);
  sqcRYGate(q, 0.020862153934704017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5428970602014029, 2);
  sqcRYGate(q, -2.9205932731258826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4547647488821927, 2);
  sqcRYGate(q, 1.962193917413531, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2112968844495833, 0);
  sqcRYGate(q, -1.8212685666605368, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.41275926146247854, 0);
  sqcRYGate(q, -0.3364804307653028, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2778036908960324, 1);
  sqcRYGate(q, 1.4982401378892314, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1775700718162039, 1);
  sqcRYGate(q, 2.1154695166890285, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5595447681900954, 0);
  sqcRYGate(q, -1.5821027748510783, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7090512116362809, 0);
  sqcRYGate(q, 0.5839869753983112, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6565002191228339, 2);
  sqcRYGate(q, 1.3729509383328429, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7374409080643272, 2);
  sqcRYGate(q, 1.0726535210035006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5414668144327575, 0);
  sqcRYGate(q, -0.43533434818782357, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9828025663557787, 0);
  sqcRYGate(q, 2.4255808316314367, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2142545666347124, 1);
  sqcRYGate(q, -2.544479633744478, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.018186413953614, 1);
  sqcRYGate(q, 1.822052088878479, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.292149608938213, 0);
  sqcRYGate(q, 2.243205448426705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.450651054648595, 0);
  sqcRYGate(q, -0.5676812573803778, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6938692276871703, 2);
  sqcRYGate(q, 2.560449748809714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2600588591993444, 2);
  sqcRYGate(q, -0.3758859252216581, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1111771074086958, 0);
  sqcRYGate(q, -2.714484069286843, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.537796703212968, 0);
  sqcRYGate(q, 2.6079568631182752, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.801185551705486, 1);
  sqcRYGate(q, 1.6471400655804904, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4294771578192997, 1);
  sqcRYGate(q, 1.9403484915128928, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.12560732345752, 0);
  sqcRYGate(q, 2.8390496317364238, 1);
  sqcRYGate(q, -2.186786834685779, 2);
  sqcRYGate(q, 1.5169357659688802, 3);

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
