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

  sqcRYGate(q, -2.7965918158048577, 0);
  sqcRYGate(q, -1.3724253206156947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6740223417703772, 0);
  sqcRYGate(q, -0.8530365469895929, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2769525532577373, 1);
  sqcRYGate(q, -2.6201800543934697, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9524975176465089, 1);
  sqcRYGate(q, 2.4896854688145917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.51178082345675, 2);
  sqcRYGate(q, -1.2374197780086504, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0623687161390907, 2);
  sqcRYGate(q, -1.4639393231278235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9465444771088243, 3);
  sqcRYGate(q, -2.334688845800864, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7415647959093734, 3);
  sqcRYGate(q, -0.6856080618309867, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6765668858944878, 4);
  sqcRYGate(q, 3.0371374016608272, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5484229750555767, 4);
  sqcRYGate(q, 1.563453225655395, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9201285501872154, 5);
  sqcRYGate(q, 0.06312300188225625, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2130662422163674, 5);
  sqcRYGate(q, 1.4887865139238097, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.555142441010544, 6);
  sqcRYGate(q, 1.548311025358453, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3473672723964905, 6);
  sqcRYGate(q, 0.16176232034180224, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3947373072267086, 7);
  sqcRYGate(q, 2.9024087429480403, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.8955394581833125, 7);
  sqcRYGate(q, 0.39912252505397916, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.501944985597319, 8);
  sqcRYGate(q, 2.691290646154671, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.148063671863924, 8);
  sqcRYGate(q, -1.7146750537221336, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.063861571737335, 9);
  sqcRYGate(q, 0.5020082273752937, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.103636400938087, 9);
  sqcRYGate(q, -2.207106489171154, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.274224938169746, 10);
  sqcRYGate(q, -1.6119435668917994, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.7740604926748337, 10);
  sqcRYGate(q, 3.028940749170456, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6031376818478205, 0);
  sqcRYGate(q, 2.168736487054818, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1418787572678023, 0);
  sqcRYGate(q, 0.9024599794627031, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.674388160664658, 1);
  sqcRYGate(q, -2.534024735080155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.879762317376664, 1);
  sqcRYGate(q, 1.025134418090757, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.01901986042238146, 2);
  sqcRYGate(q, 0.380001852494682, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4154910652994994, 2);
  sqcRYGate(q, 2.150541797421895, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0390056295255945, 3);
  sqcRYGate(q, -1.4281261116269537, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1380118528379195, 3);
  sqcRYGate(q, -3.125545690806242, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.44017041324930256, 4);
  sqcRYGate(q, 2.010855519992335, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2363147023516632, 4);
  sqcRYGate(q, -2.338724285216711, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7687802570451221, 5);
  sqcRYGate(q, 1.4482751758068995, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.412637424801451, 5);
  sqcRYGate(q, 0.10250066001250879, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.306681137971296, 6);
  sqcRYGate(q, -2.301403238382617, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6082918788079335, 6);
  sqcRYGate(q, 0.007786673471855465, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4773842011608603, 7);
  sqcRYGate(q, -1.0248545899319517, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.2555625797118903, 7);
  sqcRYGate(q, -1.863409089063608, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.255662463563974, 8);
  sqcRYGate(q, -1.527493407358247, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.523117885924909, 8);
  sqcRYGate(q, -1.5839418045200615, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.338674987295482, 9);
  sqcRYGate(q, -3.0246063890804975, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.7592539053295493, 9);
  sqcRYGate(q, 1.5356941073970358, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.1678712990598665, 10);
  sqcRYGate(q, -1.7876704313014287, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8971614205573424, 10);
  sqcRYGate(q, 1.9374605363119441, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.1104107272313382, 0);
  sqcRYGate(q, 0.8418201260293017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.586391381595187, 0);
  sqcRYGate(q, 0.8483308513173514, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8331076475182626, 1);
  sqcRYGate(q, 0.28981625702841496, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2811531285793176, 1);
  sqcRYGate(q, 1.5226515868233301, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.048345651270954, 2);
  sqcRYGate(q, 1.8280008710880902, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4753490618729608, 2);
  sqcRYGate(q, -2.7409249682682146, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1609848130868405, 3);
  sqcRYGate(q, -0.988447597520844, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.090474146742301, 3);
  sqcRYGate(q, 3.1191624424349875, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.037593201023662814, 4);
  sqcRYGate(q, -0.4754274257408665, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6889414153203337, 4);
  sqcRYGate(q, 0.16523749739067028, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1469643513309011, 5);
  sqcRYGate(q, -0.8864225696541219, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5694108953653032, 5);
  sqcRYGate(q, 1.6126157632445006, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.712705210944148, 6);
  sqcRYGate(q, -1.5119742128890932, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3764117919205687, 6);
  sqcRYGate(q, -0.782413489360915, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0622879941582157, 7);
  sqcRYGate(q, 1.8909291531110508, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.7678543733149605, 7);
  sqcRYGate(q, 1.9656632398538072, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.4904044929414517, 8);
  sqcRYGate(q, 1.4375307325537299, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.089773706536264, 8);
  sqcRYGate(q, -0.3297310031970889, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.527644541321884, 9);
  sqcRYGate(q, -1.8824229665284555, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2311036758346292, 9);
  sqcRYGate(q, 2.355124800072249, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.8357941720865361, 10);
  sqcRYGate(q, -0.9886554006992909, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.5774223264328424, 10);
  sqcRYGate(q, -0.548300348984295, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0150347832509379, 0);
  sqcRYGate(q, 1.711069445961994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2986619263771333, 0);
  sqcRYGate(q, 3.118830104293992, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3063787284537591, 1);
  sqcRYGate(q, -2.1960119186744436, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6738563319960427, 1);
  sqcRYGate(q, -1.3330942858447177, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5253042684102496, 2);
  sqcRYGate(q, 3.0738049622919768, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9631110552528966, 2);
  sqcRYGate(q, 1.1146284020483144, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7999272308495389, 3);
  sqcRYGate(q, -2.9944497030041934, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.004001905140964, 3);
  sqcRYGate(q, -3.1218248936781197, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.910290439685529, 4);
  sqcRYGate(q, -0.031148282797480886, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.568982305378327, 4);
  sqcRYGate(q, 0.236027931439601, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5440855100902742, 5);
  sqcRYGate(q, 0.5143353490157438, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.010663113424826065, 5);
  sqcRYGate(q, 0.1673905518242229, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.514211538752873, 6);
  sqcRYGate(q, -1.5595730878924794, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9855228876268367, 6);
  sqcRYGate(q, 2.893133396342401, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.636147541257202, 7);
  sqcRYGate(q, -3.1390644729094066, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.2856575008214008, 7);
  sqcRYGate(q, 1.4158999464445299, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.8634784517848797, 8);
  sqcRYGate(q, -2.697031109618214, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.6148173689664893, 8);
  sqcRYGate(q, 2.6734756738387904, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9580788204614676, 9);
  sqcRYGate(q, -2.201847049241512, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.669197560099505, 9);
  sqcRYGate(q, -1.999544120935764, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.02741563537309618, 10);
  sqcRYGate(q, -2.9037586120370036, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.38086874715117425, 10);
  sqcRYGate(q, -2.9249616412225685, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.3393502257994393, 0);
  sqcRYGate(q, -0.595753830087914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7933943894669993, 0);
  sqcRYGate(q, -1.7952149115012936, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7002650057890163, 1);
  sqcRYGate(q, 2.9639043090495463, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.457358202133132, 1);
  sqcRYGate(q, -1.6823062143133032, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9789503958156747, 2);
  sqcRYGate(q, -2.111559274881886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0149897747592824, 2);
  sqcRYGate(q, 1.7739710157957393, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6969227284503368, 3);
  sqcRYGate(q, 1.6375035579011339, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5721338182260722, 3);
  sqcRYGate(q, 0.00962746930990751, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.004653677332453476, 4);
  sqcRYGate(q, 0.08308050765967234, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5531019729206876, 4);
  sqcRYGate(q, 1.550023835130448, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7051581890112546, 5);
  sqcRYGate(q, 3.1124148345435825, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8256294179599104, 5);
  sqcRYGate(q, 3.0553063509286673, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.024962482425421657, 6);
  sqcRYGate(q, -1.1160327253748332, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.789544205203321, 6);
  sqcRYGate(q, -2.921192473953917, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.450603384563936, 7);
  sqcRYGate(q, 1.1305152190254573, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0963921028688675, 7);
  sqcRYGate(q, -3.1055246682939726, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6217127329344285, 8);
  sqcRYGate(q, -1.666020565361626, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8576481820539444, 8);
  sqcRYGate(q, 2.290285669531608, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.5399309435857216, 9);
  sqcRYGate(q, 2.481942087070798, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.0717863025160528, 9);
  sqcRYGate(q, 1.7753668852365783, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.8805462080557008, 10);
  sqcRYGate(q, -1.8663732307834844, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.026950462594796, 10);
  sqcRYGate(q, -2.6537602602299706, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.4244973515395154, 0);
  sqcRYGate(q, -1.3289200179770024, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8062614409247177, 0);
  sqcRYGate(q, 1.6108610813639332, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6870154272201887, 1);
  sqcRYGate(q, 0.3711471454833404, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3660485351463088, 1);
  sqcRYGate(q, -3.0752819298548717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8464977122987059, 2);
  sqcRYGate(q, 0.9512574729236906, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.135044353636681, 2);
  sqcRYGate(q, -3.0603205818766606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.643327043069731, 3);
  sqcRYGate(q, -0.19587760289120926, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5764180828621779, 3);
  sqcRYGate(q, -1.210013436179828, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1401203655071517, 4);
  sqcRYGate(q, 1.7701952560298713, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5748002395647762, 4);
  sqcRYGate(q, 3.1412383439916933, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.620926736405617, 5);
  sqcRYGate(q, 1.4951656655336443, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6175067279579165, 5);
  sqcRYGate(q, -1.49864381496363, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.496721580532573, 6);
  sqcRYGate(q, 2.3622669806306065, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.654213810941565, 6);
  sqcRYGate(q, -1.3571712275874221, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4992457961437466, 7);
  sqcRYGate(q, 0.7400191025163849, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0061768975168883244, 7);
  sqcRYGate(q, 0.10007531661327818, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.9886930363946276, 8);
  sqcRYGate(q, 1.8960021537953595, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.266661646127079, 8);
  sqcRYGate(q, -1.0958518616734008, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.4074882164970113, 9);
  sqcRYGate(q, 1.8592597106923334, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.22854855356629414, 9);
  sqcRYGate(q, -1.0601423448518446, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5177333388658099, 10);
  sqcRYGate(q, 1.2584284977376667, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2272051276716638, 10);
  sqcRYGate(q, -2.8384556315742038, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.074673927963064, 0);
  sqcRYGate(q, 1.3135170308673914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5008528164857218, 0);
  sqcRYGate(q, -3.1144384490963466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1695983691133343, 1);
  sqcRYGate(q, -1.5463222852036476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2054547290991164, 1);
  sqcRYGate(q, -0.5843934347478339, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.418241331988628, 2);
  sqcRYGate(q, -2.5019648211779275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.453804297503865, 2);
  sqcRYGate(q, 0.06753619356378861, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6097486196995603, 3);
  sqcRYGate(q, 1.5866454986517236, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5133571357465454, 3);
  sqcRYGate(q, 1.612831847877683, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6698491704594982, 4);
  sqcRYGate(q, 1.3196454378640547, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.023475775009663913, 4);
  sqcRYGate(q, -1.5052071157347031, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4059789896887818, 5);
  sqcRYGate(q, 1.66590121319184, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2116140583605093, 5);
  sqcRYGate(q, 0.015093676818887401, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7914270559980325, 6);
  sqcRYGate(q, -3.0704199275377477, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.867965911676508, 6);
  sqcRYGate(q, 1.9169024406658688, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.363062717218542, 7);
  sqcRYGate(q, 2.482288778027718, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.135959909096043, 7);
  sqcRYGate(q, 3.109310859168068, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.1280951089263613, 8);
  sqcRYGate(q, -0.8355929257933296, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9916002330799603, 8);
  sqcRYGate(q, -1.6192605605400312, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.6154360318281014, 9);
  sqcRYGate(q, -0.6512769444713475, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.625025201343891, 9);
  sqcRYGate(q, 1.7486439390203679, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.8485355249892717, 10);
  sqcRYGate(q, -1.7686384247498064, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2670650027934203, 10);
  sqcRYGate(q, 1.859359337096627, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.0800857270587958, 0);
  sqcRYGate(q, 1.4992349450753764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8169189260709686, 0);
  sqcRYGate(q, -2.3236439873462937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0580357673109018, 1);
  sqcRYGate(q, 1.4389469680456701, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7853280710461652, 1);
  sqcRYGate(q, 0.010250581534695158, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3274252055202966, 2);
  sqcRYGate(q, -1.9901023017015849, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5653523540301149, 2);
  sqcRYGate(q, -2.9847646231006713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2696902098489558, 3);
  sqcRYGate(q, 1.62999432127447, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.048397080213096806, 3);
  sqcRYGate(q, 0.001665012694543222, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.325158854537797, 4);
  sqcRYGate(q, -0.31211928637783054, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.022507319810295634, 4);
  sqcRYGate(q, -1.4412852676954722, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4142953199653898, 5);
  sqcRYGate(q, 0.6465013893581932, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.09444181347900658, 5);
  sqcRYGate(q, -3.0904698133825486, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5597350167866919, 6);
  sqcRYGate(q, -2.884985436063446, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.904330594935483, 6);
  sqcRYGate(q, 1.5138031423514127, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6566354794311648, 7);
  sqcRYGate(q, -2.8842132347727283, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.8427133511842726, 7);
  sqcRYGate(q, -3.0825728319336747, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5663811680105635, 8);
  sqcRYGate(q, -0.7650583911422064, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1304236733036066, 8);
  sqcRYGate(q, 1.8833508067852134, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.317250451264091, 9);
  sqcRYGate(q, 3.0629752067747256, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.994449625789053, 9);
  sqcRYGate(q, 1.3834439398115963, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.1511688990651168, 10);
  sqcRYGate(q, 0.9012380134244128, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.511671140335885, 10);
  sqcRYGate(q, -1.5196281861553482, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.24480269487194517, 0);
  sqcRYGate(q, -2.2865192349311534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.27631093893603, 0);
  sqcRYGate(q, 2.4584042852944177, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5429114953779655, 1);
  sqcRYGate(q, -0.231852427752683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5930841547005623, 1);
  sqcRYGate(q, 2.3574521322375595, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0307798819551369, 2);
  sqcRYGate(q, -2.875559148999456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5250557305431744, 2);
  sqcRYGate(q, 1.5696424485828535, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9754581000060671, 3);
  sqcRYGate(q, 3.04692432785867, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.23545181155555578, 3);
  sqcRYGate(q, -0.05861653642604731, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5444682592333785, 4);
  sqcRYGate(q, -0.9780056312926844, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.14602694061812546, 4);
  sqcRYGate(q, -1.3349470274907143, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8526425908560098, 5);
  sqcRYGate(q, 2.336946248037445, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.07259119827497744, 5);
  sqcRYGate(q, 3.1091154138635764, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9512359193689504, 6);
  sqcRYGate(q, -1.330975818660475, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7500366355942117, 6);
  sqcRYGate(q, 0.12739916670643653, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6081883237223875, 7);
  sqcRYGate(q, -1.7839118998680183, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.8716197630958993, 7);
  sqcRYGate(q, 1.5505782586198515, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.8788685210999567, 8);
  sqcRYGate(q, 2.0226947468363354, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.7246980236013663, 8);
  sqcRYGate(q, -0.12351005920826008, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8110675499237103, 9);
  sqcRYGate(q, 1.7329008894119768, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.5506730108038744, 9);
  sqcRYGate(q, 2.1677590307287145, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.51801806272099, 10);
  sqcRYGate(q, 1.8285179202275144, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8822121825713778, 10);
  sqcRYGate(q, -0.28467841629163765, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.631577107833376, 0);
  sqcRYGate(q, -3.1310925130790523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.598969297553456, 0);
  sqcRYGate(q, 1.5689697592016767, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5752823375340346, 1);
  sqcRYGate(q, 1.4573455366741508, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5514823803820699, 1);
  sqcRYGate(q, 1.5917178948777724, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7937505135395297, 2);
  sqcRYGate(q, -0.9057980957783247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4840150001418355, 2);
  sqcRYGate(q, -1.6845164003579736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.429746735352663, 3);
  sqcRYGate(q, 0.10028095827566906, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.221149212310814, 3);
  sqcRYGate(q, -3.092188594438639, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.13891034773705968, 4);
  sqcRYGate(q, -2.0379396896398454, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8690664168099493, 4);
  sqcRYGate(q, 1.6314679963912635, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1692372631370961, 5);
  sqcRYGate(q, 1.5605285095472792, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.08535281292727957, 5);
  sqcRYGate(q, 3.1371398207902073, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5144799162582316, 6);
  sqcRYGate(q, 1.5341816076766879, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2542703019969306, 6);
  sqcRYGate(q, 2.6687288142123364, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.644952742489787, 7);
  sqcRYGate(q, 0.9601575960060362, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.952269856137797, 7);
  sqcRYGate(q, -0.05301418711666518, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.45360754800241, 8);
  sqcRYGate(q, 2.1978123188051786, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7081179904406583, 8);
  sqcRYGate(q, -2.8802604273052803, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4782444746871555, 9);
  sqcRYGate(q, -1.4440182961081358, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.6428349875147825, 9);
  sqcRYGate(q, -1.340726194340803, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.42349477096068, 10);
  sqcRYGate(q, 0.8532468909714599, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7014246413656107, 10);
  sqcRYGate(q, -1.4986111641659914, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6479257842232746, 0);
  sqcRYGate(q, 2.246592764462755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0267914829533815, 0);
  sqcRYGate(q, -2.588414454934532, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.16369918874827327, 1);
  sqcRYGate(q, 1.7067056396503968, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2488833337429734, 1);
  sqcRYGate(q, -3.133682722354603, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4270702122382084, 2);
  sqcRYGate(q, -3.0960108705553933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.126870715453209, 2);
  sqcRYGate(q, 0.0937972703322265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.19736928162201828, 3);
  sqcRYGate(q, 2.6937297278781775, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.361783894179327, 3);
  sqcRYGate(q, 2.5747156812179037, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1352504260690024, 4);
  sqcRYGate(q, 2.77804165623446, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.06786831758791498, 4);
  sqcRYGate(q, -2.134592669089054, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0337565371094004, 5);
  sqcRYGate(q, -1.5885688569015333, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5999253292969593, 5);
  sqcRYGate(q, -2.9308599640973743, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5948813355749305, 6);
  sqcRYGate(q, 1.151163917473288, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.587340283201999, 6);
  sqcRYGate(q, 2.036922113740812, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6725637906900992, 7);
  sqcRYGate(q, -2.067272285370514, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.08125695569440605, 7);
  sqcRYGate(q, -1.5877053176835723, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.4061888146722357, 8);
  sqcRYGate(q, -1.1457751179085438, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.7587768369883942, 8);
  sqcRYGate(q, 3.0485948713629205, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7494420149699934, 9);
  sqcRYGate(q, 2.484413397862936, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.07443977782353982, 9);
  sqcRYGate(q, -1.0262435088159814, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.8221326821271573, 10);
  sqcRYGate(q, -1.6197278441931193, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.220595851381658, 10);
  sqcRYGate(q, 3.041519320957745, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.12958016575820608, 0);
  sqcRYGate(q, -0.4508682554602954, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1675754523284239, 0);
  sqcRYGate(q, -1.1133370913353349, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.055771077792476, 1);
  sqcRYGate(q, 2.28926385219937, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5326661373028636, 1);
  sqcRYGate(q, -1.592813704932981, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7569212436648267, 2);
  sqcRYGate(q, 0.4451442633025211, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.125973222911414, 2);
  sqcRYGate(q, 0.017152493455376477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4554845586348861, 3);
  sqcRYGate(q, -3.0878878203584734, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4697443921387618, 3);
  sqcRYGate(q, -2.7740894976152175, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.040113228200452, 4);
  sqcRYGate(q, -1.735454411733826, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.009592233528212368, 4);
  sqcRYGate(q, -2.9652103218621844, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.783454494134161, 5);
  sqcRYGate(q, -0.8762414159729319, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.029186173387827353, 5);
  sqcRYGate(q, -0.09489150660278513, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4471437012587645, 6);
  sqcRYGate(q, -2.646865535044534, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1024449199519792, 6);
  sqcRYGate(q, 1.572021096760648, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0587091914332247, 7);
  sqcRYGate(q, 1.4136804154582912, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.03444622089849325, 7);
  sqcRYGate(q, 1.5645282830969556, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.4630800910656516, 8);
  sqcRYGate(q, 1.748867552077594, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.323631398449138, 8);
  sqcRYGate(q, -3.0823370485450625, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.2895432675524763, 9);
  sqcRYGate(q, -2.4805515672630247, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.672110267470317, 9);
  sqcRYGate(q, -1.9394933372542082, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.019865126301096048, 10);
  sqcRYGate(q, 1.6534797808028245, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6353772202702858, 10);
  sqcRYGate(q, 1.6572357606174073, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.1764073455485886, 0);
  sqcRYGate(q, 2.3097489359009513, 1);
  sqcRYGate(q, 1.2072992151784732, 2);
  sqcRYGate(q, -0.2990854047805591, 3);
  sqcRYGate(q, -1.0504761660436914, 4);
  sqcRYGate(q, -1.8958474735173576, 5);
  sqcRYGate(q, -0.7243129870423956, 6);
  sqcRYGate(q, -1.763513890733858, 7);
  sqcRYGate(q, -0.16488113970162635, 8);
  sqcRYGate(q, -2.5832832772948127, 9);
  sqcRYGate(q, 0.018282597968414534, 10);
  sqcRYGate(q, -2.2430729398455895, 11);

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
