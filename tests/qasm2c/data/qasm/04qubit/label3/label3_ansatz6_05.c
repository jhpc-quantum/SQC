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

  sqcRYGate(q, -1.2054147099708494, 0);
  sqcRYGate(q, -0.6892497248404128, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5423735590730876, 0);
  sqcRYGate(q, -0.7256242054423658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.569124461818394, 1);
  sqcRYGate(q, 1.6539790630782518, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6411770790727647, 1);
  sqcRYGate(q, -0.7737206137804495, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3169989846623573, 2);
  sqcRYGate(q, 0.945445270362332, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8935116405504617, 2);
  sqcRYGate(q, 0.16716795845847143, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7339424597022268, 0);
  sqcRYGate(q, -2.8337614870242858, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.03428170827673739, 0);
  sqcRYGate(q, 1.9898033975079579, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9785383994227077, 1);
  sqcRYGate(q, 2.4409756718782183, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6423678549061247, 1);
  sqcRYGate(q, 2.550660177574391, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7496588074493818, 2);
  sqcRYGate(q, 2.469977332078718, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0564119614394247, 2);
  sqcRYGate(q, 2.321241274625458, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7749419982222685, 0);
  sqcRYGate(q, -0.5166440489379625, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.162287757054689, 0);
  sqcRYGate(q, -2.134655956298866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.18940327644692345, 1);
  sqcRYGate(q, 2.4782598455585343, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6244509307087647, 1);
  sqcRYGate(q, 3.0797218709450926, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3411349765130014, 2);
  sqcRYGate(q, 2.996839306092457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.243312005145248, 2);
  sqcRYGate(q, 0.8199600404655566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2062507442617263, 0);
  sqcRYGate(q, 0.36086531740653616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6231895398852112, 0);
  sqcRYGate(q, -0.3748511660751786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7370273925634936, 1);
  sqcRYGate(q, -3.0197651201467837, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5821334298455768, 1);
  sqcRYGate(q, 0.9627992586377738, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.069774885468485, 2);
  sqcRYGate(q, -2.660119709490586, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9331749925760899, 2);
  sqcRYGate(q, -2.6634279657622253, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.120748608728592, 0);
  sqcRYGate(q, -0.26394091137407116, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6973322999681479, 0);
  sqcRYGate(q, 0.3934437629329093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8568985430600207, 1);
  sqcRYGate(q, -1.5016533495366948, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0007634476228113, 1);
  sqcRYGate(q, 1.1476566783068671, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.033362382550598, 2);
  sqcRYGate(q, 0.15707176545336754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5111698706701864, 2);
  sqcRYGate(q, -1.3767990578769012, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.197459909437101, 0);
  sqcRYGate(q, 1.7606952259334794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.798161943441865, 0);
  sqcRYGate(q, -2.703947851524631, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4315391806432411, 1);
  sqcRYGate(q, -0.5940144347753478, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6348890651933115, 1);
  sqcRYGate(q, -1.3685675126850585, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0060307135535087, 2);
  sqcRYGate(q, -0.0998020379475042, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1055890013190481, 2);
  sqcRYGate(q, -2.863568930015228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.168240677316394, 0);
  sqcRYGate(q, -1.824456611078225, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1083711521186315, 0);
  sqcRYGate(q, -2.644240213037328, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4172207545379017, 1);
  sqcRYGate(q, -1.6640118426545953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.703017790038925, 1);
  sqcRYGate(q, -2.652943523945952, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.33345413740006613, 2);
  sqcRYGate(q, 1.9621132834668327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.953524918172514, 2);
  sqcRYGate(q, -2.5293330912962273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3024914552931808, 0);
  sqcRYGate(q, -1.3688877108479762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1790128921561127, 0);
  sqcRYGate(q, 1.086065411048265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2947922590607952, 1);
  sqcRYGate(q, 3.0909821991477893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4715322592075912, 1);
  sqcRYGate(q, 2.3961435751120734, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3785024489090922, 2);
  sqcRYGate(q, -1.4475991584808554, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9394591929216237, 2);
  sqcRYGate(q, 2.8817495107682856, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3567138736714108, 0);
  sqcRYGate(q, 2.922562124702781, 1);
  sqcRYGate(q, 2.1090940480187577, 2);
  sqcRYGate(q, 2.0073488211182458, 3);

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
