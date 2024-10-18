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

  sqcRYGate(q, 1.5581023467730049, 0);
  sqcRZGate(q, 0.059822221238990274, 0);
  sqcRYGate(q, -1.2001913262752657, 1);
  sqcRZGate(q, 1.953042143051598, 1);
  sqcRYGate(q, -0.6667754808998279, 2);
  sqcRZGate(q, -0.9766984273269959, 2);
  sqcRYGate(q, -0.0754372821868064, 3);
  sqcRZGate(q, 2.039943020833411, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5573529860409897, 0);
  sqcRZGate(q, 2.8303300203141313, 0);
  sqcRYGate(q, -0.7882267278051589, 1);
  sqcRZGate(q, -0.053288315742161765, 1);
  sqcRYGate(q, -2.433122197444784, 2);
  sqcRZGate(q, 2.9601192209978104, 2);
  sqcRYGate(q, -1.3546605384143238, 3);
  sqcRZGate(q, -3.032133993747415, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.44591774886668833, 0);
  sqcRZGate(q, 2.3199767611882596, 0);
  sqcRYGate(q, 1.7164511820643167, 1);
  sqcRZGate(q, -1.317838602242171, 1);
  sqcRYGate(q, 1.7156557055611354, 2);
  sqcRZGate(q, -3.057582651103626, 2);
  sqcRYGate(q, 1.3972171718291113, 3);
  sqcRZGate(q, -3.014169141623819, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9996754192669158, 0);
  sqcRZGate(q, -2.277700006947663, 0);
  sqcRYGate(q, 2.248198557361343, 1);
  sqcRZGate(q, 3.130082492926802, 1);
  sqcRYGate(q, -1.453647185730312, 2);
  sqcRZGate(q, -0.14427240128897537, 2);
  sqcRYGate(q, -0.18511539704956978, 3);
  sqcRZGate(q, 1.056160725803153, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8944256614221562, 0);
  sqcRZGate(q, 1.5614574141773714, 0);
  sqcRYGate(q, 0.7010826652744391, 1);
  sqcRZGate(q, 2.1589678487383424, 1);
  sqcRYGate(q, 0.015733338759891243, 2);
  sqcRZGate(q, -0.6290870903898018, 2);
  sqcRYGate(q, 0.7350714322422456, 3);
  sqcRZGate(q, 2.7703936772905426, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5312628762781504, 0);
  sqcRZGate(q, -0.3580656160850763, 0);
  sqcRYGate(q, -2.429140953810212, 1);
  sqcRZGate(q, 0.09021154437571798, 1);
  sqcRYGate(q, -2.3976121784046165, 2);
  sqcRZGate(q, -2.9932897233372735, 2);
  sqcRYGate(q, -2.164425595335203, 3);
  sqcRZGate(q, 3.0872410711227, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8192737273400752, 0);
  sqcRZGate(q, -0.19343514821693045, 0);
  sqcRYGate(q, -1.523362429365755, 1);
  sqcRZGate(q, -1.7176446863845445, 1);
  sqcRYGate(q, -1.0325548572338201, 2);
  sqcRZGate(q, 2.9508358828378327, 2);
  sqcRYGate(q, 2.6673839706616405, 3);
  sqcRZGate(q, -0.10630486504411872, 3);

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
