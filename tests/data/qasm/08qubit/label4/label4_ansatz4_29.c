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

  sqcRYGate(q, -1.3019046924138395, 0);
  sqcRZGate(q, -0.23101468456679913, 0);
  sqcRYGate(q, 0.5073237481129471, 1);
  sqcRZGate(q, 0.5864616652849948, 1);
  sqcRYGate(q, -2.101483468526969, 2);
  sqcRZGate(q, 0.7358376801818464, 2);
  sqcRYGate(q, 2.3057176914837796, 3);
  sqcRZGate(q, -2.883122892285596, 3);
  sqcRYGate(q, -0.023086738980056396, 4);
  sqcRZGate(q, 1.3467098248987757, 4);
  sqcRYGate(q, 2.1448335887637135, 5);
  sqcRZGate(q, 3.0294919008036842, 5);
  sqcRYGate(q, -2.623759027567841, 6);
  sqcRZGate(q, -2.153957172876943, 6);
  sqcRYGate(q, -1.4015420281340258, 7);
  sqcRZGate(q, -3.1170069074275824, 7);
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
  sqcRYGate(q, -2.5742991247075517, 0);
  sqcRZGate(q, 0.523958052821056, 0);
  sqcRYGate(q, -1.2341711675964975, 1);
  sqcRZGate(q, 2.0249451664282354, 1);
  sqcRYGate(q, 1.165341445896523, 2);
  sqcRZGate(q, 2.552258116798272, 2);
  sqcRYGate(q, -0.7353654162829236, 3);
  sqcRZGate(q, 3.0887976236939743, 3);
  sqcRYGate(q, 1.2102376526411345, 4);
  sqcRZGate(q, 0.7890773615655604, 4);
  sqcRYGate(q, 0.8272949247166839, 5);
  sqcRZGate(q, 2.601285342838126, 5);
  sqcRYGate(q, 0.624723554552614, 6);
  sqcRZGate(q, 1.9126148654271624, 6);
  sqcRYGate(q, -0.38406269863569886, 7);
  sqcRZGate(q, 0.2870947840643756, 7);
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
  sqcRYGate(q, 0.4564703252330478, 0);
  sqcRZGate(q, 2.9876759676478537, 0);
  sqcRYGate(q, 2.730029107329878, 1);
  sqcRZGate(q, 2.6622166726274976, 1);
  sqcRYGate(q, 1.6274803545584566, 2);
  sqcRZGate(q, 0.46557347934987187, 2);
  sqcRYGate(q, -1.7271695079916571, 3);
  sqcRZGate(q, -1.3935980196726205, 3);
  sqcRYGate(q, 3.0219867866943497, 4);
  sqcRZGate(q, 0.7597400124555147, 4);
  sqcRYGate(q, -2.896920591753247, 5);
  sqcRZGate(q, -3.036871638148486, 5);
  sqcRYGate(q, 2.1398611822844753, 6);
  sqcRZGate(q, 3.0575707479611465, 6);
  sqcRYGate(q, 1.8427964800997203, 7);
  sqcRZGate(q, 1.6833035945328598, 7);
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
  sqcRYGate(q, -2.8826340993335653, 0);
  sqcRZGate(q, -1.737991634464902, 0);
  sqcRYGate(q, -2.9522193645136694, 1);
  sqcRZGate(q, 0.8381368102075041, 1);
  sqcRYGate(q, -1.6352400431353131, 2);
  sqcRZGate(q, -0.08211632115027093, 2);
  sqcRYGate(q, 0.9932626080671467, 3);
  sqcRZGate(q, 2.1392812375860206, 3);
  sqcRYGate(q, -1.123683399225488, 4);
  sqcRZGate(q, -0.029347628185111496, 4);
  sqcRYGate(q, -1.908716668647565, 5);
  sqcRZGate(q, 2.4760127327863755, 5);
  sqcRYGate(q, 2.36849320875741, 6);
  sqcRZGate(q, -1.0147937127177382, 6);
  sqcRYGate(q, 0.7910287845431512, 7);
  sqcRZGate(q, -0.49325674160213934, 7);
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
  sqcRYGate(q, -1.6428057433466932, 0);
  sqcRZGate(q, -1.512860524721654, 0);
  sqcRYGate(q, -2.039624482672779, 1);
  sqcRZGate(q, -0.9778742865565981, 1);
  sqcRYGate(q, 1.0845450899787543, 2);
  sqcRZGate(q, 2.485973078307147, 2);
  sqcRYGate(q, -2.768803719679185, 3);
  sqcRZGate(q, 2.591549084847653, 3);
  sqcRYGate(q, -0.5250830403809346, 4);
  sqcRZGate(q, -0.042897680133164855, 4);
  sqcRYGate(q, 2.4099409202605733, 5);
  sqcRZGate(q, 0.17635464125298841, 5);
  sqcRYGate(q, 1.7354309839365207, 6);
  sqcRZGate(q, 1.6214643704521157, 6);
  sqcRYGate(q, -0.1684532899026908, 7);
  sqcRZGate(q, 1.332738844052943, 7);
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
  sqcRYGate(q, 2.7289340464500453, 0);
  sqcRZGate(q, -0.2217243136420004, 0);
  sqcRYGate(q, 2.119884532485541, 1);
  sqcRZGate(q, 1.3544930102906665, 1);
  sqcRYGate(q, 2.0557919142792356, 2);
  sqcRZGate(q, 2.4334492741667604, 2);
  sqcRYGate(q, 1.5032080328648942, 3);
  sqcRZGate(q, 1.2769537985439514, 3);
  sqcRYGate(q, 1.2269565108615508, 4);
  sqcRZGate(q, 2.4733430639490264, 4);
  sqcRYGate(q, -1.706099698542224, 5);
  sqcRZGate(q, -0.42044514712523906, 5);
  sqcRYGate(q, -1.0973187581964947, 6);
  sqcRZGate(q, -0.3747428763081988, 6);
  sqcRYGate(q, 1.5840979636310948, 7);
  sqcRZGate(q, -0.012841826308124025, 7);
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
  sqcRYGate(q, 0.9660657556337826, 0);
  sqcRZGate(q, -2.384594573670759, 0);
  sqcRYGate(q, 1.741092515643441, 1);
  sqcRZGate(q, 2.7262257247147588, 1);
  sqcRYGate(q, -2.500980203462404, 2);
  sqcRZGate(q, -1.4172316781442955, 2);
  sqcRYGate(q, 2.3892599494902127, 3);
  sqcRZGate(q, -1.431798452483565, 3);
  sqcRYGate(q, -0.24043464467653253, 4);
  sqcRZGate(q, 3.004589953971516, 4);
  sqcRYGate(q, 2.5280508520399323, 5);
  sqcRZGate(q, -1.9804172655793577, 5);
  sqcRYGate(q, 0.8236959367330003, 6);
  sqcRZGate(q, -0.3513845690534872, 6);
  sqcRYGate(q, -2.0619298709832075, 7);
  sqcRZGate(q, 1.9953730791623638, 7);
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
  sqcRYGate(q, 0.32575630169589936, 0);
  sqcRZGate(q, 1.3532084486323939, 0);
  sqcRYGate(q, 1.5692651223065501, 1);
  sqcRZGate(q, 1.9998772135127807, 1);
  sqcRYGate(q, 2.2201036428227594, 2);
  sqcRZGate(q, 0.8545802989063285, 2);
  sqcRYGate(q, -1.5084298945985426, 3);
  sqcRZGate(q, -0.1175067905319723, 3);
  sqcRYGate(q, 2.985467408584299, 4);
  sqcRZGate(q, -1.1822148758770725, 4);
  sqcRYGate(q, 2.5432224341017533, 5);
  sqcRZGate(q, 0.028689496343887618, 5);
  sqcRYGate(q, 2.219157478561237, 6);
  sqcRZGate(q, -2.6331031419648703, 6);
  sqcRYGate(q, -1.6711007291819007, 7);
  sqcRZGate(q, 2.1692828974071623, 7);
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
  sqcRYGate(q, -2.9829340910613, 0);
  sqcRZGate(q, -1.5669595835405623, 0);
  sqcRYGate(q, 1.0941201569604662, 1);
  sqcRZGate(q, -2.546059121171831, 1);
  sqcRYGate(q, -1.3262837485978762, 2);
  sqcRZGate(q, 0.6537681630097607, 2);
  sqcRYGate(q, 0.6236318574653746, 3);
  sqcRZGate(q, -2.2531098513685093, 3);
  sqcRYGate(q, 0.8236854107771716, 4);
  sqcRZGate(q, -1.4280436053000831, 4);
  sqcRYGate(q, -1.32518477350149, 5);
  sqcRZGate(q, 0.8863921099793934, 5);
  sqcRYGate(q, -2.124014948019229, 6);
  sqcRZGate(q, 1.6539781558571274, 6);
  sqcRYGate(q, -0.9475015936560318, 7);
  sqcRZGate(q, -1.5158766504723211, 7);
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
  sqcRYGate(q, -1.716457669125244, 0);
  sqcRZGate(q, -0.6762870654005034, 0);
  sqcRYGate(q, 0.2732435068484708, 1);
  sqcRZGate(q, 0.10384551570599498, 1);
  sqcRYGate(q, 1.2338263349450853, 2);
  sqcRZGate(q, 1.5561193372335387, 2);
  sqcRYGate(q, -2.3192681993466, 3);
  sqcRZGate(q, 0.5739421771797806, 3);
  sqcRYGate(q, -2.9953298214372883, 4);
  sqcRZGate(q, 2.9399909716924353, 4);
  sqcRYGate(q, -0.617607144921414, 5);
  sqcRZGate(q, -0.6899877463781326, 5);
  sqcRYGate(q, -1.6243271761765135, 6);
  sqcRZGate(q, -0.11605706566417949, 6);
  sqcRYGate(q, 0.0040947908706401755, 7);
  sqcRZGate(q, -0.06236031544609045, 7);
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
  sqcRYGate(q, 0.7284546974701843, 0);
  sqcRZGate(q, 1.51996524130704, 0);
  sqcRYGate(q, 1.5506615945049365, 1);
  sqcRZGate(q, -0.009267425455506977, 1);
  sqcRYGate(q, -0.9197377317696498, 2);
  sqcRZGate(q, 1.0022367894346995, 2);
  sqcRYGate(q, 1.9598429325481161, 3);
  sqcRZGate(q, -2.565583417755967, 3);
  sqcRYGate(q, -2.762706887998551, 4);
  sqcRZGate(q, 2.344766050203667, 4);
  sqcRYGate(q, -1.557366388090018, 5);
  sqcRZGate(q, 1.3342186548766177, 5);
  sqcRYGate(q, -1.4566595521807653, 6);
  sqcRZGate(q, 1.7184685211768143, 6);
  sqcRYGate(q, 0.08970788146370687, 7);
  sqcRZGate(q, -0.17260071108620778, 7);
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
  sqcRYGate(q, -1.8524280904925474, 0);
  sqcRZGate(q, 2.4471424858451885, 0);
  sqcRYGate(q, -1.641836152798354, 1);
  sqcRZGate(q, 0.32793607665503766, 1);
  sqcRYGate(q, 2.7136237268461825, 2);
  sqcRZGate(q, -0.0638937956433594, 2);
  sqcRYGate(q, -2.6246815792392533, 3);
  sqcRZGate(q, 0.44369456607472574, 3);
  sqcRYGate(q, -0.8240986634400018, 4);
  sqcRZGate(q, -0.11414175495062469, 4);
  sqcRYGate(q, -1.08312038616362, 5);
  sqcRZGate(q, -0.39955879699374725, 5);
  sqcRYGate(q, -2.4186366619310187, 6);
  sqcRZGate(q, 0.5513155075782468, 6);
  sqcRYGate(q, -2.700257953187183, 7);
  sqcRZGate(q, 1.946167554305955, 7);
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
  sqcRYGate(q, 3.0746898062781254, 0);
  sqcRZGate(q, 1.7314601629564637, 0);
  sqcRYGate(q, 1.3005542234113374, 1);
  sqcRZGate(q, -1.7809640491557213, 1);
  sqcRYGate(q, -0.8521136224463506, 2);
  sqcRZGate(q, -0.2917395077062049, 2);
  sqcRYGate(q, 2.6442502250393303, 3);
  sqcRZGate(q, -1.0933631902526877, 3);
  sqcRYGate(q, -0.4471933811030592, 4);
  sqcRZGate(q, 2.7540526704025927, 4);
  sqcRYGate(q, -0.43162814920428016, 5);
  sqcRZGate(q, 0.5854598836477822, 5);
  sqcRYGate(q, -2.7949942583308607, 6);
  sqcRZGate(q, 2.0045140843939393, 6);
  sqcRYGate(q, 0.7277199846378215, 7);
  sqcRZGate(q, 0.7102131110191958, 7);
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
  sqcRYGate(q, 1.612014108068541, 0);
  sqcRZGate(q, -0.20275445170774578, 0);
  sqcRYGate(q, 0.8245279409695977, 1);
  sqcRZGate(q, -0.8347135720995524, 1);
  sqcRYGate(q, -1.998882600043455, 2);
  sqcRZGate(q, 1.473098769812731, 2);
  sqcRYGate(q, 1.4884482341720364, 3);
  sqcRZGate(q, 1.6158119642209092, 3);
  sqcRYGate(q, 2.525195351597734, 4);
  sqcRZGate(q, -0.7799874242952692, 4);
  sqcRYGate(q, -2.2466919722901526, 5);
  sqcRZGate(q, 2.064818228462811, 5);
  sqcRYGate(q, 0.2965475197076719, 6);
  sqcRZGate(q, -2.0194990365537313, 6);
  sqcRYGate(q, -0.2150663118262992, 7);
  sqcRZGate(q, 3.062748277594329, 7);
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
  sqcRYGate(q, -0.12856681357809663, 0);
  sqcRZGate(q, -2.023117545141699, 0);
  sqcRYGate(q, -0.8686103419795481, 1);
  sqcRZGate(q, -1.321486125727314, 1);
  sqcRYGate(q, -1.7467864519749243, 2);
  sqcRZGate(q, 1.260340749066885, 2);
  sqcRYGate(q, 1.6298997884198647, 3);
  sqcRZGate(q, 1.2136294189040475, 3);
  sqcRYGate(q, 2.2277893921934346, 4);
  sqcRZGate(q, -1.2967410945849585, 4);
  sqcRYGate(q, 2.670189596721392, 5);
  sqcRZGate(q, 2.070941851686367, 5);
  sqcRYGate(q, 2.053064299611748, 6);
  sqcRZGate(q, 0.6319008612941917, 6);
  sqcRYGate(q, -0.17631578565499412, 7);
  sqcRZGate(q, -2.080730723406344, 7);
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
  sqcRYGate(q, 0.7492116788293196, 0);
  sqcRZGate(q, 0.16869083090365222, 0);
  sqcRYGate(q, -1.0792487305876595, 1);
  sqcRZGate(q, 1.482888991922197, 1);
  sqcRYGate(q, -2.2420902792452324, 2);
  sqcRZGate(q, 1.1424659093705687, 2);
  sqcRYGate(q, 0.6877715547261718, 3);
  sqcRZGate(q, 0.1678796187630202, 3);
  sqcRYGate(q, 0.5887240398859053, 4);
  sqcRZGate(q, 1.8807062822651337, 4);
  sqcRYGate(q, 2.229848382914702, 5);
  sqcRZGate(q, 2.4274363864030546, 5);
  sqcRYGate(q, -1.6534250616383026, 6);
  sqcRZGate(q, -2.8331725758173096, 6);
  sqcRYGate(q, -0.9348261171693191, 7);
  sqcRZGate(q, -2.1289084007032013, 7);
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
  sqcRYGate(q, -1.881189747956304, 0);
  sqcRZGate(q, -1.0594198896292406, 0);
  sqcRYGate(q, 0.7755808411232654, 1);
  sqcRZGate(q, 1.9966744475988287, 1);
  sqcRYGate(q, -0.5076110390929787, 2);
  sqcRZGate(q, 2.5911508535018433, 2);
  sqcRYGate(q, -0.8580099959145908, 3);
  sqcRZGate(q, 0.5080793106433, 3);
  sqcRYGate(q, -0.018614316232075014, 4);
  sqcRZGate(q, 2.9850099395724174, 4);
  sqcRYGate(q, 0.19591584634144493, 5);
  sqcRZGate(q, -2.078782260384299, 5);
  sqcRYGate(q, -2.0946424144095173, 6);
  sqcRZGate(q, 1.2528412914138078, 6);
  sqcRYGate(q, -1.0202004910114244, 7);
  sqcRZGate(q, -0.8625993824003925, 7);
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
  sqcRYGate(q, -0.3674918855819618, 0);
  sqcRZGate(q, -0.3484968052645074, 0);
  sqcRYGate(q, 0.5255616568032827, 1);
  sqcRZGate(q, -2.222524488114251, 1);
  sqcRYGate(q, -2.8144151775124366, 2);
  sqcRZGate(q, 2.8472571729854974, 2);
  sqcRYGate(q, -1.3997203744840334, 3);
  sqcRZGate(q, 1.7817235709732329, 3);
  sqcRYGate(q, -1.2866547277412306, 4);
  sqcRZGate(q, -0.3228572082107623, 4);
  sqcRYGate(q, 0.6961435078922458, 5);
  sqcRZGate(q, -2.0579212029553844, 5);
  sqcRYGate(q, 3.040360131336798, 6);
  sqcRZGate(q, -2.2435574208320803, 6);
  sqcRYGate(q, 0.6742181535274563, 7);
  sqcRZGate(q, -0.2586609201240522, 7);
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
  sqcRYGate(q, 0.20693020574686916, 0);
  sqcRZGate(q, 2.5014051691737484, 0);
  sqcRYGate(q, -1.488335407030492, 1);
  sqcRZGate(q, 2.7429962704479007, 1);
  sqcRYGate(q, 2.1167323934288866, 2);
  sqcRZGate(q, 2.8405786293501456, 2);
  sqcRYGate(q, -2.091708320064382, 3);
  sqcRZGate(q, -2.3168771782496353, 3);
  sqcRYGate(q, 2.042410423492104, 4);
  sqcRZGate(q, 0.755523589005862, 4);
  sqcRYGate(q, -1.5827802349990847, 5);
  sqcRZGate(q, 1.6202356104537148, 5);
  sqcRYGate(q, -1.420146916483108, 6);
  sqcRZGate(q, -2.930836815139988, 6);
  sqcRYGate(q, 1.6011946103490855, 7);
  sqcRZGate(q, 1.0367108869483421, 7);
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
  sqcRYGate(q, 1.2538273153195814, 0);
  sqcRZGate(q, 2.55416791859733, 0);
  sqcRYGate(q, -2.431938501035473, 1);
  sqcRZGate(q, -1.2100163503912267, 1);
  sqcRYGate(q, -1.4923344597373411, 2);
  sqcRZGate(q, 0.5446373634469461, 2);
  sqcRYGate(q, 1.2146499410629144, 3);
  sqcRZGate(q, -0.7553975196120192, 3);
  sqcRYGate(q, 2.852502549702862, 4);
  sqcRZGate(q, 2.7939602416765794, 4);
  sqcRYGate(q, 1.74125546427212, 5);
  sqcRZGate(q, -3.123361641078727, 5);
  sqcRYGate(q, -2.1457630960678777, 6);
  sqcRZGate(q, -2.3198879597009814, 6);
  sqcRYGate(q, -2.9325201570781005, 7);
  sqcRZGate(q, -1.4591568174214657, 7);
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
  sqcRYGate(q, -1.3952778967597195, 0);
  sqcRZGate(q, -3.141509971232453, 0);
  sqcRYGate(q, 0.08383676450427568, 1);
  sqcRZGate(q, 0.8466184673515507, 1);
  sqcRYGate(q, -2.674341190728141, 2);
  sqcRZGate(q, -3.1404474375859075, 2);
  sqcRYGate(q, 2.591125615282127, 3);
  sqcRZGate(q, 0.2361355730212725, 3);
  sqcRYGate(q, 0.9147300954816506, 4);
  sqcRZGate(q, 2.778366396868071, 4);
  sqcRYGate(q, -1.5574482666797236, 5);
  sqcRZGate(q, 3.0804291921362887, 5);
  sqcRYGate(q, 0.7646614577980024, 6);
  sqcRZGate(q, -0.6803466700724944, 6);
  sqcRYGate(q, -2.1942208819378326, 7);
  sqcRZGate(q, -1.1963178456781183, 7);
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
  sqcRYGate(q, -0.4959572646486361, 0);
  sqcRZGate(q, 0.8358738499684514, 0);
  sqcRYGate(q, -2.2106226975579375, 1);
  sqcRZGate(q, -1.9679779978007277, 1);
  sqcRYGate(q, -1.7879251494539146, 2);
  sqcRZGate(q, 0.2711030820521581, 2);
  sqcRYGate(q, -1.2451665127262954, 3);
  sqcRZGate(q, -0.7048382265176627, 3);
  sqcRYGate(q, 2.8122576751458945, 4);
  sqcRZGate(q, 2.528674802467314, 4);
  sqcRYGate(q, 2.453952649579472, 5);
  sqcRZGate(q, -2.3161480828089935, 5);
  sqcRYGate(q, 3.045375153721733, 6);
  sqcRZGate(q, 2.5238861067797793, 6);
  sqcRYGate(q, 2.7914445615321113, 7);
  sqcRZGate(q, 1.830556810725236, 7);
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
  sqcRYGate(q, 1.8033901696385022, 0);
  sqcRZGate(q, -0.4678100443806788, 0);
  sqcRYGate(q, -1.866944499568911, 1);
  sqcRZGate(q, -1.686694803475258, 1);
  sqcRYGate(q, -1.3081615304485539, 2);
  sqcRZGate(q, 1.9838627541326634, 2);
  sqcRYGate(q, -0.5952835983532865, 3);
  sqcRZGate(q, -0.1900880368515168, 3);
  sqcRYGate(q, 1.9216774464935193, 4);
  sqcRZGate(q, -1.6859307549851228, 4);
  sqcRYGate(q, -0.28841296997602867, 5);
  sqcRZGate(q, 1.0757532845513909, 5);
  sqcRYGate(q, -0.9912510213168622, 6);
  sqcRZGate(q, 2.533167151915575, 6);
  sqcRYGate(q, -1.7289250058390107, 7);
  sqcRZGate(q, -1.70098843669283, 7);
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
  sqcRYGate(q, -0.3547679109515096, 0);
  sqcRZGate(q, 0.882672588931782, 0);
  sqcRYGate(q, -1.6723561852091215, 1);
  sqcRZGate(q, 3.0123347432204293, 1);
  sqcRYGate(q, -3.132343827228612, 2);
  sqcRZGate(q, -0.722729686318104, 2);
  sqcRYGate(q, 0.9847898228328456, 3);
  sqcRZGate(q, 2.6542974727381594, 3);
  sqcRYGate(q, 2.4331663810392965, 4);
  sqcRZGate(q, -0.5788946160391537, 4);
  sqcRYGate(q, 0.13525231653507674, 5);
  sqcRZGate(q, 0.8729971314346647, 5);
  sqcRYGate(q, 2.41362884063561, 6);
  sqcRZGate(q, -0.38053629788022825, 6);
  sqcRYGate(q, -2.692127425890632, 7);
  sqcRZGate(q, -1.9945747139368368, 7);
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
  sqcRYGate(q, 1.4884209347141049, 0);
  sqcRZGate(q, -2.340867568002233, 0);
  sqcRYGate(q, -3.038934734838041, 1);
  sqcRZGate(q, -0.5148511584297497, 1);
  sqcRYGate(q, 2.975167498473377, 2);
  sqcRZGate(q, 1.652024077188466, 2);
  sqcRYGate(q, -2.7944616749742224, 3);
  sqcRZGate(q, 0.15598789106055358, 3);
  sqcRYGate(q, -2.971136399699704, 4);
  sqcRZGate(q, -1.5021050361565407, 4);
  sqcRYGate(q, -2.690528352723755, 5);
  sqcRZGate(q, 3.0863389132410908, 5);
  sqcRYGate(q, 2.369096835673813, 6);
  sqcRZGate(q, 3.0636572399885678, 6);
  sqcRYGate(q, 2.5304181972018416, 7);
  sqcRZGate(q, 2.6811585055465224, 7);
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
  sqcRYGate(q, -2.2771677871538394, 0);
  sqcRZGate(q, -2.5982241216483337, 0);
  sqcRYGate(q, 0.6156703353103463, 1);
  sqcRZGate(q, 2.460970282233494, 1);
  sqcRYGate(q, 0.9738637972347997, 2);
  sqcRZGate(q, 0.0007207099516435018, 2);
  sqcRYGate(q, -2.654103480678161, 3);
  sqcRZGate(q, 1.5938815541164812, 3);
  sqcRYGate(q, 1.680165000840185, 4);
  sqcRZGate(q, 0.4610305788281617, 4);
  sqcRYGate(q, 0.27176605491455685, 5);
  sqcRZGate(q, -0.722709584579917, 5);
  sqcRYGate(q, 0.68382374339692, 6);
  sqcRZGate(q, 3.024401536639984, 6);
  sqcRYGate(q, 1.469518922628617, 7);
  sqcRZGate(q, 2.832634014215698, 7);
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
  sqcRYGate(q, 2.8839344943344, 0);
  sqcRZGate(q, -1.0940219367975308, 0);
  sqcRYGate(q, -1.2584934730551907, 1);
  sqcRZGate(q, -1.9336415161534282, 1);
  sqcRYGate(q, -1.1896576931920315, 2);
  sqcRZGate(q, 1.9946005313238588, 2);
  sqcRYGate(q, 1.6522266945093007, 3);
  sqcRZGate(q, 1.5097522454478556, 3);
  sqcRYGate(q, 1.7480228898720902, 4);
  sqcRZGate(q, -0.6830914229845114, 4);
  sqcRYGate(q, 2.4629192208946282, 5);
  sqcRZGate(q, -2.9594854139155236, 5);
  sqcRYGate(q, 2.7647891629357946, 6);
  sqcRZGate(q, -0.5200274954353219, 6);
  sqcRYGate(q, 1.2335527827842476, 7);
  sqcRZGate(q, -2.236615943500526, 7);
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
  sqcRYGate(q, 2.040360028431424, 0);
  sqcRZGate(q, 3.0866125579444934, 0);
  sqcRYGate(q, -0.8414276034212639, 1);
  sqcRZGate(q, -1.8087986557434774, 1);
  sqcRYGate(q, 2.745435966667933, 2);
  sqcRZGate(q, 1.636237275510911, 2);
  sqcRYGate(q, -1.0883410693686937, 3);
  sqcRZGate(q, -2.321141148953284, 3);
  sqcRYGate(q, -2.212963936808948, 4);
  sqcRZGate(q, 2.654200307419576, 4);
  sqcRYGate(q, 1.8829692014644297, 5);
  sqcRZGate(q, -2.4370644502700483, 5);
  sqcRYGate(q, 2.5788784855927225, 6);
  sqcRZGate(q, 1.8248553221431283, 6);
  sqcRYGate(q, 2.5120584585200496, 7);
  sqcRZGate(q, 2.2666209672090583, 7);
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
  sqcRYGate(q, 1.5155748698877969, 0);
  sqcRZGate(q, -0.8918823638553995, 0);
  sqcRYGate(q, -1.0767485072534733, 1);
  sqcRZGate(q, 1.6283688880029876, 1);
  sqcRYGate(q, 1.604427033264776, 2);
  sqcRZGate(q, -2.9235020211824154, 2);
  sqcRYGate(q, 2.1307777783224786, 3);
  sqcRZGate(q, 1.8552736524638227, 3);
  sqcRYGate(q, 1.812544905321122, 4);
  sqcRZGate(q, 1.51098885962893, 4);
  sqcRYGate(q, -0.13815330654704855, 5);
  sqcRZGate(q, -2.128321469594935, 5);
  sqcRYGate(q, -0.17044542994782347, 6);
  sqcRZGate(q, -3.014447332771745, 6);
  sqcRYGate(q, 0.14094884368659957, 7);
  sqcRZGate(q, -0.2741097134811934, 7);
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
  sqcRYGate(q, -1.7123359230313078, 0);
  sqcRZGate(q, 2.3286507609450484, 0);
  sqcRYGate(q, 1.114380717709949, 1);
  sqcRZGate(q, -1.776370100665635, 1);
  sqcRYGate(q, -0.3190935414124807, 2);
  sqcRZGate(q, 0.1802509677619864, 2);
  sqcRYGate(q, -2.1541108204522845, 3);
  sqcRZGate(q, -0.5748612961656269, 3);
  sqcRYGate(q, 2.4622766978611588, 4);
  sqcRZGate(q, 2.7533998477724624, 4);
  sqcRYGate(q, 2.5934630166439274, 5);
  sqcRZGate(q, 1.4681930396143488, 5);
  sqcRYGate(q, -2.5219411079827774, 6);
  sqcRZGate(q, 0.8494134554509163, 6);
  sqcRYGate(q, -1.4060225535939141, 7);
  sqcRZGate(q, -1.0237990908588408, 7);
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
  sqcRYGate(q, 1.2070243629268633, 0);
  sqcRZGate(q, 1.2967993059081584, 0);
  sqcRYGate(q, 2.2787893994644546, 1);
  sqcRZGate(q, -2.1956050978126065, 1);
  sqcRYGate(q, -0.24304152350833264, 2);
  sqcRZGate(q, 1.3130379433614927, 2);
  sqcRYGate(q, 2.978866847731029, 3);
  sqcRZGate(q, -1.5439199298481459, 3);
  sqcRYGate(q, -2.2451364711277315, 4);
  sqcRZGate(q, -2.0869138873197164, 4);
  sqcRYGate(q, -1.1796357398196946, 5);
  sqcRZGate(q, 1.4201104967510998, 5);
  sqcRYGate(q, 1.459275422296811, 6);
  sqcRZGate(q, -1.0675330773778398, 6);
  sqcRYGate(q, -0.06557335898243773, 7);
  sqcRZGate(q, -1.0618647482204955, 7);
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
  sqcRYGate(q, 0.5445866889789777, 0);
  sqcRZGate(q, 2.4660779056723925, 0);
  sqcRYGate(q, 1.4575035706105133, 1);
  sqcRZGate(q, -1.0334232500431553, 1);
  sqcRYGate(q, 1.6830848638669318, 2);
  sqcRZGate(q, -2.249819242310607, 2);
  sqcRYGate(q, -1.4799983986351464, 3);
  sqcRZGate(q, 0.015271818595133397, 3);
  sqcRYGate(q, 2.6366405285411005, 4);
  sqcRZGate(q, 0.5890674135791559, 4);
  sqcRYGate(q, 2.4868435275625886, 5);
  sqcRZGate(q, 2.631793350425679, 5);
  sqcRYGate(q, -0.20507047315264917, 6);
  sqcRZGate(q, 3.018883131420632, 6);
  sqcRYGate(q, -1.474779947555071, 7);
  sqcRZGate(q, -2.586901370898059, 7);
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
  sqcRYGate(q, 0.10843852668945664, 0);
  sqcRZGate(q, 0.8648965975507804, 0);
  sqcRYGate(q, -0.2532308073345854, 1);
  sqcRZGate(q, 3.1254488602267085, 1);
  sqcRYGate(q, -0.12938649978113048, 2);
  sqcRZGate(q, -2.590187399024405, 2);
  sqcRYGate(q, 1.266548449850872, 3);
  sqcRZGate(q, 2.6214764772386467, 3);
  sqcRYGate(q, 0.4349464017753508, 4);
  sqcRZGate(q, 0.6724029911798743, 4);
  sqcRYGate(q, -1.8173286528535704, 5);
  sqcRZGate(q, -1.7875228788487034, 5);
  sqcRYGate(q, 1.3595727187518447, 6);
  sqcRZGate(q, -1.4011840195992642, 6);
  sqcRYGate(q, -2.126357590989209, 7);
  sqcRZGate(q, 0.17286344116151175, 7);

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
