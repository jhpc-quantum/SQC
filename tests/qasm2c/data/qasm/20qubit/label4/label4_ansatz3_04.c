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

  sqcRYGate(q, 0.4344577319047164, 0);
  sqcRZGate(q, -0.6271237149157814, 0);
  sqcRYGate(q, 1.203561658230254, 1);
  sqcRZGate(q, -1.5460423532145127, 1);
  sqcRYGate(q, 5.774960173329724e-05, 2);
  sqcRZGate(q, -1.7256097791133982, 2);
  sqcRYGate(q, -1.5703352960198382, 3);
  sqcRZGate(q, 1.5708713402523156, 3);
  sqcRYGate(q, -0.04424645259769948, 4);
  sqcRZGate(q, 0.2131799514488887, 4);
  sqcRYGate(q, 1.0781643648739454, 5);
  sqcRZGate(q, 1.6156999543885036, 5);
  sqcRYGate(q, -0.3647351870223042, 6);
  sqcRZGate(q, -0.4736420108694084, 6);
  sqcRYGate(q, -3.141329549309836, 7);
  sqcRZGate(q, 3.0879941166920823, 7);
  sqcRYGate(q, 1.5074876261463384, 8);
  sqcRZGate(q, 2.7326226433565206, 8);
  sqcRYGate(q, 1.5297166011056582, 9);
  sqcRZGate(q, 3.1411672414493315, 9);
  sqcRYGate(q, -3.054739247908142, 10);
  sqcRZGate(q, -1.6648653254601324, 10);
  sqcRYGate(q, 3.14151686734084, 11);
  sqcRZGate(q, -0.5966031115547645, 11);
  sqcRYGate(q, 2.949642553813157, 12);
  sqcRZGate(q, 0.0022620714219610686, 12);
  sqcRYGate(q, -3.124619578104611, 13);
  sqcRZGate(q, 2.3706791494423456, 13);
  sqcRYGate(q, -0.6788227532277009, 14);
  sqcRZGate(q, -1.5750088666586077, 14);
  sqcRYGate(q, 2.154383254790428, 15);
  sqcRZGate(q, -1.5718898839431794, 15);
  sqcRYGate(q, 3.1285919293080653, 16);
  sqcRZGate(q, -0.08804455031379606, 16);
  sqcRYGate(q, -0.001710460890218383, 17);
  sqcRZGate(q, -2.9065753545570043, 17);
  sqcRYGate(q, 1.5474884190304241, 18);
  sqcRZGate(q, -1.4040024304163632, 18);
  sqcRYGate(q, 1.58345341436052, 19);
  sqcRZGate(q, 2.2962060482287576, 19);
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
  sqcRYGate(q, 1.7525918283277573, 0);
  sqcRZGate(q, -1.6260209305070104, 0);
  sqcRYGate(q, -1.5712696058998175, 1);
  sqcRZGate(q, -1.571112565962042, 1);
  sqcRYGate(q, -1.6276436264615683, 2);
  sqcRZGate(q, 0.0031249109660844705, 2);
  sqcRYGate(q, -1.6015022048214467, 3);
  sqcRZGate(q, 0.00046648503087176206, 3);
  sqcRYGate(q, 1.4022473073641895, 4);
  sqcRZGate(q, -2.9668799435638022, 4);
  sqcRYGate(q, 0.00023623119539601883, 5);
  sqcRZGate(q, -0.011259641320289226, 5);
  sqcRYGate(q, 0.5109158833334884, 6);
  sqcRZGate(q, -0.8745945216166159, 6);
  sqcRYGate(q, 2.6108827592932142, 7);
  sqcRZGate(q, 1.4494984238025435, 7);
  sqcRYGate(q, 3.1404919154014896, 8);
  sqcRZGate(q, 0.402349589040621, 8);
  sqcRYGate(q, 1.5694237304975278, 9);
  sqcRZGate(q, 0.006338798307519156, 9);
  sqcRYGate(q, -1.5755212287205245, 10);
  sqcRZGate(q, 1.2369116612465896, 10);
  sqcRYGate(q, -3.14102605019265, 11);
  sqcRZGate(q, 0.35625173992277936, 11);
  sqcRYGate(q, -2.991934094568757, 12);
  sqcRZGate(q, -3.1215290091192105, 12);
  sqcRYGate(q, 0.035059656483673915, 13);
  sqcRZGate(q, 1.9045442426830173, 13);
  sqcRYGate(q, -1.5696115702945372, 14);
  sqcRZGate(q, -0.011870412277188436, 14);
  sqcRYGate(q, -1.5702974836645591, 15);
  sqcRZGate(q, 1.5846606922647852, 15);
  sqcRYGate(q, 0.3333847545812423, 16);
  sqcRZGate(q, -0.05812803362756201, 16);
  sqcRYGate(q, 0.002393933090174825, 17);
  sqcRZGate(q, -2.8368794660005983, 17);
  sqcRYGate(q, -2.9835958691322277, 18);
  sqcRZGate(q, -0.2200059518689093, 18);
  sqcRYGate(q, -1.8427133583088098, 19);
  sqcRZGate(q, -0.04514522078878724, 19);
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
  sqcRYGate(q, 1.570847001005859, 0);
  sqcRZGate(q, 1.5706908263739994, 0);
  sqcRYGate(q, 1.5709964803960457, 1);
  sqcRZGate(q, 0.9474500955015666, 1);
  sqcRYGate(q, -1.5707889942514761, 2);
  sqcRZGate(q, -3.14013907863937, 2);
  sqcRYGate(q, -1.5707921559318923, 3);
  sqcRZGate(q, -1.5708525962198792, 3);
  sqcRYGate(q, 0.12551903142201168, 4);
  sqcRZGate(q, 2.205698482560399, 4);
  sqcRYGate(q, -0.04922313007508894, 5);
  sqcRZGate(q, -1.591366908519695, 5);
  sqcRYGate(q, 0.0673317126975137, 6);
  sqcRZGate(q, 1.4520558912627513, 6);
  sqcRYGate(q, -3.1386581012596424, 7);
  sqcRZGate(q, 3.0774692713355853, 7);
  sqcRYGate(q, 3.1415022148044534, 8);
  sqcRZGate(q, 2.551506775869491, 8);
  sqcRYGate(q, 1.6057036964879754, 9);
  sqcRZGate(q, -1.570024418751876, 9);
  sqcRYGate(q, -1.5204443757380686, 10);
  sqcRZGate(q, 1.5313372031249453, 10);
  sqcRYGate(q, 2.0821692153790514, 11);
  sqcRZGate(q, 0.0710042582307242, 11);
  sqcRYGate(q, 0.18931966993467397, 12);
  sqcRZGate(q, -1.5720247759438326, 12);
  sqcRYGate(q, 3.0967219747726364, 13);
  sqcRZGate(q, 1.7318511624308588, 13);
  sqcRYGate(q, 1.5723559897914525, 14);
  sqcRZGate(q, -2.8920139121473496, 14);
  sqcRYGate(q, 0.6620213449691024, 15);
  sqcRZGate(q, -0.988934086970394, 15);
  sqcRYGate(q, 1.5697694263564568, 16);
  sqcRZGate(q, 2.0152579289771406, 16);
  sqcRYGate(q, -0.0001721557288271584, 17);
  sqcRZGate(q, 0.6530382166900541, 17);
  sqcRYGate(q, 1.551255603963956, 18);
  sqcRZGate(q, -1.5711010971162738, 18);
  sqcRYGate(q, 3.127357867282558, 19);
  sqcRZGate(q, -0.41938800566399337, 19);
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
  sqcRYGate(q, -1.5706171523635293, 0);
  sqcRZGate(q, -0.21123449872276012, 0);
  sqcRYGate(q, -1.2030675600432632, 1);
  sqcRZGate(q, -1.9199524930620742, 1);
  sqcRYGate(q, 2.9274743383043185, 2);
  sqcRZGate(q, -3.1396369384709826, 2);
  sqcRYGate(q, -1.4976457557933611, 3);
  sqcRZGate(q, -0.41633128712115247, 3);
  sqcRYGate(q, -0.000323382499123781, 4);
  sqcRZGate(q, -2.2606108145538135, 4);
  sqcRYGate(q, -0.5284168927642162, 5);
  sqcRZGate(q, 3.089149467999556, 5);
  sqcRYGate(q, 0.4927406861492596, 6);
  sqcRZGate(q, 2.5579378061689533, 6);
  sqcRYGate(q, -1.56971762892499, 7);
  sqcRZGate(q, -2.4161474667096323, 7);
  sqcRYGate(q, 0.16853509806490585, 8);
  sqcRZGate(q, -1.6239890385902456, 8);
  sqcRYGate(q, -1.5311821859313228, 9);
  sqcRZGate(q, 1.5715171606652287, 9);
  sqcRYGate(q, 0.08018382016003091, 10);
  sqcRZGate(q, 0.17856308632806514, 10);
  sqcRYGate(q, 0.0010428075417650007, 11);
  sqcRZGate(q, -0.10304385484775876, 11);
  sqcRYGate(q, -1.6001019684567304, 12);
  sqcRZGate(q, -1.560254913997273, 12);
  sqcRYGate(q, -1.6783700386321225, 13);
  sqcRZGate(q, 0.039817348086490005, 13);
  sqcRYGate(q, -0.0016088927024320299, 14);
  sqcRZGate(q, 0.5141800964312283, 14);
  sqcRYGate(q, 1.5727209263781363, 15);
  sqcRZGate(q, 0.0005399802180070524, 15);
  sqcRYGate(q, 2.811408826013389, 16);
  sqcRZGate(q, -0.6567865258395563, 16);
  sqcRYGate(q, 2.7931411687089205, 17);
  sqcRZGate(q, 0.9478269056845633, 17);
  sqcRYGate(q, -2.8022229636250775, 18);
  sqcRZGate(q, -2.9142077259907984, 18);
  sqcRYGate(q, 2.6296942291500707, 19);
  sqcRZGate(q, 0.15294345644315005, 19);
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
  sqcRYGate(q, 1.3794480374058455, 0);
  sqcRZGate(q, 2.9920287520699933, 0);
  sqcRYGate(q, 0.5647574376829887, 1);
  sqcRZGate(q, -0.1406308550570942, 1);
  sqcRYGate(q, 2.105049505769743, 2);
  sqcRZGate(q, -3.1407294978203124, 2);
  sqcRYGate(q, 3.14151942112859, 3);
  sqcRZGate(q, 1.7012404403832755, 3);
  sqcRYGate(q, -2.888228852888046, 4);
  sqcRZGate(q, 1.6792836771351274, 4);
  sqcRYGate(q, -3.141515185537451, 5);
  sqcRZGate(q, -0.045633650787745325, 5);
  sqcRYGate(q, 3.1410598856959675, 6);
  sqcRZGate(q, 2.413014842165648, 6);
  sqcRYGate(q, -3.136053877933509, 7);
  sqcRZGate(q, 0.7063490488384415, 7);
  sqcRYGate(q, 3.1415002340159166, 8);
  sqcRZGate(q, 1.1704891506388178, 8);
  sqcRYGate(q, 0.6658430993747224, 9);
  sqcRZGate(q, -1.4332969083503044, 9);
  sqcRYGate(q, -0.016768681998367892, 10);
  sqcRZGate(q, -1.4339522419968809, 10);
  sqcRYGate(q, -1.5554443218464697, 11);
  sqcRZGate(q, 2.6262608289658527, 11);
  sqcRYGate(q, 1.2087552560542356, 12);
  sqcRZGate(q, -3.1097720474945056, 12);
  sqcRYGate(q, -1.5704105448587011, 13);
  sqcRZGate(q, -1.9025286180701686, 13);
  sqcRYGate(q, -1.567026912933797, 14);
  sqcRZGate(q, 1.5561386068103684, 14);
  sqcRYGate(q, 1.5714788520247813, 15);
  sqcRZGate(q, 0.006372870352439267, 15);
  sqcRYGate(q, 1.5692615660381468, 16);
  sqcRZGate(q, 3.1384548261197995, 16);
  sqcRYGate(q, 3.130361624801078, 17);
  sqcRZGate(q, 2.5237311054222498, 17);
  sqcRYGate(q, 3.140344294887597, 18);
  sqcRZGate(q, 1.8016018705511012, 18);
  sqcRYGate(q, 0.0027521453919856493, 19);
  sqcRZGate(q, -1.7994336726245537, 19);
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
  sqcRYGate(q, 3.141524348812509, 0);
  sqcRZGate(q, 0.5841270113286825, 0);
  sqcRYGate(q, 2.720038517376352, 1);
  sqcRZGate(q, -3.072877716673449, 1);
  sqcRYGate(q, 0.38798778205804574, 2);
  sqcRZGate(q, 1.570168779128407, 2);
  sqcRYGate(q, 0.1046168600629998, 3);
  sqcRZGate(q, -0.325601226254659, 3);
  sqcRYGate(q, 0.0004865928936821362, 4);
  sqcRZGate(q, 1.6560503737485535, 4);
  sqcRYGate(q, 0.6091737169310774, 5);
  sqcRZGate(q, 2.2794580462370755, 5);
  sqcRYGate(q, -0.5697843477224651, 6);
  sqcRZGate(q, 1.0109953579179418, 6);
  sqcRYGate(q, 1.5714860523724081, 7);
  sqcRZGate(q, -2.55470374963919, 7);
  sqcRYGate(q, 1.5562605295550744, 8);
  sqcRZGate(q, -2.430948532713701, 8);
  sqcRYGate(q, -0.012927903930917316, 9);
  sqcRZGate(q, -1.4552047277864109, 9);
  sqcRYGate(q, 3.130005835046051, 10);
  sqcRZGate(q, -0.8416588160755366, 10);
  sqcRYGate(q, -0.44649436115485747, 11);
  sqcRZGate(q, -2.6326566564408633, 11);
  sqcRYGate(q, 3.118431253741531, 12);
  sqcRZGate(q, -3.1095425503029683, 12);
  sqcRYGate(q, 0.0003818268010249426, 13);
  sqcRZGate(q, -1.2393307038049457, 13);
  sqcRYGate(q, 0.3093342708467875, 14);
  sqcRZGate(q, 1.4242673997608248, 14);
  sqcRYGate(q, 3.0989192914746804, 15);
  sqcRZGate(q, 0.5846171377249734, 15);
  sqcRYGate(q, 1.572029455004081, 16);
  sqcRZGate(q, -0.40779914911610415, 16);
  sqcRYGate(q, 1.5710992483918211, 17);
  sqcRZGate(q, 1.542037964384778, 17);
  sqcRYGate(q, 1.574866212865811, 18);
  sqcRZGate(q, -1.5765861145891584, 18);
  sqcRYGate(q, 1.5102612248697849, 19);
  sqcRZGate(q, -0.456750213543873, 19);
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
  sqcRYGate(q, 2.7588478533680143, 0);
  sqcRZGate(q, -0.5225762948340555, 0);
  sqcRYGate(q, -2.9716441104453564, 1);
  sqcRZGate(q, 1.661428319139624, 1);
  sqcRYGate(q, 1.5702682396072092, 2);
  sqcRZGate(q, -1.9214017567228538, 2);
  sqcRYGate(q, 1.5707318736112292, 3);
  sqcRZGate(q, 0.0001384055183869602, 3);
  sqcRYGate(q, 0.04876178665196562, 4);
  sqcRZGate(q, 1.3875342254939378, 4);
  sqcRYGate(q, 0.005679542205048141, 5);
  sqcRZGate(q, -2.7112143590766506, 5);
  sqcRYGate(q, -0.3245732732157496, 6);
  sqcRZGate(q, 1.4830734470076417, 6);
  sqcRYGate(q, 0.004059216810540001, 7);
  sqcRZGate(q, -2.510119651377845, 7);
  sqcRYGate(q, -0.00014529921501729452, 8);
  sqcRZGate(q, 2.433453964638598, 8);
  sqcRYGate(q, 3.1414789040964903, 9);
  sqcRZGate(q, 0.2535053135069466, 9);
  sqcRYGate(q, 0.012223690926151498, 10);
  sqcRZGate(q, -0.502968070863295, 10);
  sqcRYGate(q, -1.5556167369935945, 11);
  sqcRZGate(q, -2.733792456542569, 11);
  sqcRYGate(q, 1.214314541017537, 12);
  sqcRZGate(q, 3.1184201766969735, 12);
  sqcRYGate(q, 1.5717280263915407, 13);
  sqcRZGate(q, -1.951379283895073, 13);
  sqcRYGate(q, 0.007909471889921527, 14);
  sqcRZGate(q, -0.6532025093754799, 14);
  sqcRYGate(q, 0.0033644794927279995, 15);
  sqcRZGate(q, -0.1966944308977556, 15);
  sqcRYGate(q, 0.00019749725919471217, 16);
  sqcRZGate(q, 0.4049612975436286, 16);
  sqcRYGate(q, -3.1092642792239444, 17);
  sqcRZGate(q, 1.542097261534228, 17);
  sqcRYGate(q, 1.561403776094406, 18);
  sqcRZGate(q, 1.566459598317178, 18);
  sqcRYGate(q, -1.556869762148555, 19);
  sqcRZGate(q, 2.2272692988810934, 19);
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
  sqcRYGate(q, -1.5753859257744462, 0);
  sqcRZGate(q, 0.9856110268378462, 0);
  sqcRYGate(q, 3.1414646467959337, 1);
  sqcRZGate(q, 2.562074811637528, 1);
  sqcRYGate(q, -1.5716087780027888, 2);
  sqcRZGate(q, -2.1560781370119084, 2);
  sqcRYGate(q, -1.5707250107709372, 3);
  sqcRZGate(q, 2.5602156148269493, 3);
  sqcRYGate(q, 0.05738614395143881, 4);
  sqcRZGate(q, -0.662838074780733, 4);
  sqcRYGate(q, -3.1413670781759677, 5);
  sqcRZGate(q, -2.5901643620802437, 5);
  sqcRYGate(q, -0.15441883249772206, 6);
  sqcRZGate(q, -2.720264106244128, 6);
  sqcRYGate(q, -3.139420493324178, 7);
  sqcRZGate(q, -0.5921993348482415, 7);
  sqcRYGate(q, 1.572805724488724, 8);
  sqcRZGate(q, -0.12471056291379093, 8);
  sqcRYGate(q, 1.5702196399967328, 9);
  sqcRZGate(q, 1.2890604508476053, 9);
  sqcRYGate(q, -0.048406929026723056, 10);
  sqcRZGate(q, -0.571057323033014, 10);
  sqcRYGate(q, -3.1401579474976833, 11);
  sqcRZGate(q, 0.13615869263629632, 11);
  sqcRYGate(q, 0.005152571611011752, 12);
  sqcRZGate(q, 2.5685328298872667, 12);
  sqcRYGate(q, -3.1396659605783888, 13);
  sqcRZGate(q, -2.2311451799987667, 13);
  sqcRYGate(q, 0.0030956027518058704, 14);
  sqcRZGate(q, -1.3547756247399676, 14);
  sqcRYGate(q, -3.1384243606476616, 15);
  sqcRZGate(q, 0.140133448180403, 15);
  sqcRYGate(q, 1.5721076736384947, 16);
  sqcRZGate(q, -2.16539694528784, 16);
  sqcRYGate(q, -1.5712172208105724, 17);
  sqcRZGate(q, 2.8998398268557644, 17);
  sqcRYGate(q, -3.031428702160473, 18);
  sqcRZGate(q, 2.5433376109634995, 18);
  sqcRYGate(q, 3.141503358352062, 19);
  sqcRZGate(q, 1.9848615547995214, 19);

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
