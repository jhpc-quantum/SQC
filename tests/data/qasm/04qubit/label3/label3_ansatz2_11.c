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

  sqcRYGate(q, -0.43412535017866904, 0);
  sqcRZGate(q, -1.9288526171663838, 0);
  sqcRYGate(q, -2.075177315316721, 1);
  sqcRZGate(q, 1.5477638859459368, 1);
  sqcRYGate(q, -3.041230054001282, 2);
  sqcRZGate(q, 1.4760804412661603, 2);
  sqcRYGate(q, -0.7159029371957846, 3);
  sqcRZGate(q, -0.08523162498701531, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.170413835835772, 0);
  sqcRZGate(q, 2.9901872642407747, 0);
  sqcRYGate(q, 1.3547040275843514, 1);
  sqcRZGate(q, 2.5380412584210146, 1);
  sqcRYGate(q, 0.7018021725730801, 2);
  sqcRZGate(q, -3.04982500224607, 2);
  sqcRYGate(q, 2.941444428153055, 3);
  sqcRZGate(q, -0.30341483002825154, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.2505035899053611, 0);
  sqcRZGate(q, -1.4601257275525743, 0);
  sqcRYGate(q, -0.9798956936321161, 1);
  sqcRZGate(q, -1.7761125426879216, 1);
  sqcRYGate(q, 2.869482890473744, 2);
  sqcRZGate(q, 1.3442347486627395, 2);
  sqcRYGate(q, -1.511461228380348, 3);
  sqcRZGate(q, -1.8277078933210469, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.7402095490358516, 0);
  sqcRZGate(q, 2.2028541535776442, 0);
  sqcRYGate(q, 2.3068010172689535, 1);
  sqcRZGate(q, 0.46201653022638156, 1);
  sqcRYGate(q, -0.22731605063744628, 2);
  sqcRZGate(q, 0.7348890092187703, 2);
  sqcRYGate(q, 0.44515216324914875, 3);
  sqcRZGate(q, -1.632425232768827, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.5116326091535885, 0);
  sqcRZGate(q, 0.44006664407949714, 0);
  sqcRYGate(q, 0.9796207980243974, 1);
  sqcRZGate(q, 2.9885040010219575, 1);
  sqcRYGate(q, 0.6836695790575972, 2);
  sqcRZGate(q, 2.199713484345147, 2);
  sqcRYGate(q, -3.061776874647163, 3);
  sqcRZGate(q, -3.1227890694043015, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.641950385178738, 0);
  sqcRZGate(q, -1.257903718211626, 0);
  sqcRYGate(q, 2.5930144853026227, 1);
  sqcRZGate(q, -0.04290203011266635, 1);
  sqcRYGate(q, 0.34937875777245075, 2);
  sqcRZGate(q, 1.6304242756064828, 2);
  sqcRYGate(q, -2.761905536184838, 3);
  sqcRZGate(q, 1.06763152184302, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.594662884130063, 0);
  sqcRZGate(q, -0.02614982137479593, 0);
  sqcRYGate(q, 2.117827375973145, 1);
  sqcRZGate(q, -1.7934213211805317, 1);
  sqcRYGate(q, 0.3141557125840615, 2);
  sqcRZGate(q, -2.454352400700523, 2);
  sqcRYGate(q, 0.3677546674366455, 3);
  sqcRZGate(q, -2.0754713478734876, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.602337584212739, 0);
  sqcRZGate(q, -2.435696923887931, 0);
  sqcRYGate(q, -2.1210069231156683, 1);
  sqcRZGate(q, -0.7406139748491745, 1);
  sqcRYGate(q, -2.9351619477090507, 2);
  sqcRZGate(q, 1.3088746946108207, 2);
  sqcRYGate(q, 0.7614644364459568, 3);
  sqcRZGate(q, -0.19479192203502474, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.1267453049017795, 0);
  sqcRZGate(q, -1.1611819354978303, 0);
  sqcRYGate(q, 2.770266579050807, 1);
  sqcRZGate(q, 1.3121825197022075, 1);
  sqcRYGate(q, 0.10226898474849921, 2);
  sqcRZGate(q, -2.2145860642016353, 2);
  sqcRYGate(q, -1.6261533263167636, 3);
  sqcRZGate(q, -2.095252647245718, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.173491377637501, 0);
  sqcRZGate(q, -1.0115984894054237, 0);
  sqcRYGate(q, 0.46676137313015253, 1);
  sqcRZGate(q, 0.4612959933009377, 1);
  sqcRYGate(q, 0.5603425761126741, 2);
  sqcRZGate(q, -1.4126271051267765, 2);
  sqcRYGate(q, -1.2086266639096002, 3);
  sqcRZGate(q, -1.0290589606875837, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.4833936010299653, 0);
  sqcRZGate(q, -2.2959303772522244, 0);
  sqcRYGate(q, -0.5000206165537003, 1);
  sqcRZGate(q, 1.9860976415097407, 1);
  sqcRYGate(q, -2.457140256426047, 2);
  sqcRZGate(q, 2.804055874760209, 2);
  sqcRYGate(q, 2.8986534924263574, 3);
  sqcRZGate(q, 2.762877887846927, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.9562880332937098, 0);
  sqcRZGate(q, 0.12164456845417694, 0);
  sqcRYGate(q, 1.273489786660032, 1);
  sqcRZGate(q, -0.778484989787117, 1);
  sqcRYGate(q, -2.9558539487999242, 2);
  sqcRZGate(q, -1.9369050328394681, 2);
  sqcRYGate(q, 0.666144429051803, 3);
  sqcRZGate(q, 0.1026616210299709, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.549736448375221, 0);
  sqcRZGate(q, 0.8587608627068993, 0);
  sqcRYGate(q, 2.1512732314137333, 1);
  sqcRZGate(q, 1.9002673087696387, 1);
  sqcRYGate(q, 0.2838617046822342, 2);
  sqcRZGate(q, 1.1090066254833921, 2);
  sqcRYGate(q, 1.0272358614977757, 3);
  sqcRZGate(q, -2.7401276598359807, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.458113807178711, 0);
  sqcRZGate(q, 0.4695771784669489, 0);
  sqcRYGate(q, -2.1943563180386314, 1);
  sqcRZGate(q, 2.9345496748809965, 1);
  sqcRYGate(q, -2.875575532537814, 2);
  sqcRZGate(q, 0.7160761963279059, 2);
  sqcRYGate(q, 1.2313582758176551, 3);
  sqcRZGate(q, -2.285500494301548, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.7216374034010116, 0);
  sqcRZGate(q, 1.6612595440465958, 0);
  sqcRYGate(q, -2.5643696374006377, 1);
  sqcRZGate(q, -3.137182223812306, 1);
  sqcRYGate(q, -0.7830743485785288, 2);
  sqcRZGate(q, -2.892033071256474, 2);
  sqcRYGate(q, -0.9099766540463268, 3);
  sqcRZGate(q, 2.196458213593031, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
