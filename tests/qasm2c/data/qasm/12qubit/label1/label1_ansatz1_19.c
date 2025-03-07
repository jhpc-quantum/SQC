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

  sqcRYGate(q, 2.301268083768765, 0);
  sqcRZGate(q, -0.5599773180646519, 0);
  sqcRYGate(q, -0.2802746108691404, 1);
  sqcRZGate(q, -2.341756298643188, 1);
  sqcRYGate(q, 2.478737175342512, 2);
  sqcRZGate(q, 3.0992930636611367, 2);
  sqcRYGate(q, 0.00396382035809259, 3);
  sqcRZGate(q, 0.9402149664227039, 3);
  sqcRYGate(q, -2.855938700674828, 4);
  sqcRZGate(q, -2.120025995969927, 4);
  sqcRYGate(q, 2.633776032937761, 5);
  sqcRZGate(q, -3.0634987225766874, 5);
  sqcRYGate(q, -2.616860370852545, 6);
  sqcRZGate(q, 2.6972533267402747, 6);
  sqcRYGate(q, 1.419101670918491, 7);
  sqcRZGate(q, -1.0451427930802186, 7);
  sqcRYGate(q, 1.0608547085499795, 8);
  sqcRZGate(q, 3.0534726502731826, 8);
  sqcRYGate(q, 1.641033760658953, 9);
  sqcRZGate(q, 2.800767909187814, 9);
  sqcRYGate(q, -3.1095813170162345, 10);
  sqcRZGate(q, -0.5770412475146827, 10);
  sqcRYGate(q, -2.391865816334506, 11);
  sqcRZGate(q, 1.0094015171119979, 11);
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
  sqcRYGate(q, 0.648128626842887, 0);
  sqcRZGate(q, -0.71567995666084, 0);
  sqcRYGate(q, -0.00746583433215492, 1);
  sqcRZGate(q, 0.49109895724243824, 1);
  sqcRYGate(q, -0.037714419674435014, 2);
  sqcRZGate(q, -3.124609844964711, 2);
  sqcRYGate(q, 0.01825666492782379, 3);
  sqcRZGate(q, -3.0332713198713916, 3);
  sqcRYGate(q, -1.5413028864330667, 4);
  sqcRZGate(q, 0.4959550537031898, 4);
  sqcRYGate(q, 2.9993135601176335, 5);
  sqcRZGate(q, -1.3559552674012665, 5);
  sqcRYGate(q, -1.4246366293458517, 6);
  sqcRZGate(q, 2.084708408252091, 6);
  sqcRYGate(q, -0.005391781489933578, 7);
  sqcRZGate(q, -1.5535644558835997, 7);
  sqcRYGate(q, 0.4905284566439211, 8);
  sqcRZGate(q, 3.114852479572111, 8);
  sqcRYGate(q, -0.09470025865570353, 9);
  sqcRZGate(q, -1.1281337079441505, 9);
  sqcRYGate(q, 0.0028546042326915706, 10);
  sqcRZGate(q, 0.678063186239763, 10);
  sqcRYGate(q, -2.0372193074136393, 11);
  sqcRZGate(q, 2.481035583180791, 11);
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
  sqcRYGate(q, 1.5746233898871873, 0);
  sqcRZGate(q, -2.4921384113280753, 0);
  sqcRYGate(q, 0.2168852787460892, 1);
  sqcRZGate(q, 0.30486742967274605, 1);
  sqcRYGate(q, -2.477346113561649, 2);
  sqcRZGate(q, -0.3254826539169974, 2);
  sqcRYGate(q, -0.392903892472323, 3);
  sqcRZGate(q, -1.1773690298055648, 3);
  sqcRYGate(q, 1.6033297993178595, 4);
  sqcRZGate(q, 0.18702560306161872, 4);
  sqcRYGate(q, 2.2299509336804357, 5);
  sqcRZGate(q, -3.032386884587293, 5);
  sqcRYGate(q, 1.4904792236842548, 6);
  sqcRZGate(q, -0.686308314383882, 6);
  sqcRYGate(q, -2.866727580617293, 7);
  sqcRZGate(q, -1.6522380567760697, 7);
  sqcRYGate(q, -1.0136915191730484, 8);
  sqcRZGate(q, -0.419194554797663, 8);
  sqcRYGate(q, 0.8022428290921149, 9);
  sqcRZGate(q, 1.5547703099566763, 9);
  sqcRYGate(q, -3.0921780514827986, 10);
  sqcRZGate(q, 1.2584440893632998, 10);
  sqcRYGate(q, -1.5050852349683563, 11);
  sqcRZGate(q, 0.18549218878439247, 11);
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
  sqcRYGate(q, -1.8161422394801425, 0);
  sqcRZGate(q, 2.914434044120611, 0);
  sqcRYGate(q, 3.047953915925922, 1);
  sqcRZGate(q, -0.9817239090193467, 1);
  sqcRYGate(q, 1.3676046497187055, 2);
  sqcRZGate(q, -1.4733687147754306, 2);
  sqcRYGate(q, 1.7634480681334905, 3);
  sqcRZGate(q, -2.0861775371746765, 3);
  sqcRYGate(q, 1.4970856201846094, 4);
  sqcRZGate(q, -0.03834419454494053, 4);
  sqcRYGate(q, -2.4010714448887978, 5);
  sqcRZGate(q, -2.4479069507704185, 5);
  sqcRYGate(q, -1.2122438577376355, 6);
  sqcRZGate(q, 2.147678647753042, 6);
  sqcRYGate(q, -0.7332958026604937, 7);
  sqcRZGate(q, -1.6502356962162994, 7);
  sqcRYGate(q, -1.738616053069319, 8);
  sqcRZGate(q, 0.850466780475122, 8);
  sqcRYGate(q, 1.392985005365876, 9);
  sqcRZGate(q, 1.1256708967415978, 9);
  sqcRYGate(q, 0.2112575910124093, 10);
  sqcRZGate(q, 1.5660792637358305, 10);
  sqcRYGate(q, -2.6931470787531495, 11);
  sqcRZGate(q, 0.09322527046114182, 11);
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
  sqcRYGate(q, 0.7484278747446452, 0);
  sqcRZGate(q, 2.193833691258744, 0);
  sqcRYGate(q, -0.021500061596873638, 1);
  sqcRZGate(q, -1.9624731942490037, 1);
  sqcRYGate(q, -3.017247561456466, 2);
  sqcRZGate(q, 1.6775462198196802, 2);
  sqcRYGate(q, -0.07453746062194444, 3);
  sqcRZGate(q, 0.7171701154878801, 3);
  sqcRYGate(q, -2.43930852271867, 4);
  sqcRZGate(q, -2.9601148335862977, 4);
  sqcRYGate(q, 0.40836661129426205, 5);
  sqcRZGate(q, 0.5242829580003794, 5);
  sqcRYGate(q, 2.9349678318718455, 6);
  sqcRZGate(q, 0.9194999662748328, 6);
  sqcRYGate(q, -1.271828810156423, 7);
  sqcRZGate(q, -0.6208435898369365, 7);
  sqcRYGate(q, 1.7319829500487183, 8);
  sqcRZGate(q, 0.2519992563439084, 8);
  sqcRYGate(q, -2.886704647357396, 9);
  sqcRZGate(q, 0.5616031726419874, 9);
  sqcRYGate(q, -0.7088781347903145, 10);
  sqcRZGate(q, -1.873301021910568, 10);
  sqcRYGate(q, 1.9789100287453079, 11);
  sqcRZGate(q, 1.891269988605706, 11);
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
  sqcRYGate(q, 0.3867884840200588, 0);
  sqcRZGate(q, 2.9038457947691283, 0);
  sqcRYGate(q, 0.16060003570022197, 1);
  sqcRZGate(q, -0.5955826680401357, 1);
  sqcRYGate(q, -1.6915357831937459, 2);
  sqcRZGate(q, -3.023619878764519, 2);
  sqcRYGate(q, -1.8556151682412443, 3);
  sqcRZGate(q, -0.9668723524623944, 3);
  sqcRYGate(q, -2.876823939901094, 4);
  sqcRZGate(q, -2.4934790800208164, 4);
  sqcRYGate(q, 3.076192423293834, 5);
  sqcRZGate(q, -2.9121986507932283, 5);
  sqcRYGate(q, 3.122629208028317, 6);
  sqcRZGate(q, -0.9129940265966887, 6);
  sqcRYGate(q, -3.053821012577756, 7);
  sqcRZGate(q, 2.430168569355798, 7);
  sqcRYGate(q, 2.4935972361434504, 8);
  sqcRZGate(q, 2.73950568539684, 8);
  sqcRYGate(q, 0.053567691820572534, 9);
  sqcRZGate(q, -2.5234107846543674, 9);
  sqcRYGate(q, 3.1165969504287907, 10);
  sqcRZGate(q, 1.481927659352058, 10);
  sqcRYGate(q, 1.93241158734778, 11);
  sqcRZGate(q, 2.3584864934435075, 11);
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
  sqcRYGate(q, 2.078900477739566, 0);
  sqcRZGate(q, 2.0490017376412255, 0);
  sqcRYGate(q, -1.8477605257477245, 1);
  sqcRZGate(q, -3.099258700869711, 1);
  sqcRYGate(q, -0.05432533005146478, 2);
  sqcRZGate(q, 2.837147702116263, 2);
  sqcRYGate(q, 1.7567320795153805, 3);
  sqcRZGate(q, 1.9453919625895955, 3);
  sqcRYGate(q, 2.54844761371396, 4);
  sqcRZGate(q, -2.290599866802989, 4);
  sqcRYGate(q, 0.13909040543217266, 5);
  sqcRZGate(q, -2.663684837090392, 5);
  sqcRYGate(q, 1.1953419025966365, 6);
  sqcRZGate(q, 2.617776217923006, 6);
  sqcRYGate(q, -1.3876861112515562, 7);
  sqcRZGate(q, 0.5770917487053796, 7);
  sqcRYGate(q, 3.1375317054550176, 8);
  sqcRZGate(q, -0.49384036782111274, 8);
  sqcRYGate(q, -0.046430467640383714, 9);
  sqcRZGate(q, 1.6090486812103046, 9);
  sqcRYGate(q, -2.940917892720251, 10);
  sqcRZGate(q, -0.8393625147539829, 10);
  sqcRYGate(q, -1.8936804137826724, 11);
  sqcRZGate(q, -0.15434184160385467, 11);
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
  sqcRYGate(q, -3.0815896842571022, 0);
  sqcRZGate(q, 1.3799418500522402, 0);
  sqcRYGate(q, -0.30258957546817283, 1);
  sqcRZGate(q, -2.980390090038713, 1);
  sqcRYGate(q, -0.03675724324298684, 2);
  sqcRZGate(q, 0.9117623235894534, 2);
  sqcRYGate(q, 2.2937989404271093, 3);
  sqcRZGate(q, -0.1859712901530699, 3);
  sqcRYGate(q, -3.0232129133397634, 4);
  sqcRZGate(q, -2.486790363846849, 4);
  sqcRYGate(q, 3.0594632544957494, 5);
  sqcRZGate(q, 2.5811331823696175, 5);
  sqcRYGate(q, 0.32685911653898714, 6);
  sqcRZGate(q, 2.6295309288684985, 6);
  sqcRYGate(q, 0.057799362132792236, 7);
  sqcRZGate(q, -0.02007582688345454, 7);
  sqcRYGate(q, -1.6613492011447182, 8);
  sqcRZGate(q, 2.246073537756429, 8);
  sqcRYGate(q, -0.5699545234569503, 9);
  sqcRZGate(q, 3.0259061741590374, 9);
  sqcRYGate(q, -3.084019036083146, 10);
  sqcRZGate(q, -1.7782531657949745, 10);
  sqcRYGate(q, 3.0216718638515023, 11);
  sqcRZGate(q, 2.0085189868700684, 11);
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
  sqcRYGate(q, 2.9174588821893326, 0);
  sqcRZGate(q, -1.913318428489532, 0);
  sqcRYGate(q, -1.559671615531262, 1);
  sqcRZGate(q, -0.10209562734398503, 1);
  sqcRYGate(q, 1.4951374920139946, 2);
  sqcRZGate(q, -1.0942670325370338, 2);
  sqcRYGate(q, 2.984813368136954, 3);
  sqcRZGate(q, -1.3053688905193315, 3);
  sqcRYGate(q, 1.3342116413200351, 4);
  sqcRZGate(q, 2.5491269246052846, 4);
  sqcRYGate(q, 1.1334132263668713, 5);
  sqcRZGate(q, 1.1757368904899934, 5);
  sqcRYGate(q, 2.4638944304492076, 6);
  sqcRZGate(q, 2.6208172484836854, 6);
  sqcRYGate(q, 3.0183609733594006, 7);
  sqcRZGate(q, 0.38750098432310615, 7);
  sqcRYGate(q, 1.4715560545180741, 8);
  sqcRZGate(q, 2.735263360582763, 8);
  sqcRYGate(q, 0.16461491330114608, 9);
  sqcRZGate(q, -0.22437967155658145, 9);
  sqcRYGate(q, 1.8697507534070725, 10);
  sqcRZGate(q, -0.1429494796315378, 10);
  sqcRYGate(q, 0.8291134611815519, 11);
  sqcRZGate(q, -2.7007552151901955, 11);
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
  sqcRYGate(q, 0.06284397923065121, 0);
  sqcRZGate(q, 1.5736402115862715, 0);
  sqcRYGate(q, -1.3457286462211187, 1);
  sqcRZGate(q, 0.25903757560099727, 1);
  sqcRYGate(q, -1.1645440481554292, 2);
  sqcRZGate(q, 0.6034307548142186, 2);
  sqcRYGate(q, -0.5470944526832059, 3);
  sqcRZGate(q, -0.1418177427994447, 3);
  sqcRYGate(q, 2.5120532162323945, 4);
  sqcRZGate(q, 1.8879265030567476, 4);
  sqcRYGate(q, 3.1078688833837194, 5);
  sqcRZGate(q, -1.0400236596958914, 5);
  sqcRYGate(q, -0.9207339847819114, 6);
  sqcRZGate(q, 1.4723183894167553, 6);
  sqcRYGate(q, 2.5054195823576437, 7);
  sqcRZGate(q, 2.8592416632929027, 7);
  sqcRYGate(q, -2.6287543501270885, 8);
  sqcRZGate(q, 1.2534123510271353, 8);
  sqcRYGate(q, -3.0744739121455775, 9);
  sqcRZGate(q, 1.920535888343709, 9);
  sqcRYGate(q, -0.9957369757390008, 10);
  sqcRZGate(q, -2.2628185383575516, 10);
  sqcRYGate(q, -2.5888161567810513, 11);
  sqcRZGate(q, -2.663653285438713, 11);
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
  sqcRYGate(q, -1.9181258287156182, 0);
  sqcRZGate(q, 1.2102319689489027, 0);
  sqcRYGate(q, 2.1675141313916013, 1);
  sqcRZGate(q, 0.07337723237730653, 1);
  sqcRYGate(q, -3.0181591107767365, 2);
  sqcRZGate(q, 1.0074978124720309, 2);
  sqcRYGate(q, -1.7816454763928649, 3);
  sqcRZGate(q, -0.03903524481668518, 3);
  sqcRYGate(q, -0.06905127066414529, 4);
  sqcRZGate(q, 0.9072721684901561, 4);
  sqcRYGate(q, 0.36676792867913194, 5);
  sqcRZGate(q, 2.0785752107184177, 5);
  sqcRYGate(q, -3.037835390636009, 6);
  sqcRZGate(q, -2.726001402953938, 6);
  sqcRYGate(q, -2.7416717567675426, 7);
  sqcRZGate(q, -3.1030654347729465, 7);
  sqcRYGate(q, -3.0542506317772324, 8);
  sqcRZGate(q, -1.680220422023858, 8);
  sqcRYGate(q, 3.0180373606556103, 9);
  sqcRZGate(q, 0.9792472961759948, 9);
  sqcRYGate(q, -1.7335349970987521, 10);
  sqcRZGate(q, 2.4561228525906995, 10);
  sqcRYGate(q, 2.3243194752373935, 11);
  sqcRZGate(q, 0.5086273811694513, 11);
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
  sqcRYGate(q, -3.001500171105468, 0);
  sqcRZGate(q, 1.646808308926528, 0);
  sqcRYGate(q, -2.88547538878043, 1);
  sqcRZGate(q, -1.0599916438635109, 1);
  sqcRYGate(q, 1.3357251369263712, 2);
  sqcRZGate(q, 0.22911982770355915, 2);
  sqcRYGate(q, 2.7571574639908256, 3);
  sqcRZGate(q, 1.763009831758355, 3);
  sqcRYGate(q, -3.1058221796904086, 4);
  sqcRZGate(q, 0.6063077881249636, 4);
  sqcRYGate(q, 0.14554390436698572, 5);
  sqcRZGate(q, 1.0816776968609076, 5);
  sqcRYGate(q, 0.8905690171009644, 6);
  sqcRZGate(q, 2.7668759890144115, 6);
  sqcRYGate(q, 2.4248002816668452, 7);
  sqcRZGate(q, 1.2459227759962603, 7);
  sqcRYGate(q, -1.358105992880337, 8);
  sqcRZGate(q, -0.2791738138957229, 8);
  sqcRYGate(q, -0.0045691115239323565, 9);
  sqcRZGate(q, 0.640704430775668, 9);
  sqcRYGate(q, -3.041121620887416, 10);
  sqcRZGate(q, -2.5394290680921268, 10);
  sqcRYGate(q, 1.853054538004914, 11);
  sqcRZGate(q, 0.11949935146137047, 11);
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
  sqcRYGate(q, 0.3892091490270954, 0);
  sqcRZGate(q, 3.0995301038458307, 0);
  sqcRYGate(q, 1.6250155212326494, 1);
  sqcRZGate(q, 0.4949067033579918, 1);
  sqcRYGate(q, -1.7921000313428168, 2);
  sqcRZGate(q, 0.9156205760733509, 2);
  sqcRYGate(q, -1.6261659912118112, 3);
  sqcRZGate(q, 2.7595529341906224, 3);
  sqcRYGate(q, 1.0036305369374405, 4);
  sqcRZGate(q, 1.5886155140192897, 4);
  sqcRYGate(q, 0.10241320923762345, 5);
  sqcRZGate(q, 2.3416155695112635, 5);
  sqcRYGate(q, -3.078578860211799, 6);
  sqcRZGate(q, 2.8108020555334194, 6);
  sqcRYGate(q, 3.127893912345837, 7);
  sqcRZGate(q, 1.0434136597659405, 7);
  sqcRYGate(q, -0.1570579066216231, 8);
  sqcRZGate(q, -0.8226818607569372, 8);
  sqcRYGate(q, -0.05809185638953095, 9);
  sqcRZGate(q, 1.6244911349363234, 9);
  sqcRYGate(q, 1.5426882804907585, 10);
  sqcRZGate(q, -1.2563347372649005, 10);
  sqcRYGate(q, 0.7823201392484755, 11);
  sqcRZGate(q, -1.693458195904907, 11);
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
  sqcRYGate(q, -1.550022737057911, 0);
  sqcRZGate(q, 2.3990541395034835, 0);
  sqcRYGate(q, -0.05011559779850927, 1);
  sqcRZGate(q, -1.873895796741763, 1);
  sqcRYGate(q, 0.24280378415446377, 2);
  sqcRZGate(q, -2.6904997222282083, 2);
  sqcRYGate(q, 0.09718418270177365, 3);
  sqcRZGate(q, -2.0776430125726577, 3);
  sqcRYGate(q, 3.1047147107389033, 4);
  sqcRZGate(q, 0.05039032051206203, 4);
  sqcRYGate(q, -0.04674466237920631, 5);
  sqcRZGate(q, -0.4944877428010909, 5);
  sqcRYGate(q, 0.7889792515254713, 6);
  sqcRZGate(q, -1.5076270506360885, 6);
  sqcRYGate(q, 1.8137595625323324, 7);
  sqcRZGate(q, 3.0399751886177584, 7);
  sqcRYGate(q, 2.845804962714985, 8);
  sqcRZGate(q, 2.296982927980815, 8);
  sqcRYGate(q, 0.189010745199659, 9);
  sqcRZGate(q, 1.131104492022657, 9);
  sqcRYGate(q, -1.6798526350980074, 10);
  sqcRZGate(q, 2.364725245464824, 10);
  sqcRYGate(q, -1.832882145011336, 11);
  sqcRZGate(q, 1.5172481152740518, 11);
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
  sqcRYGate(q, 0.7013252084795041, 0);
  sqcRZGate(q, 2.131645914229358, 0);
  sqcRYGate(q, 0.01920948492035013, 1);
  sqcRZGate(q, -1.8016503536868935, 1);
  sqcRYGate(q, 2.772458566014421, 2);
  sqcRZGate(q, -1.4405680263941558, 2);
  sqcRYGate(q, 2.0345278953194104, 3);
  sqcRZGate(q, 0.7906358424414874, 3);
  sqcRYGate(q, 2.3464954189195453, 4);
  sqcRZGate(q, -3.061343622622691, 4);
  sqcRYGate(q, -2.798364286714159, 5);
  sqcRZGate(q, -2.75491306374265, 5);
  sqcRYGate(q, -0.16720210585223239, 6);
  sqcRZGate(q, 0.9463081890083158, 6);
  sqcRYGate(q, -1.3560965994989331, 7);
  sqcRZGate(q, -0.9361143731724882, 7);
  sqcRYGate(q, 3.0665589578023216, 8);
  sqcRZGate(q, 0.08056258124451209, 8);
  sqcRYGate(q, 0.00384766757574706, 9);
  sqcRZGate(q, -0.937622923890074, 9);
  sqcRYGate(q, -2.0508212239377794, 10);
  sqcRZGate(q, 0.2576868763619623, 10);
  sqcRYGate(q, -2.938817804563576, 11);
  sqcRZGate(q, -2.9047930596531284, 11);
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
  sqcRYGate(q, -1.4837796811204722, 0);
  sqcRZGate(q, -3.0912607547452975, 0);
  sqcRYGate(q, 2.9627227779407046, 1);
  sqcRZGate(q, -0.20946927843605923, 1);
  sqcRYGate(q, -2.9424000016645686, 2);
  sqcRZGate(q, -2.9956387820206234, 2);
  sqcRYGate(q, 0.13000132869742978, 3);
  sqcRZGate(q, 2.7579434385843364, 3);
  sqcRYGate(q, -0.03459826790854975, 4);
  sqcRZGate(q, -1.6461000626449132, 4);
  sqcRYGate(q, 2.3631998145103204, 5);
  sqcRZGate(q, 1.8998649205631601, 5);
  sqcRYGate(q, -3.10033468120426, 6);
  sqcRZGate(q, 2.135609676673461, 6);
  sqcRYGate(q, -3.1294342184048647, 7);
  sqcRZGate(q, -2.4538183853241518, 7);
  sqcRYGate(q, -0.9974931543042117, 8);
  sqcRZGate(q, 0.646964928274965, 8);
  sqcRYGate(q, 2.900862106485319, 9);
  sqcRZGate(q, -1.4242040496931834, 9);
  sqcRYGate(q, 1.9755427902150073, 10);
  sqcRZGate(q, -0.17829902093692418, 10);
  sqcRYGate(q, 1.108219168161856, 11);
  sqcRZGate(q, 2.7948604972569773, 11);
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
  sqcRYGate(q, -1.083076232316676, 0);
  sqcRZGate(q, 0.9503376614443527, 0);
  sqcRYGate(q, -2.51246797571205, 1);
  sqcRZGate(q, 0.07117315201763473, 1);
  sqcRYGate(q, -2.649982097983539, 2);
  sqcRZGate(q, 2.7086345560520035, 2);
  sqcRYGate(q, 2.6552447035862143, 3);
  sqcRZGate(q, -1.4040103462262632, 3);
  sqcRYGate(q, 0.11571936014090767, 4);
  sqcRZGate(q, 1.132276847774176, 4);
  sqcRYGate(q, -0.1184239816781476, 5);
  sqcRZGate(q, -1.683702648125694, 5);
  sqcRYGate(q, -0.08140569225099359, 6);
  sqcRZGate(q, 2.884878898001631, 6);
  sqcRYGate(q, -0.854733853626338, 7);
  sqcRZGate(q, 2.04365557765996, 7);
  sqcRYGate(q, -3.1311274359029517, 8);
  sqcRZGate(q, -0.32345303082293303, 8);
  sqcRYGate(q, 1.710842292706037, 9);
  sqcRZGate(q, -3.1348001256072253, 9);
  sqcRYGate(q, 1.8611631561602042, 10);
  sqcRZGate(q, -1.6983807042308574, 10);
  sqcRYGate(q, -1.2907032748854994, 11);
  sqcRZGate(q, -2.5512573003253034, 11);
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
  sqcRYGate(q, 2.2691814814467968, 0);
  sqcRZGate(q, -1.2988254562677939, 0);
  sqcRYGate(q, 1.963759330851257, 1);
  sqcRZGate(q, -2.0873390751767777, 1);
  sqcRYGate(q, 0.11617497415200559, 2);
  sqcRZGate(q, 0.2594352294327564, 2);
  sqcRYGate(q, -2.9555213554323934, 3);
  sqcRZGate(q, -2.2530016769619565, 3);
  sqcRYGate(q, 3.080620468152631, 4);
  sqcRZGate(q, -1.3966782338517814, 4);
  sqcRYGate(q, -2.2800282991690293, 5);
  sqcRZGate(q, 1.3020450708710702, 5);
  sqcRYGate(q, -0.09561156010906124, 6);
  sqcRZGate(q, -2.7925857135913295, 6);
  sqcRYGate(q, 0.08658846168795709, 7);
  sqcRZGate(q, 2.454555398127257, 7);
  sqcRYGate(q, -3.126046987844909, 8);
  sqcRZGate(q, 0.5929263137042484, 8);
  sqcRYGate(q, 0.7009253085375949, 9);
  sqcRZGate(q, 1.9424211264195055, 9);
  sqcRYGate(q, 3.0318541148380422, 10);
  sqcRZGate(q, -3.119791574454834, 10);
  sqcRYGate(q, 1.4102520937814103, 11);
  sqcRZGate(q, -0.6194589318627043, 11);
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
  sqcRYGate(q, -0.2514077748073958, 0);
  sqcRZGate(q, 1.5442391869425653, 0);
  sqcRYGate(q, 2.036433536642274, 1);
  sqcRZGate(q, 1.9354931645916604, 1);
  sqcRYGate(q, 1.3070164496166585, 2);
  sqcRZGate(q, 1.9163432246114438, 2);
  sqcRYGate(q, -3.0564721836294213, 3);
  sqcRZGate(q, -2.8224219958656542, 3);
  sqcRYGate(q, -2.7783723041401687, 4);
  sqcRZGate(q, -1.337607926709001, 4);
  sqcRYGate(q, -1.5134668535232636, 5);
  sqcRZGate(q, 0.6062792292994036, 5);
  sqcRYGate(q, 0.0635817511366472, 6);
  sqcRZGate(q, 1.5780539838395053, 6);
  sqcRYGate(q, 1.4912484966777533, 7);
  sqcRZGate(q, -2.000030385596661, 7);
  sqcRYGate(q, 1.6864356663463933, 8);
  sqcRZGate(q, -2.2661423898199597, 8);
  sqcRYGate(q, -0.3456966249123199, 9);
  sqcRZGate(q, -0.5165803543983221, 9);
  sqcRYGate(q, -0.07823705870654331, 10);
  sqcRZGate(q, -0.5762976427362405, 10);
  sqcRYGate(q, 0.0051495950106366095, 11);
  sqcRZGate(q, 2.8335810719989105, 11);
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
  sqcRYGate(q, -2.933408846871649, 0);
  sqcRZGate(q, 0.025480126293637675, 0);
  sqcRYGate(q, 2.3927310108806257, 1);
  sqcRZGate(q, -1.2470194630910671, 1);
  sqcRYGate(q, 0.10373064187920425, 2);
  sqcRZGate(q, -1.86856291355231, 2);
  sqcRYGate(q, -0.16513355928045684, 3);
  sqcRZGate(q, 0.5212603259414097, 3);
  sqcRYGate(q, -3.124237861474156, 4);
  sqcRZGate(q, 1.5400777516563844, 4);
  sqcRYGate(q, -0.09614521572727726, 5);
  sqcRZGate(q, 1.6965626664541495, 5);
  sqcRYGate(q, -2.949361693197452, 6);
  sqcRZGate(q, -1.3697310560256108, 6);
  sqcRYGate(q, -0.013133220121138472, 7);
  sqcRZGate(q, 1.5295647256581733, 7);
  sqcRYGate(q, 0.04195419440319899, 8);
  sqcRZGate(q, 0.45869630785177934, 8);
  sqcRYGate(q, -2.938559217432877, 9);
  sqcRZGate(q, -0.06159894969275026, 9);
  sqcRYGate(q, -3.135160532285557, 10);
  sqcRZGate(q, 2.737013889602177, 10);
  sqcRYGate(q, -0.34861968555703043, 11);
  sqcRZGate(q, -2.9389384770158844, 11);
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
  sqcRYGate(q, -0.028849506155481208, 0);
  sqcRZGate(q, -0.952591922146862, 0);
  sqcRYGate(q, 1.523694162348484, 1);
  sqcRZGate(q, -1.2361613450286772, 1);
  sqcRYGate(q, 1.4262685581776253, 2);
  sqcRZGate(q, 2.9258820344660617, 2);
  sqcRYGate(q, -1.9690144189958954, 3);
  sqcRZGate(q, 0.42416017855181387, 3);
  sqcRYGate(q, -2.764091901944834, 4);
  sqcRZGate(q, 1.3272116982022977, 4);
  sqcRYGate(q, 1.2002369915330542, 5);
  sqcRZGate(q, 1.3894856898042969, 5);
  sqcRYGate(q, -0.06625811740373569, 6);
  sqcRZGate(q, -1.652505065712537, 6);
  sqcRYGate(q, 0.172059560639995, 7);
  sqcRZGate(q, 1.0428714830632337, 7);
  sqcRYGate(q, -1.872752234310115, 8);
  sqcRZGate(q, 0.7787878150268713, 8);
  sqcRYGate(q, 3.045843186331793, 9);
  sqcRZGate(q, -1.9071218205820708, 9);
  sqcRYGate(q, -0.9146329302687212, 10);
  sqcRZGate(q, -0.2481450664835903, 10);
  sqcRYGate(q, 0.19450683085482615, 11);
  sqcRZGate(q, -0.5985892524376781, 11);
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
  sqcRYGate(q, -2.6486330267000797, 0);
  sqcRZGate(q, -2.872605515516934, 0);
  sqcRYGate(q, 1.0961318240143714, 1);
  sqcRZGate(q, 1.6407521750522966, 1);
  sqcRYGate(q, -0.08451110058114342, 2);
  sqcRZGate(q, -1.4326349280243542, 2);
  sqcRYGate(q, -0.0808093005875973, 3);
  sqcRZGate(q, 0.9894169399225108, 3);
  sqcRYGate(q, 3.079472341568491, 4);
  sqcRZGate(q, -0.41514076397204835, 4);
  sqcRYGate(q, -3.065532835335328, 5);
  sqcRZGate(q, 1.203276151428134, 5);
  sqcRYGate(q, 0.2521823659046741, 6);
  sqcRZGate(q, 1.4486600015296327, 6);
  sqcRYGate(q, 0.030289815088874406, 7);
  sqcRZGate(q, 1.8886857555664633, 7);
  sqcRYGate(q, -3.0769659818349187, 8);
  sqcRZGate(q, -2.475887479902795, 8);
  sqcRYGate(q, -3.1190864638112843, 9);
  sqcRZGate(q, 1.2024901185084544, 9);
  sqcRYGate(q, 1.4483606663755682, 10);
  sqcRZGate(q, 1.6003266854473153, 10);
  sqcRYGate(q, 0.7235124216724378, 11);
  sqcRZGate(q, 0.7865626288000557, 11);
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
  sqcRYGate(q, -0.016903458164745366, 0);
  sqcRZGate(q, -2.647540598881509, 0);
  sqcRYGate(q, 1.655679990713736, 1);
  sqcRZGate(q, 0.5094099780313028, 1);
  sqcRYGate(q, -1.5590906188489826, 2);
  sqcRZGate(q, -1.8140388621479246, 2);
  sqcRYGate(q, -1.5144274731523746, 3);
  sqcRZGate(q, -1.2434225821430163, 3);
  sqcRYGate(q, 1.5634092171710066, 4);
  sqcRZGate(q, -0.8947927866009563, 4);
  sqcRYGate(q, -2.505253752557399, 5);
  sqcRZGate(q, 0.43943073107790076, 5);
  sqcRYGate(q, 1.378300647661404, 6);
  sqcRZGate(q, 2.186024141201484, 6);
  sqcRYGate(q, -1.6870700656786743, 7);
  sqcRZGate(q, -1.5193707531859428, 7);
  sqcRYGate(q, 1.955280510735907, 8);
  sqcRZGate(q, 1.8812090592124395, 8);
  sqcRYGate(q, 1.53485962260763, 9);
  sqcRZGate(q, -1.5748036633925757, 9);
  sqcRYGate(q, 1.5651417894180615, 10);
  sqcRZGate(q, -1.6892740899550711, 10);
  sqcRYGate(q, -0.019701475617263316, 11);
  sqcRZGate(q, 3.116013557519347, 11);

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
