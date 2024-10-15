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

  sqcRYGate(q, 0.008264064798322758, 0);
  sqcRZGate(q, -0.3599411232813459, 0);
  sqcRYGate(q, 0.008776653702714299, 1);
  sqcRZGate(q, 2.078255236859684, 1);
  sqcRYGate(q, -1.5701218046632333, 2);
  sqcRZGate(q, 1.5043823718075007, 2);
  sqcRYGate(q, 1.569792354958607, 3);
  sqcRZGate(q, -1.0599603502127894, 3);
  sqcRYGate(q, -0.1697898718745403, 4);
  sqcRZGate(q, 2.449577847185549, 4);
  sqcRYGate(q, 0.06903640504068864, 5);
  sqcRZGate(q, -2.1105418320061218, 5);
  sqcRYGate(q, -0.02170726064729874, 6);
  sqcRZGate(q, -2.8160426980336273, 6);
  sqcRYGate(q, -3.126340492248656, 7);
  sqcRZGate(q, -1.0855889202282238, 7);
  sqcRYGate(q, 1.2056463144190301, 8);
  sqcRZGate(q, 0.015852086032785095, 8);
  sqcRYGate(q, -0.8312034569305691, 9);
  sqcRZGate(q, -2.607656766056545, 9);
  sqcRYGate(q, 0.2152897684823074, 10);
  sqcRZGate(q, -1.641513194403748, 10);
  sqcRYGate(q, -0.22266221412963189, 11);
  sqcRZGate(q, 1.8838778653754331, 11);
  sqcRYGate(q, 0.01994897563349518, 12);
  sqcRZGate(q, 1.8571860211342326, 12);
  sqcRYGate(q, -3.133393121873572, 13);
  sqcRZGate(q, -2.2432072207114304, 13);
  sqcRYGate(q, -1.5751562860456838, 14);
  sqcRZGate(q, -1.569099268228812, 14);
  sqcRYGate(q, -1.5726230183706715, 15);
  sqcRZGate(q, 1.5756603900920476, 15);
  sqcRYGate(q, -3.08386532156973, 16);
  sqcRZGate(q, -2.223731412276962, 16);
  sqcRYGate(q, -0.33284311576558506, 17);
  sqcRZGate(q, 1.5457944032456448, 17);
  sqcRYGate(q, -1.7944342770741688, 18);
  sqcRZGate(q, 0.09561544730087324, 18);
  sqcRYGate(q, -2.4690453384028066, 19);
  sqcRZGate(q, -2.962660921512215, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.462744428391133, 0);
  sqcRZGate(q, -1.2901888673985278, 0);
  sqcRYGate(q, 2.009275193822157, 1);
  sqcRZGate(q, 3.137470442866896, 1);
  sqcRYGate(q, 1.8883791221696375, 2);
  sqcRZGate(q, 3.1141739093987137, 2);
  sqcRYGate(q, -1.646620320026031, 3);
  sqcRZGate(q, -1.7438907337354497, 3);
  sqcRYGate(q, -1.6104653027613995, 4);
  sqcRZGate(q, 1.6490002592444148, 4);
  sqcRYGate(q, -0.06309584581192626, 5);
  sqcRZGate(q, -2.1589722572952867, 5);
  sqcRYGate(q, -0.0491408349826437, 6);
  sqcRZGate(q, -2.7755976829613895, 6);
  sqcRYGate(q, -3.0818970538542882, 7);
  sqcRZGate(q, 0.16456773165620622, 7);
  sqcRYGate(q, 2.2678740746084696, 8);
  sqcRZGate(q, 2.163861474765235, 8);
  sqcRYGate(q, -2.280689369219756, 9);
  sqcRZGate(q, -1.9259515580311892, 9);
  sqcRYGate(q, 0.7531459583546234, 10);
  sqcRZGate(q, 0.14356971963694323, 10);
  sqcRYGate(q, -2.3218329925363315, 11);
  sqcRZGate(q, 0.0022878230220646496, 11);
  sqcRYGate(q, -2.126501306856561, 12);
  sqcRZGate(q, 1.2797619283572157, 12);
  sqcRYGate(q, -1.130087210850076, 13);
  sqcRZGate(q, 2.8198101946644956, 13);
  sqcRYGate(q, 1.5666698972252708, 14);
  sqcRZGate(q, -2.419475270183936, 14);
  sqcRYGate(q, 1.5688031258544095, 15);
  sqcRZGate(q, 2.297955411888549, 15);
  sqcRYGate(q, 2.117919764993948, 16);
  sqcRZGate(q, -2.9409917250019504, 16);
  sqcRYGate(q, 0.8197579858682903, 17);
  sqcRZGate(q, 2.878231631673209, 17);
  sqcRYGate(q, 1.7148245907949162, 18);
  sqcRZGate(q, -2.7372670975838638, 18);
  sqcRYGate(q, -0.5041510132878475, 19);
  sqcRZGate(q, 1.0644899600427902, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.9234839059558047, 0);
  sqcRZGate(q, 0.2902184259058101, 0);
  sqcRYGate(q, 1.2689730533085113, 1);
  sqcRZGate(q, -0.20674007638632882, 1);
  sqcRYGate(q, -1.1072977223765879, 2);
  sqcRZGate(q, 2.9705938534299454, 2);
  sqcRYGate(q, -0.9307560357743299, 3);
  sqcRZGate(q, -2.9589303499745276, 3);
  sqcRYGate(q, -2.485065571947875, 4);
  sqcRZGate(q, -2.593109810790746, 4);
  sqcRYGate(q, 2.7259237403116576, 5);
  sqcRZGate(q, -2.798770504858494, 5);
  sqcRYGate(q, 0.0033004790479509443, 6);
  sqcRZGate(q, -2.438586762498602, 6);
  sqcRYGate(q, 0.0018839657004788815, 7);
  sqcRZGate(q, 2.1223432985086577, 7);
  sqcRYGate(q, -3.0766914974129356, 8);
  sqcRZGate(q, 2.5509410157522003, 8);
  sqcRYGate(q, -0.20462246715029675, 9);
  sqcRZGate(q, 1.6294026317535115, 9);
  sqcRYGate(q, -0.018323327528066896, 10);
  sqcRZGate(q, -0.26605325792575657, 10);
  sqcRYGate(q, 3.1200310560799585, 11);
  sqcRZGate(q, 3.091762040697978, 11);
  sqcRYGate(q, 1.645446300953935, 12);
  sqcRZGate(q, -0.7300993146856634, 12);
  sqcRYGate(q, -0.8025020432312767, 13);
  sqcRZGate(q, -1.2408716526459331, 13);
  sqcRYGate(q, 0.06566170375500135, 14);
  sqcRZGate(q, 0.14676477846694713, 14);
  sqcRYGate(q, -3.094976313239121, 15);
  sqcRZGate(q, 0.48914020486315923, 15);
  sqcRYGate(q, -1.9788006413530022, 16);
  sqcRZGate(q, -1.8959921091575245, 16);
  sqcRYGate(q, 0.6130708763600458, 17);
  sqcRZGate(q, -1.63418290773022, 17);
  sqcRYGate(q, 0.6976646948423859, 18);
  sqcRZGate(q, -0.5589461250802722, 18);
  sqcRYGate(q, -2.593338959075535, 19);
  sqcRZGate(q, -2.1672919838239064, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.4857052713063843, 0);
  sqcRZGate(q, -2.9401715371143724, 0);
  sqcRYGate(q, -1.5879996597895216, 1);
  sqcRZGate(q, 1.9230252074561267, 1);
  sqcRYGate(q, -1.9263406289855052, 2);
  sqcRZGate(q, -1.58644556905871, 2);
  sqcRYGate(q, 1.1724602215005138, 3);
  sqcRZGate(q, 1.5539081470451312, 3);
  sqcRYGate(q, 0.08211620181923915, 4);
  sqcRZGate(q, -0.38921243800841826, 4);
  sqcRYGate(q, 0.016788810646843778, 5);
  sqcRZGate(q, -1.9075549346864162, 5);
  sqcRYGate(q, -1.5287599121457989, 6);
  sqcRZGate(q, -0.9022383457086551, 6);
  sqcRYGate(q, -0.7465105552484355, 7);
  sqcRZGate(q, -0.3980077530854685, 7);
  sqcRYGate(q, -1.8566158223682807, 8);
  sqcRZGate(q, -0.7623494781890692, 8);
  sqcRYGate(q, 2.735808974940412, 9);
  sqcRZGate(q, -1.9209577517588068, 9);
  sqcRYGate(q, -1.214405870120654, 10);
  sqcRZGate(q, -2.9555628400398946, 10);
  sqcRYGate(q, 3.0206844894510096, 11);
  sqcRZGate(q, 1.3141486261510593, 11);
  sqcRYGate(q, 1.46412539112099, 12);
  sqcRZGate(q, 1.6528499564686825, 12);
  sqcRYGate(q, 2.0868541103601115, 13);
  sqcRZGate(q, -2.8415957620575973, 13);
  sqcRYGate(q, -2.1856827462030095, 14);
  sqcRZGate(q, 0.14250095717494737, 14);
  sqcRYGate(q, 2.1560498311239344, 15);
  sqcRZGate(q, -0.024276557770284618, 15);
  sqcRYGate(q, -0.5911085167251491, 16);
  sqcRZGate(q, -2.2186435444642805, 16);
  sqcRYGate(q, -2.986765790008694, 17);
  sqcRZGate(q, -1.0533505053964354, 17);
  sqcRYGate(q, 1.7778549160488506, 18);
  sqcRZGate(q, -1.4852273015049597, 18);
  sqcRYGate(q, -2.8564040264109103, 19);
  sqcRZGate(q, -1.1276628041491552, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.4112427234414717, 0);
  sqcRZGate(q, 0.5849959504106331, 0);
  sqcRYGate(q, 1.6034324502347808, 1);
  sqcRZGate(q, 0.6288652973337525, 1);
  sqcRYGate(q, 1.567022810802639, 2);
  sqcRZGate(q, -0.05650052087612689, 2);
  sqcRYGate(q, 1.5816916194997548, 3);
  sqcRZGate(q, 3.0504790124366936, 3);
  sqcRYGate(q, -3.0275954815136825, 4);
  sqcRZGate(q, -1.5127367968272747, 4);
  sqcRYGate(q, 0.7199015941429971, 5);
  sqcRZGate(q, 0.07650166235871582, 5);
  sqcRYGate(q, -0.06030358406043652, 6);
  sqcRZGate(q, -1.3094116462984302, 6);
  sqcRYGate(q, 3.115597900056352, 7);
  sqcRZGate(q, 2.76543061512317, 7);
  sqcRYGate(q, -3.1399437116694666, 8);
  sqcRZGate(q, 0.4064289300362782, 8);
  sqcRYGate(q, 0.0012193794245333543, 9);
  sqcRZGate(q, -0.6581079877756637, 9);
  sqcRYGate(q, -0.9408106475092627, 10);
  sqcRZGate(q, 0.11819792926398377, 10);
  sqcRYGate(q, -1.3371834243934497, 11);
  sqcRZGate(q, 1.0341509760302994, 11);
  sqcRYGate(q, -3.1329703724493747, 12);
  sqcRZGate(q, -0.7623519207566155, 12);
  sqcRYGate(q, 0.011030464572049717, 13);
  sqcRZGate(q, -2.2307031045870374, 13);
  sqcRYGate(q, 1.6068437365642663, 14);
  sqcRZGate(q, 1.6523582298886472, 14);
  sqcRYGate(q, -1.541316938406154, 15);
  sqcRZGate(q, 1.5958445999366226, 15);
  sqcRYGate(q, 1.539886515375137, 16);
  sqcRZGate(q, -1.532004915141462, 16);
  sqcRYGate(q, 1.8367648190151422, 17);
  sqcRZGate(q, 0.3046993527432012, 17);
  sqcRYGate(q, 0.8934969859716265, 18);
  sqcRZGate(q, -0.3898263792612928, 18);
  sqcRYGate(q, -0.31533661881963065, 19);
  sqcRZGate(q, -2.869784895170055, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.04112151197633285, 0);
  sqcRZGate(q, -1.319538142787099, 0);
  sqcRYGate(q, -1.2448031915877242, 1);
  sqcRZGate(q, 1.871429242245271, 1);
  sqcRYGate(q, -0.7120138756475026, 2);
  sqcRZGate(q, 1.6427454289579473, 2);
  sqcRYGate(q, -0.2873716327273872, 3);
  sqcRZGate(q, 1.7171782027029474, 3);
  sqcRYGate(q, -1.5649358466382022, 4);
  sqcRZGate(q, 1.4557784906956732, 4);
  sqcRYGate(q, 0.042068469095434935, 5);
  sqcRZGate(q, -0.061217110992699275, 5);
  sqcRYGate(q, -1.4743693768795234, 6);
  sqcRZGate(q, 1.6871712576146107, 6);
  sqcRYGate(q, -2.6562543068074085, 7);
  sqcRZGate(q, 3.129354824579265, 7);
  sqcRYGate(q, -0.8987238108291071, 8);
  sqcRZGate(q, 2.3546544486423677, 8);
  sqcRYGate(q, -2.138837987678475, 9);
  sqcRZGate(q, 0.009282862661267417, 9);
  sqcRYGate(q, 2.3342312337301747, 10);
  sqcRZGate(q, -1.5149483025464727, 10);
  sqcRYGate(q, 0.5466391742294627, 11);
  sqcRZGate(q, -1.1962447592740197, 11);
  sqcRYGate(q, 1.5819255568237185, 12);
  sqcRZGate(q, -3.0844949301599662, 12);
  sqcRYGate(q, -1.6083513491527024, 13);
  sqcRZGate(q, -0.05558522406331415, 13);
  sqcRYGate(q, 0.8746868979009905, 14);
  sqcRZGate(q, 1.6020733328567287, 14);
  sqcRYGate(q, -2.2599614072925265, 15);
  sqcRZGate(q, 1.55335259766542, 15);
  sqcRYGate(q, 0.5153529890931102, 16);
  sqcRZGate(q, -2.9549467199185435, 16);
  sqcRYGate(q, 1.7639361566492058, 17);
  sqcRZGate(q, -1.2385044763063338, 17);
  sqcRYGate(q, -2.752326273751513, 18);
  sqcRZGate(q, 2.427299498302441, 18);
  sqcRYGate(q, -2.9217811768719013, 19);
  sqcRZGate(q, -1.0166244112706215, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5626937570327684, 0);
  sqcRZGate(q, -3.110405835961792, 0);
  sqcRYGate(q, -0.5789903947379292, 1);
  sqcRZGate(q, -0.6965256576464864, 1);
  sqcRYGate(q, 1.7141964435254946, 2);
  sqcRZGate(q, 2.4224847087982884, 2);
  sqcRYGate(q, -1.2808741227138558, 3);
  sqcRZGate(q, -3.07382605423355, 3);
  sqcRYGate(q, 0.27559224996005205, 4);
  sqcRZGate(q, 2.039811426145685, 4);
  sqcRYGate(q, -3.0519474425091047, 5);
  sqcRZGate(q, 2.750386509727803, 5);
  sqcRYGate(q, 2.4663421055623567, 6);
  sqcRZGate(q, -0.08285865953016902, 6);
  sqcRYGate(q, -1.3942101394003625, 7);
  sqcRZGate(q, 0.08831518150628614, 7);
  sqcRYGate(q, 3.120248596413463, 8);
  sqcRZGate(q, -0.7405133958172468, 8);
  sqcRYGate(q, 3.136331510245046, 9);
  sqcRZGate(q, -0.015500509991213997, 9);
  sqcRYGate(q, -0.01597148421841932, 10);
  sqcRZGate(q, -0.05393146709903362, 10);
  sqcRYGate(q, 3.1390049184619917, 11);
  sqcRZGate(q, -3.0114653944324865, 11);
  sqcRYGate(q, -1.6022540778517458, 12);
  sqcRZGate(q, 0.01978451688259231, 12);
  sqcRYGate(q, -1.5592081720588615, 13);
  sqcRZGate(q, -0.010213789758051314, 13);
  sqcRYGate(q, 0.1765107367370531, 14);
  sqcRZGate(q, -0.0602783663554351, 14);
  sqcRYGate(q, 0.22043449340394172, 15);
  sqcRZGate(q, -3.1191574629816854, 15);
  sqcRYGate(q, 0.06670383858782028, 16);
  sqcRZGate(q, 1.2215342622978635, 16);
  sqcRYGate(q, 2.6773647615735623, 17);
  sqcRZGate(q, 0.8887554481074165, 17);
  sqcRYGate(q, -0.3704978452851142, 18);
  sqcRZGate(q, 2.9344451911138085, 18);
  sqcRYGate(q, 3.001661961524896, 19);
  sqcRZGate(q, -2.597875016765856, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.7541621219576404, 0);
  sqcRZGate(q, 0.3484719055779486, 0);
  sqcRYGate(q, -2.952839706836123, 1);
  sqcRZGate(q, -2.4961260486172034, 1);
  sqcRYGate(q, -0.18486455697741705, 2);
  sqcRZGate(q, 2.479788782994215, 2);
  sqcRYGate(q, -1.5487573251966147, 3);
  sqcRZGate(q, 2.9546053701065187, 3);
  sqcRYGate(q, -3.138834146136398, 4);
  sqcRZGate(q, 0.3184337507785507, 4);
  sqcRYGate(q, -0.003882825549615002, 5);
  sqcRZGate(q, 1.9420243333184943, 5);
  sqcRYGate(q, -3.109202002170784, 6);
  sqcRZGate(q, 3.0582251480825042, 6);
  sqcRYGate(q, -3.110280636574004, 7);
  sqcRZGate(q, -3.064775938243593, 7);
  sqcRYGate(q, -0.21699712445771582, 8);
  sqcRZGate(q, -2.8742844432042283, 8);
  sqcRYGate(q, -2.802166180069306, 9);
  sqcRZGate(q, -3.0037784055626013, 9);
  sqcRYGate(q, -2.46295835650269, 10);
  sqcRZGate(q, 1.413678554714989, 10);
  sqcRYGate(q, -1.3407333899714486, 11);
  sqcRZGate(q, 1.081552492056529, 11);
  sqcRYGate(q, -1.5891900656236002, 12);
  sqcRZGate(q, -2.044470236492267, 12);
  sqcRYGate(q, 1.5847931589550628, 13);
  sqcRZGate(q, -2.9028485340498147, 13);
  sqcRYGate(q, 1.4870132868098551, 14);
  sqcRZGate(q, -3.1337311306636577, 14);
  sqcRYGate(q, -2.816241357394936, 15);
  sqcRZGate(q, -3.1321132729983, 15);
  sqcRYGate(q, -0.021793414440701046, 16);
  sqcRZGate(q, 2.0040102596152582, 16);
  sqcRYGate(q, -0.7247581229215256, 17);
  sqcRZGate(q, 1.0806308382320937, 17);
  sqcRYGate(q, -0.06679758358465282, 18);
  sqcRZGate(q, 0.7195143085025597, 18);
  sqcRYGate(q, 0.29144905424090134, 19);
  sqcRZGate(q, -2.1421196200235784, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.23011422230466394, 0);
  sqcRZGate(q, 2.5074178868837427, 0);
  sqcRYGate(q, 3.1326005169153714, 1);
  sqcRZGate(q, -1.7037856313862685, 1);
  sqcRYGate(q, -2.4078980993758963, 2);
  sqcRZGate(q, -3.0004660162290335, 2);
  sqcRYGate(q, 1.7273549583820043, 3);
  sqcRZGate(q, 0.5627677202318123, 3);
  sqcRYGate(q, -1.871302875529187, 4);
  sqcRZGate(q, -0.002767034065958679, 4);
  sqcRYGate(q, -0.3384131360864808, 5);
  sqcRZGate(q, -0.9907013115221474, 5);
  sqcRYGate(q, 0.6221083168151896, 6);
  sqcRZGate(q, 0.6902411523562667, 6);
  sqcRYGate(q, -2.1478843596532906, 7);
  sqcRZGate(q, 1.79675515478082, 7);
  sqcRYGate(q, 1.5849614311394138, 8);
  sqcRZGate(q, 0.0018560461021168704, 8);
  sqcRYGate(q, -1.627291896645227, 9);
  sqcRZGate(q, -3.137591905151416, 9);
  sqcRYGate(q, 0.5366221644470296, 10);
  sqcRZGate(q, -3.0665906141086356, 10);
  sqcRYGate(q, 3.11069596867276, 11);
  sqcRZGate(q, -2.6718457130046076, 11);
  sqcRYGate(q, -3.0518642008597214, 12);
  sqcRZGate(q, -1.4820431448861697, 12);
  sqcRYGate(q, 2.7781366625588286, 13);
  sqcRZGate(q, -0.6632016934318323, 13);
  sqcRYGate(q, -2.215281984835039, 14);
  sqcRZGate(q, 1.5754660786910497, 14);
  sqcRYGate(q, -2.984338264512924, 15);
  sqcRZGate(q, 1.5607967280341133, 15);
  sqcRYGate(q, 0.620215377841081, 16);
  sqcRZGate(q, 0.028262450554830298, 16);
  sqcRYGate(q, 3.0792302291257507, 17);
  sqcRZGate(q, 0.9851536678988819, 17);
  sqcRYGate(q, -3.0194252741442495, 18);
  sqcRZGate(q, 0.6305713976677367, 18);
  sqcRYGate(q, 2.9155623912620072, 19);
  sqcRZGate(q, -0.3825405804398532, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.8077205506072567, 0);
  sqcRZGate(q, 0.07296487768530935, 0);
  sqcRYGate(q, -1.7109484474366723, 1);
  sqcRZGate(q, -0.5963275796541472, 1);
  sqcRYGate(q, 1.6164237285411596, 2);
  sqcRZGate(q, 2.0701426717504097, 2);
  sqcRYGate(q, -0.04927987423521784, 3);
  sqcRZGate(q, 0.1859639937198816, 3);
  sqcRYGate(q, 0.0066847354585322085, 4);
  sqcRZGate(q, 1.4079228776060095, 4);
  sqcRYGate(q, -3.1369906739964994, 5);
  sqcRZGate(q, 0.398335480257117, 5);
  sqcRYGate(q, 3.131303552967413, 6);
  sqcRZGate(q, -2.3985227090943737, 6);
  sqcRYGate(q, 3.130365683483371, 7);
  sqcRZGate(q, -1.1365184008551017, 7);
  sqcRYGate(q, -1.622330945995364, 8);
  sqcRZGate(q, 3.10427111388337, 8);
  sqcRYGate(q, 1.582873078052061, 9);
  sqcRZGate(q, -0.18383401397344645, 9);
  sqcRYGate(q, -0.07353028846999443, 10);
  sqcRZGate(q, 0.30949067692835364, 10);
  sqcRYGate(q, 3.117364204223572, 11);
  sqcRZGate(q, -0.3387828606748151, 11);
  sqcRYGate(q, -0.00855728827144997, 12);
  sqcRZGate(q, 1.6650884357446918, 12);
  sqcRYGate(q, -3.114471768555352, 13);
  sqcRZGate(q, -0.6727778104035108, 13);
  sqcRYGate(q, -1.56602865830378, 14);
  sqcRZGate(q, -2.877282297067815, 14);
  sqcRYGate(q, -1.560362879563023, 15);
  sqcRZGate(q, -2.4312722713760775, 15);
  sqcRYGate(q, 2.72852265962905, 16);
  sqcRZGate(q, -2.814731163701034, 16);
  sqcRYGate(q, 0.9618547335424302, 17);
  sqcRZGate(q, -1.5281411726901943, 17);
  sqcRYGate(q, 3.0546420805711727, 18);
  sqcRZGate(q, -1.2821718541255174, 18);
  sqcRYGate(q, 3.1044676390084787, 19);
  sqcRZGate(q, -2.065194401473436, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.9259676988949077, 0);
  sqcRZGate(q, -0.2687393581642151, 0);
  sqcRYGate(q, 0.5892575402577132, 1);
  sqcRZGate(q, 2.75210819204956, 1);
  sqcRYGate(q, -1.7469227371428722, 2);
  sqcRZGate(q, 0.9831253103295562, 2);
  sqcRYGate(q, -1.9668016946973914, 3);
  sqcRZGate(q, 2.6100722401695555, 3);
  sqcRYGate(q, 0.6619841104449167, 4);
  sqcRZGate(q, -0.37229761084456936, 4);
  sqcRYGate(q, 0.5885567140837497, 5);
  sqcRZGate(q, -0.34129546288442747, 5);
  sqcRYGate(q, -1.9242504952825252, 6);
  sqcRZGate(q, 2.7430197551466784, 6);
  sqcRYGate(q, -0.21303044121268003, 7);
  sqcRZGate(q, 2.5104051792839788, 7);
  sqcRYGate(q, -1.8134576817161858, 8);
  sqcRZGate(q, -0.5596398860708909, 8);
  sqcRYGate(q, -1.131215104392437, 9);
  sqcRZGate(q, -0.033613048780552574, 9);
  sqcRYGate(q, -2.849440593139912, 10);
  sqcRZGate(q, -3.0667645696969217, 10);
  sqcRYGate(q, 2.389126284604194, 11);
  sqcRZGate(q, 3.0244742015265924, 11);
  sqcRYGate(q, 2.5116506631774884, 12);
  sqcRZGate(q, 2.6932863570210084, 12);
  sqcRYGate(q, -0.741175185446016, 13);
  sqcRZGate(q, 2.6002725182925754, 13);
  sqcRYGate(q, -1.5582558184141675, 14);
  sqcRZGate(q, -1.9696100396619105, 14);
  sqcRYGate(q, -0.8498073958697956, 15);
  sqcRZGate(q, -1.4754189680767196, 15);
  sqcRYGate(q, 1.3404895137059354, 16);
  sqcRZGate(q, 3.011393743904001, 16);
  sqcRYGate(q, 1.338038726050069, 17);
  sqcRZGate(q, 1.185868170229596, 17);
  sqcRYGate(q, 3.0799691171134085, 18);
  sqcRZGate(q, 2.8540480618708495, 18);
  sqcRYGate(q, -0.031002819503705783, 19);
  sqcRZGate(q, 2.2644316206923314, 19);

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
