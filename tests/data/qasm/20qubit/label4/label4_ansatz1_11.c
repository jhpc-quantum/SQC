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

  sqcRYGate(q, 2.365149153662941, 0);
  sqcRZGate(q, -2.991378863636592, 0);
  sqcRYGate(q, -0.7333067305988683, 1);
  sqcRZGate(q, 0.8548290279257937, 1);
  sqcRYGate(q, 0.019948049437306055, 2);
  sqcRZGate(q, 2.257448039026774, 2);
  sqcRYGate(q, 1.4712518748049508, 3);
  sqcRZGate(q, -2.9025935972982975, 3);
  sqcRYGate(q, -1.6342325027678564, 4);
  sqcRZGate(q, -2.2206120075237648, 4);
  sqcRYGate(q, -3.059112381743168, 5);
  sqcRZGate(q, -0.19719110779883842, 5);
  sqcRYGate(q, 2.796585695631418, 6);
  sqcRZGate(q, -3.047259037797987, 6);
  sqcRYGate(q, -0.004401583613213411, 7);
  sqcRZGate(q, 0.24752600075089412, 7);
  sqcRYGate(q, -0.015821145954771687, 8);
  sqcRZGate(q, 0.9472385551489059, 8);
  sqcRYGate(q, 2.9004229798430603, 9);
  sqcRZGate(q, 2.3367726401217386, 9);
  sqcRYGate(q, 0.018575234573528148, 10);
  sqcRZGate(q, 1.6072202086644596, 10);
  sqcRYGate(q, -3.140997978677167, 11);
  sqcRZGate(q, -0.16734700151070075, 11);
  sqcRYGate(q, -0.47784699503686046, 12);
  sqcRZGate(q, 0.45641216394453554, 12);
  sqcRYGate(q, 0.004285818590623097, 13);
  sqcRZGate(q, -2.736621408553443, 13);
  sqcRYGate(q, -1.19655774109237, 14);
  sqcRZGate(q, 1.5175058965060861, 14);
  sqcRYGate(q, 2.4000665745021803, 15);
  sqcRZGate(q, -1.0044218791318336, 15);
  sqcRYGate(q, -0.7555375505729094, 16);
  sqcRZGate(q, 2.746944269298241, 16);
  sqcRYGate(q, -3.031596399914355, 17);
  sqcRZGate(q, -2.495387079357004, 17);
  sqcRYGate(q, 0.9809921917719011, 18);
  sqcRZGate(q, 1.6351724863828059, 18);
  sqcRYGate(q, -0.9305759663857165, 19);
  sqcRZGate(q, 2.3082857452236523, 19);
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
  sqcRYGate(q, -2.5893109430668226, 0);
  sqcRZGate(q, -1.4823117061148858, 0);
  sqcRYGate(q, 1.9012287887040387, 1);
  sqcRZGate(q, -2.487624191316461, 1);
  sqcRYGate(q, -3.0947340658376072, 2);
  sqcRZGate(q, 1.4957533398919065, 2);
  sqcRYGate(q, 0.4473541943390171, 3);
  sqcRZGate(q, 1.6071887340531241, 3);
  sqcRYGate(q, -2.7774731649673514, 4);
  sqcRZGate(q, 0.9474820981694759, 4);
  sqcRYGate(q, 0.25912327610414293, 5);
  sqcRZGate(q, 1.9076296187120603, 5);
  sqcRYGate(q, -0.01325991477928845, 6);
  sqcRZGate(q, 2.5537865578957075, 6);
  sqcRYGate(q, 1.573897428961751, 7);
  sqcRZGate(q, 2.276503924472877, 7);
  sqcRYGate(q, -1.5775577246924224, 8);
  sqcRZGate(q, -1.5538031707646036, 8);
  sqcRYGate(q, 0.14027911108238467, 9);
  sqcRZGate(q, 0.7606945060051382, 9);
  sqcRYGate(q, -1.5188625143675278, 10);
  sqcRZGate(q, 0.03927134065540958, 10);
  sqcRYGate(q, -0.8406239572223382, 11);
  sqcRZGate(q, -2.104542606065986, 11);
  sqcRYGate(q, -0.28253070232113764, 12);
  sqcRZGate(q, 0.5692511705635223, 12);
  sqcRYGate(q, -0.8099318579636519, 13);
  sqcRZGate(q, -2.7415514921918613, 13);
  sqcRYGate(q, -2.455777977195238, 14);
  sqcRZGate(q, -1.9098171270029285, 14);
  sqcRYGate(q, 0.0016333201526439467, 15);
  sqcRZGate(q, -1.3937688031654076, 15);
  sqcRYGate(q, 0.0017587898087541019, 16);
  sqcRZGate(q, 2.240244180982442, 16);
  sqcRYGate(q, 0.0264951942868151, 17);
  sqcRZGate(q, -1.2591749512061359, 17);
  sqcRYGate(q, 0.7830006115187764, 18);
  sqcRZGate(q, -0.15459662451383738, 18);
  sqcRYGate(q, -0.45005893690789406, 19);
  sqcRZGate(q, -0.36525486349470876, 19);
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
  sqcRYGate(q, 0.7351937330372138, 0);
  sqcRZGate(q, -1.2125292472535847, 0);
  sqcRYGate(q, -1.2950114651013012, 1);
  sqcRZGate(q, -1.4093979475085185, 1);
  sqcRYGate(q, -3.132192407828388, 2);
  sqcRZGate(q, 1.683468836418199, 2);
  sqcRYGate(q, -0.49698419718329134, 3);
  sqcRZGate(q, -1.585693864548776, 3);
  sqcRYGate(q, 1.5499768552695672, 4);
  sqcRZGate(q, -0.7881595965820835, 4);
  sqcRYGate(q, 1.5472097458704634, 5);
  sqcRZGate(q, 0.09587748874756574, 5);
  sqcRYGate(q, -1.5706382772578105, 6);
  sqcRZGate(q, 1.5179813856750783, 6);
  sqcRYGate(q, 0.006496859488924282, 7);
  sqcRZGate(q, -0.6354916067522529, 7);
  sqcRYGate(q, 1.6303262679254233, 8);
  sqcRZGate(q, -1.3965632976623592, 8);
  sqcRYGate(q, 3.1411188079686725, 9);
  sqcRZGate(q, -2.1938344843531685, 9);
  sqcRYGate(q, 3.0860909567222494, 10);
  sqcRZGate(q, -3.0891871561756155, 10);
  sqcRYGate(q, 0.022440717571531033, 11);
  sqcRZGate(q, -1.0352956950399221, 11);
  sqcRYGate(q, 0.0012832039958849961, 12);
  sqcRZGate(q, -2.4021293536724033, 12);
  sqcRYGate(q, -1.0461654376763205, 13);
  sqcRZGate(q, -0.044581533876415065, 13);
  sqcRYGate(q, -1.0444984675180988, 14);
  sqcRZGate(q, 1.6613365303039629, 14);
  sqcRYGate(q, 2.3148557469964164, 15);
  sqcRZGate(q, -1.4272877130224426, 15);
  sqcRYGate(q, 1.8200565905069777, 16);
  sqcRZGate(q, -0.7254069780627944, 16);
  sqcRYGate(q, 2.7667932143265928, 17);
  sqcRZGate(q, -2.801193924573803, 17);
  sqcRYGate(q, 2.3651367972808472, 18);
  sqcRZGate(q, -2.373381716851907, 18);
  sqcRYGate(q, -1.2877635161774632, 19);
  sqcRZGate(q, 2.926867519535718, 19);
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
  sqcRYGate(q, -0.3234223642365066, 0);
  sqcRZGate(q, 0.29154648826498075, 0);
  sqcRYGate(q, 2.125541259300026, 1);
  sqcRZGate(q, -0.5604812392732456, 1);
  sqcRYGate(q, -3.130067060837319, 2);
  sqcRZGate(q, -2.908301233618831, 2);
  sqcRYGate(q, 2.7815607653716246, 3);
  sqcRZGate(q, -0.05823788124970708, 3);
  sqcRYGate(q, -2.4492785984481613, 4);
  sqcRZGate(q, 2.1907571840062268, 4);
  sqcRYGate(q, -1.543616154670394, 5);
  sqcRZGate(q, 1.9420548178347374, 5);
  sqcRYGate(q, 3.127917176840761, 6);
  sqcRZGate(q, 3.1081220366150957, 6);
  sqcRYGate(q, 0.5128481360473096, 7);
  sqcRZGate(q, 1.5714778973688324, 7);
  sqcRYGate(q, -1.625093294413464, 8);
  sqcRZGate(q, 2.4513703340025836, 8);
  sqcRYGate(q, -1.5881217543603787, 9);
  sqcRZGate(q, 1.3462292994600322, 9);
  sqcRYGate(q, 1.575852083924045, 10);
  sqcRZGate(q, -1.0601676685682406, 10);
  sqcRYGate(q, 0.8184979198189525, 11);
  sqcRZGate(q, 2.4698236430850846, 11);
  sqcRYGate(q, 1.7825063267187926, 12);
  sqcRZGate(q, -3.0343166632376803, 12);
  sqcRYGate(q, 1.7509821815307305, 13);
  sqcRZGate(q, -0.7367075566474766, 13);
  sqcRYGate(q, 0.1326536008973136, 14);
  sqcRZGate(q, -1.6704446647673414, 14);
  sqcRYGate(q, -1.5737858661198443, 15);
  sqcRZGate(q, -0.34003073015944274, 15);
  sqcRYGate(q, -1.5745837035917543, 16);
  sqcRZGate(q, -0.0047085691740885735, 16);
  sqcRYGate(q, 2.086360754510148, 17);
  sqcRZGate(q, 2.6282701174123657, 17);
  sqcRYGate(q, 1.6516950686031349, 18);
  sqcRZGate(q, -1.5791104563446827, 18);
  sqcRYGate(q, -3.1122840685513444, 19);
  sqcRZGate(q, 0.7321629207780822, 19);
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
  sqcRYGate(q, 2.384864176833239, 0);
  sqcRZGate(q, 0.4632510736404809, 0);
  sqcRYGate(q, -0.5620964087872098, 1);
  sqcRZGate(q, 1.5068834475296777, 1);
  sqcRYGate(q, -3.108558583350432, 2);
  sqcRZGate(q, 3.0654791088453837, 2);
  sqcRYGate(q, 2.9854751349248896, 3);
  sqcRZGate(q, -1.5883997873945754, 3);
  sqcRYGate(q, 0.007990351993276927, 4);
  sqcRZGate(q, 0.9799330995937172, 4);
  sqcRYGate(q, 3.122806180962013, 5);
  sqcRZGate(q, 0.3844021006079306, 5);
  sqcRYGate(q, 1.6147310253846268, 6);
  sqcRZGate(q, 1.5666672146046468, 6);
  sqcRYGate(q, 1.8583434550189306, 7);
  sqcRZGate(q, -1.5797512311663828, 7);
  sqcRYGate(q, -0.9117952567311418, 8);
  sqcRZGate(q, -2.85845210970368, 8);
  sqcRYGate(q, 0.1735464985944686, 9);
  sqcRZGate(q, 1.8884943666885992, 9);
  sqcRYGate(q, -1.5629428301185957, 10);
  sqcRZGate(q, -1.572604373974631, 10);
  sqcRYGate(q, 1.6315086128277203, 11);
  sqcRZGate(q, -0.4687516712172082, 11);
  sqcRYGate(q, 2.18824097358047, 12);
  sqcRZGate(q, -1.3582819497999254, 12);
  sqcRYGate(q, 1.7299369210955193, 13);
  sqcRZGate(q, -0.6839096615740239, 13);
  sqcRYGate(q, 1.571806098088841, 14);
  sqcRZGate(q, 1.573923253295462, 14);
  sqcRYGate(q, 0.0006759348104545086, 15);
  sqcRZGate(q, -2.8020488809865722, 15);
  sqcRYGate(q, -2.0509176679981644, 16);
  sqcRZGate(q, 0.0023479500990440214, 16);
  sqcRYGate(q, 2.807772920415697, 17);
  sqcRZGate(q, 1.5316889412040509, 17);
  sqcRYGate(q, -0.6502919590156511, 18);
  sqcRZGate(q, -3.1235806700767017, 18);
  sqcRYGate(q, -2.746186172555354, 19);
  sqcRZGate(q, -1.9370873063016707, 19);
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
  sqcRYGate(q, 1.4956468349635879, 0);
  sqcRZGate(q, -0.5276799050162658, 0);
  sqcRYGate(q, 1.2638538811403173, 1);
  sqcRZGate(q, 1.2504931989749855, 1);
  sqcRYGate(q, -2.258114586295647, 2);
  sqcRZGate(q, 1.9778968639874464, 2);
  sqcRYGate(q, -1.6367275600208835, 3);
  sqcRZGate(q, -0.42147535130588015, 3);
  sqcRYGate(q, -2.4524652035589436, 4);
  sqcRZGate(q, 1.5480771589251425, 4);
  sqcRYGate(q, 1.5637805349359155, 5);
  sqcRZGate(q, 1.9218784793363195, 5);
  sqcRYGate(q, 1.5651371033845294, 6);
  sqcRZGate(q, -0.04559897632548715, 6);
  sqcRYGate(q, 3.0252622936066684, 7);
  sqcRZGate(q, -2.9676325387660527, 7);
  sqcRYGate(q, 2.652129488433752, 8);
  sqcRZGate(q, 2.5772577696460663, 8);
  sqcRYGate(q, -2.9790581885174516, 9);
  sqcRZGate(q, 0.009183791168121404, 9);
  sqcRYGate(q, 1.5774842939613158, 10);
  sqcRZGate(q, -0.8855868694774917, 10);
  sqcRYGate(q, -0.0006971718313542041, 11);
  sqcRZGate(q, 2.224691010653607, 11);
  sqcRYGate(q, 0.001349158787558594, 12);
  sqcRZGate(q, 0.1474394154403882, 12);
  sqcRYGate(q, 3.1398867413817904, 13);
  sqcRZGate(q, -1.2576032859638522, 13);
  sqcRYGate(q, 1.5670887748912063, 14);
  sqcRZGate(q, -0.15419427483944315, 14);
  sqcRYGate(q, 2.004240803492155, 15);
  sqcRZGate(q, 3.1225012832096564, 15);
  sqcRYGate(q, 3.0842033208704938, 16);
  sqcRZGate(q, 2.5170240651884517, 16);
  sqcRYGate(q, 0.0013985070765238916, 17);
  sqcRZGate(q, 2.4028121122957113, 17);
  sqcRYGate(q, -1.6084151849790984, 18);
  sqcRZGate(q, 3.13889493986632, 18);
  sqcRYGate(q, 0.13434310581541878, 19);
  sqcRZGate(q, -0.759804151417284, 19);
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
  sqcRYGate(q, -2.228860067855834, 0);
  sqcRZGate(q, 0.5094053379173165, 0);
  sqcRYGate(q, -0.01971061997918877, 1);
  sqcRZGate(q, -1.3880282864403863, 1);
  sqcRYGate(q, 0.43816948987313653, 2);
  sqcRZGate(q, 0.03889883407832873, 2);
  sqcRYGate(q, -1.3489309011816573, 3);
  sqcRZGate(q, -3.128703537710037, 3);
  sqcRYGate(q, -1.3848871909223242, 4);
  sqcRZGate(q, -2.4568564205451104, 4);
  sqcRYGate(q, 1.569629439371105, 5);
  sqcRZGate(q, -1.1615234530802305, 5);
  sqcRYGate(q, -0.08111401529784779, 6);
  sqcRZGate(q, 2.2797425608580983, 6);
  sqcRYGate(q, -3.1413773354656835, 7);
  sqcRZGate(q, 0.24049415768232404, 7);
  sqcRYGate(q, 0.37276708874467884, 8);
  sqcRZGate(q, 0.5270753126677256, 8);
  sqcRYGate(q, -2.7206654707910682, 9);
  sqcRZGate(q, 3.1413445462411724, 9);
  sqcRYGate(q, -1.2052202815128163, 10);
  sqcRZGate(q, 2.3599284088513457, 10);
  sqcRYGate(q, 1.5927911847599185, 11);
  sqcRZGate(q, -0.39404619634351784, 11);
  sqcRYGate(q, -2.709626282837579, 12);
  sqcRZGate(q, -0.41914969818444986, 12);
  sqcRYGate(q, -1.6219639209989942, 13);
  sqcRZGate(q, 1.5222500682853868, 13);
  sqcRYGate(q, 1.9900595317715606, 14);
  sqcRZGate(q, 2.6021305336177973, 14);
  sqcRYGate(q, -3.0496280693580764, 15);
  sqcRZGate(q, -0.7454365787745943, 15);
  sqcRYGate(q, -3.081953119657046, 16);
  sqcRZGate(q, 2.4824320932806128, 16);
  sqcRYGate(q, -1.5794917912012139, 17);
  sqcRZGate(q, -0.10300948437039768, 17);
  sqcRYGate(q, -1.8532390693615621, 18);
  sqcRZGate(q, 3.06196028117233, 18);
  sqcRYGate(q, -2.107194777123965, 19);
  sqcRZGate(q, -0.4537721277709377, 19);
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
  sqcRYGate(q, -2.4847659401222844, 0);
  sqcRZGate(q, -1.1191309992631284, 0);
  sqcRYGate(q, 2.103672453041199, 1);
  sqcRZGate(q, -0.0036642658068628273, 1);
  sqcRYGate(q, -1.6765027431010902, 2);
  sqcRZGate(q, -3.103460146572716, 2);
  sqcRYGate(q, -1.651498919853549, 3);
  sqcRZGate(q, 3.124761381443753, 3);
  sqcRYGate(q, -1.199044296565086, 4);
  sqcRZGate(q, -0.14851897624925417, 4);
  sqcRYGate(q, -0.04198680032465507, 5);
  sqcRZGate(q, -0.6792015256437757, 5);
  sqcRYGate(q, -2.907728910199345, 6);
  sqcRZGate(q, 0.9986902495023352, 6);
  sqcRYGate(q, -1.3424249197204723, 7);
  sqcRZGate(q, 1.8738356319698504, 7);
  sqcRYGate(q, 2.9540578735601537, 8);
  sqcRZGate(q, -0.12385329675670412, 8);
  sqcRYGate(q, 1.8606455825864427, 9);
  sqcRZGate(q, 3.1414835208070495, 9);
  sqcRYGate(q, 0.18693720029488103, 10);
  sqcRZGate(q, 2.7524009494112667, 10);
  sqcRYGate(q, -3.1363974291680843, 11);
  sqcRZGate(q, -1.8614739338246267, 11);
  sqcRYGate(q, -0.10313772462174509, 12);
  sqcRZGate(q, -0.2592720361343597, 12);
  sqcRYGate(q, -3.0137657302254075, 13);
  sqcRZGate(q, 3.1232863309422347, 13);
  sqcRYGate(q, -0.07903430318998339, 14);
  sqcRZGate(q, 3.1391041111149582, 14);
  sqcRYGate(q, 0.0008163341667342763, 15);
  sqcRZGate(q, -2.4445535194974917, 15);
  sqcRYGate(q, 1.8596033116733757, 16);
  sqcRZGate(q, -0.46273542619663743, 16);
  sqcRYGate(q, -0.004783378948010745, 17);
  sqcRZGate(q, 1.340763799014465, 17);
  sqcRYGate(q, -0.4917919743793835, 18);
  sqcRZGate(q, 2.986650233110756, 18);
  sqcRYGate(q, 3.0660558825663706, 19);
  sqcRZGate(q, 2.2758111186506413, 19);
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
  sqcRYGate(q, -1.5947736392145215, 0);
  sqcRZGate(q, -2.160729469742458, 0);
  sqcRYGate(q, -1.3081603983733983, 1);
  sqcRZGate(q, 3.1410034508948903, 1);
  sqcRYGate(q, -1.5085355666927533, 2);
  sqcRZGate(q, -2.8955631318577053, 2);
  sqcRYGate(q, -3.0923422312649587, 3);
  sqcRZGate(q, -0.02010462024286319, 3);
  sqcRYGate(q, -0.17415303997247644, 4);
  sqcRZGate(q, 0.7216132163384381, 4);
  sqcRYGate(q, 3.1204377226762596, 5);
  sqcRZGate(q, 2.882528939834706, 5);
  sqcRYGate(q, 3.010704028415695, 6);
  sqcRZGate(q, 0.5134297944387817, 6);
  sqcRYGate(q, 0.00237977960458954, 7);
  sqcRZGate(q, 1.1298496025530644, 7);
  sqcRYGate(q, -0.03151773585693077, 8);
  sqcRZGate(q, 1.1662712087365315, 8);
  sqcRYGate(q, -2.048229846629688, 9);
  sqcRZGate(q, -3.1407517410149377, 9);
  sqcRYGate(q, -1.293982584434462, 10);
  sqcRZGate(q, -0.3120788473490297, 10);
  sqcRYGate(q, -0.2045015903573848, 11);
  sqcRZGate(q, -0.011443230415713934, 11);
  sqcRYGate(q, 2.959467653070035, 12);
  sqcRZGate(q, -0.2611509471083613, 12);
  sqcRYGate(q, 2.1940852232836163, 13);
  sqcRZGate(q, -3.137258231285592, 13);
  sqcRYGate(q, 0.4678400433652383, 14);
  sqcRZGate(q, -1.005915260241272, 14);
  sqcRYGate(q, -0.9035143378210351, 15);
  sqcRZGate(q, -0.01628139937369778, 15);
  sqcRYGate(q, 1.878220541364917, 16);
  sqcRZGate(q, 3.1403173622110936, 16);
  sqcRYGate(q, -3.1396059200012245, 17);
  sqcRZGate(q, 1.2063342104273589, 17);
  sqcRYGate(q, 2.2412434772920085, 18);
  sqcRZGate(q, -1.737157269187971, 18);
  sqcRYGate(q, -0.5427679843224391, 19);
  sqcRZGate(q, -2.6142239454925518, 19);
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
  sqcRYGate(q, -0.24263042613844113, 0);
  sqcRZGate(q, -0.6470268421762357, 0);
  sqcRYGate(q, -2.6829476250016033, 1);
  sqcRZGate(q, 2.8576231207538703, 1);
  sqcRYGate(q, 2.8086241644653827, 2);
  sqcRZGate(q, -2.6372198783587684, 2);
  sqcRYGate(q, -2.87985943725937, 3);
  sqcRZGate(q, 3.1354198765329744, 3);
  sqcRYGate(q, 0.7583636540497469, 4);
  sqcRZGate(q, 2.1579239775385677, 4);
  sqcRYGate(q, 2.1041940562403347, 5);
  sqcRZGate(q, 0.021925664361031817, 5);
  sqcRYGate(q, -2.2461147044549423, 6);
  sqcRZGate(q, 0.2358608989409845, 6);
  sqcRYGate(q, -0.3754639061378561, 7);
  sqcRZGate(q, 0.13957030796627537, 7);
  sqcRYGate(q, 0.38593760057460896, 8);
  sqcRZGate(q, 0.23604633540171438, 8);
  sqcRYGate(q, -1.9776551167976226, 9);
  sqcRZGate(q, 3.139464724133008, 9);
  sqcRYGate(q, -2.8530302139530006, 10);
  sqcRZGate(q, -2.0410407288532806, 10);
  sqcRYGate(q, -2.989735526285008, 11);
  sqcRZGate(q, 0.09872294250003937, 11);
  sqcRYGate(q, 2.3673136149855045, 12);
  sqcRZGate(q, 0.0007761303965485723, 12);
  sqcRYGate(q, -1.4413224808111753, 13);
  sqcRZGate(q, 3.1246775261103266, 13);
  sqcRYGate(q, 0.05781568120635418, 14);
  sqcRZGate(q, -1.6496962476366803, 14);
  sqcRYGate(q, -0.035132177929850385, 15);
  sqcRZGate(q, 1.1292111361594779, 15);
  sqcRYGate(q, 0.06107599747822956, 16);
  sqcRZGate(q, 0.08483266819119795, 16);
  sqcRYGate(q, -3.141218959645854, 17);
  sqcRZGate(q, 1.587145747017277, 17);
  sqcRYGate(q, 1.631213760279861, 18);
  sqcRZGate(q, -2.932231209825985, 18);
  sqcRYGate(q, 0.34184136816321686, 19);
  sqcRZGate(q, 1.4379592896999247, 19);
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
  sqcRYGate(q, -1.7561783692647772, 0);
  sqcRZGate(q, 1.6438976502063363, 0);
  sqcRYGate(q, 3.0885079777221836, 1);
  sqcRZGate(q, 2.97629888217088, 1);
  sqcRYGate(q, 3.113873661025121, 2);
  sqcRZGate(q, -2.849305902665467, 2);
  sqcRYGate(q, 1.3853793238096572, 3);
  sqcRZGate(q, 3.1401468311817964, 3);
  sqcRYGate(q, 1.50926237586632, 4);
  sqcRZGate(q, -0.6027514523181692, 4);
  sqcRYGate(q, 1.3802975205274073, 5);
  sqcRZGate(q, 3.139763514145925, 5);
  sqcRYGate(q, -0.9363344509168187, 6);
  sqcRZGate(q, 0.206469317578771, 6);
  sqcRYGate(q, -1.077582638868198, 7);
  sqcRZGate(q, 0.7187959204854724, 7);
  sqcRYGate(q, -3.139517569058291, 8);
  sqcRZGate(q, 3.0751828860211052, 8);
  sqcRYGate(q, 2.5455551162053336, 9);
  sqcRZGate(q, -0.0013891090270199413, 9);
  sqcRYGate(q, -1.5547020229782182, 10);
  sqcRZGate(q, -0.08634007325634033, 10);
  sqcRYGate(q, -0.006486005797407657, 11);
  sqcRZGate(q, 3.04290232976737, 11);
  sqcRYGate(q, -1.5680247418041589, 12);
  sqcRZGate(q, 1.5783295090065383, 12);
  sqcRYGate(q, 0.13474858244263577, 13);
  sqcRZGate(q, 0.013596561230215224, 13);
  sqcRYGate(q, -1.5566334882558488, 14);
  sqcRZGate(q, -1.0862112559781705, 14);
  sqcRYGate(q, 3.1206237360241134, 15);
  sqcRZGate(q, 2.660052131755006, 15);
  sqcRYGate(q, 3.0834395612055903, 16);
  sqcRZGate(q, 0.9397196791312491, 16);
  sqcRYGate(q, 3.1157193910932808, 17);
  sqcRZGate(q, -1.820759223796755, 17);
  sqcRYGate(q, -0.0707380694295825, 18);
  sqcRZGate(q, -0.6550775200969614, 18);
  sqcRYGate(q, 1.4324762295238935, 19);
  sqcRZGate(q, 2.3759959161891757, 19);
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
  sqcRYGate(q, -1.5901135727982543, 0);
  sqcRZGate(q, 0.14117117624768608, 0);
  sqcRYGate(q, -3.1314118675338385, 1);
  sqcRZGate(q, -1.4352621837969268, 1);
  sqcRYGate(q, -2.3603141715980644, 2);
  sqcRZGate(q, 0.0071436591388716044, 2);
  sqcRYGate(q, 1.8993354844757393, 3);
  sqcRZGate(q, 0.0003003274816748558, 3);
  sqcRYGate(q, -0.01952011285796457, 4);
  sqcRZGate(q, -1.3086754943027428, 4);
  sqcRYGate(q, 2.798399451480427, 5);
  sqcRZGate(q, 2.327291009886998, 5);
  sqcRYGate(q, -3.135370729375872, 6);
  sqcRZGate(q, 0.21600530622164227, 6);
  sqcRYGate(q, -3.1389763147866834, 7);
  sqcRZGate(q, 0.7218849949706748, 7);
  sqcRYGate(q, -0.46588234687292057, 8);
  sqcRZGate(q, 0.0035479708663306636, 8);
  sqcRYGate(q, -1.5695150668437705, 9);
  sqcRZGate(q, 3.1407207085636717, 9);
  sqcRYGate(q, -0.3484061543520456, 10);
  sqcRZGate(q, 1.7525294787557744, 10);
  sqcRYGate(q, -2.0894796767295096, 11);
  sqcRZGate(q, 0.0007064965925692847, 11);
  sqcRYGate(q, -1.5673252254567691, 12);
  sqcRZGate(q, 0.7868426670399451, 12);
  sqcRYGate(q, 1.5632328787522147, 13);
  sqcRZGate(q, 3.1400835371731963, 13);
  sqcRYGate(q, -0.0029565806707869285, 14);
  sqcRZGate(q, -3.0015033246476333, 14);
  sqcRYGate(q, -3.140957784476145, 15);
  sqcRZGate(q, -1.5846985980291632, 15);
  sqcRYGate(q, -0.0313164847443117, 16);
  sqcRZGate(q, -1.4186962473105273, 16);
  sqcRYGate(q, 3.1406141003944534, 17);
  sqcRZGate(q, -2.079218842732927, 17);
  sqcRYGate(q, 2.6390847121650305, 18);
  sqcRZGate(q, -2.1218983268700504, 18);
  sqcRYGate(q, 1.4264835100854336, 19);
  sqcRZGate(q, 0.18862045528469995, 19);
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
  sqcRYGate(q, -1.9334516783130908, 0);
  sqcRZGate(q, 2.9824381887013023, 0);
  sqcRYGate(q, -0.17406103182141397, 1);
  sqcRZGate(q, 1.5537385917760096, 1);
  sqcRYGate(q, 1.5684489496629725, 2);
  sqcRZGate(q, 1.4166674375637625, 2);
  sqcRYGate(q, 0.5500027746195837, 3);
  sqcRZGate(q, 0.0001332958525877004, 3);
  sqcRYGate(q, -3.1375141758519063, 4);
  sqcRZGate(q, -2.415348443510478, 4);
  sqcRYGate(q, 3.083650069071345, 5);
  sqcRZGate(q, -0.840745543677234, 5);
  sqcRYGate(q, -2.2099175944855585, 6);
  sqcRZGate(q, 0.12024280157529343, 6);
  sqcRYGate(q, 0.23684590764616706, 7);
  sqcRZGate(q, -0.0015943171750573992, 7);
  sqcRYGate(q, 2.752174519780404, 8);
  sqcRZGate(q, 0.869161340729604, 8);
  sqcRYGate(q, 1.8918260119913821, 9);
  sqcRZGate(q, 0.0006357740498970087, 9);
  sqcRYGate(q, 0.4424573463241366, 10);
  sqcRZGate(q, -3.135854017159311, 10);
  sqcRYGate(q, 0.3854007377587987, 11);
  sqcRZGate(q, -0.00019574262109339256, 11);
  sqcRYGate(q, 3.1411223741832974, 12);
  sqcRZGate(q, 1.5322239301831653, 12);
  sqcRYGate(q, 0.3928837173439929, 13);
  sqcRZGate(q, -1.4024988466124382, 13);
  sqcRYGate(q, -3.1348557178835326, 14);
  sqcRZGate(q, 2.222682280948578, 14);
  sqcRYGate(q, -0.5426399726886881, 15);
  sqcRZGate(q, 0.009657085777662998, 15);
  sqcRYGate(q, 0.6536751612292186, 16);
  sqcRZGate(q, -2.3750828218922475, 16);
  sqcRYGate(q, -3.1414739155029126, 17);
  sqcRZGate(q, -2.4609404494337954, 17);
  sqcRYGate(q, -0.010726824205710805, 18);
  sqcRZGate(q, -1.0610240629812664, 18);
  sqcRYGate(q, 0.2192819060312674, 19);
  sqcRZGate(q, 1.5142430893402758, 19);
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
  sqcRYGate(q, 1.511960119883768, 0);
  sqcRZGate(q, -1.8608701107258927, 0);
  sqcRYGate(q, 1.490997046409023, 1);
  sqcRZGate(q, -1.570871343193437, 1);
  sqcRYGate(q, 0.000923653255950902, 2);
  sqcRZGate(q, 0.1538102569495737, 2);
  sqcRYGate(q, -1.5210341495182231, 3);
  sqcRZGate(q, -1.5705199441795958, 3);
  sqcRYGate(q, -0.015515878934294089, 4);
  sqcRZGate(q, -1.076193329215867, 4);
  sqcRYGate(q, 3.0325123167998895, 5);
  sqcRZGate(q, 1.5380577452501099, 5);
  sqcRYGate(q, 3.1389710015014733, 6);
  sqcRZGate(q, 1.690304035542061, 6);
  sqcRYGate(q, 1.5418537601792748, 7);
  sqcRZGate(q, 1.5706923513459605, 7);
  sqcRYGate(q, -3.1306729323538294, 8);
  sqcRZGate(q, 2.4331852115252546, 8);
  sqcRYGate(q, -1.5725754235349871, 9);
  sqcRZGate(q, -1.5710125790112488, 9);
  sqcRYGate(q, 1.5600623459579974, 10);
  sqcRZGate(q, -1.570409160233699, 10);
  sqcRYGate(q, 1.0059445015120652, 11);
  sqcRZGate(q, -1.570966699190934, 11);
  sqcRYGate(q, -1.577546092656969, 12);
  sqcRZGate(q, 1.588597114953564, 12);
  sqcRYGate(q, -0.0012556430489415152, 13);
  sqcRZGate(q, 2.974907441696152, 13);
  sqcRYGate(q, 1.563787977353774, 14);
  sqcRZGate(q, 1.568415716504953, 14);
  sqcRYGate(q, -1.5691405284063171, 15);
  sqcRZGate(q, -1.5696337463502474, 15);
  sqcRYGate(q, -1.9034208403906774, 16);
  sqcRZGate(q, 1.6365660305885485, 16);
  sqcRYGate(q, 0.002313479175434452, 17);
  sqcRZGate(q, -0.8998191155061618, 17);
  sqcRYGate(q, -1.1479620894372244, 18);
  sqcRZGate(q, -1.8477652498155797, 18);
  sqcRYGate(q, 2.301646902896139, 19);
  sqcRZGate(q, -3.0549980185351777, 19);
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
  sqcRYGate(q, 0.008956590759885513, 0);
  sqcRZGate(q, 0.7458421937150598, 0);
  sqcRYGate(q, 1.5706022787891092, 1);
  sqcRZGate(q, -0.9487659164100517, 1);
  sqcRYGate(q, -1.564567855320099, 2);
  sqcRZGate(q, -2.6460562379337427, 2);
  sqcRYGate(q, -1.5704863756924279, 3);
  sqcRZGate(q, 3.0071898639044954, 3);
  sqcRYGate(q, -1.566572873991511, 4);
  sqcRZGate(q, -0.882712342503198, 4);
  sqcRYGate(q, -1.5331191359890182, 5);
  sqcRZGate(q, -1.5050043014095627, 5);
  sqcRYGate(q, -1.5755860021952555, 6);
  sqcRZGate(q, -0.8275608206408297, 6);
  sqcRYGate(q, 1.5720830963514418, 7);
  sqcRZGate(q, -2.7753114516365525, 7);
  sqcRYGate(q, -1.5690204180494716, 8);
  sqcRZGate(q, -2.3950412811471193, 8);
  sqcRYGate(q, -1.5708744789348714, 9);
  sqcRZGate(q, 1.5623829484287182, 9);
  sqcRYGate(q, 1.5073060927011455, 10);
  sqcRZGate(q, 0.6791919764095367, 10);
  sqcRYGate(q, 1.5711217208472004, 11);
  sqcRZGate(q, 1.545565039421006, 11);
  sqcRYGate(q, 1.5660918908935901, 12);
  sqcRZGate(q, -0.8235515529027141, 12);
  sqcRYGate(q, 1.570126403297738, 13);
  sqcRZGate(q, -0.022829613402003627, 13);
  sqcRYGate(q, 1.482173019658151, 14);
  sqcRZGate(q, -2.371247673254283, 14);
  sqcRYGate(q, 1.570653007017434, 15);
  sqcRZGate(q, -0.012505522850554332, 15);
  sqcRYGate(q, 1.5706522794717355, 16);
  sqcRZGate(q, 2.3336295459955063, 16);
  sqcRYGate(q, -1.570687652733338, 17);
  sqcRZGate(q, 1.5562726928935424, 17);
  sqcRYGate(q, 0.15311292264839338, 18);
  sqcRZGate(q, -0.6043470428837541, 18);
  sqcRYGate(q, 0.016996035038108204, 19);
  sqcRZGate(q, 0.19734351293452154, 19);

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
