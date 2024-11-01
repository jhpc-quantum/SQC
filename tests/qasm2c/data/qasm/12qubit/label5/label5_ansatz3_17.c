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

  sqcRYGate(q, -1.3262193837387815, 0);
  sqcRZGate(q, 0.7584163820883028, 0);
  sqcRYGate(q, 1.419300931032724, 1);
  sqcRZGate(q, -1.9887520139467947, 1);
  sqcRYGate(q, -1.9026105119960883, 2);
  sqcRZGate(q, 1.5527263192725735, 2);
  sqcRYGate(q, 1.2938960119065135, 3);
  sqcRZGate(q, 3.0808507125699545, 3);
  sqcRYGate(q, 2.7090508743216937, 4);
  sqcRZGate(q, 1.1042083574725705, 4);
  sqcRYGate(q, 1.497628900370315, 5);
  sqcRZGate(q, -0.993122480958859, 5);
  sqcRYGate(q, -3.095152755713634, 6);
  sqcRZGate(q, 0.8944701326689616, 6);
  sqcRYGate(q, -3.1280212170345516, 7);
  sqcRZGate(q, 1.541413862871405, 7);
  sqcRYGate(q, -0.0005290173568059942, 8);
  sqcRZGate(q, -2.0603305050816263, 8);
  sqcRYGate(q, -0.64984890093391, 9);
  sqcRZGate(q, 2.487340359984265, 9);
  sqcRYGate(q, -1.274618642798325, 10);
  sqcRZGate(q, 1.1849238544927856, 10);
  sqcRYGate(q, 3.127671563773377, 11);
  sqcRZGate(q, 3.10929535139607, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.362883795067, 0);
  sqcRZGate(q, -2.3887782508912636, 0);
  sqcRYGate(q, 2.029075132888777, 1);
  sqcRZGate(q, 2.1658823766058886, 1);
  sqcRYGate(q, -2.0003510264221767, 2);
  sqcRZGate(q, -0.9607363780551033, 2);
  sqcRYGate(q, -0.7851358337999289, 3);
  sqcRZGate(q, -3.019722062677852, 3);
  sqcRYGate(q, 0.0771748320224992, 4);
  sqcRZGate(q, 2.6422280975907038, 4);
  sqcRYGate(q, 0.37736896834439815, 5);
  sqcRZGate(q, -2.758344932605004, 5);
  sqcRYGate(q, 3.1246397691819525, 6);
  sqcRZGate(q, 1.6877717557595446, 6);
  sqcRYGate(q, -2.529255474640175, 7);
  sqcRZGate(q, -0.548104049753621, 7);
  sqcRYGate(q, 1.565910509339492, 8);
  sqcRZGate(q, 3.1328540008068213, 8);
  sqcRYGate(q, 2.0667019587657576, 9);
  sqcRZGate(q, -0.67418444008287, 9);
  sqcRYGate(q, 0.434443431733001, 10);
  sqcRZGate(q, 0.6578039122893733, 10);
  sqcRYGate(q, 1.5720100953612022, 11);
  sqcRZGate(q, 1.4038917015548928, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.7754925417530726, 0);
  sqcRZGate(q, 0.30538134171073034, 0);
  sqcRYGate(q, -1.3479913243988624, 1);
  sqcRZGate(q, -0.32536941101953776, 1);
  sqcRYGate(q, -0.6559517595873237, 2);
  sqcRZGate(q, 0.29276042551305537, 2);
  sqcRYGate(q, 1.3488267802840026, 3);
  sqcRZGate(q, -1.3280686473860366, 3);
  sqcRYGate(q, 3.1344658929864986, 4);
  sqcRZGate(q, -0.021399790897710793, 4);
  sqcRYGate(q, -0.006998875699359896, 5);
  sqcRZGate(q, -2.8748224494301446, 5);
  sqcRYGate(q, -0.0009126453321357941, 6);
  sqcRZGate(q, -2.0341978394824496, 6);
  sqcRYGate(q, 1.7515079932366124, 7);
  sqcRZGate(q, 2.086651130529442, 7);
  sqcRYGate(q, 1.5753310264326332, 8);
  sqcRZGate(q, -2.937375542426908, 8);
  sqcRYGate(q, 2.922639077712493, 9);
  sqcRZGate(q, -1.1700475940982011, 9);
  sqcRYGate(q, 1.332771598071389, 10);
  sqcRZGate(q, 1.515376839160509, 10);
  sqcRYGate(q, -3.108254975903238, 11);
  sqcRZGate(q, 1.4865346762710818, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.2578240121114552, 0);
  sqcRZGate(q, 1.2534217212548748, 0);
  sqcRYGate(q, -0.9695738837162508, 1);
  sqcRZGate(q, 1.8851443098231881, 1);
  sqcRYGate(q, 0.4721944923069053, 2);
  sqcRZGate(q, -1.2696222027307114, 2);
  sqcRYGate(q, 2.0673812251152874, 3);
  sqcRZGate(q, -2.5235624801500993, 3);
  sqcRYGate(q, 0.23694457316302206, 4);
  sqcRZGate(q, -3.018918220772734, 4);
  sqcRYGate(q, 0.09894861986446905, 5);
  sqcRZGate(q, 0.187120945081551, 5);
  sqcRYGate(q, -3.140267469233141, 6);
  sqcRZGate(q, 1.1634753708014387, 6);
  sqcRYGate(q, 1.865363943253477, 7);
  sqcRZGate(q, 1.214303260593426, 7);
  sqcRYGate(q, 0.012528007986599476, 8);
  sqcRZGate(q, -1.7418704391038338, 8);
  sqcRYGate(q, -0.005013939952034363, 9);
  sqcRZGate(q, 3.0110950803241194, 9);
  sqcRYGate(q, -1.5652656268983192, 10);
  sqcRZGate(q, -1.9859238473113994, 10);
  sqcRYGate(q, 0.013824145489365012, 11);
  sqcRZGate(q, -1.6625777180619166, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.28664982746768697, 0);
  sqcRZGate(q, 0.6520316918258057, 0);
  sqcRYGate(q, 2.129833733147241, 1);
  sqcRZGate(q, 0.1823422079429626, 1);
  sqcRYGate(q, -2.2743252066875224, 2);
  sqcRZGate(q, -2.208944051922103, 2);
  sqcRYGate(q, -0.38444802237724235, 3);
  sqcRZGate(q, -2.4039098650440636, 3);
  sqcRYGate(q, -0.005552895119989465, 4);
  sqcRZGate(q, 0.19244327530169691, 4);
  sqcRYGate(q, 1.6073199783642926, 5);
  sqcRZGate(q, 1.523111765389272, 5);
  sqcRYGate(q, -3.133942298024729, 6);
  sqcRZGate(q, 1.7009470095533328, 6);
  sqcRYGate(q, 1.6656576554302145, 7);
  sqcRZGate(q, -0.363436439857202, 7);
  sqcRYGate(q, -1.5351019763939906, 8);
  sqcRZGate(q, 1.6586636539708917, 8);
  sqcRYGate(q, -1.5259438700280548, 9);
  sqcRZGate(q, -2.437491208677863, 9);
  sqcRYGate(q, 3.1375450699185827, 10);
  sqcRZGate(q, 1.3643591133862394, 10);
  sqcRYGate(q, -1.550282533720443, 11);
  sqcRZGate(q, 2.2129850190505267, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.023244812183837088, 0);
  sqcRZGate(q, -2.3505265852927146, 0);
  sqcRYGate(q, 2.0655740021146896, 1);
  sqcRZGate(q, -1.861946257877009, 1);
  sqcRYGate(q, -3.070228699690358, 2);
  sqcRZGate(q, -2.991053327341345, 2);
  sqcRYGate(q, 3.1395126002796587, 3);
  sqcRZGate(q, -2.390428349346752, 3);
  sqcRYGate(q, -0.0002268778365875084, 4);
  sqcRZGate(q, -2.635292486044738, 4);
  sqcRYGate(q, -3.0304281713413523, 5);
  sqcRZGate(q, -3.0888309380423826, 5);
  sqcRYGate(q, -3.137722048326306, 6);
  sqcRZGate(q, 1.6846675531543764, 6);
  sqcRYGate(q, -2.5065527615257026, 7);
  sqcRZGate(q, 1.742111590162832, 7);
  sqcRYGate(q, 1.7131693819447262, 8);
  sqcRZGate(q, -2.8329440702620694, 8);
  sqcRYGate(q, -0.31374459080226735, 9);
  sqcRZGate(q, 1.7922571361841744, 9);
  sqcRYGate(q, 0.46491082169326164, 10);
  sqcRZGate(q, -0.2897009213434636, 10);
  sqcRYGate(q, 1.005614677548313, 11);
  sqcRZGate(q, 2.442636383000382, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.4923135085489303, 0);
  sqcRZGate(q, 2.8139593904139644, 0);
  sqcRYGate(q, -1.6093686026276648, 1);
  sqcRZGate(q, -2.8351254343819066, 1);
  sqcRYGate(q, 2.5978180327064995, 2);
  sqcRZGate(q, -1.7566842635867306, 2);
  sqcRYGate(q, 2.3945032687214347, 3);
  sqcRZGate(q, 1.1505815382449567, 3);
  sqcRYGate(q, 2.934894512906859, 4);
  sqcRZGate(q, 2.535692342380607, 4);
  sqcRYGate(q, -1.5828212040669314, 5);
  sqcRZGate(q, -2.2923084734256736, 5);
  sqcRYGate(q, -2.513743637773775, 6);
  sqcRZGate(q, -2.6474003699960154, 6);
  sqcRYGate(q, 1.4603754574639185, 7);
  sqcRZGate(q, 1.6031792636014481, 7);
  sqcRYGate(q, 0.013895145082039484, 8);
  sqcRZGate(q, 2.834349877621832, 8);
  sqcRYGate(q, -0.0007111990977737271, 9);
  sqcRZGate(q, -0.910677423112291, 9);
  sqcRYGate(q, -3.132166249623948, 10);
  sqcRZGate(q, 2.9074479659679158, 10);
  sqcRYGate(q, 0.0025235408399257864, 11);
  sqcRZGate(q, 1.9079338239679604, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -3.1375376367511914, 0);
  sqcRZGate(q, 0.5373862797548743, 0);
  sqcRYGate(q, 0.7465255666776792, 1);
  sqcRZGate(q, 0.5771652173817452, 1);
  sqcRYGate(q, 2.205426015113254, 2);
  sqcRZGate(q, 2.2169681237372254, 2);
  sqcRYGate(q, 0.00861319308055934, 3);
  sqcRZGate(q, -0.5745444836804544, 3);
  sqcRYGate(q, -3.136454564718529, 4);
  sqcRZGate(q, -1.2311537126272682, 4);
  sqcRYGate(q, -3.1154894575236387, 5);
  sqcRZGate(q, 2.2054065856992557, 5);
  sqcRYGate(q, -0.0018738458862355145, 6);
  sqcRZGate(q, 0.921700159097143, 6);
  sqcRYGate(q, 3.092228372122784, 7);
  sqcRZGate(q, 1.8537497081017573, 7);
  sqcRYGate(q, -1.6888765857444856, 8);
  sqcRZGate(q, 2.2750925338222756, 8);
  sqcRYGate(q, 2.893823316139086, 9);
  sqcRZGate(q, 3.058488299379748, 9);
  sqcRYGate(q, 0.5710177905748326, 10);
  sqcRZGate(q, -2.986877940080072, 10);
  sqcRYGate(q, 1.257920013035902, 11);
  sqcRZGate(q, 0.7074271094836071, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.100844029954313, 0);
  sqcRZGate(q, 0.46622343101499897, 0);
  sqcRYGate(q, 0.6007175479337316, 1);
  sqcRZGate(q, -0.5508698780738369, 1);
  sqcRYGate(q, 1.8531174214802375, 2);
  sqcRZGate(q, 1.8145131380844153, 2);
  sqcRYGate(q, -2.1231506185256297, 3);
  sqcRZGate(q, -1.034260928984604, 3);
  sqcRYGate(q, 0.160183172607465, 4);
  sqcRZGate(q, 3.121032129835782, 4);
  sqcRYGate(q, -2.5684985535080576, 5);
  sqcRZGate(q, -2.9987464271747912, 5);
  sqcRYGate(q, 2.2858984589862996, 6);
  sqcRZGate(q, -0.973302352706293, 6);
  sqcRYGate(q, -0.9821003759439744, 7);
  sqcRZGate(q, -3.1399834903828623, 7);
  sqcRYGate(q, -3.0387126170900403, 8);
  sqcRZGate(q, -1.8028824714294398, 8);
  sqcRYGate(q, 1.5654071830289942, 9);
  sqcRZGate(q, 1.6278826654114988, 9);
  sqcRYGate(q, -1.5732921240028128, 10);
  sqcRZGate(q, -0.7904713174689131, 10);
  sqcRYGate(q, -0.6060561234938007, 11);
  sqcRZGate(q, -2.8416996463974176, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.746843048167161, 0);
  sqcRZGate(q, -1.8025421663106966, 0);
  sqcRYGate(q, -1.627948911761278, 1);
  sqcRZGate(q, 0.33848565865676855, 1);
  sqcRYGate(q, 1.0882079354294296, 2);
  sqcRZGate(q, -0.6327299993409998, 2);
  sqcRYGate(q, -3.136321434044125, 3);
  sqcRZGate(q, -3.003095888332034, 3);
  sqcRYGate(q, 3.1365145993744363, 4);
  sqcRZGate(q, -2.1358129273564064, 4);
  sqcRYGate(q, -0.06887225770495853, 5);
  sqcRZGate(q, -3.038684928740653, 5);
  sqcRYGate(q, -3.127401270344367, 6);
  sqcRZGate(q, -0.6907991158945928, 6);
  sqcRYGate(q, 3.1284779968423218, 7);
  sqcRZGate(q, -2.5739269765863604, 7);
  sqcRYGate(q, 0.00474572531824961, 8);
  sqcRZGate(q, 0.9343964618596966, 8);
  sqcRYGate(q, -0.005112533350964732, 9);
  sqcRZGate(q, -1.2436300361032042, 9);
  sqcRYGate(q, -0.013976400757481855, 10);
  sqcRZGate(q, 2.3603364581536033, 10);
  sqcRYGate(q, 1.8788344301462538, 11);
  sqcRZGate(q, 0.9004204284674594, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.419076795143021, 0);
  sqcRZGate(q, -1.8522023530169178, 0);
  sqcRYGate(q, 0.9732401108074461, 1);
  sqcRZGate(q, 2.9882787883103012, 1);
  sqcRYGate(q, -2.54692956614022, 2);
  sqcRZGate(q, -1.3283832843153496, 2);
  sqcRYGate(q, 2.760203375994945, 3);
  sqcRZGate(q, -0.37018844418857183, 3);
  sqcRYGate(q, -0.8507593546202313, 4);
  sqcRZGate(q, -2.9303138632438386, 4);
  sqcRYGate(q, 0.4368550351594168, 5);
  sqcRZGate(q, -0.7302463508372785, 5);
  sqcRYGate(q, -0.7299358991746294, 6);
  sqcRZGate(q, 1.6027120676917113, 6);
  sqcRYGate(q, -2.6289234170843883, 7);
  sqcRZGate(q, 2.8822089893334613, 7);
  sqcRYGate(q, -1.51084343046949, 8);
  sqcRZGate(q, 1.6682489908978455, 8);
  sqcRYGate(q, 0.02909308494951457, 9);
  sqcRZGate(q, 1.2297389133118601, 9);
  sqcRYGate(q, 0.0018320480256636663, 10);
  sqcRZGate(q, 3.138236676667499, 10);
  sqcRYGate(q, 1.1398687836170405, 11);
  sqcRZGate(q, -0.005638861929657382, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.768410059077019, 0);
  sqcRZGate(q, -0.1733785358826464, 0);
  sqcRYGate(q, 2.4352486669727806, 1);
  sqcRZGate(q, 2.336493957264833, 1);
  sqcRYGate(q, 1.7360583208201987, 2);
  sqcRZGate(q, 0.09475328624640156, 2);
  sqcRYGate(q, -0.008072843693075822, 3);
  sqcRZGate(q, 0.7434094140951516, 3);
  sqcRYGate(q, 3.1400976394154427, 4);
  sqcRZGate(q, 1.7084320196540774, 4);
  sqcRYGate(q, 3.1204672492666963, 5);
  sqcRZGate(q, 2.048379568855173, 5);
  sqcRYGate(q, -0.003170239143191755, 6);
  sqcRZGate(q, 2.744157833387749, 6);
  sqcRYGate(q, -1.4270962205218636, 7);
  sqcRZGate(q, 0.5939739057972204, 7);
  sqcRYGate(q, -1.8501072181441645, 8);
  sqcRZGate(q, 3.13982934508212, 8);
  sqcRYGate(q, -1.564626063601711, 9);
  sqcRZGate(q, 1.528158164072607, 9);
  sqcRYGate(q, 1.5601346105884628, 10);
  sqcRZGate(q, 0.3080346796463986, 10);
  sqcRYGate(q, -1.294107780906014, 11);
  sqcRZGate(q, -1.8547070821860445, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.4757114005459337, 0);
  sqcRZGate(q, 3.074239661420573, 0);
  sqcRYGate(q, -0.341400322722345, 1);
  sqcRZGate(q, 0.2765572767725196, 1);
  sqcRYGate(q, 2.4256791829585302, 2);
  sqcRZGate(q, 1.221441075087597, 2);
  sqcRYGate(q, 1.6129634523518952, 3);
  sqcRZGate(q, 2.772618434881525, 3);
  sqcRYGate(q, 0.14463595802462065, 4);
  sqcRZGate(q, -2.761844865354398, 4);
  sqcRYGate(q, 0.0023344060203793764, 5);
  sqcRZGate(q, -2.259975195272654, 5);
  sqcRYGate(q, -0.0018966579582766123, 6);
  sqcRZGate(q, -1.3107455782915434, 6);
  sqcRYGate(q, 0.014268311006523149, 7);
  sqcRZGate(q, -0.5854497802784523, 7);
  sqcRYGate(q, -1.5643127138623614, 8);
  sqcRZGate(q, -3.1414769973626124, 8);
  sqcRYGate(q, 3.1076805984677995, 9);
  sqcRZGate(q, -2.572011608451771, 9);
  sqcRYGate(q, -0.006470556478476051, 10);
  sqcRZGate(q, -0.30366693103949594, 10);
  sqcRYGate(q, 1.5804376501178747, 11);
  sqcRZGate(q, -1.5755205532185763, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.7268187992903625, 0);
  sqcRZGate(q, 2.8183392365824087, 0);
  sqcRYGate(q, 0.6725361955123538, 1);
  sqcRZGate(q, 2.167343619830664, 1);
  sqcRYGate(q, -2.4223565751983593, 2);
  sqcRZGate(q, 3.0874325223590056, 2);
  sqcRYGate(q, 3.140167903095452, 3);
  sqcRZGate(q, 0.23121713459952975, 3);
  sqcRYGate(q, 2.2433524650316063, 4);
  sqcRZGate(q, -0.056516655696926314, 4);
  sqcRYGate(q, -0.1289206300193957, 5);
  sqcRZGate(q, -1.458230341109422, 5);
  sqcRYGate(q, -2.5794627646895414, 6);
  sqcRZGate(q, -1.5446023890194631, 6);
  sqcRYGate(q, -1.4310498898838404, 7);
  sqcRZGate(q, 2.101221603678601, 7);
  sqcRYGate(q, 1.285730748231836, 8);
  sqcRZGate(q, 0.518404516110584, 8);
  sqcRYGate(q, 0.0028823110623994452, 9);
  sqcRZGate(q, 0.7342931324969963, 9);
  sqcRYGate(q, 1.0594741099827862, 10);
  sqcRZGate(q, -1.6433874469785583, 10);
  sqcRYGate(q, -1.5718550401923543, 11);
  sqcRZGate(q, 1.904176832919612, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.6092412667107716, 0);
  sqcRZGate(q, -0.35385332918815754, 0);
  sqcRYGate(q, -3.0769061490283, 1);
  sqcRZGate(q, -2.2157295394541614, 1);
  sqcRYGate(q, 3.1349503574136492, 2);
  sqcRZGate(q, -1.5584220349323632, 2);
  sqcRYGate(q, 2.0231464991301364, 3);
  sqcRZGate(q, 2.69910697741378, 3);
  sqcRYGate(q, 3.132409085916046, 4);
  sqcRZGate(q, -2.1401022333974478, 4);
  sqcRYGate(q, -3.133123490877423, 5);
  sqcRZGate(q, 2.2446316146372274, 5);
  sqcRYGate(q, 1.0616203947870941, 6);
  sqcRZGate(q, 2.0478301122597022, 6);
  sqcRYGate(q, -0.0028471621664714064, 7);
  sqcRZGate(q, -1.6371705074096154, 7);
  sqcRYGate(q, -0.005640255493973179, 8);
  sqcRZGate(q, -1.707376707632207, 8);
  sqcRYGate(q, -0.35708416570674867, 9);
  sqcRZGate(q, -2.9044760344415463, 9);
  sqcRYGate(q, -1.6992704670996, 10);
  sqcRZGate(q, -1.5727468403212008, 10);
  sqcRYGate(q, 2.049273823609979, 11);
  sqcRZGate(q, 1.5917767801393814, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.1453031076339522, 0);
  sqcRZGate(q, -3.0271149045150683, 0);
  sqcRYGate(q, -1.0201852319119276, 1);
  sqcRZGate(q, -2.265725189651772, 1);
  sqcRYGate(q, -0.2642236443454147, 2);
  sqcRZGate(q, 2.968534276405515, 2);
  sqcRYGate(q, -0.011257277860152293, 3);
  sqcRZGate(q, -0.2970501071628964, 3);
  sqcRYGate(q, 2.212316098614333, 4);
  sqcRZGate(q, -2.0382716105932523, 4);
  sqcRYGate(q, -3.13463429354596, 5);
  sqcRZGate(q, 2.546747704442447, 5);
  sqcRYGate(q, -0.015331438548736842, 6);
  sqcRZGate(q, 1.0705727866905308, 6);
  sqcRYGate(q, -3.1395050752974627, 7);
  sqcRZGate(q, 3.1300487166540174, 7);
  sqcRYGate(q, -3.1354461644270706, 8);
  sqcRZGate(q, 1.9590744989995774, 8);
  sqcRYGate(q, -1.5789546541797204, 9);
  sqcRZGate(q, -3.07423265770004, 9);
  sqcRYGate(q, -1.768022646966993, 10);
  sqcRZGate(q, 0.12041059352079486, 10);
  sqcRYGate(q, -3.1225531923099017, 11);
  sqcRZGate(q, 2.415541881981939, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.1276537945989684, 0);
  sqcRZGate(q, -2.1009524679157305, 0);
  sqcRYGate(q, -0.3034484104408905, 1);
  sqcRZGate(q, 0.2680894710657605, 1);
  sqcRYGate(q, -1.4611824264009725, 2);
  sqcRZGate(q, -2.550057890603216, 2);
  sqcRYGate(q, -1.645938042072137, 3);
  sqcRZGate(q, -2.8238439580971018, 3);
  sqcRYGate(q, 0.001395166854757898, 4);
  sqcRZGate(q, 2.4170056928404637, 4);
  sqcRYGate(q, 1.7964998204225013, 5);
  sqcRZGate(q, -1.7951949078376783, 5);
  sqcRYGate(q, -0.8090531253026216, 6);
  sqcRZGate(q, 1.7044853046260369, 6);
  sqcRYGate(q, 3.1329711207054998, 7);
  sqcRZGate(q, -0.7294855052541902, 7);
  sqcRYGate(q, -1.5574199013040828, 8);
  sqcRZGate(q, -3.138334867850733, 8);
  sqcRYGate(q, -0.3343814485091992, 9);
  sqcRZGate(q, 1.0060522194318129, 9);
  sqcRYGate(q, -1.3566262255365051, 10);
  sqcRZGate(q, 2.442200038753051, 10);
  sqcRYGate(q, -3.1374194718576915, 11);
  sqcRZGate(q, -2.751959756142014, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.130955581968948, 0);
  sqcRZGate(q, 0.5790555690729011, 0);
  sqcRYGate(q, 0.05329543741664633, 1);
  sqcRZGate(q, 0.02896300118341699, 1);
  sqcRYGate(q, -3.0915936410898666, 2);
  sqcRZGate(q, -1.716476232814662, 2);
  sqcRYGate(q, 0.002976957908217059, 3);
  sqcRZGate(q, 0.07122813390730352, 3);
  sqcRYGate(q, 0.0017978253073639993, 4);
  sqcRZGate(q, -0.4152641476704308, 4);
  sqcRYGate(q, 1.3503025332083878, 5);
  sqcRZGate(q, 2.987109394088047, 5);
  sqcRYGate(q, 3.1404466466545355, 6);
  sqcRZGate(q, -3.014470978001946, 6);
  sqcRYGate(q, -0.00700216883110194, 7);
  sqcRZGate(q, -0.2962697983280287, 7);
  sqcRYGate(q, 3.1075997425767845, 8);
  sqcRZGate(q, 0.013468623371458648, 8);
  sqcRYGate(q, -0.02990533256151817, 9);
  sqcRZGate(q, 1.0389242742479263, 9);
  sqcRYGate(q, 1.5481046599055786, 10);
  sqcRZGate(q, 0.06274638303345588, 10);
  sqcRYGate(q, 3.1397532549730243, 11);
  sqcRZGate(q, -0.44420757625714735, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.03299800199891073, 0);
  sqcRZGate(q, 0.34477356637112927, 0);
  sqcRYGate(q, 3.111205159369246, 1);
  sqcRZGate(q, 1.4663148389879197, 1);
  sqcRYGate(q, -1.7656451624916008, 2);
  sqcRZGate(q, 3.1379802266397663, 2);
  sqcRYGate(q, 0.005403700672186712, 3);
  sqcRZGate(q, 2.5002704612761937, 3);
  sqcRYGate(q, -3.12962084233012, 4);
  sqcRZGate(q, 0.5005130854999846, 4);
  sqcRYGate(q, -0.7944622862090958, 5);
  sqcRZGate(q, 2.9801957297046022, 5);
  sqcRYGate(q, -1.5869486445569554, 6);
  sqcRZGate(q, -0.38403287506246464, 6);
  sqcRYGate(q, 3.0910322433984114, 7);
  sqcRZGate(q, -1.3716341990920933, 7);
  sqcRYGate(q, 1.3387271062094814, 8);
  sqcRZGate(q, 1.4348889947919083, 8);
  sqcRYGate(q, -3.1100378625342473, 9);
  sqcRZGate(q, -1.8256134308416025, 9);
  sqcRYGate(q, -2.9534842445451415, 10);
  sqcRZGate(q, 0.06557772568705678, 10);
  sqcRYGate(q, 2.3527496096678124, 11);
  sqcRZGate(q, -1.576745423206443, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.6145824779993325, 0);
  sqcRZGate(q, 1.7239389236536034, 0);
  sqcRYGate(q, -0.1438617365470236, 1);
  sqcRZGate(q, 0.34627282667639303, 1);
  sqcRYGate(q, 3.10099100184711, 2);
  sqcRZGate(q, 2.8899999800335032, 2);
  sqcRYGate(q, -3.1377454696200946, 3);
  sqcRZGate(q, -2.392948364509569, 3);
  sqcRYGate(q, -0.014721023174328883, 4);
  sqcRZGate(q, 0.09165960681216292, 4);
  sqcRYGate(q, -1.449510522853445, 5);
  sqcRZGate(q, -1.202289615964643, 5);
  sqcRYGate(q, -0.00026137153633865035, 6);
  sqcRZGate(q, 1.4054115397276092, 6);
  sqcRYGate(q, 0.25027515710509624, 7);
  sqcRZGate(q, -1.4133866435298275, 7);
  sqcRYGate(q, -0.00615910357548799, 8);
  sqcRZGate(q, -3.003321250615139, 8);
  sqcRYGate(q, -0.005200153010304519, 9);
  sqcRZGate(q, 2.5545743530804574, 9);
  sqcRYGate(q, 1.5715132827656173, 10);
  sqcRZGate(q, 1.5521318785560645, 10);
  sqcRYGate(q, -1.5638432601462404, 11);
  sqcRZGate(q, -3.086580587495611, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.012916092564442039, 0);
  sqcRZGate(q, 2.6825371689354585, 0);
  sqcRYGate(q, 0.060993078566059296, 1);
  sqcRZGate(q, 1.3297827398179525, 1);
  sqcRYGate(q, -2.2482867931713018, 2);
  sqcRZGate(q, -0.3353477777261578, 2);
  sqcRYGate(q, 1.4275399416703207, 3);
  sqcRZGate(q, 1.5616060377582075, 3);
  sqcRYGate(q, -3.1413435099904334, 4);
  sqcRZGate(q, -0.36504790894243594, 4);
  sqcRYGate(q, -1.5714127474364457, 5);
  sqcRZGate(q, -1.5018128329213132, 5);
  sqcRYGate(q, 0.000860149519389179, 6);
  sqcRZGate(q, 2.6757602409929504, 6);
  sqcRYGate(q, 0.0008715594042845239, 7);
  sqcRZGate(q, -0.3001473829652958, 7);
  sqcRYGate(q, -1.5707890231994803, 8);
  sqcRZGate(q, 2.107140145324432, 8);
  sqcRYGate(q, -3.1393768694221733, 9);
  sqcRZGate(q, -1.4890974208412313, 9);
  sqcRYGate(q, -1.568367044566302, 10);
  sqcRZGate(q, 2.101432443333106, 10);
  sqcRYGate(q, -0.20381798958893557, 11);
  sqcRZGate(q, 1.3871080605155868, 11);

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
