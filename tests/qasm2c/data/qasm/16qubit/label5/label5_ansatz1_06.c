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

  sqcRYGate(q, -3.0782746258734233, 0);
  sqcRZGate(q, -1.4477529825886544, 0);
  sqcRYGate(q, -1.5170797744208822, 1);
  sqcRZGate(q, 1.4261958424439551, 1);
  sqcRYGate(q, -3.0365090026975348, 2);
  sqcRZGate(q, -2.665455022054759, 2);
  sqcRYGate(q, 1.5655249869660397, 3);
  sqcRZGate(q, -1.5987879318084561, 3);
  sqcRYGate(q, 0.0006293105555239698, 4);
  sqcRZGate(q, 0.5541152987194087, 4);
  sqcRYGate(q, -3.127457277875923, 5);
  sqcRZGate(q, -1.4563179574428924, 5);
  sqcRYGate(q, 3.1205056925435253, 6);
  sqcRZGate(q, 2.915617077336173, 6);
  sqcRYGate(q, -1.8189281529425394, 7);
  sqcRZGate(q, 1.6218500629421098, 7);
  sqcRYGate(q, -1.5820669314657714, 8);
  sqcRZGate(q, 0.0378645431139768, 8);
  sqcRYGate(q, -1.7305986636001396, 9);
  sqcRZGate(q, -1.4791946282624435, 9);
  sqcRYGate(q, 0.02878240359301998, 10);
  sqcRZGate(q, 0.3356928386220055, 10);
  sqcRYGate(q, -3.092830493626994, 11);
  sqcRZGate(q, -1.833201206336878, 11);
  sqcRYGate(q, -1.4829638771498646, 12);
  sqcRZGate(q, 1.5486885312875684, 12);
  sqcRYGate(q, -2.0995504481191105, 13);
  sqcRZGate(q, 0.10352755142467186, 13);
  sqcRYGate(q, -3.135230266059003, 14);
  sqcRZGate(q, 2.5669851234563543, 14);
  sqcRYGate(q, 2.3404068355039445, 15);
  sqcRZGate(q, -2.0448282582187822, 15);
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
  sqcRYGate(q, -1.3905946514693621, 0);
  sqcRZGate(q, -1.318615855155434, 0);
  sqcRYGate(q, -0.4385811977794125, 1);
  sqcRZGate(q, -2.4079623402980372, 1);
  sqcRYGate(q, -1.5412128513843273, 2);
  sqcRZGate(q, 0.9237553021580737, 2);
  sqcRYGate(q, 3.01171333037937, 3);
  sqcRZGate(q, -2.8652536353563662, 3);
  sqcRYGate(q, 0.008313911068637658, 4);
  sqcRZGate(q, -1.612551068199859, 4);
  sqcRYGate(q, -1.5560199877175194, 5);
  sqcRZGate(q, 1.4336823002819399, 5);
  sqcRYGate(q, 3.101861064948473, 6);
  sqcRZGate(q, -1.280122469850256, 6);
  sqcRYGate(q, -1.559488053934576, 7);
  sqcRZGate(q, -1.5176412103168146, 7);
  sqcRYGate(q, -1.5643283777427552, 8);
  sqcRZGate(q, 1.1555354122842187, 8);
  sqcRYGate(q, 3.093576861293623, 9);
  sqcRZGate(q, 2.066094973647872, 9);
  sqcRYGate(q, -3.141443793162718, 10);
  sqcRZGate(q, -2.8612725636135377, 10);
  sqcRYGate(q, -1.4048078256480752, 11);
  sqcRZGate(q, -2.132079545336431, 11);
  sqcRYGate(q, -1.2230499131659531, 12);
  sqcRZGate(q, 0.7647584213344203, 12);
  sqcRYGate(q, 3.095884514845524, 13);
  sqcRZGate(q, -0.6152523736056338, 13);
  sqcRYGate(q, -0.0001438545691210142, 14);
  sqcRZGate(q, -2.13130439216011, 14);
  sqcRYGate(q, 1.984803247315611, 15);
  sqcRZGate(q, 0.4502183861436038, 15);
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
  sqcRYGate(q, 3.0248037838460826, 0);
  sqcRZGate(q, 1.858724015625489, 0);
  sqcRYGate(q, -1.0944899799857755, 1);
  sqcRZGate(q, 0.1298735351166794, 1);
  sqcRYGate(q, -1.6561595634933246, 2);
  sqcRZGate(q, -1.5682285657164987, 2);
  sqcRYGate(q, -0.700448217596562, 3);
  sqcRZGate(q, -2.8688827827448233, 3);
  sqcRYGate(q, -3.140712481022464, 4);
  sqcRZGate(q, 0.867995825306917, 4);
  sqcRYGate(q, -0.08883946423099509, 5);
  sqcRZGate(q, -2.9910715689525746, 5);
  sqcRYGate(q, -2.6679940816598124, 6);
  sqcRZGate(q, 0.17226643130633154, 6);
  sqcRYGate(q, 0.8802285616947563, 7);
  sqcRZGate(q, 3.132307449568658, 7);
  sqcRYGate(q, -1.344991870487628, 8);
  sqcRZGate(q, -1.6338920175685239, 8);
  sqcRYGate(q, 1.5142042345599087, 9);
  sqcRZGate(q, 1.564888091319271, 9);
  sqcRYGate(q, 2.972967608115312, 10);
  sqcRZGate(q, -1.4972937836172138, 10);
  sqcRYGate(q, 3.0076466779385136, 11);
  sqcRZGate(q, 0.5362970397565725, 11);
  sqcRYGate(q, 0.07971566805355997, 12);
  sqcRZGate(q, 0.9169562557269968, 12);
  sqcRYGate(q, -1.409717058778467, 13);
  sqcRZGate(q, 1.1291747131940548, 13);
  sqcRYGate(q, -1.558871218119469, 14);
  sqcRZGate(q, -1.5668041020125043, 14);
  sqcRYGate(q, 3.128737923821276, 15);
  sqcRZGate(q, -2.6699455328687276, 15);
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
  sqcRYGate(q, 0.5444342866849965, 0);
  sqcRZGate(q, -2.5922081741979155, 0);
  sqcRYGate(q, -2.0725394913926007, 1);
  sqcRZGate(q, -0.3614561338400621, 1);
  sqcRYGate(q, 1.5842113621761085, 2);
  sqcRZGate(q, 2.685010109861535, 2);
  sqcRYGate(q, -1.650086994608487, 3);
  sqcRZGate(q, 1.1867364840772572, 3);
  sqcRYGate(q, -3.139178867434584, 4);
  sqcRZGate(q, -0.777955254529502, 4);
  sqcRYGate(q, 2.987502013477228, 5);
  sqcRZGate(q, -1.2693890293166845, 5);
  sqcRYGate(q, 1.5769067432676134, 6);
  sqcRZGate(q, -1.8001924138074417, 6);
  sqcRYGate(q, 0.1800302064784152, 7);
  sqcRZGate(q, 3.135985914793569, 7);
  sqcRYGate(q, 1.938157757356569, 8);
  sqcRZGate(q, 0.24354884559335765, 8);
  sqcRYGate(q, 1.5699154969550753, 9);
  sqcRZGate(q, -3.1310327025440357, 9);
  sqcRYGate(q, -1.570918053766446, 10);
  sqcRZGate(q, -1.5692766541485719, 10);
  sqcRYGate(q, -0.1805775000076372, 11);
  sqcRZGate(q, -2.1680033073508493, 11);
  sqcRYGate(q, -1.6050914359553383, 12);
  sqcRZGate(q, 0.7648418741042404, 12);
  sqcRYGate(q, -1.7417165406964428, 13);
  sqcRZGate(q, 0.19058333480352552, 13);
  sqcRYGate(q, 1.5647118122316281, 14);
  sqcRZGate(q, -0.012099412804876832, 14);
  sqcRYGate(q, 0.009177418444775931, 15);
  sqcRZGate(q, -0.27179806894026004, 15);
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
  sqcRYGate(q, -0.11583416339421646, 0);
  sqcRZGate(q, -1.5489556039127164, 0);
  sqcRYGate(q, -2.9453286121039737, 1);
  sqcRZGate(q, 2.4145148312653526, 1);
  sqcRYGate(q, -3.000952689310531, 2);
  sqcRZGate(q, -0.317320243360477, 2);
  sqcRYGate(q, -0.30366149896087563, 3);
  sqcRZGate(q, 1.2653948579594472, 3);
  sqcRYGate(q, 1.5739477538849325, 4);
  sqcRZGate(q, 2.921727877278657, 4);
  sqcRYGate(q, 3.141333438963994, 5);
  sqcRZGate(q, -1.2681392406785328, 5);
  sqcRYGate(q, -1.1104451507288475, 6);
  sqcRZGate(q, 0.24001003316720768, 6);
  sqcRYGate(q, -1.5118459128790187, 7);
  sqcRZGate(q, 3.14124038689379, 7);
  sqcRYGate(q, 1.8103301598606558, 8);
  sqcRZGate(q, 1.568695904029031, 8);
  sqcRYGate(q, -1.5705209442345707, 9);
  sqcRZGate(q, -3.1412587465418125, 9);
  sqcRYGate(q, -1.0468722919532851, 10);
  sqcRZGate(q, 0.02096514618139978, 10);
  sqcRYGate(q, 0.00010449036694881549, 11);
  sqcRZGate(q, 1.010807566614936, 11);
  sqcRYGate(q, -1.5781688724884422, 12);
  sqcRZGate(q, 0.7986438340052526, 12);
  sqcRYGate(q, -2.861931901540219, 13);
  sqcRZGate(q, 0.0546627913299389, 13);
  sqcRYGate(q, -1.567647040484818, 14);
  sqcRZGate(q, 1.06501539318027, 14);
  sqcRYGate(q, -2.1306317733837012, 15);
  sqcRZGate(q, 1.478977444571795, 15);
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
  sqcRYGate(q, 0.16200687124619684, 0);
  sqcRZGate(q, 0.8849721087788177, 0);
  sqcRYGate(q, 0.5499116201288753, 1);
  sqcRZGate(q, -2.2704290488900356, 1);
  sqcRYGate(q, 1.814242672971178, 2);
  sqcRZGate(q, -2.9811182535606684, 2);
  sqcRYGate(q, 7.258298122434348e-05, 3);
  sqcRZGate(q, -1.8839179946788471, 3);
  sqcRYGate(q, -0.441693969696495, 4);
  sqcRZGate(q, 0.8732620551349405, 4);
  sqcRYGate(q, -0.44966001374578335, 5);
  sqcRZGate(q, -3.1414014527959613, 5);
  sqcRYGate(q, -3.139443949779789, 6);
  sqcRZGate(q, 2.8549403928907404, 6);
  sqcRYGate(q, 1.571109954957235, 7);
  sqcRZGate(q, 3.1401126929264738, 7);
  sqcRYGate(q, 1.906521301456233, 8);
  sqcRZGate(q, 2.841920730487889, 8);
  sqcRYGate(q, 1.570567049323037, 9);
  sqcRZGate(q, 3.096707692193396, 9);
  sqcRYGate(q, -2.152728766489175, 10);
  sqcRZGate(q, 0.003124872830888341, 10);
  sqcRYGate(q, -0.4191248544394962, 11);
  sqcRZGate(q, -3.1414919265798993, 11);
  sqcRYGate(q, 3.726469219872511e-05, 12);
  sqcRZGate(q, 0.06837068869432626, 12);
  sqcRYGate(q, 2.955895193501604, 13);
  sqcRZGate(q, 2.6607817067484727, 13);
  sqcRYGate(q, -3.120253329864482, 14);
  sqcRZGate(q, 2.753565783435559, 14);
  sqcRYGate(q, -1.5898223711168118, 15);
  sqcRZGate(q, -2.1615055443421918, 15);
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
  sqcRYGate(q, -1.7148806251853306, 0);
  sqcRZGate(q, -0.1688138660962509, 0);
  sqcRYGate(q, 0.5154119309357466, 1);
  sqcRZGate(q, -1.870277402530668, 1);
  sqcRYGate(q, 0.18167486451379553, 2);
  sqcRZGate(q, -0.09082575793235158, 2);
  sqcRYGate(q, -0.44801556311242885, 3);
  sqcRZGate(q, -2.618974632219229, 3);
  sqcRYGate(q, -1.5679200968333564, 4);
  sqcRZGate(q, -1.5730684290885646, 4);
  sqcRYGate(q, 1.5699209728982946, 5);
  sqcRZGate(q, -2.3954696053425395, 5);
  sqcRYGate(q, 1.5706360388315534, 6);
  sqcRZGate(q, -3.130459167906103, 6);
  sqcRYGate(q, 2.9411809284770034, 7);
  sqcRZGate(q, -0.3303648504217368, 7);
  sqcRYGate(q, -2.1336284622207, 8);
  sqcRZGate(q, -0.005538775703530996, 8);
  sqcRYGate(q, -3.1415500227760127, 9);
  sqcRZGate(q, 0.9671056946351948, 9);
  sqcRYGate(q, 2.9709581463081194, 10);
  sqcRZGate(q, -3.1407197884748888, 10);
  sqcRYGate(q, 0.6886819335853946, 11);
  sqcRZGate(q, -1.7774256956013468, 11);
  sqcRYGate(q, -1.5738659813448652, 12);
  sqcRZGate(q, 1.574914337500168, 12);
  sqcRYGate(q, 1.332614860897154, 13);
  sqcRZGate(q, 1.828300370261707, 13);
  sqcRYGate(q, -1.4642205459612005, 14);
  sqcRZGate(q, -2.7176489965740798, 14);
  sqcRYGate(q, 0.6514028305484947, 15);
  sqcRZGate(q, -2.4582134443467916, 15);
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
  sqcRYGate(q, -0.1013066334542603, 0);
  sqcRZGate(q, 2.7691179181709082, 0);
  sqcRYGate(q, 1.5918272691086843, 1);
  sqcRZGate(q, -0.11152664191036119, 1);
  sqcRYGate(q, -1.9089234870713616, 2);
  sqcRZGate(q, -0.04375082469706104, 2);
  sqcRYGate(q, 0.001500186263829862, 3);
  sqcRZGate(q, 2.6321273688253926, 3);
  sqcRYGate(q, -1.2888806894482943, 4);
  sqcRZGate(q, -0.5203734331059833, 4);
  sqcRYGate(q, -1.3481751519407954, 5);
  sqcRZGate(q, 1.7505723235583108, 5);
  sqcRYGate(q, -0.5187917137012237, 6);
  sqcRZGate(q, 1.1891578160288792, 6);
  sqcRYGate(q, -0.0049749692734692985, 7);
  sqcRZGate(q, -2.812786799254771, 7);
  sqcRYGate(q, -2.7525938386879267, 8);
  sqcRZGate(q, -2.649102388222438, 8);
  sqcRYGate(q, 3.140878097870656, 9);
  sqcRZGate(q, 3.031956060992451, 9);
  sqcRYGate(q, -1.0941632632920966, 10);
  sqcRZGate(q, -3.141566995428025, 10);
  sqcRYGate(q, -0.0005625973992966492, 11);
  sqcRZGate(q, 1.7773348047404998, 11);
  sqcRYGate(q, -2.227834477069459, 12);
  sqcRZGate(q, 0.016866807696485773, 12);
  sqcRYGate(q, -0.0004147176904432115, 13);
  sqcRZGate(q, -1.568779980197159, 13);
  sqcRYGate(q, 3.129484137755087, 14);
  sqcRZGate(q, 2.0046800150395088, 14);
  sqcRYGate(q, 1.8770577616763375, 15);
  sqcRZGate(q, 3.115290621749499, 15);
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
  sqcRYGate(q, 1.5438239925965598, 0);
  sqcRZGate(q, -2.597975205637461, 0);
  sqcRYGate(q, -3.138617778549179, 1);
  sqcRZGate(q, -0.09262980902342655, 1);
  sqcRYGate(q, -3.092443799720578, 2);
  sqcRZGate(q, -1.6138150552379138, 2);
  sqcRYGate(q, 2.647456883926606, 3);
  sqcRZGate(q, -1.5700800357672993, 3);
  sqcRYGate(q, 2.4565129164983765e-05, 4);
  sqcRZGate(q, 2.0914249577184485, 4);
  sqcRYGate(q, 3.141569581634141, 5);
  sqcRZGate(q, -2.760501866140497, 5);
  sqcRYGate(q, -0.0004872551483483534, 6);
  sqcRZGate(q, -2.7603759957483374, 6);
  sqcRYGate(q, -1.3949486519450636, 7);
  sqcRZGate(q, -1.5704448831365916, 7);
  sqcRYGate(q, 0.6225385915419097, 8);
  sqcRZGate(q, 1.1717448056582656, 8);
  sqcRYGate(q, -1.1615646276309944e-06, 9);
  sqcRZGate(q, 2.6904910308132095, 9);
  sqcRYGate(q, -1.741374023450735, 10);
  sqcRZGate(q, 1.5708556503667912, 10);
  sqcRYGate(q, -2.5908582874225314, 11);
  sqcRZGate(q, -1.570701144778936, 11);
  sqcRYGate(q, -3.1226608822209863, 12);
  sqcRZGate(q, 1.5878550806236895, 12);
  sqcRYGate(q, 3.1414699978647707, 13);
  sqcRZGate(q, -3.0296606090593228, 13);
  sqcRYGate(q, 1.5275661920787043, 14);
  sqcRZGate(q, -1.8032313314405863, 14);
  sqcRYGate(q, 2.1652669214386076, 15);
  sqcRZGate(q, 0.025659223938357827, 15);
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
  sqcRYGate(q, 1.1304926142710257, 0);
  sqcRZGate(q, -1.9413631084231049, 0);
  sqcRYGate(q, 1.8256936736929799, 1);
  sqcRZGate(q, -2.789272466988479, 1);
  sqcRYGate(q, -1.5709440983252358, 2);
  sqcRZGate(q, -1.1293933995111698, 2);
  sqcRYGate(q, 1.570701441578688, 3);
  sqcRZGate(q, -0.9511165299016171, 3);
  sqcRYGate(q, -1.5708327051753121, 4);
  sqcRZGate(q, 0.7522853745384968, 4);
  sqcRYGate(q, 0.8470895482167524, 5);
  sqcRZGate(q, -1.2521942230715117, 5);
  sqcRYGate(q, 1.5716624733951807, 6);
  sqcRZGate(q, 0.5321205074815394, 6);
  sqcRYGate(q, 1.5705619869015868, 7);
  sqcRZGate(q, -0.949316657852621, 7);
  sqcRYGate(q, -1.5706545489982475, 8);
  sqcRZGate(q, 0.427213056355698, 8);
  sqcRYGate(q, -1.5708977075465846, 9);
  sqcRZGate(q, 2.1885789831249554, 9);
  sqcRYGate(q, 1.5706895316388996, 10);
  sqcRZGate(q, 2.0041148194729628, 10);
  sqcRYGate(q, -1.5707999424567989, 11);
  sqcRZGate(q, 0.6178984986667988, 11);
  sqcRYGate(q, 1.5705468517487748, 12);
  sqcRZGate(q, 1.1741130803643152, 12);
  sqcRYGate(q, -1.5703577926585028, 13);
  sqcRZGate(q, 2.188267555573847, 13);
  sqcRYGate(q, -0.0347411760211287, 14);
  sqcRZGate(q, 1.9131415566425114, 14);
  sqcRYGate(q, 3.0303043235386458, 15);
  sqcRZGate(q, -0.9125793395544264, 15);

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
