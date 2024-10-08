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

  sqcRYGate(q, 1.5767232464419279, 0);
  sqcRZGate(q, -1.3712320071711872, 0);
  sqcRYGate(q, 1.4156443158428005, 1);
  sqcRZGate(q, -1.5521072736216899, 1);
  sqcRYGate(q, 1.5924886767595874, 2);
  sqcRZGate(q, 0.3941207833523394, 2);
  sqcRYGate(q, -1.6207481564497996, 3);
  sqcRZGate(q, 0.6459542410374565, 3);
  sqcRYGate(q, -3.1394270772225807, 4);
  sqcRZGate(q, -2.168075906153754, 4);
  sqcRYGate(q, -0.00014013200328300002, 5);
  sqcRZGate(q, -1.8265096627097264, 5);
  sqcRYGate(q, -1.5831093260000522, 6);
  sqcRZGate(q, -0.9663139355557336, 6);
  sqcRYGate(q, -2.4679107401395064, 7);
  sqcRZGate(q, 1.892586673231977, 7);
  sqcRYGate(q, 3.0695010926474744, 8);
  sqcRZGate(q, -0.9880924969530183, 8);
  sqcRYGate(q, -1.0650299214031659e-05, 9);
  sqcRZGate(q, 0.49026150535105645, 9);
  sqcRYGate(q, 1.542088640743427, 10);
  sqcRZGate(q, 2.2418890016300397, 10);
  sqcRYGate(q, -0.03175554250533352, 11);
  sqcRZGate(q, 2.182571925383642, 11);
  sqcRYGate(q, 2.0408974480645243, 12);
  sqcRZGate(q, 1.101688084003941, 12);
  sqcRYGate(q, 0.15733067314557658, 13);
  sqcRZGate(q, 1.7222817638372372, 13);
  sqcRYGate(q, 0.031528528701846525, 14);
  sqcRZGate(q, -1.8188484261248523, 14);
  sqcRYGate(q, 0.07788009664870259, 15);
  sqcRZGate(q, -0.7952608701269624, 15);
  sqcRYGate(q, -2.144333820757309, 16);
  sqcRZGate(q, -0.4328027077557636, 16);
  sqcRYGate(q, -1.5459222316903254, 17);
  sqcRZGate(q, -1.194132024286053, 17);
  sqcRYGate(q, 1.570585132275523, 18);
  sqcRZGate(q, 0.8241608199885946, 18);
  sqcRYGate(q, -0.006594903762362491, 19);
  sqcRZGate(q, -2.8245361201441863, 19);
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
  sqcRYGate(q, -1.9703049508515802, 0);
  sqcRZGate(q, 1.3909980195711142, 0);
  sqcRYGate(q, 1.629387038946212, 1);
  sqcRZGate(q, -0.12121658911795247, 1);
  sqcRYGate(q, 1.6071246111347257, 2);
  sqcRZGate(q, -0.021345013503058976, 2);
  sqcRYGate(q, -1.895889433856823, 3);
  sqcRZGate(q, -0.9938318290489534, 3);
  sqcRYGate(q, 1.5703103190394092, 4);
  sqcRZGate(q, 1.6274941956609659, 4);
  sqcRYGate(q, 0.001875251158108604, 5);
  sqcRZGate(q, 0.9376528722591568, 5);
  sqcRYGate(q, -2.1212993625258107, 6);
  sqcRZGate(q, -2.6430056905668766, 6);
  sqcRYGate(q, -0.41051604356037436, 7);
  sqcRZGate(q, -1.8719819409783607, 7);
  sqcRYGate(q, -2.968268700366526, 8);
  sqcRZGate(q, 2.742155122998503, 8);
  sqcRYGate(q, -1.5672017478443072, 9);
  sqcRZGate(q, 0.34414444768590446, 9);
  sqcRYGate(q, -1.142269180506262, 10);
  sqcRZGate(q, -2.5690487870292373, 10);
  sqcRYGate(q, 0.04777492622658512, 11);
  sqcRZGate(q, 0.5495223733004665, 11);
  sqcRYGate(q, 2.362205447962954, 12);
  sqcRZGate(q, 2.542205340603329, 12);
  sqcRYGate(q, 0.022035826554492998, 13);
  sqcRZGate(q, 1.885163899984537, 13);
  sqcRYGate(q, 0.10122864149937698, 14);
  sqcRZGate(q, -2.5762193705218532, 14);
  sqcRYGate(q, 0.07117764526365483, 15);
  sqcRZGate(q, -1.128596675779935, 15);
  sqcRYGate(q, 0.005443140776788091, 16);
  sqcRZGate(q, -2.7273285698961507, 16);
  sqcRYGate(q, 1.5513810185742638, 17);
  sqcRZGate(q, -1.7651070788744876, 17);
  sqcRYGate(q, -1.8312414828963985, 18);
  sqcRZGate(q, 2.9843616738812706, 18);
  sqcRYGate(q, -3.1409352436785825, 19);
  sqcRZGate(q, -3.098494118331161, 19);
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
  sqcRYGate(q, 2.9120114718309416, 0);
  sqcRZGate(q, 2.8767273005966074, 0);
  sqcRYGate(q, -3.1170716740680486, 1);
  sqcRZGate(q, 3.026618328128088, 1);
  sqcRYGate(q, -0.6675402694840917, 2);
  sqcRZGate(q, -2.6325519602069387, 2);
  sqcRYGate(q, 0.5078119797978006, 3);
  sqcRZGate(q, 2.3297679469655748, 3);
  sqcRYGate(q, 2.5354668780816656, 4);
  sqcRZGate(q, -3.1185457361468343, 4);
  sqcRYGate(q, -1.5757962003009407, 5);
  sqcRZGate(q, 1.681748280028065, 5);
  sqcRYGate(q, -2.0928330352915117, 6);
  sqcRZGate(q, -2.7537825145184027, 6);
  sqcRYGate(q, 2.902014881371672, 7);
  sqcRZGate(q, 2.865408145411506, 7);
  sqcRYGate(q, -1.5728891648880587, 8);
  sqcRZGate(q, -0.44155434628438783, 8);
  sqcRYGate(q, -3.1356215434536896, 9);
  sqcRZGate(q, 1.8553848217743, 9);
  sqcRYGate(q, -3.132018094871508, 10);
  sqcRZGate(q, 0.7261216989437232, 10);
  sqcRYGate(q, -3.046877133686419, 11);
  sqcRZGate(q, -2.495938572060263, 11);
  sqcRYGate(q, 3.104257501021285, 12);
  sqcRZGate(q, -1.7421968476200977, 12);
  sqcRYGate(q, 1.4330819518377695, 13);
  sqcRZGate(q, 0.3079579199574795, 13);
  sqcRYGate(q, 1.6650424993084456, 14);
  sqcRZGate(q, 0.14241471540689596, 14);
  sqcRYGate(q, 3.107399980442809, 15);
  sqcRZGate(q, -0.8935480635394499, 15);
  sqcRYGate(q, -1.5183654956793329, 16);
  sqcRZGate(q, 1.4701985893079117, 16);
  sqcRYGate(q, -1.5947430739152537, 17);
  sqcRZGate(q, 0.17420291736507032, 17);
  sqcRYGate(q, 1.5396358947876925, 18);
  sqcRZGate(q, -2.3539205387345175, 18);
  sqcRYGate(q, 1.5687628493648789, 19);
  sqcRZGate(q, -1.481877596216542, 19);
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
  sqcRYGate(q, -1.3605834333603735, 0);
  sqcRZGate(q, -2.7776761023187055, 0);
  sqcRYGate(q, -0.07833255072246104, 1);
  sqcRZGate(q, 0.17949349384449612, 1);
  sqcRYGate(q, 3.0659143930957273, 2);
  sqcRZGate(q, 0.8143573735356625, 2);
  sqcRYGate(q, 3.1212555338620773, 3);
  sqcRZGate(q, 2.264814769849549, 3);
  sqcRYGate(q, -1.6728838205676533, 4);
  sqcRZGate(q, 1.5738861513014895, 4);
  sqcRYGate(q, 1.5640262600177328, 5);
  sqcRZGate(q, -0.09585769424642121, 5);
  sqcRYGate(q, 1.5908592121496734, 6);
  sqcRZGate(q, -0.0015320146930379863, 6);
  sqcRYGate(q, 1.5668024472082909, 7);
  sqcRZGate(q, 3.1407537615351018, 7);
  sqcRYGate(q, -2.9583905462550475, 8);
  sqcRZGate(q, -3.1021153264917225, 8);
  sqcRYGate(q, 1.1053318450288936, 9);
  sqcRZGate(q, -0.3561715668161565, 9);
  sqcRYGate(q, 1.8756158662703557, 10);
  sqcRZGate(q, -0.5664343810329076, 10);
  sqcRYGate(q, -3.092286813070573, 11);
  sqcRZGate(q, 1.8765021262127513, 11);
  sqcRYGate(q, -1.3295378768080732, 12);
  sqcRZGate(q, -1.451603407881212, 12);
  sqcRYGate(q, 1.5684768928109458, 13);
  sqcRZGate(q, 1.5703211746444794, 13);
  sqcRYGate(q, 3.127590327726666, 14);
  sqcRZGate(q, -3.009202104801455, 14);
  sqcRYGate(q, -2.4015325918171655, 15);
  sqcRZGate(q, -0.00811266920818543, 15);
  sqcRYGate(q, -1.2762049341506723, 16);
  sqcRZGate(q, -0.060924000700205205, 16);
  sqcRYGate(q, 1.7516705728258333, 17);
  sqcRZGate(q, 2.2669684008932003, 17);
  sqcRYGate(q, -1.5793826310702295, 18);
  sqcRZGate(q, 3.0747982214752385, 18);
  sqcRYGate(q, 0.77279962106339, 19);
  sqcRZGate(q, 3.0807540750844433, 19);
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
  sqcRYGate(q, -2.2176572775699803, 0);
  sqcRZGate(q, -2.2105293482770527, 0);
  sqcRYGate(q, 2.3928101752847697, 1);
  sqcRZGate(q, -2.765395205595091, 1);
  sqcRYGate(q, -0.8459226179001403, 2);
  sqcRZGate(q, 3.0072329954031707, 2);
  sqcRYGate(q, -0.05535599552940517, 3);
  sqcRZGate(q, 1.613245999299458, 3);
  sqcRYGate(q, 0.4206507312745401, 4);
  sqcRZGate(q, 1.2199719334873342, 4);
  sqcRYGate(q, -1.4704543969679307, 5);
  sqcRZGate(q, -2.3137347037146863, 5);
  sqcRYGate(q, 1.7344048380065609, 6);
  sqcRZGate(q, -0.00431386994602434, 6);
  sqcRYGate(q, -1.5543516436189289, 7);
  sqcRZGate(q, -3.135500466925424, 7);
  sqcRYGate(q, 1.569213379178735, 8);
  sqcRZGate(q, -1.484177906899184, 8);
  sqcRYGate(q, -2.650473025566722, 9);
  sqcRZGate(q, -2.0074729891668035, 9);
  sqcRYGate(q, 1.5653091838290107, 10);
  sqcRZGate(q, 1.7720789274271764, 10);
  sqcRYGate(q, 0.001528368101704203, 11);
  sqcRZGate(q, -0.2369968150984759, 11);
  sqcRYGate(q, -0.009762282986204632, 12);
  sqcRZGate(q, -1.6214919438787243, 12);
  sqcRYGate(q, 1.5670250181778966, 13);
  sqcRZGate(q, 3.085878833395253, 13);
  sqcRYGate(q, 2.9211580338155008, 14);
  sqcRZGate(q, -0.022085383859120677, 14);
  sqcRYGate(q, -1.6189165480782493, 15);
  sqcRZGate(q, -2.6351166353524033e-05, 15);
  sqcRYGate(q, -1.5187790025627814, 16);
  sqcRZGate(q, -3.131793016651318, 16);
  sqcRYGate(q, 1.6503971780537148, 17);
  sqcRZGate(q, -0.06446147695405365, 17);
  sqcRYGate(q, -3.009661965828315, 18);
  sqcRZGate(q, 3.0873719618534663, 18);
  sqcRYGate(q, 1.5984193231090116, 19);
  sqcRZGate(q, 1.6619928664985135, 19);
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
  sqcRYGate(q, 0.021170051920448275, 0);
  sqcRZGate(q, 0.4709145049574506, 0);
  sqcRYGate(q, -0.026970366189960363, 1);
  sqcRZGate(q, 3.037527212154614, 1);
  sqcRYGate(q, 1.5825743971630235, 2);
  sqcRZGate(q, -2.4775264646615924, 2);
  sqcRYGate(q, -1.0952257987788319, 3);
  sqcRZGate(q, 1.5642764453350315, 3);
  sqcRYGate(q, -0.0023439689505977412, 4);
  sqcRZGate(q, 0.3278717047147195, 4);
  sqcRYGate(q, -3.1398457244398332, 5);
  sqcRZGate(q, -2.3151330757518833, 5);
  sqcRYGate(q, 2.9677633114467796, 6);
  sqcRZGate(q, 3.1364324053424095, 6);
  sqcRYGate(q, -2.580356722973049, 7);
  sqcRZGate(q, -0.026732526195880478, 7);
  sqcRYGate(q, 2.651153619776572, 8);
  sqcRZGate(q, 3.1377832752179073, 8);
  sqcRYGate(q, 1.5980021736837344, 9);
  sqcRZGate(q, -0.004592049620305469, 9);
  sqcRYGate(q, -1.5815075980835234, 10);
  sqcRZGate(q, 1.5422841648325796, 10);
  sqcRYGate(q, -0.0007111156542899732, 11);
  sqcRZGate(q, 2.199065682413873, 11);
  sqcRYGate(q, 1.58015142953771, 12);
  sqcRZGate(q, 1.569495185135391, 12);
  sqcRYGate(q, -1.824609437151007, 13);
  sqcRZGate(q, 1.4973433451423865, 13);
  sqcRYGate(q, 1.9805816695195135, 14);
  sqcRZGate(q, 3.140708372966043, 14);
  sqcRYGate(q, -1.121137098250646, 15);
  sqcRZGate(q, 0.017772943305787863, 15);
  sqcRYGate(q, 0.4679157755561177, 16);
  sqcRZGate(q, 3.1176187652891256, 16);
  sqcRYGate(q, -1.395091297151005, 17);
  sqcRZGate(q, 3.1349809560631514, 17);
  sqcRYGate(q, 1.376040906241848, 18);
  sqcRZGate(q, -1.6353207578610034, 18);
  sqcRYGate(q, 0.00025046279802687366, 19);
  sqcRZGate(q, -2.270673717187961, 19);
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
  sqcRYGate(q, 1.4803982514950096, 0);
  sqcRZGate(q, 0.722283820658729, 0);
  sqcRYGate(q, 1.5359463381119896, 1);
  sqcRZGate(q, 0.025384064859809815, 1);
  sqcRYGate(q, 0.007012112954409845, 2);
  sqcRZGate(q, -0.6351332479835216, 2);
  sqcRYGate(q, -1.5753667236443651, 3);
  sqcRZGate(q, -1.56839522906, 3);
  sqcRYGate(q, 1.56602248813357, 4);
  sqcRZGate(q, 0.7490629814271887, 4);
  sqcRYGate(q, -1.4792317007309617, 5);
  sqcRZGate(q, 1.5515021410724732, 5);
  sqcRYGate(q, 1.7641880276192938, 6);
  sqcRZGate(q, -0.10640204456985272, 6);
  sqcRYGate(q, 1.5857284284589468, 7);
  sqcRZGate(q, 2.191610544196516, 7);
  sqcRYGate(q, -1.575447844889073, 8);
  sqcRZGate(q, 0.5239600782563736, 8);
  sqcRYGate(q, -1.5702102971745813, 9);
  sqcRZGate(q, 3.1322156122027414, 9);
  sqcRYGate(q, -1.5675516046879612, 10);
  sqcRZGate(q, -1.5774501123702638, 10);
  sqcRYGate(q, -1.775139152891712, 11);
  sqcRZGate(q, -3.140907094607266, 11);
  sqcRYGate(q, 1.6575923251941322, 12);
  sqcRZGate(q, 0.016580138704082214, 12);
  sqcRYGate(q, 2.6392858966523103, 13);
  sqcRZGate(q, -3.1403553587723207, 13);
  sqcRYGate(q, -2.6309958505991995, 14);
  sqcRZGate(q, 3.1407687879072967, 14);
  sqcRYGate(q, 0.0702064971243006, 15);
  sqcRZGate(q, -0.010717686890671296, 15);
  sqcRYGate(q, -2.9764339316289523, 16);
  sqcRZGate(q, 3.115708464213818, 16);
  sqcRYGate(q, -1.2746110431324498, 17);
  sqcRZGate(q, 0.031562492672663346, 17);
  sqcRYGate(q, 1.5298572658420273, 18);
  sqcRZGate(q, 3.1367015150862656, 18);
  sqcRYGate(q, -1.6784115460635407, 19);
  sqcRZGate(q, 1.4606787803806591, 19);
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
  sqcRYGate(q, -1.581145354152001, 0);
  sqcRZGate(q, -3.000193475459923, 0);
  sqcRYGate(q, -1.550291890787018, 1);
  sqcRZGate(q, 3.1399291560193183, 1);
  sqcRYGate(q, 1.5569922048144902, 2);
  sqcRZGate(q, -1.570096064630868, 2);
  sqcRYGate(q, -2.524824682269792, 3);
  sqcRZGate(q, -1.570908596493056, 3);
  sqcRYGate(q, 0.003060786692381967, 4);
  sqcRZGate(q, -0.7427791960490361, 4);
  sqcRYGate(q, -0.00015988020785322941, 5);
  sqcRZGate(q, -1.5414386786266885, 5);
  sqcRYGate(q, 1.6473378994171535, 6);
  sqcRZGate(q, -0.13807027908978142, 6);
  sqcRYGate(q, -1.7259372445878283, 7);
  sqcRZGate(q, 2.18091844298485, 7);
  sqcRYGate(q, -0.12520212042416204, 8);
  sqcRZGate(q, 2.945134729246475, 8);
  sqcRYGate(q, -1.5610733757329998, 9);
  sqcRZGate(q, -1.4595630002152173, 9);
  sqcRYGate(q, -2.824388954570114, 10);
  sqcRZGate(q, 0.002304433336061464, 10);
  sqcRYGate(q, -1.5711320833736213, 11);
  sqcRZGate(q, -0.01830532894658515, 11);
  sqcRYGate(q, 0.3174130944724478, 12);
  sqcRZGate(q, -3.1372301401506735, 12);
  sqcRYGate(q, -1.5707847870484772, 13);
  sqcRZGate(q, 3.0324039841074106, 13);
  sqcRYGate(q, 2.0254289291400784, 14);
  sqcRZGate(q, 3.1408389156213596, 14);
  sqcRYGate(q, -2.0544852916413223, 15);
  sqcRZGate(q, -0.00996806590693605, 15);
  sqcRYGate(q, -0.1448811727251408, 16);
  sqcRZGate(q, -3.138079865342634, 16);
  sqcRYGate(q, -0.31650403399519167, 17);
  sqcRZGate(q, -0.0008948171922953263, 17);
  sqcRYGate(q, 1.7535043595237638, 18);
  sqcRZGate(q, -3.1385954142445174, 18);
  sqcRYGate(q, 1.887048926640725, 19);
  sqcRZGate(q, 1.6439183550124887, 19);
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
  sqcRYGate(q, 3.1346377151149465, 0);
  sqcRZGate(q, 1.6849730237955116, 0);
  sqcRYGate(q, -1.5708971198258757, 1);
  sqcRZGate(q, 1.5706657182610837, 1);
  sqcRYGate(q, -1.5707680159652258, 2);
  sqcRZGate(q, 0.0014030521868166048, 2);
  sqcRYGate(q, -0.8010265109189848, 3);
  sqcRZGate(q, -0.06802962232317553, 3);
  sqcRYGate(q, -1.580458749339737, 4);
  sqcRZGate(q, -0.0021410413867153804, 4);
  sqcRYGate(q, 0.0013929059136046362, 5);
  sqcRZGate(q, 1.572862486033124, 5);
  sqcRYGate(q, 0.005779909506407046, 6);
  sqcRZGate(q, -1.4413898173379454, 6);
  sqcRYGate(q, -5.216608318665785e-05, 7);
  sqcRZGate(q, -0.819612262122062, 7);
  sqcRYGate(q, -0.007383175151107588, 8);
  sqcRZGate(q, -1.8887913187114496, 8);
  sqcRYGate(q, -3.139198942459868, 9);
  sqcRZGate(q, -3.11680518631881, 9);
  sqcRYGate(q, 0.3463840012884237, 10);
  sqcRZGate(q, -1.5671941954803135, 10);
  sqcRYGate(q, -1.3670121098291315, 11);
  sqcRZGate(q, 0.20543896759672392, 11);
  sqcRYGate(q, 0.3094593512689322, 12);
  sqcRZGate(q, -1.5736332627655425, 12);
  sqcRYGate(q, 0.0008204418678157716, 13);
  sqcRZGate(q, -1.5729029840496906, 13);
  sqcRYGate(q, 1.558232079231127, 14);
  sqcRZGate(q, -1.571744116599629, 14);
  sqcRYGate(q, 1.6688225341019847, 15);
  sqcRZGate(q, 1.5706210604828605, 15);
  sqcRYGate(q, 1.6115551665712404, 16);
  sqcRZGate(q, 1.5706609753149867, 16);
  sqcRYGate(q, 0.03855031130163056, 17);
  sqcRZGate(q, 1.5669247932238939, 17);
  sqcRYGate(q, -1.8364159676135854, 18);
  sqcRZGate(q, 1.5736585574732311, 18);
  sqcRYGate(q, 0.005791760289477921, 19);
  sqcRZGate(q, -1.6470079534118134, 19);
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
  sqcRYGate(q, 1.5729433523434873, 0);
  sqcRZGate(q, 0.7279129230302993, 0);
  sqcRYGate(q, 1.3809543446482087, 1);
  sqcRZGate(q, -0.8886187329367168, 1);
  sqcRYGate(q, 1.5706892690388992, 2);
  sqcRZGate(q, 2.2983387263375694, 2);
  sqcRYGate(q, 3.141566374812266, 3);
  sqcRZGate(q, 2.1824912993293006, 3);
  sqcRYGate(q, -1.56502653630362, 4);
  sqcRZGate(q, -0.8435719981881283, 4);
  sqcRYGate(q, 1.572927653149337, 5);
  sqcRZGate(q, 0.6766631302714028, 5);
  sqcRYGate(q, -1.6777704526475583, 6);
  sqcRZGate(q, -2.5091052780558663, 6);
  sqcRYGate(q, -2.5025947814925646, 7);
  sqcRZGate(q, 1.9955819818906164, 7);
  sqcRYGate(q, -1.6214102425698824, 8);
  sqcRZGate(q, -2.292303970563494, 8);
  sqcRYGate(q, 1.573264190654935, 9);
  sqcRZGate(q, 0.6937657237089354, 9);
  sqcRYGate(q, 1.565988709447148, 10);
  sqcRZGate(q, -2.4681618492079758, 10);
  sqcRYGate(q, -3.1388842160700734, 11);
  sqcRZGate(q, 2.457571164308215, 11);
  sqcRYGate(q, -1.5674543780676817, 12);
  sqcRZGate(q, 2.314376235144664, 12);
  sqcRYGate(q, -1.5593623043444307, 13);
  sqcRZGate(q, 0.6814516272473807, 13);
  sqcRYGate(q, 1.5717022502980083, 14);
  sqcRZGate(q, 2.1352527442184464, 14);
  sqcRYGate(q, 1.5676516792724202, 15);
  sqcRZGate(q, -1.0231972312915483, 15);
  sqcRYGate(q, -1.5699913720080707, 16);
  sqcRZGate(q, 0.6193762106650205, 16);
  sqcRYGate(q, -1.5751328389705095, 17);
  sqcRZGate(q, 0.5667867285972598, 17);
  sqcRYGate(q, -1.5657480773935626, 18);
  sqcRZGate(q, -1.1275597075233972, 18);
  sqcRYGate(q, 1.6130168232311022, 19);
  sqcRZGate(q, -2.5987474642402173, 19);

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
