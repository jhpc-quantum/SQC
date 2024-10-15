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

  sqcRYGate(q, -1.2035533972273231, 0);
  sqcRZGate(q, -1.8399425314968398, 0);
  sqcRYGate(q, 2.229118152449526, 1);
  sqcRZGate(q, 1.6665707913649983, 1);
  sqcRYGate(q, -2.644620803368699, 2);
  sqcRZGate(q, 1.2156422758040442, 2);
  sqcRYGate(q, 2.716019969990332, 3);
  sqcRZGate(q, -2.785569880579553, 3);
  sqcRYGate(q, 3.14132283380666, 4);
  sqcRZGate(q, -2.6785846494624588, 4);
  sqcRYGate(q, 0.0040883062077057275, 5);
  sqcRZGate(q, 0.635108774320745, 5);
  sqcRYGate(q, 1.814309933449822, 6);
  sqcRZGate(q, -2.415778776962025, 6);
  sqcRYGate(q, -3.0234030834304453, 7);
  sqcRZGate(q, -0.8604164386130239, 7);
  sqcRYGate(q, 1.5703372949184349, 8);
  sqcRZGate(q, -0.17765414670949475, 8);
  sqcRYGate(q, 1.5710445289260777, 9);
  sqcRZGate(q, -0.9165562903426325, 9);
  sqcRYGate(q, 1.6798443925979942, 10);
  sqcRZGate(q, 1.5847123288533076, 10);
  sqcRYGate(q, 0.042651026434871175, 11);
  sqcRZGate(q, -2.6627225350250283, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5892408913266818, 0);
  sqcRZGate(q, -2.186131742227368, 0);
  sqcRYGate(q, -2.2065725165449477, 1);
  sqcRZGate(q, -2.0537158144286427, 1);
  sqcRYGate(q, -2.9551228758034114, 2);
  sqcRZGate(q, 1.200233926635006, 2);
  sqcRYGate(q, 0.11129900036949587, 3);
  sqcRZGate(q, -0.4701050460303741, 3);
  sqcRYGate(q, 0.0348993964849007, 4);
  sqcRZGate(q, -1.6547590904669527, 4);
  sqcRYGate(q, -3.1244638141141188, 5);
  sqcRZGate(q, -0.0924877929878294, 5);
  sqcRYGate(q, -3.141589303024319, 6);
  sqcRZGate(q, -0.4160767974915309, 6);
  sqcRYGate(q, -3.141590336123017, 7);
  sqcRZGate(q, 2.0799994745791337, 7);
  sqcRYGate(q, -6.437587393802628e-05, 8);
  sqcRZGate(q, 1.7477207921118414, 8);
  sqcRYGate(q, -3.141492829361926, 9);
  sqcRZGate(q, 2.2908400257936674, 9);
  sqcRYGate(q, 1.996049394241246, 10);
  sqcRZGate(q, 0.7554028132219797, 10);
  sqcRYGate(q, -2.082546795159509, 11);
  sqcRZGate(q, -0.14607729140487716, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.261060828125267, 0);
  sqcRZGate(q, -0.2205604907391887, 0);
  sqcRYGate(q, -1.8566305829747392, 1);
  sqcRZGate(q, 1.7265517779829063, 1);
  sqcRYGate(q, -3.121251278507347, 2);
  sqcRZGate(q, -0.2538118689284776, 2);
  sqcRYGate(q, -3.0926032051535937, 3);
  sqcRZGate(q, -0.06734286906643572, 3);
  sqcRYGate(q, -0.002560839890938568, 4);
  sqcRZGate(q, 2.9402423580017962, 4);
  sqcRYGate(q, -3.1380498827711465, 5);
  sqcRZGate(q, -1.2329891046048536, 5);
  sqcRYGate(q, 2.6982211779869094, 6);
  sqcRZGate(q, -0.5210494922601994, 6);
  sqcRYGate(q, 1.4492956775117358, 7);
  sqcRZGate(q, 2.3686679975494895, 7);
  sqcRYGate(q, 2.44240658040118, 8);
  sqcRZGate(q, -1.2808812277140567, 8);
  sqcRYGate(q, -0.00043282893430518504, 9);
  sqcRZGate(q, 0.1390796671524246, 9);
  sqcRYGate(q, -0.26789748858202866, 10);
  sqcRZGate(q, -0.7185234701204121, 10);
  sqcRYGate(q, -3.080349908025797, 11);
  sqcRZGate(q, -2.702305150089699, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.728829124872424, 0);
  sqcRZGate(q, 2.6154085746272195, 0);
  sqcRYGate(q, -1.3749945630182738, 1);
  sqcRZGate(q, 0.5196709278032372, 1);
  sqcRYGate(q, 0.3607091312133779, 2);
  sqcRZGate(q, 1.3850753923241894, 2);
  sqcRYGate(q, -2.9281705235298965, 3);
  sqcRZGate(q, -0.9358805075367691, 3);
  sqcRYGate(q, 1.5554189828601386, 4);
  sqcRZGate(q, 2.061643543935261, 4);
  sqcRYGate(q, -1.5636065816642741, 5);
  sqcRZGate(q, 1.5127814775912416, 5);
  sqcRYGate(q, -3.141506912967165, 6);
  sqcRZGate(q, 2.115310622060143, 6);
  sqcRYGate(q, 0.000125000108417872, 7);
  sqcRZGate(q, 2.4909453746398817, 7);
  sqcRYGate(q, -0.00033451410112661506, 8);
  sqcRZGate(q, -1.871214130922793, 8);
  sqcRYGate(q, -0.0002907797426718872, 9);
  sqcRZGate(q, -1.7757164411657351, 9);
  sqcRYGate(q, -0.5416661488966055, 10);
  sqcRZGate(q, -0.33382392930755334, 10);
  sqcRYGate(q, 0.15829327357233205, 11);
  sqcRZGate(q, 0.5230405171019163, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.7257463195580925, 0);
  sqcRZGate(q, 1.699865070880002, 0);
  sqcRYGate(q, 2.4665072313525243, 1);
  sqcRZGate(q, 0.7378905267371649, 1);
  sqcRYGate(q, -1.4565109061490924, 2);
  sqcRZGate(q, 0.0024437021236171407, 2);
  sqcRYGate(q, -1.5001299599571578, 3);
  sqcRZGate(q, 0.0992469390232733, 3);
  sqcRYGate(q, 3.1375227134448838, 4);
  sqcRZGate(q, 2.8311168735120598, 4);
  sqcRYGate(q, 3.1383453043059144, 5);
  sqcRZGate(q, -3.0701362635780187, 5);
  sqcRYGate(q, -1.5661144837335375, 6);
  sqcRZGate(q, -0.12537519077970904, 6);
  sqcRYGate(q, -3.0641941497093654, 7);
  sqcRZGate(q, 0.09739405052250792, 7);
  sqcRYGate(q, 3.0358420653944567, 8);
  sqcRZGate(q, 0.39737555862229074, 8);
  sqcRYGate(q, -2.3062756571780447, 9);
  sqcRZGate(q, -2.9854276299706686, 9);
  sqcRYGate(q, -1.8415514490683436, 10);
  sqcRZGate(q, 2.563877538865333, 10);
  sqcRYGate(q, -0.03219911146063162, 11);
  sqcRZGate(q, -2.8976851623624515, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.7488832462590421, 0);
  sqcRZGate(q, 1.9599708570149055, 0);
  sqcRYGate(q, 0.3127458756192496, 1);
  sqcRZGate(q, 2.5558998277268214, 1);
  sqcRYGate(q, -2.0944044155467703, 2);
  sqcRZGate(q, -2.2091464386857904, 2);
  sqcRYGate(q, -1.0700767720010516, 3);
  sqcRZGate(q, 0.32164838287188857, 3);
  sqcRYGate(q, 3.141531309412752, 4);
  sqcRZGate(q, -0.8101960589173443, 4);
  sqcRYGate(q, 3.133589032257583, 5);
  sqcRZGate(q, -3.1031406582016565, 5);
  sqcRYGate(q, 0.0013223390883387864, 6);
  sqcRZGate(q, 1.6662347557818666, 6);
  sqcRYGate(q, -3.1398818583286694, 7);
  sqcRZGate(q, -2.7255606781858868, 7);
  sqcRYGate(q, 3.1413442142391603, 8);
  sqcRZGate(q, 1.0841042598068764, 8);
  sqcRYGate(q, -3.141076286754459, 9);
  sqcRZGate(q, 1.5437409491034668, 9);
  sqcRYGate(q, -2.6954685052334426, 10);
  sqcRZGate(q, -1.6941018347753778, 10);
  sqcRYGate(q, 1.6004281961899576, 11);
  sqcRZGate(q, 1.680564639297371, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.9336326680339324, 0);
  sqcRZGate(q, -0.7630301563311921, 0);
  sqcRYGate(q, 2.046866702909089, 1);
  sqcRZGate(q, 2.786956833840116, 1);
  sqcRYGate(q, 0.4872220144502539, 2);
  sqcRZGate(q, -2.6685518793590215, 2);
  sqcRYGate(q, -3.1357431043813353, 3);
  sqcRZGate(q, 0.5198234916844742, 3);
  sqcRYGate(q, -0.027513830772635472, 4);
  sqcRZGate(q, -0.4840139565249073, 4);
  sqcRYGate(q, -3.11317395480433, 5);
  sqcRZGate(q, -0.817743983061806, 5);
  sqcRYGate(q, 0.01409277650732927, 6);
  sqcRZGate(q, 2.679131252182197, 6);
  sqcRYGate(q, -0.005590369635449146, 7);
  sqcRZGate(q, -0.46050267511411, 7);
  sqcRYGate(q, 2.2520558381639963, 8);
  sqcRZGate(q, -2.1404348864418736, 8);
  sqcRYGate(q, 0.639557069124535, 9);
  sqcRZGate(q, -0.2818148237495786, 9);
  sqcRYGate(q, -1.7015816162404491, 10);
  sqcRZGate(q, -0.9922675168747565, 10);
  sqcRYGate(q, -0.9733200435401175, 11);
  sqcRZGate(q, 2.97729967091683, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.4776779996723692, 0);
  sqcRZGate(q, 1.116012479612427, 0);
  sqcRYGate(q, -1.626066465137844, 1);
  sqcRZGate(q, 1.2769399983953573, 1);
  sqcRYGate(q, -1.541607092663929, 2);
  sqcRZGate(q, 2.9493419982423235, 2);
  sqcRYGate(q, -1.3948838349261312, 3);
  sqcRZGate(q, -0.005161807754647363, 3);
  sqcRYGate(q, 3.1411446648945733, 4);
  sqcRZGate(q, 0.5044342031414093, 4);
  sqcRYGate(q, 3.1405604190479255, 5);
  sqcRZGate(q, -1.1291503353553738, 5);
  sqcRYGate(q, -3.1400518259498225, 6);
  sqcRZGate(q, -1.5400421275214402, 6);
  sqcRYGate(q, 0.06880556959893068, 7);
  sqcRZGate(q, 0.4788064647078087, 7);
  sqcRYGate(q, -3.14008779001819, 8);
  sqcRZGate(q, -1.0888372891740046, 8);
  sqcRYGate(q, -3.1403995156546927, 9);
  sqcRZGate(q, -0.511488100958971, 9);
  sqcRYGate(q, 0.0013312280563626544, 10);
  sqcRZGate(q, -2.347282745925848, 10);
  sqcRYGate(q, -3.1395791447168975, 11);
  sqcRZGate(q, 1.5385536477185846, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.3560804122712352, 0);
  sqcRZGate(q, 1.5782564781488848, 0);
  sqcRYGate(q, -0.4169748095136878, 1);
  sqcRZGate(q, -1.3560597184211867, 1);
  sqcRYGate(q, 1.5438759082333775, 2);
  sqcRZGate(q, -1.2604031856881859, 2);
  sqcRYGate(q, 1.5451933677487224, 3);
  sqcRZGate(q, -2.918574191543823, 3);
  sqcRYGate(q, 0.0004977497793773318, 4);
  sqcRZGate(q, -0.8850387538889306, 4);
  sqcRYGate(q, -3.140949891768349, 5);
  sqcRZGate(q, 2.1920664294548966, 5);
  sqcRYGate(q, 3.134710282662552, 6);
  sqcRZGate(q, -1.4935113449477317, 6);
  sqcRYGate(q, -0.021805690009102374, 7);
  sqcRZGate(q, -2.6378004545601166, 7);
  sqcRYGate(q, 1.089749809997149, 8);
  sqcRZGate(q, 0.9013847954169377, 8);
  sqcRYGate(q, -0.9485167934807978, 9);
  sqcRZGate(q, -0.6020855237354298, 9);
  sqcRYGate(q, 0.3682105653070762, 10);
  sqcRZGate(q, 0.09256974021146472, 10);
  sqcRYGate(q, 0.41311262928987347, 11);
  sqcRZGate(q, -0.5039841627096417, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.668614583306048, 0);
  sqcRZGate(q, -2.6969071622286496, 0);
  sqcRYGate(q, 2.302502901293782, 1);
  sqcRZGate(q, -2.8134583648151446, 1);
  sqcRYGate(q, -1.5885187204968034, 2);
  sqcRZGate(q, 2.1160635860154775, 2);
  sqcRYGate(q, -1.4215579233265727, 3);
  sqcRZGate(q, -0.7829799244367307, 3);
  sqcRYGate(q, 0.01714517944378979, 4);
  sqcRZGate(q, 0.5220464683163694, 4);
  sqcRYGate(q, -0.03238500907315345, 5);
  sqcRZGate(q, -3.0655515523486363, 5);
  sqcRYGate(q, -2.0210198122276095, 6);
  sqcRZGate(q, 2.6963419927211207, 6);
  sqcRYGate(q, 0.6100466120679257, 7);
  sqcRZGate(q, 3.051581841196993, 7);
  sqcRYGate(q, 3.136915654830055, 8);
  sqcRZGate(q, -0.39653417606176244, 8);
  sqcRYGate(q, 0.059326545878020547, 9);
  sqcRZGate(q, 1.1991157858706112, 9);
  sqcRYGate(q, -2.2484236971267384, 10);
  sqcRZGate(q, 2.420839536723474, 10);
  sqcRYGate(q, -2.546199679440151, 11);
  sqcRZGate(q, 3.0062682838993053, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.41397344878769443, 0);
  sqcRZGate(q, -0.42669227950992933, 0);
  sqcRYGate(q, 1.1322149390823553, 1);
  sqcRZGate(q, 0.37078867125511117, 1);
  sqcRYGate(q, -0.39492401771695373, 2);
  sqcRZGate(q, -1.5838550126853121, 2);
  sqcRYGate(q, -3.091046570271678, 3);
  sqcRZGate(q, 2.8687618032308873, 3);
  sqcRYGate(q, 3.1328327330395602, 4);
  sqcRZGate(q, -0.5771407312848282, 4);
  sqcRYGate(q, -3.131810768404578, 5);
  sqcRZGate(q, -0.9529128775618531, 5);
  sqcRYGate(q, 3.1375663825762645, 6);
  sqcRZGate(q, -0.47524726956087804, 6);
  sqcRYGate(q, -3.1340047022908624, 7);
  sqcRZGate(q, -0.7914289095569238, 7);
  sqcRYGate(q, -3.1329372753237927, 8);
  sqcRZGate(q, -1.413407024230883, 8);
  sqcRYGate(q, 3.136780487265972, 9);
  sqcRZGate(q, 2.2906759045353966, 9);
  sqcRYGate(q, 0.5974712245676788, 10);
  sqcRZGate(q, -2.1326474087925926, 10);
  sqcRYGate(q, 0.8649310746941561, 11);
  sqcRZGate(q, 2.8016253067591417, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5912778978988835, 0);
  sqcRZGate(q, 1.874571520516005, 0);
  sqcRYGate(q, -1.6191985475766524, 1);
  sqcRZGate(q, -0.884547508859601, 1);
  sqcRYGate(q, 1.6223113953801465, 2);
  sqcRZGate(q, 0.1258685701562229, 2);
  sqcRYGate(q, 1.7254720300756814, 3);
  sqcRZGate(q, -1.6967523706806018, 3);
  sqcRYGate(q, 3.0108254357846933, 4);
  sqcRZGate(q, -0.27292722399934755, 4);
  sqcRYGate(q, 3.1050879553218818, 5);
  sqcRZGate(q, -0.44033551302538887, 5);
  sqcRYGate(q, -1.1150327043292156, 6);
  sqcRZGate(q, 2.806339129220488, 6);
  sqcRYGate(q, 1.0849485872362625, 7);
  sqcRZGate(q, -1.9559728500227735, 7);
  sqcRYGate(q, -3.1383458171478553, 8);
  sqcRZGate(q, -1.7162917051856397, 8);
  sqcRYGate(q, 0.06084900278684669, 9);
  sqcRZGate(q, 2.6380634101291687, 9);
  sqcRYGate(q, -2.2205897778250447, 10);
  sqcRZGate(q, 0.9545923180166097, 10);
  sqcRYGate(q, -1.4771383902125814, 11);
  sqcRZGate(q, -0.038513135705682267, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.145834147743793, 0);
  sqcRZGate(q, 1.239722864680898, 0);
  sqcRYGate(q, 0.5554880593253866, 1);
  sqcRZGate(q, -2.359539141762782, 1);
  sqcRYGate(q, -0.00031881466543318495, 2);
  sqcRZGate(q, -1.89706026391056, 2);
  sqcRYGate(q, -2.8045740387840348, 3);
  sqcRZGate(q, 2.536812418589114, 3);
  sqcRYGate(q, -3.1376317630680433, 4);
  sqcRZGate(q, -1.62787585725542, 4);
  sqcRYGate(q, 3.0988627830867905, 5);
  sqcRZGate(q, 1.2146118942996766, 5);
  sqcRYGate(q, 0.5861139313859987, 6);
  sqcRZGate(q, 2.5730422950495635, 6);
  sqcRYGate(q, 0.7490392457553122, 7);
  sqcRZGate(q, -2.041542467387279, 7);
  sqcRYGate(q, 0.00444436469033338, 8);
  sqcRZGate(q, 0.4961291511716439, 8);
  sqcRYGate(q, 0.003291322561863168, 9);
  sqcRZGate(q, 1.385563032706597, 9);
  sqcRYGate(q, 1.5105233824956619, 10);
  sqcRZGate(q, 0.4011378845857052, 10);
  sqcRYGate(q, 0.4323399719198094, 11);
  sqcRZGate(q, -1.6724407667415528, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.0026446152482844, 0);
  sqcRZGate(q, 1.498474809990678, 0);
  sqcRYGate(q, -3.0970454355294494, 1);
  sqcRZGate(q, 1.5763354732330161, 1);
  sqcRYGate(q, -0.9054114471855272, 2);
  sqcRZGate(q, 1.2790750592689812, 2);
  sqcRYGate(q, -1.7942056055307563, 3);
  sqcRZGate(q, -2.633139410095371, 3);
  sqcRYGate(q, 3.12653392764059, 4);
  sqcRZGate(q, 2.1094575970273706, 4);
  sqcRYGate(q, -3.1284072478864178, 5);
  sqcRZGate(q, 2.858983986829686, 5);
  sqcRYGate(q, 0.0238896667208954, 6);
  sqcRZGate(q, -2.560001863323642, 6);
  sqcRYGate(q, -3.119087315250821, 7);
  sqcRZGate(q, 1.0863916288923938, 7);
  sqcRYGate(q, 3.1415649277696764, 8);
  sqcRZGate(q, -2.9614015563794935, 8);
  sqcRYGate(q, -0.0003350229768637192, 9);
  sqcRZGate(q, 0.958987987995581, 9);
  sqcRYGate(q, 2.5811356205946527, 10);
  sqcRZGate(q, -1.186371095631646, 10);
  sqcRYGate(q, 1.8278887770764998, 11);
  sqcRZGate(q, 1.6303478511665226, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.2865558128433596, 0);
  sqcRZGate(q, 0.05736148913153653, 0);
  sqcRYGate(q, 1.2735880943879634, 1);
  sqcRZGate(q, -0.04939132044457904, 1);
  sqcRYGate(q, -2.9685656738266233, 2);
  sqcRZGate(q, -0.253347750533093, 2);
  sqcRYGate(q, 3.012101172088771, 3);
  sqcRZGate(q, 0.610181819034783, 3);
  sqcRYGate(q, 1.6616146014215485, 4);
  sqcRZGate(q, -2.274528029225497, 4);
  sqcRYGate(q, -1.6379424884831943, 5);
  sqcRZGate(q, -2.18833451891137, 5);
  sqcRYGate(q, 2.5494663216910176, 6);
  sqcRZGate(q, 2.213698091661564, 6);
  sqcRYGate(q, -0.7454175175394498, 7);
  sqcRZGate(q, 0.6901423146331273, 7);
  sqcRYGate(q, -3.1414563164858156, 8);
  sqcRZGate(q, -2.597231559261388, 8);
  sqcRYGate(q, 0.003303563423971312, 9);
  sqcRZGate(q, 2.1007464712634425, 9);
  sqcRYGate(q, 1.7925860790391015, 10);
  sqcRZGate(q, -2.298684899425073, 10);
  sqcRYGate(q, -0.582214408202729, 11);
  sqcRZGate(q, -1.1645255303306643, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.5922203941557749, 0);
  sqcRZGate(q, -0.7412621005788207, 0);
  sqcRYGate(q, 0.5804261390802168, 1);
  sqcRZGate(q, -0.6249835394413763, 1);
  sqcRYGate(q, -2.247220886318919, 2);
  sqcRZGate(q, 2.3010343837695992, 2);
  sqcRYGate(q, 0.8748158469492072, 3);
  sqcRZGate(q, 2.2759889900477237, 3);
  sqcRYGate(q, 2.3113018623389685, 4);
  sqcRZGate(q, 2.0628723631182817, 4);
  sqcRYGate(q, -0.9579491294131021, 5);
  sqcRZGate(q, -0.17070165125521253, 5);
  sqcRYGate(q, -2.06962532323264, 6);
  sqcRZGate(q, 0.9976055079836555, 6);
  sqcRYGate(q, -2.0855144248875552, 7);
  sqcRZGate(q, 1.0151305334413505, 7);
  sqcRYGate(q, -2.1010589134511832, 8);
  sqcRZGate(q, 0.9887052596905634, 8);
  sqcRYGate(q, -1.0458113609728772, 9);
  sqcRZGate(q, -2.149810488342042, 9);
  sqcRYGate(q, 0.29282288793661776, 10);
  sqcRZGate(q, -3.134870208915699, 10);
  sqcRYGate(q, -3.0854889581375975, 11);
  sqcRZGate(q, 3.129625240429741, 11);

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
