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

  sqcRYGate(q, 3.0880484789590725, 0);
  sqcRZGate(q, 0.9210363407587617, 0);
  sqcRYGate(q, -3.141332810684145, 1);
  sqcRZGate(q, -1.978342744310321, 1);
  sqcRYGate(q, 1.6682027556260905, 2);
  sqcRZGate(q, -0.7483294558099697, 2);
  sqcRYGate(q, -3.1181315340953173, 3);
  sqcRZGate(q, 0.5829107894670367, 3);
  sqcRYGate(q, 1.574379563004632, 4);
  sqcRZGate(q, 0.09344333110453995, 4);
  sqcRYGate(q, 1.5522274161377254, 5);
  sqcRZGate(q, 2.722373179199718, 5);
  sqcRYGate(q, -0.018065539479311887, 6);
  sqcRZGate(q, -1.5439144711760469, 6);
  sqcRYGate(q, 3.1217453894245293, 7);
  sqcRZGate(q, 0.849345148236214, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.9670427546038147, 0);
  sqcRZGate(q, -0.013784905035601367, 0);
  sqcRYGate(q, -3.141317571103842, 1);
  sqcRZGate(q, -0.6912158430082185, 1);
  sqcRYGate(q, 0.012290000288936993, 2);
  sqcRZGate(q, -0.8073139941522554, 2);
  sqcRYGate(q, -2.8371505631039615, 3);
  sqcRZGate(q, 1.6068339646610204, 3);
  sqcRYGate(q, -3.0567923089122724, 4);
  sqcRZGate(q, -1.4706997525385033, 4);
  sqcRYGate(q, -1.5046706660177671, 5);
  sqcRZGate(q, 0.2851520992335841, 5);
  sqcRYGate(q, 0.7161218624885244, 6);
  sqcRZGate(q, 1.6647092895280924, 6);
  sqcRYGate(q, -3.035590646869304, 7);
  sqcRZGate(q, -2.489063912026985, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6003878796133355, 0);
  sqcRZGate(q, -1.7549891732278686, 0);
  sqcRYGate(q, 3.141428421795586, 1);
  sqcRZGate(q, 1.1634113919424376, 1);
  sqcRYGate(q, 1.6143676639987652, 2);
  sqcRZGate(q, -0.017738500009235787, 2);
  sqcRYGate(q, -1.5545862288272354, 3);
  sqcRZGate(q, 3.0049154594237137, 3);
  sqcRYGate(q, -3.0870361877798738, 4);
  sqcRZGate(q, 1.5899019700828012, 4);
  sqcRYGate(q, -3.11350698278332, 5);
  sqcRZGate(q, -1.3813836371286925, 5);
  sqcRYGate(q, 1.6245054744299687, 6);
  sqcRZGate(q, 1.6330521301428544, 6);
  sqcRYGate(q, 1.6878900630269085, 7);
  sqcRZGate(q, -2.795008141779913, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7117170402084116, 0);
  sqcRZGate(q, -2.2049366799238213, 0);
  sqcRYGate(q, -0.01232518286162243, 1);
  sqcRZGate(q, 1.766394981089891, 1);
  sqcRYGate(q, 2.3263788528654348, 2);
  sqcRZGate(q, -2.8223189770242643, 2);
  sqcRYGate(q, 1.494693268915824, 3);
  sqcRZGate(q, 2.1506937976367437, 3);
  sqcRYGate(q, 2.804991043859231, 4);
  sqcRZGate(q, -1.5171702945398367, 4);
  sqcRYGate(q, 2.205195317831611, 5);
  sqcRZGate(q, -3.0934497525917397, 5);
  sqcRYGate(q, 1.6577522080685316, 6);
  sqcRZGate(q, 2.8580547934600893, 6);
  sqcRYGate(q, 1.1997097846029523, 7);
  sqcRZGate(q, 1.004540002619473, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.526660592195088, 0);
  sqcRZGate(q, -1.621603748007062, 0);
  sqcRYGate(q, 1.5686944077064435, 1);
  sqcRZGate(q, 1.5687981879139539, 1);
  sqcRYGate(q, -0.01004822560620992, 2);
  sqcRZGate(q, -0.3396904588579516, 2);
  sqcRYGate(q, -0.011742202427619797, 3);
  sqcRZGate(q, 2.594570822220899, 3);
  sqcRYGate(q, -0.0034147478588293367, 4);
  sqcRZGate(q, 0.8484090159592084, 4);
  sqcRYGate(q, 0.23539177639670594, 5);
  sqcRZGate(q, -0.04612030485765129, 5);
  sqcRYGate(q, 0.0012594111287979274, 6);
  sqcRZGate(q, -0.23846691562233463, 6);
  sqcRYGate(q, 0.012120815034031729, 7);
  sqcRZGate(q, 1.5536732289030857, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.011180315228427959, 0);
  sqcRZGate(q, 1.6112048199376208, 0);
  sqcRYGate(q, 2.9503709125973474, 1);
  sqcRZGate(q, -1.5726160100829591, 1);
  sqcRYGate(q, 1.5721667145289713, 2);
  sqcRZGate(q, -1.5708623821265713, 2);
  sqcRYGate(q, 1.570220358136056, 3);
  sqcRZGate(q, 1.5707427709502513, 3);
  sqcRYGate(q, -3.1338365945903037, 4);
  sqcRZGate(q, -2.8360297237434025, 4);
  sqcRYGate(q, -0.9364788316881067, 5);
  sqcRZGate(q, -0.7571139041972742, 5);
  sqcRYGate(q, -1.5795929521248302, 6);
  sqcRZGate(q, 1.6267147461869689, 6);
  sqcRYGate(q, -0.010028954018513246, 7);
  sqcRZGate(q, 2.798100848213738, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.564599838931425, 0);
  sqcRZGate(q, 2.6235092961719797, 0);
  sqcRYGate(q, 1.5707510062847572, 1);
  sqcRZGate(q, -0.007161467181552084, 1);
  sqcRYGate(q, 1.5740358552448008, 2);
  sqcRZGate(q, -1.565259609330841, 2);
  sqcRYGate(q, 1.4761201743547447, 3);
  sqcRZGate(q, 1.5713237737463803, 3);
  sqcRYGate(q, 0.0013072292916116411, 4);
  sqcRZGate(q, -1.5180990120697677, 4);
  sqcRYGate(q, 3.1414944877795787, 5);
  sqcRZGate(q, 2.549758255744363, 5);
  sqcRYGate(q, -1.5651415948401786, 6);
  sqcRZGate(q, 1.3260287440622323, 6);
  sqcRYGate(q, -3.053925310166723, 7);
  sqcRZGate(q, 1.425190224589576, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.042051323247324746, 0);
  sqcRZGate(q, -2.0692572388963093, 0);
  sqcRYGate(q, 1.568491967538705, 1);
  sqcRZGate(q, -0.01081157373939714, 1);
  sqcRYGate(q, 2.9960756804327997, 2);
  sqcRZGate(q, -1.5636329331807546, 2);
  sqcRYGate(q, 1.3580844623370558, 3);
  sqcRZGate(q, 4.8693570611213495e-05, 3);
  sqcRYGate(q, 3.1015019703959763, 4);
  sqcRZGate(q, 1.0401074868002231, 4);
  sqcRYGate(q, -2.8028274720356734, 5);
  sqcRZGate(q, -3.039475611539891, 5);
  sqcRYGate(q, 0.00017848087969074555, 6);
  sqcRZGate(q, -2.814451839647622, 6);
  sqcRYGate(q, 1.5832282053339588, 7);
  sqcRZGate(q, -2.536641653264085, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.00011337822231283212, 0);
  sqcRZGate(q, -1.6425293496257527, 0);
  sqcRYGate(q, -1.6364557107476374, 1);
  sqcRZGate(q, 2.977329855668571, 1);
  sqcRYGate(q, -1.571225049236621, 2);
  sqcRZGate(q, 3.0051224102748186, 2);
  sqcRYGate(q, 1.561679511700313, 3);
  sqcRZGate(q, 0.37586530105614163, 3);
  sqcRYGate(q, -1.5693321591963851, 4);
  sqcRZGate(q, -1.839395790754037, 4);
  sqcRYGate(q, 1.5741139996923703, 5);
  sqcRZGate(q, -1.536692207033031, 5);
  sqcRYGate(q, -1.5680381121556184, 6);
  sqcRZGate(q, 1.5719580329878087, 6);
  sqcRYGate(q, -3.13951702180242, 7);
  sqcRZGate(q, -1.0291135222513137, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.006918421151504119, 0);
  sqcRZGate(q, 1.290812814990964, 0);
  sqcRYGate(q, -1.5744159701720004, 1);
  sqcRZGate(q, 2.4376914432289447, 1);
  sqcRYGate(q, -3.139776268374143, 2);
  sqcRZGate(q, 1.4247776023893048, 2);
  sqcRYGate(q, 3.131751626956818, 3);
  sqcRZGate(q, -1.194745497592245, 3);
  sqcRYGate(q, 1.5709258947231455, 4);
  sqcRZGate(q, 3.141552466059538, 4);
  sqcRYGate(q, 1.5707864739014763, 5);
  sqcRZGate(q, -1.5791980992500223, 5);
  sqcRYGate(q, -1.5089011515681463, 6);
  sqcRZGate(q, 1.722968459472627, 6);
  sqcRYGate(q, -3.134515397086096, 7);
  sqcRZGate(q, 1.499399865694803, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.556186077759258, 0);
  sqcRZGate(q, -2.9473752314418635, 0);
  sqcRYGate(q, -1.6504862272192646, 1);
  sqcRZGate(q, -3.120423858101929, 1);
  sqcRYGate(q, 3.1414821286616306, 2);
  sqcRZGate(q, 2.6679099784205023, 2);
  sqcRYGate(q, -1.5707677512574647, 3);
  sqcRZGate(q, -1.7810184334099803, 3);
  sqcRYGate(q, 1.5707545761928512, 4);
  sqcRZGate(q, -0.18236058503539976, 4);
  sqcRYGate(q, 0.029782571843090414, 5);
  sqcRZGate(q, 0.008450051379511783, 5);
  sqcRYGate(q, -0.03046738004691781, 6);
  sqcRZGate(q, 2.9877781285738725, 6);
  sqcRYGate(q, 1.57138006388469, 7);
  sqcRZGate(q, 1.567249878513812, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.008787381568023278, 0);
  sqcRZGate(q, -1.8518572454194948, 0);
  sqcRYGate(q, 0.0019911632098672527, 1);
  sqcRZGate(q, -1.6576940632093842, 1);
  sqcRYGate(q, 0.0008227195239198792, 2);
  sqcRZGate(q, -1.1107024790842095, 2);
  sqcRYGate(q, 3.1405636343069694, 3);
  sqcRZGate(q, 2.9331942455055136, 3);
  sqcRYGate(q, -3.1397746946244878, 4);
  sqcRZGate(q, -0.19042877698240332, 4);
  sqcRYGate(q, -1.5641808631460847, 5);
  sqcRZGate(q, 1.6033385183201103, 5);
  sqcRYGate(q, 1.571302295279374, 6);
  sqcRZGate(q, 2.164418303725466, 6);
  sqcRYGate(q, 1.5708110370445871, 7);
  sqcRZGate(q, -0.37877563621407173, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.09133951265238327, 0);
  sqcRZGate(q, 3.0740353574141044, 0);
  sqcRYGate(q, 2.280934798518399, 1);
  sqcRZGate(q, 2.816611482085294, 1);
  sqcRYGate(q, -1.576660260725629, 2);
  sqcRZGate(q, 1.4155856835472393, 2);
  sqcRYGate(q, -1.573658300158331, 3);
  sqcRZGate(q, -1.7262172129526114, 3);
  sqcRYGate(q, -1.5768959089820105, 4);
  sqcRZGate(q, 1.4155267239685339, 4);
  sqcRYGate(q, -0.0023038112335864724, 5);
  sqcRZGate(q, -1.758782776625501, 5);
  sqcRYGate(q, -0.01225404325771784, 6);
  sqcRZGate(q, 2.392698055423961, 6);
  sqcRYGate(q, 3.1390391231215062, 7);
  sqcRZGate(q, -2.104938772390275, 7);

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
