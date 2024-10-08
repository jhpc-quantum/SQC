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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.02960341859480016, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.056041865928093994, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.04601195940283147, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.013323100278339044, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.04325442965352418, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.08179005265870858, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.05867014989140725, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.013877634932471553, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.9767119216012408, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.7884293433724573, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.4503108662002806, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 1.091985703481537, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 1.6061517932850913, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.39325412812498006, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.12044258580417276, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.25223734047402124, 0);
  sqcRZGate(q, -0.5562397536099614, 1);
  sqcRZGate(q, -0.8770159987207823, 2);
  sqcRZGate(q, -1.6923290710310832, 3);
  sqcRZGate(q, -0.40817210265520076, 4);
  sqcRZGate(q, -0.7979345102945358, 5);
  sqcRZGate(q, 0.3530254284004601, 6);
  sqcRZGate(q, -0.1479739620120578, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3119206474842296, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.6867932699433289, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.004038824320652659, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.3079553426930704, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.0031777045321800977, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.20220172507003903, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.3333016998382234, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.08349718827928775, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.612096743874186, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.9097644905254679, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.868959360500854, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.5212554539510231, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.608732872957028, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.14499097789293836, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.47012373581988126, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.32271647083531096, 0);
  sqcRZGate(q, -0.43960190538811383, 1);
  sqcRZGate(q, -0.47153530056745174, 2);
  sqcRZGate(q, -0.13710219014519484, 3);
  sqcRZGate(q, -0.8936908434802544, 4);
  sqcRZGate(q, -0.645525540590256, 5);
  sqcRZGate(q, 0.6582954468406226, 6);
  sqcRZGate(q, -0.05455027340900627, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.16132429026146497, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.6667337818026647, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.1668516926415299, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.6676084936100036, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.436153475809571, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.23741700570504906, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.3803138934098518, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.12366200214011037, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.11922187675058103, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.40466851355978667, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.042611341305402, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.010888147737875534, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.8674738878256929, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.2700302950776149, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -1.201728351896258, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.4132806301579153, 0);
  sqcRZGate(q, -0.2543358642149649, 1);
  sqcRZGate(q, -0.03643444209750746, 2);
  sqcRZGate(q, -0.005847379198747845, 3);
  sqcRZGate(q, -0.47545622784730596, 4);
  sqcRZGate(q, 0.05159979514126564, 5);
  sqcRZGate(q, 0.05668160413035545, 6);
  sqcRZGate(q, -0.18145064035069586, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.21363631191647384, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.6452860943025425, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3966220347774003, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.09073995713128873, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.49007466381430914, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.5957228797288994, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.5090657308074854, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.0352173564529456, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.5215725996329489, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.3458033062208739, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.4081225952002914, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.694030029365238, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.026660779716946383, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.7708724421367634, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -1.5655874071118727, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 1.284751009421545, 0);
  sqcRZGate(q, 0.0329288831488703, 1);
  sqcRZGate(q, 0.0023229168090480186, 2);
  sqcRZGate(q, -0.026816347630804285, 3);
  sqcRZGate(q, -0.0038094439223055727, 4);
  sqcRZGate(q, -0.08812408858581905, 5);
  sqcRZGate(q, -0.07118507547267469, 6);
  sqcRZGate(q, -0.25310486732698617, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.24617222418627646, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.6235190321970134, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.3500040572227803, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.16713869002309417, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.2629467279184928, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.045090479606404846, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.3139921792076513, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.6633600608604815, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.6589904654025138, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.5414096642543101, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.4587589045837299, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -1.8067228200421332, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.14801651742572597, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.7381915945053121, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -1.5588813035104212, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 1.0429890211022161, 0);
  sqcRZGate(q, -0.17111804512146625, 1);
  sqcRZGate(q, -0.04818888030608261, 2);
  sqcRZGate(q, -0.01899618707757854, 3);
  sqcRZGate(q, -0.20103644612823085, 4);
  sqcRZGate(q, -0.00111766693419366, 5);
  sqcRZGate(q, -0.38281192820702237, 6);
  sqcRZGate(q, 0.2512554577793631, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.7169796342871776, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.8580683260011435, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6715787537018527, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.18068029293533308, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.26417971191994094, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.030423653783347358, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.8735916300398148, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -1.0035590912858086, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.4617723768933535, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.2419502146463506, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.7473638959514306, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.06296251533638185, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.5712958916976848, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.3880383723415688, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -1.1962486355959352, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.45132607249961115, 0);
  sqcRZGate(q, 0.0076380430248161905, 1);
  sqcRZGate(q, 0.1136429282531348, 2);
  sqcRZGate(q, 0.01352303810010646, 3);
  sqcRZGate(q, 0.19996071188043446, 4);
  sqcRZGate(q, -0.13608731877237812, 5);
  sqcRZGate(q, 0.6104924590983113, 6);
  sqcRZGate(q, 0.8139178971797879, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.2631628956746203, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.03890326422148667, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.41034889353806997, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.0481418298609761, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.06890479057448792, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.09834317412040908, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 1.332955601562451, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.7175414052578204, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.8831868496820112, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.4587997273520312, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.765672080886985, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.45771369702613274, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.12979095148990333, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -1.0563957194918525, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.8932058084057531, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.6902880873371885, 0);
  sqcRZGate(q, 0.02438576023376025, 1);
  sqcRZGate(q, -0.16412672329223732, 2);
  sqcRZGate(q, -0.020139143969999034, 3);
  sqcRZGate(q, -0.0018713114939264849, 4);
  sqcRZGate(q, 0.16618936425072264, 5);
  sqcRZGate(q, 0.32726853851154514, 6);
  sqcRZGate(q, 0.9128318383712641, 7);

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
