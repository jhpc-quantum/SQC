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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 2.1215582643401008, 0);
  sqcRYGate(q, 2.0463817486908873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.054202226074314, 0);
  sqcRYGate(q, -1.0173692904748128, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7488954362845428, 2);
  sqcRYGate(q, -1.077274168111142, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6927997575276397, 2);
  sqcRYGate(q, -1.4711302653785827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2862141199370458, 4);
  sqcRYGate(q, 2.8939149735854657, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.27015199055435, 4);
  sqcRYGate(q, 0.7347198852011827, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.40706160375614253, 6);
  sqcRYGate(q, -1.4648023847924128, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4889154042819062, 6);
  sqcRYGate(q, 2.7763056947308726, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1077689299826936, 8);
  sqcRYGate(q, -0.21814629851657671, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.008082839746235, 8);
  sqcRYGate(q, -2.7541957667696173, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.701810975623628, 10);
  sqcRYGate(q, -0.2771993757489204, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.236976269547107, 10);
  sqcRYGate(q, 1.2317963009351853, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.2273618122595396, 1);
  sqcRYGate(q, 0.7725260430379226, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.525637993520226, 1);
  sqcRYGate(q, -1.629352054917019, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.640150781873776, 3);
  sqcRYGate(q, -1.0780063334373653, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5772305401158153, 3);
  sqcRYGate(q, -1.5998687376797829, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.44970120998535346, 5);
  sqcRYGate(q, -2.8213895789149044, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0007012936839506369, 5);
  sqcRYGate(q, -1.6218893148918578, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3636650314606662, 7);
  sqcRYGate(q, -1.8811345382375757, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.9307916591567063, 7);
  sqcRYGate(q, 2.0351142911298723, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.6393841334678533, 9);
  sqcRYGate(q, -1.081044697966183, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.5965514680142476, 9);
  sqcRYGate(q, 1.2410230363838022, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.31903551787490514, 0);
  sqcRYGate(q, 1.5422468628514552, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5807048042854968, 0);
  sqcRYGate(q, -0.4903401785089132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2098562874665678, 2);
  sqcRYGate(q, 1.9985601611643102, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4743142813037471, 2);
  sqcRYGate(q, 0.008701636189303308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9691286745600172, 4);
  sqcRYGate(q, -2.190738806309094, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.08780245046231566, 4);
  sqcRYGate(q, 0.0001770578700366343, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5763550049315578, 6);
  sqcRYGate(q, 1.5836334421244453, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4712778626636611, 6);
  sqcRYGate(q, -2.9295825998255083, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.77065987867248, 8);
  sqcRYGate(q, -1.1751186878705697, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.1002306109186297, 8);
  sqcRYGate(q, -1.0370823556037436, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.14620584563124, 10);
  sqcRYGate(q, 0.23615544780075926, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.1186459594120963, 10);
  sqcRYGate(q, 2.599848890720641, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.7771217518543203, 1);
  sqcRYGate(q, -0.7883704099244585, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5694769661604964, 1);
  sqcRYGate(q, -2.2831016401777413, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.535005057309301, 3);
  sqcRYGate(q, 0.5464104681536183, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5818131070071606, 3);
  sqcRYGate(q, 3.137515985130647, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.52344542569508, 5);
  sqcRYGate(q, 0.006693923166558591, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5710163099997487, 5);
  sqcRYGate(q, 1.5689388847307681, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5807029171692628, 7);
  sqcRYGate(q, -1.054033693911581, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.4131769286056235, 7);
  sqcRYGate(q, 2.604154796095245, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.21001329275928, 9);
  sqcRYGate(q, 2.9757985835474563, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7220318584285426, 9);
  sqcRYGate(q, -1.6000025468097654, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9459654867631023, 0);
  sqcRYGate(q, 0.07521576248833561, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.570114314103738, 0);
  sqcRYGate(q, 1.592002184911779, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5823645910178694, 2);
  sqcRYGate(q, -0.038202689690614425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0007001793767562603, 2);
  sqcRYGate(q, 1.0363830166068455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1318547752815746, 4);
  sqcRYGate(q, -0.0532555606507721, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5086022483644848, 4);
  sqcRYGate(q, 1.5708566474953924, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.138244117562455, 6);
  sqcRYGate(q, -3.059870402717411, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.026177593623780915, 6);
  sqcRYGate(q, -1.7872893675876078, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.16161319284568876, 8);
  sqcRYGate(q, 1.524643959947699, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5430132192413166, 8);
  sqcRYGate(q, 1.5747668657954774, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.133519975252207, 10);
  sqcRYGate(q, -2.8207576031609665, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5560107058838974, 10);
  sqcRYGate(q, -1.661957052158816, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5780781084771291, 1);
  sqcRYGate(q, 0.18306384038370993, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5532895784256735, 1);
  sqcRYGate(q, -1.587948338288954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5152344983640136, 3);
  sqcRYGate(q, 1.570820406458598, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6900479898486163, 3);
  sqcRYGate(q, -1.5341145337499662, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.051952547936992666, 5);
  sqcRYGate(q, 0.22980018069238797, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1412799241321196, 5);
  sqcRYGate(q, 0.00041242502337723863, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0524992958129946, 7);
  sqcRYGate(q, 0.41842195887744005, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.01221360447193298, 7);
  sqcRYGate(q, 3.1220931424740237, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4987946565313595, 9);
  sqcRYGate(q, -1.542360163622537, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4698669715216992, 9);
  sqcRYGate(q, -1.6032389103723084, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.2717765166145245, 0);
  sqcRYGate(q, 2.6475425539326403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6159197406879375, 0);
  sqcRYGate(q, 1.1791950071048944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.588409734497681, 2);
  sqcRYGate(q, 1.5698725289161544, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.57103056847955, 2);
  sqcRYGate(q, -0.47149723915271835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.058360363121046, 4);
  sqcRYGate(q, 0.04816683545045567, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0555212632744344, 4);
  sqcRYGate(q, -3.141193566566627, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7996071023408642, 6);
  sqcRYGate(q, -1.5907792032431034, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5693533760345693, 6);
  sqcRYGate(q, 1.568032813894773, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0272607729231737, 8);
  sqcRYGate(q, 2.623500302095323, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.23644847716470174, 8);
  sqcRYGate(q, -1.4103969792453377, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5776984598739014, 10);
  sqcRYGate(q, -1.512044770449279, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.426779602348816, 10);
  sqcRYGate(q, -1.9508386302306162, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.6744318792017476, 1);
  sqcRYGate(q, -0.0014274262037723418, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.989978479641762, 1);
  sqcRYGate(q, 0.000708551175548013, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5707015831398106, 3);
  sqcRYGate(q, -0.49346147278052666, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.00012635075020693925, 3);
  sqcRYGate(q, 1.5337884608834358, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4691806795326283, 5);
  sqcRYGate(q, 0.6788574182509457, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0022584155389369087, 5);
  sqcRYGate(q, -2.9776227250286937, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.027169394757894594, 7);
  sqcRYGate(q, 1.096436477078707, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5719042982888862, 7);
  sqcRYGate(q, 2.680961662003632, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.47010833945493236, 9);
  sqcRYGate(q, 1.5151935252188018, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5435211526594337, 9);
  sqcRYGate(q, 0.13276510087939944, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.4520071260698675, 0);
  sqcRYGate(q, 2.669639094390109, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6211130706432897, 0);
  sqcRYGate(q, -0.4938658694213014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5960040356957315, 2);
  sqcRYGate(q, 2.476136130655676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.141529464735745, 2);
  sqcRYGate(q, 0.3242467528724289, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.982069519187123, 4);
  sqcRYGate(q, -2.8635085735112953, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.133634492103615, 4);
  sqcRYGate(q, -1.5697931629655766, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.109416766742659, 6);
  sqcRYGate(q, -1.5708486912561634, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5707284366243053, 6);
  sqcRYGate(q, 1.570693733663684, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5706612300633473, 8);
  sqcRYGate(q, 2.9927461789532686, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5709803671090805, 8);
  sqcRYGate(q, 1.5717603880885882, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.123339775767527, 10);
  sqcRYGate(q, -0.6630775119887993, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.106858137101243, 10);
  sqcRYGate(q, 1.5506547330405627, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.0014416562946427103, 1);
  sqcRYGate(q, 0.026570828862113042, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5701141898324726, 1);
  sqcRYGate(q, -1.5706464120366819, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6645996608395492, 3);
  sqcRYGate(q, 3.1114813825747785, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0005008477855726487, 3);
  sqcRYGate(q, 1.5672844962430832, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.16816318782532047, 5);
  sqcRYGate(q, -1.481388203531833, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.141193155087449, 5);
  sqcRYGate(q, -0.00014067552210850212, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.917821648254364, 7);
  sqcRYGate(q, 0.9520608976747695, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5722398048367836e-05, 7);
  sqcRYGate(q, 0.00024355180964441558, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.141204459060284, 9);
  sqcRYGate(q, 2.7925770994220693, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5707913068682777, 9);
  sqcRYGate(q, -1.5708045984798042, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.1879372308043883, 0);
  sqcRYGate(q, -1.5732439509466651, 1);
  sqcRYGate(q, -0.00736335127490057, 2);
  sqcRYGate(q, 1.570606815054881, 3);
  sqcRYGate(q, 1.6009565819673999, 4);
  sqcRYGate(q, -1.4619542923758644, 5);
  sqcRYGate(q, 0.0896887807795723, 6);
  sqcRYGate(q, 2.226032985055806, 7);
  sqcRYGate(q, -2.522718644768925, 8);
  sqcRYGate(q, 1.5730420418828626, 9);
  sqcRYGate(q, 3.1415339407027143, 10);
  sqcRYGate(q, -0.11025801898607666, 11);

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
