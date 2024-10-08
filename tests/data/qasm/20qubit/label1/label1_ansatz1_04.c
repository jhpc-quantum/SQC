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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 0.35080526677484797, 0);
  sqcRZGate(q, -0.31388599761587965, 0);
  sqcRYGate(q, 3.119189780962602, 1);
  sqcRZGate(q, -2.1287033319472597, 1);
  sqcRYGate(q, 0.6906780664976973, 2);
  sqcRZGate(q, -0.28462592165455775, 2);
  sqcRYGate(q, 2.8348847192698288, 3);
  sqcRZGate(q, 2.6111820391916893, 3);
  sqcRYGate(q, 2.4586334917971033, 4);
  sqcRZGate(q, 2.619703427987343, 4);
  sqcRYGate(q, -2.691207067042539, 5);
  sqcRZGate(q, -2.165704740331501, 5);
  sqcRYGate(q, -1.490762698599149, 6);
  sqcRZGate(q, -0.02492866045865583, 6);
  sqcRYGate(q, -1.5208200441226216, 7);
  sqcRZGate(q, -3.076053633521561, 7);
  sqcRYGate(q, -0.49200635894367917, 8);
  sqcRZGate(q, 1.57189656770694, 8);
  sqcRYGate(q, 3.0876452953208373, 9);
  sqcRZGate(q, -0.2712102314135257, 9);
  sqcRYGate(q, 3.009007441280557, 10);
  sqcRZGate(q, 0.8424614449349302, 10);
  sqcRYGate(q, 1.9000373997598725, 11);
  sqcRZGate(q, -3.1118546923017347, 11);
  sqcRYGate(q, -0.4374133371998684, 12);
  sqcRZGate(q, -0.5764816179531388, 12);
  sqcRYGate(q, 1.7107282397077146, 13);
  sqcRZGate(q, 2.227790739118384, 13);
  sqcRYGate(q, 0.020654916379626947, 14);
  sqcRZGate(q, 1.5142126835458496, 14);
  sqcRYGate(q, -1.754786444971689, 15);
  sqcRZGate(q, 0.06617739766602691, 15);
  sqcRYGate(q, 1.8176016435352695, 16);
  sqcRZGate(q, 1.9351812957092003, 16);
  sqcRYGate(q, -0.49682652303144875, 17);
  sqcRZGate(q, 1.6025856106525866, 17);
  sqcRYGate(q, 0.023395111674314673, 18);
  sqcRZGate(q, 3.017937633210528, 18);
  sqcRYGate(q, 2.3730546375162307, 19);
  sqcRZGate(q, 3.0192123224081877, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.7033020362827487, 0);
  sqcRZGate(q, 2.3803033691410413, 0);
  sqcRYGate(q, 2.923864392420486, 1);
  sqcRZGate(q, 2.0882604379325382, 1);
  sqcRYGate(q, 2.278757378314979, 2);
  sqcRZGate(q, 0.5912734126991164, 2);
  sqcRYGate(q, 1.028421407842272, 3);
  sqcRZGate(q, 2.888694209296547, 3);
  sqcRYGate(q, 1.3695725092172495, 4);
  sqcRZGate(q, 2.9991264239917204, 4);
  sqcRYGate(q, 1.507522291993281, 5);
  sqcRZGate(q, 3.1065706949451855, 5);
  sqcRYGate(q, -0.9882472819679666, 6);
  sqcRZGate(q, 0.029189522981896227, 6);
  sqcRYGate(q, 0.8466995253324193, 7);
  sqcRZGate(q, -0.003816866310524773, 7);
  sqcRYGate(q, 1.48931863802704, 8);
  sqcRZGate(q, 1.733852824403993, 8);
  sqcRYGate(q, 1.1616434121712775, 9);
  sqcRZGate(q, 2.998875926242186, 9);
  sqcRYGate(q, -2.06012745421253, 10);
  sqcRZGate(q, 3.1169327780324663, 10);
  sqcRYGate(q, -1.786148013188308, 11);
  sqcRZGate(q, -2.8036432943341727, 11);
  sqcRYGate(q, 1.2414988040032258, 12);
  sqcRZGate(q, 3.1323100260477066, 12);
  sqcRYGate(q, 1.4070654194314323, 13);
  sqcRZGate(q, 1.0208515495716899, 13);
  sqcRYGate(q, -1.4655779636384445, 14);
  sqcRZGate(q, -0.1477402866747104, 14);
  sqcRYGate(q, -0.4498493966591858, 15);
  sqcRZGate(q, 2.906020040529507, 15);
  sqcRYGate(q, 1.2834792022124437, 16);
  sqcRZGate(q, 2.90376315886398, 16);
  sqcRYGate(q, 2.0301615378309203, 17);
  sqcRZGate(q, 0.5770346216090579, 17);
  sqcRYGate(q, -0.2753086857114279, 18);
  sqcRZGate(q, -1.5236676297507197, 18);
  sqcRYGate(q, 2.6611416460343045, 19);
  sqcRZGate(q, -0.32196728587093043, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.1084746770289495, 0);
  sqcRZGate(q, 0.6938095703536433, 0);
  sqcRYGate(q, 2.684879980379991, 1);
  sqcRZGate(q, -2.644356775542019, 1);
  sqcRYGate(q, 2.6372691129530024, 2);
  sqcRZGate(q, 1.9807362244148219, 2);
  sqcRYGate(q, 1.5498958214375769, 3);
  sqcRZGate(q, 2.8216527601764776, 3);
  sqcRYGate(q, -1.5783144892068275, 4);
  sqcRZGate(q, -3.129643981330529, 4);
  sqcRYGate(q, -0.6983248793878403, 5);
  sqcRZGate(q, -0.0034414459201732588, 5);
  sqcRYGate(q, 0.5389402366240041, 6);
  sqcRZGate(q, -3.140476537904132, 6);
  sqcRYGate(q, -2.665264229048942, 7);
  sqcRZGate(q, -2.0695575419891203, 7);
  sqcRYGate(q, 0.15612542441804056, 8);
  sqcRZGate(q, 2.8294289837230147, 8);
  sqcRYGate(q, -2.7314188385394798, 9);
  sqcRZGate(q, 3.0608837127115813, 9);
  sqcRYGate(q, -1.530001096684125, 10);
  sqcRZGate(q, -0.13539456949334472, 10);
  sqcRYGate(q, -2.932504689546103, 11);
  sqcRZGate(q, 2.7012863669953737, 11);
  sqcRYGate(q, -1.3486215358862175, 12);
  sqcRZGate(q, -0.27890220249969644, 12);
  sqcRYGate(q, 0.3877861904669393, 13);
  sqcRZGate(q, 0.009931384125547555, 13);
  sqcRYGate(q, 3.0608384746028054, 14);
  sqcRZGate(q, 2.8276785906758666, 14);
  sqcRYGate(q, 1.5661454208473913, 15);
  sqcRZGate(q, 0.06394019665031435, 15);
  sqcRYGate(q, 2.194005504079218, 16);
  sqcRZGate(q, -1.237133741464481, 16);
  sqcRYGate(q, -1.5785755032898157, 17);
  sqcRZGate(q, -0.35115167715488843, 17);
  sqcRYGate(q, -1.5493950379416443, 18);
  sqcRZGate(q, -0.3807387157042852, 18);
  sqcRYGate(q, 3.1035394682527384, 19);
  sqcRZGate(q, 2.3774855977322242, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.4239695738377667, 0);
  sqcRZGate(q, -2.340293730531801, 0);
  sqcRYGate(q, -1.221099761111302, 1);
  sqcRZGate(q, 3.1018677081270982, 1);
  sqcRYGate(q, -1.295829633949623, 2);
  sqcRZGate(q, 2.641279512717608, 2);
  sqcRYGate(q, -1.5032906961776784, 3);
  sqcRZGate(q, -2.9534195501274327, 3);
  sqcRYGate(q, 2.4044053347354537, 4);
  sqcRZGate(q, 0.18684602922085294, 4);
  sqcRYGate(q, -2.2047657112478056, 5);
  sqcRZGate(q, -0.34359683434146604, 5);
  sqcRYGate(q, 2.353966943303099, 6);
  sqcRZGate(q, -0.6813120554089651, 6);
  sqcRYGate(q, 2.8555468246461437, 7);
  sqcRZGate(q, 1.0832246109427333, 7);
  sqcRYGate(q, 1.7846784678671117, 8);
  sqcRZGate(q, -2.6121033406773466, 8);
  sqcRYGate(q, -1.618125654364704, 9);
  sqcRZGate(q, 0.3996973476788863, 9);
  sqcRYGate(q, -1.4908113004197325, 10);
  sqcRZGate(q, 0.024439527677652746, 10);
  sqcRYGate(q, 2.0339677104957206, 11);
  sqcRZGate(q, 0.9395918124961855, 11);
  sqcRYGate(q, 1.5488695731288615, 12);
  sqcRZGate(q, 0.11315074156482759, 12);
  sqcRYGate(q, 2.22978103674574, 13);
  sqcRZGate(q, -0.09262699014271991, 13);
  sqcRYGate(q, -1.5405869174970492, 14);
  sqcRZGate(q, 2.9298077942892844, 14);
  sqcRYGate(q, -1.2223799907598172, 15);
  sqcRZGate(q, -2.792917455525084, 15);
  sqcRYGate(q, -1.5526652959013483, 16);
  sqcRZGate(q, -1.2771340399545572, 16);
  sqcRYGate(q, 1.425213932780678, 17);
  sqcRZGate(q, 2.8536153048016595, 17);
  sqcRYGate(q, -0.5716292516957643, 18);
  sqcRZGate(q, 2.848631625528216, 18);
  sqcRYGate(q, 3.13118454921432, 19);
  sqcRZGate(q, -0.725177114521562, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.860171879065801, 0);
  sqcRZGate(q, -0.7435243002853591, 0);
  sqcRYGate(q, 1.7416485924066438, 1);
  sqcRZGate(q, -1.9671946928627597, 1);
  sqcRYGate(q, -1.5790175237384003, 2);
  sqcRZGate(q, 1.544774567168428, 2);
  sqcRYGate(q, -2.9651854555369037, 3);
  sqcRZGate(q, -2.282826811442277, 3);
  sqcRYGate(q, -2.074227798979405, 4);
  sqcRZGate(q, 2.7111683573392376, 4);
  sqcRYGate(q, 0.4886397787010503, 5);
  sqcRZGate(q, -1.2464958252515979, 5);
  sqcRYGate(q, 0.10688254516037698, 6);
  sqcRZGate(q, -0.7392180817392826, 6);
  sqcRYGate(q, -0.2899204544415245, 7);
  sqcRZGate(q, 2.356610142634837, 7);
  sqcRYGate(q, 0.07265313705775904, 8);
  sqcRZGate(q, 0.9367481382726086, 8);
  sqcRYGate(q, 2.701519344841538, 9);
  sqcRZGate(q, 0.6838829622624614, 9);
  sqcRYGate(q, -0.3236875310944564, 10);
  sqcRZGate(q, 2.9594387662783923, 10);
  sqcRYGate(q, -2.1678095218946076, 11);
  sqcRZGate(q, 3.097815248993647, 11);
  sqcRYGate(q, -1.3666524669961924, 12);
  sqcRZGate(q, 0.013182154475427036, 12);
  sqcRYGate(q, -0.3526985756059826, 13);
  sqcRZGate(q, 3.125302455354558, 13);
  sqcRYGate(q, -0.14042937234424685, 14);
  sqcRZGate(q, -1.2136582915886664, 14);
  sqcRYGate(q, -3.104306801845305, 15);
  sqcRZGate(q, 2.1647101290929074, 15);
  sqcRYGate(q, 0.40100337495915556, 16);
  sqcRZGate(q, -1.605773601614536, 16);
  sqcRYGate(q, -1.5869568196907577, 17);
  sqcRZGate(q, -1.7939990293806938, 17);
  sqcRYGate(q, 1.5388466777968919, 18);
  sqcRZGate(q, -3.132522087370547, 18);
  sqcRYGate(q, -2.4901932588452933, 19);
  sqcRZGate(q, -0.916011201092089, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.0920651710176017, 0);
  sqcRZGate(q, -1.502717980692088, 0);
  sqcRYGate(q, -1.5282778893242182, 1);
  sqcRZGate(q, 1.5904210041516595, 1);
  sqcRYGate(q, 1.5533094343952127, 2);
  sqcRZGate(q, -0.570412471601477, 2);
  sqcRYGate(q, 0.06105748269677136, 3);
  sqcRZGate(q, 1.0884142561089631, 3);
  sqcRYGate(q, -2.925930581232675, 4);
  sqcRZGate(q, 1.218634331828075, 4);
  sqcRYGate(q, 2.3408738232408144, 5);
  sqcRZGate(q, -3.0012433075493545, 5);
  sqcRYGate(q, -2.7333222497509055, 6);
  sqcRZGate(q, -2.8154299581440307, 6);
  sqcRYGate(q, -1.1015403172121356, 7);
  sqcRZGate(q, -1.2161255712408527, 7);
  sqcRYGate(q, -1.1584636223409095, 8);
  sqcRZGate(q, 0.3280509826965083, 8);
  sqcRYGate(q, -0.34386755684966624, 9);
  sqcRZGate(q, -1.5522500035674822, 9);
  sqcRYGate(q, 3.0215520402550773, 10);
  sqcRZGate(q, 2.2765427097179183, 10);
  sqcRYGate(q, 2.5249239768644594, 11);
  sqcRZGate(q, 2.993273927489809, 11);
  sqcRYGate(q, -3.0684524063468785, 12);
  sqcRZGate(q, -0.05375035163837704, 12);
  sqcRYGate(q, -2.5416908290999296, 13);
  sqcRZGate(q, -1.9482565891680077, 13);
  sqcRYGate(q, -1.3466031709220516, 14);
  sqcRZGate(q, -2.2765534352852295, 14);
  sqcRYGate(q, -0.16404063506366479, 15);
  sqcRZGate(q, -0.21145831641868315, 15);
  sqcRYGate(q, 0.034133142893953305, 16);
  sqcRZGate(q, 1.6258492610637916, 16);
  sqcRYGate(q, -0.03914990636363491, 17);
  sqcRZGate(q, -1.356325992222238, 17);
  sqcRYGate(q, -1.5708292824727197, 18);
  sqcRZGate(q, 2.813866615427549, 18);
  sqcRYGate(q, -1.8825511021145576, 19);
  sqcRZGate(q, -1.943814061846191, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5725191253294843, 0);
  sqcRZGate(q, -1.5540879029372832, 0);
  sqcRYGate(q, -0.3738498766746518, 1);
  sqcRZGate(q, 1.566945465876728, 1);
  sqcRYGate(q, 1.5725712921682065, 2);
  sqcRZGate(q, 0.010340757529344656, 2);
  sqcRYGate(q, 2.9887068050668146, 3);
  sqcRZGate(q, -1.4180889591408083, 3);
  sqcRYGate(q, 2.9117798109295303, 4);
  sqcRZGate(q, 0.17061201667725448, 4);
  sqcRYGate(q, 0.17672906177413547, 5);
  sqcRZGate(q, -0.08317647292671461, 5);
  sqcRYGate(q, -0.1463276320080471, 6);
  sqcRZGate(q, 3.01245771882569, 6);
  sqcRYGate(q, -0.1861040029834138, 7);
  sqcRZGate(q, -2.9255715981490784, 7);
  sqcRYGate(q, 3.1298276905582303, 8);
  sqcRZGate(q, 3.0786683111637045, 8);
  sqcRYGate(q, -0.20868476176518236, 9);
  sqcRZGate(q, 2.5059514260850335, 9);
  sqcRYGate(q, -2.8784060308555324, 10);
  sqcRZGate(q, 1.0780919136056448, 10);
  sqcRYGate(q, 2.2188890554112217, 11);
  sqcRZGate(q, 0.8186680413981184, 11);
  sqcRYGate(q, 1.6125273712860106, 12);
  sqcRZGate(q, 1.5705913670654326, 12);
  sqcRYGate(q, 2.951911677908612, 13);
  sqcRZGate(q, -0.36221532337496143, 13);
  sqcRYGate(q, -3.1082697670016137, 14);
  sqcRZGate(q, 2.087292987096423, 14);
  sqcRYGate(q, -2.96262432551515, 15);
  sqcRZGate(q, -3.0785205377097857, 15);
  sqcRYGate(q, 2.7316979235409984, 16);
  sqcRZGate(q, -2.808508171422014, 16);
  sqcRYGate(q, 2.973671184536616, 17);
  sqcRZGate(q, 1.563513010210813, 17);
  sqcRYGate(q, -0.01668441758886539, 18);
  sqcRZGate(q, 1.891198059276647, 18);
  sqcRYGate(q, -1.5788734629537196, 19);
  sqcRZGate(q, 1.5585016945940482, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5725698924540912, 0);
  sqcRZGate(q, -0.7471402781629002, 0);
  sqcRYGate(q, -1.5925721833522855, 1);
  sqcRZGate(q, 0.9116871496178272, 1);
  sqcRYGate(q, -1.5923375946804108, 2);
  sqcRZGate(q, 0.4905216018370897, 2);
  sqcRYGate(q, 1.596216268200986, 3);
  sqcRZGate(q, -0.9770436815930071, 3);
  sqcRYGate(q, -1.4997869348478348, 4);
  sqcRZGate(q, -0.9698448919812483, 4);
  sqcRYGate(q, -0.8179473391314769, 5);
  sqcRZGate(q, -0.9327262930277228, 5);
  sqcRYGate(q, 1.3110693267470912, 6);
  sqcRZGate(q, 2.550082970418483, 6);
  sqcRYGate(q, 1.9679392470520076, 7);
  sqcRZGate(q, -0.4933638778364378, 7);
  sqcRYGate(q, 0.20439140060678881, 8);
  sqcRZGate(q, 2.2452456309362763, 8);
  sqcRYGate(q, 1.7146099555826346, 9);
  sqcRZGate(q, -2.975448318005077, 9);
  sqcRYGate(q, 1.5096443077922137, 10);
  sqcRZGate(q, 0.49088938980264446, 10);
  sqcRYGate(q, -0.7228331652603064, 11);
  sqcRZGate(q, 1.3443139442363146, 11);
  sqcRYGate(q, 1.5419449016330464, 12);
  sqcRZGate(q, 1.4071909959514057, 12);
  sqcRYGate(q, 1.4594755787890135, 13);
  sqcRZGate(q, 1.360709521221403, 13);
  sqcRYGate(q, 0.1525240927467501, 14);
  sqcRZGate(q, -1.294335714185379, 14);
  sqcRYGate(q, 1.348907343195724, 15);
  sqcRZGate(q, 0.057730398826361544, 15);
  sqcRYGate(q, -1.5620700550591708, 16);
  sqcRZGate(q, -3.094663645647894, 16);
  sqcRYGate(q, 1.6040027470147846, 17);
  sqcRZGate(q, 0.04319242466258241, 17);
  sqcRYGate(q, 1.5780149294346155, 18);
  sqcRZGate(q, 1.575527650908173, 18);
  sqcRYGate(q, 1.5706075759905254, 19);
  sqcRZGate(q, 0.8515389740135824, 19);

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
