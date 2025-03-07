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

  sqcRYGate(q, -3.1112203510016987, 0);
  sqcRZGate(q, 2.1869533963461905, 0);
  sqcRYGate(q, 1.895516138319742, 1);
  sqcRZGate(q, -1.7100719152101265, 1);
  sqcRYGate(q, 3.078075258397482, 2);
  sqcRZGate(q, -3.0992907995848333, 2);
  sqcRYGate(q, 0.0012760960205187844, 3);
  sqcRZGate(q, -0.5792291021932456, 3);
  sqcRYGate(q, 2.115420745920865, 4);
  sqcRZGate(q, -1.345435847536229, 4);
  sqcRYGate(q, 1.7557955431765346, 5);
  sqcRZGate(q, 0.1340340464907426, 5);
  sqcRYGate(q, 0.6608281634373894, 6);
  sqcRZGate(q, 1.7650758877517783, 6);
  sqcRYGate(q, -2.954188519345559, 7);
  sqcRZGate(q, -1.3651193234930499, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.0985615655037924, 0);
  sqcRZGate(q, -0.7578177915211741, 0);
  sqcRYGate(q, -0.08159052649955889, 1);
  sqcRZGate(q, -0.10200876741164144, 1);
  sqcRYGate(q, 3.1354643052578934, 2);
  sqcRZGate(q, -2.520178607430484, 2);
  sqcRYGate(q, -0.006663603824908336, 3);
  sqcRZGate(q, -1.2022255746590578, 3);
  sqcRYGate(q, -1.1975518591781935, 4);
  sqcRZGate(q, -2.8381231238871907, 4);
  sqcRYGate(q, -0.6776832277070907, 5);
  sqcRZGate(q, -2.269463155028222, 5);
  sqcRYGate(q, -0.592233690149376, 6);
  sqcRZGate(q, 1.382354310814491, 6);
  sqcRYGate(q, 3.0307820147912254, 7);
  sqcRZGate(q, -2.057100224722837, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.3560250788254393, 0);
  sqcRZGate(q, -2.645505756490716, 0);
  sqcRYGate(q, 2.646054143087138, 1);
  sqcRZGate(q, 1.3844491548018487, 1);
  sqcRYGate(q, 0.0653745415531322, 2);
  sqcRZGate(q, 1.7557276750905442, 2);
  sqcRYGate(q, 3.138694243061381, 3);
  sqcRZGate(q, 0.02584872487090184, 3);
  sqcRYGate(q, 2.437278449088524, 4);
  sqcRZGate(q, 0.822759943437779, 4);
  sqcRYGate(q, 1.037086374965165, 5);
  sqcRZGate(q, 1.5876169081721014, 5);
  sqcRYGate(q, 1.2287056274132158, 6);
  sqcRZGate(q, 1.1494446734886603, 6);
  sqcRYGate(q, 3.112512630205988, 7);
  sqcRZGate(q, -1.5417559277006783, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7652224412220416, 0);
  sqcRZGate(q, -0.5491365308031364, 0);
  sqcRYGate(q, -2.096477697855703, 1);
  sqcRZGate(q, 1.652338641521543, 1);
  sqcRYGate(q, 0.0017129036357209787, 2);
  sqcRZGate(q, 2.990157146271084, 2);
  sqcRYGate(q, -2.1142304905506273, 3);
  sqcRZGate(q, -0.004195842684280286, 3);
  sqcRYGate(q, 1.8272262986700767, 4);
  sqcRZGate(q, -2.117911967541713, 4);
  sqcRYGate(q, 0.44162471845130913, 5);
  sqcRZGate(q, -2.561793980040424, 5);
  sqcRYGate(q, 1.675223432851895, 6);
  sqcRZGate(q, 2.792217313609695, 6);
  sqcRYGate(q, 1.6993287010246974, 7);
  sqcRZGate(q, 2.6934884976774005, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.9800550703998474, 0);
  sqcRZGate(q, -0.9936153126314226, 0);
  sqcRYGate(q, 1.7024285795740337, 1);
  sqcRZGate(q, 1.8684999194392944, 1);
  sqcRYGate(q, -0.00043054201993877726, 2);
  sqcRZGate(q, -0.21862838102250734, 2);
  sqcRYGate(q, 2.1052507058758803, 3);
  sqcRZGate(q, 0.00615027826044435, 3);
  sqcRYGate(q, -0.010826437812820404, 4);
  sqcRZGate(q, -1.691335560511802, 4);
  sqcRYGate(q, -2.188625800288177, 5);
  sqcRZGate(q, 2.323810612912844, 5);
  sqcRYGate(q, 1.7501475373671993, 6);
  sqcRZGate(q, 3.119261781716413, 6);
  sqcRYGate(q, 2.224117742117872, 7);
  sqcRZGate(q, 0.837944840231536, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4604720623477272, 0);
  sqcRZGate(q, 2.8426289899679653, 0);
  sqcRYGate(q, -1.894264303648069, 1);
  sqcRZGate(q, -1.2851624606232077, 1);
  sqcRYGate(q, 0.00015067584168892975, 2);
  sqcRZGate(q, 2.503952313456911, 2);
  sqcRYGate(q, 2.1310717450733287, 3);
  sqcRZGate(q, 3.14083480264541, 3);
  sqcRYGate(q, 2.172605505991787, 4);
  sqcRZGate(q, -3.1208295156937575, 4);
  sqcRYGate(q, -1.145371022732136, 5);
  sqcRZGate(q, -1.124493367001214, 5);
  sqcRYGate(q, 1.0849329948328785, 6);
  sqcRZGate(q, -2.5873905577953193, 6);
  sqcRYGate(q, -0.9769865075580392, 7);
  sqcRZGate(q, 2.549456070568801, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.09447097204518773, 0);
  sqcRZGate(q, -1.6855834808218138, 0);
  sqcRYGate(q, -1.3990178380684277, 1);
  sqcRZGate(q, 2.5113302535501068, 1);
  sqcRYGate(q, -3.0390288512875463, 2);
  sqcRZGate(q, 2.2362308169041407, 2);
  sqcRYGate(q, 2.357725674473664, 3);
  sqcRZGate(q, -0.9725619275802079, 3);
  sqcRYGate(q, -2.0786671399685135, 4);
  sqcRZGate(q, -0.0039053376118023415, 4);
  sqcRYGate(q, 3.1408533111518526, 5);
  sqcRZGate(q, -2.3534602915689486, 5);
  sqcRYGate(q, -0.09513021811345213, 6);
  sqcRZGate(q, 2.6243226878084056, 6);
  sqcRYGate(q, -3.1121238233694295, 7);
  sqcRZGate(q, 0.33291277275689485, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.2747538162562485, 0);
  sqcRZGate(q, 2.7946003262122097, 0);
  sqcRYGate(q, -0.7702447329655469, 1);
  sqcRZGate(q, 2.9655827262130963, 1);
  sqcRYGate(q, -0.6632946013761503, 2);
  sqcRZGate(q, -1.8097823675561475, 2);
  sqcRYGate(q, -2.119942534227306, 3);
  sqcRZGate(q, -2.566977393292997, 3);
  sqcRYGate(q, -0.7863407965588908, 4);
  sqcRZGate(q, -0.2535646511554528, 4);
  sqcRYGate(q, -0.0017725814954113754, 5);
  sqcRZGate(q, 1.6318176807569222, 5);
  sqcRYGate(q, -2.300849457707061, 6);
  sqcRZGate(q, -2.9105402772820073, 6);
  sqcRYGate(q, 1.078451635229098, 7);
  sqcRZGate(q, 2.498408602662128, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.7317762430669115, 0);
  sqcRZGate(q, -2.357315772037337, 0);
  sqcRYGate(q, 0.11342752824240025, 1);
  sqcRZGate(q, -1.4584648004910203, 1);
  sqcRYGate(q, 0.003022190533740421, 2);
  sqcRZGate(q, -0.5183150330220075, 2);
  sqcRYGate(q, 3.128043102348355, 3);
  sqcRZGate(q, -2.7370962292311836, 3);
  sqcRYGate(q, -0.0007584912417644658, 4);
  sqcRZGate(q, 0.6976676338727645, 4);
  sqcRYGate(q, 1.3465894794577777, 5);
  sqcRZGate(q, -2.8111184154287625, 5);
  sqcRYGate(q, 1.8514113566382446, 6);
  sqcRZGate(q, -2.8942065761014075, 6);
  sqcRYGate(q, 0.6946442118737082, 7);
  sqcRZGate(q, 1.87610183194349, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.3240851345834663, 0);
  sqcRZGate(q, -0.940496234111647, 0);
  sqcRYGate(q, -1.8665663747712715, 1);
  sqcRZGate(q, -1.9759771282950835, 1);
  sqcRYGate(q, -1.1025382083328623, 2);
  sqcRZGate(q, 2.71871533402246, 2);
  sqcRYGate(q, 2.273317361204362, 3);
  sqcRZGate(q, -2.140011661117131, 3);
  sqcRYGate(q, 1.324407754957475, 4);
  sqcRZGate(q, 0.02906656141384448, 4);
  sqcRYGate(q, -0.07165645645577534, 5);
  sqcRZGate(q, -1.452017836438895, 5);
  sqcRYGate(q, -0.13055007889100523, 6);
  sqcRZGate(q, 3.0657082680119996, 6);
  sqcRYGate(q, 0.19410065038548252, 7);
  sqcRZGate(q, 1.7487065739201055, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.6729101743378525, 0);
  sqcRZGate(q, 2.2761174822044596, 0);
  sqcRYGate(q, -1.934524204506548, 1);
  sqcRZGate(q, 0.8501287129736399, 1);
  sqcRYGate(q, -3.134858562224443, 2);
  sqcRZGate(q, -0.23607618335935937, 2);
  sqcRYGate(q, -3.141256850078317, 3);
  sqcRZGate(q, 1.5662078936305637, 3);
  sqcRYGate(q, -0.034109227992784596, 4);
  sqcRZGate(q, 2.498575044002134, 4);
  sqcRYGate(q, -3.1178954407392507, 5);
  sqcRZGate(q, -0.0028651768346932708, 5);
  sqcRYGate(q, 0.835577456907633, 6);
  sqcRZGate(q, 1.976080797897736, 6);
  sqcRYGate(q, -0.23728410515252563, 7);
  sqcRZGate(q, 1.8889830022087322, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.41031533068604453, 0);
  sqcRZGate(q, 2.268694770548633, 0);
  sqcRYGate(q, -1.6921413373158682, 1);
  sqcRZGate(q, -2.1368566668173417, 1);
  sqcRYGate(q, -2.204829198506755, 2);
  sqcRZGate(q, 2.6601148397559222, 2);
  sqcRYGate(q, -1.3477407554200758, 3);
  sqcRZGate(q, -2.0390491723550825, 3);
  sqcRYGate(q, -2.4444746805042077, 4);
  sqcRZGate(q, -1.1594619475788015, 4);
  sqcRYGate(q, 2.5134594243967086, 5);
  sqcRZGate(q, -0.5610374424173887, 5);
  sqcRYGate(q, 0.060276028569025364, 6);
  sqcRZGate(q, -0.31848715710263353, 6);
  sqcRYGate(q, 2.2512594381170774, 7);
  sqcRZGate(q, -0.0040855751598786304, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8130256907935018, 0);
  sqcRZGate(q, 0.5174461122779022, 0);
  sqcRYGate(q, -1.0787730827770785, 1);
  sqcRZGate(q, -0.5875788630802786, 1);
  sqcRYGate(q, 1.7013590161611845, 2);
  sqcRZGate(q, 1.373801126671263, 2);
  sqcRYGate(q, 0.000353433885715404, 3);
  sqcRZGate(q, -1.0232965634693185, 3);
  sqcRYGate(q, 3.138399651509921, 4);
  sqcRZGate(q, 2.8370802842257885, 4);
  sqcRYGate(q, 0.033894045019525094, 5);
  sqcRZGate(q, -2.5790051602499116, 5);
  sqcRYGate(q, -0.023077715800195055, 6);
  sqcRZGate(q, 2.108177251327752, 6);
  sqcRYGate(q, -1.9418232936259556, 7);
  sqcRZGate(q, 1.1175511577481076, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.6097000252528324, 0);
  sqcRZGate(q, -2.7972556034680607, 0);
  sqcRYGate(q, 0.05304704009445005, 1);
  sqcRZGate(q, -0.27302501812801283, 1);
  sqcRYGate(q, -0.04522158818427764, 2);
  sqcRZGate(q, -1.126925198889374, 2);
  sqcRYGate(q, 0.2666328407118122, 3);
  sqcRZGate(q, -2.6769773247416406, 3);
  sqcRYGate(q, -0.7968408669300161, 4);
  sqcRZGate(q, -2.4389178313052664, 4);
  sqcRYGate(q, -1.3744808425313477, 5);
  sqcRZGate(q, -0.4263329883979718, 5);
  sqcRYGate(q, 2.9422004037120124, 6);
  sqcRZGate(q, 2.6156317857726643, 6);
  sqcRYGate(q, -0.2378616854460729, 7);
  sqcRZGate(q, -0.07830036310312813, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.039420281166671955, 0);
  sqcRZGate(q, -0.9435062455815881, 0);
  sqcRYGate(q, 0.06212141334975192, 1);
  sqcRZGate(q, -3.1262215963171793, 1);
  sqcRYGate(q, 1.0765717229040568, 2);
  sqcRZGate(q, 2.837131611532543, 2);
  sqcRYGate(q, 3.1344098544605017, 3);
  sqcRZGate(q, 0.4046672532903077, 3);
  sqcRYGate(q, -3.141327733337754, 4);
  sqcRZGate(q, 1.018554564935604, 4);
  sqcRYGate(q, -1.5950953761511062, 5);
  sqcRZGate(q, 2.8618783259825644, 5);
  sqcRYGate(q, -0.13415451334563677, 6);
  sqcRZGate(q, 2.490765128852943, 6);
  sqcRYGate(q, -0.807862608388355, 7);
  sqcRZGate(q, -2.7448835811871253, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.2589760358629483, 0);
  sqcRZGate(q, -1.212289062241223, 0);
  sqcRYGate(q, 0.05092831490415506, 1);
  sqcRZGate(q, 3.072272953991778, 1);
  sqcRYGate(q, -2.31083317358386, 2);
  sqcRZGate(q, 0.37799166417070124, 2);
  sqcRYGate(q, 2.4624326814403936, 3);
  sqcRZGate(q, 2.144011793735454, 3);
  sqcRYGate(q, -3.135345476052236, 4);
  sqcRZGate(q, -0.5010029794313775, 4);
  sqcRYGate(q, -2.6421829923670193, 5);
  sqcRZGate(q, -0.5949060167010458, 5);
  sqcRYGate(q, -1.0969658467069425, 6);
  sqcRZGate(q, -2.099738056546871, 6);
  sqcRYGate(q, -2.6481214041457886, 7);
  sqcRZGate(q, -1.755522256364178, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.0463142290020357, 0);
  sqcRZGate(q, -2.893581244473245, 0);
  sqcRYGate(q, -1.7691221618644688, 1);
  sqcRZGate(q, -1.3713145375795504, 1);
  sqcRYGate(q, -2.6236211032095405, 2);
  sqcRZGate(q, 0.33189322854766395, 2);
  sqcRYGate(q, -3.110132537314351, 3);
  sqcRZGate(q, -0.541511551896125, 3);
  sqcRYGate(q, 0.00019105898069223285, 4);
  sqcRZGate(q, 0.34873154525499533, 4);
  sqcRYGate(q, 1.158088810299648, 5);
  sqcRZGate(q, 3.008466600430543, 5);
  sqcRYGate(q, -3.045119550215682, 6);
  sqcRZGate(q, 0.7115357825759907, 6);
  sqcRYGate(q, 2.824247315429852, 7);
  sqcRZGate(q, -2.0631564127119724, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.4790360085559238, 0);
  sqcRZGate(q, -1.7819019788696915, 0);
  sqcRYGate(q, 0.9423008212612762, 1);
  sqcRZGate(q, 1.0886910357097683, 1);
  sqcRYGate(q, -2.651793640010533, 2);
  sqcRZGate(q, -0.1288811704507049, 2);
  sqcRYGate(q, -0.688181829691148, 3);
  sqcRZGate(q, 1.2919347935831604, 3);
  sqcRYGate(q, -3.136646156699993, 4);
  sqcRZGate(q, -2.293037506811338, 4);
  sqcRYGate(q, -0.0632201826176404, 5);
  sqcRZGate(q, 1.5586779458504674, 5);
  sqcRYGate(q, 1.8700168633876242, 6);
  sqcRZGate(q, 2.966808724126397, 6);
  sqcRYGate(q, -0.8363693073370094, 7);
  sqcRZGate(q, -1.1219003478717142, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.22090544467137274, 0);
  sqcRZGate(q, 2.090850105582296, 0);
  sqcRYGate(q, -2.30454007610049, 1);
  sqcRZGate(q, 1.2828106085145716, 1);
  sqcRYGate(q, -0.270621381731587, 2);
  sqcRZGate(q, 3.1187336371311334, 2);
  sqcRYGate(q, 3.0976130669178725, 3);
  sqcRZGate(q, 1.8123238325589632, 3);
  sqcRYGate(q, 0.00028399905122287973, 4);
  sqcRZGate(q, -2.4613181312701604, 4);
  sqcRYGate(q, -0.228185091073553, 5);
  sqcRZGate(q, 2.656103816973971, 5);
  sqcRYGate(q, 0.7163723976723023, 6);
  sqcRZGate(q, 3.044972782580205, 6);
  sqcRYGate(q, -1.4315192287043814, 7);
  sqcRZGate(q, -1.8905925109437625, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.8835947461461414, 0);
  sqcRZGate(q, 2.4781907918545207, 0);
  sqcRYGate(q, -3.134165809334556, 1);
  sqcRZGate(q, -2.8277044654707044, 1);
  sqcRYGate(q, 1.8730419376554235, 2);
  sqcRZGate(q, 0.7904182147121555, 2);
  sqcRYGate(q, -2.0297733486638796, 3);
  sqcRZGate(q, 1.7570404385651168, 3);
  sqcRYGate(q, 3.1042299148475574, 4);
  sqcRZGate(q, -2.0896297635091923, 4);
  sqcRYGate(q, -0.6725255846374543, 5);
  sqcRZGate(q, -2.2612949219599447, 5);
  sqcRYGate(q, -2.934025913723323, 6);
  sqcRZGate(q, 2.8306128394345933, 6);
  sqcRYGate(q, 1.4111923097760353, 7);
  sqcRZGate(q, -0.19265597991154332, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.2256405921895142, 0);
  sqcRZGate(q, 0.3630415959932298, 0);
  sqcRYGate(q, 0.685267190129551, 1);
  sqcRZGate(q, 2.655688569804479, 1);
  sqcRYGate(q, 2.4474945807224673, 2);
  sqcRZGate(q, -1.1664119368225387, 2);
  sqcRYGate(q, 0.15060955918372176, 3);
  sqcRZGate(q, 2.096578023456419, 3);
  sqcRYGate(q, -0.07082366338451164, 4);
  sqcRZGate(q, -0.6024972917488984, 4);
  sqcRYGate(q, -0.42347609624554305, 5);
  sqcRZGate(q, 1.3081631331459356, 5);
  sqcRYGate(q, -0.8288597562408314, 6);
  sqcRZGate(q, 2.577276032422606, 6);
  sqcRYGate(q, 0.4524127213392646, 7);
  sqcRZGate(q, 3.0989241105433445, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7576278476210079, 0);
  sqcRZGate(q, -0.7498970172533426, 0);
  sqcRYGate(q, -0.04555119579017575, 1);
  sqcRZGate(q, 2.4762469784907535, 1);
  sqcRYGate(q, 0.07853472475366051, 2);
  sqcRZGate(q, -1.8226480565314804, 2);
  sqcRYGate(q, -1.0733537113629197, 3);
  sqcRZGate(q, 0.45896724215827484, 3);
  sqcRYGate(q, 0.004377703617057804, 4);
  sqcRZGate(q, -2.4298900781336674, 4);
  sqcRYGate(q, -0.0038960836354362664, 5);
  sqcRZGate(q, 1.279162001139741, 5);
  sqcRYGate(q, 3.096544906318275, 6);
  sqcRZGate(q, -0.7956513101075666, 6);
  sqcRYGate(q, -1.3457480096674894, 7);
  sqcRZGate(q, -1.7166973905020342, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.3820669384739248, 0);
  sqcRZGate(q, 0.662482682063438, 0);
  sqcRYGate(q, 2.219934887312517, 1);
  sqcRZGate(q, 0.29588585961168956, 1);
  sqcRYGate(q, -1.053445558185742, 2);
  sqcRZGate(q, -2.23800313239015, 2);
  sqcRYGate(q, 1.425408407871398, 3);
  sqcRZGate(q, 1.6854080389797614, 3);
  sqcRYGate(q, -0.035454109592019556, 4);
  sqcRZGate(q, -2.722333209746898, 4);
  sqcRYGate(q, -2.371178812471682, 5);
  sqcRZGate(q, -2.7935921089227085, 5);
  sqcRYGate(q, -2.447496334139339, 6);
  sqcRZGate(q, -2.54538014937335, 6);
  sqcRYGate(q, -1.762015043830206, 7);
  sqcRZGate(q, 1.838583101506274, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.772330111345333, 0);
  sqcRZGate(q, 1.6776904484916937, 0);
  sqcRYGate(q, 0.18587263864666248, 1);
  sqcRZGate(q, -0.5016219932172792, 1);
  sqcRYGate(q, -0.005638636386935403, 2);
  sqcRZGate(q, 0.8253855450376608, 2);
  sqcRYGate(q, 0.2439462299334547, 3);
  sqcRZGate(q, -2.242041668045311, 3);
  sqcRYGate(q, 3.1412569856502213, 4);
  sqcRZGate(q, 2.928561835503135, 4);
  sqcRYGate(q, 2.4081602079993205, 5);
  sqcRZGate(q, -2.7371168283152216, 5);
  sqcRYGate(q, -2.733991116230816, 6);
  sqcRZGate(q, -3.137197970688213, 6);
  sqcRYGate(q, 3.0317185302684004, 7);
  sqcRZGate(q, -2.398797758073897, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.0052510919744897, 0);
  sqcRZGate(q, -0.5299981514441523, 0);
  sqcRYGate(q, 1.7341063120984945, 1);
  sqcRZGate(q, -1.122832089697221, 1);
  sqcRYGate(q, -1.2221798414030678, 2);
  sqcRZGate(q, 2.961085052098795, 2);
  sqcRYGate(q, -1.5256103910293648, 3);
  sqcRZGate(q, -0.6193235868672007, 3);
  sqcRYGate(q, 3.121812930501051, 4);
  sqcRZGate(q, -2.9963752076006296, 4);
  sqcRYGate(q, -2.6028169019797387, 5);
  sqcRZGate(q, -2.9448295827108097, 5);
  sqcRYGate(q, 3.036602882923007, 6);
  sqcRZGate(q, -1.1946455914009775, 6);
  sqcRYGate(q, -2.2959041420600164, 7);
  sqcRZGate(q, -2.955323594804062, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.6194325491552894, 0);
  sqcRZGate(q, 1.910449908056922, 0);
  sqcRYGate(q, 0.03907722736422439, 1);
  sqcRZGate(q, 2.2471905195038135, 1);
  sqcRYGate(q, 0.06800932227479713, 2);
  sqcRZGate(q, -2.7804725453809747, 2);
  sqcRYGate(q, -0.018494015099395966, 3);
  sqcRZGate(q, -1.086232589965907, 3);
  sqcRYGate(q, -0.0004771797268769092, 4);
  sqcRZGate(q, 1.7559277594737557, 4);
  sqcRYGate(q, 1.2376644128088994, 5);
  sqcRZGate(q, -0.5658193637943487, 5);
  sqcRYGate(q, 0.4649131347206785, 6);
  sqcRZGate(q, 1.9199426515989428, 6);
  sqcRYGate(q, 0.12063348225668179, 7);
  sqcRZGate(q, 1.1631194549725072, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9411239645298597, 0);
  sqcRZGate(q, 1.0416811207837853, 0);
  sqcRYGate(q, 2.828267663237562, 1);
  sqcRZGate(q, -3.02174890194923, 1);
  sqcRYGate(q, 1.1807260596080962, 2);
  sqcRZGate(q, -0.8188873503100033, 2);
  sqcRYGate(q, 2.8572338191377424, 3);
  sqcRZGate(q, 0.10494882737281053, 3);
  sqcRYGate(q, 2.577893278375903, 4);
  sqcRZGate(q, 2.108858215880013, 4);
  sqcRYGate(q, -2.807457537046797, 5);
  sqcRZGate(q, -0.9967061974295639, 5);
  sqcRYGate(q, 0.09686408130480488, 6);
  sqcRZGate(q, 1.488028851876215, 6);
  sqcRYGate(q, 0.04504186835323264, 7);
  sqcRZGate(q, -0.7569968580870697, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.9294133430734348, 0);
  sqcRZGate(q, 0.07855518486490402, 0);
  sqcRYGate(q, 3.139526013585694, 1);
  sqcRZGate(q, -0.5740287304900613, 1);
  sqcRYGate(q, -3.1281566818017987, 2);
  sqcRZGate(q, 1.9701349763215203, 2);
  sqcRYGate(q, 0.008724255083156718, 3);
  sqcRZGate(q, -2.7760509579127643, 3);
  sqcRYGate(q, -0.0004550712671873569, 4);
  sqcRZGate(q, 1.1258517512574941, 4);
  sqcRYGate(q, -0.006487236979428972, 5);
  sqcRZGate(q, 0.5105201598678671, 5);
  sqcRYGate(q, 2.473871769091037, 6);
  sqcRZGate(q, 1.8729532785225809, 6);
  sqcRYGate(q, -0.26617434829652264, 7);
  sqcRZGate(q, 2.6201620140992308, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.3157705980739816, 0);
  sqcRZGate(q, 1.6172093738198587, 0);
  sqcRYGate(q, 2.5403018988412964, 1);
  sqcRZGate(q, -1.9457427561364398, 1);
  sqcRYGate(q, 1.2553772549116935, 2);
  sqcRZGate(q, 1.5015299825552029, 2);
  sqcRYGate(q, -2.048220540869499, 3);
  sqcRZGate(q, 2.587310015129381, 3);
  sqcRYGate(q, 2.5899657911636167, 4);
  sqcRZGate(q, -1.3254865667962317, 4);
  sqcRYGate(q, -2.296387201629836, 5);
  sqcRZGate(q, 1.4348138953021259, 5);
  sqcRYGate(q, -1.3168564771792974, 6);
  sqcRZGate(q, -0.47658253693017855, 6);
  sqcRYGate(q, 0.6212844944050311, 7);
  sqcRZGate(q, -0.839640907394183, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.07388833716207184, 0);
  sqcRZGate(q, -2.4176192144403768, 0);
  sqcRYGate(q, 0.060986496765663034, 1);
  sqcRZGate(q, -2.6442530180598878, 1);
  sqcRYGate(q, -1.3255528682956736, 2);
  sqcRZGate(q, -0.7202314372567261, 2);
  sqcRYGate(q, -0.012192067851237979, 3);
  sqcRZGate(q, 1.447430001339136, 3);
  sqcRYGate(q, 0.0009770615136533618, 4);
  sqcRZGate(q, 2.5300250198062066, 4);
  sqcRYGate(q, 2.3809170577385035, 5);
  sqcRZGate(q, -1.9532643326568682, 5);
  sqcRYGate(q, -2.485981618466158, 6);
  sqcRZGate(q, 0.9149770534923786, 6);
  sqcRYGate(q, 1.3693628134868288, 7);
  sqcRZGate(q, -0.2632640348040267, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.212912855486281, 0);
  sqcRZGate(q, -1.9598301948844437, 0);
  sqcRYGate(q, -3.08015540800653, 1);
  sqcRZGate(q, 1.2165070358411374, 1);
  sqcRYGate(q, -3.109837487579521, 2);
  sqcRZGate(q, -0.6036816485407419, 2);
  sqcRYGate(q, -0.007298429367909698, 3);
  sqcRZGate(q, 0.4880508577102136, 3);
  sqcRYGate(q, 0.3003718842983458, 4);
  sqcRZGate(q, 1.770131111574937, 4);
  sqcRYGate(q, 1.49515889689061, 5);
  sqcRZGate(q, -2.821249330201219, 5);
  sqcRYGate(q, 3.053629933841075, 6);
  sqcRZGate(q, -0.7188392073540318, 6);
  sqcRYGate(q, 0.2110144175639581, 7);
  sqcRZGate(q, 1.1493774058385058, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.7221130960634587, 0);
  sqcRZGate(q, -1.5523248423499574, 0);
  sqcRYGate(q, 3.0991807488867495, 1);
  sqcRZGate(q, 1.6673986382493826, 1);
  sqcRYGate(q, 1.7504791618037325, 2);
  sqcRZGate(q, 2.2549736336689046, 2);
  sqcRYGate(q, -3.0261803331423547, 3);
  sqcRZGate(q, 1.2543002545111692, 3);
  sqcRYGate(q, 3.141459161931142, 4);
  sqcRZGate(q, 1.331584945536454, 4);
  sqcRYGate(q, 0.007325198631117731, 5);
  sqcRZGate(q, 1.4051361896530175, 5);
  sqcRYGate(q, -1.5976698638521674, 6);
  sqcRZGate(q, 2.658849831509284, 6);
  sqcRYGate(q, 3.0566775109658515, 7);
  sqcRZGate(q, -2.592556909687564, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.3534756566191772, 0);
  sqcRZGate(q, 2.4717991769584704, 0);
  sqcRYGate(q, 2.2539467381417513, 1);
  sqcRZGate(q, -1.7981917148109705, 1);
  sqcRYGate(q, 0.9255957178800698, 2);
  sqcRZGate(q, -1.8012395714603557, 2);
  sqcRYGate(q, -1.1405943254634883, 3);
  sqcRZGate(q, 1.6587464050781897, 3);
  sqcRYGate(q, 0.38848301660782025, 4);
  sqcRZGate(q, 0.417149398918669, 4);
  sqcRYGate(q, -2.8864948763009086, 5);
  sqcRZGate(q, 0.1036574534182062, 5);
  sqcRYGate(q, 2.407159952803044, 6);
  sqcRZGate(q, -0.36997035781964965, 6);
  sqcRYGate(q, -0.8549846279757833, 7);
  sqcRZGate(q, -2.9332919291374444, 7);

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
