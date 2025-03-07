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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -3.1248422495536885, 0);
  sqcRZGate(q, 1.8155048016798734, 0);
  sqcRYGate(q, 0.004892335086504194, 1);
  sqcRZGate(q, 0.4292931018684829, 1);
  sqcRYGate(q, 2.998132314932837, 2);
  sqcRZGate(q, -2.5984967310099285, 2);
  sqcRYGate(q, -0.5214316568865224, 3);
  sqcRZGate(q, -2.100355108644518, 3);
  sqcRYGate(q, -3.089716918862892, 4);
  sqcRZGate(q, 2.7900095321443725, 4);
  sqcRYGate(q, 1.1655538418068674, 5);
  sqcRZGate(q, 2.6487373854447758, 5);
  sqcRYGate(q, -0.06414835290456877, 6);
  sqcRZGate(q, -2.433428941925996, 6);
  sqcRYGate(q, -2.9437588396548025, 7);
  sqcRZGate(q, 0.8471182765476746, 7);
  sqcRYGate(q, -3.1406870485542666, 8);
  sqcRZGate(q, -2.5756820298117065, 8);
  sqcRYGate(q, 2.9884489292151737, 9);
  sqcRZGate(q, 2.7074058518137623, 9);
  sqcRYGate(q, 2.3212150787988337, 10);
  sqcRZGate(q, 2.4093749902349266, 10);
  sqcRYGate(q, -0.9400306487746928, 11);
  sqcRZGate(q, -3.1102393870617675, 11);
  sqcRYGate(q, 1.734964495834965, 12);
  sqcRZGate(q, -1.7279773555736337, 12);
  sqcRYGate(q, 1.9193664166211821, 13);
  sqcRZGate(q, -1.3641762147232377, 13);
  sqcRYGate(q, 0.010266964044818751, 14);
  sqcRZGate(q, 0.5352283305016217, 14);
  sqcRYGate(q, -3.140938358231879, 15);
  sqcRZGate(q, -1.9506730586815195, 15);
  sqcRYGate(q, 0.6211207252812443, 16);
  sqcRZGate(q, -0.14521526696706566, 16);
  sqcRYGate(q, -0.19473887214699828, 17);
  sqcRZGate(q, 2.9322659878285613, 17);
  sqcRYGate(q, 3.1151498989453104, 18);
  sqcRZGate(q, -2.24183477849492, 18);
  sqcRYGate(q, 2.6232299239000234, 19);
  sqcRZGate(q, 2.9915568752470176, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.4748219592543517, 0);
  sqcRZGate(q, 0.22158880115113505, 0);
  sqcRYGate(q, -3.127904453877714, 1);
  sqcRZGate(q, -0.0787294469398372, 1);
  sqcRYGate(q, -2.932191485490837, 2);
  sqcRZGate(q, 2.907214059915812, 2);
  sqcRYGate(q, -1.6118407732381757, 3);
  sqcRZGate(q, 2.9385842055946148, 3);
  sqcRYGate(q, 1.5408292055512192, 4);
  sqcRZGate(q, -1.5335369515545372, 4);
  sqcRYGate(q, 1.6813114082995755, 5);
  sqcRZGate(q, 2.3544821907556566, 5);
  sqcRYGate(q, 0.04883186875428463, 6);
  sqcRZGate(q, 0.31459629211639883, 6);
  sqcRYGate(q, 1.5823433350478964, 7);
  sqcRZGate(q, -2.990881067242628, 7);
  sqcRYGate(q, 1.5696867462534692, 8);
  sqcRZGate(q, -1.568340111976931, 8);
  sqcRYGate(q, -1.0516857515942404, 9);
  sqcRZGate(q, 2.780492238092745, 9);
  sqcRYGate(q, 0.06430857987921978, 10);
  sqcRZGate(q, -1.9015712992283689, 10);
  sqcRYGate(q, 1.4370610115461908, 11);
  sqcRZGate(q, 3.0795195630897236, 11);
  sqcRYGate(q, 1.317549382738406, 12);
  sqcRZGate(q, -2.6344362950510183, 12);
  sqcRYGate(q, -1.0783440778980253, 13);
  sqcRZGate(q, -3.12008716449905, 13);
  sqcRYGate(q, -0.7311984989961536, 14);
  sqcRZGate(q, 0.6121147917712494, 14);
  sqcRYGate(q, -0.003761063787741706, 15);
  sqcRZGate(q, 2.8687925126534988, 15);
  sqcRYGate(q, -2.4704103110547755, 16);
  sqcRZGate(q, -2.223479772064974, 16);
  sqcRYGate(q, -0.22689554577124757, 17);
  sqcRZGate(q, 1.6543943740309175, 17);
  sqcRYGate(q, -3.125444372558627, 18);
  sqcRZGate(q, 1.786209065295993, 18);
  sqcRYGate(q, 0.498322509446969, 19);
  sqcRZGate(q, -1.5753138017325323, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -3.13047248509555, 0);
  sqcRZGate(q, -1.6687987531827113, 0);
  sqcRYGate(q, 0.005168892044907284, 1);
  sqcRZGate(q, 0.7504867984070858, 1);
  sqcRYGate(q, 3.1414570824507675, 2);
  sqcRZGate(q, 1.2244526118681098, 2);
  sqcRYGate(q, -1.6269763721239183, 3);
  sqcRZGate(q, 2.8753204269749797, 3);
  sqcRYGate(q, -0.16249555113127914, 4);
  sqcRZGate(q, 1.5397826030140767, 4);
  sqcRYGate(q, -1.567541609601217, 5);
  sqcRZGate(q, 2.7084900937644227, 5);
  sqcRYGate(q, -5.651559777675175e-05, 6);
  sqcRZGate(q, 0.1261531276249537, 6);
  sqcRYGate(q, -3.1384309315548364, 7);
  sqcRZGate(q, 0.8424250595051295, 7);
  sqcRYGate(q, -1.4873514704149358, 8);
  sqcRZGate(q, -3.1383699160349963, 8);
  sqcRYGate(q, 3.1413174847073098, 9);
  sqcRZGate(q, 1.6850220134071208, 9);
  sqcRYGate(q, -0.0008315336017874487, 10);
  sqcRZGate(q, 1.1131909149653498, 10);
  sqcRYGate(q, -3.075988249102637, 11);
  sqcRZGate(q, -2.826878364183671, 11);
  sqcRYGate(q, 0.34230649954779063, 12);
  sqcRZGate(q, 2.0950853055910095, 12);
  sqcRYGate(q, -2.357406034312765, 13);
  sqcRZGate(q, 1.575420428212663, 13);
  sqcRYGate(q, -0.061132936298452546, 14);
  sqcRZGate(q, 1.149944458944756, 14);
  sqcRYGate(q, -0.0016115873131825609, 15);
  sqcRZGate(q, -3.1234743543157926, 15);
  sqcRYGate(q, -1.5775620404763018, 16);
  sqcRZGate(q, 1.6701846432029142, 16);
  sqcRYGate(q, 2.213378868190082, 17);
  sqcRZGate(q, -0.3871690787873803, 17);
  sqcRYGate(q, -0.05431817991501656, 18);
  sqcRZGate(q, 1.7444661149086254, 18);
  sqcRYGate(q, -0.1277737838601901, 19);
  sqcRZGate(q, -3.0267885402067973, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.2745246770220051, 0);
  sqcRZGate(q, 0.3474178248664753, 0);
  sqcRYGate(q, -2.435193701800986, 1);
  sqcRZGate(q, 0.3645899459081692, 1);
  sqcRYGate(q, 0.03957504741791151, 2);
  sqcRZGate(q, -1.9529819959469163, 2);
  sqcRYGate(q, 1.5760188683067184, 3);
  sqcRZGate(q, 0.7318497920539704, 3);
  sqcRYGate(q, -1.5341273962884303, 4);
  sqcRZGate(q, 2.1545693091249714, 4);
  sqcRYGate(q, -1.3587737434156493, 5);
  sqcRZGate(q, -1.31887395942133, 5);
  sqcRYGate(q, 1.151678655172601, 6);
  sqcRZGate(q, 1.5458266944414376, 6);
  sqcRYGate(q, -1.7336551823264919, 7);
  sqcRZGate(q, 2.876384582136234, 7);
  sqcRYGate(q, 1.731976677140052, 8);
  sqcRZGate(q, 0.059240660135285055, 8);
  sqcRYGate(q, -0.6659082429933075, 9);
  sqcRZGate(q, -2.829271995431006, 9);
  sqcRYGate(q, -0.012646864226784654, 10);
  sqcRZGate(q, 0.23034911894355758, 10);
  sqcRYGate(q, -1.3799883229615755, 11);
  sqcRZGate(q, -1.8694738686311074, 11);
  sqcRYGate(q, 1.0507059169875719, 12);
  sqcRZGate(q, 0.5074255067407354, 12);
  sqcRYGate(q, -1.835945605560447, 13);
  sqcRZGate(q, -2.5443837785249617, 13);
  sqcRYGate(q, -1.5691155066987037, 14);
  sqcRZGate(q, 2.7607018163419923, 14);
  sqcRYGate(q, 1.5384885032371338, 15);
  sqcRZGate(q, 1.6982565061854062, 15);
  sqcRYGate(q, -1.989092624110562, 16);
  sqcRZGate(q, 0.7085372698452589, 16);
  sqcRYGate(q, 1.5888615585543093, 17);
  sqcRZGate(q, 1.6291532300984173, 17);
  sqcRYGate(q, -0.0035629154830444727, 18);
  sqcRZGate(q, -1.1878474994834312, 18);
  sqcRYGate(q, 0.0924066740126072, 19);
  sqcRZGate(q, 2.8126403617114324, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.7260407203792218, 0);
  sqcRZGate(q, -1.4152523184513102, 0);
  sqcRYGate(q, 1.1973074358224354, 1);
  sqcRZGate(q, -3.140426242023236, 1);
  sqcRYGate(q, 0.0022901997829913867, 2);
  sqcRZGate(q, -1.0507710138174804, 2);
  sqcRYGate(q, -3.117014754911575, 3);
  sqcRZGate(q, 1.0290609788611822, 3);
  sqcRYGate(q, 2.065863080485324, 4);
  sqcRZGate(q, -2.611519407448722, 4);
  sqcRYGate(q, 3.07869181805795, 5);
  sqcRZGate(q, -1.426858571811747, 5);
  sqcRYGate(q, -1.5805903086244841, 6);
  sqcRZGate(q, 3.073752958483461, 6);
  sqcRYGate(q, 0.004050756904953267, 7);
  sqcRZGate(q, -0.18003497407605007, 7);
  sqcRYGate(q, 0.1209784154185769, 8);
  sqcRZGate(q, -1.6852172281674191, 8);
  sqcRYGate(q, -3.1415033853168945, 9);
  sqcRZGate(q, -1.1779092230240895, 9);
  sqcRYGate(q, 0.0012891890532071236, 10);
  sqcRZGate(q, -2.9930862506244025, 10);
  sqcRYGate(q, -0.008077959582107356, 11);
  sqcRZGate(q, -0.5113430605552107, 11);
  sqcRYGate(q, 1.562076549112133, 12);
  sqcRZGate(q, 1.8285020790374678, 12);
  sqcRYGate(q, -0.004470830893702703, 13);
  sqcRZGate(q, 1.8888523293671118, 13);
  sqcRYGate(q, 0.006825791506227304, 14);
  sqcRZGate(q, -2.2930982242677853, 14);
  sqcRYGate(q, 0.10501998566260617, 15);
  sqcRZGate(q, 2.4593746153090783, 15);
  sqcRYGate(q, -3.0814179979603997, 16);
  sqcRZGate(q, 2.133148955998914, 16);
  sqcRYGate(q, -1.5702867013828241, 17);
  sqcRZGate(q, 0.13627383592293382, 17);
  sqcRYGate(q, 1.1072382594411467, 18);
  sqcRZGate(q, 0.3374577897588601, 18);
  sqcRYGate(q, 2.9161431786529293, 19);
  sqcRZGate(q, -2.9430847097340944, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 3.1271388133041325, 0);
  sqcRZGate(q, 0.20124990687976113, 0);
  sqcRYGate(q, -2.8460228827587795, 1);
  sqcRZGate(q, 0.001798322656153353, 1);
  sqcRYGate(q, -2.1442378762669767, 2);
  sqcRZGate(q, -1.6063716987413175, 2);
  sqcRYGate(q, -3.1357615117578317, 3);
  sqcRZGate(q, -2.8977941087319796, 3);
  sqcRYGate(q, -1.5711887247893985, 4);
  sqcRZGate(q, 0.1457139244633563, 4);
  sqcRYGate(q, -1.5352475077487684, 5);
  sqcRZGate(q, 1.9540120410921755, 5);
  sqcRYGate(q, -0.12430944948908174, 6);
  sqcRZGate(q, -1.5037293726276904, 6);
  sqcRYGate(q, 1.5724793316177657, 7);
  sqcRZGate(q, -1.8217461082877673, 7);
  sqcRYGate(q, -0.024337494958302515, 8);
  sqcRZGate(q, -1.484336986056059, 8);
  sqcRYGate(q, 2.797675005800204, 9);
  sqcRZGate(q, -1.7756276338129862, 9);
  sqcRYGate(q, -0.00048030591778294094, 10);
  sqcRZGate(q, -1.2183770160381284, 10);
  sqcRYGate(q, -2.55571273815819, 11);
  sqcRZGate(q, 0.40537825862545146, 11);
  sqcRYGate(q, -0.0025148955419506, 12);
  sqcRZGate(q, -1.8251005278347527, 12);
  sqcRYGate(q, 1.5495562878434412, 13);
  sqcRZGate(q, -1.5908694882200793, 13);
  sqcRYGate(q, -3.1296945599573536, 14);
  sqcRZGate(q, 0.551895622640882, 14);
  sqcRYGate(q, 1.5514897766753437, 15);
  sqcRZGate(q, -1.6040082405035871, 15);
  sqcRYGate(q, -0.15742598223244286, 16);
  sqcRZGate(q, 1.2106467996771375, 16);
  sqcRYGate(q, 2.9090900103811297, 17);
  sqcRZGate(q, -1.584704672176941, 17);
  sqcRYGate(q, -3.13177967225706, 18);
  sqcRZGate(q, -0.47204815378869885, 18);
  sqcRYGate(q, 0.2546445240743669, 19);
  sqcRZGate(q, -1.390301299680445, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.0008092669236106075, 0);
  sqcRZGate(q, -1.874078821040221, 0);
  sqcRYGate(q, 1.1976443542979283, 1);
  sqcRZGate(q, 1.858275692584618, 1);
  sqcRYGate(q, 0.20602667384767678, 2);
  sqcRZGate(q, 1.665480721949697, 2);
  sqcRYGate(q, 2.6581922110808534, 3);
  sqcRZGate(q, -1.5072057182193839, 3);
  sqcRYGate(q, -3.138646327543789, 4);
  sqcRZGate(q, 0.14559803070752042, 4);
  sqcRYGate(q, -0.7524999355066765, 5);
  sqcRZGate(q, 1.8508949863397888, 5);
  sqcRYGate(q, 0.09795684713394855, 6);
  sqcRZGate(q, 0.6224218964701534, 6);
  sqcRYGate(q, 0.000690846082731511, 7);
  sqcRZGate(q, -2.8932331247646914, 7);
  sqcRYGate(q, -0.10214038888501253, 8);
  sqcRZGate(q, -0.06579394712009547, 8);
  sqcRYGate(q, -0.09556764941217549, 9);
  sqcRZGate(q, 1.5887575051866651, 9);
  sqcRYGate(q, -3.1414311374490045, 10);
  sqcRZGate(q, -2.594609295275003, 10);
  sqcRYGate(q, 1.564893081904308, 11);
  sqcRZGate(q, 2.9034522490215555, 11);
  sqcRYGate(q, -1.816357487831814, 12);
  sqcRZGate(q, 3.049853526296568, 12);
  sqcRYGate(q, -0.05607365838749955, 13);
  sqcRZGate(q, -1.5561048113825011, 13);
  sqcRYGate(q, -3.1005170658802466, 14);
  sqcRZGate(q, 0.33792198705920584, 14);
  sqcRYGate(q, -3.0523862996253444, 15);
  sqcRZGate(q, -0.8043493750651747, 15);
  sqcRYGate(q, -0.10253957891274813, 16);
  sqcRZGate(q, -1.0096419905933587, 16);
  sqcRYGate(q, -1.6060947670311627, 17);
  sqcRZGate(q, 2.003333535580212, 17);
  sqcRYGate(q, -2.1493421064795863, 18);
  sqcRZGate(q, 3.009159557163037, 18);
  sqcRYGate(q, 3.060519363276351, 19);
  sqcRZGate(q, 2.38533321532175, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 3.114387775290579, 0);
  sqcRZGate(q, 2.8814915611262126, 0);
  sqcRYGate(q, 2.7050701584172514, 1);
  sqcRZGate(q, -0.33076956773869437, 1);
  sqcRYGate(q, 0.7200670588633056, 2);
  sqcRZGate(q, -1.877590126437674, 2);
  sqcRYGate(q, -1.6078780840404592, 3);
  sqcRZGate(q, 2.298074177188661, 3);
  sqcRYGate(q, -1.5706352869233742, 4);
  sqcRZGate(q, 1.2365537615164843, 4);
  sqcRYGate(q, -2.7469841486744584, 5);
  sqcRZGate(q, 1.735957719295933, 5);
  sqcRYGate(q, 2.1208514954703963, 6);
  sqcRZGate(q, -1.1855200254574214, 6);
  sqcRYGate(q, 0.2673795060742412, 7);
  sqcRZGate(q, 0.4920786210935555, 7);
  sqcRYGate(q, 1.3634516006046384, 8);
  sqcRZGate(q, 1.9707130575325396, 8);
  sqcRYGate(q, 1.574067131473907, 9);
  sqcRZGate(q, 1.544125242692962, 9);
  sqcRYGate(q, -1.5573686628800738, 10);
  sqcRZGate(q, -1.6243775617552139, 10);
  sqcRYGate(q, 3.019525174061599, 11);
  sqcRZGate(q, -1.8139540120290534, 11);
  sqcRYGate(q, -3.0713413569326504, 12);
  sqcRZGate(q, 0.3644077189388997, 12);
  sqcRYGate(q, 3.0234165545751366, 13);
  sqcRZGate(q, -1.5604413167333568, 13);
  sqcRYGate(q, 2.7881360054413977, 14);
  sqcRZGate(q, 0.34449867669632694, 14);
  sqcRYGate(q, 3.1149340089417987, 15);
  sqcRZGate(q, -1.4521360112192827, 15);
  sqcRYGate(q, 3.0848554364664023, 16);
  sqcRZGate(q, 1.7797327490821868, 16);
  sqcRYGate(q, -0.561666718648107, 17);
  sqcRZGate(q, 1.656932788483845, 17);
  sqcRYGate(q, -0.012425508331724622, 18);
  sqcRZGate(q, -2.9306289051669414, 18);
  sqcRYGate(q, -0.996967450824855, 19);
  sqcRZGate(q, 0.7770948440227716, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.3629823965980679, 0);
  sqcRZGate(q, 6.1176040357935335e-06, 0);
  sqcRYGate(q, -3.141324697476888, 1);
  sqcRZGate(q, 1.31178836193902, 1);
  sqcRYGate(q, 3.1399936039583465, 2);
  sqcRZGate(q, 0.08544099227973943, 2);
  sqcRYGate(q, -3.123063469139143, 3);
  sqcRZGate(q, 0.7348594805370977, 3);
  sqcRYGate(q, -3.1405679406306195, 4);
  sqcRZGate(q, -0.26982934662484437, 4);
  sqcRYGate(q, 1.565829980528646, 5);
  sqcRZGate(q, 1.5105516983552458, 5);
  sqcRYGate(q, 3.140986922189227, 6);
  sqcRZGate(q, -3.1119899854222894, 6);
  sqcRYGate(q, -3.1330718175248626, 7);
  sqcRZGate(q, 2.068879109779709, 7);
  sqcRYGate(q, -0.005103905709994194, 8);
  sqcRZGate(q, 1.3165696772560604, 8);
  sqcRYGate(q, 3.0866256965689374, 9);
  sqcRZGate(q, -1.2464761899538654, 9);
  sqcRYGate(q, 3.1380746921101808, 10);
  sqcRZGate(q, -3.0142043340926348, 10);
  sqcRYGate(q, 1.569774135989111, 11);
  sqcRZGate(q, 1.7320031717956619, 11);
  sqcRYGate(q, -3.131089728333913, 12);
  sqcRZGate(q, 0.42687683058852954, 12);
  sqcRYGate(q, -0.0702717014734488, 13);
  sqcRZGate(q, 3.133455962978409, 13);
  sqcRYGate(q, 0.04133911168564084, 14);
  sqcRZGate(q, 2.690346502699851, 14);
  sqcRYGate(q, 3.1400150401229063, 15);
  sqcRZGate(q, 2.4900746173497477, 15);
  sqcRYGate(q, 3.009939715981439, 16);
  sqcRZGate(q, 1.1922321513084677, 16);
  sqcRYGate(q, 0.45491338128001035, 17);
  sqcRZGate(q, -0.3750321359416553, 17);
  sqcRYGate(q, 2.586318456618863, 18);
  sqcRZGate(q, -1.8075730684433724, 18);
  sqcRYGate(q, -1.4591061966977432, 19);
  sqcRZGate(q, -0.1551249475275984, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.564382862782935, 0);
  sqcRZGate(q, -1.5746578309681303, 0);
  sqcRYGate(q, 0.9366902211034853, 1);
  sqcRZGate(q, 3.0571012215125295, 1);
  sqcRYGate(q, -1.9472411412938655, 2);
  sqcRZGate(q, -3.0403162458424466, 2);
  sqcRYGate(q, 1.5718778552521675, 3);
  sqcRZGate(q, -1.172668488003941, 3);
  sqcRYGate(q, 1.5741835177980188, 4);
  sqcRZGate(q, 3.1340517853927676, 4);
  sqcRYGate(q, 2.3773575448791107, 5);
  sqcRZGate(q, 3.0573342640824435, 5);
  sqcRYGate(q, -0.21516169906001703, 6);
  sqcRZGate(q, -2.964687360748533, 6);
  sqcRYGate(q, 2.9871316685325917, 7);
  sqcRZGate(q, 0.10988709128852304, 7);
  sqcRYGate(q, 1.7801457408427155, 8);
  sqcRZGate(q, -0.07496336530083875, 8);
  sqcRYGate(q, -3.1377809804631127, 9);
  sqcRZGate(q, -1.1528780643358207, 9);
  sqcRYGate(q, 1.5737739946940916, 10);
  sqcRZGate(q, -0.03777386235885771, 10);
  sqcRYGate(q, 1.7758171723406493, 11);
  sqcRZGate(q, -0.0346390008610136, 11);
  sqcRYGate(q, 2.2208523970676444, 12);
  sqcRZGate(q, -0.14372796841005764, 12);
  sqcRYGate(q, 2.9110322288235806, 13);
  sqcRZGate(q, 1.4589157464414972, 13);
  sqcRYGate(q, -2.7926223111380644, 14);
  sqcRZGate(q, -1.9033756325221907, 14);
  sqcRYGate(q, 1.1743805570019503, 15);
  sqcRZGate(q, -0.39304578176901644, 15);
  sqcRYGate(q, -3.1252360702719155, 16);
  sqcRZGate(q, 2.7500831681760216, 16);
  sqcRYGate(q, -1.991539157630971, 17);
  sqcRZGate(q, -0.06927201796902377, 17);
  sqcRYGate(q, 1.5696177371849922, 18);
  sqcRZGate(q, 0.0018955246680200158, 18);
  sqcRYGate(q, 2.381040345995588, 19);
  sqcRZGate(q, 2.33607918798459, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.5684476613613798, 0);
  sqcRZGate(q, -0.8585328058864513, 0);
  sqcRYGate(q, 2.8965627198243236, 1);
  sqcRZGate(q, -0.04176068779744924, 1);
  sqcRYGate(q, -3.116813354189506, 2);
  sqcRZGate(q, -0.27984576356901786, 2);
  sqcRYGate(q, 0.00609546124185112, 3);
  sqcRZGate(q, 2.745730213173255, 3);
  sqcRYGate(q, 0.01729863616185341, 4);
  sqcRZGate(q, 0.9434111109741518, 4);
  sqcRYGate(q, -1.5714423420217676, 5);
  sqcRZGate(q, 0.0009523887240190376, 5);
  sqcRYGate(q, -3.1415654923972958, 6);
  sqcRZGate(q, 2.1187027096034488, 6);
  sqcRYGate(q, -0.0077023435824328254, 7);
  sqcRZGate(q, -0.09861895191344595, 7);
  sqcRYGate(q, -0.003619149625827188, 8);
  sqcRZGate(q, -3.0741421300076994, 8);
  sqcRYGate(q, 3.0880828054139893, 9);
  sqcRZGate(q, -3.080768861993854, 9);
  sqcRYGate(q, 3.116821838384305, 10);
  sqcRZGate(q, -0.04699249101128622, 10);
  sqcRYGate(q, 1.5418425464807872, 11);
  sqcRZGate(q, -3.1387559085040615, 11);
  sqcRYGate(q, -0.001551082100045861, 12);
  sqcRZGate(q, -1.4395988888452165, 12);
  sqcRYGate(q, 3.134019253777472, 13);
  sqcRZGate(q, -0.11350909763402715, 13);
  sqcRYGate(q, 0.0916057706465882, 14);
  sqcRZGate(q, -0.005136498121159683, 14);
  sqcRYGate(q, -3.1315646480386756, 15);
  sqcRZGate(q, 1.1802411417156922, 15);
  sqcRYGate(q, -0.05023113997078443, 16);
  sqcRZGate(q, -1.6007157030588566, 16);
  sqcRYGate(q, 2.4076304981964842, 17);
  sqcRZGate(q, -0.010068185603468536, 17);
  sqcRYGate(q, -2.0330974594052593, 18);
  sqcRZGate(q, -1.550476251105586, 18);
  sqcRYGate(q, -1.5639589858564902, 19);
  sqcRZGate(q, -1.5725183295305392, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -3.1390432822123757, 0);
  sqcRZGate(q, -2.4765409640334606, 0);
  sqcRYGate(q, -0.005814502515525522, 1);
  sqcRZGate(q, 1.8691939109878462, 1);
  sqcRYGate(q, 0.0032471184558259644, 2);
  sqcRZGate(q, -1.1534300400248554, 2);
  sqcRYGate(q, 1.567850845132627, 3);
  sqcRZGate(q, -1.3218602532703638, 3);
  sqcRYGate(q, -3.138186493107646, 4);
  sqcRZGate(q, 2.7777930687606966, 4);
  sqcRYGate(q, 2.378671179240616, 5);
  sqcRZGate(q, -1.3059164135263257, 5);
  sqcRYGate(q, 2.4248221558252925, 6);
  sqcRZGate(q, 2.170894556799146, 6);
  sqcRYGate(q, -1.572161007661169, 7);
  sqcRZGate(q, -2.9125418148940447, 7);
  sqcRYGate(q, 1.5729513559365371, 8);
  sqcRZGate(q, 0.411444696079104, 8);
  sqcRYGate(q, 1.567048611687052, 9);
  sqcRZGate(q, 0.24265439572056352, 9);
  sqcRYGate(q, -1.5584532291713193, 10);
  sqcRZGate(q, -2.8915695592250725, 10);
  sqcRYGate(q, 1.3756203552549635, 11);
  sqcRZGate(q, -3.0263064254128698, 11);
  sqcRYGate(q, -1.5976729984374076, 12);
  sqcRZGate(q, -2.9221749014304166, 12);
  sqcRYGate(q, -1.5723563587627156, 13);
  sqcRZGate(q, -1.3091861031576313, 13);
  sqcRYGate(q, -1.591344995344322, 14);
  sqcRZGate(q, -0.06156925097940388, 14);
  sqcRYGate(q, 1.5574909554485856, 15);
  sqcRZGate(q, -1.4814142171573803, 15);
  sqcRYGate(q, 1.5587400753955167, 16);
  sqcRZGate(q, -1.1922532714636016, 16);
  sqcRYGate(q, 0.014705462333674646, 17);
  sqcRZGate(q, 0.6643084058545305, 17);
  sqcRYGate(q, 1.567384148296144, 18);
  sqcRZGate(q, 2.189746419668923, 18);
  sqcRYGate(q, 1.5722562374223559, 19);
  sqcRZGate(q, -0.4869263108561607, 19);

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
