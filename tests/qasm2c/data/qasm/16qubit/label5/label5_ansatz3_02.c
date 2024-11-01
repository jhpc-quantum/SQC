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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 0.0017598281366346406, 0);
  sqcRZGate(q, 0.7415015255729009, 0);
  sqcRYGate(q, -1.5362106536192597, 1);
  sqcRZGate(q, -2.1739181329456168, 1);
  sqcRYGate(q, 3.141586203331233, 2);
  sqcRZGate(q, -0.14891778917552245, 2);
  sqcRYGate(q, -0.39336488366164174, 3);
  sqcRZGate(q, 0.013760790623468336, 3);
  sqcRYGate(q, -1.57080875926754, 4);
  sqcRZGate(q, 1.5297464526825957, 4);
  sqcRYGate(q, -1.9384882898380962, 5);
  sqcRZGate(q, -1.5712780488132707, 5);
  sqcRYGate(q, -1.5708075251719364, 6);
  sqcRZGate(q, -1.6851017987012877e-06, 6);
  sqcRYGate(q, 3.141592271219406, 7);
  sqcRZGate(q, -3.115399442852881, 7);
  sqcRYGate(q, -3.141592083674956, 8);
  sqcRZGate(q, -1.5780263797659242, 8);
  sqcRYGate(q, -2.3216071589351275, 9);
  sqcRZGate(q, -2.502607929029619, 9);
  sqcRYGate(q, 3.141493716601709, 10);
  sqcRZGate(q, -2.3012534298669376, 10);
  sqcRYGate(q, -0.000172619604213331, 11);
  sqcRZGate(q, 0.2619424847298917, 11);
  sqcRYGate(q, 0.9001198111745357, 12);
  sqcRZGate(q, -0.7470312132934076, 12);
  sqcRYGate(q, 1.6476874065026665, 13);
  sqcRZGate(q, -1.18412235191115, 13);
  sqcRYGate(q, 1.5699270390052673, 14);
  sqcRZGate(q, -0.12004804894593972, 14);
  sqcRYGate(q, -0.00017905485199005882, 15);
  sqcRZGate(q, -1.3646698749011723, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 3.1415291015673423, 0);
  sqcRZGate(q, 1.774168127925022, 0);
  sqcRYGate(q, 3.1223595190361872, 1);
  sqcRZGate(q, 2.487063827013878, 1);
  sqcRYGate(q, 2.51960794319771, 2);
  sqcRZGate(q, 1.1164335655998912, 2);
  sqcRYGate(q, -3.001122418408412, 3);
  sqcRZGate(q, -0.40331855162587793, 3);
  sqcRYGate(q, 1.839694983019058e-07, 4);
  sqcRZGate(q, -0.7114405980470853, 4);
  sqcRYGate(q, -1.5714560217004634, 5);
  sqcRZGate(q, -1.053281640178497, 5);
  sqcRYGate(q, 1.5707989314001614, 6);
  sqcRZGate(q, 0.7472040988113321, 6);
  sqcRYGate(q, -2.1943448953897295, 7);
  sqcRZGate(q, -1.572508370447757, 7);
  sqcRYGate(q, -1.5707835201981144, 8);
  sqcRZGate(q, 0.18229096748122586, 8);
  sqcRYGate(q, 2.2811818047888464, 9);
  sqcRZGate(q, -0.3890472417862947, 9);
  sqcRYGate(q, -0.5978086491861339, 10);
  sqcRZGate(q, 1.570556797957833, 10);
  sqcRYGate(q, -1.5708112766588753, 11);
  sqcRZGate(q, -0.5156947622600127, 11);
  sqcRYGate(q, -1.5709013235038496, 12);
  sqcRZGate(q, 0.0180835057875814, 12);
  sqcRYGate(q, 2.8238182503222204, 13);
  sqcRZGate(q, -2.736984053260325, 13);
  sqcRYGate(q, -1.3138288798359596, 14);
  sqcRZGate(q, 0.4439643683191515, 14);
  sqcRYGate(q, 3.1314694363697115, 15);
  sqcRZGate(q, 1.9290483808647776, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 3.12098225877884, 0);
  sqcRZGate(q, -0.22583150441056965, 0);
  sqcRYGate(q, 0.5800865045388516, 1);
  sqcRZGate(q, -1.954682710484182, 1);
  sqcRYGate(q, -3.1415905032227474, 2);
  sqcRZGate(q, 2.720243521120386, 2);
  sqcRYGate(q, 3.1414749256478465, 3);
  sqcRZGate(q, -0.40472104881681126, 3);
  sqcRYGate(q, -2.5785380802112456e-05, 4);
  sqcRZGate(q, 1.3641535593172414, 4);
  sqcRYGate(q, -3.1378461060113394, 5);
  sqcRZGate(q, 0.5237473786787552, 5);
  sqcRYGate(q, -1.5708017890460066, 6);
  sqcRZGate(q, -1.5707965734177742, 6);
  sqcRYGate(q, -1.5707997540400094, 7);
  sqcRZGate(q, 1.9391391928852952, 7);
  sqcRYGate(q, -3.1415795133101128, 8);
  sqcRZGate(q, -2.0062672565587296, 8);
  sqcRYGate(q, 1.5955472032308777e-07, 9);
  sqcRZGate(q, -2.295386145100336, 9);
  sqcRYGate(q, 1.5707934758970943, 10);
  sqcRZGate(q, -1.7433933084425757, 10);
  sqcRYGate(q, 9.075966224791898e-05, 11);
  sqcRZGate(q, 2.1436008480433495, 11);
  sqcRYGate(q, -0.015024209551125165, 12);
  sqcRZGate(q, 2.917158011235773, 12);
  sqcRYGate(q, 1.5710709641225564, 13);
  sqcRZGate(q, 1.9444582759552969, 13);
  sqcRYGate(q, 1.4790453309722857, 14);
  sqcRZGate(q, -1.5420735848319413, 14);
  sqcRYGate(q, -3.141523195232368, 15);
  sqcRZGate(q, -1.2104928264938204, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.00018057402031868008, 0);
  sqcRZGate(q, -3.015468510799474, 0);
  sqcRYGate(q, 0.009786535745072378, 1);
  sqcRZGate(q, 0.37465882101257897, 1);
  sqcRYGate(q, -1.5944324459983998, 2);
  sqcRZGate(q, 0.08175737914311743, 2);
  sqcRYGate(q, 1.452062841369596, 3);
  sqcRZGate(q, 1.6672012260914002, 3);
  sqcRYGate(q, -0.0010272342682165697, 4);
  sqcRZGate(q, 1.5070128764447406, 4);
  sqcRYGate(q, -0.010787790335907486, 5);
  sqcRZGate(q, -1.3886365521445097, 5);
  sqcRYGate(q, -1.5707779850782702, 6);
  sqcRZGate(q, 1.5707962827698438, 6);
  sqcRYGate(q, -3.1415921483107767, 7);
  sqcRZGate(q, 2.0369014414708184, 7);
  sqcRYGate(q, -0.5975610654688204, 8);
  sqcRZGate(q, -1.911995381648424, 8);
  sqcRYGate(q, 1.5717588117605925, 9);
  sqcRZGate(q, -0.48791526343590963, 9);
  sqcRYGate(q, 8.875737799129979e-05, 10);
  sqcRZGate(q, -2.968995560408467, 10);
  sqcRYGate(q, -3.1213716599524983, 11);
  sqcRZGate(q, -1.779062787370871, 11);
  sqcRYGate(q, -1.7934165320926007e-05, 12);
  sqcRZGate(q, -1.3522141527658134, 12);
  sqcRYGate(q, -3.0770557217688372, 13);
  sqcRZGate(q, 2.8800159895876694, 13);
  sqcRYGate(q, 1.5792308011236855, 14);
  sqcRZGate(q, 1.5594402021141738, 14);
  sqcRYGate(q, 0.7903867063451474, 15);
  sqcRZGate(q, -1.5382605837999108e-06, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.5691709213539582, 0);
  sqcRZGate(q, 0.2972249731664478, 0);
  sqcRYGate(q, 0.8287780314445286, 1);
  sqcRZGate(q, 0.11386501565374499, 1);
  sqcRYGate(q, 3.1415600072479237, 2);
  sqcRZGate(q, -2.4381532181969034, 2);
  sqcRYGate(q, 3.1415839991105785, 3);
  sqcRZGate(q, 2.2780620557886007, 3);
  sqcRYGate(q, 3.1343958456701495, 4);
  sqcRZGate(q, -2.2046666293455663, 4);
  sqcRYGate(q, 0.0003400942270803204, 5);
  sqcRZGate(q, -0.18840407235975487, 5);
  sqcRYGate(q, -1.5707963649432832, 6);
  sqcRZGate(q, 2.1992905896413255, 6);
  sqcRYGate(q, 1.5708414916075706, 7);
  sqcRZGate(q, -3.1102895291897443, 7);
  sqcRYGate(q, 3.1246029193918625, 8);
  sqcRZGate(q, 1.1877590910243683, 8);
  sqcRYGate(q, -3.542295594627376e-07, 9);
  sqcRZGate(q, -2.6629420897408997, 9);
  sqcRYGate(q, -1.5708260586641547, 10);
  sqcRZGate(q, -3.521753679791573e-07, 10);
  sqcRYGate(q, 3.1415917679140186, 11);
  sqcRZGate(q, 2.3577584852746534, 11);
  sqcRYGate(q, -0.024279052506175347, 12);
  sqcRZGate(q, 3.1293978682329797, 12);
  sqcRYGate(q, 0.0006811713208545456, 13);
  sqcRZGate(q, -2.505645184470064, 13);
  sqcRYGate(q, -4.326671677823413e-06, 14);
  sqcRZGate(q, -1.079150145897804, 14);
  sqcRYGate(q, -1.570797054721507, 15);
  sqcRZGate(q, 1.2245215227865018, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.118466938882009e-05, 0);
  sqcRZGate(q, 1.8306970438069263, 0);
  sqcRYGate(q, 0.12089525517139421, 1);
  sqcRZGate(q, 0.4252929450329725, 1);
  sqcRYGate(q, 1.5867333968564132, 2);
  sqcRZGate(q, -1.001779666938753, 2);
  sqcRYGate(q, -0.0018148343365478325, 3);
  sqcRZGate(q, 2.9645306357889862, 3);
  sqcRYGate(q, -7.850223910921273e-07, 4);
  sqcRZGate(q, 2.7687004195365836, 4);
  sqcRYGate(q, -1.570750787574081, 5);
  sqcRZGate(q, 1.9954244177697156, 5);
  sqcRYGate(q, -8.199969461330031e-08, 6);
  sqcRZGate(q, 0.3895560579902587, 6);
  sqcRYGate(q, 0.018612043876756003, 7);
  sqcRZGate(q, -1.1776877005086437, 7);
  sqcRYGate(q, -3.1415924634147414, 8);
  sqcRZGate(q, -3.095150631797242, 8);
  sqcRYGate(q, -1.5709328806118932, 9);
  sqcRZGate(q, 2.013732926393395, 9);
  sqcRYGate(q, -1.5707062503690716, 10);
  sqcRZGate(q, 0.204038207645862, 10);
  sqcRYGate(q, 8.484160274159847e-07, 11);
  sqcRZGate(q, -2.2095578114764, 11);
  sqcRYGate(q, 1.5707866924421898, 12);
  sqcRZGate(q, -0.5772069032486922, 12);
  sqcRYGate(q, 1.5707939648526115, 13);
  sqcRZGate(q, -2.7107872227994236, 13);
  sqcRYGate(q, -3.1411901157900064, 14);
  sqcRZGate(q, -1.5365029215136243, 14);
  sqcRYGate(q, 0.009351015450478133, 15);
  sqcRZGate(q, 2.338755442551962, 15);

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
