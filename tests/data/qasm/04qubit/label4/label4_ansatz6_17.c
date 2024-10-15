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

  sqcRYGate(q, -3.1107299528503263, 0);
  sqcRYGate(q, -0.8980634758647658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6516815738613424, 0);
  sqcRYGate(q, -2.9820161957670295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.323713987200481, 1);
  sqcRYGate(q, -1.3959631159484396, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9586905524578582, 1);
  sqcRYGate(q, 2.157213275128611, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.05153778202672498, 2);
  sqcRYGate(q, 3.12847362715472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.746257448933291, 2);
  sqcRYGate(q, -2.7703421280596747, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.009157694872813834, 0);
  sqcRYGate(q, -2.959383656171768, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6817905757355605, 0);
  sqcRYGate(q, -2.816593098087242, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.382036368457532, 1);
  sqcRYGate(q, 2.1527490275901515, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.872902500715171, 1);
  sqcRYGate(q, 0.19134238846317347, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0858787770065437, 2);
  sqcRYGate(q, -0.9921953881001441, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8595802940685164, 2);
  sqcRYGate(q, 2.2141616030237565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6582103584439745, 0);
  sqcRYGate(q, 0.6442633072778332, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1550992368275188, 0);
  sqcRYGate(q, 2.840945588000781, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7553789789733641, 1);
  sqcRYGate(q, 0.5353580041310054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10809877302919446, 1);
  sqcRYGate(q, -2.4048010208191783, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.691907718459775, 2);
  sqcRYGate(q, -0.835990342347041, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8229103302525509, 2);
  sqcRYGate(q, 0.21902703585371008, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.36234696615438367, 0);
  sqcRYGate(q, 1.0009790674614376, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0719374483028545, 0);
  sqcRYGate(q, 1.9033218850007083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0498681419699167, 1);
  sqcRYGate(q, 0.5645562106631914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2804893436263243, 1);
  sqcRYGate(q, 2.29475683847891, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.432726288715665, 2);
  sqcRYGate(q, -0.1140281472200888, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4155857567320222, 2);
  sqcRYGate(q, -1.6596459860243984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6639931604932041, 0);
  sqcRYGate(q, -2.1596602660978346, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6179611811331203, 0);
  sqcRYGate(q, 2.196860745835697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4120819392042767, 1);
  sqcRYGate(q, 2.9875263462830244, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6059635504544345, 1);
  sqcRYGate(q, -3.0685731634620645, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8646654998985435, 2);
  sqcRYGate(q, -0.22547796304124437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3014073813152267, 2);
  sqcRYGate(q, 2.087920961480055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.49949352450583184, 0);
  sqcRYGate(q, 2.9153389751330496, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1081154572144096, 0);
  sqcRYGate(q, 0.25898570089534445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4003563865262008, 1);
  sqcRYGate(q, -0.5695419194896975, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2799096070853873, 1);
  sqcRYGate(q, -1.6123579662819187, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6290791690790645, 2);
  sqcRYGate(q, -1.3200884412704967, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9200352599842164, 2);
  sqcRYGate(q, -1.7153781618924506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.480578202612699, 0);
  sqcRYGate(q, 0.429112283897721, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8936543770245418, 0);
  sqcRYGate(q, 2.319340695397043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.827709587732652, 1);
  sqcRYGate(q, -2.5085501568475843, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.14697550621550534, 1);
  sqcRYGate(q, -2.7480776983795967, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.19601801635224003, 2);
  sqcRYGate(q, -0.19483862465868335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3225407841386447, 2);
  sqcRYGate(q, 1.446001437127598, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6010298849436415, 0);
  sqcRYGate(q, 0.8604871247905956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.897272245934717, 0);
  sqcRYGate(q, -0.8961122169897493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9214935585887782, 1);
  sqcRYGate(q, -1.061279432661086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0994027237341557, 1);
  sqcRYGate(q, -0.5469860690624513, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1433244318053113, 2);
  sqcRYGate(q, -1.357265420230539, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3657258883754091, 2);
  sqcRYGate(q, 0.34585869484915494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2886988314911605, 0);
  sqcRYGate(q, -2.287098209830301, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7518195263205466, 0);
  sqcRYGate(q, 2.7160937281379964, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8677782562130498, 1);
  sqcRYGate(q, -0.618231196217466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4624626195769044, 1);
  sqcRYGate(q, -1.0594900733653851, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.15206559765882766, 2);
  sqcRYGate(q, 1.238727832450418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9973819013135037, 2);
  sqcRYGate(q, -1.699422202888529, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3822936246685962, 0);
  sqcRYGate(q, 1.4432127066806615, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.182398373630349, 0);
  sqcRYGate(q, 0.8113574675901533, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8029651194945329, 1);
  sqcRYGate(q, 2.0285027471592283, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0952257217021084, 1);
  sqcRYGate(q, -0.1561638429242699, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8386986009827524, 2);
  sqcRYGate(q, 2.0400331975313195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4327143506966538, 2);
  sqcRYGate(q, 2.634797732713941, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.43226451811470745, 0);
  sqcRYGate(q, -0.5703863437676793, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.057182424095642, 0);
  sqcRYGate(q, 1.7586454148157777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.91826863932391, 1);
  sqcRYGate(q, -2.111303328105267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.21277622690206321, 1);
  sqcRYGate(q, 1.2761355683792308, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1852862340598742, 2);
  sqcRYGate(q, 0.9242005903460369, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.941249594574141, 2);
  sqcRYGate(q, -2.534475874348356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.775774479008728, 0);
  sqcRYGate(q, 1.971619989272142, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6259617975823801, 0);
  sqcRYGate(q, -0.41571979330798126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5901897457384687, 1);
  sqcRYGate(q, 1.2237155198383762, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.940099122596719, 1);
  sqcRYGate(q, 0.45415532177912166, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4975814311067195, 2);
  sqcRYGate(q, 1.6135246832805406, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2780990550786056, 2);
  sqcRYGate(q, 2.1586856758773267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8667692995701413, 0);
  sqcRYGate(q, -1.7419310024435655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3988225751024057, 0);
  sqcRYGate(q, -0.9132842190991762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.519512291536841, 1);
  sqcRYGate(q, -0.07945130180728127, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8598220333192617, 1);
  sqcRYGate(q, 2.371205499378482, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8868673737556155, 2);
  sqcRYGate(q, -0.24828590792508284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4863057811357985, 2);
  sqcRYGate(q, 2.945390303149833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2376348198945974, 0);
  sqcRYGate(q, -0.6531659974700093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.16092553794407397, 0);
  sqcRYGate(q, -2.958301018173706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5406717251736923, 1);
  sqcRYGate(q, 1.098082265285031, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1815798429867688, 1);
  sqcRYGate(q, 1.649955088875494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6741412856710118, 2);
  sqcRYGate(q, -0.1449242505187931, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1964366880950903, 2);
  sqcRYGate(q, 1.6086070082589627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.075985781675321, 0);
  sqcRYGate(q, 1.9019928389605232, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8727470891969542, 0);
  sqcRYGate(q, 1.5622025375364634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2339900781309368, 1);
  sqcRYGate(q, -2.449767328973118, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2012524817832908, 1);
  sqcRYGate(q, 0.32638147365595405, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.356574375408222, 2);
  sqcRYGate(q, 1.4877690640571022, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.022203355703476087, 2);
  sqcRYGate(q, 1.3016120372100337, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9030370904472536, 0);
  sqcRYGate(q, -1.2260701327104537, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.557858964529067, 0);
  sqcRYGate(q, -0.12466599187861416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.848558645733827, 1);
  sqcRYGate(q, -2.690626213807902, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.600237845434581, 1);
  sqcRYGate(q, -0.6543202198295743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9791025512488314, 2);
  sqcRYGate(q, 0.5486997370931084, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4993559650723821, 2);
  sqcRYGate(q, -0.8869375091078022, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1788020795664407, 0);
  sqcRYGate(q, 1.4443541796200399, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.677992714073157, 0);
  sqcRYGate(q, -0.9381303211516876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7193592616841659, 1);
  sqcRYGate(q, 0.13767473935616348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1869761137169489, 1);
  sqcRYGate(q, -0.8593918810690713, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9145594057035781, 2);
  sqcRYGate(q, -1.8546313451040335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2889358617290432, 2);
  sqcRYGate(q, -1.5619186044418747, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.44099733475967184, 0);
  sqcRYGate(q, 2.1778547970031967, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9134951748961786, 0);
  sqcRYGate(q, 1.744419574527897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.137791996778489, 1);
  sqcRYGate(q, 3.057706827378327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.633189232015027, 1);
  sqcRYGate(q, -1.353348693957233, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4347702598143823, 2);
  sqcRYGate(q, -2.5552658931811894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5062320096283809, 2);
  sqcRYGate(q, 1.4015169209769631, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7440713334958788, 0);
  sqcRYGate(q, -1.7537424930104688, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23451878523994196, 0);
  sqcRYGate(q, 3.092665740632485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.36324160132229155, 1);
  sqcRYGate(q, 2.6602722759981634, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.616980168497425, 1);
  sqcRYGate(q, -2.4217096645279956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.42569144659799646, 2);
  sqcRYGate(q, 1.0579980092249457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.046559507516214, 2);
  sqcRYGate(q, 0.195947277762615, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.43006183992603475, 0);
  sqcRYGate(q, -0.3630419421566309, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5558090198255132, 0);
  sqcRYGate(q, -2.451621154106816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2144340038146586, 1);
  sqcRYGate(q, 3.048662656020149, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9122018197932307, 1);
  sqcRYGate(q, -2.661007347312076, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5812705140082057, 2);
  sqcRYGate(q, -2.8884200335611814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9452433883512956, 2);
  sqcRYGate(q, -2.410189114500143, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08382007321038021, 0);
  sqcRYGate(q, -0.8317961868377415, 1);
  sqcRYGate(q, 3.0377936335313365, 2);
  sqcRYGate(q, -1.3534174403176213, 3);

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
