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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.011742606292995771, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.03241981274817044, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.019295376210243655, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.16285770682888076, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.1092148722145471, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.05935387243954365, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.29108326215771074, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.05847349632223095, 0);
  sqcRZGate(q, -0.06972776765827723, 1);
  sqcRZGate(q, -0.14540823145708867, 2);
  sqcRZGate(q, -0.130262135888666, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.03211938178346454, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.10034482577070807, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.19997067315828693, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.17533542983647207, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.1571946086713235, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.06393811260938449, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.21207157248198247, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.008155729394681357, 0);
  sqcRZGate(q, -0.10976809211745948, 1);
  sqcRZGate(q, -0.17593216879483287, 2);
  sqcRZGate(q, -0.18183944632639762, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.14354065623729892, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.24389478803966352, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.35548187517753455, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.1775200798844306, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.30607736648170203, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.11979510805433365, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.15218419024027227, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.050889677922452026, 0);
  sqcRZGate(q, -0.08346851577840098, 1);
  sqcRZGate(q, -0.2216474570956324, 2);
  sqcRZGate(q, -0.21060593210196188, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.11564916325066957, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.2852230916156973, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3825682978196843, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.11682731299938881, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.421496952220899, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.18525392876395702, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.13650146268227487, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.11177524274042727, 0);
  sqcRZGate(q, 0.04107530566853551, 1);
  sqcRZGate(q, -0.2637143070780099, 2);
  sqcRZGate(q, -0.16698592405727883, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.04947871447670665, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.15159451414311761, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.4420930324580557, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.14275797115768832, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.4650423827324899, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.26827072275210806, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.1985780245509498, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.103551419422688, 0);
  sqcRZGate(q, 0.1107325449707814, 1);
  sqcRZGate(q, -0.2756693585728488, 2);
  sqcRZGate(q, -0.24762538824010463, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.019267856212262627, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.13254911268682762, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.42135922408138127, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.16375251413703718, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.5174766407455723, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.28294257076034207, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.23490973600055443, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.11186838758846637, 0);
  sqcRZGate(q, 0.15634507357502536, 1);
  sqcRZGate(q, -0.24351251364623813, 2);
  sqcRZGate(q, -0.30226546541951205, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.01240757163773176, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.06635593103193647, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.534986102241642, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.20704008685341027, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.5193455113980779, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.3279633912447005, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.06998894283020621, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.07662276932719013, 0);
  sqcRZGate(q, 0.23809535961318903, 1);
  sqcRZGate(q, -0.16406385059357273, 2);
  sqcRZGate(q, -0.36455894144070217, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.040026500970445245, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.09116134465173688, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5537615659198386, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2087120640280437, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.49216098345075826, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.37634425526409526, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.18923194961607143, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.14905119286693233, 0);
  sqcRZGate(q, 0.33825909017881706, 1);
  sqcRZGate(q, -0.179100917020808, 2);
  sqcRZGate(q, -0.39657824974544736, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.03995633779281275, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.02866425181288747, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.4689665109184285, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.22404722293568302, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.4343970217851233, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.49629067164741564, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3820875838840486, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.20917219148248406, 0);
  sqcRZGate(q, 0.4091248696019216, 1);
  sqcRZGate(q, -0.12411889235253036, 2);
  sqcRZGate(q, -0.3530294461897176, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.09091862231759247, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.15693076621358445, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5520438061901095, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.23101918640964916, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.3630928266456552, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.5401919847012975, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.46121820516775514, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.18530448222691312, 0);
  sqcRZGate(q, 0.4305152602486289, 1);
  sqcRZGate(q, -0.08375899272394884, 2);
  sqcRZGate(q, -0.42803189987675866, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.0056405781132981975, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.19715962167321396, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5926972980610204, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.29064195757324923, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.22258117264951605, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.5232039309797194, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3633603464178492, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.1893606466685743, 0);
  sqcRZGate(q, 0.4658706424098132, 1);
  sqcRZGate(q, -0.04474017878715288, 2);
  sqcRZGate(q, -0.501033771439123, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.01785113728282324, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.3417493960286303, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.68209069199307, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.31294738482470646, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.13091436836264922, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.5993261642921601, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.43264613253973894, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.26049388374156995, 0);
  sqcRZGate(q, 0.4562959062971551, 1);
  sqcRZGate(q, -0.2216256708035158, 2);
  sqcRZGate(q, -0.5454084743501572, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.10188296703469889, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.4978453209412216, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5956216678632957, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2567801769912776, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.06221737552862792, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.5721472693570819, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.624938972805421, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.2547241945634823, 0);
  sqcRZGate(q, 0.35494645918480094, 1);
  sqcRZGate(q, -0.2675757697737191, 2);
  sqcRZGate(q, -0.4969745469130771, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.03076453303709326, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.415558382967377, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.588238622711793, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.3712927281254935, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.1264459840162075, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.6294620423776723, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.6022790004608576, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.3459202143969717, 0);
  sqcRZGate(q, 0.3379695401135835, 1);
  sqcRZGate(q, -0.3873547712496853, 2);
  sqcRZGate(q, -0.4946675351374517, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.048218710422231525, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.4275654150973981, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.7490734780001101, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4673523558958574, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.190956847660925, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.5116943890182267, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.551739273691397, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.36440236234571033, 0);
  sqcRZGate(q, 0.2880190667614216, 1);
  sqcRZGate(q, -0.4080200251385044, 2);
  sqcRZGate(q, -0.5055307969520278, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.05339181988738622, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.33337510228984196, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.8917912742786113, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.5145883235801599, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.27984212013954307, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.45155271429042804, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.7514631069207, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.29196792033495117, 0);
  sqcRZGate(q, 0.2154852170650879, 1);
  sqcRZGate(q, -0.44014743139689094, 2);
  sqcRZGate(q, -0.2729968416960454, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.08467092617898811, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.3246564219335162, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.8569615324420639, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4992881210074533, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.30116726633076496, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.5279100621778784, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9191588731272314, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.31435211185103895, 0);
  sqcRZGate(q, 0.16356010100417895, 1);
  sqcRZGate(q, -0.4101762340204188, 2);
  sqcRZGate(q, -0.24707870467835594, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.031102952372197477, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.23421060507269723, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.7926242296442529, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.5109236672520168, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.32456851141411575, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.6547494606082326, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.966131848091665, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.31656536625175574, 0);
  sqcRZGate(q, 0.13549543496316718, 1);
  sqcRZGate(q, -0.5237065457393857, 2);
  sqcRZGate(q, -0.26747882417684576, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.20876192838450391, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.19064872240888242, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.8738986247825581, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.5339296009653133, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.46689939956404525, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.7355806107929322, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.0470753575834943, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.22783352415664163, 0);
  sqcRZGate(q, 0.08817602975098573, 1);
  sqcRZGate(q, -0.5802169464024548, 2);
  sqcRZGate(q, -0.24097151998426505, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.35045810767912244, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.3589205892520614, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6925825673150402, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.3985306144103235, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.44633640779272743, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.9599323426434829, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.2021052450985628, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.18938773537449954, 0);
  sqcRZGate(q, 0.015481263863742064, 1);
  sqcRZGate(q, -0.5914164962339631, 2);
  sqcRZGate(q, -0.05428363493522906, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.5153661452126347, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.5000052326691365, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.4986058927254551, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.32590278075317175, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.6595726719831168, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.9583541575116388, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.1199687710068944, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.16945968249451543, 0);
  sqcRZGate(q, -0.0239873042707612, 1);
  sqcRZGate(q, -0.5761473910375688, 2);
  sqcRZGate(q, 0.04042220988938317, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.45505239709416545, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.448215576475008, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.73165950822935, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.3698014719184708, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.7949007838937067, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 1.1800278761130414, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.0271831013746175, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.10543552097105814, 0);
  sqcRZGate(q, -0.011500805065315709, 1);
  sqcRZGate(q, -0.5019166766681811, 2);
  sqcRZGate(q, -0.026456362086056076, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.4580004454496447, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.3456201194578794, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.57845691757878, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.3845882853473526, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.9039615169931192, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 1.2718657088448175, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9439815033134122, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.027334289689397186, 0);
  sqcRZGate(q, -0.2790729523366662, 1);
  sqcRZGate(q, -0.5287210157363003, 2);
  sqcRZGate(q, -0.17309777651732453, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.5224104181427328, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.18557677051993532, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6909811252852669, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.1920178210710506, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.9431892577016538, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 1.1158048522812247, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.7140501239534777, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.05770182337680807, 0);
  sqcRZGate(q, -0.6632061998169039, 1);
  sqcRZGate(q, -0.3664506623823793, 2);
  sqcRZGate(q, -0.17274513975522302, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.5499953646452271, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.24612975050007604, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6566346295347015, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.00802882984010319, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.7252635832397406, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.966054442902578, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5311168210504593, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.1297408956715259, 0);
  sqcRZGate(q, -0.7697940817660548, 1);
  sqcRZGate(q, -0.17670139261271, 2);
  sqcRZGate(q, -0.05120051297156397, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.583858178055699, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.3316010374699048, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.4847659057938209, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.32402392372204925, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5387961299666558, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.8585736373650469, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.43724913602802545, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.19264813885284263, 0);
  sqcRZGate(q, -0.8381628991764307, 1);
  sqcRZGate(q, -0.11409713604706481, 2);
  sqcRZGate(q, -0.011531281814335867, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.6240344789669233, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.36901417809966686, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.4650215024878412, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.3591026508635345, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.09361248244647381, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.6293911952264742, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.23029267667155542, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2435572745394996, 0);
  sqcRZGate(q, -0.783519101089925, 1);
  sqcRZGate(q, -0.14608950896911368, 2);
  sqcRZGate(q, 0.07694917944255211, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.6208143695911136, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.3677279596527181, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3373635131995878, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.14665598295967502, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.06470795690014289, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.5023878539797679, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.12805699738949824, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.25409879334309937, 0);
  sqcRZGate(q, -0.6355075667647712, 1);
  sqcRZGate(q, -0.12642111720696284, 2);
  sqcRZGate(q, 0.11882040067274785, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.562636625968159, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.2321779654970039, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2581813411783476, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.005234962410445569, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.26275614749544784, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.30083887265646053, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.03901121272560409, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.24242134092120596, 0);
  sqcRZGate(q, -0.4183525607301668, 1);
  sqcRZGate(q, -0.11711686475774112, 2);
  sqcRZGate(q, 0.16305853917090152, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.43075646604923334, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.1789587532212327, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.19177096740916655, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.0825502707533723, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.2551844505444894, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.13033725605398894, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.2567124545230275, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3968516782166527, 0);
  sqcRZGate(q, -0.3998410421002748, 1);
  sqcRZGate(q, -0.16793824529562523, 2);
  sqcRZGate(q, 0.295601212017943, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.25271469062340723, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.19643665857893405, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.007769228638594853, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.08113402817440014, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.12488483901916873, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.14695888567957566, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.32919411088836487, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.34690719911530393, 0);
  sqcRZGate(q, -0.26090387556514455, 1);
  sqcRZGate(q, -0.0034800665478172637, 2);
  sqcRZGate(q, 0.44415817584298295, 3);

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
