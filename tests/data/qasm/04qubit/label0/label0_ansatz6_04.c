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

  sqcRYGate(q, 2.353472700497786, 0);
  sqcRYGate(q, -0.6331277389633012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15628298827641895, 0);
  sqcRYGate(q, -1.5423314127744943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7729920943935205, 1);
  sqcRYGate(q, -2.6283833674712347, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0344075864324154, 1);
  sqcRYGate(q, 0.2323456270273292, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.130171685579022, 2);
  sqcRYGate(q, 0.7264142571769785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.040207581856411, 2);
  sqcRYGate(q, 0.1329690148136085, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.45152802878971343, 0);
  sqcRYGate(q, -1.791131866956847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9193940152535561, 0);
  sqcRYGate(q, -2.15963977762145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7163459586133358, 1);
  sqcRYGate(q, -1.6874882339975512, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2789928939687771, 1);
  sqcRYGate(q, 1.9865420837741432, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6693943700636407, 2);
  sqcRYGate(q, 1.4505724422045772, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.745050813026976, 2);
  sqcRYGate(q, 0.014299786512145566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.25512374198461035, 0);
  sqcRYGate(q, 0.3891541895975222, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.24991468861206087, 0);
  sqcRYGate(q, 2.193456646946125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9789142255702645, 1);
  sqcRYGate(q, 2.8965508733501766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1721922408915955, 1);
  sqcRYGate(q, -2.74203859650881, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2874931490920441, 2);
  sqcRYGate(q, 1.8198860613758254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8453920570244202, 2);
  sqcRYGate(q, -1.7493587564679542, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9600036003378012, 0);
  sqcRYGate(q, 2.8561813577058603, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7327461281966645, 0);
  sqcRYGate(q, 1.887515967853238, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7841700606926487, 1);
  sqcRYGate(q, 1.4663606826643831, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.940603183227864, 1);
  sqcRYGate(q, 3.0781948613589525, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.853917781623135, 2);
  sqcRYGate(q, -1.3668773455200274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1860843115129933, 2);
  sqcRYGate(q, 2.097930333692876, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.445899612934829, 0);
  sqcRYGate(q, -2.6106689915262926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11850813190435523, 0);
  sqcRYGate(q, -0.5603940022077282, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5184461712249808, 1);
  sqcRYGate(q, 1.6849898265377998, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6874653396704007, 1);
  sqcRYGate(q, 1.1168293356431116, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9861508476752912, 2);
  sqcRYGate(q, -1.890371469851578, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.832075223588943, 2);
  sqcRYGate(q, -3.0228411182150747, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8509022432026447, 0);
  sqcRYGate(q, -2.2012389015748055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5985920573354893, 0);
  sqcRYGate(q, 0.0627820534132768, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6690752151325218, 1);
  sqcRYGate(q, 1.638527130079611, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.614398060878095, 1);
  sqcRYGate(q, -1.835816464325637, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.48021365117183995, 2);
  sqcRYGate(q, 1.1917200331075986, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.644220519418098, 2);
  sqcRYGate(q, 2.796994350839884, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9508727430884842, 0);
  sqcRYGate(q, -2.507285025648643, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17652270004712278, 0);
  sqcRYGate(q, 2.1762689999161027, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8628257975988216, 1);
  sqcRYGate(q, 2.216965281320995, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0192307704483836, 1);
  sqcRYGate(q, -2.1427143476142683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8216150938331332, 2);
  sqcRYGate(q, -0.8059613896300711, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3981094712496196, 2);
  sqcRYGate(q, 0.43466118392500785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2599525665102453, 0);
  sqcRYGate(q, 0.30942315055557085, 1);
  sqcRYGate(q, -0.8382522025852593, 2);
  sqcRYGate(q, 0.9802572007910069, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
