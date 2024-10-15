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

  sqcRYGate(q, -2.122940950217952, 0);
  sqcRYGate(q, 0.15972965904570374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.35838824368019, 0);
  sqcRYGate(q, 2.1553561210781567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9351837217913563, 2);
  sqcRYGate(q, 0.20677375743732185, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8311379509372165, 2);
  sqcRYGate(q, -2.8479535240509017, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5841441786227404, 1);
  sqcRYGate(q, -2.8453387322111743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7506629866831526, 1);
  sqcRYGate(q, 2.204616690290192, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.711415713904806, 0);
  sqcRYGate(q, 0.6970374766755465, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2165993808783218, 0);
  sqcRYGate(q, -3.0949517654128798, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.009689139943298, 2);
  sqcRYGate(q, -0.1936619450323116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8951432336575973, 2);
  sqcRYGate(q, 0.44343151714415185, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0006921337486245349, 1);
  sqcRYGate(q, -0.7155797418892919, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7856548755349917, 1);
  sqcRYGate(q, -0.5313389591677999, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9726914344110043, 0);
  sqcRYGate(q, -0.9347330511478832, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5882492952915053, 0);
  sqcRYGate(q, 1.3039967134218111, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6719932092101297, 2);
  sqcRYGate(q, 1.39656858378103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5977305818318823, 2);
  sqcRYGate(q, -2.4308318814961063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.26206504332903, 1);
  sqcRYGate(q, 2.5954165451321383, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.526374759678803, 1);
  sqcRYGate(q, -0.47120868476982913, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6123552278396097, 0);
  sqcRYGate(q, 2.866890567385938, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.071716133386691, 0);
  sqcRYGate(q, 0.9465420424960895, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7569226816367154, 2);
  sqcRYGate(q, -3.056407012026943, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6889354673940938, 2);
  sqcRYGate(q, 1.0724725937521835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06178770077594198, 1);
  sqcRYGate(q, 2.7822927344295123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.279976139338018, 1);
  sqcRYGate(q, -1.1121672393938928, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3537552924701592, 0);
  sqcRYGate(q, 1.4386825391446476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.48512262134346673, 0);
  sqcRYGate(q, -2.800145464591836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3486430198676262, 2);
  sqcRYGate(q, -1.3103167786954453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8629884637215972, 2);
  sqcRYGate(q, 0.7221833047443198, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6737931402143014, 1);
  sqcRYGate(q, 2.6920867609490227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4058052809319771, 1);
  sqcRYGate(q, -2.70751746664492, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1576622317541503, 0);
  sqcRYGate(q, -2.1948220884129315, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9263939965823029, 0);
  sqcRYGate(q, 2.0406497734058737, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5844407081710723, 2);
  sqcRYGate(q, -1.5281504001308717, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0756089734377356, 2);
  sqcRYGate(q, 2.039753355407612, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6574414316851396, 1);
  sqcRYGate(q, 2.8197476244103212, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8606103479629607, 1);
  sqcRYGate(q, -0.9257995231056961, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4662171881508343, 0);
  sqcRYGate(q, 0.7935232557609879, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1138309068156191, 0);
  sqcRYGate(q, -0.9559397587903141, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4079652746480305, 2);
  sqcRYGate(q, -1.4404752828092997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7868082529191275, 2);
  sqcRYGate(q, 0.5649339359475807, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5991057792795632, 1);
  sqcRYGate(q, 1.9426341547449493, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4178054299435887, 1);
  sqcRYGate(q, 2.230722737169219, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.043055577964215, 0);
  sqcRYGate(q, 0.8410953750693659, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4972751143828473, 0);
  sqcRYGate(q, -0.06011055342528948, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6314234749002583, 2);
  sqcRYGate(q, -3.0126664882768073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.02841605864468772, 2);
  sqcRYGate(q, -1.2896001332241296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14115889142562832, 1);
  sqcRYGate(q, -3.0820787723291803, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1133939073550945, 1);
  sqcRYGate(q, -0.6617845947472034, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4960829320542968, 0);
  sqcRYGate(q, -2.6430769364586624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7454477291364987, 0);
  sqcRYGate(q, 2.9304599379789056, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.440118563327776, 2);
  sqcRYGate(q, 0.9718448019019297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.497338124276653, 2);
  sqcRYGate(q, -2.534814211242256, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7769744746953546, 1);
  sqcRYGate(q, -0.0776777154921266, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0530190210186627, 1);
  sqcRYGate(q, -2.7959044098319312, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.05138437704354626, 0);
  sqcRYGate(q, 2.809876910858114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8651403857280373, 0);
  sqcRYGate(q, -1.0012686412871037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4760623050289041, 2);
  sqcRYGate(q, 0.664643613130774, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5304118131236866, 2);
  sqcRYGate(q, -1.9930412088002705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2867485520324973, 1);
  sqcRYGate(q, -1.1453375276395723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1760104048251994, 1);
  sqcRYGate(q, -1.051896373008861, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.33863442190645543, 0);
  sqcRYGate(q, 2.0472805797279277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5656305706234306, 0);
  sqcRYGate(q, 0.8675657737341278, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6710178915777396, 2);
  sqcRYGate(q, 2.191649647543297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5005380975520155, 2);
  sqcRYGate(q, -1.733461449584301, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09480419504235357, 1);
  sqcRYGate(q, 1.505400786389366, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6936260248973416, 1);
  sqcRYGate(q, 0.19009137481896055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.114375823566515, 0);
  sqcRYGate(q, -1.3547565602149116, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.295415927351499, 0);
  sqcRYGate(q, 1.9528514236581351, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4115479657529035, 2);
  sqcRYGate(q, 2.746900394190166, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6481651211207584, 2);
  sqcRYGate(q, 0.11275918240470882, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0154744156227142, 1);
  sqcRYGate(q, -0.9213335331441558, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8281708431685755, 1);
  sqcRYGate(q, 2.4007262063466914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5880788020307621, 0);
  sqcRYGate(q, -0.42289638676468133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6317892811409704, 0);
  sqcRYGate(q, -2.5891345179530685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0440259506644933, 2);
  sqcRYGate(q, -0.7712513782122093, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1380774937173124, 2);
  sqcRYGate(q, 3.079314260313758, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0988714746221246, 1);
  sqcRYGate(q, 0.25024406328622106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7719085718529525, 1);
  sqcRYGate(q, -1.8086628878477822, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4510698088831417, 0);
  sqcRYGate(q, -2.776661462322376, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4124110116220239, 0);
  sqcRYGate(q, -1.2496160810743397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7467762321557108, 2);
  sqcRYGate(q, -2.4566720357386793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.46287799104957, 2);
  sqcRYGate(q, 2.035003884791826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8615081641869516, 1);
  sqcRYGate(q, 1.035333917793421, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7754576013073979, 1);
  sqcRYGate(q, 1.0094998913451338, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.085004732211854, 0);
  sqcRYGate(q, -0.8440655347188089, 1);
  sqcRYGate(q, -0.3587392800721485, 2);
  sqcRYGate(q, -2.5267988181507186, 3);

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
