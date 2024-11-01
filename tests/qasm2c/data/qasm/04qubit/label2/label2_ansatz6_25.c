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

  sqcRYGate(q, 1.9525691699104506, 0);
  sqcRYGate(q, -2.7382829438453107, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.862940112940232, 0);
  sqcRYGate(q, 2.2489148948705973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7549065907561066, 1);
  sqcRYGate(q, -1.2974661667100422, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04331254532237676, 1);
  sqcRYGate(q, 0.7663178025617734, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3674302712965503, 2);
  sqcRYGate(q, 2.7533228144605117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1261210714771908, 2);
  sqcRYGate(q, 0.3498212638892419, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2310230462482439, 0);
  sqcRYGate(q, 1.6247831149794747, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9969070446735746, 0);
  sqcRYGate(q, -1.7980525654432364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3070886491439873, 1);
  sqcRYGate(q, -0.2550797449194766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.44857416729894845, 1);
  sqcRYGate(q, 2.8564893445187183, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9754266772436764, 2);
  sqcRYGate(q, 0.87465827590521, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0103519397579, 2);
  sqcRYGate(q, 0.7155918696108956, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0665428606630574, 0);
  sqcRYGate(q, 2.290286655167419, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4621515869023982, 0);
  sqcRYGate(q, -2.4089975801682693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3870462347829953, 1);
  sqcRYGate(q, -1.169463529471905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.607559463290671, 1);
  sqcRYGate(q, 2.810836045387779, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7779007062364256, 2);
  sqcRYGate(q, -2.5036058488058988, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.19801409098044154, 2);
  sqcRYGate(q, 1.3163038497412378, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.302798579801886, 0);
  sqcRYGate(q, -0.6561361229618287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5724361708233792, 0);
  sqcRYGate(q, -1.5805086780246178, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.31498004533301305, 1);
  sqcRYGate(q, 2.2696398316413817, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.90531486781081, 1);
  sqcRYGate(q, -1.2134434066547315, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9165400239296986, 2);
  sqcRYGate(q, 2.281793283164358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7382530801903469, 2);
  sqcRYGate(q, -1.0904717518023994, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2267589595906093, 0);
  sqcRYGate(q, 2.1774924585360784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.634699750895115, 0);
  sqcRYGate(q, -0.8068778819285896, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4361719943498814, 1);
  sqcRYGate(q, 0.15864940457762433, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8672463856543215, 1);
  sqcRYGate(q, 3.008972941588844, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3703616697067804, 2);
  sqcRYGate(q, -0.6204921374714873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06508158179797885, 2);
  sqcRYGate(q, 2.527381849346333, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6953807506435113, 0);
  sqcRYGate(q, -0.03581084668135314, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4746444962587964, 0);
  sqcRYGate(q, 0.525512075809125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6695135225107443, 1);
  sqcRYGate(q, -0.7504500469474842, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5198995116126293, 1);
  sqcRYGate(q, 2.708493196314735, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0084755217108698, 2);
  sqcRYGate(q, -2.965881349638724, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6405016690707186, 2);
  sqcRYGate(q, 1.0138069719547382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.418822913410034, 0);
  sqcRYGate(q, -0.11123221554884655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8045312160755067, 0);
  sqcRYGate(q, 1.57137877762381, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7768556213997346, 1);
  sqcRYGate(q, 1.1334878861325406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9527356802499165, 1);
  sqcRYGate(q, 1.6901021586066278, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.98313928465531, 2);
  sqcRYGate(q, 1.17783626952194, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7978780486510999, 2);
  sqcRYGate(q, 0.14384362255424055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.817156393805143, 0);
  sqcRYGate(q, 3.0713710225471225, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7542959217347942, 0);
  sqcRYGate(q, -1.752886322470018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3770980403209787, 1);
  sqcRYGate(q, -1.8844407400369496, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3704221360372983, 1);
  sqcRYGate(q, 2.2563132904284133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.01911819856448466, 2);
  sqcRYGate(q, -2.764074205692212, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.934681542412875, 2);
  sqcRYGate(q, 0.4944535515801776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.426639337324448, 0);
  sqcRYGate(q, 1.7143889968953259, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4726741078450329, 0);
  sqcRYGate(q, -2.3710760368342467, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4022316791721705, 1);
  sqcRYGate(q, 0.04972415655072204, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7262268551185593, 1);
  sqcRYGate(q, 0.435452514980442, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9746114367557412, 2);
  sqcRYGate(q, -0.7687937792098269, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7517794426502455, 2);
  sqcRYGate(q, -1.18328111029607, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6973708477481388, 0);
  sqcRYGate(q, 1.4054623665891506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0986177469853757, 0);
  sqcRYGate(q, 1.195201496346563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1420777728739004, 1);
  sqcRYGate(q, -2.2162854411853883, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9869301341227635, 1);
  sqcRYGate(q, -2.9619285945458573, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1959978831253236, 2);
  sqcRYGate(q, 1.3316911702941168, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.78007045787548, 2);
  sqcRYGate(q, 3.113269544378775, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.994095475914903, 0);
  sqcRYGate(q, 2.2503146231351785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.18129233705904302, 0);
  sqcRYGate(q, -0.1968870287883977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.848951863971299, 1);
  sqcRYGate(q, 0.7281038696381845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.318080361431099, 1);
  sqcRYGate(q, 1.2853974025157284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.490283111877472, 2);
  sqcRYGate(q, -2.6145715063569255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6814587607387987, 2);
  sqcRYGate(q, 0.9229886651815488, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.690754125776524, 0);
  sqcRYGate(q, 1.5934054485012732, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.735543035976331, 0);
  sqcRYGate(q, 1.623581868617544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7289104389722962, 1);
  sqcRYGate(q, -1.9249626531966137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3792299315797711, 1);
  sqcRYGate(q, 2.4790854408354503, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.437452608381799, 2);
  sqcRYGate(q, -2.79337308767482, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9616105823566654, 2);
  sqcRYGate(q, -0.782585567184228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4450712533497939, 0);
  sqcRYGate(q, 1.6058618148043307, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4735072890235683, 0);
  sqcRYGate(q, 1.8443448433549445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7066074379946476, 1);
  sqcRYGate(q, 1.9627184524329155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1325692570572455, 1);
  sqcRYGate(q, -0.32800256608394557, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.548706373691376, 2);
  sqcRYGate(q, 2.9599189788228517, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0866455649275175, 2);
  sqcRYGate(q, 0.7084049866458555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8425248542039672, 0);
  sqcRYGate(q, -2.0376338804083405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8635609958467274, 0);
  sqcRYGate(q, 0.5640770366462023, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1266066823190837, 1);
  sqcRYGate(q, 0.2273596023852433, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.432982156027979, 1);
  sqcRYGate(q, 2.2446049333194726, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1678482073024608, 2);
  sqcRYGate(q, 1.9374965425658326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9894637380826099, 2);
  sqcRYGate(q, -0.0759333492751522, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5955738719302577, 0);
  sqcRYGate(q, 1.6213217644845204, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.728875981846275, 0);
  sqcRYGate(q, -0.4940175730555767, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.504780512185938, 1);
  sqcRYGate(q, 2.1885721918474523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9203236665130489, 1);
  sqcRYGate(q, -0.1332935348736327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5409790705080937, 2);
  sqcRYGate(q, 0.539331802945987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6202366892196216, 2);
  sqcRYGate(q, -2.111324756337712, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.687563710302831, 0);
  sqcRYGate(q, -1.2218127308547277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3452923842825957, 0);
  sqcRYGate(q, 3.079962640458828, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1211237765827164, 1);
  sqcRYGate(q, -0.7127595771513459, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5406158991609342, 1);
  sqcRYGate(q, 1.874236473693501, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.29798915893255007, 2);
  sqcRYGate(q, 1.9688314921527807, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.958183570946199, 2);
  sqcRYGate(q, 1.440294627672118, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.941678206341109, 0);
  sqcRYGate(q, -0.21281645344025965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2503577986691032, 0);
  sqcRYGate(q, 2.983529716785248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6526318268317506, 1);
  sqcRYGate(q, -3.054678266310048, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1275998511466812, 1);
  sqcRYGate(q, -0.0834868185358241, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5866586677459935, 2);
  sqcRYGate(q, -0.6833183849991165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3303989929183162, 2);
  sqcRYGate(q, -3.091116441066814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5450113155902199, 0);
  sqcRYGate(q, 3.045792949677642, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3364357660062893, 0);
  sqcRYGate(q, 0.23480733146606625, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2047697120611587, 1);
  sqcRYGate(q, 0.25560361820411287, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9906005618272529, 1);
  sqcRYGate(q, 1.9168119961551835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1992950938689528, 2);
  sqcRYGate(q, -1.0534222213187738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0687095587072144, 2);
  sqcRYGate(q, -0.39373818252916437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11176882072100477, 0);
  sqcRYGate(q, 2.6043429378555873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3011892367435896, 0);
  sqcRYGate(q, -1.7141672853428913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6946220180187288, 1);
  sqcRYGate(q, 1.0307190567807176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.707731462772812, 1);
  sqcRYGate(q, 2.2909987275067754, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.622840631356282, 2);
  sqcRYGate(q, -1.676854331931542, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2402233769240487, 2);
  sqcRYGate(q, 1.7495018139256853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.04467839907855383, 0);
  sqcRYGate(q, -0.5144286619845762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.24864536744137486, 0);
  sqcRYGate(q, 1.4915795962893175, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7954852402985795, 1);
  sqcRYGate(q, 0.35558632040088867, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2181137815919167, 1);
  sqcRYGate(q, 0.40923572500471206, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.022506554253023, 2);
  sqcRYGate(q, -0.41026927329581603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.458195196661694, 2);
  sqcRYGate(q, 0.8888888552529779, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9342430252118732, 0);
  sqcRYGate(q, -2.65317792617973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.095048336841561, 0);
  sqcRYGate(q, 1.5397172924370341, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8603047191937856, 1);
  sqcRYGate(q, -2.1104653558959696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0215224839932309, 1);
  sqcRYGate(q, 0.8030101125022492, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.133630887547877, 2);
  sqcRYGate(q, -2.233343870401897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.436686276362947, 2);
  sqcRYGate(q, 0.33401198257150094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0172787820185376, 0);
  sqcRYGate(q, -0.10424761102265112, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6590196050182751, 0);
  sqcRYGate(q, 1.2333264015240542, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7087050651413216, 1);
  sqcRYGate(q, 2.905438191256157, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.286988200937685, 1);
  sqcRYGate(q, -1.4306253282701265, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8295490211142286, 2);
  sqcRYGate(q, -2.3076850542315013, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06620161486177518, 2);
  sqcRYGate(q, 0.7967227117701885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9561955597788636, 0);
  sqcRYGate(q, -1.3745311919207273, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.526990813260353, 0);
  sqcRYGate(q, 0.6199410943335222, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3244627135271396, 1);
  sqcRYGate(q, -0.5860397894287042, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.293782001855166, 1);
  sqcRYGate(q, 1.2016515365914735, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8455996015660334, 2);
  sqcRYGate(q, 0.005658259939263388, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.41433536590467224, 2);
  sqcRYGate(q, 0.5954056850133471, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.25927705782164573, 0);
  sqcRYGate(q, 1.0897413926859914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.171414789040882, 0);
  sqcRYGate(q, -0.24127302985868673, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1336334105172492, 1);
  sqcRYGate(q, 0.36708684551486576, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1195955262902455, 1);
  sqcRYGate(q, 1.2786532987249242, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.763783834838457, 2);
  sqcRYGate(q, -1.3612763687468996, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.33909253212506035, 2);
  sqcRYGate(q, -0.9700535102704908, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.595742349655095, 0);
  sqcRYGate(q, -1.364487389872898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09567330994305799, 0);
  sqcRYGate(q, 0.29511314631676555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6240236793540173, 1);
  sqcRYGate(q, -1.7795182921211854, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7423292689006483, 1);
  sqcRYGate(q, 0.0799524482911762, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5406110157372197, 2);
  sqcRYGate(q, -1.3392343729503782, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.732492539020526, 2);
  sqcRYGate(q, -0.14048644747418318, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.45440187833328416, 0);
  sqcRYGate(q, -1.8796246425491594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1669000268460996, 0);
  sqcRYGate(q, 2.11944280451397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1969792086572548, 1);
  sqcRYGate(q, -1.3939831940201257, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2997275585691304, 1);
  sqcRYGate(q, -2.7941731773976173, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.25266384707433165, 2);
  sqcRYGate(q, -1.9493650246077427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.112502499960824, 2);
  sqcRYGate(q, 0.9957055792286739, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.050301165620216, 0);
  sqcRYGate(q, 2.924483987793858, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9799312506236548, 0);
  sqcRYGate(q, -2.1523477058689977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0497862310341954, 1);
  sqcRYGate(q, -0.1309676681919356, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6118616464046382, 1);
  sqcRYGate(q, -0.1322096545619449, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9056206761443806, 2);
  sqcRYGate(q, 1.9228255808954673, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.38869737768694623, 2);
  sqcRYGate(q, 2.4047190105031677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2607207073047926, 0);
  sqcRYGate(q, 0.6548731775007334, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9177287596464323, 0);
  sqcRYGate(q, 2.938437933437282, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9030470153493029, 1);
  sqcRYGate(q, 1.4295755528842307, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8439204515941121, 1);
  sqcRYGate(q, -1.9445825570927164, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8131686764017665, 2);
  sqcRYGate(q, -1.5849472009617973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4313378569399355, 2);
  sqcRYGate(q, -0.8083729622173998, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.33280756684660506, 0);
  sqcRYGate(q, -2.022591901867544, 1);
  sqcRYGate(q, 1.8755804750146536, 2);
  sqcRYGate(q, -1.1687145905719722, 3);

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
