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

  sqcRYGate(q, -1.6662516688455764, 0);
  sqcRZGate(q, 1.3886273692632578, 0);
  sqcRYGate(q, 0.5379335429974853, 1);
  sqcRZGate(q, -0.3473697270413129, 1);
  sqcRYGate(q, 2.0832264020890237, 2);
  sqcRZGate(q, -0.48221496931480345, 2);
  sqcRYGate(q, 0.24051671034206942, 3);
  sqcRZGate(q, -2.7321746674735476, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.493668379157628, 0);
  sqcRZGate(q, 2.759435465594684, 0);
  sqcRYGate(q, 0.4822916467071239, 1);
  sqcRZGate(q, -1.4717599314007765, 1);
  sqcRYGate(q, 0.42689137652615106, 2);
  sqcRZGate(q, -2.440227805175225, 2);
  sqcRYGate(q, 1.3738018255526532, 3);
  sqcRZGate(q, -2.5468476902264476, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2187183149497747, 0);
  sqcRZGate(q, 2.9240836360438465, 0);
  sqcRYGate(q, 2.4051331513628673, 1);
  sqcRZGate(q, -1.2975225490501743, 1);
  sqcRYGate(q, -2.263110032969758, 2);
  sqcRZGate(q, -3.0008269906089455, 2);
  sqcRYGate(q, -0.12832166250442256, 3);
  sqcRZGate(q, -1.4372680333861352, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.681181323224353, 0);
  sqcRZGate(q, 2.7802427527436406, 0);
  sqcRYGate(q, -1.9643423808751548, 1);
  sqcRZGate(q, 2.0986950639547137, 1);
  sqcRYGate(q, 2.741975728843573, 2);
  sqcRZGate(q, -2.7197647082145595, 2);
  sqcRYGate(q, 2.971332571730735, 3);
  sqcRZGate(q, -0.2681241442529239, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4590367142274703, 0);
  sqcRZGate(q, -0.9765264425729425, 0);
  sqcRYGate(q, 1.1442180084217914, 1);
  sqcRZGate(q, 2.1753392436142387, 1);
  sqcRYGate(q, -2.8648874052472286, 2);
  sqcRZGate(q, 1.5402358648563865, 2);
  sqcRYGate(q, -0.5776665146385103, 3);
  sqcRZGate(q, -0.5317587522829167, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.48460329624345827, 0);
  sqcRZGate(q, -3.0411732494678523, 0);
  sqcRYGate(q, 3.103720835396605, 1);
  sqcRZGate(q, 1.196057158911857, 1);
  sqcRYGate(q, 2.837731018303019, 2);
  sqcRZGate(q, -1.425612186222307, 2);
  sqcRYGate(q, 0.07381393011231197, 3);
  sqcRZGate(q, -0.1508038661507269, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3848566619264168, 0);
  sqcRZGate(q, 0.9830366113474635, 0);
  sqcRYGate(q, -1.4937960027292747, 1);
  sqcRZGate(q, 2.8291959393688253, 1);
  sqcRYGate(q, 1.925014781421799, 2);
  sqcRZGate(q, 3.1358569948998447, 2);
  sqcRYGate(q, -2.7168979505430033, 3);
  sqcRZGate(q, -1.0817382362198362, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5326868775549494, 0);
  sqcRZGate(q, 2.439045150621584, 0);
  sqcRYGate(q, 2.7322373712647554, 1);
  sqcRZGate(q, -2.1509214016663183, 1);
  sqcRYGate(q, -2.7768772506212063, 2);
  sqcRZGate(q, -1.1519715646437412, 2);
  sqcRYGate(q, -1.718850869465296, 3);
  sqcRZGate(q, 0.5047034553690697, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7302944669443794, 0);
  sqcRZGate(q, 2.3184283476279166, 0);
  sqcRYGate(q, -2.7094987737720966, 1);
  sqcRZGate(q, 1.1278694459200385, 1);
  sqcRYGate(q, 0.5652174081706818, 2);
  sqcRZGate(q, 0.3175144696837844, 2);
  sqcRYGate(q, -2.292687189760352, 3);
  sqcRZGate(q, 0.9934048399163524, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2599543003400235, 0);
  sqcRZGate(q, -1.3129467691882077, 0);
  sqcRYGate(q, 1.3912684938451116, 1);
  sqcRZGate(q, -2.8765375498527015, 1);
  sqcRYGate(q, 0.5126422639412753, 2);
  sqcRZGate(q, 1.9288426986958234, 2);
  sqcRYGate(q, 1.7871185006469226, 3);
  sqcRZGate(q, 3.0745387055275635, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6145335939299665, 0);
  sqcRZGate(q, -1.9781947916074332, 0);
  sqcRYGate(q, 1.7392642411546648, 1);
  sqcRZGate(q, -0.9292136523787837, 1);
  sqcRYGate(q, 0.892426905172452, 2);
  sqcRZGate(q, 0.4590329139474765, 2);
  sqcRYGate(q, -1.4155526758054782, 3);
  sqcRZGate(q, 1.5512276227128627, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6341272028469405, 0);
  sqcRZGate(q, 1.7664434870903474, 0);
  sqcRYGate(q, -1.6349841894863555, 1);
  sqcRZGate(q, 0.988615207219484, 1);
  sqcRYGate(q, 0.18140550167994307, 2);
  sqcRZGate(q, -1.6037276577220663, 2);
  sqcRYGate(q, -0.9312138113879334, 3);
  sqcRZGate(q, -3.100777128516977, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1049429340430255, 0);
  sqcRZGate(q, -1.6146956374368993, 0);
  sqcRYGate(q, 0.6841128481213801, 1);
  sqcRZGate(q, -1.1402568588402229, 1);
  sqcRYGate(q, 2.4081540515192974, 2);
  sqcRZGate(q, -2.5445601937870332, 2);
  sqcRYGate(q, -3.1102969079915814, 3);
  sqcRZGate(q, 0.25308746741901217, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9001414083670243, 0);
  sqcRZGate(q, 0.031026257843959296, 0);
  sqcRYGate(q, 0.4314202965199945, 1);
  sqcRZGate(q, 2.2429026815706328, 1);
  sqcRYGate(q, -2.915017268929586, 2);
  sqcRZGate(q, 2.6482478386489583, 2);
  sqcRYGate(q, 1.4628869986259723, 3);
  sqcRZGate(q, -0.8729000283143717, 3);

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
