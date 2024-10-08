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

  sqcRYGate(q, 3.101566760288352, 0);
  sqcRYGate(q, 1.3701135721857227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.177511404197931, 0);
  sqcRYGate(q, 2.385586539440979, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0923499350061492, 2);
  sqcRYGate(q, -2.34901821589531, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9954697475383174, 2);
  sqcRYGate(q, -0.4941620389823763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.013424279733441095, 1);
  sqcRYGate(q, 0.007039447542572574, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.210533348699836, 1);
  sqcRYGate(q, 1.5049695395263247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6852251245045569, 0);
  sqcRYGate(q, -0.39118043403987424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.687552747051373, 0);
  sqcRYGate(q, 0.09906797434975805, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2750053754424577, 2);
  sqcRYGate(q, -0.6757948965916247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.18621608419595456, 2);
  sqcRYGate(q, 1.683302589213728, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.993287127903453, 1);
  sqcRYGate(q, 2.115415900563264, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4034503010772923, 1);
  sqcRYGate(q, -0.1405126587608224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8064073538726566, 0);
  sqcRYGate(q, -0.012965718437869336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8500565138904062, 0);
  sqcRYGate(q, 1.2756176060115907, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8831809649133333, 2);
  sqcRYGate(q, -2.6257033627690225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8145961670977564, 2);
  sqcRYGate(q, 2.7340472736411017, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6424670276570239, 1);
  sqcRYGate(q, 2.7768360371837253, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2714741534419736, 1);
  sqcRYGate(q, 2.9220012601655254, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.679303585912937, 0);
  sqcRYGate(q, 2.2113860835332186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.636001997262639, 0);
  sqcRYGate(q, 3.040905153442953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0422481905968697, 2);
  sqcRYGate(q, 1.3052750032261518, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5339078134453487, 2);
  sqcRYGate(q, 0.9069101250083529, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.841739738804064, 1);
  sqcRYGate(q, 2.522379225383259, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6086508266208037, 1);
  sqcRYGate(q, -0.6929145743659586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6715570395379893, 0);
  sqcRYGate(q, -2.4997521488197303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.98979022775976, 0);
  sqcRYGate(q, 2.559209190497841, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7273784277239388, 2);
  sqcRYGate(q, 0.7634300796637082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5582941801682713, 2);
  sqcRYGate(q, -2.055720436370554, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.27347006758513626, 1);
  sqcRYGate(q, 1.7574073910998804, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6218184664839561, 1);
  sqcRYGate(q, 1.0381434920489685, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0283497670561603, 0);
  sqcRYGate(q, 2.237730382676084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8580740980860879, 0);
  sqcRYGate(q, 0.15178584701324557, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1192271570732891, 2);
  sqcRYGate(q, 0.3707907142275282, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.45928819305079743, 2);
  sqcRYGate(q, 2.2187764064339603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7848643823494568, 1);
  sqcRYGate(q, -2.2925632584768305, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.033322688406243, 1);
  sqcRYGate(q, -0.5217651579785372, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3781438948031512, 0);
  sqcRYGate(q, -2.3073396671007256, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.183162751348976, 0);
  sqcRYGate(q, -3.1378277776722787, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0255071341914155, 2);
  sqcRYGate(q, -1.9621354907443171, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.055843798423567, 2);
  sqcRYGate(q, -3.027655931168545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.15185402999523623, 1);
  sqcRYGate(q, 1.9945892205812508, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.319648367344433, 1);
  sqcRYGate(q, 3.1306157556588174, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1496633181316664, 0);
  sqcRYGate(q, 2.747770529808036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7064260892861238, 0);
  sqcRYGate(q, 2.5172644672301394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5574537588097597, 2);
  sqcRYGate(q, 2.6197117529197254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0950497413872307, 2);
  sqcRYGate(q, -2.616769442239301, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0269156689477064, 1);
  sqcRYGate(q, 2.5595079607276348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.671694155234544, 1);
  sqcRYGate(q, -1.3615112892720798, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3696774367804414, 0);
  sqcRYGate(q, -0.5613216519236078, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.451810089300538, 0);
  sqcRYGate(q, -2.908703920762874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7860571358280861, 2);
  sqcRYGate(q, 0.5937533098400625, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6399996734176646, 2);
  sqcRYGate(q, 0.48007335450515587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.588025746071954, 1);
  sqcRYGate(q, -2.8356240968819653, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.48249595064161965, 1);
  sqcRYGate(q, 0.7587879184671928, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3129225438693872, 0);
  sqcRYGate(q, 2.1270760598576097, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.841271399253504, 0);
  sqcRYGate(q, 1.190251475488096, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6682466227484714, 2);
  sqcRYGate(q, -0.33726352908025614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9562862144390022, 2);
  sqcRYGate(q, 2.1512283664973193, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4948848710427152, 1);
  sqcRYGate(q, -0.02020545613292128, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9702384799207215, 1);
  sqcRYGate(q, -1.6051097337480942, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.005680266184379, 0);
  sqcRYGate(q, -2.056145780405534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.650128194007074, 0);
  sqcRYGate(q, -3.024171023179286, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9667174253390859, 2);
  sqcRYGate(q, 1.3077008953332627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3116238911440918, 2);
  sqcRYGate(q, 0.4427784694493342, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06739293190392193, 1);
  sqcRYGate(q, 2.2150235876566136, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.523816979820188, 1);
  sqcRYGate(q, -1.8489101830550267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.071484605736067, 0);
  sqcRYGate(q, -0.36732495177677477, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.106867798065414, 0);
  sqcRYGate(q, 2.7401166755640674, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.28572341720907524, 2);
  sqcRYGate(q, -2.7342198365943706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08589569028088473, 2);
  sqcRYGate(q, 0.3695559558950432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3987417448989286, 1);
  sqcRYGate(q, -0.14640417808745188, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.033536822215237, 1);
  sqcRYGate(q, -1.693103197033782, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.156546783352634, 0);
  sqcRYGate(q, 1.5706473114556827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5631458279748298, 0);
  sqcRYGate(q, 2.622956400762822, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0693651874297596, 2);
  sqcRYGate(q, 0.8381628807904313, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2142888492415722, 2);
  sqcRYGate(q, 2.3822511165021405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6993602190633745, 1);
  sqcRYGate(q, 2.826726419682145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5570390151959033, 1);
  sqcRYGate(q, 2.1719426579882626, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5036403546324033, 0);
  sqcRYGate(q, -0.1926880112240857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.729464097163099, 0);
  sqcRYGate(q, -0.21391499051700436, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3518319995783856, 2);
  sqcRYGate(q, 0.25811053575364173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0636077547014031, 2);
  sqcRYGate(q, 2.330249692805784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8577582411718714, 1);
  sqcRYGate(q, -2.1330267087140955, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7830590121465688, 1);
  sqcRYGate(q, 1.769778178257508, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4903539649848883, 0);
  sqcRYGate(q, 0.28410571369583515, 1);
  sqcRYGate(q, 1.9481485917103623, 2);
  sqcRYGate(q, 0.9280689211190216, 3);

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
