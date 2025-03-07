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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -1.9705633509435785, 0);
  sqcRYGate(q, -3.014747031649164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.408462879135855, 0);
  sqcRYGate(q, -2.1599607688280433, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9286524813188821, 1);
  sqcRYGate(q, 2.0662008613485456, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5712480264207853, 1);
  sqcRYGate(q, -3.1236266878079957, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.445726104767857, 2);
  sqcRYGate(q, 0.6421847094333354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.493096212329884, 2);
  sqcRYGate(q, 1.2265164800314725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.339512200592029, 3);
  sqcRYGate(q, 0.06675755725182228, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3216291112566783, 3);
  sqcRYGate(q, 0.44699554584679774, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8078703931385247, 4);
  sqcRYGate(q, -2.721565424658051, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4472905977615058, 4);
  sqcRYGate(q, -1.771909007748552, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.01487664627066, 5);
  sqcRYGate(q, -0.11472917319490901, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.916867777453279, 5);
  sqcRYGate(q, -0.5534236440765481, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1699331523465406, 6);
  sqcRYGate(q, -1.0239833647523797, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0338081932589551, 6);
  sqcRYGate(q, -0.1928526216267796, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0194472598182855, 0);
  sqcRYGate(q, 0.6238113089942977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.789793998820534, 0);
  sqcRYGate(q, 3.0792320394031316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.769892553892981, 1);
  sqcRYGate(q, 0.04967930542919191, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0150774232276216, 1);
  sqcRYGate(q, -1.6753645505900732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1526018610273716, 2);
  sqcRYGate(q, 3.0830421148396887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7401196516488708, 2);
  sqcRYGate(q, 2.869075480285685, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.083798050645534, 3);
  sqcRYGate(q, -1.7452318910440483, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.754023960259068, 3);
  sqcRYGate(q, -1.0773622978224964, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2297154735498523, 4);
  sqcRYGate(q, 0.6701457416727257, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.49088159061870495, 4);
  sqcRYGate(q, -0.5248627124561923, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8800546058082958, 5);
  sqcRYGate(q, -2.468793433448122, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6078078535476563, 5);
  sqcRYGate(q, 1.7095765533642373, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.41560880994382526, 6);
  sqcRYGate(q, -0.04003249603617754, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3017955108266742, 6);
  sqcRYGate(q, 0.6997165647114034, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7271943287588813, 0);
  sqcRYGate(q, -3.014094562200946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4626752278394686, 0);
  sqcRYGate(q, 2.46979168304625, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6698223938730359, 1);
  sqcRYGate(q, 2.276952114185228, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1181769279487158, 1);
  sqcRYGate(q, 0.47737381718108907, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1029292192758322, 2);
  sqcRYGate(q, -1.475679944572601, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.93617243911822, 2);
  sqcRYGate(q, 0.4966466144136045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8548393782446113, 3);
  sqcRYGate(q, -3.04441659747014, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9401742896272394, 3);
  sqcRYGate(q, -0.4315240860046128, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6071146842230787, 4);
  sqcRYGate(q, -0.9315523281782239, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.093077138176876, 4);
  sqcRYGate(q, -2.05399685225204, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9674023531428055, 5);
  sqcRYGate(q, -0.6987995324253875, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.26492789288792906, 5);
  sqcRYGate(q, 0.4506702710072517, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2776808914235263, 6);
  sqcRYGate(q, -2.2244713994480176, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.568072043659052, 6);
  sqcRYGate(q, -0.36953067636605574, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9050840089154625, 0);
  sqcRYGate(q, -2.8059612065729524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2666795481104924, 0);
  sqcRYGate(q, 0.876056459626966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4180467911766188, 1);
  sqcRYGate(q, -1.0939943828264957, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5661751679395186, 1);
  sqcRYGate(q, -2.6986545815831247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.45515779462060024, 2);
  sqcRYGate(q, 1.416160697021291, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.11982517739302, 2);
  sqcRYGate(q, -3.1135963043216184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0669624809021205, 3);
  sqcRYGate(q, 1.255053613766056, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4324079326995154, 3);
  sqcRYGate(q, 2.5843739282796796, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9179061509818869, 4);
  sqcRYGate(q, -1.0570782979484852, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.688179793326969, 4);
  sqcRYGate(q, 1.669072925513857, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.141583110064635, 5);
  sqcRYGate(q, -2.860236544603165, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.08457555835565803, 5);
  sqcRYGate(q, 2.1244618676072653, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.111620364305412, 6);
  sqcRYGate(q, 0.17331073190725527, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.225986746001911, 6);
  sqcRYGate(q, 3.069423558475679, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9547025309509768, 0);
  sqcRYGate(q, 1.6861510083885705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.592274593567853, 0);
  sqcRYGate(q, 1.2178166783830795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1692704355345258, 1);
  sqcRYGate(q, 2.485712288192566, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0237672473453214, 1);
  sqcRYGate(q, -2.887962356829282, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3017243709594273, 2);
  sqcRYGate(q, 1.6906029729916456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6335749475225345, 2);
  sqcRYGate(q, -0.41600854808957877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6946838426407258, 3);
  sqcRYGate(q, 1.2087805197543324, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.238033137134989, 3);
  sqcRYGate(q, 1.6677727906998596, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6373801575005387, 4);
  sqcRYGate(q, -1.17280909087189, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.18339490470107042, 4);
  sqcRYGate(q, -2.3573927810869924, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5622898166241173, 5);
  sqcRYGate(q, 1.8918775312660323, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9659993605318107, 5);
  sqcRYGate(q, 2.792520398296347, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.1739737066087372, 6);
  sqcRYGate(q, 1.0796529897738223, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.1951365650231054, 6);
  sqcRYGate(q, -2.5730840627812115, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5594264173866486, 0);
  sqcRYGate(q, -0.5378207656378446, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0899745360211446, 0);
  sqcRYGate(q, 3.1064856595869106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7727163627235605, 1);
  sqcRYGate(q, 1.5409181864994925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8175917333884848, 1);
  sqcRYGate(q, 2.9092169712468112, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6565034790938733, 2);
  sqcRYGate(q, 0.614589977864232, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6081332510488622, 2);
  sqcRYGate(q, 0.9717442061393521, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4681250232655465, 3);
  sqcRYGate(q, 0.6796971111156589, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7408880499286231, 3);
  sqcRYGate(q, 2.009577665340916, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.1834822251685768, 4);
  sqcRYGate(q, -0.9188502530934948, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9583500615835736, 4);
  sqcRYGate(q, -1.2494472381411086, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.07467152613643258, 5);
  sqcRYGate(q, -1.7034991061025686, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7640792671040746, 5);
  sqcRYGate(q, -2.4788119168728544, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8497286968743696, 6);
  sqcRYGate(q, -2.4550825295022682, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.65587801497779, 6);
  sqcRYGate(q, -1.6754312958399311, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5016011236497044, 0);
  sqcRYGate(q, -2.376609116044941, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2974236822282887, 0);
  sqcRYGate(q, -0.22303045327468848, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.709609615133434, 1);
  sqcRYGate(q, -0.5597458148644775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8902800491269867, 1);
  sqcRYGate(q, 2.2472877408789023, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0110844717126803, 2);
  sqcRYGate(q, 1.6425825376893384, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4914474163983924, 2);
  sqcRYGate(q, -2.742261067930463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3805666650630088, 3);
  sqcRYGate(q, 2.8348431801237095, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1593636146459865, 3);
  sqcRYGate(q, -2.4595115694868657, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6602680307909372, 4);
  sqcRYGate(q, 2.582183381234514, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.17425556441970347, 4);
  sqcRYGate(q, -2.4246946234964026, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.12655312985003067, 5);
  sqcRYGate(q, -0.18937554112803615, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.1984290982218404, 5);
  sqcRYGate(q, 2.0974844089861606, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1585102207408182, 6);
  sqcRYGate(q, 0.25770446471504155, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6239493422669526, 6);
  sqcRYGate(q, -2.16464701488619, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7524562555736787, 0);
  sqcRYGate(q, -0.25849638760254856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5240752847898908, 0);
  sqcRYGate(q, 1.8106940180038196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6912486646797653, 1);
  sqcRYGate(q, -1.206123006915452, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.052324995078630684, 1);
  sqcRYGate(q, 2.8574126332187992, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9762508076863322, 2);
  sqcRYGate(q, -0.503080730462074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1338636402552966, 2);
  sqcRYGate(q, -1.4872883778100325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4004352592400728, 3);
  sqcRYGate(q, 0.11645540134701536, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9825546891381636, 3);
  sqcRYGate(q, 1.005840509881151, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.07405447317557648, 4);
  sqcRYGate(q, 2.6939529323948808, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5459653261585063, 4);
  sqcRYGate(q, -2.929026563232355, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0610976780498458, 5);
  sqcRYGate(q, 1.6903587677249627, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.22843087510467236, 5);
  sqcRYGate(q, -1.5459918468282914, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4466008837024778, 6);
  sqcRYGate(q, -1.7534577372429594, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6448358985239152, 6);
  sqcRYGate(q, 2.9333364317768718, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.765500138219287, 0);
  sqcRYGate(q, 0.7254987529099948, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.313132887027964, 0);
  sqcRYGate(q, 1.198156997748582, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1756783386820207, 1);
  sqcRYGate(q, -0.9271015944254364, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4015975072232703, 1);
  sqcRYGate(q, -0.20206659068470764, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7842352835355104, 2);
  sqcRYGate(q, -1.409233421662891, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5306362993454243, 2);
  sqcRYGate(q, 1.7324706865910047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3977902566271214, 3);
  sqcRYGate(q, 0.22134249235760972, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.918682764117131, 3);
  sqcRYGate(q, 0.42645409230851783, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.935992226391813, 4);
  sqcRYGate(q, -1.222424331645724, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1164362761045716, 4);
  sqcRYGate(q, 0.7500328595569998, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5744024205846057, 5);
  sqcRYGate(q, 2.2469215698736997, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.461101528379235, 5);
  sqcRYGate(q, -0.9305944146506051, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.140272730126011, 6);
  sqcRYGate(q, -0.32738465123375793, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3832716371309397, 6);
  sqcRYGate(q, 1.4002439130315933, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.099668978712029, 0);
  sqcRYGate(q, 1.1003564924074174, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9176683611682364, 0);
  sqcRYGate(q, -1.1158077031779061, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2547184115018819, 1);
  sqcRYGate(q, 2.8720491366982395, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.505469543403755, 1);
  sqcRYGate(q, -2.2524532290865587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3643411046770146, 2);
  sqcRYGate(q, -0.7925536255050893, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1667728930021184, 2);
  sqcRYGate(q, 1.3273253728855041, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0150617372690287, 3);
  sqcRYGate(q, -1.1794219109985686, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4934237016662744, 3);
  sqcRYGate(q, 2.0093412791868923, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6052993280119727, 4);
  sqcRYGate(q, 1.0578153099450354, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.548124524863309, 4);
  sqcRYGate(q, 1.4616415930604005, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5276204052233697, 5);
  sqcRYGate(q, -2.5692317835828673, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2899569706567005, 5);
  sqcRYGate(q, -0.477493005023617, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.19747406835632475, 6);
  sqcRYGate(q, 2.183471696666306, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7243711159738515, 6);
  sqcRYGate(q, -1.2141842704306234, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.123110961845075, 0);
  sqcRYGate(q, 1.2199092180733366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0754888922190589, 0);
  sqcRYGate(q, -0.15397593991684388, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5623086318643007, 1);
  sqcRYGate(q, -2.4437389027951815, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5195177105921992, 1);
  sqcRYGate(q, -1.6137912254102174, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5869422319215717, 2);
  sqcRYGate(q, -1.6760153305961143, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.48991531543148703, 2);
  sqcRYGate(q, 0.6393231256999913, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08621456933301448, 3);
  sqcRYGate(q, 1.8864377870072317, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3546213582043094, 3);
  sqcRYGate(q, -0.25861363922457414, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.13195157041346484, 4);
  sqcRYGate(q, -1.0705282226719985, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5509039658315844, 4);
  sqcRYGate(q, 2.2083121191275072, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2310337430127098, 5);
  sqcRYGate(q, 2.0870695874922682, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2175134765369293, 5);
  sqcRYGate(q, -2.459463407676859, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3145255331008316, 6);
  sqcRYGate(q, 1.0190928621915931, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8893377566038785, 6);
  sqcRYGate(q, -0.8397478639716949, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2957337643683455, 0);
  sqcRYGate(q, 2.544087776959834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9043587232087162, 0);
  sqcRYGate(q, 0.8187486633761862, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5538510278501425, 1);
  sqcRYGate(q, 1.0060789466662499, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9940937076936109, 1);
  sqcRYGate(q, 1.6407699667573592, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3730648375603733, 2);
  sqcRYGate(q, -1.3315430775110002, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.944455536497425, 2);
  sqcRYGate(q, 1.1644746241845212, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0073004465140052, 3);
  sqcRYGate(q, 1.933853585764151, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4771279705879632, 3);
  sqcRYGate(q, -0.4061516289171836, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7529809114657704, 4);
  sqcRYGate(q, -0.283362397180344, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6763435545099625, 4);
  sqcRYGate(q, 1.009215300706282, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4060863837097966, 5);
  sqcRYGate(q, 1.2665017761000448, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.336904634017458, 5);
  sqcRYGate(q, 1.2839388134699916, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2363393365643085, 6);
  sqcRYGate(q, -2.20217176616866, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0021787154703148, 6);
  sqcRYGate(q, -1.903354943209905, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2755163682715276, 0);
  sqcRYGate(q, 0.021737526414470472, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.601130870911055, 0);
  sqcRYGate(q, 0.14949847306134603, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6155005818102968, 1);
  sqcRYGate(q, 2.8059993716262595, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3179778946616827, 1);
  sqcRYGate(q, -3.0321585037279477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.926916421665311, 2);
  sqcRYGate(q, 0.26404748216209933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6997975373012606, 2);
  sqcRYGate(q, -1.8213558271127557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.30357450310601236, 3);
  sqcRYGate(q, -2.987531434031029, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.077690887662662, 3);
  sqcRYGate(q, 2.855555280873677, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1993954106747913, 4);
  sqcRYGate(q, 1.2370988710515922, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6760930006901402, 4);
  sqcRYGate(q, 0.6542346814517501, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.098785144689165, 5);
  sqcRYGate(q, -1.36024385215548, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.18815375278616475, 5);
  sqcRYGate(q, 0.5795442818964984, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.049991885425445304, 6);
  sqcRYGate(q, 0.7038499227074659, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3636575416906239, 6);
  sqcRYGate(q, -2.137994065950452, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4257430701813236, 0);
  sqcRYGate(q, -1.2585319696618122, 1);
  sqcRYGate(q, 2.378271271210091, 2);
  sqcRYGate(q, 1.470853317151575, 3);
  sqcRYGate(q, -0.2909621677608083, 4);
  sqcRYGate(q, 1.365445507344888, 5);
  sqcRYGate(q, 2.526486071332819, 6);
  sqcRYGate(q, 0.5149662604466321, 7);

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
