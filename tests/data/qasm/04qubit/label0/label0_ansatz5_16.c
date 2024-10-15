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

  sqcRYGate(q, 0.702787548005372, 0);
  sqcRYGate(q, 0.5503890546920481, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.05696080217034449, 0);
  sqcRYGate(q, 0.0902197629571857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5616375975466239, 2);
  sqcRYGate(q, -2.369033284114416, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.308290892655461, 2);
  sqcRYGate(q, 1.6506188150504821, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5812372910484065, 1);
  sqcRYGate(q, -0.17377965166686682, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6006673008995022, 1);
  sqcRYGate(q, -2.0878146278101717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.189105413275816, 0);
  sqcRYGate(q, -2.2147445906433862, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3223891744884737, 0);
  sqcRYGate(q, 0.3408340877810797, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.449154116084121, 2);
  sqcRYGate(q, 2.303027606584192, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9861459038252578, 2);
  sqcRYGate(q, 2.4344530606013635, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1344204668805467, 1);
  sqcRYGate(q, 0.1981589651381828, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8538756938634844, 1);
  sqcRYGate(q, 2.061504797243482, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6404866002446012, 0);
  sqcRYGate(q, -2.9263402449554374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9419480054672418, 0);
  sqcRYGate(q, 2.914554028026489, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.105801469533467, 2);
  sqcRYGate(q, 2.0121878938305455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.04178189151233269, 2);
  sqcRYGate(q, 2.3678180520762018, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.723131327503514, 1);
  sqcRYGate(q, 2.7087128590497858, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6950761784935686, 1);
  sqcRYGate(q, 0.32749200320317673, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5441802546422616, 0);
  sqcRYGate(q, -2.5197671757622895, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5298400117685704, 0);
  sqcRYGate(q, 1.1910608037275914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7209031281939362, 2);
  sqcRYGate(q, -2.2219513721772355, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9132443705834543, 2);
  sqcRYGate(q, -2.222221942063766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5372996455123515, 1);
  sqcRYGate(q, 3.042382223926404, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9396660383193036, 1);
  sqcRYGate(q, -1.6165008689513105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5988645084209221, 0);
  sqcRYGate(q, 1.829477072621124, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.012774699364247, 0);
  sqcRYGate(q, 1.4416732470023432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2695245053883382, 2);
  sqcRYGate(q, 2.2634171115681063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4446507601850964, 2);
  sqcRYGate(q, 0.17602875751246938, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0546792739813178, 1);
  sqcRYGate(q, 2.807748455679224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.605737590045592, 1);
  sqcRYGate(q, 1.9096838349727374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.07268349794483077, 0);
  sqcRYGate(q, 0.4893573089105833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.772621982275543, 0);
  sqcRYGate(q, 2.3849393548719213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8325839755838667, 2);
  sqcRYGate(q, -0.05715741738698643, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3043588454161084, 2);
  sqcRYGate(q, -0.466661587239526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5487075231398477, 1);
  sqcRYGate(q, 0.7399144233597176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.441459789771403, 1);
  sqcRYGate(q, -2.9094140942042643, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.05151767536226672, 0);
  sqcRYGate(q, -2.6091072323166435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.25426699336467795, 0);
  sqcRYGate(q, 1.9079483333499827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6466575477732119, 2);
  sqcRYGate(q, 2.9488238232334036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0734239033261364, 2);
  sqcRYGate(q, 1.1354824655891338, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8052141353428772, 1);
  sqcRYGate(q, 3.09299492167303, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1042305974810223, 1);
  sqcRYGate(q, 0.6496935811792858, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2906109566202775, 0);
  sqcRYGate(q, -1.74311295636066, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7470161042224034, 0);
  sqcRYGate(q, -1.693756841673884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6473629249903947, 2);
  sqcRYGate(q, 0.16291940700688845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1967165001101643, 2);
  sqcRYGate(q, -2.897193043754122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.392007877451947, 1);
  sqcRYGate(q, 0.00979718584299755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9435253095518839, 1);
  sqcRYGate(q, 2.0839433963171183, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5723177494761017, 0);
  sqcRYGate(q, 1.4334237789287307, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6099717527465518, 0);
  sqcRYGate(q, 1.092516876484645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2918979696777582, 2);
  sqcRYGate(q, -1.030184694989872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7869012330940428, 2);
  sqcRYGate(q, -2.5700528128059967, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5558331294744255, 1);
  sqcRYGate(q, -0.46848658966967677, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.295447188391406, 1);
  sqcRYGate(q, -0.12725990586300326, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.042245478317981235, 0);
  sqcRYGate(q, 0.4503548356705517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4174404225108557, 0);
  sqcRYGate(q, 1.2825983487391568, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8548050946657408, 2);
  sqcRYGate(q, -2.0073404059603996, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.15732071994140984, 2);
  sqcRYGate(q, 1.8181773522458462, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.489990121476164, 1);
  sqcRYGate(q, 1.1851590536543046, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6769667673026172, 1);
  sqcRYGate(q, 1.796652856952333, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1335659540792538, 0);
  sqcRYGate(q, -0.005204602722958144, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.576307051514304, 0);
  sqcRYGate(q, -0.02288702876318931, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4329979134716888, 2);
  sqcRYGate(q, -1.5348122404415674, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9202959585466615, 2);
  sqcRYGate(q, 1.1794226306468572, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.15867709808478, 1);
  sqcRYGate(q, 1.8992928100517836, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2432944150998306, 1);
  sqcRYGate(q, 1.7636119171594062, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.43579179152558023, 0);
  sqcRYGate(q, -0.45742338356311973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3921884680145604, 0);
  sqcRYGate(q, 1.5331091826557761, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0151483337496376, 2);
  sqcRYGate(q, 1.0456505059462886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.09390313530229193, 2);
  sqcRYGate(q, 2.9582570870548195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5525051208275107, 1);
  sqcRYGate(q, 0.7436564209662687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7743458090685116, 1);
  sqcRYGate(q, -1.728321362570413, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.037909676745720336, 0);
  sqcRYGate(q, -0.3287696705967066, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2972686104553377, 0);
  sqcRYGate(q, -1.860342958745841, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9866957537992436, 2);
  sqcRYGate(q, -0.6142087416516518, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.622956793195836, 2);
  sqcRYGate(q, 1.6580502820713205, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0253871076003325, 1);
  sqcRYGate(q, -0.5584222738369631, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.052962601193508, 1);
  sqcRYGate(q, -0.18773572545760242, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.648640382554192, 0);
  sqcRYGate(q, 2.61592449600322, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6278693842821597, 0);
  sqcRYGate(q, -2.0362018484530386, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.098771881966867, 2);
  sqcRYGate(q, -1.472821025739729, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1663961939201961, 2);
  sqcRYGate(q, -2.543844525639801, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.182485147107564, 1);
  sqcRYGate(q, 0.7346496953747564, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3201051204364293, 1);
  sqcRYGate(q, 1.8873979881607008, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5686571099422126, 0);
  sqcRYGate(q, -2.591042575928227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7702230341925091, 0);
  sqcRYGate(q, -1.3049629637899764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7379755115316866, 2);
  sqcRYGate(q, 2.343730767653834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8301633020924668, 2);
  sqcRYGate(q, 0.8166787512743464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.26922334704699585, 1);
  sqcRYGate(q, 2.1952347876308114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.333971560707601, 1);
  sqcRYGate(q, -0.40518910678136955, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.963650413507949, 0);
  sqcRYGate(q, -0.2965699413024536, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4517202771696436, 0);
  sqcRYGate(q, -0.5151919662691754, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.87881174775693, 2);
  sqcRYGate(q, -3.141441626287475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8839780844760825, 2);
  sqcRYGate(q, 0.4147303911991793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2565154025168987, 1);
  sqcRYGate(q, -0.42025806501629426, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6680281898008764, 1);
  sqcRYGate(q, -0.8430316702024339, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9488299430656122, 0);
  sqcRYGate(q, -1.2650884622353895, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.788819721159986, 0);
  sqcRYGate(q, 1.6308521583619535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.851487558622476, 2);
  sqcRYGate(q, 2.1063582207164337, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1987160267601036, 2);
  sqcRYGate(q, 1.737966676329719, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5167768523955474, 1);
  sqcRYGate(q, -1.1490207065738063, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1320226174951502, 1);
  sqcRYGate(q, 2.63804604076381, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3105881107530237, 0);
  sqcRYGate(q, 2.078003905802043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7190404890838507, 0);
  sqcRYGate(q, 1.0971148437296794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7886140867648774, 2);
  sqcRYGate(q, 3.0521093473078165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.14996139591820778, 2);
  sqcRYGate(q, 2.4619637715253444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17964360314739292, 1);
  sqcRYGate(q, 2.7031633093473695, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.629122586008358, 1);
  sqcRYGate(q, -0.8135264299353526, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8787553229146593, 0);
  sqcRYGate(q, 2.385335509076186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9258696069517396, 0);
  sqcRYGate(q, -0.5476313855682342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.689548083843121, 2);
  sqcRYGate(q, 1.0957687431366887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7611836293549954, 2);
  sqcRYGate(q, -2.3485892195329137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6489889505966424, 1);
  sqcRYGate(q, -0.008221287500350984, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.471257925289852, 1);
  sqcRYGate(q, -2.677988128540115, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3882484885912514, 0);
  sqcRYGate(q, 0.8693628381805649, 1);
  sqcRYGate(q, -3.054899222180299, 2);
  sqcRYGate(q, 1.0147108450093938, 3);

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
