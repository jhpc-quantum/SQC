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

  sqcRYGate(q, -0.24195156025249417, 0);
  sqcRZGate(q, -1.8154288062793036, 0);
  sqcRYGate(q, -0.00020282818901938332, 1);
  sqcRZGate(q, 2.0549711694805097, 1);
  sqcRYGate(q, 1.571214618441927, 2);
  sqcRZGate(q, -0.2272095946561174, 2);
  sqcRYGate(q, 0.005795331939598469, 3);
  sqcRZGate(q, -1.0766442196348265, 3);
  sqcRYGate(q, -3.1412857307560524, 4);
  sqcRZGate(q, 2.9365473716687998, 4);
  sqcRYGate(q, 0.09599023608836049, 5);
  sqcRZGate(q, 3.1391632750634524, 5);
  sqcRYGate(q, -0.08788559141115294, 6);
  sqcRZGate(q, -0.03759625009087486, 6);
  sqcRYGate(q, -3.1409307097486403, 7);
  sqcRZGate(q, 1.0182372296404134, 7);
  sqcRYGate(q, -2.4682083499512415, 8);
  sqcRZGate(q, -3.034475728149062, 8);
  sqcRYGate(q, -3.1047930852605794, 9);
  sqcRZGate(q, 0.18506289253947728, 9);
  sqcRYGate(q, -1.5743213241938967, 10);
  sqcRZGate(q, -1.550815607213278, 10);
  sqcRYGate(q, -0.561673765253035, 11);
  sqcRZGate(q, 1.9060646956385847, 11);
  sqcRYGate(q, 3.1409456694269045, 12);
  sqcRZGate(q, 1.8760774472239083, 12);
  sqcRYGate(q, -3.140506784685285, 13);
  sqcRZGate(q, -0.42656194660085317, 13);
  sqcRYGate(q, 3.0732734802671624, 14);
  sqcRZGate(q, 3.0125306619055645, 14);
  sqcRYGate(q, 2.25558070555965, 15);
  sqcRZGate(q, 1.356312596345221, 15);
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
  sqcRYGate(q, -3.086102965083517, 0);
  sqcRZGate(q, -1.4915245674492081, 0);
  sqcRYGate(q, -0.0020547421896894846, 1);
  sqcRZGate(q, -0.7558937388576447, 1);
  sqcRYGate(q, 0.00020053729995570872, 2);
  sqcRZGate(q, -0.1145818023057029, 2);
  sqcRYGate(q, -1.5871051884375367, 3);
  sqcRZGate(q, -3.053958853431741, 3);
  sqcRYGate(q, 3.0618732931701182, 4);
  sqcRZGate(q, -2.879786615209606, 4);
  sqcRYGate(q, 0.09520657862478911, 5);
  sqcRZGate(q, 2.0462722796614354, 5);
  sqcRYGate(q, -1.5658968415145282, 6);
  sqcRZGate(q, -2.60422660916377, 6);
  sqcRYGate(q, 0.0025099685320012287, 7);
  sqcRZGate(q, 0.811476511302603, 7);
  sqcRYGate(q, 1.4459394035374693, 8);
  sqcRZGate(q, 1.3621440821502881, 8);
  sqcRYGate(q, -0.056799040342691676, 9);
  sqcRZGate(q, -1.846546577763104, 9);
  sqcRYGate(q, 0.5627674717995483, 10);
  sqcRZGate(q, -3.1054932190262683, 10);
  sqcRYGate(q, 1.582631521381857, 11);
  sqcRZGate(q, 1.5820488939016768, 11);
  sqcRYGate(q, -3.1341172414964555, 12);
  sqcRZGate(q, -1.5964616399498324, 12);
  sqcRYGate(q, 1.551194861897974, 13);
  sqcRZGate(q, -1.5602858031842173, 13);
  sqcRYGate(q, -0.037234915411144875, 14);
  sqcRZGate(q, 2.065257030073419, 14);
  sqcRYGate(q, -1.3387648683471767, 15);
  sqcRZGate(q, -0.9257246453600761, 15);
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
  sqcRYGate(q, 2.5090139947810464, 0);
  sqcRZGate(q, 2.8334330607932743, 0);
  sqcRYGate(q, -1.574842322325362, 1);
  sqcRZGate(q, 1.549442240862347, 1);
  sqcRYGate(q, -1.3870365062623753, 2);
  sqcRZGate(q, 3.1261169530060346, 2);
  sqcRYGate(q, 1.3938807172208094, 3);
  sqcRZGate(q, -1.873902734568357, 3);
  sqcRYGate(q, -3.1412313506493557, 4);
  sqcRZGate(q, 0.2942875643399905, 4);
  sqcRYGate(q, 3.138744698202326, 5);
  sqcRZGate(q, -2.40633087707866, 5);
  sqcRYGate(q, -2.3936125703637896, 6);
  sqcRZGate(q, 1.1395973463174498, 6);
  sqcRYGate(q, 1.5706805011357226, 7);
  sqcRZGate(q, 2.064777460989002, 7);
  sqcRYGate(q, -3.1382116471379846, 8);
  sqcRZGate(q, 2.1524631020151377, 8);
  sqcRYGate(q, 3.115429529905994, 9);
  sqcRZGate(q, 1.150402715617459, 9);
  sqcRYGate(q, -0.035777274141246464, 10);
  sqcRZGate(q, 1.5835248973273193, 10);
  sqcRYGate(q, -1.5777691707621415, 11);
  sqcRZGate(q, 1.5868971304156414, 11);
  sqcRYGate(q, -2.456327958318446, 12);
  sqcRZGate(q, 2.593210864213171, 12);
  sqcRYGate(q, -0.3662858650424292, 13);
  sqcRZGate(q, -1.579026196790931, 13);
  sqcRYGate(q, -0.054580499528586124, 14);
  sqcRZGate(q, 0.7516943513523318, 14);
  sqcRYGate(q, -3.140485182367164, 15);
  sqcRZGate(q, -0.9974993239731009, 15);
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
  sqcRYGate(q, -0.0020658050711297358, 0);
  sqcRZGate(q, 2.4075946937644335, 0);
  sqcRYGate(q, 1.6452015287618527, 1);
  sqcRZGate(q, 3.1225447366627015, 1);
  sqcRYGate(q, 1.5530238458298848, 2);
  sqcRZGate(q, -1.1361014095172715, 2);
  sqcRYGate(q, 0.017242455883109464, 3);
  sqcRZGate(q, -0.8489666412447825, 3);
  sqcRYGate(q, 2.704876044090179, 4);
  sqcRZGate(q, -3.1387894390019477, 4);
  sqcRYGate(q, -1.5713192568063938, 5);
  sqcRZGate(q, -3.06235628803017, 5);
  sqcRYGate(q, -3.132441396187711, 6);
  sqcRZGate(q, -0.26516932908170704, 6);
  sqcRYGate(q, -0.23575270390038727, 7);
  sqcRZGate(q, 1.0856875203279441, 7);
  sqcRYGate(q, -2.718507436073271, 8);
  sqcRZGate(q, 1.2346426215723398, 8);
  sqcRYGate(q, 1.5720016804047443, 9);
  sqcRZGate(q, -0.5748471085831767, 9);
  sqcRYGate(q, 3.1404231674526892, 10);
  sqcRZGate(q, -3.078339749806883, 10);
  sqcRYGate(q, -1.560127085830911, 11);
  sqcRZGate(q, -1.3453222557455773, 11);
  sqcRYGate(q, 1.570988223219241, 12);
  sqcRZGate(q, 1.5725318584352772, 12);
  sqcRYGate(q, -1.5713148309329061, 13);
  sqcRZGate(q, -1.5600385052939831, 13);
  sqcRYGate(q, 0.010666792099989664, 14);
  sqcRZGate(q, -3.0728413274266333, 14);
  sqcRYGate(q, 0.027188381925624977, 15);
  sqcRZGate(q, -0.6422188525179483, 15);
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
  sqcRYGate(q, 2.776171922345384, 0);
  sqcRZGate(q, 2.7026906025825457, 0);
  sqcRYGate(q, -0.8685187890863791, 1);
  sqcRZGate(q, 2.303440614782053, 1);
  sqcRYGate(q, -1.5616633792518162, 2);
  sqcRZGate(q, -1.752874227586016, 2);
  sqcRYGate(q, -0.023041267640888714, 3);
  sqcRZGate(q, -2.288916859681709, 3);
  sqcRYGate(q, -0.0015233219508043244, 4);
  sqcRZGate(q, 3.1225856425089296, 4);
  sqcRYGate(q, -0.007370775002456947, 5);
  sqcRZGate(q, 3.107278672351189, 5);
  sqcRYGate(q, -0.054836477342069756, 6);
  sqcRZGate(q, 2.0788964198172106, 6);
  sqcRYGate(q, 1.5703785405178436, 7);
  sqcRZGate(q, -0.027278894887942506, 7);
  sqcRYGate(q, -3.1204774370734025, 8);
  sqcRZGate(q, -1.517158743720426, 8);
  sqcRYGate(q, -3.1411269726242774, 9);
  sqcRZGate(q, -0.574727027777949, 9);
  sqcRYGate(q, 2.9367446563832886, 10);
  sqcRZGate(q, 0.008337608479057403, 10);
  sqcRYGate(q, -1.40499098547632e-05, 11);
  sqcRZGate(q, 2.912864181515182, 11);
  sqcRYGate(q, 1.5466691324474915, 12);
  sqcRZGate(q, 0.003613001120477577, 12);
  sqcRYGate(q, 0.4978373483790248, 13);
  sqcRZGate(q, 3.131932401145472, 13);
  sqcRYGate(q, 3.130515475908994, 14);
  sqcRZGate(q, -1.5167762215329086, 14);
  sqcRYGate(q, -1.5679388951156825, 15);
  sqcRZGate(q, 1.5747015237147497, 15);
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
  sqcRYGate(q, -1.567281647925349, 0);
  sqcRZGate(q, 0.11507090763257379, 0);
  sqcRYGate(q, -3.1332607260741288, 1);
  sqcRZGate(q, -0.5058155107053341, 1);
  sqcRYGate(q, -3.14070296835777, 2);
  sqcRZGate(q, 1.017495624724648, 2);
  sqcRYGate(q, -2.5310736833883145, 3);
  sqcRZGate(q, 3.1353834346288125, 3);
  sqcRYGate(q, 1.6221982444230099, 4);
  sqcRZGate(q, 2.317297224202207, 4);
  sqcRYGate(q, 0.0002921661248953778, 5);
  sqcRZGate(q, -2.956591503060125, 5);
  sqcRYGate(q, 0.5482762225618023, 6);
  sqcRZGate(q, -1.295322957218282, 6);
  sqcRYGate(q, 3.023588966319153, 7);
  sqcRZGate(q, 0.5898675491963461, 7);
  sqcRYGate(q, 0.47317664024291073, 8);
  sqcRZGate(q, 0.1969007459896659, 8);
  sqcRYGate(q, 1.571366829608611, 9);
  sqcRZGate(q, -2.7372299074836275, 9);
  sqcRYGate(q, 0.5796509252346207, 10);
  sqcRZGate(q, 0.7430704744171691, 10);
  sqcRYGate(q, -1.5730610788106785, 11);
  sqcRZGate(q, -3.1389374758188033, 11);
  sqcRYGate(q, 1.5661972562484427, 12);
  sqcRZGate(q, -3.1384344374346917, 12);
  sqcRYGate(q, 1.5803947689840465, 13);
  sqcRZGate(q, -2.439335532954848, 13);
  sqcRYGate(q, 2.7569346111412374, 14);
  sqcRZGate(q, -1.5697421597155463, 14);
  sqcRYGate(q, -1.570085753695171, 15);
  sqcRZGate(q, -0.012852882293901864, 15);
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
  sqcRYGate(q, -0.021956220406294517, 0);
  sqcRZGate(q, 1.5332122871391551, 0);
  sqcRYGate(q, -0.02519121608707587, 1);
  sqcRZGate(q, -0.21701774406471258, 1);
  sqcRYGate(q, -3.138953505620697, 2);
  sqcRZGate(q, -3.1297609723489352, 2);
  sqcRYGate(q, 1.5861717890182039, 3);
  sqcRZGate(q, 0.03948120108551301, 3);
  sqcRYGate(q, -1.5648545210800382, 4);
  sqcRZGate(q, -3.1105632442209594, 4);
  sqcRYGate(q, 2.767618991674104, 5);
  sqcRZGate(q, -2.7612188968312505, 5);
  sqcRYGate(q, 2.1079231026917418, 6);
  sqcRZGate(q, -3.002676149382135, 6);
  sqcRYGate(q, 1.571627703007676, 7);
  sqcRZGate(q, 2.8545108747785863, 7);
  sqcRYGate(q, 0.00042070990998155366, 8);
  sqcRZGate(q, 3.03269530342491, 8);
  sqcRYGate(q, -3.1404185884068623, 9);
  sqcRZGate(q, -2.7376306680536544, 9);
  sqcRYGate(q, 3.1410350686663935, 10);
  sqcRZGate(q, 2.328777383809543, 10);
  sqcRYGate(q, 1.5699474507372972, 11);
  sqcRZGate(q, 0.0001545572229633413, 11);
  sqcRYGate(q, -1.5521803701320922, 12);
  sqcRZGate(q, -0.006827509463469106, 12);
  sqcRYGate(q, -2.838047466285493, 13);
  sqcRZGate(q, -2.2279188898254816, 13);
  sqcRYGate(q, -1.5692716433152067, 14);
  sqcRZGate(q, -0.3701267240605432, 14);
  sqcRYGate(q, -1.5676740554261024, 15);
  sqcRZGate(q, -3.1366002922530245, 15);
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
  sqcRYGate(q, 3.05019457355841, 0);
  sqcRZGate(q, 0.09181502625284921, 0);
  sqcRYGate(q, -3.138836947581767, 1);
  sqcRZGate(q, -1.850308131225358, 1);
  sqcRYGate(q, 1.710257572186714, 2);
  sqcRZGate(q, 2.879906717546915, 2);
  sqcRYGate(q, -1.2237770955375185, 3);
  sqcRZGate(q, 2.9425989565088377, 3);
  sqcRYGate(q, 0.06912150103448213, 4);
  sqcRZGate(q, -0.0332804893293805, 4);
  sqcRYGate(q, 3.1411894877271984, 5);
  sqcRZGate(q, 1.7057749162202, 5);
  sqcRYGate(q, 0.024511532255704807, 6);
  sqcRZGate(q, -0.12562291420275518, 6);
  sqcRYGate(q, 0.0008587254716152515, 7);
  sqcRZGate(q, 1.9930775045700528, 7);
  sqcRYGate(q, -0.2428071760941577, 8);
  sqcRZGate(q, -0.13311560426077026, 8);
  sqcRYGate(q, 1.5754863686721352, 9);
  sqcRZGate(q, 2.2819765748892697, 9);
  sqcRYGate(q, 1.5702151198819632, 10);
  sqcRZGate(q, -3.120860395453003, 10);
  sqcRYGate(q, -1.563631607307937, 11);
  sqcRZGate(q, -2.1652831120103224, 11);
  sqcRYGate(q, -1.572066209112705, 12);
  sqcRZGate(q, 2.657453652163141, 12);
  sqcRYGate(q, -1.5709091304356821, 13);
  sqcRZGate(q, -3.140968610348495, 13);
  sqcRYGate(q, 3.140943445516881, 14);
  sqcRZGate(q, -3.038723854310013, 14);
  sqcRYGate(q, -1.5706909349764115, 15);
  sqcRZGate(q, -1.5653070440389563, 15);
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
  sqcRYGate(q, 1.570350844124953, 0);
  sqcRZGate(q, 3.1377710335801483, 0);
  sqcRYGate(q, 3.133244949604126, 1);
  sqcRZGate(q, -0.39845750711443245, 1);
  sqcRYGate(q, 0.0007519352496874613, 2);
  sqcRZGate(q, -2.8195967810716436, 2);
  sqcRYGate(q, -1.5714801842479016, 3);
  sqcRZGate(q, 1.5714250700002614, 3);
  sqcRYGate(q, 1.5711968238218081, 4);
  sqcRZGate(q, 1.6193314249966608, 4);
  sqcRYGate(q, 2.6934161387278395, 5);
  sqcRZGate(q, -0.24143018699375848, 5);
  sqcRYGate(q, -0.9999015670422616, 6);
  sqcRZGate(q, 1.6744270390975435, 6);
  sqcRYGate(q, 0.0003212135253480852, 7);
  sqcRZGate(q, -0.2291812446601838, 7);
  sqcRYGate(q, -0.2367858605038089, 8);
  sqcRZGate(q, 1.1437673775651946, 8);
  sqcRYGate(q, -3.141300003869967, 9);
  sqcRZGate(q, -0.5783718633917907, 9);
  sqcRYGate(q, 2.904209780361105, 10);
  sqcRZGate(q, 0.11260134330185433, 10);
  sqcRYGate(q, -1.0454409087756744e-05, 11);
  sqcRZGate(q, -1.8716837049691326, 11);
  sqcRYGate(q, 0.0005095444375598385, 12);
  sqcRZGate(q, -1.0789582577202872, 12);
  sqcRYGate(q, -2.7282837576390544, 13);
  sqcRZGate(q, 0.20924613189757085, 13);
  sqcRYGate(q, 3.129570624032217, 14);
  sqcRZGate(q, 2.034865508815499, 14);
  sqcRYGate(q, 1.5708973524147058, 15);
  sqcRZGate(q, -0.0007977579464037987, 15);
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
  sqcRYGate(q, -2.6168736122735314, 0);
  sqcRZGate(q, 1.3753228440557947, 0);
  sqcRYGate(q, 1.5694647412566436, 1);
  sqcRZGate(q, 2.415932355664228, 1);
  sqcRYGate(q, 3.0715760621564363, 2);
  sqcRZGate(q, -0.13422134150304288, 2);
  sqcRYGate(q, 1.5708267267404405, 3);
  sqcRZGate(q, -0.9671515265284305, 3);
  sqcRYGate(q, -3.139865961106087, 4);
  sqcRZGate(q, -0.17729233735892586, 4);
  sqcRYGate(q, -0.0003755979124635545, 5);
  sqcRZGate(q, 2.0998105160423335, 5);
  sqcRYGate(q, 0.10124407251056933, 6);
  sqcRZGate(q, -0.13771264078804782, 6);
  sqcRYGate(q, 0.0009318075843971485, 7);
  sqcRZGate(q, 2.09335947386422, 7);
  sqcRYGate(q, -3.1411450853046787, 8);
  sqcRZGate(q, 2.573756966689763, 8);
  sqcRYGate(q, -3.139618609315417, 9);
  sqcRZGate(q, 2.2812187872708094, 9);
  sqcRYGate(q, -1.57315067931585, 10);
  sqcRZGate(q, 1.415550161475188, 10);
  sqcRYGate(q, -3.141524542608826, 11);
  sqcRZGate(q, 1.104191533749876, 11);
  sqcRYGate(q, -1.564818900091035, 12);
  sqcRZGate(q, -1.7139179524897639, 12);
  sqcRYGate(q, -3.14023133627036, 13);
  sqcRZGate(q, 2.208458224362145, 13);
  sqcRYGate(q, -0.11536656781503751, 14);
  sqcRZGate(q, 3.00779483153931, 14);
  sqcRYGate(q, 1.5622612114715304, 15);
  sqcRZGate(q, 1.9993439585377892, 15);

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
