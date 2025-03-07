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

  sqcRYGate(q, 0.9498042541465948, 0);
  sqcRYGate(q, 0.8074087031118361, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8512004099650126, 0);
  sqcRYGate(q, -1.8209946292268528, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0021129047706956, 2);
  sqcRYGate(q, 1.1529962860111969, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2138820816556617, 2);
  sqcRYGate(q, -1.0184472860973406, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.810874715172038, 4);
  sqcRYGate(q, 2.992326937608641, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3859310053575102, 4);
  sqcRYGate(q, 2.529700919464592, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.44200014060095555, 6);
  sqcRYGate(q, -2.8190967308534236, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8493152543074718, 6);
  sqcRYGate(q, 1.8188179815056236, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.42100580912778085, 8);
  sqcRYGate(q, -0.9713688792510524, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6634209363667765, 8);
  sqcRYGate(q, 2.6019268154316006, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.0807010136407067, 10);
  sqcRYGate(q, 2.123085730917392, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.6825364926560398, 10);
  sqcRYGate(q, 2.7642067903283456, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.11654934288471, 0);
  sqcRYGate(q, -0.6888024934835324, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9683062034462986, 0);
  sqcRYGate(q, -2.2091151128808866, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.188389231030216, 2);
  sqcRYGate(q, 2.0593997235447494, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.905663746798293, 2);
  sqcRYGate(q, 2.364725970418627, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.4129695544092966, 4);
  sqcRYGate(q, 0.19300956229676838, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.6395933075689175, 4);
  sqcRYGate(q, -1.5094988674723149, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2250829542294728, 6);
  sqcRYGate(q, -0.16552381484716872, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.08398079402293, 6);
  sqcRYGate(q, -3.0913063333923385, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.9621517079617612, 8);
  sqcRYGate(q, 0.6213195637875133, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.31197016810446077, 8);
  sqcRYGate(q, 3.128111593331246, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.7505067217126602, 1);
  sqcRYGate(q, -0.1197598571020153, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3529178415055139, 1);
  sqcRYGate(q, -1.0110205644563548, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5026260964367726, 3);
  sqcRYGate(q, 2.7000273447813337, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.5173766008399814, 3);
  sqcRYGate(q, -1.6828854331718073, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.353778533344033, 5);
  sqcRYGate(q, 2.7865496602280553, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.31493540917630286, 5);
  sqcRYGate(q, 1.319558326564164, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5323372210239792, 7);
  sqcRYGate(q, -2.3807160455690304, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.34535793079014887, 7);
  sqcRYGate(q, 0.35754250204944693, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.0326305871652943, 9);
  sqcRYGate(q, -2.0480166632166865, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.7493943864615686, 9);
  sqcRYGate(q, -3.122866394087342, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.926891995656262, 0);
  sqcRYGate(q, 2.9381698842868924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.519873880029347, 0);
  sqcRYGate(q, -0.6870020924331417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4820484115264136, 2);
  sqcRYGate(q, -1.73935045908003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5197843488193883, 2);
  sqcRYGate(q, -2.6716617627721924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7354887250520012, 4);
  sqcRYGate(q, -1.5902613238931256, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1386357831070715, 4);
  sqcRYGate(q, -1.312925917673506, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.42301610733364303, 6);
  sqcRYGate(q, 0.4572687203800996, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6871283191501067, 6);
  sqcRYGate(q, -1.6314349476944423, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3516853053948354, 8);
  sqcRYGate(q, -1.0747380014932677, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.46597040436173454, 8);
  sqcRYGate(q, 1.9656184807481956, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0035552767109417, 10);
  sqcRYGate(q, -2.1124053826919917, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8265002531930046, 10);
  sqcRYGate(q, 0.5680099710987685, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.269846443039905, 0);
  sqcRYGate(q, 1.5509244805309097, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7406766769021713, 0);
  sqcRYGate(q, 1.509141178756926, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8051978241289572, 2);
  sqcRYGate(q, 1.8400195642618018, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5650318894927482, 2);
  sqcRYGate(q, -2.8480379109542744, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.2882934150538357, 4);
  sqcRYGate(q, -2.421663072601151, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.223609327468667, 4);
  sqcRYGate(q, -0.5638844205663176, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.927363000666451, 6);
  sqcRYGate(q, -1.6162206727124724, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0928758085651387, 6);
  sqcRYGate(q, 0.14349069636693734, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.4527344446154213, 8);
  sqcRYGate(q, 0.24485513656484148, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.9294436181576047, 8);
  sqcRYGate(q, 3.0001767051891375, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.06357475046905393, 1);
  sqcRYGate(q, 1.297924447922457, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.36025987302581, 1);
  sqcRYGate(q, 2.311404023247771, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.763222934076655, 3);
  sqcRYGate(q, -1.4458118411206657, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.1995455909804116, 3);
  sqcRYGate(q, -0.6926356672235618, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3998305016795916, 5);
  sqcRYGate(q, 1.6753794270404843, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.2534384337482072, 5);
  sqcRYGate(q, 0.3383684369044466, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.052141384695836, 7);
  sqcRYGate(q, -0.062205393095522865, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.011376276654285413, 7);
  sqcRYGate(q, 3.057077952559641, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.2420792984499043, 9);
  sqcRYGate(q, -2.553553500740987, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.3099326552021626, 9);
  sqcRYGate(q, -0.005099515941571149, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.6885649074456044, 0);
  sqcRYGate(q, 0.6128999164824566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.402374961175659, 0);
  sqcRYGate(q, -1.1628000194092278, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.521469801599886, 2);
  sqcRYGate(q, 0.42573981432925834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0087929246933944, 2);
  sqcRYGate(q, -0.9806281159731581, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3134554617590373, 4);
  sqcRYGate(q, 0.1137503189964706, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3316498409361563, 4);
  sqcRYGate(q, -2.9297851936041854, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0326608160074224, 6);
  sqcRYGate(q, -2.328543880706248, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.38237823999628695, 6);
  sqcRYGate(q, 2.043058134562906, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.503745755706418, 8);
  sqcRYGate(q, 2.559964659830381, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.790877295833455, 8);
  sqcRYGate(q, 1.9838845798507752, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6559222968933596, 10);
  sqcRYGate(q, -2.7654089228860124, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0283441175055754, 10);
  sqcRYGate(q, 0.9702561157805188, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.131258264908589, 0);
  sqcRYGate(q, 0.6486125793420996, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.17027220106870278, 0);
  sqcRYGate(q, 2.0316129699737027, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7220182345942623, 2);
  sqcRYGate(q, 3.112058998163452, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.8293914652468584, 2);
  sqcRYGate(q, 0.4814915995894626, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.98497628971777, 4);
  sqcRYGate(q, -2.1469435675312227, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.038580934195699, 4);
  sqcRYGate(q, -1.6789700349887946, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5043379333105102, 6);
  sqcRYGate(q, 1.8196704198601177, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.04421696843954592, 6);
  sqcRYGate(q, 0.03507761044219979, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.1916877215481403, 8);
  sqcRYGate(q, 2.0565103457340346, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.7092626645333664, 8);
  sqcRYGate(q, 0.13054728786943237, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.3328571744079021, 1);
  sqcRYGate(q, 3.106674565848374, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.09117442345693, 1);
  sqcRYGate(q, 2.262628938845199, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.09914315104115, 3);
  sqcRYGate(q, -1.2713651790454046, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.637012569565286, 3);
  sqcRYGate(q, -1.97886509645843, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.3419054694523229, 5);
  sqcRYGate(q, 1.0036185577081929, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.1610966897137875, 5);
  sqcRYGate(q, -0.8685280923360655, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.26402440790437526, 7);
  sqcRYGate(q, 1.995017392026151, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.05335217845248279, 7);
  sqcRYGate(q, -0.05448128382287898, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.0677633393773693, 9);
  sqcRYGate(q, -1.4789904625021286, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.92981952610881, 9);
  sqcRYGate(q, 1.5228807602001133, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.7327344711095466, 0);
  sqcRYGate(q, -1.602773925161932, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3301732663890258, 0);
  sqcRYGate(q, -2.7181060213806263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4676024263288427, 2);
  sqcRYGate(q, -0.2656791011441308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.427216727425673, 2);
  sqcRYGate(q, -1.1437446560909166, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.352788179927044, 4);
  sqcRYGate(q, -2.5619064499555404, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.068179243530502, 4);
  sqcRYGate(q, -1.4071371265980612, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6146614673013602, 6);
  sqcRYGate(q, 1.037557930747852, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2011619779520434, 6);
  sqcRYGate(q, 1.1916639456286315, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2624914277370898, 8);
  sqcRYGate(q, 1.354967373462209, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.25811602347390306, 8);
  sqcRYGate(q, -0.039990842370716706, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3431026304895972, 10);
  sqcRYGate(q, 0.4681303583345633, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0248124729474233, 10);
  sqcRYGate(q, -2.6241476520343197, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0754384216405604, 0);
  sqcRYGate(q, 1.2778275963152703, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7549499560954569, 0);
  sqcRYGate(q, -1.1783244165892177, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8388819189974206, 2);
  sqcRYGate(q, 2.6681165839596024, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7652933408499678, 2);
  sqcRYGate(q, 0.7871387053698825, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.8064112754170354, 4);
  sqcRYGate(q, 2.7325909139775284, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.3027241327290446, 4);
  sqcRYGate(q, 2.823833252626965, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.49710834468725995, 6);
  sqcRYGate(q, -1.3863761581870169, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.024632346071351875, 6);
  sqcRYGate(q, -3.107949188181091, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.3430478984366634, 8);
  sqcRYGate(q, -2.924195005779008, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.18486965751538076, 8);
  sqcRYGate(q, 3.0985450862069035, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.7226000318406305, 1);
  sqcRYGate(q, 0.45941949231704454, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.67368043623574, 1);
  sqcRYGate(q, -1.700124930629573, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3411716509565034, 3);
  sqcRYGate(q, 1.3382424345139627, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.601798133141321, 3);
  sqcRYGate(q, 2.5910924952099315, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.90180662038413, 5);
  sqcRYGate(q, -2.239449409981213, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.9974008564558554, 5);
  sqcRYGate(q, 0.34784761496905947, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.997942282519926, 7);
  sqcRYGate(q, 1.8689440821305174, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.1396587866372094, 7);
  sqcRYGate(q, 3.139738012057139, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.0865143554393955, 9);
  sqcRYGate(q, 0.1938542937086592, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.9786806176499403, 9);
  sqcRYGate(q, 0.11166982426114222, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.817353639995547, 0);
  sqcRYGate(q, -1.5727881215487394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2288300137858945, 0);
  sqcRYGate(q, 2.1843485678545247, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.188493849718597, 2);
  sqcRYGate(q, 0.957935760352987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9953349413734487, 2);
  sqcRYGate(q, -1.6547876671986896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.166673475868289, 4);
  sqcRYGate(q, -3.101178102457937, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.191313417221888, 4);
  sqcRYGate(q, -2.1868759809734533, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6230192172856137, 6);
  sqcRYGate(q, -2.2565643850838075, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8602591751664059, 6);
  sqcRYGate(q, 0.591052579087342, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.1847121920619541, 8);
  sqcRYGate(q, 0.7946550052817665, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.9159780452115625, 8);
  sqcRYGate(q, -0.06230316576836876, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.5268944199100574, 10);
  sqcRYGate(q, -1.0805047147705844, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.3626740089498544, 10);
  sqcRYGate(q, 0.8474913162412143, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8930043295964294, 0);
  sqcRYGate(q, -2.993198304730661, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.938744410783741, 0);
  sqcRYGate(q, -1.2398826161687595, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3672614399912213, 2);
  sqcRYGate(q, 2.6492060824505343, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6373138031960235, 2);
  sqcRYGate(q, 0.9299857113848891, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.9220956285480003, 4);
  sqcRYGate(q, -2.069050953730973, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.9273005129747416, 4);
  sqcRYGate(q, -2.6759356409150055, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.24130375023792983, 6);
  sqcRYGate(q, -0.8820865758608791, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.5208173798178426, 6);
  sqcRYGate(q, -0.21084183330252682, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.607913052984836, 8);
  sqcRYGate(q, -0.47190419643945486, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.918085906067939, 8);
  sqcRYGate(q, 0.001651020372825786, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.640295721386602, 1);
  sqcRYGate(q, 0.9130207108134369, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.30636542278914636, 1);
  sqcRYGate(q, 1.5162245763912099, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.119957431302857, 3);
  sqcRYGate(q, -1.1689054602133302, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.151672295109485, 3);
  sqcRYGate(q, -1.9850321239447402, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.795908207947238, 5);
  sqcRYGate(q, -0.6118171073805705, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5263300443449168, 5);
  sqcRYGate(q, 0.4165431207503826, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7351856424877443, 7);
  sqcRYGate(q, -1.6765839784132393, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.006337941425114124, 7);
  sqcRYGate(q, -0.002214999175873089, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.35554421726958285, 9);
  sqcRYGate(q, -3.111664298389029, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.9932127114111093, 9);
  sqcRYGate(q, -3.123981784907698, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.345325284363051, 0);
  sqcRYGate(q, -0.05495155571262017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0879770915478382, 0);
  sqcRYGate(q, 1.1761642213316095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6880234303440311, 2);
  sqcRYGate(q, -1.0526347538818666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1239898665611128, 2);
  sqcRYGate(q, 2.233535148608471, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1112253380285313, 4);
  sqcRYGate(q, 1.4756345518831047, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.44534126568630855, 4);
  sqcRYGate(q, -1.5272545631867285, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7284785944660956, 6);
  sqcRYGate(q, -0.22883500915577937, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.936786732278963, 6);
  sqcRYGate(q, 3.1102298849517234, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8597763187611038, 8);
  sqcRYGate(q, 1.1284854901167192, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.1129005416440343, 8);
  sqcRYGate(q, 1.630890122555697, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9377429195028859, 10);
  sqcRYGate(q, 0.9576426311179307, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7637110899333086, 10);
  sqcRYGate(q, -2.0105300089199964, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.51252094538084, 0);
  sqcRYGate(q, -1.5489631279801868, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0822875764378295, 0);
  sqcRYGate(q, 0.7744901095572958, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.07966936611474391, 2);
  sqcRYGate(q, 2.2474547665976097, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.302295823925542, 2);
  sqcRYGate(q, -1.6441207178605117, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.825402383208034, 4);
  sqcRYGate(q, -2.6932376138465677, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.302180937054599, 4);
  sqcRYGate(q, -0.5958100917511163, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.0328351256577566, 6);
  sqcRYGate(q, -1.527265824817543, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.9290428512032962, 6);
  sqcRYGate(q, -3.1156078742493265, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.0992671097068505, 8);
  sqcRYGate(q, 0.3256941162811211, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.4924949294333558, 8);
  sqcRYGate(q, 3.141084309384002, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.6958005647823275, 1);
  sqcRYGate(q, 0.13591930961481102, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4589821179285316, 1);
  sqcRYGate(q, -2.532769414046034, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.10907975284721706, 3);
  sqcRYGate(q, 1.1566089372508774, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.4535713864186293, 3);
  sqcRYGate(q, 1.6869445850848612, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.615718420553781, 5);
  sqcRYGate(q, -1.8326152760715528, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.859185571148013, 5);
  sqcRYGate(q, 1.9425530645398474, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.752482772865054, 7);
  sqcRYGate(q, 1.3686809175322425, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.11839662042151744, 7);
  sqcRYGate(q, -0.0009157320124970473, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.1166366678057216, 9);
  sqcRYGate(q, -1.1967640037499057, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.6082678232690417, 9);
  sqcRYGate(q, -0.8203574641870736, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.4727479526514418, 0);
  sqcRYGate(q, 1.406817136064265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2186807474438297, 0);
  sqcRYGate(q, 1.2454256030015451, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.22137986613036467, 2);
  sqcRYGate(q, 0.4639668836199973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.24250821165837586, 2);
  sqcRYGate(q, 1.8241592362571373, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.036991044968506, 4);
  sqcRYGate(q, -0.4106835632832491, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6681487389829632, 4);
  sqcRYGate(q, -2.4222289299953705, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.12313206846430039, 6);
  sqcRYGate(q, -0.3966266945283513, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.45126131018581617, 6);
  sqcRYGate(q, -1.5639836478966602, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.882957691206088, 8);
  sqcRYGate(q, -1.669943224833764, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.598713641281691, 8);
  sqcRYGate(q, -0.0003922420622098445, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.6499323158246852, 10);
  sqcRYGate(q, 2.9354575364348823, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1049798862713787, 10);
  sqcRYGate(q, 0.0436430920200257, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5942351764298637, 0);
  sqcRYGate(q, 2.3339022527200304, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9737740398689257, 0);
  sqcRYGate(q, 1.0170047336169836, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2520160073067212, 2);
  sqcRYGate(q, -0.7246270161366573, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.18185558040474, 2);
  sqcRYGate(q, -2.2681387250984084, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.279370501637553, 4);
  sqcRYGate(q, -1.4141592624511925, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.127970875483856, 4);
  sqcRYGate(q, 3.0865233030904946, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.08824482436382712, 6);
  sqcRYGate(q, -0.5717891404522595, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.289981157813747, 6);
  sqcRYGate(q, 0.004091927365865236, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.8464664479970496, 8);
  sqcRYGate(q, 1.997796177499004, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.2254371189863553, 8);
  sqcRYGate(q, 3.1352890998345724, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.21048620859985642, 1);
  sqcRYGate(q, -0.9578880786490631, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6118549280452543, 1);
  sqcRYGate(q, -1.4994036352818974, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8134492780352125, 3);
  sqcRYGate(q, -1.614076802659583, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.7495282941193726, 3);
  sqcRYGate(q, -1.3088231974871283, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.6762030410698919, 5);
  sqcRYGate(q, -1.7916676648928203, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.4851162568284461, 5);
  sqcRYGate(q, 2.0415340155956563, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5936334012999036, 7);
  sqcRYGate(q, 1.5680564862265816, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.9150765599048487, 7);
  sqcRYGate(q, -2.8951135233013114, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.7285062912864401, 9);
  sqcRYGate(q, -0.7688784744957706, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.5362734491455585, 9);
  sqcRYGate(q, 1.594344445645259, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.8570761945195721, 0);
  sqcRYGate(q, 0.5876232160011933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.381099735217956, 0);
  sqcRYGate(q, -1.4318554632942009, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.423458763916351, 2);
  sqcRYGate(q, -1.0560742543429336, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0522768871115016, 2);
  sqcRYGate(q, 1.2027208313003128, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.245110882290905, 4);
  sqcRYGate(q, 0.6819009124748883, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.052191544226309, 4);
  sqcRYGate(q, 1.1366577505787125, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.141826709316467, 6);
  sqcRYGate(q, 1.357398332312679, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5992601173827303, 6);
  sqcRYGate(q, 0.010279960249796716, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3105109832705857, 8);
  sqcRYGate(q, -1.4010402054388342, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.029097064592326943, 8);
  sqcRYGate(q, -1.6109230027821493, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.13387979150223, 10);
  sqcRYGate(q, 0.4290766313201071, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4156503168905306, 10);
  sqcRYGate(q, 1.5693172052143582, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.303720575140952, 0);
  sqcRYGate(q, -1.5249779728692316, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.56210260880292, 0);
  sqcRYGate(q, -1.796671151299753, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.935942304435743, 2);
  sqcRYGate(q, -0.6936552107137721, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.4204372595685042, 2);
  sqcRYGate(q, -2.086115432533238, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0271570368657232, 4);
  sqcRYGate(q, 2.2192642654881953, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.1301896134050105, 4);
  sqcRYGate(q, -0.008854501392559933, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.6728444057657084, 6);
  sqcRYGate(q, -0.3627390778379942, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.093773150228124, 6);
  sqcRYGate(q, 1.5804396068150888, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.4154636832540426, 8);
  sqcRYGate(q, -1.7496944945591169, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.0626550225231033, 8);
  sqcRYGate(q, -3.140505302723716, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.3564780331063186, 1);
  sqcRYGate(q, -1.158131003752645, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.019568929475134, 1);
  sqcRYGate(q, 1.2285509442386022, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.40894991880413706, 3);
  sqcRYGate(q, 0.9091934375630961, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.0435478441365054, 3);
  sqcRYGate(q, 0.5508111109834442, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9457905165199492, 5);
  sqcRYGate(q, 2.9545069545986546, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.6233520358624696, 5);
  sqcRYGate(q, -2.949200601965584, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4123990793613976, 7);
  sqcRYGate(q, -0.8398923027970437, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.122180064389556, 7);
  sqcRYGate(q, -2.7086794665363945, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.3411764748906956, 9);
  sqcRYGate(q, 1.6112163816766847, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.4826294565349378, 9);
  sqcRYGate(q, 3.1216867365011582, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.9497281860016544, 0);
  sqcRYGate(q, 0.8487534778865969, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2804409745704106, 0);
  sqcRYGate(q, 1.2002158014826712, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0588009442791533, 2);
  sqcRYGate(q, 0.6222735968657034, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7629018751485654, 2);
  sqcRYGate(q, 0.22618495469296848, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2813204874343498, 4);
  sqcRYGate(q, 1.9816208701802935, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9729863939898349, 4);
  sqcRYGate(q, 2.3973349912839863, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2276659185907075, 6);
  sqcRYGate(q, 2.7750471360515148, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.005034523710715888, 6);
  sqcRYGate(q, 3.078010143720939, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3552202826723105, 8);
  sqcRYGate(q, 3.0857432550977633, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.141048993480344, 8);
  sqcRYGate(q, 0.6055776074510392, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.6931793919911406, 10);
  sqcRYGate(q, 0.017020089730854338, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.21287241924650885, 10);
  sqcRYGate(q, 2.4970200280990094, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.38220439552622965, 0);
  sqcRYGate(q, -0.8422189613303397, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7829541200957904, 0);
  sqcRYGate(q, -0.8711287488200448, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9061568802904514, 2);
  sqcRYGate(q, -0.0014242830674611635, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.3626983627184086, 2);
  sqcRYGate(q, -0.9254171304221517, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6418361751033502, 4);
  sqcRYGate(q, -2.47238246642094, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.137312669215767, 4);
  sqcRYGate(q, 0.6118601251297858, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.4281347442392463, 6);
  sqcRYGate(q, 1.699419651888089, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.6333542121839438, 6);
  sqcRYGate(q, 1.5886722854938, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.4505138124250552, 8);
  sqcRYGate(q, 2.6027987471320815, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.1007055502292262, 8);
  sqcRYGate(q, -1.4784560579592962, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.14977768101425792, 1);
  sqcRYGate(q, -1.3113591461851053, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8731123896134234, 1);
  sqcRYGate(q, -2.466077734157624, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0306777322749168, 3);
  sqcRYGate(q, -2.2253230953398004, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.8280600149283956, 3);
  sqcRYGate(q, -3.0556928263252074, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7116416237807666, 5);
  sqcRYGate(q, -1.3557745590498884, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5702340639387578, 5);
  sqcRYGate(q, 2.9860908014744716, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.6019753063575044, 7);
  sqcRYGate(q, -0.9746517156937058, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.5754857904069053, 7);
  sqcRYGate(q, -0.44235580066767005, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.008657439683526391, 9);
  sqcRYGate(q, 1.551891733732246, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.5774947453388788, 9);
  sqcRYGate(q, 1.5702486001486136, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.006524101703592, 0);
  sqcRYGate(q, 1.242843065183059, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7610450249366316, 0);
  sqcRYGate(q, -0.27060517590061917, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7778095976292176, 2);
  sqcRYGate(q, -2.324244878546138, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6652097934851247, 2);
  sqcRYGate(q, -1.3325194050193911, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5668487626724534, 4);
  sqcRYGate(q, 2.9687552067692615, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5712993132286235, 4);
  sqcRYGate(q, 1.5610260300228385, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.911168824722982, 6);
  sqcRYGate(q, 1.5673029406599452, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5701355841888027, 6);
  sqcRYGate(q, -3.1317435560350453, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.00649818964257065, 8);
  sqcRYGate(q, 1.43991398081583, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.02372947581480389, 8);
  sqcRYGate(q, -1.5668547442735061, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3716267824608774, 10);
  sqcRYGate(q, 3.138983387161909, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.634731438976375, 10);
  sqcRYGate(q, -0.0023055224589212386, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6651850404574802, 0);
  sqcRYGate(q, 2.719073038698579, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2026738816088571, 0);
  sqcRYGate(q, 2.3573828987249468, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1695086718029044, 2);
  sqcRYGate(q, 1.2296303702523108, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.1363765164468607, 2);
  sqcRYGate(q, -0.7296211861652386, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.5365665391808214, 4);
  sqcRYGate(q, -2.1229628836462973, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.077783965446865, 4);
  sqcRYGate(q, -0.002442123813229388, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.3824758982113199, 6);
  sqcRYGate(q, -0.15150342897353528, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.026791224411855264, 6);
  sqcRYGate(q, 0.0004904118746118513, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.7503163435963212, 8);
  sqcRYGate(q, -2.0286818943471334, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.5712617899192605, 8);
  sqcRYGate(q, 1.561788135789766, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.08033803165842071, 1);
  sqcRYGate(q, 2.2099828309499854, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4470221224128736, 1);
  sqcRYGate(q, -0.4352073499203639, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4560857394968894, 3);
  sqcRYGate(q, 0.5845520814358954, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.030299283775646835, 3);
  sqcRYGate(q, -3.1195282058832876, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.5082467189536404, 5);
  sqcRYGate(q, 1.5748807634402682, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5757331516168158, 5);
  sqcRYGate(q, 3.1385130867806312, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4742807643709683, 7);
  sqcRYGate(q, -3.007554471363015, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.5520316333167359, 7);
  sqcRYGate(q, -0.002748999919408135, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.5737566217184449, 9);
  sqcRYGate(q, -1.490758783426941, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.5586741462115616, 9);
  sqcRYGate(q, -1.4992610563628563, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.6960203200045412, 0);
  sqcRYGate(q, 0.3485279144199206, 1);
  sqcRYGate(q, -2.9846117829093273, 2);
  sqcRYGate(q, 1.7361691226729037, 3);
  sqcRYGate(q, -0.3657854879884718, 4);
  sqcRYGate(q, 1.6466277018152677, 5);
  sqcRYGate(q, -2.971934170353682, 6);
  sqcRYGate(q, 1.665031684038409, 7);
  sqcRYGate(q, -0.07596420461648455, 8);
  sqcRYGate(q, 1.5661193687060881, 9);
  sqcRYGate(q, -1.5693783550140223, 10);
  sqcRYGate(q, -1.5574394863128669, 11);

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
