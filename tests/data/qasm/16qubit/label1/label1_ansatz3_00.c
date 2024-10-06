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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 2.415033130624353, 0);
  sqcRZGate(q, 0.9239379345247016, 0);
  sqcRYGate(q, 2.1287977748615856, 1);
  sqcRZGate(q, -1.8333682971899132, 1);
  sqcRYGate(q, -3.1192761378209757, 2);
  sqcRZGate(q, -1.0579050060242623, 2);
  sqcRYGate(q, 3.059296981806005, 3);
  sqcRZGate(q, 0.6497561535009134, 3);
  sqcRYGate(q, -1.3593034233504284, 4);
  sqcRZGate(q, 1.8544335409979986, 4);
  sqcRYGate(q, 0.7452214419776558, 5);
  sqcRZGate(q, -1.046285075374706, 5);
  sqcRYGate(q, 2.8048989571785428, 6);
  sqcRZGate(q, 2.5851626583146357, 6);
  sqcRYGate(q, -0.002685022672403325, 7);
  sqcRZGate(q, 2.37457453567843, 7);
  sqcRYGate(q, -3.07934161548582, 8);
  sqcRZGate(q, -1.5927765674031296, 8);
  sqcRYGate(q, -2.5643637802349515, 9);
  sqcRZGate(q, -1.5558616449603428, 9);
  sqcRYGate(q, -1.5746789483115773, 10);
  sqcRZGate(q, 0.24533762891895614, 10);
  sqcRYGate(q, 1.5742331049005962, 11);
  sqcRZGate(q, -1.0691414854147068, 11);
  sqcRYGate(q, -0.40699548694128573, 12);
  sqcRZGate(q, 1.5768695154793442, 12);
  sqcRYGate(q, -7.577270760439347e-05, 13);
  sqcRZGate(q, -3.0773913238640254, 13);
  sqcRYGate(q, -0.35865285901697064, 14);
  sqcRZGate(q, -3.1303517805294985, 14);
  sqcRYGate(q, -1.642446551635368, 15);
  sqcRZGate(q, -1.5724373537277012, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.7549196244547842, 0);
  sqcRZGate(q, 2.375625437036351, 0);
  sqcRYGate(q, -2.2767586818540044, 1);
  sqcRZGate(q, -2.3987830725618973, 1);
  sqcRYGate(q, -1.3213989521366072, 2);
  sqcRZGate(q, 3.1148292859727857, 2);
  sqcRYGate(q, 1.894054109098712, 3);
  sqcRZGate(q, -1.7688807124764665, 3);
  sqcRYGate(q, -1.546559348388687, 4);
  sqcRZGate(q, 1.426046810923065, 4);
  sqcRYGate(q, 2.1089822876238915, 5);
  sqcRZGate(q, -1.4470632758382598, 5);
  sqcRYGate(q, -3.0538085383740503, 6);
  sqcRZGate(q, 0.9008943499028472, 6);
  sqcRYGate(q, -3.135409776880423, 7);
  sqcRZGate(q, -2.6953358287325972, 7);
  sqcRYGate(q, 0.0909664857170176, 8);
  sqcRZGate(q, 1.5916612305744486, 8);
  sqcRYGate(q, -1.1429096205160008, 9);
  sqcRZGate(q, -1.5749681150097345, 9);
  sqcRYGate(q, 1.6592330907776385, 10);
  sqcRZGate(q, -1.6770308099771938, 10);
  sqcRYGate(q, 1.7949568047871631, 11);
  sqcRZGate(q, 0.3132394939412873, 11);
  sqcRYGate(q, -2.959465772170123, 12);
  sqcRZGate(q, 1.5783291577947107, 12);
  sqcRYGate(q, -1.0380416701190656, 13);
  sqcRZGate(q, 0.690111867234684, 13);
  sqcRYGate(q, 1.7654922172026708, 14);
  sqcRZGate(q, -1.6105723921502033, 14);
  sqcRYGate(q, 1.562592539880316, 15);
  sqcRZGate(q, -2.8889875520514687, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.4116007437951141, 0);
  sqcRZGate(q, 1.6151037576975529, 0);
  sqcRYGate(q, 3.076995315331283, 1);
  sqcRZGate(q, 0.8576075273548879, 1);
  sqcRYGate(q, -3.13444350891206, 2);
  sqcRZGate(q, -1.5917833799539913, 2);
  sqcRYGate(q, -0.01636071585167773, 3);
  sqcRZGate(q, -2.6137599568146963, 3);
  sqcRYGate(q, -0.009969759082808062, 4);
  sqcRZGate(q, 0.26935138710595025, 4);
  sqcRYGate(q, 0.8355987604376856, 5);
  sqcRZGate(q, 1.8559397032785798, 5);
  sqcRYGate(q, -0.3260472730037857, 6);
  sqcRZGate(q, 2.986961443450344, 6);
  sqcRYGate(q, -3.1319356662762132, 7);
  sqcRZGate(q, 2.9815338164292995, 7);
  sqcRYGate(q, -0.4290336568402689, 8);
  sqcRZGate(q, 0.003923663777528809, 8);
  sqcRYGate(q, -2.090896144484339, 9);
  sqcRZGate(q, 1.7024820525293638, 9);
  sqcRYGate(q, -1.573416114246026, 10);
  sqcRZGate(q, -3.1332302453311884, 10);
  sqcRYGate(q, 3.141456798729685, 11);
  sqcRZGate(q, -2.1556889795373957, 11);
  sqcRYGate(q, -0.05971869913618555, 12);
  sqcRZGate(q, -3.1412858065854143, 12);
  sqcRYGate(q, -3.1414247471071755, 13);
  sqcRZGate(q, -0.8815061559662718, 13);
  sqcRYGate(q, 0.08459990110527715, 14);
  sqcRZGate(q, 2.5497288961951496, 14);
  sqcRYGate(q, 1.5711045411867248, 15);
  sqcRZGate(q, 1.5694073725347393, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.675115588977964, 0);
  sqcRZGate(q, -1.7737841791006534, 0);
  sqcRYGate(q, 2.9953698234953223, 1);
  sqcRZGate(q, 0.9833071539396595, 1);
  sqcRYGate(q, 1.5681705051766368, 2);
  sqcRZGate(q, 1.5432480766512553, 2);
  sqcRYGate(q, 1.7334214583520908, 3);
  sqcRZGate(q, -0.9542504225468765, 3);
  sqcRYGate(q, -0.3879834725337618, 4);
  sqcRZGate(q, -2.272953153928648, 4);
  sqcRYGate(q, -2.1684860548039815, 5);
  sqcRZGate(q, -1.7447916038356466, 5);
  sqcRYGate(q, 2.169851929083741, 6);
  sqcRZGate(q, 0.9953307462768857, 6);
  sqcRYGate(q, 2.1290357439921195, 7);
  sqcRZGate(q, -2.1488058520342994, 7);
  sqcRYGate(q, -0.9768312703106677, 8);
  sqcRZGate(q, 0.9942143822858222, 8);
  sqcRYGate(q, -3.0976981272438784, 9);
  sqcRZGate(q, 1.124797255754836, 9);
  sqcRYGate(q, 2.474569148923701, 10);
  sqcRZGate(q, 0.9928501661366315, 10);
  sqcRYGate(q, 1.5677564064887317, 11);
  sqcRZGate(q, -0.57806450286688, 11);
  sqcRYGate(q, -0.9878738221884611, 12);
  sqcRZGate(q, 0.994710718480814, 12);
  sqcRYGate(q, 1.3058979439465908, 13);
  sqcRZGate(q, 0.9938671868640938, 13);
  sqcRYGate(q, -3.139923641296327, 14);
  sqcRZGate(q, -2.7797689968055046, 14);
  sqcRYGate(q, -1.7454292424085232, 15);
  sqcRZGate(q, -2.154057230172321, 15);

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
