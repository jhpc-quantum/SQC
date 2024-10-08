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

  sqcRYGate(q, 1.7787450624847143, 0);
  sqcRYGate(q, -1.3383670279583382, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8187269557866372, 0);
  sqcRYGate(q, 2.301671404183353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15354811922061656, 1);
  sqcRYGate(q, 0.400223531100818, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.894055857316558, 1);
  sqcRYGate(q, 1.4175557464932138, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4794835800097916, 2);
  sqcRYGate(q, -1.4812184614551651, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4381080666254022, 2);
  sqcRYGate(q, -3.0217251632235502, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8575642846947749, 3);
  sqcRYGate(q, -2.0982977613519047, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9956698461622984, 3);
  sqcRYGate(q, 1.5644254571092175, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5479199780447992, 4);
  sqcRYGate(q, 1.5661177798456238, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.44748552374691, 4);
  sqcRYGate(q, 0.005297216859389664, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.035793505567344, 5);
  sqcRYGate(q, 1.939876502363744, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.642696343706625, 5);
  sqcRYGate(q, -1.5842477522044547, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.655638302565673, 6);
  sqcRYGate(q, 0.7052938372682768, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5434387148261761, 6);
  sqcRYGate(q, 0.1851876566426621, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0393041979769917, 0);
  sqcRYGate(q, -2.7073900456366435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4614578356480712, 0);
  sqcRYGate(q, -2.098103572047604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12122287629529538, 1);
  sqcRYGate(q, 0.02887866182424162, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8359048932278278, 1);
  sqcRYGate(q, -2.4817773964255276, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8220454559433596, 2);
  sqcRYGate(q, -2.5735246285005853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0037849850161624232, 2);
  sqcRYGate(q, 0.0011246522633632239, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.620244028605022, 3);
  sqcRYGate(q, 3.027274790223109, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1839383944715612, 3);
  sqcRYGate(q, -1.5131141187902273, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4046751297270488, 4);
  sqcRYGate(q, -0.5155684940001201, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8664238545960472, 4);
  sqcRYGate(q, -1.9043064321397833, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.05477693747181884, 5);
  sqcRYGate(q, 0.9580647713167965, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1371814588390907, 5);
  sqcRYGate(q, 0.05291093228363852, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6332719468170397, 6);
  sqcRYGate(q, 2.477703949095654, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9506721064440256, 6);
  sqcRYGate(q, 1.2071647992881926, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7147036682536445, 0);
  sqcRYGate(q, -2.123120563028322, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0505248359571049, 0);
  sqcRYGate(q, 0.880409722772237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.02177336055553436, 1);
  sqcRYGate(q, 1.462554336876294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.103166793927392, 1);
  sqcRYGate(q, -0.19975292725737503, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2597745525620638, 2);
  sqcRYGate(q, -2.267053500566133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5173580050087596, 2);
  sqcRYGate(q, 3.110006906275241, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5781346689139149, 3);
  sqcRYGate(q, -0.23169816240613716, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6176262923741291, 3);
  sqcRYGate(q, -0.027658998928772327, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.581761224366503, 4);
  sqcRYGate(q, -2.706896059567339, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5603828485153102, 4);
  sqcRYGate(q, -1.3209636999039944, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4770162967996707, 5);
  sqcRYGate(q, -0.1994141685477078, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5212960700752731, 5);
  sqcRYGate(q, 0.02471201506640479, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5627589684612873, 6);
  sqcRYGate(q, 2.716720569246891, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5785583434077823, 6);
  sqcRYGate(q, 1.7159596960317893, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1487949738520613, 0);
  sqcRYGate(q, -1.3144696621239518, 1);
  sqcRYGate(q, -1.1068977940549007, 2);
  sqcRYGate(q, 3.0232246068292103, 3);
  sqcRYGate(q, 2.992668045185802, 4);
  sqcRYGate(q, -0.10967541931653546, 5);
  sqcRYGate(q, -0.1524632043571792, 6);
  sqcRYGate(q, -0.1559942775388053, 7);

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
