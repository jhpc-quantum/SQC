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

  sqcRYGate(q, 1.4420796668271878, 0);
  sqcRYGate(q, 0.522854226468846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9756934625833237, 0);
  sqcRYGate(q, -0.40842388700973764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3487334113931313, 2);
  sqcRYGate(q, -0.49875999537988314, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.131091087160735, 2);
  sqcRYGate(q, -2.523065676985491, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.175394934711262, 0);
  sqcRYGate(q, -2.795340142240463, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7828758931723064, 0);
  sqcRYGate(q, -0.48441007038644246, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9268011663821494, 1);
  sqcRYGate(q, -1.5578509306653023, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.16997927337032923, 1);
  sqcRYGate(q, -1.9380499706837186, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1463823833802638, 0);
  sqcRYGate(q, 0.40853682202618374, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4589951169294864, 0);
  sqcRYGate(q, -3.0950662099851556, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4788378511088258, 1);
  sqcRYGate(q, -0.05214832329476193, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5370668999533429, 1);
  sqcRYGate(q, 2.643474437682474, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.876045595420416, 0);
  sqcRYGate(q, -0.49114549112748673, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9407407792001354, 0);
  sqcRYGate(q, -0.32538280877152653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.38523044404114315, 2);
  sqcRYGate(q, -2.640931236364506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.47624115344242046, 2);
  sqcRYGate(q, -3.0492742361428533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3657890190856374, 0);
  sqcRYGate(q, 1.87267961083431, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2827980250836184, 0);
  sqcRYGate(q, 2.109642172664384, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5209045286276415, 1);
  sqcRYGate(q, 0.12180997459402466, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.265234058074089, 1);
  sqcRYGate(q, 2.950473801256962, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.43989920993049303, 0);
  sqcRYGate(q, 0.22952262456242511, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1128556938789163, 0);
  sqcRYGate(q, -0.6743668639478547, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.905664400510344, 1);
  sqcRYGate(q, -1.3005208423309194, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6277120745478064, 1);
  sqcRYGate(q, -1.7826071993131123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7043335525255879, 0);
  sqcRYGate(q, 2.325228355713438, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0932314415727085, 0);
  sqcRYGate(q, 2.6505623755361762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4284832511918886, 2);
  sqcRYGate(q, -2.925196699163806, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0075469859007027, 2);
  sqcRYGate(q, 2.433585378489632, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1011234505721865, 0);
  sqcRYGate(q, 0.07800012791667488, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5357685962936434, 0);
  sqcRYGate(q, 2.757190380470462, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1138118274301396, 1);
  sqcRYGate(q, -0.8857567968261222, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9293328259282913, 1);
  sqcRYGate(q, 0.9939654965792046, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7775365431486927, 0);
  sqcRYGate(q, 1.3457832617693775, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3571749067068109, 0);
  sqcRYGate(q, 0.15221186716511867, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.11705778596566, 1);
  sqcRYGate(q, 0.7064855419021097, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3866127163327824, 1);
  sqcRYGate(q, -0.5651022870179512, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8610955623422472, 0);
  sqcRYGate(q, 0.9752901679226877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9086457942645382, 0);
  sqcRYGate(q, -1.2320493029923751, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9090607550974383, 2);
  sqcRYGate(q, 2.062628397811795, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.260439391163801, 2);
  sqcRYGate(q, -2.8168309790424537, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.46756590768421935, 0);
  sqcRYGate(q, 2.627952352442118, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.769967646931849, 0);
  sqcRYGate(q, -0.5196396711244224, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8018449947063643, 1);
  sqcRYGate(q, -1.50181212752391, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4160822866219935, 1);
  sqcRYGate(q, -1.6692591421223115, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0983166424522814, 0);
  sqcRYGate(q, -0.6016856962987678, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5936308908887153, 0);
  sqcRYGate(q, 0.5221641986027459, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.19357481479030444, 1);
  sqcRYGate(q, 1.4777708296453431, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.19800002050876403, 1);
  sqcRYGate(q, 0.5985879688487054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4217155381250226, 0);
  sqcRYGate(q, 2.8197675329095775, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.735535340470693, 0);
  sqcRYGate(q, -2.150549365960546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8302120639141253, 2);
  sqcRYGate(q, -2.826008752432039, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6530742186426273, 2);
  sqcRYGate(q, -2.306731881533461, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0011966116907485584, 0);
  sqcRYGate(q, -2.3944751811274627, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.506246344062606, 0);
  sqcRYGate(q, -2.803323996763152, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7396205731975036, 1);
  sqcRYGate(q, 2.8328749470930097, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8368504321756092, 1);
  sqcRYGate(q, 1.583448398168569, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8598321535537004, 0);
  sqcRYGate(q, -0.28527257598750577, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.615913796458269, 0);
  sqcRYGate(q, -1.340982655687605, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2640136990653943, 1);
  sqcRYGate(q, 1.6538799035194085, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.027953971891414, 1);
  sqcRYGate(q, 1.0334713524755577, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7145404011924983, 0);
  sqcRYGate(q, -2.1086611065261893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.779480954518533, 0);
  sqcRYGate(q, 2.704070991226472, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5875835855961014, 2);
  sqcRYGate(q, -1.5978451997298262, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.897676531516459, 2);
  sqcRYGate(q, 1.5132669279626079, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.491157257440787, 0);
  sqcRYGate(q, -0.7024597069286812, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9112390270709545, 0);
  sqcRYGate(q, -2.978952837514705, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.99382866253536, 1);
  sqcRYGate(q, 0.1566875531331311, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.11286931851329207, 1);
  sqcRYGate(q, -0.023980131019683524, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2145371007679597, 0);
  sqcRYGate(q, -1.6550563300809733, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.13055978545066083, 0);
  sqcRYGate(q, 2.648858101589347, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5120147065710148, 1);
  sqcRYGate(q, 0.4021544806858115, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3480414112197252, 1);
  sqcRYGate(q, 0.4160687525277177, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4145810174991338, 0);
  sqcRYGate(q, -1.561499507060089, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5841460939159431, 0);
  sqcRYGate(q, -0.8756386734177434, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3654637888176793, 2);
  sqcRYGate(q, 3.134023570528826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3435272797214187, 2);
  sqcRYGate(q, 0.34688912249196135, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7739659522479565, 0);
  sqcRYGate(q, 2.507373130124239, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6651660286411901, 0);
  sqcRYGate(q, 1.5136719134362597, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1691735375977128, 1);
  sqcRYGate(q, 1.5998858766625756, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.225048356883071, 1);
  sqcRYGate(q, -1.8044844036776788, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8333298215485145, 0);
  sqcRYGate(q, 1.9381740474040945, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7034985547051749, 0);
  sqcRYGate(q, -0.9853161800517931, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.14877759413997, 1);
  sqcRYGate(q, -2.40787896842721, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6670237324784805, 1);
  sqcRYGate(q, 2.1888547533569875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7030072025978339, 0);
  sqcRYGate(q, 0.15596032588632883, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1978391729560043, 0);
  sqcRYGate(q, 0.6699655391011232, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9653927788633974, 2);
  sqcRYGate(q, 0.29741311013216776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.24906060700583793, 2);
  sqcRYGate(q, 2.222559538007178, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.006485556890542, 0);
  sqcRYGate(q, 1.161689517936383, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1548922631357565, 0);
  sqcRYGate(q, 0.037985682802872574, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5514901621139998, 1);
  sqcRYGate(q, -2.1059841090380336, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5785782537962194, 1);
  sqcRYGate(q, 1.2260693964885325, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2221476868477668, 0);
  sqcRYGate(q, -2.7386276110366077, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.694384170574196, 0);
  sqcRYGate(q, 0.8537026047779464, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5174820789578813, 1);
  sqcRYGate(q, 2.513899939839348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.005131342125555, 1);
  sqcRYGate(q, -0.5458125046958728, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6465312935315186, 0);
  sqcRYGate(q, -0.5585232290378976, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6343209079421367, 0);
  sqcRYGate(q, -2.037634979916587, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8146152897702441, 2);
  sqcRYGate(q, 0.7881239204093573, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1162873509159388, 2);
  sqcRYGate(q, -3.0219803689513802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.43724123904734746, 0);
  sqcRYGate(q, 2.256559447467425, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.06710240548471152, 0);
  sqcRYGate(q, 1.6090172090869437, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.638613598528523, 1);
  sqcRYGate(q, -1.0958237397014532, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.22020866812765233, 1);
  sqcRYGate(q, -0.8099397311854278, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3277645399925317, 0);
  sqcRYGate(q, 2.484347753074856, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3611214117997798, 0);
  sqcRYGate(q, -2.9182042657118226, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.050139973338163564, 1);
  sqcRYGate(q, -0.03865486975998143, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.33202097093939376, 1);
  sqcRYGate(q, -2.6665913928027356, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9740477847591249, 0);
  sqcRYGate(q, 2.3902574316508494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1360070840508686, 0);
  sqcRYGate(q, 0.5290799851984289, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.584246799864544, 2);
  sqcRYGate(q, 2.163928386235285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.514047017688772, 2);
  sqcRYGate(q, -1.7181670082018117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.974842066277874, 0);
  sqcRYGate(q, -2.490621574534518, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6176068307277047, 0);
  sqcRYGate(q, -0.23279509061140694, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1133008086931602, 1);
  sqcRYGate(q, 0.43497882220856354, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.064700778477821, 1);
  sqcRYGate(q, -0.5316634876637308, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.171636440068741, 0);
  sqcRYGate(q, 1.919828218637534, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.871536125798398, 0);
  sqcRYGate(q, 0.8986420369537383, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1281590476335843, 1);
  sqcRYGate(q, 1.862479282925432, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4036244331914794, 1);
  sqcRYGate(q, 2.8607660880750556, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.538144239741021, 0);
  sqcRYGate(q, 2.252797244480292, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5682775488036882, 0);
  sqcRYGate(q, 2.632489542701384, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2656147797387245, 2);
  sqcRYGate(q, -1.2725410705427627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7071470408544505, 2);
  sqcRYGate(q, -2.087722208988051, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8585193170007032, 0);
  sqcRYGate(q, -2.6237154964342384, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0950298949300694, 0);
  sqcRYGate(q, 2.532240984654568, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.675252179042251, 1);
  sqcRYGate(q, -0.08739669550210034, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.038128201959113, 1);
  sqcRYGate(q, -0.8014509152036611, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.361494632269883, 0);
  sqcRYGate(q, 2.5305437297050286, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6524720679387548, 0);
  sqcRYGate(q, -1.3368368452209318, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.535335919361916, 1);
  sqcRYGate(q, -0.8172932766204238, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6893659744836442, 1);
  sqcRYGate(q, -1.917896417823373, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8577871605157283, 0);
  sqcRYGate(q, -0.46045749459574026, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.424223650098842, 0);
  sqcRYGate(q, -1.2774364317267333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9579989285404618, 2);
  sqcRYGate(q, 0.17081690892921045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.79864873915227, 2);
  sqcRYGate(q, -0.597934804686113, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4640553170310913, 0);
  sqcRYGate(q, -0.7129036898701572, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0261007558137285, 0);
  sqcRYGate(q, 0.9719236760832458, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.19322005755497518, 1);
  sqcRYGate(q, 0.619640050322165, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7688819751181428, 1);
  sqcRYGate(q, 0.7049304632749873, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2124921327429972, 0);
  sqcRYGate(q, -1.1291663835431818, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.544994286232335, 0);
  sqcRYGate(q, 3.134862980823828, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9702852869269423, 1);
  sqcRYGate(q, -2.2238025042122866, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7385366945462453, 1);
  sqcRYGate(q, -2.5420724765506435, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7537087514031, 0);
  sqcRYGate(q, -1.0647302061807584, 1);
  sqcRYGate(q, -1.683592601699316, 2);
  sqcRYGate(q, 0.7081292625100752, 3);

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
