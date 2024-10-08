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

  sqcRYGate(q, 2.8561837948588806, 0);
  sqcRYGate(q, 2.5006392680857155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08305795806137588, 0);
  sqcRYGate(q, -1.7530085873790862, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.46581677158964774, 2);
  sqcRYGate(q, -1.3570526797125801, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7526720382392107, 2);
  sqcRYGate(q, 0.5994474459456496, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.256752625227489, 4);
  sqcRYGate(q, 0.5625131570498381, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.277551935873803, 4);
  sqcRYGate(q, -1.44327317588828, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8002204083802518, 6);
  sqcRYGate(q, 0.6851102838766633, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7590884526187311, 6);
  sqcRYGate(q, -2.286679976718963, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6793186547558507, 8);
  sqcRYGate(q, 0.7295538414373449, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6812943878399316, 8);
  sqcRYGate(q, -1.6433248660829807, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7935977346768417, 10);
  sqcRYGate(q, -1.1971270900002222, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7158480434159398, 10);
  sqcRYGate(q, 1.3981477565837137, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8029069737265024, 1);
  sqcRYGate(q, -0.27718734412808027, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6024089651723614, 1);
  sqcRYGate(q, 1.5084772163837685, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3163894723101084, 3);
  sqcRYGate(q, 2.371173173426261, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1415204446406184, 3);
  sqcRYGate(q, -7.845023377613434e-05, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.064660296681, 5);
  sqcRYGate(q, 2.715870516812513, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8649156713771564, 5);
  sqcRYGate(q, 3.1414249875210563, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0343656833242256, 7);
  sqcRYGate(q, 1.2125758276221765, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.8803421688482365, 7);
  sqcRYGate(q, 3.1401280188931726, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6945232302107938, 9);
  sqcRYGate(q, -0.8495683459118073, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.5431778877364044, 9);
  sqcRYGate(q, 2.5737730039089297, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.474888308982179, 0);
  sqcRYGate(q, -0.8127476889662429, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8163814261368382, 0);
  sqcRYGate(q, -1.512788443009768, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5248531119489783, 2);
  sqcRYGate(q, 2.5709669096913195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.577949026719898, 2);
  sqcRYGate(q, 0.8792208155049382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.722771349248525, 4);
  sqcRYGate(q, 1.5473522006169949, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.134753591135754, 4);
  sqcRYGate(q, -1.7863039135380314, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1013088356848737, 6);
  sqcRYGate(q, -2.9896541822981484, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.127725580761703, 6);
  sqcRYGate(q, 2.9238037159782646, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1679295948995234, 8);
  sqcRYGate(q, -2.35719929322959, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.39259660962240667, 8);
  sqcRYGate(q, 2.0177460080732077, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.2686298742230395, 10);
  sqcRYGate(q, -0.99172847105985, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.855229194457773, 10);
  sqcRYGate(q, -1.914762592261748, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.1184762736719547, 1);
  sqcRYGate(q, -2.876062489233462, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6729801051114706, 1);
  sqcRYGate(q, 1.4166015903897142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2149097265405837, 3);
  sqcRYGate(q, 0.8967225360579891, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.340296494172351, 3);
  sqcRYGate(q, 1.192094998231168, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.901093414669146, 5);
  sqcRYGate(q, 0.8305127957668578, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.619260182684269, 5);
  sqcRYGate(q, 1.4523423847170323, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.442922061991493, 7);
  sqcRYGate(q, -2.646901857914636, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.8250985003783704, 7);
  sqcRYGate(q, 2.215656347922927, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0959062304993457, 9);
  sqcRYGate(q, -2.8571686138842955, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.13462978651798, 9);
  sqcRYGate(q, 0.00781326226027179, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0460002891901166, 0);
  sqcRYGate(q, 2.991974815141899, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.998809047002897, 0);
  sqcRYGate(q, -2.983064749430611, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0174561674945926, 2);
  sqcRYGate(q, 2.4111968623275466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9049809786075516, 2);
  sqcRYGate(q, -0.29837758366269185, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8459806195427546, 4);
  sqcRYGate(q, 1.6762025591330931, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.000282278130735941, 4);
  sqcRYGate(q, 3.140445607778024, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.03742361291021675, 6);
  sqcRYGate(q, -2.5757920285068643, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0023769803551725, 6);
  sqcRYGate(q, -1.8956310554431866, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0730962695162933, 8);
  sqcRYGate(q, 0.7125850295475233, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.288762334305291, 8);
  sqcRYGate(q, 0.15472218354173498, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.7486955077530637, 10);
  sqcRYGate(q, 2.6817043738566735, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.39414486472835353, 10);
  sqcRYGate(q, -2.3780850254021035, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.2436284760442886, 1);
  sqcRYGate(q, 1.7243043154508781, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1765710669290232, 1);
  sqcRYGate(q, 2.944290653001125, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.37379613411442314, 3);
  sqcRYGate(q, -0.5684590199105726, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.17182154875434, 3);
  sqcRYGate(q, 3.137418215306866, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5733414367948715, 5);
  sqcRYGate(q, -2.6419199487875096, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.931272658006782, 5);
  sqcRYGate(q, 0.8984829701590091, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3013298413786023, 7);
  sqcRYGate(q, 1.4371099060743564, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.10272744000311229, 7);
  sqcRYGate(q, 2.1280004270132364, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.6056836874030425, 9);
  sqcRYGate(q, -2.372281561631169, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4491506214046774, 9);
  sqcRYGate(q, 2.6776320890928678, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.7385142199195083, 0);
  sqcRYGate(q, -1.155296050608188, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6504903488623217, 0);
  sqcRYGate(q, -2.739730694218406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3727397626588527, 2);
  sqcRYGate(q, -1.3981521755527067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.037931082693895994, 2);
  sqcRYGate(q, 2.557249893772424, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.089332507841502, 4);
  sqcRYGate(q, -0.11589034518815212, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -5.5563742247370815e-05, 4);
  sqcRYGate(q, 3.141010828649964, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5090726653413817, 6);
  sqcRYGate(q, -1.1122038713417748, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.87620568310108, 6);
  sqcRYGate(q, -2.9682568229035837, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2110384047526237, 8);
  sqcRYGate(q, 0.4653968664172947, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1346574711377215, 8);
  sqcRYGate(q, -0.00030006419858702313, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.04746124886489208, 10);
  sqcRYGate(q, 2.5770001008388768, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5074177528621047, 10);
  sqcRYGate(q, 0.18314740696487056, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0694090817584954, 1);
  sqcRYGate(q, -1.2554183074516077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3939997055187807, 1);
  sqcRYGate(q, 2.326183358355913, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.12166538180453003, 3);
  sqcRYGate(q, 3.0634409294024945, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3561520662153095, 3);
  sqcRYGate(q, 1.923376996892826, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.44100896032829784, 5);
  sqcRYGate(q, -2.894761088429415, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.07260944874152768, 5);
  sqcRYGate(q, 1.4298546993517753, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2537646999102847, 7);
  sqcRYGate(q, 2.8075727206436913, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.9937800373363095, 7);
  sqcRYGate(q, 0.05058478537992553, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.9338379734789477, 9);
  sqcRYGate(q, -1.9570181895748575, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.014194959201506091, 9);
  sqcRYGate(q, 0.33034577833802103, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5141009389128541, 0);
  sqcRYGate(q, -0.20905904246274823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3430336523680166, 0);
  sqcRYGate(q, -1.6677775047715924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6767165330458381, 2);
  sqcRYGate(q, 0.3413838132888021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.038387271558716, 2);
  sqcRYGate(q, -3.013873704602294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9588656738107995, 4);
  sqcRYGate(q, -0.31481670743054596, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.00028097054401410304, 4);
  sqcRYGate(q, 0.0030783636878686242, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9618071199583187, 6);
  sqcRYGate(q, 2.560584487641585, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.260603990892591, 6);
  sqcRYGate(q, 3.1389274484351066, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7819031215716158, 8);
  sqcRYGate(q, -2.571737415077286, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.674170368074706, 8);
  sqcRYGate(q, 0.003679104102092942, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.02966401634725, 10);
  sqcRYGate(q, 0.2198563598351125, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.1175903197891939, 10);
  sqcRYGate(q, -3.061460261181781, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.10544629061082489, 1);
  sqcRYGate(q, -0.3873696181089068, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0218144590620573, 1);
  sqcRYGate(q, 1.7654492302539904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6894944770535718, 3);
  sqcRYGate(q, 2.013436406357947, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.22874394859464, 3);
  sqcRYGate(q, 0.4384107012980693, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2085539324979493, 5);
  sqcRYGate(q, 2.0987271553870843, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.865650757012282, 5);
  sqcRYGate(q, -0.47351266312128604, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0476060080577385, 7);
  sqcRYGate(q, -0.5352541512273657, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5188624090773144, 7);
  sqcRYGate(q, 0.6747933553957761, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.73347445503092, 9);
  sqcRYGate(q, -2.821859498170836, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4595726793429966, 9);
  sqcRYGate(q, -3.075057557116421, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3414471445391971, 0);
  sqcRYGate(q, 2.1149083919381333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2945450264383007, 0);
  sqcRYGate(q, 2.1520854159745983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1628188181509511, 2);
  sqcRYGate(q, -1.446130158976681, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.244821922124769, 2);
  sqcRYGate(q, 1.991306366621959, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5798175928234102, 4);
  sqcRYGate(q, 1.1515033587035002, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.007299908042263326, 4);
  sqcRYGate(q, -0.001143272677709165, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0624873212067705, 6);
  sqcRYGate(q, 0.8846653513191933, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9929463640308152, 6);
  sqcRYGate(q, -1.011694000459248, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9556036569879693, 8);
  sqcRYGate(q, -0.35599694560703427, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1152464043269923, 8);
  sqcRYGate(q, 1.5361752031107132, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.781731033878797, 10);
  sqcRYGate(q, -1.2431408075210788, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.1074337987449443, 10);
  sqcRYGate(q, -0.6066357605051191, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.103123680344658, 1);
  sqcRYGate(q, 1.4212554266559878, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07164066962993888, 1);
  sqcRYGate(q, -2.7842848041410795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7568988717341227, 3);
  sqcRYGate(q, -1.1597654622229845, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.060780329908522, 3);
  sqcRYGate(q, -2.7501517499342762, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7882412654358215, 5);
  sqcRYGate(q, 3.0953394432280636, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1365967723082773, 5);
  sqcRYGate(q, 2.5861145475308303, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4093109751543617, 7);
  sqcRYGate(q, -2.4608879101101335, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.05720277208188503, 7);
  sqcRYGate(q, -0.0053109233906036835, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9997078691283239, 9);
  sqcRYGate(q, -1.1677097832976588, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9257564820970955, 9);
  sqcRYGate(q, -0.026866637301563575, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.16077606182048498, 0);
  sqcRYGate(q, 1.2481158859894252, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.701480773152754, 0);
  sqcRYGate(q, 2.9264209121348568, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.047995977856145, 2);
  sqcRYGate(q, 1.7817189883396214, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3498303176179736, 2);
  sqcRYGate(q, 3.086402231672575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1593343338879087, 4);
  sqcRYGate(q, -0.22263406862913548, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9776553283872293, 4);
  sqcRYGate(q, 3.1412450775497014, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5300572703455346, 6);
  sqcRYGate(q, 0.40284715702397295, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1998253792443334, 6);
  sqcRYGate(q, -1.9408823657177265, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7614493016317905, 8);
  sqcRYGate(q, -1.948540652726104, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1157826867821683, 8);
  sqcRYGate(q, -0.6580509897793795, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.914200832145379, 10);
  sqcRYGate(q, -2.8526432049801604, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.809963023904209, 10);
  sqcRYGate(q, 2.600462028685308, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.545867565470366, 1);
  sqcRYGate(q, -1.3003401163458497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.47016276893323244, 1);
  sqcRYGate(q, -1.8052794940585664, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7100692059047278, 3);
  sqcRYGate(q, -0.7390949091107135, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1406769919104685, 3);
  sqcRYGate(q, -2.820698355219805, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2566929709596275, 5);
  sqcRYGate(q, 2.6208647622573666, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.694946816249755, 5);
  sqcRYGate(q, 3.0395847879288516, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8140621922939095, 7);
  sqcRYGate(q, -0.2893629059659423, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.1041568550694247, 7);
  sqcRYGate(q, -0.4295577854539312, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.2918159971615895, 9);
  sqcRYGate(q, -1.989850540657474, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.5129308890282545, 9);
  sqcRYGate(q, 3.1194063362421507, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.016820469779695, 0);
  sqcRYGate(q, -2.27261177583473, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.879275659167868, 0);
  sqcRYGate(q, -2.614458747241629, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0715815422058768, 2);
  sqcRYGate(q, -2.0695819373433846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6113737606725553, 2);
  sqcRYGate(q, 1.1109659913323806, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1180861123197436, 4);
  sqcRYGate(q, 1.226927710243607, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.24876102872372208, 4);
  sqcRYGate(q, 3.1360794120214117, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5525433730928873, 6);
  sqcRYGate(q, -0.7060332461072282, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.02486300381832152, 6);
  sqcRYGate(q, 0.10495501572483157, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7937867010260051, 8);
  sqcRYGate(q, 1.2800859623138434, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.085809220528014, 8);
  sqcRYGate(q, 3.035042294990446, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.1115530711061723, 10);
  sqcRYGate(q, -0.5966155383829772, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.4666409486799976, 10);
  sqcRYGate(q, -1.7538094608449049, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.000731529152577, 1);
  sqcRYGate(q, -0.1951614173806231, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8551750990253062, 1);
  sqcRYGate(q, 0.6049582332732274, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.222495570252055, 3);
  sqcRYGate(q, -1.699462829974359, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9201705104075932, 3);
  sqcRYGate(q, -0.1512528245990943, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1549572756369197, 5);
  sqcRYGate(q, -0.7835017186731027, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.035320788710724436, 5);
  sqcRYGate(q, -3.0534777793819465, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.398747047741356, 7);
  sqcRYGate(q, 1.4350657998856777, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.9118188758452135, 7);
  sqcRYGate(q, -2.7360425506610575, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.4998232074750335, 9);
  sqcRYGate(q, -1.3662782028771703, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.9152351378356591, 9);
  sqcRYGate(q, -0.14623433232068894, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1149333828515426, 0);
  sqcRYGate(q, 2.35789361285872, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2520947862479499, 0);
  sqcRYGate(q, 2.9932350998390342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.737694745234915, 2);
  sqcRYGate(q, -0.043771737735870175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.004905802642952928, 2);
  sqcRYGate(q, 1.7757370557440548, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.458460746050955, 4);
  sqcRYGate(q, 0.9350578100784019, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.867909450567814, 4);
  sqcRYGate(q, 0.0010000985773315207, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9349370556449796, 6);
  sqcRYGate(q, 0.9428578187136489, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.121865726462214, 6);
  sqcRYGate(q, 1.9324656853836508, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0772160950769756, 8);
  sqcRYGate(q, -2.497914687062271, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.120603645364162, 8);
  sqcRYGate(q, 3.080075112173462, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.234827065669892, 10);
  sqcRYGate(q, -1.3176045814136739, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2681344676792157, 10);
  sqcRYGate(q, 1.3875211589356051, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4894470031392906, 1);
  sqcRYGate(q, -2.9852286134040376, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.916117075553553, 1);
  sqcRYGate(q, -3.003665220171093, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.15005220149721943, 3);
  sqcRYGate(q, -1.703366151361498, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.016015898414883326, 3);
  sqcRYGate(q, 3.1276383338360585, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.230866088804591, 5);
  sqcRYGate(q, -1.1598052708217204, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2400719498112909, 5);
  sqcRYGate(q, 0.04372772742049502, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5212909996370156, 7);
  sqcRYGate(q, 2.84609665534966, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.8382192952035759, 7);
  sqcRYGate(q, 3.030116716290539, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.49946869446772, 9);
  sqcRYGate(q, -0.8210569162707717, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.2315950648009726, 9);
  sqcRYGate(q, 2.6650643308212056, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.9411371209801662, 0);
  sqcRYGate(q, 2.6254021837919757, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4887223331045876, 0);
  sqcRYGate(q, 0.5828328313148333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.12644968831779, 2);
  sqcRYGate(q, -3.006744038410839, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06865361844513718, 2);
  sqcRYGate(q, -1.368922614888155, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6548825096406379, 4);
  sqcRYGate(q, -2.706738272660256, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3071807738746174, 4);
  sqcRYGate(q, -3.134953843986955, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7822092075570384, 6);
  sqcRYGate(q, -1.675359604462791, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1414063441905844, 6);
  sqcRYGate(q, 2.941574942631948, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2292475861653474, 8);
  sqcRYGate(q, -2.713848612172875, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.997976224679624, 8);
  sqcRYGate(q, 0.05803363055505883, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.762975248707953, 10);
  sqcRYGate(q, -0.5760546810403696, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6994149767963069, 10);
  sqcRYGate(q, 0.9049525776662578, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2338731628225377, 1);
  sqcRYGate(q, 2.8626131340745866, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.21173315540766335, 1);
  sqcRYGate(q, 1.7928655379726512, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3162904321329625, 3);
  sqcRYGate(q, -0.8700712821406618, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0014513772354769474, 3);
  sqcRYGate(q, 1.956757914884772, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.230304425350801, 5);
  sqcRYGate(q, 2.014945273127071, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.724729488205815, 5);
  sqcRYGate(q, -0.660551319453683, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.542050254489753, 7);
  sqcRYGate(q, 1.3511029075437104, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.8014443650071511, 7);
  sqcRYGate(q, -3.133615372997109, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.1465337826891213, 9);
  sqcRYGate(q, 1.4880824064453846, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9230131633625596, 9);
  sqcRYGate(q, -1.3334975630557215, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.630834313327638, 0);
  sqcRYGate(q, -1.3234676567228238, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.290700871593251, 0);
  sqcRYGate(q, -0.6758838766792525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7479313195834566, 2);
  sqcRYGate(q, -2.205220835823341, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9168843822645893, 2);
  sqcRYGate(q, 0.7754908909922966, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.284476013031819, 4);
  sqcRYGate(q, -1.4355750632254016, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5960423875674202, 4);
  sqcRYGate(q, 0.15104963457179557, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9976562867094056, 6);
  sqcRYGate(q, 2.3791639049351847, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0037208205017783802, 6);
  sqcRYGate(q, 2.98058277345686, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.29694732506713406, 8);
  sqcRYGate(q, -2.133773877600245, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.028881165292052206, 8);
  sqcRYGate(q, 1.998112391129696, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.1074941107244802, 10);
  sqcRYGate(q, -2.7014952202337525, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.051005260716029, 10);
  sqcRYGate(q, -0.8624399012032251, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9112099920986718, 1);
  sqcRYGate(q, -1.797583237310118, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.116406242973723, 1);
  sqcRYGate(q, -0.4124065148705576, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.109929593281664, 3);
  sqcRYGate(q, 1.7738765167094277, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0017039673359647385, 3);
  sqcRYGate(q, -3.116516074121134, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1052916549901584, 5);
  sqcRYGate(q, 1.4690850834266753, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3515173466394925, 5);
  sqcRYGate(q, 0.2761248656113722, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7896778257286403, 7);
  sqcRYGate(q, -2.0611511281809083, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.753348445761624, 7);
  sqcRYGate(q, 0.11114313193177544, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.3105583512834963, 9);
  sqcRYGate(q, 1.7716319522194017, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0427856736606187, 9);
  sqcRYGate(q, -2.7275965636633455, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.136907774935699, 0);
  sqcRYGate(q, -1.7566762015740718, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7140841732571932, 0);
  sqcRYGate(q, 2.4081654938998733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8103727606127276, 2);
  sqcRYGate(q, 1.4403717284884936, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5181168550096695, 2);
  sqcRYGate(q, -0.48379936664339745, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6993175878591851, 4);
  sqcRYGate(q, 1.384831329137019, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.951614175411118, 4);
  sqcRYGate(q, 2.9917522720510585, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5764202168524277, 6);
  sqcRYGate(q, 0.3265121527302801, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0006621569320053311, 6);
  sqcRYGate(q, 3.134533572163334, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.56007492270627, 8);
  sqcRYGate(q, -0.3390212822118679, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.3681166564797724, 8);
  sqcRYGate(q, 3.0013713428261917, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6126221875743674, 10);
  sqcRYGate(q, -1.8073315022436516, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.015282599674138, 10);
  sqcRYGate(q, 1.0146034841553042, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9709558148888622, 1);
  sqcRYGate(q, 1.5024400802715507, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0766231005818145, 1);
  sqcRYGate(q, -0.08530075185318163, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8186918305961672, 3);
  sqcRYGate(q, -2.257488646871448, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.019936314599063643, 3);
  sqcRYGate(q, -0.3604931197537934, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0316844884198604, 5);
  sqcRYGate(q, 0.7233947840780278, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7342960424239788, 5);
  sqcRYGate(q, -2.722972351724848, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8253426576216337, 7);
  sqcRYGate(q, 1.868087273013345, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.4338690793596678, 7);
  sqcRYGate(q, -0.7134193841833074, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3698393967369569, 9);
  sqcRYGate(q, 0.35133756127967525, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.7404819156773614, 9);
  sqcRYGate(q, 0.5196482230948121, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.662369895026365, 0);
  sqcRYGate(q, -2.4743092672701676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2915650836427597, 0);
  sqcRYGate(q, 0.4314416760599844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4648267790451843, 2);
  sqcRYGate(q, 1.1012771915131816, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.004868327955892948, 2);
  sqcRYGate(q, -2.1518390748368548, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.711117925593583, 4);
  sqcRYGate(q, -1.7860260748821704, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9527531527100936, 4);
  sqcRYGate(q, 0.017174576065234426, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.774060936165413, 6);
  sqcRYGate(q, 2.083361176934587, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.006610459285446377, 6);
  sqcRYGate(q, 0.004089266536092761, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6893503487096275, 8);
  sqcRYGate(q, -1.7909761153239308, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9853517521824537, 8);
  sqcRYGate(q, -1.5963657414743548, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.5234073861003942, 10);
  sqcRYGate(q, 2.370640757974215, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.5164855352474884, 10);
  sqcRYGate(q, 0.35040132572109445, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.12331622377459, 1);
  sqcRYGate(q, 2.129615474258686, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6646153690036978, 1);
  sqcRYGate(q, -3.1084824768872212, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4152661762880583, 3);
  sqcRYGate(q, -2.9975022429505405, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0311628104117356, 3);
  sqcRYGate(q, -0.06761075427535523, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3766089559352597, 5);
  sqcRYGate(q, -2.882018236125086, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2930188319898362, 5);
  sqcRYGate(q, 2.6227288829546347, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1410024543339372, 7);
  sqcRYGate(q, -1.5111467747016367, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.3490687424481349, 7);
  sqcRYGate(q, 2.9280851022313583, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9846196203494917, 9);
  sqcRYGate(q, 1.69258421745623, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.7587479696350388, 9);
  sqcRYGate(q, -0.0006609411056822262, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.2762399459733547, 0);
  sqcRYGate(q, 2.929345622803867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4277501595143364, 0);
  sqcRYGate(q, -1.0191492493284429, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2841664905664723, 2);
  sqcRYGate(q, -2.275728950894493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1212870541677256, 2);
  sqcRYGate(q, -0.507132813095378, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.000434121883419, 4);
  sqcRYGate(q, -0.7389794132193446, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.031204700430591082, 4);
  sqcRYGate(q, 3.1401324517016564, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2091313666254706, 6);
  sqcRYGate(q, 1.0949771916898454, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0486240757277367, 6);
  sqcRYGate(q, 3.121419635428885, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6222657753064453, 8);
  sqcRYGate(q, 2.835224072722544, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6099917304520351, 8);
  sqcRYGate(q, 1.8402187059478399, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6621849897972256, 10);
  sqcRYGate(q, -2.336011820089969, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.066074074878004, 10);
  sqcRYGate(q, -2.9481058009504184, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7161706317215306, 1);
  sqcRYGate(q, -1.371749443479847, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.587446699621482, 1);
  sqcRYGate(q, -2.2199253020819674, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2041105894246698, 3);
  sqcRYGate(q, -2.287487380051676, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.12195931698526596, 3);
  sqcRYGate(q, 2.1333686377597094, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.000940345272684, 5);
  sqcRYGate(q, -2.475706246878272, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.876896161457635, 5);
  sqcRYGate(q, 0.4135357531134587, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9665567161567188, 7);
  sqcRYGate(q, 1.960040465438433, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.5655256998213307, 7);
  sqcRYGate(q, -2.090258907500885, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.158219479270367, 9);
  sqcRYGate(q, -0.011093524858440541, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.257606113451188, 9);
  sqcRYGate(q, 2.811514480749583, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.051941824564502304, 0);
  sqcRYGate(q, 1.33333471800261, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1151221565044853, 0);
  sqcRYGate(q, 2.4157554074331054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7387499212124347, 2);
  sqcRYGate(q, -1.4227255726630152, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6673640454327154, 2);
  sqcRYGate(q, 0.020680639655647946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5608553831034186, 4);
  sqcRYGate(q, 1.1060047864782367, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9859163343743664, 4);
  sqcRYGate(q, -3.1403675733587537, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.717544266968508, 6);
  sqcRYGate(q, 2.3322606040968252, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.132824403554337, 6);
  sqcRYGate(q, 3.1018371379220766, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4545520011413218, 8);
  sqcRYGate(q, -2.229850120862647, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0265497008374234, 8);
  sqcRYGate(q, -3.07064422319895, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.015810814566157, 10);
  sqcRYGate(q, -1.0772387946648587, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.528285686419958, 10);
  sqcRYGate(q, 1.336175154944323, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3894740022636443, 1);
  sqcRYGate(q, 1.2668374801657567, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.847374382894805, 1);
  sqcRYGate(q, -0.11050559351602374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5975796101896074, 3);
  sqcRYGate(q, 2.916105399392856, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0075907931793116595, 3);
  sqcRYGate(q, -3.1372195843101456, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.370696429725534, 5);
  sqcRYGate(q, -2.63179196264585, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2867331622687894, 5);
  sqcRYGate(q, 0.9872248790601623, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1310380901620103, 7);
  sqcRYGate(q, -1.8004218825053917, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.1647615285312325, 7);
  sqcRYGate(q, 2.43441831303583, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.505812171207558, 9);
  sqcRYGate(q, -0.660321079543527, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.1134191591506633, 9);
  sqcRYGate(q, 0.02499587765422984, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.875884300435521, 0);
  sqcRYGate(q, -0.24186597514026165, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.24878487125213855, 0);
  sqcRYGate(q, 1.1308737627606198, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.41204622046608, 2);
  sqcRYGate(q, -1.7312410485389824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9788584142123797, 2);
  sqcRYGate(q, -2.9753983629670016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8463264853999339, 4);
  sqcRYGate(q, 0.11082432240557646, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.009791247485953714, 4);
  sqcRYGate(q, -2.0017120722173476, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0883372267031495, 6);
  sqcRYGate(q, -2.3215444709864483, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0088924309834297, 6);
  sqcRYGate(q, -0.02946167175035974, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2206251910227552, 8);
  sqcRYGate(q, 0.32125332595746864, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4923908553302647, 8);
  sqcRYGate(q, 0.11300754847504522, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5227912238700663, 10);
  sqcRYGate(q, -1.5395769844264602, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2727361227584133, 10);
  sqcRYGate(q, -3.1069294454709526, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6475447558905261, 1);
  sqcRYGate(q, -2.5636682968061524, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0890436202940279, 1);
  sqcRYGate(q, 0.3841293719528173, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.740892189045967, 3);
  sqcRYGate(q, 1.590892260634587, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7421252888984561, 3);
  sqcRYGate(q, -0.0004054219607647702, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0251896812007635, 5);
  sqcRYGate(q, -2.40930573245202, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1398286959869814, 5);
  sqcRYGate(q, -3.1344780134710155, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2506021142942263, 7);
  sqcRYGate(q, 2.4959886947861376, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0033222093367335508, 7);
  sqcRYGate(q, -0.7592356366047239, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.2623560477464358, 9);
  sqcRYGate(q, -1.4379461430348677, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.0189375650626213, 9);
  sqcRYGate(q, -3.1239181852679185, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.21030565568963586, 0);
  sqcRYGate(q, -2.987337417160348, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1283228340651466, 0);
  sqcRYGate(q, -2.643124285680614, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5266650287155707, 2);
  sqcRYGate(q, 2.365660796088301, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0923312632272424, 2);
  sqcRYGate(q, -0.06627000897916702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.569378418437152, 4);
  sqcRYGate(q, -2.889525668765306, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.012513768583924723, 4);
  sqcRYGate(q, 2.004141067445759, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8734651845983133, 6);
  sqcRYGate(q, -1.6722478298060015, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1441023162969444, 6);
  sqcRYGate(q, 0.022480204410018526, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.240317853118855, 8);
  sqcRYGate(q, 0.09149180762022446, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.16529539614628685, 8);
  sqcRYGate(q, 0.08482062887323405, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1309498968595677, 10);
  sqcRYGate(q, -0.4324193737268228, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.353102615126041, 10);
  sqcRYGate(q, 1.4403196042733037, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.8987026323694822, 1);
  sqcRYGate(q, 2.1005036799580528, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.130932607169065, 1);
  sqcRYGate(q, -0.26272080838579404, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.156083050016088, 3);
  sqcRYGate(q, -1.6035374929655788, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7452681780804236, 3);
  sqcRYGate(q, -0.6987035685820047, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.813172690954966, 5);
  sqcRYGate(q, -2.6807147616655853, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1339435928286687, 5);
  sqcRYGate(q, 0.09148469557209804, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9868568275802136, 7);
  sqcRYGate(q, -2.1185177151812025, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1400009788419054, 7);
  sqcRYGate(q, -2.527502670337518, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.1951181571739182, 9);
  sqcRYGate(q, -2.884285984531587, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.8674631929997183, 9);
  sqcRYGate(q, -0.004123305677729122, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.256225876375035, 0);
  sqcRYGate(q, 2.3020917953758815, 1);
  sqcRYGate(q, -0.8293066901594601, 2);
  sqcRYGate(q, -1.3550832806674338, 3);
  sqcRYGate(q, -1.0533939215036747, 4);
  sqcRYGate(q, 1.1862085459978182, 5);
  sqcRYGate(q, 1.5965494903921185, 6);
  sqcRYGate(q, 0.9304850105375708, 7);
  sqcRYGate(q, 1.7057632016461353, 8);
  sqcRYGate(q, 1.2974859502605414, 9);
  sqcRYGate(q, -0.15004565906184372, 10);
  sqcRYGate(q, -1.830395835083429, 11);

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
