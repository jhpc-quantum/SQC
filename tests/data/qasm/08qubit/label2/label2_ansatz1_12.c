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

  sqcRYGate(q, 0.18606475869187644, 0);
  sqcRZGate(q, -2.4526316651024382, 0);
  sqcRYGate(q, -0.0019069555527471138, 1);
  sqcRZGate(q, -0.8256298238227417, 1);
  sqcRYGate(q, 1.8433703842127336, 2);
  sqcRZGate(q, 1.4870529981479699, 2);
  sqcRYGate(q, 0.43128102978969163, 3);
  sqcRZGate(q, -0.6419560673490601, 3);
  sqcRYGate(q, 0.009196112361671177, 4);
  sqcRZGate(q, 0.04102524412466365, 4);
  sqcRYGate(q, -1.6375829763167253, 5);
  sqcRZGate(q, -3.0058387592224447, 5);
  sqcRYGate(q, -0.5918298411553576, 6);
  sqcRZGate(q, -0.674099152804231, 6);
  sqcRYGate(q, 0.0003013216902121907, 7);
  sqcRZGate(q, -0.8472085814501973, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.883043602847814, 0);
  sqcRZGate(q, 3.0498267928020324, 0);
  sqcRYGate(q, 3.138822106346944, 1);
  sqcRZGate(q, -0.7860680467895391, 1);
  sqcRYGate(q, -1.1778749829640038, 2);
  sqcRZGate(q, -2.4087097860736595, 2);
  sqcRYGate(q, -2.0542037583308934, 3);
  sqcRZGate(q, -2.7009551794718303, 3);
  sqcRYGate(q, 1.8182866642323123, 4);
  sqcRZGate(q, 0.8812102578354676, 4);
  sqcRYGate(q, 0.7934689107359684, 5);
  sqcRZGate(q, -2.1084207425249604, 5);
  sqcRYGate(q, -2.483277966712041, 6);
  sqcRZGate(q, 0.4339208628745344, 6);
  sqcRYGate(q, 3.139620764536541, 7);
  sqcRZGate(q, -0.23828940030716, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.034817973473679, 0);
  sqcRZGate(q, -0.0324028280226317, 0);
  sqcRYGate(q, 0.14075806830712165, 1);
  sqcRZGate(q, -0.26016272386206923, 1);
  sqcRYGate(q, -2.5478766780457978, 2);
  sqcRZGate(q, 2.063341553165194, 2);
  sqcRYGate(q, -0.008996833222241235, 3);
  sqcRZGate(q, -0.7711073025710053, 3);
  sqcRYGate(q, -3.1415705506627503, 4);
  sqcRZGate(q, 0.20668526608637805, 4);
  sqcRYGate(q, -2.8030381917084317, 5);
  sqcRZGate(q, 1.5890562466583855, 5);
  sqcRYGate(q, -0.8373113398149421, 6);
  sqcRZGate(q, 1.4977315175835393, 6);
  sqcRYGate(q, -0.011935081245295362, 7);
  sqcRZGate(q, -0.8559841180513112, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.120545012810254, 0);
  sqcRZGate(q, -1.4933829592064551, 0);
  sqcRYGate(q, 3.13415097594286, 1);
  sqcRZGate(q, 2.6551046601552546, 1);
  sqcRYGate(q, -2.9984184948110784, 2);
  sqcRZGate(q, -0.09155876458568853, 2);
  sqcRYGate(q, -2.1030063611718735, 3);
  sqcRZGate(q, -1.4667297178452818, 3);
  sqcRYGate(q, 1.5675621929579568, 4);
  sqcRZGate(q, 0.9541719735023679, 4);
  sqcRYGate(q, -0.7705299739761335, 5);
  sqcRZGate(q, 1.406502421846526, 5);
  sqcRYGate(q, -0.6447661898232291, 6);
  sqcRZGate(q, 0.08998778701149224, 6);
  sqcRYGate(q, 3.1386422668501446, 7);
  sqcRZGate(q, -1.0444992709408183, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6441056706005304, 0);
  sqcRZGate(q, -3.0770395100760455, 0);
  sqcRYGate(q, 0.1797326870350382, 1);
  sqcRZGate(q, -1.8109776112596225, 1);
  sqcRYGate(q, -1.8511406769956, 2);
  sqcRZGate(q, 2.2708513958076826, 2);
  sqcRYGate(q, -3.1376557588045157, 3);
  sqcRZGate(q, -2.700640101711162, 3);
  sqcRYGate(q, -1.732334824614876, 4);
  sqcRZGate(q, 0.15484259479187124, 4);
  sqcRYGate(q, -2.825278710905364, 5);
  sqcRZGate(q, 0.5118292569125851, 5);
  sqcRYGate(q, -0.8256673687938162, 6);
  sqcRZGate(q, 0.2579273967010165, 6);
  sqcRYGate(q, -3.1314690299660235, 7);
  sqcRZGate(q, 0.4871070820367427, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.4694467441149155, 0);
  sqcRZGate(q, 1.4769587420069659, 0);
  sqcRYGate(q, 0.011373179314697168, 1);
  sqcRZGate(q, -2.8970575551628794, 1);
  sqcRYGate(q, -2.9300022992093204, 2);
  sqcRZGate(q, -1.8943899472799473, 2);
  sqcRYGate(q, 1.6528082181383847, 3);
  sqcRZGate(q, -0.48402476478493384, 3);
  sqcRYGate(q, -2.7349918046513095, 4);
  sqcRZGate(q, 0.7156143839255049, 4);
  sqcRYGate(q, 2.9863879231407777, 5);
  sqcRZGate(q, 0.8580882029939275, 5);
  sqcRYGate(q, -1.286013225031513, 6);
  sqcRZGate(q, 1.610145503607569, 6);
  sqcRYGate(q, 0.0008339734179940237, 7);
  sqcRZGate(q, 2.1357839627249042, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.055376706291367, 0);
  sqcRZGate(q, -2.432194207292808, 0);
  sqcRYGate(q, 3.1334063244250214, 1);
  sqcRZGate(q, -0.7735411328080346, 1);
  sqcRYGate(q, -0.1577116137878356, 2);
  sqcRZGate(q, -2.0522076766598225, 2);
  sqcRYGate(q, -0.6564197572634526, 3);
  sqcRZGate(q, 0.9759307541211841, 3);
  sqcRYGate(q, -0.9451837855811913, 4);
  sqcRZGate(q, 0.8369247639616906, 4);
  sqcRYGate(q, 0.2085595516307227, 5);
  sqcRZGate(q, -0.6776232074416901, 5);
  sqcRYGate(q, 1.2939529851635825, 6);
  sqcRZGate(q, -2.5740952485368735, 6);
  sqcRYGate(q, -0.9534643255385615, 7);
  sqcRZGate(q, -2.5747990094295026, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.920521546513298, 0);
  sqcRZGate(q, -0.7288941689229254, 0);
  sqcRYGate(q, 3.122519316640221, 1);
  sqcRZGate(q, 2.3028556314645567, 1);
  sqcRYGate(q, 3.136072187007764, 2);
  sqcRZGate(q, -2.974553078146554, 2);
  sqcRYGate(q, 3.128638897408003, 3);
  sqcRZGate(q, -2.9384056559820464, 3);
  sqcRYGate(q, -0.18643922061151222, 4);
  sqcRZGate(q, 2.7998771805927496, 4);
  sqcRYGate(q, -1.1625722912663745, 5);
  sqcRZGate(q, 0.2770022251297597, 5);
  sqcRYGate(q, -3.1285731588659664, 6);
  sqcRZGate(q, -0.1132082274341213, 6);
  sqcRYGate(q, -3.135439364675649, 7);
  sqcRZGate(q, 0.20497378382935194, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.3483097461660045, 0);
  sqcRZGate(q, 2.941844333906652, 0);
  sqcRYGate(q, 2.545955081395541, 1);
  sqcRZGate(q, 2.6986580298595935, 1);
  sqcRYGate(q, -1.2117234966830615, 2);
  sqcRZGate(q, -2.9111930606253744, 2);
  sqcRYGate(q, 2.200601450607687, 3);
  sqcRZGate(q, 1.248642693143105, 3);
  sqcRYGate(q, -1.4908823755883678, 4);
  sqcRZGate(q, -1.3503807540178911, 4);
  sqcRYGate(q, -3.136754459799051, 5);
  sqcRZGate(q, -1.4876174146306094, 5);
  sqcRYGate(q, 3.048944530891297, 6);
  sqcRZGate(q, 1.7049078805288516, 6);
  sqcRYGate(q, -0.6373295549006585, 7);
  sqcRZGate(q, 3.0262762491635606, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.7162185966012887, 0);
  sqcRZGate(q, -2.535102978027951, 0);
  sqcRYGate(q, 2.917262080547011, 1);
  sqcRZGate(q, 2.0547227724475587, 1);
  sqcRYGate(q, -0.0010605477738803157, 2);
  sqcRZGate(q, -2.3271010662400227, 2);
  sqcRYGate(q, -0.016514102874305794, 3);
  sqcRZGate(q, 1.1459080080297577, 3);
  sqcRYGate(q, 2.3784050476464937, 4);
  sqcRZGate(q, -1.6131814423410322, 4);
  sqcRYGate(q, 1.9106547165809669, 5);
  sqcRZGate(q, -0.21980014766268044, 5);
  sqcRYGate(q, 1.953596077143775, 6);
  sqcRZGate(q, -0.07273774824612227, 6);
  sqcRYGate(q, 3.0261826905766553, 7);
  sqcRZGate(q, -1.033959463313633, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.7956175598578229, 0);
  sqcRZGate(q, -2.5945593777641327, 0);
  sqcRYGate(q, -2.6011827278064996, 1);
  sqcRZGate(q, -2.160923020025505, 1);
  sqcRYGate(q, 0.021346535282946277, 2);
  sqcRZGate(q, 1.5589095152629888, 2);
  sqcRYGate(q, 1.693572302487996, 3);
  sqcRZGate(q, -1.1021023895687154, 3);
  sqcRYGate(q, -1.3982161482233642, 4);
  sqcRZGate(q, -0.25401248553108413, 4);
  sqcRYGate(q, 3.1414655025090967, 5);
  sqcRZGate(q, 0.6785044660806867, 5);
  sqcRYGate(q, 0.007031401835505768, 6);
  sqcRZGate(q, 2.972924187970016, 6);
  sqcRYGate(q, 0.9074590702989954, 7);
  sqcRZGate(q, 0.0010697609143788256, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8738804119506485, 0);
  sqcRZGate(q, 1.6178051302629513, 0);
  sqcRYGate(q, 2.8846196250267417, 1);
  sqcRZGate(q, 0.6935271416525435, 1);
  sqcRYGate(q, 0.0009605636153162678, 2);
  sqcRZGate(q, 0.6049127856073105, 2);
  sqcRYGate(q, -0.0003019150533307445, 3);
  sqcRZGate(q, -0.6266973975576509, 3);
  sqcRYGate(q, -1.9386195357723432, 4);
  sqcRZGate(q, 2.182623477857274, 4);
  sqcRYGate(q, -1.539317090791421, 5);
  sqcRZGate(q, 0.45874092673652994, 5);
  sqcRYGate(q, 0.021840042472428323, 6);
  sqcRZGate(q, 0.6422609207768185, 6);
  sqcRYGate(q, -1.9741007605534477, 7);
  sqcRZGate(q, -3.1178203758102496, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.203751254725585, 0);
  sqcRZGate(q, -1.0675308811272313, 0);
  sqcRYGate(q, -0.33659996399277287, 1);
  sqcRZGate(q, -1.1464603311794497, 1);
  sqcRYGate(q, -2.897207577725733, 2);
  sqcRZGate(q, -2.6111136219101807, 2);
  sqcRYGate(q, 2.9804077202692087, 3);
  sqcRZGate(q, 0.46452322499321075, 3);
  sqcRYGate(q, -3.0564455290070778, 4);
  sqcRZGate(q, 1.7713330285187447, 4);
  sqcRYGate(q, -0.0007964517396592541, 5);
  sqcRZGate(q, 0.47274455557037864, 5);
  sqcRYGate(q, -0.0005035454370558159, 6);
  sqcRZGate(q, 2.278095384545659, 6);
  sqcRYGate(q, 0.9157143922239133, 7);
  sqcRZGate(q, 0.22326096737993512, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4231247750452825, 0);
  sqcRZGate(q, 1.534090579162278, 0);
  sqcRYGate(q, 1.708421771375992, 1);
  sqcRZGate(q, -1.5160938454437085, 1);
  sqcRYGate(q, 1.6794181509576231, 2);
  sqcRZGate(q, 1.909465870657229, 2);
  sqcRYGate(q, 3.1370719677356673, 3);
  sqcRZGate(q, 0.7807573249097032, 3);
  sqcRYGate(q, -0.14508819314424137, 4);
  sqcRZGate(q, -2.341752926547088, 4);
  sqcRYGate(q, -3.05722304431234, 5);
  sqcRZGate(q, 1.2174836330197047, 5);
  sqcRYGate(q, -0.3395465886199771, 6);
  sqcRZGate(q, -1.2287739629753234, 6);
  sqcRYGate(q, 2.4776643825163718, 7);
  sqcRZGate(q, -0.3004450817839315, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4026134787281588, 0);
  sqcRZGate(q, -0.21799199314727885, 0);
  sqcRYGate(q, 1.63651367919858, 1);
  sqcRZGate(q, 1.951469614742412, 1);
  sqcRYGate(q, -3.1329721875584204, 2);
  sqcRZGate(q, 2.770133352112664, 2);
  sqcRYGate(q, 0.00519350431114507, 3);
  sqcRZGate(q, -0.08801806552085482, 3);
  sqcRYGate(q, 1.3649624615029368, 4);
  sqcRZGate(q, -2.6246403631052138, 4);
  sqcRYGate(q, 0.005185609877898428, 5);
  sqcRZGate(q, 2.0295907531004582, 5);
  sqcRYGate(q, -1.6354005119304968, 6);
  sqcRZGate(q, 3.1238479879838112, 6);
  sqcRYGate(q, -0.017755404241487582, 7);
  sqcRZGate(q, 0.6848420140086767, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.016350637638991, 0);
  sqcRZGate(q, 2.585609163673229, 0);
  sqcRYGate(q, 0.5951123224845609, 1);
  sqcRZGate(q, -1.0025036212207636, 1);
  sqcRYGate(q, 2.1467815348947505, 2);
  sqcRZGate(q, 1.6299214855530044, 2);
  sqcRYGate(q, -0.6021402336672379, 3);
  sqcRZGate(q, 2.343087978816661, 3);
  sqcRYGate(q, 2.634801610315705, 4);
  sqcRZGate(q, -1.9538202854567652, 4);
  sqcRYGate(q, 0.03905953251497577, 5);
  sqcRZGate(q, -0.0261207940791554, 5);
  sqcRYGate(q, -1.7931320823590164, 6);
  sqcRZGate(q, -0.6858823042593364, 6);
  sqcRYGate(q, -1.5545143324069368, 7);
  sqcRZGate(q, -2.249387294624792, 7);

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
