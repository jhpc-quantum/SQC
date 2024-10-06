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

  sqcRYGate(q, 0.7865040873673836, 0);
  sqcRYGate(q, 1.4103610299389797, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5233808839719485, 0);
  sqcRYGate(q, -1.0202507829214538, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7355728408960962, 1);
  sqcRYGate(q, 2.4387839017340385, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2007847546392956, 1);
  sqcRYGate(q, -1.1184607397258886, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.31488228960495857, 2);
  sqcRYGate(q, 0.24250717174974223, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.421388901413201, 2);
  sqcRYGate(q, 2.3214579075832384, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5267880806856747, 0);
  sqcRYGate(q, 0.26274084899899375, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7478739357558871, 0);
  sqcRYGate(q, -0.9887762179887881, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3103360039673637, 1);
  sqcRYGate(q, 2.892247965999443, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9373384354500276, 1);
  sqcRYGate(q, 1.6890458493492548, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.327469907119808, 2);
  sqcRYGate(q, -2.344307218259628, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.10674815015222, 2);
  sqcRYGate(q, 2.9201319354624236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6148847140680088, 0);
  sqcRYGate(q, 0.7616871147503781, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4921888580365916, 0);
  sqcRYGate(q, -2.6741955727998485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.706838579551446, 1);
  sqcRYGate(q, 0.9761393775895009, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7622549741358258, 1);
  sqcRYGate(q, 1.3554166452230456, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6047802333349015, 2);
  sqcRYGate(q, 1.7932045029289687, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6633159390336232, 2);
  sqcRYGate(q, -2.972920550808484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3290075233342356, 0);
  sqcRYGate(q, -0.45222481904943934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1362807787047045, 0);
  sqcRYGate(q, -2.4988708742182166, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9409623673117942, 1);
  sqcRYGate(q, -2.0813874273058284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2894199849113328, 1);
  sqcRYGate(q, -2.1592325022607612, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6706223309798331, 2);
  sqcRYGate(q, -2.4158092997141045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.04497800419185, 2);
  sqcRYGate(q, -2.3623141667955116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8193182182969874, 0);
  sqcRYGate(q, -2.321225051966093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.856671360805862, 0);
  sqcRYGate(q, 2.5850332171503134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0290516779265788, 1);
  sqcRYGate(q, 0.8468400482469844, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.844320320418779, 1);
  sqcRYGate(q, 1.9696728179524485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9052772326652708, 2);
  sqcRYGate(q, -2.6442074431934706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2877222119175133, 2);
  sqcRYGate(q, 0.5962039899022545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.833304190652409, 0);
  sqcRYGate(q, -2.638758450781392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4791555940876098, 0);
  sqcRYGate(q, -1.4489736111201945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.756766971562751, 1);
  sqcRYGate(q, -2.524630140261628, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4119793928945894, 1);
  sqcRYGate(q, 1.9891178587140417, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9181296246145836, 2);
  sqcRYGate(q, -3.0383862352859117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6485504572545295, 2);
  sqcRYGate(q, -1.8431932872502543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.223769314773328, 0);
  sqcRYGate(q, 3.0900370471197394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4178868434329525, 0);
  sqcRYGate(q, -2.5929149214573006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.30150659510293654, 1);
  sqcRYGate(q, 1.5693852989417723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.021750337666657, 1);
  sqcRYGate(q, -2.79422143805301, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.623710035512523, 2);
  sqcRYGate(q, 0.23117072717220308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3960744393607062, 2);
  sqcRYGate(q, -0.7337011959702693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.933355214933645, 0);
  sqcRYGate(q, 2.184828257715949, 1);
  sqcRYGate(q, -0.7232310084013096, 2);
  sqcRYGate(q, -2.4217457884865246, 3);

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
