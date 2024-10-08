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

  sqcRYGate(q, -0.03739413769378164, 0);
  sqcRYGate(q, -0.6049186552524874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5740329969527814, 0);
  sqcRYGate(q, 2.4355859456915643, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.550260083528985, 0);
  sqcRYGate(q, -1.281914010376997, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.556289446522365, 0);
  sqcRYGate(q, -2.0816801493340265, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.974953745894346, 0);
  sqcRYGate(q, 2.633640186262515, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.730076379315697, 0);
  sqcRYGate(q, -1.471929537253743, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1073997977283065, 1);
  sqcRYGate(q, -2.893004543572086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0274416277451799, 1);
  sqcRYGate(q, -0.973853330617039, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1625401238312696, 1);
  sqcRYGate(q, -2.8273482631895264, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5348923746717801, 1);
  sqcRYGate(q, 0.4699598280821631, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2604749488952837, 2);
  sqcRYGate(q, 1.4048509483136553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.454652202627411, 2);
  sqcRYGate(q, -2.528953749414696, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3026820977562562, 0);
  sqcRYGate(q, -2.192104310484148, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8917503899603325, 0);
  sqcRYGate(q, 2.266473692693316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3859390276100942, 0);
  sqcRYGate(q, 2.612728377529104, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2727763668784575, 0);
  sqcRYGate(q, 1.6513661685127292, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4251382410362088, 0);
  sqcRYGate(q, 1.93843661744073, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.39574928264184006, 0);
  sqcRYGate(q, -0.9400092579718837, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.131624300472465, 1);
  sqcRYGate(q, 0.4110915502388744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5982868930554013, 1);
  sqcRYGate(q, 2.6114903291466267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2732955549423117, 1);
  sqcRYGate(q, -2.376274931158072, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5492860712296288, 1);
  sqcRYGate(q, 3.1395709681762733, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.748843699194552, 2);
  sqcRYGate(q, -0.5746038878291602, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3869974309554847, 2);
  sqcRYGate(q, 0.6366165516839243, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7164920384022613, 0);
  sqcRYGate(q, -0.5473899594968182, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4373074203345704, 0);
  sqcRYGate(q, 0.2638631898921837, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.14997486646423397, 0);
  sqcRYGate(q, 1.2344368041982356, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4846781399851938, 0);
  sqcRYGate(q, 1.3935223633178064, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.302473499948314, 0);
  sqcRYGate(q, -1.3510574109307294, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.48332587019599105, 0);
  sqcRYGate(q, -2.8319084361556968, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.022835140533211, 1);
  sqcRYGate(q, -0.8462187316120503, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6691287449162253, 1);
  sqcRYGate(q, 1.7160509173189094, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0501496151583796, 1);
  sqcRYGate(q, -2.449295915845229, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5626450978390078, 1);
  sqcRYGate(q, 2.7334190841779105, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6461803396704866, 2);
  sqcRYGate(q, 1.1032614308579016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.517776534364605, 2);
  sqcRYGate(q, 1.7954343285173824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.46931691153231486, 0);
  sqcRYGate(q, -1.3794784907163609, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3216684693339982, 0);
  sqcRYGate(q, 3.086629097761051, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0707468634459871, 0);
  sqcRYGate(q, -1.3034162360504182, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.722942834758868, 0);
  sqcRYGate(q, 2.1237320195905953, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5021423269822574, 0);
  sqcRYGate(q, 1.3067010844755103, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0484639819454062, 0);
  sqcRYGate(q, -0.7024866328304145, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6551959582753888, 1);
  sqcRYGate(q, -1.740265717953383, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1921640616966778, 1);
  sqcRYGate(q, 2.9337995219668525, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05524645756387691, 1);
  sqcRYGate(q, -2.5753014763666187, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0326595621617685, 1);
  sqcRYGate(q, -1.7945302252379804, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4244612514804773, 2);
  sqcRYGate(q, 0.5442300987496231, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3699963980443117, 2);
  sqcRYGate(q, -1.5484034463482432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.056913785941625, 0);
  sqcRYGate(q, -2.1204375528198938, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1870607685818992, 0);
  sqcRYGate(q, 2.579326164465892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1288703191971774, 0);
  sqcRYGate(q, 0.505918945348944, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.970119005178506, 0);
  sqcRYGate(q, -3.0512828645626198, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9894153997962754, 0);
  sqcRYGate(q, 1.1337237805884348, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9939243177892809, 0);
  sqcRYGate(q, 1.7281838619590395, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3683359808234608, 1);
  sqcRYGate(q, -2.8812326344667807, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.101216940894251, 1);
  sqcRYGate(q, -2.120829498363313, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.674672216706531, 1);
  sqcRYGate(q, -2.17582366677537, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6859535378554096, 1);
  sqcRYGate(q, 0.48715239905148344, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.0048405464170412525, 2);
  sqcRYGate(q, 3.055297262049058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.295255696903572, 2);
  sqcRYGate(q, 2.4059384453880064, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6433056298123273, 0);
  sqcRYGate(q, 0.9516042801524565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7831561570460774, 0);
  sqcRYGate(q, 2.0150037890377166, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7692342624708387, 0);
  sqcRYGate(q, 0.6200041581848054, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.027316125633723765, 0);
  sqcRYGate(q, -3.094404278780086, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2450624363595315, 0);
  sqcRYGate(q, 2.9798746238351854, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.813670775644221, 0);
  sqcRYGate(q, -1.6230698233546743, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6169362517988275, 1);
  sqcRYGate(q, -0.08003832034495058, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.244002830481178, 1);
  sqcRYGate(q, 2.883431794310857, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9129662912697923, 1);
  sqcRYGate(q, 0.22854411939424069, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2309232051789776, 1);
  sqcRYGate(q, -1.7767064698927928, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.13434751022887959, 2);
  sqcRYGate(q, 2.978641313601867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9889054375346729, 2);
  sqcRYGate(q, -2.81162022470404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2920915198211023, 0);
  sqcRYGate(q, -1.7006265314828792, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9226037116088488, 0);
  sqcRYGate(q, 0.8945605879803057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8525864413034875, 0);
  sqcRYGate(q, -2.55384547195631, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5502346276597814, 0);
  sqcRYGate(q, 1.0113903819620462, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0881653363852957, 0);
  sqcRYGate(q, 0.4337656813211952, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5958265824360645, 0);
  sqcRYGate(q, 2.4930678604891785, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3702308147062414, 1);
  sqcRYGate(q, 0.13241844813964146, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8688432454014383, 1);
  sqcRYGate(q, -0.6142458900656769, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.21729043954689065, 1);
  sqcRYGate(q, -1.6860436157296932, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.352986266216642, 1);
  sqcRYGate(q, -2.797392837615521, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7257080063105406, 2);
  sqcRYGate(q, 1.8595883134027325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.949402538563198, 2);
  sqcRYGate(q, 2.7787791949485032, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8132533413685397, 0);
  sqcRYGate(q, 0.28398835091019314, 1);
  sqcRYGate(q, -1.3063472826077895, 2);
  sqcRYGate(q, 0.5417218693756558, 3);

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
