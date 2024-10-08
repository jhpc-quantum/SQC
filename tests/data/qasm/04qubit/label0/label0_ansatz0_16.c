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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.09135207559323033, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.014261643037766582, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.028726973889095887, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.19412705197695676, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.308769303791557, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.10481422419992865, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.8601457556659063, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.02320044089619214, 0);
  sqcRZGate(q, 0.0885233393831115, 1);
  sqcRZGate(q, -0.0628438106686065, 2);
  sqcRZGate(q, -0.09255513121498785, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.1346721532537545, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.10732742356469839, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.02175594600775044, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.21679190319525887, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.3353139038765957, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.03338011279067377, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.8373394902182489, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.10264458723551682, 0);
  sqcRZGate(q, 0.28167314227798507, 1);
  sqcRZGate(q, -0.12247327879612763, 2);
  sqcRZGate(q, -0.11597093387800729, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.20849181568507338, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.22542750282455234, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.0012398459587877274, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.0753905679598245, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.3359600962012366, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.0867605911704168, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.7415951015686925, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.06082374442826349, 0);
  sqcRZGate(q, 0.26941429454525617, 1);
  sqcRZGate(q, -0.17450463379135467, 2);
  sqcRZGate(q, -0.05652025363252295, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.12692892524772842, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.18754449039142193, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.004661551453699684, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.017772966322717118, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.458923938567604, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.1529616382119827, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.6254696668639961, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.05462872688546526, 0);
  sqcRZGate(q, 0.20096273974915968, 1);
  sqcRZGate(q, -0.28722211209813503, 2);
  sqcRZGate(q, 0.12913521573134998, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.01636987224932791, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.24605602373282542, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.10745606173314849, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.00010919319844648271, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.39618155822163487, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.24619122938626187, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.6758997538915944, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.002866880778169636, 0);
  sqcRZGate(q, 0.06840753340855578, 1);
  sqcRZGate(q, -0.2512354687708771, 2);
  sqcRZGate(q, 0.04351669430482454, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.01274520756218063, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.11028284319996966, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.1672923672843576, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.008278700564168648, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.4198301563403011, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.30566501863908035, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5422255460119456, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.00514657155635799, 0);
  sqcRZGate(q, -0.0026649312243871128, 1);
  sqcRZGate(q, -0.25097371256452633, 2);
  sqcRZGate(q, 0.034810959169767494, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.002033576500612768, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.06056529294003752, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.20707714942860372, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.03917922425053448, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.35832439085849843, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.3486197159225113, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5141628995976539, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.09349583510421437, 0);
  sqcRZGate(q, -0.09889319674448918, 1);
  sqcRZGate(q, -0.09888956554529132, 2);
  sqcRZGate(q, -0.07458978629347868, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.0203778362559496, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.1180865784892091, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.05710509617597839, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.05373487239143242, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.2747839893980681, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.4729324541626738, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.47187527145295294, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.06048656052667526, 0);
  sqcRZGate(q, -0.09855565817825954, 1);
  sqcRZGate(q, 0.14885194651657374, 2);
  sqcRZGate(q, -0.1931215300495471, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.0018913180048012396, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.0010402712697728774, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.19397643119835473, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.009585586873018788, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.2558437123973184, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.42817569077703366, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.4050666417533083, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.10930682763748453, 0);
  sqcRZGate(q, -0.07448713206532612, 1);
  sqcRZGate(q, 0.12136543342968395, 2);
  sqcRZGate(q, -0.180859420782341, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.160233501268626, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.23197671991190752, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.22943980823467514, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.007345704394962206, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.03906363453479546, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.4904698172793865, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.4127061747720303, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.07492900345688776, 0);
  sqcRZGate(q, -0.1412241530805945, 1);
  sqcRZGate(q, 0.05904151756941693, 2);
  sqcRZGate(q, -0.10688135331429696, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.2543587994351931, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.30388074758582745, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.15254274186092928, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.14705122725607672, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.343971708354201, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.4294303423217324, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.24788794528360128, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2969120511677452, 0);
  sqcRZGate(q, -0.08323485373275086, 1);
  sqcRZGate(q, 0.10062664993980111, 2);
  sqcRZGate(q, -0.0103505818236294, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.024936699555741654, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.5084724887132529, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.02633665672853112, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2356505158422362, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.19641805644171417, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.4965442779084771, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.20426962759963013, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.40956872948513906, 0);
  sqcRZGate(q, -0.006776940295365054, 1);
  sqcRZGate(q, 0.10175903373032778, 2);
  sqcRZGate(q, 0.05505822213408627, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.0008560768364288735, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.5519485353352217, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.16180106541611963, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.11421874468164739, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.16185655756677705, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.598576422218742, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.04196513032837855, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5513067982479293, 0);
  sqcRZGate(q, -0.12735575725870382, 1);
  sqcRZGate(q, -0.1460605674667798, 2);
  sqcRZGate(q, 0.02425306759740443, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.18422325465203382, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.6295115816015738, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.23291841158289103, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.20384693053596847, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.10746491978535502, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.6751621832506473, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.2111399715450347, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5158324455998172, 0);
  sqcRZGate(q, 0.1773270778196127, 1);
  sqcRZGate(q, 0.02592654625690612, 2);
  sqcRZGate(q, 0.043666756767588424, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.2684583014923931, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.5832182224532492, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.09803675898340469, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.03141440941432127, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.11456077469843047, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.6620176742575719, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.19954703007888416, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.4824540288384364, 0);
  sqcRZGate(q, -0.18890552849313255, 1);
  sqcRZGate(q, 0.042889358473560873, 2);
  sqcRZGate(q, 0.0740329763671909, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.272217267791515, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.49773485606443496, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.009998978903972576, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.19638399823523112, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.017714501950975486, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.7196956314156954, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.2889378587498771, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5380925895149111, 0);
  sqcRZGate(q, -0.5274420910253105, 1);
  sqcRZGate(q, -0.1454491349666747, 2);
  sqcRZGate(q, 0.33344825216779594, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.08546982280271752, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.574680944190595, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.23412853374279377, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.433979756404068, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.008451390498785306, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.4558928367742316, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.40484692891112145, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.6586501369271744, 0);
  sqcRZGate(q, -0.25117934899299604, 1);
  sqcRZGate(q, -0.43262447202585497, 2);
  sqcRZGate(q, 0.45961750061828227, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.061129545071874736, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.5368703395061345, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5624690323855179, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.5391014573299114, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.1281470102917387, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.40118882466043226, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.8402599126526933, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.7714012119085489, 0);
  sqcRZGate(q, 0.22928756894686897, 1);
  sqcRZGate(q, -0.15151686404377693, 2);
  sqcRZGate(q, 0.5140319211932568, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.09166192225000958, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.008991882450858427, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.6245369273257959, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.6449583385665835, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.16406473456127219, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.30738787244687066, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.21657019682251427, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.8183795097372797, 0);
  sqcRZGate(q, 0.7791546023078851, 1);
  sqcRZGate(q, -0.03491264302057716, 2);
  sqcRZGate(q, 0.7795706399820661, 3);

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
