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

  sqcRYGate(q, 2.8545082382476097, 0);
  sqcRYGate(q, 2.193001984329676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1292974111209129, 0);
  sqcRYGate(q, 1.905523749185264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.094092190312782, 1);
  sqcRYGate(q, 1.9437897565540139, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.24186607238553035, 1);
  sqcRYGate(q, 1.037714235607396, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1853941877081242, 2);
  sqcRYGate(q, 1.2885448190781004, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3954908718984647, 2);
  sqcRYGate(q, 0.9050393021500169, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8848522027039, 0);
  sqcRYGate(q, -0.9283178142476378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.719471095899976, 0);
  sqcRYGate(q, -2.232699442432443, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7789220645558181, 1);
  sqcRYGate(q, 0.35381687687810714, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6426557010076293, 1);
  sqcRYGate(q, 1.8827238537373558, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.005018791526095, 2);
  sqcRYGate(q, 1.843563809117285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6850515834955431, 2);
  sqcRYGate(q, 2.872622922146141, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.387842792175181, 0);
  sqcRYGate(q, -0.26411946829058414, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1441933309598884, 0);
  sqcRYGate(q, -0.30264742514441445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.504057760285603, 1);
  sqcRYGate(q, -2.5839193877565156, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7916180774808637, 1);
  sqcRYGate(q, -2.6955409110858812, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3064045176428494, 2);
  sqcRYGate(q, -0.0035329950094707997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3388543848913113, 2);
  sqcRYGate(q, -2.996915790352228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8017323740678233, 0);
  sqcRYGate(q, -3.106129207870595, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3744440885137284, 0);
  sqcRYGate(q, -1.4766947778075412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0683861084780553, 1);
  sqcRYGate(q, 2.739001181734319, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0098214429225176, 1);
  sqcRYGate(q, -1.2441703150040997, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.900500289628712, 2);
  sqcRYGate(q, 2.986134682141145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6902267580899135, 2);
  sqcRYGate(q, 1.437993183754104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.995910866639263, 0);
  sqcRYGate(q, 0.8160524609823296, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4949171848103355, 0);
  sqcRYGate(q, 2.4780848114868466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4204781681063947, 1);
  sqcRYGate(q, -2.40146652148111, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.062922377875492, 1);
  sqcRYGate(q, 3.037596863663366, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.045862539781308, 2);
  sqcRYGate(q, -1.2428035000576756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4115845291557796, 2);
  sqcRYGate(q, 0.7501821646074945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2649209205017071, 0);
  sqcRYGate(q, -3.112653963106729, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.36904561344413, 0);
  sqcRYGate(q, -1.924595672840506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6805532511560068, 1);
  sqcRYGate(q, -0.5278522735610078, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5418820257731305, 1);
  sqcRYGate(q, -2.742309097451969, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8146383024757586, 2);
  sqcRYGate(q, -2.4123468695068206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2931346566320405, 2);
  sqcRYGate(q, -2.520598417514608, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2216297110913423, 0);
  sqcRYGate(q, 2.4237394324511654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7753581031498364, 0);
  sqcRYGate(q, 2.4202478353998402, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2832175424219057, 1);
  sqcRYGate(q, -0.3011018110606072, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.929672235114131, 1);
  sqcRYGate(q, 0.5575487476620908, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.242829595734939, 2);
  sqcRYGate(q, -1.2931608227583524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6825451501775371, 2);
  sqcRYGate(q, 2.7798066558398697, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7152597035001333, 0);
  sqcRYGate(q, 1.0817908672463314, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6124465658032023, 0);
  sqcRYGate(q, -0.4490920213712353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6359368193290766, 1);
  sqcRYGate(q, -0.1648695979628716, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.047885534902802, 1);
  sqcRYGate(q, 1.3965686259752905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4073042228324895, 2);
  sqcRYGate(q, -2.698168415028612, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2362392725858236, 2);
  sqcRYGate(q, -2.712076433080238, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6563435695606286, 0);
  sqcRYGate(q, 2.893259829089131, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.33928505446496166, 0);
  sqcRYGate(q, -1.0013711617546532, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.709248201667489, 1);
  sqcRYGate(q, -2.642380810303107, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7771105968346328, 1);
  sqcRYGate(q, -2.505134398962352, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8434395684844924, 2);
  sqcRYGate(q, 0.4562436464903943, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3260294719285897, 2);
  sqcRYGate(q, 2.3081529429642793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2911734549144724, 0);
  sqcRYGate(q, -2.0308036552985937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9854034514238914, 0);
  sqcRYGate(q, -0.14455060096480474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8534722590589545, 1);
  sqcRYGate(q, 2.0395049062071284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.044813529266184794, 1);
  sqcRYGate(q, 0.2704643024092226, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.84781885574432, 2);
  sqcRYGate(q, 1.2539930453719894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8055888821306703, 2);
  sqcRYGate(q, 1.8040298648581734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4018225797698065, 0);
  sqcRYGate(q, 1.2914825622115647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5843383453090336, 0);
  sqcRYGate(q, -1.8988490913511322, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1923123628478157, 1);
  sqcRYGate(q, 1.3612828747472303, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9186020149397782, 1);
  sqcRYGate(q, 2.6642320659588523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8945642063301554, 2);
  sqcRYGate(q, 1.8633035665204671, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.12700831340881527, 2);
  sqcRYGate(q, 2.8496173932942432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4298969117772461, 0);
  sqcRYGate(q, 2.7485220259818695, 1);
  sqcRYGate(q, 2.503366086278833, 2);
  sqcRYGate(q, 0.1804441830778618, 3);

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
