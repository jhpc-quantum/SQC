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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -2.3340617891137034, 0);
  sqcRZGate(q, -2.6499481671248546, 0);
  sqcRYGate(q, -2.4105677981477376, 1);
  sqcRZGate(q, 0.8634017857301094, 1);
  sqcRYGate(q, 2.674119000878704, 2);
  sqcRZGate(q, 2.157252900569673, 2);
  sqcRYGate(q, -2.622031061624988, 3);
  sqcRZGate(q, 2.1331468232971154, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.9693926340591954, 0);
  sqcRZGate(q, -0.39308108009053017, 0);
  sqcRYGate(q, 3.0251198543956956, 1);
  sqcRZGate(q, 0.19733228171080341, 1);
  sqcRYGate(q, 0.37033057911836714, 2);
  sqcRZGate(q, -0.18439742750807042, 2);
  sqcRYGate(q, 0.5950141422015411, 3);
  sqcRZGate(q, -2.3982913501971233, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9206052511954822, 0);
  sqcRZGate(q, -0.9189490447779313, 0);
  sqcRYGate(q, -1.0543073718423026, 1);
  sqcRZGate(q, -1.2409622396681428, 1);
  sqcRYGate(q, -1.5869294893867083, 2);
  sqcRZGate(q, -1.5777406924589499, 2);
  sqcRYGate(q, 0.5699923729681284, 3);
  sqcRZGate(q, 1.3912200219018205, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.6538491434980462, 0);
  sqcRZGate(q, 2.4393724316196277, 0);
  sqcRYGate(q, 2.13903930936165, 1);
  sqcRZGate(q, -2.3073223284859514, 1);
  sqcRYGate(q, 0.6029884771753933, 2);
  sqcRZGate(q, -1.2598613864537906, 2);
  sqcRYGate(q, -0.6456713513708634, 3);
  sqcRZGate(q, -0.1498146620466354, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.3820316369119487, 0);
  sqcRZGate(q, 1.5779512433973408, 0);
  sqcRYGate(q, 1.0280905443660178, 1);
  sqcRZGate(q, 0.05165170375655363, 1);
  sqcRYGate(q, -2.3699991083964944, 2);
  sqcRZGate(q, -1.0430042981483008, 2);
  sqcRYGate(q, 2.4124640305438927, 3);
  sqcRZGate(q, 0.19370217843662046, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6417231669860572, 0);
  sqcRZGate(q, 1.148415387601755, 0);
  sqcRYGate(q, -0.48776234817513514, 1);
  sqcRZGate(q, 0.8036325927093888, 1);
  sqcRYGate(q, -0.14260010154628855, 2);
  sqcRZGate(q, -2.667875654520251, 2);
  sqcRYGate(q, 1.0189842187807567, 3);
  sqcRZGate(q, -1.6445420034056275, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9814571349338408, 0);
  sqcRZGate(q, 0.9607168091778842, 0);
  sqcRYGate(q, 1.9523356856829532, 1);
  sqcRZGate(q, 0.14476544807267014, 1);
  sqcRYGate(q, -1.512110245320739, 2);
  sqcRZGate(q, -1.6095868617798506, 2);
  sqcRYGate(q, 1.0209003311476677, 3);
  sqcRZGate(q, -2.994101280100094, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.09589662571079756, 0);
  sqcRZGate(q, -2.3285596420229435, 0);
  sqcRYGate(q, 0.09868939724401789, 1);
  sqcRZGate(q, 0.6304638385996286, 1);
  sqcRYGate(q, -0.026495550088282402, 2);
  sqcRZGate(q, 0.09733933673587931, 2);
  sqcRYGate(q, -1.4759372142699405, 3);
  sqcRZGate(q, -0.7327746527880564, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.2251066083982507, 0);
  sqcRZGate(q, -1.4285286242990993, 0);
  sqcRYGate(q, 2.437761068933387, 1);
  sqcRZGate(q, -1.8381409261825379, 1);
  sqcRYGate(q, 0.03401547325131879, 2);
  sqcRZGate(q, 0.349462514555435, 2);
  sqcRYGate(q, 2.6363953357705716, 3);
  sqcRZGate(q, 2.976895166408765, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.8108709926797197, 0);
  sqcRZGate(q, -1.0175238140049023, 0);
  sqcRYGate(q, -1.9939984782335516, 1);
  sqcRZGate(q, -0.8856604468419407, 1);
  sqcRYGate(q, 1.6678231921914455, 2);
  sqcRZGate(q, -2.470042575525218, 2);
  sqcRYGate(q, 0.8317297574505345, 3);
  sqcRZGate(q, -2.014629835644565, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.034171814404288625, 0);
  sqcRZGate(q, 1.9277987964493757, 0);
  sqcRYGate(q, 1.444002195725366, 1);
  sqcRZGate(q, -2.258069089478682, 1);
  sqcRYGate(q, -0.5053816151211779, 2);
  sqcRZGate(q, -2.158944118549024, 2);
  sqcRYGate(q, -0.27195966203340305, 3);
  sqcRZGate(q, -2.3604422246257646, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.675332600631438, 0);
  sqcRZGate(q, -0.42733109478023223, 0);
  sqcRYGate(q, -0.3335830517550041, 1);
  sqcRZGate(q, 2.57329923918516, 1);
  sqcRYGate(q, 1.1620124023322127, 2);
  sqcRZGate(q, 1.1482015354861312, 2);
  sqcRYGate(q, -2.434152531595926, 3);
  sqcRZGate(q, -0.231281520990475, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.1518504383949777, 0);
  sqcRZGate(q, 1.8055192157856808, 0);
  sqcRYGate(q, -1.0644857228977447, 1);
  sqcRZGate(q, -0.16092752542977795, 1);
  sqcRYGate(q, -2.7565080856448354, 2);
  sqcRZGate(q, -0.01882791203775751, 2);
  sqcRYGate(q, 2.4175136320081356, 3);
  sqcRZGate(q, -0.1488860289381435, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.2994806335810063, 0);
  sqcRZGate(q, 1.8923864977912812, 0);
  sqcRYGate(q, 2.950124609362776, 1);
  sqcRZGate(q, 2.304560421148785, 1);
  sqcRYGate(q, 1.44212269941388, 2);
  sqcRZGate(q, -1.4369849151628717, 2);
  sqcRYGate(q, -1.9099237915386675, 3);
  sqcRZGate(q, 3.112530330956293, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.22626822179566175, 0);
  sqcRZGate(q, -2.0501028782968405, 0);
  sqcRYGate(q, -0.8263805174485702, 1);
  sqcRZGate(q, -2.1518148476079375, 1);
  sqcRYGate(q, 2.165509456849733, 2);
  sqcRZGate(q, -0.15593454447177432, 2);
  sqcRYGate(q, 1.6173481618771444, 3);
  sqcRZGate(q, 0.001157763616611866, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.6828196583227317, 0);
  sqcRZGate(q, 0.5116626031800207, 0);
  sqcRYGate(q, -0.32523206776378455, 1);
  sqcRZGate(q, 2.926020307251285, 1);
  sqcRYGate(q, 0.9316899634545259, 2);
  sqcRZGate(q, 0.8085787441808225, 2);
  sqcRYGate(q, -0.5941947620148875, 3);
  sqcRZGate(q, -0.32918551450632233, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.2004803874626422, 0);
  sqcRZGate(q, 0.07323787511784818, 0);
  sqcRYGate(q, 0.7070364539419722, 1);
  sqcRZGate(q, 2.6873009924780753, 1);
  sqcRYGate(q, 1.3769695839446792, 2);
  sqcRZGate(q, 3.0427950354517392, 2);
  sqcRYGate(q, -2.8630784398673956, 3);
  sqcRZGate(q, 1.5796878574065454, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.5494288967120635, 0);
  sqcRZGate(q, -0.8664505709325324, 0);
  sqcRYGate(q, 2.614879046498095, 1);
  sqcRZGate(q, 2.339259982474878, 1);
  sqcRYGate(q, -1.9712426183447513, 2);
  sqcRZGate(q, -1.6437129621138031, 2);
  sqcRYGate(q, -1.0082518440908634, 3);
  sqcRZGate(q, 2.385070218149639, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.3508580066104308, 0);
  sqcRZGate(q, 1.6248676821024874, 0);
  sqcRYGate(q, -1.9070995902396364, 1);
  sqcRZGate(q, -1.7209352076101876, 1);
  sqcRYGate(q, -0.9949813472254336, 2);
  sqcRZGate(q, -1.9856335940086098, 2);
  sqcRYGate(q, 1.0991038794848862, 3);
  sqcRZGate(q, 2.539703559643755, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.1248547561352658, 0);
  sqcRZGate(q, 0.4672467988636102, 0);
  sqcRYGate(q, -1.8583271853713101, 1);
  sqcRZGate(q, 2.578524752039744, 1);
  sqcRYGate(q, -0.49135048760340516, 2);
  sqcRZGate(q, 1.2943977464081784, 2);
  sqcRYGate(q, 0.2112848057946186, 3);
  sqcRZGate(q, 1.7907143243640355, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.8066198911119438, 0);
  sqcRZGate(q, -2.601151905792413, 0);
  sqcRYGate(q, -0.4906275349401037, 1);
  sqcRZGate(q, -2.433658234063916, 1);
  sqcRYGate(q, -0.8510889274204958, 2);
  sqcRZGate(q, -0.44553358482887956, 2);
  sqcRYGate(q, -0.8837796936324827, 3);
  sqcRZGate(q, -0.7751983862169103, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.18741863170921746, 0);
  sqcRZGate(q, 0.7318514784817148, 0);
  sqcRYGate(q, 2.6089553561743952, 1);
  sqcRZGate(q, -1.4237434643296476, 1);
  sqcRYGate(q, -2.2589608860297727, 2);
  sqcRZGate(q, -1.6393948645349734, 2);
  sqcRYGate(q, -2.81461895667242, 3);
  sqcRZGate(q, -1.8834588371147332, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.6873967912900774, 0);
  sqcRZGate(q, 2.624578140546438, 0);
  sqcRYGate(q, -0.31370978977894254, 1);
  sqcRZGate(q, -1.7551939489418027, 1);
  sqcRYGate(q, -2.25118275910682, 2);
  sqcRZGate(q, -1.8490234563980463, 2);
  sqcRYGate(q, 0.4085611326353342, 3);
  sqcRZGate(q, -1.6294730659477257, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6210581294475377, 0);
  sqcRZGate(q, -0.21012231400012468, 0);
  sqcRYGate(q, -0.5718915364767864, 1);
  sqcRZGate(q, -1.9847560164507874, 1);
  sqcRYGate(q, -1.3995742850912212, 2);
  sqcRZGate(q, 1.0189376728346724, 2);
  sqcRYGate(q, -2.570111838580371, 3);
  sqcRZGate(q, -3.1204114897312234, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8448418096875446, 0);
  sqcRZGate(q, 2.815688228697695, 0);
  sqcRYGate(q, 0.6972729181512539, 1);
  sqcRZGate(q, 1.5458326649149532, 1);
  sqcRYGate(q, 2.3850243983200694, 2);
  sqcRZGate(q, 0.11938074207981143, 2);
  sqcRYGate(q, -1.1922848365065866, 3);
  sqcRZGate(q, 0.826802167368272, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8620848044553736, 0);
  sqcRZGate(q, -1.3845647933964906, 0);
  sqcRYGate(q, 2.533812204216186, 1);
  sqcRZGate(q, 2.531408289870521, 1);
  sqcRYGate(q, 1.0356200546128218, 2);
  sqcRZGate(q, -2.126890597477539, 2);
  sqcRYGate(q, -1.9174934502821483, 3);
  sqcRZGate(q, -0.21417995268152132, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.9589627505964664, 0);
  sqcRZGate(q, 1.6582480441395808, 0);
  sqcRYGate(q, -2.505828434419385, 1);
  sqcRZGate(q, 2.6182644753181084, 1);
  sqcRYGate(q, 0.3565501340479358, 2);
  sqcRZGate(q, 0.9927597758155545, 2);
  sqcRYGate(q, 0.2699197844244469, 3);
  sqcRZGate(q, 2.643815961280883, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.537212449013758, 0);
  sqcRZGate(q, 0.24032061408649152, 0);
  sqcRYGate(q, -1.1567849798083707, 1);
  sqcRZGate(q, -1.0221253377551998, 1);
  sqcRYGate(q, -0.219048712689073, 2);
  sqcRZGate(q, -2.0850567194853173, 2);
  sqcRYGate(q, 1.5294433694664487, 3);
  sqcRZGate(q, -0.7571840745334997, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7666048409263713, 0);
  sqcRZGate(q, -1.7702069913588412, 0);
  sqcRYGate(q, -2.966996028337126, 1);
  sqcRZGate(q, 0.24283212220434428, 1);
  sqcRYGate(q, 3.0542527331061193, 2);
  sqcRZGate(q, 1.2689994254430914, 2);
  sqcRYGate(q, 1.2683112186067333, 3);
  sqcRZGate(q, -2.4826364195640815, 3);

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
