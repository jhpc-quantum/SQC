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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -1.777873612056058, 0);
  sqcRZGate(q, -0.47242952534481547, 0);
  sqcRYGate(q, 0.29016418767247937, 1);
  sqcRZGate(q, -2.0926768618976412, 1);
  sqcRYGate(q, -2.0226124491645208, 2);
  sqcRZGate(q, -1.6892301384070023, 2);
  sqcRYGate(q, -3.1398435896700816, 3);
  sqcRZGate(q, -2.406607858928286, 3);
  sqcRYGate(q, -0.8700378021812041, 4);
  sqcRZGate(q, 0.07749759563818634, 4);
  sqcRYGate(q, 0.9306935910182252, 5);
  sqcRZGate(q, 1.197477552143825, 5);
  sqcRYGate(q, 0.0018448444897130045, 6);
  sqcRZGate(q, -3.078000595824306, 6);
  sqcRYGate(q, 2.574864637426626, 7);
  sqcRZGate(q, -0.0010702920575947398, 7);
  sqcRYGate(q, 0.0063134745089064035, 8);
  sqcRZGate(q, -2.762242279871351, 8);
  sqcRYGate(q, 0.3851191154698147, 9);
  sqcRZGate(q, -0.992790828156754, 9);
  sqcRYGate(q, -2.0620699759621703, 10);
  sqcRZGate(q, -3.1114571536866467, 10);
  sqcRYGate(q, 0.5026092992376485, 11);
  sqcRZGate(q, -0.4414401645510987, 11);
  sqcRYGate(q, 1.153013261318218, 12);
  sqcRZGate(q, 1.1710849944458008, 12);
  sqcRYGate(q, -3.116385787106474, 13);
  sqcRZGate(q, 1.4504385808849873, 13);
  sqcRYGate(q, 3.133898899319719, 14);
  sqcRZGate(q, 2.881167425743374, 14);
  sqcRYGate(q, 1.1992625566352695, 15);
  sqcRZGate(q, 0.0917435557030597, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.1023997634547538, 0);
  sqcRZGate(q, -1.964853382311098, 0);
  sqcRYGate(q, 0.5838743981978336, 1);
  sqcRZGate(q, 1.3582205927469033, 1);
  sqcRYGate(q, 2.393242248662923, 2);
  sqcRZGate(q, -0.5496828464795221, 2);
  sqcRYGate(q, -3.1412853297900756, 3);
  sqcRZGate(q, 1.8094336566358613, 3);
  sqcRYGate(q, -1.5678574846545228, 4);
  sqcRZGate(q, 0.8440150868573083, 4);
  sqcRYGate(q, -1.3975716412364907, 5);
  sqcRZGate(q, 2.1148720336717997, 5);
  sqcRYGate(q, -1.8968313901071268, 6);
  sqcRZGate(q, 0.10057513574196099, 6);
  sqcRYGate(q, -2.5699122364158167, 7);
  sqcRZGate(q, 1.4494423396266027, 7);
  sqcRYGate(q, 2.632838769204382, 8);
  sqcRZGate(q, 0.15921726594557142, 8);
  sqcRYGate(q, -2.2922854776835107, 9);
  sqcRZGate(q, 0.5140947377482776, 9);
  sqcRYGate(q, 0.5143388520502871, 10);
  sqcRZGate(q, 1.8461270109339853, 10);
  sqcRYGate(q, 1.3214626800369123, 11);
  sqcRZGate(q, 0.07644151141394497, 11);
  sqcRYGate(q, 0.11016974152249492, 12);
  sqcRZGate(q, 2.9149426336953357, 12);
  sqcRYGate(q, 0.036424440456991114, 13);
  sqcRZGate(q, -1.3867125258251363, 13);
  sqcRYGate(q, 0.0004376831734222956, 14);
  sqcRZGate(q, -1.7365505060207376, 14);
  sqcRYGate(q, 0.8755299967348914, 15);
  sqcRZGate(q, -0.7675458562394093, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.8477132239972311, 0);
  sqcRZGate(q, 1.1925257981369768, 0);
  sqcRYGate(q, 3.1132070509482026, 1);
  sqcRZGate(q, -1.8508064515049478, 1);
  sqcRYGate(q, -3.0331979762735313, 2);
  sqcRZGate(q, 2.1819726350581643, 2);
  sqcRYGate(q, 2.428483124979983, 3);
  sqcRZGate(q, 0.8811348946338786, 3);
  sqcRYGate(q, -0.0895272319953282, 4);
  sqcRZGate(q, 1.5301637611059178, 4);
  sqcRYGate(q, 0.03038994002356183, 5);
  sqcRZGate(q, -1.203452744493391, 5);
  sqcRYGate(q, -1.9413646665444482, 6);
  sqcRZGate(q, 2.5291028521523407, 6);
  sqcRYGate(q, 0.002960448192475873, 7);
  sqcRZGate(q, 2.789486307659051, 7);
  sqcRYGate(q, -0.17449427753101165, 8);
  sqcRZGate(q, -0.09317242158028505, 8);
  sqcRYGate(q, -2.808440887316575, 9);
  sqcRZGate(q, -2.309317833783959, 9);
  sqcRYGate(q, 0.008201395504396913, 10);
  sqcRZGate(q, 1.214205370639979, 10);
  sqcRYGate(q, 1.7151651686662994, 11);
  sqcRZGate(q, 0.2904394500965502, 11);
  sqcRYGate(q, 3.040000913124747, 12);
  sqcRZGate(q, 2.1196000731168243, 12);
  sqcRYGate(q, 3.1130828092365497, 13);
  sqcRZGate(q, 1.641635715318765, 13);
  sqcRYGate(q, 1.9395488790856579, 14);
  sqcRZGate(q, 0.6308301558626566, 14);
  sqcRYGate(q, 0.01209737440083669, 15);
  sqcRZGate(q, -2.6085240653901467, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.3314635943736084, 0);
  sqcRZGate(q, -0.9850029640586192, 0);
  sqcRYGate(q, -2.6802821147992697, 1);
  sqcRZGate(q, 1.271825597666473, 1);
  sqcRYGate(q, -3.140065679212743, 2);
  sqcRZGate(q, 2.914821864793589, 2);
  sqcRYGate(q, -3.1415379864815973, 3);
  sqcRZGate(q, -2.281696451586477, 3);
  sqcRYGate(q, 3.1393915158256895, 4);
  sqcRZGate(q, -2.659364860676191, 4);
  sqcRYGate(q, -1.389575092961258, 5);
  sqcRZGate(q, -2.725905307676155, 5);
  sqcRYGate(q, 1.9090094639729285, 6);
  sqcRZGate(q, 2.4947829261996035, 6);
  sqcRYGate(q, -0.001013429225271914, 7);
  sqcRZGate(q, 0.23552943280035835, 7);
  sqcRYGate(q, -2.0042872222837187, 8);
  sqcRZGate(q, -3.0793898466041463, 8);
  sqcRYGate(q, 1.0539760259639706, 9);
  sqcRZGate(q, 1.1390025388601432, 9);
  sqcRYGate(q, 2.8620249718697828, 10);
  sqcRZGate(q, 0.11023471986513034, 10);
  sqcRYGate(q, -1.9170009013054716, 11);
  sqcRZGate(q, -2.6877921742726327, 11);
  sqcRYGate(q, 0.4594323774141386, 12);
  sqcRZGate(q, 0.02075621581041442, 12);
  sqcRYGate(q, 3.140522352606023, 13);
  sqcRZGate(q, -2.85425064360513, 13);
  sqcRYGate(q, 0.025482896375891344, 14);
  sqcRZGate(q, -0.35052969337513223, 14);
  sqcRYGate(q, 2.304416589391669, 15);
  sqcRZGate(q, -1.501593932471164, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.6472318093354206, 0);
  sqcRZGate(q, -2.640731504191391, 0);
  sqcRYGate(q, 2.6599138369590003, 1);
  sqcRZGate(q, -2.585100971738759, 1);
  sqcRYGate(q, 0.9591318515721731, 2);
  sqcRZGate(q, -2.719093375307033, 2);
  sqcRYGate(q, 2.3834119959744706, 3);
  sqcRZGate(q, -1.2213068453023368, 3);
  sqcRYGate(q, 0.5752022473897638, 4);
  sqcRZGate(q, 1.6557434947714111, 4);
  sqcRYGate(q, -3.073679490902352, 5);
  sqcRZGate(q, 0.46401758588259656, 5);
  sqcRYGate(q, 0.3285550464077508, 6);
  sqcRZGate(q, 0.4734398608184573, 6);
  sqcRYGate(q, -2.5363532259474466, 7);
  sqcRZGate(q, -0.8443849398960142, 7);
  sqcRYGate(q, 2.090607421612095, 8);
  sqcRZGate(q, -1.8966707365964013, 8);
  sqcRYGate(q, 2.342813866419192, 9);
  sqcRZGate(q, 1.1970523252575869, 9);
  sqcRYGate(q, -1.170534369401973, 10);
  sqcRZGate(q, 1.1621903109359986, 10);
  sqcRYGate(q, 0.8194351925011939, 11);
  sqcRZGate(q, 1.3792408443416404, 11);
  sqcRYGate(q, -2.654167206903002, 12);
  sqcRZGate(q, -2.1376714779814456, 12);
  sqcRYGate(q, -3.100409692261535, 13);
  sqcRZGate(q, -0.1334558553821159, 13);
  sqcRYGate(q, -2.0046040062020802, 14);
  sqcRZGate(q, -0.04850588667546063, 14);
  sqcRYGate(q, -1.3872674727457106, 15);
  sqcRZGate(q, -0.13680199032683493, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.1187797937823905, 0);
  sqcRZGate(q, 0.4872029170134381, 0);
  sqcRYGate(q, -2.0480835973053404, 1);
  sqcRZGate(q, -2.108837632335657, 1);
  sqcRYGate(q, -3.1358834045381228, 2);
  sqcRZGate(q, 1.8879264466481, 2);
  sqcRYGate(q, 0.00046161713126655063, 3);
  sqcRZGate(q, -1.512012505958917, 3);
  sqcRYGate(q, -3.0688742793688655, 4);
  sqcRZGate(q, -0.8261290633798046, 4);
  sqcRYGate(q, 2.0350423178258548, 5);
  sqcRZGate(q, -0.6133873046274569, 5);
  sqcRYGate(q, -3.0315383579654953, 6);
  sqcRZGate(q, -0.7055549564604844, 6);
  sqcRYGate(q, 2.9493235563835913, 7);
  sqcRZGate(q, 2.4826802902519294, 7);
  sqcRYGate(q, 2.90697170144925, 8);
  sqcRZGate(q, -0.8297622620734382, 8);
  sqcRYGate(q, 0.42864102995279885, 9);
  sqcRZGate(q, 1.5107231733111834, 9);
  sqcRYGate(q, 0.09339930230310557, 10);
  sqcRZGate(q, -0.6682712511242431, 10);
  sqcRYGate(q, 2.804256696625872, 11);
  sqcRZGate(q, -2.284840414388959, 11);
  sqcRYGate(q, 1.6535728449139748, 12);
  sqcRZGate(q, -3.0757703003996406, 12);
  sqcRYGate(q, -3.1414131877035603, 13);
  sqcRZGate(q, 1.608362220547079, 13);
  sqcRYGate(q, 0.0037642512938859127, 14);
  sqcRZGate(q, 2.629362887959245, 14);
  sqcRYGate(q, 2.655725841291892, 15);
  sqcRZGate(q, -1.1651046603420516, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.36774508184905, 0);
  sqcRZGate(q, 2.7674263145526408, 0);
  sqcRYGate(q, 2.8730555787089957, 1);
  sqcRZGate(q, 0.32966317401509115, 1);
  sqcRYGate(q, 1.3297224845183608, 2);
  sqcRZGate(q, 0.16614947954171838, 2);
  sqcRYGate(q, -0.04959204915561255, 3);
  sqcRZGate(q, 2.920798682620383, 3);
  sqcRYGate(q, 2.4720316160757925, 4);
  sqcRZGate(q, -0.6765043019399941, 4);
  sqcRYGate(q, -2.285768863102589, 5);
  sqcRZGate(q, 1.129549193510989, 5);
  sqcRYGate(q, -1.4091063844591858, 6);
  sqcRZGate(q, -0.17287449538329724, 6);
  sqcRYGate(q, 0.8052868178174579, 7);
  sqcRZGate(q, -2.2438209456130815, 7);
  sqcRYGate(q, -3.1245480570292194, 8);
  sqcRZGate(q, -1.1857603214738481, 8);
  sqcRYGate(q, 0.049052278081379797, 9);
  sqcRZGate(q, -0.5091037026562836, 9);
  sqcRYGate(q, 2.482145396208331, 10);
  sqcRZGate(q, 0.7984277131921969, 10);
  sqcRYGate(q, -1.8914146246310342, 11);
  sqcRZGate(q, 2.550300767787558, 11);
  sqcRYGate(q, -0.9193668282881393, 12);
  sqcRZGate(q, 2.3578071509232674, 12);
  sqcRYGate(q, -2.761712647412276, 13);
  sqcRZGate(q, 2.5571681128871595, 13);
  sqcRYGate(q, 1.9054108676138588, 14);
  sqcRZGate(q, -1.4108601607762876, 14);
  sqcRYGate(q, -1.8336699511798455, 15);
  sqcRZGate(q, 1.2510317626418699, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.925768730667371, 0);
  sqcRZGate(q, -1.696105547911033, 0);
  sqcRYGate(q, 1.5464973334723677, 1);
  sqcRZGate(q, -2.568586518593135, 1);
  sqcRYGate(q, 3.0287865941305956, 2);
  sqcRZGate(q, 2.4180534672256537, 2);
  sqcRYGate(q, 0.00023572819026806968, 3);
  sqcRZGate(q, 1.9966062709311814, 3);
  sqcRYGate(q, -0.35319138053319893, 4);
  sqcRZGate(q, -1.4973686448571355, 4);
  sqcRYGate(q, 2.475962522936741, 5);
  sqcRZGate(q, 2.631141053024118, 5);
  sqcRYGate(q, -0.1823368273076298, 6);
  sqcRZGate(q, 2.852699014046545, 6);
  sqcRYGate(q, 0.06457245867796095, 7);
  sqcRZGate(q, 1.9332922764043106, 7);
  sqcRYGate(q, 2.4745361301406246, 8);
  sqcRZGate(q, -0.2336262916654439, 8);
  sqcRYGate(q, 3.1359017537151925, 9);
  sqcRZGate(q, -2.825129441634332, 9);
  sqcRYGate(q, 3.0970699070160634, 10);
  sqcRZGate(q, 2.604394560067102, 10);
  sqcRYGate(q, 0.6911111622890147, 11);
  sqcRZGate(q, 1.034518252772735, 11);
  sqcRYGate(q, 0.05526897386578167, 12);
  sqcRZGate(q, -2.940680374624891, 12);
  sqcRYGate(q, 3.1412381219191357, 13);
  sqcRZGate(q, -1.615722928607603, 13);
  sqcRYGate(q, 3.1321337637511544, 14);
  sqcRZGate(q, -0.21056473795462632, 14);
  sqcRYGate(q, 0.3154710831449009, 15);
  sqcRZGate(q, 0.7964784344275814, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.4417779083153107, 0);
  sqcRZGate(q, -1.0191790841748833, 0);
  sqcRYGate(q, 0.9798370505547898, 1);
  sqcRZGate(q, -3.0345086858152515, 1);
  sqcRYGate(q, -1.7973955628775686, 2);
  sqcRZGate(q, 0.39054805090306743, 2);
  sqcRYGate(q, -3.13027059324492, 3);
  sqcRZGate(q, 3.1113668242207657, 3);
  sqcRYGate(q, 2.851575588976874, 4);
  sqcRZGate(q, -2.5505883880292997, 4);
  sqcRYGate(q, -2.0742472027494374, 5);
  sqcRZGate(q, 0.8855442736686393, 5);
  sqcRYGate(q, -1.2030435295457353, 6);
  sqcRZGate(q, 1.1144792168486342, 6);
  sqcRYGate(q, 0.16209650332700498, 7);
  sqcRZGate(q, -1.3998628018116452, 7);
  sqcRYGate(q, 0.133483118682153, 8);
  sqcRZGate(q, 0.22946645187531445, 8);
  sqcRYGate(q, -2.7050017864983005, 9);
  sqcRZGate(q, -1.181070403836672, 9);
  sqcRYGate(q, -2.6588002025749384, 10);
  sqcRZGate(q, -1.5267948213249491, 10);
  sqcRYGate(q, 2.437857357737481, 11);
  sqcRZGate(q, 0.14230891982634386, 11);
  sqcRYGate(q, 2.361216966528088, 12);
  sqcRZGate(q, -1.9040961561189178, 12);
  sqcRYGate(q, 2.972624201058806, 13);
  sqcRZGate(q, -1.7962949185755201, 13);
  sqcRYGate(q, 1.569901194571215, 14);
  sqcRZGate(q, -1.038171026505969, 14);
  sqcRYGate(q, 1.6531100340912908, 15);
  sqcRZGate(q, -1.2548532808930701, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.4602148019072283, 0);
  sqcRZGate(q, 1.5580236139280288, 0);
  sqcRYGate(q, 1.485409566748969, 1);
  sqcRZGate(q, -0.7415183084654633, 1);
  sqcRYGate(q, 2.8843152847741456, 2);
  sqcRZGate(q, 0.48111058367364024, 2);
  sqcRYGate(q, 0.16406104133152102, 3);
  sqcRZGate(q, -1.8760426247207587, 3);
  sqcRYGate(q, -0.22124207982356556, 4);
  sqcRZGate(q, -0.21125613836357013, 4);
  sqcRYGate(q, -1.461742004044781, 5);
  sqcRZGate(q, 1.882103375394976, 5);
  sqcRYGate(q, 1.7713177840506076, 6);
  sqcRZGate(q, 3.0291774976483516, 6);
  sqcRYGate(q, -0.018412702358613163, 7);
  sqcRZGate(q, 2.33569740939481, 7);
  sqcRYGate(q, -2.8945277364538087, 8);
  sqcRZGate(q, 0.1630880699353145, 8);
  sqcRYGate(q, 0.04397453329779784, 9);
  sqcRZGate(q, -1.162947493980774, 9);
  sqcRYGate(q, 1.3693374160012706, 10);
  sqcRZGate(q, -1.3505832276455145, 10);
  sqcRYGate(q, 0.08935956812625624, 11);
  sqcRZGate(q, 2.917582582173399, 11);
  sqcRYGate(q, -2.6260920403777326, 12);
  sqcRZGate(q, 0.2800086434260908, 12);
  sqcRYGate(q, 0.0012172749404517108, 13);
  sqcRZGate(q, 3.004021393298909, 13);
  sqcRYGate(q, 3.1351962219622185, 14);
  sqcRZGate(q, 0.32174814799616963, 14);
  sqcRYGate(q, -0.9923454265624914, 15);
  sqcRZGate(q, 3.1391038344551476, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.2761467995470148, 0);
  sqcRZGate(q, 2.291655777521108, 0);
  sqcRYGate(q, 0.3400885426502027, 1);
  sqcRZGate(q, -2.9731407012287976, 1);
  sqcRYGate(q, -3.0710773781514464, 2);
  sqcRZGate(q, -1.1264015161086123, 2);
  sqcRYGate(q, -0.04115903141070153, 3);
  sqcRZGate(q, -2.7424696203419763, 3);
  sqcRYGate(q, -3.089045818273117, 4);
  sqcRZGate(q, 1.6940557676752759, 4);
  sqcRYGate(q, 2.3114398674403787, 5);
  sqcRZGate(q, -0.5475530768931902, 5);
  sqcRYGate(q, -1.9926100436416574, 6);
  sqcRZGate(q, -3.02355218838522, 6);
  sqcRYGate(q, -3.067003902928225, 7);
  sqcRZGate(q, -0.6051245279959536, 7);
  sqcRYGate(q, -0.11546638455461398, 8);
  sqcRZGate(q, -2.4815418187017384, 8);
  sqcRYGate(q, 3.0649204781381356, 9);
  sqcRZGate(q, -0.1796627173670204, 9);
  sqcRYGate(q, -1.44237751884573, 10);
  sqcRZGate(q, 2.5890785986950964, 10);
  sqcRYGate(q, 0.22784410141226252, 11);
  sqcRZGate(q, -0.15845394997918114, 11);
  sqcRYGate(q, 0.329933833186117, 12);
  sqcRZGate(q, -1.4649771473760183, 12);
  sqcRYGate(q, 0.3487765017187639, 13);
  sqcRZGate(q, -0.6115516109065249, 13);
  sqcRYGate(q, -0.9968157793654121, 14);
  sqcRZGate(q, -1.1696029115966697, 14);
  sqcRYGate(q, -2.5561180306299964, 15);
  sqcRZGate(q, -0.982547091115289, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.835674914093011, 0);
  sqcRZGate(q, 1.3498947058512787, 0);
  sqcRYGate(q, -0.7718111396336287, 1);
  sqcRZGate(q, -0.3399814068595042, 1);
  sqcRYGate(q, 3.1385977810313004, 2);
  sqcRZGate(q, 0.9433633953356564, 2);
  sqcRYGate(q, -2.045207649980533, 3);
  sqcRZGate(q, 1.0612479611348835, 3);
  sqcRYGate(q, 3.1299385031200724, 4);
  sqcRZGate(q, 0.43944794710060375, 4);
  sqcRYGate(q, -0.30916646523017965, 5);
  sqcRZGate(q, -3.019898498022707, 5);
  sqcRYGate(q, -1.1962522839642031, 6);
  sqcRZGate(q, 0.8747208155995205, 6);
  sqcRYGate(q, -1.8897550502402143, 7);
  sqcRZGate(q, -1.1310451774388595, 7);
  sqcRYGate(q, 2.822167635732445, 8);
  sqcRZGate(q, 2.9843676878824352, 8);
  sqcRYGate(q, -0.9180806838453334, 9);
  sqcRZGate(q, 2.183469562542092, 9);
  sqcRYGate(q, 1.8887672527920105, 10);
  sqcRZGate(q, -2.286285704076673, 10);
  sqcRYGate(q, 1.4217094221328486, 11);
  sqcRZGate(q, -0.916504420585847, 11);
  sqcRYGate(q, -2.055826383829421, 12);
  sqcRZGate(q, 0.04596706183364488, 12);
  sqcRYGate(q, -0.14511422583880496, 13);
  sqcRZGate(q, 1.262561983079174, 13);
  sqcRYGate(q, -0.02862878723701812, 14);
  sqcRZGate(q, -0.5647594973248465, 14);
  sqcRYGate(q, -3.0513518203717496, 15);
  sqcRZGate(q, 2.217564486318228, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.339834027985829, 0);
  sqcRZGate(q, 2.716121626253872, 0);
  sqcRYGate(q, 2.9641412907669054, 1);
  sqcRZGate(q, 1.9056539501123142, 1);
  sqcRYGate(q, -2.837755980495286, 2);
  sqcRZGate(q, -0.45420571246365343, 2);
  sqcRYGate(q, 3.0737814755293735, 3);
  sqcRZGate(q, 1.2585825379480173, 3);
  sqcRYGate(q, -3.123025374952854, 4);
  sqcRZGate(q, 1.2586690330948516, 4);
  sqcRYGate(q, 1.720453838426879, 5);
  sqcRZGate(q, -0.9891592716970871, 5);
  sqcRYGate(q, 0.1053092947491033, 6);
  sqcRZGate(q, 0.2918578856973948, 6);
  sqcRYGate(q, -2.937080633638181, 7);
  sqcRZGate(q, -2.1801768785323867, 7);
  sqcRYGate(q, 3.138267431065542, 8);
  sqcRZGate(q, 2.617313849396406, 8);
  sqcRYGate(q, 3.1183478891594194, 9);
  sqcRZGate(q, -0.6380702539037955, 9);
  sqcRYGate(q, 3.1238429984021754, 10);
  sqcRZGate(q, 1.1623745751211745, 10);
  sqcRYGate(q, -2.3585730065772927, 11);
  sqcRZGate(q, 2.065586651674651, 11);
  sqcRYGate(q, 3.0351688897495124, 12);
  sqcRZGate(q, -1.855811974141835, 12);
  sqcRYGate(q, 1.4095749329448235, 13);
  sqcRZGate(q, 1.4548035793405205, 13);
  sqcRYGate(q, -1.5072662183185672, 14);
  sqcRZGate(q, 1.0878850488583547, 14);
  sqcRYGate(q, 0.023574552600115876, 15);
  sqcRZGate(q, 1.4645578263649532, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.32200586255202346, 0);
  sqcRZGate(q, 1.6450678444579445, 0);
  sqcRYGate(q, 3.1172524264852526, 1);
  sqcRZGate(q, 1.8223056574067797, 1);
  sqcRYGate(q, -0.41768785833160266, 2);
  sqcRZGate(q, -2.721766713362423, 2);
  sqcRYGate(q, 0.7015847825472488, 3);
  sqcRZGate(q, 1.596463857568902, 3);
  sqcRYGate(q, -1.3824026749179836, 4);
  sqcRZGate(q, 1.8801119031360594, 4);
  sqcRYGate(q, 1.3226368430551982, 5);
  sqcRZGate(q, 1.9925826233366415, 5);
  sqcRYGate(q, -1.1750193320388376, 6);
  sqcRZGate(q, 1.396732167921127, 6);
  sqcRYGate(q, 2.563757716470838, 7);
  sqcRZGate(q, -0.582653883157386, 7);
  sqcRYGate(q, -2.7967607371283845, 8);
  sqcRZGate(q, 3.1393598475480258, 8);
  sqcRYGate(q, -1.5845785231736818, 9);
  sqcRZGate(q, 1.0125678759730938, 9);
  sqcRYGate(q, -3.1135201249632165, 10);
  sqcRZGate(q, -0.21298981500837894, 10);
  sqcRYGate(q, -3.1251271396971094, 11);
  sqcRZGate(q, -1.3936124213524081, 11);
  sqcRYGate(q, -3.1267941741145764, 12);
  sqcRZGate(q, -1.9671806168481032, 12);
  sqcRYGate(q, -3.14099740455188, 13);
  sqcRZGate(q, -2.1916789243111494, 13);
  sqcRYGate(q, -0.012329479202863135, 14);
  sqcRZGate(q, -0.5778314419180735, 14);
  sqcRYGate(q, 0.6833803760835506, 15);
  sqcRZGate(q, 1.471979277852264, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.0921576802931954, 0);
  sqcRZGate(q, 2.2657228233423963, 0);
  sqcRYGate(q, 0.07717468858124565, 1);
  sqcRZGate(q, 0.11544081540601767, 1);
  sqcRYGate(q, -0.23942261853916186, 2);
  sqcRZGate(q, -2.822900003322995, 2);
  sqcRYGate(q, -2.405481723781021, 3);
  sqcRZGate(q, 0.4333465346959286, 3);
  sqcRYGate(q, -0.24870776121043556, 4);
  sqcRZGate(q, -2.8440642814771975, 4);
  sqcRYGate(q, -3.077029233324343, 5);
  sqcRZGate(q, 0.465648680732504, 5);
  sqcRYGate(q, 0.04951774621138545, 6);
  sqcRZGate(q, 1.3505522087121171, 6);
  sqcRYGate(q, -0.3133924848935622, 7);
  sqcRZGate(q, -1.3454638555979184, 7);
  sqcRYGate(q, -2.2369045844091664, 8);
  sqcRZGate(q, -2.6466289610431417, 8);
  sqcRYGate(q, 1.0944502975352786, 9);
  sqcRZGate(q, 2.2185482876840044, 9);
  sqcRYGate(q, -2.9340598336823005, 10);
  sqcRZGate(q, -1.4854046576208626, 10);
  sqcRYGate(q, -2.701659703374812, 11);
  sqcRZGate(q, 1.3403209452002782, 11);
  sqcRYGate(q, -3.0308518744722517, 12);
  sqcRZGate(q, 1.6647609693610717, 12);
  sqcRYGate(q, -1.2610279818223527, 13);
  sqcRZGate(q, -0.6716353333752286, 13);
  sqcRYGate(q, 0.846364150145937, 14);
  sqcRZGate(q, 1.0653749517994093, 14);
  sqcRYGate(q, -3.037613452512074, 15);
  sqcRZGate(q, 1.2522205086090192, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.5890795715857419, 0);
  sqcRZGate(q, -2.266723508730103, 0);
  sqcRYGate(q, -3.139737341792079, 1);
  sqcRZGate(q, 1.5722695570545815, 1);
  sqcRYGate(q, -1.6088057899008044, 2);
  sqcRZGate(q, -1.1663375485558378, 2);
  sqcRYGate(q, 2.492082147292381, 3);
  sqcRZGate(q, -2.808905862785509, 3);
  sqcRYGate(q, 0.05007817533457892, 4);
  sqcRZGate(q, -0.13558037241588483, 4);
  sqcRYGate(q, 3.0749141743101407, 5);
  sqcRZGate(q, 1.8097541468542784, 5);
  sqcRYGate(q, -1.9210781671168784, 6);
  sqcRZGate(q, 0.008918558192745007, 6);
  sqcRYGate(q, -3.0830910492267183, 7);
  sqcRZGate(q, -0.3492063023518817, 7);
  sqcRYGate(q, 3.1030979848603115, 8);
  sqcRZGate(q, 0.4921416541039145, 8);
  sqcRYGate(q, 3.1393132659297103, 9);
  sqcRZGate(q, 2.228935457928759, 9);
  sqcRYGate(q, 3.1354746966703124, 10);
  sqcRZGate(q, -0.9570040528884557, 10);
  sqcRYGate(q, 2.009726525455075, 11);
  sqcRZGate(q, 0.891163189920261, 11);
  sqcRYGate(q, -1.9761423724799174, 12);
  sqcRZGate(q, 2.734980177569564, 12);
  sqcRYGate(q, 1.6396738280858383, 13);
  sqcRZGate(q, 2.3918941711674595, 13);
  sqcRYGate(q, -2.900376212630765, 14);
  sqcRZGate(q, -1.4766858139113506, 14);
  sqcRYGate(q, -1.259671132121924, 15);
  sqcRZGate(q, -1.6981787398616832, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.5465586051903492, 0);
  sqcRZGate(q, -2.0916078156068467, 0);
  sqcRYGate(q, 2.856248337775292, 1);
  sqcRZGate(q, 1.0721799753775896, 1);
  sqcRYGate(q, -2.386856882271498, 2);
  sqcRZGate(q, 0.42394443174930024, 2);
  sqcRYGate(q, -0.1491657087018572, 3);
  sqcRZGate(q, -2.078566293767703, 3);
  sqcRYGate(q, -1.2843923031878561, 4);
  sqcRZGate(q, 1.6100938169906094, 4);
  sqcRYGate(q, 3.0875760937954935, 5);
  sqcRZGate(q, -2.407005753484764, 5);
  sqcRYGate(q, 3.1228433640243063, 6);
  sqcRZGate(q, 3.0783325792110103, 6);
  sqcRYGate(q, 0.17907447859724, 7);
  sqcRZGate(q, -2.021117651813377, 7);
  sqcRYGate(q, 0.9042106632791116, 8);
  sqcRZGate(q, 1.6814576590609538, 8);
  sqcRYGate(q, -1.091648805227531, 9);
  sqcRZGate(q, -2.334059707332125, 9);
  sqcRYGate(q, -0.1548414231651556, 10);
  sqcRZGate(q, 0.66682993664888, 10);
  sqcRYGate(q, 0.1163108038363748, 11);
  sqcRZGate(q, 2.149940640826235, 11);
  sqcRYGate(q, 3.1357868900548413, 12);
  sqcRZGate(q, 1.3951128650158893, 12);
  sqcRYGate(q, 0.02029929582888993, 13);
  sqcRZGate(q, -0.8742025246601702, 13);
  sqcRYGate(q, -3.0061950381331672, 14);
  sqcRZGate(q, -1.6848276554273514, 14);
  sqcRYGate(q, -2.6465506922628594, 15);
  sqcRZGate(q, 0.5783919239513434, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.53327223325799, 0);
  sqcRZGate(q, 1.2803066868196058, 0);
  sqcRYGate(q, 1.6072429286906154, 1);
  sqcRZGate(q, -3.0236316056785086, 1);
  sqcRYGate(q, 0.5653541347855152, 2);
  sqcRZGate(q, -2.1396988308406213, 2);
  sqcRYGate(q, -0.03197261204461972, 3);
  sqcRZGate(q, 1.2938146010616418, 3);
  sqcRYGate(q, 3.0961434806418784, 4);
  sqcRZGate(q, 1.5628747600546884, 4);
  sqcRYGate(q, -0.07074846071185886, 5);
  sqcRZGate(q, 1.4946153147802033, 5);
  sqcRYGate(q, -0.19880279210826807, 6);
  sqcRZGate(q, -0.6029548494333491, 6);
  sqcRYGate(q, 0.017096784084595033, 7);
  sqcRZGate(q, 1.5262247744640665, 7);
  sqcRYGate(q, -3.137717538052157, 8);
  sqcRZGate(q, -0.5194014995507744, 8);
  sqcRYGate(q, 1.6114481189556389, 9);
  sqcRZGate(q, 3.045501405918184, 9);
  sqcRYGate(q, -0.8552699702799088, 10);
  sqcRZGate(q, 2.5590029939183454, 10);
  sqcRYGate(q, 0.9376354036225418, 11);
  sqcRZGate(q, 2.600765064601277, 11);
  sqcRYGate(q, -0.8660038650007903, 12);
  sqcRZGate(q, -1.9378965848812106, 12);
  sqcRYGate(q, 1.967812893899899, 13);
  sqcRZGate(q, -1.2086779003632697, 13);
  sqcRYGate(q, 1.5408770510921537, 14);
  sqcRZGate(q, -0.9406043870490546, 14);
  sqcRYGate(q, -3.0262219943041386, 15);
  sqcRZGate(q, 1.4201274181231274, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.638410680952365, 0);
  sqcRZGate(q, 0.011498045838527081, 0);
  sqcRYGate(q, -0.04904307837055555, 1);
  sqcRZGate(q, -0.1942607609162453, 1);
  sqcRYGate(q, -3.1295049389862872, 2);
  sqcRZGate(q, 0.7472765789740556, 2);
  sqcRYGate(q, -0.05105693090464137, 3);
  sqcRZGate(q, -0.19720807142756872, 3);
  sqcRYGate(q, 1.1305024828220112, 4);
  sqcRZGate(q, 2.996253658099481, 4);
  sqcRYGate(q, -3.1234814636448283, 5);
  sqcRZGate(q, -1.1184971772491519, 5);
  sqcRYGate(q, -3.136295396689682, 6);
  sqcRZGate(q, -2.5864489714407632, 6);
  sqcRYGate(q, 0.07535393263714357, 7);
  sqcRZGate(q, 2.9202966490194755, 7);
  sqcRYGate(q, 3.1408551971507292, 8);
  sqcRZGate(q, 1.3686477096877137, 8);
  sqcRYGate(q, -3.1098528055309003, 9);
  sqcRZGate(q, -0.21373256525049023, 9);
  sqcRYGate(q, 0.003216561121022728, 10);
  sqcRZGate(q, 0.6981739856138205, 10);
  sqcRYGate(q, 2.952572326998057, 11);
  sqcRZGate(q, 0.5573107678577666, 11);
  sqcRYGate(q, -0.008491490836938453, 12);
  sqcRZGate(q, -2.484012857029411, 12);
  sqcRYGate(q, -3.1352884848913414, 13);
  sqcRZGate(q, 2.4013628776503793, 13);
  sqcRYGate(q, 0.8074093780028688, 14);
  sqcRZGate(q, 0.6360496349815392, 14);
  sqcRYGate(q, -0.18343974292993256, 15);
  sqcRZGate(q, 2.659500160495397, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.7505738804977256, 0);
  sqcRZGate(q, -1.5873794894303315, 0);
  sqcRYGate(q, 1.756705764604792, 1);
  sqcRZGate(q, 1.5657009204368508, 1);
  sqcRYGate(q, 0.28867513388706634, 2);
  sqcRZGate(q, -1.301474351691228, 2);
  sqcRYGate(q, 3.077122466040073, 3);
  sqcRZGate(q, -1.6646867273540917, 3);
  sqcRYGate(q, 0.9651429851281766, 4);
  sqcRZGate(q, 1.7164567282099448, 4);
  sqcRYGate(q, -3.11005397837189, 5);
  sqcRZGate(q, 1.8679796143299123, 5);
  sqcRYGate(q, -0.3875440244782964, 6);
  sqcRZGate(q, 1.9394378665054812, 6);
  sqcRYGate(q, -0.012522799883036537, 7);
  sqcRZGate(q, 0.06770298368284244, 7);
  sqcRYGate(q, -0.0581192561027688, 8);
  sqcRZGate(q, -2.261639387180728, 8);
  sqcRYGate(q, -1.4458193345901547, 9);
  sqcRZGate(q, 0.8971665033306513, 9);
  sqcRYGate(q, -2.3890874036263767, 10);
  sqcRZGate(q, -2.529609748197563, 10);
  sqcRYGate(q, -0.40225189439123366, 11);
  sqcRZGate(q, -0.3639677714114164, 11);
  sqcRYGate(q, -1.5284719818023955, 12);
  sqcRZGate(q, 2.9872226985034667, 12);
  sqcRYGate(q, -3.0559198838449633, 13);
  sqcRZGate(q, 1.3531489577148461, 13);
  sqcRYGate(q, 2.825720174195949, 14);
  sqcRZGate(q, -0.37901277983702875, 14);
  sqcRYGate(q, -1.5136951616291556, 15);
  sqcRZGate(q, -0.06368293501057165, 15);

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
