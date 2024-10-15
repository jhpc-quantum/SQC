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

  sqcRYGate(q, -2.9747331509057373, 0);
  sqcRZGate(q, 0.013928790021536222, 0);
  sqcRYGate(q, 0.019032384807663227, 1);
  sqcRZGate(q, 0.8802826196947708, 1);
  sqcRYGate(q, -1.7483916977610585, 2);
  sqcRZGate(q, 2.459099181776463, 2);
  sqcRYGate(q, -2.6121489497065036, 3);
  sqcRZGate(q, 0.8355107894560239, 3);
  sqcRYGate(q, -0.1897883249411425, 4);
  sqcRZGate(q, -0.03901802602416282, 4);
  sqcRYGate(q, 3.1204681058101857, 5);
  sqcRZGate(q, 0.12436887523794363, 5);
  sqcRYGate(q, 2.554120341728814, 6);
  sqcRZGate(q, 0.04170798803110998, 6);
  sqcRYGate(q, 3.038575425491648, 7);
  sqcRZGate(q, -0.3582898732403597, 7);
  sqcRYGate(q, 1.5308716051696072, 8);
  sqcRZGate(q, 2.8752012582807662, 8);
  sqcRYGate(q, 1.5663690311549854, 9);
  sqcRZGate(q, 0.13178591274083684, 9);
  sqcRYGate(q, -3.1300186577354157, 10);
  sqcRZGate(q, -2.7288285510543355, 10);
  sqcRYGate(q, -0.6384328880287924, 11);
  sqcRZGate(q, 0.3667152987947304, 11);
  sqcRYGate(q, -2.298292968092468, 12);
  sqcRZGate(q, 1.7499945590665085, 12);
  sqcRYGate(q, -3.115482882029043, 13);
  sqcRZGate(q, -1.4027742163004584, 13);
  sqcRYGate(q, 0.02260171998921212, 14);
  sqcRZGate(q, 2.0263683109849193, 14);
  sqcRYGate(q, -0.575642026490525, 15);
  sqcRZGate(q, 2.0607564825938027, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.974145781331143, 0);
  sqcRZGate(q, -1.5494409161120783, 0);
  sqcRYGate(q, 1.0400031085085473, 1);
  sqcRZGate(q, -0.2638737908275468, 1);
  sqcRYGate(q, 2.4504248224710894, 2);
  sqcRZGate(q, -1.229896309834551, 2);
  sqcRYGate(q, 2.2496404788036415, 3);
  sqcRZGate(q, 1.1910461613769252, 3);
  sqcRYGate(q, 0.15788470419409162, 4);
  sqcRZGate(q, -1.5701799393694316, 4);
  sqcRYGate(q, -1.4830231755077294, 5);
  sqcRZGate(q, 0.01920055749026428, 5);
  sqcRYGate(q, -2.442629426293874, 6);
  sqcRZGate(q, 2.906904558176033, 6);
  sqcRYGate(q, -1.4108581466326386, 7);
  sqcRZGate(q, -1.9560523562245473, 7);
  sqcRYGate(q, 3.1001725838267467, 8);
  sqcRZGate(q, -0.2344374478003468, 8);
  sqcRYGate(q, 1.4740064351450157, 9);
  sqcRZGate(q, 0.3319623014051221, 9);
  sqcRYGate(q, 0.28771751380376337, 10);
  sqcRZGate(q, -2.149236186782214, 10);
  sqcRYGate(q, 0.23603077611392698, 11);
  sqcRZGate(q, 1.280178982402507, 11);
  sqcRYGate(q, 0.36576270915681697, 12);
  sqcRZGate(q, -1.28539908511935, 12);
  sqcRYGate(q, -2.9348111191061625, 13);
  sqcRZGate(q, 1.4982016547072652, 13);
  sqcRYGate(q, 1.5931470083561479, 14);
  sqcRZGate(q, 1.3636289397195744, 14);
  sqcRYGate(q, 0.7465039891200994, 15);
  sqcRZGate(q, 0.05290431281343012, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.567916621515291, 0);
  sqcRZGate(q, 1.5532648457083331, 0);
  sqcRYGate(q, -1.212896003327283, 1);
  sqcRZGate(q, -2.4281186284880087, 1);
  sqcRYGate(q, 2.7465147695263408, 2);
  sqcRZGate(q, -0.6699768339669676, 2);
  sqcRYGate(q, -2.356271946505646, 3);
  sqcRZGate(q, 1.700254110221838, 3);
  sqcRYGate(q, 0.09730197915347144, 4);
  sqcRZGate(q, -1.931545703895904, 4);
  sqcRYGate(q, 1.5624886959359352, 5);
  sqcRZGate(q, 0.003616767636954392, 5);
  sqcRYGate(q, 0.06732949348946199, 6);
  sqcRZGate(q, 0.32339542610238325, 6);
  sqcRYGate(q, -0.21156978378677138, 7);
  sqcRZGate(q, 1.7039461570472625, 7);
  sqcRYGate(q, -0.022123865078463645, 8);
  sqcRZGate(q, -1.980655491184887, 8);
  sqcRYGate(q, -0.0050696528900386895, 9);
  sqcRZGate(q, 2.515532576534755, 9);
  sqcRYGate(q, -1.1705168192370055, 10);
  sqcRZGate(q, 1.225559355885532, 10);
  sqcRYGate(q, 1.1981788239813331, 11);
  sqcRZGate(q, 0.5191645579516976, 11);
  sqcRYGate(q, -2.3947731603122286, 12);
  sqcRZGate(q, 2.1305789375590103, 12);
  sqcRYGate(q, -3.123772138934121, 13);
  sqcRZGate(q, 1.5197020612223726, 13);
  sqcRYGate(q, 0.03577494662554593, 14);
  sqcRZGate(q, -1.3544491191844328, 14);
  sqcRYGate(q, 3.1146648097193226, 15);
  sqcRZGate(q, 1.1335437493779548, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.9560424392843787, 0);
  sqcRZGate(q, 0.68245832827688, 0);
  sqcRYGate(q, -3.139367216161224, 1);
  sqcRZGate(q, 0.3026579922038079, 1);
  sqcRYGate(q, -0.8731758625103954, 2);
  sqcRZGate(q, 0.6720982490340691, 2);
  sqcRYGate(q, 2.691925806956909, 3);
  sqcRZGate(q, 2.48423090508558, 3);
  sqcRYGate(q, -0.015552779439292229, 4);
  sqcRZGate(q, 2.4287816400751936, 4);
  sqcRYGate(q, 1.4417483616608742, 5);
  sqcRZGate(q, -3.109842044021904, 5);
  sqcRYGate(q, -2.4913230489444986, 6);
  sqcRZGate(q, -2.0936274176643836, 6);
  sqcRYGate(q, 1.4003148781127424, 7);
  sqcRZGate(q, -1.7028057648246069, 7);
  sqcRYGate(q, 1.603470008158033, 8);
  sqcRZGate(q, 3.13223213115316, 8);
  sqcRYGate(q, 3.12150737709966, 9);
  sqcRZGate(q, 0.154512236306673, 9);
  sqcRYGate(q, -0.06695681838411184, 10);
  sqcRZGate(q, 1.6379553716235498, 10);
  sqcRYGate(q, 0.2996362811023623, 11);
  sqcRZGate(q, -1.9749153298001358, 11);
  sqcRYGate(q, 0.30857077270862965, 12);
  sqcRZGate(q, -2.1849462022533097, 12);
  sqcRYGate(q, 2.7860664259936314, 13);
  sqcRZGate(q, -0.22572800486171518, 13);
  sqcRYGate(q, 1.4110432151704904, 14);
  sqcRZGate(q, 0.9035173024440022, 14);
  sqcRYGate(q, -2.4017063201011033, 15);
  sqcRZGate(q, 0.020796969015360205, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.568800485755773, 0);
  sqcRZGate(q, 1.6658935512181354, 0);
  sqcRYGate(q, 1.2209755054251132, 1);
  sqcRZGate(q, 1.9373871065190633, 1);
  sqcRYGate(q, -2.1965924431393495, 2);
  sqcRZGate(q, -0.6689556627541544, 2);
  sqcRYGate(q, 0.8105504267498371, 3);
  sqcRZGate(q, 3.1069451233681447, 3);
  sqcRYGate(q, -1.7298933770320255, 4);
  sqcRZGate(q, -0.5648131216869405, 4);
  sqcRYGate(q, -3.0631556707724172, 5);
  sqcRZGate(q, 1.329980535919841, 5);
  sqcRYGate(q, -1.6735826962253189, 6);
  sqcRZGate(q, 1.820187114812538, 6);
  sqcRYGate(q, -3.1305329495687593, 7);
  sqcRZGate(q, -1.7129650827078953, 7);
  sqcRYGate(q, 1.6370378570419486, 8);
  sqcRZGate(q, -1.128271528679141, 8);
  sqcRYGate(q, -2.9566895854698574, 9);
  sqcRZGate(q, -2.8683918038127096, 9);
  sqcRYGate(q, 2.112038801063718, 10);
  sqcRZGate(q, 1.087327371073416, 10);
  sqcRYGate(q, -2.920415003152773, 11);
  sqcRZGate(q, 1.7357569496293288, 11);
  sqcRYGate(q, -2.5525342489183416, 12);
  sqcRZGate(q, 2.2557375014972427, 12);
  sqcRYGate(q, -1.4042398976588033, 13);
  sqcRZGate(q, -0.02991240072104623, 13);
  sqcRYGate(q, -3.13631506948525, 14);
  sqcRZGate(q, 0.4514764332707228, 14);
  sqcRYGate(q, 2.10229100650273, 15);
  sqcRZGate(q, 1.6754998715299072, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.18929047427269938, 0);
  sqcRZGate(q, 1.5000890331464838, 0);
  sqcRYGate(q, 0.0025848787447202426, 1);
  sqcRZGate(q, -2.464537446080395, 1);
  sqcRYGate(q, -2.936366467912733, 2);
  sqcRZGate(q, -1.5975757415251404, 2);
  sqcRYGate(q, 2.931293084510687, 3);
  sqcRZGate(q, 0.35352455803987576, 3);
  sqcRYGate(q, 0.11351005309891349, 4);
  sqcRZGate(q, 1.7509490061526995, 4);
  sqcRYGate(q, 3.1041319933955602, 5);
  sqcRZGate(q, 1.1827093097460022, 5);
  sqcRYGate(q, 1.7240029007925233, 6);
  sqcRZGate(q, -2.4076180922424637, 6);
  sqcRYGate(q, 0.13040145567787767, 7);
  sqcRZGate(q, 0.053345383756550416, 7);
  sqcRYGate(q, -3.0371635184812877, 8);
  sqcRZGate(q, -0.7959379811568709, 8);
  sqcRYGate(q, -0.003028288835281491, 9);
  sqcRZGate(q, 3.0898505946488437, 9);
  sqcRYGate(q, -2.9722324642088314, 10);
  sqcRZGate(q, 1.1539474395781275, 10);
  sqcRYGate(q, 3.0523576577125926, 11);
  sqcRZGate(q, -0.8184761016307861, 11);
  sqcRYGate(q, 3.1098926135574736, 12);
  sqcRZGate(q, -0.8530956554430186, 12);
  sqcRYGate(q, 0.6132569678480397, 13);
  sqcRZGate(q, -0.3144594721409577, 13);
  sqcRYGate(q, -3.140143468448483, 14);
  sqcRZGate(q, -3.039987501508485, 14);
  sqcRYGate(q, 1.8662920885866654, 15);
  sqcRZGate(q, 2.285094294488677, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.7492981947851957, 0);
  sqcRZGate(q, 0.79246243602587, 0);
  sqcRYGate(q, -2.3584252372608145, 1);
  sqcRZGate(q, -0.8341946602862824, 1);
  sqcRYGate(q, -0.7130328547340585, 2);
  sqcRZGate(q, -2.280471383132342, 2);
  sqcRYGate(q, -0.46527549647221633, 3);
  sqcRZGate(q, -0.7912936515189132, 3);
  sqcRYGate(q, -2.555567851996597, 4);
  sqcRZGate(q, -1.7144146553676034, 4);
  sqcRYGate(q, 0.07958861002141987, 5);
  sqcRZGate(q, 2.3233238275535593, 5);
  sqcRYGate(q, -1.0298815632346645, 6);
  sqcRZGate(q, 2.7437421411354017, 6);
  sqcRYGate(q, 3.1014798173481175, 7);
  sqcRZGate(q, -1.1459530753390332, 7);
  sqcRYGate(q, -0.07664325386754425, 8);
  sqcRZGate(q, -0.42438408656121757, 8);
  sqcRYGate(q, 2.853161263733487, 9);
  sqcRZGate(q, 2.3330949353241217, 9);
  sqcRYGate(q, 1.9856782518112968, 10);
  sqcRZGate(q, -1.1667806584729274, 10);
  sqcRYGate(q, -1.615022698162073, 11);
  sqcRZGate(q, -2.014414763285891, 11);
  sqcRYGate(q, -1.9794037430267792, 12);
  sqcRZGate(q, 0.4075297090813752, 12);
  sqcRYGate(q, 3.0415802024003455, 13);
  sqcRZGate(q, -1.642893815547883, 13);
  sqcRYGate(q, 1.5809960884231868, 14);
  sqcRZGate(q, 1.9569627821298878, 14);
  sqcRYGate(q, 2.6147928205349107, 15);
  sqcRZGate(q, -0.41692588874967257, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.4559383479164306, 0);
  sqcRZGate(q, 2.6792346625826813, 0);
  sqcRYGate(q, -0.005914215274394906, 1);
  sqcRZGate(q, -1.7815823351675197, 1);
  sqcRYGate(q, -3.1316887677357403, 2);
  sqcRZGate(q, -0.07548520053309284, 2);
  sqcRYGate(q, 2.814146914317382, 3);
  sqcRZGate(q, 0.16409891763114182, 3);
  sqcRYGate(q, -2.906147332601723, 4);
  sqcRZGate(q, 2.5272188174005366, 4);
  sqcRYGate(q, 3.1413843810717945, 5);
  sqcRZGate(q, 1.3794007104997794, 5);
  sqcRYGate(q, -1.3998425459288502, 6);
  sqcRZGate(q, -2.6657672638580077, 6);
  sqcRYGate(q, 2.7958718111690923, 7);
  sqcRZGate(q, 0.185445021187866, 7);
  sqcRYGate(q, 0.3866476003820646, 8);
  sqcRZGate(q, -2.89256876494013, 8);
  sqcRYGate(q, -0.0019558304219833285, 9);
  sqcRZGate(q, 0.5786546220415661, 9);
  sqcRYGate(q, -0.028904891236492345, 10);
  sqcRZGate(q, -0.8748652980510512, 10);
  sqcRYGate(q, -2.898553759443131, 11);
  sqcRZGate(q, 0.9172789345862142, 11);
  sqcRYGate(q, 3.1135802574217, 12);
  sqcRZGate(q, 0.556261499708933, 12);
  sqcRYGate(q, 3.1398226307903556, 13);
  sqcRZGate(q, -2.968154961110487, 13);
  sqcRYGate(q, -1.4382327147879324, 14);
  sqcRZGate(q, -3.045428691493517, 14);
  sqcRYGate(q, -2.8832126910682487, 15);
  sqcRZGate(q, -0.004934189582718617, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.5792173758654267, 0);
  sqcRZGate(q, 2.48727811490721, 0);
  sqcRYGate(q, 0.06372188373343057, 1);
  sqcRZGate(q, -2.135873421470051, 1);
  sqcRYGate(q, -1.939950058342923, 2);
  sqcRZGate(q, 2.6559472734900944, 2);
  sqcRYGate(q, -1.8886061244521821, 3);
  sqcRZGate(q, -0.021116081996713398, 3);
  sqcRYGate(q, 2.966911163043703, 4);
  sqcRZGate(q, 2.183005520756124, 4);
  sqcRYGate(q, 3.1364448219372947, 5);
  sqcRZGate(q, -0.8098293252928386, 5);
  sqcRYGate(q, -0.06505656696186168, 6);
  sqcRZGate(q, 1.265651356187863, 6);
  sqcRYGate(q, -1.570731667115326, 7);
  sqcRZGate(q, -0.013135903454458031, 7);
  sqcRYGate(q, 1.5758610421097274, 8);
  sqcRZGate(q, -3.0768356325841153, 8);
  sqcRYGate(q, 3.101736966951895, 9);
  sqcRZGate(q, -1.806282965965899, 9);
  sqcRYGate(q, 1.1331353039691106, 10);
  sqcRZGate(q, 2.1437427781731104, 10);
  sqcRYGate(q, 0.7826221869401877, 11);
  sqcRZGate(q, 2.135148603970703, 11);
  sqcRYGate(q, -0.04731020944364061, 12);
  sqcRZGate(q, -2.662074566797248, 12);
  sqcRYGate(q, 0.023983399104209546, 13);
  sqcRZGate(q, -3.0470333020975406, 13);
  sqcRYGate(q, 3.1098894315636185, 14);
  sqcRZGate(q, 1.6995742832223388, 14);
  sqcRYGate(q, -1.5688262999050313, 15);
  sqcRZGate(q, -0.00658925134994881, 15);

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
