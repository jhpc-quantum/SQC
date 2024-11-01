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

  sqcRYGate(q, 0.0982777406285633, 0);
  sqcRZGate(q, -0.15271091617681606, 0);
  sqcRYGate(q, -1.72977261681, 1);
  sqcRZGate(q, 1.4505993116748197, 1);
  sqcRYGate(q, 0.07995805412430722, 2);
  sqcRZGate(q, 1.6618559245393527, 2);
  sqcRYGate(q, -1.4905411168280787, 3);
  sqcRZGate(q, -0.307127222001843, 3);
  sqcRYGate(q, -1.954489701068347, 4);
  sqcRZGate(q, 2.866809361394265, 4);
  sqcRYGate(q, -3.122844596556446, 5);
  sqcRZGate(q, 1.6741418745754029, 5);
  sqcRYGate(q, -0.6342714411796315, 6);
  sqcRZGate(q, -3.0783174828232243, 6);
  sqcRYGate(q, -0.907814505004922, 7);
  sqcRZGate(q, -2.8984014859917386, 7);
  sqcRYGate(q, 0.8113423896684296, 8);
  sqcRZGate(q, -1.740041197901818, 8);
  sqcRYGate(q, 3.0991446715512545, 9);
  sqcRZGate(q, 1.7115560762093545, 9);
  sqcRYGate(q, 0.5931074071178335, 10);
  sqcRZGate(q, -3.070854585078345, 10);
  sqcRYGate(q, 3.122313577464728, 11);
  sqcRZGate(q, -2.4585098613753678, 11);
  sqcRYGate(q, 1.4987572269728122, 12);
  sqcRZGate(q, 2.167807824664351, 12);
  sqcRYGate(q, -1.6675712691738007, 13);
  sqcRZGate(q, 2.8560467119442734, 13);
  sqcRYGate(q, -0.9734911478833389, 14);
  sqcRZGate(q, -0.42034304276063744, 14);
  sqcRYGate(q, 2.4040801856714342, 15);
  sqcRZGate(q, -1.9879750759527532, 15);
  sqcRYGate(q, 1.683597698769323, 16);
  sqcRZGate(q, 2.651065420818984, 16);
  sqcRYGate(q, 0.05247200458649415, 17);
  sqcRZGate(q, -0.09422970339380458, 17);
  sqcRYGate(q, -0.09916042039017543, 18);
  sqcRZGate(q, 2.5019673039345363, 18);
  sqcRYGate(q, -1.6547959116733795, 19);
  sqcRZGate(q, 1.4728357083494552, 19);
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
  sqcRYGate(q, -3.0930247987223956, 0);
  sqcRZGate(q, 1.5794548329469873, 0);
  sqcRYGate(q, -0.8641084887833558, 1);
  sqcRZGate(q, -1.4864709585312772, 1);
  sqcRYGate(q, -2.916805780152727, 2);
  sqcRZGate(q, -2.9236880810069903, 2);
  sqcRYGate(q, 1.209978638340531, 3);
  sqcRZGate(q, -0.6085026839399097, 3);
  sqcRYGate(q, 2.0346611391315426, 4);
  sqcRZGate(q, 3.0168487962271504, 4);
  sqcRYGate(q, -2.6016603625793597, 5);
  sqcRZGate(q, 2.4670800325809314, 5);
  sqcRYGate(q, 1.7661344569792772, 6);
  sqcRZGate(q, -3.0574362488045623, 6);
  sqcRYGate(q, -0.732816541116418, 7);
  sqcRZGate(q, 0.619630235173459, 7);
  sqcRYGate(q, 1.7694467110479868, 8);
  sqcRZGate(q, 0.036446348298258616, 8);
  sqcRYGate(q, 1.0848374726563357, 9);
  sqcRZGate(q, -0.06562440194324899, 9);
  sqcRYGate(q, 0.55610165234367, 10);
  sqcRZGate(q, 0.6078905692606842, 10);
  sqcRYGate(q, 1.4795833993153125, 11);
  sqcRZGate(q, -3.091435401812314, 11);
  sqcRYGate(q, -2.487408526764837, 12);
  sqcRZGate(q, 2.899916980994446, 12);
  sqcRYGate(q, 3.114425055386319, 13);
  sqcRZGate(q, -1.005533645637338, 13);
  sqcRYGate(q, 1.9156236439372363, 14);
  sqcRZGate(q, 1.020204782212609, 14);
  sqcRYGate(q, 3.1348006361877863, 15);
  sqcRZGate(q, 1.036236070815897, 15);
  sqcRYGate(q, -3.1168073642893703, 16);
  sqcRZGate(q, 0.9417452031711958, 16);
  sqcRYGate(q, -2.6418585011986626, 17);
  sqcRZGate(q, -1.306711960842806, 17);
  sqcRYGate(q, 1.2605952479285183, 18);
  sqcRZGate(q, 1.1004131108699484, 18);
  sqcRYGate(q, -3.0890170372519843, 19);
  sqcRZGate(q, 1.8121397880874954, 19);
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
  sqcRYGate(q, -0.27657682478250756, 0);
  sqcRZGate(q, -1.4142993349883641, 0);
  sqcRYGate(q, -1.5290980363773017, 1);
  sqcRZGate(q, 2.5616731886131157, 1);
  sqcRYGate(q, 0.19116848755960258, 2);
  sqcRZGate(q, -2.285184400003104, 2);
  sqcRYGate(q, 0.47314013249251285, 3);
  sqcRZGate(q, 0.49446662361871235, 3);
  sqcRYGate(q, 1.8987563767218463, 4);
  sqcRZGate(q, -0.710065063065321, 4);
  sqcRYGate(q, -1.7300725490813589, 5);
  sqcRZGate(q, 0.6931485889651342, 5);
  sqcRYGate(q, -1.0214380336890183, 6);
  sqcRZGate(q, -1.317115267131567, 6);
  sqcRYGate(q, -2.704688660370758, 7);
  sqcRZGate(q, 1.849047165255295, 7);
  sqcRYGate(q, 2.7220643156354574, 8);
  sqcRZGate(q, -2.9666049151347664, 8);
  sqcRYGate(q, -0.534902673565678, 9);
  sqcRZGate(q, 1.9191671528517835, 9);
  sqcRYGate(q, 1.686623778413505, 10);
  sqcRZGate(q, -2.069046348439409, 10);
  sqcRYGate(q, -3.0998404207075114, 11);
  sqcRZGate(q, 1.8808366090113218, 11);
  sqcRYGate(q, -3.0525914353410566, 12);
  sqcRZGate(q, 2.7156594922635713, 12);
  sqcRYGate(q, -0.7585993374802342, 13);
  sqcRZGate(q, -1.5061384235798965, 13);
  sqcRYGate(q, 0.7838162187422943, 14);
  sqcRZGate(q, 1.619862735164495, 14);
  sqcRYGate(q, -1.008630296485423, 15);
  sqcRZGate(q, 2.272617287408873, 15);
  sqcRYGate(q, -2.0119792862936343, 16);
  sqcRZGate(q, 0.2411981968051561, 16);
  sqcRYGate(q, 1.35455293550692, 17);
  sqcRZGate(q, -0.05074455311910153, 17);
  sqcRYGate(q, 0.016121255815679133, 18);
  sqcRZGate(q, 0.5053370384344555, 18);
  sqcRYGate(q, 2.297198534327237, 19);
  sqcRZGate(q, -0.9200753877269712, 19);
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
  sqcRYGate(q, -0.9655061576327915, 0);
  sqcRZGate(q, 1.495935540604268, 0);
  sqcRYGate(q, 3.068276997582235, 1);
  sqcRZGate(q, -1.6900298079334135, 1);
  sqcRYGate(q, 2.567344246079097, 2);
  sqcRZGate(q, -1.8987957787149652, 2);
  sqcRYGate(q, 0.24715492158054886, 3);
  sqcRZGate(q, 1.4668451611745004, 3);
  sqcRYGate(q, 3.084046494784328, 4);
  sqcRZGate(q, 1.6865992054913934, 4);
  sqcRYGate(q, -2.7885496346448546, 5);
  sqcRZGate(q, -3.0440722069918276, 5);
  sqcRYGate(q, 0.008379491744280071, 6);
  sqcRZGate(q, -1.6539980713083722, 6);
  sqcRYGate(q, -0.03226540948720798, 7);
  sqcRZGate(q, -1.4411859949607435, 7);
  sqcRYGate(q, 3.1073263200938683, 8);
  sqcRZGate(q, -2.6394826125446285, 8);
  sqcRYGate(q, -1.5581102088956515, 9);
  sqcRZGate(q, -3.128616258453827, 9);
  sqcRYGate(q, 0.02152488782091222, 10);
  sqcRZGate(q, 1.58935049110573, 10);
  sqcRYGate(q, 0.5774683832201503, 11);
  sqcRZGate(q, -1.6355963093409995, 11);
  sqcRYGate(q, 1.2693221221339952, 12);
  sqcRZGate(q, 1.262756534030651, 12);
  sqcRYGate(q, -2.9683260807334113, 13);
  sqcRZGate(q, 0.6232407622883073, 13);
  sqcRYGate(q, 2.6648458469792025, 14);
  sqcRZGate(q, -2.853926757996007, 14);
  sqcRYGate(q, -1.5240900367770873, 15);
  sqcRZGate(q, -3.1274992812387348, 15);
  sqcRYGate(q, -3.079842448433187, 16);
  sqcRZGate(q, 1.553566514913815, 16);
  sqcRYGate(q, -2.082628930111554, 17);
  sqcRZGate(q, 3.0490827834429055, 17);
  sqcRYGate(q, 0.07383708092814079, 18);
  sqcRZGate(q, 2.2281468235488195, 18);
  sqcRYGate(q, 2.5947069287016995, 19);
  sqcRZGate(q, -2.9730504467000176, 19);
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
  sqcRYGate(q, -0.7217940789337219, 0);
  sqcRZGate(q, -0.5259440149147911, 0);
  sqcRYGate(q, -2.9484477520695194, 1);
  sqcRZGate(q, -1.582270392782183, 1);
  sqcRYGate(q, -2.846662832464126, 2);
  sqcRZGate(q, 2.908700405296214, 2);
  sqcRYGate(q, -3.1342959611341663, 3);
  sqcRZGate(q, -2.7702069530414026, 3);
  sqcRYGate(q, -0.5328623386477414, 4);
  sqcRZGate(q, -2.792147864390374, 4);
  sqcRYGate(q, 1.5856619309487323, 5);
  sqcRZGate(q, 1.129686626154024, 5);
  sqcRYGate(q, -0.6737334882537099, 6);
  sqcRZGate(q, 3.0154292800327256, 6);
  sqcRYGate(q, -2.072550937803486, 7);
  sqcRZGate(q, 1.8040366192698727, 7);
  sqcRYGate(q, -1.5342692940474922, 8);
  sqcRZGate(q, 0.008328109559071706, 8);
  sqcRYGate(q, 2.3593701322632685, 9);
  sqcRZGate(q, -2.080057393381127, 9);
  sqcRYGate(q, -1.7714751889390365, 10);
  sqcRZGate(q, 1.252716241570024, 10);
  sqcRYGate(q, 2.843014626150733, 11);
  sqcRZGate(q, 0.21748794265904256, 11);
  sqcRYGate(q, 2.9087149633617173, 12);
  sqcRZGate(q, 0.14815093415134664, 12);
  sqcRYGate(q, -2.6785772321657495, 13);
  sqcRZGate(q, -0.7330762048509021, 13);
  sqcRYGate(q, -2.310524352183356, 14);
  sqcRZGate(q, -3.1165579642481154, 14);
  sqcRYGate(q, 0.17412590656253624, 15);
  sqcRZGate(q, 2.3411538900687816, 15);
  sqcRYGate(q, -2.695676549799749, 16);
  sqcRZGate(q, 3.103589055200111, 16);
  sqcRYGate(q, 1.8341121691801872, 17);
  sqcRZGate(q, -0.6396458325479975, 17);
  sqcRYGate(q, 0.01646473703320401, 18);
  sqcRZGate(q, -1.8790409569177358, 18);
  sqcRYGate(q, 2.549553300864612, 19);
  sqcRZGate(q, 1.6369412391528169, 19);
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
  sqcRYGate(q, -2.3433875965894226, 0);
  sqcRZGate(q, -1.5398343137727557, 0);
  sqcRYGate(q, 2.3026303662243963, 1);
  sqcRZGate(q, 1.5678635599931894, 1);
  sqcRYGate(q, -0.011377835908910231, 2);
  sqcRZGate(q, 0.35117051751848916, 2);
  sqcRYGate(q, -2.9888412576538954, 3);
  sqcRZGate(q, 1.1098392819386091, 3);
  sqcRYGate(q, 0.14690313819924825, 4);
  sqcRZGate(q, 0.1496539506950345, 4);
  sqcRYGate(q, -1.2863042246667513, 5);
  sqcRZGate(q, -0.24820623938287673, 5);
  sqcRYGate(q, -0.7110447888623546, 6);
  sqcRZGate(q, -0.007351770324915105, 6);
  sqcRYGate(q, 1.5690192861041394, 7);
  sqcRZGate(q, -3.0701291009596976, 7);
  sqcRYGate(q, -1.136715357679678, 8);
  sqcRZGate(q, 3.097982857065264, 8);
  sqcRYGate(q, 0.034279042419518284, 9);
  sqcRZGate(q, -1.1732922755088857, 9);
  sqcRYGate(q, 0.006178021500868881, 10);
  sqcRZGate(q, -1.2445023617418154, 10);
  sqcRYGate(q, 2.046830793762581, 11);
  sqcRZGate(q, -1.7531073909465889, 11);
  sqcRYGate(q, 3.077453330429136, 12);
  sqcRZGate(q, -2.8765738512654004, 12);
  sqcRYGate(q, -0.11597552356019618, 13);
  sqcRZGate(q, -1.2866003559086852, 13);
  sqcRYGate(q, -1.5714708166075468, 14);
  sqcRZGate(q, 0.04465067666769869, 14);
  sqcRYGate(q, 3.132020034387353, 15);
  sqcRZGate(q, -0.7072639260749553, 15);
  sqcRYGate(q, 1.8320418918810313, 16);
  sqcRZGate(q, 0.6389179316140039, 16);
  sqcRYGate(q, 2.837275561943565, 17);
  sqcRZGate(q, 2.4742348501935796, 17);
  sqcRYGate(q, 0.5614408057452092, 18);
  sqcRZGate(q, 2.3635438916920366, 18);
  sqcRYGate(q, 0.6512042475287861, 19);
  sqcRZGate(q, -1.9746075974364405, 19);
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
  sqcRYGate(q, 3.0278403341346545, 0);
  sqcRZGate(q, -2.354594745123333, 0);
  sqcRYGate(q, 3.0456722779486003, 1);
  sqcRZGate(q, -0.16476096929286388, 1);
  sqcRYGate(q, -3.041448754142768, 2);
  sqcRZGate(q, 2.601920050481718, 2);
  sqcRYGate(q, -0.0905786007727869, 3);
  sqcRZGate(q, -2.0942908119089103, 3);
  sqcRYGate(q, -2.562730099556807, 4);
  sqcRZGate(q, -0.22807028670020468, 4);
  sqcRYGate(q, -2.1786423361221408, 5);
  sqcRZGate(q, -0.2394677210920037, 5);
  sqcRYGate(q, -1.5780222795661707, 6);
  sqcRZGate(q, -0.0014697932503509037, 6);
  sqcRYGate(q, -3.133778739789003, 7);
  sqcRZGate(q, -3.093468679231916, 7);
  sqcRYGate(q, -0.17375762857745247, 8);
  sqcRZGate(q, 3.077513504430282, 8);
  sqcRYGate(q, -2.649552436991242, 9);
  sqcRZGate(q, -0.14024814343405217, 9);
  sqcRYGate(q, -1.5549248420196733, 10);
  sqcRZGate(q, 3.1124727439363205, 10);
  sqcRYGate(q, -0.0037221610164537328, 11);
  sqcRZGate(q, -1.3483462932250871, 11);
  sqcRYGate(q, 0.6501929207445588, 12);
  sqcRZGate(q, -2.120397983019468, 12);
  sqcRYGate(q, 1.3691873078511678, 13);
  sqcRZGate(q, -0.670070338081758, 13);
  sqcRYGate(q, -0.7656730006670776, 14);
  sqcRZGate(q, 2.4373728152347014, 14);
  sqcRYGate(q, 0.8619943250223984, 15);
  sqcRZGate(q, 0.036023714989634754, 15);
  sqcRYGate(q, -2.481997804255882, 16);
  sqcRZGate(q, -0.714784715821477, 16);
  sqcRYGate(q, -0.128345937850737, 17);
  sqcRZGate(q, -2.343667555424185, 17);
  sqcRYGate(q, -2.9291914482475168, 18);
  sqcRZGate(q, -0.4982304956066042, 18);
  sqcRYGate(q, 0.52831254815776, 19);
  sqcRZGate(q, 2.702527063082681, 19);
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
  sqcRYGate(q, 1.7338620625344008, 0);
  sqcRZGate(q, 0.9332876692298293, 0);
  sqcRYGate(q, -0.07115784972751217, 1);
  sqcRZGate(q, -1.0746437284208692, 1);
  sqcRYGate(q, 2.0465079867785976, 2);
  sqcRZGate(q, -0.3815692741505968, 2);
  sqcRYGate(q, 1.8116818657088434, 3);
  sqcRZGate(q, 0.26042406525438133, 3);
  sqcRYGate(q, 1.2704789989375105, 4);
  sqcRZGate(q, -2.977896931614605, 4);
  sqcRYGate(q, 1.5783712654100932, 5);
  sqcRZGate(q, -1.2105343220752012, 5);
  sqcRYGate(q, -2.4240326194488335, 6);
  sqcRZGate(q, -3.138980388285014, 6);
  sqcRYGate(q, 2.875613264051735, 7);
  sqcRZGate(q, 0.440649240622922, 7);
  sqcRYGate(q, 0.4744274070965436, 8);
  sqcRZGate(q, 0.09671847063447814, 8);
  sqcRYGate(q, 1.5975901170446365, 9);
  sqcRZGate(q, -0.026277000643754204, 9);
  sqcRYGate(q, -0.6016710528069096, 10);
  sqcRZGate(q, -3.0637781001772413, 10);
  sqcRYGate(q, 2.00713571000015, 11);
  sqcRZGate(q, 3.1047539962511816, 11);
  sqcRYGate(q, -3.0977685153700283, 12);
  sqcRZGate(q, -2.0854714629479005, 12);
  sqcRYGate(q, -2.005062747664308, 13);
  sqcRZGate(q, 0.39680122895901326, 13);
  sqcRYGate(q, -1.359255129081188, 14);
  sqcRZGate(q, -3.11334030318492, 14);
  sqcRYGate(q, 0.10103875726957945, 15);
  sqcRZGate(q, -1.8744420978514735, 15);
  sqcRYGate(q, -2.5264093174675453, 16);
  sqcRZGate(q, -0.26867622761502385, 16);
  sqcRYGate(q, -2.8690462150237517, 17);
  sqcRZGate(q, -2.790535572056862, 17);
  sqcRYGate(q, 1.4272037251460257, 18);
  sqcRZGate(q, -2.6934192538206423, 18);
  sqcRYGate(q, -1.8109894883170603, 19);
  sqcRZGate(q, 1.949436930274918, 19);
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
  sqcRYGate(q, -0.004133892460564503, 0);
  sqcRZGate(q, -0.9059158064635058, 0);
  sqcRYGate(q, -0.7803750248961228, 1);
  sqcRZGate(q, 2.8636125198012787, 1);
  sqcRYGate(q, -0.6322226047194925, 2);
  sqcRZGate(q, -0.4601555520365626, 2);
  sqcRYGate(q, 1.7074382420332324, 3);
  sqcRZGate(q, 3.0433277132408247, 3);
  sqcRYGate(q, 1.5712122015311802, 4);
  sqcRZGate(q, 0.028829328844236276, 4);
  sqcRYGate(q, -2.498534635162132, 5);
  sqcRZGate(q, -2.6738366699908114, 5);
  sqcRYGate(q, 1.3776178664360952, 6);
  sqcRZGate(q, -1.5799641744091089, 6);
  sqcRYGate(q, 0.1031287786801176, 7);
  sqcRZGate(q, -0.44550189599092693, 7);
  sqcRYGate(q, 2.180778041994488, 8);
  sqcRZGate(q, 0.1413630777102896, 8);
  sqcRYGate(q, 2.1010643100117274, 9);
  sqcRZGate(q, 0.4368310662393849, 9);
  sqcRYGate(q, -3.104896603289916, 10);
  sqcRZGate(q, 1.7369527854266444, 10);
  sqcRYGate(q, -2.9035094243518684, 11);
  sqcRZGate(q, 1.6369742808118972, 11);
  sqcRYGate(q, -0.6926971785106177, 12);
  sqcRZGate(q, 0.8135462241260445, 12);
  sqcRYGate(q, -0.13300095098604234, 13);
  sqcRZGate(q, -1.7710576652483807, 13);
  sqcRYGate(q, 2.7046596286248605, 14);
  sqcRZGate(q, -0.6930238883302176, 14);
  sqcRYGate(q, -0.22103388049602754, 15);
  sqcRZGate(q, -0.9527433907050149, 15);
  sqcRYGate(q, -1.2852970801569308, 16);
  sqcRZGate(q, 0.1334878714179499, 16);
  sqcRYGate(q, 0.9704422720697954, 17);
  sqcRZGate(q, 3.133490074621926, 17);
  sqcRYGate(q, 0.07087234947030825, 18);
  sqcRZGate(q, -0.2725544373276598, 18);
  sqcRYGate(q, 1.4471452422757052, 19);
  sqcRZGate(q, 0.5457522378779668, 19);
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
  sqcRYGate(q, 2.14233091544605, 0);
  sqcRZGate(q, 1.9843926957277658, 0);
  sqcRYGate(q, 1.2814903798954194, 1);
  sqcRZGate(q, 0.8106434139884138, 1);
  sqcRYGate(q, 0.3504845072382986, 2);
  sqcRZGate(q, 0.042283820507850775, 2);
  sqcRYGate(q, 1.5684927675294968, 3);
  sqcRZGate(q, -3.14040916413307, 3);
  sqcRYGate(q, -3.1398337399679095, 4);
  sqcRZGate(q, 0.8770138656277728, 4);
  sqcRYGate(q, -1.5662876978672067, 5);
  sqcRZGate(q, -2.062287291320843, 5);
  sqcRYGate(q, -2.8612377160168285, 6);
  sqcRZGate(q, 2.1605444434372156, 6);
  sqcRYGate(q, -2.894411042998435, 7);
  sqcRZGate(q, 2.515460720086555, 7);
  sqcRYGate(q, 3.07460890981772, 8);
  sqcRZGate(q, -2.999182254319262, 8);
  sqcRYGate(q, -3.1373311041791494, 9);
  sqcRZGate(q, -0.5909535013483378, 9);
  sqcRYGate(q, 1.4706040426584082, 10);
  sqcRZGate(q, 2.8245444515162212, 10);
  sqcRYGate(q, 1.5596530992309905, 11);
  sqcRZGate(q, 0.807693227216468, 11);
  sqcRYGate(q, -2.5245944380274854, 12);
  sqcRZGate(q, -0.5998823277601025, 12);
  sqcRYGate(q, 2.8504916814285974, 13);
  sqcRZGate(q, -0.21438248655492548, 13);
  sqcRYGate(q, 1.502559717998843, 14);
  sqcRZGate(q, -2.0379669918292516, 14);
  sqcRYGate(q, -0.0037200936122830227, 15);
  sqcRZGate(q, -1.0884304580182655, 15);
  sqcRYGate(q, -2.7413272384404923, 16);
  sqcRZGate(q, 3.1325908771295534, 16);
  sqcRYGate(q, -1.3864002405745808, 17);
  sqcRZGate(q, -3.1319163767373386, 17);
  sqcRYGate(q, 0.42583317775379176, 18);
  sqcRZGate(q, 0.3440222210557353, 18);
  sqcRYGate(q, -1.0001124402439754, 19);
  sqcRZGate(q, -1.2571764984829192, 19);
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
  sqcRYGate(q, -2.2448726587989247, 0);
  sqcRZGate(q, 1.7613743151081633, 0);
  sqcRYGate(q, 2.005160684172286, 1);
  sqcRZGate(q, -3.0017360907384254, 1);
  sqcRYGate(q, 1.5695573259493385, 2);
  sqcRZGate(q, -1.63940021676547, 2);
  sqcRYGate(q, -1.4101253537033944, 3);
  sqcRZGate(q, -0.013323355428675068, 3);
  sqcRYGate(q, -3.13289604230507, 4);
  sqcRZGate(q, -0.6505757388884825, 4);
  sqcRYGate(q, -1.523921448456636, 5);
  sqcRZGate(q, 0.6991033186978558, 5);
  sqcRYGate(q, -0.014156080237748725, 6);
  sqcRZGate(q, -1.9015497925533642, 6);
  sqcRYGate(q, 0.10443036489104096, 7);
  sqcRZGate(q, 2.6324149891506683, 7);
  sqcRYGate(q, 2.1920564722710663, 8);
  sqcRZGate(q, 1.6632191854951328, 8);
  sqcRYGate(q, -0.05427945552935132, 9);
  sqcRZGate(q, -1.4498493891145972, 9);
  sqcRYGate(q, 0.11874440500357734, 10);
  sqcRZGate(q, 1.5120599270932233, 10);
  sqcRYGate(q, -0.05651224347994521, 11);
  sqcRZGate(q, 2.598417427656133, 11);
  sqcRYGate(q, -0.1707809225541661, 12);
  sqcRZGate(q, 1.2348578321400354, 12);
  sqcRYGate(q, 3.0700252803233505, 13);
  sqcRZGate(q, -2.111933312633071, 13);
  sqcRYGate(q, -2.727116337520846, 14);
  sqcRZGate(q, 3.0968414638667086, 14);
  sqcRYGate(q, 3.1076755229756845, 15);
  sqcRZGate(q, -0.7465506080213622, 15);
  sqcRYGate(q, 1.4350303409993188, 16);
  sqcRZGate(q, 1.4729575062247093, 16);
  sqcRYGate(q, 0.9466243992359871, 17);
  sqcRZGate(q, 1.5940429714035165, 17);
  sqcRYGate(q, 1.5588905450777308, 18);
  sqcRZGate(q, 3.0899208439371466, 18);
  sqcRYGate(q, -1.0861395481787168, 19);
  sqcRZGate(q, -2.847314632205266, 19);
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
  sqcRYGate(q, 1.407003897067591, 0);
  sqcRZGate(q, -2.032040249402283, 0);
  sqcRYGate(q, -1.5755618791933337, 1);
  sqcRZGate(q, -0.0005006493740431495, 1);
  sqcRYGate(q, -3.138051274343055, 2);
  sqcRZGate(q, 2.6867983255108054, 2);
  sqcRYGate(q, -2.2101698238582026, 3);
  sqcRZGate(q, 1.3412839701866122, 3);
  sqcRYGate(q, 0.017028664243031125, 4);
  sqcRZGate(q, 3.089076572324971, 4);
  sqcRYGate(q, 0.022914960336458987, 5);
  sqcRZGate(q, 3.007084267823967, 5);
  sqcRYGate(q, 0.003166664070282672, 6);
  sqcRZGate(q, -0.3379899515479947, 6);
  sqcRYGate(q, 1.6020480679658264, 7);
  sqcRZGate(q, -1.6518662692610047, 7);
  sqcRYGate(q, 1.6404697861391788, 8);
  sqcRZGate(q, 1.4306589310761892, 8);
  sqcRYGate(q, -1.6250570244317384, 9);
  sqcRZGate(q, -1.4634020517971533, 9);
  sqcRYGate(q, 1.5503414990449471, 10);
  sqcRZGate(q, 0.375183918687398, 10);
  sqcRYGate(q, -1.4579631555417738, 11);
  sqcRZGate(q, -1.5229964994453267, 11);
  sqcRYGate(q, 1.4482623031193436, 12);
  sqcRZGate(q, 0.22736973940566504, 12);
  sqcRYGate(q, 0.6351421037678735, 13);
  sqcRZGate(q, 2.62501439128022, 13);
  sqcRYGate(q, -2.4009997944654664, 14);
  sqcRZGate(q, 1.0003693774674816, 14);
  sqcRYGate(q, -2.4743590247700915, 15);
  sqcRZGate(q, -3.0496723052205845, 15);
  sqcRYGate(q, -1.4788999476546638, 16);
  sqcRZGate(q, -0.5025074044157819, 16);
  sqcRYGate(q, -1.549699983729088, 17);
  sqcRZGate(q, -3.1051511468251705, 17);
  sqcRYGate(q, 0.5606347945974174, 18);
  sqcRZGate(q, 2.84914746072672, 18);
  sqcRYGate(q, -3.1233049160292388, 19);
  sqcRZGate(q, -0.5577892240438427, 19);
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
  sqcRYGate(q, -1.5719534627033074, 0);
  sqcRZGate(q, -1.5695469558125805, 0);
  sqcRYGate(q, 0.9336067539991033, 1);
  sqcRZGate(q, 1.570786700026985, 1);
  sqcRYGate(q, -0.0007024557010293364, 2);
  sqcRZGate(q, 0.3887368044545902, 2);
  sqcRYGate(q, -3.140264822096018, 3);
  sqcRZGate(q, -0.22453444979800352, 3);
  sqcRYGate(q, 3.0170632383246785, 4);
  sqcRZGate(q, -3.124175206195481, 4);
  sqcRYGate(q, -1.2536480490017325, 5);
  sqcRZGate(q, -1.5261192225455602, 5);
  sqcRYGate(q, 3.121992668907107, 6);
  sqcRZGate(q, 3.0658944676420865, 6);
  sqcRYGate(q, -3.012537021538405, 7);
  sqcRZGate(q, 3.117643396659386, 7);
  sqcRYGate(q, -3.1101135840179266, 8);
  sqcRZGate(q, 0.4006684691160318, 8);
  sqcRYGate(q, -0.16607298143266783, 9);
  sqcRZGate(q, -0.060666753180911796, 9);
  sqcRYGate(q, -3.086578064886813, 10);
  sqcRZGate(q, 0.60481275984827, 10);
  sqcRYGate(q, -2.979714027074172, 11);
  sqcRZGate(q, 1.460333380538704, 11);
  sqcRYGate(q, 0.15236650412342545, 12);
  sqcRZGate(q, -1.4657956056789088, 12);
  sqcRYGate(q, 3.1009669732341214, 13);
  sqcRZGate(q, 0.8552660284181836, 13);
  sqcRYGate(q, 2.723150370446929, 14);
  sqcRZGate(q, 1.5872309512351608, 14);
  sqcRYGate(q, -0.032531154856995315, 15);
  sqcRZGate(q, -1.658980482008654, 15);
  sqcRYGate(q, -0.002640005297818604, 16);
  sqcRZGate(q, -1.575029188585975, 16);
  sqcRYGate(q, -2.962237477701975, 17);
  sqcRZGate(q, 1.6099690782870628, 17);
  sqcRYGate(q, 3.098897126680514, 18);
  sqcRZGate(q, -1.8684903287934531, 18);
  sqcRYGate(q, -1.0113420520105871, 19);
  sqcRZGate(q, -0.3992334891088894, 19);
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
  sqcRYGate(q, 1.57346360097785, 0);
  sqcRZGate(q, -1.659034497201901, 0);
  sqcRYGate(q, -1.568488223568398, 1);
  sqcRZGate(q, -1.0492555312679965, 1);
  sqcRYGate(q, -1.5705815545747643, 2);
  sqcRZGate(q, 1.890850201779243, 2);
  sqcRYGate(q, 1.5861485302365965, 3);
  sqcRZGate(q, 1.7441044388798004, 3);
  sqcRYGate(q, 1.5759814752530477, 4);
  sqcRZGate(q, 1.9227442481788286, 4);
  sqcRYGate(q, -3.125833974862655, 5);
  sqcRZGate(q, -1.9071847382709273, 5);
  sqcRYGate(q, 1.346660078938834, 6);
  sqcRZGate(q, 3.053434214771848, 6);
  sqcRYGate(q, -0.43739719189600523, 7);
  sqcRZGate(q, -0.18753945392327598, 7);
  sqcRYGate(q, -3.0189595307776584, 8);
  sqcRZGate(q, -2.8121550245707874, 8);
  sqcRYGate(q, -2.116446645096122, 9);
  sqcRZGate(q, 3.028201352886665, 9);
  sqcRYGate(q, 1.4630576875171863, 10);
  sqcRZGate(q, -0.17681326159640778, 10);
  sqcRYGate(q, -1.5941071219307128, 11);
  sqcRZGate(q, -2.1130388467192733, 11);
  sqcRYGate(q, -1.5909762139425057, 12);
  sqcRZGate(q, -1.2528485866006303, 12);
  sqcRYGate(q, -1.5474264737351053, 13);
  sqcRZGate(q, 0.7966450561780879, 13);
  sqcRYGate(q, 1.4645119255763737, 14);
  sqcRZGate(q, -2.35813013828252, 14);
  sqcRYGate(q, -1.63777025642945, 15);
  sqcRZGate(q, -2.9703545325476735, 15);
  sqcRYGate(q, -0.07400282353134369, 16);
  sqcRZGate(q, -0.2874975275875525, 16);
  sqcRYGate(q, -3.1330986955676523, 17);
  sqcRZGate(q, 2.499191955383874, 17);
  sqcRYGate(q, 1.5650864077868767, 18);
  sqcRZGate(q, -2.3428380355011176, 18);
  sqcRYGate(q, -3.1231333396323873, 19);
  sqcRZGate(q, 1.6439172660406358, 19);

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
