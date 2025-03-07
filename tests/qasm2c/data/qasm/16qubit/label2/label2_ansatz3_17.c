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

  sqcRYGate(q, -1.0818283790752332, 0);
  sqcRZGate(q, -0.010939975911179014, 0);
  sqcRYGate(q, -3.1223896498911294, 1);
  sqcRZGate(q, 0.4673112620942215, 1);
  sqcRYGate(q, -3.1409581757132723, 2);
  sqcRZGate(q, -1.7703106287398045, 2);
  sqcRYGate(q, 3.0163982316306157, 3);
  sqcRZGate(q, 2.9726156510267105, 3);
  sqcRYGate(q, -2.907491448577887, 4);
  sqcRZGate(q, -0.8902700107952505, 4);
  sqcRYGate(q, 2.534217207256826, 5);
  sqcRZGate(q, 0.4269753286858551, 5);
  sqcRYGate(q, 3.135077352557171, 6);
  sqcRZGate(q, -0.5874165438696198, 6);
  sqcRYGate(q, 3.1403482091461874, 7);
  sqcRZGate(q, 1.1106589461831478, 7);
  sqcRYGate(q, -0.499385841284501, 8);
  sqcRZGate(q, -2.231041110022573, 8);
  sqcRYGate(q, 1.6694188835282548, 9);
  sqcRZGate(q, 0.9672865576522104, 9);
  sqcRYGate(q, 1.3005400536536786, 10);
  sqcRZGate(q, -0.11221378190128828, 10);
  sqcRYGate(q, -3.1356545014562442, 11);
  sqcRZGate(q, -1.17683661215617, 11);
  sqcRYGate(q, 1.4846143946486041, 12);
  sqcRZGate(q, -0.3470238048140672, 12);
  sqcRYGate(q, -1.6151193819259584, 13);
  sqcRZGate(q, -2.5553865838592276, 13);
  sqcRYGate(q, 1.1305945329545897, 14);
  sqcRZGate(q, 0.8356614652162309, 14);
  sqcRYGate(q, 2.9311564473296188, 15);
  sqcRZGate(q, 1.1350774070564853, 15);
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
  sqcRYGate(q, 1.0690405637912495, 0);
  sqcRZGate(q, -3.06403202746194, 0);
  sqcRYGate(q, 1.5681665780841678, 1);
  sqcRZGate(q, -1.567257226218872, 1);
  sqcRYGate(q, 3.1396009308920267, 2);
  sqcRZGate(q, 0.0030171680133284084, 2);
  sqcRYGate(q, 0.023979939754260382, 3);
  sqcRZGate(q, -0.8560824137178167, 3);
  sqcRYGate(q, 0.5871080929538479, 4);
  sqcRZGate(q, 3.0205510118014254, 4);
  sqcRYGate(q, 2.7516153286530938, 5);
  sqcRZGate(q, -1.883109141650591, 5);
  sqcRYGate(q, -3.1401850870415955, 6);
  sqcRZGate(q, 0.5521606256411067, 6);
  sqcRYGate(q, 3.1336182282964606, 7);
  sqcRZGate(q, -2.172725001536732, 7);
  sqcRYGate(q, 3.1404282485088717, 8);
  sqcRZGate(q, 2.400864107368656, 8);
  sqcRYGate(q, 0.2228710703196379, 9);
  sqcRZGate(q, -0.020092843975103133, 9);
  sqcRYGate(q, 3.066211173405347, 10);
  sqcRZGate(q, 1.479311713809197, 10);
  sqcRYGate(q, 0.06746736216292604, 11);
  sqcRZGate(q, 1.9590894207192224, 11);
  sqcRYGate(q, -0.1433126579379893, 12);
  sqcRZGate(q, -3.0229464382054982, 12);
  sqcRYGate(q, 0.22417892647717075, 13);
  sqcRZGate(q, 1.8603599590269315, 13);
  sqcRYGate(q, -2.794803560808257, 14);
  sqcRZGate(q, -1.426479690843734, 14);
  sqcRYGate(q, -1.4612634392406436, 15);
  sqcRZGate(q, 0.15125613954359096, 15);
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
  sqcRYGate(q, -1.5697024748522808, 0);
  sqcRZGate(q, 0.19775067688959386, 0);
  sqcRYGate(q, -1.3427582610094673, 1);
  sqcRZGate(q, 0.22433431197461506, 1);
  sqcRYGate(q, -3.1401993514067135, 2);
  sqcRZGate(q, -2.981163136251795, 2);
  sqcRYGate(q, 0.0034171895641863514, 3);
  sqcRZGate(q, -0.8226158957923858, 3);
  sqcRYGate(q, 2.1018329107115408, 4);
  sqcRZGate(q, 3.1100508744058852, 4);
  sqcRYGate(q, 0.2090484322592081, 5);
  sqcRZGate(q, -2.7354262963914895, 5);
  sqcRYGate(q, -2.9821203659296187, 6);
  sqcRZGate(q, 0.7938747915392658, 6);
  sqcRYGate(q, -0.0019067637884174623, 7);
  sqcRZGate(q, 0.5792959299370877, 7);
  sqcRYGate(q, 2.846314037565528, 8);
  sqcRZGate(q, -2.570807631603374, 8);
  sqcRYGate(q, -0.10770287649031125, 9);
  sqcRZGate(q, -1.8828509412373315, 9);
  sqcRYGate(q, 1.3924132764252715, 10);
  sqcRZGate(q, 2.264707615994466, 10);
  sqcRYGate(q, -3.139320246414325, 11);
  sqcRZGate(q, -0.15040144403094935, 11);
  sqcRYGate(q, 3.111785137075827, 12);
  sqcRZGate(q, 3.013143848960352, 12);
  sqcRYGate(q, -0.9360408526420925, 13);
  sqcRZGate(q, -0.41264812489048036, 13);
  sqcRYGate(q, 1.158052701657847, 14);
  sqcRZGate(q, 0.9318142636155073, 14);
  sqcRYGate(q, 2.674308248749496, 15);
  sqcRZGate(q, -1.858712748215627, 15);
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
  sqcRYGate(q, -1.1562765787511404, 0);
  sqcRZGate(q, 2.9144156850952427, 0);
  sqcRYGate(q, 1.4728908882797125, 1);
  sqcRZGate(q, 1.1335173224973243, 1);
  sqcRYGate(q, 2.4133412721499514, 2);
  sqcRZGate(q, 0.6447055803634225, 2);
  sqcRYGate(q, 0.07523862307725032, 3);
  sqcRZGate(q, -1.424648030931591, 3);
  sqcRYGate(q, 0.06625977460040747, 4);
  sqcRZGate(q, 1.6251379143372917, 4);
  sqcRYGate(q, 1.4238075654847047, 5);
  sqcRZGate(q, 1.0839068230279834, 5);
  sqcRYGate(q, 0.0010933408542835648, 6);
  sqcRZGate(q, -1.051970505605849, 6);
  sqcRYGate(q, 0.8779967152953514, 7);
  sqcRZGate(q, 0.4150654046990425, 7);
  sqcRYGate(q, 3.1355691123955998, 8);
  sqcRZGate(q, 0.9470604477959094, 8);
  sqcRYGate(q, -0.26587369447849607, 9);
  sqcRZGate(q, -0.25270070132423506, 9);
  sqcRYGate(q, -3.0845358095408337, 10);
  sqcRZGate(q, -0.7571062803226908, 10);
  sqcRYGate(q, 3.0077385952093345, 11);
  sqcRZGate(q, 1.940300680575663, 11);
  sqcRYGate(q, -1.5209813229599485, 12);
  sqcRZGate(q, -1.4653876842066353, 12);
  sqcRYGate(q, -1.0702563262965623, 13);
  sqcRZGate(q, -0.48146087842843777, 13);
  sqcRYGate(q, -1.501204570570725, 14);
  sqcRZGate(q, 0.2341050900311403, 14);
  sqcRYGate(q, -0.057382274435085805, 15);
  sqcRZGate(q, 0.06389071480188963, 15);
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
  sqcRYGate(q, 2.363305605714037, 0);
  sqcRZGate(q, -0.11139684401442218, 0);
  sqcRYGate(q, -1.3244023654022687, 1);
  sqcRZGate(q, 0.02458874462133002, 1);
  sqcRYGate(q, 3.141294769736961, 2);
  sqcRZGate(q, 0.330370519064376, 2);
  sqcRYGate(q, -0.0002678061371154375, 3);
  sqcRZGate(q, 0.6100646976760125, 3);
  sqcRYGate(q, 3.0739384755197507, 4);
  sqcRZGate(q, 1.7115253960139594, 4);
  sqcRYGate(q, -3.1392900961985424, 5);
  sqcRZGate(q, 2.4035388750442612, 5);
  sqcRYGate(q, 1.670693870151631, 6);
  sqcRZGate(q, 3.075079878099082, 6);
  sqcRYGate(q, 3.141479242917212, 7);
  sqcRZGate(q, 0.4035781996036309, 7);
  sqcRYGate(q, -1.3412994306035104, 8);
  sqcRZGate(q, 0.7020482645367361, 8);
  sqcRYGate(q, -0.0013943018257982452, 9);
  sqcRZGate(q, -1.973956884707966, 9);
  sqcRYGate(q, 0.17305105866735723, 10);
  sqcRZGate(q, -3.0833276488343917, 10);
  sqcRYGate(q, 0.004060337273860717, 11);
  sqcRZGate(q, 0.9104517335077462, 11);
  sqcRYGate(q, 1.1677674882223792, 12);
  sqcRZGate(q, -0.08367348333378384, 12);
  sqcRYGate(q, 1.8098340891919753, 13);
  sqcRZGate(q, -0.9406338769824032, 13);
  sqcRYGate(q, -1.3797757314924626, 14);
  sqcRZGate(q, -1.6162069794597569, 14);
  sqcRYGate(q, 1.1953241894636497, 15);
  sqcRZGate(q, 3.1166251462783805, 15);
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
  sqcRYGate(q, -2.3025831903143597, 0);
  sqcRZGate(q, -0.18982093164236089, 0);
  sqcRYGate(q, -0.4479334424392114, 1);
  sqcRZGate(q, -0.5876005414097657, 1);
  sqcRYGate(q, -3.002469330102011, 2);
  sqcRZGate(q, -0.5530243613262497, 2);
  sqcRYGate(q, 2.9083558555379856, 3);
  sqcRZGate(q, -3.1393932290435314, 3);
  sqcRYGate(q, 3.140158982013334, 4);
  sqcRZGate(q, -0.2597853739690938, 4);
  sqcRYGate(q, -1.000801487799819, 5);
  sqcRZGate(q, 1.5062389844368527, 5);
  sqcRYGate(q, 1.570114364835248, 6);
  sqcRZGate(q, 1.5710844602890435, 6);
  sqcRYGate(q, -1.6874176484446224, 7);
  sqcRZGate(q, 1.6385495509355157, 7);
  sqcRYGate(q, -0.0003779081338004531, 8);
  sqcRZGate(q, -1.736777966111826, 8);
  sqcRYGate(q, -1.5188373424149733, 9);
  sqcRZGate(q, -2.5780238914214144, 9);
  sqcRYGate(q, -0.004279555800485839, 10);
  sqcRZGate(q, -1.713296465522375, 10);
  sqcRYGate(q, 2.01581423233461, 11);
  sqcRZGate(q, 1.5180233743223361, 11);
  sqcRYGate(q, -1.1353339849594433, 12);
  sqcRZGate(q, -0.2907734078360312, 12);
  sqcRYGate(q, -0.44438994007128585, 13);
  sqcRZGate(q, -2.192152814777096, 13);
  sqcRYGate(q, 2.421789363949716, 14);
  sqcRZGate(q, 0.01984010428439742, 14);
  sqcRYGate(q, -2.452101664657108, 15);
  sqcRZGate(q, 0.6061982054595783, 15);
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
  sqcRYGate(q, -0.04311924914704157, 0);
  sqcRZGate(q, 2.6887659190101494, 0);
  sqcRYGate(q, 0.013968835716621442, 1);
  sqcRZGate(q, -0.4653584305075542, 1);
  sqcRYGate(q, -3.141264620962837, 2);
  sqcRZGate(q, 3.0045765290241184, 2);
  sqcRYGate(q, 3.1413282095911845, 3);
  sqcRZGate(q, 2.76324437334946, 3);
  sqcRYGate(q, 0.001869007506982758, 4);
  sqcRZGate(q, 1.4229245948462514, 4);
  sqcRYGate(q, -1.576663670267588, 5);
  sqcRZGate(q, 0.0008139563372733248, 5);
  sqcRYGate(q, 1.570640238155912, 6);
  sqcRZGate(q, 2.234812351232599, 6);
  sqcRYGate(q, 3.089218307678899, 7);
  sqcRZGate(q, 2.9290367721292196, 7);
  sqcRYGate(q, -3.1385413357285055, 8);
  sqcRZGate(q, 0.2864551917326259, 8);
  sqcRYGate(q, -3.1415814905511237, 9);
  sqcRZGate(q, 0.03847851664314973, 9);
  sqcRYGate(q, -0.2783460008342899, 10);
  sqcRZGate(q, 2.9760335027680083, 10);
  sqcRYGate(q, -1.5905329065527605, 11);
  sqcRZGate(q, -1.8169603308682536, 11);
  sqcRYGate(q, 1.249387221619624, 12);
  sqcRZGate(q, -0.5708309818905751, 12);
  sqcRYGate(q, -1.5853553134891296, 13);
  sqcRZGate(q, -1.8697844596304423, 13);
  sqcRYGate(q, -2.414978562778201, 14);
  sqcRZGate(q, -2.9178273874639054, 14);
  sqcRYGate(q, -2.767299504731345, 15);
  sqcRZGate(q, 1.3784255727704258, 15);
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
  sqcRYGate(q, -3.1170158411243465, 0);
  sqcRZGate(q, 0.7524335144334008, 0);
  sqcRYGate(q, -1.759678510035723, 1);
  sqcRZGate(q, 1.341438590077974, 1);
  sqcRYGate(q, 2.0747498046619084, 2);
  sqcRZGate(q, -2.120855519443557, 2);
  sqcRYGate(q, -2.1590915348471222, 3);
  sqcRZGate(q, 0.3125655648414938, 3);
  sqcRYGate(q, -1.570876337332189, 4);
  sqcRZGate(q, -1.6351172626251824, 4);
  sqcRYGate(q, 1.3461491329491926, 5);
  sqcRZGate(q, -2.4941088343684776, 5);
  sqcRYGate(q, -0.7782901400568125, 6);
  sqcRZGate(q, 0.03856843208293892, 6);
  sqcRYGate(q, 0.4845158538734031, 7);
  sqcRZGate(q, -3.021121378375124, 7);
  sqcRYGate(q, -0.0017263953141917199, 8);
  sqcRZGate(q, -2.5692204597991704, 8);
  sqcRYGate(q, -0.000749527672357253, 9);
  sqcRZGate(q, 2.3169038928866494, 9);
  sqcRYGate(q, -3.0568970970998492, 10);
  sqcRZGate(q, 1.6293712492483963, 10);
  sqcRYGate(q, -2.1527668516145724, 11);
  sqcRZGate(q, -2.2111396234183847, 11);
  sqcRYGate(q, -3.1087331719127227, 12);
  sqcRZGate(q, -0.9970301376572865, 12);
  sqcRYGate(q, -1.5673710582734284, 13);
  sqcRZGate(q, -1.5770913049974142, 13);
  sqcRYGate(q, 1.3427834337494273, 14);
  sqcRZGate(q, 2.4753748028438802, 14);
  sqcRYGate(q, 0.7618608488999562, 15);
  sqcRZGate(q, 1.0282863923453764, 15);
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
  sqcRYGate(q, 3.112681568219014, 0);
  sqcRZGate(q, 1.6738903335971722, 0);
  sqcRYGate(q, 3.138905673018114, 1);
  sqcRZGate(q, 0.1937243795839453, 1);
  sqcRYGate(q, -2.3048679834680172e-05, 2);
  sqcRZGate(q, -2.4658402331194664, 2);
  sqcRYGate(q, -3.1393918338639804, 3);
  sqcRZGate(q, 0.6654516956913064, 3);
  sqcRYGate(q, -1.4239222703124677, 4);
  sqcRZGate(q, -1.9002648190944642, 4);
  sqcRYGate(q, 0.0002561924390143133, 5);
  sqcRZGate(q, 2.707752163385911, 5);
  sqcRYGate(q, 2.9787280837074612, 6);
  sqcRZGate(q, -3.03049969928477, 6);
  sqcRYGate(q, -0.07867928877559649, 7);
  sqcRZGate(q, -2.8525937984325993, 7);
  sqcRYGate(q, -3.1305391521124792, 8);
  sqcRZGate(q, -2.700236450921574, 8);
  sqcRYGate(q, -3.1415622645610313, 9);
  sqcRZGate(q, -2.2168607982643795, 9);
  sqcRYGate(q, -3.0939732769419974, 10);
  sqcRZGate(q, -0.4217812088133786, 10);
  sqcRYGate(q, 1.8128642153708343, 11);
  sqcRZGate(q, -2.046632083824132, 11);
  sqcRYGate(q, -2.261656190428151, 12);
  sqcRZGate(q, 2.100062382283697, 12);
  sqcRYGate(q, 1.8668367739912777, 13);
  sqcRZGate(q, 0.03224414819523602, 13);
  sqcRYGate(q, 0.013461368980039799, 14);
  sqcRZGate(q, 3.0112735205361383, 14);
  sqcRYGate(q, 0.11968158899486764, 15);
  sqcRZGate(q, 0.05200207146834647, 15);
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
  sqcRYGate(q, -0.3418759997343521, 0);
  sqcRZGate(q, 0.6978509580986954, 0);
  sqcRYGate(q, -2.970931476260514, 1);
  sqcRZGate(q, -1.7651022959786626, 1);
  sqcRYGate(q, 3.139482734668949, 2);
  sqcRZGate(q, -2.228208112666839, 2);
  sqcRYGate(q, -1.077661365380557, 3);
  sqcRZGate(q, 2.8022294743848417, 3);
  sqcRYGate(q, 3.141571602302248, 4);
  sqcRZGate(q, -1.9004052193118985, 4);
  sqcRYGate(q, 0.013668039632330318, 5);
  sqcRZGate(q, -0.8876569821428224, 5);
  sqcRYGate(q, 3.140407328376539, 6);
  sqcRZGate(q, 0.12243050102747954, 6);
  sqcRYGate(q, -2.0139798596481473, 7);
  sqcRZGate(q, -2.9530013713216277, 7);
  sqcRYGate(q, 3.1398728486193854, 8);
  sqcRZGate(q, 2.356870036230682, 8);
  sqcRYGate(q, -0.000770935604247569, 9);
  sqcRZGate(q, -0.11128030205160311, 9);
  sqcRYGate(q, 0.0361828008611886, 10);
  sqcRZGate(q, 2.4210750421965455, 10);
  sqcRYGate(q, -0.6167799915304633, 11);
  sqcRZGate(q, 0.6061445846982219, 11);
  sqcRYGate(q, 0.023334052070247857, 12);
  sqcRZGate(q, 2.329411042785403, 12);
  sqcRYGate(q, -2.3207538613802363, 13);
  sqcRZGate(q, 0.05782212625892047, 13);
  sqcRYGate(q, 3.1269373662359397, 14);
  sqcRZGate(q, 1.1579583392583928, 14);
  sqcRYGate(q, -1.4554752697139588, 15);
  sqcRZGate(q, 0.732524594708872, 15);
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
  sqcRYGate(q, 3.114803380522814, 0);
  sqcRZGate(q, -0.712639694549131, 0);
  sqcRYGate(q, -0.04237930213566322, 1);
  sqcRZGate(q, 2.7727376095004383, 1);
  sqcRYGate(q, -1.0814130946737691e-05, 2);
  sqcRZGate(q, -0.1170802690437226, 2);
  sqcRYGate(q, -0.0010546850693048315, 3);
  sqcRZGate(q, -3.09288936842067, 3);
  sqcRYGate(q, -1.716584379339431, 4);
  sqcRZGate(q, 0.0643478951535635, 4);
  sqcRYGate(q, 0.00045784879596892457, 5);
  sqcRZGate(q, 2.893418489790092, 5);
  sqcRYGate(q, -1.499144545089667, 6);
  sqcRZGate(q, 0.017957773056578853, 6);
  sqcRYGate(q, 1.5664295445257084, 7);
  sqcRZGate(q, -0.10970515426414983, 7);
  sqcRYGate(q, -0.05836578932762992, 8);
  sqcRZGate(q, 1.4249064640479654, 8);
  sqcRYGate(q, 2.2191244162594255e-05, 9);
  sqcRZGate(q, -3.020831428963107, 9);
  sqcRYGate(q, -0.12299228990105869, 10);
  sqcRZGate(q, 1.8212322979785327, 10);
  sqcRYGate(q, 2.7777070274011195, 11);
  sqcRZGate(q, 1.7345246494425464, 11);
  sqcRYGate(q, -2.9206982850045216, 12);
  sqcRZGate(q, 2.8391297102652677, 12);
  sqcRYGate(q, 1.9014988623230795, 13);
  sqcRZGate(q, 1.9259268588248633, 13);
  sqcRYGate(q, 1.3785198226377675, 14);
  sqcRZGate(q, 2.5929116483378793, 14);
  sqcRYGate(q, -1.5815886186538695, 15);
  sqcRZGate(q, 1.3612298890147696, 15);
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
  sqcRYGate(q, -0.30444229638510134, 0);
  sqcRZGate(q, -2.872527460482101, 0);
  sqcRYGate(q, 0.08427979265163081, 1);
  sqcRZGate(q, -3.042745328764059, 1);
  sqcRYGate(q, -0.010047140901747305, 2);
  sqcRZGate(q, 0.7101800457486301, 2);
  sqcRYGate(q, -0.99009654468506, 3);
  sqcRZGate(q, 1.7246094917404358, 3);
  sqcRYGate(q, -1.5684233916089703, 4);
  sqcRZGate(q, 2.3634605611306903, 4);
  sqcRYGate(q, -0.002820247911335727, 5);
  sqcRZGate(q, -0.6233506115722293, 5);
  sqcRYGate(q, 1.6160847606913675, 6);
  sqcRZGate(q, -2.585516730562969, 6);
  sqcRYGate(q, -2.995279224842837, 7);
  sqcRZGate(q, -2.985984137006235, 7);
  sqcRYGate(q, -0.00016041566817316533, 8);
  sqcRZGate(q, 0.7699161666785175, 8);
  sqcRYGate(q, -6.128582167175267e-05, 9);
  sqcRZGate(q, -2.0239332120897773, 9);
  sqcRYGate(q, -3.117218767555256, 10);
  sqcRZGate(q, 0.8153655426974812, 10);
  sqcRYGate(q, 1.447819245663715, 11);
  sqcRZGate(q, 3.0625582066977204, 11);
  sqcRYGate(q, -1.759877424736981, 12);
  sqcRZGate(q, 1.5363443720098506, 12);
  sqcRYGate(q, 3.00172426085679, 13);
  sqcRZGate(q, -3.139856297068327, 13);
  sqcRYGate(q, 0.7894799538580962, 14);
  sqcRZGate(q, 0.33500963565103387, 14);
  sqcRYGate(q, -2.413234656775721, 15);
  sqcRZGate(q, -2.6637686636808287, 15);
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
  sqcRYGate(q, -2.3816833046563946, 0);
  sqcRZGate(q, -0.14609701744324163, 0);
  sqcRYGate(q, -0.20442476168102708, 1);
  sqcRZGate(q, -0.7005453270546989, 1);
  sqcRYGate(q, -2.7552371311578838e-05, 2);
  sqcRZGate(q, -2.212940792815668, 2);
  sqcRYGate(q, 3.1415136884308894, 3);
  sqcRZGate(q, 1.54247537703238, 3);
  sqcRYGate(q, -1.5315075439740724, 4);
  sqcRZGate(q, -1.7699956054872756, 4);
  sqcRYGate(q, 0.04608662297386622, 5);
  sqcRZGate(q, -1.2575027571994826, 5);
  sqcRYGate(q, -0.6032100136852333, 6);
  sqcRZGate(q, -1.20019664332726, 6);
  sqcRYGate(q, 0.8280990021202816, 7);
  sqcRZGate(q, -1.7483461708422934, 7);
  sqcRYGate(q, -0.8375012942774789, 8);
  sqcRZGate(q, 3.0845830173181144, 8);
  sqcRYGate(q, 9.464541957662887e-06, 9);
  sqcRZGate(q, -1.8863491422235346, 9);
  sqcRYGate(q, -3.012781381094507, 10);
  sqcRZGate(q, -2.925577626565607, 10);
  sqcRYGate(q, -0.9254610210104213, 11);
  sqcRZGate(q, 1.5071505031046892, 11);
  sqcRYGate(q, 1.5387939446776995, 12);
  sqcRZGate(q, -2.656019015080046, 12);
  sqcRYGate(q, -0.7700880013280308, 13);
  sqcRZGate(q, 2.2150843684330788, 13);
  sqcRYGate(q, 0.5744212527710228, 14);
  sqcRZGate(q, -2.013551536354764, 14);
  sqcRYGate(q, 0.5419145457124905, 15);
  sqcRZGate(q, 2.3523529559106353, 15);
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
  sqcRYGate(q, -2.448594519961829, 0);
  sqcRZGate(q, 0.24147202900636208, 0);
  sqcRYGate(q, 2.734182520045303, 1);
  sqcRZGate(q, -1.5548498452012705, 1);
  sqcRYGate(q, 0.00048276877393771395, 2);
  sqcRZGate(q, 1.8688987086733715, 2);
  sqcRYGate(q, -1.7139548153762774, 3);
  sqcRZGate(q, 0.7032932532735341, 3);
  sqcRYGate(q, -0.0010046318350047656, 4);
  sqcRZGate(q, -2.902647487704553, 4);
  sqcRYGate(q, 0.005953190161499139, 5);
  sqcRZGate(q, 2.2101696318804622, 5);
  sqcRYGate(q, 3.141484092471499, 6);
  sqcRZGate(q, -0.7119756165960043, 6);
  sqcRYGate(q, -1.5633682203754624, 7);
  sqcRZGate(q, -0.786981074312176, 7);
  sqcRYGate(q, 0.0008619729490070868, 8);
  sqcRZGate(q, -2.6057663825192283, 8);
  sqcRYGate(q, 3.141492626342664, 9);
  sqcRZGate(q, -2.104891353927189, 9);
  sqcRYGate(q, -3.100035631319253, 10);
  sqcRZGate(q, -3.1201351452635193, 10);
  sqcRYGate(q, 0.5000293753481168, 11);
  sqcRZGate(q, 1.9455804181318366, 11);
  sqcRYGate(q, -1.4894605501667613, 12);
  sqcRZGate(q, 1.5577165303431968, 12);
  sqcRYGate(q, 2.8491531517304587, 13);
  sqcRZGate(q, 1.9749074401665654, 13);
  sqcRYGate(q, 1.6842171696260362, 14);
  sqcRZGate(q, -0.813452062372952, 14);
  sqcRYGate(q, -0.8723876860287677, 15);
  sqcRZGate(q, 0.5650785946648521, 15);
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
  sqcRYGate(q, -0.14609276567327095, 0);
  sqcRZGate(q, -1.5280920368003956, 0);
  sqcRYGate(q, -1.5668193462918376, 1);
  sqcRZGate(q, -3.0866181246002182, 1);
  sqcRYGate(q, -3.1368998205252754, 2);
  sqcRZGate(q, 1.9525413450169598, 2);
  sqcRYGate(q, -3.138242784573243, 3);
  sqcRZGate(q, -1.405468191101427, 3);
  sqcRYGate(q, 2.37307631993792, 4);
  sqcRZGate(q, 0.05644984779511737, 4);
  sqcRYGate(q, 3.1405126204534994, 5);
  sqcRZGate(q, -2.087549905641564, 5);
  sqcRYGate(q, 1.2565900398397858, 6);
  sqcRZGate(q, 0.05287821538381987, 6);
  sqcRYGate(q, 0.2665717398230588, 7);
  sqcRZGate(q, -0.8017150220900772, 7);
  sqcRYGate(q, -0.8550011064524234, 8);
  sqcRZGate(q, -0.77242380809814, 8);
  sqcRYGate(q, 3.1415676791461062, 9);
  sqcRZGate(q, 2.653896019514157, 9);
  sqcRYGate(q, -1.5289819180784647, 10);
  sqcRZGate(q, -1.578709272847708, 10);
  sqcRYGate(q, 1.7145760810005857, 11);
  sqcRZGate(q, -1.5259292333747556, 11);
  sqcRYGate(q, -1.977131233888761, 12);
  sqcRZGate(q, 0.1755011242284015, 12);
  sqcRYGate(q, 1.939738522920071, 13);
  sqcRZGate(q, 1.178399619904921, 13);
  sqcRYGate(q, -2.4946609767254073, 14);
  sqcRZGate(q, 1.8921424409245793, 14);
  sqcRYGate(q, -2.1353640707316455, 15);
  sqcRZGate(q, 1.7138570577825627, 15);
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
  sqcRYGate(q, -1.571238850779625, 0);
  sqcRZGate(q, -0.978279846008069, 0);
  sqcRYGate(q, -2.045153736841753, 1);
  sqcRZGate(q, -2.8110522075570135, 1);
  sqcRYGate(q, 0.0033094996777371793, 2);
  sqcRZGate(q, 2.8730694706131183, 2);
  sqcRYGate(q, 0.00037895879149616064, 3);
  sqcRZGate(q, 0.2522809527774315, 3);
  sqcRYGate(q, 1.5715434963495154, 4);
  sqcRZGate(q, 1.8663498945164525, 4);
  sqcRYGate(q, -2.898605388254037, 5);
  sqcRZGate(q, -0.6666903004153575, 5);
  sqcRYGate(q, -0.31581961670786374, 6);
  sqcRZGate(q, -0.6056463993989324, 6);
  sqcRYGate(q, 1.5701531861283788, 7);
  sqcRZGate(q, -2.356618151464591, 7);
  sqcRYGate(q, -3.135656689562159, 8);
  sqcRZGate(q, 1.5602999540520277, 8);
  sqcRYGate(q, 0.0001241103946147959, 9);
  sqcRZGate(q, 1.4991630985228859, 9);
  sqcRYGate(q, -0.03219224335717345, 10);
  sqcRZGate(q, -1.413701251603892, 10);
  sqcRYGate(q, -2.826285664967207, 11);
  sqcRZGate(q, -1.96181976903104, 11);
  sqcRYGate(q, 2.6212511488039283, 12);
  sqcRZGate(q, 0.23071310208567916, 12);
  sqcRYGate(q, 3.0509998041229323, 13);
  sqcRZGate(q, -0.2625875467556176, 13);
  sqcRYGate(q, -0.5129215793247911, 14);
  sqcRZGate(q, -1.8531100869482797, 14);
  sqcRYGate(q, 1.1022489783746454, 15);
  sqcRZGate(q, 1.1532813910271749, 15);
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
  sqcRYGate(q, 0.01970671675718514, 0);
  sqcRZGate(q, 2.7532974212331816, 0);
  sqcRYGate(q, -0.6752873808738844, 1);
  sqcRZGate(q, 2.5996652183168525, 1);
  sqcRYGate(q, -1.5709416124152904, 2);
  sqcRZGate(q, -0.04640563598430843, 2);
  sqcRYGate(q, -0.006292806482422363, 3);
  sqcRZGate(q, 1.838657098324937, 3);
  sqcRYGate(q, 3.140504406334762, 4);
  sqcRZGate(q, -2.8186642789306426, 4);
  sqcRYGate(q, 1.5770988040108787, 5);
  sqcRZGate(q, 0.9252987900739331, 5);
  sqcRYGate(q, -3.141550735031314, 6);
  sqcRZGate(q, 2.5353341475751856, 6);
  sqcRYGate(q, 3.141502691003094, 7);
  sqcRZGate(q, 2.8338177675926275, 7);
  sqcRYGate(q, 0.00031314279952448056, 8);
  sqcRZGate(q, 1.39817361641862, 8);
  sqcRYGate(q, 3.126602846587457, 9);
  sqcRZGate(q, -1.2286815066662484, 9);
  sqcRYGate(q, -3.0639341979963364, 10);
  sqcRZGate(q, 0.7319294402792371, 10);
  sqcRYGate(q, -2.441924591010557, 11);
  sqcRZGate(q, 1.0852343056665483, 11);
  sqcRYGate(q, -0.706310693177678, 12);
  sqcRZGate(q, 1.7128789307425274, 12);
  sqcRYGate(q, 0.889668696572703, 13);
  sqcRZGate(q, -0.8018653009807704, 13);
  sqcRYGate(q, -0.17909211517522916, 14);
  sqcRZGate(q, -2.2107675546238044, 14);
  sqcRYGate(q, -0.9614768321425169, 15);
  sqcRZGate(q, 1.4313209045790818, 15);
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
  sqcRYGate(q, -3.1415916209174224, 0);
  sqcRZGate(q, 1.4316518614957872, 0);
  sqcRYGate(q, 1.6783490804510839, 1);
  sqcRZGate(q, 0.12707391503037943, 1);
  sqcRYGate(q, -3.098460064564311, 2);
  sqcRZGate(q, -1.617335817663224, 2);
  sqcRYGate(q, -9.514302457869403e-05, 3);
  sqcRZGate(q, -1.1833094848687828, 3);
  sqcRYGate(q, -1.5724906766450277, 4);
  sqcRZGate(q, 0.16901123497844112, 4);
  sqcRYGate(q, 3.087929464115582, 5);
  sqcRZGate(q, 2.491260555972128, 5);
  sqcRYGate(q, 2.825798332184177, 6);
  sqcRZGate(q, 1.9651878333456112, 6);
  sqcRYGate(q, 0.00011484174045695884, 7);
  sqcRZGate(q, 1.0427278706376928, 7);
  sqcRYGate(q, 3.1339845801079145, 8);
  sqcRZGate(q, -2.0660464882031393, 8);
  sqcRYGate(q, -0.0001745757135998005, 9);
  sqcRZGate(q, -1.9276500088149886, 9);
  sqcRYGate(q, 2.4000595404477534, 10);
  sqcRZGate(q, -2.5051171043302642, 10);
  sqcRYGate(q, 2.464658763283003, 11);
  sqcRZGate(q, 1.675293183427935, 11);
  sqcRYGate(q, -2.8119766214341344, 12);
  sqcRZGate(q, -1.4314057014974209, 12);
  sqcRYGate(q, -1.9894005248806663, 13);
  sqcRZGate(q, 0.9754117043289456, 13);
  sqcRYGate(q, 2.919015690056832, 14);
  sqcRZGate(q, -1.0326334458735777, 14);
  sqcRYGate(q, 0.5808984868336093, 15);
  sqcRZGate(q, 1.2871893690452696, 15);
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
  sqcRYGate(q, -1.5234739978416707, 0);
  sqcRZGate(q, 0.5300141714820422, 0);
  sqcRYGate(q, -2.1300461398389485, 1);
  sqcRZGate(q, -1.2867489856438585, 1);
  sqcRYGate(q, -1.5735748735619133, 2);
  sqcRZGate(q, 1.4244911334984944, 2);
  sqcRYGate(q, 3.0947331939704545, 3);
  sqcRZGate(q, 0.05451949824779059, 3);
  sqcRYGate(q, -3.017258047092611, 4);
  sqcRZGate(q, -2.9682003287189582, 4);
  sqcRYGate(q, 1.5937197764664646, 5);
  sqcRZGate(q, 2.473301844937417, 5);
  sqcRYGate(q, -3.140772869349462, 6);
  sqcRZGate(q, -3.065144760351196, 6);
  sqcRYGate(q, -2.0968934846373095, 7);
  sqcRZGate(q, 1.9118841121923926, 7);
  sqcRYGate(q, 0.009576964454008241, 8);
  sqcRZGate(q, -0.5421029273298433, 8);
  sqcRYGate(q, -0.01380664361640349, 9);
  sqcRZGate(q, 2.2012925480781624, 9);
  sqcRYGate(q, -3.0260251068006045, 10);
  sqcRZGate(q, 0.6320896936312489, 10);
  sqcRYGate(q, -0.028656624680487575, 11);
  sqcRZGate(q, -1.6612205896034835, 11);
  sqcRYGate(q, -0.011323621889110845, 12);
  sqcRZGate(q, 0.5296133393565149, 12);
  sqcRYGate(q, -1.633637696604355, 13);
  sqcRZGate(q, 0.03646604022504253, 13);
  sqcRYGate(q, -0.9645819407423438, 14);
  sqcRZGate(q, 0.11970685575967721, 14);
  sqcRYGate(q, -0.8612095013491985, 15);
  sqcRZGate(q, -0.9083770556063442, 15);
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
  sqcRYGate(q, 0.07143235459542918, 0);
  sqcRZGate(q, -0.8775000039473406, 0);
  sqcRYGate(q, 1.5606446808477266, 1);
  sqcRZGate(q, -0.44491903761429974, 1);
  sqcRYGate(q, -0.00020006146835704894, 2);
  sqcRZGate(q, 0.5999135403173713, 2);
  sqcRYGate(q, 3.141533748649301, 3);
  sqcRZGate(q, -2.4157498986272863, 3);
  sqcRYGate(q, 1.5684840904982202, 4);
  sqcRZGate(q, -2.3907451837473834, 4);
  sqcRYGate(q, 0.0030265838564362824, 5);
  sqcRZGate(q, -3.076445610911259, 5);
  sqcRYGate(q, 3.141525195193527, 6);
  sqcRZGate(q, -1.282410857374832, 6);
  sqcRYGate(q, -3.141073349405139, 7);
  sqcRZGate(q, 2.908194206845031, 7);
  sqcRYGate(q, -0.0018917226952384072, 8);
  sqcRZGate(q, 0.23137108151903935, 8);
  sqcRYGate(q, 3.1414858313612273, 9);
  sqcRZGate(q, 0.4010152945518435, 9);
  sqcRYGate(q, -0.7548025892213932, 10);
  sqcRZGate(q, 0.7081504366647894, 10);
  sqcRYGate(q, 1.220069551718744, 11);
  sqcRZGate(q, -0.761856870094566, 11);
  sqcRYGate(q, -0.31091975947204253, 12);
  sqcRZGate(q, 1.7821211735423663, 12);
  sqcRYGate(q, 2.437383416084481, 13);
  sqcRZGate(q, 2.646033118716452, 13);
  sqcRYGate(q, -2.2610560234502506, 14);
  sqcRZGate(q, 1.2693265283981479, 14);
  sqcRYGate(q, -1.7732407229220666, 15);
  sqcRZGate(q, 1.3326249092591933, 15);
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
  sqcRYGate(q, 0.8508972203516287, 0);
  sqcRZGate(q, -0.051393756291567366, 0);
  sqcRYGate(q, 2.4989414673998356, 1);
  sqcRZGate(q, -0.6545258069368382, 1);
  sqcRYGate(q, -1.8818589312520186, 2);
  sqcRZGate(q, 0.6286787504543817, 2);
  sqcRYGate(q, -1.3440136286365096, 3);
  sqcRZGate(q, 1.2101366244652452, 3);
  sqcRYGate(q, -0.5978802222557866, 4);
  sqcRZGate(q, -1.1464441972749113, 4);
  sqcRYGate(q, -1.9722449244281206, 5);
  sqcRZGate(q, -2.0684715956502857, 5);
  sqcRYGate(q, 0.6832703355433987, 6);
  sqcRZGate(q, 2.098837468676214, 6);
  sqcRYGate(q, -0.5851050467256997, 7);
  sqcRZGate(q, 0.4822803016019427, 7);
  sqcRYGate(q, -2.314960825700315, 8);
  sqcRZGate(q, 0.4696463939482361, 8);
  sqcRYGate(q, 0.7491737725369086, 9);
  sqcRZGate(q, -0.03129497824554317, 9);
  sqcRYGate(q, -0.7772171833429402, 10);
  sqcRZGate(q, -3.074287938136039, 10);
  sqcRYGate(q, 2.010566629672881, 11);
  sqcRZGate(q, 1.6867078631352312, 11);
  sqcRYGate(q, -0.2347660190928418, 12);
  sqcRZGate(q, -3.102997751009145, 12);
  sqcRYGate(q, -1.097540264667888, 13);
  sqcRZGate(q, 2.4714299960963024, 13);
  sqcRYGate(q, -0.49832591123642533, 14);
  sqcRZGate(q, 0.7908443613193219, 14);
  sqcRYGate(q, -0.6221011273591072, 15);
  sqcRZGate(q, -2.4982098931464622, 15);

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
