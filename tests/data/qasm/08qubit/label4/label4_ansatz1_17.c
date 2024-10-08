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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -0.21886094037601525, 0);
  sqcRZGate(q, -2.8909792802456824, 0);
  sqcRYGate(q, 0.01997351879248388, 1);
  sqcRZGate(q, -1.9404842240905684, 1);
  sqcRYGate(q, 3.1247286920457786, 2);
  sqcRZGate(q, -1.3341781528259649, 2);
  sqcRYGate(q, 1.6478523399555591, 3);
  sqcRZGate(q, 2.1046658195665255, 3);
  sqcRYGate(q, -2.766095299385177, 4);
  sqcRZGate(q, 2.9975547557148032, 4);
  sqcRYGate(q, 0.42350727207415234, 5);
  sqcRZGate(q, -0.8513356527535151, 5);
  sqcRYGate(q, 3.0309731870634864, 6);
  sqcRZGate(q, 2.4285835773984004, 6);
  sqcRYGate(q, -1.3495682042627726, 7);
  sqcRZGate(q, 1.368073689519857, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8472519448611378, 0);
  sqcRZGate(q, -2.5377873545459435, 0);
  sqcRYGate(q, -0.12175615260905204, 1);
  sqcRZGate(q, -0.790892395186173, 1);
  sqcRYGate(q, 2.245138315266081, 2);
  sqcRZGate(q, -1.6641686799700348, 2);
  sqcRYGate(q, 2.703268578658685, 3);
  sqcRZGate(q, -1.0773133389259035, 3);
  sqcRYGate(q, -0.4327699719499577, 4);
  sqcRZGate(q, 2.874734107246677, 4);
  sqcRYGate(q, 0.8550695190973218, 5);
  sqcRZGate(q, 2.2819530685730056, 5);
  sqcRYGate(q, -2.620980099939365, 6);
  sqcRZGate(q, 0.011641376315982832, 6);
  sqcRYGate(q, 2.194331210460738, 7);
  sqcRZGate(q, -2.620100108092516, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.126409476570343, 0);
  sqcRZGate(q, 2.0863821694281226, 0);
  sqcRYGate(q, 3.141045574539191, 1);
  sqcRZGate(q, -0.8989830092676396, 1);
  sqcRYGate(q, -0.019306522235328142, 2);
  sqcRZGate(q, 1.6539783204785181, 2);
  sqcRYGate(q, 1.4929146436599832, 3);
  sqcRZGate(q, -0.8249698286789338, 3);
  sqcRYGate(q, -2.0943634937600617, 4);
  sqcRZGate(q, -1.9070467598487784, 4);
  sqcRYGate(q, -2.6255388099886026, 5);
  sqcRZGate(q, 0.5254571316493424, 5);
  sqcRYGate(q, 0.14534824674407512, 6);
  sqcRZGate(q, -0.7166451585843789, 6);
  sqcRYGate(q, 2.446690872449675, 7);
  sqcRZGate(q, 1.42269602222843, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.2606569298887216, 0);
  sqcRZGate(q, -1.3579467234154903, 0);
  sqcRYGate(q, 2.7051455495193006, 1);
  sqcRZGate(q, 1.8758702211364462, 1);
  sqcRYGate(q, 1.3728398455233082, 2);
  sqcRZGate(q, -1.4085754845403242, 2);
  sqcRYGate(q, 0.01829704738503679, 3);
  sqcRZGate(q, -2.899749406967316, 3);
  sqcRYGate(q, -0.011347069121787514, 4);
  sqcRZGate(q, 0.598588723662706, 4);
  sqcRYGate(q, -0.5494644859533162, 5);
  sqcRZGate(q, 1.3565163701615053, 5);
  sqcRYGate(q, 1.2145343073091064, 6);
  sqcRZGate(q, 2.448039544917113, 6);
  sqcRYGate(q, 0.36692910155424024, 7);
  sqcRZGate(q, -1.1157938051125038, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.498711667435547, 0);
  sqcRZGate(q, -1.0128054454680397, 0);
  sqcRYGate(q, 0.0005175191732416523, 1);
  sqcRZGate(q, -0.36973659869805076, 1);
  sqcRYGate(q, 3.1242175556161134, 2);
  sqcRZGate(q, 1.9759959323145113, 2);
  sqcRYGate(q, 1.268532167596042, 3);
  sqcRZGate(q, -0.8316447490331947, 3);
  sqcRYGate(q, 2.5375387468183317, 4);
  sqcRZGate(q, 2.4884679283727817, 4);
  sqcRYGate(q, -0.7269256680295895, 5);
  sqcRZGate(q, 0.40354041884697495, 5);
  sqcRYGate(q, -2.7657066079168535, 6);
  sqcRZGate(q, -2.8893640988699834, 6);
  sqcRYGate(q, 2.0751261883622067, 7);
  sqcRZGate(q, -0.15418736008992617, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.9818486543041725, 0);
  sqcRZGate(q, 1.7843291859542743, 0);
  sqcRYGate(q, 1.530746982351963, 1);
  sqcRZGate(q, 0.732973418772386, 1);
  sqcRYGate(q, -0.10127294263231779, 2);
  sqcRZGate(q, -1.7714442200639748, 2);
  sqcRYGate(q, 2.9230478766351182, 3);
  sqcRZGate(q, 0.06024480070254512, 3);
  sqcRYGate(q, 0.004846444424678964, 4);
  sqcRZGate(q, 1.9584698481096374, 4);
  sqcRYGate(q, -0.6929648916887536, 5);
  sqcRZGate(q, 2.852091074776445, 5);
  sqcRYGate(q, -1.9641356372700818, 6);
  sqcRZGate(q, 1.8382109903602561, 6);
  sqcRYGate(q, -0.7351391117225159, 7);
  sqcRZGate(q, -1.9951421813859602, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4739917406917824, 0);
  sqcRZGate(q, 1.7082380849702055, 0);
  sqcRYGate(q, -1.3207871187958524, 1);
  sqcRZGate(q, -0.061565269172363386, 1);
  sqcRYGate(q, 1.569237278128961, 2);
  sqcRZGate(q, -0.05090017717458383, 2);
  sqcRYGate(q, -2.0748601046860298, 3);
  sqcRZGate(q, -0.791370434043789, 3);
  sqcRYGate(q, 1.2254339245476507, 4);
  sqcRZGate(q, -1.8219390079661169, 4);
  sqcRYGate(q, 2.1859230174228155, 5);
  sqcRZGate(q, -0.2485375880504499, 5);
  sqcRYGate(q, -3.0912751311352764, 6);
  sqcRZGate(q, 1.846668293690512, 6);
  sqcRYGate(q, 0.7152128113148218, 7);
  sqcRZGate(q, 2.2956462117779486, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.000953386551068469, 0);
  sqcRZGate(q, -0.4979104302931353, 0);
  sqcRYGate(q, -0.7925159260023839, 1);
  sqcRZGate(q, 1.7383442508892533, 1);
  sqcRYGate(q, 0.0006823101083239073, 2);
  sqcRZGate(q, 2.4365491855308012, 2);
  sqcRYGate(q, 0.00020171556636570202, 3);
  sqcRZGate(q, 2.3123101607057106, 3);
  sqcRYGate(q, 0.0032860092283591587, 4);
  sqcRZGate(q, -1.2365700041568957, 4);
  sqcRYGate(q, 2.417660299046897, 5);
  sqcRZGate(q, -3.094597154851699, 5);
  sqcRYGate(q, 2.2496787507475964, 6);
  sqcRZGate(q, -0.031372253813251816, 6);
  sqcRYGate(q, -1.2603199890490617, 7);
  sqcRZGate(q, -2.6939532409215645, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.141254634423651, 0);
  sqcRZGate(q, 0.41324454063123106, 0);
  sqcRYGate(q, 0.9333247954249231, 1);
  sqcRZGate(q, 1.3868185998814935, 1);
  sqcRYGate(q, 3.139909415975862, 2);
  sqcRZGate(q, -0.7514669952333, 2);
  sqcRYGate(q, 2.2417733725457696, 3);
  sqcRZGate(q, 1.6070142090017554, 3);
  sqcRYGate(q, 2.5972803885208267, 4);
  sqcRZGate(q, 0.5535162178487738, 4);
  sqcRYGate(q, -1.2581934817648823, 5);
  sqcRZGate(q, 3.0982319970126673, 5);
  sqcRYGate(q, 0.14606708707680405, 6);
  sqcRZGate(q, -1.4305718673460888, 6);
  sqcRYGate(q, 1.211849337391775, 7);
  sqcRZGate(q, -0.35529201210751804, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1397110167432927, 0);
  sqcRZGate(q, -2.3838334909769285, 0);
  sqcRYGate(q, -2.1201055390878403, 1);
  sqcRZGate(q, 1.7301896889381598, 1);
  sqcRYGate(q, -1.565538629431214, 2);
  sqcRZGate(q, -0.045726940528875645, 2);
  sqcRYGate(q, -1.5703262457958256, 3);
  sqcRZGate(q, -1.9625266464547932, 3);
  sqcRYGate(q, 1.5740736125102321, 4);
  sqcRZGate(q, 0.6502121313663851, 4);
  sqcRYGate(q, -0.8309975504996926, 5);
  sqcRZGate(q, 0.26807957397115995, 5);
  sqcRYGate(q, 3.080831088122547, 6);
  sqcRZGate(q, -2.7215726747507794, 6);
  sqcRYGate(q, 2.561327383883052, 7);
  sqcRZGate(q, 0.9458246815652007, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.12271447299119842, 0);
  sqcRZGate(q, -0.14371257603999918, 0);
  sqcRYGate(q, 1.5649987855572085, 1);
  sqcRZGate(q, 2.8602279630941827, 1);
  sqcRYGate(q, 2.131356934648064, 2);
  sqcRZGate(q, 1.02030353961461, 2);
  sqcRYGate(q, -9.329719001844942e-05, 3);
  sqcRZGate(q, 2.2393711695882645, 3);
  sqcRYGate(q, 2.5548683304700877, 4);
  sqcRZGate(q, 1.7167163759290645, 4);
  sqcRYGate(q, 1.6019701120292353, 5);
  sqcRZGate(q, -2.555169747832184, 5);
  sqcRYGate(q, -0.5535451291881766, 6);
  sqcRZGate(q, 1.9946435441104544, 6);
  sqcRYGate(q, -0.08722800114911777, 7);
  sqcRZGate(q, -0.0010889426231167549, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6267339039389808, 0);
  sqcRZGate(q, -2.701262434052825, 0);
  sqcRYGate(q, 0.0024879377830791852, 1);
  sqcRZGate(q, -2.0956138955662844, 1);
  sqcRYGate(q, -0.15791481733992455, 2);
  sqcRZGate(q, 1.8063088140560213, 2);
  sqcRYGate(q, 3.1391735942938026, 3);
  sqcRZGate(q, -1.957735538628945, 3);
  sqcRYGate(q, -0.09591136102432962, 4);
  sqcRZGate(q, 0.4175012541072558, 4);
  sqcRYGate(q, -0.000304407014557917, 5);
  sqcRZGate(q, -0.48807845581584886, 5);
  sqcRYGate(q, -1.2720335396048654, 6);
  sqcRZGate(q, -0.9863865430546506, 6);
  sqcRYGate(q, -2.477491084140197, 7);
  sqcRZGate(q, 2.43254060697503, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6203640163986839, 0);
  sqcRZGate(q, -2.0595534061425846, 0);
  sqcRYGate(q, 3.1412907485602855, 1);
  sqcRZGate(q, 0.9460939592501925, 1);
  sqcRYGate(q, -0.5866929459156438, 2);
  sqcRZGate(q, 0.08019020501018925, 2);
  sqcRYGate(q, 0.0007857646654425565, 3);
  sqcRZGate(q, 2.2335831798532366, 3);
  sqcRYGate(q, -1.2277869536049009, 4);
  sqcRZGate(q, 2.0563700017863917, 4);
  sqcRYGate(q, 0.010494307476253795, 5);
  sqcRZGate(q, 0.1349799407954766, 5);
  sqcRYGate(q, -3.1085938320448867, 6);
  sqcRZGate(q, 0.487187397451885, 6);
  sqcRYGate(q, 3.1383009848518086, 7);
  sqcRZGate(q, 0.5516793507590573, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.839196380600578, 0);
  sqcRZGate(q, 2.7945738677721828, 0);
  sqcRYGate(q, 3.115145925529478, 1);
  sqcRZGate(q, -1.2985851919037281, 1);
  sqcRYGate(q, -0.5378435853449066, 2);
  sqcRZGate(q, -0.5358689948278951, 2);
  sqcRYGate(q, 1.5675262320737418, 3);
  sqcRZGate(q, 0.0036993973152306125, 3);
  sqcRYGate(q, 1.5170382401610463, 4);
  sqcRZGate(q, 0.07568980106966094, 4);
  sqcRYGate(q, -0.00043714747001388917, 5);
  sqcRZGate(q, -1.9228066317657158, 5);
  sqcRYGate(q, 1.2676554390855275, 6);
  sqcRZGate(q, 1.8754929903855766, 6);
  sqcRYGate(q, 2.9824873178755773, 7);
  sqcRZGate(q, -0.4271914950110237, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.4412838463856863, 0);
  sqcRZGate(q, 3.0446745631157546, 0);
  sqcRYGate(q, 2.91663686618792, 1);
  sqcRZGate(q, -1.2018614578350988, 1);
  sqcRYGate(q, 3.070925833855134, 2);
  sqcRZGate(q, 0.7581034611064034, 2);
  sqcRYGate(q, 3.0200849386562956, 3);
  sqcRZGate(q, 3.0366314353048987, 3);
  sqcRYGate(q, 1.5709718010592781, 4);
  sqcRZGate(q, -3.1398180221903926, 4);
  sqcRYGate(q, 1.5707387369537793, 5);
  sqcRZGate(q, -1.57072588046766, 5);
  sqcRYGate(q, -2.115781068175979, 6);
  sqcRZGate(q, -1.597168494293971, 6);
  sqcRYGate(q, 0.0007695942269760891, 7);
  sqcRZGate(q, 0.05437673356172378, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1735426220081737, 0);
  sqcRZGate(q, 2.0038544597921577, 0);
  sqcRYGate(q, 0.20673825227922915, 1);
  sqcRZGate(q, -1.9275391815420768, 1);
  sqcRYGate(q, -1.5717294947493727, 2);
  sqcRZGate(q, -1.5704816493078786, 2);
  sqcRYGate(q, 3.138958485610836, 3);
  sqcRZGate(q, -1.5561640437193038, 3);
  sqcRYGate(q, 1.5717395211431304, 4);
  sqcRZGate(q, -2.6253064710359264, 4);
  sqcRYGate(q, -1.5710254357943307, 5);
  sqcRZGate(q, -1.57085271559236, 5);
  sqcRYGate(q, -1.57069571446858, 6);
  sqcRZGate(q, -1.5709926356463493, 6);
  sqcRYGate(q, 2.7409694687766946, 7);
  sqcRZGate(q, 2.206068501578972, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.136382902238121, 0);
  sqcRZGate(q, 0.28746690098887967, 0);
  sqcRYGate(q, -3.1410994655034727, 1);
  sqcRZGate(q, 1.5060361928298054, 1);
  sqcRYGate(q, 1.5707650089735248, 2);
  sqcRZGate(q, -0.6646849246388715, 2);
  sqcRYGate(q, 3.1320911744753657, 3);
  sqcRZGate(q, 0.9760142122324412, 3);
  sqcRYGate(q, -3.1410747678752933, 4);
  sqcRZGate(q, 0.46604545658172203, 4);
  sqcRYGate(q, 1.5717719179528449, 5);
  sqcRZGate(q, 3.056573439213509, 5);
  sqcRYGate(q, -1.5708528586269805, 6);
  sqcRZGate(q, 0.0018646677614846399, 6);
  sqcRYGate(q, -3.103231834608932, 7);
  sqcRZGate(q, 3.086255919215465, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.126431453703198, 0);
  sqcRZGate(q, 0.3359248866638546, 0);
  sqcRYGate(q, 1.5705452464946807, 1);
  sqcRZGate(q, 1.5693694741457245, 1);
  sqcRYGate(q, -3.0638585045505455, 2);
  sqcRZGate(q, 0.8603274405094904, 2);
  sqcRYGate(q, 3.141161942054925, 3);
  sqcRZGate(q, 0.9749531127941511, 3);
  sqcRYGate(q, -0.011543471664439845, 4);
  sqcRZGate(q, 1.802315822117805, 4);
  sqcRYGate(q, 1.556588378020177, 5);
  sqcRZGate(q, 1.9771591611725103, 5);
  sqcRYGate(q, -0.20765493786323397, 6);
  sqcRZGate(q, -1.4545748309004354, 6);
  sqcRYGate(q, 1.570829451000487, 7);
  sqcRZGate(q, 1.5708920544944664, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5706990062578754, 0);
  sqcRZGate(q, -1.5710944125737871, 0);
  sqcRYGate(q, 2.978998007070521, 1);
  sqcRZGate(q, -1.5725273279537386, 1);
  sqcRYGate(q, -1.561023947216492, 2);
  sqcRZGate(q, -2.2062586935054647, 2);
  sqcRYGate(q, 3.133729748853845, 3);
  sqcRZGate(q, 1.5265669322478583, 3);
  sqcRYGate(q, -0.0010518469354483528, 4);
  sqcRZGate(q, -2.9790605105095644, 4);
  sqcRYGate(q, 0.00012473959526193568, 5);
  sqcRZGate(q, -0.5677948340762168, 5);
  sqcRYGate(q, -3.139809999918207, 6);
  sqcRZGate(q, -1.4523854483133567, 6);
  sqcRYGate(q, -1.5703454363134937, 7);
  sqcRZGate(q, 2.051998582523968, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5707362169090344, 0);
  sqcRZGate(q, 1.9163952362256236, 0);
  sqcRYGate(q, 1.5708639247495941, 1);
  sqcRZGate(q, 1.571299395783809, 1);
  sqcRYGate(q, -2.900208010561555, 2);
  sqcRZGate(q, -1.9832846096597285, 2);
  sqcRYGate(q, -3.1415774344561727, 3);
  sqcRZGate(q, 2.975313992015581, 3);
  sqcRYGate(q, 3.1076876660096957, 4);
  sqcRZGate(q, 0.3437931706251316, 4);
  sqcRYGate(q, -0.0861447861318483, 5);
  sqcRZGate(q, -2.9798819946291983, 5);
  sqcRYGate(q, -1.5711992455590034, 6);
  sqcRZGate(q, 2.58128846808067, 6);
  sqcRYGate(q, -0.0022504487337817736, 7);
  sqcRZGate(q, -0.5188783253509186, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.001049706034525144, 0);
  sqcRZGate(q, 2.8188663703636183, 0);
  sqcRYGate(q, -1.5707602376977219, 1);
  sqcRZGate(q, 3.0366629073250486, 1);
  sqcRYGate(q, 1.5730450225122237, 2);
  sqcRZGate(q, 0.02621024889402058, 2);
  sqcRYGate(q, -1.5708249152630491, 3);
  sqcRZGate(q, 3.038897490824509, 3);
  sqcRYGate(q, -1.5686096074796563, 4);
  sqcRZGate(q, -3.1201549249110805, 4);
  sqcRYGate(q, 1.5708065891977459, 5);
  sqcRZGate(q, 1.466212196847617, 5);
  sqcRYGate(q, -3.1409371616577344, 6);
  sqcRZGate(q, -0.5386722705434162, 6);
  sqcRYGate(q, -1.5628612667444308, 7);
  sqcRZGate(q, 1.2583693141617556, 7);

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
