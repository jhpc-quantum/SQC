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

  sqcRYGate(q, -0.25269152055532723, 0);
  sqcRYGate(q, 0.45227872323915075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07867050639539741, 0);
  sqcRYGate(q, 1.4964107669655613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8027737628041944, 2);
  sqcRYGate(q, -0.6793455628305884, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7065390568826806, 2);
  sqcRYGate(q, -1.6772733927420849, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4465140629903344, 4);
  sqcRYGate(q, 0.5572649250156267, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2695273455707774, 4);
  sqcRYGate(q, 0.13925420889078488, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.108835382414179, 6);
  sqcRYGate(q, -0.49354042373356805, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.460190318809108, 6);
  sqcRYGate(q, 2.9597774870803706, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.492898772643087, 1);
  sqcRYGate(q, -1.0064746840587633, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8003249897220095, 1);
  sqcRYGate(q, -0.14437589907549161, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.25645310908563435, 3);
  sqcRYGate(q, -1.6524070711154566, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.47181066715829556, 3);
  sqcRYGate(q, -1.2203058413872458, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9641994064590982, 5);
  sqcRYGate(q, 1.4979852761326835, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.579759903045833, 5);
  sqcRYGate(q, 1.1760293915312632, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6172322658603655, 0);
  sqcRYGate(q, 0.30769649094522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.110348485521061, 0);
  sqcRYGate(q, -1.3379418225123154, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7460037315815626, 2);
  sqcRYGate(q, -0.7878979888949417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1183781379836262, 2);
  sqcRYGate(q, 2.993081830715124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0947379074481267, 4);
  sqcRYGate(q, -3.00162885579993, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6221891675606415, 4);
  sqcRYGate(q, -2.7388460981220737, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9990095270320962, 6);
  sqcRYGate(q, 0.5320196948252646, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.20982135606021593, 6);
  sqcRYGate(q, 0.2937252334436214, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3207293421608735, 1);
  sqcRYGate(q, -2.19318735923331, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.478553888553187, 1);
  sqcRYGate(q, -1.5036291689029964, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2879900222733736, 3);
  sqcRYGate(q, -0.9797898271381227, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.11999737101105067, 3);
  sqcRYGate(q, 0.37613971045998124, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3304683576275709, 5);
  sqcRYGate(q, 0.2904735920999242, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6973942338953054, 5);
  sqcRYGate(q, -0.4092964717941881, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.11797980669265486, 0);
  sqcRYGate(q, 2.8266269391039303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5632528063362696, 0);
  sqcRYGate(q, -1.5697488135461115, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6400337970490684, 2);
  sqcRYGate(q, 2.8758811582031125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.632100100291533, 2);
  sqcRYGate(q, 3.126548245157167, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.25853648607115787, 4);
  sqcRYGate(q, 0.27654185866114145, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.37276418996608207, 4);
  sqcRYGate(q, 2.7564525968073825, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6606026098459816, 6);
  sqcRYGate(q, -2.896597831491087, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8175023943635731, 6);
  sqcRYGate(q, -2.8995269990978274, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8200210735687419, 1);
  sqcRYGate(q, -1.6398479447238294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1302968592434577, 1);
  sqcRYGate(q, 1.803346818737154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.797227396054641, 3);
  sqcRYGate(q, 1.1112641839458224, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.276750193489201, 3);
  sqcRYGate(q, -2.069568233079792, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0904720408445816, 5);
  sqcRYGate(q, -1.5828976545108577, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9413331939756235, 5);
  sqcRYGate(q, -1.5825472522621122, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.835795645180242, 0);
  sqcRYGate(q, -2.4207168099908545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.30065764349423413, 0);
  sqcRYGate(q, 3.031754042238447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.47957065261074683, 2);
  sqcRYGate(q, 1.5508199998424315, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0731773998373222, 2);
  sqcRYGate(q, 3.122617274513113, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3604830730809887, 4);
  sqcRYGate(q, 0.035376455337027046, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6897626793730989, 4);
  sqcRYGate(q, -0.006800656789916791, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6754613469993833, 6);
  sqcRYGate(q, 1.9085644556197527, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.392528942971925, 6);
  sqcRYGate(q, -2.3656253811794183, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.123711550542713, 1);
  sqcRYGate(q, -1.9427809853218774, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4057113509139523, 1);
  sqcRYGate(q, -1.3785977003805874, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.872448279995275, 3);
  sqcRYGate(q, -1.7134776544070651, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0994594679160993, 3);
  sqcRYGate(q, -0.5582071245530463, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7786720111494367, 5);
  sqcRYGate(q, 2.509346114261813, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9244196010041729, 5);
  sqcRYGate(q, 1.7431106763348367, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7702427297500096, 0);
  sqcRYGate(q, 0.07442153649009331, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.33598500835842093, 0);
  sqcRYGate(q, 0.2337116267484669, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0995534041314237, 2);
  sqcRYGate(q, -1.0546572995239618, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.200585341582175, 2);
  sqcRYGate(q, 1.540963982154354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.167584815765794, 4);
  sqcRYGate(q, -3.030173152069187, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0643775176358226, 4);
  sqcRYGate(q, 3.130036124805529, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.17208986121978764, 6);
  sqcRYGate(q, -1.3191070435283532, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1358397874540405, 6);
  sqcRYGate(q, -2.3146279262906946, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0373905459507444, 1);
  sqcRYGate(q, 1.609926079559936, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.797672788378896, 1);
  sqcRYGate(q, 1.3510815117987076, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5971435312413815, 3);
  sqcRYGate(q, 1.714107255773389, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.013099941001945226, 3);
  sqcRYGate(q, 0.3642115250924167, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8036279236024368, 5);
  sqcRYGate(q, 1.0256339547609665, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5243566479824446, 5);
  sqcRYGate(q, 2.6513541241032605, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0496408645788633, 0);
  sqcRYGate(q, -0.6026158599294869, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.423852729954285, 0);
  sqcRYGate(q, -2.174783558472938, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5858239024726193, 2);
  sqcRYGate(q, 2.227982747494404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7473693656624456, 2);
  sqcRYGate(q, -3.0350384258873984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1440981053774604, 4);
  sqcRYGate(q, -0.2978158059581699, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.788429403528726, 4);
  sqcRYGate(q, -0.004313341750637411, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0678960950414336, 6);
  sqcRYGate(q, 1.5436235642526344, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1216147108370897, 6);
  sqcRYGate(q, -0.416777023319, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.31984543886068445, 1);
  sqcRYGate(q, 0.6548495057673165, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1340033323888834, 1);
  sqcRYGate(q, 2.334732086134636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7209961048925178, 3);
  sqcRYGate(q, -2.751060513861373, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0749832369568164, 3);
  sqcRYGate(q, 1.5737436483013658, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2576859807613285, 5);
  sqcRYGate(q, 0.32009255273160875, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0543540301031546, 5);
  sqcRYGate(q, -1.2238170668954236, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2505022599975593, 0);
  sqcRYGate(q, -0.3253035914588187, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2095972339625773, 0);
  sqcRYGate(q, -1.3859017312555628, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6117234002150422, 2);
  sqcRYGate(q, -0.2798463494428777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9216175376856255, 2);
  sqcRYGate(q, 0.01904799558503356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4453850853446302, 4);
  sqcRYGate(q, 2.2785719105718027, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.252540842923682, 4);
  sqcRYGate(q, 3.138888992268897, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.04393497806312644, 6);
  sqcRYGate(q, 0.2868458085295913, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.11138099282097709, 6);
  sqcRYGate(q, -1.974789162392949, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.071282755591514, 1);
  sqcRYGate(q, 0.6407975005040154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.227651070965253, 1);
  sqcRYGate(q, -3.130246441811196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2620944346594873, 3);
  sqcRYGate(q, -1.3999607456066343, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0033030193847789486, 3);
  sqcRYGate(q, -0.5080548223421386, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.762836354788644, 5);
  sqcRYGate(q, 1.6145493093122143, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5895202188008284, 5);
  sqcRYGate(q, -0.4479494964469195, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.34199183130398497, 0);
  sqcRYGate(q, 0.20005379840594806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7015710357551042, 0);
  sqcRYGate(q, -2.6683154853669127, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.014931589267233, 2);
  sqcRYGate(q, -0.9193068792395254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.416391627119606, 2);
  sqcRYGate(q, 0.1685692368749736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.41617880178543865, 4);
  sqcRYGate(q, 0.15060690842598753, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2663249884186305, 4);
  sqcRYGate(q, 1.2824194508173132, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8222340402473614, 6);
  sqcRYGate(q, 1.8982121221277668, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5607292537837065, 6);
  sqcRYGate(q, 0.8760933907701869, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1897459273708906, 1);
  sqcRYGate(q, -0.9309834595466588, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9468009709086619, 1);
  sqcRYGate(q, 0.032939124236236475, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.430454240518285, 3);
  sqcRYGate(q, 2.369980075282371, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1373000412574257, 3);
  sqcRYGate(q, 3.13299088854131, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.906598171041492, 5);
  sqcRYGate(q, -1.4636300656659005, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.319297273407159, 5);
  sqcRYGate(q, 0.001916192166476533, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6574909827944513, 0);
  sqcRYGate(q, 0.6221002054310117, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8669139875085605, 0);
  sqcRYGate(q, -1.5953297820084211, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.237443319763204, 2);
  sqcRYGate(q, 1.1270373096264727, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.140571767886636, 2);
  sqcRYGate(q, 0.0957243393175169, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7341335820560806, 4);
  sqcRYGate(q, 1.143700665125019, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6879276292186474, 4);
  sqcRYGate(q, -2.8324168559039884, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0374041737754, 6);
  sqcRYGate(q, 1.3780823177349353, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.828098139382086, 6);
  sqcRYGate(q, -0.27995210850582, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7449655348908752, 1);
  sqcRYGate(q, -1.2464775410119975, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5861971872049008, 1);
  sqcRYGate(q, -1.595384690046048, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.20526082879238935, 3);
  sqcRYGate(q, 1.9161421668356622, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5690420457709084, 3);
  sqcRYGate(q, 1.5727243542788627, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0048490281889568, 5);
  sqcRYGate(q, 2.6625455244546097, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.760879787586097, 5);
  sqcRYGate(q, 0.00165899686286064, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.792499056323678, 0);
  sqcRYGate(q, -2.558659510809104, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.676988751172453, 0);
  sqcRYGate(q, 1.5317995134572886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.466694701102277, 2);
  sqcRYGate(q, 1.564737632921297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5709748842150235, 2);
  sqcRYGate(q, -0.10429327275316021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5977288766442674, 4);
  sqcRYGate(q, -0.5373829235478597, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5698194851939453, 4);
  sqcRYGate(q, -1.1841069890975486, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7617707815445162, 6);
  sqcRYGate(q, 0.10356784704341669, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3928842232593838, 6);
  sqcRYGate(q, -2.3001414806016145, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.13803613000201942, 1);
  sqcRYGate(q, -0.14242230866926445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.567048487750399, 1);
  sqcRYGate(q, 1.5621050583079938, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.19988190266389, 3);
  sqcRYGate(q, -1.5804280174009782, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5711760935502737, 3);
  sqcRYGate(q, -3.140259185809893, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5688213803809288, 5);
  sqcRYGate(q, 2.307246609131133, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5695350769906007, 5);
  sqcRYGate(q, -1.5716193094461524, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1356191952159715, 0);
  sqcRYGate(q, 3.0088310659866937, 1);
  sqcRYGate(q, -3.140613068884603, 2);
  sqcRYGate(q, -2.210833365245502, 3);
  sqcRYGate(q, 0.000996709184889255, 4);
  sqcRYGate(q, -1.6233780218475613, 5);
  sqcRYGate(q, 0.0009736851004160204, 6);
  sqcRYGate(q, 2.83351655627028, 7);

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
