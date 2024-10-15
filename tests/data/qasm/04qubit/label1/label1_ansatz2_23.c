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

  sqcRYGate(q, 1.9088580939282682, 0);
  sqcRZGate(q, -2.202124568995861, 0);
  sqcRYGate(q, 2.9554348871642175, 1);
  sqcRZGate(q, -1.0435349149140585, 1);
  sqcRYGate(q, 1.9270346448192788, 2);
  sqcRZGate(q, 2.4444423275464287, 2);
  sqcRYGate(q, -2.7253313062874645, 3);
  sqcRZGate(q, 0.6108156616914638, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.15663408630196865, 0);
  sqcRZGate(q, 1.3188563202426495, 0);
  sqcRYGate(q, 1.5273911593929403, 1);
  sqcRZGate(q, 1.6740434825969226, 1);
  sqcRYGate(q, -0.18312438174487422, 2);
  sqcRZGate(q, 2.4793094392483908, 2);
  sqcRYGate(q, 1.0443611206493815, 3);
  sqcRZGate(q, 2.582938697414402, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.7253413896957913, 0);
  sqcRZGate(q, 1.1881978858955706, 0);
  sqcRYGate(q, 3.085645396458647, 1);
  sqcRZGate(q, 0.5685656743001797, 1);
  sqcRYGate(q, 2.6618578466951215, 2);
  sqcRZGate(q, -0.2353166886223761, 2);
  sqcRYGate(q, 0.6054878263628236, 3);
  sqcRZGate(q, 0.5412914277535757, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.04753652245566, 0);
  sqcRZGate(q, 0.8159815300531414, 0);
  sqcRYGate(q, 2.5441905325635545, 1);
  sqcRZGate(q, 0.2509830335273862, 1);
  sqcRYGate(q, 1.5423938375068584, 2);
  sqcRZGate(q, 0.7033883916931954, 2);
  sqcRYGate(q, 1.037783890709543, 3);
  sqcRZGate(q, -0.4817062535560561, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.9928188515901732, 0);
  sqcRZGate(q, -2.079478637832473, 0);
  sqcRYGate(q, 0.9644359005628047, 1);
  sqcRZGate(q, 2.02197012661466, 1);
  sqcRYGate(q, -1.1942261638600515, 2);
  sqcRZGate(q, 0.3801149625247181, 2);
  sqcRYGate(q, 0.44795322227576057, 3);
  sqcRZGate(q, -2.32027265077443, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9628704086959866, 0);
  sqcRZGate(q, 1.4350325486116517, 0);
  sqcRYGate(q, -2.048721400974485, 1);
  sqcRZGate(q, -1.03923758548894, 1);
  sqcRYGate(q, 1.3044137727321496, 2);
  sqcRZGate(q, -1.689996070795047, 2);
  sqcRYGate(q, -1.6285013250619667, 3);
  sqcRZGate(q, -0.2864575470170694, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.434111584328005, 0);
  sqcRZGate(q, 2.263796194716365, 0);
  sqcRYGate(q, 0.0068340736504533955, 1);
  sqcRZGate(q, 1.935801566600933, 1);
  sqcRYGate(q, 0.38413822521817603, 2);
  sqcRZGate(q, -0.013174157069268942, 2);
  sqcRYGate(q, -1.3822425347668892, 3);
  sqcRZGate(q, -1.7017958491680227, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8883180957126032, 0);
  sqcRZGate(q, 0.5499359879422379, 0);
  sqcRYGate(q, -3.0196140621321415, 1);
  sqcRZGate(q, 1.7419216762836824, 1);
  sqcRYGate(q, 2.251964842743255, 2);
  sqcRZGate(q, -2.2217950645515208, 2);
  sqcRYGate(q, -1.5469437914634572, 3);
  sqcRZGate(q, -1.9584100847816672, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.7147878716699743, 0);
  sqcRZGate(q, -1.7142611983702958, 0);
  sqcRYGate(q, -1.6542323511732615, 1);
  sqcRZGate(q, -1.6838732799577183, 1);
  sqcRYGate(q, 3.1016368985043, 2);
  sqcRZGate(q, -3.070985956091201, 2);
  sqcRYGate(q, 1.522280756485888, 3);
  sqcRZGate(q, 2.180342560958811, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.7397771052698943, 0);
  sqcRZGate(q, -0.1753521540094586, 0);
  sqcRYGate(q, -0.04205458454462672, 1);
  sqcRZGate(q, -0.7068592811868898, 1);
  sqcRYGate(q, 3.0716096752724393, 2);
  sqcRZGate(q, -1.0408464604925118, 2);
  sqcRYGate(q, -2.398926698252621, 3);
  sqcRZGate(q, 2.2517337690653125, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.1645798030362196, 0);
  sqcRZGate(q, 2.517097512937445, 0);
  sqcRYGate(q, -2.2497983806942035, 1);
  sqcRZGate(q, -3.0672542662706626, 1);
  sqcRYGate(q, 1.0892487972179161, 2);
  sqcRZGate(q, -2.3026088181613265, 2);
  sqcRYGate(q, -2.975852316476689, 3);
  sqcRZGate(q, 2.694366488754956, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.3098505421838555, 0);
  sqcRZGate(q, -2.1780606741330124, 0);
  sqcRYGate(q, -0.9750547460286374, 1);
  sqcRZGate(q, 2.435512531515696, 1);
  sqcRYGate(q, -1.1666603637986466, 2);
  sqcRZGate(q, 2.697019020900121, 2);
  sqcRYGate(q, -1.9758040765310083, 3);
  sqcRZGate(q, -2.372196813142479, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.34438093186505386, 0);
  sqcRZGate(q, -2.236512593482848, 0);
  sqcRYGate(q, 0.8267080562270426, 1);
  sqcRZGate(q, -1.3161192392468983, 1);
  sqcRYGate(q, -1.2184496364423199, 2);
  sqcRZGate(q, -0.16842001009409077, 2);
  sqcRYGate(q, 2.3054766032017953, 3);
  sqcRZGate(q, -1.5089317002791145, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.9542668618379926, 0);
  sqcRZGate(q, 2.8178359699096336, 0);
  sqcRYGate(q, -2.933156729891024, 1);
  sqcRZGate(q, 0.485939986726253, 1);
  sqcRYGate(q, 2.926042113529696, 2);
  sqcRZGate(q, -3.111215565640905, 2);
  sqcRYGate(q, -1.6800121459639472, 3);
  sqcRZGate(q, 1.4190462750738977, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.7568437217377071, 0);
  sqcRZGate(q, -0.1841354732479287, 0);
  sqcRYGate(q, -2.0946873185703563, 1);
  sqcRZGate(q, 1.0098323254086479, 1);
  sqcRYGate(q, 2.244854597468742, 2);
  sqcRZGate(q, -1.3181465259678733, 2);
  sqcRYGate(q, 2.998740448189087, 3);
  sqcRZGate(q, -2.6119624544547024, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.21246542395356727, 0);
  sqcRZGate(q, -2.573330585297275, 0);
  sqcRYGate(q, -2.628935681476797, 1);
  sqcRZGate(q, -2.231563634293339, 1);
  sqcRYGate(q, 0.34772192000124996, 2);
  sqcRZGate(q, 2.7181659817225996, 2);
  sqcRYGate(q, -1.6414847255864689, 3);
  sqcRZGate(q, 2.713265311832632, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4680825670410087, 0);
  sqcRZGate(q, -1.2716416175073748, 0);
  sqcRYGate(q, 3.1163043062630047, 1);
  sqcRZGate(q, 1.4105059210578084, 1);
  sqcRYGate(q, 0.4486566204801176, 2);
  sqcRZGate(q, -2.717614017974728, 2);
  sqcRYGate(q, 2.8566397515764064, 3);
  sqcRZGate(q, -1.2252864844893814, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.0260694081774355, 0);
  sqcRZGate(q, 2.1316627119904488, 0);
  sqcRYGate(q, -0.3899284424439236, 1);
  sqcRZGate(q, -0.27651509655288997, 1);
  sqcRYGate(q, 1.6928935229423843, 2);
  sqcRZGate(q, -0.3345841247586638, 2);
  sqcRYGate(q, -1.0520835013599203, 3);
  sqcRZGate(q, -1.9570461427017656, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.29377782901711225, 0);
  sqcRZGate(q, -2.7159436312265273, 0);
  sqcRYGate(q, -0.3608424681673179, 1);
  sqcRZGate(q, -2.925123954643535, 1);
  sqcRYGate(q, -0.512343082688815, 2);
  sqcRZGate(q, -1.3144936423414981, 2);
  sqcRYGate(q, 0.3079154101681958, 3);
  sqcRZGate(q, -1.2966276790183782, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.2962267698998813, 0);
  sqcRZGate(q, 1.2744334925997336, 0);
  sqcRYGate(q, 1.2145614172399175, 1);
  sqcRZGate(q, 1.5761120850818777, 1);
  sqcRYGate(q, 0.02945324366699786, 2);
  sqcRZGate(q, 2.346147779066006, 2);
  sqcRYGate(q, -2.2521768761314833, 3);
  sqcRZGate(q, 0.10678617126437205, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.3750443321004627, 0);
  sqcRZGate(q, -1.764479079017815, 0);
  sqcRYGate(q, 1.514794603439756, 1);
  sqcRZGate(q, 2.2306859608283593, 1);
  sqcRYGate(q, 1.9838361979708887, 2);
  sqcRZGate(q, -1.6400494339051976, 2);
  sqcRYGate(q, 0.6784635188383622, 3);
  sqcRZGate(q, 0.5550873550297757, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.8429936123402938, 0);
  sqcRZGate(q, -1.8240058022454724, 0);
  sqcRYGate(q, -1.0291790222542652, 1);
  sqcRZGate(q, 2.431022768767214, 1);
  sqcRYGate(q, 2.5831277592676565, 2);
  sqcRZGate(q, 0.5741277547976136, 2);
  sqcRYGate(q, 2.8701465797861525, 3);
  sqcRZGate(q, 2.000860228572714, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.9498977922442009, 0);
  sqcRZGate(q, 2.8538894349544615, 0);
  sqcRYGate(q, -1.4954678604561795, 1);
  sqcRZGate(q, -2.165453629699301, 1);
  sqcRYGate(q, 2.9927344580558843, 2);
  sqcRZGate(q, 2.718648235231101, 2);
  sqcRYGate(q, 2.5300025071176515, 3);
  sqcRZGate(q, -1.7581850978211628, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.2592984518626533, 0);
  sqcRZGate(q, 0.3588920950876435, 0);
  sqcRYGate(q, -0.5566657278420815, 1);
  sqcRZGate(q, 2.92062611134798, 1);
  sqcRYGate(q, 2.198627081332644, 2);
  sqcRZGate(q, -2.465886933095254, 2);
  sqcRYGate(q, 0.9346365836695263, 3);
  sqcRZGate(q, 0.5640878052060065, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.6116798950672038, 0);
  sqcRZGate(q, 2.6392433884822273, 0);
  sqcRYGate(q, 3.014493917335417, 1);
  sqcRZGate(q, 1.9347118299659165, 1);
  sqcRYGate(q, 2.8006865409848425, 2);
  sqcRZGate(q, 0.20819101515985247, 2);
  sqcRYGate(q, 1.9431663701849164, 3);
  sqcRZGate(q, -1.6286702615334836, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.7274087785981284, 0);
  sqcRZGate(q, 0.31799930648524805, 0);
  sqcRYGate(q, -0.6856437805193921, 1);
  sqcRZGate(q, -0.8077314370338923, 1);
  sqcRYGate(q, -2.4717945152094827, 2);
  sqcRZGate(q, 1.6048245142806707, 2);
  sqcRYGate(q, 2.3661148997848627, 3);
  sqcRZGate(q, -1.9007004591109915, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.9332299806707729, 0);
  sqcRZGate(q, -1.327764899060737, 0);
  sqcRYGate(q, -0.6264696926587097, 1);
  sqcRZGate(q, 1.5619147081375928, 1);
  sqcRYGate(q, 0.23594135199880562, 2);
  sqcRZGate(q, -0.49124976972429574, 2);
  sqcRYGate(q, -2.8506846011006144, 3);
  sqcRZGate(q, 2.8489904138955273, 3);

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
