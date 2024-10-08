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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 2.822849596764542, 0);
  sqcRZGate(q, -1.5993541113230343, 0);
  sqcRYGate(q, 1.3419993337853438, 1);
  sqcRZGate(q, -0.8906256191685649, 1);
  sqcRYGate(q, 0.7030891605198133, 2);
  sqcRZGate(q, -2.5955100039172883, 2);
  sqcRYGate(q, -2.220428100848576, 3);
  sqcRZGate(q, 0.398168348182198, 3);
  sqcRYGate(q, -1.1815552590140737, 4);
  sqcRZGate(q, -0.8773659405484411, 4);
  sqcRYGate(q, 3.140964826447694, 5);
  sqcRZGate(q, 0.5097041189268063, 5);
  sqcRYGate(q, 0.003488960586912171, 6);
  sqcRZGate(q, -1.9258456355556497, 6);
  sqcRYGate(q, 1.8738869224194648, 7);
  sqcRZGate(q, 0.7430761846669754, 7);
  sqcRYGate(q, -2.3983293638970733, 8);
  sqcRZGate(q, -3.1080278130505823, 8);
  sqcRYGate(q, 0.0004724686461621274, 9);
  sqcRZGate(q, -2.3739147750107925, 9);
  sqcRYGate(q, -3.0097429697109064, 10);
  sqcRZGate(q, 0.6253921543717196, 10);
  sqcRYGate(q, -1.5757498272310402, 11);
  sqcRZGate(q, -3.1353689309488106, 11);
  sqcRYGate(q, -1.3467180458473242, 12);
  sqcRZGate(q, 1.3582570252121597, 12);
  sqcRYGate(q, -3.14097438536942, 13);
  sqcRZGate(q, -2.97968674748077, 13);
  sqcRYGate(q, 3.0318561766045393, 14);
  sqcRZGate(q, 1.4712017505832127, 14);
  sqcRYGate(q, -2.9463743578753525, 15);
  sqcRZGate(q, 0.47874931129069864, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.3783646650190642, 0);
  sqcRZGate(q, 2.6534471233776027, 0);
  sqcRYGate(q, -0.6977901621572381, 1);
  sqcRZGate(q, 3.0071765439660343, 1);
  sqcRYGate(q, 0.03736470277449211, 2);
  sqcRZGate(q, 0.7337839867543091, 2);
  sqcRYGate(q, 1.5521311119794106, 3);
  sqcRZGate(q, -0.07326430554456653, 3);
  sqcRYGate(q, -0.005469629507820027, 4);
  sqcRZGate(q, -2.240934243084393, 4);
  sqcRYGate(q, 2.8507484457234677, 5);
  sqcRZGate(q, -0.19887324901940054, 5);
  sqcRYGate(q, -3.1415123845270054, 6);
  sqcRZGate(q, 1.5250518861645226, 6);
  sqcRYGate(q, 0.48848129880899965, 7);
  sqcRZGate(q, 1.2633657446778355, 7);
  sqcRYGate(q, 0.82650275140114, 8);
  sqcRZGate(q, 1.5590141908940256, 8);
  sqcRYGate(q, -1.5937103343954744, 9);
  sqcRZGate(q, -3.108064505836227, 9);
  sqcRYGate(q, 3.139894825754798, 10);
  sqcRZGate(q, 1.7543961437195792, 10);
  sqcRYGate(q, 1.5468201631120813, 11);
  sqcRZGate(q, -1.714834569986281, 11);
  sqcRYGate(q, 1.2778101059639395, 12);
  sqcRZGate(q, 1.5720059853959507, 12);
  sqcRYGate(q, 3.0363246733548204, 13);
  sqcRZGate(q, 1.6276981795963605, 13);
  sqcRYGate(q, -0.04059753923460976, 14);
  sqcRZGate(q, -2.115220162270565, 14);
  sqcRYGate(q, -1.7785516593419144, 15);
  sqcRZGate(q, 2.6753665565304363, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.9193878544551364, 0);
  sqcRZGate(q, 0.15197935353804243, 0);
  sqcRYGate(q, 0.04543377855404035, 1);
  sqcRZGate(q, 2.875225740218549, 1);
  sqcRYGate(q, 2.3509942793158833, 2);
  sqcRZGate(q, -1.6629866553649273, 2);
  sqcRYGate(q, 2.7530307782815364, 3);
  sqcRZGate(q, 2.4993693928927705, 3);
  sqcRYGate(q, 2.009539759724486, 4);
  sqcRZGate(q, -2.1093835183078893, 4);
  sqcRYGate(q, 0.00392234849257278, 5);
  sqcRZGate(q, 2.6412153354425563, 5);
  sqcRYGate(q, 0.09034577324629282, 6);
  sqcRZGate(q, -1.7394360788087777, 6);
  sqcRYGate(q, -0.00023648738517056955, 7);
  sqcRZGate(q, -2.1772668409674187, 7);
  sqcRYGate(q, -1.5669078551715423, 8);
  sqcRZGate(q, -1.9857797300401474, 8);
  sqcRYGate(q, 0.2549357487070365, 9);
  sqcRZGate(q, -1.6122634184794995, 9);
  sqcRYGate(q, 3.117225952298415, 10);
  sqcRZGate(q, -3.09125486922771, 10);
  sqcRYGate(q, -0.2163553846653754, 11);
  sqcRZGate(q, 1.0108408355805407, 11);
  sqcRYGate(q, 0.016430767009967664, 12);
  sqcRZGate(q, -2.6581775790970026, 12);
  sqcRYGate(q, 1.3531718790147131, 13);
  sqcRZGate(q, -2.499927921207709, 13);
  sqcRYGate(q, -1.8309885904199124, 14);
  sqcRZGate(q, -2.2398260301732593, 14);
  sqcRYGate(q, 0.06981078677237913, 15);
  sqcRZGate(q, -0.2891535363623134, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.8129441370142683, 0);
  sqcRZGate(q, 1.2958293323648462, 0);
  sqcRYGate(q, 1.1116448234896916, 1);
  sqcRZGate(q, -2.8277744873941946, 1);
  sqcRYGate(q, -2.8683388396586103, 2);
  sqcRZGate(q, -0.05077787574299197, 2);
  sqcRYGate(q, 2.762041396742339, 3);
  sqcRZGate(q, -2.7148309026741755, 3);
  sqcRYGate(q, -0.0758350065676263, 4);
  sqcRZGate(q, 1.603783010304445, 4);
  sqcRYGate(q, 1.7432794032143502, 5);
  sqcRZGate(q, 0.0907955503822988, 5);
  sqcRYGate(q, -3.140808923656426, 6);
  sqcRZGate(q, -2.960752662026731, 6);
  sqcRYGate(q, -2.1393531553403076, 7);
  sqcRZGate(q, -0.31060038352925184, 7);
  sqcRYGate(q, 3.122008666190723, 8);
  sqcRZGate(q, 2.8161958356691543, 8);
  sqcRYGate(q, 1.5922274998276615, 9);
  sqcRZGate(q, 2.533937362781546, 9);
  sqcRYGate(q, 0.003106922567872788, 10);
  sqcRZGate(q, -2.841566077042371, 10);
  sqcRYGate(q, 3.087269057332824, 11);
  sqcRZGate(q, -1.7262218158822042, 11);
  sqcRYGate(q, 0.1894980325485827, 12);
  sqcRZGate(q, 1.4146639051331642, 12);
  sqcRYGate(q, -0.0024898041395458033, 13);
  sqcRZGate(q, -2.3806734876569053, 13);
  sqcRYGate(q, 0.46618958804806443, 14);
  sqcRZGate(q, 0.1241260858097009, 14);
  sqcRYGate(q, -2.0908996027538738, 15);
  sqcRZGate(q, 0.33230176951518214, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -2.0494537267647717, 0);
  sqcRZGate(q, 0.7709163253652793, 0);
  sqcRYGate(q, -1.4324985862278021, 1);
  sqcRZGate(q, 3.00951215270648, 1);
  sqcRYGate(q, 1.964228505189194, 2);
  sqcRZGate(q, 2.6983824123372253, 2);
  sqcRYGate(q, 3.0940312531600576, 3);
  sqcRZGate(q, -2.344202800778138, 3);
  sqcRYGate(q, -2.8608945239363335, 4);
  sqcRZGate(q, 1.7704146253843476, 4);
  sqcRYGate(q, 0.00266929060941834, 5);
  sqcRZGate(q, -0.0673402897828943, 5);
  sqcRYGate(q, -0.0015168427975189443, 6);
  sqcRZGate(q, 0.8057215656359288, 6);
  sqcRYGate(q, -3.140912668650547, 7);
  sqcRZGate(q, 0.6944347113144005, 7);
  sqcRYGate(q, 0.9290040337119189, 8);
  sqcRZGate(q, -2.1940975926378896, 8);
  sqcRYGate(q, -3.1176197902554215, 9);
  sqcRZGate(q, -1.901712910972389, 9);
  sqcRYGate(q, 0.02233289561816216, 10);
  sqcRZGate(q, 0.14610264300384243, 10);
  sqcRYGate(q, -1.1962929572172216, 11);
  sqcRZGate(q, 1.5722939339635362, 11);
  sqcRYGate(q, -1.8323468903784548, 12);
  sqcRZGate(q, -1.4078554558779626, 12);
  sqcRYGate(q, 1.5653214160205922, 13);
  sqcRZGate(q, -2.293210918852502, 13);
  sqcRYGate(q, 1.6046751978020268, 14);
  sqcRZGate(q, -3.0925735887915398, 14);
  sqcRYGate(q, 1.8978941083242358, 15);
  sqcRZGate(q, 2.801525030377218, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.8878720416016864, 0);
  sqcRZGate(q, -0.541967519998887, 0);
  sqcRYGate(q, 1.0133097788769891, 1);
  sqcRZGate(q, -0.6155583383164344, 1);
  sqcRYGate(q, 2.095209858980075, 2);
  sqcRZGate(q, 1.0588162852571201, 2);
  sqcRYGate(q, 2.7795895467676974, 3);
  sqcRZGate(q, 3.0923068768210564, 3);
  sqcRYGate(q, -1.633347623008266, 4);
  sqcRZGate(q, -2.8747808731650126, 4);
  sqcRYGate(q, -1.3207518422009885, 5);
  sqcRZGate(q, -2.227273486105138, 5);
  sqcRYGate(q, -3.0923953300466063, 6);
  sqcRZGate(q, -1.583328491652967, 6);
  sqcRYGate(q, 2.7920828424690898, 7);
  sqcRZGate(q, 2.214524337677107, 7);
  sqcRYGate(q, 0.021080596378395097, 8);
  sqcRZGate(q, -1.7821093814537214, 8);
  sqcRYGate(q, -3.113157770082099, 9);
  sqcRZGate(q, 3.0700828761475902, 9);
  sqcRYGate(q, 0.01205581281289744, 10);
  sqcRZGate(q, -2.2310229759710776, 10);
  sqcRYGate(q, 2.4933861645352198, 11);
  sqcRZGate(q, -3.1220589922361373, 11);
  sqcRYGate(q, -0.6995549215872325, 12);
  sqcRZGate(q, -2.8127909760286762, 12);
  sqcRYGate(q, -3.125521335066077, 13);
  sqcRZGate(q, -2.894193333584076, 13);
  sqcRYGate(q, 0.4495403490653649, 14);
  sqcRZGate(q, -1.2542305959162006, 14);
  sqcRYGate(q, -1.1884524329290072, 15);
  sqcRZGate(q, -1.5431683703725325, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.8795599197243045, 0);
  sqcRZGate(q, -2.186872056764504, 0);
  sqcRYGate(q, -1.268681553368229, 1);
  sqcRZGate(q, -2.4708831856477573, 1);
  sqcRYGate(q, 1.197493808863312, 2);
  sqcRZGate(q, -0.16856595814627529, 2);
  sqcRYGate(q, -2.4214073667475184, 3);
  sqcRZGate(q, 0.4894038266117215, 3);
  sqcRYGate(q, -3.1127737265658872, 4);
  sqcRZGate(q, -0.6762690782091264, 4);
  sqcRYGate(q, 3.138911963199971, 5);
  sqcRZGate(q, -0.6081610182612875, 5);
  sqcRYGate(q, 0.008266544608201582, 6);
  sqcRZGate(q, -0.8504077392560324, 6);
  sqcRYGate(q, -3.116127646594554, 7);
  sqcRZGate(q, 1.7043138945187153, 7);
  sqcRYGate(q, 2.968164637457116, 8);
  sqcRZGate(q, 2.9294864631284137, 8);
  sqcRYGate(q, 3.138388102791732, 9);
  sqcRZGate(q, 3.107488383723301, 9);
  sqcRYGate(q, 3.1259852487445974, 10);
  sqcRZGate(q, -3.0689792837260534, 10);
  sqcRYGate(q, -1.6540265482723733, 11);
  sqcRZGate(q, 2.4518514123706225, 11);
  sqcRYGate(q, -0.32712213646070154, 12);
  sqcRZGate(q, -0.4399885219879094, 12);
  sqcRYGate(q, -3.0839462108376603, 13);
  sqcRZGate(q, -1.3544139414482192, 13);
  sqcRYGate(q, -2.399411722717949, 14);
  sqcRZGate(q, -1.3380517049275706, 14);
  sqcRYGate(q, -2.0418209952072246, 15);
  sqcRZGate(q, 1.405252864456308, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.4686697404203366, 0);
  sqcRZGate(q, 2.339684556186298, 0);
  sqcRYGate(q, -1.3202830629080058, 1);
  sqcRZGate(q, -2.697565152103012, 1);
  sqcRYGate(q, 2.2458197751415874, 2);
  sqcRZGate(q, -1.6976240928930364, 2);
  sqcRYGate(q, 0.4860885852700898, 3);
  sqcRZGate(q, 0.7488742281533547, 3);
  sqcRYGate(q, -1.5199987581218837, 4);
  sqcRZGate(q, -2.7328738262827654, 4);
  sqcRYGate(q, -2.411258719699801, 5);
  sqcRZGate(q, 0.5069738748257722, 5);
  sqcRYGate(q, 3.040762134058983, 6);
  sqcRZGate(q, -0.12215256019395976, 6);
  sqcRYGate(q, -0.2150271035450295, 7);
  sqcRZGate(q, -2.1764263043689525, 7);
  sqcRYGate(q, -0.06616445237582802, 8);
  sqcRZGate(q, -0.743995422806476, 8);
  sqcRYGate(q, 3.093514116721689, 9);
  sqcRZGate(q, 3.000070710645899, 9);
  sqcRYGate(q, 3.1372479212793776, 10);
  sqcRZGate(q, 2.1491234264029204, 10);
  sqcRYGate(q, 2.897333125272256, 11);
  sqcRZGate(q, -0.24521912418939, 11);
  sqcRYGate(q, 0.49548349380601664, 12);
  sqcRZGate(q, -2.2061403813092078, 12);
  sqcRYGate(q, -2.818570429805177, 13);
  sqcRZGate(q, -1.1832092193665433, 13);
  sqcRYGate(q, -2.483645140987749, 14);
  sqcRZGate(q, -0.1159966662485449, 14);
  sqcRYGate(q, -0.03134142150685282, 15);
  sqcRZGate(q, -2.470112739882259, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.670075301699196, 0);
  sqcRZGate(q, -0.6727883021045864, 0);
  sqcRYGate(q, 1.5551528513420398, 1);
  sqcRZGate(q, -0.28738336034037226, 1);
  sqcRYGate(q, 1.9675413176260266, 2);
  sqcRZGate(q, 2.002447958034508, 2);
  sqcRYGate(q, 2.1589534291533807, 3);
  sqcRZGate(q, -0.4405962942027939, 3);
  sqcRYGate(q, -1.8286809889644418, 4);
  sqcRZGate(q, -0.41523030485164814, 4);
  sqcRYGate(q, 3.1314680771311028, 5);
  sqcRZGate(q, -0.3379446191638898, 5);
  sqcRYGate(q, 0.06503156921856412, 6);
  sqcRZGate(q, -0.019471855683013576, 6);
  sqcRYGate(q, 0.0229927907028127, 7);
  sqcRZGate(q, 0.6062281253451426, 7);
  sqcRYGate(q, 2.5937255341869423, 8);
  sqcRZGate(q, 2.6758138598743617, 8);
  sqcRYGate(q, 3.139545882461315, 9);
  sqcRZGate(q, -1.9821239474227985, 9);
  sqcRYGate(q, -0.008189133076542454, 10);
  sqcRZGate(q, -1.8794590896926993, 10);
  sqcRYGate(q, 3.122670625878191, 11);
  sqcRZGate(q, -1.013344716960912, 11);
  sqcRYGate(q, -2.2968299873458675, 12);
  sqcRZGate(q, 1.7302691675169128, 12);
  sqcRYGate(q, 0.7393951494993516, 13);
  sqcRZGate(q, -2.2342900530731344, 13);
  sqcRYGate(q, -1.0077457247230095, 14);
  sqcRZGate(q, 3.0631651821914123, 14);
  sqcRYGate(q, 0.05426262612641638, 15);
  sqcRZGate(q, -0.45778572619441743, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.7437951598821189, 0);
  sqcRZGate(q, 1.1385328336997134, 0);
  sqcRYGate(q, -0.014297543623476579, 1);
  sqcRZGate(q, 1.4135882046015347, 1);
  sqcRYGate(q, 1.382828753875737, 2);
  sqcRZGate(q, 0.28255490440875275, 2);
  sqcRYGate(q, -3.010017617565013, 3);
  sqcRZGate(q, 2.3150580007167485, 3);
  sqcRYGate(q, 3.0661530609589365, 4);
  sqcRZGate(q, -1.4666552600816276, 4);
  sqcRYGate(q, -2.274065378321551, 5);
  sqcRZGate(q, 1.8172782524732902, 5);
  sqcRYGate(q, -2.9870962992760965, 6);
  sqcRZGate(q, 1.9313749829246305, 6);
  sqcRYGate(q, 1.9565075238727951, 7);
  sqcRZGate(q, -0.4884456116475347, 7);
  sqcRYGate(q, 0.055969858050025245, 8);
  sqcRZGate(q, 2.3179226667728026, 8);
  sqcRYGate(q, 1.5207071794654983, 9);
  sqcRZGate(q, 1.4180184643315954, 9);
  sqcRYGate(q, 2.143897096847033, 10);
  sqcRZGate(q, 1.0596362357713232, 10);
  sqcRYGate(q, -0.0770526032280685, 11);
  sqcRZGate(q, 2.8616192338222213, 11);
  sqcRYGate(q, 0.12070656518388656, 12);
  sqcRZGate(q, -1.3169411321031375, 12);
  sqcRYGate(q, -1.2227249888403706, 13);
  sqcRZGate(q, -2.905034776214763, 13);
  sqcRYGate(q, 1.964367483322114, 14);
  sqcRZGate(q, 0.48179400007065526, 14);
  sqcRYGate(q, -0.3150857266634626, 15);
  sqcRZGate(q, 1.133641174355813, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -2.9435358083746284, 0);
  sqcRZGate(q, 0.9661408346381517, 0);
  sqcRYGate(q, 2.955419753568314, 1);
  sqcRZGate(q, -0.08131816103166224, 1);
  sqcRYGate(q, 0.8283785735432598, 2);
  sqcRZGate(q, -0.18189228803178015, 2);
  sqcRYGate(q, 2.9400995575059317, 3);
  sqcRZGate(q, 0.36165126880601384, 3);
  sqcRYGate(q, -1.9503999947411086, 4);
  sqcRZGate(q, 1.7185877885775669, 4);
  sqcRYGate(q, 2.4597944512153997, 5);
  sqcRZGate(q, -1.2147185285991957, 5);
  sqcRYGate(q, -0.8666730120399436, 6);
  sqcRZGate(q, -0.024521879749973975, 6);
  sqcRYGate(q, 3.139905090092706, 7);
  sqcRZGate(q, -2.696793158446887, 7);
  sqcRYGate(q, 0.015487464660455252, 8);
  sqcRZGate(q, 0.6886973339326679, 8);
  sqcRYGate(q, -3.1412564015706037, 9);
  sqcRZGate(q, -1.9705592052368472, 9);
  sqcRYGate(q, -0.003382686301511839, 10);
  sqcRZGate(q, 1.5518922978694785, 10);
  sqcRYGate(q, 0.01376554395196509, 11);
  sqcRZGate(q, -1.1419593665410321, 11);
  sqcRYGate(q, 2.864640670128283, 12);
  sqcRZGate(q, 1.0638757704349553, 12);
  sqcRYGate(q, -0.7190762604332653, 13);
  sqcRZGate(q, 2.9860480284658837, 13);
  sqcRYGate(q, 1.355085740624157, 14);
  sqcRZGate(q, -2.1561290858758815, 14);
  sqcRYGate(q, -0.030797623118702155, 15);
  sqcRZGate(q, -0.9483047942201086, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 2.439856835693681, 0);
  sqcRZGate(q, 0.4632149925046401, 0);
  sqcRYGate(q, -0.0396555310536388, 1);
  sqcRZGate(q, 0.36367010911647907, 1);
  sqcRYGate(q, 2.994344508987227, 2);
  sqcRZGate(q, 2.2832156496158795, 2);
  sqcRYGate(q, -3.140720586322794, 3);
  sqcRZGate(q, 2.036343582303421, 3);
  sqcRYGate(q, -0.005666419731592454, 4);
  sqcRZGate(q, -0.8322580831686401, 4);
  sqcRYGate(q, 0.01799891365447085, 5);
  sqcRZGate(q, -1.9928351230561734, 5);
  sqcRYGate(q, 2.895028533638731, 6);
  sqcRZGate(q, 2.753203802543607, 6);
  sqcRYGate(q, 3.0718581406960133, 7);
  sqcRZGate(q, -2.2464099415098464, 7);
  sqcRYGate(q, -3.125643631775084, 8);
  sqcRZGate(q, -0.7180038194763307, 8);
  sqcRYGate(q, -1.8152286391723003, 9);
  sqcRZGate(q, 1.3236185018502258, 9);
  sqcRYGate(q, 2.4023479159932393, 10);
  sqcRZGate(q, -2.1927536969534485, 10);
  sqcRYGate(q, -0.5051034576871528, 11);
  sqcRZGate(q, 0.9433931544785129, 11);
  sqcRYGate(q, 0.14045185969008117, 12);
  sqcRZGate(q, 0.5172071646219907, 12);
  sqcRYGate(q, -0.8903801527701827, 13);
  sqcRZGate(q, 2.6880238347241483, 13);
  sqcRYGate(q, -2.8213405636386217, 14);
  sqcRZGate(q, -0.04713370496993663, 14);
  sqcRYGate(q, 0.9060470706410806, 15);
  sqcRZGate(q, -3.0103974938716265, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.7210787253584046, 0);
  sqcRZGate(q, -0.9946962647203818, 0);
  sqcRYGate(q, 1.7002749203456713, 1);
  sqcRZGate(q, -0.422172753909815, 1);
  sqcRYGate(q, -1.4458163593579103, 2);
  sqcRZGate(q, 0.0513454334447383, 2);
  sqcRYGate(q, 2.34844011668222, 3);
  sqcRZGate(q, -1.3843569578875226, 3);
  sqcRYGate(q, 2.2796586837092017, 4);
  sqcRZGate(q, -1.354375100656597, 4);
  sqcRYGate(q, -0.6269100801489396, 5);
  sqcRZGate(q, -2.702051405732769, 5);
  sqcRYGate(q, -0.7257542258838547, 6);
  sqcRZGate(q, -1.3326077627232105, 6);
  sqcRYGate(q, 0.00040211783386645555, 7);
  sqcRZGate(q, -1.2912505903835165, 7);
  sqcRYGate(q, -0.01194374201149806, 8);
  sqcRZGate(q, 2.953200419277883, 8);
  sqcRYGate(q, -3.1371709704652773, 9);
  sqcRZGate(q, 1.9696169368859615, 9);
  sqcRYGate(q, 3.140962317925111, 10);
  sqcRZGate(q, 3.078501167387104, 10);
  sqcRYGate(q, 3.10402520288959, 11);
  sqcRZGate(q, -1.684747578437979, 11);
  sqcRYGate(q, -0.02575107975311448, 12);
  sqcRZGate(q, -2.129184012448751, 12);
  sqcRYGate(q, -0.6603922658522883, 13);
  sqcRZGate(q, 0.9475693710832402, 13);
  sqcRYGate(q, -2.6095771480629324, 14);
  sqcRZGate(q, -0.5463000158040107, 14);
  sqcRYGate(q, 0.3362171534354416, 15);
  sqcRZGate(q, -0.25846632725062074, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.6606567586152893, 0);
  sqcRZGate(q, -2.0628298264713103, 0);
  sqcRYGate(q, 3.036330529574828, 1);
  sqcRZGate(q, 0.4242242936291234, 1);
  sqcRYGate(q, -2.102084389618234, 2);
  sqcRZGate(q, 0.3196159714462044, 2);
  sqcRYGate(q, 0.022125527852323575, 3);
  sqcRZGate(q, 0.8068376186766963, 3);
  sqcRYGate(q, -3.1297188184230316, 4);
  sqcRZGate(q, -0.5380342773938276, 4);
  sqcRYGate(q, -0.8386545639109952, 5);
  sqcRZGate(q, 0.34476036455168213, 5);
  sqcRYGate(q, -0.04693188667924277, 6);
  sqcRZGate(q, -1.280415157334934, 6);
  sqcRYGate(q, 0.6487598177213165, 7);
  sqcRZGate(q, -1.4829500747859419, 7);
  sqcRYGate(q, -2.715333147701402, 8);
  sqcRZGate(q, -1.2878913981334674, 8);
  sqcRYGate(q, -1.6795730583972932, 9);
  sqcRZGate(q, -1.225319918181119, 9);
  sqcRYGate(q, 2.177244782648633, 10);
  sqcRZGate(q, -2.1613117982324335, 10);
  sqcRYGate(q, -0.11041371619266105, 11);
  sqcRZGate(q, -0.3654942339548084, 11);
  sqcRYGate(q, -2.9508635445706526, 12);
  sqcRZGate(q, 1.8143099935168592, 12);
  sqcRYGate(q, 2.899577545049635, 13);
  sqcRZGate(q, -1.5881141992428291, 13);
  sqcRYGate(q, 0.5998856689321252, 14);
  sqcRZGate(q, 0.3570862461921258, 14);
  sqcRYGate(q, -2.465590619401606, 15);
  sqcRZGate(q, -1.606729461716802, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 2.6923190078735013, 0);
  sqcRZGate(q, 2.1047339532607263, 0);
  sqcRYGate(q, 1.3325660945549975, 1);
  sqcRZGate(q, -1.532462099481433, 1);
  sqcRYGate(q, 0.71356876212801, 2);
  sqcRZGate(q, -2.1689743806927124, 2);
  sqcRYGate(q, -2.2019895412312236, 3);
  sqcRZGate(q, 1.443551893695287, 3);
  sqcRYGate(q, -1.7515656420135757, 4);
  sqcRZGate(q, -1.0445229892134171, 4);
  sqcRYGate(q, -0.06774736705281725, 5);
  sqcRZGate(q, -0.5519357360827152, 5);
  sqcRYGate(q, -3.107108026747768, 6);
  sqcRZGate(q, 1.8058535321300277, 6);
  sqcRYGate(q, -0.00799496789453702, 7);
  sqcRZGate(q, -2.8667755445147667, 7);
  sqcRYGate(q, 3.1332076148664934, 8);
  sqcRZGate(q, -1.2408403998490631, 8);
  sqcRYGate(q, 0.007479587563230843, 9);
  sqcRZGate(q, -2.5918654592229817, 9);
  sqcRYGate(q, 0.0047397777347590875, 10);
  sqcRZGate(q, -0.9315338758165135, 10);
  sqcRYGate(q, -1.9838370052808962, 11);
  sqcRZGate(q, 2.205865368451656, 11);
  sqcRYGate(q, -0.0930641749340051, 12);
  sqcRZGate(q, -0.16521062793808253, 12);
  sqcRYGate(q, -0.25719120938820755, 13);
  sqcRZGate(q, 2.988203987631689, 13);
  sqcRYGate(q, -0.46349117962139275, 14);
  sqcRZGate(q, -1.7128897393151536, 14);
  sqcRYGate(q, -0.8232119784884278, 15);
  sqcRZGate(q, 1.844389847114705, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.7658088539844767, 0);
  sqcRZGate(q, 2.7072192801078776, 0);
  sqcRYGate(q, 2.9054226871441617, 1);
  sqcRZGate(q, -1.1064100908304149, 1);
  sqcRYGate(q, 3.1163645057495097, 2);
  sqcRZGate(q, -0.8236209529576584, 2);
  sqcRYGate(q, -0.1984338058245374, 3);
  sqcRZGate(q, 2.756503863629763, 3);
  sqcRYGate(q, -3.141125613459809, 4);
  sqcRZGate(q, 0.599264805961925, 4);
  sqcRYGate(q, 2.375370892835, 5);
  sqcRZGate(q, 1.6622593867508861, 5);
  sqcRYGate(q, 0.14879102569364794, 6);
  sqcRZGate(q, -2.1205393582743213, 6);
  sqcRYGate(q, -2.6324276615338063, 7);
  sqcRZGate(q, -2.226206971852151, 7);
  sqcRYGate(q, -2.5648028389134745, 8);
  sqcRZGate(q, 1.784719698104797, 8);
  sqcRYGate(q, 0.07672042512081242, 9);
  sqcRZGate(q, 1.317380961710045, 9);
  sqcRYGate(q, 3.0333698070821518, 10);
  sqcRZGate(q, 0.7577562137917075, 10);
  sqcRYGate(q, -0.01655744304979123, 11);
  sqcRZGate(q, -2.159991023143963, 11);
  sqcRYGate(q, -2.3502352091469247, 12);
  sqcRZGate(q, 2.9762215473545433, 12);
  sqcRYGate(q, -3.1359573083739045, 13);
  sqcRZGate(q, -0.6112190001427652, 13);
  sqcRYGate(q, -0.9586881973687529, 14);
  sqcRZGate(q, -2.1895373008972383, 14);
  sqcRYGate(q, -1.6482072942431625, 15);
  sqcRZGate(q, 0.08977529198401864, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -2.371426410703486, 0);
  sqcRZGate(q, 1.866757795830136, 0);
  sqcRYGate(q, -0.2685643195373375, 1);
  sqcRZGate(q, -0.37693260374477505, 1);
  sqcRYGate(q, 1.7768196363521902, 2);
  sqcRZGate(q, -1.9915264765964915, 2);
  sqcRYGate(q, -0.25361934509576084, 3);
  sqcRZGate(q, -1.3793117902108494, 3);
  sqcRYGate(q, 0.9991504411841355, 4);
  sqcRZGate(q, 1.6451329167593098, 4);
  sqcRYGate(q, 3.1377803816663827, 5);
  sqcRZGate(q, 0.14359364404995703, 5);
  sqcRYGate(q, -0.17821654932793457, 6);
  sqcRZGate(q, -2.0146969821702547, 6);
  sqcRYGate(q, 3.1139917379427406, 7);
  sqcRZGate(q, 2.8782258772510207, 7);
  sqcRYGate(q, 3.1335224995393465, 8);
  sqcRZGate(q, -2.57306455157989, 8);
  sqcRYGate(q, 3.130214280685319, 9);
  sqcRZGate(q, -1.80618104143351, 9);
  sqcRYGate(q, -3.137229197417099, 10);
  sqcRZGate(q, 0.8047953544949633, 10);
  sqcRYGate(q, -1.3857854163604586, 11);
  sqcRZGate(q, 2.399868196691353, 11);
  sqcRYGate(q, -0.07672626680985335, 12);
  sqcRZGate(q, 1.8205669634421997, 12);
  sqcRYGate(q, 1.4660636734798234, 13);
  sqcRZGate(q, -1.9243150715775366, 13);
  sqcRYGate(q, -1.645059020262281, 14);
  sqcRZGate(q, 1.4233400344615568, 14);
  sqcRYGate(q, -0.3679822189172794, 15);
  sqcRZGate(q, 1.7668676328387782, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.535317110621395, 0);
  sqcRZGate(q, -0.3000309218254884, 0);
  sqcRYGate(q, 1.521382946884555, 1);
  sqcRZGate(q, 0.11833428669852517, 1);
  sqcRYGate(q, -1.5789357579380985, 2);
  sqcRZGate(q, 0.025894375347038867, 2);
  sqcRYGate(q, 1.9123734103485512, 3);
  sqcRZGate(q, 2.7135416577235225, 3);
  sqcRYGate(q, 1.5093341588567335, 4);
  sqcRZGate(q, 0.043905041840942544, 4);
  sqcRYGate(q, 1.720996127575446, 5);
  sqcRZGate(q, 2.9238359934313727, 5);
  sqcRYGate(q, 1.7318858876585612, 6);
  sqcRZGate(q, 0.01889928291162774, 6);
  sqcRYGate(q, -0.6273088032918165, 7);
  sqcRZGate(q, -3.0850152815655347, 7);
  sqcRYGate(q, -1.5171014077392349, 8);
  sqcRZGate(q, -2.994273219187283, 8);
  sqcRYGate(q, -0.32961528903544407, 9);
  sqcRZGate(q, -0.6869020487780753, 9);
  sqcRYGate(q, -1.0680134223846514, 10);
  sqcRZGate(q, -1.6394611686441962, 10);
  sqcRYGate(q, -0.043043159969889715, 11);
  sqcRZGate(q, -0.699386419449323, 11);
  sqcRYGate(q, -0.7951029251243904, 12);
  sqcRZGate(q, 1.8838403172846285, 12);
  sqcRYGate(q, -1.5617087290495693, 13);
  sqcRZGate(q, -0.020990331970324048, 13);
  sqcRYGate(q, 1.8983333100203887, 14);
  sqcRZGate(q, -2.253284048079539, 14);
  sqcRYGate(q, -1.602836301333955, 15);
  sqcRZGate(q, -0.1324019883435303, 15);

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
