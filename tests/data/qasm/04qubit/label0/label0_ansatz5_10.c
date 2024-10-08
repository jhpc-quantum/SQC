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

  sqcRYGate(q, 1.193182426779697, 0);
  sqcRYGate(q, 2.9252198547776653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7398360500759704, 0);
  sqcRYGate(q, -0.8536485337696584, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9862466409968462, 2);
  sqcRYGate(q, 2.9981526156841687, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.797274211083348, 2);
  sqcRYGate(q, 0.32506380908591187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0605117609831853, 1);
  sqcRYGate(q, -1.4665541502749688, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.15702907566824664, 1);
  sqcRYGate(q, 1.6167866326813083, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.010235335797196043, 0);
  sqcRYGate(q, -0.039019279556691266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2224133920760861, 0);
  sqcRYGate(q, 0.08016929345172112, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07902568302244595, 2);
  sqcRYGate(q, -0.7911171732636859, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.935319018200623, 2);
  sqcRYGate(q, 1.5581316674473942, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.944061842952358, 1);
  sqcRYGate(q, -1.3930420322889503, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.13667224755297624, 1);
  sqcRYGate(q, -2.385650818051822, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7612709173028726, 0);
  sqcRYGate(q, 0.6422272120459427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4302880253181547, 0);
  sqcRYGate(q, 0.7503107255961952, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7315962335205453, 2);
  sqcRYGate(q, -1.9403772663784995, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8280183385211846, 2);
  sqcRYGate(q, -0.8766412851747225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7478062935660761, 1);
  sqcRYGate(q, 1.48628920898949, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8421997453220958, 1);
  sqcRYGate(q, -0.8916341438738864, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.971968432019144, 0);
  sqcRYGate(q, -1.723781101783072, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7700000036066298, 0);
  sqcRYGate(q, -2.0009099112743236, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.402705471477222, 2);
  sqcRYGate(q, -2.590588821105804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4410080936407921, 2);
  sqcRYGate(q, -0.17572549750818386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5934349880990366, 1);
  sqcRYGate(q, 1.6814502349983562, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3354315909130485, 1);
  sqcRYGate(q, 2.44250698416999, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5988023026473391, 0);
  sqcRYGate(q, 1.9523905443575549, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.856101698816374, 0);
  sqcRYGate(q, -1.8442804103420332, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0718041435797865, 2);
  sqcRYGate(q, -0.8676679560492867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0182400850760422, 2);
  sqcRYGate(q, 2.5604409842863665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8329206827480347, 1);
  sqcRYGate(q, -1.3993529376870155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.294091577066132, 1);
  sqcRYGate(q, 0.8029022224801945, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8048019343600232, 0);
  sqcRYGate(q, -2.9047310755705986, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.013924010645196, 0);
  sqcRYGate(q, 1.9415303233666255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5173185068940276, 2);
  sqcRYGate(q, -2.4471947592036423, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9917197760196602, 2);
  sqcRYGate(q, -0.49406349540476935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9888108557845837, 1);
  sqcRYGate(q, 1.4673901243832619, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.01993545820080911, 1);
  sqcRYGate(q, 1.104719129761231, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7404568709604797, 0);
  sqcRYGate(q, 0.6041379556949362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.43460635189637825, 0);
  sqcRYGate(q, -1.931525195520333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4718234571056619, 2);
  sqcRYGate(q, -0.6731724455124679, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9967927842367406, 2);
  sqcRYGate(q, -0.638481181750864, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0483631704688214, 1);
  sqcRYGate(q, 0.3099790739358166, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0531558031165487, 1);
  sqcRYGate(q, -1.289341548099562, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1751188451711398, 0);
  sqcRYGate(q, 1.2482218664791427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6672706242240738, 0);
  sqcRYGate(q, 2.290178100067689, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8736894929929379, 2);
  sqcRYGate(q, 0.9460038352869153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9084394061234202, 2);
  sqcRYGate(q, 1.4858864793613416, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.078713448423214, 1);
  sqcRYGate(q, 1.3616610689956659, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5194399962765406, 1);
  sqcRYGate(q, -0.5509381957642772, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.089102031902442, 0);
  sqcRYGate(q, -0.3554103210715617, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6264971190443357, 0);
  sqcRYGate(q, 1.332066039921899, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3129852428094035, 2);
  sqcRYGate(q, 0.9904927622059568, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6179385764871175, 2);
  sqcRYGate(q, 1.7970602583906221, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0263390092827653, 1);
  sqcRYGate(q, -0.07335118752377452, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8948484920466404, 1);
  sqcRYGate(q, -0.7652677639241775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.886303263861788, 0);
  sqcRYGate(q, -1.7934027635347272, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3620665042343765, 0);
  sqcRYGate(q, -0.7038023750511249, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.458877306723201, 2);
  sqcRYGate(q, 2.3508235022068824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0053160159979595, 2);
  sqcRYGate(q, 0.4995668662641453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0210328794389967, 1);
  sqcRYGate(q, -2.8428487425173583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8458459137425646, 1);
  sqcRYGate(q, 1.4659838998402717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8323475530460394, 0);
  sqcRYGate(q, -2.398240397807676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0075811082548167, 0);
  sqcRYGate(q, -2.823896862274346, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1767960488419194, 2);
  sqcRYGate(q, -1.4316272420300358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.042051993206183, 2);
  sqcRYGate(q, -1.7535472910053675, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3314105627384756, 1);
  sqcRYGate(q, -1.3388282412214785, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3582672012374046, 1);
  sqcRYGate(q, 2.3076756096086917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.35983230269776983, 0);
  sqcRYGate(q, -2.5547505574222895, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.724362315768118, 0);
  sqcRYGate(q, -2.397137348404856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6563215838473098, 2);
  sqcRYGate(q, -2.75956841266058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.978429726374071, 2);
  sqcRYGate(q, -1.4394309963162482, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1067540242096607, 1);
  sqcRYGate(q, -0.4736835181432064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.486079692824795, 1);
  sqcRYGate(q, -2.646125613927505, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.911353699356187, 0);
  sqcRYGate(q, 0.6205483050219603, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8770266146653376, 0);
  sqcRYGate(q, -1.6810477277555682, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0754943405113897, 2);
  sqcRYGate(q, -1.1902157772140693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7856328247239417, 2);
  sqcRYGate(q, 1.648279198054996, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9863280492317115, 1);
  sqcRYGate(q, 0.08875734579877026, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2632461822720682, 1);
  sqcRYGate(q, -0.5924911300014184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.124125857344052, 0);
  sqcRYGate(q, -2.6930335486629047, 1);
  sqcRYGate(q, 1.4972553828416775, 2);
  sqcRYGate(q, -1.5048822484188709, 3);

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
