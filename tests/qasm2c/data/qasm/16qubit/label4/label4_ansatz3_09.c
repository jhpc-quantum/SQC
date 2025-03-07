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

  sqcRYGate(q, 3.1411831676109743, 0);
  sqcRZGate(q, -2.1344865505756, 0);
  sqcRYGate(q, -1.607224847520925, 1);
  sqcRZGate(q, 0.8788444913785112, 1);
  sqcRYGate(q, 3.027626731242346, 2);
  sqcRZGate(q, -1.2277016133864203, 2);
  sqcRYGate(q, -1.6576211610092102, 3);
  sqcRZGate(q, -1.3246890150043598, 3);
  sqcRYGate(q, -0.009894494858372127, 4);
  sqcRZGate(q, 0.0952460885048344, 4);
  sqcRYGate(q, -0.0003138123444479391, 5);
  sqcRZGate(q, 0.22683964954954394, 5);
  sqcRYGate(q, 3.141585920590757, 6);
  sqcRZGate(q, 0.755857266423197, 6);
  sqcRYGate(q, 1.3729021077405532, 7);
  sqcRZGate(q, -2.078827212148829, 7);
  sqcRYGate(q, 1.5660818704091395, 8);
  sqcRZGate(q, -0.4222338277895137, 8);
  sqcRYGate(q, 0.00037928953761490186, 9);
  sqcRZGate(q, -0.12410997051855305, 9);
  sqcRYGate(q, -1.5738046514750492, 10);
  sqcRZGate(q, -0.28749612368353455, 10);
  sqcRYGate(q, -0.0018555489796302253, 11);
  sqcRZGate(q, 0.6292775275687127, 11);
  sqcRYGate(q, 1.570496801673163, 12);
  sqcRZGate(q, -0.6081769303664614, 12);
  sqcRYGate(q, 2.453206770226905, 13);
  sqcRZGate(q, -1.616222913892113, 13);
  sqcRYGate(q, 3.1405956209096573, 14);
  sqcRZGate(q, -0.05060938069274635, 14);
  sqcRYGate(q, -2.871061825547165, 15);
  sqcRZGate(q, -3.1350627561826454, 15);
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
  sqcRYGate(q, 3.135792456719901, 0);
  sqcRZGate(q, 0.11549984989494533, 0);
  sqcRYGate(q, 3.0886366840824944, 1);
  sqcRZGate(q, 0.7151498578427046, 1);
  sqcRYGate(q, 2.8216085061019087, 2);
  sqcRZGate(q, 1.666702230533872, 2);
  sqcRYGate(q, 1.609203680944589, 3);
  sqcRZGate(q, 1.5408162730674215, 3);
  sqcRYGate(q, -1.5589149537217297, 4);
  sqcRZGate(q, 3.139029304282497, 4);
  sqcRYGate(q, 1.5484844107476263, 5);
  sqcRZGate(q, -2.111030523956461, 5);
  sqcRYGate(q, 0.06362877758724199, 6);
  sqcRZGate(q, -0.4800532827829206, 6);
  sqcRYGate(q, -2.8098079056951355, 7);
  sqcRZGate(q, -1.8382806251738515, 7);
  sqcRYGate(q, -2.0417527637430872, 8);
  sqcRZGate(q, -1.0312397162930198, 8);
  sqcRYGate(q, 2.6658186265211388, 9);
  sqcRZGate(q, 0.5312305201730299, 9);
  sqcRYGate(q, -0.45800197764614975, 10);
  sqcRZGate(q, -0.11093959988533689, 10);
  sqcRYGate(q, 0.17621504820413136, 11);
  sqcRZGate(q, -2.9350184434400206, 11);
  sqcRYGate(q, -0.00028606109079586496, 12);
  sqcRZGate(q, 2.1762101470650608, 12);
  sqcRYGate(q, -3.089378590321432e-05, 13);
  sqcRZGate(q, -1.5302561342734768, 13);
  sqcRYGate(q, -1.5677677896388458, 14);
  sqcRZGate(q, 1.0523283741507237, 14);
  sqcRYGate(q, 0.3548357007987524, 15);
  sqcRZGate(q, 0.6184551997025417, 15);
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
  sqcRYGate(q, -1.8021432708096754, 0);
  sqcRZGate(q, -1.9630717851174992, 0);
  sqcRYGate(q, 2.7607708252080223, 1);
  sqcRZGate(q, 2.943701308149299, 1);
  sqcRYGate(q, -0.09376143679604354, 2);
  sqcRZGate(q, -0.5799350372035338, 2);
  sqcRYGate(q, -1.5754591254768642, 3);
  sqcRZGate(q, -3.140243829070528, 3);
  sqcRYGate(q, -1.570885292589252, 4);
  sqcRZGate(q, -0.22581775607640495, 4);
  sqcRYGate(q, -5.84409888304549e-06, 5);
  sqcRZGate(q, -1.0291050111809124, 5);
  sqcRYGate(q, 0.030407873139419728, 6);
  sqcRZGate(q, 0.1749568536401087, 6);
  sqcRYGate(q, 3.13675483968416, 7);
  sqcRZGate(q, -1.2817140485484364, 7);
  sqcRYGate(q, -0.0005616999086202057, 8);
  sqcRZGate(q, -2.891000003033878, 8);
  sqcRYGate(q, 3.1408036263524037, 9);
  sqcRZGate(q, 2.4709450131877286, 9);
  sqcRYGate(q, -0.004381247305364155, 10);
  sqcRZGate(q, -2.0444950911904227, 10);
  sqcRYGate(q, 0.004914122334242599, 11);
  sqcRZGate(q, 2.7816596425857982, 11);
  sqcRYGate(q, 2.056892486239004, 12);
  sqcRZGate(q, 1.568009476398597, 12);
  sqcRYGate(q, 2.475618417929305, 13);
  sqcRZGate(q, 0.1550336748413299, 13);
  sqcRYGate(q, -3.133705661353555, 14);
  sqcRZGate(q, -0.3189312418793744, 14);
  sqcRYGate(q, 3.112460189829445, 15);
  sqcRZGate(q, -3.1384877323690903, 15);
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
  sqcRYGate(q, 0.014419278658126979, 0);
  sqcRZGate(q, -2.766899179886566, 0);
  sqcRYGate(q, -3.1273897505211177, 1);
  sqcRZGate(q, 1.3793394440144133, 1);
  sqcRYGate(q, 0.0011168645054005183, 2);
  sqcRZGate(q, -2.3733367333150057, 2);
  sqcRYGate(q, -2.1193632509893123, 3);
  sqcRZGate(q, -3.141314325067749, 3);
  sqcRYGate(q, -3.140895144046591, 4);
  sqcRZGate(q, 2.913418178337609, 4);
  sqcRYGate(q, -1.570790023236693, 5);
  sqcRZGate(q, -3.1369910950902256, 5);
  sqcRYGate(q, -3.1415611161289627, 6);
  sqcRZGate(q, 2.677828274234256, 6);
  sqcRYGate(q, 1.1069693323989007, 7);
  sqcRZGate(q, 1.5539667890273936, 7);
  sqcRYGate(q, 0.6209397812057474, 8);
  sqcRZGate(q, -2.152770782401421, 8);
  sqcRYGate(q, 2.868020394018784, 9);
  sqcRZGate(q, -0.8192223407370945, 9);
  sqcRYGate(q, -2.609634007671051, 10);
  sqcRZGate(q, 2.893612844261885, 10);
  sqcRYGate(q, 3.0021338827576383, 11);
  sqcRZGate(q, -0.10479888580980923, 11);
  sqcRYGate(q, 1.601626837033082, 12);
  sqcRZGate(q, -0.40158959664489036, 12);
  sqcRYGate(q, 3.14158976882226, 13);
  sqcRZGate(q, 0.42053630458632174, 13);
  sqcRYGate(q, -0.27535365041904925, 14);
  sqcRZGate(q, 3.1306800758226134, 14);
  sqcRYGate(q, 0.008139208605588106, 15);
  sqcRZGate(q, 1.573649005643827, 15);
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
  sqcRYGate(q, 1.646401015075304, 0);
  sqcRZGate(q, 2.5404296486348157, 0);
  sqcRYGate(q, -0.03176492535331131, 1);
  sqcRZGate(q, -2.998982138673957, 1);
  sqcRYGate(q, -0.01960103344893671, 2);
  sqcRZGate(q, -2.404945185814376, 2);
  sqcRYGate(q, 1.5694839427879628, 3);
  sqcRZGate(q, -3.141218102636893, 3);
  sqcRYGate(q, 1.5533395366448026, 4);
  sqcRZGate(q, 2.892280620477206, 4);
  sqcRYGate(q, 2.523512637524402, 5);
  sqcRZGate(q, 2.8088550741287555, 5);
  sqcRYGate(q, 3.104850903681252, 6);
  sqcRZGate(q, 2.558151554395319, 6);
  sqcRYGate(q, 3.141536102174156, 7);
  sqcRZGate(q, 1.8213501662509015, 7);
  sqcRYGate(q, 3.052108352226061, 8);
  sqcRZGate(q, 1.105320582371298, 8);
  sqcRYGate(q, 1.5712013785707253, 9);
  sqcRZGate(q, -3.087877152779843, 9);
  sqcRYGate(q, 3.071170594450548, 10);
  sqcRZGate(q, 0.20903924536384721, 10);
  sqcRYGate(q, 1.7673575073256957, 11);
  sqcRZGate(q, -0.00084590853644675, 11);
  sqcRYGate(q, -3.1410965143264797, 12);
  sqcRZGate(q, -1.792948141656955, 12);
  sqcRYGate(q, -3.141542510733333, 13);
  sqcRZGate(q, -2.6495277761905127, 13);
  sqcRYGate(q, -0.3092637968003533, 14);
  sqcRZGate(q, 3.0012853601149767, 14);
  sqcRYGate(q, -0.021490853600387487, 15);
  sqcRZGate(q, 2.189179450744973, 15);
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
  sqcRYGate(q, 3.140429610983546, 0);
  sqcRZGate(q, 1.2016343180662927, 0);
  sqcRYGate(q, 1.5708472453013274, 1);
  sqcRZGate(q, -1.5411702331347525, 1);
  sqcRYGate(q, -0.00019961924590942471, 2);
  sqcRZGate(q, -1.8168327390109895, 2);
  sqcRYGate(q, -1.5741565214177626, 3);
  sqcRZGate(q, 1.5024205244302928e-05, 3);
  sqcRYGate(q, -0.0009242943567722152, 4);
  sqcRZGate(q, -2.8923112765371166, 4);
  sqcRYGate(q, -1.549848684574135, 5);
  sqcRZGate(q, -3.0199892949104346, 5);
  sqcRYGate(q, 1.1373529931639146e-05, 6);
  sqcRZGate(q, -2.699776544369812, 6);
  sqcRYGate(q, -0.00034551180922485315, 7);
  sqcRZGate(q, 2.8466890278327774, 7);
  sqcRYGate(q, -0.00026292488791853676, 8);
  sqcRZGate(q, -0.2220213340082559, 8);
  sqcRYGate(q, 3.1411836066238275, 9);
  sqcRZGate(q, 1.311513289545818, 9);
  sqcRYGate(q, -3.1396535418746083, 10);
  sqcRZGate(q, 2.1320759380443874, 10);
  sqcRYGate(q, -1.8385520568736196, 11);
  sqcRZGate(q, 1.485190698050941, 11);
  sqcRYGate(q, -1.5745803068196649, 12);
  sqcRZGate(q, -1.468228315744934, 12);
  sqcRYGate(q, -0.00016136494787421127, 13);
  sqcRZGate(q, 2.904742491845517, 13);
  sqcRYGate(q, -0.22381167754624195, 14);
  sqcRZGate(q, 2.399930889877923, 14);
  sqcRYGate(q, 1.5706198048047533, 15);
  sqcRZGate(q, -1.565713257431484, 15);
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
  sqcRYGate(q, 1.5711942424502439, 0);
  sqcRZGate(q, 2.423657911915951, 0);
  sqcRYGate(q, -1.584907387324501, 1);
  sqcRZGate(q, -1.5707944086723191, 1);
  sqcRYGate(q, -0.0004129623077980162, 2);
  sqcRZGate(q, -2.3478452497498727, 2);
  sqcRYGate(q, 1.5706610859324606, 3);
  sqcRZGate(q, 0.40344498126840933, 3);
  sqcRYGate(q, 1.575854648749151, 4);
  sqcRZGate(q, -2.4271000423203737, 4);
  sqcRYGate(q, -3.133739586218146, 5);
  sqcRZGate(q, 1.6849402841878942, 5);
  sqcRYGate(q, -2.931258168182714, 6);
  sqcRZGate(q, -2.6315247758099836, 6);
  sqcRYGate(q, 2.708856025443662, 7);
  sqcRZGate(q, -0.38311656032524055, 7);
  sqcRYGate(q, 3.114205117960738, 8);
  sqcRZGate(q, 0.829855435436243, 8);
  sqcRYGate(q, -3.396676963386325e-05, 9);
  sqcRZGate(q, -1.3134993582730248, 9);
  sqcRYGate(q, 7.3078309243361184e-06, 10);
  sqcRZGate(q, 2.830582443199382, 10);
  sqcRYGate(q, -1.5913534320641112, 11);
  sqcRZGate(q, -1.3721357752157415, 11);
  sqcRYGate(q, -0.03933615066398284, 12);
  sqcRZGate(q, -0.12946474077294304, 12);
  sqcRYGate(q, -1.539264729859888, 13);
  sqcRZGate(q, 2.1293148205334624, 13);
  sqcRYGate(q, 3.5452764580279215e-05, 14);
  sqcRZGate(q, 0.016353562598814268, 14);
  sqcRYGate(q, -1.4129718676728806, 15);
  sqcRZGate(q, 3.1023279873447844, 15);
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
  sqcRYGate(q, -3.0819678867605984, 0);
  sqcRZGate(q, 2.273857347629127, 0);
  sqcRYGate(q, 1.5739688559037708, 1);
  sqcRZGate(q, -3.104203814874839, 1);
  sqcRYGate(q, -3.062894011448779, 2);
  sqcRZGate(q, -2.939895719781159, 2);
  sqcRYGate(q, 0.05687461247559902, 3);
  sqcRZGate(q, 0.0190289754570887, 3);
  sqcRYGate(q, 0.0014042292643265952, 4);
  sqcRZGate(q, -2.5532933357614067, 4);
  sqcRYGate(q, 1.5542571359217408, 5);
  sqcRZGate(q, -0.0010163394312411918, 5);
  sqcRYGate(q, 8.671118202217966e-06, 6);
  sqcRZGate(q, 2.6458372699956607, 6);
  sqcRYGate(q, 3.140996757412737, 7);
  sqcRZGate(q, 2.8251481667524274, 7);
  sqcRYGate(q, 3.1414702197573754, 8);
  sqcRZGate(q, 1.4689084940187112, 8);
  sqcRYGate(q, 0.00047728672378344333, 9);
  sqcRZGate(q, -1.151912540121577, 9);
  sqcRYGate(q, 3.141538973838948, 10);
  sqcRZGate(q, -2.226995321179266, 10);
  sqcRYGate(q, -1.5703109345860176, 11);
  sqcRZGate(q, 3.01772992302331, 11);
  sqcRYGate(q, 3.0654661530764806, 12);
  sqcRZGate(q, -1.5662695154257202, 12);
  sqcRYGate(q, 3.141450668778176, 13);
  sqcRZGate(q, 0.5568123200207786, 13);
  sqcRYGate(q, -3.0792250459670423, 14);
  sqcRZGate(q, -1.881237115083412, 14);
  sqcRYGate(q, 1.5693892359051453, 15);
  sqcRZGate(q, -0.025254836777307336, 15);
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
  sqcRYGate(q, -0.09634462418332834, 0);
  sqcRZGate(q, 1.038868992783696, 0);
  sqcRYGate(q, -0.028862427069072223, 1);
  sqcRZGate(q, 1.9021148276037259, 1);
  sqcRYGate(q, 0.012551089497325795, 2);
  sqcRZGate(q, -1.4446386501498507, 2);
  sqcRYGate(q, -2.8867870835375156, 3);
  sqcRZGate(q, -1.8775189594366033, 3);
  sqcRYGate(q, 3.141116915801509, 4);
  sqcRZGate(q, -0.26348721133301006, 4);
  sqcRYGate(q, 1.568860566936859, 5);
  sqcRZGate(q, 1.4261118781347102, 5);
  sqcRYGate(q, -1.7445567795296513, 6);
  sqcRZGate(q, 3.114037139860966, 6);
  sqcRYGate(q, -1.579482797407625, 7);
  sqcRZGate(q, 1.407031100705514, 7);
  sqcRYGate(q, -1.59693364962821, 8);
  sqcRZGate(q, 2.926804394173416, 8);
  sqcRYGate(q, 2.1322155521966444, 9);
  sqcRZGate(q, -1.4735988348695885, 9);
  sqcRYGate(q, 3.140160071907066, 10);
  sqcRZGate(q, 1.8690148526130055, 10);
  sqcRYGate(q, -0.08840147756364569, 11);
  sqcRZGate(q, -3.038216792354866, 11);
  sqcRYGate(q, 1.566069716397787, 12);
  sqcRZGate(q, 2.2857529707740634, 12);
  sqcRYGate(q, -1.5587949821477984, 13);
  sqcRZGate(q, 0.29273590673442046, 13);
  sqcRYGate(q, -3.141499914341044, 14);
  sqcRZGate(q, 2.216247808210058, 14);
  sqcRYGate(q, 0.11504753395719776, 15);
  sqcRZGate(q, 0.07181472562159984, 15);
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
  sqcRYGate(q, -3.0902105533378346, 0);
  sqcRZGate(q, -0.3245282232197815, 0);
  sqcRYGate(q, -3.1395378289434843, 1);
  sqcRZGate(q, 0.39652195974317866, 1);
  sqcRYGate(q, 3.1360692041854357, 2);
  sqcRZGate(q, 1.867167111382255, 2);
  sqcRYGate(q, -0.0007603094407535593, 3);
  sqcRZGate(q, -0.7343957515098496, 3);
  sqcRYGate(q, -1.5710874932330883, 4);
  sqcRZGate(q, 0.46860698780225285, 4);
  sqcRYGate(q, -2.6621004573931786, 5);
  sqcRZGate(q, 2.275540314812168, 5);
  sqcRYGate(q, 2.6137392660456578, 6);
  sqcRZGate(q, -3.1415662080883533, 6);
  sqcRYGate(q, 2.4146799571411748e-05, 7);
  sqcRZGate(q, -0.47787835562832726, 7);
  sqcRYGate(q, -3.1399463525898943, 8);
  sqcRZGate(q, -1.8918080792739982, 8);
  sqcRYGate(q, 3.0781067385514014e-05, 9);
  sqcRZGate(q, -3.038690110901326, 9);
  sqcRYGate(q, 1.4717393969964106e-05, 10);
  sqcRZGate(q, -2.5993179994921585, 10);
  sqcRYGate(q, -0.07188049165253649, 11);
  sqcRZGate(q, 1.591037907613572, 11);
  sqcRYGate(q, -3.141549087525568, 12);
  sqcRZGate(q, 2.8756187944465914, 12);
  sqcRYGate(q, -1.5110715232205532, 13);
  sqcRZGate(q, -2.616710980420846, 13);
  sqcRYGate(q, -0.002594986035108448, 14);
  sqcRZGate(q, -2.8417439354703578, 14);
  sqcRYGate(q, 2.1661423561437445, 15);
  sqcRZGate(q, -3.090505607264345, 15);
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
  sqcRYGate(q, -0.013734630600204412, 0);
  sqcRZGate(q, -1.9156460296632996, 0);
  sqcRYGate(q, -0.0016715563579019488, 1);
  sqcRZGate(q, -2.0159243892167984, 1);
  sqcRYGate(q, -1.5707716485045486, 2);
  sqcRZGate(q, -3.028230534894678, 2);
  sqcRYGate(q, 2.7986591585127845, 3);
  sqcRZGate(q, -2.5375993651917312, 3);
  sqcRYGate(q, -3.739649744805007e-05, 4);
  sqcRZGate(q, 2.438902099944504, 4);
  sqcRYGate(q, 1.5707039088777774, 5);
  sqcRZGate(q, 3.1415891944367806, 5);
  sqcRYGate(q, 1.5709209975966216, 6);
  sqcRZGate(q, -0.6920788880882189, 6);
  sqcRYGate(q, -3.1408415800079794, 7);
  sqcRZGate(q, -1.569162639320782, 7);
  sqcRYGate(q, 0.65782406396747, 8);
  sqcRZGate(q, 1.5587981678808296, 8);
  sqcRYGate(q, -1.2647232203006304, 9);
  sqcRZGate(q, -0.008457155364497676, 9);
  sqcRYGate(q, 1.5880578530425522, 10);
  sqcRZGate(q, 2.3784905659728026, 10);
  sqcRYGate(q, -0.5435240010632247, 11);
  sqcRZGate(q, -1.241203007234834, 11);
  sqcRYGate(q, 3.141469172127356, 12);
  sqcRZGate(q, -2.7364747528415747, 12);
  sqcRYGate(q, -0.00045514841968706066, 13);
  sqcRZGate(q, 2.2230011267676124, 13);
  sqcRYGate(q, 3.141567149471478, 14);
  sqcRZGate(q, 0.613521965282441, 14);
  sqcRYGate(q, 3.0998122502624694, 15);
  sqcRZGate(q, -1.545819097263895, 15);
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
  sqcRYGate(q, -1.5708053760560994, 0);
  sqcRZGate(q, -3.141547807889066, 0);
  sqcRYGate(q, -0.004163760432844832, 1);
  sqcRZGate(q, -2.2144859399510266, 1);
  sqcRYGate(q, 3.140096795679081, 2);
  sqcRZGate(q, -3.0229147006765067, 2);
  sqcRYGate(q, -0.0073533074448981495, 3);
  sqcRZGate(q, 1.6139833989349222, 3);
  sqcRYGate(q, 1.3344416807555107e-05, 4);
  sqcRZGate(q, -1.8546537416805406, 4);
  sqcRYGate(q, 2.5605032671259305, 5);
  sqcRZGate(q, 3.1415124885374515, 5);
  sqcRYGate(q, 0.5397887270048782, 6);
  sqcRZGate(q, -0.8397556851605521, 6);
  sqcRYGate(q, 0.3538679401634732, 7);
  sqcRZGate(q, 0.7870038055733196, 7);
  sqcRYGate(q, -3.0787593770146295, 8);
  sqcRZGate(q, 3.129370928818864, 8);
  sqcRYGate(q, -2.429305562312578e-05, 9);
  sqcRZGate(q, -1.8014661619998493, 9);
  sqcRYGate(q, -3.853235089223972e-05, 10);
  sqcRZGate(q, -2.3793982293559317, 10);
  sqcRYGate(q, 1.3057819371553592e-05, 11);
  sqcRZGate(q, -0.3297660855405852, 11);
  sqcRYGate(q, 3.1353692087004705, 12);
  sqcRZGate(q, -1.505362992835177, 12);
  sqcRYGate(q, 1.564117437736996, 13);
  sqcRZGate(q, 1.3979148282746523, 13);
  sqcRYGate(q, 3.1391406835037547, 14);
  sqcRZGate(q, -1.7256173451317807, 14);
  sqcRYGate(q, 1.5321770799587613, 15);
  sqcRZGate(q, 2.3240322036710115, 15);
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
  sqcRYGate(q, -1.6706124031124074, 0);
  sqcRZGate(q, -2.558801355626265, 0);
  sqcRYGate(q, 1.5669291894365285e-05, 1);
  sqcRZGate(q, -1.78464166108291, 1);
  sqcRYGate(q, -0.011038157086905365, 2);
  sqcRZGate(q, -2.564176942050171, 2);
  sqcRYGate(q, 0.1443641716938151, 3);
  sqcRZGate(q, 2.8719230993516045, 3);
  sqcRYGate(q, -0.00016053671814653114, 4);
  sqcRZGate(q, -0.4702157138550986, 4);
  sqcRYGate(q, -1.570613570597021, 5);
  sqcRZGate(q, -1.8663764269572853, 5);
  sqcRYGate(q, 3.141394103486747, 6);
  sqcRZGate(q, -0.8755824545727657, 6);
  sqcRYGate(q, -3.1414410568632403, 7);
  sqcRZGate(q, -2.931252371422347, 7);
  sqcRYGate(q, -1.5708736140184403, 8);
  sqcRZGate(q, 2.1528583426533308, 8);
  sqcRYGate(q, 3.1414465545485317, 9);
  sqcRZGate(q, -0.7059374784785698, 9);
  sqcRYGate(q, -1.586927967934393, 10);
  sqcRZGate(q, 2.1569908284559984, 10);
  sqcRYGate(q, 1.5716401970759357, 11);
  sqcRZGate(q, -3.0192924612295573, 11);
  sqcRYGate(q, 5.857730510321708e-05, 12);
  sqcRZGate(q, 0.444182364543221, 12);
  sqcRYGate(q, -0.0001846449650422015, 13);
  sqcRZGate(q, -2.756736421404168, 13);
  sqcRYGate(q, 9.538815656558213e-05, 14);
  sqcRZGate(q, 1.9719677678607992, 14);
  sqcRYGate(q, 0.002896346404850736, 15);
  sqcRZGate(q, -2.810612763257534, 15);

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
