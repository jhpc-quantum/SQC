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

  sqcRYGate(q, 0.8489183827716706, 0);
  sqcRYGate(q, -1.8753764026973414, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7293371620232696, 0);
  sqcRYGate(q, -0.37704097386393537, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4809411018883718, 0);
  sqcRYGate(q, -1.447967728542372, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.221605065811649, 0);
  sqcRYGate(q, 2.4236486925005587, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.597212352792473, 0);
  sqcRYGate(q, 1.1601512132913507, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9259044194971748, 0);
  sqcRYGate(q, -1.4956746995518406, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.361689468144293, 1);
  sqcRYGate(q, -0.8352267295281468, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.317436751587199, 1);
  sqcRYGate(q, -1.9849873574094126, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.585715931110144, 1);
  sqcRYGate(q, 1.12605883747658, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.473154405911261, 1);
  sqcRYGate(q, -1.9199441844037555, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.300665337442275, 2);
  sqcRYGate(q, 2.6905624218267565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4264281000874257, 2);
  sqcRYGate(q, -0.24139524634316792, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.36258758277606973, 0);
  sqcRYGate(q, -2.8061925509638908, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10502164649103295, 0);
  sqcRYGate(q, 3.056428097198347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8864770576917523, 0);
  sqcRYGate(q, -0.6152087816216896, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8494640597121944, 0);
  sqcRYGate(q, 1.3415012099834607, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5242970857371443, 0);
  sqcRYGate(q, 0.37254466794110463, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2805764980850407, 0);
  sqcRYGate(q, 1.1054336818743495, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.40420210011833385, 1);
  sqcRYGate(q, -1.521263791218744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1276880020782687, 1);
  sqcRYGate(q, -2.0867708247462464, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2118337006942026, 1);
  sqcRYGate(q, -0.41824252633277315, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.891013648307216, 1);
  sqcRYGate(q, 2.9566393971086873, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.44604379837527747, 2);
  sqcRYGate(q, 2.7932787648297874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0016200683102428, 2);
  sqcRYGate(q, 0.8300142579067283, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6975084281024735, 0);
  sqcRYGate(q, 2.1193755056311305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9970542315100375, 0);
  sqcRYGate(q, -2.92035973165839, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5267660240202896, 0);
  sqcRYGate(q, -0.15507040049058674, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6895084194533703, 0);
  sqcRYGate(q, -0.3075373065648699, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.42616939167433243, 0);
  sqcRYGate(q, -0.06439564984416642, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9337665143937341, 0);
  sqcRYGate(q, -1.0108069992135231, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.063800572812587, 1);
  sqcRYGate(q, 2.518899880635506, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8298691276330015, 1);
  sqcRYGate(q, -1.848985880257944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5340473338472815, 1);
  sqcRYGate(q, 0.9921273353945949, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.287702218003335, 1);
  sqcRYGate(q, -2.8275359173487824, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.46027087763164537, 2);
  sqcRYGate(q, -0.6697749424571132, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22113096251779663, 2);
  sqcRYGate(q, -2.2845799319206774, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.090162272905179, 0);
  sqcRYGate(q, 0.296801040111407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.009977217724708361, 0);
  sqcRYGate(q, -1.8775709313276199, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9297190635456363, 0);
  sqcRYGate(q, -1.1683093520196506, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5546683682254154, 0);
  sqcRYGate(q, 1.4775736430695368, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8352794444755596, 0);
  sqcRYGate(q, -0.02982983135531292, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0071089976688112, 0);
  sqcRYGate(q, -1.2479467950098915, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.42290221370765924, 1);
  sqcRYGate(q, -1.561655629205517, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.595591483915978, 1);
  sqcRYGate(q, 2.1233862889117203, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.99551359186147, 1);
  sqcRYGate(q, 1.0002092036462962, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7011059441835616, 1);
  sqcRYGate(q, 2.1850860900621947, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7198030504380073, 2);
  sqcRYGate(q, -2.4037616838176015, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6983553632308817, 2);
  sqcRYGate(q, 1.8368907839757729, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5471034584717263, 0);
  sqcRYGate(q, 2.4249076528366915, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.999128029859891, 0);
  sqcRYGate(q, -0.029989833937535917, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3740677700428874, 0);
  sqcRYGate(q, -1.974649239946253, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9825100601091517, 0);
  sqcRYGate(q, -1.9517053017492885, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.03485639819809894, 0);
  sqcRYGate(q, -1.0451071871917952, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5997592076152559, 0);
  sqcRYGate(q, -1.6099396587608117, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.24555311889343912, 1);
  sqcRYGate(q, -1.6679387852309357, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2938724678764449, 1);
  sqcRYGate(q, -0.9651217698953257, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9623162104795245, 1);
  sqcRYGate(q, -3.110560113522762, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.300495734724606, 1);
  sqcRYGate(q, 1.6348095960919933, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.46433822932585217, 2);
  sqcRYGate(q, -0.4656189309891756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1633148837424567, 2);
  sqcRYGate(q, 1.284583084812973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3462524948968417, 0);
  sqcRYGate(q, -2.259436200596733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9686823199018333, 0);
  sqcRYGate(q, 0.09581253668658807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.547351572597057, 0);
  sqcRYGate(q, 2.4319795149486527, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9680740314761886, 0);
  sqcRYGate(q, -1.9154738297364033, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.02517621457173382, 0);
  sqcRYGate(q, 2.551053965847255, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5169800081420908, 0);
  sqcRYGate(q, -1.8018257646102207, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3925476517354616, 1);
  sqcRYGate(q, 0.4966093709172741, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3154193173414126, 1);
  sqcRYGate(q, 2.3788286142508013, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.470701152231857, 1);
  sqcRYGate(q, -0.9582874408152382, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6750886539632104, 1);
  sqcRYGate(q, 0.508291987258919, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.032832022257273705, 2);
  sqcRYGate(q, -2.9935990279192013, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9540220436731017, 2);
  sqcRYGate(q, -0.8412102811911978, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.35774026612895504, 0);
  sqcRYGate(q, 3.0997147671278187, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8704665600171229, 0);
  sqcRYGate(q, -0.6935729824008631, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.702748943878687, 0);
  sqcRYGate(q, -0.7133101363957122, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8869889174175665, 0);
  sqcRYGate(q, 1.3624159724798321, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2232939906747808, 0);
  sqcRYGate(q, -2.4841108487501833, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9020593982802545, 0);
  sqcRYGate(q, 2.785943412499106, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6563230557067838, 1);
  sqcRYGate(q, -2.117797258129499, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2597715331062895, 1);
  sqcRYGate(q, -1.2396037654605205, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6382996224995656, 1);
  sqcRYGate(q, -2.6005648286279457, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7785143024817773, 1);
  sqcRYGate(q, 1.8693575170531052, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5363626120464504, 2);
  sqcRYGate(q, -3.0749119667261025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09527849414965316, 2);
  sqcRYGate(q, 2.18612583952785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.536459777590692, 0);
  sqcRYGate(q, -0.037925007532840706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.064440670864278, 0);
  sqcRYGate(q, -2.621331147444019, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8152168824873058, 0);
  sqcRYGate(q, -0.5489737829634229, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0953938828737493, 0);
  sqcRYGate(q, -0.401181472445014, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5770497984451426, 0);
  sqcRYGate(q, 2.1576664227873756, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5385384502188, 0);
  sqcRYGate(q, 2.623904331973779, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.34839631581716, 1);
  sqcRYGate(q, 1.2678636030179085, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.381533846144534, 1);
  sqcRYGate(q, -0.879596276308622, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4503702868674773, 1);
  sqcRYGate(q, -1.5368086805932135, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9720407154529137, 1);
  sqcRYGate(q, -1.2316511670148644, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.316599645748349, 2);
  sqcRYGate(q, 2.94353127784187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7555616402038743, 2);
  sqcRYGate(q, -1.71842362798985, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.36071548473176124, 0);
  sqcRYGate(q, 1.4828015777920234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6662091283305394, 0);
  sqcRYGate(q, 2.4523735282514565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6038768805623631, 0);
  sqcRYGate(q, 1.3258249509948756, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8859630390669126, 0);
  sqcRYGate(q, 1.4436808281320324, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0521812144583542, 0);
  sqcRYGate(q, -2.178595487106314, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.930395191697042, 0);
  sqcRYGate(q, -1.4125302699670974, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7760666565146828, 1);
  sqcRYGate(q, -0.002631607965895455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7461121596991696, 1);
  sqcRYGate(q, -0.16381924987016294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0479793967223356, 1);
  sqcRYGate(q, -0.9485456647310669, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.964165922063251, 1);
  sqcRYGate(q, 2.0600146437204616, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4056188624557412, 2);
  sqcRYGate(q, 0.8660527254572445, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9740790912102261, 2);
  sqcRYGate(q, -0.5871827317124183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.162333017275703, 0);
  sqcRYGate(q, -0.2911284026696448, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.024088805355918, 0);
  sqcRYGate(q, -0.44343898265854875, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.358238763829445, 0);
  sqcRYGate(q, -1.8262326499943746, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1650819508921522, 0);
  sqcRYGate(q, -2.7705530270506946, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.42239342472227787, 0);
  sqcRYGate(q, 1.636869940257597, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6138621815944294, 0);
  sqcRYGate(q, -2.9400461952173083, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.059423041386668, 1);
  sqcRYGate(q, 2.429591585385617, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.18554711666441473, 1);
  sqcRYGate(q, 1.9650122771973009, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0957419803233233, 1);
  sqcRYGate(q, -1.606142874186144, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.624280620326206, 1);
  sqcRYGate(q, -0.9308034264868247, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9194096976069996, 2);
  sqcRYGate(q, 3.046218372746169, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.425102723088667, 2);
  sqcRYGate(q, -1.7836230376978923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3717850917308219, 0);
  sqcRYGate(q, 2.507718171635343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.26578388920249685, 0);
  sqcRYGate(q, -1.8655894261089196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0401777950597935, 0);
  sqcRYGate(q, -1.0381767378875442, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7090458929917636, 0);
  sqcRYGate(q, -2.2639769280163407, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.203957705742538, 0);
  sqcRYGate(q, -0.36316306837578877, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.578542822971023, 0);
  sqcRYGate(q, -1.9570562011913797, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2395127045547591, 1);
  sqcRYGate(q, 2.2681251976059267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9884560625305987, 1);
  sqcRYGate(q, 1.4224052410921548, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.480515351587355, 1);
  sqcRYGate(q, 0.02724291178472082, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8000510103569405, 1);
  sqcRYGate(q, 2.5157619269831604, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6156389624077114, 2);
  sqcRYGate(q, 2.4232669193704943, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2737890747537211, 2);
  sqcRYGate(q, -0.6980036935064547, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7385054699430205, 0);
  sqcRYGate(q, -0.5027852689561494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3341227055305116, 0);
  sqcRYGate(q, -0.20388587096468336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0337605448386893, 0);
  sqcRYGate(q, -0.03204128567789066, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2799574469851587, 0);
  sqcRYGate(q, 1.5223123557290605, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.27899861683534155, 0);
  sqcRYGate(q, -0.44801532643200215, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.314333422640653, 0);
  sqcRYGate(q, -1.8236376609360085, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4065313480583406, 1);
  sqcRYGate(q, 0.8260676165014108, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.508598672353715, 1);
  sqcRYGate(q, -0.44458478950768576, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.415415991284429, 1);
  sqcRYGate(q, 1.3380034317376046, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.922079003669803, 1);
  sqcRYGate(q, -0.5593491953999957, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.274051488625279, 2);
  sqcRYGate(q, 2.535532103333739, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6295243279202, 2);
  sqcRYGate(q, -0.056549372680501114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6594662931920761, 0);
  sqcRYGate(q, -1.664125650933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0721299663675046, 0);
  sqcRYGate(q, 2.5041747649098167, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9607743382194744, 0);
  sqcRYGate(q, -1.2726903213055778, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3057387925133055, 0);
  sqcRYGate(q, -0.9034538493938927, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6186179507767138, 0);
  sqcRYGate(q, 1.0747935316863555, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.034002594798221535, 0);
  sqcRYGate(q, -1.8002889524492482, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.06202138888076082, 1);
  sqcRYGate(q, -2.4985181234410385, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5388753433724753, 1);
  sqcRYGate(q, 0.2973402768707487, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9928735389101169, 1);
  sqcRYGate(q, 0.1984524437634335, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3020123761175346, 1);
  sqcRYGate(q, -1.5878476662165877, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0421709847203937, 2);
  sqcRYGate(q, -2.171927965032985, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1803586514118596, 2);
  sqcRYGate(q, 1.934369532201453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.94426106051014, 0);
  sqcRYGate(q, 2.0275158885761133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.464313856118176, 0);
  sqcRYGate(q, 2.199934657970843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5288552207198993, 0);
  sqcRYGate(q, 0.3029471183387251, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4871952588661643, 0);
  sqcRYGate(q, -1.0592927421158496, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6211013842937327, 0);
  sqcRYGate(q, 3.1148976231554233, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9803451609117124, 0);
  sqcRYGate(q, 0.12424245061788436, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.577866189892984, 1);
  sqcRYGate(q, -1.7954170659270505, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0547104128716556, 1);
  sqcRYGate(q, 0.231745963521217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7495610201703488, 1);
  sqcRYGate(q, -0.42698301052776794, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.652657002234343, 1);
  sqcRYGate(q, -1.8812389437439645, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6622146875509067, 2);
  sqcRYGate(q, 2.14928726674942, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.163497983907428, 2);
  sqcRYGate(q, -0.5894623215415641, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.108023248866805, 0);
  sqcRYGate(q, 2.7985679748602728, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0793492633225787, 0);
  sqcRYGate(q, -0.22815758925542973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1551768274694409, 0);
  sqcRYGate(q, -0.6359945821056403, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1372970846561117, 0);
  sqcRYGate(q, -0.5315937395714698, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.346297098862981, 0);
  sqcRYGate(q, 1.3730182310141372, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2366903945228298, 0);
  sqcRYGate(q, -1.8514224561343364, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.641045483722325, 1);
  sqcRYGate(q, -0.9975796978050804, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.406998785755782, 1);
  sqcRYGate(q, 1.837306660529662, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9796980941421214, 1);
  sqcRYGate(q, -2.5481708363252262, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6105950599117597, 1);
  sqcRYGate(q, -0.030436305263305954, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9340809646455366, 2);
  sqcRYGate(q, 0.8785838815409317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4510289622418739, 2);
  sqcRYGate(q, 2.620885009569983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9938339078550413, 0);
  sqcRYGate(q, -2.2667236001585715, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8879818866007343, 0);
  sqcRYGate(q, -3.0369158431696164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0050039838166205, 0);
  sqcRYGate(q, 2.3468699583131922, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5140132349950273, 0);
  sqcRYGate(q, -2.0431942738768103, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2436302648788864, 0);
  sqcRYGate(q, 3.0269659454379974, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5495214046990498, 0);
  sqcRYGate(q, -0.8810817901388289, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.306466417950169, 1);
  sqcRYGate(q, 1.6358018620297603, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2400251355324574, 1);
  sqcRYGate(q, -1.975133638150134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6107644112689536, 1);
  sqcRYGate(q, -2.8146176376316845, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.476035990475217, 1);
  sqcRYGate(q, -0.462262651017614, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9529090453347044, 2);
  sqcRYGate(q, -1.5825678178221312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0180716265581262, 2);
  sqcRYGate(q, 2.1340078681959556, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4488780321763404, 0);
  sqcRYGate(q, -2.7737948313209797, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.63441557504948, 0);
  sqcRYGate(q, -1.50792813775967, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9852994239695638, 0);
  sqcRYGate(q, 2.949655447851369, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2868853429558987, 0);
  sqcRYGate(q, -1.0938254658654607, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5397935614605053, 0);
  sqcRYGate(q, 2.807836454670009, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.32910115960000025, 0);
  sqcRYGate(q, 1.1988249026247155, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.571590288579729, 1);
  sqcRYGate(q, 0.7722070755199469, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.023310310234343, 1);
  sqcRYGate(q, -2.4309403708215167, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0508867848386525, 1);
  sqcRYGate(q, -1.2789597055910669, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4217360238851393, 1);
  sqcRYGate(q, 0.46255093691904436, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0099550332076301, 2);
  sqcRYGate(q, 2.1409261000271784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0582389433201618, 2);
  sqcRYGate(q, 2.5599341886158435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2600216381055567, 0);
  sqcRYGate(q, -0.39329378167835877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.856905482451863, 0);
  sqcRYGate(q, -2.3982859140333423, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.564814619471036, 0);
  sqcRYGate(q, -1.065269747089256, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7076984085005033, 0);
  sqcRYGate(q, -1.0817689190030189, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.704360663789425, 0);
  sqcRYGate(q, 0.9352514174807979, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4562492255231985, 0);
  sqcRYGate(q, -1.4086331708229798, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2347722493992093, 1);
  sqcRYGate(q, 1.9789425567957522, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.005704383244119712, 1);
  sqcRYGate(q, 2.828732427603778, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7050068598764074, 1);
  sqcRYGate(q, -0.3013268877387975, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3679438252346667, 1);
  sqcRYGate(q, 2.6983198178266994, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.71762163786064, 2);
  sqcRYGate(q, -1.5796570478137344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.25905528970907366, 2);
  sqcRYGate(q, 3.0693736420189928, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2079020371482567, 0);
  sqcRYGate(q, 0.15497537977956857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.131060985043788, 0);
  sqcRYGate(q, -0.731767053355802, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.023305508909137525, 0);
  sqcRYGate(q, -0.7775765864237432, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.125713285784717, 0);
  sqcRYGate(q, -0.6605428049279128, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6850603811957496, 0);
  sqcRYGate(q, 1.8414716693920834, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1965514318115007, 0);
  sqcRYGate(q, -1.990976795468776, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.48474744163898, 1);
  sqcRYGate(q, -2.170337008672586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.022187804195095, 1);
  sqcRYGate(q, 1.1761662509259485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1719462680400401, 1);
  sqcRYGate(q, 3.1381010831882237, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0176731256708527, 1);
  sqcRYGate(q, -1.497923324903379, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.012610360921204192, 2);
  sqcRYGate(q, 1.1128922108161436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4210505530120772, 2);
  sqcRYGate(q, 2.800120259368128, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2846302042204423, 0);
  sqcRYGate(q, 2.6487297249183426, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.824588044720241, 0);
  sqcRYGate(q, -2.90508406446524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8431371757266355, 0);
  sqcRYGate(q, 2.8355302655632983, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.017027739811037, 0);
  sqcRYGate(q, 0.49109280338659733, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8294785156936566, 0);
  sqcRYGate(q, -0.4965143877073075, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.110801570231346, 0);
  sqcRYGate(q, -2.3344043557670933, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.004478555169479, 1);
  sqcRYGate(q, 1.635475091006075, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1193751931252326, 1);
  sqcRYGate(q, -3.0795232904598935, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.17664388432679523, 1);
  sqcRYGate(q, -2.032228038154058, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.43838405820508, 1);
  sqcRYGate(q, -2.753888367634184, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7718615416606376, 2);
  sqcRYGate(q, -0.45923023158372944, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.05338158521704, 2);
  sqcRYGate(q, 1.58575245199913, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2454641270662697, 0);
  sqcRYGate(q, 2.7906309167977716, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5861202020653242, 0);
  sqcRYGate(q, -2.3759286552492855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6742100449745163, 0);
  sqcRYGate(q, -2.3971724696678702, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.571518273290951, 0);
  sqcRYGate(q, 1.1615101963080343, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1184516859158986, 0);
  sqcRYGate(q, -1.1691551998649858, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8331213557757228, 0);
  sqcRYGate(q, 0.8866667444375782, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6783079470031521, 1);
  sqcRYGate(q, -2.3985282685068574, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.70859511204213, 1);
  sqcRYGate(q, 2.6098143789320654, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5822818862058072, 1);
  sqcRYGate(q, 0.7592907563140061, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.028781370973208098, 1);
  sqcRYGate(q, 2.324791048243678, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.08203178320570989, 2);
  sqcRYGate(q, -1.98780928181354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9612656493586034, 2);
  sqcRYGate(q, 2.2512952590595665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6933304103111593, 0);
  sqcRYGate(q, -3.059958959090407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5185310046732985, 0);
  sqcRYGate(q, 2.976434182254864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.39353284221920154, 0);
  sqcRYGate(q, -0.7821414187061996, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1157125294806987, 0);
  sqcRYGate(q, 1.8438795892157172, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4154372606312353, 0);
  sqcRYGate(q, 1.1079622574879773, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2226810073375738, 0);
  sqcRYGate(q, -1.3592474432388197, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0659213771933944, 1);
  sqcRYGate(q, 1.1436294494145767, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4555664873815797, 1);
  sqcRYGate(q, -1.7419622003751931, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.175255426687439, 1);
  sqcRYGate(q, -2.871426834989834, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9137082278752789, 1);
  sqcRYGate(q, -2.4252980678960117, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7575105165586438, 2);
  sqcRYGate(q, -0.371485543428113, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.07166374293927, 2);
  sqcRYGate(q, 1.0564730375330784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3919350839865996, 0);
  sqcRYGate(q, -1.4197107361170431, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.842142448305772, 0);
  sqcRYGate(q, 2.1484523542839917, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9505707487631438, 0);
  sqcRYGate(q, -1.6096248461616414, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.06151257572935175, 0);
  sqcRYGate(q, 1.1108383120565488, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8403878991463501, 0);
  sqcRYGate(q, 0.2793396901117715, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.1130809857166835, 0);
  sqcRYGate(q, 1.6505466074146273, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.41411814282625464, 1);
  sqcRYGate(q, 2.0112810106808907, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3539650976100353, 1);
  sqcRYGate(q, -1.6820089224645756, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7816594953946978, 1);
  sqcRYGate(q, 2.688633525673637, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7681347515067163, 1);
  sqcRYGate(q, -1.6463679531454032, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.078668788053826, 2);
  sqcRYGate(q, 1.0138453164299879, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6716514359671286, 2);
  sqcRYGate(q, 2.3127456424713095, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2946407169915615, 0);
  sqcRYGate(q, 0.45381467249209084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9835035504794234, 0);
  sqcRYGate(q, -2.554465783823528, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0835021462471044, 0);
  sqcRYGate(q, -2.720848622058382, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.057715170633128, 0);
  sqcRYGate(q, -2.8751796652982358, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8656144102208148, 0);
  sqcRYGate(q, -0.22901582457943287, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.52484618637383, 0);
  sqcRYGate(q, 1.0218260757966884, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6071758274549877, 1);
  sqcRYGate(q, 1.9951501060684083, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7689746196834754, 1);
  sqcRYGate(q, -1.548206190274265, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4066706577002879, 1);
  sqcRYGate(q, -3.116615981544334, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.254583275366305, 1);
  sqcRYGate(q, -1.3297036914232563, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5660984321499516, 2);
  sqcRYGate(q, -1.3841381904621397, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5883672748695883, 2);
  sqcRYGate(q, 0.19347091711904102, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.037956512128539, 0);
  sqcRYGate(q, -1.3079004908410468, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8595622028670356, 0);
  sqcRYGate(q, -0.9647420921979183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1002556763674853, 0);
  sqcRYGate(q, -0.03295100935479667, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1086803390062525, 0);
  sqcRYGate(q, 2.469673652842361, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4775265649604075, 0);
  sqcRYGate(q, -0.37642600993355657, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9278507524033, 0);
  sqcRYGate(q, -0.8141219487627526, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5525001203550364, 1);
  sqcRYGate(q, 0.12740798622071203, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5110941763962464, 1);
  sqcRYGate(q, 0.05054560910667942, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0509016093034484, 1);
  sqcRYGate(q, -0.06899339327547427, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9076880618636745, 1);
  sqcRYGate(q, -3.0782121602295205, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8637654738109495, 2);
  sqcRYGate(q, 2.0166726228660616, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7505589996543156, 2);
  sqcRYGate(q, 1.2378483884828722, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7393963728239722, 0);
  sqcRYGate(q, -0.4632181214415437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9106078615097422, 0);
  sqcRYGate(q, -2.5225033887033717, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.030961632139245406, 0);
  sqcRYGate(q, 2.705885008697251, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.902334845178569, 0);
  sqcRYGate(q, 2.161835826328381, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.303054657385004, 0);
  sqcRYGate(q, 2.261240517763804, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3630932601617198, 0);
  sqcRYGate(q, -0.9861508466024983, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5324149387359267, 1);
  sqcRYGate(q, -1.4056454378907173, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0543892172181537, 1);
  sqcRYGate(q, 0.14750804106231552, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3938640416659105, 1);
  sqcRYGate(q, 1.291378738995518, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.905586046008434, 1);
  sqcRYGate(q, 0.5239011761437284, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5647189415070637, 2);
  sqcRYGate(q, -1.631181402216801, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6418815624014855, 2);
  sqcRYGate(q, 2.704299030409938, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8611385378125043, 0);
  sqcRYGate(q, 0.47873752779324735, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4457437271801048, 0);
  sqcRYGate(q, 1.2884363891138726, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.45360642872862883, 0);
  sqcRYGate(q, -1.6477732687079856, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7621700759338106, 0);
  sqcRYGate(q, 1.7841770045369516, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5545186616028555, 0);
  sqcRYGate(q, -0.9762111407009204, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5971320227459156, 0);
  sqcRYGate(q, -0.3403034413253119, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8693593548538635, 1);
  sqcRYGate(q, -2.811446737351283, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6590025699324076, 1);
  sqcRYGate(q, -1.1177161132539353, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7765182386422966, 1);
  sqcRYGate(q, -0.9268489390091688, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8790060104669912, 1);
  sqcRYGate(q, 2.7575521702101975, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.889773262993593, 2);
  sqcRYGate(q, -1.9921265580766212, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7574891085589617, 2);
  sqcRYGate(q, -3.0148521493818428, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6652660707725415, 0);
  sqcRYGate(q, 0.7477482635767113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.841874182811061, 0);
  sqcRYGate(q, 0.022551290955187042, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8771537329984618, 0);
  sqcRYGate(q, 3.1402628066202896, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5111441391051594, 0);
  sqcRYGate(q, 1.7560306360036297, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1875694229087854, 0);
  sqcRYGate(q, 2.259006880818763, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9191771894852012, 0);
  sqcRYGate(q, -2.3570382338282267, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7614138900452344, 1);
  sqcRYGate(q, 1.0621916268957787, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4966068114415, 1);
  sqcRYGate(q, -1.1051867735610479, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.10231292106294, 1);
  sqcRYGate(q, 0.9198608062980194, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.075404844459252, 1);
  sqcRYGate(q, 0.631335947242121, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3825873561037443, 2);
  sqcRYGate(q, 0.2926890089537375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8086100669346455, 2);
  sqcRYGate(q, -1.4789366665937758, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7596964278310825, 0);
  sqcRYGate(q, -0.8119297525055865, 1);
  sqcRYGate(q, 1.4192955423834528, 2);
  sqcRYGate(q, -0.5127623670752748, 3);

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
