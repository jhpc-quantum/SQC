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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.5862522446065127, 0);
  sqcRZGate(q, 2.009119246675178, 0);
  sqcRYGate(q, -2.968899117310385, 1);
  sqcRZGate(q, -2.337624026042158, 1);
  sqcRYGate(q, 1.8010159059883826, 2);
  sqcRZGate(q, 0.4951487248965245, 2);
  sqcRYGate(q, -1.6273601588096502, 3);
  sqcRZGate(q, -1.5894768930522287, 3);
  sqcRYGate(q, -1.5506892659381688, 4);
  sqcRZGate(q, -2.656163358383468, 4);
  sqcRYGate(q, 1.5708344908287974, 5);
  sqcRZGate(q, 0.342578725821404, 5);
  sqcRYGate(q, -0.8755712756367894, 6);
  sqcRZGate(q, -0.6581031036272256, 6);
  sqcRYGate(q, 0.8795192052486884, 7);
  sqcRZGate(q, -0.8105228617464274, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.120020345986979, 0);
  sqcRZGate(q, -3.1231795202451997, 0);
  sqcRYGate(q, 2.7029781011060168, 1);
  sqcRZGate(q, -0.226703248831997, 1);
  sqcRYGate(q, -0.025931015193534353, 2);
  sqcRZGate(q, -0.41703528577795357, 2);
  sqcRYGate(q, -3.127246356258768, 3);
  sqcRZGate(q, -2.06390794667376, 3);
  sqcRYGate(q, 3.1339334597750184, 4);
  sqcRZGate(q, 2.064822994243981, 4);
  sqcRYGate(q, -3.1354339283086134, 5);
  sqcRZGate(q, -1.724533938505596, 5);
  sqcRYGate(q, -0.762130070772755, 6);
  sqcRZGate(q, -1.5142102976753025, 6);
  sqcRYGate(q, -1.7002463375056982, 7);
  sqcRZGate(q, -2.0408570283707776, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.076744364333485, 0);
  sqcRZGate(q, 0.5234487975279438, 0);
  sqcRYGate(q, 0.4800764353400965, 1);
  sqcRZGate(q, -1.9291872272212562, 1);
  sqcRYGate(q, -0.5330101678100903, 2);
  sqcRZGate(q, 0.2956076091182682, 2);
  sqcRYGate(q, 0.8523177242019342, 3);
  sqcRZGate(q, 0.6117525530821082, 3);
  sqcRYGate(q, -3.039123437787794, 4);
  sqcRZGate(q, 3.123445024798203, 4);
  sqcRYGate(q, 0.154460177164391, 5);
  sqcRZGate(q, -2.7245445134076505, 5);
  sqcRYGate(q, 1.1191641369642618, 6);
  sqcRZGate(q, 1.8263153741087568, 6);
  sqcRYGate(q, 2.7881033364933483, 7);
  sqcRZGate(q, -2.6304843039139096, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.2159654291973876, 0);
  sqcRZGate(q, 1.4134229136317593, 0);
  sqcRYGate(q, 0.48250508233324657, 1);
  sqcRZGate(q, 2.075527952587857, 1);
  sqcRYGate(q, 0.06902932657686023, 2);
  sqcRZGate(q, -0.2791134638204653, 2);
  sqcRYGate(q, 0.01348759042885422, 3);
  sqcRZGate(q, -1.744313444626779, 3);
  sqcRYGate(q, -1.5958023076545016, 4);
  sqcRZGate(q, 0.2580760233994069, 4);
  sqcRYGate(q, -1.5815244583249564, 5);
  sqcRZGate(q, 0.25928966121152897, 5);
  sqcRYGate(q, 1.1365626088842151, 6);
  sqcRZGate(q, -1.341745808371342, 6);
  sqcRYGate(q, 0.2856388441730704, 7);
  sqcRZGate(q, 2.9039285669199213, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.18822564563212385, 0);
  sqcRZGate(q, 2.376200725654076, 0);
  sqcRYGate(q, 0.8009923799240068, 1);
  sqcRZGate(q, -1.1598506159974067, 1);
  sqcRYGate(q, 3.1013441227319114, 2);
  sqcRZGate(q, 2.0588626787872695, 2);
  sqcRYGate(q, -0.03401722549404051, 3);
  sqcRZGate(q, 1.7350934415745973, 3);
  sqcRYGate(q, -1.577426708852693, 4);
  sqcRZGate(q, -0.14064858198406505, 4);
  sqcRYGate(q, -1.5792195391349517, 5);
  sqcRZGate(q, -2.839189231746988, 5);
  sqcRYGate(q, -2.9549896463745924, 6);
  sqcRZGate(q, 0.21033819584125094, 6);
  sqcRYGate(q, 2.2907763607648226, 7);
  sqcRZGate(q, -0.7360723186158593, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8655470509565264, 0);
  sqcRZGate(q, -1.1488838099614638, 0);
  sqcRYGate(q, 0.6058780528285732, 1);
  sqcRZGate(q, -1.262148443217411, 1);
  sqcRYGate(q, 0.24430038268130438, 2);
  sqcRZGate(q, 2.1795054537086416, 2);
  sqcRYGate(q, 2.7974518310498735, 3);
  sqcRZGate(q, 1.3311388444317032, 3);
  sqcRYGate(q, 0.42376783271547236, 4);
  sqcRZGate(q, 0.4762678985708338, 4);
  sqcRYGate(q, -2.8236452366357474, 5);
  sqcRZGate(q, 0.7037565292570304, 5);
  sqcRYGate(q, -0.8551771816150406, 6);
  sqcRZGate(q, 2.5309627285732543, 6);
  sqcRYGate(q, -2.4829657254269413, 7);
  sqcRZGate(q, 1.717389106161027, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.233971070140598, 0);
  sqcRZGate(q, 0.9346081023537315, 0);
  sqcRYGate(q, 2.773269399771709, 1);
  sqcRZGate(q, -0.3000338944557841, 1);
  sqcRYGate(q, 0.020433261729225716, 2);
  sqcRZGate(q, -1.995093564159198, 2);
  sqcRYGate(q, -3.1349515825302476, 3);
  sqcRZGate(q, -2.6007864743312243, 3);
  sqcRYGate(q, -2.1264832586420823, 4);
  sqcRZGate(q, -0.8660282442770786, 4);
  sqcRYGate(q, 1.9843548320713396, 5);
  sqcRZGate(q, 2.2026035183979573, 5);
  sqcRYGate(q, -2.138416517566344, 6);
  sqcRZGate(q, -2.8705709741260477, 6);
  sqcRYGate(q, 1.1081341148537813, 7);
  sqcRZGate(q, 0.3435979952030324, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.557449392670951, 0);
  sqcRZGate(q, -2.3852622092960614, 0);
  sqcRYGate(q, 1.0266956329113326, 1);
  sqcRZGate(q, -2.852001626961084, 1);
  sqcRYGate(q, -1.5781140939389602, 2);
  sqcRZGate(q, 1.3443373036900734, 2);
  sqcRYGate(q, 1.7735553464010465, 3);
  sqcRZGate(q, 0.5675049331359308, 3);
  sqcRYGate(q, 1.5793107248514062, 4);
  sqcRZGate(q, -1.596284047734599, 4);
  sqcRYGate(q, 1.492204792940691, 5);
  sqcRZGate(q, 2.2730907726111744, 5);
  sqcRYGate(q, 2.203715730586759, 6);
  sqcRZGate(q, 0.23035118130802967, 6);
  sqcRYGate(q, -0.43963663195728564, 7);
  sqcRZGate(q, -2.0359076160189638, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.42005731278981884, 0);
  sqcRZGate(q, -3.0409030397966785, 0);
  sqcRYGate(q, 1.1673443919797082, 1);
  sqcRZGate(q, -1.4468438089017577, 1);
  sqcRYGate(q, -0.5596325801294573, 2);
  sqcRZGate(q, -0.2770972303029477, 2);
  sqcRYGate(q, 1.9263098829169527, 3);
  sqcRZGate(q, -0.16526031670441113, 3);
  sqcRYGate(q, -0.006323065993181839, 4);
  sqcRZGate(q, 1.0243005824018478, 4);
  sqcRYGate(q, 3.1375579612188376, 5);
  sqcRZGate(q, -3.099361252706504, 5);
  sqcRYGate(q, 1.853541122438961, 6);
  sqcRZGate(q, -2.827871828749675, 6);
  sqcRYGate(q, 2.313707936081423, 7);
  sqcRZGate(q, -2.5186822094213985, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.7976161667851488, 0);
  sqcRZGate(q, -3.0041828850970616, 0);
  sqcRYGate(q, 3.0543772551797206, 1);
  sqcRZGate(q, 2.6927554524949113, 1);
  sqcRYGate(q, 1.7976261372739986, 2);
  sqcRZGate(q, 3.0285205667107955, 2);
  sqcRYGate(q, 1.0213189834855392, 3);
  sqcRZGate(q, -1.380989799601103, 3);
  sqcRYGate(q, 1.5547154698089982, 4);
  sqcRZGate(q, 1.3380891589884278, 4);
  sqcRYGate(q, -1.5723443530091012, 5);
  sqcRZGate(q, 0.6281701939051644, 5);
  sqcRYGate(q, 2.1934615389694585, 6);
  sqcRZGate(q, 1.952702862651039, 6);
  sqcRYGate(q, 0.10074451213649205, 7);
  sqcRZGate(q, 2.178664891164196, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.62160790602865, 0);
  sqcRZGate(q, -2.184086380505877, 0);
  sqcRYGate(q, -0.6418595764746643, 1);
  sqcRZGate(q, -2.472363650942897, 1);
  sqcRYGate(q, 3.1329926565459, 2);
  sqcRZGate(q, -2.0541927198527863, 2);
  sqcRYGate(q, -3.1388345700691067, 3);
  sqcRZGate(q, 1.4232281859209697, 3);
  sqcRYGate(q, 3.1319680215197767, 4);
  sqcRZGate(q, 1.3386277955555697, 4);
  sqcRYGate(q, 3.1403214329426064, 5);
  sqcRZGate(q, -2.531258452428834, 5);
  sqcRYGate(q, -1.0796978799383492, 6);
  sqcRZGate(q, 1.4794536971503613, 6);
  sqcRYGate(q, 1.5730426679838274, 7);
  sqcRZGate(q, 0.7079537783106269, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.671014594989024, 0);
  sqcRZGate(q, 0.22966348259277414, 0);
  sqcRYGate(q, -1.930629741166773, 1);
  sqcRZGate(q, 1.5269859859626593, 1);
  sqcRYGate(q, 2.0434692024718775, 2);
  sqcRZGate(q, 0.4434177500836306, 2);
  sqcRYGate(q, 1.8315208420575089, 3);
  sqcRZGate(q, -0.255400254436503, 3);
  sqcRYGate(q, -1.5694560249026233, 4);
  sqcRZGate(q, -1.3932236406464096, 4);
  sqcRYGate(q, -1.5735945811707808, 5);
  sqcRZGate(q, 0.4119206173246023, 5);
  sqcRYGate(q, 3.0681855956838127, 6);
  sqcRZGate(q, -1.0758396680768936, 6);
  sqcRYGate(q, 3.028151294675427, 7);
  sqcRZGate(q, 1.0261380250055374, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.9930878068824058, 0);
  sqcRZGate(q, -2.6034718182845613, 0);
  sqcRYGate(q, -1.4129338006501095, 1);
  sqcRZGate(q, -0.4290768537237138, 1);
  sqcRYGate(q, -1.7780282299317356, 2);
  sqcRZGate(q, -2.4219388539188733, 2);
  sqcRYGate(q, -2.4868358285929024, 3);
  sqcRZGate(q, -0.7896244061172898, 3);
  sqcRYGate(q, -0.047200531403911325, 4);
  sqcRZGate(q, -0.6091069593095266, 4);
  sqcRYGate(q, 0.00235298745905872, 5);
  sqcRZGate(q, -1.8478963813279767, 5);
  sqcRYGate(q, 0.32769072159937157, 6);
  sqcRZGate(q, 1.0939502139553343, 6);
  sqcRYGate(q, -1.5265620697349327, 7);
  sqcRZGate(q, 0.4408009196165805, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7703324569684158, 0);
  sqcRZGate(q, -1.0656893270163033, 0);
  sqcRYGate(q, -0.9678879096592645, 1);
  sqcRZGate(q, -0.6846569099495239, 1);
  sqcRYGate(q, -0.5812773156440133, 2);
  sqcRZGate(q, 0.9884391580373614, 2);
  sqcRYGate(q, 1.6788526804993062, 3);
  sqcRZGate(q, -0.13542072560445195, 3);
  sqcRYGate(q, 3.139090584629118, 4);
  sqcRZGate(q, 0.8624564876125671, 4);
  sqcRYGate(q, -1.5680106653905355, 5);
  sqcRZGate(q, 1.5814665893760573, 5);
  sqcRYGate(q, 1.672720763844603, 6);
  sqcRZGate(q, -3.115848229643617, 6);
  sqcRYGate(q, 1.5399032372919228, 7);
  sqcRZGate(q, -0.1729130276950039, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.598670437145443, 0);
  sqcRZGate(q, -0.5978206840322802, 0);
  sqcRYGate(q, 2.287661647678155, 1);
  sqcRZGate(q, 1.0404231631367118, 1);
  sqcRYGate(q, -3.1390520111198943, 2);
  sqcRZGate(q, -3.0658125227724096, 2);
  sqcRYGate(q, -0.0014768234977298176, 3);
  sqcRZGate(q, -2.1100867992127714, 3);
  sqcRYGate(q, 0.0072389231341869476, 4);
  sqcRZGate(q, -1.562749814429237, 4);
  sqcRYGate(q, 3.1355672545731745, 5);
  sqcRZGate(q, -0.8351179482107135, 5);
  sqcRYGate(q, 1.5685739725477386, 6);
  sqcRZGate(q, 1.5724231922531073, 6);
  sqcRYGate(q, -1.73017674000419, 7);
  sqcRZGate(q, -1.5730819459150855, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.023388937410557, 0);
  sqcRZGate(q, 1.813291866316744, 0);
  sqcRYGate(q, -2.526052403847106, 1);
  sqcRZGate(q, 0.1837933057872784, 1);
  sqcRYGate(q, 0.5876001229385919, 2);
  sqcRZGate(q, 2.124109361896904, 2);
  sqcRYGate(q, 1.5377339737775884, 3);
  sqcRZGate(q, 2.3508825097548365, 3);
  sqcRYGate(q, 1.5401819175277431, 4);
  sqcRZGate(q, -0.802755578061916, 4);
  sqcRYGate(q, -0.004471080448297471, 5);
  sqcRZGate(q, 0.393925515067736, 5);
  sqcRYGate(q, 1.57307506590613, 6);
  sqcRZGate(q, 1.57164727534295, 6);
  sqcRYGate(q, -1.570523997995715, 7);
  sqcRZGate(q, -0.9456386111920176, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.677872158037125, 0);
  sqcRZGate(q, 0.716203665292289, 0);
  sqcRYGate(q, -2.1943614028564826, 1);
  sqcRZGate(q, -1.5941290797852625, 1);
  sqcRYGate(q, -0.00024238193902270666, 2);
  sqcRZGate(q, -2.5160827783049386, 2);
  sqcRYGate(q, -0.028058317648326794, 3);
  sqcRZGate(q, -1.6368464578452633, 3);
  sqcRYGate(q, -0.0034396119058479613, 4);
  sqcRZGate(q, 0.7979507176943175, 4);
  sqcRYGate(q, -0.0036732329991061314, 5);
  sqcRZGate(q, 2.032011504435208, 5);
  sqcRYGate(q, 1.38580537319117, 6);
  sqcRZGate(q, 3.139700299347559, 6);
  sqcRYGate(q, -0.0040412232424987, 7);
  sqcRZGate(q, -0.6274121723414727, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.03569876984556064, 0);
  sqcRZGate(q, -2.307820396637856, 0);
  sqcRYGate(q, 1.8934050831285845, 1);
  sqcRZGate(q, 0.7359631264858061, 1);
  sqcRYGate(q, 2.7446737601569993, 2);
  sqcRZGate(q, -2.3639036173561303, 2);
  sqcRYGate(q, 3.017529522058104, 3);
  sqcRZGate(q, -1.0496281212201923, 3);
  sqcRYGate(q, -1.4244481292493814, 4);
  sqcRZGate(q, 2.1539144990849075, 4);
  sqcRYGate(q, -1.5739756709092971, 5);
  sqcRZGate(q, 2.15258542053472, 5);
  sqcRYGate(q, 1.5800335338225608, 6);
  sqcRZGate(q, -2.0988320922986485, 6);
  sqcRYGate(q, -1.565518417905536, 7);
  sqcRZGate(q, -0.8808545277419189, 7);

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
