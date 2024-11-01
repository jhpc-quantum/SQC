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

  sqcRYGate(q, -2.9585745971079653, 0);
  sqcRYGate(q, -2.4341415333301537, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9714075084678946, 0);
  sqcRYGate(q, 2.0135618919755713, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.014543100915973071, 1);
  sqcRYGate(q, 1.7304050050477917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.772357579416056, 1);
  sqcRYGate(q, -0.5306144692640897, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8547286928264606, 2);
  sqcRYGate(q, 0.3687123079851338, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.253183044986863, 2);
  sqcRYGate(q, -1.6741222145826338, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.316276602377451, 3);
  sqcRYGate(q, -1.0696128606656745, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5450702820090638, 3);
  sqcRYGate(q, 1.1387157266081251, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4745938146146882, 4);
  sqcRYGate(q, -1.8196824691063345, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5119217477873614, 4);
  sqcRYGate(q, 2.8453931437483195, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4156155835177662, 5);
  sqcRYGate(q, 1.5425943860088809, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6531803388449475, 5);
  sqcRYGate(q, 0.19397405601943712, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.59560585749289, 6);
  sqcRYGate(q, 2.6425035839804734, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.911600763897738, 6);
  sqcRYGate(q, 0.9663696689242378, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.192303750333973, 7);
  sqcRYGate(q, -1.0613597716467722, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.34829422673990074, 7);
  sqcRYGate(q, -3.140783138894853, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.7006854334042005, 8);
  sqcRYGate(q, -1.3213063587784406, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5786308428974793, 8);
  sqcRYGate(q, -3.130213104835878, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.167330293651057, 9);
  sqcRYGate(q, -0.06853802624375405, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.64137813177504, 9);
  sqcRYGate(q, -3.1163017351586086, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.1642576768241377, 10);
  sqcRYGate(q, 2.749104485681766, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.200038079331248, 10);
  sqcRYGate(q, 3.0858543620342016, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3848537336783027, 0);
  sqcRYGate(q, -0.6411059942039978, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2378133187878548, 0);
  sqcRYGate(q, 1.6504827641839563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.038190140097889, 1);
  sqcRYGate(q, 2.705090940730804, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0835272729145569, 1);
  sqcRYGate(q, 2.045173057756043, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.112597643875103, 2);
  sqcRYGate(q, 2.207172009164576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1916113760751559, 2);
  sqcRYGate(q, 1.791527255873155, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7623715238915594, 3);
  sqcRYGate(q, -1.5776165741140382, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8887339891233403, 3);
  sqcRYGate(q, 2.9986451421466245, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0345053769162442, 4);
  sqcRYGate(q, -0.20674391840056483, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4010783102306235, 4);
  sqcRYGate(q, -1.464353919607512, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.543849109572018, 5);
  sqcRYGate(q, -3.0318566521161765, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3955414318037573, 5);
  sqcRYGate(q, 2.0754108617597637, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5973828476523693, 6);
  sqcRYGate(q, 0.34120542916517116, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5003566893623135, 6);
  sqcRYGate(q, -1.3397622211506484, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2345746995874869, 7);
  sqcRYGate(q, -1.5358669141129602, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.480817473545145, 7);
  sqcRYGate(q, 0.002711872209858181, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.497287190900674, 8);
  sqcRYGate(q, 0.6988123211288615, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4989042714414782, 8);
  sqcRYGate(q, 0.015233756338154159, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9691088973881286, 9);
  sqcRYGate(q, 2.1767517119771536, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.8129965823761935, 9);
  sqcRYGate(q, -2.713659735431059, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.4453989257083015, 10);
  sqcRYGate(q, -1.6199875441817384, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9471653455404416, 10);
  sqcRYGate(q, -2.9991244191438517, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1173912255769203, 0);
  sqcRYGate(q, -3.120200898928546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8293018934142373, 0);
  sqcRYGate(q, -2.264015030761651, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.08248455014222, 1);
  sqcRYGate(q, 0.8441529022382825, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.448778571232645, 1);
  sqcRYGate(q, -2.0322575771182905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2192746614295737, 2);
  sqcRYGate(q, -0.3390877408290356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2320496160849627, 2);
  sqcRYGate(q, -0.7427187032965525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7541270378894565, 3);
  sqcRYGate(q, -1.5451335422670693, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5943942072714741, 3);
  sqcRYGate(q, 1.5511345005646862, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4140303027857373, 4);
  sqcRYGate(q, -1.5148675712504358, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4997864611141731, 4);
  sqcRYGate(q, -0.006123726469347446, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9013360399936694, 5);
  sqcRYGate(q, -1.6401477340057022, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5540598695535337, 5);
  sqcRYGate(q, 0.4613454876349145, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6268872241535561, 6);
  sqcRYGate(q, 2.9359121966993365, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4020964014394854, 6);
  sqcRYGate(q, 3.092553421081192, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5327871484589313, 7);
  sqcRYGate(q, 2.071152586119478, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.8152288170112034, 7);
  sqcRYGate(q, -2.1697984332708646, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5898918074461683, 8);
  sqcRYGate(q, -0.2725377448539149, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.11301874647493831, 8);
  sqcRYGate(q, -0.7936751839053252, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5665120233761576, 9);
  sqcRYGate(q, -1.9212184016207143, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3520645906825894, 9);
  sqcRYGate(q, -1.5075632213198813, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.3316636810636376, 10);
  sqcRYGate(q, 3.102139596410755, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0459918199908484, 10);
  sqcRYGate(q, 3.103259434304114, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.221459536601974, 0);
  sqcRYGate(q, 2.452263594791796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2445549145255028, 0);
  sqcRYGate(q, 0.775066279909253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3358620305914055, 1);
  sqcRYGate(q, -2.85061263099293, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9945877024614475, 1);
  sqcRYGate(q, -1.5740049838874193, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.725951097435075, 2);
  sqcRYGate(q, -1.603658366363191, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5330540421625027, 2);
  sqcRYGate(q, 2.8563284653949896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2591880584042467, 3);
  sqcRYGate(q, 2.110595648976912, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.03986433645237419, 3);
  sqcRYGate(q, -0.17078060190102473, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.863810976286037, 4);
  sqcRYGate(q, -0.9560990549740342, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.06914708302352394, 4);
  sqcRYGate(q, 2.565353427750604, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.467926477371053, 5);
  sqcRYGate(q, 1.4408944185866905, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.739369078074999, 5);
  sqcRYGate(q, -1.5721212455651656, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4283104401521038, 6);
  sqcRYGate(q, -2.9484734701680106, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.003226955937224739, 6);
  sqcRYGate(q, -2.3336607284799, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0021542282107525, 7);
  sqcRYGate(q, -2.2840383621578186, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.9501674114907868, 7);
  sqcRYGate(q, -2.184545561877476, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.032988641124831, 8);
  sqcRYGate(q, -1.9236234203383487, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5413634248301407, 8);
  sqcRYGate(q, 1.5808224911372442, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.101148749626127, 9);
  sqcRYGate(q, -1.7826523612371288, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.172150831942908, 9);
  sqcRYGate(q, 1.6242344225857952, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.9999596202744554, 10);
  sqcRYGate(q, -1.9099524046463143, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6687806504324723, 10);
  sqcRYGate(q, -2.941206464381313, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0196943417680728, 0);
  sqcRYGate(q, -1.8412609959820394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.493956394825572, 0);
  sqcRYGate(q, 1.7970261370894502, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.569856200681781, 1);
  sqcRYGate(q, 1.3745400734289097, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1957923646750546, 1);
  sqcRYGate(q, 3.014107389808141, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6264764743422075, 2);
  sqcRYGate(q, -1.8519106699796355, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9495870199103322, 2);
  sqcRYGate(q, 2.4335627668138136, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5733460891703528, 3);
  sqcRYGate(q, -2.803075629631484, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1885211403353555, 3);
  sqcRYGate(q, 1.4783897059087758, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4634305626823467, 4);
  sqcRYGate(q, 0.8391074885137578, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1379955069391285, 4);
  sqcRYGate(q, 0.012224124567458803, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6487964613460854, 5);
  sqcRYGate(q, -1.5709515123463562, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1203629964427, 5);
  sqcRYGate(q, 3.1392752015902725, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8910406437582359, 6);
  sqcRYGate(q, 1.686464493984538, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.01634895498716027, 6);
  sqcRYGate(q, -0.1493155650389566, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.25180311020760815, 7);
  sqcRYGate(q, 0.7574413195187848, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.024078054277282344, 7);
  sqcRYGate(q, 0.0012517860732007145, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7883002544812541, 8);
  sqcRYGate(q, 1.5675108601352883, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.62532238539365, 8);
  sqcRYGate(q, 3.0391282189106286, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.025698823249473, 9);
  sqcRYGate(q, -0.0061586492136669335, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5305519331738884, 9);
  sqcRYGate(q, -1.6037305043457684, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.571229931274208, 10);
  sqcRYGate(q, 3.1016700237966264, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4873899171512903, 10);
  sqcRYGate(q, 1.5757088611073982, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5575936519279683, 0);
  sqcRYGate(q, -2.3635745963733537, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.24214191658207626, 0);
  sqcRYGate(q, -1.106376551075666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.041351173016027, 1);
  sqcRYGate(q, -1.6354073068116657, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.253352546330928, 1);
  sqcRYGate(q, -0.037977240840432636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5511775801936551, 2);
  sqcRYGate(q, -1.5870418460093036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.131699349164505, 2);
  sqcRYGate(q, 2.1003675057199116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5278951949151476, 3);
  sqcRYGate(q, -0.7177600379530249, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.258155878788557, 3);
  sqcRYGate(q, -3.1324316955058342, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.925275293546997, 4);
  sqcRYGate(q, 0.07315416281046123, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5751654056976294, 4);
  sqcRYGate(q, -3.128667559611591, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1669325910687793, 5);
  sqcRYGate(q, -1.8426004352667222, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5774220909556915, 5);
  sqcRYGate(q, -0.010531832364982957, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5713935996765231, 6);
  sqcRYGate(q, 0.13615808450716124, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5632759025772383, 6);
  sqcRYGate(q, 0.2962991732010476, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5799578898692588, 7);
  sqcRYGate(q, -0.02107872579280997, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5852220694126522, 7);
  sqcRYGate(q, -3.0533216376727075, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5860336321870112, 8);
  sqcRYGate(q, 3.087938071507652, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5703501968063667, 8);
  sqcRYGate(q, 3.0969175776486084, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5698726417581421, 9);
  sqcRYGate(q, 1.5503719886628895, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5718011671288725, 9);
  sqcRYGate(q, 1.6026443337466376, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5709678695764988, 10);
  sqcRYGate(q, -4.8849724226792584e-05, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5734637476584077, 10);
  sqcRYGate(q, 1.3876018032531707, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.8372678520847262, 0);
  sqcRYGate(q, -1.9947231398069858, 1);
  sqcRYGate(q, -1.5665356837384992, 2);
  sqcRYGate(q, -0.5162129925279838, 3);
  sqcRYGate(q, -0.7155984895383893, 4);
  sqcRYGate(q, -0.9736526925903943, 5);
  sqcRYGate(q, -1.5702387632151447, 6);
  sqcRYGate(q, 1.579917927758032, 7);
  sqcRYGate(q, 1.5853287428017975, 8);
  sqcRYGate(q, -1.5705670426019323, 9);
  sqcRYGate(q, 1.570365459618139, 10);
  sqcRYGate(q, 1.563467981603181, 11);

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
