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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 1.2848434558549133, 0);
  sqcRYGate(q, -2.2299462015996117, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6302532618413066, 0);
  sqcRYGate(q, 1.6367319301458636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.726787205255256, 1);
  sqcRYGate(q, -1.9994273419285298, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.11568203442562, 1);
  sqcRYGate(q, -0.0895412845627766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8004574628559893, 2);
  sqcRYGate(q, 1.2310768568524237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6586007394914075, 2);
  sqcRYGate(q, -1.4242061927846206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6036782842477316, 0);
  sqcRYGate(q, -1.8685404944207542, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0292067731447665, 0);
  sqcRYGate(q, -1.3131670358766494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.435576439583966, 1);
  sqcRYGate(q, -1.060567718713842, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5666622314127654, 1);
  sqcRYGate(q, 2.7726419897111327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4480764875511034, 2);
  sqcRYGate(q, 2.5013357020250493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.123900354169146, 2);
  sqcRYGate(q, -1.35648637064528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8407544993884679, 0);
  sqcRYGate(q, 2.8947179699494083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.679362376831359, 0);
  sqcRYGate(q, -2.47196918509622, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5152443288276425, 1);
  sqcRYGate(q, -2.6518090472200364, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6475153680200174, 1);
  sqcRYGate(q, -1.9157035349794451, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9895719935485734, 2);
  sqcRYGate(q, -2.306788856235664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7441496441067974, 2);
  sqcRYGate(q, 1.2015290066540376, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7592912768281552, 0);
  sqcRYGate(q, -0.46397509409399296, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6187353729062816, 0);
  sqcRYGate(q, 2.540240191351848, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5075686326484234, 1);
  sqcRYGate(q, 1.1369523607525063, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1569592998380704, 1);
  sqcRYGate(q, 2.8387478035664335, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5390812984098816, 2);
  sqcRYGate(q, -1.137105981230824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22828966212629975, 2);
  sqcRYGate(q, -0.9915819815860657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.195546729200249, 0);
  sqcRYGate(q, -0.874023060536719, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23406171452173832, 0);
  sqcRYGate(q, -1.1050659461951187, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.715051192262479, 1);
  sqcRYGate(q, -1.584537382755098, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.053858760624764, 1);
  sqcRYGate(q, 0.7772917354582944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6293812363183283, 2);
  sqcRYGate(q, -3.019365457244357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8859631493720511, 2);
  sqcRYGate(q, -2.5477397688467462, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3357334520531374, 0);
  sqcRYGate(q, 0.3488209374152082, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2899761796694973, 0);
  sqcRYGate(q, -0.032353692391951114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6388303308195016, 1);
  sqcRYGate(q, -0.5077503254679279, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.045648733303961, 1);
  sqcRYGate(q, 1.33787214916281, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1187783855227997, 2);
  sqcRYGate(q, -0.585802229112074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.136654538919821, 2);
  sqcRYGate(q, -0.6849437406765161, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7830507456109335, 0);
  sqcRYGate(q, 2.8306968528052083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8746587095700046, 0);
  sqcRYGate(q, -0.7399658717269263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8660128174815296, 1);
  sqcRYGate(q, -0.340291556351694, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.31933102415233605, 1);
  sqcRYGate(q, -2.7512982282986753, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5213101008613843, 2);
  sqcRYGate(q, -0.3033298685209216, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.33975975837744016, 2);
  sqcRYGate(q, -0.11183506677776922, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8509798358147982, 0);
  sqcRYGate(q, -0.39191676496799477, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8748482876164294, 0);
  sqcRYGate(q, 0.6175277158067399, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1446044422125365, 1);
  sqcRYGate(q, 1.923026898993605, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8720598594221272, 1);
  sqcRYGate(q, 2.1488641568088775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2791743646217197, 2);
  sqcRYGate(q, -0.41864517641622445, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.447139222604547, 2);
  sqcRYGate(q, -0.31203042999257447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7429258876158487, 0);
  sqcRYGate(q, -0.5622155522143906, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.537157039295877, 0);
  sqcRYGate(q, -1.3591304931341848, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7783369859859075, 1);
  sqcRYGate(q, 0.11300316840358082, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0904772626243466, 1);
  sqcRYGate(q, 1.6883781922063417, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5154937974988765, 2);
  sqcRYGate(q, 2.998055797152015, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9038397929021533, 2);
  sqcRYGate(q, -1.3322682141974838, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4517605573474537, 0);
  sqcRYGate(q, -0.2724263714134493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1723042031920325, 0);
  sqcRYGate(q, -1.1538163368773429, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.753215872944441, 1);
  sqcRYGate(q, -1.8994493154963088, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.709126269523208, 1);
  sqcRYGate(q, 0.708649854674446, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2258955669326594, 2);
  sqcRYGate(q, -0.4572779688458164, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.57877965632087, 2);
  sqcRYGate(q, 0.6504812982753787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4649424600942584, 0);
  sqcRYGate(q, -0.059722505476325884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5989891668159137, 0);
  sqcRYGate(q, -2.338071243972213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2323448879432357, 1);
  sqcRYGate(q, 0.914856196637928, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.091832344800735, 1);
  sqcRYGate(q, 2.563320806172607, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0441918936622256, 2);
  sqcRYGate(q, -0.8380112228172739, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.765769814661697, 2);
  sqcRYGate(q, -0.729262350215663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4465850771816422, 0);
  sqcRYGate(q, 0.06127715896407539, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.493171063902241, 0);
  sqcRYGate(q, -0.7333466993673107, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.612346157682079, 1);
  sqcRYGate(q, 1.1658815102470024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2773672013943154, 1);
  sqcRYGate(q, -0.7052143583272622, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9277201072643304, 2);
  sqcRYGate(q, -1.848931945952251, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.42354591646807194, 2);
  sqcRYGate(q, -0.8084730331163436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4918055057174242, 0);
  sqcRYGate(q, 2.389373159664287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.84301545418347, 0);
  sqcRYGate(q, -3.0610096064650056, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5165986652187349, 1);
  sqcRYGate(q, -0.2469500167223991, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5772851320883605, 1);
  sqcRYGate(q, -1.7888563061794809, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7992347235729619, 2);
  sqcRYGate(q, -1.454178944861126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2128186561309134, 2);
  sqcRYGate(q, 3.131228182434536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0747867777385895, 0);
  sqcRYGate(q, -2.2537737910979354, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9202485642299056, 0);
  sqcRYGate(q, -0.7049824917113714, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2726849594903205, 1);
  sqcRYGate(q, -0.4378356995198338, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8073074560427198, 1);
  sqcRYGate(q, 0.31840843253894047, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2411570567640435, 2);
  sqcRYGate(q, -1.7163566073343663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.81536586021135, 2);
  sqcRYGate(q, 1.393739103630672, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.33089775262931154, 0);
  sqcRYGate(q, -2.7341452168821174, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.524121459065677, 0);
  sqcRYGate(q, 1.6474278568543228, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.57078661072575, 1);
  sqcRYGate(q, 2.890040021515699, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0395377537207002, 1);
  sqcRYGate(q, -2.7194034703273275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1166710603949577, 2);
  sqcRYGate(q, 2.468122658129297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8583607619668809, 2);
  sqcRYGate(q, -0.5215447046105116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9128376423932908, 0);
  sqcRYGate(q, -1.5489950446773155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7080027179293873, 0);
  sqcRYGate(q, 0.35182030386014645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.479414860065277, 1);
  sqcRYGate(q, 2.0962604499758113, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8944245328110267, 1);
  sqcRYGate(q, -2.5679780018571647, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.23082245184648648, 2);
  sqcRYGate(q, 2.85033284064695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.67085417851208, 2);
  sqcRYGate(q, 1.2898577149082582, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8137264641715077, 0);
  sqcRYGate(q, 1.4584405828842923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.219932776108662, 0);
  sqcRYGate(q, -2.0612154760212444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9110370381005937, 1);
  sqcRYGate(q, -2.505170122199981, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7192106243386522, 1);
  sqcRYGate(q, 1.1511660420890752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4858066999911899, 2);
  sqcRYGate(q, -0.20670583461181646, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.24203472115903146, 2);
  sqcRYGate(q, -2.633616787459008, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8438471169954893, 0);
  sqcRYGate(q, 0.2758917861565403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.494954381694149, 0);
  sqcRYGate(q, -2.5141357550298697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7030372395371094, 1);
  sqcRYGate(q, -1.1946713646309417, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7343070575185173, 1);
  sqcRYGate(q, 2.8728057845162676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1118535385356076, 2);
  sqcRYGate(q, -2.553007648631809, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4401500077074054, 2);
  sqcRYGate(q, 1.467390453558799, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.465119786715741, 0);
  sqcRYGate(q, -2.647818942540285, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.49693013797542807, 0);
  sqcRYGate(q, -0.8251310195266814, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4735352669254152, 1);
  sqcRYGate(q, -0.1839097847561675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.073357082098026, 1);
  sqcRYGate(q, 1.6581382458275657, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0714042833088122, 2);
  sqcRYGate(q, 0.8446049500221209, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.632781874122997, 2);
  sqcRYGate(q, -1.6575943710005436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1073087435636015, 0);
  sqcRYGate(q, 0.0691428454205695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.415030088283398, 0);
  sqcRYGate(q, 1.4657381884405416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4324728590989828, 1);
  sqcRYGate(q, -2.4734698616324096, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9394993546135506, 1);
  sqcRYGate(q, 0.9606429230509299, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.209628226483983, 2);
  sqcRYGate(q, -2.7373685637595546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3214621274470062, 2);
  sqcRYGate(q, -1.7374853954025307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7622500590520973, 0);
  sqcRYGate(q, 2.8154738870645883, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7295325565613995, 0);
  sqcRYGate(q, 2.440917910365416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9753124077619297, 1);
  sqcRYGate(q, 2.8246828064477154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.09205568294182359, 1);
  sqcRYGate(q, -2.8325914947674105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7401289242344422, 2);
  sqcRYGate(q, 2.8729872142262702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9186192309916066, 2);
  sqcRYGate(q, -0.10090210739485261, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9862992105759698, 0);
  sqcRYGate(q, -0.23247788292901198, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.996147836123259, 0);
  sqcRYGate(q, -0.2571429077836065, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.336286410252476, 1);
  sqcRYGate(q, -0.7714930002400019, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.734314165655981, 1);
  sqcRYGate(q, -2.6980716694798623, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4481339318831132, 2);
  sqcRYGate(q, 1.6593271546606347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0153719030144908, 2);
  sqcRYGate(q, 0.03356883538233186, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8194469076160473, 0);
  sqcRYGate(q, -2.159729660105943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7918514926133007, 0);
  sqcRYGate(q, 0.8270819416314819, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8386446923357989, 1);
  sqcRYGate(q, 0.7831980934532023, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2037937873950664, 1);
  sqcRYGate(q, -2.597758795844282, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.829239060884258, 2);
  sqcRYGate(q, 1.7678447917101896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3549207399912246, 2);
  sqcRYGate(q, 0.3118975508727999, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10509188243064038, 0);
  sqcRYGate(q, 1.2265629688685185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8103272469629205, 0);
  sqcRYGate(q, 0.7059440818517455, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0750689328170127, 1);
  sqcRYGate(q, 0.544945472908922, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6967758657914922, 1);
  sqcRYGate(q, 2.5234451759037384, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1009239856395459, 2);
  sqcRYGate(q, 1.8290514948825827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1927346209837548, 2);
  sqcRYGate(q, 1.3292834634514001, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4830262895971154, 0);
  sqcRYGate(q, 2.3950875955747377, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1393971290454736, 0);
  sqcRYGate(q, 0.7620696287062856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4596612835837854, 1);
  sqcRYGate(q, 1.7579949105904191, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.141411475183635, 1);
  sqcRYGate(q, -0.4642855481773589, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8337103346385573, 2);
  sqcRYGate(q, 1.859017399460619, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1633729117069773, 2);
  sqcRYGate(q, 1.3583530968654598, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9836258152909405, 0);
  sqcRYGate(q, -1.6513719352481842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0781561971369156, 0);
  sqcRYGate(q, 2.9502719245613003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6533343316385846, 1);
  sqcRYGate(q, 0.16354491728518197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5195011602367609, 1);
  sqcRYGate(q, 0.5749411018765589, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.09931503688648, 2);
  sqcRYGate(q, 2.1089073728975656, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.222522236991214, 2);
  sqcRYGate(q, 0.6516889020579022, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8909662376757923, 0);
  sqcRYGate(q, -0.2702178373068298, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3865695854506315, 0);
  sqcRYGate(q, -3.09165662842701, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8005129753115288, 1);
  sqcRYGate(q, -0.3549400629031636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2670300447711778, 1);
  sqcRYGate(q, -2.2081529373578936, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5233685569085118, 2);
  sqcRYGate(q, 1.5512139135610645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2233507988293288, 2);
  sqcRYGate(q, -2.5644691815883878, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7040196853481204, 0);
  sqcRYGate(q, 1.3562795733968995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4019085939564433, 0);
  sqcRYGate(q, -2.1093941005866483, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.829191062066668, 1);
  sqcRYGate(q, -2.1115724754598597, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8365586539477056, 1);
  sqcRYGate(q, -1.0909818291106506, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.951369199770433, 2);
  sqcRYGate(q, 0.9513875884122439, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6115160834497173, 2);
  sqcRYGate(q, 1.4420268835696461, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3649968435091635, 0);
  sqcRYGate(q, 1.3147037020945112, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1083882762991681, 0);
  sqcRYGate(q, 2.4088088018245357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1146016092026225, 1);
  sqcRYGate(q, 2.751428908747217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.888286940637892, 1);
  sqcRYGate(q, -2.4890347066666596, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2875234673811111, 2);
  sqcRYGate(q, -1.8927702746305506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1054357952899236, 2);
  sqcRYGate(q, 2.7882410968070706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0561065566956822, 0);
  sqcRYGate(q, 1.233793273676, 1);
  sqcRYGate(q, 2.170358955948914, 2);
  sqcRYGate(q, 0.6305092143715766, 3);

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
