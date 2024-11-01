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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 2.083416160921826, 0);
  sqcRYGate(q, -1.1536900213996115, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8086093686185576, 0);
  sqcRYGate(q, -0.6723571316085044, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.25811624079265005, 2);
  sqcRYGate(q, 0.9894570955349437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.825898518104583, 2);
  sqcRYGate(q, 2.9698288823497676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.517923437625297, 0);
  sqcRYGate(q, 2.301477453930309, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8414227636294954, 0);
  sqcRYGate(q, 0.6066997535124664, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0872401766125197, 1);
  sqcRYGate(q, 0.19272529390743084, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5780012481645103, 1);
  sqcRYGate(q, -1.2866216907803627, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9557889098831539, 0);
  sqcRYGate(q, -1.9209517220121313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5736957967068669, 0);
  sqcRYGate(q, 2.3503750644227708, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3821873059402403, 2);
  sqcRYGate(q, 0.13846261889236988, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0570185189253678, 2);
  sqcRYGate(q, -3.131446112429683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6790473428522885, 0);
  sqcRYGate(q, 3.0211082644339746, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2380152208708575, 0);
  sqcRYGate(q, 1.2856554429702394, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.760352317266825, 1);
  sqcRYGate(q, 1.0390868296224085, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.836484003043715, 1);
  sqcRYGate(q, 1.631660295276907, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.896286231392129, 0);
  sqcRYGate(q, 0.23211479520904726, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0061652959997587, 0);
  sqcRYGate(q, 1.3394420519445958, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7299000383274445, 2);
  sqcRYGate(q, 0.6830159724302493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.032397735843249, 2);
  sqcRYGate(q, -0.48981504918185426, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.428265634440187, 0);
  sqcRYGate(q, -1.0370814881259467, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4529760167228116, 0);
  sqcRYGate(q, 1.8413352657145206, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.93894971601699, 1);
  sqcRYGate(q, 0.6117685706924163, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.297134479340979, 1);
  sqcRYGate(q, 1.4637305880924956, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7147104651550382, 0);
  sqcRYGate(q, -1.8918825208502001, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0744466045710444, 0);
  sqcRYGate(q, -2.8051318092494926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.898606475381584, 2);
  sqcRYGate(q, 0.05024345914921289, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7663573374437078, 2);
  sqcRYGate(q, 1.5575831904890833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1103334627394732, 0);
  sqcRYGate(q, -1.1968137837956583, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7756271539832436, 0);
  sqcRYGate(q, -2.601270053344135, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.349178766041732, 1);
  sqcRYGate(q, 2.8641319715743854, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9682605482677336, 1);
  sqcRYGate(q, -1.113213157081919, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.28176757274346453, 0);
  sqcRYGate(q, 2.413662755899172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8983674958432275, 0);
  sqcRYGate(q, 1.6103859518427879, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.919070671306479, 2);
  sqcRYGate(q, -2.5031191124958663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.470732128975107, 2);
  sqcRYGate(q, -2.0161130712121524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1479970875481766, 0);
  sqcRYGate(q, -0.39442872167964527, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3780208953218973, 0);
  sqcRYGate(q, 2.2288392660184213, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8706531188160181, 1);
  sqcRYGate(q, -1.345587870811399, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4342670374399407, 1);
  sqcRYGate(q, 2.6192763727294164, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.28193002276302526, 0);
  sqcRYGate(q, 1.7314955122560196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.950700307382103, 0);
  sqcRYGate(q, -2.66552915098635, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9085665683814672, 2);
  sqcRYGate(q, 3.020821846033326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.526682577257098, 2);
  sqcRYGate(q, 1.1683443961740103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.51836588875162, 0);
  sqcRYGate(q, -2.172182705953664, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5730595704717634, 0);
  sqcRYGate(q, 2.7460029142275153, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2273811103412307, 1);
  sqcRYGate(q, -2.167669541974182, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.442955208193664, 1);
  sqcRYGate(q, 1.568894580544106, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2216768678003669, 0);
  sqcRYGate(q, -2.531647733338763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0807604665778907, 0);
  sqcRYGate(q, 1.0427452559838652, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3888164714244693, 2);
  sqcRYGate(q, -1.7278005361752111, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.21622166516624655, 2);
  sqcRYGate(q, 1.5332003971288326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.531844471046392, 0);
  sqcRYGate(q, 2.267484512743163, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6704289928272251, 0);
  sqcRYGate(q, 0.8648182780693183, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9601256525908592, 1);
  sqcRYGate(q, -1.7496790106815956, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7461917410643104, 1);
  sqcRYGate(q, -1.530561724080867, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7559886555834185, 0);
  sqcRYGate(q, -1.0744199561716572, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11162849251858997, 0);
  sqcRYGate(q, 0.09929707712224813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9182921676570603, 2);
  sqcRYGate(q, 0.530349793702686, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0881886606588718, 2);
  sqcRYGate(q, 2.8496712614409643, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9801022476572525, 0);
  sqcRYGate(q, 2.622115594457469, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0580950098453754, 0);
  sqcRYGate(q, 0.7843901037142631, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.550385733328523, 1);
  sqcRYGate(q, 2.1563813084789683, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8724401927859864, 1);
  sqcRYGate(q, 0.5834260558662162, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6650263516980336, 0);
  sqcRYGate(q, -1.2424687899407347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0558694032308877, 0);
  sqcRYGate(q, -0.28329353072475705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.83865582190297, 2);
  sqcRYGate(q, 2.477671145993772, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6564825827540088, 2);
  sqcRYGate(q, 1.4433342792160577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7789879615502586, 0);
  sqcRYGate(q, 2.5231920224342423, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7687180387717341, 0);
  sqcRYGate(q, 2.1047103889569545, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1697317575836585, 1);
  sqcRYGate(q, 0.8770387194280616, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.41103713570380407, 1);
  sqcRYGate(q, 2.1389858340218124, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.029438548266230494, 0);
  sqcRYGate(q, 0.6799848188800834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3883209833459454, 0);
  sqcRYGate(q, -1.824921995713125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3678125724881056, 2);
  sqcRYGate(q, 1.132553882616663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.089181301963217, 2);
  sqcRYGate(q, 1.6399129909783865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.567980360949392, 0);
  sqcRYGate(q, 0.18558865369998925, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0677561028877114, 0);
  sqcRYGate(q, 0.024300696343906303, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0318075277665733, 1);
  sqcRYGate(q, 0.7301919274129369, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9291077732248896, 1);
  sqcRYGate(q, -2.638981852366015, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5812355852965236, 0);
  sqcRYGate(q, -0.8961236172840155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2533887979923604, 0);
  sqcRYGate(q, 2.995842111913338, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.408023102379123, 2);
  sqcRYGate(q, 2.803264875177357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9418137777846394, 2);
  sqcRYGate(q, 2.5488154236239513, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4755458303913773, 0);
  sqcRYGate(q, 1.2725640329705, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7556861453401345, 0);
  sqcRYGate(q, -1.8414501604587556, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1572413609759657, 1);
  sqcRYGate(q, 0.6993536884606217, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1838305692158346, 1);
  sqcRYGate(q, 1.165166456715217, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9791613467184361, 0);
  sqcRYGate(q, -0.3993458526804172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5932181857039094, 0);
  sqcRYGate(q, -0.16645059314700283, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8352622134995427, 2);
  sqcRYGate(q, 1.7118562493155174, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5682004723401155, 2);
  sqcRYGate(q, 2.740553369334487, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8399351847423775, 0);
  sqcRYGate(q, -1.6877770192263497, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2961975306726198, 0);
  sqcRYGate(q, -0.7621722881160701, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6897353459521884, 1);
  sqcRYGate(q, -1.9980480730078256, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.44212839660896, 1);
  sqcRYGate(q, -3.1360288323879115, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.198339214367718, 0);
  sqcRYGate(q, 2.335059729665472, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3625924769084854, 0);
  sqcRYGate(q, -2.0527193317021135, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1505623915375978, 2);
  sqcRYGate(q, -0.5885510415069675, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07660348010595808, 2);
  sqcRYGate(q, -1.6713630378776116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.342379472379202, 0);
  sqcRYGate(q, -1.7474821277040453, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4902322584977234, 0);
  sqcRYGate(q, -0.05072930435096712, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0821970914683021, 1);
  sqcRYGate(q, -0.5135960195030664, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.292887045282335, 1);
  sqcRYGate(q, -1.364479521253962, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.193037828136057, 0);
  sqcRYGate(q, 2.384141549960632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7596926402369422, 0);
  sqcRYGate(q, 2.9045787359675717, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.601962847722953, 2);
  sqcRYGate(q, -0.642541677259592, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07878575075917382, 2);
  sqcRYGate(q, 0.3136246494206714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.20442925213085963, 0);
  sqcRYGate(q, 0.7508338572205332, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.31825276965758187, 0);
  sqcRYGate(q, 1.0287569991775989, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8410962701788813, 1);
  sqcRYGate(q, -0.9580859818922091, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.09509873626893306, 1);
  sqcRYGate(q, 1.3016041087543107, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9630311080389058, 0);
  sqcRYGate(q, 1.8733840347498214, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.141120721370611, 0);
  sqcRYGate(q, -1.5397709531162844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.39173527103980715, 2);
  sqcRYGate(q, -2.41422107574357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6476027005784095, 2);
  sqcRYGate(q, -0.3769460591648129, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.077044497537087, 0);
  sqcRYGate(q, 0.1053651664120201, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.18643492594894973, 0);
  sqcRYGate(q, -0.59495334955683, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.036643748409491, 1);
  sqcRYGate(q, 0.10456618746622404, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6309802283250862, 1);
  sqcRYGate(q, -1.870661420045906, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4168031460042485, 0);
  sqcRYGate(q, -0.33330967392297506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.250685192318513, 0);
  sqcRYGate(q, 0.9231373330957124, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9216291720764689, 2);
  sqcRYGate(q, -2.597620642164781, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3300158871128325, 2);
  sqcRYGate(q, -1.6900764396963044, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0197055110282918, 0);
  sqcRYGate(q, 0.7175632608242397, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6502508250983601, 0);
  sqcRYGate(q, -2.2752469114240337, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1183329802896638, 1);
  sqcRYGate(q, -2.226769544422663, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1523046834348611, 1);
  sqcRYGate(q, 0.29238108803237495, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4451388858341203, 0);
  sqcRYGate(q, 2.8701800926600476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.499852733108844, 0);
  sqcRYGate(q, 1.4686570917541442, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6541695009455362, 2);
  sqcRYGate(q, 2.167100628981267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.37920291084174274, 2);
  sqcRYGate(q, -1.6182017750439375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.179243421861842, 0);
  sqcRYGate(q, -1.9075620796899573, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2690004911340056, 0);
  sqcRYGate(q, -0.7964300344411113, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0789049732313134, 1);
  sqcRYGate(q, -2.3181322967611098, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.03033489394876452, 1);
  sqcRYGate(q, 1.3878215109999177, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5852727068709535, 0);
  sqcRYGate(q, 2.1806518670955968, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.875848356358654, 0);
  sqcRYGate(q, 1.751700954005963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5416911393710474, 2);
  sqcRYGate(q, -1.6631961502500527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1926494359927118, 2);
  sqcRYGate(q, 0.2542027502204218, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.244391862628982, 0);
  sqcRYGate(q, -2.9080910206159465, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5727992244220137, 0);
  sqcRYGate(q, 2.409556021188219, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4831495054907951, 1);
  sqcRYGate(q, -1.4589920346987193, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7084187120173414, 1);
  sqcRYGate(q, 3.101340489001711, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3616646775203254, 0);
  sqcRYGate(q, -0.47487256094279484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.327845767314793, 0);
  sqcRYGate(q, 2.1701892950808883, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.615983454317936, 2);
  sqcRYGate(q, 1.4817014751627227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9247402063462341, 2);
  sqcRYGate(q, -0.08187644796224218, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.28443821222776117, 0);
  sqcRYGate(q, 1.6644697250289529, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.388448367523174, 0);
  sqcRYGate(q, -1.3765060816065904, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3221511119670133, 1);
  sqcRYGate(q, 1.033225943904167, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.087625573564597, 1);
  sqcRYGate(q, 1.6432824125131402, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.817929238373867, 0);
  sqcRYGate(q, -0.08204385386334323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5539030869004518, 0);
  sqcRYGate(q, -0.19212255833549194, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.202350974706718, 2);
  sqcRYGate(q, 1.8978989825554515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4640961902429925, 2);
  sqcRYGate(q, -0.3891110619111684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8226202658838533, 0);
  sqcRYGate(q, 0.39616701791166786, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9034064675383814, 0);
  sqcRYGate(q, -0.6516855591237132, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5731401223603177, 1);
  sqcRYGate(q, -2.6429012357790787, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5410677410956173, 1);
  sqcRYGate(q, 2.428966032526959, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4835443743416788, 0);
  sqcRYGate(q, 0.36367024648712576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.776059612320045, 0);
  sqcRYGate(q, 2.8347018577761736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.919488762037691, 2);
  sqcRYGate(q, -1.6357129956001675, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.864580341060259, 2);
  sqcRYGate(q, 2.4610353090299606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3557801219461294, 0);
  sqcRYGate(q, -2.094157440584337, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.801617603112079, 0);
  sqcRYGate(q, 0.8349743336723662, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8829880965823949, 1);
  sqcRYGate(q, -0.9382825701271664, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0482356506554176, 1);
  sqcRYGate(q, -2.312623494466747, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0101544545271146, 0);
  sqcRYGate(q, 1.0979290981454226, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3669393808503747, 0);
  sqcRYGate(q, 1.8155970458659298, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4584963515409983, 2);
  sqcRYGate(q, 0.5661555924595971, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.016866245481383935, 2);
  sqcRYGate(q, 2.1722654782806794, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5290749059240873, 0);
  sqcRYGate(q, -0.2037754676438261, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.46753074567663866, 0);
  sqcRYGate(q, 2.8730610364772273, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8504920992222775, 1);
  sqcRYGate(q, -0.14558982199257767, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8028023377359383, 1);
  sqcRYGate(q, 1.2972206805204123, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9417136053951345, 0);
  sqcRYGate(q, -2.696479143937485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.501615400649796, 0);
  sqcRYGate(q, -1.1657915441190265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9813281858049594, 2);
  sqcRYGate(q, -2.158258810864748, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.032904817947073, 2);
  sqcRYGate(q, 2.3154251627219513, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22747047743909035, 0);
  sqcRYGate(q, -1.2631301552174685, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7922161783766999, 0);
  sqcRYGate(q, 0.046999088200654196, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1214983821886275, 1);
  sqcRYGate(q, -0.005400807939179408, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0561020943200767, 1);
  sqcRYGate(q, -0.6129009701241512, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.850038257698061, 0);
  sqcRYGate(q, -2.9555433625515777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0434178210601144, 0);
  sqcRYGate(q, 1.6879950531226897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.028795688698876, 2);
  sqcRYGate(q, -0.6038782201660098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.21737351891331, 2);
  sqcRYGate(q, -2.6097629436380143, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.10778885212073863, 0);
  sqcRYGate(q, -2.975318683588295, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2107735320397612, 0);
  sqcRYGate(q, -2.2785241147199735, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6174399637362427, 1);
  sqcRYGate(q, -1.8527965943060216, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.362007102811383, 1);
  sqcRYGate(q, -1.3646404706507884, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.508025097741769, 0);
  sqcRYGate(q, 1.3952692467420844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.235359484438005, 0);
  sqcRYGate(q, 3.0316855731953547, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7183488864084113, 2);
  sqcRYGate(q, -2.6757565417602347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3096056198608257, 2);
  sqcRYGate(q, 2.62707587638445, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3228384390899275, 0);
  sqcRYGate(q, 1.1308808189503727, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.22103987558859473, 0);
  sqcRYGate(q, -1.5387012029566574, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.296267012127612, 1);
  sqcRYGate(q, -2.9085430838970026, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.637261155259068, 1);
  sqcRYGate(q, 0.0878099548448086, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1601782965099934, 0);
  sqcRYGate(q, 2.079442566563458, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.680798161432135, 0);
  sqcRYGate(q, -0.21306357875501458, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1581698059264376, 2);
  sqcRYGate(q, 1.0253194941690507, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7109038137631167, 2);
  sqcRYGate(q, -1.741206606571028, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.817216810911235, 0);
  sqcRYGate(q, -0.28402125391210525, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6366744472851114, 0);
  sqcRYGate(q, -2.3879408449429076, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6715455928863494, 1);
  sqcRYGate(q, 0.9083132638693276, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3695532658727698, 1);
  sqcRYGate(q, -2.4857978933844094, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6138736161959093, 0);
  sqcRYGate(q, -1.0820922620396933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4920878980975558, 0);
  sqcRYGate(q, 2.269047638389809, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0043197409329382526, 2);
  sqcRYGate(q, -2.130956478673924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3405361074532882, 2);
  sqcRYGate(q, -1.0335960315343264, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1896329109771189, 0);
  sqcRYGate(q, 1.271066536294021, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5459478941009643, 0);
  sqcRYGate(q, -1.5202618519598492, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5887050389000112, 1);
  sqcRYGate(q, 2.7258919599159843, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8806318242500576, 1);
  sqcRYGate(q, 1.2279415186460225, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.824294580862115, 0);
  sqcRYGate(q, -1.155251112208126, 1);
  sqcRYGate(q, 1.7250285208434986, 2);
  sqcRYGate(q, -1.1032511324603247, 3);

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
