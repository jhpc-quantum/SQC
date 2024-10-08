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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 2.768464337594918, 0);
  sqcRYGate(q, 2.445387501558933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8418284639888352, 0);
  sqcRYGate(q, 1.9013095231944843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.437921321488683, 2);
  sqcRYGate(q, -1.3103833559110023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5699622443346637, 2);
  sqcRYGate(q, 2.0084431319000853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7963371854006595, 4);
  sqcRYGate(q, -0.0433982273698188, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.179765107759307, 4);
  sqcRYGate(q, 1.3319458105164073, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8116549704462137, 6);
  sqcRYGate(q, 0.9559544349658964, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1542305858741617, 6);
  sqcRYGate(q, 2.339825561732702, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.292948579235426, 0);
  sqcRYGate(q, 2.4589317235110344, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6015242333810793, 0);
  sqcRYGate(q, -0.7300074194631785, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9644617517416387, 2);
  sqcRYGate(q, 0.25619046188595684, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.069761462139928, 2);
  sqcRYGate(q, 1.316316941942374, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.236912140880777, 4);
  sqcRYGate(q, -0.502701349235023, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.628966610838394, 4);
  sqcRYGate(q, -1.2394847937734843, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4684114163549937, 1);
  sqcRYGate(q, -0.08854823209138907, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0751778599656492, 1);
  sqcRYGate(q, 0.186219181998009, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6272616207343953, 3);
  sqcRYGate(q, -0.34100726516681445, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.0245913657909989, 3);
  sqcRYGate(q, -0.402755855997745, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.7515806037686925, 5);
  sqcRYGate(q, 2.8669711464264, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.9041763995065497, 5);
  sqcRYGate(q, 2.9755615390222414, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.3293000930764318, 0);
  sqcRYGate(q, 0.7541620626991521, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1998221127140518, 0);
  sqcRYGate(q, 2.6764629718831423, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.16488215101365, 1);
  sqcRYGate(q, -0.22146383329809982, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.979634105859881, 1);
  sqcRYGate(q, 0.4656505501583668, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4038685108454213, 2);
  sqcRYGate(q, -0.6281008524587967, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.7773947520215914, 2);
  sqcRYGate(q, -1.2077156709512442, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.7261548017821977, 3);
  sqcRYGate(q, 2.3610068339751513, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3484895344287325, 3);
  sqcRYGate(q, 0.8713977961717607, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2068229091178146, 4);
  sqcRYGate(q, -0.10278440913698707, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.0326313838933847, 4);
  sqcRYGate(q, 2.0516251517888993, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.0308078342621938, 5);
  sqcRYGate(q, 1.4833683945824059, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.58305846678868, 5);
  sqcRYGate(q, 2.9144904090645287, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1299717841710677, 0);
  sqcRYGate(q, -2.7521769541481853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.440298024909786, 0);
  sqcRYGate(q, -2.086644199862136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.770338188787064, 2);
  sqcRYGate(q, -2.238113557285047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.516970111699995, 2);
  sqcRYGate(q, -2.6614773892654275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1060632263510026, 4);
  sqcRYGate(q, 0.9820813885021263, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4808220079770225, 4);
  sqcRYGate(q, -1.7538250558899877, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.01846076487462422, 6);
  sqcRYGate(q, -1.4009792276537079, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.31861665529442185, 6);
  sqcRYGate(q, -2.352295309575993, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1833240318977447, 0);
  sqcRYGate(q, -2.7756375808418277, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.20770418672943158, 0);
  sqcRYGate(q, -0.5308948563842116, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.853685844059639, 2);
  sqcRYGate(q, -0.9442505052745318, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.21952844651591427, 2);
  sqcRYGate(q, -1.1132460215430096, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.18636303704011237, 4);
  sqcRYGate(q, -0.597238670146413, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.4697495257310994, 4);
  sqcRYGate(q, -0.6053317822110024, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.2127624084624875, 1);
  sqcRYGate(q, 2.9703447691562888, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.147005535740459, 1);
  sqcRYGate(q, -0.4527605563061803, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.942430679540931, 3);
  sqcRYGate(q, -1.0678053673596315, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.0017693550194684, 3);
  sqcRYGate(q, 0.8077811586412871, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3442144364062458, 5);
  sqcRYGate(q, 1.0503525622951955, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.3806034953453414, 5);
  sqcRYGate(q, -2.601921257254564, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.0558033077277416, 0);
  sqcRYGate(q, 2.5544564023641043, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.283711806557089, 0);
  sqcRYGate(q, -0.8689435231107998, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8362004395256788, 1);
  sqcRYGate(q, 0.6557275614829542, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7793162768212412, 1);
  sqcRYGate(q, -1.944544312076028, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3639122685518217, 2);
  sqcRYGate(q, -2.130490032001282, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.1196251941504578, 2);
  sqcRYGate(q, -2.135312387514082, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.6446675532391093, 3);
  sqcRYGate(q, -2.275205965267725, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9051956170812065, 3);
  sqcRYGate(q, 1.0674079393344513, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.168463239881642, 4);
  sqcRYGate(q, -0.35550770765711553, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.0597395978339552, 4);
  sqcRYGate(q, 0.2491887714133682, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.323426616413, 5);
  sqcRYGate(q, -2.3605013766224516, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5796642542114014, 5);
  sqcRYGate(q, -1.793116091219554, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.017040031030252, 0);
  sqcRYGate(q, -2.063488898930264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7439051207920366, 0);
  sqcRYGate(q, 1.8264286073392269, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5202958228115593, 2);
  sqcRYGate(q, 1.516674628054006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2045688561403134, 2);
  sqcRYGate(q, 2.0045264330278227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9283465469131453, 4);
  sqcRYGate(q, 2.19431093495235, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1005207183642264, 4);
  sqcRYGate(q, -2.773078756162451, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8882488977614775, 6);
  sqcRYGate(q, 0.3170610155997959, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1572077141006223, 6);
  sqcRYGate(q, -1.3459478398127562, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5418191820582086, 0);
  sqcRYGate(q, 0.3920984818447732, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.066430872525218, 0);
  sqcRYGate(q, -1.176998649443025, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8699387074580787, 2);
  sqcRYGate(q, 2.228625196863784, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.0414582085903037, 2);
  sqcRYGate(q, 2.155624870282275, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.13856252640052727, 4);
  sqcRYGate(q, -1.7243549823041864, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.1123721017802297, 4);
  sqcRYGate(q, -0.41022217164413755, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.3047281891173717, 1);
  sqcRYGate(q, 2.1630948849636527, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4219332694470852, 1);
  sqcRYGate(q, 2.8249250020738232, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9028811782251878, 3);
  sqcRYGate(q, -0.28894574247454485, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.1698033391185163, 3);
  sqcRYGate(q, -2.923252141489667, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.85720888756538, 5);
  sqcRYGate(q, -0.9241044711879381, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.6281132036047214, 5);
  sqcRYGate(q, 0.49992225042678484, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.3159299090268615, 0);
  sqcRYGate(q, -2.6331765203466855, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3746322433602947, 0);
  sqcRYGate(q, -0.42077173309464744, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.464515364545415, 1);
  sqcRYGate(q, -0.8019313549947604, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4726768346650576, 1);
  sqcRYGate(q, -0.9592439359406473, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6268606921213269, 2);
  sqcRYGate(q, 3.0126619427889194, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.637391809051209, 2);
  sqcRYGate(q, -1.6048736773741685, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.248140435257949, 3);
  sqcRYGate(q, -1.9013343190667498, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0900839641916753, 3);
  sqcRYGate(q, -2.1421044879601254, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.16553861679147558, 4);
  sqcRYGate(q, -0.8689451446731962, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.4828917644861672, 4);
  sqcRYGate(q, -2.518974984581094, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.7892407040087568, 5);
  sqcRYGate(q, -2.8610788839254826, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8363811640579675, 5);
  sqcRYGate(q, 0.6709204838075777, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3219555740300351, 0);
  sqcRYGate(q, -2.784918828693301, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9966266669808954, 0);
  sqcRYGate(q, -1.3607694840504478, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.357862532684062, 2);
  sqcRYGate(q, 0.24163342862508588, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.47047372439752, 2);
  sqcRYGate(q, 0.13179479259971755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.32098424580298623, 4);
  sqcRYGate(q, 1.6872678404261672, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7160206213980245, 4);
  sqcRYGate(q, 2.2654785617362023, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.786232668255629, 6);
  sqcRYGate(q, 1.7742937076156318, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.054301484916300505, 6);
  sqcRYGate(q, -2.9250265814721477, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8197173227286232, 0);
  sqcRYGate(q, 2.7114478247772342, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8095356584394744, 0);
  sqcRYGate(q, -1.645287725384637, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.328329377507754, 2);
  sqcRYGate(q, 0.917302311399701, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.36964156993536523, 2);
  sqcRYGate(q, 1.7444045694848453, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3794119867266132, 4);
  sqcRYGate(q, 0.8362666018909951, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.305511249861322, 4);
  sqcRYGate(q, -0.04658094611665397, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.4926165251373313, 1);
  sqcRYGate(q, -0.7867398965880685, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8537104877244595, 1);
  sqcRYGate(q, 1.3857210283306438, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2132130625211417, 3);
  sqcRYGate(q, 0.11919262749745839, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.28505409235775225, 3);
  sqcRYGate(q, 1.465346454944373, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3037833725813117, 5);
  sqcRYGate(q, -0.11872062975856666, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7471278869142541, 5);
  sqcRYGate(q, 2.0341019940245912, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.8046888005778525, 0);
  sqcRYGate(q, 0.7682362610740983, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.11088854801927, 0);
  sqcRYGate(q, -2.0442243187752385, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.29772525563504987, 1);
  sqcRYGate(q, -2.6661445252545004, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7653614461254667, 1);
  sqcRYGate(q, 0.04344654356094406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8900410953536904, 2);
  sqcRYGate(q, 0.9041481478738235, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.3945858070060444, 2);
  sqcRYGate(q, 2.9285137888215407, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.88128259867604, 3);
  sqcRYGate(q, -1.6096658675518727, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.129869452967197, 3);
  sqcRYGate(q, -1.9341304876457621, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.070510785722502, 4);
  sqcRYGate(q, 1.8386038678022407, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.4750734872400999, 4);
  sqcRYGate(q, 0.266590759248186, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.2775466279403984, 5);
  sqcRYGate(q, -2.3191289727222824, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3781038474914507, 5);
  sqcRYGate(q, 1.935184762524853, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9564496745490683, 0);
  sqcRYGate(q, 2.5150828880442426, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5879981925431415, 0);
  sqcRYGate(q, -1.0109851130575631, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7040270026562396, 2);
  sqcRYGate(q, 2.5017754964593255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4946101887835335, 2);
  sqcRYGate(q, 2.086254383516012, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7384777194248184, 4);
  sqcRYGate(q, 0.4750067353980505, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.60254674457514, 4);
  sqcRYGate(q, -2.179701619270489, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.861231434272363, 6);
  sqcRYGate(q, 0.9846813753844206, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2393037441739105, 6);
  sqcRYGate(q, -2.1413094177834324, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.392389530306721, 0);
  sqcRYGate(q, 2.156909443974782, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2351334774729592, 0);
  sqcRYGate(q, -0.9120022872833831, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.33958159383739694, 2);
  sqcRYGate(q, 2.021760329409732, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.37319813509313343, 2);
  sqcRYGate(q, 0.04024999753380065, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.03310235274040085, 4);
  sqcRYGate(q, 0.5476029204489526, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.10813473164259, 4);
  sqcRYGate(q, 0.8860774465879926, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.9810476878806629, 1);
  sqcRYGate(q, 1.49259119135374, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7372699884120201, 1);
  sqcRYGate(q, 2.263943765685064, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7270938617449347, 3);
  sqcRYGate(q, 2.3772820806400508, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.30797447179938064, 3);
  sqcRYGate(q, -0.11361151592379316, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9005580023873732, 5);
  sqcRYGate(q, 3.004732422298404, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5313143433754078, 5);
  sqcRYGate(q, -1.8242446759994433, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.053367312700329, 0);
  sqcRYGate(q, -1.6347274627805897, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5566753044750063, 0);
  sqcRYGate(q, 1.504259548083802, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9686262848994012, 1);
  sqcRYGate(q, -2.3247011072991732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8653527183753358, 1);
  sqcRYGate(q, -1.3443339338541873, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6281815303825828, 2);
  sqcRYGate(q, 2.5844449158675133, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.242903635796317, 2);
  sqcRYGate(q, -1.4552009876594234, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.1708568193880504, 3);
  sqcRYGate(q, -1.8491054855359743, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6508604283787891, 3);
  sqcRYGate(q, 0.8449831591939324, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9125590115213695, 4);
  sqcRYGate(q, -0.07925767968371122, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.6909079130823805, 4);
  sqcRYGate(q, -0.39065319339843635, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.6664995186388711, 5);
  sqcRYGate(q, -2.4746722925787132, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.244131523899892, 5);
  sqcRYGate(q, 2.970532772139733, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1913015388802177, 0);
  sqcRYGate(q, 0.857778757669947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7825233341731188, 0);
  sqcRYGate(q, -2.6739076778360493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2447630968038252, 2);
  sqcRYGate(q, 1.004813504580481, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.01907275725884173, 2);
  sqcRYGate(q, -2.062352381824901, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8799934132931533, 4);
  sqcRYGate(q, -2.094027258176099, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.473442658859793, 4);
  sqcRYGate(q, 2.2276734556325826, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.206176833574021, 6);
  sqcRYGate(q, -0.6583734165617754, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9954007548429538, 6);
  sqcRYGate(q, -0.8025328247865036, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9194311762396438, 0);
  sqcRYGate(q, -2.413174804528271, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5790521555550399, 0);
  sqcRYGate(q, 2.587597126309587, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6909349563573484, 2);
  sqcRYGate(q, -0.5915519735287563, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.947319864667824, 2);
  sqcRYGate(q, -2.179066704948876, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.9830149923127437, 4);
  sqcRYGate(q, 0.19659066062255418, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.02427406692449274, 4);
  sqcRYGate(q, 2.033062956527592, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.27282910140204186, 1);
  sqcRYGate(q, 0.44289223727020577, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2777273785878638, 1);
  sqcRYGate(q, -1.7407816291587022, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9747327176988265, 3);
  sqcRYGate(q, -1.2563985932612272, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8629268964443548, 3);
  sqcRYGate(q, 2.2184222328128325, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.5522446614521046, 5);
  sqcRYGate(q, -1.7146222512520948, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.42642551684433, 5);
  sqcRYGate(q, 1.3706177295898136, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.9259691510923123, 0);
  sqcRYGate(q, 0.14379052594708552, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.899519166294862, 0);
  sqcRYGate(q, -1.340641649216038, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9519877930221403, 1);
  sqcRYGate(q, -1.906605329889348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9846222038569725, 1);
  sqcRYGate(q, -2.475699594493035, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4816635172910377, 2);
  sqcRYGate(q, -1.1416769521606733, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.2007215404481506, 2);
  sqcRYGate(q, 2.0791437473796233, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.8690121191807305, 3);
  sqcRYGate(q, 0.1123895020905344, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.25908089194583095, 3);
  sqcRYGate(q, -0.4214034756008793, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6371098013672665, 4);
  sqcRYGate(q, 2.029991138773325, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.125478622559664, 4);
  sqcRYGate(q, -1.4029582642126526, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.3580922943230531, 5);
  sqcRYGate(q, 2.9827024410716083, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2805466260215403, 5);
  sqcRYGate(q, 2.4958938743536883, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.24360650654165836, 0);
  sqcRYGate(q, -0.22511133947423917, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.142535281517903, 0);
  sqcRYGate(q, 0.6468698324865869, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0432685958962615, 2);
  sqcRYGate(q, 1.508204403427905, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5291769131403756, 2);
  sqcRYGate(q, -0.2640531768816494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2096773305038742, 4);
  sqcRYGate(q, -0.19805356814960984, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9159356475357043, 4);
  sqcRYGate(q, 1.4694096787492192, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.014167436975527359, 6);
  sqcRYGate(q, 0.5827626918409843, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1496708587378635, 6);
  sqcRYGate(q, 1.6260749598742856, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6551716292168335, 0);
  sqcRYGate(q, -1.128781463588161, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2777293632573243, 0);
  sqcRYGate(q, -2.1965013009312413, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5696611220132652, 2);
  sqcRYGate(q, -2.62763058818393, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1079205336290983, 2);
  sqcRYGate(q, -2.2304787279388902, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.7978655872123224, 4);
  sqcRYGate(q, -2.3151882138800963, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.568630524106427, 4);
  sqcRYGate(q, 0.831786034799886, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.9383029418092415, 1);
  sqcRYGate(q, -0.6849188087433475, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.604400963007809, 1);
  sqcRYGate(q, 1.491103171489821, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1390042985495574, 3);
  sqcRYGate(q, -1.3459784351604018, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7718697108305932, 3);
  sqcRYGate(q, 0.4007183399231977, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.984466931512933, 5);
  sqcRYGate(q, -0.9452441999486778, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.801630250540387, 5);
  sqcRYGate(q, -2.675233480961875, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.4685215359837406, 0);
  sqcRYGate(q, -1.3101384664688234, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.756441135213599, 0);
  sqcRYGate(q, 1.2031875813491384, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.304161591575179, 1);
  sqcRYGate(q, -1.7280609817663144, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4817144314928243, 1);
  sqcRYGate(q, 1.9896847799374253, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.112737006944027, 2);
  sqcRYGate(q, -2.881094304507567, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.5295443488762777, 2);
  sqcRYGate(q, -3.083796129464021, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.2648375596158767, 3);
  sqcRYGate(q, -2.456518837625886, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4011132521542553, 3);
  sqcRYGate(q, 2.836590902760075, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3355031445869319, 4);
  sqcRYGate(q, 1.6763717540832823, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.7333382580943453, 4);
  sqcRYGate(q, -1.828881180755415, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.6099928159411006, 5);
  sqcRYGate(q, 0.12664307002434594, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.312885522713581, 5);
  sqcRYGate(q, 1.154195743897874, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.920213003479895, 0);
  sqcRYGate(q, 0.4071656519520426, 1);
  sqcRYGate(q, -0.3861997289567568, 2);
  sqcRYGate(q, 2.7784439907274923, 3);
  sqcRYGate(q, 0.8069121657830278, 4);
  sqcRYGate(q, -2.443113222355151, 5);
  sqcRYGate(q, 0.15814945576125816, 6);
  sqcRYGate(q, -0.05160534031152598, 7);

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
