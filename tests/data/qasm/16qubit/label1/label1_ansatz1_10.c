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

  sqcRYGate(q, 0.05371483304706488, 0);
  sqcRZGate(q, -1.4545788320564395, 0);
  sqcRYGate(q, -0.5068645613552334, 1);
  sqcRZGate(q, -0.1138562478716061, 1);
  sqcRYGate(q, 0.04679656081711592, 2);
  sqcRZGate(q, 0.4647134015594947, 2);
  sqcRYGate(q, -1.4448678652395364, 3);
  sqcRZGate(q, -2.9614594055758405, 3);
  sqcRYGate(q, 3.009726089633275, 4);
  sqcRZGate(q, 1.362978005345668, 4);
  sqcRYGate(q, 2.0106262714143233, 5);
  sqcRZGate(q, 0.8362178959531543, 5);
  sqcRYGate(q, 1.2263758303177035, 6);
  sqcRZGate(q, 0.0039871964826350146, 6);
  sqcRYGate(q, 1.8771113305755778, 7);
  sqcRZGate(q, 0.01803110554944229, 7);
  sqcRYGate(q, -3.1385241043241967, 8);
  sqcRZGate(q, 1.6352081905902256, 8);
  sqcRYGate(q, -1.6302141509828072, 9);
  sqcRZGate(q, 1.748717860594848, 9);
  sqcRYGate(q, 1.6958665656390635, 10);
  sqcRZGate(q, -2.6942376355111524, 10);
  sqcRYGate(q, 0.34002472032173964, 11);
  sqcRZGate(q, 3.014315579449646, 11);
  sqcRYGate(q, -0.15740620136321512, 12);
  sqcRZGate(q, 1.4838044998687359, 12);
  sqcRYGate(q, 2.293478587619116, 13);
  sqcRZGate(q, -2.7367677833026156, 13);
  sqcRYGate(q, 3.11844336905373, 14);
  sqcRZGate(q, -3.053354245605921, 14);
  sqcRYGate(q, 0.9431609623642379, 15);
  sqcRZGate(q, 1.0579204043411583, 15);
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
  sqcRYGate(q, 1.0148380829179786, 0);
  sqcRZGate(q, 1.4875830492757696, 0);
  sqcRYGate(q, -2.751312124197035, 1);
  sqcRZGate(q, -2.586168809139183, 1);
  sqcRYGate(q, -1.4017163899528087, 2);
  sqcRZGate(q, -1.239406919814543, 2);
  sqcRYGate(q, -1.6716070287195066, 3);
  sqcRZGate(q, -2.049327067096475, 3);
  sqcRYGate(q, 0.30945654986019355, 4);
  sqcRZGate(q, -0.6658153350967373, 4);
  sqcRYGate(q, -1.6284228034211115, 5);
  sqcRZGate(q, 1.888047802437166, 5);
  sqcRYGate(q, 0.027363952984850684, 6);
  sqcRZGate(q, -0.737427136655351, 6);
  sqcRYGate(q, -2.5711479557996335, 7);
  sqcRZGate(q, 1.4990965086000447, 7);
  sqcRYGate(q, 1.5976932010768676, 8);
  sqcRZGate(q, 1.5903277412540928, 8);
  sqcRYGate(q, -2.1133978703685905, 9);
  sqcRZGate(q, -0.7018161723415876, 9);
  sqcRYGate(q, -0.2698348209892725, 10);
  sqcRZGate(q, 0.5776861031058539, 10);
  sqcRYGate(q, 1.9464024942752638, 11);
  sqcRZGate(q, 0.5858985475998865, 11);
  sqcRYGate(q, 1.56794392541883, 12);
  sqcRZGate(q, -2.696772596616182, 12);
  sqcRYGate(q, -2.749371508149662, 13);
  sqcRZGate(q, -2.176247745613419, 13);
  sqcRYGate(q, 0.018576156301173073, 14);
  sqcRZGate(q, 1.4070571968220973, 14);
  sqcRYGate(q, -1.2477360449090282, 15);
  sqcRZGate(q, -2.7393939709769284, 15);
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
  sqcRYGate(q, -2.820970193222025, 0);
  sqcRZGate(q, -1.0811828301642246, 0);
  sqcRYGate(q, -0.014033734177091084, 1);
  sqcRZGate(q, -0.4938358854123792, 1);
  sqcRYGate(q, -1.7834325979172156, 2);
  sqcRZGate(q, -3.1000898131096264, 2);
  sqcRYGate(q, -0.05652654651746489, 3);
  sqcRZGate(q, -1.8719648469767844, 3);
  sqcRYGate(q, -1.8436298145126233, 4);
  sqcRZGate(q, -0.8440496101452366, 4);
  sqcRYGate(q, -0.8223702089493506, 5);
  sqcRZGate(q, -0.49436725978651563, 5);
  sqcRYGate(q, -0.05237632598962127, 6);
  sqcRZGate(q, -1.7803059644493784, 6);
  sqcRYGate(q, 0.8430661308607276, 7);
  sqcRZGate(q, -0.23839715200213, 7);
  sqcRYGate(q, -0.5954891131041888, 8);
  sqcRZGate(q, -2.866941960494072, 8);
  sqcRYGate(q, -1.5868864440115535, 9);
  sqcRZGate(q, -0.018722811533949234, 9);
  sqcRYGate(q, -0.6417523732419975, 10);
  sqcRZGate(q, 1.1995475548254504, 10);
  sqcRYGate(q, -3.0779957869619454, 11);
  sqcRZGate(q, 0.784109699016522, 11);
  sqcRYGate(q, -1.2090863488506907, 12);
  sqcRZGate(q, 2.9664957678893873, 12);
  sqcRYGate(q, 1.5336034917719603, 13);
  sqcRZGate(q, 0.8866903859331234, 13);
  sqcRYGate(q, -3.1142468196743125, 14);
  sqcRZGate(q, -0.8163401050358238, 14);
  sqcRYGate(q, -2.5080194835818856, 15);
  sqcRZGate(q, 1.7680578374851355, 15);
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
  sqcRYGate(q, 1.3235691889587002, 0);
  sqcRZGate(q, 3.061958880718589, 0);
  sqcRYGate(q, 0.7614523080188018, 1);
  sqcRZGate(q, -1.5154881720044493, 1);
  sqcRYGate(q, -2.9379358513361193, 2);
  sqcRZGate(q, -1.5402581475923949, 2);
  sqcRYGate(q, -1.3393192028061398, 3);
  sqcRZGate(q, 0.3170298457286859, 3);
  sqcRYGate(q, -0.7996960054945157, 4);
  sqcRZGate(q, -0.2285690689858442, 4);
  sqcRYGate(q, -2.1186727934501093, 5);
  sqcRZGate(q, 0.1833399408394532, 5);
  sqcRYGate(q, 0.011571532626252434, 6);
  sqcRZGate(q, 1.3944400787227582, 6);
  sqcRYGate(q, 1.9342164750714494, 7);
  sqcRZGate(q, -0.32415870291366966, 7);
  sqcRYGate(q, 0.06711770134428985, 8);
  sqcRZGate(q, -0.2465509301451041, 8);
  sqcRYGate(q, -1.7989058514924192, 9);
  sqcRZGate(q, 0.25982198444057136, 9);
  sqcRYGate(q, 1.5882512016547246, 10);
  sqcRZGate(q, 0.006285500053156312, 10);
  sqcRYGate(q, 1.5660076037008648, 11);
  sqcRZGate(q, 1.5521867201056492, 11);
  sqcRYGate(q, 2.5582701940507957, 12);
  sqcRZGate(q, -1.537609341163329, 12);
  sqcRYGate(q, -2.439120755388984, 13);
  sqcRZGate(q, 1.5607787801544497, 13);
  sqcRYGate(q, 0.07687049261564471, 14);
  sqcRZGate(q, 0.8043040538265318, 14);
  sqcRYGate(q, -2.9189035203135765, 15);
  sqcRZGate(q, 1.1006068925409154, 15);
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
  sqcRYGate(q, 0.03196203964581468, 0);
  sqcRZGate(q, 0.7675124410373746, 0);
  sqcRYGate(q, -3.1051512810609245, 1);
  sqcRZGate(q, 0.01217215354574108, 1);
  sqcRYGate(q, -2.5437178272493255, 2);
  sqcRZGate(q, -2.9754900396272497, 2);
  sqcRYGate(q, -3.050478807066227, 3);
  sqcRZGate(q, -0.3630001121410296, 3);
  sqcRYGate(q, 0.20644648176825697, 4);
  sqcRZGate(q, 1.3809077375425245, 4);
  sqcRYGate(q, -0.8921452655978586, 5);
  sqcRZGate(q, -2.094842805901271, 5);
  sqcRYGate(q, 3.023048050852981, 6);
  sqcRZGate(q, -3.0206754874795587, 6);
  sqcRYGate(q, 0.7589612812206348, 7);
  sqcRZGate(q, 2.348388971859034, 7);
  sqcRYGate(q, -0.32363431686783406, 8);
  sqcRZGate(q, 0.28295420647165503, 8);
  sqcRYGate(q, 2.9992927345438356, 9);
  sqcRZGate(q, -2.87990546087296, 9);
  sqcRYGate(q, -0.4497166351949934, 10);
  sqcRZGate(q, 1.1845010677872627, 10);
  sqcRYGate(q, 3.1344227664996125, 11);
  sqcRZGate(q, -2.58734747963793, 11);
  sqcRYGate(q, -1.5366606078613516, 12);
  sqcRZGate(q, 0.23733370945829163, 12);
  sqcRYGate(q, 2.5834733050347074, 13);
  sqcRZGate(q, 3.022110266628539, 13);
  sqcRYGate(q, -2.9544432093132924, 14);
  sqcRZGate(q, -0.6433204174195284, 14);
  sqcRYGate(q, -1.083938731655986, 15);
  sqcRZGate(q, 2.1691367731745563, 15);
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
  sqcRYGate(q, -0.39286510375000744, 0);
  sqcRZGate(q, 1.1173980566665036, 0);
  sqcRYGate(q, -2.1155286260812725, 1);
  sqcRZGate(q, 1.5002629870276758, 1);
  sqcRYGate(q, 1.4896000290663343, 2);
  sqcRZGate(q, 3.0060619822670884, 2);
  sqcRYGate(q, -0.3174271506160119, 3);
  sqcRZGate(q, -2.0055625513097386, 3);
  sqcRYGate(q, -2.4116506264526314, 4);
  sqcRZGate(q, -2.1105615575504695, 4);
  sqcRYGate(q, -2.671625943022247, 5);
  sqcRZGate(q, 0.19286317374321804, 5);
  sqcRYGate(q, 1.69472891799251, 6);
  sqcRZGate(q, -3.049334522543869, 6);
  sqcRYGate(q, -1.3237760565783054, 7);
  sqcRZGate(q, 3.02824716818624, 7);
  sqcRYGate(q, -2.8783085641108106, 8);
  sqcRZGate(q, -2.8491034807640387, 8);
  sqcRYGate(q, 1.5086140713218787, 9);
  sqcRZGate(q, -2.8766379222816014, 9);
  sqcRYGate(q, -0.03879104076615647, 10);
  sqcRZGate(q, 0.026243878530889678, 10);
  sqcRYGate(q, 1.7706886821966643, 11);
  sqcRZGate(q, 2.7570800179809574, 11);
  sqcRYGate(q, 2.9853587246809297, 12);
  sqcRZGate(q, -0.986735879004947, 12);
  sqcRYGate(q, -0.6263868247546975, 13);
  sqcRZGate(q, 0.9777978093818396, 13);
  sqcRYGate(q, -1.8336393030132738, 14);
  sqcRZGate(q, -2.4135403071569255, 14);
  sqcRYGate(q, -0.14262292217287226, 15);
  sqcRZGate(q, 0.42623556161052467, 15);
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
  sqcRYGate(q, -1.3915357621392124, 0);
  sqcRZGate(q, 1.4914903574083862, 0);
  sqcRYGate(q, -1.2357752184050055, 1);
  sqcRZGate(q, -0.614260322706764, 1);
  sqcRYGate(q, -2.728027926360941, 2);
  sqcRZGate(q, -0.9420023342609323, 2);
  sqcRYGate(q, -0.7461498400049531, 3);
  sqcRZGate(q, -2.001785602911528, 3);
  sqcRYGate(q, 2.904119467736784, 4);
  sqcRZGate(q, -2.572246709843563, 4);
  sqcRYGate(q, -1.9444850935295315, 5);
  sqcRZGate(q, -0.7627567319639086, 5);
  sqcRYGate(q, -0.007021459201053126, 6);
  sqcRZGate(q, -0.09284038101404146, 6);
  sqcRYGate(q, -0.00113628745103167, 7);
  sqcRZGate(q, -1.9734724396471124, 7);
  sqcRYGate(q, 1.4652243567883192, 8);
  sqcRZGate(q, -0.0046158193226162325, 8);
  sqcRYGate(q, -0.01074645856013897, 9);
  sqcRZGate(q, 1.3427410966667106, 9);
  sqcRYGate(q, 1.3300540229084017, 10);
  sqcRZGate(q, -2.733806865260359, 10);
  sqcRYGate(q, 1.5509437574361822, 11);
  sqcRZGate(q, -0.8645574705760104, 11);
  sqcRYGate(q, 1.9528725694325786, 12);
  sqcRZGate(q, 0.374479357239927, 12);
  sqcRYGate(q, 0.08713048906121303, 13);
  sqcRZGate(q, 1.5438254543837386, 13);
  sqcRYGate(q, 1.3198189310699329, 14);
  sqcRZGate(q, 0.699137142941946, 14);
  sqcRYGate(q, 2.219341626576556, 15);
  sqcRZGate(q, 3.1045059897004, 15);
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
  sqcRYGate(q, 1.5334413845921384, 0);
  sqcRZGate(q, 2.7027841302514113, 0);
  sqcRYGate(q, -0.11401388604942743, 1);
  sqcRZGate(q, -1.3803478668057805, 1);
  sqcRYGate(q, 1.803655987628394, 2);
  sqcRZGate(q, -2.37157915421077, 2);
  sqcRYGate(q, -2.0460864894819926, 3);
  sqcRZGate(q, -1.5293582953020994, 3);
  sqcRYGate(q, 0.008481501568133433, 4);
  sqcRZGate(q, -1.6388622002708324, 4);
  sqcRYGate(q, 0.2073304852654072, 5);
  sqcRZGate(q, 2.212929223910235, 5);
  sqcRYGate(q, -0.2684015615733033, 6);
  sqcRZGate(q, 0.9586568005680985, 6);
  sqcRYGate(q, 2.8956664047481153, 7);
  sqcRZGate(q, 2.349899744298676, 7);
  sqcRYGate(q, 1.6123557722201367, 8);
  sqcRZGate(q, 0.078278946684412, 8);
  sqcRYGate(q, 0.03434549314386981, 9);
  sqcRZGate(q, -1.5622340813975173, 9);
  sqcRYGate(q, -0.019715144010886476, 10);
  sqcRZGate(q, 2.945532542826502, 10);
  sqcRYGate(q, 3.121216038982397, 11);
  sqcRZGate(q, 2.268658569011242, 11);
  sqcRYGate(q, 1.5722225593270256, 12);
  sqcRZGate(q, 1.8665271720017367, 12);
  sqcRYGate(q, 1.5172353838875592, 13);
  sqcRZGate(q, -0.3839575382870244, 13);
  sqcRYGate(q, -2.2979713806395567, 14);
  sqcRZGate(q, 1.4136711564921312, 14);
  sqcRYGate(q, 0.5029628621872999, 15);
  sqcRZGate(q, -2.8901818526916507, 15);
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
  sqcRYGate(q, -3.1323853433940028, 0);
  sqcRZGate(q, -0.3443179904645977, 0);
  sqcRYGate(q, -0.23760913514962034, 1);
  sqcRZGate(q, 0.6166786364931548, 1);
  sqcRYGate(q, -2.29307119580245, 2);
  sqcRZGate(q, -2.1128836714800863, 2);
  sqcRYGate(q, 0.0424569705444382, 3);
  sqcRZGate(q, -1.2334802840393064, 3);
  sqcRYGate(q, -0.0023236715552512745, 4);
  sqcRZGate(q, 1.4919941943328632, 4);
  sqcRYGate(q, 1.3813726980782355, 5);
  sqcRZGate(q, 0.37730329378173494, 5);
  sqcRYGate(q, 3.0582203389906844, 6);
  sqcRZGate(q, -2.0075128366552746, 6);
  sqcRYGate(q, -3.1370502273582503, 7);
  sqcRZGate(q, 0.5735335288403314, 7);
  sqcRYGate(q, 1.5182595682348925, 8);
  sqcRZGate(q, 0.1106578991225362, 8);
  sqcRYGate(q, 2.196345336860552, 9);
  sqcRZGate(q, -1.5977946826162093, 9);
  sqcRYGate(q, 1.2552291858380646, 10);
  sqcRZGate(q, -2.8678533456617434, 10);
  sqcRYGate(q, -2.8978820527967004, 11);
  sqcRZGate(q, 1.5600176500969778, 11);
  sqcRYGate(q, -1.6017331428375625, 12);
  sqcRZGate(q, 2.8040417772954247, 12);
  sqcRYGate(q, -1.477324325942484, 13);
  sqcRZGate(q, -1.8056131051516964, 13);
  sqcRYGate(q, -1.7307910864803944, 14);
  sqcRZGate(q, -2.7393709977152962, 14);
  sqcRYGate(q, -1.9147135850822945, 15);
  sqcRZGate(q, 2.1932050954645916, 15);
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
  sqcRYGate(q, -0.4875091860571539, 0);
  sqcRZGate(q, -1.7254197592903449, 0);
  sqcRYGate(q, -2.0956718620961476, 1);
  sqcRZGate(q, -0.10184706437635406, 1);
  sqcRYGate(q, 0.5229657572058595, 2);
  sqcRZGate(q, -2.042686397095533, 2);
  sqcRYGate(q, -1.7154226998385675, 3);
  sqcRZGate(q, -0.5335393087371392, 3);
  sqcRYGate(q, -1.5710792689224553, 4);
  sqcRZGate(q, -1.6029986172334345, 4);
  sqcRYGate(q, -1.5831517271766218, 5);
  sqcRZGate(q, 1.2801089050220913, 5);
  sqcRYGate(q, 2.328163321188191, 6);
  sqcRZGate(q, 1.7836746416372795, 6);
  sqcRYGate(q, 2.165959909054318, 7);
  sqcRZGate(q, -1.4550832831663498, 7);
  sqcRYGate(q, -0.830859298004945, 8);
  sqcRZGate(q, 1.9912413942710518, 8);
  sqcRYGate(q, -1.3796218954347512, 9);
  sqcRZGate(q, 2.9335418507306525, 9);
  sqcRYGate(q, -1.5206508047622158, 10);
  sqcRZGate(q, 0.017730228400594537, 10);
  sqcRYGate(q, -0.10309127667300778, 11);
  sqcRZGate(q, 1.0578955196494282, 11);
  sqcRYGate(q, -3.13023809882391, 12);
  sqcRZGate(q, 2.8153547337291087, 12);
  sqcRYGate(q, -0.15248890205307664, 13);
  sqcRZGate(q, 1.7935482616968574, 13);
  sqcRYGate(q, -2.285943415834405, 14);
  sqcRZGate(q, 0.00044442390391985503, 14);
  sqcRYGate(q, 2.2032731416601834, 15);
  sqcRZGate(q, 1.247666780148794, 15);
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
  sqcRYGate(q, 2.7576147976934378, 0);
  sqcRZGate(q, 1.4785959615229005, 0);
  sqcRYGate(q, 0.4602671093030999, 1);
  sqcRZGate(q, 2.6294979010559034, 1);
  sqcRYGate(q, -0.011285519458625437, 2);
  sqcRZGate(q, -1.6620337089256803, 2);
  sqcRYGate(q, -1.571711386415833, 3);
  sqcRZGate(q, 3.136476516055898, 3);
  sqcRYGate(q, -0.04551732163485946, 4);
  sqcRZGate(q, 1.869425803602424, 4);
  sqcRYGate(q, 3.139869853346596, 5);
  sqcRZGate(q, -0.9041349223773194, 5);
  sqcRYGate(q, 0.0015122994483386793, 6);
  sqcRZGate(q, 1.5063488434754821, 6);
  sqcRYGate(q, -0.08323481217167927, 7);
  sqcRZGate(q, -1.5663894356068508, 7);
  sqcRYGate(q, -3.0799832097612976, 8);
  sqcRZGate(q, -1.19486732801369, 8);
  sqcRYGate(q, 3.0126037822127723, 9);
  sqcRZGate(q, 1.046626343496511, 9);
  sqcRYGate(q, 3.1349448689300057, 10);
  sqcRZGate(q, -1.319548501667847, 10);
  sqcRYGate(q, -0.010336874944220751, 11);
  sqcRZGate(q, 2.017456045788001, 11);
  sqcRYGate(q, -1.5174747520508511, 12);
  sqcRZGate(q, 1.859864347745905, 12);
  sqcRYGate(q, 3.006181214768028, 13);
  sqcRZGate(q, -1.1435032238449034, 13);
  sqcRYGate(q, 1.868105348955995, 14);
  sqcRZGate(q, 3.1402393916395415, 14);
  sqcRYGate(q, -1.2216376658712198, 15);
  sqcRZGate(q, -2.968736143107412, 15);
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
  sqcRYGate(q, -0.3219259595393381, 0);
  sqcRZGate(q, 2.161871102961166, 0);
  sqcRYGate(q, -1.1472723946178318, 1);
  sqcRZGate(q, -1.1946277825167608, 1);
  sqcRYGate(q, 1.5691611610852094, 2);
  sqcRZGate(q, -3.117180495138899, 2);
  sqcRYGate(q, -2.582126356444709, 3);
  sqcRZGate(q, 3.136403350145831, 3);
  sqcRYGate(q, -0.03131169290266887, 4);
  sqcRZGate(q, 2.928166574632771, 4);
  sqcRYGate(q, -1.5465731491728594, 5);
  sqcRZGate(q, -1.6822174101608616, 5);
  sqcRYGate(q, 1.7561766834546542, 6);
  sqcRZGate(q, -1.5648953389783495, 6);
  sqcRYGate(q, 1.665666213736964, 7);
  sqcRZGate(q, 2.1197408187899365, 7);
  sqcRYGate(q, -2.0408033955988154, 8);
  sqcRZGate(q, 1.773637089942631, 8);
  sqcRYGate(q, -1.5483675188041044, 9);
  sqcRZGate(q, -0.040205085326792296, 9);
  sqcRYGate(q, -3.0679590237016843, 10);
  sqcRZGate(q, -1.450248449505672, 10);
  sqcRYGate(q, -1.5152491053183739, 11);
  sqcRZGate(q, -2.5207903133057203, 11);
  sqcRYGate(q, 0.013038068454271468, 12);
  sqcRZGate(q, 2.828163470336142, 12);
  sqcRYGate(q, -3.137411969711923, 13);
  sqcRZGate(q, 1.996100746279466, 13);
  sqcRYGate(q, 1.2012372353660972, 14);
  sqcRZGate(q, -1.0228413501908131, 14);
  sqcRYGate(q, 0.5843528239264179, 15);
  sqcRZGate(q, -1.2699933929637037, 15);
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
  sqcRYGate(q, -1.720390284723015, 0);
  sqcRZGate(q, -1.7047735233471295, 0);
  sqcRYGate(q, 1.5679609083437294, 1);
  sqcRZGate(q, -1.5701431832664616, 1);
  sqcRYGate(q, -0.17447435164674738, 2);
  sqcRZGate(q, 1.546446690157664, 2);
  sqcRYGate(q, 0.7345561205337732, 3);
  sqcRZGate(q, -1.5685228402287974, 3);
  sqcRYGate(q, 3.133456316003396, 4);
  sqcRZGate(q, 1.6177750268989737, 4);
  sqcRYGate(q, -0.2736488991935868, 5);
  sqcRZGate(q, -1.5622817847726447, 5);
  sqcRYGate(q, -3.0442631738939667, 6);
  sqcRZGate(q, 3.0015493165665585, 6);
  sqcRYGate(q, -0.015068984589468927, 7);
  sqcRZGate(q, -0.4935322067263206, 7);
  sqcRYGate(q, -0.16682297842412147, 8);
  sqcRZGate(q, 2.8825565651641867, 8);
  sqcRYGate(q, 0.10720728036784462, 9);
  sqcRZGate(q, -0.14766725450953455, 9);
  sqcRYGate(q, -3.020293870659853, 10);
  sqcRZGate(q, -2.258821925414001, 10);
  sqcRYGate(q, 0.16944646964850688, 11);
  sqcRZGate(q, -2.9659063408342408, 11);
  sqcRYGate(q, 0.03407565608513074, 12);
  sqcRZGate(q, 1.3176177369296005, 12);
  sqcRYGate(q, 0.858180206179686, 13);
  sqcRZGate(q, 1.5684136141544123, 13);
  sqcRYGate(q, -3.140503333171405, 14);
  sqcRZGate(q, -2.5956804807768754, 14);
  sqcRYGate(q, -1.9762715788581895, 15);
  sqcRZGate(q, -2.2642344518965904, 15);
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
  sqcRYGate(q, 3.140139092941474, 0);
  sqcRZGate(q, -3.032120320071194, 0);
  sqcRYGate(q, 1.567069966726625, 1);
  sqcRZGate(q, -2.8067459493301614, 1);
  sqcRYGate(q, 1.5693870877978924, 2);
  sqcRZGate(q, -1.0805718194039937, 2);
  sqcRYGate(q, -1.568440270296176, 3);
  sqcRZGate(q, 2.1073956094001565, 3);
  sqcRYGate(q, -1.5655363889851197, 4);
  sqcRZGate(q, 2.18646723771443, 4);
  sqcRYGate(q, 1.5700610458275799, 5);
  sqcRZGate(q, 1.3231908564241026, 5);
  sqcRYGate(q, -1.5687272474634657, 6);
  sqcRZGate(q, 1.423015091788872, 6);
  sqcRYGate(q, -0.0635991953908247, 7);
  sqcRZGate(q, 2.406711080325061, 7);
  sqcRYGate(q, 1.6297185668701288, 8);
  sqcRZGate(q, -0.0952285507610717, 8);
  sqcRYGate(q, -1.5643555461518055, 9);
  sqcRZGate(q, 0.045009908017790146, 9);
  sqcRYGate(q, 3.1324768221200436, 10);
  sqcRZGate(q, 2.230561079029213, 10);
  sqcRYGate(q, -3.0486516319214814, 11);
  sqcRZGate(q, -2.1805071627627672, 11);
  sqcRYGate(q, -1.5671803007071454, 12);
  sqcRZGate(q, -2.751533176744064, 12);
  sqcRYGate(q, 1.5721073041466294, 13);
  sqcRZGate(q, 3.098586247443151, 13);
  sqcRYGate(q, 1.5634529296501185, 14);
  sqcRZGate(q, 1.56095952906601, 14);
  sqcRYGate(q, -1.5039240981342519, 15);
  sqcRZGate(q, 0.3132389016502888, 15);

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
