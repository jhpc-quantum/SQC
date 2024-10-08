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

  sqcRYGate(q, -0.16781074424045864, 0);
  sqcRYGate(q, 2.6915505815015397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1369025642637, 0);
  sqcRYGate(q, 3.0923836768630646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20845159823142495, 2);
  sqcRYGate(q, -2.497315094650096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2223660483055996, 2);
  sqcRYGate(q, -2.0629775821056064, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.16865452871971684, 4);
  sqcRYGate(q, 0.32093561086594846, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5098064746455737, 4);
  sqcRYGate(q, -1.87450609695823, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2339562510457398, 6);
  sqcRYGate(q, 0.7868656196965179, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.076382961631452, 6);
  sqcRYGate(q, -1.1826922114286873, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6205066959048997, 8);
  sqcRYGate(q, -1.200144982834705, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.643102414780388, 8);
  sqcRYGate(q, -2.275985222309667, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4067901626794324, 10);
  sqcRYGate(q, -2.3662932015822684, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9315675999030386, 10);
  sqcRYGate(q, -1.22433166426857, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9372569913395723, 12);
  sqcRYGate(q, 0.4906752221872655, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.6342580616217441, 12);
  sqcRYGate(q, -0.8822394038439146, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.1580048968790737, 14);
  sqcRYGate(q, 1.3736145790844665, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.9221668128084592, 14);
  sqcRYGate(q, 0.2753317102854842, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.335096400768958, 0);
  sqcRYGate(q, -2.675089674474315, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.033077413443075, 0);
  sqcRYGate(q, -2.527931547926585, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0700207365844108, 2);
  sqcRYGate(q, 0.16780006158122962, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.8248233930875464, 2);
  sqcRYGate(q, -0.3665730195883464, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.13547653974098853, 4);
  sqcRYGate(q, 2.297027057612346, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.229082429846067, 4);
  sqcRYGate(q, -0.02033136531160347, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.15190810428971813, 6);
  sqcRYGate(q, -1.3322142841397573, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.7179029382807922, 6);
  sqcRYGate(q, -3.1414546631949305, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.270181634314243, 8);
  sqcRYGate(q, 2.1162562092231303, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.00011487635951645814, 8);
  sqcRYGate(q, -2.228593756488381e-05, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.1677312403057103, 10);
  sqcRYGate(q, 1.9918694675863462, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.962996210950391, 10);
  sqcRYGate(q, 1.7586131479039768, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.8971325044573604, 12);
  sqcRYGate(q, -1.9373259779363226, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.660757541612931, 12);
  sqcRYGate(q, 2.1350990917904147, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.0869188164554886, 1);
  sqcRYGate(q, 2.724616040692269, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9526974419297636, 1);
  sqcRYGate(q, 1.9931708524907457, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1605424683854775, 3);
  sqcRYGate(q, -1.9781431090859414, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.1439212958704299, 3);
  sqcRYGate(q, -0.023209956332737907, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.9496280702178007, 5);
  sqcRYGate(q, 1.6227652169405107, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7538819913712826, 5);
  sqcRYGate(q, 0.0014267488704025055, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.18003287978025392, 7);
  sqcRYGate(q, 1.4098042957984154, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.31463987485964523, 7);
  sqcRYGate(q, -3.0710613362725687, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.1673041142257528, 9);
  sqcRYGate(q, -1.4643190373604982, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.08946145372503, 9);
  sqcRYGate(q, -3.137371031284169, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.0341509347103817, 11);
  sqcRYGate(q, -0.007667364345371296, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.1287813926044237, 11);
  sqcRYGate(q, 3.138039796022509, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.9840504155749734, 13);
  sqcRYGate(q, -0.24222048959354672, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.7583772696661324, 13);
  sqcRYGate(q, -2.5053007949354322, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.9551398208593869, 0);
  sqcRYGate(q, 0.07640930022082681, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0160904891220857, 0);
  sqcRYGate(q, -1.9305348452366982, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6824715848053673, 2);
  sqcRYGate(q, 2.1538274998801077, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9282750617792126, 2);
  sqcRYGate(q, 0.5578367145178152, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8262701469451692, 4);
  sqcRYGate(q, -3.06427202399378, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9833886141298107, 4);
  sqcRYGate(q, -1.8993032367263778, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.555941988016844, 6);
  sqcRYGate(q, 0.18232606466199072, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.794711686006141, 6);
  sqcRYGate(q, -0.04348648897254571, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3666266935044673, 8);
  sqcRYGate(q, 1.577062564649907, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.029081670439517, 8);
  sqcRYGate(q, 1.9291439941523478, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.8067794790437537, 10);
  sqcRYGate(q, -2.5096084168060946, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2210109684584767, 10);
  sqcRYGate(q, 0.5483688390624675, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.9970711623113018, 12);
  sqcRYGate(q, -1.76458305410735, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.581199969129486, 12);
  sqcRYGate(q, -2.50258783671239, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.10531984164204314, 14);
  sqcRYGate(q, -1.5880712707024527, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.7738677848441573, 14);
  sqcRYGate(q, 1.896053955518742, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.8762798440827577, 0);
  sqcRYGate(q, -3.0957282491616445, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8317785343983939, 0);
  sqcRYGate(q, 3.0455492077403457, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7745839753627495, 2);
  sqcRYGate(q, 3.030493781064863, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.018463583286089325, 2);
  sqcRYGate(q, 3.1237152727433615, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.962712586826287, 4);
  sqcRYGate(q, -0.11078757880523238, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.0499952397139576, 4);
  sqcRYGate(q, -2.848533895133802, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.1644402251575148, 6);
  sqcRYGate(q, 1.7622146030410475, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.23114704771509498, 6);
  sqcRYGate(q, 2.421399640569582, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.0167375507238905, 8);
  sqcRYGate(q, -2.824275130105091, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.04163621351083435, 8);
  sqcRYGate(q, 3.1415828418107257, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.5537506528022818, 10);
  sqcRYGate(q, 2.763265379127307, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 3.1394608822571546, 10);
  sqcRYGate(q, -3.107004781890699, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.5805022416192003, 12);
  sqcRYGate(q, -1.2058458012894349, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.947530563684665, 12);
  sqcRYGate(q, -0.14690540931954665, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.897737264616378, 1);
  sqcRYGate(q, -2.944202076583026, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.017001943395748245, 1);
  sqcRYGate(q, 3.1178927605971967, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5540203749994903, 3);
  sqcRYGate(q, -0.34670259537260145, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.537658626844684, 3);
  sqcRYGate(q, 2.557405315938191, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.029494957656251, 5);
  sqcRYGate(q, 3.0782975048266166, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.1238405811202457, 5);
  sqcRYGate(q, -0.006139414592489345, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.7902080169716963, 7);
  sqcRYGate(q, 2.810224087996378, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.2337344513266038, 7);
  sqcRYGate(q, -1.032444973114876, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.188834176823601, 9);
  sqcRYGate(q, 0.6821692202460289, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 7.032120700563726e-05, 9);
  sqcRYGate(q, 3.141522644349558, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.9837473171039725, 11);
  sqcRYGate(q, 1.2324027416605967, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.0012675962181707121, 11);
  sqcRYGate(q, -0.0018623598092259999, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.1671008313704707, 13);
  sqcRYGate(q, -0.3305010874700569, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.2611615875858937, 13);
  sqcRYGate(q, 2.40908311213733, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.42583339286518646, 0);
  sqcRYGate(q, 1.749211564672464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6948196893540836, 0);
  sqcRYGate(q, 2.9994721404156066, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9139861186941873, 2);
  sqcRYGate(q, -2.1934423760252777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.028950287132181122, 2);
  sqcRYGate(q, -2.8541032887558084, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3629884581193625, 4);
  sqcRYGate(q, -2.399489571182329, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4253729784044191, 4);
  sqcRYGate(q, -0.23833358609858282, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.37332245570783, 6);
  sqcRYGate(q, 3.1142233617964963, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.016357795110572226, 6);
  sqcRYGate(q, 3.1321663793287673, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9464603466668393, 8);
  sqcRYGate(q, -1.921459652556175, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0835258019977125, 8);
  sqcRYGate(q, -0.0011489410273390114, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.663702590936452, 10);
  sqcRYGate(q, -1.6000007101219957, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0854236998979827, 10);
  sqcRYGate(q, 3.1133586606134034, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.1891849217384203, 12);
  sqcRYGate(q, 3.1369909390404884, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.6860075069710128, 12);
  sqcRYGate(q, -2.75771303688045, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.8860753691180125, 14);
  sqcRYGate(q, -0.11366957245088394, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.6031726245375015, 14);
  sqcRYGate(q, 1.8641314418358401, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.682972007821073, 0);
  sqcRYGate(q, -1.0453570675725787, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5125276889475332, 0);
  sqcRYGate(q, -0.5537370849307104, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.269008620551219, 2);
  sqcRYGate(q, -2.4312161970211696, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.1406852706354362, 2);
  sqcRYGate(q, 1.5741420887265545, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.716436038878299, 4);
  sqcRYGate(q, -1.0944812230390166, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1181325171926337, 4);
  sqcRYGate(q, -3.1415767362913543, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.6587934464150598, 6);
  sqcRYGate(q, 1.3045698268150598, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.690293410216332, 6);
  sqcRYGate(q, 1.7466877573474733, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.273549022983762, 8);
  sqcRYGate(q, 2.252629886764846, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.140165531263355, 8);
  sqcRYGate(q, 3.141533829095983, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.7126300789614233, 10);
  sqcRYGate(q, -1.9728410019845222, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 3.140637832146915, 10);
  sqcRYGate(q, -3.039791121603896, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.29030151980889235, 12);
  sqcRYGate(q, 0.9757860126976983, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.6643900792449013, 12);
  sqcRYGate(q, -0.0030272024881904643, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.930039179178515, 1);
  sqcRYGate(q, 1.446603014525226, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1328187522199333, 1);
  sqcRYGate(q, -3.136426937692067, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.424864680229392, 3);
  sqcRYGate(q, 3.050849809735905, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.461746775796211, 3);
  sqcRYGate(q, -2.093365770533643, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.505551525705377, 5);
  sqcRYGate(q, -0.3204555025777257, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.0012049232737085802, 5);
  sqcRYGate(q, -0.0001543187436983118, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.11366659612185868, 7);
  sqcRYGate(q, -1.1803326618071808, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.4305364707252308, 7);
  sqcRYGate(q, 0.4950908268815546, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.191771400396262, 9);
  sqcRYGate(q, -0.23049845272170885, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.038287552605521705, 9);
  sqcRYGate(q, 3.1386673504828972, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.653417285814077, 11);
  sqcRYGate(q, 2.125967114163668, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -3.1405441987375435, 11);
  sqcRYGate(q, -2.9336447734365585, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.5046432684667892, 13);
  sqcRYGate(q, -0.7518348771616497, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.333148007944988, 13);
  sqcRYGate(q, 0.7419161422247158, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.6476057037160627, 0);
  sqcRYGate(q, 1.2347242955144013, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.425354409966534, 0);
  sqcRYGate(q, 2.6515419226248644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.97044852598513, 2);
  sqcRYGate(q, -1.571103407985279, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5632685035195282, 2);
  sqcRYGate(q, -0.0017171145123899077, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9448312441795741, 4);
  sqcRYGate(q, 2.203986885909333, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5480595217127622, 4);
  sqcRYGate(q, -3.1285539264205915, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.35434538172624785, 6);
  sqcRYGate(q, 1.9700487263089446, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0868594280200217, 6);
  sqcRYGate(q, 3.1305829680320265, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7460555338968273, 8);
  sqcRYGate(q, 1.5299770568544506, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.880643329411348, 8);
  sqcRYGate(q, -0.4708015634666922, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6635355829570564, 10);
  sqcRYGate(q, -2.803353342485466, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.391304643205773, 10);
  sqcRYGate(q, 2.4070470570972526, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.0004270727208495, 12);
  sqcRYGate(q, 1.8380268923085674, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.6544172395096333, 12);
  sqcRYGate(q, -0.3917364507589953, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.8082597976475183, 14);
  sqcRYGate(q, -1.8120616648882564, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.2597650997342269, 14);
  sqcRYGate(q, 2.3803548262211573, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.49644002619235, 0);
  sqcRYGate(q, 0.16731892169544593, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5307822074539974, 0);
  sqcRYGate(q, 0.0013911837224607185, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5661898046847806, 2);
  sqcRYGate(q, -1.7378144975180614, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.0018164619617841995, 2);
  sqcRYGate(q, 1.5320140911134157, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0153151034185797, 4);
  sqcRYGate(q, -2.2156875188501677, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.1396022546145534, 4);
  sqcRYGate(q, 0.006631675670388886, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.735003378744892, 6);
  sqcRYGate(q, 1.6808035896359836, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.6316988849523844, 6);
  sqcRYGate(q, -1.160955440225204, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.4483746443585417, 8);
  sqcRYGate(q, -2.8682436381743375, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.5901665064636705, 8);
  sqcRYGate(q, 0.003037103105719474, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.3986811425456754, 10);
  sqcRYGate(q, 1.5099479692846818, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.00032463220331990783, 10);
  sqcRYGate(q, -3.139527934199377, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 3.054957024773776, 12);
  sqcRYGate(q, -2.862418521801072, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.2014152772342941, 12);
  sqcRYGate(q, -3.054249810927646, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.7770478641431824, 1);
  sqcRYGate(q, -3.1319544635909393, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8068595640628273, 1);
  sqcRYGate(q, -0.0013923294399367236, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5783174304029046, 3);
  sqcRYGate(q, 2.0203195217896748, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.001143505804078515, 3);
  sqcRYGate(q, -1.5323350255017294, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.9898142435892108, 5);
  sqcRYGate(q, -2.1235608179320673, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1413997914744707, 5);
  sqcRYGate(q, -3.1413927269893147, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.15605990823191, 7);
  sqcRYGate(q, 0.6464623356206647, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.6146151760968532, 7);
  sqcRYGate(q, -1.5854405828414846, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.126186397991257, 9);
  sqcRYGate(q, 1.6760316159329334, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.5392361465634647, 9);
  sqcRYGate(q, 0.35569945671067327, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.7340359215712362, 11);
  sqcRYGate(q, -2.89297883778253, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.7283999202621843, 11);
  sqcRYGate(q, 0.3329910912046561, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.07009200254057496, 13);
  sqcRYGate(q, -0.021057616052202098, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -3.0476581211801523, 13);
  sqcRYGate(q, 0.19893995657561883, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.404420928490052, 0);
  sqcRYGate(q, 2.2080708044166624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.47611313971612096, 0);
  sqcRYGate(q, -1.8127752466990765, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.803559609782916, 2);
  sqcRYGate(q, 1.6083378135944455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4745249033614307, 2);
  sqcRYGate(q, 0.188388103695587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.055383628478089, 4);
  sqcRYGate(q, 0.39200699865418653, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3399022586063758, 4);
  sqcRYGate(q, -0.5426248356192058, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.879125052081985, 6);
  sqcRYGate(q, -2.1930121773211084, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.26868777289836354, 6);
  sqcRYGate(q, -0.04616734165765912, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6280316697381307, 8);
  sqcRYGate(q, 1.5475881437659016, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.3217034765638225, 8);
  sqcRYGate(q, -3.0035550810942797, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.4195036948906976, 10);
  sqcRYGate(q, -1.430710536403962, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5124998421849134, 10);
  sqcRYGate(q, -1.7651804742431567, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6372487005669347, 12);
  sqcRYGate(q, 1.6802032724864495, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.7454868309012745, 12);
  sqcRYGate(q, 3.0376019989132517, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.2927324107372755, 14);
  sqcRYGate(q, 3.1028931567743596, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.1298736465421726, 14);
  sqcRYGate(q, 0.8691515193090796, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.3993757767909405, 0);
  sqcRYGate(q, 0.33250056277590817, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2396025573413563, 0);
  sqcRYGate(q, 1.6412079951357619, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.413483512932865, 2);
  sqcRYGate(q, -1.4264306531869435, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.08540225211667973, 2);
  sqcRYGate(q, 3.1296889953706692, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.556088065724863, 4);
  sqcRYGate(q, -2.8634406126979886, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.08947260824480097, 4);
  sqcRYGate(q, -0.34792309835312274, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.873928806681747, 6);
  sqcRYGate(q, -1.7588471887705932, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.120250207225822, 6);
  sqcRYGate(q, -0.0034885197471762478, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.870716605522163, 8);
  sqcRYGate(q, 2.2807082448028324, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.1410042039949695, 8);
  sqcRYGate(q, 0.010715845937025492, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.3807191044243607, 10);
  sqcRYGate(q, -0.6546632717011738, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.02289606171143088, 10);
  sqcRYGate(q, -0.033861756214744965, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.7691186065411946, 12);
  sqcRYGate(q, -0.1331347162858165, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.051226683548088, 12);
  sqcRYGate(q, -0.1798158461337098, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.0718215215494045, 1);
  sqcRYGate(q, -0.2645203604669355, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.370699673868345, 1);
  sqcRYGate(q, -1.086508235189141, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4975560952804126, 3);
  sqcRYGate(q, -0.5801806698082477, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1139426532621357, 3);
  sqcRYGate(q, 0.029435782355013096, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3409733513813882, 5);
  sqcRYGate(q, -1.1180522209907648, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.883114393641881, 5);
  sqcRYGate(q, -0.09091097597726128, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.980629068201596, 7);
  sqcRYGate(q, -2.499240446051264, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.1366881083896856, 7);
  sqcRYGate(q, 0.005631222601653734, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.7345825272789972, 9);
  sqcRYGate(q, 0.3185578963765163, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.0009963329518747344, 9);
  sqcRYGate(q, 0.00016394719713641592, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.888894142449609, 11);
  sqcRYGate(q, 0.04565951214150403, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.9556532927291341, 11);
  sqcRYGate(q, 0.941967766885841, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.5681096784132393, 13);
  sqcRYGate(q, 0.0036098169980937986, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.7728493724482055, 13);
  sqcRYGate(q, 2.3993544803015285, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.6094237555021538, 0);
  sqcRYGate(q, -1.5153974871071716, 1);
  sqcRYGate(q, -0.7980104114061385, 2);
  sqcRYGate(q, -0.7865435441992544, 3);
  sqcRYGate(q, -3.1400615434216324, 4);
  sqcRYGate(q, -0.029567925218617397, 5);
  sqcRYGate(q, 1.3088014123501805, 6);
  sqcRYGate(q, 0.5886335811252622, 7);
  sqcRYGate(q, -2.99231308943625, 8);
  sqcRYGate(q, 0.800848301932044, 9);
  sqcRYGate(q, -3.098845778064642, 10);
  sqcRYGate(q, -0.0038250821863909136, 11);
  sqcRYGate(q, 0.08672353165456226, 12);
  sqcRYGate(q, 0.002765967490432402, 13);
  sqcRYGate(q, 2.020384522894662, 14);
  sqcRYGate(q, 1.5717435885569442, 15);

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
