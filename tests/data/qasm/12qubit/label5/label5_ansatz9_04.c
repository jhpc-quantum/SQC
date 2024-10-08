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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.3291871842771128, 0);
  sqcRYGate(q, -2.160208228171516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.722732353627392, 0);
  sqcRYGate(q, 2.4889889775082685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6672585881603992, 2);
  sqcRYGate(q, -2.5042412466262576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.843340710161612, 2);
  sqcRYGate(q, 1.5451328143429062, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.45256708180216254, 4);
  sqcRYGate(q, -0.6061273508509135, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8528961969475793, 4);
  sqcRYGate(q, -2.935584076272309, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2803565276949165, 6);
  sqcRYGate(q, 2.477182939606601, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.266467073493442, 6);
  sqcRYGate(q, -1.505208947069745, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5644804092914822, 8);
  sqcRYGate(q, -2.0817100619612474, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.7070830474050718, 8);
  sqcRYGate(q, -1.322948728729835, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.658638014124723, 10);
  sqcRYGate(q, 2.0880843844448633, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4559348763406756, 10);
  sqcRYGate(q, 0.35418723074405806, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.582656156073438, 0);
  sqcRYGate(q, 2.34231345886494, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7712776381687378, 0);
  sqcRYGate(q, 2.9236390473478053, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2714693182892667, 2);
  sqcRYGate(q, -1.6681461674188842, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2010561931156012, 2);
  sqcRYGate(q, 1.625306400339973, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.19284131689844028, 4);
  sqcRYGate(q, 2.1451656964674664, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5724820069780268, 4);
  sqcRYGate(q, -0.34157887587117813, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.8393760079236539, 6);
  sqcRYGate(q, 0.8364603936216914, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.882061274952501, 6);
  sqcRYGate(q, 2.6478643153931696, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.0675356231981397, 8);
  sqcRYGate(q, 0.16863483187441197, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.9726879161587743, 8);
  sqcRYGate(q, 0.9555290729248496, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.0991354196112797, 1);
  sqcRYGate(q, -2.1844501099190836, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.140125472794317, 1);
  sqcRYGate(q, -1.4824687639353034, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5322830496690791, 3);
  sqcRYGate(q, -1.310554932814041, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3611156138366056, 3);
  sqcRYGate(q, -1.1290447758227986, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.0315425598199246, 5);
  sqcRYGate(q, -1.7028831398303002, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.2996935420769327, 5);
  sqcRYGate(q, -1.9006809363860837, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.9202382104949773, 7);
  sqcRYGate(q, -1.3135125851246832, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.8910740982742826, 7);
  sqcRYGate(q, -2.803110137461467, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.199874286448327, 9);
  sqcRYGate(q, -1.723575136589215, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.2914759488074115, 9);
  sqcRYGate(q, 0.5588739814825094, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.902645966926204, 0);
  sqcRYGate(q, 1.663700978568607, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0016829227168387, 0);
  sqcRYGate(q, -1.44002973942114, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.722499891182887, 1);
  sqcRYGate(q, 0.8019783353230148, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8712262654707184, 1);
  sqcRYGate(q, -0.8808075061478444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2911063978009163, 2);
  sqcRYGate(q, -0.8036332525829328, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.8845654027522816, 2);
  sqcRYGate(q, -1.9726821240246126, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.177123569777419, 3);
  sqcRYGate(q, -2.123703423595842, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5297344116058949, 3);
  sqcRYGate(q, -1.1009339320276688, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2612305199605505, 4);
  sqcRYGate(q, 0.6909464454725951, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.440845352377182, 4);
  sqcRYGate(q, -2.7947548707273535, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.0278558738580044, 5);
  sqcRYGate(q, 0.7208377275862476, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.092736083857411, 5);
  sqcRYGate(q, 0.5972828353333286, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.421578605807769, 6);
  sqcRYGate(q, -3.084273269335325, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 1.8455926490505765, 6);
  sqcRYGate(q, -2.667751529614756, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.7072118589429246, 7);
  sqcRYGate(q, -1.5823794723740938, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.66774854767504, 7);
  sqcRYGate(q, -2.6496849291256797, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5190158981098278, 8);
  sqcRYGate(q, 1.9148182930013506, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 2.0853233042924937, 8);
  sqcRYGate(q, 3.132905539680148, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.330381012717865, 9);
  sqcRYGate(q, 2.091688904134211, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.8192971596718159, 9);
  sqcRYGate(q, 2.0484480434963963, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9354961615816613, 0);
  sqcRYGate(q, 0.6347362538792156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3578120400824973, 0);
  sqcRYGate(q, -0.6468811551656785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.161143888681111, 2);
  sqcRYGate(q, -0.30490463857614625, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5372449040367628, 2);
  sqcRYGate(q, -2.431468959213236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0796511342466166, 4);
  sqcRYGate(q, 0.7189301198264108, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7233538717187082, 4);
  sqcRYGate(q, 1.5191137679916578, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.10729525736174851, 6);
  sqcRYGate(q, -2.958283011946603, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.817890762587473, 6);
  sqcRYGate(q, 1.4638876436966082, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5790211438213486, 8);
  sqcRYGate(q, -1.9024173289701338, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.47070951899241, 8);
  sqcRYGate(q, -2.4387575152628735, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5015867014283941, 10);
  sqcRYGate(q, 2.079952126652465, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8449113459251283, 10);
  sqcRYGate(q, -2.5045530758577437, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.11591963745507555, 0);
  sqcRYGate(q, 1.9097115274478969, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3301207473075656, 0);
  sqcRYGate(q, 0.5992892127674719, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9633052989021718, 2);
  sqcRYGate(q, -2.6379495526685592, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.660170094411248, 2);
  sqcRYGate(q, 1.1075306674238012, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.4994582275427915, 4);
  sqcRYGate(q, 1.895931210625244, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.7974146536560824, 4);
  sqcRYGate(q, -2.7734193134183163, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.7928780841518566, 6);
  sqcRYGate(q, -1.2549788133156756, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.9807396716522163, 6);
  sqcRYGate(q, 1.9953100534410915, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.589491047392554, 8);
  sqcRYGate(q, 2.255365860433801, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.9121177751944374, 8);
  sqcRYGate(q, -2.524863452008639, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.7868717323011127, 1);
  sqcRYGate(q, 1.0145628054428437, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.357180816936355, 1);
  sqcRYGate(q, 2.476988151795198, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8216246066916386, 3);
  sqcRYGate(q, 0.42985282145138104, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.627547879169325, 3);
  sqcRYGate(q, 0.12829922922124193, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.4622499564924199, 5);
  sqcRYGate(q, 1.0134139221652543, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5386074213019787, 5);
  sqcRYGate(q, 2.490613590909466, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.143910838219543, 7);
  sqcRYGate(q, 1.11132923681002, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.108547896913816, 7);
  sqcRYGate(q, 2.8690098702839597, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.554123113885098, 9);
  sqcRYGate(q, 2.8701001812211393, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.168268922609834, 9);
  sqcRYGate(q, -2.0965565140719455, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.22583380315370402, 0);
  sqcRYGate(q, -0.16085397064717277, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.392481054699981, 0);
  sqcRYGate(q, 0.8629592707707344, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9915295757420538, 1);
  sqcRYGate(q, 1.7641151826780108, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3678331686606529, 1);
  sqcRYGate(q, -1.8280952873462732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1194282410691585, 2);
  sqcRYGate(q, 1.3253704787527127, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.6950675396637364, 2);
  sqcRYGate(q, 2.444511185190964, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.095186848249825, 3);
  sqcRYGate(q, 3.078990744532049, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.91424612972867, 3);
  sqcRYGate(q, -1.134605939981424, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.159718725165657, 4);
  sqcRYGate(q, 2.3387743056737733, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.4558902396294202, 4);
  sqcRYGate(q, 0.4134591373780213, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.7019724597450212, 5);
  sqcRYGate(q, 1.5886784746370273, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4778344404225647, 5);
  sqcRYGate(q, 1.582903082021101, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5948932327017293, 6);
  sqcRYGate(q, -2.270500762708195, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.7569841507747702, 6);
  sqcRYGate(q, -0.5149535852571998, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 1.9804366850012527, 7);
  sqcRYGate(q, 1.0389674181099986, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.258801308059507, 7);
  sqcRYGate(q, -1.3127713112157906, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.9892863554604601, 8);
  sqcRYGate(q, -1.4957075115142162, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.6765358565760886, 8);
  sqcRYGate(q, 2.6419042848276217, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -1.8483627109607, 9);
  sqcRYGate(q, -2.6927882975844764, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.8499773696548436, 9);
  sqcRYGate(q, -1.5276108739729937, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.680802722387196, 0);
  sqcRYGate(q, 2.787298913197766, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5823687724683833, 0);
  sqcRYGate(q, -1.1345280818974082, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0496284781411234, 2);
  sqcRYGate(q, -0.008403754546410624, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.211525105436949, 2);
  sqcRYGate(q, 0.49214707529016266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5215460775146012, 4);
  sqcRYGate(q, 0.6222476388766082, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5625071432717501, 4);
  sqcRYGate(q, 0.2079332178852633, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.379671134980978, 6);
  sqcRYGate(q, 0.9740333867042805, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.699810240109519, 6);
  sqcRYGate(q, -0.9023096435488194, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.367928585876279, 8);
  sqcRYGate(q, -0.1783983192528528, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.062248973382147, 8);
  sqcRYGate(q, -2.603723889767366, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.5395421855953253, 10);
  sqcRYGate(q, 1.230313981851329, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.431134832858757, 10);
  sqcRYGate(q, -1.4215281349081472, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3603984610673532, 0);
  sqcRYGate(q, -0.6387691895815638, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1748617732433315, 0);
  sqcRYGate(q, -1.2710830489672602, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2187222992050266, 2);
  sqcRYGate(q, -2.7631627071769684, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.3288103883020912, 2);
  sqcRYGate(q, 2.8344436105353705, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6360912427133273, 4);
  sqcRYGate(q, 1.0823781271586947, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.42401642508817794, 4);
  sqcRYGate(q, -2.599747347946353, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.5480311435757645, 6);
  sqcRYGate(q, -0.7686080611259795, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.2788125684240694, 6);
  sqcRYGate(q, 1.9328447375670692, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.055301640669579655, 8);
  sqcRYGate(q, -1.8195883023044623, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.095722234479682, 8);
  sqcRYGate(q, 2.4618419974325816, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.8632057698632027, 1);
  sqcRYGate(q, -1.3750712848988895, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5770726828523016, 1);
  sqcRYGate(q, -2.1221236289130694, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0235096317672028, 3);
  sqcRYGate(q, 1.6898169442874578, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.8761147643490856, 3);
  sqcRYGate(q, 0.7167726560494765, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.798520261412038, 5);
  sqcRYGate(q, 0.1426534355313569, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.7290901995698924, 5);
  sqcRYGate(q, 0.3880669064663572, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.015395775698926, 7);
  sqcRYGate(q, 2.286652401859566, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.707386023502932, 7);
  sqcRYGate(q, -1.8568587963578302, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.280671935235051, 9);
  sqcRYGate(q, -3.0522753031857914, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.2440757292833184, 9);
  sqcRYGate(q, -1.7478628864657917, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.217075647450856, 0);
  sqcRYGate(q, -0.11453501852779904, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.479607605328318, 0);
  sqcRYGate(q, 1.966021375420937, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.435898657091188, 1);
  sqcRYGate(q, -1.7756117285963802, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0629713950877804, 1);
  sqcRYGate(q, 2.533223100059285, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.952774761510692, 2);
  sqcRYGate(q, -2.4875295290445667, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.1375693573884382, 2);
  sqcRYGate(q, -2.162624898170691, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.4636785490964348, 3);
  sqcRYGate(q, 1.7564249797652562, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4515184839618276, 3);
  sqcRYGate(q, 1.760906229479268, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5152307003801706, 4);
  sqcRYGate(q, 2.6269459327679554, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.856328425031287, 4);
  sqcRYGate(q, 2.5727934078813988, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.4517320603564305, 5);
  sqcRYGate(q, 3.1337999680342343, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7038629341485612, 5);
  sqcRYGate(q, 2.3432195923445005, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8356801276554213, 6);
  sqcRYGate(q, -2.1963551453842864, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 1.817059703357681, 6);
  sqcRYGate(q, 1.0119082845869867, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.621815268915409, 7);
  sqcRYGate(q, 3.129982266673732, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9688126024927773, 7);
  sqcRYGate(q, 2.0581621250396296, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.2069261486133265, 8);
  sqcRYGate(q, -1.642745631966295, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 2.049267121487625, 8);
  sqcRYGate(q, -3.0015026413620283, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.06049450805630078, 9);
  sqcRYGate(q, -3.046472148765793, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.6899119127875251, 9);
  sqcRYGate(q, 2.5310576066440666, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.863438783760468, 0);
  sqcRYGate(q, 2.8297682595548355, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8432920253223926, 0);
  sqcRYGate(q, 2.6274279343456532, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9650868981199716, 2);
  sqcRYGate(q, -1.6744899014811667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3799586604384464, 2);
  sqcRYGate(q, 1.0019851737456835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2657799077146723, 4);
  sqcRYGate(q, 0.5146827155874444, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2688290385936254, 4);
  sqcRYGate(q, -2.2917484499095853, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9909211570499821, 6);
  sqcRYGate(q, -1.683568515935054, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0837918925656425, 6);
  sqcRYGate(q, 1.039324395088573, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6985938424732585, 8);
  sqcRYGate(q, 0.7896782314916893, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9935973796954545, 8);
  sqcRYGate(q, -0.36152076410022593, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.022474650553932, 10);
  sqcRYGate(q, 1.73170595915676, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.0775059712187067, 10);
  sqcRYGate(q, -2.6336943742031003, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.37924868612466, 0);
  sqcRYGate(q, -2.9350118398848717, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.707566419057022, 0);
  sqcRYGate(q, -2.120246362837605, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.744798304338957, 2);
  sqcRYGate(q, 1.074236659377283, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.9566381745671224, 2);
  sqcRYGate(q, -2.419370654376093, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.991224543518781, 4);
  sqcRYGate(q, -2.7034831891026943, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.087754576282883, 4);
  sqcRYGate(q, 1.7567839823678801, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.4403003304858637, 6);
  sqcRYGate(q, -2.595361033710787, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.308486726698667, 6);
  sqcRYGate(q, 2.2067842995673703, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.9495643234073876, 8);
  sqcRYGate(q, -2.626012908789371, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.9463100565869259, 8);
  sqcRYGate(q, -1.846403724561964, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.4014018318934642, 1);
  sqcRYGate(q, 0.5946587982580454, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.854460824593253, 1);
  sqcRYGate(q, 1.9137347866837624, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.77449503203773, 3);
  sqcRYGate(q, -1.5766906220112276, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.340378916125627, 3);
  sqcRYGate(q, 1.9330314280085865, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.339889464695605, 5);
  sqcRYGate(q, 2.3009505128695014, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.3669656535733594, 5);
  sqcRYGate(q, -1.1408862075372537, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.7506061457138955, 7);
  sqcRYGate(q, -0.7882292637008427, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.7941184496264402, 7);
  sqcRYGate(q, -1.6359017776271276, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.1157276541490164, 9);
  sqcRYGate(q, 1.7135413307582754, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.7276626955651935, 9);
  sqcRYGate(q, 1.4216183134996705, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.35522056744752806, 0);
  sqcRYGate(q, -0.8309354827330561, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8758337757783847, 0);
  sqcRYGate(q, -2.5335218610182166, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.823097026739984, 1);
  sqcRYGate(q, 1.1744753705788034, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0369274969490117, 1);
  sqcRYGate(q, -2.01227386762504, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.313636305888466, 2);
  sqcRYGate(q, 1.676552406024511, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.616245212791937, 2);
  sqcRYGate(q, 1.5324974395713822, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 3.0477032011041287, 3);
  sqcRYGate(q, 0.5003797673756742, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7860741381680315, 3);
  sqcRYGate(q, -0.3940311286472502, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9962788018050044, 4);
  sqcRYGate(q, -1.9467194736863345, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.1266913127783997, 4);
  sqcRYGate(q, 2.4291442105200884, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.27013614238236183, 5);
  sqcRYGate(q, 0.8984758435920126, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9735092722755918, 5);
  sqcRYGate(q, -1.012512549660417, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.42264697532412043, 6);
  sqcRYGate(q, -2.3178332791548475, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 1.738402129671191, 6);
  sqcRYGate(q, -1.7051992624601973, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -0.5297098350532236, 7);
  sqcRYGate(q, 0.5741985445586691, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.7631111413447735, 7);
  sqcRYGate(q, -2.270876622694964, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.6437368249407305, 8);
  sqcRYGate(q, 1.9693805518562315, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.8325744669136494, 8);
  sqcRYGate(q, 1.218252886758684, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -2.9089488610049274, 9);
  sqcRYGate(q, 0.28738553791775484, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.2191948062424753, 9);
  sqcRYGate(q, -1.4061272966475864, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.697557232331862, 0);
  sqcRYGate(q, 2.0369881568446395, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.913210353701399, 0);
  sqcRYGate(q, 2.43767021270098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5896359433211804, 2);
  sqcRYGate(q, 0.27918797255203387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8551816441686324, 2);
  sqcRYGate(q, 2.311647122057389, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.20988268082814265, 4);
  sqcRYGate(q, -2.2165369872510627, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6791744117117647, 4);
  sqcRYGate(q, 2.897488831225307, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1495088011734573, 6);
  sqcRYGate(q, -2.233441014561259, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6805206243427033, 6);
  sqcRYGate(q, 0.9564801474678893, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4784615431358503, 8);
  sqcRYGate(q, 1.8208541383746795, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.707121703284626, 8);
  sqcRYGate(q, 2.3856007894838265, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.6743004787351112, 10);
  sqcRYGate(q, -0.6813252121946818, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7248747552533453, 10);
  sqcRYGate(q, -1.164872720627498, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.3084086459509368, 0);
  sqcRYGate(q, -0.7162645499485525, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4919504134714119, 0);
  sqcRYGate(q, 0.651445045505719, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.164912661247663, 2);
  sqcRYGate(q, -0.36006624355237715, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.463240511000785, 2);
  sqcRYGate(q, 0.2926979989850169, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.027439845375655, 4);
  sqcRYGate(q, 1.5915808431870682, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.909408320515225, 4);
  sqcRYGate(q, 2.1153334531843897, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.2295199253921636, 6);
  sqcRYGate(q, -2.031847171321829, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.2349332252336094, 6);
  sqcRYGate(q, 1.7518657878752977, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.8437857277977006, 8);
  sqcRYGate(q, -2.7773158173948915, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.17247486890850652, 8);
  sqcRYGate(q, 2.2870952286170745, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.007939816963552, 1);
  sqcRYGate(q, 0.4936063349815951, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.621377278853594, 1);
  sqcRYGate(q, 1.0492900043272184, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2574789098631527, 3);
  sqcRYGate(q, 1.1348418251344103, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7238502080654372, 3);
  sqcRYGate(q, 2.0645736754251285, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8509408591089969, 5);
  sqcRYGate(q, 2.2731544367194463, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4535478407292752, 5);
  sqcRYGate(q, 1.7371531949572445, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.9022532012744007, 7);
  sqcRYGate(q, -0.9671268223721876, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.3550025585229455, 7);
  sqcRYGate(q, -2.524770763996485, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.95134359245809, 9);
  sqcRYGate(q, 2.3507634174382432, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.0317806902341573, 9);
  sqcRYGate(q, 1.485379959709386, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.9160420880050406, 0);
  sqcRYGate(q, 1.7171156986321467, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3481231097231063, 0);
  sqcRYGate(q, -0.21275234505557303, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3698068682694415, 1);
  sqcRYGate(q, 0.030704157308395708, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9787867916790185, 1);
  sqcRYGate(q, -0.7279636537015737, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0105466200780224, 2);
  sqcRYGate(q, -0.808767075987835, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.8605796688344522, 2);
  sqcRYGate(q, 3.116550235035081, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.17430527743459615, 3);
  sqcRYGate(q, -2.6493661911377657, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8165738414774717, 3);
  sqcRYGate(q, -1.4197138969545664, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9075972052393213, 4);
  sqcRYGate(q, 1.8016107069344587, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.1747601821962687, 4);
  sqcRYGate(q, -1.3791218336943396, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.9012736507291152, 5);
  sqcRYGate(q, -0.5233469180940251, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5195774686798873, 5);
  sqcRYGate(q, 0.5436753973794319, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9081839420331583, 6);
  sqcRYGate(q, -2.770122248389618, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 2.533065008033321, 6);
  sqcRYGate(q, -1.2744892421669016, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 2.762986103854695, 7);
  sqcRYGate(q, -2.968844738810716, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.9457953438360265, 7);
  sqcRYGate(q, 0.16034808226981576, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.6962268385569851, 8);
  sqcRYGate(q, 3.100053046484082, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 2.501601657525821, 8);
  sqcRYGate(q, 2.529330874066609, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 2.2569608119346594, 9);
  sqcRYGate(q, 0.6344716492402505, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.080282681204528, 9);
  sqcRYGate(q, -2.3402948172041658, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2424620765295673, 0);
  sqcRYGate(q, 1.9437964847033262, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2303215662813094, 0);
  sqcRYGate(q, 1.163490744921488, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3710186640255726, 2);
  sqcRYGate(q, 1.8355681247483968, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9053715806803346, 2);
  sqcRYGate(q, 2.9787500012674992, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2650301221390272, 4);
  sqcRYGate(q, 1.1645682466774208, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.929473842507261, 4);
  sqcRYGate(q, 0.9355448709720442, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5667088986747055, 6);
  sqcRYGate(q, 2.1910323260389992, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5944715841304429, 6);
  sqcRYGate(q, 1.0422744137392497, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9722321060894694, 8);
  sqcRYGate(q, -2.1902287323785417, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.5497072219219516, 8);
  sqcRYGate(q, -2.789085760107823, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.164923996684789, 10);
  sqcRYGate(q, 0.32049134434832993, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6075610879876185, 10);
  sqcRYGate(q, 0.9939453528385502, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5230373143056374, 0);
  sqcRYGate(q, -1.2695788696862247, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.67962952235539, 0);
  sqcRYGate(q, 1.1477262414828653, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.264238451372176, 2);
  sqcRYGate(q, -2.4639491985841455, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9913536547455175, 2);
  sqcRYGate(q, 2.334591997267004, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1088408102480471, 4);
  sqcRYGate(q, 1.2371565456001266, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.538185598079433, 4);
  sqcRYGate(q, -2.5904799827151836, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7221543328734157, 6);
  sqcRYGate(q, -3.008219017694241, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.36888202515036156, 6);
  sqcRYGate(q, 0.3744985222751697, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.6020638335268185, 8);
  sqcRYGate(q, 2.5419472005963817, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.8200689844846423, 8);
  sqcRYGate(q, -2.4188477570750826, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.6966601350395774, 1);
  sqcRYGate(q, 0.45215500597462643, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.085293603740587, 1);
  sqcRYGate(q, 0.6026484778133234, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.091176739629854, 3);
  sqcRYGate(q, 2.266481600089606, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.799230592828164, 3);
  sqcRYGate(q, 2.8498839387827677, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.9423887802833177, 5);
  sqcRYGate(q, 2.5651007393363714, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.73762877459908, 5);
  sqcRYGate(q, -1.5885360872449887, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5210887763696523, 7);
  sqcRYGate(q, 2.718802968128065, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.14642719834478857, 7);
  sqcRYGate(q, -0.32527333343852843, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.04361345892975166, 9);
  sqcRYGate(q, 2.6934782464472913, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.284171855755563, 9);
  sqcRYGate(q, -2.331134411909284, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.221364336753591, 0);
  sqcRYGate(q, 1.5533472204508323, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8376799001356323, 0);
  sqcRYGate(q, 2.690486123003255, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1546747051245356, 1);
  sqcRYGate(q, 1.3998303902035465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7546168977811172, 1);
  sqcRYGate(q, -2.3218233843519447, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0920993042128195, 2);
  sqcRYGate(q, -1.170141478199906, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.4613006883086324, 2);
  sqcRYGate(q, 0.9892898690986894, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.3460474235610196, 3);
  sqcRYGate(q, 1.43671070023315, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.253569355040236, 3);
  sqcRYGate(q, 1.2173342951325274, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2320132719340977, 4);
  sqcRYGate(q, 0.5744101266403766, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.8862457753481852, 4);
  sqcRYGate(q, 0.18880481698912946, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.09518009077237188, 5);
  sqcRYGate(q, -2.681839273780398, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4401731957285993, 5);
  sqcRYGate(q, 1.2114385673605428, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7764114879972244, 6);
  sqcRYGate(q, 1.2573727383197262, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -0.981146459233325, 6);
  sqcRYGate(q, 2.3735852907317185, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -0.13920781315153086, 7);
  sqcRYGate(q, -2.1698329826055907, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.276856291318777, 7);
  sqcRYGate(q, 2.051102578212922, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.8675219660402806, 8);
  sqcRYGate(q, -1.0250451486204062, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.04130674558432901, 8);
  sqcRYGate(q, 2.855981843851917, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.6398119646566983, 9);
  sqcRYGate(q, 0.03756365779650596, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.8784338079656653, 9);
  sqcRYGate(q, -0.4154536329132473, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.8546819557113416, 0);
  sqcRYGate(q, -1.8882665286589193, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7456632027827044, 0);
  sqcRYGate(q, -0.320912080674658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2271251615789771, 2);
  sqcRYGate(q, -2.521303698058935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5246534098502322, 2);
  sqcRYGate(q, -2.225784429707762, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.42647298820978863, 4);
  sqcRYGate(q, -2.901997315218519, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0302934340794856, 4);
  sqcRYGate(q, -0.495001002156816, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0538450249789397, 6);
  sqcRYGate(q, 2.390986966539661, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.836475656085396, 6);
  sqcRYGate(q, 0.5060975875804166, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5416938577534754, 8);
  sqcRYGate(q, 1.9378592283802434, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.0427004087800245, 8);
  sqcRYGate(q, 2.0740713164342974, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7472764379443212, 10);
  sqcRYGate(q, -2.5512250813295267, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0234172523801126, 10);
  sqcRYGate(q, -2.9579759843368225, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.089713230250324, 0);
  sqcRYGate(q, -0.6004876000119719, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.822931283073191, 0);
  sqcRYGate(q, -0.7846259231498346, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8152636664483779, 2);
  sqcRYGate(q, -2.7083912650141886, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.8324079779045572, 2);
  sqcRYGate(q, 0.9090100710539364, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.7279404368222844, 4);
  sqcRYGate(q, 2.9173215777982464, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.1809172535017376, 4);
  sqcRYGate(q, -1.7176986369459368, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.8801569178072997, 6);
  sqcRYGate(q, 0.1344145282742409, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.9901605023172624, 6);
  sqcRYGate(q, -2.3162638752898324, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.8193122160918422, 8);
  sqcRYGate(q, 2.073259447345046, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.7624864618038791, 8);
  sqcRYGate(q, -2.21006626897562, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.774784615375404, 1);
  sqcRYGate(q, -0.8508443486855787, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4309509306309687, 1);
  sqcRYGate(q, 0.9883161397922837, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3396967272074436, 3);
  sqcRYGate(q, -2.1269251636850868, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.098087076531428, 3);
  sqcRYGate(q, 0.46621910835931946, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.268469607928157, 5);
  sqcRYGate(q, 2.615941637900622, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.84937077422663, 5);
  sqcRYGate(q, 1.7874851430759735, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.8160490090688282, 7);
  sqcRYGate(q, -2.456016281203572, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.458235593767465, 7);
  sqcRYGate(q, 0.928740431530747, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.8466132105449977, 9);
  sqcRYGate(q, -0.6197839329617036, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.716618535504833, 9);
  sqcRYGate(q, -2.195910217859731, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.6292759082378616, 0);
  sqcRYGate(q, -3.015524213362049, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.49284622892082114, 0);
  sqcRYGate(q, 1.318244629877256, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.194599240533342, 1);
  sqcRYGate(q, -2.338667605877423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2755510902365141, 1);
  sqcRYGate(q, -1.7709866400933354, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.639338009798191, 2);
  sqcRYGate(q, 2.0731570937546766, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.0287030105749295, 2);
  sqcRYGate(q, 0.2507529172364231, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.5533925960978792, 3);
  sqcRYGate(q, 0.9096785864280779, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1005636469777826, 3);
  sqcRYGate(q, 2.028586458044379, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5581459867582684, 4);
  sqcRYGate(q, 0.5745786249660997, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.18515058161385586, 4);
  sqcRYGate(q, 1.1585161064169647, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.825758768106047, 5);
  sqcRYGate(q, 0.2713590234962522, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.681770046234589, 5);
  sqcRYGate(q, -0.9755967585580088, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7715040361405685, 6);
  sqcRYGate(q, -2.6999260187154412, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 1.114748374958464, 6);
  sqcRYGate(q, -1.1689883820537785, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 2.2308580615745983, 7);
  sqcRYGate(q, -2.6845639274530133, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.2909779427277583, 7);
  sqcRYGate(q, 0.8902548904468439, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.8276863651282973, 8);
  sqcRYGate(q, -2.1555367416964284, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -1.614854087115157, 8);
  sqcRYGate(q, -2.6187298850640186, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -1.5154660730061102, 9);
  sqcRYGate(q, 0.42474858980164576, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.3314565455794602, 9);
  sqcRYGate(q, 1.7069207547185048, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.5716771775266141, 0);
  sqcRYGate(q, -0.019250013959290158, 1);
  sqcRYGate(q, 0.6835473828038573, 2);
  sqcRYGate(q, -0.9432701726576944, 3);
  sqcRYGate(q, -1.220223215151651, 4);
  sqcRYGate(q, 1.0943516844306818, 5);
  sqcRYGate(q, -2.6484497666669573, 6);
  sqcRYGate(q, -0.7545500215809289, 7);
  sqcRYGate(q, 2.5582268138108817, 8);
  sqcRYGate(q, -1.092284460837246, 9);
  sqcRYGate(q, 0.6808651214050054, 10);
  sqcRYGate(q, 0.4724860859575885, 11);

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
