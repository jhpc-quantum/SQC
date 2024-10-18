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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -1.9209147410046779, 0);
  sqcRZGate(q, 0.873111400833237, 0);
  sqcRYGate(q, -0.4299269631787757, 1);
  sqcRZGate(q, -0.37275441485516403, 1);
  sqcRYGate(q, 1.0552588161481535, 2);
  sqcRZGate(q, -2.4161314193523045, 2);
  sqcRYGate(q, 2.908678386722038, 3);
  sqcRZGate(q, 0.8102269343896218, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9556969187094606, 0);
  sqcRZGate(q, 2.1292944643195253, 0);
  sqcRYGate(q, 2.6640340879551547, 1);
  sqcRZGate(q, 2.4847011403074033, 1);
  sqcRYGate(q, 2.549657633140737, 2);
  sqcRZGate(q, -1.8107714861511846, 2);
  sqcRYGate(q, -0.4662701415547655, 3);
  sqcRZGate(q, -2.1472199962428165, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.433378882041459, 0);
  sqcRZGate(q, 0.020110731686591162, 0);
  sqcRYGate(q, 2.9608194707653275, 1);
  sqcRZGate(q, -2.1824710082440406, 1);
  sqcRYGate(q, -1.5452348396521771, 2);
  sqcRZGate(q, -2.4794682806655435, 2);
  sqcRYGate(q, 0.6989090196464449, 3);
  sqcRZGate(q, -2.893508538578772, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.287156931471211, 0);
  sqcRZGate(q, -0.38848698730074677, 0);
  sqcRYGate(q, 0.24800856667607807, 1);
  sqcRZGate(q, -0.8469540792400647, 1);
  sqcRYGate(q, -0.6328887867836688, 2);
  sqcRZGate(q, -1.3469588538034405, 2);
  sqcRYGate(q, 0.08680448977789634, 3);
  sqcRZGate(q, 1.946732481978751, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3802354762732554, 0);
  sqcRZGate(q, -3.0699111393434224, 0);
  sqcRYGate(q, 2.7266196864902157, 1);
  sqcRZGate(q, -0.39955990245672884, 1);
  sqcRYGate(q, 0.771299102882498, 2);
  sqcRZGate(q, 1.137247556744961, 2);
  sqcRYGate(q, 1.1815825133640887, 3);
  sqcRZGate(q, 1.1616775869882832, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5873137063565883, 0);
  sqcRZGate(q, -0.7221002482849975, 0);
  sqcRYGate(q, 1.6545157636081287, 1);
  sqcRZGate(q, 0.19205964916825555, 1);
  sqcRYGate(q, -2.8455045065371882, 2);
  sqcRZGate(q, 0.8715113904633238, 2);
  sqcRYGate(q, 0.6161664021315368, 3);
  sqcRZGate(q, -1.4712257198970413, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.492470222267068, 0);
  sqcRZGate(q, 0.31129279221292666, 0);
  sqcRYGate(q, 2.2515561355943783, 1);
  sqcRZGate(q, -0.1202438033007594, 1);
  sqcRYGate(q, 1.355934012143855, 2);
  sqcRZGate(q, 2.5012853351266626, 2);
  sqcRYGate(q, -2.786533929921993, 3);
  sqcRZGate(q, -1.3568216685108079, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6377525761755964, 0);
  sqcRZGate(q, 1.911492390020902, 0);
  sqcRYGate(q, 0.301678388412194, 1);
  sqcRZGate(q, -0.04873119376751056, 1);
  sqcRYGate(q, -2.743073967479286, 2);
  sqcRZGate(q, 2.9328458552690955, 2);
  sqcRYGate(q, -0.29163946301314936, 3);
  sqcRZGate(q, 1.5586504493820508, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7796225403926131, 0);
  sqcRZGate(q, 0.7734688751965331, 0);
  sqcRYGate(q, -0.6861239051630467, 1);
  sqcRZGate(q, -1.5782624227228168, 1);
  sqcRYGate(q, 1.405965681001772, 2);
  sqcRZGate(q, 0.4827063838497248, 2);
  sqcRYGate(q, 2.0794758996080134, 3);
  sqcRZGate(q, -1.6714034367327029, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.488774446300863, 0);
  sqcRZGate(q, 0.1506215398281565, 0);
  sqcRYGate(q, 1.1771920616538072, 1);
  sqcRZGate(q, -2.98121279079449, 1);
  sqcRYGate(q, -1.3294217978659608, 2);
  sqcRZGate(q, -2.4428410253975152, 2);
  sqcRYGate(q, 1.77309574407124, 3);
  sqcRZGate(q, 2.007485526714276, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6179778868869574, 0);
  sqcRZGate(q, 1.1862090796938256, 0);
  sqcRYGate(q, -1.435160476046546, 1);
  sqcRZGate(q, 3.0843660811129734, 1);
  sqcRYGate(q, -0.32798386077350156, 2);
  sqcRZGate(q, 2.5576571280856126, 2);
  sqcRYGate(q, 1.913196767244722, 3);
  sqcRZGate(q, -2.9277096706163537, 3);

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
