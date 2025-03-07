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

  sqcRYGate(q, 1.9068890499216522, 0);
  sqcRYGate(q, -0.9297587390198014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.614576681786358, 0);
  sqcRYGate(q, -1.6654428290578682, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.068423882657773, 2);
  sqcRYGate(q, -0.37411484790584737, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7429668017354287, 2);
  sqcRYGate(q, 1.8438394681990682, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8222001068373128, 0);
  sqcRYGate(q, 2.3063115729311914, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4954595126293757, 0);
  sqcRYGate(q, 0.8663770654794868, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.443909106815694, 1);
  sqcRYGate(q, -1.4483892198433974, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0782129284231579, 1);
  sqcRYGate(q, 2.405620772964646, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0220373450723863, 0);
  sqcRYGate(q, 2.916433735971443, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.086030032696887, 0);
  sqcRYGate(q, -0.9716992884494218, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6584154866209717, 1);
  sqcRYGate(q, 1.711986993030562, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5046875866364564, 1);
  sqcRYGate(q, -0.7689349994807246, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.199876252772261, 0);
  sqcRYGate(q, -0.2579321253118998, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.098089209751534, 0);
  sqcRYGate(q, 0.8888004844494545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9845279306181736, 2);
  sqcRYGate(q, 1.3270181126105633, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3023725104060988, 2);
  sqcRYGate(q, -2.6279344697765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.553285123967024, 0);
  sqcRYGate(q, -1.1025207129039591, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1628696195520196, 0);
  sqcRYGate(q, -1.30304890701892, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5874720502890867, 1);
  sqcRYGate(q, 1.5297511793603185, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8154486393285088, 1);
  sqcRYGate(q, -0.06907066780613391, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8317264676865078, 0);
  sqcRYGate(q, -2.0822954410201837, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.22612953240817646, 0);
  sqcRYGate(q, 3.138895024607405, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7681014705118643, 1);
  sqcRYGate(q, -2.622484206742587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.40865609812347, 1);
  sqcRYGate(q, 1.9485230280737067, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.465236800506641, 0);
  sqcRYGate(q, 0.3144045638524993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.143127894226719, 0);
  sqcRYGate(q, -2.0016368957941095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07122602658096258, 2);
  sqcRYGate(q, -2.713053351366914, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.47516434883879083, 2);
  sqcRYGate(q, -1.1396866782446147, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1442654488504758, 0);
  sqcRYGate(q, 1.4483801970482801, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0920139473518344, 0);
  sqcRYGate(q, 1.2575809694361264, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3328479334186927, 1);
  sqcRYGate(q, 0.5438240116968239, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6788826950437978, 1);
  sqcRYGate(q, -1.8703573764834667, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1352557423363914, 0);
  sqcRYGate(q, 3.1032583635526594, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9290148428805174, 0);
  sqcRYGate(q, -1.8826278068586464, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1161628307977103, 1);
  sqcRYGate(q, -2.6664995491436745, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1401332576660623, 1);
  sqcRYGate(q, 2.8052867479271577, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.15942275896335367, 0);
  sqcRYGate(q, -2.8797769710472325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.627074778428528, 0);
  sqcRYGate(q, 1.1064850356003761, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4314446280138746, 2);
  sqcRYGate(q, -1.0580523954294188, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.008421985516303465, 2);
  sqcRYGate(q, 1.1846566772418428, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.686877665334724, 0);
  sqcRYGate(q, -0.9054791446911692, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.87085204154618, 0);
  sqcRYGate(q, 1.1784904671928302, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8553675088874715, 1);
  sqcRYGate(q, 2.809596403006934, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.488361119007358, 1);
  sqcRYGate(q, -3.0370056908202896, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6792855200702355, 0);
  sqcRYGate(q, -0.9239730257037885, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.880395810891705, 0);
  sqcRYGate(q, 2.048640421636602, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9088146043456207, 1);
  sqcRYGate(q, -0.11836789513979362, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3283598656017157, 1);
  sqcRYGate(q, -0.14226766422720555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2916692730626806, 0);
  sqcRYGate(q, 0.09413199871020517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4171707647102965, 0);
  sqcRYGate(q, 2.0530915222985078, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4249808633753151, 2);
  sqcRYGate(q, 0.9555958048093715, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.964328581891162, 2);
  sqcRYGate(q, 1.1240860934555945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6600989609802062, 0);
  sqcRYGate(q, -0.6473646147111588, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5132038122988187, 0);
  sqcRYGate(q, -0.7957247230346298, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5362128623602637, 1);
  sqcRYGate(q, -1.755646256023978, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1645024852129255, 1);
  sqcRYGate(q, -2.373041276214568, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.574255827506986, 0);
  sqcRYGate(q, -0.20078874130825922, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0702863673760388, 0);
  sqcRYGate(q, 0.40503331112966623, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7774695380249046, 1);
  sqcRYGate(q, 3.0913299555521827, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6005034549225094, 1);
  sqcRYGate(q, -1.6065907746863717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.884444847845719, 0);
  sqcRYGate(q, 2.2056022456085707, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4760681148376256, 0);
  sqcRYGate(q, -1.5611305407551144, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.873491994271243, 2);
  sqcRYGate(q, -1.268352581730155, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07589013632032038, 2);
  sqcRYGate(q, -0.496941206170859, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.31248184752164093, 0);
  sqcRYGate(q, 0.6199050655603612, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.170799327928885, 0);
  sqcRYGate(q, 2.3801840936477134, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0318425856671967, 1);
  sqcRYGate(q, -3.0497877874603576, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.611148420996248, 1);
  sqcRYGate(q, -0.8274866689539837, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3296432287828122, 0);
  sqcRYGate(q, -1.8424538533469887, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.314694427128485, 0);
  sqcRYGate(q, -0.4708992709045283, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.0741791589748491, 1);
  sqcRYGate(q, 1.511869492960325, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.817354756425731, 1);
  sqcRYGate(q, -0.6142879739154538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1076594640784183, 0);
  sqcRYGate(q, 1.143160139892403, 1);
  sqcRYGate(q, 0.10382098201027645, 2);
  sqcRYGate(q, 1.2090782380111582, 3);

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
