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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 2.8368212964369515, 0);
  sqcRYGate(q, -1.4761715273234186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.150380338934057, 0);
  sqcRYGate(q, 0.16083318124720414, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1397836243899855, 2);
  sqcRYGate(q, 0.6942512647449899, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.14123821001042, 2);
  sqcRYGate(q, 1.7723940462717351, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0768171636489665, 4);
  sqcRYGate(q, 0.011914429378719225, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3648975369587104, 4);
  sqcRYGate(q, 2.1434001918059495, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9483323000178827, 6);
  sqcRYGate(q, -0.8685789887633937, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.09476121182011193, 6);
  sqcRYGate(q, -0.4696672331778312, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4122274417440615, 8);
  sqcRYGate(q, 1.0328005179510666, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.5061923670047577, 8);
  sqcRYGate(q, -2.3999736554231865, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.7103275081734024, 10);
  sqcRYGate(q, 1.5738777774947612, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.453683771568113, 10);
  sqcRYGate(q, -1.2950465155680249, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7393911178149928, 1);
  sqcRYGate(q, 2.822693179125782, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2669360221739847, 1);
  sqcRYGate(q, -1.84624071018299, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1589628852203313, 3);
  sqcRYGate(q, -1.361497182205273, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.133191012844086, 3);
  sqcRYGate(q, 1.0277336575030684, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2556502768978275, 5);
  sqcRYGate(q, 1.5725377238766578, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3589042730600794, 5);
  sqcRYGate(q, 0.028383361638153914, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.138838106370588, 7);
  sqcRYGate(q, -1.501216381064369, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.41515032482135517, 7);
  sqcRYGate(q, 0.806189976459028, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0021684775108555, 9);
  sqcRYGate(q, 0.9450722310515073, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.9850605389903295, 9);
  sqcRYGate(q, -3.004648681582263, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1039244608253704, 0);
  sqcRYGate(q, 2.1777747966534498, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.45428963727996274, 0);
  sqcRYGate(q, 2.852753956900326, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0257047881659935, 2);
  sqcRYGate(q, -1.4315240117849886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6439025446578532, 2);
  sqcRYGate(q, -2.904686764830386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.280871874881446, 4);
  sqcRYGate(q, 1.1554397173081004, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8188142861869332, 4);
  sqcRYGate(q, 3.129393141814949, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6975689619193243, 6);
  sqcRYGate(q, -2.7676792632254914, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.005438256313703791, 6);
  sqcRYGate(q, -0.9441775829571908, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9544869270325105, 8);
  sqcRYGate(q, 2.2442377976522367, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.25799947463065465, 8);
  sqcRYGate(q, -3.076812908722238, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.8313400075497404, 10);
  sqcRYGate(q, -0.5569772623547085, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.45289603424456093, 10);
  sqcRYGate(q, 0.6554156315274158, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.7389629655047651, 1);
  sqcRYGate(q, -1.678339623157548, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.806573106033334, 1);
  sqcRYGate(q, -2.5921170412210954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7109473251892728, 3);
  sqcRYGate(q, 1.539104320425599, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7148038260104407, 3);
  sqcRYGate(q, 0.5795535820490616, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5051363738530594, 5);
  sqcRYGate(q, 1.8319495775513897, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0445648102380396, 5);
  sqcRYGate(q, -0.6730489024809181, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.237460253226556, 7);
  sqcRYGate(q, -1.730566304185749, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.7610376102510457, 7);
  sqcRYGate(q, -3.1348356041949805, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.4199966410394098, 9);
  sqcRYGate(q, 1.9246772940016277, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.791950917685255, 9);
  sqcRYGate(q, 1.1896593983000159, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.864948950997268, 0);
  sqcRYGate(q, 0.09911822228446887, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.06725942122134747, 0);
  sqcRYGate(q, 2.435114536418997, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2727921325917548, 2);
  sqcRYGate(q, -0.9269743808629974, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.135704600812223, 2);
  sqcRYGate(q, 3.08210884739555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8277188485500817, 4);
  sqcRYGate(q, 3.0041436842868503, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.05900526002370485, 4);
  sqcRYGate(q, 0.9266807998230426, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.21335938543314398, 6);
  sqcRYGate(q, -0.1231386582271771, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6757827355401845, 6);
  sqcRYGate(q, -1.1781930308716122, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2661597951519794, 8);
  sqcRYGate(q, -2.2414266712740867, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1298148720181116, 8);
  sqcRYGate(q, 0.001465294811515459, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.2996412131117623, 10);
  sqcRYGate(q, -1.7943709797373149, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.042147325114698, 10);
  sqcRYGate(q, 2.9234015845726655, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7695544521451332, 1);
  sqcRYGate(q, 1.8912097374087506, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4269207525062777, 1);
  sqcRYGate(q, -2.808150810578703, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5997334420350136, 3);
  sqcRYGate(q, -0.9923730792303613, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0156253666069697, 3);
  sqcRYGate(q, -0.009309844267529956, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9204392979115603, 5);
  sqcRYGate(q, -1.3199028912502548, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3559857365710064, 5);
  sqcRYGate(q, -0.0008658013631244187, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1028330516204057, 7);
  sqcRYGate(q, 0.44815328611564453, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.07062558328488376, 7);
  sqcRYGate(q, -3.1020572031493168, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0193599941309164, 9);
  sqcRYGate(q, -2.5483141954302573, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.2752501070566806, 9);
  sqcRYGate(q, -2.534713854085906, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9831159633832387, 0);
  sqcRYGate(q, -1.845671218065828, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0800649615821223, 0);
  sqcRYGate(q, 2.574648981937081, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.92623175223605, 2);
  sqcRYGate(q, -1.3619737417331343, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07791867024391141, 2);
  sqcRYGate(q, -1.56118434328465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7086357800523468, 4);
  sqcRYGate(q, -0.9474062994238821, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.20224308486993078, 4);
  sqcRYGate(q, -2.041730571484622, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.214471363006771, 6);
  sqcRYGate(q, -1.079307015654667, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7942043353419971, 6);
  sqcRYGate(q, -3.0895524141538666, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7850301337725116, 8);
  sqcRYGate(q, 1.85769857882173, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.015271455501439489, 8);
  sqcRYGate(q, -0.5255982580016312, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.308486349347656, 10);
  sqcRYGate(q, 1.5503671939480688, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.3813687487895923, 10);
  sqcRYGate(q, -0.061500009840535164, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.2565495240768765, 1);
  sqcRYGate(q, 2.9531959106795505, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0016845736998996, 1);
  sqcRYGate(q, -2.0476415784828124, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6563245064825116, 3);
  sqcRYGate(q, 0.2216738059347234, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6530686333057885, 3);
  sqcRYGate(q, 3.1363766019487076, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0494900171142563, 5);
  sqcRYGate(q, 2.884242353252947, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6826802588737326, 5);
  sqcRYGate(q, 3.1339278984304344, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.040930007653112666, 7);
  sqcRYGate(q, -1.3090863690209225, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.067268347152445, 7);
  sqcRYGate(q, -3.0354005061725533, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.4294915266092234, 9);
  sqcRYGate(q, 0.9575160812002066, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.093118089251627, 9);
  sqcRYGate(q, 0.23815389041565457, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.791177591333938, 0);
  sqcRYGate(q, -1.9648796685217782, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8237048542648502, 0);
  sqcRYGate(q, 0.5125405072495806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2966639995431401, 2);
  sqcRYGate(q, 0.44804145018948555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.09509287433281877, 2);
  sqcRYGate(q, 0.07711697935436934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8941457280327443, 4);
  sqcRYGate(q, -0.9550889979922408, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0928284448062633, 4);
  sqcRYGate(q, -2.101001865241402, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9020469728226566, 6);
  sqcRYGate(q, -2.4345023177550558, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.017296037375690965, 6);
  sqcRYGate(q, 3.1058327477924577, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.872756892247197, 8);
  sqcRYGate(q, 1.7663927830968054, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.1591471560423384, 8);
  sqcRYGate(q, -1.5003141409232548, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.00021234076264, 10);
  sqcRYGate(q, 1.489032441550214, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5210674232502682, 10);
  sqcRYGate(q, 1.281294055014762, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.588262455056321, 1);
  sqcRYGate(q, 0.17977529366780914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.082195965672803, 1);
  sqcRYGate(q, 1.612126807008717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5929847604000997, 3);
  sqcRYGate(q, -0.4545913647155251, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.28213688148061333, 3);
  sqcRYGate(q, 0.001763982660381913, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4766104323082478, 5);
  sqcRYGate(q, -1.2088205049853935, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7091800971672035, 5);
  sqcRYGate(q, 3.1360770014496935, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.029279941886481, 7);
  sqcRYGate(q, 1.441176384007901, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.002298133269704835, 7);
  sqcRYGate(q, 0.055066385495671, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.9078471983345238, 9);
  sqcRYGate(q, 1.3660533076697263, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3504630499380674, 9);
  sqcRYGate(q, 3.137654670207705, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.669086522570046, 0);
  sqcRYGate(q, -2.480365040531313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4548397917749325, 0);
  sqcRYGate(q, -1.5754632720321091, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5052093458336366, 2);
  sqcRYGate(q, 0.49469920668173367, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9824802086599242, 2);
  sqcRYGate(q, 0.32772449234055734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1499471585972874, 4);
  sqcRYGate(q, 2.9717389680176955, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0001774608110603, 4);
  sqcRYGate(q, 1.8555687554103177, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6318270342270399, 6);
  sqcRYGate(q, -1.4584922347653722, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.041265335503727, 6);
  sqcRYGate(q, 0.04951883541121312, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.173974576653131, 8);
  sqcRYGate(q, 0.5593607403384295, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.688225531655835, 8);
  sqcRYGate(q, 1.35556795937087, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6226233267855588, 10);
  sqcRYGate(q, 1.3430588646856707, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.7552505266534375, 10);
  sqcRYGate(q, -2.575540360628614, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.3006331286883141, 1);
  sqcRYGate(q, 1.3312733452750534, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.02046660157054081, 1);
  sqcRYGate(q, -2.737287987184885, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.031460886353528, 3);
  sqcRYGate(q, -0.1846638847699573, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7512430016301823, 3);
  sqcRYGate(q, -0.005452969229200909, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6562400667562294, 5);
  sqcRYGate(q, 0.9579515230319294, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.18520067695887565, 5);
  sqcRYGate(q, 0.018413494434977157, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.07408370767665644, 7);
  sqcRYGate(q, 0.26707071670236004, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.00706462683108633, 7);
  sqcRYGate(q, 3.053953754172285, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.606518023733515, 9);
  sqcRYGate(q, -1.3955751982813616, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.037346923900834, 9);
  sqcRYGate(q, 0.012280084669979983, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6862372829899783, 0);
  sqcRYGate(q, 1.775900266142565, 1);
  sqcRYGate(q, 2.552623563788877, 2);
  sqcRYGate(q, -3.034226740814198, 3);
  sqcRYGate(q, 1.7488407184620431, 4);
  sqcRYGate(q, -1.6834191378519634, 5);
  sqcRYGate(q, 1.4711087508150724, 6);
  sqcRYGate(q, -3.0100641569205826, 7);
  sqcRYGate(q, 1.7249104845835346, 8);
  sqcRYGate(q, -1.514869662983685, 9);
  sqcRYGate(q, -0.3573232638860671, 10);
  sqcRYGate(q, -0.47758226120227576, 11);

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
