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

  sqcRYGate(q, 2.0678674219685025, 0);
  sqcRYGate(q, 2.6546770929264474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1404462416238914, 0);
  sqcRYGate(q, -0.3529151474903553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.127558838048924, 2);
  sqcRYGate(q, -1.4064640123769632, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6129376421612607, 2);
  sqcRYGate(q, -2.074268414165748, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3197400294216157, 4);
  sqcRYGate(q, 1.4328752802334686, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.43405077820518295, 4);
  sqcRYGate(q, -0.7641384931629318, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8455092012103673, 6);
  sqcRYGate(q, 2.028428425198028, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2709265227042588, 6);
  sqcRYGate(q, -1.581892930108299, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.772669676264095, 8);
  sqcRYGate(q, -2.506131148820152, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9353510791888282, 8);
  sqcRYGate(q, 1.3769807933341354, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.29647909097781033, 10);
  sqcRYGate(q, 1.472069860214962, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.7815522898509255, 10);
  sqcRYGate(q, 0.371464159236378, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.1081639407118358, 0);
  sqcRYGate(q, -1.273981539881033, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7565196142061854, 0);
  sqcRYGate(q, 0.42913559766075465, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.919598935934556, 2);
  sqcRYGate(q, 3.0033571802636523, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.28900675531131803, 2);
  sqcRYGate(q, 0.3186000773606601, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.51530602617152, 4);
  sqcRYGate(q, -1.3578527869277437, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.7056091452888493, 4);
  sqcRYGate(q, 0.16147526911125443, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.0003588172584355, 6);
  sqcRYGate(q, -0.7125978175437664, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.045079553553086155, 6);
  sqcRYGate(q, -3.1393398500931453, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.0454777192897664, 8);
  sqcRYGate(q, -2.0352453657226404, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.3572499226649301, 8);
  sqcRYGate(q, 2.254679826410454, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.6154322299480199, 1);
  sqcRYGate(q, -1.2022756274380386, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.099011182448298, 1);
  sqcRYGate(q, 1.7422317077131644, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3127035193582479, 3);
  sqcRYGate(q, -2.2143804534911706, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.4778207542169341, 3);
  sqcRYGate(q, 0.4518990253957247, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5989917331290846, 5);
  sqcRYGate(q, -1.7113195784138007, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.7728331083083635, 5);
  sqcRYGate(q, 0.5000589549531382, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.0283727896520698, 7);
  sqcRYGate(q, 0.8246514948599796, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.1427158586724975, 7);
  sqcRYGate(q, 3.1409773916964565, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.4075980763242804, 9);
  sqcRYGate(q, -1.5854445266755053, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.2037870358920193, 9);
  sqcRYGate(q, -1.7212343564591803, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.130605799126393, 0);
  sqcRYGate(q, -1.3961910419339194, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3498133037933047, 0);
  sqcRYGate(q, -1.279072954512695, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.766087435199596, 1);
  sqcRYGate(q, 0.7605532904557751, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6637329759900172, 1);
  sqcRYGate(q, -0.3579512646458529, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1798475862997986, 2);
  sqcRYGate(q, 0.0050233961482915035, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.16963521173697862, 2);
  sqcRYGate(q, 0.44156984913646813, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.5447574360295468, 3);
  sqcRYGate(q, 1.5775897754916546, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.929837896876536, 3);
  sqcRYGate(q, 2.1260642197952135, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4943185611444116, 4);
  sqcRYGate(q, 0.8787699863745759, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.8508818941000293, 4);
  sqcRYGate(q, 0.6657718518758581, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.08670684393277739, 5);
  sqcRYGate(q, 0.7839648880924681, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.30419279933284304, 5);
  sqcRYGate(q, -0.1322791670806822, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4922887103739582, 6);
  sqcRYGate(q, -2.391998928445976, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.0006024302842346785, 6);
  sqcRYGate(q, 0.0028633063929174364, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -1.925459319126193, 7);
  sqcRYGate(q, 1.7593068021265745, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.11071623935200145, 7);
  sqcRYGate(q, -0.008939267264866047, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.6127047853380643, 8);
  sqcRYGate(q, -2.8386015585239783, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 2.7107779046137086, 8);
  sqcRYGate(q, -2.7846539055495505, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 2.4463333476336393, 9);
  sqcRYGate(q, -0.52264012005185, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.3013978280168388, 9);
  sqcRYGate(q, -1.6640180525663464, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.25907156406988063, 0);
  sqcRYGate(q, 0.6912171736864914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5412383512933805, 0);
  sqcRYGate(q, 2.6820393621270777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8327588443099105, 2);
  sqcRYGate(q, -0.6791153207670773, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9731151527176323, 2);
  sqcRYGate(q, -1.1297364159763852, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1755792131119622, 4);
  sqcRYGate(q, -0.19971982747056727, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.598810233609818, 4);
  sqcRYGate(q, 2.177297344874803, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2925919638912546, 6);
  sqcRYGate(q, -1.068689190114709, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8865574483921463, 6);
  sqcRYGate(q, -0.912460861347312, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.15422829126790996, 8);
  sqcRYGate(q, -0.8633314962827535, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8501839650168416, 8);
  sqcRYGate(q, -1.6955626701922748, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.9794186129854685, 10);
  sqcRYGate(q, -2.656136055782238, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.48540349863209364, 10);
  sqcRYGate(q, 1.5278940862025703, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4661943722797988, 0);
  sqcRYGate(q, -0.4309548637646268, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.535353754897411, 0);
  sqcRYGate(q, -0.6109165957456959, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6002341145679451, 2);
  sqcRYGate(q, -1.5299373188557597, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.08725512888826042, 2);
  sqcRYGate(q, 2.2155388766598354, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9512007722039577, 4);
  sqcRYGate(q, -1.4877441699569538, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.0030658081730736697, 4);
  sqcRYGate(q, -0.08128096663197651, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.0135466999959801, 6);
  sqcRYGate(q, -0.7950513965153253, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.021369215059245585, 6);
  sqcRYGate(q, -0.010892381566183005, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.076468416115251, 8);
  sqcRYGate(q, -1.9752745320744811, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.2980227934877875, 8);
  sqcRYGate(q, 2.761095207155522, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.9711600094998364, 1);
  sqcRYGate(q, 2.4532792689951743, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6687077419667506, 1);
  sqcRYGate(q, 2.354330218346374, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5355126868798727, 3);
  sqcRYGate(q, -3.0050662451459624, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8616155476004019, 3);
  sqcRYGate(q, -2.3076815264699015, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6006269917434324, 5);
  sqcRYGate(q, -2.9355161465477155, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5600549064092047, 5);
  sqcRYGate(q, 0.07973268686116568, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.0417202658577236, 7);
  sqcRYGate(q, -2.692916068421191, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.1116029351904886, 7);
  sqcRYGate(q, 3.135396081948838, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.6288503522321058, 9);
  sqcRYGate(q, 1.7757876131382464, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.1594726300939007, 9);
  sqcRYGate(q, 0.0054872180994177885, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.6186254960329707, 0);
  sqcRYGate(q, 1.5655574759736999, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.923833653259233, 0);
  sqcRYGate(q, -0.24292498415095273, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.185276061168673, 1);
  sqcRYGate(q, -1.7480972292684163, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1329317262379766, 1);
  sqcRYGate(q, 2.996587573127116, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.332244574468693, 2);
  sqcRYGate(q, 0.005148504715446478, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.8927014021326025, 2);
  sqcRYGate(q, 0.6674076521086568, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.354527092589198, 3);
  sqcRYGate(q, -1.4752200738807506, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.563391679466226, 3);
  sqcRYGate(q, -0.9040210737298632, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9539365170849372, 4);
  sqcRYGate(q, -2.3227599170510884, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.10538481787214504, 4);
  sqcRYGate(q, -2.7796967898422573, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.3750735119153203, 5);
  sqcRYGate(q, 1.0912097848576847, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9872577510502047, 5);
  sqcRYGate(q, -3.08920710893175, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8832810266571138, 6);
  sqcRYGate(q, -1.5960083970359387, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.5959773966996947, 6);
  sqcRYGate(q, 3.1124210937600103, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 1.5009527055935727, 7);
  sqcRYGate(q, -2.5458085373640547, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.00498240174503728, 7);
  sqcRYGate(q, 0.0015594721608858109, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.49197705051277735, 8);
  sqcRYGate(q, 0.23945027474822206, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -2.161212018160305, 8);
  sqcRYGate(q, 2.73113650810058, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.6674995364685872, 9);
  sqcRYGate(q, 2.7420378759093387, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.13181425254272824, 9);
  sqcRYGate(q, -3.1287212843581877, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.254865033248733, 0);
  sqcRYGate(q, 0.40220155222878723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.194521172020367, 0);
  sqcRYGate(q, -1.0066741936601247, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.20074813330824, 2);
  sqcRYGate(q, -2.704959200135086, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3642163667858842, 2);
  sqcRYGate(q, 1.7827536371964514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.726914994572847, 4);
  sqcRYGate(q, 2.0999828867627093, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0460935417135016, 4);
  sqcRYGate(q, -0.4252184652820139, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.394421513296587, 6);
  sqcRYGate(q, 1.2742786058607845, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.194754582174046, 6);
  sqcRYGate(q, -2.4224558204636315, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3446294672325658, 8);
  sqcRYGate(q, -2.4721041145158313, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3972252282276525, 8);
  sqcRYGate(q, 2.9866086660244244, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0570750113357956, 10);
  sqcRYGate(q, -2.3072957530590457, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.1019150313568113, 10);
  sqcRYGate(q, -0.29348230624594923, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5379578617931119, 0);
  sqcRYGate(q, -2.8575566770696432, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3058460835870738, 0);
  sqcRYGate(q, 1.7434599812854519, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8482153837720245, 2);
  sqcRYGate(q, 2.015860256898528, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9645319035385835, 2);
  sqcRYGate(q, 0.04480113346442405, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.070342123922419, 4);
  sqcRYGate(q, -2.2950615535048904, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.1376887104459512, 4);
  sqcRYGate(q, -2.7409750852843744, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.8533742372498079, 6);
  sqcRYGate(q, 2.4798132777319153, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.042395601447116, 6);
  sqcRYGate(q, -0.5473578934238279, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.7681680573614783, 8);
  sqcRYGate(q, 0.2013120506731525, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.1138629267858127, 8);
  sqcRYGate(q, -0.5110104730471141, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.8479173873260113, 1);
  sqcRYGate(q, -1.9492493222909208, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.09971889716832345, 1);
  sqcRYGate(q, -0.25860051465412853, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0770443709788853, 3);
  sqcRYGate(q, 0.6852582458471498, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.4124840896499655, 3);
  sqcRYGate(q, 2.9558795643440865, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9902069934502542, 5);
  sqcRYGate(q, -2.6900803721688265, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.03713238491926684, 5);
  sqcRYGate(q, -0.1618964753328744, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.5375455538400016, 7);
  sqcRYGate(q, -0.10411329593774632, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.047633047324891, 7);
  sqcRYGate(q, -0.025243465860299352, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.2892137536634296, 9);
  sqcRYGate(q, -2.6378331690441694, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.2439988457205544, 9);
  sqcRYGate(q, -1.5650297768542822, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.3386876843855608, 0);
  sqcRYGate(q, -3.0114096262928034, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2763947084896001, 0);
  sqcRYGate(q, 0.09745552233836385, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.05489261664147094, 1);
  sqcRYGate(q, -1.1559800032029393, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.26278417692770334, 1);
  sqcRYGate(q, 1.1925706733415218, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8491121458557647, 2);
  sqcRYGate(q, 0.8428910152128147, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.2287027856251596, 2);
  sqcRYGate(q, -2.192145907137328, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -3.019186775186397, 3);
  sqcRYGate(q, -2.516829031777038, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2307140993386123, 3);
  sqcRYGate(q, -2.4741854563374277, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0679285730615309, 4);
  sqcRYGate(q, -1.154957925660353, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.3106324766135504, 4);
  sqcRYGate(q, -0.369390507647215, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.15742590787369615, 5);
  sqcRYGate(q, -2.9363635511851163, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.01048816736842273, 5);
  sqcRYGate(q, -0.0069639953187464534, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2265035790428476, 6);
  sqcRYGate(q, 1.6209133500482449, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -0.04270673202809293, 6);
  sqcRYGate(q, 3.083960568192674, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 1.5333724885915405, 7);
  sqcRYGate(q, -2.4296256443121753, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.006686055689280627, 7);
  sqcRYGate(q, -3.1298765728263103, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.2912517844619553, 8);
  sqcRYGate(q, 0.15647362132624298, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.4903739536019414, 8);
  sqcRYGate(q, -1.6458026011543678, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.1004902052523744, 9);
  sqcRYGate(q, 0.46813656948892945, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.2383827256929305, 9);
  sqcRYGate(q, 3.122286092800748, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0522279368135896, 0);
  sqcRYGate(q, -0.751870339705544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2948399802197299, 0);
  sqcRYGate(q, -0.3755970712900142, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5770040013240756, 2);
  sqcRYGate(q, 0.7316859170104993, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5655598116969758, 2);
  sqcRYGate(q, 1.3133777427202382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.32833436617425, 4);
  sqcRYGate(q, 1.203090195760633, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.929602633532807, 4);
  sqcRYGate(q, -0.2011472445200999, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7439895228767384, 6);
  sqcRYGate(q, -2.9879203416636786, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5784652031024795, 6);
  sqcRYGate(q, -1.5653267544079421, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.23876019885831568, 8);
  sqcRYGate(q, 1.3910689452497123, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6395308185466249, 8);
  sqcRYGate(q, -2.0784373755892585, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.173482234468372, 10);
  sqcRYGate(q, 1.633382106239958, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2144796291330398, 10);
  sqcRYGate(q, -1.6863944210774335, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.8899226460621144, 0);
  sqcRYGate(q, 2.830649508344747, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.748855828136487, 0);
  sqcRYGate(q, -0.34710578657071367, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6760168524384969, 2);
  sqcRYGate(q, -0.3197354568061437, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.124387160281979, 2);
  sqcRYGate(q, -2.0956232094024743, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.8401973147203634, 4);
  sqcRYGate(q, 1.4509215287478072, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4956379812238065, 4);
  sqcRYGate(q, 1.4847594840490714, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.7703888044460814, 6);
  sqcRYGate(q, -2.9610609070896605, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.0479183321210668, 6);
  sqcRYGate(q, -0.4450941376479635, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.4246667675274043, 8);
  sqcRYGate(q, -1.9002419857520003, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.12383529089564771, 8);
  sqcRYGate(q, -1.6099689632179628, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.9216907894238708, 1);
  sqcRYGate(q, -2.0915029664135285, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.803434192234756, 1);
  sqcRYGate(q, 1.5361187855405878, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.377043884910769, 3);
  sqcRYGate(q, -2.8513229495917627, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8994652180443898, 3);
  sqcRYGate(q, 0.7599676725090054, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.5485679999665685, 5);
  sqcRYGate(q, 1.4132026575436907, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1200943938341834, 5);
  sqcRYGate(q, -3.1157418929124483, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.1552356845407754, 7);
  sqcRYGate(q, 1.1554784070433142, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.5347906566287115, 7);
  sqcRYGate(q, -2.94306469142842, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.2317345308042977, 9);
  sqcRYGate(q, 1.4915804808277278, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.568495114684393, 9);
  sqcRYGate(q, 3.1263466722815427, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.6315847610830231, 0);
  sqcRYGate(q, -2.793815456817764, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8712585007024485, 0);
  sqcRYGate(q, 1.8556732596903618, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2202474295661614, 1);
  sqcRYGate(q, 1.8938107579154302, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.993586056703756, 1);
  sqcRYGate(q, 1.6142530929724304, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.375096916464499, 2);
  sqcRYGate(q, 1.1853727591771852, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.0365062573090236, 2);
  sqcRYGate(q, 0.3249025398143006, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.6885491586464756, 3);
  sqcRYGate(q, -1.8703416673568434, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.752568393120892, 3);
  sqcRYGate(q, -1.7822900806631061, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5367557427689038, 4);
  sqcRYGate(q, -1.9297406396404375, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.09402632541378342, 4);
  sqcRYGate(q, 0.12882123497805065, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.9202934648363508, 5);
  sqcRYGate(q, 1.6108774843908937, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0084049278415232, 5);
  sqcRYGate(q, -0.032389740698561376, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5189097060303618, 6);
  sqcRYGate(q, -0.46622233802712554, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.0056139269056477625, 6);
  sqcRYGate(q, -1.5661025938290818, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -0.3668567228706805, 7);
  sqcRYGate(q, -1.6367460910432394, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.005498972357220627, 7);
  sqcRYGate(q, 0.005524273736221552, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5642804181699281, 8);
  sqcRYGate(q, -0.07348811182316341, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.00017571177703181994, 8);
  sqcRYGate(q, -0.02695260369066066, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.07401193920266814, 9);
  sqcRYGate(q, -2.796642296948945, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6037591389999692, 9);
  sqcRYGate(q, -3.1039083441414435, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4418527456901682, 0);
  sqcRYGate(q, -2.042192973284016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5603461133999551, 0);
  sqcRYGate(q, 1.085559619679287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.19779348937534, 2);
  sqcRYGate(q, 3.063138251074256, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.823259592339039, 2);
  sqcRYGate(q, 2.8771934527595797, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3505470867794305, 4);
  sqcRYGate(q, 2.2021935643302504, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5559038642729701, 4);
  sqcRYGate(q, 1.5969599199036746, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9796742284928044, 6);
  sqcRYGate(q, 0.2372564789622828, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1339448927516678, 6);
  sqcRYGate(q, 0.0007954183068497045, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1332155659336047, 8);
  sqcRYGate(q, -1.1412307616566078, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.00034954915940535713, 8);
  sqcRYGate(q, 0.05573051256060513, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.0011112306096539015, 10);
  sqcRYGate(q, -1.6696479770187527, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.02806177843371124, 10);
  sqcRYGate(q, 1.7162295062929154, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.736719478755357, 0);
  sqcRYGate(q, -0.9773274202399856, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.793926698316301, 0);
  sqcRYGate(q, -1.6857214287646176, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9494336310881106, 2);
  sqcRYGate(q, -2.250323898098411, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.47127346917285706, 2);
  sqcRYGate(q, 0.011242528758118535, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.6905464583029771, 4);
  sqcRYGate(q, -0.584175697289588, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.6701378692625728, 4);
  sqcRYGate(q, 0.029052946793620967, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.0586689148631065, 6);
  sqcRYGate(q, 0.07573661929063125, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.8704214999539555, 6);
  sqcRYGate(q, 0.2716151940502028, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0910238076970433, 8);
  sqcRYGate(q, -0.754873731069777, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.1368455886603663, 8);
  sqcRYGate(q, 1.5694863743383864, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.6905951913216377, 1);
  sqcRYGate(q, 2.118780869567658, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5222519512321877, 1);
  sqcRYGate(q, -2.3393583191856187, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.550209020129433, 3);
  sqcRYGate(q, -3.0012629662296364, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.7217140653850294, 3);
  sqcRYGate(q, -0.7935128214745255, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3274356231788096, 5);
  sqcRYGate(q, -0.345420307580933, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.028043512876001955, 5);
  sqcRYGate(q, 0.13073464540420002, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7141488056539318, 7);
  sqcRYGate(q, 2.521224153459343, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.018755223166327935, 7);
  sqcRYGate(q, 0.23415956106121405, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.6131684280713645, 9);
  sqcRYGate(q, 0.20594974296209664, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.591859142505978, 9);
  sqcRYGate(q, -0.0021732734717216924, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.42102768101420013, 0);
  sqcRYGate(q, 2.467278434612148, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.01409890359146, 0);
  sqcRYGate(q, 3.125469218920186, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7431557770594814, 1);
  sqcRYGate(q, 0.9859023762993752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0968437628215666, 1);
  sqcRYGate(q, -2.7962210042546882, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5161292167391514, 2);
  sqcRYGate(q, 1.5839695898578587, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 3.0808952805461733, 2);
  sqcRYGate(q, 3.10405119652688, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 3.113690470491484, 3);
  sqcRYGate(q, -2.1803579678618528, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.127384037292625, 3);
  sqcRYGate(q, -0.03508029394958896, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.873659392010197, 4);
  sqcRYGate(q, -1.4277439562372412, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.139770835193337, 4);
  sqcRYGate(q, 0.009938262170987144, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.206365388397356, 5);
  sqcRYGate(q, 3.1275568095433868, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.140798616117987, 5);
  sqcRYGate(q, -3.133456367772691, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6721537086416338, 6);
  sqcRYGate(q, -2.087815945366467, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.008597166527883893, 6);
  sqcRYGate(q, -1.571152878455269, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -1.186147169137235, 7);
  sqcRYGate(q, 3.088929177555161, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1408380166316983, 7);
  sqcRYGate(q, 3.138534935349223, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.408099150288894, 8);
  sqcRYGate(q, 1.441850276061469, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.010762746558260927, 8);
  sqcRYGate(q, -3.140939327667525, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.6763124627611317, 9);
  sqcRYGate(q, -0.7029161847445247, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5719965023822244, 9);
  sqcRYGate(q, -3.1366574777926126, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.32363753192759215, 0);
  sqcRYGate(q, -1.4398280722565342, 1);
  sqcRYGate(q, 0.4717332974232038, 2);
  sqcRYGate(q, 1.020645673316227, 3);
  sqcRYGate(q, 1.1322474704423464, 4);
  sqcRYGate(q, 3.136859448824733, 5);
  sqcRYGate(q, -0.21065128927476987, 6);
  sqcRYGate(q, -2.0664676945386637, 7);
  sqcRYGate(q, -2.567518519609268, 8);
  sqcRYGate(q, 1.5079310339284147, 9);
  sqcRYGate(q, 2.93238129778861, 10);
  sqcRYGate(q, -1.621761986324416, 11);

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
