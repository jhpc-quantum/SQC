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

  sqcRYGate(q, 1.561749477911695, 0);
  sqcRZGate(q, 1.8182220089017118, 0);
  sqcRYGate(q, 0.293653180543435, 1);
  sqcRZGate(q, 0.11163310512573854, 1);
  sqcRYGate(q, 0.3565578638436329, 2);
  sqcRZGate(q, -2.6141794196301813, 2);
  sqcRYGate(q, 0.9858517585150182, 3);
  sqcRZGate(q, 0.1958492619596273, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.619640487890766, 0);
  sqcRZGate(q, -2.092906968618215, 0);
  sqcRYGate(q, 0.9005394301340345, 1);
  sqcRZGate(q, 0.8474369958112603, 1);
  sqcRYGate(q, -1.4309469559812067, 2);
  sqcRZGate(q, 0.7055068262717317, 2);
  sqcRYGate(q, -2.189971840122066, 3);
  sqcRZGate(q, -1.1345060640173763, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.614840705328589, 0);
  sqcRZGate(q, 2.3055480880865833, 0);
  sqcRYGate(q, -2.0787615448348946, 1);
  sqcRZGate(q, 2.3021481179157512, 1);
  sqcRYGate(q, 2.1566525902744904, 2);
  sqcRZGate(q, 2.817211064593909, 2);
  sqcRYGate(q, -2.9550964412335765, 3);
  sqcRZGate(q, -2.977411180139367, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.9428075927413646, 0);
  sqcRZGate(q, -2.4171935039540964, 0);
  sqcRYGate(q, -2.5674238521903585, 1);
  sqcRZGate(q, 0.15946258116459272, 1);
  sqcRYGate(q, -0.058243013460792165, 2);
  sqcRZGate(q, 0.07918567199974991, 2);
  sqcRYGate(q, -1.349401538750202, 3);
  sqcRZGate(q, -3.1261253953711967, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.949209814691154, 0);
  sqcRZGate(q, -1.5520175315911435, 0);
  sqcRYGate(q, 0.12996227980616123, 1);
  sqcRZGate(q, 0.5849281411126306, 1);
  sqcRYGate(q, 2.378401105341321, 2);
  sqcRZGate(q, 0.2907257010161677, 2);
  sqcRYGate(q, -0.7696064449309592, 3);
  sqcRZGate(q, 1.7021733240847956, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.873252295633365, 0);
  sqcRZGate(q, 1.6988766342572608, 0);
  sqcRYGate(q, 1.929634138031592, 1);
  sqcRZGate(q, 1.9154474218254853, 1);
  sqcRYGate(q, 1.3177966354715025, 2);
  sqcRZGate(q, 0.8582328424823535, 2);
  sqcRYGate(q, -0.46540192958026255, 3);
  sqcRZGate(q, -0.1319071138196426, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7754486574767936, 0);
  sqcRZGate(q, -2.216171035620242, 0);
  sqcRYGate(q, 1.3330490686075054, 1);
  sqcRZGate(q, 1.206101435462827, 1);
  sqcRYGate(q, 2.3173697837565976, 2);
  sqcRZGate(q, 2.777242855882764, 2);
  sqcRYGate(q, -1.3723343181022996, 3);
  sqcRZGate(q, -0.10670408706644262, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.4504611638654854, 0);
  sqcRZGate(q, 2.165751471881552, 0);
  sqcRYGate(q, 3.10518213695555, 1);
  sqcRZGate(q, -3.1030268895585777, 1);
  sqcRYGate(q, 2.755121109491249, 2);
  sqcRZGate(q, -2.8612985503996136, 2);
  sqcRYGate(q, -2.281827987554075, 3);
  sqcRZGate(q, 0.3640595811900793, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6042519331290113, 0);
  sqcRZGate(q, 0.25695492681641896, 0);
  sqcRYGate(q, -0.14675852454070704, 1);
  sqcRZGate(q, -1.6573854034973403, 1);
  sqcRYGate(q, -1.4793037611068014, 2);
  sqcRZGate(q, 0.8792082211121474, 2);
  sqcRYGate(q, -1.9920371289651266, 3);
  sqcRZGate(q, -0.13884183202054867, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.38462656626411906, 0);
  sqcRZGate(q, 1.486463119913787, 0);
  sqcRYGate(q, -2.9635528903452766, 1);
  sqcRZGate(q, -2.521884679802865, 1);
  sqcRYGate(q, -2.652315242794002, 2);
  sqcRZGate(q, 0.47346143049533934, 2);
  sqcRYGate(q, 0.5168855225558753, 3);
  sqcRZGate(q, 0.07687186625421973, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5145722923119235, 0);
  sqcRZGate(q, -0.5626794838843492, 0);
  sqcRYGate(q, -3.139429996223338, 1);
  sqcRZGate(q, 2.592515228568789, 1);
  sqcRYGate(q, 2.9773933218841835, 2);
  sqcRZGate(q, -1.9381144906942858, 2);
  sqcRYGate(q, -1.0863711714192217, 3);
  sqcRZGate(q, -2.641437786519217, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.8595051662606603, 0);
  sqcRZGate(q, 1.659888806618198, 0);
  sqcRYGate(q, -1.470548712142202, 1);
  sqcRZGate(q, 0.7846661487438802, 1);
  sqcRYGate(q, 0.6931946479112829, 2);
  sqcRZGate(q, 0.2939815069069599, 2);
  sqcRYGate(q, -1.4575815426199945, 3);
  sqcRZGate(q, -0.7244353186570525, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.09180937014196644, 0);
  sqcRZGate(q, 1.8836799196121439, 0);
  sqcRYGate(q, -2.361211229010231, 1);
  sqcRZGate(q, -2.050850017875211, 1);
  sqcRYGate(q, 3.051386162747161, 2);
  sqcRZGate(q, 0.26021151488148714, 2);
  sqcRYGate(q, -0.42908741632840647, 3);
  sqcRZGate(q, -1.1757064354577453, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8913574267361312, 0);
  sqcRZGate(q, 0.648436055511747, 0);
  sqcRYGate(q, -2.1966509852447986, 1);
  sqcRZGate(q, 2.514353746168813, 1);
  sqcRYGate(q, -0.07622747379066667, 2);
  sqcRZGate(q, -1.4255083241853912, 2);
  sqcRYGate(q, -2.273301270531652, 3);
  sqcRZGate(q, -2.322578737728248, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.20363307111878903, 0);
  sqcRZGate(q, -1.7843114077047622, 0);
  sqcRYGate(q, -1.1854638760847678, 1);
  sqcRZGate(q, -3.114297222342172, 1);
  sqcRYGate(q, -0.5376074113602378, 2);
  sqcRZGate(q, 1.9115491037627157, 2);
  sqcRYGate(q, -3.069748229841168, 3);
  sqcRZGate(q, 1.5001825292650994, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.879586274213289, 0);
  sqcRZGate(q, -0.5981655900755634, 0);
  sqcRYGate(q, -1.735386251665176, 1);
  sqcRZGate(q, 2.3878277620760033, 1);
  sqcRYGate(q, 1.4535380972077654, 2);
  sqcRZGate(q, 2.078764454685256, 2);
  sqcRYGate(q, -0.880625003725557, 3);
  sqcRZGate(q, -2.223433431310064, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.5311672249398485, 0);
  sqcRZGate(q, 1.7664143447036553, 0);
  sqcRYGate(q, -2.245263474181593, 1);
  sqcRZGate(q, 2.1406002749896134, 1);
  sqcRYGate(q, 1.7110104657060978, 2);
  sqcRZGate(q, -1.825462895994864, 2);
  sqcRYGate(q, 2.323599136751465, 3);
  sqcRZGate(q, 1.1798972368018639, 3);

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
