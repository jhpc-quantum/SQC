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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 2.4463278969562166, 0);
  sqcRZGate(q, 0.3899470668157165, 0);
  sqcRYGate(q, -0.17559424795503098, 1);
  sqcRZGate(q, 1.8678674552944994, 1);
  sqcRYGate(q, 0.07550323004530846, 2);
  sqcRZGate(q, 1.9659443124905025, 2);
  sqcRYGate(q, 0.0033688316716302675, 3);
  sqcRZGate(q, 1.7428296379989048, 3);
  sqcRYGate(q, -1.506107229836615, 4);
  sqcRZGate(q, 1.7811571249755804, 4);
  sqcRYGate(q, 0.08281179043451867, 5);
  sqcRZGate(q, 1.0925063387067242, 5);
  sqcRYGate(q, -0.01837036361589319, 6);
  sqcRZGate(q, -2.6394409129574505, 6);
  sqcRYGate(q, -1.4832030688193782, 7);
  sqcRZGate(q, 3.089033364273458, 7);
  sqcRYGate(q, -0.000312860091987055, 8);
  sqcRZGate(q, -0.979102487885119, 8);
  sqcRYGate(q, 1.5848073906222513, 9);
  sqcRZGate(q, -0.22355540767182494, 9);
  sqcRYGate(q, -1.7043450645716305, 10);
  sqcRZGate(q, 1.1812155490725733, 10);
  sqcRYGate(q, 0.0005726487353607698, 11);
  sqcRZGate(q, 0.3398489820695181, 11);
  sqcRYGate(q, 3.1415714087784026, 12);
  sqcRZGate(q, 2.2008486142863593, 12);
  sqcRYGate(q, 3.137614381105485, 13);
  sqcRZGate(q, -0.32877201801493305, 13);
  sqcRYGate(q, 1.9854864374227086, 14);
  sqcRZGate(q, -2.0365104844918407, 14);
  sqcRYGate(q, -1.5416222155741854, 15);
  sqcRZGate(q, -2.593744664546171, 15);
  sqcRYGate(q, 1.5875620757630464, 16);
  sqcRZGate(q, -0.532445277692265, 16);
  sqcRYGate(q, 1.5472104477734898, 17);
  sqcRZGate(q, -1.653501345926091, 17);
  sqcRYGate(q, -1.5896925740376842, 18);
  sqcRZGate(q, -2.955229908364814, 18);
  sqcRYGate(q, 3.140789263179858, 19);
  sqcRZGate(q, -2.187207158932445, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.5120716551513027, 0);
  sqcRZGate(q, 0.23056386175068333, 0);
  sqcRYGate(q, -1.6592744740353362, 1);
  sqcRZGate(q, -2.560135572210868, 1);
  sqcRYGate(q, -1.7297045613240838, 2);
  sqcRZGate(q, -1.526971959724528, 2);
  sqcRYGate(q, 3.138287407646454, 3);
  sqcRZGate(q, 1.345266452531128, 3);
  sqcRYGate(q, -2.9243485103686586, 4);
  sqcRZGate(q, -3.1343098800566285, 4);
  sqcRYGate(q, 3.1386888908004345, 5);
  sqcRZGate(q, -0.4418369036913212, 5);
  sqcRYGate(q, -1.604676002833573, 6);
  sqcRZGate(q, 1.2819141450026406, 6);
  sqcRYGate(q, -1.2252821662389992, 7);
  sqcRZGate(q, -1.5279318393847472, 7);
  sqcRYGate(q, 3.134852314400439, 8);
  sqcRZGate(q, 0.46443645623014973, 8);
  sqcRYGate(q, -0.20117639595433712, 9);
  sqcRZGate(q, 0.21023791113424403, 9);
  sqcRYGate(q, 1.5490688386153, 10);
  sqcRZGate(q, 2.457670326761357, 10);
  sqcRYGate(q, -3.140109482891796, 11);
  sqcRZGate(q, -2.3285289174650683, 11);
  sqcRYGate(q, 2.161207577599273, 12);
  sqcRZGate(q, -0.881473401203718, 12);
  sqcRYGate(q, -3.1413536204353436, 13);
  sqcRZGate(q, 2.4984065847729964, 13);
  sqcRYGate(q, 2.0362671273222235, 14);
  sqcRZGate(q, -0.320895184076716, 14);
  sqcRYGate(q, 0.037943685003510405, 15);
  sqcRZGate(q, 1.0845020368721032, 15);
  sqcRYGate(q, 1.5136592214046198, 16);
  sqcRZGate(q, 0.8986808721734931, 16);
  sqcRYGate(q, 2.6904412164978506, 17);
  sqcRZGate(q, 2.4310196426749595, 17);
  sqcRYGate(q, 1.5152137888868928, 18);
  sqcRZGate(q, -1.257174214152779, 18);
  sqcRYGate(q, -3.1290588777792054, 19);
  sqcRZGate(q, 1.019536838523477, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.0002091356315823134, 0);
  sqcRZGate(q, 1.2207876554034502, 0);
  sqcRYGate(q, -2.623406491532797, 1);
  sqcRZGate(q, 2.267252165513117, 1);
  sqcRYGate(q, 2.080673397407871, 2);
  sqcRZGate(q, 1.6150930642224766, 2);
  sqcRYGate(q, -0.2409392700427384, 3);
  sqcRZGate(q, 2.670298598450579, 3);
  sqcRYGate(q, 3.140589354228874, 4);
  sqcRZGate(q, -1.1733117288447872, 4);
  sqcRYGate(q, -0.015702094095987995, 5);
  sqcRZGate(q, 2.752619041143707, 5);
  sqcRYGate(q, 2.8860781534666446, 6);
  sqcRZGate(q, -0.010244408532190441, 6);
  sqcRYGate(q, -0.8946141851713101, 7);
  sqcRZGate(q, -2.801666222687793, 7);
  sqcRYGate(q, 3.134916479126437, 8);
  sqcRZGate(q, -2.2185351797139985, 8);
  sqcRYGate(q, 1.4775304114828023, 9);
  sqcRZGate(q, 1.7457904154295845, 9);
  sqcRYGate(q, -2.963511191457707, 10);
  sqcRZGate(q, 1.1067031321431606, 10);
  sqcRYGate(q, -0.001579569122768909, 11);
  sqcRZGate(q, -1.1386566203645743, 11);
  sqcRYGate(q, 3.1392193859321207, 12);
  sqcRZGate(q, 2.2963387635350423, 12);
  sqcRYGate(q, -0.001281839118263406, 13);
  sqcRZGate(q, -0.5574848124532605, 13);
  sqcRYGate(q, 2.1166487366227843e-05, 14);
  sqcRZGate(q, 0.3862990302912755, 14);
  sqcRYGate(q, 1.4709068207585192, 15);
  sqcRZGate(q, -1.3482446144463274, 15);
  sqcRYGate(q, 0.0016125458983689003, 16);
  sqcRZGate(q, -0.8965258785915177, 16);
  sqcRYGate(q, -0.0030619182141835566, 17);
  sqcRZGate(q, 2.9290025137658344, 17);
  sqcRYGate(q, 0.21948515232420518, 18);
  sqcRZGate(q, 1.216197171096045, 18);
  sqcRYGate(q, -0.0026880348748097305, 19);
  sqcRZGate(q, 0.13758525620649373, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.2725844908234212, 0);
  sqcRZGate(q, -2.6894081868586777, 0);
  sqcRYGate(q, 0.4601013454477423, 1);
  sqcRZGate(q, -0.13953679965668364, 1);
  sqcRYGate(q, -0.5180896498915297, 2);
  sqcRZGate(q, 1.4264185091421915, 2);
  sqcRYGate(q, -0.007808499184284062, 3);
  sqcRZGate(q, 2.1302063386919023, 3);
  sqcRYGate(q, -0.0182964605380286, 4);
  sqcRZGate(q, -1.4114946304145075, 4);
  sqcRYGate(q, 3.0748179415368724, 5);
  sqcRZGate(q, -2.1517169730094925, 5);
  sqcRYGate(q, -2.0078865509749995, 6);
  sqcRZGate(q, 2.1917488002890657, 6);
  sqcRYGate(q, -3.140189854895562, 7);
  sqcRZGate(q, 0.3379225079725613, 7);
  sqcRYGate(q, 1.2124956124347124, 8);
  sqcRZGate(q, 2.6030884030355326, 8);
  sqcRYGate(q, -1.1244848831998582, 9);
  sqcRZGate(q, -1.426503313036622, 9);
  sqcRYGate(q, 1.82975062970488, 10);
  sqcRZGate(q, -1.4361350927064214, 10);
  sqcRYGate(q, 1.2392693476968404, 11);
  sqcRZGate(q, 2.797323643579074, 11);
  sqcRYGate(q, 3.0616977693963774, 12);
  sqcRZGate(q, 2.611843231266437, 12);
  sqcRYGate(q, -1.589519778588433, 13);
  sqcRZGate(q, -2.306795995296664, 13);
  sqcRYGate(q, -0.34850627823279756, 14);
  sqcRZGate(q, -2.4958935105116042, 14);
  sqcRYGate(q, 3.059780547996316, 15);
  sqcRZGate(q, -2.728838659460193, 15);
  sqcRYGate(q, -1.5163372473103678, 16);
  sqcRZGate(q, 0.05716022379693709, 16);
  sqcRYGate(q, 1.7953084875547232, 17);
  sqcRZGate(q, 1.2246047999987557, 17);
  sqcRYGate(q, -1.5003234530237002, 18);
  sqcRZGate(q, 2.9555846256700202, 18);
  sqcRYGate(q, 3.0599916421693956, 19);
  sqcRZGate(q, -0.4207440344355842, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.13373381640043203, 0);
  sqcRZGate(q, 3.1203205795830162, 0);
  sqcRYGate(q, 1.671104495914438, 1);
  sqcRZGate(q, 0.31209047681229674, 1);
  sqcRYGate(q, -0.45166389316423294, 2);
  sqcRZGate(q, -0.3519512911960492, 2);
  sqcRYGate(q, 3.034550415870941, 3);
  sqcRZGate(q, -1.2513008058943336, 3);
  sqcRYGate(q, -0.0024201901056290355, 4);
  sqcRZGate(q, 1.8010372040591163, 4);
  sqcRYGate(q, 3.114415874342794, 5);
  sqcRZGate(q, -0.5799013220159381, 5);
  sqcRYGate(q, 0.0015278977224717496, 6);
  sqcRZGate(q, -0.48503703419718985, 6);
  sqcRYGate(q, -0.9017386523928035, 7);
  sqcRZGate(q, 0.35771803198036695, 7);
  sqcRYGate(q, 0.003314558827139713, 8);
  sqcRZGate(q, -1.1602643223083233, 8);
  sqcRYGate(q, -3.135148384044521, 9);
  sqcRZGate(q, 0.09857597179294231, 9);
  sqcRYGate(q, -3.1409468384931243, 10);
  sqcRZGate(q, 1.140556913764338, 10);
  sqcRYGate(q, 3.141551608583226, 11);
  sqcRZGate(q, -0.4660749629381904, 11);
  sqcRYGate(q, -0.4575288738532305, 12);
  sqcRZGate(q, -1.6164993338679938, 12);
  sqcRYGate(q, -0.0009915150949835194, 13);
  sqcRZGate(q, -2.1732905426666402, 13);
  sqcRYGate(q, 3.139626476184202, 14);
  sqcRZGate(q, -0.7018668165960946, 14);
  sqcRYGate(q, -3.139170978035231, 15);
  sqcRZGate(q, -1.3814597547318446, 15);
  sqcRYGate(q, -0.10160632761217606, 16);
  sqcRZGate(q, 0.6703739999913328, 16);
  sqcRYGate(q, 1.7727598586266118, 17);
  sqcRZGate(q, 2.9530948465737996, 17);
  sqcRYGate(q, -1.5553882655844464, 18);
  sqcRZGate(q, -1.9915086237549238, 18);
  sqcRYGate(q, -0.0166052290830887, 19);
  sqcRZGate(q, -0.49193763059171675, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.6333730848290324, 0);
  sqcRZGate(q, 2.9064882324747345, 0);
  sqcRYGate(q, 2.9756193762110907, 1);
  sqcRZGate(q, 2.1280052986564826, 1);
  sqcRYGate(q, -0.28362835065355263, 2);
  sqcRZGate(q, 1.4648282033896354, 2);
  sqcRYGate(q, 0.009107943240191041, 3);
  sqcRZGate(q, 2.6052283031283276, 3);
  sqcRYGate(q, -2.726084124006619, 4);
  sqcRZGate(q, 0.7316386352042388, 4);
  sqcRYGate(q, -1.6130619941665199, 5);
  sqcRZGate(q, 1.7218351581037676, 5);
  sqcRYGate(q, -1.5286072190089506, 6);
  sqcRZGate(q, -0.3645179754416132, 6);
  sqcRYGate(q, -3.1063130302012474, 7);
  sqcRZGate(q, 0.3424476553149053, 7);
  sqcRYGate(q, 1.2662775821747445, 8);
  sqcRZGate(q, -2.882594211192266, 8);
  sqcRYGate(q, 1.5795897485402226, 9);
  sqcRZGate(q, 1.5427615951028297, 9);
  sqcRYGate(q, 3.1358495204418277, 10);
  sqcRZGate(q, 2.7583858204271396, 10);
  sqcRYGate(q, -1.8175340027392837, 11);
  sqcRZGate(q, 1.0754270036856466, 11);
  sqcRYGate(q, 1.2879891701907136, 12);
  sqcRZGate(q, 1.1620775906929504, 12);
  sqcRYGate(q, -1.2768601627666145, 13);
  sqcRZGate(q, -1.5393082956478996, 13);
  sqcRYGate(q, 0.6384501987659696, 14);
  sqcRZGate(q, 0.41180859712211243, 14);
  sqcRYGate(q, -0.9598006956477059, 15);
  sqcRZGate(q, 0.30522324873166795, 15);
  sqcRYGate(q, -3.0905780853635814, 16);
  sqcRZGate(q, 0.153265239117232, 16);
  sqcRYGate(q, 0.3154159682395225, 17);
  sqcRZGate(q, -2.337554915017248, 17);
  sqcRYGate(q, -0.01459108910465231, 18);
  sqcRZGate(q, 2.51532025696198, 18);
  sqcRYGate(q, -1.4977004064572828, 19);
  sqcRZGate(q, 3.1317598277028917, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 2.9992333477571003, 0);
  sqcRZGate(q, 0.8160407345928017, 0);
  sqcRYGate(q, -1.4596830837459782, 1);
  sqcRZGate(q, -1.4981894012416543, 1);
  sqcRYGate(q, -1.2116563031475254, 2);
  sqcRZGate(q, -2.925636393236785, 2);
  sqcRYGate(q, -3.1365926330462552, 3);
  sqcRZGate(q, -1.0334263894379923, 3);
  sqcRYGate(q, -3.141073516590412, 4);
  sqcRZGate(q, 2.3395913139372144, 4);
  sqcRYGate(q, 8.705693271542634e-05, 5);
  sqcRZGate(q, 3.079175839203336, 5);
  sqcRYGate(q, -0.0016672917264893082, 6);
  sqcRZGate(q, 0.2335927921257858, 6);
  sqcRYGate(q, 1.5134451165478657, 7);
  sqcRZGate(q, -1.5357154793039838, 7);
  sqcRYGate(q, 3.1147120292970145, 8);
  sqcRZGate(q, -1.6931006479356574, 8);
  sqcRYGate(q, 2.9347250910211278, 9);
  sqcRZGate(q, -0.6623365098011817, 9);
  sqcRYGate(q, 3.136183766432451, 10);
  sqcRZGate(q, 3.067770253422039, 10);
  sqcRYGate(q, 0.04210011826111426, 11);
  sqcRZGate(q, 2.8529239058079265, 11);
  sqcRYGate(q, -0.392692954277071, 12);
  sqcRZGate(q, -2.8827211101063686, 12);
  sqcRYGate(q, 0.018521797985536104, 13);
  sqcRZGate(q, 1.4024598855042412, 13);
  sqcRYGate(q, 0.007186798183517418, 14);
  sqcRZGate(q, -3.100098141543328, 14);
  sqcRYGate(q, -0.0004178982586865819, 15);
  sqcRZGate(q, -2.111125179050851, 15);
  sqcRYGate(q, -2.890766518214642, 16);
  sqcRZGate(q, 0.9718314740520066, 16);
  sqcRYGate(q, 1.549604314246752, 17);
  sqcRZGate(q, 1.5667219701254078, 17);
  sqcRYGate(q, -0.4526204437627239, 18);
  sqcRZGate(q, -1.2244191940033184, 18);
  sqcRYGate(q, -1.6537538657821207, 19);
  sqcRZGate(q, 2.5498458431430318, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.031330302142177587, 0);
  sqcRZGate(q, 1.9959560978029955, 0);
  sqcRYGate(q, 0.21182454608120635, 1);
  sqcRZGate(q, -1.823300800448674, 1);
  sqcRYGate(q, 0.5856322422407585, 2);
  sqcRZGate(q, 0.09999464884567968, 2);
  sqcRYGate(q, -0.3015679733025355, 3);
  sqcRZGate(q, 2.7928931543574276, 3);
  sqcRYGate(q, 0.020014887008527715, 4);
  sqcRZGate(q, -0.35920989314769886, 4);
  sqcRYGate(q, 1.5662434231043685, 5);
  sqcRZGate(q, 1.116153764231968, 5);
  sqcRYGate(q, -2.9071789740488194, 6);
  sqcRZGate(q, -2.2575216741473083, 6);
  sqcRYGate(q, 1.7121842054824867, 7);
  sqcRZGate(q, -0.00889747852046606, 7);
  sqcRYGate(q, 1.5591598346084898, 8);
  sqcRZGate(q, 0.07184239032742179, 8);
  sqcRYGate(q, -0.045204998119256816, 9);
  sqcRZGate(q, -2.8938103334728633, 9);
  sqcRYGate(q, -1.5112388171588726, 10);
  sqcRZGate(q, 3.1346924021599873, 10);
  sqcRYGate(q, -0.6625938107176538, 11);
  sqcRZGate(q, -2.9268645704106544, 11);
  sqcRYGate(q, 0.6604182835829359, 12);
  sqcRZGate(q, 1.0215917808765989, 12);
  sqcRYGate(q, -1.8451955018698545, 13);
  sqcRZGate(q, -1.4218719504247739, 13);
  sqcRYGate(q, 2.5401594683612734, 14);
  sqcRZGate(q, -0.0015211091248709425, 14);
  sqcRYGate(q, -3.1292472727323046, 15);
  sqcRZGate(q, -0.10352175113031326, 15);
  sqcRYGate(q, -0.0050859850442819265, 16);
  sqcRZGate(q, 0.7989305575340842, 16);
  sqcRYGate(q, -1.6021536593666639, 17);
  sqcRZGate(q, -1.6506969327314287, 17);
  sqcRYGate(q, 1.587073950415851, 18);
  sqcRZGate(q, 1.88813328886866, 18);
  sqcRYGate(q, -3.020833479636591, 19);
  sqcRZGate(q, 1.0513852019135965, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 3.1154210696825646, 0);
  sqcRZGate(q, 2.6452020253431616, 0);
  sqcRYGate(q, 2.9850289061272544, 1);
  sqcRZGate(q, -0.5716993311820806, 1);
  sqcRYGate(q, 2.054425395891781, 2);
  sqcRZGate(q, 1.1791503188889605, 2);
  sqcRYGate(q, 0.37076982152689286, 3);
  sqcRZGate(q, -1.1138847356562185, 3);
  sqcRYGate(q, -3.1302929167567064, 4);
  sqcRZGate(q, 1.2740505985334905, 4);
  sqcRYGate(q, 0.0007950261153609508, 5);
  sqcRZGate(q, -3.1318813958221665, 5);
  sqcRYGate(q, 0.002191683453680149, 6);
  sqcRZGate(q, 2.444297723137913, 6);
  sqcRYGate(q, 1.5639725413438825, 7);
  sqcRZGate(q, -0.11984698096960411, 7);
  sqcRYGate(q, -0.2571968740783988, 8);
  sqcRZGate(q, -2.0254774764574988, 8);
  sqcRYGate(q, 0.18560163948969569, 9);
  sqcRZGate(q, -2.589335970764414, 9);
  sqcRYGate(q, 1.5404746192198262, 10);
  sqcRZGate(q, 1.864494400796044, 10);
  sqcRYGate(q, -3.1269827697297856, 11);
  sqcRZGate(q, -2.2355590562345906, 11);
  sqcRYGate(q, 0.004598232682084063, 12);
  sqcRZGate(q, 0.09027993865164063, 12);
  sqcRYGate(q, 3.130925226306526, 13);
  sqcRZGate(q, 0.3831992390949414, 13);
  sqcRYGate(q, 3.1329949038516802, 14);
  sqcRZGate(q, 2.12994115231409, 14);
  sqcRYGate(q, -3.1197918721582165, 15);
  sqcRZGate(q, -1.2445162857952021, 15);
  sqcRYGate(q, -0.005484752165780371, 16);
  sqcRZGate(q, -0.4306335141806647, 16);
  sqcRYGate(q, -2.8543165346812973, 17);
  sqcRZGate(q, -0.2982820417837466, 17);
  sqcRYGate(q, 1.651427564763318, 18);
  sqcRZGate(q, 1.3514884821573814, 18);
  sqcRYGate(q, -2.9720380522892573, 19);
  sqcRZGate(q, -1.490411384505016, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -3.1163238682468366, 0);
  sqcRZGate(q, -3.009013167869146, 0);
  sqcRYGate(q, 0.020303007493827394, 1);
  sqcRZGate(q, 2.424197681370576, 1);
  sqcRYGate(q, 0.5870929881164475, 2);
  sqcRZGate(q, -0.02395352396788919, 2);
  sqcRYGate(q, -2.9598812393194995, 3);
  sqcRZGate(q, -1.6058901480841907, 3);
  sqcRYGate(q, 0.41396357582522625, 4);
  sqcRZGate(q, 0.8580813719962603, 4);
  sqcRYGate(q, 0.003439969849798885, 5);
  sqcRZGate(q, 1.4314099598740402, 5);
  sqcRYGate(q, 3.1366135540664297, 6);
  sqcRZGate(q, 0.4074646748540719, 6);
  sqcRYGate(q, 1.12681147021983, 7);
  sqcRZGate(q, 0.7803998746308872, 7);
  sqcRYGate(q, 3.139852693030943, 8);
  sqcRZGate(q, 0.927273027365377, 8);
  sqcRYGate(q, -1.9072380039250127, 9);
  sqcRZGate(q, -2.7076958069483714, 9);
  sqcRYGate(q, -1.1721421143960633, 10);
  sqcRZGate(q, -3.141033986489363, 10);
  sqcRYGate(q, 1.699518041399747, 11);
  sqcRZGate(q, -1.0412163264830325, 11);
  sqcRYGate(q, 1.7179944450172089, 12);
  sqcRZGate(q, -1.7234260486996433, 12);
  sqcRYGate(q, 1.450941431856987, 13);
  sqcRZGate(q, 1.3334573274842167, 13);
  sqcRYGate(q, 0.8720721644660001, 14);
  sqcRZGate(q, 0.40100319731906264, 14);
  sqcRYGate(q, -3.093934085116792, 15);
  sqcRZGate(q, 3.127922184374543, 15);
  sqcRYGate(q, -0.0031379079447590255, 16);
  sqcRZGate(q, -2.7196475531935977, 16);
  sqcRYGate(q, -0.008463117241662151, 17);
  sqcRZGate(q, -0.8472637550895463, 17);
  sqcRYGate(q, 1.371220814250592, 18);
  sqcRZGate(q, 1.8512719540744043, 18);
  sqcRYGate(q, -0.002701149744455122, 19);
  sqcRZGate(q, 0.18528630195376253, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.2687224434121065, 0);
  sqcRZGate(q, -0.3674843295121961, 0);
  sqcRYGate(q, 0.09386470782468495, 1);
  sqcRZGate(q, -0.5372538396021802, 1);
  sqcRYGate(q, -1.36450776600019, 2);
  sqcRZGate(q, -0.9264149189124735, 2);
  sqcRYGate(q, -1.5438696459093992, 3);
  sqcRZGate(q, -1.6904771514739245, 3);
  sqcRYGate(q, -0.01509917247835834, 4);
  sqcRZGate(q, 2.124050380395749, 4);
  sqcRYGate(q, -0.01704289334586573, 5);
  sqcRZGate(q, -1.923406616164898, 5);
  sqcRYGate(q, 3.1383975283974626, 6);
  sqcRZGate(q, 0.8514927756425617, 6);
  sqcRYGate(q, -2.9710361760334445, 7);
  sqcRZGate(q, -2.2658416909389745, 7);
  sqcRYGate(q, -0.06560679498522669, 8);
  sqcRZGate(q, -0.2592972675060193, 8);
  sqcRYGate(q, 0.0019053843203371557, 9);
  sqcRZGate(q, -2.413691953931964, 9);
  sqcRYGate(q, 0.28796893656217837, 10);
  sqcRZGate(q, -1.4452172066215017, 10);
  sqcRYGate(q, -0.003999720985500463, 11);
  sqcRZGate(q, 1.0413309533516495, 11);
  sqcRYGate(q, 3.137931994601048, 12);
  sqcRZGate(q, -1.6566980156329025, 12);
  sqcRYGate(q, 3.130937258551973, 13);
  sqcRZGate(q, -2.8858271393666604, 13);
  sqcRYGate(q, -0.00014215019437546772, 14);
  sqcRZGate(q, -1.7090757398940473, 14);
  sqcRYGate(q, 0.0017933319371699165, 15);
  sqcRZGate(q, 0.8951665271716054, 15);
  sqcRYGate(q, -1.949554405132301, 16);
  sqcRZGate(q, -0.3653819246474857, 16);
  sqcRYGate(q, 0.9727889420355205, 17);
  sqcRZGate(q, 0.721237957058765, 17);
  sqcRYGate(q, -2.0610898235388344, 18);
  sqcRZGate(q, 2.6913927848467156, 18);
  sqcRYGate(q, -1.7817144980283732, 19);
  sqcRZGate(q, 1.4070328458963057, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -2.019201542539685, 0);
  sqcRZGate(q, 2.4117625720872664, 0);
  sqcRYGate(q, 3.1356116819999094, 1);
  sqcRZGate(q, -1.1765927805432914, 1);
  sqcRYGate(q, 0.0006788326341444773, 2);
  sqcRZGate(q, 1.2405033215596506, 2);
  sqcRYGate(q, -0.020898634913347536, 3);
  sqcRZGate(q, 1.3615422049368027, 3);
  sqcRYGate(q, -0.7068602517135069, 4);
  sqcRZGate(q, -2.8817274134482997, 4);
  sqcRYGate(q, 0.0028701729820607294, 5);
  sqcRZGate(q, -2.056644267357215, 5);
  sqcRYGate(q, 3.1391828289135697, 6);
  sqcRZGate(q, -3.032637179717638, 6);
  sqcRYGate(q, 1.932782171689668, 7);
  sqcRZGate(q, -0.514796949303129, 7);
  sqcRYGate(q, 0.0010806776801546292, 8);
  sqcRZGate(q, 2.741328904378466, 8);
  sqcRYGate(q, -0.7610649239846793, 9);
  sqcRZGate(q, 2.1071998959530633, 9);
  sqcRYGate(q, -1.6068112003090995, 10);
  sqcRZGate(q, 1.2668863509197854, 10);
  sqcRYGate(q, 1.720926244369848, 11);
  sqcRZGate(q, -0.7903513279923099, 11);
  sqcRYGate(q, 1.6329028942809605, 12);
  sqcRZGate(q, 2.836697835806999, 12);
  sqcRYGate(q, -0.862864743121591, 13);
  sqcRZGate(q, 0.09246548827658244, 13);
  sqcRYGate(q, 3.141384262491235, 14);
  sqcRZGate(q, -2.4112556796532627, 14);
  sqcRYGate(q, -0.02203634947883519, 15);
  sqcRZGate(q, -2.2093151201953285, 15);
  sqcRYGate(q, -3.140253156291576, 16);
  sqcRZGate(q, -0.3579707583859744, 16);
  sqcRYGate(q, -0.00032728495932528756, 17);
  sqcRZGate(q, 0.10223276871327525, 17);
  sqcRYGate(q, 3.1398069918626215, 18);
  sqcRZGate(q, -0.7826615951581671, 18);
  sqcRYGate(q, 0.0020412039269848137, 19);
  sqcRZGate(q, 0.44409342434269344, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.1823266942110449, 0);
  sqcRZGate(q, -2.7784927758531723, 0);
  sqcRYGate(q, -2.591844887388184, 1);
  sqcRZGate(q, -1.157424807959035, 1);
  sqcRYGate(q, -3.1409693024935232, 2);
  sqcRZGate(q, 1.466752027289908, 2);
  sqcRYGate(q, 1.7709694802387155, 3);
  sqcRZGate(q, -0.788440999599282, 3);
  sqcRYGate(q, -0.009405994006297169, 4);
  sqcRZGate(q, -0.655347208320629, 4);
  sqcRYGate(q, 0.0023058704595122345, 5);
  sqcRZGate(q, -1.530612116567033, 5);
  sqcRYGate(q, 3.140737552392952, 6);
  sqcRZGate(q, -0.3144621507764889, 6);
  sqcRYGate(q, -3.0868290532704767, 7);
  sqcRZGate(q, 2.213288578415113, 7);
  sqcRYGate(q, 1.4975058716468448, 8);
  sqcRZGate(q, 1.6460191125944164, 8);
  sqcRYGate(q, 2.959140491980964, 9);
  sqcRZGate(q, 1.5613887659207366, 9);
  sqcRYGate(q, -1.5749799376340192, 10);
  sqcRZGate(q, 1.1387540954634885, 10);
  sqcRYGate(q, 3.1397738675569253, 11);
  sqcRZGate(q, -0.9988649434494753, 11);
  sqcRYGate(q, -3.1397673979598126, 12);
  sqcRZGate(q, 0.9923402989185324, 12);
  sqcRYGate(q, -3.1215739484372818, 13);
  sqcRZGate(q, 2.7856620878351963, 13);
  sqcRYGate(q, -0.0031205067906099095, 14);
  sqcRZGate(q, -2.7200022548233354, 14);
  sqcRYGate(q, 3.0693730923434113, 15);
  sqcRZGate(q, 1.5435778224109142, 15);
  sqcRYGate(q, 1.9723285612773842, 16);
  sqcRZGate(q, 0.7426006874384267, 16);
  sqcRYGate(q, 1.6749184738383092, 17);
  sqcRZGate(q, 0.9098660835154503, 17);
  sqcRYGate(q, -0.9565545366854371, 18);
  sqcRZGate(q, -0.6041027114300127, 18);
  sqcRYGate(q, -2.5665453902301563, 19);
  sqcRZGate(q, 0.7579589582559645, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 2.217940023916797, 0);
  sqcRZGate(q, -2.241365614690049, 0);
  sqcRYGate(q, -0.9748439302961306, 1);
  sqcRZGate(q, 0.9567841603958749, 1);
  sqcRYGate(q, 2.8161413129533788, 2);
  sqcRZGate(q, -3.0562994656195355, 2);
  sqcRYGate(q, -1.5370609816060083, 3);
  sqcRZGate(q, -2.5409000600524076, 3);
  sqcRYGate(q, 2.549967688642348, 4);
  sqcRZGate(q, 0.7669762001116301, 4);
  sqcRYGate(q, -0.06381004019017664, 5);
  sqcRZGate(q, 2.039335722201926, 5);
  sqcRYGate(q, -0.0008289470049574648, 6);
  sqcRZGate(q, 3.103319087811337, 6);
  sqcRYGate(q, 1.6516350372474582, 7);
  sqcRZGate(q, 1.8827430707162052, 7);
  sqcRYGate(q, 1.0405295486295936, 8);
  sqcRZGate(q, 3.132644859132872, 8);
  sqcRYGate(q, -1.6043898671293713, 9);
  sqcRZGate(q, -1.6126607150330692, 9);
  sqcRYGate(q, 3.134404968076204, 10);
  sqcRZGate(q, 1.5671394578581757, 10);
  sqcRYGate(q, -1.8420040923039132, 11);
  sqcRZGate(q, 0.045793431378481124, 11);
  sqcRYGate(q, 0.7759319178088083, 12);
  sqcRZGate(q, 0.20656541935801712, 12);
  sqcRYGate(q, -2.498470325127396, 13);
  sqcRZGate(q, -0.7868459622299423, 13);
  sqcRYGate(q, 1.3686118089916661, 14);
  sqcRZGate(q, 1.3656000213459836, 14);
  sqcRYGate(q, -0.144207805047937, 15);
  sqcRZGate(q, -2.4773790596137517, 15);
  sqcRYGate(q, -0.022981726038225007, 16);
  sqcRZGate(q, 2.934839690106533, 16);
  sqcRYGate(q, 1.5905693446328781, 17);
  sqcRZGate(q, -0.0027344033251850415, 17);
  sqcRYGate(q, 0.40427914363335676, 18);
  sqcRZGate(q, -3.1036004942313116, 18);
  sqcRYGate(q, -3.140046712496181, 19);
  sqcRZGate(q, 0.38638397876492375, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 3.0959387166468373, 0);
  sqcRZGate(q, -2.723235363122145, 0);
  sqcRYGate(q, 0.16660138334909488, 1);
  sqcRZGate(q, 0.7533930798595804, 1);
  sqcRYGate(q, -0.21200946642542107, 2);
  sqcRZGate(q, -1.8945031233376692, 2);
  sqcRYGate(q, 3.1369523897668747, 3);
  sqcRZGate(q, 2.222116325512385, 3);
  sqcRYGate(q, 3.1399049967207224, 4);
  sqcRZGate(q, 2.4245837603851146, 4);
  sqcRYGate(q, 3.13950149725423, 5);
  sqcRZGate(q, 2.379355176672531, 5);
  sqcRYGate(q, 0.0015899257723068771, 6);
  sqcRZGate(q, -1.1828787085961086, 6);
  sqcRYGate(q, -3.1214334604344733, 7);
  sqcRZGate(q, 2.734738229032878, 7);
  sqcRYGate(q, -1.4979522474202929, 8);
  sqcRZGate(q, -2.2019838000794794, 8);
  sqcRYGate(q, -3.1000979520528, 9);
  sqcRZGate(q, 1.5328987370813907, 9);
  sqcRYGate(q, 3.1371612670408715, 10);
  sqcRZGate(q, 1.8602379105046576, 10);
  sqcRYGate(q, -3.127905000999425, 11);
  sqcRZGate(q, 1.2878586094080522, 11);
  sqcRYGate(q, -3.130903585382278, 12);
  sqcRZGate(q, -0.3195263176019087, 12);
  sqcRYGate(q, 0.009102186531782555, 13);
  sqcRZGate(q, -0.11188404813135672, 13);
  sqcRYGate(q, 0.002585459282270719, 14);
  sqcRZGate(q, 2.3770034364756625, 14);
  sqcRYGate(q, 0.0038369009801728997, 15);
  sqcRZGate(q, -0.5513744389664287, 15);
  sqcRYGate(q, -3.1400151067128235, 16);
  sqcRZGate(q, -1.267045134685933, 16);
  sqcRYGate(q, 2.904322906089205, 17);
  sqcRZGate(q, 0.7302280878943339, 17);
  sqcRYGate(q, 3.088297552668716, 18);
  sqcRZGate(q, 1.3567765893607262, 18);
  sqcRYGate(q, -1.5295697074063836, 19);
  sqcRZGate(q, 1.367765488593192, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.3584014404868086, 0);
  sqcRZGate(q, 3.0450019233222143, 0);
  sqcRYGate(q, 0.959894026153246, 1);
  sqcRZGate(q, -2.143915925442239, 1);
  sqcRYGate(q, -0.919823750198591, 2);
  sqcRZGate(q, -1.1393939836989988, 2);
  sqcRYGate(q, -1.7923219415272449, 3);
  sqcRZGate(q, -1.568780460518073, 3);
  sqcRYGate(q, -2.9267685942653485, 4);
  sqcRZGate(q, 2.749665471680103, 4);
  sqcRYGate(q, -1.6149131120421396, 5);
  sqcRZGate(q, 0.009973418858727712, 5);
  sqcRYGate(q, 1.5677563788312139, 6);
  sqcRZGate(q, 0.00693369095268092, 6);
  sqcRYGate(q, -1.794577627573631, 7);
  sqcRZGate(q, 3.0041862279579217, 7);
  sqcRYGate(q, 0.7657919380917049, 8);
  sqcRZGate(q, -0.7675895692436658, 8);
  sqcRYGate(q, 2.166807177578279, 9);
  sqcRZGate(q, 1.55071708000776, 9);
  sqcRYGate(q, -1.5527040002556811, 10);
  sqcRZGate(q, 3.042416039572935, 10);
  sqcRYGate(q, -1.0031306790268868, 11);
  sqcRZGate(q, -2.3215256852110753, 11);
  sqcRYGate(q, 0.6661324015750596, 12);
  sqcRZGate(q, -3.038290896683674, 12);
  sqcRYGate(q, 1.5659118700162813, 13);
  sqcRZGate(q, 3.0278318126196306, 13);
  sqcRYGate(q, -1.3279440923998036, 14);
  sqcRZGate(q, 2.93387952481328, 14);
  sqcRYGate(q, -1.232802469418025, 15);
  sqcRZGate(q, -1.6201124895157486, 15);
  sqcRYGate(q, 0.5455922748015916, 16);
  sqcRZGate(q, 1.6118439255855361, 16);
  sqcRYGate(q, 3.093766658273897, 17);
  sqcRZGate(q, 2.2381553520477584, 17);
  sqcRYGate(q, 1.565103720000265, 18);
  sqcRZGate(q, -0.007397904447424765, 18);
  sqcRYGate(q, -3.1272207595938633, 19);
  sqcRZGate(q, 2.9550810176812328, 19);

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
