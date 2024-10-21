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

  sqcRYGate(q, 2.8983566183863267, 0);
  sqcRYGate(q, -1.1884535814379236, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9089147585058543, 0);
  sqcRYGate(q, 0.15347003767932058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11032901089988201, 2);
  sqcRYGate(q, 1.4380665277197666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7766470574688293, 2);
  sqcRYGate(q, -2.8495645104806733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9563821401105841, 4);
  sqcRYGate(q, 0.19284664280497446, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5591023466685843, 4);
  sqcRYGate(q, 1.4683279272991363, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.702604582742553, 6);
  sqcRYGate(q, 3.099458032262951, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.436009154539824, 6);
  sqcRYGate(q, 1.5125607751777377, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3665670790356506, 1);
  sqcRYGate(q, -0.7740425954330385, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6357469403773535, 1);
  sqcRYGate(q, 2.514300037413789, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8569266318520081, 3);
  sqcRYGate(q, 3.074365637549562, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9734610907049783, 3);
  sqcRYGate(q, -0.31544375987357837, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6232017498611628, 5);
  sqcRYGate(q, 0.8289059830223984, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1406704233292095, 5);
  sqcRYGate(q, 2.3455571173350163, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.108302397876481, 0);
  sqcRYGate(q, 2.527339110666612, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3965708141439108, 0);
  sqcRYGate(q, 0.1276118389734964, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5541233084257495, 2);
  sqcRYGate(q, -2.2859092259391134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.01889219515201379, 2);
  sqcRYGate(q, -3.0549399416396827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5171869355924035, 4);
  sqcRYGate(q, 0.09666783487103477, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4420206803867206, 4);
  sqcRYGate(q, 1.560097643757673, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1237779801146823, 6);
  sqcRYGate(q, -1.191519756760723, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.05962949520365443, 6);
  sqcRYGate(q, -2.3204616053458054, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5742132138134854, 1);
  sqcRYGate(q, -2.6308284636494172, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.140548642883422, 1);
  sqcRYGate(q, -0.45753760337079624, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9359945778627842, 3);
  sqcRYGate(q, 1.5056644995057555, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.10076852218676952, 3);
  sqcRYGate(q, 2.722001007671735, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.249778391822621, 5);
  sqcRYGate(q, 0.08887262129035617, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4218587617929138, 5);
  sqcRYGate(q, -0.40599297127538403, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.1799133686341987, 0);
  sqcRYGate(q, -2.0570516451398184, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2052057918486538, 0);
  sqcRYGate(q, -2.7290596469857356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2820554501379458, 2);
  sqcRYGate(q, -1.5562703013437984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0201456870089967, 2);
  sqcRYGate(q, -0.0039447664871199335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4936583171007327, 4);
  sqcRYGate(q, 1.1240782838911338, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1387258838832075, 4);
  sqcRYGate(q, 3.049442169709651, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.724974907717141, 6);
  sqcRYGate(q, 0.7747990524106764, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9570391528738176, 6);
  sqcRYGate(q, -0.5829896227067336, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8698609792604852, 1);
  sqcRYGate(q, 0.40576363215902755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.05301234228061, 1);
  sqcRYGate(q, -0.09257160311863277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.07421356127918255, 3);
  sqcRYGate(q, -1.626812940401638, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.07222057812744076, 3);
  sqcRYGate(q, 3.1147902734679254, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.889172666575691, 5);
  sqcRYGate(q, -1.8666983410500857, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.16346477422495553, 5);
  sqcRYGate(q, -3.0112475712514386, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0193259659058427, 0);
  sqcRYGate(q, -1.5906675833966377, 1);
  sqcRYGate(q, 1.262186897306055, 2);
  sqcRYGate(q, 1.567111317102965, 3);
  sqcRYGate(q, 1.6372989279636772, 4);
  sqcRYGate(q, -3.0541500358292257, 5);
  sqcRYGate(q, -1.286374375084483, 6);
  sqcRYGate(q, -1.683817716380469, 7);

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
