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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.3800708756236326, 0);
  sqcRZGate(q, -3.0790208897704443, 0);
  sqcRYGate(q, 1.9374046598537487, 1);
  sqcRZGate(q, -1.6907672265906895, 1);
  sqcRYGate(q, 2.1950184268844213, 2);
  sqcRZGate(q, -0.8909650697168652, 2);
  sqcRYGate(q, 0.8306872045001777, 3);
  sqcRZGate(q, 1.2639077032551647, 3);
  sqcRYGate(q, -2.1453123505469973, 4);
  sqcRZGate(q, 2.098484171486361, 4);
  sqcRYGate(q, 1.6275881390802365, 5);
  sqcRZGate(q, 1.6709061265612655, 5);
  sqcRYGate(q, -3.0193184108943347, 6);
  sqcRZGate(q, 1.8206168373186908, 6);
  sqcRYGate(q, 1.7311729685862713, 7);
  sqcRZGate(q, 1.1069279003603532, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.1002671877954606, 0);
  sqcRZGate(q, -0.037879568948377386, 0);
  sqcRYGate(q, -2.1688885049268896, 1);
  sqcRZGate(q, 0.3703298758914171, 1);
  sqcRYGate(q, 1.375154010856269, 2);
  sqcRZGate(q, -0.8142109305740064, 2);
  sqcRYGate(q, -2.4728298589088165, 3);
  sqcRZGate(q, 2.4030717967849253, 3);
  sqcRYGate(q, -2.210757587768292, 4);
  sqcRZGate(q, 1.579861469123667, 4);
  sqcRYGate(q, -1.3353074983905917, 5);
  sqcRZGate(q, -0.3609298969551821, 5);
  sqcRYGate(q, 1.8744234414308263, 6);
  sqcRZGate(q, 0.7110997226602852, 6);
  sqcRYGate(q, -2.8314659613243864, 7);
  sqcRZGate(q, 0.8999181204540746, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.46266651407612, 0);
  sqcRZGate(q, -1.114922030661719, 0);
  sqcRYGate(q, -2.1573028583003477, 1);
  sqcRZGate(q, -2.8990797371967068, 1);
  sqcRYGate(q, -2.363709454555794, 2);
  sqcRZGate(q, 1.103958405792012, 2);
  sqcRYGate(q, 1.0133272245685516, 3);
  sqcRZGate(q, -0.19184009555323822, 3);
  sqcRYGate(q, 0.8341235295664263, 4);
  sqcRZGate(q, -1.925524352771218, 4);
  sqcRYGate(q, 1.8321824646862055, 5);
  sqcRZGate(q, 0.40582095389168715, 5);
  sqcRYGate(q, 0.1428138087327153, 6);
  sqcRZGate(q, -2.418687307898183, 6);
  sqcRYGate(q, -0.31601863111979706, 7);
  sqcRZGate(q, -1.8415443785405006, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.4802140749252232, 0);
  sqcRZGate(q, 1.8234513207650425, 0);
  sqcRYGate(q, 1.4844927965802448, 1);
  sqcRZGate(q, 2.4253379233766728, 1);
  sqcRYGate(q, -1.401359353596085, 2);
  sqcRZGate(q, -0.8195311469485222, 2);
  sqcRYGate(q, -3.0792877541304, 3);
  sqcRZGate(q, -0.3681018279138, 3);
  sqcRYGate(q, 1.2603520024660448, 4);
  sqcRZGate(q, -0.08822414201770415, 4);
  sqcRYGate(q, 1.3986416620108575, 5);
  sqcRZGate(q, -2.0170503998192677, 5);
  sqcRYGate(q, 1.3298073063202285, 6);
  sqcRZGate(q, 0.21403168920210874, 6);
  sqcRYGate(q, 2.363748174075707, 7);
  sqcRZGate(q, 1.5204167544759264, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.41460347207087356, 0);
  sqcRZGate(q, 2.9774247973539536, 0);
  sqcRYGate(q, 1.5074606277976041, 1);
  sqcRZGate(q, -2.3716493078331466, 1);
  sqcRYGate(q, -2.391159282085084, 2);
  sqcRZGate(q, 2.4907757304692804, 2);
  sqcRYGate(q, 2.5625315266321578, 3);
  sqcRZGate(q, 0.02882069149760211, 3);
  sqcRYGate(q, -1.332823629791939, 4);
  sqcRZGate(q, 0.6182482092124254, 4);
  sqcRYGate(q, 2.0504586723006053, 5);
  sqcRZGate(q, 1.2196104051067775, 5);
  sqcRYGate(q, -2.2519044240318022, 6);
  sqcRZGate(q, 1.2657804191006423, 6);
  sqcRYGate(q, -0.27702929236144597, 7);
  sqcRZGate(q, 1.7737529811933692, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.512920940629053, 0);
  sqcRZGate(q, 1.8347697229505888, 0);
  sqcRYGate(q, -0.38919296536202563, 1);
  sqcRZGate(q, 2.443554444018891, 1);
  sqcRYGate(q, -0.9795833595637832, 2);
  sqcRZGate(q, -2.594411774636033, 2);
  sqcRYGate(q, -1.185073050452269, 3);
  sqcRZGate(q, 0.13901206047933634, 3);
  sqcRYGate(q, 1.7095678293176357, 4);
  sqcRZGate(q, 0.5708974086516855, 4);
  sqcRYGate(q, -0.5901431840293023, 5);
  sqcRZGate(q, -1.9323839128089497, 5);
  sqcRYGate(q, 2.2070703702314773, 6);
  sqcRZGate(q, -0.41540880835103167, 6);
  sqcRYGate(q, 2.9694629909973074, 7);
  sqcRZGate(q, -2.3391190930515, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7164368841302267, 0);
  sqcRZGate(q, 2.132646734600792, 0);
  sqcRYGate(q, -2.570232171292684, 1);
  sqcRZGate(q, -0.0013325034926698835, 1);
  sqcRYGate(q, -1.820864021832315, 2);
  sqcRZGate(q, 0.7294844107078974, 2);
  sqcRYGate(q, 1.9674651935006147, 3);
  sqcRZGate(q, 0.23598479920449655, 3);
  sqcRYGate(q, 1.7151793274090217, 4);
  sqcRZGate(q, -2.9895213469642856, 4);
  sqcRYGate(q, 1.5193387533087401, 5);
  sqcRZGate(q, 0.24016522464520063, 5);
  sqcRYGate(q, -2.6783307899322177, 6);
  sqcRZGate(q, -0.4056950741859007, 6);
  sqcRYGate(q, 1.4515721440937794, 7);
  sqcRZGate(q, -0.9349150660194248, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.3845233191559725, 0);
  sqcRZGate(q, 1.1549328798791203, 0);
  sqcRYGate(q, 1.164436699369734, 1);
  sqcRZGate(q, 2.4047594394853267, 1);
  sqcRYGate(q, 0.12629655986232713, 2);
  sqcRZGate(q, 0.616897411447149, 2);
  sqcRYGate(q, 1.5719170667782951, 3);
  sqcRZGate(q, -0.1089665057106281, 3);
  sqcRYGate(q, 1.3633466842847572, 4);
  sqcRZGate(q, -2.742523048548109, 4);
  sqcRYGate(q, -2.830441057076313, 5);
  sqcRZGate(q, -1.9924820141866084, 5);
  sqcRYGate(q, -0.16623133409646673, 6);
  sqcRZGate(q, -2.87955444719069, 6);
  sqcRYGate(q, -2.0428323095234084, 7);
  sqcRZGate(q, -0.0013145733674190434, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.8178833702511072, 0);
  sqcRZGate(q, 1.1154639868121947, 0);
  sqcRYGate(q, -1.261520544935393, 1);
  sqcRZGate(q, -0.37123368987624605, 1);
  sqcRYGate(q, -0.6861817478895668, 2);
  sqcRZGate(q, -1.7919374878957364, 2);
  sqcRYGate(q, -1.1614392334688763, 3);
  sqcRZGate(q, 0.04015867968822449, 3);
  sqcRYGate(q, 1.7095809995645759, 4);
  sqcRZGate(q, -1.1526177560817341, 4);
  sqcRYGate(q, 1.9439374018301327, 5);
  sqcRZGate(q, 2.8491750699332687, 5);
  sqcRYGate(q, -2.2850655171692145, 6);
  sqcRZGate(q, -1.223520179660177, 6);
  sqcRYGate(q, 2.1540725038516095, 7);
  sqcRZGate(q, 0.17673991897653685, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5209215007289978, 0);
  sqcRZGate(q, 0.9055464528244249, 0);
  sqcRYGate(q, -1.9785931887095378, 1);
  sqcRZGate(q, -1.0537171342447844, 1);
  sqcRYGate(q, -0.21082981345196947, 2);
  sqcRZGate(q, 2.9037159613790338, 2);
  sqcRYGate(q, -1.4824989054751803, 3);
  sqcRZGate(q, 1.640553418318695, 3);
  sqcRYGate(q, -2.4238338200283325, 4);
  sqcRZGate(q, -0.8080922133296896, 4);
  sqcRYGate(q, -2.3963666207030703, 5);
  sqcRZGate(q, 2.927723571133997, 5);
  sqcRYGate(q, 0.25376787916622756, 6);
  sqcRZGate(q, -0.24246327574901905, 6);
  sqcRYGate(q, 2.183593577791717, 7);
  sqcRZGate(q, -1.5002733521981604, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.6779435684261563, 0);
  sqcRZGate(q, -0.023564739134691592, 0);
  sqcRYGate(q, -1.5241773750669472, 1);
  sqcRZGate(q, 2.735403239072317, 1);
  sqcRYGate(q, 0.9095843402023531, 2);
  sqcRZGate(q, 1.0626148681150802, 2);
  sqcRYGate(q, 2.14812415277381, 3);
  sqcRZGate(q, 1.7387998078613276, 3);
  sqcRYGate(q, -1.1560041862808317, 4);
  sqcRZGate(q, -3.1400543205871125, 4);
  sqcRYGate(q, 0.8873877045780094, 5);
  sqcRZGate(q, 2.149227520730734, 5);
  sqcRYGate(q, 1.0295087898685957, 6);
  sqcRZGate(q, -0.695823391744507, 6);
  sqcRYGate(q, 2.449591127907181, 7);
  sqcRZGate(q, 2.8854759290414758, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1060068125413256, 0);
  sqcRZGate(q, 2.1982840290931476, 0);
  sqcRYGate(q, -1.3385429779871785, 1);
  sqcRZGate(q, -1.9084096787330633, 1);
  sqcRYGate(q, 2.671358270406232, 2);
  sqcRZGate(q, -3.0002590573041514, 2);
  sqcRYGate(q, -0.21690918690132072, 3);
  sqcRZGate(q, -1.0982502033812251, 3);
  sqcRYGate(q, 1.3010877289576628, 4);
  sqcRZGate(q, -1.819434089885915, 4);
  sqcRYGate(q, -0.9209292761154452, 5);
  sqcRZGate(q, 0.7169997775445359, 5);
  sqcRYGate(q, -0.5662817419419177, 6);
  sqcRZGate(q, 0.48306622570741936, 6);
  sqcRYGate(q, -2.6816286052591836, 7);
  sqcRZGate(q, -2.1320434664776617, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.17845253538798464, 0);
  sqcRZGate(q, 2.586548546166221, 0);
  sqcRYGate(q, 1.4414427205718237, 1);
  sqcRZGate(q, -0.9143964652861839, 1);
  sqcRYGate(q, -1.4318963487088043, 2);
  sqcRZGate(q, 2.597509978728583, 2);
  sqcRYGate(q, -2.720642463557627, 3);
  sqcRZGate(q, -1.939876627158061, 3);
  sqcRYGate(q, -0.616219051445472, 4);
  sqcRZGate(q, -1.0825313891911463, 4);
  sqcRYGate(q, 2.2520090839179465, 5);
  sqcRZGate(q, 1.0919327105998162, 5);
  sqcRYGate(q, 1.4607885851331177, 6);
  sqcRZGate(q, -0.4410575631204665, 6);
  sqcRYGate(q, -1.696421698364909, 7);
  sqcRZGate(q, 1.6351833837533478, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.0661485082453934, 0);
  sqcRZGate(q, 2.7623936358592673, 0);
  sqcRYGate(q, 2.1752773738988953, 1);
  sqcRZGate(q, -1.9351606919150488, 1);
  sqcRYGate(q, 1.8852512473997427, 2);
  sqcRZGate(q, -2.1488967443387335, 2);
  sqcRYGate(q, -0.6701187552610692, 3);
  sqcRZGate(q, -1.83156603151814, 3);
  sqcRYGate(q, 2.764089481048965, 4);
  sqcRZGate(q, -2.4004054912451602, 4);
  sqcRYGate(q, -1.4037533915983875, 5);
  sqcRZGate(q, -1.9727726814762114, 5);
  sqcRYGate(q, 2.1482685336404037, 6);
  sqcRZGate(q, -3.0676847449477522, 6);
  sqcRYGate(q, -2.4245737708341544, 7);
  sqcRZGate(q, 2.6249962354498617, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.7659457691162626, 0);
  sqcRZGate(q, 2.140066801938909, 0);
  sqcRYGate(q, -0.5895087969431838, 1);
  sqcRZGate(q, -2.0719736367061623, 1);
  sqcRYGate(q, -0.9302768584138086, 2);
  sqcRZGate(q, -0.8980947089322022, 2);
  sqcRYGate(q, -3.049073159936216, 3);
  sqcRZGate(q, -1.1551398624581797, 3);
  sqcRYGate(q, 1.3398172926427971, 4);
  sqcRZGate(q, 2.20538344688351, 4);
  sqcRYGate(q, 1.708018281038262, 5);
  sqcRZGate(q, -0.3904534662995047, 5);
  sqcRYGate(q, -1.044548273809105, 6);
  sqcRZGate(q, -0.4391546361312768, 6);
  sqcRYGate(q, 1.165283012697185, 7);
  sqcRZGate(q, 1.1899714402665753, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.3222712525385374, 0);
  sqcRZGate(q, -0.2862417295431966, 0);
  sqcRYGate(q, -1.456152680071739, 1);
  sqcRZGate(q, -2.987794357969586, 1);
  sqcRYGate(q, 0.9898740784253173, 2);
  sqcRZGate(q, -1.178759118615728, 2);
  sqcRYGate(q, -2.408352793282156, 3);
  sqcRZGate(q, -0.981899024174323, 3);
  sqcRYGate(q, -0.9674437343933028, 4);
  sqcRZGate(q, 2.0508401997332797, 4);
  sqcRYGate(q, -2.0702613610274834, 5);
  sqcRZGate(q, 0.43533675468854405, 5);
  sqcRYGate(q, -1.527984033588549, 6);
  sqcRZGate(q, -2.591925836052824, 6);
  sqcRYGate(q, 1.0686749264874242, 7);
  sqcRZGate(q, -1.6946745734784319, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.116072641359968, 0);
  sqcRZGate(q, -1.4200890563620185, 0);
  sqcRYGate(q, -0.9024285691484756, 1);
  sqcRZGate(q, -0.6503057954049805, 1);
  sqcRYGate(q, 1.0029126581032788, 2);
  sqcRZGate(q, 1.4963811807335876, 2);
  sqcRYGate(q, 0.37454942158441185, 3);
  sqcRZGate(q, -0.7863338538436871, 3);
  sqcRYGate(q, -2.4471246784163645, 4);
  sqcRZGate(q, 2.0837110767304545, 4);
  sqcRYGate(q, -0.4259787998829614, 5);
  sqcRZGate(q, -0.11169797493337973, 5);
  sqcRYGate(q, 1.2047210238966715, 6);
  sqcRZGate(q, 0.5940786614533894, 6);
  sqcRYGate(q, 2.091102117867073, 7);
  sqcRZGate(q, 2.265749814778419, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.805544022050627, 0);
  sqcRZGate(q, 3.0055458818844256, 0);
  sqcRYGate(q, -1.0464874970397071, 1);
  sqcRZGate(q, 0.054647385812738834, 1);
  sqcRYGate(q, 2.1593228480420317, 2);
  sqcRZGate(q, -0.8317343793401558, 2);
  sqcRYGate(q, 1.2028504335171935, 3);
  sqcRZGate(q, 3.086992560293528, 3);
  sqcRYGate(q, -2.3135814019701852, 4);
  sqcRZGate(q, -2.906272245656984, 4);
  sqcRYGate(q, -2.1129935481615343, 5);
  sqcRZGate(q, 0.4356660659582694, 5);
  sqcRYGate(q, -2.793519064368755, 6);
  sqcRZGate(q, 2.565272510551167, 6);
  sqcRYGate(q, -2.0553198762501763, 7);
  sqcRZGate(q, 1.8662898725108603, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8316903261872866, 0);
  sqcRZGate(q, 0.6436761603334437, 0);
  sqcRYGate(q, -1.9238153667558873, 1);
  sqcRZGate(q, -1.5689565467560487, 1);
  sqcRYGate(q, 2.376757210032742, 2);
  sqcRZGate(q, 2.0653166158407403, 2);
  sqcRYGate(q, -2.8366456084070983, 3);
  sqcRZGate(q, 2.6765864087917937, 3);
  sqcRYGate(q, 0.5165445631387215, 4);
  sqcRZGate(q, 1.5881512962453197, 4);
  sqcRYGate(q, -2.2101236531863284, 5);
  sqcRZGate(q, -2.3697105744429514, 5);
  sqcRYGate(q, -1.4014764602067078, 6);
  sqcRZGate(q, 1.9513617084898156, 6);
  sqcRYGate(q, 1.255038180216133, 7);
  sqcRZGate(q, 0.05429824398493659, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.2477734904554536, 0);
  sqcRZGate(q, 0.2892571481524107, 0);
  sqcRYGate(q, -1.9280448937064767, 1);
  sqcRZGate(q, -3.0920844300778803, 1);
  sqcRYGate(q, 1.7249061402247772, 2);
  sqcRZGate(q, 1.7397047253027058, 2);
  sqcRYGate(q, -1.7919769226961608, 3);
  sqcRZGate(q, -1.6921741025307804, 3);
  sqcRYGate(q, -2.9761378553390587, 4);
  sqcRZGate(q, -2.069703619430804, 4);
  sqcRYGate(q, -2.908345188229489, 5);
  sqcRZGate(q, -1.9199930566807621, 5);
  sqcRYGate(q, -2.131783249133118, 6);
  sqcRZGate(q, -2.9156551318582875, 6);
  sqcRYGate(q, 0.5632374482444265, 7);
  sqcRZGate(q, -2.4400441627598357, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.053542387605653, 0);
  sqcRZGate(q, 1.268226086731332, 0);
  sqcRYGate(q, -2.4628256841536564, 1);
  sqcRZGate(q, 0.8432959053281964, 1);
  sqcRYGate(q, 0.7772367844700083, 2);
  sqcRZGate(q, -2.754211113417394, 2);
  sqcRYGate(q, 2.7399305273368046, 3);
  sqcRZGate(q, -1.883008074933519, 3);
  sqcRYGate(q, -0.3078005810641482, 4);
  sqcRZGate(q, -1.345282414997806, 4);
  sqcRYGate(q, -2.432879311186822, 5);
  sqcRZGate(q, 3.0096821397994167, 5);
  sqcRYGate(q, 1.5355669616689205, 6);
  sqcRZGate(q, 0.9389608540311061, 6);
  sqcRYGate(q, -0.515202435149015, 7);
  sqcRZGate(q, -2.0627412183319596, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5168262687134089, 0);
  sqcRZGate(q, 1.9331749372119695, 0);
  sqcRYGate(q, 2.323649443073553, 1);
  sqcRZGate(q, 1.520335979874948, 1);
  sqcRYGate(q, -1.0962416044549512, 2);
  sqcRZGate(q, -1.7954059866547778, 2);
  sqcRYGate(q, 2.663960731552001, 3);
  sqcRZGate(q, -1.132216632391982, 3);
  sqcRYGate(q, 2.3391031598622285, 4);
  sqcRZGate(q, 0.09559623155368248, 4);
  sqcRYGate(q, -2.4804626260915907, 5);
  sqcRZGate(q, -0.812893467678754, 5);
  sqcRYGate(q, 2.964332664413293, 6);
  sqcRZGate(q, 1.4588029991378955, 6);
  sqcRYGate(q, -0.45873735347421535, 7);
  sqcRZGate(q, 1.3717324901405126, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1837725964079995, 0);
  sqcRZGate(q, -1.0841952107924167, 0);
  sqcRYGate(q, -1.0616460523747948, 1);
  sqcRZGate(q, 1.7312276209100264, 1);
  sqcRYGate(q, 0.5007287727810408, 2);
  sqcRZGate(q, 1.108466796298132, 2);
  sqcRYGate(q, -0.053692534260854075, 3);
  sqcRZGate(q, 1.26295008119979, 3);
  sqcRYGate(q, 0.21931954593518113, 4);
  sqcRZGate(q, -0.78910361878041, 4);
  sqcRYGate(q, -1.2086791515362396, 5);
  sqcRZGate(q, -0.717713878983604, 5);
  sqcRYGate(q, 0.8544063867034088, 6);
  sqcRZGate(q, 2.709994107363728, 6);
  sqcRYGate(q, 2.430716784770217, 7);
  sqcRZGate(q, -3.097024372940216, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.590838796853753, 0);
  sqcRZGate(q, 1.452726837113092, 0);
  sqcRYGate(q, 2.9538449199412473, 1);
  sqcRZGate(q, 2.464428804514253, 1);
  sqcRYGate(q, 2.73205455861245, 2);
  sqcRZGate(q, 3.002937849994272, 2);
  sqcRYGate(q, 2.137027499062669, 3);
  sqcRZGate(q, -1.8069968047482652, 3);
  sqcRYGate(q, -2.6154355366037256, 4);
  sqcRZGate(q, 1.497083077970894, 4);
  sqcRYGate(q, 1.8895168029681009, 5);
  sqcRZGate(q, -2.124940462617122, 5);
  sqcRYGate(q, 2.660626268832239, 6);
  sqcRZGate(q, 1.2682163449269162, 6);
  sqcRYGate(q, -0.6238339298631232, 7);
  sqcRZGate(q, -0.9458613348300906, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.661247077195734, 0);
  sqcRZGate(q, -1.9204312863535624, 0);
  sqcRYGate(q, -0.8326675034442627, 1);
  sqcRZGate(q, -1.8266418992954838, 1);
  sqcRYGate(q, -1.4698544382609215, 2);
  sqcRZGate(q, -2.1925080648049913, 2);
  sqcRYGate(q, -3.013062152384552, 3);
  sqcRZGate(q, 1.8747187303475412, 3);
  sqcRYGate(q, 1.300988588937311, 4);
  sqcRZGate(q, -2.1415271357586745, 4);
  sqcRYGate(q, -2.535661283927995, 5);
  sqcRZGate(q, 0.405116028276284, 5);
  sqcRYGate(q, 1.7861996152742647, 6);
  sqcRZGate(q, -1.4435711735113128, 6);
  sqcRYGate(q, 1.3447281360278025, 7);
  sqcRZGate(q, 2.7385801595926185, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.1696038431333824, 0);
  sqcRZGate(q, -0.6315072806044837, 0);
  sqcRYGate(q, 1.967095817237742, 1);
  sqcRZGate(q, 1.5621060155998183, 1);
  sqcRYGate(q, -0.348170577003699, 2);
  sqcRZGate(q, -1.567931876947607, 2);
  sqcRYGate(q, -1.4206498469923816, 3);
  sqcRZGate(q, -1.3181763974585134, 3);
  sqcRYGate(q, 2.4136954244063458, 4);
  sqcRZGate(q, 2.306151007692483, 4);
  sqcRYGate(q, -1.7205029627198776, 5);
  sqcRZGate(q, -2.4210261673017275, 5);
  sqcRYGate(q, 0.5402574952197537, 6);
  sqcRZGate(q, 0.6853330830938147, 6);
  sqcRYGate(q, -0.2666007940168301, 7);
  sqcRZGate(q, -0.7071617083052333, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.695231466327152, 0);
  sqcRZGate(q, 1.930197838238995, 0);
  sqcRYGate(q, -1.7027908563738379, 1);
  sqcRZGate(q, 2.900329627604992, 1);
  sqcRYGate(q, -1.466346469877852, 2);
  sqcRZGate(q, -1.3583977525974964, 2);
  sqcRYGate(q, -0.09202047333738417, 3);
  sqcRZGate(q, 1.2726868891814611, 3);
  sqcRYGate(q, -3.0518258253610506, 4);
  sqcRZGate(q, -0.11011160161768148, 4);
  sqcRYGate(q, 1.2708332160035833, 5);
  sqcRZGate(q, -1.1940682294852054, 5);
  sqcRYGate(q, -1.0277892538038103, 6);
  sqcRZGate(q, 2.333756154300294, 6);
  sqcRYGate(q, 1.8955403422040318, 7);
  sqcRZGate(q, -0.14661551295636996, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.209534506457438, 0);
  sqcRZGate(q, -1.2159280011152218, 0);
  sqcRYGate(q, -3.086569163620181, 1);
  sqcRZGate(q, 2.748518132074542, 1);
  sqcRYGate(q, 1.6228905773747895, 2);
  sqcRZGate(q, -2.5804302849866065, 2);
  sqcRYGate(q, -2.1395450027036516, 3);
  sqcRZGate(q, -1.5496197707326944, 3);
  sqcRYGate(q, 1.380969984818601, 4);
  sqcRZGate(q, -2.946926559409757, 4);
  sqcRYGate(q, 0.18219718128819018, 5);
  sqcRZGate(q, 1.068672717233519, 5);
  sqcRYGate(q, -0.3671599115356772, 6);
  sqcRZGate(q, -2.872806890794238, 6);
  sqcRYGate(q, -2.739743639694638, 7);
  sqcRZGate(q, -1.2138021468171487, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0471377359544825, 0);
  sqcRZGate(q, -0.9170788693731109, 0);
  sqcRYGate(q, -0.04628028946075094, 1);
  sqcRZGate(q, 0.3985735868097269, 1);
  sqcRYGate(q, -2.083906274351744, 2);
  sqcRZGate(q, -0.1643062228752958, 2);
  sqcRYGate(q, -1.4523782857157297, 3);
  sqcRZGate(q, 0.7145905737893044, 3);
  sqcRYGate(q, -1.5212905585284435, 4);
  sqcRZGate(q, 2.7963454872930473, 4);
  sqcRYGate(q, 2.8720141386991807, 5);
  sqcRZGate(q, 1.2640248949129813, 5);
  sqcRYGate(q, -2.541230670882642, 6);
  sqcRZGate(q, 2.4251481647048454, 6);
  sqcRYGate(q, 2.463457461982293, 7);
  sqcRZGate(q, 2.324606269286514, 7);

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
