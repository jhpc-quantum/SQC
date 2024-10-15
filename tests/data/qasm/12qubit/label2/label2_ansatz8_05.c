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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -1.3296242904802815, 0);
  sqcRYGate(q, 2.0015621084479407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8414825633158474, 0);
  sqcRYGate(q, 1.4450713608122383, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1445317832673965, 2);
  sqcRYGate(q, -1.904983400693436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0088297931870454, 2);
  sqcRYGate(q, 1.5178796780260964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6860580302832804, 4);
  sqcRYGate(q, 0.3147587558374143, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6310032441029767, 4);
  sqcRYGate(q, -2.0602645579790826, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7261521017260468, 6);
  sqcRYGate(q, -2.5652861353134058, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1203594198461957, 6);
  sqcRYGate(q, 2.161031573757939, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8441733259941078, 8);
  sqcRYGate(q, 1.2411305413937646, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6240935334467372, 8);
  sqcRYGate(q, -0.8329951737560857, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.114740878734085, 10);
  sqcRYGate(q, -1.6532272129610828, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.369469883046458, 10);
  sqcRYGate(q, 3.1108207365446487, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.7080303956425387, 0);
  sqcRYGate(q, -0.7971737365939457, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8583309229676196, 0);
  sqcRYGate(q, -1.926808299530733, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.71231232626676, 2);
  sqcRYGate(q, 0.3981893967722563, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.279064128090763, 2);
  sqcRYGate(q, -1.7756690951931162, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.0150986849444337, 4);
  sqcRYGate(q, 0.43225652764911787, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4387957894939394, 4);
  sqcRYGate(q, 3.0976529753418918, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.49590757593600954, 6);
  sqcRYGate(q, 0.6452528611337406, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.08990304279873197, 6);
  sqcRYGate(q, 3.0390839310540265, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0940101291379634, 8);
  sqcRYGate(q, 3.1078213703343716, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.129303242074377, 8);
  sqcRYGate(q, 0.0017895158307474899, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.04110285682735083, 1);
  sqcRYGate(q, 2.731007380159901, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0850404603938673, 1);
  sqcRYGate(q, -0.7422222261808633, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.019881106830768047, 3);
  sqcRYGate(q, 2.757244944141124, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.7364796170785052, 3);
  sqcRYGate(q, -0.7045994009650061, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2859422972906405, 5);
  sqcRYGate(q, 1.1908385186624721, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.314431636139598, 5);
  sqcRYGate(q, -0.5219321909434255, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.3777341400587646, 7);
  sqcRYGate(q, -3.095426037135362, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.2714159271649192, 7);
  sqcRYGate(q, -1.5452371173716895, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.484567321253677, 9);
  sqcRYGate(q, 0.4288984467941211, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.44273469025553613, 9);
  sqcRYGate(q, 0.20133794200410993, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.9387630664974802, 0);
  sqcRYGate(q, -2.145959539699015, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1193892433323045, 0);
  sqcRYGate(q, 0.799000539133007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8965097390035277, 2);
  sqcRYGate(q, -0.5017750318534432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.998232812344676, 2);
  sqcRYGate(q, -1.1955970989845717, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1203844104436431, 4);
  sqcRYGate(q, -0.6135602922208407, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9772640467918703, 4);
  sqcRYGate(q, 0.21052868765224325, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.174257931296891, 6);
  sqcRYGate(q, 1.9847086729191727, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0096239538863827, 6);
  sqcRYGate(q, -0.0326835901651199, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.21036026959410464, 8);
  sqcRYGate(q, -1.8380394422584783, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.02875770274921763, 8);
  sqcRYGate(q, -1.56498772613454, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3396863288764385, 10);
  sqcRYGate(q, 0.23591195617998295, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.33941083147111595, 10);
  sqcRYGate(q, 0.8051840328181274, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2220780218062006, 0);
  sqcRYGate(q, 2.69937760617274, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.10088253818761, 0);
  sqcRYGate(q, -3.0927146696862895, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.505539500923904, 2);
  sqcRYGate(q, 0.8717543830890406, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.025783607769571223, 2);
  sqcRYGate(q, 0.009736255183387341, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.9765361798404624, 4);
  sqcRYGate(q, -1.09497286844032, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.043709978834343154, 4);
  sqcRYGate(q, 0.00040329714758288965, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4925036571822612, 6);
  sqcRYGate(q, -0.9294253454445309, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.010614143329899406, 6);
  sqcRYGate(q, 0.03507595539108639, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.10629722793592994, 8);
  sqcRYGate(q, 2.3343520682742964, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.0055080009294985, 8);
  sqcRYGate(q, -1.0865819093016, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.218823651184823, 1);
  sqcRYGate(q, 0.6120705596176635, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.12311692392157703, 1);
  sqcRYGate(q, -1.1730889789415961, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6234839044247604, 3);
  sqcRYGate(q, 1.0284259916112886, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.01514533003688042, 3);
  sqcRYGate(q, -3.138331295180751, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.1841892626377728, 5);
  sqcRYGate(q, 0.3147999107876746, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.044562127948464265, 5);
  sqcRYGate(q, -3.051991712261357, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.2333660524746075, 7);
  sqcRYGate(q, -1.5767275036163138, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.1333207078299736, 7);
  sqcRYGate(q, -0.039165523032404254, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.4910359130802906, 9);
  sqcRYGate(q, -1.2763355451236265, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.6942663136738856, 9);
  sqcRYGate(q, -0.17681956587887626, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.8869028321147954, 0);
  sqcRYGate(q, -2.4843582422500052, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2986282896620274, 0);
  sqcRYGate(q, 1.1189840003833758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5905244700975374, 2);
  sqcRYGate(q, -2.448620446951034, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0649476587056803, 2);
  sqcRYGate(q, -0.12580123251845698, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.460896057903226, 4);
  sqcRYGate(q, -1.611875352634341, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2556620745722138, 4);
  sqcRYGate(q, -0.1984549382163534, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6245069124977842, 6);
  sqcRYGate(q, -2.5492296402404717, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9697595529940144, 6);
  sqcRYGate(q, 0.4308620232983005, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0709284747847674, 8);
  sqcRYGate(q, -2.6737753585576054, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.846832640144616, 8);
  sqcRYGate(q, 1.2754118775128784, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.070388537454351, 10);
  sqcRYGate(q, 1.9503329099810829, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8229321449527098, 10);
  sqcRYGate(q, 1.6011363065889965, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.32640187812866905, 0);
  sqcRYGate(q, -2.0574500424416575, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.17961294629164898, 0);
  sqcRYGate(q, 0.5235489964997495, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7347124372527516, 2);
  sqcRYGate(q, 0.4220962269030449, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.1297997285997914, 2);
  sqcRYGate(q, 3.134940704353287, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6451542349379382, 4);
  sqcRYGate(q, 1.1937518893566679, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.008491932978038186, 4);
  sqcRYGate(q, -0.008849251265171741, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.5837670032514133, 6);
  sqcRYGate(q, -2.1093504831563856, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.8285178741140817, 6);
  sqcRYGate(q, -1.4697261374602375, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.9540067669929555, 8);
  sqcRYGate(q, -1.9883044836003423, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.030614500715304, 8);
  sqcRYGate(q, -2.653225413558909, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.8786291570646214, 1);
  sqcRYGate(q, 2.851908812483712, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.099124724485989, 1);
  sqcRYGate(q, -2.963859245392762, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0197496022886667, 3);
  sqcRYGate(q, -2.072756306703705, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.0904606892880637, 3);
  sqcRYGate(q, -0.040004612022796926, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5981270115420408, 5);
  sqcRYGate(q, 1.8463390559860164, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.03818500245839558, 5);
  sqcRYGate(q, -2.912361155344128, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7004400835639162, 7);
  sqcRYGate(q, -1.5393957640140332, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.0266728444647155, 7);
  sqcRYGate(q, 3.137151737517308, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.128923260089861, 9);
  sqcRYGate(q, -1.6796045527796348, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.4029777631627893, 9);
  sqcRYGate(q, -2.556528889806013, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.61395152773463, 0);
  sqcRYGate(q, -1.181188807223861, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.19757413031919666, 0);
  sqcRYGate(q, 1.641280643110007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6135930884805639, 2);
  sqcRYGate(q, -1.293046375497509, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8268336508218828, 2);
  sqcRYGate(q, -1.7235642954045272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4360430732982783, 4);
  sqcRYGate(q, -1.3226408912935872, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.576051977886885, 4);
  sqcRYGate(q, -0.14909758382949526, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4067217145573494, 6);
  sqcRYGate(q, -2.763276849269109, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.13229269781284236, 6);
  sqcRYGate(q, 2.721059394363226, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5417257249402072, 8);
  sqcRYGate(q, 0.5370813539062986, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.2329359591321127, 8);
  sqcRYGate(q, -2.8989726747002176, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.6017787198916706, 10);
  sqcRYGate(q, -2.2838849856246677, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.6407285000490655, 10);
  sqcRYGate(q, 2.188959641368464, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.4398159714402776, 0);
  sqcRYGate(q, 0.3394656082251181, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.0891204813122048, 0);
  sqcRYGate(q, -0.12310850920404004, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.978059941669859, 2);
  sqcRYGate(q, 0.4334977834718359, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.04844754482555031, 2);
  sqcRYGate(q, -0.2429411247547675, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5448077349673532, 4);
  sqcRYGate(q, 0.2441599385722984, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.08109905970538149, 4);
  sqcRYGate(q, 0.20141951816299447, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.407948071080896, 6);
  sqcRYGate(q, -0.28634100998806195, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.9395730797969547, 6);
  sqcRYGate(q, 3.13513186622281, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.88091885487737, 8);
  sqcRYGate(q, -1.915174907288601, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.014378669197730046, 8);
  sqcRYGate(q, -0.002730408782977341, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.0218404294349606, 1);
  sqcRYGate(q, 2.1469588873826195, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.097229181709981, 1);
  sqcRYGate(q, -1.2413441771785283, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6452942082602675, 3);
  sqcRYGate(q, -3.0499912157252327, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1159958885207524, 3);
  sqcRYGate(q, -0.006395335740926989, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.12702037625461934, 5);
  sqcRYGate(q, -1.7834307012189339, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.970049140389709, 5);
  sqcRYGate(q, 0.01791934066572942, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.1434006573084934, 7);
  sqcRYGate(q, -2.1255549635137543, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.1403198399875327, 7);
  sqcRYGate(q, 3.1389031531473104, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.5087885069741215, 9);
  sqcRYGate(q, -1.4868577356435169, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.3334019073782834, 9);
  sqcRYGate(q, 1.2332765865518036, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.1063346483927692, 0);
  sqcRYGate(q, 1.6697960260152351, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0379739441088622, 0);
  sqcRYGate(q, -2.9710205002151944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.482067019588365, 2);
  sqcRYGate(q, -2.569929913828288, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4765751261663951, 2);
  sqcRYGate(q, 1.490793001279079, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3604728315443921, 4);
  sqcRYGate(q, 1.640411201235596, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1035354504348054, 4);
  sqcRYGate(q, -0.4637154050636412, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.11102469270596681, 6);
  sqcRYGate(q, 0.5913271760881765, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2361541392569075, 6);
  sqcRYGate(q, 3.138708691858702, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4726963489235696, 8);
  sqcRYGate(q, -0.8393370243057953, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1129403460181777, 8);
  sqcRYGate(q, -1.6785406199972528, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3944230937242708, 10);
  sqcRYGate(q, 2.8412623757867963, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.26789129490683106, 10);
  sqcRYGate(q, 2.1496036266362424, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.24578116383305296, 0);
  sqcRYGate(q, -1.5939097316700925, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.01452617979966586, 0);
  sqcRYGate(q, -1.8607109541485964, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1578615475681633, 2);
  sqcRYGate(q, 1.9675925858003502, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.132783064478519, 2);
  sqcRYGate(q, 0.008200804364406214, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.4978073498650075, 4);
  sqcRYGate(q, 0.06957624027004794, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.140437428775641, 4);
  sqcRYGate(q, 2.397232064642936, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.534978086058569, 6);
  sqcRYGate(q, 1.570472262943368, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.2196618888073916, 6);
  sqcRYGate(q, 3.1391292973622287, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.8990106043721751, 8);
  sqcRYGate(q, -1.6926862350550778, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.027115292953829244, 8);
  sqcRYGate(q, 3.0924790787306606, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.48226186623717565, 1);
  sqcRYGate(q, 2.9069009287630894, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.02715757187135354, 1);
  sqcRYGate(q, 1.711431188139814, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1891485449388615, 3);
  sqcRYGate(q, 3.1227932292058598, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1414516009408335, 3);
  sqcRYGate(q, 3.1415890955095733, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7763995437641569, 5);
  sqcRYGate(q, -2.299917975586361, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.055677403395630994, 5);
  sqcRYGate(q, 0.48642527527187873, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.316186859878981, 7);
  sqcRYGate(q, -1.274374287064803, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.1375338418593386, 7);
  sqcRYGate(q, 0.0002496068451369738, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.2343837467440686, 9);
  sqcRYGate(q, -3.0191722244683428, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.252477614852558, 9);
  sqcRYGate(q, 1.5141751933166574, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.0174842661274583, 0);
  sqcRYGate(q, -1.4552718239177835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9432214089665343, 0);
  sqcRYGate(q, -2.668619228347436, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5674764666799409, 2);
  sqcRYGate(q, 2.603649860525827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.907869514559632, 2);
  sqcRYGate(q, -2.216956782813308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8252820452546762, 4);
  sqcRYGate(q, 0.1918321295046687, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4254625491112795, 4);
  sqcRYGate(q, 0.01042568123843702, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7775029046116897, 6);
  sqcRYGate(q, -1.6697129700644286, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7111689459415258, 6);
  sqcRYGate(q, 1.7631912875216784, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1789567727942991, 8);
  sqcRYGate(q, 1.4082490458988282, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7756238534068949, 8);
  sqcRYGate(q, 0.358990919140945, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.2932218277709406, 10);
  sqcRYGate(q, -1.7114944096848763, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.4152668110712118, 10);
  sqcRYGate(q, -0.0075671673868052906, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8166636369107154, 0);
  sqcRYGate(q, 1.3217901954593207, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.11230583989354768, 0);
  sqcRYGate(q, -2.9962288588423824, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.773769522533758, 2);
  sqcRYGate(q, 1.238214112698321, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.0028118106064834465, 2);
  sqcRYGate(q, -0.0015353129289322684, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5174766656104293, 4);
  sqcRYGate(q, -0.14999700668589974, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.13727374742375942, 4);
  sqcRYGate(q, 3.0193596840979424, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.784085645622401, 6);
  sqcRYGate(q, -0.8254584065115952, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.140902063522826, 6);
  sqcRYGate(q, 0.06464976359014149, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.2832948765237306, 8);
  sqcRYGate(q, 2.3958065371292174, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.8771549203114164, 8);
  sqcRYGate(q, -3.1224686182256667, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.29157010453840243, 1);
  sqcRYGate(q, -0.22161310861279584, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6386766595376285, 1);
  sqcRYGate(q, -2.9464488351470237, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3031419945189806, 3);
  sqcRYGate(q, 0.9821850816129878, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.0011870721822630614, 3);
  sqcRYGate(q, -3.141399784933583, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2421946901760323, 5);
  sqcRYGate(q, -1.9398446558194882, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.11404373379727772, 5);
  sqcRYGate(q, -2.856066762285216, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.9444201820972272, 7);
  sqcRYGate(q, 0.24648408481930684, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.0643883057955352, 7);
  sqcRYGate(q, -0.0008595125486525745, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.5133844337711702, 9);
  sqcRYGate(q, 1.295502421042828, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.0374251390440987, 9);
  sqcRYGate(q, 1.5594426886177812, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.2853407789193527, 0);
  sqcRYGate(q, 1.7847478665271295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3237416115075573, 0);
  sqcRYGate(q, -3.12501893271656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2589683770075473, 2);
  sqcRYGate(q, 0.8547399238571757, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6001377203250247, 2);
  sqcRYGate(q, 1.4765005693399145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.920959133422931, 4);
  sqcRYGate(q, -0.008551251170046747, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6634641978298215, 4);
  sqcRYGate(q, -0.23662080948292705, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5866203340524816, 6);
  sqcRYGate(q, -1.1763697420574217, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5587349006841746, 6);
  sqcRYGate(q, -1.5143124773459467, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4285861173183543, 8);
  sqcRYGate(q, 0.08847079572098336, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.7624916745281713, 8);
  sqcRYGate(q, 2.849647848047265, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.39913045809572595, 10);
  sqcRYGate(q, -2.4865008119541017, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.9346515615738162, 10);
  sqcRYGate(q, -2.458536672855133, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9987716987378903, 0);
  sqcRYGate(q, 0.45325897552195293, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.04903398281968561, 0);
  sqcRYGate(q, 0.07879832067480219, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6206849859720109, 2);
  sqcRYGate(q, 0.8431294297598031, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.0029957655631587367, 2);
  sqcRYGate(q, 3.141255509751421, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.15717611965486622, 4);
  sqcRYGate(q, 1.4715599428682529, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.066214717685151, 4);
  sqcRYGate(q, 1.867067761213808, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.9972570914077767, 6);
  sqcRYGate(q, -0.3999787402766403, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.027224399362463087, 6);
  sqcRYGate(q, -0.002079312804986119, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.05204152395617889, 8);
  sqcRYGate(q, 0.5348802783957767, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.2901508021935433, 8);
  sqcRYGate(q, 3.0874205276309747, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.405180815420331, 1);
  sqcRYGate(q, 0.6780996350018113, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0878854528373805, 1);
  sqcRYGate(q, -1.6181650961210758, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.216980902881665, 3);
  sqcRYGate(q, 2.526316651402175, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.122885546294895, 3);
  sqcRYGate(q, -3.120489789387239, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.871725400490029, 5);
  sqcRYGate(q, 1.344625987937209, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.45977481931111175, 5);
  sqcRYGate(q, -0.04613951353761772, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1246695875764066, 7);
  sqcRYGate(q, 0.011613046305324094, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.131908660919316, 7);
  sqcRYGate(q, 3.140280666479427, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.4520176305125507, 9);
  sqcRYGate(q, -2.6233212493320344, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.18908138533016555, 9);
  sqcRYGate(q, -3.1410411462485492, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.14837582557950935, 0);
  sqcRYGate(q, -1.488024573222478, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1132926416969409, 0);
  sqcRYGate(q, 1.3446183225134067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.05346882984540447, 2);
  sqcRYGate(q, -1.434133950532879, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0706642774813524, 2);
  sqcRYGate(q, -0.8073460121493824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1209552577349102, 4);
  sqcRYGate(q, -0.19953963789405813, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.13221988318261746, 4);
  sqcRYGate(q, 1.0706443163972994, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6315995409135624, 6);
  sqcRYGate(q, -0.17649162575230976, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6992596787644956, 6);
  sqcRYGate(q, 0.04222734707665031, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1206160281022592, 8);
  sqcRYGate(q, 1.267265041481509, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.686782171541708, 8);
  sqcRYGate(q, 2.1303778095214083, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.757643397850824, 10);
  sqcRYGate(q, 2.1303156106518353, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6718634280409637, 10);
  sqcRYGate(q, 2.168312661612198, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.2413951223008146, 0);
  sqcRYGate(q, 1.5964784954294906, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4006478687380604, 0);
  sqcRYGate(q, 0.016149742213386276, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7873466839944966, 2);
  sqcRYGate(q, -1.507235589581962, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1158413579872395, 2);
  sqcRYGate(q, -3.1392751963197614, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.4934197624534908, 4);
  sqcRYGate(q, -1.514515073643699, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.1170155880948855, 4);
  sqcRYGate(q, -1.8143259072071087, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.8365974433608625, 6);
  sqcRYGate(q, -0.4758924827360073, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.024396343351006728, 6);
  sqcRYGate(q, 0.01755053160802613, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.591577215090185, 8);
  sqcRYGate(q, 1.8048882732665534, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.1371666535031366, 8);
  sqcRYGate(q, 0.04841311758356426, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.0509910549838355, 1);
  sqcRYGate(q, 1.297438973364046, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.0054079090512571745, 1);
  sqcRYGate(q, -3.086332003657806, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1038768591333787, 3);
  sqcRYGate(q, 1.8275877836419125, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.0021951738934946623, 3);
  sqcRYGate(q, -0.050263395112804796, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.096058787573451, 5);
  sqcRYGate(q, -2.897109868979145, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.710361994988162, 5);
  sqcRYGate(q, -0.07318060647666869, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.36479138178328613, 7);
  sqcRYGate(q, 0.6957557960668428, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.130171080323758, 7);
  sqcRYGate(q, -0.01810896263348205, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.2213770350026527, 9);
  sqcRYGate(q, -2.9347408532594788, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.052249709060418, 9);
  sqcRYGate(q, -3.138703712903738, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.4849107653953455, 0);
  sqcRYGate(q, -0.3798791480394092, 1);
  sqcRYGate(q, 2.416410815437777, 2);
  sqcRYGate(q, 2.3391729971915503, 3);
  sqcRYGate(q, 0.23632395332303968, 4);
  sqcRYGate(q, 3.0273597917951207, 5);
  sqcRYGate(q, -0.19140307287579408, 6);
  sqcRYGate(q, -0.8791141874376383, 7);
  sqcRYGate(q, -1.6973612583479267, 8);
  sqcRYGate(q, 1.2293849985229954, 9);
  sqcRYGate(q, 2.2134792569567567, 10);
  sqcRYGate(q, -0.44755360978459235, 11);

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
