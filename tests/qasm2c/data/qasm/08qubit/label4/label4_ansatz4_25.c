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

  sqcRYGate(q, -0.5253625899040095, 0);
  sqcRZGate(q, 3.1179368286379607, 0);
  sqcRYGate(q, -3.092584962172223, 1);
  sqcRZGate(q, -2.5389483515479143, 1);
  sqcRYGate(q, 1.41537356226034, 2);
  sqcRZGate(q, 1.7759685483960275, 2);
  sqcRYGate(q, -1.789153888065318, 3);
  sqcRZGate(q, 2.2882670654028976, 3);
  sqcRYGate(q, -0.36103329572981924, 4);
  sqcRZGate(q, -2.7352315532400544, 4);
  sqcRYGate(q, -0.5939348578728972, 5);
  sqcRZGate(q, -2.8375495775832382, 5);
  sqcRYGate(q, -1.2279991746440488, 6);
  sqcRZGate(q, -1.6533705561161365, 6);
  sqcRYGate(q, 0.3102017202709105, 7);
  sqcRZGate(q, -0.2760348940143658, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.2593122554550172, 0);
  sqcRZGate(q, 2.446715028457014, 0);
  sqcRYGate(q, 1.1517599222730563, 1);
  sqcRZGate(q, -1.815174422209381, 1);
  sqcRYGate(q, 1.4003513836462869, 2);
  sqcRZGate(q, 1.7488829878951617, 2);
  sqcRYGate(q, -2.9433177091595835, 3);
  sqcRZGate(q, 2.1921483245949336, 3);
  sqcRYGate(q, -2.4248127762180065, 4);
  sqcRZGate(q, -0.8560047308726187, 4);
  sqcRYGate(q, 2.7474895909102326, 5);
  sqcRZGate(q, -0.8957972189177741, 5);
  sqcRYGate(q, 2.3332676710358013, 6);
  sqcRZGate(q, -1.3900963543507447, 6);
  sqcRYGate(q, 1.3833264711279805, 7);
  sqcRZGate(q, -0.6805799029468262, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.8015322541064949, 0);
  sqcRZGate(q, -2.429719161567861, 0);
  sqcRYGate(q, 1.6073436960071559, 1);
  sqcRZGate(q, -1.91270632446924, 1);
  sqcRYGate(q, -0.6732129454313744, 2);
  sqcRZGate(q, 1.2953860902857137, 2);
  sqcRYGate(q, 2.3864215958698294, 3);
  sqcRZGate(q, 0.9678915069490994, 3);
  sqcRYGate(q, -0.7239354951537011, 4);
  sqcRZGate(q, 2.6126518406978376, 4);
  sqcRYGate(q, -1.0589046196614387, 5);
  sqcRZGate(q, 1.0433135548655723, 5);
  sqcRYGate(q, 1.772658928336174, 6);
  sqcRZGate(q, -2.1512949005842996, 6);
  sqcRYGate(q, -0.7350987998186844, 7);
  sqcRZGate(q, -0.5969438968880016, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5841101727781757, 0);
  sqcRZGate(q, -1.5897859954394915, 0);
  sqcRYGate(q, -2.1357107322754985, 1);
  sqcRZGate(q, 1.3642921140758641, 1);
  sqcRYGate(q, -1.1572961566295126, 2);
  sqcRZGate(q, -1.2561559640922362, 2);
  sqcRYGate(q, 0.41350779451680936, 3);
  sqcRZGate(q, 0.7833267971454908, 3);
  sqcRYGate(q, -1.2613010611296414, 4);
  sqcRZGate(q, 0.34271829024953626, 4);
  sqcRYGate(q, -0.7384968822336253, 5);
  sqcRZGate(q, 1.8785739929482554, 5);
  sqcRYGate(q, 1.137529960895907, 6);
  sqcRZGate(q, 2.77829358684367, 6);
  sqcRYGate(q, -2.60133310080408, 7);
  sqcRZGate(q, -1.6870865047438575, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.4242331431908615, 0);
  sqcRZGate(q, 1.2567011329574855, 0);
  sqcRYGate(q, -1.283213085835385, 1);
  sqcRZGate(q, 2.8994034503807136, 1);
  sqcRYGate(q, -0.20093470600139884, 2);
  sqcRZGate(q, 0.5054039474550668, 2);
  sqcRYGate(q, 2.8747322425239843, 3);
  sqcRZGate(q, 0.9923244766454951, 3);
  sqcRYGate(q, 0.5224424251593467, 4);
  sqcRZGate(q, 0.40362015624259834, 4);
  sqcRYGate(q, -1.409166195531461, 5);
  sqcRZGate(q, -2.791721554236818, 5);
  sqcRYGate(q, -2.3090659537474805, 6);
  sqcRZGate(q, 0.8654964114222106, 6);
  sqcRYGate(q, -0.47578044459139057, 7);
  sqcRZGate(q, -2.4981805429240165, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.87715181156834, 0);
  sqcRZGate(q, 1.9656010439341214, 0);
  sqcRYGate(q, 2.2973621245229463, 1);
  sqcRZGate(q, 1.6301471652796071, 1);
  sqcRYGate(q, -0.9806883751853341, 2);
  sqcRZGate(q, 2.282757122907854, 2);
  sqcRYGate(q, -1.6394324491222907, 3);
  sqcRZGate(q, 0.8587508437732289, 3);
  sqcRYGate(q, 0.2563211676629962, 4);
  sqcRZGate(q, -2.9727339969482087, 4);
  sqcRYGate(q, -0.09974819047958766, 5);
  sqcRZGate(q, -1.9828492296760887, 5);
  sqcRYGate(q, -2.426312120007748, 6);
  sqcRZGate(q, 1.8063289340538757, 6);
  sqcRYGate(q, -0.4985421652999498, 7);
  sqcRZGate(q, 2.0398042319553245, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6717241933888358, 0);
  sqcRZGate(q, -0.6446103178784798, 0);
  sqcRYGate(q, 0.21940587979931436, 1);
  sqcRZGate(q, -2.1948618977728724, 1);
  sqcRYGate(q, 1.9573250805872586, 2);
  sqcRZGate(q, -2.256938197146183, 2);
  sqcRYGate(q, 0.08059396067975033, 3);
  sqcRZGate(q, 2.9734366513018524, 3);
  sqcRYGate(q, -2.8564289659333393, 4);
  sqcRZGate(q, 1.151096524098945, 4);
  sqcRYGate(q, -2.3815643031537017, 5);
  sqcRZGate(q, 0.7410710461411201, 5);
  sqcRYGate(q, 0.4632839303827119, 6);
  sqcRZGate(q, 2.014749715590829, 6);
  sqcRYGate(q, -2.3737567816544707, 7);
  sqcRZGate(q, -1.6856645558994596, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.448354447238193, 0);
  sqcRZGate(q, -0.8059311725073313, 0);
  sqcRYGate(q, -2.854495149479066, 1);
  sqcRZGate(q, 1.5849866771994083, 1);
  sqcRYGate(q, -1.8234895715943367, 2);
  sqcRZGate(q, -2.0329343444761676, 2);
  sqcRYGate(q, 0.35772972715226004, 3);
  sqcRZGate(q, 0.12369246586651172, 3);
  sqcRYGate(q, 2.078229624349432, 4);
  sqcRZGate(q, 2.242188140893357, 4);
  sqcRYGate(q, -1.8678906829602973, 5);
  sqcRZGate(q, -1.0411936395250674, 5);
  sqcRYGate(q, -1.519404879382523, 6);
  sqcRZGate(q, 0.6539587614261425, 6);
  sqcRYGate(q, -2.333191117841347, 7);
  sqcRZGate(q, -2.5604109285698544, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.9677673100143345, 0);
  sqcRZGate(q, -1.3951436343625776, 0);
  sqcRYGate(q, 0.26005746363422677, 1);
  sqcRZGate(q, -0.6627735938547517, 1);
  sqcRYGate(q, 2.2614685423795127, 2);
  sqcRZGate(q, -1.638556179611161, 2);
  sqcRYGate(q, 2.0490243859510313, 3);
  sqcRZGate(q, 1.3259121690422315, 3);
  sqcRYGate(q, -1.3184383087245397, 4);
  sqcRZGate(q, -1.373359527631439, 4);
  sqcRYGate(q, 1.82383722382965, 5);
  sqcRZGate(q, -1.161322352659944, 5);
  sqcRYGate(q, -3.0691967621079557, 6);
  sqcRZGate(q, 1.306646630413101, 6);
  sqcRYGate(q, -2.761685118926186, 7);
  sqcRZGate(q, 2.4075972727349106, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6501654121074951, 0);
  sqcRZGate(q, -0.7472471553674244, 0);
  sqcRYGate(q, 2.6277148037395213, 1);
  sqcRZGate(q, 1.1619785910263989, 1);
  sqcRYGate(q, 0.796875346563494, 2);
  sqcRZGate(q, -1.2073880599626854, 2);
  sqcRYGate(q, 1.5054901003249381, 3);
  sqcRZGate(q, 2.7264023441014498, 3);
  sqcRYGate(q, -1.906813322488083, 4);
  sqcRZGate(q, 2.6159270326200663, 4);
  sqcRYGate(q, -2.984774097134652, 5);
  sqcRZGate(q, -0.7804014199948085, 5);
  sqcRYGate(q, 0.6850003484412346, 6);
  sqcRZGate(q, -2.0444261033560505, 6);
  sqcRYGate(q, -0.7715070529711641, 7);
  sqcRZGate(q, -1.0248139843924398, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.8986975401029493, 0);
  sqcRZGate(q, -0.08888261619476871, 0);
  sqcRYGate(q, 2.877704513963838, 1);
  sqcRZGate(q, 0.27806909032612354, 1);
  sqcRYGate(q, 1.2562501794117888, 2);
  sqcRZGate(q, -2.6469014448873565, 2);
  sqcRYGate(q, -1.3286799083697247, 3);
  sqcRZGate(q, 2.124522019052832, 3);
  sqcRYGate(q, -0.7335641839856264, 4);
  sqcRZGate(q, 2.6917432305767424, 4);
  sqcRYGate(q, 2.1159368521947854, 5);
  sqcRZGate(q, -1.247222380981925, 5);
  sqcRYGate(q, -1.3890733085457951, 6);
  sqcRZGate(q, 0.24419574184332388, 6);
  sqcRYGate(q, 0.807742306050351, 7);
  sqcRZGate(q, 1.741750254396587, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.866990754206057, 0);
  sqcRZGate(q, -1.709165664175785, 0);
  sqcRYGate(q, -2.607583995225863, 1);
  sqcRZGate(q, 2.1173767725581447, 1);
  sqcRYGate(q, 0.8038484946670099, 2);
  sqcRZGate(q, -2.6236601979665295, 2);
  sqcRYGate(q, -1.4329237859441575, 3);
  sqcRZGate(q, 1.0935506913519737, 3);
  sqcRYGate(q, -0.13643133801019935, 4);
  sqcRZGate(q, -1.7175593824653004, 4);
  sqcRYGate(q, 2.4858763946456697, 5);
  sqcRZGate(q, -2.688715296368477, 5);
  sqcRYGate(q, 1.9563753429201851, 6);
  sqcRZGate(q, 0.31845550422015867, 6);
  sqcRYGate(q, 0.5435452544117338, 7);
  sqcRZGate(q, -2.6700271109339506, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.030854829438937, 0);
  sqcRZGate(q, -2.5395289553255744, 0);
  sqcRYGate(q, -2.590897774040764, 1);
  sqcRZGate(q, -1.0202381498386925, 1);
  sqcRYGate(q, -0.5711246118930935, 2);
  sqcRZGate(q, 0.7508057728384665, 2);
  sqcRYGate(q, 2.615968180468792, 3);
  sqcRZGate(q, 0.5826911294822533, 3);
  sqcRYGate(q, -2.8114386747832136, 4);
  sqcRZGate(q, 1.2188314909448592, 4);
  sqcRYGate(q, 1.3317057602567193, 5);
  sqcRZGate(q, -2.6443031107865416, 5);
  sqcRYGate(q, 2.4895148850417312, 6);
  sqcRZGate(q, 0.11287665523122702, 6);
  sqcRYGate(q, -0.29690054504590174, 7);
  sqcRZGate(q, 1.0733883063305567, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6046504873759151, 0);
  sqcRZGate(q, -3.020493437731642, 0);
  sqcRYGate(q, 0.14119708575672402, 1);
  sqcRZGate(q, 1.0938196648588698, 1);
  sqcRYGate(q, 0.913133140352221, 2);
  sqcRZGate(q, 1.6181195886143804, 2);
  sqcRYGate(q, -0.9376229275769306, 3);
  sqcRZGate(q, 0.9200134504577417, 3);
  sqcRYGate(q, -0.6084981068041282, 4);
  sqcRZGate(q, -0.39148195770535094, 4);
  sqcRYGate(q, 2.2781154075932406, 5);
  sqcRZGate(q, 3.1099421336817406, 5);
  sqcRYGate(q, 2.091566717804559, 6);
  sqcRZGate(q, -0.8460820156263564, 6);
  sqcRYGate(q, 2.9186363910866, 7);
  sqcRZGate(q, -0.8026167478262317, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.6701548519438014, 0);
  sqcRZGate(q, -2.7260278090115406, 0);
  sqcRYGate(q, 1.5866951047897082, 1);
  sqcRZGate(q, -2.5218630234153228, 1);
  sqcRYGate(q, 3.054143650787472, 2);
  sqcRZGate(q, 1.5884017604846887, 2);
  sqcRYGate(q, -1.3536246017550673, 3);
  sqcRZGate(q, -0.3284399552423584, 3);
  sqcRYGate(q, 1.3835471949953222, 4);
  sqcRZGate(q, -2.5422321528902816, 4);
  sqcRYGate(q, 2.501037709387195, 5);
  sqcRZGate(q, -0.45539928000829416, 5);
  sqcRYGate(q, 2.4480587729426984, 6);
  sqcRZGate(q, 2.221159996708387, 6);
  sqcRYGate(q, 2.0725632651846695, 7);
  sqcRZGate(q, 0.5015456668710145, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9997770531129458, 0);
  sqcRZGate(q, -0.9148127612951287, 0);
  sqcRYGate(q, 0.6139125029902739, 1);
  sqcRZGate(q, -3.0787499939500815, 1);
  sqcRYGate(q, 0.8144513696868128, 2);
  sqcRZGate(q, -1.1115646505006493, 2);
  sqcRYGate(q, 2.9065260614009785, 3);
  sqcRZGate(q, -1.3498902303704154, 3);
  sqcRYGate(q, 1.3491210890488219, 4);
  sqcRZGate(q, -0.5261929686198781, 4);
  sqcRYGate(q, -2.1021869884029156, 5);
  sqcRZGate(q, -3.08697189343642, 5);
  sqcRYGate(q, -0.7611363113077694, 6);
  sqcRZGate(q, 2.7678917101778078, 6);
  sqcRYGate(q, 2.292734448157558, 7);
  sqcRZGate(q, 1.739126505704068, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.3829415400530265, 0);
  sqcRZGate(q, 2.7555789933809844, 0);
  sqcRYGate(q, -1.4973725977487096, 1);
  sqcRZGate(q, -1.6076843277109836, 1);
  sqcRYGate(q, 2.0374752428880614, 2);
  sqcRZGate(q, -2.107251863538183, 2);
  sqcRYGate(q, -2.130228353901279, 3);
  sqcRZGate(q, -2.8898204473773563, 3);
  sqcRYGate(q, 2.112151531476327, 4);
  sqcRZGate(q, 0.0749994060991941, 4);
  sqcRYGate(q, -0.4219987780888396, 5);
  sqcRZGate(q, 2.7321558217504234, 5);
  sqcRYGate(q, -1.1012834988464, 6);
  sqcRZGate(q, 2.4965068386265092, 6);
  sqcRYGate(q, 0.4260686266483731, 7);
  sqcRZGate(q, 0.6054637520309928, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8497983880959563, 0);
  sqcRZGate(q, 2.778396327661596, 0);
  sqcRYGate(q, -0.6985887132504737, 1);
  sqcRZGate(q, 0.44943901330098335, 1);
  sqcRYGate(q, -0.4982461559638711, 2);
  sqcRZGate(q, 0.9438808183533967, 2);
  sqcRYGate(q, -0.7637174339955815, 3);
  sqcRZGate(q, 2.3667876005198067, 3);
  sqcRYGate(q, 0.5683352015088139, 4);
  sqcRZGate(q, 2.6349798728627607, 4);
  sqcRYGate(q, -1.2982019596173817, 5);
  sqcRZGate(q, -2.8659354428942447, 5);
  sqcRYGate(q, 1.194612134103477, 6);
  sqcRZGate(q, 0.4507451931287303, 6);
  sqcRYGate(q, -1.3732166527295604, 7);
  sqcRZGate(q, -2.5357256937665893, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4486549598342098, 0);
  sqcRZGate(q, -1.6916327872800105, 0);
  sqcRYGate(q, -0.4019346978404963, 1);
  sqcRZGate(q, 2.1282029798789903, 1);
  sqcRYGate(q, 0.5374529275751208, 2);
  sqcRZGate(q, -2.3130344893474546, 2);
  sqcRYGate(q, 1.473881138272228, 3);
  sqcRZGate(q, 0.17798512178538084, 3);
  sqcRYGate(q, -2.567719407907476, 4);
  sqcRZGate(q, -1.2318797745534258, 4);
  sqcRYGate(q, -1.1281517017775435, 5);
  sqcRZGate(q, 0.40171075702766856, 5);
  sqcRYGate(q, 2.8398400238975445, 6);
  sqcRZGate(q, 0.5654960169499846, 6);
  sqcRYGate(q, -1.6696391609340653, 7);
  sqcRZGate(q, 0.4454909479538296, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.703056553342655, 0);
  sqcRZGate(q, 0.9982625018756671, 0);
  sqcRYGate(q, -2.8587132324698685, 1);
  sqcRZGate(q, -2.8636135675328225, 1);
  sqcRYGate(q, 2.420453301768624, 2);
  sqcRZGate(q, 0.14815136791573646, 2);
  sqcRYGate(q, -2.6731734645811267, 3);
  sqcRZGate(q, -1.9473845885632555, 3);
  sqcRYGate(q, -2.8958533821647854, 4);
  sqcRZGate(q, 0.07401573189267108, 4);
  sqcRYGate(q, -1.9355102130881068, 5);
  sqcRZGate(q, -1.301134817602312, 5);
  sqcRYGate(q, -0.4191044463202997, 6);
  sqcRZGate(q, -2.2371782404352283, 6);
  sqcRYGate(q, 0.3991961996275295, 7);
  sqcRZGate(q, 0.24810567200260095, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9821485015862828, 0);
  sqcRZGate(q, -1.3633606243927798, 0);
  sqcRYGate(q, 2.8496745400027246, 1);
  sqcRZGate(q, 0.5639119227314495, 1);
  sqcRYGate(q, 1.0241044613103647, 2);
  sqcRZGate(q, 2.0491106082211825, 2);
  sqcRYGate(q, -0.6847444765544974, 3);
  sqcRZGate(q, -0.7415568195286986, 3);
  sqcRYGate(q, -2.011895049936542, 4);
  sqcRZGate(q, 0.09699690216994099, 4);
  sqcRYGate(q, 1.3116114480511518, 5);
  sqcRZGate(q, 2.696848917054341, 5);
  sqcRYGate(q, -0.5756930778295074, 6);
  sqcRZGate(q, -0.11642221504050188, 6);
  sqcRYGate(q, -1.0894764856226855, 7);
  sqcRZGate(q, -0.011686255386330835, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8822603174259454, 0);
  sqcRZGate(q, -1.3223834352685004, 0);
  sqcRYGate(q, -2.875551862315536, 1);
  sqcRZGate(q, -0.8671559744960228, 1);
  sqcRYGate(q, -1.0195513699990486, 2);
  sqcRZGate(q, -0.7402558409848654, 2);
  sqcRYGate(q, -1.8476115542690401, 3);
  sqcRZGate(q, 1.7964600842295895, 3);
  sqcRYGate(q, -0.28037799257557766, 4);
  sqcRZGate(q, -2.0664666546495183, 4);
  sqcRYGate(q, 1.1710688546374413, 5);
  sqcRZGate(q, -1.0063523651285893, 5);
  sqcRYGate(q, 1.7495495983922609, 6);
  sqcRZGate(q, -2.1853824597885874, 6);
  sqcRYGate(q, 1.899272298205123, 7);
  sqcRZGate(q, -3.0699773628895373, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.3744664779675904, 0);
  sqcRZGate(q, -1.0561661411164571, 0);
  sqcRYGate(q, -0.6388443755222926, 1);
  sqcRZGate(q, 1.564771875472266, 1);
  sqcRYGate(q, -0.4125070970190121, 2);
  sqcRZGate(q, 0.7195254687953945, 2);
  sqcRYGate(q, -0.7256129191162021, 3);
  sqcRZGate(q, 0.8818675741951962, 3);
  sqcRYGate(q, 2.2422058597556607, 4);
  sqcRZGate(q, -0.9894943617428772, 4);
  sqcRYGate(q, 2.2371104707608596, 5);
  sqcRZGate(q, -2.9294666903344053, 5);
  sqcRYGate(q, 1.1016798329989523, 6);
  sqcRZGate(q, 2.4690331387359628, 6);
  sqcRYGate(q, 0.15697042436008246, 7);
  sqcRZGate(q, -1.1034536107886144, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8815453371524713, 0);
  sqcRZGate(q, 0.14750602506265953, 0);
  sqcRYGate(q, 2.6143566741997546, 1);
  sqcRZGate(q, 0.5334698430474804, 1);
  sqcRYGate(q, -0.9583952522328651, 2);
  sqcRZGate(q, 2.7702354330977013, 2);
  sqcRYGate(q, -3.052585062754837, 3);
  sqcRZGate(q, -0.41820493559002525, 3);
  sqcRYGate(q, -2.7245068693407974, 4);
  sqcRZGate(q, -2.6349424027469905, 4);
  sqcRYGate(q, 2.742299388838073, 5);
  sqcRZGate(q, -1.0094962103310499, 5);
  sqcRYGate(q, -0.4777930816216035, 6);
  sqcRZGate(q, 3.1403712007728717, 6);
  sqcRYGate(q, 0.5597272235489417, 7);
  sqcRZGate(q, 0.8289059239060554, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9680269987051737, 0);
  sqcRZGate(q, 0.5661245891268876, 0);
  sqcRYGate(q, -1.2352689222759619, 1);
  sqcRZGate(q, -2.532460340028912, 1);
  sqcRYGate(q, -1.6667063966056503, 2);
  sqcRZGate(q, 0.5123571575289734, 2);
  sqcRYGate(q, -3.0904954148007913, 3);
  sqcRZGate(q, 2.8631953077002343, 3);
  sqcRYGate(q, 1.7440629695233945, 4);
  sqcRZGate(q, -2.2994921920881084, 4);
  sqcRYGate(q, -2.8757498914577253, 5);
  sqcRZGate(q, -2.4215350785899057, 5);
  sqcRYGate(q, 1.347747731629682, 6);
  sqcRZGate(q, -0.253473956310307, 6);
  sqcRYGate(q, 2.521233721303049, 7);
  sqcRZGate(q, -1.7914134261938646, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.544575478106066, 0);
  sqcRZGate(q, 0.1232771749277717, 0);
  sqcRYGate(q, 2.7165129296799435, 1);
  sqcRZGate(q, 0.2221557698925867, 1);
  sqcRYGate(q, 0.9846343883803677, 2);
  sqcRZGate(q, -1.6061706887570097, 2);
  sqcRYGate(q, -2.264454051530614, 3);
  sqcRZGate(q, -2.9886679300732215, 3);
  sqcRYGate(q, 0.7583895653176036, 4);
  sqcRZGate(q, -0.3881576060000975, 4);
  sqcRYGate(q, 0.6897980657956696, 5);
  sqcRZGate(q, -0.08647755447297988, 5);
  sqcRYGate(q, 0.9777242669283108, 6);
  sqcRZGate(q, 1.349240414797599, 6);
  sqcRYGate(q, -1.898812920357796, 7);
  sqcRZGate(q, 2.957462153597334, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8399881059024343, 0);
  sqcRZGate(q, 1.820048067129098, 0);
  sqcRYGate(q, 1.5342025821181733, 1);
  sqcRZGate(q, 3.115759588427308, 1);
  sqcRYGate(q, 1.096196209205982, 2);
  sqcRZGate(q, -2.3970702368240997, 2);
  sqcRYGate(q, 1.3679098475326423, 3);
  sqcRZGate(q, 0.09034989299026842, 3);
  sqcRYGate(q, 1.7894780928472518, 4);
  sqcRZGate(q, 1.6826494120510571, 4);
  sqcRYGate(q, -0.6577248097582611, 5);
  sqcRZGate(q, -2.5056564486726245, 5);
  sqcRYGate(q, -0.3107631047182106, 6);
  sqcRZGate(q, 0.6187825052672355, 6);
  sqcRYGate(q, -1.739294918535271, 7);
  sqcRZGate(q, -1.8598417330683752, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.7566172366306327, 0);
  sqcRZGate(q, -2.972268031881551, 0);
  sqcRYGate(q, 2.2189108823130637, 1);
  sqcRZGate(q, 1.2129619357135848, 1);
  sqcRYGate(q, -1.5089101929134996, 2);
  sqcRZGate(q, -2.9898927312848635, 2);
  sqcRYGate(q, 2.648024854953454, 3);
  sqcRZGate(q, -2.4000290297667455, 3);
  sqcRYGate(q, -1.4217723114880334, 4);
  sqcRZGate(q, 0.5544382870669531, 4);
  sqcRYGate(q, -2.44489567133513, 5);
  sqcRZGate(q, 1.5517913277097273, 5);
  sqcRYGate(q, -2.1817223605833354, 6);
  sqcRZGate(q, -2.1250855610780555, 6);
  sqcRYGate(q, -1.7970513086665942, 7);
  sqcRZGate(q, 0.8079594377553985, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.5300527668264403, 0);
  sqcRZGate(q, -2.1625219820576635, 0);
  sqcRYGate(q, 1.5542079876906298, 1);
  sqcRZGate(q, -0.41310604454992195, 1);
  sqcRYGate(q, 0.3965526914759418, 2);
  sqcRZGate(q, 2.051432319586839, 2);
  sqcRYGate(q, -2.7004961731714667, 3);
  sqcRZGate(q, -0.04903026645782039, 3);
  sqcRYGate(q, 2.4132388253661166, 4);
  sqcRZGate(q, 2.244720584174699, 4);
  sqcRYGate(q, 2.8421222669230937, 5);
  sqcRZGate(q, 0.37009887954423615, 5);
  sqcRYGate(q, -2.1257318819058475, 6);
  sqcRZGate(q, -1.321727943236477, 6);
  sqcRYGate(q, -2.20768809694046, 7);
  sqcRZGate(q, 0.6239317379979626, 7);

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
