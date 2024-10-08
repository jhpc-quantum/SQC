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

  sqcRYGate(q, -2.292001128974138, 0);
  sqcRYGate(q, 2.3682644581200147, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5122870305718434, 0);
  sqcRYGate(q, -0.09725208100772507, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.655786479095508, 0);
  sqcRYGate(q, -2.350016358254797, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3704527411324312, 0);
  sqcRYGate(q, 2.5729513457436193, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2568132182603824, 0);
  sqcRYGate(q, -1.417505061662153, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.480884260924137, 0);
  sqcRYGate(q, 1.0202537255392976, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1333989528643515, 0);
  sqcRYGate(q, -0.7693352046965058, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 0.6285994146041187, 0);
  sqcRYGate(q, 2.297043214762888, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -2.312955050394065, 0);
  sqcRYGate(q, -1.9390256783986486, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 1.2491457161754962, 0);
  sqcRYGate(q, 1.7974617802997592, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 2.0245474846598057, 0);
  sqcRYGate(q, 2.8392576817442263, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -1.9565875197230314, 0);
  sqcRYGate(q, 0.2524936038285164, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 2.7143922076006173, 0);
  sqcRYGate(q, 2.4622008990044653, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -2.200645227077327, 0);
  sqcRYGate(q, 3.0609050230233885, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -2.337612384836003, 1);
  sqcRYGate(q, -0.9270272206767871, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0094069492082154, 1);
  sqcRYGate(q, 2.4430588800308453, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.386777206496831, 1);
  sqcRYGate(q, 2.8224468199383628, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.415811950406667, 1);
  sqcRYGate(q, -2.250483863921385, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5806480399140388, 1);
  sqcRYGate(q, -0.20391203223138543, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 0.9528855765595897, 1);
  sqcRYGate(q, 2.9186011497795175, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -0.05817367033151477, 1);
  sqcRYGate(q, 1.5952842562950658, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -1.924940217451577, 1);
  sqcRYGate(q, 2.8054487996607973, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 2.5248489579620377, 1);
  sqcRYGate(q, -2.218236935764175, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 2.0573883097000465, 1);
  sqcRYGate(q, -2.833594096260108, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 2.765444543554071, 1);
  sqcRYGate(q, 1.9244274092545242, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 1.3758417297199879, 1);
  sqcRYGate(q, 0.3338288527808162, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -0.4392580615509285, 2);
  sqcRYGate(q, 2.5487492882608183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8219970177292729, 2);
  sqcRYGate(q, 1.073970930087754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.136473249845995, 2);
  sqcRYGate(q, 2.5919157428817687, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.24211423484927774, 2);
  sqcRYGate(q, -1.5531886079466455, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.03459383301269803, 2);
  sqcRYGate(q, -0.4052235043404966, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.81360516065725, 2);
  sqcRYGate(q, -1.6129318621897581, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.12602505900600836, 2);
  sqcRYGate(q, -0.7542110618503467, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -0.7999020444444521, 2);
  sqcRYGate(q, 0.0694084986172307, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 1.1611154061178859, 2);
  sqcRYGate(q, 2.8645589188086564, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -0.023466516972283177, 2);
  sqcRYGate(q, -0.5495326825107119, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -0.1450787606379601, 3);
  sqcRYGate(q, -0.7897682322514842, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4970118107757766, 3);
  sqcRYGate(q, -0.9442540468918081, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4975691089627534, 3);
  sqcRYGate(q, 0.888295084779025, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.7429309362392393, 3);
  sqcRYGate(q, -0.9572634060386754, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.8057439565503954, 3);
  sqcRYGate(q, -2.9573789439273876, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 2.4006675885698385, 3);
  sqcRYGate(q, -2.5865923704906053, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -0.8944489649131075, 3);
  sqcRYGate(q, -1.0828437103956192, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -1.1032030887802786, 3);
  sqcRYGate(q, -2.2649616997341857, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 1.2342458948733663, 4);
  sqcRYGate(q, 1.2914318813746608, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.573481086636495, 4);
  sqcRYGate(q, 1.2372222376386857, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8225197895085126, 4);
  sqcRYGate(q, -3.094357339394629, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.8867929225496302, 4);
  sqcRYGate(q, 0.11024486103113153, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.0475045567409413, 4);
  sqcRYGate(q, 0.5391981384944593, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.8920539613396756, 4);
  sqcRYGate(q, -0.580539612841407, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.6597235832059757, 5);
  sqcRYGate(q, -2.2224178082363286, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8736926338070052, 5);
  sqcRYGate(q, -1.2770711933080598, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8507312371604971, 5);
  sqcRYGate(q, 1.7243177105462866, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.503194052551169, 5);
  sqcRYGate(q, -2.4728355678838563, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.1620547245544612, 6);
  sqcRYGate(q, -0.9000975736025599, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2154777189283559, 6);
  sqcRYGate(q, 1.4080242507464789, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0009897007645563, 0);
  sqcRYGate(q, 0.8995230385741844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23647030513971462, 0);
  sqcRYGate(q, -1.4925480799980848, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0294373180922611, 0);
  sqcRYGate(q, -3.1278836136572967, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.175450250594391, 0);
  sqcRYGate(q, -1.9266257547542893, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5010149984624483, 0);
  sqcRYGate(q, -0.26247158989265795, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2396269318426008, 0);
  sqcRYGate(q, 1.5252223827257407, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6821189949140278, 0);
  sqcRYGate(q, 2.6991420158051227, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 0.4264904162140902, 0);
  sqcRYGate(q, -2.367453714541961, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 2.3691290436593992, 0);
  sqcRYGate(q, 2.2662501181360772, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -2.7573062843090184, 0);
  sqcRYGate(q, -2.609545417489585, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -1.6650080187671799, 0);
  sqcRYGate(q, -0.5870094846120701, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -0.9031308628774681, 0);
  sqcRYGate(q, 1.924443734357013, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 1.6243131715357544, 0);
  sqcRYGate(q, 1.9976993948183983, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -2.6724441132356196, 0);
  sqcRYGate(q, -2.4378515916502743, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 0.5716291366658072, 1);
  sqcRYGate(q, -2.1659563249542577, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9898958588069489, 1);
  sqcRYGate(q, -1.994554444096857, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.30766685449413256, 1);
  sqcRYGate(q, 1.1829707165793226, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1254907920105728, 1);
  sqcRYGate(q, 2.5223961514951245, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0823042753684313, 1);
  sqcRYGate(q, 0.15143234197457822, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 0.8745156920650761, 1);
  sqcRYGate(q, 0.8060747681360327, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -1.3744535635205344, 1);
  sqcRYGate(q, -3.0115858135425237, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 2.297796467120167, 1);
  sqcRYGate(q, 3.103198441360631, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 1.0180678083313517, 1);
  sqcRYGate(q, -2.4828750023740427, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -1.3073458662007988, 1);
  sqcRYGate(q, -0.3403507724125204, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -0.04850907682100661, 1);
  sqcRYGate(q, -0.08760239861573993, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 0.34107354730724315, 1);
  sqcRYGate(q, -1.6404389738007659, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -3.112846862951818, 2);
  sqcRYGate(q, 2.8119173908198203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3927137550950452, 2);
  sqcRYGate(q, 2.8361583636834498, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3645255146859723, 2);
  sqcRYGate(q, -1.0775121324376444, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9258905037628522, 2);
  sqcRYGate(q, -1.6391147526491412, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.801789248087178, 2);
  sqcRYGate(q, 1.8565891262542067, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.863019592735686, 2);
  sqcRYGate(q, -0.800566389878997, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.3080908206542248, 2);
  sqcRYGate(q, 1.1849506541334476, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -2.240596345879326, 2);
  sqcRYGate(q, 0.8424738267231121, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 1.934014443657314, 2);
  sqcRYGate(q, -2.0970545983913818, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -2.284525899828554, 2);
  sqcRYGate(q, 2.993461165261493, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 2.4028268066334455, 3);
  sqcRYGate(q, -2.637057833100101, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9487068806940206, 3);
  sqcRYGate(q, 1.8382717825281667, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.013014205678746863, 3);
  sqcRYGate(q, 1.6143543226421424, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.930000135560241, 3);
  sqcRYGate(q, -0.5754670447380564, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.1546779025132805, 3);
  sqcRYGate(q, -2.9551190965554457, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -0.1472262018732064, 3);
  sqcRYGate(q, -0.16655183977843002, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 0.018923602532642466, 3);
  sqcRYGate(q, -2.2563350355189384, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -1.512393199750239, 3);
  sqcRYGate(q, 1.5196217834202672, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -2.08500804384441, 4);
  sqcRYGate(q, 0.46408001459190906, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4253484493566044, 4);
  sqcRYGate(q, 0.8094325893393064, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.956030121042474, 4);
  sqcRYGate(q, -2.357461072581541, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.1354226839344683, 4);
  sqcRYGate(q, 2.1392877432481026, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.2507457286386126, 4);
  sqcRYGate(q, 0.2580990018827336, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.2442223944114104, 4);
  sqcRYGate(q, -2.160649294068397, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.8649989146390977, 5);
  sqcRYGate(q, -1.6876414259035313, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4396162355977564, 5);
  sqcRYGate(q, -2.9100038736102665, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9079410998593338, 5);
  sqcRYGate(q, 1.5544867625172045, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.30575255668498574, 5);
  sqcRYGate(q, -1.006767335032996, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.7593141243582141, 6);
  sqcRYGate(q, 1.2967553827166571, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2752539893619423, 6);
  sqcRYGate(q, -2.374271905528031, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.073203585494512, 0);
  sqcRYGate(q, 2.0175106374156506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.668877441717123, 0);
  sqcRYGate(q, 1.025348214838159, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.581836849326213, 0);
  sqcRYGate(q, -2.7750349628950355, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6101479462339787, 0);
  sqcRYGate(q, 2.58923812764394, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.00712174947895594, 0);
  sqcRYGate(q, -2.256136986756542, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7424268205951474, 0);
  sqcRYGate(q, 1.5853607596594328, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.1955805869369307, 0);
  sqcRYGate(q, -1.7056982834230054, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -2.0767295435678284, 0);
  sqcRYGate(q, 1.6134279915907628, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 1.1362390393134871, 0);
  sqcRYGate(q, -2.444139166556301, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -0.30378423064914806, 0);
  sqcRYGate(q, -0.8955321466390944, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -1.3709757911256217, 0);
  sqcRYGate(q, 3.015679485957094, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -0.11416233705916005, 0);
  sqcRYGate(q, 2.064233164388943, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 2.2879405976667466, 0);
  sqcRYGate(q, -2.014340947350804, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 1.8509255937674443, 0);
  sqcRYGate(q, -2.2332230907633166, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -3.095078442597213, 1);
  sqcRYGate(q, -1.4934636014397613, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.077012566627932, 1);
  sqcRYGate(q, -2.3836530116725925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2971564866013594, 1);
  sqcRYGate(q, 2.804463549851321, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9214568832716046, 1);
  sqcRYGate(q, -1.363210838479673, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1617874461722235, 1);
  sqcRYGate(q, 2.0631552858852027, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -2.211399087329475, 1);
  sqcRYGate(q, -0.7917533146732749, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 2.842280295954789, 1);
  sqcRYGate(q, -1.9048037751911933, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 2.1806669949970674, 1);
  sqcRYGate(q, 1.2818511421926795, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -2.6503251835920834, 1);
  sqcRYGate(q, 1.2033519574006108, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 0.8060797425887075, 1);
  sqcRYGate(q, 1.9586601117848046, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -2.2362069145008885, 1);
  sqcRYGate(q, -0.34013649222319664, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 0.7619177406453232, 1);
  sqcRYGate(q, 0.900410747047228, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -2.870485136355552, 2);
  sqcRYGate(q, -0.30613264427864895, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3111206354066567, 2);
  sqcRYGate(q, 1.6147986944394415, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1306590864588282, 2);
  sqcRYGate(q, -1.8228733638946792, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.22485839163628454, 2);
  sqcRYGate(q, 2.5246778821850833, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5566121374591422, 2);
  sqcRYGate(q, 2.115297302962249, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.324787484672587, 2);
  sqcRYGate(q, 1.6103547895525672, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.00029687403828404513, 2);
  sqcRYGate(q, 2.7824025039139197, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 2.9635275570765676, 2);
  sqcRYGate(q, 0.9469699148993168, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 2.520615204450986, 2);
  sqcRYGate(q, -0.853946126123553, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 2.655943977578706, 2);
  sqcRYGate(q, 2.2867534752680143, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -1.9128888120892276, 3);
  sqcRYGate(q, 1.2464993390922672, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5267608563655594, 3);
  sqcRYGate(q, -2.6159953044659248, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.987635652703138, 3);
  sqcRYGate(q, 1.2455159664213427, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.965486126293917, 3);
  sqcRYGate(q, 0.6074435355256144, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.00873329019597957, 3);
  sqcRYGate(q, -1.6832718290067827, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 1.443117397230604, 3);
  sqcRYGate(q, -0.9020893069068912, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -1.1271007946498601, 3);
  sqcRYGate(q, 2.9789447819539863, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -1.609272164979985, 3);
  sqcRYGate(q, -0.44917755620283606, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -1.212458908614571, 4);
  sqcRYGate(q, 3.008679952971581, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5438679005526026, 4);
  sqcRYGate(q, -1.8938828065387336, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9693794539458978, 4);
  sqcRYGate(q, 2.4274023820577666, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7423639972826344, 4);
  sqcRYGate(q, -0.6168976579258505, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3177082584053532, 4);
  sqcRYGate(q, -2.36998574761528, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.9230548419628525, 4);
  sqcRYGate(q, 0.10675099681243516, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.2039127014504603, 5);
  sqcRYGate(q, -0.9257774453665945, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7216709242992567, 5);
  sqcRYGate(q, -2.0148234653259305, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1040549839300975, 5);
  sqcRYGate(q, 2.1077590255219434, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.279248790022405, 5);
  sqcRYGate(q, -1.4452377056421484, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5076351387380642, 6);
  sqcRYGate(q, 2.831613072725686, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3776999380117063, 6);
  sqcRYGate(q, 2.625460351980608, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7000569946636812, 0);
  sqcRYGate(q, 0.2662501937263855, 1);
  sqcRYGate(q, -0.6548833277475854, 2);
  sqcRYGate(q, -1.3433460310868217, 3);
  sqcRYGate(q, -2.7769402978772195, 4);
  sqcRYGate(q, 2.946399737708204, 5);
  sqcRYGate(q, 3.1014450387949535, 6);
  sqcRYGate(q, 0.7995443013023283, 7);

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
