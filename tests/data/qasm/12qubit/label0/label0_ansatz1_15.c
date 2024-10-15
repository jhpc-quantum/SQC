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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 2.211178262384949, 0);
  sqcRZGate(q, -2.0404900715631316, 0);
  sqcRYGate(q, 0.0005455198081953938, 1);
  sqcRZGate(q, -2.918847618580699, 1);
  sqcRYGate(q, -1.1795263009678782, 2);
  sqcRZGate(q, -0.33661141648581333, 2);
  sqcRYGate(q, -1.964608535330086, 3);
  sqcRZGate(q, -0.882953070494301, 3);
  sqcRYGate(q, -0.03063125028891787, 4);
  sqcRZGate(q, 0.8309373605370521, 4);
  sqcRYGate(q, -3.140297653968352, 5);
  sqcRZGate(q, 0.28351477095297545, 5);
  sqcRYGate(q, -1.790995629461725, 6);
  sqcRZGate(q, -2.717641618968788, 6);
  sqcRYGate(q, -0.8765665052694924, 7);
  sqcRZGate(q, -0.20596428644231263, 7);
  sqcRYGate(q, 2.2234639483455076, 8);
  sqcRZGate(q, 1.5750391785059454, 8);
  sqcRYGate(q, 0.0019047887734986446, 9);
  sqcRZGate(q, -1.2692899453005717, 9);
  sqcRYGate(q, -0.37387128366315636, 10);
  sqcRZGate(q, 0.6957385864036392, 10);
  sqcRYGate(q, -2.615253248308888, 11);
  sqcRZGate(q, -1.3506898473460003, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.1014326813933075, 0);
  sqcRZGate(q, -2.7989878671118946, 0);
  sqcRYGate(q, 3.1403934674187175, 1);
  sqcRZGate(q, -2.9448689882888046, 1);
  sqcRYGate(q, 0.14765361557072615, 2);
  sqcRZGate(q, 0.2225325755750545, 2);
  sqcRYGate(q, -1.0121996902854524, 3);
  sqcRZGate(q, -1.5152870528839266, 3);
  sqcRYGate(q, 1.1943517407201654, 4);
  sqcRZGate(q, -1.748702578813123, 4);
  sqcRYGate(q, 0.002282880556533338, 5);
  sqcRZGate(q, 2.0238661229506083, 5);
  sqcRYGate(q, 2.415638812369001, 6);
  sqcRZGate(q, 0.023979408670222743, 6);
  sqcRYGate(q, 2.183481193493236, 7);
  sqcRZGate(q, -0.7424482359881412, 7);
  sqcRYGate(q, -1.4817650370394913, 8);
  sqcRZGate(q, -2.3788919512839084, 8);
  sqcRYGate(q, -3.139925159653328, 9);
  sqcRZGate(q, -1.9933941208091346, 9);
  sqcRYGate(q, 2.7653826468393934, 10);
  sqcRZGate(q, 2.5594580595958742, 10);
  sqcRYGate(q, 2.4413387309617707, 11);
  sqcRZGate(q, -1.4397593187926738, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.44537668730732705, 0);
  sqcRZGate(q, 0.024846068153366298, 0);
  sqcRYGate(q, 0.001238807083587368, 1);
  sqcRZGate(q, -1.3683839061433887, 1);
  sqcRYGate(q, -1.2315231308841341, 2);
  sqcRZGate(q, -0.5334823788609501, 2);
  sqcRYGate(q, -0.031341534099074114, 3);
  sqcRZGate(q, 3.0777798746073604, 3);
  sqcRYGate(q, 0.03539128832497074, 4);
  sqcRZGate(q, -2.668725466802118, 4);
  sqcRYGate(q, 1.842300747423282, 5);
  sqcRZGate(q, 0.7656467168639205, 5);
  sqcRYGate(q, -1.943659645517336, 6);
  sqcRZGate(q, -0.8204634308737369, 6);
  sqcRYGate(q, 1.9817820504353074, 7);
  sqcRZGate(q, -0.6960742692711098, 7);
  sqcRYGate(q, 2.384213942941823, 8);
  sqcRZGate(q, -0.4174410159372526, 8);
  sqcRYGate(q, -3.1393469211852247, 9);
  sqcRZGate(q, -0.021164397382153588, 9);
  sqcRYGate(q, -2.8969747024571233, 10);
  sqcRZGate(q, 2.599934892480967, 10);
  sqcRYGate(q, -1.7546999405374233, 11);
  sqcRZGate(q, -1.6303645899648747, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.2660237511161707, 0);
  sqcRZGate(q, 2.2428667654418053, 0);
  sqcRYGate(q, -3.14093722971436, 1);
  sqcRZGate(q, -2.853577621132224, 1);
  sqcRYGate(q, 2.4589668299745226, 2);
  sqcRZGate(q, -2.676969450877543, 2);
  sqcRYGate(q, -1.1741416145991064, 3);
  sqcRZGate(q, -1.1859094822645089, 3);
  sqcRYGate(q, 2.993115087597282, 4);
  sqcRZGate(q, 2.9657614746735357, 4);
  sqcRYGate(q, -0.2358101737390612, 5);
  sqcRZGate(q, -1.2134164031518626, 5);
  sqcRYGate(q, 3.1249833722198934, 6);
  sqcRZGate(q, -3.1103953532347783, 6);
  sqcRYGate(q, 1.414493037278942, 7);
  sqcRZGate(q, -1.5744520862482034, 7);
  sqcRYGate(q, -1.245708814616428, 8);
  sqcRZGate(q, 2.4887707398546746, 8);
  sqcRYGate(q, 0.003475560295086475, 9);
  sqcRZGate(q, 3.0378974785878547, 9);
  sqcRYGate(q, -0.3015614352062923, 10);
  sqcRZGate(q, -2.059432487788861, 10);
  sqcRYGate(q, 2.471167407003676, 11);
  sqcRZGate(q, 2.6504052419837136, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.8529210630565576, 0);
  sqcRZGate(q, -2.582950241249946, 0);
  sqcRYGate(q, 5.067450931547003e-05, 1);
  sqcRZGate(q, 0.34496619188910516, 1);
  sqcRYGate(q, -1.165245442211051, 2);
  sqcRZGate(q, -0.41075157814554597, 2);
  sqcRYGate(q, -0.008872880453852488, 3);
  sqcRZGate(q, -1.7915910099572532, 3);
  sqcRYGate(q, 2.782667100747903, 4);
  sqcRZGate(q, -1.733775663109004, 4);
  sqcRYGate(q, 0.8503558502241254, 5);
  sqcRZGate(q, -1.044759925025839, 5);
  sqcRYGate(q, -0.01626066501730339, 6);
  sqcRZGate(q, 1.6044366519315267, 6);
  sqcRYGate(q, -1.1628517307239923, 7);
  sqcRZGate(q, 1.067663357836401, 7);
  sqcRYGate(q, 2.6894982320352483, 8);
  sqcRZGate(q, -2.274786065073008, 8);
  sqcRYGate(q, -0.008827371489683393, 9);
  sqcRZGate(q, 0.8782664482015058, 9);
  sqcRYGate(q, 0.1040254830774566, 10);
  sqcRZGate(q, -1.6100839687221216, 10);
  sqcRYGate(q, 0.9930428997705132, 11);
  sqcRZGate(q, 2.362261307413474, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.3730395277815761, 0);
  sqcRZGate(q, 1.816956150703474, 0);
  sqcRYGate(q, -0.0034282470659681096, 1);
  sqcRZGate(q, -2.105409072395676, 1);
  sqcRYGate(q, 1.4490053243963348, 2);
  sqcRZGate(q, -1.2702654802106563, 2);
  sqcRYGate(q, 0.9986728308562876, 3);
  sqcRZGate(q, 0.9195187450142347, 3);
  sqcRYGate(q, -0.6866435132913251, 4);
  sqcRZGate(q, 1.7005044812474717, 4);
  sqcRYGate(q, 0.6366932891158666, 5);
  sqcRZGate(q, 0.4000851140942751, 5);
  sqcRYGate(q, -2.927991811748791, 6);
  sqcRZGate(q, -0.815456819329814, 6);
  sqcRYGate(q, -2.4928522656980694, 7);
  sqcRZGate(q, 0.25739975257818987, 7);
  sqcRYGate(q, 0.39880754676987734, 8);
  sqcRZGate(q, 2.739421415396091, 8);
  sqcRYGate(q, 0.0384946785151107, 9);
  sqcRZGate(q, -2.987897665400651, 9);
  sqcRYGate(q, -3.0219495673195125, 10);
  sqcRZGate(q, 2.333187887256885, 10);
  sqcRYGate(q, -2.8747553607730985, 11);
  sqcRZGate(q, 1.2319917497406052, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.45917923036738, 0);
  sqcRZGate(q, -2.059446343681384, 0);
  sqcRYGate(q, -3.139006264160393, 1);
  sqcRZGate(q, 0.7201791303656089, 1);
  sqcRYGate(q, 1.5914952840937024, 2);
  sqcRZGate(q, 0.8756461103588622, 2);
  sqcRYGate(q, 2.4667233388712777, 3);
  sqcRZGate(q, 0.39842282332920415, 3);
  sqcRYGate(q, 3.018535343079617, 4);
  sqcRZGate(q, 2.030113952475963, 4);
  sqcRYGate(q, 1.8704723610449552, 5);
  sqcRZGate(q, -0.13403536122572648, 5);
  sqcRYGate(q, -0.1348734575879823, 6);
  sqcRZGate(q, -2.6826154360423544, 6);
  sqcRYGate(q, -2.647025614717632, 7);
  sqcRZGate(q, -0.8207317151946159, 7);
  sqcRYGate(q, -2.156013810601344, 8);
  sqcRZGate(q, 2.795838948702535, 8);
  sqcRYGate(q, 0.0006531509774925226, 9);
  sqcRZGate(q, -1.5322925762083113, 9);
  sqcRYGate(q, -3.127485735765363, 10);
  sqcRZGate(q, -3.035085610158045, 10);
  sqcRYGate(q, 1.6008593990574989, 11);
  sqcRZGate(q, -2.0316510875166705, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.15882332709507, 0);
  sqcRZGate(q, -1.8913552574537995, 0);
  sqcRYGate(q, -0.4744561491872261, 1);
  sqcRZGate(q, -0.7390385896051734, 1);
  sqcRYGate(q, 0.7602382560746959, 2);
  sqcRZGate(q, -2.300762821264347, 2);
  sqcRYGate(q, -3.046642190518853, 3);
  sqcRZGate(q, 2.277501042825354, 3);
  sqcRYGate(q, -1.2834433975668893, 4);
  sqcRZGate(q, -2.5916993562287, 4);
  sqcRYGate(q, -2.4186604151020656, 5);
  sqcRZGate(q, -2.9165031599818754, 5);
  sqcRYGate(q, -0.041556003303337086, 6);
  sqcRZGate(q, 2.0165039967495204, 6);
  sqcRYGate(q, 1.2275569271939615, 7);
  sqcRZGate(q, -2.2540938432177384, 7);
  sqcRYGate(q, 0.8213667092736368, 8);
  sqcRZGate(q, -1.5081800696795522, 8);
  sqcRYGate(q, 0.004201261288092617, 9);
  sqcRZGate(q, -2.80743713822061, 9);
  sqcRYGate(q, 2.95653668982655, 10);
  sqcRZGate(q, -0.4800820524559563, 10);
  sqcRYGate(q, -1.488001698997591, 11);
  sqcRZGate(q, 2.0654475467142, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.0970526783018162, 0);
  sqcRZGate(q, -1.0095132291966555, 0);
  sqcRYGate(q, -1.1459582203339842, 1);
  sqcRZGate(q, 0.45543043894893304, 1);
  sqcRYGate(q, -0.0031000887980896508, 2);
  sqcRZGate(q, -0.14717866426180978, 2);
  sqcRYGate(q, -3.0635678857391397, 3);
  sqcRZGate(q, -2.761494850839142, 3);
  sqcRYGate(q, -3.073376288554472, 4);
  sqcRZGate(q, -2.6495809262028707, 4);
  sqcRYGate(q, -2.832159900748129, 5);
  sqcRZGate(q, -1.2190336933009023, 5);
  sqcRYGate(q, 0.003526017074830356, 6);
  sqcRZGate(q, 1.2855848837589678, 6);
  sqcRYGate(q, -3.1047167396001374, 7);
  sqcRZGate(q, -1.9274816708061517, 7);
  sqcRYGate(q, -0.40664252935437606, 8);
  sqcRZGate(q, 0.31040352820151806, 8);
  sqcRYGate(q, -1.187139718237832, 9);
  sqcRZGate(q, -0.05053507390740109, 9);
  sqcRYGate(q, -3.062386054180933, 10);
  sqcRZGate(q, -2.5605752551988474, 10);
  sqcRYGate(q, 2.414691474958847, 11);
  sqcRZGate(q, 0.3827840994765974, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.5707899045212713, 0);
  sqcRZGate(q, 0.6964718317566616, 0);
  sqcRYGate(q, -0.442353289231101, 1);
  sqcRZGate(q, -0.758658347054184, 1);
  sqcRYGate(q, 3.136580711284594, 2);
  sqcRZGate(q, -0.39423667998830214, 2);
  sqcRYGate(q, 1.712358382280014, 3);
  sqcRZGate(q, 2.923765788567535, 3);
  sqcRYGate(q, -1.8990192238290564, 4);
  sqcRZGate(q, -2.5265394316560696, 4);
  sqcRYGate(q, 2.7846937229241306, 5);
  sqcRZGate(q, 2.8119403175262927, 5);
  sqcRYGate(q, 3.136002309456294, 6);
  sqcRZGate(q, 0.5027243043642913, 6);
  sqcRYGate(q, 1.9861298426518212, 7);
  sqcRZGate(q, 0.9014396006035024, 7);
  sqcRYGate(q, -0.3939996191469735, 8);
  sqcRZGate(q, -3.082706462404625, 8);
  sqcRYGate(q, 0.4333605018387141, 9);
  sqcRZGate(q, -1.3362260260642094, 9);
  sqcRYGate(q, 0.3976469191256549, 10);
  sqcRZGate(q, 1.3812888218414994, 10);
  sqcRYGate(q, -0.08701278222133002, 11);
  sqcRZGate(q, -2.6870094877725768, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.5875416469432679, 0);
  sqcRZGate(q, -0.016745014238289956, 0);
  sqcRYGate(q, 1.9273946203163606, 1);
  sqcRZGate(q, -0.8955024900501192, 1);
  sqcRYGate(q, -3.0698193980853885, 2);
  sqcRZGate(q, -2.7339145763019475, 2);
  sqcRYGate(q, 2.615885068278313, 3);
  sqcRZGate(q, -3.110344655979177, 3);
  sqcRYGate(q, 0.008244594408759909, 4);
  sqcRZGate(q, -2.631443195605991, 4);
  sqcRYGate(q, -1.5031665739309008, 5);
  sqcRZGate(q, 0.4519847463426779, 5);
  sqcRYGate(q, 1.8813860959525324, 6);
  sqcRZGate(q, 1.2637874981988872, 6);
  sqcRYGate(q, 0.015191142892016098, 7);
  sqcRZGate(q, 1.300033356899175, 7);
  sqcRYGate(q, -2.448717433984694, 8);
  sqcRZGate(q, 3.085985369933119, 8);
  sqcRYGate(q, 3.1343936966428956, 9);
  sqcRZGate(q, -2.896137874788883, 9);
  sqcRYGate(q, 3.141207005040913, 10);
  sqcRZGate(q, -1.326567749511701, 10);
  sqcRYGate(q, 0.3501509481185415, 11);
  sqcRZGate(q, 1.1202968576644938, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.1567128198309784, 0);
  sqcRZGate(q, 0.8546666244956128, 0);
  sqcRYGate(q, 2.120029767414234, 1);
  sqcRZGate(q, -0.3136629207044958, 1);
  sqcRYGate(q, -0.004831096133541779, 2);
  sqcRZGate(q, 2.6703200188567213, 2);
  sqcRYGate(q, 1.4107869372144868, 3);
  sqcRZGate(q, 1.67146159721559, 3);
  sqcRYGate(q, 3.018654311300046, 4);
  sqcRZGate(q, 2.1599060646106176, 4);
  sqcRYGate(q, 1.9318192268457688, 5);
  sqcRZGate(q, 1.0575156237316943, 5);
  sqcRYGate(q, -3.1365479399295, 6);
  sqcRZGate(q, -1.838623055939582, 6);
  sqcRYGate(q, -3.13076628796749, 7);
  sqcRZGate(q, -2.9253686110357915, 7);
  sqcRYGate(q, 2.8497970522511316, 8);
  sqcRZGate(q, -0.4551049070390967, 8);
  sqcRYGate(q, -0.4997138039027673, 9);
  sqcRZGate(q, -2.8212199815293184, 9);
  sqcRYGate(q, 2.561750512250736, 10);
  sqcRZGate(q, -0.7450663811123844, 10);
  sqcRYGate(q, -0.55901171990919, 11);
  sqcRZGate(q, -0.10379708301103463, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.018779994184378, 0);
  sqcRZGate(q, -2.7184691265473733, 0);
  sqcRYGate(q, -2.6557907487676817, 1);
  sqcRZGate(q, -2.0401142563630588, 1);
  sqcRYGate(q, 2.5981412187584665, 2);
  sqcRZGate(q, 1.8921408047000638, 2);
  sqcRYGate(q, 1.5256497307563375, 3);
  sqcRZGate(q, -3.0126479325115545, 3);
  sqcRYGate(q, 3.140760571876217, 4);
  sqcRZGate(q, 1.7911771904989156, 4);
  sqcRYGate(q, 2.965436451417391, 5);
  sqcRZGate(q, -1.904259382647352, 5);
  sqcRYGate(q, 0.3730823196528661, 6);
  sqcRZGate(q, -0.12028749580884401, 6);
  sqcRYGate(q, -3.094450100704728, 7);
  sqcRZGate(q, -1.8049836791880125, 7);
  sqcRYGate(q, 1.8595327049070831, 8);
  sqcRZGate(q, 0.2598933083150529, 8);
  sqcRYGate(q, -0.01680392283564186, 9);
  sqcRZGate(q, -0.29807830410944636, 9);
  sqcRYGate(q, 1.9893785392593017, 10);
  sqcRZGate(q, -0.2110478131445621, 10);
  sqcRYGate(q, 2.287456188713091, 11);
  sqcRZGate(q, 0.6882038623697496, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5413641773396545, 0);
  sqcRZGate(q, -2.7866402066860663, 0);
  sqcRYGate(q, -2.6905395903071674, 1);
  sqcRZGate(q, -2.025502659572494, 1);
  sqcRYGate(q, 3.134869634258005, 2);
  sqcRZGate(q, 2.9839598369162252, 2);
  sqcRYGate(q, 1.8800839362303785, 3);
  sqcRZGate(q, 0.09739257055922312, 3);
  sqcRYGate(q, 0.04098296702515202, 4);
  sqcRZGate(q, -1.2686138951423125, 4);
  sqcRYGate(q, 1.4190668973417067, 5);
  sqcRZGate(q, -2.961973579639389, 5);
  sqcRYGate(q, -0.23380246881735012, 6);
  sqcRZGate(q, -0.6669077125731242, 6);
  sqcRYGate(q, -0.007750266998153953, 7);
  sqcRZGate(q, 1.1885265010937125, 7);
  sqcRYGate(q, -3.013407378259999, 8);
  sqcRZGate(q, -2.2957415028419725, 8);
  sqcRYGate(q, 0.0022530304492319477, 9);
  sqcRZGate(q, 2.6186600708720427, 9);
  sqcRYGate(q, 0.057284239650940295, 10);
  sqcRZGate(q, 0.2013365232160816, 10);
  sqcRYGate(q, 1.190139637680957, 11);
  sqcRZGate(q, 1.1111287229763454, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.276195994165358, 0);
  sqcRZGate(q, 2.1240869082661735, 0);
  sqcRYGate(q, 1.251264293306303, 1);
  sqcRZGate(q, -1.7413322204818993, 1);
  sqcRYGate(q, 0.0037095050873228175, 2);
  sqcRZGate(q, 0.35994013062035496, 2);
  sqcRYGate(q, -1.1332385335052617, 3);
  sqcRZGate(q, -0.3702384785414265, 3);
  sqcRYGate(q, -0.0036101201775444736, 4);
  sqcRZGate(q, 0.5963303265125824, 4);
  sqcRYGate(q, -2.9503793972458476, 5);
  sqcRZGate(q, -0.36339092450900706, 5);
  sqcRYGate(q, -3.111644630763699, 6);
  sqcRZGate(q, -0.627341344987471, 6);
  sqcRYGate(q, -2.88277802595235, 7);
  sqcRZGate(q, -0.2677394432785079, 7);
  sqcRYGate(q, 0.04794851716181902, 8);
  sqcRZGate(q, -3.039277434383613, 8);
  sqcRYGate(q, 2.270845851508163, 9);
  sqcRZGate(q, -2.0012696446590734, 9);
  sqcRYGate(q, 1.6610816907875297, 10);
  sqcRZGate(q, -2.9871194091938458, 10);
  sqcRYGate(q, 1.2130488152632761, 11);
  sqcRZGate(q, -0.8939885450175824, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.4332304652485153, 0);
  sqcRZGate(q, -1.3577459508747982, 0);
  sqcRYGate(q, 1.5864192819769452, 1);
  sqcRZGate(q, -2.0902223244501457, 1);
  sqcRYGate(q, 3.139029469673125, 2);
  sqcRZGate(q, 0.6365874101218446, 2);
  sqcRYGate(q, 1.4371505053373492, 3);
  sqcRZGate(q, -0.8791333265102299, 3);
  sqcRYGate(q, 0.32263252063445874, 4);
  sqcRZGate(q, -1.245864912523955, 4);
  sqcRYGate(q, 2.5398506775824456, 5);
  sqcRZGate(q, 1.2000777586126112, 5);
  sqcRYGate(q, 0.21332694809297695, 6);
  sqcRZGate(q, 0.06016434746172018, 6);
  sqcRYGate(q, -0.012868549008437334, 7);
  sqcRZGate(q, 2.245848985446141, 7);
  sqcRYGate(q, -3.1373610126987095, 8);
  sqcRZGate(q, -2.808276425763781, 8);
  sqcRYGate(q, -0.006003953104046409, 9);
  sqcRZGate(q, 0.5038400513475185, 9);
  sqcRYGate(q, -2.525399988119874, 10);
  sqcRZGate(q, -1.0531758734279824, 10);
  sqcRYGate(q, -2.533718515804503, 11);
  sqcRZGate(q, -0.19694409253275869, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.0619726276542405, 0);
  sqcRZGate(q, 2.8714600647352677, 0);
  sqcRYGate(q, 0.035897779009527, 1);
  sqcRZGate(q, 2.1878370943980103, 1);
  sqcRYGate(q, 3.13015264658037, 2);
  sqcRZGate(q, -2.826208866527914, 2);
  sqcRYGate(q, 0.5398666970066515, 3);
  sqcRZGate(q, -3.0835636956734653, 3);
  sqcRYGate(q, -0.034399295889596004, 4);
  sqcRZGate(q, 0.19161528223287586, 4);
  sqcRYGate(q, 0.04858650955386956, 5);
  sqcRZGate(q, 2.7597310277658527, 5);
  sqcRYGate(q, -2.088590885605236, 6);
  sqcRZGate(q, -1.927598467621578, 6);
  sqcRYGate(q, 1.990685661872929, 7);
  sqcRZGate(q, 0.6829568027856904, 7);
  sqcRYGate(q, -0.46864010206258483, 8);
  sqcRZGate(q, 2.3454633028302503, 8);
  sqcRYGate(q, -0.1250652144393305, 9);
  sqcRZGate(q, -1.0542983509000736, 9);
  sqcRYGate(q, -2.390101736365466, 10);
  sqcRZGate(q, 2.521889539935569, 10);
  sqcRYGate(q, -1.4416949963745884, 11);
  sqcRZGate(q, 1.6391522810647097, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.34207466475336623, 0);
  sqcRZGate(q, 1.4248653971922531, 0);
  sqcRYGate(q, 1.5921910919541915, 1);
  sqcRZGate(q, -1.4676301477866822, 1);
  sqcRYGate(q, -0.004379795874801752, 2);
  sqcRZGate(q, 2.014362523482145, 2);
  sqcRYGate(q, 3.0293743007332763, 3);
  sqcRZGate(q, 2.6723423808280917, 3);
  sqcRYGate(q, -3.089605932667174, 4);
  sqcRZGate(q, -0.8433199605826289, 4);
  sqcRYGate(q, 0.45917143879049166, 5);
  sqcRZGate(q, 2.64883912492069, 5);
  sqcRYGate(q, 0.015080967449306648, 6);
  sqcRZGate(q, -2.1255922067258934, 6);
  sqcRYGate(q, -3.1172305221827994, 7);
  sqcRZGate(q, 2.432293844941937, 7);
  sqcRYGate(q, 0.0021134438550474144, 8);
  sqcRZGate(q, -1.0816436579419664, 8);
  sqcRYGate(q, 3.141010060342157, 9);
  sqcRZGate(q, 0.8842456156924441, 9);
  sqcRYGate(q, 0.032426310263958404, 10);
  sqcRZGate(q, 0.09346942531297397, 10);
  sqcRYGate(q, -0.8007145845220813, 11);
  sqcRZGate(q, 0.15938465077046374, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.1318636394152195, 0);
  sqcRZGate(q, -1.0390279809112526, 0);
  sqcRYGate(q, 0.9445761020833173, 1);
  sqcRZGate(q, 2.134148767890524, 1);
  sqcRYGate(q, -3.0128683556568063, 2);
  sqcRZGate(q, -1.5832692208315127, 2);
  sqcRYGate(q, -2.5861901707257395, 3);
  sqcRZGate(q, -2.518363085201233, 3);
  sqcRYGate(q, 1.170412759887017, 4);
  sqcRZGate(q, 3.130737496446233, 4);
  sqcRYGate(q, 0.2017481368360098, 5);
  sqcRZGate(q, 0.4123835956084789, 5);
  sqcRYGate(q, 0.12129159232358955, 6);
  sqcRZGate(q, -1.2479241127957696, 6);
  sqcRYGate(q, 1.448960593304781, 7);
  sqcRZGate(q, 1.1501538444067796, 7);
  sqcRYGate(q, 2.744459826250278, 8);
  sqcRZGate(q, 2.7511488231035397, 8);
  sqcRYGate(q, -0.4222303581196183, 9);
  sqcRZGate(q, -1.9230974058220751, 9);
  sqcRYGate(q, -0.9794491918679605, 10);
  sqcRZGate(q, -2.3891603153857077, 10);
  sqcRYGate(q, -3.091180383046947, 11);
  sqcRZGate(q, -1.4751545338410565, 11);

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
