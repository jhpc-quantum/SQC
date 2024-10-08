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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 2.0937995448975824, 0);
  sqcRYGate(q, -1.2578370032089943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3296749560560666, 0);
  sqcRYGate(q, -1.1331571033902597, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0501315555417934, 2);
  sqcRYGate(q, -1.27102777984878, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7865909096038081, 2);
  sqcRYGate(q, 2.5872581332470848, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9896336958573402, 4);
  sqcRYGate(q, -2.8776753897740086, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7392676082621885, 4);
  sqcRYGate(q, -2.885985251214958, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.06272291653049, 6);
  sqcRYGate(q, -2.581738519144954, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5641956617619028, 6);
  sqcRYGate(q, -0.30918734040164164, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2475257059151934, 8);
  sqcRYGate(q, 2.7125258139111748, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.2451957399842515, 8);
  sqcRYGate(q, 0.0017935981439313204, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4957549780772263, 10);
  sqcRYGate(q, 0.07073873900247407, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6375848402277766, 10);
  sqcRYGate(q, 1.513955989370273, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.509538639985403, 12);
  sqcRYGate(q, -0.18695263870220205, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.4689662157204877, 12);
  sqcRYGate(q, -1.240683214701284, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.326368309184354, 14);
  sqcRYGate(q, -1.4733717100661434, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.2655718344612952, 14);
  sqcRYGate(q, -2.3719595888748515, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.9396455478215191, 1);
  sqcRYGate(q, 2.501300206018203, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7458882568096126, 1);
  sqcRYGate(q, 2.873006584481444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.025091153606833, 3);
  sqcRYGate(q, 2.989153360492891, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8026559599383106, 3);
  sqcRYGate(q, 0.23537393934662715, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.365285863849944, 5);
  sqcRYGate(q, 2.840465692651643, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.009348340534885383, 5);
  sqcRYGate(q, 1.58518469628581, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6439371170220091, 7);
  sqcRYGate(q, -2.263149549053404, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.003643988526721209, 7);
  sqcRYGate(q, 1.5533500491810652, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.3623396178757448, 9);
  sqcRYGate(q, -2.1714862941613613, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4573196456753834, 9);
  sqcRYGate(q, -1.910670083174872, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2242660203706643, 11);
  sqcRYGate(q, -0.4493086551104106, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.8871193449036134, 11);
  sqcRYGate(q, -1.6224610810242366, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.6516378780550918, 13);
  sqcRYGate(q, -0.4023401504442079, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5312771338454996, 13);
  sqcRYGate(q, 1.8774798596825093, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.6521203859642197, 0);
  sqcRYGate(q, -1.6442768137135442, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8249688710085517, 0);
  sqcRYGate(q, 3.0533325984564352, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6592582458547642, 2);
  sqcRYGate(q, -1.2697964151648926, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.640741534593877, 2);
  sqcRYGate(q, -1.6273057290373645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.547398752185029, 4);
  sqcRYGate(q, 2.774416632129847, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4069565299376325, 4);
  sqcRYGate(q, -1.5363874366878312, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.974146998291479, 6);
  sqcRYGate(q, -0.31583816402458714, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.198490749628366, 6);
  sqcRYGate(q, -1.573511512772554, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.091738675187394, 8);
  sqcRYGate(q, -1.5019041141947431, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.8437831452051636, 8);
  sqcRYGate(q, -2.585027685571894, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.474387681634483, 10);
  sqcRYGate(q, 1.318345977533391, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5544058699163776, 10);
  sqcRYGate(q, -0.003003838267099967, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.03889307329122, 12);
  sqcRYGate(q, -2.7455618063402465, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.950035305397332, 12);
  sqcRYGate(q, -0.6850510316800573, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.1889806176088714, 14);
  sqcRYGate(q, -1.6417984550165174, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.713281481855631, 14);
  sqcRYGate(q, 0.6959744960890527, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.3900991626632966, 1);
  sqcRYGate(q, 1.8716095709491416, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.028231503365287014, 1);
  sqcRYGate(q, -0.03536607923523254, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.976558855189408, 3);
  sqcRYGate(q, 2.2422731633671393, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2199872616719905, 3);
  sqcRYGate(q, -1.5698894274266317, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5737053001363863, 5);
  sqcRYGate(q, -1.5044490346533932, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5452210060149256, 5);
  sqcRYGate(q, -1.565484437206315, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.570272777257728, 7);
  sqcRYGate(q, 1.581047969364898, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5008915615553001, 7);
  sqcRYGate(q, -0.74358557180836, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4437829445050288, 9);
  sqcRYGate(q, 0.6381259866635204, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6443617350038209, 9);
  sqcRYGate(q, -0.0006150933359814204, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5719021682569334, 11);
  sqcRYGate(q, 1.6734590808159266, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.7354065600473616, 11);
  sqcRYGate(q, -2.258409843771358, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.1388408251218218, 13);
  sqcRYGate(q, -2.4882829558879704, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.4767757068916427, 13);
  sqcRYGate(q, 0.12182406075357856, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.2040150260466955, 0);
  sqcRYGate(q, -2.5449824438246758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.365717419365028, 0);
  sqcRYGate(q, 0.493163920332063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.283838704502139, 2);
  sqcRYGate(q, -1.570235758027184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.258885077977024, 2);
  sqcRYGate(q, 1.5790478524640488, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.005989399214494817, 4);
  sqcRYGate(q, 1.5021670324543086, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.16780146413799013, 4);
  sqcRYGate(q, -1.5769867462025144, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5670997458038545, 6);
  sqcRYGate(q, -1.5667943079463313, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5993171082360584, 6);
  sqcRYGate(q, -0.03274756796447831, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5704344865942348, 8);
  sqcRYGate(q, -1.776720830103674, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5511693494350896, 8);
  sqcRYGate(q, 1.1084498380655845, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6125060230192434, 10);
  sqcRYGate(q, -1.588542993997792, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.55442055638715, 10);
  sqcRYGate(q, -3.01005304720391, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5651131810415908, 12);
  sqcRYGate(q, -1.4360777890149237, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.7422811497330166, 12);
  sqcRYGate(q, -2.621832282084126, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.4998240867043724, 14);
  sqcRYGate(q, 1.8584667155905255, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.0924863854138034, 14);
  sqcRYGate(q, -0.7918262178676369, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.4812651487758917, 1);
  sqcRYGate(q, 1.5722964493409988, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4992616232733822, 1);
  sqcRYGate(q, 1.569254310796214, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5703243678981795, 3);
  sqcRYGate(q, 1.577884684248274, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1354398353318835, 3);
  sqcRYGate(q, 1.5795999200980484, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.571414713138986, 5);
  sqcRYGate(q, 1.566133285111822, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.511848938196418, 5);
  sqcRYGate(q, -2.7721988547014305, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5729857625207897, 7);
  sqcRYGate(q, 1.566812471183838, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.7606776058094677, 7);
  sqcRYGate(q, 0.3773050130658912, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5706248683205652, 9);
  sqcRYGate(q, -1.523370823904239, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.289668872730335, 9);
  sqcRYGate(q, -1.5739107042250962, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5711068308777811, 11);
  sqcRYGate(q, -1.5902161222110953, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.24921436551397225, 11);
  sqcRYGate(q, -1.6601115194083256, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5751932341645745, 13);
  sqcRYGate(q, -0.7194162901856437, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.4824662342875534, 13);
  sqcRYGate(q, 0.544737739143526, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.314436318009212, 0);
  sqcRYGate(q, 0.5900464504150658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1339899601853154, 0);
  sqcRYGate(q, -1.5715140291841523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.003559696917734551, 2);
  sqcRYGate(q, 1.5691662418488468, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.008466586820079947, 2);
  sqcRYGate(q, -1.5716781777399738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.570200678938381, 4);
  sqcRYGate(q, 1.47473920419756, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.138207122410689, 4);
  sqcRYGate(q, -1.4972649350706284, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.042589832328978, 6);
  sqcRYGate(q, 1.5733465626782301, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5788100023162275, 6);
  sqcRYGate(q, -1.4779879361548593, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.079230956505368, 8);
  sqcRYGate(q, -1.7038991994175534, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.01661504355127491, 8);
  sqcRYGate(q, -1.5714904228572095, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5688411984185584, 10);
  sqcRYGate(q, 1.5685953567895652, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.4406231899889983, 10);
  sqcRYGate(q, 0.460522536144099, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5891372483006982, 12);
  sqcRYGate(q, -1.5676937021379551, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.470331158658606, 12);
  sqcRYGate(q, 0.6881347553391655, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5768414684646572, 14);
  sqcRYGate(q, -0.8799794285258535, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.3720521171693415, 14);
  sqcRYGate(q, 1.4948617933447617, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.5840209911771083, 1);
  sqcRYGate(q, -2.0270125174870564, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1411718908149893, 1);
  sqcRYGate(q, -1.5712252704266696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0144067867958073, 3);
  sqcRYGate(q, 1.2806761671427198, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2348336471419725, 3);
  sqcRYGate(q, -0.010437726478471113, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.052526288472103, 5);
  sqcRYGate(q, -3.1308586787704518, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0845163412794245, 5);
  sqcRYGate(q, -0.07893770347713037, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.551793961936121, 7);
  sqcRYGate(q, 1.5269231355733224, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0019233317914888841, 7);
  sqcRYGate(q, 3.141131117918171, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.11224807820130508, 9);
  sqcRYGate(q, 1.562887051153938, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0172603251693966, 9);
  sqcRYGate(q, -0.13634581543851326, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5732522003742302, 11);
  sqcRYGate(q, -1.5637884405927354, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.526248820485118, 11);
  sqcRYGate(q, -1.546886254010924, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5725699980301913, 13);
  sqcRYGate(q, -1.7037854595647586, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.7668333263783432, 13);
  sqcRYGate(q, 0.8268647095571179, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.137628877235172, 0);
  sqcRYGate(q, -1.5727004106074247, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5759830656476952, 0);
  sqcRYGate(q, -1.5730802130046309, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1090741637171462, 2);
  sqcRYGate(q, 0.8186249609505278, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1364490530222335, 2);
  sqcRYGate(q, 0.38346973136007134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.051817449628928, 4);
  sqcRYGate(q, -2.257411464677704, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1363541237258383, 4);
  sqcRYGate(q, -0.0082903574225692, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5724423864451333, 6);
  sqcRYGate(q, -0.68821981368027, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0003204582914451137, 6);
  sqcRYGate(q, 1.6656607188147823, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9275572592755937, 8);
  sqcRYGate(q, -3.120561231924447, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5956704622189828, 8);
  sqcRYGate(q, -1.6078364675791736, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5059706641741908, 10);
  sqcRYGate(q, -2.6461220568159427, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.1413318920508013, 10);
  sqcRYGate(q, -3.1276197353697266, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5778790118868864, 12);
  sqcRYGate(q, -1.564467552706712, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.4406808650927392, 12);
  sqcRYGate(q, -1.5765114905090696, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.9040754406397102, 14);
  sqcRYGate(q, 2.1722818974092872, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.7231129556810878, 14);
  sqcRYGate(q, 3.0954919877502913, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.0739443347375826, 1);
  sqcRYGate(q, -1.5631314399289036, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5711803163588165, 1);
  sqcRYGate(q, -3.140661335925303, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.768431290521618, 3);
  sqcRYGate(q, 1.811948839561177, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.25922491204362613, 3);
  sqcRYGate(q, -1.5623681165501675, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1089609229774329, 5);
  sqcRYGate(q, 0.0774610161894327, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5093557941071614, 5);
  sqcRYGate(q, -3.125553294820379, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.013474592078609682, 7);
  sqcRYGate(q, -0.05088821244246741, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5336121387006783, 7);
  sqcRYGate(q, 0.005092525506627631, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.4432455041378258, 9);
  sqcRYGate(q, -1.6092481157477092, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.008379528802811897, 9);
  sqcRYGate(q, -3.1393823192882064, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.441035928755946, 11);
  sqcRYGate(q, 1.569080796213875, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.4451538897751521, 11);
  sqcRYGate(q, 0.09968487544259211, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5699101648392229, 13);
  sqcRYGate(q, -1.31099110251452, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.620043411416768, 13);
  sqcRYGate(q, -1.5795832387912219, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.0011775426732950581, 0);
  sqcRYGate(q, 2.0678579359203333, 1);
  sqcRYGate(q, -3.1413397429916285, 2);
  sqcRYGate(q, -1.577855618587579, 3);
  sqcRYGate(q, -2.068277678293593, 4);
  sqcRYGate(q, 1.1425337960690465, 5);
  sqcRYGate(q, -2.0874146392752553, 6);
  sqcRYGate(q, 1.2526296860510462, 7);
  sqcRYGate(q, -0.0023360778669141574, 8);
  sqcRYGate(q, 0.44556721306226305, 9);
  sqcRYGate(q, 3.113483330724151, 10);
  sqcRYGate(q, 1.623842980966935, 11);
  sqcRYGate(q, -0.0010342028905018848, 12);
  sqcRYGate(q, -1.5689586817789065, 13);
  sqcRYGate(q, -3.1359089274398313, 14);
  sqcRYGate(q, -1.7043197325956387, 15);

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
