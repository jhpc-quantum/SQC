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

  sqcRYGate(q, 0.6562381155881951, 0);
  sqcRYGate(q, 1.1224486601357244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6825444364898072, 0);
  sqcRYGate(q, 0.6102088737725647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.25751500238536273, 1);
  sqcRYGate(q, 2.732749483576693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1303240360628228, 1);
  sqcRYGate(q, -1.483580345450095, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6080297721472094, 2);
  sqcRYGate(q, 0.9451870545057172, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9957556973798711, 2);
  sqcRYGate(q, -0.37881372082646664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.087853528705775, 3);
  sqcRYGate(q, -1.3771590308288921, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9503408721429123, 3);
  sqcRYGate(q, -1.9662673260115326, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6924931706422646, 4);
  sqcRYGate(q, -3.1185602875742164, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9359380064737806, 4);
  sqcRYGate(q, -2.2273853537755905, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6128007871669845, 5);
  sqcRYGate(q, -1.6123111978737334, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9822322492290905, 5);
  sqcRYGate(q, 3.138958896614241, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3775186111092008, 6);
  sqcRYGate(q, 0.6717526830380165, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.296178359248671, 6);
  sqcRYGate(q, 1.7129642482208027, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7407301603125731, 0);
  sqcRYGate(q, 3.110763760943865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.337960909091526, 0);
  sqcRYGate(q, 2.245163520066681, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.241662463585037, 1);
  sqcRYGate(q, -0.34088774092933966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.38073108384223353, 1);
  sqcRYGate(q, -0.27878229694773327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2584716507581197, 2);
  sqcRYGate(q, 2.318566997620307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.01793589477410958, 2);
  sqcRYGate(q, 3.0945134207711904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.142812252350708, 3);
  sqcRYGate(q, -0.5250140183145691, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.941763707263569, 3);
  sqcRYGate(q, -0.24587965946954082, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6247208824935133, 4);
  sqcRYGate(q, -1.1628571338448739, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.980192140856535, 4);
  sqcRYGate(q, -2.2790068303046906, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.08220994436455, 5);
  sqcRYGate(q, -0.6957172446117055, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.046100183927227256, 5);
  sqcRYGate(q, 3.1393597543036633, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5433734608569973, 6);
  sqcRYGate(q, -2.1796903307931315, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.972652957486721, 6);
  sqcRYGate(q, -1.7052173353966527, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4096106336099334, 0);
  sqcRYGate(q, 2.682892703039855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.44358958354264355, 0);
  sqcRYGate(q, 1.4967681748421182, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3192387474530856, 1);
  sqcRYGate(q, -0.9155346055107679, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8003647845499957, 1);
  sqcRYGate(q, 2.0016926431780293, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5778428675020852, 2);
  sqcRYGate(q, -0.7027245079007699, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1295007833043367, 2);
  sqcRYGate(q, 3.0476841640916046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9925275910641111, 3);
  sqcRYGate(q, -1.0650922658455815, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.18682339246694699, 3);
  sqcRYGate(q, -2.4475040637439283, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5224993658372509, 4);
  sqcRYGate(q, -1.068327404429212, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.910575876857924, 4);
  sqcRYGate(q, -3.1241977874187876, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7698104073255745, 5);
  sqcRYGate(q, -1.3848765725793581, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.06532059878577683, 5);
  sqcRYGate(q, 3.1331931448332058, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9063948870655274, 6);
  sqcRYGate(q, 0.7644433523047356, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8018295824607153, 6);
  sqcRYGate(q, 1.1610060406698661, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3449138941870567, 0);
  sqcRYGate(q, -0.505117143670298, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7838473704598675, 0);
  sqcRYGate(q, 1.0886324479353746, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.176062819546069, 1);
  sqcRYGate(q, 0.7559596076240537, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8666523971556432, 1);
  sqcRYGate(q, -2.758800702781165, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.546128791113667, 2);
  sqcRYGate(q, -1.2021767099162022, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.056354355446603784, 2);
  sqcRYGate(q, -0.10523155749875368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1030416628663078, 3);
  sqcRYGate(q, 1.23447734728178, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.036402710030890795, 3);
  sqcRYGate(q, -1.9353738896130306, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5631571189100848, 4);
  sqcRYGate(q, 2.8883730556813245, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.987078703667287, 4);
  sqcRYGate(q, 0.629681544317917, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.980575854096557, 5);
  sqcRYGate(q, -1.8537292395138798, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0372149011234999, 5);
  sqcRYGate(q, -3.077570284077506, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6496856503395334, 6);
  sqcRYGate(q, -0.26062174488516293, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.1800013636646005, 6);
  sqcRYGate(q, -2.427083367043344, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3598522454973316, 0);
  sqcRYGate(q, -0.16917521320184545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6630043614437877, 0);
  sqcRYGate(q, 1.8369701559717182, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.46043292943520875, 1);
  sqcRYGate(q, -1.285243188507212, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6932771125620727, 1);
  sqcRYGate(q, -1.8434749219492756, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9202802870398994, 2);
  sqcRYGate(q, -1.4540711014834766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.402162119974156, 2);
  sqcRYGate(q, -0.7036358670536815, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.404896229873466, 3);
  sqcRYGate(q, -0.2454740544626226, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.064465954792852, 3);
  sqcRYGate(q, -0.0436841471025291, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6798175080451787, 4);
  sqcRYGate(q, 1.9278144610443757, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.834270226783533, 4);
  sqcRYGate(q, -0.6882712118255262, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0657612570085044, 5);
  sqcRYGate(q, 2.6880196424931224, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4805878468035454, 5);
  sqcRYGate(q, -3.0020030085943326, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.16783314269105812, 6);
  sqcRYGate(q, 2.253258630955859, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8983191666669064, 6);
  sqcRYGate(q, 0.09511374083119951, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0963223436618645, 0);
  sqcRYGate(q, 0.045057021907881634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.142812344130065, 0);
  sqcRYGate(q, 1.1818692107876272, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3910759691007908, 1);
  sqcRYGate(q, 1.4229424409835583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.017041776084789, 1);
  sqcRYGate(q, -2.9274179251612718, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.025173502269895, 2);
  sqcRYGate(q, -1.95162015691374, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.126758878823145, 2);
  sqcRYGate(q, -2.8474850958268236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6462558721502907, 3);
  sqcRYGate(q, -2.1478053070702208, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0472042105807327, 3);
  sqcRYGate(q, 0.09029063888356159, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0189738648835425, 4);
  sqcRYGate(q, 1.9689238047788598, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.12093983222131, 4);
  sqcRYGate(q, 3.070471904428434, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9212285901788858, 5);
  sqcRYGate(q, -1.559130477496555, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0560980479800506, 5);
  sqcRYGate(q, 0.12342702168469513, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7405793732328139, 6);
  sqcRYGate(q, -1.4455967146503645, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.42064012180908, 6);
  sqcRYGate(q, -1.6129020028821204, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.036558704002399, 0);
  sqcRYGate(q, 2.357721143535101, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.314404537817662, 0);
  sqcRYGate(q, 0.25529115663893087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5772543351036388, 1);
  sqcRYGate(q, 2.5347580178392803, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.029617093885105746, 1);
  sqcRYGate(q, 2.8579263372731005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2726793329436275, 2);
  sqcRYGate(q, -1.2816736481764774, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1616317731427206, 2);
  sqcRYGate(q, -2.9375981360562933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5468564605285282, 3);
  sqcRYGate(q, -3.0512049011738736, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0997913173301854, 3);
  sqcRYGate(q, -3.025214182592094, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6751712722907753, 4);
  sqcRYGate(q, -2.054609618229566, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1138785393580584, 4);
  sqcRYGate(q, 2.416226318528861, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5856809666909026, 5);
  sqcRYGate(q, -2.6176579506255457, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6511092781296903, 5);
  sqcRYGate(q, -3.092124933794039, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.78319499208862, 6);
  sqcRYGate(q, 1.926313068494338, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3087870295500297, 6);
  sqcRYGate(q, 1.666092362120708, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0753728110425911, 0);
  sqcRYGate(q, 2.362487988709929, 1);
  sqcRYGate(q, -1.3309936970068665, 2);
  sqcRYGate(q, 2.3517976276309978, 3);
  sqcRYGate(q, -0.4781956953176301, 4);
  sqcRYGate(q, 2.4704944442952654, 5);
  sqcRYGate(q, 2.5511953232636126, 6);
  sqcRYGate(q, 1.3881352638557813, 7);

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
