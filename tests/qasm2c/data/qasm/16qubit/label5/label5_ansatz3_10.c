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

  sqcRYGate(q, -0.9183527782911474, 0);
  sqcRZGate(q, 2.0467595908202467, 0);
  sqcRYGate(q, 2.4193481850027974, 1);
  sqcRZGate(q, -0.9173775832130919, 1);
  sqcRYGate(q, -2.11013778252272, 2);
  sqcRZGate(q, -2.615760364638648, 2);
  sqcRYGate(q, 0.26260338479682854, 3);
  sqcRZGate(q, 3.000876704621283, 3);
  sqcRYGate(q, -0.000657357953401494, 4);
  sqcRZGate(q, 1.8225901092054797, 4);
  sqcRYGate(q, 3.1341712349652564, 5);
  sqcRZGate(q, 0.22647718421480878, 5);
  sqcRYGate(q, 3.141540473430808, 6);
  sqcRZGate(q, 2.2962802012519488, 6);
  sqcRYGate(q, 1.4477707281182954, 7);
  sqcRZGate(q, 0.1857964107467369, 7);
  sqcRYGate(q, -1.453245534195137, 8);
  sqcRZGate(q, 0.013489462469726909, 8);
  sqcRYGate(q, 2.5852849312990083, 9);
  sqcRZGate(q, 0.6769377796709527, 9);
  sqcRYGate(q, -0.0057171251928412326, 10);
  sqcRZGate(q, -3.0711678861490013, 10);
  sqcRYGate(q, 3.141478504661275, 11);
  sqcRZGate(q, -1.7737474529369974, 11);
  sqcRYGate(q, 0.8007064044264505, 12);
  sqcRZGate(q, -2.126074735750281, 12);
  sqcRYGate(q, -1.5708316684393369, 13);
  sqcRZGate(q, 1.5770436275296378, 13);
  sqcRYGate(q, 1.5675462260605624, 14);
  sqcRZGate(q, -2.8220309540895996, 14);
  sqcRYGate(q, -1.475453215267164, 15);
  sqcRZGate(q, 1.6632843837298608, 15);
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
  sqcRYGate(q, -1.4105250429941627, 0);
  sqcRZGate(q, 2.9078953546546034, 0);
  sqcRYGate(q, -0.051879720531510465, 1);
  sqcRZGate(q, -2.6204447174481316, 1);
  sqcRYGate(q, -0.8377001463133763, 2);
  sqcRZGate(q, 1.940139038721316, 2);
  sqcRYGate(q, 0.0401742635997382, 3);
  sqcRZGate(q, -1.146653686682328, 3);
  sqcRYGate(q, 3.1376893365970706, 4);
  sqcRZGate(q, 1.2016282161393885, 4);
  sqcRYGate(q, 4.3834902093919936e-05, 5);
  sqcRZGate(q, 2.6834767265523554, 5);
  sqcRYGate(q, -3.069967978234127e-05, 6);
  sqcRZGate(q, 2.1709421260242117, 6);
  sqcRYGate(q, 3.1407037148207686, 7);
  sqcRZGate(q, 0.13263652559485775, 7);
  sqcRYGate(q, -1.6504955147057623, 8);
  sqcRZGate(q, 2.76421058007834, 8);
  sqcRYGate(q, -0.0017759723405248449, 9);
  sqcRZGate(q, 2.7019549875469706, 9);
  sqcRYGate(q, 1.568441820653639, 10);
  sqcRZGate(q, 0.003643175117670871, 10);
  sqcRYGate(q, 0.0005787448101273185, 11);
  sqcRZGate(q, -1.9658787419260992, 11);
  sqcRYGate(q, 3.063311426556025, 12);
  sqcRZGate(q, 1.9929721273949905, 12);
  sqcRYGate(q, 1.4917227635871144, 13);
  sqcRZGate(q, 1.5695423562655495, 13);
  sqcRYGate(q, -0.044103028037704384, 14);
  sqcRZGate(q, -0.31989433972312487, 14);
  sqcRYGate(q, 1.638550722489109, 15);
  sqcRZGate(q, 0.25482676345295985, 15);
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
  sqcRYGate(q, 1.6549933926189604, 0);
  sqcRZGate(q, -1.3813396971511782, 0);
  sqcRYGate(q, 1.5565580352510295, 1);
  sqcRZGate(q, -1.5998851072731481, 1);
  sqcRYGate(q, -2.932552250033276, 2);
  sqcRZGate(q, -0.36983377889989294, 2);
  sqcRYGate(q, 1.1767200162303075, 3);
  sqcRZGate(q, 0.9148490973862335, 3);
  sqcRYGate(q, -3.141126330421259, 4);
  sqcRZGate(q, -1.9266115920931308, 4);
  sqcRYGate(q, -0.008328670020457452, 5);
  sqcRZGate(q, -0.2524362863734577, 5);
  sqcRYGate(q, -0.5441637771838013, 6);
  sqcRZGate(q, 1.899068752000419, 6);
  sqcRYGate(q, -1.3951817884665196, 7);
  sqcRZGate(q, -2.3441961630848773, 7);
  sqcRYGate(q, 3.1370510600357133, 8);
  sqcRZGate(q, -0.04512640600506845, 8);
  sqcRYGate(q, 3.046162129819531, 9);
  sqcRZGate(q, -0.3725863164540055, 9);
  sqcRYGate(q, -1.5726813251118257, 10);
  sqcRZGate(q, 0.003486726186351514, 10);
  sqcRYGate(q, -3.1414880475524125, 11);
  sqcRZGate(q, -0.9344393333402047, 11);
  sqcRYGate(q, -1.5834000449501318, 12);
  sqcRZGate(q, -0.0004785192075811295, 12);
  sqcRYGate(q, 1.6124486624310181, 13);
  sqcRZGate(q, -0.9921807575973394, 13);
  sqcRYGate(q, 1.5777884090579597, 14);
  sqcRZGate(q, 0.30710051489068935, 14);
  sqcRYGate(q, 2.522818607871865, 15);
  sqcRZGate(q, 0.2733680616346046, 15);
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
  sqcRYGate(q, -1.3464077926499745, 0);
  sqcRZGate(q, -1.868148320422132, 0);
  sqcRYGate(q, -2.9193031419337125, 1);
  sqcRZGate(q, 1.3835354628482837, 1);
  sqcRYGate(q, -0.1039832275813756, 2);
  sqcRZGate(q, -0.40097257471272335, 2);
  sqcRYGate(q, 3.092706676094426, 3);
  sqcRZGate(q, -1.8292708768548314, 3);
  sqcRYGate(q, -1.5698082738520327, 4);
  sqcRZGate(q, 1.5474240730883642, 4);
  sqcRYGate(q, -3.1414327913616718, 5);
  sqcRZGate(q, 2.216727017764167, 5);
  sqcRYGate(q, 0.002129620439937359, 6);
  sqcRZGate(q, 0.5088928982468852, 6);
  sqcRYGate(q, 1.4836151262741488, 7);
  sqcRZGate(q, 0.10455929374867434, 7);
  sqcRYGate(q, 0.8225065156156575, 8);
  sqcRZGate(q, 1.5880919908080067, 8);
  sqcRYGate(q, -0.04405369021604491, 9);
  sqcRZGate(q, 0.9208973752506815, 9);
  sqcRYGate(q, -1.6886577109514163, 10);
  sqcRZGate(q, 1.5719425692398292, 10);
  sqcRYGate(q, -3.141252398432451, 11);
  sqcRZGate(q, -2.8135843271952385, 11);
  sqcRYGate(q, 1.5515637402381033, 12);
  sqcRZGate(q, -1.5267222493343262, 12);
  sqcRYGate(q, -2.6936412277334227, 13);
  sqcRZGate(q, -0.6304935024519351, 13);
  sqcRYGate(q, -1.6150077515092127, 14);
  sqcRZGate(q, 1.757283974588578, 14);
  sqcRYGate(q, -2.3175301690725023, 15);
  sqcRZGate(q, -0.8022523395348732, 15);
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
  sqcRYGate(q, 0.3612844857570767, 0);
  sqcRZGate(q, 2.4999120331371505, 0);
  sqcRYGate(q, -2.3359194607310476, 1);
  sqcRZGate(q, -1.965692638275673, 1);
  sqcRYGate(q, 1.5718908388146826, 2);
  sqcRZGate(q, 1.553220534350853, 2);
  sqcRYGate(q, 1.3066327385166758, 3);
  sqcRZGate(q, 1.0683202360587183, 3);
  sqcRYGate(q, 2.4873604579158157, 4);
  sqcRZGate(q, -1.1918762121860542, 4);
  sqcRYGate(q, 3.138737539354037, 5);
  sqcRZGate(q, -1.6056045356600945, 5);
  sqcRYGate(q, 3.1415509602153855, 6);
  sqcRZGate(q, -2.314563511692941, 6);
  sqcRYGate(q, 3.0652030657794542, 7);
  sqcRZGate(q, 0.6402321928852885, 7);
  sqcRYGate(q, 1.5719825815563233, 8);
  sqcRZGate(q, 0.005147392763259745, 8);
  sqcRYGate(q, -3.139289688611979, 9);
  sqcRZGate(q, -2.4461184467574175, 9);
  sqcRYGate(q, -1.5564729435928282, 10);
  sqcRZGate(q, 2.070422473465342, 10);
  sqcRYGate(q, 0.004839098541770781, 11);
  sqcRZGate(q, -3.116573661715279, 11);
  sqcRYGate(q, 3.140606310401395, 12);
  sqcRZGate(q, 1.670303790636292, 12);
  sqcRYGate(q, 0.004465638649600424, 13);
  sqcRZGate(q, 1.165637221737004, 13);
  sqcRYGate(q, -0.009443334051367375, 14);
  sqcRZGate(q, -0.7651559550594831, 14);
  sqcRYGate(q, 3.1400505962882614, 15);
  sqcRZGate(q, 1.0392282355764326, 15);
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
  sqcRYGate(q, 1.571442595183556, 0);
  sqcRZGate(q, 1.4884544313518555, 0);
  sqcRYGate(q, 0.19913095835177685, 1);
  sqcRZGate(q, -2.892614796135252, 1);
  sqcRYGate(q, 1.569932257474787, 2);
  sqcRZGate(q, 3.1405850918110163, 2);
  sqcRYGate(q, 0.0005784511411235675, 3);
  sqcRZGate(q, 1.221279474639142, 3);
  sqcRYGate(q, -3.1375108578973303, 4);
  sqcRZGate(q, 1.963149685867271, 4);
  sqcRYGate(q, 0.001424435508997225, 5);
  sqcRZGate(q, 1.6295964055302512, 5);
  sqcRYGate(q, 1.571735511206584, 6);
  sqcRZGate(q, -2.241604144299674, 6);
  sqcRYGate(q, -0.10142022474314383, 7);
  sqcRZGate(q, -2.1041161137618802, 7);
  sqcRYGate(q, -2.3056569974680436, 8);
  sqcRZGate(q, 1.5751910363120452, 8);
  sqcRYGate(q, 0.3019779319705142, 9);
  sqcRZGate(q, 3.1405282272011372, 9);
  sqcRYGate(q, -0.004260382536102725, 10);
  sqcRZGate(q, -2.018941153640725, 10);
  sqcRYGate(q, -0.0003762073866450145, 11);
  sqcRZGate(q, -0.17974988759463972, 11);
  sqcRYGate(q, 2.405532813363154, 12);
  sqcRZGate(q, -2.2925847110542503, 12);
  sqcRYGate(q, -0.23160613200380054, 13);
  sqcRZGate(q, 2.180065945029022, 13);
  sqcRYGate(q, 2.3773387359804254, 14);
  sqcRZGate(q, 1.1601530214680533, 14);
  sqcRYGate(q, 3.1102144212748923, 15);
  sqcRZGate(q, 1.9122415525772511, 15);
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
  sqcRYGate(q, 3.1342375586322677, 0);
  sqcRZGate(q, 1.4702786183849144, 0);
  sqcRYGate(q, 1.5722745012309112, 1);
  sqcRZGate(q, -0.36158061435947086, 1);
  sqcRYGate(q, 1.570659515608864, 2);
  sqcRZGate(q, -1.5613238677937107, 2);
  sqcRYGate(q, -1.5690244371754112, 3);
  sqcRZGate(q, -1.5583968202954728, 3);
  sqcRYGate(q, 1.7343454975389996, 4);
  sqcRZGate(q, 0.00455399955073954, 4);
  sqcRYGate(q, 3.138648562148546, 5);
  sqcRZGate(q, -2.142606511486528, 5);
  sqcRYGate(q, -3.5342480390743435e-05, 6);
  sqcRZGate(q, 0.6671384155429134, 6);
  sqcRYGate(q, -1.5704607961315349, 7);
  sqcRZGate(q, 3.1398974971833833, 7);
  sqcRYGate(q, -1.565936192953858, 8);
  sqcRZGate(q, -3.1391613427511316, 8);
  sqcRYGate(q, 1.5690102563342148, 9);
  sqcRZGate(q, -3.140357162925029, 9);
  sqcRYGate(q, -0.03777462892621131, 10);
  sqcRZGate(q, 0.5445603744131358, 10);
  sqcRYGate(q, -3.1380678487936557, 11);
  sqcRZGate(q, -2.9558978009161145, 11);
  sqcRYGate(q, -3.1368366582794596, 12);
  sqcRZGate(q, 2.3839195016298285, 12);
  sqcRYGate(q, -1.5665870768494177, 13);
  sqcRZGate(q, 2.1940293738727283, 13);
  sqcRYGate(q, -1.5707689003392145, 14);
  sqcRZGate(q, -2.0893211923344097, 14);
  sqcRYGate(q, 3.1411766914180994, 15);
  sqcRZGate(q, 1.5633275870611691, 15);
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
  sqcRYGate(q, 1.5706444857535615, 0);
  sqcRZGate(q, 0.24897804422471911, 0);
  sqcRYGate(q, -3.1357078589622276, 1);
  sqcRZGate(q, 1.1890494552552457, 1);
  sqcRYGate(q, 1.5672313818766233, 2);
  sqcRZGate(q, 1.863445569911963, 2);
  sqcRYGate(q, -1.5543430074099036, 3);
  sqcRZGate(q, -1.5661474408136715, 3);
  sqcRYGate(q, -1.3782273138702417, 4);
  sqcRZGate(q, 1.5675160813252909, 4);
  sqcRYGate(q, -0.003890689864552928, 5);
  sqcRZGate(q, 2.056966416595774, 5);
  sqcRYGate(q, -1.5712669737440716, 6);
  sqcRZGate(q, 1.6510103470759427, 6);
  sqcRYGate(q, -1.566771459738181, 7);
  sqcRZGate(q, 1.958668249585768, 7);
  sqcRYGate(q, 2.388794521452946, 8);
  sqcRZGate(q, -3.141366496261518, 8);
  sqcRYGate(q, -1.569033391222535, 9);
  sqcRZGate(q, -1.017528034395303, 9);
  sqcRYGate(q, -3.1410722695208997, 10);
  sqcRZGate(q, 0.8372230552314917, 10);
  sqcRYGate(q, 3.14129317013035, 11);
  sqcRZGate(q, 2.5146906015029256, 11);
  sqcRYGate(q, 2.664819151283576, 12);
  sqcRZGate(q, -1.3771025086615885, 12);
  sqcRYGate(q, -2.695060781810701, 13);
  sqcRZGate(q, -2.467402460864206, 13);
  sqcRYGate(q, 0.9737993255343702, 14);
  sqcRZGate(q, 2.1315564407878353, 14);
  sqcRYGate(q, -1.5093628242171704, 15);
  sqcRZGate(q, 1.4138900912526193, 15);
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
  sqcRYGate(q, -0.0009022292524640817, 0);
  sqcRZGate(q, 0.8542166184816039, 0);
  sqcRYGate(q, -1.5511673769458747, 1);
  sqcRZGate(q, -0.7242428117034104, 1);
  sqcRYGate(q, -0.003975238913587414, 2);
  sqcRZGate(q, -1.858788871953477, 2);
  sqcRYGate(q, 1.5830219431660444, 3);
  sqcRZGate(q, 3.13740333096426, 3);
  sqcRYGate(q, -0.48723349567033214, 4);
  sqcRZGate(q, 1.6857968351212627, 4);
  sqcRYGate(q, 3.032201401524439, 5);
  sqcRZGate(q, 1.5779916324615424, 5);
  sqcRYGate(q, 3.1184423374430024, 6);
  sqcRZGate(q, -3.0673686473788817, 6);
  sqcRYGate(q, -3.1415643599016936, 7);
  sqcRZGate(q, -1.513210597088635, 7);
  sqcRYGate(q, -1.5708401775955192, 8);
  sqcRZGate(q, -0.9591293174132237, 8);
  sqcRYGate(q, -1.0885938830964923, 9);
  sqcRZGate(q, -1.2488850389506994, 9);
  sqcRYGate(q, -0.0004717107803779925, 10);
  sqcRZGate(q, -1.7918881575990075, 10);
  sqcRYGate(q, 1.3003442493775172, 11);
  sqcRZGate(q, -1.7274450151381568, 11);
  sqcRYGate(q, 0.0015354249953940524, 12);
  sqcRZGate(q, 1.3766740084173867, 12);
  sqcRYGate(q, 1.0286327316070343, 13);
  sqcRZGate(q, 1.257539142963168, 13);
  sqcRYGate(q, -0.0014419393514364233, 14);
  sqcRZGate(q, -0.3973449747681084, 14);
  sqcRYGate(q, -2.0407244787861076, 15);
  sqcRZGate(q, 0.9596725272789648, 15);
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
  sqcRYGate(q, -3.137359491399378, 0);
  sqcRZGate(q, 2.1462445212545838, 0);
  sqcRYGate(q, 3.140894757036995, 1);
  sqcRZGate(q, -0.7052227280931246, 1);
  sqcRYGate(q, -1.5707818859323674, 2);
  sqcRZGate(q, -1.570609700772212, 2);
  sqcRYGate(q, -0.5117560485488327, 3);
  sqcRZGate(q, 2.609953008965287, 3);
  sqcRYGate(q, 3.1040242948996437, 4);
  sqcRZGate(q, -3.031262002437675, 4);
  sqcRYGate(q, 0.04282499779643523, 5);
  sqcRZGate(q, 1.557843135463199, 5);
  sqcRYGate(q, -1.5679299249397003, 6);
  sqcRZGate(q, 0.3515876910190622, 6);
  sqcRYGate(q, -3.13213545934314, 7);
  sqcRZGate(q, 2.5164836928818897, 7);
  sqcRYGate(q, 0.00035876312620786166, 8);
  sqcRZGate(q, -1.3155055397392317, 8);
  sqcRYGate(q, -3.1414010703219404, 9);
  sqcRZGate(q, 2.821151771007767, 9);
  sqcRYGate(q, -0.043128515518491284, 10);
  sqcRZGate(q, -2.73016651080929, 10);
  sqcRYGate(q, 0.0014123462379291851, 11);
  sqcRZGate(q, 1.7274574602515498, 11);
  sqcRYGate(q, -1.3120960306482774, 12);
  sqcRZGate(q, -0.6166351029763044, 12);
  sqcRYGate(q, 0.00017428355062154566, 13);
  sqcRZGate(q, -2.339188039249596, 13);
  sqcRYGate(q, -2.1308045823041524, 14);
  sqcRZGate(q, 2.034169904894128, 14);
  sqcRYGate(q, -3.1410403153550486, 15);
  sqcRZGate(q, 0.9631536729454551, 15);
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
  sqcRYGate(q, 3.1415166974837607, 0);
  sqcRZGate(q, -1.6079060140417276, 0);
  sqcRYGate(q, 1.597824572200875, 1);
  sqcRZGate(q, 0.0011739296935777675, 1);
  sqcRYGate(q, -1.5717527663654252, 2);
  sqcRZGate(q, 1.5733370740781085, 2);
  sqcRYGate(q, -3.135676248276896, 3);
  sqcRZGate(q, 2.6048485827436005, 3);
  sqcRYGate(q, -2.9660876627186448, 4);
  sqcRZGate(q, -1.5766682563221321, 4);
  sqcRYGate(q, -0.12742884575416652, 5);
  sqcRZGate(q, 3.1369594950095108, 5);
  sqcRYGate(q, 3.121109704360196, 6);
  sqcRZGate(q, 1.9215953939944086, 6);
  sqcRYGate(q, 3.141262144096898, 7);
  sqcRZGate(q, -0.2914338548821229, 7);
  sqcRYGate(q, -0.0030218033023841073, 8);
  sqcRZGate(q, 0.5660097780822495, 8);
  sqcRYGate(q, -0.7165421317987466, 9);
  sqcRZGate(q, 2.6284549891054843, 9);
  sqcRYGate(q, -0.0009316917644269636, 10);
  sqcRZGate(q, 2.7100250037470017, 10);
  sqcRYGate(q, -1.8410364115911455, 11);
  sqcRZGate(q, -0.009705519200685193, 11);
  sqcRYGate(q, -3.1398337426387055, 12);
  sqcRZGate(q, 2.578803657148354, 12);
  sqcRYGate(q, 3.1382355537786517, 13);
  sqcRZGate(q, -2.650643616419466, 13);
  sqcRYGate(q, 1.5565777589638967, 14);
  sqcRZGate(q, -0.4505533604477004, 14);
  sqcRYGate(q, -0.7461722652728033, 15);
  sqcRZGate(q, -0.07446305424493199, 15);
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
  sqcRYGate(q, -1.5697643385794815, 0);
  sqcRZGate(q, 4.93777134575879e-05, 0);
  sqcRYGate(q, 1.5716791925564584, 1);
  sqcRZGate(q, -0.000599185028408833, 1);
  sqcRYGate(q, 1.5740429701472929, 2);
  sqcRZGate(q, 2.1463632078000465, 2);
  sqcRYGate(q, -1.5693129608176342, 3);
  sqcRZGate(q, -1.5118274005478352, 3);
  sqcRYGate(q, -1.5584991399120385, 4);
  sqcRZGate(q, 1.765637611746345, 4);
  sqcRYGate(q, -1.571761865926426, 5);
  sqcRZGate(q, -3.101846279516356, 5);
  sqcRYGate(q, -1.5646726915150933, 6);
  sqcRZGate(q, 1.2189024040457048, 6);
  sqcRYGate(q, -1.5718927341725442, 7);
  sqcRZGate(q, -3.140217360370915, 7);
  sqcRYGate(q, 2.0624601086855887, 8);
  sqcRZGate(q, 1.395205571788265, 8);
  sqcRYGate(q, 2.545623392258278e-05, 9);
  sqcRZGate(q, -2.6611414914756266, 9);
  sqcRYGate(q, 1.5820111472860965, 10);
  sqcRZGate(q, -0.9439492123629654, 10);
  sqcRYGate(q, -1.566413763496514, 11);
  sqcRZGate(q, -0.12294359250774443, 11);
  sqcRYGate(q, 0.00014021764479466015, 12);
  sqcRZGate(q, 1.5171323590711028, 12);
  sqcRYGate(q, 1.570665401729225, 13);
  sqcRZGate(q, -0.8284025305363811, 13);
  sqcRYGate(q, 1.1396847273602797, 14);
  sqcRZGate(q, -1.3729068187200135, 14);
  sqcRYGate(q, 2.06695352582695, 15);
  sqcRZGate(q, -1.2653150747986812, 15);
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
  sqcRYGate(q, -1.570939730358437, 0);
  sqcRZGate(q, -1.565157844323318, 0);
  sqcRYGate(q, -1.570476397709772, 1);
  sqcRZGate(q, -0.26832754776795137, 1);
  sqcRYGate(q, 3.141558891447835, 2);
  sqcRZGate(q, 0.8438932990685117, 2);
  sqcRYGate(q, 3.141415461821525, 3);
  sqcRZGate(q, 1.6164475552424218, 3);
  sqcRYGate(q, 0.00010416923869955139, 4);
  sqcRZGate(q, 1.6132137963543052, 4);
  sqcRYGate(q, -0.0845155230512266, 5);
  sqcRZGate(q, 3.070681168581367, 5);
  sqcRYGate(q, -3.122287802129851, 6);
  sqcRZGate(q, 0.040263896876726234, 6);
  sqcRYGate(q, -1.5578781283844751, 7);
  sqcRZGate(q, 0.4399363634575836, 7);
  sqcRYGate(q, 0.0015449682853041784, 8);
  sqcRZGate(q, 0.10868467232116692, 8);
  sqcRYGate(q, -2.7405680848247016e-05, 9);
  sqcRZGate(q, -2.2052217404929912, 9);
  sqcRYGate(q, 3.1415343963460813, 10);
  sqcRZGate(q, 2.1977073308315798, 10);
  sqcRYGate(q, -6.428921530865495e-05, 11);
  sqcRZGate(q, 0.593330561671908, 11);
  sqcRYGate(q, 1.570823295617477, 12);
  sqcRZGate(q, 2.923024008426207, 12);
  sqcRYGate(q, 1.5707424515679875, 13);
  sqcRZGate(q, 2.269494591376821, 13);
  sqcRYGate(q, -1.5705388931550697, 14);
  sqcRZGate(q, 1.5376714893303027, 14);
  sqcRYGate(q, 3.1390794805595594, 15);
  sqcRZGate(q, -2.0499904822036403, 15);
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
  sqcRYGate(q, 1.569639729860619, 0);
  sqcRZGate(q, -1.0714583349658828, 0);
  sqcRYGate(q, 0.008130666085536196, 1);
  sqcRZGate(q, 3.0555862986189632, 1);
  sqcRYGate(q, -3.1405721980454557, 2);
  sqcRZGate(q, 0.7718323383442282, 2);
  sqcRYGate(q, 1.5704808491884483, 3);
  sqcRZGate(q, -0.3538454607492278, 3);
  sqcRYGate(q, 0.013260054044102208, 4);
  sqcRZGate(q, 1.8332498662031362, 4);
  sqcRYGate(q, 1.5708791890600375, 5);
  sqcRZGate(q, -0.35509346384686835, 5);
  sqcRYGate(q, -3.1415819840848807, 6);
  sqcRZGate(q, 0.8944512140843529, 6);
  sqcRYGate(q, 3.137059686376638, 7);
  sqcRZGate(q, 0.0848609097134585, 7);
  sqcRYGate(q, -1.4499949065145747, 8);
  sqcRZGate(q, 0.9962994131656709, 8);
  sqcRYGate(q, -0.021172577045733828, 9);
  sqcRZGate(q, 1.0935704070413916, 9);
  sqcRYGate(q, -1.573543579103986, 10);
  sqcRZGate(q, 2.071078454349707, 10);
  sqcRYGate(q, 0.004260252868277803, 11);
  sqcRZGate(q, -0.8257802180172664, 11);
  sqcRYGate(q, 3.1415403145232386, 12);
  sqcRZGate(q, -2.859388000928005, 12);
  sqcRYGate(q, 3.1414096667310076, 13);
  sqcRZGate(q, -2.799643033161763, 13);
  sqcRYGate(q, 1.5708370059973706, 14);
  sqcRZGate(q, -1.0702222286135452, 14);
  sqcRYGate(q, -1.5713455963859584, 15);
  sqcRZGate(q, 2.785189305255731, 15);

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
