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

  sqcRYGate(q, -0.14048947633932563, 0);
  sqcRYGate(q, -2.8384897194504974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6024974640228402, 0);
  sqcRYGate(q, -2.775740871673536, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3239417482734472, 1);
  sqcRYGate(q, -0.6127514172687314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9860182897944743, 1);
  sqcRYGate(q, 2.564449552024819, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8335780690677335, 2);
  sqcRYGate(q, -1.4559118710141643, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7030623338514974, 2);
  sqcRYGate(q, -2.7289544395321412, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4661380587772044, 3);
  sqcRYGate(q, -2.4781046501184343, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8290203978915343, 3);
  sqcRYGate(q, -2.5225391840342852, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1223152053921854, 4);
  sqcRYGate(q, -2.2435337420986534, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3210801210409135, 4);
  sqcRYGate(q, -0.8882185041282975, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6364900613140403, 5);
  sqcRYGate(q, 2.8586278106269543, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8963283493262209, 5);
  sqcRYGate(q, -2.0915024107170783, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8702478133458786, 6);
  sqcRYGate(q, -0.3674679493769888, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5639122391946292, 6);
  sqcRYGate(q, -0.5289396298732271, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.661346583392846, 0);
  sqcRYGate(q, 0.1775168160770679, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.094716948161011, 0);
  sqcRYGate(q, 1.2452222352220004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.452161630188752, 1);
  sqcRYGate(q, -0.6772342027428927, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.215741312438623, 1);
  sqcRYGate(q, 3.0312959046875183, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.050772167100225, 2);
  sqcRYGate(q, -0.24274664420747885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.449344605300138, 2);
  sqcRYGate(q, -0.24294601822245726, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.02193423607349, 3);
  sqcRYGate(q, -0.9528691075573131, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.27694877917105565, 3);
  sqcRYGate(q, 0.7566834071988134, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6815446146861458, 4);
  sqcRYGate(q, 1.9142903387557473, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.19308469013730267, 4);
  sqcRYGate(q, 1.5886981663431552, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.994370548612017, 5);
  sqcRYGate(q, -1.197979303535513, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6599241964691351, 5);
  sqcRYGate(q, 0.3481908620323697, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6707058475462162, 6);
  sqcRYGate(q, -0.5113685527956212, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6894342170536605, 6);
  sqcRYGate(q, -1.281280663433333, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0243798816557728, 0);
  sqcRYGate(q, 0.06395381053445559, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7805365607134833, 0);
  sqcRYGate(q, 1.1862961725853636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5787864400491305, 1);
  sqcRYGate(q, -1.846224976346459, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0481002380802376, 1);
  sqcRYGate(q, 2.185830855299839, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8940714010071833, 2);
  sqcRYGate(q, 2.7596272861604567, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.327019200646032, 2);
  sqcRYGate(q, -2.6625268408125944, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8078777533727632, 3);
  sqcRYGate(q, -0.8530743188292869, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.847517761095732, 3);
  sqcRYGate(q, 3.131308611419254, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8816540564133977, 4);
  sqcRYGate(q, -0.258945613987824, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6076558112514214, 4);
  sqcRYGate(q, -3.0140237158265357, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.43096799925610085, 5);
  sqcRYGate(q, -0.6815954862107203, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5607409927994325, 5);
  sqcRYGate(q, -1.4700650948259568, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9397353233617807, 6);
  sqcRYGate(q, 1.9353565393778975, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.661774090179664, 6);
  sqcRYGate(q, -1.4896411491426385, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5617221451109227, 0);
  sqcRYGate(q, 2.6079819477171786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8430988648781275, 0);
  sqcRYGate(q, 2.6373156909980815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8111871654351863, 1);
  sqcRYGate(q, -0.18867173753791455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8828182829282767, 1);
  sqcRYGate(q, -0.8758164166471594, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9143632280709934, 2);
  sqcRYGate(q, 2.222014587111585, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1488278444147992, 2);
  sqcRYGate(q, -2.8688864539687886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.008967805441986408, 3);
  sqcRYGate(q, -1.5706016769160727, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.777431475349438, 3);
  sqcRYGate(q, -1.4955024497480665, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.17232968628176693, 4);
  sqcRYGate(q, 1.7072843034405425, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8938616504462982, 4);
  sqcRYGate(q, -2.2812457752579465, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2735768146558746, 5);
  sqcRYGate(q, 0.0757798780238641, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.09280925180089959, 5);
  sqcRYGate(q, -0.7442766432194485, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9840017783842736, 6);
  sqcRYGate(q, 0.5503846062102459, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5419684527727249, 6);
  sqcRYGate(q, 0.6935335790078988, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.832736254219459, 0);
  sqcRYGate(q, 2.639234590004844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.219638039598136, 0);
  sqcRYGate(q, -3.0515077032732596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5172933335743597, 1);
  sqcRYGate(q, 0.6935227120844629, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3631168634622055, 1);
  sqcRYGate(q, 1.4741233274213377, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1141432469024197, 2);
  sqcRYGate(q, 2.287848000679781, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5551592409119515, 2);
  sqcRYGate(q, -0.21844981806003932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.799122737067402, 3);
  sqcRYGate(q, 1.7990875851773496, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6178236263599395, 3);
  sqcRYGate(q, -1.7973734023932413, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.487021906938513, 4);
  sqcRYGate(q, 1.6793972783742381, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8494647508389832, 4);
  sqcRYGate(q, -0.22373130472236996, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4691753637002282, 5);
  sqcRYGate(q, 0.6001893311626842, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9089022492684864, 5);
  sqcRYGate(q, 1.1068683194097337, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.900464024385286, 6);
  sqcRYGate(q, -0.2788662293097701, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2740197850609818, 6);
  sqcRYGate(q, -0.09289905574974977, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9920615887591406, 0);
  sqcRYGate(q, 2.9337559515661153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6684604202935901, 0);
  sqcRYGate(q, 0.06012859310077001, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.05765319337039, 1);
  sqcRYGate(q, 2.3589083494569905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.49905700572484024, 1);
  sqcRYGate(q, 1.5261687898316083, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1603179189202821, 2);
  sqcRYGate(q, -1.5750816967402128, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5376570422613676, 2);
  sqcRYGate(q, -1.2567699717683247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4734679346190529, 3);
  sqcRYGate(q, 2.6379114215222565, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.720734318680428, 3);
  sqcRYGate(q, -1.450609966656397, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3829048161461769, 4);
  sqcRYGate(q, -1.4471484653588647, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6961655376359737, 4);
  sqcRYGate(q, 1.5746910355581238, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.805439875541273, 5);
  sqcRYGate(q, 1.454186395787137, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.1495036410160261, 5);
  sqcRYGate(q, 1.5912334158444414, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9202423363181857, 6);
  sqcRYGate(q, -2.8732640919364187, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1619054768523174, 6);
  sqcRYGate(q, -0.8907829701656393, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7261704077335727, 0);
  sqcRYGate(q, 1.042387127224221, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1993114515068202, 0);
  sqcRYGate(q, 0.4674904763934463, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8483912718094049, 1);
  sqcRYGate(q, 2.6034269278838984, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.856687191433169, 1);
  sqcRYGate(q, -2.5643755909219563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8104799709335078, 2);
  sqcRYGate(q, 2.0692921752994353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.07734148609094, 2);
  sqcRYGate(q, 0.09233956438168883, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.241435721437818, 3);
  sqcRYGate(q, -2.635243664571969, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0743911088153935, 3);
  sqcRYGate(q, -0.41719587659203494, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7631093404850742, 4);
  sqcRYGate(q, 0.2947006212002724, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4505591286456885, 4);
  sqcRYGate(q, 2.3081863994287817, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0104758346388856, 5);
  sqcRYGate(q, -0.1490878561890232, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7634973181650191, 5);
  sqcRYGate(q, 2.3631823901051496, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.44935738134582365, 6);
  sqcRYGate(q, -0.5397749145133529, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9291936595786372, 6);
  sqcRYGate(q, 0.5742593186910163, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.03365287204094791, 0);
  sqcRYGate(q, 2.870531109850448, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7867356140701949, 0);
  sqcRYGate(q, 2.6245377007264032, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8694127009886543, 1);
  sqcRYGate(q, -0.11490363991854391, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1862065306312024, 1);
  sqcRYGate(q, 0.12142632450127866, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4260136853367205, 2);
  sqcRYGate(q, -0.5585872627169577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6102899964284703, 2);
  sqcRYGate(q, -2.08385142813317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8177380238009325, 3);
  sqcRYGate(q, -1.8107000905863158, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2489745037654152, 3);
  sqcRYGate(q, -0.010913368462856501, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2276843675158489, 4);
  sqcRYGate(q, 2.3230507013166255, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.762190799940354, 4);
  sqcRYGate(q, -1.5042316124853883, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.643193536643306, 5);
  sqcRYGate(q, -1.152782204170142, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.264810719815487, 5);
  sqcRYGate(q, -0.5218757208698639, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8574569540481198, 6);
  sqcRYGate(q, -3.1037627772103766, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.30098560119491496, 6);
  sqcRYGate(q, -1.6557358198854715, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.17985719825817892, 0);
  sqcRYGate(q, 3.0438762818622704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1580066317249065, 0);
  sqcRYGate(q, -1.7264084296879225, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.542345341350859, 1);
  sqcRYGate(q, 1.8779794957376499, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8390757418867287, 1);
  sqcRYGate(q, -1.859257934976065, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.32097962165012894, 2);
  sqcRYGate(q, 2.7074753618581378, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1708504102134287, 2);
  sqcRYGate(q, 1.9852541710624187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.32798188004851936, 3);
  sqcRYGate(q, 0.0763375430315687, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0875822393421526, 3);
  sqcRYGate(q, 2.5634149630560135, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4264131963136508, 4);
  sqcRYGate(q, 0.0187101351009078, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.440697642962522, 4);
  sqcRYGate(q, -3.1148410525758705, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3346818137963492, 5);
  sqcRYGate(q, -0.035204988940459536, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6720421797653113, 5);
  sqcRYGate(q, -2.1599892009614274, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0035199610923690727, 6);
  sqcRYGate(q, -0.7601270864903045, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4275404667461076, 6);
  sqcRYGate(q, 1.644338271687622, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.422393181193542, 0);
  sqcRYGate(q, 0.03421327351188275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0839892271553517, 0);
  sqcRYGate(q, 2.79880148751751, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5775503173421295, 1);
  sqcRYGate(q, -0.4283243803585323, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.24448935625881063, 1);
  sqcRYGate(q, -1.7017008665804916, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0296564694308294, 2);
  sqcRYGate(q, -1.2778998469388938, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0285906391800683, 2);
  sqcRYGate(q, -1.843183317173817, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5323207622598276, 3);
  sqcRYGate(q, -0.9064654075732029, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6219199217105484, 3);
  sqcRYGate(q, -1.6534614034805242, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5584854740037972, 4);
  sqcRYGate(q, 1.2583125574488676, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3883944699742363, 4);
  sqcRYGate(q, 3.000850377469753, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7310390980746728, 5);
  sqcRYGate(q, 1.2983758363237268, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0600615593546048, 5);
  sqcRYGate(q, 1.219657243849194, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8573082172507016, 6);
  sqcRYGate(q, 1.0202598463570842, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3620817170721073, 6);
  sqcRYGate(q, 2.830580022129867, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7804709754278818, 0);
  sqcRYGate(q, 1.7743323680225864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6203954991534912, 0);
  sqcRYGate(q, -1.9349221122926945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0619535764860517, 1);
  sqcRYGate(q, -0.11362093568099495, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.03351440703003483, 1);
  sqcRYGate(q, 1.1810430592099133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5302115405787746, 2);
  sqcRYGate(q, 2.792098449963324, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6765361546951136, 2);
  sqcRYGate(q, 1.1866860579095484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.867103041658804, 3);
  sqcRYGate(q, 1.4714656659624614, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.334113403789819, 3);
  sqcRYGate(q, 0.01902537131415905, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.272744175436074, 4);
  sqcRYGate(q, 0.2296263082855603, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3444042208532765, 4);
  sqcRYGate(q, 0.06199558365472502, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.561294581177906, 5);
  sqcRYGate(q, -0.41743923612797573, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5712338564602557, 5);
  sqcRYGate(q, -2.1291175805808717, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4332785304388143, 6);
  sqcRYGate(q, 0.7087100361120459, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.132405368047635, 6);
  sqcRYGate(q, 1.1209745359236498, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7863088340139477, 0);
  sqcRYGate(q, 3.0752425770507026, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.091831930266529, 0);
  sqcRYGate(q, 2.986816641372547, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.910995553361855, 1);
  sqcRYGate(q, 2.6815787758419005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.159243497747249, 1);
  sqcRYGate(q, -0.038780586663218486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7430838363062027, 2);
  sqcRYGate(q, 2.5811352761749884, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2728712532466733, 2);
  sqcRYGate(q, 0.18534085432979375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.50002503174434, 3);
  sqcRYGate(q, -1.4242452516343622, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.14907283953302342, 3);
  sqcRYGate(q, 0.21767712282153884, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7078294692412075, 4);
  sqcRYGate(q, 2.813432750561835, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5284087297747293, 4);
  sqcRYGate(q, 0.10273812789075591, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1771353734427583, 5);
  sqcRYGate(q, -2.8568204914304705, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0517295035162366, 5);
  sqcRYGate(q, -2.2572691652992014, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0550210910637832, 6);
  sqcRYGate(q, 1.42865956590202, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.325107637027104, 6);
  sqcRYGate(q, 1.6596407800173427, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5307281999851363, 0);
  sqcRYGate(q, 1.929109620435893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.554443804712774, 0);
  sqcRYGate(q, 1.8403275000907406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3777150310083295, 1);
  sqcRYGate(q, 2.3334214031851865, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3863641356823351, 1);
  sqcRYGate(q, -2.939053870443085, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.063315085396538, 2);
  sqcRYGate(q, -2.4533169554821255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7834972855673579, 2);
  sqcRYGate(q, 1.7461939651163272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0798241956989996, 3);
  sqcRYGate(q, -1.2574562324940641, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.20746724168579428, 3);
  sqcRYGate(q, -1.733323351927658, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2969153887786113, 4);
  sqcRYGate(q, 0.44857562205589135, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7711181171785253, 4);
  sqcRYGate(q, 0.1950563020192817, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.016280456144452473, 5);
  sqcRYGate(q, 0.07976603707169135, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.30142681201676574, 5);
  sqcRYGate(q, -0.7537401134204851, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4527824045246573, 6);
  sqcRYGate(q, -2.1010389257295197, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6767522822546204, 6);
  sqcRYGate(q, 2.7249170451792626, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2644193802269013, 0);
  sqcRYGate(q, -1.9349528808107153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07215323037111077, 0);
  sqcRYGate(q, 1.6928715315832994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.589123853032598, 1);
  sqcRYGate(q, -2.4326272873740282, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5579036445372398, 1);
  sqcRYGate(q, -1.8179983007299152, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.63588639900301, 2);
  sqcRYGate(q, -1.1787954402789707, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8572434144342721, 2);
  sqcRYGate(q, -2.139234907236161, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0135925627970428, 3);
  sqcRYGate(q, 2.7676879142450366, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2324469369327353, 3);
  sqcRYGate(q, -2.837847887545553, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.802581341034893, 4);
  sqcRYGate(q, 3.0265511941467267, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2037097618903356, 4);
  sqcRYGate(q, -2.919584861194805, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.06304093147002021, 5);
  sqcRYGate(q, 0.012266008906405723, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0758140030119927, 5);
  sqcRYGate(q, 0.9647811636790022, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1475802413909415, 6);
  sqcRYGate(q, -2.785991561489817, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6005843688108512, 6);
  sqcRYGate(q, 1.3019301662484797, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0850108860969019, 0);
  sqcRYGate(q, -1.62556311606936, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.227625968708682, 0);
  sqcRYGate(q, -1.9514523610827637, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1533952818976667, 1);
  sqcRYGate(q, 0.9067394346164273, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5722008674769468, 1);
  sqcRYGate(q, -1.4701861603528181, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5463343001959005, 2);
  sqcRYGate(q, 0.5404264562237557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7380679517645174, 2);
  sqcRYGate(q, -1.5867430161148746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0415809341624547, 3);
  sqcRYGate(q, 2.643858200906305, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.18950268847487184, 3);
  sqcRYGate(q, 0.5358789864562274, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.358940138596103, 4);
  sqcRYGate(q, 1.177688785396592, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.932237851260595, 4);
  sqcRYGate(q, -0.7620924772859885, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.43548265897036936, 5);
  sqcRYGate(q, 1.8788309077838734, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9349745344380674, 5);
  sqcRYGate(q, -2.7893062542832943, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1016532489024495, 6);
  sqcRYGate(q, -2.36349777012982, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0501483758134205, 6);
  sqcRYGate(q, 3.076379541437083, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9691972718930626, 0);
  sqcRYGate(q, -0.8853287856657417, 1);
  sqcRYGate(q, 1.5970826816534067, 2);
  sqcRYGate(q, -0.34707373858971, 3);
  sqcRYGate(q, 1.5951278751210225, 4);
  sqcRYGate(q, 3.1221996453371927, 5);
  sqcRYGate(q, -2.1925122200929215, 6);
  sqcRYGate(q, 0.6306776196760202, 7);

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
