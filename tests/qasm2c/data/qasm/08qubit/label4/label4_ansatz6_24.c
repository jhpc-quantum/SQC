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

  sqcRYGate(q, -1.632780892481354, 0);
  sqcRYGate(q, 2.7325134936968247, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.944773998723199, 0);
  sqcRYGate(q, -2.968830883322912, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.79744983440049, 1);
  sqcRYGate(q, -0.036902209781094264, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.429138689107736, 1);
  sqcRYGate(q, 1.6936946077042514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9714057107845107, 2);
  sqcRYGate(q, -2.2537129594970065, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.72595669309161, 2);
  sqcRYGate(q, -1.5828921516784014, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4439308100510884, 3);
  sqcRYGate(q, -2.0275404552684204, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9828258597963035, 3);
  sqcRYGate(q, 1.5041665950817271, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5162568722180172, 4);
  sqcRYGate(q, -2.4783444395641965, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0814820469257036, 4);
  sqcRYGate(q, -0.2552019195281101, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6191566733835825, 5);
  sqcRYGate(q, 0.7922278146277667, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1694493402325987, 5);
  sqcRYGate(q, 0.3607064370333718, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7982683289152248, 6);
  sqcRYGate(q, -2.8907205242828415, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.256651091969304, 6);
  sqcRYGate(q, -1.8125401110718418, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3825953279758112, 0);
  sqcRYGate(q, 0.42947118558991115, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.339790423165237, 0);
  sqcRYGate(q, 1.164583803986718, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.349101334121715, 1);
  sqcRYGate(q, -2.8429995055010715, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.588120478672197, 1);
  sqcRYGate(q, 2.902570514059705, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3652071045515823, 2);
  sqcRYGate(q, 0.6586851949971311, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.290086404464923, 2);
  sqcRYGate(q, 1.2696071684456767, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5306628164657154, 3);
  sqcRYGate(q, 1.9538713051382877, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.602756200698247, 3);
  sqcRYGate(q, -0.9051953308763797, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9402488949704981, 4);
  sqcRYGate(q, -1.3331669916119013, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2361524623655815, 4);
  sqcRYGate(q, 0.9415753991507652, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.118834188930638, 5);
  sqcRYGate(q, 1.7538299398047874, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4078162152498133, 5);
  sqcRYGate(q, 2.3643695611646898, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6813659521160185, 6);
  sqcRYGate(q, 1.3219984826631808, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.420708217443162, 6);
  sqcRYGate(q, -0.32275789782766745, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.232653599204185, 0);
  sqcRYGate(q, 1.1156211796050108, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1758332647644423, 0);
  sqcRYGate(q, -3.1128340419343954, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.27732275624203945, 1);
  sqcRYGate(q, -1.6052431086856054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1581844201440785, 1);
  sqcRYGate(q, -2.9466727210801587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.19525141935187545, 2);
  sqcRYGate(q, 2.095448952354862, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.419193019740782, 2);
  sqcRYGate(q, -1.7427713244031016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8606071116786538, 3);
  sqcRYGate(q, 0.5168679762462443, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.273548169747186, 3);
  sqcRYGate(q, 0.8354445242652035, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5096510259634393, 4);
  sqcRYGate(q, 1.46131753753721, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.42414564855652515, 4);
  sqcRYGate(q, -1.6278109105483596, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3303556346532988, 5);
  sqcRYGate(q, 1.6359200317527336, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6654363011286621, 5);
  sqcRYGate(q, -1.0780941515372326, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8059610273196753, 6);
  sqcRYGate(q, 2.996672230764292, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.40087951603891003, 6);
  sqcRYGate(q, -0.9838330793398518, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6980763559122398, 0);
  sqcRYGate(q, 0.9494389521947033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.130354419285748, 0);
  sqcRYGate(q, -2.327669155243087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20484691010121145, 1);
  sqcRYGate(q, -1.8568962490662855, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4663480166794294, 1);
  sqcRYGate(q, -1.5470068711096474, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5846279269445327, 2);
  sqcRYGate(q, 2.7835212844010875, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5070095571510176, 2);
  sqcRYGate(q, 0.2456362755131161, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8986107812806404, 3);
  sqcRYGate(q, -2.3310068517204914, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8608712057650925, 3);
  sqcRYGate(q, 0.12871684692803154, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.97971906265966, 4);
  sqcRYGate(q, 1.6789888559259463, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6819091112505126, 4);
  sqcRYGate(q, 2.8784163151092823, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.10435501457849838, 5);
  sqcRYGate(q, 0.08151890822705136, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1937102128026824, 5);
  sqcRYGate(q, 0.5363742245572408, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.35647492852945284, 6);
  sqcRYGate(q, 1.559118904769083, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.725308742420413, 6);
  sqcRYGate(q, -2.457056743173252, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0009776258628196, 0);
  sqcRYGate(q, -0.6532786684490643, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.122572842090164, 0);
  sqcRYGate(q, 2.8746570647192864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.139300090584273, 1);
  sqcRYGate(q, -0.5855278866976537, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1544230183340547, 1);
  sqcRYGate(q, 0.9696873017241767, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7526170242731736, 2);
  sqcRYGate(q, -0.2295126193282142, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9419147674186021, 2);
  sqcRYGate(q, 3.0054716462408018, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.323040390843442, 3);
  sqcRYGate(q, 0.6950391052067203, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6051474671191026, 3);
  sqcRYGate(q, -0.4346158797601527, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3909338787739958, 4);
  sqcRYGate(q, 3.0643648775203958, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2717629842380025, 4);
  sqcRYGate(q, 1.7809210469516346, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6229733672698057, 5);
  sqcRYGate(q, 0.37977120258649305, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9405991750737543, 5);
  sqcRYGate(q, -2.6771867550367143, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9715056094116865, 6);
  sqcRYGate(q, -1.2692852972372668, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.05325582752638347, 6);
  sqcRYGate(q, -3.0729431390215707, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9988799921878142, 0);
  sqcRYGate(q, 1.118229203125101, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9867236709985643, 0);
  sqcRYGate(q, -0.3842814970253831, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.728192109838774, 1);
  sqcRYGate(q, -2.0218042769005926, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7150341319086588, 1);
  sqcRYGate(q, -2.198725143579516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1525072101714224, 2);
  sqcRYGate(q, -0.7393718565306621, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.638522786218883, 2);
  sqcRYGate(q, 0.3775003845404551, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3794950539704258, 3);
  sqcRYGate(q, -0.8786763538112128, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6726578047637997, 3);
  sqcRYGate(q, 0.43299315036014185, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.673517499084576, 4);
  sqcRYGate(q, 2.956322140970723, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.344690327801213, 4);
  sqcRYGate(q, 0.6045804258641201, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4853866910900972, 5);
  sqcRYGate(q, -2.6275646201392497, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9409139358181566, 5);
  sqcRYGate(q, 0.42627631266747734, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1221752451740135, 6);
  sqcRYGate(q, 0.10919106445809548, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5541821510512392, 6);
  sqcRYGate(q, -1.8312405845080981, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5731733344025383, 0);
  sqcRYGate(q, -0.7272227878983835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4818349012576975, 0);
  sqcRYGate(q, -0.7814567371996635, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11421056011822371, 1);
  sqcRYGate(q, 2.3879268533973055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1888119120812721, 1);
  sqcRYGate(q, 0.9725134014317659, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.525046759031527, 2);
  sqcRYGate(q, -2.687324699069641, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.05476235584134306, 2);
  sqcRYGate(q, 2.179402211690281, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.551676883886606, 3);
  sqcRYGate(q, -2.320017367390994, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.752897313748135, 3);
  sqcRYGate(q, -2.1078501063369597, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8170739371487379, 4);
  sqcRYGate(q, -2.136421468060222, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.115351051200061, 4);
  sqcRYGate(q, -2.084173230120678, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4982650379236562, 5);
  sqcRYGate(q, -1.671149713350074, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.335303740045893, 5);
  sqcRYGate(q, -1.537820766218083, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2582580949291007, 6);
  sqcRYGate(q, 1.6369624524348527, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.174783649229977, 6);
  sqcRYGate(q, -1.1792608934486888, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.547999085540467, 0);
  sqcRYGate(q, -0.1135512144878481, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6571159051106221, 0);
  sqcRYGate(q, 2.0412326620760517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7989514350066544, 1);
  sqcRYGate(q, -1.1505594908095256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2693841590988244, 1);
  sqcRYGate(q, 0.1238887051863573, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2039004028018523, 2);
  sqcRYGate(q, -1.6298565413683896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3536651203844543, 2);
  sqcRYGate(q, 0.916089729760915, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9981307549974021, 3);
  sqcRYGate(q, 1.6085662729973134, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1028648923356696, 3);
  sqcRYGate(q, 1.0744424108532336, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5709362937138933, 4);
  sqcRYGate(q, -0.45460745140603576, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.400503677321322, 4);
  sqcRYGate(q, -2.1015322508747536, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.27554363729185827, 5);
  sqcRYGate(q, -2.3588451570931097, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2217722247665303, 5);
  sqcRYGate(q, -2.767929659607831, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.26214937686206236, 6);
  sqcRYGate(q, 2.9193478635307186, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9260768230603231, 6);
  sqcRYGate(q, -2.9794600120978627, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.40060445870096845, 0);
  sqcRYGate(q, -1.729391094705841, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8721761622199278, 0);
  sqcRYGate(q, 0.05293496920097221, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4871545843014684, 1);
  sqcRYGate(q, 1.472973711691684, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.05057640343471892, 1);
  sqcRYGate(q, -2.148916014076792, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.400147626961482, 2);
  sqcRYGate(q, -1.677216858312823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.323923530708052, 2);
  sqcRYGate(q, 1.8242031898105306, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3664900673250902, 3);
  sqcRYGate(q, 1.7500656617825847, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7844823015515363, 3);
  sqcRYGate(q, -1.055945859533363, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9767071435029093, 4);
  sqcRYGate(q, -1.9272914435348296, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.625328316993879, 4);
  sqcRYGate(q, 1.7163829251557878, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2707740591823109, 5);
  sqcRYGate(q, 2.8999643220596045, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6677906470866519, 5);
  sqcRYGate(q, -3.064816805530756, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9417727763960202, 6);
  sqcRYGate(q, -0.2882275157094003, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3764046181399143, 6);
  sqcRYGate(q, 0.8030343498096951, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4548933639642683, 0);
  sqcRYGate(q, -0.4183663641117556, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.656327653250467, 0);
  sqcRYGate(q, -1.4236991441709, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2556844918203822, 1);
  sqcRYGate(q, 0.42862151091046563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.09985939526206167, 1);
  sqcRYGate(q, 0.40193349899834363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.817375732120282, 2);
  sqcRYGate(q, -0.5277896121812028, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.626238148858108, 2);
  sqcRYGate(q, 3.0882196531607713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9689605109646955, 3);
  sqcRYGate(q, -1.2533258386784067, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.60917613788045, 3);
  sqcRYGate(q, -0.8051044628873537, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.04628749769154794, 4);
  sqcRYGate(q, -1.1348093957240002, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.24532454425015662, 4);
  sqcRYGate(q, -0.7800687373090947, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0700289179176297, 5);
  sqcRYGate(q, 1.3541741747995406, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.10816430192389787, 5);
  sqcRYGate(q, 1.8601737714755195, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2233158685580352, 6);
  sqcRYGate(q, 0.3031212673618266, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.516394364181293, 6);
  sqcRYGate(q, -1.9047459352121994, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1503568261276909, 0);
  sqcRYGate(q, -1.3761260962473425, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.197109675984426, 0);
  sqcRYGate(q, 2.617169030889988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.809187292599451, 1);
  sqcRYGate(q, -2.7530519725039464, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.044004587777955254, 1);
  sqcRYGate(q, 2.5538466623747094, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4531649522815306, 2);
  sqcRYGate(q, 0.8291870993589574, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.25434360084089835, 2);
  sqcRYGate(q, 0.06171868322074627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7578440886989997, 3);
  sqcRYGate(q, -2.409410328569211, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0835874342756333, 3);
  sqcRYGate(q, -0.9050494114174413, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.283053068030667, 4);
  sqcRYGate(q, -0.9528817439595691, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5901849468999819, 4);
  sqcRYGate(q, 1.2741458163331025, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1289125430014284, 5);
  sqcRYGate(q, 0.5084326666244723, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3970285907832003, 5);
  sqcRYGate(q, -1.093524639823774, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.16114162013522415, 6);
  sqcRYGate(q, -2.5307678953099124, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5464495753038756, 6);
  sqcRYGate(q, -1.90701100056133, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2490724580239494, 0);
  sqcRYGate(q, 2.4705039171682737, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2410045745044163, 0);
  sqcRYGate(q, 1.2746364520442732, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3399500691174655, 1);
  sqcRYGate(q, -0.22883300604565202, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.23152455296345664, 1);
  sqcRYGate(q, 3.116591875628037, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.35501235912766, 2);
  sqcRYGate(q, -2.654746701379882, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7981131806419217, 2);
  sqcRYGate(q, 3.0016039057966744, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.268978871960255, 3);
  sqcRYGate(q, -0.8101761892015542, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.876566489382164, 3);
  sqcRYGate(q, 1.40629357018173, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7024104452495497, 4);
  sqcRYGate(q, 1.2436933532659404, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5956610622653917, 4);
  sqcRYGate(q, -1.594189641002207, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7739245457565556, 5);
  sqcRYGate(q, -0.7103087630789385, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7462186216839004, 5);
  sqcRYGate(q, -1.9457580758900141, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.073407110107072, 6);
  sqcRYGate(q, -1.4684178977370728, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0424227979658323, 6);
  sqcRYGate(q, 1.5809640142487966, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6103106673270344, 0);
  sqcRYGate(q, 2.1935143880075048, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1745999276729662, 0);
  sqcRYGate(q, -3.1078278616225736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.564037444722054, 1);
  sqcRYGate(q, 1.2644802277271578, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8262138906922923, 1);
  sqcRYGate(q, 0.8987211214858423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.45953528445512326, 2);
  sqcRYGate(q, 1.546211101100499, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.639437231776606, 2);
  sqcRYGate(q, -3.1207084175208104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4871112317460544, 3);
  sqcRYGate(q, -2.7833276847361677, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9519225198352217, 3);
  sqcRYGate(q, -1.61738772309125, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9952781376252933, 4);
  sqcRYGate(q, -1.8872287787008388, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.38169826844698546, 4);
  sqcRYGate(q, -0.357849519610661, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.490720256717195, 5);
  sqcRYGate(q, 2.9068936537700742, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8166543067696607, 5);
  sqcRYGate(q, 1.0828266129614776, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.243632130327884, 6);
  sqcRYGate(q, 0.18107722085708478, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9003581271169101, 6);
  sqcRYGate(q, -0.1589159819389554, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6904300180319296, 0);
  sqcRYGate(q, -1.5137539261316002, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.012016400125872, 0);
  sqcRYGate(q, 2.2084146807710425, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9755419738966897, 1);
  sqcRYGate(q, -2.800926080673291, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.48725941474328, 1);
  sqcRYGate(q, 2.380058244913083, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5941162464284329, 2);
  sqcRYGate(q, -0.7590796432708116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6907186511094894, 2);
  sqcRYGate(q, -1.9081637445699267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.25972201758526836, 3);
  sqcRYGate(q, 1.868323027002871, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2391965457082668, 3);
  sqcRYGate(q, 0.38971223466633304, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8951034332794467, 4);
  sqcRYGate(q, 2.192508893587453, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0157066995147046, 4);
  sqcRYGate(q, 1.2964512307526184, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.377871814072906, 5);
  sqcRYGate(q, 1.5978413318055982, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5346410272070852, 5);
  sqcRYGate(q, 2.3074765561733623, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.796199843933674, 6);
  sqcRYGate(q, -1.1380515763521402, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.417825255234827, 6);
  sqcRYGate(q, -1.6216890069719616, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2279102090198417, 0);
  sqcRYGate(q, 1.2498103059379604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.490536687697528, 0);
  sqcRYGate(q, -2.914741074057316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0987686398741991, 1);
  sqcRYGate(q, -0.12006606986909732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0307981575450818, 1);
  sqcRYGate(q, 0.6388837706893504, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4839028685316402, 2);
  sqcRYGate(q, 0.750895902393371, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.947417366065844, 2);
  sqcRYGate(q, -0.302344930590519, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.31426941377541845, 3);
  sqcRYGate(q, 0.703635828240122, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2128605016728895, 3);
  sqcRYGate(q, 2.7651412398498696, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6816316425353568, 4);
  sqcRYGate(q, 2.941566761406413, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5229460974380773, 4);
  sqcRYGate(q, 0.6287654053548871, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.127780545104091, 5);
  sqcRYGate(q, -0.36407840146971093, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4438297591728526, 5);
  sqcRYGate(q, -1.297426664818369, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3677446762988472, 6);
  sqcRYGate(q, 0.5935511552973205, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6990491665567165, 6);
  sqcRYGate(q, -1.6274694149834068, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0486335890164205, 0);
  sqcRYGate(q, -1.4088737276515542, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.372752880714871, 0);
  sqcRYGate(q, 0.16549037376968556, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4303740230699422, 1);
  sqcRYGate(q, 2.417157111989099, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0742230643832786, 1);
  sqcRYGate(q, 2.1017541854286192, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3360038651027026, 2);
  sqcRYGate(q, 0.3245481200163427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6677269238031007, 2);
  sqcRYGate(q, -1.6878024260063496, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2694802669287215, 3);
  sqcRYGate(q, 0.21037181935342453, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0382959743664975, 3);
  sqcRYGate(q, -3.1061213208230223, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3821937265602158, 4);
  sqcRYGate(q, -1.2824919141454458, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0749314459051389, 4);
  sqcRYGate(q, -0.7834935102416374, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0237243712615633, 5);
  sqcRYGate(q, 1.7590802352958335, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7448652223605157, 5);
  sqcRYGate(q, 1.4778393347841794, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4984366109762721, 6);
  sqcRYGate(q, 0.4035575751232674, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.578725311369773, 6);
  sqcRYGate(q, -2.148280023337134, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7732557368710369, 0);
  sqcRYGate(q, -1.9354043413875468, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3908599824318335, 0);
  sqcRYGate(q, 0.7261018025424981, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6120034725959461, 1);
  sqcRYGate(q, -0.12287192550113749, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5921054795641127, 1);
  sqcRYGate(q, 1.2215036524344083, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.061042146271416, 2);
  sqcRYGate(q, 1.9229166386722139, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8573096279219993, 2);
  sqcRYGate(q, 1.5735396683219918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0346239316939634, 3);
  sqcRYGate(q, -1.1379525230286538, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7328325308004044, 3);
  sqcRYGate(q, 0.08490780744876456, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.083819524105123, 4);
  sqcRYGate(q, 0.5401513259960291, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.464487692328041, 4);
  sqcRYGate(q, 3.127692695003434, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0288744624165944, 5);
  sqcRYGate(q, -1.7999234731987128, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.737447485856204, 5);
  sqcRYGate(q, 0.9171938542199591, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2427304378152504, 6);
  sqcRYGate(q, 0.27594066321874167, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7642526818726594, 6);
  sqcRYGate(q, -1.853680604608818, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8819289541469539, 0);
  sqcRYGate(q, 1.202145920113902, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.387775459103516, 0);
  sqcRYGate(q, 0.1771436217426139, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6050985089078604, 1);
  sqcRYGate(q, 0.5960408728982172, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.230383354672889, 1);
  sqcRYGate(q, -1.8540025129609736, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3061354309742206, 2);
  sqcRYGate(q, 1.5806600076718047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8640506365945653, 2);
  sqcRYGate(q, -0.9836037452968085, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9212636445647027, 3);
  sqcRYGate(q, -1.3220330553260542, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.066989137289105, 3);
  sqcRYGate(q, -2.3551076827234527, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.17314607152292003, 4);
  sqcRYGate(q, 2.528173540987411, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.825325174900521, 4);
  sqcRYGate(q, 0.25306293247972705, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0060354739472317, 5);
  sqcRYGate(q, 2.057223068294955, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.924874187664143, 5);
  sqcRYGate(q, -0.45929310073097707, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.008313483566462, 6);
  sqcRYGate(q, -2.7569276387648114, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.845463106305241, 6);
  sqcRYGate(q, 0.935384093703841, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.41441959375235626, 0);
  sqcRYGate(q, 1.7202723062623353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.426330647903372, 0);
  sqcRYGate(q, -0.023822306717169353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.656366790735211, 1);
  sqcRYGate(q, -0.30292833927639917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5315232788164828, 1);
  sqcRYGate(q, -1.458472678234239, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2476643471141, 2);
  sqcRYGate(q, -0.13409907857718914, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6339059588752827, 2);
  sqcRYGate(q, -2.411161720079854, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.29030601456457644, 3);
  sqcRYGate(q, -0.15523353331812514, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.234497410056856, 3);
  sqcRYGate(q, 1.5007212825875271, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.182812076186427, 4);
  sqcRYGate(q, -2.353170396952414, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3275606147161483, 4);
  sqcRYGate(q, -2.7914792621364035, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8281620565341802, 5);
  sqcRYGate(q, 2.497444087210182, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0540012639268204, 5);
  sqcRYGate(q, -0.8237516189008953, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0012954009795045, 6);
  sqcRYGate(q, 2.456331261401692, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.847485365761371, 6);
  sqcRYGate(q, -2.946188552828812, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.025991197034833217, 0);
  sqcRYGate(q, -1.7375845330925155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0004935142543677489, 0);
  sqcRYGate(q, -3.083904641971685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4979591901462188, 1);
  sqcRYGate(q, -0.621908583987806, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9597814787603562, 1);
  sqcRYGate(q, 3.099819625984758, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.755135226835507, 2);
  sqcRYGate(q, 0.5855106788264965, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.403257237664477, 2);
  sqcRYGate(q, 1.1459116700063614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8241852343096365, 3);
  sqcRYGate(q, 0.28237221602096607, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.719255198451239, 3);
  sqcRYGate(q, 2.4306509603546553, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6920903660014834, 4);
  sqcRYGate(q, -1.6544762225173129, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.432227146954402, 4);
  sqcRYGate(q, -2.105709523107923, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9788080907129403, 5);
  sqcRYGate(q, 2.733434296143106, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5993042450335806, 5);
  sqcRYGate(q, -0.021469050475157125, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.924292592338893, 6);
  sqcRYGate(q, 2.407174302738829, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6464500296558162, 6);
  sqcRYGate(q, -0.5915442760539238, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5077662402815244, 0);
  sqcRYGate(q, 0.7378332459108052, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.576118808778127, 0);
  sqcRYGate(q, -1.9119403681918072, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7808671242433003, 1);
  sqcRYGate(q, -0.3360204239771832, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.140788656431365, 1);
  sqcRYGate(q, 0.7292867945518834, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3710532559987219, 2);
  sqcRYGate(q, -2.351523586048379, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1376165387557178, 2);
  sqcRYGate(q, -1.0394861756379443, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.042394716081782136, 3);
  sqcRYGate(q, -0.41376277587135807, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.078440621703015, 3);
  sqcRYGate(q, -1.88511521063129, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4899721249651477, 4);
  sqcRYGate(q, 2.483568553076729, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.899889741266261, 4);
  sqcRYGate(q, -1.6962014944762736, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0948715192946672, 5);
  sqcRYGate(q, 1.576930867196916, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.100493829363506, 5);
  sqcRYGate(q, -3.0296904777204023, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8335304918073049, 6);
  sqcRYGate(q, 2.0525262202613175, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3231651461598009, 6);
  sqcRYGate(q, -2.1999188647642063, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8776033373803145, 0);
  sqcRYGate(q, 1.7921566436232323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8293327544606232, 0);
  sqcRYGate(q, 1.2670475454937034, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.953088875012068, 1);
  sqcRYGate(q, 2.390312137810926, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3405767415767418, 1);
  sqcRYGate(q, -1.8910016000203733, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8291190186226096, 2);
  sqcRYGate(q, 0.75584253146436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.711524263244426, 2);
  sqcRYGate(q, -1.9034468951474148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.34978668413687547, 3);
  sqcRYGate(q, -0.8315725013403821, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1082156559751646, 3);
  sqcRYGate(q, -2.8075271562013038, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.492319946638218, 4);
  sqcRYGate(q, 0.794025710548932, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9512897222140877, 4);
  sqcRYGate(q, -1.393261605745253, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1295574682507139, 5);
  sqcRYGate(q, -2.496267071132578, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5085468005685727, 5);
  sqcRYGate(q, -0.5397825933315606, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2662119319792282, 6);
  sqcRYGate(q, 0.664447359199438, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.10606332733928, 6);
  sqcRYGate(q, -1.8679294799447739, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7780051546923623, 0);
  sqcRYGate(q, 2.208354245911124, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3206706161050232, 0);
  sqcRYGate(q, -1.3919022325003187, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6424351252140266, 1);
  sqcRYGate(q, -2.805579298931394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2541472584906126, 1);
  sqcRYGate(q, 0.8005103938919378, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.149266860141566, 2);
  sqcRYGate(q, 2.734858403622574, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3054828078295069, 2);
  sqcRYGate(q, 0.512462106037237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7081629176539845, 3);
  sqcRYGate(q, -3.0207673899861214, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.27599157254913514, 3);
  sqcRYGate(q, -2.3886181296150926, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4458960402494796, 4);
  sqcRYGate(q, 0.8901655528657036, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4141742825099781, 4);
  sqcRYGate(q, 0.3881076774595612, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.760887608001895, 5);
  sqcRYGate(q, 0.7164127448496096, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.74463017641618, 5);
  sqcRYGate(q, -3.1354737738438865, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5887214123164766, 6);
  sqcRYGate(q, 2.5342378705801965, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2963639891650658, 6);
  sqcRYGate(q, 0.1874483414182238, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4629580563357125, 0);
  sqcRYGate(q, -2.827365599493875, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.629450971475805, 0);
  sqcRYGate(q, -2.4298780846233075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.762138773411415, 1);
  sqcRYGate(q, 0.21146424430434685, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1163157034383833, 1);
  sqcRYGate(q, 0.7405784939516554, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.613597640195334, 2);
  sqcRYGate(q, 1.5238198655933746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.970225509266215, 2);
  sqcRYGate(q, -2.836463562651608, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7973072517516337, 3);
  sqcRYGate(q, 2.6062435836887183, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7661420809061951, 3);
  sqcRYGate(q, -0.6842808540316279, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3014325813062455, 4);
  sqcRYGate(q, 0.8653483468672799, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8987710984669914, 4);
  sqcRYGate(q, 2.3507278025771385, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2155723691295242, 5);
  sqcRYGate(q, -1.855263657832558, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4335209647509375, 5);
  sqcRYGate(q, 3.0153199072511865, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.003527045783633, 6);
  sqcRYGate(q, 0.19100896214895166, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5081923739337335, 6);
  sqcRYGate(q, -1.0289742968114672, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7715145663412564, 0);
  sqcRYGate(q, -2.0156812664649175, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0921255396907963, 0);
  sqcRYGate(q, 0.17207773580303132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1294311054148558, 1);
  sqcRYGate(q, -2.068345728768407, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3731813584422383, 1);
  sqcRYGate(q, 0.4908850610522452, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3331345778193519, 2);
  sqcRYGate(q, 3.106301503659461, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1193953232384155, 2);
  sqcRYGate(q, -0.5720935248091816, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.162161157820868, 3);
  sqcRYGate(q, -2.8332950038549494, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.136273956176932, 3);
  sqcRYGate(q, 1.158201114945137, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.34402454868532134, 4);
  sqcRYGate(q, -0.8825471105436936, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9509999316802693, 4);
  sqcRYGate(q, -1.3998810443262473, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3844057311861902, 5);
  sqcRYGate(q, 0.2443799737625083, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1262117811751406, 5);
  sqcRYGate(q, 0.9948497537752621, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.93097132034953, 6);
  sqcRYGate(q, 1.803990200136435, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.996779119387072, 6);
  sqcRYGate(q, -2.8061612950361496, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7929751557240614, 0);
  sqcRYGate(q, -0.0008522672907802658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.953160728306039, 0);
  sqcRYGate(q, 0.6582994247189086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6660108933767345, 1);
  sqcRYGate(q, -1.1863952354406448, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7608052524075337, 1);
  sqcRYGate(q, -2.2997315050864766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6670366824984075, 2);
  sqcRYGate(q, 0.997065342410056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.602627434898718, 2);
  sqcRYGate(q, 0.8385441072179959, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0204770963941963, 3);
  sqcRYGate(q, 2.3166855256236216, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.944970851872033, 3);
  sqcRYGate(q, -1.0765896332083502, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.901547847269911, 4);
  sqcRYGate(q, -2.3953467103103083, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3693211054320034, 4);
  sqcRYGate(q, 0.6309160154865145, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0206093368798412, 5);
  sqcRYGate(q, 1.0709760036252072, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.811468902533333, 5);
  sqcRYGate(q, -3.131079480761822, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4992992958767553, 6);
  sqcRYGate(q, 2.5204987763633753, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4963181817871911, 6);
  sqcRYGate(q, 1.8716653741484466, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3410134853545719, 0);
  sqcRYGate(q, -1.531641306180635, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.735177392325235, 0);
  sqcRYGate(q, 0.39601371250042305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.464052449363486, 1);
  sqcRYGate(q, 2.935029220365, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4691672534436851, 1);
  sqcRYGate(q, 0.5262871140462145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0438206863225314, 2);
  sqcRYGate(q, 0.3092923988607423, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9699828977859397, 2);
  sqcRYGate(q, 1.433432974095757, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.721540238993126, 3);
  sqcRYGate(q, -2.9468619992207117, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.39981215106593826, 3);
  sqcRYGate(q, -0.5844064847366175, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.227249527866932, 4);
  sqcRYGate(q, 2.0631129164200175, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2104265178364773, 4);
  sqcRYGate(q, -2.701181473645815, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6483733666526836, 5);
  sqcRYGate(q, -0.9908228063483013, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7641760976145617, 5);
  sqcRYGate(q, -1.4957460528232478, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1422469550324612, 6);
  sqcRYGate(q, 1.7420528816527787, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7422434566178135, 6);
  sqcRYGate(q, -2.7143260242266516, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.017624784629550135, 0);
  sqcRYGate(q, -0.07413670927556734, 1);
  sqcRYGate(q, -1.3460055114260032, 2);
  sqcRYGate(q, 1.0616713474566408, 3);
  sqcRYGate(q, -1.5522887894931559, 4);
  sqcRYGate(q, 0.7074250295132821, 5);
  sqcRYGate(q, 3.0461908005582723, 6);
  sqcRYGate(q, -1.5197911120140724, 7);

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
