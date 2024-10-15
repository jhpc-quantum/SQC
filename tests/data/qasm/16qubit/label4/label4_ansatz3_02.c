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

  sqcRYGate(q, 1.5709241416755235, 0);
  sqcRZGate(q, -1.1662954818867863, 0);
  sqcRYGate(q, 1.5709947001746811, 1);
  sqcRZGate(q, -0.4603035480096986, 1);
  sqcRYGate(q, -3.1413742235954354, 2);
  sqcRZGate(q, -1.3349731543694494, 2);
  sqcRYGate(q, -0.03586544467157365, 3);
  sqcRZGate(q, -1.487178211944234, 3);
  sqcRYGate(q, -1.5710467828580492, 4);
  sqcRZGate(q, -0.5182467621085473, 4);
  sqcRYGate(q, 1.5713131786235177, 5);
  sqcRZGate(q, 1.4210673763529973, 5);
  sqcRYGate(q, 1.5707773346731249, 6);
  sqcRZGate(q, 3.135746946704028, 6);
  sqcRYGate(q, 7.488066199812238e-05, 7);
  sqcRZGate(q, 2.630792378965359, 7);
  sqcRYGate(q, 1.5713768778887778, 8);
  sqcRZGate(q, -3.090072188847368, 8);
  sqcRYGate(q, 0.18462445402571692, 9);
  sqcRZGate(q, -3.1411435576973754, 9);
  sqcRYGate(q, -1.5761859055022753, 10);
  sqcRZGate(q, 1.28567370354658, 10);
  sqcRYGate(q, 3.1412555750565265, 11);
  sqcRZGate(q, -2.8991763019059884, 11);
  sqcRYGate(q, -8.335568102184179e-05, 12);
  sqcRZGate(q, 0.9693143598478349, 12);
  sqcRYGate(q, -0.09356567031858726, 13);
  sqcRZGate(q, -2.030176514109273, 13);
  sqcRYGate(q, -3.118186408358412, 14);
  sqcRZGate(q, 2.8415373705240925, 14);
  sqcRYGate(q, -0.6501229135537248, 15);
  sqcRZGate(q, 2.8349842732283146, 15);
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
  sqcRYGate(q, 0.7172220232963717, 0);
  sqcRZGate(q, 1.201253043368663, 0);
  sqcRYGate(q, 0.26926213125255405, 1);
  sqcRZGate(q, -1.478212968766296, 1);
  sqcRYGate(q, 1.5713856551481364, 2);
  sqcRZGate(q, 1.2364042780164435, 2);
  sqcRYGate(q, -1.5711609125210053, 3);
  sqcRZGate(q, -2.4551092177163305, 3);
  sqcRYGate(q, -3.1407662761412354, 4);
  sqcRZGate(q, -1.5543270350231742, 4);
  sqcRYGate(q, 2.100919074716723, 5);
  sqcRZGate(q, 2.8654097509956222, 5);
  sqcRYGate(q, -0.10715850692098247, 6);
  sqcRZGate(q, 1.5810078352885224, 6);
  sqcRYGate(q, 2.3490657628529164, 7);
  sqcRZGate(q, 3.1415422414732865, 7);
  sqcRYGate(q, -1.570891022446414, 8);
  sqcRZGate(q, -3.1263051635836847, 8);
  sqcRYGate(q, -1.570717378146604, 9);
  sqcRZGate(q, -0.8916060735588058, 9);
  sqcRYGate(q, 3.0875609445467997, 10);
  sqcRZGate(q, 1.2861388360975434, 10);
  sqcRYGate(q, 0.0016546711017433324, 11);
  sqcRZGate(q, -0.36315000750477366, 11);
  sqcRYGate(q, -6.424440060918102e-05, 12);
  sqcRZGate(q, 2.3689669286521466, 12);
  sqcRYGate(q, -1.2543682067070066, 13);
  sqcRZGate(q, -0.3021128325904554, 13);
  sqcRYGate(q, 1.5522820177057535, 14);
  sqcRZGate(q, -2.352464098925564, 14);
  sqcRYGate(q, -1.45783327125849, 15);
  sqcRZGate(q, 0.10227294084675088, 15);
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
  sqcRYGate(q, 1.5703368696235245, 0);
  sqcRZGate(q, 2.615625811147409, 0);
  sqcRYGate(q, -0.33323888705619936, 1);
  sqcRZGate(q, 0.9991663499471295, 1);
  sqcRYGate(q, -1.5669533505543578, 2);
  sqcRZGate(q, -2.394407011592578, 2);
  sqcRYGate(q, 3.1117644679865863, 3);
  sqcRZGate(q, -1.7335390146431637, 3);
  sqcRYGate(q, 2.3636985084527016, 4);
  sqcRZGate(q, -1.5629408773393985, 4);
  sqcRYGate(q, -3.1102969818688107, 5);
  sqcRZGate(q, -1.3347321389324593, 5);
  sqcRYGate(q, -0.7983435298050301, 6);
  sqcRZGate(q, -1.5930302133349246, 6);
  sqcRYGate(q, 0.3054894679290502, 7);
  sqcRZGate(q, -3.1415489462524677, 7);
  sqcRYGate(q, -0.14242911054519475, 8);
  sqcRZGate(q, -0.01594607942692219, 8);
  sqcRYGate(q, 7.233006932505505e-05, 9);
  sqcRZGate(q, -2.249765198191733, 9);
  sqcRYGate(q, -1.570309898584301, 10);
  sqcRZGate(q, 1.111980245564273, 10);
  sqcRYGate(q, 2.710835223974289, 11);
  sqcRZGate(q, 1.5706050736729393, 11);
  sqcRYGate(q, -3.1415136117847857, 12);
  sqcRZGate(q, 2.4873542196914324, 12);
  sqcRYGate(q, -0.5759277461688578, 13);
  sqcRZGate(q, 0.24769092866456166, 13);
  sqcRYGate(q, 3.1143199313337298, 14);
  sqcRZGate(q, -2.3469799864901693, 14);
  sqcRYGate(q, 1.5924151362907786, 15);
  sqcRZGate(q, -1.398888260026987, 15);
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
  sqcRYGate(q, -0.0037045625422253863, 0);
  sqcRZGate(q, 0.3664188876050928, 0);
  sqcRYGate(q, -1.5711765617681763, 1);
  sqcRZGate(q, -3.139388609868821, 1);
  sqcRYGate(q, 4.3418553048013564e-05, 2);
  sqcRZGate(q, 2.3949426504957914, 2);
  sqcRYGate(q, -6.750527002601375e-05, 3);
  sqcRZGate(q, 1.4311528702013163, 3);
  sqcRYGate(q, -0.6510212169281822, 4);
  sqcRZGate(q, -1.581741831294573, 4);
  sqcRYGate(q, 0.05301821775650692, 5);
  sqcRZGate(q, 0.9557868123976043, 5);
  sqcRYGate(q, -0.18403223516975273, 6);
  sqcRZGate(q, 2.640376422017411, 6);
  sqcRYGate(q, -0.935319591834615, 7);
  sqcRZGate(q, -1.127780437733242, 7);
  sqcRYGate(q, 1.5669233338148407, 8);
  sqcRZGate(q, -1.5522947052587477, 8);
  sqcRYGate(q, 1.5705708753757346, 9);
  sqcRZGate(q, 0.0010909702125880827, 9);
  sqcRYGate(q, 1.5726155572491434, 10);
  sqcRZGate(q, -1.3465747271541515, 10);
  sqcRYGate(q, 0.4506875288264549, 11);
  sqcRZGate(q, 0.890994325060473, 11);
  sqcRYGate(q, -1.5711192695992693, 12);
  sqcRZGate(q, -1.2625125141970712, 12);
  sqcRYGate(q, -1.568436632927613, 13);
  sqcRZGate(q, -1.7299238137449642, 13);
  sqcRYGate(q, 1.1260547828040994, 14);
  sqcRZGate(q, -2.8261916300381453, 14);
  sqcRYGate(q, -1.307412778871043, 15);
  sqcRZGate(q, -2.1544438835524073, 15);
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
  sqcRYGate(q, 0.002269453205880012, 0);
  sqcRZGate(q, -1.5023043640928646, 0);
  sqcRYGate(q, 2.3020131748988666, 1);
  sqcRZGate(q, -3.1369912558583852, 1);
  sqcRYGate(q, 1.5681044007053522, 2);
  sqcRZGate(q, 3.111251222531534, 2);
  sqcRYGate(q, 1.4961731783295846, 3);
  sqcRZGate(q, 3.1305605897205364, 3);
  sqcRYGate(q, -0.6521088058246791, 4);
  sqcRZGate(q, -1.3288257828928007, 4);
  sqcRYGate(q, -0.010283130036321532, 5);
  sqcRZGate(q, 0.5082631092006887, 5);
  sqcRYGate(q, -3.140244593654059, 6);
  sqcRZGate(q, -0.5060281858756772, 6);
  sqcRYGate(q, -3.141479844145635, 7);
  sqcRZGate(q, 2.013081249382326, 7);
  sqcRYGate(q, 1.5700184315501833, 8);
  sqcRZGate(q, -1.2736240496407154, 8);
  sqcRYGate(q, 1.570869459236725, 9);
  sqcRZGate(q, 3.00000966891277, 9);
  sqcRYGate(q, 0.0031681403186407664, 10);
  sqcRZGate(q, -0.22138549751901235, 10);
  sqcRYGate(q, 3.141411521327484, 11);
  sqcRZGate(q, -2.2492441158077248, 11);
  sqcRYGate(q, -3.12918386357012, 12);
  sqcRZGate(q, 1.6082456664050737, 12);
  sqcRYGate(q, 2.5074127042009096, 13);
  sqcRZGate(q, -0.01590057488972706, 13);
  sqcRYGate(q, 1.5713375012691273, 14);
  sqcRZGate(q, 0.00037231612711341455, 14);
  sqcRYGate(q, -1.5691541899701162, 15);
  sqcRZGate(q, -1.8060955485939882, 15);
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
  sqcRYGate(q, -0.0008311401072216285, 0);
  sqcRZGate(q, 2.85531514687351, 0);
  sqcRYGate(q, -1.7345762340325295, 1);
  sqcRZGate(q, 0.060850911265067247, 1);
  sqcRYGate(q, 3.141527062629108, 2);
  sqcRZGate(q, 2.4106184339518992, 2);
  sqcRYGate(q, -3.141130587777002, 3);
  sqcRZGate(q, 1.627519746197468, 3);
  sqcRYGate(q, -3.1385275645774025, 4);
  sqcRZGate(q, 2.668411897694754, 4);
  sqcRYGate(q, -0.041537657514274795, 5);
  sqcRZGate(q, -0.23095429779229343, 5);
  sqcRYGate(q, 1.5707929463762005, 6);
  sqcRZGate(q, 0.8622671020071139, 6);
  sqcRYGate(q, 1.5707207319367802, 7);
  sqcRZGate(q, -3.125138620466712, 7);
  sqcRYGate(q, 0.0005492376947344724, 8);
  sqcRZGate(q, 2.1347141092867465, 8);
  sqcRYGate(q, 3.07717049010721, 9);
  sqcRZGate(q, -0.1255138164812939, 9);
  sqcRYGate(q, 1.5699109177663804, 10);
  sqcRZGate(q, 0.8716124648039024, 10);
  sqcRYGate(q, 1.5704469370734417, 11);
  sqcRZGate(q, -3.1247615120935373, 11);
  sqcRYGate(q, 3.141276444106464, 12);
  sqcRZGate(q, 2.1707455454752123, 12);
  sqcRYGate(q, -3.121868952933625, 13);
  sqcRZGate(q, 0.0015415492356680718, 13);
  sqcRYGate(q, -1.57214394017615, 14);
  sqcRZGate(q, 2.4424949420769355, 14);
  sqcRYGate(q, 0.0005053604265219391, 15);
  sqcRZGate(q, 1.6639817111410409, 15);

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
