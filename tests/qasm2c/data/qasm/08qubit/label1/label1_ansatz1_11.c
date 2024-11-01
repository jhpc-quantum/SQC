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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -0.47846285759326523, 0);
  sqcRZGate(q, 2.204835328396218, 0);
  sqcRYGate(q, -2.932006735245982, 1);
  sqcRZGate(q, 1.0737735324657427, 1);
  sqcRYGate(q, 1.4712860691692646, 2);
  sqcRZGate(q, -1.779858428615288, 2);
  sqcRYGate(q, 1.6863423339044485, 3);
  sqcRZGate(q, 1.260253740026347, 3);
  sqcRYGate(q, 0.014866993823250851, 4);
  sqcRZGate(q, -2.380875432310754, 4);
  sqcRYGate(q, -3.1324554574093098, 5);
  sqcRZGate(q, 0.7586672317389085, 5);
  sqcRYGate(q, 0.19176782180074153, 6);
  sqcRZGate(q, 0.5076569884970421, 6);
  sqcRYGate(q, -2.356906728341983, 7);
  sqcRZGate(q, -0.0581105984395327, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.9494034047397624, 0);
  sqcRZGate(q, 2.0368352098715112, 0);
  sqcRYGate(q, -0.041849177469577725, 1);
  sqcRZGate(q, 3.1339050639438306, 1);
  sqcRYGate(q, -0.41653022031706133, 2);
  sqcRZGate(q, -2.135113347764169, 2);
  sqcRYGate(q, -1.2985488767042546, 3);
  sqcRZGate(q, -1.732218991775524, 3);
  sqcRYGate(q, -0.596191852315929, 4);
  sqcRZGate(q, 1.9827366105916768, 4);
  sqcRYGate(q, 0.4947377321535775, 5);
  sqcRZGate(q, 3.0488709539596313, 5);
  sqcRYGate(q, -2.4057465310477335, 6);
  sqcRZGate(q, -0.7426810403993701, 6);
  sqcRYGate(q, 2.5684921156037843, 7);
  sqcRZGate(q, 0.16911649038153162, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.29396717279296486, 0);
  sqcRZGate(q, -2.6879495556400843, 0);
  sqcRYGate(q, -0.5228241327395732, 1);
  sqcRZGate(q, -2.3281002103061104, 1);
  sqcRYGate(q, -1.1947384619497692, 2);
  sqcRZGate(q, 0.19433456226493376, 2);
  sqcRYGate(q, -0.7905688745962829, 3);
  sqcRZGate(q, 0.9322409593218756, 3);
  sqcRYGate(q, -0.1349236678317549, 4);
  sqcRZGate(q, 1.548269119427057, 4);
  sqcRYGate(q, -0.3901099419890599, 5);
  sqcRZGate(q, 1.1440693356387681, 5);
  sqcRYGate(q, -0.7186233935960022, 6);
  sqcRZGate(q, 1.7597101487792797, 6);
  sqcRYGate(q, -2.9611676652545906, 7);
  sqcRZGate(q, 0.720534849263507, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.5629533349296842, 0);
  sqcRZGate(q, -2.4177185812503583, 0);
  sqcRYGate(q, 1.7627502166094056, 1);
  sqcRZGate(q, -0.5649401071008238, 1);
  sqcRYGate(q, -2.7389221254478997, 2);
  sqcRZGate(q, 2.225255474235877, 2);
  sqcRYGate(q, -2.9658799392056494, 3);
  sqcRZGate(q, 1.8208932830134925, 3);
  sqcRYGate(q, -3.0456432089045653, 4);
  sqcRZGate(q, -0.2741329701076423, 4);
  sqcRYGate(q, 0.36944572128295494, 5);
  sqcRZGate(q, 2.621780423243586, 5);
  sqcRYGate(q, 2.2591725032646353, 6);
  sqcRZGate(q, -1.4020100682855772, 6);
  sqcRYGate(q, -1.73377965520342, 7);
  sqcRZGate(q, 1.3888553208239394, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1379581423462914, 0);
  sqcRZGate(q, -2.160950761127503, 0);
  sqcRYGate(q, 3.1141754959428822, 1);
  sqcRZGate(q, -0.5622206050465239, 1);
  sqcRYGate(q, 3.0164330497433287, 2);
  sqcRZGate(q, 2.7296598546347237, 2);
  sqcRYGate(q, 0.2910088404853406, 3);
  sqcRZGate(q, 1.5416683727397409, 3);
  sqcRYGate(q, 0.5089418576037481, 4);
  sqcRZGate(q, 0.8871461176078747, 4);
  sqcRYGate(q, 0.6849166076001731, 5);
  sqcRZGate(q, -0.6357623422402681, 5);
  sqcRYGate(q, 0.14145779978638728, 6);
  sqcRZGate(q, -1.6433442678937515, 6);
  sqcRYGate(q, 2.833885608792943, 7);
  sqcRZGate(q, -1.7871970911955557, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9087018734154793, 0);
  sqcRZGate(q, 0.06444941645701793, 0);
  sqcRYGate(q, -1.498323368516569, 1);
  sqcRZGate(q, 1.7840353612896334, 1);
  sqcRYGate(q, -2.7430488406335596, 2);
  sqcRZGate(q, 1.136214085807418, 2);
  sqcRYGate(q, 0.9515917561526761, 3);
  sqcRZGate(q, 1.5272485891245253, 3);
  sqcRYGate(q, -3.002875429736983, 4);
  sqcRZGate(q, 0.1166463485420287, 4);
  sqcRYGate(q, -1.139345894385519, 5);
  sqcRZGate(q, -0.07964488374523117, 5);
  sqcRYGate(q, -0.303458027059766, 6);
  sqcRZGate(q, -1.0778696166270934, 6);
  sqcRYGate(q, -1.7553785694199493, 7);
  sqcRZGate(q, 0.4986277945959312, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5613534522004573, 0);
  sqcRZGate(q, 0.8287765340676809, 0);
  sqcRYGate(q, -1.1240662835043682, 1);
  sqcRZGate(q, -0.10767228249890515, 1);
  sqcRYGate(q, 1.6275887825128175, 2);
  sqcRZGate(q, 0.2627358791769158, 2);
  sqcRYGate(q, -2.8589550087884477, 3);
  sqcRZGate(q, 1.089935556741253, 3);
  sqcRYGate(q, -2.6241498330350717, 4);
  sqcRZGate(q, -0.18070362087465727, 4);
  sqcRYGate(q, 0.6967671886292702, 5);
  sqcRZGate(q, 0.45528628582727937, 5);
  sqcRYGate(q, -0.4237470448418623, 6);
  sqcRZGate(q, 1.251978530001883, 6);
  sqcRYGate(q, -0.15447308253047798, 7);
  sqcRZGate(q, 0.3171714611753948, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7814849345170143, 0);
  sqcRZGate(q, 2.699101526095539, 0);
  sqcRYGate(q, 2.824710929205456, 1);
  sqcRZGate(q, 3.0563927818573324, 1);
  sqcRYGate(q, -2.0249536055190505, 2);
  sqcRZGate(q, -0.005205951144595211, 2);
  sqcRYGate(q, -3.1101835156447653, 3);
  sqcRZGate(q, -0.8415369810464073, 3);
  sqcRYGate(q, 1.2771108125758555, 4);
  sqcRZGate(q, 2.790667209135959, 4);
  sqcRYGate(q, 2.227679455266758, 5);
  sqcRZGate(q, -0.6600932661032504, 5);
  sqcRYGate(q, -1.801596325732848, 6);
  sqcRZGate(q, 1.6036450392791979, 6);
  sqcRYGate(q, 0.0360221315025098, 7);
  sqcRZGate(q, -1.8863723617688986, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.23177065040234754, 0);
  sqcRZGate(q, -1.0489897604880294, 0);
  sqcRYGate(q, 0.8387661295723999, 1);
  sqcRZGate(q, -3.1391686691151857, 1);
  sqcRYGate(q, 2.3940416461247938, 2);
  sqcRZGate(q, 0.0121565589353469, 2);
  sqcRYGate(q, -2.2659793169452307, 3);
  sqcRZGate(q, -0.04599398885747137, 3);
  sqcRYGate(q, 2.8604873171848144, 4);
  sqcRZGate(q, 1.437509516459702, 4);
  sqcRYGate(q, -2.8720209421700913, 5);
  sqcRZGate(q, -1.6023162957699613, 5);
  sqcRYGate(q, 1.9402865039948702, 6);
  sqcRZGate(q, -1.8309325713905702, 6);
  sqcRYGate(q, -2.8999849676611906, 7);
  sqcRZGate(q, 2.973495191225774, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.03559847363756107, 0);
  sqcRZGate(q, -2.302654499331397, 0);
  sqcRYGate(q, -1.7691010065390198, 1);
  sqcRZGate(q, 0.08306754323452735, 1);
  sqcRYGate(q, -0.8423737697041389, 2);
  sqcRZGate(q, 0.8509837105840826, 2);
  sqcRYGate(q, -3.136606788087751, 3);
  sqcRZGate(q, 3.0995638262637892, 3);
  sqcRYGate(q, -2.9812591084573143, 4);
  sqcRZGate(q, 1.957356541754294, 4);
  sqcRYGate(q, 1.2988656016955133, 5);
  sqcRZGate(q, -0.9449416884032792, 5);
  sqcRYGate(q, 1.2302151111562662, 6);
  sqcRZGate(q, 1.5963820628754124, 6);
  sqcRYGate(q, -2.4771134263229513, 7);
  sqcRZGate(q, 0.4008793717597057, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.9704451102157607, 0);
  sqcRZGate(q, -1.3050589305887883, 0);
  sqcRYGate(q, 1.0046187987295632, 1);
  sqcRZGate(q, -1.7435750918262933, 1);
  sqcRYGate(q, -1.1367413043383197, 2);
  sqcRZGate(q, -1.4738699150759773, 2);
  sqcRYGate(q, 0.9034447066503812, 3);
  sqcRZGate(q, -2.8106728834800685, 3);
  sqcRYGate(q, 3.1113777309912787, 4);
  sqcRZGate(q, 0.31865518112044017, 4);
  sqcRYGate(q, 3.140201403056486, 5);
  sqcRZGate(q, -1.8483250042918913, 5);
  sqcRYGate(q, -0.17890865924660007, 6);
  sqcRZGate(q, 2.1041571264782797, 6);
  sqcRYGate(q, 0.2757736792137846, 7);
  sqcRZGate(q, -2.315128419865443, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0896959050534623, 0);
  sqcRZGate(q, 0.24000652702585293, 0);
  sqcRYGate(q, -3.1240919043651507, 1);
  sqcRZGate(q, -3.124803661684671, 1);
  sqcRYGate(q, 1.7806088773101658, 2);
  sqcRZGate(q, -0.3550149328358998, 2);
  sqcRYGate(q, -3.1354529333193906, 3);
  sqcRZGate(q, 0.46193454000464634, 3);
  sqcRYGate(q, -1.573654575201066, 4);
  sqcRZGate(q, 1.6734600342209962, 4);
  sqcRYGate(q, -2.207315773245965, 5);
  sqcRZGate(q, 1.5971011371398376, 5);
  sqcRYGate(q, 0.2641105906218956, 6);
  sqcRZGate(q, -0.045675484997018206, 6);
  sqcRYGate(q, 2.475767800402471, 7);
  sqcRZGate(q, -2.6741991678705546, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.08987058636625278, 0);
  sqcRZGate(q, -0.7500338692597962, 0);
  sqcRYGate(q, -2.352169902984904, 1);
  sqcRZGate(q, -0.13588858298341847, 1);
  sqcRYGate(q, 0.7701279522325146, 2);
  sqcRZGate(q, 1.3078551692396925, 2);
  sqcRYGate(q, 2.311952740545025, 3);
  sqcRZGate(q, 1.7048463172979598, 3);
  sqcRYGate(q, -1.5736024616348976, 4);
  sqcRZGate(q, 0.8965281494984729, 4);
  sqcRYGate(q, -1.5700490563031861, 5);
  sqcRZGate(q, 2.1010705493261352, 5);
  sqcRYGate(q, -2.3216920174523406, 6);
  sqcRZGate(q, -0.18214628193527993, 6);
  sqcRYGate(q, -0.3937186844057476, 7);
  sqcRZGate(q, 2.6084457486741743, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0127070552440403, 0);
  sqcRZGate(q, -1.6371159438870875, 0);
  sqcRYGate(q, -1.5591648742445405, 1);
  sqcRZGate(q, 1.5706949997593926, 1);
  sqcRYGate(q, -3.1413508362420832, 2);
  sqcRZGate(q, -0.5168393471373279, 2);
  sqcRYGate(q, -3.1199521808200505, 3);
  sqcRZGate(q, 0.047993321711186934, 3);
  sqcRYGate(q, -0.001052284655358092, 4);
  sqcRZGate(q, 1.840463434326722, 4);
  sqcRYGate(q, -3.1396836780599453, 5);
  sqcRZGate(q, -2.608849359100328, 5);
  sqcRYGate(q, 1.570329576506177, 6);
  sqcRZGate(q, -1.5711327246214217, 6);
  sqcRYGate(q, 2.1149847913397175, 7);
  sqcRZGate(q, 0.6338887319692478, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 9.28215021840373e-05, 0);
  sqcRZGate(q, -2.0971267948639536, 0);
  sqcRYGate(q, -1.5672597459129858, 1);
  sqcRZGate(q, -2.456785314650983, 1);
  sqcRYGate(q, -1.5785472042251385, 2);
  sqcRZGate(q, -2.314041384180663, 2);
  sqcRYGate(q, -1.4759532701557498, 3);
  sqcRZGate(q, -2.7376527424012833, 3);
  sqcRYGate(q, 0.0005042461146258503, 4);
  sqcRZGate(q, 0.31688420913297666, 4);
  sqcRYGate(q, 1.5730577302499928, 5);
  sqcRZGate(q, -0.9485778757987964, 5);
  sqcRYGate(q, -1.5693975870418464, 6);
  sqcRZGate(q, -1.731100790137961, 6);
  sqcRYGate(q, -3.141016444471195, 7);
  sqcRZGate(q, -2.185033974297169, 7);

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
