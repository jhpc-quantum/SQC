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

  sqcRYGate(q, -0.7690323704422755, 0);
  sqcRZGate(q, -2.3026107325597915, 0);
  sqcRYGate(q, -1.6392126629298798, 1);
  sqcRZGate(q, -2.152950296120272, 1);
  sqcRYGate(q, 2.6231841130519036, 2);
  sqcRZGate(q, 1.692726909023037, 2);
  sqcRYGate(q, -2.3186233240078717, 3);
  sqcRZGate(q, 0.4716951369127962, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9136153699866344, 0);
  sqcRZGate(q, 2.6013053027280137, 0);
  sqcRYGate(q, 0.5637300133184651, 1);
  sqcRZGate(q, 1.966256764369919, 1);
  sqcRYGate(q, -1.9149494812383931, 2);
  sqcRZGate(q, 0.4705637155965308, 2);
  sqcRYGate(q, -0.3890691833996309, 3);
  sqcRZGate(q, -2.0063686287137514, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.7667829494350298, 0);
  sqcRZGate(q, -2.5590327466966833, 0);
  sqcRYGate(q, -1.6851704840192179, 1);
  sqcRZGate(q, 2.8417113558546196, 1);
  sqcRYGate(q, -2.609541541576904, 2);
  sqcRZGate(q, 0.71080237239235, 2);
  sqcRYGate(q, -0.729222042275489, 3);
  sqcRZGate(q, -3.0539683814556104, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.4458604660996692, 0);
  sqcRZGate(q, -1.1674621578932316, 0);
  sqcRYGate(q, 0.7739423608254281, 1);
  sqcRZGate(q, 1.5355156163987693, 1);
  sqcRYGate(q, -1.2556068583193083, 2);
  sqcRZGate(q, -0.89333002824364, 2);
  sqcRYGate(q, -0.3963416513627876, 3);
  sqcRZGate(q, 2.9572890933812475, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.7357970876123137, 0);
  sqcRZGate(q, 2.954563519707158, 0);
  sqcRYGate(q, -1.60232961079182, 1);
  sqcRZGate(q, -0.967412219649736, 1);
  sqcRYGate(q, -2.494261707382523, 2);
  sqcRZGate(q, -2.4236240528171393, 2);
  sqcRYGate(q, -1.9745376966312111, 3);
  sqcRZGate(q, -2.135904072866609, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5910849787010932, 0);
  sqcRZGate(q, -1.0935762817140007, 0);
  sqcRYGate(q, 0.4882823211127188, 1);
  sqcRZGate(q, 2.7220303427006853, 1);
  sqcRYGate(q, -1.6436080069683392, 2);
  sqcRZGate(q, -1.3872452457157562, 2);
  sqcRYGate(q, -1.2873317342474453, 3);
  sqcRZGate(q, -2.3313258910545303, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.9126503502705003, 0);
  sqcRZGate(q, 0.29481237661070203, 0);
  sqcRYGate(q, -2.414701416278577, 1);
  sqcRZGate(q, 1.1518755844519044, 1);
  sqcRYGate(q, 0.6724925336022797, 2);
  sqcRZGate(q, 1.9916749988114353, 2);
  sqcRYGate(q, -1.4641191067922037, 3);
  sqcRZGate(q, -2.640116589176642, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.18748907808346166, 0);
  sqcRZGate(q, -0.29826438176718906, 0);
  sqcRYGate(q, -1.501373662644343, 1);
  sqcRZGate(q, 1.5920692426986403, 1);
  sqcRYGate(q, -0.47438108312085076, 2);
  sqcRZGate(q, -0.02538239922691954, 2);
  sqcRYGate(q, -2.9374247882666475, 3);
  sqcRZGate(q, 0.5862849415317193, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.0705835366514878, 0);
  sqcRZGate(q, -0.3186797357730694, 0);
  sqcRYGate(q, 0.19885011619509818, 1);
  sqcRZGate(q, -2.9366836661447118, 1);
  sqcRYGate(q, -2.8675251048970885, 2);
  sqcRZGate(q, 2.1414177886979315, 2);
  sqcRYGate(q, -0.6393834464597871, 3);
  sqcRZGate(q, 3.079869761753727, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.7105287786913728, 0);
  sqcRZGate(q, 2.1599628491863756, 0);
  sqcRYGate(q, 0.9615605719052471, 1);
  sqcRZGate(q, -2.4895273586583646, 1);
  sqcRYGate(q, -0.7789642460690783, 2);
  sqcRZGate(q, -2.0388340230591044, 2);
  sqcRYGate(q, -2.2850782310607296, 3);
  sqcRZGate(q, -0.7325317442466033, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.223255126420218, 0);
  sqcRZGate(q, -1.2796973481806138, 0);
  sqcRYGate(q, 1.222611582648292, 1);
  sqcRZGate(q, -2.4759494835658105, 1);
  sqcRYGate(q, -0.02252670915871616, 2);
  sqcRZGate(q, 2.0709388754391056, 2);
  sqcRYGate(q, 1.178431652424797, 3);
  sqcRZGate(q, 0.5277193866333532, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.490597617384841, 0);
  sqcRZGate(q, -1.562463249851895, 0);
  sqcRYGate(q, 0.17827688583938922, 1);
  sqcRZGate(q, 0.23852017933639846, 1);
  sqcRYGate(q, -1.219368273197321, 2);
  sqcRZGate(q, -1.5032511574514178, 2);
  sqcRYGate(q, -2.0598462125409807, 3);
  sqcRZGate(q, -0.346216767304945, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6443587665733805, 0);
  sqcRZGate(q, 1.8448438809257572, 0);
  sqcRYGate(q, -1.5638234104217474, 1);
  sqcRZGate(q, 2.5842253629108023, 1);
  sqcRYGate(q, -0.8040393124980234, 2);
  sqcRZGate(q, -1.8142233742925864, 2);
  sqcRYGate(q, 0.43547380507880823, 3);
  sqcRZGate(q, -0.17205118634612426, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.409178849471765, 0);
  sqcRZGate(q, -2.4257570111559255, 0);
  sqcRYGate(q, 0.4481271511014893, 1);
  sqcRZGate(q, -1.6579931055356605, 1);
  sqcRYGate(q, -2.7491750552534757, 2);
  sqcRZGate(q, -1.7349585879603469, 2);
  sqcRYGate(q, 2.0365550056567443, 3);
  sqcRZGate(q, -1.0420663272630468, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.0730727034012224, 0);
  sqcRZGate(q, 1.2707579500395667, 0);
  sqcRYGate(q, 0.07963493328890879, 1);
  sqcRZGate(q, -2.357553461582796, 1);
  sqcRYGate(q, -1.3648611009495735, 2);
  sqcRZGate(q, 1.1527976221258438, 2);
  sqcRYGate(q, 0.2934186124047361, 3);
  sqcRZGate(q, -2.525551791527648, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.2316224500244495, 0);
  sqcRZGate(q, 2.278092447705363, 0);
  sqcRYGate(q, -0.48325358018587394, 1);
  sqcRZGate(q, 1.710745673758085, 1);
  sqcRYGate(q, -0.8969919984665252, 2);
  sqcRZGate(q, -0.5114460980862834, 2);
  sqcRYGate(q, 1.2725333714983607, 3);
  sqcRZGate(q, 0.5325603630076783, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.3832574205693255, 0);
  sqcRZGate(q, 2.2047176730560585, 0);
  sqcRYGate(q, -0.7680565256663696, 1);
  sqcRZGate(q, -0.7989100325163995, 1);
  sqcRYGate(q, 2.3823067167107053, 2);
  sqcRZGate(q, -0.7910280702044992, 2);
  sqcRYGate(q, 1.1784942398884268, 3);
  sqcRZGate(q, -2.1564056519199113, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.384986212630306, 0);
  sqcRZGate(q, 1.5964763466830718, 0);
  sqcRYGate(q, -2.8150679471472317, 1);
  sqcRZGate(q, 0.3881949308025836, 1);
  sqcRYGate(q, -0.16090677139050852, 2);
  sqcRZGate(q, -1.4898813408549865, 2);
  sqcRYGate(q, 1.3795555881110892, 3);
  sqcRZGate(q, 2.2149892356989525, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7614064153229162, 0);
  sqcRZGate(q, -1.3681832411509023, 0);
  sqcRYGate(q, -0.2700998749643381, 1);
  sqcRZGate(q, 3.020469380760313, 1);
  sqcRYGate(q, 1.0046668601874627, 2);
  sqcRZGate(q, -2.291341695182526, 2);
  sqcRYGate(q, -0.5311170140377703, 3);
  sqcRZGate(q, -2.4875704327135204, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.8921676862046803, 0);
  sqcRZGate(q, -0.44758711268249496, 0);
  sqcRYGate(q, 2.609919291581659, 1);
  sqcRZGate(q, -0.012216702926860385, 1);
  sqcRYGate(q, 3.1352186122659256, 2);
  sqcRZGate(q, 0.5966442291698879, 2);
  sqcRYGate(q, 2.1406909513769525, 3);
  sqcRZGate(q, -1.6309669459911433, 3);

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
