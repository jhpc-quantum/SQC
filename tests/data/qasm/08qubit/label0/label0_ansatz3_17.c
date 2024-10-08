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

  sqcRYGate(q, -2.194385210719921, 0);
  sqcRZGate(q, -1.7757524306409298, 0);
  sqcRYGate(q, 2.525522554114704, 1);
  sqcRZGate(q, 1.6310580827244525, 1);
  sqcRYGate(q, 0.43885450166942996, 2);
  sqcRZGate(q, -2.7724115977081167, 2);
  sqcRYGate(q, 0.0013625341351772846, 3);
  sqcRZGate(q, -0.0614361871212283, 3);
  sqcRYGate(q, -0.0003245324667314504, 4);
  sqcRZGate(q, -1.292910223470984, 4);
  sqcRYGate(q, 0.1820013946737868, 5);
  sqcRZGate(q, -1.7115327617968958, 5);
  sqcRYGate(q, 2.982926681167495, 6);
  sqcRZGate(q, 1.9858036463507602, 6);
  sqcRYGate(q, 3.141063780628623, 7);
  sqcRZGate(q, 2.5066453612977426, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.3670167818028756, 0);
  sqcRZGate(q, -2.106835077436485, 0);
  sqcRYGate(q, -2.5035491195360646, 1);
  sqcRZGate(q, -2.557955075639571, 1);
  sqcRYGate(q, 0.8016022241514916, 2);
  sqcRZGate(q, 0.16398557946194983, 2);
  sqcRYGate(q, 3.1413426619507527, 3);
  sqcRZGate(q, -0.8247891002658359, 3);
  sqcRYGate(q, -1.759083224229993, 4);
  sqcRZGate(q, 0.3159558137407484, 4);
  sqcRYGate(q, -2.5417139753715383, 5);
  sqcRZGate(q, 2.5925642841592174, 5);
  sqcRYGate(q, 1.6350309510367582, 6);
  sqcRZGate(q, -1.7142173430973857, 6);
  sqcRYGate(q, -3.1408466823575063, 7);
  sqcRZGate(q, -2.6456411358944303, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.8193531022471894, 0);
  sqcRZGate(q, -2.903729950810608, 0);
  sqcRYGate(q, -0.28251106178049085, 1);
  sqcRZGate(q, -2.313968060900308, 1);
  sqcRYGate(q, 0.00022384537507825667, 2);
  sqcRZGate(q, 2.7395665409663765, 2);
  sqcRYGate(q, 0.0003701622129819171, 3);
  sqcRZGate(q, 0.37082799431100383, 3);
  sqcRYGate(q, 3.141244846878018, 4);
  sqcRZGate(q, 2.580077622012079, 4);
  sqcRYGate(q, 1.5221047537861256, 5);
  sqcRZGate(q, -1.1161530378837474, 5);
  sqcRYGate(q, -1.1817877794306157, 6);
  sqcRZGate(q, -2.57892293952428, 6);
  sqcRYGate(q, -0.30147678462015026, 7);
  sqcRZGate(q, 2.0091515406812794, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.6725034761992417, 0);
  sqcRZGate(q, 0.238894756057638, 0);
  sqcRYGate(q, -1.1352763223886824, 1);
  sqcRZGate(q, 2.032847205762236, 1);
  sqcRYGate(q, 1.2568837600846576, 2);
  sqcRZGate(q, 2.991863632518342, 2);
  sqcRYGate(q, 0.19321558466744196, 3);
  sqcRZGate(q, 1.708045137634147, 3);
  sqcRYGate(q, -1.3819600883908454, 4);
  sqcRZGate(q, 0.7372847499939628, 4);
  sqcRYGate(q, -1.6136538540628544, 5);
  sqcRZGate(q, -1.8415770623114063, 5);
  sqcRYGate(q, -1.9052272962270367, 6);
  sqcRZGate(q, -0.9750954735331501, 6);
  sqcRYGate(q, -1.060635186578577, 7);
  sqcRZGate(q, 3.0565681311666664, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.7532017996726315, 0);
  sqcRZGate(q, 2.303423313951559, 0);
  sqcRYGate(q, 0.28293528819871494, 1);
  sqcRZGate(q, -1.672605693709207, 1);
  sqcRYGate(q, 0.8028364062010589, 2);
  sqcRZGate(q, 2.8472513363229415, 2);
  sqcRYGate(q, 1.8879510539990505, 3);
  sqcRZGate(q, -3.078956294320746, 3);
  sqcRYGate(q, -3.1414103202049297, 4);
  sqcRZGate(q, 2.682997056807343, 4);
  sqcRYGate(q, -3.139743304187635, 5);
  sqcRZGate(q, -0.00883208055525575, 5);
  sqcRYGate(q, -3.1401040200641797, 6);
  sqcRZGate(q, -2.750301244653388, 6);
  sqcRYGate(q, -3.1261237982337176, 7);
  sqcRZGate(q, 2.4598373683346857, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.210827451398365, 0);
  sqcRZGate(q, -3.1226418090690373, 0);
  sqcRYGate(q, -0.2991362190025626, 1);
  sqcRZGate(q, 0.10508744112562951, 1);
  sqcRYGate(q, 0.04558775284227056, 2);
  sqcRZGate(q, -1.3579854625200436, 2);
  sqcRYGate(q, -0.6715018075026693, 3);
  sqcRZGate(q, 2.8124298198988607, 3);
  sqcRYGate(q, -0.000882462539890747, 4);
  sqcRZGate(q, -2.77638900879449, 4);
  sqcRYGate(q, -0.0018396807847338434, 5);
  sqcRZGate(q, 0.5065284077621276, 5);
  sqcRYGate(q, -1.0421205746391513, 6);
  sqcRZGate(q, -3.129521215414698, 6);
  sqcRYGate(q, -0.5931026804564935, 7);
  sqcRZGate(q, 2.081298568794696, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.7949015700427187, 0);
  sqcRZGate(q, -1.2791484610388728, 0);
  sqcRYGate(q, 2.0665982175390125, 1);
  sqcRZGate(q, -1.9900841362012294, 1);
  sqcRYGate(q, 3.1382748992696587, 2);
  sqcRZGate(q, -2.8399255199549827, 2);
  sqcRYGate(q, 1.6281245315981092, 3);
  sqcRZGate(q, -1.5534849234335537, 3);
  sqcRYGate(q, -1.5428397716789322, 4);
  sqcRZGate(q, 2.5191421615980016, 4);
  sqcRYGate(q, -3.1413828371647194, 5);
  sqcRZGate(q, -2.3190906449965323, 5);
  sqcRYGate(q, 2.866653347156493, 6);
  sqcRZGate(q, 1.8268486249804798, 6);
  sqcRYGate(q, -1.255832975002893, 7);
  sqcRZGate(q, -1.5780831555950448, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.6640960519268992, 0);
  sqcRZGate(q, -2.4115178325721325, 0);
  sqcRYGate(q, 2.3017465824040437, 1);
  sqcRZGate(q, 1.925212883463094, 1);
  sqcRYGate(q, -2.7572994472416887, 2);
  sqcRZGate(q, 0.13830616188590766, 2);
  sqcRYGate(q, 0.7004069073736557, 3);
  sqcRZGate(q, 1.1883200520498418, 3);
  sqcRYGate(q, 3.1408871667545855, 4);
  sqcRZGate(q, 0.23181896161167612, 4);
  sqcRYGate(q, 0.9034459670185235, 5);
  sqcRZGate(q, -0.007385875355026405, 5);
  sqcRYGate(q, 2.8981455707564843, 6);
  sqcRZGate(q, -0.5208533720450762, 6);
  sqcRYGate(q, 1.5711960125666011, 7);
  sqcRZGate(q, 1.6515853646055885, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.2728993872244783, 0);
  sqcRZGate(q, -1.8639824889322918, 0);
  sqcRYGate(q, -0.5993997373456317, 1);
  sqcRZGate(q, 2.0202291396681296, 1);
  sqcRYGate(q, 2.3021569264589643, 2);
  sqcRZGate(q, 2.3726201657636024, 2);
  sqcRYGate(q, 3.141219173099117, 3);
  sqcRZGate(q, 1.7878374147331357, 3);
  sqcRYGate(q, -0.0003933350702620686, 4);
  sqcRZGate(q, 0.7373402784060447, 4);
  sqcRYGate(q, 2.9148248651591913, 5);
  sqcRZGate(q, -0.008422389496335128, 5);
  sqcRYGate(q, 1.587650432213989, 6);
  sqcRZGate(q, -1.5408860803339834, 6);
  sqcRYGate(q, 3.141579891479135, 7);
  sqcRZGate(q, 1.4231029389736554, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.6552986362263988, 0);
  sqcRZGate(q, 0.5730837098860712, 0);
  sqcRYGate(q, -1.0404948265678655, 1);
  sqcRZGate(q, -1.8624661078617513, 1);
  sqcRYGate(q, 2.5223177434014508, 2);
  sqcRZGate(q, -0.5267426843610832, 2);
  sqcRYGate(q, 2.4792828787838683, 3);
  sqcRZGate(q, 0.20547077145054826, 3);
  sqcRYGate(q, -0.00011405222059313048, 4);
  sqcRZGate(q, -2.9134784569502776, 4);
  sqcRYGate(q, 2.239158918984989, 5);
  sqcRZGate(q, -0.7775517940163893, 5);
  sqcRYGate(q, -1.4268311140579675, 6);
  sqcRZGate(q, 1.7462225319023394, 6);
  sqcRYGate(q, -3.1406460989167404, 7);
  sqcRZGate(q, 0.27716247222197, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.9574388645358249, 0);
  sqcRZGate(q, -1.1507725880389672, 0);
  sqcRYGate(q, 1.6073612717825796, 1);
  sqcRZGate(q, -1.8688428292059602, 1);
  sqcRYGate(q, 1.7274754625592665, 2);
  sqcRZGate(q, -2.1884310205888764, 2);
  sqcRYGate(q, 1.2334616396719031, 3);
  sqcRZGate(q, 0.09103920044043524, 3);
  sqcRYGate(q, 0.5067571736953528, 4);
  sqcRZGate(q, -2.972197432145188, 4);
  sqcRYGate(q, -1.5223877985485657, 5);
  sqcRZGate(q, 0.1311409775534038, 5);
  sqcRYGate(q, 2.592544739850264, 6);
  sqcRZGate(q, -1.8846084957646376, 6);
  sqcRYGate(q, 2.5430328280765493, 7);
  sqcRZGate(q, -0.9904112381012496, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.8941189862499805, 0);
  sqcRZGate(q, -2.5601913405867043, 0);
  sqcRYGate(q, 0.49899779068493255, 1);
  sqcRZGate(q, -1.1067130143831565, 1);
  sqcRYGate(q, -0.04976770172535527, 2);
  sqcRZGate(q, 2.5443817475646098, 2);
  sqcRYGate(q, 1.2148765002120427, 3);
  sqcRZGate(q, 1.8131609907123427, 3);
  sqcRYGate(q, 0.00028070240407007674, 4);
  sqcRZGate(q, 2.395602427371886, 4);
  sqcRYGate(q, 0.000267216383614155, 5);
  sqcRZGate(q, -1.130633749114331, 5);
  sqcRYGate(q, -3.141298224895637, 6);
  sqcRZGate(q, 2.5421146938277155, 6);
  sqcRYGate(q, -3.1405122008836233, 7);
  sqcRZGate(q, 2.1491618641500394, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.389624614150023, 0);
  sqcRZGate(q, -0.7125578795971735, 0);
  sqcRYGate(q, -0.3484831359914909, 1);
  sqcRZGate(q, 2.1275414899218106, 1);
  sqcRYGate(q, 1.7367039180054231, 2);
  sqcRZGate(q, -1.3859141563327526, 2);
  sqcRYGate(q, -2.5169564024192868, 3);
  sqcRZGate(q, 0.4810283439728442, 3);
  sqcRYGate(q, -2.714965301255275, 4);
  sqcRZGate(q, -0.1701702351761309, 4);
  sqcRYGate(q, -1.4509177067321708, 5);
  sqcRZGate(q, 3.081231704747323, 5);
  sqcRYGate(q, -1.3007292969281963, 6);
  sqcRZGate(q, -0.6437932180282941, 6);
  sqcRYGate(q, 0.6004794376026412, 7);
  sqcRZGate(q, -0.4498152682961267, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.402737806366774, 0);
  sqcRZGate(q, 2.909816804333252, 0);
  sqcRYGate(q, 1.2715310233224484, 1);
  sqcRZGate(q, 0.425823696396751, 1);
  sqcRYGate(q, 0.8051836643866698, 2);
  sqcRZGate(q, -1.1434339207079398, 2);
  sqcRYGate(q, -0.1336030593811195, 3);
  sqcRZGate(q, 3.027337431435582, 3);
  sqcRYGate(q, 3.1414460575248966, 4);
  sqcRZGate(q, -1.786734047290646, 4);
  sqcRYGate(q, 0.00024863172550393386, 5);
  sqcRZGate(q, -2.964269789150499, 5);
  sqcRYGate(q, -0.7937604932710182, 6);
  sqcRZGate(q, -3.121397714514864, 6);
  sqcRYGate(q, -1.2366699723435763, 7);
  sqcRZGate(q, 2.508720137710215, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.24454258376140417, 0);
  sqcRZGate(q, 1.7233831002611693, 0);
  sqcRYGate(q, -1.1273772580611343, 1);
  sqcRZGate(q, 1.8163548802716918, 1);
  sqcRYGate(q, 2.718322604791672, 2);
  sqcRZGate(q, 2.1078429981180697, 2);
  sqcRYGate(q, -2.5253486822153124, 3);
  sqcRZGate(q, -1.1114948764193935, 3);
  sqcRYGate(q, -2.8679802935691567, 4);
  sqcRZGate(q, -0.5307773567478128, 4);
  sqcRYGate(q, -3.1402402375007656, 5);
  sqcRZGate(q, -1.1957469405180314, 5);
  sqcRYGate(q, -2.8834600352722317, 6);
  sqcRZGate(q, -2.5395580836734966, 6);
  sqcRYGate(q, 2.826258578912325, 7);
  sqcRZGate(q, -0.4663481066293977, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.3390973614110555, 0);
  sqcRZGate(q, 1.5576566444229094, 0);
  sqcRYGate(q, -0.876611363387922, 1);
  sqcRZGate(q, 2.633738070412846, 1);
  sqcRYGate(q, 0.6636109221630004, 2);
  sqcRZGate(q, 0.7688681991127557, 2);
  sqcRYGate(q, 3.04160986199765, 3);
  sqcRZGate(q, -1.772682683835512, 3);
  sqcRYGate(q, 3.141564748220143, 4);
  sqcRZGate(q, -2.772848931369246, 4);
  sqcRYGate(q, -0.0012691640166515583, 5);
  sqcRZGate(q, 1.1664154968128901, 5);
  sqcRYGate(q, 3.1360837402415314, 6);
  sqcRZGate(q, -2.3744013297911026, 6);
  sqcRYGate(q, -2.7596503492562054, 7);
  sqcRZGate(q, -2.747698307258532, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.1383521870646787, 0);
  sqcRZGate(q, 1.9037981062147284, 0);
  sqcRYGate(q, -0.14288844149706123, 1);
  sqcRZGate(q, -0.7930596322167499, 1);
  sqcRYGate(q, 0.3273493349070044, 2);
  sqcRZGate(q, -0.8812964246860505, 2);
  sqcRYGate(q, -1.9957388721656295, 3);
  sqcRZGate(q, 1.0413236553683045, 3);
  sqcRYGate(q, -1.8708916880296718, 4);
  sqcRZGate(q, -2.875208971355786, 4);
  sqcRYGate(q, -3.141276023995889, 5);
  sqcRZGate(q, 2.71949113410103, 5);
  sqcRYGate(q, 2.94244709768723, 6);
  sqcRZGate(q, -1.2646085796599136, 6);
  sqcRYGate(q, 0.27125978159196507, 7);
  sqcRZGate(q, -0.24666018041930898, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.2597892190015165, 0);
  sqcRZGate(q, -2.3142497642954356, 0);
  sqcRYGate(q, 0.5697323282349411, 1);
  sqcRZGate(q, 2.5386624530200055, 1);
  sqcRYGate(q, 0.15382745257970232, 2);
  sqcRZGate(q, 1.918619206073642, 2);
  sqcRYGate(q, -2.856275109326438, 3);
  sqcRZGate(q, -0.7129739721459514, 3);
  sqcRYGate(q, -0.0001637457340566482, 4);
  sqcRZGate(q, -1.686921143521076, 4);
  sqcRYGate(q, 0.00018947608828590035, 5);
  sqcRZGate(q, -1.4016838438312846, 5);
  sqcRYGate(q, 0.032201050517877534, 6);
  sqcRZGate(q, 1.310062390102993, 6);
  sqcRYGate(q, -1.5256419668507712, 7);
  sqcRZGate(q, 1.368859040951077, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.0288112967517993, 0);
  sqcRZGate(q, 1.0343212934413586, 0);
  sqcRYGate(q, 1.2036703833711133, 1);
  sqcRZGate(q, -1.2769585260243383, 1);
  sqcRYGate(q, 1.820895865684811, 2);
  sqcRZGate(q, 1.9505008847337386, 2);
  sqcRYGate(q, 1.9655590209733487, 3);
  sqcRZGate(q, 1.806167243192668, 3);
  sqcRYGate(q, 2.049490340626549, 4);
  sqcRZGate(q, -0.44629243245973, 4);
  sqcRYGate(q, 3.1404589436023924, 5);
  sqcRZGate(q, -1.7711211849510633, 5);
  sqcRYGate(q, 1.8378060800438334, 6);
  sqcRZGate(q, 1.4499448534472548, 6);
  sqcRYGate(q, 0.021930956398297674, 7);
  sqcRZGate(q, 0.47039270072750466, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.6837013911212907, 0);
  sqcRZGate(q, -2.341394899483985, 0);
  sqcRYGate(q, -1.931592773512496, 1);
  sqcRZGate(q, 0.7827573573323414, 1);
  sqcRYGate(q, -0.04043107765910377, 2);
  sqcRZGate(q, -0.8584493775252975, 2);
  sqcRYGate(q, 0.9758772516499645, 3);
  sqcRZGate(q, 0.9451262527504535, 3);
  sqcRYGate(q, 7.488819291801008e-05, 4);
  sqcRZGate(q, 2.5458860492936326, 4);
  sqcRYGate(q, -0.0012803465672908132, 5);
  sqcRZGate(q, 1.7243328534758042, 5);
  sqcRYGate(q, 0.06409011368204405, 6);
  sqcRZGate(q, -2.0386693297846055, 6);
  sqcRYGate(q, -3.1310511355551283, 7);
  sqcRZGate(q, -1.321453375590239, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.794016384271095, 0);
  sqcRZGate(q, 1.920497334675486, 0);
  sqcRYGate(q, 0.9853643628759743, 1);
  sqcRZGate(q, 0.273553764566623, 1);
  sqcRYGate(q, 2.155672775841842, 2);
  sqcRZGate(q, 2.777494959516045, 2);
  sqcRYGate(q, -1.978312477197079, 3);
  sqcRZGate(q, 0.22478353349940805, 3);
  sqcRYGate(q, 0.04743401251067127, 4);
  sqcRZGate(q, 2.6355956520692216, 4);
  sqcRYGate(q, -0.015385548062459387, 5);
  sqcRZGate(q, 1.6692198219641365, 5);
  sqcRYGate(q, 0.25192035111716926, 6);
  sqcRZGate(q, -0.9977113380479999, 6);
  sqcRYGate(q, -1.5723769900131277, 7);
  sqcRZGate(q, -3.1231907527612255, 7);

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
