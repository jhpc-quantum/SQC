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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.9767170511127423, 0);
  sqcRZGate(q, -0.6518205214445139, 0);
  sqcRYGate(q, -1.2432256392544476, 1);
  sqcRZGate(q, -0.8984067111577386, 1);
  sqcRYGate(q, 0.47731326123175555, 2);
  sqcRZGate(q, 1.7862663654094508, 2);
  sqcRYGate(q, -1.4371680941338987, 3);
  sqcRZGate(q, -2.8582079861809007, 3);
  sqcRYGate(q, -1.8881923248491985, 4);
  sqcRZGate(q, -0.9393595070123216, 4);
  sqcRYGate(q, 1.0445326241309907, 5);
  sqcRZGate(q, 2.3932476198926214, 5);
  sqcRYGate(q, -1.9268009927279621, 6);
  sqcRZGate(q, 1.5646034154049098, 6);
  sqcRYGate(q, 0.7739662400983384, 7);
  sqcRZGate(q, -1.510099274594877, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.196948041658776, 0);
  sqcRZGate(q, -0.4536614494238446, 0);
  sqcRYGate(q, 1.895553970221017, 1);
  sqcRZGate(q, -2.1513983734882505, 1);
  sqcRYGate(q, 1.566282114354873, 2);
  sqcRZGate(q, -0.2811699144952744, 2);
  sqcRYGate(q, -0.918002441338464, 3);
  sqcRZGate(q, -0.9065706491165778, 3);
  sqcRYGate(q, -1.1545579099208878, 4);
  sqcRZGate(q, 1.482425432549313, 4);
  sqcRYGate(q, 1.627429216639455, 5);
  sqcRZGate(q, -0.2375488588176367, 5);
  sqcRYGate(q, -2.68823327869965, 6);
  sqcRZGate(q, 0.16266639243198477, 6);
  sqcRYGate(q, -2.30927984755897, 7);
  sqcRZGate(q, 2.896848491810605, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.4404953649530046, 0);
  sqcRZGate(q, -2.3449616744066613, 0);
  sqcRYGate(q, -2.7727685168181035, 1);
  sqcRZGate(q, -2.8415642824791862, 1);
  sqcRYGate(q, 1.7233006526614236, 2);
  sqcRZGate(q, -1.1067616321368912, 2);
  sqcRYGate(q, 3.0151429894497705, 3);
  sqcRZGate(q, -1.7464612078895925, 3);
  sqcRYGate(q, -1.4883222580484494, 4);
  sqcRZGate(q, -0.9499433695525187, 4);
  sqcRYGate(q, 1.7200332182981897, 5);
  sqcRZGate(q, 0.1198784661900838, 5);
  sqcRYGate(q, 1.7757944476793084, 6);
  sqcRZGate(q, -2.1047529294837766, 6);
  sqcRYGate(q, 0.167040568276993, 7);
  sqcRZGate(q, 0.7315134025769614, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.8072467355341657, 0);
  sqcRZGate(q, 1.162977744286389, 0);
  sqcRYGate(q, -0.9912968142046248, 1);
  sqcRZGate(q, 2.9483423714454573, 1);
  sqcRYGate(q, -1.2009387180189386, 2);
  sqcRZGate(q, 1.6448671558397114, 2);
  sqcRYGate(q, -2.4609992988583986, 3);
  sqcRZGate(q, 0.3912657479415886, 3);
  sqcRYGate(q, -1.65815962049001, 4);
  sqcRZGate(q, -1.9255362864703631, 4);
  sqcRYGate(q, -2.7807287528584244, 5);
  sqcRZGate(q, -0.6658866483627282, 5);
  sqcRYGate(q, 1.1831687567377909, 6);
  sqcRZGate(q, -2.7727766268486733, 6);
  sqcRYGate(q, -1.4704757375920812, 7);
  sqcRZGate(q, -2.6463594108698256, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.6559230583761195, 0);
  sqcRZGate(q, 0.1767925315899001, 0);
  sqcRYGate(q, 2.9336995814758544, 1);
  sqcRZGate(q, -2.541384417087514, 1);
  sqcRYGate(q, 3.0531098975893065, 2);
  sqcRZGate(q, -0.8971021371951559, 2);
  sqcRYGate(q, 2.4788261683777475, 3);
  sqcRZGate(q, -2.132777024664017, 3);
  sqcRYGate(q, 2.1129259113583174, 4);
  sqcRZGate(q, 1.8708380380702625, 4);
  sqcRYGate(q, -0.625586609182177, 5);
  sqcRZGate(q, 0.02791263970778868, 5);
  sqcRYGate(q, -2.754330639010111, 6);
  sqcRZGate(q, 2.4299639008843106, 6);
  sqcRYGate(q, -2.3349900791004514, 7);
  sqcRZGate(q, 2.185208388540317, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.81497488851599, 0);
  sqcRZGate(q, -2.66287401092028, 0);
  sqcRYGate(q, -2.2094651012385462, 1);
  sqcRZGate(q, 1.0509406043739304, 1);
  sqcRYGate(q, -1.7192782689011485, 2);
  sqcRZGate(q, -1.4985871718785297, 2);
  sqcRYGate(q, -1.4626927531883687, 3);
  sqcRZGate(q, -1.060964765173842, 3);
  sqcRYGate(q, 0.5806210378049439, 4);
  sqcRZGate(q, -0.3880578794374517, 4);
  sqcRYGate(q, 0.7658009741683731, 5);
  sqcRZGate(q, -0.08562286470273874, 5);
  sqcRYGate(q, -1.8309769350898126, 6);
  sqcRZGate(q, -1.7491695709821573, 6);
  sqcRYGate(q, 1.2946803844502393, 7);
  sqcRZGate(q, -3.1191880224373345, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.16761295085177083, 0);
  sqcRZGate(q, -2.767484714855883, 0);
  sqcRYGate(q, 2.4596570811722054, 1);
  sqcRZGate(q, -2.87804126960833, 1);
  sqcRYGate(q, 1.5094963127458614, 2);
  sqcRZGate(q, 1.321981246923225, 2);
  sqcRYGate(q, 0.4965772132621682, 3);
  sqcRZGate(q, -1.2370082101792061, 3);
  sqcRYGate(q, 0.384907271527438, 4);
  sqcRZGate(q, -1.0875748997086403, 4);
  sqcRYGate(q, 0.40889657567210497, 5);
  sqcRZGate(q, 0.6423940966027235, 5);
  sqcRYGate(q, 3.010030754902554, 6);
  sqcRZGate(q, 0.8346518764002178, 6);
  sqcRYGate(q, 2.1134663881803966, 7);
  sqcRZGate(q, 0.5363959580333985, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.9163965633946372, 0);
  sqcRZGate(q, 2.2509414380730073, 0);
  sqcRYGate(q, 1.0630761041884735, 1);
  sqcRZGate(q, -2.751959414527357, 1);
  sqcRYGate(q, 1.0059922869279472, 2);
  sqcRZGate(q, -3.117392827510756, 2);
  sqcRYGate(q, -0.9282703139307049, 3);
  sqcRZGate(q, 2.7031581704188485, 3);
  sqcRYGate(q, -0.11930833459348393, 4);
  sqcRZGate(q, -1.6309554988310238, 4);
  sqcRYGate(q, 2.168395529998948, 5);
  sqcRZGate(q, -1.1465710413730825, 5);
  sqcRYGate(q, 2.6063554861548313, 6);
  sqcRZGate(q, -1.5083468875135484, 6);
  sqcRYGate(q, 1.6724060148139293, 7);
  sqcRZGate(q, -0.5123976306552818, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.9478437080467288, 0);
  sqcRZGate(q, -0.24788285366862717, 0);
  sqcRYGate(q, 0.11410557815601141, 1);
  sqcRZGate(q, -1.4078694909541383, 1);
  sqcRYGate(q, -1.9016173366409284, 2);
  sqcRZGate(q, -1.5192213735882385, 2);
  sqcRYGate(q, 1.8228217531271538, 3);
  sqcRZGate(q, 0.19783296811818976, 3);
  sqcRYGate(q, -0.5342776544967982, 4);
  sqcRZGate(q, -0.34080982399602955, 4);
  sqcRYGate(q, -1.8443872733648548, 5);
  sqcRZGate(q, -0.24471346246680586, 5);
  sqcRYGate(q, 1.3573045172077112, 6);
  sqcRZGate(q, 0.16329598519216582, 6);
  sqcRYGate(q, -1.6509662549451587, 7);
  sqcRZGate(q, 2.1943260939685065, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5068006440521102, 0);
  sqcRZGate(q, 1.9094131325466073, 0);
  sqcRYGate(q, 1.357899824803895, 1);
  sqcRZGate(q, 1.2884121422082817, 1);
  sqcRYGate(q, 1.2939973539184535, 2);
  sqcRZGate(q, -2.4107208450814084, 2);
  sqcRYGate(q, 0.5961231402029563, 3);
  sqcRZGate(q, 1.1016943527005205, 3);
  sqcRYGate(q, -3.0534067007752226, 4);
  sqcRZGate(q, 0.9348586791507675, 4);
  sqcRYGate(q, -2.287687326034136, 5);
  sqcRZGate(q, -0.1615558099693488, 5);
  sqcRYGate(q, -0.7435707668571093, 6);
  sqcRZGate(q, 2.0159766747920775, 6);
  sqcRYGate(q, -0.24612412236696102, 7);
  sqcRZGate(q, 0.7097559343648473, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.2990683709417805, 0);
  sqcRZGate(q, -0.5418972336331258, 0);
  sqcRYGate(q, 2.651855861350116, 1);
  sqcRZGate(q, 2.123736366854116, 1);
  sqcRYGate(q, -0.6107327860151415, 2);
  sqcRZGate(q, 1.7221936862863032, 2);
  sqcRYGate(q, 1.1438329643044312, 3);
  sqcRZGate(q, 2.8390254274095237, 3);
  sqcRYGate(q, 2.5183187106202802, 4);
  sqcRZGate(q, -1.5679485503403614, 4);
  sqcRYGate(q, -2.928422850380629, 5);
  sqcRZGate(q, 0.6244490924303959, 5);
  sqcRYGate(q, -0.7254135878939012, 6);
  sqcRZGate(q, -2.706446530425251, 6);
  sqcRYGate(q, 1.6035704028587987, 7);
  sqcRZGate(q, 1.2943255981995252, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.8950789845077579, 0);
  sqcRZGate(q, 0.19349821582209434, 0);
  sqcRYGate(q, 0.8150190150938235, 1);
  sqcRZGate(q, 2.3786212338535844, 1);
  sqcRYGate(q, 0.19611827162450826, 2);
  sqcRZGate(q, 2.1226335367861004, 2);
  sqcRYGate(q, 0.25971776718412415, 3);
  sqcRZGate(q, -1.0824679725028503, 3);
  sqcRYGate(q, -1.2635488638767702, 4);
  sqcRZGate(q, 0.44845456821422786, 4);
  sqcRYGate(q, 1.9473787336546662, 5);
  sqcRZGate(q, 1.4749266166192385, 5);
  sqcRYGate(q, -0.5665891887215331, 6);
  sqcRZGate(q, -2.2308310618564366, 6);
  sqcRYGate(q, 1.2817662930246687, 7);
  sqcRZGate(q, -0.10976403835792414, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.3032145795610233, 0);
  sqcRZGate(q, 0.1012765628011503, 0);
  sqcRYGate(q, -1.2465719425805863, 1);
  sqcRZGate(q, -0.6960274772150753, 1);
  sqcRYGate(q, -1.800036128017676, 2);
  sqcRZGate(q, 0.5707481073367106, 2);
  sqcRYGate(q, 1.595812896910213, 3);
  sqcRZGate(q, 2.785171463659168, 3);
  sqcRYGate(q, 0.8234299073859539, 4);
  sqcRZGate(q, -0.5340376383737017, 4);
  sqcRYGate(q, -1.364672850756845, 5);
  sqcRZGate(q, -3.0988557731289657, 5);
  sqcRYGate(q, -1.2618440501534076, 6);
  sqcRZGate(q, 1.782993496756731, 6);
  sqcRYGate(q, 2.385681406244336, 7);
  sqcRZGate(q, 0.6781482744860812, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.5467103123752417, 0);
  sqcRZGate(q, -1.614488501662211, 0);
  sqcRYGate(q, -0.13424902772375447, 1);
  sqcRZGate(q, -1.987329833105142, 1);
  sqcRYGate(q, -2.1704905960892624, 2);
  sqcRZGate(q, 2.7606438684249937, 2);
  sqcRYGate(q, 2.2553728195594687, 3);
  sqcRZGate(q, 1.7784263445643969, 3);
  sqcRYGate(q, -2.730802274934457, 4);
  sqcRZGate(q, 2.6039707368205587, 4);
  sqcRYGate(q, -2.8603891146626217, 5);
  sqcRZGate(q, -0.8455806451542713, 5);
  sqcRYGate(q, 0.3981286085857369, 6);
  sqcRZGate(q, -3.0630257394688396, 6);
  sqcRYGate(q, -1.4431706922806251, 7);
  sqcRZGate(q, 1.0626502209882795, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.3786825060024372, 0);
  sqcRZGate(q, 1.437901759869244, 0);
  sqcRYGate(q, -2.4584715097736916, 1);
  sqcRZGate(q, -2.1973280364477628, 1);
  sqcRYGate(q, -2.272504264851733, 2);
  sqcRZGate(q, -2.3654777778710034, 2);
  sqcRYGate(q, -2.9384823630273935, 3);
  sqcRZGate(q, 1.4804480540241673, 3);
  sqcRYGate(q, -1.496797297225501, 4);
  sqcRZGate(q, -0.12605536530439124, 4);
  sqcRYGate(q, -1.8087521774405069, 5);
  sqcRZGate(q, 2.947859424030797, 5);
  sqcRYGate(q, -2.51865759399595, 6);
  sqcRZGate(q, 2.1426636577848504, 6);
  sqcRYGate(q, -2.2227921265041077, 7);
  sqcRZGate(q, -0.6043601022052638, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.6606295984851114, 0);
  sqcRZGate(q, 0.4482450732097778, 0);
  sqcRYGate(q, -2.0144905519016407, 1);
  sqcRZGate(q, -1.8180652074452626, 1);
  sqcRYGate(q, -2.383927797185266, 2);
  sqcRZGate(q, -1.2503786654489335, 2);
  sqcRYGate(q, 1.6371257771824619, 3);
  sqcRZGate(q, -1.0461473850491425, 3);
  sqcRYGate(q, 0.6031106277525363, 4);
  sqcRZGate(q, 3.0555000890029897, 4);
  sqcRYGate(q, -1.3359052854927727, 5);
  sqcRZGate(q, -1.4179798803475927, 5);
  sqcRYGate(q, 0.937686121150163, 6);
  sqcRZGate(q, 1.6516310825476317, 6);
  sqcRYGate(q, 1.4565949767487076, 7);
  sqcRZGate(q, -1.9984718393848366, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.8454192523069128, 0);
  sqcRZGate(q, -2.993465250968616, 0);
  sqcRYGate(q, 0.2269190210865888, 1);
  sqcRZGate(q, 1.4973854331078806, 1);
  sqcRYGate(q, -0.46105289798303145, 2);
  sqcRZGate(q, 2.1784108915456453, 2);
  sqcRYGate(q, -0.5139599054326629, 3);
  sqcRZGate(q, -3.0302236675571805, 3);
  sqcRYGate(q, -0.5326888113417488, 4);
  sqcRZGate(q, -1.1924580705819645, 4);
  sqcRYGate(q, 1.4396595115907251, 5);
  sqcRZGate(q, 0.01701851680065388, 5);
  sqcRYGate(q, -0.17921483718690115, 6);
  sqcRZGate(q, -2.366900375355193, 6);
  sqcRYGate(q, 1.1048177988458678, 7);
  sqcRZGate(q, -3.0084934829875554, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.6499292593712487, 0);
  sqcRZGate(q, -2.2302463531410956, 0);
  sqcRYGate(q, 2.303807378260209, 1);
  sqcRZGate(q, 0.19302718776421712, 1);
  sqcRYGate(q, 0.3712250021880385, 2);
  sqcRZGate(q, -1.5274510488095319, 2);
  sqcRYGate(q, 0.45763252856249537, 3);
  sqcRZGate(q, -0.951461996326536, 3);
  sqcRYGate(q, 1.5953511643141352, 4);
  sqcRZGate(q, -2.522385555145271, 4);
  sqcRYGate(q, 2.1506802376796763, 5);
  sqcRZGate(q, -0.6367556541955369, 5);
  sqcRYGate(q, -1.6708441837926085, 6);
  sqcRZGate(q, 0.4980980080229556, 6);
  sqcRYGate(q, 2.0419733436057714, 7);
  sqcRZGate(q, 1.0072817981297058, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.210447349188164, 0);
  sqcRZGate(q, -0.34929827534552876, 0);
  sqcRYGate(q, -0.6258653131115013, 1);
  sqcRZGate(q, -1.4929643234335932, 1);
  sqcRYGate(q, 2.0813915784388186, 2);
  sqcRZGate(q, -0.5584537872477386, 2);
  sqcRYGate(q, 1.5039631981516592, 3);
  sqcRZGate(q, -0.4617392800000699, 3);
  sqcRYGate(q, 1.6111610236802245, 4);
  sqcRZGate(q, 0.36166494397721, 4);
  sqcRYGate(q, -1.8984047163399111, 5);
  sqcRZGate(q, -1.997935978318606, 5);
  sqcRYGate(q, 0.31445665807480694, 6);
  sqcRZGate(q, 0.11704990165909179, 6);
  sqcRYGate(q, -2.057083616728682, 7);
  sqcRZGate(q, 0.6494371693165224, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.6098421007308064, 0);
  sqcRZGate(q, -2.222717852030293, 0);
  sqcRYGate(q, -2.985486981720324, 1);
  sqcRZGate(q, -0.5741038084578065, 1);
  sqcRYGate(q, -2.988574272293644, 2);
  sqcRZGate(q, -1.9219128718011043, 2);
  sqcRYGate(q, 0.6332871130145632, 3);
  sqcRZGate(q, 3.051781535080778, 3);
  sqcRYGate(q, 1.8092122292127844, 4);
  sqcRZGate(q, 2.2315356525788514, 4);
  sqcRYGate(q, -1.616726522640039, 5);
  sqcRZGate(q, 3.015580125894958, 5);
  sqcRYGate(q, -0.7616775662037932, 6);
  sqcRZGate(q, 1.1631507429269679, 6);
  sqcRYGate(q, -2.668735474221976, 7);
  sqcRZGate(q, -0.8967796814305187, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.9076177165046193, 0);
  sqcRZGate(q, -1.9944512761294588, 0);
  sqcRYGate(q, 1.1945248684776324, 1);
  sqcRZGate(q, 0.7801170677183036, 1);
  sqcRYGate(q, 0.9680508186933843, 2);
  sqcRZGate(q, -2.6896124410263007, 2);
  sqcRYGate(q, -1.2911070612441824, 3);
  sqcRZGate(q, -2.4558787975187184, 3);
  sqcRYGate(q, -1.0621113882480637, 4);
  sqcRZGate(q, -2.0075016132402235, 4);
  sqcRYGate(q, 1.3244133616934866, 5);
  sqcRZGate(q, 0.026638014066286377, 5);
  sqcRYGate(q, 0.6014310688671776, 6);
  sqcRZGate(q, -0.5691530914805978, 6);
  sqcRYGate(q, -3.1069814657546857, 7);
  sqcRZGate(q, -2.72943697360659, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.6420768187743259, 0);
  sqcRZGate(q, 1.1337683446596367, 0);
  sqcRYGate(q, -2.602639156648981, 1);
  sqcRZGate(q, -2.82033217278577, 1);
  sqcRYGate(q, 1.5529969905673138, 2);
  sqcRZGate(q, 0.34701233482303184, 2);
  sqcRYGate(q, -1.8281335685936781, 3);
  sqcRZGate(q, -1.943829327619253, 3);
  sqcRYGate(q, -2.7939784615154184, 4);
  sqcRZGate(q, -1.4500988962673054, 4);
  sqcRYGate(q, 0.8181760318204315, 5);
  sqcRZGate(q, 2.5769438241230143, 5);
  sqcRYGate(q, 0.27388847412284856, 6);
  sqcRZGate(q, -3.0492603387123602, 6);
  sqcRYGate(q, -1.398630609646822, 7);
  sqcRZGate(q, -3.1088893398949398, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.70076351738559, 0);
  sqcRZGate(q, 1.3883335793534828, 0);
  sqcRYGate(q, 1.9251481562627095, 1);
  sqcRZGate(q, 0.700252066783521, 1);
  sqcRYGate(q, -0.06383300090543464, 2);
  sqcRZGate(q, 3.0638604208115243, 2);
  sqcRYGate(q, 1.4040605363540446, 3);
  sqcRZGate(q, 2.550770957370417, 3);
  sqcRYGate(q, -0.7109940403151008, 4);
  sqcRZGate(q, 2.1754145364311976, 4);
  sqcRYGate(q, 0.8917844019152055, 5);
  sqcRZGate(q, 0.003324627331645883, 5);
  sqcRYGate(q, 2.930469946349628, 6);
  sqcRZGate(q, -1.0457656178993462, 6);
  sqcRYGate(q, -1.7139283798556404, 7);
  sqcRZGate(q, -0.5932227757735957, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.626329104526358, 0);
  sqcRZGate(q, -3.1401741693983873, 0);
  sqcRYGate(q, -2.006499439147227, 1);
  sqcRZGate(q, 2.572910711367986, 1);
  sqcRYGate(q, 0.7148369123066436, 2);
  sqcRZGate(q, -1.2711614691779447, 2);
  sqcRYGate(q, -0.7665014206949861, 3);
  sqcRZGate(q, -1.3576244775383408, 3);
  sqcRYGate(q, 2.592301059169276, 4);
  sqcRZGate(q, 2.2074959369376366, 4);
  sqcRYGate(q, -3.0967766996129042, 5);
  sqcRZGate(q, -0.24504102323894797, 5);
  sqcRYGate(q, -2.616894841694779, 6);
  sqcRZGate(q, -1.3245347050109944, 6);
  sqcRYGate(q, 2.1396973212079984, 7);
  sqcRZGate(q, -2.6010425852956276, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.7155173217893703, 0);
  sqcRZGate(q, -0.9944674751067957, 0);
  sqcRYGate(q, -0.6179418341967136, 1);
  sqcRZGate(q, 0.4767033888582075, 1);
  sqcRYGate(q, -2.2643277908683257, 2);
  sqcRZGate(q, -2.257165079735108, 2);
  sqcRYGate(q, 2.6955551369886077, 3);
  sqcRZGate(q, -2.1063360654212904, 3);
  sqcRYGate(q, 0.34485893219188646, 4);
  sqcRZGate(q, -1.9884587493983754, 4);
  sqcRYGate(q, -1.7823254005225628, 5);
  sqcRZGate(q, 2.736552434427237, 5);
  sqcRYGate(q, 0.30515180004771114, 6);
  sqcRZGate(q, 0.9598105229760143, 6);
  sqcRYGate(q, 0.28960452899416644, 7);
  sqcRZGate(q, -0.6286023359516709, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.28126086890603025, 0);
  sqcRZGate(q, 3.0147897264837225, 0);
  sqcRYGate(q, 1.594951548894505, 1);
  sqcRZGate(q, -0.22174165592401085, 1);
  sqcRYGate(q, 0.853453124789091, 2);
  sqcRZGate(q, -1.3874276732684327, 2);
  sqcRYGate(q, -3.0946269022498485, 3);
  sqcRZGate(q, -2.9513849371251406, 3);
  sqcRYGate(q, -1.6421823500312716, 4);
  sqcRZGate(q, 2.8140893456732377, 4);
  sqcRYGate(q, -0.5651679416566804, 5);
  sqcRZGate(q, 2.4647364108005894, 5);
  sqcRYGate(q, 0.6743268284832532, 6);
  sqcRZGate(q, 0.9418705177347163, 6);
  sqcRYGate(q, -2.438530570019817, 7);
  sqcRZGate(q, 2.2599190322940443, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.0417803242207873, 0);
  sqcRZGate(q, -2.8076381280026745, 0);
  sqcRYGate(q, -1.6013082638791085, 1);
  sqcRZGate(q, 0.9250024967853401, 1);
  sqcRYGate(q, 1.9218321945411068, 2);
  sqcRZGate(q, 2.717474479422177, 2);
  sqcRYGate(q, -3.0498387533918723, 3);
  sqcRZGate(q, -2.0085325503493907, 3);
  sqcRYGate(q, -0.32279691348157236, 4);
  sqcRZGate(q, -2.784364255714183, 4);
  sqcRYGate(q, -1.026763574473729, 5);
  sqcRZGate(q, 2.56388784078049, 5);
  sqcRYGate(q, -1.2241783044561254, 6);
  sqcRZGate(q, -2.3409483810388174, 6);
  sqcRYGate(q, 1.1703757872683225, 7);
  sqcRZGate(q, -0.840009253348871, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.7482161750366974, 0);
  sqcRZGate(q, 1.6410758593593107, 0);
  sqcRYGate(q, -2.156503462078981, 1);
  sqcRZGate(q, 2.4349221854631855, 1);
  sqcRYGate(q, -0.894914836915671, 2);
  sqcRZGate(q, 1.1410553971159914, 2);
  sqcRYGate(q, -3.095262421932991, 3);
  sqcRZGate(q, 1.4631450258542018, 3);
  sqcRYGate(q, 2.8258259929391967, 4);
  sqcRZGate(q, 0.109859330868188, 4);
  sqcRYGate(q, -2.144390459174854, 5);
  sqcRZGate(q, -3.0170158211243012, 5);
  sqcRYGate(q, 1.5756723342742012, 6);
  sqcRZGate(q, 2.715713864183136, 6);
  sqcRYGate(q, -1.7299410590232718, 7);
  sqcRZGate(q, 2.3801369910913457, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.7256771266835242, 0);
  sqcRZGate(q, 1.2095932446429298, 0);
  sqcRYGate(q, -1.806453980369015, 1);
  sqcRZGate(q, -1.0409306487604986, 1);
  sqcRYGate(q, 2.8574679083424344, 2);
  sqcRZGate(q, -1.1132801143704112, 2);
  sqcRYGate(q, -1.536803751202056, 3);
  sqcRZGate(q, 2.059695626101142, 3);
  sqcRYGate(q, 2.357726792999977, 4);
  sqcRZGate(q, 1.9480437679245366, 4);
  sqcRYGate(q, -0.4451870782516254, 5);
  sqcRZGate(q, 2.480436128989802, 5);
  sqcRYGate(q, 0.004638404864680368, 6);
  sqcRZGate(q, 0.6128080248466617, 6);
  sqcRYGate(q, 1.9260485477337574, 7);
  sqcRZGate(q, -1.3422973297553595, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.2041824289294243, 0);
  sqcRZGate(q, -0.8848040610036044, 0);
  sqcRYGate(q, -0.44873168765447285, 1);
  sqcRZGate(q, 0.4635608023403259, 1);
  sqcRYGate(q, -1.8097570371711185, 2);
  sqcRZGate(q, -1.7884268941958457, 2);
  sqcRYGate(q, -1.699950168810111, 3);
  sqcRZGate(q, 1.651716632355888, 3);
  sqcRYGate(q, -1.9479479079593542, 4);
  sqcRZGate(q, 0.3421424409142899, 4);
  sqcRYGate(q, -2.514653925676971, 5);
  sqcRZGate(q, -0.7366247231323054, 5);
  sqcRYGate(q, -2.1483425943566252, 6);
  sqcRZGate(q, 0.43765639358079356, 6);
  sqcRYGate(q, 2.3837232607842926, 7);
  sqcRZGate(q, 1.2220165053688823, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.4767131859670046, 0);
  sqcRZGate(q, -0.13102969431465986, 0);
  sqcRYGate(q, -1.4243465685567251, 1);
  sqcRZGate(q, -0.05049482117192902, 1);
  sqcRYGate(q, -0.397888890418288, 2);
  sqcRZGate(q, 1.3995442238387035, 2);
  sqcRYGate(q, 1.2249069470147045, 3);
  sqcRZGate(q, -2.6124651071008915, 3);
  sqcRYGate(q, -1.5863200026215276, 4);
  sqcRZGate(q, 3.073847961810754, 4);
  sqcRYGate(q, 0.8374842568028072, 5);
  sqcRZGate(q, 1.00127106683283, 5);
  sqcRYGate(q, 2.3828920953200234, 6);
  sqcRZGate(q, -1.9594660400981623, 6);
  sqcRYGate(q, -1.3469266063564096, 7);
  sqcRZGate(q, 3.023582081338204, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.8458863695206152, 0);
  sqcRZGate(q, -2.926096368002993, 0);
  sqcRYGate(q, 1.872380516083562, 1);
  sqcRZGate(q, 0.5275016566595147, 1);
  sqcRYGate(q, 0.9961231684104748, 2);
  sqcRZGate(q, -1.928699468381624, 2);
  sqcRYGate(q, -2.995569098045249, 3);
  sqcRZGate(q, 2.438045368628703, 3);
  sqcRYGate(q, 2.4313137176766118, 4);
  sqcRZGate(q, 0.6447400259315829, 4);
  sqcRYGate(q, -1.9907543313315823, 5);
  sqcRZGate(q, 0.8354665788455202, 5);
  sqcRYGate(q, -0.9240901895167914, 6);
  sqcRZGate(q, 1.7869793135638776, 6);
  sqcRYGate(q, -1.189631678565104, 7);
  sqcRZGate(q, -3.1406356528822585, 7);

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
