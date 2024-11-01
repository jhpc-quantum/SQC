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

  sqcRYGate(q, -0.2390898672294957, 0);
  sqcRYGate(q, 2.431585532886103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2782304215214895, 0);
  sqcRYGate(q, -2.394411958568213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.035272585446758, 1);
  sqcRYGate(q, 2.7260521531489053, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.21795773727010398, 1);
  sqcRYGate(q, 2.3472881911126167, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0953994864462373, 2);
  sqcRYGate(q, 0.18164364902945085, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9134911595138453, 2);
  sqcRYGate(q, -1.8175307211337288, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.37903725163702706, 0);
  sqcRYGate(q, -0.24597063118517118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0287615012275064, 0);
  sqcRYGate(q, -0.020499185884423815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.83568180363686, 1);
  sqcRYGate(q, 2.8761863164613297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4451536064911217, 1);
  sqcRYGate(q, -2.495805068151075, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3848737891214649, 2);
  sqcRYGate(q, 0.5688632764831559, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1262993370535437, 2);
  sqcRYGate(q, -0.5721559730093793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14510249298602493, 0);
  sqcRYGate(q, -2.5630806351673363, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5395602285360752, 0);
  sqcRYGate(q, 0.18552574204029246, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.98347929364706, 1);
  sqcRYGate(q, 2.930653240826803, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.14401641076150024, 1);
  sqcRYGate(q, -1.2455237454772907, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9133607722037143, 2);
  sqcRYGate(q, 0.6894495493638315, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6365286542455186, 2);
  sqcRYGate(q, 0.2629829793727376, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3755812756906556, 0);
  sqcRYGate(q, -1.0040821302838159, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06950902141861182, 0);
  sqcRYGate(q, 0.9237912266093825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5282151377781292, 1);
  sqcRYGate(q, 2.729486689392378, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.45974660105831155, 1);
  sqcRYGate(q, -0.604720806581037, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4044225303808444, 2);
  sqcRYGate(q, -0.400796984487488, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.769516863764419, 2);
  sqcRYGate(q, 0.9648705667717696, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4976276918903944, 0);
  sqcRYGate(q, 2.291343865253827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2840520801039623, 0);
  sqcRYGate(q, 1.424258398555524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4094785259795066, 1);
  sqcRYGate(q, -2.2974597108961192, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.798014282777788, 1);
  sqcRYGate(q, -2.6504394261846347, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.438289622143099, 2);
  sqcRYGate(q, -2.634429226538914, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.39322469977723645, 2);
  sqcRYGate(q, 0.8473698139951339, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17807816227178472, 0);
  sqcRYGate(q, 1.8503939443280526, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4071720001116135, 0);
  sqcRYGate(q, -1.259158892212893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6667869260331968, 1);
  sqcRYGate(q, 2.4351452619816207, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.584539738816586, 1);
  sqcRYGate(q, -0.42784536686581187, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3488933713302003, 2);
  sqcRYGate(q, -1.5825241065191666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.696311632554497, 2);
  sqcRYGate(q, 2.6174121365257883, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2654129570718897, 0);
  sqcRYGate(q, -2.5005151088259128, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.150102988435666, 0);
  sqcRYGate(q, -2.0089859725248167, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.069074952664219, 1);
  sqcRYGate(q, 1.584635987052673, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6495018649682868, 1);
  sqcRYGate(q, -2.7640270693998104, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6031634691843728, 2);
  sqcRYGate(q, 1.696592815494296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9527019702421171, 2);
  sqcRYGate(q, -0.6636243766753288, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4185473203768117, 0);
  sqcRYGate(q, 1.3946811403393091, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8821093460355262, 0);
  sqcRYGate(q, 1.3018576512741138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0119142245344475, 1);
  sqcRYGate(q, -0.7127078676777572, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2671661854642524, 1);
  sqcRYGate(q, 1.8690912634469745, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.371221366329162, 2);
  sqcRYGate(q, 0.4074765312819224, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8474980957731146, 2);
  sqcRYGate(q, -0.6459749447882979, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3395557189357499, 0);
  sqcRYGate(q, 0.020886050605739115, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1623319962611003, 0);
  sqcRYGate(q, -1.3766420745698476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.225057917388342, 1);
  sqcRYGate(q, 1.297909715880765, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1699349277661888, 1);
  sqcRYGate(q, 0.20007388131470208, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.341567584687961, 2);
  sqcRYGate(q, 1.9433899637255296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.950861717544861, 2);
  sqcRYGate(q, -2.7528794675463195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.814347270661726, 0);
  sqcRYGate(q, -0.4634328304622244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3281714178326842, 0);
  sqcRYGate(q, -1.9627048407043315, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9423216270981287, 1);
  sqcRYGate(q, 0.21139965484899026, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5228545223930237, 1);
  sqcRYGate(q, 0.4651373304974134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8328836965050037, 2);
  sqcRYGate(q, -2.322586809949696, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1860607246324344, 2);
  sqcRYGate(q, -1.8217553056984332, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0012076573411006, 0);
  sqcRYGate(q, -0.014982348571864534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8041748870848693, 0);
  sqcRYGate(q, 1.7632368179418378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7098093813872068, 1);
  sqcRYGate(q, 0.5722059188307052, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1453704373571574, 1);
  sqcRYGate(q, -1.0815955254155982, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.998870825445312, 2);
  sqcRYGate(q, 1.9075004774516078, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5501076038576755, 2);
  sqcRYGate(q, 2.818807138901536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07710033122704615, 0);
  sqcRYGate(q, 0.001418232000620634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7021370486149472, 0);
  sqcRYGate(q, 3.1395400762121723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.015270121952412731, 1);
  sqcRYGate(q, 2.8263036126444954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4195059971061, 1);
  sqcRYGate(q, -0.4122961647262196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5649694930407767, 2);
  sqcRYGate(q, 0.29138012935663055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7945774716592036, 2);
  sqcRYGate(q, -0.3427653890253204, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5227535999064195, 0);
  sqcRYGate(q, 0.8321627859737886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3141925817806146, 0);
  sqcRYGate(q, -2.6777850784227772, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.049102634641948625, 1);
  sqcRYGate(q, 3.0802677959792213, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.273526794946289, 1);
  sqcRYGate(q, -1.642619027643633, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1768592998953964, 2);
  sqcRYGate(q, 1.649216955036958, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.827763795469898, 2);
  sqcRYGate(q, 2.580405786017721, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.836937621552635, 0);
  sqcRYGate(q, 2.897763464832293, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.28669993063555044, 0);
  sqcRYGate(q, -2.719828275447931, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5309574615287256, 1);
  sqcRYGate(q, -2.5927057142926224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.987855216944702, 1);
  sqcRYGate(q, -1.6128465653683888, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8541276588238049, 2);
  sqcRYGate(q, -0.44062182032018976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3928334077753937, 2);
  sqcRYGate(q, 0.6679015180272371, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9989294754573196, 0);
  sqcRYGate(q, 0.16315288180541776, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6548606282010665, 0);
  sqcRYGate(q, 2.3056688327140376, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4342870152622524, 1);
  sqcRYGate(q, -1.852218457240161, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.426139041803692, 1);
  sqcRYGate(q, -0.6724933069130069, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2746335446919757, 2);
  sqcRYGate(q, -1.7620407033737493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.006532319709547235, 2);
  sqcRYGate(q, -1.5975603281247395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4287511926883312, 0);
  sqcRYGate(q, 0.6941399511640717, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9658742510869454, 0);
  sqcRYGate(q, 2.0367880233571753, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9424726220449577, 1);
  sqcRYGate(q, 2.2347028093051495, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0262454450282619, 1);
  sqcRYGate(q, -2.831605151463116, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9817363041177565, 2);
  sqcRYGate(q, 0.9579802994145714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1514369875786103, 2);
  sqcRYGate(q, 2.103411521404916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.59654553492783, 0);
  sqcRYGate(q, -1.4911489398678792, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2729398465852713, 0);
  sqcRYGate(q, 1.0747860495775166, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0310417561349645, 1);
  sqcRYGate(q, 1.4679768618473628, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9669780885310475, 1);
  sqcRYGate(q, 1.9060282900746335, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.435496785935537, 2);
  sqcRYGate(q, -0.8739409064921927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1709794044259567, 2);
  sqcRYGate(q, -2.188892396442073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.026675864975421067, 0);
  sqcRYGate(q, -2.626133459055765, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.007568214331010134, 0);
  sqcRYGate(q, 2.1749771624107517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5188724004415749, 1);
  sqcRYGate(q, -2.4397142799166347, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.06373458028638, 1);
  sqcRYGate(q, 3.026607942997079, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8745290995602542, 2);
  sqcRYGate(q, 0.7691567720052985, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6260522617690008, 2);
  sqcRYGate(q, 2.4060170279425797, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.056671322320478515, 0);
  sqcRYGate(q, 2.5180317462570345, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7105896725520372, 0);
  sqcRYGate(q, -2.7636873517966287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.05335852070750313, 1);
  sqcRYGate(q, 0.6700058343811062, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7006408052147703, 1);
  sqcRYGate(q, 0.5385200457036458, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3045854932897596, 2);
  sqcRYGate(q, -3.0289817012497027, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6619825446737893, 2);
  sqcRYGate(q, 2.4987482314989298, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6452020577135289, 0);
  sqcRYGate(q, 2.786719886559848, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7461531406177664, 0);
  sqcRYGate(q, 0.6342449273650487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0455462388703456, 1);
  sqcRYGate(q, 1.2653061458579042, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10164966921044037, 1);
  sqcRYGate(q, -0.6352651120425845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5376634877928996, 2);
  sqcRYGate(q, 0.5844423477961742, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8554688363957661, 2);
  sqcRYGate(q, -1.0203008936540978, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.21827386339551236, 0);
  sqcRYGate(q, 0.7276818574263023, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3742733291097666, 0);
  sqcRYGate(q, -0.576489626499792, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.05506964032666148, 1);
  sqcRYGate(q, 2.2167979586585154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.11725489459611539, 1);
  sqcRYGate(q, -1.2711190192672024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.194102184661732, 2);
  sqcRYGate(q, -0.12488632251044116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4525402907356809, 2);
  sqcRYGate(q, 1.0831259248887146, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0779548047614558, 0);
  sqcRYGate(q, -0.030773886445885267, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.600391331800138, 0);
  sqcRYGate(q, -2.03792209825085, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08831216806894293, 1);
  sqcRYGate(q, -0.19141472520501424, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8328681682099244, 1);
  sqcRYGate(q, 1.1374479467697736, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0939139948299204, 2);
  sqcRYGate(q, -0.9613116300595871, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8702785175210905, 2);
  sqcRYGate(q, 2.203090517964134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5666908455949878, 0);
  sqcRYGate(q, -0.6816177544089734, 1);
  sqcRYGate(q, -0.022090714668583367, 2);
  sqcRYGate(q, -2.5304508720024943, 3);

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
