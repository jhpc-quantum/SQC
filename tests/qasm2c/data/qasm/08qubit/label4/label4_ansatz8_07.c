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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.5814774300202137, 0);
  sqcRYGate(q, -1.3628186471855352, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6787865638787229, 0);
  sqcRYGate(q, -0.09151153730463986, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1240682290055641, 2);
  sqcRYGate(q, -1.9790361806455015, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9206207908901085, 2);
  sqcRYGate(q, 2.033926042935712, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0782192101689185, 4);
  sqcRYGate(q, 1.3454588613496994, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7274983565479382, 4);
  sqcRYGate(q, 1.9317564673533711, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9632356912047542, 6);
  sqcRYGate(q, 0.9872184188009155, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0623357026284395, 6);
  sqcRYGate(q, 2.945122179585323, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7395926746581125, 0);
  sqcRYGate(q, -2.016538413217713, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6294832603907583, 0);
  sqcRYGate(q, -1.8855236169980083, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5040553895274051, 2);
  sqcRYGate(q, 2.3341759205225445, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.07232095799925542, 2);
  sqcRYGate(q, 0.13570817904440033, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.8795213286917827, 4);
  sqcRYGate(q, 0.6312269344308907, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.132063631692127, 4);
  sqcRYGate(q, -1.3214161899367705, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.40607649464759193, 1);
  sqcRYGate(q, 2.1532080429578806, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0467583693775282, 1);
  sqcRYGate(q, 1.5335253922509064, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3718098411335067, 3);
  sqcRYGate(q, 2.6967211558106565, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.368286185566049, 3);
  sqcRYGate(q, 0.4834713042745795, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.866418030111816, 5);
  sqcRYGate(q, 2.056893625201168, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.08493891600085868, 5);
  sqcRYGate(q, 0.6867123139338313, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4201355478764652, 0);
  sqcRYGate(q, 0.8066893129537356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5993425293242671, 0);
  sqcRYGate(q, -1.7224924130688857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.645408432169817, 2);
  sqcRYGate(q, -1.0655516372721099, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4021001691120443, 2);
  sqcRYGate(q, 1.3972000203845614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9681097752295327, 4);
  sqcRYGate(q, 1.835927975986836, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6450208920112854, 4);
  sqcRYGate(q, 1.7504585095261906, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.249198431195172, 6);
  sqcRYGate(q, 1.5306464113300438, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1465983778351942, 6);
  sqcRYGate(q, 2.8218389668353456, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.217210021319855, 0);
  sqcRYGate(q, 1.8237674243739095, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7155312457555127, 0);
  sqcRYGate(q, -1.974552025192212, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.737039730660923, 2);
  sqcRYGate(q, 0.6733352452983526, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4966849997130096, 2);
  sqcRYGate(q, -2.259961424231355, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.193468737771836, 4);
  sqcRYGate(q, -2.6955176776042875, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.0003623779677264, 4);
  sqcRYGate(q, -0.5892366649701506, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.0446904888037314, 1);
  sqcRYGate(q, 2.219407708249609, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.10570254599347, 1);
  sqcRYGate(q, -2.862199139090268, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6260957137087297, 3);
  sqcRYGate(q, -1.5250941242931413, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.393036402300487, 3);
  sqcRYGate(q, -0.9255873985227856, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.139877828594597, 5);
  sqcRYGate(q, 0.20213225676213842, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.483893511315581, 5);
  sqcRYGate(q, 2.079227879965347, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4623411573466392, 0);
  sqcRYGate(q, -0.2263190183541735, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8687896271596904, 0);
  sqcRYGate(q, -2.714497991204317, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5457347611935057, 2);
  sqcRYGate(q, -0.422085277542643, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09498575845454393, 2);
  sqcRYGate(q, -0.2997759595684923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7653179425595822, 4);
  sqcRYGate(q, 3.0278884152721166, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.347092445412011, 4);
  sqcRYGate(q, 2.899486058077059, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.375316547876113, 6);
  sqcRYGate(q, 2.1603629929506445, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.834683137953667, 6);
  sqcRYGate(q, 2.8593273601919913, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.179104230916192, 0);
  sqcRYGate(q, -1.2852390655163275, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6322759358093768, 0);
  sqcRYGate(q, 2.8920271400527775, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7835796621739535, 2);
  sqcRYGate(q, 1.4643153601441563, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.3840005487377285, 2);
  sqcRYGate(q, 2.3134517482880583, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0303916997376947, 4);
  sqcRYGate(q, 1.0544345344040464, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.085117669500115, 4);
  sqcRYGate(q, -1.8508859475779609, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.7105405747658304, 1);
  sqcRYGate(q, -2.7685701370130813, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5987652754544097, 1);
  sqcRYGate(q, -2.4516684527687116, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4073170598345524, 3);
  sqcRYGate(q, 1.0856016360760425, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.9492065761574846, 3);
  sqcRYGate(q, -0.15258978803054024, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.299929126935347, 5);
  sqcRYGate(q, -2.6751920677260683, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.3427084783235834, 5);
  sqcRYGate(q, 0.7741959243490681, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.092172474038611, 0);
  sqcRYGate(q, 1.0228301276987581, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.014187822879975, 0);
  sqcRYGate(q, 1.1943288370666263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.20052164639033, 2);
  sqcRYGate(q, -3.014006932276225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.120294608178365, 2);
  sqcRYGate(q, -2.353050915173104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9088228619291456, 4);
  sqcRYGate(q, 2.765372913179276, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7486056013833915, 4);
  sqcRYGate(q, 0.9261300651331817, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4699138506472123, 6);
  sqcRYGate(q, -0.2622171848481747, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2828244958934827, 6);
  sqcRYGate(q, -1.9203899274194536, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.586366015168245, 0);
  sqcRYGate(q, 2.172468973601974, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.464234764932411, 0);
  sqcRYGate(q, -1.8332118885345938, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.018013166734213, 2);
  sqcRYGate(q, -0.9750139264891259, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7149331923894109, 2);
  sqcRYGate(q, -1.9926881491325101, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6581175405230829, 4);
  sqcRYGate(q, -1.5985945077324644, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.25727545761285, 4);
  sqcRYGate(q, -0.8612492778392362, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.9303796943117417, 1);
  sqcRYGate(q, 0.8998732436119778, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.82240131257502, 1);
  sqcRYGate(q, -2.848901276852893, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.489447864184766, 3);
  sqcRYGate(q, -0.5462545718969859, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.6187210831787504, 3);
  sqcRYGate(q, -2.1924137551618283, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.086321013162707, 5);
  sqcRYGate(q, -2.4032077738678703, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.927239715398712, 5);
  sqcRYGate(q, -1.3668970353906058, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.011419130214910278, 0);
  sqcRYGate(q, 0.4440875503261233, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4170068778854885, 0);
  sqcRYGate(q, 1.8555432814571837, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7587770737559767, 2);
  sqcRYGate(q, 2.460653759327002, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9072499084740846, 2);
  sqcRYGate(q, 0.5367954827160526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4426186034774076, 4);
  sqcRYGate(q, 1.7885790226956033, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3759202589864938, 4);
  sqcRYGate(q, -0.6307400472720204, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6103327266096261, 6);
  sqcRYGate(q, 1.1643333349362814, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.483563544021151, 6);
  sqcRYGate(q, -0.11778611307189396, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.37371688204522435, 0);
  sqcRYGate(q, -2.6219374621995843, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.527591079238231, 0);
  sqcRYGate(q, 0.2687372788587569, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9169666920229496, 2);
  sqcRYGate(q, -0.7486249487181552, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.897159966746255, 2);
  sqcRYGate(q, -2.5540793860850872, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.17450849266340995, 4);
  sqcRYGate(q, 3.1413640577798816, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7509662054970034, 4);
  sqcRYGate(q, -1.1242878098992257, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.822873117217326, 1);
  sqcRYGate(q, 1.1655770014603493, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.0750913631713492, 1);
  sqcRYGate(q, -1.740330112410027, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8767359359771172, 3);
  sqcRYGate(q, -3.1033988382986464, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7114920831832885, 3);
  sqcRYGate(q, 1.4749301338714202, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.6327184086257385, 5);
  sqcRYGate(q, -2.4731508169566903, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.5061165150487263, 5);
  sqcRYGate(q, -0.12141193607543038, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.9194738647783941, 0);
  sqcRYGate(q, 2.389757349099632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8544606768994054, 0);
  sqcRYGate(q, -0.7748826206647786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.24048434928799003, 2);
  sqcRYGate(q, -0.6922283089204935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9285774928996515, 2);
  sqcRYGate(q, -0.8534695970600019, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1301740084507936, 4);
  sqcRYGate(q, -3.112319602165744, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4980485390136862, 4);
  sqcRYGate(q, 2.098916728992695, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.47287066721740134, 6);
  sqcRYGate(q, -3.1193726407572777, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4558075519153553, 6);
  sqcRYGate(q, 2.0831328243512948, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.06146146450829601, 0);
  sqcRYGate(q, -0.6274153000196865, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1162153752451656, 0);
  sqcRYGate(q, 1.058559925954041, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2728161598518826, 2);
  sqcRYGate(q, -2.3967262050445974, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.7734474492811688, 2);
  sqcRYGate(q, -1.9604587156543432, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0508771281649043, 4);
  sqcRYGate(q, -1.8399705926814744, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.792303447361836, 4);
  sqcRYGate(q, -1.0557063709958225, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.7332035037873837, 1);
  sqcRYGate(q, -1.757798994140244, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.120325920618675, 1);
  sqcRYGate(q, 0.9656507944476127, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0123063065663347, 3);
  sqcRYGate(q, 0.26499499710037105, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.5693422603308362, 3);
  sqcRYGate(q, -2.9306665579094635, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.4726824090035313, 5);
  sqcRYGate(q, -2.3493854831182657, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7518966392302975, 5);
  sqcRYGate(q, -2.9895168346657504, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.024101729339658, 0);
  sqcRYGate(q, 2.5198848958489695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.657741216545394, 0);
  sqcRYGate(q, -2.847056540657219, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.061682093159166, 2);
  sqcRYGate(q, -1.1130083065893186, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.004809631072512311, 2);
  sqcRYGate(q, -1.6026634692602668, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.483156032619811, 4);
  sqcRYGate(q, -0.9846056874066358, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1088114646201543, 4);
  sqcRYGate(q, 1.6305971297162483, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5012984813439891, 6);
  sqcRYGate(q, -1.152155264057832, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4849028960105093, 6);
  sqcRYGate(q, -2.8170945466442365, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9748647035956122, 0);
  sqcRYGate(q, 3.0761639715002187, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.038294412339962, 0);
  sqcRYGate(q, -1.4273924793824337, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9534927810849565, 2);
  sqcRYGate(q, 2.9910703432513643, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.3120832267280216, 2);
  sqcRYGate(q, 1.060473666868739, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.8633510327315848, 4);
  sqcRYGate(q, -2.3819896216190153, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4112504036062745, 4);
  sqcRYGate(q, -1.4655047871928413, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.17840055838555005, 1);
  sqcRYGate(q, 2.37427039824013, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2447803853726649, 1);
  sqcRYGate(q, -0.35534519371344864, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.21832337954884537, 3);
  sqcRYGate(q, -3.113197666811487, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8438096833913733, 3);
  sqcRYGate(q, 0.5140857584665142, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.127601101923601, 5);
  sqcRYGate(q, 1.7350191677230227, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.438843965357789, 5);
  sqcRYGate(q, 1.6954267304128123, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.7549083210516612, 0);
  sqcRYGate(q, -1.8511904144796452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5641805557481627, 0);
  sqcRYGate(q, 1.813934698323253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.008036414989765, 2);
  sqcRYGate(q, -0.9612347707448718, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7004368694040126, 2);
  sqcRYGate(q, 1.4037718459319073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0994778152267877, 4);
  sqcRYGate(q, 0.9220980357029394, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.34407174578591615, 4);
  sqcRYGate(q, 0.5671281260622818, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9608473423559065, 6);
  sqcRYGate(q, -0.47562608431106207, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.777584760927917, 6);
  sqcRYGate(q, -0.40183958091868033, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1410246015983003, 0);
  sqcRYGate(q, 0.4821120532565579, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8258737014948205, 0);
  sqcRYGate(q, 0.4335785371615577, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7626247561746513, 2);
  sqcRYGate(q, 3.1058118662699075, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.7485342854045256, 2);
  sqcRYGate(q, 2.6451206344435136, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.997629499828285, 4);
  sqcRYGate(q, -3.1114574572931932, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.8221441828996485, 4);
  sqcRYGate(q, 1.700636063430306, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4799819869174033, 1);
  sqcRYGate(q, 2.2588959699648137, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3196869747460554, 1);
  sqcRYGate(q, -2.4539788760246406, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7052545035852279, 3);
  sqcRYGate(q, 0.5800482528317703, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.033617844509765, 3);
  sqcRYGate(q, 0.7914886514271043, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.6666101353003806, 5);
  sqcRYGate(q, -1.5171316135157866, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.568744735612192, 5);
  sqcRYGate(q, -2.5990302773380227, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.005587635845388258, 0);
  sqcRYGate(q, 0.983780281617328, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5261123373067313, 0);
  sqcRYGate(q, -1.502479375459033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6505560333541274, 2);
  sqcRYGate(q, -1.3657829134556172, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22074937352954574, 2);
  sqcRYGate(q, 1.133105366060912, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9725171926188887, 4);
  sqcRYGate(q, -0.3905169157181021, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7384350613270493, 4);
  sqcRYGate(q, 1.4581042868248302, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8345837222039714, 6);
  sqcRYGate(q, 0.6865161479763477, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4002160677987613, 6);
  sqcRYGate(q, 0.7760643565638221, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4836349736473258, 0);
  sqcRYGate(q, -1.6710502598837804, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.30544621353452794, 0);
  sqcRYGate(q, 1.6800214877856765, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0318285334661867, 2);
  sqcRYGate(q, 0.8051742728924864, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.29212654108494646, 2);
  sqcRYGate(q, 0.04565189216640708, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.2448195526814079, 4);
  sqcRYGate(q, 1.9213354356727161, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5775073603480951, 4);
  sqcRYGate(q, -0.937480925602227, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7007929020262695, 1);
  sqcRYGate(q, -0.9964211604225498, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.899336357847222, 1);
  sqcRYGate(q, -2.077776730048158, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9738116851467105, 3);
  sqcRYGate(q, -0.8405070970941065, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7588909181964052, 3);
  sqcRYGate(q, -2.595025753971392, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8593784028826592, 5);
  sqcRYGate(q, -1.5531634721818002, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.3554307272574446, 5);
  sqcRYGate(q, -1.1415353405775182, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.116601246876325, 0);
  sqcRYGate(q, -1.4926359523072685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.902545283843349, 0);
  sqcRYGate(q, -1.9987860056372748, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6453875615492946, 2);
  sqcRYGate(q, 2.95357518836253, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2793168027083475, 2);
  sqcRYGate(q, -1.9231451506174606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8273595695825375, 4);
  sqcRYGate(q, 0.6798733607767986, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8470433555858284, 4);
  sqcRYGate(q, -2.65768176263368, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4609107050293453, 6);
  sqcRYGate(q, -0.8826509768809983, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.101313401391101, 6);
  sqcRYGate(q, 2.858507927939092, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7878246416191805, 0);
  sqcRYGate(q, -2.4537632468952224, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.007678849118132546, 0);
  sqcRYGate(q, -2.5228225759918077, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.205309547833056, 2);
  sqcRYGate(q, 1.1384722621731775, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.0600154577292242, 2);
  sqcRYGate(q, -0.3131072951241411, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.6811436479775839, 4);
  sqcRYGate(q, -2.920775623733302, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.9115108678521837, 4);
  sqcRYGate(q, 2.3974715266035473, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.8569439713979012, 1);
  sqcRYGate(q, -0.25204206837178117, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6764161097677788, 1);
  sqcRYGate(q, -0.23962034243203334, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3662081592012668, 3);
  sqcRYGate(q, 0.4435276444009281, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7850656044748519, 3);
  sqcRYGate(q, -0.5322754299652618, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.018437172160621886, 5);
  sqcRYGate(q, -1.4273380801034907, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.514295859849996, 5);
  sqcRYGate(q, -1.0553767445963578, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.15197288907951395, 0);
  sqcRYGate(q, -2.0314501486014844, 1);
  sqcRYGate(q, -2.3289716889775893, 2);
  sqcRYGate(q, -0.8872908302102491, 3);
  sqcRYGate(q, -0.9093340706345766, 4);
  sqcRYGate(q, 0.5449547420425604, 5);
  sqcRYGate(q, -0.2785386327286421, 6);
  sqcRYGate(q, -0.28900487254991525, 7);

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
