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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 3.0832010371035787, 0);
  sqcRZGate(q, 3.1415881873664, 0);
  sqcRYGate(q, -1.0924955706423187, 1);
  sqcRZGate(q, -3.1415689542356255, 1);
  sqcRYGate(q, -2.9949953381775707, 2);
  sqcRZGate(q, 1.5707957745193895, 2);
  sqcRYGate(q, -1.5265377433180543, 3);
  sqcRZGate(q, -3.1415913638566537, 3);
  sqcRYGate(q, -2.3192371800220505e-07, 4);
  sqcRZGate(q, 0.9867603196118068, 4);
  sqcRYGate(q, 0.1610804831290631, 5);
  sqcRZGate(q, -3.1415896255750817, 5);
  sqcRYGate(q, 0.5499668590128621, 6);
  sqcRZGate(q, -3.141427287388326, 6);
  sqcRYGate(q, -0.05504992915921392, 7);
  sqcRZGate(q, 3.1415213576773664, 7);
  sqcRYGate(q, -1.542478308941937, 8);
  sqcRZGate(q, 3.141573787584886, 8);
  sqcRYGate(q, -2.737577657896395e-07, 9);
  sqcRZGate(q, 1.6444778280321442, 9);
  sqcRYGate(q, -0.8421418774150765, 10);
  sqcRZGate(q, -3.1413270431352633, 10);
  sqcRYGate(q, 3.0799750141660374, 11);
  sqcRZGate(q, -3.141532868131742, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.8929132502621546, 0);
  sqcRZGate(q, -1.5708009135630119, 0);
  sqcRYGate(q, -0.06612068778430213, 1);
  sqcRZGate(q, 1.5707719346099207, 1);
  sqcRYGate(q, -1.570799484935104, 2);
  sqcRZGate(q, -2.1213998676285666, 2);
  sqcRYGate(q, 1.6987458814415755, 3);
  sqcRZGate(q, -2.302305453957688, 3);
  sqcRYGate(q, 1.570797260387963, 4);
  sqcRZGate(q, 1.5705839445302043, 4);
  sqcRYGate(q, -0.21510440893412763, 5);
  sqcRZGate(q, 0.945562982226738, 5);
  sqcRYGate(q, -0.05607022316346365, 6);
  sqcRZGate(q, 3.1414752509176824, 6);
  sqcRYGate(q, -0.5593508379491253, 7);
  sqcRZGate(q, -0.0003697675582117199, 7);
  sqcRYGate(q, -1.4930952050593502, 8);
  sqcRZGate(q, -0.8648500609339571, 8);
  sqcRYGate(q, 1.5708035443114943, 9);
  sqcRZGate(q, -3.141592195375708, 9);
  sqcRYGate(q, -0.0631327397592436, 10);
  sqcRZGate(q, 0.24197903310046343, 10);
  sqcRYGate(q, -0.7712117173926732, 11);
  sqcRZGate(q, -2.3048254295642807, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.8085277969473346, 0);
  sqcRZGate(q, 2.942848226414733, 0);
  sqcRYGate(q, 2.980184798960823, 1);
  sqcRZGate(q, -0.1987408399781144, 1);
  sqcRYGate(q, 1.5707979293554413, 2);
  sqcRZGate(q, 0.0023704331332208284, 2);
  sqcRYGate(q, -5.520405267287086e-07, 3);
  sqcRZGate(q, -2.21134310051947, 3);
  sqcRYGate(q, 0.011151293261136175, 4);
  sqcRZGate(q, 1.5733800046564355, 4);
  sqcRYGate(q, -3.1415923584908114, 5);
  sqcRZGate(q, -0.8239717470371124, 5);
  sqcRYGate(q, -0.14970175716696799, 6);
  sqcRZGate(q, -2.9428543607935316, 6);
  sqcRYGate(q, -0.01491370563228589, 7);
  sqcRZGate(q, 2.943245225538806, 7);
  sqcRYGate(q, -2.787754800348319e-07, 8);
  sqcRZGate(q, -2.077956220290579, 8);
  sqcRYGate(q, 1.570798895836931, 9);
  sqcRZGate(q, 0.19871649832609975, 9);
  sqcRYGate(q, -7.024090988849707e-07, 10);
  sqcRZGate(q, -0.04345857660568097, 10);
  sqcRYGate(q, -1.0984765727481214e-06, 11);
  sqcRZGate(q, 2.5035416400152783, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5703276795724046, 0);
  sqcRZGate(q, 0.09137137239834335, 0);
  sqcRYGate(q, 1.5703268967334283, 1);
  sqcRZGate(q, 0.09136678419712509, 1);
  sqcRYGate(q, 2.942847020615117, 2);
  sqcRZGate(q, -1.4771012082980786, 2);
  sqcRYGate(q, 1.571265662019755, 3);
  sqcRZGate(q, -3.0502259158174705, 3);
  sqcRYGate(q, 2.9428532314235603, 4);
  sqcRZGate(q, -1.4770984064405623, 4);
  sqcRYGate(q, 1.570328501824685, 5);
  sqcRZGate(q, 0.09136636183714753, 5);
  sqcRYGate(q, -1.5712680656828661, 6);
  sqcRZGate(q, 0.09137326359865951, 6);
  sqcRYGate(q, -1.5703292577152086, 7);
  sqcRZGate(q, -3.0502264426236025, 7);
  sqcRYGate(q, 1.5712688401095658, 8);
  sqcRZGate(q, -3.0502184363695166, 8);
  sqcRYGate(q, 1.5712696428637365, 9);
  sqcRZGate(q, -3.0502243358261234, 9);
  sqcRYGate(q, 1.5712694126484923, 10);
  sqcRZGate(q, -3.0502184876181886, 10);
  sqcRYGate(q, 1.5712644853388478, 11);
  sqcRZGate(q, -3.0502264671106256, 11);

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
