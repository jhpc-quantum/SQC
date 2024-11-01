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

  sqcRYGate(q, 2.4980809854220887, 0);
  sqcRYGate(q, -1.6960954780739412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4401817372920798, 0);
  sqcRYGate(q, 1.1233861687930333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12905446492981335, 2);
  sqcRYGate(q, 0.421514463147526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.30017313193461437, 2);
  sqcRYGate(q, -1.9539405521694864, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9202779691825326, 4);
  sqcRYGate(q, -2.1380599082967113, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9755958233923518, 4);
  sqcRYGate(q, -2.9074134363756587, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5299050857981498, 6);
  sqcRYGate(q, 0.25772774110336766, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3377064785918913, 6);
  sqcRYGate(q, 0.8432421552845595, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9111147553820897, 1);
  sqcRYGate(q, -0.6998092906397018, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.06252779818622134, 1);
  sqcRYGate(q, -3.0486613919963053, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.745002788788561, 3);
  sqcRYGate(q, -2.771332554297395, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5194881341615005, 3);
  sqcRYGate(q, -1.4878760035145389, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9240313486739514, 5);
  sqcRYGate(q, 1.3177613780163293, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6167573767860044, 5);
  sqcRYGate(q, 3.06215794458846, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.503314760232793, 0);
  sqcRYGate(q, -2.915145206861498, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.407817161704387, 0);
  sqcRYGate(q, -2.372588061146663, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5123314886087902, 2);
  sqcRYGate(q, 1.2038678072318696, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2025605343865475, 2);
  sqcRYGate(q, -1.6024281316591962, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5891787040027996, 4);
  sqcRYGate(q, 2.337237730521129, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.099511801255133, 4);
  sqcRYGate(q, 2.6848469131855253, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.960352012466302, 6);
  sqcRYGate(q, 1.6623566344201244, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1569036905741938, 6);
  sqcRYGate(q, 1.1920722522899876, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9332125250557715, 1);
  sqcRYGate(q, 1.7373661717043583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.23568973639091517, 1);
  sqcRYGate(q, 0.9373167561543648, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.594567466458963, 3);
  sqcRYGate(q, -0.6176332081499698, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.615755662295481, 3);
  sqcRYGate(q, 1.9019207318991063, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6306420031435325, 5);
  sqcRYGate(q, 0.2987871837272275, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.208823855900482, 5);
  sqcRYGate(q, 3.1308115549502324, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.14829393970631738, 0);
  sqcRYGate(q, 2.0114412641144384, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06672156250741867, 0);
  sqcRYGate(q, 1.5957044746609474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.460443172365228, 2);
  sqcRYGate(q, -2.3687982632691327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.219831693029408, 2);
  sqcRYGate(q, -2.4512152628186628, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.973765986389349, 4);
  sqcRYGate(q, 3.0936906610719492, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.004487066593257, 4);
  sqcRYGate(q, 0.9537395637187366, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.592025669776318, 6);
  sqcRYGate(q, -0.46258179950555633, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.399100568926836, 6);
  sqcRYGate(q, 1.0002925196111283, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3885756169610555, 1);
  sqcRYGate(q, 0.13552042510149054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.013239349288699, 1);
  sqcRYGate(q, -0.06465326539463381, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4308830858558674, 3);
  sqcRYGate(q, -1.5077636237277652, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.24599213904529194, 3);
  sqcRYGate(q, 1.4935504856516355, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7569017107091853, 5);
  sqcRYGate(q, -0.6749924781326806, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8793426585995525, 5);
  sqcRYGate(q, 3.0796800541918063, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.428657482736772, 0);
  sqcRYGate(q, -2.662441436539256, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5861446118694253, 0);
  sqcRYGate(q, 1.6278843092493034, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11278936366261051, 2);
  sqcRYGate(q, -1.9242535922569517, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3549575878956692, 2);
  sqcRYGate(q, -2.6739673345740176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.065982328499935, 4);
  sqcRYGate(q, 0.682268482254166, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3160004538693857, 4);
  sqcRYGate(q, -0.26419631794713, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5473256214416206, 6);
  sqcRYGate(q, 0.010142153974161516, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.867086572366083, 6);
  sqcRYGate(q, 0.6153262767332576, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.634008139088015, 1);
  sqcRYGate(q, 3.043698434460047, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.062714125485362, 1);
  sqcRYGate(q, 0.9567019613380743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5932846171470385, 3);
  sqcRYGate(q, 2.0351905483166, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8855676262819135, 3);
  sqcRYGate(q, -1.202809328730122, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3446396509383227, 5);
  sqcRYGate(q, 1.69521153491155, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9063068480780674, 5);
  sqcRYGate(q, -3.1289144586309745, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5615423446950525, 0);
  sqcRYGate(q, -1.8074873922456378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5960235317528966, 0);
  sqcRYGate(q, 1.3283505904430755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3281957524835382, 2);
  sqcRYGate(q, -2.67095574409951, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4609754915707466, 2);
  sqcRYGate(q, -2.490033295295529, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6597953559412081, 4);
  sqcRYGate(q, -3.0872166916399157, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7730049947349613, 4);
  sqcRYGate(q, -1.5686204363488727, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5950386499504539, 6);
  sqcRYGate(q, 1.9531706379749734, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4834540775206069, 6);
  sqcRYGate(q, -0.8877499613897429, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6345645174990588, 1);
  sqcRYGate(q, -2.343394703797592, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3642767591108824, 1);
  sqcRYGate(q, 0.15931289507197618, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1965840976132718, 3);
  sqcRYGate(q, 2.4481144097107963, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5796218676705531, 3);
  sqcRYGate(q, -0.19311930806070257, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0794497100214477, 5);
  sqcRYGate(q, 1.6002676670753526, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.342425239912002, 5);
  sqcRYGate(q, 1.4699603077817418, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.11314480694495245, 0);
  sqcRYGate(q, 2.419973679069468, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9745612215952341, 0);
  sqcRYGate(q, -3.128261218093119, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1171741167515892, 2);
  sqcRYGate(q, 2.611115069885643, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4678548117649304, 2);
  sqcRYGate(q, -0.027458722523650274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.345901932741966, 4);
  sqcRYGate(q, 2.5880166835962886, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.704210904611115, 4);
  sqcRYGate(q, -2.1079808731660763, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5746094565684787, 6);
  sqcRYGate(q, -2.971854029944189, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5544370431681909, 6);
  sqcRYGate(q, 3.1172807192985337, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5477129998098151, 1);
  sqcRYGate(q, -2.124436959974672, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1095413417813584, 1);
  sqcRYGate(q, 2.5326132701117725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4093332591896141, 3);
  sqcRYGate(q, -0.05886137432944505, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4526236285907923, 3);
  sqcRYGate(q, -3.064570430702336, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5803588203108978, 5);
  sqcRYGate(q, 1.6402540409553863, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8565017389330704, 5);
  sqcRYGate(q, -1.1184252105121963, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.549529725701304, 0);
  sqcRYGate(q, 1.199560356240302, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.055705547671603, 0);
  sqcRYGate(q, 1.7357982129040974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8281181173479342, 2);
  sqcRYGate(q, 2.501778155633072, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6435894954970167, 2);
  sqcRYGate(q, -1.9145982109643862, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4210103655126947, 4);
  sqcRYGate(q, -1.8160263788572577, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9904448130993453, 4);
  sqcRYGate(q, -2.1037497539657135, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2016287477107, 6);
  sqcRYGate(q, 0.29971724981845105, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2892803219165807, 6);
  sqcRYGate(q, 2.4871399156303418, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.902540043332368, 1);
  sqcRYGate(q, -2.648897886096549, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.05909962823136014, 1);
  sqcRYGate(q, -0.26040558408156145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.008486026163301, 3);
  sqcRYGate(q, 1.637459252319921, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3788068951409116, 3);
  sqcRYGate(q, -0.5783247076518814, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3180444966725124, 5);
  sqcRYGate(q, 1.9304808887965146, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.12027097783973861, 5);
  sqcRYGate(q, -0.03796335928521654, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6890890040647373, 0);
  sqcRYGate(q, 2.768879517565718, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.916058247063561, 0);
  sqcRYGate(q, -0.750657377759314, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4672594164915633, 2);
  sqcRYGate(q, 0.34535672028324704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3836516903542693, 2);
  sqcRYGate(q, -3.0799368593804943, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7973129272708013, 4);
  sqcRYGate(q, -2.695836862786302, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8234580367423474, 4);
  sqcRYGate(q, 2.9560275559855866, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5280823201523202, 6);
  sqcRYGate(q, -1.8926689465577082, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8651141555261903, 6);
  sqcRYGate(q, -0.6533643407124927, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6747055605667184, 1);
  sqcRYGate(q, 2.6980563056259235, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.742269623247637, 1);
  sqcRYGate(q, -2.306583632748313, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.544304663505125, 3);
  sqcRYGate(q, 2.6350252411850845, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2223562897166556, 3);
  sqcRYGate(q, -0.9356091765450011, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8143885887736868, 5);
  sqcRYGate(q, 1.7272717703404743, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.04233902067982161, 5);
  sqcRYGate(q, -0.058217952701583746, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4513294438906597, 0);
  sqcRYGate(q, 0.6468146293444058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0512999854762533, 0);
  sqcRYGate(q, 0.7886002141246723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.445156697510142, 2);
  sqcRYGate(q, 2.1913571037053483, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.885785493630274, 2);
  sqcRYGate(q, -1.778595925807335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.23862229648337593, 4);
  sqcRYGate(q, -2.7053605944511316, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.642699983061115, 4);
  sqcRYGate(q, 0.3441564950193368, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.19479838163597393, 6);
  sqcRYGate(q, 2.8469326110793323, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5058476918396503, 6);
  sqcRYGate(q, 0.31152315812821035, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3084883897914263, 1);
  sqcRYGate(q, 1.5045358725642028, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8866692451156793, 1);
  sqcRYGate(q, -0.23284932074545853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.493502555297967, 3);
  sqcRYGate(q, -1.7651454350942477, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.029774472865744528, 3);
  sqcRYGate(q, -2.525999246324495, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4168181977085723, 5);
  sqcRYGate(q, -0.5139041243160458, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1113157455659046, 5);
  sqcRYGate(q, 2.9417942976465543, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.12011546437190071, 0);
  sqcRYGate(q, -0.7218833268141959, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10121906294319363, 0);
  sqcRYGate(q, -1.220322208995564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4946351276657683, 2);
  sqcRYGate(q, 2.895602527302282, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9448725928402077, 2);
  sqcRYGate(q, 2.3796211691509948, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.596169941167994, 4);
  sqcRYGate(q, 1.99003200553787, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.765571671815235, 4);
  sqcRYGate(q, 0.5349164026398936, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.12299681680395924, 6);
  sqcRYGate(q, -1.4894906936539796, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5007605113735483, 6);
  sqcRYGate(q, 0.20301921770488016, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6823281576629974, 1);
  sqcRYGate(q, -0.6392155729004383, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.669755142593403, 1);
  sqcRYGate(q, 2.8372462991440086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4741871041145194, 3);
  sqcRYGate(q, -2.0762495005059414, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1225069452163807, 3);
  sqcRYGate(q, -1.2505841214254119, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9078186371168286, 5);
  sqcRYGate(q, 2.844008071975243, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.081338113429611, 5);
  sqcRYGate(q, 3.025318185828359, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.832655476645221, 0);
  sqcRYGate(q, -1.9394791689199575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7546170224561123, 0);
  sqcRYGate(q, -2.8501718082708463, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.97535458715957, 2);
  sqcRYGate(q, 1.649285149219274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7448269936835503, 2);
  sqcRYGate(q, -0.23445818981842456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.704265993867023, 4);
  sqcRYGate(q, 1.7808486778404378, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1836781046423726, 4);
  sqcRYGate(q, 2.9813107060511395, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2768866237920519, 6);
  sqcRYGate(q, 1.794632847849977, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9801335347617868, 6);
  sqcRYGate(q, -2.9669861509046274, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8313455026969594, 1);
  sqcRYGate(q, 2.8505530985406122, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9738278039763597, 1);
  sqcRYGate(q, -1.3374485002656593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6230129037114245, 3);
  sqcRYGate(q, 1.3091555314527448, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7643811405244136, 3);
  sqcRYGate(q, -1.879079037620346, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5793440647608236, 5);
  sqcRYGate(q, -0.9013037389166936, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8668211104004424, 5);
  sqcRYGate(q, 1.1097206567704223, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4470285026095806, 0);
  sqcRYGate(q, -3.0977476271299755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1482230547409964, 0);
  sqcRYGate(q, -1.428252881668283, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7546937689672494, 2);
  sqcRYGate(q, -1.59040451208579, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4935812188423139, 2);
  sqcRYGate(q, 1.596428047242827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.466488665097971, 4);
  sqcRYGate(q, -0.03658955968586678, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.01680330983915226, 4);
  sqcRYGate(q, 2.6172371308433693, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.009176705618582, 6);
  sqcRYGate(q, -2.571604424417933, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9618059834519627, 6);
  sqcRYGate(q, 0.2533601196850978, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6218646200929188, 1);
  sqcRYGate(q, 1.6748907181778616, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3325809920305316, 1);
  sqcRYGate(q, -2.8978786112785575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.149612453862675, 3);
  sqcRYGate(q, -2.0154353812194388, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.774067012966113, 3);
  sqcRYGate(q, -3.1396805831094787, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.442130365483921, 5);
  sqcRYGate(q, 2.3724497952353465, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8046230091543969, 5);
  sqcRYGate(q, 2.554979361928728, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9445813049760865, 0);
  sqcRYGate(q, 0.17246518174719921, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.943401126563317, 0);
  sqcRYGate(q, 1.0669209482936575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.691841186032222, 2);
  sqcRYGate(q, -2.4364540374326737, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.018192343446104, 2);
  sqcRYGate(q, 1.2556350961953442, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3962725266715132, 4);
  sqcRYGate(q, -0.14234377130555168, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9496772138947858, 4);
  sqcRYGate(q, -3.042773099346152, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6073260810739063, 6);
  sqcRYGate(q, -0.18971430128027222, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6765879293637953, 6);
  sqcRYGate(q, 0.8851323788907592, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4638385442088504, 1);
  sqcRYGate(q, -2.338976603035294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.07870286686250844, 1);
  sqcRYGate(q, 1.518711128920156, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.20306603874890364, 3);
  sqcRYGate(q, -0.6381467731440669, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6958604884886355, 3);
  sqcRYGate(q, 2.6139317353323577, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8677820938669596, 5);
  sqcRYGate(q, -2.7388150407700826, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.17736975795751062, 5);
  sqcRYGate(q, 2.704850160645383, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6147368907809563, 0);
  sqcRYGate(q, -2.9812926533467192, 1);
  sqcRYGate(q, -0.1845097450036803, 2);
  sqcRYGate(q, 0.9664371974607733, 3);
  sqcRYGate(q, 0.06665626171516859, 4);
  sqcRYGate(q, -1.610441171376876, 5);
  sqcRYGate(q, 1.372028288701915, 6);
  sqcRYGate(q, -1.305271878717691, 7);

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
