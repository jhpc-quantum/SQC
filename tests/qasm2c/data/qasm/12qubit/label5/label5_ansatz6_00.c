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

  sqcRYGate(q, 1.481002708655624, 0);
  sqcRYGate(q, -1.2159778482757329, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0350093551580266, 0);
  sqcRYGate(q, 2.5784797106495723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8503439701691788, 1);
  sqcRYGate(q, -0.16086589395531492, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9698820176775884, 1);
  sqcRYGate(q, -1.1864836404387256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.89242688772773, 2);
  sqcRYGate(q, 1.8160680397568187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.265431948269258, 2);
  sqcRYGate(q, 1.2221578031378364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.468627242231568, 3);
  sqcRYGate(q, 0.15044377074555193, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.262635396467873, 3);
  sqcRYGate(q, 1.194178541344269, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.726336886369543, 4);
  sqcRYGate(q, 0.5870996353459628, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6804777521672145, 4);
  sqcRYGate(q, -0.0984851318629269, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5414985820561142, 5);
  sqcRYGate(q, -0.05695023327259374, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.706243838045552, 5);
  sqcRYGate(q, -1.6301665856929928, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5942620103023293, 6);
  sqcRYGate(q, -2.5674454131959994, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5452451737113524, 6);
  sqcRYGate(q, 2.216421041380282, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7778667831692259, 7);
  sqcRYGate(q, 3.1013891870650916, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5798685568318056, 7);
  sqcRYGate(q, 1.5566228120203967, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.33493613388254784, 8);
  sqcRYGate(q, -0.4331051079336463, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5057056603572212, 8);
  sqcRYGate(q, -2.0974376244317585, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6174264411828678, 9);
  sqcRYGate(q, -0.0004410318604310959, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.534468669080335, 9);
  sqcRYGate(q, 1.5655854829720093, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.344742776308105, 10);
  sqcRYGate(q, -1.4445415079476507, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.14431297272935684, 10);
  sqcRYGate(q, -0.1257482926340196, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0756193515011507, 0);
  sqcRYGate(q, 1.1238491285280303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7769817799960914, 0);
  sqcRYGate(q, -0.00602191592253476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.687241265056043, 1);
  sqcRYGate(q, 0.8924628329880759, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6036425111163046, 1);
  sqcRYGate(q, -1.6236156349633328, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4057370803415377, 2);
  sqcRYGate(q, -2.227683084926111, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5215218399265111, 2);
  sqcRYGate(q, 1.7122791367847832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.479687999688303, 3);
  sqcRYGate(q, 1.6986269981424584, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5757074994678593, 3);
  sqcRYGate(q, -0.024029594515786457, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0801107650572077, 4);
  sqcRYGate(q, 3.0883531326105205, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6320628802097927, 4);
  sqcRYGate(q, -1.5536426801116097, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1400816862220706, 5);
  sqcRYGate(q, 1.5693855611746361, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5647883769881696, 5);
  sqcRYGate(q, 0.5679693615190944, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.676180947614313, 6);
  sqcRYGate(q, 2.1714792881767293, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.294118949296287, 6);
  sqcRYGate(q, -1.5905217284137538, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7621834881967953, 7);
  sqcRYGate(q, -1.5760788551783858, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5836809554851046, 7);
  sqcRYGate(q, -2.6005658974175976, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.45380976658594, 8);
  sqcRYGate(q, 2.0888073377403495, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.1837175133450648, 8);
  sqcRYGate(q, -1.5568528774164472, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.5839120469230379, 9);
  sqcRYGate(q, 0.04211274125505504, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5748825082117452, 9);
  sqcRYGate(q, 1.690412956763961, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.014970867714495247, 10);
  sqcRYGate(q, -0.19963769269407203, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5731005806388092, 10);
  sqcRYGate(q, -1.5726894352241176, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3961992429297192, 0);
  sqcRYGate(q, -1.6231536251977525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.400744337231148, 0);
  sqcRYGate(q, 3.140754896945238, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.245730605358749, 1);
  sqcRYGate(q, -1.5898654928911826, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6101067139313151, 1);
  sqcRYGate(q, 1.6253662733013314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.32313527300829625, 2);
  sqcRYGate(q, 1.0415016732782587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5707096182976459, 2);
  sqcRYGate(q, -2.9172333521102933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5599754408306366, 3);
  sqcRYGate(q, 1.561798769534859, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6966926041787493, 3);
  sqcRYGate(q, 0.9860305918127709, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5786647399083054, 4);
  sqcRYGate(q, -1.5714986293334683, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5699560124771157, 4);
  sqcRYGate(q, 1.5512702089909607, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5891922392228004, 5);
  sqcRYGate(q, -1.486835171518104, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.436722157558027, 5);
  sqcRYGate(q, 0.575826980273555, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4656163031553768, 6);
  sqcRYGate(q, -1.5699992727975225, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5581794188153946, 6);
  sqcRYGate(q, -1.5874137740679943, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.596159044377053, 7);
  sqcRYGate(q, -1.5484703913384839, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.6329478402823057, 7);
  sqcRYGate(q, -0.6719891337124402, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.552739356910224, 8);
  sqcRYGate(q, -1.5707093220403878, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5637324418233267, 8);
  sqcRYGate(q, -1.5660839641439104, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6093762517491674, 9);
  sqcRYGate(q, -1.534899854117277, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3565147638083992, 9);
  sqcRYGate(q, 1.4163164665401629, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5634770157159643, 10);
  sqcRYGate(q, 3.1415127691255034, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.561153897015939, 10);
  sqcRYGate(q, 1.5481078361098355, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.14147501704244198, 0);
  sqcRYGate(q, -0.7932871157005877, 1);
  sqcRYGate(q, 2.7880399875575526, 2);
  sqcRYGate(q, 1.569435942955069, 3);
  sqcRYGate(q, 1.5708125004315334, 4);
  sqcRYGate(q, -1.5702220801775428, 5);
  sqcRYGate(q, -1.5718197012329287, 6);
  sqcRYGate(q, -1.5698485977762349, 7);
  sqcRYGate(q, -1.5712728176709203, 8);
  sqcRYGate(q, 1.5703718677619651, 9);
  sqcRYGate(q, 1.570908079315581, 10);
  sqcRYGate(q, 0.8645175669904106, 11);

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
