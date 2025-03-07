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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 2.899533521827067, 0);
  sqcRZGate(q, 2.3206548500160378, 0);
  sqcRYGate(q, -2.9711404503133676, 1);
  sqcRZGate(q, 1.3428457725186762, 1);
  sqcRYGate(q, -1.093757248661185, 2);
  sqcRZGate(q, 0.5097058562702603, 2);
  sqcRYGate(q, 2.4639169361896105, 3);
  sqcRZGate(q, -2.9027429449912656, 3);
  sqcRYGate(q, 3.1301218874125976, 4);
  sqcRZGate(q, 1.8324513886376241, 4);
  sqcRYGate(q, -0.08609536506783029, 5);
  sqcRZGate(q, -3.116198027945944, 5);
  sqcRYGate(q, 0.10134379797230954, 6);
  sqcRZGate(q, 1.427057024129804, 6);
  sqcRYGate(q, -3.0064865945920114, 7);
  sqcRZGate(q, 1.5477414952469621, 7);
  sqcRYGate(q, -1.6075505284456288, 8);
  sqcRZGate(q, -2.1774690474208533, 8);
  sqcRYGate(q, -2.5884890740047677, 9);
  sqcRZGate(q, -1.5815306612730415, 9);
  sqcRYGate(q, -3.1400304467129647, 10);
  sqcRZGate(q, 2.7490261261691757, 10);
  sqcRYGate(q, 0.01260734168353661, 11);
  sqcRZGate(q, -0.8821440217171127, 11);
  sqcRYGate(q, 0.050381218753767776, 12);
  sqcRZGate(q, 0.7373530669842063, 12);
  sqcRYGate(q, -1.907861174810404, 13);
  sqcRZGate(q, -1.0658878754889942, 13);
  sqcRYGate(q, 1.85454001209043, 14);
  sqcRZGate(q, -0.33648725219852516, 14);
  sqcRYGate(q, -1.4586509694210894, 15);
  sqcRZGate(q, -3.0214414946354715, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.7738680632665305, 0);
  sqcRZGate(q, 0.5713808874005419, 0);
  sqcRYGate(q, -2.2427520490872546, 1);
  sqcRZGate(q, -2.2937488447181473, 1);
  sqcRYGate(q, -0.4917565279758538, 2);
  sqcRZGate(q, 1.64409332455068, 2);
  sqcRYGate(q, -0.6237649194703025, 3);
  sqcRZGate(q, -1.1885228002968065, 3);
  sqcRYGate(q, 3.0940894881915844, 4);
  sqcRZGate(q, -1.7071507187414883, 4);
  sqcRYGate(q, -3.09557448018375, 5);
  sqcRZGate(q, 1.503661795992823, 5);
  sqcRYGate(q, 1.151640178518855, 6);
  sqcRZGate(q, 3.125589874687945, 6);
  sqcRYGate(q, -2.545793150030676, 7);
  sqcRZGate(q, 0.028481104064689507, 7);
  sqcRYGate(q, 1.5804343138780865, 8);
  sqcRZGate(q, 0.008854646158643398, 8);
  sqcRYGate(q, -1.8766018411057255, 9);
  sqcRZGate(q, -1.5704106074174964, 9);
  sqcRYGate(q, -0.9613686929140872, 10);
  sqcRZGate(q, 3.1115322037892037, 10);
  sqcRYGate(q, -0.3274610949589333, 11);
  sqcRZGate(q, 2.069945039213005, 11);
  sqcRYGate(q, 0.05583439741849242, 12);
  sqcRZGate(q, 2.7985323801142963, 12);
  sqcRYGate(q, -0.17245705176946569, 13);
  sqcRZGate(q, -0.09686364909853737, 13);
  sqcRYGate(q, -1.2824593691969555, 14);
  sqcRZGate(q, 1.6967409094239951, 14);
  sqcRYGate(q, 1.7142105168661859, 15);
  sqcRZGate(q, 2.916302957449804, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.09253690159450827, 0);
  sqcRZGate(q, -2.7168783530661598, 0);
  sqcRYGate(q, -2.565492012789244, 1);
  sqcRZGate(q, -0.5343716227729871, 1);
  sqcRYGate(q, 1.2269609175677565, 2);
  sqcRZGate(q, -2.886491093207068, 2);
  sqcRYGate(q, 1.9323672602242645, 3);
  sqcRZGate(q, 2.1026965447973662, 3);
  sqcRYGate(q, 1.543965123290592, 4);
  sqcRZGate(q, 3.1300777059553866, 4);
  sqcRYGate(q, 1.6582487590052413, 5);
  sqcRZGate(q, -2.8211108208199627, 5);
  sqcRYGate(q, 0.3624850440871672, 6);
  sqcRZGate(q, 2.8913000569022906, 6);
  sqcRYGate(q, 0.052645315896967707, 7);
  sqcRZGate(q, 0.9411102802770273, 7);
  sqcRYGate(q, 1.5855219501514508, 8);
  sqcRZGate(q, 1.7163923869508346, 8);
  sqcRYGate(q, -1.5277370632244232, 9);
  sqcRZGate(q, -1.1934101658103708, 9);
  sqcRYGate(q, -0.005605243245157432, 10);
  sqcRZGate(q, -2.916016113438518, 10);
  sqcRYGate(q, 3.138919682027523, 11);
  sqcRZGate(q, -0.803975918289578, 11);
  sqcRYGate(q, 2.9895979846317577, 12);
  sqcRZGate(q, -1.8360848339407994, 12);
  sqcRYGate(q, -3.1307720240963994, 13);
  sqcRZGate(q, 0.7558091355391139, 13);
  sqcRYGate(q, 1.0525792720835252, 14);
  sqcRZGate(q, -0.3984276715831055, 14);
  sqcRYGate(q, -1.9607803481442325, 15);
  sqcRZGate(q, -2.376111711044722, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.000177052383377, 0);
  sqcRZGate(q, 2.7627941389127386, 0);
  sqcRYGate(q, -0.5393839377073126, 1);
  sqcRZGate(q, -1.6449074726775579, 1);
  sqcRYGate(q, 1.2673088565899222, 2);
  sqcRZGate(q, 1.2482833490730487, 2);
  sqcRYGate(q, -2.3723086095406836, 3);
  sqcRZGate(q, -2.6808000121212134, 3);
  sqcRYGate(q, 1.592536734286579, 4);
  sqcRZGate(q, 1.6061589389987467, 4);
  sqcRYGate(q, 1.5918151479652087, 5);
  sqcRZGate(q, -0.7963541888992061, 5);
  sqcRYGate(q, -0.0020541125961704284, 6);
  sqcRZGate(q, -2.89884310425117, 6);
  sqcRYGate(q, 3.139790387624064, 7);
  sqcRZGate(q, -2.1720512042474702, 7);
  sqcRYGate(q, 1.156649055056231, 8);
  sqcRZGate(q, 1.2907867135184672, 8);
  sqcRYGate(q, -1.6967568195223626, 9);
  sqcRZGate(q, 1.9161330672989143, 9);
  sqcRYGate(q, 2.9761116668862377, 10);
  sqcRZGate(q, 1.6363636981211993, 10);
  sqcRYGate(q, 0.027631343778930176, 11);
  sqcRZGate(q, -2.4966663961824866, 11);
  sqcRYGate(q, 1.2934264449685446, 12);
  sqcRZGate(q, -1.3733344378752408, 12);
  sqcRYGate(q, -2.6754496677491946, 13);
  sqcRZGate(q, 1.7790386833378353, 13);
  sqcRYGate(q, -1.9619940735939532, 14);
  sqcRZGate(q, -0.6389561826580161, 14);
  sqcRYGate(q, -0.28861999488679224, 15);
  sqcRZGate(q, 1.881514944934829, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.06731592902195249, 0);
  sqcRZGate(q, 0.8847551620596631, 0);
  sqcRYGate(q, 0.4968839775455489, 1);
  sqcRZGate(q, -1.0593926855364395, 1);
  sqcRYGate(q, -1.5621623636823392, 2);
  sqcRZGate(q, 3.0107768604554175, 2);
  sqcRYGate(q, -1.520347397233854, 3);
  sqcRZGate(q, 3.1304080166848895, 3);
  sqcRYGate(q, 1.5484729154536234, 4);
  sqcRZGate(q, -0.0028149947594435787, 4);
  sqcRYGate(q, -0.009966461560130035, 5);
  sqcRZGate(q, -0.7724731242651427, 5);
  sqcRYGate(q, 2.855798660925064, 6);
  sqcRZGate(q, -0.03312066108810804, 6);
  sqcRYGate(q, -1.4304829402351982, 7);
  sqcRZGate(q, 0.05867302465427175, 7);
  sqcRYGate(q, 1.5187348519863102, 8);
  sqcRZGate(q, -0.1116019830007816, 8);
  sqcRYGate(q, -1.561914549420788, 9);
  sqcRZGate(q, -0.10343119071673802, 9);
  sqcRYGate(q, -1.4983995612033758, 10);
  sqcRZGate(q, 1.6269499576926476, 10);
  sqcRYGate(q, 1.5472281804880073, 11);
  sqcRZGate(q, -1.2603753436194873, 11);
  sqcRYGate(q, 0.4297744566964076, 12);
  sqcRZGate(q, 3.103726064754623, 12);
  sqcRYGate(q, 3.034428296100681, 13);
  sqcRZGate(q, -2.6642996335734987, 13);
  sqcRYGate(q, -2.9114539524551546, 14);
  sqcRZGate(q, 0.938659754680403, 14);
  sqcRYGate(q, -3.1116087817141573, 15);
  sqcRZGate(q, 0.30538949726467113, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.628928512723787, 0);
  sqcRZGate(q, 2.6491497220261744, 0);
  sqcRYGate(q, -1.9054266951774614, 1);
  sqcRZGate(q, -1.5770869619042513, 1);
  sqcRYGate(q, 0.4007377991191845, 2);
  sqcRZGate(q, 3.0138043182546532, 2);
  sqcRYGate(q, -1.1143007648994772, 3);
  sqcRZGate(q, 1.6367581424053341, 3);
  sqcRYGate(q, -1.95145551666162, 4);
  sqcRZGate(q, -1.3990363145965263, 4);
  sqcRYGate(q, -2.7567756061358133, 5);
  sqcRZGate(q, -1.0617451893167564, 5);
  sqcRYGate(q, -1.5881633282922907, 6);
  sqcRZGate(q, -0.002273341853620714, 6);
  sqcRYGate(q, -1.5731765704657745, 7);
  sqcRZGate(q, 0.007111159366391293, 7);
  sqcRYGate(q, -3.123165998472285, 8);
  sqcRZGate(q, 1.8490487984725905, 8);
  sqcRYGate(q, -3.135283461329795, 9);
  sqcRZGate(q, -1.4914086324932843, 9);
  sqcRYGate(q, -0.2047564801341455, 10);
  sqcRZGate(q, 1.5141253945789934, 10);
  sqcRYGate(q, -0.012581446429756225, 11);
  sqcRZGate(q, 1.3008991671568255, 11);
  sqcRYGate(q, -2.7246005705311673, 12);
  sqcRZGate(q, -0.3164543139500003, 12);
  sqcRYGate(q, -3.137028777807097, 13);
  sqcRZGate(q, -0.14578213221229586, 13);
  sqcRYGate(q, 1.3125793462210416, 14);
  sqcRZGate(q, 0.8148950747910179, 14);
  sqcRYGate(q, -0.09200493445554958, 15);
  sqcRZGate(q, 2.6555470346568506, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.1399567497909784, 0);
  sqcRZGate(q, 2.355335326723585, 0);
  sqcRYGate(q, -2.8103537884357874, 1);
  sqcRZGate(q, -2.273019263205052, 1);
  sqcRYGate(q, 1.5886016825224898, 2);
  sqcRZGate(q, 0.03714876983270865, 2);
  sqcRYGate(q, -1.5430929817820003, 3);
  sqcRZGate(q, -3.1079890734687647, 3);
  sqcRYGate(q, 3.1269953681275937, 4);
  sqcRZGate(q, 0.06858736362969076, 4);
  sqcRYGate(q, 0.0007799269759304675, 5);
  sqcRZGate(q, -3.109019527838811, 5);
  sqcRYGate(q, -1.6601360655886324, 6);
  sqcRZGate(q, 3.120053977985182, 6);
  sqcRYGate(q, 1.576405359223076, 7);
  sqcRZGate(q, -0.003930640201546432, 7);
  sqcRYGate(q, 3.130920054131278, 8);
  sqcRZGate(q, -2.518779585633188, 8);
  sqcRYGate(q, 3.0262039971749317, 9);
  sqcRZGate(q, -2.912581985095114, 9);
  sqcRYGate(q, 1.6303025755047251, 10);
  sqcRZGate(q, 0.4489790243359862, 10);
  sqcRYGate(q, 1.5910954110120508, 11);
  sqcRZGate(q, -1.4029759582632768, 11);
  sqcRYGate(q, -1.0031799792206078, 12);
  sqcRZGate(q, 0.5602667058177545, 12);
  sqcRYGate(q, -2.981434885405447, 13);
  sqcRZGate(q, -0.3800690676874363, 13);
  sqcRYGate(q, 0.4264413625145185, 14);
  sqcRZGate(q, -0.22411622891754587, 14);
  sqcRYGate(q, -2.977073823104433, 15);
  sqcRZGate(q, 0.8746467927549721, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.038749443626618564, 0);
  sqcRZGate(q, 2.788997431585539, 0);
  sqcRYGate(q, -0.3266103160230447, 1);
  sqcRZGate(q, -1.2487757017805532, 1);
  sqcRYGate(q, 1.6092040296961372, 2);
  sqcRZGate(q, -2.8079994118419775, 2);
  sqcRYGate(q, -1.523027777807639, 3);
  sqcRZGate(q, 1.584183738694409, 3);
  sqcRYGate(q, -3.108814034514829, 4);
  sqcRZGate(q, 1.4676483029254475, 4);
  sqcRYGate(q, -0.00682578342338136, 5);
  sqcRZGate(q, -2.1100831735257435, 5);
  sqcRYGate(q, 1.9245223402047413, 6);
  sqcRZGate(q, -0.3197208396907897, 6);
  sqcRYGate(q, 1.6316479632359844, 7);
  sqcRZGate(q, -2.6269342252124477, 7);
  sqcRYGate(q, 0.4694946826388078, 8);
  sqcRZGate(q, -0.11498588764737831, 8);
  sqcRYGate(q, -1.368354600698206, 9);
  sqcRZGate(q, 3.119805495783439, 9);
  sqcRYGate(q, 2.966102865118119, 10);
  sqcRZGate(q, 0.9506224044007437, 10);
  sqcRYGate(q, 0.8365531413605791, 11);
  sqcRZGate(q, -0.23453492505757664, 11);
  sqcRYGate(q, -2.3584042451118017, 12);
  sqcRZGate(q, 0.23297758834648974, 12);
  sqcRYGate(q, -0.3050077006693668, 13);
  sqcRZGate(q, -0.7634524152558181, 13);
  sqcRYGate(q, 0.565648637946536, 14);
  sqcRZGate(q, -2.357074525080416, 14);
  sqcRYGate(q, 0.031316136166288464, 15);
  sqcRZGate(q, -0.30466809641452786, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.9213553746663754, 0);
  sqcRZGate(q, -2.6244413715710464, 0);
  sqcRYGate(q, 1.6256721615730445, 1);
  sqcRZGate(q, 1.962284885196495, 1);
  sqcRYGate(q, -0.03219700660310923, 2);
  sqcRZGate(q, -2.9296828851484418, 2);
  sqcRYGate(q, -1.8839429537173222, 3);
  sqcRZGate(q, 0.4368217819083238, 3);
  sqcRYGate(q, -1.5733354635941614, 4);
  sqcRZGate(q, 2.990296812564654, 4);
  sqcRYGate(q, -1.5572662942256206, 5);
  sqcRZGate(q, 0.14032210064147763, 5);
  sqcRYGate(q, 3.123096479613176, 6);
  sqcRZGate(q, -0.21741766873913765, 6);
  sqcRYGate(q, 3.141111001023459, 7);
  sqcRZGate(q, 0.454085207910795, 7);
  sqcRYGate(q, 3.108647746055118, 8);
  sqcRZGate(q, 0.2750714670463994, 8);
  sqcRYGate(q, 0.009439601193388825, 9);
  sqcRZGate(q, 3.0368553209960947, 9);
  sqcRYGate(q, 0.019540560228548526, 10);
  sqcRZGate(q, -2.625342813688324, 10);
  sqcRYGate(q, -3.1047622998250684, 11);
  sqcRZGate(q, -1.7094428770581134, 11);
  sqcRYGate(q, -1.2958884259216346, 12);
  sqcRZGate(q, -1.4008642038155186, 12);
  sqcRYGate(q, -0.055772517690664714, 13);
  sqcRZGate(q, -2.1829744890991742, 13);
  sqcRYGate(q, -0.5498399163587671, 14);
  sqcRZGate(q, -0.616511289604612, 14);
  sqcRYGate(q, -2.9868136393511366, 15);
  sqcRZGate(q, -1.0546334907527322, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.964076623552948, 0);
  sqcRZGate(q, 0.9426650618384427, 0);
  sqcRYGate(q, 2.7389038443621407, 1);
  sqcRZGate(q, 1.6008574934990545, 1);
  sqcRYGate(q, 2.161892009833039, 2);
  sqcRZGate(q, -1.955568486711031, 2);
  sqcRYGate(q, -2.5107026375962476, 3);
  sqcRZGate(q, 0.1959874782937554, 3);
  sqcRYGate(q, 2.397144319398886, 4);
  sqcRZGate(q, -2.130755670517141, 4);
  sqcRYGate(q, -0.890909701514632, 5);
  sqcRZGate(q, -2.1450226587292027, 5);
  sqcRYGate(q, 0.4813660170965984, 6);
  sqcRZGate(q, 0.9379597907285754, 6);
  sqcRYGate(q, 0.11024166533136448, 7);
  sqcRZGate(q, -2.0928079298388127, 7);
  sqcRYGate(q, -0.7240050351567936, 8);
  sqcRZGate(q, 0.7741618979007178, 8);
  sqcRYGate(q, 2.2364253940552263, 9);
  sqcRZGate(q, 0.8186971720764579, 9);
  sqcRYGate(q, 2.5175834252058955, 10);
  sqcRZGate(q, 0.752587026309202, 10);
  sqcRYGate(q, 1.0280561166771456, 11);
  sqcRZGate(q, 0.7815009394870216, 11);
  sqcRYGate(q, 1.5572414557623526, 12);
  sqcRZGate(q, -0.529854145326087, 12);
  sqcRYGate(q, 3.0890018359874523, 13);
  sqcRZGate(q, -2.8053609646542768, 13);
  sqcRYGate(q, -0.16310975047657283, 14);
  sqcRZGate(q, -2.032934834436386, 14);
  sqcRYGate(q, 3.1056412328729834, 15);
  sqcRZGate(q, -2.293247904429118, 15);

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
