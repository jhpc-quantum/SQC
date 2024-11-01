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

  sqcRYGate(q, 0.7984270210753595, 0);
  sqcRZGate(q, -1.998518881221887, 0);
  sqcRYGate(q, -0.0428643616769006, 1);
  sqcRZGate(q, 1.4735025296117736, 1);
  sqcRYGate(q, 0.9521409159166367, 2);
  sqcRZGate(q, 2.354716569845459, 2);
  sqcRYGate(q, -2.6110159637979673, 3);
  sqcRZGate(q, 0.20631746434323794, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.36786187553746097, 0);
  sqcRZGate(q, -2.8239877998075897, 0);
  sqcRYGate(q, 1.9104979379256217, 1);
  sqcRZGate(q, 0.8027563710383668, 1);
  sqcRYGate(q, -0.18181602975569433, 2);
  sqcRZGate(q, -0.4747438280925786, 2);
  sqcRYGate(q, -0.6479109316323821, 3);
  sqcRZGate(q, 2.6044304678706407, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.12068649383978088, 0);
  sqcRZGate(q, -1.681924888852909, 0);
  sqcRYGate(q, -0.32073389487302717, 1);
  sqcRZGate(q, 2.8669888393761105, 1);
  sqcRYGate(q, 1.599544188870575, 2);
  sqcRZGate(q, -1.6439416924791717, 2);
  sqcRYGate(q, 0.27548622741457507, 3);
  sqcRZGate(q, -2.788275224309072, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1377617302357903, 0);
  sqcRZGate(q, 0.5162579471457194, 0);
  sqcRYGate(q, -2.441961714182918, 1);
  sqcRZGate(q, 2.9038937506658864, 1);
  sqcRYGate(q, 1.0710636781551344, 2);
  sqcRZGate(q, 1.783158370505776, 2);
  sqcRYGate(q, 2.572651416360305, 3);
  sqcRZGate(q, 1.0665573091616696, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.100387631008986, 0);
  sqcRZGate(q, -2.4232804398216232, 0);
  sqcRYGate(q, 0.21329662064463517, 1);
  sqcRZGate(q, 2.7311350386084374, 1);
  sqcRYGate(q, -2.679967421289217, 2);
  sqcRZGate(q, 1.7427496928374133, 2);
  sqcRYGate(q, -1.932807353985704, 3);
  sqcRZGate(q, 0.19397813566674668, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7990721495534885, 0);
  sqcRZGate(q, 1.4105140743901696, 0);
  sqcRYGate(q, -1.9406554018474065, 1);
  sqcRZGate(q, -2.3691870672795052, 1);
  sqcRYGate(q, 0.6548236113868706, 2);
  sqcRZGate(q, -2.1797811573329957, 2);
  sqcRYGate(q, 0.253284281795251, 3);
  sqcRZGate(q, 0.32726115636185343, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.020037397274549, 0);
  sqcRZGate(q, -0.0727304437934917, 0);
  sqcRYGate(q, 0.5050657645719869, 1);
  sqcRZGate(q, -0.5008635607469538, 1);
  sqcRYGate(q, 0.7429452380701891, 2);
  sqcRZGate(q, -1.49928437298097, 2);
  sqcRYGate(q, -2.6447743884888086, 3);
  sqcRZGate(q, -2.2019806821488874, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.076004095794281, 0);
  sqcRZGate(q, 0.02850357740592102, 0);
  sqcRYGate(q, 3.1000340406137963, 1);
  sqcRZGate(q, 1.0400880535681516, 1);
  sqcRYGate(q, -0.6914538533795047, 2);
  sqcRZGate(q, -1.9398908928506458, 2);
  sqcRYGate(q, 0.46116497362755826, 3);
  sqcRZGate(q, -1.3543338223333652, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.610383433210007, 0);
  sqcRZGate(q, 1.2521933732628252, 0);
  sqcRYGate(q, -0.9904635355971454, 1);
  sqcRZGate(q, 1.1938249790463296, 1);
  sqcRYGate(q, -1.8393765617731723, 2);
  sqcRZGate(q, 1.0342585421063948, 2);
  sqcRYGate(q, -2.034323598192452, 3);
  sqcRZGate(q, 1.6029372902233379, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4923628686473134, 0);
  sqcRZGate(q, -1.7786909053678075, 0);
  sqcRYGate(q, 0.5027580093113473, 1);
  sqcRZGate(q, -1.2787421734896727, 1);
  sqcRYGate(q, 2.060870851551995, 2);
  sqcRZGate(q, -2.6670312491186667, 2);
  sqcRYGate(q, -0.00816738653517534, 3);
  sqcRZGate(q, -1.3806802942787684, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2654571600114937, 0);
  sqcRZGate(q, 0.8775484836267488, 0);
  sqcRYGate(q, -2.6455802471984553, 1);
  sqcRZGate(q, -2.3003800986573277, 1);
  sqcRYGate(q, 0.6195319031648596, 2);
  sqcRZGate(q, 0.7688350411956755, 2);
  sqcRYGate(q, 2.647382706991261, 3);
  sqcRZGate(q, -2.6009174922136444, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.09437001644297033, 0);
  sqcRZGate(q, -0.13873406028147175, 0);
  sqcRYGate(q, -1.4819340020048628, 1);
  sqcRZGate(q, 0.13853592867659792, 1);
  sqcRYGate(q, -0.5646179504064008, 2);
  sqcRZGate(q, 0.9131720620998784, 2);
  sqcRYGate(q, 2.0183891245297305, 3);
  sqcRZGate(q, 2.065980131912548, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3539817233030984, 0);
  sqcRZGate(q, 2.021918918719355, 0);
  sqcRYGate(q, 1.62312095332204, 1);
  sqcRZGate(q, 0.19897159699712222, 1);
  sqcRYGate(q, -2.2964626824751044, 2);
  sqcRZGate(q, -3.137303096953274, 2);
  sqcRYGate(q, 1.4051267790951187, 3);
  sqcRZGate(q, -2.570619547272377, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9986461830013953, 0);
  sqcRZGate(q, -0.8431863166496348, 0);
  sqcRYGate(q, -1.0438336514809972, 1);
  sqcRZGate(q, 0.184131508742155, 1);
  sqcRYGate(q, 0.8185382917883807, 2);
  sqcRZGate(q, 0.44117932547314026, 2);
  sqcRYGate(q, 2.2642349478506896, 3);
  sqcRZGate(q, -3.1048375889036253, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.4238586484215956, 0);
  sqcRZGate(q, -1.1655336596081614, 0);
  sqcRYGate(q, -2.0104743987741984, 1);
  sqcRZGate(q, -1.2603285332278917, 1);
  sqcRYGate(q, -2.3448702818220086, 2);
  sqcRZGate(q, 0.9689330238427214, 2);
  sqcRYGate(q, 0.6358074459694925, 3);
  sqcRZGate(q, 2.802722101622403, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.995775761658504, 0);
  sqcRZGate(q, 0.8372567035499747, 0);
  sqcRYGate(q, -2.0151102997962864, 1);
  sqcRZGate(q, -1.6661164339873276, 1);
  sqcRYGate(q, -0.3901095852260994, 2);
  sqcRZGate(q, -1.6159829047621974, 2);
  sqcRYGate(q, -0.13609356225399963, 3);
  sqcRZGate(q, -0.7958353906803295, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2012251638571274, 0);
  sqcRZGate(q, 0.39738071627563176, 0);
  sqcRYGate(q, 0.1982747945882085, 1);
  sqcRZGate(q, 2.1085488763545017, 1);
  sqcRYGate(q, -0.5348809679456803, 2);
  sqcRZGate(q, -1.6588862735784724, 2);
  sqcRYGate(q, 1.2227581423598703, 3);
  sqcRZGate(q, 1.3158201239904632, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.92803358246449, 0);
  sqcRZGate(q, -2.9831146937749087, 0);
  sqcRYGate(q, 2.2213348684564833, 1);
  sqcRZGate(q, -1.0576336855735144, 1);
  sqcRYGate(q, 2.484938233787127, 2);
  sqcRZGate(q, 0.2710823493700492, 2);
  sqcRYGate(q, -2.1983472440298044, 3);
  sqcRZGate(q, -0.337944528136779, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.89388406963689, 0);
  sqcRZGate(q, -2.8264613678342925, 0);
  sqcRYGate(q, 0.5474791228243127, 1);
  sqcRZGate(q, -0.7944880209977195, 1);
  sqcRYGate(q, -2.800588083381477, 2);
  sqcRZGate(q, 2.6025906215255437, 2);
  sqcRYGate(q, -2.014630689946255, 3);
  sqcRZGate(q, 2.0382303806254227, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8816573377283996, 0);
  sqcRZGate(q, -2.538109013287632, 0);
  sqcRYGate(q, 2.589246547062503, 1);
  sqcRZGate(q, 2.0223791831015365, 1);
  sqcRYGate(q, -0.8899667670189662, 2);
  sqcRZGate(q, -1.5958704787613496, 2);
  sqcRYGate(q, 3.0463403019195066, 3);
  sqcRZGate(q, -0.8083305078419218, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1767059881232624, 0);
  sqcRZGate(q, 2.1140556850722554, 0);
  sqcRYGate(q, -2.7388916753849943, 1);
  sqcRZGate(q, -2.155610329594853, 1);
  sqcRYGate(q, -0.9214726673723295, 2);
  sqcRZGate(q, -1.7197477000566312, 2);
  sqcRYGate(q, 2.001368894340377, 3);
  sqcRZGate(q, -0.35279341028915756, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3126041136066693, 0);
  sqcRZGate(q, -2.4749081844631804, 0);
  sqcRYGate(q, 1.2176351543662385, 1);
  sqcRZGate(q, 0.09592941938601073, 1);
  sqcRYGate(q, -2.220147338483004, 2);
  sqcRZGate(q, 2.8821160158782333, 2);
  sqcRYGate(q, 0.5849358447740229, 3);
  sqcRZGate(q, 0.10551385789263826, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6412337780529559, 0);
  sqcRZGate(q, 2.0061393461630406, 0);
  sqcRYGate(q, 2.4153658747999605, 1);
  sqcRZGate(q, -2.590004284536009, 1);
  sqcRYGate(q, 3.1054967312547324, 2);
  sqcRZGate(q, 1.8621582108765296, 2);
  sqcRYGate(q, -0.9841134409215945, 3);
  sqcRZGate(q, 1.0433824448323124, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.030509820457621576, 0);
  sqcRZGate(q, -0.033859145380647604, 0);
  sqcRYGate(q, -0.5432864624629, 1);
  sqcRZGate(q, 1.2171728055059194, 1);
  sqcRYGate(q, -2.319336766549521, 2);
  sqcRZGate(q, 1.0262899005728032, 2);
  sqcRYGate(q, -0.20728882975115592, 3);
  sqcRZGate(q, -1.460365970360623, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8393139820921038, 0);
  sqcRZGate(q, -2.9807068047748455, 0);
  sqcRYGate(q, 2.0264438743059765, 1);
  sqcRZGate(q, 0.010171042430645373, 1);
  sqcRYGate(q, -3.0288940383600873, 2);
  sqcRZGate(q, -1.4303146712600894, 2);
  sqcRYGate(q, -0.09023299759842729, 3);
  sqcRZGate(q, -2.988738858100129, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4487661161344494, 0);
  sqcRZGate(q, -2.3581013195472043, 0);
  sqcRYGate(q, 0.29281598811825515, 1);
  sqcRZGate(q, 0.8661097333581322, 1);
  sqcRYGate(q, 2.005190422456696, 2);
  sqcRZGate(q, 1.54683885815155, 2);
  sqcRYGate(q, 2.0103218937576717, 3);
  sqcRZGate(q, 1.5030017411609071, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5529105242088787, 0);
  sqcRZGate(q, 0.34947891286151916, 0);
  sqcRYGate(q, 0.8653972920501571, 1);
  sqcRZGate(q, 2.302564315954403, 1);
  sqcRYGate(q, 0.14864489759557542, 2);
  sqcRZGate(q, 0.6916814065929326, 2);
  sqcRYGate(q, 2.4561344899830293, 3);
  sqcRZGate(q, 0.44396997069429117, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.459651177871554, 0);
  sqcRZGate(q, -2.4475466826589387, 0);
  sqcRYGate(q, 0.41598928942589275, 1);
  sqcRZGate(q, 2.226713878351685, 1);
  sqcRYGate(q, 2.8957504854571026, 2);
  sqcRZGate(q, 1.3896637487297143, 2);
  sqcRYGate(q, 2.4025400513949156, 3);
  sqcRZGate(q, 0.6041717355743783, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5617766208522794, 0);
  sqcRZGate(q, 2.6465689566693293, 0);
  sqcRYGate(q, 1.0217071026496267, 1);
  sqcRZGate(q, -1.9645028064142602, 1);
  sqcRYGate(q, 0.08048015081828391, 2);
  sqcRZGate(q, 2.4171165622702695, 2);
  sqcRYGate(q, -1.2389389433805014, 3);
  sqcRZGate(q, -0.14368205048013702, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6022926136781295, 0);
  sqcRZGate(q, -1.3397682565994788, 0);
  sqcRYGate(q, -1.3335552206647572, 1);
  sqcRZGate(q, 2.36158611032191, 1);
  sqcRYGate(q, 0.623796741288575, 2);
  sqcRZGate(q, 2.7151889132476708, 2);
  sqcRYGate(q, -0.6263419014162652, 3);
  sqcRZGate(q, -3.1333522994649856, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.350453910137453, 0);
  sqcRZGate(q, 1.568766764494214, 0);
  sqcRYGate(q, -1.13311984328794, 1);
  sqcRZGate(q, 0.6321987325655704, 1);
  sqcRYGate(q, 0.9921404844145721, 2);
  sqcRZGate(q, 2.3886480521804527, 2);
  sqcRYGate(q, 2.7200587744572933, 3);
  sqcRZGate(q, 1.5330010959244618, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3160270363944566, 0);
  sqcRZGate(q, 1.6465092058016904, 0);
  sqcRYGate(q, -1.6629902705517965, 1);
  sqcRZGate(q, -0.43756876745327755, 1);
  sqcRYGate(q, -3.090682185234298, 2);
  sqcRZGate(q, -2.8757648731130994, 2);
  sqcRYGate(q, -0.9617542684715875, 3);
  sqcRZGate(q, 0.9475399877797058, 3);

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
