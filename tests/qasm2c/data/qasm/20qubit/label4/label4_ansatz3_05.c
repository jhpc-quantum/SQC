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

  sqcRYGate(q, -0.06947289499277165, 0);
  sqcRZGate(q, -1.7452191984224745, 0);
  sqcRYGate(q, 0.19293861758871067, 1);
  sqcRZGate(q, 0.051339770627170184, 1);
  sqcRYGate(q, -1.7548190533219648, 2);
  sqcRZGate(q, -2.7014906931381484, 2);
  sqcRYGate(q, -3.0343764851508324, 3);
  sqcRZGate(q, 2.843833682074747, 3);
  sqcRYGate(q, 0.6981226195544084, 4);
  sqcRZGate(q, -1.3506985405193985, 4);
  sqcRYGate(q, -1.568609535402972, 5);
  sqcRZGate(q, 3.1310137825256037, 5);
  sqcRYGate(q, 1.5709208221137354, 6);
  sqcRZGate(q, -0.0025132044797757658, 6);
  sqcRYGate(q, 3.1380077324864564, 7);
  sqcRZGate(q, -2.6007525347890335, 7);
  sqcRYGate(q, 0.005004283299784085, 8);
  sqcRZGate(q, -0.611122612864171, 8);
  sqcRYGate(q, -1.5730067174095712, 9);
  sqcRZGate(q, -3.005365489687111, 9);
  sqcRYGate(q, 0.0005642964513468129, 10);
  sqcRZGate(q, 3.0675674278353897, 10);
  sqcRYGate(q, 1.5690879940959492, 11);
  sqcRZGate(q, 0.031059597050494443, 11);
  sqcRYGate(q, 1.5766122262624251, 12);
  sqcRZGate(q, 3.140602425486467, 12);
  sqcRYGate(q, -0.9107036014566585, 13);
  sqcRZGate(q, 1.6489442206164504, 13);
  sqcRYGate(q, -1.5903681605883113, 14);
  sqcRZGate(q, -3.1272044571334625, 14);
  sqcRYGate(q, -2.7421839364796243, 15);
  sqcRZGate(q, 0.2654973418993949, 15);
  sqcRYGate(q, 3.1304296831209437, 16);
  sqcRZGate(q, -0.0009727764493474567, 16);
  sqcRYGate(q, -0.1077370432070742, 17);
  sqcRZGate(q, -2.5552020616555784, 17);
  sqcRYGate(q, -1.840306883179853, 18);
  sqcRZGate(q, 2.603377089837136, 18);
  sqcRYGate(q, -2.183666841198831, 19);
  sqcRZGate(q, -0.12660007073521415, 19);
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
  sqcRYGate(q, -0.006299830457539457, 0);
  sqcRZGate(q, 0.8641504509598471, 0);
  sqcRYGate(q, 0.0021463228319129938, 1);
  sqcRZGate(q, 3.0969650198676093, 1);
  sqcRYGate(q, 0.06578308156267397, 2);
  sqcRZGate(q, -0.5980607960718578, 2);
  sqcRYGate(q, 3.116344293821848, 3);
  sqcRZGate(q, -0.29649054084332427, 3);
  sqcRYGate(q, 3.1413932309883235, 4);
  sqcRZGate(q, -1.2108807098072336, 4);
  sqcRYGate(q, 1.920203418809849, 5);
  sqcRZGate(q, -1.8023653667952333, 5);
  sqcRYGate(q, -1.5678316487933435, 6);
  sqcRZGate(q, -1.0886892254796159, 6);
  sqcRYGate(q, 0.03998749779145072, 7);
  sqcRZGate(q, 0.9141754607237172, 7);
  sqcRYGate(q, -3.141306680200116, 8);
  sqcRZGate(q, -1.560195553726282, 8);
  sqcRYGate(q, 0.3904625514154134, 9);
  sqcRZGate(q, -0.3774322605807617, 9);
  sqcRYGate(q, -1.5770244476105901, 10);
  sqcRZGate(q, 2.0332874024520176, 10);
  sqcRYGate(q, 2.847442885023194, 11);
  sqcRZGate(q, -0.9515069761832775, 11);
  sqcRYGate(q, -2.6449555110331535, 12);
  sqcRZGate(q, -3.1399967295481996, 12);
  sqcRYGate(q, -0.00017278239884297456, 13);
  sqcRZGate(q, -1.6463885080908987, 13);
  sqcRYGate(q, -3.0515777350688182, 14);
  sqcRZGate(q, 1.5897480870478768, 14);
  sqcRYGate(q, 3.1408058517655886, 15);
  sqcRZGate(q, 0.25055365212232344, 15);
  sqcRYGate(q, -2.23364990284021, 16);
  sqcRZGate(q, -1.8412564032826726, 16);
  sqcRYGate(q, 2.853838904572494, 17);
  sqcRZGate(q, 2.18943864274658, 17);
  sqcRYGate(q, 2.6622770282878774, 18);
  sqcRZGate(q, -0.3433804657147137, 18);
  sqcRYGate(q, -2.050448695267553, 19);
  sqcRZGate(q, 1.8042263163975047, 19);
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
  sqcRYGate(q, -1.5846832730001745, 0);
  sqcRZGate(q, -3.0634948029576208, 0);
  sqcRYGate(q, -0.18935203892490549, 1);
  sqcRZGate(q, -2.9403347811941645, 1);
  sqcRYGate(q, -1.0781492098942955, 2);
  sqcRZGate(q, -1.9699547802556197, 2);
  sqcRYGate(q, -0.3309530028573118, 3);
  sqcRZGate(q, 3.125043728558038, 3);
  sqcRYGate(q, -3.131792670460005, 4);
  sqcRZGate(q, 0.030279722738707916, 4);
  sqcRYGate(q, 0.0029770510948058447, 5);
  sqcRZGate(q, 1.7700960062631106, 5);
  sqcRYGate(q, -0.0030008790577897505, 6);
  sqcRZGate(q, 0.4457474573074619, 6);
  sqcRYGate(q, -1.2687030162106954, 7);
  sqcRZGate(q, -3.026937396249545, 7);
  sqcRYGate(q, 1.6051667002343697, 8);
  sqcRZGate(q, -2.39116898609562, 8);
  sqcRYGate(q, 1.5573645333711597, 9);
  sqcRZGate(q, -0.8025387706683267, 9);
  sqcRYGate(q, -3.140608636416563, 10);
  sqcRZGate(q, 0.02011949272210956, 10);
  sqcRYGate(q, 3.029233029928515, 11);
  sqcRZGate(q, -0.838993898202598, 11);
  sqcRYGate(q, 1.5715830400080402, 12);
  sqcRZGate(q, -0.4847837299341225, 12);
  sqcRYGate(q, -1.416836907559713, 13);
  sqcRZGate(q, 0.008594673968994828, 13);
  sqcRYGate(q, 1.5650148570834412, 14);
  sqcRZGate(q, -2.977117529016589, 14);
  sqcRYGate(q, -0.3627985468158367, 15);
  sqcRZGate(q, 0.13854364370130767, 15);
  sqcRYGate(q, 0.21036201602842564, 16);
  sqcRZGate(q, -2.342614574169646, 16);
  sqcRYGate(q, 0.13314302261246125, 17);
  sqcRZGate(q, 1.444853892328882, 17);
  sqcRYGate(q, -2.496964866643725, 18);
  sqcRZGate(q, 2.5237676090934746, 18);
  sqcRYGate(q, -1.2432330862480052, 19);
  sqcRZGate(q, -1.4347044288400859, 19);
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
  sqcRYGate(q, -1.5684204809668616, 0);
  sqcRZGate(q, -0.7809283269787648, 0);
  sqcRYGate(q, 1.4908654922321378, 1);
  sqcRZGate(q, 2.44263897106457, 1);
  sqcRYGate(q, 3.1389493180785006, 2);
  sqcRZGate(q, 2.1797478241608617, 2);
  sqcRYGate(q, 0.19442165133924494, 3);
  sqcRZGate(q, 0.021453473194786632, 3);
  sqcRYGate(q, -0.0003874714935428523, 4);
  sqcRZGate(q, -0.5358793003750195, 4);
  sqcRYGate(q, 0.9270951648437394, 5);
  sqcRZGate(q, -3.1326461346454813, 5);
  sqcRYGate(q, 1.5709503716330844, 6);
  sqcRZGate(q, -2.30500334733682, 6);
  sqcRYGate(q, -2.158151470409395, 7);
  sqcRZGate(q, 0.9687397108030222, 7);
  sqcRYGate(q, -0.0017137034933529804, 8);
  sqcRZGate(q, -0.7721690675938464, 8);
  sqcRYGate(q, -0.0008232957529807904, 9);
  sqcRZGate(q, -0.243221901645434, 9);
  sqcRYGate(q, -3.1400588361852173, 10);
  sqcRZGate(q, -0.5828753186448132, 10);
  sqcRYGate(q, -3.1405171657127684, 11);
  sqcRZGate(q, 1.7537278738182154, 11);
  sqcRYGate(q, -0.00041699798110366023, 12);
  sqcRZGate(q, 3.073592382430451, 12);
  sqcRYGate(q, -2.216702202902055, 13);
  sqcRZGate(q, -0.0002539712694105134, 13);
  sqcRYGate(q, -3.0433634831994776, 14);
  sqcRZGate(q, -1.3350497454136125, 14);
  sqcRYGate(q, 1.5671358275520175, 15);
  sqcRZGate(q, 0.2307863428765789, 15);
  sqcRYGate(q, -0.021356040774786145, 16);
  sqcRZGate(q, -0.7600450257523921, 16);
  sqcRYGate(q, -3.1284337679308885, 17);
  sqcRZGate(q, -1.3083287038222027, 17);
  sqcRYGate(q, 0.07766024067054474, 18);
  sqcRZGate(q, -2.15974887965503, 18);
  sqcRYGate(q, 1.6718234668069691, 19);
  sqcRZGate(q, 2.7753389858972533, 19);
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
  sqcRYGate(q, -0.0006897198614845835, 0);
  sqcRZGate(q, -0.19601919803929133, 0);
  sqcRYGate(q, -0.0378110083750058, 1);
  sqcRZGate(q, 0.4928400819043709, 1);
  sqcRYGate(q, -3.1361817861652748, 2);
  sqcRZGate(q, 1.2366612789612645, 2);
  sqcRYGate(q, -1.482959262475691, 3);
  sqcRZGate(q, -0.02331555736944146, 3);
  sqcRYGate(q, -1.597554989720991, 4);
  sqcRZGate(q, -1.7911958946241358, 4);
  sqcRYGate(q, 0.16917225855799775, 5);
  sqcRZGate(q, 2.536686044296761, 5);
  sqcRYGate(q, 0.019572344801740117, 6);
  sqcRZGate(q, -0.8233953990820662, 6);
  sqcRYGate(q, -3.141354046827184, 7);
  sqcRZGate(q, -0.6664532829155628, 7);
  sqcRYGate(q, -1.4745253074028737, 8);
  sqcRZGate(q, -1.201711048588698, 8);
  sqcRYGate(q, -3.0838286493074234, 9);
  sqcRZGate(q, 2.2179222188977903, 9);
  sqcRYGate(q, -0.0006155319993283993, 10);
  sqcRZGate(q, -0.9375278466400837, 10);
  sqcRYGate(q, 2.8483897962768387, 11);
  sqcRZGate(q, -2.5193174055970364, 11);
  sqcRYGate(q, 3.1410494755707807, 12);
  sqcRZGate(q, 1.0696116107200169, 12);
  sqcRYGate(q, -1.562929921963688, 13);
  sqcRZGate(q, -0.007322213377354282, 13);
  sqcRYGate(q, -1.5256211771330714, 14);
  sqcRZGate(q, 0.007114635903340273, 14);
  sqcRYGate(q, -0.0005476678505236598, 15);
  sqcRZGate(q, 0.21746971395670614, 15);
  sqcRYGate(q, 0.20343640425017107, 16);
  sqcRZGate(q, -0.5084453582975685, 16);
  sqcRYGate(q, -1.5667284512547406, 17);
  sqcRZGate(q, -3.1067638088125893, 17);
  sqcRYGate(q, -1.8381275847166396, 18);
  sqcRZGate(q, 0.09642738372830809, 18);
  sqcRYGate(q, -2.0776393813374137, 19);
  sqcRZGate(q, 2.1080301801043557, 19);
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
  sqcRYGate(q, -3.0686265512075734, 0);
  sqcRZGate(q, -0.30634613697829227, 0);
  sqcRYGate(q, -2.629294347287815, 1);
  sqcRZGate(q, 0.26056989741422676, 1);
  sqcRYGate(q, -0.982059370878585, 2);
  sqcRZGate(q, -1.8605188704733986, 2);
  sqcRYGate(q, -2.90687707729974, 3);
  sqcRZGate(q, -3.0580386220177833, 3);
  sqcRYGate(q, -3.140538021462948, 4);
  sqcRZGate(q, 1.3379916526009918, 4);
  sqcRYGate(q, -3.1409134832836836, 5);
  sqcRZGate(q, 1.1485197650286754, 5);
  sqcRYGate(q, 3.0276762379063977, 6);
  sqcRZGate(q, 0.16354430430167882, 6);
  sqcRYGate(q, 1.4766752549339826, 7);
  sqcRZGate(q, 1.2728073199977676, 7);
  sqcRYGate(q, -3.139432629365259, 8);
  sqcRZGate(q, -0.5059392914938631, 8);
  sqcRYGate(q, -3.1415618999696235, 9);
  sqcRZGate(q, 1.7005310804287719, 9);
  sqcRYGate(q, 0.00010121981306795934, 10);
  sqcRZGate(q, -1.699911297720175, 10);
  sqcRYGate(q, 1.5719156785105592, 11);
  sqcRZGate(q, -0.6958697529169865, 11);
  sqcRYGate(q, -2.5248135294737133, 12);
  sqcRZGate(q, -2.3425356215870012, 12);
  sqcRYGate(q, 2.21828776243313, 13);
  sqcRZGate(q, 3.1383969373033263, 13);
  sqcRYGate(q, -2.825606402470273, 14);
  sqcRZGate(q, 0.021643107779672585, 14);
  sqcRYGate(q, 0.0019806268461630694, 15);
  sqcRZGate(q, -2.0180823503134206, 15);
  sqcRYGate(q, 3.1409083737904075, 16);
  sqcRZGate(q, 2.59207474739003, 16);
  sqcRYGate(q, 0.03307157464974608, 17);
  sqcRZGate(q, -0.03460182757977364, 17);
  sqcRYGate(q, 1.4934864657038707, 18);
  sqcRZGate(q, 1.0970560035218435, 18);
  sqcRYGate(q, 1.571935745134005, 19);
  sqcRZGate(q, 0.00031519995882334223, 19);
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
  sqcRYGate(q, 0.002621993707077941, 0);
  sqcRZGate(q, 1.1309082837776518, 0);
  sqcRYGate(q, 0.03498404609039762, 1);
  sqcRZGate(q, -0.5564446321236789, 1);
  sqcRYGate(q, -1.6333559962458537, 2);
  sqcRZGate(q, 3.02799781766812, 2);
  sqcRYGate(q, -0.03898575389425898, 3);
  sqcRZGate(q, -1.4979654649964624, 3);
  sqcRYGate(q, -1.562579131815314, 4);
  sqcRZGate(q, -0.817514250641039, 4);
  sqcRYGate(q, 3.052106762015548, 5);
  sqcRZGate(q, 1.2723507655413124, 5);
  sqcRYGate(q, 3.1376227296528603, 6);
  sqcRZGate(q, -0.5973722457272803, 6);
  sqcRYGate(q, 0.0005262173557059887, 7);
  sqcRZGate(q, 0.8347636185163214, 7);
  sqcRYGate(q, 1.4887562911095606, 8);
  sqcRZGate(q, -0.0733376656542637, 8);
  sqcRYGate(q, -1.53410759278691, 9);
  sqcRZGate(q, 0.8499702627103477, 9);
  sqcRYGate(q, 1.5813748251357156, 10);
  sqcRZGate(q, -3.101986961640354, 10);
  sqcRYGate(q, 2.981279131011188, 11);
  sqcRZGate(q, -1.4807460798829029, 11);
  sqcRYGate(q, -0.22278808380759538, 12);
  sqcRZGate(q, -1.4424975157342688, 12);
  sqcRYGate(q, 1.5739400833174884, 13);
  sqcRZGate(q, 1.537041256514029, 13);
  sqcRYGate(q, -1.4913283326666074, 14);
  sqcRZGate(q, -2.638660343775253, 14);
  sqcRYGate(q, 1.5720728301689455, 15);
  sqcRZGate(q, -2.8538649443949455, 15);
  sqcRYGate(q, 1.560625216671779, 16);
  sqcRZGate(q, -0.10661359670217403, 16);
  sqcRYGate(q, 1.0901843980267625, 17);
  sqcRZGate(q, 0.0021274766636434355, 17);
  sqcRYGate(q, -1.56711926764306, 18);
  sqcRZGate(q, -3.1415854810697246, 18);
  sqcRYGate(q, 1.028101439880885, 19);
  sqcRZGate(q, -0.0021500828258051996, 19);
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
  sqcRYGate(q, 0.640870226667283, 0);
  sqcRZGate(q, -1.629995522201808, 0);
  sqcRYGate(q, -2.4511401592971045, 1);
  sqcRZGate(q, -0.037665855894974065, 1);
  sqcRYGate(q, 0.0005858843259474083, 2);
  sqcRZGate(q, 0.1486819506318735, 2);
  sqcRYGate(q, 3.1303096843979374, 3);
  sqcRZGate(q, -1.2073793153768533, 3);
  sqcRYGate(q, 0.00042027915658597684, 4);
  sqcRZGate(q, 0.11030965850946464, 4);
  sqcRYGate(q, 3.136875037818242, 5);
  sqcRZGate(q, -0.47246800455536436, 5);
  sqcRYGate(q, 1.5765621734148807, 6);
  sqcRZGate(q, 1.809911202309492, 6);
  sqcRYGate(q, 1.570799833952635, 7);
  sqcRZGate(q, -1.5478757889484154, 7);
  sqcRYGate(q, 2.8522632854532866, 8);
  sqcRZGate(q, -0.0062252880688511425, 8);
  sqcRYGate(q, -3.1413320921525285, 9);
  sqcRZGate(q, -2.711000124565712, 9);
  sqcRYGate(q, -0.02670281060692058, 10);
  sqcRZGate(q, -0.024524694071484263, 10);
  sqcRYGate(q, -3.135838194063165, 11);
  sqcRZGate(q, 2.393538153650843, 11);
  sqcRYGate(q, -0.00013852944913583798, 12);
  sqcRZGate(q, 1.4517724803755394, 12);
  sqcRYGate(q, -3.140998772468606, 13);
  sqcRZGate(q, -1.6099118123088783, 13);
  sqcRYGate(q, 3.141400986546496, 14);
  sqcRZGate(q, 0.6247066794648752, 14);
  sqcRYGate(q, 2.965186535563335, 15);
  sqcRZGate(q, 0.21236161719924593, 15);
  sqcRYGate(q, 0.0494031300991518, 16);
  sqcRZGate(q, 0.5848030689621561, 16);
  sqcRYGate(q, 0.45349674802280276, 17);
  sqcRZGate(q, -3.118997870300713, 17);
  sqcRYGate(q, -1.5914368334021534, 18);
  sqcRZGate(q, 3.003962498651358, 18);
  sqcRYGate(q, 2.435395313976347, 19);
  sqcRZGate(q, 1.46329122875341, 19);
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
  sqcRYGate(q, -3.1092077967241587, 0);
  sqcRZGate(q, 1.8459444156222062, 0);
  sqcRYGate(q, 3.0518575270369652, 1);
  sqcRZGate(q, 2.842005188655548, 1);
  sqcRYGate(q, -1.507516464400946, 2);
  sqcRZGate(q, 3.1180868450545813, 2);
  sqcRYGate(q, -0.017862300730454847, 3);
  sqcRZGate(q, 2.540568090497792, 3);
  sqcRYGate(q, 3.1347690032123117, 4);
  sqcRZGate(q, -0.3781341678732204, 4);
  sqcRYGate(q, -1.663097102337922, 5);
  sqcRZGate(q, -0.40826016111529206, 5);
  sqcRYGate(q, -3.135188269121116, 6);
  sqcRZGate(q, 2.142362899056783, 6);
  sqcRYGate(q, 3.0624977881029944, 7);
  sqcRZGate(q, -0.38566233397414784, 7);
  sqcRYGate(q, 1.5687530806038803, 8);
  sqcRZGate(q, 1.9027068433539562, 8);
  sqcRYGate(q, 3.1377464480778103, 9);
  sqcRZGate(q, 0.7420912713693913, 9);
  sqcRYGate(q, 1.5563068261821558, 10);
  sqcRZGate(q, 1.9043616618556012, 10);
  sqcRYGate(q, 3.118808678955703, 11);
  sqcRZGate(q, 1.201825679387645, 11);
  sqcRYGate(q, 0.22320704692152216, 12);
  sqcRZGate(q, -1.554246342254507, 12);
  sqcRYGate(q, 1.5747895134897627, 13);
  sqcRZGate(q, -1.9798649012272393, 13);
  sqcRYGate(q, 2.974214759010415, 14);
  sqcRZGate(q, -0.6663244797235421, 14);
  sqcRYGate(q, -1.5709770454868923, 15);
  sqcRZGate(q, -1.979755051788412, 15);
  sqcRYGate(q, -0.00971062179255533, 16);
  sqcRZGate(q, -2.731902428108454, 16);
  sqcRYGate(q, 3.1295790646891706, 17);
  sqcRZGate(q, -1.9554442113188282, 17);
  sqcRYGate(q, 1.575348010514925, 18);
  sqcRZGate(q, -2.2566620098893004, 18);
  sqcRYGate(q, 3.0340150271594934, 19);
  sqcRZGate(q, 2.625553021237724, 19);

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
