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

  sqcRYGate(q, 2.3466262255456285, 0);
  sqcRZGate(q, -1.404419058578612, 0);
  sqcRYGate(q, 1.7391507538041582, 1);
  sqcRZGate(q, -2.885720202513458, 1);
  sqcRYGate(q, 1.7621097943136477, 2);
  sqcRZGate(q, -2.6897570537842608, 2);
  sqcRYGate(q, 1.5529445004312923, 3);
  sqcRZGate(q, -1.3007667670350447, 3);
  sqcRYGate(q, 3.1412387509851136, 4);
  sqcRZGate(q, 2.141194306904228, 4);
  sqcRYGate(q, -2.555395156433362, 5);
  sqcRZGate(q, 3.141478277767029, 5);
  sqcRYGate(q, -1.570702791969886, 6);
  sqcRZGate(q, -0.2531656541478711, 6);
  sqcRYGate(q, -1.5706067399209986, 7);
  sqcRZGate(q, -2.651058424162146, 7);
  sqcRYGate(q, 1.5276698497543768, 8);
  sqcRZGate(q, 9.992303446804131e-05, 8);
  sqcRYGate(q, -0.3029508827777052, 9);
  sqcRZGate(q, -3.1049381389338984, 9);
  sqcRYGate(q, 1.6076804078666527, 10);
  sqcRZGate(q, -1.5707518281210862, 10);
  sqcRYGate(q, 2.491966772414181, 11);
  sqcRZGate(q, 1.4383886058868944, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.1623576631415062, 0);
  sqcRZGate(q, -2.4587262648813617, 0);
  sqcRYGate(q, 2.106205322859261, 1);
  sqcRZGate(q, 2.0803686261805705, 1);
  sqcRYGate(q, -2.9217576653547987, 2);
  sqcRZGate(q, 0.05145286140585964, 2);
  sqcRYGate(q, 1.7665909684079768, 3);
  sqcRZGate(q, -1.526607108386858, 3);
  sqcRYGate(q, 0.00027584935960067725, 4);
  sqcRZGate(q, -0.9162234205106999, 4);
  sqcRYGate(q, 1.5709816285836238, 5);
  sqcRZGate(q, 2.246489963988733, 5);
  sqcRYGate(q, 1.1599588023646241, 6);
  sqcRZGate(q, -1.6561311963940224, 6);
  sqcRYGate(q, 1.6111019553947339, 7);
  sqcRZGate(q, 1.4804325767097763, 7);
  sqcRYGate(q, -1.5714263959215815, 8);
  sqcRZGate(q, 1.2912936690704826, 8);
  sqcRYGate(q, -0.409061229272905, 9);
  sqcRZGate(q, 1.5573169172646277, 9);
  sqcRYGate(q, -1.5847873355039759, 10);
  sqcRZGate(q, 3.086707454708691, 10);
  sqcRYGate(q, 3.1384522697158843, 11);
  sqcRZGate(q, -0.13376028739731274, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.3262227372361177, 0);
  sqcRZGate(q, 3.062429862166375, 0);
  sqcRYGate(q, 2.1492173120807316, 1);
  sqcRZGate(q, -1.74594037976766, 1);
  sqcRYGate(q, 2.1891391097672823, 2);
  sqcRZGate(q, -3.1385785713119314, 2);
  sqcRYGate(q, -1.631109777914184, 3);
  sqcRZGate(q, 1.1170969479085908, 3);
  sqcRYGate(q, -1.5708332203543878, 4);
  sqcRZGate(q, 1.5663083882109152, 4);
  sqcRYGate(q, 1.851063313433075, 5);
  sqcRZGate(q, -2.603522364519101, 5);
  sqcRYGate(q, 0.05585023947278067, 6);
  sqcRZGate(q, -1.9660811512551906, 6);
  sqcRYGate(q, 0.9378844841435169, 7);
  sqcRZGate(q, 2.9544937774794873, 7);
  sqcRYGate(q, 2.097342133806836, 8);
  sqcRZGate(q, 3.1024762467173583, 8);
  sqcRYGate(q, 1.5729569659602634, 9);
  sqcRZGate(q, 3.1086387862960794, 9);
  sqcRYGate(q, 1.5559530540452098, 10);
  sqcRZGate(q, -1.569584898136995, 10);
  sqcRYGate(q, -1.0129687025267824, 11);
  sqcRZGate(q, 3.1179867120330096, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.020135368157678, 0);
  sqcRZGate(q, 1.0648741413287501, 0);
  sqcRYGate(q, 1.718627839958175, 1);
  sqcRZGate(q, 0.369855573392879, 1);
  sqcRYGate(q, 1.2862578947205665, 2);
  sqcRZGate(q, 1.8974984748870196, 2);
  sqcRYGate(q, -1.5695334581060951, 3);
  sqcRZGate(q, 1.577810598983394, 3);
  sqcRYGate(q, -1.5359702826737252, 4);
  sqcRZGate(q, -3.136127773807483, 4);
  sqcRYGate(q, -1.5747554400529156, 5);
  sqcRZGate(q, -1.3638896423215865, 5);
  sqcRYGate(q, -2.624595041459692, 6);
  sqcRZGate(q, -2.135942146575129, 6);
  sqcRYGate(q, -2.89742889715103, 7);
  sqcRZGate(q, -1.8261812622871592, 7);
  sqcRYGate(q, 0.10201968880420777, 8);
  sqcRZGate(q, -2.3430647069975463, 8);
  sqcRYGate(q, 1.638958666580384, 9);
  sqcRZGate(q, -3.097459223757635, 9);
  sqcRYGate(q, 1.570630648250335, 10);
  sqcRZGate(q, -2.107005734971031, 10);
  sqcRYGate(q, -1.5949624158914266, 11);
  sqcRZGate(q, 2.9919551314779773, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.8735338272397861, 0);
  sqcRZGate(q, 1.7358312878698687, 0);
  sqcRYGate(q, 2.2537502987818296, 1);
  sqcRZGate(q, 1.499860839150708, 1);
  sqcRYGate(q, -1.5705738199193349, 2);
  sqcRZGate(q, 1.5733071703109722, 2);
  sqcRYGate(q, 1.5681641269200228, 3);
  sqcRZGate(q, 3.13372087319878, 3);
  sqcRYGate(q, 2.7783078587759773, 4);
  sqcRZGate(q, -2.9593479933500926, 4);
  sqcRYGate(q, 1.2326766491345504, 5);
  sqcRZGate(q, 2.5508299406686756, 5);
  sqcRYGate(q, 1.5697621278178853, 6);
  sqcRZGate(q, -1.5684091096914408, 6);
  sqcRYGate(q, 1.6421250797766576, 7);
  sqcRZGate(q, 1.4490440175793515, 7);
  sqcRYGate(q, 0.16333727442850568, 8);
  sqcRZGate(q, -2.4774637225781335, 8);
  sqcRYGate(q, -1.5690102885197852, 9);
  sqcRZGate(q, 1.0888759289842265, 9);
  sqcRYGate(q, 1.6271848572356769, 10);
  sqcRZGate(q, 1.9235791636165134, 10);
  sqcRYGate(q, -2.2574346994653975, 11);
  sqcRZGate(q, -0.23350900348093528, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.1854114042291601, 0);
  sqcRZGate(q, -1.050949570016107, 0);
  sqcRYGate(q, -1.5699785996623263, 1);
  sqcRZGate(q, -1.5723773870623658, 1);
  sqcRYGate(q, -1.5859777135629465, 2);
  sqcRZGate(q, -1.5677963919697948, 2);
  sqcRYGate(q, -1.574976839809326, 3);
  sqcRZGate(q, -1.5687061715535997, 3);
  sqcRYGate(q, -0.005512569380991458, 4);
  sqcRZGate(q, 2.4547854764051675, 4);
  sqcRYGate(q, 1.5675156451991328, 5);
  sqcRZGate(q, 3.118063250981518, 5);
  sqcRYGate(q, 0.005154034106510472, 6);
  sqcRZGate(q, -0.013534265680030726, 6);
  sqcRYGate(q, -1.5745188807443267, 7);
  sqcRZGate(q, -1.552280940244196, 7);
  sqcRYGate(q, 1.5836986835628937, 8);
  sqcRZGate(q, 1.821405406794188, 8);
  sqcRYGate(q, 0.5724365398954044, 9);
  sqcRZGate(q, -3.0446602673901966, 9);
  sqcRYGate(q, 3.137490628486505, 10);
  sqcRZGate(q, 1.192399530873839, 10);
  sqcRYGate(q, -1.2598756023945592, 11);
  sqcRZGate(q, -3.1369086188119444, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.0017928648074638784, 0);
  sqcRZGate(q, 1.280330081298314, 0);
  sqcRYGate(q, -1.56919340518209, 1);
  sqcRZGate(q, 1.66737867297711, 1);
  sqcRYGate(q, -1.5730695831425576, 2);
  sqcRZGate(q, 0.041420244216076804, 2);
  sqcRYGate(q, -1.5576801469110304, 3);
  sqcRZGate(q, -0.6189434801510775, 3);
  sqcRYGate(q, 0.0002012026413401433, 4);
  sqcRZGate(q, 2.0813798632224616, 4);
  sqcRYGate(q, 1.9555264221403148, 5);
  sqcRZGate(q, -1.8603682492931775, 5);
  sqcRYGate(q, -1.5588485884446106, 6);
  sqcRZGate(q, -1.6466094728802163, 6);
  sqcRYGate(q, -1.5633555918096436, 7);
  sqcRZGate(q, 2.083248011656848, 7);
  sqcRYGate(q, -0.01480491907943904, 8);
  sqcRZGate(q, 2.1403699713370035, 8);
  sqcRYGate(q, 3.065014807893794, 9);
  sqcRZGate(q, 2.6844638848594684, 9);
  sqcRYGate(q, -0.2320582602863146, 10);
  sqcRZGate(q, -2.2072088152157123, 10);
  sqcRYGate(q, 0.6995747221652062, 11);
  sqcRZGate(q, 1.5871293986969215, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5685998578248468, 0);
  sqcRZGate(q, 0.0001640932219952873, 0);
  sqcRYGate(q, -0.001456590993251794, 1);
  sqcRZGate(q, 1.481561262618008, 1);
  sqcRYGate(q, -2.085299506433075, 2);
  sqcRZGate(q, -1.2261198421009933, 2);
  sqcRYGate(q, -3.1401154184241538, 3);
  sqcRZGate(q, -1.2788866949759718, 3);
  sqcRYGate(q, -0.029082141069751266, 4);
  sqcRZGate(q, -3.1132204433816586, 4);
  sqcRYGate(q, 1.5735581940833328, 5);
  sqcRZGate(q, 3.0532680130253174, 5);
  sqcRYGate(q, -2.1792045958385806, 6);
  sqcRZGate(q, -1.5564381683116733, 6);
  sqcRYGate(q, -0.27586412912082897, 7);
  sqcRZGate(q, 1.4086649940405729, 7);
  sqcRYGate(q, -3.141254174343003, 8);
  sqcRZGate(q, 2.3112888510530962, 8);
  sqcRYGate(q, 1.4721008817374477, 9);
  sqcRZGate(q, -1.191437626392619, 9);
  sqcRYGate(q, -0.939520314526952, 10);
  sqcRZGate(q, -1.5825674011058786, 10);
  sqcRYGate(q, 2.7414588825258734, 11);
  sqcRZGate(q, -1.5248231004403234, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5716730436410322, 0);
  sqcRZGate(q, 2.674383918394954, 0);
  sqcRYGate(q, 1.7925972277245017, 1);
  sqcRZGate(q, 1.5540820291886794, 1);
  sqcRYGate(q, 3.1406647183909455, 2);
  sqcRZGate(q, 1.4244970706615767, 2);
  sqcRYGate(q, -3.131569783777626, 3);
  sqcRZGate(q, 0.959902718918294, 3);
  sqcRYGate(q, -0.8036376719175262, 4);
  sqcRZGate(q, 2.9987107468544876, 4);
  sqcRYGate(q, 3.104101158375512, 5);
  sqcRZGate(q, 1.4595664336438592, 5);
  sqcRYGate(q, 3.1021840266886094, 6);
  sqcRZGate(q, 1.6030612885736097, 6);
  sqcRYGate(q, -3.1098582303799542, 7);
  sqcRZGate(q, -1.5122729265384518, 7);
  sqcRYGate(q, 1.5762509568063194, 8);
  sqcRZGate(q, -2.404585269782, 8);
  sqcRYGate(q, 0.07276618129851474, 9);
  sqcRZGate(q, 1.3805310058407148, 9);
  sqcRYGate(q, -0.2076348049366343, 10);
  sqcRZGate(q, 0.7896532929910446, 10);
  sqcRYGate(q, -3.137150150262751, 11);
  sqcRZGate(q, -0.21336341826536123, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.1118094179977835, 0);
  sqcRZGate(q, 2.654637146598493, 0);
  sqcRYGate(q, 1.870190015097073, 1);
  sqcRZGate(q, 1.5801662437553226, 1);
  sqcRYGate(q, -2.658735697332893, 2);
  sqcRZGate(q, 2.5634655959042343, 2);
  sqcRYGate(q, -3.1288448110012976, 3);
  sqcRZGate(q, 1.6203628322101782, 3);
  sqcRYGate(q, 0.008280220193727317, 4);
  sqcRZGate(q, -2.999313206454885, 4);
  sqcRYGate(q, -0.2383972310316612, 5);
  sqcRZGate(q, -0.180516225606284, 5);
  sqcRYGate(q, -2.1827136974363013, 6);
  sqcRZGate(q, -0.06541774747410824, 6);
  sqcRYGate(q, -0.002079832952829234, 7);
  sqcRZGate(q, 1.8592999912698052, 7);
  sqcRYGate(q, 0.0008311132497603997, 8);
  sqcRZGate(q, -0.7364500272970175, 8);
  sqcRYGate(q, -1.5576968612775879, 9);
  sqcRZGate(q, 1.9231565384007654, 9);
  sqcRYGate(q, 2.1027147684313015, 10);
  sqcRZGate(q, 1.3057065409984123, 10);
  sqcRYGate(q, 1.33241460269511, 11);
  sqcRZGate(q, -2.201569022171789, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.141298944404675, 0);
  sqcRZGate(q, 2.5545362775268856, 0);
  sqcRYGate(q, -0.32748047258954427, 1);
  sqcRZGate(q, -0.988394694353844, 1);
  sqcRYGate(q, 1.5614649105031404, 2);
  sqcRZGate(q, 0.31388569653868, 2);
  sqcRYGate(q, 1.5645599642301642, 3);
  sqcRZGate(q, 0.2767987879686077, 3);
  sqcRYGate(q, -0.8087559257733323, 4);
  sqcRZGate(q, -2.8646612498039703, 4);
  sqcRYGate(q, 0.006512129750833928, 5);
  sqcRZGate(q, -0.1964406105204846, 5);
  sqcRYGate(q, -1.5358262973648367, 6);
  sqcRZGate(q, -0.2881616746948656, 6);
  sqcRYGate(q, -1.560744133537197, 7);
  sqcRZGate(q, 1.1255024915099536, 7);
  sqcRYGate(q, 1.1557368036296944, 8);
  sqcRZGate(q, 2.692494702008026, 8);
  sqcRYGate(q, -3.136907015046085, 9);
  sqcRZGate(q, -1.8414626628362736, 9);
  sqcRYGate(q, -1.5718216227322424, 10);
  sqcRZGate(q, 0.848145559384726, 10);
  sqcRYGate(q, -0.0034127159400835255, 11);
  sqcRZGate(q, 0.6092791765828708, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.2743219820551925, 0);
  sqcRZGate(q, -1.7511410200737954, 0);
  sqcRYGate(q, 1.798591458503245, 1);
  sqcRZGate(q, -1.7301413074092427, 1);
  sqcRYGate(q, -1.0335092335926785, 2);
  sqcRZGate(q, 2.7975244873506764, 2);
  sqcRYGate(q, 0.9956050489791535, 3);
  sqcRZGate(q, -0.3105503392528579, 3);
  sqcRYGate(q, -1.0388299967175194, 4);
  sqcRZGate(q, 2.8024053401297913, 4);
  sqcRYGate(q, -0.6244655294152877, 5);
  sqcRZGate(q, 0.14822214316135, 5);
  sqcRYGate(q, 2.171363524227704, 6);
  sqcRZGate(q, 2.7769426264132124, 6);
  sqcRYGate(q, 0.6176621014432594, 7);
  sqcRZGate(q, -2.9676660388519, 7);
  sqcRYGate(q, -0.6533482286202594, 8);
  sqcRZGate(q, 0.1782146103410609, 8);
  sqcRYGate(q, 2.736213181001422, 9);
  sqcRZGate(q, 2.3816083449926158, 9);
  sqcRYGate(q, 2.7876278137396007, 10);
  sqcRZGate(q, 0.6337455525546792, 10);
  sqcRYGate(q, 1.333786960941431, 11);
  sqcRZGate(q, 1.397437746439457, 11);

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
