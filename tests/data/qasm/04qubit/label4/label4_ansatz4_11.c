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

  sqcRYGate(q, -1.2291025220595264, 0);
  sqcRZGate(q, -1.4248325243068938, 0);
  sqcRYGate(q, 2.095935340866501, 1);
  sqcRZGate(q, 1.0525970653369152, 1);
  sqcRYGate(q, 2.2049930344620696, 2);
  sqcRZGate(q, 2.2920710380259375, 2);
  sqcRYGate(q, 1.9070923526482455, 3);
  sqcRZGate(q, -2.870279861652391, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9325222856973863, 0);
  sqcRZGate(q, 2.8537308951865143, 0);
  sqcRYGate(q, -0.7608690574992325, 1);
  sqcRZGate(q, -1.966357667812938, 1);
  sqcRYGate(q, -0.35258786917941815, 2);
  sqcRZGate(q, -3.023183210641267, 2);
  sqcRYGate(q, -2.4181039419776225, 3);
  sqcRZGate(q, -2.8735709117969384, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8966296371907482, 0);
  sqcRZGate(q, 1.1360617544415206, 0);
  sqcRYGate(q, -0.0478882757200072, 1);
  sqcRZGate(q, -1.1622224624375705, 1);
  sqcRYGate(q, -1.6092915303778126, 2);
  sqcRZGate(q, 1.6634392871224348, 2);
  sqcRYGate(q, -3.090672512867303, 3);
  sqcRZGate(q, 2.4301441280777922, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.10569519448220444, 0);
  sqcRZGate(q, -1.9017750803681794, 0);
  sqcRYGate(q, -0.4590167945122632, 1);
  sqcRZGate(q, 1.4230167238771398, 1);
  sqcRYGate(q, 0.3482473199571734, 2);
  sqcRZGate(q, -1.125098886899896, 2);
  sqcRYGate(q, 2.3149801988946983, 3);
  sqcRZGate(q, 2.7619029114687503, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0797883918702746, 0);
  sqcRZGate(q, -1.2488736174575974, 0);
  sqcRYGate(q, -0.08971233645355645, 1);
  sqcRZGate(q, -2.978970973142475, 1);
  sqcRYGate(q, -1.2809629539469665, 2);
  sqcRZGate(q, 1.8375508310659052, 2);
  sqcRYGate(q, 0.6522750930673187, 3);
  sqcRZGate(q, 3.049566658207364, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6252320657656467, 0);
  sqcRZGate(q, -1.1183354622634982, 0);
  sqcRYGate(q, -2.7679566062219605, 1);
  sqcRZGate(q, -1.6262985361065316, 1);
  sqcRYGate(q, 0.5853511638074554, 2);
  sqcRZGate(q, -2.905525105531651, 2);
  sqcRYGate(q, 0.990788731283003, 3);
  sqcRZGate(q, -1.6850808129773205, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3840299457970606, 0);
  sqcRZGate(q, 0.47709138147159097, 0);
  sqcRYGate(q, -1.9527246704458172, 1);
  sqcRZGate(q, 2.381644779735291, 1);
  sqcRYGate(q, 2.533806856161203, 2);
  sqcRZGate(q, 0.8983951313998977, 2);
  sqcRYGate(q, -2.804517650969103, 3);
  sqcRZGate(q, 2.6155149679128016, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.002865291322379, 0);
  sqcRZGate(q, -2.9453510806123546, 0);
  sqcRYGate(q, -1.7454828299216671, 1);
  sqcRZGate(q, 2.9748710779591767, 1);
  sqcRYGate(q, 0.5285028125091072, 2);
  sqcRZGate(q, -1.2955879562028252, 2);
  sqcRYGate(q, -2.321605653031496, 3);
  sqcRZGate(q, 0.4576653844643674, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3171665793446232, 0);
  sqcRZGate(q, 1.1307772927779596, 0);
  sqcRYGate(q, -1.9846092800583952, 1);
  sqcRZGate(q, -0.19575791978403953, 1);
  sqcRYGate(q, -2.195227898533833, 2);
  sqcRZGate(q, -0.04525379037627531, 2);
  sqcRYGate(q, -0.48990364250725277, 3);
  sqcRZGate(q, -0.8478279087831818, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.16100478270478, 0);
  sqcRZGate(q, -1.7667682032629415, 0);
  sqcRYGate(q, -1.9965689145569385, 1);
  sqcRZGate(q, 1.8896418551122056, 1);
  sqcRYGate(q, 0.6411833243033948, 2);
  sqcRZGate(q, 2.429940846208827, 2);
  sqcRYGate(q, -0.4989930479995513, 3);
  sqcRZGate(q, 0.32235936071254656, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2512603668704196, 0);
  sqcRZGate(q, 0.9796983089514298, 0);
  sqcRYGate(q, -1.6816285815037082, 1);
  sqcRZGate(q, 3.1273185441138356, 1);
  sqcRYGate(q, 0.6402014207599551, 2);
  sqcRZGate(q, -1.918558919821069, 2);
  sqcRYGate(q, -1.5133985882323797, 3);
  sqcRZGate(q, -0.5152707399981886, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4859860153497562, 0);
  sqcRZGate(q, -1.518500738047796, 0);
  sqcRYGate(q, 1.1327430694033398, 1);
  sqcRZGate(q, 2.6956010254438594, 1);
  sqcRYGate(q, 2.649215361442303, 2);
  sqcRZGate(q, 1.3078509597853625, 2);
  sqcRYGate(q, 2.1656747731747163, 3);
  sqcRZGate(q, -1.7233959802658898, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3722973860660193, 0);
  sqcRZGate(q, -0.9134845928609076, 0);
  sqcRYGate(q, 2.667031114403649, 1);
  sqcRZGate(q, -1.9930711952887767, 1);
  sqcRYGate(q, 2.5455155191952983, 2);
  sqcRZGate(q, 1.0714718638441563, 2);
  sqcRYGate(q, 2.6810165790897167, 3);
  sqcRZGate(q, -1.948261521268196, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7654582843970696, 0);
  sqcRZGate(q, 2.6052235108597257, 0);
  sqcRYGate(q, -1.3177866790336399, 1);
  sqcRZGate(q, -0.3604361835261774, 1);
  sqcRYGate(q, 0.5213685203112683, 2);
  sqcRZGate(q, -2.845391464393572, 2);
  sqcRYGate(q, 0.09678813797310504, 3);
  sqcRZGate(q, 2.9506717588793503, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3078794328115768, 0);
  sqcRZGate(q, -0.7597471677766642, 0);
  sqcRYGate(q, 1.1554142901861935, 1);
  sqcRZGate(q, 1.213204398517179, 1);
  sqcRYGate(q, -1.4870914841916765, 2);
  sqcRZGate(q, 0.5905747427736054, 2);
  sqcRYGate(q, -2.120854577305398, 3);
  sqcRZGate(q, 1.2622345292323398, 3);

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
