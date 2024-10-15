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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -1.9293837566000533, 0);
  sqcRZGate(q, -3.1280647230990306, 0);
  sqcRYGate(q, -0.5476249231406589, 1);
  sqcRZGate(q, -2.304961030545021, 1);
  sqcRYGate(q, -3.131558095421889, 2);
  sqcRZGate(q, -2.803038578888196, 2);
  sqcRYGate(q, -0.07630453542923465, 3);
  sqcRZGate(q, -1.7183039030372618, 3);
  sqcRYGate(q, 2.9770169794734858, 4);
  sqcRZGate(q, -3.131310608386837, 4);
  sqcRYGate(q, -0.060700647758295645, 5);
  sqcRZGate(q, 0.6810562682067315, 5);
  sqcRYGate(q, 1.2946887761750459, 6);
  sqcRZGate(q, 0.16985921595324527, 6);
  sqcRYGate(q, -3.1298034914912645, 7);
  sqcRZGate(q, -2.6508491732874595, 7);
  sqcRYGate(q, 3.1315307885385617, 8);
  sqcRZGate(q, 1.3816749093120393, 8);
  sqcRYGate(q, -0.056285492009710225, 9);
  sqcRZGate(q, -0.4414049918417506, 9);
  sqcRYGate(q, -0.8459233829049275, 10);
  sqcRZGate(q, 0.011247492784270952, 10);
  sqcRYGate(q, -3.1174998126967957, 11);
  sqcRZGate(q, -0.0039610541230583616, 11);
  sqcRYGate(q, 1.570688101599548, 12);
  sqcRZGate(q, 0.4243413187666756, 12);
  sqcRYGate(q, -1.5716286269914095, 13);
  sqcRZGate(q, -0.9605527882829531, 13);
  sqcRYGate(q, 0.00011777571203630544, 14);
  sqcRZGate(q, 0.6496500209348739, 14);
  sqcRYGate(q, 2.767268013781336, 15);
  sqcRZGate(q, -0.1278136122958271, 15);
  sqcRYGate(q, 3.1183758905681707, 16);
  sqcRZGate(q, -2.8681725220643077, 16);
  sqcRYGate(q, -0.17870154484638157, 17);
  sqcRZGate(q, -2.5487600814471176, 17);
  sqcRYGate(q, 1.2671288914094387, 18);
  sqcRZGate(q, -0.12655197219106673, 18);
  sqcRYGate(q, 0.5742747863905766, 19);
  sqcRZGate(q, 1.7997225751790442, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.001900577032424, 0);
  sqcRZGate(q, -1.927435840147547, 0);
  sqcRYGate(q, 0.5290664278590366, 1);
  sqcRZGate(q, 1.5393652216532283, 1);
  sqcRYGate(q, 0.008351014071121377, 2);
  sqcRZGate(q, -0.07027695038648218, 2);
  sqcRYGate(q, -0.5253970409533277, 3);
  sqcRZGate(q, -0.8228686486633685, 3);
  sqcRYGate(q, -0.33181974925542285, 4);
  sqcRZGate(q, 0.25937002803881626, 4);
  sqcRYGate(q, -0.03339819969896408, 5);
  sqcRZGate(q, -0.389185482040741, 5);
  sqcRYGate(q, -0.8013988741864058, 6);
  sqcRZGate(q, -0.9446914944950203, 6);
  sqcRYGate(q, 0.007031519505438285, 7);
  sqcRZGate(q, 2.16794313331543, 7);
  sqcRYGate(q, 0.003689949896764079, 8);
  sqcRZGate(q, 2.4203339270712743, 8);
  sqcRYGate(q, -1.566176874390644, 9);
  sqcRZGate(q, 1.3799111492005658, 9);
  sqcRYGate(q, -3.114983766646662, 10);
  sqcRZGate(q, -1.7032933606292693, 10);
  sqcRYGate(q, 1.5710784814379721, 11);
  sqcRZGate(q, -0.12606114449487332, 11);
  sqcRYGate(q, -2.910191977017695, 12);
  sqcRZGate(q, 2.991795210920103, 12);
  sqcRYGate(q, -1.5916932204497063, 13);
  sqcRZGate(q, 2.951654096046129, 13);
  sqcRYGate(q, -0.8183237175604576, 14);
  sqcRZGate(q, 2.9365510639855295, 14);
  sqcRYGate(q, -2.686832208948103, 15);
  sqcRZGate(q, 1.5825627043339452, 15);
  sqcRYGate(q, 0.012235276552378646, 16);
  sqcRZGate(q, -2.7844479907313264, 16);
  sqcRYGate(q, 2.783104409061813, 17);
  sqcRZGate(q, -1.0949721779676975, 17);
  sqcRYGate(q, -0.2738903371008715, 18);
  sqcRZGate(q, 2.1692454403219914, 18);
  sqcRYGate(q, -0.24359842861054215, 19);
  sqcRZGate(q, 1.2691534138482634, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.038336993364218586, 0);
  sqcRZGate(q, 0.6684070434503941, 0);
  sqcRYGate(q, -2.1138796398973954, 1);
  sqcRZGate(q, -0.9989082495779691, 1);
  sqcRYGate(q, -3.1257313425125828, 2);
  sqcRZGate(q, 1.3130505611063428, 2);
  sqcRYGate(q, 0.18676926849782038, 3);
  sqcRZGate(q, -1.0809915016879423, 3);
  sqcRYGate(q, 2.2076031492032007, 4);
  sqcRZGate(q, -0.5454678309517181, 4);
  sqcRYGate(q, 0.03897659582526991, 5);
  sqcRZGate(q, -0.5300424531531442, 5);
  sqcRYGate(q, -2.847874245430244, 6);
  sqcRZGate(q, -0.9275750849324932, 6);
  sqcRYGate(q, 3.0642532910467493, 7);
  sqcRZGate(q, 0.1308199455176295, 7);
  sqcRYGate(q, -3.1409157317931236, 8);
  sqcRZGate(q, 1.4108096543578728, 8);
  sqcRYGate(q, -1.4392559977092383, 9);
  sqcRZGate(q, 1.6318246810762993, 9);
  sqcRYGate(q, 1.5713583406186513, 10);
  sqcRZGate(q, 0.09777090883063676, 10);
  sqcRYGate(q, 3.1142999223751207, 11);
  sqcRZGate(q, -0.38699681017236964, 11);
  sqcRYGate(q, 0.09566209753027265, 12);
  sqcRZGate(q, -3.050419910229899, 12);
  sqcRYGate(q, 3.1398180630152166, 13);
  sqcRZGate(q, 0.023814368990590674, 13);
  sqcRYGate(q, 3.141483954209167, 14);
  sqcRZGate(q, -0.8002504111787729, 14);
  sqcRYGate(q, 3.1291563644752203, 15);
  sqcRZGate(q, 1.6244583930144394, 15);
  sqcRYGate(q, -3.1361068345793512, 16);
  sqcRZGate(q, 0.42048061201417836, 16);
  sqcRYGate(q, 2.8750268703510384, 17);
  sqcRZGate(q, 2.787169460050576, 17);
  sqcRYGate(q, -0.5438986970754822, 18);
  sqcRZGate(q, 2.492354156708597, 18);
  sqcRYGate(q, -2.659643625918003, 19);
  sqcRZGate(q, 1.2546564768513315, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.6645463022913222, 0);
  sqcRZGate(q, 1.747989362300575, 0);
  sqcRYGate(q, -1.2906309627209263, 1);
  sqcRZGate(q, 0.7497981390183696, 1);
  sqcRYGate(q, -0.0014327170560720114, 2);
  sqcRZGate(q, 0.3261711902625164, 2);
  sqcRYGate(q, -2.8163420091437055, 3);
  sqcRZGate(q, 2.9854368216631166, 3);
  sqcRYGate(q, 0.7343668804661814, 4);
  sqcRZGate(q, -1.3138874125765516, 4);
  sqcRYGate(q, 2.9531537216362387, 5);
  sqcRZGate(q, 0.3601721524163546, 5);
  sqcRYGate(q, 0.8741791431075416, 6);
  sqcRZGate(q, 2.654764923800932, 6);
  sqcRYGate(q, 0.01918135256846363, 7);
  sqcRZGate(q, 2.688601788969001, 7);
  sqcRYGate(q, -0.005989033011994494, 8);
  sqcRZGate(q, -2.670072090038243, 8);
  sqcRYGate(q, 1.5725220639992348, 9);
  sqcRZGate(q, -1.3167165717893283, 9);
  sqcRYGate(q, -0.7210832645602965, 10);
  sqcRZGate(q, -0.11609026386934351, 10);
  sqcRYGate(q, 0.26303329175715806, 11);
  sqcRZGate(q, -0.4433126405477125, 11);
  sqcRYGate(q, 3.0853209476861103, 12);
  sqcRZGate(q, -0.2699209065219547, 12);
  sqcRYGate(q, 1.5087129354083577, 13);
  sqcRZGate(q, -0.5116523460319725, 13);
  sqcRYGate(q, -1.1008768541641965, 14);
  sqcRZGate(q, 2.1169057185669, 14);
  sqcRYGate(q, -1.240868470896529, 15);
  sqcRZGate(q, -2.7661939116651526, 15);
  sqcRYGate(q, 3.1339289325460316, 16);
  sqcRZGate(q, -0.8699748269446111, 16);
  sqcRYGate(q, 0.16791906801214296, 17);
  sqcRZGate(q, 0.3439176633119736, 17);
  sqcRYGate(q, -2.2531548008253823, 18);
  sqcRZGate(q, -1.8360340400247024, 18);
  sqcRYGate(q, -3.0258823885179735, 19);
  sqcRZGate(q, 2.381217644421487, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.6506492599419538, 0);
  sqcRZGate(q, -2.8298912503179157, 0);
  sqcRYGate(q, 0.9950792513850759, 1);
  sqcRZGate(q, 2.9808832050476193, 1);
  sqcRYGate(q, -1.8453205750681123, 2);
  sqcRZGate(q, -3.0367929386521157, 2);
  sqcRYGate(q, 0.26600845432652204, 3);
  sqcRZGate(q, 1.8093971895209515, 3);
  sqcRYGate(q, 0.007155446133497465, 4);
  sqcRZGate(q, 3.0272970481508117, 4);
  sqcRYGate(q, -3.130497206487079, 5);
  sqcRZGate(q, 0.36580631114810197, 5);
  sqcRYGate(q, 3.138101512979323, 6);
  sqcRZGate(q, 0.4014721913505026, 6);
  sqcRYGate(q, 3.1304408442855394, 7);
  sqcRZGate(q, -0.29867113047287047, 7);
  sqcRYGate(q, -1.684541614012197, 8);
  sqcRZGate(q, -0.3629909373520865, 8);
  sqcRYGate(q, 1.3404262039401977, 9);
  sqcRZGate(q, -0.5946024030515455, 9);
  sqcRYGate(q, -2.7890666843866185, 10);
  sqcRZGate(q, 1.0038805404364417, 10);
  sqcRYGate(q, 2.971130221202179, 11);
  sqcRZGate(q, -1.4225718346067326, 11);
  sqcRYGate(q, -0.12473200890598334, 12);
  sqcRZGate(q, -3.122609351890483, 12);
  sqcRYGate(q, 3.1396167993919906, 13);
  sqcRZGate(q, 2.043759891977076, 13);
  sqcRYGate(q, -0.000820408575536973, 14);
  sqcRZGate(q, -2.6123545645161816, 14);
  sqcRYGate(q, 2.632701901762868, 15);
  sqcRZGate(q, 0.10908047227809557, 15);
  sqcRYGate(q, 3.1192067990021073, 16);
  sqcRZGate(q, 1.4652788791556066, 16);
  sqcRYGate(q, 2.3090524931049816, 17);
  sqcRZGate(q, 2.898171746181977, 17);
  sqcRYGate(q, 1.437591266476948, 18);
  sqcRZGate(q, -0.3507232390605939, 18);
  sqcRYGate(q, -0.7355711163553177, 19);
  sqcRZGate(q, -2.6562805382589456, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.4681300405504603, 0);
  sqcRZGate(q, 2.448947382425758, 0);
  sqcRYGate(q, 0.11086643249685224, 1);
  sqcRZGate(q, -0.4816816571692397, 1);
  sqcRYGate(q, -3.133259286502383, 2);
  sqcRZGate(q, -2.6774700739326116, 2);
  sqcRYGate(q, 0.002432682659739268, 3);
  sqcRZGate(q, -0.8022158761283862, 3);
  sqcRYGate(q, -3.0169430106530517, 4);
  sqcRZGate(q, 3.0916217773147605, 4);
  sqcRYGate(q, 2.9525987763300554, 5);
  sqcRZGate(q, -0.21955048777608524, 5);
  sqcRYGate(q, 0.01292557659192809, 6);
  sqcRZGate(q, -0.9942590092079714, 6);
  sqcRYGate(q, -0.4423895551255276, 7);
  sqcRZGate(q, 3.0837615559095704, 7);
  sqcRYGate(q, -0.9443609655012031, 8);
  sqcRZGate(q, -3.081861414892108, 8);
  sqcRYGate(q, 2.9887802052015813, 9);
  sqcRZGate(q, 1.5068655705954164, 9);
  sqcRYGate(q, -2.981449656610448, 10);
  sqcRZGate(q, -2.5161481130729046, 10);
  sqcRYGate(q, -0.5153947126909637, 11);
  sqcRZGate(q, -2.801405493000242, 11);
  sqcRYGate(q, 1.7225049047180525, 12);
  sqcRZGate(q, 3.10944127377889, 12);
  sqcRYGate(q, -2.5643187599131876, 13);
  sqcRZGate(q, -2.855703383858965, 13);
  sqcRYGate(q, -1.0833249990428255, 14);
  sqcRZGate(q, -1.6242369433590689, 14);
  sqcRYGate(q, -2.92399488448097, 15);
  sqcRZGate(q, 0.5928666796646584, 15);
  sqcRYGate(q, -0.006801269159167739, 16);
  sqcRZGate(q, 1.8409588409253959, 16);
  sqcRYGate(q, 3.0712231491490294, 17);
  sqcRZGate(q, 2.8313523716656768, 17);
  sqcRYGate(q, -2.2888651765601957, 18);
  sqcRZGate(q, 2.8402282182267107, 18);
  sqcRYGate(q, -2.323321103211395, 19);
  sqcRZGate(q, -2.115912003184908, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.9398051238012997, 0);
  sqcRZGate(q, 2.4975391292694926, 0);
  sqcRYGate(q, -1.7328908520968251, 1);
  sqcRZGate(q, -2.9954764120074406, 1);
  sqcRYGate(q, -1.6195328412842906, 2);
  sqcRZGate(q, 1.487346005928102, 2);
  sqcRYGate(q, 0.4755323747339242, 3);
  sqcRZGate(q, -0.11576549284368022, 3);
  sqcRYGate(q, -1.8329194557504012, 4);
  sqcRZGate(q, -2.818187193490087, 4);
  sqcRYGate(q, -3.1275013237269484, 5);
  sqcRZGate(q, -0.25335034538936346, 5);
  sqcRYGate(q, -0.595776647329334, 6);
  sqcRZGate(q, 0.9802423655461961, 6);
  sqcRYGate(q, 0.032857109715790145, 7);
  sqcRZGate(q, 3.090777678318901, 7);
  sqcRYGate(q, -3.0095078753728868, 8);
  sqcRZGate(q, 0.7951066450232794, 8);
  sqcRYGate(q, -3.131579186031421, 9);
  sqcRZGate(q, 0.8785872708394721, 9);
  sqcRYGate(q, -2.966632999308633, 10);
  sqcRZGate(q, -0.44529250934218717, 10);
  sqcRYGate(q, -3.1353687403392696, 11);
  sqcRZGate(q, -1.8546672215254907, 11);
  sqcRYGate(q, 0.07523815454349002, 12);
  sqcRZGate(q, -1.3391991951984916, 12);
  sqcRYGate(q, -0.005187973927558431, 13);
  sqcRZGate(q, -2.4201948239550406, 13);
  sqcRYGate(q, 3.020281089766739, 14);
  sqcRZGate(q, 1.8203961149519001, 14);
  sqcRYGate(q, -1.3882048788443038, 15);
  sqcRZGate(q, 2.8530711839426095, 15);
  sqcRYGate(q, -0.024355338454321362, 16);
  sqcRZGate(q, -1.745747426716859, 16);
  sqcRYGate(q, 2.459562533737536, 17);
  sqcRZGate(q, 1.676973214441328, 17);
  sqcRYGate(q, -0.7261097734888535, 18);
  sqcRZGate(q, 2.0790270803132826, 18);
  sqcRYGate(q, 1.8999479892122322, 19);
  sqcRZGate(q, -2.985763110669683, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.4368540493616564, 0);
  sqcRZGate(q, -1.9717331644297225, 0);
  sqcRYGate(q, -0.10234541418391774, 1);
  sqcRZGate(q, 1.9059581831258683, 1);
  sqcRYGate(q, -0.002737923688369372, 2);
  sqcRZGate(q, -0.0015366110930781218, 2);
  sqcRYGate(q, -0.005850831227605656, 3);
  sqcRZGate(q, 2.572778564640794, 3);
  sqcRYGate(q, -1.3609453502730187, 4);
  sqcRZGate(q, 2.424641184149651, 4);
  sqcRYGate(q, 3.1374471477089574, 5);
  sqcRZGate(q, -0.7931359275231683, 5);
  sqcRYGate(q, -3.1114463223409645, 6);
  sqcRZGate(q, -2.2004315774843217, 6);
  sqcRYGate(q, 1.2034258693487192, 7);
  sqcRZGate(q, 0.4043248724175399, 7);
  sqcRYGate(q, -2.807947242624014, 8);
  sqcRZGate(q, -0.34301661033359654, 8);
  sqcRYGate(q, -3.0453941326061775, 9);
  sqcRZGate(q, -0.6785679783244882, 9);
  sqcRYGate(q, -2.0658499625520674, 10);
  sqcRZGate(q, -2.698452847028094, 10);
  sqcRYGate(q, 2.6548621102996295, 11);
  sqcRZGate(q, 1.4378118648391778, 11);
  sqcRYGate(q, -0.37958518433903704, 12);
  sqcRZGate(q, 1.0520343151766065, 12);
  sqcRYGate(q, -1.614030881978916, 13);
  sqcRZGate(q, 0.39001191453066664, 13);
  sqcRYGate(q, 1.4991113694387619, 14);
  sqcRZGate(q, 2.2875022267605867, 14);
  sqcRYGate(q, -1.8796507697467382, 15);
  sqcRZGate(q, 3.1292740320285377, 15);
  sqcRYGate(q, 1.845405487422079, 16);
  sqcRZGate(q, 1.732437686640411, 16);
  sqcRYGate(q, -3.034949754556231, 17);
  sqcRZGate(q, -3.072597220917978, 17);
  sqcRYGate(q, -0.2527836294077481, 18);
  sqcRZGate(q, 2.60616474958426, 18);
  sqcRYGate(q, 2.936475871224753, 19);
  sqcRZGate(q, 2.7306904124172284, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.7933273240726594, 0);
  sqcRZGate(q, -0.2888545111382026, 0);
  sqcRYGate(q, 2.6743621730244382, 1);
  sqcRZGate(q, -1.085695125953774, 1);
  sqcRYGate(q, 0.6206322650930283, 2);
  sqcRZGate(q, 1.1844849413893188, 2);
  sqcRYGate(q, -2.871760367133993, 3);
  sqcRZGate(q, -2.2876458476430446, 3);
  sqcRYGate(q, -0.596429324652247, 4);
  sqcRZGate(q, 0.263547355932431, 4);
  sqcRYGate(q, 3.031770761904556, 5);
  sqcRZGate(q, 3.1116951766448024, 5);
  sqcRYGate(q, 1.810841210872942, 6);
  sqcRZGate(q, 0.11617356664192356, 6);
  sqcRYGate(q, -3.1092397428134415, 7);
  sqcRZGate(q, -0.35785153341922243, 7);
  sqcRYGate(q, -0.020307692347022337, 8);
  sqcRZGate(q, 1.4747475672466097, 8);
  sqcRYGate(q, -0.08687673283508222, 9);
  sqcRZGate(q, -0.08970982272917817, 9);
  sqcRYGate(q, 2.8216611634836717, 10);
  sqcRZGate(q, -2.896273554727942, 10);
  sqcRYGate(q, 3.042489912350209, 11);
  sqcRZGate(q, 2.008241374327663, 11);
  sqcRYGate(q, -3.0889660622813935, 12);
  sqcRZGate(q, 0.21877065947615645, 12);
  sqcRYGate(q, -0.10141828120007901, 13);
  sqcRZGate(q, 0.048545732312266165, 13);
  sqcRYGate(q, -0.056415982400639386, 14);
  sqcRZGate(q, 0.15657076118172686, 14);
  sqcRYGate(q, -3.1400554910821996, 15);
  sqcRZGate(q, 2.9845865941649072, 15);
  sqcRYGate(q, -0.0020270504457779704, 16);
  sqcRZGate(q, -1.4892121844178596, 16);
  sqcRYGate(q, 0.0016553597969002352, 17);
  sqcRZGate(q, -2.037575931517887, 17);
  sqcRYGate(q, 2.702110354155324, 18);
  sqcRZGate(q, 1.7612942700126002, 18);
  sqcRYGate(q, 1.4533859240007425, 19);
  sqcRZGate(q, 1.9106849816267946, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.096985220908932, 0);
  sqcRZGate(q, 0.7271329654333204, 0);
  sqcRYGate(q, 2.4595042279900468, 1);
  sqcRZGate(q, -2.8041335546510964, 1);
  sqcRYGate(q, 0.015294001943068736, 2);
  sqcRZGate(q, 1.5225835205175537, 2);
  sqcRYGate(q, -3.124504526570522, 3);
  sqcRZGate(q, 0.685715124360276, 3);
  sqcRYGate(q, 3.0008583723863738, 4);
  sqcRZGate(q, -2.5301288603551306, 4);
  sqcRYGate(q, 1.5712843416515767, 5);
  sqcRZGate(q, -2.794042983654908, 5);
  sqcRYGate(q, -1.6815047188130121, 6);
  sqcRZGate(q, -0.3014328713404108, 6);
  sqcRYGate(q, 0.7904902144446989, 7);
  sqcRZGate(q, 1.45420091232999, 7);
  sqcRYGate(q, -1.3326598476130056, 8);
  sqcRZGate(q, -0.27848101984303764, 8);
  sqcRYGate(q, -1.1904028001160267, 9);
  sqcRZGate(q, -0.7205614259299713, 9);
  sqcRYGate(q, -2.364048585592787, 10);
  sqcRZGate(q, -0.8292736806901213, 10);
  sqcRYGate(q, -0.5068889298051807, 11);
  sqcRZGate(q, 1.478165316845364, 11);
  sqcRYGate(q, 0.15093898894212351, 12);
  sqcRZGate(q, 0.05022130884037246, 12);
  sqcRYGate(q, 1.0680220399782039, 13);
  sqcRZGate(q, 1.7825638914740392, 13);
  sqcRYGate(q, 0.11726541782118169, 14);
  sqcRZGate(q, 2.190434510367327, 14);
  sqcRYGate(q, 1.401766462258471, 15);
  sqcRZGate(q, -1.592350526964039, 15);
  sqcRYGate(q, 0.2834292348207366, 16);
  sqcRZGate(q, 2.8059156285464866, 16);
  sqcRYGate(q, -1.1498947102073398, 17);
  sqcRZGate(q, 0.918168078898951, 17);
  sqcRYGate(q, 0.33437220859277156, 18);
  sqcRZGate(q, -1.559217596901422, 18);
  sqcRYGate(q, -2.009188475381114, 19);
  sqcRZGate(q, 2.481072522943334, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.43308958442920553, 0);
  sqcRZGate(q, 1.858833939776364, 0);
  sqcRYGate(q, -2.666088471026797, 1);
  sqcRZGate(q, 0.016969171249475497, 1);
  sqcRYGate(q, 2.9168729649970384, 2);
  sqcRZGate(q, -0.32598975896848825, 2);
  sqcRYGate(q, -3.064461789802129, 3);
  sqcRZGate(q, 1.424091722246053, 3);
  sqcRYGate(q, 1.5703134801936427, 4);
  sqcRZGate(q, 1.091041154826704, 4);
  sqcRYGate(q, 3.0578158518520886, 5);
  sqcRZGate(q, -2.7058684276183906, 5);
  sqcRYGate(q, 3.0565858734898463, 6);
  sqcRZGate(q, -2.4986951064284497, 6);
  sqcRYGate(q, -0.011163949063460521, 7);
  sqcRZGate(q, 3.011290542298941, 7);
  sqcRYGate(q, 0.05352990262653635, 8);
  sqcRZGate(q, -1.9217846553522513, 8);
  sqcRYGate(q, 0.03792890397370119, 9);
  sqcRZGate(q, -2.2560834686111892, 9);
  sqcRYGate(q, 3.128286608020918, 10);
  sqcRZGate(q, -1.3617696958641083, 10);
  sqcRYGate(q, -3.1236326639177023, 11);
  sqcRZGate(q, -2.915432089569354, 11);
  sqcRYGate(q, 2.947725370530864, 12);
  sqcRZGate(q, -1.7270222518057436, 12);
  sqcRYGate(q, 0.25062505242696465, 13);
  sqcRZGate(q, 0.48800778728565, 13);
  sqcRYGate(q, 0.010361678333048907, 14);
  sqcRZGate(q, 1.1710370145501612, 14);
  sqcRYGate(q, 0.06534170888766894, 15);
  sqcRZGate(q, -0.8796902728562, 15);
  sqcRYGate(q, -0.0015699523491168321, 16);
  sqcRZGate(q, 3.0084050144878343, 16);
  sqcRYGate(q, 1.5715658743999201, 17);
  sqcRZGate(q, -1.27662942970446, 17);
  sqcRYGate(q, -2.048652715558984, 18);
  sqcRZGate(q, 1.3689636399814478, 18);
  sqcRYGate(q, 2.7727299938238703, 19);
  sqcRZGate(q, 1.7152750769230443, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.243147454850505, 0);
  sqcRZGate(q, 0.7392675268478927, 0);
  sqcRYGate(q, -2.347079335989026, 1);
  sqcRZGate(q, 1.4089378937042896, 1);
  sqcRYGate(q, 3.1118357598144986, 2);
  sqcRZGate(q, -2.4546141787937903, 2);
  sqcRYGate(q, -1.5707958498245245, 3);
  sqcRZGate(q, 1.1611768276976357, 3);
  sqcRYGate(q, -2.5524870130942285, 4);
  sqcRZGate(q, 2.9632156658536797, 4);
  sqcRYGate(q, -1.9247659597342457, 5);
  sqcRZGate(q, -2.4096304276417793, 5);
  sqcRYGate(q, -3.03784619337289, 6);
  sqcRZGate(q, 0.4480769209033948, 6);
  sqcRYGate(q, 1.5954666172569008, 7);
  sqcRZGate(q, -2.5535016410482956, 7);
  sqcRYGate(q, 1.9331793207200418, 8);
  sqcRZGate(q, 3.093241049102411, 8);
  sqcRYGate(q, -2.0173811262536483, 9);
  sqcRZGate(q, -0.5522216500995305, 9);
  sqcRYGate(q, -0.44775361454214135, 10);
  sqcRZGate(q, 2.2238455213786734, 10);
  sqcRYGate(q, -0.024191174505648227, 11);
  sqcRZGate(q, 0.8339155561687388, 11);
  sqcRYGate(q, -2.9087152041384203, 12);
  sqcRZGate(q, -1.455036103035324, 12);
  sqcRYGate(q, -0.7610781294946866, 13);
  sqcRZGate(q, 0.5713915602626836, 13);
  sqcRYGate(q, 0.10689893314308377, 14);
  sqcRZGate(q, -0.12482453977198027, 14);
  sqcRYGate(q, 2.7565178787811413, 15);
  sqcRZGate(q, -0.3789333833069666, 15);
  sqcRYGate(q, 3.1406821663774758, 16);
  sqcRZGate(q, -0.9931430629603151, 16);
  sqcRYGate(q, 1.2374622579291268, 17);
  sqcRZGate(q, -2.9897995071198906, 17);
  sqcRYGate(q, 1.5703569558614001, 18);
  sqcRZGate(q, -2.4446189760404726, 18);
  sqcRYGate(q, 0.45670591596927856, 19);
  sqcRZGate(q, -0.31363356890793265, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.7360077022374272, 0);
  sqcRZGate(q, 1.0613541096265242, 0);
  sqcRYGate(q, 3.046808934414451, 1);
  sqcRZGate(q, 1.5574428567207237, 1);
  sqcRYGate(q, -1.5707980409431208, 2);
  sqcRZGate(q, 2.3640972470452715, 2);
  sqcRYGate(q, 3.1234434872204506, 3);
  sqcRZGate(q, -2.0448615467195577, 3);
  sqcRYGate(q, 0.04484594270136544, 4);
  sqcRZGate(q, -0.00860486223369783, 4);
  sqcRYGate(q, 0.07762398299755979, 5);
  sqcRZGate(q, 3.0915075758223916, 5);
  sqcRYGate(q, -0.40451406814221613, 6);
  sqcRZGate(q, 0.03531342554413279, 6);
  sqcRYGate(q, 3.1294152406354265, 7);
  sqcRZGate(q, -2.3311049843539067, 7);
  sqcRYGate(q, 3.07033313096858, 8);
  sqcRZGate(q, 0.35026760432564963, 8);
  sqcRYGate(q, 0.03620846177854808, 9);
  sqcRZGate(q, -2.7552576435108227, 9);
  sqcRYGate(q, -3.084853153364469, 10);
  sqcRZGate(q, -1.0275994598228495, 10);
  sqcRYGate(q, -3.1313796010573256, 11);
  sqcRZGate(q, 2.911565224950521, 11);
  sqcRYGate(q, 0.05566740070803461, 12);
  sqcRZGate(q, 1.6663239309336344, 12);
  sqcRYGate(q, -0.04886816498925307, 13);
  sqcRZGate(q, 2.871386220156166, 13);
  sqcRYGate(q, 3.0815935446412204, 14);
  sqcRZGate(q, 0.4573817582034811, 14);
  sqcRYGate(q, -3.068286252594106, 15);
  sqcRZGate(q, 2.0339154288808343, 15);
  sqcRYGate(q, 2.7398386869399682, 16);
  sqcRZGate(q, -0.014285157935124115, 16);
  sqcRYGate(q, -3.0020746413120714, 17);
  sqcRZGate(q, 0.2863717589431056, 17);
  sqcRYGate(q, -0.5048812510289595, 18);
  sqcRZGate(q, -0.7269124678176366, 18);
  sqcRYGate(q, 2.02619465083192, 19);
  sqcRZGate(q, -1.098848389455429, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.6296546174659172, 0);
  sqcRZGate(q, 0.7643070353629842, 0);
  sqcRYGate(q, -1.570802689794512, 1);
  sqcRZGate(q, -2.808114903124587, 1);
  sqcRYGate(q, 2.783056908624912, 2);
  sqcRZGate(q, 0.9807518904506473, 2);
  sqcRYGate(q, -1.2083153287355577, 3);
  sqcRZGate(q, -1.9308407720717335, 3);
  sqcRYGate(q, -0.6203226953794713, 4);
  sqcRZGate(q, -0.22750420779374636, 4);
  sqcRYGate(q, -0.04872862124397148, 5);
  sqcRZGate(q, 2.0507488308331476, 5);
  sqcRYGate(q, 1.74066360250712, 6);
  sqcRZGate(q, -3.1163784795843674, 6);
  sqcRYGate(q, -0.09828102063729008, 7);
  sqcRZGate(q, -2.0273726747674816, 7);
  sqcRYGate(q, 1.3903993934174788, 8);
  sqcRZGate(q, 0.28346938901803514, 8);
  sqcRYGate(q, 0.554101285448799, 9);
  sqcRZGate(q, 3.103714651414323, 9);
  sqcRYGate(q, -2.1741074957120397, 10);
  sqcRZGate(q, -1.5300944418105331, 10);
  sqcRYGate(q, -1.9160121727677442, 11);
  sqcRZGate(q, -2.6102114255359266, 11);
  sqcRYGate(q, 0.16703741269943703, 12);
  sqcRZGate(q, -1.9872577653504644, 12);
  sqcRYGate(q, -3.025498356716014, 13);
  sqcRZGate(q, -2.896295838563683, 13);
  sqcRYGate(q, -3.025638915705133, 14);
  sqcRZGate(q, -0.10488950029124341, 14);
  sqcRYGate(q, -3.0187925246687777, 15);
  sqcRZGate(q, 2.2440729499368164, 15);
  sqcRYGate(q, -3.0460869672183692, 16);
  sqcRZGate(q, -0.13061494312018906, 16);
  sqcRYGate(q, -0.0031223041574905963, 17);
  sqcRZGate(q, -0.9368944817002599, 17);
  sqcRYGate(q, -0.0020015484697526254, 18);
  sqcRZGate(q, 0.3802593091232659, 18);
  sqcRYGate(q, 0.9675164613219231, 19);
  sqcRZGate(q, -3.1409200750866426, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5707944989597815, 0);
  sqcRZGate(q, -0.9503905080332834, 0);
  sqcRYGate(q, -0.1801714422894154, 1);
  sqcRZGate(q, -1.1460017622810819, 1);
  sqcRYGate(q, 0.009114778107353219, 2);
  sqcRZGate(q, 1.8584381553142177, 2);
  sqcRYGate(q, -3.0903099925304423, 3);
  sqcRZGate(q, -1.3359954823603823, 3);
  sqcRYGate(q, -0.04195288070335113, 4);
  sqcRZGate(q, -1.4029142595307595, 4);
  sqcRYGate(q, 0.016315555804384464, 5);
  sqcRZGate(q, -2.9152463674666094, 5);
  sqcRYGate(q, 2.7237082642939705, 6);
  sqcRZGate(q, -2.341245794154854, 6);
  sqcRYGate(q, -0.0357529692540135, 7);
  sqcRZGate(q, -2.2822095063753762, 7);
  sqcRYGate(q, -3.056490139211365, 8);
  sqcRZGate(q, 2.8584399948326285, 8);
  sqcRYGate(q, 2.788248867930457, 9);
  sqcRZGate(q, 2.175557488495639, 9);
  sqcRYGate(q, 0.004493471222697078, 10);
  sqcRZGate(q, -0.14685880392882414, 10);
  sqcRYGate(q, 3.107759182836181, 11);
  sqcRZGate(q, -3.07501758828065, 11);
  sqcRYGate(q, -3.0831534877278384, 12);
  sqcRZGate(q, -2.7643498828936237, 12);
  sqcRYGate(q, 2.8368112888612123, 13);
  sqcRZGate(q, -2.9490696467454627, 13);
  sqcRYGate(q, -3.132045018771186, 14);
  sqcRZGate(q, 1.9232271604770503, 14);
  sqcRYGate(q, -0.060327137121258374, 15);
  sqcRZGate(q, -2.2418878324480986, 15);
  sqcRYGate(q, -0.4007769760112156, 16);
  sqcRZGate(q, 2.88541586210118, 16);
  sqcRYGate(q, -1.4600399479828687, 17);
  sqcRZGate(q, 2.342570872080105, 17);
  sqcRYGate(q, 0.19827870423216334, 18);
  sqcRZGate(q, -2.0540726137585055, 18);
  sqcRYGate(q, -2.3194927929375027, 19);
  sqcRZGate(q, 3.060674531452682, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.4235889627641633, 0);
  sqcRZGate(q, 2.7789074478326734, 0);
  sqcRYGate(q, 2.6635694522852007, 1);
  sqcRZGate(q, -2.023251603149773, 1);
  sqcRYGate(q, 1.9107302620699746, 2);
  sqcRZGate(q, 0.3026576055226143, 2);
  sqcRYGate(q, -2.1675589753439737, 3);
  sqcRZGate(q, -2.292786795550936, 3);
  sqcRYGate(q, 2.026730326416626, 4);
  sqcRZGate(q, -1.0443142723016778, 4);
  sqcRYGate(q, -1.1225439158828392, 5);
  sqcRZGate(q, -1.2134979216380588, 5);
  sqcRYGate(q, -0.7175294699752914, 6);
  sqcRZGate(q, -0.4474157956006145, 6);
  sqcRYGate(q, 2.285116213627711, 7);
  sqcRZGate(q, -0.9735230146389665, 7);
  sqcRYGate(q, 2.2064226996532894, 8);
  sqcRZGate(q, 1.4557145222581305, 8);
  sqcRYGate(q, 2.449455699329631, 9);
  sqcRZGate(q, 2.5902107078254537, 9);
  sqcRYGate(q, 1.9328845501794378, 10);
  sqcRZGate(q, -1.6384594245382214, 10);
  sqcRYGate(q, 2.957875893542411, 11);
  sqcRZGate(q, -2.0384657298232876, 11);
  sqcRYGate(q, -1.7574307793698427, 12);
  sqcRZGate(q, -0.0520823178696137, 12);
  sqcRYGate(q, -0.5326256525185157, 13);
  sqcRZGate(q, -0.3383277073981983, 13);
  sqcRYGate(q, 1.7229891528814731, 14);
  sqcRZGate(q, 1.3753894852037831, 14);
  sqcRYGate(q, 1.9387635960684242, 15);
  sqcRZGate(q, 1.428337309029073, 15);
  sqcRYGate(q, -1.5772220366462646, 16);
  sqcRZGate(q, 2.9977955782756305, 16);
  sqcRYGate(q, -1.502227253979279, 17);
  sqcRZGate(q, 2.9436718275507037, 17);
  sqcRYGate(q, 1.0839584355485279, 18);
  sqcRZGate(q, 1.2376766221427449, 18);
  sqcRYGate(q, -1.320476982483274, 19);
  sqcRZGate(q, -2.622539007163715, 19);

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
