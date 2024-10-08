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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -0.2303558187978929, 0);
  sqcRZGate(q, 1.6240204931444442, 0);
  sqcRYGate(q, 3.136326232229078, 1);
  sqcRZGate(q, 1.348207185215644, 1);
  sqcRYGate(q, -1.5571455247476302, 2);
  sqcRZGate(q, -0.7776940592258046, 2);
  sqcRYGate(q, -0.31022933504255334, 3);
  sqcRZGate(q, 0.21630957115492855, 3);
  sqcRYGate(q, 0.44610753100055883, 4);
  sqcRZGate(q, -3.0898780415534377, 4);
  sqcRYGate(q, -1.9254079739170997, 5);
  sqcRZGate(q, 0.2712291330664547, 5);
  sqcRYGate(q, 0.06031172571484156, 6);
  sqcRZGate(q, 2.7420717532728167, 6);
  sqcRYGate(q, -0.5423351266073672, 7);
  sqcRZGate(q, 1.8240808327408167, 7);
  sqcRYGate(q, 2.017768918051522, 8);
  sqcRZGate(q, 0.21119826397848485, 8);
  sqcRYGate(q, 0.5592069230698141, 9);
  sqcRZGate(q, -2.4715760161085685, 9);
  sqcRYGate(q, 1.439526368279755, 10);
  sqcRZGate(q, 0.7844366675079613, 10);
  sqcRYGate(q, 0.0071063637588047, 11);
  sqcRZGate(q, 2.9509535024186797, 11);
  sqcRYGate(q, -3.034928333143871, 12);
  sqcRZGate(q, -1.769638785350824, 12);
  sqcRYGate(q, 1.111317502084307, 13);
  sqcRZGate(q, 0.15606759610404097, 13);
  sqcRYGate(q, 2.947588310439302, 14);
  sqcRZGate(q, -2.5967930442299614, 14);
  sqcRYGate(q, 3.135797643232249, 15);
  sqcRZGate(q, -2.6129796303687476, 15);
  sqcRYGate(q, -0.9231334822027227, 16);
  sqcRZGate(q, -0.49906091503168704, 16);
  sqcRYGate(q, -0.4394281128907371, 17);
  sqcRZGate(q, -1.9715767712414218, 17);
  sqcRYGate(q, 0.31998850079788493, 18);
  sqcRZGate(q, 0.2020844272296989, 18);
  sqcRYGate(q, 0.0934663300407711, 19);
  sqcRZGate(q, -1.3897562725735786, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.2327107442348568, 0);
  sqcRZGate(q, 1.231798500612096, 0);
  sqcRYGate(q, -0.457040274385287, 1);
  sqcRZGate(q, -2.138278619453513, 1);
  sqcRYGate(q, 1.9689225569738609, 2);
  sqcRZGate(q, -1.1752917442644746, 2);
  sqcRYGate(q, 1.64580465287683, 3);
  sqcRZGate(q, 0.7619289312595062, 3);
  sqcRYGate(q, -2.299165856626312, 4);
  sqcRZGate(q, 0.7636884235762712, 4);
  sqcRYGate(q, 2.2394349696387224, 5);
  sqcRZGate(q, -0.043594961697940526, 5);
  sqcRYGate(q, 3.076742750255489, 6);
  sqcRZGate(q, -1.4066701553488343, 6);
  sqcRYGate(q, 0.11931997752073897, 7);
  sqcRZGate(q, -2.714025900108608, 7);
  sqcRYGate(q, 0.4206431664832282, 8);
  sqcRZGate(q, -0.128961117824006, 8);
  sqcRYGate(q, -0.0015496519662479005, 9);
  sqcRZGate(q, -0.9916665327312932, 9);
  sqcRYGate(q, 0.6275195485653562, 10);
  sqcRZGate(q, 0.4893069933382432, 10);
  sqcRYGate(q, 1.4973534091033283, 11);
  sqcRZGate(q, -0.3883477863782012, 11);
  sqcRYGate(q, 1.9305834035404115, 12);
  sqcRZGate(q, 1.395214567193352, 12);
  sqcRYGate(q, -1.1937136878987953, 13);
  sqcRZGate(q, -0.2104836274286064, 13);
  sqcRYGate(q, -2.3034667811496314, 14);
  sqcRZGate(q, -0.43294216558363274, 14);
  sqcRYGate(q, -0.01323048852188738, 15);
  sqcRZGate(q, 1.4732027923912618, 15);
  sqcRYGate(q, -0.4800199872934344, 16);
  sqcRZGate(q, -3.031775886712399, 16);
  sqcRYGate(q, 0.729354611522318, 17);
  sqcRZGate(q, -0.3537560978866197, 17);
  sqcRYGate(q, 2.8494071078086702, 18);
  sqcRZGate(q, -2.104834898467593, 18);
  sqcRYGate(q, -1.8494423120381513, 19);
  sqcRZGate(q, 1.4086912485442946, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.1431919737164966, 0);
  sqcRZGate(q, 1.353166255640451, 0);
  sqcRYGate(q, -3.132776341716083, 1);
  sqcRZGate(q, 2.1876996095799677, 1);
  sqcRYGate(q, 0.005012912871585229, 2);
  sqcRZGate(q, -2.3196162995585605, 2);
  sqcRYGate(q, 0.05257808365155192, 3);
  sqcRZGate(q, 2.302181913012837, 3);
  sqcRYGate(q, -2.7560596418002206, 4);
  sqcRZGate(q, 1.787715288894308, 4);
  sqcRYGate(q, -0.2809695716730056, 5);
  sqcRZGate(q, -2.8158590187586854, 5);
  sqcRYGate(q, -3.0274641802745954, 6);
  sqcRZGate(q, -1.038246169603422, 6);
  sqcRYGate(q, 3.118342728084467, 7);
  sqcRZGate(q, -2.8980590246550606, 7);
  sqcRYGate(q, -2.035797307699217, 8);
  sqcRZGate(q, 2.5909364511764426, 8);
  sqcRYGate(q, -0.1643247452314318, 9);
  sqcRZGate(q, 2.710842801626353, 9);
  sqcRYGate(q, -0.7734794929336246, 10);
  sqcRZGate(q, 3.135117329529804, 10);
  sqcRYGate(q, -3.1323787357614274, 11);
  sqcRZGate(q, -2.3103426035680554, 11);
  sqcRYGate(q, -2.468955211633373, 12);
  sqcRZGate(q, -1.777697070898717, 12);
  sqcRYGate(q, 0.27929390234575546, 13);
  sqcRZGate(q, 0.6422134908793583, 13);
  sqcRYGate(q, 0.7420976994405345, 14);
  sqcRZGate(q, 1.2404058625688155, 14);
  sqcRYGate(q, -2.4683918652808408, 15);
  sqcRZGate(q, 0.7088623811364814, 15);
  sqcRYGate(q, 1.4814860957412426, 16);
  sqcRZGate(q, 2.816453590798899, 16);
  sqcRYGate(q, -2.258661834903684, 17);
  sqcRZGate(q, -1.1937496391123545, 17);
  sqcRYGate(q, -3.064481039582703, 18);
  sqcRZGate(q, -1.2499109507718957, 18);
  sqcRYGate(q, -1.7631356994024887, 19);
  sqcRZGate(q, -1.7824276327749466, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.990017935750803, 0);
  sqcRZGate(q, 3.0237041346654063, 0);
  sqcRYGate(q, -0.5240231999700372, 1);
  sqcRZGate(q, -2.3219777259153, 1);
  sqcRYGate(q, 0.08800625750022828, 2);
  sqcRZGate(q, -0.9251115647911323, 2);
  sqcRYGate(q, -1.2278237199303126, 3);
  sqcRZGate(q, -0.12199593141336253, 3);
  sqcRYGate(q, -3.1288996064778027, 4);
  sqcRZGate(q, 2.2858730964305725, 4);
  sqcRYGate(q, 3.1326331126776306, 5);
  sqcRZGate(q, 1.0151139726386313, 5);
  sqcRYGate(q, 2.1280457892844105, 6);
  sqcRZGate(q, 0.3135625966325266, 6);
  sqcRYGate(q, -0.3217673802286116, 7);
  sqcRZGate(q, -0.819741486200745, 7);
  sqcRYGate(q, -0.3469394672221062, 8);
  sqcRZGate(q, 2.6685008961806433, 8);
  sqcRYGate(q, 2.5534013708319647, 9);
  sqcRZGate(q, -0.8300497532133706, 9);
  sqcRYGate(q, 2.3612385106157965, 10);
  sqcRZGate(q, -0.43739549504105085, 10);
  sqcRYGate(q, 0.5097635400153679, 11);
  sqcRZGate(q, 0.03791832674873318, 11);
  sqcRYGate(q, 0.00885912050400961, 12);
  sqcRZGate(q, 1.0461527974701523, 12);
  sqcRYGate(q, 1.3297241883138198, 13);
  sqcRZGate(q, -1.8112492746099347, 13);
  sqcRYGate(q, 0.5560277847456836, 14);
  sqcRZGate(q, 0.361314115761057, 14);
  sqcRYGate(q, -0.7480587707652689, 15);
  sqcRZGate(q, -0.3337134351246913, 15);
  sqcRYGate(q, -2.397720944475666, 16);
  sqcRZGate(q, 1.1878411418361807, 16);
  sqcRYGate(q, -2.6969460550495636, 17);
  sqcRZGate(q, 3.129681161224093, 17);
  sqcRYGate(q, -1.0277714005655076, 18);
  sqcRZGate(q, 2.890366663854509, 18);
  sqcRYGate(q, -1.3025438487403953, 19);
  sqcRZGate(q, 2.6577719239220765, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.2940524259522197, 0);
  sqcRZGate(q, 0.28607193896263894, 0);
  sqcRYGate(q, -0.0006818804673951462, 1);
  sqcRZGate(q, 1.3122110793186166, 1);
  sqcRYGate(q, -2.0724230335269507, 2);
  sqcRZGate(q, -2.1439153250047944, 2);
  sqcRYGate(q, 1.049601371707137, 3);
  sqcRZGate(q, -2.7470717712913886, 3);
  sqcRYGate(q, -1.9906753047661458, 4);
  sqcRZGate(q, -0.8065201635265273, 4);
  sqcRYGate(q, -3.1066062719267835, 5);
  sqcRZGate(q, 2.348089257992313, 5);
  sqcRYGate(q, -0.5176394547555961, 6);
  sqcRZGate(q, -0.349227959135253, 6);
  sqcRYGate(q, -1.2525691424698016, 7);
  sqcRZGate(q, -1.0339047096913676, 7);
  sqcRYGate(q, -0.3249392321649166, 8);
  sqcRZGate(q, 0.7823214607413815, 8);
  sqcRYGate(q, -2.2693011203292768, 9);
  sqcRZGate(q, -1.7785319296278423, 9);
  sqcRYGate(q, 3.0996397766810357, 10);
  sqcRZGate(q, 2.23220052405383, 10);
  sqcRYGate(q, 3.126794799456623, 11);
  sqcRZGate(q, -1.3818530366673336, 11);
  sqcRYGate(q, 3.1257710114210084, 12);
  sqcRZGate(q, -1.3292124416745357, 12);
  sqcRYGate(q, 0.00850862080845371, 13);
  sqcRZGate(q, -2.7695044919845175, 13);
  sqcRYGate(q, -3.0533745636835334, 14);
  sqcRZGate(q, 1.4673073487317343, 14);
  sqcRYGate(q, -1.9852420688590193, 15);
  sqcRZGate(q, 0.06390668379775111, 15);
  sqcRYGate(q, -0.11576696701565137, 16);
  sqcRZGate(q, -0.6955686257733004, 16);
  sqcRYGate(q, 0.2227048336687476, 17);
  sqcRZGate(q, -1.6808299912301747, 17);
  sqcRYGate(q, 1.9945934411568906, 18);
  sqcRZGate(q, -0.5080915351885631, 18);
  sqcRYGate(q, -2.0700121468763246, 19);
  sqcRZGate(q, 1.7483832928076675, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.4075857328191907, 0);
  sqcRZGate(q, 1.75887498471733, 0);
  sqcRYGate(q, -0.5829287152251947, 1);
  sqcRZGate(q, 1.7015244378064895, 1);
  sqcRYGate(q, 0.018301204954116912, 2);
  sqcRZGate(q, 2.088818699881651, 2);
  sqcRYGate(q, 3.123182846639136, 3);
  sqcRZGate(q, 1.8599986151464938, 3);
  sqcRYGate(q, -0.4110173207219258, 4);
  sqcRZGate(q, 0.23547851274313295, 4);
  sqcRYGate(q, 3.0820654498629234, 5);
  sqcRZGate(q, -1.4080372707341906, 5);
  sqcRYGate(q, -2.5665657460130915, 6);
  sqcRZGate(q, 2.5012573223184793, 6);
  sqcRYGate(q, -0.06311025147786496, 7);
  sqcRZGate(q, 1.025515734121847, 7);
  sqcRYGate(q, -0.05859639231950631, 8);
  sqcRZGate(q, -1.919602001506102, 8);
  sqcRYGate(q, -2.4043959679594584, 9);
  sqcRZGate(q, -2.616989215045148, 9);
  sqcRYGate(q, 2.919862640490859, 10);
  sqcRZGate(q, 1.4445827832225646, 10);
  sqcRYGate(q, -0.4788823358430738, 11);
  sqcRZGate(q, 2.3300124748259843, 11);
  sqcRYGate(q, -0.16332736213252638, 12);
  sqcRZGate(q, 0.5368200768241476, 12);
  sqcRYGate(q, 1.7620289698904201, 13);
  sqcRZGate(q, -2.4899140707954137, 13);
  sqcRYGate(q, -1.3099843456964262, 14);
  sqcRZGate(q, -0.25028815937970245, 14);
  sqcRYGate(q, -2.8135560845636802, 15);
  sqcRZGate(q, -2.2762444007624794, 15);
  sqcRYGate(q, -1.6020488459387154, 16);
  sqcRZGate(q, 0.07195730663977133, 16);
  sqcRYGate(q, -0.15352907187849102, 17);
  sqcRZGate(q, 0.6174025832130523, 17);
  sqcRYGate(q, 2.8775286090634724, 18);
  sqcRZGate(q, 1.9562598874117088, 18);
  sqcRYGate(q, -1.3939432700511523, 19);
  sqcRZGate(q, -3.1017677052470702, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.042229244690161316, 0);
  sqcRZGate(q, -2.5138239274285588, 0);
  sqcRYGate(q, -3.1228568478425953, 1);
  sqcRZGate(q, 1.24088206516641, 1);
  sqcRYGate(q, 2.289839482838086, 2);
  sqcRZGate(q, -0.13868309583230157, 2);
  sqcRYGate(q, 2.9886872790400076, 3);
  sqcRZGate(q, -2.378050630452054, 3);
  sqcRYGate(q, -0.7740224051636412, 4);
  sqcRZGate(q, -0.8104989844464475, 4);
  sqcRYGate(q, -2.822110777556868, 5);
  sqcRZGate(q, -2.4795218021847756, 5);
  sqcRYGate(q, -2.5684839413158222, 6);
  sqcRZGate(q, 1.4554701941502544, 6);
  sqcRYGate(q, 2.1132047689906663, 7);
  sqcRZGate(q, 2.1521639232224046, 7);
  sqcRYGate(q, -2.403503579479701, 8);
  sqcRZGate(q, 2.9975203148309424, 8);
  sqcRYGate(q, -2.9282288596419654, 9);
  sqcRZGate(q, 0.30268677849993253, 9);
  sqcRYGate(q, -0.012731272508795577, 10);
  sqcRZGate(q, 0.9175170349260872, 10);
  sqcRYGate(q, -3.10342569912359, 11);
  sqcRZGate(q, -3.1158764283786367, 11);
  sqcRYGate(q, 3.0383913105624916, 12);
  sqcRZGate(q, 0.6274315055764718, 12);
  sqcRYGate(q, -0.00029017407101239456, 13);
  sqcRZGate(q, -0.4292291855691923, 13);
  sqcRYGate(q, -2.9580423275822283, 14);
  sqcRZGate(q, -1.63880192565004, 14);
  sqcRYGate(q, 0.15521547401565794, 15);
  sqcRZGate(q, 2.6043162018328925, 15);
  sqcRYGate(q, 2.2571637582522, 16);
  sqcRZGate(q, 0.04334325066527178, 16);
  sqcRYGate(q, -0.07434798320182129, 17);
  sqcRZGate(q, 1.4260962643905102, 17);
  sqcRYGate(q, 0.5132921777001656, 18);
  sqcRZGate(q, -0.3832399424627385, 18);
  sqcRYGate(q, 1.9457928369401154, 19);
  sqcRZGate(q, 1.6586111533847416, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.9990732841921863, 0);
  sqcRZGate(q, 3.0789349280595846, 0);
  sqcRYGate(q, 0.8576411425284629, 1);
  sqcRZGate(q, -0.8501775985953248, 1);
  sqcRYGate(q, -0.21238304354322474, 2);
  sqcRZGate(q, 2.8665607565732585, 2);
  sqcRYGate(q, -2.7471376785750428, 3);
  sqcRZGate(q, 2.03006420395948, 3);
  sqcRYGate(q, -2.831148825611313, 4);
  sqcRZGate(q, -1.2521331989858124, 4);
  sqcRYGate(q, -2.8219802355214654, 5);
  sqcRZGate(q, -0.9011225561601383, 5);
  sqcRYGate(q, 1.1817606673615058, 6);
  sqcRZGate(q, -1.862219580624389, 6);
  sqcRYGate(q, -2.1494325753849575, 7);
  sqcRZGate(q, -2.7756044139436358, 7);
  sqcRYGate(q, 1.3229287102974268, 8);
  sqcRZGate(q, -3.1349249303546545, 8);
  sqcRYGate(q, -1.549085091581702, 9);
  sqcRZGate(q, -1.5138933099787248, 9);
  sqcRYGate(q, -0.7521696321962743, 10);
  sqcRZGate(q, 2.120741346742486, 10);
  sqcRYGate(q, 0.05327071039397347, 11);
  sqcRZGate(q, 0.3418128296626892, 11);
  sqcRYGate(q, -1.063472182251843, 12);
  sqcRZGate(q, -2.532708573666786, 12);
  sqcRYGate(q, 1.11040262674915, 13);
  sqcRZGate(q, -0.4071172172757222, 13);
  sqcRYGate(q, -2.2399197891646776, 14);
  sqcRZGate(q, -2.551981855820673, 14);
  sqcRYGate(q, -0.8592491629949066, 15);
  sqcRZGate(q, 0.2837940547731126, 15);
  sqcRYGate(q, -1.6448535747575403, 16);
  sqcRZGate(q, -0.11924544860244711, 16);
  sqcRYGate(q, -0.009674145352451369, 17);
  sqcRZGate(q, -2.2186771707067874, 17);
  sqcRYGate(q, -2.5157798908733686, 18);
  sqcRZGate(q, -0.6873582826659165, 18);
  sqcRYGate(q, -0.19268570376998728, 19);
  sqcRZGate(q, 1.8442535824077502, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.526619391441879, 0);
  sqcRZGate(q, 1.839930218611107, 0);
  sqcRYGate(q, -0.12845297561834426, 1);
  sqcRZGate(q, -0.6724745754740811, 1);
  sqcRYGate(q, -0.035018836109594, 2);
  sqcRZGate(q, -2.682127123060302, 2);
  sqcRYGate(q, 1.9486605579761695, 3);
  sqcRZGate(q, 2.821750787014882, 3);
  sqcRYGate(q, 3.1055861857224345, 4);
  sqcRZGate(q, -1.1488586021506706, 4);
  sqcRYGate(q, 0.24413621688592624, 5);
  sqcRZGate(q, 0.44127494955290114, 5);
  sqcRYGate(q, 3.0093384214903867, 6);
  sqcRZGate(q, 2.452493144671831, 6);
  sqcRYGate(q, 2.96024139854579, 7);
  sqcRZGate(q, -0.04610042217735443, 7);
  sqcRYGate(q, -0.13168844309649774, 8);
  sqcRZGate(q, 0.09722130641410143, 8);
  sqcRYGate(q, 0.06400460492185102, 9);
  sqcRZGate(q, -1.6368157285147373, 9);
  sqcRYGate(q, 3.136363626724557, 10);
  sqcRZGate(q, 1.8160020479411019, 10);
  sqcRYGate(q, -0.01896281480282891, 11);
  sqcRZGate(q, -1.5516678455565618, 11);
  sqcRYGate(q, -3.133845933112417, 12);
  sqcRZGate(q, 1.009778585662941, 12);
  sqcRYGate(q, 0.019120697774140716, 13);
  sqcRZGate(q, -2.880781884690227, 13);
  sqcRYGate(q, -0.06554400311365784, 14);
  sqcRZGate(q, 0.7926964049870042, 14);
  sqcRYGate(q, 2.734573908966931, 15);
  sqcRZGate(q, -2.73940113922506, 15);
  sqcRYGate(q, -1.0273654472819738, 16);
  sqcRZGate(q, 2.449788294795192, 16);
  sqcRYGate(q, -0.42007518582179326, 17);
  sqcRZGate(q, -2.7467396579227192, 17);
  sqcRYGate(q, 0.15558379676042408, 18);
  sqcRZGate(q, -1.8122985903441173, 18);
  sqcRYGate(q, 0.7062633839127244, 19);
  sqcRZGate(q, 2.471192489938993, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.19697177882616845, 0);
  sqcRZGate(q, -1.9300938051740788, 0);
  sqcRYGate(q, 2.6878906586978744, 1);
  sqcRZGate(q, -0.185700326148995, 1);
  sqcRYGate(q, -2.006552730515799, 2);
  sqcRZGate(q, 2.46681765893909, 2);
  sqcRYGate(q, 0.5970396172584875, 3);
  sqcRZGate(q, -0.30134782153433015, 3);
  sqcRYGate(q, -2.1628950269102596, 4);
  sqcRZGate(q, -0.14663203290311522, 4);
  sqcRYGate(q, 2.524757029896585, 5);
  sqcRZGate(q, -3.046386969229209, 5);
  sqcRYGate(q, -2.609819849543877, 6);
  sqcRZGate(q, 1.471017240079921, 6);
  sqcRYGate(q, -1.0440082000989828, 7);
  sqcRZGate(q, 2.9213355664899905, 7);
  sqcRYGate(q, 1.0112433370680245, 8);
  sqcRZGate(q, -0.020084317934859222, 8);
  sqcRYGate(q, -1.8998537918307932, 9);
  sqcRZGate(q, -0.9440945107555624, 9);
  sqcRYGate(q, 0.599245988611905, 10);
  sqcRZGate(q, -0.8793297330437161, 10);
  sqcRYGate(q, 0.06297735145864714, 11);
  sqcRZGate(q, -0.7156532763188113, 11);
  sqcRYGate(q, 1.3987010578546766, 12);
  sqcRZGate(q, -2.6835000023861295, 12);
  sqcRYGate(q, 2.20626824683262, 13);
  sqcRZGate(q, -2.719778514474797, 13);
  sqcRYGate(q, 2.412813547508637, 14);
  sqcRZGate(q, -1.172162047205493, 14);
  sqcRYGate(q, -0.5569177066169367, 15);
  sqcRZGate(q, -1.4133055860825459, 15);
  sqcRYGate(q, -2.8286437656845136, 16);
  sqcRZGate(q, 2.2946076964123683, 16);
  sqcRYGate(q, -2.8452453967508458, 17);
  sqcRZGate(q, 0.6199923771620243, 17);
  sqcRYGate(q, -0.06000378360362382, 18);
  sqcRZGate(q, 2.7650064662080904, 18);
  sqcRYGate(q, -0.8420355275390733, 19);
  sqcRZGate(q, 1.6251111847467496, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.4421075737179363, 0);
  sqcRZGate(q, 0.46448822993597444, 0);
  sqcRYGate(q, 1.5203975511873384, 1);
  sqcRZGate(q, 3.1203780410919357, 1);
  sqcRYGate(q, 0.006373286843421866, 2);
  sqcRZGate(q, -1.6563025572614825, 2);
  sqcRYGate(q, 0.1838577344220539, 3);
  sqcRZGate(q, 0.5532611872738252, 3);
  sqcRYGate(q, 2.720138212156182, 4);
  sqcRZGate(q, -0.11480692461198282, 4);
  sqcRYGate(q, -2.899938787640741, 5);
  sqcRZGate(q, -0.28340309948270687, 5);
  sqcRYGate(q, 3.025222363342364, 6);
  sqcRZGate(q, 2.3515792266423796, 6);
  sqcRYGate(q, -2.973974107724637, 7);
  sqcRZGate(q, 3.135741968168984, 7);
  sqcRYGate(q, -0.5229924381507525, 8);
  sqcRZGate(q, 3.0857107041476213, 8);
  sqcRYGate(q, 3.0333751802461806, 9);
  sqcRZGate(q, 3.011203353069044, 9);
  sqcRYGate(q, 0.01681236530327298, 10);
  sqcRZGate(q, -0.31256548873363244, 10);
  sqcRYGate(q, 0.01298717038609158, 11);
  sqcRZGate(q, -1.0552042781353599, 11);
  sqcRYGate(q, 0.011414529224087033, 12);
  sqcRZGate(q, 1.743325178206232, 12);
  sqcRYGate(q, 0.028796885277920126, 13);
  sqcRZGate(q, 1.0557806422064324, 13);
  sqcRYGate(q, 2.896878326433079, 14);
  sqcRZGate(q, -0.2086553173995638, 14);
  sqcRYGate(q, 3.063404313981171, 15);
  sqcRZGate(q, -1.052531382260227, 15);
  sqcRYGate(q, -3.1210551127806094, 16);
  sqcRZGate(q, -0.6216280952867095, 16);
  sqcRYGate(q, 0.20199501507373355, 17);
  sqcRZGate(q, 2.2540446672675323, 17);
  sqcRYGate(q, 0.9914699269371708, 18);
  sqcRZGate(q, 0.2602682012317894, 18);
  sqcRYGate(q, -1.5901127526488947, 19);
  sqcRZGate(q, 1.8148393486511631, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5533831254779766, 0);
  sqcRZGate(q, -3.1394541572072976, 0);
  sqcRYGate(q, 1.486884863455835, 1);
  sqcRZGate(q, -1.5880790012328907, 1);
  sqcRYGate(q, -0.029550912624022097, 2);
  sqcRZGate(q, 0.7476341884944357, 2);
  sqcRYGate(q, -1.3858941836234895, 3);
  sqcRZGate(q, -0.0431788038840919, 3);
  sqcRYGate(q, 1.7260755929900693, 4);
  sqcRZGate(q, 2.8882613453127117, 4);
  sqcRYGate(q, -2.1400376981549645, 5);
  sqcRZGate(q, 3.006857286655594, 5);
  sqcRYGate(q, 0.05734748921754299, 6);
  sqcRZGate(q, -0.038475846987362776, 6);
  sqcRYGate(q, 1.2909658372476471, 7);
  sqcRZGate(q, 0.49243166437425934, 7);
  sqcRYGate(q, 0.5883567130420441, 8);
  sqcRZGate(q, -2.891403628338315, 8);
  sqcRYGate(q, -0.7321968863915055, 9);
  sqcRZGate(q, 0.14205285747229102, 9);
  sqcRYGate(q, 0.28625680787841473, 10);
  sqcRZGate(q, -0.3375976016858987, 10);
  sqcRYGate(q, 0.6564720451468995, 11);
  sqcRZGate(q, 1.4504994294891, 11);
  sqcRYGate(q, 2.8096551807005805, 12);
  sqcRZGate(q, -1.6713239307016234, 12);
  sqcRYGate(q, -3.0374465999183293, 13);
  sqcRZGate(q, -0.2016219699175135, 13);
  sqcRYGate(q, -1.082853245156441, 14);
  sqcRZGate(q, 2.7351769505665673, 14);
  sqcRYGate(q, -1.6249598746487628, 15);
  sqcRZGate(q, -0.23131545400866693, 15);
  sqcRYGate(q, 2.6723387202469366, 16);
  sqcRZGate(q, 1.8770936235408444, 16);
  sqcRYGate(q, -1.714714392519757, 17);
  sqcRZGate(q, 3.037759565832871, 17);
  sqcRYGate(q, -1.4472413483745472, 18);
  sqcRZGate(q, 3.046616135410026, 18);
  sqcRYGate(q, 1.6686523573912813, 19);
  sqcRZGate(q, -0.05465319708683173, 19);

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
