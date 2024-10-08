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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -1.8707136727831404, 0);
  sqcRZGate(q, 1.5765270114519385, 0);
  sqcRYGate(q, -2.5153430553278815, 1);
  sqcRZGate(q, 1.4691815414216247, 1);
  sqcRYGate(q, 0.49792557320164654, 2);
  sqcRZGate(q, 2.6108581144526393, 2);
  sqcRYGate(q, -3.0446459573882474, 3);
  sqcRZGate(q, 2.0172032680313707, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.639396702254671, 0);
  sqcRZGate(q, -0.08855969090245885, 0);
  sqcRYGate(q, 1.1062081056748223, 1);
  sqcRZGate(q, 2.8517144492019355, 1);
  sqcRYGate(q, 1.9668469489954032, 2);
  sqcRZGate(q, -0.3546895827680432, 2);
  sqcRYGate(q, -1.3997409826354668, 3);
  sqcRZGate(q, 0.5570419305878964, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.0731723426816107, 0);
  sqcRZGate(q, 2.528187368443127, 0);
  sqcRYGate(q, -2.0509974488268568, 1);
  sqcRZGate(q, -1.4468011277432369, 1);
  sqcRYGate(q, 1.36958215631668, 2);
  sqcRZGate(q, -0.4250766026624537, 2);
  sqcRYGate(q, 2.778089673472354, 3);
  sqcRZGate(q, -2.071760175704049, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7960889783253735, 0);
  sqcRZGate(q, 1.6724820350179326, 0);
  sqcRYGate(q, 0.9940555261093315, 1);
  sqcRZGate(q, -1.3864700824083283, 1);
  sqcRYGate(q, -1.4308485901718235, 2);
  sqcRZGate(q, 1.7627624590657, 2);
  sqcRYGate(q, 0.47092362804397114, 3);
  sqcRZGate(q, 0.21867503301820168, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7873651676491287, 0);
  sqcRZGate(q, 1.6905300499315572, 0);
  sqcRYGate(q, 2.0387300571033777, 1);
  sqcRZGate(q, 2.24571762493506, 1);
  sqcRYGate(q, 3.1113190848816004, 2);
  sqcRZGate(q, 1.5651301215468982, 2);
  sqcRYGate(q, 1.999674507820342, 3);
  sqcRZGate(q, 1.4007231714853674, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0035716271350257, 0);
  sqcRZGate(q, 1.1038537282699492, 0);
  sqcRYGate(q, 2.699321547049386, 1);
  sqcRZGate(q, -2.973078703626704, 1);
  sqcRYGate(q, 2.234906795197194, 2);
  sqcRZGate(q, 2.6513713881038554, 2);
  sqcRYGate(q, 1.7269078152002155, 3);
  sqcRZGate(q, -2.832591633764181, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2095053246978864, 0);
  sqcRZGate(q, -2.1687576097491204, 0);
  sqcRYGate(q, -0.6937502490687377, 1);
  sqcRZGate(q, 2.812458243223992, 1);
  sqcRYGate(q, -2.712087947943635, 2);
  sqcRZGate(q, 2.0715295830295455, 2);
  sqcRYGate(q, 1.0736377040998057, 3);
  sqcRZGate(q, -2.5466237172087465, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9968383299339258, 0);
  sqcRZGate(q, -2.1254742652601886, 0);
  sqcRYGate(q, 2.0918528005105177, 1);
  sqcRZGate(q, 0.6591518494711665, 1);
  sqcRYGate(q, 0.3180884571662288, 2);
  sqcRZGate(q, 2.6683454707533363, 2);
  sqcRYGate(q, -1.5538900376666156, 3);
  sqcRZGate(q, 2.9646461432222635, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3507695487967852, 0);
  sqcRZGate(q, 2.959780363266416, 0);
  sqcRYGate(q, -0.41197142636062983, 1);
  sqcRZGate(q, -2.2821392541193486, 1);
  sqcRYGate(q, -2.2189054533843455, 2);
  sqcRZGate(q, -0.05947239687164309, 2);
  sqcRYGate(q, -3.025049498702928, 3);
  sqcRZGate(q, -0.6435444804750545, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.23168023088907508, 0);
  sqcRZGate(q, 0.6357825690656592, 0);
  sqcRYGate(q, 0.8144662961974252, 1);
  sqcRZGate(q, 1.6447585061847971, 1);
  sqcRYGate(q, 1.0617959082796684, 2);
  sqcRZGate(q, 2.4345117043123117, 2);
  sqcRYGate(q, 2.67429181558704, 3);
  sqcRZGate(q, 1.3570311523144003, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9345411606096938, 0);
  sqcRZGate(q, 1.6691599340922734, 0);
  sqcRYGate(q, -0.8891646351270914, 1);
  sqcRZGate(q, 1.1958294570286097, 1);
  sqcRYGate(q, 1.2184291709169706, 2);
  sqcRZGate(q, 0.4110384726927822, 2);
  sqcRYGate(q, -1.3387255457505667, 3);
  sqcRZGate(q, 2.417438276022541, 3);

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
