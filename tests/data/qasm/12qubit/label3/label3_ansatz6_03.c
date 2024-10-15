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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 2.638721525422448, 0);
  sqcRYGate(q, 1.5453367439397272, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1386766791838787, 0);
  sqcRYGate(q, -2.707594307691026, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0244218997839134, 1);
  sqcRYGate(q, 1.074259341527428, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.691085798554626, 1);
  sqcRYGate(q, 2.7138576678596222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5840655208709093, 2);
  sqcRYGate(q, -2.2281090703512993, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.230404639300218, 2);
  sqcRYGate(q, -1.456161834592659, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5544169725859576, 3);
  sqcRYGate(q, -2.7206230278045855, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.01247688519851664, 3);
  sqcRYGate(q, -2.5607261885653494, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9548907765642487, 4);
  sqcRYGate(q, 3.123960391697324, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.136911742555183, 4);
  sqcRYGate(q, -0.9742620174987621, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.680318496364211, 5);
  sqcRYGate(q, 2.581403216654625, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5523822016075353, 5);
  sqcRYGate(q, -1.5731801869356001, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3285957661130925, 6);
  sqcRYGate(q, 2.7124300180117853, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7738891470826963, 6);
  sqcRYGate(q, 1.8284877308925793, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7877149989711405, 7);
  sqcRYGate(q, -0.6692898320824495, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.839628625475306, 7);
  sqcRYGate(q, 0.006776649411960434, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.010965771516523226, 8);
  sqcRYGate(q, -1.5312529200940836, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.234038704753716, 8);
  sqcRYGate(q, 1.5909190697694011, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4975051258164331, 9);
  sqcRYGate(q, 1.5942857420861567, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.38338293325508044, 9);
  sqcRYGate(q, -2.778650854343431, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4729604171921542, 10);
  sqcRYGate(q, 2.6554256581449085, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.18329145682047523, 10);
  sqcRYGate(q, -1.1635104630289534, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5894290791215928, 0);
  sqcRYGate(q, -2.797631407559193, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1369734495252306, 0);
  sqcRYGate(q, 1.000462819400191, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9234288640912829, 1);
  sqcRYGate(q, -2.821409394382799, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.850443450337117, 1);
  sqcRYGate(q, 1.421854806916321, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3820701791481829, 2);
  sqcRYGate(q, 1.0567280134560404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.932028943211163, 2);
  sqcRYGate(q, -0.26764623569853646, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6015976006774446, 3);
  sqcRYGate(q, -2.4312354166860777, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.319239219561997, 3);
  sqcRYGate(q, -1.6060154140291416, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.046785252787244325, 4);
  sqcRYGate(q, 0.6106541633942364, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.140303925131738, 4);
  sqcRYGate(q, 1.567508291617826, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.11296480268871502, 5);
  sqcRYGate(q, -0.31952942113783056, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6680792956263408, 5);
  sqcRYGate(q, 2.917998922866995, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.419381193297383, 6);
  sqcRYGate(q, -2.0245742738800088, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1654520758510862, 6);
  sqcRYGate(q, 1.9194667397411698, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.18709918021964714, 7);
  sqcRYGate(q, 1.498005227421177, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.4821866425943315, 7);
  sqcRYGate(q, -1.875195468466177, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5739127219836169, 8);
  sqcRYGate(q, 1.5472978955497485, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.005627215854784683, 8);
  sqcRYGate(q, 1.533150049239935, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.2797863780839718, 9);
  sqcRYGate(q, 1.6533725851407606, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.069759675169177, 9);
  sqcRYGate(q, -3.0547975596803143, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.010117966598963692, 10);
  sqcRYGate(q, -2.2805490999263975, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.9235470900400427, 10);
  sqcRYGate(q, -1.8543181859880296, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6891210537783801, 0);
  sqcRYGate(q, -0.45084295285687315, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7912470641592173, 0);
  sqcRYGate(q, 2.7492050785288575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0249673247312625, 1);
  sqcRYGate(q, -1.9080727845438805, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.573853876043691, 1);
  sqcRYGate(q, -2.5587217801114446, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0030566154065472, 2);
  sqcRYGate(q, 2.227796911685661, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.293964844367129, 2);
  sqcRYGate(q, -0.3192203223418775, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7636565853881312, 3);
  sqcRYGate(q, 3.1399203332166628, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5702564584394068, 3);
  sqcRYGate(q, 0.0008231781396732529, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2377480298909296, 4);
  sqcRYGate(q, -3.0843198598540185, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5686568584997767, 4);
  sqcRYGate(q, 0.20561649634139023, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1411679911841186, 5);
  sqcRYGate(q, -0.06794219269185953, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.140733793372145, 5);
  sqcRYGate(q, -1.5695712054315012, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1022091884727216, 6);
  sqcRYGate(q, 2.962155899160359, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.911396379702079, 6);
  sqcRYGate(q, 3.13919157172798, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.567246543775036, 7);
  sqcRYGate(q, 3.1249086848478207, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.525966216170251, 7);
  sqcRYGate(q, -3.1364690367212447, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5656531148348096, 8);
  sqcRYGate(q, 1.2717723412347615, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5634572213582627, 8);
  sqcRYGate(q, -1.567154266880846, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.0021482904781999863, 9);
  sqcRYGate(q, 2.8590265292681067, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5008600665052372, 9);
  sqcRYGate(q, 1.5943040970602258, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.8138418150719229, 10);
  sqcRYGate(q, 1.0842298146472913, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.0010951298098746968, 10);
  sqcRYGate(q, -1.5721275062008315, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.438768891945117, 0);
  sqcRYGate(q, -1.447322358894306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9057026916433526, 0);
  sqcRYGate(q, 2.9384318262247344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4220821649438209, 1);
  sqcRYGate(q, -1.2242436924752456, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7379646656271244, 1);
  sqcRYGate(q, -1.6437090553493352, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5711097105566467, 2);
  sqcRYGate(q, -2.7903071593553683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5714407435572793, 2);
  sqcRYGate(q, -2.830975608035019, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5706808830303265, 3);
  sqcRYGate(q, 1.5653687351832415, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2395299923919531, 3);
  sqcRYGate(q, -1.5681364587230435, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5941000295195595, 4);
  sqcRYGate(q, 2.0467116496450846, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.436744942531378, 4);
  sqcRYGate(q, -1.513229099282583, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5700153636780456, 5);
  sqcRYGate(q, 1.4581366470812407, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5648901962681778, 5);
  sqcRYGate(q, -1.572821769178696, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4596030991012485, 6);
  sqcRYGate(q, -0.8229673945684642, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9682870858037502, 6);
  sqcRYGate(q, -2.4590290985671004e-05, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5700645712523364, 7);
  sqcRYGate(q, 1.476129074197189, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.141020878563243, 7);
  sqcRYGate(q, -1.574201623241857, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.7078400121124222, 8);
  sqcRYGate(q, 0.00030034063532191624, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0498301829993393, 8);
  sqcRYGate(q, 0.2898280232306172, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.018188690321020027, 9);
  sqcRYGate(q, -3.137551472967146, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5681655568709334, 9);
  sqcRYGate(q, -1.6981918378776972, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4950665997167878, 10);
  sqcRYGate(q, -1.1489490412442138, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.1056223287598668, 10);
  sqcRYGate(q, 1.5403791779097442, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5079791123604219, 0);
  sqcRYGate(q, 2.6521487043971272, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6074870828837637, 0);
  sqcRYGate(q, -1.5162336905789244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.70127599892712, 1);
  sqcRYGate(q, -2.715729077244309, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5712281313763903, 1);
  sqcRYGate(q, -1.565960884478125, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1362238741316375, 2);
  sqcRYGate(q, -0.070678730451319, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.052284635996433, 2);
  sqcRYGate(q, 0.12222226848947315, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1393586963647238, 3);
  sqcRYGate(q, -1.634664485898752, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1099730106155263, 3);
  sqcRYGate(q, -1.5698327751260024, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.051053584191384, 4);
  sqcRYGate(q, 1.4886148716863836, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.16972656920954687, 4);
  sqcRYGate(q, 2.510991477981855, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5674839500559024, 5);
  sqcRYGate(q, 1.8476804109930838, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0015008026530347607, 5);
  sqcRYGate(q, -1.5737090150542417, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.310531803847047, 6);
  sqcRYGate(q, -0.09585423892757226, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.088875252814062, 6);
  sqcRYGate(q, -0.0015295995590811629, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.776690962453065, 7);
  sqcRYGate(q, 0.8787478348332823, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.002102863922005098, 7);
  sqcRYGate(q, -2.058416086678743, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.1214405186261303, 8);
  sqcRYGate(q, -3.0668937522346735, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1083304805300176, 8);
  sqcRYGate(q, 3.1414647453699645, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6227835644984712, 9);
  sqcRYGate(q, 2.425234445066956, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.008343428835517492, 9);
  sqcRYGate(q, -1.3767057660802706, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.5175539033974594, 10);
  sqcRYGate(q, 1.7831685951381786, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.964390391095643, 10);
  sqcRYGate(q, -0.028826733919973258, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.678575698238104, 0);
  sqcRYGate(q, -0.18553856890342502, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5709607414931304, 0);
  sqcRYGate(q, -2.0140446052156045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0007624463774593693, 1);
  sqcRYGate(q, -1.5653997772187491, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5706751433476605, 1);
  sqcRYGate(q, -1.5706381126548021, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5667322244773425, 2);
  sqcRYGate(q, -0.0008984798035667112, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.104353928100263, 2);
  sqcRYGate(q, -3.071923045344385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0013815526957401403, 3);
  sqcRYGate(q, 1.8259013058179399, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0034150456312769546, 3);
  sqcRYGate(q, -1.5719683617001134, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.090890167227984, 4);
  sqcRYGate(q, -3.1222323909144056, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5692437728095658, 4);
  sqcRYGate(q, -1.6138871649193325, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.16990104449030718, 5);
  sqcRYGate(q, -1.0393784992337527, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0034090611543575026, 5);
  sqcRYGate(q, -1.5857775711566788, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.06676034714177616, 6);
  sqcRYGate(q, 1.5621003258465498, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5359994393152425, 6);
  sqcRYGate(q, -3.1320686126939834, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9329976657895256, 7);
  sqcRYGate(q, -1.2518065199383004, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5703971625632693, 7);
  sqcRYGate(q, -1.946680223997144, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.2082280258854903, 8);
  sqcRYGate(q, 0.1485959373060393, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5706751528064693, 8);
  sqcRYGate(q, -0.0012820850806969375, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5715612073158232, 9);
  sqcRYGate(q, -3.0182517273723843, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5711103848904993, 9);
  sqcRYGate(q, -0.8967331634679171, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.9599060245363527, 10);
  sqcRYGate(q, 2.068142637204794, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5702541903474616, 10);
  sqcRYGate(q, 3.140695957696713, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.8152860601241273, 0);
  sqcRYGate(q, 2.0685899145919766, 1);
  sqcRYGate(q, -1.0420531267327728, 2);
  sqcRYGate(q, -2.5151970610819694, 3);
  sqcRYGate(q, 2.1502497466473383, 4);
  sqcRYGate(q, 0.6009476673970262, 5);
  sqcRYGate(q, -1.171205237972467, 6);
  sqcRYGate(q, -0.4513343421100986, 7);
  sqcRYGate(q, 3.1058745178361367, 8);
  sqcRYGate(q, -2.544391583723819, 9);
  sqcRYGate(q, 1.2115294484437227, 10);
  sqcRYGate(q, 0.5974236075175677, 11);

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
