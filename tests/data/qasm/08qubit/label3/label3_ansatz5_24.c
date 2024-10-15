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

  sqcRYGate(q, -0.5445546814503706, 0);
  sqcRYGate(q, -2.190400168109819, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.43555931026226, 0);
  sqcRYGate(q, 1.3326370855792504, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5891793664470404, 2);
  sqcRYGate(q, 2.8471891682794244, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17893323873415048, 2);
  sqcRYGate(q, -2.9600089008744734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4790380686744958, 4);
  sqcRYGate(q, -1.1364107269789427, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.953753883791618, 4);
  sqcRYGate(q, 0.5888034936647166, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6440287423241609, 6);
  sqcRYGate(q, -2.9167887784144346, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7531925615780275, 6);
  sqcRYGate(q, 0.061994410945101545, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.799645248989163, 1);
  sqcRYGate(q, -1.1095513308859069, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5500808867245958, 1);
  sqcRYGate(q, 2.239888535853437, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0506389504022795, 3);
  sqcRYGate(q, 2.920685034226458, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.186912379774932, 3);
  sqcRYGate(q, -1.859881776597046, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0549961872687261, 5);
  sqcRYGate(q, 1.32024950474465, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5319527463988416, 5);
  sqcRYGate(q, 0.3040346576851764, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0611400566614262, 0);
  sqcRYGate(q, -0.8133119966140879, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9518837290764424, 0);
  sqcRYGate(q, -0.6218721947308833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1481414857237473, 2);
  sqcRYGate(q, -1.5052147809755834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8781325528619988, 2);
  sqcRYGate(q, 1.558254143205862, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6101798626013175, 4);
  sqcRYGate(q, -2.7959134227791234, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2627582616598709, 4);
  sqcRYGate(q, -1.2020399434990647, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1974574829582343, 6);
  sqcRYGate(q, 1.6174564541731737, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1212892194307598, 6);
  sqcRYGate(q, 1.9458098158599897, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1166758542323594, 1);
  sqcRYGate(q, 1.5739141281652884, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2382021363962057, 1);
  sqcRYGate(q, -2.1692769283525264, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.40378990264405, 3);
  sqcRYGate(q, 1.6752759531440555, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.24823727718180066, 3);
  sqcRYGate(q, -2.7887225438893433, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5956470668698062, 5);
  sqcRYGate(q, -1.7970066131197902, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.84602532720477, 5);
  sqcRYGate(q, -0.8029537066560604, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.81086383180028, 0);
  sqcRYGate(q, 1.1382679718434154, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0912665067008547, 0);
  sqcRYGate(q, 2.3863843834207663, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6361279100158872, 2);
  sqcRYGate(q, 0.5432430535830384, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7932367123255262, 2);
  sqcRYGate(q, -0.2914576370736137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8655386919881893, 4);
  sqcRYGate(q, 0.15649633788895106, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.606108522832773, 4);
  sqcRYGate(q, 2.187151210089448, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.566613840221303, 6);
  sqcRYGate(q, 1.6255029605317448, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.057357411103602, 6);
  sqcRYGate(q, 2.1575460125620882, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7965760236210455, 1);
  sqcRYGate(q, 2.5122404466188892, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1683976647255463, 1);
  sqcRYGate(q, 2.1247792351212538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.318168212285657, 3);
  sqcRYGate(q, -0.5040669958671775, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1897114547918848, 3);
  sqcRYGate(q, -2.9964194761976994, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.057790010693338, 5);
  sqcRYGate(q, -2.891215929999149, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8142569677829359, 5);
  sqcRYGate(q, 0.5593837029627365, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.115087956335705, 0);
  sqcRYGate(q, 0.5404800413511566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9445103392826183, 0);
  sqcRYGate(q, -0.6308955998685543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4072231389287676, 2);
  sqcRYGate(q, 0.6315279114861129, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4250030214659877, 2);
  sqcRYGate(q, -0.8467163512225832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1979525241069062, 4);
  sqcRYGate(q, -2.616570624431713, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6931646829312248, 4);
  sqcRYGate(q, 0.11759677866873465, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5001657453106167, 6);
  sqcRYGate(q, -2.175207083086382, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9971328244203653, 6);
  sqcRYGate(q, -1.7711766304366534, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5233533903353207, 1);
  sqcRYGate(q, -0.6469134071481938, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.41285945407482455, 1);
  sqcRYGate(q, 1.7500366250853707, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5048416108446868, 3);
  sqcRYGate(q, 2.723260365268471, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5009599406253584, 3);
  sqcRYGate(q, 1.1846177102034021, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6342717309554289, 5);
  sqcRYGate(q, 2.336212767531224, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9715828750047626, 5);
  sqcRYGate(q, 1.883428299044614, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8240132871927806, 0);
  sqcRYGate(q, 0.47610317584178496, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8945279140883607, 0);
  sqcRYGate(q, 2.1481112504720534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.779927382873972, 2);
  sqcRYGate(q, -2.3635308422364303, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9347397735850205, 2);
  sqcRYGate(q, 1.211405072938613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8342445547094335, 4);
  sqcRYGate(q, 0.4160568178924014, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.754931841157052, 4);
  sqcRYGate(q, -1.3311504730522552, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.321651830214691, 6);
  sqcRYGate(q, -0.3999995308449718, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.475951247679004, 6);
  sqcRYGate(q, -1.4328584413371317, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7987682218419128, 1);
  sqcRYGate(q, -0.24500801110117293, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7988536324154545, 1);
  sqcRYGate(q, -0.9772936065645466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.237946171434084, 3);
  sqcRYGate(q, -1.9071107779135374, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.865052595716164, 3);
  sqcRYGate(q, -0.4486809264493937, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6662618286961948, 5);
  sqcRYGate(q, -0.8342098276788046, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.17722208443191348, 5);
  sqcRYGate(q, -1.6917824795048546, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3102333457810005, 0);
  sqcRYGate(q, -1.45529101203309, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5664778519131268, 0);
  sqcRYGate(q, -1.3752369381235816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.072406819708549, 2);
  sqcRYGate(q, -3.1192850017886005, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9133061862104146, 2);
  sqcRYGate(q, -2.405579396031772, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.43870464079943383, 4);
  sqcRYGate(q, -1.8386790596799585, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7168281247706272, 4);
  sqcRYGate(q, -1.2920994561607062, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.273872404402266, 6);
  sqcRYGate(q, 1.8029473327875227, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.082360132423914, 6);
  sqcRYGate(q, 2.1149702749775345, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5738390248880941, 1);
  sqcRYGate(q, -0.26272547612420366, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1832989328718815, 1);
  sqcRYGate(q, 1.3291267393837733, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6094920891299944, 3);
  sqcRYGate(q, 2.990435062095187, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.850039457931433, 3);
  sqcRYGate(q, 3.0206473603825175, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.089438586500088, 5);
  sqcRYGate(q, -1.362161505056674, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1819499422574378, 5);
  sqcRYGate(q, -2.4397426120054155, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6636669697368782, 0);
  sqcRYGate(q, -0.05595392970330932, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9510570182512195, 0);
  sqcRYGate(q, 2.83251226132185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0496798999331385, 2);
  sqcRYGate(q, -0.252663310645113, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5124326441627103, 2);
  sqcRYGate(q, 2.9020187657526804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4780037906796933, 4);
  sqcRYGate(q, 1.2530333293325286, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4897200441034259, 4);
  sqcRYGate(q, -1.8391865448475981, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.907265630148454, 6);
  sqcRYGate(q, -1.8995930290319762, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.038985051179839, 6);
  sqcRYGate(q, 0.6572219863002308, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5438359287110597, 1);
  sqcRYGate(q, -1.0430894338742451, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.050260843985291, 1);
  sqcRYGate(q, 2.7865929978378343, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5941083763457552, 3);
  sqcRYGate(q, 0.5037291122178159, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6869011281748538, 3);
  sqcRYGate(q, -0.979724991289954, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5573836509599026, 5);
  sqcRYGate(q, -1.9173961890403026, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1498955267952526, 5);
  sqcRYGate(q, 1.6400422955042853, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3028742487486062, 0);
  sqcRYGate(q, -1.6812325134839623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.208198858111327, 0);
  sqcRYGate(q, -1.2477637494006761, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6454098967809285, 2);
  sqcRYGate(q, 2.4129947841537067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0663190607316726, 2);
  sqcRYGate(q, -2.2079874842985503, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.052852301927199, 4);
  sqcRYGate(q, -2.2387039450575874, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9344824438623345, 4);
  sqcRYGate(q, 0.3670485803268855, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7178915762292055, 6);
  sqcRYGate(q, 0.5598248790564079, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.29679591014177653, 6);
  sqcRYGate(q, 3.1318820843796447, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.157589441246699, 1);
  sqcRYGate(q, -1.442937732781376, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.07961242641235, 1);
  sqcRYGate(q, 0.5172308003816158, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8706891013556195, 3);
  sqcRYGate(q, 1.962184130393096, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6571189627473577, 3);
  sqcRYGate(q, 2.657943646003284, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2023643671821587, 5);
  sqcRYGate(q, -0.6929380654310258, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.742978735539874, 5);
  sqcRYGate(q, 0.6823517920952236, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8019331727456587, 0);
  sqcRYGate(q, 2.164660407792622, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7448114765422235, 0);
  sqcRYGate(q, 2.1761383645505483, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5187337962680365, 2);
  sqcRYGate(q, -1.1022552879731986, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.327999361473072, 2);
  sqcRYGate(q, -1.3645774049564805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8684558302686911, 4);
  sqcRYGate(q, 3.0809239018688794, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9416406645788411, 4);
  sqcRYGate(q, -0.6324984207415731, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8006223180727832, 6);
  sqcRYGate(q, 3.1394455862725694, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4008766452572914, 6);
  sqcRYGate(q, 2.921924016152171, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7145372120964462, 1);
  sqcRYGate(q, -1.8524335466635113, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5888344844980224, 1);
  sqcRYGate(q, -3.0934194563870476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1389496663746606, 3);
  sqcRYGate(q, -0.045635597718952425, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5382400834653938, 3);
  sqcRYGate(q, 3.0229651527557087, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4787122396247219, 5);
  sqcRYGate(q, -2.547757931445609, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4160304504887726, 5);
  sqcRYGate(q, -2.491869512122964, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5084323696448205, 0);
  sqcRYGate(q, -2.6910651644724823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3456379261328713, 0);
  sqcRYGate(q, 1.7528464557380874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0003719601006375584, 2);
  sqcRYGate(q, -0.3629967191586827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.124139555912442, 2);
  sqcRYGate(q, 3.023913556962715, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.18897662825820194, 4);
  sqcRYGate(q, 2.7848665158894357, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.33129217029249525, 4);
  sqcRYGate(q, 3.019779580582712, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.531859228087631, 6);
  sqcRYGate(q, -1.8817257068231088, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3591471914339293, 6);
  sqcRYGate(q, -1.754072340535446, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.1748792617863133, 1);
  sqcRYGate(q, 0.47724439980211525, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5436089406744793, 1);
  sqcRYGate(q, 2.9772255679475683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6495809805363875, 3);
  sqcRYGate(q, 1.5962770021400061, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.859209724633563, 3);
  sqcRYGate(q, -0.35297017853207624, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0205770292369656, 5);
  sqcRYGate(q, 1.5141116649348785, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0479036961149824, 5);
  sqcRYGate(q, -3.141471239259199, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.486702279869794, 0);
  sqcRYGate(q, -0.5582054878270055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7707052820298559, 0);
  sqcRYGate(q, -0.8063278972151862, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8320325644615647, 2);
  sqcRYGate(q, -0.5167056659762297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6825330557288982, 2);
  sqcRYGate(q, 2.850264423249442, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.893672924661362, 4);
  sqcRYGate(q, -0.9290031060564575, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6427649146132676, 4);
  sqcRYGate(q, -0.2042888895511226, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3604520981041186, 6);
  sqcRYGate(q, -2.1098241166739884, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9727530729917926, 6);
  sqcRYGate(q, -0.4606008684782029, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7114979753186885, 1);
  sqcRYGate(q, -0.9978711839074528, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.726800559864891, 1);
  sqcRYGate(q, -1.9668015757536106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0770031495623287, 3);
  sqcRYGate(q, 3.0703471920851118, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1098633865791276, 3);
  sqcRYGate(q, -2.7128177564534277, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6285949460898256, 5);
  sqcRYGate(q, 1.7090587257320653, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.75729311629578, 5);
  sqcRYGate(q, 0.40390358190984005, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6658434366239022, 0);
  sqcRYGate(q, -2.5982125156069036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.40161305460110575, 0);
  sqcRYGate(q, -0.5540886665946165, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2535740164362847, 2);
  sqcRYGate(q, -2.347727796129157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4862688739011858, 2);
  sqcRYGate(q, -0.8951686587353804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07157296640223086, 4);
  sqcRYGate(q, -2.9841494434445597, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8011423922017932, 4);
  sqcRYGate(q, 1.4483086254298598, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7206479984723133, 6);
  sqcRYGate(q, -2.2017396061158783, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.934239136251584, 6);
  sqcRYGate(q, 1.8695272916183354, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0133609955689566, 1);
  sqcRYGate(q, -1.1069171402991433, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.067948104902279, 1);
  sqcRYGate(q, 2.6989086826268363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.856350326065046, 3);
  sqcRYGate(q, 0.24486471472608784, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0832413277474093, 3);
  sqcRYGate(q, 0.7238222188438558, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.024125283981439, 5);
  sqcRYGate(q, -0.6554648461202133, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.406642222758803, 5);
  sqcRYGate(q, 2.5522041702116187, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1358953246016625, 0);
  sqcRYGate(q, -2.2108156204705827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.669541400661112, 0);
  sqcRYGate(q, -2.1377333078510175, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0314116597207157, 2);
  sqcRYGate(q, 0.09805489735739897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.070426457376316, 2);
  sqcRYGate(q, -0.49017531898344396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.42152060543193154, 4);
  sqcRYGate(q, 1.0853314706888963, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6038149744445014, 4);
  sqcRYGate(q, 2.639428846717391, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0480205147124613, 6);
  sqcRYGate(q, -1.2528058782719818, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.717605562486855, 6);
  sqcRYGate(q, -1.187183223820586, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1258674491668557, 1);
  sqcRYGate(q, -0.06082280931968676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2615950480266824, 1);
  sqcRYGate(q, -0.8833268700709711, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3954569421056785, 3);
  sqcRYGate(q, 2.794707088445597, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.071221002681103, 3);
  sqcRYGate(q, 2.3732607366046805, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9839594179117825, 5);
  sqcRYGate(q, -2.376845259060553, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3505617377202928, 5);
  sqcRYGate(q, -2.2159921635279565, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1120048270320297, 0);
  sqcRYGate(q, -0.44529439081846345, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5158095751949494, 0);
  sqcRYGate(q, 1.4901513970891218, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8366037301694315, 2);
  sqcRYGate(q, -1.3122651979061999, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.697101896327789, 2);
  sqcRYGate(q, -0.07918643517803134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.46680703411060104, 4);
  sqcRYGate(q, -1.6313930733712318, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2057345939638593, 4);
  sqcRYGate(q, 2.5474449781712205, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8260065861999043, 6);
  sqcRYGate(q, -1.6609647899302795, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1876356753218005, 6);
  sqcRYGate(q, 0.5666705189168216, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0914086131809437, 1);
  sqcRYGate(q, 1.6487225921055446, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9709229012830345, 1);
  sqcRYGate(q, -3.0942920179937716, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3324563833343652, 3);
  sqcRYGate(q, 0.6084277551133164, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.02942144720970127, 3);
  sqcRYGate(q, 1.221907418192358, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.351322689367001, 5);
  sqcRYGate(q, 1.3280851001834462, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7800146090312676, 5);
  sqcRYGate(q, -2.8144525550108406, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.561282961226131, 0);
  sqcRYGate(q, 2.7165009378872043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1794380561516764, 0);
  sqcRYGate(q, -2.021812232456015, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.43718088531997, 2);
  sqcRYGate(q, -0.033672961084444175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.537043094369344, 2);
  sqcRYGate(q, -0.3666416299961401, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0377529629447286, 4);
  sqcRYGate(q, -1.3518173247117158, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9663000510554305, 4);
  sqcRYGate(q, -2.557712083485083, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0878608480563274, 6);
  sqcRYGate(q, -2.4808849784339073, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4467125176128128, 6);
  sqcRYGate(q, -0.953675757718158, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8549011246140519, 1);
  sqcRYGate(q, -1.8445592976734126, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7923326757690428, 1);
  sqcRYGate(q, -1.784322051699422, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8331486635204026, 3);
  sqcRYGate(q, 1.4433871827717553, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.23305930906407107, 3);
  sqcRYGate(q, -0.3680588381943455, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.604796436439968, 5);
  sqcRYGate(q, 0.44595774180849035, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.866296528850632, 5);
  sqcRYGate(q, 1.9299974056231841, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.758838450439939, 0);
  sqcRYGate(q, -0.3745185963120265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7395661868552771, 0);
  sqcRYGate(q, -2.9529837686634246, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08204836466009535, 2);
  sqcRYGate(q, 0.9301707201554983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0431562580693154, 2);
  sqcRYGate(q, -0.7788466291614012, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.111146779267081, 4);
  sqcRYGate(q, -0.6199009184951226, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.18083529046832883, 4);
  sqcRYGate(q, 0.2555662919060217, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8706597762074642, 6);
  sqcRYGate(q, -2.0325329007595667, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.00542885247573377, 6);
  sqcRYGate(q, 1.526238025658972, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6484996771366196, 1);
  sqcRYGate(q, -1.4586466910501117, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8982456729298356, 1);
  sqcRYGate(q, 0.7718882832328666, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2769922086379353, 3);
  sqcRYGate(q, 2.5242620194771717, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3540937818949175, 3);
  sqcRYGate(q, -1.0000588910941761, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9069525027929617, 5);
  sqcRYGate(q, 0.3358472238084991, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2738089897286082, 5);
  sqcRYGate(q, 1.0684145869251922, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.19138331987061719, 0);
  sqcRYGate(q, 2.203484301516804, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.957078991740994, 0);
  sqcRYGate(q, -2.27786465275644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1186911581422643, 2);
  sqcRYGate(q, 1.2595950438001777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1606155066294686, 2);
  sqcRYGate(q, -0.6367734774259173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4451923335957322, 4);
  sqcRYGate(q, 2.7064451378368193, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4357804806647714, 4);
  sqcRYGate(q, 3.1159402116497454, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.934968488462028, 6);
  sqcRYGate(q, -1.1339349729352906, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.09951363025682747, 6);
  sqcRYGate(q, -1.9822462084772319, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.691375745647173, 1);
  sqcRYGate(q, 0.4348476919190212, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3988863804094802, 1);
  sqcRYGate(q, -1.3175555953189626, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6427571272633346, 3);
  sqcRYGate(q, 2.608101974244718, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1143190193837214, 3);
  sqcRYGate(q, 0.37322765383758244, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.709300265560185, 5);
  sqcRYGate(q, 0.7304462793681729, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2637954097536719, 5);
  sqcRYGate(q, -2.43258827337429, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2655080308136533, 0);
  sqcRYGate(q, 2.706251427959762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6876195257910133, 0);
  sqcRYGate(q, -2.5410771699619943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6446665983190853, 2);
  sqcRYGate(q, 1.6597803585238586, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6431809697016622, 2);
  sqcRYGate(q, -2.423407375280436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5858305581210566, 4);
  sqcRYGate(q, -1.6871664743866899, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0935809306244018, 4);
  sqcRYGate(q, 1.4381128394981548, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8232354909057802, 6);
  sqcRYGate(q, 1.3954643369365567, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.806995614872846, 6);
  sqcRYGate(q, 0.5968594175812054, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4266397824229644, 1);
  sqcRYGate(q, -1.5980486909277056, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6855014494456128, 1);
  sqcRYGate(q, 2.9671515115664464, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.06163164367779306, 3);
  sqcRYGate(q, -2.7309729783876993, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.853939679289161, 3);
  sqcRYGate(q, -2.052550892517564, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.012008062857774, 5);
  sqcRYGate(q, 0.20744238236242118, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.839397121834494, 5);
  sqcRYGate(q, -2.9561248792952783, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2066310248824044, 0);
  sqcRYGate(q, 2.5257042469360043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6936736414304934, 0);
  sqcRYGate(q, 0.3434365155341357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.093760857327928, 2);
  sqcRYGate(q, 2.7355802247123764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1722502539220712, 2);
  sqcRYGate(q, -2.5527372728231703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.916013559073332, 4);
  sqcRYGate(q, -0.4559440538475341, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4675826763400259, 4);
  sqcRYGate(q, 2.91995921593822, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4800286521770918, 6);
  sqcRYGate(q, -1.5221184321379966, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4841167616525448, 6);
  sqcRYGate(q, 2.7749835391139532, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.312781278989843, 1);
  sqcRYGate(q, -2.585204279223946, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.02305083136152318, 1);
  sqcRYGate(q, 2.577433596865486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3026489313469307, 3);
  sqcRYGate(q, 1.049395181563334, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.07574272687829886, 3);
  sqcRYGate(q, -0.1951057458856268, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8433056826173386, 5);
  sqcRYGate(q, -1.0072542619794496, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.900735846416147, 5);
  sqcRYGate(q, -1.6688756346122189, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6275956165271437, 0);
  sqcRYGate(q, 2.7205817797323824, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6848202035630742, 0);
  sqcRYGate(q, -2.8412306141626265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.39456929056437, 2);
  sqcRYGate(q, -1.5879598682815708, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.31426455322363805, 2);
  sqcRYGate(q, 1.5970933262605307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7342931377176065, 4);
  sqcRYGate(q, 0.24418490718496358, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.12213723712304336, 4);
  sqcRYGate(q, -1.3935032138709262, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.47668323632468645, 6);
  sqcRYGate(q, -2.6219526848467876, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0496595784601843, 6);
  sqcRYGate(q, 0.5131118882165672, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2650118077716535, 1);
  sqcRYGate(q, -1.4122316707518667, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.904431785837221, 1);
  sqcRYGate(q, -2.160991934950953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.255838649471862, 3);
  sqcRYGate(q, -1.3761492693103148, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2924908844279388, 3);
  sqcRYGate(q, 3.0208060931651786, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.800589948682518, 5);
  sqcRYGate(q, 0.45490427650247567, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.134810776390639, 5);
  sqcRYGate(q, 0.8020908483918863, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2654853785646836, 0);
  sqcRYGate(q, 0.5774523265783613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5501271599185054, 0);
  sqcRYGate(q, 1.0378170285620971, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0348628559196866, 2);
  sqcRYGate(q, 0.31632339209006677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.029343931272957, 2);
  sqcRYGate(q, 2.039189228830778, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.938009197541963, 4);
  sqcRYGate(q, 1.558650345437294, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.390779207247955, 4);
  sqcRYGate(q, 0.9736544376645276, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.192724866107917, 6);
  sqcRYGate(q, 2.8939020947774203, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.027291500728248156, 6);
  sqcRYGate(q, -1.6942348896955144, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0184504975758113, 1);
  sqcRYGate(q, -0.19763939916972792, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.46132629221617805, 1);
  sqcRYGate(q, 0.24814038024830598, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6735780799367428, 3);
  sqcRYGate(q, -0.0016147556917047723, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.576427046081359, 3);
  sqcRYGate(q, -2.210221590680592, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.516250998286521, 5);
  sqcRYGate(q, 2.1209971344518976, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6016442798285704, 5);
  sqcRYGate(q, -2.1835380458174525, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7867376065443503, 0);
  sqcRYGate(q, -1.439297286810983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3741664184021003, 0);
  sqcRYGate(q, 0.8218490157088842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1242446776363266, 2);
  sqcRYGate(q, 2.457782724913297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.004997742520228, 2);
  sqcRYGate(q, 2.7412802000598266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7282018231097236, 4);
  sqcRYGate(q, -0.05364156796996333, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.837217703337782, 4);
  sqcRYGate(q, 1.7141180843947286, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2409158929682986, 6);
  sqcRYGate(q, -0.9243157709654026, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.701198731310654, 6);
  sqcRYGate(q, -2.59949033120791, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7123948566651528, 1);
  sqcRYGate(q, -2.8178978872799796, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1109120227825313, 1);
  sqcRYGate(q, -2.0746375610522483, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5313128686218279, 3);
  sqcRYGate(q, -1.510982377259293, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.568449991405517, 3);
  sqcRYGate(q, -0.4000602878015727, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9455061581536004, 5);
  sqcRYGate(q, 1.782020179774784, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.496336478166337, 5);
  sqcRYGate(q, 1.3060429415661625, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2269803056834077, 0);
  sqcRYGate(q, 2.2487066942785923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.25501384314549486, 0);
  sqcRYGate(q, -0.0647600867853706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0175743261054158, 2);
  sqcRYGate(q, -0.31924622480859904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.677790972103517, 2);
  sqcRYGate(q, -2.763945997395351, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5589135732007597, 4);
  sqcRYGate(q, -0.565542286187612, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5256031410381565, 4);
  sqcRYGate(q, 1.7223787598037426, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8584586257904507, 6);
  sqcRYGate(q, 2.090466098476891, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.31648023268881875, 6);
  sqcRYGate(q, 2.885826074505143, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4104351393679697, 1);
  sqcRYGate(q, 1.3970039593636079, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9965160370320714, 1);
  sqcRYGate(q, 2.4180218098884856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.019645161241232, 3);
  sqcRYGate(q, -1.9490876249402014, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.949012964452373, 3);
  sqcRYGate(q, 0.31371310432257044, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5167677885215043, 5);
  sqcRYGate(q, 1.713025356096039, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0807316646790035, 5);
  sqcRYGate(q, -2.360762471394379, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3719049983827096, 0);
  sqcRYGate(q, 2.5041159663640373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.620270289173564, 0);
  sqcRYGate(q, 0.8747599210833047, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.085591893183296, 2);
  sqcRYGate(q, -1.5703432778627524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9009660946850195, 2);
  sqcRYGate(q, 2.240231630129028, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1302119241165167, 4);
  sqcRYGate(q, 0.005172155538826518, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0416479571620894, 4);
  sqcRYGate(q, 0.7103034300144582, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4150434321967533, 6);
  sqcRYGate(q, -0.44847250582386783, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5171633446460746, 6);
  sqcRYGate(q, 3.0175044572186085, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7362801333405393, 1);
  sqcRYGate(q, 2.083636931001744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7904202382797406, 1);
  sqcRYGate(q, -1.2708683644673826, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1640440626362623, 3);
  sqcRYGate(q, -2.5649765494676133, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1313587757215904, 3);
  sqcRYGate(q, -0.4731855886393319, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5769424709135273, 5);
  sqcRYGate(q, -1.9590937533162864, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0667414300069251, 5);
  sqcRYGate(q, -3.078950812840838, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.16950548527873185, 0);
  sqcRYGate(q, -2.368965224841636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09559497598454432, 0);
  sqcRYGate(q, -0.6158193974651098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5917001101273572, 2);
  sqcRYGate(q, 0.604101304953998, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3410861064896356, 2);
  sqcRYGate(q, 0.6053775745484158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.20669674428962548, 4);
  sqcRYGate(q, -1.1493224310400734, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2065774388415145, 4);
  sqcRYGate(q, -0.6868377890340271, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0426423199680912, 6);
  sqcRYGate(q, -1.5081799991881093, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.211628498444566, 6);
  sqcRYGate(q, -0.904193694607393, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2625095627954943, 1);
  sqcRYGate(q, 0.4418922071051483, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6714662916154408, 1);
  sqcRYGate(q, 2.20985547982265, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9529487852370402, 3);
  sqcRYGate(q, 0.04243948728814839, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8321961463971594, 3);
  sqcRYGate(q, -0.6130746596476468, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4335717549153284, 5);
  sqcRYGate(q, -0.09572523196329728, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.271930963522715, 5);
  sqcRYGate(q, 3.0840006217428195, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.677597598532552, 0);
  sqcRYGate(q, -1.8472817581609344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7288726649129528, 0);
  sqcRYGate(q, 1.8756502030000304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3039117790152877, 2);
  sqcRYGate(q, -2.614432148419563, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4430518789155569, 2);
  sqcRYGate(q, 1.4696384149070685, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5943243227661505, 4);
  sqcRYGate(q, -2.3924605396680065, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6745683718668412, 4);
  sqcRYGate(q, -0.3279053907295404, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.051635669195492, 6);
  sqcRYGate(q, 0.8681277770679321, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4907401489580665, 6);
  sqcRYGate(q, -0.18257838043579366, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.025988623202272798, 1);
  sqcRYGate(q, -2.9519879590192346, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.223144147077639, 1);
  sqcRYGate(q, 2.5483327889287666, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4202701892921653, 3);
  sqcRYGate(q, -1.824572972700751, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.038115587730287, 3);
  sqcRYGate(q, -0.4200501819940195, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2962841801745553, 5);
  sqcRYGate(q, 0.7360874056824915, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.04596049172918271, 5);
  sqcRYGate(q, -3.1265787646263723, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0268594946012446, 0);
  sqcRYGate(q, -0.7848082085006226, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7578500556353366, 0);
  sqcRYGate(q, 2.332912689227006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.38963324943609745, 2);
  sqcRYGate(q, -1.1746584308356267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.26281959974349794, 2);
  sqcRYGate(q, -0.400610697388083, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.177084616351852, 4);
  sqcRYGate(q, -2.014539868939187, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6368195498731128, 4);
  sqcRYGate(q, -0.553652496000967, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.104740947895504, 6);
  sqcRYGate(q, -0.6148229873422904, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.147075291513653, 6);
  sqcRYGate(q, 1.8558115795177939, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1293155975366127, 1);
  sqcRYGate(q, -2.7382487465280385, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.919419211106195, 1);
  sqcRYGate(q, 1.0427145399783404, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6281983806684095, 3);
  sqcRYGate(q, 0.06128790337934877, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.06910263644406826, 3);
  sqcRYGate(q, 0.7933467149406743, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8454508152087297, 5);
  sqcRYGate(q, -0.5037742293898092, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2997296691630114, 5);
  sqcRYGate(q, 0.5487578407406594, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3188815465031203, 0);
  sqcRYGate(q, -2.0468066922039054, 1);
  sqcRYGate(q, -0.8223610353804737, 2);
  sqcRYGate(q, -2.6520386452537217, 3);
  sqcRYGate(q, -0.7515422171229593, 4);
  sqcRYGate(q, -1.5071172411418616, 5);
  sqcRYGate(q, 3.043883463967414, 6);
  sqcRYGate(q, -0.15255634105939764, 7);

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
