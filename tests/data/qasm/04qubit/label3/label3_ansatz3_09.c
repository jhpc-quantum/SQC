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

  sqcRYGate(q, 0.15767871238403508, 0);
  sqcRZGate(q, -1.321030669561107, 0);
  sqcRYGate(q, 2.122190873218835, 1);
  sqcRZGate(q, 2.3276206067437046, 1);
  sqcRYGate(q, -0.1325701422622263, 2);
  sqcRZGate(q, 0.40742212267261463, 2);
  sqcRYGate(q, 2.1337308096627283, 3);
  sqcRZGate(q, -0.005768787537706942, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.138502750439355, 0);
  sqcRZGate(q, -0.11144645366288354, 0);
  sqcRYGate(q, -2.9088135039621323, 1);
  sqcRZGate(q, -2.9225067559482345, 1);
  sqcRYGate(q, 1.186795211558997, 2);
  sqcRZGate(q, -1.613021872633847, 2);
  sqcRYGate(q, -0.8513270089120217, 3);
  sqcRZGate(q, -2.9066600499754953, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.808545952040225, 0);
  sqcRZGate(q, -1.203413663485084, 0);
  sqcRYGate(q, -2.8696813892420328, 1);
  sqcRZGate(q, 1.3301944823876228, 1);
  sqcRYGate(q, 0.35841107981026266, 2);
  sqcRZGate(q, 0.09659816000857989, 2);
  sqcRYGate(q, -1.2411704961713064, 3);
  sqcRZGate(q, 0.6385669686627519, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.49977426347889814, 0);
  sqcRZGate(q, 0.30742413229820215, 0);
  sqcRYGate(q, 2.783961981592918, 1);
  sqcRZGate(q, -0.716889899483378, 1);
  sqcRYGate(q, 1.2590154656500232, 2);
  sqcRZGate(q, -0.518670440154307, 2);
  sqcRYGate(q, -1.5440331387709012, 3);
  sqcRZGate(q, 1.6557357628557536, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.2103920758857782, 0);
  sqcRZGate(q, -2.4640743600513697, 0);
  sqcRYGate(q, 2.411583715527882, 1);
  sqcRZGate(q, 0.9853976911576402, 1);
  sqcRYGate(q, -1.0449825810642213, 2);
  sqcRZGate(q, -2.9428969286442217, 2);
  sqcRYGate(q, 2.456884148366822, 3);
  sqcRZGate(q, -1.7830351800769515, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.4892518517597737, 0);
  sqcRZGate(q, 0.36953653488238974, 0);
  sqcRYGate(q, 1.8557689212740458, 1);
  sqcRZGate(q, -0.26225696399965304, 1);
  sqcRYGate(q, 3.1237144340646648, 2);
  sqcRZGate(q, 0.9748401906481611, 2);
  sqcRYGate(q, -0.7990682399812595, 3);
  sqcRZGate(q, 3.0771354105392366, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.0489008296981948, 0);
  sqcRZGate(q, 2.452204278683218, 0);
  sqcRYGate(q, 0.8692308267229548, 1);
  sqcRZGate(q, 0.7701696768238048, 1);
  sqcRYGate(q, 2.5309431493548766, 2);
  sqcRZGate(q, 2.947271689788151, 2);
  sqcRYGate(q, -2.408410637306528, 3);
  sqcRZGate(q, -2.8294519484352336, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.19950321092218012, 0);
  sqcRZGate(q, -2.819577788207237, 0);
  sqcRYGate(q, -2.0490048426103766, 1);
  sqcRZGate(q, 0.930286953797645, 1);
  sqcRYGate(q, -2.402946649253244, 2);
  sqcRZGate(q, 2.0489853632993107, 2);
  sqcRYGate(q, 0.42785627368153034, 3);
  sqcRZGate(q, -2.1086516707662533, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.0879624547474553, 0);
  sqcRZGate(q, 0.12081606567469814, 0);
  sqcRYGate(q, -1.9693836344951223, 1);
  sqcRZGate(q, 1.305153018923396, 1);
  sqcRYGate(q, 2.0210505720800462, 2);
  sqcRZGate(q, -1.388407814769586, 2);
  sqcRYGate(q, -0.8410467103321737, 3);
  sqcRZGate(q, -1.1710843012186105, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.9960315919186022, 0);
  sqcRZGate(q, 2.121028166168794, 0);
  sqcRYGate(q, 2.513828301976138, 1);
  sqcRZGate(q, -2.1207883560057113, 1);
  sqcRYGate(q, -0.2717386121913793, 2);
  sqcRZGate(q, -2.9483973394402625, 2);
  sqcRYGate(q, -1.3916888983034639, 3);
  sqcRZGate(q, -2.357297780595265, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9571143223884874, 0);
  sqcRZGate(q, -2.9420380259240613, 0);
  sqcRYGate(q, -1.471756451441028, 1);
  sqcRZGate(q, -1.269632856034484, 1);
  sqcRYGate(q, -0.8165905822007726, 2);
  sqcRZGate(q, 0.44403819408973716, 2);
  sqcRYGate(q, -0.09494525139286304, 3);
  sqcRZGate(q, -2.3139939135889693, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1835608318705635, 0);
  sqcRZGate(q, -1.2652312101849823, 0);
  sqcRYGate(q, -1.298235134413292, 1);
  sqcRZGate(q, 1.5061763765006542, 1);
  sqcRYGate(q, -1.940724219211944, 2);
  sqcRZGate(q, 0.7489468551070269, 2);
  sqcRYGate(q, 1.259665828177751, 3);
  sqcRZGate(q, -1.0000235806684377, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.353174201402898, 0);
  sqcRZGate(q, -1.0898373209128107, 0);
  sqcRYGate(q, 1.6369357871619332, 1);
  sqcRZGate(q, 0.5473611520525004, 1);
  sqcRYGate(q, -1.3233879367057007, 2);
  sqcRZGate(q, 1.0832404818678123, 2);
  sqcRYGate(q, 2.344596362479451, 3);
  sqcRZGate(q, 2.1239457802491204, 3);

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
