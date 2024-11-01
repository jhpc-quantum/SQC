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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 2.2545929200229375, 0);
  sqcRYGate(q, -0.7892297017124656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.33053284973290714, 0);
  sqcRYGate(q, -2.685665268515486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.062028753068817, 2);
  sqcRYGate(q, 2.1434618481478704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9368819732646277, 2);
  sqcRYGate(q, -1.3463210747065206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8415176322111635, 4);
  sqcRYGate(q, -0.18195233420731327, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8223289722075966, 4);
  sqcRYGate(q, -0.2858812796845749, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.991923557318808, 6);
  sqcRYGate(q, -2.962725783777219, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1321028563511994, 6);
  sqcRYGate(q, 0.8207516089641714, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9777876147686619, 8);
  sqcRYGate(q, 0.399547097086435, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5470373929096823, 8);
  sqcRYGate(q, 2.3005179358881187, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0783570380394216, 10);
  sqcRYGate(q, -0.6070363279443941, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7602918344167575, 10);
  sqcRYGate(q, -0.4966774376876503, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.2935683024096618, 12);
  sqcRYGate(q, 0.9370302771642935, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.524878998482011, 12);
  sqcRYGate(q, 1.8371864548474832, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.7813363995101796, 14);
  sqcRYGate(q, 1.3354829469275726, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.4537488036413215, 14);
  sqcRYGate(q, 0.5701197094678777, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.7562039274278036, 16);
  sqcRYGate(q, 2.979408813211924, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.6920689913235663, 16);
  sqcRYGate(q, -2.45591506207202, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.9422972361019788, 18);
  sqcRYGate(q, -0.04427041346080147, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.894810222580727, 18);
  sqcRYGate(q, -1.2948315271665105, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.9603041536416317, 1);
  sqcRYGate(q, -0.11706867948218136, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.303055264920543, 1);
  sqcRYGate(q, -1.2967797675689434, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7450276041924345, 3);
  sqcRYGate(q, -1.3796631578259304, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0094828479017677, 3);
  sqcRYGate(q, 0.7690423259645094, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4503456139111863, 5);
  sqcRYGate(q, 1.0518424213323172, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4428430542507535, 5);
  sqcRYGate(q, -1.0201818150077293, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2373282323905832, 7);
  sqcRYGate(q, 2.2920607042812775, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5824665510908205, 7);
  sqcRYGate(q, -0.7222950876201345, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.9968673747478134, 9);
  sqcRYGate(q, 0.25505449866788765, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.0919143372510947, 9);
  sqcRYGate(q, -2.0606492765567705, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.6253686213230463, 11);
  sqcRYGate(q, -2.79217134603398, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.981295950218133, 11);
  sqcRYGate(q, 1.7758738844289887, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.6379508679947778, 13);
  sqcRYGate(q, 0.06400226744591041, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.8396053285430999, 13);
  sqcRYGate(q, 1.6289489304116627, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.6724870934670357, 15);
  sqcRYGate(q, 0.9206753024139148, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.022780724926033, 15);
  sqcRYGate(q, 0.3322188487898936, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.0012383302851138, 17);
  sqcRYGate(q, 0.9226683977719679, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.7678660167663525, 17);
  sqcRYGate(q, 0.8621004221410401, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.390613259714702, 0);
  sqcRYGate(q, -0.6654486664661388, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1060610473839836, 0);
  sqcRYGate(q, -0.7379385132719021, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.05719849740573684, 2);
  sqcRYGate(q, 1.0005867698657354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.368396141060556, 2);
  sqcRYGate(q, -2.0643209241771983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5660295198630392, 4);
  sqcRYGate(q, -1.6135177607153286, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.13680886226078, 4);
  sqcRYGate(q, -1.2890899350305327, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5847721228371592, 6);
  sqcRYGate(q, -1.5363290839808008, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1771836915463512, 6);
  sqcRYGate(q, -1.7146195912003606, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5570374836412262, 8);
  sqcRYGate(q, 1.5755032752735718, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.1742889078154308, 8);
  sqcRYGate(q, 1.4835726099665851, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6055889805811292, 10);
  sqcRYGate(q, 1.595397539082166, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.856247243240694, 10);
  sqcRYGate(q, -1.7388038454770962, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.594112622149316, 12);
  sqcRYGate(q, 1.5860704852963492, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5468782682998001, 12);
  sqcRYGate(q, -2.2199962083873626, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5587744517183089, 14);
  sqcRYGate(q, -1.5837943032513657, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.8951369958600068, 14);
  sqcRYGate(q, 1.364082506281112, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.4552744592117848, 16);
  sqcRYGate(q, 0.763202597198019, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.639477942711221, 16);
  sqcRYGate(q, -1.3298148530725298, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.705474698028038, 18);
  sqcRYGate(q, -1.7097814123353552, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.6106716869579527, 18);
  sqcRYGate(q, -2.368855567433913, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.2749094573588158, 1);
  sqcRYGate(q, 1.4808088631088014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.276326592037103, 1);
  sqcRYGate(q, 2.5837206855090624, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5334616771036875, 3);
  sqcRYGate(q, 1.6111376482311208, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2379571153089737, 3);
  sqcRYGate(q, -1.8052758683749648, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.552356449943586, 5);
  sqcRYGate(q, -1.5430845627260377, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3077756031239294, 5);
  sqcRYGate(q, 2.1954608915396316, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.580277473539975, 7);
  sqcRYGate(q, -1.5690090879552008, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.3209346063885234, 7);
  sqcRYGate(q, -2.0699835459575313, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.56340696630358, 9);
  sqcRYGate(q, 1.5658145080051609, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2438036655176878, 9);
  sqcRYGate(q, -1.4949724037462726, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5647062904179991, 11);
  sqcRYGate(q, -1.5782298364801963, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.9998847577968037, 11);
  sqcRYGate(q, 0.9996269708143992, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5614888017750022, 13);
  sqcRYGate(q, 1.5946397611910241, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.6997835756418738, 13);
  sqcRYGate(q, -2.0539913296839103, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5618484147653395, 15);
  sqcRYGate(q, 1.5651039123918091, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5359470771231867, 15);
  sqcRYGate(q, 1.23798688710243, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.66124939277457, 17);
  sqcRYGate(q, 2.4821594648955565, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.155025632945673, 17);
  sqcRYGate(q, 2.3697983422037923, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.332893344385788, 0);
  sqcRYGate(q, -1.3476184336046177, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9493641867078222, 0);
  sqcRYGate(q, -2.6666611595078744, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5883701983875287, 2);
  sqcRYGate(q, -1.5808186732160499, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6652729185649553, 2);
  sqcRYGate(q, -2.025361428182736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5869826866977377, 4);
  sqcRYGate(q, -1.5702740445577499, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.820244208661669, 4);
  sqcRYGate(q, -1.3875341285141323, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.684764445130888, 6);
  sqcRYGate(q, 1.5583864882471214, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5893588920030504, 6);
  sqcRYGate(q, 2.8411258794053893, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.572973249604443, 8);
  sqcRYGate(q, 1.5800520196148193, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.1017265134098637, 8);
  sqcRYGate(q, 1.7979355604617906, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.575979569345387, 10);
  sqcRYGate(q, 1.5750694929290412, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.593277644747758, 10);
  sqcRYGate(q, 1.7274337937873692, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.612027314110847, 12);
  sqcRYGate(q, 1.5831476539798421, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.6485628129048662, 12);
  sqcRYGate(q, 0.4118903379429346, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5764056868065102, 14);
  sqcRYGate(q, -1.566139137138742, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.4055035025254323, 14);
  sqcRYGate(q, -1.0000492780376273, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5716118602905063, 16);
  sqcRYGate(q, -1.4958873737410237, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.5390536955659786, 16);
  sqcRYGate(q, 1.1556442627661465, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.9217287559461798, 18);
  sqcRYGate(q, -0.40492334563009924, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.671574307817898, 18);
  sqcRYGate(q, 0.37917108321622184, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.5947426446765895, 1);
  sqcRYGate(q, 1.5694874837238615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3925363612751953, 1);
  sqcRYGate(q, 1.1416806066596867, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.574744728467226, 3);
  sqcRYGate(q, -1.5573744067298114, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8700466062936572, 3);
  sqcRYGate(q, -1.8426989470214719, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5750357090934517, 5);
  sqcRYGate(q, 1.6634337205562237, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4813524681388703, 5);
  sqcRYGate(q, -1.6111794612666497, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.628111792361944, 7);
  sqcRYGate(q, -1.5698844390540954, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.7992536160512484, 7);
  sqcRYGate(q, -2.9323398910815626, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.571835936679972, 9);
  sqcRYGate(q, -1.617577278781562, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.02258460796845796, 9);
  sqcRYGate(q, 1.7386478485762027, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.558272101815677, 11);
  sqcRYGate(q, -1.611001570748824, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.104713773741161, 11);
  sqcRYGate(q, -0.5649221155961186, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.556824972433505, 13);
  sqcRYGate(q, 1.572804133581375, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.6952723120909736, 13);
  sqcRYGate(q, 1.5699468462740747, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5675573989374394, 15);
  sqcRYGate(q, -1.5695587040757815, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.7192761517229176, 15);
  sqcRYGate(q, 2.2291653239541267, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5373313466061262, 17);
  sqcRYGate(q, -1.1056726635339795, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.7386385737194934, 17);
  sqcRYGate(q, 1.2929036641113507, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.26235498975470684, 0);
  sqcRYGate(q, -1.573491678404161, 1);
  sqcRYGate(q, 0.010406677313368761, 2);
  sqcRYGate(q, -1.5743529077106722, 3);
  sqcRYGate(q, 0.00478936807032774, 4);
  sqcRYGate(q, 1.5642264256877692, 5);
  sqcRYGate(q, 3.1371282345641207, 6);
  sqcRYGate(q, 1.5190131303777363, 7);
  sqcRYGate(q, 3.1380785520088037, 8);
  sqcRYGate(q, 1.5642163068992174, 9);
  sqcRYGate(q, -3.0952018098427043, 10);
  sqcRYGate(q, -1.575958796814254, 11);
  sqcRYGate(q, 0.00013528251155392468, 12);
  sqcRYGate(q, -1.5633093470379185, 13);
  sqcRYGate(q, 3.135358750899204, 14);
  sqcRYGate(q, -1.5765579043995395, 15);
  sqcRYGate(q, 0.002324702740247893, 16);
  sqcRYGate(q, -1.56917308781507, 17);
  sqcRYGate(q, 3.124100210786689, 18);
  sqcRYGate(q, -0.20081610482920983, 19);

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
