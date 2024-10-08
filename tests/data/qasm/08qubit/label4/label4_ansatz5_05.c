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

  sqcRYGate(q, 1.8259979967974147, 0);
  sqcRYGate(q, 2.179781310215151, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2051834495674951, 0);
  sqcRYGate(q, 1.1490843234199921, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4265558619516971, 2);
  sqcRYGate(q, -2.6081417654625825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4784779562132995, 2);
  sqcRYGate(q, 1.049091696349046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6143123156360657, 4);
  sqcRYGate(q, -2.2740090565946725, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4291688736175683, 4);
  sqcRYGate(q, -1.0851728642348912, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0828337040757559, 6);
  sqcRYGate(q, 2.0158049805930958, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8233552686652237, 6);
  sqcRYGate(q, -1.6717460684209904, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9688077230608733, 1);
  sqcRYGate(q, -0.5743204961547308, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.264455601239287, 1);
  sqcRYGate(q, -0.4598785642589274, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4091899763305173, 3);
  sqcRYGate(q, -2.8017100532819725, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9629681765013323, 3);
  sqcRYGate(q, -0.472023484864227, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0195265743224637, 5);
  sqcRYGate(q, 2.817522376465257, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1410956089714306, 5);
  sqcRYGate(q, 2.511995989636948, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.021799573345377, 0);
  sqcRYGate(q, 0.03675590721509574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1452071832951729, 0);
  sqcRYGate(q, -0.4480001870056723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2582230807619989, 2);
  sqcRYGate(q, 2.6856266465731418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3318049270580294, 2);
  sqcRYGate(q, -1.753478176202616, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7905866453317927, 4);
  sqcRYGate(q, -0.39786655753429834, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.411544592377509, 4);
  sqcRYGate(q, 0.538181335440757, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.12797767082588227, 6);
  sqcRYGate(q, 0.37135389067903085, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.11424056748713235, 6);
  sqcRYGate(q, -3.1390542791958764, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0062201238469404, 1);
  sqcRYGate(q, -0.6034061182259228, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4774536070236828, 1);
  sqcRYGate(q, 1.2075424397005259, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.23950321057632, 3);
  sqcRYGate(q, -0.23812305410716567, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0578706847295436, 3);
  sqcRYGate(q, 0.27328998016885786, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6418429404209558, 5);
  sqcRYGate(q, -0.5672421433252227, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8775500629705124, 5);
  sqcRYGate(q, 2.742557284313671, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3232785211100548, 0);
  sqcRYGate(q, -0.5849649552712439, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.894980256792635, 0);
  sqcRYGate(q, 0.6633440792749491, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.355486996457761, 2);
  sqcRYGate(q, -1.5896056347738814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.13970451878453027, 2);
  sqcRYGate(q, -1.0222722253572563, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.17925996932334284, 4);
  sqcRYGate(q, -0.37001296650446136, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8144697932516607, 4);
  sqcRYGate(q, -0.8354471540801995, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1579794302368354, 6);
  sqcRYGate(q, 0.4473080544326735, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.29668659167485295, 6);
  sqcRYGate(q, -1.1220136497801898, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1297124864694308, 1);
  sqcRYGate(q, -0.04229317914528372, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9973571402100905, 1);
  sqcRYGate(q, -0.365092916637718, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.23521015406035523, 3);
  sqcRYGate(q, -1.8696517268743964, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.141202870278088, 3);
  sqcRYGate(q, 1.8664210234678416, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9851670854242953, 5);
  sqcRYGate(q, -0.7836957089323002, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.348413780708682, 5);
  sqcRYGate(q, 0.0013724003989309854, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.399223175606813, 0);
  sqcRYGate(q, 0.500626660563813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.591624809510315, 0);
  sqcRYGate(q, -2.9940444363011007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3201916086983396, 2);
  sqcRYGate(q, 1.1183947045660636, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2659299388185605, 2);
  sqcRYGate(q, -1.5105718976833211, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8956904297952287, 4);
  sqcRYGate(q, 0.15969214026710077, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7057316165406757, 4);
  sqcRYGate(q, 2.3422094640608155, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8990780116419503, 6);
  sqcRYGate(q, 0.9263483935607111, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.994192812243865, 6);
  sqcRYGate(q, -1.0418489020781718, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2273715169744852, 1);
  sqcRYGate(q, -1.4393896758896507, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10153358769812737, 1);
  sqcRYGate(q, 0.09261456166060787, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.659452566002312, 3);
  sqcRYGate(q, -1.899962319869534, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0256168018733007, 3);
  sqcRYGate(q, 2.634519822545601, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.010366995569278, 5);
  sqcRYGate(q, 1.7531498982269171, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.16974685261087, 5);
  sqcRYGate(q, 0.07275094834223594, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3125625571028454, 0);
  sqcRYGate(q, 1.860423412926469, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2370300684601565, 0);
  sqcRYGate(q, -1.7070242290342263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5655992276000967, 2);
  sqcRYGate(q, -1.524317010353496, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.900701802508896, 2);
  sqcRYGate(q, 1.4575891910767522, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6145483648483396, 4);
  sqcRYGate(q, -3.1181789380423672, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1787177869775007, 4);
  sqcRYGate(q, 2.434457435360924, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.19554046905198577, 6);
  sqcRYGate(q, -2.411382952057982, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3901897650272659, 6);
  sqcRYGate(q, -1.5824781737517313, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8936462678197468, 1);
  sqcRYGate(q, 1.0937492759729137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0780766525003918, 1);
  sqcRYGate(q, -1.791012344736795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0609502164289286, 3);
  sqcRYGate(q, 2.0274893551887527, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3164057862573597, 3);
  sqcRYGate(q, 2.1996120543903745, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8600203455996042, 5);
  sqcRYGate(q, -2.11134146382078, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1408194171943316, 5);
  sqcRYGate(q, -1.5698066620863766, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3026234661674785, 0);
  sqcRYGate(q, 0.32594716021911535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8206556330177843, 0);
  sqcRYGate(q, 2.694061778000694, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.381149596743511, 2);
  sqcRYGate(q, -0.2258266440494926, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2324375092230087, 2);
  sqcRYGate(q, 1.2070998800213477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8279948357014453, 4);
  sqcRYGate(q, 3.1407528739437227, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5718453812557107, 4);
  sqcRYGate(q, -1.571114324020097, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0669427239357407, 6);
  sqcRYGate(q, 0.1145999859720061, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7212703699760411, 6);
  sqcRYGate(q, -0.27194160771867976, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6687346502461322, 1);
  sqcRYGate(q, -2.8733757989873205, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3018757587607532, 1);
  sqcRYGate(q, 0.41231198058269164, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6830548547776356, 3);
  sqcRYGate(q, 3.1411826187919605, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2414899916037516, 3);
  sqcRYGate(q, 7.14390460947456e-05, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8182022290688162, 5);
  sqcRYGate(q, 0.006371581148052757, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7798678667334875, 5);
  sqcRYGate(q, -1.5703964000651458, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0159990028619643, 0);
  sqcRYGate(q, -1.0259921131773224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3049465341980053, 0);
  sqcRYGate(q, 2.274530294776283, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.705444303578896, 2);
  sqcRYGate(q, -0.23374110238598111, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.598661651009019, 2);
  sqcRYGate(q, 0.05064022184599198, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.00042410333631872206, 4);
  sqcRYGate(q, 0.0010006782629794486, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.876227070612216, 4);
  sqcRYGate(q, 1.6589880930736114, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1414203942080787, 6);
  sqcRYGate(q, -1.2048251234760272, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8298454616501083, 6);
  sqcRYGate(q, -1.5707692604221632, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.648499528829648, 1);
  sqcRYGate(q, 1.3824889335898591, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4313123876902525, 1);
  sqcRYGate(q, 2.8301982990315833, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6862341369842713, 3);
  sqcRYGate(q, -1.5703570475781516, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5705818824046498, 3);
  sqcRYGate(q, 1.5708109154313865, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0003734201080094955, 5);
  sqcRYGate(q, 1.8279016554065874, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5718470649384388, 5);
  sqcRYGate(q, 1.440314578558697, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2513875697421255, 0);
  sqcRYGate(q, -0.8512188873724288, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3753863992625357, 0);
  sqcRYGate(q, -0.7700988805307846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6791526662471155, 2);
  sqcRYGate(q, 3.1413065648834735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.42815201886616544, 2);
  sqcRYGate(q, 1.5708997759091279, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.868384840349294, 4);
  sqcRYGate(q, -0.0033775402218977706, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.07419004796975681, 4);
  sqcRYGate(q, -0.0003364531609965754, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.00041713439682422874, 6);
  sqcRYGate(q, -1.5663360254750005, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8647786477320218, 6);
  sqcRYGate(q, 1.8323997260869724, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6102408598526106, 1);
  sqcRYGate(q, -3.141175587589765, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5708514452074551, 1);
  sqcRYGate(q, -1.5706887837943384, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1415055375066814, 3);
  sqcRYGate(q, -2.024385716503777, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1410326942527895, 3);
  sqcRYGate(q, 1.6528888695860078, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.002557624045856516, 5);
  sqcRYGate(q, -3.14158228864317, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.571401860939493, 5);
  sqcRYGate(q, -2.548570982866479, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.24478136023822203, 0);
  sqcRYGate(q, 1.5708861593248218, 1);
  sqcRYGate(q, -3.1121605049384273, 2);
  sqcRYGate(q, -3.141136558567753, 3);
  sqcRYGate(q, 0.999064601695976, 4);
  sqcRYGate(q, 3.1403787688938842, 5);
  sqcRYGate(q, -1.3022295052000672, 6);
  sqcRYGate(q, -3.1407123017032, 7);

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
