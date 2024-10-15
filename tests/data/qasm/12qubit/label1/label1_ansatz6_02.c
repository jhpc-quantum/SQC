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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.0447846921642852, 0);
  sqcRYGate(q, -1.5665889141872114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.016302752883593095, 0);
  sqcRYGate(q, 0.19739928739612267, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.070692829359184, 1);
  sqcRYGate(q, 0.47794543254568445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2993380593385675, 1);
  sqcRYGate(q, -1.2303158759338908, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1780910119001153, 2);
  sqcRYGate(q, 2.562686101285668, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.659607017160075, 2);
  sqcRYGate(q, 0.38030083790338765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.677307413744125, 3);
  sqcRYGate(q, 2.9593650836671856, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6790793465852303, 3);
  sqcRYGate(q, -2.3853118213434303, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2268785878561514, 4);
  sqcRYGate(q, 1.1571354791493222, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.16912077703682918, 4);
  sqcRYGate(q, 2.792089104937967, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.20880318146190496, 5);
  sqcRYGate(q, 2.5238397268790904, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8505298877839866, 5);
  sqcRYGate(q, 1.9915232883002902, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.492634745839004, 6);
  sqcRYGate(q, -0.008341701173832483, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0957555513045076, 6);
  sqcRYGate(q, 1.7768146785896017, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3914796985809676, 7);
  sqcRYGate(q, 2.888649717561745, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9309290431801287, 7);
  sqcRYGate(q, -2.932500212485003, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.8825850267198891, 8);
  sqcRYGate(q, 3.095501165397224, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.20618525551407, 8);
  sqcRYGate(q, -1.283536215732299, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.1676954573794407, 9);
  sqcRYGate(q, -2.983933575129806, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0202528074051616, 9);
  sqcRYGate(q, 1.0305683977270765, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9749718559874383, 10);
  sqcRYGate(q, 1.6442855223420734, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5400744507425252, 10);
  sqcRYGate(q, 3.1257513889196646, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.42648830991372844, 0);
  sqcRYGate(q, 1.923924729840988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.249459578982274, 0);
  sqcRYGate(q, 2.703796981619378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6197731579782226, 1);
  sqcRYGate(q, 1.769703581780705, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.17988020860644216, 1);
  sqcRYGate(q, -0.5651420500740514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.051610042182206, 2);
  sqcRYGate(q, 1.1636526136285208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9022092422753776, 2);
  sqcRYGate(q, 2.997577304479321, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.485073095592079, 3);
  sqcRYGate(q, 1.5458120768700594, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9654465628885154, 3);
  sqcRYGate(q, 0.3459232797813563, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2283254045789906, 4);
  sqcRYGate(q, -0.4553920629064319, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.106648499632888, 4);
  sqcRYGate(q, 0.8718016258134971, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.14763359810520793, 5);
  sqcRYGate(q, 0.2288716343997777, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2037349607419907, 5);
  sqcRYGate(q, -0.068006520591728, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.430713837581298, 6);
  sqcRYGate(q, -2.1602876847478836, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7039488378043153, 6);
  sqcRYGate(q, -2.634638377217336, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0617139952568713, 7);
  sqcRYGate(q, -1.8683138167861895, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.1193396776387097, 7);
  sqcRYGate(q, -1.5605119213675769, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.3818894156768895, 8);
  sqcRYGate(q, -1.5662375698774023, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0019237387865383, 8);
  sqcRYGate(q, -0.19574689429706174, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.463178691047965, 9);
  sqcRYGate(q, -2.1999686511728904, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.125735008298177, 9);
  sqcRYGate(q, 0.5048279526466608, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4224571881301862, 10);
  sqcRYGate(q, 0.4564013394581677, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.4874511502145098, 10);
  sqcRYGate(q, 2.9960339986598554, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5019905485904408, 0);
  sqcRYGate(q, -1.6333034269098141, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.54760225574286, 0);
  sqcRYGate(q, 0.2040646216574018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.382288028912377, 1);
  sqcRYGate(q, 0.815405430321248, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3584125424894453, 1);
  sqcRYGate(q, 2.6601040898263033, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7879375706566258, 2);
  sqcRYGate(q, 1.8840017064025911, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0048414946085915, 2);
  sqcRYGate(q, 3.004097036138018, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5525447109835753, 3);
  sqcRYGate(q, 0.7582204326519859, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1284233053132624, 3);
  sqcRYGate(q, -2.892436561719123, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4934401989765149, 4);
  sqcRYGate(q, -1.0043736533010703, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.13760690459377223, 4);
  sqcRYGate(q, -0.5462772836130908, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5275773569674294, 5);
  sqcRYGate(q, -1.9667431726670705, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9153862118897189, 5);
  sqcRYGate(q, -1.7890367842648365, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0235689903396357, 6);
  sqcRYGate(q, -1.6501595412618082, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8575950542669768, 6);
  sqcRYGate(q, 0.07467982332422735, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.326739747218922, 7);
  sqcRYGate(q, 1.8898605133412048, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.862795858797318, 7);
  sqcRYGate(q, -1.8081658866394292, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0076962444014967105, 8);
  sqcRYGate(q, -1.756189994933345, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.05114963042864324, 8);
  sqcRYGate(q, -2.9756989528215536, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4653258317994498, 9);
  sqcRYGate(q, -1.5132849168233062, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.6597245985491547, 9);
  sqcRYGate(q, -1.0614245475172126, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.03312646024005, 10);
  sqcRYGate(q, -0.6077645514213446, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8268120123084857, 10);
  sqcRYGate(q, -0.13581757786800883, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7321044855642853, 0);
  sqcRYGate(q, 0.11722922459500838, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.827015984600981, 0);
  sqcRYGate(q, 1.6607153886883737, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2798290615299646, 1);
  sqcRYGate(q, 1.2905102265303228, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.597941246843857, 1);
  sqcRYGate(q, -0.17815792802779062, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0752929426078457, 2);
  sqcRYGate(q, -2.1563856978142892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.72064646155813, 2);
  sqcRYGate(q, -1.2675835570992913, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2325782609131851, 3);
  sqcRYGate(q, -0.888807812739813, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9841485976909574, 3);
  sqcRYGate(q, -0.18306584751614036, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5209644421220703, 4);
  sqcRYGate(q, 2.932193816814031, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.11156737309179299, 4);
  sqcRYGate(q, 2.92866216790141, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4857137178615836, 5);
  sqcRYGate(q, 2.2747494958625425, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.042547718025961245, 5);
  sqcRYGate(q, -0.09165057972339863, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4581398604402, 6);
  sqcRYGate(q, 1.4635592645525275, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7143773287908275, 6);
  sqcRYGate(q, -2.8557210158352033, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.053362646554798054, 7);
  sqcRYGate(q, -1.9998480799790441, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.679222631971237, 7);
  sqcRYGate(q, 1.7993713053017784, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.719491222237216, 8);
  sqcRYGate(q, -0.4733022878566624, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.62098417508735, 8);
  sqcRYGate(q, 3.007194545971127, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.38287937542079264, 9);
  sqcRYGate(q, -0.1613167174115619, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.998860541931271, 9);
  sqcRYGate(q, 1.7795571141122775, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.554316694600069, 10);
  sqcRYGate(q, 3.0603873032723996, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5237191350992851, 10);
  sqcRYGate(q, 0.22495315149926487, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8850856033735893, 0);
  sqcRYGate(q, 1.894065008139438, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3305267276573263, 0);
  sqcRYGate(q, -1.5825593881931521, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.02817773972533999, 1);
  sqcRYGate(q, 1.4441169888468592, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.014407214845557317, 1);
  sqcRYGate(q, 0.07107806741952594, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2954949418730117, 2);
  sqcRYGate(q, -0.2409089289160269, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.749760197045122, 2);
  sqcRYGate(q, -1.4021658787271392, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5144761591016802, 3);
  sqcRYGate(q, -1.6238049804323325, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6903422390726583, 3);
  sqcRYGate(q, -3.0346106679339138, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.995311363754194, 4);
  sqcRYGate(q, 2.470610422135814, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6071861820609152, 4);
  sqcRYGate(q, -3.130662044827566, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6570324096050333, 5);
  sqcRYGate(q, 2.106157681801066, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5753720127993598, 5);
  sqcRYGate(q, -0.5126402191414697, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5625798362373997, 6);
  sqcRYGate(q, -1.4034526881774498, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5746290249397745, 6);
  sqcRYGate(q, -0.2600478138381918, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5717160656208717, 7);
  sqcRYGate(q, 1.0367877273513901, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5666193325395028, 7);
  sqcRYGate(q, -0.9317643292650949, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5727728570246151, 8);
  sqcRYGate(q, -1.194111547642403, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5658980675272787, 8);
  sqcRYGate(q, 0.4606918791274924, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5725668917270639, 9);
  sqcRYGate(q, 1.7320387163424589, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5702644378130033, 9);
  sqcRYGate(q, 0.9247319314757734, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5700871253884003, 10);
  sqcRYGate(q, 2.5575059099066273, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.56556577550636, 10);
  sqcRYGate(q, 2.4627837784736886, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.3316642048802945, 0);
  sqcRYGate(q, -3.078754862503345, 1);
  sqcRYGate(q, -0.15569416834452277, 2);
  sqcRYGate(q, -1.5234813506556533, 3);
  sqcRYGate(q, 2.9812973016264745, 4);
  sqcRYGate(q, 1.560760258464816, 5);
  sqcRYGate(q, -1.5775294834476163, 6);
  sqcRYGate(q, 1.572338630013726, 7);
  sqcRYGate(q, 1.56927513712395, 8);
  sqcRYGate(q, 1.5678820421375665, 9);
  sqcRYGate(q, -1.5708277799592691, 10);
  sqcRYGate(q, -1.5679528384268844, 11);

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
