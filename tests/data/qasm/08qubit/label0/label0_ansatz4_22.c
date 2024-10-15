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

  sqcRYGate(q, 1.2113497080190923, 0);
  sqcRZGate(q, 1.2960635221373469, 0);
  sqcRYGate(q, 1.9829792377824136, 1);
  sqcRZGate(q, 3.1123259153386185, 1);
  sqcRYGate(q, 0.46796017556782843, 2);
  sqcRZGate(q, 2.6844341953011264, 2);
  sqcRYGate(q, 2.289637142855419, 3);
  sqcRZGate(q, 1.3558280063355144, 3);
  sqcRYGate(q, -0.5581346588543639, 4);
  sqcRZGate(q, 0.40711749207892894, 4);
  sqcRYGate(q, 0.5370116569826598, 5);
  sqcRZGate(q, 2.3575125870405387, 5);
  sqcRYGate(q, 0.5845007798227264, 6);
  sqcRZGate(q, 1.5007191680550616, 6);
  sqcRYGate(q, 0.33198967488866427, 7);
  sqcRZGate(q, 2.2519188508988797, 7);
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
  sqcRYGate(q, -2.236528905285901, 0);
  sqcRZGate(q, -2.4506722440400535, 0);
  sqcRYGate(q, -1.6390473906745406, 1);
  sqcRZGate(q, 2.9922286573300574, 1);
  sqcRYGate(q, 1.0721634471616177, 2);
  sqcRZGate(q, 2.9841867338713994, 2);
  sqcRYGate(q, -2.6594075630070413, 3);
  sqcRZGate(q, -0.6348052868333821, 3);
  sqcRYGate(q, 2.527607195534356, 4);
  sqcRZGate(q, -2.3085345386821383, 4);
  sqcRYGate(q, 2.4021319173903373, 5);
  sqcRZGate(q, -1.1644011160424188, 5);
  sqcRYGate(q, 1.2685851118590041, 6);
  sqcRZGate(q, 0.791784019840879, 6);
  sqcRYGate(q, -0.49858987214163686, 7);
  sqcRZGate(q, -2.1752566264986974, 7);
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
  sqcRYGate(q, 1.0150368578390871, 0);
  sqcRZGate(q, 0.7903041744003172, 0);
  sqcRYGate(q, -0.26883918998359135, 1);
  sqcRZGate(q, 0.3813056782403681, 1);
  sqcRYGate(q, -1.6990069449539664, 2);
  sqcRZGate(q, -0.8850719959405745, 2);
  sqcRYGate(q, 1.5250161320047484, 3);
  sqcRZGate(q, 2.2141826627026227, 3);
  sqcRYGate(q, 0.6388960985454937, 4);
  sqcRZGate(q, -1.918148327341746, 4);
  sqcRYGate(q, -0.32128734898370737, 5);
  sqcRZGate(q, -2.718919788537906, 5);
  sqcRYGate(q, -2.32057025990805, 6);
  sqcRZGate(q, -0.8372989336382197, 6);
  sqcRYGate(q, -2.784006508614866, 7);
  sqcRZGate(q, -1.842731517289415, 7);
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
  sqcRYGate(q, -0.8461942991605059, 0);
  sqcRZGate(q, 1.0096928959627522, 0);
  sqcRYGate(q, -1.780607142865523, 1);
  sqcRZGate(q, -1.0935062857880176, 1);
  sqcRYGate(q, -1.9487236706263547, 2);
  sqcRZGate(q, 2.466536597418037, 2);
  sqcRYGate(q, -0.8430876715712623, 3);
  sqcRZGate(q, -2.5391520169355246, 3);
  sqcRYGate(q, -2.77159756806472, 4);
  sqcRZGate(q, 1.550720807052726, 4);
  sqcRYGate(q, -0.1080831750053255, 5);
  sqcRZGate(q, 2.575754572612618, 5);
  sqcRYGate(q, -2.5717531226094255, 6);
  sqcRZGate(q, 1.9913214721208714, 6);
  sqcRYGate(q, 0.10321583456731824, 7);
  sqcRZGate(q, 2.414219701622595, 7);
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
  sqcRYGate(q, -2.5443348597707005, 0);
  sqcRZGate(q, 1.842091184035537, 0);
  sqcRYGate(q, -1.0009652090445547, 1);
  sqcRZGate(q, -0.7492806689248509, 1);
  sqcRYGate(q, 1.7690870869981854, 2);
  sqcRZGate(q, -2.3560165621808027, 2);
  sqcRYGate(q, 0.16475640096344346, 3);
  sqcRZGate(q, -0.07002473097071768, 3);
  sqcRYGate(q, 1.0542215775246069, 4);
  sqcRZGate(q, -0.8818138183009958, 4);
  sqcRYGate(q, -1.8270632402012579, 5);
  sqcRZGate(q, 1.1530133209052464, 5);
  sqcRYGate(q, 1.8305640213234202, 6);
  sqcRZGate(q, 2.6237809408025794, 6);
  sqcRYGate(q, 1.9339654112494478, 7);
  sqcRZGate(q, 0.877568285829288, 7);
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
  sqcRYGate(q, 2.2910335408673075, 0);
  sqcRZGate(q, 0.8590353007253536, 0);
  sqcRYGate(q, 0.30729005102396956, 1);
  sqcRZGate(q, -2.274214435472542, 1);
  sqcRYGate(q, 1.361896964144818, 2);
  sqcRZGate(q, 1.3875779367006713, 2);
  sqcRYGate(q, 1.4388451400276425, 3);
  sqcRZGate(q, 1.5008713101940394, 3);
  sqcRYGate(q, -2.621454304923994, 4);
  sqcRZGate(q, -1.5697616801380754, 4);
  sqcRYGate(q, 1.7413364967769398, 5);
  sqcRZGate(q, -1.486406257714428, 5);
  sqcRYGate(q, -2.2263179279855407, 6);
  sqcRZGate(q, 0.7813866047878673, 6);
  sqcRYGate(q, 2.803117287687759, 7);
  sqcRZGate(q, 0.9995621148940285, 7);
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
  sqcRYGate(q, 3.0627494377039084, 0);
  sqcRZGate(q, 1.269551557842501, 0);
  sqcRYGate(q, 1.1392940297247547, 1);
  sqcRZGate(q, 2.4483743905099957, 1);
  sqcRYGate(q, 1.2651643799416465, 2);
  sqcRZGate(q, -0.5011252506271697, 2);
  sqcRYGate(q, -1.4198321034824268, 3);
  sqcRZGate(q, -2.1951495708922737, 3);
  sqcRYGate(q, 0.9770913695893491, 4);
  sqcRZGate(q, 1.106702328181231, 4);
  sqcRYGate(q, -0.5203681767834478, 5);
  sqcRZGate(q, -2.8067441911597077, 5);
  sqcRYGate(q, -1.915297021285497, 6);
  sqcRZGate(q, -1.658540373535378, 6);
  sqcRYGate(q, -1.8709173045129148, 7);
  sqcRZGate(q, -1.226151693969829, 7);
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
  sqcRYGate(q, 1.5114963772931895, 0);
  sqcRZGate(q, -1.1815253017015777, 0);
  sqcRYGate(q, -1.680346116455292, 1);
  sqcRZGate(q, 0.7815884927459882, 1);
  sqcRYGate(q, -0.37292683135759047, 2);
  sqcRZGate(q, -1.5365109208414491, 2);
  sqcRYGate(q, -2.1773786352570594, 3);
  sqcRZGate(q, 2.4439816385167177, 3);
  sqcRYGate(q, -0.9084919195738408, 4);
  sqcRZGate(q, -0.3090068153314655, 4);
  sqcRYGate(q, 2.286944560935664, 5);
  sqcRZGate(q, -2.800892844596399, 5);
  sqcRYGate(q, -1.6245692974529309, 6);
  sqcRZGate(q, -0.7662840099947843, 6);
  sqcRYGate(q, -1.5679358469627387, 7);
  sqcRZGate(q, 2.05148406028147, 7);
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
  sqcRYGate(q, -0.9611101408653135, 0);
  sqcRZGate(q, 2.126897847405572, 0);
  sqcRYGate(q, -1.8050330800863053, 1);
  sqcRZGate(q, -0.2421860160738829, 1);
  sqcRYGate(q, 0.045345743378215654, 2);
  sqcRZGate(q, 2.7844479878452506, 2);
  sqcRYGate(q, -1.510951325295391, 3);
  sqcRZGate(q, 1.8899280740742002, 3);
  sqcRYGate(q, 0.23213497545287787, 4);
  sqcRZGate(q, 2.0983014992816047, 4);
  sqcRYGate(q, 2.4870300067640216, 5);
  sqcRZGate(q, 1.4648085751725053, 5);
  sqcRYGate(q, -0.9969157393549404, 6);
  sqcRZGate(q, -2.953292681659972, 6);
  sqcRYGate(q, 0.524568454034256, 7);
  sqcRZGate(q, -0.6101190358358126, 7);
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
  sqcRYGate(q, -0.41182830324548464, 0);
  sqcRZGate(q, -2.928035629190623, 0);
  sqcRYGate(q, -2.5227988807344257, 1);
  sqcRZGate(q, 1.0185255635238417, 1);
  sqcRYGate(q, -2.766650858331245, 2);
  sqcRZGate(q, 0.791920551604669, 2);
  sqcRYGate(q, -1.6545932589381973, 3);
  sqcRZGate(q, 2.714257751080099, 3);
  sqcRYGate(q, 0.16942658652915732, 4);
  sqcRZGate(q, 2.808618826365127, 4);
  sqcRYGate(q, -2.882562058013179, 5);
  sqcRZGate(q, -1.1282696148496398, 5);
  sqcRYGate(q, 2.89177593724949, 6);
  sqcRZGate(q, 2.4659676713568923, 6);
  sqcRYGate(q, -0.7519850774777869, 7);
  sqcRZGate(q, -1.6964460743963625, 7);
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
  sqcRYGate(q, 0.18000631111755672, 0);
  sqcRZGate(q, 1.4298186769512862, 0);
  sqcRYGate(q, -2.6787921706734847, 1);
  sqcRZGate(q, 2.919351428881711, 1);
  sqcRYGate(q, -2.963334650433757, 2);
  sqcRZGate(q, -3.1338093625074253, 2);
  sqcRYGate(q, -2.066379021706177, 3);
  sqcRZGate(q, -2.5170029566760754, 3);
  sqcRYGate(q, -1.4102693550958707, 4);
  sqcRZGate(q, -0.17657906485646002, 4);
  sqcRYGate(q, 1.3575866777889825, 5);
  sqcRZGate(q, -1.8043321329763313, 5);
  sqcRYGate(q, 0.209498643512517, 6);
  sqcRZGate(q, -3.0119684251962706, 6);
  sqcRYGate(q, 1.745227035210127, 7);
  sqcRZGate(q, -0.3766599980989343, 7);
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
  sqcRYGate(q, 0.37466042563669577, 0);
  sqcRZGate(q, -0.9340036626332794, 0);
  sqcRYGate(q, 2.9977839537084456, 1);
  sqcRZGate(q, 1.7587090383969108, 1);
  sqcRYGate(q, -2.0629958964846336, 2);
  sqcRZGate(q, -2.724436185026959, 2);
  sqcRYGate(q, -1.2756750008673947, 3);
  sqcRZGate(q, 2.923707593759472, 3);
  sqcRYGate(q, -2.7656283263459756, 4);
  sqcRZGate(q, 1.6471040506107804, 4);
  sqcRYGate(q, -1.1000636148833651, 5);
  sqcRZGate(q, 3.0095839214703455, 5);
  sqcRYGate(q, -1.009902415819738, 6);
  sqcRZGate(q, -2.5767812285523286, 6);
  sqcRYGate(q, -2.8638761219209545, 7);
  sqcRZGate(q, -2.8387662190192233, 7);
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
  sqcRYGate(q, 0.7972523238090163, 0);
  sqcRZGate(q, 2.276045847352746, 0);
  sqcRYGate(q, -0.7766081285937982, 1);
  sqcRZGate(q, 2.4251825572005106, 1);
  sqcRYGate(q, -1.9588347810431115, 2);
  sqcRZGate(q, 2.431407300182799, 2);
  sqcRYGate(q, 1.0959817078039404, 3);
  sqcRZGate(q, 1.3930223531440427, 3);
  sqcRYGate(q, -0.8464386547528134, 4);
  sqcRZGate(q, 1.8093184374004299, 4);
  sqcRYGate(q, -1.4235230184455192, 5);
  sqcRZGate(q, -2.258443362998353, 5);
  sqcRYGate(q, 2.8187924250930068, 6);
  sqcRZGate(q, 0.45441035011066805, 6);
  sqcRYGate(q, 1.2597913461102153, 7);
  sqcRZGate(q, -1.0779064351289414, 7);
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
  sqcRYGate(q, -0.8228809025017372, 0);
  sqcRZGate(q, 1.173002462170939, 0);
  sqcRYGate(q, -2.611629551135625, 1);
  sqcRZGate(q, 2.1804381590582684, 1);
  sqcRYGate(q, -1.3993789703885993, 2);
  sqcRZGate(q, -1.9518656290957046, 2);
  sqcRYGate(q, -1.613693409311622, 3);
  sqcRZGate(q, 2.3730815804267964, 3);
  sqcRYGate(q, -2.274864798717779, 4);
  sqcRZGate(q, 1.8588039457270638, 4);
  sqcRYGate(q, 1.7929104127640914, 5);
  sqcRZGate(q, -0.8930883294801699, 5);
  sqcRYGate(q, -2.618233590559722, 6);
  sqcRZGate(q, -2.949923358568557, 6);
  sqcRYGate(q, 0.9650599484741315, 7);
  sqcRZGate(q, 0.1342624208130809, 7);
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
  sqcRYGate(q, -1.1464882380366879, 0);
  sqcRZGate(q, 1.3930650281677792, 0);
  sqcRYGate(q, 0.6827533150734366, 1);
  sqcRZGate(q, -1.9074542579891158, 1);
  sqcRYGate(q, -2.42011660823887, 2);
  sqcRZGate(q, 1.8403923434137373, 2);
  sqcRYGate(q, 2.060468866262884, 3);
  sqcRZGate(q, -0.9155469241537516, 3);
  sqcRYGate(q, 1.5143423035871084, 4);
  sqcRZGate(q, -0.9331051178122277, 4);
  sqcRYGate(q, 2.0924490197495813, 5);
  sqcRZGate(q, -2.211997715007451, 5);
  sqcRYGate(q, -0.42427284577940527, 6);
  sqcRZGate(q, -1.9806177198387414, 6);
  sqcRYGate(q, 2.7242223915861556, 7);
  sqcRZGate(q, -1.0905043673933674, 7);
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
  sqcRYGate(q, 2.1819053136272526, 0);
  sqcRZGate(q, 2.563045659640892, 0);
  sqcRYGate(q, -0.9726714288129106, 1);
  sqcRZGate(q, 1.2535958570321037, 1);
  sqcRYGate(q, 1.4326479438936692, 2);
  sqcRZGate(q, 1.6492908190026068, 2);
  sqcRYGate(q, 0.9881726590312419, 3);
  sqcRZGate(q, 1.5449097617831555, 3);
  sqcRYGate(q, -1.8360553157942787, 4);
  sqcRZGate(q, 3.0251069929350547, 4);
  sqcRYGate(q, -1.2422230763003936, 5);
  sqcRZGate(q, -2.890657913243828, 5);
  sqcRYGate(q, 1.2479827882451702, 6);
  sqcRZGate(q, -0.5897566823774918, 6);
  sqcRYGate(q, 2.1021071241979765, 7);
  sqcRZGate(q, -0.5781988382907021, 7);
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
  sqcRYGate(q, 1.5474175097593996, 0);
  sqcRZGate(q, -1.4692215563154063, 0);
  sqcRYGate(q, 0.8292656543916027, 1);
  sqcRZGate(q, -0.734641595135364, 1);
  sqcRYGate(q, -1.623481281459328, 2);
  sqcRZGate(q, 0.011974673530923852, 2);
  sqcRYGate(q, -2.5776591108466884, 3);
  sqcRZGate(q, 0.21908768790340538, 3);
  sqcRYGate(q, 1.921105338303859, 4);
  sqcRZGate(q, 2.057837619656001, 4);
  sqcRYGate(q, -1.1176733380022237, 5);
  sqcRZGate(q, 2.3603107639263623, 5);
  sqcRYGate(q, 2.9313356462753135, 6);
  sqcRZGate(q, 0.7671003810007719, 6);
  sqcRYGate(q, -1.9693822177731601, 7);
  sqcRZGate(q, 1.720717025177156, 7);
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
  sqcRYGate(q, -2.6818983341312914, 0);
  sqcRZGate(q, -2.6934617005908925, 0);
  sqcRYGate(q, 1.2176805583396746, 1);
  sqcRZGate(q, -0.06061190712827891, 1);
  sqcRYGate(q, 2.1761629006195276, 2);
  sqcRZGate(q, 2.687691696758731, 2);
  sqcRYGate(q, -0.0240930426394117, 3);
  sqcRZGate(q, 1.1195585663255498, 3);
  sqcRYGate(q, -0.8472537951543686, 4);
  sqcRZGate(q, -2.7238854757300595, 4);
  sqcRYGate(q, -0.7202183623432056, 5);
  sqcRZGate(q, 2.230200172955011, 5);
  sqcRYGate(q, -0.8662647304285906, 6);
  sqcRZGate(q, -3.0301104277862274, 6);
  sqcRYGate(q, 0.784705071929212, 7);
  sqcRZGate(q, 1.6910009677244362, 7);
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
  sqcRYGate(q, 2.514241931416948, 0);
  sqcRZGate(q, -1.511022351625322, 0);
  sqcRYGate(q, 1.1229575761264643, 1);
  sqcRZGate(q, 2.66599293658216, 1);
  sqcRYGate(q, -0.4219597240220318, 2);
  sqcRZGate(q, 2.4839177712963663, 2);
  sqcRYGate(q, -0.7934198571651718, 3);
  sqcRZGate(q, 1.517246440020004, 3);
  sqcRYGate(q, -2.229143091807953, 4);
  sqcRZGate(q, 2.3231364959954885, 4);
  sqcRYGate(q, 0.9598911834739194, 5);
  sqcRZGate(q, 0.3074647699048487, 5);
  sqcRYGate(q, 2.8349532867707037, 6);
  sqcRZGate(q, -0.328360003902179, 6);
  sqcRYGate(q, -0.02138548795341072, 7);
  sqcRZGate(q, 1.491924115266788, 7);
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
  sqcRYGate(q, -2.33622582522206, 0);
  sqcRZGate(q, 1.1973036057748596, 0);
  sqcRYGate(q, 2.4966447980708786, 1);
  sqcRZGate(q, 0.2679573394347816, 1);
  sqcRYGate(q, -2.0717753494499203, 2);
  sqcRZGate(q, 1.186486952772996, 2);
  sqcRYGate(q, -1.4572467285706086, 3);
  sqcRZGate(q, -1.6165159759603076, 3);
  sqcRYGate(q, -2.8084667150493323, 4);
  sqcRZGate(q, 1.8669217284785302, 4);
  sqcRYGate(q, 2.81344435277504, 5);
  sqcRZGate(q, -3.0457958785443724, 5);
  sqcRYGate(q, 1.5226390373157406, 6);
  sqcRZGate(q, 0.9551779406560154, 6);
  sqcRYGate(q, -2.0004609622420713, 7);
  sqcRZGate(q, 2.1495001128449154, 7);
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
  sqcRYGate(q, -2.821319208774852, 0);
  sqcRZGate(q, 1.396498072748076, 0);
  sqcRYGate(q, -1.9859648651377846, 1);
  sqcRZGate(q, 1.2467976243994103, 1);
  sqcRYGate(q, 2.368664817767731, 2);
  sqcRZGate(q, 2.4737422639441644, 2);
  sqcRYGate(q, 1.4618306081835044, 3);
  sqcRZGate(q, -0.8134344755109653, 3);
  sqcRYGate(q, 1.1499326369901282, 4);
  sqcRZGate(q, 0.2089078697753523, 4);
  sqcRYGate(q, 2.4759737732919658, 5);
  sqcRZGate(q, -2.778546278546723, 5);
  sqcRYGate(q, -1.121595393662022, 6);
  sqcRZGate(q, 2.26954874509116, 6);
  sqcRYGate(q, 1.9439705199134514, 7);
  sqcRZGate(q, -1.639805422527922, 7);
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
  sqcRYGate(q, 1.0299570129766231, 0);
  sqcRZGate(q, 2.2017530031304786, 0);
  sqcRYGate(q, -2.639858428338166, 1);
  sqcRZGate(q, -3.0007353095183396, 1);
  sqcRYGate(q, -2.98857693576914, 2);
  sqcRZGate(q, -0.8499581622437398, 2);
  sqcRYGate(q, 0.3869067629244381, 3);
  sqcRZGate(q, -1.7901950598316227, 3);
  sqcRYGate(q, 0.19223172173765768, 4);
  sqcRZGate(q, -2.966875340980463, 4);
  sqcRYGate(q, -2.655017734974675, 5);
  sqcRZGate(q, 2.6470440969765514, 5);
  sqcRYGate(q, 3.0995166508970544, 6);
  sqcRZGate(q, -1.652314847567548, 6);
  sqcRYGate(q, 1.773233071783498, 7);
  sqcRZGate(q, 0.8073128862312089, 7);
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
  sqcRYGate(q, -1.1322092175472618, 0);
  sqcRZGate(q, -0.6712876302471845, 0);
  sqcRYGate(q, -0.8939330168782904, 1);
  sqcRZGate(q, 2.8398129371277805, 1);
  sqcRYGate(q, -0.5282547798416705, 2);
  sqcRZGate(q, -2.9254858440300544, 2);
  sqcRYGate(q, 3.017483624767353, 3);
  sqcRZGate(q, 1.7621339479821512, 3);
  sqcRYGate(q, -3.007067174911612, 4);
  sqcRZGate(q, -2.473587792083297, 4);
  sqcRYGate(q, 2.370889185790964, 5);
  sqcRZGate(q, 2.229766906248801, 5);
  sqcRYGate(q, 0.5160355729951771, 6);
  sqcRZGate(q, 1.0851841102816493, 6);
  sqcRYGate(q, -1.5249694232779547, 7);
  sqcRZGate(q, 1.6177286375736493, 7);
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
  sqcRYGate(q, 1.4927431178121502, 0);
  sqcRZGate(q, 2.8572850699273484, 0);
  sqcRYGate(q, -2.09574237544948, 1);
  sqcRZGate(q, -0.12948642115135822, 1);
  sqcRYGate(q, 1.7453535918328924, 2);
  sqcRZGate(q, -2.6368696144995023, 2);
  sqcRYGate(q, -3.034343650455029, 3);
  sqcRZGate(q, -1.7653395795731948, 3);
  sqcRYGate(q, 2.4817817203801136, 4);
  sqcRZGate(q, -0.41564599872116315, 4);
  sqcRYGate(q, 1.8730835639617736, 5);
  sqcRZGate(q, 0.009566666537984376, 5);
  sqcRYGate(q, 0.8441152615493581, 6);
  sqcRZGate(q, 0.3367386445918033, 6);
  sqcRYGate(q, -2.1732021477401453, 7);
  sqcRZGate(q, -0.9800006997802916, 7);
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
  sqcRYGate(q, -0.446561768684232, 0);
  sqcRZGate(q, 1.94896441638381, 0);
  sqcRYGate(q, 0.9121915613933504, 1);
  sqcRZGate(q, 1.3904621423425536, 1);
  sqcRYGate(q, 1.8467205890067404, 2);
  sqcRZGate(q, -0.2244027763833219, 2);
  sqcRYGate(q, 0.5043821696054842, 3);
  sqcRZGate(q, -2.9888459862151966, 3);
  sqcRYGate(q, -0.23383143842472975, 4);
  sqcRZGate(q, 1.7151139552614998, 4);
  sqcRYGate(q, 2.913343299979374, 5);
  sqcRZGate(q, -2.814051060343767, 5);
  sqcRYGate(q, -2.4556396004326313, 6);
  sqcRZGate(q, 1.7721685596038685, 6);
  sqcRYGate(q, 0.43190108376129366, 7);
  sqcRZGate(q, 1.6339638872284818, 7);
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
  sqcRYGate(q, 2.037994172087579, 0);
  sqcRZGate(q, -1.5933752576281688, 0);
  sqcRYGate(q, -2.208426434894778, 1);
  sqcRZGate(q, 2.318486777022269, 1);
  sqcRYGate(q, -1.9708502650638495, 2);
  sqcRZGate(q, 1.0892104298759138, 2);
  sqcRYGate(q, -1.4713941964404817, 3);
  sqcRZGate(q, 1.0296876038763543, 3);
  sqcRYGate(q, -2.310497208218249, 4);
  sqcRZGate(q, -1.1664727529308063, 4);
  sqcRYGate(q, -1.5114196719547326, 5);
  sqcRZGate(q, 2.784887224996947, 5);
  sqcRYGate(q, 1.0184945670868117, 6);
  sqcRZGate(q, -1.713117638327331, 6);
  sqcRYGate(q, 0.5629624599168688, 7);
  sqcRZGate(q, 0.5955103993452227, 7);

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
