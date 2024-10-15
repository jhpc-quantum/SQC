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

  sqcRYGate(q, 0.235726218957514, 0);
  sqcRZGate(q, -1.4876640089501565, 0);
  sqcRYGate(q, -0.07960581903590747, 1);
  sqcRZGate(q, -2.842215167415693, 1);
  sqcRYGate(q, 3.0333626201348496, 2);
  sqcRZGate(q, -3.0790237723547147, 2);
  sqcRYGate(q, 0.21411345710731292, 3);
  sqcRZGate(q, -0.2937755559545794, 3);
  sqcRYGate(q, -1.3232611730339616, 4);
  sqcRZGate(q, -2.133388216072518, 4);
  sqcRYGate(q, 3.1358821549222826, 5);
  sqcRZGate(q, 2.0005464677925078, 5);
  sqcRYGate(q, 1.9629378070364831, 6);
  sqcRZGate(q, -2.709345968006195, 6);
  sqcRYGate(q, -1.5667761074351236, 7);
  sqcRZGate(q, 0.03289473853442537, 7);
  sqcRYGate(q, 1.7141609961869895, 8);
  sqcRZGate(q, 1.193314886066446, 8);
  sqcRYGate(q, 1.379156097780997, 9);
  sqcRZGate(q, -1.8466035160127732, 9);
  sqcRYGate(q, 3.113399144050416, 10);
  sqcRZGate(q, -0.5020485762020735, 10);
  sqcRYGate(q, 0.15145252832351613, 11);
  sqcRZGate(q, -1.4862357945398106, 11);
  sqcRYGate(q, 2.7017917171212775, 12);
  sqcRZGate(q, -0.120728560935451, 12);
  sqcRYGate(q, 3.0752867004154223, 13);
  sqcRZGate(q, 0.3849408987891634, 13);
  sqcRYGate(q, -2.532061098981016, 14);
  sqcRZGate(q, -2.390739520131711, 14);
  sqcRYGate(q, -0.27396143222755054, 15);
  sqcRZGate(q, -1.6331404832463674, 15);
  sqcRYGate(q, -1.138704899794707, 16);
  sqcRZGate(q, 2.7102939946271065, 16);
  sqcRYGate(q, -1.5723236568574972, 17);
  sqcRZGate(q, -1.8683700269327783, 17);
  sqcRYGate(q, -1.599035422791852, 18);
  sqcRZGate(q, 1.7599704031750423, 18);
  sqcRYGate(q, -2.9912317254353225, 19);
  sqcRZGate(q, 2.938617465491649, 19);
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
  sqcRYGate(q, 1.2906505876383054, 0);
  sqcRZGate(q, -2.0545958542121823, 0);
  sqcRYGate(q, 1.4839656450025556, 1);
  sqcRZGate(q, -2.6995700296410043, 1);
  sqcRYGate(q, -2.663874767785141, 2);
  sqcRZGate(q, -0.5302324907568847, 2);
  sqcRYGate(q, 0.48797451111310414, 3);
  sqcRZGate(q, 2.1132986822776925, 3);
  sqcRYGate(q, 2.6479429156800465, 4);
  sqcRZGate(q, -0.49747338625823095, 4);
  sqcRYGate(q, -0.1984070413862591, 5);
  sqcRZGate(q, 2.2327806546912017, 5);
  sqcRYGate(q, -1.5924126999380377, 6);
  sqcRZGate(q, -1.963107139116375, 6);
  sqcRYGate(q, 1.5456528906388818, 7);
  sqcRZGate(q, 1.2801858129217092, 7);
  sqcRYGate(q, 0.13083228240265546, 8);
  sqcRZGate(q, 1.2774018495444488, 8);
  sqcRYGate(q, 3.1381246445703534, 9);
  sqcRZGate(q, -1.8456924261575238, 9);
  sqcRYGate(q, -0.05884286713175991, 10);
  sqcRZGate(q, -2.5781874526044266, 10);
  sqcRYGate(q, 0.04010909462416912, 11);
  sqcRZGate(q, -1.8504334931428863, 11);
  sqcRYGate(q, -0.3844828228294821, 12);
  sqcRZGate(q, 0.43061639673755275, 12);
  sqcRYGate(q, -1.3437857774891624, 13);
  sqcRZGate(q, -2.1930213167201487, 13);
  sqcRYGate(q, 2.506777721852173, 14);
  sqcRZGate(q, -1.2948413431566372, 14);
  sqcRYGate(q, -0.11307057327072734, 15);
  sqcRZGate(q, 0.4048048366135239, 15);
  sqcRYGate(q, -0.007396751928820499, 16);
  sqcRZGate(q, 3.0317801903677615, 16);
  sqcRYGate(q, -0.021166315882627768, 17);
  sqcRZGate(q, -2.2564772611272472, 17);
  sqcRYGate(q, -2.0794902558906165, 18);
  sqcRZGate(q, -1.9277661770654504, 18);
  sqcRYGate(q, -1.8931520247558762, 19);
  sqcRZGate(q, 0.19953730498771127, 19);
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
  sqcRYGate(q, -0.2049419733581874, 0);
  sqcRZGate(q, -1.517692694964219, 0);
  sqcRYGate(q, -3.1081730934465166, 1);
  sqcRZGate(q, -0.9641483755365589, 1);
  sqcRYGate(q, 0.0533482371116829, 2);
  sqcRZGate(q, -2.529634390148164, 2);
  sqcRYGate(q, -2.228775651285559, 3);
  sqcRZGate(q, -0.3023616692140041, 3);
  sqcRYGate(q, -1.580294843021208, 4);
  sqcRZGate(q, 0.1206295067632235, 4);
  sqcRYGate(q, -0.1799022896952117, 5);
  sqcRZGate(q, 2.958357008855384, 5);
  sqcRYGate(q, -3.0051927540600474, 6);
  sqcRZGate(q, -0.5241490518648521, 6);
  sqcRYGate(q, -2.1255954689492995, 7);
  sqcRZGate(q, -0.3145098076274812, 7);
  sqcRYGate(q, 1.5647842417944562, 8);
  sqcRZGate(q, 1.711643947421733, 8);
  sqcRYGate(q, -1.376723416514408, 9);
  sqcRZGate(q, -1.8265001767216704, 9);
  sqcRYGate(q, 0.0056974118816484065, 10);
  sqcRZGate(q, -0.8678484927374008, 10);
  sqcRYGate(q, -2.8165295762434295, 11);
  sqcRZGate(q, -2.3000043640763796, 11);
  sqcRYGate(q, 2.5942426641962726, 12);
  sqcRZGate(q, -2.6921152698315836, 12);
  sqcRYGate(q, -2.8739171767375864, 13);
  sqcRZGate(q, 0.03773429959516328, 13);
  sqcRYGate(q, -3.101600261472575, 14);
  sqcRZGate(q, -2.948240171393145, 14);
  sqcRYGate(q, -0.3418022901720361, 15);
  sqcRZGate(q, 2.4965685267498072, 15);
  sqcRYGate(q, 1.2075779250899181, 16);
  sqcRZGate(q, -0.7824308046680685, 16);
  sqcRYGate(q, 1.5624785674480035, 17);
  sqcRZGate(q, -3.1390700123230157, 17);
  sqcRYGate(q, -2.872656249784235, 18);
  sqcRZGate(q, -1.5761091265441907, 18);
  sqcRYGate(q, -1.2453957857055507, 19);
  sqcRZGate(q, 2.743598341293846, 19);
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
  sqcRYGate(q, -0.5549327668510512, 0);
  sqcRZGate(q, 3.0666302337660967, 0);
  sqcRYGate(q, -2.886256528429884, 1);
  sqcRZGate(q, 2.1394413687309832, 1);
  sqcRYGate(q, -2.1067746144351416, 2);
  sqcRZGate(q, 1.0653939098679635, 2);
  sqcRYGate(q, 2.70010898431065, 3);
  sqcRZGate(q, 3.08279295857019, 3);
  sqcRYGate(q, 3.090584294529087, 4);
  sqcRZGate(q, -0.12142887167558226, 4);
  sqcRYGate(q, 2.9449726033596915, 5);
  sqcRZGate(q, -2.979632812324674, 5);
  sqcRYGate(q, 0.01562789695150535, 6);
  sqcRZGate(q, 0.2378335546807652, 6);
  sqcRYGate(q, -2.1490982474230274, 7);
  sqcRZGate(q, 1.8908269111553617, 7);
  sqcRYGate(q, -0.4106304491385166, 8);
  sqcRZGate(q, 2.9898293474476425, 8);
  sqcRYGate(q, -1.8724528586117923, 9);
  sqcRZGate(q, -1.135143187029477, 9);
  sqcRYGate(q, 1.5961679703509972, 10);
  sqcRZGate(q, 1.5542913808012138, 10);
  sqcRYGate(q, 0.7799720374374884, 11);
  sqcRZGate(q, 1.5115083381708034, 11);
  sqcRYGate(q, -2.74119861223915, 12);
  sqcRZGate(q, 2.321300074431689, 12);
  sqcRYGate(q, -1.841745432260855, 13);
  sqcRZGate(q, 2.781436558438542, 13);
  sqcRYGate(q, 0.4552597093020835, 14);
  sqcRZGate(q, 2.2984300552636525, 14);
  sqcRYGate(q, 1.899451566685202, 15);
  sqcRZGate(q, 0.9127067836092031, 15);
  sqcRYGate(q, -1.9495460168047583, 16);
  sqcRZGate(q, -1.990064768977387, 16);
  sqcRYGate(q, 1.6243996071266915, 17);
  sqcRZGate(q, -1.4873886464132755, 17);
  sqcRYGate(q, -0.7953483287920946, 18);
  sqcRZGate(q, 1.0316694567530844, 18);
  sqcRYGate(q, 0.9929615835965934, 19);
  sqcRZGate(q, 2.4836986974874145, 19);
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
  sqcRYGate(q, 2.985516499288084, 0);
  sqcRZGate(q, -1.0194711750003937, 0);
  sqcRYGate(q, 0.06928627976836932, 1);
  sqcRZGate(q, -2.715373749038992, 1);
  sqcRYGate(q, 3.1301810944762565, 2);
  sqcRZGate(q, -1.1086924877380484, 2);
  sqcRYGate(q, -0.699530426486076, 3);
  sqcRZGate(q, -1.6731356884970259, 3);
  sqcRYGate(q, 2.0677199830630313, 4);
  sqcRZGate(q, 2.662996799881652, 4);
  sqcRYGate(q, -0.7834900577697116, 5);
  sqcRZGate(q, -0.3615400574162777, 5);
  sqcRYGate(q, -2.8365190338999673, 6);
  sqcRZGate(q, 0.19228868555211953, 6);
  sqcRYGate(q, 3.082817071243996, 7);
  sqcRZGate(q, 0.6081933587570377, 7);
  sqcRYGate(q, -1.7542976573751208, 8);
  sqcRZGate(q, -3.1372745249233795, 8);
  sqcRYGate(q, -0.7326383335625842, 9);
  sqcRZGate(q, 0.01153829555750008, 9);
  sqcRYGate(q, -2.3389050334809793, 10);
  sqcRZGate(q, 1.6272093276681636, 10);
  sqcRYGate(q, -1.2014197999218172, 11);
  sqcRZGate(q, -0.00723445821815094, 11);
  sqcRYGate(q, -1.718033160834096, 12);
  sqcRZGate(q, 0.7321183139307469, 12);
  sqcRYGate(q, -2.6685998753532347, 13);
  sqcRZGate(q, 2.1649669978192945, 13);
  sqcRYGate(q, 1.5477334394494902, 14);
  sqcRZGate(q, 1.1539829777451591, 14);
  sqcRYGate(q, 1.4189225244125792, 15);
  sqcRZGate(q, -1.2368752474129145, 15);
  sqcRYGate(q, -3.04219562460044, 16);
  sqcRZGate(q, 2.8260385990172514, 16);
  sqcRYGate(q, -1.3753522845443689, 17);
  sqcRZGate(q, -0.14714709184133548, 17);
  sqcRYGate(q, 0.2797155281455033, 18);
  sqcRZGate(q, 1.2258001087287729, 18);
  sqcRYGate(q, -1.92429325823628, 19);
  sqcRZGate(q, -0.878820029592947, 19);
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
  sqcRYGate(q, 0.9068679381722013, 0);
  sqcRZGate(q, 1.3464454368962624, 0);
  sqcRYGate(q, 2.0615928121415847, 1);
  sqcRZGate(q, -0.7664665624749374, 1);
  sqcRYGate(q, 0.46499527868261215, 2);
  sqcRZGate(q, 1.880688690582613, 2);
  sqcRYGate(q, 1.1783960032356964, 3);
  sqcRZGate(q, -0.21344446980748624, 3);
  sqcRYGate(q, 0.14498823542179196, 4);
  sqcRZGate(q, 2.9261196000055234, 4);
  sqcRYGate(q, 3.0128392245228297, 5);
  sqcRZGate(q, 1.245601885998493, 5);
  sqcRYGate(q, -0.08676003537140864, 6);
  sqcRZGate(q, 2.997718872322552, 6);
  sqcRYGate(q, -2.5350188542836056, 7);
  sqcRZGate(q, 0.07374930438757053, 7);
  sqcRYGate(q, -2.105691497813468, 8);
  sqcRZGate(q, -3.1412360528534875, 8);
  sqcRYGate(q, 1.7699228589171545, 9);
  sqcRZGate(q, 0.3231828955824374, 9);
  sqcRYGate(q, -3.140013253800977, 10);
  sqcRZGate(q, 1.6263876368017944, 10);
  sqcRYGate(q, 1.7582369033577567, 11);
  sqcRZGate(q, -3.141113728172988, 11);
  sqcRYGate(q, 0.0005207584283986901, 12);
  sqcRZGate(q, 2.2622057182484987, 12);
  sqcRYGate(q, -1.6660113846756373, 13);
  sqcRZGate(q, 3.1366176543262214, 13);
  sqcRYGate(q, -1.5667664730918776, 14);
  sqcRZGate(q, 1.9389723149145572, 14);
  sqcRYGate(q, -1.129183543072904, 15);
  sqcRZGate(q, 2.9134325751355976, 15);
  sqcRYGate(q, -3.1380051463074206, 16);
  sqcRZGate(q, 3.0432201488182904, 16);
  sqcRYGate(q, 2.7822287436542585, 17);
  sqcRZGate(q, 3.098698056368424, 17);
  sqcRYGate(q, -0.3022228780484806, 18);
  sqcRZGate(q, -1.414088686220781, 18);
  sqcRYGate(q, 2.6841471607776075, 19);
  sqcRZGate(q, -2.1638103642249957, 19);
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
  sqcRYGate(q, 0.12914977160452903, 0);
  sqcRZGate(q, -1.0205517880037736, 0);
  sqcRYGate(q, -0.12550199661357464, 1);
  sqcRZGate(q, -2.543925842730703, 1);
  sqcRYGate(q, -0.07073134821229776, 2);
  sqcRZGate(q, -0.17051382712187646, 2);
  sqcRYGate(q, 2.655606899167359, 3);
  sqcRZGate(q, 0.0895969000643948, 3);
  sqcRYGate(q, -0.2992451658587227, 4);
  sqcRZGate(q, 1.739199862202618, 4);
  sqcRYGate(q, 3.0188378127458986, 5);
  sqcRZGate(q, -0.010238108844075276, 5);
  sqcRYGate(q, -1.8894345509604842, 6);
  sqcRZGate(q, 0.03474154925674146, 6);
  sqcRYGate(q, -0.8243521501746559, 7);
  sqcRZGate(q, -0.9296627110377411, 7);
  sqcRYGate(q, 2.2897357865685217, 8);
  sqcRZGate(q, -1.57660015240181, 8);
  sqcRYGate(q, 2.847745567195494, 9);
  sqcRZGate(q, -2.7944836641360356, 9);
  sqcRYGate(q, -0.6893787277430515, 10);
  sqcRZGate(q, -0.33166540789676263, 10);
  sqcRYGate(q, 1.2015364477657, 11);
  sqcRZGate(q, 2.605494968949554, 11);
  sqcRYGate(q, 2.3165177944849393, 12);
  sqcRZGate(q, 3.136589180500492, 12);
  sqcRYGate(q, -1.569109647603705, 13);
  sqcRZGate(q, 0.0006106335673881891, 13);
  sqcRYGate(q, 0.0018962585643132483, 14);
  sqcRZGate(q, -1.1680506354704023, 14);
  sqcRYGate(q, -3.0709532584180494, 15);
  sqcRZGate(q, 2.9034089982094407, 15);
  sqcRYGate(q, 0.2026652573995396, 16);
  sqcRZGate(q, 0.7057658363139128, 16);
  sqcRYGate(q, 2.108816272805977, 17);
  sqcRZGate(q, -2.2570207663462014, 17);
  sqcRYGate(q, -2.7462746300545615, 18);
  sqcRZGate(q, 1.0235818300420023, 18);
  sqcRYGate(q, -1.7432687056313547, 19);
  sqcRZGate(q, -1.6743447288701767, 19);
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
  sqcRYGate(q, -2.7958807077921697, 0);
  sqcRZGate(q, 1.9584063359647617, 0);
  sqcRYGate(q, -0.7533095717957492, 1);
  sqcRZGate(q, -2.479795369281566, 1);
  sqcRYGate(q, -2.6667255500422233, 2);
  sqcRZGate(q, -1.6495216689268701, 2);
  sqcRYGate(q, -0.7999787638988671, 3);
  sqcRZGate(q, 0.4209105340435816, 3);
  sqcRYGate(q, 3.125534046149736, 4);
  sqcRZGate(q, 0.019567962717360388, 4);
  sqcRYGate(q, -0.6236483909708566, 5);
  sqcRZGate(q, 1.4634317786563535, 5);
  sqcRYGate(q, 0.8225770888297115, 6);
  sqcRZGate(q, -1.6877014362338179, 6);
  sqcRYGate(q, -3.0617251259488736, 7);
  sqcRZGate(q, 1.0998098230612712, 7);
  sqcRYGate(q, -3.1393726980986303, 8);
  sqcRZGate(q, -1.6250185758440585, 8);
  sqcRYGate(q, 1.4310689419797873, 9);
  sqcRZGate(q, 0.7572601396963092, 9);
  sqcRYGate(q, -0.010042279355797485, 10);
  sqcRZGate(q, 2.100594447833556, 10);
  sqcRYGate(q, 0.04139914304817415, 11);
  sqcRZGate(q, 0.5369017604931243, 11);
  sqcRYGate(q, -1.571556077342783, 12);
  sqcRZGate(q, -1.183656562886684, 12);
  sqcRYGate(q, -0.001893713901017854, 13);
  sqcRZGate(q, 1.5704335862195027, 13);
  sqcRYGate(q, 3.139474187638419, 14);
  sqcRZGate(q, 0.7791323554331078, 14);
  sqcRYGate(q, 2.698282630738558, 15);
  sqcRZGate(q, 2.498841091685017, 15);
  sqcRYGate(q, -0.007088732166203648, 16);
  sqcRZGate(q, -2.249226851059057, 16);
  sqcRYGate(q, 3.1389397649985096, 17);
  sqcRZGate(q, -2.3126330535680464, 17);
  sqcRYGate(q, 0.8580271941877043, 18);
  sqcRZGate(q, 0.18602474718190629, 18);
  sqcRYGate(q, 0.863925437771084, 19);
  sqcRZGate(q, -2.5973485380005332, 19);
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
  sqcRYGate(q, -1.510646036068939, 0);
  sqcRZGate(q, 1.9307002908945632, 0);
  sqcRYGate(q, -0.49819132054553017, 1);
  sqcRZGate(q, -0.5945145693448401, 1);
  sqcRYGate(q, 0.0380980133410187, 2);
  sqcRZGate(q, 0.39397419591726734, 2);
  sqcRYGate(q, 0.6247036220224036, 3);
  sqcRZGate(q, 2.7849808291015323, 3);
  sqcRYGate(q, -0.4345646183850716, 4);
  sqcRZGate(q, -1.3751926312735279, 4);
  sqcRYGate(q, -0.0396493453313127, 5);
  sqcRZGate(q, 2.008409956917104, 5);
  sqcRYGate(q, -3.1312850678790527, 6);
  sqcRZGate(q, -1.6714699213311093, 6);
  sqcRYGate(q, -3.0520506947666073, 7);
  sqcRZGate(q, -0.8690109610550765, 7);
  sqcRYGate(q, 0.12212722170146877, 8);
  sqcRZGate(q, -2.6459000246433915, 8);
  sqcRYGate(q, 2.0859128691392463, 9);
  sqcRZGate(q, 0.18087848939852272, 9);
  sqcRYGate(q, -0.0030691409605152487, 10);
  sqcRZGate(q, 1.9559969151022132, 10);
  sqcRYGate(q, 1.564484510484113, 11);
  sqcRZGate(q, -0.6510547069670212, 11);
  sqcRYGate(q, 0.0002530181548543453, 12);
  sqcRZGate(q, 2.755270644343037, 12);
  sqcRYGate(q, -1.5700035131134422, 13);
  sqcRZGate(q, 1.2389032656448045, 13);
  sqcRYGate(q, 1.5700841779679193, 14);
  sqcRZGate(q, -2.6815798780412674, 14);
  sqcRYGate(q, 2.0243605848076007, 15);
  sqcRZGate(q, -1.9573752903541033, 15);
  sqcRYGate(q, -1.5685657927243994, 16);
  sqcRZGate(q, 0.9311505466399715, 16);
  sqcRYGate(q, -1.0595569542772436, 17);
  sqcRZGate(q, 0.3502682218099586, 17);
  sqcRYGate(q, 0.5394773247475625, 18);
  sqcRZGate(q, 0.038175041653166986, 18);
  sqcRYGate(q, 2.786008174121735, 19);
  sqcRZGate(q, 1.6283120827370694, 19);
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
  sqcRYGate(q, 0.6003752886465327, 0);
  sqcRZGate(q, -0.23693861461403853, 0);
  sqcRYGate(q, 3.0520967721669283, 1);
  sqcRZGate(q, 2.669344930074923, 1);
  sqcRYGate(q, -3.1078612247429374, 2);
  sqcRZGate(q, 1.872559879901623, 2);
  sqcRYGate(q, 1.4274990517496775, 3);
  sqcRZGate(q, 0.4332524718821196, 3);
  sqcRYGate(q, -0.14050952799424188, 4);
  sqcRZGate(q, -1.8804277171172215, 4);
  sqcRYGate(q, -0.05336203044637117, 5);
  sqcRZGate(q, -0.07468558570435578, 5);
  sqcRYGate(q, -1.4575825760593464, 6);
  sqcRZGate(q, 3.116176229065183, 6);
  sqcRYGate(q, 0.20322731858928675, 7);
  sqcRZGate(q, -0.3628480194582026, 7);
  sqcRYGate(q, 0.0009958955079976055, 8);
  sqcRZGate(q, 0.08594107288697052, 8);
  sqcRYGate(q, -2.8053386509511697, 9);
  sqcRZGate(q, -2.7695805267957985, 9);
  sqcRYGate(q, -3.137368596237682, 10);
  sqcRZGate(q, -2.512734015356909, 10);
  sqcRYGate(q, 3.049271560371069, 11);
  sqcRZGate(q, 2.8129115928473594, 11);
  sqcRYGate(q, 1.569865171529064, 12);
  sqcRZGate(q, 1.4876802840370846, 12);
  sqcRYGate(q, -1.5489378593828955, 13);
  sqcRZGate(q, 1.579926374282934, 13);
  sqcRYGate(q, -3.139231676848696, 14);
  sqcRZGate(q, 0.03601097787797837, 14);
  sqcRYGate(q, 3.1390170750517647, 15);
  sqcRZGate(q, 2.3500754575933684, 15);
  sqcRYGate(q, 0.022268995347068277, 16);
  sqcRZGate(q, -1.147304736413524, 16);
  sqcRYGate(q, -0.6870474174991168, 17);
  sqcRZGate(q, 0.410120120681448, 17);
  sqcRYGate(q, -1.633265038252664, 18);
  sqcRZGate(q, -1.3271788879284199, 18);
  sqcRYGate(q, -2.1965563854626646, 19);
  sqcRZGate(q, -0.41992350102406273, 19);
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
  sqcRYGate(q, -2.781923987350161, 0);
  sqcRZGate(q, 0.8821373488892703, 0);
  sqcRYGate(q, 1.0298249984685581, 1);
  sqcRZGate(q, 0.726558523787654, 1);
  sqcRYGate(q, -1.6129457117070822, 2);
  sqcRZGate(q, -2.0272254155947724, 2);
  sqcRYGate(q, 2.9197444953173224, 3);
  sqcRZGate(q, 0.6296942512990107, 3);
  sqcRYGate(q, 1.5377300401495981, 4);
  sqcRZGate(q, -0.3893650748261351, 4);
  sqcRYGate(q, -0.023334397279112018, 5);
  sqcRZGate(q, 3.0038923566762343, 5);
  sqcRYGate(q, 1.8834800789947277, 6);
  sqcRZGate(q, -0.00026420719618780453, 6);
  sqcRYGate(q, 1.241193508626612, 7);
  sqcRZGate(q, -3.028960988337452, 7);
  sqcRYGate(q, 0.012265784339988706, 8);
  sqcRZGate(q, -0.5320866075445936, 8);
  sqcRYGate(q, -2.227658935771162, 9);
  sqcRZGate(q, -0.03606733964458808, 9);
  sqcRYGate(q, -0.07473723534085183, 10);
  sqcRZGate(q, -0.069087080065108, 10);
  sqcRYGate(q, 3.141117030975919, 11);
  sqcRZGate(q, -2.8157485624959993, 11);
  sqcRYGate(q, 0.00012844582150073336, 12);
  sqcRZGate(q, -1.4872016428421126, 12);
  sqcRYGate(q, 2.4222725420411026, 13);
  sqcRZGate(q, 0.8659273925109744, 13);
  sqcRYGate(q, -1.1715636603071289e-05, 14);
  sqcRZGate(q, -1.1581960943382852, 14);
  sqcRYGate(q, -0.7681128745766426, 15);
  sqcRZGate(q, -0.9958876039032836, 15);
  sqcRYGate(q, 0.016778387942966155, 16);
  sqcRZGate(q, -1.5389874103836194, 16);
  sqcRYGate(q, 2.990779868503768, 17);
  sqcRZGate(q, -2.633464680180138, 17);
  sqcRYGate(q, 0.08248985661014263, 18);
  sqcRZGate(q, -1.796711225736579, 18);
  sqcRYGate(q, 1.575001357005358, 19);
  sqcRZGate(q, -1.4309582629633102, 19);
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
  sqcRYGate(q, 0.33504314442500144, 0);
  sqcRZGate(q, -2.4958620455334555, 0);
  sqcRYGate(q, -1.217099445699115, 1);
  sqcRZGate(q, -0.11783054776975366, 1);
  sqcRYGate(q, 2.290355171823692, 2);
  sqcRZGate(q, 2.821721730687583, 2);
  sqcRYGate(q, -1.5568042780999298, 3);
  sqcRZGate(q, -0.005981113382340047, 3);
  sqcRYGate(q, 1.3630372105652715, 4);
  sqcRZGate(q, 3.12541624966083, 4);
  sqcRYGate(q, 2.790854705092067, 5);
  sqcRZGate(q, -3.075774770590244, 5);
  sqcRYGate(q, 1.8313019241426378, 6);
  sqcRZGate(q, 0.0052386474504126914, 6);
  sqcRYGate(q, -1.7925963341187183, 7);
  sqcRZGate(q, 0.005576261692066422, 7);
  sqcRYGate(q, -1.2179731044350328, 8);
  sqcRZGate(q, 3.1403361992848007, 8);
  sqcRYGate(q, 0.31973586583412494, 9);
  sqcRZGate(q, -2.2280534524150215, 9);
  sqcRYGate(q, -3.0738404867408673, 10);
  sqcRZGate(q, 3.119548256166258, 10);
  sqcRYGate(q, -1.5280117500726824, 11);
  sqcRZGate(q, -0.05982623761805783, 11);
  sqcRYGate(q, -1.5707000307424317, 12);
  sqcRZGate(q, -1.7786945049817209, 12);
  sqcRYGate(q, -1.0961149434277964, 13);
  sqcRZGate(q, -1.5270867750664436, 13);
  sqcRYGate(q, 1.1710141069558007, 14);
  sqcRZGate(q, 0.9440371231408005, 14);
  sqcRYGate(q, 2.1802200824815685, 15);
  sqcRZGate(q, 1.572930168657131, 15);
  sqcRYGate(q, -1.585790536391045, 16);
  sqcRZGate(q, 0.006454990862789778, 16);
  sqcRYGate(q, -1.2995773117933749, 17);
  sqcRZGate(q, -2.9436303107118826, 17);
  sqcRYGate(q, 1.3997105703369037, 18);
  sqcRZGate(q, 1.3827148229607629, 18);
  sqcRYGate(q, 0.2609244255184041, 19);
  sqcRZGate(q, 1.7017305680392134, 19);
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
  sqcRYGate(q, -0.24010382311058479, 0);
  sqcRZGate(q, 1.4245791484208814, 0);
  sqcRYGate(q, -0.9541148164595245, 1);
  sqcRZGate(q, 0.10727832752316502, 1);
  sqcRYGate(q, -1.509093543160127, 2);
  sqcRZGate(q, 0.0006748824886197745, 2);
  sqcRYGate(q, -1.3550247987419577, 3);
  sqcRZGate(q, 0.011630479815528894, 3);
  sqcRYGate(q, -0.5446548520713379, 4);
  sqcRZGate(q, 0.005228444778041136, 4);
  sqcRYGate(q, 2.0940376805977907, 5);
  sqcRZGate(q, 0.006835386019917059, 5);
  sqcRYGate(q, -1.2729198129808, 6);
  sqcRZGate(q, -0.002983015053996852, 6);
  sqcRYGate(q, -1.9815383657636267, 7);
  sqcRZGate(q, -3.1408783464052537, 7);
  sqcRYGate(q, -1.1241635471599594, 8);
  sqcRZGate(q, 3.1401289133153534, 8);
  sqcRYGate(q, 1.6942961391745355, 9);
  sqcRZGate(q, 0.0008495276281400928, 9);
  sqcRYGate(q, -2.3022027181465337, 10);
  sqcRZGate(q, -3.141218915528854, 10);
  sqcRYGate(q, 0.8880752076863502, 11);
  sqcRZGate(q, 0.376126181915895, 11);
  sqcRYGate(q, 3.1395059096426534, 12);
  sqcRZGate(q, 2.068887694573335, 12);
  sqcRYGate(q, 0.0011584393552306338, 13);
  sqcRZGate(q, 2.5938864561383883, 13);
  sqcRYGate(q, 3.140872480887619, 14);
  sqcRZGate(q, 0.9427477368877739, 14);
  sqcRYGate(q, 1.5595854750485003, 15);
  sqcRZGate(q, 3.1390053586767332, 15);
  sqcRYGate(q, 1.5710216497820768, 16);
  sqcRZGate(q, 1.5706331796965927, 16);
  sqcRYGate(q, 3.141415128628728, 17);
  sqcRZGate(q, -0.023724798078561208, 17);
  sqcRYGate(q, -1.6280438386790146, 18);
  sqcRZGate(q, -3.136671780353536, 18);
  sqcRYGate(q, -2.322350801479481, 19);
  sqcRZGate(q, 2.260526244745547, 19);
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
  sqcRYGate(q, 2.769272776808483, 0);
  sqcRZGate(q, -2.830983856727793, 0);
  sqcRYGate(q, 1.7252394033963026, 1);
  sqcRZGate(q, -3.1022071947022356, 1);
  sqcRYGate(q, 1.7238209561457296, 2);
  sqcRZGate(q, 0.0020006079239924795, 2);
  sqcRYGate(q, -2.7055559505182636, 3);
  sqcRZGate(q, 0.015604239512788888, 3);
  sqcRYGate(q, 1.0069048333541284, 4);
  sqcRZGate(q, 3.13966595100978, 4);
  sqcRYGate(q, 2.085728942341944, 5);
  sqcRZGate(q, -3.1415382194679964, 5);
  sqcRYGate(q, -0.9758139104589914, 6);
  sqcRZGate(q, -0.0006333676404849608, 6);
  sqcRYGate(q, 1.5142335981283388, 7);
  sqcRZGate(q, 3.124317364195644, 7);
  sqcRYGate(q, -3.1241701748950383, 8);
  sqcRZGate(q, -0.005330382578511632, 8);
  sqcRYGate(q, 0.969474192689106, 9);
  sqcRZGate(q, -0.016169669338960625, 9);
  sqcRYGate(q, 1.487534934882684, 10);
  sqcRZGate(q, 0.0007704218320892674, 10);
  sqcRYGate(q, 0.011512446186344316, 11);
  sqcRZGate(q, 2.768870058957118, 11);
  sqcRYGate(q, 3.140380391903625, 12);
  sqcRZGate(q, 2.2763542817031075, 12);
  sqcRYGate(q, 2.2972586775565556, 13);
  sqcRZGate(q, 1.3319847746026527, 13);
  sqcRYGate(q, -1.5721726821533624, 14);
  sqcRZGate(q, -0.0009157729831499118, 14);
  sqcRYGate(q, -1.5680265167459542, 15);
  sqcRZGate(q, 0.0010670786068660688, 15);
  sqcRYGate(q, 1.5711206634763357, 16);
  sqcRZGate(q, -0.0017193056561307693, 16);
  sqcRYGate(q, -3.1408343867401083, 17);
  sqcRZGate(q, -1.589605871822639, 17);
  sqcRYGate(q, -1.7036309133461462, 18);
  sqcRZGate(q, 1.5534930417491957, 18);
  sqcRYGate(q, -3.135768865789997, 19);
  sqcRZGate(q, 1.9241028508045313, 19);
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
  sqcRYGate(q, -1.0968146829232754, 0);
  sqcRZGate(q, -2.460766571064841, 0);
  sqcRYGate(q, 0.05184903595630797, 1);
  sqcRZGate(q, -0.7695373589042818, 1);
  sqcRYGate(q, -1.930286944695669, 2);
  sqcRZGate(q, 0.002251329533780933, 2);
  sqcRYGate(q, -2.333086533041817, 3);
  sqcRZGate(q, -3.123084427986509, 3);
  sqcRYGate(q, -0.6333355734970008, 4);
  sqcRZGate(q, -3.1406775286158357, 4);
  sqcRYGate(q, 1.7346198103022312, 5);
  sqcRZGate(q, 0.0018554355351003023, 5);
  sqcRYGate(q, 1.5320134515471615, 6);
  sqcRZGate(q, -1.6682079076016647, 6);
  sqcRYGate(q, -3.0940660986564854, 7);
  sqcRZGate(q, -0.04235129882078553, 7);
  sqcRYGate(q, -0.33034038313453257, 8);
  sqcRZGate(q, 0.003941022099927416, 8);
  sqcRYGate(q, 1.9891981510326886, 9);
  sqcRZGate(q, 1.3052358687783199, 9);
  sqcRYGate(q, -2.1166988241512534, 10);
  sqcRZGate(q, -3.1411579781264134, 10);
  sqcRYGate(q, 2.6476567233252495, 11);
  sqcRZGate(q, -3.1328081589475363, 11);
  sqcRYGate(q, 2.1553431655186275, 12);
  sqcRZGate(q, 2.4799648792046147, 12);
  sqcRYGate(q, 0.00030155605405557395, 13);
  sqcRZGate(q, -1.966085422274288, 13);
  sqcRYGate(q, -1.5713977169503464, 14);
  sqcRZGate(q, -1.570188430321918, 14);
  sqcRYGate(q, 1.5706592608108103, 15);
  sqcRZGate(q, 1.5715673406235782, 15);
  sqcRYGate(q, -1.5707539414739928, 16);
  sqcRZGate(q, -0.0003994724715443709, 16);
  sqcRYGate(q, -0.6338776958128847, 17);
  sqcRZGate(q, 3.0439356301656666, 17);
  sqcRYGate(q, -1.422144515814079, 18);
  sqcRZGate(q, 0.06911364017785984, 18);
  sqcRYGate(q, 0.13820525273867743, 19);
  sqcRZGate(q, -2.5306001418246953, 19);
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
  sqcRYGate(q, -3.1316967185895033, 0);
  sqcRZGate(q, -3.0206367998687367, 0);
  sqcRYGate(q, 0.017685913711924312, 1);
  sqcRZGate(q, -2.4121201085672794, 1);
  sqcRYGate(q, -1.272992988564265, 2);
  sqcRZGate(q, 0.0020642943060860115, 2);
  sqcRYGate(q, -1.6560691898618716, 3);
  sqcRZGate(q, -3.140375782304556, 3);
  sqcRYGate(q, 1.4120436797976685, 4);
  sqcRZGate(q, 3.1408298828174503, 4);
  sqcRYGate(q, -1.4743900544648514, 5);
  sqcRZGate(q, -3.141375888561352, 5);
  sqcRYGate(q, 0.00019964091101876136, 6);
  sqcRZGate(q, 1.6694030638210782, 6);
  sqcRYGate(q, 0.04571202298229071, 7);
  sqcRZGate(q, -3.113916732583143, 7);
  sqcRYGate(q, 0.606268776865023, 8);
  sqcRZGate(q, -3.1409692197026775, 8);
  sqcRYGate(q, 0.0068714347471035, 9);
  sqcRZGate(q, -1.3083769952321305, 9);
  sqcRYGate(q, 1.796843645728976, 10);
  sqcRZGate(q, -3.1413427937356775, 10);
  sqcRYGate(q, 2.3813098263164267, 11);
  sqcRZGate(q, 2.7615137582029776, 11);
  sqcRYGate(q, 3.141061280575688, 12);
  sqcRZGate(q, 1.5133143001041893, 12);
  sqcRYGate(q, -0.000630462684355641, 13);
  sqcRZGate(q, 1.0104246475610497, 13);
  sqcRYGate(q, 1.570829027201732, 14);
  sqcRZGate(q, -1.5585688576630519, 14);
  sqcRYGate(q, 1.5718628738505291, 15);
  sqcRZGate(q, -1.571016981296318, 15);
  sqcRYGate(q, 1.5403465301257528, 16);
  sqcRZGate(q, -3.1407633608221044, 16);
  sqcRYGate(q, 1.5897260598982208, 17);
  sqcRZGate(q, 2.3546079294867277, 17);
  sqcRYGate(q, -1.5514371447108988, 18);
  sqcRZGate(q, 2.0709804226235056, 18);
  sqcRYGate(q, 1.1191698584012137, 19);
  sqcRZGate(q, -3.1144981955806816, 19);
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
  sqcRYGate(q, -2.6420473576284382, 0);
  sqcRZGate(q, -2.36907788475414, 0);
  sqcRYGate(q, 1.5580202758442372, 1);
  sqcRZGate(q, 1.5656412685180028, 1);
  sqcRYGate(q, -1.1300433905510427, 2);
  sqcRZGate(q, 1.5695096805847977, 2);
  sqcRYGate(q, -1.063990044039322, 3);
  sqcRZGate(q, -1.5719432778174622, 3);
  sqcRYGate(q, 2.552578266037012, 4);
  sqcRZGate(q, -1.5713987986172997, 4);
  sqcRYGate(q, 2.3471817106995756, 5);
  sqcRZGate(q, -1.5571948685075587, 5);
  sqcRYGate(q, 0.3444790471671118, 6);
  sqcRZGate(q, -1.5714958098760503, 6);
  sqcRYGate(q, 1.5772612516511586, 7);
  sqcRZGate(q, -1.5721620355090558, 7);
  sqcRYGate(q, 1.5836071982008955, 8);
  sqcRZGate(q, 1.569235231730371, 8);
  sqcRYGate(q, 0.9832646148176103, 9);
  sqcRZGate(q, -1.5704765972325598, 9);
  sqcRYGate(q, 1.8064823564081198, 10);
  sqcRZGate(q, -1.5709132119099194, 10);
  sqcRYGate(q, 0.006430399339120818, 11);
  sqcRZGate(q, 1.9616610780530674, 11);
  sqcRYGate(q, -3.141262701391466, 12);
  sqcRZGate(q, 0.6034350383412316, 12);
  sqcRYGate(q, 1.577040648171912, 13);
  sqcRZGate(q, -3.1389669009998706, 13);
  sqcRYGate(q, 1.5702102280713426, 14);
  sqcRZGate(q, -3.141081200312372, 14);
  sqcRYGate(q, 1.5769408434033991, 15);
  sqcRZGate(q, -1.5754948746936885, 15);
  sqcRYGate(q, -2.616241681422598, 16);
  sqcRZGate(q, -1.5701912868040973, 16);
  sqcRYGate(q, -0.0006669334554274542, 17);
  sqcRZGate(q, -0.7819954820385372, 17);
  sqcRYGate(q, 3.1413980141339986, 18);
  sqcRZGate(q, -0.5261234359619242, 18);
  sqcRYGate(q, -2.9765123854507007, 19);
  sqcRZGate(q, 0.9201686401233296, 19);
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
  sqcRYGate(q, -1.5704086826962609, 0);
  sqcRZGate(q, 1.4219716990082807, 0);
  sqcRYGate(q, 1.5695471428766428, 1);
  sqcRZGate(q, -1.3679709779827212, 1);
  sqcRYGate(q, 1.5711665882153574, 2);
  sqcRZGate(q, -1.72992662039147, 2);
  sqcRYGate(q, -1.561062257280606, 3);
  sqcRZGate(q, -2.9149757040402213, 3);
  sqcRYGate(q, -1.5709745266944717, 4);
  sqcRZGate(q, -0.1854601151055336, 4);
  sqcRYGate(q, 1.5707068589603157, 5);
  sqcRZGate(q, -1.2129849085755975, 5);
  sqcRYGate(q, -1.570515210313287, 6);
  sqcRZGate(q, -0.15178748154464797, 6);
  sqcRYGate(q, 1.5685874049807162, 7);
  sqcRZGate(q, -2.9277580907382648, 7);
  sqcRYGate(q, 1.5707161684826003, 8);
  sqcRZGate(q, -0.14988137557216602, 8);
  sqcRYGate(q, -1.5649657603879765, 9);
  sqcRZGate(q, 0.04740366631447035, 9);
  sqcRYGate(q, -1.570232771932675, 10);
  sqcRZGate(q, -1.1625528300339014, 10);
  sqcRYGate(q, -1.5664720483091497, 11);
  sqcRZGate(q, 2.3896953188808916, 11);
  sqcRYGate(q, 1.5713918598066305, 12);
  sqcRZGate(q, 1.4163860776060933, 12);
  sqcRYGate(q, -1.5704313592548471, 13);
  sqcRZGate(q, -1.337761130687649, 13);
  sqcRYGate(q, 1.5712947712318333, 14);
  sqcRZGate(q, -0.14597448780877453, 14);
  sqcRYGate(q, 1.569462924757071, 15);
  sqcRZGate(q, -1.3230303451117806, 15);
  sqcRYGate(q, -1.5699516307499115, 16);
  sqcRZGate(q, -0.1541488677806582, 16);
  sqcRYGate(q, -1.5951668511217294, 17);
  sqcRZGate(q, 0.2536501554056343, 17);
  sqcRYGate(q, 3.1165050060858657, 18);
  sqcRZGate(q, -1.1729692128941227, 18);
  sqcRYGate(q, -0.018328984782517387, 19);
  sqcRZGate(q, 2.4735169779333637, 19);

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
