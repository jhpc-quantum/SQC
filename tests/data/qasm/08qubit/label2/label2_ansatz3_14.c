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

  sqcRYGate(q, 2.602425454729002, 0);
  sqcRZGate(q, -0.06294757549196196, 0);
  sqcRYGate(q, 3.107223598927221, 1);
  sqcRZGate(q, 1.8794205364883236, 1);
  sqcRYGate(q, 5.763606770744925e-05, 2);
  sqcRZGate(q, -1.1115565006360775, 2);
  sqcRYGate(q, 0.29728974219067134, 3);
  sqcRZGate(q, -0.7313560061877663, 3);
  sqcRYGate(q, 2.655317348885758, 4);
  sqcRZGate(q, 1.9852009905869676, 4);
  sqcRYGate(q, 3.1060209498074114, 5);
  sqcRZGate(q, -2.6148892458177717, 5);
  sqcRYGate(q, -1.8185805367214565, 6);
  sqcRZGate(q, 1.0145323719520865, 6);
  sqcRYGate(q, 2.943272151677024, 7);
  sqcRZGate(q, 1.8950717148323952, 7);
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
  sqcRYGate(q, -1.2411864379851272, 0);
  sqcRZGate(q, -1.9648955803230777, 0);
  sqcRYGate(q, 0.05007621317304176, 1);
  sqcRZGate(q, 0.8549664385915753, 1);
  sqcRYGate(q, 3.141373445102133, 2);
  sqcRZGate(q, 2.322470037101892, 2);
  sqcRYGate(q, -0.5310375987930493, 3);
  sqcRZGate(q, 1.6349558288773736, 3);
  sqcRYGate(q, 2.389550579625358, 4);
  sqcRZGate(q, -0.4324776227057514, 4);
  sqcRYGate(q, -0.014852756233938893, 5);
  sqcRZGate(q, 1.4367840183681548, 5);
  sqcRYGate(q, 1.3394899082788323, 6);
  sqcRZGate(q, -2.947237506989004, 6);
  sqcRYGate(q, -2.734874996958495, 7);
  sqcRZGate(q, 2.367430433044173, 7);
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
  sqcRYGate(q, 2.6834280156694708, 0);
  sqcRZGate(q, -1.62182234993222, 0);
  sqcRYGate(q, -0.003780389225532588, 1);
  sqcRZGate(q, 2.522930577054567, 1);
  sqcRYGate(q, -3.1412104124506928, 2);
  sqcRZGate(q, 0.7167725739522356, 2);
  sqcRYGate(q, -0.18986874706737897, 3);
  sqcRZGate(q, 0.7487986695625475, 3);
  sqcRYGate(q, 1.8262865476804684, 4);
  sqcRZGate(q, -1.4871939642633234, 4);
  sqcRYGate(q, -0.004052593100333013, 5);
  sqcRZGate(q, 0.05689151962062055, 5);
  sqcRYGate(q, -3.010526163914286, 6);
  sqcRZGate(q, 0.45763183945626723, 6);
  sqcRYGate(q, 0.28983055352455533, 7);
  sqcRZGate(q, 0.7596809630777032, 7);
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
  sqcRYGate(q, 2.627228347555796, 0);
  sqcRZGate(q, 1.6790219552260757, 0);
  sqcRYGate(q, -0.03001066475120329, 1);
  sqcRZGate(q, 0.05555184680052548, 1);
  sqcRYGate(q, 3.14088921426077, 2);
  sqcRZGate(q, 1.7937483642329342, 2);
  sqcRYGate(q, 1.3936592683137246, 3);
  sqcRZGate(q, 1.1946742612515542, 3);
  sqcRYGate(q, -0.7188564048845896, 4);
  sqcRZGate(q, -1.285668394830438, 4);
  sqcRYGate(q, -3.084322513740598, 5);
  sqcRZGate(q, -0.8452829357928646, 5);
  sqcRYGate(q, -1.737295250292202, 6);
  sqcRZGate(q, 1.9324656480500186, 6);
  sqcRYGate(q, 2.654255159560507, 7);
  sqcRZGate(q, -1.315476481492264, 7);
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
  sqcRYGate(q, -2.4983069471396666, 0);
  sqcRZGate(q, -2.1832863391284363, 0);
  sqcRYGate(q, -3.141297561968079, 1);
  sqcRZGate(q, 1.0140261427002373, 1);
  sqcRYGate(q, -0.0016932438982051323, 2);
  sqcRZGate(q, -0.8492449478551074, 2);
  sqcRYGate(q, 2.1534122607258572, 3);
  sqcRZGate(q, -1.2281080949367453, 3);
  sqcRYGate(q, -2.650701280649176, 4);
  sqcRZGate(q, -0.533318307817181, 4);
  sqcRYGate(q, -0.04595880482007319, 5);
  sqcRZGate(q, -1.206446141644813, 5);
  sqcRYGate(q, -1.27507683468572, 6);
  sqcRZGate(q, 3.0269440121396003, 6);
  sqcRYGate(q, 2.725330619816348, 7);
  sqcRZGate(q, 2.8858983411943053, 7);
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
  sqcRYGate(q, -0.4220221268659863, 0);
  sqcRZGate(q, -1.7332583939549204, 0);
  sqcRYGate(q, -1.5817233091939562, 1);
  sqcRZGate(q, 1.8157533064286513, 1);
  sqcRYGate(q, -3.138787568864578, 2);
  sqcRZGate(q, -1.8462592897488665, 2);
  sqcRYGate(q, 0.8024834927409026, 3);
  sqcRZGate(q, 2.7556831179183, 3);
  sqcRYGate(q, 0.7216878964477971, 4);
  sqcRZGate(q, 0.28531863522839473, 4);
  sqcRYGate(q, 0.1210451753726236, 5);
  sqcRZGate(q, -0.9837668836793966, 5);
  sqcRYGate(q, 0.39029965301691766, 6);
  sqcRZGate(q, 0.22348593949770262, 6);
  sqcRYGate(q, 2.735358122134101, 7);
  sqcRZGate(q, -2.638006146702636, 7);
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
  sqcRYGate(q, 1.5770809799964773, 0);
  sqcRZGate(q, 2.8194074628179067, 0);
  sqcRYGate(q, 3.1342599389143286, 1);
  sqcRZGate(q, 1.3416496043534571, 1);
  sqcRYGate(q, 0.0016933058535384402, 2);
  sqcRZGate(q, 2.0525481647973693, 2);
  sqcRYGate(q, -3.138774235781971, 3);
  sqcRZGate(q, 1.237276045481849, 3);
  sqcRYGate(q, -0.296760180355105, 4);
  sqcRZGate(q, -2.837540681568043, 4);
  sqcRYGate(q, -3.1236470594027077, 5);
  sqcRZGate(q, -1.1021188870300431, 5);
  sqcRYGate(q, 0.09260486610922047, 6);
  sqcRZGate(q, 1.775325613410546, 6);
  sqcRYGate(q, 1.6052938248367814, 7);
  sqcRZGate(q, -1.0648960705817638, 7);
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
  sqcRYGate(q, 2.995408085657705, 0);
  sqcRZGate(q, -1.1761610969877667, 0);
  sqcRYGate(q, -0.00805061222058353, 1);
  sqcRZGate(q, -1.3325885219480904, 1);
  sqcRYGate(q, 1.5756944469752598, 2);
  sqcRZGate(q, 2.9568956987152055, 2);
  sqcRYGate(q, 2.350751878463437, 3);
  sqcRZGate(q, -2.4009518363721543, 3);
  sqcRYGate(q, 2.0345909245284464, 4);
  sqcRZGate(q, 1.1388408637458305, 4);
  sqcRYGate(q, 1.9777814501345459, 5);
  sqcRZGate(q, -3.13980956392953, 5);
  sqcRYGate(q, -0.9071118352471572, 6);
  sqcRZGate(q, -1.6817133943701457, 6);
  sqcRYGate(q, 0.34986178324191197, 7);
  sqcRZGate(q, 1.6494915039055966, 7);
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
  sqcRYGate(q, -0.8769113604356811, 0);
  sqcRZGate(q, -1.7548330521838231, 0);
  sqcRYGate(q, -3.1317860757815166, 1);
  sqcRZGate(q, 1.3328794934812151, 1);
  sqcRYGate(q, -1.462542962143912, 2);
  sqcRZGate(q, 0.09688248897462595, 2);
  sqcRYGate(q, -1.359815898274447e-05, 3);
  sqcRZGate(q, -0.7097101974509684, 3);
  sqcRYGate(q, -3.1411451668332364, 4);
  sqcRZGate(q, 1.5965918148266205, 4);
  sqcRYGate(q, -1.6767905584701426, 5);
  sqcRZGate(q, 0.00293477740922596, 5);
  sqcRYGate(q, 0.3117703701873911, 6);
  sqcRZGate(q, 0.08853476533213023, 6);
  sqcRYGate(q, 0.061375609277848305, 7);
  sqcRZGate(q, -1.0963250156234512, 7);
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
  sqcRYGate(q, -0.00036864315000162406, 0);
  sqcRZGate(q, 2.420286253366772, 0);
  sqcRYGate(q, 0.4795421395318851, 1);
  sqcRZGate(q, 1.3320761006871544, 1);
  sqcRYGate(q, -0.006808403131431718, 2);
  sqcRZGate(q, -1.479487885016523, 2);
  sqcRYGate(q, 0.0035643058220315993, 3);
  sqcRZGate(q, -1.3822239166935582, 3);
  sqcRYGate(q, -0.0005242278730671202, 4);
  sqcRZGate(q, 0.5990092414130571, 4);
  sqcRYGate(q, 1.1722908784589823, 5);
  sqcRZGate(q, 1.326825856588671, 5);
  sqcRYGate(q, -1.8122648408501947, 6);
  sqcRZGate(q, 0.9983061120576622, 6);
  sqcRYGate(q, -3.0927713859556896, 7);
  sqcRZGate(q, 2.436880455689224, 7);
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
  sqcRYGate(q, -0.3798836018719296, 0);
  sqcRZGate(q, -2.0731404864618446, 0);
  sqcRYGate(q, -3.1415658632987022, 1);
  sqcRZGate(q, -2.4692037087229144, 1);
  sqcRYGate(q, -0.5250360612124606, 2);
  sqcRZGate(q, -1.2579338161134148, 2);
  sqcRYGate(q, 0.0008399048351748206, 3);
  sqcRZGate(q, -1.6047416298297859, 3);
  sqcRYGate(q, -1.8466755773593977, 4);
  sqcRZGate(q, 1.5678048599326404, 4);
  sqcRYGate(q, -0.4189153283971567, 5);
  sqcRZGate(q, -1.3391583320283535, 5);
  sqcRYGate(q, 0.382563466781888, 6);
  sqcRZGate(q, -0.028808903682151943, 6);
  sqcRYGate(q, 1.0156611793207364, 7);
  sqcRZGate(q, 2.1208600151243093, 7);
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
  sqcRYGate(q, -0.0007228514284500775, 0);
  sqcRZGate(q, -0.15759080125548675, 0);
  sqcRYGate(q, -2.5163602843611694, 1);
  sqcRZGate(q, 0.7941742212090327, 1);
  sqcRYGate(q, -3.141464906530325, 2);
  sqcRZGate(q, 2.100149417919641, 2);
  sqcRYGate(q, -1.573304550987909, 3);
  sqcRZGate(q, 2.6922360529274805, 3);
  sqcRYGate(q, -2.920117088126273e-05, 4);
  sqcRZGate(q, -2.890318248493762, 4);
  sqcRYGate(q, -0.06960429143875224, 5);
  sqcRZGate(q, -2.9435101398110373, 5);
  sqcRYGate(q, -0.00042534092916197486, 6);
  sqcRZGate(q, -0.6115427399532621, 6);
  sqcRYGate(q, -1.5724323018532633, 7);
  sqcRZGate(q, -1.604760678193083, 7);
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
  sqcRYGate(q, -2.391528557130828, 0);
  sqcRZGate(q, -1.7755269023844955, 0);
  sqcRYGate(q, 2.7624683557622993, 1);
  sqcRZGate(q, -1.7526285975925457, 1);
  sqcRYGate(q, -1.5696243970307835, 2);
  sqcRZGate(q, -0.282910925040181, 2);
  sqcRYGate(q, 3.1412758718670886, 3);
  sqcRZGate(q, -0.06262551048995935, 3);
  sqcRYGate(q, 2.284598912843647, 4);
  sqcRZGate(q, -2.77211900457387, 4);
  sqcRYGate(q, 3.141535456735278, 5);
  sqcRZGate(q, -0.06825483457612613, 5);
  sqcRYGate(q, 0.0005252080397978903, 6);
  sqcRZGate(q, -3.118149568120699, 6);
  sqcRYGate(q, 1.085632373730913, 7);
  sqcRZGate(q, -3.1214124575992215, 7);
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
  sqcRYGate(q, -1.5757392227784024, 0);
  sqcRZGate(q, -1.9122896094032422, 0);
  sqcRYGate(q, 1.728802154919145, 1);
  sqcRZGate(q, -1.589848106748959, 1);
  sqcRYGate(q, -1.570823995302422, 2);
  sqcRZGate(q, 2.9456965294355855, 2);
  sqcRYGate(q, -0.6305355730483717, 3);
  sqcRZGate(q, -2.9771111218579955, 3);
  sqcRYGate(q, 1.5690304182342611, 4);
  sqcRZGate(q, -0.6794981006743387, 4);
  sqcRYGate(q, -0.06651979522278495, 5);
  sqcRZGate(q, -0.44264140319019685, 5);
  sqcRYGate(q, -3.1411321682409046, 6);
  sqcRZGate(q, -0.7555988633937957, 6);
  sqcRYGate(q, -0.06052225147618007, 7);
  sqcRZGate(q, 2.0394175547960747, 7);
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
  sqcRYGate(q, -2.9669227947272508e-05, 0);
  sqcRZGate(q, 0.8651390415667306, 0);
  sqcRYGate(q, -1.627703857418434, 1);
  sqcRZGate(q, 2.7552234362002856, 1);
  sqcRYGate(q, -1.0147804522908645e-05, 2);
  sqcRZGate(q, 1.7666540118696865, 2);
  sqcRYGate(q, -3.1414567869726726, 3);
  sqcRZGate(q, -1.4378598027704614, 3);
  sqcRYGate(q, -1.5704290996753687, 4);
  sqcRZGate(q, -1.9423526367262145, 4);
  sqcRYGate(q, 3.141538342034398, 5);
  sqcRZGate(q, 1.035268384079404, 5);
  sqcRYGate(q, 0.7351572850932298, 6);
  sqcRZGate(q, -0.276420549561613, 6);
  sqcRYGate(q, 0.5701374724451336, 7);
  sqcRZGate(q, 1.6468019751339966, 7);
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
  sqcRYGate(q, 0.08508658524307029, 0);
  sqcRZGate(q, -1.534578477678991, 0);
  sqcRYGate(q, 3.085205051994032, 1);
  sqcRZGate(q, -1.6328668665100006, 1);
  sqcRYGate(q, 1.5706865965964, 2);
  sqcRZGate(q, 0.2009204130985113, 2);
  sqcRYGate(q, -1.5869871729113314, 3);
  sqcRZGate(q, 0.9035663861829486, 3);
  sqcRYGate(q, -0.0005020837968903313, 4);
  sqcRZGate(q, -2.7707879925926755, 4);
  sqcRYGate(q, 0.00013291604278276026, 5);
  sqcRZGate(q, 1.5958924251841637, 5);
  sqcRYGate(q, -0.0005596582443683218, 6);
  sqcRZGate(q, 2.444712446216637, 6);
  sqcRYGate(q, 0.14316359717786986, 7);
  sqcRZGate(q, 0.8162060827619663, 7);
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
  sqcRYGate(q, 3.0944775472917567, 0);
  sqcRZGate(q, -1.3641230476170787, 0);
  sqcRYGate(q, 1.5513976235761262, 1);
  sqcRZGate(q, -2.492625182730301, 1);
  sqcRYGate(q, -0.00010203077185398871, 2);
  sqcRZGate(q, -1.330390889673466, 2);
  sqcRYGate(q, 5.119384713203496e-05, 3);
  sqcRZGate(q, -2.102458521351161, 3);
  sqcRYGate(q, -1.5706477135089327, 4);
  sqcRZGate(q, 1.263334385330288, 4);
  sqcRYGate(q, -1.7498780095890006e-05, 5);
  sqcRZGate(q, -1.685330098526684, 5);
  sqcRYGate(q, -0.02821587915636983, 6);
  sqcRZGate(q, -0.546941502724039, 6);
  sqcRYGate(q, -2.644302836386652, 7);
  sqcRZGate(q, 1.2167573133417005, 7);
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
  sqcRYGate(q, -0.676646135397708, 0);
  sqcRZGate(q, 1.570825813965918, 0);
  sqcRYGate(q, 1.7683643053732663, 1);
  sqcRZGate(q, -0.3004066736090339, 1);
  sqcRYGate(q, 1.004395338997071, 2);
  sqcRZGate(q, -1.2306709393638746, 2);
  sqcRYGate(q, 3.0117786199500545, 3);
  sqcRZGate(q, -0.2705480430212314, 3);
  sqcRYGate(q, 1.371512035413008, 4);
  sqcRZGate(q, -1.8544362766162488, 4);
  sqcRYGate(q, -1.6703886947777296, 5);
  sqcRZGate(q, -1.7646549751591603, 5);
  sqcRYGate(q, -1.5283805049919008, 6);
  sqcRZGate(q, -0.2265649473363232, 6);
  sqcRYGate(q, -0.17707294076320967, 7);
  sqcRZGate(q, -1.536635369182779, 7);

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
