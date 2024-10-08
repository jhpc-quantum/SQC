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

  sqcRYGate(q, -0.49972483472673146, 0);
  sqcRYGate(q, -0.37025431143312565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4716013341042733, 0);
  sqcRYGate(q, 0.16759874661642105, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.542198279603759, 2);
  sqcRYGate(q, -1.6366951899675213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.524373568072294, 2);
  sqcRYGate(q, 2.954481086585951, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8405867365983003, 4);
  sqcRYGate(q, 0.42421752257209633, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.39977205541398414, 4);
  sqcRYGate(q, -0.2060411003267136, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0682900536906623, 6);
  sqcRYGate(q, 1.6582609166646103, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5404820339918093, 6);
  sqcRYGate(q, 0.5420495544249935, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8066221997463328, 0);
  sqcRYGate(q, 2.678191558926888, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3713029410609239, 0);
  sqcRYGate(q, -0.6751945429290951, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1973516113244003, 2);
  sqcRYGate(q, -2.5235020487631914, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.25076814794630936, 2);
  sqcRYGate(q, -1.8209798785568854, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4591046588400953, 4);
  sqcRYGate(q, 2.216925661850584, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.5203128183475455, 4);
  sqcRYGate(q, 0.5995097466863055, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.842945346408576, 1);
  sqcRYGate(q, -0.9881951531880149, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5538358658015303, 1);
  sqcRYGate(q, -0.8155177508284046, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4357603864670998, 3);
  sqcRYGate(q, -0.9205599250968719, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.5709739340226347, 3);
  sqcRYGate(q, 3.061030110495799, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7786014335716633, 5);
  sqcRYGate(q, -1.4919890379859886, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.8435298331458165, 5);
  sqcRYGate(q, 0.39996769663281473, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.1671460223934607, 0);
  sqcRYGate(q, 0.2710776997802204, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.14812749804146855, 0);
  sqcRYGate(q, 1.365408801250707, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.005325421814340814, 2);
  sqcRYGate(q, 1.450033193770875, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7734377831134722, 2);
  sqcRYGate(q, 1.1279809816553044, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6154852768940495, 4);
  sqcRYGate(q, -1.7153704820899007, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7871657177393567, 4);
  sqcRYGate(q, 2.2182695556559127, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2533940100823013, 6);
  sqcRYGate(q, -0.9102316749145922, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1799357164771513, 6);
  sqcRYGate(q, 0.844433926765703, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.11842017590110211, 0);
  sqcRYGate(q, -1.313179562307682, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.441889182884096, 0);
  sqcRYGate(q, 1.9972370502058414, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6723920588942862, 2);
  sqcRYGate(q, 1.6141277904801647, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4421117589888162, 2);
  sqcRYGate(q, -2.2608472090721996, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.8359494288935269, 4);
  sqcRYGate(q, 0.20160164401849862, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.062568380642495, 4);
  sqcRYGate(q, -1.5091785139991298, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.992178400274531, 1);
  sqcRYGate(q, -2.2264434047905515, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8475947133388164, 1);
  sqcRYGate(q, 2.956302758947362, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4615592420814423, 3);
  sqcRYGate(q, -0.7526953505443599, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2858186879277116, 3);
  sqcRYGate(q, -2.1157869956886213, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.9394389824038113, 5);
  sqcRYGate(q, -1.941907639269541, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.5556239742705977, 5);
  sqcRYGate(q, -1.3521435764041065, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.15698738203102103, 0);
  sqcRYGate(q, 0.6873151392099989, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3624527753228026, 0);
  sqcRYGate(q, -1.4064881378291807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.975591139422896, 2);
  sqcRYGate(q, -1.9817364016843324, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2549330052168417, 2);
  sqcRYGate(q, 1.5479955655758346, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1350968343136194, 4);
  sqcRYGate(q, 1.5339047726736879, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9464072280529168, 4);
  sqcRYGate(q, -1.3502385209425831, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.632311305212139, 6);
  sqcRYGate(q, -1.7393386768152868, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0745090489526898, 6);
  sqcRYGate(q, -2.900280615181774, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.25318340030621633, 0);
  sqcRYGate(q, 1.2781239981734014, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.779476306666894, 0);
  sqcRYGate(q, -3.0148691491711213, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.67486885453785, 2);
  sqcRYGate(q, -1.4916851481702853, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.2909009845423954, 2);
  sqcRYGate(q, -2.9487195373977255, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.4716715515550562, 4);
  sqcRYGate(q, 0.9899983038705599, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.784344738265515, 4);
  sqcRYGate(q, -1.530820424844494, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7851926892042655, 1);
  sqcRYGate(q, 3.082579642679423, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.623438385747863, 1);
  sqcRYGate(q, -2.386366861699593, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1506535803747182, 3);
  sqcRYGate(q, -2.99969120575071, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2616816290606687, 3);
  sqcRYGate(q, -2.692073473186186, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.500538899069987, 5);
  sqcRYGate(q, -2.746197317790464, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.2304031139530924, 5);
  sqcRYGate(q, -2.292176111471456, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.604735858321916, 0);
  sqcRYGate(q, -2.720585001205243, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8359446227986478, 0);
  sqcRYGate(q, 1.8952212212095672, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.734211003685488, 2);
  sqcRYGate(q, 0.3647364440719967, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9105621178499241, 2);
  sqcRYGate(q, 0.21793943673137495, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5108605881109503, 4);
  sqcRYGate(q, 1.526651962926141, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1700965183884613, 4);
  sqcRYGate(q, 1.547099010584711, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8971132211554966, 6);
  sqcRYGate(q, -2.4012891798846665, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0916794821153541, 6);
  sqcRYGate(q, -0.5820621599136943, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.40083104818443, 0);
  sqcRYGate(q, 0.5589172015403798, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.529298386467391, 0);
  sqcRYGate(q, -0.9978263358152013, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9386782965980407, 2);
  sqcRYGate(q, 2.464116474744532, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.6096928633287577, 2);
  sqcRYGate(q, 0.09100881907644975, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.9323746544782177, 4);
  sqcRYGate(q, -1.371050325723247, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6227628595934314, 4);
  sqcRYGate(q, -0.9590897376249559, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3546810886780245, 1);
  sqcRYGate(q, 2.688745973523503, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6297487577533438, 1);
  sqcRYGate(q, -0.6482894643811346, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.39297515134795, 3);
  sqcRYGate(q, -0.6606995187136082, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.2504657784846187, 3);
  sqcRYGate(q, 0.5723820728626503, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.8915255564171813, 5);
  sqcRYGate(q, 2.400513830876776, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.0520147425369606, 5);
  sqcRYGate(q, -1.9930572946939489, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.8669687119958494, 0);
  sqcRYGate(q, -2.5184247106104025, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7768271235698814, 0);
  sqcRYGate(q, -2.331776363449916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7574863896727618, 2);
  sqcRYGate(q, 1.217795467750272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1143095669369822, 2);
  sqcRYGate(q, 2.11013059618357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.779159232017563, 4);
  sqcRYGate(q, -0.3839661138075487, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.411413575359929, 4);
  sqcRYGate(q, -1.8684312468135635, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.13810458070693862, 6);
  sqcRYGate(q, 0.148075875206823, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.776664676441541, 6);
  sqcRYGate(q, -0.1529981721992986, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1125410889592944, 0);
  sqcRYGate(q, -2.147131715608853, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3420837185418897, 0);
  sqcRYGate(q, 1.8220014257631512, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.819766457671233, 2);
  sqcRYGate(q, -1.3631406168113527, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.14871489850835556, 2);
  sqcRYGate(q, -1.7574859338400026, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.903419459503216, 4);
  sqcRYGate(q, 0.6315274882022457, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.453934379191136, 4);
  sqcRYGate(q, 1.155277618126174, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7433941641985393, 1);
  sqcRYGate(q, 2.0956175352518147, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3298504669440998, 1);
  sqcRYGate(q, -2.4114134938388077, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4159403507515282, 3);
  sqcRYGate(q, -2.1583635582457155, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.0569219022434666, 3);
  sqcRYGate(q, -2.4610099015221567, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.17739296931084222, 5);
  sqcRYGate(q, -1.6722619257042215, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.5374871427298427, 5);
  sqcRYGate(q, 1.9588781123302708, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.38894039723593293, 0);
  sqcRYGate(q, 0.8103589402095794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.087722909257748, 0);
  sqcRYGate(q, 2.332444306947193, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.905020834501979, 2);
  sqcRYGate(q, 1.0293992706526112, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.352270303846238, 2);
  sqcRYGate(q, -3.0266080714428543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5454781852349992, 4);
  sqcRYGate(q, 2.309334135684056, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5340373328673484, 4);
  sqcRYGate(q, -2.2645452168443714, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6529364612032914, 6);
  sqcRYGate(q, -2.087295912339454, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3294394141766028, 6);
  sqcRYGate(q, -0.7352578025013428, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1244964882236754, 0);
  sqcRYGate(q, 0.5885761297032548, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8036945581887291, 0);
  sqcRYGate(q, -1.3581472041962355, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5328961996819839, 2);
  sqcRYGate(q, -0.2701329924214573, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.29627582426690147, 2);
  sqcRYGate(q, 3.1377847875807814, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.8548841400778024, 4);
  sqcRYGate(q, 1.4405273042256042, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7234518373963503, 4);
  sqcRYGate(q, -2.1688398796301556, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.9050582828769984, 1);
  sqcRYGate(q, -2.4573195712739264, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3137584641747801, 1);
  sqcRYGate(q, 0.4065392213963701, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.776560244319406, 3);
  sqcRYGate(q, -2.6148125178149524, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7774250543283943, 3);
  sqcRYGate(q, -0.16444610779544355, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3290845112933989, 5);
  sqcRYGate(q, 0.6103690979747686, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.111589251580262, 5);
  sqcRYGate(q, 3.1113579356756027, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1007567913878114, 0);
  sqcRYGate(q, -1.0081750342658582, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1363069711359572, 0);
  sqcRYGate(q, -3.120707594935192, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.404917057744684, 2);
  sqcRYGate(q, 1.7796562368427704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9854801349498845, 2);
  sqcRYGate(q, -1.7780885395780262, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8050872807295395, 4);
  sqcRYGate(q, -1.7534772648597703, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9509040279319914, 4);
  sqcRYGate(q, -2.366662546498564, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6204361335166784, 6);
  sqcRYGate(q, -2.368370662191714, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9872703260535611, 6);
  sqcRYGate(q, 1.3340628530825782, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.650484032286309, 0);
  sqcRYGate(q, -0.5462972009369569, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3634652669231539, 0);
  sqcRYGate(q, 0.5974193878254601, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6344217093891515, 2);
  sqcRYGate(q, 0.30336223249141986, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.4106018784658676, 2);
  sqcRYGate(q, 2.1182536842967976, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.2354599516871345, 4);
  sqcRYGate(q, 2.7592000993170265, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.7860744526287964, 4);
  sqcRYGate(q, -0.978833062757972, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.7873924779828835, 1);
  sqcRYGate(q, 1.4531160815996347, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6645951250365334, 1);
  sqcRYGate(q, -2.4461830078930733, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9284757836584365, 3);
  sqcRYGate(q, -3.105393865842537, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.9992787030147765, 3);
  sqcRYGate(q, -2.5437932308407127, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.97848264558536, 5);
  sqcRYGate(q, 2.52077369484128, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5530456278729625, 5);
  sqcRYGate(q, 2.3185019069695847, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.12045334150253, 0);
  sqcRYGate(q, 2.2957209188149177, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6484841101806402, 0);
  sqcRYGate(q, 1.025446526754277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2523103175958867, 2);
  sqcRYGate(q, 1.0247515372699694, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9430599552055307, 2);
  sqcRYGate(q, -2.642299650228394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4183332951127108, 4);
  sqcRYGate(q, 2.975606634572023, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7672769465247349, 4);
  sqcRYGate(q, -2.747034558631916, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.23898996332589828, 6);
  sqcRYGate(q, -0.0402907543063753, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.660653132333512, 6);
  sqcRYGate(q, 3.0434976741731505, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.07854614486127084, 0);
  sqcRYGate(q, 1.3108008379450906, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8696876251251655, 0);
  sqcRYGate(q, 1.9995700101267755, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.746605835435993, 2);
  sqcRYGate(q, 2.5427742322105638, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.8402479722016165, 2);
  sqcRYGate(q, -1.7958873966082831, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1698118320988284, 4);
  sqcRYGate(q, 0.31007534229933853, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.8357587647649367, 4);
  sqcRYGate(q, -1.3869194543348247, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.4825125318854431, 1);
  sqcRYGate(q, -2.6534753897584094, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3144633053943374, 1);
  sqcRYGate(q, -2.991687667602602, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.21573038275358464, 3);
  sqcRYGate(q, -2.7959262473921873, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.1437502349646032, 3);
  sqcRYGate(q, 0.3377480430699487, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7667948516909435, 5);
  sqcRYGate(q, 0.12499975724967703, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.6537268150008542, 5);
  sqcRYGate(q, 1.3042996292680535, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.325247399385821, 0);
  sqcRYGate(q, 0.3611128611110459, 1);
  sqcRYGate(q, 1.2252385769813472, 2);
  sqcRYGate(q, -2.019807062950163, 3);
  sqcRYGate(q, -2.4598255203034354, 4);
  sqcRYGate(q, -3.0842557521202427, 5);
  sqcRYGate(q, -1.6979120056544061, 6);
  sqcRYGate(q, -2.3035965069351363, 7);

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
