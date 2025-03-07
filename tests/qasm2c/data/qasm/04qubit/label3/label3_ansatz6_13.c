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

  sqcRYGate(q, -0.866886058381004, 0);
  sqcRYGate(q, -2.7960757960132883, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0193530290112722, 0);
  sqcRYGate(q, 2.466825926400947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5127240865981018, 1);
  sqcRYGate(q, 0.5101774128528915, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.311490504367343, 1);
  sqcRYGate(q, 1.674340639038823, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6419496110631749, 2);
  sqcRYGate(q, 1.6497210748742344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6003372719731307, 2);
  sqcRYGate(q, -2.790378366527743, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0413354163995727, 0);
  sqcRYGate(q, -2.5804376570118346, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23650146750609177, 0);
  sqcRYGate(q, 1.9787372112492836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.32158408773352376, 1);
  sqcRYGate(q, -0.7966760511286619, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1201713959169566, 1);
  sqcRYGate(q, -1.0127963603852665, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1924770861714944, 2);
  sqcRYGate(q, -0.291855947742941, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.709654911306467, 2);
  sqcRYGate(q, 2.0840755066187153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5096844929036157, 0);
  sqcRYGate(q, 1.2367620562768638, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.818997106994253, 0);
  sqcRYGate(q, 0.793856502845621, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9947360578820269, 1);
  sqcRYGate(q, 0.2846132778452129, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8864657045053734, 1);
  sqcRYGate(q, -2.703714107306626, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3494728472443906, 2);
  sqcRYGate(q, -2.6637796712032773, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2556464503985727, 2);
  sqcRYGate(q, 0.24604967737734865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.38014336535595383, 0);
  sqcRYGate(q, -1.7732875354595607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1977168993824092, 0);
  sqcRYGate(q, 1.5176915488740903, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9821343502030948, 1);
  sqcRYGate(q, -2.9606740874172472, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.954194894739899, 1);
  sqcRYGate(q, -0.13444214805534382, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8533602132839917, 2);
  sqcRYGate(q, 0.2105411165791138, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.814665748460499, 2);
  sqcRYGate(q, 0.7287445176381384, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5486802956746004, 0);
  sqcRYGate(q, -1.7535279031283977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.688933409930376, 0);
  sqcRYGate(q, -1.0974438376663511, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1631769598846189, 1);
  sqcRYGate(q, -0.5636181723283525, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6301982655936627, 1);
  sqcRYGate(q, 0.7301863917052227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5131688275601394, 2);
  sqcRYGate(q, -0.5172516711242886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2376039913271244, 2);
  sqcRYGate(q, -1.4290633619437616, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.286960884014914, 0);
  sqcRYGate(q, 2.3548741431938356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7780322736988525, 0);
  sqcRYGate(q, -0.23408253175548843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8383695901619186, 1);
  sqcRYGate(q, 2.191690230905126, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6024678051249968, 1);
  sqcRYGate(q, 0.3488393139138264, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.202740743716127, 2);
  sqcRYGate(q, 2.032761361467677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.44741173750471397, 2);
  sqcRYGate(q, 1.7690424445554989, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4672251428465368, 0);
  sqcRYGate(q, -1.8514205626369127, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.266385677319187, 0);
  sqcRYGate(q, 2.038871725483082, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9416785909835417, 1);
  sqcRYGate(q, -1.2298471822520005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5060004200512394, 1);
  sqcRYGate(q, 2.812966737466551, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.098704868871739, 2);
  sqcRYGate(q, 0.34002913149355635, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4320080091921428, 2);
  sqcRYGate(q, 0.4806848520318621, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6231193174799797, 0);
  sqcRYGate(q, 0.5520759289031529, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.38039361633226404, 0);
  sqcRYGate(q, 0.2059048894636577, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8032859809010826, 1);
  sqcRYGate(q, 0.7471531252684729, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5231993083065065, 1);
  sqcRYGate(q, 2.862684509001995, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5156410748259147, 2);
  sqcRYGate(q, -1.1352121400407555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6040455864390246, 2);
  sqcRYGate(q, -0.46806736766653295, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0897391414253352, 0);
  sqcRYGate(q, -2.5258526916422057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8339408844691296, 0);
  sqcRYGate(q, -3.0119425111282965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5708785774377018, 1);
  sqcRYGate(q, -3.002006821176423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.242151975478123, 1);
  sqcRYGate(q, 0.1399716384622991, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6809935757729707, 2);
  sqcRYGate(q, 0.5389743971368111, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0777293854637788, 2);
  sqcRYGate(q, 2.2513762017265337, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9661643717074897, 0);
  sqcRYGate(q, 0.6690104165322827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.036109635411802586, 0);
  sqcRYGate(q, 0.6125479559000164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.420601927058684, 1);
  sqcRYGate(q, 2.4788082148186996, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9414198801991118, 1);
  sqcRYGate(q, 0.12843970301473712, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3816659273342653, 2);
  sqcRYGate(q, -0.5084148399857709, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4085008576682303, 2);
  sqcRYGate(q, 2.3603015304730004, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7665013669824319, 0);
  sqcRYGate(q, 1.1479682191782459, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.063987140397117, 0);
  sqcRYGate(q, -2.3408331214713356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8606537440815498, 1);
  sqcRYGate(q, 2.5568353095359577, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6305740048974598, 1);
  sqcRYGate(q, 2.4957126285038744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1711766533734362, 2);
  sqcRYGate(q, -1.3167977271544942, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5791189067758062, 2);
  sqcRYGate(q, -1.7693405596505885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7439573370310124, 0);
  sqcRYGate(q, -0.5473666945101527, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3957945946805017, 0);
  sqcRYGate(q, 0.9743256622637535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7906426523673877, 1);
  sqcRYGate(q, -1.4974615875235633, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1404883089091875, 1);
  sqcRYGate(q, 2.2177381996546237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.11243721357805599, 2);
  sqcRYGate(q, 0.1643941456964484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1802890836583853, 2);
  sqcRYGate(q, -2.752705540283937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8163803000520433, 0);
  sqcRYGate(q, 2.6890112678844913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5335178299173514, 0);
  sqcRYGate(q, -0.7555108052928263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.27066884855616635, 1);
  sqcRYGate(q, 1.1849372519347048, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8083035266381806, 1);
  sqcRYGate(q, 0.7813874648351282, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3125123987304628, 2);
  sqcRYGate(q, -0.6415130464373717, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.063147997596288, 2);
  sqcRYGate(q, 0.701950510963268, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7792714514586674, 0);
  sqcRYGate(q, -1.3870753425695908, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8382455603818837, 0);
  sqcRYGate(q, 0.8252608612296128, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.18506435286873835, 1);
  sqcRYGate(q, 1.569854411026652, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9349859517427213, 1);
  sqcRYGate(q, -0.36156283954648405, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5427129516485332, 2);
  sqcRYGate(q, -0.579693649160565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.36033801781643326, 2);
  sqcRYGate(q, 1.722882411836057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4192767841717483, 0);
  sqcRYGate(q, -0.23822106579356833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.789410197971007, 0);
  sqcRYGate(q, 1.7955323073483234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.607772024050085, 1);
  sqcRYGate(q, -3.0399207513079722, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.537876093253529, 1);
  sqcRYGate(q, 2.4115745948360607, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.21585784466761362, 2);
  sqcRYGate(q, -1.457924821242281, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6171827905138949, 2);
  sqcRYGate(q, 0.34263940384645153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7218840867419187, 0);
  sqcRYGate(q, 1.8177647554399838, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.717909272258625, 0);
  sqcRYGate(q, -2.134089384486355, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2760394153496772, 1);
  sqcRYGate(q, -2.028654164739132, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.42407208633645693, 1);
  sqcRYGate(q, 1.997493746567054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.651590077640822, 2);
  sqcRYGate(q, -1.0281908297415274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.678816495450925, 2);
  sqcRYGate(q, 3.064299293461345, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9610502317609848, 0);
  sqcRYGate(q, -0.7780677787507047, 1);
  sqcRYGate(q, -2.8780289512171993, 2);
  sqcRYGate(q, -1.2575140116311365, 3);

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
