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

  sqcRYGate(q, -0.710344622115343, 0);
  sqcRZGate(q, 2.3425882898520625, 0);
  sqcRYGate(q, -0.23623447076009985, 1);
  sqcRZGate(q, -1.4699505193474427, 1);
  sqcRYGate(q, 2.7774329390259944, 2);
  sqcRZGate(q, -1.9168825979339144, 2);
  sqcRYGate(q, 2.0244875269861264, 3);
  sqcRZGate(q, 0.9651547034590182, 3);
  sqcRYGate(q, -1.9264369571418154, 4);
  sqcRZGate(q, -0.16966223492242413, 4);
  sqcRYGate(q, 1.4817530629448634, 5);
  sqcRZGate(q, 1.5590392830290032, 5);
  sqcRYGate(q, 1.4160114935875932, 6);
  sqcRZGate(q, -1.2807108518032777, 6);
  sqcRYGate(q, 0.8799182681719477, 7);
  sqcRZGate(q, -1.4524776417248768, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.2052317931438008, 0);
  sqcRZGate(q, -0.1416050365914776, 0);
  sqcRYGate(q, 3.018855926672174, 1);
  sqcRZGate(q, 1.5344989823927047, 1);
  sqcRYGate(q, 0.35492204459939425, 2);
  sqcRZGate(q, 3.0422633949865805, 2);
  sqcRYGate(q, 1.772295422082151, 3);
  sqcRZGate(q, 2.8791216257004866, 3);
  sqcRYGate(q, 1.716296393254653, 4);
  sqcRZGate(q, -0.676248990053838, 4);
  sqcRYGate(q, 0.19927731195405393, 5);
  sqcRZGate(q, 1.6772277998841474, 5);
  sqcRYGate(q, -1.2746911504493328, 6);
  sqcRZGate(q, 2.199647281356422, 6);
  sqcRYGate(q, -2.052055316972077, 7);
  sqcRZGate(q, 0.19504353286393736, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.4841873051715333, 0);
  sqcRZGate(q, 1.7096150406923618, 0);
  sqcRYGate(q, -2.9990251500655374, 1);
  sqcRZGate(q, 1.2746060607683196, 1);
  sqcRYGate(q, 0.6885532113769735, 2);
  sqcRZGate(q, -1.456979562320717, 2);
  sqcRYGate(q, 1.15004105072017, 3);
  sqcRZGate(q, -1.1303530837501272, 3);
  sqcRYGate(q, -2.9089215700196656, 4);
  sqcRZGate(q, 3.0735699344906457, 4);
  sqcRYGate(q, 1.0290186836636475, 5);
  sqcRZGate(q, -1.9099825938689325, 5);
  sqcRYGate(q, -2.33420834473296, 6);
  sqcRZGate(q, -0.5945016450819921, 6);
  sqcRYGate(q, -0.8075268017318273, 7);
  sqcRZGate(q, 3.1178234733149894, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.14339050904916031, 0);
  sqcRZGate(q, -1.8053393427648086, 0);
  sqcRYGate(q, -1.480829326853474, 1);
  sqcRZGate(q, 0.00906948451826619, 1);
  sqcRYGate(q, -0.34483996778580545, 2);
  sqcRZGate(q, 1.53162966009383, 2);
  sqcRYGate(q, -0.9456693970670349, 3);
  sqcRZGate(q, -1.0838062279117555, 3);
  sqcRYGate(q, -0.7505823454522753, 4);
  sqcRZGate(q, -1.6673818764224348, 4);
  sqcRYGate(q, -1.8970349889652018, 5);
  sqcRZGate(q, 3.072552956107749, 5);
  sqcRYGate(q, 1.6179775422659644, 6);
  sqcRZGate(q, -0.21412355846770928, 6);
  sqcRYGate(q, 0.7081038759066477, 7);
  sqcRZGate(q, 2.351049459702498, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5168790467426487, 0);
  sqcRZGate(q, 0.20606880676124897, 0);
  sqcRYGate(q, -0.8901284339150921, 1);
  sqcRZGate(q, -1.2092275067072211, 1);
  sqcRYGate(q, 1.3958257446139632, 2);
  sqcRZGate(q, 2.305283797740287, 2);
  sqcRYGate(q, 2.253054032605484, 3);
  sqcRZGate(q, 2.2111233486567636, 3);
  sqcRYGate(q, -0.9640517064763855, 4);
  sqcRZGate(q, -0.6854182816232883, 4);
  sqcRYGate(q, -0.5037527599164973, 5);
  sqcRZGate(q, -1.44005874740309, 5);
  sqcRYGate(q, -1.5351189365456364, 6);
  sqcRZGate(q, -2.798811518378561, 6);
  sqcRYGate(q, 1.82346098748946, 7);
  sqcRZGate(q, 0.11974090438284056, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.3960013943897764, 0);
  sqcRZGate(q, 2.3623404404714843, 0);
  sqcRYGate(q, -0.48756028202787643, 1);
  sqcRZGate(q, 1.1508838850490006, 1);
  sqcRYGate(q, -2.389093547448543, 2);
  sqcRZGate(q, 1.6448672287921042, 2);
  sqcRYGate(q, 1.4332836675376617, 3);
  sqcRZGate(q, -2.674383646132885, 3);
  sqcRYGate(q, 1.1434011121648453, 4);
  sqcRZGate(q, -2.06394966585494, 4);
  sqcRYGate(q, 2.1271385567537653, 5);
  sqcRZGate(q, 0.7079716255905543, 5);
  sqcRYGate(q, -2.646063254840285, 6);
  sqcRZGate(q, 1.2170609774961647, 6);
  sqcRYGate(q, 2.706918522845391, 7);
  sqcRZGate(q, -0.4145816987175965, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.997211355092037, 0);
  sqcRZGate(q, -1.9804400117293386, 0);
  sqcRYGate(q, -1.3844508302118217, 1);
  sqcRZGate(q, 1.9857269925677166, 1);
  sqcRYGate(q, -0.7358090386148932, 2);
  sqcRZGate(q, -1.8744450557288665, 2);
  sqcRYGate(q, 2.4258136433920456, 3);
  sqcRZGate(q, 3.0765645137176367, 3);
  sqcRYGate(q, 0.9225125152586986, 4);
  sqcRZGate(q, 1.3614494492958882, 4);
  sqcRYGate(q, 1.7376606499783012, 5);
  sqcRZGate(q, 0.10398035674381578, 5);
  sqcRYGate(q, -2.6924675709010506, 6);
  sqcRZGate(q, -2.239029436419882, 6);
  sqcRYGate(q, 0.23529506346587523, 7);
  sqcRZGate(q, 2.137263322487304, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6557230519003276, 0);
  sqcRZGate(q, 2.103040779251345, 0);
  sqcRYGate(q, -1.2405142711133121, 1);
  sqcRZGate(q, -3.078388982006861, 1);
  sqcRYGate(q, -0.26321352766037626, 2);
  sqcRZGate(q, 0.05422607758935193, 2);
  sqcRYGate(q, -0.7293786580263646, 3);
  sqcRZGate(q, 1.549584763046557, 3);
  sqcRYGate(q, -0.5606719116570339, 4);
  sqcRZGate(q, 2.9206515276463545, 4);
  sqcRYGate(q, 2.2434131780761364, 5);
  sqcRZGate(q, -0.2686347067799284, 5);
  sqcRYGate(q, -0.4510453633644702, 6);
  sqcRZGate(q, 1.0769391224854912, 6);
  sqcRYGate(q, -3.0105309122169333, 7);
  sqcRZGate(q, 1.134739118179404, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.1899588947618147, 0);
  sqcRZGate(q, -0.5244621561499336, 0);
  sqcRYGate(q, 2.7994799704542683, 1);
  sqcRZGate(q, 0.878775587164215, 1);
  sqcRYGate(q, -2.763965515477676, 2);
  sqcRZGate(q, 1.0833270865786795, 2);
  sqcRYGate(q, 1.210434054767802, 3);
  sqcRZGate(q, -0.6198614779789766, 3);
  sqcRYGate(q, 2.69588422410091, 4);
  sqcRZGate(q, 2.2347852528921566, 4);
  sqcRYGate(q, 0.9733730053300719, 5);
  sqcRZGate(q, 2.8152670879228725, 5);
  sqcRYGate(q, -2.894292256434834, 6);
  sqcRZGate(q, -2.8345775045805834, 6);
  sqcRYGate(q, 2.3294159982569407, 7);
  sqcRZGate(q, -1.6147462664157415, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.46100603672131957, 0);
  sqcRZGate(q, -1.2591785359584355, 0);
  sqcRYGate(q, -1.9020009320996722, 1);
  sqcRZGate(q, 1.2551199719991004, 1);
  sqcRYGate(q, 2.5117263153485707, 2);
  sqcRZGate(q, 0.12156367493927966, 2);
  sqcRYGate(q, -1.813061378531813, 3);
  sqcRZGate(q, 1.5900699742555526, 3);
  sqcRYGate(q, 0.2779993685595074, 4);
  sqcRZGate(q, -3.069688021027755, 4);
  sqcRYGate(q, 0.8710382752238454, 5);
  sqcRZGate(q, -0.41663002913066194, 5);
  sqcRYGate(q, -1.5956903755149912, 6);
  sqcRZGate(q, 1.9923969196962155, 6);
  sqcRYGate(q, 0.6278918705041718, 7);
  sqcRZGate(q, -0.9713538825791335, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.3798522525912083, 0);
  sqcRZGate(q, 2.747732305589205, 0);
  sqcRYGate(q, 1.355867645413996, 1);
  sqcRZGate(q, -0.09014592852602821, 1);
  sqcRYGate(q, 0.5730197049173498, 2);
  sqcRZGate(q, 0.6461036596790395, 2);
  sqcRYGate(q, 0.036774184078597116, 3);
  sqcRZGate(q, -2.836997926770135, 3);
  sqcRYGate(q, -2.8526237625672337, 4);
  sqcRZGate(q, -2.145821372532388, 4);
  sqcRYGate(q, -2.1893919477252712, 5);
  sqcRZGate(q, -0.12004402065689089, 5);
  sqcRYGate(q, -0.9885298975270089, 6);
  sqcRZGate(q, -3.052748602566154, 6);
  sqcRYGate(q, -1.879526436193835, 7);
  sqcRZGate(q, 0.9393952774473484, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.6410754428895008, 0);
  sqcRZGate(q, 1.5221751854769539, 0);
  sqcRYGate(q, -2.0399956253196043, 1);
  sqcRZGate(q, 2.7359054418033866, 1);
  sqcRYGate(q, 0.6507506446593793, 2);
  sqcRZGate(q, -1.0432703449852816, 2);
  sqcRYGate(q, -0.47658047783374546, 3);
  sqcRZGate(q, -0.7622357430030613, 3);
  sqcRYGate(q, 1.3981511848677997, 4);
  sqcRZGate(q, -1.6046533046585507, 4);
  sqcRYGate(q, -0.8791367161143224, 5);
  sqcRZGate(q, -2.1587990939085433, 5);
  sqcRYGate(q, 2.195768208428902, 6);
  sqcRZGate(q, 1.8838390932693905, 6);
  sqcRYGate(q, -1.5734646982666065, 7);
  sqcRZGate(q, 1.3157393345692237, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9342040369434637, 0);
  sqcRZGate(q, -0.495950695757779, 0);
  sqcRYGate(q, 2.5479558840269076, 1);
  sqcRZGate(q, -1.179652475560414, 1);
  sqcRYGate(q, -0.39109157878884265, 2);
  sqcRZGate(q, 1.0712302797952533, 2);
  sqcRYGate(q, 1.4209910747624779, 3);
  sqcRZGate(q, 0.1152481093222546, 3);
  sqcRYGate(q, -1.4606204203483268, 4);
  sqcRZGate(q, -0.30088226214226366, 4);
  sqcRYGate(q, 0.07779948110871518, 5);
  sqcRZGate(q, 1.0273279033170497, 5);
  sqcRYGate(q, -0.6523036213532291, 6);
  sqcRZGate(q, -0.6110496764316967, 6);
  sqcRYGate(q, 0.7910249949302429, 7);
  sqcRZGate(q, 2.7567539461735584, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.3305510133450444, 0);
  sqcRZGate(q, 1.9150931024374647, 0);
  sqcRYGate(q, -2.5842433782912257, 1);
  sqcRZGate(q, -1.529643988238357, 1);
  sqcRYGate(q, 1.6379485092238049, 2);
  sqcRZGate(q, -2.354464444383968, 2);
  sqcRYGate(q, -2.30897509864503, 3);
  sqcRZGate(q, -2.8194488587445794, 3);
  sqcRYGate(q, 1.6450214293366008, 4);
  sqcRZGate(q, 0.7406263697533415, 4);
  sqcRYGate(q, -0.4668592623875272, 5);
  sqcRZGate(q, -2.713316551958349, 5);
  sqcRYGate(q, 0.5021532411028371, 6);
  sqcRZGate(q, -1.2465934222006965, 6);
  sqcRYGate(q, 0.39548096595067866, 7);
  sqcRZGate(q, -2.42504796762115, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.3139184321975674, 0);
  sqcRZGate(q, 2.0781558528364883, 0);
  sqcRYGate(q, -1.162330128167177, 1);
  sqcRZGate(q, 2.2245768410033477, 1);
  sqcRYGate(q, -1.1605182284535045, 2);
  sqcRZGate(q, -2.5173721058391223, 2);
  sqcRYGate(q, 1.787115713118828, 3);
  sqcRZGate(q, 2.431529792738766, 3);
  sqcRYGate(q, 0.30052622741564217, 4);
  sqcRZGate(q, -1.905755619710165, 4);
  sqcRYGate(q, 0.33228899861555045, 5);
  sqcRZGate(q, 3.127446112084889, 5);
  sqcRYGate(q, 1.5674758866271583, 6);
  sqcRZGate(q, -2.7857413934048294, 6);
  sqcRYGate(q, -1.601849593228963, 7);
  sqcRZGate(q, -2.3092737381420947, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.1080530946063134, 0);
  sqcRZGate(q, -2.561949119328989, 0);
  sqcRYGate(q, 0.6680924575935909, 1);
  sqcRZGate(q, 0.3601691327772736, 1);
  sqcRYGate(q, -1.358035153976033, 2);
  sqcRZGate(q, -1.9595787960879856, 2);
  sqcRYGate(q, -0.9832549422300191, 3);
  sqcRZGate(q, 2.03390917304238, 3);
  sqcRYGate(q, -0.2592263638985733, 4);
  sqcRZGate(q, 2.567457262491717, 4);
  sqcRYGate(q, 0.5284442046847867, 5);
  sqcRZGate(q, 2.4165157996961613, 5);
  sqcRYGate(q, 2.2657811366438843, 6);
  sqcRZGate(q, 1.8266108287704856, 6);
  sqcRYGate(q, -1.4468777023678319, 7);
  sqcRZGate(q, 2.2680369464215397, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.2685126477285384, 0);
  sqcRZGate(q, -1.8120935891834495, 0);
  sqcRYGate(q, -2.8605347037161843, 1);
  sqcRZGate(q, -0.23584877265783957, 1);
  sqcRYGate(q, -2.3735890155081374, 2);
  sqcRZGate(q, -2.491058434274489, 2);
  sqcRYGate(q, -2.5682417863458396, 3);
  sqcRZGate(q, 3.1170953251306517, 3);
  sqcRYGate(q, 2.4422441752486104, 4);
  sqcRZGate(q, 2.9320586035921843, 4);
  sqcRYGate(q, -1.0039895335980562, 5);
  sqcRZGate(q, 1.948155097059889, 5);
  sqcRYGate(q, -2.1820367483060363, 6);
  sqcRZGate(q, 2.58221030661185, 6);
  sqcRYGate(q, -1.703614108370461, 7);
  sqcRZGate(q, -1.1249322030331603, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.810270239984058, 0);
  sqcRZGate(q, 3.095767851458001, 0);
  sqcRYGate(q, -2.114309791123893, 1);
  sqcRZGate(q, -0.8513473899073855, 1);
  sqcRYGate(q, 1.6695735833454455, 2);
  sqcRZGate(q, -1.0709739807444123, 2);
  sqcRYGate(q, -0.8887878714865751, 3);
  sqcRZGate(q, -3.043552864508904, 3);
  sqcRYGate(q, -1.4685917725136495, 4);
  sqcRZGate(q, -2.5009816323981537, 4);
  sqcRYGate(q, -1.1235154311171571, 5);
  sqcRZGate(q, -3.1111963380933343, 5);
  sqcRYGate(q, -1.2160144627837133, 6);
  sqcRZGate(q, -0.39831064368466423, 6);
  sqcRYGate(q, -0.8278878092303584, 7);
  sqcRZGate(q, 1.8932129787369603, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.6529323648494447, 0);
  sqcRZGate(q, 1.2141711321754274, 0);
  sqcRYGate(q, 1.80513930553943, 1);
  sqcRZGate(q, 3.0183742297436655, 1);
  sqcRYGate(q, 0.32695588452069196, 2);
  sqcRZGate(q, -0.8744456326164318, 2);
  sqcRYGate(q, -1.0634366421012824, 3);
  sqcRZGate(q, 1.5082744559311252, 3);
  sqcRYGate(q, 1.569929438615052, 4);
  sqcRZGate(q, -0.13626573272367848, 4);
  sqcRYGate(q, -0.7099136998313157, 5);
  sqcRZGate(q, 0.6643160471967331, 5);
  sqcRYGate(q, 2.046193673193436, 6);
  sqcRZGate(q, 0.7339523399304136, 6);
  sqcRYGate(q, -2.012098847630263, 7);
  sqcRZGate(q, 1.9755281796899318, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.50377849570369, 0);
  sqcRZGate(q, -0.5505001952685853, 0);
  sqcRYGate(q, -0.9289006103548504, 1);
  sqcRZGate(q, 0.41817466643736617, 1);
  sqcRYGate(q, 1.9703520188679102, 2);
  sqcRZGate(q, -2.482370629598022, 2);
  sqcRYGate(q, -0.18468332088840017, 3);
  sqcRZGate(q, 2.220393967827752, 3);
  sqcRYGate(q, 2.306631288088065, 4);
  sqcRZGate(q, 1.2393973851874018, 4);
  sqcRYGate(q, 1.1273601323345546, 5);
  sqcRZGate(q, -2.37266155902977, 5);
  sqcRYGate(q, -1.5384799857300693, 6);
  sqcRZGate(q, -0.18419388894178823, 6);
  sqcRYGate(q, -0.8682050692957424, 7);
  sqcRZGate(q, 0.3602807783459157, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.3011501498855638, 0);
  sqcRZGate(q, 2.7743154535215693, 0);
  sqcRYGate(q, 2.470453777109624, 1);
  sqcRZGate(q, 1.1069228573044663, 1);
  sqcRYGate(q, -1.487029250338418, 2);
  sqcRZGate(q, -1.9962595953480307, 2);
  sqcRYGate(q, -0.6750742359983076, 3);
  sqcRZGate(q, -2.825947136159606, 3);
  sqcRYGate(q, -1.2002349929729155, 4);
  sqcRZGate(q, -2.2708674056917646, 4);
  sqcRYGate(q, -0.8958164246767595, 5);
  sqcRZGate(q, 2.386427435564644, 5);
  sqcRYGate(q, 1.7769999961871434, 6);
  sqcRZGate(q, 1.2095450424219125, 6);
  sqcRYGate(q, 1.0508314704761108, 7);
  sqcRZGate(q, -2.1332906980153497, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.5182053079548528, 0);
  sqcRZGate(q, 1.775757069185649, 0);
  sqcRYGate(q, -2.8907621813832463, 1);
  sqcRZGate(q, 2.299688374602259, 1);
  sqcRYGate(q, 1.8075768144317008, 2);
  sqcRZGate(q, 1.3187991753071282, 2);
  sqcRYGate(q, -2.8688761842580903, 3);
  sqcRZGate(q, 1.1538068336343958, 3);
  sqcRYGate(q, 1.4667205743729232, 4);
  sqcRZGate(q, -0.029280224139194806, 4);
  sqcRYGate(q, 1.9803664945133344, 5);
  sqcRZGate(q, -2.80232445452118, 5);
  sqcRYGate(q, 0.36504366560597723, 6);
  sqcRZGate(q, 1.576922552042583, 6);
  sqcRYGate(q, -0.18157462278482678, 7);
  sqcRZGate(q, 2.720844395791116, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.9238324374968663, 0);
  sqcRZGate(q, -0.31635650649678604, 0);
  sqcRYGate(q, -2.976647043599516, 1);
  sqcRZGate(q, -1.2434623535592515, 1);
  sqcRYGate(q, -0.6573918317521583, 2);
  sqcRZGate(q, -0.05733992268939048, 2);
  sqcRYGate(q, -2.78018606522021, 3);
  sqcRZGate(q, 2.26905307866987, 3);
  sqcRYGate(q, 2.10809089288413, 4);
  sqcRZGate(q, -0.4477899726450824, 4);
  sqcRYGate(q, 0.29139327450462904, 5);
  sqcRZGate(q, -1.5954827044574538, 5);
  sqcRYGate(q, -0.7562560556898763, 6);
  sqcRZGate(q, -1.446299413905378, 6);
  sqcRYGate(q, -2.283069590988555, 7);
  sqcRZGate(q, 2.2065928120863063, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.457018207150193, 0);
  sqcRZGate(q, 0.18946738716015515, 0);
  sqcRYGate(q, -1.811866230002701, 1);
  sqcRZGate(q, -1.7712133711132516, 1);
  sqcRYGate(q, -1.6973111156693228, 2);
  sqcRZGate(q, 1.6402934883042273, 2);
  sqcRYGate(q, 0.7685219994466037, 3);
  sqcRZGate(q, -1.4574777439188473, 3);
  sqcRYGate(q, 0.5984716710250656, 4);
  sqcRZGate(q, 3.1131537047282407, 4);
  sqcRYGate(q, -2.811393498708194, 5);
  sqcRZGate(q, 2.3996715399761537, 5);
  sqcRYGate(q, 2.8159244973623743, 6);
  sqcRZGate(q, 1.7499301227414037, 6);
  sqcRYGate(q, -1.0279630226321388, 7);
  sqcRZGate(q, 0.12324875926270361, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.9810845052456967, 0);
  sqcRZGate(q, -0.02262819074424005, 0);
  sqcRYGate(q, -1.1308761757939303, 1);
  sqcRZGate(q, -2.7295372955740937, 1);
  sqcRYGate(q, -0.8316544110510533, 2);
  sqcRZGate(q, 0.9616734700495186, 2);
  sqcRYGate(q, -1.0154723977218731, 3);
  sqcRZGate(q, 1.7651798913375591, 3);
  sqcRYGate(q, -1.5615325829122302, 4);
  sqcRZGate(q, -0.9467097690623083, 4);
  sqcRYGate(q, 2.2673054468490568, 5);
  sqcRZGate(q, -1.199720278346807, 5);
  sqcRYGate(q, -2.9745645810285017, 6);
  sqcRZGate(q, 0.7491885518415687, 6);
  sqcRYGate(q, 0.12255830308195946, 7);
  sqcRZGate(q, 0.8220367256841551, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.0075275732447913, 0);
  sqcRZGate(q, 0.5557905801076748, 0);
  sqcRYGate(q, -0.19270809312359494, 1);
  sqcRZGate(q, -1.5949207382859518, 1);
  sqcRYGate(q, -1.6830994530108392, 2);
  sqcRZGate(q, 2.654036071628231, 2);
  sqcRYGate(q, 0.9726871743728639, 3);
  sqcRZGate(q, -0.7274579451001065, 3);
  sqcRYGate(q, 1.4459498520864091, 4);
  sqcRZGate(q, 0.3372059164572167, 4);
  sqcRYGate(q, 1.7479097660424072, 5);
  sqcRZGate(q, 1.80070206976312, 5);
  sqcRYGate(q, -1.68442846721843, 6);
  sqcRZGate(q, -3.0783267765668416, 6);
  sqcRYGate(q, 1.0105414857100774, 7);
  sqcRZGate(q, 2.478408072816569, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.5225684100570662, 0);
  sqcRZGate(q, 2.743867026121899, 0);
  sqcRYGate(q, -0.3364388362741951, 1);
  sqcRZGate(q, -0.21477046850547177, 1);
  sqcRYGate(q, 2.513944500405755, 2);
  sqcRZGate(q, 2.358207281226518, 2);
  sqcRYGate(q, 0.9729697280255765, 3);
  sqcRZGate(q, -1.1982112101536093, 3);
  sqcRYGate(q, -1.904477481461667, 4);
  sqcRZGate(q, 0.680006505393207, 4);
  sqcRYGate(q, -1.6856349021181911, 5);
  sqcRZGate(q, -0.5796086816046027, 5);
  sqcRYGate(q, -0.341575426961656, 6);
  sqcRZGate(q, 2.8719534987570596, 6);
  sqcRYGate(q, -0.5484283201075126, 7);
  sqcRZGate(q, 1.653499559902711, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.1510781339822143, 0);
  sqcRZGate(q, -3.066833822518722, 0);
  sqcRYGate(q, 1.4846848093536593, 1);
  sqcRZGate(q, 0.520225635952122, 1);
  sqcRYGate(q, 1.6306360400981892, 2);
  sqcRZGate(q, -2.288948714462367, 2);
  sqcRYGate(q, 0.21554368073815947, 3);
  sqcRZGate(q, -0.5371160410619664, 3);
  sqcRYGate(q, 2.1577675789486275, 4);
  sqcRZGate(q, -0.4660452384133818, 4);
  sqcRYGate(q, -2.3290384621573277, 5);
  sqcRZGate(q, -2.731433651185385, 5);
  sqcRYGate(q, -0.17797199157738586, 6);
  sqcRZGate(q, 2.9689659838894356, 6);
  sqcRYGate(q, 1.2724653236825283, 7);
  sqcRZGate(q, -2.2359063712347345, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8418761719058213, 0);
  sqcRZGate(q, 0.23289437598458385, 0);
  sqcRYGate(q, 2.836378306186383, 1);
  sqcRZGate(q, 0.38071914518810596, 1);
  sqcRYGate(q, -1.678199463305468, 2);
  sqcRZGate(q, 2.855749609592683, 2);
  sqcRYGate(q, 0.6082656491979961, 3);
  sqcRZGate(q, -2.3140775256144184, 3);
  sqcRYGate(q, 2.0629241694955516, 4);
  sqcRZGate(q, -2.9651516400234232, 4);
  sqcRYGate(q, -3.013175158864349, 5);
  sqcRZGate(q, -1.5508496248533508, 5);
  sqcRYGate(q, -0.44814608804195416, 6);
  sqcRZGate(q, -2.464948002474013, 6);
  sqcRYGate(q, 2.8949565107660065, 7);
  sqcRZGate(q, -2.9646706038961157, 7);

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
