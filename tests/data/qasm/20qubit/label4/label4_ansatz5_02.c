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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -2.0325712320689595, 0);
  sqcRYGate(q, 2.6674071210430035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.891480596254981, 0);
  sqcRYGate(q, 2.3371220153090126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.17060703346119216, 2);
  sqcRYGate(q, -2.1958335121745387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.037544471813447444, 2);
  sqcRYGate(q, -0.056749952330028997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3614676740135248, 4);
  sqcRYGate(q, 2.6004696257434228, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9324870028215466, 4);
  sqcRYGate(q, 1.760924865704066, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7866879203727706, 6);
  sqcRYGate(q, 0.35390428125573603, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3548196081475292, 6);
  sqcRYGate(q, 1.4217690041765347, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7375020314211542, 8);
  sqcRYGate(q, 0.7266299816810368, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.297687379593389, 8);
  sqcRYGate(q, -2.376187114011218, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.5981620149197457, 10);
  sqcRYGate(q, 0.04581016157846901, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5796166642038338, 10);
  sqcRYGate(q, 0.05835559487646958, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.662118286343845, 12);
  sqcRYGate(q, -1.746890263489913, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.047449756698583, 12);
  sqcRYGate(q, 1.541161349938858, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.41766620973130403, 14);
  sqcRYGate(q, 0.7401663077582673, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.8517151514336996, 14);
  sqcRYGate(q, 1.7922757352363872, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.1514826372885045, 16);
  sqcRYGate(q, 1.7283497243767458, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.7044203656997308, 16);
  sqcRYGate(q, -3.122949974221477, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.9089306580375087, 18);
  sqcRYGate(q, -0.3875781349862089, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.3535903321290879, 18);
  sqcRYGate(q, -2.766810162191304, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.6913336000374262, 1);
  sqcRYGate(q, -1.9222168187431912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4306038401843324, 1);
  sqcRYGate(q, -0.6008946487678894, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5059067786320677, 3);
  sqcRYGate(q, -2.032053542626682, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.855529032149318, 3);
  sqcRYGate(q, 1.5202699140707983, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9112456012881356, 5);
  sqcRYGate(q, 0.72234222362878, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2831741535645351, 5);
  sqcRYGate(q, 0.155985990643941, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7176824574767915, 7);
  sqcRYGate(q, 2.388404237609144, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.570206384842389, 7);
  sqcRYGate(q, -1.7946672105176322, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.636756110639814, 9);
  sqcRYGate(q, -0.14151069107166947, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9825975791554677, 9);
  sqcRYGate(q, -1.4220598524651846, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.2624994362927486, 11);
  sqcRYGate(q, 3.045139334507932, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.0022710304636337497, 11);
  sqcRYGate(q, -2.3066327177037564, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.5327427351108858, 13);
  sqcRYGate(q, 2.390753115641172, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5821577992588551, 13);
  sqcRYGate(q, 1.7701676283247636, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.055283122357724, 15);
  sqcRYGate(q, 1.1911147038130923, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.6488839764082366, 15);
  sqcRYGate(q, 0.17247225564857666, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.1412570406136653, 17);
  sqcRYGate(q, -1.9484368233571827, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.6583903986038955, 17);
  sqcRYGate(q, 1.637566696309427, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.18680286824448464, 0);
  sqcRYGate(q, -3.12756971968072, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.181448041339606, 0);
  sqcRYGate(q, 0.5070845098322998, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1976820097277123, 2);
  sqcRYGate(q, 1.4119653893069761, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6052260426700484, 2);
  sqcRYGate(q, -0.41240561157140937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9646918880656288, 4);
  sqcRYGate(q, -1.6352833229513708, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9209580947659411, 4);
  sqcRYGate(q, -1.480672936675519, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3216313421117611, 6);
  sqcRYGate(q, 0.03829938193384696, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7088742858388102, 6);
  sqcRYGate(q, 1.5667034780933937, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.569028177006608, 8);
  sqcRYGate(q, -2.474196770167022, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.0896144580485405, 8);
  sqcRYGate(q, 1.5718158420226302, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5762484733404214, 10);
  sqcRYGate(q, -3.1231869186036154, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.537832535277996, 10);
  sqcRYGate(q, 1.5566442968584573, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.8437762771114348, 12);
  sqcRYGate(q, -0.6068871593987986, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.7443387759201145, 12);
  sqcRYGate(q, 0.4573900689784873, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.9252401970667394, 14);
  sqcRYGate(q, 1.7060314437873094, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.240917119018942, 14);
  sqcRYGate(q, 1.5746675856313612, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.0485329528348029, 16);
  sqcRYGate(q, 1.5908967257114717, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.5726750987794358, 16);
  sqcRYGate(q, -3.1412153115959667, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.8098305638253372, 18);
  sqcRYGate(q, -2.0344295734458693, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.5759197659902524, 18);
  sqcRYGate(q, -1.4239338810897468, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.9783830766799424, 1);
  sqcRYGate(q, -3.079357783985105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3055685822413485, 1);
  sqcRYGate(q, -1.645334151434139, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8198304226007973, 3);
  sqcRYGate(q, -1.354750649976264, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.392364551141811, 3);
  sqcRYGate(q, 0.8824028469474632, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.068249311944374, 5);
  sqcRYGate(q, -3.102680503184958, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.318355381020988, 5);
  sqcRYGate(q, 1.583645739011664, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5656929357642182, 7);
  sqcRYGate(q, 0.18876117923043684, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0010236254964661742, 7);
  sqcRYGate(q, -0.9693677919741689, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.976821281130265, 9);
  sqcRYGate(q, -1.6532158580253355, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.567658792221267, 9);
  sqcRYGate(q, 0.05164912801780125, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.12902510564507, 11);
  sqcRYGate(q, -1.570952226788982, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.6008747555158189, 11);
  sqcRYGate(q, -1.8845996448250468, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.13346204772479592, 13);
  sqcRYGate(q, 2.9828171509060684, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.9430437783762584, 13);
  sqcRYGate(q, 1.0122193696792208, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.106578064432104, 15);
  sqcRYGate(q, 0.7393860907395603, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.01629189267762321, 15);
  sqcRYGate(q, -0.021418677982741663, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.5308392312891976, 17);
  sqcRYGate(q, 1.8307351386282722, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.5462578388152386, 17);
  sqcRYGate(q, 2.1646925400808015, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.6043033119896756, 0);
  sqcRYGate(q, 0.360832203695975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.559882497801902, 0);
  sqcRYGate(q, 1.1779911918491572, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.117629361789347, 2);
  sqcRYGate(q, 1.7585184231601219, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5681749811711307, 2);
  sqcRYGate(q, -1.582852900307973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1815829721036915, 4);
  sqcRYGate(q, 1.5380156279581279, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.594666638112688, 4);
  sqcRYGate(q, 1.5803164034179016, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5768578377647362, 6);
  sqcRYGate(q, 1.5670697211443576, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8687598020007026, 6);
  sqcRYGate(q, -2.6593430485076417, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7689098051846024, 8);
  sqcRYGate(q, 1.1180699489734753, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5708613489908654, 8);
  sqcRYGate(q, -3.14114351917959, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.1600765081940145, 10);
  sqcRYGate(q, 2.4826375965071725, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.007630144633448133, 10);
  sqcRYGate(q, -0.24254155417969234, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5615886597578428, 12);
  sqcRYGate(q, -1.4987925767510024, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.1608478562012925, 12);
  sqcRYGate(q, 0.7151212069662348, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.9743694523786557, 14);
  sqcRYGate(q, -2.618557514206954, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.2965015388197176, 14);
  sqcRYGate(q, 1.5467325352461636, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.4373742381896895, 16);
  sqcRYGate(q, 2.2476055084811497, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.03593845259736548, 16);
  sqcRYGate(q, 2.978874494569573, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.14607000450833016, 18);
  sqcRYGate(q, -3.0142596048051726, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.3804971069594227, 18);
  sqcRYGate(q, -1.5985136689580939, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -3.056520441961716, 1);
  sqcRYGate(q, 1.5711131735923092, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.576045039062449, 1);
  sqcRYGate(q, 1.5280280176572993, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.560575886746334, 3);
  sqcRYGate(q, -1.6257764711809262, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6811601577603332, 3);
  sqcRYGate(q, 2.6763366529365564, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.570096446589825, 5);
  sqcRYGate(q, -1.6100128035625039, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5912443296132803, 5);
  sqcRYGate(q, -1.5746441562942852, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.581578010088579, 7);
  sqcRYGate(q, -0.1813777664224662, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.55031870223897, 7);
  sqcRYGate(q, -2.2966220469316543, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6005502014518296, 9);
  sqcRYGate(q, 1.3345216059417115, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.1114625238637283, 9);
  sqcRYGate(q, 2.795383908829035, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9924722669467432, 11);
  sqcRYGate(q, -1.5783354449200555, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.9876834565156702, 11);
  sqcRYGate(q, -3.1311663596723225, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.570831763302241, 13);
  sqcRYGate(q, -1.5296156598761161, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5711537718090973, 13);
  sqcRYGate(q, 1.5147505729633801, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.9437073986138553, 15);
  sqcRYGate(q, -0.02433295680772751, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5713720334440262, 15);
  sqcRYGate(q, -1.5204111529827764, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.299604626887623, 17);
  sqcRYGate(q, 0.10373023901001321, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.7813177826218913, 17);
  sqcRYGate(q, 1.5744438099251363, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.503136424704639, 0);
  sqcRYGate(q, 1.4649263390772755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.556648613533224, 0);
  sqcRYGate(q, -1.6039886324264412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6995561977358689, 2);
  sqcRYGate(q, 1.5713089016745867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6180317404183544, 2);
  sqcRYGate(q, 1.5924528128157682, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7771604606712517, 4);
  sqcRYGate(q, 1.5508686412140014, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.518593354395159, 4);
  sqcRYGate(q, -1.4393171426792994, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2610751551389923, 6);
  sqcRYGate(q, 1.5654041665568024, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.831093248505577, 6);
  sqcRYGate(q, -0.009334648712619575, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9827251412543934, 8);
  sqcRYGate(q, -1.6045329785385662, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5817726343184946, 8);
  sqcRYGate(q, -3.1346595780308135, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.201138763019289, 10);
  sqcRYGate(q, 2.925985466418146, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.601562151763393, 10);
  sqcRYGate(q, 1.7514890487792663, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3389723374845017, 12);
  sqcRYGate(q, -2.3999346268749373, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.00010167095378577073, 12);
  sqcRYGate(q, 0.010061085736468979, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5726417293653883, 14);
  sqcRYGate(q, -1.5693001848202588, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.46674077638094147, 14);
  sqcRYGate(q, 2.539348525553789, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5716405673603733, 16);
  sqcRYGate(q, 3.017861984081247, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.5625730222719934, 16);
  sqcRYGate(q, -2.55418855116946, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.5782012177867537, 18);
  sqcRYGate(q, -3.134237594090749, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.170618951830515, 18);
  sqcRYGate(q, 1.481576209537462, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.5768631258015011, 1);
  sqcRYGate(q, -1.5715728743751414, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5874533263628894, 1);
  sqcRYGate(q, -1.5712232254160519, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5382419227673866, 3);
  sqcRYGate(q, -1.5813080690486707, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1622452035242148, 3);
  sqcRYGate(q, 3.1211093328384285, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1911275920551532, 5);
  sqcRYGate(q, 2.2661882210331745, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6000862387567754, 5);
  sqcRYGate(q, -0.02130100744287411, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9244388605953207, 7);
  sqcRYGate(q, 1.1586828428825107, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5757589576403983, 7);
  sqcRYGate(q, -0.013828498559382396, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5166386730405297, 9);
  sqcRYGate(q, -1.5373121073617622, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.925120195985523, 9);
  sqcRYGate(q, 3.0709161759674624, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.572649941902507, 11);
  sqcRYGate(q, -1.8262884322131858, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5843667348224137, 11);
  sqcRYGate(q, -1.5571570300678015, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.385126692467445, 13);
  sqcRYGate(q, -0.22607372659940772, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.850011751093689, 13);
  sqcRYGate(q, 0.027926999705229605, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5705069892708046, 15);
  sqcRYGate(q, -1.5208010190462276, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5765818260009679, 15);
  sqcRYGate(q, -1.6178113941739314, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5703608300745833, 17);
  sqcRYGate(q, 1.5845638619387257, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.5757614212337652, 17);
  sqcRYGate(q, 1.5996837776016646, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 3.104053704226644, 0);
  sqcRYGate(q, -1.5731463353054582, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5609185569021724, 0);
  sqcRYGate(q, -0.005189941310438, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11612649254684364, 2);
  sqcRYGate(q, 2.604102460671865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4420614500895632, 2);
  sqcRYGate(q, 2.9324595576322414, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5294102869601213, 4);
  sqcRYGate(q, -1.074304990853579, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.002555803220818484, 4);
  sqcRYGate(q, -2.908750366366674, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6633863041183545, 6);
  sqcRYGate(q, 2.556994941225787, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0027568244601266045, 6);
  sqcRYGate(q, 1.556784895871491, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6463966953726534, 8);
  sqcRYGate(q, 1.6168564415584559, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5935169866796621, 8);
  sqcRYGate(q, -0.0009648819758671933, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.687356187022134, 10);
  sqcRYGate(q, -1.4987487084410156, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.3554861367327202, 10);
  sqcRYGate(q, -1.9673693119605746, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5740925404570274, 12);
  sqcRYGate(q, 1.8462333024834625, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.019214680192239524, 12);
  sqcRYGate(q, -1.5728698558595537, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.576095697347589, 14);
  sqcRYGate(q, -1.7405810806432616, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.1405349957149036, 14);
  sqcRYGate(q, 0.14151988088911113, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5697527839769077, 16);
  sqcRYGate(q, -1.5710490615474904, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.566643149879615, 16);
  sqcRYGate(q, 1.578300630749219, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.568458278890746, 18);
  sqcRYGate(q, 1.621966481718668, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.7351060997262862, 18);
  sqcRYGate(q, 1.5913096332062577, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.7099834784474097, 1);
  sqcRYGate(q, -0.3834529486290297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.02587412526891164, 1);
  sqcRYGate(q, -0.002160783227796337, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.744460213749713, 3);
  sqcRYGate(q, -0.6502258190954332, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.024862056603477532, 3);
  sqcRYGate(q, 0.002692848350092092, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4587711577495568, 5);
  sqcRYGate(q, 1.6796582960116284, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.092739445865719, 5);
  sqcRYGate(q, -0.006083402535532301, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1081449569761688, 7);
  sqcRYGate(q, -2.8566044718982533, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.022312991758236173, 7);
  sqcRYGate(q, 3.1377871178677856, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6904165468180217, 9);
  sqcRYGate(q, -1.7214361134918328, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1224506353356025, 9);
  sqcRYGate(q, 3.1346047966336195, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.3899132254606114, 11);
  sqcRYGate(q, 1.5456834775690727, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6018665014655862, 11);
  sqcRYGate(q, 0.0004664294100889482, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.8878663773162254, 13);
  sqcRYGate(q, 1.5813143986503766, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.8512039751193312, 13);
  sqcRYGate(q, 0.0027536170196954556, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.4427097893076999, 15);
  sqcRYGate(q, 1.6994541249301305, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.6238288738804636, 15);
  sqcRYGate(q, -3.1238427149715906, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.5702350224250612, 17);
  sqcRYGate(q, 1.5700112398385881, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.5740518992348977, 17);
  sqcRYGate(q, 1.5701108246462179, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.06225797649920395, 0);
  sqcRYGate(q, 1.4166488149635237, 1);
  sqcRYGate(q, -2.6424823129833213, 2);
  sqcRYGate(q, 0.4110348719572229, 3);
  sqcRYGate(q, -1.956443797164824, 4);
  sqcRYGate(q, -1.3986608586911906, 5);
  sqcRYGate(q, -3.030993473726677, 6);
  sqcRYGate(q, 1.3727842118714904, 7);
  sqcRYGate(q, 2.3617279520934873, 8);
  sqcRYGate(q, 1.3951061605718325, 9);
  sqcRYGate(q, -0.24669404600076295, 10);
  sqcRYGate(q, -2.7034191851589795, 11);
  sqcRYGate(q, -0.0012090087480804389, 12);
  sqcRYGate(q, -2.036819057581771, 13);
  sqcRYGate(q, -1.3405798394258284, 14);
  sqcRYGate(q, 1.611648283151378, 15);
  sqcRYGate(q, 0.11199158233028565, 16);
  sqcRYGate(q, 1.5744122643459137, 17);
  sqcRYGate(q, 3.140936678449825, 18);
  sqcRYGate(q, 1.5638831599972711, 19);

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
