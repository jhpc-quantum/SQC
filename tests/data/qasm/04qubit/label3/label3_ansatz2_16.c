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

  sqcRYGate(q, 1.0995165142410572, 0);
  sqcRZGate(q, 2.513158647328443, 0);
  sqcRYGate(q, 2.3472616257310377, 1);
  sqcRZGate(q, 1.2857511824157402, 1);
  sqcRYGate(q, -2.076916869589062, 2);
  sqcRZGate(q, -1.3520138807252737, 2);
  sqcRYGate(q, -0.896378744088763, 3);
  sqcRZGate(q, -2.3620001503029227, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.9161368197790251, 0);
  sqcRZGate(q, -1.4145012535435986, 0);
  sqcRYGate(q, -2.3620316482200687, 1);
  sqcRZGate(q, -0.5857371558194141, 1);
  sqcRYGate(q, -1.011496725074573, 2);
  sqcRZGate(q, -3.1286012144703417, 2);
  sqcRYGate(q, 1.5148971846402064, 3);
  sqcRZGate(q, 0.46237575941323955, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.3704450394548785, 0);
  sqcRZGate(q, -1.1241685062353037, 0);
  sqcRYGate(q, -1.1603698558296116, 1);
  sqcRZGate(q, 0.7456016393454563, 1);
  sqcRYGate(q, 1.662584893595172, 2);
  sqcRZGate(q, -0.966287343065634, 2);
  sqcRYGate(q, -0.767497605406219, 3);
  sqcRZGate(q, 2.2031658116877084, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.533182891596716, 0);
  sqcRZGate(q, -1.7317648013231006, 0);
  sqcRYGate(q, -1.904809122946984, 1);
  sqcRZGate(q, 1.838422863918986, 1);
  sqcRYGate(q, 1.4019277307731717, 2);
  sqcRZGate(q, -1.464809658439273, 2);
  sqcRYGate(q, 1.370161415437397, 3);
  sqcRZGate(q, -0.35167608714374327, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.39578205647764, 0);
  sqcRZGate(q, -1.2666873965224354, 0);
  sqcRYGate(q, 2.8952449633530764, 1);
  sqcRZGate(q, 1.1730244596242085, 1);
  sqcRYGate(q, -0.5750127507333223, 2);
  sqcRZGate(q, 1.9758134766417488, 2);
  sqcRYGate(q, 0.5568670067052901, 3);
  sqcRZGate(q, -2.4437632397055338, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.462325491720845, 0);
  sqcRZGate(q, 2.529873330208199, 0);
  sqcRYGate(q, -1.188541408841254, 1);
  sqcRZGate(q, -1.2565283491959267, 1);
  sqcRYGate(q, -1.113574079822106, 2);
  sqcRZGate(q, 2.846170650880462, 2);
  sqcRYGate(q, -1.5179371112897035, 3);
  sqcRZGate(q, -0.7149553687113026, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.8648899639580203, 0);
  sqcRZGate(q, 1.613088694805679, 0);
  sqcRYGate(q, 0.4292256873509566, 1);
  sqcRZGate(q, -0.7589790579046415, 1);
  sqcRYGate(q, -2.271771768581985, 2);
  sqcRZGate(q, -2.733982793665091, 2);
  sqcRYGate(q, -2.241550148882832, 3);
  sqcRZGate(q, 1.5447295614617236, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.5358495552280171, 0);
  sqcRZGate(q, 3.1315739980296855, 0);
  sqcRYGate(q, 1.658197213169716, 1);
  sqcRZGate(q, -2.1415434594455984, 1);
  sqcRYGate(q, 2.7126401368041053, 2);
  sqcRZGate(q, -0.9116807980948537, 2);
  sqcRYGate(q, 0.894987716845182, 3);
  sqcRZGate(q, -0.5234858251008054, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2273622722482145, 0);
  sqcRZGate(q, -2.3413139575688815, 0);
  sqcRYGate(q, 2.2427395784786004, 1);
  sqcRZGate(q, 1.3822360929427955, 1);
  sqcRYGate(q, 0.030842739783885516, 2);
  sqcRZGate(q, -2.3146317146615494, 2);
  sqcRYGate(q, -2.0977785682322185, 3);
  sqcRZGate(q, 0.9728861721907744, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.53738611308976, 0);
  sqcRZGate(q, -0.6521369191072495, 0);
  sqcRYGate(q, 0.98822975577135, 1);
  sqcRZGate(q, -0.7489597114603681, 1);
  sqcRYGate(q, 3.0651471740577962, 2);
  sqcRZGate(q, -0.7684367422298068, 2);
  sqcRYGate(q, 1.377659913197522, 3);
  sqcRZGate(q, 1.110748656735454, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.0316282964923706, 0);
  sqcRZGate(q, 1.8143397886074333, 0);
  sqcRYGate(q, -3.0482650875410724, 1);
  sqcRZGate(q, 0.64378150294394, 1);
  sqcRYGate(q, -0.6423293465671067, 2);
  sqcRZGate(q, 0.14395437779353948, 2);
  sqcRYGate(q, 2.7759870064539576, 3);
  sqcRZGate(q, 1.791270541612434, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.0137558854624955, 0);
  sqcRZGate(q, -1.1414667158444711, 0);
  sqcRYGate(q, 1.6826138419393457, 1);
  sqcRZGate(q, 2.465876322426433, 1);
  sqcRYGate(q, 2.4640699909598522, 2);
  sqcRZGate(q, 0.8397727717606693, 2);
  sqcRYGate(q, 1.5317327144510928, 3);
  sqcRZGate(q, 2.03528594572463, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.9230450103177117, 0);
  sqcRZGate(q, 0.803985292906643, 0);
  sqcRYGate(q, 0.659749283809002, 1);
  sqcRZGate(q, -1.2904255443593282, 1);
  sqcRYGate(q, -0.1040341689030919, 2);
  sqcRZGate(q, 0.8155904125365663, 2);
  sqcRYGate(q, -0.9240607588379026, 3);
  sqcRZGate(q, 1.5957703599967277, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.44252855993623, 0);
  sqcRZGate(q, -2.474619243191014, 0);
  sqcRYGate(q, -2.362336412682836, 1);
  sqcRZGate(q, 2.2676619640676563, 1);
  sqcRYGate(q, 1.4152962077520126, 2);
  sqcRZGate(q, 2.8952821188687157, 2);
  sqcRYGate(q, -1.62635467975836, 3);
  sqcRZGate(q, 2.852703227428912, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9516849024785276, 0);
  sqcRZGate(q, -2.6430517468708175, 0);
  sqcRYGate(q, -1.9241755161270848, 1);
  sqcRZGate(q, 0.6198277269559794, 1);
  sqcRYGate(q, -2.635334187606055, 2);
  sqcRZGate(q, -0.3463990195656503, 2);
  sqcRYGate(q, -1.205163655096769, 3);
  sqcRZGate(q, 2.8318581273756314, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.8163377651660593, 0);
  sqcRZGate(q, -0.5512974371552958, 0);
  sqcRYGate(q, 2.6429904717067827, 1);
  sqcRZGate(q, 0.08941662148288997, 1);
  sqcRYGate(q, -1.8296574698925054, 2);
  sqcRZGate(q, -2.3566547857333444, 2);
  sqcRYGate(q, 1.7655430047235048, 3);
  sqcRZGate(q, 0.5712078972115839, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.1446138424239534, 0);
  sqcRZGate(q, -3.105675866809311, 0);
  sqcRYGate(q, 2.2547908908199394, 1);
  sqcRZGate(q, -1.6669410667170161, 1);
  sqcRYGate(q, 1.3517231867592345, 2);
  sqcRZGate(q, 1.230112226590876, 2);
  sqcRYGate(q, 1.4949110199080247, 3);
  sqcRZGate(q, 2.8548670393190796, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.2999397957860243, 0);
  sqcRZGate(q, 0.08879959948933733, 0);
  sqcRYGate(q, 0.7913795243741744, 1);
  sqcRZGate(q, 1.560629327174274, 1);
  sqcRYGate(q, -1.4438239377233781, 2);
  sqcRZGate(q, 1.5459140232259305, 2);
  sqcRYGate(q, -1.8408827355114639, 3);
  sqcRZGate(q, -1.039215568690003, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.28599010328368024, 0);
  sqcRZGate(q, 0.7965316099923757, 0);
  sqcRYGate(q, -1.0967934047841335, 1);
  sqcRZGate(q, -0.8991420691617973, 1);
  sqcRYGate(q, 1.9140543204797484, 2);
  sqcRZGate(q, -2.4571229145339504, 2);
  sqcRYGate(q, 1.3751877983683087, 3);
  sqcRZGate(q, 1.3824561396905928, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.139581482306849, 0);
  sqcRZGate(q, 1.1796877387269333, 0);
  sqcRYGate(q, 2.7978668926021917, 1);
  sqcRZGate(q, 0.943625887239766, 1);
  sqcRYGate(q, 0.8227900854942457, 2);
  sqcRZGate(q, -0.19194475818456258, 2);
  sqcRYGate(q, 2.95038169300032, 3);
  sqcRZGate(q, -1.3912547049119142, 3);

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
