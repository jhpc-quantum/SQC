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

  sqcRYGate(q, 1.2665943207348507, 0);
  sqcRZGate(q, 2.4317449839376337, 0);
  sqcRYGate(q, -3.1242338566934325, 1);
  sqcRZGate(q, 0.051055865119040256, 1);
  sqcRYGate(q, -0.01225856205529219, 2);
  sqcRZGate(q, -0.7811833724813148, 2);
  sqcRYGate(q, 1.9966378981886779, 3);
  sqcRZGate(q, -0.6054125515912654, 3);
  sqcRYGate(q, -0.06538677918679035, 4);
  sqcRZGate(q, -1.9242639325038047, 4);
  sqcRYGate(q, -1.8657252445602959, 5);
  sqcRZGate(q, -0.196180802049032, 5);
  sqcRYGate(q, 0.008483516903768142, 6);
  sqcRZGate(q, 0.2288515430006273, 6);
  sqcRYGate(q, 1.9162954959496608, 7);
  sqcRZGate(q, 3.120048139938752, 7);
  sqcRYGate(q, 0.5309473618964103, 8);
  sqcRZGate(q, 0.1138988053722283, 8);
  sqcRYGate(q, -2.5292143427611196, 9);
  sqcRZGate(q, 0.7677007090028954, 9);
  sqcRYGate(q, -2.60607311492912, 10);
  sqcRZGate(q, -1.2436638108139249, 10);
  sqcRYGate(q, -0.2657235075574421, 11);
  sqcRZGate(q, -2.5945773781870076, 11);
  sqcRYGate(q, -1.573646839488089, 12);
  sqcRZGate(q, -0.6433450705126765, 12);
  sqcRYGate(q, 1.6274069813091447, 13);
  sqcRZGate(q, 3.0398454151358822, 13);
  sqcRYGate(q, -3.122855040488759, 14);
  sqcRZGate(q, 2.577971925999408, 14);
  sqcRYGate(q, 2.961018374676538, 15);
  sqcRZGate(q, -0.7090096933331145, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.9489890272911349, 0);
  sqcRZGate(q, -1.2767355527326278, 0);
  sqcRYGate(q, -0.7818622473783943, 1);
  sqcRZGate(q, -1.419637482320975, 1);
  sqcRYGate(q, 0.5121788300919511, 2);
  sqcRZGate(q, -1.7490656427678246, 2);
  sqcRYGate(q, -0.8053176544103611, 3);
  sqcRZGate(q, 2.02121862275943, 3);
  sqcRYGate(q, 0.7511016988057043, 4);
  sqcRZGate(q, -0.27266173737448834, 4);
  sqcRYGate(q, -1.3071558922250217, 5);
  sqcRZGate(q, 2.019885762094217, 5);
  sqcRYGate(q, -0.012696925196673092, 6);
  sqcRZGate(q, -2.513700374659297, 6);
  sqcRYGate(q, -3.0528302997052905, 7);
  sqcRZGate(q, 1.0024853009338697, 7);
  sqcRYGate(q, 0.004460430709311016, 8);
  sqcRZGate(q, -0.5880614116845492, 8);
  sqcRYGate(q, -0.0033366270962655875, 9);
  sqcRZGate(q, -0.7740390968396922, 9);
  sqcRYGate(q, 3.1415234050108136, 10);
  sqcRZGate(q, 2.825933741862263, 10);
  sqcRYGate(q, -1.4599118691235873, 11);
  sqcRZGate(q, 1.2856544953438398, 11);
  sqcRYGate(q, -0.014387320350710553, 12);
  sqcRZGate(q, -2.7693809821418136, 12);
  sqcRYGate(q, 0.02179608849646897, 13);
  sqcRZGate(q, 1.3272150792304016, 13);
  sqcRYGate(q, -1.1919533896444228, 14);
  sqcRZGate(q, -1.0879059368251423, 14);
  sqcRYGate(q, -0.3770030663094799, 15);
  sqcRZGate(q, -0.1405553155653036, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.025769133988195476, 0);
  sqcRZGate(q, -2.282917531101141, 0);
  sqcRYGate(q, 3.1409107008139925, 1);
  sqcRZGate(q, 1.89563814722463, 1);
  sqcRYGate(q, 3.1376701992781753, 2);
  sqcRZGate(q, -1.5617611523072652, 2);
  sqcRYGate(q, 0.010413221709021592, 3);
  sqcRZGate(q, -2.2873643684025824, 3);
  sqcRYGate(q, -3.087365554067226, 4);
  sqcRZGate(q, -0.23913024417375828, 4);
  sqcRYGate(q, -0.8514443854277962, 5);
  sqcRZGate(q, -0.0891420371542422, 5);
  sqcRYGate(q, -3.1343688531329508, 6);
  sqcRZGate(q, -0.6489975519298029, 6);
  sqcRYGate(q, 0.490757991823272, 7);
  sqcRZGate(q, 0.29370284643306555, 7);
  sqcRYGate(q, 2.140649189801933, 8);
  sqcRZGate(q, -1.1337813427206542, 8);
  sqcRYGate(q, -2.5254229984692196, 9);
  sqcRZGate(q, -2.455933033310775, 9);
  sqcRYGate(q, -1.0029124545808017, 10);
  sqcRZGate(q, 0.8212294773851164, 10);
  sqcRYGate(q, 2.515746174157598, 11);
  sqcRZGate(q, 0.5205241991153766, 11);
  sqcRYGate(q, -0.012125518956980136, 12);
  sqcRZGate(q, 3.022725057163804, 12);
  sqcRYGate(q, -0.004414272468705072, 13);
  sqcRZGate(q, -3.0241614761045215, 13);
  sqcRYGate(q, -0.06391192452799999, 14);
  sqcRZGate(q, 0.8439811808695242, 14);
  sqcRYGate(q, -1.687184938228059, 15);
  sqcRZGate(q, 2.428108921994824, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.7749763435060664, 0);
  sqcRZGate(q, -1.6226270614889957, 0);
  sqcRYGate(q, -2.472009515619075, 1);
  sqcRZGate(q, -1.7791911786612105, 1);
  sqcRYGate(q, 0.6644819554467196, 2);
  sqcRZGate(q, -0.43919333811897854, 2);
  sqcRYGate(q, 0.5532850577537115, 3);
  sqcRZGate(q, 2.8046033442246507, 3);
  sqcRYGate(q, -2.0954229444139525, 4);
  sqcRZGate(q, -0.9517431300473262, 4);
  sqcRYGate(q, -2.608921673580195, 5);
  sqcRZGate(q, -1.7350991471113524, 5);
  sqcRYGate(q, -2.4313320502111813, 6);
  sqcRZGate(q, 0.4885409375356755, 6);
  sqcRYGate(q, 3.127324232628212, 7);
  sqcRZGate(q, -1.7833981141986257, 7);
  sqcRYGate(q, 0.06474473073319498, 8);
  sqcRZGate(q, -0.6792999337333825, 8);
  sqcRYGate(q, -3.1409172079103254, 9);
  sqcRZGate(q, 0.2306934432538794, 9);
  sqcRYGate(q, 2.8560791516889243, 10);
  sqcRZGate(q, 2.00762700315735, 10);
  sqcRYGate(q, -0.9931458730391496, 11);
  sqcRZGate(q, -1.335930796211949, 11);
  sqcRYGate(q, 3.1059725128956797, 12);
  sqcRZGate(q, -0.369137356430431, 12);
  sqcRYGate(q, 0.004604924114693709, 13);
  sqcRZGate(q, -2.9611636411099895, 13);
  sqcRYGate(q, 3.124102291454091, 14);
  sqcRZGate(q, 2.4308660243854385, 14);
  sqcRYGate(q, -3.12397450019889, 15);
  sqcRZGate(q, 1.9559509429405981, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.137902891133402, 0);
  sqcRZGate(q, 0.7066221469508269, 0);
  sqcRYGate(q, 3.135687758785943, 1);
  sqcRZGate(q, -2.606804792578585, 1);
  sqcRYGate(q, 0.05900792087724545, 2);
  sqcRZGate(q, 0.8994683077880302, 2);
  sqcRYGate(q, 0.210506536984286, 3);
  sqcRZGate(q, -2.2358047287173735, 3);
  sqcRYGate(q, 0.29005763714785004, 4);
  sqcRZGate(q, -1.5243181107387649, 4);
  sqcRYGate(q, -0.8612003720754321, 5);
  sqcRZGate(q, -0.42573660510274897, 5);
  sqcRYGate(q, -3.1413271261348563, 6);
  sqcRZGate(q, -2.5700274581452525, 6);
  sqcRYGate(q, -0.429419025299157, 7);
  sqcRZGate(q, -1.0647724569025778, 7);
  sqcRYGate(q, 1.2680024594198303, 8);
  sqcRZGate(q, 2.8290384508217286, 8);
  sqcRYGate(q, 0.0032306752259581017, 9);
  sqcRZGate(q, 2.3176034293264394, 9);
  sqcRYGate(q, -2.4158718864508426, 10);
  sqcRZGate(q, -2.3304475074083575, 10);
  sqcRYGate(q, 1.9184948133519661, 11);
  sqcRZGate(q, -0.697085264738255, 11);
  sqcRYGate(q, 1.1450140416990982, 12);
  sqcRZGate(q, 1.8764091569872605, 12);
  sqcRYGate(q, -2.617155609113786, 13);
  sqcRZGate(q, -0.20608552276307804, 13);
  sqcRYGate(q, -1.5075498610865115, 14);
  sqcRZGate(q, -0.4947660844735682, 14);
  sqcRYGate(q, 0.0784946035724543, 15);
  sqcRZGate(q, 1.8819228391162135, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.9136971924338262, 0);
  sqcRZGate(q, 0.9529915087537539, 0);
  sqcRYGate(q, -0.16431090095773349, 1);
  sqcRZGate(q, -1.16732601697193, 1);
  sqcRYGate(q, 0.17278607680755856, 2);
  sqcRZGate(q, 3.1097277879260243, 2);
  sqcRYGate(q, 2.9927732371375426, 3);
  sqcRZGate(q, 2.4532790575659593, 3);
  sqcRYGate(q, -1.7430047594933753, 4);
  sqcRZGate(q, 0.6024367840860227, 4);
  sqcRYGate(q, -2.3989612935493283, 5);
  sqcRZGate(q, -2.071329277402378, 5);
  sqcRYGate(q, 0.9306958905492826, 6);
  sqcRZGate(q, -3.0847975274030763, 6);
  sqcRYGate(q, 0.003983484339698933, 7);
  sqcRZGate(q, 0.9053176703832541, 7);
  sqcRYGate(q, -3.137884965542186, 8);
  sqcRZGate(q, -1.96654685722089, 8);
  sqcRYGate(q, 0.9313200744201104, 9);
  sqcRZGate(q, 3.085703123279501, 9);
  sqcRYGate(q, -2.104635113144276, 10);
  sqcRZGate(q, 0.06415016740950907, 10);
  sqcRYGate(q, -1.8147713396015464, 11);
  sqcRZGate(q, 2.041930508511608, 11);
  sqcRYGate(q, -3.127870900726765, 12);
  sqcRZGate(q, -0.9624944125798969, 12);
  sqcRYGate(q, -3.1408916330132985, 13);
  sqcRZGate(q, 0.41282855778147587, 13);
  sqcRYGate(q, -0.04800623190831831, 14);
  sqcRZGate(q, -2.5758279562700013, 14);
  sqcRYGate(q, -3.0751455974068773, 15);
  sqcRZGate(q, -1.8069960912122145, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.1174865862437553, 0);
  sqcRZGate(q, 2.0735275128722304, 0);
  sqcRYGate(q, 3.0877179252956104, 1);
  sqcRZGate(q, 1.5747189573714548, 1);
  sqcRYGate(q, 1.525661567060643, 2);
  sqcRZGate(q, 2.0390204650567805, 2);
  sqcRYGate(q, 0.7711505409387188, 3);
  sqcRZGate(q, -0.8713562978617813, 3);
  sqcRYGate(q, 3.118881959009276, 4);
  sqcRZGate(q, -1.8982557879091975, 4);
  sqcRYGate(q, 3.1191367156400434, 5);
  sqcRZGate(q, 1.0797239353742514, 5);
  sqcRYGate(q, -3.129992312433308, 6);
  sqcRZGate(q, 2.4702455049161807, 6);
  sqcRYGate(q, -1.8296894219343025, 7);
  sqcRZGate(q, 3.0873973102399277, 7);
  sqcRYGate(q, 1.5899252431190227, 8);
  sqcRZGate(q, 2.890919696247924, 8);
  sqcRYGate(q, -1.7033346881818083, 9);
  sqcRZGate(q, -1.0517309527776135, 9);
  sqcRYGate(q, -0.7570636993653324, 10);
  sqcRZGate(q, -0.5910246217484292, 10);
  sqcRYGate(q, -0.19772977920076784, 11);
  sqcRZGate(q, 0.31178537386054916, 11);
  sqcRYGate(q, -0.7610208735662507, 12);
  sqcRZGate(q, 1.4788553509422815, 12);
  sqcRYGate(q, -2.8626724539894495, 13);
  sqcRZGate(q, -0.08556223681374409, 13);
  sqcRYGate(q, 1.4319656770290803, 14);
  sqcRZGate(q, -0.7845276648267936, 14);
  sqcRYGate(q, 1.393125707958987, 15);
  sqcRZGate(q, -0.6170935094768192, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.12646399535810726, 0);
  sqcRZGate(q, -1.3513766923843082, 0);
  sqcRYGate(q, -2.3052953212304086, 1);
  sqcRZGate(q, -1.5812643411794376, 1);
  sqcRYGate(q, 0.03576796627304596, 2);
  sqcRZGate(q, -0.9885170104913864, 2);
  sqcRYGate(q, 2.297499580045542, 3);
  sqcRZGate(q, -3.0222929033065395, 3);
  sqcRYGate(q, -2.3460643631281246, 4);
  sqcRZGate(q, -1.2873078611322932, 4);
  sqcRYGate(q, 0.8335655162921896, 5);
  sqcRZGate(q, 0.8992878535021543, 5);
  sqcRYGate(q, -2.2993530611586745, 6);
  sqcRZGate(q, 2.8900094416040787, 6);
  sqcRYGate(q, 1.5694671917567362, 7);
  sqcRZGate(q, -0.06487929465347048, 7);
  sqcRYGate(q, 0.36380236850254644, 8);
  sqcRZGate(q, 2.9825001461505747, 8);
  sqcRYGate(q, -3.058151493266735, 9);
  sqcRZGate(q, -2.850249734211632, 9);
  sqcRYGate(q, 0.11464709594980067, 10);
  sqcRZGate(q, 2.3527235553446206, 10);
  sqcRYGate(q, 0.8544132964845234, 11);
  sqcRZGate(q, 0.5677032745311585, 11);
  sqcRYGate(q, -1.6794082579221463, 12);
  sqcRZGate(q, -0.9095640684091384, 12);
  sqcRYGate(q, -0.6655668761483303, 13);
  sqcRZGate(q, -2.3119386776251365, 13);
  sqcRYGate(q, 2.7311159875815414, 14);
  sqcRZGate(q, -2.825506481145484, 14);
  sqcRYGate(q, -2.8303825783117733, 15);
  sqcRZGate(q, -0.2830389557560311, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.96534294056114, 0);
  sqcRZGate(q, -3.1170999342544814, 0);
  sqcRYGate(q, 0.00011334921109007468, 1);
  sqcRZGate(q, -1.5554117439365085, 1);
  sqcRYGate(q, 3.1382129408401114, 2);
  sqcRZGate(q, -1.9402773584298394, 2);
  sqcRYGate(q, 2.629737352091905, 3);
  sqcRZGate(q, 0.17208941089921573, 3);
  sqcRYGate(q, 0.044637134218434474, 4);
  sqcRZGate(q, 1.9310335956833788, 4);
  sqcRYGate(q, -3.1392487183685747, 5);
  sqcRZGate(q, 3.017742723712553, 5);
  sqcRYGate(q, 2.362696022298215, 6);
  sqcRZGate(q, -1.0081247776354525, 6);
  sqcRYGate(q, -0.005059918985919509, 7);
  sqcRZGate(q, 1.6027750865187382, 7);
  sqcRYGate(q, 0.09263409840948623, 8);
  sqcRZGate(q, 0.02033965189353637, 8);
  sqcRYGate(q, 2.585457719847231, 9);
  sqcRZGate(q, -2.8189615164466924, 9);
  sqcRYGate(q, 0.23356663481437145, 10);
  sqcRZGate(q, 1.2380503921989112, 10);
  sqcRYGate(q, 3.112857498530652, 11);
  sqcRZGate(q, 3.135006535055188, 11);
  sqcRYGate(q, 0.006086748611450549, 12);
  sqcRZGate(q, 2.231080535007395, 12);
  sqcRYGate(q, 1.5643547444905008, 13);
  sqcRZGate(q, 0.0077862116654481475, 13);
  sqcRYGate(q, 0.16068659812272515, 14);
  sqcRZGate(q, 2.5505150453048975, 14);
  sqcRYGate(q, -1.860904830211429, 15);
  sqcRZGate(q, 2.725413242661482, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.3690318912885653, 0);
  sqcRZGate(q, 1.800942139522304, 0);
  sqcRYGate(q, -0.7384991560271915, 1);
  sqcRZGate(q, 1.639666520169108, 1);
  sqcRYGate(q, -1.499111586395764, 2);
  sqcRZGate(q, -1.4342132309547775, 2);
  sqcRYGate(q, 0.8138672313211526, 3);
  sqcRZGate(q, -1.4115992515566864, 3);
  sqcRYGate(q, -1.9128673861972905, 4);
  sqcRZGate(q, 0.6890655672395756, 4);
  sqcRYGate(q, -1.5515243019893363, 5);
  sqcRZGate(q, 1.5886904423836115, 5);
  sqcRYGate(q, 0.7284570745930536, 6);
  sqcRZGate(q, -0.5714130873541547, 6);
  sqcRYGate(q, -0.5817200785536554, 7);
  sqcRZGate(q, 1.6993529928507343, 7);
  sqcRYGate(q, 0.15715774368962468, 8);
  sqcRZGate(q, 0.5460428026678783, 8);
  sqcRYGate(q, -3.129936796215218, 9);
  sqcRZGate(q, 2.1422475084846004, 9);
  sqcRYGate(q, -3.05173214544052, 10);
  sqcRZGate(q, -0.5781843240449832, 10);
  sqcRYGate(q, -0.06539383491912418, 11);
  sqcRZGate(q, -1.6701404883977728, 11);
  sqcRYGate(q, -3.1231841810121344, 12);
  sqcRZGate(q, -0.05522557892491732, 12);
  sqcRYGate(q, -1.912227219880731, 13);
  sqcRZGate(q, 0.028926340962617064, 13);
  sqcRYGate(q, -0.03133817150817286, 14);
  sqcRZGate(q, -2.2063025641051386, 14);
  sqcRYGate(q, -1.9697500283445928, 15);
  sqcRZGate(q, -2.0932471598908187, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5399788672822572, 0);
  sqcRZGate(q, 3.0633182739228815, 0);
  sqcRYGate(q, -3.087588228730448, 1);
  sqcRZGate(q, -0.6558267604119363, 1);
  sqcRYGate(q, 0.0465813150659482, 2);
  sqcRZGate(q, 0.008990480548742852, 2);
  sqcRYGate(q, 3.128088624113194, 3);
  sqcRZGate(q, -0.7787138928002371, 3);
  sqcRYGate(q, 2.6230367955208185, 4);
  sqcRZGate(q, -1.9128041469329389, 4);
  sqcRYGate(q, 0.04738164866937322, 5);
  sqcRZGate(q, -0.7378152220249805, 5);
  sqcRYGate(q, 0.039740288831644044, 6);
  sqcRZGate(q, -0.29890789391673955, 6);
  sqcRYGate(q, -3.103219821892751, 7);
  sqcRZGate(q, 1.848470782741289, 7);
  sqcRYGate(q, 0.08502728135699165, 8);
  sqcRZGate(q, -0.7952743096132658, 8);
  sqcRYGate(q, -1.590575227702602, 9);
  sqcRZGate(q, -0.030291857757474002, 9);
  sqcRYGate(q, 2.721042548456089, 10);
  sqcRZGate(q, 0.5660838687941973, 10);
  sqcRYGate(q, -3.099477687304593, 11);
  sqcRZGate(q, -0.784794101736136, 11);
  sqcRYGate(q, -0.051093406646539205, 12);
  sqcRZGate(q, 0.982607554070256, 12);
  sqcRYGate(q, -1.4832635727762273, 13);
  sqcRZGate(q, -0.5297508980973087, 13);
  sqcRYGate(q, -0.059579645118621904, 14);
  sqcRZGate(q, 0.4063631477943632, 14);
  sqcRYGate(q, -3.140359350960363, 15);
  sqcRZGate(q, 2.3560127123113137, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.4952472060122277, 0);
  sqcRZGate(q, -1.6828847657905033, 0);
  sqcRYGate(q, -0.14949827130968352, 1);
  sqcRZGate(q, -2.351905484957203, 1);
  sqcRYGate(q, -1.4638438813537586, 2);
  sqcRZGate(q, 0.05533013392332894, 2);
  sqcRYGate(q, 1.7348302991375486, 3);
  sqcRZGate(q, 0.1044952148179199, 3);
  sqcRYGate(q, 2.920165447526133, 4);
  sqcRZGate(q, 1.2902936798452127, 4);
  sqcRYGate(q, 0.2783454016531506, 5);
  sqcRZGate(q, -0.7620004205791702, 5);
  sqcRYGate(q, -1.7740692348959186, 6);
  sqcRZGate(q, 1.6258333371377478, 6);
  sqcRYGate(q, 1.3496097361969825, 7);
  sqcRZGate(q, 1.6211010686944665, 7);
  sqcRYGate(q, 1.4403612299646653, 8);
  sqcRZGate(q, -3.05253463345103, 8);
  sqcRYGate(q, -1.8039038173507629, 9);
  sqcRZGate(q, -3.0123231770262424, 9);
  sqcRYGate(q, 1.4023038952474822, 10);
  sqcRZGate(q, -3.0445993953059567, 10);
  sqcRYGate(q, -1.6357071298601067, 11);
  sqcRZGate(q, -0.08583305161767907, 11);
  sqcRYGate(q, -2.9945734182365, 12);
  sqcRZGate(q, -2.0782561308128464, 12);
  sqcRYGate(q, 0.26242269010653535, 13);
  sqcRZGate(q, 0.020992248370740735, 13);
  sqcRYGate(q, -1.4514249478308738, 14);
  sqcRZGate(q, -1.4523580959145652, 14);
  sqcRYGate(q, -2.1703396254943983, 15);
  sqcRZGate(q, -1.103109611755538, 15);

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
