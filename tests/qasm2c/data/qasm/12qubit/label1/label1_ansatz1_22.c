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

  sqcRYGate(q, -0.014174800190683179, 0);
  sqcRZGate(q, -0.0697231853224265, 0);
  sqcRYGate(q, -1.6850636822990988, 1);
  sqcRZGate(q, 1.8147090930645173, 1);
  sqcRYGate(q, -1.582889268305273, 2);
  sqcRZGate(q, -2.7779474214360547, 2);
  sqcRYGate(q, -0.012062669834558037, 3);
  sqcRZGate(q, -2.0238979479453523, 3);
  sqcRYGate(q, -2.5477866310674613, 4);
  sqcRZGate(q, -0.49163136127285406, 4);
  sqcRYGate(q, -0.23204503308592805, 5);
  sqcRZGate(q, 1.6156927016546279, 5);
  sqcRYGate(q, -0.019904254743106975, 6);
  sqcRZGate(q, -0.08825906983982891, 6);
  sqcRYGate(q, -0.9495927673585826, 7);
  sqcRZGate(q, -1.3677925996191362, 7);
  sqcRYGate(q, -2.1648450425883388, 8);
  sqcRZGate(q, 2.812072483548361, 8);
  sqcRYGate(q, -2.70515755405417, 9);
  sqcRZGate(q, -2.688905083085873, 9);
  sqcRYGate(q, -2.518303341539393, 10);
  sqcRZGate(q, 2.8641890939570636, 10);
  sqcRYGate(q, -0.44619853871189574, 11);
  sqcRZGate(q, -0.2792320969649591, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.08007830875761648, 0);
  sqcRZGate(q, 0.42990269841938383, 0);
  sqcRYGate(q, -1.3209451199076925, 1);
  sqcRZGate(q, 2.743464416641005, 1);
  sqcRYGate(q, -1.1656820016111002, 2);
  sqcRZGate(q, 1.6134852032094589, 2);
  sqcRYGate(q, 0.008041111224280598, 3);
  sqcRZGate(q, -0.7642064076739841, 3);
  sqcRYGate(q, 1.472884336824825, 4);
  sqcRZGate(q, 1.2609382243360692, 4);
  sqcRYGate(q, 0.1211750068439912, 5);
  sqcRZGate(q, -0.06378157114427994, 5);
  sqcRYGate(q, -2.039096162310612, 6);
  sqcRZGate(q, -2.9498154113267065, 6);
  sqcRYGate(q, -0.35594333121906807, 7);
  sqcRZGate(q, -0.5146666175946102, 7);
  sqcRYGate(q, 0.0046195928493028395, 8);
  sqcRZGate(q, -0.45646859041078947, 8);
  sqcRYGate(q, 3.1035277615925456, 9);
  sqcRZGate(q, -0.25803979311902214, 9);
  sqcRYGate(q, -0.5552538156106257, 10);
  sqcRZGate(q, 0.043971418336399816, 10);
  sqcRYGate(q, 2.6356972964545133, 11);
  sqcRZGate(q, 1.0602968751547768, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.0730555207666106, 0);
  sqcRZGate(q, -2.5727245961093206, 0);
  sqcRYGate(q, 1.6975174006773048, 1);
  sqcRZGate(q, -1.174930197690866, 1);
  sqcRYGate(q, -1.6267319364575654, 2);
  sqcRZGate(q, 1.3718005537094606, 2);
  sqcRYGate(q, 2.8456749415826077, 3);
  sqcRZGate(q, 0.6224247401948659, 3);
  sqcRYGate(q, -1.4122562850516838, 4);
  sqcRZGate(q, -1.8889556374275736, 4);
  sqcRYGate(q, -0.06352122122149226, 5);
  sqcRZGate(q, 2.130566453546998, 5);
  sqcRYGate(q, -1.7411155138096834, 6);
  sqcRZGate(q, -0.800725449662175, 6);
  sqcRYGate(q, 1.347029977546996, 7);
  sqcRZGate(q, -1.9587764669417134, 7);
  sqcRYGate(q, -2.6838008441404972, 8);
  sqcRZGate(q, 0.43950529511791925, 8);
  sqcRYGate(q, -2.1106862947548963, 9);
  sqcRZGate(q, -2.1298834174014076, 9);
  sqcRYGate(q, -0.5849887265227887, 10);
  sqcRZGate(q, -2.3949687214594624, 10);
  sqcRYGate(q, -2.9479002940491554, 11);
  sqcRZGate(q, -1.1728326122001813, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.32752751454484996, 0);
  sqcRZGate(q, 2.588204015454427, 0);
  sqcRYGate(q, -2.7923414188906848, 1);
  sqcRZGate(q, -2.420449621802826, 1);
  sqcRYGate(q, -2.8606348592566033, 2);
  sqcRZGate(q, 2.309422327526879, 2);
  sqcRYGate(q, 2.0178276186218813, 3);
  sqcRZGate(q, -2.8868017869539697, 3);
  sqcRYGate(q, 0.6112806900247001, 4);
  sqcRZGate(q, 3.1040264417307775, 4);
  sqcRYGate(q, -2.7798721305266816, 5);
  sqcRZGate(q, 0.6070108718243219, 5);
  sqcRYGate(q, 2.0709866028238055, 6);
  sqcRZGate(q, -1.8245967659117257, 6);
  sqcRYGate(q, 0.9713241779900237, 7);
  sqcRZGate(q, -0.39409527275238265, 7);
  sqcRYGate(q, -3.0979604014634146, 8);
  sqcRZGate(q, -0.3491683073404055, 8);
  sqcRYGate(q, 3.042911403370904, 9);
  sqcRZGate(q, -2.369988959111535, 9);
  sqcRYGate(q, 2.0819942358464925, 10);
  sqcRZGate(q, -2.9691515050423267, 10);
  sqcRYGate(q, 2.5820953300618954, 11);
  sqcRZGate(q, 2.7041918133289755, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.971839781911577, 0);
  sqcRZGate(q, -1.0303565149982572, 0);
  sqcRYGate(q, 0.017758479347744275, 1);
  sqcRZGate(q, -0.7265168664522519, 1);
  sqcRYGate(q, -2.9684435446357536, 2);
  sqcRZGate(q, 2.0111983605352095, 2);
  sqcRYGate(q, 1.4332851751910862, 3);
  sqcRZGate(q, 2.2007605399656187, 3);
  sqcRYGate(q, -1.4149788394106495, 4);
  sqcRZGate(q, 2.3906598934023684, 4);
  sqcRYGate(q, -3.0523211418666576, 5);
  sqcRZGate(q, 2.291447293407425, 5);
  sqcRYGate(q, 0.056856115763658385, 6);
  sqcRZGate(q, -2.2625154345007865, 6);
  sqcRYGate(q, -2.800316655522788, 7);
  sqcRZGate(q, -1.2092742208231229, 7);
  sqcRYGate(q, 2.8764467186151856, 8);
  sqcRZGate(q, -1.1328215064729967, 8);
  sqcRYGate(q, -0.47420416612837424, 9);
  sqcRZGate(q, -1.9825953479567993, 9);
  sqcRYGate(q, -2.7553770922199785, 10);
  sqcRZGate(q, 0.21000674112745887, 10);
  sqcRYGate(q, -0.5381978779745662, 11);
  sqcRZGate(q, 2.9189976130387785, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.1322059253832166, 0);
  sqcRZGate(q, -2.9686617839166862, 0);
  sqcRYGate(q, -2.9361536969176703, 1);
  sqcRZGate(q, -0.2517754753788686, 1);
  sqcRYGate(q, 0.11059186626833196, 2);
  sqcRZGate(q, 1.8478543135250691, 2);
  sqcRYGate(q, -0.26255021914962917, 3);
  sqcRZGate(q, -1.8818716788150824, 3);
  sqcRYGate(q, -0.9164559689427066, 4);
  sqcRZGate(q, -2.4449826152623144, 4);
  sqcRYGate(q, -2.839476460736996, 5);
  sqcRZGate(q, 0.5503009197920542, 5);
  sqcRYGate(q, 2.655435022789902, 6);
  sqcRZGate(q, 1.8442188541723052, 6);
  sqcRYGate(q, 1.3165577818582852, 7);
  sqcRZGate(q, 2.1906410271110914, 7);
  sqcRYGate(q, -3.115673501720787, 8);
  sqcRZGate(q, -2.716523493538006, 8);
  sqcRYGate(q, -3.112330739799027, 9);
  sqcRZGate(q, -1.056939558539387, 9);
  sqcRYGate(q, 0.20206263443492686, 10);
  sqcRZGate(q, -2.363789302374666, 10);
  sqcRYGate(q, 2.523005336242939, 11);
  sqcRZGate(q, -2.6587242750510973, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.343027569103203, 0);
  sqcRZGate(q, -0.599846044617121, 0);
  sqcRYGate(q, 0.34454940602574197, 1);
  sqcRZGate(q, 2.948095035284039, 1);
  sqcRYGate(q, -1.8410226232095015, 2);
  sqcRZGate(q, 1.753812825867097, 2);
  sqcRYGate(q, -0.28684082442095793, 3);
  sqcRZGate(q, 2.9632410452079943, 3);
  sqcRYGate(q, -1.1188712181562304, 4);
  sqcRZGate(q, 1.6209904388371459, 4);
  sqcRYGate(q, 1.265637198157961, 5);
  sqcRZGate(q, -0.8259029979165122, 5);
  sqcRYGate(q, -2.9954124330923557, 6);
  sqcRZGate(q, -0.16791365268502556, 6);
  sqcRYGate(q, 1.6766908490690242, 7);
  sqcRZGate(q, -0.816154162874193, 7);
  sqcRYGate(q, 1.7969896066657034, 8);
  sqcRZGate(q, -1.693112504342908, 8);
  sqcRYGate(q, -0.07114534487120938, 9);
  sqcRZGate(q, 2.528923640649778, 9);
  sqcRYGate(q, -2.0738427817034903, 10);
  sqcRZGate(q, 1.2921572445950282, 10);
  sqcRYGate(q, -1.2276319505091564, 11);
  sqcRZGate(q, -2.033158226708447, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.9261940141714526, 0);
  sqcRZGate(q, 2.1863419460232283, 0);
  sqcRYGate(q, -3.111580147813577, 1);
  sqcRZGate(q, 3.1200628735782243, 1);
  sqcRYGate(q, 3.0673624329677067, 2);
  sqcRZGate(q, -1.3773138001014553, 2);
  sqcRYGate(q, -0.10884474713165339, 3);
  sqcRZGate(q, -1.592227903609774, 3);
  sqcRYGate(q, 1.991115891293922, 4);
  sqcRZGate(q, 1.0988260311685636, 4);
  sqcRYGate(q, -2.489078480601718, 5);
  sqcRZGate(q, -0.5089566922541947, 5);
  sqcRYGate(q, -0.39454078282237404, 6);
  sqcRZGate(q, -1.6127084137109713, 6);
  sqcRYGate(q, 0.16204885673954642, 7);
  sqcRZGate(q, 1.237684293013792, 7);
  sqcRYGate(q, 2.9464254922984385, 8);
  sqcRZGate(q, 1.8291153514414626, 8);
  sqcRYGate(q, 1.6829935127959539, 9);
  sqcRZGate(q, 1.3275473791716657, 9);
  sqcRYGate(q, -2.654221135675877, 10);
  sqcRZGate(q, -1.8471909900199774, 10);
  sqcRYGate(q, 1.237956251197089, 11);
  sqcRZGate(q, 2.046777652410811, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.13225766746050066, 0);
  sqcRZGate(q, 2.1269533212086875, 0);
  sqcRYGate(q, 2.895539102535916, 1);
  sqcRZGate(q, -0.2473149279763032, 1);
  sqcRYGate(q, 1.5786423979581699, 2);
  sqcRZGate(q, 2.615604254862403, 2);
  sqcRYGate(q, 1.3414623998867015, 3);
  sqcRZGate(q, -0.948067595833667, 3);
  sqcRYGate(q, 1.962320331021715, 4);
  sqcRZGate(q, 0.6890884238888958, 4);
  sqcRYGate(q, 1.389413379065808, 5);
  sqcRZGate(q, 0.8262693678254784, 5);
  sqcRYGate(q, -0.008872273326726798, 6);
  sqcRZGate(q, 1.0957928893775124, 6);
  sqcRYGate(q, 2.925984359572982, 7);
  sqcRZGate(q, -3.1269016918797865, 7);
  sqcRYGate(q, 0.04310017627007934, 8);
  sqcRZGate(q, -0.9555176700276653, 8);
  sqcRYGate(q, 1.4116974365734267, 9);
  sqcRZGate(q, 0.6417093747612111, 9);
  sqcRYGate(q, 1.402366448085365, 10);
  sqcRZGate(q, 0.41523311199347024, 10);
  sqcRYGate(q, -1.5689345593289483, 11);
  sqcRZGate(q, -2.1356273851030947, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.948129534843796, 0);
  sqcRZGate(q, 2.9500546946224016, 0);
  sqcRYGate(q, -0.02371914580385095, 1);
  sqcRZGate(q, 0.10951396756537118, 1);
  sqcRYGate(q, -2.7496819528923604, 2);
  sqcRZGate(q, 0.02236933968285193, 2);
  sqcRYGate(q, 2.771508198507685, 3);
  sqcRZGate(q, -2.0780503973604842, 3);
  sqcRYGate(q, -2.853742120632363, 4);
  sqcRZGate(q, 0.9314589370116249, 4);
  sqcRYGate(q, 0.5829761383605101, 5);
  sqcRZGate(q, 0.46240944064886297, 5);
  sqcRYGate(q, 0.22419377202413848, 6);
  sqcRZGate(q, -3.127762947175455, 6);
  sqcRYGate(q, 2.824659389746903, 7);
  sqcRZGate(q, -3.0456257900835766, 7);
  sqcRYGate(q, 3.117312932046472, 8);
  sqcRZGate(q, 0.5363414505214644, 8);
  sqcRYGate(q, -0.2018815462998944, 9);
  sqcRZGate(q, 2.4914174291742706, 9);
  sqcRYGate(q, 1.91158364928197, 10);
  sqcRZGate(q, -1.9655210890476411, 10);
  sqcRYGate(q, -0.012717095851134747, 11);
  sqcRZGate(q, 0.49380242639104205, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.8866154618842588, 0);
  sqcRZGate(q, -1.5577700574344548, 0);
  sqcRYGate(q, 0.0734075224047853, 1);
  sqcRZGate(q, -2.1154624460468483, 1);
  sqcRYGate(q, -2.0800962981869398, 2);
  sqcRZGate(q, 2.8736572696872917, 2);
  sqcRYGate(q, -2.363027105934365, 3);
  sqcRZGate(q, -2.601522414087392, 3);
  sqcRYGate(q, -0.25447865939376113, 4);
  sqcRZGate(q, -2.6805132644607084, 4);
  sqcRYGate(q, -0.954654008900798, 5);
  sqcRZGate(q, 2.28209500901323, 5);
  sqcRYGate(q, 0.027536234298191006, 6);
  sqcRZGate(q, -2.952876700204164, 6);
  sqcRYGate(q, 0.45263976694833286, 7);
  sqcRZGate(q, -0.4362302669871348, 7);
  sqcRYGate(q, -0.38690632796163893, 8);
  sqcRZGate(q, 0.4189889628053769, 8);
  sqcRYGate(q, -1.7670335631554963, 9);
  sqcRZGate(q, -2.8379537865856164, 9);
  sqcRYGate(q, 1.7048044127102744, 10);
  sqcRZGate(q, -2.6428650209859224, 10);
  sqcRYGate(q, 0.043331127117782406, 11);
  sqcRZGate(q, 1.0799615322502882, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.086358799964808, 0);
  sqcRZGate(q, -0.7167913371488268, 0);
  sqcRYGate(q, -0.24569639831272108, 1);
  sqcRZGate(q, -1.0026833432633548, 1);
  sqcRYGate(q, 2.7731161926256327, 2);
  sqcRZGate(q, 2.671151428980064, 2);
  sqcRYGate(q, -2.9777937571108746, 3);
  sqcRZGate(q, 2.5244987444802858, 3);
  sqcRYGate(q, 0.9018715755733774, 4);
  sqcRZGate(q, -0.2208625008677725, 4);
  sqcRYGate(q, -2.761798115922562, 5);
  sqcRZGate(q, -1.2124655187125384, 5);
  sqcRYGate(q, 1.4278892076168062, 6);
  sqcRZGate(q, -0.2595857007650757, 6);
  sqcRYGate(q, 2.051915342991795, 7);
  sqcRZGate(q, 3.1196711606758214, 7);
  sqcRYGate(q, -2.737294068763908, 8);
  sqcRZGate(q, 1.5532910846445018, 8);
  sqcRYGate(q, -1.678794364120595, 9);
  sqcRZGate(q, 0.3463383749106833, 9);
  sqcRYGate(q, -2.396277698743849, 10);
  sqcRZGate(q, 2.624061315552811, 10);
  sqcRYGate(q, 0.09125749789142214, 11);
  sqcRZGate(q, 3.0428930850611757, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.5242309578047037, 0);
  sqcRZGate(q, 1.3658001691281587, 0);
  sqcRYGate(q, 0.07827525579992047, 1);
  sqcRZGate(q, 0.46270329636328, 1);
  sqcRYGate(q, 1.082501312006171, 2);
  sqcRZGate(q, -0.4197430540666298, 2);
  sqcRYGate(q, 2.1612211051711396, 3);
  sqcRZGate(q, -1.5430759320749576, 3);
  sqcRYGate(q, -2.0299514673843424, 4);
  sqcRZGate(q, 1.8572276379378518, 4);
  sqcRYGate(q, 0.021778732953648294, 5);
  sqcRZGate(q, -2.3158915250398353, 5);
  sqcRYGate(q, 0.007756889904325881, 6);
  sqcRZGate(q, 1.7227983206439192, 6);
  sqcRYGate(q, 1.717362603262542, 7);
  sqcRZGate(q, 1.352766794337989, 7);
  sqcRYGate(q, 0.7299774490040809, 8);
  sqcRZGate(q, 0.08751531739913183, 8);
  sqcRYGate(q, 2.8806509441548274, 9);
  sqcRZGate(q, 0.08317501200209243, 9);
  sqcRYGate(q, 2.130730582263878, 10);
  sqcRZGate(q, 1.4885940211777797, 10);
  sqcRYGate(q, 0.007825350234240148, 11);
  sqcRZGate(q, -3.093705398632062, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.7634698705730005, 0);
  sqcRZGate(q, 0.6749759542178124, 0);
  sqcRYGate(q, -2.6271560408131975, 1);
  sqcRZGate(q, 0.10704589298621414, 1);
  sqcRYGate(q, -2.89955576430398, 2);
  sqcRZGate(q, -0.482949669911446, 2);
  sqcRYGate(q, -0.2822722964325994, 3);
  sqcRZGate(q, -0.9393455780570693, 3);
  sqcRYGate(q, 2.8737556114489102, 4);
  sqcRZGate(q, -0.5332109831430776, 4);
  sqcRYGate(q, -2.2168931455262246, 5);
  sqcRZGate(q, -1.9538364848113972, 5);
  sqcRYGate(q, 1.7578849044567386, 6);
  sqcRZGate(q, 0.6220897218907586, 6);
  sqcRYGate(q, -2.376095837472298, 7);
  sqcRZGate(q, -0.43162206587549357, 7);
  sqcRYGate(q, -2.1738289458914783, 8);
  sqcRZGate(q, -3.069567414748195, 8);
  sqcRYGate(q, 1.7544707151398828, 9);
  sqcRZGate(q, 1.7702359716291438, 9);
  sqcRYGate(q, -0.5011955249287343, 10);
  sqcRZGate(q, 2.5333032047328645, 10);
  sqcRYGate(q, -0.1798123737487769, 11);
  sqcRZGate(q, -0.6523244629768827, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.3869861910646151, 0);
  sqcRZGate(q, -1.6260426891918833, 0);
  sqcRYGate(q, 0.21675749989050022, 1);
  sqcRZGate(q, -1.3440530165861622, 1);
  sqcRYGate(q, -2.694401348371748, 2);
  sqcRZGate(q, 0.996021117139809, 2);
  sqcRYGate(q, -1.6572776538355676, 3);
  sqcRZGate(q, 2.526467709879012, 3);
  sqcRYGate(q, -2.700532880739206, 4);
  sqcRZGate(q, -2.5427966146534984, 4);
  sqcRYGate(q, 2.947615221950826, 5);
  sqcRZGate(q, 0.4760592891239561, 5);
  sqcRYGate(q, -3.1238815321357474, 6);
  sqcRZGate(q, -2.7501512029453496, 6);
  sqcRYGate(q, -0.049054866173827705, 7);
  sqcRZGate(q, 0.5810059172258182, 7);
  sqcRYGate(q, -2.6782082366122735, 8);
  sqcRZGate(q, 2.9983969150756176, 8);
  sqcRYGate(q, 0.9923266473963835, 9);
  sqcRZGate(q, 2.902161675212448, 9);
  sqcRYGate(q, 1.5231672060336585, 10);
  sqcRZGate(q, 1.7346887456038576, 10);
  sqcRYGate(q, -0.7763178786902527, 11);
  sqcRZGate(q, -2.859397220779265, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.1320507005846272, 0);
  sqcRZGate(q, -2.9134213310333577, 0);
  sqcRYGate(q, 0.1760435982106394, 1);
  sqcRZGate(q, 1.8751499537901848, 1);
  sqcRYGate(q, 0.22542386494205136, 2);
  sqcRZGate(q, -1.0569118103482085, 2);
  sqcRYGate(q, 0.6420082729365681, 3);
  sqcRZGate(q, 2.6694955311586273, 3);
  sqcRYGate(q, -0.07830609320211668, 4);
  sqcRZGate(q, -1.6411416771948826, 4);
  sqcRYGate(q, -0.5859250125913862, 5);
  sqcRZGate(q, 0.7308432561578667, 5);
  sqcRYGate(q, 2.9877419128884446, 6);
  sqcRZGate(q, -0.6289001511747907, 6);
  sqcRYGate(q, -1.6528296548109886, 7);
  sqcRZGate(q, 2.1775001978250055, 7);
  sqcRYGate(q, -0.7060719312627944, 8);
  sqcRZGate(q, 0.13852858914268218, 8);
  sqcRYGate(q, -3.0890287205340976, 9);
  sqcRZGate(q, -0.7165484696451587, 9);
  sqcRYGate(q, 3.1237424424964426, 10);
  sqcRZGate(q, 1.0687578292514526, 10);
  sqcRYGate(q, -0.29189268531354884, 11);
  sqcRZGate(q, -2.7167866966501375, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.19910192077609848, 0);
  sqcRZGate(q, 2.4350302982494836, 0);
  sqcRYGate(q, 2.980986150251639, 1);
  sqcRZGate(q, 0.2811124277594619, 1);
  sqcRYGate(q, 2.2015160629346697, 2);
  sqcRZGate(q, -2.887644387074012, 2);
  sqcRYGate(q, 1.1380771356720019, 3);
  sqcRZGate(q, 2.7391058773593153, 3);
  sqcRYGate(q, 0.2808014527328222, 4);
  sqcRZGate(q, 1.8241348198887182, 4);
  sqcRYGate(q, -2.2566862623361073, 5);
  sqcRZGate(q, 1.0054547918666328, 5);
  sqcRYGate(q, 0.007700172009430517, 6);
  sqcRZGate(q, 1.4387513011907258, 6);
  sqcRYGate(q, 0.0302397272304379, 7);
  sqcRZGate(q, 0.7689752965403984, 7);
  sqcRYGate(q, -2.778468475303074, 8);
  sqcRZGate(q, -2.3696751041380106, 8);
  sqcRYGate(q, -2.1244399679877097, 9);
  sqcRZGate(q, 2.5610230347035006, 9);
  sqcRYGate(q, 2.5682350999066914, 10);
  sqcRZGate(q, -1.5778750796058265, 10);
  sqcRYGate(q, -0.6886500005219944, 11);
  sqcRZGate(q, -1.4585794000199879, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.8680700921707458, 0);
  sqcRZGate(q, 0.27370920586421654, 0);
  sqcRYGate(q, 1.4683530208631739, 1);
  sqcRZGate(q, -2.880431407491047, 1);
  sqcRYGate(q, 0.8750585317263485, 2);
  sqcRZGate(q, -2.283964411606744, 2);
  sqcRYGate(q, 0.8646650365708127, 3);
  sqcRZGate(q, 0.9801881679323535, 3);
  sqcRYGate(q, 3.1210933080532692, 4);
  sqcRZGate(q, 2.0508655837556544, 4);
  sqcRYGate(q, 3.057643569881246, 5);
  sqcRZGate(q, 0.7761913762725545, 5);
  sqcRYGate(q, -0.10234336214173456, 6);
  sqcRZGate(q, -0.11845868212285104, 6);
  sqcRYGate(q, -2.2365445054900337, 7);
  sqcRZGate(q, 0.44836398266686905, 7);
  sqcRYGate(q, 2.4628429970694565, 8);
  sqcRZGate(q, 0.3949443093727476, 8);
  sqcRYGate(q, 0.44501307091108305, 9);
  sqcRZGate(q, 2.852189130251991, 9);
  sqcRYGate(q, 0.09808450069802177, 10);
  sqcRZGate(q, 1.0320548925538713, 10);
  sqcRYGate(q, -1.4381171165096696, 11);
  sqcRZGate(q, -0.2430641550515489, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.0402042607768139, 0);
  sqcRZGate(q, 1.2007493401971816, 0);
  sqcRYGate(q, -1.7981416196686077, 1);
  sqcRZGate(q, 0.8203849478589387, 1);
  sqcRYGate(q, 1.0992831107477654, 2);
  sqcRZGate(q, -3.0312689925085308, 2);
  sqcRYGate(q, -2.9883557625926342, 3);
  sqcRZGate(q, -1.7266153293751545, 3);
  sqcRYGate(q, -0.252671895345503, 4);
  sqcRZGate(q, -1.0048891150977504, 4);
  sqcRYGate(q, 1.0001422919040097, 5);
  sqcRZGate(q, 2.9950728045935398, 5);
  sqcRYGate(q, -3.0810636318855398, 6);
  sqcRZGate(q, -0.2496252093327742, 6);
  sqcRYGate(q, 3.0940279885295445, 7);
  sqcRZGate(q, -2.6501815766202808, 7);
  sqcRYGate(q, -1.271124492446332, 8);
  sqcRZGate(q, 2.01210821848744, 8);
  sqcRYGate(q, -0.5609895141676917, 9);
  sqcRZGate(q, 2.92597735935588, 9);
  sqcRYGate(q, 0.11974528892950492, 10);
  sqcRZGate(q, 1.2086366694825905, 10);
  sqcRYGate(q, 2.5275337159583287, 11);
  sqcRZGate(q, 0.6679585183906226, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.942747727230316, 0);
  sqcRZGate(q, 2.9019415286716708, 0);
  sqcRYGate(q, -1.038075427318776, 1);
  sqcRZGate(q, -0.3117468777138535, 1);
  sqcRYGate(q, 1.198611811048515, 2);
  sqcRZGate(q, -1.4726853614093551, 2);
  sqcRYGate(q, -0.07702444810163525, 3);
  sqcRZGate(q, -0.03765905658563006, 3);
  sqcRYGate(q, -2.716894852482155, 4);
  sqcRZGate(q, -2.5686436990812087, 4);
  sqcRYGate(q, -2.9747176493451435, 5);
  sqcRZGate(q, 2.7032266389170654, 5);
  sqcRYGate(q, -1.9364028869141814, 6);
  sqcRZGate(q, -3.041730857813128, 6);
  sqcRYGate(q, -3.137355081062178, 7);
  sqcRZGate(q, 1.8894709579354405, 7);
  sqcRYGate(q, -0.2441983504344597, 8);
  sqcRZGate(q, -2.0954849777312416, 8);
  sqcRYGate(q, 3.0525997469078345, 9);
  sqcRZGate(q, -0.19865564101989364, 9);
  sqcRYGate(q, -1.9413729826000383, 10);
  sqcRZGate(q, 1.1992573777407243, 10);
  sqcRYGate(q, 2.209108720304794, 11);
  sqcRZGate(q, -0.9140018282240078, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.14381538053293447, 0);
  sqcRZGate(q, 0.6547401257547143, 0);
  sqcRYGate(q, 2.417668126807142, 1);
  sqcRZGate(q, -2.3078900296064755, 1);
  sqcRYGate(q, -0.9605432049432908, 2);
  sqcRZGate(q, -1.6739299631568016, 2);
  sqcRYGate(q, 3.051820741555832, 3);
  sqcRZGate(q, 1.67914503133528, 3);
  sqcRYGate(q, 2.1142600256349406, 4);
  sqcRZGate(q, 2.159971374894615, 4);
  sqcRYGate(q, 3.090884222996562, 5);
  sqcRZGate(q, -0.8406738732067902, 5);
  sqcRYGate(q, 0.03168737136355837, 6);
  sqcRZGate(q, 1.2535716180034968, 6);
  sqcRYGate(q, -0.14586345366714504, 7);
  sqcRZGate(q, -0.021646188318208637, 7);
  sqcRYGate(q, -1.6987621607481413, 8);
  sqcRZGate(q, 3.096288914536708, 8);
  sqcRYGate(q, 0.8249587339718981, 9);
  sqcRZGate(q, 0.04767306287142415, 9);
  sqcRYGate(q, -0.11423173607855691, 10);
  sqcRZGate(q, -2.679616584908549, 10);
  sqcRYGate(q, 2.2145825487819764, 11);
  sqcRZGate(q, 1.374387306823688, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.0173578663527296, 0);
  sqcRZGate(q, 2.2875547214859124, 0);
  sqcRYGate(q, -2.398260292094765, 1);
  sqcRZGate(q, -1.5182572072109952, 1);
  sqcRYGate(q, -0.9420971485769641, 2);
  sqcRZGate(q, 2.387433708192121, 2);
  sqcRYGate(q, 0.02199981829886281, 3);
  sqcRZGate(q, 1.9409540214782703, 3);
  sqcRYGate(q, 3.0906037834821394, 4);
  sqcRZGate(q, 1.844738449907692, 4);
  sqcRYGate(q, -0.03763586495388385, 5);
  sqcRZGate(q, 0.9003651357026403, 5);
  sqcRYGate(q, -2.6877361670878828, 6);
  sqcRZGate(q, 0.6648559265631606, 6);
  sqcRYGate(q, -1.921354289648309, 7);
  sqcRZGate(q, 3.0932177636396294, 7);
  sqcRYGate(q, 2.6342452845983613, 8);
  sqcRZGate(q, -0.08522078839104985, 8);
  sqcRYGate(q, 1.556118094847745, 9);
  sqcRZGate(q, -2.8456800685295307, 9);
  sqcRYGate(q, -0.10484277406664866, 10);
  sqcRZGate(q, 2.3743121151782334, 10);
  sqcRYGate(q, -1.7870897054505805, 11);
  sqcRZGate(q, -2.0788318666820502, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.2402136639831083, 0);
  sqcRZGate(q, 2.394587008794692, 0);
  sqcRYGate(q, 0.6338536403515732, 1);
  sqcRZGate(q, -1.1800320315475163, 1);
  sqcRYGate(q, 2.530332188230144, 2);
  sqcRZGate(q, 0.4981439219227216, 2);
  sqcRYGate(q, -0.09181092012038235, 3);
  sqcRZGate(q, -1.171945809381656, 3);
  sqcRYGate(q, 1.0849545848762707, 4);
  sqcRZGate(q, 2.3967283891209856, 4);
  sqcRYGate(q, 3.1143781259898344, 5);
  sqcRZGate(q, 2.160510519184985, 5);
  sqcRYGate(q, -3.127550162520795, 6);
  sqcRZGate(q, 2.6953141752571197, 6);
  sqcRYGate(q, -0.14184699475084453, 7);
  sqcRZGate(q, 1.7709926876389375, 7);
  sqcRYGate(q, 2.9377470143642643, 8);
  sqcRZGate(q, 2.9061508799513276, 8);
  sqcRYGate(q, 0.8668025022409607, 9);
  sqcRZGate(q, 2.777945523210383, 9);
  sqcRYGate(q, 0.822067536282115, 10);
  sqcRZGate(q, 0.7057593628134159, 10);
  sqcRYGate(q, -0.9543669127372851, 11);
  sqcRZGate(q, -1.2592312299452804, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.481879797302191, 0);
  sqcRZGate(q, -0.3141452151956279, 0);
  sqcRYGate(q, 2.5962824235288102, 1);
  sqcRZGate(q, -2.8040645520289833, 1);
  sqcRYGate(q, 3.0958973752643906, 2);
  sqcRZGate(q, 2.6105059319693193, 2);
  sqcRYGate(q, 2.353641974136365, 3);
  sqcRZGate(q, 3.0982673986404, 3);
  sqcRYGate(q, 1.2113754881132701, 4);
  sqcRZGate(q, 0.4195062287509887, 4);
  sqcRYGate(q, 0.636866305086575, 5);
  sqcRZGate(q, -0.720842073966023, 5);
  sqcRYGate(q, -1.44190541430301, 6);
  sqcRZGate(q, -0.6090857040702742, 6);
  sqcRYGate(q, -1.1258757378562256, 7);
  sqcRZGate(q, -1.9990270024025554, 7);
  sqcRYGate(q, -0.792261153877101, 8);
  sqcRZGate(q, -0.7512888163719194, 8);
  sqcRYGate(q, -1.8220358282919735, 9);
  sqcRZGate(q, 2.846804334069382, 9);
  sqcRYGate(q, -1.727697005277061, 10);
  sqcRZGate(q, -2.160750605599901, 10);
  sqcRYGate(q, 1.4156217455668125, 11);
  sqcRZGate(q, 1.203893062870258, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.8587243594384437, 0);
  sqcRZGate(q, 3.0972743236758036, 0);
  sqcRYGate(q, 0.32048967409308, 1);
  sqcRZGate(q, 1.282059805795833, 1);
  sqcRYGate(q, 3.1308878820591706, 2);
  sqcRZGate(q, -0.8905913380763649, 2);
  sqcRYGate(q, 3.021290164607618, 3);
  sqcRZGate(q, 1.8850943363316615, 3);
  sqcRYGate(q, 3.079202862065595, 4);
  sqcRZGate(q, 0.10571868060447542, 4);
  sqcRYGate(q, 3.1123475313872513, 5);
  sqcRZGate(q, 3.113860510478123, 5);
  sqcRYGate(q, -0.0058734432958266036, 6);
  sqcRZGate(q, 1.0824192715294316, 6);
  sqcRYGate(q, 3.06782704106056, 7);
  sqcRZGate(q, -1.7547920962233512, 7);
  sqcRYGate(q, -3.089535489529392, 8);
  sqcRZGate(q, 0.6392395606819212, 8);
  sqcRYGate(q, -0.06767177424182957, 9);
  sqcRZGate(q, 1.7778997829351466, 9);
  sqcRYGate(q, -0.016219944665569017, 10);
  sqcRZGate(q, 0.5622362113036141, 10);
  sqcRYGate(q, -1.7740334388056294, 11);
  sqcRZGate(q, 1.4566239535203995, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.43711737396325473, 0);
  sqcRZGate(q, 2.581264271223734, 0);
  sqcRYGate(q, 1.6345097882051247, 1);
  sqcRZGate(q, -2.351910996144006, 1);
  sqcRYGate(q, 1.5543217880001965, 2);
  sqcRZGate(q, 1.3067808891733383, 2);
  sqcRYGate(q, -1.2642064026420679, 3);
  sqcRZGate(q, -0.8670963682317049, 3);
  sqcRYGate(q, 0.9039563423333821, 4);
  sqcRZGate(q, -3.1009551991182382, 4);
  sqcRYGate(q, 0.2071918865974507, 5);
  sqcRZGate(q, -2.788878346959412, 5);
  sqcRYGate(q, -2.9439010084197546, 6);
  sqcRZGate(q, 0.7403771418878686, 6);
  sqcRYGate(q, 0.4606570183461311, 7);
  sqcRZGate(q, 0.008447559790398714, 7);
  sqcRYGate(q, -1.763872679900444, 8);
  sqcRZGate(q, -1.9073267068600062, 8);
  sqcRYGate(q, -1.7875832301514487, 9);
  sqcRZGate(q, -2.676835776797491, 9);
  sqcRYGate(q, -1.556537552493654, 10);
  sqcRZGate(q, -0.5855565143995625, 10);
  sqcRYGate(q, 1.5026623665960113, 11);
  sqcRZGate(q, 2.9605143284596442, 11);

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
