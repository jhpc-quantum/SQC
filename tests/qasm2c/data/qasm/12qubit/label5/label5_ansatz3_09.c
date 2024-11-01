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

  sqcRYGate(q, 1.9206424247736593, 0);
  sqcRZGate(q, 1.5881774877634545, 0);
  sqcRYGate(q, 2.2896989120965716, 1);
  sqcRZGate(q, -2.308310529459881, 1);
  sqcRYGate(q, 1.570888665842619, 2);
  sqcRZGate(q, 1.571613320342923, 2);
  sqcRYGate(q, 3.1415556888453238, 3);
  sqcRZGate(q, -2.3247886666999644, 3);
  sqcRYGate(q, 1.5675575204728665, 4);
  sqcRZGate(q, -1.1469870199847665, 4);
  sqcRYGate(q, -3.1413118393391897, 5);
  sqcRZGate(q, -2.945826324815718, 5);
  sqcRYGate(q, -1.570838551882896, 6);
  sqcRZGate(q, 1.5880202707006281, 6);
  sqcRYGate(q, -1.6073462959548301, 7);
  sqcRZGate(q, -3.1415886634398382, 7);
  sqcRYGate(q, 2.3981623366226725, 8);
  sqcRZGate(q, -1.5698048197702033, 8);
  sqcRYGate(q, 3.117109521709111, 9);
  sqcRZGate(q, -3.102845134876632, 9);
  sqcRYGate(q, 1.5717284241719387, 10);
  sqcRZGate(q, 1.2376544479820717, 10);
  sqcRYGate(q, -3.1399119990805713, 11);
  sqcRZGate(q, 2.897616088200963, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 3.141504465242692, 0);
  sqcRZGate(q, -0.035297830172176255, 0);
  sqcRYGate(q, 0.004738342170435696, 1);
  sqcRZGate(q, 2.3087759035893485, 1);
  sqcRYGate(q, -0.9274693646623509, 2);
  sqcRZGate(q, -1.5712467161375223, 2);
  sqcRYGate(q, -3.1375189992062413, 3);
  sqcRZGate(q, -1.7992838006022476, 3);
  sqcRYGate(q, 1.5706899423865877, 4);
  sqcRZGate(q, 2.7906764422915042, 4);
  sqcRYGate(q, 3.0894297445717265, 5);
  sqcRZGate(q, 2.4105652559238524, 5);
  sqcRYGate(q, -1.5710445154596013, 6);
  sqcRZGate(q, 5.7879649318692834e-05, 6);
  sqcRYGate(q, 1.5707910801556046, 7);
  sqcRZGate(q, 0.01771644946589538, 7);
  sqcRYGate(q, 2.810543069148018, 8);
  sqcRZGate(q, -0.0005237457499216447, 8);
  sqcRYGate(q, -3.13508603322878, 9);
  sqcRZGate(q, -2.727087377924276, 9);
  sqcRYGate(q, -3.141181870827807, 10);
  sqcRZGate(q, -0.3327404001552736, 10);
  sqcRYGate(q, -2.698043100938349, 11);
  sqcRZGate(q, -1.0818848102453114, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 3.1312717764068996, 0);
  sqcRZGate(q, 1.4358674212711993, 0);
  sqcRYGate(q, 0.8533166371103205, 1);
  sqcRZGate(q, 1.7474323397152476, 1);
  sqcRYGate(q, 1.5708629103648595, 2);
  sqcRZGate(q, -2.8285222796052625, 2);
  sqcRYGate(q, 4.6534570922851515e-05, 3);
  sqcRZGate(q, -1.6204242848415131, 3);
  sqcRYGate(q, -3.1408581839422656, 4);
  sqcRZGate(q, -1.9614753046064173, 4);
  sqcRYGate(q, 9.368447905799826e-05, 5);
  sqcRZGate(q, -0.7465129198625329, 5);
  sqcRYGate(q, 1.5708846460048633, 6);
  sqcRZGate(q, 0.09142408454182946, 6);
  sqcRYGate(q, 1.566645250101194, 7);
  sqcRZGate(q, -1.5707589183122082, 7);
  sqcRYGate(q, 1.5698665238771632, 8);
  sqcRZGate(q, -2.8805601015900266, 8);
  sqcRYGate(q, -3.141572451855143, 9);
  sqcRZGate(q, -1.2338907131953045, 9);
  sqcRYGate(q, 1.568990905787167, 10);
  sqcRZGate(q, 0.0014245403539066002, 10);
  sqcRYGate(q, -3.140577557027433, 11);
  sqcRZGate(q, 1.4232218354512578, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.04161735885019002, 0);
  sqcRZGate(q, 2.742607343247736, 0);
  sqcRYGate(q, 3.1412827949215454, 1);
  sqcRZGate(q, -1.198122955768705, 1);
  sqcRYGate(q, -3.14089233528687, 2);
  sqcRZGate(q, 1.9191146268951824, 2);
  sqcRYGate(q, -1.5706516110141484, 3);
  sqcRZGate(q, 1.5709821812507434, 3);
  sqcRYGate(q, 1.377249442405045, 4);
  sqcRZGate(q, 0.6851281881865107, 4);
  sqcRYGate(q, 1.5180708478358147, 5);
  sqcRZGate(q, 1.6230244778120655, 5);
  sqcRYGate(q, 1.5772516252230089, 6);
  sqcRZGate(q, -1.5669789610980813, 6);
  sqcRYGate(q, 1.5708214082084089, 7);
  sqcRZGate(q, 0.8694096104062626, 7);
  sqcRYGate(q, 3.1415890950199357, 8);
  sqcRZGate(q, 1.8271561157994132, 8);
  sqcRYGate(q, -0.021853628519951762, 9);
  sqcRZGate(q, 1.6044002255303575, 9);
  sqcRYGate(q, -1.5741720225061329, 10);
  sqcRZGate(q, 1.5545035795814979, 10);
  sqcRYGate(q, 1.5648780529932464, 11);
  sqcRZGate(q, -1.5681573827480269, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.7179159540443756, 0);
  sqcRZGate(q, 2.8893593900904038, 0);
  sqcRYGate(q, -0.04047615028162582, 1);
  sqcRZGate(q, 1.3376095267940942, 1);
  sqcRYGate(q, 1.7888905853356025, 2);
  sqcRZGate(q, -2.8780081021970383, 2);
  sqcRYGate(q, 0.5431487555755243, 3);
  sqcRZGate(q, 1.2341094617162964, 3);
  sqcRYGate(q, 0.0003710946885978129, 4);
  sqcRZGate(q, -1.784355579218741, 4);
  sqcRYGate(q, 3.1414537415201984, 5);
  sqcRZGate(q, 0.057691433999879645, 5);
  sqcRYGate(q, -2.529017675804902, 6);
  sqcRZGate(q, -1.5659238218971034, 6);
  sqcRYGate(q, 1.1112270138270195e-05, 7);
  sqcRZGate(q, -1.619757465659104, 7);
  sqcRYGate(q, -0.3983318572635257, 8);
  sqcRZGate(q, 1.653068000452885, 8);
  sqcRYGate(q, 1.3548000328280514, 9);
  sqcRZGate(q, -2.8045702876979144, 9);
  sqcRYGate(q, -1.5647661696593254, 10);
  sqcRZGate(q, 1.5520484485155301, 10);
  sqcRYGate(q, 2.969658678731686, 11);
  sqcRZGate(q, -3.1393366777915634, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.01239246212276246, 0);
  sqcRZGate(q, -1.9800245141505222, 0);
  sqcRYGate(q, -3.0525581283102783, 1);
  sqcRZGate(q, 0.6790816521660002, 1);
  sqcRYGate(q, 3.6576916977859316e-05, 2);
  sqcRZGate(q, 0.11393784520754302, 2);
  sqcRYGate(q, -1.4314293834278764, 3);
  sqcRZGate(q, 1.392611082174402, 3);
  sqcRYGate(q, 2.7178460351850795, 4);
  sqcRZGate(q, 1.3858036145454964, 4);
  sqcRYGate(q, -1.6514315238065185, 5);
  sqcRZGate(q, -1.0686118362629593, 5);
  sqcRYGate(q, -1.5755370270458036, 6);
  sqcRZGate(q, 0.8381571254824597, 6);
  sqcRYGate(q, 6.803886845752062e-05, 7);
  sqcRZGate(q, 0.7480508450331161, 7);
  sqcRYGate(q, -3.127700792147349, 8);
  sqcRZGate(q, 2.044377134280994, 8);
  sqcRYGate(q, -0.00032565531969003096, 9);
  sqcRZGate(q, -1.3496744328725185, 9);
  sqcRYGate(q, 0.0006264616884417152, 10);
  sqcRZGate(q, 2.7358995927859073, 10);
  sqcRYGate(q, 1.5718124992218656, 11);
  sqcRZGate(q, 3.532274052098217e-05, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.1935587086054285, 0);
  sqcRZGate(q, 2.5858986320438184, 0);
  sqcRYGate(q, 3.140658614050825, 1);
  sqcRZGate(q, -2.302719259892675, 1);
  sqcRYGate(q, -0.0015173901279934988, 2);
  sqcRZGate(q, -1.601114547604487, 2);
  sqcRYGate(q, -0.00036456436967391426, 3);
  sqcRZGate(q, -1.3926291523902894, 3);
  sqcRYGate(q, -3.141386742936205, 4);
  sqcRZGate(q, 2.471401711533843, 4);
  sqcRYGate(q, -3.1415712065960006, 5);
  sqcRZGate(q, 2.3980020730595157, 5);
  sqcRYGate(q, -3.1380287631742148, 6);
  sqcRZGate(q, -2.299878337437726, 6);
  sqcRYGate(q, 1.570859540741844, 7);
  sqcRZGate(q, 3.093762907027434, 7);
  sqcRYGate(q, -0.0035672885164652612, 8);
  sqcRZGate(q, 2.3818630988770937, 8);
  sqcRYGate(q, -1.5682764472070783, 9);
  sqcRZGate(q, -1.5668087140320803, 9);
  sqcRYGate(q, 2.114701877956273, 10);
  sqcRZGate(q, 3.1200203160510482, 10);
  sqcRYGate(q, 1.4168505190671317, 11);
  sqcRZGate(q, 3.0785649636072585, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.011781519813503722, 0);
  sqcRZGate(q, -2.816811221919145, 0);
  sqcRYGate(q, 3.1316883358646255, 1);
  sqcRZGate(q, 3.1143051414547602, 1);
  sqcRYGate(q, -3.1415856447371953, 2);
  sqcRZGate(q, 1.917220996828453, 2);
  sqcRYGate(q, -1.7104625994725984, 3);
  sqcRZGate(q, -1.53782016171531, 3);
  sqcRYGate(q, 0.024510765827812194, 4);
  sqcRZGate(q, 0.2577051684465162, 4);
  sqcRYGate(q, 2.7651148349683293e-05, 5);
  sqcRZGate(q, 0.3716938541903261, 5);
  sqcRYGate(q, 1.570671891394132, 6);
  sqcRZGate(q, -3.141527187589705, 6);
  sqcRYGate(q, 1.1457566420958187e-05, 7);
  sqcRZGate(q, 1.6187471734532304, 7);
  sqcRYGate(q, -3.1415922270659644, 8);
  sqcRZGate(q, 2.7765626552771003, 8);
  sqcRYGate(q, 1.5705748375272874, 9);
  sqcRZGate(q, -3.132015227547382, 9);
  sqcRYGate(q, -3.049386151617057, 10);
  sqcRZGate(q, -1.5528414839150686, 10);
  sqcRYGate(q, -3.1378154778952596, 11);
  sqcRZGate(q, -0.06345568110988609, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.1300164121461402, 0);
  sqcRZGate(q, 1.160385592915203, 0);
  sqcRYGate(q, 1.5687245604858207, 1);
  sqcRZGate(q, 2.5560248761604694, 1);
  sqcRYGate(q, 1.3287254556786454, 2);
  sqcRZGate(q, -0.48663431050699096, 2);
  sqcRYGate(q, -3.089688228191374, 3);
  sqcRZGate(q, 1.9401684465748268, 3);
  sqcRYGate(q, -0.00036073116272650196, 4);
  sqcRZGate(q, 0.18174938015975253, 4);
  sqcRYGate(q, 3.1414660108878603, 5);
  sqcRZGate(q, 0.29392186926062, 5);
  sqcRYGate(q, 1.5759117018856306, 6);
  sqcRZGate(q, 3.1415797882485927, 6);
  sqcRYGate(q, -1.1281497521419181, 7);
  sqcRZGate(q, 1.572038739321199, 7);
  sqcRYGate(q, -3.015302374882644, 8);
  sqcRZGate(q, 1.1889779627726274, 8);
  sqcRYGate(q, -1.004025739558318, 9);
  sqcRZGate(q, 3.1366055671883366, 9);
  sqcRYGate(q, 1.5319086684764844, 10);
  sqcRZGate(q, -1.298213518718268, 10);
  sqcRYGate(q, -2.4181176604181216, 11);
  sqcRZGate(q, -1.5706737322619666, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -5.260366097825653e-05, 0);
  sqcRZGate(q, -2.7366043210053936, 0);
  sqcRYGate(q, 3.1365494181327, 1);
  sqcRZGate(q, 2.5163799121145356, 1);
  sqcRYGate(q, 0.00012281238842355341, 2);
  sqcRZGate(q, 0.48311958104955816, 2);
  sqcRYGate(q, 1.5706435344371767, 3);
  sqcRZGate(q, -2.281685188822583, 3);
  sqcRYGate(q, 1.571803454537176, 4);
  sqcRZGate(q, 3.081890178736867, 4);
  sqcRYGate(q, 0.0002280034503341355, 5);
  sqcRZGate(q, 2.665494751406038, 5);
  sqcRYGate(q, -1.5708977076793256, 6);
  sqcRZGate(q, 2.853437472052265, 6);
  sqcRYGate(q, 3.1357907859104333, 7);
  sqcRZGate(q, 0.0018500419949546202, 7);
  sqcRYGate(q, 3.1415396115795153, 8);
  sqcRZGate(q, 2.761887115164951, 8);
  sqcRYGate(q, -1.5708313842955985, 9);
  sqcRZGate(q, -3.141530944869026, 9);
  sqcRYGate(q, 0.0005968752875841267, 10);
  sqcRZGate(q, -1.7037340206340719, 10);
  sqcRYGate(q, 1.5620886057650472, 11);
  sqcRZGate(q, -1.1491087782428882, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.4545997077228565, 0);
  sqcRZGate(q, 1.5512252850511508, 0);
  sqcRYGate(q, -1.569318937764742, 1);
  sqcRZGate(q, 0.05223621076283086, 1);
  sqcRYGate(q, 1.5708444546547335, 2);
  sqcRZGate(q, -0.41163167450752347, 2);
  sqcRYGate(q, -3.113132744345022, 3);
  sqcRZGate(q, -0.7118916394829462, 3);
  sqcRYGate(q, -1.6219493418789064, 4);
  sqcRZGate(q, -1.9947553820129036, 4);
  sqcRYGate(q, -3.61383390191365e-07, 5);
  sqcRZGate(q, -2.254676412789345, 5);
  sqcRYGate(q, -3.0224157149448834, 6);
  sqcRZGate(q, -1.6943938942060521, 6);
  sqcRYGate(q, -1.568357583068309, 7);
  sqcRZGate(q, -3.12933746545729, 7);
  sqcRYGate(q, 1.570182146756446, 8);
  sqcRZGate(q, -2.06845789067171, 8);
  sqcRYGate(q, 1.5691092095715762, 9);
  sqcRZGate(q, -2.6433122818691714, 9);
  sqcRYGate(q, 1.5710133095286327, 10);
  sqcRZGate(q, 1.5700765143607063, 10);
  sqcRYGate(q, 3.1415795604390824, 11);
  sqcRZGate(q, -2.7366791733070097, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.5708743952220114, 0);
  sqcRZGate(q, 2.1484387063023216, 0);
  sqcRYGate(q, 3.1171477503394356, 1);
  sqcRZGate(q, -0.32222455814342865, 1);
  sqcRYGate(q, 3.1415316992551654, 2);
  sqcRZGate(q, 1.1590933813295365, 2);
  sqcRYGate(q, 1.5685402906996275, 3);
  sqcRZGate(q, -1.570583524163547, 3);
  sqcRYGate(q, 0.003487377552563231, 4);
  sqcRZGate(q, 1.9951440236849443, 4);
  sqcRYGate(q, -0.04464412109658778, 5);
  sqcRZGate(q, -2.367592329709211, 5);
  sqcRYGate(q, 3.1256781600772463, 6);
  sqcRZGate(q, -2.863017985130248, 6);
  sqcRYGate(q, -1.5655938422121096e-05, 7);
  sqcRZGate(q, -0.2226613055779248, 7);
  sqcRYGate(q, 3.1415318222966726, 8);
  sqcRZGate(q, -0.4977707408020354, 8);
  sqcRYGate(q, 2.352747396278589e-05, 9);
  sqcRZGate(q, -2.0689645874193427, 9);
  sqcRYGate(q, 1.5707001661828859, 10);
  sqcRZGate(q, -1.7807997297525961, 10);
  sqcRYGate(q, -1.5703950656297492, 11);
  sqcRZGate(q, 1.646912534325213, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.1829810327243733, 0);
  sqcRZGate(q, -0.19221810376216264, 0);
  sqcRYGate(q, -3.1415719376988367, 1);
  sqcRZGate(q, -1.2000008119190761, 1);
  sqcRYGate(q, 1.5819451537528268, 2);
  sqcRZGate(q, -0.7177868330928961, 2);
  sqcRYGate(q, 1.5707785665219198, 3);
  sqcRZGate(q, -0.8048722272319272, 3);
  sqcRYGate(q, -1.520057563462733, 4);
  sqcRZGate(q, -0.7759478261657132, 4);
  sqcRYGate(q, 3.141411014890308, 5);
  sqcRZGate(q, 1.4666922048017135, 5);
  sqcRYGate(q, -3.1064472907307183, 6);
  sqcRZGate(q, 2.5419310642655812, 6);
  sqcRYGate(q, -0.0025710948771738595, 7);
  sqcRZGate(q, 0.9554549079334603, 7);
  sqcRYGate(q, 1.5664309577527606, 8);
  sqcRZGate(q, -2.2892937043373327, 8);
  sqcRYGate(q, -1.570855441971593, 9);
  sqcRZGate(q, 1.9789546088966452, 9);
  sqcRYGate(q, 3.141391351152857, 10);
  sqcRZGate(q, -0.9276636988264853, 10);
  sqcRYGate(q, 2.826618875868584e-05, 11);
  sqcRZGate(q, -2.4593523399464914, 11);

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
