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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -1.541908745283466, 0);
  sqcRZGate(q, -0.7901726500331818, 0);
  sqcRYGate(q, -1.5312200860242717, 1);
  sqcRZGate(q, 1.0802328564599994, 1);
  sqcRYGate(q, -1.578773541791819, 2);
  sqcRZGate(q, 1.2334461641968597, 2);
  sqcRYGate(q, 0.00018061541062941444, 3);
  sqcRZGate(q, 2.362134160447206, 3);
  sqcRYGate(q, -0.07595537044529166, 4);
  sqcRZGate(q, 2.960075219417484, 4);
  sqcRYGate(q, 2.7108131695187643, 5);
  sqcRZGate(q, 0.9587784584202981, 5);
  sqcRYGate(q, 1.555644864488624, 6);
  sqcRZGate(q, -1.7091306727270175, 6);
  sqcRYGate(q, -0.000401824538427381, 7);
  sqcRZGate(q, 0.4348496270939001, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.545020675646028, 0);
  sqcRZGate(q, -3.131472362693306, 0);
  sqcRYGate(q, -2.457107472229171, 1);
  sqcRZGate(q, 2.5682154150082, 1);
  sqcRYGate(q, -0.7253075784717292, 2);
  sqcRZGate(q, -3.08235149658834, 2);
  sqcRYGate(q, -0.0003575217450430262, 3);
  sqcRZGate(q, 0.7506085341843086, 3);
  sqcRYGate(q, 3.05721724805363, 4);
  sqcRZGate(q, 0.019669003506848425, 4);
  sqcRYGate(q, -0.6931926745522445, 5);
  sqcRZGate(q, -0.36667619825934583, 5);
  sqcRYGate(q, -0.08838218264359554, 6);
  sqcRZGate(q, -0.9737331533692926, 6);
  sqcRYGate(q, 0.00454145506764364, 7);
  sqcRZGate(q, 0.8246677849453831, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.958350019734893, 0);
  sqcRZGate(q, 0.009583944183043867, 0);
  sqcRYGate(q, -1.5846254465603007, 1);
  sqcRZGate(q, -2.8118251527834572, 1);
  sqcRYGate(q, 1.613642064668456, 2);
  sqcRZGate(q, -1.636739085606651, 2);
  sqcRYGate(q, 3.1410371547410665, 3);
  sqcRZGate(q, 0.13345100898710283, 3);
  sqcRYGate(q, -1.031920977847237, 4);
  sqcRZGate(q, -0.8697458321221792, 4);
  sqcRYGate(q, 0.5396627514174342, 5);
  sqcRZGate(q, 1.2343234484355623, 5);
  sqcRYGate(q, -1.304996555701786, 6);
  sqcRZGate(q, -0.1841006506987561, 6);
  sqcRYGate(q, 3.109452423928465, 7);
  sqcRZGate(q, 0.008647151396147024, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5344878515848162, 0);
  sqcRZGate(q, -3.1397615713185374, 0);
  sqcRYGate(q, 2.591911312560981, 1);
  sqcRZGate(q, 1.605793275623735, 1);
  sqcRYGate(q, -2.349811549096958, 2);
  sqcRZGate(q, -0.021172533240983782, 2);
  sqcRYGate(q, -1.571202934657384, 3);
  sqcRZGate(q, -2.394258756112281, 3);
  sqcRYGate(q, 3.126733280426097, 4);
  sqcRZGate(q, 0.3471647232598468, 4);
  sqcRYGate(q, -0.004964156639579509, 5);
  sqcRZGate(q, -1.2812325164394531, 5);
  sqcRYGate(q, -0.009806562141710273, 6);
  sqcRZGate(q, 1.2217514433595391, 6);
  sqcRYGate(q, 3.2311968172216154e-05, 7);
  sqcRZGate(q, 3.11675559644818, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5792828738795333, 0);
  sqcRZGate(q, 1.4853067144502088, 0);
  sqcRYGate(q, -1.5718007013362927, 1);
  sqcRZGate(q, 0.034333142740661265, 1);
  sqcRYGate(q, 1.562523603070605, 2);
  sqcRZGate(q, -2.839620877724605, 2);
  sqcRYGate(q, 3.140847138428999, 3);
  sqcRZGate(q, 1.8142413946185831, 3);
  sqcRYGate(q, -0.0891572231351252, 4);
  sqcRZGate(q, 0.9089448864822051, 4);
  sqcRYGate(q, -1.5715244759785747, 5);
  sqcRZGate(q, -0.14997458012117357, 5);
  sqcRYGate(q, 2.631060543227811, 6);
  sqcRZGate(q, 1.3214292903538665, 6);
  sqcRYGate(q, 3.107840025334035, 7);
  sqcRZGate(q, 0.5255185333257255, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.3417528387145845, 0);
  sqcRZGate(q, -1.067158585567019, 0);
  sqcRYGate(q, 1.5729518229813415, 1);
  sqcRZGate(q, -3.1410908335132834, 1);
  sqcRYGate(q, 0.0019636013501825676, 2);
  sqcRZGate(q, 1.307513352204401, 2);
  sqcRYGate(q, 0.0007979846856862594, 3);
  sqcRZGate(q, -2.5412286745079427, 3);
  sqcRYGate(q, -3.1370467796414476, 4);
  sqcRZGate(q, -0.9649270115938788, 4);
  sqcRYGate(q, 2.8300919374182745, 5);
  sqcRZGate(q, 2.732013970501626, 5);
  sqcRYGate(q, -0.007894501782042733, 6);
  sqcRZGate(q, -0.18320493899478346, 6);
  sqcRYGate(q, 0.9042782614357948, 7);
  sqcRZGate(q, 0.013441518918515527, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.00019867835298992276, 0);
  sqcRZGate(q, -1.8480251603546627, 0);
  sqcRYGate(q, 1.5690936009532517, 1);
  sqcRZGate(q, -1.7370488683034617, 1);
  sqcRYGate(q, -2.052704774019791, 2);
  sqcRZGate(q, -1.6226035316332916, 2);
  sqcRYGate(q, 0.4235890969207329, 3);
  sqcRZGate(q, -0.015633434828889434, 3);
  sqcRYGate(q, 0.7940138662725496, 4);
  sqcRZGate(q, -1.5740870011313561, 4);
  sqcRYGate(q, 0.0016240511123735146, 5);
  sqcRZGate(q, -2.828274181555249, 5);
  sqcRYGate(q, 2.43451378559748, 6);
  sqcRZGate(q, -1.9808064189230852, 6);
  sqcRYGate(q, 1.5708468353207365, 7);
  sqcRZGate(q, -0.0002260202893626939, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -7.966831266996037e-05, 0);
  sqcRZGate(q, -1.713323946246324, 0);
  sqcRYGate(q, 1.5590765095994812, 1);
  sqcRZGate(q, -0.001757593466210997, 1);
  sqcRYGate(q, 0.00739300023343592, 2);
  sqcRZGate(q, 1.6395468997936375, 2);
  sqcRYGate(q, 2.7982411095790702, 3);
  sqcRZGate(q, -0.9458852140367405, 3);
  sqcRYGate(q, -1.5836229404564737, 4);
  sqcRZGate(q, 1.858013253973549, 4);
  sqcRYGate(q, -1.5710045713944805, 5);
  sqcRZGate(q, 1.4931738502302307, 5);
  sqcRYGate(q, 3.1415226522645936, 6);
  sqcRZGate(q, 2.7408582415366762, 6);
  sqcRYGate(q, 2.339426468960108, 7);
  sqcRZGate(q, 1.4717648215810097, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 3.059875711303244, 0);
  sqcRZGate(q, 0.06884604194021378, 0);
  sqcRYGate(q, -1.5709862822296603, 1);
  sqcRZGate(q, -0.14026714012772243, 1);
  sqcRYGate(q, 1.5688401742378117, 2);
  sqcRZGate(q, 1.5245790621839541, 2);
  sqcRYGate(q, -0.026572205897411827, 3);
  sqcRZGate(q, -1.3634367344590368, 3);
  sqcRYGate(q, -3.402406110364353e-05, 4);
  sqcRZGate(q, -1.4300511400720612, 4);
  sqcRYGate(q, 3.1413945224492354, 5);
  sqcRZGate(q, -1.6484899752531863, 5);
  sqcRYGate(q, 1.5732346176031748, 6);
  sqcRZGate(q, -1.582918016668328, 6);
  sqcRYGate(q, 1.56776361489408, 7);
  sqcRZGate(q, -2.370060147075137, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.565780788537331, 0);
  sqcRZGate(q, 1.5426687723623709, 0);
  sqcRYGate(q, -0.00993334569309745, 1);
  sqcRZGate(q, 1.7925659482814384, 1);
  sqcRYGate(q, 0.03618894997307098, 2);
  sqcRZGate(q, 0.04435034684489913, 2);
  sqcRYGate(q, 3.1412159365725194, 3);
  sqcRZGate(q, -1.7236099295246108, 3);
  sqcRYGate(q, 0.42118904546703195, 4);
  sqcRZGate(q, -2.5686097086137787, 4);
  sqcRYGate(q, 1.5897924131190608, 5);
  sqcRZGate(q, 3.1397527937267897, 5);
  sqcRYGate(q, 1.583480905285401, 6);
  sqcRZGate(q, -0.7295916842639484, 6);
  sqcRYGate(q, -3.141490226596786, 7);
  sqcRZGate(q, -2.0198660163334914, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.8371648479120841, 0);
  sqcRZGate(q, -0.15077524133054498, 0);
  sqcRYGate(q, -2.1018933132652604, 1);
  sqcRZGate(q, -2.1146088736306035, 1);
  sqcRYGate(q, -1.5715732187635232, 2);
  sqcRZGate(q, 2.2241902810969063, 2);
  sqcRYGate(q, -3.141080729624235, 3);
  sqcRZGate(q, -1.0108209544602547, 3);
  sqcRYGate(q, -1.5782531375979552, 4);
  sqcRZGate(q, -0.896601348358857, 4);
  sqcRYGate(q, -1.5707790690373242, 5);
  sqcRZGate(q, -3.141510560569781, 5);
  sqcRYGate(q, 0.002985609412532675, 6);
  sqcRZGate(q, 1.181791649940128, 6);
  sqcRYGate(q, 3.141481882877151, 7);
  sqcRZGate(q, 2.1274643111963254, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.00024912449510646064, 0);
  sqcRZGate(q, -3.012058166214796, 0);
  sqcRYGate(q, -3.1413782954156955, 1);
  sqcRZGate(q, -2.2871316862531876, 1);
  sqcRYGate(q, -1.5585987426209904, 2);
  sqcRZGate(q, -1.4945710546223048, 2);
  sqcRYGate(q, -0.03265215079296179, 3);
  sqcRZGate(q, -3.1314452679380573, 3);
  sqcRYGate(q, 0.002945021655917595, 4);
  sqcRZGate(q, -2.60697744904395, 4);
  sqcRYGate(q, 1.5714618161884237, 5);
  sqcRZGate(q, -1.5533823636440438, 5);
  sqcRYGate(q, 1.5701076638970628, 6);
  sqcRZGate(q, 0.07046234744908408, 6);
  sqcRYGate(q, -1.5729005064400998, 7);
  sqcRZGate(q, -0.5255129121616129, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.3164327735662145, 0);
  sqcRZGate(q, 1.5797492373537567, 0);
  sqcRYGate(q, -2.603957600922968, 1);
  sqcRZGate(q, -0.003974231232678704, 1);
  sqcRYGate(q, -0.0023223244097147606, 2);
  sqcRZGate(q, 2.540276348371588, 2);
  sqcRYGate(q, 2.508560662706912, 3);
  sqcRZGate(q, -1.572401616233023, 3);
  sqcRYGate(q, 0.00030457249681514753, 4);
  sqcRZGate(q, -1.2303921956199746, 4);
  sqcRYGate(q, 1.5699138261736731, 5);
  sqcRZGate(q, -3.141521647537368, 5);
  sqcRYGate(q, -3.139987030679216, 6);
  sqcRZGate(q, 2.959915291433429, 6);
  sqcRYGate(q, 1.5763985410930081, 7);
  sqcRZGate(q, 1.3746118702828964, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.0006436227444908464, 0);
  sqcRZGate(q, 0.026456638876509512, 0);
  sqcRYGate(q, 0.0006947433929003211, 1);
  sqcRZGate(q, 2.9977831775028747, 1);
  sqcRYGate(q, 3.111837634204727, 2);
  sqcRZGate(q, 0.682122211651191, 2);
  sqcRYGate(q, -0.7191935221701324, 3);
  sqcRZGate(q, -1.638560907060399, 3);
  sqcRYGate(q, 2.0825975268230987, 4);
  sqcRZGate(q, 1.497710334987672, 4);
  sqcRYGate(q, -1.5706962580091792, 5);
  sqcRZGate(q, 0.2577418186048188, 5);
  sqcRYGate(q, 0.011946917824111126, 6);
  sqcRZGate(q, 0.25337901454402756, 6);
  sqcRYGate(q, -0.0007502408843470705, 7);
  sqcRZGate(q, 2.3358153020975525, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.5283788010635293, 0);
  sqcRZGate(q, -1.925366634514548, 0);
  sqcRYGate(q, -1.5694761126764565, 1);
  sqcRZGate(q, -2.3226064603680765, 1);
  sqcRYGate(q, -0.00030739543006319536, 2);
  sqcRZGate(q, 2.3253341444475497, 2);
  sqcRYGate(q, 0.0003213091932536827, 3);
  sqcRZGate(q, -0.681438558125033, 3);
  sqcRYGate(q, 0.0026510181753817766, 4);
  sqcRZGate(q, -1.113205661919292, 4);
  sqcRYGate(q, -3.139548287075103, 5);
  sqcRZGate(q, -0.48752834711818765, 5);
  sqcRYGate(q, -1.572274035145713, 6);
  sqcRZGate(q, -2.7457545249188833, 6);
  sqcRYGate(q, 9.899979451777341e-05, 7);
  sqcRZGate(q, -2.8930070916374144, 7);

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
