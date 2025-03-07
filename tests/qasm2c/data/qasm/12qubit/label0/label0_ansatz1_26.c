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

  sqcRYGate(q, -1.2683166401674288, 0);
  sqcRZGate(q, -0.9151232958072176, 0);
  sqcRYGate(q, 0.6705100155725896, 1);
  sqcRZGate(q, 1.5606241001993684, 1);
  sqcRYGate(q, 0.0009833001870891422, 2);
  sqcRZGate(q, 2.7185722791266533, 2);
  sqcRYGate(q, -1.2016634639943833, 3);
  sqcRZGate(q, 2.1828283996390723, 3);
  sqcRYGate(q, 2.9973815672510185, 4);
  sqcRZGate(q, -2.380009530198091, 4);
  sqcRYGate(q, -0.050054469346852606, 5);
  sqcRZGate(q, -0.6662860872227503, 5);
  sqcRYGate(q, 2.871516962437316, 6);
  sqcRZGate(q, -1.5270273817649218, 6);
  sqcRYGate(q, -0.16013723938003646, 7);
  sqcRZGate(q, 0.43393817463666084, 7);
  sqcRYGate(q, 1.6013732353684587, 8);
  sqcRZGate(q, 0.05534582805930732, 8);
  sqcRYGate(q, 3.141054755143096, 9);
  sqcRZGate(q, 0.29449644306273814, 9);
  sqcRYGate(q, 1.3086094645170316, 10);
  sqcRZGate(q, 0.17623337887393697, 10);
  sqcRYGate(q, 2.0668757631140307, 11);
  sqcRZGate(q, 1.7184869810198407, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.0327742936825417, 0);
  sqcRZGate(q, -1.8235438529109296, 0);
  sqcRYGate(q, -0.8223322852662744, 1);
  sqcRZGate(q, -1.9246406952882003, 1);
  sqcRYGate(q, -3.1409131011957983, 2);
  sqcRZGate(q, -0.20028536178170503, 2);
  sqcRYGate(q, 2.58688018820388, 3);
  sqcRZGate(q, -2.5679349413952526, 3);
  sqcRYGate(q, 0.33583964617075956, 4);
  sqcRZGate(q, -0.8543457522642336, 4);
  sqcRYGate(q, -1.3194383625042043, 5);
  sqcRZGate(q, 2.0458389482438495, 5);
  sqcRYGate(q, 3.1093238354802524, 6);
  sqcRZGate(q, -2.0733387041310127, 6);
  sqcRYGate(q, -0.548174299495491, 7);
  sqcRZGate(q, 0.9768342496055827, 7);
  sqcRYGate(q, 1.5732037569324548, 8);
  sqcRZGate(q, 0.6684236956522014, 8);
  sqcRYGate(q, 3.134450201935323, 9);
  sqcRZGate(q, 0.7009602009128901, 9);
  sqcRYGate(q, 1.9755831689814665, 10);
  sqcRZGate(q, -3.134455141254516, 10);
  sqcRYGate(q, -0.2026989960566734, 11);
  sqcRZGate(q, 1.454186411744014, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.116600686428301, 0);
  sqcRZGate(q, 1.3071072028767574, 0);
  sqcRYGate(q, 0.5202249274256708, 1);
  sqcRZGate(q, -2.175292944548571, 1);
  sqcRYGate(q, 3.141096470853684, 2);
  sqcRZGate(q, 0.7173814637810372, 2);
  sqcRYGate(q, -1.527881992919644, 3);
  sqcRZGate(q, 1.5430104493556982, 3);
  sqcRYGate(q, 0.008213921071128396, 4);
  sqcRZGate(q, 1.9308484030153574, 4);
  sqcRYGate(q, -0.13247150484223, 5);
  sqcRZGate(q, 2.451899325507154, 5);
  sqcRYGate(q, 1.2300489867028972, 6);
  sqcRZGate(q, -1.1832114457489478, 6);
  sqcRYGate(q, 1.4279697880352904, 7);
  sqcRZGate(q, 0.36776596805484635, 7);
  sqcRYGate(q, -0.510967162411795, 8);
  sqcRZGate(q, 2.432488392315494, 8);
  sqcRYGate(q, 2.764798902773708, 9);
  sqcRZGate(q, -0.8861174439657011, 9);
  sqcRYGate(q, -2.892446706111619, 10);
  sqcRZGate(q, 2.2071143549316607, 10);
  sqcRYGate(q, -1.3090367779001397, 11);
  sqcRZGate(q, -0.8596984712290299, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.09108731352562371, 0);
  sqcRZGate(q, 3.1338946585431744, 0);
  sqcRYGate(q, 2.219974203789233, 1);
  sqcRZGate(q, -1.130679224284819, 1);
  sqcRYGate(q, -0.0033736295073609444, 2);
  sqcRZGate(q, 1.8113127728328866, 2);
  sqcRYGate(q, 1.6368304582355986, 3);
  sqcRZGate(q, 0.4835584504430648, 3);
  sqcRYGate(q, 0.26004720038048923, 4);
  sqcRZGate(q, -2.9738070652872937, 4);
  sqcRYGate(q, 1.5979221754316972, 5);
  sqcRZGate(q, -3.0672118205902597, 5);
  sqcRYGate(q, 2.887802998506474, 6);
  sqcRZGate(q, 0.6612925840921201, 6);
  sqcRYGate(q, -0.04682545574167207, 7);
  sqcRZGate(q, 1.3970630864148266, 7);
  sqcRYGate(q, -0.0022639431263069554, 8);
  sqcRZGate(q, 0.7739097720072863, 8);
  sqcRYGate(q, 3.1415039765789814, 9);
  sqcRZGate(q, 2.4876723643523535, 9);
  sqcRYGate(q, -2.8485127716799212, 10);
  sqcRZGate(q, -2.046246202109697, 10);
  sqcRYGate(q, -2.010136361500739, 11);
  sqcRZGate(q, -2.987014028326201, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.613507888888536, 0);
  sqcRZGate(q, -2.6396691214934065, 0);
  sqcRYGate(q, 2.6985793570967775, 1);
  sqcRZGate(q, 3.0517185482062623, 1);
  sqcRYGate(q, -0.0039672282648686155, 2);
  sqcRZGate(q, 0.3884517116823137, 2);
  sqcRYGate(q, 0.6348190901911446, 3);
  sqcRZGate(q, -0.5696932650365074, 3);
  sqcRYGate(q, 2.3904604877503193, 4);
  sqcRZGate(q, 0.12033105903133061, 4);
  sqcRYGate(q, -2.4352480503861536, 5);
  sqcRZGate(q, 2.547693487139256, 5);
  sqcRYGate(q, 1.9761206531343145, 6);
  sqcRZGate(q, 2.471629596866425, 6);
  sqcRYGate(q, 2.315695681834588, 7);
  sqcRZGate(q, -1.2697856899709623, 7);
  sqcRYGate(q, 0.6279877898312378, 8);
  sqcRZGate(q, -0.813563439634258, 8);
  sqcRYGate(q, -2.8841871480974293, 9);
  sqcRZGate(q, -1.9234861018940188, 9);
  sqcRYGate(q, -2.6147496810347044, 10);
  sqcRZGate(q, -2.2821001606291964, 10);
  sqcRYGate(q, -0.9521259281169095, 11);
  sqcRZGate(q, 1.9567132559034668, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.61856457882585, 0);
  sqcRZGate(q, 2.3782014594761125, 0);
  sqcRYGate(q, 2.8428734458173173, 1);
  sqcRZGate(q, 1.0178718085057374, 1);
  sqcRYGate(q, 0.002006945625876932, 2);
  sqcRZGate(q, 0.8246603849776983, 2);
  sqcRYGate(q, 0.4810196622197518, 3);
  sqcRZGate(q, 2.9366737086500203, 3);
  sqcRYGate(q, -0.006823654592146226, 4);
  sqcRZGate(q, 0.1069583830059484, 4);
  sqcRYGate(q, 0.003297086924137993, 5);
  sqcRZGate(q, -0.47348777970709277, 5);
  sqcRYGate(q, -0.028143035227651957, 6);
  sqcRZGate(q, -3.1346712987254817, 6);
  sqcRYGate(q, -1.9477575736043653, 7);
  sqcRZGate(q, -0.44864605410652564, 7);
  sqcRYGate(q, 3.1309774742432688, 8);
  sqcRZGate(q, 2.417128461775841, 8);
  sqcRYGate(q, -3.1366000292568454, 9);
  sqcRZGate(q, 0.06915969713276748, 9);
  sqcRYGate(q, -0.7040480757545575, 10);
  sqcRZGate(q, 0.9803867599626344, 10);
  sqcRYGate(q, 3.038398287566247, 11);
  sqcRZGate(q, 2.575538860882111, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.3077127077083723, 0);
  sqcRZGate(q, 1.041047372292712, 0);
  sqcRYGate(q, -0.8904552937295936, 1);
  sqcRZGate(q, 0.43485468360523183, 1);
  sqcRYGate(q, 3.139267679482131, 2);
  sqcRZGate(q, 1.6184810464350887, 2);
  sqcRYGate(q, 0.3348264826226872, 3);
  sqcRZGate(q, -0.3749742257616324, 3);
  sqcRYGate(q, 1.8563589572161465, 4);
  sqcRZGate(q, -2.845917351151373, 4);
  sqcRYGate(q, 1.6212390685444633, 5);
  sqcRZGate(q, 2.0069717742910598, 5);
  sqcRYGate(q, 2.9431984899140065, 6);
  sqcRZGate(q, -2.1652046488623053, 6);
  sqcRYGate(q, -2.85188497302493, 7);
  sqcRZGate(q, 0.6757938448698164, 7);
  sqcRYGate(q, -0.09311746539151533, 8);
  sqcRZGate(q, 0.9944000614826528, 8);
  sqcRYGate(q, 3.0662555630424024, 9);
  sqcRZGate(q, 2.578447898402266, 9);
  sqcRYGate(q, -1.7799593307402493, 10);
  sqcRZGate(q, -1.6070244357607022, 10);
  sqcRYGate(q, 2.0007886558277685, 11);
  sqcRZGate(q, 1.651744516338749, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.08086549211888538, 0);
  sqcRZGate(q, 0.47607108016769306, 0);
  sqcRYGate(q, 0.604589334489085, 1);
  sqcRZGate(q, 3.0951738847850008, 1);
  sqcRYGate(q, 3.1389552893178334, 2);
  sqcRZGate(q, -0.238455917691728, 2);
  sqcRYGate(q, 3.1407173049249946, 3);
  sqcRZGate(q, -1.0373219882006115, 3);
  sqcRYGate(q, 2.9110260626635265, 4);
  sqcRZGate(q, 0.35375084699818427, 4);
  sqcRYGate(q, -2.9941648739596265, 5);
  sqcRZGate(q, 1.7082420188735794, 5);
  sqcRYGate(q, 1.062143181921507, 6);
  sqcRZGate(q, 1.330010693930257, 6);
  sqcRYGate(q, 0.8940700741842047, 7);
  sqcRZGate(q, -1.2556916135556282, 7);
  sqcRYGate(q, 0.0051264824468604895, 8);
  sqcRZGate(q, -1.3003766601724465, 8);
  sqcRYGate(q, 0.0014954641835924548, 9);
  sqcRZGate(q, 1.7237223884641366, 9);
  sqcRYGate(q, 0.6759598054112059, 10);
  sqcRZGate(q, 1.6512195863466443, 10);
  sqcRYGate(q, -1.8491703691508308, 11);
  sqcRZGate(q, 0.5594481468540913, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5901379721750077, 0);
  sqcRZGate(q, 0.3395899550248868, 0);
  sqcRYGate(q, 0.4612302270785511, 1);
  sqcRZGate(q, -2.282585960778114, 1);
  sqcRYGate(q, 0.004712428812044145, 2);
  sqcRZGate(q, 1.3145722014489634, 2);
  sqcRYGate(q, 0.6358234235168115, 3);
  sqcRZGate(q, -2.6289229134095713, 3);
  sqcRYGate(q, 1.9615556475419755, 4);
  sqcRZGate(q, 0.2937846734296983, 4);
  sqcRYGate(q, 0.03186724328393975, 5);
  sqcRZGate(q, 0.682830224697236, 5);
  sqcRYGate(q, 3.1257064941153967, 6);
  sqcRZGate(q, 1.266093655680505, 6);
  sqcRYGate(q, 0.0647579104714966, 7);
  sqcRZGate(q, 0.8885030908242415, 7);
  sqcRYGate(q, -2.261509751598888, 8);
  sqcRZGate(q, 1.3013213600289442, 8);
  sqcRYGate(q, 3.004913584446183, 9);
  sqcRZGate(q, 2.328910819073361, 9);
  sqcRYGate(q, 0.21990165137234907, 10);
  sqcRZGate(q, -2.7618719729982977, 10);
  sqcRYGate(q, -2.8691318592220503, 11);
  sqcRZGate(q, 2.808361226972474, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.3002109172113583, 0);
  sqcRZGate(q, -0.25349170084298694, 0);
  sqcRYGate(q, 2.9128117075203948, 1);
  sqcRZGate(q, 0.03757461441975085, 1);
  sqcRYGate(q, -0.12802956158396483, 2);
  sqcRZGate(q, -2.1936642637910957, 2);
  sqcRYGate(q, -2.6055773794058807, 3);
  sqcRZGate(q, 2.038437671264689, 3);
  sqcRYGate(q, -1.1290011739515722, 4);
  sqcRZGate(q, -2.867373106212781, 4);
  sqcRYGate(q, -2.2035802026982525, 5);
  sqcRZGate(q, 0.028430949052607714, 5);
  sqcRYGate(q, 2.0428980750578205, 6);
  sqcRZGate(q, 0.05930551298979207, 6);
  sqcRYGate(q, 0.14201319930982276, 7);
  sqcRZGate(q, 2.7523158920694133, 7);
  sqcRYGate(q, 0.007699738467401327, 8);
  sqcRZGate(q, 1.8348457964974085, 8);
  sqcRYGate(q, -0.0026378596954925726, 9);
  sqcRZGate(q, -2.4364054399036785, 9);
  sqcRYGate(q, -0.5104183296304488, 10);
  sqcRZGate(q, -1.7047651711864014, 10);
  sqcRYGate(q, -2.307300279299224, 11);
  sqcRZGate(q, -1.1234829427137845, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5587241179303986, 0);
  sqcRZGate(q, 0.4486966696442357, 0);
  sqcRYGate(q, -2.9742273449369465, 1);
  sqcRZGate(q, -0.5979467425778303, 1);
  sqcRYGate(q, -3.1382319112661055, 2);
  sqcRZGate(q, 0.2786004497831542, 2);
  sqcRYGate(q, -0.17745711086219984, 3);
  sqcRZGate(q, -3.136390942821431, 3);
  sqcRYGate(q, -0.4744358944151902, 4);
  sqcRZGate(q, -2.9858595928053098, 4);
  sqcRYGate(q, -0.8595748318880485, 5);
  sqcRZGate(q, 0.2476368764091044, 5);
  sqcRYGate(q, 0.11779420862039716, 6);
  sqcRZGate(q, -1.5058107490104307, 6);
  sqcRYGate(q, -1.1195867526710002, 7);
  sqcRZGate(q, -0.941592149286649, 7);
  sqcRYGate(q, 0.4200465604563171, 8);
  sqcRZGate(q, 2.5555176553048318, 8);
  sqcRYGate(q, -0.010515084841655309, 9);
  sqcRZGate(q, -1.338563578065424, 9);
  sqcRYGate(q, -3.053884551539888, 10);
  sqcRZGate(q, 2.0810420986301437, 10);
  sqcRYGate(q, 1.966888027322173, 11);
  sqcRZGate(q, 0.6949445841644772, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.801568245601515, 0);
  sqcRZGate(q, 2.1737675581501756, 0);
  sqcRYGate(q, -0.1944039926232536, 1);
  sqcRZGate(q, 0.8031742617444283, 1);
  sqcRYGate(q, 2.407717092741467, 2);
  sqcRZGate(q, -0.3883593524487594, 2);
  sqcRYGate(q, 3.071929610783635, 3);
  sqcRZGate(q, -0.5137314082559712, 3);
  sqcRYGate(q, -0.3445989770321285, 4);
  sqcRZGate(q, -1.8106616364760524, 4);
  sqcRYGate(q, 0.13313050270862625, 5);
  sqcRZGate(q, -0.5465419469291982, 5);
  sqcRYGate(q, -3.125488335490925, 6);
  sqcRZGate(q, -1.470020254912308, 6);
  sqcRYGate(q, -2.9465896156199647, 7);
  sqcRZGate(q, -0.781417949494675, 7);
  sqcRYGate(q, 3.136818339498744, 8);
  sqcRZGate(q, -1.7905503020175224, 8);
  sqcRYGate(q, -2.563075246962986, 9);
  sqcRZGate(q, -1.1102797739166164, 9);
  sqcRYGate(q, -1.0146896244351327, 10);
  sqcRZGate(q, 2.8620394595823897, 10);
  sqcRYGate(q, -2.4330314035639735, 11);
  sqcRZGate(q, -1.7218520086476996, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.029358794440255256, 0);
  sqcRZGate(q, 1.9580937039808655, 0);
  sqcRYGate(q, -3.0814007423850196, 1);
  sqcRZGate(q, 0.08325819339275907, 1);
  sqcRYGate(q, -0.00044162553499127455, 2);
  sqcRZGate(q, -1.1987492183297737, 2);
  sqcRYGate(q, -0.04719470671150164, 3);
  sqcRZGate(q, -2.1251483177744754, 3);
  sqcRYGate(q, 2.4122719988343753, 4);
  sqcRZGate(q, 0.1096848756516966, 4);
  sqcRYGate(q, 1.4824547102500043, 5);
  sqcRZGate(q, 2.416517210682374, 5);
  sqcRYGate(q, 0.09763056117994928, 6);
  sqcRZGate(q, 1.4939207113202464, 6);
  sqcRYGate(q, -1.0562286178389952, 7);
  sqcRZGate(q, -1.6735568624582138, 7);
  sqcRYGate(q, -0.0032673657883286467, 8);
  sqcRZGate(q, 1.2949322756123616, 8);
  sqcRYGate(q, -0.012927084134199518, 9);
  sqcRZGate(q, 1.0348954807177089, 9);
  sqcRYGate(q, -1.100882657829538, 10);
  sqcRZGate(q, 1.5113719657539542, 10);
  sqcRYGate(q, 2.156530718988398, 11);
  sqcRZGate(q, -0.9198269064467821, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.908322805465577, 0);
  sqcRZGate(q, 0.6434276509004815, 0);
  sqcRYGate(q, 0.44937359371139163, 1);
  sqcRZGate(q, 0.34284761021719845, 1);
  sqcRYGate(q, 0.337797686249904, 2);
  sqcRZGate(q, -0.969904845700463, 2);
  sqcRYGate(q, -0.0966211372964413, 3);
  sqcRZGate(q, -2.9966893370174237, 3);
  sqcRYGate(q, -3.0973127989553655, 4);
  sqcRZGate(q, -2.200731577421273, 4);
  sqcRYGate(q, 0.2646718541367664, 5);
  sqcRZGate(q, 0.3245193586512434, 5);
  sqcRYGate(q, -2.7047421082548273, 6);
  sqcRZGate(q, 1.8652975381040307, 6);
  sqcRYGate(q, -2.1719643780280196, 7);
  sqcRZGate(q, 0.22966415821279706, 7);
  sqcRYGate(q, 3.1254190211560893, 8);
  sqcRZGate(q, 3.082230936105662, 8);
  sqcRYGate(q, 1.34242157412708, 9);
  sqcRZGate(q, -0.8308655046359059, 9);
  sqcRYGate(q, 1.7971000490030078, 10);
  sqcRZGate(q, -2.6810062513737374, 10);
  sqcRYGate(q, 0.425815274450974, 11);
  sqcRZGate(q, -0.5413594641206825, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.840471284777183, 0);
  sqcRZGate(q, 1.9324744120832973, 0);
  sqcRYGate(q, 0.13723993784543076, 1);
  sqcRZGate(q, -1.6936889103030217, 1);
  sqcRYGate(q, 3.1402009190240183, 2);
  sqcRZGate(q, 0.9713660135764091, 2);
  sqcRYGate(q, -0.06892879144661133, 3);
  sqcRZGate(q, 1.117175028752522, 3);
  sqcRYGate(q, 2.688931154521242, 4);
  sqcRZGate(q, -0.7204496937566534, 4);
  sqcRYGate(q, 3.1000580514960343, 5);
  sqcRZGate(q, 2.690700619744418, 5);
  sqcRYGate(q, -0.00922412770024156, 6);
  sqcRZGate(q, 2.101318342171425, 6);
  sqcRYGate(q, -0.3060749950356485, 7);
  sqcRZGate(q, -1.7469573698187562, 7);
  sqcRYGate(q, 1.5999075153061961, 8);
  sqcRZGate(q, 0.001354995477336196, 8);
  sqcRYGate(q, 0.0059512444574325585, 9);
  sqcRZGate(q, -2.7444188714707236, 9);
  sqcRYGate(q, -3.1181411583513157, 10);
  sqcRZGate(q, -2.077749969860651, 10);
  sqcRYGate(q, -2.652495651786152, 11);
  sqcRZGate(q, 2.313836246558206, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5465591414088795, 0);
  sqcRZGate(q, 2.284880486994832, 0);
  sqcRYGate(q, 0.2596815321599468, 1);
  sqcRZGate(q, -0.9346398713223554, 1);
  sqcRYGate(q, 3.0050815585099704, 2);
  sqcRZGate(q, 2.8924909756614223, 2);
  sqcRYGate(q, 0.0706154973138039, 3);
  sqcRZGate(q, -2.5728602192054257, 3);
  sqcRYGate(q, 0.02646942304019999, 4);
  sqcRZGate(q, 0.5065615675267034, 4);
  sqcRYGate(q, -0.9732626194092234, 5);
  sqcRZGate(q, 1.7233587754377053, 5);
  sqcRYGate(q, 2.5820637341935098, 6);
  sqcRZGate(q, -1.0588512067680869, 6);
  sqcRYGate(q, 0.006427819443867833, 7);
  sqcRZGate(q, -0.24613756552250263, 7);
  sqcRYGate(q, 2.6137850461088785, 8);
  sqcRZGate(q, 0.004014893667720898, 8);
  sqcRYGate(q, -0.004078601081088099, 9);
  sqcRZGate(q, -2.9194260987567557, 9);
  sqcRYGate(q, -2.073582344611286, 10);
  sqcRZGate(q, -2.229832107036522, 10);
  sqcRYGate(q, -2.5038423974197523, 11);
  sqcRZGate(q, 0.7533696809660224, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.162362178375198, 0);
  sqcRZGate(q, 0.6163071642671227, 0);
  sqcRYGate(q, 3.0539098511278686, 1);
  sqcRZGate(q, -2.870372020578163, 1);
  sqcRYGate(q, 0.0028533572444109367, 2);
  sqcRZGate(q, 1.1458328521468149, 2);
  sqcRYGate(q, -3.1084869958078785, 3);
  sqcRZGate(q, -0.05588862933466654, 3);
  sqcRYGate(q, -1.3888442185956038, 4);
  sqcRZGate(q, 2.466621468717941, 4);
  sqcRYGate(q, -0.041305671507896394, 5);
  sqcRZGate(q, -2.033022577991948, 5);
  sqcRYGate(q, -0.2228328543506377, 6);
  sqcRZGate(q, 2.702590169265494, 6);
  sqcRYGate(q, 3.0798223799619584, 7);
  sqcRZGate(q, 3.1391418285341826, 7);
  sqcRYGate(q, -1.6325050781491974, 8);
  sqcRZGate(q, 2.8455543750678602, 8);
  sqcRYGate(q, -0.007686088338836812, 9);
  sqcRZGate(q, 0.012025613536322298, 9);
  sqcRYGate(q, 1.155776817342276, 10);
  sqcRZGate(q, 0.23061070532772995, 10);
  sqcRYGate(q, -1.162254946723106, 11);
  sqcRZGate(q, -1.607020881849374, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.7560552772144638, 0);
  sqcRZGate(q, 2.1439358803647, 0);
  sqcRYGate(q, -1.200829586474562, 1);
  sqcRZGate(q, 1.0812246705621107, 1);
  sqcRYGate(q, -0.4075654337405532, 2);
  sqcRZGate(q, -2.897972745824833, 2);
  sqcRYGate(q, 2.6692425767266705, 3);
  sqcRZGate(q, 0.7269815184542475, 3);
  sqcRYGate(q, -0.06360949136124106, 4);
  sqcRZGate(q, -0.18089360875279942, 4);
  sqcRYGate(q, 0.20473928384601603, 5);
  sqcRZGate(q, 2.4588484907437143, 5);
  sqcRYGate(q, -3.062386165320308, 6);
  sqcRZGate(q, -1.0515663212521025, 6);
  sqcRYGate(q, -0.7294350898753287, 7);
  sqcRZGate(q, -1.0647053268284985, 7);
  sqcRYGate(q, 2.0677614077735007, 8);
  sqcRZGate(q, 0.9514853418304945, 8);
  sqcRYGate(q, 0.8084309827769679, 9);
  sqcRZGate(q, -0.6250103302040335, 9);
  sqcRYGate(q, 0.2528063575411892, 10);
  sqcRZGate(q, 2.112510482144408, 10);
  sqcRYGate(q, -2.92540592952574, 11);
  sqcRZGate(q, 0.818211902747433, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.8157495129410957, 0);
  sqcRZGate(q, -2.1023411872741615, 0);
  sqcRYGate(q, 0.16575866325881175, 1);
  sqcRZGate(q, -0.6458456116104827, 1);
  sqcRYGate(q, 0.0022087698570395203, 2);
  sqcRZGate(q, -0.6556389282915915, 2);
  sqcRYGate(q, 3.011963761198072, 3);
  sqcRZGate(q, 2.9050702970699875, 3);
  sqcRYGate(q, -0.27363162497758076, 4);
  sqcRZGate(q, -1.3234633598098249, 4);
  sqcRYGate(q, 3.043060655979126, 5);
  sqcRZGate(q, -2.487536995568292, 5);
  sqcRYGate(q, 2.927250531409884, 6);
  sqcRZGate(q, -2.277937271532913, 6);
  sqcRYGate(q, 0.03730915337365115, 7);
  sqcRZGate(q, 0.6286307181621514, 7);
  sqcRYGate(q, 3.1411451745152448, 8);
  sqcRZGate(q, -0.23266598750055767, 8);
  sqcRYGate(q, 3.1359827344815074, 9);
  sqcRZGate(q, -0.9296606332877586, 9);
  sqcRYGate(q, -1.4195451054617947, 10);
  sqcRZGate(q, -2.0632593123071534, 10);
  sqcRYGate(q, 1.4968650291010628, 11);
  sqcRZGate(q, -2.7504656909218106, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.958351422892175, 0);
  sqcRZGate(q, -2.3434309536663753, 0);
  sqcRYGate(q, 0.5177891770859734, 1);
  sqcRZGate(q, -0.3349379735672837, 1);
  sqcRYGate(q, -2.957437832918466, 2);
  sqcRZGate(q, -1.473164010798599, 2);
  sqcRYGate(q, -1.271491998491394, 3);
  sqcRZGate(q, 2.822633316027169, 3);
  sqcRYGate(q, -0.03000004329422886, 4);
  sqcRZGate(q, -2.1801597871656497, 4);
  sqcRYGate(q, 0.019837297178552513, 5);
  sqcRZGate(q, 3.0321385906909923, 5);
  sqcRYGate(q, -0.9861308877759101, 6);
  sqcRZGate(q, -0.23912430704217602, 6);
  sqcRYGate(q, -2.801506904087659, 7);
  sqcRZGate(q, 3.0543494958872732, 7);
  sqcRYGate(q, -0.08158485978010255, 8);
  sqcRZGate(q, -0.9865387855667134, 8);
  sqcRYGate(q, -3.0761171526781785, 9);
  sqcRZGate(q, -2.9870991734887995, 9);
  sqcRYGate(q, -1.7033778356536768, 10);
  sqcRZGate(q, 2.451696685975986, 10);
  sqcRYGate(q, -2.901482009754041, 11);
  sqcRZGate(q, 0.3189198263960145, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.8161616695198313, 0);
  sqcRZGate(q, -1.4964818021892672, 0);
  sqcRYGate(q, 1.675663202920061, 1);
  sqcRZGate(q, 2.7418168841420534, 1);
  sqcRYGate(q, 1.4306448615414196, 2);
  sqcRZGate(q, -1.1466441256362827, 2);
  sqcRYGate(q, -0.679705264223642, 3);
  sqcRZGate(q, 2.8945989588924093, 3);
  sqcRYGate(q, -2.373594440891521, 4);
  sqcRZGate(q, -2.0947726817855004, 4);
  sqcRYGate(q, 0.022683625015696613, 5);
  sqcRZGate(q, -2.3336730863546657, 5);
  sqcRYGate(q, -2.6511847140038105, 6);
  sqcRZGate(q, 0.0877817207034335, 6);
  sqcRYGate(q, -3.0254835516748813, 7);
  sqcRZGate(q, 0.32087366554135555, 7);
  sqcRYGate(q, 0.0023317839176231203, 8);
  sqcRZGate(q, 0.1677824346648204, 8);
  sqcRYGate(q, -2.9087555598556714, 9);
  sqcRZGate(q, 2.0131138719034896, 9);
  sqcRYGate(q, -0.3790194812960266, 10);
  sqcRZGate(q, -1.5246241004146517, 10);
  sqcRYGate(q, 1.2253497843687975, 11);
  sqcRZGate(q, 2.091202615355927, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.7566702350620647, 0);
  sqcRZGate(q, -0.9150978382842343, 0);
  sqcRYGate(q, -3.1024773977312137, 1);
  sqcRZGate(q, -0.32909524851527294, 1);
  sqcRYGate(q, -3.132035174534066, 2);
  sqcRZGate(q, -0.1228580479440947, 2);
  sqcRYGate(q, -3.140526178836583, 3);
  sqcRZGate(q, 2.0735695393087163, 3);
  sqcRYGate(q, 3.14066222168641, 4);
  sqcRZGate(q, -2.5086496183321185, 4);
  sqcRYGate(q, -3.1383398597462793, 5);
  sqcRZGate(q, -1.2105514598714215, 5);
  sqcRYGate(q, 2.3521646501340507, 6);
  sqcRZGate(q, 3.114023891462712, 6);
  sqcRYGate(q, 0.23418695390220726, 7);
  sqcRZGate(q, 2.895027724765993, 7);
  sqcRYGate(q, -0.003988948700888452, 8);
  sqcRZGate(q, 1.406276757169401, 8);
  sqcRYGate(q, -0.1608547129494502, 9);
  sqcRZGate(q, 0.9972774468163734, 9);
  sqcRYGate(q, 0.4296301158199211, 10);
  sqcRZGate(q, 2.841158517045159, 10);
  sqcRYGate(q, -0.13290748880516287, 11);
  sqcRZGate(q, -2.936349675875031, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.518342214866344, 0);
  sqcRZGate(q, 2.33458413389089, 0);
  sqcRYGate(q, 2.8275751935735913, 1);
  sqcRZGate(q, 0.8377654497025498, 1);
  sqcRYGate(q, -1.1409179415134467, 2);
  sqcRZGate(q, -2.884211714553426, 2);
  sqcRYGate(q, 2.3373821799748566, 3);
  sqcRZGate(q, 2.3659338825739646, 3);
  sqcRYGate(q, -0.914607465860088, 4);
  sqcRZGate(q, -0.19608343737398748, 4);
  sqcRYGate(q, 1.5034978034062014, 5);
  sqcRZGate(q, 0.1392425467857805, 5);
  sqcRYGate(q, -0.4525221070835014, 6);
  sqcRZGate(q, 0.2113574432997769, 6);
  sqcRYGate(q, 2.851007415826141, 7);
  sqcRZGate(q, -0.9721904234147063, 7);
  sqcRYGate(q, -0.0010669758740213808, 8);
  sqcRZGate(q, -0.27234202398147644, 8);
  sqcRYGate(q, -1.348027189037714, 9);
  sqcRZGate(q, -1.1895397313531042, 9);
  sqcRYGate(q, 1.339827444148563, 10);
  sqcRZGate(q, -2.9382097949936927, 10);
  sqcRYGate(q, 2.9313091880094664, 11);
  sqcRZGate(q, -1.1636100206567521, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.6235619411040163, 0);
  sqcRZGate(q, -2.8541648526477013, 0);
  sqcRYGate(q, 2.2254708819193834, 1);
  sqcRZGate(q, -2.3540787315688587, 1);
  sqcRYGate(q, 0.00373721182833264, 2);
  sqcRZGate(q, 0.1147373101826108, 2);
  sqcRYGate(q, -0.0007323704387962593, 3);
  sqcRZGate(q, -2.901860646495976, 3);
  sqcRYGate(q, -3.140795809204543, 4);
  sqcRZGate(q, 1.1127851977694456, 4);
  sqcRYGate(q, 3.0185253669922876, 5);
  sqcRZGate(q, 0.13718336503708198, 5);
  sqcRYGate(q, -0.8783767892141364, 6);
  sqcRZGate(q, 2.9805403990949277, 6);
  sqcRYGate(q, -2.1088757761261716, 7);
  sqcRZGate(q, 0.3452113931726019, 7);
  sqcRYGate(q, -0.3077580793838099, 8);
  sqcRZGate(q, -0.4265977073954837, 8);
  sqcRYGate(q, -2.9355206301163266, 9);
  sqcRZGate(q, 2.121279246196086, 9);
  sqcRYGate(q, 2.2019329681976845, 10);
  sqcRZGate(q, -0.8902618679885732, 10);
  sqcRYGate(q, -0.6831169649998796, 11);
  sqcRZGate(q, -1.4781692384238132, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.28736545350640785, 0);
  sqcRZGate(q, 1.0844879492092185, 0);
  sqcRYGate(q, -1.4347464083244208, 1);
  sqcRZGate(q, -0.35454195587505294, 1);
  sqcRYGate(q, 1.3815089547967503, 2);
  sqcRZGate(q, 1.4721193826592611, 2);
  sqcRYGate(q, -1.259017971659656, 3);
  sqcRZGate(q, 0.026688461674034724, 3);
  sqcRYGate(q, 2.572401790536417, 4);
  sqcRZGate(q, 0.17496266827817844, 4);
  sqcRYGate(q, 2.6708797750196984, 5);
  sqcRZGate(q, 0.6191847067376237, 5);
  sqcRYGate(q, 0.055835765805517794, 6);
  sqcRZGate(q, -3.1030315287107446, 6);
  sqcRYGate(q, 3.1182502183445964, 7);
  sqcRZGate(q, -0.822390736129651, 7);
  sqcRYGate(q, 0.0017434457008660101, 8);
  sqcRZGate(q, 0.7875439183186188, 8);
  sqcRYGate(q, 3.140930716778427, 9);
  sqcRZGate(q, 2.5512542159839406, 9);
  sqcRYGate(q, -2.219256799231596, 10);
  sqcRZGate(q, -2.177191316970361, 10);
  sqcRYGate(q, -2.8766940253654307, 11);
  sqcRZGate(q, 0.4808144196162212, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.671116390526042, 0);
  sqcRZGate(q, -0.6166384064877599, 0);
  sqcRYGate(q, 2.2542392488940655, 1);
  sqcRZGate(q, -1.6293097875205762, 1);
  sqcRYGate(q, -0.6391084275836967, 2);
  sqcRZGate(q, -1.0176986347964605, 2);
  sqcRYGate(q, -0.04202877740242261, 3);
  sqcRZGate(q, 3.046601637113298, 3);
  sqcRYGate(q, 2.9419058319443856, 4);
  sqcRZGate(q, 2.761682292186589, 4);
  sqcRYGate(q, 0.5153033578753291, 5);
  sqcRZGate(q, -3.046161565198589, 5);
  sqcRYGate(q, -2.4906871991329727, 6);
  sqcRZGate(q, 2.4681835640457437, 6);
  sqcRYGate(q, 2.040989824060284, 7);
  sqcRZGate(q, -1.7376905095334578, 7);
  sqcRYGate(q, -2.736434974122343, 8);
  sqcRZGate(q, -1.4520570657453924, 8);
  sqcRYGate(q, 0.5768023932578339, 9);
  sqcRZGate(q, -2.494301750361559, 9);
  sqcRYGate(q, 0.3496786646222345, 10);
  sqcRZGate(q, 2.3183232752797704, 10);
  sqcRYGate(q, -1.712815289760302, 11);
  sqcRZGate(q, -2.792636784781796, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.9055318580994274, 0);
  sqcRZGate(q, 0.8026077869363331, 0);
  sqcRYGate(q, 0.4728320430283465, 1);
  sqcRZGate(q, -1.4497892245743, 1);
  sqcRYGate(q, 3.0211272731290193, 2);
  sqcRZGate(q, -1.3809445234201947, 2);
  sqcRYGate(q, 0.0017828922314639976, 3);
  sqcRZGate(q, 0.8759996749984476, 3);
  sqcRYGate(q, -3.1391334065791203, 4);
  sqcRZGate(q, -2.051671251700494, 4);
  sqcRYGate(q, -0.01522444923456412, 5);
  sqcRZGate(q, -2.218899702459992, 5);
  sqcRYGate(q, -0.08308306723014702, 6);
  sqcRZGate(q, 2.436931008369784, 6);
  sqcRYGate(q, -2.8904258173464923, 7);
  sqcRZGate(q, 2.9493634969934717, 7);
  sqcRYGate(q, -0.002544087080749158, 8);
  sqcRZGate(q, -1.1265634949945136, 8);
  sqcRYGate(q, 3.125600420428116, 9);
  sqcRZGate(q, -2.9787998789020205, 9);
  sqcRYGate(q, 3.030989875211575, 10);
  sqcRZGate(q, 1.127345042705836, 10);
  sqcRYGate(q, -3.0892066109915124, 11);
  sqcRZGate(q, -0.7592174872215736, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.0838206366205307, 0);
  sqcRZGate(q, -3.0482082790175, 0);
  sqcRYGate(q, 2.3873244871087764, 1);
  sqcRZGate(q, 1.1225973924468624, 1);
  sqcRYGate(q, 1.5459601745111666, 2);
  sqcRZGate(q, 2.5994574351157165, 2);
  sqcRYGate(q, -0.025209978354842847, 3);
  sqcRZGate(q, -1.1187088325910661, 3);
  sqcRYGate(q, -3.0638477167523357, 4);
  sqcRZGate(q, -0.4565949152523823, 4);
  sqcRYGate(q, -0.24942924668221075, 5);
  sqcRZGate(q, -0.3146137965700309, 5);
  sqcRYGate(q, 1.6988727258522047, 6);
  sqcRZGate(q, -2.9732669806624683, 6);
  sqcRYGate(q, 2.8409242003583253, 7);
  sqcRZGate(q, 1.9282395903634573, 7);
  sqcRYGate(q, -0.020650852845793304, 8);
  sqcRZGate(q, 1.95783112791917, 8);
  sqcRYGate(q, -2.3894234194589528, 9);
  sqcRZGate(q, 1.6630246596181542, 9);
  sqcRYGate(q, 0.7058703588750603, 10);
  sqcRZGate(q, -2.535846387114053, 10);
  sqcRYGate(q, -0.43402019031373246, 11);
  sqcRZGate(q, 2.102710441680064, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.2185963320036981, 0);
  sqcRZGate(q, -0.3282690292364512, 0);
  sqcRYGate(q, -2.949185642712236, 1);
  sqcRZGate(q, 3.1265223366623833, 1);
  sqcRYGate(q, 1.7414207412978546, 2);
  sqcRZGate(q, -1.8065048582231187, 2);
  sqcRYGate(q, 3.116425752951835, 3);
  sqcRZGate(q, -0.3432801225550186, 3);
  sqcRYGate(q, 0.002994148252907999, 4);
  sqcRZGate(q, -0.7910828754750472, 4);
  sqcRYGate(q, 0.0283198250945631, 5);
  sqcRZGate(q, -0.3173182961631813, 5);
  sqcRYGate(q, -3.0035604763238513, 6);
  sqcRZGate(q, -0.6314124374180934, 6);
  sqcRYGate(q, -0.07601803684444164, 7);
  sqcRZGate(q, -2.2547709747124527, 7);
  sqcRYGate(q, -0.00156856681688416, 8);
  sqcRZGate(q, 0.008641430043365065, 8);
  sqcRYGate(q, -3.114362833492203, 9);
  sqcRZGate(q, 1.2016831441775142, 9);
  sqcRYGate(q, -0.3430456714485812, 10);
  sqcRZGate(q, -2.7859378795979604, 10);
  sqcRYGate(q, -2.8969006672485995, 11);
  sqcRZGate(q, -1.189327459678155, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.137868108093997, 0);
  sqcRZGate(q, -0.5275160316153745, 0);
  sqcRYGate(q, -2.2754759527934736, 1);
  sqcRZGate(q, 0.4106907419750021, 1);
  sqcRYGate(q, 2.9739243995526965, 2);
  sqcRZGate(q, 0.4131918044420168, 2);
  sqcRYGate(q, 0.44216105272515066, 3);
  sqcRZGate(q, -0.050839520628917605, 3);
  sqcRYGate(q, -2.7765998746106284, 4);
  sqcRZGate(q, -0.3020231597850979, 4);
  sqcRYGate(q, -3.0016301505708345, 5);
  sqcRZGate(q, -0.3205192031039582, 5);
  sqcRYGate(q, 0.20732309897018036, 6);
  sqcRZGate(q, 0.6695492871751964, 6);
  sqcRYGate(q, 1.6472540740636, 7);
  sqcRZGate(q, -3.014330290545086, 7);
  sqcRYGate(q, 0.05915070573189318, 8);
  sqcRZGate(q, 1.6277176973949983, 8);
  sqcRYGate(q, -0.40058509464053, 9);
  sqcRZGate(q, 1.0703601717787379, 9);
  sqcRYGate(q, -1.9978341110706443, 10);
  sqcRZGate(q, 2.48594889826108, 10);
  sqcRYGate(q, -0.31673013762634367, 11);
  sqcRZGate(q, 1.8851166044491814, 11);

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
