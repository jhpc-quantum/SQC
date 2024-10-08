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

  sqcRYGate(q, -1.574274566416661, 0);
  sqcRZGate(q, -2.8538387897637296, 0);
  sqcRYGate(q, 3.138153041413888, 1);
  sqcRZGate(q, -1.0920199415759573, 1);
  sqcRYGate(q, -1.5700460308271262, 2);
  sqcRZGate(q, -1.5985840918060308, 2);
  sqcRYGate(q, -3.138049086987639, 3);
  sqcRZGate(q, -2.211643555865093, 3);
  sqcRYGate(q, -0.0001236148678200542, 4);
  sqcRZGate(q, 2.4283732030429643, 4);
  sqcRYGate(q, -0.058113276840509265, 5);
  sqcRZGate(q, -1.0225088156262925, 5);
  sqcRYGate(q, -1.3477035408293516, 6);
  sqcRZGate(q, -3.141028776210282, 6);
  sqcRYGate(q, -5.487840996769972e-05, 7);
  sqcRZGate(q, 1.9550680562164462, 7);
  sqcRYGate(q, -1.4529680296249127e-05, 8);
  sqcRZGate(q, 2.391705833776728, 8);
  sqcRYGate(q, 0.11362257335410764, 9);
  sqcRZGate(q, -0.02211272348806286, 9);
  sqcRYGate(q, 1.4185677898618771, 10);
  sqcRZGate(q, 1.4264163040760183, 10);
  sqcRYGate(q, 3.1396208068325144, 11);
  sqcRZGate(q, 1.3690591466065154, 11);
  sqcRYGate(q, -0.00019874172323053327, 12);
  sqcRZGate(q, -0.8819984703836959, 12);
  sqcRYGate(q, -3.004630482000796, 13);
  sqcRZGate(q, -0.7437282616263384, 13);
  sqcRYGate(q, 1.1243506425493208, 14);
  sqcRZGate(q, 0.15319717622517362, 14);
  sqcRYGate(q, -2.7348482232118894, 15);
  sqcRZGate(q, -0.024236893929710845, 15);
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
  sqcRYGate(q, -3.140387584297239, 0);
  sqcRZGate(q, 3.126169119121141, 0);
  sqcRYGate(q, -1.841154006388624, 1);
  sqcRZGate(q, -1.9243581972562278, 1);
  sqcRYGate(q, -1.2550357622471722, 2);
  sqcRZGate(q, -2.6891799524500715, 2);
  sqcRYGate(q, 0.4269751700021128, 3);
  sqcRZGate(q, 1.2005000910216306, 3);
  sqcRYGate(q, 1.5689281475426564, 4);
  sqcRZGate(q, 3.124713106289792, 4);
  sqcRYGate(q, 1.555682506281468, 5);
  sqcRZGate(q, -3.01733603507353, 5);
  sqcRYGate(q, -1.3475144395039662, 6);
  sqcRZGate(q, -1.4646110336119864, 6);
  sqcRYGate(q, -1.4771945986015513, 7);
  sqcRZGate(q, -3.0089142513680005, 7);
  sqcRYGate(q, -1.5727784285979711, 8);
  sqcRZGate(q, 1.5359064079523685, 8);
  sqcRYGate(q, -3.0099807527603466, 9);
  sqcRZGate(q, 3.000898334701971, 9);
  sqcRYGate(q, -0.8175176437883769, 10);
  sqcRZGate(q, 1.8989521187042604, 10);
  sqcRYGate(q, -0.015415012403223374, 11);
  sqcRZGate(q, -0.10529764083133834, 11);
  sqcRYGate(q, -0.005375431869536606, 12);
  sqcRZGate(q, 1.9017061814771747, 12);
  sqcRYGate(q, -1.2402545114065735, 13);
  sqcRZGate(q, -0.5268906876506412, 13);
  sqcRYGate(q, 3.0271153517224776, 14);
  sqcRZGate(q, -2.8826996514027177, 14);
  sqcRYGate(q, -2.930744154331391, 15);
  sqcRZGate(q, 2.8454913670752404, 15);
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
  sqcRYGate(q, -1.3340399144496429, 0);
  sqcRZGate(q, -0.9958315537835484, 0);
  sqcRYGate(q, 3.1129136829446358, 1);
  sqcRZGate(q, -2.1635834278664836, 1);
  sqcRYGate(q, 0.00867556140417771, 2);
  sqcRZGate(q, -1.9867399291901773, 2);
  sqcRYGate(q, 0.0003330875932742655, 3);
  sqcRZGate(q, -0.2519020418550495, 3);
  sqcRYGate(q, 0.1801717291342182, 4);
  sqcRZGate(q, 2.201006561027482, 4);
  sqcRYGate(q, 0.00019834514026495498, 5);
  sqcRZGate(q, 3.0865626754899798, 5);
  sqcRYGate(q, -1.5673354762198448, 6);
  sqcRZGate(q, 2.6484898519572786, 6);
  sqcRYGate(q, -2.927780714747216, 7);
  sqcRZGate(q, -1.5919860857059505, 7);
  sqcRYGate(q, -2.6822751974549695, 8);
  sqcRZGate(q, -0.8223594535532425, 8);
  sqcRYGate(q, -3.1408750800524556, 9);
  sqcRZGate(q, -1.6747357538408325, 9);
  sqcRYGate(q, -3.016543397952554, 10);
  sqcRZGate(q, -0.99689542100487, 10);
  sqcRYGate(q, 0.005389821166532237, 11);
  sqcRZGate(q, -2.857105850227369, 11);
  sqcRYGate(q, -3.1398399198401563, 12);
  sqcRZGate(q, -2.223507551204577, 12);
  sqcRYGate(q, 0.29932237411010487, 13);
  sqcRZGate(q, 1.4520456084018363, 13);
  sqcRYGate(q, -0.7452302909073172, 14);
  sqcRZGate(q, 0.6503911103518396, 14);
  sqcRYGate(q, -0.7239670535547313, 15);
  sqcRZGate(q, 0.6040444140356421, 15);
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
  sqcRYGate(q, 0.049409050320507575, 0);
  sqcRZGate(q, 1.1190077096580904, 0);
  sqcRYGate(q, 0.5675279741639453, 1);
  sqcRZGate(q, 0.5402816656048497, 1);
  sqcRYGate(q, 1.582915658431247, 2);
  sqcRZGate(q, 1.2012326633158874, 2);
  sqcRYGate(q, -1.296773986376646, 3);
  sqcRZGate(q, -0.4225630463586443, 3);
  sqcRYGate(q, 0.5143701933133692, 4);
  sqcRZGate(q, -0.6869819140120194, 4);
  sqcRYGate(q, 1.6081838243129516, 5);
  sqcRZGate(q, -2.4105427598011127, 5);
  sqcRYGate(q, -3.1412341764485943, 6);
  sqcRZGate(q, 2.269006945302552, 6);
  sqcRYGate(q, -3.1338148647008577, 7);
  sqcRZGate(q, -0.5380413218206442, 7);
  sqcRYGate(q, -0.02809942675838803, 8);
  sqcRZGate(q, -2.4665121961846785, 8);
  sqcRYGate(q, 0.0019484842017547521, 9);
  sqcRZGate(q, 1.2646328555958553, 9);
  sqcRYGate(q, 0.06229826609492938, 10);
  sqcRZGate(q, -0.19967750318010183, 10);
  sqcRYGate(q, -0.01075013115456347, 11);
  sqcRZGate(q, -0.30261913835117576, 11);
  sqcRYGate(q, 3.140280464225798, 12);
  sqcRZGate(q, -1.7106675742468673, 12);
  sqcRYGate(q, -2.5337314478357698, 13);
  sqcRZGate(q, 1.5972674386051606, 13);
  sqcRYGate(q, 2.7139685257047392, 14);
  sqcRZGate(q, 0.5992699320526813, 14);
  sqcRYGate(q, 0.12981594013068865, 15);
  sqcRZGate(q, 3.033768670606642, 15);
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
  sqcRYGate(q, 0.0359776709444553, 0);
  sqcRZGate(q, -0.2363412226964822, 0);
  sqcRYGate(q, 1.570636187315311, 1);
  sqcRZGate(q, 0.9310037835128356, 1);
  sqcRYGate(q, -3.1409052831378523, 2);
  sqcRZGate(q, -0.29995382035746765, 2);
  sqcRYGate(q, 1.4140378943384988, 3);
  sqcRZGate(q, 1.5765338291893565, 3);
  sqcRYGate(q, -2.1055801625127497, 4);
  sqcRZGate(q, 3.141246091735969, 4);
  sqcRYGate(q, 7.739214359382717e-05, 5);
  sqcRZGate(q, 2.9564287712888744, 5);
  sqcRYGate(q, -3.1369499217112597, 6);
  sqcRZGate(q, 2.1277465204865216, 6);
  sqcRYGate(q, -2.9030923026271482, 7);
  sqcRZGate(q, -1.719747201444758, 7);
  sqcRYGate(q, 1.6887475912442182, 8);
  sqcRZGate(q, -3.014765599013609, 8);
  sqcRYGate(q, 0.00815830683220377, 9);
  sqcRZGate(q, 0.05355360379257345, 9);
  sqcRYGate(q, 0.3200147307988477, 10);
  sqcRZGate(q, 0.351863126614437, 10);
  sqcRYGate(q, -1.5766758439232167, 11);
  sqcRZGate(q, -3.1310751812215045, 11);
  sqcRYGate(q, -0.0016265625554083842, 12);
  sqcRZGate(q, 0.40235965977877813, 12);
  sqcRYGate(q, -3.0289572209610136, 13);
  sqcRZGate(q, 0.14480679760655946, 13);
  sqcRYGate(q, -2.309135629035887, 14);
  sqcRZGate(q, -0.5303155213348267, 14);
  sqcRYGate(q, -2.749401160489714, 15);
  sqcRZGate(q, -1.095503783410905, 15);
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
  sqcRYGate(q, -0.006248967929256074, 0);
  sqcRZGate(q, -0.06961332100074635, 0);
  sqcRYGate(q, -2.921810158600257, 1);
  sqcRZGate(q, -2.021040132846779, 1);
  sqcRYGate(q, -0.0076023193761241, 2);
  sqcRZGate(q, 3.074355299273434, 2);
  sqcRYGate(q, -1.5601558938534197, 3);
  sqcRZGate(q, 3.06692406795162, 3);
  sqcRYGate(q, -1.164863679604185, 4);
  sqcRZGate(q, 1.4051940624015151, 4);
  sqcRYGate(q, -5.1602432026065514e-05, 5);
  sqcRZGate(q, 0.524208160901316, 5);
  sqcRYGate(q, 3.141401630318295, 6);
  sqcRZGate(q, -0.32838397826749877, 6);
  sqcRYGate(q, -0.0015144306914356561, 7);
  sqcRZGate(q, -0.14789574875743927, 7);
  sqcRYGate(q, 3.087374275882882, 8);
  sqcRZGate(q, -1.236647056594978, 8);
  sqcRYGate(q, -1.5713025588109089, 9);
  sqcRZGate(q, 2.771744732267068, 9);
  sqcRYGate(q, -1.5636161793538905, 10);
  sqcRZGate(q, -3.0786860437088435, 10);
  sqcRYGate(q, -1.7322524453257555, 11);
  sqcRZGate(q, 3.1264142050644876, 11);
  sqcRYGate(q, 0.5417145222760267, 12);
  sqcRZGate(q, -0.00528224517108134, 12);
  sqcRYGate(q, -0.0067318001857843415, 13);
  sqcRZGate(q, -2.9923145762169296, 13);
  sqcRYGate(q, 1.3850331251200396, 14);
  sqcRZGate(q, 0.17659364694648258, 14);
  sqcRYGate(q, 0.5974875435877864, 15);
  sqcRZGate(q, 3.077002190558416, 15);
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
  sqcRYGate(q, 0.04242152125795788, 0);
  sqcRZGate(q, 1.0225586124515607, 0);
  sqcRYGate(q, -1.6995048372853647, 1);
  sqcRZGate(q, -2.6363878427405107, 1);
  sqcRYGate(q, -1.57091991951526, 2);
  sqcRZGate(q, 0.42804777411925254, 2);
  sqcRYGate(q, -3.0593157521336103, 3);
  sqcRZGate(q, -1.2484717356273813, 3);
  sqcRYGate(q, 1.299039796159108, 4);
  sqcRZGate(q, 0.5613415309720692, 4);
  sqcRYGate(q, 1.570801804825063, 5);
  sqcRZGate(q, 0.07083525226008634, 5);
  sqcRYGate(q, 2.850417996675072, 6);
  sqcRZGate(q, 0.9160865776758148, 6);
  sqcRYGate(q, -1.6174807341319763, 7);
  sqcRZGate(q, -1.3069801906309417, 7);
  sqcRYGate(q, 1.570459605312231, 8);
  sqcRZGate(q, 0.07983560869734152, 8);
  sqcRYGate(q, 3.14102882152218, 9);
  sqcRZGate(q, 0.28057112822774766, 9);
  sqcRYGate(q, 0.002147083136743576, 10);
  sqcRZGate(q, -0.6585074221680624, 10);
  sqcRYGate(q, -1.6682824304908692, 11);
  sqcRZGate(q, -1.0232932801877468, 11);
  sqcRYGate(q, -0.6309555617927184, 12);
  sqcRZGate(q, 3.132819323638071, 12);
  sqcRYGate(q, -0.007261579941328478, 13);
  sqcRZGate(q, -1.2147623393405782, 13);
  sqcRYGate(q, -3.1273268192939176, 14);
  sqcRZGate(q, -2.128394927238323, 14);
  sqcRYGate(q, 0.37131718865641883, 15);
  sqcRZGate(q, 2.2840362784511417, 15);
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
  sqcRYGate(q, 3.129853859333777, 0);
  sqcRZGate(q, -1.9793199874643799, 0);
  sqcRYGate(q, -2.9923657170786577, 1);
  sqcRZGate(q, 1.0460687169097953, 1);
  sqcRYGate(q, -2.778917352503152, 2);
  sqcRZGate(q, -2.517527453866693, 2);
  sqcRYGate(q, 5.712979091883471e-06, 3);
  sqcRZGate(q, -2.586444451802147, 3);
  sqcRYGate(q, 1.5881631011431958, 4);
  sqcRZGate(q, 2.107962956410274, 4);
  sqcRYGate(q, 1.5392394229782624, 5);
  sqcRZGate(q, 1.7525076258324213, 5);
  sqcRYGate(q, -0.003000427117892986, 6);
  sqcRZGate(q, 0.9824887752774883, 6);
  sqcRYGate(q, 3.141324408287587, 7);
  sqcRZGate(q, 2.5108927422108933, 7);
  sqcRYGate(q, -3.128821977631525, 8);
  sqcRZGate(q, 1.6241550343634454, 8);
  sqcRYGate(q, 0.6022602732528046, 9);
  sqcRZGate(q, -0.7949595723060509, 9);
  sqcRYGate(q, 0.0031225884017915817, 10);
  sqcRZGate(q, 0.5673374595749264, 10);
  sqcRYGate(q, -2.853352305946785, 11);
  sqcRZGate(q, -1.1485193350224279, 11);
  sqcRYGate(q, 1.0284085005575128, 12);
  sqcRZGate(q, -0.4787970051318338, 12);
  sqcRYGate(q, 0.030292932587649094, 13);
  sqcRZGate(q, 0.6208149213266516, 13);
  sqcRYGate(q, -0.017355022273830123, 14);
  sqcRZGate(q, 2.5113666478778844, 14);
  sqcRYGate(q, -0.46373530275057506, 15);
  sqcRZGate(q, 0.15464637948786555, 15);
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
  sqcRYGate(q, -3.1081623818452178, 0);
  sqcRZGate(q, -2.544639614428803, 0);
  sqcRYGate(q, -0.4881791806441482, 1);
  sqcRZGate(q, 0.36648473270760906, 1);
  sqcRYGate(q, -2.9413021906056924, 2);
  sqcRZGate(q, -1.264678610093424, 2);
  sqcRYGate(q, 0.0006170110314505095, 3);
  sqcRZGate(q, -0.9753126718477728, 3);
  sqcRYGate(q, -3.1392237276979373, 4);
  sqcRZGate(q, 2.557334867073664, 4);
  sqcRYGate(q, -3.1415441013771512, 5);
  sqcRZGate(q, -2.0122224038730225, 5);
  sqcRYGate(q, 1.5552714209224936, 6);
  sqcRZGate(q, -2.491966501799875, 6);
  sqcRYGate(q, 0.2743419737572393, 7);
  sqcRZGate(q, 1.641901640374257, 7);
  sqcRYGate(q, -0.0011345478251660124, 8);
  sqcRZGate(q, -3.113628489691899, 8);
  sqcRYGate(q, -0.004186309192703241, 9);
  sqcRZGate(q, 0.796924126810265, 9);
  sqcRYGate(q, 1.5667114469851908, 10);
  sqcRZGate(q, 1.2291231254574053, 10);
  sqcRYGate(q, 0.01424962166742194, 11);
  sqcRZGate(q, -0.9538848091273802, 11);
  sqcRYGate(q, -2.7337857947472464, 12);
  sqcRZGate(q, 0.16301024252992363, 12);
  sqcRYGate(q, -3.1319895861037343, 13);
  sqcRZGate(q, 3.065652007671115, 13);
  sqcRYGate(q, -5.009827328184002e-05, 14);
  sqcRZGate(q, -2.2506986787612027, 14);
  sqcRYGate(q, -0.5491055485684768, 15);
  sqcRZGate(q, 0.4684662635987698, 15);
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
  sqcRYGate(q, 0.08883097060192852, 0);
  sqcRZGate(q, -1.9972233263170205, 0);
  sqcRYGate(q, -0.3687352105560614, 1);
  sqcRZGate(q, 0.20477607330488606, 1);
  sqcRYGate(q, -0.1797997487864906, 2);
  sqcRZGate(q, -0.3990879124519554, 2);
  sqcRYGate(q, -0.18148319472836505, 3);
  sqcRZGate(q, -0.9129544331302382, 3);
  sqcRYGate(q, -2.9987360807336785, 4);
  sqcRZGate(q, -0.8853865481993797, 4);
  sqcRYGate(q, 2.9061137290037875, 5);
  sqcRZGate(q, -0.4014725951900324, 5);
  sqcRYGate(q, -3.140189960954529, 6);
  sqcRZGate(q, 0.45136585810500557, 6);
  sqcRYGate(q, -3.141325392891216, 7);
  sqcRZGate(q, 0.7262015612593652, 7);
  sqcRYGate(q, 1.5729794625437838, 8);
  sqcRZGate(q, -1.5958510174848106, 8);
  sqcRYGate(q, 2.5227356463676003, 9);
  sqcRZGate(q, -0.07144162701821649, 9);
  sqcRYGate(q, -0.0017487967181324393, 10);
  sqcRZGate(q, 1.9114882789206595, 10);
  sqcRYGate(q, 3.1411265249038265, 11);
  sqcRZGate(q, -1.09835590215254, 11);
  sqcRYGate(q, -3.1397708353562255, 12);
  sqcRZGate(q, 0.8970360323929718, 12);
  sqcRYGate(q, -0.007015079623181213, 13);
  sqcRZGate(q, 0.7263680174096203, 13);
  sqcRYGate(q, -0.003109609469667661, 14);
  sqcRZGate(q, -1.3832557304185877, 14);
  sqcRYGate(q, 0.6717823854569698, 15);
  sqcRZGate(q, -1.0281675612115801, 15);
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
  sqcRYGate(q, -3.1352082986247023, 0);
  sqcRZGate(q, -2.601655633062697, 0);
  sqcRYGate(q, 0.008016831404279223, 1);
  sqcRZGate(q, 2.4889031041087897, 1);
  sqcRYGate(q, 3.1161421007339194, 2);
  sqcRZGate(q, 0.3178046724974184, 2);
  sqcRYGate(q, 3.141146413283534, 3);
  sqcRZGate(q, -0.0417217180204832, 3);
  sqcRYGate(q, -3.1395509333849643, 4);
  sqcRZGate(q, -1.0987160533891531, 4);
  sqcRYGate(q, -3.1414617960537794, 5);
  sqcRZGate(q, 1.8598467233341422, 5);
  sqcRYGate(q, -2.3035209309608593, 6);
  sqcRZGate(q, 2.758792606260261, 6);
  sqcRYGate(q, 1.7092514102878456, 7);
  sqcRZGate(q, -1.6126649054897633, 7);
  sqcRYGate(q, 1.5774792276996068, 8);
  sqcRZGate(q, -2.367057147619613, 8);
  sqcRYGate(q, 3.1167488015462084, 9);
  sqcRZGate(q, -0.6185741294823088, 9);
  sqcRYGate(q, 1.6341841151728378, 10);
  sqcRZGate(q, -0.008090549205534538, 10);
  sqcRYGate(q, 1.4801067844254279, 11);
  sqcRZGate(q, -2.0853508369855627, 11);
  sqcRYGate(q, -2.5393927616777523, 12);
  sqcRZGate(q, 0.28106656926746965, 12);
  sqcRYGate(q, -1.5687204613233012, 13);
  sqcRZGate(q, 1.5926773871061297, 13);
  sqcRYGate(q, -0.09547466549898238, 14);
  sqcRZGate(q, 0.6156271580710393, 14);
  sqcRYGate(q, 0.748146022726323, 15);
  sqcRZGate(q, -0.17206558651724801, 15);
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
  sqcRYGate(q, 1.6518838950884651, 0);
  sqcRZGate(q, -1.4865996810579594, 0);
  sqcRYGate(q, 2.2074533192308747, 1);
  sqcRZGate(q, -1.8528850155242649, 1);
  sqcRYGate(q, 0.7947886986407715, 2);
  sqcRZGate(q, -0.576449971500316, 2);
  sqcRYGate(q, 1.6884993440345428, 3);
  sqcRZGate(q, -0.4499308464286384, 3);
  sqcRYGate(q, -1.4189581689103405, 4);
  sqcRZGate(q, -2.1930463663243844, 4);
  sqcRYGate(q, -1.4916191077998255, 5);
  sqcRZGate(q, 1.6122132324611256, 5);
  sqcRYGate(q, -3.1413694157110883, 6);
  sqcRZGate(q, -0.06099556310344345, 6);
  sqcRYGate(q, -0.0003710432978545342, 7);
  sqcRZGate(q, 1.0151656896564667, 7);
  sqcRYGate(q, -0.0003857834370744062, 8);
  sqcRZGate(q, 0.8008421106965181, 8);
  sqcRYGate(q, -3.1414990647672845, 9);
  sqcRZGate(q, 2.6501491672115676, 9);
  sqcRYGate(q, -0.1926932761450618, 10);
  sqcRZGate(q, -1.5160096270182633, 10);
  sqcRYGate(q, 0.022457238192126642, 11);
  sqcRZGate(q, 1.2043890304739753, 11);
  sqcRYGate(q, -3.140829459344317, 12);
  sqcRZGate(q, 3.113375340336116, 12);
  sqcRYGate(q, 1.5605367622032764, 13);
  sqcRZGate(q, -1.9751503465196887, 13);
  sqcRYGate(q, 0.00667274297329941, 14);
  sqcRZGate(q, -1.8407587531391314, 14);
  sqcRYGate(q, 0.005520443411438869, 15);
  sqcRZGate(q, -0.7850173286421773, 15);
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
  sqcRYGate(q, -3.1383834139991835, 0);
  sqcRZGate(q, -3.060132433031807, 0);
  sqcRYGate(q, -1.5578507986177232, 1);
  sqcRZGate(q, 1.649265397088463, 1);
  sqcRYGate(q, -0.8006906570219625, 2);
  sqcRZGate(q, 2.060053007443173, 2);
  sqcRYGate(q, 3.140602076721637, 3);
  sqcRZGate(q, -2.151262170008422, 3);
  sqcRYGate(q, -0.003387528304934051, 4);
  sqcRZGate(q, 2.1978130950110923, 4);
  sqcRYGate(q, 2.168206073704937e-05, 5);
  sqcRZGate(q, -2.5022423960106335, 5);
  sqcRYGate(q, 1.744632247546083, 6);
  sqcRZGate(q, 0.648950409249581, 6);
  sqcRYGate(q, 2.8834835417489035, 7);
  sqcRZGate(q, 0.24521702841828663, 7);
  sqcRYGate(q, -1.5958208360481168, 8);
  sqcRZGate(q, -0.0029807836852659975, 8);
  sqcRYGate(q, 3.117139889550755, 9);
  sqcRZGate(q, 0.9590477019914655, 9);
  sqcRYGate(q, 1.6488166105402529, 10);
  sqcRZGate(q, -0.18695813800344216, 10);
  sqcRYGate(q, 3.141196102496246, 11);
  sqcRZGate(q, 1.6787377225790374, 11);
  sqcRYGate(q, -1.5703868803246843, 12);
  sqcRZGate(q, -0.21048447073535126, 12);
  sqcRYGate(q, -3.1399491337392518, 13);
  sqcRZGate(q, -1.9753223196455303, 13);
  sqcRYGate(q, -1.6032230916114054, 14);
  sqcRZGate(q, -0.6382553764409863, 14);
  sqcRYGate(q, -1.5744857307853666, 15);
  sqcRZGate(q, -0.9771457828895125, 15);
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
  sqcRYGate(q, -3.052760628475809, 0);
  sqcRZGate(q, -1.6434923679670475, 0);
  sqcRYGate(q, 3.124881523734234, 1);
  sqcRZGate(q, -1.363028591664153, 1);
  sqcRYGate(q, 2.354673309437645, 2);
  sqcRZGate(q, 2.3421604677815635, 2);
  sqcRYGate(q, 3.075095442613335, 3);
  sqcRZGate(q, -0.012369766795612412, 3);
  sqcRYGate(q, 2.177063716482581, 4);
  sqcRZGate(q, -1.767454574180964, 4);
  sqcRYGate(q, -0.06118111387631053, 5);
  sqcRZGate(q, -1.2931418494944023, 5);
  sqcRYGate(q, -0.00016140653029950158, 6);
  sqcRZGate(q, 2.553946830062606, 6);
  sqcRYGate(q, -3.181127883817282e-05, 7);
  sqcRZGate(q, -0.6970220471876267, 7);
  sqcRYGate(q, 3.0226532558976498, 8);
  sqcRZGate(q, 1.3736783127302958, 8);
  sqcRYGate(q, 1.6092732566868317, 9);
  sqcRZGate(q, -0.8381191769408644, 9);
  sqcRYGate(q, 3.141364234448658, 10);
  sqcRZGate(q, 3.0181721496281617, 10);
  sqcRYGate(q, -3.14153822497051, 11);
  sqcRZGate(q, -0.12024819522285689, 11);
  sqcRYGate(q, 0.0011432475106746298, 12);
  sqcRZGate(q, -1.3579273898340949, 12);
  sqcRYGate(q, 1.572255395041057, 13);
  sqcRZGate(q, -2.1012815034610166, 13);
  sqcRYGate(q, -3.1307767446516017, 14);
  sqcRZGate(q, -0.5296153233589252, 14);
  sqcRYGate(q, -1.2762701041355964, 15);
  sqcRZGate(q, -1.0929213259432347, 15);
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
  sqcRYGate(q, 2.8970943043290878, 0);
  sqcRZGate(q, 1.6191725147592673, 0);
  sqcRYGate(q, 1.6216503232921762, 1);
  sqcRZGate(q, 1.3813639080581657, 1);
  sqcRYGate(q, 1.1481422456090236, 2);
  sqcRZGate(q, -0.0005625909011643901, 2);
  sqcRYGate(q, -0.023519037592643954, 3);
  sqcRZGate(q, 0.012528628362717951, 3);
  sqcRYGate(q, -0.0075117910394242315, 4);
  sqcRZGate(q, 1.806728618443369, 4);
  sqcRYGate(q, 3.1410714339665606, 5);
  sqcRZGate(q, 0.305311231681258, 5);
  sqcRYGate(q, -1.5693959198158114, 6);
  sqcRZGate(q, 2.700498296176638, 6);
  sqcRYGate(q, 1.6579951705867604, 7);
  sqcRZGate(q, 2.319931741738826, 7);
  sqcRYGate(q, 0.014521961586329901, 8);
  sqcRZGate(q, -2.938474284189699, 8);
  sqcRYGate(q, -0.0018094679426881013, 9);
  sqcRZGate(q, 0.3816387516789172, 9);
  sqcRYGate(q, 1.6444171158531602, 10);
  sqcRZGate(q, -2.4175459890169186, 10);
  sqcRYGate(q, -1.2013258777088254e-05, 11);
  sqcRZGate(q, -2.1632374650015223, 11);
  sqcRYGate(q, -1.577246330726695, 12);
  sqcRZGate(q, 2.022223683973702, 12);
  sqcRYGate(q, -3.1314680589859827, 13);
  sqcRZGate(q, -0.5303449206403656, 13);
  sqcRYGate(q, 0.0027629913593347766, 14);
  sqcRZGate(q, -0.022222614500728804, 14);
  sqcRYGate(q, -3.141194633232485, 15);
  sqcRZGate(q, -3.0757976748125464, 15);
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
  sqcRYGate(q, 0.01589340905624681, 0);
  sqcRZGate(q, 1.494398437463159, 0);
  sqcRYGate(q, -3.1221348416540127, 1);
  sqcRZGate(q, -3.041712013741924, 1);
  sqcRYGate(q, -1.7085883034342384, 2);
  sqcRZGate(q, -3.0533259601770593, 2);
  sqcRYGate(q, -1.594156153721415, 3);
  sqcRZGate(q, 0.6218552455203867, 3);
  sqcRYGate(q, 1.567389038355925, 4);
  sqcRZGate(q, -2.768691253671906, 4);
  sqcRYGate(q, -2.2571247634052987, 5);
  sqcRZGate(q, 1.141247074558504, 5);
  sqcRYGate(q, -3.1411079929100945, 6);
  sqcRZGate(q, -2.0094941172601555, 6);
  sqcRYGate(q, 0.0004807172551688696, 7);
  sqcRZGate(q, 2.1007151182363906, 7);
  sqcRYGate(q, -1.505168808643808, 8);
  sqcRZGate(q, -0.015566473413832327, 8);
  sqcRYGate(q, -1.3093700771389323, 9);
  sqcRZGate(q, -3.123484563720739, 9);
  sqcRYGate(q, 3.1349967886324785, 10);
  sqcRZGate(q, -0.9260463729127721, 10);
  sqcRYGate(q, -0.016582832424425042, 11);
  sqcRZGate(q, -2.862859203935215, 11);
  sqcRYGate(q, 1.5666996533016357, 12);
  sqcRZGate(q, -3.1414133133606423, 12);
  sqcRYGate(q, -1.5709721448022638, 13);
  sqcRZGate(q, -0.1540734799274249, 13);
  sqcRYGate(q, 1.5706129405250615, 14);
  sqcRZGate(q, 0.0022064231295364336, 14);
  sqcRYGate(q, 2.487415484920251, 15);
  sqcRZGate(q, -2.07338287859041, 15);
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
  sqcRYGate(q, 1.5436283065123204, 0);
  sqcRZGate(q, -0.09332460791609934, 0);
  sqcRYGate(q, -1.5689616542633917, 1);
  sqcRZGate(q, -1.5690892426375807, 1);
  sqcRYGate(q, -3.1354705339811892, 2);
  sqcRZGate(q, 0.10284533225632346, 2);
  sqcRYGate(q, 3.1376975654089, 3);
  sqcRZGate(q, -2.52316386970617, 3);
  sqcRYGate(q, 0.002695520012140129, 4);
  sqcRZGate(q, -2.0099679340212004, 4);
  sqcRYGate(q, 0.31587701604670954, 5);
  sqcRZGate(q, 0.01697729027754767, 5);
  sqcRYGate(q, 2.4789141669791306, 6);
  sqcRZGate(q, 0.43939159943226436, 6);
  sqcRYGate(q, 2.0124678389789565, 7);
  sqcRZGate(q, 1.9332267747875105, 7);
  sqcRYGate(q, 1.1138568297464664, 8);
  sqcRZGate(q, 1.6907660390899717, 8);
  sqcRYGate(q, -0.00031170809818349357, 9);
  sqcRZGate(q, -2.0330387547108413, 9);
  sqcRYGate(q, 3.043964309374804, 10);
  sqcRZGate(q, -1.602410003775787, 10);
  sqcRYGate(q, -3.140424217203488, 11);
  sqcRZGate(q, 0.5684508665062411, 11);
  sqcRYGate(q, 1.5606842617014793, 12);
  sqcRZGate(q, -3.141258559732161, 12);
  sqcRYGate(q, 0.00022974151563737166, 13);
  sqcRZGate(q, 1.7529341026744034, 13);
  sqcRYGate(q, 1.5705243929638968, 14);
  sqcRZGate(q, -1.4615068866845018, 14);
  sqcRYGate(q, -1.5713615663609206, 15);
  sqcRZGate(q, -2.026743470824581, 15);
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
  sqcRYGate(q, -1.573399705457978, 0);
  sqcRZGate(q, 1.5709585924975442, 0);
  sqcRYGate(q, 1.5682877328603275, 1);
  sqcRZGate(q, 2.083956577327629, 1);
  sqcRYGate(q, 2.906677797523179, 2);
  sqcRZGate(q, -2.194561289038728, 2);
  sqcRYGate(q, 1.4550277786555483, 3);
  sqcRZGate(q, 1.5715294451892767, 3);
  sqcRYGate(q, -0.07468958690574114, 4);
  sqcRZGate(q, 2.0491052376568435, 4);
  sqcRYGate(q, -0.8503677695179749, 5);
  sqcRZGate(q, 1.6960439192779084, 5);
  sqcRYGate(q, 7.044519830164768e-05, 6);
  sqcRZGate(q, 2.6993130497606526, 6);
  sqcRYGate(q, 0.0006541933702770564, 7);
  sqcRZGate(q, -0.5986108264657014, 7);
  sqcRYGate(q, 0.2986770352864498, 8);
  sqcRZGate(q, 2.9814793423359838, 8);
  sqcRYGate(q, 0.014042847191823145, 9);
  sqcRZGate(q, -0.9487276843087377, 9);
  sqcRYGate(q, -1.5295122148970544, 10);
  sqcRZGate(q, -1.2477014370580268, 10);
  sqcRYGate(q, -1.5766618305330518, 11);
  sqcRZGate(q, -1.5181066091784388, 11);
  sqcRYGate(q, -1.5715952512290836, 12);
  sqcRZGate(q, 1.5508652035365578, 12);
  sqcRYGate(q, -1.569925465069048, 13);
  sqcRZGate(q, -1.9806603977472035, 13);
  sqcRYGate(q, -0.0009343461858337676, 14);
  sqcRZGate(q, 0.08437400145665444, 14);
  sqcRYGate(q, -0.00025346359279332376, 15);
  sqcRZGate(q, -1.8716172286253965, 15);
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
  sqcRYGate(q, -1.571853551086892, 0);
  sqcRZGate(q, -1.5725539441868646, 0);
  sqcRYGate(q, -0.0005761435521520754, 1);
  sqcRZGate(q, 2.6342861002269844, 1);
  sqcRYGate(q, -3.141109128179022, 2);
  sqcRZGate(q, 1.9073113939337474, 2);
  sqcRYGate(q, 2.994963320826111, 3);
  sqcRZGate(q, 3.1412474145605036, 3);
  sqcRYGate(q, -3.1406142370398817, 4);
  sqcRZGate(q, -0.8261792684719874, 4);
  sqcRYGate(q, -2.7804498969759823, 5);
  sqcRZGate(q, 2.6949488317789267, 5);
  sqcRYGate(q, 2.458756431665315, 6);
  sqcRZGate(q, 1.8623109560873763, 6);
  sqcRYGate(q, 1.8736239536642403, 7);
  sqcRZGate(q, 3.0996473368981867, 7);
  sqcRYGate(q, 2.8667619220353324, 8);
  sqcRZGate(q, -2.9895154130461727, 8);
  sqcRYGate(q, -3.139378382518031, 9);
  sqcRZGate(q, 2.742523325512416, 9);
  sqcRYGate(q, -9.262442281213793e-05, 10);
  sqcRZGate(q, 2.8181623190750673, 10);
  sqcRYGate(q, -3.1413626130993046, 11);
  sqcRZGate(q, 1.6290309129225298, 11);
  sqcRYGate(q, -0.06503039803026399, 12);
  sqcRZGate(q, 1.3060924619937524, 12);
  sqcRYGate(q, -1.5674250445209978, 13);
  sqcRZGate(q, -2.5643087236734994, 13);
  sqcRYGate(q, 0.03232314974698092, 14);
  sqcRZGate(q, -1.4019738530741783, 14);
  sqcRYGate(q, 3.1411157398562954, 15);
  sqcRZGate(q, -2.5451949882977725, 15);
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
  sqcRYGate(q, 1.5869484517805095, 0);
  sqcRZGate(q, -0.9870997025898288, 0);
  sqcRYGate(q, -1.5697392330038307, 1);
  sqcRZGate(q, -3.0868385448146674, 1);
  sqcRYGate(q, 0.0005753751741417153, 2);
  sqcRZGate(q, 2.5205660338056255, 2);
  sqcRYGate(q, 1.5671485483295613, 3);
  sqcRZGate(q, -2.837768030743842, 3);
  sqcRYGate(q, -3.118038665939101, 4);
  sqcRZGate(q, 2.5914760502062952, 4);
  sqcRYGate(q, 3.1311952208156155, 5);
  sqcRZGate(q, 2.8873485830221886, 5);
  sqcRYGate(q, 0.000348396097233028, 6);
  sqcRZGate(q, -2.7681412898496047, 6);
  sqcRYGate(q, -3.1406845426077648, 7);
  sqcRZGate(q, -0.6522369981090135, 7);
  sqcRYGate(q, -0.23521068538003484, 8);
  sqcRZGate(q, 2.0265467142446507, 8);
  sqcRYGate(q, -0.0036383847090247284, 9);
  sqcRZGate(q, -0.866139345522738, 9);
  sqcRYGate(q, 1.5665472750888512, 10);
  sqcRZGate(q, -0.9735488098211765, 10);
  sqcRYGate(q, -1.570048535186527, 11);
  sqcRZGate(q, -1.3020063169293588, 11);
  sqcRYGate(q, 3.1363459308819244, 12);
  sqcRZGate(q, 0.35543992004087, 12);
  sqcRYGate(q, -0.0022627437619468465, 13);
  sqcRZGate(q, 2.8352016727358382, 13);
  sqcRYGate(q, -3.141443421264452, 14);
  sqcRZGate(q, 1.002447957314061, 14);
  sqcRYGate(q, 3.1414537027131946, 15);
  sqcRZGate(q, -3.090528792667923, 15);

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
