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

  sqcRYGate(q, -1.2720572792288616, 0);
  sqcRYGate(q, 3.0018748896811576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2832721687998445, 0);
  sqcRYGate(q, -3.062912775892564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1277060317195797, 1);
  sqcRYGate(q, -0.11976239320739969, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.942414265179785, 1);
  sqcRYGate(q, 0.3776399472618053, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2175262239675624, 2);
  sqcRYGate(q, -2.9310545846374247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8788139686805216, 2);
  sqcRYGate(q, -2.4158293071992705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1855237602882625, 0);
  sqcRYGate(q, -1.9897588290729802, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3987214640696504, 0);
  sqcRYGate(q, 1.7054688570126102, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9294272201687876, 1);
  sqcRYGate(q, 1.483500570544651, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.546813806928434, 1);
  sqcRYGate(q, -2.416480574051259, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.950941874034896, 2);
  sqcRYGate(q, -1.1551628027094676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7045861831839343, 2);
  sqcRYGate(q, -3.0511281945252176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09014393385693138, 0);
  sqcRYGate(q, 0.6842801160476705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3351077488494396, 0);
  sqcRYGate(q, -1.7775228149812488, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.16410463627213812, 1);
  sqcRYGate(q, -0.4460325841001822, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4368925129779764, 1);
  sqcRYGate(q, 0.9007525764874564, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.418904160036775, 2);
  sqcRYGate(q, -2.7517326213950586, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.944530717110257, 2);
  sqcRYGate(q, 2.388378725547191, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0645122926779287, 0);
  sqcRYGate(q, 2.4787241142523104, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8801779937917676, 0);
  sqcRYGate(q, -0.8613179595487703, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.12638170124528098, 1);
  sqcRYGate(q, 1.9289004321954089, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.939726418818204, 1);
  sqcRYGate(q, 1.7079628095261163, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.361726730083626, 2);
  sqcRYGate(q, -3.0824723942124197, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.924980261840677, 2);
  sqcRYGate(q, -2.735543905115323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8024026742372983, 0);
  sqcRYGate(q, 0.8302482444951629, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.281005666687444, 0);
  sqcRYGate(q, 0.5206411952226297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7903777761630355, 1);
  sqcRYGate(q, -1.2326845736508076, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9579482298221444, 1);
  sqcRYGate(q, 2.131523975765613, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1588518133009824, 2);
  sqcRYGate(q, -1.016019432897194, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0017341796873733273, 2);
  sqcRYGate(q, 0.26534520254915456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.676839506592726, 0);
  sqcRYGate(q, -2.477814341442331, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2068913443845357, 0);
  sqcRYGate(q, -2.733406501066887, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.083046841563703, 1);
  sqcRYGate(q, -3.0335631551447584, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1307596740923018, 1);
  sqcRYGate(q, 2.2488750552128955, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1178640774488744, 2);
  sqcRYGate(q, -1.6773935756092353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0725071668600963, 2);
  sqcRYGate(q, -1.1073313899505777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.523022523121453, 0);
  sqcRYGate(q, 1.7092272336662655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4253744840248324, 0);
  sqcRYGate(q, -1.9347795043726181, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.037477830318534, 1);
  sqcRYGate(q, -2.2650095439609648, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7208135550298134, 1);
  sqcRYGate(q, -2.6678056602518336, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5047694574335693, 2);
  sqcRYGate(q, 1.2975593278276119, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.49602231664776575, 2);
  sqcRYGate(q, -0.8264180603324983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.171931596045156, 0);
  sqcRYGate(q, 1.8678939148320042, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7135820146111973, 0);
  sqcRYGate(q, -0.9035940731322647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.16546946495324555, 1);
  sqcRYGate(q, -0.5757273729843027, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.800017274239115, 1);
  sqcRYGate(q, -2.8151784526877246, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9761128869092457, 2);
  sqcRYGate(q, -1.2715856842278463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.708999981472389, 2);
  sqcRYGate(q, 1.5574808501007684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.802564982283764, 0);
  sqcRYGate(q, -1.2688781485748677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.009876133968007572, 0);
  sqcRYGate(q, -0.8824329558602932, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2009167921092603, 1);
  sqcRYGate(q, -2.262006746918207, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.023229602023534746, 1);
  sqcRYGate(q, -0.6599295427519061, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0345375130793828, 2);
  sqcRYGate(q, -1.5881950439150858, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.879774463208349, 2);
  sqcRYGate(q, 1.484859125410427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0248881790852695, 0);
  sqcRYGate(q, -2.2261680264816275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.765358521324664, 0);
  sqcRYGate(q, 2.4158060620451356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.890088263920375, 1);
  sqcRYGate(q, 1.5254850914911187, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.582059210457083, 1);
  sqcRYGate(q, 1.1146158741810899, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.41294355354474865, 2);
  sqcRYGate(q, -0.14195928021401724, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1147908820418, 2);
  sqcRYGate(q, 2.2608713860067016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4246262697128502, 0);
  sqcRYGate(q, -0.16752960341923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.03963394076702865, 0);
  sqcRYGate(q, 2.046096202541838, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7105089506245528, 1);
  sqcRYGate(q, 0.7117271796534709, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5847914794603946, 1);
  sqcRYGate(q, 0.17679683755835818, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5075308367761677, 2);
  sqcRYGate(q, 1.7801948135908277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.058924466758882, 2);
  sqcRYGate(q, -0.14077269120144828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.997750850125414, 0);
  sqcRYGate(q, 0.3697332810908023, 1);
  sqcRYGate(q, -0.031653158454894914, 2);
  sqcRYGate(q, -0.9371511297437207, 3);

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
