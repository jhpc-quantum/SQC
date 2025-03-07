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

  sqcRYGate(q, -1.6104834832919899, 0);
  sqcRZGate(q, 0.010386728559060704, 0);
  sqcRYGate(q, -3.1414742361973547, 1);
  sqcRZGate(q, 0.8382566405520679, 1);
  sqcRYGate(q, 1.5627711622824592, 2);
  sqcRZGate(q, -0.36960109095201954, 2);
  sqcRYGate(q, -0.0006482242067749056, 3);
  sqcRZGate(q, 0.12020175945640413, 3);
  sqcRYGate(q, -1.6102903416681418, 4);
  sqcRZGate(q, -3.1311862825880827, 4);
  sqcRYGate(q, 3.1414631625608904, 5);
  sqcRZGate(q, -1.1805062209575894, 5);
  sqcRYGate(q, 3.141588592984933, 6);
  sqcRZGate(q, -0.5512951113424402, 6);
  sqcRYGate(q, -3.141542670015304, 7);
  sqcRZGate(q, -1.8032086274618315, 7);
  sqcRYGate(q, -2.0230579858845488, 8);
  sqcRZGate(q, 2.878734574585811, 8);
  sqcRYGate(q, -3.1411642603909757, 9);
  sqcRZGate(q, 1.2922417803195145, 9);
  sqcRYGate(q, 2.641500930466069, 10);
  sqcRZGate(q, 1.5558955959257457, 10);
  sqcRYGate(q, -0.005640064172920772, 11);
  sqcRZGate(q, 1.6995195489964479, 11);
  sqcRYGate(q, 2.1261402595131713, 12);
  sqcRZGate(q, 1.3759844464958615, 12);
  sqcRYGate(q, 1.5720061158221839, 13);
  sqcRZGate(q, -1.860876109953729, 13);
  sqcRYGate(q, 3.1350778720246173, 14);
  sqcRZGate(q, 1.4803972556377487, 14);
  sqcRYGate(q, 0.0006942153162499182, 15);
  sqcRZGate(q, 2.857838643686892, 15);
  sqcRYGate(q, 1.5636205201361069, 16);
  sqcRZGate(q, -2.901869162717904, 16);
  sqcRYGate(q, 1.415942733378249, 17);
  sqcRZGate(q, -1.4348481038391698, 17);
  sqcRYGate(q, -0.05655850821144214, 18);
  sqcRZGate(q, -0.9422089093778981, 18);
  sqcRYGate(q, -3.134257113079096, 19);
  sqcRZGate(q, -2.1308649139118057, 19);
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
  sqcRYGate(q, 1.5455340188900137, 0);
  sqcRZGate(q, -0.15907150004768533, 0);
  sqcRYGate(q, 1.5706522578651123, 1);
  sqcRZGate(q, 2.593001108079882, 1);
  sqcRYGate(q, 0.9422569660511746, 2);
  sqcRZGate(q, 1.7460750952530653, 2);
  sqcRYGate(q, -0.0008743874825437209, 3);
  sqcRZGate(q, -1.2827763261980554, 3);
  sqcRYGate(q, -1.5973063858582819, 4);
  sqcRZGate(q, 0.3739652025146277, 4);
  sqcRYGate(q, -1.6706817944971286, 5);
  sqcRZGate(q, 2.6174355142199213, 5);
  sqcRYGate(q, 3.1289869760975364e-05, 6);
  sqcRZGate(q, -2.6010029135111203, 6);
  sqcRYGate(q, -8.183397625591124e-07, 7);
  sqcRZGate(q, 0.9942146292036256, 7);
  sqcRYGate(q, 1.6246867539879584, 8);
  sqcRZGate(q, 0.47604735515298474, 8);
  sqcRYGate(q, 3.140030858075436, 9);
  sqcRZGate(q, 0.17020464952083394, 9);
  sqcRYGate(q, 1.1176592775066567, 10);
  sqcRZGate(q, -2.8635489821296343, 10);
  sqcRYGate(q, 1.5765646543239136, 11);
  sqcRZGate(q, -0.7773170839587712, 11);
  sqcRYGate(q, 3.1411551914058493, 12);
  sqcRZGate(q, 1.340760903955629, 12);
  sqcRYGate(q, 3.069775746031977, 13);
  sqcRZGate(q, 0.25143698402986037, 13);
  sqcRYGate(q, -6.887375310071775e-05, 14);
  sqcRZGate(q, 0.3342921844117591, 14);
  sqcRYGate(q, -0.027883080364342838, 15);
  sqcRZGate(q, 2.332267735648238, 15);
  sqcRYGate(q, -1.550695291705066, 16);
  sqcRZGate(q, 1.5145036711530047, 16);
  sqcRYGate(q, -1.8291189601288222, 17);
  sqcRZGate(q, -1.498259280891403, 17);
  sqcRYGate(q, 3.1389475573214294, 18);
  sqcRZGate(q, -2.4137257674015746, 18);
  sqcRYGate(q, 1.6527771037367014, 19);
  sqcRZGate(q, 1.0057563791311255, 19);
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
  sqcRYGate(q, -0.04887171697201227, 0);
  sqcRZGate(q, 2.5630498986499197, 0);
  sqcRYGate(q, 1.6807362086869047, 1);
  sqcRZGate(q, -1.3067162532950667, 1);
  sqcRYGate(q, 1.6342781534990936, 2);
  sqcRZGate(q, -0.6323253970408578, 2);
  sqcRYGate(q, -1.571206308018529, 3);
  sqcRZGate(q, 3.097181858251225, 3);
  sqcRYGate(q, 3.0955177964621114, 4);
  sqcRZGate(q, 1.2307053491479871, 4);
  sqcRYGate(q, -1.6110501520732439, 5);
  sqcRZGate(q, -1.5924283923176417, 5);
  sqcRYGate(q, 3.1415877993195167, 6);
  sqcRZGate(q, 0.7045836950166855, 6);
  sqcRYGate(q, 3.141590450252795, 7);
  sqcRZGate(q, -0.5055306769785317, 7);
  sqcRYGate(q, -2.2149093012091656, 8);
  sqcRZGate(q, -0.26562470898342655, 8);
  sqcRYGate(q, -2.2299615347117596, 9);
  sqcRZGate(q, -1.5577470135448253, 9);
  sqcRYGate(q, 0.0001440674582680046, 10);
  sqcRZGate(q, 2.866959373168747, 10);
  sqcRYGate(q, 3.1400577784619177, 11);
  sqcRZGate(q, -3.1299629663242836, 11);
  sqcRYGate(q, -0.13212647280395048, 12);
  sqcRZGate(q, -0.1530017966966462, 12);
  sqcRYGate(q, 0.06358793230758497, 13);
  sqcRZGate(q, -0.5607251249551424, 13);
  sqcRYGate(q, -1.6251881996231539, 14);
  sqcRZGate(q, 0.4476821040477203, 14);
  sqcRYGate(q, 0.00014516655611482445, 15);
  sqcRZGate(q, -1.7759129017528839, 15);
  sqcRYGate(q, 1.6708663160928297, 16);
  sqcRZGate(q, 2.0712078242999716, 16);
  sqcRYGate(q, 3.1333724429917718, 17);
  sqcRZGate(q, -1.6376180987919076, 17);
  sqcRYGate(q, 1.4009404510809151, 18);
  sqcRZGate(q, -1.3700472184958148, 18);
  sqcRYGate(q, -0.12109580031493491, 19);
  sqcRZGate(q, 1.882331534779721, 19);
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
  sqcRYGate(q, 2.4055190842808823e-05, 0);
  sqcRZGate(q, 2.8636876245225085, 0);
  sqcRYGate(q, 1.5657855041140405, 1);
  sqcRZGate(q, -1.2738287141085243, 1);
  sqcRYGate(q, 3.1415364302352256, 2);
  sqcRZGate(q, -1.576805976934822, 2);
  sqcRYGate(q, 3.141524598855067, 3);
  sqcRZGate(q, -0.964830141699392, 3);
  sqcRYGate(q, -3.141474441657849, 4);
  sqcRZGate(q, -0.5146301075557168, 4);
  sqcRYGate(q, 1.5715590128907895, 5);
  sqcRZGate(q, 1.5723853288638316, 5);
  sqcRYGate(q, -3.0251471989650724e-05, 6);
  sqcRZGate(q, -1.9134775775103134, 6);
  sqcRYGate(q, 3.1415821183385977, 7);
  sqcRZGate(q, -3.118233932559118, 7);
  sqcRYGate(q, 3.0946477145483895, 8);
  sqcRZGate(q, -0.42221604475110297, 8);
  sqcRYGate(q, -1.5711431906660474, 9);
  sqcRZGate(q, -1.5670980942947932, 9);
  sqcRYGate(q, 2.1868848155572262, 10);
  sqcRZGate(q, 1.0402297479232792, 10);
  sqcRYGate(q, -0.005951157447171207, 11);
  sqcRZGate(q, -2.544845110855971, 11);
  sqcRYGate(q, -0.04536489448367398, 12);
  sqcRZGate(q, 2.947644480755699, 12);
  sqcRYGate(q, -2.2769574846789986, 13);
  sqcRZGate(q, -1.7634034292573784, 13);
  sqcRYGate(q, -0.0010902238069760983, 14);
  sqcRZGate(q, 2.693683584005944, 14);
  sqcRYGate(q, 0.6195894271941361, 15);
  sqcRZGate(q, 1.5781192306404046, 15);
  sqcRYGate(q, 3.1105171369632574, 16);
  sqcRZGate(q, 2.122797384724336, 16);
  sqcRYGate(q, -1.6074263996627758, 17);
  sqcRZGate(q, 0.7779826146181765, 17);
  sqcRYGate(q, 2.8579465552806598, 18);
  sqcRZGate(q, 0.17445691763898102, 18);
  sqcRYGate(q, 2.9041058371482436, 19);
  sqcRZGate(q, -3.092295414673458, 19);
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
  sqcRYGate(q, 1.5635138535710627, 0);
  sqcRZGate(q, 0.4374772818906616, 0);
  sqcRYGate(q, 1.1207235062453067, 1);
  sqcRZGate(q, 2.7578761653933075, 1);
  sqcRYGate(q, 1.3916622451804983, 2);
  sqcRZGate(q, 1.6133180416581567, 2);
  sqcRYGate(q, 0.00013635402875853534, 3);
  sqcRZGate(q, 1.4354742610464513, 3);
  sqcRYGate(q, 1.5737956473895327, 4);
  sqcRZGate(q, 3.1382662352380537, 4);
  sqcRYGate(q, 1.5739247663618596, 5);
  sqcRZGate(q, -0.02688185492553338, 5);
  sqcRYGate(q, -5.733594361334582e-05, 6);
  sqcRZGate(q, -0.9175410882181312, 6);
  sqcRYGate(q, 3.4250389226997413e-06, 7);
  sqcRZGate(q, -0.15549993168696474, 7);
  sqcRYGate(q, -1.5705695081802906, 8);
  sqcRZGate(q, -0.0006893934867377993, 8);
  sqcRYGate(q, 1.5720205080677339, 9);
  sqcRZGate(q, 0.6954668919595823, 9);
  sqcRYGate(q, -0.00011695270724192534, 10);
  sqcRZGate(q, 1.1768524633293564, 10);
  sqcRYGate(q, -3.1353214916987766, 11);
  sqcRZGate(q, 2.9076227475548158, 11);
  sqcRYGate(q, -2.263656005236989, 12);
  sqcRZGate(q, -1.3395261570702983, 12);
  sqcRYGate(q, -3.116986198616764, 13);
  sqcRZGate(q, -0.1678728249933954, 13);
  sqcRYGate(q, 1.628684779440312, 14);
  sqcRZGate(q, 0.9699380498170199, 14);
  sqcRYGate(q, -3.110039514541115, 15);
  sqcRZGate(q, 0.651412721881054, 15);
  sqcRYGate(q, 0.022458516427608006, 16);
  sqcRZGate(q, -1.9775907904412158, 16);
  sqcRYGate(q, -3.1410271901320894, 17);
  sqcRZGate(q, 1.4979100853673817, 17);
  sqcRYGate(q, 3.131817021199218, 18);
  sqcRZGate(q, 0.08792191158880414, 18);
  sqcRYGate(q, 3.058243540183498, 19);
  sqcRZGate(q, -2.8258714205499134, 19);
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
  sqcRYGate(q, 1.6592333713419791, 0);
  sqcRZGate(q, -0.7385386119450323, 0);
  sqcRYGate(q, -2.6925083410591197, 1);
  sqcRZGate(q, -2.0861228780142675, 1);
  sqcRYGate(q, 3.0804545071711154, 2);
  sqcRZGate(q, -0.43860224107594803, 2);
  sqcRYGate(q, -1.513260980679835, 3);
  sqcRZGate(q, 3.0518717858461346, 3);
  sqcRYGate(q, -1.5727110447705224, 4);
  sqcRZGate(q, 2.8792372425657633, 4);
  sqcRYGate(q, 0.0038503098194390306, 5);
  sqcRZGate(q, 0.8115664243641576, 5);
  sqcRYGate(q, -3.1414685473650437, 6);
  sqcRZGate(q, -1.5072979782191103, 6);
  sqcRYGate(q, -3.14149669568832, 7);
  sqcRZGate(q, -0.5258814002838244, 7);
  sqcRYGate(q, -1.5712134151035404, 8);
  sqcRZGate(q, 1.2861732845935139, 8);
  sqcRYGate(q, 0.0014923318122323573, 9);
  sqcRZGate(q, -0.9680925633374621, 9);
  sqcRYGate(q, -3.1392794890402893, 10);
  sqcRZGate(q, 1.8056247213783831, 10);
  sqcRYGate(q, -1.5717295478426228, 11);
  sqcRZGate(q, 0.18242360281470216, 11);
  sqcRYGate(q, 3.1346827672392283, 12);
  sqcRZGate(q, -2.7275360135190985, 12);
  sqcRYGate(q, -1.5805606944441992, 13);
  sqcRZGate(q, 2.925510339858444, 13);
  sqcRYGate(q, -0.00423608133689691, 14);
  sqcRZGate(q, -2.563687802648726, 14);
  sqcRYGate(q, -3.118049121409112, 15);
  sqcRZGate(q, 0.6222625152136416, 15);
  sqcRYGate(q, -0.005724480665032061, 16);
  sqcRZGate(q, -1.6991290100844818, 16);
  sqcRYGate(q, 3.12441448589291, 17);
  sqcRZGate(q, -0.7682204466830074, 17);
  sqcRYGate(q, -0.27717673026203027, 18);
  sqcRZGate(q, -3.0687399392985397, 18);
  sqcRYGate(q, 1.8280113957300745, 19);
  sqcRZGate(q, 1.8250894443403873, 19);

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
