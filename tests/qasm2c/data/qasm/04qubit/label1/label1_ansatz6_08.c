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

  sqcRYGate(q, -2.6597950629287452, 0);
  sqcRYGate(q, -0.518708965405516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.309091750787951, 0);
  sqcRYGate(q, 2.2401626092869567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9781258257223246, 1);
  sqcRYGate(q, -0.04060707492334551, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3258319528412104, 1);
  sqcRYGate(q, -1.4150762155677998, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7357655389478597, 2);
  sqcRYGate(q, -1.3635638646420896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1932163437598116, 2);
  sqcRYGate(q, 1.1539178147260947, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4646261713388273, 0);
  sqcRYGate(q, -0.4495972976610588, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5182201868936342, 0);
  sqcRYGate(q, 1.3871614554186564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.317587272439925, 1);
  sqcRYGate(q, 1.8977916465432612, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.61647975838929, 1);
  sqcRYGate(q, 2.1455031866956555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.067815156950563, 2);
  sqcRYGate(q, -1.177563638008484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7667361735647245, 2);
  sqcRYGate(q, -2.469124956232303, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7636474976376819, 0);
  sqcRYGate(q, 1.9106186997329961, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9826535468130138, 0);
  sqcRYGate(q, 1.101296643792793, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3072925545546319, 1);
  sqcRYGate(q, 0.8173417076651025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9275680924471832, 1);
  sqcRYGate(q, 1.3839166047671874, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3683108209721877, 2);
  sqcRYGate(q, 1.646207601339679, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8987129848790518, 2);
  sqcRYGate(q, -0.9272753399794409, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7333058154220655, 0);
  sqcRYGate(q, 0.8070239013774816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21172012682085087, 0);
  sqcRYGate(q, 2.3795329926546533, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8975067032776118, 1);
  sqcRYGate(q, 2.4686047338572807, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.664881843918031, 1);
  sqcRYGate(q, -1.8613713599078503, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6445699564031724, 2);
  sqcRYGate(q, -0.21816554950000716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.377505829636534, 2);
  sqcRYGate(q, -1.244378162348105, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.45843108453903, 0);
  sqcRYGate(q, -1.5545595016008713, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1400272961184701, 0);
  sqcRYGate(q, 1.627446140531808, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0742762675843185, 1);
  sqcRYGate(q, 0.45625301142522995, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.530450307700685, 1);
  sqcRYGate(q, 1.9448796239649253, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.306850506174848, 2);
  sqcRYGate(q, 2.8677804563400695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6034932238663955, 2);
  sqcRYGate(q, -0.19915688232568418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8753571970065203, 0);
  sqcRYGate(q, 0.39916405112578734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.086223271831103, 0);
  sqcRYGate(q, 0.3146484386362296, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12825508924419715, 1);
  sqcRYGate(q, 2.9261783910716415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7851524952857947, 1);
  sqcRYGate(q, 0.3142543543343563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7363929123137156, 2);
  sqcRYGate(q, -1.9787831484291762, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0109074525335577, 2);
  sqcRYGate(q, -0.6066488098962206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8805166732651784, 0);
  sqcRYGate(q, -2.3894161891050105, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2975677994349566, 0);
  sqcRYGate(q, -1.1629180611979608, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5354379277644288, 1);
  sqcRYGate(q, -2.2814501088838024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1655251623239682, 1);
  sqcRYGate(q, -1.5798632810060438, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3305318641709052, 2);
  sqcRYGate(q, -2.224596493133789, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.369734181616534, 2);
  sqcRYGate(q, -1.9870007273263557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6307148115857428, 0);
  sqcRYGate(q, -2.3908302853242196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3754130647573732, 0);
  sqcRYGate(q, 0.7838165375871755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.810105296514874, 1);
  sqcRYGate(q, 0.16993888895332973, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7571549177309649, 1);
  sqcRYGate(q, 1.4028671322165769, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9384829793174218, 2);
  sqcRYGate(q, -1.0262716803525436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8780166952839699, 2);
  sqcRYGate(q, 0.9692172726299384, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.215392118809655, 0);
  sqcRYGate(q, 2.3205835843427356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.840211603136484, 0);
  sqcRYGate(q, 0.3717386052355538, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3771769248817245, 1);
  sqcRYGate(q, 2.9593116393889076, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.099952200588583, 1);
  sqcRYGate(q, -0.8673700966818735, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0370574425230168, 2);
  sqcRYGate(q, -1.2958258928354673, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2980367798738746, 2);
  sqcRYGate(q, 2.1729333023462383, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4161208731576136, 0);
  sqcRYGate(q, -2.1774285137375546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0069232456613166, 0);
  sqcRYGate(q, -2.992227852975493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.967373329538188, 1);
  sqcRYGate(q, -0.27411557624566196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.813928269519331, 1);
  sqcRYGate(q, -1.0611927146952933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1271335751814724, 2);
  sqcRYGate(q, -0.3265196391372218, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5512262963864754, 2);
  sqcRYGate(q, 0.11991184398604095, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8066400338305009, 0);
  sqcRYGate(q, 3.011078375838069, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6230794968167421, 0);
  sqcRYGate(q, 1.119489784171452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7738106764966917, 1);
  sqcRYGate(q, 1.7797970318823786, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4556861151398697, 1);
  sqcRYGate(q, -2.8838238671517984, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14416618509819917, 2);
  sqcRYGate(q, -2.1484847160050453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.099298370288127, 2);
  sqcRYGate(q, 1.31960927236513, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.662076361761986, 0);
  sqcRYGate(q, 3.045838200347728, 1);
  sqcRYGate(q, -0.266229937828804, 2);
  sqcRYGate(q, 1.8275063964696487, 3);

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
