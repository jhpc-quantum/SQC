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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 1.1757167794325192, 0);
  sqcRYGate(q, -1.1023308993159553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3161382159657364, 0);
  sqcRYGate(q, -1.34616317809631, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.47055813840504346, 2);
  sqcRYGate(q, 2.0036530840207125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4026408893531648, 2);
  sqcRYGate(q, -2.376434986232642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4414647622861896, 4);
  sqcRYGate(q, -2.736361704484988, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4800907254064666, 4);
  sqcRYGate(q, -0.8257409227309083, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.42717866753997136, 6);
  sqcRYGate(q, 2.88539742092845, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2597923799824677, 6);
  sqcRYGate(q, 1.635669948160246, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0894788044920682, 8);
  sqcRYGate(q, 2.6243244472738714, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.965131428205258, 8);
  sqcRYGate(q, -0.8006818354545836, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.353383731106987, 10);
  sqcRYGate(q, 1.9396357446634696, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.06093429588553523, 10);
  sqcRYGate(q, 1.1957034708574446, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2316813616697795, 1);
  sqcRYGate(q, 1.8866956932837171, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8333882030104853, 1);
  sqcRYGate(q, -1.0334198365890357, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0897635671913983, 3);
  sqcRYGate(q, 1.9864754869608943, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6019450554760952, 3);
  sqcRYGate(q, -3.141139065640538, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2148260658331207, 5);
  sqcRYGate(q, -2.077265497183501, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.406363502059641, 5);
  sqcRYGate(q, -2.99001224838429, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.121184604819223, 7);
  sqcRYGate(q, 1.1056205327513302, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.409120028485807, 7);
  sqcRYGate(q, 0.6909013995028259, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.6946537343552044, 9);
  sqcRYGate(q, 0.2179891203652078, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4423843850454663, 9);
  sqcRYGate(q, -1.0074129105030747, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4623901513608171, 0);
  sqcRYGate(q, -2.38457311904541, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.140078267937085, 0);
  sqcRYGate(q, -1.110486331954427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5788557830581915, 2);
  sqcRYGate(q, 2.939381368471921, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8211834898058176, 2);
  sqcRYGate(q, 2.1172099542922087, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9838174115100059, 4);
  sqcRYGate(q, -0.09108295756461746, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3908170283825383, 4);
  sqcRYGate(q, 1.6966622145298127, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2265461719842576, 6);
  sqcRYGate(q, 0.27548230810109225, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6927962893417847, 6);
  sqcRYGate(q, -0.19479094784759104, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1432984415495846, 8);
  sqcRYGate(q, -1.4868090581744162, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.4217971675500336, 8);
  sqcRYGate(q, 1.9381305164282079, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.1372822780718481, 10);
  sqcRYGate(q, 1.4398392684953993, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9959099868400294, 10);
  sqcRYGate(q, 1.116302475631963, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.091335486919268, 1);
  sqcRYGate(q, -1.9107663870726554, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.132947984048607, 1);
  sqcRYGate(q, -1.9565551137119064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.600681152568007, 3);
  sqcRYGate(q, -1.4644565667475928, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8497616892386999, 3);
  sqcRYGate(q, -1.4691255841438682, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5887896465247753, 5);
  sqcRYGate(q, -2.7660133322633933, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6033608448361312, 5);
  sqcRYGate(q, 1.8337622509755647, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8649107873092916, 7);
  sqcRYGate(q, 1.4631723717791925, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0033553016969909417, 7);
  sqcRYGate(q, -1.6539050100408028, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.642707165297226, 9);
  sqcRYGate(q, 0.14779371814955755, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.798901396292604, 9);
  sqcRYGate(q, 1.4573014363840224, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.8532014287993848, 0);
  sqcRYGate(q, 2.6230193393218597, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0185851147002793, 0);
  sqcRYGate(q, 0.1647813864578583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5122644456014651, 2);
  sqcRYGate(q, -1.6089038021744637, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2418513872377863, 2);
  sqcRYGate(q, 1.5492442976097278, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4777881292592019, 4);
  sqcRYGate(q, 2.7532997902079277, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.06248120031099013, 4);
  sqcRYGate(q, -2.418811607052898, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.178078461868856, 6);
  sqcRYGate(q, -0.03818800510520148, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6216102861468968, 6);
  sqcRYGate(q, 3.1327265897837546, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5691376358326086, 8);
  sqcRYGate(q, -2.3635313616054097, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.3462854751954225, 8);
  sqcRYGate(q, -2.4452263448315996, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.12007719595376098, 10);
  sqcRYGate(q, 2.3004242988523678, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.38088975220037236, 10);
  sqcRYGate(q, 0.135462273234511, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9503012055400024, 1);
  sqcRYGate(q, 2.6652458810180724, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4606010972466512, 1);
  sqcRYGate(q, 2.0232459631346345, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.99669387888959, 3);
  sqcRYGate(q, 2.9119976532913494, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.293727700292732, 3);
  sqcRYGate(q, 1.3282579284309908, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6040944405639568, 5);
  sqcRYGate(q, 2.6554215881743226, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0019385602582487952, 5);
  sqcRYGate(q, 0.9072891865507525, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6070783688683612, 7);
  sqcRYGate(q, -1.5459810543526344, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.16135039896949407, 7);
  sqcRYGate(q, -1.6806653513176864, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.03355967121445889, 9);
  sqcRYGate(q, -0.5711601076015663, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.02950063918684, 9);
  sqcRYGate(q, 3.0928152712300077, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.305670263610957, 0);
  sqcRYGate(q, 0.34902922756674215, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1384540871827205, 0);
  sqcRYGate(q, -0.06705874425056545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4721349515273308, 2);
  sqcRYGate(q, 2.731375715497475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5454579694129835, 2);
  sqcRYGate(q, 0.010152690561150202, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5823491982135136, 4);
  sqcRYGate(q, 1.1373469157547196, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0932183972356344, 4);
  sqcRYGate(q, 0.9489837122086745, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9626316333714606, 6);
  sqcRYGate(q, 2.5062324619196135, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.02257893600237062, 6);
  sqcRYGate(q, -2.092129797652569, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.16188647125674913, 8);
  sqcRYGate(q, 1.9971116186763265, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.0990432138696806, 8);
  sqcRYGate(q, -3.141386475006036, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6877100974545334, 10);
  sqcRYGate(q, 1.6624094451358629, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.8484997427569705, 10);
  sqcRYGate(q, -0.9950547839673849, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.163118154820654, 1);
  sqcRYGate(q, -2.4678955339732984, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.202424863055944, 1);
  sqcRYGate(q, -2.5372643718184533, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.500013786059003, 3);
  sqcRYGate(q, 0.26078469626916473, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0028694511819535376, 3);
  sqcRYGate(q, 3.13550967456475, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4672178346088858, 5);
  sqcRYGate(q, 1.5686238443358214, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5618005695030037, 5);
  sqcRYGate(q, 3.139380681638537, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5328433891238924, 7);
  sqcRYGate(q, -0.12886363581843344, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.18228708991576, 7);
  sqcRYGate(q, -1.5624879107832148, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.1984131257883837, 9);
  sqcRYGate(q, -3.116496590324312, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.1410467945819978, 9);
  sqcRYGate(q, -0.031401695040025455, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.037451825222432, 0);
  sqcRYGate(q, 0.34098307396044086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.00016350850945326775, 0);
  sqcRYGate(q, 2.0544526899077944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5712104627826626, 2);
  sqcRYGate(q, 0.8290790635511954, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.10123795631685116, 2);
  sqcRYGate(q, -1.5806392664218212, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9596902324395267, 4);
  sqcRYGate(q, 2.002946776226916, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5692107856980635, 4);
  sqcRYGate(q, -2.018076738049478, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2305389941264133, 6);
  sqcRYGate(q, -1.565173999712729, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5780121591187655, 6);
  sqcRYGate(q, -0.0922703038710049, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5679954709475599, 8);
  sqcRYGate(q, -3.0890414586688375, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4854879280395838, 8);
  sqcRYGate(q, -2.5274424560829702, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.11317035713566494, 10);
  sqcRYGate(q, -1.7065395632945117, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8667308494461547, 10);
  sqcRYGate(q, -2.128408031646174, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.1541106435051436, 1);
  sqcRYGate(q, -1.5795528860085197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.767193709533798, 1);
  sqcRYGate(q, 1.563837775054501, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7621509900162984, 3);
  sqcRYGate(q, -1.165745346426853, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.140826961283585, 3);
  sqcRYGate(q, 1.5794952731223784, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5621146324246318, 5);
  sqcRYGate(q, 0.914704136872763, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5721820356840404, 5);
  sqcRYGate(q, 1.5460059257870178, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5719197216918506, 7);
  sqcRYGate(q, 1.5710783673970241, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5681606800361125, 7);
  sqcRYGate(q, 1.6053260270461625, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.436079206051822, 9);
  sqcRYGate(q, 1.7660977366265422, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5700554005501959, 9);
  sqcRYGate(q, -1.567687228492014, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3608231620701812, 0);
  sqcRYGate(q, -0.0234442713532499, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9164588699614824, 0);
  sqcRYGate(q, 3.1300674897481175, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7639517163562106, 2);
  sqcRYGate(q, 1.5705783398839848, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9003807415037597, 2);
  sqcRYGate(q, 2.355153198936743, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0760095911339382, 4);
  sqcRYGate(q, 1.5726880246065822, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6236200574273578, 4);
  sqcRYGate(q, 1.57229343215002, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5703207407857374, 6);
  sqcRYGate(q, -1.5724337588425237, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.764570018133718, 6);
  sqcRYGate(q, 1.5504797580301046, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4762637482444187, 8);
  sqcRYGate(q, 1.570340211525381, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5862721805629556, 8);
  sqcRYGate(q, 3.135898506136127, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5713930681725872, 10);
  sqcRYGate(q, 0.8483623926129908, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.574756982618831, 10);
  sqcRYGate(q, -1.5696395152251028, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8906161744403556, 1);
  sqcRYGate(q, 1.8030811944528535, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.003934717892525888, 1);
  sqcRYGate(q, 3.1408165317293886, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5688989163260176, 3);
  sqcRYGate(q, 1.5708016647538003, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.573521208532231, 3);
  sqcRYGate(q, 1.5614395633554274, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5695007998113448, 5);
  sqcRYGate(q, -2.422085404728556, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1414976532728804, 5);
  sqcRYGate(q, -1.570346098032152, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5762883218368078, 7);
  sqcRYGate(q, 1.4807381741919432, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.560849749427038, 7);
  sqcRYGate(q, 1.5754711257633867, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.480000856881209, 9);
  sqcRYGate(q, 1.5733169933795237, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5698670398218546, 9);
  sqcRYGate(q, 3.135797410962748, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.16995204250456, 0);
  sqcRYGate(q, -0.29836405829896506, 1);
  sqcRYGate(q, -0.23439735112296683, 2);
  sqcRYGate(q, 1.5706886354980911, 3);
  sqcRYGate(q, -3.1410526538337917, 4);
  sqcRYGate(q, 1.5703406716690393, 5);
  sqcRYGate(q, -0.8512837756473546, 6);
  sqcRYGate(q, 1.570510992470191, 7);
  sqcRYGate(q, 3.138071088689881, 8);
  sqcRYGate(q, 1.6613315854976551, 9);
  sqcRYGate(q, 2.9843056075896413, 10);
  sqcRYGate(q, 3.138359998156235, 11);

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
