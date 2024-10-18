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

  sqcRYGate(q, 2.0357753383578876, 0);
  sqcRYGate(q, 2.307252276077351, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.126039202537309, 0);
  sqcRYGate(q, -0.45912747456800584, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.880281464919309, 0);
  sqcRYGate(q, 2.563249999359721, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3885923530450486, 0);
  sqcRYGate(q, -2.1675131923937734, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9375865740479803, 0);
  sqcRYGate(q, 2.1589666483142573, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.511558166156642, 0);
  sqcRYGate(q, -0.9768417720838349, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5537863874658933, 1);
  sqcRYGate(q, -2.334719632987327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0210679023688769, 1);
  sqcRYGate(q, 1.0538571279657178, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.13667669194752935, 1);
  sqcRYGate(q, 0.4207428233395927, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.956815194108346, 1);
  sqcRYGate(q, -2.8918361352945308, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.860021567106982, 2);
  sqcRYGate(q, -1.0343549739290827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.009057138077086968, 2);
  sqcRYGate(q, -0.8747574844403065, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8939474372840914, 0);
  sqcRYGate(q, 1.2880564068108562, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.10306397570308, 0);
  sqcRYGate(q, -1.5132240756425253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4652849314114071, 0);
  sqcRYGate(q, -2.4378295245645485, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.889880120780179, 0);
  sqcRYGate(q, 0.7171903184564777, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5418162732804809, 0);
  sqcRYGate(q, -2.397054679884149, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6631234140749163, 0);
  sqcRYGate(q, 0.225510883174878, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6859141470352572, 1);
  sqcRYGate(q, -0.7577751107579055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.858601106349761, 1);
  sqcRYGate(q, 0.7468903035505114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9914220831989757, 1);
  sqcRYGate(q, 0.6701649067405873, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5856685551679535, 1);
  sqcRYGate(q, -0.5039272860664623, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6185748449335504, 2);
  sqcRYGate(q, -1.8049098944414776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9014437133527284, 2);
  sqcRYGate(q, 0.41421896514735046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4220110430459085, 0);
  sqcRYGate(q, -0.9048494430094172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.596469517456983, 0);
  sqcRYGate(q, 2.6120464043188623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.617078658525217, 0);
  sqcRYGate(q, -3.080380380260914, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.16198294558042, 0);
  sqcRYGate(q, 0.06501385407282645, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7239588694166619, 0);
  sqcRYGate(q, 2.0230591118383905, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.39158559791671266, 0);
  sqcRYGate(q, 0.034374825064683034, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.14806121058551464, 1);
  sqcRYGate(q, -0.6348280331616545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.219550554394775, 1);
  sqcRYGate(q, -1.8249116893503985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9520689326737487, 1);
  sqcRYGate(q, 0.8698822908017612, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.015293529584134, 1);
  sqcRYGate(q, 0.30000460645265914, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.483446705953801, 2);
  sqcRYGate(q, -0.8867505955684225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.40104575170095463, 2);
  sqcRYGate(q, -1.2662828959837953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.323965960259189, 0);
  sqcRYGate(q, -2.7292657633016084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3716436276037358, 0);
  sqcRYGate(q, -0.8324886345690091, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.591794144837056, 0);
  sqcRYGate(q, -1.5728546109935055, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3608113350509914, 0);
  sqcRYGate(q, 1.861017465481163, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.544314944234393, 0);
  sqcRYGate(q, -1.7530619733982187, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.286167052135725, 0);
  sqcRYGate(q, -1.4729153165269027, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5950602772083471, 1);
  sqcRYGate(q, 3.109038672120751, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2481730836475773, 1);
  sqcRYGate(q, -2.715492098792941, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.613690546364794, 1);
  sqcRYGate(q, -2.9418059512607737, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4171211409182534, 1);
  sqcRYGate(q, 2.3803369799137926, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0075898102998235, 2);
  sqcRYGate(q, 0.24485723121917152, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3244425390023303, 2);
  sqcRYGate(q, 2.2414780115041393, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8611637076448594, 0);
  sqcRYGate(q, 1.4268753400972054, 1);
  sqcRYGate(q, 1.196797825426657, 2);
  sqcRYGate(q, -2.2257158846022174, 3);

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
