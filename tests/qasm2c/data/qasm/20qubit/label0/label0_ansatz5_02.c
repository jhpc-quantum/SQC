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

  sqcRYGate(q, 0.5665805059414692, 0);
  sqcRYGate(q, -2.8283330086523186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9020110678437459, 0);
  sqcRYGate(q, 2.0276663478820427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.517919951688915, 2);
  sqcRYGate(q, 2.693159119823768, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9402632576380618, 2);
  sqcRYGate(q, 1.9974742843365978, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2058440092223224, 4);
  sqcRYGate(q, 0.0055415142169331815, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.946682708903887, 4);
  sqcRYGate(q, 2.910594941272663, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.376910112984004, 6);
  sqcRYGate(q, -0.7662646420627929, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2271904198505812, 6);
  sqcRYGate(q, -1.2967738527985642, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5440459576979637, 8);
  sqcRYGate(q, -3.020553076128549, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.7961984879847592, 8);
  sqcRYGate(q, -1.396912763879937, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4910561964321811, 10);
  sqcRYGate(q, -1.721164736060338, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.1068392242865674, 10);
  sqcRYGate(q, -0.6655454994662909, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.48384380685961403, 12);
  sqcRYGate(q, 0.6627347010253573, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.3686357022192883, 12);
  sqcRYGate(q, 2.152728455157603, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.868219145330201, 14);
  sqcRYGate(q, 0.5104445879619474, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.2430292145654387, 14);
  sqcRYGate(q, 1.846289576155782, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.5835360575022229, 16);
  sqcRYGate(q, -1.7144291010763029, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.596305942114951, 16);
  sqcRYGate(q, -1.0536752827352371, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.9812776838651012, 18);
  sqcRYGate(q, 2.3166720027036516, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.9862843507139094, 18);
  sqcRYGate(q, -2.8837482592583257, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.6560034778463235, 1);
  sqcRYGate(q, -2.1485432963856583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6113292112111536, 1);
  sqcRYGate(q, -0.19187811555693557, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.055205263770931, 3);
  sqcRYGate(q, -1.1714044155666095, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1721634727783177, 3);
  sqcRYGate(q, -1.6453409585082055, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.15025376418263647, 5);
  sqcRYGate(q, -2.9800872270084984, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5044425778627115, 5);
  sqcRYGate(q, 3.1207175126408013, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.080901053560204, 7);
  sqcRYGate(q, 2.9442197493606916, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.093033583267413, 7);
  sqcRYGate(q, -3.1411949797954506, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.718681843091499, 9);
  sqcRYGate(q, 2.6495116015299587, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.1937089764602602, 9);
  sqcRYGate(q, 3.140995947349108, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.7224114270981798, 11);
  sqcRYGate(q, -1.2412872761165648, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.0009617603592122492, 11);
  sqcRYGate(q, 0.0028393953301355523, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.7834726007783734, 13);
  sqcRYGate(q, -0.2603826207347905, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.7985863528062591, 13);
  sqcRYGate(q, 0.44540815984325816, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.1299882246386623, 15);
  sqcRYGate(q, -0.08060743930440317, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.3249010034649562, 15);
  sqcRYGate(q, -0.26155008532886637, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.9011081836366763, 17);
  sqcRYGate(q, -1.1306374180914314, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.7840684811093515, 17);
  sqcRYGate(q, -1.5461679979546863, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.9721162414289176, 0);
  sqcRYGate(q, 1.3918073622855438, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1834533290389921, 0);
  sqcRYGate(q, -1.3341367560457629, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7850836510439178, 2);
  sqcRYGate(q, -0.1607609706480444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.141427945745933, 2);
  sqcRYGate(q, -1.6117680920581519, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1423475953975677, 4);
  sqcRYGate(q, -3.0689296908404113, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8686092317001463, 4);
  sqcRYGate(q, -0.12252809538587783, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5705747425381213, 6);
  sqcRYGate(q, -2.900257387411288, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0043685242237021535, 6);
  sqcRYGate(q, -1.6715666774086806, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8830970541418153, 8);
  sqcRYGate(q, 2.2321435153674654, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9202626057304637, 8);
  sqcRYGate(q, -1.1954640066344693, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.645822807096484, 10);
  sqcRYGate(q, -1.916123390198449, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7108320770575296, 10);
  sqcRYGate(q, -0.6605949456958756, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.7186863817408327, 12);
  sqcRYGate(q, 1.5749664980755476, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.4333244943392445, 12);
  sqcRYGate(q, 3.059147487077123, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.3505497035958732, 14);
  sqcRYGate(q, -3.037093528723229, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.3958229467668861, 14);
  sqcRYGate(q, 0.000764972501674066, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.03459206208941036, 16);
  sqcRYGate(q, 1.551323616538414, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.15623896165152248, 16);
  sqcRYGate(q, 3.1414144870480065, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.7442456696799837, 18);
  sqcRYGate(q, 2.433325010840711, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -3.1096151560063827, 18);
  sqcRYGate(q, -2.39487314250774, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.6339438781371225, 1);
  sqcRYGate(q, 1.6811140639034732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.004232562354877, 1);
  sqcRYGate(q, -3.0511193400218337, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8766757832467715, 3);
  sqcRYGate(q, -1.2449601645013553, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.18714727778659856, 3);
  sqcRYGate(q, -3.1415416793564734, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.13940267942962556, 5);
  sqcRYGate(q, 2.4864307175051854, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1551008463350425, 5);
  sqcRYGate(q, -0.5636572866696967, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.09145835711145534, 7);
  sqcRYGate(q, -1.0028960693700464, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7176083034535357, 7);
  sqcRYGate(q, 2.2828493822337306, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.120761228687075, 9);
  sqcRYGate(q, 0.6486132142345173, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1278490526802916, 9);
  sqcRYGate(q, 3.1320569898102733, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.5881384168200592, 11);
  sqcRYGate(q, -2.9117975256729105, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.1351130801122693, 11);
  sqcRYGate(q, -3.1396724775002376, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5736114922236375, 13);
  sqcRYGate(q, -2.3659141816181664, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.880844668001113, 13);
  sqcRYGate(q, 1.4354759792616163, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5721196016283445, 15);
  sqcRYGate(q, 2.6977862396863337, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.801799163516764, 15);
  sqcRYGate(q, -1.242808314435771, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.414686610679329, 17);
  sqcRYGate(q, 1.5186496906630627, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.5077906613713132, 17);
  sqcRYGate(q, 2.717178542749375, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.92366333290033, 0);
  sqcRYGate(q, -0.6068863663837921, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1579284973401909, 0);
  sqcRYGate(q, 0.8018962785804558, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5635652932259436, 2);
  sqcRYGate(q, 2.119334408345207, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.284722554951189, 2);
  sqcRYGate(q, -2.8938918391837958, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.98425946783741, 4);
  sqcRYGate(q, -0.4679235047003253, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.669415291204916, 4);
  sqcRYGate(q, -0.7484686617367461, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.25124311613394656, 6);
  sqcRYGate(q, -0.4534976906340648, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 4.1870589254340326e-05, 6);
  sqcRYGate(q, 3.1175106667310044, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.639007103976159, 8);
  sqcRYGate(q, -2.521498937092635, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.7628546411232193, 8);
  sqcRYGate(q, 2.956686028536368, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.866887001203338, 10);
  sqcRYGate(q, -1.3233285013532186, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0071729142872927, 10);
  sqcRYGate(q, 0.060024620521358145, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.834584954306461, 12);
  sqcRYGate(q, 1.7317511793130669, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.119397054690944, 12);
  sqcRYGate(q, -1.9342572332915617, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.27621290587890995, 14);
  sqcRYGate(q, -1.198040805497367, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.24421956157625768, 14);
  sqcRYGate(q, 0.25036252717936147, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.11017121731017, 16);
  sqcRYGate(q, 1.9518592293848664, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.014614502880254676, 16);
  sqcRYGate(q, -0.0022946123360130244, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.7330154139230025, 18);
  sqcRYGate(q, -2.55037286643821, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.571011904321482, 18);
  sqcRYGate(q, 3.0018093465824585, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.302145699862087, 1);
  sqcRYGate(q, 2.491579567328132, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6922572493154244, 1);
  sqcRYGate(q, 2.8773139056657566, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.629601111326692, 3);
  sqcRYGate(q, -1.568846280743788, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0005194186717192294, 3);
  sqcRYGate(q, -3.1414742469853105, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8138113758616408, 5);
  sqcRYGate(q, -0.47427371254707396, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7174751055457333, 5);
  sqcRYGate(q, -1.3012429315010428, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.04043375951523, 7);
  sqcRYGate(q, 0.22772438327261393, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1380172147908034, 7);
  sqcRYGate(q, -0.5953215191200996, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4765691323324446, 9);
  sqcRYGate(q, 0.4078134648532031, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.0009717071604746679, 9);
  sqcRYGate(q, 0.0033574934273241652, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.1034307739788205, 11);
  sqcRYGate(q, 3.044424004248571, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.118971409986652, 11);
  sqcRYGate(q, 1.764575810012576, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.813214644932966, 13);
  sqcRYGate(q, 2.8384113811111655, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.7748468270150717, 13);
  sqcRYGate(q, 3.1291308407834317, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.471466794301005, 15);
  sqcRYGate(q, -1.0271170519096016, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.4239801409069083, 15);
  sqcRYGate(q, -0.005276746089275322, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.052156827859920145, 17);
  sqcRYGate(q, -0.160841517436622, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.08678135262467368, 17);
  sqcRYGate(q, 3.116423701261828, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.2961176848321214, 0);
  sqcRYGate(q, -0.4596589776241703, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0053015425720950304, 0);
  sqcRYGate(q, 1.5151484152578962, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.411849854611412, 2);
  sqcRYGate(q, -1.5132241874271433, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3237212803005516, 2);
  sqcRYGate(q, 1.839474452537771, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9040756184078407, 4);
  sqcRYGate(q, 1.761348891414765, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3528526987983427, 4);
  sqcRYGate(q, -1.2812041055241863, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.20136166869391292, 6);
  sqcRYGate(q, -0.9527777193574272, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1258536973992066, 6);
  sqcRYGate(q, 1.0200020047305811, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.24474042429410578, 8);
  sqcRYGate(q, 0.8453935021539163, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.622535129802198, 8);
  sqcRYGate(q, 2.4648617991214117, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.274824225463827, 10);
  sqcRYGate(q, -1.5314978263884793, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.118810489673935, 10);
  sqcRYGate(q, -2.444024414092187, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5165246756033159, 12);
  sqcRYGate(q, 2.339928206662131, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.11148961907250499, 12);
  sqcRYGate(q, -2.9726526661738, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.4827915691384899, 14);
  sqcRYGate(q, -1.354318623360486, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.7722023864625527, 14);
  sqcRYGate(q, -1.978446821046881, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.589534723264432, 16);
  sqcRYGate(q, 0.15616189804543623, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.4396503700024752, 16);
  sqcRYGate(q, 1.4617551595963076, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.09939747549714628, 18);
  sqcRYGate(q, -1.6356081634954984, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.30902251526878066, 18);
  sqcRYGate(q, 2.7023452901968876, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.3761881301737624, 1);
  sqcRYGate(q, -1.4843453869591963, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9652460815001227, 1);
  sqcRYGate(q, 2.113007859189996, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.569742683442994, 3);
  sqcRYGate(q, -2.14988504045258, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1319477606210615, 3);
  sqcRYGate(q, 0.006081706966474787, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.243096941027984, 5);
  sqcRYGate(q, 2.8481885303899594, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.140403120412655, 5);
  sqcRYGate(q, -3.110516615719373, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1805663139047748, 7);
  sqcRYGate(q, 1.6822247785477638, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.1353449790601031, 7);
  sqcRYGate(q, -3.1251316959939412, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.759252460471556, 9);
  sqcRYGate(q, 2.867138925452893, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -4.433663722728655e-05, 9);
  sqcRYGate(q, 0.42019283811095276, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.353324754673951, 11);
  sqcRYGate(q, -2.908267589125109, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.1366852741104374, 11);
  sqcRYGate(q, -0.0021785737286474744, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.5436775335273936, 13);
  sqcRYGate(q, 1.4992956777608768, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.3588497781006967, 13);
  sqcRYGate(q, 0.6897142605901606, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.4990291305670365, 15);
  sqcRYGate(q, -2.334109644004619, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.6774044338858332, 15);
  sqcRYGate(q, 0.07926246590509223, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.6594726067846275, 17);
  sqcRYGate(q, -1.7992011127233818, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.8333385101008739, 17);
  sqcRYGate(q, 3.128414581201895, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.884413026637814, 0);
  sqcRYGate(q, -1.4116791925156644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.457925048888752, 0);
  sqcRYGate(q, 1.4608316054673407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.47967287291281036, 2);
  sqcRYGate(q, 0.2944582306301946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.004865657022754, 2);
  sqcRYGate(q, 1.8633649481822485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.229848235748602, 4);
  sqcRYGate(q, -2.0141404984188185, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.269058849203084, 4);
  sqcRYGate(q, 1.6620829274299096, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7432388448970744, 6);
  sqcRYGate(q, -1.591678958155346, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8771486699884945, 6);
  sqcRYGate(q, 1.0710410539870983, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.410459937236734, 8);
  sqcRYGate(q, -1.5660458589168196, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.8150331141562415, 8);
  sqcRYGate(q, 0.030144166173544203, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.027686070310519, 10);
  sqcRYGate(q, -2.6123604145876937, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.592748226175403, 10);
  sqcRYGate(q, 0.06775966230859164, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9449199860730326, 12);
  sqcRYGate(q, 0.7870618994390952, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.1149177012282183, 12);
  sqcRYGate(q, -0.0012266262415217, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5589450412684545, 14);
  sqcRYGate(q, 1.0104503349760376, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.005102053060956374, 14);
  sqcRYGate(q, -0.2654284831440501, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.29682255684193654, 16);
  sqcRYGate(q, 2.4401664764695674, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.1413700977771435, 16);
  sqcRYGate(q, 3.1410368986641695, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.7631441444940636, 18);
  sqcRYGate(q, -1.474881674435033, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.09277647653943465, 18);
  sqcRYGate(q, 1.987900510435761, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.12519826510245, 1);
  sqcRYGate(q, 1.8582997101287058, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.40746096030814716, 1);
  sqcRYGate(q, -0.13903832222873636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.47017234353387255, 3);
  sqcRYGate(q, 1.1864402847439663, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3854271920210728, 3);
  sqcRYGate(q, -2.9915555277061854, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3466828025574276, 5);
  sqcRYGate(q, 2.0653525642112487, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3516361483183603, 5);
  sqcRYGate(q, 0.08910628211421479, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.717199284189619, 7);
  sqcRYGate(q, -1.805285027857387, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.20828539093220044, 7);
  sqcRYGate(q, -2.933072242827196, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.022864203297312997, 9);
  sqcRYGate(q, 2.3330186585658232, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9768469345941457, 9);
  sqcRYGate(q, 3.1183297982343987, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.483594033038931, 11);
  sqcRYGate(q, -0.13600046862577653, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.8627092872220907, 11);
  sqcRYGate(q, -1.899645738694316, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.362520044159262, 13);
  sqcRYGate(q, 1.5681218278383187, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.0707020321824743, 13);
  sqcRYGate(q, -0.2941306970990123, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.2535933988161947, 15);
  sqcRYGate(q, 2.7838652228142657, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.411386657292884, 15);
  sqcRYGate(q, -0.3920082893646848, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.803850715585237, 17);
  sqcRYGate(q, 1.9830590186221642, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.2340755356694695, 17);
  sqcRYGate(q, -2.7160648595807158, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.1504504946598031, 0);
  sqcRYGate(q, 2.594803017032858, 1);
  sqcRYGate(q, -1.5637549812849438, 2);
  sqcRYGate(q, 0.07198115314231934, 3);
  sqcRYGate(q, -1.5716363834565357, 4);
  sqcRYGate(q, -0.022927848944164782, 5);
  sqcRYGate(q, 1.5530956171218901, 6);
  sqcRYGate(q, 3.0210860293267254, 7);
  sqcRYGate(q, -1.5203431789923743, 8);
  sqcRYGate(q, 1.4869280968597056, 9);
  sqcRYGate(q, 1.5865204197989462, 10);
  sqcRYGate(q, 0.006303996059788554, 11);
  sqcRYGate(q, -1.556764890010602, 12);
  sqcRYGate(q, -3.130741870124295, 13);
  sqcRYGate(q, -1.5719125548187352, 14);
  sqcRYGate(q, 0.013803744248119924, 15);
  sqcRYGate(q, 2.3062340845240565, 16);
  sqcRYGate(q, -3.1368331098115156, 17);
  sqcRYGate(q, -2.361502861461843, 18);
  sqcRYGate(q, 0.8205102731778932, 19);

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
