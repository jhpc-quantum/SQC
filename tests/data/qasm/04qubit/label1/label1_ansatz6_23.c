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

  sqcRYGate(q, -2.504536920139454, 0);
  sqcRYGate(q, -2.4963535223847524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5427646456724489, 0);
  sqcRYGate(q, -1.0190214395767985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5746616706249306, 1);
  sqcRYGate(q, 3.068473182582706, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2752735367294399, 1);
  sqcRYGate(q, -2.86305326485386, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6960990613328684, 2);
  sqcRYGate(q, -2.2246226738414743, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5045296645842896, 2);
  sqcRYGate(q, -1.7211794097826134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0723424205161993, 0);
  sqcRYGate(q, 2.650891105332132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4010774526999916, 0);
  sqcRYGate(q, -2.1486341345496727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6405202906542495, 1);
  sqcRYGate(q, -0.7244171535040174, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6428064190575884, 1);
  sqcRYGate(q, 1.1087229322534722, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.399864807268876, 2);
  sqcRYGate(q, 3.094365540361454, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1150471504283477, 2);
  sqcRYGate(q, -1.8946983684719605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.917206921576155, 0);
  sqcRYGate(q, 2.6787685797931737, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8451933451020146, 0);
  sqcRYGate(q, 0.1863107107871887, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6464225081553998, 1);
  sqcRYGate(q, 0.34939535719273795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.851448341907604, 1);
  sqcRYGate(q, 1.3170425131917387, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2639708847463562, 2);
  sqcRYGate(q, -1.0472859530959866, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.633875963874181, 2);
  sqcRYGate(q, 2.5886259474336093, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1082107893388815, 0);
  sqcRYGate(q, -2.1166065078718965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1965398607045867, 0);
  sqcRYGate(q, -0.47990295157114204, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3834256567185506, 1);
  sqcRYGate(q, -1.8354047029001181, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.604156761604135, 1);
  sqcRYGate(q, -0.5505988197773916, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0998032401037756, 2);
  sqcRYGate(q, -0.6684151779547207, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3144485278368938, 2);
  sqcRYGate(q, -2.2748855225470885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.24675743777769368, 0);
  sqcRYGate(q, 0.5827488081259533, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.476783774546545, 0);
  sqcRYGate(q, 2.6641221971547893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.241302842990885, 1);
  sqcRYGate(q, 2.0677645636701714, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6943262047358818, 1);
  sqcRYGate(q, -2.8493699886946384, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0571237812636873, 2);
  sqcRYGate(q, -0.9886336132034041, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.16901512640685823, 2);
  sqcRYGate(q, 2.87456846584251, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.05482533145457413, 0);
  sqcRYGate(q, -0.054989521059330984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9238420593387868, 0);
  sqcRYGate(q, -2.7771945491974375, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8465712186515084, 1);
  sqcRYGate(q, 0.22945638229271578, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.281838236343354, 1);
  sqcRYGate(q, -2.6077439093476538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.713306216685293, 2);
  sqcRYGate(q, -1.4401078671575003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.658658893152025, 2);
  sqcRYGate(q, 2.3629025602216593, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.156129446101623, 0);
  sqcRYGate(q, -2.179705836762237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.928736806530907, 0);
  sqcRYGate(q, -0.5695895832405304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5780160519363966, 1);
  sqcRYGate(q, -3.0421460504430855, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4123910318969182, 1);
  sqcRYGate(q, 1.5618047308625487, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8283670995780703, 2);
  sqcRYGate(q, -2.370220460046328, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.574223041958903, 2);
  sqcRYGate(q, -2.5039767188643056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0174530869198306, 0);
  sqcRYGate(q, 2.120188737903217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.819064316304269, 0);
  sqcRYGate(q, 2.7446700326998683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8847163825868722, 1);
  sqcRYGate(q, 1.8783763576347003, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.769125831896452, 1);
  sqcRYGate(q, 0.45459263432002234, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3439395378770618, 2);
  sqcRYGate(q, -0.161173452927208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0980607135921021, 2);
  sqcRYGate(q, -1.5390993283868575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8085274989010522, 0);
  sqcRYGate(q, -0.9736802806410276, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.754893829484536, 0);
  sqcRYGate(q, -3.0786908410248683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9004327655286739, 1);
  sqcRYGate(q, 0.5668562911623198, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3197202627768116, 1);
  sqcRYGate(q, -2.8006646999701115, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0671754927401338, 2);
  sqcRYGate(q, 0.8427755422830133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6053758570757701, 2);
  sqcRYGate(q, 0.9184489324661982, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5849285033630358, 0);
  sqcRYGate(q, -0.022700584473843047, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2332569323078715, 0);
  sqcRYGate(q, 2.7889584769288223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9952948739823506, 1);
  sqcRYGate(q, 0.45810953614181904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5133608496255322, 1);
  sqcRYGate(q, 1.3219564547598166, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7878196146266454, 2);
  sqcRYGate(q, 1.7383110853969663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7571486044221992, 2);
  sqcRYGate(q, 0.4760860780549985, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9911098187990252, 0);
  sqcRYGate(q, 2.025943826458475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9030621481099806, 0);
  sqcRYGate(q, 2.053906158860336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6391175351175185, 1);
  sqcRYGate(q, 1.8161063303435903, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1795445940418956, 1);
  sqcRYGate(q, -1.5313737979801294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.46839629364444046, 2);
  sqcRYGate(q, 2.7008725918897403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5985593348866924, 2);
  sqcRYGate(q, 2.9646009796385453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0148009603728183, 0);
  sqcRYGate(q, -2.717807199325616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.017814142089707677, 0);
  sqcRYGate(q, 0.6029708601991244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6454602662940765, 1);
  sqcRYGate(q, -2.0201458456283072, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3316369037021314, 1);
  sqcRYGate(q, -2.202884309370762, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3636042842797513, 2);
  sqcRYGate(q, 3.121262502048828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0061673874376977, 2);
  sqcRYGate(q, 2.411337804208745, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.098508089425374, 0);
  sqcRYGate(q, -0.7229648571066862, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0835466626456314, 0);
  sqcRYGate(q, 2.5559655863325372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8731910794191844, 1);
  sqcRYGate(q, -0.35070430818793685, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.698986140265017, 1);
  sqcRYGate(q, -2.3144906889328634, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.17456543694638674, 2);
  sqcRYGate(q, -0.5900300940324242, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6062343073169905, 2);
  sqcRYGate(q, -0.10364749171453091, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3653230421356297, 0);
  sqcRYGate(q, -3.022477995788219, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.14277042055105, 0);
  sqcRYGate(q, 2.8791826759986567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9447167971965125, 1);
  sqcRYGate(q, -2.396906724007747, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4158450535545937, 1);
  sqcRYGate(q, 1.8558541150718246, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9714116313011667, 2);
  sqcRYGate(q, 3.0273918541960203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9307851600267245, 2);
  sqcRYGate(q, -1.779577371488542, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8954593888876818, 0);
  sqcRYGate(q, 0.3277685742149856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3622901322605596, 0);
  sqcRYGate(q, -2.8966895318692063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7257449044397107, 1);
  sqcRYGate(q, -2.926558199096125, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4375876374323857, 1);
  sqcRYGate(q, 2.0745796466060815, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10017012055468033, 2);
  sqcRYGate(q, 1.0025702480920011, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.804996308303942, 2);
  sqcRYGate(q, -0.31552897664231455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.176667345774444, 0);
  sqcRYGate(q, 1.4339210122420747, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0498775602806631, 0);
  sqcRYGate(q, -1.6880318388328799, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5762758831459533, 1);
  sqcRYGate(q, 1.8454216310734308, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0750906448244666, 1);
  sqcRYGate(q, 0.4687502810676154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.506867135642141, 2);
  sqcRYGate(q, 1.882311773833501, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.933031831894172, 2);
  sqcRYGate(q, 2.181009042015054, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8023994426062426, 0);
  sqcRYGate(q, -2.452303010920134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8556995513839624, 0);
  sqcRYGate(q, 2.0522947935643714, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.089071599532998, 1);
  sqcRYGate(q, 2.4089676457340485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4224937974562609, 1);
  sqcRYGate(q, 0.25636398008596545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1396493367175835, 2);
  sqcRYGate(q, 1.5485595998526416, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.32239272867613383, 2);
  sqcRYGate(q, 0.33068215715907545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6764359507900473, 0);
  sqcRYGate(q, -2.978407781441139, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6084583229032277, 0);
  sqcRYGate(q, 2.28607880549745, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.47698448130200877, 1);
  sqcRYGate(q, -2.2903929784200314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8119666224809408, 1);
  sqcRYGate(q, 2.952182158088898, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6148969265567734, 2);
  sqcRYGate(q, -1.8883578848823908, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0612564859414177, 2);
  sqcRYGate(q, 1.8802521002826034, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.684324046712847, 0);
  sqcRYGate(q, -0.44390619681814036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0184400787626124, 0);
  sqcRYGate(q, 0.9644765987474182, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9916096279048235, 1);
  sqcRYGate(q, 0.1490120212810172, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9330174704024232, 1);
  sqcRYGate(q, -0.17089459348603686, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2212150121348033, 2);
  sqcRYGate(q, 0.09384462949244465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7261600114465177, 2);
  sqcRYGate(q, -2.6120992821042543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0158802208697053, 0);
  sqcRYGate(q, 0.8310354861753813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4211923952721428, 0);
  sqcRYGate(q, -1.697691269764828, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.43595028824072507, 1);
  sqcRYGate(q, -0.31000827687378274, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4909361519674318, 1);
  sqcRYGate(q, -1.212877598927141, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0630099184440875, 2);
  sqcRYGate(q, 0.042475670623351114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4517706208575658, 2);
  sqcRYGate(q, -0.7830405862817242, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6086302261067952, 0);
  sqcRYGate(q, 2.052055269393801, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.786854191711742, 0);
  sqcRYGate(q, -2.37411895834485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7275780749645362, 1);
  sqcRYGate(q, 1.1814395937592765, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6313182510938207, 1);
  sqcRYGate(q, 0.6125161359681428, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3677943431890034, 2);
  sqcRYGate(q, -1.9740393864595536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.382483894585332, 2);
  sqcRYGate(q, -0.3197268189351883, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6180932305272173, 0);
  sqcRYGate(q, -2.6328307801084834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3183702248652065, 0);
  sqcRYGate(q, 2.2329400915091755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.118554380537062, 1);
  sqcRYGate(q, -3.1197561519228176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5027161017778212, 1);
  sqcRYGate(q, 2.4014260782627876, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7089578541983994, 2);
  sqcRYGate(q, 1.0032891096716776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7103799772885884, 2);
  sqcRYGate(q, 0.40064028983980826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5471211309270441, 0);
  sqcRYGate(q, -2.6393230779054977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.46567068474504, 0);
  sqcRYGate(q, 2.4341969446216574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2144377750826496, 1);
  sqcRYGate(q, -2.2823255267545317, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7316664953723535, 1);
  sqcRYGate(q, 2.8670015392455133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.541310553705868, 2);
  sqcRYGate(q, -0.6710363606358047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3207650903052546, 2);
  sqcRYGate(q, -2.4058419057190785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0898965639944764, 0);
  sqcRYGate(q, 2.364165729317669, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5101197340870067, 0);
  sqcRYGate(q, 1.2208472913594157, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.02654337073027616, 1);
  sqcRYGate(q, 2.0286728357230617, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.059830202924017, 1);
  sqcRYGate(q, -2.588956049777978, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7916516492395722, 2);
  sqcRYGate(q, 1.8277348892033483, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.847636264784754, 2);
  sqcRYGate(q, -3.1087828737034653, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6701366585941777, 0);
  sqcRYGate(q, -0.3528101469270198, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1340837795694854, 0);
  sqcRYGate(q, 0.865498375270346, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11564504914247209, 1);
  sqcRYGate(q, -0.15435287946307874, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8755086103525422, 1);
  sqcRYGate(q, -1.5808328515077656, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3032566567509458, 2);
  sqcRYGate(q, 0.6835981171635527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.33484003928871253, 2);
  sqcRYGate(q, 0.35225083920456574, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9015014822209197, 0);
  sqcRYGate(q, 1.1679094013285751, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.110246530864357, 0);
  sqcRYGate(q, -1.9409479208230644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4870005058037696, 1);
  sqcRYGate(q, -2.322819026509458, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3948113759012686, 1);
  sqcRYGate(q, 2.186279170900547, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.264544999125978, 2);
  sqcRYGate(q, 1.5048118851380263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0632460354927877, 2);
  sqcRYGate(q, -1.248629415822121, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.567020828865008, 0);
  sqcRYGate(q, -1.017884168473831, 1);
  sqcRYGate(q, 3.0552004022491395, 2);
  sqcRYGate(q, 2.712693885174844, 3);

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
