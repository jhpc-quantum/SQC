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

  sqcRYGate(q, 0.6176144490944624, 0);
  sqcRZGate(q, 1.5485846429822416, 0);
  sqcRYGate(q, 1.5840582896993245, 1);
  sqcRZGate(q, 0.9194971510831493, 1);
  sqcRYGate(q, -1.471846969036453, 2);
  sqcRZGate(q, 2.7482434774798565, 2);
  sqcRYGate(q, -2.391752776874008, 3);
  sqcRZGate(q, 2.1476294307161696, 3);
  sqcRYGate(q, -0.11889672269326627, 4);
  sqcRZGate(q, -1.3514339983121628, 4);
  sqcRYGate(q, -4.4583701844538456e-05, 5);
  sqcRZGate(q, -1.6912469955950247, 5);
  sqcRYGate(q, 2.8152535999988313, 6);
  sqcRZGate(q, -0.21430225295239413, 6);
  sqcRYGate(q, -0.1093010598797104, 7);
  sqcRZGate(q, 0.06952438808617568, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.9727200696701805, 0);
  sqcRZGate(q, 0.25894163222764544, 0);
  sqcRYGate(q, 0.8073674575219211, 1);
  sqcRZGate(q, 2.6826735298343163, 1);
  sqcRYGate(q, 2.088006102947276, 2);
  sqcRZGate(q, 1.7321657170400437, 2);
  sqcRYGate(q, -2.799123332138787, 3);
  sqcRZGate(q, -1.8424862040434418, 3);
  sqcRYGate(q, 3.0490361038478495, 4);
  sqcRZGate(q, -2.7184999848255367, 4);
  sqcRYGate(q, -0.0009786641252595984, 5);
  sqcRZGate(q, 0.7718148020434592, 5);
  sqcRYGate(q, 0.1509499725490384, 6);
  sqcRZGate(q, -3.0582424286201237, 6);
  sqcRYGate(q, 3.122009326093269, 7);
  sqcRZGate(q, 1.122585647066444, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.350469297192172, 0);
  sqcRZGate(q, -0.2556077996825507, 0);
  sqcRYGate(q, 2.5903343747304395, 1);
  sqcRZGate(q, 1.0135764863021002, 1);
  sqcRYGate(q, -2.9260406822932534, 2);
  sqcRZGate(q, -0.45412486964405385, 2);
  sqcRYGate(q, 2.526583162770178, 3);
  sqcRZGate(q, -0.6965734826238464, 3);
  sqcRYGate(q, 0.06284893416878212, 4);
  sqcRZGate(q, -1.7214998261743413, 4);
  sqcRYGate(q, -3.1403397574961387, 5);
  sqcRZGate(q, -1.5752167551755611, 5);
  sqcRYGate(q, 2.9717945170711686, 6);
  sqcRZGate(q, -2.581284701267638, 6);
  sqcRYGate(q, 1.0778502327381447, 7);
  sqcRZGate(q, 1.418122198282744, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.114940311343042, 0);
  sqcRZGate(q, 3.025471530023405, 0);
  sqcRYGate(q, -1.922804240653056, 1);
  sqcRZGate(q, -2.4524108356815906, 1);
  sqcRYGate(q, -0.2215827167130353, 2);
  sqcRZGate(q, 1.2924431829061742, 2);
  sqcRYGate(q, -2.707445834081947, 3);
  sqcRZGate(q, -2.407831544441682, 3);
  sqcRYGate(q, -3.042511919422571, 4);
  sqcRZGate(q, -0.9497381436218597, 4);
  sqcRYGate(q, 3.12301441729222, 5);
  sqcRZGate(q, 1.2820140320638305, 5);
  sqcRYGate(q, 0.0445444694026671, 6);
  sqcRZGate(q, -2.7930938542368606, 6);
  sqcRYGate(q, -2.7228046192611757, 7);
  sqcRZGate(q, -2.937085618243972, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.111584357458324, 0);
  sqcRZGate(q, -2.4981753576848433, 0);
  sqcRYGate(q, -1.0418808084041769, 1);
  sqcRZGate(q, -2.7971453326095617, 1);
  sqcRYGate(q, -3.0260810599663324, 2);
  sqcRZGate(q, -1.1700658762394212, 2);
  sqcRYGate(q, 3.0938184352543634, 3);
  sqcRZGate(q, 1.7107999583074505, 3);
  sqcRYGate(q, 0.04865133160405678, 4);
  sqcRZGate(q, -0.9772438044147328, 4);
  sqcRYGate(q, -0.0004849308286386644, 5);
  sqcRZGate(q, -0.3981959735716841, 5);
  sqcRYGate(q, 0.07651666996117523, 6);
  sqcRZGate(q, -2.768352823144805, 6);
  sqcRYGate(q, 1.1805124684562305, 7);
  sqcRZGate(q, -2.1157951834530655, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.22748326375853734, 0);
  sqcRZGate(q, -0.974565692730005, 0);
  sqcRYGate(q, -0.2487858355681642, 1);
  sqcRZGate(q, 2.801585465588159, 1);
  sqcRYGate(q, -0.4825840528241658, 2);
  sqcRZGate(q, 0.5135837559268845, 2);
  sqcRYGate(q, 2.618594201630925, 3);
  sqcRZGate(q, -0.5740775775320968, 3);
  sqcRYGate(q, 3.028404365425883, 4);
  sqcRZGate(q, 0.3498512923380126, 4);
  sqcRYGate(q, -3.0014450086000317, 5);
  sqcRZGate(q, -2.0284536018674526, 5);
  sqcRYGate(q, -1.0360705267660768, 6);
  sqcRZGate(q, -0.5367407861560655, 6);
  sqcRYGate(q, -1.6754898514852892, 7);
  sqcRZGate(q, -0.27218543396677486, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.331223445993605, 0);
  sqcRZGate(q, 1.8883369570113313, 0);
  sqcRYGate(q, -1.980474131922189, 1);
  sqcRZGate(q, 0.8974192754005018, 1);
  sqcRYGate(q, -2.429577449577009, 2);
  sqcRZGate(q, -2.538444505593416, 2);
  sqcRYGate(q, -1.1909463244195424, 3);
  sqcRZGate(q, -1.6109274565467953, 3);
  sqcRYGate(q, 3.1397059381553416, 4);
  sqcRZGate(q, 0.23294866077315113, 4);
  sqcRYGate(q, -0.1348000422535325, 5);
  sqcRZGate(q, -3.0557400459305537, 5);
  sqcRYGate(q, 0.026418854329769044, 6);
  sqcRZGate(q, -2.5676121707913144, 6);
  sqcRYGate(q, 2.871800854306024, 7);
  sqcRZGate(q, -2.823161418778465, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.6922957141952235, 0);
  sqcRZGate(q, -2.7448934870590564, 0);
  sqcRYGate(q, 0.8447742736097306, 1);
  sqcRZGate(q, 2.3979966568168485, 1);
  sqcRYGate(q, -0.566846621677743, 2);
  sqcRZGate(q, -0.9135742719054382, 2);
  sqcRYGate(q, 0.4181061645433875, 3);
  sqcRZGate(q, 0.6832539088145264, 3);
  sqcRYGate(q, 0.14613040056092966, 4);
  sqcRZGate(q, 2.3798825380692077, 4);
  sqcRYGate(q, 0.0026637467517813813, 5);
  sqcRZGate(q, -1.2912633056780018, 5);
  sqcRYGate(q, -0.9809530675087571, 6);
  sqcRZGate(q, -2.191271434982344, 6);
  sqcRYGate(q, 0.014592304940679254, 7);
  sqcRZGate(q, 2.673628348005777, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.130958949809619, 0);
  sqcRZGate(q, 1.7262869389700128, 0);
  sqcRYGate(q, -1.0517279597338662, 1);
  sqcRZGate(q, -0.8920181501398047, 1);
  sqcRYGate(q, -2.0639929394402508, 2);
  sqcRZGate(q, -2.719810365865624, 2);
  sqcRYGate(q, -1.5407054858152813, 3);
  sqcRZGate(q, -2.0669276834320893, 3);
  sqcRYGate(q, 0.09060839627695065, 4);
  sqcRZGate(q, -2.3070760512753, 4);
  sqcRYGate(q, -2.903300226098723, 5);
  sqcRZGate(q, 2.22596043747283, 5);
  sqcRYGate(q, 3.1363753577893627, 6);
  sqcRZGate(q, 2.7272107351543693, 6);
  sqcRYGate(q, -1.2753824752189515, 7);
  sqcRZGate(q, -2.0579136788165835, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.1540513224013145, 0);
  sqcRZGate(q, -2.02889665271503, 0);
  sqcRYGate(q, 2.1062746189350365, 1);
  sqcRZGate(q, -1.6164530357757936, 1);
  sqcRYGate(q, -0.6180256345767452, 2);
  sqcRZGate(q, -2.738956203946582, 2);
  sqcRYGate(q, -2.968548271060371, 3);
  sqcRZGate(q, -0.908009173046655, 3);
  sqcRYGate(q, 0.019770511925590213, 4);
  sqcRZGate(q, -3.0226723824215713, 4);
  sqcRYGate(q, 3.141487255001875, 5);
  sqcRZGate(q, 2.291931164643419, 5);
  sqcRYGate(q, -2.4307050638064327, 6);
  sqcRZGate(q, -0.6458754827376628, 6);
  sqcRYGate(q, -0.014947647651970332, 7);
  sqcRZGate(q, -2.8788693969970756, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.994866609157195, 0);
  sqcRZGate(q, -3.002287307770925, 0);
  sqcRYGate(q, 1.77173481782955, 1);
  sqcRZGate(q, -1.1714765653643842, 1);
  sqcRYGate(q, -0.8233243539319598, 2);
  sqcRZGate(q, -0.521605250977471, 2);
  sqcRYGate(q, -0.38642254921952424, 3);
  sqcRZGate(q, -3.07934342077639, 3);
  sqcRYGate(q, -3.0787786264917476, 4);
  sqcRZGate(q, -1.5013730998922776, 4);
  sqcRYGate(q, -2.888278825219033, 5);
  sqcRZGate(q, 0.11681142814836697, 5);
  sqcRYGate(q, 3.1361648257060817, 6);
  sqcRZGate(q, -0.8887645880004894, 6);
  sqcRYGate(q, 2.620795556469152, 7);
  sqcRZGate(q, -2.6565425750923275, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.2763574496422165, 0);
  sqcRZGate(q, -0.43971335848651183, 0);
  sqcRYGate(q, 2.3984809215378293, 1);
  sqcRZGate(q, 2.7440601948801744, 1);
  sqcRYGate(q, 0.10771300269677338, 2);
  sqcRZGate(q, -1.214001675419163, 2);
  sqcRYGate(q, 2.7029551117375696, 3);
  sqcRZGate(q, 1.9484483967729156, 3);
  sqcRYGate(q, 1.682521354495381, 4);
  sqcRZGate(q, -2.956525285492518, 4);
  sqcRYGate(q, 3.1414220151820285, 5);
  sqcRZGate(q, -0.9685122373323217, 5);
  sqcRYGate(q, 0.9367547707254458, 6);
  sqcRZGate(q, 0.9160584556612325, 6);
  sqcRYGate(q, -3.1396695885251207, 7);
  sqcRZGate(q, -0.7373003484039193, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.4903722424193249, 0);
  sqcRZGate(q, -0.7762030075174958, 0);
  sqcRYGate(q, 2.59146369833647, 1);
  sqcRZGate(q, 3.1257271160833926, 1);
  sqcRYGate(q, -0.039774690220443, 2);
  sqcRZGate(q, 1.969503852168295, 2);
  sqcRYGate(q, 2.9025724524172203, 3);
  sqcRZGate(q, -2.490732167635784, 3);
  sqcRYGate(q, -3.101765879056464, 4);
  sqcRZGate(q, 1.738416483936014, 4);
  sqcRYGate(q, -1.4971703163091297, 5);
  sqcRZGate(q, -1.1091710065436606, 5);
  sqcRYGate(q, 3.140138328933483, 6);
  sqcRZGate(q, -2.9885565333784663, 6);
  sqcRYGate(q, 2.0220024402231473, 7);
  sqcRZGate(q, 0.02879352417826553, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.9436202425259616, 0);
  sqcRZGate(q, -0.6712394478358387, 0);
  sqcRYGate(q, -1.7850813303677961, 1);
  sqcRZGate(q, -0.1593167230259725, 1);
  sqcRYGate(q, -3.0855611078616514, 2);
  sqcRZGate(q, -2.2243181733995803, 2);
  sqcRYGate(q, -0.006886225718378362, 3);
  sqcRZGate(q, -0.8620626082791034, 3);
  sqcRYGate(q, 1.753394720195941, 4);
  sqcRZGate(q, 2.478242698152206, 4);
  sqcRYGate(q, -0.0017693561634719254, 5);
  sqcRZGate(q, -0.2783109653475986, 5);
  sqcRYGate(q, -0.07292320270184849, 6);
  sqcRZGate(q, 2.076043679815817, 6);
  sqcRYGate(q, -1.570444233282983, 7);
  sqcRZGate(q, -2.6943159270534163, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.26390982566095467, 0);
  sqcRZGate(q, 2.3075798441585316, 0);
  sqcRYGate(q, -2.182779118363813, 1);
  sqcRZGate(q, 1.3286189264851487, 1);
  sqcRYGate(q, 1.5328489015504068, 2);
  sqcRZGate(q, -1.5577285811659412, 2);
  sqcRYGate(q, -1.3242893360921943, 3);
  sqcRZGate(q, -0.6337275722132851, 3);
  sqcRYGate(q, 0.000882226955411, 4);
  sqcRZGate(q, -2.4274754818055833, 4);
  sqcRYGate(q, -3.140789957056193, 5);
  sqcRZGate(q, 1.6788663281747782, 5);
  sqcRYGate(q, 1.5244444934960635, 6);
  sqcRZGate(q, 2.4526571158851347, 6);
  sqcRYGate(q, 3.123509624867499, 7);
  sqcRZGate(q, -0.24847629061333087, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.0072265777136264475, 0);
  sqcRZGate(q, -0.6091630388462024, 0);
  sqcRYGate(q, -1.3531929131523217, 1);
  sqcRZGate(q, -0.5415649204060555, 1);
  sqcRYGate(q, -1.9650659757421944, 2);
  sqcRZGate(q, 0.029482700470667034, 2);
  sqcRYGate(q, -3.063378254311998, 3);
  sqcRZGate(q, -2.1492410936615043, 3);
  sqcRYGate(q, 1.2536155553596515, 4);
  sqcRZGate(q, -0.2622960548833024, 4);
  sqcRYGate(q, 3.1415686075811573, 5);
  sqcRZGate(q, 0.18394746008884746, 5);
  sqcRYGate(q, 0.014611941144206513, 6);
  sqcRZGate(q, -2.59969639479206, 6);
  sqcRYGate(q, -3.1249239419344983, 7);
  sqcRZGate(q, 1.1348593433403233, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.9635384227767467, 0);
  sqcRZGate(q, 2.4358393552168494, 0);
  sqcRYGate(q, 0.17813848199776672, 1);
  sqcRZGate(q, -2.2130010337590083, 1);
  sqcRYGate(q, -1.7192299665654878, 2);
  sqcRZGate(q, -1.8078723924607505, 2);
  sqcRYGate(q, 3.010634178815548, 3);
  sqcRZGate(q, 2.6595006974442708, 3);
  sqcRYGate(q, -3.1413984602416805, 4);
  sqcRZGate(q, 1.35627856533795, 4);
  sqcRYGate(q, -3.1357675480689253, 5);
  sqcRZGate(q, -2.0139176632026365, 5);
  sqcRYGate(q, 1.8055242201611679, 6);
  sqcRZGate(q, 1.766494871234234, 6);
  sqcRYGate(q, 0.9670851880341433, 7);
  sqcRZGate(q, 1.109884968573807, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.7027657183631257, 0);
  sqcRZGate(q, 0.39695090378701103, 0);
  sqcRYGate(q, 3.00893587425816, 1);
  sqcRZGate(q, -0.1449182882766431, 1);
  sqcRYGate(q, -3.090943361323138, 2);
  sqcRZGate(q, 1.9541178216645596, 2);
  sqcRYGate(q, -3.0723269128257593, 3);
  sqcRZGate(q, 1.5406307799361372, 3);
  sqcRYGate(q, 1.476762188074491, 4);
  sqcRZGate(q, 3.0152592726145775, 4);
  sqcRYGate(q, 0.004889299808348026, 5);
  sqcRZGate(q, -1.8457553130764373, 5);
  sqcRYGate(q, 1.9046999972479723, 6);
  sqcRZGate(q, -1.1400176625670877, 6);
  sqcRYGate(q, 1.5731659971544478, 7);
  sqcRZGate(q, 1.8933282861525693, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.1162979473638797, 0);
  sqcRZGate(q, 1.6590694285490601, 0);
  sqcRYGate(q, 1.5181054418278688, 1);
  sqcRZGate(q, -0.14965910439659136, 1);
  sqcRYGate(q, -0.003214005617453885, 2);
  sqcRZGate(q, -0.9632220004423234, 2);
  sqcRYGate(q, 0.3455727655938894, 3);
  sqcRZGate(q, -1.3088441995977795, 3);
  sqcRYGate(q, -3.141572441697553, 4);
  sqcRZGate(q, 2.07078075603741, 4);
  sqcRYGate(q, -1.61161844433812, 5);
  sqcRZGate(q, 0.9135018101416135, 5);
  sqcRYGate(q, -1.7082229329588499, 6);
  sqcRZGate(q, -0.538146860259987, 6);
  sqcRYGate(q, 2.917376978401964, 7);
  sqcRZGate(q, -0.8448214017244732, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.365934190398151, 0);
  sqcRZGate(q, -1.5698038437807156, 0);
  sqcRYGate(q, 2.941061171344539, 1);
  sqcRZGate(q, 1.265682865606057, 1);
  sqcRYGate(q, 2.460431196048449, 2);
  sqcRZGate(q, -2.9390237020341936, 2);
  sqcRYGate(q, -0.10964743264601988, 3);
  sqcRZGate(q, 0.8775590101807742, 3);
  sqcRYGate(q, 3.039359826200275, 4);
  sqcRZGate(q, 2.6604690328731997, 4);
  sqcRYGate(q, -3.1400210811079474, 5);
  sqcRZGate(q, 0.22982064868147667, 5);
  sqcRYGate(q, -2.3372286761675087, 6);
  sqcRZGate(q, -0.3333006129917999, 6);
  sqcRYGate(q, -0.03332566159972296, 7);
  sqcRZGate(q, 2.996524155292764, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 3.1131366615845217, 0);
  sqcRZGate(q, -0.13296244854719763, 0);
  sqcRYGate(q, -1.55436434035481, 1);
  sqcRZGate(q, 0.6040092659188528, 1);
  sqcRYGate(q, -0.004381688006869094, 2);
  sqcRZGate(q, -0.9167874652307433, 2);
  sqcRYGate(q, 1.8083149004847396, 3);
  sqcRZGate(q, -1.44604789378937, 3);
  sqcRYGate(q, -4.519304589933881e-05, 4);
  sqcRZGate(q, 0.1833322721490362, 4);
  sqcRYGate(q, 0.1071436774736259, 5);
  sqcRZGate(q, -0.041791070242089334, 5);
  sqcRYGate(q, -2.246431284484239, 6);
  sqcRZGate(q, 0.15680241449766064, 6);
  sqcRYGate(q, 3.040412969033517, 7);
  sqcRZGate(q, -0.004205022757293546, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.7582691400739512, 0);
  sqcRZGate(q, -2.0267149068483166, 0);
  sqcRYGate(q, -0.8018957541851955, 1);
  sqcRZGate(q, -2.765936152637463, 1);
  sqcRYGate(q, 1.7360245802770138, 2);
  sqcRZGate(q, 1.7522801200855325, 2);
  sqcRYGate(q, -2.86804238880869, 3);
  sqcRZGate(q, -2.893785764234131, 3);
  sqcRYGate(q, 1.5849876265299716, 4);
  sqcRZGate(q, 1.4626000029449933, 4);
  sqcRYGate(q, 0.40552611616482476, 5);
  sqcRZGate(q, 2.4539235242951896, 5);
  sqcRYGate(q, -1.6591167308810915, 6);
  sqcRZGate(q, -2.776999778486582, 6);
  sqcRYGate(q, 0.2974856228021103, 7);
  sqcRZGate(q, 1.9944869050830132, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.1890021398401707, 0);
  sqcRZGate(q, 2.360200196656092, 0);
  sqcRYGate(q, 0.17816190321963354, 1);
  sqcRZGate(q, 2.4379893898302947, 1);
  sqcRYGate(q, -3.0424107882139295, 2);
  sqcRZGate(q, 0.6980639468911367, 2);
  sqcRYGate(q, -0.010854036508631815, 3);
  sqcRZGate(q, -0.14735176917591453, 3);
  sqcRYGate(q, -0.0002957324033202716, 4);
  sqcRZGate(q, 1.723583337381636, 4);
  sqcRYGate(q, 3.131518000331962, 5);
  sqcRZGate(q, 2.7210912318943627, 5);
  sqcRYGate(q, 2.9025942189514295, 6);
  sqcRZGate(q, 2.0541695886067313, 6);
  sqcRYGate(q, -1.676411674938849, 7);
  sqcRZGate(q, 2.066355296004305, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5075680650994716, 0);
  sqcRZGate(q, 0.08531132620789057, 0);
  sqcRYGate(q, 1.61660852859952, 1);
  sqcRZGate(q, -0.3600579545971554, 1);
  sqcRYGate(q, 2.882506222832697, 2);
  sqcRZGate(q, 2.4226369744456275, 2);
  sqcRYGate(q, 0.7987483559151604, 3);
  sqcRZGate(q, -1.4645778137509624, 3);
  sqcRYGate(q, 0.15653982069041614, 4);
  sqcRZGate(q, 1.4799018002731938, 4);
  sqcRYGate(q, -1.5913014320910532, 5);
  sqcRZGate(q, 2.035488230016633, 5);
  sqcRYGate(q, -3.1127529436075068, 6);
  sqcRZGate(q, -0.45016293960383624, 6);
  sqcRYGate(q, 1.4995055982897671, 7);
  sqcRZGate(q, -3.074420194076737, 7);

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
