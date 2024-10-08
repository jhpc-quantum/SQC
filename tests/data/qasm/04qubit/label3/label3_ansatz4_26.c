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

  sqcRYGate(q, -0.971652776661898, 0);
  sqcRZGate(q, 0.5565887805644695, 0);
  sqcRYGate(q, 1.0340378432885826, 1);
  sqcRZGate(q, 0.4202861904224344, 1);
  sqcRYGate(q, -3.1139982707641107, 2);
  sqcRZGate(q, 1.30930213058287, 2);
  sqcRYGate(q, -2.1535626726463444, 3);
  sqcRZGate(q, -1.1494573440577647, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.957721254099055, 0);
  sqcRZGate(q, 1.4450522943791095, 0);
  sqcRYGate(q, 1.9329696807822185, 1);
  sqcRZGate(q, 1.570850008092915, 1);
  sqcRYGate(q, -2.877032554860702, 2);
  sqcRZGate(q, -2.3543541133887107, 2);
  sqcRYGate(q, 2.867900669938617, 3);
  sqcRZGate(q, 1.9338779792022205, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0662994821529903, 0);
  sqcRZGate(q, 1.3324286653889161, 0);
  sqcRYGate(q, -1.697989634863888, 1);
  sqcRZGate(q, -3.070240226964736, 1);
  sqcRYGate(q, -0.057852485760250205, 2);
  sqcRZGate(q, -1.8370055493087465, 2);
  sqcRYGate(q, 2.4281635858714443, 3);
  sqcRZGate(q, -2.8439567455096295, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8716579730116116, 0);
  sqcRZGate(q, -0.4962897854464705, 0);
  sqcRYGate(q, -2.889236276379886, 1);
  sqcRZGate(q, 0.0410435921655905, 1);
  sqcRYGate(q, -0.7264860909388471, 2);
  sqcRZGate(q, -2.9729556628410805, 2);
  sqcRYGate(q, 2.3307115147017896, 3);
  sqcRZGate(q, -0.9434391409939922, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3360793993171893, 0);
  sqcRZGate(q, -2.702963059131087, 0);
  sqcRYGate(q, -1.1610858553242576, 1);
  sqcRZGate(q, 0.7210805020424654, 1);
  sqcRYGate(q, -2.3169306390862827, 2);
  sqcRZGate(q, -2.8100550481247533, 2);
  sqcRYGate(q, 2.657312075056657, 3);
  sqcRZGate(q, 0.48160678419019815, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5586298455809636, 0);
  sqcRZGate(q, 1.3727459152116959, 0);
  sqcRYGate(q, -1.518726230609547, 1);
  sqcRZGate(q, 0.4965350603835388, 1);
  sqcRYGate(q, -0.16891980449736868, 2);
  sqcRZGate(q, 0.715986192424622, 2);
  sqcRYGate(q, 2.238362382303833, 3);
  sqcRZGate(q, 1.4003963411043996, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3170893573522653, 0);
  sqcRZGate(q, 1.187159679253034, 0);
  sqcRYGate(q, -2.424906963016655, 1);
  sqcRZGate(q, 2.704447442348674, 1);
  sqcRYGate(q, 2.7214979512154334, 2);
  sqcRZGate(q, 1.2189068514599777, 2);
  sqcRYGate(q, 0.21204301384301466, 3);
  sqcRZGate(q, -1.319948873805762, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.002581314099883802, 0);
  sqcRZGate(q, -2.213004009102508, 0);
  sqcRYGate(q, -0.4000830134763347, 1);
  sqcRZGate(q, 1.5286794111289386, 1);
  sqcRYGate(q, 2.1627541452602728, 2);
  sqcRZGate(q, -0.982814633913727, 2);
  sqcRYGate(q, -1.9066193590493157, 3);
  sqcRZGate(q, -0.7202622058814613, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.02124624725577462, 0);
  sqcRZGate(q, 0.6394322148175142, 0);
  sqcRYGate(q, 2.7147414928165916, 1);
  sqcRZGate(q, 2.929754294212151, 1);
  sqcRYGate(q, -1.2867409061232682, 2);
  sqcRZGate(q, 2.8473008203568577, 2);
  sqcRYGate(q, -0.9769725190874734, 3);
  sqcRZGate(q, 0.406613862310862, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9830164616954895, 0);
  sqcRZGate(q, 0.5514883319158745, 0);
  sqcRYGate(q, 2.4268364099663486, 1);
  sqcRZGate(q, -1.1179057333906823, 1);
  sqcRYGate(q, -0.8711043026057004, 2);
  sqcRZGate(q, -1.7628135195201506, 2);
  sqcRYGate(q, -0.21920316609957932, 3);
  sqcRZGate(q, 2.0243968540365813, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.18442424819476, 0);
  sqcRZGate(q, 0.34529481464244327, 0);
  sqcRYGate(q, 0.9034268717902938, 1);
  sqcRZGate(q, 3.027771155808143, 1);
  sqcRYGate(q, 3.0933676938017776, 2);
  sqcRZGate(q, 2.899252712834395, 2);
  sqcRYGate(q, 1.1570294296371557, 3);
  sqcRZGate(q, 0.9019605042881773, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.970532427446896, 0);
  sqcRZGate(q, 0.9726603830069053, 0);
  sqcRYGate(q, -2.9748345118017165, 1);
  sqcRZGate(q, 1.6356692969240552, 1);
  sqcRYGate(q, -2.6131527335500357, 2);
  sqcRZGate(q, 0.26735774764137116, 2);
  sqcRYGate(q, -2.325851744039833, 3);
  sqcRZGate(q, 1.466343715921613, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6773527013348244, 0);
  sqcRZGate(q, 0.5657512556113067, 0);
  sqcRYGate(q, -1.5442439058616833, 1);
  sqcRZGate(q, -0.44660182478477317, 1);
  sqcRYGate(q, 1.3888405366477712, 2);
  sqcRZGate(q, -1.4162767747346225, 2);
  sqcRYGate(q, -0.09153682728214878, 3);
  sqcRZGate(q, 1.893169170242892, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.1148291351939394, 0);
  sqcRZGate(q, 0.7781129461298967, 0);
  sqcRYGate(q, 2.3999410150994147, 1);
  sqcRZGate(q, 1.6227507224264874, 1);
  sqcRYGate(q, -1.8770985139925918, 2);
  sqcRZGate(q, -1.6570237548158575, 2);
  sqcRYGate(q, 3.081152886104114, 3);
  sqcRZGate(q, -2.73886389914972, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.710924508588809, 0);
  sqcRZGate(q, -0.07300146956645924, 0);
  sqcRYGate(q, 1.590315767384766, 1);
  sqcRZGate(q, 1.2136427019813325, 1);
  sqcRYGate(q, -0.11326728870792291, 2);
  sqcRZGate(q, -0.9276961548296452, 2);
  sqcRYGate(q, 1.4381697718325597, 3);
  sqcRZGate(q, -2.5333696952466855, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.720746285583472, 0);
  sqcRZGate(q, 3.1237355324686633, 0);
  sqcRYGate(q, 1.5856000440507012, 1);
  sqcRZGate(q, -0.723798219490395, 1);
  sqcRYGate(q, -0.6072352590095562, 2);
  sqcRZGate(q, 2.53621197983845, 2);
  sqcRYGate(q, -1.8349402206432261, 3);
  sqcRZGate(q, 1.465619619005122, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7496277521958468, 0);
  sqcRZGate(q, -2.9622036477107727, 0);
  sqcRYGate(q, -2.833619632982569, 1);
  sqcRZGate(q, -2.498787420787728, 1);
  sqcRYGate(q, -0.9286945724613263, 2);
  sqcRZGate(q, 0.22241107384625625, 2);
  sqcRYGate(q, -2.6282978438425606, 3);
  sqcRZGate(q, 2.6773426258134876, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9299426141268556, 0);
  sqcRZGate(q, -1.2273720087330657, 0);
  sqcRYGate(q, -2.299313565183302, 1);
  sqcRZGate(q, -3.1249357039444057, 1);
  sqcRYGate(q, -0.6300581861976351, 2);
  sqcRZGate(q, 2.0780701931044243, 2);
  sqcRYGate(q, 1.6892701147660767, 3);
  sqcRZGate(q, -2.9482999444315645, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.714519051807013, 0);
  sqcRZGate(q, -3.123884831044487, 0);
  sqcRYGate(q, 1.1745133398883385, 1);
  sqcRZGate(q, 1.3595080292042656, 1);
  sqcRYGate(q, 1.5188965276944293, 2);
  sqcRZGate(q, -2.377230104906112, 2);
  sqcRYGate(q, 2.62999038915144, 3);
  sqcRZGate(q, 2.9532619022314823, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.523027792517056, 0);
  sqcRZGate(q, -2.042814320588649, 0);
  sqcRYGate(q, 0.5810526553985406, 1);
  sqcRZGate(q, 1.6655078977668896, 1);
  sqcRYGate(q, -1.173221782584741, 2);
  sqcRZGate(q, -2.9705064856288548, 2);
  sqcRYGate(q, 1.6348772701662622, 3);
  sqcRZGate(q, 0.7553211002728172, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3350197291051389, 0);
  sqcRZGate(q, -1.551183963654997, 0);
  sqcRYGate(q, 0.3172229332444063, 1);
  sqcRZGate(q, 1.5423144219169105, 1);
  sqcRYGate(q, 2.61146233670143, 2);
  sqcRZGate(q, 2.506008359977114, 2);
  sqcRYGate(q, -1.7979490156691968, 3);
  sqcRZGate(q, 0.8659991089768031, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.45196643785461177, 0);
  sqcRZGate(q, -1.6142679890887859, 0);
  sqcRYGate(q, 3.117591645687031, 1);
  sqcRZGate(q, -1.3360599774815802, 1);
  sqcRYGate(q, 2.751455792344917, 2);
  sqcRZGate(q, -1.3054294926201486, 2);
  sqcRYGate(q, -0.33723071890855394, 3);
  sqcRZGate(q, 0.054943791722938506, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4146671730800824, 0);
  sqcRZGate(q, 0.4916199940533917, 0);
  sqcRYGate(q, -2.3978029359584303, 1);
  sqcRZGate(q, 2.65310613468753, 1);
  sqcRYGate(q, -2.5561046527777256, 2);
  sqcRZGate(q, 2.86414196188937, 2);
  sqcRYGate(q, 2.064297029147518, 3);
  sqcRZGate(q, 0.6382510601769499, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5365387236475017, 0);
  sqcRZGate(q, 2.038658749542525, 0);
  sqcRYGate(q, -0.5773717998544975, 1);
  sqcRZGate(q, 0.9624916042292466, 1);
  sqcRYGate(q, -0.2781999971341878, 2);
  sqcRZGate(q, -0.9775907501444356, 2);
  sqcRYGate(q, -3.024589484193952, 3);
  sqcRZGate(q, -0.20255857813726766, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.0077952774139525, 0);
  sqcRZGate(q, 2.798280825151621, 0);
  sqcRYGate(q, 2.065150947843347, 1);
  sqcRZGate(q, 1.7316117912870406, 1);
  sqcRYGate(q, 2.0872530779712277, 2);
  sqcRZGate(q, 2.9460226877534774, 2);
  sqcRYGate(q, -0.6048560273645931, 3);
  sqcRZGate(q, 2.1840652678056913, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.8506032457571417, 0);
  sqcRZGate(q, 1.1124055810325948, 0);
  sqcRYGate(q, -0.19833481623417093, 1);
  sqcRZGate(q, 2.4616247098324977, 1);
  sqcRYGate(q, -0.17493899632150622, 2);
  sqcRZGate(q, 0.9669866460838764, 2);
  sqcRYGate(q, 0.2109950225264594, 3);
  sqcRZGate(q, -1.7580200862123467, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9888764960056573, 0);
  sqcRZGate(q, 0.851897293801354, 0);
  sqcRYGate(q, 3.0065273524148317, 1);
  sqcRZGate(q, 1.3569102283879992, 1);
  sqcRYGate(q, -2.773239176964991, 2);
  sqcRZGate(q, -0.09332487561600106, 2);
  sqcRYGate(q, -1.1338491195147185, 3);
  sqcRZGate(q, 0.39942683075334795, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6320160377972224, 0);
  sqcRZGate(q, 0.7356937260326011, 0);
  sqcRYGate(q, 0.9951400154094419, 1);
  sqcRZGate(q, -2.6141766346907165, 1);
  sqcRYGate(q, -1.0896215204691888, 2);
  sqcRZGate(q, -0.7715020557595798, 2);
  sqcRYGate(q, 2.0223406231709937, 3);
  sqcRZGate(q, 2.9755189142672, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7762679950332032, 0);
  sqcRZGate(q, -3.140817792040904, 0);
  sqcRYGate(q, 1.8968639106762075, 1);
  sqcRZGate(q, 2.6639457859454216, 1);
  sqcRYGate(q, -1.6420186082279038, 2);
  sqcRZGate(q, 1.5506682511626462, 2);
  sqcRYGate(q, 3.1276270955639562, 3);
  sqcRZGate(q, -1.9589887597388742, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1910733278653183, 0);
  sqcRZGate(q, 1.0549004956060728, 0);
  sqcRYGate(q, -0.11163201111028345, 1);
  sqcRZGate(q, 1.1593089260039582, 1);
  sqcRYGate(q, 1.260099501085077, 2);
  sqcRZGate(q, -0.708230901783807, 2);
  sqcRYGate(q, -0.47283333536081246, 3);
  sqcRZGate(q, -0.51350875721716, 3);

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
