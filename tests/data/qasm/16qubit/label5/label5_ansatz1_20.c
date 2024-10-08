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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 3.0021239053918105, 0);
  sqcRZGate(q, -2.530882653721645, 0);
  sqcRYGate(q, 2.5355731796165566, 1);
  sqcRZGate(q, -1.7354993494501034, 1);
  sqcRYGate(q, 0.003961151053280579, 2);
  sqcRZGate(q, 1.6574543825875345, 2);
  sqcRYGate(q, 0.2884404675405543, 3);
  sqcRZGate(q, -2.7790900853200062, 3);
  sqcRYGate(q, -3.0345532973526734, 4);
  sqcRZGate(q, 1.5514258145040376, 4);
  sqcRYGate(q, 0.0473172799195796, 5);
  sqcRZGate(q, 0.15252691079589198, 5);
  sqcRYGate(q, 0.030901393459598303, 6);
  sqcRZGate(q, 2.7343292993234414, 6);
  sqcRYGate(q, 0.8765084839854006, 7);
  sqcRZGate(q, -1.8725284441765924, 7);
  sqcRYGate(q, 3.118978026571034, 8);
  sqcRZGate(q, -0.036426996221256315, 8);
  sqcRYGate(q, 2.479340641470413, 9);
  sqcRZGate(q, 1.0795594567780373, 9);
  sqcRYGate(q, -0.29520682623977873, 10);
  sqcRZGate(q, -0.456307248370722, 10);
  sqcRYGate(q, 0.09831512184386072, 11);
  sqcRZGate(q, -0.623703011845042, 11);
  sqcRYGate(q, 2.3310622208924627, 12);
  sqcRZGate(q, -0.737290364253931, 12);
  sqcRYGate(q, 3.1075810447633865, 13);
  sqcRZGate(q, 2.4426218534937463, 13);
  sqcRYGate(q, 2.6525424735432646, 14);
  sqcRZGate(q, -2.131769633516293, 14);
  sqcRYGate(q, 0.4609049193160333, 15);
  sqcRZGate(q, -1.8687072471961006, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.4103726419037779, 0);
  sqcRZGate(q, -2.9666701465215968, 0);
  sqcRYGate(q, 2.488911404231988, 1);
  sqcRZGate(q, 2.850895441772082, 1);
  sqcRYGate(q, 3.1014814623479343, 2);
  sqcRZGate(q, 2.4166538158931603, 2);
  sqcRYGate(q, 0.15156447535099102, 3);
  sqcRZGate(q, 1.3924231360513115, 3);
  sqcRYGate(q, 2.8916933597366024, 4);
  sqcRZGate(q, -2.8902627445453244, 4);
  sqcRYGate(q, -3.10244998158147, 5);
  sqcRZGate(q, -0.14846553394101034, 5);
  sqcRYGate(q, 1.5538172277906748, 6);
  sqcRZGate(q, 0.8872892743482284, 6);
  sqcRYGate(q, -0.06995466738273581, 7);
  sqcRZGate(q, 1.2462465272552299, 7);
  sqcRYGate(q, 3.13778230114619, 8);
  sqcRZGate(q, -1.3944213120190891, 8);
  sqcRYGate(q, 1.1853915523966068, 9);
  sqcRZGate(q, 2.584452071117743, 9);
  sqcRYGate(q, -0.01805302025120792, 10);
  sqcRZGate(q, -1.0697548297777457, 10);
  sqcRYGate(q, -0.42947507865367124, 11);
  sqcRZGate(q, -1.575301409209401, 11);
  sqcRYGate(q, 2.730169553896982, 12);
  sqcRZGate(q, -1.1814941863435395, 12);
  sqcRYGate(q, -2.1480073323018756, 13);
  sqcRZGate(q, -2.5058390173255356, 13);
  sqcRYGate(q, -1.9685939801577357, 14);
  sqcRZGate(q, 2.947859541697379, 14);
  sqcRYGate(q, 0.36059017680348576, 15);
  sqcRZGate(q, 2.9666808165109573, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.3762086915421445, 0);
  sqcRZGate(q, -2.365562670064341, 0);
  sqcRYGate(q, 1.8222168556060159, 1);
  sqcRZGate(q, 0.3725224750172691, 1);
  sqcRYGate(q, -0.040672280455856864, 2);
  sqcRZGate(q, 0.4830780572720359, 2);
  sqcRYGate(q, -1.0282614544871655, 3);
  sqcRZGate(q, -2.149100341663919, 3);
  sqcRYGate(q, -2.8122454625353925, 4);
  sqcRZGate(q, -0.30798673371345503, 4);
  sqcRYGate(q, 3.123275868689386, 5);
  sqcRZGate(q, -1.1685989868874787, 5);
  sqcRYGate(q, 0.8608803637142328, 6);
  sqcRZGate(q, 0.5232768383258167, 6);
  sqcRYGate(q, 1.7226960579301982, 7);
  sqcRZGate(q, 2.8381997763154643, 7);
  sqcRYGate(q, -3.1083960125109784, 8);
  sqcRZGate(q, -2.7757879802065473, 8);
  sqcRYGate(q, -0.18882977749897395, 9);
  sqcRZGate(q, -2.1880480113514853, 9);
  sqcRYGate(q, -0.1307862351282827, 10);
  sqcRZGate(q, 2.8184417544689566, 10);
  sqcRYGate(q, -2.4558668724026367, 11);
  sqcRZGate(q, -2.4098272113184045, 11);
  sqcRYGate(q, -0.4088578954672931, 12);
  sqcRZGate(q, 0.9735050785530519, 12);
  sqcRYGate(q, -2.541547844956712, 13);
  sqcRZGate(q, -1.8821757413621176, 13);
  sqcRYGate(q, 1.3520433012900215, 14);
  sqcRZGate(q, 2.245421587755833, 14);
  sqcRYGate(q, -0.7348718623232641, 15);
  sqcRZGate(q, 2.824525618599311, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.479781705436451, 0);
  sqcRZGate(q, -2.4248184292859403, 0);
  sqcRYGate(q, -0.5627126630586865, 1);
  sqcRZGate(q, -0.4641822088325726, 1);
  sqcRYGate(q, 0.10372354168385904, 2);
  sqcRZGate(q, 0.771640687084237, 2);
  sqcRYGate(q, -0.32361033327938316, 3);
  sqcRZGate(q, -2.2714326021208437, 3);
  sqcRYGate(q, -0.28212375580171045, 4);
  sqcRZGate(q, 2.11334195242802, 4);
  sqcRYGate(q, 3.1090657318182924, 5);
  sqcRZGate(q, -2.3947603305358633, 5);
  sqcRYGate(q, 1.829186616618376, 6);
  sqcRZGate(q, 3.1304791032890424, 6);
  sqcRYGate(q, 0.7359544445218292, 7);
  sqcRZGate(q, -1.5202255281513681, 7);
  sqcRYGate(q, -3.132843287164875, 8);
  sqcRZGate(q, -1.406212041315337, 8);
  sqcRYGate(q, 0.7619939212199371, 9);
  sqcRZGate(q, -2.0698747371989326, 9);
  sqcRYGate(q, 2.9206356340876365, 10);
  sqcRZGate(q, -0.15674334810102183, 10);
  sqcRYGate(q, -0.9509768313506392, 11);
  sqcRZGate(q, 3.0485508175807214, 11);
  sqcRYGate(q, 0.6563074335986012, 12);
  sqcRZGate(q, -2.1139797213195726, 12);
  sqcRYGate(q, -0.5438209286104163, 13);
  sqcRZGate(q, -2.8085591204689098, 13);
  sqcRYGate(q, 1.1818806954293632, 14);
  sqcRZGate(q, -2.7389841255534044, 14);
  sqcRYGate(q, 0.7943013745286988, 15);
  sqcRZGate(q, 0.6293550731138726, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.8097234131064434, 0);
  sqcRZGate(q, 0.15384561864687818, 0);
  sqcRYGate(q, 2.6059972970025407, 1);
  sqcRZGate(q, 3.1293022698413098, 1);
  sqcRYGate(q, 3.0203023117436283, 2);
  sqcRZGate(q, -1.9707383146969315, 2);
  sqcRYGate(q, 2.342963537494544, 3);
  sqcRZGate(q, 2.497469072534786, 3);
  sqcRYGate(q, 1.0939145431672195, 4);
  sqcRZGate(q, 1.7571687432585925, 4);
  sqcRYGate(q, 3.038636566583825, 5);
  sqcRZGate(q, -0.5773614662564723, 5);
  sqcRYGate(q, 0.7212724162735508, 6);
  sqcRZGate(q, -0.21539455359196386, 6);
  sqcRYGate(q, 2.5157933857883465, 7);
  sqcRZGate(q, 2.6206387846176855, 7);
  sqcRYGate(q, 3.0624297157889036, 8);
  sqcRZGate(q, -0.5692210102098725, 8);
  sqcRYGate(q, -0.9530760289477067, 9);
  sqcRZGate(q, 1.107887181529044, 9);
  sqcRYGate(q, -1.8797169547065797, 10);
  sqcRZGate(q, 1.4370054350514874, 10);
  sqcRYGate(q, 0.5897914440902386, 11);
  sqcRZGate(q, 1.438432113990231, 11);
  sqcRYGate(q, -1.3625412128776258, 12);
  sqcRZGate(q, 0.4386992415399773, 12);
  sqcRYGate(q, -2.4585738558912076, 13);
  sqcRZGate(q, 2.091703388240922, 13);
  sqcRYGate(q, -2.5137463741853803, 14);
  sqcRZGate(q, 0.20666497648738433, 14);
  sqcRYGate(q, -1.2987845920998797, 15);
  sqcRZGate(q, -0.28930504558124687, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.9391317859595825, 0);
  sqcRZGate(q, 1.5026966271190938, 0);
  sqcRYGate(q, -2.9202960850914548, 1);
  sqcRZGate(q, -0.3528755670358077, 1);
  sqcRYGate(q, 1.0416302499353862, 2);
  sqcRZGate(q, 3.079435166429663, 2);
  sqcRYGate(q, 2.138548804004412, 3);
  sqcRZGate(q, -2.4200985473598315, 3);
  sqcRYGate(q, -3.1360357932594756, 4);
  sqcRZGate(q, 0.4817835901779528, 4);
  sqcRYGate(q, 0.0032174495943443505, 5);
  sqcRZGate(q, 0.5270813459441258, 5);
  sqcRYGate(q, 0.2865282346155339, 6);
  sqcRZGate(q, 2.714778014297315, 6);
  sqcRYGate(q, -1.622240176609564, 7);
  sqcRZGate(q, 1.0141182366588435, 7);
  sqcRYGate(q, 3.1330982525405724, 8);
  sqcRZGate(q, -1.4472179615113032, 8);
  sqcRYGate(q, -3.0805564971041464, 9);
  sqcRZGate(q, -2.88961128365659, 9);
  sqcRYGate(q, -1.7881945766122325, 10);
  sqcRZGate(q, 1.4474319263244837, 10);
  sqcRYGate(q, 3.1012268791088107, 11);
  sqcRZGate(q, -2.3759397526352886, 11);
  sqcRYGate(q, -0.9480203580602655, 12);
  sqcRZGate(q, -0.012179925892767087, 12);
  sqcRYGate(q, 3.0878682460999336, 13);
  sqcRZGate(q, 1.2265750043062245, 13);
  sqcRYGate(q, 0.06498882167099682, 14);
  sqcRZGate(q, 1.661712565386039, 14);
  sqcRYGate(q, -2.308580956649329, 15);
  sqcRZGate(q, -0.9056339007351569, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.19723897291917916, 0);
  sqcRZGate(q, -1.2078296274494984, 0);
  sqcRYGate(q, -1.6356732026686134, 1);
  sqcRZGate(q, 3.083316978848155, 1);
  sqcRYGate(q, 3.0984068655255004, 2);
  sqcRZGate(q, -0.9229180646663319, 2);
  sqcRYGate(q, -0.06369213207700158, 3);
  sqcRZGate(q, 0.1806339859083803, 3);
  sqcRYGate(q, -1.8629420926346278, 4);
  sqcRZGate(q, -2.7452774169021548, 4);
  sqcRYGate(q, -0.07156348038593853, 5);
  sqcRZGate(q, -2.576980592136079, 5);
  sqcRYGate(q, 1.496163572152546, 6);
  sqcRZGate(q, 2.064677477153993, 6);
  sqcRYGate(q, -2.5734925109823648, 7);
  sqcRZGate(q, -2.6107152672395038, 7);
  sqcRYGate(q, -0.029331730927723676, 8);
  sqcRZGate(q, 2.323614808892864, 8);
  sqcRYGate(q, 1.7051878821224433, 9);
  sqcRZGate(q, 2.2364311688091716, 9);
  sqcRYGate(q, 1.6193325386732667, 10);
  sqcRZGate(q, 1.3998189136548378, 10);
  sqcRYGate(q, 3.1260223690492728, 11);
  sqcRZGate(q, -0.6022616271695603, 11);
  sqcRYGate(q, 1.577114148983814, 12);
  sqcRZGate(q, -2.134094164109954, 12);
  sqcRYGate(q, 0.08427433922304761, 13);
  sqcRZGate(q, -0.4898137554318227, 13);
  sqcRYGate(q, 2.588192546721573, 14);
  sqcRZGate(q, 3.0390361282895606, 14);
  sqcRYGate(q, 2.8848219301525804, 15);
  sqcRZGate(q, -1.6141337740297867, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.2852273298290289, 0);
  sqcRZGate(q, -2.022450704451214, 0);
  sqcRYGate(q, -0.015586377663387285, 1);
  sqcRZGate(q, -2.1174090151434974, 1);
  sqcRYGate(q, 0.923605838531262, 2);
  sqcRZGate(q, -2.709712770959461, 2);
  sqcRYGate(q, -0.8537636559843549, 3);
  sqcRZGate(q, 2.0556093623386382, 3);
  sqcRYGate(q, -0.6241433458627154, 4);
  sqcRZGate(q, 0.6859161229145928, 4);
  sqcRYGate(q, -0.3405476035422446, 5);
  sqcRZGate(q, 2.3254425822914393, 5);
  sqcRYGate(q, 2.527056337076653, 6);
  sqcRZGate(q, 2.895620899876933, 6);
  sqcRYGate(q, -1.7854787915103767, 7);
  sqcRZGate(q, 2.582504278419678, 7);
  sqcRYGate(q, -2.9756632107062764, 8);
  sqcRZGate(q, -0.8391641447512465, 8);
  sqcRYGate(q, -2.6019797957503075, 9);
  sqcRZGate(q, 1.1690910432750217, 9);
  sqcRYGate(q, 1.5288784506523678, 10);
  sqcRZGate(q, -2.797072209419998, 10);
  sqcRYGate(q, 3.1138607791653783, 11);
  sqcRZGate(q, -0.25545480732564757, 11);
  sqcRYGate(q, 2.5528936586259796, 12);
  sqcRZGate(q, -2.339827176815216, 12);
  sqcRYGate(q, -2.215280712664068, 13);
  sqcRZGate(q, -1.1875586241588634, 13);
  sqcRYGate(q, -1.254642395806278, 14);
  sqcRZGate(q, -0.006246724239900913, 14);
  sqcRYGate(q, 1.1240353798314495, 15);
  sqcRZGate(q, 1.5839519428402085, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.5698755337069477, 0);
  sqcRZGate(q, 1.895344355426257, 0);
  sqcRYGate(q, -0.5440896658485306, 1);
  sqcRZGate(q, 0.7443803728819403, 1);
  sqcRYGate(q, -3.140027043908389, 2);
  sqcRZGate(q, 2.862463625173704, 2);
  sqcRYGate(q, 0.13628409825007193, 3);
  sqcRZGate(q, 1.9452392348490002, 3);
  sqcRYGate(q, -3.134749289375852, 4);
  sqcRZGate(q, -0.3392077420999621, 4);
  sqcRYGate(q, -3.084963862891262, 5);
  sqcRZGate(q, -1.987876740878786, 5);
  sqcRYGate(q, -1.942280744313059, 6);
  sqcRZGate(q, -0.0023778737833870527, 6);
  sqcRYGate(q, -2.268061869505803, 7);
  sqcRZGate(q, 3.032140576040062, 7);
  sqcRYGate(q, 3.133855444557251, 8);
  sqcRZGate(q, 1.0112925833915138, 8);
  sqcRYGate(q, -0.07330338402780412, 9);
  sqcRZGate(q, -1.1546782592820906, 9);
  sqcRYGate(q, 3.108511125843441, 10);
  sqcRZGate(q, -1.5661183487156016, 10);
  sqcRYGate(q, 0.09752793017361884, 11);
  sqcRZGate(q, 2.221126671586612, 11);
  sqcRYGate(q, 2.9616178720003052, 12);
  sqcRZGate(q, 0.024107590052952155, 12);
  sqcRYGate(q, -1.8011938514630046, 13);
  sqcRZGate(q, -2.250942537090904, 13);
  sqcRYGate(q, -2.0273625296258775, 14);
  sqcRZGate(q, -0.4022670138054195, 14);
  sqcRYGate(q, -1.795923740926031, 15);
  sqcRZGate(q, 2.743332005499271, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.0164592677570115, 0);
  sqcRZGate(q, 2.865476936485754, 0);
  sqcRYGate(q, 0.6410564334182083, 1);
  sqcRZGate(q, 2.031990894497353, 1);
  sqcRYGate(q, -2.8269477381377803, 2);
  sqcRZGate(q, -2.8909261864696028, 2);
  sqcRYGate(q, 3.0042929301847034, 3);
  sqcRZGate(q, -1.1963211234215265, 3);
  sqcRYGate(q, 3.0386824151057845, 4);
  sqcRZGate(q, -2.597596973756299, 4);
  sqcRYGate(q, 1.2687468152182013, 5);
  sqcRZGate(q, 0.5523663552287786, 5);
  sqcRYGate(q, -2.117912546179423, 6);
  sqcRZGate(q, -0.049347708487778884, 6);
  sqcRYGate(q, 1.3101411248074482, 7);
  sqcRZGate(q, 3.1095957755191876, 7);
  sqcRYGate(q, 0.3039864915719157, 8);
  sqcRZGate(q, -0.6225489749529831, 8);
  sqcRYGate(q, -0.4824669583032097, 9);
  sqcRZGate(q, 1.8865753606051376, 9);
  sqcRYGate(q, -2.8616930143108057, 10);
  sqcRZGate(q, -0.32710264151784324, 10);
  sqcRYGate(q, 3.0816535575463817, 11);
  sqcRZGate(q, 0.17531478039703471, 11);
  sqcRYGate(q, 0.9565650066088257, 12);
  sqcRZGate(q, 0.3244773593044296, 12);
  sqcRYGate(q, 2.054658937276739, 13);
  sqcRZGate(q, 2.567159897875651, 13);
  sqcRYGate(q, -1.279266961550542, 14);
  sqcRZGate(q, 2.790295551257758, 14);
  sqcRYGate(q, 2.7422970258058608, 15);
  sqcRZGate(q, -0.23216876046260815, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.1797055381595511, 0);
  sqcRZGate(q, 1.3655012925344883, 0);
  sqcRYGate(q, 0.11500938188561793, 1);
  sqcRZGate(q, -1.1166993152860059, 1);
  sqcRYGate(q, -3.0956868842440723, 2);
  sqcRZGate(q, 2.795067387403154, 2);
  sqcRYGate(q, -1.3797805640370742, 3);
  sqcRZGate(q, -0.9597100800509173, 3);
  sqcRYGate(q, 3.111839309474712, 4);
  sqcRZGate(q, 2.938615514199643, 4);
  sqcRYGate(q, -2.2161996860719038, 5);
  sqcRZGate(q, 0.02285915300756347, 5);
  sqcRYGate(q, -1.1113261910977856, 6);
  sqcRZGate(q, -3.1368203924429583, 6);
  sqcRYGate(q, 0.4677972534219048, 7);
  sqcRZGate(q, 2.170994718588429, 7);
  sqcRYGate(q, 0.026615010334494038, 8);
  sqcRZGate(q, 0.21705550944422886, 8);
  sqcRYGate(q, 0.4044954813416135, 9);
  sqcRZGate(q, 1.8027134131574563, 9);
  sqcRYGate(q, 2.5000739506607785, 10);
  sqcRZGate(q, 3.0669840534891493, 10);
  sqcRYGate(q, -1.1536116986275573, 11);
  sqcRZGate(q, 0.04268404070886333, 11);
  sqcRYGate(q, -0.6511216497969582, 12);
  sqcRZGate(q, -1.1804673122868024, 12);
  sqcRYGate(q, 1.3547603968460447, 13);
  sqcRZGate(q, -2.0572135426401346, 13);
  sqcRYGate(q, 0.25281272400822763, 14);
  sqcRZGate(q, -0.7948343746185186, 14);
  sqcRYGate(q, 0.9088934080021014, 15);
  sqcRZGate(q, 2.8322429080541887, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.418567568806005, 0);
  sqcRZGate(q, 2.6895403844969925, 0);
  sqcRYGate(q, -0.6569096573896536, 1);
  sqcRZGate(q, -1.980342810987749, 1);
  sqcRYGate(q, 1.5501930155558439, 2);
  sqcRZGate(q, 0.9973454170908546, 2);
  sqcRYGate(q, 0.13567634008485463, 3);
  sqcRZGate(q, -0.6872127290254552, 3);
  sqcRYGate(q, 1.6058115632371752, 4);
  sqcRZGate(q, -0.010566340081767933, 4);
  sqcRYGate(q, 0.19743515954854024, 5);
  sqcRZGate(q, -0.0375878750394347, 5);
  sqcRYGate(q, 1.9583139392960567, 6);
  sqcRZGate(q, -2.3959020178841683, 6);
  sqcRYGate(q, 0.9577537682665705, 7);
  sqcRZGate(q, 0.6439090883500489, 7);
  sqcRYGate(q, -1.7752860792482736, 8);
  sqcRZGate(q, 1.368095689966074, 8);
  sqcRYGate(q, -3.102356151539776, 9);
  sqcRZGate(q, 3.105930060540373, 9);
  sqcRYGate(q, 1.1702630238784568, 10);
  sqcRZGate(q, -3.122448294795859, 10);
  sqcRYGate(q, -1.8120479964254645, 11);
  sqcRZGate(q, 0.06183387694654123, 11);
  sqcRYGate(q, 3.106462878613631, 12);
  sqcRZGate(q, 1.8246632396919118, 12);
  sqcRYGate(q, -0.1449243502993839, 13);
  sqcRZGate(q, 1.430211773033382, 13);
  sqcRYGate(q, -2.280344122047015, 14);
  sqcRZGate(q, -2.499446524205527, 14);
  sqcRYGate(q, -1.9290484600355977, 15);
  sqcRZGate(q, 1.1150618820357643, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.3078102036962929, 0);
  sqcRZGate(q, 0.018399662999446842, 0);
  sqcRYGate(q, 1.8101903870482856, 1);
  sqcRZGate(q, -2.5453124724834373, 1);
  sqcRYGate(q, -3.1083418506293716, 2);
  sqcRZGate(q, -2.954023006902132, 2);
  sqcRYGate(q, -3.119737098207718, 3);
  sqcRZGate(q, -1.7292886429345384, 3);
  sqcRYGate(q, 0.5753228344302146, 4);
  sqcRZGate(q, 0.025341510815424573, 4);
  sqcRYGate(q, -2.1361345790915123, 5);
  sqcRZGate(q, -2.498484151053529, 5);
  sqcRYGate(q, -3.1040141195118944, 6);
  sqcRZGate(q, 1.0431387401260945, 6);
  sqcRYGate(q, 1.65238906084202, 7);
  sqcRZGate(q, -0.3047263674011157, 7);
  sqcRYGate(q, -1.5581923888899485, 8);
  sqcRZGate(q, -3.138630061935094, 8);
  sqcRYGate(q, 2.5530390609231044, 9);
  sqcRZGate(q, -3.1007237135762247, 9);
  sqcRYGate(q, -1.3853279106153336, 10);
  sqcRZGate(q, 3.137361546991236, 10);
  sqcRYGate(q, -2.2439742424276954, 11);
  sqcRZGate(q, 3.118174880154445, 11);
  sqcRYGate(q, -3.1302352325006693, 12);
  sqcRZGate(q, 2.9944573187189456, 12);
  sqcRYGate(q, 0.9633111243622814, 13);
  sqcRZGate(q, 0.9051045561455117, 13);
  sqcRYGate(q, 2.182992248704508, 14);
  sqcRZGate(q, -2.1980349666172145, 14);
  sqcRYGate(q, 1.8189511849751874, 15);
  sqcRZGate(q, 1.5776971470549155, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.782360301989921, 0);
  sqcRZGate(q, -1.488710470940372, 0);
  sqcRYGate(q, 0.6019999286054292, 1);
  sqcRZGate(q, 2.581512176344171, 1);
  sqcRYGate(q, 2.75218582231632, 2);
  sqcRZGate(q, 0.06990470231356129, 2);
  sqcRYGate(q, -1.97416712861039, 3);
  sqcRZGate(q, 3.139929942167479, 3);
  sqcRYGate(q, 0.4946802311903994, 4);
  sqcRZGate(q, -0.3138282452654373, 4);
  sqcRYGate(q, 0.0014154641034629378, 5);
  sqcRZGate(q, -0.549334903354617, 5);
  sqcRYGate(q, -0.028814566661951913, 6);
  sqcRZGate(q, 2.886591964240441, 6);
  sqcRYGate(q, 0.04102158638744947, 7);
  sqcRZGate(q, 0.29260547488122324, 7);
  sqcRYGate(q, -1.6973016129028524, 8);
  sqcRZGate(q, -2.886581555329646, 8);
  sqcRYGate(q, 1.4655444250034269, 9);
  sqcRZGate(q, 0.008905152364154567, 9);
  sqcRYGate(q, 2.0176094430517963, 10);
  sqcRZGate(q, -3.1335238598341455, 10);
  sqcRYGate(q, 0.05526577931864107, 11);
  sqcRZGate(q, 0.07518044915868319, 11);
  sqcRYGate(q, -2.6886827288190327, 12);
  sqcRZGate(q, 2.9015754810144494, 12);
  sqcRYGate(q, 0.2953716048655206, 13);
  sqcRZGate(q, -0.5371120941322509, 13);
  sqcRYGate(q, -2.3930701620192254, 14);
  sqcRZGate(q, -1.7301127345453713, 14);
  sqcRYGate(q, -2.502111682229486, 15);
  sqcRZGate(q, 2.4723654936154023, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.0467281828242445, 0);
  sqcRZGate(q, -1.6059363390931927, 0);
  sqcRYGate(q, 1.2394156599842683, 1);
  sqcRZGate(q, 0.40351501725664485, 1);
  sqcRYGate(q, 3.015456729847138, 2);
  sqcRZGate(q, 1.5480851591875986, 2);
  sqcRYGate(q, -3.0890225623655203, 3);
  sqcRZGate(q, 1.7336063310399035, 3);
  sqcRYGate(q, -2.8947048396473223, 4);
  sqcRZGate(q, 0.01229510212693144, 4);
  sqcRYGate(q, 2.608563271353088, 5);
  sqcRZGate(q, 0.4590487605643734, 5);
  sqcRYGate(q, 2.7219586272542418, 6);
  sqcRZGate(q, 0.06583224589962189, 6);
  sqcRYGate(q, -1.6909009434300484, 7);
  sqcRZGate(q, 2.8045846176994456, 7);
  sqcRYGate(q, 3.12272122080597, 8);
  sqcRZGate(q, 0.25408459327554045, 8);
  sqcRYGate(q, -1.0518176585449133, 9);
  sqcRZGate(q, -2.954636138627262, 9);
  sqcRYGate(q, 1.8312743972059529, 10);
  sqcRZGate(q, -0.7684468633605475, 10);
  sqcRYGate(q, 1.482116134098562, 11);
  sqcRZGate(q, -2.132809558504358, 11);
  sqcRYGate(q, -3.0569650201541245, 12);
  sqcRZGate(q, -0.07867134984950631, 12);
  sqcRYGate(q, 1.0781749443152246, 13);
  sqcRZGate(q, 2.84379216683367, 13);
  sqcRYGate(q, 1.1647159683625143, 14);
  sqcRZGate(q, -2.378399048087308, 14);
  sqcRYGate(q, 1.847553679095812, 15);
  sqcRZGate(q, -0.7862599244959982, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.087289718072412, 0);
  sqcRZGate(q, -1.469927971969387, 0);
  sqcRYGate(q, -0.6610039585124688, 1);
  sqcRZGate(q, -2.303903281743768, 1);
  sqcRYGate(q, -2.9708707689541716, 2);
  sqcRZGate(q, -0.8982802028188474, 2);
  sqcRYGate(q, -0.1314476762420398, 3);
  sqcRZGate(q, 1.2647714853079868, 3);
  sqcRYGate(q, 0.00808252596457388, 4);
  sqcRZGate(q, 1.740571851997444, 4);
  sqcRYGate(q, 0.0062802138335569385, 5);
  sqcRZGate(q, 2.8558980682955326, 5);
  sqcRYGate(q, -1.611354623529417, 6);
  sqcRZGate(q, -0.008376397525717394, 6);
  sqcRYGate(q, -3.089803541906765, 7);
  sqcRZGate(q, -0.33690163423221897, 7);
  sqcRYGate(q, -2.0882533498053766, 8);
  sqcRZGate(q, -1.8497214714302004, 8);
  sqcRYGate(q, -3.068492605365132, 9);
  sqcRZGate(q, 1.873057184850734, 9);
  sqcRYGate(q, -2.5849730381156686, 10);
  sqcRZGate(q, 2.1880013341871694, 10);
  sqcRYGate(q, -2.188200262546478, 11);
  sqcRZGate(q, -0.9192278748436, 11);
  sqcRYGate(q, 3.030912867512341, 12);
  sqcRZGate(q, -0.8533331022859731, 12);
  sqcRYGate(q, 2.602222778931561, 13);
  sqcRZGate(q, -0.5908354211527991, 13);
  sqcRYGate(q, 1.8464364562692666, 14);
  sqcRZGate(q, 0.4683450494549064, 14);
  sqcRYGate(q, -1.1121936960882417, 15);
  sqcRZGate(q, 1.451286232043531, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.0836009660713155, 0);
  sqcRZGate(q, -0.855867442855982, 0);
  sqcRYGate(q, 2.918570570098585, 1);
  sqcRZGate(q, -1.002339530267011, 1);
  sqcRYGate(q, -1.722106926373378, 2);
  sqcRZGate(q, -1.452749032638498, 2);
  sqcRYGate(q, 1.6305305149278106, 3);
  sqcRZGate(q, -0.19563392111552425, 3);
  sqcRYGate(q, 3.063036761192794, 4);
  sqcRZGate(q, -0.6564746738773257, 4);
  sqcRYGate(q, -1.6232179472004633, 5);
  sqcRZGate(q, 2.7331971017483556, 5);
  sqcRYGate(q, 2.1168479454806164, 6);
  sqcRZGate(q, -3.1209990602729967, 6);
  sqcRYGate(q, 1.7139861171683695, 7);
  sqcRZGate(q, 0.04667224961065889, 7);
  sqcRYGate(q, 0.003851195911764521, 8);
  sqcRZGate(q, 1.854621825852009, 8);
  sqcRYGate(q, -3.128750924216612, 9);
  sqcRZGate(q, 1.7565559188070798, 9);
  sqcRYGate(q, -3.119307366954826, 10);
  sqcRZGate(q, -0.1045397631994982, 10);
  sqcRYGate(q, -0.005480382270873996, 11);
  sqcRZGate(q, -1.7339590403458, 11);
  sqcRYGate(q, 0.005496779466640671, 12);
  sqcRZGate(q, -1.9323352984045532, 12);
  sqcRYGate(q, 1.8223584170984184, 13);
  sqcRZGate(q, -0.2266107003740503, 13);
  sqcRYGate(q, 0.8241183831271, 14);
  sqcRZGate(q, 0.4040717018833563, 14);
  sqcRYGate(q, -2.9102699528174507, 15);
  sqcRZGate(q, 2.6130627092675134, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.0927703155815407, 0);
  sqcRZGate(q, 0.5945534403093815, 0);
  sqcRYGate(q, 1.26712434260559, 1);
  sqcRZGate(q, -0.5593186321022355, 1);
  sqcRYGate(q, -3.1204054395923473, 2);
  sqcRZGate(q, 3.097381729008399, 2);
  sqcRYGate(q, 0.012340790863027527, 3);
  sqcRZGate(q, -0.13587951822219413, 3);
  sqcRYGate(q, 3.1368893753336464, 4);
  sqcRZGate(q, -1.2516560329242357, 4);
  sqcRYGate(q, 2.10774249027369, 5);
  sqcRZGate(q, 2.4144477901879564, 5);
  sqcRYGate(q, 2.811652800359907, 6);
  sqcRZGate(q, 2.5013196350542555, 6);
  sqcRYGate(q, 1.5272230962188453, 7);
  sqcRZGate(q, 0.4503304150668619, 7);
  sqcRYGate(q, 1.660100146134301, 8);
  sqcRZGate(q, 0.5091454226311098, 8);
  sqcRYGate(q, 0.3212928106668728, 9);
  sqcRZGate(q, -2.8449938754390134, 9);
  sqcRYGate(q, -1.9441474709423723, 10);
  sqcRZGate(q, 0.8998691621963459, 10);
  sqcRYGate(q, -1.3128593149269494, 11);
  sqcRZGate(q, 3.031890838338376, 11);
  sqcRYGate(q, -0.07524265935407737, 12);
  sqcRZGate(q, 2.777299502321749, 12);
  sqcRYGate(q, 1.969085524491926, 13);
  sqcRZGate(q, -2.7351319797997014, 13);
  sqcRYGate(q, -1.894926802231656, 14);
  sqcRZGate(q, -1.6836696212318891, 14);
  sqcRYGate(q, -2.56728207677124, 15);
  sqcRZGate(q, 0.9210597834463027, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.03877559503130304, 0);
  sqcRZGate(q, 1.32917601929728, 0);
  sqcRYGate(q, 2.9745577980875173, 1);
  sqcRZGate(q, -0.5206137857008992, 1);
  sqcRYGate(q, -1.8332807990280948, 2);
  sqcRZGate(q, 1.858024775753226, 2);
  sqcRYGate(q, -0.302295384157512, 3);
  sqcRZGate(q, -1.306554678597184, 3);
  sqcRYGate(q, -3.139834162748928, 4);
  sqcRZGate(q, -2.3262224858277167, 4);
  sqcRYGate(q, 2.914733226853565, 5);
  sqcRZGate(q, 3.0688784637821076, 5);
  sqcRYGate(q, 0.001949158325923503, 6);
  sqcRZGate(q, -2.5217382482407684, 6);
  sqcRYGate(q, 0.5737751674537479, 7);
  sqcRZGate(q, 1.6745010919701346, 7);
  sqcRYGate(q, 3.065991539057378, 8);
  sqcRZGate(q, 0.9387740994491677, 8);
  sqcRYGate(q, -1.2209621568263431, 9);
  sqcRZGate(q, 1.6691124285259562, 9);
  sqcRYGate(q, 2.7804821965019118, 10);
  sqcRZGate(q, 0.9883631792156375, 10);
  sqcRYGate(q, 2.2784456447561214, 11);
  sqcRZGate(q, 2.791186761334594, 11);
  sqcRYGate(q, 1.6758417570159825, 12);
  sqcRZGate(q, -1.9581076115311822, 12);
  sqcRYGate(q, -0.9638859057344659, 13);
  sqcRZGate(q, 2.755837206940294, 13);
  sqcRYGate(q, 0.5811777648838037, 14);
  sqcRZGate(q, -1.4429299113421168, 14);
  sqcRYGate(q, 2.1063604130268883, 15);
  sqcRZGate(q, -1.154550399560273, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.1969628967664223, 0);
  sqcRZGate(q, 2.8090095462605156, 0);
  sqcRYGate(q, 1.7105968898798694, 1);
  sqcRZGate(q, 0.06576077508990341, 1);
  sqcRYGate(q, 0.028676550515062793, 2);
  sqcRZGate(q, -2.8539948962955624, 2);
  sqcRYGate(q, 3.122567880864944, 3);
  sqcRZGate(q, -1.3556882826615797, 3);
  sqcRYGate(q, -0.008582187364817907, 4);
  sqcRZGate(q, 0.6210875704719276, 4);
  sqcRYGate(q, 0.714231311810912, 5);
  sqcRZGate(q, 0.03476448646873387, 5);
  sqcRYGate(q, -0.053516420911757116, 6);
  sqcRZGate(q, -3.0957235913530603, 6);
  sqcRYGate(q, -3.1035206419728696, 7);
  sqcRZGate(q, -0.06453103466335362, 7);
  sqcRYGate(q, 0.026382987977363825, 8);
  sqcRZGate(q, -0.3691852797701054, 8);
  sqcRYGate(q, 0.013620861460214934, 9);
  sqcRZGate(q, 0.6156079030866346, 9);
  sqcRYGate(q, -3.125243656774955, 10);
  sqcRZGate(q, 0.7493357764888451, 10);
  sqcRYGate(q, 3.129473767371106, 11);
  sqcRZGate(q, -1.560516072900139, 11);
  sqcRYGate(q, -0.02877825537009658, 12);
  sqcRZGate(q, -2.4901490808740325, 12);
  sqcRYGate(q, -3.0253098202210738, 13);
  sqcRZGate(q, 2.9506403125607976, 13);
  sqcRYGate(q, -2.6811945477673116, 14);
  sqcRZGate(q, -1.3342193279763934, 14);
  sqcRYGate(q, 0.12430331136522688, 15);
  sqcRZGate(q, -1.6036338082099761, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.067521904800435, 0);
  sqcRZGate(q, 0.26160019296032516, 0);
  sqcRYGate(q, -1.4317124118054532, 1);
  sqcRZGate(q, 3.123568376049026, 1);
  sqcRYGate(q, 1.719762582743063, 2);
  sqcRZGate(q, -1.8945397690483354, 2);
  sqcRYGate(q, 0.1294279372811955, 3);
  sqcRZGate(q, -0.3266237622917071, 3);
  sqcRYGate(q, -1.631489663444274, 4);
  sqcRZGate(q, 0.006337456747981918, 4);
  sqcRYGate(q, 2.9155990894174537, 5);
  sqcRZGate(q, -2.572050116824173, 5);
  sqcRYGate(q, 1.550287890645823, 6);
  sqcRZGate(q, -3.135456356399235, 6);
  sqcRYGate(q, -0.2815881848475374, 7);
  sqcRZGate(q, 3.0837444303612953, 7);
  sqcRYGate(q, -2.6588963959796996, 8);
  sqcRZGate(q, 0.08076353253554878, 8);
  sqcRYGate(q, -0.51862322468493, 9);
  sqcRZGate(q, 2.3414123060045435, 9);
  sqcRYGate(q, -0.6634480894167559, 10);
  sqcRZGate(q, -0.2742419581617321, 10);
  sqcRYGate(q, 0.6878339669784808, 11);
  sqcRZGate(q, -0.7195434449670515, 11);
  sqcRYGate(q, 0.18795046429263895, 12);
  sqcRZGate(q, -1.8792699738715752, 12);
  sqcRYGate(q, -0.8807004316894211, 13);
  sqcRZGate(q, 2.9009643759205646, 13);
  sqcRYGate(q, -2.6378742550073917, 14);
  sqcRZGate(q, 1.4952256129973671, 14);
  sqcRYGate(q, -1.9138288730284208, 15);
  sqcRZGate(q, 1.7399560187314886, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.323782950451928, 0);
  sqcRZGate(q, 0.13594039381432488, 0);
  sqcRYGate(q, -1.7338936725049077, 1);
  sqcRZGate(q, -0.5021690196489335, 1);
  sqcRYGate(q, -1.297036784918392, 2);
  sqcRZGate(q, -0.06295426312791164, 2);
  sqcRYGate(q, -0.5695300045617177, 3);
  sqcRZGate(q, -3.131807529305606, 3);
  sqcRYGate(q, 1.5527597451623762, 4);
  sqcRZGate(q, 0.002526649086322644, 4);
  sqcRYGate(q, 2.5959632759340545, 5);
  sqcRZGate(q, -0.019539514375487066, 5);
  sqcRYGate(q, -1.391088057690153, 6);
  sqcRZGate(q, 3.0251584109419367, 6);
  sqcRYGate(q, 0.012440413173332847, 7);
  sqcRZGate(q, 2.166110683653721, 7);
  sqcRYGate(q, -1.7374921663390621, 8);
  sqcRZGate(q, 0.06867741275126833, 8);
  sqcRYGate(q, -1.0089010045966968, 9);
  sqcRZGate(q, -3.0962920708065234, 9);
  sqcRYGate(q, -2.3551777807820344, 10);
  sqcRZGate(q, -1.2500982081437986, 10);
  sqcRYGate(q, -3.133075558313489, 11);
  sqcRZGate(q, 0.5732179611640017, 11);
  sqcRYGate(q, 1.089392251137287, 12);
  sqcRZGate(q, 1.2501626661635539, 12);
  sqcRYGate(q, -3.1229305261268427, 13);
  sqcRZGate(q, -0.3658172268049844, 13);
  sqcRYGate(q, -1.9260306743349604, 14);
  sqcRZGate(q, -1.3834072937721107, 14);
  sqcRYGate(q, -0.12439037527357844, 15);
  sqcRZGate(q, 0.1240702096578786, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.4794757485488308, 0);
  sqcRZGate(q, -2.1941604046540633, 0);
  sqcRYGate(q, 3.1385722827649087, 1);
  sqcRZGate(q, 0.9097618155076539, 1);
  sqcRYGate(q, 0.07642159159311733, 2);
  sqcRZGate(q, -1.5032265328337961, 2);
  sqcRYGate(q, -0.5630284973326525, 3);
  sqcRZGate(q, 1.58023745944928, 3);
  sqcRYGate(q, -1.5833998042779591, 4);
  sqcRZGate(q, -1.578426439621941, 4);
  sqcRYGate(q, -1.5378482691276247, 5);
  sqcRZGate(q, -1.5689381174491328, 5);
  sqcRYGate(q, -0.018703090725103344, 6);
  sqcRZGate(q, -1.4515718403929032, 6);
  sqcRYGate(q, 2.430999561261514, 7);
  sqcRZGate(q, 1.5700139912023152, 7);
  sqcRYGate(q, 0.03272989181305302, 8);
  sqcRZGate(q, -1.6293375585091008, 8);
  sqcRYGate(q, -3.124832801304383, 9);
  sqcRZGate(q, 0.012795861724929301, 9);
  sqcRYGate(q, 3.1382304164375996, 10);
  sqcRZGate(q, 0.31679165855188357, 10);
  sqcRYGate(q, -2.27523031609611, 11);
  sqcRZGate(q, 1.550753395616775, 11);
  sqcRYGate(q, 3.1319730076495143, 12);
  sqcRZGate(q, 2.7943609273405277, 12);
  sqcRYGate(q, -0.0003381571258977978, 13);
  sqcRZGate(q, -1.6784910693903345, 13);
  sqcRYGate(q, -1.5989955732265049, 14);
  sqcRZGate(q, 1.437246889905823, 14);
  sqcRYGate(q, 1.5350283478888702, 15);
  sqcRZGate(q, -0.2731160369935394, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.06545849481840982, 0);
  sqcRZGate(q, -0.2714768596819308, 0);
  sqcRYGate(q, -1.6870966992547678, 1);
  sqcRZGate(q, -1.6421772569018067, 1);
  sqcRYGate(q, -1.573592371671686, 2);
  sqcRZGate(q, 1.2198677920660312, 2);
  sqcRYGate(q, 1.5802093525341836, 3);
  sqcRZGate(q, -3.1116863905537815, 3);
  sqcRYGate(q, -1.5718601099116865, 4);
  sqcRZGate(q, -0.6152184027029746, 4);
  sqcRYGate(q, -1.5765066004848318, 5);
  sqcRZGate(q, 3.066825792556454, 5);
  sqcRYGate(q, -1.5691740029633214, 6);
  sqcRZGate(q, -2.2488521342919077, 6);
  sqcRYGate(q, -1.5852169078108247, 7);
  sqcRZGate(q, -0.06153676938113533, 7);
  sqcRYGate(q, -1.5729698948206239, 8);
  sqcRZGate(q, -3.139348689606471, 8);
  sqcRYGate(q, 2.5587676018857857, 9);
  sqcRZGate(q, 1.5725177034971933, 9);
  sqcRYGate(q, -1.5673113751241756, 10);
  sqcRZGate(q, -0.30785053844053584, 10);
  sqcRYGate(q, -1.577010226915136, 11);
  sqcRZGate(q, -1.5378193838506888, 11);
  sqcRYGate(q, -1.562160643241031, 12);
  sqcRZGate(q, 2.1555215474465568, 12);
  sqcRYGate(q, -1.5869875246748544, 13);
  sqcRZGate(q, -1.534187615995282, 13);
  sqcRYGate(q, -1.5973884132900307, 14);
  sqcRZGate(q, 1.690618726694006, 14);
  sqcRYGate(q, 1.9957616025901297, 15);
  sqcRZGate(q, -2.332017308832113, 15);

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
