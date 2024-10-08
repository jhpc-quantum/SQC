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

  sqcRYGate(q, 1.6214515369263198, 0);
  sqcRYGate(q, -0.483990032443006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.33720446757785627, 0);
  sqcRYGate(q, -0.1998664257600842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08435253614441153, 2);
  sqcRYGate(q, -2.6267026337913664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.303856686859466, 2);
  sqcRYGate(q, 2.766774388593409, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3017791505797778, 4);
  sqcRYGate(q, -0.3922848838759294, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3557101517296664, 4);
  sqcRYGate(q, -2.698052874019663, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.068413746521524, 6);
  sqcRYGate(q, -0.4422700373259243, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4939314058640674, 6);
  sqcRYGate(q, -1.1618187953721721, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7324535880889387, 0);
  sqcRYGate(q, -1.7091826842995035, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9850566608846911, 0);
  sqcRYGate(q, -1.595839078268589, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.844544866514731, 2);
  sqcRYGate(q, 1.1723802554065612, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5065881192997415, 2);
  sqcRYGate(q, -1.7777024146993607, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.19528785421139, 4);
  sqcRYGate(q, -0.8710708394937079, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.0563469666504792, 4);
  sqcRYGate(q, -1.2505461179793744, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.10480234733519554, 1);
  sqcRYGate(q, 2.2887994789332073, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5194437524700195, 1);
  sqcRYGate(q, 2.6034217689770864, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9043393456512616, 3);
  sqcRYGate(q, -3.1211966921416385, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.6804129676406134, 3);
  sqcRYGate(q, 2.9002119354828193, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9884299618345685, 5);
  sqcRYGate(q, 0.7813208760850037, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4493598423971106, 5);
  sqcRYGate(q, 2.1681253764168105, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.737365825257521, 0);
  sqcRYGate(q, -1.9788554914451915, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7277099143345284, 0);
  sqcRYGate(q, -2.9685314405889454, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9751304301335763, 2);
  sqcRYGate(q, 0.6804843168618258, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.45664041326405, 2);
  sqcRYGate(q, 0.7867693985069774, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7203047130271847, 4);
  sqcRYGate(q, -0.23304835669595736, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0290053161739756, 4);
  sqcRYGate(q, -0.5114195500094381, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.430039263609255, 6);
  sqcRYGate(q, -2.049631772206295, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7847605064229638, 6);
  sqcRYGate(q, 0.1529569745336632, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3166967921877104, 0);
  sqcRYGate(q, 1.4720154000014114, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.85109814337038, 0);
  sqcRYGate(q, -2.047528824348931, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7985186166841993, 2);
  sqcRYGate(q, -1.5785995082246542, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.137906540820359, 2);
  sqcRYGate(q, 0.84541477258906, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.623836438761025, 4);
  sqcRYGate(q, 1.3823904336292785, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.9117023806032325, 4);
  sqcRYGate(q, 0.06957637618628941, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.774317005202874, 1);
  sqcRYGate(q, -1.3061841377782315, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1551713844047824, 1);
  sqcRYGate(q, -0.294500310651447, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1078325556879767, 3);
  sqcRYGate(q, 0.24599303485593538, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.492601176682239, 3);
  sqcRYGate(q, -0.34516090460481497, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.600030391365731, 5);
  sqcRYGate(q, 0.9655066649004187, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.7475896697044728, 5);
  sqcRYGate(q, -1.322297915901352, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.23464808255937863, 0);
  sqcRYGate(q, -1.7435519452870025, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5829216368494691, 0);
  sqcRYGate(q, -1.1512524871369019, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4583357754343207, 2);
  sqcRYGate(q, -0.9041153772189611, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.522949897660007, 2);
  sqcRYGate(q, 2.869530927514619, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.131427881379834, 4);
  sqcRYGate(q, 0.1280241239824069, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.027885257580242826, 4);
  sqcRYGate(q, 1.0116709966185875, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0389045682014908, 6);
  sqcRYGate(q, -1.139117840889795, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6965904538256584, 6);
  sqcRYGate(q, 1.8238019058071486, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6753918537847354, 0);
  sqcRYGate(q, -0.6760763042356297, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5447857806128154, 0);
  sqcRYGate(q, -0.13792722564216234, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0517527462914922, 2);
  sqcRYGate(q, 0.026904072683046284, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.9902075648243622, 2);
  sqcRYGate(q, 1.8565709038151337, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.33942722759931776, 4);
  sqcRYGate(q, 1.2410153558544412, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4505527380797756, 4);
  sqcRYGate(q, 2.34471954223287, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.9257512505700305, 1);
  sqcRYGate(q, 2.762591559224742, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.73322664044335, 1);
  sqcRYGate(q, -2.224757032093593, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7296742394159144, 3);
  sqcRYGate(q, 2.187310334649001, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.4210529656962469, 3);
  sqcRYGate(q, 2.8478962206868847, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.649746814116041, 5);
  sqcRYGate(q, -2.118853092463481, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1076233730576663, 5);
  sqcRYGate(q, 0.8701752309043709, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.0228315728274402, 0);
  sqcRYGate(q, -0.68616631447955, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4555323550797832, 0);
  sqcRYGate(q, 2.4710042060663486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5664560064209727, 2);
  sqcRYGate(q, -2.2298032404862145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0907053498979273, 2);
  sqcRYGate(q, -1.285246995640643, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3259086210437023, 4);
  sqcRYGate(q, 0.041380325851585686, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.441446066416006, 4);
  sqcRYGate(q, -2.1632152506554356, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.577969474373289, 6);
  sqcRYGate(q, 0.9492351371818409, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9215335057447753, 6);
  sqcRYGate(q, -1.3216795335616665, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.801565138559964, 0);
  sqcRYGate(q, 2.818864675832866, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2163424933611247, 0);
  sqcRYGate(q, -0.2801690695773446, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.524235674025453, 2);
  sqcRYGate(q, 2.7270539452089304, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.049807964153842, 2);
  sqcRYGate(q, 0.09822354472539804, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9909575630972627, 4);
  sqcRYGate(q, 2.157858955053722, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.554964690281255, 4);
  sqcRYGate(q, 0.0027897881485543508, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.077907668358618, 1);
  sqcRYGate(q, -2.743241733170085, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6935428520690037, 1);
  sqcRYGate(q, 2.8107487588605706, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1316210912699205, 3);
  sqcRYGate(q, 0.6821683111376604, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.7494951477816979, 3);
  sqcRYGate(q, -1.7532788293759678, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.4670769719388037, 5);
  sqcRYGate(q, 0.6176581867916295, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.2378429208013468, 5);
  sqcRYGate(q, -0.42471292284041107, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5446950575055487, 0);
  sqcRYGate(q, 2.3966444392614954, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2984489387145515, 0);
  sqcRYGate(q, -2.662802648782723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.347888221277339, 2);
  sqcRYGate(q, -3.0985550321652853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.964651610636437, 2);
  sqcRYGate(q, 0.6556509860720576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2520597257009847, 4);
  sqcRYGate(q, 2.5769877930479064, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9340099378994347, 4);
  sqcRYGate(q, 0.2625756079519421, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.237273320616806, 6);
  sqcRYGate(q, 0.7083460407788147, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5857654314556635, 6);
  sqcRYGate(q, 3.06810578719786, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.159000872279253, 0);
  sqcRYGate(q, 1.819067571599736, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5470155018193712, 0);
  sqcRYGate(q, -1.8924292170928931, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2300468455849805, 2);
  sqcRYGate(q, 3.0001873414440863, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7187801694397706, 2);
  sqcRYGate(q, 0.6106900550004127, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.41176824016728, 4);
  sqcRYGate(q, -2.759140180931575, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7661076910270985, 4);
  sqcRYGate(q, 0.7611456209319005, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.831176635385255, 1);
  sqcRYGate(q, -1.6011221261169237, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9136083712738703, 1);
  sqcRYGate(q, 0.9568635604235105, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5813723032323751, 3);
  sqcRYGate(q, -0.998639702488604, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.23626526527095223, 3);
  sqcRYGate(q, 2.828657043204002, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3691483298595557, 5);
  sqcRYGate(q, -1.4321127625425754, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.3439117872744444, 5);
  sqcRYGate(q, 1.3581088915291097, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.6203831767082937, 0);
  sqcRYGate(q, -3.0652127253911865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5692831681315281, 0);
  sqcRYGate(q, -1.438572510153179, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5690282622610656, 2);
  sqcRYGate(q, 2.998651650735737, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3775893578954654, 2);
  sqcRYGate(q, 2.1425328758743065, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.34555870156855617, 4);
  sqcRYGate(q, 3.0478772729413164, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4122931023697999, 4);
  sqcRYGate(q, 1.363321240488257, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9112296167588809, 6);
  sqcRYGate(q, 1.442868944616851, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6800019907684303, 6);
  sqcRYGate(q, 1.374161248158013, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7483527077250489, 0);
  sqcRYGate(q, -0.526886601612933, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4093777749166892, 0);
  sqcRYGate(q, 2.2362278212850626, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2740424182397403, 2);
  sqcRYGate(q, -1.4718417923490046, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1986129231764107, 2);
  sqcRYGate(q, 2.1936260272002226, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.117328725933917, 4);
  sqcRYGate(q, 0.9123635708874899, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.3167536942212832, 4);
  sqcRYGate(q, 2.805413616453343, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.129618565406234, 1);
  sqcRYGate(q, -2.0306783928074132, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3861619472852373, 1);
  sqcRYGate(q, -0.34654871519012925, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.202204383004527, 3);
  sqcRYGate(q, -1.112330568318253, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.5600682925256234, 3);
  sqcRYGate(q, -0.905361419626962, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.6629407151759619, 5);
  sqcRYGate(q, -1.8316208052326388, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.2342562219783755, 5);
  sqcRYGate(q, 1.9128929362802236, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.2203599294748249, 0);
  sqcRYGate(q, 1.5765803549395894, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0953352347779033, 0);
  sqcRYGate(q, -1.7565425719429522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3884720901521979, 2);
  sqcRYGate(q, -2.0930387815886684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9546319450004086, 2);
  sqcRYGate(q, -2.162352844664228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9320778967875276, 4);
  sqcRYGate(q, 2.0522897060841157, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3075902378120718, 4);
  sqcRYGate(q, -0.44604945849080035, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.43575788560148987, 6);
  sqcRYGate(q, 0.9202885326731787, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.773252771710412, 6);
  sqcRYGate(q, 1.7607223193413344, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9459517461637361, 0);
  sqcRYGate(q, 1.0716906639543213, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.465794176724387, 0);
  sqcRYGate(q, 2.5116200872318406, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3260549479898132, 2);
  sqcRYGate(q, 0.817485083345658, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9140259571580334, 2);
  sqcRYGate(q, 2.323762150764617, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.503318126766914, 4);
  sqcRYGate(q, 0.9618068004414848, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.7541504539931805, 4);
  sqcRYGate(q, -1.9228309611421937, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.1888387083676033, 1);
  sqcRYGate(q, 3.0813967710573715, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3621193052165927, 1);
  sqcRYGate(q, -0.9862491873677937, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6137213438414512, 3);
  sqcRYGate(q, 1.124389572959915, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9658341432109419, 3);
  sqcRYGate(q, 1.5348495439752954, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.50320881464618, 5);
  sqcRYGate(q, 1.499244249993804, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.7355813522354725, 5);
  sqcRYGate(q, 2.2393941973278535, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.1594820571259365, 0);
  sqcRYGate(q, 1.7961587259769876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.237304616924216, 0);
  sqcRYGate(q, 2.27404888547957, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8838552021762842, 2);
  sqcRYGate(q, 2.0225388981090813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1339320372940715, 2);
  sqcRYGate(q, 2.341985788670139, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.16659604958101773, 4);
  sqcRYGate(q, -1.3863076596946218, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9720561975553652, 4);
  sqcRYGate(q, 0.051752246464671366, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.117079710460056, 6);
  sqcRYGate(q, 1.7103818836486449, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.10743930236909, 6);
  sqcRYGate(q, -2.3364490639192166, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.075720395136246, 0);
  sqcRYGate(q, 2.285976507985108, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9638852042396822, 0);
  sqcRYGate(q, -0.5365776261344092, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4241608703829171, 2);
  sqcRYGate(q, -2.316978006128866, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.75137221100953, 2);
  sqcRYGate(q, -2.5547219838214676, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7156013069826749, 4);
  sqcRYGate(q, 2.206866983453298, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7807658229896939, 4);
  sqcRYGate(q, -2.047117965085182, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.0083305253270645, 1);
  sqcRYGate(q, -1.854785737460304, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3310732524027777, 1);
  sqcRYGate(q, -1.4234870096660905, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.41773834023628176, 3);
  sqcRYGate(q, 2.341494407956504, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.0272109945845003, 3);
  sqcRYGate(q, 0.8933215209298475, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8362777761394922, 5);
  sqcRYGate(q, 2.477976913668365, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.09903102573785329, 5);
  sqcRYGate(q, 1.2725427091728143, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.0649519516127537, 0);
  sqcRYGate(q, 2.558522013125089, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0358071214992473, 0);
  sqcRYGate(q, -1.6960763272159658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6890802265941054, 2);
  sqcRYGate(q, 0.720111272071552, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1156025008652404, 2);
  sqcRYGate(q, -1.3131595854180491, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4450499272706354, 4);
  sqcRYGate(q, -1.0499547601321009, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.297889341547321, 4);
  sqcRYGate(q, 2.6403782746915283, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0029078424146320005, 6);
  sqcRYGate(q, 0.8926317518869024, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3766540990878093, 6);
  sqcRYGate(q, 2.3723267192548603, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.058893851203929946, 0);
  sqcRYGate(q, 2.5655437233226737, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.663789513615948, 0);
  sqcRYGate(q, -2.2045177647538394, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.49134669916611706, 2);
  sqcRYGate(q, -1.1443897422719456, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.6772867576892931, 2);
  sqcRYGate(q, -1.5642815462641706, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.2037595927338991, 4);
  sqcRYGate(q, 3.046670858041937, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.3259142456907833, 4);
  sqcRYGate(q, 1.7881701326750905, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.177869463593173, 1);
  sqcRYGate(q, -2.690849394598261, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2062912168189681, 1);
  sqcRYGate(q, 2.467040747557433, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7147198249080944, 3);
  sqcRYGate(q, -1.5310267724982027, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9616383895639338, 3);
  sqcRYGate(q, 2.966326626273474, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.295240891159664, 5);
  sqcRYGate(q, -1.6605073086290574, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.021904045338182562, 5);
  sqcRYGate(q, -2.206429365417753, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.2677933776631569, 0);
  sqcRYGate(q, 0.6662578676646955, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8936813456062209, 0);
  sqcRYGate(q, 2.7073831024885444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2327367803008213, 2);
  sqcRYGate(q, -0.47880915986110745, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.13777142423913735, 2);
  sqcRYGate(q, -0.5505831225674234, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9748545196833527, 4);
  sqcRYGate(q, -1.1018217012794445, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.357980463414122, 4);
  sqcRYGate(q, 2.2001175797859336, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5729584857246677, 6);
  sqcRYGate(q, 0.6254777815491536, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2127601183620005, 6);
  sqcRYGate(q, -1.1889494131118334, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2130202962821386, 0);
  sqcRYGate(q, 0.22546010413671347, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3358649209543962, 0);
  sqcRYGate(q, -2.021528343420592, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.649962465993512, 2);
  sqcRYGate(q, -2.038965038676205, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9439007908909618, 2);
  sqcRYGate(q, 0.5342854383766797, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.9012047730835775, 4);
  sqcRYGate(q, 0.05688105103405666, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4313465448921316, 4);
  sqcRYGate(q, -0.8850470639550918, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.22644987730890434, 1);
  sqcRYGate(q, 1.2331828107687473, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7472416592155975, 1);
  sqcRYGate(q, 0.0506870680199496, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0063249312419318, 3);
  sqcRYGate(q, -1.3381046729197512, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.43674127594990075, 3);
  sqcRYGate(q, -2.041604425846484, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.607457365368446, 5);
  sqcRYGate(q, 0.4510161883397865, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.728121325919722, 5);
  sqcRYGate(q, 1.5216797324353755, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.960586717027848, 0);
  sqcRYGate(q, 1.7746889182820196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6792077406780024, 0);
  sqcRYGate(q, 0.7151068046270437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.52437235367438, 2);
  sqcRYGate(q, -1.0652513818966438, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.303770617942723, 2);
  sqcRYGate(q, -1.9835880702230826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.474829554548882, 4);
  sqcRYGate(q, 0.41409000684375297, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8921643725196282, 4);
  sqcRYGate(q, 1.8775416121429003, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.348410984623611, 6);
  sqcRYGate(q, 1.2588201150793807, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3216636006250164, 6);
  sqcRYGate(q, -0.17239597674566354, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9289093937856696, 0);
  sqcRYGate(q, -0.7011880007974378, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3299742048618537, 0);
  sqcRYGate(q, 1.2537651323275574, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0205674402301603, 2);
  sqcRYGate(q, 0.10982832055669611, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.803931593723222, 2);
  sqcRYGate(q, -2.946571676292657, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.37484715287631776, 4);
  sqcRYGate(q, -0.1552635157813679, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.8912565695100042, 4);
  sqcRYGate(q, -1.004493367568351, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.819191266905224, 1);
  sqcRYGate(q, 2.1636761837644793, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.552990582720434, 1);
  sqcRYGate(q, 2.9418706735840097, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5820133662509555, 3);
  sqcRYGate(q, 2.7751632148663488, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.8903712773301184, 3);
  sqcRYGate(q, 0.9323061211622578, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.7487590564877538, 5);
  sqcRYGate(q, 0.1887436692309663, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.0777570585570871, 5);
  sqcRYGate(q, -0.8459307039891133, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.003092578015671, 0);
  sqcRYGate(q, -1.676864794469229, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0076739899050615, 0);
  sqcRYGate(q, -1.034918071988458, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9537273103842905, 2);
  sqcRYGate(q, -0.259964202938229, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.437267715295355, 2);
  sqcRYGate(q, -0.5141276734640118, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.687387155840383, 4);
  sqcRYGate(q, -0.09242447461802338, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9357886775569846, 4);
  sqcRYGate(q, 1.2575143906617714, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7187234703766467, 6);
  sqcRYGate(q, -0.8371822816434802, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.075578549716902, 6);
  sqcRYGate(q, -2.3615540399424986, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4554569144996476, 0);
  sqcRYGate(q, -3.1225181686607635, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7850675313161328, 0);
  sqcRYGate(q, 2.020065139161547, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0088390578217346, 2);
  sqcRYGate(q, 2.103736734203647, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.8564531707776204, 2);
  sqcRYGate(q, 1.2945591911008811, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.5905341595602889, 4);
  sqcRYGate(q, -0.9739038189518636, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5391160863151914, 4);
  sqcRYGate(q, 3.0113969553320032, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.6158516209386145, 1);
  sqcRYGate(q, -0.02052352956518355, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8890778084967894, 1);
  sqcRYGate(q, 2.976889525256466, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5804700136249163, 3);
  sqcRYGate(q, -1.2868100360146857, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.063559736155281, 3);
  sqcRYGate(q, 0.18879220871306224, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.28443311281174866, 5);
  sqcRYGate(q, 1.965293968863613, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.794610715801055, 5);
  sqcRYGate(q, 0.6820012354438036, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.2946548979028147, 0);
  sqcRYGate(q, -0.39914649741086744, 1);
  sqcRYGate(q, 0.4738435529116387, 2);
  sqcRYGate(q, -0.6305459890396969, 3);
  sqcRYGate(q, 0.445020729113609, 4);
  sqcRYGate(q, 0.25030763793136934, 5);
  sqcRYGate(q, -2.140488877309079, 6);
  sqcRYGate(q, 1.0655525232119247, 7);

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
