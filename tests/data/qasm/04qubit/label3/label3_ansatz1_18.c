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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 2.379387252878611, 0);
  sqcRZGate(q, 1.3498974588086439, 0);
  sqcRYGate(q, -2.98910862195009, 1);
  sqcRZGate(q, 1.4155391434411388, 1);
  sqcRYGate(q, -0.9312413922405425, 2);
  sqcRZGate(q, 2.5704716299747488, 2);
  sqcRYGate(q, -1.9881833874349164, 3);
  sqcRZGate(q, 1.8342191229854448, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2782094002008018, 0);
  sqcRZGate(q, -2.262655408519012, 0);
  sqcRYGate(q, 2.8010268723654552, 1);
  sqcRZGate(q, 0.32899761172399167, 1);
  sqcRYGate(q, 2.8150747432139958, 2);
  sqcRZGate(q, -2.951524194229217, 2);
  sqcRYGate(q, 1.5938287756987066, 3);
  sqcRZGate(q, -1.9922444008117086, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0990862277738305, 0);
  sqcRZGate(q, -1.360197102706688, 0);
  sqcRYGate(q, 2.692663909176744, 1);
  sqcRZGate(q, -2.37615129061, 1);
  sqcRYGate(q, -1.3446226216153179, 2);
  sqcRZGate(q, -0.10742720605336675, 2);
  sqcRYGate(q, -1.1532115311723532, 3);
  sqcRZGate(q, -3.1017384774373733, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.255180812277307, 0);
  sqcRZGate(q, 0.2271603172067591, 0);
  sqcRYGate(q, -1.8662989546360649, 1);
  sqcRZGate(q, -1.3105488686904558, 1);
  sqcRYGate(q, 2.8981521194146826, 2);
  sqcRZGate(q, 1.5627884959385812, 2);
  sqcRYGate(q, 2.073643298270159, 3);
  sqcRZGate(q, -0.5411898955825675, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8487362164561665, 0);
  sqcRZGate(q, -0.9490897200382626, 0);
  sqcRYGate(q, -3.1086794148114065, 1);
  sqcRZGate(q, -1.8630725482664359, 1);
  sqcRYGate(q, 1.3552931918847058, 2);
  sqcRZGate(q, 2.976223450869727, 2);
  sqcRYGate(q, 2.2626625030828253, 3);
  sqcRZGate(q, -2.6787927677262484, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4232388400914573, 0);
  sqcRZGate(q, 1.263440826725252, 0);
  sqcRYGate(q, -1.6122042304396382, 1);
  sqcRZGate(q, 0.09898775645118878, 1);
  sqcRYGate(q, -2.796751963958105, 2);
  sqcRZGate(q, 1.1086230771063805, 2);
  sqcRYGate(q, 1.4095423938636324, 3);
  sqcRZGate(q, -1.5357347261386445, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6366338754794576, 0);
  sqcRZGate(q, 0.01278876278020801, 0);
  sqcRYGate(q, -1.0573597733098865, 1);
  sqcRZGate(q, -0.09686874410503776, 1);
  sqcRYGate(q, 1.0022251706794565, 2);
  sqcRZGate(q, -2.509410458961137, 2);
  sqcRYGate(q, 0.27008144385236843, 3);
  sqcRZGate(q, 1.2293655088523465, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.294483526400271, 0);
  sqcRZGate(q, 1.4315079903858172, 0);
  sqcRYGate(q, -0.3193818718020076, 1);
  sqcRZGate(q, -1.7480342957743165, 1);
  sqcRYGate(q, 0.7827887436583385, 2);
  sqcRZGate(q, -0.7010679285430933, 2);
  sqcRYGate(q, 0.8047951078142059, 3);
  sqcRZGate(q, 2.1315911873344584, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2397235675189746, 0);
  sqcRZGate(q, 0.8003833267563616, 0);
  sqcRYGate(q, 0.13481063525375703, 1);
  sqcRZGate(q, -0.30220042906439776, 1);
  sqcRYGate(q, 0.5216637399281734, 2);
  sqcRZGate(q, -1.5714371701018308, 2);
  sqcRYGate(q, -3.0989299492118336, 3);
  sqcRZGate(q, -1.6773363264951051, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6470701375680514, 0);
  sqcRZGate(q, 1.6175771624775086, 0);
  sqcRYGate(q, -0.04107275149211845, 1);
  sqcRZGate(q, -1.3383540769772007, 1);
  sqcRYGate(q, -2.3998131369132083, 2);
  sqcRZGate(q, -1.0300401980197558, 2);
  sqcRYGate(q, -1.8999763597932837, 3);
  sqcRZGate(q, 1.3527974326992485, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.1138007509030325, 0);
  sqcRZGate(q, 2.704884007377385, 0);
  sqcRYGate(q, -1.9761285531445196, 1);
  sqcRZGate(q, 3.0028713341347997, 1);
  sqcRYGate(q, -1.0524509298995433, 2);
  sqcRZGate(q, -2.5382120532058416, 2);
  sqcRYGate(q, 1.3262983027692972, 3);
  sqcRZGate(q, 1.0181749880512188, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3811467454304331, 0);
  sqcRZGate(q, 1.070922353477178, 0);
  sqcRYGate(q, -2.387016813644736, 1);
  sqcRZGate(q, -1.713223483994649, 1);
  sqcRYGate(q, 1.7533796481688946, 2);
  sqcRZGate(q, 2.884120075220774, 2);
  sqcRYGate(q, -1.7149505416748558, 3);
  sqcRZGate(q, -2.075839348013231, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5271059721646922, 0);
  sqcRZGate(q, -1.4320350028717934, 0);
  sqcRYGate(q, 2.3729009891715, 1);
  sqcRZGate(q, -2.865096883554119, 1);
  sqcRYGate(q, -1.155141197135082, 2);
  sqcRZGate(q, -0.6289036930789689, 2);
  sqcRYGate(q, -1.2373519620536753, 3);
  sqcRZGate(q, -3.0087618677261445, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4256837752501355, 0);
  sqcRZGate(q, 1.8955784411733285, 0);
  sqcRYGate(q, 0.1982757813247824, 1);
  sqcRZGate(q, -0.08159483997627523, 1);
  sqcRYGate(q, 2.714083189443862, 2);
  sqcRZGate(q, -1.66149489709753, 2);
  sqcRYGate(q, -0.4555096104601013, 3);
  sqcRZGate(q, 2.0453829353686688, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7457212032462146, 0);
  sqcRZGate(q, -1.6613144372272313, 0);
  sqcRYGate(q, 0.33862462757265455, 1);
  sqcRZGate(q, -3.029515604573035, 1);
  sqcRYGate(q, -1.4072106090986498, 2);
  sqcRZGate(q, -0.13241873013316077, 2);
  sqcRYGate(q, -0.36227651144934636, 3);
  sqcRZGate(q, 1.4703675032756813, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2930186826648429, 0);
  sqcRZGate(q, -1.2455760073709259, 0);
  sqcRYGate(q, -0.8879385500256862, 1);
  sqcRZGate(q, -0.9656439013449629, 1);
  sqcRYGate(q, 1.7502542744954823, 2);
  sqcRZGate(q, 1.4673426948072037, 2);
  sqcRYGate(q, -0.06159843350205563, 3);
  sqcRZGate(q, 2.410369222865553, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.27352758709663316, 0);
  sqcRZGate(q, -2.9831483632177425, 0);
  sqcRYGate(q, 0.3462562943095808, 1);
  sqcRZGate(q, 0.36353607967789703, 1);
  sqcRYGate(q, 2.3018102195482646, 2);
  sqcRZGate(q, -0.8851002430108696, 2);
  sqcRYGate(q, -0.060760439100354446, 3);
  sqcRZGate(q, 0.2326692617795452, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5176154231510086, 0);
  sqcRZGate(q, 0.21540968212788303, 0);
  sqcRYGate(q, 0.12230635530447992, 1);
  sqcRZGate(q, -2.931003155159568, 1);
  sqcRYGate(q, -0.10908810894841928, 2);
  sqcRZGate(q, 1.2244592323227081, 2);
  sqcRYGate(q, 0.973900996211956, 3);
  sqcRZGate(q, 2.806658849729854, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0865165012627918, 0);
  sqcRZGate(q, -2.98298333869674, 0);
  sqcRYGate(q, -0.04811533328353513, 1);
  sqcRZGate(q, -1.2344166000883776, 1);
  sqcRYGate(q, -0.298403402128403, 2);
  sqcRZGate(q, 1.598161274861216, 2);
  sqcRYGate(q, -0.9810265503879629, 3);
  sqcRZGate(q, 2.314716053305399, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5688922490592039, 0);
  sqcRZGate(q, -0.3382388892939302, 0);
  sqcRYGate(q, -2.4440262670810746, 1);
  sqcRZGate(q, 2.582193512746219, 1);
  sqcRYGate(q, 2.2393652031760976, 2);
  sqcRZGate(q, 2.9699162572279585, 2);
  sqcRYGate(q, -0.03982466911698422, 3);
  sqcRZGate(q, -1.0958646377547794, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5382775579183943, 0);
  sqcRZGate(q, -0.42579720454177483, 0);
  sqcRYGate(q, -2.4282793069039625, 1);
  sqcRZGate(q, 2.94078960712586, 1);
  sqcRYGate(q, 2.4584074017424595, 2);
  sqcRZGate(q, 2.1247658731041326, 2);
  sqcRYGate(q, -0.5301765218069034, 3);
  sqcRZGate(q, -0.5979909202807527, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8023531477949906, 0);
  sqcRZGate(q, 1.8156486094378952, 0);
  sqcRYGate(q, 2.6178960411991805, 1);
  sqcRZGate(q, -2.1298411958353256, 1);
  sqcRYGate(q, 1.0888966852545456, 2);
  sqcRZGate(q, 2.9042783121346503, 2);
  sqcRYGate(q, 1.6696630237334278, 3);
  sqcRZGate(q, 2.9120632032641716, 3);

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
