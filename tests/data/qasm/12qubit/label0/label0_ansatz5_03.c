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

  sqcRYGate(q, 0.8813625646258538, 0);
  sqcRYGate(q, -0.25345767836605765, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.24747906495706, 0);
  sqcRYGate(q, -1.6841109226554245, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1827610968863176, 2);
  sqcRYGate(q, 0.6378454608101283, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4400390543538562, 2);
  sqcRYGate(q, 0.38704936251125727, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1184364668951012, 4);
  sqcRYGate(q, -0.16021378710108822, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5035687247555742, 4);
  sqcRYGate(q, -0.7458588583197976, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6876387608120433, 6);
  sqcRYGate(q, 0.07145020141795834, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.137177447148276, 6);
  sqcRYGate(q, -0.007863311854236166, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4895728831770276, 8);
  sqcRYGate(q, 1.9886572606939623, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.1159063163974314, 8);
  sqcRYGate(q, 0.8259076414831551, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.1576178818420129, 10);
  sqcRYGate(q, 1.5347219839548334, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0601081371824237, 10);
  sqcRYGate(q, -0.184607661652341, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.7820433134240394, 1);
  sqcRYGate(q, 2.9406524408085235, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.830725840292759, 1);
  sqcRYGate(q, -1.1654397232043818, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9849278231086003, 3);
  sqcRYGate(q, 0.5229545684144048, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7575948231944833, 3);
  sqcRYGate(q, 3.1415871510744364, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8060246921449323, 5);
  sqcRYGate(q, 0.30882059428703457, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8065797428214885, 5);
  sqcRYGate(q, -2.9048012732013424, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.051147915180008, 7);
  sqcRYGate(q, 1.9884246755513744, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.017253124887988136, 7);
  sqcRYGate(q, -0.7039325739634545, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.0643198370043008, 9);
  sqcRYGate(q, 1.5337180161663335, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.4395589246985088, 9);
  sqcRYGate(q, 0.688991378141127, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.1553507471088387, 0);
  sqcRYGate(q, 0.7543656460793411, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.04227425345277489, 0);
  sqcRYGate(q, -0.012483024236794687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9393983942911115, 2);
  sqcRYGate(q, -0.6708473587857827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0802613162691075, 2);
  sqcRYGate(q, -2.1473984744581402, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4568428376770832, 4);
  sqcRYGate(q, -2.6946065979123786, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.13669574193921985, 4);
  sqcRYGate(q, 2.077145463109696, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.303154720857021, 6);
  sqcRYGate(q, -2.9358492577901205, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.26167255284611285, 6);
  sqcRYGate(q, 2.008332266616453, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3570212086303015, 8);
  sqcRYGate(q, 2.965084161750466, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6613337895121514, 8);
  sqcRYGate(q, -1.7056274743129582, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.547651032355423, 10);
  sqcRYGate(q, 0.07223807098077284, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.1069851983781533, 10);
  sqcRYGate(q, -3.13504636269862, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.31731035058878587, 1);
  sqcRYGate(q, 2.7808643780864823, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7208944899466188, 1);
  sqcRYGate(q, 2.760012566039503, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2067376706279118, 3);
  sqcRYGate(q, -2.0327955181480695, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0703961951227634, 3);
  sqcRYGate(q, -3.1414818625274217, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5333195520943437, 5);
  sqcRYGate(q, -1.872781238050755, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.141507786190645, 5);
  sqcRYGate(q, -0.0063257927688677995, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3721634674245178, 7);
  sqcRYGate(q, -0.5991624361293494, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1209330489794453, 7);
  sqcRYGate(q, 0.0026846509126681184, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.5061855564942523, 9);
  sqcRYGate(q, 0.44761461606599795, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.408227515590581, 9);
  sqcRYGate(q, 2.163338999535585, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.15027457430127455, 0);
  sqcRYGate(q, -1.230388828394638, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8406726976210979, 0);
  sqcRYGate(q, 0.09322786179549171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.582648352713039, 2);
  sqcRYGate(q, 0.636085863294551, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.14143310785701, 2);
  sqcRYGate(q, -1.0186067994287407, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1760876624237764, 4);
  sqcRYGate(q, -2.931825649726492, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0037888198777125126, 4);
  sqcRYGate(q, -2.8905347721970815, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8953110547270287, 6);
  sqcRYGate(q, 0.22992350958316266, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.381007010259088, 6);
  sqcRYGate(q, -0.7472596703225058, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7090118687273796, 8);
  sqcRYGate(q, 2.6188579306398116, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.850133736734807, 8);
  sqcRYGate(q, -1.615606566429222, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9227852338300027, 10);
  sqcRYGate(q, 2.9950730967789725, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6344648397496595, 10);
  sqcRYGate(q, 2.9827895164894933, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.771810012287903, 1);
  sqcRYGate(q, 1.3605359494492182, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6518042186455613, 1);
  sqcRYGate(q, 0.8391044531432117, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8667396495773608, 3);
  sqcRYGate(q, -1.575354647824966, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5890619925597707, 3);
  sqcRYGate(q, 0.016177462281330438, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5004853896831274, 5);
  sqcRYGate(q, 2.475638213024597, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.087984208462702, 5);
  sqcRYGate(q, 2.772911301399583, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5715976530151825, 7);
  sqcRYGate(q, -0.5357674630780856, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1386870400322433, 7);
  sqcRYGate(q, -3.1117947769211023, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.321142705550348, 9);
  sqcRYGate(q, -1.625823339790418, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.020337403141859, 9);
  sqcRYGate(q, 0.1090337212227798, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.36469375093573664, 0);
  sqcRYGate(q, 2.1352616697577167, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1138822659029857, 0);
  sqcRYGate(q, 1.2859123270624953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4356798298761849, 2);
  sqcRYGate(q, 1.1899589573877813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5891430314922612, 2);
  sqcRYGate(q, 0.01947031479190553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1252634115640325, 4);
  sqcRYGate(q, -1.4839893390119767, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9252460262732916, 4);
  sqcRYGate(q, -0.2520308230544819, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4945649534177055, 6);
  sqcRYGate(q, 3.0891739886632466, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.07911509970445252, 6);
  sqcRYGate(q, -0.13018924215839453, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.484999536345864, 8);
  sqcRYGate(q, -1.9492005364947484, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.2941187535824255, 8);
  sqcRYGate(q, 0.3762258838317134, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7213954391433195, 10);
  sqcRYGate(q, 1.7280471335670349, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8921196491301747, 10);
  sqcRYGate(q, -0.5117204311643178, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.1289408077149657, 1);
  sqcRYGate(q, 0.675951515792903, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.052521454159538, 1);
  sqcRYGate(q, 0.6706715084798356, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3921180397857451, 3);
  sqcRYGate(q, -2.0479438972974497, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7528753116984563, 3);
  sqcRYGate(q, 2.8887227281801393, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.680549555917088, 5);
  sqcRYGate(q, -3.1322846059512006, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.566244179635818, 5);
  sqcRYGate(q, -0.3299154614252524, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.10437551213000702, 7);
  sqcRYGate(q, 0.38455062682188235, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7847470134570154, 7);
  sqcRYGate(q, 1.9939219973075124, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3893592308366154, 9);
  sqcRYGate(q, 1.372938770299843, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.055230290167621834, 9);
  sqcRYGate(q, 3.0775636342535564, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.1273059609648748, 0);
  sqcRYGate(q, -0.4979068411925234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9923464165184654, 0);
  sqcRYGate(q, 0.21591112018592007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.011228554540806, 2);
  sqcRYGate(q, 3.0565213288989432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6060537351589624, 2);
  sqcRYGate(q, 1.446990835595387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7284030470869347, 4);
  sqcRYGate(q, 0.9392227101673623, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0023524552855862025, 4);
  sqcRYGate(q, -3.125067625025052, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1948839076798337, 6);
  sqcRYGate(q, 1.1264553653689726, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1388055568450124, 6);
  sqcRYGate(q, 3.141218858786617, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.728763062054013, 8);
  sqcRYGate(q, -0.6116142728250207, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.0760029683780461, 8);
  sqcRYGate(q, 3.1410036230328777, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.749744492596066, 10);
  sqcRYGate(q, -0.9173537759661442, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2247831868971746, 10);
  sqcRYGate(q, -2.7869324753697087, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.6800564657543835, 1);
  sqcRYGate(q, -1.5668609741457402, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9437787924973637, 1);
  sqcRYGate(q, -1.8282183441396942, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1316375992638117, 3);
  sqcRYGate(q, -0.4690067150759775, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.134260403829462, 3);
  sqcRYGate(q, -3.121834776695578, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4486511220042018, 5);
  sqcRYGate(q, -2.817551453711402, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8284169337546565, 5);
  sqcRYGate(q, 2.689786652950341, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6606365453817966, 7);
  sqcRYGate(q, -1.834019065975756, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.3096016123024258, 7);
  sqcRYGate(q, -2.1282232004712527, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.38809220475745193, 9);
  sqcRYGate(q, 1.871647090707291, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9414593568753746, 9);
  sqcRYGate(q, 3.0231307712327466, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.5651672114559214, 0);
  sqcRYGate(q, 1.5441358854917469, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1893991240894204, 0);
  sqcRYGate(q, -1.5568145419517343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5774201585082945, 2);
  sqcRYGate(q, 0.39911490020748114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1351862044127916, 2);
  sqcRYGate(q, -2.22458421226189, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.793963786902021, 4);
  sqcRYGate(q, -2.3752970244073066, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.05071855428345232, 4);
  sqcRYGate(q, -0.05241292052966795, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0336915459863756, 6);
  sqcRYGate(q, -0.6828254500436399, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.017789037377368595, 6);
  sqcRYGate(q, 0.004027720794077424, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.069350372844474, 8);
  sqcRYGate(q, -0.7286405767687754, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1180319594841928, 8);
  sqcRYGate(q, 0.17153422739522384, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4068594515145643, 10);
  sqcRYGate(q, 2.7965565482700185, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.1168261148674237, 10);
  sqcRYGate(q, 1.252196186887999, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6955381103522198, 1);
  sqcRYGate(q, 1.5966133380012346, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.65122303197721, 1);
  sqcRYGate(q, -3.1160191849351673, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2250401540397924, 3);
  sqcRYGate(q, 1.6435979256094113, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0156113917979144, 3);
  sqcRYGate(q, -3.136063284719657, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5914049770198716, 5);
  sqcRYGate(q, -1.1394000337032058, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0012687823520875813, 5);
  sqcRYGate(q, 0.015832452293477853, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0505026618998876, 7);
  sqcRYGate(q, -1.3560712474605745, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.5401772291760683, 7);
  sqcRYGate(q, -3.1044233309087517, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.0709069523970998, 9);
  sqcRYGate(q, -1.3703138393224208, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.13075314615900527, 9);
  sqcRYGate(q, -2.788576013148065, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5359108060623674, 0);
  sqcRYGate(q, -0.8745417467836837, 1);
  sqcRYGate(q, 1.5605154365092397, 2);
  sqcRYGate(q, 1.380950733671055, 3);
  sqcRYGate(q, 1.6047290113606931, 4);
  sqcRYGate(q, -0.8619587468487806, 5);
  sqcRYGate(q, 2.8916230261315112, 6);
  sqcRYGate(q, 1.4356730914576834, 7);
  sqcRYGate(q, -1.1741342773957575, 8);
  sqcRYGate(q, -3.12702063201625, 9);
  sqcRYGate(q, 1.396161955533736, 10);
  sqcRYGate(q, 1.3989224494060437, 11);

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
