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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.584166523081022, 0);
  sqcRYGate(q, -0.6148571650558353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6028038536292124, 0);
  sqcRYGate(q, -2.7892733736672857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8952819150104787, 0);
  sqcRYGate(q, 2.1077819988357405, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8022537607532882, 0);
  sqcRYGate(q, -0.25479116795376544, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0290838991755367, 0);
  sqcRYGate(q, -0.04279611211627276, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9330312965303875, 0);
  sqcRYGate(q, -1.011063810636121, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0225525836423692, 0);
  sqcRYGate(q, -3.1118819277267002, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -0.9304583917036657, 0);
  sqcRYGate(q, 1.5154735425979835, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -0.6652696425725555, 0);
  sqcRYGate(q, 1.2650804782170324, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -3.0719028967597892, 0);
  sqcRYGate(q, 1.1371495507068046, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 3.07771587886034, 0);
  sqcRYGate(q, 0.1112468346936566, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -0.5995836149623024, 0);
  sqcRYGate(q, -0.20820402483436862, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 2.2333830772695507, 0);
  sqcRYGate(q, 2.5674183332456586, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -2.8993910296507224, 0);
  sqcRYGate(q, 1.6779907298709063, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -2.5486727349055203, 1);
  sqcRYGate(q, 0.5727886283611472, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6677481263757912, 1);
  sqcRYGate(q, 0.6560640452492033, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.737198621998714, 1);
  sqcRYGate(q, -2.044573647742868, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.16639506400616838, 1);
  sqcRYGate(q, -0.7698295350742157, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8636357312078276, 1);
  sqcRYGate(q, 2.154762083880327, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -2.4689029875706145, 1);
  sqcRYGate(q, -2.08285749335101, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 0.05126604323620232, 1);
  sqcRYGate(q, -0.19935852403556314, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 0.8132796656982046, 1);
  sqcRYGate(q, 1.86180221194706, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -0.6865771462999692, 1);
  sqcRYGate(q, 2.6244064081911285, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -1.3369778456016723, 1);
  sqcRYGate(q, -0.5577630990792315, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -1.3139545037177403, 1);
  sqcRYGate(q, -1.3459417459656526, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 0.14780100164377688, 1);
  sqcRYGate(q, -1.6441123623713891, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -0.06512200225507694, 2);
  sqcRYGate(q, 2.7494537633957012, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6100971314812651, 2);
  sqcRYGate(q, 1.2145318355929815, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6658308664539527, 2);
  sqcRYGate(q, 1.6002151195974141, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.05382908141170597, 2);
  sqcRYGate(q, -1.1003060112151404, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0067319467221112, 2);
  sqcRYGate(q, 2.24888110627169, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.2585023439265477, 2);
  sqcRYGate(q, 0.7150121277947896, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.4941493646398287, 2);
  sqcRYGate(q, 1.8502371717631165, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -0.6886976108400207, 2);
  sqcRYGate(q, 2.7597777498894636, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 2.4634482060792977, 2);
  sqcRYGate(q, -1.3649656639438588, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -0.39561914788950764, 2);
  sqcRYGate(q, -0.903171121439957, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -1.3123868832504781, 3);
  sqcRYGate(q, -2.3166801264344756, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.43859021933194, 3);
  sqcRYGate(q, 2.108433596104756, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0156285023661702, 3);
  sqcRYGate(q, 0.25825486569161704, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7093286940074459, 3);
  sqcRYGate(q, -0.5257368626473825, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.656363780233762, 3);
  sqcRYGate(q, 1.130024262455165, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 2.7027353846926343, 3);
  sqcRYGate(q, 0.7533221542248975, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -0.2630266575489104, 3);
  sqcRYGate(q, -1.2317140074617523, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -2.4518432947404363, 3);
  sqcRYGate(q, -2.5844608061394143, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -0.40305415909976167, 4);
  sqcRYGate(q, 2.7769166803929437, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7982855819202306, 4);
  sqcRYGate(q, 0.7218941162574506, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9786481614538811, 4);
  sqcRYGate(q, 1.9957124860748678, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.491918562678979, 4);
  sqcRYGate(q, -2.931097095883548, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.386728458317868, 4);
  sqcRYGate(q, 2.1232679240245735, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.963791244312675, 4);
  sqcRYGate(q, -2.1079702653077206, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.4278090344570093, 5);
  sqcRYGate(q, 1.508185293029126, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9467542541063432, 5);
  sqcRYGate(q, -0.9175628653906713, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1371954882589974, 5);
  sqcRYGate(q, -1.0658860459163528, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.3100733788284256, 5);
  sqcRYGate(q, -2.020958032670298, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8508581855494013, 6);
  sqcRYGate(q, 2.4430669452411684, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7170004999804601, 6);
  sqcRYGate(q, 0.3389755264814182, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5457149393020786, 0);
  sqcRYGate(q, -3.1211871129389164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9990637972471617, 0);
  sqcRYGate(q, 2.3948621606059444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7758373609797369, 0);
  sqcRYGate(q, -0.6949991348037861, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.188462998473761, 0);
  sqcRYGate(q, -1.0795683347023024, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3655141281564938, 0);
  sqcRYGate(q, 1.2141660648227124, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9012503469578288, 0);
  sqcRYGate(q, 0.4576318640736945, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9594197616385705, 0);
  sqcRYGate(q, 1.635686348698509, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 2.8954629421263443, 0);
  sqcRYGate(q, 2.2891102697847505, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 2.9235518440290442, 0);
  sqcRYGate(q, -1.3777206451414121, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 0.019188153542205377, 0);
  sqcRYGate(q, -1.0702497166678115, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 1.2953238886006062, 0);
  sqcRYGate(q, -1.5831039667061984, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 1.8953908636061774, 0);
  sqcRYGate(q, -1.103619211273792, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -1.6065863646454996, 0);
  sqcRYGate(q, -2.7485935854398726, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -2.5061620291548183, 0);
  sqcRYGate(q, -1.7687610760120742, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 1.5298428547381926, 1);
  sqcRYGate(q, -1.2453176567614817, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7242965450152408, 1);
  sqcRYGate(q, 1.859346931780892, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4400769509551112, 1);
  sqcRYGate(q, 0.5775065399879841, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.186210214210473, 1);
  sqcRYGate(q, 2.243346286117809, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9168836730533112, 1);
  sqcRYGate(q, 0.320241166012977, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -1.7629610393166797, 1);
  sqcRYGate(q, -0.6556915901571996, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 2.4881040252294153, 1);
  sqcRYGate(q, -2.0450056059787514, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -2.5292080152196537, 1);
  sqcRYGate(q, 2.8232609510356568, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -1.718777261417572, 1);
  sqcRYGate(q, 3.0463834065589754, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -3.1409935030505634, 1);
  sqcRYGate(q, 2.1817111054311535, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 0.49341537404722224, 1);
  sqcRYGate(q, 1.7327036268877705, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 2.243141242657681, 1);
  sqcRYGate(q, 2.281125618525882, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -0.367189458618258, 2);
  sqcRYGate(q, -1.672982315065357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7529793303133916, 2);
  sqcRYGate(q, -2.4298042332195635, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.847546504044228, 2);
  sqcRYGate(q, 1.6562246106339966, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.175052154473444, 2);
  sqcRYGate(q, -1.1629319003464704, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.2411740821397164, 2);
  sqcRYGate(q, -2.1317578271191504, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.2369211565060843, 2);
  sqcRYGate(q, -1.3966623809997512, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.3395305211038284, 2);
  sqcRYGate(q, 2.384057735903018, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 0.869003228130083, 2);
  sqcRYGate(q, 0.7446307216060173, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -0.40468054547235965, 2);
  sqcRYGate(q, 0.253533576750115, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -0.4161178604227995, 2);
  sqcRYGate(q, -0.27692362978487595, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -3.11584123018143, 3);
  sqcRYGate(q, 1.400724796976083, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5457365420480786, 3);
  sqcRYGate(q, 1.7622879768889832, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4658812904817737, 3);
  sqcRYGate(q, 1.5747529954417878, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.3052140309789033, 3);
  sqcRYGate(q, 2.6363861726379767, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.947881807006675, 3);
  sqcRYGate(q, -1.93900656579723, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 1.7491209457660277, 3);
  sqcRYGate(q, 2.2682243547947745, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 2.0920881641408826, 3);
  sqcRYGate(q, -1.0722514353921548, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 0.3537304777335091, 3);
  sqcRYGate(q, -2.4112634639306383, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 1.1593769170618495, 4);
  sqcRYGate(q, -1.5758954488377575, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1513462626638518, 4);
  sqcRYGate(q, 1.1100955981637437, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.928008841327931, 4);
  sqcRYGate(q, 2.1045787871971697, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.317756798180917, 4);
  sqcRYGate(q, 1.2052983274124527, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.22528715140024633, 4);
  sqcRYGate(q, -0.7748894308893898, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.0087347330145935, 4);
  sqcRYGate(q, 1.4906585460066275, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.84377714604312, 5);
  sqcRYGate(q, -0.36609954762852315, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0727079025287054, 5);
  sqcRYGate(q, 2.4506200817005563, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7005980545714148, 5);
  sqcRYGate(q, 0.5102304495226203, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.971166722688302, 5);
  sqcRYGate(q, -3.128203433374726, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.301721688382564, 6);
  sqcRYGate(q, 1.8713441221623928, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3008172783906553, 6);
  sqcRYGate(q, 1.3165191244645715, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.569173084792542, 0);
  sqcRYGate(q, 2.3642634144455847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.274054521022963, 0);
  sqcRYGate(q, 1.357192675472362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8465900221383156, 0);
  sqcRYGate(q, 3.0658822541071684, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0861730832684424, 0);
  sqcRYGate(q, -1.7809109471893865, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0976104466418617, 0);
  sqcRYGate(q, 0.19628114891480897, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9561564520255681, 0);
  sqcRYGate(q, 2.3506102949582894, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.933744058088581, 0);
  sqcRYGate(q, -2.7490519397072, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -1.226614230838802, 0);
  sqcRYGate(q, -0.08383761757698771, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 1.0235551198078165, 0);
  sqcRYGate(q, -1.9896857524280351, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -2.681812752319068, 0);
  sqcRYGate(q, 2.8102173249870543, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -2.693057580126653, 0);
  sqcRYGate(q, -2.2480709027163073, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -3.00364914860447, 0);
  sqcRYGate(q, 2.219675818900946, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 2.026280419822463, 0);
  sqcRYGate(q, -0.23848751257979048, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 0.5917661726829658, 0);
  sqcRYGate(q, -1.8646422217380316, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -1.7914122099182643, 1);
  sqcRYGate(q, 0.8351067569818407, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.14103526208595074, 1);
  sqcRYGate(q, 1.715072541371085, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.424834612357079, 1);
  sqcRYGate(q, 1.2095138380483248, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.08723231791251784, 1);
  sqcRYGate(q, -1.3867573636731896, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6533997833369627, 1);
  sqcRYGate(q, -2.73274075707041, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -0.8854388158503079, 1);
  sqcRYGate(q, -1.269273228078875, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -2.91786811187862, 1);
  sqcRYGate(q, 1.9211075924952865, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 0.6303906442299922, 1);
  sqcRYGate(q, 2.1855335539647873, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -2.7643282557629485, 1);
  sqcRYGate(q, 2.767320549514878, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 0.4032024306083164, 1);
  sqcRYGate(q, -2.9257826614380593, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 0.6684250608950998, 1);
  sqcRYGate(q, 2.0491679555300815, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 1.290256187781818, 1);
  sqcRYGate(q, 2.1640017679960213, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -1.1628882877595297, 2);
  sqcRYGate(q, 0.16300689963324974, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2510404967879003, 2);
  sqcRYGate(q, -0.562051258457176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2471219004025187, 2);
  sqcRYGate(q, -0.5618454382165643, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.8656535489387522, 2);
  sqcRYGate(q, 2.4452841161339602, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0034823352540112, 2);
  sqcRYGate(q, 0.3550137456191794, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.8471386561673924, 2);
  sqcRYGate(q, 1.7903081771009095, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.7755836759408727, 2);
  sqcRYGate(q, -1.6729641478210935, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -2.6426184732325266, 2);
  sqcRYGate(q, -2.201055523717586, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 1.554441860727649, 2);
  sqcRYGate(q, -0.9987831216216856, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -1.4578928749502291, 2);
  sqcRYGate(q, 1.7807046398942072, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 0.5807798373837088, 3);
  sqcRYGate(q, -2.799785422612305, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8744366073480174, 3);
  sqcRYGate(q, -2.5793183052297213, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6988558283324934, 3);
  sqcRYGate(q, -0.8638350248255132, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.670130687269909, 3);
  sqcRYGate(q, 1.9853343589703751, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.08887864955677927, 3);
  sqcRYGate(q, 2.5759381413782405, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 0.43111809951725644, 3);
  sqcRYGate(q, -2.577939058325097, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 2.5918705567544387, 3);
  sqcRYGate(q, -2.814530396625515, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 0.09176635118857135, 3);
  sqcRYGate(q, 2.781114188590256, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 2.3177696603901627, 4);
  sqcRYGate(q, 2.6415132067493947, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.43071873410474826, 4);
  sqcRYGate(q, -0.8989050640262786, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2416977183701725, 4);
  sqcRYGate(q, -1.0960763366928088, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.698934005416847, 4);
  sqcRYGate(q, 1.486202168242847, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.268737995672093, 4);
  sqcRYGate(q, 2.4736485937818657, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.9887241724520983, 4);
  sqcRYGate(q, -0.15487760617891055, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.8204941936747516, 5);
  sqcRYGate(q, -0.6859669347609494, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.360380678094476, 5);
  sqcRYGate(q, 0.9042058848914376, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6307150706216573, 5);
  sqcRYGate(q, 2.4287330663288658, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.153960267794475, 5);
  sqcRYGate(q, 2.037708547895093, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.8500389569176523, 6);
  sqcRYGate(q, 1.562777530992964, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5177727440207267, 6);
  sqcRYGate(q, 1.9474026879009796, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6088941183231453, 0);
  sqcRYGate(q, -0.2931310887365495, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.573917735443082, 0);
  sqcRYGate(q, -0.42138456556371295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.330573412283339, 0);
  sqcRYGate(q, -3.0460043999599615, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9629596572260035, 0);
  sqcRYGate(q, 2.88711884454978, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.049598426695618, 0);
  sqcRYGate(q, -0.3707298740459928, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5557821806403433, 0);
  sqcRYGate(q, 0.6543392932770447, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.32933661230753275, 0);
  sqcRYGate(q, 1.7463962774626962, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 1.7831744775020173, 0);
  sqcRYGate(q, -1.9425013827260598, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 0.3242240258912253, 0);
  sqcRYGate(q, 1.836164439066141, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -0.5667301263102722, 0);
  sqcRYGate(q, -2.6116337574818558, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -1.3057816729680667, 0);
  sqcRYGate(q, -0.43853299514299227, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -2.1637711663692265, 0);
  sqcRYGate(q, -0.988418860858431, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -2.1607665746317117, 0);
  sqcRYGate(q, -1.5008165068794976, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 2.7919702245231206, 0);
  sqcRYGate(q, -1.715694019002059, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -0.8587789398056168, 1);
  sqcRYGate(q, -0.2300050586886062, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0041682587484733, 1);
  sqcRYGate(q, -2.645054904102521, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0681011449444817, 1);
  sqcRYGate(q, -0.7969391280497193, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9161358122925534, 1);
  sqcRYGate(q, 0.48005054179258, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.02694560544903077, 1);
  sqcRYGate(q, 0.30597617885183936, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -1.8389492485452195, 1);
  sqcRYGate(q, 3.011990371616362, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -1.8310960808160939, 1);
  sqcRYGate(q, 2.0876428885639053, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 0.5513782012398004, 1);
  sqcRYGate(q, 2.360213736781388, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -2.8149887684544566, 1);
  sqcRYGate(q, 0.5952450934846691, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 1.0130767699247876, 1);
  sqcRYGate(q, -0.27100832668975483, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -2.148880055614952, 1);
  sqcRYGate(q, -2.833514452483324, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -2.4388763364434602, 1);
  sqcRYGate(q, 0.9533799024246018, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -0.09404524789546186, 2);
  sqcRYGate(q, -1.0901782115926855, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.12619617583326592, 2);
  sqcRYGate(q, -2.9698763875304466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.12734479707398716, 2);
  sqcRYGate(q, 1.068579882443269, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.810908150707343, 2);
  sqcRYGate(q, -0.6322300410914107, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.2267194277048281, 2);
  sqcRYGate(q, -1.9706662811444524, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.4531764519928382, 2);
  sqcRYGate(q, -1.305740088107834, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.7447644517436851, 2);
  sqcRYGate(q, -1.3875997729603222, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 0.24110265613592577, 2);
  sqcRYGate(q, 3.0355100702736535, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -2.274708562425932, 2);
  sqcRYGate(q, -1.8861462073966493, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 1.27137895269639, 2);
  sqcRYGate(q, -2.0635867151972436, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -1.4970444302196677, 3);
  sqcRYGate(q, -2.418941866671399, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.913727437954759, 3);
  sqcRYGate(q, -2.960732943970187, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2761865500171645, 3);
  sqcRYGate(q, 0.9750448437646256, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3712791061716647, 3);
  sqcRYGate(q, -1.325506677272534, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3536267532774953, 3);
  sqcRYGate(q, 0.818492580928866, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 0.9035812948385233, 3);
  sqcRYGate(q, -2.1779307752452244, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -0.6404556331418165, 3);
  sqcRYGate(q, 2.1955731477577087, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 1.941848904463158, 3);
  sqcRYGate(q, -1.1442887151401948, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 1.914881144395638, 4);
  sqcRYGate(q, 0.5612331694837183, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.537545705841505, 4);
  sqcRYGate(q, -2.455310078917469, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2027880286332797, 4);
  sqcRYGate(q, -2.7257719857636906, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.004859105732422542, 4);
  sqcRYGate(q, 2.4381293413877403, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.6133245554393554, 4);
  sqcRYGate(q, 2.876321488218324, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.0159115492308697, 4);
  sqcRYGate(q, 2.733460087822646, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.3175677259062422, 5);
  sqcRYGate(q, -2.610850059070254, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9471793793146213, 5);
  sqcRYGate(q, 1.1682226472353667, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.818341338753148, 5);
  sqcRYGate(q, -0.9580461021026702, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.579902308849527, 5);
  sqcRYGate(q, -1.6123984664933424, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.084057948992692, 6);
  sqcRYGate(q, 0.5577282805475238, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7804643626582355, 6);
  sqcRYGate(q, -2.580776479303807, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3613565717115452, 0);
  sqcRYGate(q, -1.7005900060448054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3160390384997602, 0);
  sqcRYGate(q, 1.1920646611272006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.078431471821315, 0);
  sqcRYGate(q, 0.13110980423720697, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.07131789727337878, 0);
  sqcRYGate(q, -2.260318998977173, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.38163164554728285, 0);
  sqcRYGate(q, -2.821967314802455, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.564046982223358, 0);
  sqcRYGate(q, 0.3356274890804593, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5957337079012488, 0);
  sqcRYGate(q, 0.25851890422599527, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 0.3900851476767784, 0);
  sqcRYGate(q, -2.647940719274114, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 3.06928108183472, 0);
  sqcRYGate(q, -2.963907819322094, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 1.63797491453643, 0);
  sqcRYGate(q, 1.6203867226959963, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -1.3472556228505745, 0);
  sqcRYGate(q, -0.014015736112147792, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 0.49569430609938614, 0);
  sqcRYGate(q, -1.286677022495567, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 1.3880282417003458, 0);
  sqcRYGate(q, 1.2897230674374391, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -2.067915901892494, 0);
  sqcRYGate(q, 2.0681274714485207, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -0.2854483308872781, 1);
  sqcRYGate(q, -2.3702010333593866, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8862076437293052, 1);
  sqcRYGate(q, -2.4618876456371317, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2338683900094103, 1);
  sqcRYGate(q, -1.391044106172018, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.237679997413802, 1);
  sqcRYGate(q, 2.110382283555611, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2478816101881864, 1);
  sqcRYGate(q, 1.5412660626970538, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -2.9697394665159647, 1);
  sqcRYGate(q, 2.479084675403636, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -1.7194108949040583, 1);
  sqcRYGate(q, -2.259135850757086, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 1.766015353115901, 1);
  sqcRYGate(q, -1.272100666551493, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 2.54996173002897, 1);
  sqcRYGate(q, 2.6088910800572154, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -1.3263908157657802, 1);
  sqcRYGate(q, -0.4939965706982327, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 0.6167227856997972, 1);
  sqcRYGate(q, 1.870436508810401, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -1.7723553325383365, 1);
  sqcRYGate(q, 2.0038855866924328, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 0.2579993997384298, 2);
  sqcRYGate(q, 3.0136969448119166, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.913294763171453, 2);
  sqcRYGate(q, -1.2501721513934356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2641200382490032, 2);
  sqcRYGate(q, -2.6620800905375424, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.0257864456151102, 2);
  sqcRYGate(q, -2.079243156958472, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.3743100819424397, 2);
  sqcRYGate(q, 1.3736476729934612, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.5655153794368726, 2);
  sqcRYGate(q, 0.25983238792185864, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.4930868688887617, 2);
  sqcRYGate(q, -2.389026411944642, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 2.5228854557918527, 2);
  sqcRYGate(q, -1.795647961079477, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 1.7262463470711982, 2);
  sqcRYGate(q, 0.2452800759474023, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 1.0580578886383147, 2);
  sqcRYGate(q, -0.9869845545751048, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 0.6962225032640164, 3);
  sqcRYGate(q, 2.1274277563906354, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6905364057770549, 3);
  sqcRYGate(q, -0.34793106326080014, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6022510406977863, 3);
  sqcRYGate(q, -1.0660124582871364, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.954127111757004, 3);
  sqcRYGate(q, -2.0743317636852385, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.052975257948307, 3);
  sqcRYGate(q, -0.2940570174928366, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 2.8145023553756148, 3);
  sqcRYGate(q, -1.6505701256112406, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -0.30722485395200605, 3);
  sqcRYGate(q, 2.1082501461820238, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -0.163284916552402, 3);
  sqcRYGate(q, -0.46518351265422364, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 0.48657395763497213, 4);
  sqcRYGate(q, 1.5047930002439678, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5683618544018498, 4);
  sqcRYGate(q, 2.0626711074692894, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.27837126530797285, 4);
  sqcRYGate(q, 0.8906389329278478, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.634347076997981, 4);
  sqcRYGate(q, 2.260072076183489, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.4464287539600527, 4);
  sqcRYGate(q, -1.4768354241673318, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.2669692274234645, 4);
  sqcRYGate(q, 2.4998860208236797, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.1198458369840676, 5);
  sqcRYGate(q, 1.864034350634886, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5677917177342611, 5);
  sqcRYGate(q, -0.18053952740265472, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.07871567435885574, 5);
  sqcRYGate(q, -0.1509798413647241, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.4412749507927654, 5);
  sqcRYGate(q, 2.9484359057476515, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.364385056172293, 6);
  sqcRYGate(q, 0.7516531654538722, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2067797924682653, 6);
  sqcRYGate(q, 0.2184095005283453, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3627487368154228, 0);
  sqcRYGate(q, -2.7629660279476345, 1);
  sqcRYGate(q, -1.1602048899923139, 2);
  sqcRYGate(q, 2.659501872072, 3);
  sqcRYGate(q, 2.4776543079597735, 4);
  sqcRYGate(q, 2.885381476057187, 5);
  sqcRYGate(q, 2.55712813054587, 6);
  sqcRYGate(q, 1.5415925501116279, 7);

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
