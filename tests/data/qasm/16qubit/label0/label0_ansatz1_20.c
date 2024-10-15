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

  sqcRYGate(q, 1.3941140191211134, 0);
  sqcRZGate(q, 0.18063163758339673, 0);
  sqcRYGate(q, 3.1372238541082855, 1);
  sqcRZGate(q, 1.2262237075021607, 1);
  sqcRYGate(q, -3.016539371924478, 2);
  sqcRZGate(q, 0.04432575778049231, 2);
  sqcRYGate(q, 2.1618893297589112, 3);
  sqcRZGate(q, -1.9265020494801082, 3);
  sqcRYGate(q, -0.5320599093426136, 4);
  sqcRZGate(q, 0.11490539176657258, 4);
  sqcRYGate(q, -2.500399675535824, 5);
  sqcRZGate(q, -1.0053239273896026, 5);
  sqcRYGate(q, -2.9408153317930656, 6);
  sqcRZGate(q, -0.13980483389219941, 6);
  sqcRYGate(q, 3.1415653512574564, 7);
  sqcRZGate(q, 2.9168671471205325, 7);
  sqcRYGate(q, -2.315257368731013, 8);
  sqcRZGate(q, 2.8107732254645152, 8);
  sqcRYGate(q, 2.4038868587182174, 9);
  sqcRZGate(q, 2.0300317084898207, 9);
  sqcRYGate(q, 0.0003321498134765122, 10);
  sqcRZGate(q, 1.9575927807754967, 10);
  sqcRYGate(q, 2.941051584853875, 11);
  sqcRZGate(q, 2.0535825655757636, 11);
  sqcRYGate(q, 3.106440038359265, 12);
  sqcRZGate(q, -0.2713149308823903, 12);
  sqcRYGate(q, -2.3722254910077294, 13);
  sqcRZGate(q, -1.6764720434912643, 13);
  sqcRYGate(q, -2.7976276095713444, 14);
  sqcRZGate(q, -3.034433188073366, 14);
  sqcRYGate(q, -2.5355187613264922, 15);
  sqcRZGate(q, 0.6026153101781384, 15);
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
  sqcRYGate(q, -1.1374931245048607, 0);
  sqcRZGate(q, -2.7358525449448323, 0);
  sqcRYGate(q, -3.117478075883864, 1);
  sqcRZGate(q, 0.6371684619559318, 1);
  sqcRYGate(q, -2.414788743531362, 2);
  sqcRZGate(q, 0.01010650198470043, 2);
  sqcRYGate(q, -0.06789591995780886, 3);
  sqcRZGate(q, 2.1672780747267657, 3);
  sqcRYGate(q, -2.431591250100446, 4);
  sqcRZGate(q, -0.3181217368689709, 4);
  sqcRYGate(q, -2.6851430353076693, 5);
  sqcRZGate(q, 0.3864877334007731, 5);
  sqcRYGate(q, -0.18558468046179824, 6);
  sqcRZGate(q, -2.3510745528274324, 6);
  sqcRYGate(q, 2.696477828920708, 7);
  sqcRZGate(q, 2.621013664609344, 7);
  sqcRYGate(q, 0.5309377428772987, 8);
  sqcRZGate(q, 0.12671950189560843, 8);
  sqcRYGate(q, -0.7861674529236202, 9);
  sqcRZGate(q, 0.549399721331525, 9);
  sqcRYGate(q, 3.136543225494383, 10);
  sqcRZGate(q, 1.700092745640572, 10);
  sqcRYGate(q, 0.18610976369912358, 11);
  sqcRZGate(q, -1.2020493682346336, 11);
  sqcRYGate(q, 0.04738196453750734, 12);
  sqcRZGate(q, -2.7853163878297145, 12);
  sqcRYGate(q, 1.9881934180149416, 13);
  sqcRZGate(q, 2.904513519080106, 13);
  sqcRYGate(q, -1.8940334527754397, 14);
  sqcRZGate(q, 1.102667860323102, 14);
  sqcRYGate(q, -1.8072453095274268, 15);
  sqcRZGate(q, -0.4345950576677743, 15);
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
  sqcRYGate(q, 1.1180975040431804, 0);
  sqcRZGate(q, 1.1574775618777673, 0);
  sqcRYGate(q, 2.1785570486177175, 1);
  sqcRZGate(q, -1.1359279237895823, 1);
  sqcRYGate(q, -2.9863899602901576, 2);
  sqcRZGate(q, 2.5352398578872717, 2);
  sqcRYGate(q, 3.131506285894363, 3);
  sqcRZGate(q, 2.0554097778219242, 3);
  sqcRYGate(q, -0.4356795979131307, 4);
  sqcRZGate(q, 1.0818305852547165, 4);
  sqcRYGate(q, -0.679065723241595, 5);
  sqcRZGate(q, -2.3747964177387564, 5);
  sqcRYGate(q, 1.9782237762085837, 6);
  sqcRZGate(q, 0.008018323679496404, 6);
  sqcRYGate(q, 2.707549505573308, 7);
  sqcRZGate(q, 1.044052802860903, 7);
  sqcRYGate(q, 2.335468730405011, 8);
  sqcRZGate(q, -3.1088485959138836, 8);
  sqcRYGate(q, -1.9619148328496676, 9);
  sqcRZGate(q, 1.4105181852417088, 9);
  sqcRYGate(q, 2.5202328302696766, 10);
  sqcRZGate(q, -0.09988143392670956, 10);
  sqcRYGate(q, 0.2419985168411571, 11);
  sqcRZGate(q, 2.5123524745599086, 11);
  sqcRYGate(q, 0.0057658183171235685, 12);
  sqcRZGate(q, -2.22655601399822, 12);
  sqcRYGate(q, -1.4237005944919083, 13);
  sqcRZGate(q, -2.897445005614883, 13);
  sqcRYGate(q, -0.1624256194885092, 14);
  sqcRZGate(q, 0.021155871969657628, 14);
  sqcRYGate(q, 2.506401088149908, 15);
  sqcRZGate(q, 0.5318524131959315, 15);
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
  sqcRYGate(q, 2.36360361554368, 0);
  sqcRZGate(q, -1.3707747822823864, 0);
  sqcRYGate(q, 1.1375681045152708, 1);
  sqcRZGate(q, 1.0058623525735495, 1);
  sqcRYGate(q, 0.44451912417733036, 2);
  sqcRZGate(q, -2.7924476138383034, 2);
  sqcRYGate(q, -1.969643110428712, 3);
  sqcRZGate(q, -2.6939912170025613, 3);
  sqcRYGate(q, 0.3998297677888252, 4);
  sqcRZGate(q, -2.1553284950390816, 4);
  sqcRYGate(q, -3.13649582320194, 5);
  sqcRZGate(q, -2.156474985179468, 5);
  sqcRYGate(q, -2.700359161388539, 6);
  sqcRZGate(q, 3.1057039661685524, 6);
  sqcRYGate(q, -2.9530112282134815, 7);
  sqcRZGate(q, 0.6192542897348997, 7);
  sqcRYGate(q, -3.122470570235408, 8);
  sqcRZGate(q, 2.6178949693209077, 8);
  sqcRYGate(q, 3.1413000085585283, 9);
  sqcRZGate(q, 1.905608164795521, 9);
  sqcRYGate(q, -1.6918884160790801, 10);
  sqcRZGate(q, -2.2171922925833316, 10);
  sqcRYGate(q, -0.12343032667254139, 11);
  sqcRZGate(q, -0.7461157148744587, 11);
  sqcRYGate(q, 0.0011700564238944996, 12);
  sqcRZGate(q, -0.2659510995403513, 12);
  sqcRYGate(q, -1.1347911021049049, 13);
  sqcRZGate(q, -1.4491981237256146, 13);
  sqcRYGate(q, -2.5876296356357096, 14);
  sqcRZGate(q, -0.5380856487027215, 14);
  sqcRYGate(q, -1.072462671103128, 15);
  sqcRZGate(q, 1.7558384818302673, 15);
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
  sqcRYGate(q, 3.115026125592603, 0);
  sqcRZGate(q, 1.2618662444204896, 0);
  sqcRYGate(q, 0.08546112590454412, 1);
  sqcRZGate(q, 2.2444052120736653, 1);
  sqcRYGate(q, 2.437652752867942, 2);
  sqcRZGate(q, 0.06220460540547665, 2);
  sqcRYGate(q, 3.140352904099659, 3);
  sqcRZGate(q, 0.8215302305161581, 3);
  sqcRYGate(q, 2.9466863847211573, 4);
  sqcRZGate(q, 2.097351193196695, 4);
  sqcRYGate(q, 1.7153206703800623, 5);
  sqcRZGate(q, -0.19712610041155984, 5);
  sqcRYGate(q, -1.6446144542589591, 6);
  sqcRZGate(q, -1.8155215771877746, 6);
  sqcRYGate(q, 1.245535227961174, 7);
  sqcRZGate(q, -0.9181628049919272, 7);
  sqcRYGate(q, -2.415219132015724, 8);
  sqcRZGate(q, 1.133530517340751, 8);
  sqcRYGate(q, 0.0008865709393646171, 9);
  sqcRZGate(q, -2.0463883663017572, 9);
  sqcRYGate(q, -2.5928277003722764, 10);
  sqcRZGate(q, -2.0083644793605053, 10);
  sqcRYGate(q, 2.9102578089575784, 11);
  sqcRZGate(q, 2.7662438379335885, 11);
  sqcRYGate(q, 3.0899894009552917, 12);
  sqcRZGate(q, -0.07528447678648681, 12);
  sqcRYGate(q, 2.281758249523408, 13);
  sqcRZGate(q, 1.4608415238045602, 13);
  sqcRYGate(q, -1.6665485457846791, 14);
  sqcRZGate(q, 0.3167086444453764, 14);
  sqcRYGate(q, -2.258452638171307, 15);
  sqcRZGate(q, -1.2915667346218287, 15);
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
  sqcRYGate(q, -2.1984502523732785, 0);
  sqcRZGate(q, 2.121314814585573, 0);
  sqcRYGate(q, -0.17617322413158518, 1);
  sqcRZGate(q, 1.9725421066410527, 1);
  sqcRYGate(q, 2.763704110065427, 2);
  sqcRZGate(q, 0.08495681148814059, 2);
  sqcRYGate(q, -3.1394158159690013, 3);
  sqcRZGate(q, 0.6451505854639548, 3);
  sqcRYGate(q, 1.2176124700398665, 4);
  sqcRZGate(q, -3.1276391963129417, 4);
  sqcRYGate(q, 2.3583713348497812, 5);
  sqcRZGate(q, -1.0543019280372095, 5);
  sqcRYGate(q, 0.293243424556531, 6);
  sqcRZGate(q, 1.0226292644359045, 6);
  sqcRYGate(q, -0.15309630596064228, 7);
  sqcRZGate(q, 0.605671170425925, 7);
  sqcRYGate(q, -0.49292031896879607, 8);
  sqcRZGate(q, -2.8796557644361256, 8);
  sqcRYGate(q, 3.0287841127607935, 9);
  sqcRZGate(q, -0.5614727021729905, 9);
  sqcRYGate(q, 2.1563393392621926, 10);
  sqcRZGate(q, -2.7695370208121135, 10);
  sqcRYGate(q, 2.9968635036716975, 11);
  sqcRZGate(q, 0.4962937937939075, 11);
  sqcRYGate(q, -3.1282096505381425, 12);
  sqcRZGate(q, 0.41880764541898774, 12);
  sqcRYGate(q, 3.0309476073160893, 13);
  sqcRZGate(q, 2.1921366262309308, 13);
  sqcRYGate(q, -0.49472309541626086, 14);
  sqcRZGate(q, -2.286563672441609, 14);
  sqcRYGate(q, 0.8066944278979342, 15);
  sqcRZGate(q, -0.3195263029669293, 15);
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
  sqcRYGate(q, -0.28825276191717425, 0);
  sqcRZGate(q, 1.2714175973540849, 0);
  sqcRYGate(q, -0.6831859444874837, 1);
  sqcRZGate(q, 1.7930311306085676, 1);
  sqcRYGate(q, -0.6386759368602393, 2);
  sqcRZGate(q, 2.8693612924256677, 2);
  sqcRYGate(q, 0.005487398813498245, 3);
  sqcRZGate(q, -2.216191472819365, 3);
  sqcRYGate(q, 0.3799084587356748, 4);
  sqcRZGate(q, 0.3063582457712757, 4);
  sqcRYGate(q, -2.6288074082344473, 5);
  sqcRZGate(q, -0.2135660519683151, 5);
  sqcRYGate(q, 2.9776451036855387, 6);
  sqcRZGate(q, -1.6347320021762486, 6);
  sqcRYGate(q, 0.5596370544666538, 7);
  sqcRZGate(q, 2.6265687238923032, 7);
  sqcRYGate(q, -3.137314571269897, 8);
  sqcRZGate(q, 2.32138628339438, 8);
  sqcRYGate(q, 0.004622452085777711, 9);
  sqcRZGate(q, -1.511568329408696, 9);
  sqcRYGate(q, -2.147351955488591, 10);
  sqcRZGate(q, -1.0971226254235258, 10);
  sqcRYGate(q, -0.24330690920312073, 11);
  sqcRZGate(q, -1.4146220179391296, 11);
  sqcRYGate(q, 0.0859688763275912, 12);
  sqcRZGate(q, -1.892698912695029, 12);
  sqcRYGate(q, -1.5339538341186367, 13);
  sqcRZGate(q, -1.348113315357528, 13);
  sqcRYGate(q, 1.295388593999581, 14);
  sqcRZGate(q, 2.08434668698861, 14);
  sqcRYGate(q, 1.0167191541822826, 15);
  sqcRZGate(q, 0.3853229892726162, 15);
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
  sqcRYGate(q, -1.5382425613047923, 0);
  sqcRZGate(q, -1.7350457323250126, 0);
  sqcRYGate(q, 2.1484094574517294, 1);
  sqcRZGate(q, -0.4490919276421206, 1);
  sqcRYGate(q, -0.3491158976472315, 2);
  sqcRZGate(q, -0.45556048594332504, 2);
  sqcRYGate(q, 2.3483117610991258, 3);
  sqcRZGate(q, -1.0164295500122469, 3);
  sqcRYGate(q, 0.24180865782054559, 4);
  sqcRZGate(q, -0.9345541909254375, 4);
  sqcRYGate(q, 0.44299193859075414, 5);
  sqcRZGate(q, 0.4348879221889851, 5);
  sqcRYGate(q, -3.0176520829527043, 6);
  sqcRZGate(q, -0.1873960097027112, 6);
  sqcRYGate(q, -1.0984339203707831, 7);
  sqcRZGate(q, -1.2785055022111458, 7);
  sqcRYGate(q, 3.017748888490874, 8);
  sqcRZGate(q, -1.2748221567264428, 8);
  sqcRYGate(q, 0.4041094919485814, 9);
  sqcRZGate(q, -1.0456751590659925, 9);
  sqcRYGate(q, -2.093867392001247, 10);
  sqcRZGate(q, -3.0662829813523613, 10);
  sqcRYGate(q, 1.9340055344644935, 11);
  sqcRZGate(q, -1.1601850037414583, 11);
  sqcRYGate(q, 1.8457596314683884, 12);
  sqcRZGate(q, 2.7793052494943193, 12);
  sqcRYGate(q, 0.6654817609499295, 13);
  sqcRZGate(q, 2.0274084602336364, 13);
  sqcRYGate(q, 1.8318469657799823, 14);
  sqcRZGate(q, -0.013146937576319571, 14);
  sqcRYGate(q, 2.9484680730303086, 15);
  sqcRZGate(q, 2.262224597899352, 15);
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
  sqcRYGate(q, 2.841982738566862, 0);
  sqcRZGate(q, -1.4295625374029512, 0);
  sqcRYGate(q, -1.7609695293396852, 1);
  sqcRZGate(q, -1.0536291277255943, 1);
  sqcRYGate(q, 3.117513573185626, 2);
  sqcRZGate(q, -0.5286577524566187, 2);
  sqcRYGate(q, 0.007853999471708154, 3);
  sqcRZGate(q, -2.1444582371337506, 3);
  sqcRYGate(q, 0.11195307851274981, 4);
  sqcRZGate(q, 1.5003220826364911, 4);
  sqcRYGate(q, -0.7114621184909239, 5);
  sqcRZGate(q, 0.6987852880116776, 5);
  sqcRYGate(q, 2.868515110370398, 6);
  sqcRZGate(q, 1.4310762977081417, 6);
  sqcRYGate(q, 1.5566739607844768, 7);
  sqcRZGate(q, -1.333845214629986, 7);
  sqcRYGate(q, -0.001316192803428424, 8);
  sqcRZGate(q, 1.095067556860484, 8);
  sqcRYGate(q, 0.0028695749689946477, 9);
  sqcRZGate(q, -2.0318831493948437, 9);
  sqcRYGate(q, -0.23252901182560623, 10);
  sqcRZGate(q, -1.6481852919252358, 10);
  sqcRYGate(q, -3.1414388968117546, 11);
  sqcRZGate(q, -0.30981932126156586, 11);
  sqcRYGate(q, 3.140437664830611, 12);
  sqcRZGate(q, 0.6810909125111584, 12);
  sqcRYGate(q, 0.030159707323385906, 13);
  sqcRZGate(q, -0.24869410495415262, 13);
  sqcRYGate(q, 1.086641965660582, 14);
  sqcRZGate(q, 2.1387484332971693, 14);
  sqcRYGate(q, -2.9601903707190256, 15);
  sqcRZGate(q, 0.8971573552815243, 15);
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
  sqcRYGate(q, 2.14288821202938, 0);
  sqcRZGate(q, 0.497424589489733, 0);
  sqcRYGate(q, -1.2557321757972986, 1);
  sqcRZGate(q, 0.9665625784160649, 1);
  sqcRYGate(q, -1.7315726031718741, 2);
  sqcRZGate(q, -2.7413773932166117, 2);
  sqcRYGate(q, 1.0230385233742514, 3);
  sqcRZGate(q, 1.9433390524671625, 3);
  sqcRYGate(q, -0.04635179777630377, 4);
  sqcRZGate(q, 1.696754321692937, 4);
  sqcRYGate(q, -0.1554131458301391, 5);
  sqcRZGate(q, 2.2498329052271684, 5);
  sqcRYGate(q, -3.1133230352419172, 6);
  sqcRZGate(q, -2.0638247336118334, 6);
  sqcRYGate(q, 1.7437536686336008, 7);
  sqcRZGate(q, 2.8235188689476076, 7);
  sqcRYGate(q, -2.1967806141965998, 8);
  sqcRZGate(q, -0.5890883127271663, 8);
  sqcRYGate(q, 1.1950542609354482, 9);
  sqcRZGate(q, 2.366388210116148, 9);
  sqcRYGate(q, 1.0451480300653666, 10);
  sqcRZGate(q, -2.082785492163547, 10);
  sqcRYGate(q, 2.0109109631381665, 11);
  sqcRZGate(q, -1.141641372522595, 11);
  sqcRYGate(q, -0.6801808453283869, 12);
  sqcRZGate(q, -0.3509176788769155, 12);
  sqcRYGate(q, -1.1787697046844539, 13);
  sqcRZGate(q, 2.7549385249617497, 13);
  sqcRYGate(q, -1.507631383923881, 14);
  sqcRZGate(q, -0.2708733626822646, 14);
  sqcRYGate(q, 1.3111397250459151, 15);
  sqcRZGate(q, -3.133510295051756, 15);
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
  sqcRYGate(q, -1.3444424995845181, 0);
  sqcRZGate(q, -0.5067871237087498, 0);
  sqcRYGate(q, 2.6926472307868123, 1);
  sqcRZGate(q, 3.082305179871105, 1);
  sqcRYGate(q, 0.423666988859686, 2);
  sqcRZGate(q, 0.034689715353851014, 2);
  sqcRYGate(q, -3.139860381910266, 3);
  sqcRZGate(q, 1.660045907135335, 3);
  sqcRYGate(q, -2.7769546561087206, 4);
  sqcRZGate(q, 2.5938615782622265, 4);
  sqcRYGate(q, 0.9900162477305292, 5);
  sqcRZGate(q, 1.2404377402045421, 5);
  sqcRYGate(q, -0.3211319513887805, 6);
  sqcRZGate(q, -0.4596974753971362, 6);
  sqcRYGate(q, 2.68441547859101, 7);
  sqcRZGate(q, -0.584991033048921, 7);
  sqcRYGate(q, 3.1324457583915346, 8);
  sqcRZGate(q, -2.669387350069777, 8);
  sqcRYGate(q, 0.0047045912528158595, 9);
  sqcRZGate(q, -0.9460395252819831, 9);
  sqcRYGate(q, -2.9682637805368945, 10);
  sqcRZGate(q, -2.6428131840141487, 10);
  sqcRYGate(q, -0.008853834692319587, 11);
  sqcRZGate(q, -0.206734208319574, 11);
  sqcRYGate(q, -0.00822790946927654, 12);
  sqcRZGate(q, 2.5045865803177034, 12);
  sqcRYGate(q, -1.6824700950865872, 13);
  sqcRZGate(q, 2.789825295711335, 13);
  sqcRYGate(q, -2.525775042445337, 14);
  sqcRZGate(q, 2.708444559013216, 14);
  sqcRYGate(q, 1.6423863896893245, 15);
  sqcRZGate(q, 1.1694148736090337, 15);
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
  sqcRYGate(q, 2.0732147115528585, 0);
  sqcRZGate(q, 0.8894917523262542, 0);
  sqcRYGate(q, -3.064176229427231, 1);
  sqcRZGate(q, -0.5612773156820638, 1);
  sqcRYGate(q, 1.280125419354326, 2);
  sqcRZGate(q, -2.7693863927574993, 2);
  sqcRYGate(q, 0.007626438734240043, 3);
  sqcRZGate(q, 2.244492304093167, 3);
  sqcRYGate(q, -2.9323840843236537, 4);
  sqcRZGate(q, 1.957128999737586, 4);
  sqcRYGate(q, -3.097436210798815, 5);
  sqcRZGate(q, -2.2240603518638897, 5);
  sqcRYGate(q, -0.056737335142340584, 6);
  sqcRZGate(q, 0.4009752827250983, 6);
  sqcRYGate(q, -0.14879214154505496, 7);
  sqcRZGate(q, -2.537339773530375, 7);
  sqcRYGate(q, 1.0150511043483545, 8);
  sqcRZGate(q, -0.5508310953726409, 8);
  sqcRYGate(q, -0.12979492975803514, 9);
  sqcRZGate(q, 1.521509452310243, 9);
  sqcRYGate(q, -0.06362257735174204, 10);
  sqcRZGate(q, -1.7959335874180278, 10);
  sqcRYGate(q, 2.462525635516103, 11);
  sqcRZGate(q, -0.2552318863152694, 11);
  sqcRYGate(q, -1.1868299089469103, 12);
  sqcRZGate(q, -1.2412500483251794, 12);
  sqcRYGate(q, -0.7649211829698537, 13);
  sqcRZGate(q, 1.7299193500427803, 13);
  sqcRYGate(q, 3.133792488266953, 14);
  sqcRZGate(q, 3.063268661769198, 14);
  sqcRYGate(q, 0.7524990267646966, 15);
  sqcRZGate(q, 1.513404632989834, 15);
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
  sqcRYGate(q, -0.3423635592323318, 0);
  sqcRZGate(q, 0.8202867365665332, 0);
  sqcRYGate(q, 1.5288662738492977, 1);
  sqcRZGate(q, 2.7178188984509974, 1);
  sqcRYGate(q, 2.6512987776937234, 2);
  sqcRZGate(q, -1.2656057644806058, 2);
  sqcRYGate(q, 0.7995172414506344, 3);
  sqcRZGate(q, 2.214879268141277, 3);
  sqcRYGate(q, -2.7474185729832445, 4);
  sqcRZGate(q, 1.2732222456111302, 4);
  sqcRYGate(q, 0.12029324929467908, 5);
  sqcRZGate(q, -1.883530439101805, 5);
  sqcRYGate(q, -1.5750634956116931, 6);
  sqcRZGate(q, 3.1054623952636504, 6);
  sqcRYGate(q, 2.5035757578276003, 7);
  sqcRZGate(q, -1.9025338339905267, 7);
  sqcRYGate(q, 3.1340471536054535, 8);
  sqcRZGate(q, 2.7626674435595477, 8);
  sqcRYGate(q, 2.8743991910552817, 9);
  sqcRZGate(q, -2.9114527611896457, 9);
  sqcRYGate(q, 2.776193024619172, 10);
  sqcRZGate(q, -2.9405102416487745, 10);
  sqcRYGate(q, -3.136797549999054, 11);
  sqcRZGate(q, -2.431658202142955, 11);
  sqcRYGate(q, 2.4520561816847883, 12);
  sqcRZGate(q, -3.070890442066061, 12);
  sqcRYGate(q, 2.622911218019231, 13);
  sqcRZGate(q, 1.9427213353576598, 13);
  sqcRYGate(q, 2.553599102100259, 14);
  sqcRZGate(q, 2.3113929940023454, 14);
  sqcRYGate(q, -1.2897358285347782, 15);
  sqcRZGate(q, 1.9465414894539779, 15);
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
  sqcRYGate(q, 0.8082346831205793, 0);
  sqcRZGate(q, -2.4264947125841934, 0);
  sqcRYGate(q, 0.22538739379597408, 1);
  sqcRZGate(q, -0.44383486141479894, 1);
  sqcRYGate(q, 3.1394766440143353, 2);
  sqcRZGate(q, -0.35964874685139053, 2);
  sqcRYGate(q, 0.006292608968459845, 3);
  sqcRZGate(q, -2.2355513677893217, 3);
  sqcRYGate(q, 3.141016624324076, 4);
  sqcRZGate(q, 3.12689745080664, 4);
  sqcRYGate(q, 3.076452573253595, 5);
  sqcRZGate(q, 1.6925087190220465, 5);
  sqcRYGate(q, 1.0449194088675462, 6);
  sqcRZGate(q, -3.0832958445627434, 6);
  sqcRYGate(q, 1.6859502978591285, 7);
  sqcRZGate(q, 0.06015733973164485, 7);
  sqcRYGate(q, 0.05466862171587561, 8);
  sqcRZGate(q, -1.6107823934894556, 8);
  sqcRYGate(q, -2.922186939739643, 9);
  sqcRZGate(q, 1.9329674266280372, 9);
  sqcRYGate(q, 2.6323085159634494, 10);
  sqcRZGate(q, 2.4097813013779765, 10);
  sqcRYGate(q, 3.1353918792476145, 11);
  sqcRZGate(q, 1.3437015534773886, 11);
  sqcRYGate(q, -0.9135674698672785, 12);
  sqcRZGate(q, -3.0675391783457586, 12);
  sqcRYGate(q, -3.0981149226174205, 13);
  sqcRZGate(q, -2.729549605431414, 13);
  sqcRYGate(q, -1.5538511056831892, 14);
  sqcRZGate(q, -1.657214948900031, 14);
  sqcRYGate(q, -1.287632439603347, 15);
  sqcRZGate(q, -0.2705525522903053, 15);
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
  sqcRYGate(q, -1.1139514310837646, 0);
  sqcRZGate(q, -2.869204743313539, 0);
  sqcRYGate(q, -0.6210434051637573, 1);
  sqcRZGate(q, -2.2712104589761584, 1);
  sqcRYGate(q, 0.1730117183433737, 2);
  sqcRZGate(q, 1.5424276344880168, 2);
  sqcRYGate(q, -0.8083735992151633, 3);
  sqcRZGate(q, 0.4758006604509202, 3);
  sqcRYGate(q, -0.34258660630283605, 4);
  sqcRZGate(q, 2.289937790004211, 4);
  sqcRYGate(q, -3.083762896763761, 5);
  sqcRZGate(q, 0.43841145674940657, 5);
  sqcRYGate(q, 0.9625156890819841, 6);
  sqcRZGate(q, 1.3805068747082911, 6);
  sqcRYGate(q, 3.1238779657703475, 7);
  sqcRZGate(q, -0.8713999002040012, 7);
  sqcRYGate(q, -3.13998022126818, 8);
  sqcRZGate(q, 2.5616608070323235, 8);
  sqcRYGate(q, -3.0259075517415184, 9);
  sqcRZGate(q, 2.364436647413775, 9);
  sqcRYGate(q, 0.2028420183582993, 10);
  sqcRZGate(q, -1.2750880911640092, 10);
  sqcRYGate(q, -0.7198841643354408, 11);
  sqcRZGate(q, 2.078164431281227, 11);
  sqcRYGate(q, -0.16442972557372085, 12);
  sqcRZGate(q, 3.026892983446855, 12);
  sqcRYGate(q, 0.09633415193559891, 13);
  sqcRZGate(q, 0.1133012392866687, 13);
  sqcRYGate(q, -1.9411185978616423, 14);
  sqcRZGate(q, -0.2676264926832541, 14);
  sqcRYGate(q, 2.138880996092152, 15);
  sqcRZGate(q, 0.3450707907091344, 15);
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
  sqcRYGate(q, 2.841045455209207, 0);
  sqcRZGate(q, 0.6737064319938906, 0);
  sqcRYGate(q, -1.9631955004862425, 1);
  sqcRZGate(q, 0.09849496518155983, 1);
  sqcRYGate(q, 3.128301849634008, 2);
  sqcRZGate(q, 2.4812568501113113, 2);
  sqcRYGate(q, -2.6024331524421, 3);
  sqcRZGate(q, -2.14178471650226, 3);
  sqcRYGate(q, -0.4382249322229757, 4);
  sqcRZGate(q, -0.7929492935797182, 4);
  sqcRYGate(q, -0.07925354654908288, 5);
  sqcRZGate(q, 1.819190606937234, 5);
  sqcRYGate(q, -0.16760969035809128, 6);
  sqcRZGate(q, -1.590276828946544, 6);
  sqcRYGate(q, 0.7327695386362931, 7);
  sqcRZGate(q, -2.2878267783154134, 7);
  sqcRYGate(q, -0.3627642068866281, 8);
  sqcRZGate(q, -1.671923179563195, 8);
  sqcRYGate(q, -0.17236210821039785, 9);
  sqcRZGate(q, -2.0382636537681895, 9);
  sqcRYGate(q, 1.3678007208727756, 10);
  sqcRZGate(q, -0.24405623272780363, 10);
  sqcRYGate(q, 3.136052337887773, 11);
  sqcRZGate(q, 2.002968087829697, 11);
  sqcRYGate(q, -3.0023120248820954, 12);
  sqcRZGate(q, -1.4102484163328677, 12);
  sqcRYGate(q, 3.0281055880113756, 13);
  sqcRZGate(q, 1.8123818469910695, 13);
  sqcRYGate(q, 0.5480161422888896, 14);
  sqcRZGate(q, 2.8897871255626835, 14);
  sqcRYGate(q, 0.06622810315886454, 15);
  sqcRZGate(q, -2.941038086792656, 15);
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
  sqcRYGate(q, 1.0422855329880112, 0);
  sqcRZGate(q, 0.9245609395273239, 0);
  sqcRYGate(q, 1.0780980437330179, 1);
  sqcRZGate(q, 1.0089146359424408, 1);
  sqcRYGate(q, -2.8095793901864825, 2);
  sqcRZGate(q, -0.4796915188632207, 2);
  sqcRYGate(q, 0.0017544140912946204, 3);
  sqcRZGate(q, -0.540373695777688, 3);
  sqcRYGate(q, -0.18626516075156263, 4);
  sqcRZGate(q, -1.039434850222907, 4);
  sqcRYGate(q, 0.19564113898599783, 5);
  sqcRZGate(q, 0.2681926586686453, 5);
  sqcRYGate(q, -1.4788141272778912, 6);
  sqcRZGate(q, 2.720171684542936, 6);
  sqcRYGate(q, 1.9340753368713781, 7);
  sqcRZGate(q, 0.03355759827957685, 7);
  sqcRYGate(q, -0.0015329898843203793, 8);
  sqcRZGate(q, 1.437695348538079, 8);
  sqcRYGate(q, -0.00538208800682207, 9);
  sqcRZGate(q, 2.679495548271068, 9);
  sqcRYGate(q, 2.981473181890287, 10);
  sqcRZGate(q, -0.004014191654716133, 10);
  sqcRYGate(q, 1.2745718872563643, 11);
  sqcRZGate(q, -1.6346032662615095, 11);
  sqcRYGate(q, -1.0001026422571309, 12);
  sqcRZGate(q, 2.1415325852155354, 12);
  sqcRYGate(q, 0.04509709526851147, 13);
  sqcRZGate(q, 3.0856640524222256, 13);
  sqcRYGate(q, -1.3055506481008106, 14);
  sqcRZGate(q, -2.579249813976599, 14);
  sqcRYGate(q, -0.9210465331269981, 15);
  sqcRZGate(q, 1.3738425923528101, 15);
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
  sqcRYGate(q, -2.0197841423636493, 0);
  sqcRZGate(q, -1.0207169327147234, 0);
  sqcRYGate(q, -2.705325586204502, 1);
  sqcRZGate(q, 2.684941933256303, 1);
  sqcRYGate(q, -0.8687533607142397, 2);
  sqcRZGate(q, -2.3833566403031923, 2);
  sqcRYGate(q, -0.13261573249624645, 3);
  sqcRZGate(q, -2.244512831163826, 3);
  sqcRYGate(q, 0.3252924708216837, 4);
  sqcRZGate(q, 1.898041475225936, 4);
  sqcRYGate(q, -0.027444063061911626, 5);
  sqcRZGate(q, -0.8464716544349208, 5);
  sqcRYGate(q, 3.086886814114917, 6);
  sqcRZGate(q, -1.654472671137402, 6);
  sqcRYGate(q, -1.6000581673630387, 7);
  sqcRZGate(q, 0.06052819752610983, 7);
  sqcRYGate(q, 0.021525886883460462, 8);
  sqcRZGate(q, 0.13789833500206977, 8);
  sqcRYGate(q, -2.159988227073887, 9);
  sqcRZGate(q, 2.706341476684833, 9);
  sqcRYGate(q, -0.5714459913610845, 10);
  sqcRZGate(q, 2.0603970180259727, 10);
  sqcRYGate(q, -0.007099662652279903, 11);
  sqcRZGate(q, 1.4950723916947943, 11);
  sqcRYGate(q, 2.8357896219542846, 12);
  sqcRZGate(q, 0.004506580959769824, 12);
  sqcRYGate(q, -1.8220728586580188, 13);
  sqcRZGate(q, 0.41357938943109435, 13);
  sqcRYGate(q, 2.7765610245142125, 14);
  sqcRZGate(q, -1.0894349392975515, 14);
  sqcRYGate(q, -1.0612122549050866, 15);
  sqcRZGate(q, -1.5027733671246644, 15);
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
  sqcRYGate(q, 0.5196674735356586, 0);
  sqcRZGate(q, -1.4030322675117888, 0);
  sqcRYGate(q, 0.41517904010927625, 1);
  sqcRZGate(q, 1.613786439977769, 1);
  sqcRYGate(q, -0.004445258170700406, 2);
  sqcRZGate(q, 0.6226747995046412, 2);
  sqcRYGate(q, 3.1223075394705333, 3);
  sqcRZGate(q, -0.15955516048589488, 3);
  sqcRYGate(q, -2.832280442704023, 4);
  sqcRZGate(q, -3.1385900947674967, 4);
  sqcRYGate(q, -2.9934816692913824, 5);
  sqcRZGate(q, -1.0265557613238465, 5);
  sqcRYGate(q, 2.326520579818497, 6);
  sqcRZGate(q, -0.7429627589237473, 6);
  sqcRYGate(q, 1.9012987125854903, 7);
  sqcRZGate(q, -0.2753702263289974, 7);
  sqcRYGate(q, 3.105503816740222, 8);
  sqcRZGate(q, -0.06044516828075878, 8);
  sqcRYGate(q, 1.2969670532804713, 9);
  sqcRZGate(q, 3.1287781909126577, 9);
  sqcRYGate(q, -0.14551423593194368, 10);
  sqcRZGate(q, -0.42676857342352653, 10);
  sqcRYGate(q, 1.4175442989115714, 11);
  sqcRZGate(q, 1.249731342681876, 11);
  sqcRYGate(q, 1.7051470301324074, 12);
  sqcRZGate(q, -3.0722444250027507, 12);
  sqcRYGate(q, -3.0083167435015508, 13);
  sqcRZGate(q, -1.0546400677789751, 13);
  sqcRYGate(q, -2.8026058066149013, 14);
  sqcRZGate(q, -2.7370509720835208, 14);
  sqcRYGate(q, -0.022315335821286197, 15);
  sqcRZGate(q, -2.913733457344913, 15);
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
  sqcRYGate(q, 1.5529431557443842, 0);
  sqcRZGate(q, 0.9296932731504174, 0);
  sqcRYGate(q, -2.7498763700614646, 1);
  sqcRZGate(q, -2.0548880171978663, 1);
  sqcRYGate(q, -0.019483999054561885, 2);
  sqcRZGate(q, 2.776437570706311, 2);
  sqcRYGate(q, 2.3636572291514506, 3);
  sqcRZGate(q, -0.021691065879152482, 3);
  sqcRYGate(q, 0.42421884653491215, 4);
  sqcRZGate(q, -0.574332529624674, 4);
  sqcRYGate(q, 3.0991837041297785, 5);
  sqcRZGate(q, 2.672522043351742, 5);
  sqcRYGate(q, -0.9886254985938342, 6);
  sqcRZGate(q, 2.7880725059501037, 6);
  sqcRYGate(q, -2.8299055816897947, 7);
  sqcRZGate(q, -1.1969338005833459, 7);
  sqcRYGate(q, 0.03990576163018301, 8);
  sqcRZGate(q, 0.14358215875420124, 8);
  sqcRYGate(q, 1.9973038739590674, 9);
  sqcRZGate(q, -0.0007317613016999402, 9);
  sqcRYGate(q, -0.0032502003010527474, 10);
  sqcRZGate(q, -0.9269780479467994, 10);
  sqcRYGate(q, 0.14337192672214538, 11);
  sqcRZGate(q, -1.078518794490768, 11);
  sqcRYGate(q, 1.4962586440945094, 12);
  sqcRZGate(q, -2.788241272216723, 12);
  sqcRYGate(q, 1.3375823446410728, 13);
  sqcRZGate(q, 1.696658947668196, 13);
  sqcRYGate(q, 2.0772048061327992, 14);
  sqcRZGate(q, -1.9552884652320597, 14);
  sqcRYGate(q, 1.9940496706021635, 15);
  sqcRZGate(q, -0.1428320342282484, 15);
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
  sqcRYGate(q, 2.9449895670331685, 0);
  sqcRZGate(q, 1.6036051149896935, 0);
  sqcRYGate(q, 3.097145203847957, 1);
  sqcRZGate(q, -0.14266447035025198, 1);
  sqcRYGate(q, 3.127051313149302, 2);
  sqcRZGate(q, -1.5009810723016388, 2);
  sqcRYGate(q, 1.9588572513923648, 3);
  sqcRZGate(q, -3.135473162166028, 3);
  sqcRYGate(q, 0.028267582687386363, 4);
  sqcRZGate(q, 2.2852475845676175, 4);
  sqcRYGate(q, -2.4910835821950177, 5);
  sqcRZGate(q, -3.0439427505894647, 5);
  sqcRYGate(q, -1.5766062734703168, 6);
  sqcRZGate(q, -2.532584371813066, 6);
  sqcRYGate(q, -3.1270614586434045, 7);
  sqcRZGate(q, 2.0331022429109256, 7);
  sqcRYGate(q, 0.01885584641441715, 8);
  sqcRZGate(q, -0.6307925794726987, 8);
  sqcRYGate(q, -1.8455118943645488, 9);
  sqcRZGate(q, -0.24040850322611007, 9);
  sqcRYGate(q, 0.06940565155167226, 10);
  sqcRZGate(q, 2.9483988409778625, 10);
  sqcRYGate(q, 3.0770147980520477, 11);
  sqcRZGate(q, 0.4909666373537245, 11);
  sqcRYGate(q, -0.02325720510722586, 12);
  sqcRZGate(q, -0.3195003801607949, 12);
  sqcRYGate(q, -2.977688244904324, 13);
  sqcRZGate(q, 1.6022919214213207, 13);
  sqcRYGate(q, -0.3657895244066127, 14);
  sqcRZGate(q, 0.43867493110136824, 14);
  sqcRYGate(q, 2.8441240809620787, 15);
  sqcRZGate(q, 0.2424294250455974, 15);
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
  sqcRYGate(q, -2.4022248597317994, 0);
  sqcRZGate(q, -2.9743488988361615, 0);
  sqcRYGate(q, -2.7234522145533466, 1);
  sqcRZGate(q, 1.197662646128414, 1);
  sqcRYGate(q, -0.0013336308312336233, 2);
  sqcRZGate(q, 0.7490878073313212, 2);
  sqcRYGate(q, 0.78255265766329, 3);
  sqcRZGate(q, -0.0045607122086028795, 3);
  sqcRYGate(q, 0.001702171809825331, 4);
  sqcRZGate(q, -2.23289508590682, 4);
  sqcRYGate(q, -0.09666882672236188, 5);
  sqcRZGate(q, -3.1017491948643303, 5);
  sqcRYGate(q, -3.112051477012388, 6);
  sqcRZGate(q, -1.8780000612431629, 6);
  sqcRYGate(q, -0.5278445566638341, 7);
  sqcRZGate(q, 2.700552364530588, 7);
  sqcRYGate(q, 0.3206651777817502, 8);
  sqcRZGate(q, 0.5065615647707107, 8);
  sqcRYGate(q, 2.1573967617388634, 9);
  sqcRZGate(q, 2.145467414662193, 9);
  sqcRYGate(q, 0.2655894505433931, 10);
  sqcRZGate(q, -1.0633400471627101, 10);
  sqcRYGate(q, 0.5177192034006524, 11);
  sqcRZGate(q, 1.3402589156265858, 11);
  sqcRYGate(q, 1.325400522854614, 12);
  sqcRZGate(q, -1.5148511237935, 12);
  sqcRYGate(q, -1.9731841580478129, 13);
  sqcRZGate(q, 1.2126248820243604, 13);
  sqcRYGate(q, -0.025700544712048717, 14);
  sqcRZGate(q, 0.9678631479595114, 14);
  sqcRYGate(q, -2.430131763163285, 15);
  sqcRZGate(q, 0.188655324962963, 15);
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
  sqcRYGate(q, 2.1474380004049243, 0);
  sqcRZGate(q, 0.5174118242863461, 0);
  sqcRYGate(q, -3.128672376357061, 1);
  sqcRZGate(q, -2.580153781138299, 1);
  sqcRYGate(q, 3.0412575517496547, 2);
  sqcRZGate(q, 0.5865295310311778, 2);
  sqcRYGate(q, -1.200308541723872, 3);
  sqcRZGate(q, 2.421972212125195, 3);
  sqcRYGate(q, -2.944435620317271, 4);
  sqcRZGate(q, -0.20803986259590174, 4);
  sqcRYGate(q, 0.8685843342210742, 5);
  sqcRZGate(q, 0.32429041820763077, 5);
  sqcRYGate(q, 0.7049970229323597, 6);
  sqcRZGate(q, 2.3959942346770635, 6);
  sqcRYGate(q, -0.004050565738911909, 7);
  sqcRZGate(q, -2.8775324972043568, 7);
  sqcRYGate(q, -3.1068969640803923, 8);
  sqcRZGate(q, 1.2471419749021797, 8);
  sqcRYGate(q, 0.023474950522365926, 9);
  sqcRZGate(q, -0.831268856030265, 9);
  sqcRYGate(q, 0.025944592276741396, 10);
  sqcRZGate(q, 0.6555888334539909, 10);
  sqcRYGate(q, 3.081052887886243, 11);
  sqcRZGate(q, 1.9329316194330357, 11);
  sqcRYGate(q, -3.1266042405407752, 12);
  sqcRZGate(q, 2.6454949728317416, 12);
  sqcRYGate(q, -0.4043130557163123, 13);
  sqcRZGate(q, 2.7489892031789935, 13);
  sqcRYGate(q, 0.1834178839209617, 14);
  sqcRZGate(q, 0.4680915927407518, 14);
  sqcRYGate(q, 2.031842610058664, 15);
  sqcRZGate(q, 1.5739696609055693, 15);
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
  sqcRYGate(q, -2.6694974121229085, 0);
  sqcRZGate(q, -1.2672613576951557, 0);
  sqcRYGate(q, 2.093049187195839, 1);
  sqcRZGate(q, 0.5252093901401508, 1);
  sqcRYGate(q, 0.13674907367360145, 2);
  sqcRZGate(q, 1.0092605799664165, 2);
  sqcRYGate(q, 3.027695467459263, 3);
  sqcRZGate(q, -0.7451099489382623, 3);
  sqcRYGate(q, 2.09966369463125, 4);
  sqcRZGate(q, -2.9689255131064134, 4);
  sqcRYGate(q, 1.5008653198871393, 5);
  sqcRZGate(q, 3.0307241416275583, 5);
  sqcRYGate(q, 0.2555865889819211, 6);
  sqcRZGate(q, 0.6900747222693163, 6);
  sqcRYGate(q, -1.0951054571233527, 7);
  sqcRZGate(q, 1.4269528817678454, 7);
  sqcRYGate(q, -0.14422992435467855, 8);
  sqcRZGate(q, 0.27607756588267124, 8);
  sqcRYGate(q, 2.945868983148002, 9);
  sqcRZGate(q, -0.33405888573402187, 9);
  sqcRYGate(q, -2.6967262047296967, 10);
  sqcRZGate(q, -0.24922606451150234, 10);
  sqcRYGate(q, -1.1079594125682064, 11);
  sqcRZGate(q, -0.5428954661384972, 11);
  sqcRYGate(q, -3.0462465847983746, 12);
  sqcRZGate(q, -3.1341359462407965, 12);
  sqcRYGate(q, -0.6550574654021122, 13);
  sqcRZGate(q, -2.7702071050275414, 13);
  sqcRYGate(q, -1.7095946869306218, 14);
  sqcRZGate(q, -2.9970012343876076, 14);
  sqcRYGate(q, 2.3504417502946353, 15);
  sqcRZGate(q, 2.6912837295126515, 15);

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
