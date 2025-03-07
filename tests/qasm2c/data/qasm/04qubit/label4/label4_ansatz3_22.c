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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 0.9031483832150586, 0);
  sqcRZGate(q, 0.5497487504236642, 0);
  sqcRYGate(q, -0.40274735413434454, 1);
  sqcRZGate(q, -2.7383872814537953, 1);
  sqcRYGate(q, 2.5140489026223607, 2);
  sqcRZGate(q, -1.8583234715484311, 2);
  sqcRYGate(q, 0.4162202616432875, 3);
  sqcRZGate(q, -0.7312558673818161, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.06386602029288202, 0);
  sqcRZGate(q, -0.590277316699602, 0);
  sqcRYGate(q, 3.0531755551581874, 1);
  sqcRZGate(q, 2.627029423632749, 1);
  sqcRYGate(q, -0.9800250952897562, 2);
  sqcRZGate(q, 1.6395341555011205, 2);
  sqcRYGate(q, -2.683186862757599, 3);
  sqcRZGate(q, 2.739811675946417, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.7076448826741113, 0);
  sqcRZGate(q, 2.179060487757754, 0);
  sqcRYGate(q, 1.0281603599887355, 1);
  sqcRZGate(q, -2.6460677112218853, 1);
  sqcRYGate(q, -2.4982912276558285, 2);
  sqcRZGate(q, -1.7630716545588982, 2);
  sqcRYGate(q, -1.1906268285736337, 3);
  sqcRZGate(q, -2.62524285639538, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.8243960404629807, 0);
  sqcRZGate(q, -0.263806491944373, 0);
  sqcRYGate(q, -2.4615258582809756, 1);
  sqcRZGate(q, -2.222486348423536, 1);
  sqcRYGate(q, -2.804247529853771, 2);
  sqcRZGate(q, -1.616250260553122, 2);
  sqcRYGate(q, -0.7780986703573779, 3);
  sqcRZGate(q, -0.013367403508764546, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.4077406849154501, 0);
  sqcRZGate(q, 0.21266520425549282, 0);
  sqcRYGate(q, 2.5272597142197575, 1);
  sqcRZGate(q, 1.9648226958656902, 1);
  sqcRYGate(q, -2.3212259485583755, 2);
  sqcRZGate(q, -1.9534009775582248, 2);
  sqcRYGate(q, -0.3506388939549379, 3);
  sqcRZGate(q, 1.5172490743348739, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.230751378277523, 0);
  sqcRZGate(q, 1.84019344517088, 0);
  sqcRYGate(q, 2.9103220149347235, 1);
  sqcRZGate(q, 1.0448067695503864, 1);
  sqcRYGate(q, 0.21296671585105553, 2);
  sqcRZGate(q, -2.7614450869180445, 2);
  sqcRYGate(q, 2.182178472522973, 3);
  sqcRZGate(q, 0.6469924658464017, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.3247071917561808, 0);
  sqcRZGate(q, 3.0269472585012993, 0);
  sqcRYGate(q, -2.5371786610188756, 1);
  sqcRZGate(q, -0.6213788072314758, 1);
  sqcRYGate(q, 0.3941717937719397, 2);
  sqcRZGate(q, 1.6284935303570354, 2);
  sqcRYGate(q, 3.029924304187943, 3);
  sqcRZGate(q, -0.7854519539763397, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.221946494151083, 0);
  sqcRZGate(q, -2.1480267929239916, 0);
  sqcRYGate(q, 0.4783257573690225, 1);
  sqcRZGate(q, 1.9754741877361157, 1);
  sqcRYGate(q, -1.5968969361756225, 2);
  sqcRZGate(q, 3.0586516471878253, 2);
  sqcRYGate(q, -2.4065699352999657, 3);
  sqcRZGate(q, 1.2821493926500602, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.0327298697883034, 0);
  sqcRZGate(q, -0.7069612975299114, 0);
  sqcRYGate(q, -1.164985298037858, 1);
  sqcRZGate(q, 3.001774335199526, 1);
  sqcRYGate(q, 3.0517679140375082, 2);
  sqcRZGate(q, -0.9743883718531584, 2);
  sqcRYGate(q, 1.0123912646787447, 3);
  sqcRZGate(q, 0.5056703560318478, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.0498664413684407, 0);
  sqcRZGate(q, -2.0401967403933856, 0);
  sqcRYGate(q, 1.9275186516836518, 1);
  sqcRZGate(q, 1.4146549583734105, 1);
  sqcRYGate(q, -1.8543490541302587, 2);
  sqcRZGate(q, 2.5129938096893825, 2);
  sqcRYGate(q, 0.8386191706816215, 3);
  sqcRZGate(q, 1.9885607063873343, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6810887711010905, 0);
  sqcRZGate(q, 0.9492975231418219, 0);
  sqcRYGate(q, -1.7861847110550508, 1);
  sqcRZGate(q, 2.18879611898991, 1);
  sqcRYGate(q, 3.085647960386399, 2);
  sqcRZGate(q, -0.9850643851134562, 2);
  sqcRYGate(q, -2.549709301748675, 3);
  sqcRZGate(q, 2.8431876799475897, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.04974751802103271, 0);
  sqcRZGate(q, -2.871849745283662, 0);
  sqcRYGate(q, -0.567513086291779, 1);
  sqcRZGate(q, -0.20721243912247736, 1);
  sqcRYGate(q, 1.8284330742394017, 2);
  sqcRZGate(q, -0.10482161858623669, 2);
  sqcRYGate(q, 0.9712453845970515, 3);
  sqcRZGate(q, 1.798588922952776, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.0475295853763362, 0);
  sqcRZGate(q, 1.3291054980627584, 0);
  sqcRYGate(q, 0.32237276278817156, 1);
  sqcRZGate(q, 2.7055287731347915, 1);
  sqcRYGate(q, 1.4448753428078078, 2);
  sqcRZGate(q, -0.2784063287460294, 2);
  sqcRYGate(q, -0.19958611042889896, 3);
  sqcRZGate(q, 2.265674714636156, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7658516350368211, 0);
  sqcRZGate(q, -2.2013848016361086, 0);
  sqcRYGate(q, -1.58035612454344, 1);
  sqcRZGate(q, 2.6642480759830782, 1);
  sqcRYGate(q, -1.7735779734292498, 2);
  sqcRZGate(q, 2.92042611594188, 2);
  sqcRYGate(q, -0.3326409531175294, 3);
  sqcRZGate(q, 2.724609213780566, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.6020232996472834, 0);
  sqcRZGate(q, 2.325508047257539, 0);
  sqcRYGate(q, 2.8163001040041666, 1);
  sqcRZGate(q, 2.618523716103411, 1);
  sqcRYGate(q, 1.7964405287541314, 2);
  sqcRZGate(q, -2.0234412425080377, 2);
  sqcRYGate(q, 1.1307861032519146, 3);
  sqcRZGate(q, 1.686408765745741, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.5168975830667613, 0);
  sqcRZGate(q, 1.8058329406730158, 0);
  sqcRYGate(q, -0.2125273664206525, 1);
  sqcRZGate(q, 0.004746450418445568, 1);
  sqcRYGate(q, -2.3193719631019456, 2);
  sqcRZGate(q, 1.7054266079467082, 2);
  sqcRYGate(q, 0.6414880783013389, 3);
  sqcRZGate(q, 2.1342371267749014, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6373930597773056, 0);
  sqcRZGate(q, 1.7751215548712478, 0);
  sqcRYGate(q, -2.484036603449697, 1);
  sqcRZGate(q, 2.4086954942211256, 1);
  sqcRYGate(q, -0.8986660703912395, 2);
  sqcRZGate(q, -1.2820250142806762, 2);
  sqcRYGate(q, -1.8896449041264356, 3);
  sqcRZGate(q, 2.948736213966926, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.14442269828438725, 0);
  sqcRZGate(q, 1.8957539252507616, 0);
  sqcRYGate(q, 1.2439091839670455, 1);
  sqcRZGate(q, 3.0334446019334216, 1);
  sqcRYGate(q, 0.8721691147651891, 2);
  sqcRZGate(q, -2.7487049557702186, 2);
  sqcRYGate(q, 1.3034427058472782, 3);
  sqcRZGate(q, 0.3104951023270056, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.11425754350684869, 0);
  sqcRZGate(q, -2.253766527901158, 0);
  sqcRYGate(q, 1.7246345674812478, 1);
  sqcRZGate(q, 1.1071370522295092, 1);
  sqcRYGate(q, -1.4767774141210193, 2);
  sqcRZGate(q, 1.1838075743323269, 2);
  sqcRYGate(q, -0.09543051298030243, 3);
  sqcRZGate(q, 0.09594719611590456, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.5495975860998623, 0);
  sqcRZGate(q, 1.615542559109631, 0);
  sqcRYGate(q, -2.6922772504443575, 1);
  sqcRZGate(q, 0.8742122289950593, 1);
  sqcRYGate(q, 2.6915105195611635, 2);
  sqcRZGate(q, 2.9029816759448113, 2);
  sqcRYGate(q, 1.534415299515581, 3);
  sqcRZGate(q, -0.4591070233484867, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.8064837682341817, 0);
  sqcRZGate(q, -3.1275809417465243, 0);
  sqcRYGate(q, 1.7517924160917806, 1);
  sqcRZGate(q, -1.0582773470866442, 1);
  sqcRYGate(q, -2.45590009622159, 2);
  sqcRZGate(q, 2.336247903112876, 2);
  sqcRYGate(q, -0.8444788414115552, 3);
  sqcRZGate(q, -2.5954300441815117, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.1463628589328811, 0);
  sqcRZGate(q, 2.5098425170146323, 0);
  sqcRYGate(q, -0.15076368188836617, 1);
  sqcRZGate(q, 2.834549313471403, 1);
  sqcRYGate(q, -1.2735613914199782, 2);
  sqcRZGate(q, 0.5574040696407493, 2);
  sqcRYGate(q, 1.2508938461125136, 3);
  sqcRZGate(q, -0.18606877835327396, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.1182625081027389, 0);
  sqcRZGate(q, -0.678145529482439, 0);
  sqcRYGate(q, -1.1223974004722104, 1);
  sqcRZGate(q, 2.0238721360947682, 1);
  sqcRYGate(q, 1.7577821914627094, 2);
  sqcRZGate(q, 0.3234573002137405, 2);
  sqcRYGate(q, 1.9851973051880105, 3);
  sqcRZGate(q, 3.012990445081734, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8965031152040076, 0);
  sqcRZGate(q, 2.4629109154383366, 0);
  sqcRYGate(q, -0.6657839121713963, 1);
  sqcRZGate(q, 2.9090113312949653, 1);
  sqcRYGate(q, 1.7554902462120303, 2);
  sqcRZGate(q, -0.4678051824148337, 2);
  sqcRYGate(q, -1.9786154053181209, 3);
  sqcRZGate(q, 2.7298633580847285, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.9816034327623324, 0);
  sqcRZGate(q, 0.741444730790022, 0);
  sqcRYGate(q, -1.2542087022791661, 1);
  sqcRZGate(q, 0.20039004617467704, 1);
  sqcRYGate(q, 2.8009420904942357, 2);
  sqcRZGate(q, 0.35158987657536717, 2);
  sqcRYGate(q, 2.851901484352075, 3);
  sqcRZGate(q, 2.064790670853251, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.642310585402812, 0);
  sqcRZGate(q, -0.28542459873240666, 0);
  sqcRYGate(q, -1.198170248362867, 1);
  sqcRZGate(q, 3.138904328274655, 1);
  sqcRYGate(q, 2.580652911248712, 2);
  sqcRZGate(q, -1.5442134771640452, 2);
  sqcRYGate(q, 0.48513634982772863, 3);
  sqcRZGate(q, -2.0006429831544943, 3);

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
