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

  sqcRYGate(q, -1.6172836203922856, 0);
  sqcRZGate(q, 2.737586121693091, 0);
  sqcRYGate(q, 2.7989764093660003, 1);
  sqcRZGate(q, -1.3205236296069354, 1);
  sqcRYGate(q, -0.6172243552248166, 2);
  sqcRZGate(q, 0.39974736861686283, 2);
  sqcRYGate(q, 0.12315469826983172, 3);
  sqcRZGate(q, 2.117574200439085, 3);
  sqcRYGate(q, 1.4200800418239918, 4);
  sqcRZGate(q, 0.13026634054060476, 4);
  sqcRYGate(q, 0.03447177009600377, 5);
  sqcRZGate(q, -0.25196845065063833, 5);
  sqcRYGate(q, 0.5275872792163313, 6);
  sqcRZGate(q, -0.6622092526216049, 6);
  sqcRYGate(q, 2.347470766754078, 7);
  sqcRZGate(q, -2.727925137778883, 7);
  sqcRYGate(q, -2.0430114553802516, 8);
  sqcRZGate(q, 2.5806310065066875, 8);
  sqcRYGate(q, 2.325912437220955, 9);
  sqcRZGate(q, 0.34797331522361225, 9);
  sqcRYGate(q, -0.6069146502997675, 10);
  sqcRZGate(q, -2.0276189783461427, 10);
  sqcRYGate(q, -1.632453339276684, 11);
  sqcRZGate(q, 1.1964535218877175, 11);
  sqcRYGate(q, 0.2623836714160639, 12);
  sqcRZGate(q, 1.2845244461186642, 12);
  sqcRYGate(q, -0.0927483500605364, 13);
  sqcRZGate(q, -2.218312889590079, 13);
  sqcRYGate(q, -0.9500947026647646, 14);
  sqcRZGate(q, 2.2312378769246446, 14);
  sqcRYGate(q, -3.126641821799552, 15);
  sqcRZGate(q, 2.9801406672912165, 15);
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
  sqcRYGate(q, 2.029122809258234, 0);
  sqcRZGate(q, 1.4051543301448373, 0);
  sqcRYGate(q, -2.311536220799981, 1);
  sqcRZGate(q, -0.5143549479884867, 1);
  sqcRYGate(q, 1.6287904713806587, 2);
  sqcRZGate(q, -0.9520020167035635, 2);
  sqcRYGate(q, -3.022094658236253, 3);
  sqcRZGate(q, -1.5618011945265728, 3);
  sqcRYGate(q, -1.6273714389751834, 4);
  sqcRZGate(q, 0.4994336742201152, 4);
  sqcRYGate(q, 2.5067119839884744, 5);
  sqcRZGate(q, -2.7705761552804677, 5);
  sqcRYGate(q, -3.0444080931791264, 6);
  sqcRZGate(q, -1.269430138644104, 6);
  sqcRYGate(q, -0.0729201109600968, 7);
  sqcRZGate(q, 0.5046002533830346, 7);
  sqcRYGate(q, 1.8557981512701813, 8);
  sqcRZGate(q, -1.2266075114307888, 8);
  sqcRYGate(q, -1.5532373756046614, 9);
  sqcRZGate(q, -0.007243227467387552, 9);
  sqcRYGate(q, 0.020893592481925186, 10);
  sqcRZGate(q, 2.8222792250597983, 10);
  sqcRYGate(q, -2.2811454585327464, 11);
  sqcRZGate(q, -0.3529068278984981, 11);
  sqcRYGate(q, 1.4243127687874253, 12);
  sqcRZGate(q, -1.7808445237075432, 12);
  sqcRYGate(q, 3.1388994218372437, 13);
  sqcRZGate(q, 1.177898961404079, 13);
  sqcRYGate(q, -2.777009818435627, 14);
  sqcRZGate(q, -0.5655403322044599, 14);
  sqcRYGate(q, -0.014548363546849963, 15);
  sqcRZGate(q, 2.3465691153153427, 15);
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
  sqcRYGate(q, -2.3595968126386673, 0);
  sqcRZGate(q, 1.1224491955424591, 0);
  sqcRYGate(q, -1.3083196202713296, 1);
  sqcRZGate(q, 2.9455000337469572, 1);
  sqcRYGate(q, -0.22583102070021788, 2);
  sqcRZGate(q, 1.1891283959153969, 2);
  sqcRYGate(q, 3.1356701521702903, 3);
  sqcRZGate(q, -0.9732047836667681, 3);
  sqcRYGate(q, 0.7760098872328611, 4);
  sqcRZGate(q, -0.15629408620242152, 4);
  sqcRYGate(q, 0.43429353954840805, 5);
  sqcRZGate(q, 1.6751138030135424, 5);
  sqcRYGate(q, -2.8204101319944295, 6);
  sqcRZGate(q, -0.9541155208575185, 6);
  sqcRYGate(q, 1.0942521588349985, 7);
  sqcRZGate(q, 1.0343529642406781, 7);
  sqcRYGate(q, -0.017319150624935033, 8);
  sqcRZGate(q, 1.3592295493065172, 8);
  sqcRYGate(q, 2.1814370876168563, 9);
  sqcRZGate(q, 1.8782468870345015, 9);
  sqcRYGate(q, -1.5504610150811062, 10);
  sqcRZGate(q, 1.9424751255116224, 10);
  sqcRYGate(q, 0.5202321427026472, 11);
  sqcRZGate(q, -2.2376274213349374, 11);
  sqcRYGate(q, -2.947461758067455, 12);
  sqcRZGate(q, 0.5118943944681833, 12);
  sqcRYGate(q, 1.9627534587292423, 13);
  sqcRZGate(q, -0.0707234807518109, 13);
  sqcRYGate(q, -1.3111932548792309, 14);
  sqcRZGate(q, 2.451759279976729, 14);
  sqcRYGate(q, 0.08519490053003675, 15);
  sqcRZGate(q, -2.6791012159000873, 15);
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
  sqcRYGate(q, 0.14187093692268868, 0);
  sqcRZGate(q, 0.1875672968117792, 0);
  sqcRYGate(q, -0.9155769477548387, 1);
  sqcRZGate(q, 0.5767294336656423, 1);
  sqcRYGate(q, -0.5804880545295887, 2);
  sqcRZGate(q, 2.7933827678994922, 2);
  sqcRYGate(q, 1.986663270606969, 3);
  sqcRZGate(q, -1.6318790411530228, 3);
  sqcRYGate(q, -2.5693586764856873, 4);
  sqcRZGate(q, 3.0585084574647317, 4);
  sqcRYGate(q, 0.08326013558584683, 5);
  sqcRZGate(q, -0.7799137422628908, 5);
  sqcRYGate(q, -1.0709412045823452, 6);
  sqcRZGate(q, -1.9810487035280417, 6);
  sqcRYGate(q, -0.39544717169888616, 7);
  sqcRZGate(q, -1.0227972472176243, 7);
  sqcRYGate(q, 0.8436926100271895, 8);
  sqcRZGate(q, -0.8253390558726946, 8);
  sqcRYGate(q, -1.4074623428463984, 9);
  sqcRZGate(q, -0.01239623269557565, 9);
  sqcRYGate(q, 2.9405891742199977, 10);
  sqcRZGate(q, -0.6516350378057671, 10);
  sqcRYGate(q, -0.9271988346919913, 11);
  sqcRZGate(q, -1.1006575247524575, 11);
  sqcRYGate(q, -0.10003379831054371, 12);
  sqcRZGate(q, -2.933199091514842, 12);
  sqcRYGate(q, -0.02026917320811774, 13);
  sqcRZGate(q, 0.45806916440609496, 13);
  sqcRYGate(q, -1.4129200500088226, 14);
  sqcRZGate(q, 1.1365961167535772, 14);
  sqcRYGate(q, -3.129523525627362, 15);
  sqcRZGate(q, 2.068921566712668, 15);
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
  sqcRYGate(q, -0.6228711563500656, 0);
  sqcRZGate(q, 1.2421771975665887, 0);
  sqcRYGate(q, 1.439828572247559, 1);
  sqcRZGate(q, -2.308893862166235, 1);
  sqcRYGate(q, 2.9551459942701457, 2);
  sqcRZGate(q, 0.5206838970063803, 2);
  sqcRYGate(q, 0.9559777830854185, 3);
  sqcRZGate(q, 2.985600714074176, 3);
  sqcRYGate(q, -3.092380007390443, 4);
  sqcRZGate(q, -0.3174794146226123, 4);
  sqcRYGate(q, 1.7281959377403509, 5);
  sqcRZGate(q, 1.8080148045752533, 5);
  sqcRYGate(q, 2.654416025902931, 6);
  sqcRZGate(q, 0.738964511278999, 6);
  sqcRYGate(q, 3.1220054660984577, 7);
  sqcRZGate(q, -2.1913437874067663, 7);
  sqcRYGate(q, 1.5982458577336631, 8);
  sqcRZGate(q, 0.8090782040062763, 8);
  sqcRYGate(q, -0.1989437236048932, 9);
  sqcRZGate(q, -1.6221964223936942, 9);
  sqcRYGate(q, 1.956356790455101, 10);
  sqcRZGate(q, 1.7951802485305057, 10);
  sqcRYGate(q, 0.6397219265750413, 11);
  sqcRZGate(q, 2.5342630265834165, 11);
  sqcRYGate(q, -1.6310114881192361, 12);
  sqcRZGate(q, -0.6466842172596827, 12);
  sqcRYGate(q, 0.046774237930989136, 13);
  sqcRZGate(q, -1.9616645274610898, 13);
  sqcRYGate(q, 1.7467663954983157, 14);
  sqcRZGate(q, 0.30868340222382024, 14);
  sqcRYGate(q, 2.2803598264751566, 15);
  sqcRZGate(q, 2.4603816509705383, 15);
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
  sqcRYGate(q, -1.3570121845459928, 0);
  sqcRZGate(q, -2.0156063120193366, 0);
  sqcRYGate(q, -2.13702693996676, 1);
  sqcRZGate(q, 2.1155808626484207, 1);
  sqcRYGate(q, 0.18984225461288418, 2);
  sqcRZGate(q, -1.6385176349972672, 2);
  sqcRYGate(q, 2.0278821355033227, 3);
  sqcRZGate(q, -0.4025951654649636, 3);
  sqcRYGate(q, -0.7321072578428183, 4);
  sqcRZGate(q, -2.871183185311386, 4);
  sqcRYGate(q, -2.8636246889235415, 5);
  sqcRZGate(q, -1.5217418786215227, 5);
  sqcRYGate(q, -0.3584945049942747, 6);
  sqcRZGate(q, 3.0343391016640004, 6);
  sqcRYGate(q, -1.5752101410549173, 7);
  sqcRZGate(q, -3.130743841349481, 7);
  sqcRYGate(q, -3.1342047860652134, 8);
  sqcRZGate(q, 0.9022403892127002, 8);
  sqcRYGate(q, -0.016472388954444958, 9);
  sqcRZGate(q, 2.537154415270676, 9);
  sqcRYGate(q, -2.2410472904803242, 10);
  sqcRZGate(q, 0.025692110654853908, 10);
  sqcRYGate(q, -1.662298989130658, 11);
  sqcRZGate(q, -1.7719234188646598, 11);
  sqcRYGate(q, 3.1247862059279177, 12);
  sqcRZGate(q, -0.7509572110792463, 12);
  sqcRYGate(q, 1.2703434671321467, 13);
  sqcRZGate(q, -1.5487476319195133, 13);
  sqcRYGate(q, -0.794120921723616, 14);
  sqcRZGate(q, -0.9823742632539432, 14);
  sqcRYGate(q, 2.485498001494443, 15);
  sqcRZGate(q, -0.23540021824125645, 15);
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
  sqcRYGate(q, -2.0048377892554448, 0);
  sqcRZGate(q, -1.9802087149663476, 0);
  sqcRYGate(q, 0.9011294554031634, 1);
  sqcRZGate(q, 1.0595175879438248, 1);
  sqcRYGate(q, 2.234554712408108, 2);
  sqcRZGate(q, 0.6154941435310347, 2);
  sqcRYGate(q, 2.6889725472093797, 3);
  sqcRZGate(q, 2.649771262407796, 3);
  sqcRYGate(q, -0.07446823821823743, 4);
  sqcRZGate(q, 1.6928538773988047, 4);
  sqcRYGate(q, -3.068462114771053, 5);
  sqcRZGate(q, 2.47142364970448, 5);
  sqcRYGate(q, -1.58595438605738, 6);
  sqcRZGate(q, 0.056786462899341535, 6);
  sqcRYGate(q, 2.176140094581082, 7);
  sqcRZGate(q, 0.4371762028836309, 7);
  sqcRYGate(q, 1.1202396363182743, 8);
  sqcRZGate(q, -0.04751759605965186, 8);
  sqcRYGate(q, 0.004703461228914962, 9);
  sqcRZGate(q, 2.9818224087140015, 9);
  sqcRYGate(q, -0.4743924277725425, 10);
  sqcRZGate(q, -3.0028641844212633, 10);
  sqcRYGate(q, -2.4433960757212114, 11);
  sqcRZGate(q, -2.0031975914973974, 11);
  sqcRYGate(q, -3.1216693122873673, 12);
  sqcRZGate(q, 2.269995608509239, 12);
  sqcRYGate(q, -0.0723972150744281, 13);
  sqcRZGate(q, -0.2037981887819402, 13);
  sqcRYGate(q, -1.0883025234762265, 14);
  sqcRZGate(q, -2.6831705391081173, 14);
  sqcRYGate(q, 2.256903143001722, 15);
  sqcRZGate(q, 0.3697594731166454, 15);
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
  sqcRYGate(q, -1.8114421930769495, 0);
  sqcRZGate(q, 2.053053230584064, 0);
  sqcRYGate(q, -3.0534776589184474, 1);
  sqcRZGate(q, -1.9589444637000977, 1);
  sqcRYGate(q, 3.1156622218943104, 2);
  sqcRZGate(q, -1.4466667826720674, 2);
  sqcRYGate(q, 1.8937286675377818, 3);
  sqcRZGate(q, 2.5090623295116536, 3);
  sqcRYGate(q, 0.3947939583316664, 4);
  sqcRZGate(q, 1.9164014627976291, 4);
  sqcRYGate(q, 1.5590123207150293, 5);
  sqcRZGate(q, 3.122169027787504, 5);
  sqcRYGate(q, 0.38323512402140913, 6);
  sqcRZGate(q, 3.0528231360468374, 6);
  sqcRYGate(q, -3.0235923635103465, 7);
  sqcRZGate(q, 0.4683887171398228, 7);
  sqcRYGate(q, 2.986217940184319, 8);
  sqcRZGate(q, -0.1528262424637069, 8);
  sqcRYGate(q, 0.0739255260113243, 9);
  sqcRZGate(q, -0.2379619220014242, 9);
  sqcRYGate(q, 2.030262412640929, 10);
  sqcRZGate(q, 0.13654113123718165, 10);
  sqcRYGate(q, 1.2568455106386818, 11);
  sqcRZGate(q, -2.9844933894349635, 11);
  sqcRYGate(q, 3.017796745535214, 12);
  sqcRZGate(q, 0.4461179882334884, 12);
  sqcRYGate(q, 2.709029547316272, 13);
  sqcRZGate(q, 2.6925258365175337, 13);
  sqcRYGate(q, 1.4027314014978334, 14);
  sqcRZGate(q, 2.3444739175163485, 14);
  sqcRYGate(q, 3.072462514751006, 15);
  sqcRZGate(q, -2.52191986607472, 15);
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
  sqcRYGate(q, -0.6167229469011302, 0);
  sqcRZGate(q, -1.4393383580422516, 0);
  sqcRYGate(q, -1.8654790010756306, 1);
  sqcRZGate(q, -2.107132747022404, 1);
  sqcRYGate(q, 1.9829179751797694, 2);
  sqcRZGate(q, -2.659462767644786, 2);
  sqcRYGate(q, -1.0819730566244288, 3);
  sqcRZGate(q, 2.962143796239716, 3);
  sqcRYGate(q, 1.5735055157222886, 4);
  sqcRZGate(q, 0.0013056544920058062, 4);
  sqcRYGate(q, 2.580608485436138, 5);
  sqcRZGate(q, -0.0038564392377669066, 5);
  sqcRYGate(q, -0.3745053032101078, 6);
  sqcRZGate(q, 0.736252296937043, 6);
  sqcRYGate(q, -2.679818406205318, 7);
  sqcRZGate(q, -3.1224261819487165, 7);
  sqcRYGate(q, -2.4080859063666193, 8);
  sqcRZGate(q, 2.9420119798140782, 8);
  sqcRYGate(q, 1.133708014069849, 9);
  sqcRZGate(q, -2.0521452784675973, 9);
  sqcRYGate(q, 1.3996689887938905, 10);
  sqcRZGate(q, -2.175108877962951, 10);
  sqcRYGate(q, -2.482129214566206, 11);
  sqcRZGate(q, 2.491995479806887, 11);
  sqcRYGate(q, -2.281486994758378, 12);
  sqcRZGate(q, 1.1737647969806038, 12);
  sqcRYGate(q, -1.6552725386008058, 13);
  sqcRZGate(q, -2.7975853218424955, 13);
  sqcRYGate(q, 0.21618571028412337, 14);
  sqcRZGate(q, 1.0526998827231444, 14);
  sqcRYGate(q, -2.2338066496061106, 15);
  sqcRZGate(q, 1.5857577388045163, 15);
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
  sqcRYGate(q, 1.743924965211857, 0);
  sqcRZGate(q, 2.271034978323182, 0);
  sqcRYGate(q, -0.32116971592620513, 1);
  sqcRZGate(q, 2.8033894595108246, 1);
  sqcRYGate(q, -2.6282400692214294, 2);
  sqcRZGate(q, -2.5201767862028794, 2);
  sqcRYGate(q, -1.5689462932907743, 3);
  sqcRZGate(q, -3.1407151248938874, 3);
  sqcRYGate(q, -0.6989532548350716, 4);
  sqcRZGate(q, -1.0173978969905577, 4);
  sqcRYGate(q, -0.002057397221775921, 5);
  sqcRZGate(q, 1.5917467162985774, 5);
  sqcRYGate(q, 3.131314165923967, 6);
  sqcRZGate(q, 0.3458446235861387, 6);
  sqcRYGate(q, 2.394219269299437, 7);
  sqcRZGate(q, -1.0405398004083493, 7);
  sqcRYGate(q, -2.9263600175561555, 8);
  sqcRZGate(q, -2.6385515656460394, 8);
  sqcRYGate(q, -0.05317199110378584, 9);
  sqcRZGate(q, 2.261937943908019, 9);
  sqcRYGate(q, -3.0424444526385552, 10);
  sqcRZGate(q, 3.1412236344606526, 10);
  sqcRYGate(q, 3.0370929853888495, 11);
  sqcRZGate(q, 1.0877307311517084, 11);
  sqcRYGate(q, -0.0661895937757065, 12);
  sqcRZGate(q, -0.2934867750612681, 12);
  sqcRYGate(q, 0.8673071110302458, 13);
  sqcRZGate(q, -1.5082851257578422, 13);
  sqcRYGate(q, 3.0370371494006783, 14);
  sqcRZGate(q, -0.6113229514925544, 14);
  sqcRYGate(q, 2.96154274731887, 15);
  sqcRZGate(q, -0.3923244720205271, 15);
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
  sqcRYGate(q, 0.043131937154379685, 0);
  sqcRZGate(q, -0.5991399182066087, 0);
  sqcRYGate(q, -1.1013249010268273, 1);
  sqcRZGate(q, -3.127461712068898, 1);
  sqcRYGate(q, 1.8929969206824664, 2);
  sqcRZGate(q, 0.001113680761344129, 2);
  sqcRYGate(q, -0.778897618239516, 3);
  sqcRZGate(q, -0.6968252381346803, 3);
  sqcRYGate(q, 1.7097195806229526, 4);
  sqcRZGate(q, 1.3230631185456598, 4);
  sqcRYGate(q, 1.5783079561073223, 5);
  sqcRZGate(q, -0.6837821730505937, 5);
  sqcRYGate(q, 2.565355163587942, 6);
  sqcRZGate(q, 1.1153217684980092, 6);
  sqcRYGate(q, -2.943700742515461, 7);
  sqcRZGate(q, 1.2729622062963195, 7);
  sqcRYGate(q, -2.289845891015137, 8);
  sqcRZGate(q, -2.186224533043656, 8);
  sqcRYGate(q, -2.792086192326996, 9);
  sqcRZGate(q, -0.38271169224649615, 9);
  sqcRYGate(q, 2.2567803176501666, 10);
  sqcRZGate(q, -0.9378855483434573, 10);
  sqcRYGate(q, -2.697232750943804, 11);
  sqcRZGate(q, 0.8798461268826456, 11);
  sqcRYGate(q, -2.7040749414925207, 12);
  sqcRZGate(q, -0.0900591740261838, 12);
  sqcRYGate(q, -0.8258100005622246, 13);
  sqcRZGate(q, -1.931198387498343, 13);
  sqcRYGate(q, -1.8688222259405247, 14);
  sqcRZGate(q, 1.516111475969163, 14);
  sqcRYGate(q, -1.1805994844164927, 15);
  sqcRZGate(q, -0.8863027377651513, 15);
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
  sqcRYGate(q, 1.7297876064430282, 0);
  sqcRZGate(q, -0.5906750754160841, 0);
  sqcRYGate(q, 0.0017917539888411094, 1);
  sqcRZGate(q, 3.131154942833195, 1);
  sqcRYGate(q, 0.6789324346771825, 2);
  sqcRZGate(q, 2.863909463406721, 2);
  sqcRYGate(q, -3.1386516676123644, 3);
  sqcRZGate(q, -2.2597902294020416, 3);
  sqcRYGate(q, -2.9318469338100566, 4);
  sqcRZGate(q, -0.035154440326969925, 4);
  sqcRYGate(q, -3.140448159363328, 5);
  sqcRZGate(q, 1.3082946025496476, 5);
  sqcRYGate(q, 3.0751327197956373, 6);
  sqcRZGate(q, -1.885989652802009, 6);
  sqcRYGate(q, 3.064847431247195, 7);
  sqcRZGate(q, 1.1697816474221376, 7);
  sqcRYGate(q, -3.1404248170398286, 8);
  sqcRZGate(q, -0.9932586513678503, 8);
  sqcRYGate(q, -0.04380682069620523, 9);
  sqcRZGate(q, 1.591678956359279, 9);
  sqcRYGate(q, 0.11964083959306493, 10);
  sqcRZGate(q, 0.9340556430265039, 10);
  sqcRYGate(q, 0.2161597736949112, 11);
  sqcRZGate(q, -1.4512522253138027, 11);
  sqcRYGate(q, 3.0436976246620104, 12);
  sqcRZGate(q, -1.6432971968588914, 12);
  sqcRYGate(q, 0.7827056071633086, 13);
  sqcRZGate(q, -2.080875043362085, 13);
  sqcRYGate(q, -0.2740296308514035, 14);
  sqcRZGate(q, -1.8547659197921962, 14);
  sqcRYGate(q, -0.8339817850536368, 15);
  sqcRZGate(q, 2.126856031478262, 15);
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
  sqcRYGate(q, -1.6233006368662706, 0);
  sqcRZGate(q, -1.7823353000786657, 0);
  sqcRYGate(q, 2.2096598196846404, 1);
  sqcRZGate(q, 2.9869553944209786, 1);
  sqcRYGate(q, -0.330654154348246, 2);
  sqcRZGate(q, 1.8350396037463117, 2);
  sqcRYGate(q, -1.5744472524862987, 3);
  sqcRZGate(q, -1.8111616596812867, 3);
  sqcRYGate(q, -0.5688295256073683, 4);
  sqcRZGate(q, 3.0869889728994875, 4);
  sqcRYGate(q, -2.991488353997021, 5);
  sqcRZGate(q, -1.7348769788724823, 5);
  sqcRYGate(q, -1.0005306712852973, 6);
  sqcRZGate(q, 2.7474192374733133, 6);
  sqcRYGate(q, -1.7832947184534944, 7);
  sqcRZGate(q, -1.6966218111005285, 7);
  sqcRYGate(q, -1.2311912052661826, 8);
  sqcRZGate(q, 1.4308161202130671, 8);
  sqcRYGate(q, 2.283365543518536, 9);
  sqcRZGate(q, -0.9219269676199778, 9);
  sqcRYGate(q, -0.2738998184201162, 10);
  sqcRZGate(q, -1.7911837896492153, 10);
  sqcRYGate(q, -0.47901761384448255, 11);
  sqcRZGate(q, -1.7651930896388874, 11);
  sqcRYGate(q, 2.670227377836035, 12);
  sqcRZGate(q, 2.7869319310003347, 12);
  sqcRYGate(q, -1.0268477931757833, 13);
  sqcRZGate(q, 2.7592304013167266, 13);
  sqcRYGate(q, 1.944770131877375, 14);
  sqcRZGate(q, -2.7587615059190487, 14);
  sqcRYGate(q, -2.1566962918367727, 15);
  sqcRZGate(q, 0.7921007417142188, 15);
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
  sqcRYGate(q, 1.5700968638100519, 0);
  sqcRZGate(q, -1.28124235026363, 0);
  sqcRYGate(q, -1.5698374869124887, 1);
  sqcRZGate(q, -1.5708785237346774, 1);
  sqcRYGate(q, 0.20528170637660956, 2);
  sqcRZGate(q, -5.120718278295299e-05, 2);
  sqcRYGate(q, 2.876962512518896, 3);
  sqcRZGate(q, 3.1053937078318574, 3);
  sqcRYGate(q, -3.1409397673943187, 4);
  sqcRZGate(q, -1.864433645757984, 4);
  sqcRYGate(q, -0.02325343831886214, 5);
  sqcRZGate(q, 1.7589065765398146, 5);
  sqcRYGate(q, -3.117385193692867, 6);
  sqcRZGate(q, -2.197238079673615, 6);
  sqcRYGate(q, 3.0099201176016526, 7);
  sqcRZGate(q, 3.038930868752636, 7);
  sqcRYGate(q, -3.1415799154406896, 8);
  sqcRZGate(q, -1.1642032305475851, 8);
  sqcRYGate(q, 3.0300855855069737, 9);
  sqcRZGate(q, 3.0918868501522287, 9);
  sqcRYGate(q, 3.0171558635887874, 10);
  sqcRZGate(q, -2.1750458839247817, 10);
  sqcRYGate(q, -0.18659934738483208, 11);
  sqcRZGate(q, -1.485985183540719, 11);
  sqcRYGate(q, 0.025541600398077513, 12);
  sqcRZGate(q, -1.459734773824165, 12);
  sqcRYGate(q, -0.12397592463157993, 13);
  sqcRZGate(q, -2.205481401787108, 13);
  sqcRYGate(q, -0.48293806593579197, 14);
  sqcRZGate(q, -1.876308121064507, 14);
  sqcRYGate(q, 2.521150774530059, 15);
  sqcRZGate(q, 1.969113445055979, 15);
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
  sqcRYGate(q, 9.036479758250948e-06, 0);
  sqcRZGate(q, -1.7020378921177333, 0);
  sqcRYGate(q, 1.5692828862922283, 1);
  sqcRZGate(q, 1.2940000433276513, 1);
  sqcRYGate(q, -1.5664033807057587, 2);
  sqcRZGate(q, -1.564076070270402, 2);
  sqcRYGate(q, -0.008222494196446384, 3);
  sqcRZGate(q, 0.9265883931830086, 3);
  sqcRYGate(q, -0.007830992885574236, 4);
  sqcRZGate(q, 1.1267151320230635, 4);
  sqcRYGate(q, 3.0021598506315095, 5);
  sqcRZGate(q, 0.5328489144838856, 5);
  sqcRYGate(q, -1.6093445074343615, 6);
  sqcRZGate(q, 2.6077985318367705, 6);
  sqcRYGate(q, -2.7579540057219303, 7);
  sqcRZGate(q, 2.6387176314871668, 7);
  sqcRYGate(q, -0.08984889721869749, 8);
  sqcRZGate(q, -1.546899861129305, 8);
  sqcRYGate(q, 0.891265896273356, 9);
  sqcRZGate(q, -0.6671419631063991, 9);
  sqcRYGate(q, -1.6501403300390995, 10);
  sqcRZGate(q, -0.7826072370285838, 10);
  sqcRYGate(q, 1.3754579988069884, 11);
  sqcRZGate(q, 1.735214941272558, 11);
  sqcRYGate(q, -1.288651791075913, 12);
  sqcRZGate(q, 1.804498305648507, 12);
  sqcRYGate(q, 1.0468050213655342, 13);
  sqcRZGate(q, -0.22474996420876003, 13);
  sqcRYGate(q, 1.5923454681668132, 14);
  sqcRZGate(q, -0.14105402348435325, 14);
  sqcRYGate(q, 2.991121501963584, 15);
  sqcRZGate(q, -1.6082532312534557, 15);

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
