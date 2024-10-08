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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.6984858040052915, 0);
  sqcRYGate(q, -1.9614390860292317, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7519086795428693, 0);
  sqcRYGate(q, 2.654861944677932, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0919396159110522, 2);
  sqcRYGate(q, 2.8107738191708163, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5257305995634092, 2);
  sqcRYGate(q, -0.010483905863088339, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7265487406852202, 4);
  sqcRYGate(q, -1.3835306525583642, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.23612339889209633, 4);
  sqcRYGate(q, -1.534650328717759, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6020573167285757, 6);
  sqcRYGate(q, -0.3240179469429867, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.09761644024625404, 6);
  sqcRYGate(q, 1.6633006994621131, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.07508487779746469, 8);
  sqcRYGate(q, 1.2183508286851934, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8532323677177063, 8);
  sqcRYGate(q, -1.276677619807903, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.4904689109543052, 10);
  sqcRYGate(q, 0.5615440310115014, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0723627850141977, 10);
  sqcRYGate(q, -0.42473573064535236, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.791986745379635, 0);
  sqcRYGate(q, 0.6637520914460442, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9432478765461791, 0);
  sqcRYGate(q, -1.1973613567697556, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5033093682993481, 2);
  sqcRYGate(q, -1.5031148062371107, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.12816748721623, 2);
  sqcRYGate(q, 1.144951504531008, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5963471802371878, 4);
  sqcRYGate(q, 2.9818143243656556, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1405763530583486, 4);
  sqcRYGate(q, 0.42505371358462973, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.13728049658444, 6);
  sqcRYGate(q, 2.86530673452504, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.5351930338227033, 6);
  sqcRYGate(q, -3.1415710800727537, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.18803065391915566, 8);
  sqcRYGate(q, 0.8586262649291312, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.4761583769772466, 8);
  sqcRYGate(q, 0.24581999849415836, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.879100684605119, 1);
  sqcRYGate(q, -2.2290098480666827, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9139133231355068, 1);
  sqcRYGate(q, 2.823351797906397, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.358800169256244, 3);
  sqcRYGate(q, -0.6397917240947947, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.1180113395367033, 3);
  sqcRYGate(q, -2.8559985710445686, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7581344253103448, 5);
  sqcRYGate(q, 1.484289319458914, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1400193925324786, 5);
  sqcRYGate(q, -1.5602003378320934, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.173293893139661, 7);
  sqcRYGate(q, -2.6581903804369706, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.13121344308562255, 7);
  sqcRYGate(q, 0.0035895540248775783, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.6287095661062772, 9);
  sqcRYGate(q, -0.46517918399237246, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.7501326830901838, 9);
  sqcRYGate(q, -0.10798473434321706, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.15330773930781305, 0);
  sqcRYGate(q, 2.93309736455676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.141594859822022, 0);
  sqcRYGate(q, -2.1814550667319956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5294513231563514, 2);
  sqcRYGate(q, 0.09012370261673591, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9144318972923706, 2);
  sqcRYGate(q, -0.746675320218666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.523685162338705, 4);
  sqcRYGate(q, 1.4594535831105306, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2923504259736962, 4);
  sqcRYGate(q, 1.4739076291226485, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1261857148394847, 6);
  sqcRYGate(q, -1.6790109927176629, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0011313765225348911, 6);
  sqcRYGate(q, 9.64071092096969e-06, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7064126080722843, 8);
  sqcRYGate(q, -0.33467565659429915, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1151220053596416, 8);
  sqcRYGate(q, -2.1807962767991587, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7583446545878711, 10);
  sqcRYGate(q, 1.4232386786970164, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.432416764764753, 10);
  sqcRYGate(q, -1.0213897224008497, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.33593393440800057, 0);
  sqcRYGate(q, 0.8693412303292615, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7699638347126516, 0);
  sqcRYGate(q, 1.3988132504904218, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3363589321086686, 2);
  sqcRYGate(q, -2.9703762742213335, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1412719455208107, 2);
  sqcRYGate(q, 0.00048404247002409306, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.004617471020392283, 4);
  sqcRYGate(q, -0.11134576947959231, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.247941092924356e-05, 4);
  sqcRYGate(q, 1.661287641060622, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7137689773595381, 6);
  sqcRYGate(q, 0.12860297819558092, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.6303837699025125, 6);
  sqcRYGate(q, 0.000577184819516272, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.161111680785286, 8);
  sqcRYGate(q, 2.6055871362397713, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.303688226753206, 8);
  sqcRYGate(q, 2.5745349264924844, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.9665591247166287, 1);
  sqcRYGate(q, 2.123025671589992, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9420255799749988, 1);
  sqcRYGate(q, -3.0392931507384073, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.219089853839645, 3);
  sqcRYGate(q, -2.356085648791171, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1411308615915012, 3);
  sqcRYGate(q, 3.1399107815032923, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.1324182067886396, 5);
  sqcRYGate(q, 2.887045617434828, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.0025659945309932652, 5);
  sqcRYGate(q, 2.573048640807054, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.0016924172413986, 7);
  sqcRYGate(q, -1.220513049796345, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.12051345646805435, 7);
  sqcRYGate(q, -3.138271070913604, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.3013125151169325, 9);
  sqcRYGate(q, 0.6575967864378702, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.6413426099290979, 9);
  sqcRYGate(q, 0.7925426624884169, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.37058356170510376, 0);
  sqcRYGate(q, 0.6424070432654903, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.836550528180644, 0);
  sqcRYGate(q, 2.940118485614784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.997537314898767, 2);
  sqcRYGate(q, 2.8716011011037677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8147715935841469, 2);
  sqcRYGate(q, 0.1452242754156255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3191417691036262, 4);
  sqcRYGate(q, -1.7636905178971682, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.136848659302446, 4);
  sqcRYGate(q, -3.0912760083548076, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8668598388993081, 6);
  sqcRYGate(q, -0.41456996019102865, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1392873956133567, 6);
  sqcRYGate(q, 0.006036603200185423, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.25105830326807577, 8);
  sqcRYGate(q, 2.928857008520278, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7376209375026805, 8);
  sqcRYGate(q, -1.2648131565493197, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.989025362618937, 10);
  sqcRYGate(q, -2.09400189375911, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2743329392621252, 10);
  sqcRYGate(q, -2.0317491301282624, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.6326820813371166, 0);
  sqcRYGate(q, -0.12710891650739398, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2809133863094733, 0);
  sqcRYGate(q, 0.5849318109793404, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9436510623982568, 2);
  sqcRYGate(q, 1.7183227041021867, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.877475049827221, 2);
  sqcRYGate(q, 3.129160041522262, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.63006243573368, 4);
  sqcRYGate(q, -0.4328500472463208, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1405627111222825, 4);
  sqcRYGate(q, -0.10050615512875094, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.812422042477472, 6);
  sqcRYGate(q, 0.4587259507897956, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.8323191391388343, 6);
  sqcRYGate(q, -8.165896774325887e-05, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.8791196797413394, 8);
  sqcRYGate(q, -3.033964824509564, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.33226161158691, 8);
  sqcRYGate(q, 1.4714850536703246, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.8878957703448416, 1);
  sqcRYGate(q, 3.00339064893061, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.550868747725935, 1);
  sqcRYGate(q, -2.751636540484403, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5068158016430313, 3);
  sqcRYGate(q, 2.3655298694093196, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.0018749671838059444, 3);
  sqcRYGate(q, 3.140816636309357, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8434240365128218, 5);
  sqcRYGate(q, 1.4299061021731498, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1390178853542587, 5);
  sqcRYGate(q, -1.3881866409737915, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.829487783753137, 7);
  sqcRYGate(q, -1.7844343984548647, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.5480084144689847, 7);
  sqcRYGate(q, 3.13836573970912, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.758153858620692, 9);
  sqcRYGate(q, 2.2723576770377147, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.345568855650282, 9);
  sqcRYGate(q, -0.7244808849038218, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.7086754249227651, 0);
  sqcRYGate(q, 0.9883681201846197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.413482855532099, 0);
  sqcRYGate(q, 2.9656228666044506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08643488822079526, 2);
  sqcRYGate(q, 2.5310058723906645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.128183361854129, 2);
  sqcRYGate(q, -1.037025909400317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.977338376905777, 4);
  sqcRYGate(q, -1.8664812599208354, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5756874535992909, 4);
  sqcRYGate(q, -0.22073555307357842, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.18297539619528044, 6);
  sqcRYGate(q, 0.38176969314678816, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.140134078970322, 6);
  sqcRYGate(q, 1.573059185550369, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.33940389585915653, 8);
  sqcRYGate(q, -1.5033143944575913, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.8440966787262916, 8);
  sqcRYGate(q, -0.37656179374310833, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.3344317334670985, 10);
  sqcRYGate(q, -1.7001459846630458, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.4651763235508217, 10);
  sqcRYGate(q, -0.14607502662657534, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.4838830981737728, 0);
  sqcRYGate(q, 1.3265229986047036, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6699591899859492, 0);
  sqcRYGate(q, 2.5820439833191537, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1509367374809636, 2);
  sqcRYGate(q, 3.1108633212970016, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.010526719007102331, 2);
  sqcRYGate(q, -0.5240395911548426, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.360710202823995, 4);
  sqcRYGate(q, 1.5722911905563184, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5628849670888998, 4);
  sqcRYGate(q, 1.571775693625188, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.6633060376275726, 6);
  sqcRYGate(q, -0.61672052978592, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.140898144089594, 6);
  sqcRYGate(q, 3.141586550370404, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.6405259623530553, 8);
  sqcRYGate(q, -2.8261230512520776, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.397185740004347, 8);
  sqcRYGate(q, -1.4689786030520045, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.368280684287628, 1);
  sqcRYGate(q, 1.4831944875119671, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.206143594994202, 1);
  sqcRYGate(q, -0.9752702557582767, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.08787120680532612, 3);
  sqcRYGate(q, -0.9624770223989252, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.130229018547507, 3);
  sqcRYGate(q, 0.8723419077646218, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.2008531606990902, 5);
  sqcRYGate(q, -1.2841859846272092, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1403383399081335, 5);
  sqcRYGate(q, 0.029754581718091977, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5663027816923458, 7);
  sqcRYGate(q, -2.04456834207375, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.8654002241059269, 7);
  sqcRYGate(q, -3.1337278478549475, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.937881764231478, 9);
  sqcRYGate(q, -0.005566128417846982, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.5792855992812722, 9);
  sqcRYGate(q, -1.9607039277216296, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.5659009962524006, 0);
  sqcRYGate(q, -1.379501477726937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.084654094692016, 0);
  sqcRYGate(q, -1.645485994624845, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.420005548530129, 2);
  sqcRYGate(q, 2.6949240895894877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6078718858079694, 2);
  sqcRYGate(q, -1.4896497102349726, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5699830737542646, 4);
  sqcRYGate(q, 3.106412717670567, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -9.489847126875615e-05, 4);
  sqcRYGate(q, -2.135734457198743, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8936702876471516, 6);
  sqcRYGate(q, 0.2501067685517304, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2443832088555258, 6);
  sqcRYGate(q, -3.10229571683525, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.023778744743045, 8);
  sqcRYGate(q, -1.6120388405399704, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8264218769842209, 8);
  sqcRYGate(q, -0.6699475982952272, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.622348714249106, 10);
  sqcRYGate(q, 1.2185933923028736, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0119266462450964, 10);
  sqcRYGate(q, 0.36889566233327464, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.4985031361147088, 0);
  sqcRYGate(q, 0.5939746582290882, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8141810162519785, 0);
  sqcRYGate(q, -1.486825485786425, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4293898663184033, 2);
  sqcRYGate(q, 1.5055193358942234, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.0038342866162756474, 2);
  sqcRYGate(q, 3.14133242491944, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.0762927682761614, 4);
  sqcRYGate(q, 0.7507724722051591, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5739006476121287, 4);
  sqcRYGate(q, -1.5720852302091681, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.660000833628108, 6);
  sqcRYGate(q, 0.8124499494097774, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0782856473127813, 6);
  sqcRYGate(q, 3.101287251277828, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.4834586725802967, 8);
  sqcRYGate(q, 2.0247533360871, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.8199339018777954, 8);
  sqcRYGate(q, -2.2405140358419526, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.9312270492285881, 1);
  sqcRYGate(q, -2.5633398201259454, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5582681216929861, 1);
  sqcRYGate(q, -2.600137310682708, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.023631380292112, 3);
  sqcRYGate(q, -0.3616923310125255, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.009842507190227157, 3);
  sqcRYGate(q, -2.9664402852380527, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.2510071437345314, 5);
  sqcRYGate(q, -2.9886596077859506, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.6933103434669823, 5);
  sqcRYGate(q, 3.1388832985858954, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.26712793858146017, 7);
  sqcRYGate(q, 2.7011559740987647, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.00609525567130742, 7);
  sqcRYGate(q, -0.004319007547388232, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.583900548967224, 9);
  sqcRYGate(q, 0.32588698976032493, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.6197349167319341, 9);
  sqcRYGate(q, 2.0184912215346653, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.1390718838542573, 0);
  sqcRYGate(q, -1.5310957193099421, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5606893612312325, 0);
  sqcRYGate(q, 2.389004692808754, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6512758240808685, 2);
  sqcRYGate(q, 2.5795879517145273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2498419649332586, 2);
  sqcRYGate(q, 0.5383843452911985, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2129260062135736, 4);
  sqcRYGate(q, -0.6281051947452784, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0848737864585525, 4);
  sqcRYGate(q, 0.5849003395125232, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3638604748168477, 6);
  sqcRYGate(q, 2.7486834317578364, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.004343200367379663, 6);
  sqcRYGate(q, -0.13183085419885288, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.074992448183025, 8);
  sqcRYGate(q, -1.5761978859236991, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.844077246518078, 8);
  sqcRYGate(q, -1.9031480900544304, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0509475759258453, 10);
  sqcRYGate(q, 2.5467501053826154, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.3282779208033041, 10);
  sqcRYGate(q, -0.7559957763903656, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.8892375733821136, 0);
  sqcRYGate(q, -0.5465325479607777, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3934874161264021, 0);
  sqcRYGate(q, -2.357755772247875, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8963104741824298, 2);
  sqcRYGate(q, 1.1562896123103406, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.1045191285762006, 2);
  sqcRYGate(q, 3.0924358247343076, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.0021623863806622045, 4);
  sqcRYGate(q, -1.7243863515476336, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.059252061685478, 4);
  sqcRYGate(q, -0.002162544772144429, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.916425132030475, 6);
  sqcRYGate(q, 2.902353579977519, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.05434210421456877, 6);
  sqcRYGate(q, 3.113427462189519, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.3559329369183504, 8);
  sqcRYGate(q, -0.5436885334091004, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.130328664103911, 8);
  sqcRYGate(q, -3.1306972110260487, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.5458769252793827, 1);
  sqcRYGate(q, 2.1430485425712216, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0013606148437066, 1);
  sqcRYGate(q, -2.219647457447511, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.477452042665127, 3);
  sqcRYGate(q, -0.35444993258676405, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.1087863273913476, 3);
  sqcRYGate(q, 0.06567793378629005, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7144200005489392, 5);
  sqcRYGate(q, 1.7041020292632474, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.6113538658096882, 5);
  sqcRYGate(q, -3.135415952521311, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.1766304238196326, 7);
  sqcRYGate(q, -3.1023805446176684, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.1295288108042856, 7);
  sqcRYGate(q, 0.01826624876727223, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.3124073586168943, 9);
  sqcRYGate(q, 0.6799927644441821, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.14261725658957225, 9);
  sqcRYGate(q, 0.13172452256995104, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.39353700408721376, 0);
  sqcRYGate(q, 0.11839281252268474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6383517127638916, 0);
  sqcRYGate(q, 1.0631876803579123, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5895692256156613, 2);
  sqcRYGate(q, 0.26054955999368623, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6542506086109832, 2);
  sqcRYGate(q, 2.0520042434202517, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.249358272613085, 4);
  sqcRYGate(q, -1.8059829877027485, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0715528415568776, 4);
  sqcRYGate(q, -2.243660795625439, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4339149605790413, 6);
  sqcRYGate(q, -2.503152839520979, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1268855581177935, 6);
  sqcRYGate(q, 0.5531201891994382, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8926740339246475, 8);
  sqcRYGate(q, -2.641276362626905, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.137250091684531, 8);
  sqcRYGate(q, -1.561204473367805, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.805215184917761, 10);
  sqcRYGate(q, -2.2903681391012554, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.9023220538917087, 10);
  sqcRYGate(q, 1.377670018629526, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0148533988250397, 0);
  sqcRYGate(q, -1.3158849677858175, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.87310361229655, 0);
  sqcRYGate(q, 1.4376060781720046, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2679145388787956, 2);
  sqcRYGate(q, 0.6118596032913336, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1090096702687795, 2);
  sqcRYGate(q, -0.4986376702201697, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.158605612744366, 4);
  sqcRYGate(q, 0.043440646820463336, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1324676040461044, 4);
  sqcRYGate(q, 3.1375260737262347, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.0805011086470354, 6);
  sqcRYGate(q, 1.0338473235962269, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.0411256728844758, 6);
  sqcRYGate(q, 3.1380730160731156, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.9116943120122141, 8);
  sqcRYGate(q, 1.3901130260308299, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.8886605748607117, 8);
  sqcRYGate(q, -0.06684362751087569, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.4361523752928642, 1);
  sqcRYGate(q, -1.5951780400599134, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0510269006706277, 1);
  sqcRYGate(q, 2.2593478016107413, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.934302207022958, 3);
  sqcRYGate(q, -1.925758190235317, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1398458667168843, 3);
  sqcRYGate(q, -2.18858543727763, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.694114537377341, 5);
  sqcRYGate(q, 3.137899555788025, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.139030453861127, 5);
  sqcRYGate(q, 3.1343237138090143, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.397977151980819, 7);
  sqcRYGate(q, 1.5417980498885462, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.1294557762823474, 7);
  sqcRYGate(q, 3.138006657518941, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.0209974678398972, 9);
  sqcRYGate(q, 2.0784321122515275, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.8130070636086497, 9);
  sqcRYGate(q, -2.4244043012489294, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.1161305219466318, 0);
  sqcRYGate(q, 0.7606151644858681, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.865711367982092, 0);
  sqcRYGate(q, -2.038481974996202, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.029229274090686097, 2);
  sqcRYGate(q, 2.3950375335164837, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.074276681585239, 2);
  sqcRYGate(q, -0.952314669953256, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.30294032170976, 4);
  sqcRYGate(q, -1.123775686565613, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1312440467487472, 4);
  sqcRYGate(q, -2.955146056238104, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.765928797488284, 6);
  sqcRYGate(q, -2.26166096090439, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.121575577321202, 6);
  sqcRYGate(q, 2.514691120761439, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9307427976410825, 8);
  sqcRYGate(q, 2.121634717943068, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9887101610517353, 8);
  sqcRYGate(q, 1.5212472149757787, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.4747297612402871, 10);
  sqcRYGate(q, 0.203212972452876, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.8982234468462207, 10);
  sqcRYGate(q, -0.25356999440750905, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5950880049314704, 0);
  sqcRYGate(q, 1.5224448321033959, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1015182840744906, 0);
  sqcRYGate(q, -3.118919369511473, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7497143318005863, 2);
  sqcRYGate(q, 1.1986631050982328, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.025457004800268912, 2);
  sqcRYGate(q, -2.400473825404673, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.8791715044122652, 4);
  sqcRYGate(q, -0.6140931531548821, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.9795366516143202, 4);
  sqcRYGate(q, 0.0001280590320744679, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.578434322635414, 6);
  sqcRYGate(q, -2.0797113940098084, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.1137193799533365, 6);
  sqcRYGate(q, -1.2818847561378028, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.4717612219184723, 8);
  sqcRYGate(q, 0.49508291370729207, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.095643557817084, 8);
  sqcRYGate(q, 2.7063512000659107, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.4671846509115687, 1);
  sqcRYGate(q, 2.3850363224407056, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.087747546022301, 1);
  sqcRYGate(q, -3.123276377256154, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.627582701977109, 3);
  sqcRYGate(q, -2.6801314228605406, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.1380455955254023, 3);
  sqcRYGate(q, -2.2416088689380897, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7460340019655272, 5);
  sqcRYGate(q, -0.5583039152133861, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.8719816456137788, 5);
  sqcRYGate(q, 1.7100047628185369, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.58447143503288, 7);
  sqcRYGate(q, -1.3326675569756499, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.05278411109273889, 7);
  sqcRYGate(q, -0.14100999112463802, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.6041891339985749, 9);
  sqcRYGate(q, -2.5614957982698523, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.74610971755217, 9);
  sqcRYGate(q, 2.827430766668543, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.005470074929517927, 0);
  sqcRYGate(q, -2.7602066799175837, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0505604115190839, 0);
  sqcRYGate(q, 1.6282081733931573, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7407495313948864, 2);
  sqcRYGate(q, 0.3075784540132734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.011318561129776, 2);
  sqcRYGate(q, 2.914457882030236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9477829536941007, 4);
  sqcRYGate(q, 1.0279677258582431, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6838664907551077, 4);
  sqcRYGate(q, 0.39557082789676024, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5699227349898788, 6);
  sqcRYGate(q, -0.8901276076925757, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.524614966411027, 6);
  sqcRYGate(q, 2.07088726358085, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2169410515610162, 8);
  sqcRYGate(q, 2.165425410416505, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.07086309010605431, 8);
  sqcRYGate(q, 0.18198945045161366, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.22551060749182755, 10);
  sqcRYGate(q, -2.4252741850064967, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0515970014492724, 10);
  sqcRYGate(q, 0.15904255770993103, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.2120021047713339, 0);
  sqcRYGate(q, -1.8031515184931286, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3876433858447414, 0);
  sqcRYGate(q, 2.97634484151306, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1073169698230938, 2);
  sqcRYGate(q, -1.2843864144245787, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.12860205640172787, 2);
  sqcRYGate(q, -0.11806753534687217, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1823065698833801, 4);
  sqcRYGate(q, -0.10458450790094798, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.001679677778184896, 4);
  sqcRYGate(q, -0.00013568813883969548, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5992063916793473, 6);
  sqcRYGate(q, 0.18316335766186675, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.00044049870636244515, 6);
  sqcRYGate(q, 3.13949510397669, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.10621299547520291, 8);
  sqcRYGate(q, -2.760374609027414, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.1531840016137869, 8);
  sqcRYGate(q, -0.42184040511765364, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.23981222528933, 1);
  sqcRYGate(q, 3.099346852300184, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0734428125536004, 1);
  sqcRYGate(q, -3.0949146341226292, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3230399718009287, 3);
  sqcRYGate(q, 2.1205261040797465, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.004762063312804951, 3);
  sqcRYGate(q, 3.1137495759990346, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.5432477057417744, 5);
  sqcRYGate(q, -1.1602075166166381, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.07052589026105771, 5);
  sqcRYGate(q, -0.010411455020274296, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.738663459327374, 7);
  sqcRYGate(q, -0.7276501139448821, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.010298212770903049, 7);
  sqcRYGate(q, 0.007839886105466043, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.5729955512308393, 9);
  sqcRYGate(q, 1.4383320414821874, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.065753916933081, 9);
  sqcRYGate(q, 2.81528101728249, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.670660908796888, 0);
  sqcRYGate(q, 2.196037655421427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3945151963772378, 0);
  sqcRYGate(q, 1.2593037919785695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.934295127529446, 2);
  sqcRYGate(q, -2.0723423210473477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8062564961949243, 2);
  sqcRYGate(q, 2.4215939780781928, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.21260316500515586, 4);
  sqcRYGate(q, -3.1303427069804926, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.027796050063032096, 4);
  sqcRYGate(q, 2.686690028268883, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6074173280389235, 6);
  sqcRYGate(q, -1.7662989961898452, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0252549291449249, 6);
  sqcRYGate(q, 2.6112396017167434, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.38374027810865297, 8);
  sqcRYGate(q, 0.9624275811938912, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7107469195378685, 8);
  sqcRYGate(q, -2.2264958166966218, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.94041940855067, 10);
  sqcRYGate(q, 2.2686644980939885, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.950212232915447, 10);
  sqcRYGate(q, -0.28629631799107885, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6180871973766751, 0);
  sqcRYGate(q, 1.8657035181843593, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.015165523498423815, 0);
  sqcRYGate(q, -1.4055545796638977, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2772798175582383, 2);
  sqcRYGate(q, 1.2934817129894887, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.09096650689409103, 2);
  sqcRYGate(q, -1.663922646097304, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.3710911567654565, 4);
  sqcRYGate(q, -2.3791989313805373, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.126494028343646, 4);
  sqcRYGate(q, 3.128966816448781, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.21837303850768167, 6);
  sqcRYGate(q, -1.6491386063848161, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.6190235845199323, 6);
  sqcRYGate(q, -2.2611209313931107, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.98081689705505, 8);
  sqcRYGate(q, 0.06854664345065671, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.1297573192535157, 8);
  sqcRYGate(q, 0.019803078224796877, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.3393022199247966, 1);
  sqcRYGate(q, -0.9270754127420799, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.02187593824579941, 1);
  sqcRYGate(q, 0.05771212256701983, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4404216086891344, 3);
  sqcRYGate(q, -2.3506154929963583, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.0010373345064959114, 3);
  sqcRYGate(q, 0.0013678861350458103, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.2108813095532995, 5);
  sqcRYGate(q, -1.8461695680911794, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5861739721924759, 5);
  sqcRYGate(q, -0.03455925238036674, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.07960239275490631, 7);
  sqcRYGate(q, 1.4383040814462584, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.548247818106334, 7);
  sqcRYGate(q, -1.5617139673203748, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.05514903336939181, 9);
  sqcRYGate(q, 0.9102387005585975, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.6321926694766933, 9);
  sqcRYGate(q, -0.06751477626987588, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.180558717125038, 0);
  sqcRYGate(q, 0.8078267860376238, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.598923282622829, 0);
  sqcRYGate(q, 1.0625100067983801, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8999058427416102, 2);
  sqcRYGate(q, 3.0053986848084486, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9822508862557613, 2);
  sqcRYGate(q, 0.6250088224593071, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.578889667577759, 4);
  sqcRYGate(q, -0.41127294553196236, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.02601402321476254, 4);
  sqcRYGate(q, -0.01820068533681684, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.903131009807968, 6);
  sqcRYGate(q, -0.13793490009728154, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.753048396375402, 6);
  sqcRYGate(q, 1.6676796708157888, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0477823460868305, 8);
  sqcRYGate(q, -0.0950955762273383, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.333012770720317, 8);
  sqcRYGate(q, -1.5418361400089449, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.748693797592792, 10);
  sqcRYGate(q, 1.6196544754799778, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5325472528226918, 10);
  sqcRYGate(q, 3.109721668241815, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.5945266299599834, 0);
  sqcRYGate(q, 2.7440513181468136, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1238172759056937, 0);
  sqcRYGate(q, -3.138691376659391, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.03989647357616328, 2);
  sqcRYGate(q, 0.3689853933306646, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.114084428371515, 2);
  sqcRYGate(q, -3.13158930838914, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.368804332872104, 4);
  sqcRYGate(q, -0.1881720988910559, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.0014237661605488354, 4);
  sqcRYGate(q, 3.140404275170975, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.6205192439978622, 6);
  sqcRYGate(q, 1.649185073894004, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.35684153070092156, 6);
  sqcRYGate(q, -1.6114739016898465, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.0435630385599, 8);
  sqcRYGate(q, 0.46691821276891865, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.12454063668117353, 8);
  sqcRYGate(q, -1.6733441564729787, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.1319111960069572, 1);
  sqcRYGate(q, 1.802914391720659, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.132166240579833, 1);
  sqcRYGate(q, -0.027256743719198527, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3838847227329036, 3);
  sqcRYGate(q, -0.37542781982870466, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.001484717063545915, 3);
  sqcRYGate(q, -3.1346637547496017, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.059009487356665, 5);
  sqcRYGate(q, 0.8826870452434341, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.0011174798909081782, 5);
  sqcRYGate(q, -3.141203027041234, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.057380665891606, 7);
  sqcRYGate(q, 1.5656661611747413, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.4668570956280584, 7);
  sqcRYGate(q, -1.495048509468775, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.110905757861233, 9);
  sqcRYGate(q, 1.5099700863775922, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.042280698912084, 9);
  sqcRYGate(q, 1.4723460847242666, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.9560891773680952, 0);
  sqcRYGate(q, 1.7286800715905342, 1);
  sqcRYGate(q, -2.0884824977133176, 2);
  sqcRYGate(q, 0.43847934602809147, 3);
  sqcRYGate(q, -2.183714900565726, 4);
  sqcRYGate(q, 1.5912162456458203, 5);
  sqcRYGate(q, 1.0595312172524134, 6);
  sqcRYGate(q, -2.1433243713787693, 7);
  sqcRYGate(q, 0.9787732558265372, 8);
  sqcRYGate(q, -2.1634671752422494, 9);
  sqcRYGate(q, 1.89751236697295, 10);
  sqcRYGate(q, 2.36615080258571, 11);

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
