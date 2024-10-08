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

  sqcRYGate(q, 1.0109969752733494, 0);
  sqcRYGate(q, 0.8832076649184963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0676602324229685, 0);
  sqcRYGate(q, 0.07700639272321563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3816507742162414, 0);
  sqcRYGate(q, -2.9608814358470217, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1214206598622507, 0);
  sqcRYGate(q, 2.8866453974123245, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9448561654852594, 0);
  sqcRYGate(q, -0.570141038713702, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2720697507070369, 0);
  sqcRYGate(q, -2.306066773146558, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.580136624288778, 1);
  sqcRYGate(q, 1.321004155905311, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7970777214442304, 1);
  sqcRYGate(q, -0.029001355500730245, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0243643338537956, 1);
  sqcRYGate(q, 0.6852954959918409, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.112920299863745, 1);
  sqcRYGate(q, -1.4115220388958605, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8662290709128249, 2);
  sqcRYGate(q, 0.4167598023853971, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.906466258630827, 2);
  sqcRYGate(q, 2.368350432994825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8117253115404957, 0);
  sqcRYGate(q, -0.8750997955897536, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6415524306163987, 0);
  sqcRYGate(q, 1.144021097152259, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6716260891664261, 0);
  sqcRYGate(q, 0.5311272066513267, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.020032320234491, 0);
  sqcRYGate(q, -1.6069553447006801, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4539376706742844, 0);
  sqcRYGate(q, -2.994776888596013, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.371397601688682, 0);
  sqcRYGate(q, 2.5061747972047854, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.475855336964858, 1);
  sqcRYGate(q, -2.2824039145966477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.391976209469082, 1);
  sqcRYGate(q, 2.702926606227612, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.24161838118068868, 1);
  sqcRYGate(q, -0.4273775829913481, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7313646897832817, 1);
  sqcRYGate(q, -2.362127021837463, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.116457355811403, 2);
  sqcRYGate(q, 2.676723116409437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.31808587926273635, 2);
  sqcRYGate(q, 2.9657193431636917, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.142445497987275, 0);
  sqcRYGate(q, 1.5585117054763309, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2371850385712616, 0);
  sqcRYGate(q, -0.3640079816563111, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9408088238954964, 0);
  sqcRYGate(q, 2.640679073260007, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6657810892107414, 0);
  sqcRYGate(q, -3.1198538035273704, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3365862547927234, 0);
  sqcRYGate(q, 3.0380014962981363, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.09751425702723537, 0);
  sqcRYGate(q, 2.4333374976410838, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8239272261458719, 1);
  sqcRYGate(q, 0.8044434642818282, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.057149668286834654, 1);
  sqcRYGate(q, -0.5741440432454885, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.368364363596963, 1);
  sqcRYGate(q, -2.7156869383873516, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5802151580030372, 1);
  sqcRYGate(q, -2.335023808895291, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.017729302222935, 2);
  sqcRYGate(q, 1.0722062068989784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8257280679437115, 2);
  sqcRYGate(q, -0.7715725068197923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3347652492019852, 0);
  sqcRYGate(q, -0.691418176346065, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8712129220849603, 0);
  sqcRYGate(q, -0.6589663396368377, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.887038242063835, 0);
  sqcRYGate(q, -2.6989770774324198, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5969160046510166, 0);
  sqcRYGate(q, 2.704067244392146, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2629982053408786, 0);
  sqcRYGate(q, 1.9407971524029115, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.41386947907541666, 0);
  sqcRYGate(q, -1.3664582269156247, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5488354517612564, 1);
  sqcRYGate(q, -2.9018626287963625, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.130342008362297, 1);
  sqcRYGate(q, 2.998525359349266, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8953285821821972, 1);
  sqcRYGate(q, 1.358125440777307, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7053522498474494, 1);
  sqcRYGate(q, -3.0671802487993363, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4894121941662135, 2);
  sqcRYGate(q, 1.6722034213033101, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9237741366558669, 2);
  sqcRYGate(q, -3.018865364463925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.46562703243615944, 0);
  sqcRYGate(q, 0.6830627526873317, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.39144691017214645, 0);
  sqcRYGate(q, 1.2098480994032972, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7299253753011845, 0);
  sqcRYGate(q, -2.234285783702158, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.41163472023291214, 0);
  sqcRYGate(q, -1.5262717462936606, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8486436699636712, 0);
  sqcRYGate(q, -1.2662011369124035, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.489540081788873, 0);
  sqcRYGate(q, 1.917315858917688, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3424026654485611, 1);
  sqcRYGate(q, -0.3968655030962793, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1418043011617436, 1);
  sqcRYGate(q, 0.28697908142450906, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5806581149226866, 1);
  sqcRYGate(q, 0.4920944591069948, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3183929774244416, 1);
  sqcRYGate(q, 0.8675893430646621, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2619264390357575, 2);
  sqcRYGate(q, 0.13421913177611433, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3165946993243809, 2);
  sqcRYGate(q, 3.0409787294762505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.14177508600341684, 0);
  sqcRYGate(q, 0.18575747501601003, 1);
  sqcRYGate(q, -0.191777057731985, 2);
  sqcRYGate(q, -2.247764445036627, 3);

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
