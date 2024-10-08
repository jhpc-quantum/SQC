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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 0.015292164435671829, 0);
  sqcRZGate(q, 0.2186015422787297, 0);
  sqcRYGate(q, -3.117979627798554, 1);
  sqcRZGate(q, -1.1635178472584633, 1);
  sqcRYGate(q, 1.2312394923110193, 2);
  sqcRZGate(q, 0.32977203562155416, 2);
  sqcRYGate(q, -1.610514637667806, 3);
  sqcRZGate(q, 1.0667476549867105, 3);
  sqcRYGate(q, 0.16045953419350045, 4);
  sqcRZGate(q, 1.1900823410464334, 4);
  sqcRYGate(q, -1.5707597126276536, 5);
  sqcRZGate(q, 1.4237030867419334, 5);
  sqcRYGate(q, -1.5716353004943668, 6);
  sqcRZGate(q, -0.6151499297895676, 6);
  sqcRYGate(q, 5.708422606609532e-06, 7);
  sqcRZGate(q, -2.631520112335217, 7);
  sqcRYGate(q, 0.010609599610915234, 8);
  sqcRZGate(q, -1.827260798717556, 8);
  sqcRYGate(q, 1.5724861668941037, 9);
  sqcRZGate(q, -3.021898302203406, 9);
  sqcRYGate(q, 1.5711125186295067, 10);
  sqcRZGate(q, 2.036438363926555, 10);
  sqcRYGate(q, 1.7568346631741487, 11);
  sqcRZGate(q, -1.3684770130815966, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.548923508844882, 0);
  sqcRZGate(q, 1.5421479532571813, 0);
  sqcRYGate(q, -3.121139332828567, 1);
  sqcRZGate(q, 1.0843952960202738, 1);
  sqcRYGate(q, -1.4139839300412789, 2);
  sqcRZGate(q, 1.4179735975729288, 2);
  sqcRYGate(q, 3.141246817756052, 3);
  sqcRZGate(q, 1.2296097737218068, 3);
  sqcRYGate(q, 2.2678262200605475e-05, 4);
  sqcRZGate(q, -2.192479797388298, 4);
  sqcRYGate(q, -3.129223586883621, 5);
  sqcRZGate(q, 3.044480074781274, 5);
  sqcRYGate(q, -3.1405313539519173, 6);
  sqcRZGate(q, -0.41555743402351275, 6);
  sqcRYGate(q, -1.5708483866196592, 7);
  sqcRZGate(q, -0.9989370407170214, 7);
  sqcRYGate(q, -3.141591948871798, 8);
  sqcRZGate(q, 1.82278144238333, 8);
  sqcRYGate(q, 0.9764833121318581, 9);
  sqcRZGate(q, -0.20926052029851067, 9);
  sqcRYGate(q, 3.140828953674663, 10);
  sqcRZGate(q, 1.5359577448051662, 10);
  sqcRYGate(q, -0.8700134866991034, 11);
  sqcRZGate(q, 1.1990689469869658, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.1799360791177234, 0);
  sqcRZGate(q, 2.066606662112885, 0);
  sqcRYGate(q, 0.00855626454578471, 1);
  sqcRZGate(q, -0.9553014358695887, 1);
  sqcRYGate(q, 0.3428000713688106, 2);
  sqcRZGate(q, 0.06444811096627134, 2);
  sqcRYGate(q, 0.36550269221311626, 3);
  sqcRZGate(q, -1.9140252256610717, 3);
  sqcRYGate(q, 1.5715413971220804, 4);
  sqcRZGate(q, 0.43067027798435115, 4);
  sqcRYGate(q, -0.34255207679728034, 5);
  sqcRZGate(q, 0.41229472492945984, 5);
  sqcRYGate(q, 1.5448905700350297, 6);
  sqcRZGate(q, 0.9522008643700657, 6);
  sqcRYGate(q, -1.806477442259218e-05, 7);
  sqcRZGate(q, -1.2812348140422527, 7);
  sqcRYGate(q, -1.5664711732045307, 8);
  sqcRZGate(q, -2.883471261798943, 8);
  sqcRYGate(q, 1.5680680107610567, 9);
  sqcRZGate(q, 0.2288857651950815, 9);
  sqcRYGate(q, -3.1413682849578155, 10);
  sqcRZGate(q, -0.6724353195188427, 10);
  sqcRYGate(q, 3.140247304701527, 11);
  sqcRZGate(q, -1.8946344993312536, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.03063251766678845, 0);
  sqcRZGate(q, 1.1114734566133766, 0);
  sqcRYGate(q, 2.0775118251164626, 1);
  sqcRZGate(q, 2.8961955865164426, 1);
  sqcRYGate(q, 1.3257270858589694, 2);
  sqcRZGate(q, -0.009414625698395086, 2);
  sqcRYGate(q, -3.1407739296058534, 3);
  sqcRZGate(q, -0.00862787885331542, 3);
  sqcRYGate(q, -1.5278110430116953e-05, 4);
  sqcRZGate(q, 1.1816440183261474, 4);
  sqcRYGate(q, 0.0013020510319252665, 5);
  sqcRZGate(q, -3.08613676399897, 5);
  sqcRYGate(q, -3.141591745416843, 6);
  sqcRZGate(q, 0.2900930361227399, 6);
  sqcRYGate(q, -8.798584330596488e-07, 7);
  sqcRZGate(q, 2.352608391216087, 7);
  sqcRYGate(q, -3.14158307530851, 8);
  sqcRZGate(q, -0.693404157695218, 8);
  sqcRYGate(q, -1.5629366297293288, 9);
  sqcRZGate(q, 1.5566960934306344, 9);
  sqcRYGate(q, 0.2509621606269538, 10);
  sqcRZGate(q, 0.2031166185791875, 10);
  sqcRYGate(q, -1.5740967469545062, 11);
  sqcRZGate(q, -1.600750944936417, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.008956619888353048, 0);
  sqcRZGate(q, 3.120814578003826, 0);
  sqcRYGate(q, 0.9845588369549029, 1);
  sqcRZGate(q, -1.6724191015314682, 1);
  sqcRYGate(q, 0.3466481087105046, 2);
  sqcRZGate(q, 3.054131779457495, 2);
  sqcRYGate(q, -0.011275295916725188, 3);
  sqcRZGate(q, -0.05429483850592419, 3);
  sqcRYGate(q, 1.92459974683519, 4);
  sqcRZGate(q, -0.6194970317931168, 4);
  sqcRYGate(q, 0.03415137619592912, 5);
  sqcRZGate(q, 2.6428731780253263, 5);
  sqcRYGate(q, -1.4672047282527687, 6);
  sqcRZGate(q, 1.9679445487773708, 6);
  sqcRYGate(q, -9.507383155156502e-05, 7);
  sqcRZGate(q, 2.6998975489723023, 7);
  sqcRYGate(q, 0.5850662720580821, 8);
  sqcRZGate(q, -1.8704318585551962, 8);
  sqcRYGate(q, -1.5546511161887464, 9);
  sqcRZGate(q, -0.5082068134962352, 9);
  sqcRYGate(q, 3.0058819249644397, 10);
  sqcRZGate(q, 2.5801273328767516, 10);
  sqcRYGate(q, -1.7277154799102326, 11);
  sqcRZGate(q, -3.013332444365017, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.2064936158272497, 0);
  sqcRZGate(q, 2.5221946324830715, 0);
  sqcRYGate(q, 1.9524997600357634, 1);
  sqcRZGate(q, 2.625942972810713, 1);
  sqcRYGate(q, 0.6050516580245224, 2);
  sqcRZGate(q, 2.0187859124857406, 2);
  sqcRYGate(q, 3.14131634329888, 3);
  sqcRZGate(q, 1.986124687312306, 3);
  sqcRYGate(q, 9.606493318499353e-05, 4);
  sqcRZGate(q, 0.8494572799886997, 4);
  sqcRYGate(q, 0.05483643556443448, 5);
  sqcRZGate(q, -0.015077055252211478, 5);
  sqcRYGate(q, -3.1415765639387714, 6);
  sqcRZGate(q, 2.2579293132708935, 6);
  sqcRYGate(q, -1.5971362594588847, 7);
  sqcRZGate(q, -1.9308782694691085, 7);
  sqcRYGate(q, -3.210155371746737e-06, 8);
  sqcRZGate(q, -1.9860352209895853, 8);
  sqcRYGate(q, 0.013941851396651828, 9);
  sqcRZGate(q, 1.1713169113952144, 9);
  sqcRYGate(q, -1.2756124897422272, 10);
  sqcRZGate(q, 1.9800023612475122, 10);
  sqcRYGate(q, 2.0788195693280875, 11);
  sqcRZGate(q, -0.9507481674051929, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.0014874684372169179, 0);
  sqcRZGate(q, -2.6325126578246105, 0);
  sqcRYGate(q, -1.6770885065317138, 1);
  sqcRZGate(q, -2.1560832651625566, 1);
  sqcRYGate(q, -2.8844991860350846, 2);
  sqcRZGate(q, -1.4061878850131362, 2);
  sqcRYGate(q, -1.5672715368607424, 3);
  sqcRZGate(q, 1.580783980407939, 3);
  sqcRYGate(q, -2.6679540817178466, 4);
  sqcRZGate(q, 2.2816174441058896, 4);
  sqcRYGate(q, 0.2630455356730075, 5);
  sqcRZGate(q, 3.1401740743203472, 5);
  sqcRYGate(q, 0.6094896401401719, 6);
  sqcRZGate(q, 2.56248979389336, 6);
  sqcRYGate(q, 3.141566112169793, 7);
  sqcRZGate(q, 2.1557169066860986, 7);
  sqcRYGate(q, -0.8135119090141271, 8);
  sqcRZGate(q, 3.12186092680641, 8);
  sqcRYGate(q, 2.0868106632469243, 9);
  sqcRZGate(q, 2.8945470180085864, 9);
  sqcRYGate(q, 0.6542094386362569, 10);
  sqcRZGate(q, -3.0651993151933703, 10);
  sqcRYGate(q, 0.06660623265742885, 11);
  sqcRZGate(q, 2.5568305777370095, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.977361507107979, 0);
  sqcRZGate(q, -1.6909904665059337, 0);
  sqcRYGate(q, 1.571832385467296, 1);
  sqcRZGate(q, -2.4049322202799495, 1);
  sqcRYGate(q, -0.02137222160781871, 2);
  sqcRZGate(q, 1.1114784525928663, 2);
  sqcRYGate(q, -3.0948140358403733, 3);
  sqcRZGate(q, 1.573498032707782, 3);
  sqcRYGate(q, -1.176298040465376, 4);
  sqcRZGate(q, -0.1245695140274794, 4);
  sqcRYGate(q, 1.570186919093051, 5);
  sqcRZGate(q, -1.9765319076164958, 5);
  sqcRYGate(q, 2.152392644827472e-05, 6);
  sqcRZGate(q, -2.704878025970167, 6);
  sqcRYGate(q, 6.156526921895272e-05, 7);
  sqcRZGate(q, 0.9712279835018691, 7);
  sqcRYGate(q, 3.29272735655195e-06, 8);
  sqcRZGate(q, 0.8242815782946691, 8);
  sqcRYGate(q, -1.5956604653674404, 9);
  sqcRZGate(q, 1.380156726981343, 9);
  sqcRYGate(q, 0.7093984346011055, 10);
  sqcRZGate(q, 2.705224044069782, 10);
  sqcRYGate(q, 2.0508570348675894, 11);
  sqcRZGate(q, -0.5396672651937147, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.6170812175591918, 0);
  sqcRZGate(q, 2.9995077107234795, 0);
  sqcRYGate(q, 1.518645001970965, 1);
  sqcRZGate(q, -1.2091402321066127, 1);
  sqcRYGate(q, 9.430201869437612e-05, 2);
  sqcRZGate(q, -2.6167981264318105, 2);
  sqcRYGate(q, 1.5699238650625669, 3);
  sqcRZGate(q, -1.8354361960916883, 3);
  sqcRYGate(q, 3.1380621664004815, 4);
  sqcRZGate(q, 3.077873213968663, 4);
  sqcRYGate(q, -0.0011819657442924125, 5);
  sqcRZGate(q, -1.2885457107773524, 5);
  sqcRYGate(q, 1.3112572163976894, 6);
  sqcRZGate(q, 2.4077258894076934, 6);
  sqcRYGate(q, -4.7120067012104144e-06, 7);
  sqcRZGate(q, 0.5644521322993855, 7);
  sqcRYGate(q, 2.867505241210907, 8);
  sqcRZGate(q, 1.0776422666555279, 8);
  sqcRYGate(q, -1.5589767451373526, 9);
  sqcRZGate(q, -2.2968068703454443, 9);
  sqcRYGate(q, 2.003213242958198, 10);
  sqcRZGate(q, -0.8871710773274718, 10);
  sqcRYGate(q, -1.0580583801366807, 11);
  sqcRZGate(q, 1.9314876942361074, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.3418786738811603, 0);
  sqcRZGate(q, 0.004122370451594075, 0);
  sqcRYGate(q, -1.179696173229007, 1);
  sqcRZGate(q, -1.987687928053307, 1);
  sqcRYGate(q, -1.5702271104706749, 2);
  sqcRZGate(q, 2.8800749911196823, 2);
  sqcRYGate(q, 3.1415422327230673, 3);
  sqcRZGate(q, -1.9509766172212728, 3);
  sqcRYGate(q, 1.0190961877704665, 4);
  sqcRZGate(q, -3.1360208713315973, 4);
  sqcRYGate(q, -1.575802399338337, 5);
  sqcRZGate(q, 1.570189238356658, 5);
  sqcRYGate(q, -2.589018009047095e-05, 6);
  sqcRZGate(q, -2.4380854740499474, 6);
  sqcRYGate(q, 7.379486056890983e-06, 7);
  sqcRZGate(q, 2.5781272585209614, 7);
  sqcRYGate(q, 3.085850183935748, 8);
  sqcRZGate(q, 3.1286113968947893, 8);
  sqcRYGate(q, 0.005573326742476596, 9);
  sqcRZGate(q, 2.160311963400639, 9);
  sqcRYGate(q, -0.09741616752944715, 10);
  sqcRZGate(q, -1.6707130882736712, 10);
  sqcRYGate(q, -3.062126894144308, 11);
  sqcRZGate(q, 2.953976061289732, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.0933363578455237, 0);
  sqcRZGate(q, 3.137733687668558, 0);
  sqcRYGate(q, -2.3720613490844076, 1);
  sqcRZGate(q, 1.0058765361581257, 1);
  sqcRYGate(q, -2.60040359293166e-05, 2);
  sqcRZGate(q, 0.5979590275510304, 2);
  sqcRYGate(q, 0.0013086967303453764, 3);
  sqcRZGate(q, -1.5716445003364523, 3);
  sqcRYGate(q, -1.5276195648589797, 4);
  sqcRZGate(q, -1.7036041584371375, 4);
  sqcRYGate(q, 1.5689689419377595, 5);
  sqcRZGate(q, 3.1008837301651386, 5);
  sqcRYGate(q, -2.5232854207615683, 6);
  sqcRZGate(q, -1.8285394683419323, 6);
  sqcRYGate(q, -3.141588015479791, 7);
  sqcRZGate(q, 0.6763034787097251, 7);
  sqcRYGate(q, -2.584238250356006, 8);
  sqcRZGate(q, -2.6944736399208136, 8);
  sqcRYGate(q, -1.5724175572886854, 9);
  sqcRZGate(q, -1.7960041554731694, 9);
  sqcRYGate(q, -0.004083719671176282, 10);
  sqcRZGate(q, -2.246051380316234, 10);
  sqcRYGate(q, 2.308830830883808, 11);
  sqcRZGate(q, 0.6277202337095176, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.766321171371615, 0);
  sqcRZGate(q, 0.439986916728609, 0);
  sqcRYGate(q, -0.3268208387629219, 1);
  sqcRZGate(q, -0.7508175883549548, 1);
  sqcRYGate(q, -0.00013860372342833216, 2);
  sqcRZGate(q, 2.0132063711605435, 2);
  sqcRYGate(q, 1.5232465406973645, 3);
  sqcRZGate(q, -1.8020084451470266, 3);
  sqcRYGate(q, 0.00017561226578877154, 4);
  sqcRZGate(q, -3.0107042898646346, 4);
  sqcRYGate(q, 1.591356789487377, 5);
  sqcRZGate(q, 1.4102010921740897, 5);
  sqcRYGate(q, -8.540485580965651e-07, 6);
  sqcRZGate(q, 0.6221442372400826, 6);
  sqcRYGate(q, -1.786115722728674, 7);
  sqcRZGate(q, 1.7631366729557554, 7);
  sqcRYGate(q, 0.0024466889253522695, 8);
  sqcRZGate(q, -1.8533018328384143, 8);
  sqcRYGate(q, 0.19423726514285472, 9);
  sqcRZGate(q, -2.912987660446569, 9);
  sqcRYGate(q, 1.6749998581859478, 10);
  sqcRZGate(q, 0.07193744270183695, 10);
  sqcRYGate(q, -1.5677639030644934, 11);
  sqcRZGate(q, -1.764813573950569, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.615055727835231, 0);
  sqcRZGate(q, -1.8353603780497978, 0);
  sqcRYGate(q, -0.42163755786117013, 1);
  sqcRZGate(q, -1.5968471890008502, 1);
  sqcRYGate(q, -0.04166355141568828, 2);
  sqcRZGate(q, -2.443330765286464, 2);
  sqcRYGate(q, 1.5550604315971635, 3);
  sqcRZGate(q, -2.797202477518905, 3);
  sqcRYGate(q, 1.5699377898399303, 4);
  sqcRZGate(q, 0.4271200869982951, 4);
  sqcRYGate(q, 5.994298261313702e-06, 5);
  sqcRZGate(q, -2.289248455767117, 5);
  sqcRYGate(q, -2.6550717853294912e-05, 6);
  sqcRZGate(q, 1.101868933241927, 6);
  sqcRYGate(q, -3.345474696381245e-06, 7);
  sqcRZGate(q, 1.3810858251599738, 7);
  sqcRYGate(q, -3.1055911555201114, 8);
  sqcRZGate(q, -2.3834970231714814, 8);
  sqcRYGate(q, -0.0561163036630834, 9);
  sqcRZGate(q, 1.6692486400159467, 9);
  sqcRYGate(q, 1.5939395176948103, 10);
  sqcRZGate(q, 1.2228640604061822, 10);
  sqcRYGate(q, 1.5712197103669283, 11);
  sqcRZGate(q, -2.4073747826422216, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.3501432519156933, 0);
  sqcRZGate(q, -0.9066971719557682, 0);
  sqcRYGate(q, -0.00030181538082957505, 1);
  sqcRZGate(q, -0.1841869037647177, 1);
  sqcRYGate(q, -4.769254984033634e-05, 2);
  sqcRZGate(q, -0.4880089925628121, 2);
  sqcRYGate(q, -0.004048563119873783, 3);
  sqcRZGate(q, -1.9115192489891744, 3);
  sqcRYGate(q, 0.00010583505341443812, 4);
  sqcRZGate(q, -0.2101518429819844, 4);
  sqcRYGate(q, -1.5704002904483936, 5);
  sqcRZGate(q, 1.5711375421096563, 5);
  sqcRYGate(q, -0.0428534622226282, 6);
  sqcRZGate(q, -0.011813537945044139, 6);
  sqcRYGate(q, 1.3554014500238187, 7);
  sqcRZGate(q, 1.3545208800855424, 7);
  sqcRYGate(q, -0.005518978248903074, 8);
  sqcRZGate(q, -1.2417404222070054, 8);
  sqcRYGate(q, -1.1038744060893768, 9);
  sqcRZGate(q, -0.8550898121245262, 9);
  sqcRYGate(q, -0.02428236497114611, 10);
  sqcRZGate(q, 2.8201707533445464, 10);
  sqcRYGate(q, 1.3352814206040495, 11);
  sqcRZGate(q, -1.3566244526343796, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.230361103442304, 0);
  sqcRZGate(q, 0.31240938144278285, 0);
  sqcRYGate(q, 1.694163885824216, 1);
  sqcRZGate(q, 2.3965677589872714, 1);
  sqcRYGate(q, -0.014638786348496542, 2);
  sqcRZGate(q, -2.681847155554683, 2);
  sqcRYGate(q, -1.5706983020549556, 3);
  sqcRZGate(q, 1.7969726756869928, 3);
  sqcRYGate(q, 3.141300067395829, 4);
  sqcRZGate(q, 1.3476242813549357, 4);
  sqcRYGate(q, -1.6770840295920735, 5);
  sqcRZGate(q, 3.140664954334698, 5);
  sqcRYGate(q, 0.009948551768042388, 6);
  sqcRZGate(q, 0.07335333015141206, 6);
  sqcRYGate(q, -3.141565573843208, 7);
  sqcRZGate(q, 2.753903698025875, 7);
  sqcRYGate(q, -0.0014752825720316888, 8);
  sqcRZGate(q, -1.4253769928821018, 8);
  sqcRYGate(q, -3.05281326454939, 9);
  sqcRZGate(q, 2.499449739246955, 9);
  sqcRYGate(q, -2.944171326826721, 10);
  sqcRZGate(q, -1.593430828579537, 10);
  sqcRYGate(q, -3.1368081515613118, 11);
  sqcRZGate(q, 1.7929370647293223, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.2852956023649778, 0);
  sqcRZGate(q, -0.2975433269782499, 0);
  sqcRYGate(q, -0.049728731686607554, 1);
  sqcRZGate(q, 0.07625760928589731, 1);
  sqcRYGate(q, -3.1411240557834086, 2);
  sqcRZGate(q, 2.323514606756879, 2);
  sqcRYGate(q, 3.141560655446681, 3);
  sqcRZGate(q, -1.790451687571861, 3);
  sqcRYGate(q, -1.261298061283611e-05, 4);
  sqcRZGate(q, 0.3274772094218968, 4);
  sqcRYGate(q, -1.57068957571453, 5);
  sqcRZGate(q, -1.2539306999461637, 5);
  sqcRYGate(q, 0.04281129911203291, 6);
  sqcRZGate(q, -0.05801253024225161, 6);
  sqcRYGate(q, -1.0527484500344239e-05, 7);
  sqcRZGate(q, 0.7501604702615143, 7);
  sqcRYGate(q, -0.004919733891344258, 8);
  sqcRZGate(q, 1.6641046955833272, 8);
  sqcRYGate(q, -2.6659390698134215, 9);
  sqcRZGate(q, -0.47488627794590516, 9);
  sqcRYGate(q, 0.021004168861873396, 10);
  sqcRZGate(q, 1.3088363341066254, 10);
  sqcRYGate(q, 2.90027808255715, 11);
  sqcRZGate(q, -0.05076981986458051, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.793686020833476, 0);
  sqcRZGate(q, 2.4242838485465126, 0);
  sqcRYGate(q, -2.7058899348489986, 1);
  sqcRZGate(q, -1.579336990251913, 1);
  sqcRYGate(q, -1.6020342097936264, 2);
  sqcRZGate(q, -2.0747661717571866, 2);
  sqcRYGate(q, 3.010546549652058, 3);
  sqcRZGate(q, -0.9602614845010242, 3);
  sqcRYGate(q, -1.5471528653783138, 4);
  sqcRZGate(q, 1.068399845263718, 4);
  sqcRYGate(q, 0.2577020281171012, 5);
  sqcRZGate(q, -0.8352372127447527, 5);
  sqcRYGate(q, 2.6335438691249875, 6);
  sqcRZGate(q, -0.5798311153235933, 6);
  sqcRYGate(q, -3.117393995193507, 7);
  sqcRZGate(q, 1.6301264949155214, 7);
  sqcRYGate(q, 3.1209064157590753, 8);
  sqcRZGate(q, -0.9004785909332949, 8);
  sqcRYGate(q, -0.09253342466606605, 9);
  sqcRZGate(q, -1.0076713768565624, 9);
  sqcRYGate(q, 0.16441279998440594, 10);
  sqcRZGate(q, 0.258829539186531, 10);
  sqcRYGate(q, 1.5774955933892392, 11);
  sqcRZGate(q, 0.7181049697908881, 11);

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
