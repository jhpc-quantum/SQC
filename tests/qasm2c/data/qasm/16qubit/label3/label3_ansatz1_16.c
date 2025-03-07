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

  sqcRYGate(q, -1.5120461746404192, 0);
  sqcRZGate(q, -2.825232108956609, 0);
  sqcRYGate(q, -1.191703324085724, 1);
  sqcRZGate(q, 1.0943919110932177, 1);
  sqcRYGate(q, 3.0715277850494065, 2);
  sqcRZGate(q, 2.7438484015584788, 2);
  sqcRYGate(q, 3.030887554052042, 3);
  sqcRZGate(q, 2.56656752694562, 3);
  sqcRYGate(q, 0.7968000152102732, 4);
  sqcRZGate(q, 2.2029602166268685, 4);
  sqcRYGate(q, -2.9190035296455705, 5);
  sqcRZGate(q, 2.0798360642066402, 5);
  sqcRYGate(q, 2.666475251267222, 6);
  sqcRZGate(q, 2.310106048785411, 6);
  sqcRYGate(q, 0.00991692626697854, 7);
  sqcRZGate(q, 2.6431393555256775, 7);
  sqcRYGate(q, -0.24355289261264468, 8);
  sqcRZGate(q, 3.138892464204647, 8);
  sqcRYGate(q, -1.9404901048552763, 9);
  sqcRZGate(q, 3.1407382896846943, 9);
  sqcRYGate(q, 1.5703325233743626, 10);
  sqcRZGate(q, 1.2003111076989088, 10);
  sqcRYGate(q, -1.572188141575758, 11);
  sqcRZGate(q, 1.9098433603670408, 11);
  sqcRYGate(q, 0.41753713640782264, 12);
  sqcRZGate(q, 3.140021496564017, 12);
  sqcRYGate(q, -2.989317966520209, 13);
  sqcRZGate(q, 1.11477574240683, 13);
  sqcRYGate(q, 1.4496107535898028, 14);
  sqcRZGate(q, -1.152267164415747, 14);
  sqcRYGate(q, 0.06285913870709958, 15);
  sqcRZGate(q, -2.0678340880279444, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.7499671298673984, 0);
  sqcRZGate(q, 2.4269431625041458, 0);
  sqcRYGate(q, 3.0705559437866796, 1);
  sqcRZGate(q, 0.9925410066561753, 1);
  sqcRYGate(q, 3.118918512267083, 2);
  sqcRZGate(q, -2.003354251842846, 2);
  sqcRYGate(q, 1.1009181537594293, 3);
  sqcRZGate(q, 2.4019105730253427, 3);
  sqcRYGate(q, -1.5660837474392029, 4);
  sqcRZGate(q, -2.3276082805097995, 4);
  sqcRYGate(q, -0.13058753526030653, 5);
  sqcRZGate(q, 2.9345188165415172, 5);
  sqcRYGate(q, -2.522613006616522, 6);
  sqcRZGate(q, 3.109116666870298, 6);
  sqcRYGate(q, 1.5795703401695784, 7);
  sqcRZGate(q, -3.135367954294116, 7);
  sqcRYGate(q, -2.5637296319886893, 8);
  sqcRZGate(q, 0.0007003167746937322, 8);
  sqcRYGate(q, 1.57011417353534, 9);
  sqcRZGate(q, 1.606211101548702, 9);
  sqcRYGate(q, 2.0295986601503646, 10);
  sqcRZGate(q, 0.03384890040265851, 10);
  sqcRYGate(q, -1.8494232461366584, 11);
  sqcRZGate(q, 2.644407422207833, 11);
  sqcRYGate(q, -1.5732924340734549, 12);
  sqcRZGate(q, 1.630476928668445, 12);
  sqcRYGate(q, 0.03143195662143416, 13);
  sqcRZGate(q, 2.697972254277698, 13);
  sqcRYGate(q, 0.6652673524127373, 14);
  sqcRZGate(q, -1.7233057736319886, 14);
  sqcRYGate(q, 2.5359701899425735, 15);
  sqcRZGate(q, 0.9573046706811495, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.0654463388481514, 0);
  sqcRZGate(q, -2.0694261715168274, 0);
  sqcRYGate(q, -3.0822641434152054, 1);
  sqcRZGate(q, -0.46854146109644995, 1);
  sqcRYGate(q, -0.0048569495864668796, 2);
  sqcRZGate(q, -3.0330557105477554, 2);
  sqcRYGate(q, 2.5802618459863416, 3);
  sqcRZGate(q, 2.9163168866846143, 3);
  sqcRYGate(q, -0.7803616204664587, 4);
  sqcRZGate(q, -0.6054774398582063, 4);
  sqcRYGate(q, 1.3645022648201244, 5);
  sqcRZGate(q, -0.28285875179667286, 5);
  sqcRYGate(q, -3.132442325097928, 6);
  sqcRZGate(q, 2.984001190303635, 6);
  sqcRYGate(q, 1.557476392879872, 7);
  sqcRZGate(q, 3.1259775365626465, 7);
  sqcRYGate(q, -1.5701690374542818, 8);
  sqcRZGate(q, -0.00905110926934505, 8);
  sqcRYGate(q, -0.5161973519508131, 9);
  sqcRZGate(q, -1.6137353344764616, 9);
  sqcRYGate(q, -1.6528362409570165, 10);
  sqcRZGate(q, 0.002995427470227518, 10);
  sqcRYGate(q, 0.33515187696354165, 11);
  sqcRZGate(q, 0.9033438838234898, 11);
  sqcRYGate(q, -2.4678858330387983, 12);
  sqcRZGate(q, -3.049101133321265, 12);
  sqcRYGate(q, -1.558835201844139, 13);
  sqcRZGate(q, -0.8468558517559122, 13);
  sqcRYGate(q, -0.5710359399847738, 14);
  sqcRZGate(q, -2.9059583214207483, 14);
  sqcRYGate(q, -0.46270266419127726, 15);
  sqcRZGate(q, -0.9834675163019397, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.8086712788186228, 0);
  sqcRZGate(q, -0.8279539165144075, 0);
  sqcRYGate(q, -2.2541566600270064, 1);
  sqcRZGate(q, 0.30550261549817925, 1);
  sqcRYGate(q, 0.056363954605204006, 2);
  sqcRZGate(q, -1.0870230410723698, 2);
  sqcRYGate(q, 2.474331304193914, 3);
  sqcRZGate(q, 0.5590319522473217, 3);
  sqcRYGate(q, -0.8595244443963725, 4);
  sqcRZGate(q, 1.306508865015006, 4);
  sqcRYGate(q, -2.4170774596897684, 5);
  sqcRZGate(q, -1.5458448577965074, 5);
  sqcRYGate(q, 3.138963065082062, 6);
  sqcRZGate(q, -2.271271694597066, 6);
  sqcRYGate(q, 0.013727333576524892, 7);
  sqcRZGate(q, 0.014773974596251625, 7);
  sqcRYGate(q, -1.611140612004169, 8);
  sqcRZGate(q, -1.8025982287524451, 8);
  sqcRYGate(q, 1.5687172265795297, 9);
  sqcRZGate(q, 1.5570238701349917, 9);
  sqcRYGate(q, -1.7136011360924492, 10);
  sqcRZGate(q, -0.03795688592898116, 10);
  sqcRYGate(q, -1.9096401510465322, 11);
  sqcRZGate(q, -1.982079516675813, 11);
  sqcRYGate(q, 2.8702012427366657, 12);
  sqcRZGate(q, 0.6938389487426692, 12);
  sqcRYGate(q, -3.0870591825295994, 13);
  sqcRZGate(q, -2.546918350845715, 13);
  sqcRYGate(q, 1.1490692381255583, 14);
  sqcRZGate(q, 2.920769367003422, 14);
  sqcRYGate(q, -2.229363360452264, 15);
  sqcRZGate(q, -0.08844224839413352, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.3915625141858125, 0);
  sqcRZGate(q, 2.6769632441539044, 0);
  sqcRYGate(q, -1.1430623489281189, 1);
  sqcRZGate(q, 2.521858644590727, 1);
  sqcRYGate(q, 0.0038692632512750385, 2);
  sqcRZGate(q, -1.1695507948877166, 2);
  sqcRYGate(q, -1.936358786835477, 3);
  sqcRZGate(q, 0.22510470113432915, 3);
  sqcRYGate(q, -0.5026860315147493, 4);
  sqcRZGate(q, -0.6792272239598294, 4);
  sqcRYGate(q, -1.4088890523358635, 5);
  sqcRZGate(q, 2.5470832835565624, 5);
  sqcRYGate(q, -1.6678940827610076, 6);
  sqcRZGate(q, 0.7009240225722992, 6);
  sqcRYGate(q, -2.5566452397041135, 7);
  sqcRZGate(q, -3.1412523908958505, 7);
  sqcRYGate(q, -3.138703211698202, 8);
  sqcRZGate(q, -1.9493092115293535, 8);
  sqcRYGate(q, 1.389150666675397, 9);
  sqcRZGate(q, -2.740657124812044, 9);
  sqcRYGate(q, -0.758398895917531, 10);
  sqcRZGate(q, 3.0655034589201824, 10);
  sqcRYGate(q, 3.1295344452450475, 11);
  sqcRZGate(q, 0.7360987933762201, 11);
  sqcRYGate(q, -0.18408742578797332, 12);
  sqcRZGate(q, 2.7217607567991817, 12);
  sqcRYGate(q, -0.06540750218472535, 13);
  sqcRZGate(q, -1.528093464762162, 13);
  sqcRYGate(q, -0.9905301907339991, 14);
  sqcRZGate(q, 2.8534669708254996, 14);
  sqcRYGate(q, 0.6964392774637336, 15);
  sqcRZGate(q, 0.1150129464206529, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.4060931946449124, 0);
  sqcRZGate(q, 1.245626158958891, 0);
  sqcRYGate(q, 3.081427145287869, 1);
  sqcRZGate(q, -0.4385504319290266, 1);
  sqcRYGate(q, 1.9010231160499027, 2);
  sqcRZGate(q, 3.0360531499799595, 2);
  sqcRYGate(q, 2.8446168934251745, 3);
  sqcRZGate(q, -2.9101333914630603, 3);
  sqcRYGate(q, 1.4201368380218735, 4);
  sqcRZGate(q, -3.0100957714895737, 4);
  sqcRYGate(q, -0.0030158738731449475, 5);
  sqcRZGate(q, 1.0446416857934686, 5);
  sqcRYGate(q, -3.124026623774807, 6);
  sqcRZGate(q, 0.698207287104409, 6);
  sqcRYGate(q, 1.5715330322726542, 7);
  sqcRZGate(q, -1.5065892708210227, 7);
  sqcRYGate(q, -1.563964974900437, 8);
  sqcRZGate(q, 1.7078010710142841, 8);
  sqcRYGate(q, -3.03509554442345, 9);
  sqcRZGate(q, 1.9266325271673232, 9);
  sqcRYGate(q, 0.743777047532364, 10);
  sqcRZGate(q, -2.4077698691523475, 10);
  sqcRYGate(q, -0.03634220360976847, 11);
  sqcRZGate(q, -2.1826599015418457, 11);
  sqcRYGate(q, 1.8305475883776214, 12);
  sqcRZGate(q, -0.10764358425006543, 12);
  sqcRYGate(q, -1.2801905363828805, 13);
  sqcRZGate(q, -2.5272565968968337, 13);
  sqcRYGate(q, -2.5163808988192877, 14);
  sqcRZGate(q, -0.43450814297481877, 14);
  sqcRYGate(q, -0.20609028942274535, 15);
  sqcRZGate(q, 0.8743916626216502, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.0378004012884183, 0);
  sqcRZGate(q, -0.9945080899080562, 0);
  sqcRYGate(q, 0.058072975043569876, 1);
  sqcRZGate(q, 0.09271809689051212, 1);
  sqcRYGate(q, -2.8092147364042783, 2);
  sqcRZGate(q, -0.242394313733846, 2);
  sqcRYGate(q, -0.3197549868626224, 3);
  sqcRZGate(q, -1.3516254679021082, 3);
  sqcRYGate(q, 1.5599073028499977, 4);
  sqcRZGate(q, -0.08686895654542415, 4);
  sqcRYGate(q, -0.2606033376724968, 5);
  sqcRZGate(q, 1.8903881266007159, 5);
  sqcRYGate(q, -1.5582993084709307, 6);
  sqcRZGate(q, 1.4471485378389612, 6);
  sqcRYGate(q, -2.8578285728417585, 7);
  sqcRZGate(q, 2.470783637007941, 7);
  sqcRYGate(q, 3.1308363129916152, 8);
  sqcRZGate(q, 1.7186288393381233, 8);
  sqcRYGate(q, 2.437465078889705, 9);
  sqcRZGate(q, -2.3165921723364002, 9);
  sqcRYGate(q, -0.02185434922068996, 10);
  sqcRZGate(q, -0.7973225772175515, 10);
  sqcRYGate(q, 0.014027143475205728, 11);
  sqcRZGate(q, 0.9313420040367115, 11);
  sqcRYGate(q, -2.2261383035430784, 12);
  sqcRZGate(q, -0.08934934297713061, 12);
  sqcRYGate(q, 1.6703512760665844, 13);
  sqcRZGate(q, 1.5109581014148803, 13);
  sqcRYGate(q, -1.6190528267175388, 14);
  sqcRZGate(q, -2.4390968857996755, 14);
  sqcRYGate(q, 2.037013219450111, 15);
  sqcRZGate(q, -1.589572844992559, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.1616184436167316, 0);
  sqcRZGate(q, -2.0768136976716436, 0);
  sqcRYGate(q, -0.19569493131507884, 1);
  sqcRZGate(q, 2.4828342643282184, 1);
  sqcRYGate(q, -1.4739990201843376, 2);
  sqcRZGate(q, -0.2575985504044778, 2);
  sqcRYGate(q, -2.6008277371211785, 3);
  sqcRZGate(q, -1.7342015745552586, 3);
  sqcRYGate(q, -1.9313822971211305, 4);
  sqcRZGate(q, 1.2549188910783298, 4);
  sqcRYGate(q, -0.00446856844133503, 5);
  sqcRZGate(q, -1.958109167153779, 5);
  sqcRYGate(q, -2.0582595221264066, 6);
  sqcRZGate(q, 2.341123984853342, 6);
  sqcRYGate(q, -2.7468188269558294, 7);
  sqcRZGate(q, 0.9557791998890394, 7);
  sqcRYGate(q, 1.5666797946642284, 8);
  sqcRZGate(q, 1.2704052253077167, 8);
  sqcRYGate(q, 0.03371486122863349, 9);
  sqcRZGate(q, -2.5614098284247855, 9);
  sqcRYGate(q, -0.6462872369829169, 10);
  sqcRZGate(q, -0.10917895862637739, 10);
  sqcRYGate(q, -3.128126111744895, 11);
  sqcRZGate(q, -1.6378681407898963, 11);
  sqcRYGate(q, -3.0772537716801476, 12);
  sqcRZGate(q, 0.48938312521397515, 12);
  sqcRYGate(q, -0.7788986842803487, 13);
  sqcRZGate(q, 2.036943019025996, 13);
  sqcRYGate(q, -0.43546669164135743, 14);
  sqcRZGate(q, -1.6280837932379246, 14);
  sqcRYGate(q, -2.9762597851427026, 15);
  sqcRZGate(q, 1.5462174987291564, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.0404248331081636, 0);
  sqcRZGate(q, 1.897737774139626, 0);
  sqcRYGate(q, 2.1037387197616195, 1);
  sqcRZGate(q, 0.503236129002013, 1);
  sqcRYGate(q, -2.8480195626918223, 2);
  sqcRZGate(q, 0.861255716732491, 2);
  sqcRYGate(q, 2.419632768336169, 3);
  sqcRZGate(q, 1.5886815300514667, 3);
  sqcRYGate(q, 1.5252609737337721, 4);
  sqcRZGate(q, -1.7934008198931146, 4);
  sqcRYGate(q, 0.006719918083584631, 5);
  sqcRZGate(q, 3.0227821676398463, 5);
  sqcRYGate(q, 3.1335517205433097, 6);
  sqcRZGate(q, -1.3918590442802037, 6);
  sqcRYGate(q, -2.407708172368451, 7);
  sqcRZGate(q, 0.006131028589170917, 7);
  sqcRYGate(q, 3.1252924681978596, 8);
  sqcRZGate(q, 2.5457992397533875, 8);
  sqcRYGate(q, -1.5854560974576124, 9);
  sqcRZGate(q, -1.5622387010397842, 9);
  sqcRYGate(q, 2.2308907322814626, 10);
  sqcRZGate(q, -1.6927716977739637, 10);
  sqcRYGate(q, 0.33243903878476433, 11);
  sqcRZGate(q, -1.0581591520706342, 11);
  sqcRYGate(q, -1.8035439425992834, 12);
  sqcRZGate(q, 1.8328522068765352, 12);
  sqcRYGate(q, -0.5021310865027123, 13);
  sqcRZGate(q, -1.7528232823591514, 13);
  sqcRYGate(q, 0.00038538535683763087, 14);
  sqcRZGate(q, 1.7169849953987322, 14);
  sqcRYGate(q, 3.133688563287357, 15);
  sqcRZGate(q, -0.961962952725937, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.058939298885355, 0);
  sqcRZGate(q, 2.6695868879852584, 0);
  sqcRYGate(q, -1.6125683846945789, 1);
  sqcRZGate(q, -0.17778432796295185, 1);
  sqcRYGate(q, 0.7334966443584462, 2);
  sqcRZGate(q, -1.7856973499672018, 2);
  sqcRYGate(q, -1.7235877343851653, 3);
  sqcRZGate(q, -1.255288461551146, 3);
  sqcRYGate(q, 0.2323373507153219, 4);
  sqcRZGate(q, -1.4224925307215546, 4);
  sqcRYGate(q, -3.1400223180635565, 5);
  sqcRZGate(q, -2.8569862684900977, 5);
  sqcRYGate(q, 2.9498011203916064, 6);
  sqcRZGate(q, -0.4188268653507077, 6);
  sqcRYGate(q, 1.22665994801, 7);
  sqcRZGate(q, -2.6333636209164935, 7);
  sqcRYGate(q, 0.006198436599368011, 8);
  sqcRZGate(q, -2.464110947456856, 8);
  sqcRYGate(q, 1.607264726342252, 9);
  sqcRZGate(q, -0.35585626625201616, 9);
  sqcRYGate(q, -1.5959800385210579, 10);
  sqcRZGate(q, 3.034155940666934, 10);
  sqcRYGate(q, -0.022195521714196254, 11);
  sqcRZGate(q, -2.720071431905321, 11);
  sqcRYGate(q, -2.5584270048267013, 12);
  sqcRZGate(q, -2.4832951115328594, 12);
  sqcRYGate(q, -0.4147119234657901, 13);
  sqcRZGate(q, 1.3192519956436233, 13);
  sqcRYGate(q, -0.38023624174886517, 14);
  sqcRZGate(q, -0.11681782857077483, 14);
  sqcRYGate(q, -0.2596016486479149, 15);
  sqcRZGate(q, 0.08529742748095259, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.3166451744103362, 0);
  sqcRZGate(q, 2.323274814589768, 0);
  sqcRYGate(q, -2.4143989242365635, 1);
  sqcRZGate(q, -0.9458533434395227, 1);
  sqcRYGate(q, -2.550933667912551, 2);
  sqcRZGate(q, -1.72422836302675, 2);
  sqcRYGate(q, -0.21955529907131746, 3);
  sqcRZGate(q, 2.333377157919132, 3);
  sqcRYGate(q, 0.7017209005440956, 4);
  sqcRZGate(q, -1.5354626386966863, 4);
  sqcRYGate(q, 0.006324477322341593, 5);
  sqcRZGate(q, -1.3313037738760631, 5);
  sqcRYGate(q, 3.140048702908589, 6);
  sqcRZGate(q, -1.3919115789327536, 6);
  sqcRYGate(q, -0.7819419492472609, 7);
  sqcRZGate(q, -0.07626853654102127, 7);
  sqcRYGate(q, 2.854009361363478, 8);
  sqcRZGate(q, 0.9343506557125929, 8);
  sqcRYGate(q, -1.60220670532314, 9);
  sqcRZGate(q, 1.6015414168716986, 9);
  sqcRYGate(q, 2.351525568007568, 10);
  sqcRZGate(q, 1.5098511446733696, 10);
  sqcRYGate(q, -3.141371640014876, 11);
  sqcRZGate(q, -2.3713104802549543, 11);
  sqcRYGate(q, -2.088924519881812, 12);
  sqcRZGate(q, 0.4167626179505587, 12);
  sqcRYGate(q, 1.379825896316115, 13);
  sqcRZGate(q, 2.5012989653670097, 13);
  sqcRYGate(q, -1.7588886299444741, 14);
  sqcRZGate(q, 1.4758065472097621, 14);
  sqcRYGate(q, -3.0933307474782734, 15);
  sqcRZGate(q, 2.617857602804716, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.5803924983676256, 0);
  sqcRZGate(q, -2.665959738012872, 0);
  sqcRYGate(q, 0.8560366754916306, 1);
  sqcRZGate(q, -0.5242427881357554, 1);
  sqcRYGate(q, 0.5574570101374823, 2);
  sqcRZGate(q, -0.7353685983673737, 2);
  sqcRYGate(q, -0.01159347828919924, 3);
  sqcRZGate(q, -2.5276406551346025, 3);
  sqcRYGate(q, 0.15073726607288152, 4);
  sqcRZGate(q, 3.0580995848901598, 4);
  sqcRYGate(q, 1.570622420807043, 5);
  sqcRZGate(q, 1.568733758247254, 5);
  sqcRYGate(q, -1.5004821333487868, 6);
  sqcRZGate(q, -2.523873832241227, 6);
  sqcRYGate(q, 1.5890005042770958, 7);
  sqcRZGate(q, -0.0777837878578113, 7);
  sqcRYGate(q, 3.1411867959174984, 8);
  sqcRZGate(q, -1.1211833509597648, 8);
  sqcRYGate(q, -1.564014825437396, 9);
  sqcRZGate(q, 0.05460005849546512, 9);
  sqcRYGate(q, 1.5509608600485212, 10);
  sqcRZGate(q, -1.7914416771619368, 10);
  sqcRYGate(q, -3.1133047043598268, 11);
  sqcRZGate(q, -0.3764963553242442, 11);
  sqcRYGate(q, 1.3690960656620201, 12);
  sqcRZGate(q, -0.8592132860236483, 12);
  sqcRYGate(q, 2.949240098380395, 13);
  sqcRZGate(q, -0.6567648797568537, 13);
  sqcRYGate(q, -3.1218201392534137, 14);
  sqcRZGate(q, 0.9061309532003894, 14);
  sqcRYGate(q, -0.0028185825683447923, 15);
  sqcRZGate(q, 0.723871743307714, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.366074150662943, 0);
  sqcRZGate(q, 0.08550572466902562, 0);
  sqcRYGate(q, 2.988462744107807, 1);
  sqcRZGate(q, 1.859352425530121, 1);
  sqcRYGate(q, 0.4612510767304885, 2);
  sqcRZGate(q, -2.458384837136126, 2);
  sqcRYGate(q, 1.7104143779260454, 3);
  sqcRZGate(q, -0.0029207721588907784, 3);
  sqcRYGate(q, -1.5726945041298646, 4);
  sqcRZGate(q, 3.141219860291577, 4);
  sqcRYGate(q, -1.5727874146834626, 5);
  sqcRZGate(q, 0.31430010538869835, 5);
  sqcRYGate(q, 1.6863780646409108, 6);
  sqcRZGate(q, 0.48152416067907394, 6);
  sqcRYGate(q, -1.7115324470093993, 7);
  sqcRZGate(q, -3.1335483683622662, 7);
  sqcRYGate(q, 1.4827847627659752, 8);
  sqcRZGate(q, -2.611288833822618, 8);
  sqcRYGate(q, -1.586725854157221, 9);
  sqcRZGate(q, -2.9178055630081112, 9);
  sqcRYGate(q, 0.08857445754187578, 10);
  sqcRZGate(q, 1.9269407920424015, 10);
  sqcRYGate(q, -3.0456485542196865, 11);
  sqcRZGate(q, 2.877710231804226, 11);
  sqcRYGate(q, -0.47768186917674965, 12);
  sqcRZGate(q, -0.33824265967574524, 12);
  sqcRYGate(q, -0.4691014136268832, 13);
  sqcRZGate(q, -0.2732517992063372, 13);
  sqcRYGate(q, 2.8990340506890315, 14);
  sqcRZGate(q, 2.6534738082590845, 14);
  sqcRYGate(q, 3.115139850211591, 15);
  sqcRZGate(q, -0.2663221218836763, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.3527663233064082, 0);
  sqcRZGate(q, -1.9180523839936239, 0);
  sqcRYGate(q, -0.12733199215120394, 1);
  sqcRZGate(q, -2.69613028324433, 1);
  sqcRYGate(q, 0.10502747396837984, 2);
  sqcRZGate(q, 2.342362410187383, 2);
  sqcRYGate(q, 1.5701770528902044, 3);
  sqcRZGate(q, 1.5720185990954985, 3);
  sqcRYGate(q, -1.5707769780474106, 4);
  sqcRZGate(q, 2.722851903534262, 4);
  sqcRYGate(q, -0.016560585623944135, 5);
  sqcRZGate(q, 2.4947559791164653, 5);
  sqcRYGate(q, -0.002511168600772258, 6);
  sqcRZGate(q, 2.6861283314965005, 6);
  sqcRYGate(q, -2.9898803256512267, 7);
  sqcRZGate(q, 1.0745405651597504, 7);
  sqcRYGate(q, 0.07748542663911273, 8);
  sqcRZGate(q, -0.3130345752823195, 8);
  sqcRYGate(q, 0.005139062708479316, 9);
  sqcRZGate(q, -2.0065123847880093, 9);
  sqcRYGate(q, 1.866583776075644, 10);
  sqcRZGate(q, 0.9464170966988933, 10);
  sqcRYGate(q, 0.8782412779145523, 11);
  sqcRZGate(q, 0.7807738297506193, 11);
  sqcRYGate(q, -3.03749786336209, 12);
  sqcRZGate(q, 0.3796039475308327, 12);
  sqcRYGate(q, 2.8286024700891343, 13);
  sqcRZGate(q, 2.265390195846649, 13);
  sqcRYGate(q, 1.539680333110379, 14);
  sqcRZGate(q, 1.7609189406872388, 14);
  sqcRYGate(q, -1.7122506117328695, 15);
  sqcRZGate(q, -0.3854493182013735, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.9662865126591145, 0);
  sqcRZGate(q, -0.8799716886437998, 0);
  sqcRYGate(q, -2.965243642910187, 1);
  sqcRZGate(q, 2.070362276000109, 1);
  sqcRYGate(q, 3.3479330016739084e-05, 2);
  sqcRZGate(q, 2.6321553712965446, 2);
  sqcRYGate(q, -1.5643671116551578, 3);
  sqcRZGate(q, -3.053487841972873, 3);
  sqcRYGate(q, 3.126919692155834, 4);
  sqcRZGate(q, 2.134194035586604, 4);
  sqcRYGate(q, 3.104472213248955, 5);
  sqcRZGate(q, -0.29271194822904706, 5);
  sqcRYGate(q, -1.6865791460626411, 6);
  sqcRZGate(q, -1.262316884331688, 6);
  sqcRYGate(q, 1.3698116611879545, 7);
  sqcRZGate(q, -1.5328360390133302, 7);
  sqcRYGate(q, -1.4866740181264868, 8);
  sqcRZGate(q, 3.095244580504892, 8);
  sqcRYGate(q, -1.5043600521138452, 9);
  sqcRZGate(q, 1.5637760201752613, 9);
  sqcRYGate(q, 0.11693796615488326, 10);
  sqcRZGate(q, 2.532015128809188, 10);
  sqcRYGate(q, -3.1054604573857745, 11);
  sqcRZGate(q, 0.7813751192284187, 11);
  sqcRYGate(q, -0.2521642596186866, 12);
  sqcRZGate(q, -3.1041436576035557, 12);
  sqcRYGate(q, -1.5039460680857495, 13);
  sqcRZGate(q, 1.0431173994815088, 13);
  sqcRYGate(q, 0.9218338642090532, 14);
  sqcRZGate(q, -2.256277981095863, 14);
  sqcRYGate(q, 0.3246338415109422, 15);
  sqcRZGate(q, 0.8876419709557074, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.1080853592629327, 0);
  sqcRZGate(q, -1.6841005536516418, 0);
  sqcRYGate(q, -1.532689852982915, 1);
  sqcRZGate(q, -0.008996390634418818, 1);
  sqcRYGate(q, -2.728791097267635, 2);
  sqcRZGate(q, -0.00215243687077038, 2);
  sqcRYGate(q, -0.020886009394181063, 3);
  sqcRZGate(q, -0.42678989102877374, 3);
  sqcRYGate(q, -0.0013492358033596096, 4);
  sqcRZGate(q, -2.842918086743266, 4);
  sqcRYGate(q, -0.10252712891400861, 5);
  sqcRZGate(q, -2.8769058032819923, 5);
  sqcRYGate(q, 0.01979466146448944, 6);
  sqcRZGate(q, 2.963080316555477, 6);
  sqcRYGate(q, 1.4712017993532012, 7);
  sqcRZGate(q, 0.0026131314932023035, 7);
  sqcRYGate(q, 0.06862729390359833, 8);
  sqcRZGate(q, 2.118274199403996, 8);
  sqcRYGate(q, -1.8306036144610216, 9);
  sqcRZGate(q, 3.110335226586047, 9);
  sqcRYGate(q, 0.1704368643580673, 10);
  sqcRZGate(q, -0.2590170550142341, 10);
  sqcRYGate(q, 0.7242117040624514, 11);
  sqcRZGate(q, 1.5043774350013603, 11);
  sqcRYGate(q, -2.8230679837405925, 12);
  sqcRZGate(q, -1.5684022470715728, 12);
  sqcRYGate(q, 0.02509047881703452, 13);
  sqcRZGate(q, 2.110128990759448, 13);
  sqcRYGate(q, -3.1247297241087035, 14);
  sqcRZGate(q, 1.076380595189272, 14);
  sqcRYGate(q, -0.01128438950296675, 15);
  sqcRZGate(q, 2.2420997658418904, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.2089203230057484, 0);
  sqcRZGate(q, 1.9339841456456013, 0);
  sqcRYGate(q, -1.59725881482305, 1);
  sqcRZGate(q, 3.1373795193586353, 1);
  sqcRYGate(q, 1.5703501177826489, 2);
  sqcRZGate(q, -1.573223598260429, 2);
  sqcRYGate(q, -0.0045116427244588616, 3);
  sqcRZGate(q, 2.9402601393393275, 3);
  sqcRYGate(q, -0.02004783741567049, 4);
  sqcRZGate(q, -2.8454397756137295, 4);
  sqcRYGate(q, -0.053617139358720145, 5);
  sqcRZGate(q, -0.42618433207808776, 5);
  sqcRYGate(q, 2.80714784669699, 6);
  sqcRZGate(q, -3.13127993522628, 6);
  sqcRYGate(q, -2.1098901465239672, 7);
  sqcRZGate(q, -1.342625565495773, 7);
  sqcRYGate(q, 3.0387601090282037, 8);
  sqcRZGate(q, -2.9380508569577186, 8);
  sqcRYGate(q, -1.3700385933068426, 9);
  sqcRZGate(q, 0.1317217327234476, 9);
  sqcRYGate(q, 2.945623924907898, 10);
  sqcRZGate(q, -3.0252922788362246, 10);
  sqcRYGate(q, -3.0973055838536068, 11);
  sqcRZGate(q, 1.476805452332922, 11);
  sqcRYGate(q, 1.5930359947374335, 12);
  sqcRZGate(q, -2.9254561293527015, 12);
  sqcRYGate(q, -1.6192284179804528, 13);
  sqcRZGate(q, -1.45410810668834, 13);
  sqcRYGate(q, 2.563007674395632, 14);
  sqcRZGate(q, 1.3550458197330508, 14);
  sqcRYGate(q, -0.32718670763884367, 15);
  sqcRZGate(q, 1.6507311043794468, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.1408097249881233, 0);
  sqcRZGate(q, -2.79407311606436, 0);
  sqcRYGate(q, -1.5703231890413298, 1);
  sqcRZGate(q, 3.140501864160743, 1);
  sqcRYGate(q, 1.572721879180862, 2);
  sqcRZGate(q, -1.5822727892666961, 2);
  sqcRYGate(q, 3.140885014080602, 3);
  sqcRZGate(q, 2.7603333370256986, 3);
  sqcRYGate(q, 1.5441511186254495, 4);
  sqcRZGate(q, -1.1926134018850831, 4);
  sqcRYGate(q, -2.9190384314639464, 5);
  sqcRZGate(q, -0.1275806608657941, 5);
  sqcRYGate(q, -1.6221962955857059, 6);
  sqcRZGate(q, 3.134539889770514, 6);
  sqcRYGate(q, -0.43011606234590527, 7);
  sqcRZGate(q, -3.0081862007558473, 7);
  sqcRYGate(q, -0.05855659866364249, 8);
  sqcRZGate(q, 0.5865569817095274, 8);
  sqcRYGate(q, 2.8275032977860715, 9);
  sqcRZGate(q, 1.6904107869993918, 9);
  sqcRYGate(q, 1.5526477616301992, 10);
  sqcRZGate(q, -0.459565060233726, 10);
  sqcRYGate(q, -0.26621564003032194, 11);
  sqcRZGate(q, 0.6528871401402655, 11);
  sqcRYGate(q, -2.526098301924606, 12);
  sqcRZGate(q, 3.0194204690248703, 12);
  sqcRYGate(q, -1.5712277026055146, 13);
  sqcRZGate(q, 2.936773941053091, 13);
  sqcRYGate(q, 1.5483199902430924, 14);
  sqcRZGate(q, 1.5829484006662504, 14);
  sqcRYGate(q, 2.617535245252373, 15);
  sqcRZGate(q, 2.3596534891882652, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.5706479808048455, 0);
  sqcRZGate(q, -3.0777458862515545, 0);
  sqcRYGate(q, -1.5698775635714384, 1);
  sqcRZGate(q, 2.941986350906172, 1);
  sqcRYGate(q, 1.570612682466482, 2);
  sqcRZGate(q, 1.4472953539123719, 2);
  sqcRYGate(q, -0.0028329435039090604, 3);
  sqcRZGate(q, 1.8498580551572357, 3);
  sqcRYGate(q, -3.137886596129461, 4);
  sqcRZGate(q, -0.7670074424167082, 4);
  sqcRYGate(q, 3.0391712490268605, 5);
  sqcRZGate(q, 1.5307327505734838, 5);
  sqcRYGate(q, -0.3466320865717689, 6);
  sqcRZGate(q, 1.2519820419174517, 6);
  sqcRYGate(q, 0.04990463442106819, 7);
  sqcRZGate(q, -0.9735898733691943, 7);
  sqcRYGate(q, -0.1115250645411972, 8);
  sqcRZGate(q, -2.9832304720430334, 8);
  sqcRYGate(q, 1.6109059119525329, 9);
  sqcRZGate(q, -0.39356383579790766, 9);
  sqcRYGate(q, -2.9359803746039885, 10);
  sqcRZGate(q, 0.7281375770546885, 10);
  sqcRYGate(q, 0.0004772717698697803, 11);
  sqcRZGate(q, -0.5786593427376853, 11);
  sqcRYGate(q, -0.026161302460170788, 12);
  sqcRZGate(q, 0.10720181129883777, 12);
  sqcRYGate(q, -3.1136151620831454, 13);
  sqcRZGate(q, -2.8695916280489615, 13);
  sqcRYGate(q, -1.564420644942217, 14);
  sqcRZGate(q, -0.8626840958327487, 14);
  sqcRYGate(q, -0.00042998821046852446, 15);
  sqcRZGate(q, 1.0514429010158248, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.1432830718933467, 0);
  sqcRZGate(q, 0.09021255511211843, 0);
  sqcRYGate(q, 0.4474154256898436, 1);
  sqcRZGate(q, 0.30653502661976, 1);
  sqcRYGate(q, 1.156120527663128, 2);
  sqcRZGate(q, -2.6003289196049497, 2);
  sqcRYGate(q, 1.655702632712508, 3);
  sqcRZGate(q, 1.695953546575038, 3);
  sqcRYGate(q, -1.6559874632000462, 4);
  sqcRZGate(q, -1.450480290376083, 4);
  sqcRYGate(q, -2.7360639034814684, 5);
  sqcRZGate(q, 0.05421765550027046, 5);
  sqcRYGate(q, 0.3471016521260499, 6);
  sqcRZGate(q, 0.4398580700420886, 6);
  sqcRYGate(q, 2.755843756242926, 7);
  sqcRZGate(q, -2.0884191577432203, 7);
  sqcRYGate(q, 1.617390197262746, 8);
  sqcRZGate(q, 1.6868400815156033, 8);
  sqcRYGate(q, 1.5040750197793198, 9);
  sqcRZGate(q, -1.4464648149966512, 9);
  sqcRYGate(q, 1.5231335665959946, 10);
  sqcRZGate(q, -1.4319810056197797, 10);
  sqcRYGate(q, 2.714476918639197, 11);
  sqcRZGate(q, -3.02860184527571, 11);
  sqcRYGate(q, 1.4224395131611454, 12);
  sqcRZGate(q, 0.09215854846789641, 12);
  sqcRYGate(q, 3.087701716487078, 13);
  sqcRZGate(q, -2.5912030000528454, 13);
  sqcRYGate(q, 0.03588246338385748, 14);
  sqcRZGate(q, 0.9626946346363263, 14);
  sqcRYGate(q, 1.5982513166447374, 15);
  sqcRZGate(q, 1.6519204317364249, 15);

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
