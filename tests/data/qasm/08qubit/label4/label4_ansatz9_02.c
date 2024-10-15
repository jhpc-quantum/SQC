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

  sqcRYGate(q, -0.5425441959092572, 0);
  sqcRYGate(q, -2.7139250051627855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.008892498077962, 0);
  sqcRYGate(q, -1.3387498444466148, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.170056312797721, 2);
  sqcRYGate(q, 1.355759819238502, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0978574077899212, 2);
  sqcRYGate(q, 1.5054547832001455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.202425504512727, 4);
  sqcRYGate(q, -0.5115539788750008, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1398844597798616, 4);
  sqcRYGate(q, 2.1593757515891525, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0601458698632493, 6);
  sqcRYGate(q, 1.0992561211072076, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.021940671235180877, 6);
  sqcRYGate(q, -1.3833620594120424, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7581434273497534, 0);
  sqcRYGate(q, 0.3113660241022785, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.319125436067604, 0);
  sqcRYGate(q, 1.9859776546138495, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4280040726323193, 2);
  sqcRYGate(q, 1.4372492181587648, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.616371871568201, 2);
  sqcRYGate(q, 1.103424744290421, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5359994266810703, 4);
  sqcRYGate(q, 1.5403872204392577, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.422432078972554, 4);
  sqcRYGate(q, 1.8406516802228357, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.115002157739528, 1);
  sqcRYGate(q, -3.033125006900171, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7827431487378124, 1);
  sqcRYGate(q, -2.0876041866368618, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9502110848406522, 3);
  sqcRYGate(q, -1.399962503508017, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7799784918777921, 3);
  sqcRYGate(q, 1.6527961429332896, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.24148158683654775, 5);
  sqcRYGate(q, 3.042601395542758, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.43137493959675655, 5);
  sqcRYGate(q, 0.6479974219597545, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.1831498210394771, 0);
  sqcRYGate(q, -3.0940318731021517, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.14996604413868697, 0);
  sqcRYGate(q, -1.7888934986572735, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9538168092670751, 1);
  sqcRYGate(q, 0.7127422342362779, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9616789245862165, 1);
  sqcRYGate(q, -0.21745123802450794, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08705305369545702, 2);
  sqcRYGate(q, -0.26658122776767335, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.26148549896709156, 2);
  sqcRYGate(q, -2.205336660172698, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.7467779681307714, 3);
  sqcRYGate(q, 3.107037859800831, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4960876603256157, 3);
  sqcRYGate(q, 1.2437521232942774, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1677113681285003, 4);
  sqcRYGate(q, -0.27397486054126396, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.6637864026798381, 4);
  sqcRYGate(q, -2.460335548197848, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.0210701473098553, 5);
  sqcRYGate(q, -2.427148011849854, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9698541069889437, 5);
  sqcRYGate(q, -0.8101790612677153, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.036313964767577644, 0);
  sqcRYGate(q, 2.479886670705367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1840010523795124, 0);
  sqcRYGate(q, 2.522784479845912, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.147091087636116, 2);
  sqcRYGate(q, -3.0149016496995125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.339136248704711, 2);
  sqcRYGate(q, -2.406310616667505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9106545206533871, 4);
  sqcRYGate(q, 0.9697145011800751, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.194249507227131, 4);
  sqcRYGate(q, 1.053238625373982, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0209701458314662, 6);
  sqcRYGate(q, 2.769691373178226, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3626720778172938, 6);
  sqcRYGate(q, 0.8032249022017969, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4434578617604199, 0);
  sqcRYGate(q, 2.919936400442611, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.195081868261361, 0);
  sqcRYGate(q, -1.4750737549776707, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8254090872720062, 2);
  sqcRYGate(q, 0.5581571077816099, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7752212316703816, 2);
  sqcRYGate(q, -0.5797297046794613, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.546975842908538, 4);
  sqcRYGate(q, 2.4943999625206326, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.8165620955987922, 4);
  sqcRYGate(q, 2.9445359709326397, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.6411108692043377, 1);
  sqcRYGate(q, -1.6482731277740434, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.383451354351954, 1);
  sqcRYGate(q, -1.4729997101547605, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.285217779948625, 3);
  sqcRYGate(q, 3.094691324370307, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7268176848567904, 3);
  sqcRYGate(q, 1.1603352197712908, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.9688335834357695, 5);
  sqcRYGate(q, -3.025006602004887, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.029454333699965, 5);
  sqcRYGate(q, 0.24333285152614992, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.41414893895808547, 0);
  sqcRYGate(q, 2.674224383520032, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3699226368420918, 0);
  sqcRYGate(q, 2.9214262018718737, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7149564338675667, 1);
  sqcRYGate(q, -0.22520331599582247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7251935755465198, 1);
  sqcRYGate(q, -1.384816192781786, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.06131435466166212, 2);
  sqcRYGate(q, 0.9173542288139898, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.475496073287611, 2);
  sqcRYGate(q, -2.0912795576074146, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.2759107980632862, 3);
  sqcRYGate(q, 0.21207663172864244, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0066232382905709, 3);
  sqcRYGate(q, -0.347247430594557, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.413724042574967, 4);
  sqcRYGate(q, 2.1180158540193057, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.0642602012619635, 4);
  sqcRYGate(q, -2.2754897212401732, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.647396734847514, 5);
  sqcRYGate(q, 2.487870278980385, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2489953852417326, 5);
  sqcRYGate(q, 2.198348897274431, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0402759907201653, 0);
  sqcRYGate(q, -0.11110103279862305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.225754651277832, 0);
  sqcRYGate(q, -1.3291508456497425, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.218127062464002, 2);
  sqcRYGate(q, 2.518233442540085, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2958759008861158, 2);
  sqcRYGate(q, -0.7345136838835571, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.434466007673846, 4);
  sqcRYGate(q, -1.4136912358736453, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2306363464635141, 4);
  sqcRYGate(q, 1.5395024873922396, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.575807308757743, 6);
  sqcRYGate(q, 2.3981674787366214, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6465519947361404, 6);
  sqcRYGate(q, -1.6883641191979493, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.46548758712999216, 0);
  sqcRYGate(q, 1.111916115782571, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5103759138029087, 0);
  sqcRYGate(q, -2.731205574709557, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.946830549871797, 2);
  sqcRYGate(q, 0.048754295782904584, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.9279133049420252, 2);
  sqcRYGate(q, 2.333337972776301, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.15955229787492, 4);
  sqcRYGate(q, -1.3069271111388816, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.2022425754470092, 4);
  sqcRYGate(q, 1.009738497115715, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.819479766739704, 1);
  sqcRYGate(q, -0.8742860800364411, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.359442749020231, 1);
  sqcRYGate(q, -1.7911433530973886, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8133245562573208, 3);
  sqcRYGate(q, -2.5315311070101623, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.7919399535704956, 3);
  sqcRYGate(q, -0.2776985483747053, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.007172977280058, 5);
  sqcRYGate(q, 1.7314260862699247, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.9821778582446523, 5);
  sqcRYGate(q, 1.0745512361059357, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.112420908137196, 0);
  sqcRYGate(q, -1.8847641241377648, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.1401176066407217, 0);
  sqcRYGate(q, -2.8523197636651956, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.031578557265514, 1);
  sqcRYGate(q, -2.672201449880941, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.68609235564339, 1);
  sqcRYGate(q, 2.5555546936689835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1332114628654226, 2);
  sqcRYGate(q, -2.7367017343217053, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.06506341014958306, 2);
  sqcRYGate(q, 2.691845573539921, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.6606143876897672, 3);
  sqcRYGate(q, 0.1430972992445824, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5453796620502738, 3);
  sqcRYGate(q, 2.528802990224563, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8768141508760723, 4);
  sqcRYGate(q, 0.6020932194737503, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.3171833202069685, 4);
  sqcRYGate(q, -0.15388405059168056, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.6766446460887099, 5);
  sqcRYGate(q, 2.868687174755435, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0045953071032283, 5);
  sqcRYGate(q, -2.9957396510525593, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.085525043313819, 0);
  sqcRYGate(q, -0.516124121333525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5993065840679551, 0);
  sqcRYGate(q, -1.353417143280958, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.595821630167076, 2);
  sqcRYGate(q, 1.9711583421145926, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3634865224096635, 2);
  sqcRYGate(q, 1.4782638877395895, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5241710777588247, 4);
  sqcRYGate(q, -1.2260901123167596, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.062458361006696, 4);
  sqcRYGate(q, -2.6406370403861272, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6618049232159087, 6);
  sqcRYGate(q, -0.4720518311173016, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7979041856111521, 6);
  sqcRYGate(q, -1.6224592726417937, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9304764153805252, 0);
  sqcRYGate(q, 2.858323851677622, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.878545924700024, 0);
  sqcRYGate(q, -1.5051194455491652, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.011345510523444, 2);
  sqcRYGate(q, 1.4842658746234276, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2242956765113657, 2);
  sqcRYGate(q, -2.039765016256367, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.114350266900594, 4);
  sqcRYGate(q, 2.744758022859772, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.1701610138612824, 4);
  sqcRYGate(q, -2.2985745662198016, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.3914578123876025, 1);
  sqcRYGate(q, 1.8742449246766326, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7812661347125465, 1);
  sqcRYGate(q, 3.105987701099509, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6062755349672406, 3);
  sqcRYGate(q, -0.5044345666587914, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8791538192675512, 3);
  sqcRYGate(q, 1.3246003488321687, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.649850189115364, 5);
  sqcRYGate(q, 2.6857403985732375, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.9995399335647912, 5);
  sqcRYGate(q, 1.469964559105685, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.8419726052616099, 0);
  sqcRYGate(q, 0.5136120765494265, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6292434322144959, 0);
  sqcRYGate(q, -2.329401193503059, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.44203709290582277, 1);
  sqcRYGate(q, -2.8328685804885154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2795535901921591, 1);
  sqcRYGate(q, -0.21832747520614504, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4317392624633376, 2);
  sqcRYGate(q, 1.714415736034156, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.235723900682509, 2);
  sqcRYGate(q, -2.1382710899324575, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.3787315473230173, 3);
  sqcRYGate(q, -0.07083452047511146, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5604994698779464, 3);
  sqcRYGate(q, -0.9570428161868305, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6610488713369684, 4);
  sqcRYGate(q, 2.1622106504497465, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.5279613031981136, 4);
  sqcRYGate(q, 1.4919808749862964, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.318907669612979, 5);
  sqcRYGate(q, 0.1706224333522801, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.777539020532827, 5);
  sqcRYGate(q, -1.216600442734852, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.47867798363336966, 0);
  sqcRYGate(q, 1.3420760179767397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.492257538746606, 0);
  sqcRYGate(q, 3.080143118203995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21427344742334167, 2);
  sqcRYGate(q, 2.074746536853298, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8832201378422666, 2);
  sqcRYGate(q, -1.9272513812937673, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.16606154474868, 4);
  sqcRYGate(q, -2.4021759913193566, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3043439735622702, 4);
  sqcRYGate(q, 1.7493903056129265, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3403439198910763, 6);
  sqcRYGate(q, -0.8837734359449453, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.18482746883446086, 6);
  sqcRYGate(q, -0.907139599903552, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.027228626867277228, 0);
  sqcRYGate(q, 2.7056695123499463, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5680386670949127, 0);
  sqcRYGate(q, -0.8762982904852018, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5038802687918098, 2);
  sqcRYGate(q, -2.391521786909568, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1568780947194748, 2);
  sqcRYGate(q, 0.4410352733094137, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.696826840165863, 4);
  sqcRYGate(q, 0.07251353605601468, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.161378294755062, 4);
  sqcRYGate(q, 3.1117947086813724, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.3055687744071722, 1);
  sqcRYGate(q, 2.740872649640522, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7712350388983407, 1);
  sqcRYGate(q, -2.9374346450484765, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.29243198168377676, 3);
  sqcRYGate(q, 1.2106978643440127, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5457166042785355, 3);
  sqcRYGate(q, 2.8620059774996243, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.0024433349414119117, 5);
  sqcRYGate(q, -2.5468247562895785, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4168387598911203, 5);
  sqcRYGate(q, 2.313605877574809, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.361060827868549, 0);
  sqcRYGate(q, -0.06937759622531595, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6747499528631424, 0);
  sqcRYGate(q, -1.9776925517867427, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.000076061377371, 1);
  sqcRYGate(q, -2.0366918307891453, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7426575696404387, 1);
  sqcRYGate(q, 0.16623891092284254, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6588666878593687, 2);
  sqcRYGate(q, -1.9256431031859007, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.565248204472552, 2);
  sqcRYGate(q, -2.4388318988657023, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.5495656229859253, 3);
  sqcRYGate(q, -0.8619788648118513, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.631354330215803, 3);
  sqcRYGate(q, 0.6537525075520558, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8504274724187257, 4);
  sqcRYGate(q, 1.7166498161337085, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.6366519401188535, 4);
  sqcRYGate(q, 2.5392221928334937, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.6829347310009575, 5);
  sqcRYGate(q, 0.9594350830386903, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5043057403794937, 5);
  sqcRYGate(q, -1.2437779618507232, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9034511612125242, 0);
  sqcRYGate(q, 0.3122932579109634, 1);
  sqcRYGate(q, -2.6387385603483415, 2);
  sqcRYGate(q, 2.493803280286359, 3);
  sqcRYGate(q, -2.790153145578651, 4);
  sqcRYGate(q, -2.5765910844437454, 5);
  sqcRYGate(q, -2.5428244103520936, 6);
  sqcRYGate(q, 0.5204028848467752, 7);

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
