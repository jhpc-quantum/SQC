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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -1.2332975424926955, 0);
  sqcRYGate(q, 2.350845632283509, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8249802807502684, 0);
  sqcRYGate(q, 0.250768986383477, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9151387491939325, 2);
  sqcRYGate(q, 1.0003514067610855, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5238779645770011, 2);
  sqcRYGate(q, -1.986391314731506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.702714537428466, 4);
  sqcRYGate(q, -1.8760627953371174, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5261217679832234, 4);
  sqcRYGate(q, -0.6942843554872292, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6294542953169333, 6);
  sqcRYGate(q, -0.29879125230969894, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5548693406357783, 6);
  sqcRYGate(q, 0.3449216365291958, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.14011745069848566, 8);
  sqcRYGate(q, -2.539256812269594, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.572737733208352, 8);
  sqcRYGate(q, 2.0116340725723525, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0426607418770053, 10);
  sqcRYGate(q, -1.945970401603513, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.1633595445880074, 10);
  sqcRYGate(q, 2.065095813103905, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.298495307591331, 0);
  sqcRYGate(q, 1.3308675334002524, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4874759666695425, 0);
  sqcRYGate(q, -0.7644443422657883, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.842327950430682, 2);
  sqcRYGate(q, 2.5524546345471633, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9742766497810278, 2);
  sqcRYGate(q, 1.5322174150461556, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.36586827633910757, 4);
  sqcRYGate(q, 2.719178423665232, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.04838640370121853, 4);
  sqcRYGate(q, -1.9698906766417303, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.7477956081361437, 6);
  sqcRYGate(q, -0.10699139061555502, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.1240996070146196, 6);
  sqcRYGate(q, 0.005350224554713456, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.606985396273481, 8);
  sqcRYGate(q, 1.665829822156156, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.4888632505113258, 8);
  sqcRYGate(q, 0.19469975750581198, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.712973090073459, 1);
  sqcRYGate(q, -1.321972373065928, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0059742592651397, 1);
  sqcRYGate(q, -0.8101893877931519, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6558166840592774, 3);
  sqcRYGate(q, 1.0541961044484458, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.0632711477704726, 3);
  sqcRYGate(q, 2.0218688643870166, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.9870772896245175, 5);
  sqcRYGate(q, -0.7341515037506774, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.094755210757469, 5);
  sqcRYGate(q, -2.9431613772635195, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7240767593725506, 7);
  sqcRYGate(q, -2.057881049999355, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.0260356392562473, 7);
  sqcRYGate(q, -3.0748988069438505, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.2682411211297715, 9);
  sqcRYGate(q, -3.0363113333438867, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.7645626500470355, 9);
  sqcRYGate(q, 0.1361291896738681, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.6734654293729285, 0);
  sqcRYGate(q, 0.38301264549539304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2802749752194624, 0);
  sqcRYGate(q, 2.4789716397560215, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6714004966408114, 2);
  sqcRYGate(q, -3.012988703963388, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2775060802379343, 2);
  sqcRYGate(q, 0.030081676877872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09291954541307945, 4);
  sqcRYGate(q, -1.4106009984357033, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3804961907834494, 4);
  sqcRYGate(q, 0.7780895686880935, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.07715055215741097, 6);
  sqcRYGate(q, 1.7833791636213103, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9237726330513831, 6);
  sqcRYGate(q, -3.038183948262851, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.133928962012793, 8);
  sqcRYGate(q, 2.3370871614052073, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.563211243256298, 8);
  sqcRYGate(q, -2.3279508767137744, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.316987714310491, 10);
  sqcRYGate(q, -0.3267882483098169, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7310875385488096, 10);
  sqcRYGate(q, 1.9091814203039972, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5979105968357903, 0);
  sqcRYGate(q, 2.8733460364852834, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.550320136222375, 0);
  sqcRYGate(q, -2.711776193976347, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.025731673943647, 2);
  sqcRYGate(q, 1.4511948367891918, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.740924988790914, 2);
  sqcRYGate(q, 0.968618908546028, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.8996455802656393, 4);
  sqcRYGate(q, -1.397003467813917, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.05865640728698, 4);
  sqcRYGate(q, -1.80784415809878, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5547966978640282, 6);
  sqcRYGate(q, -2.1453885121553107, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.08785081127573413, 6);
  sqcRYGate(q, 0.012001142167580525, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.1935043524343705, 8);
  sqcRYGate(q, -0.27450136220070065, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.8454725767120677, 8);
  sqcRYGate(q, -3.0099184687488805, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.685525178032683, 1);
  sqcRYGate(q, -3.011743154533488, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0537737878833133, 1);
  sqcRYGate(q, 0.667677651521176, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8035207554886132, 3);
  sqcRYGate(q, -0.03433961550732855, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.5460870048414566, 3);
  sqcRYGate(q, -1.3403623851076514, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7284054227847441, 5);
  sqcRYGate(q, -1.9128419867193012, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.13399922267221956, 5);
  sqcRYGate(q, -3.122118691098213, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.20041573269318586, 7);
  sqcRYGate(q, -1.1119675534281273, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.05335748075051239, 7);
  sqcRYGate(q, 3.123888028458037, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.788525046035673, 9);
  sqcRYGate(q, 0.2727298295674183, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.0226659388613997, 9);
  sqcRYGate(q, -1.7323842620751468, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.5186650303340514, 0);
  sqcRYGate(q, 0.3627852920498474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1175480281499217, 0);
  sqcRYGate(q, 0.44915087437915235, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0330202535191872, 2);
  sqcRYGate(q, 1.4701120600197868, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8005626162997506, 2);
  sqcRYGate(q, 0.8507312952320524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.03502923966448, 4);
  sqcRYGate(q, -2.4022388643773778, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.060766145848782, 4);
  sqcRYGate(q, 1.6539181563343566, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9946327067750564, 6);
  sqcRYGate(q, 2.479857856934946, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.27153528301270485, 6);
  sqcRYGate(q, 3.116476817732195, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0559166562886086, 8);
  sqcRYGate(q, -1.2592916367582936, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.37011225152088534, 8);
  sqcRYGate(q, 1.522303615341431, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.739790211353006, 10);
  sqcRYGate(q, 1.175461406421352, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.253943699448051, 10);
  sqcRYGate(q, -3.102764096128206, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.113280555977756, 0);
  sqcRYGate(q, -1.4196711074258077, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1410837261035818, 0);
  sqcRYGate(q, -3.1022821125465643, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.678753330082964, 2);
  sqcRYGate(q, 1.1232125281671597, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0182853372033844, 2);
  sqcRYGate(q, 1.7057594776154117, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.479837374538783, 4);
  sqcRYGate(q, -2.637499226562201, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.752598296859804, 4);
  sqcRYGate(q, -1.6880475896229112, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.693759642720024, 6);
  sqcRYGate(q, -1.9480422649741058, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0651138325659124, 6);
  sqcRYGate(q, -3.1230359757564057, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.0165124488060076, 8);
  sqcRYGate(q, -3.1310144409488183, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.8221797140989451, 8);
  sqcRYGate(q, -2.823774201825721, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.8719998343889187, 1);
  sqcRYGate(q, 2.2452717920340532, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1665864050639616, 1);
  sqcRYGate(q, -2.8812255835866014, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.098939078997916, 3);
  sqcRYGate(q, -2.0754236156086243, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.8346465750958303, 3);
  sqcRYGate(q, -0.13646444639374283, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9838999707634004, 5);
  sqcRYGate(q, 2.1896056271480004, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.866277131333992, 5);
  sqcRYGate(q, -0.019976942122796937, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8510851111324343, 7);
  sqcRYGate(q, 1.0402197082160547, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.771858484649817, 7);
  sqcRYGate(q, -3.118433432168833, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.3510838672088834, 9);
  sqcRYGate(q, -0.7141681987368623, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.7147004012231544, 9);
  sqcRYGate(q, -2.8573685564643148, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.829537093635354, 0);
  sqcRYGate(q, 1.920270129107685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0981657668321887, 0);
  sqcRYGate(q, -0.09893916443044772, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1205878505883136, 2);
  sqcRYGate(q, -0.0958007503891813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5421980302566913, 2);
  sqcRYGate(q, -0.1630387318660458, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.101268134178148, 4);
  sqcRYGate(q, -0.22522554706750944, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.10911805198202007, 4);
  sqcRYGate(q, -2.3724832549804713, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5726005531830634, 6);
  sqcRYGate(q, 0.7583967571114333, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.04747171089605816, 6);
  sqcRYGate(q, -3.0547792446276936, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.943852273578103, 8);
  sqcRYGate(q, 0.054381912192815456, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.337099312788774, 8);
  sqcRYGate(q, 1.4787803043322683, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9122294986199475, 10);
  sqcRYGate(q, 2.894320784958841, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5411189579513991, 10);
  sqcRYGate(q, 0.20310741985283706, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.45658852053374904, 0);
  sqcRYGate(q, -0.07232173367474148, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5243662345776616, 0);
  sqcRYGate(q, -1.296388860990444, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.861608660838332, 2);
  sqcRYGate(q, -1.058790619605877, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.0539457920214437, 2);
  sqcRYGate(q, -3.0479049477431626, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9056414758073377, 4);
  sqcRYGate(q, -2.9601469137604948, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.1832034685272932, 4);
  sqcRYGate(q, 1.3050711974594602, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.9390034436297867, 6);
  sqcRYGate(q, 2.5877133634185845, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.14456324391425743, 6);
  sqcRYGate(q, 0.049345521434065454, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.8340622183761406, 8);
  sqcRYGate(q, -2.4646168337749756, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.226144286144078, 8);
  sqcRYGate(q, 1.3642277503872782, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.2288468726518582, 1);
  sqcRYGate(q, -1.931577464502551, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3215320079965256, 1);
  sqcRYGate(q, -0.09894939003109116, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.80322312929856, 3);
  sqcRYGate(q, -1.6974833693639217, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.1096180305235124, 3);
  sqcRYGate(q, -0.012451578921822914, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.665304719812409, 5);
  sqcRYGate(q, 1.107468630741186, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.7412359723947093, 5);
  sqcRYGate(q, -3.0736298753159508, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.287182995466413, 7);
  sqcRYGate(q, 1.5744635790987493, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.755987208103714, 7);
  sqcRYGate(q, -0.009589677209870135, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.048133587643028, 9);
  sqcRYGate(q, 2.987087738639767, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.49446558841884275, 9);
  sqcRYGate(q, -1.2901360155515444, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.899895040565839, 0);
  sqcRYGate(q, 3.0296008801209733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6707354490042459, 0);
  sqcRYGate(q, -1.563830590889097, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9253024154547518, 2);
  sqcRYGate(q, 0.7123821155998923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.19321016101739327, 2);
  sqcRYGate(q, -2.982043323242623, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.29969797928460096, 4);
  sqcRYGate(q, 0.7813941867688994, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0830314485105155, 4);
  sqcRYGate(q, 1.0862638676323488, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.864526305998079, 6);
  sqcRYGate(q, -2.5526754614903666, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.01999023787951959, 6);
  sqcRYGate(q, 3.088991794958241, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2806150167578638, 8);
  sqcRYGate(q, -1.5259771417025647, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7895502428130003, 8);
  sqcRYGate(q, 0.13325721555930503, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6387192865814955, 10);
  sqcRYGate(q, -1.7519623375103281, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.586507650874183, 10);
  sqcRYGate(q, 0.41873539567315554, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.014395967169427593, 0);
  sqcRYGate(q, 1.2572557357433913, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3291032383582868, 0);
  sqcRYGate(q, -2.978012307176375, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2462728051354315, 2);
  sqcRYGate(q, -0.8079693113105755, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.0402837782391168, 2);
  sqcRYGate(q, 0.11630194954680384, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.2415458789441236, 4);
  sqcRYGate(q, -0.5231238760839229, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.5296596915969705, 4);
  sqcRYGate(q, 2.51287143996249, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5754488457585674, 6);
  sqcRYGate(q, -0.5864706091086633, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.0654931944863493, 6);
  sqcRYGate(q, 1.2513439974732319, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.5328605390156667, 8);
  sqcRYGate(q, -1.616324533504654, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.1365735854632963, 8);
  sqcRYGate(q, -0.32677787111364687, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.54107121666718, 1);
  sqcRYGate(q, -2.3716888119540207, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9909499989221251, 1);
  sqcRYGate(q, -1.9672689659366416, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.131921561226422, 3);
  sqcRYGate(q, -2.680341697298588, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.0970311220086817, 3);
  sqcRYGate(q, -2.3126734641630993, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.41642486804057, 5);
  sqcRYGate(q, 2.553253377326, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5065053850431167, 5);
  sqcRYGate(q, 2.4179273854689907, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.901090930775932, 7);
  sqcRYGate(q, -3.0379467273668403, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.5345977614738622, 7);
  sqcRYGate(q, 0.13273493568131034, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.3009946643237313, 9);
  sqcRYGate(q, -2.1089494093940075, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.7204854238910016, 9);
  sqcRYGate(q, 1.0519647939620125, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.2132410616680698, 0);
  sqcRYGate(q, -1.8931033504712524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7229436190966374, 0);
  sqcRYGate(q, 0.259522873887887, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.917390329311943, 2);
  sqcRYGate(q, 1.7888157542533007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1647350476316767, 2);
  sqcRYGate(q, -1.6284805048801179, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.056805988149133, 4);
  sqcRYGate(q, -0.9488952958924601, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.02317451441199836, 4);
  sqcRYGate(q, 0.020083707552686292, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.950230952179829, 6);
  sqcRYGate(q, -0.022244799043136254, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1396922404910397, 6);
  sqcRYGate(q, -0.0423474335534164, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.08970253619173807, 8);
  sqcRYGate(q, 0.5407753403383514, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0978207098934196, 8);
  sqcRYGate(q, -0.0033214232800514417, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.692695977184538, 10);
  sqcRYGate(q, -1.6915892859554087, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0919378287688137, 10);
  sqcRYGate(q, -0.08675683673978618, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0435308740656266, 0);
  sqcRYGate(q, 2.9481761257689394, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.560209112792001, 0);
  sqcRYGate(q, -1.7072565890377385, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9608236673076678, 2);
  sqcRYGate(q, 1.6978681009394094, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.3175367800187784, 2);
  sqcRYGate(q, -0.46335127147587674, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3604071647585338, 4);
  sqcRYGate(q, -2.4982539204485437, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.35977926675305894, 4);
  sqcRYGate(q, 1.2157966942314007, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.9069640129704077, 6);
  sqcRYGate(q, 2.907737579194242, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.933808441639234, 6);
  sqcRYGate(q, -0.2410714636433493, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.5332145458422266, 8);
  sqcRYGate(q, -1.6062099843057427, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.2719906759138646, 8);
  sqcRYGate(q, 0.3352202185597841, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.596447724731729, 1);
  sqcRYGate(q, -1.6969015158141227, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8850002813224235, 1);
  sqcRYGate(q, -0.10512030902267533, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.828028516756717, 3);
  sqcRYGate(q, 1.8107526741564126, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.7126948803872497, 3);
  sqcRYGate(q, -2.904096791257129, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7117670970767316, 5);
  sqcRYGate(q, -0.5406361703522675, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.055772018788617, 5);
  sqcRYGate(q, 2.6458694941580485, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.8249841717443775, 7);
  sqcRYGate(q, -0.6871888859693271, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.840621849313398, 7);
  sqcRYGate(q, 0.8226175491433217, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.463968991983299, 9);
  sqcRYGate(q, 1.4403817047510037, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.28770919066452744, 9);
  sqcRYGate(q, 0.8066528505068336, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.8510592167366413, 0);
  sqcRYGate(q, 2.0697576191933185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7328539609610505, 0);
  sqcRYGate(q, -1.4272105063143439, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.696526136217832, 2);
  sqcRYGate(q, -2.542710866574422, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0768214510373686, 2);
  sqcRYGate(q, -3.099240953907799, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9187697775237381, 4);
  sqcRYGate(q, 0.2330865347178378, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.141494803792416, 4);
  sqcRYGate(q, -3.1329602772954988, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0857975903218318, 6);
  sqcRYGate(q, -1.711698662040571, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.13740200784815, 6);
  sqcRYGate(q, 0.010788815861981296, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.302453975230021, 8);
  sqcRYGate(q, 0.6011956233023845, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1043736325298195, 8);
  sqcRYGate(q, -3.133329467697676, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.1522541493414018, 10);
  sqcRYGate(q, -2.6096008638593053, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1179779726275676, 10);
  sqcRYGate(q, 0.2003660170974729, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8165202245688221, 0);
  sqcRYGate(q, 1.7933283267391833, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1663121668499343, 0);
  sqcRYGate(q, -1.7963647477151348, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.795375528905726, 2);
  sqcRYGate(q, -0.5020983652246329, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.008850314827680813, 2);
  sqcRYGate(q, 3.085053922521636, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.726132421007685, 4);
  sqcRYGate(q, -2.320275233017715, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.2595743815793032, 4);
  sqcRYGate(q, -1.9994922699246849, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.365167388709797, 6);
  sqcRYGate(q, 0.8680552332787537, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.6097766933062183, 6);
  sqcRYGate(q, -1.3830265991517265, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.8676540817954819, 8);
  sqcRYGate(q, 0.36971796245478394, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.3288016284755093, 8);
  sqcRYGate(q, 1.434759860828992, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.0858314020018835, 1);
  sqcRYGate(q, -0.7291119901340709, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5375557290715998, 1);
  sqcRYGate(q, -0.7014085870487156, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1795362513398539, 3);
  sqcRYGate(q, -1.7391573447061637, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.6962713133309713, 3);
  sqcRYGate(q, 0.45514973769389494, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.8241615650508888, 5);
  sqcRYGate(q, -0.03755912996451629, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.813199979671222, 5);
  sqcRYGate(q, -0.09118178827375657, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.3243388409620866, 7);
  sqcRYGate(q, -0.45864110065165675, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.603994219375263, 7);
  sqcRYGate(q, -0.770209379340014, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.091876568263683, 9);
  sqcRYGate(q, 2.2688485858123304, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.0004546764793862, 9);
  sqcRYGate(q, 2.7718823998832, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.017102977376506345, 0);
  sqcRYGate(q, -1.8644909082291843, 1);
  sqcRYGate(q, -1.6661823972114034, 2);
  sqcRYGate(q, -1.5639201069439785, 3);
  sqcRYGate(q, 3.126760423121545, 4);
  sqcRYGate(q, -2.617587383682111, 5);
  sqcRYGate(q, -0.09975083516863575, 6);
  sqcRYGate(q, -2.492982363981506, 7);
  sqcRYGate(q, -1.4949069885302073, 8);
  sqcRYGate(q, -2.735424539644375, 9);
  sqcRYGate(q, -3.0458413088430407, 10);
  sqcRYGate(q, 1.0255310276422192, 11);

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
