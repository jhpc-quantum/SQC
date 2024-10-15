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

  sqcRYGate(q, 0.5342219224357334, 0);
  sqcRYGate(q, 1.6819998416380166, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9799389268806813, 0);
  sqcRYGate(q, -1.1994456628927086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0535835542961824, 0);
  sqcRYGate(q, 0.4322747455336353, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6600512712967591, 0);
  sqcRYGate(q, 0.9081614570390087, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5992015593350923, 0);
  sqcRYGate(q, -3.066249140190079, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9748683218619867, 0);
  sqcRYGate(q, -1.6622339414430816, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.111652247942077, 1);
  sqcRYGate(q, -1.4513561003068192, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7344303624672204, 1);
  sqcRYGate(q, -1.357265980626134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4476578159912579, 1);
  sqcRYGate(q, 1.2535287652690732, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7063284127438165, 1);
  sqcRYGate(q, -2.670120450493596, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9708915388920225, 2);
  sqcRYGate(q, 2.466288611807558, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1778196556360109, 2);
  sqcRYGate(q, 0.39837950765007235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6085065857787725, 0);
  sqcRYGate(q, 1.1678486763917706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3832604898640826, 0);
  sqcRYGate(q, -1.3220377655443931, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.16189274040587154, 0);
  sqcRYGate(q, 1.1819322471460536, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.119202849261204, 0);
  sqcRYGate(q, 0.279302112662012, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6127964244391029, 0);
  sqcRYGate(q, -2.480639961031788, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.477138157303607, 0);
  sqcRYGate(q, 0.37479143150291355, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2567197396318104, 1);
  sqcRYGate(q, -0.533326533858768, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0759673032188846, 1);
  sqcRYGate(q, 0.03830357462676011, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8069400830356507, 1);
  sqcRYGate(q, -0.9787123432846787, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.150435586168252, 1);
  sqcRYGate(q, 1.3840298849119526, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1653119507855836, 2);
  sqcRYGate(q, -0.6800783186225791, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4085996766751039, 2);
  sqcRYGate(q, 0.2402168078431215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.332988552279195, 0);
  sqcRYGate(q, -0.01590354269382786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6400026418587557, 0);
  sqcRYGate(q, 1.309333139478058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.304863661074437, 0);
  sqcRYGate(q, 0.3654815918721823, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6374530664091624, 0);
  sqcRYGate(q, 1.7095818259766373, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1762796549198176, 0);
  sqcRYGate(q, 1.9229614569133675, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4688970316632065, 0);
  sqcRYGate(q, 0.6350469139830782, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8071818556342367, 1);
  sqcRYGate(q, 0.48435486474047185, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7885619782784639, 1);
  sqcRYGate(q, 1.7584733340382392, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5004418744036916, 1);
  sqcRYGate(q, -3.1225280558740343, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1861410468092872, 1);
  sqcRYGate(q, -0.15725500702594974, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9430461237209127, 2);
  sqcRYGate(q, -1.110340787732617, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0378184411862916, 2);
  sqcRYGate(q, -2.9659172889550103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7383614734582904, 0);
  sqcRYGate(q, -0.9017268209568057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0499652867428975, 0);
  sqcRYGate(q, -3.0737283581990504, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.043788381631266, 0);
  sqcRYGate(q, -2.419263802930388, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2296850703048268, 0);
  sqcRYGate(q, -1.3160540754400687, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6687914042466412, 0);
  sqcRYGate(q, -0.848011025890167, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4671347435885096, 0);
  sqcRYGate(q, 1.4308899757313502, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.547145084585619, 1);
  sqcRYGate(q, 2.2917434420960014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.27485536851436, 1);
  sqcRYGate(q, 2.7588904368550913, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.305120771529571, 1);
  sqcRYGate(q, -1.9476490495579135, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -7.317818893781691e-05, 1);
  sqcRYGate(q, 2.0577118404483445, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3401205616601644, 2);
  sqcRYGate(q, 0.17986736711976103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.606698508707704, 2);
  sqcRYGate(q, 0.47105381232634436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1607613143063418, 0);
  sqcRYGate(q, -1.0717771805361826, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.14845423273491054, 0);
  sqcRYGate(q, 1.8714703204023784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8491037536860386, 0);
  sqcRYGate(q, 0.3635388420789057, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5796094726709065, 0);
  sqcRYGate(q, 0.3203438172506339, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.0687666916581424, 0);
  sqcRYGate(q, 1.6680050688750745, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.1025404344642933, 0);
  sqcRYGate(q, 2.7359291737953257, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.402625319571806, 1);
  sqcRYGate(q, 1.9937818136101715, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5526400212171105, 1);
  sqcRYGate(q, 1.1233472330433911, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.622170851226395, 1);
  sqcRYGate(q, -1.5791953443080475, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0995478812108193, 1);
  sqcRYGate(q, -2.7885912394346524, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8503640582795189, 2);
  sqcRYGate(q, -1.088964825904831, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5539564954688214, 2);
  sqcRYGate(q, -1.3692973671332953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5413279916354505, 0);
  sqcRYGate(q, -2.9274511194816193, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3235916744135388, 0);
  sqcRYGate(q, 0.056315473369026314, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8760938058234956, 0);
  sqcRYGate(q, 1.2548134224252914, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.06967487817790996, 0);
  sqcRYGate(q, 0.33080211053430825, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5195056364934247, 0);
  sqcRYGate(q, 0.11041233455848064, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0237632533882737, 0);
  sqcRYGate(q, 2.5268180298627776, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.851310266385528, 1);
  sqcRYGate(q, 2.0454897334370603, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1161118440511089, 1);
  sqcRYGate(q, 1.9737671648737205, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8247010343161165, 1);
  sqcRYGate(q, -0.5415158757873577, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5887442037028716, 1);
  sqcRYGate(q, 0.07070830153970005, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.317313736352971, 2);
  sqcRYGate(q, 1.587869134285731, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.21762739718654167, 2);
  sqcRYGate(q, 2.107392137239027, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.097052926893979, 0);
  sqcRYGate(q, 1.1326809144626129, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3961527890983616, 0);
  sqcRYGate(q, 0.7901685908525286, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3530230940188988, 0);
  sqcRYGate(q, -0.28643686453735295, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8907208709654368, 0);
  sqcRYGate(q, -2.012068040667578, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1634037768994652, 0);
  sqcRYGate(q, -0.21184790369731843, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1888545872986522, 0);
  sqcRYGate(q, -0.30301804163995616, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9390350028601386, 1);
  sqcRYGate(q, -2.0392371524582877, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1324785084721435, 1);
  sqcRYGate(q, -0.32173848343611855, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3322369771788156, 1);
  sqcRYGate(q, 2.2568993796782673, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4753414374130136, 1);
  sqcRYGate(q, -1.340329590507113, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4103783520154884, 2);
  sqcRYGate(q, 2.2245946014173565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.447760508035136, 2);
  sqcRYGate(q, 1.4803155700722432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.484522565325216, 0);
  sqcRYGate(q, -1.3242279874885219, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6954837989004088, 0);
  sqcRYGate(q, -2.248956333233644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7212622908710818, 0);
  sqcRYGate(q, -1.2420267027946816, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3157118333705937, 0);
  sqcRYGate(q, -1.04145009777901, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2886028360217552, 0);
  sqcRYGate(q, -3.1056477232945605, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3508336574358384, 0);
  sqcRYGate(q, 0.5767424045848379, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9525439056127087, 1);
  sqcRYGate(q, -1.2390529243525168, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1396212177519418, 1);
  sqcRYGate(q, 0.8765593009366262, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5620183716621991, 1);
  sqcRYGate(q, -1.255026413018423, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9280917221826545, 1);
  sqcRYGate(q, 2.1480639602339076, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2878800585563019, 2);
  sqcRYGate(q, -1.7507625889378937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0543753340647593, 2);
  sqcRYGate(q, 1.651546846001632, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0744287633627096, 0);
  sqcRYGate(q, -1.3211126179377903, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3076388674136021, 0);
  sqcRYGate(q, -0.7544160229227547, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5810334348885345, 0);
  sqcRYGate(q, -1.2119370715492153, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.755371367616855, 0);
  sqcRYGate(q, 1.3988737625109757, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7220713731388271, 0);
  sqcRYGate(q, 2.0786118665586732, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0844190303770722, 0);
  sqcRYGate(q, -2.573535135647522, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3996569997692694, 1);
  sqcRYGate(q, 2.6647992258352295, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1635486244861317, 1);
  sqcRYGate(q, -0.947087221199108, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.766333026351984, 1);
  sqcRYGate(q, 2.7203295893845434, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5515970513539008, 1);
  sqcRYGate(q, -0.6447810128723953, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9150851525324106, 2);
  sqcRYGate(q, 1.590465859835125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.028943532610538125, 2);
  sqcRYGate(q, -0.7563296351591422, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0666357172071894, 0);
  sqcRYGate(q, -2.4272376069486192, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2710990674245286, 0);
  sqcRYGate(q, 1.9596047074480307, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5360436088645208, 0);
  sqcRYGate(q, 3.0552145550444845, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5619664023665472, 0);
  sqcRYGate(q, -2.3202604117144463, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4586061832567783, 0);
  sqcRYGate(q, -1.2021952691302547, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.947275979733269, 0);
  sqcRYGate(q, -0.2522430445489121, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4985231787314461, 1);
  sqcRYGate(q, -1.6932083579562507, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9032399593164104, 1);
  sqcRYGate(q, 1.2008553031883151, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3555151843589295, 1);
  sqcRYGate(q, -2.5878287571335976, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.557691449578353, 1);
  sqcRYGate(q, 1.415261474653312, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.402635212086952, 2);
  sqcRYGate(q, -0.5182191271890435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2512765950765248, 2);
  sqcRYGate(q, -0.6258581177837126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8183228306548487, 0);
  sqcRYGate(q, -0.6448364098243413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7112728860581963, 0);
  sqcRYGate(q, 1.1768470594725908, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0903297012408006, 0);
  sqcRYGate(q, 1.8111545186018054, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.820545656287777, 0);
  sqcRYGate(q, 0.5281614210475176, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6365525591755423, 0);
  sqcRYGate(q, 0.40776772062364053, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9839482104731863, 0);
  sqcRYGate(q, 1.6698045152193606, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.138712442834448, 1);
  sqcRYGate(q, -1.1331970003444845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6326354902320936, 1);
  sqcRYGate(q, 2.3673737816561315, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.177423308326476, 1);
  sqcRYGate(q, 0.9947659436059668, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.673015473015031, 1);
  sqcRYGate(q, 2.1255465255125685, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8468765266020213, 2);
  sqcRYGate(q, 0.7549672053813669, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8317249597267237, 2);
  sqcRYGate(q, -1.38680847854559, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.28336011825657254, 0);
  sqcRYGate(q, 1.1982366660592048, 1);
  sqcRYGate(q, -0.604869762924838, 2);
  sqcRYGate(q, 1.5759353309199804, 3);

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
