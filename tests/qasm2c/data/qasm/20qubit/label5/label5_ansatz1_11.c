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

  sqcRYGate(q, -1.2324786423388512, 0);
  sqcRZGate(q, 0.7724091559074998, 0);
  sqcRYGate(q, -1.1329212332723244, 1);
  sqcRZGate(q, -0.568284442002856, 1);
  sqcRYGate(q, 0.05025415555545365, 2);
  sqcRZGate(q, -2.6262614405921854, 2);
  sqcRYGate(q, 0.007277052612032264, 3);
  sqcRZGate(q, 0.7115028348719364, 3);
  sqcRYGate(q, 0.9672939695150182, 4);
  sqcRZGate(q, -1.0969768948600267, 4);
  sqcRYGate(q, 0.3119180783591391, 5);
  sqcRZGate(q, 1.914909733547537, 5);
  sqcRYGate(q, -3.099041025970288, 6);
  sqcRZGate(q, -2.471499452740469, 6);
  sqcRYGate(q, -3.0095895160017303, 7);
  sqcRZGate(q, 2.546381772181297, 7);
  sqcRYGate(q, -1.9302461411129412, 8);
  sqcRZGate(q, 1.225293501766185, 8);
  sqcRYGate(q, -0.0035432198535181314, 9);
  sqcRZGate(q, 1.1625684889227639, 9);
  sqcRYGate(q, 2.388644103460508, 10);
  sqcRZGate(q, 1.1409766080345207, 10);
  sqcRYGate(q, 1.6808713619599267, 11);
  sqcRZGate(q, 2.2855972526320496, 11);
  sqcRYGate(q, 2.668425491293134, 12);
  sqcRZGate(q, -2.723846588031589, 12);
  sqcRYGate(q, -3.1284974387605256, 13);
  sqcRZGate(q, -1.858787259679696, 13);
  sqcRYGate(q, 0.40544079468454, 14);
  sqcRZGate(q, 0.9232322825646269, 14);
  sqcRYGate(q, 1.7165359249291852, 15);
  sqcRZGate(q, 0.7285459824876597, 15);
  sqcRYGate(q, 3.1128521325142366, 16);
  sqcRZGate(q, 0.494912303193618, 16);
  sqcRYGate(q, 0.058707515770660024, 17);
  sqcRZGate(q, -3.020494242086788, 17);
  sqcRYGate(q, 1.1070399819760255, 18);
  sqcRZGate(q, 1.7320805592319857, 18);
  sqcRYGate(q, -2.8284872718035077, 19);
  sqcRZGate(q, 2.482849644203115, 19);
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
  sqcRYGate(q, 1.1259471930445573, 0);
  sqcRZGate(q, 1.9149796336502634, 0);
  sqcRYGate(q, -2.155197240236703, 1);
  sqcRZGate(q, 2.2877786597319254, 1);
  sqcRYGate(q, 2.8643479793120816, 2);
  sqcRZGate(q, 1.7272510437165038, 2);
  sqcRYGate(q, -3.046882107084467, 3);
  sqcRZGate(q, 0.6741433253581626, 3);
  sqcRYGate(q, -1.6769875022280072, 4);
  sqcRZGate(q, 0.06020805308239034, 4);
  sqcRYGate(q, -0.5216336184218688, 5);
  sqcRZGate(q, -2.011017890842022, 5);
  sqcRYGate(q, 0.04346633231668394, 6);
  sqcRZGate(q, 1.3516164385782587, 6);
  sqcRYGate(q, -0.7354152726386872, 7);
  sqcRZGate(q, 3.1255289009753646, 7);
  sqcRYGate(q, 2.3570913847356767, 8);
  sqcRZGate(q, 1.8149274083150244, 8);
  sqcRYGate(q, -3.141369677068144, 9);
  sqcRZGate(q, 2.2364584207911924, 9);
  sqcRYGate(q, 1.1913916364191126, 10);
  sqcRZGate(q, -0.21017711155431645, 10);
  sqcRYGate(q, 2.3563874905081303, 11);
  sqcRZGate(q, -0.02198199224826549, 11);
  sqcRYGate(q, 2.3147890721652318, 12);
  sqcRZGate(q, -2.9097567542762346, 12);
  sqcRYGate(q, -0.009786203652379479, 13);
  sqcRZGate(q, -0.4373803733696162, 13);
  sqcRYGate(q, 2.5106734771135475, 14);
  sqcRZGate(q, -2.362636783420121, 14);
  sqcRYGate(q, -0.6013463289424363, 15);
  sqcRZGate(q, -1.2420112831801582, 15);
  sqcRYGate(q, 0.08584672290480544, 16);
  sqcRZGate(q, 3.016658153764042, 16);
  sqcRYGate(q, 0.08661496545824773, 17);
  sqcRZGate(q, 0.25076796596289125, 17);
  sqcRYGate(q, -2.291894198364097, 18);
  sqcRZGate(q, 3.0147015529635754, 18);
  sqcRYGate(q, 1.8641780507246948, 19);
  sqcRZGate(q, 1.1451687661679097, 19);
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
  sqcRYGate(q, -1.1443918671050064, 0);
  sqcRZGate(q, 2.310718589908533, 0);
  sqcRYGate(q, 0.1509444658024055, 1);
  sqcRZGate(q, -2.020772831634682, 1);
  sqcRYGate(q, 3.110124900291402, 2);
  sqcRZGate(q, 0.9806682931434154, 2);
  sqcRYGate(q, 0.04587658046035471, 3);
  sqcRZGate(q, 3.0710971052730454, 3);
  sqcRYGate(q, -2.246426269937356, 4);
  sqcRZGate(q, -3.0433280443630344, 4);
  sqcRYGate(q, -2.6230568092754116, 5);
  sqcRZGate(q, 2.895565079432892, 5);
  sqcRYGate(q, -1.4841854067995843, 6);
  sqcRZGate(q, 2.75557370428016, 6);
  sqcRYGate(q, -1.5445384233153971, 7);
  sqcRZGate(q, 1.5664122491261687, 7);
  sqcRYGate(q, 0.091536341208078, 8);
  sqcRZGate(q, 0.9076525371450805, 8);
  sqcRYGate(q, -3.1389766161151833, 9);
  sqcRZGate(q, -2.919570945352955, 9);
  sqcRYGate(q, -0.5688594578300457, 10);
  sqcRZGate(q, -0.3267591440134252, 10);
  sqcRYGate(q, 1.0318806404328562, 11);
  sqcRZGate(q, -2.401646400102402, 11);
  sqcRYGate(q, 0.4502297102474731, 12);
  sqcRZGate(q, -1.4683666855410076, 12);
  sqcRYGate(q, 3.1357162716143954, 13);
  sqcRZGate(q, 2.749653934871252, 13);
  sqcRYGate(q, 1.7474270649537944, 14);
  sqcRZGate(q, 0.09831964132713189, 14);
  sqcRYGate(q, 2.121011179712762, 15);
  sqcRZGate(q, -3.0718308755829065, 15);
  sqcRYGate(q, -0.04786721617715679, 16);
  sqcRZGate(q, -1.2848836999626374, 16);
  sqcRYGate(q, 1.0252391345297438, 17);
  sqcRZGate(q, 2.9841408635617084, 17);
  sqcRYGate(q, -0.5602414810849636, 18);
  sqcRZGate(q, 2.245314987994262, 18);
  sqcRYGate(q, -2.7661691440519567, 19);
  sqcRZGate(q, -2.674794574001018, 19);
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
  sqcRYGate(q, 0.8154779582645915, 0);
  sqcRZGate(q, 1.0671525465592664, 0);
  sqcRYGate(q, 0.0017474371403059948, 1);
  sqcRZGate(q, 1.5378481072610923, 1);
  sqcRYGate(q, -2.970484099090739, 2);
  sqcRZGate(q, -2.5641764045114144, 2);
  sqcRYGate(q, -3.071188563418401, 3);
  sqcRZGate(q, 2.6277705461272127, 3);
  sqcRYGate(q, 1.4315461433526782, 4);
  sqcRZGate(q, -1.2238162472909053, 4);
  sqcRYGate(q, -0.045196152538054875, 5);
  sqcRZGate(q, 2.2022729487051036, 5);
  sqcRYGate(q, 0.28853316951712504, 6);
  sqcRZGate(q, 2.061685212120951, 6);
  sqcRYGate(q, -1.5511755796805078, 7);
  sqcRZGate(q, 1.019084712378734, 7);
  sqcRYGate(q, -1.526074448835268, 8);
  sqcRZGate(q, 2.2059164818487225, 8);
  sqcRYGate(q, 0.0010036303632672272, 9);
  sqcRZGate(q, 0.9835199110223781, 9);
  sqcRYGate(q, 2.3885236743967067, 10);
  sqcRZGate(q, -1.4269055128631138, 10);
  sqcRYGate(q, -2.9830340618753666, 11);
  sqcRZGate(q, 2.5483183590970735, 11);
  sqcRYGate(q, 0.9195963283828552, 12);
  sqcRZGate(q, 2.457788228298329, 12);
  sqcRYGate(q, -0.005606288096533518, 13);
  sqcRZGate(q, 1.4345579534313764, 13);
  sqcRYGate(q, 3.017213787467986, 14);
  sqcRZGate(q, -2.225408924777949, 14);
  sqcRYGate(q, -0.22672184238748905, 15);
  sqcRZGate(q, 1.1984843087621402, 15);
  sqcRYGate(q, 1.5468808704587629, 16);
  sqcRZGate(q, -2.456653051463706, 16);
  sqcRYGate(q, -2.0165433111431237, 17);
  sqcRZGate(q, 1.807231759136429, 17);
  sqcRYGate(q, 1.027146672535613, 18);
  sqcRZGate(q, -0.8612738532901051, 18);
  sqcRYGate(q, 0.5285663913896768, 19);
  sqcRZGate(q, -2.652868354190437, 19);
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
  sqcRYGate(q, -0.6133136754786861, 0);
  sqcRZGate(q, 0.7320909142856868, 0);
  sqcRYGate(q, 0.3661784887922795, 1);
  sqcRZGate(q, -2.242467976758147, 1);
  sqcRYGate(q, 0.058330285057515995, 2);
  sqcRZGate(q, -2.2765600076359913, 2);
  sqcRYGate(q, -1.4791275174047573, 3);
  sqcRZGate(q, 3.0230880299347116, 3);
  sqcRYGate(q, 0.12794894124184797, 4);
  sqcRZGate(q, -1.1522372059184536, 4);
  sqcRYGate(q, -0.20171801919033247, 5);
  sqcRZGate(q, 0.5890607764258319, 5);
  sqcRYGate(q, 1.5434956448262571, 6);
  sqcRZGate(q, -1.7469159130009668, 6);
  sqcRYGate(q, -0.29254750546343217, 7);
  sqcRZGate(q, -2.087238541851021, 7);
  sqcRYGate(q, -2.605317599477576, 8);
  sqcRZGate(q, 0.03228965888198587, 8);
  sqcRYGate(q, -2.6042260909332944, 9);
  sqcRZGate(q, 1.957365775419352, 9);
  sqcRYGate(q, -1.9156121021571213, 10);
  sqcRZGate(q, -0.9984509332815303, 10);
  sqcRYGate(q, -2.4094689090928854, 11);
  sqcRZGate(q, 0.3574501985092615, 11);
  sqcRYGate(q, 1.3849256787267183, 12);
  sqcRZGate(q, 2.20158398896153, 12);
  sqcRYGate(q, 1.5777352540497454, 13);
  sqcRZGate(q, 2.270664317084657, 13);
  sqcRYGate(q, -0.049472088737781306, 14);
  sqcRZGate(q, 1.3666632914624195, 14);
  sqcRYGate(q, 1.880914146915023, 15);
  sqcRZGate(q, -3.1153777048688576, 15);
  sqcRYGate(q, -0.004515647262893484, 16);
  sqcRZGate(q, -2.3134949908709017, 16);
  sqcRYGate(q, 0.02087228291641286, 17);
  sqcRZGate(q, 2.429901797262345, 17);
  sqcRYGate(q, -3.0844281160879223, 18);
  sqcRZGate(q, 1.1228261826171448, 18);
  sqcRYGate(q, 0.9735639736974253, 19);
  sqcRZGate(q, -0.8582573789420986, 19);
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
  sqcRYGate(q, -3.1159610220244596, 0);
  sqcRZGate(q, -0.16182714506599358, 0);
  sqcRYGate(q, 2.1034287988841394, 1);
  sqcRZGate(q, -0.7889789338279607, 1);
  sqcRYGate(q, -1.578735398063875, 2);
  sqcRZGate(q, 0.01862103846555652, 2);
  sqcRYGate(q, 1.7498868050342624, 3);
  sqcRZGate(q, 2.102897225587882, 3);
  sqcRYGate(q, 3.100414831940387, 4);
  sqcRZGate(q, -0.3770794687974597, 4);
  sqcRYGate(q, 0.008905746490632362, 5);
  sqcRZGate(q, 2.6116154168257477, 5);
  sqcRYGate(q, 2.1007413407472253, 6);
  sqcRZGate(q, -3.066923338929369, 6);
  sqcRYGate(q, 0.06837763947149345, 7);
  sqcRZGate(q, 2.85243990703622, 7);
  sqcRYGate(q, -1.4795718227836345, 8);
  sqcRZGate(q, -2.5863715568570527, 8);
  sqcRYGate(q, 2.646439433478679, 9);
  sqcRZGate(q, -3.134798694819272, 9);
  sqcRYGate(q, -1.390300429155269, 10);
  sqcRZGate(q, -3.140514266260305, 10);
  sqcRYGate(q, 1.5221189855849573, 11);
  sqcRZGate(q, 0.4354776001441424, 11);
  sqcRYGate(q, 1.5413493598587722, 12);
  sqcRZGate(q, 0.0031582108552425936, 12);
  sqcRYGate(q, 1.5635864929654701, 13);
  sqcRZGate(q, 1.7626487493725964, 13);
  sqcRYGate(q, -8.687542306241424e-07, 14);
  sqcRZGate(q, 3.028989292203498, 14);
  sqcRYGate(q, -1.9935403952414374, 15);
  sqcRZGate(q, 0.017375390680345066, 15);
  sqcRYGate(q, -3.139874993201379, 16);
  sqcRZGate(q, -1.7561677050556892, 16);
  sqcRYGate(q, -2.024023208570676, 17);
  sqcRZGate(q, 3.1410295342924264, 17);
  sqcRYGate(q, 1.7939526571189273, 18);
  sqcRZGate(q, 1.638929115603501, 18);
  sqcRYGate(q, -1.875598488304223, 19);
  sqcRZGate(q, 2.135044705823444, 19);
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
  sqcRYGate(q, -1.0070894562345665, 0);
  sqcRZGate(q, -2.504791253328471, 0);
  sqcRYGate(q, 3.010520268969551, 1);
  sqcRZGate(q, -0.7842016169267715, 1);
  sqcRYGate(q, 0.06406556053603535, 2);
  sqcRZGate(q, -1.4572825885270095, 2);
  sqcRYGate(q, -1.5492818535432225, 3);
  sqcRZGate(q, -2.0777850400476856, 3);
  sqcRYGate(q, 1.4832673056184278, 4);
  sqcRZGate(q, 0.0830059793608866, 4);
  sqcRYGate(q, -2.4122149769067605, 5);
  sqcRZGate(q, 2.8745239588919436, 5);
  sqcRYGate(q, -1.870297627825904, 6);
  sqcRZGate(q, 0.47316801046445, 6);
  sqcRYGate(q, 3.13385104214909, 7);
  sqcRZGate(q, 0.8928506561507099, 7);
  sqcRYGate(q, 3.139369212742311, 8);
  sqcRZGate(q, 0.5544815949598378, 8);
  sqcRYGate(q, -1.5129038508048058, 9);
  sqcRZGate(q, -0.020568420472187654, 9);
  sqcRYGate(q, -1.3326184259336005, 10);
  sqcRZGate(q, 0.0029492992021031843, 10);
  sqcRYGate(q, -1.5797948081406419, 11);
  sqcRZGate(q, 0.7879298195087384, 11);
  sqcRYGate(q, -1.5667206111411964, 12);
  sqcRZGate(q, 1.3817429207494616, 12);
  sqcRYGate(q, 0.016778462589784705, 13);
  sqcRZGate(q, 1.3588964694466454, 13);
  sqcRYGate(q, 0.5329760939673197, 14);
  sqcRZGate(q, -0.013213239536050025, 14);
  sqcRYGate(q, 1.238689540085774, 15);
  sqcRZGate(q, -1.6722674433121023, 15);
  sqcRYGate(q, -3.1402210745308192, 16);
  sqcRZGate(q, -0.6589538280641758, 16);
  sqcRYGate(q, 0.045474752304640376, 17);
  sqcRZGate(q, 1.9934403058915144, 17);
  sqcRYGate(q, -0.32474821534179354, 18);
  sqcRZGate(q, -0.43831010501315515, 18);
  sqcRYGate(q, -0.5855289486710289, 19);
  sqcRZGate(q, 0.2678195626726474, 19);
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
  sqcRYGate(q, 3.054495645367787, 0);
  sqcRZGate(q, -2.6821804160122413, 0);
  sqcRYGate(q, 2.950578616787323, 1);
  sqcRZGate(q, -2.900430519375618, 1);
  sqcRYGate(q, -2.3109602263694957, 2);
  sqcRZGate(q, -1.8987930287484793, 2);
  sqcRYGate(q, 0.7157251028576876, 3);
  sqcRZGate(q, -2.9452839044960033, 3);
  sqcRYGate(q, -0.00031122215273691003, 4);
  sqcRZGate(q, 2.842944517466771, 4);
  sqcRYGate(q, 3.1398674694710893, 5);
  sqcRZGate(q, -1.418591451397473, 5);
  sqcRYGate(q, 0.7576172858755728, 6);
  sqcRZGate(q, -1.676322100852933, 6);
  sqcRYGate(q, -0.2260210060133998, 7);
  sqcRZGate(q, 2.019837785535108, 7);
  sqcRYGate(q, 2.495665204486847, 8);
  sqcRZGate(q, 0.00221141078939226, 8);
  sqcRYGate(q, -2.593142381432339, 9);
  sqcRZGate(q, -1.2770317868874745, 9);
  sqcRYGate(q, -1.5433551641580736, 10);
  sqcRZGate(q, 3.1414851529794197, 10);
  sqcRYGate(q, 3.0157731013291813, 11);
  sqcRZGate(q, 1.1079904566504641, 11);
  sqcRYGate(q, 2.7587489386959754, 12);
  sqcRZGate(q, 3.1283169588770265, 12);
  sqcRYGate(q, -1.6205751968624518, 13);
  sqcRZGate(q, -1.5767189395039454, 13);
  sqcRYGate(q, 0.11369902464303562, 14);
  sqcRZGate(q, -3.123903597289701, 14);
  sqcRYGate(q, -1.5167227695871732, 15);
  sqcRZGate(q, -1.5705303800308363, 15);
  sqcRYGate(q, -3.1121236429085117, 16);
  sqcRZGate(q, -2.022873021791426, 16);
  sqcRYGate(q, 3.082188303532589, 17);
  sqcRZGate(q, -3.035947903671284, 17);
  sqcRYGate(q, -0.17862019751189706, 18);
  sqcRZGate(q, 0.1513551201989189, 18);
  sqcRYGate(q, 2.884731005135029, 19);
  sqcRZGate(q, -2.1947700098718173, 19);
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
  sqcRYGate(q, 0.22671279317535656, 0);
  sqcRZGate(q, -2.194428049705495, 0);
  sqcRYGate(q, -1.5204749682689593, 1);
  sqcRZGate(q, 1.7469027063365168, 1);
  sqcRYGate(q, 0.0019543468905543265, 2);
  sqcRZGate(q, -0.8102773723461167, 2);
  sqcRYGate(q, -0.610169703764126, 3);
  sqcRZGate(q, 0.5005424680267028, 3);
  sqcRYGate(q, 0.01871602317329406, 4);
  sqcRZGate(q, -2.7446149797125012, 4);
  sqcRYGate(q, 0.5145546505785781, 5);
  sqcRZGate(q, -2.7298666699217886, 5);
  sqcRYGate(q, -1.5090574874417142, 6);
  sqcRZGate(q, -2.0578966576274893, 6);
  sqcRYGate(q, 3.013188897880464, 7);
  sqcRZGate(q, 1.1386383083770613, 7);
  sqcRYGate(q, -1.142289783273845, 8);
  sqcRZGate(q, 0.0019227682757865237, 8);
  sqcRYGate(q, 3.1415733585699273, 9);
  sqcRZGate(q, 1.860495111943389, 9);
  sqcRYGate(q, -0.4996174966585561, 10);
  sqcRZGate(q, 2.972067716955131, 10);
  sqcRYGate(q, 3.14119532441847, 11);
  sqcRZGate(q, 1.1021577476149371, 11);
  sqcRYGate(q, -3.139323641146841, 12);
  sqcRZGate(q, -0.7109474340342709, 12);
  sqcRYGate(q, 0.0020784380663858566, 13);
  sqcRZGate(q, 1.8249968900177163, 13);
  sqcRYGate(q, -0.5828713298942594, 14);
  sqcRZGate(q, 3.1408641533238124, 14);
  sqcRYGate(q, -2.304838900569611, 15);
  sqcRZGate(q, 0.009854711211567668, 15);
  sqcRYGate(q, 3.1268393891701964, 16);
  sqcRZGate(q, 1.6584513446184057, 16);
  sqcRYGate(q, 1.5888947894598067, 17);
  sqcRZGate(q, 1.3875944300736371, 17);
  sqcRYGate(q, 0.8220912010417339, 18);
  sqcRZGate(q, 1.6149579857143204, 18);
  sqcRYGate(q, -2.095061194395152, 19);
  sqcRZGate(q, -0.32935421852069785, 19);
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
  sqcRYGate(q, -1.7100945932363727, 0);
  sqcRZGate(q, 0.9649641657638175, 0);
  sqcRYGate(q, -1.5866616301066045, 1);
  sqcRZGate(q, -0.3192410842526143, 1);
  sqcRYGate(q, 0.03285950850596001, 2);
  sqcRZGate(q, -1.9278611619153232, 2);
  sqcRYGate(q, 0.6166926532593944, 3);
  sqcRZGate(q, -0.5690001035721268, 3);
  sqcRYGate(q, 0.0026851899722188932, 4);
  sqcRZGate(q, -1.8042038039852555, 4);
  sqcRYGate(q, -1.6324158525578714, 5);
  sqcRZGate(q, 1.6220931514758696, 5);
  sqcRYGate(q, -1.117667418872276, 6);
  sqcRZGate(q, -1.3965232764456341, 6);
  sqcRYGate(q, -1.738856015354494, 7);
  sqcRZGate(q, -2.710620060064193, 7);
  sqcRYGate(q, -0.28680770125981725, 8);
  sqcRZGate(q, -0.0018005032835093362, 8);
  sqcRYGate(q, -1.5365505786541132, 9);
  sqcRZGate(q, -3.1400790421641593, 9);
  sqcRYGate(q, -0.022516220803655652, 10);
  sqcRZGate(q, -2.971946618054412, 10);
  sqcRYGate(q, 3.037174339974983, 11);
  sqcRZGate(q, -2.366454245159801, 11);
  sqcRYGate(q, 0.5677344780132998, 12);
  sqcRZGate(q, -0.7015319721341476, 12);
  sqcRYGate(q, -0.008538417556287746, 13);
  sqcRZGate(q, 2.8883348945305705, 13);
  sqcRYGate(q, -2.124949356851183, 14);
  sqcRZGate(q, 0.14305461897701122, 14);
  sqcRYGate(q, 1.599782078733745, 15);
  sqcRZGate(q, -0.0038244286269928872, 15);
  sqcRYGate(q, -2.1997068156080575, 16);
  sqcRZGate(q, -1.5160089642341479, 16);
  sqcRYGate(q, -0.02344789982803253, 17);
  sqcRZGate(q, -2.9051994238215624, 17);
  sqcRYGate(q, 3.1282548164905655, 18);
  sqcRZGate(q, -2.5635817066938404, 18);
  sqcRYGate(q, -2.0266047004216943, 19);
  sqcRZGate(q, 1.1663451460166823, 19);
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
  sqcRYGate(q, -3.135934232837286, 0);
  sqcRZGate(q, 0.2458450188640944, 0);
  sqcRYGate(q, -1.8217426925633795, 1);
  sqcRZGate(q, -2.4360982791288146, 1);
  sqcRYGate(q, -2.043598175730642, 2);
  sqcRZGate(q, 3.102057497029277, 2);
  sqcRYGate(q, 0.7635874778312158, 3);
  sqcRZGate(q, 2.4387193313011264, 3);
  sqcRYGate(q, -1.232175709610198, 4);
  sqcRZGate(q, 0.6199331268896113, 4);
  sqcRYGate(q, 0.001861722678842881, 5);
  sqcRZGate(q, 1.5266163447062082, 5);
  sqcRYGate(q, -0.0027148937902667925, 6);
  sqcRZGate(q, -1.1546122147806441, 6);
  sqcRYGate(q, 3.122846223045998, 7);
  sqcRZGate(q, 0.3809433035878235, 7);
  sqcRYGate(q, 2.572921327054495, 8);
  sqcRZGate(q, 1.179975060828071, 8);
  sqcRYGate(q, -1.6706081373829558, 9);
  sqcRZGate(q, 1.0241448033680243, 9);
  sqcRYGate(q, -1.8557495039908634, 10);
  sqcRZGate(q, 0.061369725732842724, 10);
  sqcRYGate(q, -0.31729708120836986, 11);
  sqcRZGate(q, -0.11953433891188146, 11);
  sqcRYGate(q, 3.12251215914093, 12);
  sqcRZGate(q, 0.048841448695287046, 12);
  sqcRYGate(q, 1.5782641724250412, 13);
  sqcRZGate(q, 3.071368373667184, 13);
  sqcRYGate(q, -3.13295393951995, 14);
  sqcRZGate(q, 0.14383192493611763, 14);
  sqcRYGate(q, -0.6996454465254871, 15);
  sqcRZGate(q, -0.0008359935110533456, 15);
  sqcRYGate(q, 0.01273452174164965, 16);
  sqcRZGate(q, -0.05762507506240753, 16);
  sqcRYGate(q, 1.5625360218084279, 17);
  sqcRZGate(q, -3.139742015959875, 17);
  sqcRYGate(q, -2.5275634124700646, 18);
  sqcRZGate(q, -1.5952678853349278, 18);
  sqcRYGate(q, -0.1138344157233595, 19);
  sqcRZGate(q, -2.1235869102202396, 19);
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
  sqcRYGate(q, -0.5506330140013764, 0);
  sqcRZGate(q, -1.033331943195441, 0);
  sqcRYGate(q, 0.07197461929803595, 1);
  sqcRZGate(q, -2.2068613722910393, 1);
  sqcRYGate(q, 0.013433613355116947, 2);
  sqcRZGate(q, -3.0953775635316547, 2);
  sqcRYGate(q, -0.5665354447356403, 3);
  sqcRZGate(q, 0.0028125385474355724, 3);
  sqcRYGate(q, 0.002468682168982106, 4);
  sqcRZGate(q, -0.6273658204652122, 4);
  sqcRYGate(q, 0.9095598265296125, 5);
  sqcRZGate(q, -0.010230000382839558, 5);
  sqcRYGate(q, -0.5992473817474828, 6);
  sqcRZGate(q, -0.5552361636364443, 6);
  sqcRYGate(q, 1.706478296243804, 7);
  sqcRZGate(q, -0.008201451597472875, 7);
  sqcRYGate(q, 2.589641667238851e-05, 8);
  sqcRZGate(q, 1.139374758738061, 8);
  sqcRYGate(q, 0.7208677177591438, 9);
  sqcRZGate(q, -0.836805955195702, 9);
  sqcRYGate(q, 1.9745286556602684, 10);
  sqcRZGate(q, -3.064879385982193, 10);
  sqcRYGate(q, 1.089638537458403, 11);
  sqcRZGate(q, 0.10999193379117854, 11);
  sqcRYGate(q, -2.324442066136879, 12);
  sqcRZGate(q, 0.840524651860805, 12);
  sqcRYGate(q, 3.087757947476129, 13);
  sqcRZGate(q, -1.4525934744072675, 13);
  sqcRYGate(q, 1.573561029681611, 14);
  sqcRZGate(q, 1.5952250705232764, 14);
  sqcRYGate(q, 2.771981492642366, 15);
  sqcRZGate(q, 0.10586265223339492, 15);
  sqcRYGate(q, -1.5712766933499376, 16);
  sqcRZGate(q, -0.595082987911463, 16);
  sqcRYGate(q, -1.573104592536187, 17);
  sqcRZGate(q, -1.5977839659294721, 17);
  sqcRYGate(q, 1.5703051062072206, 18);
  sqcRZGate(q, -0.1182770102940829, 18);
  sqcRYGate(q, -0.6271623709259977, 19);
  sqcRZGate(q, 1.2176966860582612, 19);
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
  sqcRYGate(q, -0.5648354084476885, 0);
  sqcRZGate(q, 2.535385841328564, 0);
  sqcRYGate(q, -2.330947111816708, 1);
  sqcRZGate(q, 2.6725958422078016, 1);
  sqcRYGate(q, 1.569616455888342, 2);
  sqcRZGate(q, 0.012121453925206556, 2);
  sqcRYGate(q, -2.868966852675723, 3);
  sqcRZGate(q, 1.2918547264207874, 3);
  sqcRYGate(q, 1.3797575140781413, 4);
  sqcRZGate(q, -3.1159456161569095, 4);
  sqcRYGate(q, -0.43523022962854474, 5);
  sqcRZGate(q, -3.138393758680425, 5);
  sqcRYGate(q, 1.5691194422616876, 6);
  sqcRZGate(q, -1.2452232101301757, 6);
  sqcRYGate(q, -1.7629917399438781, 7);
  sqcRZGate(q, 0.005600107577614103, 7);
  sqcRYGate(q, 0.0012613581790459293, 8);
  sqcRZGate(q, -2.3193461770970516, 8);
  sqcRYGate(q, 0.0037384372210129187, 9);
  sqcRZGate(q, -0.26838815268538596, 9);
  sqcRYGate(q, 0.002343232581339763, 10);
  sqcRZGate(q, -0.08536562615224218, 10);
  sqcRYGate(q, 0.006186923788819233, 11);
  sqcRZGate(q, -0.07092498077240893, 11);
  sqcRYGate(q, 3.1399865262892024, 12);
  sqcRZGate(q, -2.3222290196105986, 12);
  sqcRYGate(q, -1.2166380824693093, 13);
  sqcRZGate(q, 0.9924050699205222, 13);
  sqcRYGate(q, -0.8000253505133612, 14);
  sqcRZGate(q, 2.968543381270253, 14);
  sqcRYGate(q, -0.0003944069831665795, 15);
  sqcRZGate(q, 1.356205526369455, 15);
  sqcRYGate(q, -0.7388002878868002, 16);
  sqcRZGate(q, -3.1413271349927654, 16);
  sqcRYGate(q, -1.5745554267945403, 17);
  sqcRZGate(q, 0.9089020900334689, 17);
  sqcRYGate(q, 1.5675654934745875, 18);
  sqcRZGate(q, 1.5764470743550252, 18);
  sqcRYGate(q, 3.139959578216433, 19);
  sqcRZGate(q, -2.5709798682434304, 19);
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
  sqcRYGate(q, -2.6579035360506515, 0);
  sqcRZGate(q, 0.8976102543604707, 0);
  sqcRYGate(q, 1.5654639066233242, 1);
  sqcRZGate(q, -1.5707486620639903, 1);
  sqcRYGate(q, 1.578095901032483, 2);
  sqcRZGate(q, 1.5671834168126382, 2);
  sqcRYGate(q, -3.1397919175032434, 3);
  sqcRZGate(q, -0.28625572532118815, 3);
  sqcRYGate(q, -2.7126038014069107, 4);
  sqcRZGate(q, 1.5631297806871787, 4);
  sqcRYGate(q, -1.5693677679282236, 5);
  sqcRZGate(q, 1.6018497538039673, 5);
  sqcRYGate(q, -0.0011521127599456449, 6);
  sqcRZGate(q, -0.32827338471733203, 6);
  sqcRYGate(q, -1.5680585129188482, 7);
  sqcRZGate(q, -1.5708435488665473, 7);
  sqcRYGate(q, -0.46994868753903507, 8);
  sqcRZGate(q, 1.5712368510241534, 8);
  sqcRYGate(q, 1.276264857788229, 9);
  sqcRZGate(q, -0.9385986048583835, 9);
  sqcRYGate(q, 2.0863994998172286, 10);
  sqcRZGate(q, -1.6360489005438663, 10);
  sqcRYGate(q, -1.7322724258170799, 11);
  sqcRZGate(q, -1.6823337203087387, 11);
  sqcRYGate(q, -3.137814095489477, 12);
  sqcRZGate(q, -1.593214695876935, 12);
  sqcRYGate(q, -3.1392998314309355, 13);
  sqcRZGate(q, -1.649467280079158, 13);
  sqcRYGate(q, -3.1406631199291013, 14);
  sqcRZGate(q, 3.0027101095042106, 14);
  sqcRYGate(q, -0.0010782716174230359, 15);
  sqcRZGate(q, -3.035536646927956, 15);
  sqcRYGate(q, -1.5705705232986746, 16);
  sqcRZGate(q, -0.0015074659626321818, 16);
  sqcRYGate(q, 0.002736664702188918, 17);
  sqcRZGate(q, 2.2346455501033127, 17);
  sqcRYGate(q, 1.5701086606670442, 18);
  sqcRZGate(q, 0.0010908678972453326, 18);
  sqcRYGate(q, -3.1308622121235445, 19);
  sqcRZGate(q, 1.1492414073624326, 19);
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
  sqcRYGate(q, -1.5756909979387768, 0);
  sqcRZGate(q, 0.274151275291584, 0);
  sqcRYGate(q, -1.573662355855548, 1);
  sqcRZGate(q, 0.9024846138028667, 1);
  sqcRYGate(q, 1.5703598272084067, 2);
  sqcRZGate(q, 1.8532330110413637, 2);
  sqcRYGate(q, 1.5669085222430423, 3);
  sqcRZGate(q, 2.4147750617051997, 3);
  sqcRYGate(q, -1.5695220834594026, 4);
  sqcRZGate(q, 0.2778881287437356, 4);
  sqcRYGate(q, 1.6424666515763926, 5);
  sqcRZGate(q, -1.3121832548108978, 5);
  sqcRYGate(q, -1.5720830574927485, 6);
  sqcRZGate(q, -1.288573760889828, 6);
  sqcRYGate(q, -1.5709176600473225, 7);
  sqcRZGate(q, 1.3355068125702045, 7);
  sqcRYGate(q, -1.570848023400641, 8);
  sqcRZGate(q, 1.846182933724073, 8);
  sqcRYGate(q, 1.569684760512442, 9);
  sqcRZGate(q, -0.10511887668595193, 9);
  sqcRYGate(q, -1.5708193871879685, 10);
  sqcRZGate(q, -1.3148449957042339, 10);
  sqcRYGate(q, 1.5701154689396086, 11);
  sqcRZGate(q, 0.942052799150455, 11);
  sqcRYGate(q, -1.5720993208834386, 12);
  sqcRZGate(q, 0.30057741853517417, 12);
  sqcRYGate(q, -2.74205686093623, 13);
  sqcRZGate(q, -2.616925276516135, 13);
  sqcRYGate(q, -2.3707442026345813, 14);
  sqcRZGate(q, 0.0012299418860299838, 14);
  sqcRYGate(q, 1.571482065928565, 15);
  sqcRZGate(q, -1.6449750340734701, 15);
  sqcRYGate(q, -2.310775257887316, 16);
  sqcRZGate(q, 0.27617408639462937, 16);
  sqcRYGate(q, -1.5716834127917219, 17);
  sqcRZGate(q, 2.4658214987680656, 17);
  sqcRYGate(q, -1.6862049555422285, 18);
  sqcRZGate(q, -1.292805004814319, 18);
  sqcRYGate(q, -1.8792619325550421, 19);
  sqcRZGate(q, 2.4373297826935088, 19);

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
