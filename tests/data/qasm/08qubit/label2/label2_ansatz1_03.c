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

  sqcRYGate(q, 1.5994049698926558, 0);
  sqcRZGate(q, 1.1585463439088421, 0);
  sqcRYGate(q, -0.05735805478988975, 1);
  sqcRZGate(q, -0.636896139481319, 1);
  sqcRYGate(q, 1.547560709857203, 2);
  sqcRZGate(q, 1.2729883997169402, 2);
  sqcRYGate(q, 1.5707917789908565, 3);
  sqcRZGate(q, -1.5755301035133797, 3);
  sqcRYGate(q, 1.5707838618654661, 4);
  sqcRZGate(q, 0.3311212919647639, 4);
  sqcRYGate(q, -1.507543630775407, 5);
  sqcRZGate(q, 0.0003084918667031218, 5);
  sqcRYGate(q, 3.141583328184279, 6);
  sqcRZGate(q, 3.0409095389087017, 6);
  sqcRYGate(q, -1.5035770923784215, 7);
  sqcRZGate(q, 1.4104424953972279, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1411739015482683, 0);
  sqcRZGate(q, 2.9849516725157637, 0);
  sqcRYGate(q, -0.002308905947265849, 1);
  sqcRZGate(q, 0.6372682625665788, 1);
  sqcRYGate(q, -0.6019365194458607, 2);
  sqcRZGate(q, -2.1239974414728064, 2);
  sqcRYGate(q, -0.8699480631268424, 3);
  sqcRZGate(q, 2.8818262485730934, 3);
  sqcRYGate(q, 3.0815292456159935, 4);
  sqcRZGate(q, -1.7096929990831855, 4);
  sqcRYGate(q, -1.5708178328346352, 5);
  sqcRZGate(q, 0.24991507642407035, 5);
  sqcRYGate(q, 1.7151338642797982, 6);
  sqcRZGate(q, 0.6331107191233887, 6);
  sqcRYGate(q, 1.4122804416024737, 7);
  sqcRZGate(q, -1.392540917210705, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.11147131768260349, 0);
  sqcRZGate(q, -2.1367756841654986, 0);
  sqcRYGate(q, -0.08347770152818454, 1);
  sqcRZGate(q, 1.923041466061493, 1);
  sqcRYGate(q, 1.4153135702521524e-05, 2);
  sqcRZGate(q, 0.800974554061765, 2);
  sqcRYGate(q, 3.1415855430388593, 3);
  sqcRZGate(q, 2.8164585517718157, 3);
  sqcRYGate(q, 0.06269786738488084, 4);
  sqcRZGate(q, 2.653400206549217, 4);
  sqcRYGate(q, 0.05661324448986818, 5);
  sqcRZGate(q, 1.2147710398268394, 5);
  sqcRYGate(q, 0.38323508622256913, 6);
  sqcRZGate(q, -0.6638919416216001, 6);
  sqcRYGate(q, -0.06254336021929774, 7);
  sqcRZGate(q, -0.0326824812164217, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6829159137546197, 0);
  sqcRZGate(q, 1.600849782125823, 0);
  sqcRYGate(q, 0.6439452592236403, 1);
  sqcRZGate(q, -3.1391850253985365, 1);
  sqcRYGate(q, 1.4044500637688833, 2);
  sqcRZGate(q, -2.2620910264649594, 2);
  sqcRYGate(q, 0.8710257623195146, 3);
  sqcRZGate(q, -0.5885111744518863, 3);
  sqcRYGate(q, -0.01822376048844768, 4);
  sqcRZGate(q, -2.3673443582360787, 4);
  sqcRYGate(q, 0.0003341029185767477, 5);
  sqcRZGate(q, -0.14783073405289507, 5);
  sqcRYGate(q, -1.8395708951963794, 6);
  sqcRZGate(q, 0.006525777717373598, 6);
  sqcRYGate(q, 3.0231322396702467, 7);
  sqcRZGate(q, -0.06201647674778476, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.0003504427893351405, 0);
  sqcRZGate(q, -2.8350122661309136, 0);
  sqcRYGate(q, -1.5752593003049595, 1);
  sqcRZGate(q, 2.889726860275162, 1);
  sqcRYGate(q, 3.048406285700926, 2);
  sqcRZGate(q, 0.26252610340741017, 2);
  sqcRYGate(q, -0.5470140283015245, 3);
  sqcRZGate(q, 0.03328004788323912, 3);
  sqcRYGate(q, 0.9779298777542429, 4);
  sqcRZGate(q, 0.4291168869243344, 4);
  sqcRYGate(q, -2.9301296234608922, 5);
  sqcRZGate(q, 3.091112324440181, 5);
  sqcRYGate(q, 1.8756258469124556, 6);
  sqcRZGate(q, 1.1086142227745341, 6);
  sqcRYGate(q, 3.087702823012499, 7);
  sqcRZGate(q, -0.11485254471784313, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5576817266936975, 0);
  sqcRZGate(q, -3.0039120591911086, 0);
  sqcRYGate(q, 0.6572385877058011, 1);
  sqcRZGate(q, -1.1752073970637107, 1);
  sqcRYGate(q, -0.009145707111063777, 2);
  sqcRZGate(q, 3.1372228586592605, 2);
  sqcRYGate(q, 0.005364290378154557, 3);
  sqcRZGate(q, -1.1939969015281298, 3);
  sqcRYGate(q, -3.1294424050819543, 4);
  sqcRZGate(q, 0.3787539179738735, 4);
  sqcRYGate(q, -0.010682177451829311, 5);
  sqcRZGate(q, 3.0966224622207954, 5);
  sqcRYGate(q, -2.8719752835374734, 6);
  sqcRZGate(q, 2.7586924830556705, 6);
  sqcRYGate(q, -1.6064467548948074, 7);
  sqcRZGate(q, -1.3770375614715311, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8670193635616632, 0);
  sqcRZGate(q, -2.1364012028223742, 0);
  sqcRYGate(q, -0.1351230033006381, 1);
  sqcRZGate(q, 2.3425586859463228, 1);
  sqcRYGate(q, 1.437312294432099, 2);
  sqcRZGate(q, 2.537230146113954, 2);
  sqcRYGate(q, -1.9112210314523908, 3);
  sqcRZGate(q, 2.0660915095087855, 3);
  sqcRYGate(q, 2.0508079739970433, 4);
  sqcRZGate(q, -2.432244972977811, 4);
  sqcRYGate(q, 3.0264295290257417, 5);
  sqcRZGate(q, 0.6994985809273179, 5);
  sqcRYGate(q, -0.24359156104481006, 6);
  sqcRZGate(q, -2.4839859389004855, 6);
  sqcRYGate(q, 2.899239498832087, 7);
  sqcRZGate(q, -2.148421511053043, 7);

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
