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

  sqcRYGate(q, -3.064029612024224, 0);
  sqcRYGate(q, -0.47480800160551273, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1553263346013183, 0);
  sqcRYGate(q, -0.0029752928163668813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1541647801813206, 1);
  sqcRYGate(q, -2.4608295420225135, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.294528114110077, 1);
  sqcRYGate(q, 0.4140845520798129, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1544713258089376, 2);
  sqcRYGate(q, 1.102947077505599, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2068759420352526, 2);
  sqcRYGate(q, 1.2629240129374555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2528131397496507, 0);
  sqcRYGate(q, 2.6268521934579137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4080500537231124, 0);
  sqcRYGate(q, 0.11500423173042157, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5981252739787761, 1);
  sqcRYGate(q, 0.5831371100169095, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3730461523878774, 1);
  sqcRYGate(q, -2.7816489800325392, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.591771954737361, 2);
  sqcRYGate(q, 0.6056264256901759, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.12478722648372198, 2);
  sqcRYGate(q, -1.7341868890214605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.379081682133175, 0);
  sqcRYGate(q, 0.8998347620380261, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9552258767616228, 0);
  sqcRYGate(q, 2.3364882626254158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0323408742817552, 1);
  sqcRYGate(q, -0.618950934690982, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1018234199706245, 1);
  sqcRYGate(q, -2.6618617198195635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5179736765538577, 2);
  sqcRYGate(q, 2.919506273883023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5283387179120798, 2);
  sqcRYGate(q, -1.4782043949209522, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5526836434095372, 0);
  sqcRYGate(q, 2.621532299939263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2097879761933243, 0);
  sqcRYGate(q, 0.3395167939624848, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.862139213054875, 1);
  sqcRYGate(q, 3.0982513326059995, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0339189714535806, 1);
  sqcRYGate(q, 1.2105989584519905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.74073511044221, 2);
  sqcRYGate(q, 2.4224310802613918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.577520655074695, 2);
  sqcRYGate(q, 2.198841256942802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.939796862823541, 0);
  sqcRYGate(q, 1.4273081932540277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2097879908939173, 0);
  sqcRYGate(q, 1.6272086097373046, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7271141324090012, 1);
  sqcRYGate(q, -2.415666627584814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1095945549063577, 1);
  sqcRYGate(q, 0.11855712652757955, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.240947864044768, 2);
  sqcRYGate(q, -2.227282205724122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.48628674597839977, 2);
  sqcRYGate(q, -0.9803934932605157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.614461603035082, 0);
  sqcRYGate(q, 2.3143919617347453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.13153689612024255, 0);
  sqcRYGate(q, 1.0253502752013541, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5670917350071294, 1);
  sqcRYGate(q, -1.8169360395147953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1475323227311662, 1);
  sqcRYGate(q, 1.874608028128164, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.518025897411687, 2);
  sqcRYGate(q, -2.5366476375130165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07360541332315318, 2);
  sqcRYGate(q, 1.5182178129759432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.32778238032866014, 0);
  sqcRYGate(q, -0.042712618379957795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4905873581860654, 0);
  sqcRYGate(q, 0.7601641630021874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0190364738138475, 1);
  sqcRYGate(q, -1.1953523483207733, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.473451490327572, 1);
  sqcRYGate(q, -2.162944975108092, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5962561914645992, 2);
  sqcRYGate(q, 1.327241543895588, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1355882289194366, 2);
  sqcRYGate(q, 2.628350223260213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.621148812127993, 0);
  sqcRYGate(q, -1.4833917026861907, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8997542556873187, 0);
  sqcRYGate(q, -2.266590983680331, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1685126470446816, 1);
  sqcRYGate(q, -0.5185273385521825, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1256252803667917, 1);
  sqcRYGate(q, 0.0009827347150892318, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.753774641659944, 2);
  sqcRYGate(q, -1.7072629390394567, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4885154072886184, 2);
  sqcRYGate(q, 0.1259543152538143, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8899405366614173, 0);
  sqcRYGate(q, -3.0765616377561007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.300367651816471, 0);
  sqcRYGate(q, 0.1641309651549124, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.051585429439063, 1);
  sqcRYGate(q, 2.4945149113180207, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05369978011744081, 1);
  sqcRYGate(q, -1.5119279315871912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.07102900069142355, 2);
  sqcRYGate(q, 3.1355149497617916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2566342877692372, 2);
  sqcRYGate(q, 1.657723421250326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4483416948182963, 0);
  sqcRYGate(q, -0.7725844815623635, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8289605802869238, 0);
  sqcRYGate(q, -2.759803673993168, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.47896330012324, 1);
  sqcRYGate(q, -2.774910405792028, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3124548272420764, 1);
  sqcRYGate(q, -2.815547362945804, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7232461187915367, 2);
  sqcRYGate(q, 1.4466466005217846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.024299333065428, 2);
  sqcRYGate(q, 0.5252918031438157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.866757068542553, 0);
  sqcRYGate(q, 3.002225812159079, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7354528979051518, 0);
  sqcRYGate(q, -2.5196438054203782, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8826794011919303, 1);
  sqcRYGate(q, 2.5279221974831, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3829128713164467, 1);
  sqcRYGate(q, 2.2516076774927383, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3905741580379454, 2);
  sqcRYGate(q, 0.33000988164434286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5870049820609595, 2);
  sqcRYGate(q, -0.8441678854322302, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4272569919444407, 0);
  sqcRYGate(q, 1.725691007401223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.928836860171308, 0);
  sqcRYGate(q, -1.873981000068629, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7570908885220737, 1);
  sqcRYGate(q, -2.115796331931003, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8741270464794306, 1);
  sqcRYGate(q, -1.4930503508995268, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0752547606172476, 2);
  sqcRYGate(q, -2.0758748916646512, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8303161050013506, 2);
  sqcRYGate(q, -0.22837055810370221, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.93871293014576, 0);
  sqcRYGate(q, -0.8262180212358933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7861854935561994, 0);
  sqcRYGate(q, 2.024586173537527, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8945704648321722, 1);
  sqcRYGate(q, 2.4039525199978717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4884478263180223, 1);
  sqcRYGate(q, -1.338856008761023, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9698400965825498, 2);
  sqcRYGate(q, 3.005458702179894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2933429757941716, 2);
  sqcRYGate(q, 0.7261800194997363, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0892583432707976, 0);
  sqcRYGate(q, -2.515806601946937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0827030530290778, 0);
  sqcRYGate(q, -2.3079510240158343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7330091931778322, 1);
  sqcRYGate(q, 2.1124400790767393, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.49420937436202905, 1);
  sqcRYGate(q, -1.2711632732801457, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9275562131862642, 2);
  sqcRYGate(q, -1.187988929563397, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6648213636094433, 2);
  sqcRYGate(q, 2.569159705690255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8902174669237358, 0);
  sqcRYGate(q, -0.33259375120096113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0945018387540744, 0);
  sqcRYGate(q, -3.0980419624349635, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9547988794315483, 1);
  sqcRYGate(q, -1.3494249413870827, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6211575473894708, 1);
  sqcRYGate(q, -0.8806468624720996, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7244658369450028, 2);
  sqcRYGate(q, -1.2156188133101042, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.861076712582302, 2);
  sqcRYGate(q, -0.04007229544894635, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4463539756679387, 0);
  sqcRYGate(q, 1.1278484772594046, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0608076290968342, 0);
  sqcRYGate(q, 1.8229815051859743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.061446855608983, 1);
  sqcRYGate(q, 1.171725780890712, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.049114540884331, 1);
  sqcRYGate(q, -2.1225120285096537, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8928206820809943, 2);
  sqcRYGate(q, -1.3285533460360839, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.987266476881125, 2);
  sqcRYGate(q, -2.4273596499468972, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.487542843021127, 0);
  sqcRYGate(q, 0.24553966620375348, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.072536830073329, 0);
  sqcRYGate(q, -1.8516923009399564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.225435823085795, 1);
  sqcRYGate(q, -1.7445185344304814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3393400785436267, 1);
  sqcRYGate(q, 2.1225685262239424, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8121397311776137, 2);
  sqcRYGate(q, 0.16125397683956108, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0178479452868467, 2);
  sqcRYGate(q, -0.3562825616123541, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1056267446165435, 0);
  sqcRYGate(q, 0.6898433917642244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6846440125652264, 0);
  sqcRYGate(q, 2.4484358210190194, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.439905931570599, 1);
  sqcRYGate(q, 1.9516744511693038, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0650962472800125, 1);
  sqcRYGate(q, -3.0741797021217336, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4469056531286615, 2);
  sqcRYGate(q, 0.5434026353278771, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9568168785336642, 2);
  sqcRYGate(q, -1.8944797264760131, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4368291144496848, 0);
  sqcRYGate(q, 0.7033617416807009, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.680578425071938, 0);
  sqcRYGate(q, -1.23342997848792, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.283001332201258, 1);
  sqcRYGate(q, 2.1005031249285016, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0621885381783178, 1);
  sqcRYGate(q, -2.9845303598640296, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9114834795675115, 2);
  sqcRYGate(q, -1.5535496911311357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.974211013324496, 2);
  sqcRYGate(q, 2.089388155436116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.20497643932246, 0);
  sqcRYGate(q, -2.7428651601182175, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4414733938140123, 0);
  sqcRYGate(q, -0.007943023059933867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0719909326218775, 1);
  sqcRYGate(q, 0.5006283142137471, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.108980450688834, 1);
  sqcRYGate(q, 2.370092039583958, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5190268346116795, 2);
  sqcRYGate(q, 0.933350602329144, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7174465954070506, 2);
  sqcRYGate(q, 0.610091974020732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2563980255091298, 0);
  sqcRYGate(q, -0.8736350425258504, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1291544090345647, 0);
  sqcRYGate(q, -0.2039706885902355, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8337247028922184, 1);
  sqcRYGate(q, -1.427038399548039, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8176979687505792, 1);
  sqcRYGate(q, 1.0094202036847184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.380536586898675, 2);
  sqcRYGate(q, -0.434138323810724, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9698342586280441, 2);
  sqcRYGate(q, -2.523852136084575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.643700468087308, 0);
  sqcRYGate(q, -3.0272943044881337, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.707282983477513, 0);
  sqcRYGate(q, -0.40316162603347916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8837837045154373, 1);
  sqcRYGate(q, -0.10513286879215133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1650920195654095, 1);
  sqcRYGate(q, -2.143429851742837, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3695330384666846, 2);
  sqcRYGate(q, -0.9292640841198009, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5097819015218077, 2);
  sqcRYGate(q, -0.5379826219886681, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.29909604973337434, 0);
  sqcRYGate(q, 0.3263521295164654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.376531276228886, 0);
  sqcRYGate(q, -0.17523429104353117, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0894067682309254, 1);
  sqcRYGate(q, -3.0550138785772623, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08844953691137596, 1);
  sqcRYGate(q, 1.3746329900856662, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0862436457443474, 2);
  sqcRYGate(q, -0.3514793258406116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.45229476416437553, 2);
  sqcRYGate(q, 0.23023961170907348, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.461014049879456, 0);
  sqcRYGate(q, 1.7029138549698946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9074535648857074, 0);
  sqcRYGate(q, 0.39553441162836644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2111269769878454, 1);
  sqcRYGate(q, 1.2416009762969369, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.85316636977598, 1);
  sqcRYGate(q, -1.6101852371247356, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6041906576383305, 2);
  sqcRYGate(q, 1.6042077296629866, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7679672377026456, 2);
  sqcRYGate(q, -2.5867839844060145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5134222274314877, 0);
  sqcRYGate(q, 2.6219287138694374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5261741025872588, 0);
  sqcRYGate(q, 2.7452464057189596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.711977796080168, 1);
  sqcRYGate(q, 1.2249067285854833, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5922867483482532, 1);
  sqcRYGate(q, 0.05630312432873019, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3785230235871089, 2);
  sqcRYGate(q, -0.9685100422250521, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6135016665057957, 2);
  sqcRYGate(q, 1.2642954743025152, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4138437074633607, 0);
  sqcRYGate(q, 0.17711799569396103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.348154938794725, 0);
  sqcRYGate(q, 0.019803147177603897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2550618214827045, 1);
  sqcRYGate(q, -0.1711212426564952, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9514524525367234, 1);
  sqcRYGate(q, 2.4625339835834814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.074371656885836, 2);
  sqcRYGate(q, -2.7226604946710364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9319388191271393, 2);
  sqcRYGate(q, 0.24085684029155255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1819312277159977, 0);
  sqcRYGate(q, -2.609973036356145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3531159849357417, 0);
  sqcRYGate(q, 2.1461141139649245, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3783287450202062, 1);
  sqcRYGate(q, 2.7337616790497608, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7152062145386717, 1);
  sqcRYGate(q, 1.1086067121214316, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.735812662556697, 2);
  sqcRYGate(q, 0.7458451189122046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.147453166041333, 2);
  sqcRYGate(q, 2.009677528314705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8961240952052474, 0);
  sqcRYGate(q, 0.14926245415648548, 1);
  sqcRYGate(q, -0.9393165783271896, 2);
  sqcRYGate(q, 0.3677800184142761, 3);

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
