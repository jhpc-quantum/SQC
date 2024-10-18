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

  sqcRYGate(q, 2.9745877029664243, 0);
  sqcRZGate(q, 2.1769264569036526, 0);
  sqcRYGate(q, 0.5253370958549999, 1);
  sqcRZGate(q, 2.9559617513549545, 1);
  sqcRYGate(q, -0.4440132952324604, 2);
  sqcRZGate(q, -2.4457026210844046, 2);
  sqcRYGate(q, 1.5693716500541783, 3);
  sqcRZGate(q, -0.0027188389877115153, 3);
  sqcRYGate(q, -1.5860212367393267, 4);
  sqcRZGate(q, 3.137475764809736, 4);
  sqcRYGate(q, -1.472416955896929, 5);
  sqcRZGate(q, -2.5499721621455227, 5);
  sqcRYGate(q, 0.22056912097983458, 6);
  sqcRZGate(q, -1.8581606820054537, 6);
  sqcRYGate(q, 0.6898011098554665, 7);
  sqcRZGate(q, -3.0677227947402135, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.841682873445721, 0);
  sqcRZGate(q, 1.9920060719506028, 0);
  sqcRYGate(q, 2.157602480980689, 1);
  sqcRZGate(q, 2.84978326539901, 1);
  sqcRYGate(q, -3.1289892195417837, 2);
  sqcRZGate(q, -2.8505309185040915, 2);
  sqcRYGate(q, -1.5636873817588262, 3);
  sqcRZGate(q, 0.7137341909589372, 3);
  sqcRYGate(q, -0.3691831957365519, 4);
  sqcRZGate(q, -3.1358313672136378, 4);
  sqcRYGate(q, 0.006378107537940103, 5);
  sqcRZGate(q, 1.2865602043357303, 5);
  sqcRYGate(q, -1.4827727065527272, 6);
  sqcRZGate(q, 2.4538461383736947, 6);
  sqcRYGate(q, -2.449246948179708, 7);
  sqcRZGate(q, -0.477134018780114, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.10521268582436248, 0);
  sqcRZGate(q, 2.1564289087200192, 0);
  sqcRYGate(q, -2.8842313461371987, 1);
  sqcRZGate(q, 0.9610822262394517, 1);
  sqcRYGate(q, -2.169418650567282, 2);
  sqcRZGate(q, 2.5423478646891873, 2);
  sqcRYGate(q, 3.119401201482532, 3);
  sqcRZGate(q, -1.4127104077519093, 3);
  sqcRYGate(q, -1.573094186085406, 4);
  sqcRZGate(q, -3.090534927527863, 4);
  sqcRYGate(q, -1.206175232150808, 5);
  sqcRZGate(q, -0.18384440744576305, 5);
  sqcRYGate(q, -1.9596761414587607, 6);
  sqcRZGate(q, 1.210949792490353, 6);
  sqcRYGate(q, -0.0879456741712575, 7);
  sqcRZGate(q, -1.434379381102172, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.688372139565753, 0);
  sqcRZGate(q, 1.2205518917261466, 0);
  sqcRYGate(q, 2.8210546900069446, 1);
  sqcRZGate(q, 1.1498120397199747, 1);
  sqcRYGate(q, -1.5562675074057495, 2);
  sqcRZGate(q, -1.5693279687448558, 2);
  sqcRYGate(q, -3.0922932681932926, 3);
  sqcRZGate(q, 1.0250179295319342, 3);
  sqcRYGate(q, -2.7511599827023825, 4);
  sqcRZGate(q, 3.1329011065127506, 4);
  sqcRYGate(q, -2.910579687298882, 5);
  sqcRZGate(q, 2.443093039643836, 5);
  sqcRYGate(q, 1.3894606389425093, 6);
  sqcRZGate(q, -1.5512375103923235, 6);
  sqcRYGate(q, 0.10475986321055863, 7);
  sqcRZGate(q, -1.618055849268394, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.9004587978240515, 0);
  sqcRZGate(q, -3.003116812244168, 0);
  sqcRYGate(q, -1.5739087384752262, 1);
  sqcRZGate(q, -1.576020320342782, 1);
  sqcRYGate(q, -1.5758929763197491, 2);
  sqcRZGate(q, 2.168629305540194, 2);
  sqcRYGate(q, 0.10802120992349457, 3);
  sqcRZGate(q, 3.1394309474484534, 3);
  sqcRYGate(q, 1.5529574246180178, 4);
  sqcRZGate(q, 1.5755310262140627, 4);
  sqcRYGate(q, 1.707770451079493, 5);
  sqcRZGate(q, 3.083935578902088, 5);
  sqcRYGate(q, 1.4973972717593853, 6);
  sqcRZGate(q, 3.0952676993271275, 6);
  sqcRYGate(q, -1.7310509540061716, 7);
  sqcRZGate(q, -2.943912681093132, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.136146617362771, 0);
  sqcRZGate(q, -0.8907398886253519, 0);
  sqcRYGate(q, -0.4738916396634618, 1);
  sqcRZGate(q, 1.5602166039278627, 1);
  sqcRYGate(q, 1.5696678564958246, 2);
  sqcRZGate(q, -0.00359285499250106, 2);
  sqcRYGate(q, -1.5868739324694585, 3);
  sqcRZGate(q, 1.1053552816342593, 3);
  sqcRYGate(q, -1.569911328604709, 4);
  sqcRZGate(q, 0.049102212506638876, 4);
  sqcRYGate(q, -1.5710970935886357, 5);
  sqcRZGate(q, 1.5737486781143009, 5);
  sqcRYGate(q, 0.7786034549657455, 6);
  sqcRZGate(q, 0.1525873991410318, 6);
  sqcRYGate(q, -0.23224835312251815, 7);
  sqcRZGate(q, -0.6215507939206297, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8862374526049646, 0);
  sqcRZGate(q, 2.684498465223067, 0);
  sqcRYGate(q, -2.89978621503699, 1);
  sqcRZGate(q, -0.014776747067489994, 1);
  sqcRYGate(q, 0.12042093997941272, 2);
  sqcRZGate(q, 3.137787659037774, 2);
  sqcRYGate(q, -3.110780786470371, 3);
  sqcRZGate(q, 0.8549983892487489, 3);
  sqcRYGate(q, 3.03365288600599, 4);
  sqcRZGate(q, -2.8445742229186575, 4);
  sqcRYGate(q, 0.06080188015481344, 5);
  sqcRZGate(q, -0.003160326519915757, 5);
  sqcRYGate(q, -1.5741920130236342, 6);
  sqcRZGate(q, -1.570784727317737, 6);
  sqcRYGate(q, -1.732378415647096, 7);
  sqcRZGate(q, 0.8727744546000452, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1330393875959444, 0);
  sqcRZGate(q, 0.09908128017286179, 0);
  sqcRYGate(q, -1.5717140845225657, 1);
  sqcRZGate(q, -1.320921510811885, 1);
  sqcRYGate(q, -1.5710137290988426, 2);
  sqcRZGate(q, 1.6949663339536165, 2);
  sqcRYGate(q, 3.1223893563850824, 3);
  sqcRZGate(q, -3.064035913559258, 3);
  sqcRYGate(q, -3.138909148266844, 4);
  sqcRZGate(q, 0.5895686549422567, 4);
  sqcRYGate(q, 1.5707344688153442, 5);
  sqcRZGate(q, 0.43674345256721875, 5);
  sqcRYGate(q, -1.570779026417753, 6);
  sqcRZGate(q, -2.6732844560854665, 6);
  sqcRYGate(q, 6.561941430015267e-05, 7);
  sqcRZGate(q, 1.0460468467389479, 7);

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
