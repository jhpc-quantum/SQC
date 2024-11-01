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

  sqcRYGate(q, -2.6348429844011982, 0);
  sqcRZGate(q, 0.0853247122232188, 0);
  sqcRYGate(q, 2.5428364349863886, 1);
  sqcRZGate(q, -0.19804889253657532, 1);
  sqcRYGate(q, 0.4186067553566284, 2);
  sqcRZGate(q, 1.8486116095545935, 2);
  sqcRYGate(q, 2.7964815433749917, 3);
  sqcRZGate(q, 2.400315630987433, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.3114377850437764, 0);
  sqcRZGate(q, -1.3674363798699922, 0);
  sqcRYGate(q, -1.7685274736663343, 1);
  sqcRZGate(q, 3.051098583460581, 1);
  sqcRYGate(q, -0.2962547545753941, 2);
  sqcRZGate(q, -2.0876889543175077, 2);
  sqcRYGate(q, -1.1812210463288828, 3);
  sqcRZGate(q, -1.957118691790022, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.2246215183760234, 0);
  sqcRZGate(q, -0.39624308847272915, 0);
  sqcRYGate(q, 1.5178395304300043, 1);
  sqcRZGate(q, -0.22370471954728516, 1);
  sqcRYGate(q, 1.369776339578138, 2);
  sqcRZGate(q, 0.7883054695523359, 2);
  sqcRYGate(q, -0.0902152906396596, 3);
  sqcRZGate(q, 2.971143086261794, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9082962533562691, 0);
  sqcRZGate(q, 0.26257936634495055, 0);
  sqcRYGate(q, -0.7365918747618654, 1);
  sqcRZGate(q, -0.6378532598985208, 1);
  sqcRYGate(q, -0.2836963862341928, 2);
  sqcRZGate(q, 0.18900768896343578, 2);
  sqcRYGate(q, 0.2559000339533909, 3);
  sqcRZGate(q, 2.5375309361129608, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.2795410141565329, 0);
  sqcRZGate(q, -3.031839535751557, 0);
  sqcRYGate(q, -2.9877843279482863, 1);
  sqcRZGate(q, 1.9160619306142657, 1);
  sqcRYGate(q, -0.6455047884877924, 2);
  sqcRZGate(q, -0.6189096417121422, 2);
  sqcRYGate(q, 3.0996552938851174, 3);
  sqcRZGate(q, 2.506458027633404, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.7286252429569147, 0);
  sqcRZGate(q, -1.7413815760575126, 0);
  sqcRYGate(q, -0.4960220996516629, 1);
  sqcRZGate(q, 2.306951357569904, 1);
  sqcRYGate(q, 1.2372504577205445, 2);
  sqcRZGate(q, 1.6838377080572675, 2);
  sqcRYGate(q, -2.127279875855768, 3);
  sqcRZGate(q, -1.92457339714717, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.0965321248868731, 0);
  sqcRZGate(q, -1.8482515312398007, 0);
  sqcRYGate(q, 1.3558750085749374, 1);
  sqcRZGate(q, 2.4233613998108963, 1);
  sqcRYGate(q, -0.877196720994792, 2);
  sqcRZGate(q, 0.4516024819179485, 2);
  sqcRYGate(q, -2.0958910007240146, 3);
  sqcRZGate(q, 2.880344762316534, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.5124806186514776, 0);
  sqcRZGate(q, 1.3925519040053695, 0);
  sqcRYGate(q, 0.34568977108937915, 1);
  sqcRZGate(q, 1.6713890752423923, 1);
  sqcRYGate(q, -2.537091017226438, 2);
  sqcRZGate(q, -2.5300687388960497, 2);
  sqcRYGate(q, -0.5912161394377335, 3);
  sqcRZGate(q, -2.286594992891413, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8483145115397157, 0);
  sqcRZGate(q, -0.31230027928418486, 0);
  sqcRYGate(q, -0.8833805288300054, 1);
  sqcRZGate(q, -0.5886574197924471, 1);
  sqcRYGate(q, 0.018520135409789695, 2);
  sqcRZGate(q, 0.856569671562159, 2);
  sqcRYGate(q, 2.983540528406777, 3);
  sqcRZGate(q, -1.505231600230795, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.9370951105547025, 0);
  sqcRZGate(q, -1.886783318772037, 0);
  sqcRYGate(q, -2.9806894662482875, 1);
  sqcRZGate(q, -2.1142556207259524, 1);
  sqcRYGate(q, 1.83169177904362, 2);
  sqcRZGate(q, 2.865848781983227, 2);
  sqcRYGate(q, 0.28940456506427487, 3);
  sqcRZGate(q, -1.82291945726651, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.36836076747135, 0);
  sqcRZGate(q, -1.8470181381026594, 0);
  sqcRYGate(q, 0.05053715372237243, 1);
  sqcRZGate(q, -1.774218901808449, 1);
  sqcRYGate(q, -2.5412157929064674, 2);
  sqcRZGate(q, -0.5672745578010528, 2);
  sqcRYGate(q, -0.9805299432368669, 3);
  sqcRZGate(q, -2.3762607608490223, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9969713755142697, 0);
  sqcRZGate(q, 0.9123589504726727, 0);
  sqcRYGate(q, -2.3339785622579323, 1);
  sqcRZGate(q, 2.883776889430128, 1);
  sqcRYGate(q, -0.23768716174803056, 2);
  sqcRZGate(q, 2.5616372435323624, 2);
  sqcRYGate(q, 1.0896907126018043, 3);
  sqcRZGate(q, 1.2942818949762325, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.7221871256489356, 0);
  sqcRZGate(q, 0.5384031057800751, 0);
  sqcRYGate(q, -1.1996788579694024, 1);
  sqcRZGate(q, 0.5919608637248058, 1);
  sqcRYGate(q, -1.070868624317658, 2);
  sqcRZGate(q, -1.5106323508407742, 2);
  sqcRYGate(q, 2.7080874455205315, 3);
  sqcRZGate(q, 2.660723324750558, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1632997869082156, 0);
  sqcRZGate(q, -1.924011460974894, 0);
  sqcRYGate(q, -1.565615679688561, 1);
  sqcRZGate(q, -0.11185130865793211, 1);
  sqcRYGate(q, 2.364461326604572, 2);
  sqcRZGate(q, 1.1879086215510803, 2);
  sqcRYGate(q, -2.491907444493681, 3);
  sqcRZGate(q, 2.4789903860820277, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.23727092983166376, 0);
  sqcRZGate(q, 0.899830680088689, 0);
  sqcRYGate(q, 0.19865313603339096, 1);
  sqcRZGate(q, 2.713362283133746, 1);
  sqcRYGate(q, 1.5019988702998868, 2);
  sqcRZGate(q, 0.11498890631467962, 2);
  sqcRYGate(q, -0.9733788779136537, 3);
  sqcRZGate(q, -1.0424418356978595, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.07861651701204588, 0);
  sqcRZGate(q, -2.1928013402075397, 0);
  sqcRYGate(q, 0.834647353589193, 1);
  sqcRZGate(q, -0.3077479201624024, 1);
  sqcRYGate(q, 0.6929920952396653, 2);
  sqcRZGate(q, -2.107979300085783, 2);
  sqcRYGate(q, 2.958276142106121, 3);
  sqcRZGate(q, 0.295673808719215, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.0362422654322327, 0);
  sqcRZGate(q, 1.3674011284661747, 0);
  sqcRYGate(q, 1.0844012532018343, 1);
  sqcRZGate(q, -2.2406110768529546, 1);
  sqcRYGate(q, -1.1945373804735864, 2);
  sqcRZGate(q, 0.2018491598585097, 2);
  sqcRYGate(q, -1.4201872822026722, 3);
  sqcRZGate(q, -0.887086840444546, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.4983663993481233, 0);
  sqcRZGate(q, -2.9074879808341465, 0);
  sqcRYGate(q, -0.3785253090925524, 1);
  sqcRZGate(q, 0.9701590509435415, 1);
  sqcRYGate(q, -2.0536050816370652, 2);
  sqcRZGate(q, 0.008088597920187901, 2);
  sqcRYGate(q, 0.6145165695755072, 3);
  sqcRZGate(q, -1.5894813901610476, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1131512642538477, 0);
  sqcRZGate(q, -1.0331051950124814, 0);
  sqcRYGate(q, -1.45186279486632, 1);
  sqcRZGate(q, -0.44100092533999996, 1);
  sqcRYGate(q, 0.08637374717959911, 2);
  sqcRZGate(q, -1.3015246321787923, 2);
  sqcRYGate(q, 0.6174482901936704, 3);
  sqcRZGate(q, -1.3221843413173033, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8373522259460753, 0);
  sqcRZGate(q, -1.0000103769802644, 0);
  sqcRYGate(q, 1.9491199400951746, 1);
  sqcRZGate(q, -0.8369908095308396, 1);
  sqcRYGate(q, -0.4825365745691039, 2);
  sqcRZGate(q, -1.6291158839855542, 2);
  sqcRYGate(q, -0.8071225661882542, 3);
  sqcRZGate(q, -0.057019413722773755, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7934219066714592, 0);
  sqcRZGate(q, -1.8295999853971683, 0);
  sqcRYGate(q, 0.18030526567725236, 1);
  sqcRZGate(q, -0.9732849992718268, 1);
  sqcRYGate(q, -1.1131791911998166, 2);
  sqcRZGate(q, -0.3850696510433123, 2);
  sqcRYGate(q, -1.0973695260924827, 3);
  sqcRZGate(q, -2.6753753489958294, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.8634285339733383, 0);
  sqcRZGate(q, 1.62299367181041, 0);
  sqcRYGate(q, 2.2975880098276367, 1);
  sqcRZGate(q, 1.1874971914191912, 1);
  sqcRYGate(q, 3.0720731508713177, 2);
  sqcRZGate(q, 0.5543465648677008, 2);
  sqcRYGate(q, -0.6177866121845605, 3);
  sqcRZGate(q, 0.14597146818188736, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.40154609689587417, 0);
  sqcRZGate(q, -0.48297845517136617, 0);
  sqcRYGate(q, 0.3518726007647905, 1);
  sqcRZGate(q, 3.0980598616551744, 1);
  sqcRYGate(q, -0.9404548321053774, 2);
  sqcRZGate(q, 3.1234461776941043, 2);
  sqcRYGate(q, -0.05020441984965274, 3);
  sqcRZGate(q, 2.847551258572913, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.7207287271496114, 0);
  sqcRZGate(q, 2.1107022132360305, 0);
  sqcRYGate(q, -1.6916013195812718, 1);
  sqcRZGate(q, 0.6642420269391794, 1);
  sqcRYGate(q, -1.6076752741271427, 2);
  sqcRZGate(q, 3.112965584773356, 2);
  sqcRYGate(q, -1.7957825463941186, 3);
  sqcRZGate(q, 1.5594347894128788, 3);

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
