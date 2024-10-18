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

  sqcRYGate(q, 2.603833782725286, 0);
  sqcRZGate(q, -2.0183870932669006, 0);
  sqcRYGate(q, -1.2189582460542039, 1);
  sqcRZGate(q, -3.0757714876048223, 1);
  sqcRYGate(q, -0.3261167893924927, 2);
  sqcRZGate(q, 1.5894224988135086, 2);
  sqcRYGate(q, 2.377467984012511, 3);
  sqcRZGate(q, -1.0064295283892843, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.218692997702491, 0);
  sqcRZGate(q, 1.7739559604275037, 0);
  sqcRYGate(q, -2.9610154759005027, 1);
  sqcRZGate(q, -2.3665532248216543, 1);
  sqcRYGate(q, -2.7196864470841997, 2);
  sqcRZGate(q, -1.1175092297063616, 2);
  sqcRYGate(q, 0.4723154141511134, 3);
  sqcRZGate(q, -2.0017626330296636, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5638453979931612, 0);
  sqcRZGate(q, 0.595592967870291, 0);
  sqcRYGate(q, 0.8240840723342003, 1);
  sqcRZGate(q, 1.6390261413791214, 1);
  sqcRYGate(q, 1.152838285909386, 2);
  sqcRZGate(q, 3.1377472994081996, 2);
  sqcRYGate(q, 2.2673475284126106, 3);
  sqcRZGate(q, -1.3088115517277041, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.431372907002952, 0);
  sqcRZGate(q, -1.956371272169697, 0);
  sqcRYGate(q, -1.5256657271523646, 1);
  sqcRZGate(q, -0.8174101595631069, 1);
  sqcRYGate(q, -0.24121401865872147, 2);
  sqcRZGate(q, 2.19091516292414, 2);
  sqcRYGate(q, 2.533271283881753, 3);
  sqcRZGate(q, 0.8090635515185128, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.573138187100893, 0);
  sqcRZGate(q, -1.6433625247554104, 0);
  sqcRYGate(q, -1.7439197070275902, 1);
  sqcRZGate(q, 2.213529666290988, 1);
  sqcRYGate(q, 0.9965209078251419, 2);
  sqcRZGate(q, 2.730364571055089, 2);
  sqcRYGate(q, -1.1214548932006085, 3);
  sqcRZGate(q, -1.7566715722664983, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7032884970723603, 0);
  sqcRZGate(q, -3.008593405886892, 0);
  sqcRYGate(q, 1.8024420737444407, 1);
  sqcRZGate(q, -1.9818835072891734, 1);
  sqcRYGate(q, -0.9010029637828935, 2);
  sqcRZGate(q, 1.4694881503998551, 2);
  sqcRYGate(q, -1.4318552821554589, 3);
  sqcRZGate(q, -1.5995950533922296, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.020918311428904, 0);
  sqcRZGate(q, 0.7063941166279077, 0);
  sqcRYGate(q, 0.8717030314034675, 1);
  sqcRZGate(q, -2.391593396628015, 1);
  sqcRYGate(q, 2.736535651450467, 2);
  sqcRZGate(q, 0.6459999186145162, 2);
  sqcRYGate(q, 0.8185614653949448, 3);
  sqcRZGate(q, -2.5434664202713444, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.051635051816417, 0);
  sqcRZGate(q, 1.9654280642932056, 0);
  sqcRYGate(q, -2.1285764100395235, 1);
  sqcRZGate(q, -2.4865352465138932, 1);
  sqcRYGate(q, 2.5321590171758785, 2);
  sqcRZGate(q, -2.1153861814735526, 2);
  sqcRYGate(q, -1.0162146315091052, 3);
  sqcRZGate(q, 1.3362315373828704, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8275123986069373, 0);
  sqcRZGate(q, 2.9198514057048075, 0);
  sqcRYGate(q, 1.4280356732437784, 1);
  sqcRZGate(q, 2.576678995067901, 1);
  sqcRYGate(q, 1.2107966187988852, 2);
  sqcRZGate(q, -2.7331845822402565, 2);
  sqcRYGate(q, -2.9741643265383684, 3);
  sqcRZGate(q, 1.0561186238623046, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.530736341283532, 0);
  sqcRZGate(q, -0.8903427427280439, 0);
  sqcRYGate(q, 2.3297077402143618, 1);
  sqcRZGate(q, 0.8114534238160752, 1);
  sqcRYGate(q, 2.5915828831173395, 2);
  sqcRZGate(q, 2.7965559161029088, 2);
  sqcRYGate(q, -1.673265498592649, 3);
  sqcRZGate(q, 2.6334492382541486, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4754631089885764, 0);
  sqcRZGate(q, 0.10635621123963722, 0);
  sqcRYGate(q, 2.1151375999696675, 1);
  sqcRZGate(q, 2.4954003152978466, 1);
  sqcRYGate(q, -1.7456533636037943, 2);
  sqcRZGate(q, 0.9377429394132513, 2);
  sqcRYGate(q, -1.611598847108243, 3);
  sqcRZGate(q, 2.3898054746990733, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0186513578509873, 0);
  sqcRZGate(q, 2.834902242126552, 0);
  sqcRYGate(q, -0.7160605411961057, 1);
  sqcRZGate(q, 0.6093836447461415, 1);
  sqcRYGate(q, 1.2077309287756317, 2);
  sqcRZGate(q, 2.315348523820822, 2);
  sqcRYGate(q, -2.581629375700466, 3);
  sqcRZGate(q, 2.5304830688327047, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.516591604047318, 0);
  sqcRZGate(q, 1.2401117904885837, 0);
  sqcRYGate(q, -0.8986861242945475, 1);
  sqcRZGate(q, 2.7814110053041183, 1);
  sqcRYGate(q, -0.046202234615708215, 2);
  sqcRZGate(q, 2.7248498784706214, 2);
  sqcRYGate(q, 2.332439005727799, 3);
  sqcRZGate(q, -0.9216010397304553, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.80874761989626, 0);
  sqcRZGate(q, -1.7986746431301919, 0);
  sqcRYGate(q, -0.6176214195439002, 1);
  sqcRZGate(q, 1.0986818613117295, 1);
  sqcRYGate(q, 1.7494459004825862, 2);
  sqcRZGate(q, -1.2914757817501483, 2);
  sqcRYGate(q, -0.9817202687293278, 3);
  sqcRZGate(q, -2.475399488102823, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.8064492675079977, 0);
  sqcRZGate(q, 2.4180377397222768, 0);
  sqcRYGate(q, 0.07297366634296218, 1);
  sqcRZGate(q, -1.4609655163095479, 1);
  sqcRYGate(q, -2.5141319747499575, 2);
  sqcRZGate(q, -0.7898662255116582, 2);
  sqcRYGate(q, -0.0968532684990171, 3);
  sqcRZGate(q, -1.6587138127652878, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3127865345743759, 0);
  sqcRZGate(q, -0.6547623844779165, 0);
  sqcRYGate(q, 1.251284012266932, 1);
  sqcRZGate(q, 0.017121195378030585, 1);
  sqcRYGate(q, -1.1902056080188574, 2);
  sqcRZGate(q, -0.6610842757805306, 2);
  sqcRYGate(q, -1.6552041629672485, 3);
  sqcRZGate(q, 2.6978174342914807, 3);

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
