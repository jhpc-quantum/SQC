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

  sqcRYGate(q, 2.1491773494441944, 0);
  sqcRZGate(q, 1.068065979232511, 0);
  sqcRYGate(q, -1.1599340241072795, 1);
  sqcRZGate(q, -0.9240360281946893, 1);
  sqcRYGate(q, -0.5483571666158179, 2);
  sqcRZGate(q, 1.5260199294624264, 2);
  sqcRYGate(q, 0.0011121064364294497, 3);
  sqcRZGate(q, 0.39019969304688207, 3);
  sqcRYGate(q, 0.7826627083935486, 4);
  sqcRZGate(q, 0.9129069076235714, 4);
  sqcRYGate(q, -2.576770746777791, 5);
  sqcRZGate(q, 2.516835364450848, 5);
  sqcRYGate(q, -0.8750231080638056, 6);
  sqcRZGate(q, 1.8798834482066888, 6);
  sqcRYGate(q, 0.06994224928573178, 7);
  sqcRZGate(q, 0.3908839452559016, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.2845706058946122, 0);
  sqcRZGate(q, -2.2729488596724075, 0);
  sqcRYGate(q, 0.0912813928905658, 1);
  sqcRZGate(q, -0.41064809897515414, 1);
  sqcRYGate(q, -3.0075654440945927, 2);
  sqcRZGate(q, 3.0007009611708626, 2);
  sqcRYGate(q, 3.126535943805077, 3);
  sqcRZGate(q, 2.666834992284046, 3);
  sqcRYGate(q, -1.8349911259419933, 4);
  sqcRZGate(q, 2.346489350412853, 4);
  sqcRYGate(q, -0.011447908081068166, 5);
  sqcRZGate(q, 2.6720594354880896, 5);
  sqcRYGate(q, 3.1164656595844145, 6);
  sqcRZGate(q, 2.392961212587077, 6);
  sqcRYGate(q, 0.8215631271538237, 7);
  sqcRZGate(q, 2.720784244511764, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.32870158503652663, 0);
  sqcRZGate(q, 2.1261378359299847, 0);
  sqcRYGate(q, 1.5963455629007708, 1);
  sqcRZGate(q, -1.7131675100205133, 1);
  sqcRYGate(q, -1.317873863583321, 2);
  sqcRZGate(q, -0.33872040704898226, 2);
  sqcRYGate(q, -0.008117549002455426, 3);
  sqcRZGate(q, -3.0426885416742375, 3);
  sqcRYGate(q, 1.893935772694241, 4);
  sqcRZGate(q, 0.7893628106865297, 4);
  sqcRYGate(q, -0.3256118560450201, 5);
  sqcRZGate(q, -1.5804922321967747, 5);
  sqcRYGate(q, -3.14126939842353, 6);
  sqcRZGate(q, -1.6843287288389373, 6);
  sqcRYGate(q, -0.08481237463370661, 7);
  sqcRZGate(q, 0.9032581866325096, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.0179069417687003, 0);
  sqcRZGate(q, 1.4545520027344319, 0);
  sqcRYGate(q, 2.6322008056074315, 1);
  sqcRZGate(q, 2.1240737949451085, 1);
  sqcRYGate(q, 0.9677140293235541, 2);
  sqcRZGate(q, 0.28652112866997825, 2);
  sqcRYGate(q, 0.0818724092273353, 3);
  sqcRZGate(q, -3.0819156315344167, 3);
  sqcRYGate(q, 1.1399558099285618, 4);
  sqcRZGate(q, -2.387037695275033, 4);
  sqcRYGate(q, -0.005890965998699649, 5);
  sqcRZGate(q, 2.605896714793206, 5);
  sqcRYGate(q, 0.035543694144011, 6);
  sqcRZGate(q, -1.1559666764281866, 6);
  sqcRYGate(q, 2.4085155915667396, 7);
  sqcRZGate(q, -0.6236624198928409, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.9567843519871388, 0);
  sqcRZGate(q, -2.0672916737733416, 0);
  sqcRYGate(q, 1.091872311474181, 1);
  sqcRZGate(q, 1.1707664512656395, 1);
  sqcRYGate(q, -3.055910654289838, 2);
  sqcRZGate(q, 2.8036638065667385, 2);
  sqcRYGate(q, 0.006898381192579351, 3);
  sqcRZGate(q, 0.2472756414255374, 3);
  sqcRYGate(q, 0.30898777810887434, 4);
  sqcRZGate(q, 1.7449766210339144, 4);
  sqcRYGate(q, -0.18662445392053667, 5);
  sqcRZGate(q, 1.9374026814783365, 5);
  sqcRYGate(q, -2.2407262228864644, 6);
  sqcRZGate(q, -0.6926341006903681, 6);
  sqcRYGate(q, -2.7059430999123117, 7);
  sqcRZGate(q, 1.2607548530221875, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.059873238370062, 0);
  sqcRZGate(q, 2.395216280125885, 0);
  sqcRYGate(q, 0.47174543435735483, 1);
  sqcRZGate(q, 1.8460190750589351, 1);
  sqcRYGate(q, 0.8720507747907359, 2);
  sqcRZGate(q, -0.16887051438894485, 2);
  sqcRYGate(q, 1.8930225217620051, 3);
  sqcRZGate(q, -0.4371304847912227, 3);
  sqcRYGate(q, -2.149465512557784, 4);
  sqcRZGate(q, -1.0666026141331875, 4);
  sqcRYGate(q, 3.0492812661083186, 5);
  sqcRZGate(q, 0.872900532158952, 5);
  sqcRYGate(q, 3.0047457229423404, 6);
  sqcRZGate(q, -1.111250801051982, 6);
  sqcRYGate(q, 1.1741844488364748, 7);
  sqcRZGate(q, -1.6090484355891732, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0804069443631787, 0);
  sqcRZGate(q, 2.55435995164854, 0);
  sqcRYGate(q, -0.6979730902865444, 1);
  sqcRZGate(q, 3.1340808461029375, 1);
  sqcRYGate(q, -3.131012779830769, 2);
  sqcRZGate(q, 0.7441785161071852, 2);
  sqcRYGate(q, -0.5462616974401211, 3);
  sqcRZGate(q, 3.060113264758104, 3);
  sqcRYGate(q, 3.0994624895223133, 4);
  sqcRZGate(q, 3.1217252283132617, 4);
  sqcRYGate(q, -3.1036421982425115, 5);
  sqcRZGate(q, 2.615341071670258, 5);
  sqcRYGate(q, -2.9118598267440805, 6);
  sqcRZGate(q, 1.0541709604642442, 6);
  sqcRYGate(q, 1.5113606976123188, 7);
  sqcRZGate(q, 0.5576836899741081, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9748825831692901, 0);
  sqcRZGate(q, 1.6555599965860566, 0);
  sqcRYGate(q, -1.6025331461474543, 1);
  sqcRZGate(q, 2.168215477498553, 1);
  sqcRYGate(q, -0.3283274484423977, 2);
  sqcRZGate(q, 0.1376966370769298, 2);
  sqcRYGate(q, 2.458033967046615, 3);
  sqcRZGate(q, 2.2954348119931565, 3);
  sqcRYGate(q, -3.043030210011338, 4);
  sqcRZGate(q, -0.6983712321584008, 4);
  sqcRYGate(q, 1.0002437226792686, 5);
  sqcRZGate(q, -1.282882534939107, 5);
  sqcRYGate(q, -2.6891424700356343, 6);
  sqcRZGate(q, 2.163295690170883, 6);
  sqcRYGate(q, -0.2598901141807035, 7);
  sqcRZGate(q, 0.32701067431635034, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.708119657076912, 0);
  sqcRZGate(q, 1.5193168716035013, 0);
  sqcRYGate(q, -0.028995978065977646, 1);
  sqcRZGate(q, -2.3227481249028274, 1);
  sqcRYGate(q, 0.020855330731086027, 2);
  sqcRZGate(q, 0.0053790686458613296, 2);
  sqcRYGate(q, 2.6873634404743765, 3);
  sqcRZGate(q, -1.675396801281774, 3);
  sqcRYGate(q, 3.1175004401245023, 4);
  sqcRZGate(q, 0.3898918536595594, 4);
  sqcRYGate(q, 0.05771182476657799, 5);
  sqcRZGate(q, 1.5660808947843883, 5);
  sqcRYGate(q, -3.1303494606724906, 6);
  sqcRZGate(q, 2.7940618201794623, 6);
  sqcRYGate(q, 2.2739987614108794, 7);
  sqcRZGate(q, 1.9365899122046217, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.0090330166827397, 0);
  sqcRZGate(q, 2.699261484703351, 0);
  sqcRYGate(q, 1.97551907914256, 1);
  sqcRZGate(q, -2.317298815743216, 1);
  sqcRYGate(q, 0.9754126334271563, 2);
  sqcRZGate(q, 1.2573312262340322, 2);
  sqcRYGate(q, -0.4683234796232272, 3);
  sqcRZGate(q, -0.3979835287489064, 3);
  sqcRYGate(q, 0.06954597282892934, 4);
  sqcRZGate(q, -1.453506581309925, 4);
  sqcRYGate(q, -0.9192229016829163, 5);
  sqcRZGate(q, -0.5502236261270631, 5);
  sqcRYGate(q, -2.1936405926323186, 6);
  sqcRZGate(q, -0.5457232185655645, 6);
  sqcRYGate(q, -2.762238918871373, 7);
  sqcRZGate(q, 2.8283571231308047, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.2593383935804754, 0);
  sqcRZGate(q, -1.2104909990354864, 0);
  sqcRYGate(q, 3.112368237575646, 1);
  sqcRZGate(q, -2.3327058883681344, 1);
  sqcRYGate(q, 3.0344821284241754, 2);
  sqcRZGate(q, -1.2386367690844846, 2);
  sqcRYGate(q, 1.962831409028472, 3);
  sqcRZGate(q, -3.1064535927773873, 3);
  sqcRYGate(q, 0.7940524835696596, 4);
  sqcRZGate(q, -1.4756859842969916, 4);
  sqcRYGate(q, -3.1325614216419826, 5);
  sqcRZGate(q, -0.5305811285541253, 5);
  sqcRYGate(q, -3.0783959805587027, 6);
  sqcRZGate(q, -0.5066052610500433, 6);
  sqcRYGate(q, -1.2312402203372814, 7);
  sqcRZGate(q, 2.638427296338218, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.6764420774626588, 0);
  sqcRZGate(q, 2.040386473147749, 0);
  sqcRYGate(q, 0.047623791429404434, 1);
  sqcRZGate(q, -0.3787772528699538, 1);
  sqcRYGate(q, -0.3522248649474613, 2);
  sqcRZGate(q, -1.8164774487540043, 2);
  sqcRYGate(q, -0.3763387380483828, 3);
  sqcRZGate(q, -0.7588065417749004, 3);
  sqcRYGate(q, -2.101632923026159, 4);
  sqcRZGate(q, 2.9771605948486197, 4);
  sqcRYGate(q, -2.772269843145877, 5);
  sqcRZGate(q, 0.7625811967337999, 5);
  sqcRYGate(q, 2.194693346236721, 6);
  sqcRZGate(q, 1.5932631652571727, 6);
  sqcRYGate(q, 2.0289648036216894, 7);
  sqcRZGate(q, -1.8808554832992341, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.096483513684589, 0);
  sqcRZGate(q, -2.9136578766204435, 0);
  sqcRYGate(q, -1.4678641594593227, 1);
  sqcRZGate(q, 1.494278163272875, 1);
  sqcRYGate(q, 1.0575680034037438, 2);
  sqcRZGate(q, -1.9634423945184676, 2);
  sqcRYGate(q, -2.9956791721867573, 3);
  sqcRZGate(q, -0.012368827797621051, 3);
  sqcRYGate(q, -2.2904573061985167, 4);
  sqcRZGate(q, -2.328702709480654, 4);
  sqcRYGate(q, 0.012531628741183944, 5);
  sqcRZGate(q, -1.5995446287880064, 5);
  sqcRYGate(q, -0.9410690097319557, 6);
  sqcRZGate(q, -2.044056021695339, 6);
  sqcRYGate(q, -1.3072762177713129, 7);
  sqcRZGate(q, 3.013495902373927, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.4227806803709404, 0);
  sqcRZGate(q, 1.3474578867847016, 0);
  sqcRYGate(q, 3.0393069340405887, 1);
  sqcRZGate(q, 1.101503006157549, 1);
  sqcRYGate(q, -3.128634023016893, 2);
  sqcRZGate(q, -1.144988813882791, 2);
  sqcRYGate(q, 2.3138967745095673, 3);
  sqcRZGate(q, -1.4713829354107406, 3);
  sqcRYGate(q, -1.0863115831689427, 4);
  sqcRZGate(q, -3.0318622088244496, 4);
  sqcRYGate(q, 0.9081608776029491, 5);
  sqcRZGate(q, -2.255177436223822, 5);
  sqcRYGate(q, -0.5151661034765186, 6);
  sqcRZGate(q, 2.9035272305854343, 6);
  sqcRYGate(q, -0.7881215653082698, 7);
  sqcRZGate(q, -1.1970564959450707, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.2475873103376056, 0);
  sqcRZGate(q, -2.463270216340259, 0);
  sqcRYGate(q, -2.2945861242624614, 1);
  sqcRZGate(q, 1.7731261610039137, 1);
  sqcRYGate(q, 1.9342447154651392, 2);
  sqcRZGate(q, -2.1481977482031667, 2);
  sqcRYGate(q, 3.015224167546761, 3);
  sqcRZGate(q, 1.6438619220963067, 3);
  sqcRYGate(q, -0.01600782203034659, 4);
  sqcRZGate(q, -1.2709614339934414, 4);
  sqcRYGate(q, -1.0289018661241913, 5);
  sqcRZGate(q, -0.1179945412494954, 5);
  sqcRYGate(q, -0.19761448238464396, 6);
  sqcRZGate(q, -2.1191265321417188, 6);
  sqcRYGate(q, 1.1565447285062729, 7);
  sqcRZGate(q, 2.758308815722107, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7515832640726452, 0);
  sqcRZGate(q, 1.6942480590331483, 0);
  sqcRYGate(q, -3.1285689977287476, 1);
  sqcRZGate(q, 1.2261585602817302, 1);
  sqcRYGate(q, 3.132801582668549, 2);
  sqcRZGate(q, 2.124896254516825, 2);
  sqcRYGate(q, 2.347373704529483, 3);
  sqcRZGate(q, 2.28734946988731, 3);
  sqcRYGate(q, -0.002338789302494279, 4);
  sqcRZGate(q, 1.567058887061684, 4);
  sqcRYGate(q, -3.1395135846657825, 5);
  sqcRZGate(q, -1.1331040667062062, 5);
  sqcRYGate(q, 3.1324601349108545, 6);
  sqcRZGate(q, 2.3408836714750407, 6);
  sqcRYGate(q, -2.7179396072978395, 7);
  sqcRZGate(q, -2.764722412101185, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.2769250729142385, 0);
  sqcRZGate(q, 2.349680367296042, 0);
  sqcRYGate(q, -0.027077763435016774, 1);
  sqcRZGate(q, 0.6202266291009616, 1);
  sqcRYGate(q, 0.8759599672968985, 2);
  sqcRZGate(q, -1.9233997917676067, 2);
  sqcRYGate(q, 0.7023508801580716, 3);
  sqcRZGate(q, 2.5777418804534094, 3);
  sqcRYGate(q, -1.3212504574242931, 4);
  sqcRZGate(q, -2.984842176542354, 4);
  sqcRYGate(q, 1.1120828317348677, 5);
  sqcRZGate(q, 2.486596985360628, 5);
  sqcRYGate(q, 1.251797706806125, 6);
  sqcRZGate(q, 0.5090337477216522, 6);
  sqcRYGate(q, -1.3333472927906218, 7);
  sqcRZGate(q, 1.8051762661963071, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4882402865760733, 0);
  sqcRZGate(q, -2.3486579988931635, 0);
  sqcRYGate(q, 0.014452881260071493, 1);
  sqcRZGate(q, 3.1377530275867827, 1);
  sqcRYGate(q, -3.133483343605906, 2);
  sqcRZGate(q, 1.9206888437904697, 2);
  sqcRYGate(q, -0.005093874748379005, 3);
  sqcRZGate(q, -2.8139705211248827, 3);
  sqcRYGate(q, -0.0024231608806442036, 4);
  sqcRZGate(q, 2.9598224111138642, 4);
  sqcRYGate(q, -0.007890951629656584, 5);
  sqcRZGate(q, -1.6561775584700424, 5);
  sqcRYGate(q, -0.004366148766988374, 6);
  sqcRZGate(q, -1.845727076826331, 6);
  sqcRYGate(q, 0.0007471100477536297, 7);
  sqcRZGate(q, 2.687357431571208, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.22247939787005655, 0);
  sqcRZGate(q, -0.027204542386569663, 0);
  sqcRYGate(q, -0.9538784321336068, 1);
  sqcRZGate(q, 2.5173396680043973, 1);
  sqcRYGate(q, 1.8442146157747645, 2);
  sqcRZGate(q, 0.7625315875814724, 2);
  sqcRYGate(q, 1.399886527427327, 3);
  sqcRZGate(q, 1.9791572230999002, 3);
  sqcRYGate(q, 1.3224622329432778, 4);
  sqcRZGate(q, 1.0957607040216637, 4);
  sqcRYGate(q, -1.7775397449176527, 5);
  sqcRZGate(q, 1.8150077228529815, 5);
  sqcRYGate(q, 1.3813709713161195, 6);
  sqcRZGate(q, 1.5998295958080768, 6);
  sqcRYGate(q, -0.4366675213732823, 7);
  sqcRZGate(q, -1.298866926640888, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8008259887803879, 0);
  sqcRZGate(q, 2.9277241917650514, 0);
  sqcRYGate(q, 3.1060617797589978, 1);
  sqcRZGate(q, -0.5328535285756343, 1);
  sqcRYGate(q, -0.5411133262556546, 2);
  sqcRZGate(q, -2.012144867588569, 2);
  sqcRYGate(q, -1.9574859197036574, 3);
  sqcRZGate(q, -1.5273688959833285, 3);
  sqcRYGate(q, 0.1702395568639341, 4);
  sqcRZGate(q, -0.17214577228350766, 4);
  sqcRYGate(q, -1.7571786803711786, 5);
  sqcRZGate(q, -1.8542035182788368, 5);
  sqcRYGate(q, -0.4201235420184437, 6);
  sqcRZGate(q, 2.6904399712764033, 6);
  sqcRYGate(q, -0.3158057803577321, 7);
  sqcRZGate(q, 0.696303564041294, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5921815267383175, 0);
  sqcRZGate(q, -1.96948885614925, 0);
  sqcRYGate(q, -3.1355634767712095, 1);
  sqcRZGate(q, -1.4071139881526298, 1);
  sqcRYGate(q, -2.7723586337482216, 2);
  sqcRZGate(q, 2.6710320370431626, 2);
  sqcRYGate(q, -2.3383552734736304, 3);
  sqcRZGate(q, 2.8205221703787955, 3);
  sqcRYGate(q, -2.9901369995456757, 4);
  sqcRZGate(q, -2.654099764820184, 4);
  sqcRYGate(q, 0.016050331069483146, 5);
  sqcRZGate(q, 2.428294891177449, 5);
  sqcRYGate(q, -1.7053769709657924, 6);
  sqcRZGate(q, 0.22179879760780974, 6);
  sqcRYGate(q, 2.239663750796562, 7);
  sqcRZGate(q, -1.9316914563178826, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.4542049519866764, 0);
  sqcRZGate(q, 2.8238682555187364, 0);
  sqcRYGate(q, -2.41256838823356, 1);
  sqcRZGate(q, 1.2615384872867548, 1);
  sqcRYGate(q, 1.1086335368587181, 2);
  sqcRZGate(q, 1.1579008442922165, 2);
  sqcRYGate(q, -2.6140409224737153, 3);
  sqcRZGate(q, -0.9883571038454093, 3);
  sqcRYGate(q, 3.066412544903394, 4);
  sqcRZGate(q, 2.6060741861469805, 4);
  sqcRYGate(q, -1.3062049076167206, 5);
  sqcRZGate(q, 1.06204992097212, 5);
  sqcRYGate(q, -2.469282585766928, 6);
  sqcRZGate(q, -2.2492020504466286, 6);
  sqcRYGate(q, 2.4495274695506346, 7);
  sqcRZGate(q, 0.1971776625225381, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.7241638103603179, 0);
  sqcRZGate(q, 0.7982265923361513, 0);
  sqcRYGate(q, -2.916113549225754, 1);
  sqcRZGate(q, 2.0176098373471656, 1);
  sqcRYGate(q, -0.06867724705096556, 2);
  sqcRZGate(q, -2.4918734629145356, 2);
  sqcRYGate(q, -0.24428718852403086, 3);
  sqcRZGate(q, 3.0875509943653077, 3);
  sqcRYGate(q, 3.135544285803746, 4);
  sqcRZGate(q, 0.2065690165866174, 4);
  sqcRYGate(q, 0.006760594257511843, 5);
  sqcRZGate(q, -1.0381793112161803, 5);
  sqcRYGate(q, 3.045583969278159, 6);
  sqcRZGate(q, 0.9595582629750199, 6);
  sqcRYGate(q, 2.207722989138574, 7);
  sqcRZGate(q, 1.0062526616043677, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.173334020124122, 0);
  sqcRZGate(q, 0.8284229855564131, 0);
  sqcRYGate(q, -0.7232717445318082, 1);
  sqcRZGate(q, 0.6049856734962001, 1);
  sqcRYGate(q, -3.081939588053459, 2);
  sqcRZGate(q, -0.7716954076192499, 2);
  sqcRYGate(q, -0.3491624499281297, 3);
  sqcRZGate(q, -1.9034884570320931, 3);
  sqcRYGate(q, -2.705529029934777, 4);
  sqcRZGate(q, 0.6462303551464181, 4);
  sqcRYGate(q, -1.8380101573263659, 5);
  sqcRZGate(q, 0.5285208110413365, 5);
  sqcRYGate(q, 1.857604358369628, 6);
  sqcRZGate(q, 1.398422698857372, 6);
  sqcRYGate(q, 1.6732733007141911, 7);
  sqcRZGate(q, 0.14938274946934282, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.485839245694451, 0);
  sqcRZGate(q, 0.09060055270499931, 0);
  sqcRYGate(q, 0.3173951967194482, 1);
  sqcRZGate(q, -1.244263391511647, 1);
  sqcRYGate(q, 0.02195627544380052, 2);
  sqcRZGate(q, 1.1903712635440993, 2);
  sqcRYGate(q, 0.12403151255773626, 3);
  sqcRZGate(q, 1.6374910966019176, 3);
  sqcRYGate(q, 3.0701972682651033, 4);
  sqcRZGate(q, -1.337817500123154, 4);
  sqcRYGate(q, -3.127918210542946, 5);
  sqcRZGate(q, 1.9024898192212207, 5);
  sqcRYGate(q, -0.029421117860272235, 6);
  sqcRZGate(q, 1.0909661996485722, 6);
  sqcRYGate(q, 1.9753055234690935, 7);
  sqcRZGate(q, 2.928709730197079, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5943715408231798, 0);
  sqcRZGate(q, 1.1614188365266234, 0);
  sqcRYGate(q, 0.7297006893076036, 1);
  sqcRZGate(q, 1.4860658863471532, 1);
  sqcRYGate(q, -2.902150724414043, 2);
  sqcRZGate(q, 0.7914722990053938, 2);
  sqcRYGate(q, -0.57271699983679, 3);
  sqcRZGate(q, -0.36501034241509256, 3);
  sqcRYGate(q, 0.44941620867200144, 4);
  sqcRZGate(q, 0.950999724097631, 4);
  sqcRYGate(q, 0.14519165920384072, 5);
  sqcRZGate(q, -2.624886933071396, 5);
  sqcRYGate(q, 2.950985623663474, 6);
  sqcRZGate(q, 1.9980550454688892, 6);
  sqcRYGate(q, 1.1429772028323821, 7);
  sqcRZGate(q, 0.9223232530446426, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.186675071082881, 0);
  sqcRZGate(q, 0.9286413501566608, 0);
  sqcRYGate(q, 3.0963987305283447, 1);
  sqcRZGate(q, 1.591912488587873, 1);
  sqcRYGate(q, 3.092826679992597, 2);
  sqcRZGate(q, -3.0518339510311194, 2);
  sqcRYGate(q, -0.005645100125869081, 3);
  sqcRZGate(q, -3.1253879954045685, 3);
  sqcRYGate(q, -0.04298444256170434, 4);
  sqcRZGate(q, -2.866834487194675, 4);
  sqcRYGate(q, -3.1065988435738503, 5);
  sqcRZGate(q, 0.08351909191861483, 5);
  sqcRYGate(q, -3.0753056740180176, 6);
  sqcRZGate(q, 2.5592623127099747, 6);
  sqcRYGate(q, -0.9319604566979738, 7);
  sqcRZGate(q, 0.5644201059874359, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.09316204249035277, 0);
  sqcRZGate(q, 0.6110453707989647, 0);
  sqcRYGate(q, -2.5187436416249844, 1);
  sqcRZGate(q, -0.9757850936075454, 1);
  sqcRYGate(q, -0.271060961016258, 2);
  sqcRZGate(q, -0.9354228113092775, 2);
  sqcRYGate(q, -2.968482365444346, 3);
  sqcRZGate(q, 2.1439145485688136, 3);
  sqcRYGate(q, -2.8099170646111036, 4);
  sqcRZGate(q, -1.5504146780705137, 4);
  sqcRYGate(q, 2.9810201962959106, 5);
  sqcRZGate(q, 1.340785101092452, 5);
  sqcRYGate(q, 2.0634534939904747, 6);
  sqcRZGate(q, -1.8851918584898326, 6);
  sqcRYGate(q, -1.9586888695177729, 7);
  sqcRZGate(q, -1.8126990973893453, 7);

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
