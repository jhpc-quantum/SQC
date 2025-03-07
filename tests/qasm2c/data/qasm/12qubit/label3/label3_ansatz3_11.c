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

  sqcRYGate(q, 3.140516495106759, 0);
  sqcRZGate(q, -0.3926445533220866, 0);
  sqcRYGate(q, 1.0728270893273781, 1);
  sqcRZGate(q, 3.13917343387799, 1);
  sqcRYGate(q, -1.7788261892822632, 2);
  sqcRZGate(q, -0.3771164853730403, 2);
  sqcRYGate(q, -0.3744965978501984, 3);
  sqcRZGate(q, -1.0761033659695747, 3);
  sqcRYGate(q, -3.138498570593939, 4);
  sqcRZGate(q, 1.4433746217367311, 4);
  sqcRYGate(q, -3.1402631800256984, 5);
  sqcRZGate(q, 2.5330072596361775, 5);
  sqcRYGate(q, -1.57096017998499, 6);
  sqcRZGate(q, 2.1620588220597585, 6);
  sqcRYGate(q, -1.5693542204000606, 7);
  sqcRZGate(q, -1.583168536497473, 7);
  sqcRYGate(q, -2.790043439106952, 8);
  sqcRZGate(q, -1.5414719977479694, 8);
  sqcRYGate(q, -1.5636850485780645, 9);
  sqcRZGate(q, -1.8209762700721086, 9);
  sqcRYGate(q, -3.132208806308725, 10);
  sqcRZGate(q, -0.8584943479765058, 10);
  sqcRYGate(q, -1.5836862956123037, 11);
  sqcRZGate(q, 2.5027642472172444, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 3.1411397133623113, 0);
  sqcRZGate(q, -1.0358432285256336, 0);
  sqcRYGate(q, 2.06351943937194, 1);
  sqcRZGate(q, -2.1290972375905683, 1);
  sqcRYGate(q, -1.7485350084515332, 2);
  sqcRZGate(q, -0.8210152777174653, 2);
  sqcRYGate(q, -2.9071429689396657, 3);
  sqcRZGate(q, -1.2620677409797851, 3);
  sqcRYGate(q, 1.5710402520760738, 4);
  sqcRZGate(q, 0.0111755354059162, 4);
  sqcRYGate(q, -3.1413147805093047, 5);
  sqcRZGate(q, -3.026195814886814, 5);
  sqcRYGate(q, 0.00026164247380133787, 6);
  sqcRZGate(q, -2.194666992912383, 6);
  sqcRYGate(q, 2.8815815239328675, 7);
  sqcRZGate(q, 1.4950816938181184, 7);
  sqcRYGate(q, -0.28528158534356596, 8);
  sqcRZGate(q, 3.1384877324404563, 8);
  sqcRYGate(q, 2.75515470460806, 9);
  sqcRZGate(q, 1.5726779241723627, 9);
  sqcRYGate(q, -1.6056810373899983, 10);
  sqcRZGate(q, -0.16071759645701444, 10);
  sqcRYGate(q, -3.1391327497294097, 11);
  sqcRZGate(q, 0.9392226984536798, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.005308054835027968, 0);
  sqcRZGate(q, -2.903661780637055, 0);
  sqcRYGate(q, 3.0933618280875224, 1);
  sqcRZGate(q, 2.8479068138336845, 1);
  sqcRYGate(q, 1.570215060038654, 2);
  sqcRZGate(q, 1.6487505774685391, 2);
  sqcRYGate(q, 1.168213617671536, 3);
  sqcRZGate(q, 0.3101587184895198, 3);
  sqcRYGate(q, -0.3022688354668017, 4);
  sqcRZGate(q, -0.0014525810782276246, 4);
  sqcRYGate(q, -1.3960227139744767, 5);
  sqcRZGate(q, -1.0973462274461454, 5);
  sqcRYGate(q, -0.03277492753727592, 6);
  sqcRZGate(q, 0.8843763481887743, 6);
  sqcRYGate(q, -1.959477674478828, 7);
  sqcRZGate(q, 1.5617020345058061, 7);
  sqcRYGate(q, -2.8119143885926103, 8);
  sqcRZGate(q, 2.752516320776731, 8);
  sqcRYGate(q, 1.5622910271779942, 9);
  sqcRZGate(q, 1.483013346041636, 9);
  sqcRYGate(q, 3.1411989653170873, 10);
  sqcRZGate(q, -0.668661839366413, 10);
  sqcRYGate(q, -0.9189925210127381, 11);
  sqcRZGate(q, 3.1356004373768673, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.5698660237079727, 0);
  sqcRZGate(q, -0.32401168896997545, 0);
  sqcRYGate(q, 0.16220723183758068, 1);
  sqcRZGate(q, 2.051502867400343, 1);
  sqcRYGate(q, 1.5816600876245328, 2);
  sqcRZGate(q, -3.0634570972080395, 2);
  sqcRYGate(q, 0.14346236039208105, 3);
  sqcRZGate(q, 3.1069092291405704, 3);
  sqcRYGate(q, 1.2865445885955302, 4);
  sqcRZGate(q, 1.5651204324302954, 4);
  sqcRYGate(q, 0.0022179991262381666, 5);
  sqcRZGate(q, -2.044461892301304, 5);
  sqcRYGate(q, -3.1411398881104433, 6);
  sqcRZGate(q, 0.9305964759775772, 6);
  sqcRYGate(q, -3.1410509349741775, 7);
  sqcRZGate(q, 0.01832701096059619, 7);
  sqcRYGate(q, -3.1385912289373925, 8);
  sqcRZGate(q, -0.8826063852705568, 8);
  sqcRYGate(q, -3.1379448351746575, 9);
  sqcRZGate(q, -1.6325812629666503, 9);
  sqcRYGate(q, -1.604067915813875, 10);
  sqcRZGate(q, -1.564431055118749, 10);
  sqcRYGate(q, -1.5900384743802287, 11);
  sqcRZGate(q, 0.31118403699563496, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.7577932743395592, 0);
  sqcRZGate(q, -2.7193323145475308, 0);
  sqcRYGate(q, -1.5702846647097424, 1);
  sqcRZGate(q, 2.7360395932260833, 1);
  sqcRYGate(q, 3.139239476565014, 2);
  sqcRZGate(q, -2.9997594185126513, 2);
  sqcRYGate(q, 1.5608843910938184, 3);
  sqcRZGate(q, -0.0445781260565468, 3);
  sqcRYGate(q, -0.7266006232094425, 4);
  sqcRZGate(q, 3.13813687862083, 4);
  sqcRYGate(q, 0.9499900110215322, 5);
  sqcRZGate(q, -0.3814336368328819, 5);
  sqcRYGate(q, -0.012659691630234171, 6);
  sqcRZGate(q, -0.9895725231278614, 6);
  sqcRYGate(q, -1.626386810945064, 7);
  sqcRZGate(q, 0.5549064249837494, 7);
  sqcRYGate(q, -0.010079661360529074, 8);
  sqcRZGate(q, -3.0449189430696912, 8);
  sqcRYGate(q, -1.3210136994587414, 9);
  sqcRZGate(q, -1.5814324430522944, 9);
  sqcRYGate(q, -1.5821339378685222, 10);
  sqcRZGate(q, -2.9688977288558105, 10);
  sqcRYGate(q, -0.04166983493203968, 11);
  sqcRZGate(q, -1.8213197755057176, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.009091732003549069, 0);
  sqcRZGate(q, 2.6853585871296874, 0);
  sqcRYGate(q, -3.1383149839316316, 1);
  sqcRZGate(q, 1.6078911600912704, 1);
  sqcRYGate(q, -0.4859551580949111, 2);
  sqcRZGate(q, -3.1409078122404286, 2);
  sqcRYGate(q, 1.5700296695094504, 3);
  sqcRZGate(q, -2.264187537479281, 3);
  sqcRYGate(q, -1.594856917942371, 4);
  sqcRZGate(q, 1.7081354841717564, 4);
  sqcRYGate(q, 3.1412114560088056, 5);
  sqcRZGate(q, -2.6453386615628696, 5);
  sqcRYGate(q, 1.8962769636893522e-05, 6);
  sqcRZGate(q, -0.6910745342062612, 6);
  sqcRYGate(q, 1.1260454932937591e-06, 7);
  sqcRZGate(q, -1.7340035226038586, 7);
  sqcRYGate(q, 3.1310329878319068, 8);
  sqcRZGate(q, -0.400773438481301, 8);
  sqcRYGate(q, 1.5761269084420189, 9);
  sqcRZGate(q, -1.5691851647599957, 9);
  sqcRYGate(q, -2.987316864667376, 10);
  sqcRZGate(q, 0.8438877374496275, 10);
  sqcRYGate(q, -1.5707163541779252, 11);
  sqcRZGate(q, 1.571580400488175, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.9592891740070981, 0);
  sqcRZGate(q, -1.2556197415673314, 0);
  sqcRYGate(q, -2.5363393517893735, 1);
  sqcRZGate(q, -2.373279584074151, 1);
  sqcRYGate(q, -1.2146985147011016, 2);
  sqcRZGate(q, 3.1376217486887916, 2);
  sqcRYGate(q, -3.137295274238701, 3);
  sqcRZGate(q, 0.6413957681891853, 3);
  sqcRYGate(q, 3.1387195045109513, 4);
  sqcRZGate(q, 0.053300564217188644, 4);
  sqcRYGate(q, 1.6050028584384544, 5);
  sqcRZGate(q, -0.528175034298882, 5);
  sqcRYGate(q, -1.5644673207181246, 6);
  sqcRZGate(q, -1.5152996516557584, 6);
  sqcRYGate(q, 1.575829572749221, 7);
  sqcRZGate(q, -0.12609622185367098, 7);
  sqcRYGate(q, 1.5654904782827388, 8);
  sqcRZGate(q, 1.5991796823959241, 8);
  sqcRYGate(q, -0.2158712794907545, 9);
  sqcRZGate(q, -1.5722599006769418, 9);
  sqcRYGate(q, 3.1411011026690168, 10);
  sqcRZGate(q, 1.528602467281165, 10);
  sqcRYGate(q, -1.5686356612587806, 11);
  sqcRZGate(q, -1.5755986204965886, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.005897075862112332, 0);
  sqcRZGate(q, 3.06342039078039, 0);
  sqcRYGate(q, -3.1242753563510544, 1);
  sqcRZGate(q, -2.8952878290399613, 1);
  sqcRYGate(q, -2.8099291682760947, 2);
  sqcRZGate(q, -0.009511736215730872, 2);
  sqcRYGate(q, 0.005890815205970201, 3);
  sqcRZGate(q, -3.022921910931868, 3);
  sqcRYGate(q, 3.138227306521182, 4);
  sqcRZGate(q, 1.5321517886000775, 4);
  sqcRYGate(q, -3.141218751109713, 5);
  sqcRZGate(q, 1.0716246902268685, 5);
  sqcRYGate(q, 0.014493259395856727, 6);
  sqcRZGate(q, -1.1659303372005865, 6);
  sqcRYGate(q, -0.0007825344528971101, 7);
  sqcRZGate(q, -3.0244335583537008, 7);
  sqcRYGate(q, -1.564878381937556, 8);
  sqcRZGate(q, 1.7441528761465381, 8);
  sqcRYGate(q, 1.5711248714130466, 9);
  sqcRZGate(q, -1.7790599622546224, 9);
  sqcRYGate(q, 1.5786465673450012, 10);
  sqcRZGate(q, 1.6201724032644123, 10);
  sqcRYGate(q, 1.561192215794355, 11);
  sqcRZGate(q, 0.08917641391275843, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.7792032889994682, 0);
  sqcRZGate(q, -1.2774244816232514, 0);
  sqcRYGate(q, 1.030968731132182, 1);
  sqcRZGate(q, 1.7784559711781858, 1);
  sqcRYGate(q, -1.9062213053395016, 2);
  sqcRZGate(q, -0.049722987914487586, 2);
  sqcRYGate(q, -0.026499910430236362, 3);
  sqcRZGate(q, 0.11746833566543168, 3);
  sqcRYGate(q, 2.449852701014559, 4);
  sqcRZGate(q, -2.486242570791546, 4);
  sqcRYGate(q, 2.2638406409220764, 5);
  sqcRZGate(q, 1.6159667763262169, 5);
  sqcRYGate(q, -3.1382501688551288, 6);
  sqcRZGate(q, -1.1129477980273608, 6);
  sqcRYGate(q, -1.5702386976514084, 7);
  sqcRZGate(q, -3.1412165687183218, 7);
  sqcRYGate(q, -0.3117615541401859, 8);
  sqcRZGate(q, 3.0342858413936704, 8);
  sqcRYGate(q, 1.5599683224286771, 9);
  sqcRZGate(q, 0.8405735439695858, 9);
  sqcRYGate(q, 1.6101159870690258, 10);
  sqcRZGate(q, -1.5686176407672108, 10);
  sqcRYGate(q, 0.00358374727611821, 11);
  sqcRZGate(q, 1.1891484968917299, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.6265028555482273, 0);
  sqcRZGate(q, 1.5642887224969513, 0);
  sqcRYGate(q, 1.5766554460100055, 1);
  sqcRZGate(q, 1.570695574203303, 1);
  sqcRYGate(q, 0.12475870673578893, 2);
  sqcRZGate(q, 1.5771180628511525, 2);
  sqcRYGate(q, 1.5708532117226766, 3);
  sqcRZGate(q, 0.004910683489624929, 3);
  sqcRYGate(q, -3.1405560462281783, 4);
  sqcRZGate(q, 1.0278748655731813, 4);
  sqcRYGate(q, -2.928894089768557, 5);
  sqcRZGate(q, 0.8304832682113609, 5);
  sqcRYGate(q, -3.1213381313977258, 6);
  sqcRZGate(q, 1.925420850459479, 6);
  sqcRYGate(q, 1.570126075011367, 7);
  sqcRZGate(q, -0.5330763481741121, 7);
  sqcRYGate(q, 0.0001330321317345451, 8);
  sqcRZGate(q, -0.029874715994671952, 8);
  sqcRYGate(q, 0.00011487473466331723, 9);
  sqcRZGate(q, -0.8447296047403468, 9);
  sqcRYGate(q, -1.5708130653520855, 10);
  sqcRZGate(q, 0.1621197323247492, 10);
  sqcRYGate(q, -0.0008557638605610396, 11);
  sqcRZGate(q, -0.3144682284659881, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.4897957433573135, 0);
  sqcRZGate(q, -1.5691552047115167, 0);
  sqcRYGate(q, -3.0886064693581696, 1);
  sqcRZGate(q, 1.6362756750989238, 1);
  sqcRYGate(q, -1.5248727833239764, 2);
  sqcRZGate(q, 1.5707859283762025, 2);
  sqcRYGate(q, 1.5976105930474827, 3);
  sqcRZGate(q, -3.023886896653117, 3);
  sqcRYGate(q, -0.006909382838041544, 4);
  sqcRZGate(q, 2.6574364355281928, 4);
  sqcRYGate(q, 0.7182966297301538, 5);
  sqcRZGate(q, -0.9225554225296984, 5);
  sqcRYGate(q, -0.00023279629216599318, 6);
  sqcRZGate(q, 2.366356030010575, 6);
  sqcRYGate(q, 0.0003271126656025913, 7);
  sqcRZGate(q, 2.457719236830979, 7);
  sqcRYGate(q, -1.5706844053270217, 8);
  sqcRZGate(q, -3.1366386005508335, 8);
  sqcRYGate(q, -1.5711423896848684, 9);
  sqcRZGate(q, 1.570781856911957, 9);
  sqcRYGate(q, -3.0911775766322154, 10);
  sqcRZGate(q, 1.9892674385243454, 10);
  sqcRYGate(q, -7.583653304961546e-05, 11);
  sqcRZGate(q, -2.5977531799650606, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.1939160556627169, 0);
  sqcRZGate(q, 0.004062021684209705, 0);
  sqcRYGate(q, 1.5507454292698777, 1);
  sqcRZGate(q, -1.4433861718463632, 1);
  sqcRYGate(q, 1.5175325196799563, 2);
  sqcRZGate(q, -2.2612382844953087, 2);
  sqcRYGate(q, 3.133991329830723, 3);
  sqcRZGate(q, -1.4524346904179135, 3);
  sqcRYGate(q, 0.00018509066997991167, 4);
  sqcRZGate(q, -2.318470193026604, 4);
  sqcRYGate(q, 0.04666911857143408, 5);
  sqcRZGate(q, 1.1328044607320527, 5);
  sqcRYGate(q, 0.0007180253218450616, 6);
  sqcRZGate(q, 0.5002617036089623, 6);
  sqcRYGate(q, 6.203937418136004e-05, 7);
  sqcRZGate(q, 0.4059389999448655, 7);
  sqcRYGate(q, -1.5707754186844112, 8);
  sqcRZGate(q, 3.1373296821120222, 8);
  sqcRYGate(q, -1.5711296903684477, 9);
  sqcRZGate(q, -3.1398425960583936, 9);
  sqcRYGate(q, -2.6824739119214263, 10);
  sqcRZGate(q, -0.6760543244654825, 10);
  sqcRYGate(q, -0.0018678038152692977, 11);
  sqcRZGate(q, -1.0751603015845432, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.5620122382707473, 0);
  sqcRZGate(q, -0.002027200205238429, 0);
  sqcRYGate(q, -3.139991299404196, 1);
  sqcRZGate(q, 1.6983426617839814, 1);
  sqcRYGate(q, 0.017604034378468466, 2);
  sqcRZGate(q, 0.6913695671181755, 2);
  sqcRYGate(q, -1.56825380504245, 3);
  sqcRZGate(q, 3.117596469504827, 3);
  sqcRYGate(q, -3.1393505287790244, 4);
  sqcRZGate(q, 1.6258962278553997, 4);
  sqcRYGate(q, 1.3488845457964698, 5);
  sqcRZGate(q, 2.4077247911106667, 5);
  sqcRYGate(q, 1.5942852128536549, 6);
  sqcRZGate(q, 2.0837770704889613, 6);
  sqcRYGate(q, -0.852409659884984, 7);
  sqcRZGate(q, -0.059207864117625235, 7);
  sqcRYGate(q, -1.5700640269798065, 8);
  sqcRZGate(q, 0.19538950083027196, 8);
  sqcRYGate(q, -1.6519982910664552, 9);
  sqcRZGate(q, -0.3649608582431773, 9);
  sqcRYGate(q, 1.6457183778203393, 10);
  sqcRZGate(q, 3.1083445635926408, 10);
  sqcRYGate(q, 0.033680539396768516, 11);
  sqcRZGate(q, -1.927353935738461, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.8416680082688526, 0);
  sqcRZGate(q, -0.06503579620572605, 0);
  sqcRYGate(q, -1.557576918445619, 1);
  sqcRZGate(q, -1.5039856233860034, 1);
  sqcRYGate(q, -1.5710581244173758, 2);
  sqcRZGate(q, 3.1250151546906286, 2);
  sqcRYGate(q, 3.1407308095438857, 3);
  sqcRZGate(q, 1.5456165983690628, 3);
  sqcRYGate(q, 0.0009909380695134473, 4);
  sqcRZGate(q, -0.8722143846795972, 4);
  sqcRYGate(q, 0.0008800812050875351, 5);
  sqcRZGate(q, -1.6906142453426432, 5);
  sqcRYGate(q, 0.0007716208697532424, 6);
  sqcRZGate(q, 1.9337493813883957, 6);
  sqcRYGate(q, 3.141438629240508, 7);
  sqcRZGate(q, -2.237801281206327, 7);
  sqcRYGate(q, -3.1415737520714075, 8);
  sqcRZGate(q, 0.1471530909193417, 8);
  sqcRYGate(q, -3.141292662233544, 9);
  sqcRZGate(q, -0.13385133494430512, 9);
  sqcRYGate(q, 1.5716033943697199, 10);
  sqcRZGate(q, -0.6652778261807653, 10);
  sqcRYGate(q, 1.5686953397412076, 11);
  sqcRZGate(q, 1.5588412850549782, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 3.101032542216606, 0);
  sqcRZGate(q, 2.9476378642273153, 0);
  sqcRYGate(q, 0.0057590170544425615, 1);
  sqcRZGate(q, -1.7633086560262603, 1);
  sqcRYGate(q, 1.6231172982117792, 2);
  sqcRZGate(q, -0.1375028633312812, 2);
  sqcRYGate(q, 1.5826158306086988, 3);
  sqcRZGate(q, 3.015191898821716, 3);
  sqcRYGate(q, -1.558371952298748, 4);
  sqcRZGate(q, 2.991431824651987, 4);
  sqcRYGate(q, -2.160597624287722, 5);
  sqcRZGate(q, -2.978037226057804, 5);
  sqcRYGate(q, 0.07111267869714183, 6);
  sqcRZGate(q, 0.5733254346884307, 6);
  sqcRYGate(q, 2.1442287120563703, 7);
  sqcRZGate(q, 0.5394436288313296, 7);
  sqcRYGate(q, 0.6276287315685414, 8);
  sqcRZGate(q, 1.4890191690018462, 8);
  sqcRYGate(q, 0.0034787796154356343, 9);
  sqcRZGate(q, 2.784003469808741, 9);
  sqcRYGate(q, -3.106276357708926, 10);
  sqcRZGate(q, 2.3501259038974753, 10);
  sqcRYGate(q, -3.137754561268203, 11);
  sqcRZGate(q, -1.7079509908306818, 11);

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
