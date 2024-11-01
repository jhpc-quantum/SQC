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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -1.0245521411918572, 0);
  sqcRZGate(q, -3.0417149463548276, 0);
  sqcRYGate(q, -1.1044547833171787, 1);
  sqcRZGate(q, 1.6583448396016731, 1);
  sqcRYGate(q, 1.8641814349006394, 2);
  sqcRZGate(q, 0.7655063654715698, 2);
  sqcRYGate(q, 0.024579710322649717, 3);
  sqcRZGate(q, 2.7889150444203032, 3);
  sqcRYGate(q, 0.440572473876026, 4);
  sqcRZGate(q, -3.11684894343904, 4);
  sqcRYGate(q, -2.2697184015525664, 5);
  sqcRZGate(q, 0.8293458640289683, 5);
  sqcRYGate(q, 1.4956971284572385, 6);
  sqcRZGate(q, 1.5821176611108854, 6);
  sqcRYGate(q, -3.1352270125980417, 7);
  sqcRZGate(q, -2.049561556387949, 7);
  sqcRYGate(q, 3.0650749169307225, 8);
  sqcRZGate(q, -1.7022341006068622, 8);
  sqcRYGate(q, 0.010562738290988529, 9);
  sqcRZGate(q, -0.4981687099943229, 9);
  sqcRYGate(q, 1.5836358743486558, 10);
  sqcRZGate(q, -3.0339120431280806, 10);
  sqcRYGate(q, -1.6644191900939669, 11);
  sqcRZGate(q, -0.8605000241365914, 11);
  sqcRYGate(q, -0.090209212861479, 12);
  sqcRZGate(q, 0.05934411206943491, 12);
  sqcRYGate(q, -3.0314531278142485, 13);
  sqcRZGate(q, 0.41738066143904434, 13);
  sqcRYGate(q, -2.9056829774180595, 14);
  sqcRZGate(q, -0.5814571187341951, 14);
  sqcRYGate(q, 3.110700509738011, 15);
  sqcRZGate(q, 0.9771639879239453, 15);
  sqcRYGate(q, 2.039018185689647, 16);
  sqcRZGate(q, 0.7173358122152468, 16);
  sqcRYGate(q, 0.35303594271425853, 17);
  sqcRZGate(q, 2.528728453994772, 17);
  sqcRYGate(q, -2.8283609637210763, 18);
  sqcRZGate(q, 1.2330638866411265, 18);
  sqcRYGate(q, -0.4705972590614836, 19);
  sqcRZGate(q, -1.793376609748061, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.320942626837213, 0);
  sqcRZGate(q, -2.478645802045811, 0);
  sqcRYGate(q, -2.185557975416694, 1);
  sqcRZGate(q, 0.8551436259691414, 1);
  sqcRYGate(q, -1.4119550043716167, 2);
  sqcRZGate(q, -0.9072540455904253, 2);
  sqcRYGate(q, -0.008886670208380743, 3);
  sqcRZGate(q, -0.4895501042952555, 3);
  sqcRYGate(q, 3.126691407645145, 4);
  sqcRZGate(q, -2.6959310101335023, 4);
  sqcRYGate(q, 0.17323447737964504, 5);
  sqcRZGate(q, 1.0262704817551558, 5);
  sqcRYGate(q, -1.6588604618654366, 6);
  sqcRZGate(q, 1.8659641072549311, 6);
  sqcRYGate(q, 2.005993255839744, 7);
  sqcRZGate(q, 2.641694497099684, 7);
  sqcRYGate(q, -3.1373386924575293, 8);
  sqcRZGate(q, 3.0549527615411205, 8);
  sqcRYGate(q, -0.012741818357805737, 9);
  sqcRZGate(q, 0.2680411669564045, 9);
  sqcRYGate(q, 2.2974914282755354, 10);
  sqcRZGate(q, 2.5400875418215003, 10);
  sqcRYGate(q, 2.3419500156035205, 11);
  sqcRZGate(q, 0.4630241222267118, 11);
  sqcRYGate(q, -1.5515785724556181, 12);
  sqcRZGate(q, -1.6530723928741056, 12);
  sqcRYGate(q, -0.892891352165754, 13);
  sqcRZGate(q, 3.038103013634588, 13);
  sqcRYGate(q, 1.0032297397145626, 14);
  sqcRZGate(q, 0.08678068178239808, 14);
  sqcRYGate(q, -0.11004481225036852, 15);
  sqcRZGate(q, -0.31099406611396907, 15);
  sqcRYGate(q, 2.9265996692650806, 16);
  sqcRZGate(q, -0.3978676834932679, 16);
  sqcRYGate(q, 0.024010459701528552, 17);
  sqcRZGate(q, -2.1394150793197793, 17);
  sqcRYGate(q, 1.4318840612184882, 18);
  sqcRZGate(q, -1.718856514534282, 18);
  sqcRYGate(q, -0.724148476318094, 19);
  sqcRZGate(q, 2.244549503630771, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.7966591813797517, 0);
  sqcRZGate(q, -0.430152192002285, 0);
  sqcRYGate(q, -2.6567418969984615, 1);
  sqcRZGate(q, 0.39441366665085625, 1);
  sqcRYGate(q, 2.489140493047269, 2);
  sqcRZGate(q, -0.13538840472032856, 2);
  sqcRYGate(q, -1.5427912407382933, 3);
  sqcRZGate(q, -1.5334404677876656, 3);
  sqcRYGate(q, -3.023306285983465, 4);
  sqcRZGate(q, -2.980723771881416, 4);
  sqcRYGate(q, -0.30451879845348184, 5);
  sqcRZGate(q, -0.7648220815205007, 5);
  sqcRYGate(q, -0.4067514984658205, 6);
  sqcRZGate(q, -2.9378968368685188, 6);
  sqcRYGate(q, -2.799394701338262, 7);
  sqcRZGate(q, 1.3522136186132527, 7);
  sqcRYGate(q, 2.717749429046205, 8);
  sqcRZGate(q, 1.0587314554109826, 8);
  sqcRYGate(q, 0.5566260170237349, 9);
  sqcRZGate(q, 0.29414507242013893, 9);
  sqcRYGate(q, 0.9400630226887331, 10);
  sqcRZGate(q, 2.9665157134760487, 10);
  sqcRYGate(q, 1.5614090233449796, 11);
  sqcRZGate(q, 0.03505711342111972, 11);
  sqcRYGate(q, 2.7570313363510754, 12);
  sqcRZGate(q, 0.011311798387259485, 12);
  sqcRYGate(q, 0.013092409195719414, 13);
  sqcRZGate(q, -3.1253979334327986, 13);
  sqcRYGate(q, 0.4038558713598306, 14);
  sqcRZGate(q, -0.48155560757518673, 14);
  sqcRYGate(q, -3.0808984991588737, 15);
  sqcRZGate(q, 3.044174681628276, 15);
  sqcRYGate(q, -0.895398084366565, 16);
  sqcRZGate(q, -1.6799345559952554, 16);
  sqcRYGate(q, -3.0371921797725427, 17);
  sqcRZGate(q, -3.0629213040616623, 17);
  sqcRYGate(q, 2.0699102458168084, 18);
  sqcRZGate(q, -1.1486835872050953, 18);
  sqcRYGate(q, -2.495169531704059, 19);
  sqcRZGate(q, 0.5149545732921799, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.12498600195952186, 0);
  sqcRZGate(q, -2.1616444139038125, 0);
  sqcRYGate(q, -1.873055814820574, 1);
  sqcRZGate(q, -1.623202381315621, 1);
  sqcRYGate(q, -0.47905302357653035, 2);
  sqcRZGate(q, 0.0958195066536686, 2);
  sqcRYGate(q, 0.7929001153342702, 3);
  sqcRZGate(q, -3.1296506086612528, 3);
  sqcRYGate(q, 3.1405353915356655, 4);
  sqcRZGate(q, -2.377780287223496, 4);
  sqcRYGate(q, 1.6400183774345474, 5);
  sqcRZGate(q, -0.9847228032826372, 5);
  sqcRYGate(q, 2.9443074358980748, 6);
  sqcRZGate(q, 2.266817400809881, 6);
  sqcRYGate(q, 1.8809097924471667, 7);
  sqcRZGate(q, -1.7415652017407066, 7);
  sqcRYGate(q, -3.123589188146125, 8);
  sqcRZGate(q, -2.4709278136583674, 8);
  sqcRYGate(q, -0.009703796379730179, 9);
  sqcRZGate(q, -3.0404132859872064, 9);
  sqcRYGate(q, 0.11931645299578264, 10);
  sqcRZGate(q, 2.1872474618534636, 10);
  sqcRYGate(q, -1.6696903254105278, 11);
  sqcRZGate(q, 2.055708795805705, 11);
  sqcRYGate(q, 1.5815242250620463, 12);
  sqcRZGate(q, -0.872220319823363, 12);
  sqcRYGate(q, 2.7156109315798798, 13);
  sqcRZGate(q, -3.10775733829451, 13);
  sqcRYGate(q, 0.011175792622614873, 14);
  sqcRZGate(q, -2.5923475329813157, 14);
  sqcRYGate(q, -1.6532223939001456, 15);
  sqcRZGate(q, -1.8050054330748413, 15);
  sqcRYGate(q, 2.9826019372391785, 16);
  sqcRZGate(q, 2.6344432128950293, 16);
  sqcRYGate(q, -3.1160078051836964, 17);
  sqcRZGate(q, -2.72288726655218, 17);
  sqcRYGate(q, -1.356111137554769, 18);
  sqcRZGate(q, 1.87161464958504, 18);
  sqcRYGate(q, 0.210444795846085, 19);
  sqcRZGate(q, -0.24358417933263699, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.7771279551950634, 0);
  sqcRZGate(q, 0.48799369877943716, 0);
  sqcRYGate(q, 3.1199020121986174, 1);
  sqcRZGate(q, -1.3988189295374136, 1);
  sqcRYGate(q, 3.1327983793063217, 2);
  sqcRZGate(q, -0.4993198702334149, 2);
  sqcRYGate(q, 0.02908894537316353, 3);
  sqcRZGate(q, 3.0760878892401378, 3);
  sqcRYGate(q, 3.0448765728037093, 4);
  sqcRZGate(q, 1.4258496353970465, 4);
  sqcRYGate(q, 0.3015519637575277, 5);
  sqcRZGate(q, -0.8716177318421126, 5);
  sqcRYGate(q, 3.034754590999662, 6);
  sqcRZGate(q, 1.9528472181641643, 6);
  sqcRYGate(q, -1.5210718665966088, 7);
  sqcRZGate(q, -0.1930905029295999, 7);
  sqcRYGate(q, 0.4267380080087255, 8);
  sqcRZGate(q, 0.1204947247358129, 8);
  sqcRYGate(q, 0.9319909903121171, 9);
  sqcRZGate(q, -0.046850522617837065, 9);
  sqcRYGate(q, -0.1267437129601774, 10);
  sqcRZGate(q, -1.0250248028221263, 10);
  sqcRYGate(q, -0.02635535694594715, 11);
  sqcRZGate(q, 1.3610453640836946, 11);
  sqcRYGate(q, 0.1632129883329212, 12);
  sqcRZGate(q, 2.960674514636004, 12);
  sqcRYGate(q, 2.4616982674828, 13);
  sqcRZGate(q, 0.8827701521393576, 13);
  sqcRYGate(q, -1.5550380049423758, 14);
  sqcRZGate(q, -0.6410229283212505, 14);
  sqcRYGate(q, -1.743145631954846, 15);
  sqcRZGate(q, -0.9912592222934222, 15);
  sqcRYGate(q, -2.9492676861001823, 16);
  sqcRZGate(q, -1.5396243736515258, 16);
  sqcRYGate(q, 1.2555132727142335, 17);
  sqcRZGate(q, 2.669371138563301, 17);
  sqcRYGate(q, 2.586091490813223, 18);
  sqcRZGate(q, 1.0325484008915575, 18);
  sqcRYGate(q, -2.006084496542532, 19);
  sqcRZGate(q, 0.11706490982797389, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.189803738585907, 0);
  sqcRZGate(q, 1.4207861846968148, 0);
  sqcRYGate(q, 2.3913745316839234, 1);
  sqcRZGate(q, -2.911467906663044, 1);
  sqcRYGate(q, -2.1853031653308648, 2);
  sqcRZGate(q, -0.2875706686301589, 2);
  sqcRYGate(q, 2.3491024883798386, 3);
  sqcRZGate(q, -0.922743549521317, 3);
  sqcRYGate(q, 0.004694144029194404, 4);
  sqcRZGate(q, 1.2768679645794847, 4);
  sqcRYGate(q, -3.1198359808192206, 5);
  sqcRZGate(q, 2.77326482004368, 5);
  sqcRYGate(q, -0.019974211396461355, 6);
  sqcRZGate(q, -1.4350239039378978, 6);
  sqcRYGate(q, -0.4932028172477372, 7);
  sqcRZGate(q, -1.5806556669936942, 7);
  sqcRYGate(q, -0.32376574686955717, 8);
  sqcRZGate(q, -0.6993498061990975, 8);
  sqcRYGate(q, 0.007860083017692157, 9);
  sqcRZGate(q, -2.2310148904351923, 9);
  sqcRYGate(q, 3.037637623801627, 10);
  sqcRZGate(q, -1.429633638650575, 10);
  sqcRYGate(q, -3.122422693949492, 11);
  sqcRZGate(q, -1.9962392491253222, 11);
  sqcRYGate(q, -0.043193709229437986, 12);
  sqcRZGate(q, -2.958545698208993, 12);
  sqcRYGate(q, -0.13783027698361255, 13);
  sqcRZGate(q, -0.2955753568803904, 13);
  sqcRYGate(q, 0.7728483776928519, 14);
  sqcRZGate(q, -2.1202673646832597, 14);
  sqcRYGate(q, 2.2724896731277386, 15);
  sqcRZGate(q, 2.157580937119704, 15);
  sqcRYGate(q, 3.1369296130409685, 16);
  sqcRZGate(q, -3.0185304447430337, 16);
  sqcRYGate(q, 0.011273523697483337, 17);
  sqcRZGate(q, 0.35205184382153215, 17);
  sqcRYGate(q, 2.8359064320487333, 18);
  sqcRZGate(q, -1.8743278260504201, 18);
  sqcRYGate(q, 0.5138766267476752, 19);
  sqcRZGate(q, -1.3747465780626156, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.8583622233552913, 0);
  sqcRZGate(q, 1.8411494029301387, 0);
  sqcRYGate(q, -0.003421366351208377, 1);
  sqcRZGate(q, 2.512499464232852, 1);
  sqcRYGate(q, -1.5534978676953708, 2);
  sqcRZGate(q, -0.00885570276989612, 2);
  sqcRYGate(q, -0.01827546257818543, 3);
  sqcRZGate(q, -1.1969733882181117, 3);
  sqcRYGate(q, 3.1260421809298604, 4);
  sqcRZGate(q, -1.860586943693968, 4);
  sqcRYGate(q, -1.2578575903162812, 5);
  sqcRZGate(q, -0.559274642628794, 5);
  sqcRYGate(q, 1.462094824611573, 6);
  sqcRZGate(q, 0.5337472017031438, 6);
  sqcRYGate(q, -0.1601881264811483, 7);
  sqcRZGate(q, -1.081581482474431, 7);
  sqcRYGate(q, 0.2655297702903878, 8);
  sqcRZGate(q, 0.6632206319565492, 8);
  sqcRYGate(q, -2.9523390460966508, 9);
  sqcRZGate(q, 2.4929298877597184, 9);
  sqcRYGate(q, -2.2846482326802238, 10);
  sqcRZGate(q, 0.31980020076613425, 10);
  sqcRYGate(q, 0.013399363676797726, 11);
  sqcRZGate(q, 1.6389920416543093, 11);
  sqcRYGate(q, 3.116757780616364, 12);
  sqcRZGate(q, -0.16220645183746907, 12);
  sqcRYGate(q, 0.04446078288693443, 13);
  sqcRZGate(q, -2.738725169194692, 13);
  sqcRYGate(q, -3.137383229304752, 14);
  sqcRZGate(q, -2.844131680731171, 14);
  sqcRYGate(q, -2.7562242939108668, 15);
  sqcRZGate(q, -3.1340001377239672, 15);
  sqcRYGate(q, 0.04726920456853242, 16);
  sqcRZGate(q, -1.9741372124780598, 16);
  sqcRYGate(q, -1.7490786728032748, 17);
  sqcRZGate(q, -1.196940330676295, 17);
  sqcRYGate(q, 2.0674372802971144, 18);
  sqcRZGate(q, 0.6552847283337465, 18);
  sqcRYGate(q, 2.942827812712476, 19);
  sqcRZGate(q, 0.6291089776147308, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.251629793256028, 0);
  sqcRZGate(q, 2.7678546651161726, 0);
  sqcRYGate(q, 1.4755319479666884, 1);
  sqcRZGate(q, -1.1698873830723322, 1);
  sqcRYGate(q, 1.7594146527325227, 2);
  sqcRZGate(q, 2.1515033683459484, 2);
  sqcRYGate(q, 0.004583676411455073, 3);
  sqcRZGate(q, -0.9838804267917408, 3);
  sqcRYGate(q, -0.5584036778811265, 4);
  sqcRZGate(q, 1.3964568369953465, 4);
  sqcRYGate(q, -1.3377734292904693, 5);
  sqcRZGate(q, -2.525207472832551, 5);
  sqcRYGate(q, 0.03331540770249793, 6);
  sqcRZGate(q, -0.9954848016283142, 6);
  sqcRYGate(q, -0.03444921268797506, 7);
  sqcRZGate(q, 1.3937489335791242, 7);
  sqcRYGate(q, 2.823459405092901, 8);
  sqcRZGate(q, 1.2460706047855727, 8);
  sqcRYGate(q, -0.16446461848795826, 9);
  sqcRZGate(q, 0.2731189817750527, 9);
  sqcRYGate(q, -1.962068651331358, 10);
  sqcRZGate(q, 0.2443438263915345, 10);
  sqcRYGate(q, -3.1175245972078294, 11);
  sqcRZGate(q, 2.3245273396503476, 11);
  sqcRYGate(q, 3.07763045146176, 12);
  sqcRZGate(q, 0.35732584917161997, 12);
  sqcRYGate(q, 3.008644296100975, 13);
  sqcRZGate(q, -2.9020329749542055, 13);
  sqcRYGate(q, -1.048896139647275, 14);
  sqcRZGate(q, 1.955045758316074, 14);
  sqcRYGate(q, -2.1157067220249473, 15);
  sqcRZGate(q, 0.6388514017270356, 15);
  sqcRYGate(q, -0.001862350770488774, 16);
  sqcRZGate(q, 3.0421831388992477, 16);
  sqcRYGate(q, -0.01566885547162824, 17);
  sqcRZGate(q, -2.750845530359111, 17);
  sqcRYGate(q, 1.7446925513937446, 18);
  sqcRZGate(q, -0.9630823696523176, 18);
  sqcRYGate(q, -1.5724510831082315, 19);
  sqcRZGate(q, -1.3787102956334696, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.0757992530465614, 0);
  sqcRZGate(q, 2.6588543564994875, 0);
  sqcRYGate(q, 0.8786541283463646, 1);
  sqcRZGate(q, 2.6066731713799176, 1);
  sqcRYGate(q, -2.643105125000581, 2);
  sqcRZGate(q, 0.1427810709430375, 2);
  sqcRYGate(q, 1.3821730527587013, 3);
  sqcRZGate(q, -1.6023496156326689, 3);
  sqcRYGate(q, -3.140618737081255, 4);
  sqcRZGate(q, -2.834531826751549, 4);
  sqcRYGate(q, 3.133857144595281, 5);
  sqcRZGate(q, 2.2316708459548975, 5);
  sqcRYGate(q, 0.13507132292086066, 6);
  sqcRZGate(q, 1.051489663101365, 6);
  sqcRYGate(q, -1.6265183069891211, 7);
  sqcRZGate(q, 0.3424274175178618, 7);
  sqcRYGate(q, 0.6438280929532011, 8);
  sqcRZGate(q, 0.9232980466928361, 8);
  sqcRYGate(q, 2.768101326073636, 9);
  sqcRZGate(q, 2.950996248634644, 9);
  sqcRYGate(q, -0.5322894775493521, 10);
  sqcRZGate(q, 0.4891404801107138, 10);
  sqcRYGate(q, -0.9393933754087751, 11);
  sqcRZGate(q, 1.1944645681475472, 11);
  sqcRYGate(q, -2.5660627376870933, 12);
  sqcRZGate(q, -1.5558979752785222, 12);
  sqcRYGate(q, 1.2634063599722738, 13);
  sqcRZGate(q, -3.0025506427138002, 13);
  sqcRYGate(q, 1.5803515225471756, 14);
  sqcRZGate(q, 3.107203730845161, 14);
  sqcRYGate(q, 1.2320123439219088, 15);
  sqcRZGate(q, 1.6410884807351647, 15);
  sqcRYGate(q, -1.0342433218047757, 16);
  sqcRZGate(q, 3.0551181744619553, 16);
  sqcRYGate(q, -2.7648390079075598, 17);
  sqcRZGate(q, 1.7187984325250927, 17);
  sqcRYGate(q, -0.7256649122021052, 18);
  sqcRZGate(q, -1.8677493737505662, 18);
  sqcRYGate(q, -0.884755138164784, 19);
  sqcRZGate(q, -0.0332570384256311, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.2134400461946857, 0);
  sqcRZGate(q, 0.5892260365479242, 0);
  sqcRYGate(q, -0.04971585852623672, 1);
  sqcRZGate(q, -3.0173286821461014, 1);
  sqcRYGate(q, 3.1305650188865, 2);
  sqcRZGate(q, -0.9985369012733467, 2);
  sqcRYGate(q, 1.5591309159180735, 3);
  sqcRZGate(q, 0.7135128807899213, 3);
  sqcRYGate(q, -3.13444075875029, 4);
  sqcRZGate(q, 2.0521635201666575, 4);
  sqcRYGate(q, 1.394170013127897, 5);
  sqcRZGate(q, -1.5729151222674396, 5);
  sqcRYGate(q, -0.5957822391282068, 6);
  sqcRZGate(q, 1.0112070521552936, 6);
  sqcRYGate(q, 0.0016366070927001006, 7);
  sqcRZGate(q, -0.7478318229972727, 7);
  sqcRYGate(q, 1.9159650777862323, 8);
  sqcRZGate(q, -0.0637140734673789, 8);
  sqcRYGate(q, -3.0999764549004647, 9);
  sqcRZGate(q, 2.660795719445666, 9);
  sqcRYGate(q, -0.02098243342082018, 10);
  sqcRZGate(q, -0.6951290261561054, 10);
  sqcRYGate(q, 3.1345595871075473, 11);
  sqcRZGate(q, 1.9668545536703308, 11);
  sqcRYGate(q, 0.0019369215643481041, 12);
  sqcRZGate(q, 2.9224774497618795, 12);
  sqcRYGate(q, 0.020958700025229145, 13);
  sqcRZGate(q, 1.8313473617116582, 13);
  sqcRYGate(q, -1.5692478840911777, 14);
  sqcRZGate(q, -1.3789667914025432, 14);
  sqcRYGate(q, 1.1069260306803086, 15);
  sqcRZGate(q, 1.741955578163148, 15);
  sqcRYGate(q, 1.5766473144754767, 16);
  sqcRZGate(q, -0.10059400323346918, 16);
  sqcRYGate(q, 0.03616544856945847, 17);
  sqcRZGate(q, -2.352408562540004, 17);
  sqcRYGate(q, 0.6750769631794021, 18);
  sqcRZGate(q, -1.2868965628456044, 18);
  sqcRYGate(q, 1.181185473990901, 19);
  sqcRZGate(q, -2.5808995049801355, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.028920564978222, 0);
  sqcRZGate(q, -3.019782286088179, 0);
  sqcRYGate(q, 2.1949139391728902, 1);
  sqcRZGate(q, -1.11087332414291, 1);
  sqcRYGate(q, 3.127024098326467, 2);
  sqcRZGate(q, -0.4287650791949628, 2);
  sqcRYGate(q, 0.007045839083801297, 3);
  sqcRZGate(q, 2.4260940995001956, 3);
  sqcRYGate(q, 0.5913326166166577, 4);
  sqcRZGate(q, 2.9107571481711787, 4);
  sqcRYGate(q, -3.1370756984463015, 5);
  sqcRZGate(q, 1.7547139629745296, 5);
  sqcRYGate(q, -1.5575669093267421, 6);
  sqcRZGate(q, -0.21569348533635854, 6);
  sqcRYGate(q, 3.1171627969977362, 7);
  sqcRZGate(q, 2.7058419156553075, 7);
  sqcRYGate(q, 0.31496696553673237, 8);
  sqcRZGate(q, -0.6421426357064153, 8);
  sqcRYGate(q, 3.135613973180225, 9);
  sqcRZGate(q, -0.14225035553596396, 9);
  sqcRYGate(q, 2.2145390708248733, 10);
  sqcRZGate(q, 1.2290780273148554, 10);
  sqcRYGate(q, -1.7596604001266054, 11);
  sqcRZGate(q, 1.5640087883720266, 11);
  sqcRYGate(q, -3.0835930569803636, 12);
  sqcRZGate(q, -0.6507995660456292, 12);
  sqcRYGate(q, 0.12928789300674826, 13);
  sqcRZGate(q, -0.7877757487702519, 13);
  sqcRYGate(q, -0.0029506063159695436, 14);
  sqcRZGate(q, 1.315006226057149, 14);
  sqcRYGate(q, 0.013405863573003884, 15);
  sqcRZGate(q, -2.05720447535176, 15);
  sqcRYGate(q, -0.14617267943440027, 16);
  sqcRZGate(q, 1.1818585698953936, 16);
  sqcRYGate(q, 1.3301680548662715, 17);
  sqcRZGate(q, -2.0894481084880594, 17);
  sqcRYGate(q, 0.6256219195295646, 18);
  sqcRZGate(q, 1.4983932575899148, 18);
  sqcRYGate(q, 2.543154850344958, 19);
  sqcRZGate(q, -2.837791155025012, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.4998776007469492, 0);
  sqcRZGate(q, 0.031194358590648178, 0);
  sqcRYGate(q, 1.4796142713110596, 1);
  sqcRZGate(q, -0.31530472013633126, 1);
  sqcRYGate(q, 0.04766180076629934, 2);
  sqcRZGate(q, -1.6387770068624823, 2);
  sqcRYGate(q, 1.5821611703095808, 3);
  sqcRZGate(q, -3.0920054705734823, 3);
  sqcRYGate(q, 3.0059276094335496, 4);
  sqcRZGate(q, 0.5070441043706673, 4);
  sqcRYGate(q, 1.6239881120957085, 5);
  sqcRZGate(q, 3.0877233793207393, 5);
  sqcRYGate(q, -1.058420576922436, 6);
  sqcRZGate(q, 0.4511498597193988, 6);
  sqcRYGate(q, 1.5338896539664795, 7);
  sqcRZGate(q, 3.138388169194578, 7);
  sqcRYGate(q, 2.713848902365287, 8);
  sqcRZGate(q, 2.463040249497236, 8);
  sqcRYGate(q, 2.0423618103840493, 9);
  sqcRZGate(q, 3.140343616298654, 9);
  sqcRYGate(q, 3.1330102443536303, 10);
  sqcRZGate(q, -1.8610333059240534, 10);
  sqcRYGate(q, -3.140042923668675, 11);
  sqcRZGate(q, -0.961494805011086, 11);
  sqcRYGate(q, -0.0014614831733320184, 12);
  sqcRZGate(q, -3.1304966093301854, 12);
  sqcRYGate(q, 1.0957902777937356, 13);
  sqcRZGate(q, -3.1353823439483226, 13);
  sqcRYGate(q, -1.8009654016800711, 14);
  sqcRZGate(q, 0.47362441691946816, 14);
  sqcRYGate(q, 0.5710122021982356, 15);
  sqcRZGate(q, 1.616875669256907, 15);
  sqcRYGate(q, 0.021761320660277583, 16);
  sqcRZGate(q, -2.275669938690103, 16);
  sqcRYGate(q, 3.123500583366526, 17);
  sqcRZGate(q, 1.10345897899749, 17);
  sqcRYGate(q, 1.7788964418440818, 18);
  sqcRZGate(q, -0.05193826071102325, 18);
  sqcRYGate(q, 2.1438968925541033, 19);
  sqcRZGate(q, -2.855023509387937, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5906119958788827, 0);
  sqcRZGate(q, 2.9168341308525183, 0);
  sqcRYGate(q, 0.025796352695874266, 1);
  sqcRZGate(q, 0.24204178079961025, 1);
  sqcRYGate(q, 1.569420898715795, 2);
  sqcRZGate(q, -0.046089738641338036, 2);
  sqcRYGate(q, -0.0402128679345297, 3);
  sqcRZGate(q, 3.010902859252064, 3);
  sqcRYGate(q, 0.010178070835208337, 4);
  sqcRZGate(q, 0.3675457425863919, 4);
  sqcRYGate(q, 0.01855882652923846, 5);
  sqcRZGate(q, -2.1236433477012477, 5);
  sqcRYGate(q, 3.127405837722512, 6);
  sqcRZGate(q, -0.2648206784350107, 6);
  sqcRYGate(q, 1.445090788187739, 7);
  sqcRZGate(q, 1.3513193488915407, 7);
  sqcRYGate(q, 1.5767161083405012, 8);
  sqcRZGate(q, -3.141284775937249, 8);
  sqcRYGate(q, 1.5174615298128569, 9);
  sqcRZGate(q, 3.1347923745156976, 9);
  sqcRYGate(q, 1.5135712974138649, 10);
  sqcRZGate(q, -0.006384970095973753, 10);
  sqcRYGate(q, 2.261321067403826, 11);
  sqcRZGate(q, -1.9321365308962326, 11);
  sqcRYGate(q, 3.1411689418603808, 12);
  sqcRZGate(q, -2.3687920725645126, 12);
  sqcRYGate(q, -0.8808732425950989, 13);
  sqcRZGate(q, 0.28201336194356674, 13);
  sqcRYGate(q, 3.1312360916561395, 14);
  sqcRZGate(q, 0.4247672708525209, 14);
  sqcRYGate(q, 0.01972420046935674, 15);
  sqcRZGate(q, 0.18899047948198525, 15);
  sqcRYGate(q, 0.0017294229085261003, 16);
  sqcRZGate(q, 1.1374459861580535, 16);
  sqcRYGate(q, 0.8916774699812657, 17);
  sqcRZGate(q, 3.0927627082037024, 17);
  sqcRYGate(q, -1.9195123565394931, 18);
  sqcRZGate(q, 2.3811463566740136, 18);
  sqcRYGate(q, 1.5940964674151905, 19);
  sqcRZGate(q, 2.4350838698746435, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.8338126269722999, 0);
  sqcRZGate(q, 2.874214598315258, 0);
  sqcRYGate(q, 1.5657124217704084, 1);
  sqcRZGate(q, 3.1360972503719173, 1);
  sqcRYGate(q, -1.6130473998008796, 2);
  sqcRZGate(q, -2.2876033241045315, 2);
  sqcRYGate(q, 0.6605749684333251, 3);
  sqcRZGate(q, -0.3784064729897462, 3);
  sqcRYGate(q, 0.03761826048939564, 4);
  sqcRZGate(q, -3.069430704373123, 4);
  sqcRYGate(q, 3.0715969854074214, 5);
  sqcRZGate(q, -2.173815201457054, 5);
  sqcRYGate(q, 3.0282656502924934, 6);
  sqcRZGate(q, -2.2027783555630336, 6);
  sqcRYGate(q, -3.140041944520626, 7);
  sqcRZGate(q, 1.3430190127074804, 7);
  sqcRYGate(q, 1.601810247944003, 8);
  sqcRZGate(q, -1.8265384046883473, 8);
  sqcRYGate(q, -0.07193805507494071, 9);
  sqcRZGate(q, -3.135278107692205, 9);
  sqcRYGate(q, -1.4298821767857752, 10);
  sqcRZGate(q, 0.0037611067164657896, 10);
  sqcRYGate(q, 2.3637351275161134, 11);
  sqcRZGate(q, 0.0013262097127331172, 11);
  sqcRYGate(q, -1.5358487013876359, 12);
  sqcRZGate(q, -3.1353377135568206, 12);
  sqcRYGate(q, -1.5116671230313814, 13);
  sqcRZGate(q, 2.717556260340461, 13);
  sqcRYGate(q, 1.8018422769219105, 14);
  sqcRZGate(q, -1.7278529605267727, 14);
  sqcRYGate(q, 2.894046017320371, 15);
  sqcRZGate(q, 1.605392464606395, 15);
  sqcRYGate(q, -2.6057433871501896, 16);
  sqcRZGate(q, -1.9530104516740492, 16);
  sqcRYGate(q, -1.5580943071526911, 17);
  sqcRZGate(q, -1.0114338155389557, 17);
  sqcRYGate(q, 1.234763772213982, 18);
  sqcRZGate(q, -1.7632529809853124, 18);
  sqcRYGate(q, -1.521218991387658, 19);
  sqcRZGate(q, -1.349918643040773, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5048317632577053, 0);
  sqcRZGate(q, -3.1246996326334147, 0);
  sqcRYGate(q, -1.7228918583260149, 1);
  sqcRZGate(q, -1.4843271182007625, 1);
  sqcRYGate(q, -3.1384332398096744, 2);
  sqcRZGate(q, -2.0022039215993948, 2);
  sqcRYGate(q, 3.1407297864879844, 3);
  sqcRZGate(q, 0.06214074678955126, 3);
  sqcRYGate(q, -0.009189218957311063, 4);
  sqcRZGate(q, 1.9640695166325486, 4);
  sqcRYGate(q, 1.587972025680079, 5);
  sqcRZGate(q, 3.1407707319433174, 5);
  sqcRYGate(q, 1.56297312637978, 6);
  sqcRZGate(q, -0.013062697343748653, 6);
  sqcRYGate(q, -1.9481556499117652, 7);
  sqcRZGate(q, 0.006059776460037805, 7);
  sqcRYGate(q, -3.1415021502941562, 8);
  sqcRZGate(q, 1.3155335969894981, 8);
  sqcRYGate(q, 1.5106849802370457, 9);
  sqcRZGate(q, 3.140919811649006, 9);
  sqcRYGate(q, 1.2599062064714752, 10);
  sqcRZGate(q, -0.0015907461164394517, 10);
  sqcRYGate(q, -1.4708864686271363, 11);
  sqcRZGate(q, 3.134775693915856, 11);
  sqcRYGate(q, 1.3506283748615937, 12);
  sqcRZGate(q, 0.0012100824926228881, 12);
  sqcRYGate(q, 1.62344045185296, 13);
  sqcRZGate(q, -3.141301999451529, 13);
  sqcRYGate(q, 0.14284344032237767, 14);
  sqcRZGate(q, -3.038551504011372, 14);
  sqcRYGate(q, -0.0020980139339989985, 15);
  sqcRZGate(q, 2.4565406583664973, 15);
  sqcRYGate(q, 2.764629939785954, 16);
  sqcRZGate(q, -1.8421902160887385, 16);
  sqcRYGate(q, 0.004695810207467788, 17);
  sqcRZGate(q, 2.788436006440548, 17);
  sqcRYGate(q, 1.7371139580456534, 18);
  sqcRZGate(q, -8.027287684918955e-05, 18);
  sqcRYGate(q, 3.1169177485356645, 19);
  sqcRZGate(q, -1.7857512301993497, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.56726555471844, 0);
  sqcRZGate(q, -0.61268179679555, 0);
  sqcRYGate(q, 1.0138651207314882, 1);
  sqcRZGate(q, 2.955743650081922, 1);
  sqcRYGate(q, 1.8874986351686927, 2);
  sqcRZGate(q, 2.0454512351811935, 2);
  sqcRYGate(q, 0.09981151695015722, 3);
  sqcRZGate(q, -1.0333874892814583, 3);
  sqcRYGate(q, -2.598407079142531, 4);
  sqcRZGate(q, -0.0010581861809641662, 4);
  sqcRYGate(q, -1.5757887261940615, 5);
  sqcRZGate(q, 1.561613485606941, 5);
  sqcRYGate(q, 1.5725399982403478, 6);
  sqcRZGate(q, 1.565425865080492, 6);
  sqcRYGate(q, -0.6400251094350926, 7);
  sqcRZGate(q, -3.1307627927954416, 7);
  sqcRYGate(q, 1.9811679671962679, 8);
  sqcRZGate(q, 3.053037756253669, 8);
  sqcRYGate(q, 1.551472142894836, 9);
  sqcRZGate(q, 3.1409854365801424, 9);
  sqcRYGate(q, 1.5732951154524555, 10);
  sqcRZGate(q, 3.139219898257545, 10);
  sqcRYGate(q, -0.09721363863727994, 11);
  sqcRZGate(q, -3.1343142764579244, 11);
  sqcRYGate(q, 0.5645660095589253, 12);
  sqcRZGate(q, 3.140446955451517, 12);
  sqcRYGate(q, -1.4826647779990851, 13);
  sqcRZGate(q, -0.0003154096459296756, 13);
  sqcRYGate(q, -1.5709198579690222, 14);
  sqcRZGate(q, -3.0564610711714124e-05, 14);
  sqcRYGate(q, -3.1379708500736143, 15);
  sqcRZGate(q, -0.6242105892517387, 15);
  sqcRYGate(q, 0.010295147423986321, 16);
  sqcRZGate(q, 2.3170736669028, 16);
  sqcRYGate(q, -3.1367704309856452, 17);
  sqcRZGate(q, 1.7819558802566848, 17);
  sqcRYGate(q, -2.397025083067011, 18);
  sqcRZGate(q, -0.6157279180310741, 18);
  sqcRYGate(q, 3.130478815456363, 19);
  sqcRZGate(q, -2.273073201110415, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.05692512030510066, 0);
  sqcRZGate(q, 2.849647836118491, 0);
  sqcRYGate(q, 3.028020110324173, 1);
  sqcRZGate(q, -0.006667259345336518, 1);
  sqcRYGate(q, -3.136455039499193, 2);
  sqcRZGate(q, 1.9833130500754421, 2);
  sqcRYGate(q, 3.1415406733619373, 3);
  sqcRZGate(q, -0.5254283646980283, 3);
  sqcRYGate(q, -0.6169242412585669, 4);
  sqcRZGate(q, -2.194061562960038, 4);
  sqcRYGate(q, 1.5838058236963892, 5);
  sqcRZGate(q, -0.3293246535688992, 5);
  sqcRYGate(q, -1.5144104055833063, 6);
  sqcRZGate(q, 1.4372099197032346, 6);
  sqcRYGate(q, 0.034454745121764496, 7);
  sqcRZGate(q, 0.0044829267600897775, 7);
  sqcRYGate(q, -3.0917211983365096, 8);
  sqcRZGate(q, -0.08947628143876689, 8);
  sqcRYGate(q, -1.5690338140459, 9);
  sqcRZGate(q, 1.0623471209869302, 9);
  sqcRYGate(q, -1.512655737308112, 10);
  sqcRZGate(q, 3.141548542360931, 10);
  sqcRYGate(q, 1.5688132351174975, 11);
  sqcRZGate(q, -0.0005598422040531403, 11);
  sqcRYGate(q, 1.961250178858834, 12);
  sqcRZGate(q, 4.6232842125308506e-05, 12);
  sqcRYGate(q, 1.5728378347610121, 13);
  sqcRZGate(q, -3.137908812192457, 13);
  sqcRYGate(q, 2.6019482015745248, 14);
  sqcRZGate(q, -0.0008295322273234431, 14);
  sqcRYGate(q, 1.5732515893097232, 15);
  sqcRZGate(q, 0.00021594599369892395, 15);
  sqcRYGate(q, -2.6358709622202205, 16);
  sqcRZGate(q, -0.7986690345842131, 16);
  sqcRYGate(q, 1.7138005395786537, 17);
  sqcRZGate(q, 0.23310747504940113, 17);
  sqcRYGate(q, -1.7419621023920513, 18);
  sqcRZGate(q, -1.907882129973564, 18);
  sqcRYGate(q, -1.0572088211402337, 19);
  sqcRZGate(q, -2.7083421025847367, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.121828018820889, 0);
  sqcRZGate(q, -2.1315159932088488, 0);
  sqcRYGate(q, -2.5762603710104734, 1);
  sqcRZGate(q, -2.791291520401263, 1);
  sqcRYGate(q, 1.4934937182881096, 2);
  sqcRZGate(q, 2.869019511259048, 2);
  sqcRYGate(q, -2.158548311081143, 3);
  sqcRZGate(q, 1.5712593545195832, 3);
  sqcRYGate(q, -3.1415527428660566, 4);
  sqcRZGate(q, -0.6221068562451718, 4);
  sqcRYGate(q, 2.9077585251613414e-05, 5);
  sqcRZGate(q, -0.34433298221266884, 5);
  sqcRYGate(q, -0.0001653747256294914, 6);
  sqcRZGate(q, -1.3560742162195103, 6);
  sqcRYGate(q, 0.00830116720575802, 7);
  sqcRZGate(q, -1.586266101479024, 7);
  sqcRYGate(q, -0.5549924106585185, 8);
  sqcRZGate(q, -1.5696579971735725, 8);
  sqcRYGate(q, 1.9991887915793427e-05, 9);
  sqcRZGate(q, -2.633087841664689, 9);
  sqcRYGate(q, -1.5729489403202903, 10);
  sqcRZGate(q, 1.5709314762591395, 10);
  sqcRYGate(q, -0.4964045120499548, 11);
  sqcRZGate(q, -1.5700617737520801, 11);
  sqcRYGate(q, -2.5932963451632878, 12);
  sqcRZGate(q, -1.5707657406738462, 12);
  sqcRYGate(q, -2.8702781499466057, 13);
  sqcRZGate(q, 1.5744376295629086, 13);
  sqcRYGate(q, 1.5646400326580219, 14);
  sqcRZGate(q, -1.5685640600773336, 14);
  sqcRYGate(q, -1.6675223543511555, 15);
  sqcRZGate(q, -1.5679759822769357, 15);
  sqcRYGate(q, -2.6084584889739886, 16);
  sqcRZGate(q, 1.5753108768726274, 16);
  sqcRYGate(q, 3.1388758366316565, 17);
  sqcRZGate(q, -1.336576750838246, 17);
  sqcRYGate(q, 1.6008638179059593, 18);
  sqcRZGate(q, -1.5633425124443834, 18);
  sqcRYGate(q, 1.4712196332388192, 19);
  sqcRZGate(q, -1.6231573479007364, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.6988249487651721, 0);
  sqcRZGate(q, -3.0425966152890265, 0);
  sqcRYGate(q, 0.012654972748519148, 1);
  sqcRZGate(q, -2.550397975081242, 1);
  sqcRYGate(q, -1.5704053795542219, 2);
  sqcRZGate(q, -2.8485816099552688, 2);
  sqcRYGate(q, -1.570812032474251, 3);
  sqcRZGate(q, 0.8412868307608657, 3);
  sqcRYGate(q, 1.5708449290931823, 4);
  sqcRZGate(q, 0.37592761408610276, 4);
  sqcRYGate(q, 0.015300811267857206, 5);
  sqcRZGate(q, -0.09147616229444623, 5);
  sqcRYGate(q, 3.0787537832225045, 6);
  sqcRZGate(q, -2.805349436807711, 6);
  sqcRYGate(q, 1.571245900122453, 7);
  sqcRZGate(q, -2.2896318557610136, 7);
  sqcRYGate(q, -1.5673244757033071, 8);
  sqcRZGate(q, 2.5194977594259935, 8);
  sqcRYGate(q, 1.570711750586952, 9);
  sqcRZGate(q, 2.559252815525055, 9);
  sqcRYGate(q, 1.5707798898600662, 10);
  sqcRZGate(q, -3.023340964377893, 10);
  sqcRYGate(q, -1.5704060553495875, 11);
  sqcRZGate(q, -2.15558519197349, 11);
  sqcRYGate(q, 1.57061088588748, 12);
  sqcRZGate(q, -1.368312736245863, 12);
  sqcRYGate(q, -1.5702878046561737, 13);
  sqcRZGate(q, -0.7164903364243742, 13);
  sqcRYGate(q, 1.6234964808930545, 14);
  sqcRZGate(q, 1.0459200674709166, 14);
  sqcRYGate(q, 1.5694051075327813, 15);
  sqcRZGate(q, 0.860505271955324, 15);
  sqcRYGate(q, 1.5795553190454916, 16);
  sqcRZGate(q, 1.6134931082449704, 16);
  sqcRYGate(q, -1.5727557473638667, 17);
  sqcRZGate(q, 2.417346924922741, 17);
  sqcRYGate(q, -1.571593574568488, 18);
  sqcRZGate(q, -2.022008653038596, 18);
  sqcRYGate(q, -1.5724598006118677, 19);
  sqcRZGate(q, 0.24957156405471448, 19);

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
