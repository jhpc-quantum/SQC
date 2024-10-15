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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.8920186772065164, 0);
  sqcRYGate(q, 1.306590704904596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.821726194776215, 0);
  sqcRYGate(q, 2.9154697130674205, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1219278255576546, 1);
  sqcRYGate(q, 2.373416279263323, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1084976463800553, 1);
  sqcRYGate(q, 1.7843144596003901, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2186860091496925, 2);
  sqcRYGate(q, 1.5713060694305894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4776131125575787, 2);
  sqcRYGate(q, -3.138162436171833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5476007495421775, 3);
  sqcRYGate(q, -2.6764961434083383, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.129793379356368, 3);
  sqcRYGate(q, -0.2961113032845165, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5045006367379612, 4);
  sqcRYGate(q, -1.368151814900461, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.536952913334301, 4);
  sqcRYGate(q, 2.8766297318623573, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6508936765733548, 5);
  sqcRYGate(q, -2.371910799723418, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2703809303752307, 5);
  sqcRYGate(q, 2.405123757784949, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2242626758093751, 6);
  sqcRYGate(q, 0.5550662132380441, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4067785386140894, 6);
  sqcRYGate(q, 0.5567336665109623, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0574855441112994, 0);
  sqcRYGate(q, 1.8830794966559543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8719115740372599, 0);
  sqcRYGate(q, 2.885156375145845, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.909222531428543, 1);
  sqcRYGate(q, -1.7598216231617023, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.11879002841154217, 1);
  sqcRYGate(q, 1.3645264942719137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4941519198331052, 2);
  sqcRYGate(q, 0.4828929370085122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5852331905149457, 2);
  sqcRYGate(q, 0.7168207343995263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1903359962897515, 3);
  sqcRYGate(q, 0.8180554904596861, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8542202907463166, 3);
  sqcRYGate(q, 0.0034070610023677617, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0694632406173703, 4);
  sqcRYGate(q, -2.8753376175389684, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7485359517651602, 4);
  sqcRYGate(q, -1.3652159762583433, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.47385695587610766, 5);
  sqcRYGate(q, 2.7565074380640326, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5128074622948122, 5);
  sqcRYGate(q, 0.04131110958134144, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8216878201244686, 6);
  sqcRYGate(q, -2.63449906493051, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.33832064730351785, 6);
  sqcRYGate(q, 2.896714495795686, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.850999070897498, 0);
  sqcRYGate(q, -1.8289748987823684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0322629622792734, 0);
  sqcRYGate(q, 1.035885674926567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6008094073624264, 1);
  sqcRYGate(q, 1.0207960178118523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7072814270466727, 1);
  sqcRYGate(q, 2.9698477489272666, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1345897179222195, 2);
  sqcRYGate(q, -2.6789813532485995, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1939770281961097, 2);
  sqcRYGate(q, 2.8862509165916452, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.24577082464616806, 3);
  sqcRYGate(q, 0.8766828582860073, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0201997341214106, 3);
  sqcRYGate(q, 0.06301526615842107, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.819912104585768, 4);
  sqcRYGate(q, 2.717672143477162, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7169092970562567, 4);
  sqcRYGate(q, -1.6926592500923672, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8136706816314812, 5);
  sqcRYGate(q, -2.1858450386258292, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6705843262213671, 5);
  sqcRYGate(q, -2.3280888095401897, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.17846558978799276, 6);
  sqcRYGate(q, -3.0607290406370216, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.501427796299141, 6);
  sqcRYGate(q, -2.59926067596464, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2987403120264398, 0);
  sqcRYGate(q, -2.3999061456668396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.556847236322672, 0);
  sqcRYGate(q, 2.664005241954264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6161483955231368, 1);
  sqcRYGate(q, 0.4472636814363424, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1355153296390776, 1);
  sqcRYGate(q, 1.5311372954984133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4446472991084942, 2);
  sqcRYGate(q, -2.2961124662566075, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0716462802023585, 2);
  sqcRYGate(q, -2.5898133408273982, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7182737964100699, 3);
  sqcRYGate(q, -2.4155466201045614, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0894999930729572, 3);
  sqcRYGate(q, 2.8297556658383436, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8518183652243145, 4);
  sqcRYGate(q, 2.5845531995133846, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1368463704299057, 4);
  sqcRYGate(q, 3.1332977655996506, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5473112969149234, 5);
  sqcRYGate(q, -2.2043693475530883, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.499285889200844, 5);
  sqcRYGate(q, -0.39556020418702253, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.876811249414928, 6);
  sqcRYGate(q, -1.3938293252768312, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8227136004655042, 6);
  sqcRYGate(q, 0.2068038068731175, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7942223138779438, 0);
  sqcRYGate(q, 2.741580533493252, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8226639165834335, 0);
  sqcRYGate(q, -2.6848168860863697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7660427294620595, 1);
  sqcRYGate(q, -1.5463435949351156, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0621229826303247, 1);
  sqcRYGate(q, -0.006807379724573792, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6301619893170098, 2);
  sqcRYGate(q, -0.4669668084558987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.012428867080837236, 2);
  sqcRYGate(q, -2.9978609106872125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6338304067955293, 3);
  sqcRYGate(q, -0.8533146994336541, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0594069448644485, 3);
  sqcRYGate(q, 0.28148446884644596, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.995230673004295, 4);
  sqcRYGate(q, -2.6327142012107556, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6213996291559294, 4);
  sqcRYGate(q, 3.0616995195764796, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.386447125975156, 5);
  sqcRYGate(q, -0.5499785001734924, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0019840085747074, 5);
  sqcRYGate(q, 2.766604376917883, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.1673334262333972, 6);
  sqcRYGate(q, 1.4710007658485715, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.977187833473528, 6);
  sqcRYGate(q, 0.01342122295514661, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.897655818237454, 0);
  sqcRYGate(q, -2.9191834942146273, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2489809626061517, 0);
  sqcRYGate(q, 2.5872646857497172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2684522085538625, 1);
  sqcRYGate(q, 0.7724251457959934, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0746537715101727, 1);
  sqcRYGate(q, -2.127764939670965, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.008968276441571, 2);
  sqcRYGate(q, -2.592268888539206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5664433492595129, 2);
  sqcRYGate(q, -0.21488563959189896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.324880250784382, 3);
  sqcRYGate(q, 0.7568493894009425, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1409047332782563, 3);
  sqcRYGate(q, -0.02616344774397472, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.29922383417473325, 4);
  sqcRYGate(q, -0.4911780808666313, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7200217624262715, 4);
  sqcRYGate(q, -3.0386368114535647, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7882805045366421, 5);
  sqcRYGate(q, 1.8036600231989146, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9755301844883952, 5);
  sqcRYGate(q, 0.28482673994417945, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5396630798045186, 6);
  sqcRYGate(q, -0.17355702479956658, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.17520593091361653, 6);
  sqcRYGate(q, 0.33452833798194803, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.22489870714052057, 0);
  sqcRYGate(q, 0.32892660258627693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.366095626886175, 0);
  sqcRYGate(q, 1.008723583459365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2234747324532367, 1);
  sqcRYGate(q, 2.6237965348437835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0050529023034776455, 1);
  sqcRYGate(q, -2.9532186922322783, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7280253988616905, 2);
  sqcRYGate(q, -0.23243845463477825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9962705113674442, 2);
  sqcRYGate(q, 0.0947092560595193, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.548170173485956, 3);
  sqcRYGate(q, 0.1697631590821592, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.008958481467116365, 3);
  sqcRYGate(q, -0.019647697981730057, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6676338123477521, 4);
  sqcRYGate(q, 3.0050264528901174, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5513910753700871, 4);
  sqcRYGate(q, 2.666252106027162, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4991644456048103, 5);
  sqcRYGate(q, 1.5210156666395815, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.39473851015937, 5);
  sqcRYGate(q, -3.1275251718794475, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3401009864557056, 6);
  sqcRYGate(q, -1.5135176229868206, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.521972646125735, 6);
  sqcRYGate(q, 2.792879331570453, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7898711550372948, 0);
  sqcRYGate(q, 1.4886234096751725, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4203232453503754, 0);
  sqcRYGate(q, 0.27314635768380485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5555596066033923, 1);
  sqcRYGate(q, 0.10756772990983521, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.139217886811872, 1);
  sqcRYGate(q, -3.0324247952475263, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5502578379076142, 2);
  sqcRYGate(q, -0.7851412091105137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9339469446097031, 2);
  sqcRYGate(q, -0.18399771484345304, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1782668091679636, 3);
  sqcRYGate(q, 2.899691553455334, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1303960884190762, 3);
  sqcRYGate(q, -0.002976604856073095, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1610476134167157, 4);
  sqcRYGate(q, 2.6577388778100492, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.613623304155879, 4);
  sqcRYGate(q, 2.786284260905307, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0337800425276193, 5);
  sqcRYGate(q, 3.0446424685609745, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3654780634814431, 5);
  sqcRYGate(q, -1.014882175309383, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6145358262597886, 6);
  sqcRYGate(q, 0.2896359574376124, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.61060340257451, 6);
  sqcRYGate(q, 2.4965446308448587, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4544676298922803, 0);
  sqcRYGate(q, 0.8460723809170458, 1);
  sqcRYGate(q, -2.596923005205212, 2);
  sqcRYGate(q, 2.835323388565963, 3);
  sqcRYGate(q, -1.6931615511907965, 4);
  sqcRYGate(q, -2.2188601497476843, 5);
  sqcRYGate(q, -1.2906684530773793, 6);
  sqcRYGate(q, -0.34977194084739227, 7);

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
