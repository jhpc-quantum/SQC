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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 1.5659297757117256, 0);
  sqcRZGate(q, -2.6158408991057986, 0);
  sqcRYGate(q, 1.635494277615198, 1);
  sqcRZGate(q, -2.068742125603928, 1);
  sqcRYGate(q, -1.430571053463372, 2);
  sqcRZGate(q, -1.5334686473430879, 2);
  sqcRYGate(q, -1.148939898058691, 3);
  sqcRZGate(q, 2.585146623018424, 3);
  sqcRYGate(q, -2.3475533422781774, 4);
  sqcRZGate(q, -1.6201006096683348, 4);
  sqcRYGate(q, 1.5999320392319696, 5);
  sqcRZGate(q, -1.3674280340333054, 5);
  sqcRYGate(q, -3.1415137442503442, 6);
  sqcRZGate(q, -3.0598665477043285, 6);
  sqcRYGate(q, -1.5977987623858878, 7);
  sqcRZGate(q, -0.11538049001888685, 7);
  sqcRYGate(q, -3.0749041496034977, 8);
  sqcRZGate(q, -3.1154988095534435, 8);
  sqcRYGate(q, -0.04980172089379867, 9);
  sqcRZGate(q, 1.4711636977183016, 9);
  sqcRYGate(q, 0.0004718324676282748, 10);
  sqcRZGate(q, 1.4508774344211854, 10);
  sqcRYGate(q, 1.1980917608922463, 11);
  sqcRZGate(q, -0.04424592856937437, 11);
  sqcRYGate(q, 3.1314701967655445, 12);
  sqcRZGate(q, -1.0197246283651393, 12);
  sqcRYGate(q, 0.04700805883382117, 13);
  sqcRZGate(q, -2.182047158240966, 13);
  sqcRYGate(q, 3.1376251080156314, 14);
  sqcRZGate(q, -2.769393954249187, 14);
  sqcRYGate(q, -1.8370550398004795, 15);
  sqcRZGate(q, 0.4931432208578341, 15);
  sqcRYGate(q, -1.0717121661919933, 16);
  sqcRZGate(q, 2.691586298962851, 16);
  sqcRYGate(q, -0.23652635922085885, 17);
  sqcRZGate(q, 2.4283085991857325, 17);
  sqcRYGate(q, -0.7556851212137339, 18);
  sqcRZGate(q, 0.09452492607332995, 18);
  sqcRYGate(q, -0.4694670116764499, 19);
  sqcRZGate(q, -2.4862812825746468, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.438556610313789, 0);
  sqcRZGate(q, -0.28028396194128735, 0);
  sqcRYGate(q, -1.0757001148552072, 1);
  sqcRZGate(q, 2.187459721992169, 1);
  sqcRYGate(q, -3.1173389339459208, 2);
  sqcRZGate(q, 1.798906231217859, 2);
  sqcRYGate(q, 3.140900611386476, 3);
  sqcRZGate(q, -0.5622421160397479, 3);
  sqcRYGate(q, 0.0016463183652454779, 4);
  sqcRZGate(q, 0.8549050570487038, 4);
  sqcRYGate(q, 0.9757879889434476, 5);
  sqcRZGate(q, 0.0408108905607465, 5);
  sqcRYGate(q, 0.004256868019588622, 6);
  sqcRZGate(q, 0.09279633900815742, 6);
  sqcRYGate(q, -2.323017039427867, 7);
  sqcRZGate(q, 1.712085397502365, 7);
  sqcRYGate(q, 3.1052457025439533, 8);
  sqcRZGate(q, 0.6964966964488775, 8);
  sqcRYGate(q, -1.7255364362606898, 9);
  sqcRZGate(q, 0.16239953894237757, 9);
  sqcRYGate(q, -3.139210825354791, 10);
  sqcRZGate(q, -0.6403257291875494, 10);
  sqcRYGate(q, 1.8625117141821041, 11);
  sqcRZGate(q, 2.8779715198809592, 11);
  sqcRYGate(q, -3.104915261550881, 12);
  sqcRZGate(q, 2.0823705348679065, 12);
  sqcRYGate(q, 1.974998201425289, 13);
  sqcRZGate(q, -1.5106906209798927, 13);
  sqcRYGate(q, 3.138611527575919, 14);
  sqcRZGate(q, 0.37937994739242303, 14);
  sqcRYGate(q, 2.2970593282066174, 15);
  sqcRZGate(q, 0.5248749327252737, 15);
  sqcRYGate(q, -2.9053135214297634, 16);
  sqcRZGate(q, -2.8970407053453706, 16);
  sqcRYGate(q, 3.1369368304586462, 17);
  sqcRZGate(q, 1.0490498105227726, 17);
  sqcRYGate(q, 1.0139139860417217, 18);
  sqcRZGate(q, -2.9219924643836652, 18);
  sqcRYGate(q, -1.51705010504634, 19);
  sqcRZGate(q, -2.3139623418262354, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 3.1116860032083187, 0);
  sqcRZGate(q, 0.13894713781255388, 0);
  sqcRYGate(q, -3.078021715279476, 1);
  sqcRZGate(q, -2.7492325533911326, 1);
  sqcRYGate(q, 2.9294111528343767, 2);
  sqcRZGate(q, 1.060370591937331, 2);
  sqcRYGate(q, -2.2933731452511137, 3);
  sqcRZGate(q, -0.13192092915331347, 3);
  sqcRYGate(q, 0.0019179236712012827, 4);
  sqcRZGate(q, -0.15474427697570456, 4);
  sqcRYGate(q, 0.17533370248616809, 5);
  sqcRZGate(q, -0.04270956802513971, 5);
  sqcRYGate(q, 3.14046969519335, 6);
  sqcRZGate(q, -2.6938268554374534, 6);
  sqcRYGate(q, 0.010585837192291336, 7);
  sqcRZGate(q, 2.994208613760263, 7);
  sqcRYGate(q, 1.4672301712823912, 8);
  sqcRZGate(q, 3.105299225419648, 8);
  sqcRYGate(q, 0.4279813192939754, 9);
  sqcRZGate(q, 0.955105445394117, 9);
  sqcRYGate(q, -3.140832436923878, 10);
  sqcRZGate(q, 2.514457937153456, 10);
  sqcRYGate(q, 1.004561049026412, 11);
  sqcRZGate(q, 0.4068893856982138, 11);
  sqcRYGate(q, -2.690190508336919, 12);
  sqcRZGate(q, -0.051303900282045234, 12);
  sqcRYGate(q, -1.2158579499629996, 13);
  sqcRZGate(q, 2.643052536714007, 13);
  sqcRYGate(q, -3.134879800937594, 14);
  sqcRZGate(q, 1.9274795571902843, 14);
  sqcRYGate(q, -0.4024052595573356, 15);
  sqcRZGate(q, 2.099520989115252, 15);
  sqcRYGate(q, 2.5167981136012934, 16);
  sqcRZGate(q, 2.2628612781698925, 16);
  sqcRYGate(q, 3.1329309018017364, 17);
  sqcRZGate(q, -1.498219410012278, 17);
  sqcRYGate(q, 2.0301751459177813, 18);
  sqcRZGate(q, 0.18764283892540945, 18);
  sqcRYGate(q, 0.45821217914370393, 19);
  sqcRZGate(q, 2.607730002008957, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 2.6156983748494445, 0);
  sqcRZGate(q, -1.4147691501119628, 0);
  sqcRYGate(q, 0.14650298938564954, 1);
  sqcRZGate(q, -0.7989516942276637, 1);
  sqcRYGate(q, -3.140332957907667, 2);
  sqcRZGate(q, -0.6959825746384594, 2);
  sqcRYGate(q, 3.139505623646096, 3);
  sqcRZGate(q, 2.991630474831695, 3);
  sqcRYGate(q, -0.0036700160849385977, 4);
  sqcRZGate(q, 3.1089539397286563, 4);
  sqcRYGate(q, -2.520649435843137, 5);
  sqcRZGate(q, -1.7861514500943685, 5);
  sqcRYGate(q, 3.117218293168673, 6);
  sqcRZGate(q, -1.4774859573853698, 6);
  sqcRYGate(q, -3.133774715873768, 7);
  sqcRZGate(q, 2.267935234296761, 7);
  sqcRYGate(q, 1.5944061510956882, 8);
  sqcRZGate(q, 2.0293979952872805, 8);
  sqcRYGate(q, -2.990664253861814, 9);
  sqcRZGate(q, -2.137795976779083, 9);
  sqcRYGate(q, 3.1415118561952076, 10);
  sqcRZGate(q, -2.7026755808967984, 10);
  sqcRYGate(q, -0.06855310972225492, 11);
  sqcRZGate(q, 0.7610987776446413, 11);
  sqcRYGate(q, 0.09546535053633426, 12);
  sqcRZGate(q, -1.8223258796810102, 12);
  sqcRYGate(q, -2.1010634171113924, 13);
  sqcRZGate(q, -2.7516962260906626, 13);
  sqcRYGate(q, -3.1352152478282656, 14);
  sqcRZGate(q, 2.578811271305564, 14);
  sqcRYGate(q, -0.23927676625416613, 15);
  sqcRZGate(q, -1.9747216703114265, 15);
  sqcRYGate(q, -2.3713289263621484, 16);
  sqcRZGate(q, 2.3148290355290295, 16);
  sqcRYGate(q, -2.210480052343965, 17);
  sqcRZGate(q, -0.7013218267461507, 17);
  sqcRYGate(q, -2.881350111749969, 18);
  sqcRZGate(q, -1.251428090997731, 18);
  sqcRYGate(q, -1.8889490612988684, 19);
  sqcRZGate(q, -0.00509739974041424, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -3.137123250517064, 0);
  sqcRZGate(q, 1.5135947521902562, 0);
  sqcRYGate(q, -3.129950925415188, 1);
  sqcRZGate(q, 1.2593573728708463, 1);
  sqcRYGate(q, -0.8368339206150476, 2);
  sqcRZGate(q, -3.1384599044408663, 2);
  sqcRYGate(q, -1.8219942468219068, 3);
  sqcRZGate(q, 2.3178086345684754, 3);
  sqcRYGate(q, -0.07355544564673355, 4);
  sqcRZGate(q, -2.0061770114671624, 4);
  sqcRYGate(q, 3.1189476359138233, 5);
  sqcRZGate(q, -1.7815929094455079, 5);
  sqcRYGate(q, -3.032432532574019, 6);
  sqcRZGate(q, -1.6897450830461922, 6);
  sqcRYGate(q, 0.03601596956307774, 7);
  sqcRZGate(q, -0.4054077055858534, 7);
  sqcRYGate(q, -0.9483705549870036, 8);
  sqcRZGate(q, -0.6713547388633145, 8);
  sqcRYGate(q, 0.021011248725466558, 9);
  sqcRZGate(q, -1.080818190505062, 9);
  sqcRYGate(q, 3.1411747361556817, 10);
  sqcRZGate(q, 1.0701017840777636, 10);
  sqcRYGate(q, 0.03524526279234648, 11);
  sqcRZGate(q, 2.123693520995949, 11);
  sqcRYGate(q, -2.9040917287470065, 12);
  sqcRZGate(q, -2.2388783116243895, 12);
  sqcRYGate(q, 2.600758563809387, 13);
  sqcRZGate(q, -2.8557353086885136, 13);
  sqcRYGate(q, -3.139376893597017, 14);
  sqcRZGate(q, 0.46024448719107597, 14);
  sqcRYGate(q, 0.004585113822993314, 15);
  sqcRZGate(q, 0.35265178263656605, 15);
  sqcRYGate(q, 0.9549815789109884, 16);
  sqcRZGate(q, -1.2996872774095722, 16);
  sqcRYGate(q, -0.11761119794985575, 17);
  sqcRZGate(q, -2.4497016397651765, 17);
  sqcRYGate(q, 2.346963874564113, 18);
  sqcRZGate(q, 0.739246965762317, 18);
  sqcRYGate(q, -2.0969214033168555, 19);
  sqcRZGate(q, 2.2119579618111818, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.05972682311016264, 0);
  sqcRZGate(q, 0.9081375317731651, 0);
  sqcRYGate(q, -0.7689611420329133, 1);
  sqcRZGate(q, 2.588751966864261, 1);
  sqcRYGate(q, 1.5919088320472463, 2);
  sqcRZGate(q, 0.024637389538249007, 2);
  sqcRYGate(q, -3.140960244775067, 3);
  sqcRZGate(q, -2.397788842778566, 3);
  sqcRYGate(q, -3.137753162221182, 4);
  sqcRZGate(q, 3.0322767276467086, 4);
  sqcRYGate(q, -0.6302753102176242, 5);
  sqcRZGate(q, 1.545982587992268, 5);
  sqcRYGate(q, -3.119070416639725, 6);
  sqcRZGate(q, -0.2578347466002428, 6);
  sqcRYGate(q, -0.758756900928214, 7);
  sqcRZGate(q, 1.6501832694742191, 7);
  sqcRYGate(q, -3.0939711243242587, 8);
  sqcRZGate(q, 0.8141996035422978, 8);
  sqcRYGate(q, -2.9012792889515544, 9);
  sqcRZGate(q, 2.389476425603866, 9);
  sqcRYGate(q, 0.0005346151463115134, 10);
  sqcRZGate(q, -2.839268179117837, 10);
  sqcRYGate(q, 3.0194566125444178, 11);
  sqcRZGate(q, -1.47038261917802, 11);
  sqcRYGate(q, -1.482612450192405, 12);
  sqcRZGate(q, -0.9200063904928097, 12);
  sqcRYGate(q, 0.7334838932052051, 13);
  sqcRZGate(q, 2.7916880054689606, 13);
  sqcRYGate(q, -3.1402986901961145, 14);
  sqcRZGate(q, 2.502352302522871, 14);
  sqcRYGate(q, 0.484683411101607, 15);
  sqcRZGate(q, -2.240929978127311, 15);
  sqcRYGate(q, 0.3182942648966849, 16);
  sqcRZGate(q, 1.8197238397516893, 16);
  sqcRYGate(q, -2.462256371389795, 17);
  sqcRZGate(q, -0.09681650513992411, 17);
  sqcRYGate(q, 2.8096849175413734, 18);
  sqcRZGate(q, -0.009246472102481829, 18);
  sqcRYGate(q, -0.0244981167594025, 19);
  sqcRZGate(q, 2.4203266263791643, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.584458913713382, 0);
  sqcRZGate(q, -2.620399705054431, 0);
  sqcRYGate(q, 1.048520499894332, 1);
  sqcRZGate(q, 0.0328114684917038, 1);
  sqcRYGate(q, -2.651453991324324, 2);
  sqcRZGate(q, 1.5005038948499787, 2);
  sqcRYGate(q, -1.002265705649806, 3);
  sqcRZGate(q, -0.015524465154162257, 3);
  sqcRYGate(q, -3.135799446364996, 4);
  sqcRZGate(q, -3.042436899953969, 4);
  sqcRYGate(q, 1.5537457430218413, 5);
  sqcRZGate(q, -0.6841557186835084, 5);
  sqcRYGate(q, -0.5255961192183431, 6);
  sqcRZGate(q, -2.9229252912851695, 6);
  sqcRYGate(q, -1.524963511524489, 7);
  sqcRZGate(q, 1.914675842479991, 7);
  sqcRYGate(q, -1.298697796194955, 8);
  sqcRZGate(q, -0.8759057990938202, 8);
  sqcRYGate(q, -3.135382676538653, 9);
  sqcRZGate(q, -2.052219648324642, 9);
  sqcRYGate(q, 1.5704035712084154, 10);
  sqcRZGate(q, 0.7130551180850094, 10);
  sqcRYGate(q, -1.3389069562345703, 11);
  sqcRZGate(q, -3.015061496790564, 11);
  sqcRYGate(q, -0.24302364679743416, 12);
  sqcRZGate(q, 1.8317454169865452, 12);
  sqcRYGate(q, -3.1185574066426174, 13);
  sqcRZGate(q, -0.6903848705570188, 13);
  sqcRYGate(q, 0.0001535933798608724, 14);
  sqcRZGate(q, 2.561064378729553, 14);
  sqcRYGate(q, 3.1381985082278776, 15);
  sqcRZGate(q, -2.7154867943734966, 15);
  sqcRYGate(q, 1.1257076680474336, 16);
  sqcRZGate(q, 0.981537158977461, 16);
  sqcRYGate(q, 3.0993514509202376, 17);
  sqcRZGate(q, 0.19166286707411118, 17);
  sqcRYGate(q, -2.0995679557256346, 18);
  sqcRZGate(q, 2.354689166929255, 18);
  sqcRYGate(q, 0.08774064096666018, 19);
  sqcRZGate(q, -0.7175506815274771, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.42643783769413635, 0);
  sqcRZGate(q, -0.6166322550054453, 0);
  sqcRYGate(q, -1.574086040671813, 1);
  sqcRZGate(q, -2.975069598934302, 1);
  sqcRYGate(q, -1.5711025117100632, 2);
  sqcRZGate(q, -1.6115622410982535, 2);
  sqcRYGate(q, -3.126434181357237, 3);
  sqcRZGate(q, 1.4817975640049548, 3);
  sqcRYGate(q, 0.0018876129016295734, 4);
  sqcRZGate(q, -1.1086577336448595, 4);
  sqcRYGate(q, -0.002115819410687614, 5);
  sqcRZGate(q, -2.340454793404284, 5);
  sqcRYGate(q, 1.4176354142992342, 6);
  sqcRZGate(q, -3.1385267142834175, 6);
  sqcRYGate(q, 2.0418066335707374, 7);
  sqcRZGate(q, -3.115429210905011, 7);
  sqcRYGate(q, 1.5710494661109837, 8);
  sqcRZGate(q, -2.3140656346741513, 8);
  sqcRYGate(q, -2.7966600546250833, 9);
  sqcRZGate(q, -2.7456192590919177, 9);
  sqcRYGate(q, -0.0012375910804756233, 10);
  sqcRZGate(q, 0.02027521088498574, 10);
  sqcRYGate(q, -3.1410837549473176, 11);
  sqcRZGate(q, -0.33391081646101395, 11);
  sqcRYGate(q, -0.007564783158571231, 12);
  sqcRZGate(q, 2.78791027026214, 12);
  sqcRYGate(q, 0.4606666053644082, 13);
  sqcRZGate(q, -1.9692417399281519, 13);
  sqcRYGate(q, 3.125758495742819, 14);
  sqcRZGate(q, -1.5914764506299655, 14);
  sqcRYGate(q, -0.4854032642336001, 15);
  sqcRZGate(q, 1.626345691532312, 15);
  sqcRYGate(q, -2.304270828613538, 16);
  sqcRZGate(q, -2.1807442460878534, 16);
  sqcRYGate(q, -0.5840069046838037, 17);
  sqcRZGate(q, 1.0253789759074614, 17);
  sqcRYGate(q, 2.7075506410988197, 18);
  sqcRZGate(q, 1.2578535266306838, 18);
  sqcRYGate(q, -2.2772408509477926, 19);
  sqcRZGate(q, 0.9649282113320808, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.5854768191851587, 0);
  sqcRZGate(q, -1.0281668176480174, 0);
  sqcRYGate(q, 0.07794500715212571, 1);
  sqcRZGate(q, -1.7320721181097563, 1);
  sqcRYGate(q, 1.5443595294078563, 2);
  sqcRZGate(q, 0.11630143414015855, 2);
  sqcRYGate(q, 3.079964910529191, 3);
  sqcRZGate(q, -0.11896329609100759, 3);
  sqcRYGate(q, 0.00016650570611245334, 4);
  sqcRZGate(q, -2.2443071324648436, 4);
  sqcRYGate(q, -1.5541329375724766, 5);
  sqcRZGate(q, -1.3937101664684173, 5);
  sqcRYGate(q, -1.5734189255209439, 6);
  sqcRZGate(q, -2.7697633176223255, 6);
  sqcRYGate(q, -1.575235537049627, 7);
  sqcRZGate(q, -0.9889328462536833, 7);
  sqcRYGate(q, -1.60155611357753, 8);
  sqcRZGate(q, -2.9977618394273797, 8);
  sqcRYGate(q, 0.05956736723238443, 9);
  sqcRZGate(q, -1.399784885318815, 9);
  sqcRYGate(q, 1.5689594083797611, 10);
  sqcRZGate(q, 0.5708570884251699, 10);
  sqcRYGate(q, 1.0521089879753251, 11);
  sqcRZGate(q, -0.3011386160025174, 11);
  sqcRYGate(q, 2.8206975632697917, 12);
  sqcRZGate(q, 2.4613578387871344, 12);
  sqcRYGate(q, -0.061115881072783644, 13);
  sqcRZGate(q, -1.0784886307687653, 13);
  sqcRYGate(q, -3.140378852668216, 14);
  sqcRZGate(q, -0.5364097294930206, 14);
  sqcRYGate(q, 3.1382350125118617, 15);
  sqcRZGate(q, -2.6606717420236894, 15);
  sqcRYGate(q, 0.37483255435224283, 16);
  sqcRZGate(q, -1.0766987766832412, 16);
  sqcRYGate(q, 0.9571429386859612, 17);
  sqcRZGate(q, 2.9806025285596296, 17);
  sqcRYGate(q, -1.8361730506452039, 18);
  sqcRZGate(q, 3.0208437912512247, 18);
  sqcRYGate(q, 2.222292827693757, 19);
  sqcRZGate(q, 0.16810610334924636, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.0066597067481172535, 0);
  sqcRZGate(q, -0.518287831147834, 0);
  sqcRYGate(q, 3.008213641606466, 1);
  sqcRZGate(q, -2.315821405358588, 1);
  sqcRYGate(q, -1.6810948764527893, 2);
  sqcRZGate(q, 2.3587114834492353, 2);
  sqcRYGate(q, 1.2133076529145337, 3);
  sqcRZGate(q, 1.5614001472946084, 3);
  sqcRYGate(q, -1.5721433857235776, 4);
  sqcRZGate(q, 1.0521006856492026, 4);
  sqcRYGate(q, -0.0011182331242176602, 5);
  sqcRZGate(q, 0.3702543263821596, 5);
  sqcRYGate(q, 3.0142760471624404, 6);
  sqcRZGate(q, -2.7694847991146063, 6);
  sqcRYGate(q, 0.0011355877699363503, 7);
  sqcRZGate(q, -2.153030907071466, 7);
  sqcRYGate(q, -3.1386348714551575, 8);
  sqcRZGate(q, -2.9995996056073237, 8);
  sqcRYGate(q, 0.0010226594715268262, 9);
  sqcRZGate(q, 1.4909840816692101, 9);
  sqcRYGate(q, 3.141517482380435, 10);
  sqcRZGate(q, 2.6668681382032933, 10);
  sqcRYGate(q, -3.1411081180965756, 11);
  sqcRZGate(q, -0.34053236535084414, 11);
  sqcRYGate(q, 1.5802424015419403, 12);
  sqcRZGate(q, 1.5929385318777678, 12);
  sqcRYGate(q, -1.995990156072516, 13);
  sqcRZGate(q, 3.0781077101365675, 13);
  sqcRYGate(q, 1.5831232877560775, 14);
  sqcRZGate(q, 0.3650466969665187, 14);
  sqcRYGate(q, -0.024798427053939243, 15);
  sqcRZGate(q, 2.417179445296368, 15);
  sqcRYGate(q, -2.5526384185123803, 16);
  sqcRZGate(q, -0.05699610514003606, 16);
  sqcRYGate(q, 0.9767527271867207, 17);
  sqcRZGate(q, -3.046453768664277, 17);
  sqcRYGate(q, -0.7347886401125479, 18);
  sqcRZGate(q, -2.6952745216865788, 18);
  sqcRYGate(q, 3.0893747711050747, 19);
  sqcRZGate(q, -0.8544066789346498, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.775704348697837, 0);
  sqcRZGate(q, -3.0393638344261324, 0);
  sqcRYGate(q, -2.64805415924075, 1);
  sqcRZGate(q, -0.05013860481886817, 1);
  sqcRYGate(q, 3.1395459550943294, 2);
  sqcRZGate(q, -2.362619395296863, 2);
  sqcRYGate(q, 0.0006337996148911053, 3);
  sqcRZGate(q, -1.5603513278001833, 3);
  sqcRYGate(q, -0.00017924247648297013, 4);
  sqcRZGate(q, -1.693935705636748, 4);
  sqcRYGate(q, 8.479097695968107e-05, 5);
  sqcRZGate(q, -1.7264608891810531, 5);
  sqcRYGate(q, -1.5745788950825874, 6);
  sqcRZGate(q, -0.00042466199718038666, 6);
  sqcRYGate(q, 1.5757777090740157, 7);
  sqcRZGate(q, -2.200671519317074, 7);
  sqcRYGate(q, 1.5862967725782786, 8);
  sqcRZGate(q, 1.5397225160745098, 8);
  sqcRYGate(q, -0.051864868363503014, 9);
  sqcRZGate(q, 1.1888666585402567, 9);
  sqcRYGate(q, -3.1325113458963467, 10);
  sqcRZGate(q, 0.5789290861953962, 10);
  sqcRYGate(q, -1.3926164870846225, 11);
  sqcRZGate(q, 1.0263202505170312, 11);
  sqcRYGate(q, -0.4127800223970448, 12);
  sqcRZGate(q, 1.5504779098307289, 12);
  sqcRYGate(q, 3.14142076453111, 13);
  sqcRZGate(q, 3.13827283746926, 13);
  sqcRYGate(q, 3.1403795907288177, 14);
  sqcRZGate(q, 1.7222313510790783, 14);
  sqcRYGate(q, 3.139826576091383, 15);
  sqcRZGate(q, -0.5672051633484588, 15);
  sqcRYGate(q, -1.568111982373586, 16);
  sqcRZGate(q, 3.1389090377135864, 16);
  sqcRYGate(q, 0.7284570460554906, 17);
  sqcRZGate(q, 2.722978381081139, 17);
  sqcRYGate(q, -1.9223234981679802, 18);
  sqcRZGate(q, 0.02310846009957307, 18);
  sqcRYGate(q, -3.0391519259881905, 19);
  sqcRZGate(q, -1.5567297617853997, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.5649337014152276, 0);
  sqcRZGate(q, -3.08902448717487, 0);
  sqcRYGate(q, 0.05857789249045808, 1);
  sqcRZGate(q, -0.44979259192919213, 1);
  sqcRYGate(q, -1.566645217174698, 2);
  sqcRZGate(q, 0.4400352518758119, 2);
  sqcRYGate(q, 1.9731960043857768, 3);
  sqcRZGate(q, 1.3432527561400045, 3);
  sqcRYGate(q, 0.003129833902878687, 4);
  sqcRZGate(q, 0.6362989214896153, 4);
  sqcRYGate(q, 0.011843203234910856, 5);
  sqcRZGate(q, -0.29612904701279735, 5);
  sqcRYGate(q, 1.4369609486743107, 6);
  sqcRZGate(q, -1.837907836907518, 6);
  sqcRYGate(q, 3.125195913474463, 7);
  sqcRZGate(q, 2.0712729338759663, 7);
  sqcRYGate(q, 1.563660660073925, 8);
  sqcRZGate(q, 2.0128119322675757, 8);
  sqcRYGate(q, -0.11422865570478831, 9);
  sqcRZGate(q, 0.6668202799972277, 9);
  sqcRYGate(q, 3.136908170028234, 10);
  sqcRZGate(q, 0.10103003151985518, 10);
  sqcRYGate(q, -0.00012420571553989454, 11);
  sqcRZGate(q, -1.03758468921232, 11);
  sqcRYGate(q, 1.5663287268257433, 12);
  sqcRZGate(q, 1.9267868336903027, 12);
  sqcRYGate(q, 1.571416177823881, 13);
  sqcRZGate(q, -0.692446959137418, 13);
  sqcRYGate(q, 3.1350439211750816, 14);
  sqcRZGate(q, -1.7755881464253553, 14);
  sqcRYGate(q, 3.1099831582688706, 15);
  sqcRZGate(q, -1.2038616108795859, 15);
  sqcRYGate(q, -1.4307949653299339, 16);
  sqcRZGate(q, -2.6932623679747527, 16);
  sqcRYGate(q, 1.574679226054297, 17);
  sqcRZGate(q, -1.5766760521333385, 17);
  sqcRYGate(q, 1.5716391617799508, 18);
  sqcRZGate(q, -1.0912975123112354, 18);
  sqcRYGate(q, 0.0030199166347673057, 19);
  sqcRZGate(q, -0.9801755809675008, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.4756259912482568, 0);
  sqcRZGate(q, -0.018762989882355263, 0);
  sqcRYGate(q, 3.124819989449405, 1);
  sqcRZGate(q, -2.107234119950267, 1);
  sqcRYGate(q, -1.5708291981392106, 2);
  sqcRZGate(q, -3.136894482635318, 2);
  sqcRYGate(q, -0.0028241422054273713, 3);
  sqcRZGate(q, 0.3654284920891531, 3);
  sqcRYGate(q, -1.5921224253239734, 4);
  sqcRZGate(q, 2.8394262294607233, 4);
  sqcRYGate(q, -0.10630906318102322, 5);
  sqcRZGate(q, 2.362084898131606, 5);
  sqcRYGate(q, 0.004239849850672606, 6);
  sqcRZGate(q, 2.4994783903235684, 6);
  sqcRYGate(q, 2.850758277074467, 7);
  sqcRZGate(q, -1.1261951774584602, 7);
  sqcRYGate(q, -0.003928069652325035, 8);
  sqcRZGate(q, 1.2512398901897834, 8);
  sqcRYGate(q, -0.03904212795016536, 9);
  sqcRZGate(q, 3.0886813521536403, 9);
  sqcRYGate(q, 1.6024381111976589, 10);
  sqcRZGate(q, 1.5463221537835539, 10);
  sqcRYGate(q, -1.61399932864156, 11);
  sqcRZGate(q, -2.5330132063738224, 11);
  sqcRYGate(q, -1.5665734927012984, 12);
  sqcRZGate(q, 0.4053403953992909, 12);
  sqcRYGate(q, 2.9157943499495413, 13);
  sqcRZGate(q, 2.6363694938061295, 13);
  sqcRYGate(q, 1.5730791899657282, 14);
  sqcRZGate(q, 1.604066415772576, 14);
  sqcRYGate(q, -1.5797082592857947, 15);
  sqcRZGate(q, -2.291087341827183, 15);
  sqcRYGate(q, 3.140095725838019, 16);
  sqcRZGate(q, 2.729929520258642, 16);
  sqcRYGate(q, -1.568461771467602, 17);
  sqcRZGate(q, -1.1979932997382652, 17);
  sqcRYGate(q, 2.297707179160535, 18);
  sqcRZGate(q, -2.4778675818922666, 18);
  sqcRYGate(q, 1.593903988473003, 19);
  sqcRZGate(q, -0.5707058893349606, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.5717518192395614, 0);
  sqcRZGate(q, -2.493143571862662, 0);
  sqcRYGate(q, 1.5755694927819992, 1);
  sqcRZGate(q, -1.6042528852004656, 1);
  sqcRYGate(q, 1.8615034504158394, 2);
  sqcRZGate(q, 1.0932862812909372, 2);
  sqcRYGate(q, -3.125570738731637, 3);
  sqcRZGate(q, 2.967416654151405, 3);
  sqcRYGate(q, 0.0002389319233657367, 4);
  sqcRZGate(q, -2.8408203630022424, 4);
  sqcRYGate(q, -0.0003515103634412061, 5);
  sqcRZGate(q, 2.5688970096912804, 5);
  sqcRYGate(q, 0.0006353493951003486, 6);
  sqcRZGate(q, 2.9261498711780294, 6);
  sqcRYGate(q, 3.123009313951604, 7);
  sqcRZGate(q, -2.2766377199013235, 7);
  sqcRYGate(q, -0.03621184082279516, 8);
  sqcRZGate(q, 1.717965078127307, 8);
  sqcRYGate(q, 0.4695320602719253, 9);
  sqcRZGate(q, 1.8831408944409986, 9);
  sqcRYGate(q, -0.23630191835849101, 10);
  sqcRZGate(q, -3.1150836854647164, 10);
  sqcRYGate(q, 0.0002477658122792547, 11);
  sqcRZGate(q, 1.9351333960625237, 11);
  sqcRYGate(q, 0.01374318668781971, 12);
  sqcRZGate(q, -0.40575087590572956, 12);
  sqcRYGate(q, 3.1413670947440013, 13);
  sqcRZGate(q, 3.0090683613795974, 13);
  sqcRYGate(q, -3.1322789892706484, 14);
  sqcRZGate(q, 3.0482719318371627, 14);
  sqcRYGate(q, -0.0007577163696497648, 15);
  sqcRZGate(q, -0.1639646322331032, 15);
  sqcRYGate(q, -1.5736939917945476, 16);
  sqcRZGate(q, -2.941033070516014, 16);
  sqcRYGate(q, -1.5712533013541479, 17);
  sqcRZGate(q, 1.6023231788050474, 17);
  sqcRYGate(q, -1.7453780402810553, 18);
  sqcRZGate(q, 1.572626184759742, 18);
  sqcRYGate(q, -0.003918395692424552, 19);
  sqcRZGate(q, -0.7049178197134616, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -3.132609366884797, 0);
  sqcRZGate(q, -3.0896287021583424, 0);
  sqcRYGate(q, 3.0128285416134677, 1);
  sqcRZGate(q, -2.7633468478027, 1);
  sqcRYGate(q, 0.001007126284790519, 2);
  sqcRZGate(q, 1.457939501877446, 2);
  sqcRYGate(q, 3.1397929176124433, 3);
  sqcRZGate(q, 0.11173924825447921, 3);
  sqcRYGate(q, 1.3590176376608216, 4);
  sqcRZGate(q, 2.554780245035557, 4);
  sqcRYGate(q, -0.0038313874654023346, 5);
  sqcRZGate(q, 1.6823636621361304, 5);
  sqcRYGate(q, -3.1401078812531753, 6);
  sqcRZGate(q, -1.686826264471976, 6);
  sqcRYGate(q, -1.5707877876284009, 7);
  sqcRZGate(q, 0.6502139011375342, 7);
  sqcRYGate(q, -0.0031662791730946395, 8);
  sqcRZGate(q, -0.8400903388581124, 8);
  sqcRYGate(q, 0.08425756584279719, 9);
  sqcRZGate(q, 0.7728462043333965, 9);
  sqcRYGate(q, 1.6159254776870207, 10);
  sqcRZGate(q, -2.1085963801235508, 10);
  sqcRYGate(q, -0.03785616210066056, 11);
  sqcRZGate(q, -0.9454732761027703, 11);
  sqcRYGate(q, 1.5671167956185617, 12);
  sqcRZGate(q, 0.9939336341999478, 12);
  sqcRYGate(q, -2.960381074290451, 13);
  sqcRZGate(q, -1.4969024547306897, 13);
  sqcRYGate(q, 0.0034242262684385234, 14);
  sqcRZGate(q, 1.144181702195306, 14);
  sqcRYGate(q, -3.137066847661986, 15);
  sqcRZGate(q, 2.665829276390726, 15);
  sqcRYGate(q, -0.0011027003586937243, 16);
  sqcRZGate(q, 2.3897402512978076, 16);
  sqcRYGate(q, 0.06309351063536062, 17);
  sqcRZGate(q, 0.38474935573521785, 17);
  sqcRYGate(q, -1.570657313839538, 18);
  sqcRZGate(q, 1.0209674183165434, 18);
  sqcRYGate(q, -1.5647715865071243, 19);
  sqcRZGate(q, 0.41478517415950117, 19);

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
