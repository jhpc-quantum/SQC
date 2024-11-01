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

  sqcRYGate(q, 2.106862770566835, 0);
  sqcRYGate(q, -1.4762634552848766, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1642191061058886, 0);
  sqcRYGate(q, 2.7149125402269574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9858311675797626, 2);
  sqcRYGate(q, -1.8251855421737517, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0594225342001398, 2);
  sqcRYGate(q, 3.0858475059620267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.041596277465315, 4);
  sqcRYGate(q, -1.6956714550728886, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3855404312139745, 4);
  sqcRYGate(q, -1.2255847050324784, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6571392048951084, 6);
  sqcRYGate(q, 2.952932394451594, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4999245944634279, 6);
  sqcRYGate(q, 0.787961438628677, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7007209164922044, 8);
  sqcRYGate(q, -0.5665035547134449, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.6775196715063829, 8);
  sqcRYGate(q, 2.506782599184744, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.144492267080813, 10);
  sqcRYGate(q, 1.0449162769960176, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6177729924231938, 10);
  sqcRYGate(q, -2.280871276738611, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.960351434653612, 0);
  sqcRYGate(q, 1.0189235410743571, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.826917229322583, 0);
  sqcRYGate(q, 2.2790521655155773, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3342132682766072, 2);
  sqcRYGate(q, 2.2895397151341856, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.15090071990942355, 2);
  sqcRYGate(q, -0.16175753102903953, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.437445950509726, 4);
  sqcRYGate(q, 2.701159224581144, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.03482728844268786, 4);
  sqcRYGate(q, -3.0129187600721985, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.8306546754511812, 6);
  sqcRYGate(q, -1.0206649748189405, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.5944873532699044, 6);
  sqcRYGate(q, 1.542276591803438, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.9140135041116375, 8);
  sqcRYGate(q, 1.154775825952986, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.03081190704824875, 8);
  sqcRYGate(q, -0.030032991562066513, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.3018273099419382, 1);
  sqcRYGate(q, -1.22357873607371, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6607286121039788, 1);
  sqcRYGate(q, 1.0402013290132803, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.125104594291555, 3);
  sqcRYGate(q, -1.1125311696554103, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7261420532060379, 3);
  sqcRYGate(q, -0.9747202909278235, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.3343376454028322, 5);
  sqcRYGate(q, 1.3936370319505675, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.03809178327516084, 5);
  sqcRYGate(q, -3.0546675344626943, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5760784866511064, 7);
  sqcRYGate(q, -0.7121905538589967, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.7793283765335466, 7);
  sqcRYGate(q, -3.0414914808933853, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.6544227461166865, 9);
  sqcRYGate(q, 1.9638841307529, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.312548086684739, 9);
  sqcRYGate(q, -0.8657004406094445, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.1234939824407904, 0);
  sqcRYGate(q, -1.3704588171895726, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1322502773764644, 0);
  sqcRYGate(q, -0.09093170740793699, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6999827429889165, 1);
  sqcRYGate(q, 2.9437360243812307, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7808749451180651, 1);
  sqcRYGate(q, -3.1396054959532202, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5934206918339155, 2);
  sqcRYGate(q, -1.6855531508515256, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -3.0136461208998884, 2);
  sqcRYGate(q, -0.024198915734461257, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.8175257223678474, 3);
  sqcRYGate(q, 1.534479139872439, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8667218818835067, 3);
  sqcRYGate(q, 3.0360800430077997, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.37825700626967584, 4);
  sqcRYGate(q, -0.16806014317241935, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.33202161533286034, 4);
  sqcRYGate(q, -0.4329130795876816, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.6298975678872103, 5);
  sqcRYGate(q, 1.929241193107691, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.012410441232437286, 5);
  sqcRYGate(q, 3.1286607502845065, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.080029839447805, 6);
  sqcRYGate(q, -2.933265374969082, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.010385546994361228, 6);
  sqcRYGate(q, -0.02008918514447, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 1.437160273405685, 7);
  sqcRYGate(q, -2.131211152531606, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.8658743723943353, 7);
  sqcRYGate(q, -0.3431886834393587, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.2555599025796647, 8);
  sqcRYGate(q, -1.6136103009512326, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.8569216975351992, 8);
  sqcRYGate(q, -1.6352243323848417, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.06898259296836518, 9);
  sqcRYGate(q, -0.15451459444095317, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.4288740622794736, 9);
  sqcRYGate(q, -3.0522332653138573, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.8840820944668764, 0);
  sqcRYGate(q, 0.8140125300446206, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07976159113815287, 0);
  sqcRYGate(q, -0.0497924164540679, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2625605600564764, 2);
  sqcRYGate(q, -1.395433666658368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.12358842940327941, 2);
  sqcRYGate(q, -0.26495133613752664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7149736541457716, 4);
  sqcRYGate(q, -2.954203427374319, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.16013985748068293, 4);
  sqcRYGate(q, 3.1055418175166105, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9569895751248537, 6);
  sqcRYGate(q, 3.1288899739469174, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.787603868583704, 6);
  sqcRYGate(q, 2.8438521671870443, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.025753971011916996, 8);
  sqcRYGate(q, -0.9053902517821502, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.3092514421078163, 8);
  sqcRYGate(q, 0.3971818070086419, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9258710223134408, 10);
  sqcRYGate(q, 1.3547118270339364, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.28286727694849545, 10);
  sqcRYGate(q, 0.1433865276938211, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.766527152805796, 0);
  sqcRYGate(q, 0.6373281114918905, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1140562292932152, 0);
  sqcRYGate(q, -0.01334215526078335, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7753169038070382, 2);
  sqcRYGate(q, 0.45459763974837564, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.005552124633323885, 2);
  sqcRYGate(q, -0.008767218232867968, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.19232563501466607, 4);
  sqcRYGate(q, -1.1891221617386853, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.6043430014122873, 4);
  sqcRYGate(q, 2.6869609664666347, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7585161852108886, 6);
  sqcRYGate(q, -2.954160748816537, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.9940259499806836, 6);
  sqcRYGate(q, 3.11598334803111, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.7336577016907595, 8);
  sqcRYGate(q, -0.8503462523067923, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.375252693117913, 8);
  sqcRYGate(q, 0.352038801491525, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.8519177856839253, 1);
  sqcRYGate(q, 1.5714517070684508, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3433749727877886, 1);
  sqcRYGate(q, -2.249647466483168, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3884757110205028, 3);
  sqcRYGate(q, 0.085191344096466, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.5778621317344896, 3);
  sqcRYGate(q, -2.159778509134869, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.8066088010855683, 5);
  sqcRYGate(q, -1.2625104136699488, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.010379038621935344, 5);
  sqcRYGate(q, 0.01735382172340927, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.9318126700959075, 7);
  sqcRYGate(q, -0.7390174744842427, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.6844401606840047, 7);
  sqcRYGate(q, -0.15438826303467768, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.8956873877270595, 9);
  sqcRYGate(q, 0.22373161376223893, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.6751495470574067, 9);
  sqcRYGate(q, 0.48089046583726613, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.6225954307745614, 0);
  sqcRYGate(q, -2.193316707397288, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.01958311932098233, 0);
  sqcRYGate(q, -0.020963756899696505, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9706682223644663, 1);
  sqcRYGate(q, -0.45454484944930185, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.24731527376773643, 1);
  sqcRYGate(q, -0.12786441654855168, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3888121038940332, 2);
  sqcRYGate(q, 1.9061992418027351, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.7217819814228914, 2);
  sqcRYGate(q, -1.877894228146613, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.5146603229806956, 3);
  sqcRYGate(q, 2.024202004596757, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.1593741335942962, 3);
  sqcRYGate(q, 2.9369005488893705, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9901673095908966, 4);
  sqcRYGate(q, 3.12553418288197, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.0747967403586296, 4);
  sqcRYGate(q, -3.01216252839973, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.931015013800464, 5);
  sqcRYGate(q, -2.0978059959122066, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0012695805306819354, 5);
  sqcRYGate(q, -3.1008123369233025, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.858540417710414, 6);
  sqcRYGate(q, 2.9753093816956606, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -3.0585301137656513, 6);
  sqcRYGate(q, 0.10083836838626326, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 2.3766177219644398, 7);
  sqcRYGate(q, -1.8206514291320264, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.826028045944917, 7);
  sqcRYGate(q, 0.05235906005232696, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.3012727837184966, 8);
  sqcRYGate(q, 3.0117445172301864, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.9859311543225682, 8);
  sqcRYGate(q, -1.1669540735047106, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.5154955356658726, 9);
  sqcRYGate(q, -0.07772297422155738, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.58346858998963, 9);
  sqcRYGate(q, 3.132845457012395, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.5737054799858754, 0);
  sqcRYGate(q, -2.1451610366126332, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.554697493300078, 0);
  sqcRYGate(q, 0.6856061952396012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.084446867117601, 2);
  sqcRYGate(q, 2.0939748279379424, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6426753194870818, 2);
  sqcRYGate(q, 1.6258943775994914, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0432582627230158, 4);
  sqcRYGate(q, -0.2956571296532981, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3400442869089733, 4);
  sqcRYGate(q, 0.7917819764328353, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7785855824907264, 6);
  sqcRYGate(q, -1.448060188436827, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7006107973235813, 6);
  sqcRYGate(q, 2.5036735754909194, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4795090557303556, 8);
  sqcRYGate(q, -2.8072094008424306, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3834963149918382, 8);
  sqcRYGate(q, -2.5280466030938347, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5072047031448049, 10);
  sqcRYGate(q, -1.7419886579216524, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2547206130135335, 10);
  sqcRYGate(q, 1.2231226805235973, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6567119546344555, 0);
  sqcRYGate(q, 1.5459308769699656, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3559686431662061, 0);
  sqcRYGate(q, -1.8481868154264927, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7882935186628477, 2);
  sqcRYGate(q, -3.0253361139049364, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.01697419810599513, 2);
  sqcRYGate(q, 3.138467373151296, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.1721367060705843, 4);
  sqcRYGate(q, 0.9877156252431327, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1208215601798304, 4);
  sqcRYGate(q, 3.0811626027477423, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.22674912004279185, 6);
  sqcRYGate(q, -1.3418503205316907, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.004216439889296639, 6);
  sqcRYGate(q, -3.1131754744061495, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.210799072382858, 8);
  sqcRYGate(q, -1.529725162628026, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.14457314244209662, 8);
  sqcRYGate(q, 3.1112554513002024, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.7312733204503221, 1);
  sqcRYGate(q, 1.9047476511558545, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0848442439453554, 1);
  sqcRYGate(q, -3.0808335793410464, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5538497173698427, 3);
  sqcRYGate(q, 0.16634797493521258, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.10816194510408383, 3);
  sqcRYGate(q, -0.16735444888965106, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3553669769271568, 5);
  sqcRYGate(q, 0.12554886440363688, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.0442617513333765, 5);
  sqcRYGate(q, 0.11047497039407972, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.9876626971524498, 7);
  sqcRYGate(q, -1.9585735810586262, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.2684886844053915, 7);
  sqcRYGate(q, -2.61691628986277, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.7798782434920344, 9);
  sqcRYGate(q, 1.7027780230949718, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.7302371880227501, 9);
  sqcRYGate(q, -0.2094754312490582, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.5634467557366666, 0);
  sqcRYGate(q, -2.8090732478899483, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.003670866802628626, 0);
  sqcRYGate(q, 0.030720964409346428, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4880848861624658, 1);
  sqcRYGate(q, -1.7227578559843704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2788696632305276, 1);
  sqcRYGate(q, -1.4171136564445623, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1027237108221, 2);
  sqcRYGate(q, -1.443492549982639, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.0373855641595502, 2);
  sqcRYGate(q, 3.116428193628819, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.1567568554228567, 3);
  sqcRYGate(q, 0.8848403007608647, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.2425810045702756, 3);
  sqcRYGate(q, 2.919420369122511, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.23058264883858026, 4);
  sqcRYGate(q, 2.1541843643779197, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.0072553192957806115, 4);
  sqcRYGate(q, 0.009788081526290298, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.6039469259336272, 5);
  sqcRYGate(q, -2.800745171952311, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7156232553753403, 5);
  sqcRYGate(q, 0.4765330343013216, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0796344252635954, 6);
  sqcRYGate(q, 2.591581321603223, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 3.127052041100931, 6);
  sqcRYGate(q, -0.03582414600328726, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.8637465382868426, 7);
  sqcRYGate(q, -1.3171046757188662, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.8213205798006973, 7);
  sqcRYGate(q, 2.453696802620605, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5360120634788157, 8);
  sqcRYGate(q, 2.631297147600148, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.13045254015020635, 8);
  sqcRYGate(q, 3.0970844422862527, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.8870366981774662, 9);
  sqcRYGate(q, -1.3383091935352676, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.7946554524188203, 9);
  sqcRYGate(q, 0.7682465254861899, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.49069230303308714, 0);
  sqcRYGate(q, -3.0090659591028204, 1);
  sqcRYGate(q, -2.0373249440842693, 2);
  sqcRYGate(q, -1.6658213438073446, 3);
  sqcRYGate(q, -3.084697993963988, 4);
  sqcRYGate(q, -1.7815686638304085, 5);
  sqcRYGate(q, -1.033578679280002, 6);
  sqcRYGate(q, 1.7922046667235332, 7);
  sqcRYGate(q, -2.1007740649133346, 8);
  sqcRYGate(q, 1.3319943502018772, 9);
  sqcRYGate(q, -0.7563626953560982, 10);
  sqcRYGate(q, -1.3391568423256546, 11);

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
