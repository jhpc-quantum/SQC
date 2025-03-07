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

  sqcRYGate(q, 1.24380330743358, 0);
  sqcRYGate(q, -1.8612648482989167, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6685435579991861, 0);
  sqcRYGate(q, 2.8788401951339515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0902190437552037, 2);
  sqcRYGate(q, -3.115959083548342, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3795756287331162, 2);
  sqcRYGate(q, 2.62260664553805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.155477688433737, 1);
  sqcRYGate(q, 0.9492721582840459, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6975275257749531, 1);
  sqcRYGate(q, -2.2763151569272893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9334742356715271, 0);
  sqcRYGate(q, -2.662687311784594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5744375111854443, 0);
  sqcRYGate(q, 1.8470993358555496, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8072244686355576, 2);
  sqcRYGate(q, 0.6894211710737752, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7306980238947365, 2);
  sqcRYGate(q, -2.1248715318665288, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.545505238588384, 1);
  sqcRYGate(q, 1.201752048808964, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3624728615105137, 1);
  sqcRYGate(q, -0.6144638893068535, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.221556218219641, 0);
  sqcRYGate(q, 0.5688748710625751, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2376957571569087, 0);
  sqcRYGate(q, -2.2535349788529926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.70587158600231, 2);
  sqcRYGate(q, -1.2972423810256317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9842520495079121, 2);
  sqcRYGate(q, 2.3653461482225446, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.015203877111334307, 1);
  sqcRYGate(q, -2.870505747645355, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.43801002652629606, 1);
  sqcRYGate(q, 1.6563132739210489, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4861472476944224, 0);
  sqcRYGate(q, 0.2905438949818455, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1329796534355523, 0);
  sqcRYGate(q, 1.4746823094696324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3750818461869139, 2);
  sqcRYGate(q, 2.4548134353911273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22578600968896284, 2);
  sqcRYGate(q, -0.12554050365293426, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6703033553305556, 1);
  sqcRYGate(q, 1.080305863696791, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9206311903898873, 1);
  sqcRYGate(q, -1.5245581895359912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3351774778784393, 0);
  sqcRYGate(q, 0.2894893384497034, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.864475141937381, 0);
  sqcRYGate(q, -1.189958324873297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.137203098557789, 2);
  sqcRYGate(q, 2.118968147800197, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2046716830263353, 2);
  sqcRYGate(q, 1.4150090321059168, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1479569775165519, 1);
  sqcRYGate(q, -2.5127159892538833, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2506326823797966, 1);
  sqcRYGate(q, 0.5722394841648217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9073503430294283, 0);
  sqcRYGate(q, -2.642893222341513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5185956651219885, 0);
  sqcRYGate(q, 0.2955697210759718, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5009048114399866, 2);
  sqcRYGate(q, 0.08860353247481358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6223581741120603, 2);
  sqcRYGate(q, -0.7638072923136409, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6165186629777022, 1);
  sqcRYGate(q, 2.663806121846633, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2986429711276775, 1);
  sqcRYGate(q, -0.5147455917083417, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1246709055351043, 0);
  sqcRYGate(q, 2.6194922402170127, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3060461410004858, 0);
  sqcRYGate(q, 2.1404351379115956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.31953093944317423, 2);
  sqcRYGate(q, 2.568171974212081, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.08578501503362643, 2);
  sqcRYGate(q, -2.287118657697398, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9994098759756431, 1);
  sqcRYGate(q, 2.7820795666526124, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.999844666788116, 1);
  sqcRYGate(q, -0.2507208200470744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2874901151941507, 0);
  sqcRYGate(q, 1.2440070581379716, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9885800388345025, 0);
  sqcRYGate(q, -0.8590959760950528, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3969733422939976, 2);
  sqcRYGate(q, 1.7177453406367535, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4159245253192427, 2);
  sqcRYGate(q, 2.59719454201099, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.104650307320222, 1);
  sqcRYGate(q, -1.0071331488451936, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.28666320621991814, 1);
  sqcRYGate(q, 2.2856560282839213, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8019783875283684, 0);
  sqcRYGate(q, 1.732266574933151, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.298396448220878, 0);
  sqcRYGate(q, -0.6675677107718291, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7753627444596267, 2);
  sqcRYGate(q, -1.805830593208746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7803831655433533, 2);
  sqcRYGate(q, 2.353525848696771, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.237534173958374, 1);
  sqcRYGate(q, 2.4228174816068107, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0845368967391518, 1);
  sqcRYGate(q, 1.0653252110796485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.613544995936612, 0);
  sqcRYGate(q, -1.872704164349421, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.974981884780953, 0);
  sqcRYGate(q, 2.6264228563848886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11156196298472576, 2);
  sqcRYGate(q, -0.5426949073364009, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3168736391095237, 2);
  sqcRYGate(q, 2.7701786210782893, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.011031524114464786, 1);
  sqcRYGate(q, -0.03627034546330838, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0262348186075614, 1);
  sqcRYGate(q, -0.13612182538168327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.885025446399016, 0);
  sqcRYGate(q, -1.5982231102275568, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.150350510271467, 0);
  sqcRYGate(q, 1.5739954147790476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.457671427339217, 2);
  sqcRYGate(q, 0.8687306798781376, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3480379817204384, 2);
  sqcRYGate(q, -2.957938538963327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8966432850903505, 1);
  sqcRYGate(q, -0.07910930100968372, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.14491350037954046, 1);
  sqcRYGate(q, 0.022010026970093213, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9022569141460064, 0);
  sqcRYGate(q, -1.549369463495609, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6313864882567007, 0);
  sqcRYGate(q, 1.4420231708074305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4058233015762602, 2);
  sqcRYGate(q, -0.25099984478933457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0214572763214305, 2);
  sqcRYGate(q, -2.207358426758005, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8867538964651196, 1);
  sqcRYGate(q, 0.556372395820504, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.232100900290133, 1);
  sqcRYGate(q, 1.4769086297889629, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8613883819157628, 0);
  sqcRYGate(q, -1.2957196200447332, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.938772293598401, 0);
  sqcRYGate(q, -0.6254942398746133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3352820257026567, 2);
  sqcRYGate(q, 0.9880455272033787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1348904147843841, 2);
  sqcRYGate(q, 2.3213158800542706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.09888556562753958, 1);
  sqcRYGate(q, -1.1187125905312025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4287633012660139, 1);
  sqcRYGate(q, -1.0894201567876927, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5291262838972393, 0);
  sqcRYGate(q, 1.2534447461900635, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3758255012780993, 0);
  sqcRYGate(q, 1.244143637540922, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1541629882132245, 2);
  sqcRYGate(q, 0.006992834913695441, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6139405184585283, 2);
  sqcRYGate(q, 2.48623359088127, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2507823370450846, 1);
  sqcRYGate(q, 2.8438762973750022, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14741101711626023, 1);
  sqcRYGate(q, -1.4887570242576584, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0669964313000704, 0);
  sqcRYGate(q, -0.8151934240553329, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.946193365117726, 0);
  sqcRYGate(q, 2.2877782434214065, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9042463310047938, 2);
  sqcRYGate(q, -1.5104262593043387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.71605552094569, 2);
  sqcRYGate(q, -2.0075143242889073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1916847916952016, 1);
  sqcRYGate(q, -1.7776019864364372, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0976482413450022, 1);
  sqcRYGate(q, -0.4171688282272331, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.20790020569073772, 0);
  sqcRYGate(q, 2.440547855789984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.285133730222616, 0);
  sqcRYGate(q, -1.9708021760866243, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.842326627018185, 2);
  sqcRYGate(q, 0.13063217706280705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0011998431843940338, 2);
  sqcRYGate(q, 3.1374606087454824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.046923016576928, 1);
  sqcRYGate(q, 1.9430612462993446, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.588120749910204, 1);
  sqcRYGate(q, -2.808989570344963, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4432612078140505, 0);
  sqcRYGate(q, -1.4902434515763279, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8878342579092284, 0);
  sqcRYGate(q, 0.4173872985081477, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6187734474539885, 2);
  sqcRYGate(q, -2.9027176279546647, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0666388830554132, 2);
  sqcRYGate(q, -1.6309393499062352, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.261054326428101, 1);
  sqcRYGate(q, 1.5114591655613625, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0293646871119426, 1);
  sqcRYGate(q, 0.3432259554416088, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8252921032546212, 0);
  sqcRYGate(q, -3.0636112283447807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7552503374463342, 0);
  sqcRYGate(q, 3.083147503918679, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7049024301667519, 2);
  sqcRYGate(q, 2.882825527589665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.878220452397147, 2);
  sqcRYGate(q, -1.2009619996251053, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.063802121095716, 1);
  sqcRYGate(q, 2.9677049394344275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.054177450732401, 1);
  sqcRYGate(q, -2.614126353942763, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8240953755394376, 0);
  sqcRYGate(q, 3.0672876119713197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6057345584513365, 0);
  sqcRYGate(q, 0.5030517761352724, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.274933964774708, 2);
  sqcRYGate(q, -0.2065882907131003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9703437556312601, 2);
  sqcRYGate(q, 0.12862234915343262, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.35711369962917067, 1);
  sqcRYGate(q, 2.6393906482884657, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8898060640617356, 1);
  sqcRYGate(q, 1.9120446342619388, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9887669444424516, 0);
  sqcRYGate(q, -2.6437364853779, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.579424677549226, 0);
  sqcRYGate(q, 0.7960547006950129, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.04621894927201027, 2);
  sqcRYGate(q, 2.936232156470558, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8823694052817883, 2);
  sqcRYGate(q, -1.5867838824410765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7863689666640914, 1);
  sqcRYGate(q, 1.145036838103969, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4739364332364689, 1);
  sqcRYGate(q, 0.2859534776813036, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7718846693260333, 0);
  sqcRYGate(q, -2.719765368171885, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2443464337795413, 0);
  sqcRYGate(q, -2.604831810901258, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6731923658681835, 2);
  sqcRYGate(q, 3.033998391293333, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.847591739927007, 2);
  sqcRYGate(q, -0.6005824099903937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0660797956207322, 1);
  sqcRYGate(q, 2.9995249816656804, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.950314840403717, 1);
  sqcRYGate(q, -2.3217892250001593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6758535085109681, 0);
  sqcRYGate(q, 2.187487082920301, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.430535742426997, 0);
  sqcRYGate(q, 1.9075695879748853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9170234176177043, 2);
  sqcRYGate(q, -0.8988278389411406, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0442121706740224, 2);
  sqcRYGate(q, 1.608282685256106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.216207441846646, 1);
  sqcRYGate(q, 3.097205066840044, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1791822208976805, 1);
  sqcRYGate(q, -0.30102810058564816, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0188643337769314, 0);
  sqcRYGate(q, -1.1273881403325818, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7712388604712805, 0);
  sqcRYGate(q, 3.0961985653435806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.113206574285671, 2);
  sqcRYGate(q, -1.2245708899712149, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.009022619851982, 2);
  sqcRYGate(q, 2.1888967666061463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.008561877022196, 1);
  sqcRYGate(q, -1.1571413212247759, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9871750529390257, 1);
  sqcRYGate(q, -1.153342895239744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0490170189506831, 0);
  sqcRYGate(q, -1.0724814241095146, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.949258151182848, 0);
  sqcRYGate(q, -0.7441366887233621, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8497138414610585, 2);
  sqcRYGate(q, 0.8920473478663676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.788807925329199, 2);
  sqcRYGate(q, -2.67293468607511, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8113493290289377, 1);
  sqcRYGate(q, -0.20156067557823054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.698729490485321, 1);
  sqcRYGate(q, -1.8987640158290962, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.733778405627735, 0);
  sqcRYGate(q, 2.52781844950825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2493893692838014, 0);
  sqcRYGate(q, 2.2659034789984362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2281290693950886, 2);
  sqcRYGate(q, 2.549710034593627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.568419467733968, 2);
  sqcRYGate(q, -1.4431759437900862, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9401265696224685, 1);
  sqcRYGate(q, -3.0160426157632547, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.60621159614853, 1);
  sqcRYGate(q, -1.3373176454714504, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5281242145067997, 0);
  sqcRYGate(q, -0.23496063872756512, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.064927582382138, 0);
  sqcRYGate(q, 0.03608881390461784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6592259201331098, 2);
  sqcRYGate(q, -2.2191498607370317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6568152341262747, 2);
  sqcRYGate(q, 1.3733693840110186, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8664487253002413, 1);
  sqcRYGate(q, 0.07578163610886168, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.621502068500853, 1);
  sqcRYGate(q, -2.6100953302604606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2477298431254749, 0);
  sqcRYGate(q, 0.9195352554522627, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7909942567869406, 0);
  sqcRYGate(q, 2.4128142161870336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.14582632387824024, 2);
  sqcRYGate(q, 1.2817263248565425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2103514144435306, 2);
  sqcRYGate(q, 0.10134963888541786, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4147473307745597, 1);
  sqcRYGate(q, -1.1330975562761454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.02736805416634485, 1);
  sqcRYGate(q, 2.9677331551118877, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1478305621516145, 0);
  sqcRYGate(q, -1.0303613054756564, 1);
  sqcRYGate(q, -3.132851195974382, 2);
  sqcRYGate(q, -0.3711721881706048, 3);

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
