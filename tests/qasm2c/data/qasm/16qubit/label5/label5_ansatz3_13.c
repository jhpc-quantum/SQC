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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -3.027682120244852, 0);
  sqcRZGate(q, -2.310948326257878, 0);
  sqcRYGate(q, -0.8471363696635299, 1);
  sqcRZGate(q, -0.276559500322513, 1);
  sqcRYGate(q, -0.6635328015776611, 2);
  sqcRZGate(q, -0.43004023502492683, 2);
  sqcRYGate(q, -1.2287461332661105, 3);
  sqcRZGate(q, -2.925800636934938, 3);
  sqcRYGate(q, 3.1364416688631187, 4);
  sqcRZGate(q, -0.7976414425437319, 4);
  sqcRYGate(q, 1.5828475445535932, 5);
  sqcRZGate(q, -2.583137472042944, 5);
  sqcRYGate(q, 1.9022004001379185, 6);
  sqcRZGate(q, 3.097787578584556, 6);
  sqcRYGate(q, 0.0005000143861755291, 7);
  sqcRZGate(q, 0.6063951803305451, 7);
  sqcRYGate(q, -0.9216477942290542, 8);
  sqcRZGate(q, 1.2941552393962457, 8);
  sqcRYGate(q, 0.340726601008698, 9);
  sqcRZGate(q, -2.127144017336569, 9);
  sqcRYGate(q, 1.3026993144089714, 10);
  sqcRZGate(q, 0.2469878935963614, 10);
  sqcRYGate(q, 3.1097683397261093, 11);
  sqcRZGate(q, -2.3882756960806364, 11);
  sqcRYGate(q, 3.139982536124916, 12);
  sqcRZGate(q, -1.9491954561777867, 12);
  sqcRYGate(q, -0.004350545734272515, 13);
  sqcRZGate(q, 2.812329172509402, 13);
  sqcRYGate(q, 0.15436722958252821, 14);
  sqcRZGate(q, 2.2043493406668473, 14);
  sqcRYGate(q, -0.4126080368113075, 15);
  sqcRZGate(q, 2.848644791700241, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.2782077999949717, 0);
  sqcRZGate(q, -0.5565494238640537, 0);
  sqcRYGate(q, 2.112728807770746, 1);
  sqcRZGate(q, -1.5563602981760534, 1);
  sqcRYGate(q, 0.03217972396000768, 2);
  sqcRZGate(q, -0.49134777122293094, 2);
  sqcRYGate(q, 0.05949874192284404, 3);
  sqcRZGate(q, -2.433789933509921, 3);
  sqcRYGate(q, -1.5577246963609288, 4);
  sqcRZGate(q, 1.4709737080037835, 4);
  sqcRYGate(q, -3.1041374301480595, 5);
  sqcRZGate(q, 1.5768916146893568, 5);
  sqcRYGate(q, 1.5770262532568553, 6);
  sqcRZGate(q, 2.7875146275541742, 6);
  sqcRYGate(q, 3.140602120032499, 7);
  sqcRZGate(q, 1.4261726307260822, 7);
  sqcRYGate(q, -0.0009641086920101993, 8);
  sqcRZGate(q, 1.2934370469199603, 8);
  sqcRYGate(q, 3.1200474678844943, 9);
  sqcRZGate(q, 2.146590618727933, 9);
  sqcRYGate(q, -1.4997546725575877, 10);
  sqcRZGate(q, -0.8294996354960659, 10);
  sqcRYGate(q, 0.00923311325037781, 11);
  sqcRZGate(q, -0.002115552769460294, 11);
  sqcRYGate(q, 0.0002936490663158353, 12);
  sqcRZGate(q, -2.266726426947919, 12);
  sqcRYGate(q, 3.1381145399615162, 13);
  sqcRZGate(q, 1.0582682511202337, 13);
  sqcRYGate(q, 1.6295453061346477, 14);
  sqcRZGate(q, -1.8915584144642272, 14);
  sqcRYGate(q, -3.0512600807538695, 15);
  sqcRZGate(q, 1.8822889344478055, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.6293855291424484, 0);
  sqcRZGate(q, -1.7116863352081249, 0);
  sqcRYGate(q, -1.061609023298292, 1);
  sqcRZGate(q, 1.9619468518935896, 1);
  sqcRYGate(q, 3.13995682398558, 2);
  sqcRZGate(q, 0.6145990851851598, 2);
  sqcRYGate(q, 1.5314812196843954, 3);
  sqcRZGate(q, 1.402491022909144, 3);
  sqcRYGate(q, 1.4933368490018823, 4);
  sqcRZGate(q, 0.0064081053065433834, 4);
  sqcRYGate(q, 1.6455856995435827, 5);
  sqcRZGate(q, -1.2579809868881249, 5);
  sqcRYGate(q, 3.01739394025726, 6);
  sqcRZGate(q, 2.425772993473788, 6);
  sqcRYGate(q, 0.3992825838040109, 7);
  sqcRZGate(q, 1.3489312986593816, 7);
  sqcRYGate(q, 3.132161447421924, 8);
  sqcRZGate(q, -2.0664260383133737, 8);
  sqcRYGate(q, 1.8117297786076563, 9);
  sqcRZGate(q, -1.8019148470938091, 9);
  sqcRYGate(q, 1.4636206311548552, 10);
  sqcRZGate(q, 2.471212444650158, 10);
  sqcRYGate(q, 0.545200760634236, 11);
  sqcRZGate(q, 1.4976905869361663, 11);
  sqcRYGate(q, 0.007244291051531927, 12);
  sqcRZGate(q, -0.7054522944518178, 12);
  sqcRYGate(q, -0.0006842678835471327, 13);
  sqcRZGate(q, -0.5074792108852799, 13);
  sqcRYGate(q, -2.7206879821841494, 14);
  sqcRZGate(q, 2.48610358603408, 14);
  sqcRYGate(q, -2.063844195221285, 15);
  sqcRZGate(q, -2.124192126832652, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 3.015367433546267, 0);
  sqcRZGate(q, -2.3132368317131062, 0);
  sqcRYGate(q, -1.3670374281005104, 1);
  sqcRZGate(q, -1.7452244302525337, 1);
  sqcRYGate(q, 3.082894125228458, 2);
  sqcRZGate(q, 2.2762319201189074, 2);
  sqcRYGate(q, -3.131171621609906, 3);
  sqcRZGate(q, -2.8831170968021462, 3);
  sqcRYGate(q, 1.5412888656628396, 4);
  sqcRZGate(q, -2.635326705335895, 4);
  sqcRYGate(q, -0.03087444052624111, 5);
  sqcRZGate(q, 2.7609431317865565, 5);
  sqcRYGate(q, 3.0351200504250944, 6);
  sqcRZGate(q, 2.6965093492092005, 6);
  sqcRYGate(q, -0.044645315510386065, 7);
  sqcRZGate(q, -0.3442009278374618, 7);
  sqcRYGate(q, -3.141501680638292, 8);
  sqcRZGate(q, -0.7729802738529392, 8);
  sqcRYGate(q, 3.1315117414181084, 9);
  sqcRZGate(q, 1.665942044461823, 9);
  sqcRYGate(q, -2.6774184213634795, 10);
  sqcRZGate(q, -1.4044211242132971, 10);
  sqcRYGate(q, -3.1205761630289333, 11);
  sqcRZGate(q, 0.6777270518606022, 11);
  sqcRYGate(q, -1.5836619404894376, 12);
  sqcRZGate(q, 2.3731813359001284, 12);
  sqcRYGate(q, 0.002453104884133289, 13);
  sqcRZGate(q, -2.438409151517056, 13);
  sqcRYGate(q, 2.7311687564306077, 14);
  sqcRZGate(q, -0.6519708082259983, 14);
  sqcRYGate(q, -0.3291513398666348, 15);
  sqcRZGate(q, -0.25846958251054275, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.10361209481490881, 0);
  sqcRZGate(q, 2.797672330371247, 0);
  sqcRYGate(q, -1.928685024904183, 1);
  sqcRZGate(q, 1.0852030372550698, 1);
  sqcRYGate(q, -0.03366919295381525, 2);
  sqcRZGate(q, 1.1709349867847236, 2);
  sqcRYGate(q, -2.0467151855772094, 3);
  sqcRZGate(q, -2.7920462732300257, 3);
  sqcRYGate(q, 3.0380748918952496, 4);
  sqcRZGate(q, -2.6584121517171395, 4);
  sqcRYGate(q, -1.5770575313993518, 5);
  sqcRZGate(q, 1.3065133390347548, 5);
  sqcRYGate(q, -2.7428026808432846, 6);
  sqcRZGate(q, -3.0256540023802954, 6);
  sqcRYGate(q, -1.7054014016145793, 7);
  sqcRZGate(q, 3.0675799391769973, 7);
  sqcRYGate(q, 0.001993539516706555, 8);
  sqcRZGate(q, -2.161815389993148, 8);
  sqcRYGate(q, -1.2045822924585323, 9);
  sqcRZGate(q, 0.5783781076539702, 9);
  sqcRYGate(q, 0.0010980277470211235, 10);
  sqcRZGate(q, 2.074781160820252, 10);
  sqcRYGate(q, 0.6946595527421507, 11);
  sqcRZGate(q, 2.284601777494973, 11);
  sqcRYGate(q, -3.0963513666385665, 12);
  sqcRZGate(q, -2.78524443670689, 12);
  sqcRYGate(q, 3.121984941197725, 13);
  sqcRZGate(q, 2.235219950804425, 13);
  sqcRYGate(q, -3.1366604563914326, 14);
  sqcRZGate(q, -0.6610400518488815, 14);
  sqcRYGate(q, -0.8190590061112681, 15);
  sqcRZGate(q, -1.417512558095531, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.17831081829084935, 0);
  sqcRZGate(q, -2.2056352340049656, 0);
  sqcRYGate(q, 1.5442327219236687, 1);
  sqcRZGate(q, -1.709217158774708, 1);
  sqcRYGate(q, 2.620403269583047, 2);
  sqcRZGate(q, 1.2203732624050194, 2);
  sqcRYGate(q, -1.7697395575672685, 3);
  sqcRZGate(q, -1.3085667112352264, 3);
  sqcRYGate(q, 2.6157023673698787, 4);
  sqcRZGate(q, 1.627147383859553, 4);
  sqcRYGate(q, 0.001268237825444857, 5);
  sqcRZGate(q, -0.6089228617084234, 5);
  sqcRYGate(q, 2.7519370201659563, 6);
  sqcRZGate(q, -1.0887676879600665, 6);
  sqcRYGate(q, 0.032183316918650284, 7);
  sqcRZGate(q, 0.08645755679428557, 7);
  sqcRYGate(q, 1.5536756840324673, 8);
  sqcRZGate(q, 1.5994324168800835, 8);
  sqcRYGate(q, 0.054177774059281765, 9);
  sqcRZGate(q, 2.06367638802761, 9);
  sqcRYGate(q, 0.19624855513753303, 10);
  sqcRZGate(q, -0.47458829337135194, 10);
  sqcRYGate(q, 2.4354554827296298, 11);
  sqcRZGate(q, 1.7332391440887418, 11);
  sqcRYGate(q, 3.0971208129339223, 12);
  sqcRZGate(q, -0.9916570855922935, 12);
  sqcRYGate(q, -0.001390981932886781, 13);
  sqcRZGate(q, -2.9393342568460294, 13);
  sqcRYGate(q, -0.15862110073292257, 14);
  sqcRZGate(q, -0.6521510161273071, 14);
  sqcRYGate(q, -2.0462544909359104, 15);
  sqcRZGate(q, -2.710065371562803, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.48434201843601166, 0);
  sqcRZGate(q, -2.3070950475978877, 0);
  sqcRYGate(q, 1.447631971207541, 1);
  sqcRZGate(q, -0.1723609749612942, 1);
  sqcRYGate(q, 0.4427453826299761, 2);
  sqcRZGate(q, -1.2268061413369988, 2);
  sqcRYGate(q, 3.0470997353281084, 3);
  sqcRZGate(q, -2.1079778921269208, 3);
  sqcRYGate(q, -2.9212653963257176, 4);
  sqcRZGate(q, 2.4214168226843635, 4);
  sqcRYGate(q, -1.5954851038125133, 5);
  sqcRZGate(q, 1.725814618658605, 5);
  sqcRYGate(q, 2.2385134065748256, 6);
  sqcRZGate(q, 2.9664435455445997, 6);
  sqcRYGate(q, -0.8827662000390389, 7);
  sqcRZGate(q, 0.413702435560535, 7);
  sqcRYGate(q, 2.318491800609573, 8);
  sqcRZGate(q, -1.567036286146541, 8);
  sqcRYGate(q, -3.1409126164618613, 9);
  sqcRZGate(q, 1.7622861725874026, 9);
  sqcRYGate(q, -0.015623791531261587, 10);
  sqcRZGate(q, -1.1908456183581544, 10);
  sqcRYGate(q, 2.0012680441189854, 11);
  sqcRZGate(q, -0.9887729947597794, 11);
  sqcRYGate(q, 3.1104391023683333, 12);
  sqcRZGate(q, 2.6291022595922753, 12);
  sqcRYGate(q, 0.06280642756705479, 13);
  sqcRZGate(q, 2.9362430662090335, 13);
  sqcRYGate(q, -0.002513886986512226, 14);
  sqcRZGate(q, -2.2395209456210354, 14);
  sqcRYGate(q, 0.844058920167269, 15);
  sqcRZGate(q, -3.140759908448411, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 2.9086593720003484, 0);
  sqcRZGate(q, -2.0254760351366805, 0);
  sqcRYGate(q, -1.7673392277535083, 1);
  sqcRZGate(q, -2.401065573200753, 1);
  sqcRYGate(q, 0.47511341780472194, 2);
  sqcRZGate(q, -1.3215039835549751, 2);
  sqcRYGate(q, -3.1184454959109686, 3);
  sqcRZGate(q, 2.3286866357491154, 3);
  sqcRYGate(q, 0.0008824562188286216, 4);
  sqcRZGate(q, 2.320323026006895, 4);
  sqcRYGate(q, 0.0007346372588422065, 5);
  sqcRZGate(q, 1.2284491408511296, 5);
  sqcRYGate(q, 0.0864861915996178, 6);
  sqcRZGate(q, 2.7720267139041126, 6);
  sqcRYGate(q, -1.7144081349164555, 7);
  sqcRZGate(q, 0.31015144770987746, 7);
  sqcRYGate(q, -1.5708120870973952, 8);
  sqcRZGate(q, 1.9466542733469783, 8);
  sqcRYGate(q, 1.3604453259936091, 9);
  sqcRZGate(q, -0.8552062851666591, 9);
  sqcRYGate(q, 0.9774825509971176, 10);
  sqcRZGate(q, 1.8988773271674408, 10);
  sqcRYGate(q, 2.077985112941015, 11);
  sqcRZGate(q, 0.7339362381577558, 11);
  sqcRYGate(q, 0.7669637248948913, 12);
  sqcRZGate(q, 3.0992491094209837, 12);
  sqcRYGate(q, -3.139205229150958, 13);
  sqcRZGate(q, -0.41746237797093677, 13);
  sqcRYGate(q, 1.5492164153528238, 14);
  sqcRZGate(q, -1.8167003663943135, 14);
  sqcRYGate(q, 2.368235706278674, 15);
  sqcRZGate(q, -0.5682746747120933, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.843955460317902, 0);
  sqcRZGate(q, -2.976018785102118, 0);
  sqcRYGate(q, -1.7466761575395788, 1);
  sqcRZGate(q, 0.002700852133020959, 1);
  sqcRYGate(q, 0.524937611290504, 2);
  sqcRZGate(q, 1.8597126427300965, 2);
  sqcRYGate(q, -1.5708162970758153, 3);
  sqcRZGate(q, -0.35385591000127353, 3);
  sqcRYGate(q, 1.5447334233279228, 4);
  sqcRZGate(q, -2.6461345512015964, 4);
  sqcRYGate(q, 2.2950278327657117, 5);
  sqcRZGate(q, 2.9502356495607227, 5);
  sqcRYGate(q, 1.5684784225592874, 6);
  sqcRZGate(q, -1.546968862196688, 6);
  sqcRYGate(q, 2.1345681662307077, 7);
  sqcRZGate(q, 2.069344875040212, 7);
  sqcRYGate(q, -0.00047111280297684743, 8);
  sqcRZGate(q, 2.3264178603916106, 8);
  sqcRYGate(q, 0.034391098854272835, 9);
  sqcRZGate(q, -2.282286267981414, 9);
  sqcRYGate(q, -0.00015574011501495733, 10);
  sqcRZGate(q, 2.7850820160440373, 10);
  sqcRYGate(q, 3.133080036218109, 11);
  sqcRZGate(q, -2.5488223382265645, 11);
  sqcRYGate(q, -0.6708326968707043, 12);
  sqcRZGate(q, -2.9224775897471695, 12);
  sqcRYGate(q, -2.5291460082633743, 13);
  sqcRZGate(q, -1.2675962057504462, 13);
  sqcRYGate(q, 0.0004691010231994817, 14);
  sqcRZGate(q, 2.5778208359309622, 14);
  sqcRYGate(q, -3.059180488553874, 15);
  sqcRZGate(q, 1.3195612312338383, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.5373726178060865, 0);
  sqcRZGate(q, -3.082756963994371, 0);
  sqcRYGate(q, -1.6359775058540338, 1);
  sqcRZGate(q, 0.46791647594875807, 1);
  sqcRYGate(q, -0.3708654849374484, 2);
  sqcRZGate(q, 1.4064610577386063, 2);
  sqcRYGate(q, -2.9531297035684654, 3);
  sqcRZGate(q, 0.01463499485883446, 3);
  sqcRYGate(q, -0.06210090075393726, 4);
  sqcRZGate(q, -0.7221544532300195, 4);
  sqcRYGate(q, 3.0777777099781876, 5);
  sqcRZGate(q, 0.9455093271896811, 5);
  sqcRYGate(q, -3.101051666801966, 6);
  sqcRZGate(q, 1.5699952935800376, 6);
  sqcRYGate(q, 3.1401628442181795, 7);
  sqcRZGate(q, -1.957884607234066, 7);
  sqcRYGate(q, -0.06492351077937217, 8);
  sqcRZGate(q, 2.9634181194741442, 8);
  sqcRYGate(q, -2.435136892087692, 9);
  sqcRZGate(q, -1.500376306573406, 9);
  sqcRYGate(q, -0.0745534088261186, 10);
  sqcRZGate(q, 2.731113403972111, 10);
  sqcRYGate(q, -1.861404786401666, 11);
  sqcRZGate(q, -0.13681454571069462, 11);
  sqcRYGate(q, -3.0446345654392557, 12);
  sqcRZGate(q, -1.333490719341939, 12);
  sqcRYGate(q, 3.141515866520103, 13);
  sqcRZGate(q, 0.06677840401606261, 13);
  sqcRYGate(q, -1.6311440010588303, 14);
  sqcRZGate(q, -1.994813751678584, 14);
  sqcRYGate(q, -1.2916381792880347, 15);
  sqcRZGate(q, 1.6348950695841298, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.5403584128199856, 0);
  sqcRZGate(q, -2.9541963589325277, 0);
  sqcRYGate(q, -1.584516217646652, 1);
  sqcRZGate(q, -1.5407646313449552, 1);
  sqcRYGate(q, 0.001604011008806694, 2);
  sqcRZGate(q, -1.2126389013911094, 2);
  sqcRYGate(q, -2.7264941286543554, 3);
  sqcRZGate(q, -1.4006853925252338, 3);
  sqcRYGate(q, -1.6237458841269783, 4);
  sqcRZGate(q, -1.5666877536033743, 4);
  sqcRYGate(q, 2.5489308538916147, 5);
  sqcRZGate(q, -0.47201822483753464, 5);
  sqcRYGate(q, -1.5903500457454514, 6);
  sqcRZGate(q, 0.5923779791724444, 6);
  sqcRYGate(q, -1.8682403518555568, 7);
  sqcRZGate(q, 1.2456962248678394, 7);
  sqcRYGate(q, -3.140589474160714, 8);
  sqcRZGate(q, -2.596080448062825, 8);
  sqcRYGate(q, -1.6542008568187054, 9);
  sqcRZGate(q, 2.0316239250079677, 9);
  sqcRYGate(q, -7.514045936396485e-05, 10);
  sqcRZGate(q, 1.7786365631026069, 10);
  sqcRYGate(q, -0.1357683423772018, 11);
  sqcRZGate(q, -2.911073804157413, 11);
  sqcRYGate(q, 1.5667533324703182, 12);
  sqcRZGate(q, 2.8613334585132297, 12);
  sqcRYGate(q, 0.17480350543750056, 13);
  sqcRZGate(q, 0.012088956188919482, 13);
  sqcRYGate(q, -0.0009742905337600709, 14);
  sqcRZGate(q, -1.4036337580431386, 14);
  sqcRYGate(q, 1.5778959163498538, 15);
  sqcRZGate(q, -1.4890791719197503, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.624319738324496, 0);
  sqcRZGate(q, 1.5012115474582512, 0);
  sqcRYGate(q, -1.4154173257686233, 1);
  sqcRZGate(q, -1.332913613900478, 1);
  sqcRYGate(q, 0.7135870745846328, 2);
  sqcRZGate(q, 2.9629799169869777, 2);
  sqcRYGate(q, -0.005473178843933999, 3);
  sqcRZGate(q, -0.03238015434592726, 3);
  sqcRYGate(q, -0.02223950617599742, 4);
  sqcRZGate(q, -0.03331254300778433, 4);
  sqcRYGate(q, 3.1406021604138745, 5);
  sqcRZGate(q, -2.9116165791529087, 5);
  sqcRYGate(q, 3.1231963420304276, 6);
  sqcRZGate(q, 1.4220116556393751, 6);
  sqcRYGate(q, -3.0752164137394233, 7);
  sqcRZGate(q, 2.9141732621677323, 7);
  sqcRYGate(q, 3.1410324696490175, 8);
  sqcRZGate(q, 2.5198136238743016, 8);
  sqcRYGate(q, 2.883936187469442, 9);
  sqcRZGate(q, 0.46889902664674143, 9);
  sqcRYGate(q, -3.13535757233912, 10);
  sqcRZGate(q, 1.2874034825735794, 10);
  sqcRYGate(q, -2.581963544664742, 11);
  sqcRZGate(q, -3.087790578185213, 11);
  sqcRYGate(q, -3.124830107756679, 12);
  sqcRZGate(q, -1.9570538136487619, 12);
  sqcRYGate(q, 3.00541206651805, 13);
  sqcRZGate(q, 3.113253361580041, 13);
  sqcRYGate(q, 0.007901827990673738, 14);
  sqcRZGate(q, -1.9357987333576254, 14);
  sqcRYGate(q, -1.6017742151826084, 15);
  sqcRZGate(q, 1.6160381296284498, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 3.1338884906221622, 0);
  sqcRZGate(q, 0.2776706333457088, 0);
  sqcRYGate(q, -3.131301473778084, 1);
  sqcRZGate(q, 0.9534332216239988, 1);
  sqcRYGate(q, -1.2282692254835883, 2);
  sqcRZGate(q, -0.7614366816907179, 2);
  sqcRYGate(q, 2.722546276156786, 3);
  sqcRZGate(q, 0.5502706609414697, 3);
  sqcRYGate(q, 1.195858418279298, 4);
  sqcRZGate(q, -0.028674799121942488, 4);
  sqcRYGate(q, 1.8508847289523755, 5);
  sqcRZGate(q, -2.294931515125137, 5);
  sqcRYGate(q, -3.109768117046952, 6);
  sqcRZGate(q, -3.0263428688201777, 6);
  sqcRYGate(q, 2.287214204762158, 7);
  sqcRZGate(q, 1.6777352606297704, 7);
  sqcRYGate(q, 0.0009223481191852846, 8);
  sqcRZGate(q, -1.1956178294928668, 8);
  sqcRYGate(q, 1.5415088577823923, 9);
  sqcRZGate(q, -2.8327128965392823, 9);
  sqcRYGate(q, -1.5722182661493906, 10);
  sqcRZGate(q, -1.7588838925315873, 10);
  sqcRYGate(q, 1.5942626843468677, 11);
  sqcRZGate(q, 2.4676357720481668, 11);
  sqcRYGate(q, 0.010286235357616453, 12);
  sqcRZGate(q, 3.051556039348291, 12);
  sqcRYGate(q, -1.5484333280705656, 13);
  sqcRZGate(q, -0.07158968589075393, 13);
  sqcRYGate(q, 3.1414718602557614, 14);
  sqcRZGate(q, -0.7461109742922893, 14);
  sqcRYGate(q, 0.07594571864632993, 15);
  sqcRZGate(q, 2.7719502390023103, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 2.624066618863725, 0);
  sqcRZGate(q, -1.4570373618519257, 0);
  sqcRYGate(q, 0.3098195629968183, 1);
  sqcRZGate(q, -0.41726124163668393, 1);
  sqcRYGate(q, -2.368720752073044, 2);
  sqcRZGate(q, -1.0185502031596687, 2);
  sqcRYGate(q, -3.0039415065331574, 3);
  sqcRZGate(q, -2.5180605157272358, 3);
  sqcRYGate(q, -3.1403267726974584, 4);
  sqcRZGate(q, 3.137782311641653, 4);
  sqcRYGate(q, -0.004687453100394856, 5);
  sqcRZGate(q, 2.440067093555896, 5);
  sqcRYGate(q, -3.0732845131012825, 6);
  sqcRZGate(q, 1.589700563563105, 6);
  sqcRYGate(q, 1.2732857055828604, 7);
  sqcRZGate(q, -1.5571628571718508, 7);
  sqcRYGate(q, 2.113514233779707, 8);
  sqcRZGate(q, 1.1540290297596096, 8);
  sqcRYGate(q, -0.46243186979802964, 9);
  sqcRZGate(q, 2.5158392450564637, 9);
  sqcRYGate(q, 3.1390914749355128, 10);
  sqcRZGate(q, 2.955065430902345, 10);
  sqcRYGate(q, -3.1415546287389007, 11);
  sqcRZGate(q, -0.7050223887940965, 11);
  sqcRYGate(q, 0.01980604825911758, 12);
  sqcRZGate(q, -0.07465542348023213, 12);
  sqcRYGate(q, -2.5359592843655827, 13);
  sqcRZGate(q, 1.5524548970844476, 13);
  sqcRYGate(q, 3.1352608121718566, 14);
  sqcRZGate(q, 2.6721084549433316, 14);
  sqcRYGate(q, -1.5254637028958202, 15);
  sqcRZGate(q, -0.13048797166261952, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 3.1199337323074943, 0);
  sqcRZGate(q, -0.1851839174046539, 0);
  sqcRYGate(q, -0.004135386312804634, 1);
  sqcRZGate(q, -0.587436391352666, 1);
  sqcRYGate(q, -0.09851135484152927, 2);
  sqcRZGate(q, 0.5132582063090866, 2);
  sqcRYGate(q, 0.8799907041072764, 3);
  sqcRZGate(q, -0.26581504684218876, 3);
  sqcRYGate(q, 1.3482911709742291, 4);
  sqcRZGate(q, 1.152331235092113, 4);
  sqcRYGate(q, 0.12154892932419195, 5);
  sqcRZGate(q, 2.7041116375186345, 5);
  sqcRYGate(q, 1.0675868753473596e-05, 6);
  sqcRZGate(q, -0.39098194709158296, 6);
  sqcRYGate(q, 2.8818049028669424, 7);
  sqcRZGate(q, -1.5616250105242229, 7);
  sqcRYGate(q, -3.1415693902121777, 8);
  sqcRZGate(q, 2.686703530481325, 8);
  sqcRYGate(q, 3.125618166626031, 9);
  sqcRZGate(q, -0.6170127607881469, 9);
  sqcRYGate(q, 1.5952445790240626, 10);
  sqcRZGate(q, 0.47478742857406075, 10);
  sqcRYGate(q, -2.891604204739103, 11);
  sqcRZGate(q, 1.7261739304584145, 11);
  sqcRYGate(q, 0.0008312184622134566, 12);
  sqcRZGate(q, -1.7685277675535076, 12);
  sqcRYGate(q, 1.6122653471159978, 13);
  sqcRZGate(q, 1.4156430075764552, 13);
  sqcRYGate(q, -3.1379468392163505, 14);
  sqcRZGate(q, -1.8812136359834983, 14);
  sqcRYGate(q, -1.3394600532644798, 15);
  sqcRZGate(q, 0.1341306187483659, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.7380133440419125, 0);
  sqcRZGate(q, -2.8446466642647117, 0);
  sqcRYGate(q, 2.9059205310285274, 1);
  sqcRZGate(q, 2.84880255177505, 1);
  sqcRYGate(q, -0.2732473174610993, 2);
  sqcRZGate(q, -0.12356706802380124, 2);
  sqcRYGate(q, -0.22539913211115437, 3);
  sqcRZGate(q, 0.1466774182360349, 3);
  sqcRYGate(q, -3.1390046804845024, 4);
  sqcRZGate(q, -0.4046354419870756, 4);
  sqcRYGate(q, -3.1409453216540384, 5);
  sqcRZGate(q, -2.2878272948085185, 5);
  sqcRYGate(q, -0.0947202235824065, 6);
  sqcRZGate(q, 2.76166677656086, 6);
  sqcRYGate(q, 1.2874780116606281, 7);
  sqcRZGate(q, 0.061155340479259294, 7);
  sqcRYGate(q, 1.028252695886903, 8);
  sqcRZGate(q, -1.948194721575835, 8);
  sqcRYGate(q, -2.6880869772367193, 9);
  sqcRZGate(q, 2.3869336941837433, 9);
  sqcRYGate(q, -0.0020060168757032315, 10);
  sqcRZGate(q, 1.0949405114829325, 10);
  sqcRYGate(q, -4.4830359310132906e-05, 11);
  sqcRZGate(q, 1.4172218286874945, 11);
  sqcRYGate(q, 0.0038115193411791372, 12);
  sqcRZGate(q, 0.8834644434541261, 12);
  sqcRYGate(q, 1.609949329813237, 13);
  sqcRZGate(q, 3.1356866595345356, 13);
  sqcRYGate(q, 3.1387165002082997, 14);
  sqcRZGate(q, -1.6032529228381536, 14);
  sqcRYGate(q, 1.573222770344096, 15);
  sqcRZGate(q, -3.083555047300702, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.023210685064341877, 0);
  sqcRZGate(q, 1.9227629757345421, 0);
  sqcRYGate(q, 1.5489494278439198, 1);
  sqcRZGate(q, -1.6192511077150078, 1);
  sqcRYGate(q, 0.005504705242677765, 2);
  sqcRZGate(q, -3.085314221547774, 2);
  sqcRYGate(q, 2.3442556846139055, 3);
  sqcRZGate(q, -2.90956673448248, 3);
  sqcRYGate(q, 1.5480693656970155, 4);
  sqcRZGate(q, -2.587359788010908, 4);
  sqcRYGate(q, -1.5592420803979365, 5);
  sqcRZGate(q, 1.63413869152998, 5);
  sqcRYGate(q, -3.1414963113554504, 6);
  sqcRZGate(q, -0.08365674534351707, 6);
  sqcRYGate(q, 1.5641801903735655, 7);
  sqcRZGate(q, -0.08989015555735165, 7);
  sqcRYGate(q, 0.0005646346367047528, 8);
  sqcRZGate(q, 1.483661541112733, 8);
  sqcRYGate(q, -3.1383992474223574, 9);
  sqcRZGate(q, -2.208504113508486, 9);
  sqcRYGate(q, 1.568424832044776, 10);
  sqcRZGate(q, 2.6224649339658255, 10);
  sqcRYGate(q, 1.5771041346709844, 11);
  sqcRZGate(q, 1.6552250684374805, 11);
  sqcRYGate(q, 3.1411836185855613, 12);
  sqcRZGate(q, 1.6753915791467424, 12);
  sqcRYGate(q, 1.5434554818374382, 13);
  sqcRZGate(q, 1.610898955196138, 13);
  sqcRYGate(q, -0.0006988447506728334, 14);
  sqcRZGate(q, -0.22708197737677668, 14);
  sqcRYGate(q, -2.296299256638494, 15);
  sqcRZGate(q, 0.0705503334029025, 15);

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
