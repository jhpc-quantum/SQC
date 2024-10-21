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

  sqcRYGate(q, 1.675503773572401, 0);
  sqcRZGate(q, -2.81117086913714, 0);
  sqcRYGate(q, -2.0355813743806657, 1);
  sqcRZGate(q, -0.24699646366651162, 1);
  sqcRYGate(q, -0.5986587473514531, 2);
  sqcRZGate(q, 3.020247071751585, 2);
  sqcRYGate(q, 2.5457598840661153, 3);
  sqcRZGate(q, 0.3171480671495764, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6625470376938872, 0);
  sqcRZGate(q, 1.1186412111969632, 0);
  sqcRYGate(q, 2.4976068260482718, 1);
  sqcRZGate(q, -2.2472050041207527, 1);
  sqcRYGate(q, -0.9814179117184012, 2);
  sqcRZGate(q, -0.04111484448367108, 2);
  sqcRYGate(q, -2.2823106786778595, 3);
  sqcRZGate(q, -0.5078560609906368, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.19864809446775517, 0);
  sqcRZGate(q, 0.3335059647038497, 0);
  sqcRYGate(q, -0.12509388384260922, 1);
  sqcRZGate(q, 2.801279744183369, 1);
  sqcRYGate(q, 0.28208948338549344, 2);
  sqcRZGate(q, -0.4344955384939224, 2);
  sqcRYGate(q, -1.9503987598239476, 3);
  sqcRZGate(q, -2.354563109768189, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3179409888302143, 0);
  sqcRZGate(q, 0.32459092541513335, 0);
  sqcRYGate(q, -0.5583289466278201, 1);
  sqcRZGate(q, 1.1052905689133625, 1);
  sqcRYGate(q, 2.372572185140034, 2);
  sqcRZGate(q, -2.148331925482583, 2);
  sqcRYGate(q, -3.079140312986629, 3);
  sqcRZGate(q, 0.8050787548225565, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.767879989461725, 0);
  sqcRZGate(q, 2.3697452153947283, 0);
  sqcRYGate(q, -1.0961914657446012, 1);
  sqcRZGate(q, -0.1711576781315136, 1);
  sqcRYGate(q, 1.0743675746620864, 2);
  sqcRZGate(q, -0.3532017849134101, 2);
  sqcRYGate(q, -0.9347239103946531, 3);
  sqcRZGate(q, -2.6977317076572813, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5076289588366276, 0);
  sqcRZGate(q, 0.1354326499873917, 0);
  sqcRYGate(q, -2.5344521711035033, 1);
  sqcRZGate(q, 0.9723387718085166, 1);
  sqcRYGate(q, 2.0110140443072204, 2);
  sqcRZGate(q, 1.3191685960290132, 2);
  sqcRYGate(q, 2.3343042614318796, 3);
  sqcRZGate(q, 1.7172069816138098, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6478010572435142, 0);
  sqcRZGate(q, -1.7927088019230448, 0);
  sqcRYGate(q, 0.85034493424421, 1);
  sqcRZGate(q, 1.4328335358858584, 1);
  sqcRYGate(q, 2.0129734464569387, 2);
  sqcRZGate(q, 0.8078091261010557, 2);
  sqcRYGate(q, 3.042923230031907, 3);
  sqcRZGate(q, -2.081483816576754, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.726307229272527, 0);
  sqcRZGate(q, 2.5819297050280245, 0);
  sqcRYGate(q, 0.10173826878803727, 1);
  sqcRZGate(q, -0.5742667223251079, 1);
  sqcRYGate(q, -2.354273770721438, 2);
  sqcRZGate(q, -1.3038089876821626, 2);
  sqcRYGate(q, -1.055439446423897, 3);
  sqcRZGate(q, -2.060406089743772, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5001226283568165, 0);
  sqcRZGate(q, -0.9425828592937047, 0);
  sqcRYGate(q, 2.5804417589927424, 1);
  sqcRZGate(q, 1.1156814324299997, 1);
  sqcRYGate(q, 1.869791403233412, 2);
  sqcRZGate(q, -1.1958507015715192, 2);
  sqcRYGate(q, 1.667500496331667, 3);
  sqcRZGate(q, 0.509251378621757, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1422454712470165, 0);
  sqcRZGate(q, -2.399497728146918, 0);
  sqcRYGate(q, 0.03847061710907765, 1);
  sqcRZGate(q, 0.11881606691669512, 1);
  sqcRYGate(q, -1.7754150652401506, 2);
  sqcRZGate(q, 2.3866459603707955, 2);
  sqcRYGate(q, 0.09199404924369237, 3);
  sqcRZGate(q, 1.0962295986376362, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2606245379997887, 0);
  sqcRZGate(q, 0.6349950019203695, 0);
  sqcRYGate(q, 1.5740659251165112, 1);
  sqcRZGate(q, 2.678479740537962, 1);
  sqcRYGate(q, -1.5527440073425967, 2);
  sqcRZGate(q, -2.5110882649618915, 2);
  sqcRYGate(q, -1.09840535373587, 3);
  sqcRZGate(q, -2.579491873080446, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.622929889296339, 0);
  sqcRZGate(q, -1.1350412291347947, 0);
  sqcRYGate(q, 1.7520123277392883, 1);
  sqcRZGate(q, 1.1455323417121646, 1);
  sqcRYGate(q, 3.0364909480245146, 2);
  sqcRZGate(q, -2.3773248601895713, 2);
  sqcRYGate(q, 2.093517243223841, 3);
  sqcRZGate(q, -2.8400972667010604, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.3516056548309563, 0);
  sqcRZGate(q, -3.059783450415581, 0);
  sqcRYGate(q, -0.13175389252531097, 1);
  sqcRZGate(q, -2.1277522322978557, 1);
  sqcRYGate(q, 1.350398106463647, 2);
  sqcRZGate(q, -1.6618096761488967, 2);
  sqcRYGate(q, 0.11508180501786303, 3);
  sqcRZGate(q, 0.6797717012354104, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.10239277115501633, 0);
  sqcRZGate(q, -2.313888639695723, 0);
  sqcRYGate(q, -1.3156472741042335, 1);
  sqcRZGate(q, 2.266376050236997, 1);
  sqcRYGate(q, 1.0329127510235712, 2);
  sqcRZGate(q, -2.741888037724284, 2);
  sqcRYGate(q, 2.81619592735544, 3);
  sqcRZGate(q, -1.6928334418971103, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.3603395014116932, 0);
  sqcRZGate(q, 0.490430902030666, 0);
  sqcRYGate(q, -0.7740662510038745, 1);
  sqcRZGate(q, -1.6322924390967153, 1);
  sqcRYGate(q, -2.7480244733486114, 2);
  sqcRZGate(q, 1.0314098010292208, 2);
  sqcRYGate(q, 0.49677807230814697, 3);
  sqcRZGate(q, -1.6721397028649838, 3);

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
