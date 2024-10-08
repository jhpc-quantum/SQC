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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 0.24717463539977808, 0);
  sqcRYGate(q, 0.8858136696120678, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.79410392745186, 0);
  sqcRYGate(q, 1.1524528246332677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.67658675765947, 2);
  sqcRYGate(q, -2.433288361800858, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.637884987052276, 2);
  sqcRYGate(q, -0.7267349578096266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.296550728538727, 4);
  sqcRYGate(q, 2.400255482865042, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.811179869667518, 4);
  sqcRYGate(q, 2.7798776993611822, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4261643548995724, 6);
  sqcRYGate(q, -2.6480396244961764, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.19591738475000695, 6);
  sqcRYGate(q, 2.9515806404058895, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6366528501242277, 8);
  sqcRYGate(q, -0.6048255622420053, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.111402018286969, 8);
  sqcRYGate(q, -2.9468859306838424, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.6090282435155094, 10);
  sqcRYGate(q, -1.9626227634923028, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4541586956898973, 10);
  sqcRYGate(q, -0.3965196289885391, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.12779494231759791, 12);
  sqcRYGate(q, -2.747410912192266, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.583638284753694, 12);
  sqcRYGate(q, 1.0781995057363047, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.5443600220385534, 14);
  sqcRYGate(q, -0.47214154196636215, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.268534646899135, 14);
  sqcRYGate(q, 1.33720970683724, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.2611439064613688, 1);
  sqcRYGate(q, 2.7877820057304405, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5948852602016, 1);
  sqcRYGate(q, 0.6746545674207167, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.43615136775471, 3);
  sqcRYGate(q, 2.092103568517018, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.06164065896469139, 3);
  sqcRYGate(q, -3.135557367840071, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1123913277228337, 5);
  sqcRYGate(q, 0.016032163306240577, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.861831077986466, 5);
  sqcRYGate(q, 0.3090582469301797, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.272621905195095, 7);
  sqcRYGate(q, -2.5987908322428925, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.097877660698203, 7);
  sqcRYGate(q, 2.9641284435839186, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.20229821504521972, 9);
  sqcRYGate(q, 2.016484616631204, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.8506324371692005, 9);
  sqcRYGate(q, 2.7118673329906775, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.04653401257797, 11);
  sqcRYGate(q, 0.7557275303737603, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.0035643975578386, 11);
  sqcRYGate(q, -3.1001339973227755, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.1204135106323383, 13);
  sqcRYGate(q, -3.1145883850492466, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.6948142426494117, 13);
  sqcRYGate(q, -2.567393124880988, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.0252468208009144, 0);
  sqcRYGate(q, 1.3660513789898945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0772921228154884, 0);
  sqcRYGate(q, 2.0002791422724537, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.062500316462864, 2);
  sqcRYGate(q, 1.1984271271751934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.871276543380894, 2);
  sqcRYGate(q, 0.6496204197270554, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.772775195169211, 4);
  sqcRYGate(q, 1.4326914391614087, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8191260289491393, 4);
  sqcRYGate(q, 2.736357566084445, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0091745888393553, 6);
  sqcRYGate(q, -0.07512888949495741, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.129862270015633, 6);
  sqcRYGate(q, -0.050594922599857206, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6195181870178232, 8);
  sqcRYGate(q, -2.4816436336091496, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.8219159169372778, 8);
  sqcRYGate(q, 0.7582247251874605, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.99490290209497, 10);
  sqcRYGate(q, 0.12160374784768196, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3342792237157157, 10);
  sqcRYGate(q, 0.32589502778026147, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6368349169349833, 12);
  sqcRYGate(q, -0.7084958680176509, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.0066391378072552, 12);
  sqcRYGate(q, -0.5748124398552467, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.6816867498503552, 14);
  sqcRYGate(q, -3.1179699044335005, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.169603784912775, 14);
  sqcRYGate(q, -2.146565010464313, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.7692430681979197, 1);
  sqcRYGate(q, 0.3744503554258021, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1323246186607103, 1);
  sqcRYGate(q, -2.521435635462017, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1024933662505442, 3);
  sqcRYGate(q, -1.939352217714582, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1120419944438704, 3);
  sqcRYGate(q, -0.8056669309517677, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8413509216658326, 5);
  sqcRYGate(q, 2.813044695722233, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6722517523163283, 5);
  sqcRYGate(q, -0.868086354365218, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2676365401969707, 7);
  sqcRYGate(q, 0.4803155911055205, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.08788948837541975, 7);
  sqcRYGate(q, 2.2212863416484607, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6582935480852354, 9);
  sqcRYGate(q, -0.14563421590039613, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.05232806179020422, 9);
  sqcRYGate(q, 0.18813214359329233, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.672569877291368, 11);
  sqcRYGate(q, 0.07245117157087311, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.9241688482016296, 11);
  sqcRYGate(q, 0.012292890859221845, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.332518907428076, 13);
  sqcRYGate(q, -0.8150799032926724, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.9184742500671872, 13);
  sqcRYGate(q, -0.018264212902227087, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.9505271435370994, 0);
  sqcRYGate(q, 1.1116291506910727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.003571893879283, 0);
  sqcRYGate(q, -0.8354394537663025, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7090688146014779, 2);
  sqcRYGate(q, -2.6990633693380652, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4952142235783574, 2);
  sqcRYGate(q, -2.952865392446004, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9699540342270634, 4);
  sqcRYGate(q, 2.6687017777897597, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4080512066215052, 4);
  sqcRYGate(q, 0.0006976235025953069, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.23034379262320628, 6);
  sqcRYGate(q, -2.8073360830956005, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0896341054582743, 6);
  sqcRYGate(q, 3.1295080678519316, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.483474341580998, 8);
  sqcRYGate(q, -2.23049965030652, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.089738548168314, 8);
  sqcRYGate(q, -2.8955164614551157, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.8377613900783396, 10);
  sqcRYGate(q, -0.9777852990946121, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.04457112118509965, 10);
  sqcRYGate(q, 3.1401989920013276, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.47467067411271824, 12);
  sqcRYGate(q, -2.3054997339292584, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.06986525569914104, 12);
  sqcRYGate(q, 3.0918128319880203, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.256355366345905, 14);
  sqcRYGate(q, 1.5943631584703823, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.014523730774391732, 14);
  sqcRYGate(q, -3.1245524910383358, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.734572938092228, 1);
  sqcRYGate(q, 1.6010453711203922, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.952985556013392, 1);
  sqcRYGate(q, -0.9174602419137436, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7373569997028246, 3);
  sqcRYGate(q, 2.773955410848676, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.09366263748554537, 3);
  sqcRYGate(q, 2.87376929973316, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8486668346832876, 5);
  sqcRYGate(q, -0.7313631691152921, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6577887673853824, 5);
  sqcRYGate(q, 0.807671929994652, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2318829565885585, 7);
  sqcRYGate(q, 0.451499169251208, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.19329272044085588, 7);
  sqcRYGate(q, -1.7394801846110448, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.117431995356096, 9);
  sqcRYGate(q, 0.9514872332358522, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.100577351935817, 9);
  sqcRYGate(q, -0.1511200878369321, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9243293952783156, 11);
  sqcRYGate(q, 2.693874584794114, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.2096122150011217, 11);
  sqcRYGate(q, 0.007453631409224393, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.68862082625819, 13);
  sqcRYGate(q, 2.015797302189718, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.336294864471767, 13);
  sqcRYGate(q, 2.3212679549015576, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.9421244983901333, 0);
  sqcRYGate(q, 0.2304898554490844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3523470380764145, 0);
  sqcRYGate(q, 0.118182677321927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1107465222131045, 2);
  sqcRYGate(q, -2.8945695120602037, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.150683061309068, 2);
  sqcRYGate(q, 2.1551690192552564, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.03799082764380479, 4);
  sqcRYGate(q, -2.8414994739676187, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.861747945626461, 4);
  sqcRYGate(q, -0.004191977566106925, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.346762960125555, 6);
  sqcRYGate(q, -2.9283729728110375, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.04149118300621968, 6);
  sqcRYGate(q, -3.102854791294365, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.54619607160331, 8);
  sqcRYGate(q, 1.315807112559451, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.8663412169913025, 8);
  sqcRYGate(q, -2.243965261561244, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.777936402388556, 10);
  sqcRYGate(q, 1.1730605316046314, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.40650647873559415, 10);
  sqcRYGate(q, -2.952245581931315, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.0719990399498394, 12);
  sqcRYGate(q, 2.2504379357113447, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.3813305021246651, 12);
  sqcRYGate(q, 0.6558359371114566, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.154196915026479, 14);
  sqcRYGate(q, -0.03295517258086811, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.6693950265347066, 14);
  sqcRYGate(q, 0.0781499075621861, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.6281863255667197, 1);
  sqcRYGate(q, 3.1251235868372644, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0012865450350144, 1);
  sqcRYGate(q, 2.363912687157743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6183166767458879, 3);
  sqcRYGate(q, -1.3853320434586687, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.117958966489357, 3);
  sqcRYGate(q, 1.7510617120078191, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5257840905626774, 5);
  sqcRYGate(q, 3.1208192890994737, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.891214087312897, 5);
  sqcRYGate(q, -2.227385450036037, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9721637150134166, 7);
  sqcRYGate(q, -2.6696724331148074, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.059463897884496575, 7);
  sqcRYGate(q, -0.3542881702571057, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6196332368163358, 9);
  sqcRYGate(q, -2.274284551505934, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0321103404906053, 9);
  sqcRYGate(q, -0.013770300993689737, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6662782550284954, 11);
  sqcRYGate(q, -1.663539392990322, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.036293226305009973, 11);
  sqcRYGate(q, 3.1053452629308715, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.2353454578934502, 13);
  sqcRYGate(q, -2.0657919384717363, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.023735427075643578, 13);
  sqcRYGate(q, 2.209331402368089, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.095340537777754, 0);
  sqcRYGate(q, -3.0369110034870177, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.949515456448555, 0);
  sqcRYGate(q, -2.921697854159419, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5719263870948164, 2);
  sqcRYGate(q, -1.3692196617785304, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.049488983881500026, 2);
  sqcRYGate(q, -0.8043012797710665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3881236710100495, 4);
  sqcRYGate(q, 2.5856264736762484, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6683657065014994, 4);
  sqcRYGate(q, -3.0640103353654227, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5489615807109933, 6);
  sqcRYGate(q, 1.9866667349941827, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3891167896039516, 6);
  sqcRYGate(q, 2.134390421150469, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4665919994341545, 8);
  sqcRYGate(q, -1.5401511610946563, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4443743980169161, 8);
  sqcRYGate(q, 1.1317990316482858, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.2791742708680114, 10);
  sqcRYGate(q, -0.10666430038162207, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.23040994907815107, 10);
  sqcRYGate(q, 0.4108714110690616, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1881213529241434, 12);
  sqcRYGate(q, -2.877208020591464, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.9055575383103752, 12);
  sqcRYGate(q, -1.9627578524756535, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.1936887059305086, 14);
  sqcRYGate(q, -2.7651972462878147, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.3923960668413886, 14);
  sqcRYGate(q, -3.089692306300761, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.1615685115073724, 1);
  sqcRYGate(q, -1.3995578752632696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0952181434218637, 1);
  sqcRYGate(q, 3.0937635406528057, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9305733216998051, 3);
  sqcRYGate(q, 2.579190063932838, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0590450308595982, 3);
  sqcRYGate(q, 0.6992040353395437, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.180750128903818, 5);
  sqcRYGate(q, -0.2613314015802528, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0790068444309413, 5);
  sqcRYGate(q, -0.049451253659723804, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3960439718462476, 7);
  sqcRYGate(q, 2.9993343728213766, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.0468403983404793, 7);
  sqcRYGate(q, 0.06375748102378065, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.1503564555733066, 9);
  sqcRYGate(q, -1.7913262759259776, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1247943062188877, 9);
  sqcRYGate(q, -0.017216095048302016, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2558714330492453, 11);
  sqcRYGate(q, -1.9175093642576453, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.102858994497493, 11);
  sqcRYGate(q, -0.06755823496131264, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.8796081898672654, 13);
  sqcRYGate(q, -0.29403185398236964, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.370671039299138, 13);
  sqcRYGate(q, -2.0112412375564004, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.9662012157064916, 0);
  sqcRYGate(q, 1.2771611186614171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.328430238295289, 0);
  sqcRYGate(q, 2.6320714725860133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5249726603686637, 2);
  sqcRYGate(q, 0.9304460508917316, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3663827851531565, 2);
  sqcRYGate(q, 2.8675529934700474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4817172641769083, 4);
  sqcRYGate(q, -1.3717847141498614, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.25319263101402967, 4);
  sqcRYGate(q, -3.119100360341273, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8629553468307483, 6);
  sqcRYGate(q, -0.963187109242072, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0475723454994306, 6);
  sqcRYGate(q, 1.7705051741846685, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7206533006275606, 8);
  sqcRYGate(q, -0.599628012729795, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.006657009532083729, 8);
  sqcRYGate(q, -2.758559160234224, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.537796531891428, 10);
  sqcRYGate(q, -1.6509223966654343, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.629911323066683, 10);
  sqcRYGate(q, 0.1230714784450075, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.19522280467855938, 12);
  sqcRYGate(q, 2.71299365821417, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.6713651997519865, 12);
  sqcRYGate(q, 2.1252724946818673, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.838093362273356, 14);
  sqcRYGate(q, 0.554415844781774, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.7194023841377464, 14);
  sqcRYGate(q, -0.2194696085582532, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.710030102092737, 1);
  sqcRYGate(q, 1.5011387615805474, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.089235003825387, 1);
  sqcRYGate(q, -3.1250601204742856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.386622194121381, 3);
  sqcRYGate(q, -1.2576838058190283, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.060622974557412, 3);
  sqcRYGate(q, 2.7137107566352827, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.442191633406881, 5);
  sqcRYGate(q, -2.478888536644716, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.121452294016088, 5);
  sqcRYGate(q, -0.0035115637070051164, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.602372167570705, 7);
  sqcRYGate(q, -0.9391772401623699, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.03365251269098657, 7);
  sqcRYGate(q, -0.012770106847025104, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.2021760481309576, 9);
  sqcRYGate(q, -0.5138771248457447, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.02174948941661142, 9);
  sqcRYGate(q, -3.0345898940029086, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9306347294580855, 11);
  sqcRYGate(q, -3.060773603713309, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.0938136108883376, 11);
  sqcRYGate(q, -0.028719582725424075, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.4891621200193408, 13);
  sqcRYGate(q, -0.447255038032119, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.045185001259244295, 13);
  sqcRYGate(q, 0.244114713524719, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.8084679351117732, 0);
  sqcRYGate(q, -0.7553148129741389, 1);
  sqcRYGate(q, -2.2583205526528305, 2);
  sqcRYGate(q, 2.946305690369308, 3);
  sqcRYGate(q, 1.8537645891756114, 4);
  sqcRYGate(q, -2.846951045029883, 5);
  sqcRYGate(q, -1.476884681318759, 6);
  sqcRYGate(q, -0.9206709861860389, 7);
  sqcRYGate(q, -0.014772424814943896, 8);
  sqcRYGate(q, 0.7326386069486563, 9);
  sqcRYGate(q, -0.010945230297414454, 10);
  sqcRYGate(q, -2.2508023371688566, 11);
  sqcRYGate(q, 1.0750269621964137, 12);
  sqcRYGate(q, -2.1703455191158993, 13);
  sqcRYGate(q, -1.7537507460695183, 14);
  sqcRYGate(q, 1.6623400529373282, 15);

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
