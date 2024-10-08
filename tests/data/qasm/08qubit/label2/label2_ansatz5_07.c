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

  sqcRYGate(q, -2.1568771050142264, 0);
  sqcRYGate(q, -1.436808924291503, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5704259571067567, 0);
  sqcRYGate(q, -0.29960884304176716, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5872926905736877, 2);
  sqcRYGate(q, -2.3310405081406937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7361156195061893, 2);
  sqcRYGate(q, 1.6094234251585329, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.977382499009093, 4);
  sqcRYGate(q, -2.134904438089352, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.46013780633701445, 4);
  sqcRYGate(q, 2.759767387552835, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.299263927377623, 6);
  sqcRYGate(q, -1.8703874108432657, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.09723049366656955, 6);
  sqcRYGate(q, -1.165255195568866, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.418147956088204, 1);
  sqcRYGate(q, -0.5225645084470851, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7887015622387494, 1);
  sqcRYGate(q, 0.9421506632411116, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8061844965411091, 3);
  sqcRYGate(q, 0.9015064245158032, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.446054946035736, 3);
  sqcRYGate(q, 2.677604921430092, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.087346557767336, 5);
  sqcRYGate(q, 2.2652902092147507, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5707045247161062, 5);
  sqcRYGate(q, -3.1289169557745025, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4436040860912598, 0);
  sqcRYGate(q, 1.5329168188592863, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.37806092429369, 0);
  sqcRYGate(q, -3.0939916709643787, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7888196942452073, 2);
  sqcRYGate(q, 1.7008429371618485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8250815398563116, 2);
  sqcRYGate(q, -0.005326762355131187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.565171435858788, 4);
  sqcRYGate(q, 2.8985335060840303, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.746633311115942, 4);
  sqcRYGate(q, -1.8094386628712626, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.341519900668089, 6);
  sqcRYGate(q, -0.16228942522041567, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1772053967638922, 6);
  sqcRYGate(q, -0.16623864437541247, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4972690224141019, 1);
  sqcRYGate(q, -2.5865604877014197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0005054888303787821, 1);
  sqcRYGate(q, 0.47496819817059865, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4084536333257205, 3);
  sqcRYGate(q, 1.5523420305960995, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1365159180656685, 3);
  sqcRYGate(q, 0.03579882948126721, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2301341533702823, 5);
  sqcRYGate(q, -2.4618031921520434, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0848864665720654, 5);
  sqcRYGate(q, 3.1379970363360705, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.642261737152548, 0);
  sqcRYGate(q, -1.2247078209385538, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.735585609935413, 0);
  sqcRYGate(q, -2.2392102895087906, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11765041890035671, 2);
  sqcRYGate(q, 1.3389717976421176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.694204724475041, 2);
  sqcRYGate(q, -2.7411874574740485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.677393853303248, 4);
  sqcRYGate(q, -1.964491897553625, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.39152618557085633, 4);
  sqcRYGate(q, 1.3795032930386073, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4868468529556215, 6);
  sqcRYGate(q, -2.5783991707406875, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0383265858930544, 6);
  sqcRYGate(q, 0.18096580876360352, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.31448152076546165, 1);
  sqcRYGate(q, -0.206957912952544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.006523054267073362, 1);
  sqcRYGate(q, -0.6266322803781064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.09651494026564, 3);
  sqcRYGate(q, -0.13025837117900266, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.136357900485879, 3);
  sqcRYGate(q, -0.691370380930061, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.262919250976247, 5);
  sqcRYGate(q, 2.541916326641211, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8911382411347049, 5);
  sqcRYGate(q, 2.6076051160239624, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6606772191709949, 0);
  sqcRYGate(q, -2.763644788239018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5935944778919229, 0);
  sqcRYGate(q, 1.854736821155397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.18793939522029854, 2);
  sqcRYGate(q, 2.4895530700714303, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3005670211291602, 2);
  sqcRYGate(q, -0.2824751179402873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6662577092438643, 4);
  sqcRYGate(q, -1.0862855383724845, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0018878402810367917, 4);
  sqcRYGate(q, -0.002040839853330665, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.982540972645176, 6);
  sqcRYGate(q, 0.15957494075554912, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5914803555950625, 6);
  sqcRYGate(q, -0.28622042924776, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.725188468505403, 1);
  sqcRYGate(q, -2.134935483779635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.007747303635669995, 1);
  sqcRYGate(q, 2.4091981139577254, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5120174094939349, 3);
  sqcRYGate(q, 0.008596837125459326, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2271342846419295, 3);
  sqcRYGate(q, 1.7294087942014391, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0080022781423708, 5);
  sqcRYGate(q, 1.694884026351481, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6071180392984576, 5);
  sqcRYGate(q, -2.4959205117327903, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9305799290774638, 0);
  sqcRYGate(q, 1.0476121730923111, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9844613748884569, 0);
  sqcRYGate(q, -2.9347555951340927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1934248073432832, 2);
  sqcRYGate(q, -1.3775221922625471, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7217873663071105, 2);
  sqcRYGate(q, 0.07159415205292508, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8562041289836768, 4);
  sqcRYGate(q, -0.1893995245146488, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.007860836208409161, 4);
  sqcRYGate(q, 1.644071367989931, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5017517777617098, 6);
  sqcRYGate(q, 2.6481688338281586, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4926200823028113, 6);
  sqcRYGate(q, -1.2747143694048888, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7296412403593133, 1);
  sqcRYGate(q, -0.6994368152222906, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.132601335459366, 1);
  sqcRYGate(q, -2.8508909383034258, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9266066777403914, 3);
  sqcRYGate(q, -1.3381005974691274, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6367903414832997, 3);
  sqcRYGate(q, 0.42439053858985076, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.17052755368352734, 5);
  sqcRYGate(q, -1.0374200260228599, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.18026075100998984, 5);
  sqcRYGate(q, -0.015475326832319454, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.15515157836371024, 0);
  sqcRYGate(q, 0.7938037138061, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3944118153390195, 0);
  sqcRYGate(q, 2.6215992683383815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0523285797074515, 2);
  sqcRYGate(q, 0.6997152970457651, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3022692301702943, 2);
  sqcRYGate(q, -0.08268538849722544, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8899304928782348, 4);
  sqcRYGate(q, 2.0084899890728454, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.059180464921716566, 4);
  sqcRYGate(q, -2.669430965741654, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3930638156696658, 6);
  sqcRYGate(q, 0.03515754244516511, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5502754121974167, 6);
  sqcRYGate(q, -2.2442905266469566, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8574726282058023, 1);
  sqcRYGate(q, 2.183296977387627, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.07649687912240655, 1);
  sqcRYGate(q, -3.04965486194035, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.651398795104722, 3);
  sqcRYGate(q, 0.42702311453865216, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0720474391743053, 3);
  sqcRYGate(q, 0.33089086034278237, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1966385453848023, 5);
  sqcRYGate(q, -0.09929939749378303, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.946885510890306, 5);
  sqcRYGate(q, -3.1157332388502312, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6074065356127827, 0);
  sqcRYGate(q, 2.1192109486295383, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7487886142591527, 0);
  sqcRYGate(q, -1.1065080928444675, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5682795977520025, 2);
  sqcRYGate(q, 1.0308707491619584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2582865288131119, 2);
  sqcRYGate(q, -0.7103862005487683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6639029199152224, 4);
  sqcRYGate(q, 2.678172608334252, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1274436165047623, 4);
  sqcRYGate(q, -1.7854054134048152, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9849202148281708, 6);
  sqcRYGate(q, 0.07364197809733496, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5641046855190048, 6);
  sqcRYGate(q, -1.3514473375294511, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.122595080828773, 1);
  sqcRYGate(q, 2.469793706285966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05239257201453999, 1);
  sqcRYGate(q, 1.6445708474935201, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.726298822139871, 3);
  sqcRYGate(q, -2.5498479084439274, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.1121973958096169, 3);
  sqcRYGate(q, -3.0343051319577103, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9711121805468623, 5);
  sqcRYGate(q, 0.8090113764593916, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.17027586417590052, 5);
  sqcRYGate(q, 3.133791856022098, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5953257065931234, 0);
  sqcRYGate(q, -2.4515760053633957, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7518285005489274, 0);
  sqcRYGate(q, 0.6906265963290619, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9263914577030574, 2);
  sqcRYGate(q, -1.3197916701930241, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7875361008254673, 2);
  sqcRYGate(q, 0.7634888589593444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0513196899273565, 4);
  sqcRYGate(q, -3.040029915456667, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.04645113763115116, 4);
  sqcRYGate(q, -3.0217546178839, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.689771781798476, 6);
  sqcRYGate(q, -0.7367411124252041, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2516600031862213, 6);
  sqcRYGate(q, -0.3595210377505671, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7259105907235166, 1);
  sqcRYGate(q, 0.7879625128474972, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0011556407547019718, 1);
  sqcRYGate(q, 1.2273450362561042, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1826475569652213, 3);
  sqcRYGate(q, -2.444931071855376, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.140819241795084, 3);
  sqcRYGate(q, 0.11884973290150479, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0577639403363657, 5);
  sqcRYGate(q, -1.9350161194748163, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.006951130988873, 5);
  sqcRYGate(q, -0.011469994492565402, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.061773602785073, 0);
  sqcRYGate(q, -1.6603950329024564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21531544964860289, 0);
  sqcRYGate(q, -2.604517068156669, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4560850426561391, 2);
  sqcRYGate(q, 0.5248896471488508, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07540153218850155, 2);
  sqcRYGate(q, 0.2208931999881263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7344580576569992, 4);
  sqcRYGate(q, 2.4004139807312526, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5205737015005072, 4);
  sqcRYGate(q, -2.6069963648080665, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1258231483687093, 6);
  sqcRYGate(q, -2.757084759605292, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8962459474989917, 6);
  sqcRYGate(q, 0.5691813741503751, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2898478652261016, 1);
  sqcRYGate(q, 2.175548656741322, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.025778598430140853, 1);
  sqcRYGate(q, 2.795714862961071, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6591860187227347, 3);
  sqcRYGate(q, 1.8371673027229842, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.06365182203046364, 3);
  sqcRYGate(q, -2.92714059957048, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8185242718318144, 5);
  sqcRYGate(q, 0.9033766808580053, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.19195775030387807, 5);
  sqcRYGate(q, 3.136158799750124, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2913919438856578, 0);
  sqcRYGate(q, -1.0581628657936824, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4172754233599678, 0);
  sqcRYGate(q, 1.9115929891181171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4207563569985844, 2);
  sqcRYGate(q, 1.3877517620166322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6874299334302, 2);
  sqcRYGate(q, 3.105208244948157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0415329049543092, 4);
  sqcRYGate(q, -0.048863092998905344, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.40821635457413574, 4);
  sqcRYGate(q, -0.47316132923192744, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2827911898722828, 6);
  sqcRYGate(q, -1.142516157166249, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.745356731862332, 6);
  sqcRYGate(q, -2.626958801745104, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3194718388500783, 1);
  sqcRYGate(q, 1.6572599963025807, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.124739146821941, 1);
  sqcRYGate(q, -3.0902022594879184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3449013349707095, 3);
  sqcRYGate(q, 2.967701238596798, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.014394021569900772, 3);
  sqcRYGate(q, 0.1024697842930714, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3338158892269769, 5);
  sqcRYGate(q, 3.0040967821128874, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9612825734658372, 5);
  sqcRYGate(q, 0.006753234246768732, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4636722064111967, 0);
  sqcRYGate(q, -2.5602732723059747, 1);
  sqcRYGate(q, 1.9528231218453282, 2);
  sqcRYGate(q, -1.818718407796774, 3);
  sqcRYGate(q, 0.8088781144106624, 4);
  sqcRYGate(q, 0.11697339126797922, 5);
  sqcRYGate(q, -2.5106541297279055, 6);
  sqcRYGate(q, -1.835473614296637, 7);

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
