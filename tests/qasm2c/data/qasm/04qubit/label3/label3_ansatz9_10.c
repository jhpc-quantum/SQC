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

  sqcRYGate(q, 3.1018517431382495, 0);
  sqcRYGate(q, 0.1258786675665267, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8634301249358771, 0);
  sqcRYGate(q, 0.0254108786737266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9678281560908524, 2);
  sqcRYGate(q, -0.955701447849515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.793172307691327, 2);
  sqcRYGate(q, -2.0904579822083798, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.010388154523037763, 0);
  sqcRYGate(q, 0.4577695948836773, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5080832907350206, 0);
  sqcRYGate(q, 2.8951785524427716, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4721850005392181, 1);
  sqcRYGate(q, 1.4858284966037367, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.01502186072849021, 1);
  sqcRYGate(q, -3.090992496501302, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3484647587098493, 0);
  sqcRYGate(q, -2.2656587327451, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8760636686564394, 0);
  sqcRYGate(q, 2.807610623899105, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.48956801434802794, 1);
  sqcRYGate(q, 1.869706887415921, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2462606800772322, 1);
  sqcRYGate(q, -1.0888283198613211, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7823903992234953, 0);
  sqcRYGate(q, -1.851809009325061, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.68921325963428, 0);
  sqcRYGate(q, 1.3213160442861458, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.151000280620525, 2);
  sqcRYGate(q, 3.06043726166163, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7962961454842734, 2);
  sqcRYGate(q, -1.5012970133008459, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4791993672295645, 0);
  sqcRYGate(q, 1.594580478036561, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4360206435342275, 0);
  sqcRYGate(q, 1.5960860786518012, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7279841291639126, 1);
  sqcRYGate(q, -0.6261510791026454, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.978800873111306, 1);
  sqcRYGate(q, -0.437937813998165, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.38767514580803475, 0);
  sqcRYGate(q, 2.4520543444446594, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.170464077728213, 0);
  sqcRYGate(q, 0.5172591686343244, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.804685558111069, 1);
  sqcRYGate(q, 2.2784835983908773, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4452548776834124, 1);
  sqcRYGate(q, -0.4889040320154905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5399712186382812, 0);
  sqcRYGate(q, 2.9876793581351917, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8647946250281593, 0);
  sqcRYGate(q, 1.0663095130013078, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1789826856337982, 2);
  sqcRYGate(q, 2.6173722982346206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.046010481892068765, 2);
  sqcRYGate(q, -2.5311630079029244, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.16216262474048104, 0);
  sqcRYGate(q, 1.8786457507506147, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.031763858170843, 0);
  sqcRYGate(q, -2.7000936629214967, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.30290560774282, 1);
  sqcRYGate(q, 2.677160682350064, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5837750010153813, 1);
  sqcRYGate(q, -1.18740130604924, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7525914229010943, 0);
  sqcRYGate(q, 1.3689513947323002, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.472014748744983, 0);
  sqcRYGate(q, -1.4318899499657223, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4360388824729483, 1);
  sqcRYGate(q, -0.026807219292163786, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8845762509479758, 1);
  sqcRYGate(q, -0.18668307711389875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9315334061806686, 0);
  sqcRYGate(q, 0.9601694408794436, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1006028408193753, 0);
  sqcRYGate(q, -0.8611832220235085, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.22533754723636523, 2);
  sqcRYGate(q, -0.19684242940376517, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10548591602648383, 2);
  sqcRYGate(q, -2.331519479152926, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.193046465382949, 0);
  sqcRYGate(q, -2.217790499285309, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.388260482535681, 0);
  sqcRYGate(q, 2.566274302650673, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.218617419546716, 1);
  sqcRYGate(q, -1.9965455229679858, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8432805047522236, 1);
  sqcRYGate(q, -0.5227526604477202, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.915833402219613, 0);
  sqcRYGate(q, 2.515983240883758, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5162639045866033, 0);
  sqcRYGate(q, -0.7574344561295728, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1161594709454397, 1);
  sqcRYGate(q, 2.6901602876289408, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.001614988933979, 1);
  sqcRYGate(q, -0.07654617993798492, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.369233634177406, 0);
  sqcRYGate(q, -2.925115082157199, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0836205486737915, 0);
  sqcRYGate(q, -1.3083538294074566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6053619369395005, 2);
  sqcRYGate(q, -1.370145680112231, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5635304952140272, 2);
  sqcRYGate(q, -1.9676909181726971, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4310960718794674, 0);
  sqcRYGate(q, 1.1863454192850826, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8416220451886334, 0);
  sqcRYGate(q, 2.6949820055988347, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.07821188314387584, 1);
  sqcRYGate(q, 2.7269554209513323, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.20507059023918056, 1);
  sqcRYGate(q, 0.5736810228855158, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5726151201746013, 0);
  sqcRYGate(q, -1.2772094599004324, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.011280143926957, 0);
  sqcRYGate(q, 2.520313256072929, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0629474773028083, 1);
  sqcRYGate(q, 2.947857495058286, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.042001020849204984, 1);
  sqcRYGate(q, 0.7179700198346914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.817496076862513, 0);
  sqcRYGate(q, -2.4336983865609536, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8198906614295574, 0);
  sqcRYGate(q, 1.5798398265944613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9788569462305985, 2);
  sqcRYGate(q, -0.7490131053784719, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9410566107779115, 2);
  sqcRYGate(q, -0.38717223764048203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.695969665735688, 0);
  sqcRYGate(q, -1.244890304715826, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.14675371574906387, 0);
  sqcRYGate(q, 1.8279352723910147, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4041631201948244, 1);
  sqcRYGate(q, -2.626723160477734, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.37482114197485483, 1);
  sqcRYGate(q, 0.743776784189901, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.810632066188357, 0);
  sqcRYGate(q, 2.061639113869207, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2327045049815801, 0);
  sqcRYGate(q, 2.371805822464246, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6768423378141653, 1);
  sqcRYGate(q, 0.7965857606130173, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.159958290413046, 1);
  sqcRYGate(q, -0.6581043156402462, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0002139137957315, 0);
  sqcRYGate(q, -1.1866675500542105, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6431279195730326, 0);
  sqcRYGate(q, -1.0811686754291843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5741478557715594, 2);
  sqcRYGate(q, -2.152286412978361, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2337437476013857, 2);
  sqcRYGate(q, -2.3471247601315017, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.294214019974488, 0);
  sqcRYGate(q, -2.5014114725474994, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9209397997902666, 0);
  sqcRYGate(q, 0.09004672016295354, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9474129223760244, 1);
  sqcRYGate(q, 1.0317544406256032, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.415403161648059, 1);
  sqcRYGate(q, 0.5828802810574576, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8077071095017883, 0);
  sqcRYGate(q, -0.7119235884882702, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.1294408321770657, 0);
  sqcRYGate(q, -2.0043171436414893, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9485408013382755, 1);
  sqcRYGate(q, 2.813243138650403, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5286608972648021, 1);
  sqcRYGate(q, -1.7776202662795688, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9672945773747066, 0);
  sqcRYGate(q, -1.588967581546158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9533584595103317, 0);
  sqcRYGate(q, 0.6504473944683475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.908104786729742, 2);
  sqcRYGate(q, 0.8794419974507832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9137160862956204, 2);
  sqcRYGate(q, -1.7979144419528073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.79652965526612, 0);
  sqcRYGate(q, -1.736394737874975, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0590451049653105, 0);
  sqcRYGate(q, -3.0991520330833446, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.075922409443373, 1);
  sqcRYGate(q, 0.28507481189151207, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0323051642562397, 1);
  sqcRYGate(q, 0.6911620603553973, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.47308942321757286, 0);
  sqcRYGate(q, -0.10439371653025996, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3647381557808596, 0);
  sqcRYGate(q, 0.5825125485573439, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6070028162881499, 1);
  sqcRYGate(q, -1.5739406408753691, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9495372446776447, 1);
  sqcRYGate(q, -1.7168223809595653, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5051032411091246, 0);
  sqcRYGate(q, 0.6966018200202267, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0505912815230936, 0);
  sqcRYGate(q, 1.4725655284967452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.970972479500677, 2);
  sqcRYGate(q, -0.48408015159915907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8364708638238398, 2);
  sqcRYGate(q, -2.1944411452026555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5713477476264508, 0);
  sqcRYGate(q, -1.2916148243450982, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.855077613195193, 0);
  sqcRYGate(q, 1.9902208533590418, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.16071236739106798, 1);
  sqcRYGate(q, 0.5026761911179962, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.014837627171569, 1);
  sqcRYGate(q, 0.13936456171681216, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7613894931524151, 0);
  sqcRYGate(q, -0.04138239224849762, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7184082466537687, 0);
  sqcRYGate(q, -2.5755273057554167, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9789529165153121, 1);
  sqcRYGate(q, -1.8086444979962222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9649579670440822, 1);
  sqcRYGate(q, 3.0714390367580946, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8546065796035167, 0);
  sqcRYGate(q, -1.1941169645516627, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.684191442239786, 0);
  sqcRYGate(q, 1.2249320137830504, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.48344647851024813, 2);
  sqcRYGate(q, -0.07495912136733107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7778563951320054, 2);
  sqcRYGate(q, 0.6591053343029731, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5454127664298569, 0);
  sqcRYGate(q, 0.18178795879165058, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.688935697632861, 0);
  sqcRYGate(q, -0.7115464010745466, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6619012884910269, 1);
  sqcRYGate(q, -0.42542313119567154, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9780729161235531, 1);
  sqcRYGate(q, 1.9314283666115521, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9121150161694587, 0);
  sqcRYGate(q, -2.2893260075287953, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3844321800484023, 0);
  sqcRYGate(q, 0.9703770025543234, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1565233130762702, 1);
  sqcRYGate(q, -2.882339079621388, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5767914688214213, 1);
  sqcRYGate(q, -1.7282510485113924, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6274828163575337, 0);
  sqcRYGate(q, 0.5293301722383845, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9341019793082195, 0);
  sqcRYGate(q, 0.05049390231073796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.138838427453837, 2);
  sqcRYGate(q, 0.9276286382813381, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.818754917292705, 2);
  sqcRYGate(q, 3.0520927937619944, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.227326256323922, 0);
  sqcRYGate(q, 2.7095501992595645, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1556770510200396, 0);
  sqcRYGate(q, 0.9331668279061479, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.433217652005886, 1);
  sqcRYGate(q, -3.1151295894199986, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.711939234465144, 1);
  sqcRYGate(q, -2.5143776971099268, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.05765539281337872, 0);
  sqcRYGate(q, -2.6734019872478325, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1407103432858925, 0);
  sqcRYGate(q, 1.424057056756996, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.648212568101319, 1);
  sqcRYGate(q, 1.7490641243825766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.15650634509623826, 1);
  sqcRYGate(q, -2.0751883241759055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1289802342960376, 0);
  sqcRYGate(q, -0.26560401231873687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9950101063525634, 0);
  sqcRYGate(q, 1.2050322107366647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.652325234699834, 2);
  sqcRYGate(q, -1.5392927487544101, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2324111065428116, 2);
  sqcRYGate(q, -1.2593779044397122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6796315674449849, 0);
  sqcRYGate(q, 2.0823801242115376, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.673367515400207, 0);
  sqcRYGate(q, -1.8884630316350974, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.11764810772063253, 1);
  sqcRYGate(q, -3.0862203354060354, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6311238419140022, 1);
  sqcRYGate(q, -2.1836770822164, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7983325082147453, 0);
  sqcRYGate(q, 3.112701201285276, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1270672261335823, 0);
  sqcRYGate(q, -1.3670193087795912, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8132694558883709, 1);
  sqcRYGate(q, 0.49453436233413234, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.32333981799166533, 1);
  sqcRYGate(q, -1.898468774432789, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2455863262603433, 0);
  sqcRYGate(q, -1.4058905928849716, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.983124500214979, 0);
  sqcRYGate(q, 1.3369537785050927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2630944752666835, 2);
  sqcRYGate(q, 0.9771731013699259, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.971708621944594, 2);
  sqcRYGate(q, -1.1542003977882107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.448683561324291, 0);
  sqcRYGate(q, -1.2064100365875399, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.105629247363975, 0);
  sqcRYGate(q, 0.17944707316657119, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8879993632198315, 1);
  sqcRYGate(q, 1.4042344255148527, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4328548191572716, 1);
  sqcRYGate(q, 2.0482288606597185, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1901787240719688, 0);
  sqcRYGate(q, -2.329326538084812, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5456454271055167, 0);
  sqcRYGate(q, -1.2976621258502306, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2411572676137954, 1);
  sqcRYGate(q, -2.139261065513902, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8917525125583463, 1);
  sqcRYGate(q, 1.1797528717725907, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5348735813924472, 0);
  sqcRYGate(q, -1.3715804176289579, 1);
  sqcRYGate(q, 1.6809812691725183, 2);
  sqcRYGate(q, 0.3010993325337752, 3);

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
