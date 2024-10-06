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

  sqcRYGate(q, -2.0210044460890657, 0);
  sqcRZGate(q, -2.921778945669764, 0);
  sqcRYGate(q, 2.52767947111435, 1);
  sqcRZGate(q, 2.8120525292594367, 1);
  sqcRYGate(q, 0.3657741057629165, 2);
  sqcRZGate(q, -2.2522005490106003, 2);
  sqcRYGate(q, -0.5575244639380892, 3);
  sqcRZGate(q, 2.9480850946899384, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5058063770858006, 0);
  sqcRZGate(q, -0.38848619347080326, 0);
  sqcRYGate(q, 2.3261327209841003, 1);
  sqcRZGate(q, 1.9088916195813486, 1);
  sqcRYGate(q, 1.699753513934871, 2);
  sqcRZGate(q, 1.2815520724417215, 2);
  sqcRYGate(q, 0.8299687986608904, 3);
  sqcRZGate(q, -0.8241249312721228, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.002018665103253, 0);
  sqcRZGate(q, 1.6901344103969635, 0);
  sqcRYGate(q, -1.2818483048175366, 1);
  sqcRZGate(q, -1.3342902582821055, 1);
  sqcRYGate(q, 1.2485099041170447, 2);
  sqcRZGate(q, 1.4030436218711388, 2);
  sqcRYGate(q, 2.1943667511307146, 3);
  sqcRZGate(q, 1.8340978161925996, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7871265896078246, 0);
  sqcRZGate(q, -0.2978827518794524, 0);
  sqcRYGate(q, 2.5347042307248953, 1);
  sqcRZGate(q, -0.4332420133989879, 1);
  sqcRYGate(q, -2.120612210870897, 2);
  sqcRZGate(q, 1.869954869693712, 2);
  sqcRYGate(q, -1.3846329420103078, 3);
  sqcRZGate(q, -0.40156808615568895, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.615994234226151, 0);
  sqcRZGate(q, 0.4806770411554817, 0);
  sqcRYGate(q, -0.9823715276221451, 1);
  sqcRZGate(q, -1.2069287821762744, 1);
  sqcRYGate(q, -0.9166749610390577, 2);
  sqcRZGate(q, -2.5800744262737547, 2);
  sqcRYGate(q, -1.9174218816834143, 3);
  sqcRZGate(q, 2.6330822305213033, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3793447449738833, 0);
  sqcRZGate(q, 0.2721755373011546, 0);
  sqcRYGate(q, 2.0432350720544608, 1);
  sqcRZGate(q, -3.117974909589936, 1);
  sqcRYGate(q, 2.985664452838241, 2);
  sqcRZGate(q, -1.9983842535552903, 2);
  sqcRYGate(q, -1.4136505451509223, 3);
  sqcRZGate(q, 2.7043667897284394, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.117278092159482, 0);
  sqcRZGate(q, -2.2071844225869652, 0);
  sqcRYGate(q, 2.335034402503741, 1);
  sqcRZGate(q, 0.6540706519070615, 1);
  sqcRYGate(q, -2.5513098361395206, 2);
  sqcRZGate(q, -0.42303382045512494, 2);
  sqcRYGate(q, -1.2148461564548212, 3);
  sqcRZGate(q, -2.5305912088220817, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.4534391244061937, 0);
  sqcRZGate(q, 1.4083557200682877, 0);
  sqcRYGate(q, 3.0475375485051255, 1);
  sqcRZGate(q, 2.0190286373963464, 1);
  sqcRYGate(q, -2.7114658417496282, 2);
  sqcRZGate(q, 0.7415329797052346, 2);
  sqcRYGate(q, 0.14166868416366185, 3);
  sqcRZGate(q, 1.7922629888960495, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1614822811417687, 0);
  sqcRZGate(q, -0.06910363659799106, 0);
  sqcRYGate(q, -0.23676617200601535, 1);
  sqcRZGate(q, -2.9917225180009734, 1);
  sqcRYGate(q, 2.919937312243952, 2);
  sqcRZGate(q, -0.5547544209370561, 2);
  sqcRYGate(q, -1.951140508574221, 3);
  sqcRZGate(q, 1.2602181087732036, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.996059100959071, 0);
  sqcRZGate(q, -2.7781541994884886, 0);
  sqcRYGate(q, -2.412688403274543, 1);
  sqcRZGate(q, -1.1630717755294808, 1);
  sqcRYGate(q, 3.131522607649936, 2);
  sqcRZGate(q, -1.7585638637014729, 2);
  sqcRYGate(q, -2.142726433826704, 3);
  sqcRZGate(q, 2.4297607401277106, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.05694816793173629, 0);
  sqcRZGate(q, -1.499568609083025, 0);
  sqcRYGate(q, -1.6445625828078922, 1);
  sqcRZGate(q, 0.33881001364341473, 1);
  sqcRYGate(q, 0.3629919296285998, 2);
  sqcRZGate(q, 0.35863845109479, 2);
  sqcRYGate(q, -3.0301138668535055, 3);
  sqcRZGate(q, -0.7534966881361519, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.0713710595314963, 0);
  sqcRZGate(q, -2.9438078928262503, 0);
  sqcRYGate(q, -3.017187844085774, 1);
  sqcRZGate(q, 1.3756633430851617, 1);
  sqcRYGate(q, 0.9309793529229858, 2);
  sqcRZGate(q, -0.6184011554348191, 2);
  sqcRYGate(q, 3.0682274352476946, 3);
  sqcRZGate(q, -2.9073860014450004, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.13211096698271607, 0);
  sqcRZGate(q, -2.9030658754160603, 0);
  sqcRYGate(q, -2.330469554206299, 1);
  sqcRZGate(q, -1.9994767852678015, 1);
  sqcRYGate(q, 1.4667683994844287, 2);
  sqcRZGate(q, -2.040576242302622, 2);
  sqcRYGate(q, 2.20037752150469, 3);
  sqcRZGate(q, -1.13651803877291, 3);

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
