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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.7450658271779864, 0);
  sqcRYGate(q, -1.2389662917551982, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5904233957222459, 0);
  sqcRYGate(q, -0.3468011048605112, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3302969603442065, 2);
  sqcRYGate(q, -2.040184099755336, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6083797888316393, 2);
  sqcRYGate(q, 1.8168668943390165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1197518270047437, 4);
  sqcRYGate(q, 1.4277080100029718, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8006189417321508, 4);
  sqcRYGate(q, 1.659425608342179, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.169048240149763, 6);
  sqcRYGate(q, 0.987380263962031, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.952017255426986, 6);
  sqcRYGate(q, 3.0179175257750224, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5423047625713537, 0);
  sqcRYGate(q, -2.061532788510987, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6752576599792972, 0);
  sqcRYGate(q, -1.919743647733864, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3442102436762004, 2);
  sqcRYGate(q, 2.5666384071043815, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.1608333402014539, 2);
  sqcRYGate(q, 0.21193642460920825, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.6800848334980215, 4);
  sqcRYGate(q, 0.4137045691230163, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.0678915946319387, 4);
  sqcRYGate(q, -1.4328589177916076, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.4975009466396846, 1);
  sqcRYGate(q, 2.2080829737008822, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6462521211632577, 1);
  sqcRYGate(q, 1.2937523613036834, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4500880286192617, 3);
  sqcRYGate(q, 2.9482469102411177, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.491143849676271, 3);
  sqcRYGate(q, 0.6721373587329538, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.701706502819583, 5);
  sqcRYGate(q, 2.253530449859959, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.750112251177158, 5);
  sqcRYGate(q, 1.0351068696522638, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5400033513101183, 0);
  sqcRYGate(q, 0.783086959429155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9047461198859637, 0);
  sqcRYGate(q, -2.0224392534151914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5258148231870736, 2);
  sqcRYGate(q, -1.1038554003176007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.12636121769492892, 2);
  sqcRYGate(q, 1.5848945204864737, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8016363494513947, 4);
  sqcRYGate(q, 2.0837823046655544, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.867616764696311, 4);
  sqcRYGate(q, 1.5714595010529389, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8146100772804585, 6);
  sqcRYGate(q, 1.7587391562252204, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9416577986730766, 6);
  sqcRYGate(q, 2.857262230268548, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.217735150538965, 0);
  sqcRYGate(q, 1.8747397153724004, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6573918832517576, 0);
  sqcRYGate(q, -1.742499015636198, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5140379053260178, 2);
  sqcRYGate(q, 0.6726910127227567, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1796069519226349, 2);
  sqcRYGate(q, -2.5001539521517913, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6588246522680854, 4);
  sqcRYGate(q, -2.18732311922839, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.8772811492185355, 4);
  sqcRYGate(q, 0.002461413652317528, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.943435826517421, 1);
  sqcRYGate(q, 2.376713978831305, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8840941860014633, 1);
  sqcRYGate(q, -2.896036685735765, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8728977361270274, 3);
  sqcRYGate(q, -1.675636822061185, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.52728055055083, 3);
  sqcRYGate(q, -0.9770469887105877, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5982285620826022, 5);
  sqcRYGate(q, -0.07562721364016944, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.7198846168397397, 5);
  sqcRYGate(q, 1.7860495561641396, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.3021374235878298, 0);
  sqcRYGate(q, -0.2660461316500861, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1839337395658573, 0);
  sqcRYGate(q, -2.9349075468035783, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4324742832018074, 2);
  sqcRYGate(q, -0.5172578117401999, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.01799056502022367, 2);
  sqcRYGate(q, 0.39721286306651965, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6176858325809913, 4);
  sqcRYGate(q, 2.8362920197511334, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.334280741022405, 4);
  sqcRYGate(q, 2.5285690978856636, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.740282875085911, 6);
  sqcRYGate(q, 2.3723879833651047, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.822583438504754, 6);
  sqcRYGate(q, 2.6940561879172673, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1289321383667172, 0);
  sqcRYGate(q, -1.1747375209424513, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.630963578714893, 0);
  sqcRYGate(q, 2.9464752857474608, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6492713352650128, 2);
  sqcRYGate(q, 1.5262088624069268, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.1034077501204336, 2);
  sqcRYGate(q, 1.9634261188993913, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.67285336930661, 4);
  sqcRYGate(q, 1.353994877241686, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.2978054607493252, 4);
  sqcRYGate(q, -1.5547270631100782, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.105220154075878, 1);
  sqcRYGate(q, -2.866887776288538, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0051432781458853, 1);
  sqcRYGate(q, -2.5647139019205145, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.164108736889394, 3);
  sqcRYGate(q, 1.5246960695307927, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.040294291713641, 3);
  sqcRYGate(q, -0.10696184955507615, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.6088797008210753, 5);
  sqcRYGate(q, -2.8865558301169054, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.9341505021870766, 5);
  sqcRYGate(q, 0.6028991417426077, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.0382017326710686, 0);
  sqcRYGate(q, 1.3288911338147151, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.126460487546144, 0);
  sqcRYGate(q, 1.3536519361874548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.130619892146356, 2);
  sqcRYGate(q, -2.867090015913126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.930704626608481, 2);
  sqcRYGate(q, -2.392425944165845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9445310468427968, 4);
  sqcRYGate(q, 2.955963529206088, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8500563208171668, 4);
  sqcRYGate(q, 0.984249562159026, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3955976890091977, 6);
  sqcRYGate(q, -0.21430580839416147, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4762508017467846, 6);
  sqcRYGate(q, -2.465749332874946, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.695691802130094, 0);
  sqcRYGate(q, 2.253811736570865, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8327700927003175, 0);
  sqcRYGate(q, -2.063518266117889, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.786420423875375, 2);
  sqcRYGate(q, -0.7746639970068987, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7316252804565733, 2);
  sqcRYGate(q, -2.096046862899592, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6683012836046158, 4);
  sqcRYGate(q, -1.472854937022047, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7721651423531701, 4);
  sqcRYGate(q, -0.80831895608843, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.6353984864823579, 1);
  sqcRYGate(q, 0.6829670775908206, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5948793893581321, 1);
  sqcRYGate(q, -2.784109674017314, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.670453019933418, 3);
  sqcRYGate(q, -0.7223594148039155, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.8747558596237432, 3);
  sqcRYGate(q, -2.2237710356324207, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.513605210031337, 5);
  sqcRYGate(q, -2.480202561830456, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.2558861947029296, 5);
  sqcRYGate(q, -1.8933319470327996, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.14048578381720164, 0);
  sqcRYGate(q, 0.3282256683575991, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4902051141219514, 0);
  sqcRYGate(q, 1.862638450909781, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0338278552848505, 2);
  sqcRYGate(q, 3.035447424735588, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4341658779650928, 2);
  sqcRYGate(q, 0.7888131930320537, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0912589609900607, 4);
  sqcRYGate(q, 1.87843820082007, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.28870875572430343, 4);
  sqcRYGate(q, -0.6957672524377116, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.570585539400191, 6);
  sqcRYGate(q, 0.9125070113972953, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2717437098303366, 6);
  sqcRYGate(q, 0.8773733255747966, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.12172577072381685, 0);
  sqcRYGate(q, -2.5017016507161283, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3720931854278983, 0);
  sqcRYGate(q, 0.6474329053411131, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.301715979047123, 2);
  sqcRYGate(q, -0.9230795867733086, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.842185547945284, 2);
  sqcRYGate(q, -2.964265894119421, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.37362833337741286, 4);
  sqcRYGate(q, 3.063004443576851, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.8332045593656667, 4);
  sqcRYGate(q, -1.0685926184355248, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.2324336786052426, 1);
  sqcRYGate(q, 1.403446019599949, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.21565286364299024, 1);
  sqcRYGate(q, -2.4276528595631275, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8037222790886949, 3);
  sqcRYGate(q, 2.9952892240456794, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3981691862602983, 3);
  sqcRYGate(q, 1.7756954619269558, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7897914964648853, 5);
  sqcRYGate(q, -2.76972738460487, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.042918397229893, 5);
  sqcRYGate(q, 0.36060697945440356, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.557430300183462, 0);
  sqcRYGate(q, 2.4358473852298346, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7585779227423197, 0);
  sqcRYGate(q, -0.7220839945950938, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7771486886293831, 2);
  sqcRYGate(q, -0.916245769800466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.768531290731857, 2);
  sqcRYGate(q, -0.8813182657742678, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.099755679340846, 4);
  sqcRYGate(q, 3.0803328900589304, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3023457033688641, 4);
  sqcRYGate(q, 2.4534725581050094, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2560136617926636, 6);
  sqcRYGate(q, -2.8813016688825352, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.253186482303362, 6);
  sqcRYGate(q, 2.004264182030322, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.30917573465009046, 0);
  sqcRYGate(q, -0.4905324315014079, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0387267029366227, 0);
  sqcRYGate(q, 0.6018357283831349, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.093203587979966, 2);
  sqcRYGate(q, -2.446370114623471, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.5773800859865188, 2);
  sqcRYGate(q, -2.0556279516501905, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0652842754128677, 4);
  sqcRYGate(q, -1.8199394639178128, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.033490438161939, 4);
  sqcRYGate(q, -0.8156752146719667, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.6369957091011865, 1);
  sqcRYGate(q, -1.712200288902899, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0645861075793888, 1);
  sqcRYGate(q, 0.6918528171233751, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.006705747703551, 3);
  sqcRYGate(q, 0.26730740024864846, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.6035201322720405, 3);
  sqcRYGate(q, -2.899686795255215, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.0371414422560523, 5);
  sqcRYGate(q, -2.51887158921949, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.6719101029761747, 5);
  sqcRYGate(q, -2.9011636793710984, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.8326515150705214, 0);
  sqcRYGate(q, 2.2197162053140325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.430912433112938, 0);
  sqcRYGate(q, -2.488014550350536, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.104409599971122, 2);
  sqcRYGate(q, -0.9625669554745845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.37632331120089635, 2);
  sqcRYGate(q, -1.1257967257145918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.672261867094034, 4);
  sqcRYGate(q, -1.2257023969831433, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8880900507863866, 4);
  sqcRYGate(q, 1.9896933185397199, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4230644837332689, 6);
  sqcRYGate(q, -1.1167777582815956, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5899073418163248, 6);
  sqcRYGate(q, 3.0241098095692744, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8673801576910352, 0);
  sqcRYGate(q, 2.6251093287662832, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9543567154651234, 0);
  sqcRYGate(q, -1.030974900995635, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7952636259677182, 2);
  sqcRYGate(q, 2.3441470629793333, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.4159610340391855, 2);
  sqcRYGate(q, 1.1341783015192417, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.991330112722675, 4);
  sqcRYGate(q, -2.327371010211799, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.54801723242515, 4);
  sqcRYGate(q, -1.2571325130157815, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.1110855678363442, 1);
  sqcRYGate(q, 2.322782393104367, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5534018558388674, 1);
  sqcRYGate(q, -0.4645554272505131, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.47899958092938566, 3);
  sqcRYGate(q, -2.8098099283386437, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8830838007118565, 3);
  sqcRYGate(q, 0.5787244617769378, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8585372963909736, 5);
  sqcRYGate(q, 1.4195853249737214, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.469110613348916, 5);
  sqcRYGate(q, 1.4747477084303402, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.6231498628447305, 0);
  sqcRYGate(q, -1.8745916614931089, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6022489168545357, 0);
  sqcRYGate(q, 1.5053537561679937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.984073761514602, 2);
  sqcRYGate(q, -1.4149315932664595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4241599754585393, 2);
  sqcRYGate(q, 1.3654910130320967, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5292209649297033, 4);
  sqcRYGate(q, 0.9207228811537506, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3260262094817028, 4);
  sqcRYGate(q, 1.3085462073729044, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.617567076038975, 6);
  sqcRYGate(q, -0.7815675194247432, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.965376846592965, 6);
  sqcRYGate(q, -0.5251263256640416, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1083225829104992, 0);
  sqcRYGate(q, 0.6982425185383253, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1164139414492595, 0);
  sqcRYGate(q, 0.4303063522398647, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9353488526436938, 2);
  sqcRYGate(q, 2.8536946938799836, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.748179304358234, 2);
  sqcRYGate(q, 2.0576960417955794, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.135772433300851, 4);
  sqcRYGate(q, 3.090600468369681, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.735235466235266, 4);
  sqcRYGate(q, 1.9730842018809565, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.697039115159033, 1);
  sqcRYGate(q, 2.3914998988067206, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6222157385851794, 1);
  sqcRYGate(q, -2.402290632554885, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5942648467882774, 3);
  sqcRYGate(q, 0.3768024178836776, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.892318831810712, 3);
  sqcRYGate(q, 0.8288360267032947, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.6236325199087671, 5);
  sqcRYGate(q, -1.5428851576166611, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.4800035990496916, 5);
  sqcRYGate(q, -2.4731985418387614, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.44144302924899087, 0);
  sqcRYGate(q, 0.9913727503937197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.676075946876602, 0);
  sqcRYGate(q, -1.4803119844076988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.832528634153761, 2);
  sqcRYGate(q, -1.5341057540575909, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6064585986397982, 2);
  sqcRYGate(q, 1.3834881551916702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6983648886455256, 4);
  sqcRYGate(q, -0.8075076808806391, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.234800132195196, 4);
  sqcRYGate(q, 2.0263669108100393, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.961177989343937, 6);
  sqcRYGate(q, 0.5337966015870217, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7915523922124884, 6);
  sqcRYGate(q, 0.968287429869491, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5281826070908693, 0);
  sqcRYGate(q, -1.4629997300877335, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7575370516009047, 0);
  sqcRYGate(q, 1.799756704779903, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0846670621577057, 2);
  sqcRYGate(q, 1.11274074382293, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.18532736457436, 2);
  sqcRYGate(q, 0.05737907256195944, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.354378506861515, 4);
  sqcRYGate(q, 1.4475877893222688, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.6817191239157987, 4);
  sqcRYGate(q, -0.5964391923649943, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7466856006084726, 1);
  sqcRYGate(q, -0.9374241447113201, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7147128449213599, 1);
  sqcRYGate(q, -2.2793891329811293, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.867206291735468, 3);
  sqcRYGate(q, -0.4472548419564557, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.730496188939962, 3);
  sqcRYGate(q, -2.8206796213370864, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.2988461849435282, 5);
  sqcRYGate(q, -1.3952244541657142, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.1563153361650178, 5);
  sqcRYGate(q, -0.9153020168861662, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.8457436963552496, 0);
  sqcRYGate(q, -1.6428667841133162, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7673344019752313, 0);
  sqcRYGate(q, -2.1483291452992295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7983480662928453, 2);
  sqcRYGate(q, 2.660419972715138, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3493272717059024, 2);
  sqcRYGate(q, -2.1294445203440446, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6747214970750324, 4);
  sqcRYGate(q, 0.8120951067998554, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8814601703770935, 4);
  sqcRYGate(q, -2.703789585289314, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.19531291689178157, 6);
  sqcRYGate(q, -1.0870741906246426, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9760551107019566, 6);
  sqcRYGate(q, -3.07877562191803, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1127464301532815, 0);
  sqcRYGate(q, -2.226399522926987, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.051781383068050246, 0);
  sqcRYGate(q, -2.1323259706704425, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0146240661991248, 2);
  sqcRYGate(q, 1.4657415924572337, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.331433591239444, 2);
  sqcRYGate(q, -0.6798423050399244, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.16276223152604, 4);
  sqcRYGate(q, -2.533857189652359, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.527659620218074, 4);
  sqcRYGate(q, 1.9498890180867796, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.0145095085638274, 1);
  sqcRYGate(q, -0.05027187464595255, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.129401465591866, 1);
  sqcRYGate(q, -0.10630824583499443, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.04806231757878005, 3);
  sqcRYGate(q, 0.9008237103048589, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.708974499664003, 3);
  sqcRYGate(q, -0.6235482079599804, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.28559838448014485, 5);
  sqcRYGate(q, -1.402551373947598, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.0354439890526645, 5);
  sqcRYGate(q, -0.7951518155512804, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.4003804800902039, 0);
  sqcRYGate(q, -2.158646958595327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8199662509018537, 0);
  sqcRYGate(q, -0.5611480889682251, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8240847656437733, 2);
  sqcRYGate(q, 0.7422399669621207, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6904411364480181, 2);
  sqcRYGate(q, -0.24472207888203457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1342400029310795, 4);
  sqcRYGate(q, 1.9419852523741168, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8329398038615435, 4);
  sqcRYGate(q, -2.590824606434966, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.05526223424435539, 6);
  sqcRYGate(q, 2.7812748820651563, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7005945622848406, 6);
  sqcRYGate(q, 2.539207048688463, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6214350429100914, 0);
  sqcRYGate(q, 0.8202343574207287, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9050568131399763, 0);
  sqcRYGate(q, -1.858078204693225, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5378719950700113, 2);
  sqcRYGate(q, 0.7346930695856351, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.7903484048430043, 2);
  sqcRYGate(q, 0.7717805117966527, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.2978762666238979, 4);
  sqcRYGate(q, 0.923258292558732, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.16573310035872937, 4);
  sqcRYGate(q, 3.006536457194856, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.13037884554165213, 1);
  sqcRYGate(q, 1.3995078250673627, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.512875081784681, 1);
  sqcRYGate(q, -1.8574557458362453, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6416145368259104, 3);
  sqcRYGate(q, 2.2002160813651788, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.0864893640486275, 3);
  sqcRYGate(q, -2.2562253976175235, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7323638188419395, 5);
  sqcRYGate(q, -1.1830391045044957, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.0065308925859817, 5);
  sqcRYGate(q, -2.6043309438023123, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.6403497749397813, 0);
  sqcRYGate(q, 1.727687665797018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1952639287144073, 0);
  sqcRYGate(q, 2.0220214362504985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6064336653360805, 2);
  sqcRYGate(q, -1.1763447541892302, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.30524254630683245, 2);
  sqcRYGate(q, -1.6834523651480024, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9635666135697674, 4);
  sqcRYGate(q, -0.9161132737285262, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.27522993470148, 4);
  sqcRYGate(q, 0.5028382235870771, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9724410364401325, 6);
  sqcRYGate(q, -2.899524365613521, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0398944426400316, 6);
  sqcRYGate(q, 1.2842040960573566, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0169118442813951, 0);
  sqcRYGate(q, -1.4272197913431404, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.18690155729682054, 0);
  sqcRYGate(q, -1.981250190820603, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.27042825566038253, 2);
  sqcRYGate(q, -2.5424728190163735, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.082718585324579, 2);
  sqcRYGate(q, 2.2474615495808434, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.08106869182428766, 4);
  sqcRYGate(q, -2.6362262167964357, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.2840971530257557, 4);
  sqcRYGate(q, -1.9083154882318025, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.962909781255645, 1);
  sqcRYGate(q, 0.8313460567359742, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0814927042323612, 1);
  sqcRYGate(q, -1.6599765729620026, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4385074247995315, 3);
  sqcRYGate(q, 0.5861573800672186, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.7948636777385025, 3);
  sqcRYGate(q, 1.9772851787889076, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.4358798867445204, 5);
  sqcRYGate(q, 1.1418024959945061, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.099809555836236, 5);
  sqcRYGate(q, 0.3968022290116435, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8699648655193792, 0);
  sqcRYGate(q, -2.58987871839399, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0046925565764875, 0);
  sqcRYGate(q, -1.9113725883674952, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9285798520461659, 2);
  sqcRYGate(q, 0.31315820659706173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9409975741877193, 2);
  sqcRYGate(q, -0.4434383555479064, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4191656229494454, 4);
  sqcRYGate(q, 0.6351516016744806, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5978998702755138, 4);
  sqcRYGate(q, -3.0180183598678676, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.829051416481521, 6);
  sqcRYGate(q, -2.865012988715027, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2698598435243147, 6);
  sqcRYGate(q, 0.4020096811412341, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.851243723142504, 0);
  sqcRYGate(q, -1.592716501441452, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2829950462530299, 0);
  sqcRYGate(q, 2.394232500450471, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.09256815846293964, 2);
  sqcRYGate(q, 0.7528213067602948, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.9934917087341567, 2);
  sqcRYGate(q, 2.5889072246831644, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7836166950681499, 4);
  sqcRYGate(q, 0.2202379201143021, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.2162486824484091, 4);
  sqcRYGate(q, 2.0551060244115202, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0189197549727966, 1);
  sqcRYGate(q, 0.5663548993579564, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0739609951169324, 1);
  sqcRYGate(q, 0.08308293543445172, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8585299567293116, 3);
  sqcRYGate(q, 1.8795516970358568, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5866591795653417, 3);
  sqcRYGate(q, -1.8840291351930798, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7391720627286293, 5);
  sqcRYGate(q, 0.27213379785346614, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.0809703372230253, 5);
  sqcRYGate(q, 0.4719712438529875, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5195859435792016, 0);
  sqcRYGate(q, 1.438778494432789, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0402909979745734, 0);
  sqcRYGate(q, 2.276736221194234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.004119180137282, 2);
  sqcRYGate(q, 1.4837661772439676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.556048993099708, 2);
  sqcRYGate(q, 2.6664682681600693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9914987203132974, 4);
  sqcRYGate(q, -2.889701416436754, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.028489031814358, 4);
  sqcRYGate(q, -0.24606604535760532, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1666627766533706, 6);
  sqcRYGate(q, -1.439101912568412, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.511726148943146, 6);
  sqcRYGate(q, -0.22824910429026396, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.31209349030260736, 0);
  sqcRYGate(q, 1.920258464051333, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.363575906185572, 0);
  sqcRYGate(q, 2.0086782790345175, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.171877218117335, 2);
  sqcRYGate(q, 2.111492719854839, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0139988659197223, 2);
  sqcRYGate(q, -2.181967642251619, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.3927573216116518, 4);
  sqcRYGate(q, -2.874028497414016, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.753132952664633, 4);
  sqcRYGate(q, -0.8611142444405663, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.1860127573531323, 1);
  sqcRYGate(q, -0.07107738108901315, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.488399209475868, 1);
  sqcRYGate(q, -1.4890357321272933, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.961990089445839, 3);
  sqcRYGate(q, 0.004999780078742688, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.6196952637206483, 3);
  sqcRYGate(q, 2.4773216288387463, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9501256027005107, 5);
  sqcRYGate(q, -1.0679113391427064, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.0065418824797376, 5);
  sqcRYGate(q, 3.069723871072982, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.9755691748150364, 0);
  sqcRYGate(q, 1.1694797121443468, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.536400233428388, 0);
  sqcRYGate(q, -1.3045386825095076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.851913892486936, 2);
  sqcRYGate(q, 1.8383680534361, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.209083197709198, 2);
  sqcRYGate(q, 0.09860456008770589, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3948782336816121, 4);
  sqcRYGate(q, 0.8415545057524233, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.25956540179020177, 4);
  sqcRYGate(q, 0.7544854863362005, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.630784787264964, 6);
  sqcRYGate(q, -1.4709696011993199, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3579631155928573, 6);
  sqcRYGate(q, -1.4658809381127045, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.478177238083373, 0);
  sqcRYGate(q, -2.9793239336908686, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.393623598808882, 0);
  sqcRYGate(q, -2.4694666151728826, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.160185192225823, 2);
  sqcRYGate(q, 1.6002190199996065, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.24553772153373282, 2);
  sqcRYGate(q, -0.9724085037546457, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.714695489588042, 4);
  sqcRYGate(q, -2.649623506988439, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.7350755493881485, 4);
  sqcRYGate(q, -2.7896208580135187, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.950557837802387, 1);
  sqcRYGate(q, -0.25193668796893937, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.123285118393592, 1);
  sqcRYGate(q, 2.750667427155944, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7730262609009424, 3);
  sqcRYGate(q, 1.5348119351371947, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.16038530220318337, 3);
  sqcRYGate(q, 0.10387893885665787, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9056465821919918, 5);
  sqcRYGate(q, 0.7637632078113499, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.6002930336712287, 5);
  sqcRYGate(q, -2.7564034862061884, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.218701133901582, 0);
  sqcRYGate(q, 2.4449919700791294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6248714239250501, 0);
  sqcRYGate(q, -1.243815076912808, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.073935087784572, 2);
  sqcRYGate(q, 0.089704104243598, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9327373164910524, 2);
  sqcRYGate(q, -2.6972356030431324, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4680578670132962, 4);
  sqcRYGate(q, -0.1657415726101199, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6846492623251037, 4);
  sqcRYGate(q, -1.3384440654684493, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9171816907854851, 6);
  sqcRYGate(q, 0.44467909852001597, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.048084344616118, 6);
  sqcRYGate(q, -3.128649663398739, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1163931145882098, 0);
  sqcRYGate(q, 0.4061298648788405, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2121921843525563, 0);
  sqcRYGate(q, -1.4136791950193617, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9495349053881803, 2);
  sqcRYGate(q, 1.8621488197998108, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.5568650094625527, 2);
  sqcRYGate(q, -2.2227669804335863, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.102169717511923, 4);
  sqcRYGate(q, 1.8668769632003404, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6369926352887894, 4);
  sqcRYGate(q, -0.5110409560139848, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3673810581580506, 1);
  sqcRYGate(q, -0.4132568197282911, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8967700753785417, 1);
  sqcRYGate(q, 0.5482451822947532, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2530538077293151, 3);
  sqcRYGate(q, 0.476848887481089, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.0829506292691695, 3);
  sqcRYGate(q, -1.1349278689831763, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.013170764153038, 5);
  sqcRYGate(q, -0.5848395407449232, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.3809441762849697, 5);
  sqcRYGate(q, -2.32041474277735, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.6164260959594072, 0);
  sqcRYGate(q, 2.6633275155807015, 1);
  sqcRYGate(q, 2.3804380058931494, 2);
  sqcRYGate(q, 2.6288481163237543, 3);
  sqcRYGate(q, 2.643957101288245, 4);
  sqcRYGate(q, 2.548402262329612, 5);
  sqcRYGate(q, 0.25937068932946916, 6);
  sqcRYGate(q, -2.416241567392441, 7);

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
