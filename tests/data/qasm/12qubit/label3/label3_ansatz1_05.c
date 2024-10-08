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

  sqcRYGate(q, -0.0009476889619968176, 0);
  sqcRZGate(q, 0.24487615207677688, 0);
  sqcRYGate(q, 1.5689490159892907, 1);
  sqcRZGate(q, 3.140308124032803, 1);
  sqcRYGate(q, -2.899940153020365, 2);
  sqcRZGate(q, -0.0746683858693018, 2);
  sqcRYGate(q, 1.57872626831323, 3);
  sqcRZGate(q, 3.1414266910979567, 3);
  sqcRYGate(q, 0.4005681386234608, 4);
  sqcRZGate(q, 0.17268364964928828, 4);
  sqcRYGate(q, -1.5154819529160846, 5);
  sqcRZGate(q, 1.8800793023215325, 5);
  sqcRYGate(q, 1.5739447907820854, 6);
  sqcRZGate(q, -0.015287948251393598, 6);
  sqcRYGate(q, -1.6439654281201799, 7);
  sqcRZGate(q, 0.38520568181380277, 7);
  sqcRYGate(q, 0.02385638838483626, 8);
  sqcRZGate(q, -1.74152721205105, 8);
  sqcRYGate(q, -1.7387843860849779, 9);
  sqcRZGate(q, 0.7871161669744972, 9);
  sqcRYGate(q, 1.8084268664835488, 10);
  sqcRZGate(q, 2.4993924657339117, 10);
  sqcRYGate(q, 2.14946033477984, 11);
  sqcRZGate(q, -1.2212493914112916, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.1380791907489614, 0);
  sqcRZGate(q, 2.5726867510239733, 0);
  sqcRYGate(q, 1.571228369269531, 1);
  sqcRZGate(q, 0.06588314818627959, 1);
  sqcRYGate(q, -0.6083803291860717, 2);
  sqcRZGate(q, -0.0012473893086631534, 2);
  sqcRYGate(q, -1.577668064381884, 3);
  sqcRZGate(q, -0.0034639867828492044, 3);
  sqcRYGate(q, 1.5710289633300039, 4);
  sqcRZGate(q, 3.13242869770069, 4);
  sqcRYGate(q, -1.5710896459832133, 5);
  sqcRZGate(q, -1.5829824485259036, 5);
  sqcRYGate(q, 1.5690350696674036, 6);
  sqcRZGate(q, 3.136885139574829, 6);
  sqcRYGate(q, -3.1391858633436533, 7);
  sqcRZGate(q, -2.755163450566251, 7);
  sqcRYGate(q, 0.43595771624502416, 8);
  sqcRZGate(q, 1.5415765568171755, 8);
  sqcRYGate(q, 2.2927210509308646, 9);
  sqcRZGate(q, 0.5634926776096503, 9);
  sqcRYGate(q, 1.2829604397142296, 10);
  sqcRZGate(q, -0.04999088830417709, 10);
  sqcRYGate(q, 2.5280104759583817, 11);
  sqcRZGate(q, 3.017555579536381, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5751999576199749, 0);
  sqcRZGate(q, 1.5386774905132095, 0);
  sqcRYGate(q, -1.5625155105910116, 1);
  sqcRZGate(q, -1.6256441590676198, 1);
  sqcRYGate(q, 2.2411529002371022, 2);
  sqcRZGate(q, 3.1332145547528993, 2);
  sqcRYGate(q, 1.5862580209971606, 3);
  sqcRZGate(q, -1.5700672552974366, 3);
  sqcRYGate(q, 1.560422468889286, 4);
  sqcRZGate(q, 0.6209041369608893, 4);
  sqcRYGate(q, -1.5779644070730825, 5);
  sqcRZGate(q, -0.5482813764026577, 5);
  sqcRYGate(q, -0.17999279886444253, 6);
  sqcRZGate(q, -1.5695842231865844, 6);
  sqcRYGate(q, 1.5684226880235004, 7);
  sqcRZGate(q, 3.140737835281579, 7);
  sqcRYGate(q, 0.1613070728636892, 8);
  sqcRZGate(q, -1.5409952663185562, 8);
  sqcRYGate(q, 1.4940191152886355, 9);
  sqcRZGate(q, -2.980654968983305, 9);
  sqcRYGate(q, -0.9515595426206892, 10);
  sqcRZGate(q, -1.4944845678902876, 10);
  sqcRYGate(q, -1.6709020429721944, 11);
  sqcRZGate(q, -2.527866335741379, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.0688156043446564, 0);
  sqcRZGate(q, 1.5166158173482085, 0);
  sqcRYGate(q, -1.434633061222779, 1);
  sqcRZGate(q, -1.5740344014902004, 1);
  sqcRYGate(q, 1.5711758022305746, 2);
  sqcRZGate(q, 1.9444037414607713, 2);
  sqcRYGate(q, -1.5739400078816563, 3);
  sqcRZGate(q, -0.9820268852784338, 3);
  sqcRYGate(q, -3.1373198610052966, 4);
  sqcRZGate(q, -0.9867365519897834, 4);
  sqcRYGate(q, 3.109507282356496, 5);
  sqcRZGate(q, -0.584730704819902, 5);
  sqcRYGate(q, 1.558981628213585, 6);
  sqcRZGate(q, 0.771849420793779, 6);
  sqcRYGate(q, -1.5730873901334192, 7);
  sqcRZGate(q, 1.5976389933724864, 7);
  sqcRYGate(q, -1.5749526655584283, 8);
  sqcRZGate(q, 3.141383629249247, 8);
  sqcRYGate(q, -1.6023903959380599, 9);
  sqcRZGate(q, 0.3360639477385294, 9);
  sqcRYGate(q, -1.5414995539777028, 10);
  sqcRZGate(q, -0.895551434816312, 10);
  sqcRYGate(q, 1.184547019346999, 11);
  sqcRZGate(q, 0.0245721194706921, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.558531980270271, 0);
  sqcRZGate(q, 1.5717769384681342, 0);
  sqcRYGate(q, -1.5704298678916344, 1);
  sqcRZGate(q, 0.0005183528893200062, 1);
  sqcRYGate(q, -3.0751590344574984, 2);
  sqcRZGate(q, -2.8700149008544353, 2);
  sqcRYGate(q, 0.1424676201412534, 3);
  sqcRZGate(q, -0.3458312133128883, 3);
  sqcRYGate(q, -1.5908900832824893, 4);
  sqcRZGate(q, -1.2786225473080481, 4);
  sqcRYGate(q, 1.6325298596176845, 5);
  sqcRZGate(q, 2.1600608902529723, 5);
  sqcRYGate(q, 2.8690479213532, 6);
  sqcRZGate(q, 0.8051703963896191, 6);
  sqcRYGate(q, -1.5951762461428667, 7);
  sqcRZGate(q, -0.26228175001666004, 7);
  sqcRYGate(q, 1.570799218814366, 8);
  sqcRZGate(q, 1.5911344796236149, 8);
  sqcRYGate(q, -0.0004419095711278023, 9);
  sqcRZGate(q, 0.784816419526048, 9);
  sqcRYGate(q, 2.5179781142526423, 10);
  sqcRZGate(q, 1.526526225780856, 10);
  sqcRYGate(q, 1.109411197512074, 11);
  sqcRZGate(q, 1.4491846141084392, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.556336251146707, 0);
  sqcRZGate(q, 1.4675323547746633, 0);
  sqcRYGate(q, 1.564790953167055, 1);
  sqcRZGate(q, -2.4513671212548007, 1);
  sqcRYGate(q, 3.1244602545693594, 2);
  sqcRZGate(q, 0.18383751857779096, 2);
  sqcRYGate(q, -3.1237085902982695, 3);
  sqcRZGate(q, -0.3587271383558043, 3);
  sqcRYGate(q, 3.114787251473421, 4);
  sqcRZGate(q, 2.4898667024676238, 4);
  sqcRYGate(q, 2.4771892250745147, 5);
  sqcRZGate(q, 2.400705093686, 5);
  sqcRYGate(q, -0.0014422607346464248, 6);
  sqcRZGate(q, -0.017864422410282185, 6);
  sqcRYGate(q, 0.0016109934241352872, 7);
  sqcRZGate(q, -2.878780894373751, 7);
  sqcRYGate(q, -0.18702823897407853, 8);
  sqcRZGate(q, 1.298937226629338, 8);
  sqcRYGate(q, 1.5703984476353305, 9);
  sqcRZGate(q, -1.57266583847181, 9);
  sqcRYGate(q, 1.5462059890777446, 10);
  sqcRZGate(q, -1.6721174688024851, 10);
  sqcRYGate(q, 0.05855136759847035, 11);
  sqcRZGate(q, -1.4964402759641038, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.2978941278731058, 0);
  sqcRZGate(q, 1.5704187799407991, 0);
  sqcRYGate(q, 3.139729518725841, 1);
  sqcRZGate(q, -2.151944327403187, 1);
  sqcRYGate(q, 1.5477294882456054, 2);
  sqcRZGate(q, 1.6303923091049644, 2);
  sqcRYGate(q, -0.1417263286689456, 3);
  sqcRZGate(q, 2.389378385015046, 3);
  sqcRYGate(q, 3.0695173806530223, 4);
  sqcRZGate(q, -0.8778064634626357, 4);
  sqcRYGate(q, -2.9645621577170815, 5);
  sqcRZGate(q, 1.702555582084545, 5);
  sqcRYGate(q, 1.4330777583132905, 6);
  sqcRZGate(q, -0.20206795451105197, 6);
  sqcRYGate(q, 1.5458247695048692, 7);
  sqcRZGate(q, -0.34258362756346383, 7);
  sqcRYGate(q, -1.5441150565900044, 8);
  sqcRZGate(q, -1.5704736213995112, 8);
  sqcRYGate(q, -1.5663839320730046, 9);
  sqcRZGate(q, -2.5113137905076854, 9);
  sqcRYGate(q, 1.5704270398074875, 10);
  sqcRZGate(q, 1.5759111651443591, 10);
  sqcRYGate(q, -1.680974058474379, 11);
  sqcRZGate(q, 0.6207333776031644, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.021837034803551703, 0);
  sqcRZGate(q, 1.111734672461516, 0);
  sqcRYGate(q, 0.12879706568892416, 1);
  sqcRZGate(q, 3.1153751248369606, 1);
  sqcRYGate(q, -1.609946665495146, 2);
  sqcRZGate(q, -0.4920629570624939, 2);
  sqcRYGate(q, 3.1226666733003463, 3);
  sqcRZGate(q, 1.8375974633424337, 3);
  sqcRYGate(q, -3.1240210403404642, 4);
  sqcRZGate(q, -3.066909741546161, 4);
  sqcRYGate(q, 1.4671759915014668, 5);
  sqcRZGate(q, 1.6034989851137287, 5);
  sqcRYGate(q, -1.5753339502120223, 6);
  sqcRZGate(q, 0.21995833092040315, 6);
  sqcRYGate(q, 0.00023518737379024657, 7);
  sqcRZGate(q, 1.2717589663095314, 7);
  sqcRYGate(q, 1.5749814418604524, 8);
  sqcRZGate(q, -0.012980821548072046, 8);
  sqcRYGate(q, -3.136970358605019, 9);
  sqcRZGate(q, -2.5836521172334153, 9);
  sqcRYGate(q, 1.5677881219530816, 10);
  sqcRZGate(q, 0.5344121454652689, 10);
  sqcRYGate(q, 1.5710368317125292, 11);
  sqcRZGate(q, -1.617591057115491, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.26366666541146516, 0);
  sqcRZGate(q, 0.7789919445182258, 0);
  sqcRYGate(q, 1.5405397755550119, 1);
  sqcRZGate(q, -1.1603574689877978, 1);
  sqcRYGate(q, 1.8494286122843926, 2);
  sqcRZGate(q, 1.8134730114606148, 2);
  sqcRYGate(q, 1.840971601856747, 3);
  sqcRZGate(q, -2.7159244473661057, 3);
  sqcRYGate(q, -2.0656023374259966, 4);
  sqcRZGate(q, 0.39195675670988184, 4);
  sqcRYGate(q, 0.9141258883947198, 5);
  sqcRZGate(q, 0.4412707095216133, 5);
  sqcRYGate(q, 3.121810299341514, 6);
  sqcRZGate(q, -2.5311925726865505, 6);
  sqcRYGate(q, -1.6042974063447657, 7);
  sqcRZGate(q, -1.1519648862028131, 7);
  sqcRYGate(q, -1.287311096342271, 8);
  sqcRZGate(q, -2.737629156110658, 8);
  sqcRYGate(q, 2.567008867397642, 9);
  sqcRZGate(q, 0.3525158635671949, 9);
  sqcRYGate(q, 1.557375570685247, 10);
  sqcRZGate(q, -1.1698754830907783, 10);
  sqcRYGate(q, 0.9989542148911909, 11);
  sqcRZGate(q, 0.4371329203708312, 11);

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
