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
  q = sqcQuantumCircuit(16);

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.0027234544826168967, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.09533391302802008, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.02886495018999489, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.048786128072739326, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.047000031692138886, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.0458369286985975, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.05059559131390095, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.0115828585802366, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.09060620359632704, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.09494302421535232, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.042415712089747044, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, -0.08019142569784576, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, -0.021756288591981355, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, -0.018771254027013316, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, -0.0633305026872192, 15);
  sqcCXGate(q, 14, 15);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.42373078624834026, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.9997803654392021, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.34190255864702007, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.8028236279870763, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.05676365891477396, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.57240248816892, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.39228121571570246, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.0047371742859082825, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.4746106377149444, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.7244459836085677, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.5886300670912819, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.661927179954549, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, 1.2079007722318948, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, 0.21099785501404214, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, 0.6209677566991174, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, 0.7987409017042695, 15);
  sqcHGate(q, 15);
  sqcRZGate(q, -0.2678718242166051, 0);
  sqcRZGate(q, -0.676012820838831, 1);
  sqcRZGate(q, -0.38774249433101715, 2);
  sqcRZGate(q, -0.6676106021184608, 3);
  sqcRZGate(q, -0.27329297391298707, 4);
  sqcRZGate(q, -0.4527427295955327, 5);
  sqcRZGate(q, -0.4830701037049565, 6);
  sqcRZGate(q, -0.34694659656830923, 7);
  sqcRZGate(q, -0.395448287804787, 8);
  sqcRZGate(q, -0.546458868301044, 9);
  sqcRZGate(q, -0.7116421912064482, 10);
  sqcRZGate(q, 0.28473258641103516, 11);
  sqcRZGate(q, 0.020069536380309665, 12);
  sqcRZGate(q, -0.1925031141083891, 13);
  sqcRZGate(q, -0.10838909064785106, 14);
  sqcRZGate(q, -0.062256742385972216, 15);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.44870346725541926, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.06756387488642587, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.12129238934717337, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.010900398506182343, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.7325344250210053, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.2496187928987345, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.07737939375479556, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.21192775599609662, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.15564994177201918, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.006266450966725761, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.07782552907475546, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, -0.06027066865382576, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, -0.0067069227702940696, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, -0.012431346292066948, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, 0.009023793627221029, 15);
  sqcCXGate(q, 14, 15);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.5932034490413678, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.8235646400646642, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.5034079545408877, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.628343748367032, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.8601200517348911, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.15895704187803206, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.49322174956714443, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.4532260729558862, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.9089582269926594, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.8449844647204493, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.8049150214165054, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.5792465325353774, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, 1.2164106028673154, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, 0.0010454536001920942, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, 0.6587102362380337, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, 0.7123314379443111, 15);
  sqcHGate(q, 15);
  sqcRZGate(q, -0.2735907536928481, 0);
  sqcRZGate(q, -0.6545822610900569, 1);
  sqcRZGate(q, -0.5882435473170863, 2);
  sqcRZGate(q, -0.7609154568501801, 3);
  sqcRZGate(q, -0.3082599110262667, 4);
  sqcRZGate(q, -0.4103314223436706, 5);
  sqcRZGate(q, -0.6607871480826628, 6);
  sqcRZGate(q, -0.6124049930829432, 7);
  sqcRZGate(q, -0.657587847728562, 8);
  sqcRZGate(q, -0.7318954581650599, 9);
  sqcRZGate(q, -0.9844854232175225, 10);
  sqcRZGate(q, 0.37414239982623443, 11);
  sqcRZGate(q, 0.2262046904379165, 12);
  sqcRZGate(q, -0.07703211193926789, 13);
  sqcRZGate(q, -0.15461136731927214, 14);
  sqcRZGate(q, -0.24165087192501017, 15);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.12831693650643786, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.028794937651662605, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.06461480256347067, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.03327831147348831, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.37332947622741786, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.1267731699388607, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.10830498244052797, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.08023459895654848, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.47409076496067737, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.025271038677139174, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.3991495605676898, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, -0.43695628273141024, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, 0.008387250915540836, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, 0.02040845737935484, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, -0.15205478937950484, 15);
  sqcCXGate(q, 14, 15);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4883619128800208, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.8013927661752974, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.6843451771666416, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.8543158252556307, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.7399797428075187, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.3645733642570979, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.5412596482197574, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.4405903578169787, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.3136074732474123, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.596440416783582, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.5922014560048358, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.5643798376465909, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, 0.98014514474664, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, -0.010557397786970854, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, 0.6845806414945352, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, 0.37536919563388266, 15);
  sqcHGate(q, 15);
  sqcRZGate(q, -0.289214879006708, 0);
  sqcRZGate(q, -0.2716717895719434, 1);
  sqcRZGate(q, -0.4891478753943332, 2);
  sqcRZGate(q, -0.33896216833827375, 3);
  sqcRZGate(q, -0.5204570237907614, 4);
  sqcRZGate(q, -0.30310764155584313, 5);
  sqcRZGate(q, -0.5678971568997213, 6);
  sqcRZGate(q, -0.7650552482208459, 7);
  sqcRZGate(q, -0.5827322491004461, 8);
  sqcRZGate(q, -0.331173893869317, 9);
  sqcRZGate(q, -0.40586569101224346, 10);
  sqcRZGate(q, 0.09083059871082023, 11);
  sqcRZGate(q, -0.5331175159647643, 12);
  sqcRZGate(q, 0.04490322859696604, 13);
  sqcRZGate(q, 0.003268983145698507, 14);
  sqcRZGate(q, -0.18683334619278893, 15);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3621560763686353, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.0011025965110973575, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.11898988934737703, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.09012082300891816, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.2557272085218332, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.003477664780835039, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.046876287376922746, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.3343514884374869, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.12377486877354428, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.36487575442848696, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.20373217065334825, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, -0.6725928824911053, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, -0.05263994830196616, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, 0.2130833053920762, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, -0.03275827088661024, 15);
  sqcCXGate(q, 14, 15);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2366541746513182, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.4933646111465694, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.4613697714268919, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.7673436372331733, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.05039244067412031, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.5764714182285162, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.43894134978593535, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.8729006871535603, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.26298710050771235, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.6850320314486499, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.8546662043512768, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.14314697021327913, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, 0.5589061114743004, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, -0.28098953403714333, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, 0.2480438535080326, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, 0.2081309521816017, 15);
  sqcHGate(q, 15);
  sqcRZGate(q, -0.2680661745443349, 0);
  sqcRZGate(q, 0.033476062292515006, 1);
  sqcRZGate(q, -0.5323293360206849, 2);
  sqcRZGate(q, -0.037459468295371855, 3);
  sqcRZGate(q, -0.3377055683948273, 4);
  sqcRZGate(q, -0.10408896064626136, 5);
  sqcRZGate(q, -0.26071594314854457, 6);
  sqcRZGate(q, -0.6276111414904212, 7);
  sqcRZGate(q, -0.38338814296028934, 8);
  sqcRZGate(q, 0.00036087657791930827, 9);
  sqcRZGate(q, -0.027584529245858164, 10);
  sqcRZGate(q, -0.08410845904683815, 11);
  sqcRZGate(q, -0.4745742649909759, 12);
  sqcRZGate(q, 0.41865117653445744, 13);
  sqcRZGate(q, 0.04412479714031189, 14);
  sqcRZGate(q, -0.06536597839364248, 15);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2656145938207096, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.4616126498846668, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.1771985129242147, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.07539380453410902, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.3991827491456443, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.029673466159249942, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.07711892100811804, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.5485622431850355, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.33974445488685207, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.4725111083792543, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.06479497712868464, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, -0.15210086543225831, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, -0.1347954917389092, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, 0.3426713791435295, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, -0.1868700834635428, 15);
  sqcCXGate(q, 14, 15);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.0709819383335715, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.3435156232735692, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.490405043251252, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5602200030989056, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.5151243647555415, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.2509136506597649, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.6015524779093961, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.7057700400280714, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.37852269138256023, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.05026258854007753, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.713441683316863, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.07102478242818458, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, 0.6816137923551459, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, -0.1895091886989275, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, 0.04431974309154899, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, 0.0281853163736013, 15);
  sqcHGate(q, 15);
  sqcRZGate(q, -0.16921681600645821, 0);
  sqcRZGate(q, 0.027966873928340668, 1);
  sqcRZGate(q, -0.04426618496369458, 2);
  sqcRZGate(q, 0.030863004709191007, 3);
  sqcRZGate(q, -0.0573866321925711, 4);
  sqcRZGate(q, 0.8790720784933168, 5);
  sqcRZGate(q, -0.2579291794684533, 6);
  sqcRZGate(q, -0.32355966026132754, 7);
  sqcRZGate(q, -0.07485657066032532, 8);
  sqcRZGate(q, -0.003059029136540428, 9);
  sqcRZGate(q, 0.10895680215944158, 10);
  sqcRZGate(q, -0.014801505094033827, 11);
  sqcRZGate(q, 0.04451143907511025, 12);
  sqcRZGate(q, 1.056360189846571, 13);
  sqcRZGate(q, 0.06941821263100137, 14);
  sqcRZGate(q, 0.08691878778907035, 15);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2394357751616532, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.06461926736769881, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.35795135501558023, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.0014440620698382154, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.18510371727963343, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.17839604145243923, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.024772173858051146, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.44671413873787513, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.07863799296778401, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.09854210739148293, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.6644299132354625, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, 0.054602795487428774, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, -0.6941338393922082, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, -0.06970292621268948, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, -0.04295348931050061, 15);
  sqcCXGate(q, 14, 15);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.05927117495723895, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.07669254659470193, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.579261469680803, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.4726014936357206, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.41699159567316674, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.05976534460401546, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.7523151016717029, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.33716256743439954, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.03952740620402237, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.5165945568977948, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -0.017928590690559503, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.41418827892957577, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, 0.49505608734734696, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, -0.3790675745816323, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, -0.0404955956281377, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, -0.15154597528418964, 15);
  sqcHGate(q, 15);
  sqcRZGate(q, -0.18624452345664697, 0);
  sqcRZGate(q, -0.10221352229032747, 1);
  sqcRZGate(q, -0.04837602531960988, 2);
  sqcRZGate(q, 0.020961897304315594, 3);
  sqcRZGate(q, 0.08325462758735956, 4);
  sqcRZGate(q, 0.6548056127006397, 5);
  sqcRZGate(q, -0.045894338484467445, 6);
  sqcRZGate(q, 0.033573120308388986, 7);
  sqcRZGate(q, 0.1105828917671706, 8);
  sqcRZGate(q, -0.11247933551140106, 9);
  sqcRZGate(q, -0.15314944522671056, 10);
  sqcRZGate(q, 0.07429947777388368, 11);
  sqcRZGate(q, 0.07641333279974002, 12);
  sqcRZGate(q, 1.0517819197901455, 13);
  sqcRZGate(q, 0.07935438967609348, 14);
  sqcRZGate(q, 0.19368224999405112, 15);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.1971662479365181, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.039270565283300835, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.4972271963217028, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.4712401035482997, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.4406584801225849, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.547959661048553, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.004171915280656549, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.35173477979961176, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.32078442908338783, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.2786723893093507, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.16684630155783414, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, -0.017831511946644736, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, -0.43458488972480647, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, 0.03919744761162388, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, 0.04833292858353574, 15);
  sqcCXGate(q, 14, 15);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.04902374318475474, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.04802930422244661, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.28710061985253055, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9056697917532401, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.5672944092521388, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.850897994598237, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.28133203942917057, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.742194792900209, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.2550019707420112, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.33257268960817055, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -0.17681629871196186, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.4925833693152642, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, -0.1451067534473613, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, -0.9295594526297041, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, -0.20514970212783057, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, -0.34337748640479515, 15);
  sqcHGate(q, 15);
  sqcRZGate(q, -0.11839869243200078, 0);
  sqcRZGate(q, 0.0886360464427476, 1);
  sqcRZGate(q, -0.0013714282309789778, 2);
  sqcRZGate(q, -0.08987810722299039, 3);
  sqcRZGate(q, 0.049454990526719006, 4);
  sqcRZGate(q, 0.005245376841118945, 5);
  sqcRZGate(q, 0.020802614014517665, 6);
  sqcRZGate(q, -0.008126376233902582, 7);
  sqcRZGate(q, -0.01417018515712725, 8);
  sqcRZGate(q, 0.05828808464515363, 9);
  sqcRZGate(q, -0.0003343935844551456, 10);
  sqcRZGate(q, -0.07572512486701606, 11);
  sqcRZGate(q, 0.03175077836914483, 12);
  sqcRZGate(q, 0.6651431676855732, 13);
  sqcRZGate(q, 0.13327454645563913, 14);
  sqcRZGate(q, 0.16082126112055872, 15);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.1476569526222572, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.1510358802826179, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.18290729489577737, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.4800953725376414, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 1.1080144031492558, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.1051020624021974, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.4558275985202271, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.6897243750876646, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.44228465774340014, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.24190574466153722, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.6557161138661091, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, 0.3233242570365344, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, 0.12949099559338723, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, 0.758938179904821, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, 0.021888454329683657, 15);
  sqcCXGate(q, 14, 15);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.2114480063841719, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.06884054467124573, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.7424287986854888, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.08604882939888357, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.8401359613900449, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.5230656460158618, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.24893792174673582, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.4502451024005361, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -1.1890492054930863, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.49914192242261846, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -0.19399983686065558, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.5060392664381888, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, 1.0883340285701855, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, -0.8603450178469185, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, -0.2194093028710474, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, -0.6555499565996135, 15);
  sqcHGate(q, 15);
  sqcRZGate(q, -0.009284640174867978, 0);
  sqcRZGate(q, 0.040090784766430375, 1);
  sqcRZGate(q, 0.07476956425009011, 2);
  sqcRZGate(q, 0.11613803629818291, 3);
  sqcRZGate(q, 0.0006624947530296613, 4);
  sqcRZGate(q, 0.003077376809934593, 5);
  sqcRZGate(q, 0.0012001041225912284, 6);
  sqcRZGate(q, -0.02032001024816479, 7);
  sqcRZGate(q, 0.03251021366705445, 8);
  sqcRZGate(q, 0.029514107721550192, 9);
  sqcRZGate(q, 0.008189729506527143, 10);
  sqcRZGate(q, -0.020027503808117388, 11);
  sqcRZGate(q, -0.16162609049182786, 12);
  sqcRZGate(q, 0.16197482836491484, 13);
  sqcRZGate(q, -0.1390031164752136, 14);
  sqcRZGate(q, 0.2497095505201504, 15);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.050698120750560946, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.29587958518295215, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.14963756388862984, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.10726544152008914, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.9505074414262165, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 1.6753384900931412, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.25328364998414954, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -1.1663458215503293, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.4232772490085488, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.09909103489165842, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.14582040198367693, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, -0.12939300778587376, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, 1.2250683813345882, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, 0.7806184302608041, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, 0.4658842806818919, 15);
  sqcCXGate(q, 14, 15);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.2729031871594014, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.17042527075642938, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.21424187216781929, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5986940353393662, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -1.0008484431931293, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.3636345811199193, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.5466197507622973, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.8636138345484584, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.15021780731523346, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.38399629907720084, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -0.1124021998391658, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -1.176509133891784, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, -0.018848393328216615, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, 0.2904645481129136, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, 0.4670943756613553, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, -0.8534889281768907, 15);
  sqcHGate(q, 15);
  sqcRZGate(q, -0.07761199596784675, 0);
  sqcRZGate(q, 0.025102847833472483, 1);
  sqcRZGate(q, -0.06664901639773885, 2);
  sqcRZGate(q, -0.029939719478018805, 3);
  sqcRZGate(q, -0.00582554214383469, 4);
  sqcRZGate(q, 0.00902649128767234, 5);
  sqcRZGate(q, -0.0027685927503274073, 6);
  sqcRZGate(q, 0.009192946077537466, 7);
  sqcRZGate(q, -0.03539346160945213, 8);
  sqcRZGate(q, 0.028527541616672154, 9);
  sqcRZGate(q, -0.047604103335585644, 10);
  sqcRZGate(q, 0.0025590020391803754, 11);
  sqcRZGate(q, 0.1932016939549935, 12);
  sqcRZGate(q, 0.00032212298675013385, 13);
  sqcRZGate(q, 0.06221909465831155, 14);
  sqcRZGate(q, 1.595882436798437, 15);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.26110244911194275, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.12536701970912775, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.4939459536584435, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.050478758208922975, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 1.258097690891197, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.8774584171511456, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.26517633245282324, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -1.4298064514492215, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.33877761574667903, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.27252054574404944, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.11028720834522229, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, 0.1732333453411414, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, 0.7230576019388203, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, 1.2045606010931624, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, 0.9642172444229952, 15);
  sqcCXGate(q, 14, 15);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.28972597234935643, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.24603124241710114, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.20906791670296726, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.4195816449672817, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.9525981536341576, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.23845974059920566, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -1.043160041213637, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 1.0046116740340543, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.6948661886328998, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.22471691739558283, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.15197028506860277, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.9671550825467197, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, -0.05793022554987418, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, -0.2025303887256876, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, -1.201390102305294, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, -0.719851402539736, 15);
  sqcHGate(q, 15);
  sqcRZGate(q, -0.11441556908067965, 0);
  sqcRZGate(q, -0.0001644699813634963, 1);
  sqcRZGate(q, -0.016736368679805477, 2);
  sqcRZGate(q, 0.0011449146498430508, 3);
  sqcRZGate(q, 0.017030894060636684, 4);
  sqcRZGate(q, -0.00795163293279037, 5);
  sqcRZGate(q, 0.005299077452592374, 6);
  sqcRZGate(q, -0.0029665519769790033, 7);
  sqcRZGate(q, -0.01542113608598119, 8);
  sqcRZGate(q, -0.03197401139881536, 9);
  sqcRZGate(q, 0.05936199007581163, 10);
  sqcRZGate(q, 1.2316132275948246, 11);
  sqcRZGate(q, -0.01852701703159889, 12);
  sqcRZGate(q, 0.024155923238818964, 13);
  sqcRZGate(q, 0.21730010394567, 14);
  sqcRZGate(q, 1.5778189250948342, 15);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.5308234300691955, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.20523485162387448, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.20278600021585896, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.32908141522083045, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.8456284781463911, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.4640883863470128, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.3032928102749688, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.9189417581673386, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.13432950248927844, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.4586625759732303, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.3064493615574264, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, -0.2828829226372489, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, 0.7291875537847147, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, 0.5507362772879416, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, -0.6428714404659016, 15);
  sqcCXGate(q, 14, 15);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.577440390005378, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.710800027456076, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.37017991988446214, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.9633918773086626, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.2826930797910289, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -1.472361499911512, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.3215709382179485, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -1.3120034570414845, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.276804516477763, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.7491916796632223, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -0.27330321733559776, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.018983095392790198, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, -0.37245408223543663, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, -1.0757079544595174, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, 0.01074688756358536, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, -1.5240134561642618, 15);
  sqcHGate(q, 15);
  sqcRZGate(q, 0.015472719488552123, 0);
  sqcRZGate(q, -0.010025670316193556, 1);
  sqcRZGate(q, 0.02201741300885296, 2);
  sqcRZGate(q, -0.011359740818041187, 3);
  sqcRZGate(q, -0.02268936091253203, 4);
  sqcRZGate(q, -0.007601358357910007, 5);
  sqcRZGate(q, -0.005006307407775495, 6);
  sqcRZGate(q, -0.006003554439613249, 7);
  sqcRZGate(q, -0.026128336224624155, 8);
  sqcRZGate(q, 0.08620638043475659, 9);
  sqcRZGate(q, 0.009505454959415762, 10);
  sqcRZGate(q, 1.8853190186592257, 11);
  sqcRZGate(q, 0.0064377118205263635, 12);
  sqcRZGate(q, -0.032354643420093226, 13);
  sqcRZGate(q, -0.23136909793432217, 14);
  sqcRZGate(q, 0.9468125221084396, 15);

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
