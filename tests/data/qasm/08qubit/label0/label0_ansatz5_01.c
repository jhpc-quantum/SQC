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

  sqcRYGate(q, -3.1392102648616906, 0);
  sqcRYGate(q, -2.1070443991363796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2211248692105876, 0);
  sqcRYGate(q, -2.6935841175516195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2337571981243696, 2);
  sqcRYGate(q, -1.6928019023378627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1200416853131172, 2);
  sqcRYGate(q, 2.654448968079028, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7723980297999846, 4);
  sqcRYGate(q, 0.9100690333929946, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.05366831270767033, 4);
  sqcRYGate(q, 0.04590798250490202, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9854370686159735, 6);
  sqcRYGate(q, 1.0108681271846462, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6815570288066284, 6);
  sqcRYGate(q, -2.5459377699476606, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3432429820193854, 1);
  sqcRYGate(q, -1.1572639652322838, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05288988225345026, 1);
  sqcRYGate(q, 0.013091489962863355, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7228152600931521, 3);
  sqcRYGate(q, 1.695714994867939, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9990273873586015, 3);
  sqcRYGate(q, -0.6712542750105346, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0675126668390202, 5);
  sqcRYGate(q, 1.0219730840385286, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.209904525545614, 5);
  sqcRYGate(q, 1.2505419590735989, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.412590946058983, 0);
  sqcRYGate(q, 1.8747618737281513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1106509555091675, 0);
  sqcRYGate(q, 0.7596190581422259, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.749339365153464, 2);
  sqcRYGate(q, 2.8930003072271187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1410719185760843, 2);
  sqcRYGate(q, -0.6760662849800574, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7200210093805843, 4);
  sqcRYGate(q, 2.6027829201072317, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.01669371271480191, 4);
  sqcRYGate(q, 2.553915037786495, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7129991176597997, 6);
  sqcRYGate(q, -1.841635398870371, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.090190130956973, 6);
  sqcRYGate(q, -0.07177629163122301, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4290691622290947, 1);
  sqcRYGate(q, 2.7523797240888865, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.07332918530946439, 1);
  sqcRYGate(q, -3.0749662535509272, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4682461591019895, 3);
  sqcRYGate(q, 2.869542532876282, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.08825610456227616, 3);
  sqcRYGate(q, 3.06426389003923, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8275155148045195, 5);
  sqcRYGate(q, -1.013913138664476, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.06499601656969567, 5);
  sqcRYGate(q, -1.4515117607910337, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7883430848266686, 0);
  sqcRYGate(q, -1.2893793167203111, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.294465288343801, 0);
  sqcRYGate(q, 2.9827669965782087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.319616708901881, 2);
  sqcRYGate(q, 1.7122856254825027, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3891443526458182, 2);
  sqcRYGate(q, -0.1484626770825015, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.216967892956837, 4);
  sqcRYGate(q, -0.5944148945568044, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.995235572712798, 4);
  sqcRYGate(q, 1.7128723857957602, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5648176255329185, 6);
  sqcRYGate(q, -0.7866615439716611, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.901627791064465, 6);
  sqcRYGate(q, 3.1362336758031306, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7222909677202953, 1);
  sqcRYGate(q, 2.6361057617018018, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.286214930860012, 1);
  sqcRYGate(q, 1.7535886286928575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2185844828677137, 3);
  sqcRYGate(q, 0.6184363954515106, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.00382379249790521, 3);
  sqcRYGate(q, -0.0010059419637287034, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1234025377287673, 5);
  sqcRYGate(q, -0.031496686835560284, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.815208489344017, 5);
  sqcRYGate(q, 2.7484549284184094, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.02154542817997296, 0);
  sqcRYGate(q, 0.9457920152393771, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9414681216568654, 0);
  sqcRYGate(q, 1.5787266033688039, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5595506897665636, 2);
  sqcRYGate(q, 2.9214260976306896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.017023561119409, 2);
  sqcRYGate(q, 3.074737220739593, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.152916724266719, 4);
  sqcRYGate(q, -0.44745781205595936, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2114424222556932, 4);
  sqcRYGate(q, -1.6155721076884257, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9289015838321197, 6);
  sqcRYGate(q, -2.6308064244279796, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8905917073142104, 6);
  sqcRYGate(q, 0.4240135462750941, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8775973057998058, 1);
  sqcRYGate(q, -1.8457474146514514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3595474725226036, 1);
  sqcRYGate(q, -1.9630435578921912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5669051148663977, 3);
  sqcRYGate(q, 2.897711500807585, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1368537868818884, 3);
  sqcRYGate(q, 0.08372633341519897, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.028524455725924, 5);
  sqcRYGate(q, 1.5151570928829876, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.07777419181294938, 5);
  sqcRYGate(q, 3.1399179748526573, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6807704697804573, 0);
  sqcRYGate(q, -0.4246371477248161, 1);
  sqcRYGate(q, 1.0387275668062212, 2);
  sqcRYGate(q, 3.1386089110018704, 3);
  sqcRYGate(q, 1.7769952402938598, 4);
  sqcRYGate(q, 0.3093131210272186, 5);
  sqcRYGate(q, -1.5152477466745493, 6);
  sqcRYGate(q, -0.7639169082160384, 7);

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
