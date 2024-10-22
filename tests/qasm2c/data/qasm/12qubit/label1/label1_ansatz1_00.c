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

  sqcRYGate(q, -0.5032664437576351, 0);
  sqcRZGate(q, -3.141585055553269, 0);
  sqcRYGate(q, 0.12041842760285007, 1);
  sqcRZGate(q, -3.95269959874156e-06, 1);
  sqcRYGate(q, 1.5708025385407793, 2);
  sqcRZGate(q, 0.32053295341819243, 2);
  sqcRYGate(q, -1.570792996274396, 3);
  sqcRZGate(q, 1.5141727874891124, 3);
  sqcRYGate(q, 1.192428872131584, 4);
  sqcRZGate(q, -1.570816226562469, 4);
  sqcRYGate(q, 2.4184251439985727, 5);
  sqcRZGate(q, -1.5707899526904472, 5);
  sqcRYGate(q, 3.0531452308856903, 6);
  sqcRZGate(q, 1.570812960609314, 6);
  sqcRYGate(q, -0.7236335039336721, 7);
  sqcRZGate(q, -1.5707936053760942, 7);
  sqcRYGate(q, -1.5707906822627224, 8);
  sqcRZGate(q, -0.6741660582877349, 8);
  sqcRYGate(q, 1.5707781981799807, 9);
  sqcRZGate(q, 0.10633799708498338, 9);
  sqcRYGate(q, -0.12695605728066095, 10);
  sqcRZGate(q, -2.101003122234602e-05, 10);
  sqcRYGate(q, 2.838102133431184, 11);
  sqcRZGate(q, -0.00035872959147777167, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.9941562563592226, 0);
  sqcRZGate(q, -1.570780223238336, 0);
  sqcRYGate(q, -1.5707910553003046, 1);
  sqcRZGate(q, 0.49701652682364017, 1);
  sqcRYGate(q, 1.5191736124930049, 2);
  sqcRZGate(q, -1.7485941602013855, 2);
  sqcRYGate(q, 1.4638355124865043, 3);
  sqcRZGate(q, 0.2183193291024414, 3);
  sqcRYGate(q, -0.0674797076784035, 4);
  sqcRZGate(q, -3.1415733346136694, 4);
  sqcRYGate(q, 1.5707896905516878, 5);
  sqcRZGate(q, -2.122667437721228, 5);
  sqcRYGate(q, 1.5707988938573638, 6);
  sqcRZGate(q, 0.15805858194705727, 6);
  sqcRYGate(q, -0.11391505560904758, 7);
  sqcRZGate(q, -1.8629489740268346e-05, 7);
  sqcRYGate(q, 0.7422956315937332, 8);
  sqcRZGate(q, 0.2662063719673986, 8);
  sqcRYGate(q, -1.7628004505685508, 9);
  sqcRZGate(q, 1.3277416589738964, 9);
  sqcRYGate(q, -1.5707914568610895, 10);
  sqcRZGate(q, -2.5529277992594355, 10);
  sqcRYGate(q, -0.05650636661857611, 11);
  sqcRZGate(q, -1.5704812784061013, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.62985959080798, 0);
  sqcRZGate(q, -1.5707918862679016, 0);
  sqcRYGate(q, 1.330627766736738, 1);
  sqcRZGate(q, 1.4692507329731244, 1);
  sqcRYGate(q, -2.9421878903661494, 2);
  sqcRZGate(q, -1.7276315812341885, 2);
  sqcRYGate(q, -1.5707948240115595, 3);
  sqcRZGate(q, -7.972652857901608e-07, 3);
  sqcRYGate(q, -2.687203064262382, 4);
  sqcRZGate(q, -1.570795996188071, 4);
  sqcRYGate(q, -3.0078994258230214, 5);
  sqcRZGate(q, 1.4321649260304037, 5);
  sqcRYGate(q, 3.01402686673026, 6);
  sqcRZGate(q, 2.0118795087644887, 6);
  sqcRYGate(q, 0.8357193852627915, 7);
  sqcRZGate(q, 1.5707961963595487, 7);
  sqcRYGate(q, 1.5708165220354493, 8);
  sqcRZGate(q, -1.8635978254271345e-05, 8);
  sqcRYGate(q, -3.0023012698980374, 9);
  sqcRZGate(q, -0.7203889013758644, 9);
  sqcRYGate(q, 1.8834438858528157, 10);
  sqcRZGate(q, -1.4219414335739247, 10);
  sqcRYGate(q, 0.6405111608502131, 11);
  sqcRZGate(q, -1.5707898238336595, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.1260240994762768, 0);
  sqcRZGate(q, 0.18031301409517833, 0);
  sqcRYGate(q, 1.5707982995491467, 1);
  sqcRZGate(q, 1.751117518427533, 1);
  sqcRYGate(q, 1.5707968554851899, 2);
  sqcRZGate(q, -1.39048068338185, 2);
  sqcRYGate(q, 1.8050378247883714, 3);
  sqcRZGate(q, 0.18031741322355543, 3);
  sqcRYGate(q, -1.1874415342341218, 4);
  sqcRZGate(q, 0.18030957126383965, 4);
  sqcRYGate(q, -1.5708011665327837, 5);
  sqcRZGate(q, -1.3904882542001902, 5);
  sqcRYGate(q, 1.5707953048462227, 6);
  sqcRZGate(q, 1.7511056087627372, 6);
  sqcRYGate(q, -1.8185038473204451, 7);
  sqcRZGate(q, 0.1803030501367386, 7);
  sqcRYGate(q, 0.4540284652213957, 8);
  sqcRZGate(q, -2.961286025183302, 8);
  sqcRYGate(q, -1.5707944385059496, 9);
  sqcRZGate(q, -1.3904986251743143, 9);
  sqcRYGate(q, 1.5707943731382832, 10);
  sqcRZGate(q, 1.7511038497640963, 10);
  sqcRYGate(q, -0.1487996280405426, 11);
  sqcRZGate(q, -2.9612950493494616, 11);

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
