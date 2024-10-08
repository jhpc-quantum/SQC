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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 1.6304125563950704, 0);
  sqcRZGate(q, 1.4243748352266443, 0);
  sqcRYGate(q, 0.005988167221916659, 1);
  sqcRZGate(q, 2.250995405670327, 1);
  sqcRYGate(q, 0.028103323685962245, 2);
  sqcRZGate(q, 1.1715196522461993, 2);
  sqcRYGate(q, -0.7529058786249285, 3);
  sqcRZGate(q, -0.5457404434693212, 3);
  sqcRYGate(q, 0.0001571775990980148, 4);
  sqcRZGate(q, -2.5726147916017705, 4);
  sqcRYGate(q, -3.141352239047364, 5);
  sqcRZGate(q, 2.430359140141892, 5);
  sqcRYGate(q, 1.5751273138056558, 6);
  sqcRZGate(q, 2.2681025691300953, 6);
  sqcRYGate(q, -2.9893826195305375, 7);
  sqcRZGate(q, -0.053925530798561105, 7);
  sqcRYGate(q, -1.5740617376798434, 8);
  sqcRZGate(q, -1.5701035439356703, 8);
  sqcRYGate(q, -2.197951065269443, 9);
  sqcRZGate(q, 2.043116549018359, 9);
  sqcRYGate(q, 1.571004299448173, 10);
  sqcRZGate(q, 1.2224001982510169, 10);
  sqcRYGate(q, -0.716416068894544, 11);
  sqcRZGate(q, 1.556575416031211, 11);
  sqcRYGate(q, 0.06384036062153196, 12);
  sqcRZGate(q, -3.0151206253860097, 12);
  sqcRYGate(q, -1.9064937834595852, 13);
  sqcRZGate(q, -1.6783556770461505, 13);
  sqcRYGate(q, 3.14114890152431, 14);
  sqcRZGate(q, -1.334478082015693, 14);
  sqcRYGate(q, 0.581574582173046, 15);
  sqcRZGate(q, 0.17087910773571832, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.9954201393826825, 0);
  sqcRZGate(q, 1.3903329537301996, 0);
  sqcRYGate(q, 1.5734090842843977, 1);
  sqcRZGate(q, 1.5584742193722532, 1);
  sqcRYGate(q, -1.5794584282890076, 2);
  sqcRZGate(q, -0.7038433895367269, 2);
  sqcRYGate(q, -1.8362310441272598, 3);
  sqcRZGate(q, -1.9184937317785247, 3);
  sqcRYGate(q, 1.555611729671804, 4);
  sqcRZGate(q, 2.3899028633898842, 4);
  sqcRYGate(q, 1.5685868002127392, 5);
  sqcRZGate(q, 0.6056643659969215, 5);
  sqcRYGate(q, -3.137677138021714, 6);
  sqcRZGate(q, -2.444672336130215, 6);
  sqcRYGate(q, -1.2662634709595744, 7);
  sqcRZGate(q, 2.708303126299059, 7);
  sqcRYGate(q, 2.015487177080082, 8);
  sqcRZGate(q, 1.0777557617593139, 8);
  sqcRYGate(q, 2.4327577232938244, 9);
  sqcRZGate(q, 2.3110932132209117, 9);
  sqcRYGate(q, -3.14075007170806, 10);
  sqcRZGate(q, -1.9728853894055085, 10);
  sqcRYGate(q, 1.60587225542732, 11);
  sqcRZGate(q, -1.5710077735618384, 11);
  sqcRYGate(q, -2.135905536546735, 12);
  sqcRZGate(q, 0.10781608481796623, 12);
  sqcRYGate(q, 1.739435951443195, 13);
  sqcRZGate(q, 0.7353589786741859, 13);
  sqcRYGate(q, 1.537566606508629, 14);
  sqcRZGate(q, -2.3646346191375804, 14);
  sqcRYGate(q, -2.3657247401504806, 15);
  sqcRZGate(q, 0.6433257077183656, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.007815959243438364, 0);
  sqcRZGate(q, 2.981171605481339, 0);
  sqcRYGate(q, -0.17566074761319062, 1);
  sqcRZGate(q, 1.5765823015172362, 1);
  sqcRYGate(q, 3.1413449437155982, 2);
  sqcRZGate(q, -2.2640363847646148, 2);
  sqcRYGate(q, -2.2763698182301626, 3);
  sqcRZGate(q, 1.7450268235394784, 3);
  sqcRYGate(q, -0.00017579982765170143, 4);
  sqcRZGate(q, 2.289728679925941, 4);
  sqcRYGate(q, 3.1410606843577265, 5);
  sqcRZGate(q, 0.17963554170206636, 5);
  sqcRYGate(q, 1.537474285627611, 6);
  sqcRZGate(q, -0.02299815028286485, 6);
  sqcRYGate(q, 0.21369684197841435, 7);
  sqcRZGate(q, -2.662350560554099, 7);
  sqcRYGate(q, 3.141098104218062, 8);
  sqcRZGate(q, -2.055174240103258, 8);
  sqcRYGate(q, 1.9965085815158155, 9);
  sqcRZGate(q, 3.0291173150752244, 9);
  sqcRYGate(q, 1.604323032890848, 10);
  sqcRZGate(q, 3.140372565617019, 10);
  sqcRYGate(q, -1.5508104740464654, 11);
  sqcRZGate(q, -1.6444090067076593, 11);
  sqcRYGate(q, 9.798002745826858e-06, 12);
  sqcRZGate(q, -0.09448349812304269, 12);
  sqcRYGate(q, 0.0019280771834635712, 13);
  sqcRZGate(q, 3.127958694179542, 13);
  sqcRYGate(q, -0.0028933263178611687, 14);
  sqcRZGate(q, -1.6181281821821658, 14);
  sqcRYGate(q, -1.2324745307794158, 15);
  sqcRZGate(q, -1.248250427192527, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.4084474729397478, 0);
  sqcRZGate(q, 2.2426852362270915, 0);
  sqcRYGate(q, -1.5837691803178648, 1);
  sqcRZGate(q, 2.8391678317257347, 1);
  sqcRYGate(q, -1.7303758935971634, 2);
  sqcRZGate(q, 3.133693683996029, 2);
  sqcRYGate(q, 0.2613558934278508, 3);
  sqcRZGate(q, 0.5715589194744722, 3);
  sqcRYGate(q, -0.7957845111380378, 4);
  sqcRZGate(q, -1.698541130433198, 4);
  sqcRYGate(q, -0.8893610077311305, 5);
  sqcRZGate(q, 1.6671486298869045, 5);
  sqcRYGate(q, -0.6109805719695683, 6);
  sqcRZGate(q, -1.5297695787108063, 6);
  sqcRYGate(q, -3.1314836898202554, 7);
  sqcRZGate(q, 1.1305581689386497, 7);
  sqcRYGate(q, 0.3908657642063851, 8);
  sqcRZGate(q, -0.4451135633763714, 8);
  sqcRYGate(q, -0.006889727207099128, 9);
  sqcRZGate(q, -1.9580272439264537, 9);
  sqcRYGate(q, -2.10673523034602, 10);
  sqcRZGate(q, 1.9467813260033489, 10);
  sqcRYGate(q, 1.6272902026694671, 11);
  sqcRZGate(q, -1.4295010713014447, 11);
  sqcRYGate(q, 1.5369294523356196, 12);
  sqcRZGate(q, 1.5537388364377394, 12);
  sqcRYGate(q, -1.6355122952873429, 13);
  sqcRZGate(q, -0.1478233201517105, 13);
  sqcRYGate(q, -0.0777893956469384, 14);
  sqcRZGate(q, -0.12028310229200745, 14);
  sqcRYGate(q, -0.5783192794039843, 15);
  sqcRZGate(q, 0.657911967582236, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.067403895193707, 0);
  sqcRZGate(q, -2.7122390014202784, 0);
  sqcRYGate(q, 3.081004163536124, 1);
  sqcRZGate(q, -0.07648054319995863, 1);
  sqcRYGate(q, -0.19146234649248317, 2);
  sqcRZGate(q, -2.9724136716847696, 2);
  sqcRYGate(q, -0.5913668195669256, 3);
  sqcRZGate(q, 0.7978370687858187, 3);
  sqcRYGate(q, 0.0002174033569697053, 4);
  sqcRZGate(q, 1.722524877316268, 4);
  sqcRYGate(q, 0.01960720642187633, 5);
  sqcRZGate(q, 0.10720475099728771, 5);
  sqcRYGate(q, 0.0006547317557303965, 6);
  sqcRZGate(q, 1.558066294349237, 6);
  sqcRYGate(q, -3.0520921375731573, 7);
  sqcRZGate(q, 2.5963582915097128, 7);
  sqcRYGate(q, 0.0014012969855661099, 8);
  sqcRZGate(q, -2.7044304098332117, 8);
  sqcRYGate(q, 1.252194031127499, 9);
  sqcRZGate(q, -3.123519287034677, 9);
  sqcRYGate(q, -0.0002623497113601692, 10);
  sqcRZGate(q, 1.6430654198182237, 10);
  sqcRYGate(q, 3.066166952426805, 11);
  sqcRZGate(q, -2.569950299293387, 11);
  sqcRYGate(q, -3.0993352560726173, 12);
  sqcRZGate(q, 3.073096704772996, 12);
  sqcRYGate(q, 1.5034413370316677, 13);
  sqcRZGate(q, 0.750307896640682, 13);
  sqcRYGate(q, -0.026188921275103635, 14);
  sqcRZGate(q, 2.0088140837275823, 14);
  sqcRYGate(q, -0.46679348328258674, 15);
  sqcRZGate(q, 0.7494185435284714, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.195340783502844, 0);
  sqcRZGate(q, 0.6726212610609628, 0);
  sqcRYGate(q, 3.1269025468059635, 1);
  sqcRZGate(q, 3.0082750123143627, 1);
  sqcRYGate(q, 3.125489566925245, 2);
  sqcRZGate(q, 0.11833506272539739, 2);
  sqcRYGate(q, 2.0910600289841685, 3);
  sqcRZGate(q, 0.1545344552331347, 3);
  sqcRYGate(q, 0.36199485693529176, 4);
  sqcRZGate(q, -3.1249602121271005, 4);
  sqcRYGate(q, -1.8007448889891802, 5);
  sqcRZGate(q, 0.6290105686116891, 5);
  sqcRYGate(q, -2.172892014328653, 6);
  sqcRZGate(q, -0.7195691842781189, 6);
  sqcRYGate(q, -1.5698122475376115, 7);
  sqcRZGate(q, 2.9238593773553205, 7);
  sqcRYGate(q, 0.44546631166582795, 8);
  sqcRZGate(q, -3.1414638243261965, 8);
  sqcRYGate(q, -1.6464548075385157, 9);
  sqcRZGate(q, 3.1324842356703093, 9);
  sqcRYGate(q, 3.1403320649804916, 10);
  sqcRZGate(q, -0.7704466699415393, 10);
  sqcRYGate(q, 1.5710526399908087, 11);
  sqcRZGate(q, -0.4940204090321995, 11);
  sqcRYGate(q, -0.03995750396881848, 12);
  sqcRZGate(q, -3.1111165275988744, 12);
  sqcRYGate(q, 1.4955939039540747, 13);
  sqcRZGate(q, 1.519832639561141, 13);
  sqcRYGate(q, -1.5714900796552997, 14);
  sqcRZGate(q, 3.1371754198280133, 14);
  sqcRYGate(q, -3.1223442383509736, 15);
  sqcRZGate(q, -2.176608817382643, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.5856154218326752, 0);
  sqcRZGate(q, -2.8759563931017555, 0);
  sqcRYGate(q, -1.6022416437554685, 1);
  sqcRZGate(q, -1.3539893424846134, 1);
  sqcRYGate(q, -3.0798251956681386, 2);
  sqcRZGate(q, 3.0970514818825636, 2);
  sqcRYGate(q, -0.32419552664616397, 3);
  sqcRZGate(q, -0.10146627390783441, 3);
  sqcRYGate(q, -2.5565645551399654, 4);
  sqcRZGate(q, -3.124068639595129, 4);
  sqcRYGate(q, 1.568941462078973, 5);
  sqcRZGate(q, -0.0895431000290079, 5);
  sqcRYGate(q, 0.0031074280482333294, 6);
  sqcRZGate(q, -2.4111723250077017, 6);
  sqcRYGate(q, 0.010977491357566649, 7);
  sqcRZGate(q, -1.228336375233562, 7);
  sqcRYGate(q, -1.5721765033442254, 8);
  sqcRZGate(q, 6.219010850742413e-06, 8);
  sqcRYGate(q, 1.8061100959252556, 9);
  sqcRZGate(q, 3.139210487530982, 9);
  sqcRYGate(q, 0.0003475433114246783, 10);
  sqcRZGate(q, -1.9228891114617084, 10);
  sqcRYGate(q, 0.06062792513770349, 11);
  sqcRZGate(q, -1.29938290028743, 11);
  sqcRYGate(q, 0.04019645089993883, 12);
  sqcRZGate(q, 1.6185988625792058, 12);
  sqcRYGate(q, 1.5712591366995612, 13);
  sqcRZGate(q, 1.574225641587673, 13);
  sqcRYGate(q, -0.18005552326837204, 14);
  sqcRZGate(q, 0.0040204737143813216, 14);
  sqcRYGate(q, 3.1329688807616596, 15);
  sqcRZGate(q, 2.7119164654805092, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.6258341310218316, 0);
  sqcRZGate(q, 0.03532487670049548, 0);
  sqcRYGate(q, -2.9901582726928506, 1);
  sqcRZGate(q, 0.8578017952505038, 1);
  sqcRYGate(q, -1.6034436818453193, 2);
  sqcRZGate(q, 3.1414076195141205, 2);
  sqcRYGate(q, -1.5292388975245963, 3);
  sqcRZGate(q, 0.043624639618918847, 3);
  sqcRYGate(q, 1.8018162886762172, 4);
  sqcRZGate(q, -1.4777290979550894, 4);
  sqcRYGate(q, -0.07775216416287978, 5);
  sqcRZGate(q, 3.024293459277626, 5);
  sqcRYGate(q, -3.0870342703988394, 6);
  sqcRZGate(q, -1.1689136303574985, 6);
  sqcRYGate(q, 1.5695447869175025, 7);
  sqcRZGate(q, -0.0005989751701971605, 7);
  sqcRYGate(q, -2.252966978278163, 8);
  sqcRZGate(q, 3.141385525065528, 8);
  sqcRYGate(q, 1.5705119959356124, 9);
  sqcRZGate(q, 1.8111568787183314, 9);
  sqcRYGate(q, -2.2291432124354644, 10);
  sqcRZGate(q, 3.140738035888381, 10);
  sqcRYGate(q, -2.7999171855099405, 11);
  sqcRZGate(q, -2.2105876069878416, 11);
  sqcRYGate(q, -3.141570829793272, 12);
  sqcRZGate(q, -1.5439394486208826, 12);
  sqcRYGate(q, 1.5828432867266469, 13);
  sqcRZGate(q, -2.251777736290421, 13);
  sqcRYGate(q, 1.3754788937595763, 14);
  sqcRZGate(q, 3.0328576834775487, 14);
  sqcRYGate(q, 3.1358701898984296, 15);
  sqcRZGate(q, 0.19867719668181036, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.6178877438865014, 0);
  sqcRZGate(q, 0.9285604900872815, 0);
  sqcRYGate(q, 0.7267019844194351, 1);
  sqcRZGate(q, -2.098072204865324, 1);
  sqcRYGate(q, 1.5447371797461686, 2);
  sqcRZGate(q, 3.130478247861308, 2);
  sqcRYGate(q, 0.011967943396404553, 3);
  sqcRZGate(q, 1.4273859267611693, 3);
  sqcRYGate(q, 0.00010022041264117248, 4);
  sqcRZGate(q, -1.6740723757970668, 4);
  sqcRYGate(q, 3.0980668624911236, 5);
  sqcRZGate(q, 2.9320674738895884, 5);
  sqcRYGate(q, -0.000376233907173548, 6);
  sqcRZGate(q, 1.1634350526031734, 6);
  sqcRYGate(q, 1.5722173267365616, 7);
  sqcRZGate(q, 0.5595496427618956, 7);
  sqcRYGate(q, 1.8110235812594613, 8);
  sqcRZGate(q, 4.5550359575251216e-05, 8);
  sqcRYGate(q, -3.1415413383383206, 9);
  sqcRZGate(q, 0.5465478072290312, 9);
  sqcRYGate(q, -1.569960255025856, 10);
  sqcRZGate(q, 2.6412170533785067, 10);
  sqcRYGate(q, 3.136185941208142, 11);
  sqcRZGate(q, -2.057792227423046, 11);
  sqcRYGate(q, -1.5717679966145734, 12);
  sqcRZGate(q, -9.490658309907474e-06, 12);
  sqcRYGate(q, -1.5523517313791741, 13);
  sqcRZGate(q, -1.8759436913148546, 13);
  sqcRYGate(q, -3.134334309462055, 14);
  sqcRZGate(q, 1.5339824663673975, 14);
  sqcRYGate(q, -2.189824844975818, 15);
  sqcRZGate(q, 0.3203826402944365, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.1409698262402705, 0);
  sqcRZGate(q, 2.5144690545505837, 0);
  sqcRYGate(q, -1.5682090546328482, 1);
  sqcRZGate(q, -1.4323294765132384, 1);
  sqcRYGate(q, -3.1118880819666113, 2);
  sqcRZGate(q, -1.5818853578690568, 2);
  sqcRYGate(q, -0.0008589331495629793, 3);
  sqcRZGate(q, 0.09964142601990476, 3);
  sqcRYGate(q, -2.2639828748671107, 4);
  sqcRZGate(q, 1.5483987184210495, 4);
  sqcRYGate(q, -1.4924883907491575, 5);
  sqcRZGate(q, -1.5640429385414851, 5);
  sqcRYGate(q, -1.5715904917946721, 6);
  sqcRZGate(q, 1.5707695871410916, 6);
  sqcRYGate(q, 3.1404077741286693, 7);
  sqcRZGate(q, 2.1303396279958475, 7);
  sqcRYGate(q, -1.5710939200194947, 8);
  sqcRZGate(q, -1.5706977482455295, 8);
  sqcRYGate(q, -3.1397002190252827, 9);
  sqcRZGate(q, 0.3061530711041778, 9);
  sqcRYGate(q, 3.141284545767778, 10);
  sqcRZGate(q, 1.0704149229842779, 10);
  sqcRYGate(q, -2.8172347003921336, 11);
  sqcRZGate(q, -1.5711829423906838, 11);
  sqcRYGate(q, 1.5699027226620386, 12);
  sqcRZGate(q, 1.5705473954821059, 12);
  sqcRYGate(q, 0.02794597145318889, 13);
  sqcRZGate(q, -1.1968880158566853, 13);
  sqcRYGate(q, 3.1415236101057236, 14);
  sqcRZGate(q, 0.07287624822532072, 14);
  sqcRYGate(q, -3.1410726598613556, 15);
  sqcRZGate(q, 1.317608902836922, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5676299423923306, 0);
  sqcRZGate(q, -2.448594611125776, 0);
  sqcRYGate(q, 1.6370011515442089, 1);
  sqcRZGate(q, -2.709154123565683, 1);
  sqcRYGate(q, 1.5709303868294038, 2);
  sqcRZGate(q, 2.2725173495227478, 2);
  sqcRYGate(q, 1.5707942079246235, 3);
  sqcRZGate(q, -0.7209512288514732, 3);
  sqcRYGate(q, -1.5706215615728665, 4);
  sqcRZGate(q, -2.446794937476821, 4);
  sqcRYGate(q, 1.570877898881154, 5);
  sqcRZGate(q, 0.8769749608107462, 5);
  sqcRYGate(q, 1.5707888485751746, 6);
  sqcRZGate(q, -0.8765618575347288, 6);
  sqcRYGate(q, -1.5777168788542877, 7);
  sqcRZGate(q, -0.6935159486565966, 7);
  sqcRYGate(q, -1.570783296336356, 8);
  sqcRZGate(q, 0.454236196338762, 8);
  sqcRYGate(q, 1.5682177741357861, 9);
  sqcRZGate(q, -0.6940376322503877, 9);
  sqcRYGate(q, -1.5709898056499547, 10);
  sqcRZGate(q, 2.263778427566865, 10);
  sqcRYGate(q, -1.57088487768545, 11);
  sqcRZGate(q, -0.6932446132824298, 11);
  sqcRYGate(q, 1.5708534089719164, 12);
  sqcRZGate(q, -2.4486253289152136, 12);
  sqcRYGate(q, -1.5706739094112798, 13);
  sqcRZGate(q, 2.4476460905470088, 13);
  sqcRYGate(q, 1.549638420098298, 14);
  sqcRZGate(q, 0.6803556119196164, 14);
  sqcRYGate(q, -2.0956433068575873, 15);
  sqcRZGate(q, -1.8687588649063889, 15);

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
