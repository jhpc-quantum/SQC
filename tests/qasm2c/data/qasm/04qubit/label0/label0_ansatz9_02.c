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

  sqcRYGate(q, -2.159503695147828, 0);
  sqcRYGate(q, -2.138393428433159, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.320979524037795, 0);
  sqcRYGate(q, -2.8320840668288407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8427553924844373, 2);
  sqcRYGate(q, 1.4040143663504157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3662996758364108, 2);
  sqcRYGate(q, 2.2049769998630744, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5627889376136948, 0);
  sqcRYGate(q, 0.2476585807969034, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.48825187958580596, 0);
  sqcRYGate(q, 2.1436859831728325, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4937223482533746, 1);
  sqcRYGate(q, 0.2791757758491942, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5799735405440245, 1);
  sqcRYGate(q, 1.2974390179111461, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.320183988962607, 0);
  sqcRYGate(q, 0.08252270443824279, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7181641043555697, 0);
  sqcRYGate(q, 0.9624236237634736, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5390604201795357, 1);
  sqcRYGate(q, -0.22294324897738552, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.789054866643919, 1);
  sqcRYGate(q, -1.0379332207463516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.431276592282198, 0);
  sqcRYGate(q, -2.9402457384028247, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3051350186241124, 0);
  sqcRYGate(q, -1.9461310437636374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7627081974665337, 2);
  sqcRYGate(q, -0.14237877590706233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11681072224651476, 2);
  sqcRYGate(q, -1.657070508710709, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2704186228514698, 0);
  sqcRYGate(q, -0.23398130198464812, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2901058369463567, 0);
  sqcRYGate(q, 0.8395250936892723, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7047378673314129, 1);
  sqcRYGate(q, -0.6505300892696884, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.17600460241875174, 1);
  sqcRYGate(q, 1.0267509787538451, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6594160954229764, 0);
  sqcRYGate(q, -1.972341547834984, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7175561294698625, 0);
  sqcRYGate(q, 2.31393565280336, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2873021052896931, 1);
  sqcRYGate(q, 0.09993131734730731, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14665697613359008, 1);
  sqcRYGate(q, -1.4697932801410367, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4495712849645621, 0);
  sqcRYGate(q, 3.0212111100968904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.943498996135926, 0);
  sqcRYGate(q, 0.5820895530277497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7419261185710684, 2);
  sqcRYGate(q, -1.029890573381671, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2161593792296586, 2);
  sqcRYGate(q, 2.7655532688833118, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5376855358374777, 0);
  sqcRYGate(q, -1.3570820248794653, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.920527183591676, 0);
  sqcRYGate(q, -0.2654753508764083, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1214178433506246, 1);
  sqcRYGate(q, 1.2827395737341238, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8189096407498626, 1);
  sqcRYGate(q, -0.8847223916931654, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6801061786342282, 0);
  sqcRYGate(q, 0.18557832289905002, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5140156678512153, 0);
  sqcRYGate(q, 1.6678493460048172, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.005095813115868, 1);
  sqcRYGate(q, 0.5782295080304958, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.17416047610622964, 1);
  sqcRYGate(q, 0.7815526433646424, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.16782581687636355, 0);
  sqcRYGate(q, -1.2202673164743159, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8355962690367358, 0);
  sqcRYGate(q, -0.8956996422195074, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9701733594656348, 2);
  sqcRYGate(q, 1.378941339331953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7646464440883802, 2);
  sqcRYGate(q, -1.1213394114210102, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9751191923279814, 0);
  sqcRYGate(q, 1.4258008841513514, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.033026072671158424, 0);
  sqcRYGate(q, -0.11848257370705895, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0195712119957774, 1);
  sqcRYGate(q, 1.4110790394499444, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.947170617712111, 1);
  sqcRYGate(q, -1.8848237765087497, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.524663396794031, 0);
  sqcRYGate(q, 1.538235414309707, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8668180224758417, 0);
  sqcRYGate(q, -0.7805454524624639, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6906801458562887, 1);
  sqcRYGate(q, -2.3122372337349444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.843815333047823, 1);
  sqcRYGate(q, 2.5295765251344458, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5857418553808333, 0);
  sqcRYGate(q, -1.4512011788992956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5133647449095116, 0);
  sqcRYGate(q, 1.7840873864589444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.132508895930611, 2);
  sqcRYGate(q, 1.898132604810058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8638846406381635, 2);
  sqcRYGate(q, -0.10019919023190657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9790983359283807, 0);
  sqcRYGate(q, 1.4732977690364173, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.53194850412721, 0);
  sqcRYGate(q, -0.00890789661120106, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.0973615458834951, 1);
  sqcRYGate(q, -2.9652567538430326, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8259497672857803, 1);
  sqcRYGate(q, -2.5277794567272323, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5131297315708163, 0);
  sqcRYGate(q, -0.5414831177020557, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.09805891419703554, 0);
  sqcRYGate(q, 0.31951550599375445, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6077338443228153, 1);
  sqcRYGate(q, -1.9165401450396005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7301284696648174, 1);
  sqcRYGate(q, -2.9573960465508256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6603941528390368, 0);
  sqcRYGate(q, -1.526061271207281, 1);
  sqcRYGate(q, -1.7623369087607417, 2);
  sqcRYGate(q, 1.7844578499788293, 3);

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
