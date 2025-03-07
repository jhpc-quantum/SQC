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

  sqcRYGate(q, -2.407316041406505, 0);
  sqcRYGate(q, 2.403355809989336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.135297935665545, 0);
  sqcRYGate(q, 1.4700521032529847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0697397936569124, 2);
  sqcRYGate(q, -3.0218013923673217, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.721334048041487, 2);
  sqcRYGate(q, -2.288678686389626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9021270816891835, 4);
  sqcRYGate(q, -2.130268611682421, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.98850670022794, 4);
  sqcRYGate(q, -2.3409496932199625, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0670538747893925, 6);
  sqcRYGate(q, -0.7666989573763596, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0055169354918547, 6);
  sqcRYGate(q, -1.866591464427452, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7751339338392702, 8);
  sqcRYGate(q, 1.925841159521707, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6132685664089095, 8);
  sqcRYGate(q, 1.1635021403297827, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.9899709542439475, 10);
  sqcRYGate(q, -1.9416448114410523, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.3284837257089945, 10);
  sqcRYGate(q, 2.2252051306148863, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9946592741247913, 12);
  sqcRYGate(q, -2.482763508244846, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.8992079986371531, 12);
  sqcRYGate(q, 2.3766847390052126, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.7034298566016415, 14);
  sqcRYGate(q, -2.1919265579594294, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.4588876063574112, 14);
  sqcRYGate(q, -1.4420703916033966, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.9918363703900983, 0);
  sqcRYGate(q, -0.41459962457637456, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3636113500029037, 0);
  sqcRYGate(q, -0.5792719654625944, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.549534886913308, 2);
  sqcRYGate(q, -1.822025745508558, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.40688452119685, 2);
  sqcRYGate(q, -2.8412362992882714, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5329798767245708, 4);
  sqcRYGate(q, -0.135423044734542, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.1415204208237837, 4);
  sqcRYGate(q, -3.141277888224836, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.3514014919539923, 6);
  sqcRYGate(q, 1.1045112692072276, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.7162560784350731, 6);
  sqcRYGate(q, 0.44865898180798425, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.2399007479513182, 8);
  sqcRYGate(q, 1.3550853020806275, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.6298023716046, 8);
  sqcRYGate(q, 2.9441699937965558, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.3261303685586334, 10);
  sqcRYGate(q, 1.2109622745804032, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.0003511042327248859, 10);
  sqcRYGate(q, -0.002191678568063167, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.9739537847468743, 12);
  sqcRYGate(q, 1.4339442554527437, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.8911033912663537, 12);
  sqcRYGate(q, -1.7133940412920934, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.6351367568828918, 1);
  sqcRYGate(q, -1.9692671674839404, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.10990946586953247, 1);
  sqcRYGate(q, -2.566925817339669, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1416090622291897, 3);
  sqcRYGate(q, -1.7883815845799511, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.059148236865385, 3);
  sqcRYGate(q, 0.06642819878614947, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5560672847663712, 5);
  sqcRYGate(q, -1.0971442747746571, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.140948443891195, 5);
  sqcRYGate(q, -3.1406791548224207, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.600045382772001, 7);
  sqcRYGate(q, -1.109123581800867, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.3982777861307867, 7);
  sqcRYGate(q, 3.0835534445712987, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.4923611545257183, 9);
  sqcRYGate(q, 0.055425935149278516, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.41885232645508, 9);
  sqcRYGate(q, 1.080904175293087, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.5704699902038436, 11);
  sqcRYGate(q, -1.096796520448593, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.133239002201564, 11);
  sqcRYGate(q, -0.005773420067420431, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.03044160781144, 13);
  sqcRYGate(q, 0.49401799143274366, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.7260202337339816, 13);
  sqcRYGate(q, 2.323599940346852, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -3.0030881755104266, 0);
  sqcRYGate(q, 1.6689445297109722, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1741581011319795, 0);
  sqcRYGate(q, 2.3223004217843912, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.861208370020865, 2);
  sqcRYGate(q, -2.583925114773653, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3132381686141419, 2);
  sqcRYGate(q, -1.5432039785690221, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0199865580529979, 4);
  sqcRYGate(q, -1.9896075708119882, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7939698545252267, 4);
  sqcRYGate(q, 0.001262589486485055, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5306215076486507, 6);
  sqcRYGate(q, -0.8697824527923627, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1943093082454093, 6);
  sqcRYGate(q, -0.6910471571511002, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1062788911117853, 8);
  sqcRYGate(q, -0.9359602401428431, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6325548088707915, 8);
  sqcRYGate(q, -1.7188576063970977, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.6428316314713038, 10);
  sqcRYGate(q, -0.026095326525417024, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0454992242829397, 10);
  sqcRYGate(q, 1.524084778931548, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2272729885902995, 12);
  sqcRYGate(q, -2.5646391411881204, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.8231179836614128, 12);
  sqcRYGate(q, 0.40118408089280905, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.035045687995867, 14);
  sqcRYGate(q, 0.036997978893700705, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.770105669830644, 14);
  sqcRYGate(q, -1.5825666054864793, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.9962071797700363, 0);
  sqcRYGate(q, 0.9573328669752453, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.020395072210001253, 0);
  sqcRYGate(q, -1.093386251186507, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8548503431054626, 2);
  sqcRYGate(q, -1.4857213814490478, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.961678608298133, 2);
  sqcRYGate(q, -2.7257641171640703, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.04728495178865799, 4);
  sqcRYGate(q, 0.7961636320675405, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.43856363201345, 4);
  sqcRYGate(q, -3.140496135161651, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.1036110053353507, 6);
  sqcRYGate(q, 3.027749966427545, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.9902978309485473, 6);
  sqcRYGate(q, -2.992024140691426, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.7234355737045366, 8);
  sqcRYGate(q, 1.897950565527335, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.823769938071446, 8);
  sqcRYGate(q, -3.0914369397666377, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.4743512808949133, 10);
  sqcRYGate(q, 1.0870396259399357, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.141541617837469, 10);
  sqcRYGate(q, -3.1401847395932516, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.6799951769658523, 12);
  sqcRYGate(q, 0.4516050686319426, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.9182107482961266, 12);
  sqcRYGate(q, -0.07755816971313587, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.3329248141195398, 1);
  sqcRYGate(q, 1.8129130003636986, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9283694609255657, 1);
  sqcRYGate(q, -2.8658429130535463, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.049319795784134, 3);
  sqcRYGate(q, 2.322735291031843, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.708687113512558, 3);
  sqcRYGate(q, -3.1158471162703356, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5464761753242682, 5);
  sqcRYGate(q, 0.40273253773128825, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1412066948433193, 5);
  sqcRYGate(q, -0.0004937648364320424, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.44358868852511, 7);
  sqcRYGate(q, 2.9697001428457406, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.2850436439283457, 7);
  sqcRYGate(q, -2.359030138394471, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.99388195973522, 9);
  sqcRYGate(q, -0.3082107438581711, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.1200515703283767, 9);
  sqcRYGate(q, -3.098366198205184, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.4912970967563401, 11);
  sqcRYGate(q, -1.8131226438095593, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.002433577846194801, 11);
  sqcRYGate(q, -0.00010426065700208652, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.174895848579757, 13);
  sqcRYGate(q, 0.720059139662137, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.2564492424128497, 13);
  sqcRYGate(q, -2.35450407537728, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.31425580268755127, 0);
  sqcRYGate(q, 3.0414002831214306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.125193320630094, 0);
  sqcRYGate(q, -1.0230062998383682, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1876971730504895, 2);
  sqcRYGate(q, -0.3385655792131557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7249045839830277, 2);
  sqcRYGate(q, -2.996523450275762, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8761300605981983, 4);
  sqcRYGate(q, 0.5164882061868505, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7210212826192222, 4);
  sqcRYGate(q, -0.10269567686773673, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2324424460639638, 6);
  sqcRYGate(q, 0.04204196670747394, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.099311387545333, 6);
  sqcRYGate(q, 2.9835083939806033, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.932365588163782, 8);
  sqcRYGate(q, 0.7638280546265496, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0932025352419965, 8);
  sqcRYGate(q, -1.5082358553825461, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5585465059021627, 10);
  sqcRYGate(q, -1.2538548264690375, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.7507966444901366, 10);
  sqcRYGate(q, 0.4626719955811918, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.32820978935252926, 12);
  sqcRYGate(q, 2.7882178343922632, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.294990058284685, 12);
  sqcRYGate(q, -0.37656344111757684, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.219074124901835, 14);
  sqcRYGate(q, -1.1346186346307334, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.0696263636348826, 14);
  sqcRYGate(q, 0.17373937502106782, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.877358132723303, 0);
  sqcRYGate(q, 2.314926085087162, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.10165280840804414, 0);
  sqcRYGate(q, -3.001432888189358, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6171667580112832, 2);
  sqcRYGate(q, -1.8161730447456756, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.0890874221042557, 2);
  sqcRYGate(q, -0.5038787154018269, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7677693342899341, 4);
  sqcRYGate(q, 0.5406132532273098, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.0034605701640192683, 4);
  sqcRYGate(q, -0.0009449474545384363, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.10591742706813623, 6);
  sqcRYGate(q, -2.8786591542725866, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.3311861491099082, 6);
  sqcRYGate(q, 0.5967913973003115, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.152362273756058, 8);
  sqcRYGate(q, -1.1066636888839607, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.0032432202618766226, 8);
  sqcRYGate(q, 0.006516461914062189, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.439911057503111, 10);
  sqcRYGate(q, -0.9955626363529082, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 3.1405883463429065, 10);
  sqcRYGate(q, -3.139753378047855, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.5641821021558069, 12);
  sqcRYGate(q, 2.6113787447009265, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.7498771932729609, 12);
  sqcRYGate(q, -2.793615736686293, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.330461573473436, 1);
  sqcRYGate(q, -2.741161343294974, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.791640134282643, 1);
  sqcRYGate(q, 1.5675162727638183, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.992952766887637, 3);
  sqcRYGate(q, 2.6713806601040235, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.2623110848661941, 3);
  sqcRYGate(q, -3.0013464126674867, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.671435600370178, 5);
  sqcRYGate(q, -1.550528775993672, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.0004911404920013851, 5);
  sqcRYGate(q, 3.140357968511091, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.07110259239843657, 7);
  sqcRYGate(q, 2.7722813588381414, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.917135340465066, 7);
  sqcRYGate(q, -3.1254554366071745, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.49991514510466306, 9);
  sqcRYGate(q, -0.06459273332406923, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.04972314253542432, 9);
  sqcRYGate(q, -1.0290596498367859, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.4766264641135916, 11);
  sqcRYGate(q, 1.3448275400077065, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.0786720462577715, 11);
  sqcRYGate(q, -3.1415017806969914, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.1606965134216336, 13);
  sqcRYGate(q, 2.192610344951353, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.3241331906767053, 13);
  sqcRYGate(q, 1.1430074802817307, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.8863103279104404, 0);
  sqcRYGate(q, -2.9051061234267586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.971454815885335, 0);
  sqcRYGate(q, 2.9017420948664636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6155417848526568, 2);
  sqcRYGate(q, 1.4635745328409906, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5318019440694401, 2);
  sqcRYGate(q, -3.10331696430474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7188471888507983, 4);
  sqcRYGate(q, 2.580834629651661, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8299877568613248, 4);
  sqcRYGate(q, 0.07437785482179571, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.049870153405969, 6);
  sqcRYGate(q, 1.0559490021407214, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7150875480382328, 6);
  sqcRYGate(q, -1.5805210149702749, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.498287907015337, 8);
  sqcRYGate(q, -1.9998955648647627, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.004651260535380785, 8);
  sqcRYGate(q, 3.139450385235878, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.8960347777209723, 10);
  sqcRYGate(q, -0.5349395061569961, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.00395958920428896, 10);
  sqcRYGate(q, -0.8730432175192107, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7458012028223076, 12);
  sqcRYGate(q, -1.826878785891143, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.22226957532540667, 12);
  sqcRYGate(q, 2.763962623818536, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.560062290323629, 14);
  sqcRYGate(q, 1.3346500591589143, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.105239178163862, 14);
  sqcRYGate(q, -1.2351651844955995, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.06731382773012298, 0);
  sqcRYGate(q, -0.7208277562927883, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.18389896877272705, 0);
  sqcRYGate(q, 2.8149510939100435, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.655524305769395, 2);
  sqcRYGate(q, 1.458249705839954, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.17369737543177344, 2);
  sqcRYGate(q, -2.918070140080714, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6141376611649281, 4);
  sqcRYGate(q, 2.0982676652143493, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.0013203521903957238, 4);
  sqcRYGate(q, -0.0006326644384611607, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.9283004762029448, 6);
  sqcRYGate(q, 1.6115924047918266, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0487536112974976, 6);
  sqcRYGate(q, -1.166989279505484, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.0512006940315293, 8);
  sqcRYGate(q, 1.4808278399308348, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.136404628816018, 8);
  sqcRYGate(q, -0.014375415493011488, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.3609263678562939, 10);
  sqcRYGate(q, -0.29539273397901494, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 3.141583659494559, 10);
  sqcRYGate(q, -0.001364008840644237, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.2461725956910943, 12);
  sqcRYGate(q, 1.0960256254043035, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.1353404511729277, 12);
  sqcRYGate(q, -3.131498201641572, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.9907578103022925, 1);
  sqcRYGate(q, -0.5913481263681541, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.26786897946532484, 1);
  sqcRYGate(q, -0.47159233819863167, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6049831079366725, 3);
  sqcRYGate(q, -0.24518922077323452, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.614275193831695, 3);
  sqcRYGate(q, -0.3983593049558693, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.3523935737699771, 5);
  sqcRYGate(q, 2.180872750712867, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.0007759613140274624, 5);
  sqcRYGate(q, -0.002521415633786148, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8417170233445688, 7);
  sqcRYGate(q, 2.572474103320459, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.0054582419654997175, 7);
  sqcRYGate(q, -0.04370308740977169, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.2621522416231681, 9);
  sqcRYGate(q, -1.663754385896655, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.1374939989955717, 9);
  sqcRYGate(q, 1.2720082717652108, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.282207680734234, 11);
  sqcRYGate(q, 0.2096945677305512, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.0868972066754052, 11);
  sqcRYGate(q, -0.013825491068950249, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.489085726426125, 13);
  sqcRYGate(q, 1.4504149801774175, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 3.135318046386853, 13);
  sqcRYGate(q, -3.1369560770414324, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.1193166165941246, 0);
  sqcRYGate(q, -2.779967265942077, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7279929176000186, 0);
  sqcRYGate(q, -0.5929608881494213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3434501918678645, 2);
  sqcRYGate(q, -0.04953783013427149, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.29074702970740596, 2);
  sqcRYGate(q, -2.9121899889845118, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.08739386508199498, 4);
  sqcRYGate(q, -1.4245319427350804, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8390089849616291, 4);
  sqcRYGate(q, -1.0660428981968417, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.253906322119347, 6);
  sqcRYGate(q, -0.5962104571165019, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4032051085082546, 6);
  sqcRYGate(q, 1.427988866196156, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9254458483949564, 8);
  sqcRYGate(q, -0.7377087687480278, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.48522730366266575, 8);
  sqcRYGate(q, -2.9905664951034803, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3177837405278547, 10);
  sqcRYGate(q, -2.3325077366021953, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.0003834292217517188, 10);
  sqcRYGate(q, -0.28252902955413806, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.2513377600468796, 12);
  sqcRYGate(q, 2.2067649972565975, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.0905867746309, 12);
  sqcRYGate(q, 3.128949150741639, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.0557587031056257, 14);
  sqcRYGate(q, -2.5393253686065815, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.634741696598833, 14);
  sqcRYGate(q, 0.8036229398080111, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.346784814977928, 0);
  sqcRYGate(q, -2.8204359040428866, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.28613293742133405, 0);
  sqcRYGate(q, -2.462960958362495, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0370174214955816, 2);
  sqcRYGate(q, -2.5935279832181357, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.661032631707437, 2);
  sqcRYGate(q, 0.6938469621137098, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.9824523132600161, 4);
  sqcRYGate(q, -3.1235458246891525, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.141136167472165, 4);
  sqcRYGate(q, 0.06516864686792874, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.1760854485260408, 6);
  sqcRYGate(q, -0.7501945582028435, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.8593783735062487, 6);
  sqcRYGate(q, -0.3486361180776827, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.8296386767668706, 8);
  sqcRYGate(q, -0.9704191259891796, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.7034613941635683, 8);
  sqcRYGate(q, -3.1408104781570914, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.5736870544033197, 10);
  sqcRYGate(q, -1.0331866098557525, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.0004063868482626631, 10);
  sqcRYGate(q, 0.009942280730102835, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.9017136154522234, 12);
  sqcRYGate(q, 0.15789978700943305, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.7346180697770501, 12);
  sqcRYGate(q, 0.04208200264369482, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.164717813241606, 1);
  sqcRYGate(q, -0.4560293033032561, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0999092519341196, 1);
  sqcRYGate(q, 3.118733636302766, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8674934814366164, 3);
  sqcRYGate(q, -3.0223690560160352, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.0990486140978956, 3);
  sqcRYGate(q, -1.756078639123084, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.0083716634575393, 5);
  sqcRYGate(q, 1.5054592233331372, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5974405285948823, 5);
  sqcRYGate(q, 0.035141507196669836, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5078001148238265, 7);
  sqcRYGate(q, -2.7943234518101914, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.139400355813212, 7);
  sqcRYGate(q, -3.121372453519265, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.0083809475956724, 9);
  sqcRYGate(q, -0.8268077785175549, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.1411602443916613, 9);
  sqcRYGate(q, 0.28388720689703145, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.7535342027404743, 11);
  sqcRYGate(q, 1.5704379811229134, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.1703670306154335, 11);
  sqcRYGate(q, 2.850566608234194, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.4756432611285035, 13);
  sqcRYGate(q, -2.863396813004334, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.8285663848277602, 13);
  sqcRYGate(q, 0.9040084129889636, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.9548458228964334, 0);
  sqcRYGate(q, -2.773102938962859, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7842106347955099, 0);
  sqcRYGate(q, 2.706374493549344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8802415945636115, 2);
  sqcRYGate(q, -1.4891170302967938, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8157827804868547, 2);
  sqcRYGate(q, 0.23200660863651112, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1243191818591507, 4);
  sqcRYGate(q, -0.3772446873583427, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1412997253126145, 4);
  sqcRYGate(q, -0.4461199735931261, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3696562553847569, 6);
  sqcRYGate(q, -0.29277463534037185, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.628264411368122, 6);
  sqcRYGate(q, 1.6288787467515693, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0603327764949033, 8);
  sqcRYGate(q, -1.5804497284337167, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.1290048311952545, 8);
  sqcRYGate(q, 3.1032006232562477, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.8663773632059653, 10);
  sqcRYGate(q, 0.14685026906586618, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.0011691464784524541, 10);
  sqcRYGate(q, 0.03208203249088238, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9355072891686902, 12);
  sqcRYGate(q, -1.2781839917871212, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.3727644917456345, 12);
  sqcRYGate(q, -3.1388509791435695, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.7543404594589145, 14);
  sqcRYGate(q, -0.7988203876952704, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.8064801291108483, 14);
  sqcRYGate(q, 3.0787941203516476, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.0111024932569297, 0);
  sqcRYGate(q, -2.9669923939107865, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0791089123725413, 0);
  sqcRYGate(q, -2.7650267775574275, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7509894376546329, 2);
  sqcRYGate(q, -1.5884469213334327, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6835576570595495, 2);
  sqcRYGate(q, -3.1233087465944913, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.553602654683246, 4);
  sqcRYGate(q, 1.177940571904647, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0588627085100626, 4);
  sqcRYGate(q, 2.9815654608753914, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.6320641009618102, 6);
  sqcRYGate(q, -0.7595651040267871, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.1342322146934616, 6);
  sqcRYGate(q, 3.119036575810539, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.5390637667583587, 8);
  sqcRYGate(q, -1.8726103276798758, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.5726438375300003, 8);
  sqcRYGate(q, 2.9701497186799233, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.2936057350517791, 10);
  sqcRYGate(q, 1.9410596731815877, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.1361989931008143, 10);
  sqcRYGate(q, 3.0892097139045593, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.7506801921594008, 12);
  sqcRYGate(q, 0.08798142662642584, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.3913980119408427, 12);
  sqcRYGate(q, 3.0322801845680427, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.7619696755154196, 1);
  sqcRYGate(q, -0.2615111495573599, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.759889391088602, 1);
  sqcRYGate(q, -1.2881858295740765, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3088231355481827, 3);
  sqcRYGate(q, -1.9276604312012244, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.029766987742893217, 3);
  sqcRYGate(q, 3.0741917352516333, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.4860006458895154, 5);
  sqcRYGate(q, -1.446670432054467, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.10048584098267899, 5);
  sqcRYGate(q, 0.0043617483093890755, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.6187261786518237, 7);
  sqcRYGate(q, 3.1096148294127963, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.06762346006834402, 7);
  sqcRYGate(q, 0.16598799335264314, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.9559921503279316, 9);
  sqcRYGate(q, 1.4838700449754283, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.028352910605588196, 9);
  sqcRYGate(q, -0.013804509780942274, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.6255234496368767, 11);
  sqcRYGate(q, -0.8273588280557156, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -3.1356459986094922, 11);
  sqcRYGate(q, 0.01750122811402477, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.5667257689322067, 13);
  sqcRYGate(q, -1.3455891723790607, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.12119031110568397, 13);
  sqcRYGate(q, 1.1090739633874107, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.5609162622425372, 0);
  sqcRYGate(q, 1.9404292186545269, 1);
  sqcRYGate(q, 0.8928540926818886, 2);
  sqcRYGate(q, -2.7497010645717044, 3);
  sqcRYGate(q, -0.0006397446547143915, 4);
  sqcRYGate(q, 2.202818433132891, 5);
  sqcRYGate(q, 0.007572585581972824, 6);
  sqcRYGate(q, 0.03604988800572582, 7);
  sqcRYGate(q, -0.029793632289625487, 8);
  sqcRYGate(q, -0.5601780267290843, 9);
  sqcRYGate(q, -0.10039244184478502, 10);
  sqcRYGate(q, -0.10480301151106532, 11);
  sqcRYGate(q, 2.9350625231094813, 12);
  sqcRYGate(q, -0.6228762999262981, 13);
  sqcRYGate(q, -2.1778587604731086, 14);
  sqcRYGate(q, -0.12444237917834045, 15);

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
