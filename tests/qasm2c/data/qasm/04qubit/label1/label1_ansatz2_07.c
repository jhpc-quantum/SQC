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

  sqcRYGate(q, -2.3727891719531184, 0);
  sqcRZGate(q, 2.3867217225606283, 0);
  sqcRYGate(q, 0.6810691068555003, 1);
  sqcRZGate(q, 2.641089621342387, 1);
  sqcRYGate(q, -0.37915301882110275, 2);
  sqcRZGate(q, 0.34480086062181753, 2);
  sqcRYGate(q, -2.4128522753333583, 3);
  sqcRZGate(q, 0.02122225828545129, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.683975487392362, 0);
  sqcRZGate(q, 0.382233227899729, 0);
  sqcRYGate(q, -1.9213246405206494, 1);
  sqcRZGate(q, 1.2988627630344034, 1);
  sqcRYGate(q, 2.713088600094139, 2);
  sqcRZGate(q, -0.6319720899399413, 2);
  sqcRYGate(q, 0.43090380028435804, 3);
  sqcRZGate(q, 3.021514763400701, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.4561732903493385, 0);
  sqcRZGate(q, -2.408731644579223, 0);
  sqcRYGate(q, -0.9776139490458835, 1);
  sqcRZGate(q, 1.7376821053440858, 1);
  sqcRYGate(q, -2.7779189974157035, 2);
  sqcRZGate(q, -1.5373773697722308, 2);
  sqcRYGate(q, -0.942570036952558, 3);
  sqcRZGate(q, 1.2575448515553616, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.2690060067065962, 0);
  sqcRZGate(q, -3.000115775918024, 0);
  sqcRYGate(q, 1.3634115590986164, 1);
  sqcRZGate(q, -2.68857117870666, 1);
  sqcRYGate(q, -0.9384269877302759, 2);
  sqcRZGate(q, -0.6661865849928138, 2);
  sqcRYGate(q, 0.2413244947784943, 3);
  sqcRZGate(q, -0.6924020522974024, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.622474052401247, 0);
  sqcRZGate(q, 2.2281459346340786, 0);
  sqcRYGate(q, -1.7925065897836165, 1);
  sqcRZGate(q, 2.398436470380518, 1);
  sqcRYGate(q, -2.7025766824675217, 2);
  sqcRZGate(q, 1.8030364051157273, 2);
  sqcRYGate(q, 0.7708202631404556, 3);
  sqcRZGate(q, -2.8415954425143957, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.1110119976126092, 0);
  sqcRZGate(q, 1.7363379694462506, 0);
  sqcRYGate(q, -3.092139283186215, 1);
  sqcRZGate(q, 0.7164163421402568, 1);
  sqcRYGate(q, -0.08330923583018457, 2);
  sqcRZGate(q, 0.7573855085627885, 2);
  sqcRYGate(q, -0.23973387686983297, 3);
  sqcRZGate(q, 0.8780253794825291, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.19886652011379358, 0);
  sqcRZGate(q, -0.7030191226004305, 0);
  sqcRYGate(q, 2.2302771293919177, 1);
  sqcRZGate(q, -3.040906065846772, 1);
  sqcRYGate(q, 1.15149592989546, 2);
  sqcRZGate(q, -1.1698968302257677, 2);
  sqcRYGate(q, 2.4992660638115387, 3);
  sqcRZGate(q, 2.759276391847202, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.6353485415605897, 0);
  sqcRZGate(q, -2.3245080330249586, 0);
  sqcRYGate(q, -0.32473106933189944, 1);
  sqcRZGate(q, 1.5390045979875193, 1);
  sqcRYGate(q, -2.024078902871155, 2);
  sqcRZGate(q, -3.001568800032623, 2);
  sqcRYGate(q, -2.395118596790728, 3);
  sqcRZGate(q, 2.945322266067404, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.6672262677244571, 0);
  sqcRZGate(q, 2.4463996674112107, 0);
  sqcRYGate(q, -1.5869988890283677, 1);
  sqcRZGate(q, 0.5913672427104933, 1);
  sqcRYGate(q, -0.7532906756397922, 2);
  sqcRZGate(q, 2.2406812505457694, 2);
  sqcRYGate(q, -2.117713351502224, 3);
  sqcRZGate(q, -1.340862564887633, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.6714683713696203, 0);
  sqcRZGate(q, -1.7379820139604059, 0);
  sqcRYGate(q, -1.3121132310705872, 1);
  sqcRZGate(q, -1.3360276683038919, 1);
  sqcRYGate(q, -2.3662088563263386, 2);
  sqcRZGate(q, -0.8744741814803065, 2);
  sqcRYGate(q, -0.7388372525540813, 3);
  sqcRZGate(q, 0.5113200272948468, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.097403251057451, 0);
  sqcRZGate(q, 1.9261835355234438, 0);
  sqcRYGate(q, -1.6764043523431544, 1);
  sqcRZGate(q, 1.9860198353596212, 1);
  sqcRYGate(q, -2.232784735893009, 2);
  sqcRZGate(q, 1.550676085096999, 2);
  sqcRYGate(q, -2.5418042344197955, 3);
  sqcRZGate(q, -0.5377803374205004, 3);

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
