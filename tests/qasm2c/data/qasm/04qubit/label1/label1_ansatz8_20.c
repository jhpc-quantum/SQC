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

  sqcRYGate(q, 2.2156181359348937, 0);
  sqcRYGate(q, 0.4121431622832139, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9221642035160347, 0);
  sqcRYGate(q, -2.828176874059164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9122442291856583, 2);
  sqcRYGate(q, 1.7877355020867478, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1020019061313644, 2);
  sqcRYGate(q, 2.825737794635773, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.670167965951269, 0);
  sqcRYGate(q, -0.35693874705129214, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0214061289749843, 0);
  sqcRYGate(q, 2.8416245483104365, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6269629002897572, 1);
  sqcRYGate(q, 2.3389356557251073, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.29205980399946146, 1);
  sqcRYGate(q, -0.43873406387299013, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1204666702433501, 0);
  sqcRYGate(q, 2.5261886360213484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4162701403129099, 0);
  sqcRYGate(q, 2.725661431061063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5428726843427194, 2);
  sqcRYGate(q, -0.5244400471562755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9983851389994527, 2);
  sqcRYGate(q, 2.2491182412656894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5048476485987177, 0);
  sqcRYGate(q, -3.0007403271445274, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9962550372741088, 0);
  sqcRYGate(q, 1.2743895157995537, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.758131220516802, 1);
  sqcRYGate(q, -0.4315887066068429, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5214756618182002, 1);
  sqcRYGate(q, -0.9474947608852712, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3794168799737463, 0);
  sqcRYGate(q, -0.1259898944521174, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.439754186727712, 0);
  sqcRYGate(q, -1.7437460926898258, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2997636072845779, 2);
  sqcRYGate(q, 2.400604438102587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1266623311274628, 2);
  sqcRYGate(q, -0.3959732459402625, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8294459362148532, 0);
  sqcRYGate(q, -1.2495807523720002, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3247570415459298, 0);
  sqcRYGate(q, 0.755628967876867, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1242046328932227, 1);
  sqcRYGate(q, -2.61716681628385, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4634262512427334, 1);
  sqcRYGate(q, -2.892562591028525, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1372318850015497, 0);
  sqcRYGate(q, 0.8908028451913195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8888473307928483, 0);
  sqcRYGate(q, -0.5813682832004068, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.314320846049774, 2);
  sqcRYGate(q, -2.7435858853815196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.224826833675694, 2);
  sqcRYGate(q, -1.5285173698605763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6744387286878344, 0);
  sqcRYGate(q, 1.1078784284992294, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6575457140140795, 0);
  sqcRYGate(q, -2.196879639378176, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0896780776273411, 1);
  sqcRYGate(q, -0.8289912123723342, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.331983048943716, 1);
  sqcRYGate(q, -1.4992544755776587, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3973778733844268, 0);
  sqcRYGate(q, 1.944780172679791, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.751169273170954, 0);
  sqcRYGate(q, 2.1537489299177066, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7765799144184689, 2);
  sqcRYGate(q, -2.648179778176566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.13997284267405344, 2);
  sqcRYGate(q, 2.8032357678030126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7971052403942243, 0);
  sqcRYGate(q, -1.9799691090086948, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2004125256709424, 0);
  sqcRYGate(q, -1.3152561527703366, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6356675197851018, 1);
  sqcRYGate(q, -2.3401107162143417, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.015648086092831, 1);
  sqcRYGate(q, -1.023918479973258, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6556162026707748, 0);
  sqcRYGate(q, 2.54378869626667, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6107960534821677, 0);
  sqcRYGate(q, 0.6367054119627822, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3382602133496846, 2);
  sqcRYGate(q, 1.222853969069651, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4262397515221974, 2);
  sqcRYGate(q, 1.5549901803257002, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.32361079684447697, 0);
  sqcRYGate(q, 2.5935876169922807, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.185743993836291, 0);
  sqcRYGate(q, -3.1223599930906607, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8322345581554544, 1);
  sqcRYGate(q, 0.9942016557682196, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.934361013066211, 1);
  sqcRYGate(q, 0.7281256205513928, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.680729167991557, 0);
  sqcRYGate(q, -0.540067252353771, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6634358932083462, 0);
  sqcRYGate(q, 0.9002773248961118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6246083952168426, 2);
  sqcRYGate(q, 0.6829355054457815, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.731827346538227, 2);
  sqcRYGate(q, 0.053514612195775274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4017849839579455, 0);
  sqcRYGate(q, 1.0278537570639996, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0489714190841264, 0);
  sqcRYGate(q, -0.42124832166655857, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.13102262690671, 1);
  sqcRYGate(q, -1.9039511546054713, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8921509570953905, 1);
  sqcRYGate(q, 2.10640355246155, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1852105837461813, 0);
  sqcRYGate(q, 0.7376423192546542, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.49989537239257675, 0);
  sqcRYGate(q, -2.0813810954686103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9784183516884812, 2);
  sqcRYGate(q, 1.4459382885330418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6008523872977705, 2);
  sqcRYGate(q, -1.073785758942046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4167640623057025, 0);
  sqcRYGate(q, -1.6672410307899206, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2463587168645622, 0);
  sqcRYGate(q, -0.054690010682874046, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.44219204507612, 1);
  sqcRYGate(q, 2.288082368311663, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.28550725516140535, 1);
  sqcRYGate(q, 1.9756551314397246, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5897944418609711, 0);
  sqcRYGate(q, -0.02363232651476288, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6973838115604192, 0);
  sqcRYGate(q, -2.0114688044357325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7926314657162347, 2);
  sqcRYGate(q, 0.5060446943223571, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9947939816657794, 2);
  sqcRYGate(q, 1.693701897274215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4444891903444845, 0);
  sqcRYGate(q, -2.0560687535509885, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.304549166626674, 0);
  sqcRYGate(q, -2.2449638271569143, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4500369794080403, 1);
  sqcRYGate(q, -1.7044723930193237, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6963583568034517, 1);
  sqcRYGate(q, -1.533710044533011, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0767838683360718, 0);
  sqcRYGate(q, -3.1306041231826756, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2888879616825062, 0);
  sqcRYGate(q, 2.0775826363100913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.840669090908301, 2);
  sqcRYGate(q, -0.06640177342325934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3325195618090384, 2);
  sqcRYGate(q, -0.518208486628518, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1111338628280967, 0);
  sqcRYGate(q, -0.964789340757986, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2847836333569447, 0);
  sqcRYGate(q, 2.496336704880547, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1687773419551366, 1);
  sqcRYGate(q, 2.5681943892621177, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.384730980514203, 1);
  sqcRYGate(q, 3.121968444497499, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0885713181948402, 0);
  sqcRYGate(q, -1.8534802230200396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.018633371693433, 0);
  sqcRYGate(q, 2.5703244825031, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3543592405392193, 2);
  sqcRYGate(q, -2.011276086836832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8601752759083894, 2);
  sqcRYGate(q, 1.9390532311029798, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8817580604248327, 0);
  sqcRYGate(q, 3.0176041055782714, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9473631205319624, 0);
  sqcRYGate(q, -2.5919887616544894, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5421992600205775, 1);
  sqcRYGate(q, -2.092544988938694, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9371126114160203, 1);
  sqcRYGate(q, -1.7475378581694008, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2506973978081262, 0);
  sqcRYGate(q, -0.24504697038668183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.387598026531907, 0);
  sqcRYGate(q, -1.268863739082299, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9090654106122358, 2);
  sqcRYGate(q, 2.7410713495258285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.807120973479932, 2);
  sqcRYGate(q, 0.9778564496345159, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1172247117984413, 0);
  sqcRYGate(q, 3.07784732757106, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7394014870174512, 0);
  sqcRYGate(q, 1.3296253249762424, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7157065237475717, 1);
  sqcRYGate(q, -0.12436619845153775, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8513466234767624, 1);
  sqcRYGate(q, 0.9882021260282876, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9722590475681967, 0);
  sqcRYGate(q, -1.12885216379727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8929145072516715, 0);
  sqcRYGate(q, -2.5237087097515336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.27050972052293876, 2);
  sqcRYGate(q, -2.5248019925434644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6236650290001453, 2);
  sqcRYGate(q, -2.2675611981833117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.33437014034088614, 0);
  sqcRYGate(q, 2.7187846396550537, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6586936742614253, 0);
  sqcRYGate(q, 2.8446816150948586, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3995920465280207, 1);
  sqcRYGate(q, -0.9772051646435491, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0928819187241166, 1);
  sqcRYGate(q, 1.365638972897628, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.02120715913013393, 0);
  sqcRYGate(q, -2.8202377821727826, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.027755844569861, 0);
  sqcRYGate(q, -1.3332560107339673, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7483476233304789, 2);
  sqcRYGate(q, 2.045844745273235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.23902438653094937, 2);
  sqcRYGate(q, -0.23537708525475498, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1665717693827258, 0);
  sqcRYGate(q, -0.5900058917386408, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9579997259578992, 0);
  sqcRYGate(q, -2.0083070454434315, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1805694709954837, 1);
  sqcRYGate(q, -2.661305699080543, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.28943033050142347, 1);
  sqcRYGate(q, -2.99820164611314, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4044678115913951, 0);
  sqcRYGate(q, -1.64779436165392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.26592418625858993, 0);
  sqcRYGate(q, -1.4118178207261054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9635894566620091, 2);
  sqcRYGate(q, 1.4591948049674102, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.928635236542806, 2);
  sqcRYGate(q, 1.7164011892042126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.035101784804448144, 0);
  sqcRYGate(q, 2.0532040945931707, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1007615361546472, 0);
  sqcRYGate(q, 0.002416376429718703, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.43147889803145567, 1);
  sqcRYGate(q, -1.532720336809082, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7644881332636897, 1);
  sqcRYGate(q, 2.2753541454683566, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5821801997474543, 0);
  sqcRYGate(q, -1.6377715656796419, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.715920905264584, 0);
  sqcRYGate(q, 0.6006927786431362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0850755607703233, 2);
  sqcRYGate(q, -1.4606080952801912, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8646429039372353, 2);
  sqcRYGate(q, 2.436908036146625, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5879483528103715, 0);
  sqcRYGate(q, 0.5670339191462238, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.871757606403166, 0);
  sqcRYGate(q, 2.033879594040326, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0052486703465844, 1);
  sqcRYGate(q, 2.9693700838826955, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6523020286237022, 1);
  sqcRYGate(q, -1.924237116728209, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.044658937269376, 0);
  sqcRYGate(q, 2.8352084605123653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0839569919155547, 0);
  sqcRYGate(q, -1.4941093092592286, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7518512425037476, 2);
  sqcRYGate(q, 0.5190493259334117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.698265452028579, 2);
  sqcRYGate(q, -3.1067652144039575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0223257882720143, 0);
  sqcRYGate(q, -2.480271375262843, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2923774080896546, 0);
  sqcRYGate(q, 0.45651473335730497, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7479821017401915, 1);
  sqcRYGate(q, 3.0141280705632756, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.082405772119192, 1);
  sqcRYGate(q, 1.7686458458093943, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.754394804338154, 0);
  sqcRYGate(q, 0.14711938621333237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7481046571660919, 0);
  sqcRYGate(q, -1.8589952509071994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9543771731196979, 2);
  sqcRYGate(q, 0.6842641327061414, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6953542502979962, 2);
  sqcRYGate(q, -1.1679752402573247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5313472693753276, 0);
  sqcRYGate(q, 1.6769258259065458, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9537064797968866, 0);
  sqcRYGate(q, -1.8171427455361426, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3820837923781757, 1);
  sqcRYGate(q, -1.4111360086897884, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6515708378325491, 1);
  sqcRYGate(q, 1.5987323422683657, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.14086161760111882, 0);
  sqcRYGate(q, -0.3793982687995525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2585785574304422, 0);
  sqcRYGate(q, 2.8274845265171087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1692310496565943, 2);
  sqcRYGate(q, -1.4676515646007973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1004793282973464, 2);
  sqcRYGate(q, 2.5695757551662526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9956532620496248, 0);
  sqcRYGate(q, 2.7188287318320286, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9788534671769631, 0);
  sqcRYGate(q, 2.685357613361487, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4547731019595185, 1);
  sqcRYGate(q, 2.7436212282776267, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1441398782180199, 1);
  sqcRYGate(q, -1.401365533428944, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.922078664602787, 0);
  sqcRYGate(q, 2.3683187438068307, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9435003575960863, 0);
  sqcRYGate(q, 0.4080839304038113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1689038181294089, 2);
  sqcRYGate(q, 2.688121001292826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1410011212725761, 2);
  sqcRYGate(q, -2.7859027976893773, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3786537414751923, 0);
  sqcRYGate(q, 0.2684022333487208, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9585893261490719, 0);
  sqcRYGate(q, -1.2656890812453332, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7452348015187872, 1);
  sqcRYGate(q, 0.324117537719909, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9685410277688423, 1);
  sqcRYGate(q, -1.3606795278324177, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5632089669376237, 0);
  sqcRYGate(q, 1.6709383518485643, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9276461209752258, 0);
  sqcRYGate(q, 0.8523732902077783, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3006618012299338, 2);
  sqcRYGate(q, 2.9908144436855113, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.147084390688887, 2);
  sqcRYGate(q, -1.9060896969028065, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.861674734537182, 0);
  sqcRYGate(q, 2.2567509024022137, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7307152664633625, 0);
  sqcRYGate(q, 1.4517359687391167, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7120297184207022, 1);
  sqcRYGate(q, 1.0584938017790246, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.400521753696232, 1);
  sqcRYGate(q, -1.3104742028829994, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.718817740470117, 0);
  sqcRYGate(q, -2.755377143501666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2198238847306273, 0);
  sqcRYGate(q, 0.9639767616297856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.515141428357201, 2);
  sqcRYGate(q, 2.315929246046892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.19513458035680564, 2);
  sqcRYGate(q, 0.8264104764452819, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.348830653566174, 0);
  sqcRYGate(q, 2.440537679764764, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6376449819679169, 0);
  sqcRYGate(q, -2.784934497563123, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.253988705667897, 1);
  sqcRYGate(q, -0.5308163698511272, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4305837432350472, 1);
  sqcRYGate(q, 0.32253442733849536, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5783790919790284, 0);
  sqcRYGate(q, -2.994703871648367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6880806512242147, 0);
  sqcRYGate(q, -0.7600809837778879, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6074028024262217, 2);
  sqcRYGate(q, -0.3531049579374936, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7880202915939707, 2);
  sqcRYGate(q, -1.7992119490343907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.189835933301498, 0);
  sqcRYGate(q, -1.3079588289757549, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.018955598722682418, 0);
  sqcRYGate(q, -1.9656391756406044, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7578137747644016, 1);
  sqcRYGate(q, 0.00768223033219291, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5194558773507093, 1);
  sqcRYGate(q, 1.061932499905377, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.282866488629295, 0);
  sqcRYGate(q, -2.154553217118357, 1);
  sqcRYGate(q, 1.8388481532372056, 2);
  sqcRYGate(q, -0.7238373120370775, 3);

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
