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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.05876843261793855, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.031344820144740174, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.07008701193769605, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.06039406480257915, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.003204347950447208, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.029007008860956862, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.08557966801495027, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.07394211521426305, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.07804885129276787, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.1334839121531491, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.4573601649344215, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.026857703732998547, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.25791453548428134, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.23634411032037508, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.2730987747711895, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.10788356366160186, 0);
  sqcRZGate(q, -0.05674153249972251, 1);
  sqcRZGate(q, 0.05396000099413009, 2);
  sqcRZGate(q, 0.04053032493239364, 3);
  sqcRZGate(q, 0.01082830889172017, 4);
  sqcRZGate(q, -0.15726906614454567, 5);
  sqcRZGate(q, -0.1533904158044574, 6);
  sqcRZGate(q, -0.0813595652372773, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.07334894097791149, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.11678022356450565, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.045051024116832365, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.024939197378983754, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.12808705093583664, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.24579721208379282, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.2802072722212881, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.05347780846965607, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.1118112442640552, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.013655153321895047, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.41812164639587496, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.0165253296489605, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.011628927488432307, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.11968272392537525, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.2265266317932057, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.16779585909298883, 0);
  sqcRZGate(q, 0.04453436418291877, 1);
  sqcRZGate(q, 0.0658165046730782, 2);
  sqcRZGate(q, 0.17165733972309252, 3);
  sqcRZGate(q, 0.031960193429605946, 4);
  sqcRZGate(q, -0.15273711793170244, 5);
  sqcRZGate(q, -0.17058871904238224, 6);
  sqcRZGate(q, -0.15488922136339653, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.05791012705189257, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.11916010641078402, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.17027734829946908, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.006341142986633183, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.01772888047523081, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.16597762195038798, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.3707177276916729, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.06540818053023574, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.2048855314657005, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.056824533840588644, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.46174827480601777, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.024701130429662172, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.08094438413424082, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.11512144687148423, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.29853099108718434, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.21595538828688737, 0);
  sqcRZGate(q, 0.07412976869987552, 1);
  sqcRZGate(q, 0.0018032070462959925, 2);
  sqcRZGate(q, 0.2159431839829419, 3);
  sqcRZGate(q, 0.021079020967346374, 4);
  sqcRZGate(q, -0.17612535635126192, 5);
  sqcRZGate(q, -0.03996968672280196, 6);
  sqcRZGate(q, -0.10955352959388978, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.03545301025226199, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.0685059687664155, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.007194361472237942, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.01111907427866736, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.052168111818890577, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.05401535039016766, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.28510787951544936, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.02635151950013909, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.2608072617896534, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.08271681940129347, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.3779153608346809, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.042416251738215664, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.018078260300850513, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.07944264654417692, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.3391475452907723, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.15565359182301, 0);
  sqcRZGate(q, 0.06774509384328087, 1);
  sqcRZGate(q, -0.07409089528330055, 2);
  sqcRZGate(q, 0.20503526322652263, 3);
  sqcRZGate(q, -0.02115744508739944, 4);
  sqcRZGate(q, -0.22901945039687766, 5);
  sqcRZGate(q, 0.06690301958848482, 6);
  sqcRZGate(q, -0.05774906456457333, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.012715130005903082, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.06523067166144268, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.02418588800287206, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.04494553486089917, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.021622833464468545, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.1294377473757111, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.13493303879768523, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.010674778112820475, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.3281645663189622, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.02178996993846959, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.18310303845376977, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.06020407210360501, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.061974699583055265, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.01620803672830489, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.34428001298221683, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.22948877311510216, 0);
  sqcRZGate(q, 0.08495316820255211, 1);
  sqcRZGate(q, 5.799696919654967e-05, 2);
  sqcRZGate(q, 0.2764031111129696, 3);
  sqcRZGate(q, -0.047029628265461934, 4);
  sqcRZGate(q, -0.11642502441521481, 5);
  sqcRZGate(q, 0.052399002957935106, 6);
  sqcRZGate(q, 0.03922384622418814, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.013965760326979907, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.0028415567328069877, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.008067912429206897, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.056198669078643806, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.016726162557571613, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.038361881531919884, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.09507175860008596, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.06134818521213601, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.32691880574218257, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.05799060481922652, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.04366320903396812, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.01998808901466751, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.09014945819083667, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.12877134862127804, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.36149072173338803, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.20288253372993492, 0);
  sqcRZGate(q, 0.019445430924288742, 1);
  sqcRZGate(q, -0.006892173307480962, 2);
  sqcRZGate(q, 0.24193596976884435, 3);
  sqcRZGate(q, -0.09188980037110255, 4);
  sqcRZGate(q, -0.11898713945720335, 5);
  sqcRZGate(q, 0.059261692943002535, 6);
  sqcRZGate(q, 0.09799619971107908, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.06905598529206275, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.16140797461723355, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.00094728117019923, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.03393819109169763, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.10379811955266607, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.06879017818772287, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.0896050573459793, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.1331634896835514, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.22454076363964395, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.004122553353040794, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.042281748921424354, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.05136989846249133, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.05960751682252308, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.038927582063330406, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.37687204786071005, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.22772277081613343, 0);
  sqcRZGate(q, -0.03569758686570925, 1);
  sqcRZGate(q, -0.0030012017434328095, 2);
  sqcRZGate(q, 0.24109977688072315, 3);
  sqcRZGate(q, -0.10653381886513684, 4);
  sqcRZGate(q, -0.15071255878354484, 5);
  sqcRZGate(q, 0.048324450605136286, 6);
  sqcRZGate(q, 0.15581862396245308, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.016982850308085013, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.22012692780286877, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.042848839480479566, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.07323843562724358, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.28215702891198935, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.12015653225695948, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.19037281118565133, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.10639443283604416, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.17830209201553104, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.00665056106028703, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.07796291567937443, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.002699006914278408, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.11482154134313705, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.0863077344736885, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.3351132397689021, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.164107872520896, 0);
  sqcRZGate(q, -0.09998884664410264, 1);
  sqcRZGate(q, -0.07682223371483975, 2);
  sqcRZGate(q, 0.1948336209870107, 3);
  sqcRZGate(q, -0.24816456496337047, 4);
  sqcRZGate(q, -0.12569494432543044, 5);
  sqcRZGate(q, -0.05607523303326923, 6);
  sqcRZGate(q, 0.14253947253370497, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.05794885130292124, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.373955224737376, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.0751844499113427, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.1589494202709001, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.28098699576333996, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.11095902266679679, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.3135462821533683, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.009896189064402193, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.0031683545020037454, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.004815805297861585, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.15985547144924697, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.11501425918305005, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.05599005208063652, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.10842033123347014, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.3437477206995653, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.1357709092995628, 0);
  sqcRZGate(q, -0.09710383342940845, 1);
  sqcRZGate(q, -0.171760176000981, 2);
  sqcRZGate(q, 0.0468012509229235, 3);
  sqcRZGate(q, -0.26222344705505296, 4);
  sqcRZGate(q, -0.1161352340237678, 5);
  sqcRZGate(q, -0.08730847189820355, 6);
  sqcRZGate(q, 0.01869138164381459, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.022156271101024777, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.5434056786953009, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.020449666836025178, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.023858714322779192, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.5151204543666019, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.24599087738045464, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.35685892026286714, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.04998404377787617, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.08693458446442891, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.030206459262652908, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2748052320440201, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.028360145679948705, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.196413781392001, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.00247909593712047, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.3005325630985603, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.11383638732381178, 0);
  sqcRZGate(q, -0.1656431440852472, 1);
  sqcRZGate(q, -0.2577563125766357, 2);
  sqcRZGate(q, -0.04893693872873664, 3);
  sqcRZGate(q, -0.2719091988580774, 4);
  sqcRZGate(q, -0.16531298608529416, 5);
  sqcRZGate(q, 0.05235325625179593, 6);
  sqcRZGate(q, -0.01726946142548901, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.010618680232500512, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.6932160386990068, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.02252278421409403, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.0324357964244614, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.4417364004661122, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.31457759602580126, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.4534976319396439, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.14331126376925254, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.35551197123493683, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.021842951902189635, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.39274614177359657, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.4065267573978174, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.6609551952572021, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.059419687111849875, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.1684985236683731, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.04730998297020624, 0);
  sqcRZGate(q, -0.001672219779505066, 1);
  sqcRZGate(q, -0.4781365615734002, 2);
  sqcRZGate(q, -0.18913792736886068, 3);
  sqcRZGate(q, -0.3095202600023196, 4);
  sqcRZGate(q, -0.05040710670868706, 5);
  sqcRZGate(q, 0.05140315774761786, 6);
  sqcRZGate(q, -0.019249442313070894, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.03636462815285327, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.5883449701084131, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.27334479909187115, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.06219073197866625, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.07783163886989071, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.11214003057392617, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.4135208844670916, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.29778723940230223, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.3777605863089339, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.07287679193788683, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.22094987955408368, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.6872339992902184, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 1.0663216369506225, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.26807762045499367, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.09979994404610981, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.10371431816420859, 0);
  sqcRZGate(q, 0.1491450752247507, 1);
  sqcRZGate(q, -0.21821347422131063, 2);
  sqcRZGate(q, -0.2561973821636265, 3);
  sqcRZGate(q, -0.2285579480305198, 4);
  sqcRZGate(q, 0.045750309257600395, 5);
  sqcRZGate(q, 0.043296214712863317, 6);
  sqcRZGate(q, -0.003542260203429905, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.09275422439906326, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.5687593787959966, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.7518592572332551, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.08344347519068332, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.2812861260504667, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.15069088580379272, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.1194363169636151, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.3404433505080099, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.35372415488626346, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.3888452591011498, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.000971380741688774, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.3527928365734661, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.879257274294589, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.10298812073942472, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.0814217591292283, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.09388932594254226, 0);
  sqcRZGate(q, 0.12986705422222528, 1);
  sqcRZGate(q, 0.0628462858530844, 2);
  sqcRZGate(q, -0.3404438551489726, 3);
  sqcRZGate(q, -0.18634479216676575, 4);
  sqcRZGate(q, -0.006285701710360521, 5);
  sqcRZGate(q, 0.018084637456492844, 6);
  sqcRZGate(q, 0.07652705746360754, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.10274656104256279, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.07382371008498005, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.9429981646937337, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.34626251169678723, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.8787436789182091, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.2540593264202701, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.07664749200088843, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.29696371898495094, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.30496925986710893, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.8212891860858781, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5407499563729368, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.21175518694189124, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.7330124878958985, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.019789194509370604, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.05509389219223411, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.10479113657406999, 0);
  sqcRZGate(q, 0.08232541445031384, 1);
  sqcRZGate(q, 0.9418712149134946, 2);
  sqcRZGate(q, -0.3018863885985426, 3);
  sqcRZGate(q, 0.11808740648369054, 4);
  sqcRZGate(q, 0.013751266973162294, 5);
  sqcRZGate(q, -0.027519761842808743, 6);
  sqcRZGate(q, 0.11808235896902994, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.14398512061359175, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.032383617968182066, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.36015456813647084, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.6059577697398255, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.734275157547464, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.48514882474095655, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.1270826675501349, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2291208425206793, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.37960305795692456, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.6589505561932976, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.0927578880410702, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.02254444904196105, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.7474378237878817, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.15125371219835523, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.1327626445227473, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.09450817724322401, 0);
  sqcRZGate(q, -0.22308863895812853, 1);
  sqcRZGate(q, 0.7455210593637207, 2);
  sqcRZGate(q, -0.12320091482247375, 3);
  sqcRZGate(q, -0.16867039800052475, 4);
  sqcRZGate(q, -0.028692860864443004, 5);
  sqcRZGate(q, -0.022606568731306183, 6);
  sqcRZGate(q, 0.05130693056551946, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.21795974152514644, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.058115049984971016, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.1907884288534456, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.1998870558572337, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.8540757800495983, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.5624306077308502, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.004207632993401773, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.25132396319492223, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.36827989945648787, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.6918194189845359, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.349171513410691, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.07818625200142021, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.5187779159829732, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.06657522592229097, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.1778049007021774, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.004979125038937127, 0);
  sqcRZGate(q, -0.5362724602672468, 1);
  sqcRZGate(q, 0.19854591727506418, 2);
  sqcRZGate(q, -0.33545402121236767, 3);
  sqcRZGate(q, 0.0049875479817842565, 4);
  sqcRZGate(q, 0.03578819912010348, 5);
  sqcRZGate(q, 0.023921907249333484, 6);
  sqcRZGate(q, 0.12923097098093372, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.10369901971629984, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.40232302892939686, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.11941800159714507, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.19232611207766473, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.7085570859573043, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.5280215827800796, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.12499400355466099, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2594821262805509, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.34321426812951994, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.15945055608964023, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9931146516065262, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.39378907436647864, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.62691888353192, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.5108052057043809, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.23652600838908056, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.028899179194917513, 0);
  sqcRZGate(q, -0.7946795872490211, 1);
  sqcRZGate(q, -0.2026510572234673, 2);
  sqcRZGate(q, -0.18990060393342298, 3);
  sqcRZGate(q, 0.08658374501921023, 4);
  sqcRZGate(q, -0.003300469709970326, 5);
  sqcRZGate(q, 0.13926026715094422, 6);
  sqcRZGate(q, 0.14813264853056235, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.057896939797902114, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.7750863978613816, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.056856519293738486, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.06628660998989942, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.4282862585176692, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.0660233742600833, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.010453588312424367, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.1428796554823306, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.9658396738992157, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.08694281822248602, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.7920213701148019, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.325334770741889, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.9190514021134746, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.5125799876584103, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.23942442697337218, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.0686453123448711, 0);
  sqcRZGate(q, -0.23940717708380974, 1);
  sqcRZGate(q, -0.17702104798595678, 2);
  sqcRZGate(q, -0.26882332115505253, 3);
  sqcRZGate(q, -0.044832258632238095, 4);
  sqcRZGate(q, -0.014845152241816385, 5);
  sqcRZGate(q, 0.3615637444826408, 6);
  sqcRZGate(q, 0.2818203320584517, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.16113288477228319, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.15126007506327468, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.9421823185346159, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.09938198887697013, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.11192841615517299, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.08620639868244022, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.2007891466816803, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2022555622012473, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.38468340955321856, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.02114557792948775, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.21834060498143593, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.4546112550057312, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.7598952978151677, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.49283584995364876, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.28438141259209854, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.10088578918581798, 0);
  sqcRZGate(q, -0.33254293617314457, 1);
  sqcRZGate(q, -0.20347186069250367, 2);
  sqcRZGate(q, -0.2904311030184147, 3);
  sqcRZGate(q, -0.06740765108340212, 4);
  sqcRZGate(q, 0.009834576898781084, 5);
  sqcRZGate(q, 0.6199554258026253, 6);
  sqcRZGate(q, 0.3183687656961646, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.8010974295618213, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.13794151941871785, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.2291421800589644, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.10975933740047253, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.5181724064930313, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.34861309300233223, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.08988270163439786, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.32753033209581955, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.2797061458367855, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.28441904461232165, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.1368711440726315, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.04078468563025424, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.5572043476210943, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.26017177345707015, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.02796449588030234, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.16797026190603204, 0);
  sqcRZGate(q, -0.3240771291260359, 1);
  sqcRZGate(q, -0.02937113503087677, 2);
  sqcRZGate(q, 0.2121579930310869, 3);
  sqcRZGate(q, 0.04074035522177889, 4);
  sqcRZGate(q, 0.05150677858610176, 5);
  sqcRZGate(q, 0.6629909601041056, 6);
  sqcRZGate(q, 0.3263499032934313, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.838227536445587, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.1652134100686202, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.8470942654528297, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.16413973578912508, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.06895462181154674, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.073276169712501, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.525729785300547, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2452272296845375, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.2843687951902519, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.7338371403096965, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.04487704706984381, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.33636934738343544, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.015262217480174157, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.02556859274223797, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.8876784611191971, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.14441489286628756, 0);
  sqcRZGate(q, -0.03998253135791589, 1);
  sqcRZGate(q, -0.006021393957772155, 2);
  sqcRZGate(q, 0.029384870417690365, 3);
  sqcRZGate(q, 0.004448380794251744, 4);
  sqcRZGate(q, 0.030672396688330078, 5);
  sqcRZGate(q, 0.28089386299911956, 6);
  sqcRZGate(q, 0.3115612003024154, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.9756486639008596, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.8652787007518564, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.04803472767692666, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.11576932483637917, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.18243469949662125, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.25780402306847994, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.039614241356794894, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.009689847436737805, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.3578150023065599, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.1694367948829141, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.16946845678287467, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -1.086199083620039, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.25869576601760247, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.6316785546656979, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.9567409547693254, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.106227909842807, 0);
  sqcRZGate(q, -0.04139175941708903, 1);
  sqcRZGate(q, -0.00916722528095335, 2);
  sqcRZGate(q, -0.070287872265879, 3);
  sqcRZGate(q, 0.15573660029946118, 4);
  sqcRZGate(q, -0.0698166816628547, 5);
  sqcRZGate(q, -0.08761747736760561, 6);
  sqcRZGate(q, 0.31609695215280065, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.6452454486694851, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.38306498836182823, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.20073832516788656, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.04315925384848662, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.2894551802689374, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.045143629013126935, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.6182213417776113, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.4306422280559757, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.14140269096847763, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.1915748050119124, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3312125839340505, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.10800831846662513, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -1.2197655115046782, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.14487119853595223, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -1.0500387607033899, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.07858881212601034, 0);
  sqcRZGate(q, 0.0026655551204270334, 1);
  sqcRZGate(q, 0.011362965686362725, 2);
  sqcRZGate(q, 0.15817676677591722, 3);
  sqcRZGate(q, -0.19387294134151412, 4);
  sqcRZGate(q, -0.0170953928594008, 5);
  sqcRZGate(q, 0.25193496545444566, 6);
  sqcRZGate(q, 0.45796855969088174, 7);

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
