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

  sqcRYGate(q, -2.1103398164393194, 0);
  sqcRYGate(q, 2.8848111427182594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4632168399474965, 0);
  sqcRYGate(q, 2.6198266342169636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0950724424448457, 2);
  sqcRYGate(q, 0.09655578754548304, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8139673584124006, 2);
  sqcRYGate(q, -2.3136522298658755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3281711095317212, 0);
  sqcRYGate(q, -2.880930202382807, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5983133058344705, 0);
  sqcRYGate(q, -2.5336322391285107, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3329503413548078, 1);
  sqcRYGate(q, -1.4964825022826727, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.344296402939411, 1);
  sqcRYGate(q, 2.253854613209819, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4139240974365679, 0);
  sqcRYGate(q, 2.0359795568171135, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4502792832468083, 0);
  sqcRYGate(q, -2.908965988614055, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.903336282641415, 1);
  sqcRYGate(q, 1.5270645069661233, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9933887601988716, 1);
  sqcRYGate(q, 1.4414467986077337, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9486304701874174, 0);
  sqcRYGate(q, 0.997526418345366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7193080840792074, 0);
  sqcRYGate(q, -2.773021164611942, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6121651102489976, 2);
  sqcRYGate(q, 0.003715204223041469, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0524431998411257, 2);
  sqcRYGate(q, 2.480358776657976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.333791021732491, 0);
  sqcRYGate(q, 2.871203693528709, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4106740811825198, 0);
  sqcRYGate(q, -1.559153112850579, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.82927068242279, 1);
  sqcRYGate(q, -0.9133409175663898, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.279068767020241, 1);
  sqcRYGate(q, 2.829283824100046, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8646126069614924, 0);
  sqcRYGate(q, -0.1842490513085675, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4802967193153247, 0);
  sqcRYGate(q, 2.424592200960411, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7866318179248646, 1);
  sqcRYGate(q, 1.4017262482305364, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3125796253532469, 1);
  sqcRYGate(q, -1.091262094977548, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4860295431251002, 0);
  sqcRYGate(q, -2.3374053179251644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0626755243645432, 0);
  sqcRYGate(q, -2.6052200775796526, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6628158047504917, 2);
  sqcRYGate(q, -2.1983074292093434, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0745813282517522, 2);
  sqcRYGate(q, -0.9532827048138293, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.114010312659903, 0);
  sqcRYGate(q, 1.983557949366231, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8500267836755464, 0);
  sqcRYGate(q, 1.1094769665008644, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.19237161017433202, 1);
  sqcRYGate(q, 3.072686970757873, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4893243867337562, 1);
  sqcRYGate(q, -0.5057429831556263, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.44106387269670666, 0);
  sqcRYGate(q, -1.0731207491123138, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2336245838393554, 0);
  sqcRYGate(q, -2.733707513773647, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.16933114998217125, 1);
  sqcRYGate(q, 2.0881605310493527, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.47875908080833485, 1);
  sqcRYGate(q, -2.738275722282801, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8177090833258163, 0);
  sqcRYGate(q, 1.9338090213484387, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5295099382616946, 0);
  sqcRYGate(q, -0.7337946173251872, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.323894447338091, 2);
  sqcRYGate(q, 1.9935639821504305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.530062019034859, 2);
  sqcRYGate(q, -2.842131124226864, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0807302724002432, 0);
  sqcRYGate(q, 0.005353744036119323, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8198818665686184, 0);
  sqcRYGate(q, 0.784280156199155, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.559409862169878, 1);
  sqcRYGate(q, 0.41507533320424894, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4675021378402713, 1);
  sqcRYGate(q, -2.4265165426195217, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.593974375495604, 0);
  sqcRYGate(q, -2.1242369115425315, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8082206984747062, 0);
  sqcRYGate(q, -2.2315042758011314, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6935834005316108, 1);
  sqcRYGate(q, 2.8264641980405663, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.934486909201022, 1);
  sqcRYGate(q, -2.1825133198385287, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8350137799406414, 0);
  sqcRYGate(q, 2.4892533104205365, 1);
  sqcRYGate(q, -2.3426657480205484, 2);
  sqcRYGate(q, -2.2759934815039173, 3);

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
