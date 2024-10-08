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

  sqcRYGate(q, -1.2945858498442044, 0);
  sqcRYGate(q, -0.19780922787651445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0977361106898194, 0);
  sqcRYGate(q, 3.035803295266896, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.28843900242795356, 1);
  sqcRYGate(q, -2.690553766620266, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.468093230982433, 1);
  sqcRYGate(q, 1.1575926873186067, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9879932634713369, 2);
  sqcRYGate(q, -1.5305594172187302, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7620967794394327, 2);
  sqcRYGate(q, -3.1241273910850724, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6057141764575668, 3);
  sqcRYGate(q, -3.0966640859289307, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1916878250313054, 3);
  sqcRYGate(q, 1.0447350451387731, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9898254925973675, 4);
  sqcRYGate(q, -2.2160407162815847, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7077748911771788, 4);
  sqcRYGate(q, -1.633142449318818, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0665794291227737, 5);
  sqcRYGate(q, -0.3521421754634897, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8168396241758276e-05, 5);
  sqcRYGate(q, -0.00018632109869809454, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.26521159962887264, 6);
  sqcRYGate(q, 2.8109346669700765, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3024693855941956, 6);
  sqcRYGate(q, 2.263030753549499, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4464503991852581, 7);
  sqcRYGate(q, -2.10762696024803, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9776091784873886, 7);
  sqcRYGate(q, -0.025709967437649344, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.6394834867386089, 8);
  sqcRYGate(q, 3.0651173936708167, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.0021964020208020685, 8);
  sqcRYGate(q, -1.593224995225116, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.3509177274963333, 9);
  sqcRYGate(q, -0.3987225687192586, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.087000359284185, 9);
  sqcRYGate(q, -1.2116200000990105, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9221545807665208, 10);
  sqcRYGate(q, -1.6179235658355409, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.898951381932334, 10);
  sqcRYGate(q, -3.0960705263354424, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.4208483367184983, 0);
  sqcRYGate(q, 0.5886589862273439, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.631503129512912, 0);
  sqcRYGate(q, 1.1845819663309003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8451959844483163, 1);
  sqcRYGate(q, -1.6491237914048176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1168806965204943, 1);
  sqcRYGate(q, -3.061194794777545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6360239263043674, 2);
  sqcRYGate(q, -0.7373035446165526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7502709112322733, 2);
  sqcRYGate(q, 2.264192593531861, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2173748559471282, 3);
  sqcRYGate(q, -1.2803969367263166, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.020018501240982558, 3);
  sqcRYGate(q, 3.1392692955397323, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6981874466653322, 4);
  sqcRYGate(q, -1.6905730977803355, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2898665967625682, 4);
  sqcRYGate(q, -2.944511536935562, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4963686312430897, 5);
  sqcRYGate(q, 0.6509122650141065, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.14541202670104256, 5);
  sqcRYGate(q, -0.04837773429389358, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4340305547010086, 6);
  sqcRYGate(q, -2.342793117984077, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1273649697600296, 6);
  sqcRYGate(q, -3.1397756137103725, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0404061693503674, 7);
  sqcRYGate(q, -2.102762439022545, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6488336734757743, 7);
  sqcRYGate(q, 0.06465150078689152, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.45756157213355353, 8);
  sqcRYGate(q, 0.4240391421634781, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.8125733567831936, 8);
  sqcRYGate(q, 1.1001039565934072, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.07671697058250296, 9);
  sqcRYGate(q, -0.7669550844435227, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.532053292912465, 9);
  sqcRYGate(q, 0.8384615016414593, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.033205582679553, 10);
  sqcRYGate(q, 1.2858146391977479, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.042146440302162, 10);
  sqcRYGate(q, 3.0507697782833185, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0343619430252646, 0);
  sqcRYGate(q, 2.284802602762888, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.860806374155767, 0);
  sqcRYGate(q, -3.137626443590681, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9131619861680447, 1);
  sqcRYGate(q, 1.80348216792816, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5921968531419354, 1);
  sqcRYGate(q, 0.44137360217082044, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.658509003723528, 2);
  sqcRYGate(q, 0.17268618686287088, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.44091017563812773, 2);
  sqcRYGate(q, 1.0766382023045535, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9972837913370842, 3);
  sqcRYGate(q, 1.1926163348035215, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1385179391677696, 3);
  sqcRYGate(q, -3.1353898072589117, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.899057329987738, 4);
  sqcRYGate(q, 1.0629796335889916, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.023598819027449, 4);
  sqcRYGate(q, -1.1928274891882427, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2094961187208548, 5);
  sqcRYGate(q, 2.6833644442596927, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9789588624988985, 5);
  sqcRYGate(q, -0.139168452626512, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1098280689389153, 6);
  sqcRYGate(q, -1.6624783781943426, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0002021447049740388, 6);
  sqcRYGate(q, 0.00012840964710465278, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.94728468339997, 7);
  sqcRYGate(q, 2.7309315266362466, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.062740524868186, 7);
  sqcRYGate(q, -2.203637140085935, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.75730949412087, 8);
  sqcRYGate(q, -0.822988566050399, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7057106152921857, 8);
  sqcRYGate(q, 0.7616842571195797, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9999097865341047, 9);
  sqcRYGate(q, -2.0926111876641262, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4499242009308926, 9);
  sqcRYGate(q, -3.017466051318228, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.496153057755012, 10);
  sqcRYGate(q, 0.8900461694473423, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.36840462273421726, 10);
  sqcRYGate(q, -0.01895992603473129, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.004443238185638, 0);
  sqcRYGate(q, 1.4484548297523077, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5300936916902, 0);
  sqcRYGate(q, 1.3894473039281403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.14694639335930917, 1);
  sqcRYGate(q, 0.3539106877046061, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9726859638328915, 1);
  sqcRYGate(q, -0.604673618803715, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8518494076044254, 2);
  sqcRYGate(q, -1.8534259033304226, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0234575540089308, 2);
  sqcRYGate(q, 2.196968663789575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8788773003508155, 3);
  sqcRYGate(q, -2.798386914373921, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.02140566586886994, 3);
  sqcRYGate(q, 0.055090593254707686, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.742280524159879, 4);
  sqcRYGate(q, 1.6767192712333718, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1040899126514434, 4);
  sqcRYGate(q, 0.8755499962655504, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4636251743812778, 5);
  sqcRYGate(q, 0.989149735251689, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9116845510871128, 5);
  sqcRYGate(q, 2.931945673704461, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4916728111168993, 6);
  sqcRYGate(q, 0.01496310882266716, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.008604653950984087, 6);
  sqcRYGate(q, 0.01118595887068441, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.027838090094365, 7);
  sqcRYGate(q, -2.1987827630620487, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.398424479483379, 7);
  sqcRYGate(q, -0.39456147554597276, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5266096762678873, 8);
  sqcRYGate(q, -2.563589139630952, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5708191201225596, 8);
  sqcRYGate(q, 2.056157447134795, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6684839732414065, 9);
  sqcRYGate(q, 2.628615087830017, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.7684068449483831, 9);
  sqcRYGate(q, 0.6422994914705367, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.8513929516250274, 10);
  sqcRYGate(q, 2.2413890497880375, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.04425652132233432, 10);
  sqcRYGate(q, 2.9653108204283556, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4103198632074259, 0);
  sqcRYGate(q, 0.925856611148812, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9355736684784937, 0);
  sqcRYGate(q, 2.395804860685368, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.616675714917171, 1);
  sqcRYGate(q, 2.9183162851056945, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.836634679856262, 1);
  sqcRYGate(q, -2.86997435098517, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.33672932780249, 2);
  sqcRYGate(q, -0.4756742368226862, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.211034857797869, 2);
  sqcRYGate(q, -0.0664909717840679, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.508407449164584, 3);
  sqcRYGate(q, -0.8021877543102947, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.24463187897053373, 3);
  sqcRYGate(q, 3.099086947147784, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2274133057896233, 4);
  sqcRYGate(q, 0.7432082112094509, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.37652215800883654, 4);
  sqcRYGate(q, -2.788760957507305, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0472017000038845, 5);
  sqcRYGate(q, -0.6585522553356479, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.019541876488233356, 5);
  sqcRYGate(q, 0.0352147043435032, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7858784292388767, 6);
  sqcRYGate(q, 2.60353287917592, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.08981243825056608, 6);
  sqcRYGate(q, -0.768113380758904, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.500118097818258, 7);
  sqcRYGate(q, 2.137231014490892, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.6778741810024926, 7);
  sqcRYGate(q, 3.1332981017479082, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.1845237465795995, 8);
  sqcRYGate(q, -3.1190851946513263, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.833272398845652, 8);
  sqcRYGate(q, -0.42461508603539716, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.15300317517312176, 9);
  sqcRYGate(q, -1.8927023577686768, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.954773930767132, 9);
  sqcRYGate(q, -2.1788067372638547, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.193665467038679, 10);
  sqcRYGate(q, -1.8201917401341552, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8518217587911585, 10);
  sqcRYGate(q, -3.0787620720865316, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.9377120081427146, 0);
  sqcRYGate(q, 1.6973049252274128, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5141544030620717, 0);
  sqcRYGate(q, -0.1417825054124071, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9319821628433416, 1);
  sqcRYGate(q, -2.907629022439149, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0692276625843435, 1);
  sqcRYGate(q, 3.1343548357162723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.897477253687394, 2);
  sqcRYGate(q, -1.2298502343711613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.034146676631205, 2);
  sqcRYGate(q, 1.7044312598697946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.18961690922765495, 3);
  sqcRYGate(q, 0.6141335262162319, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.03791428083409798, 3);
  sqcRYGate(q, -2.2407761188211364, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.716372065105694, 4);
  sqcRYGate(q, -2.2119174256840575, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.44948115360549384, 4);
  sqcRYGate(q, 1.7727203704310497, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3413994428129006, 5);
  sqcRYGate(q, 2.6519604004610215, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0014796374311911947, 5);
  sqcRYGate(q, 0.0016739472862471255, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5524496166607147, 6);
  sqcRYGate(q, -2.9995267634458243, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7288028141797005, 6);
  sqcRYGate(q, -2.644217815195821, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.516213794215565, 7);
  sqcRYGate(q, 2.348544127460342, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.32022786973244133, 7);
  sqcRYGate(q, -2.8880727313060968, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9868550739925506, 8);
  sqcRYGate(q, 1.7273951012214148, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8248508979624418, 8);
  sqcRYGate(q, 0.38004757869339034, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0136598153376921, 9);
  sqcRYGate(q, -0.26288209340419755, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9279982639019146, 9);
  sqcRYGate(q, -3.0390954420994527, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.0990775941869613, 10);
  sqcRYGate(q, 2.6252165921628454, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2512110442917184, 10);
  sqcRYGate(q, 0.7102341395332896, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.7206641122424697, 0);
  sqcRYGate(q, -0.228176048644466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5204178799390817, 0);
  sqcRYGate(q, 0.8504229517415762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5350270505197932, 1);
  sqcRYGate(q, -0.6111248922487791, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2362938090736761, 1);
  sqcRYGate(q, 2.7369120330564654, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0416498363711506, 2);
  sqcRYGate(q, -0.4215751038143221, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.029535729459813826, 2);
  sqcRYGate(q, -0.08047019719278305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9209831269412303, 3);
  sqcRYGate(q, -0.5106476904554382, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.13982347629201988, 3);
  sqcRYGate(q, -0.08915106532281732, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.099042351896852, 4);
  sqcRYGate(q, 2.706922292425283, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3423477217832591, 4);
  sqcRYGate(q, -2.1653440545115257, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4607664403466192, 5);
  sqcRYGate(q, -3.025875501478918, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1411526833627983, 5);
  sqcRYGate(q, 0.6075105014626283, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.40008069686948655, 6);
  sqcRYGate(q, 1.441193502997323, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8041434364430045, 6);
  sqcRYGate(q, -0.0009525706384092558, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5412212571361152, 7);
  sqcRYGate(q, -0.5863191770002221, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.06223032549538399, 7);
  sqcRYGate(q, -0.5552197436730921, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.26206653848979017, 8);
  sqcRYGate(q, -0.9301031601524095, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3815867534782835, 8);
  sqcRYGate(q, -2.4236755957004377, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6600548823369206, 9);
  sqcRYGate(q, 1.4591453853869227, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.7485942357441666, 9);
  sqcRYGate(q, -0.5433957090532957, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.5528382237344407, 10);
  sqcRYGate(q, 2.000043525838949, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.90955636058983, 10);
  sqcRYGate(q, -1.6802057290988328, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.866688325536244, 0);
  sqcRYGate(q, -1.0092518302324835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.825254070736895, 0);
  sqcRYGate(q, -0.03270308022844508, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.257749310396667, 1);
  sqcRYGate(q, 2.936721997723705, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4315252170270769, 1);
  sqcRYGate(q, -2.469003370342011, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.026363293984965, 2);
  sqcRYGate(q, 0.7131799596980855, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5802606656004876, 2);
  sqcRYGate(q, 0.49780225606622786, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3789106119474077, 3);
  sqcRYGate(q, -1.5565852895045886, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.00167600481959429, 3);
  sqcRYGate(q, 0.002035346607272892, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.615281845915466, 4);
  sqcRYGate(q, -1.5585470534529993, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3326182600721777, 4);
  sqcRYGate(q, -0.04532803170287458, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5807517136321338, 5);
  sqcRYGate(q, 2.51480838572636, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.006779465148386304, 5);
  sqcRYGate(q, 0.6381458161510603, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.18280606572381317, 6);
  sqcRYGate(q, -0.33462018338264254, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.032507228042790715, 6);
  sqcRYGate(q, 0.19129479446371336, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4216734686603555, 7);
  sqcRYGate(q, 1.6076618689161446, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.545814142361309, 7);
  sqcRYGate(q, -0.32174343828422636, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0459519391619665, 8);
  sqcRYGate(q, -1.954884671590878, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.0588700789454375, 8);
  sqcRYGate(q, 0.013278167147483089, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5777389927573162, 9);
  sqcRYGate(q, -1.7921593234713358, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.37419278948486695, 9);
  sqcRYGate(q, -0.1565760910926679, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.6205619758026977, 10);
  sqcRYGate(q, -2.403807930569134, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3303005447478728, 10);
  sqcRYGate(q, 0.6670205418626095, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.858102437106719, 0);
  sqcRYGate(q, -1.4951452237150238, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.14053884094312905, 0);
  sqcRYGate(q, 0.2822814864994478, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.853595974960971, 1);
  sqcRYGate(q, 2.4485257376086476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2059130406526464, 1);
  sqcRYGate(q, 0.7348246624192676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0280789948193245, 2);
  sqcRYGate(q, -2.0126353170981104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7668585692761205, 2);
  sqcRYGate(q, -0.047729951166736964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13124534325139336, 3);
  sqcRYGate(q, -1.140883461253464, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1393710109537034, 3);
  sqcRYGate(q, -0.0013377570431633182, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8495569506675003, 4);
  sqcRYGate(q, -1.7653949274202567, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.013724140523887, 4);
  sqcRYGate(q, -2.2921949146364833, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7836846664574422, 5);
  sqcRYGate(q, -1.6325911851079462, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8799420532033486, 5);
  sqcRYGate(q, 3.1406811675329704, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4915497519072225, 6);
  sqcRYGate(q, -1.0223854064160083, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.04810885690771727, 6);
  sqcRYGate(q, 3.114846278058912, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3414073988562754, 7);
  sqcRYGate(q, -1.7142074147308364, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0977124718038116, 7);
  sqcRYGate(q, -2.7729178661091947, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7874123917244847, 8);
  sqcRYGate(q, 0.38751310640244535, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.03228616817609708, 8);
  sqcRYGate(q, 3.12778554119645, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0801655478575483, 9);
  sqcRYGate(q, -3.103544790315646, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.7936294180527466, 9);
  sqcRYGate(q, -0.01617295287536312, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.01968493893187, 10);
  sqcRYGate(q, 1.8442649763894017, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0307923760594697, 10);
  sqcRYGate(q, 1.334077505346241, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.888035634154531, 0);
  sqcRYGate(q, 2.927929399743922, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8062067856930777, 0);
  sqcRYGate(q, -0.6602901345342085, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.544545258544324, 1);
  sqcRYGate(q, 0.7644187146670278, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.110526159651335, 1);
  sqcRYGate(q, 1.1679920400800694, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5242137905077211, 2);
  sqcRYGate(q, -2.7379579935348866, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.057309806943578, 2);
  sqcRYGate(q, 0.30403664254349483, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8607652200108598, 3);
  sqcRYGate(q, -0.5318396208473253, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.034300686292276, 3);
  sqcRYGate(q, 0.01621523194668183, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5329537388844823, 4);
  sqcRYGate(q, -2.122392227001492, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0929427105447154, 4);
  sqcRYGate(q, -1.18118816485058, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.661722378171419, 5);
  sqcRYGate(q, 1.4209515330053897, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.04347338002766234, 5);
  sqcRYGate(q, 3.138714240802348, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2878397955700265, 6);
  sqcRYGate(q, -0.42974258342260113, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.092217912558014, 6);
  sqcRYGate(q, 2.791664326206164, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7698550741194179, 7);
  sqcRYGate(q, -1.4585659951617505, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.15887272788864149, 7);
  sqcRYGate(q, 2.4507605503200223, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.1543179584054246, 8);
  sqcRYGate(q, 2.6245475827128417, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.083132317900874, 8);
  sqcRYGate(q, 3.122121245993263, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3675365426257606, 9);
  sqcRYGate(q, 2.9789604023783145, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.07983298833376219, 9);
  sqcRYGate(q, -0.22756421148846362, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.012171118811259, 10);
  sqcRYGate(q, 1.6708654390308475, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.572084352471413, 10);
  sqcRYGate(q, -0.9977588429758892, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4664832444383178, 0);
  sqcRYGate(q, -0.6041623693140663, 1);
  sqcRYGate(q, 2.329173420942623, 2);
  sqcRYGate(q, -1.3023327682352024, 3);
  sqcRYGate(q, -3.0902649486329774, 4);
  sqcRYGate(q, -1.4260128885996561, 5);
  sqcRYGate(q, -3.1302424842276135, 6);
  sqcRYGate(q, 3.0796528716189724, 7);
  sqcRYGate(q, 1.8459654291688163, 8);
  sqcRYGate(q, -1.733690979567423, 9);
  sqcRYGate(q, -0.23617886881393702, 10);
  sqcRYGate(q, 1.5749299176337026, 11);

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
