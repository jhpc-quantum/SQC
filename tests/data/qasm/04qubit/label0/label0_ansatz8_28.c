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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -1.562324067587098, 0);
  sqcRYGate(q, 0.5921309280623568, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6161417564632443, 0);
  sqcRYGate(q, 1.5343185208611185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20247054133252956, 2);
  sqcRYGate(q, -2.4308155997305123, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2827592127657415, 2);
  sqcRYGate(q, -2.1616839852890655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7063592650697732, 0);
  sqcRYGate(q, -0.24110773446139255, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5264403262739537, 0);
  sqcRYGate(q, 2.765343867571165, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.316257942228765, 1);
  sqcRYGate(q, 1.6783938063324086, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5413264934829582, 1);
  sqcRYGate(q, -2.1463598630487217, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1649621794376892, 0);
  sqcRYGate(q, -2.144722971015132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.217194260874019, 0);
  sqcRYGate(q, 2.7241245375211194, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6485212597599759, 2);
  sqcRYGate(q, -1.8394827805345262, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6599967495580517, 2);
  sqcRYGate(q, 0.37117414632308293, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8549422041305075, 0);
  sqcRYGate(q, -0.8087582309238519, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8211797382664354, 0);
  sqcRYGate(q, -0.018887271758477372, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.651550631767834, 1);
  sqcRYGate(q, 0.8621296805465809, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8235753478683536, 1);
  sqcRYGate(q, -0.23038086908273556, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6119724731883149, 0);
  sqcRYGate(q, 1.7751961697274776, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.19610238772324792, 0);
  sqcRYGate(q, 0.7911527306426693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8029437834507984, 2);
  sqcRYGate(q, -0.32277431005661583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5010901432533101, 2);
  sqcRYGate(q, -2.314952315647846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9209838838345732, 0);
  sqcRYGate(q, -0.762435203513538, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3583362636963776, 0);
  sqcRYGate(q, -1.9153560323220533, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3331234472451339, 1);
  sqcRYGate(q, -1.504428718411586, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0380225962991236, 1);
  sqcRYGate(q, 2.737462461137104, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6751484983924039, 0);
  sqcRYGate(q, -0.5697096409033149, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.535449769903976, 0);
  sqcRYGate(q, -1.8066339636199036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9450392090829611, 2);
  sqcRYGate(q, -0.1926771733959951, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6330608538112665, 2);
  sqcRYGate(q, 0.6895542999729742, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2772014252269505, 0);
  sqcRYGate(q, -2.1558594644356677, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.610771199486515, 0);
  sqcRYGate(q, -2.777850627010312, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8026397213757548, 1);
  sqcRYGate(q, 1.4092605447042137, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.583957764679518, 1);
  sqcRYGate(q, -2.500983249771329, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.29187540419646907, 0);
  sqcRYGate(q, -0.0982970543279097, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.156938670154417, 0);
  sqcRYGate(q, 1.414490736250879, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8475057015725076, 2);
  sqcRYGate(q, 1.894139569572019, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2031753568456938, 2);
  sqcRYGate(q, 1.7345158854899747, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7275484333878008, 0);
  sqcRYGate(q, 1.5768077129660414, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6562858374576204, 0);
  sqcRYGate(q, -0.885061357275471, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.482043988962013, 1);
  sqcRYGate(q, 0.13584676966425846, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4644905614654359, 1);
  sqcRYGate(q, -2.054864207042444, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7543371968331476, 0);
  sqcRYGate(q, 2.7279136343663315, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8641052483585523, 0);
  sqcRYGate(q, 0.3868309885928163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2354845172600992, 2);
  sqcRYGate(q, -2.4772868995299873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10331898722445576, 2);
  sqcRYGate(q, -0.47950345913892495, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0952170905963525, 0);
  sqcRYGate(q, 2.704629183952826, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4831193723444955, 0);
  sqcRYGate(q, -2.440572268326871, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.738626186892039, 1);
  sqcRYGate(q, -1.9272211064082738, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.162765589268539, 1);
  sqcRYGate(q, 0.860040384938484, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4643580741016615, 0);
  sqcRYGate(q, 0.6945225666445666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4802596269703496, 0);
  sqcRYGate(q, -1.5293225573281763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6142672158925837, 2);
  sqcRYGate(q, -0.39024970383914237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0304065099874657, 2);
  sqcRYGate(q, -0.05149232127872594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.938688980900557, 0);
  sqcRYGate(q, 1.538289188475418, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.366725464749023, 0);
  sqcRYGate(q, -2.8216640505553845, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2467053458520088, 1);
  sqcRYGate(q, -2.013008780359515, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9515309958421566, 1);
  sqcRYGate(q, -1.064129924282751, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2825848929549144, 0);
  sqcRYGate(q, 0.7861033507341658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0871390624948676, 0);
  sqcRYGate(q, 1.047806874236378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5473641914761638, 2);
  sqcRYGate(q, 1.7387310273763559, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.541343144247142, 2);
  sqcRYGate(q, 0.38091462797617126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.128780132704974, 0);
  sqcRYGate(q, -2.553903998854705, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9326813846538722, 0);
  sqcRYGate(q, 1.14229585910386, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8540024128364587, 1);
  sqcRYGate(q, 0.1933663101428113, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0269290481915476, 1);
  sqcRYGate(q, 1.7197316637698579, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.394146091986987, 0);
  sqcRYGate(q, 0.9455467211672861, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.609836052955296, 0);
  sqcRYGate(q, -2.2055371726067676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4992909273177144, 2);
  sqcRYGate(q, -1.2348379940112677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.430606083849156, 2);
  sqcRYGate(q, -2.118052951991986, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1547488397928145, 0);
  sqcRYGate(q, 3.140491228853487, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9960200272419248, 0);
  sqcRYGate(q, -1.6756688876590031, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.36765055263142016, 1);
  sqcRYGate(q, 2.5168649702967083, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7571643327051716, 1);
  sqcRYGate(q, 0.569098303421624, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.38979248900937963, 0);
  sqcRYGate(q, -0.6651570418134264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7758731084459862, 0);
  sqcRYGate(q, 0.2854240779910411, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6633915212939218, 2);
  sqcRYGate(q, 0.6610732204713031, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.802015020446862, 2);
  sqcRYGate(q, -2.8149167661043157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9332666145094892, 0);
  sqcRYGate(q, -0.4685844844624439, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.370000520727815, 0);
  sqcRYGate(q, 0.728462926379575, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.806251120187091, 1);
  sqcRYGate(q, -0.7042340407490482, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.188268107640569, 1);
  sqcRYGate(q, 2.9561119735519052, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5849871786037584, 0);
  sqcRYGate(q, 2.847309109923396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.057320096774711615, 0);
  sqcRYGate(q, 2.307279294590386, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.159913181782316, 2);
  sqcRYGate(q, -1.6158526220492346, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.20200359131195356, 2);
  sqcRYGate(q, 1.8055087136192598, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6028840839032661, 0);
  sqcRYGate(q, -1.9348375017077313, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7203116790614285, 0);
  sqcRYGate(q, -2.4840178465905254, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5743011082922993, 1);
  sqcRYGate(q, 1.4403322190395336, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.591169038412902, 1);
  sqcRYGate(q, 2.713535439796487, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9560537256373625, 0);
  sqcRYGate(q, -0.5635765518261664, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.209542198826368, 0);
  sqcRYGate(q, -1.1959989914895583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.009059570306102636, 2);
  sqcRYGate(q, 2.31702620843601, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.05223651019647487, 2);
  sqcRYGate(q, -2.3852492136857095, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.39602329859862284, 0);
  sqcRYGate(q, 0.6367935209357354, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0810094411463496, 0);
  sqcRYGate(q, 1.0126188704405754, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.180110733684057, 1);
  sqcRYGate(q, 2.2432976097509307, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7759301537806484, 1);
  sqcRYGate(q, 2.0159702199326075, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9849086828578626, 0);
  sqcRYGate(q, 1.687911552154285, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5534261688186115, 0);
  sqcRYGate(q, -0.8848107627887999, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.31061041806239, 2);
  sqcRYGate(q, -1.000283581574776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2766072979590178, 2);
  sqcRYGate(q, -3.0046795252942897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.368815367523333, 0);
  sqcRYGate(q, -1.3507139277367053, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.577517760951058, 0);
  sqcRYGate(q, 3.111619881845455, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.02536430041146, 1);
  sqcRYGate(q, 1.4277710671455308, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.41061125136344506, 1);
  sqcRYGate(q, -0.764789700116502, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7681102716538362, 0);
  sqcRYGate(q, 0.09182952617586705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8529951275132492, 0);
  sqcRYGate(q, -0.9768672434432991, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.26854803525139315, 2);
  sqcRYGate(q, 3.0550975722381764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2747527776596481, 2);
  sqcRYGate(q, -2.890174123339925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5105771045561828, 0);
  sqcRYGate(q, -0.8173110377521632, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9389095400064167, 0);
  sqcRYGate(q, 1.5390570843161528, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7183280847174439, 1);
  sqcRYGate(q, 2.0552410253881273, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.18124046023114015, 1);
  sqcRYGate(q, 0.6605939185649575, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7351475444383926, 0);
  sqcRYGate(q, -0.8306008245880842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0388267349463631, 0);
  sqcRYGate(q, 2.804007580588303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.21193599389011286, 2);
  sqcRYGate(q, 1.5832266043609582, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1710270947252575, 2);
  sqcRYGate(q, -0.06239554050446561, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8863396996790556, 0);
  sqcRYGate(q, -2.9209216505993014, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1605470924154897, 0);
  sqcRYGate(q, 3.0198546573626146, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8349185838195823, 1);
  sqcRYGate(q, -1.707667664834975, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7543156914847611, 1);
  sqcRYGate(q, 0.5630227819880522, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6735387293890343, 0);
  sqcRYGate(q, 1.5579008909841896, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5259642779828977, 0);
  sqcRYGate(q, 1.1836191441099695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.08295143138713, 2);
  sqcRYGate(q, 0.024296645564172, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.567752473750001, 2);
  sqcRYGate(q, -0.5436695546404433, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5403901059056273, 0);
  sqcRYGate(q, 0.2405335802197435, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1410994969769193, 0);
  sqcRYGate(q, 0.13312687742717522, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.271561601981158, 1);
  sqcRYGate(q, 2.034152283309708, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4440745019741383, 1);
  sqcRYGate(q, 2.5403062679850654, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8789462962033956, 0);
  sqcRYGate(q, -2.557458440605254, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.080746153927703, 0);
  sqcRYGate(q, -0.7003686265153872, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.395414561106001, 2);
  sqcRYGate(q, 0.6636224818267475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.630189478446041, 2);
  sqcRYGate(q, -0.7747698698280986, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3253081621221936, 0);
  sqcRYGate(q, 2.534818788790819, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0677002984263497, 0);
  sqcRYGate(q, 2.119964100207226, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3298815461490037, 1);
  sqcRYGate(q, 2.3899239217141934, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7242939381221147, 1);
  sqcRYGate(q, -2.3221410110688745, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6575630931361163, 0);
  sqcRYGate(q, 1.2483884846968134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1827784654118387, 0);
  sqcRYGate(q, 0.827467591920067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2650113715674527, 2);
  sqcRYGate(q, 1.5356585043902342, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5038374078635945, 2);
  sqcRYGate(q, -2.1695218078636014, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9071144164212576, 0);
  sqcRYGate(q, -2.24344107235639, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5396785582558846, 0);
  sqcRYGate(q, 0.972077614664674, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6919206674289122, 1);
  sqcRYGate(q, -1.8847708722061158, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6529711640584637, 1);
  sqcRYGate(q, -1.8639425930149773, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.77205357577321, 0);
  sqcRYGate(q, 1.9462846148126562, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2128597454689485, 0);
  sqcRYGate(q, 3.047057575989181, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8600191786854758, 2);
  sqcRYGate(q, 2.0771621052925417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3599662363338796, 2);
  sqcRYGate(q, -0.3896092279730654, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.28102540911616464, 0);
  sqcRYGate(q, 1.6033112183163853, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.47321833876228236, 0);
  sqcRYGate(q, -0.8672961558192812, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2834629461317604, 1);
  sqcRYGate(q, 0.6159344128431945, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2019659515508174, 1);
  sqcRYGate(q, 2.812532917522288, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.14455684017860987, 0);
  sqcRYGate(q, 0.03499945582136199, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9984401902646898, 0);
  sqcRYGate(q, 1.1682432898654849, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9380441522120457, 2);
  sqcRYGate(q, -2.8979894639932597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3573486808255066, 2);
  sqcRYGate(q, -2.9950043520083063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5279920169873893, 0);
  sqcRYGate(q, -1.5607528846165115, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.018898766246481458, 0);
  sqcRYGate(q, -0.8066421521465554, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.98724393013019, 1);
  sqcRYGate(q, -2.3777402469695725, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.471722493838894, 1);
  sqcRYGate(q, 1.0180829962278004, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2254728301551392, 0);
  sqcRYGate(q, -0.4419238878311944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1308352938465625, 0);
  sqcRYGate(q, -0.4607559120958751, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.053821218406712, 2);
  sqcRYGate(q, -1.3093251672040847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4972236688313518, 2);
  sqcRYGate(q, -0.48666502637451925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0327921653249632, 0);
  sqcRYGate(q, 1.517902770813215, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.436871987336505, 0);
  sqcRYGate(q, 2.7512535805968823, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.446711250768565, 1);
  sqcRYGate(q, 2.347915893892359, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.635776646244909, 1);
  sqcRYGate(q, 3.0588051876592455, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3491147103098429, 0);
  sqcRYGate(q, -0.27013320322027984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6174848216890185, 0);
  sqcRYGate(q, 2.48795396350147, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9110280046510058, 2);
  sqcRYGate(q, 0.5096057279499226, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.913725190012248, 2);
  sqcRYGate(q, 1.1197332471771906, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1141962620518244, 0);
  sqcRYGate(q, 1.6236277301172342, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0182288813451246, 0);
  sqcRYGate(q, -0.8977514384814508, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7215143427503801, 1);
  sqcRYGate(q, -2.2929671594511127, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4148285708093449, 1);
  sqcRYGate(q, 2.709779017600265, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.29966844165018564, 0);
  sqcRYGate(q, 0.5700029441772259, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.037210643115948, 0);
  sqcRYGate(q, 2.231679185966739, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3084963540598222, 2);
  sqcRYGate(q, 0.06854414062172332, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9207381276781028, 2);
  sqcRYGate(q, -0.1640776758624953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1002691465889045, 0);
  sqcRYGate(q, 0.2840890202640255, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.577803493231517, 0);
  sqcRYGate(q, 1.874174881462004, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7536560897159915, 1);
  sqcRYGate(q, 0.5538231850449193, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.616586333640482, 1);
  sqcRYGate(q, -3.132692743791059, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8592032231720088, 0);
  sqcRYGate(q, 0.23415019514913646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3998996725167281, 0);
  sqcRYGate(q, -0.11870824540567426, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5543329832534947, 2);
  sqcRYGate(q, -2.394451894956295, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4471041731899639, 2);
  sqcRYGate(q, 2.035887539318546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7500562605749757, 0);
  sqcRYGate(q, -2.399967936146115, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4151206634806988, 0);
  sqcRYGate(q, 0.2936739604848979, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0440743380680537, 1);
  sqcRYGate(q, -0.8589762314078913, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5808994603038027, 1);
  sqcRYGate(q, -2.24249766952807, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9959325456595388, 0);
  sqcRYGate(q, -2.764180082580067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.271988851668272, 0);
  sqcRYGate(q, -2.7411126481743913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8562130852447064, 2);
  sqcRYGate(q, -1.9101526487802962, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4175412659123492, 2);
  sqcRYGate(q, -1.7563906361388195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.188425333787971, 0);
  sqcRYGate(q, 0.16561361145952033, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.1806195350072004, 0);
  sqcRYGate(q, -3.0922166549407852, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.14757841743397737, 1);
  sqcRYGate(q, -2.228964556460388, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7868985329653082, 1);
  sqcRYGate(q, -2.6506764012309927, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0153261751852671, 0);
  sqcRYGate(q, -2.4845313483599214, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5195318426399997, 0);
  sqcRYGate(q, -2.5304951958235407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.936077143037162, 2);
  sqcRYGate(q, -0.5676988415186756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.414089391643451, 2);
  sqcRYGate(q, -1.471201852422733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6275588323890429, 0);
  sqcRYGate(q, 2.1090510801975624, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.19655220296078166, 0);
  sqcRYGate(q, -0.1460658643739437, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2821233483236236, 1);
  sqcRYGate(q, 2.216587422051979, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.381219828290849, 1);
  sqcRYGate(q, -0.8475555673648295, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3774303620335866, 0);
  sqcRYGate(q, -0.9085831993329393, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.034832039630192, 0);
  sqcRYGate(q, 0.23435686314937387, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.303553320326574, 2);
  sqcRYGate(q, 0.20491060159615088, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9296362044836556, 2);
  sqcRYGate(q, 0.6914943039241669, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.537335309588482, 0);
  sqcRYGate(q, 0.29927040114541464, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.44973020611762277, 0);
  sqcRYGate(q, -1.3211551883251227, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.057836589620111, 1);
  sqcRYGate(q, -0.19136312917274978, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.140547206098206, 1);
  sqcRYGate(q, -1.9214797517271234, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8005857625623355, 0);
  sqcRYGate(q, -3.069445242248003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.174755623146865, 0);
  sqcRYGate(q, -2.9416183423822777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.12016907953598238, 2);
  sqcRYGate(q, 2.9178002006678265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1176911733157446, 2);
  sqcRYGate(q, -0.2960547583284213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.668582441438972, 0);
  sqcRYGate(q, 2.993744751118472, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7875829988627183, 0);
  sqcRYGate(q, -1.2002566560125718, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3292032266515978, 1);
  sqcRYGate(q, 1.6968692028723733, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6549507939485393, 1);
  sqcRYGate(q, -1.72218592272346, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3263519357512745, 0);
  sqcRYGate(q, 1.2061790429037762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1718651406763596, 0);
  sqcRYGate(q, -2.717284557999713, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7071741494665313, 2);
  sqcRYGate(q, -1.0651368763993396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.24843047889548053, 2);
  sqcRYGate(q, -1.7482628393737059, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3646881796168184, 0);
  sqcRYGate(q, -2.1151175090340026, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.409943730237679, 0);
  sqcRYGate(q, -1.1011529043298989, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6059295296921716, 1);
  sqcRYGate(q, -1.0455549469540197, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1236744157544745, 1);
  sqcRYGate(q, 2.619986287450218, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7200620707910588, 0);
  sqcRYGate(q, 2.851190146903128, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3947179258551015, 0);
  sqcRYGate(q, -2.379511968306525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1479010395042577, 2);
  sqcRYGate(q, -2.319828681164294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.168964135161432, 2);
  sqcRYGate(q, 0.012056506992750142, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0543944774100447, 0);
  sqcRYGate(q, 1.717211322242727, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8338714545866754, 0);
  sqcRYGate(q, -1.6447258691090605, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8046727809617389, 1);
  sqcRYGate(q, 1.4868789486582867, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7534514954735245, 1);
  sqcRYGate(q, 0.7269199874981584, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0870664715369909, 0);
  sqcRYGate(q, -2.8161186557712323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0981381938105166, 0);
  sqcRYGate(q, 1.5609184122856261, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6536880609228373, 2);
  sqcRYGate(q, -0.04329706313503756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1904778066713444, 2);
  sqcRYGate(q, 1.7066807820529641, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7950352864800566, 0);
  sqcRYGate(q, 1.415967560863641, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5416799843114997, 0);
  sqcRYGate(q, 2.9316723778857487, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.634921468060412, 1);
  sqcRYGate(q, -0.3741389706665448, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5200374257462994, 1);
  sqcRYGate(q, 2.6540975148626638, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.895930303376136, 0);
  sqcRYGate(q, -0.036283718972962876, 1);
  sqcRYGate(q, -0.20354384304787398, 2);
  sqcRYGate(q, -1.6153073773730338, 3);

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
