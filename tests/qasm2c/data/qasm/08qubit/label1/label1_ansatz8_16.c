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

  sqcRYGate(q, -1.074067823601193, 0);
  sqcRYGate(q, -2.410714259979405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6896663396985536, 0);
  sqcRYGate(q, 1.530308989033318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7643137487521705, 2);
  sqcRYGate(q, 2.832012720842787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.171604206296784, 2);
  sqcRYGate(q, -2.9768492431040565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3988463759756669, 4);
  sqcRYGate(q, 2.4329702218219547, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.13413890694995284, 4);
  sqcRYGate(q, -0.9087851514529902, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.185231096691535, 6);
  sqcRYGate(q, -0.003988136905372919, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5458353925470361, 6);
  sqcRYGate(q, 1.1614476721772076, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.23381506328071475, 0);
  sqcRYGate(q, -1.1585543394890152, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.09009786813077655, 0);
  sqcRYGate(q, 2.423902183572774, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.291214422476605, 2);
  sqcRYGate(q, -1.6107000669681835, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.15780199392138716, 2);
  sqcRYGate(q, -1.037453436845492, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.43434210442405263, 4);
  sqcRYGate(q, 3.0053594693866548, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3612554243262975, 4);
  sqcRYGate(q, 1.6661551014638274, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.5610726460836464, 1);
  sqcRYGate(q, -1.5879887247368423, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.313109354939595, 1);
  sqcRYGate(q, -2.370549262250286, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.597742625498814, 3);
  sqcRYGate(q, -0.868528862625749, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.7757303275732355, 3);
  sqcRYGate(q, 0.6559646686253551, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.327703962259162, 5);
  sqcRYGate(q, 1.2376646086285465, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.24580682340321222, 5);
  sqcRYGate(q, -2.47718728090407, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.480878336072214, 0);
  sqcRYGate(q, -1.619550811634513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.09922208296097068, 0);
  sqcRYGate(q, 1.2003526756106309, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.646081180185783, 2);
  sqcRYGate(q, 2.7363607515348787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06014691573504294, 2);
  sqcRYGate(q, 1.914893054524285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1319096077420814, 4);
  sqcRYGate(q, -2.0742231137803016, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.16925304157618362, 4);
  sqcRYGate(q, 2.2401841341117645, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8267015926299707, 6);
  sqcRYGate(q, 1.7826359399628002, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.468739347323618, 6);
  sqcRYGate(q, -1.7831572762560153, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.381823558088139, 0);
  sqcRYGate(q, -2.9979136039020857, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9052163432695144, 0);
  sqcRYGate(q, 2.9652274460942833, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1574973488971132, 2);
  sqcRYGate(q, 1.355655373661763, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.517861383710213, 2);
  sqcRYGate(q, 1.3143670269603922, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.3088642510763897, 4);
  sqcRYGate(q, -2.6253875838841645, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.6114891507426004, 4);
  sqcRYGate(q, -0.7723590245178799, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.293991846983055, 1);
  sqcRYGate(q, -1.714029536526625, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7129094524563708, 1);
  sqcRYGate(q, -2.907959852688031, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3421480087781696, 3);
  sqcRYGate(q, 0.07154513033573925, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.6755550489380084, 3);
  sqcRYGate(q, -1.6236701738119743, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.6002377281414393, 5);
  sqcRYGate(q, -1.6212281363646552, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.22134660828988917, 5);
  sqcRYGate(q, -1.0246537718630284, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.8466503669213146, 0);
  sqcRYGate(q, -2.9907803479624238, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21352729850706176, 0);
  sqcRYGate(q, 2.5355898291623156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7294536188796545, 2);
  sqcRYGate(q, 2.9017843332129503, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.393437355165767, 2);
  sqcRYGate(q, 3.0249268876778173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.08443811720325674, 4);
  sqcRYGate(q, -1.602295727197043, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.638876953926688, 4);
  sqcRYGate(q, -1.8830420052726746, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6221309544738154, 6);
  sqcRYGate(q, -2.4784145485291726, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.596911863382262, 6);
  sqcRYGate(q, 0.8832652537857706, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0882940195291935, 0);
  sqcRYGate(q, -3.0931453145970114, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6578242872946403, 0);
  sqcRYGate(q, 0.781044012674199, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.531714966873412, 2);
  sqcRYGate(q, -0.2714524965153262, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.436890010636828, 2);
  sqcRYGate(q, 2.6871914263662657, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.028808984740312, 4);
  sqcRYGate(q, -1.9659505548697194, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2225206017332697, 4);
  sqcRYGate(q, 1.8622972704262293, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.3795042369585326, 1);
  sqcRYGate(q, 1.7670952728803027, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0884415176524245, 1);
  sqcRYGate(q, -1.4493672108009479, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6596465889148967, 3);
  sqcRYGate(q, 2.2414549972368816, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.9132602722899885, 3);
  sqcRYGate(q, -1.0038568901929494, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.905395739251833, 5);
  sqcRYGate(q, 2.9309563056479746, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.7446107544592544, 5);
  sqcRYGate(q, 1.4069378444781375, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.7971042409908664, 0);
  sqcRYGate(q, -0.38591263610382054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.612998625283686, 0);
  sqcRYGate(q, -3.0830825896943526, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4087849987916854, 2);
  sqcRYGate(q, 2.8089106203250114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7890053139871586, 2);
  sqcRYGate(q, -2.341701094267882, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.009051630988134, 4);
  sqcRYGate(q, -2.67632622437557, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5793677816728384, 4);
  sqcRYGate(q, 0.3490641720807117, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6137323134713494, 6);
  sqcRYGate(q, 1.299558726774515, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4990796922000644, 6);
  sqcRYGate(q, 1.794465189871194, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.03394344194621, 0);
  sqcRYGate(q, -2.0937452399212235, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9605001849124557, 0);
  sqcRYGate(q, -1.705473147742043, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0013067281064543, 2);
  sqcRYGate(q, 2.524802266695253, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.3478781736937453, 2);
  sqcRYGate(q, -2.531910368819088, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.12407146831529126, 4);
  sqcRYGate(q, -3.103698568893272, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.1757486372075281, 4);
  sqcRYGate(q, -2.3400140533973834, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.0992835534894752, 1);
  sqcRYGate(q, 2.1124910346623293, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7646787605575076, 1);
  sqcRYGate(q, -2.2717106900531086, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4675084688841498, 3);
  sqcRYGate(q, -0.7585830079233783, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9000106053379959, 3);
  sqcRYGate(q, -2.7877390887317524, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.4028559016519182, 5);
  sqcRYGate(q, -2.6343470387791617, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.5677103606095812, 5);
  sqcRYGate(q, 1.329760717641018, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.6942887093327937, 0);
  sqcRYGate(q, -2.135937735939452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.761034426925325, 0);
  sqcRYGate(q, -0.1707843848672444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.379661162525096, 2);
  sqcRYGate(q, 0.5811098266005733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3185952691256413, 2);
  sqcRYGate(q, -1.7452308260921532, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4951811923142015, 4);
  sqcRYGate(q, -1.9086366143381677, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0173500752136233, 4);
  sqcRYGate(q, 0.4349622800519475, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9205893335355816, 6);
  sqcRYGate(q, -1.7394637637170407, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.158030829578002, 6);
  sqcRYGate(q, -1.3684011753945051, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.22845477001574926, 0);
  sqcRYGate(q, -2.007025370919708, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5649820397655541, 0);
  sqcRYGate(q, -2.8950563782726664, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4807967855204725, 2);
  sqcRYGate(q, 0.040224500965397474, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3968483545094652, 2);
  sqcRYGate(q, 2.408045905854197, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.8547101857578836, 4);
  sqcRYGate(q, 1.0172968611723991, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.2587231289043235, 4);
  sqcRYGate(q, -0.39091887196957054, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3794013815289254, 1);
  sqcRYGate(q, 0.07238500119362606, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6057101560265067, 1);
  sqcRYGate(q, 0.9295656120442585, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.341874633431198, 3);
  sqcRYGate(q, -2.009592352200268, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.235537214668777, 3);
  sqcRYGate(q, 0.030266907868636395, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.1757474404466086, 5);
  sqcRYGate(q, -2.647749502322557, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.527136538261834, 5);
  sqcRYGate(q, 2.1733414229516437, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.9342941650391028, 0);
  sqcRYGate(q, -2.758979471265824, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8920322491746044, 0);
  sqcRYGate(q, -1.337994099040369, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.13518555612322292, 2);
  sqcRYGate(q, 2.23257378975942, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8181365168139054, 2);
  sqcRYGate(q, -1.2628893691519751, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3929934875096572, 4);
  sqcRYGate(q, 0.08411974166856152, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4214188030761472, 4);
  sqcRYGate(q, -0.8330532110852097, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9938525822749877, 6);
  sqcRYGate(q, -0.31783003815047184, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4766255312219558, 6);
  sqcRYGate(q, -0.10095058325067452, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6836182154339143, 0);
  sqcRYGate(q, 2.2605676201232696, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8341267522914085, 0);
  sqcRYGate(q, 0.029211747945214306, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.26111870489523975, 2);
  sqcRYGate(q, 1.6752205196516687, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.01185395452398, 2);
  sqcRYGate(q, -2.5506682609531928, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.1171835590143617, 4);
  sqcRYGate(q, -2.736037712902597, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6480756227036113, 4);
  sqcRYGate(q, 2.2417700691368734, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.6418483241545214, 1);
  sqcRYGate(q, -0.7382094980814125, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3850060836832552, 1);
  sqcRYGate(q, -1.931891361314298, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0813417032465886, 3);
  sqcRYGate(q, 1.2347038445724385, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.302353706161986, 3);
  sqcRYGate(q, 1.6678951829140134, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.40801344160921493, 5);
  sqcRYGate(q, 2.9884035093813015, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.9727919674412395, 5);
  sqcRYGate(q, 2.9153479380558602, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7032994949135676, 0);
  sqcRYGate(q, -0.7284769363801531, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4561425713110157, 0);
  sqcRYGate(q, -1.7740357944586105, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8240543867963024, 2);
  sqcRYGate(q, -2.1331050553376967, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5700275996892126, 2);
  sqcRYGate(q, 0.2997807982534484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7651822988940845, 4);
  sqcRYGate(q, -2.20458855971253, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2549320943451257, 4);
  sqcRYGate(q, 2.0415241383802174, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8206084820518944, 6);
  sqcRYGate(q, 1.576438553742393, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5875148644024675, 6);
  sqcRYGate(q, 0.3575019904337644, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7963971775237801, 0);
  sqcRYGate(q, 0.6660791036776903, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9062029603035304, 0);
  sqcRYGate(q, -1.1831279332555376, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6495189425921912, 2);
  sqcRYGate(q, -2.922050911284239, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.3352677696764603, 2);
  sqcRYGate(q, 0.11331526945516579, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.707047430738596, 4);
  sqcRYGate(q, 0.1542363868829434, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.9001609038303209, 4);
  sqcRYGate(q, -0.6224184821760745, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.04391541203315352, 1);
  sqcRYGate(q, 1.9957221920624733, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.463160676770997, 1);
  sqcRYGate(q, -1.6814382145638849, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6460197720559586, 3);
  sqcRYGate(q, 2.3969588133564113, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.9719188966742385, 3);
  sqcRYGate(q, -1.440821115683515, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5043848787583505, 5);
  sqcRYGate(q, 1.4817754215602577, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.929304335207246, 5);
  sqcRYGate(q, -0.8722976907066601, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.9096750598909598, 0);
  sqcRYGate(q, -2.0798674202538803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7838299475493438, 0);
  sqcRYGate(q, 1.8881897491526711, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4710643651793603, 2);
  sqcRYGate(q, -1.5000511189188999, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06554671017655522, 2);
  sqcRYGate(q, 1.7457271077892447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.286999142324599, 4);
  sqcRYGate(q, -1.0631355945323513, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0576317549736896, 4);
  sqcRYGate(q, -2.5134030789489956, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3545253299875997, 6);
  sqcRYGate(q, -1.8636063851261917, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8100329826049086, 6);
  sqcRYGate(q, 2.8928880184008365, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0005001026684104, 0);
  sqcRYGate(q, -1.7856603877650503, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.826122814367249, 0);
  sqcRYGate(q, 0.6689973199411668, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.39321954808965826, 2);
  sqcRYGate(q, 1.513639511602742, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.006743537000193, 2);
  sqcRYGate(q, -1.2230602582824859, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3418695947644563, 4);
  sqcRYGate(q, 2.5949901319507247, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.4427872265659634, 4);
  sqcRYGate(q, 0.6061225092458731, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.6462512532006081, 1);
  sqcRYGate(q, 2.2251885081002745, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.187774895259266, 1);
  sqcRYGate(q, -0.965496181140588, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9437675033673185, 3);
  sqcRYGate(q, -1.1896420005531745, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.2434821582198534, 3);
  sqcRYGate(q, 0.9563119817983906, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9210275468546743, 5);
  sqcRYGate(q, 2.6759030981920406, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.125800159501437, 5);
  sqcRYGate(q, 0.6371400635960023, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.35922899039458006, 0);
  sqcRYGate(q, -1.9141078114522134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.506148012933602, 0);
  sqcRYGate(q, -2.7221230872712314, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.734707227298052, 2);
  sqcRYGate(q, 0.3109460968852666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7522944292972804, 2);
  sqcRYGate(q, 1.2217103247130963, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0654110281077385, 4);
  sqcRYGate(q, 2.4018724584727686, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5390335115782667, 4);
  sqcRYGate(q, -1.0956291064650145, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1117582272894415, 6);
  sqcRYGate(q, 0.8992731321969227, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.813682165569654, 6);
  sqcRYGate(q, -2.7926547864342877, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4908099699407208, 0);
  sqcRYGate(q, 1.562603414190953, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1548895650099267, 0);
  sqcRYGate(q, -1.3293703558136982, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5635230792555691, 2);
  sqcRYGate(q, -0.28755956533058274, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.1832157658765516, 2);
  sqcRYGate(q, 0.7362180060283982, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.8975924669054414, 4);
  sqcRYGate(q, -2.519200423348733, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.5016722386284527, 4);
  sqcRYGate(q, -0.40463302323901557, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.15837859436746426, 1);
  sqcRYGate(q, 2.3463040360342022, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0383937108470773, 1);
  sqcRYGate(q, 1.8324373005831671, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7047167552194269, 3);
  sqcRYGate(q, -1.7969991360972923, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9256105191707502, 3);
  sqcRYGate(q, 0.029765141612698647, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.6923225736223211, 5);
  sqcRYGate(q, 0.6403983884038938, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8259205354207655, 5);
  sqcRYGate(q, -0.32547281868427547, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.5847093533961925, 0);
  sqcRYGate(q, -2.069177127916577, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9468885068114432, 0);
  sqcRYGate(q, 1.8643711803291803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2128915932725155, 2);
  sqcRYGate(q, -1.4080161874463526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2836408209643653, 2);
  sqcRYGate(q, -0.7262246016596681, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.951769251871827, 4);
  sqcRYGate(q, -1.3747567621847683, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.810720462755439, 4);
  sqcRYGate(q, 0.8454918150698543, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7595355764017864, 6);
  sqcRYGate(q, -0.801125525171783, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0972841906036441, 6);
  sqcRYGate(q, 0.3809247955217009, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.900831058758878, 0);
  sqcRYGate(q, 1.92050548831552, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.858632783372304, 0);
  sqcRYGate(q, -0.07040187218217664, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6536186668351345, 2);
  sqcRYGate(q, -0.19163607166543972, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.2981837850906266, 2);
  sqcRYGate(q, -2.072481623810953, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7914796582023405, 4);
  sqcRYGate(q, -1.6879698130697494, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.1353047318969693, 4);
  sqcRYGate(q, -2.828997717639015, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.036085146886907754, 1);
  sqcRYGate(q, -0.09635437292090643, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8637093971829812, 1);
  sqcRYGate(q, 2.773764845893563, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0810587978164063, 3);
  sqcRYGate(q, 2.8550257078713064, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6282434756450899, 3);
  sqcRYGate(q, 1.319274539405752, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.1308669957888089, 5);
  sqcRYGate(q, -2.0433710561525347, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.06018328240088, 5);
  sqcRYGate(q, -1.8543839459581324, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.43131371713571415, 0);
  sqcRYGate(q, 0.6659842731911432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5184982351530785, 0);
  sqcRYGate(q, -1.0520272176668817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.246067878080453, 2);
  sqcRYGate(q, -1.3599137977899753, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1315012066680847, 2);
  sqcRYGate(q, 0.800605314888352, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.026064558067997012, 4);
  sqcRYGate(q, 2.731794742497865, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.028150606265337396, 4);
  sqcRYGate(q, 2.2050748141751835, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4286144296301417, 6);
  sqcRYGate(q, 1.249702312758035, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.26443569454067983, 6);
  sqcRYGate(q, -1.639992850176986, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7287024397257493, 0);
  sqcRYGate(q, 1.424475141983943, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.26238832807839246, 0);
  sqcRYGate(q, -2.7500900166621896, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.434410036721775, 2);
  sqcRYGate(q, -1.9551195031132356, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0180218590360965, 2);
  sqcRYGate(q, -1.9039491987650234, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.3023654825871623, 4);
  sqcRYGate(q, 1.7398022028214513, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.6387833893515984, 4);
  sqcRYGate(q, -1.55462846872185, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.8786900496086267, 1);
  sqcRYGate(q, -2.615313445653161, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0990321180499798, 1);
  sqcRYGate(q, 1.0854323049877586, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8747840162473213, 3);
  sqcRYGate(q, -0.5338251921119221, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.09936700038641207, 3);
  sqcRYGate(q, -2.322001885394645, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3680932084535735, 5);
  sqcRYGate(q, 2.5930480799521822, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.6810748317642521, 5);
  sqcRYGate(q, 2.5815400966071596, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.7627796725303203, 0);
  sqcRYGate(q, -1.4215792445300328, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0842569090236376, 0);
  sqcRYGate(q, 1.3939129278327158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.19218461664199699, 2);
  sqcRYGate(q, -2.1470800903098795, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8956125267175103, 2);
  sqcRYGate(q, 2.7184380757504645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.270070367144325, 4);
  sqcRYGate(q, -1.7544509319114703, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1350506115891001, 4);
  sqcRYGate(q, 2.3234917905356456, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.626547527486927, 6);
  sqcRYGate(q, 2.0561130584436196, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.655117517876052, 6);
  sqcRYGate(q, 1.010747195193952, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.305253861277267, 0);
  sqcRYGate(q, 1.3154474250235033, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.458989085584441, 0);
  sqcRYGate(q, -2.047403582815571, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8114480040785299, 2);
  sqcRYGate(q, 1.2734579477116057, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9339558111197044, 2);
  sqcRYGate(q, 2.8514475037842453, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1027258442476398, 4);
  sqcRYGate(q, -0.3894949670795471, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.1608205536481293, 4);
  sqcRYGate(q, 1.1835863573838092, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5102758761694285, 1);
  sqcRYGate(q, 0.5473640737220073, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6154826870451853, 1);
  sqcRYGate(q, 1.3357917737963811, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6321552056234383, 3);
  sqcRYGate(q, 3.0956356588789617, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.2889274228018595, 3);
  sqcRYGate(q, 1.2889506885812407, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.4384354011365037, 5);
  sqcRYGate(q, 2.6028869998167248, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.2562230163029673, 5);
  sqcRYGate(q, 2.5053629129735873, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.48895710059375863, 0);
  sqcRYGate(q, -2.491407882094754, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12197299153827855, 0);
  sqcRYGate(q, 2.3009134467363404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6685360019963317, 2);
  sqcRYGate(q, 2.6288648640769763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4594697648552093, 2);
  sqcRYGate(q, 1.3637591460579046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3291475574845962, 4);
  sqcRYGate(q, -1.452067198425316, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0183920689915347, 4);
  sqcRYGate(q, 2.724806074858734, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1413986148531478, 6);
  sqcRYGate(q, 1.576839394830512, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.66784526729863, 6);
  sqcRYGate(q, -2.460542575336147, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.028897848656982, 0);
  sqcRYGate(q, 0.7749062480320267, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4665680376078951, 0);
  sqcRYGate(q, -1.6026214296252563, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9926979211881433, 2);
  sqcRYGate(q, 2.516219175328161, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.656535407323835, 2);
  sqcRYGate(q, 1.4807832858275425, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.07367634902163811, 4);
  sqcRYGate(q, 0.47524601375159836, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.04594800604014254, 4);
  sqcRYGate(q, -2.0483366358427597, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2326850497621553, 1);
  sqcRYGate(q, -3.1293805306292306, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.705232138343427, 1);
  sqcRYGate(q, -2.048731349598077, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.776436072279117, 3);
  sqcRYGate(q, 1.981940180369823, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9039760996767414, 3);
  sqcRYGate(q, -2.9811538031803484, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.642859460098932, 5);
  sqcRYGate(q, 1.6530684039962553, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.25220734812867557, 5);
  sqcRYGate(q, 1.5741439484614344, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5313936584246228, 0);
  sqcRYGate(q, 0.771237714535637, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6868201891756642, 0);
  sqcRYGate(q, 1.7063611447763396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.14755737635443378, 2);
  sqcRYGate(q, -0.7931215616482702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1132318792118463, 2);
  sqcRYGate(q, -2.380346917020175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.848884043484962, 4);
  sqcRYGate(q, -0.4829694522136672, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.054084700398399, 4);
  sqcRYGate(q, 3.121038960753726, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9047211357082547, 6);
  sqcRYGate(q, -1.4270271917952368, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3412113089301672, 6);
  sqcRYGate(q, 0.4354150053113421, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.954166549287098, 0);
  sqcRYGate(q, 1.9870344950199266, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.10499522552991004, 0);
  sqcRYGate(q, 0.436671780432234, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3804012210106045, 2);
  sqcRYGate(q, -1.433382707314021, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.2532857605079935, 2);
  sqcRYGate(q, 0.41066932834620473, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0776839933036353, 4);
  sqcRYGate(q, -1.1769718962584526, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.9069192947787695, 4);
  sqcRYGate(q, -3.019435520462228, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.30319808120599845, 1);
  sqcRYGate(q, -0.11278175896477378, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1804372947234447, 1);
  sqcRYGate(q, 0.7126831210511675, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.48792062216302856, 3);
  sqcRYGate(q, 2.996958935921706, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7491914998159626, 3);
  sqcRYGate(q, 2.1548812618965085, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.1846791076192593, 5);
  sqcRYGate(q, 1.209736962862915, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.2286631718852279, 5);
  sqcRYGate(q, 2.1913538640745047, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.626650576765921, 0);
  sqcRYGate(q, -1.7294442348306818, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.46609581778590475, 0);
  sqcRYGate(q, 1.0596446625439122, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.037612098008594, 2);
  sqcRYGate(q, 1.347153999149814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2361001077635425, 2);
  sqcRYGate(q, 1.576369241328707, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1327172302945825, 4);
  sqcRYGate(q, -0.7558307348476584, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0071482359851673, 4);
  sqcRYGate(q, 2.1700447266576752, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8623161145749565, 6);
  sqcRYGate(q, 2.2767827117288224, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.017725408108614, 6);
  sqcRYGate(q, -2.960051844234383, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.644270788443774, 0);
  sqcRYGate(q, 2.7538472037864894, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.981931813166212, 0);
  sqcRYGate(q, -3.0430063006028547, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1190964887541135, 2);
  sqcRYGate(q, -0.6833747853837904, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.5050581733672992, 2);
  sqcRYGate(q, 1.8488685795835087, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4523215621033785, 4);
  sqcRYGate(q, 2.091367067449634, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.005081694304058, 4);
  sqcRYGate(q, 0.32153220133575433, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4315276591351644, 1);
  sqcRYGate(q, 0.9667272015018016, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.17137155963573747, 1);
  sqcRYGate(q, 2.4722921535266718, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2400566233249892, 3);
  sqcRYGate(q, 2.821304415195447, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.899751911289135, 3);
  sqcRYGate(q, 1.455021810975584, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.335287883276734, 5);
  sqcRYGate(q, -2.0033029414665062, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8283910715741944, 5);
  sqcRYGate(q, -0.15313426924169385, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.3525463846004639, 0);
  sqcRYGate(q, -0.47459757973074534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.358765681448501, 0);
  sqcRYGate(q, 1.3142928599760302, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.32986510186787, 2);
  sqcRYGate(q, -0.8309292584977972, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.110156676930662, 2);
  sqcRYGate(q, 1.5110057647580513, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2081441312383765, 4);
  sqcRYGate(q, -0.42173943720886103, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3521851501487414, 4);
  sqcRYGate(q, -3.1322080568042105, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2431481752606723, 6);
  sqcRYGate(q, -0.541839815942968, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3563922023161274, 6);
  sqcRYGate(q, -1.0615943316522534, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8134180090322387, 0);
  sqcRYGate(q, 2.0578627080294165, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6430231548519103, 0);
  sqcRYGate(q, -0.35315744162720275, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.45883800242271, 2);
  sqcRYGate(q, 1.2623370709171056, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.7597740808031377, 2);
  sqcRYGate(q, 2.445115987570811, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.32827485087043407, 4);
  sqcRYGate(q, -3.0305972836279222, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.3938665509894625, 4);
  sqcRYGate(q, 0.6386307279266471, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.9327254551903454, 1);
  sqcRYGate(q, -3.0061455473311542, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7075267212037986, 1);
  sqcRYGate(q, 1.4015364923295281, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1618990140913388, 3);
  sqcRYGate(q, -1.0064513242830995, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.07231251626166735, 3);
  sqcRYGate(q, -0.559327325446452, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6613078935564802, 5);
  sqcRYGate(q, 1.0232998506743975, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.2849702154763234, 5);
  sqcRYGate(q, 1.3003367698836112, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.6385383733203944, 0);
  sqcRYGate(q, 1.8421404175947425, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8261028639232748, 0);
  sqcRYGate(q, -0.08450969799334995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1024811941045174, 2);
  sqcRYGate(q, 1.6667571803819552, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.112711060645058, 2);
  sqcRYGate(q, 1.6525111930895617, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22195389225750262, 4);
  sqcRYGate(q, 1.622118978764107, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.124649803665439, 4);
  sqcRYGate(q, -1.8977592092163222, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7590157742576835, 6);
  sqcRYGate(q, -1.2567283450032096, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.058589652562545, 6);
  sqcRYGate(q, -1.609677494175109, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.09510679824113843, 0);
  sqcRYGate(q, 0.03144230718034801, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9764005344582651, 0);
  sqcRYGate(q, 0.1465192298110166, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9848809452520095, 2);
  sqcRYGate(q, 3.1051863303678333, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.0474622658472006, 2);
  sqcRYGate(q, 2.081067298704137, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.132250746100402, 4);
  sqcRYGate(q, 3.026898844549984, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.49260288592615087, 4);
  sqcRYGate(q, 2.3251357260072383, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.944774180753845, 1);
  sqcRYGate(q, 0.3974629252631557, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0548899036407016, 1);
  sqcRYGate(q, -0.1903603378691687, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.16071694642458464, 3);
  sqcRYGate(q, -2.106658566329413, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.6623184354216604, 3);
  sqcRYGate(q, -0.30805858855304685, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.7700409233890798, 5);
  sqcRYGate(q, 1.4424503150941503, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.2797587566848872, 5);
  sqcRYGate(q, 0.13075680131466783, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.289467284729037, 0);
  sqcRYGate(q, -0.23624301710023038, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2983910927294362, 0);
  sqcRYGate(q, -0.20562033021692372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9970968458496976, 2);
  sqcRYGate(q, 2.591160322944707, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8172574943001343, 2);
  sqcRYGate(q, -1.5124666894292202, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1361153793506995, 4);
  sqcRYGate(q, 1.7463586910172184, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0834973971855235, 4);
  sqcRYGate(q, -1.3242396780476475, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8679673147526077, 6);
  sqcRYGate(q, 1.4808900468918667, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.37838859460913526, 6);
  sqcRYGate(q, 2.867765034166962, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.578109166480273, 0);
  sqcRYGate(q, -1.3168573182239702, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.474712223186749, 0);
  sqcRYGate(q, 0.4000798237832677, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7973411841643289, 2);
  sqcRYGate(q, -2.4211846102136922, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.3749221185157796, 2);
  sqcRYGate(q, 2.6669635799159317, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9573431454222205, 4);
  sqcRYGate(q, 0.6184388698766724, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.4159222358599948, 4);
  sqcRYGate(q, -3.03671042448017, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.8918276437383107, 1);
  sqcRYGate(q, 0.8842357772007928, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6477641426817833, 1);
  sqcRYGate(q, 2.1136204061431676, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6906490923159846, 3);
  sqcRYGate(q, -0.3790328473073904, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9725516351264, 3);
  sqcRYGate(q, -1.4120244020898305, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.000643592590764, 5);
  sqcRYGate(q, -0.6059341897052164, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5471082974146091, 5);
  sqcRYGate(q, -1.5439881563079814, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7506424768319395, 0);
  sqcRYGate(q, -2.2557774873733347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.301426969140568, 0);
  sqcRYGate(q, -2.7774501671288676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.16770580246972705, 2);
  sqcRYGate(q, 2.4585319939049857, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.16999357117651126, 2);
  sqcRYGate(q, 1.9454310754209283, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5707961790823823, 4);
  sqcRYGate(q, -1.5088191693094535, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7323872532088913, 4);
  sqcRYGate(q, -2.476554083011918, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9381303289591787, 6);
  sqcRYGate(q, 1.6267632944403774, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6074117442537244, 6);
  sqcRYGate(q, 0.16637978503657624, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.640775719652497, 0);
  sqcRYGate(q, -1.5633457551107437, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4673766719282855, 0);
  sqcRYGate(q, -0.7988009678199921, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9934665891844091, 2);
  sqcRYGate(q, -0.30821445424627836, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.38438818855104534, 2);
  sqcRYGate(q, 2.034891821284633, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1099728042313193, 4);
  sqcRYGate(q, 0.9995027863415875, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.0418250398043147, 4);
  sqcRYGate(q, -2.2184116347968392, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5322067173426468, 1);
  sqcRYGate(q, -3.06463728400416, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.32107415267654854, 1);
  sqcRYGate(q, -1.6809715084381391, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7420772828065517, 3);
  sqcRYGate(q, 1.724979037920753, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.142382022891372, 3);
  sqcRYGate(q, -0.9719309421321566, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.9047188156627444, 5);
  sqcRYGate(q, -1.9430326437701233, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.580858682211639, 5);
  sqcRYGate(q, -0.3605000659368693, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.554138884620754, 0);
  sqcRYGate(q, -1.9497770034519997, 1);
  sqcRYGate(q, 0.9842158019046578, 2);
  sqcRYGate(q, -1.0574630790346031, 3);
  sqcRYGate(q, 2.0986340913676793, 4);
  sqcRYGate(q, 2.3309262176123093, 5);
  sqcRYGate(q, -2.7738806885045224, 6);
  sqcRYGate(q, 2.0419194485731804, 7);

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
