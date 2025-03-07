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

  sqcRYGate(q, -1.9486728026034723, 0);
  sqcRZGate(q, 3.0884998433611988, 0);
  sqcRYGate(q, 1.5888901896853458, 1);
  sqcRZGate(q, -0.8023494937591624, 1);
  sqcRYGate(q, 1.9923872552276976, 2);
  sqcRZGate(q, 1.8201212897360568, 2);
  sqcRYGate(q, 0.7674613738513054, 3);
  sqcRZGate(q, 1.8847572695235266, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2622091617542806, 0);
  sqcRZGate(q, 0.3606988999750848, 0);
  sqcRYGate(q, -2.723394484346934, 1);
  sqcRZGate(q, 1.2692082268316702, 1);
  sqcRYGate(q, -1.0989504272955726, 2);
  sqcRZGate(q, 2.4736231877923047, 2);
  sqcRYGate(q, -0.9451782098450368, 3);
  sqcRZGate(q, 1.3224090579471381, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5931762844117086, 0);
  sqcRZGate(q, 2.196398729740418, 0);
  sqcRYGate(q, -1.3921381207803918, 1);
  sqcRZGate(q, -0.9482305592478015, 1);
  sqcRYGate(q, -1.8802174935406817, 2);
  sqcRZGate(q, 1.736602715428845, 2);
  sqcRYGate(q, -3.0889924621072544, 3);
  sqcRZGate(q, -1.1267835961730857, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4160425168082585, 0);
  sqcRZGate(q, 2.230934593987419, 0);
  sqcRYGate(q, -0.7623542311671996, 1);
  sqcRZGate(q, 2.8280445569267907, 1);
  sqcRYGate(q, -0.5583349663550372, 2);
  sqcRZGate(q, -1.7918969797193425, 2);
  sqcRYGate(q, 2.027596399016186, 3);
  sqcRZGate(q, 0.8354942527424116, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6884963331219804, 0);
  sqcRZGate(q, 2.3219363737981724, 0);
  sqcRYGate(q, -2.6069510499652497, 1);
  sqcRZGate(q, -0.3709389156743343, 1);
  sqcRYGate(q, -1.4718794320466122, 2);
  sqcRZGate(q, 2.228201435635488, 2);
  sqcRYGate(q, -2.868253327625342, 3);
  sqcRZGate(q, -0.5027782455301608, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.158248294551, 0);
  sqcRZGate(q, 2.918948819236267, 0);
  sqcRYGate(q, -0.1853089242219106, 1);
  sqcRZGate(q, 2.3588623358334444, 1);
  sqcRYGate(q, 0.8991055355574851, 2);
  sqcRZGate(q, 0.6359100120960581, 2);
  sqcRYGate(q, 1.8111893159599681, 3);
  sqcRZGate(q, -0.2603392558414462, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.865989381521377, 0);
  sqcRZGate(q, -2.392184408138989, 0);
  sqcRYGate(q, 2.055813598579616, 1);
  sqcRZGate(q, -0.7250543320002591, 1);
  sqcRYGate(q, -2.911188668901982, 2);
  sqcRZGate(q, -2.738824282475369, 2);
  sqcRYGate(q, -0.3327269225164473, 3);
  sqcRZGate(q, -1.941806241731373, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6792703108184224, 0);
  sqcRZGate(q, 2.0325912131178887, 0);
  sqcRYGate(q, -0.8848388420390112, 1);
  sqcRZGate(q, 1.0491683155820377, 1);
  sqcRYGate(q, 2.765614738028643, 2);
  sqcRZGate(q, 2.9651575651567237, 2);
  sqcRYGate(q, -2.658450440820265, 3);
  sqcRZGate(q, 1.5638210880421566, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5437868935604537, 0);
  sqcRZGate(q, -2.6333380837116356, 0);
  sqcRYGate(q, 2.5828615061119344, 1);
  sqcRZGate(q, -1.930991455391056, 1);
  sqcRYGate(q, 1.5796700379990751, 2);
  sqcRZGate(q, 2.1172283356254993, 2);
  sqcRYGate(q, 0.6731477244170199, 3);
  sqcRZGate(q, 2.5385014674606383, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.489371062138873, 0);
  sqcRZGate(q, -0.9308008498331448, 0);
  sqcRYGate(q, 1.0174783254759743, 1);
  sqcRZGate(q, -2.141073303859562, 1);
  sqcRYGate(q, 2.4677071009618574, 2);
  sqcRZGate(q, -3.058283267107571, 2);
  sqcRYGate(q, 2.8660349488369454, 3);
  sqcRZGate(q, 3.0969968688563054, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8164099611632138, 0);
  sqcRZGate(q, 0.8024536503142422, 0);
  sqcRYGate(q, -0.21879585466707857, 1);
  sqcRZGate(q, 0.6842327292179622, 1);
  sqcRYGate(q, 2.758078322808807, 2);
  sqcRZGate(q, -2.6895541790486623, 2);
  sqcRYGate(q, 0.8089256074228989, 3);
  sqcRZGate(q, -2.252579569322789, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3787212059371934, 0);
  sqcRZGate(q, 1.7744272124385392, 0);
  sqcRYGate(q, 1.3220153962833054, 1);
  sqcRZGate(q, 2.099707906486672, 1);
  sqcRYGate(q, -0.4722684887445965, 2);
  sqcRZGate(q, -1.588452730332474, 2);
  sqcRYGate(q, 1.4021586222439135, 3);
  sqcRZGate(q, -1.3628238421068481, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.4457911389991116, 0);
  sqcRZGate(q, -0.7547200648705192, 0);
  sqcRYGate(q, 1.969769185937568, 1);
  sqcRZGate(q, 2.9848800258895123, 1);
  sqcRYGate(q, -0.7752329108031378, 2);
  sqcRZGate(q, 1.7222348389779751, 2);
  sqcRYGate(q, -0.14980202557119845, 3);
  sqcRZGate(q, 1.2494418771108284, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7639147366027705, 0);
  sqcRZGate(q, -0.3129531858347445, 0);
  sqcRYGate(q, -0.8809648176943387, 1);
  sqcRZGate(q, -1.528916250195217, 1);
  sqcRYGate(q, 0.7697353506739498, 2);
  sqcRZGate(q, 0.4327661682026738, 2);
  sqcRYGate(q, -0.3288751755660533, 3);
  sqcRZGate(q, 1.3707750377455274, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9355948344475596, 0);
  sqcRZGate(q, -1.5029001005595288, 0);
  sqcRYGate(q, -0.6640088864948632, 1);
  sqcRZGate(q, -1.4234946566913793, 1);
  sqcRYGate(q, 2.552634624219092, 2);
  sqcRZGate(q, -2.298210763559888, 2);
  sqcRYGate(q, -1.8159346642089325, 3);
  sqcRZGate(q, 2.748562744535426, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.08515577591898449, 0);
  sqcRZGate(q, -1.8450929067494395, 0);
  sqcRYGate(q, 2.3284823958248264, 1);
  sqcRZGate(q, -3.0393186490616895, 1);
  sqcRYGate(q, 0.4089496733534972, 2);
  sqcRZGate(q, 0.7160184947468257, 2);
  sqcRYGate(q, -1.8854878981453835, 3);
  sqcRZGate(q, -0.19230450686106781, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2184787915657926, 0);
  sqcRZGate(q, -2.2499916067746693, 0);
  sqcRYGate(q, 1.7388233210228063, 1);
  sqcRZGate(q, -2.3266812655591815, 1);
  sqcRYGate(q, -3.1259369248978883, 2);
  sqcRZGate(q, -0.5561363569287269, 2);
  sqcRYGate(q, 1.0519164433373245, 3);
  sqcRZGate(q, -2.994132755537113, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1326983283520446, 0);
  sqcRZGate(q, 2.9332440858531728, 0);
  sqcRYGate(q, 0.7733053472532714, 1);
  sqcRZGate(q, -1.8389062233159006, 1);
  sqcRYGate(q, -0.8647454760657052, 2);
  sqcRZGate(q, 0.3829255425377944, 2);
  sqcRYGate(q, 0.6336793270257138, 3);
  sqcRZGate(q, -1.4705329973328887, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3774352309990335, 0);
  sqcRZGate(q, 0.2998088095623909, 0);
  sqcRYGate(q, 0.9312222860804056, 1);
  sqcRZGate(q, -1.8087821760687568, 1);
  sqcRYGate(q, 2.9204997138120716, 2);
  sqcRZGate(q, 1.7290797276269099, 2);
  sqcRYGate(q, -2.9197076333550576, 3);
  sqcRZGate(q, 2.66676652653675, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9945159955621714, 0);
  sqcRZGate(q, 1.616374790699231, 0);
  sqcRYGate(q, 0.8472630056979579, 1);
  sqcRZGate(q, -0.008178875291860682, 1);
  sqcRYGate(q, 0.3245207310385151, 2);
  sqcRZGate(q, -1.6155548801170223, 2);
  sqcRYGate(q, 1.8395723987983004, 3);
  sqcRZGate(q, -2.021958614827562, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.201256755288293, 0);
  sqcRZGate(q, -2.4514463221257468, 0);
  sqcRYGate(q, -1.5198499201408135, 1);
  sqcRZGate(q, 2.532394966242265, 1);
  sqcRYGate(q, 1.96288996874231, 2);
  sqcRZGate(q, 0.5979368875806237, 2);
  sqcRYGate(q, -1.5440247680805008, 3);
  sqcRZGate(q, -1.5893915434844388, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6896771157041184, 0);
  sqcRZGate(q, -1.5511102908800418, 0);
  sqcRYGate(q, 0.14680715628340452, 1);
  sqcRZGate(q, -1.6595158208877232, 1);
  sqcRYGate(q, -2.068099657290831, 2);
  sqcRZGate(q, 1.6872329176101228, 2);
  sqcRYGate(q, -0.7160955595238585, 3);
  sqcRZGate(q, -0.550182974775014, 3);

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
