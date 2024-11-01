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

  sqcRYGate(q, 1.8172557481382832, 0);
  sqcRYGate(q, 1.2901866638786208, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.002226284312107, 0);
  sqcRYGate(q, -2.77700721101183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0780118355770343, 0);
  sqcRYGate(q, 0.611261257366011, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1221993998488666, 0);
  sqcRYGate(q, -1.585833567615291, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.563649360289285, 0);
  sqcRYGate(q, 1.0698763086003567, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9673737380081966, 0);
  sqcRYGate(q, -2.690207759192279, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7156727413305033, 1);
  sqcRYGate(q, 2.3494028889540766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8267276772654135, 1);
  sqcRYGate(q, 0.8649138726394101, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3512658388197962, 1);
  sqcRYGate(q, 2.416768700387513, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9356814436710422, 1);
  sqcRYGate(q, -1.5041421781616515, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.03152776133082291, 2);
  sqcRYGate(q, -2.023185010010946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.933796185253385, 2);
  sqcRYGate(q, 0.04264579842425853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.540326865826365, 0);
  sqcRYGate(q, 1.2089828125498165, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0365139982929026, 0);
  sqcRYGate(q, 1.3822025663006232, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.796481013030553, 0);
  sqcRYGate(q, 0.10653907047297337, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8130401513293622, 0);
  sqcRYGate(q, -2.8743836619183365, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5269320821438668, 0);
  sqcRYGate(q, -1.410350720014124, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.896099103360785, 0);
  sqcRYGate(q, -3.022603785897639, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.30322209210094925, 1);
  sqcRYGate(q, -2.926049954793053, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.096068349156975, 1);
  sqcRYGate(q, -0.7248024932861963, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6022159888609364, 1);
  sqcRYGate(q, -1.7731037231382027, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2854486016775803, 1);
  sqcRYGate(q, -2.902209412902241, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8677448178515847, 2);
  sqcRYGate(q, -1.1220308746310514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2507078274979886, 2);
  sqcRYGate(q, -0.5409039489512679, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3428646377954071, 0);
  sqcRYGate(q, 1.9657209935202857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2884953654795028, 0);
  sqcRYGate(q, -1.652499915800526, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0831135814359305, 0);
  sqcRYGate(q, 0.6796928348477715, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0827630749220551, 0);
  sqcRYGate(q, 2.0814117249612205, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.168931038914404, 0);
  sqcRYGate(q, -0.5930692079790281, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8328820832072757, 0);
  sqcRYGate(q, -2.827158286851759, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7496357650005931, 1);
  sqcRYGate(q, -1.4709363899661887, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7580392775401577, 1);
  sqcRYGate(q, 2.4084085850710633, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.521644873268575, 1);
  sqcRYGate(q, -1.1780498335725358, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5078157755079107, 1);
  sqcRYGate(q, 3.0596292637872744, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6274803805640072, 2);
  sqcRYGate(q, 0.7072589430269112, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.593374950630301, 2);
  sqcRYGate(q, -2.5217081799525154, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3373763027438645, 0);
  sqcRYGate(q, -1.108283049013472, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8238912966271432, 0);
  sqcRYGate(q, -3.0705468988599556, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4879880133333536, 0);
  sqcRYGate(q, 2.9669569479742974, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.666632341364678, 0);
  sqcRYGate(q, -0.4157037560736496, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6209545666963309, 0);
  sqcRYGate(q, 0.40636778852593064, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6842006669810097, 0);
  sqcRYGate(q, -1.8172529900039898, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9177835451579877, 1);
  sqcRYGate(q, -0.6313731175898519, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9098938880236824, 1);
  sqcRYGate(q, 2.0829809788927105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.547170216046326, 1);
  sqcRYGate(q, 1.1023621431900206, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6230433186542035, 1);
  sqcRYGate(q, -0.020189152465748705, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1042628680940716, 2);
  sqcRYGate(q, -1.1187913498988582, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8724273903008388, 2);
  sqcRYGate(q, -3.1165282413964137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7990100204530837, 0);
  sqcRYGate(q, -1.843648330151742, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6099183612993793, 0);
  sqcRYGate(q, 0.2595265256218068, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.583602165129359, 0);
  sqcRYGate(q, -0.14099731733836104, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2970155905912852, 0);
  sqcRYGate(q, -0.8952778612071085, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.18639903787752665, 0);
  sqcRYGate(q, -2.0040126164259915, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.043861814334996425, 0);
  sqcRYGate(q, -1.6925251080522736, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8386559235300854, 1);
  sqcRYGate(q, 2.434654749993025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0073106023446043, 1);
  sqcRYGate(q, -3.107102910605041, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7750274240181856, 1);
  sqcRYGate(q, -1.3810173675198651, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8687327801841791, 1);
  sqcRYGate(q, 1.778016770003844, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1121523516214027, 2);
  sqcRYGate(q, -1.3454433179851724, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.055262144046613, 2);
  sqcRYGate(q, 1.1224732646206608, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.001768146343521, 0);
  sqcRYGate(q, 1.0316497177436776, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.070625999287862, 0);
  sqcRYGate(q, 0.9762508860206848, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.343956876017835, 0);
  sqcRYGate(q, 2.4031916881948074, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4365399835122778, 0);
  sqcRYGate(q, 0.6722458093419081, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.464695455130176, 0);
  sqcRYGate(q, 2.4610148483160326, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1684200893101926, 0);
  sqcRYGate(q, 0.15528662182695818, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.965517659542462, 1);
  sqcRYGate(q, -0.3632149790441135, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4580914138185954, 1);
  sqcRYGate(q, -1.9626902013579954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.08901783695592105, 1);
  sqcRYGate(q, 3.1039052218050003, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6636069587150395, 1);
  sqcRYGate(q, -2.4341394434467607, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2016337679168259, 2);
  sqcRYGate(q, -1.7313173162933566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.510341417373866, 2);
  sqcRYGate(q, 0.8616578229923867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.305755075151546, 0);
  sqcRYGate(q, 0.21966729978747693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.41146186821688113, 0);
  sqcRYGate(q, -0.7294959298332024, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2901303366249595, 0);
  sqcRYGate(q, 0.9062066591296242, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5200543624559704, 0);
  sqcRYGate(q, 0.816587522493732, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.39141573402445795, 0);
  sqcRYGate(q, 0.20533366178823442, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6176026327632256, 0);
  sqcRYGate(q, -0.16293629615951757, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.03133474647189519, 1);
  sqcRYGate(q, -1.3880309305160914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1468387446932944, 1);
  sqcRYGate(q, 0.13717756929029673, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7918929503785925, 1);
  sqcRYGate(q, 1.7877149976890738, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.629455846565416, 1);
  sqcRYGate(q, -1.826880566263468, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3915069720315048, 2);
  sqcRYGate(q, 2.2491652317739823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2851663690782873, 2);
  sqcRYGate(q, -3.024217633974758, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.527371208325727, 0);
  sqcRYGate(q, -0.8820641571346863, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2328396442570577, 0);
  sqcRYGate(q, -1.7273806413131971, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0961926851534738, 0);
  sqcRYGate(q, -2.26574972198952, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.459775246435094, 0);
  sqcRYGate(q, 1.9869504940589922, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7223518782720557, 0);
  sqcRYGate(q, 1.3523389452907866, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1270777372976304, 0);
  sqcRYGate(q, 1.6741870770220397, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2706458463748387, 1);
  sqcRYGate(q, 1.416460302565743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.289120038961952, 1);
  sqcRYGate(q, 1.470172887259632, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.642902612600915, 1);
  sqcRYGate(q, -1.7731845193326388, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.51172058352007, 1);
  sqcRYGate(q, -2.7096561262491337, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.22608133663898433, 2);
  sqcRYGate(q, -2.0049567997449325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.329961167411412, 2);
  sqcRYGate(q, 1.3077633264650048, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.851849543465541, 0);
  sqcRYGate(q, 2.40188884700346, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3140709512764133, 0);
  sqcRYGate(q, 0.5851026151323744, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1086710836851803, 0);
  sqcRYGate(q, 1.9224943724918298, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.551936742602801, 0);
  sqcRYGate(q, 1.424749761846015, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8226992991032311, 0);
  sqcRYGate(q, 0.9867113261223508, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9899828024020336, 0);
  sqcRYGate(q, -0.20548264167423352, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2768425740455856, 1);
  sqcRYGate(q, -2.176953048245113, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.671486455342588, 1);
  sqcRYGate(q, 1.954393021129834, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.589033639031748, 1);
  sqcRYGate(q, -0.7446227881903182, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9215787530162807, 1);
  sqcRYGate(q, -1.146347418084783, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2096757474787803, 2);
  sqcRYGate(q, -0.4805829557787132, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6793601316412508, 2);
  sqcRYGate(q, -1.2927331127531323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5151865124400536, 0);
  sqcRYGate(q, 0.6351994138003132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.26542846613580723, 0);
  sqcRYGate(q, -0.4021969056049839, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1029564953320552, 0);
  sqcRYGate(q, -2.603194605937416, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3080954337707904, 0);
  sqcRYGate(q, -0.05691002997105457, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6952533716620244, 0);
  sqcRYGate(q, -0.448522779556518, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9948684102824726, 0);
  sqcRYGate(q, 2.231124070871039, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5070184621290802, 1);
  sqcRYGate(q, 0.22938611733722494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3511004886693358, 1);
  sqcRYGate(q, 0.5183213573487393, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7640000631827166, 1);
  sqcRYGate(q, 2.29490336142329, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.978690896583861, 1);
  sqcRYGate(q, -1.7706122236218667, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.115352676145334, 2);
  sqcRYGate(q, -0.3515966469563498, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2307135894794858, 2);
  sqcRYGate(q, -1.8716374318731832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4548311055300696, 0);
  sqcRYGate(q, 2.366437756910012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7628756949159822, 0);
  sqcRYGate(q, -0.8428178786333057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8473777341256707, 0);
  sqcRYGate(q, 1.5450443627723658, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7552881158473452, 0);
  sqcRYGate(q, 0.6810783342914961, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.649676628584851, 0);
  sqcRYGate(q, -2.9268722731258308, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.491153626575473, 0);
  sqcRYGate(q, 0.9747517334692306, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1278702202499726, 1);
  sqcRYGate(q, 2.6584614234283106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3991769017183996, 1);
  sqcRYGate(q, -0.6683629925261914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.47557114421183755, 1);
  sqcRYGate(q, 1.2863513236348867, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4531259757344341, 1);
  sqcRYGate(q, -1.423365450668408, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9552838289010915, 2);
  sqcRYGate(q, -0.3599167197867148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1323769657476803, 2);
  sqcRYGate(q, -1.635161337498464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6821802368360377, 0);
  sqcRYGate(q, -2.6431175061244727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3022268752232904, 0);
  sqcRYGate(q, -1.4727394927338648, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4119548348889213, 0);
  sqcRYGate(q, 1.497853936746122, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4472152045914952, 0);
  sqcRYGate(q, 0.33400719341820617, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5703317502626093, 0);
  sqcRYGate(q, -0.22266201555947332, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6953339997563308, 0);
  sqcRYGate(q, 2.2934335804481916, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.578522862178549, 1);
  sqcRYGate(q, 2.715942231261869, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03412412140936283, 1);
  sqcRYGate(q, -2.5880572252905485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.08822720104926571, 1);
  sqcRYGate(q, 0.36381574741915046, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.577478675818272, 1);
  sqcRYGate(q, 2.975003720561039, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.542349649514204, 2);
  sqcRYGate(q, -2.744725358074133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8630838237410154, 2);
  sqcRYGate(q, -2.475656098465316, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07173885256252985, 0);
  sqcRYGate(q, 2.7617740128157497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2172880806366706, 0);
  sqcRYGate(q, -1.9188592291623188, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8136613614096548, 0);
  sqcRYGate(q, 1.8160545179792908, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1248841896972286, 0);
  sqcRYGate(q, 1.934394742303967, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2225005245885896, 0);
  sqcRYGate(q, -1.496850312169747, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3699086199679233, 0);
  sqcRYGate(q, 0.6861392215142718, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6937457994171596, 1);
  sqcRYGate(q, 2.8421622609219965, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.77281498762055, 1);
  sqcRYGate(q, -0.37188581017820793, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5113789898779917, 1);
  sqcRYGate(q, 0.730603393792105, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.44690156812219, 1);
  sqcRYGate(q, -2.3227168985797437, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1478391703286028, 2);
  sqcRYGate(q, 3.032809918021267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9125540113816573, 2);
  sqcRYGate(q, -2.038695299814404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.739346482868018, 0);
  sqcRYGate(q, 3.097799798162368, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.688941326750925, 0);
  sqcRYGate(q, 0.6314676465955366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4021671146821335, 0);
  sqcRYGate(q, 0.4101343286049266, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.013964695002992578, 0);
  sqcRYGate(q, 1.746843635539523, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.391194365519583, 0);
  sqcRYGate(q, -1.039923476150558, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0959933024389192, 0);
  sqcRYGate(q, 1.3309968581611535, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4279688114197002, 1);
  sqcRYGate(q, 1.777222460819016, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.941324952278701, 1);
  sqcRYGate(q, 3.1351517012034034, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1790072895524975, 1);
  sqcRYGate(q, -0.9359641937489124, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2111449464014106, 1);
  sqcRYGate(q, 0.4523245394691359, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3061208219939004, 2);
  sqcRYGate(q, -2.8681875977455493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6812357215956011, 2);
  sqcRYGate(q, 1.1260912632473117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9095329680475208, 0);
  sqcRYGate(q, -0.3825672280218902, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3500443965901985, 0);
  sqcRYGate(q, -2.867123803482585, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1004211229318774, 0);
  sqcRYGate(q, -2.2509889236174248, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7028035878014296, 0);
  sqcRYGate(q, -1.0539824591140334, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0341030266066553, 0);
  sqcRYGate(q, -1.312895030560478, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8802928583552941, 0);
  sqcRYGate(q, 3.109540083108975, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0660639399879845, 1);
  sqcRYGate(q, -0.11326692764407706, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2601231245341671, 1);
  sqcRYGate(q, -0.3942418283744411, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.040037373694596, 1);
  sqcRYGate(q, -1.8745741508538405, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.562307346069832, 1);
  sqcRYGate(q, -2.8368207876867597, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.675032908161121, 2);
  sqcRYGate(q, -2.746727071160546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1002724818420289, 2);
  sqcRYGate(q, 0.7833756726043906, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.635914491663091, 0);
  sqcRYGate(q, -2.2227499412665552, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6192169596699513, 0);
  sqcRYGate(q, -0.5889145967305524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8834247283536385, 0);
  sqcRYGate(q, 1.671128188504803, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.813087152830777, 0);
  sqcRYGate(q, -0.1792330213366924, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8156507101185835, 0);
  sqcRYGate(q, 1.9524604748852639, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.008356288043681985, 0);
  sqcRYGate(q, -1.2604920455492783, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3516761491844111, 1);
  sqcRYGate(q, -2.5275188910777935, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.116885638620568, 1);
  sqcRYGate(q, 2.5880428593725258, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1681236780376674, 1);
  sqcRYGate(q, 1.7861113718614252, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.27327187371331624, 1);
  sqcRYGate(q, 1.8574718033757973, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.940972102294598, 2);
  sqcRYGate(q, -1.907153418632784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9098511454840477, 2);
  sqcRYGate(q, 2.9500803330372904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.23846759952634589, 0);
  sqcRYGate(q, 1.102204076644594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0097161823248544, 0);
  sqcRYGate(q, -2.647573160171386, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0318445149991566, 0);
  sqcRYGate(q, -0.35129551797184977, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3820764552301354, 0);
  sqcRYGate(q, -1.30943784498281, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4848570833176602, 0);
  sqcRYGate(q, 1.8054604677384782, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0911212366137846, 0);
  sqcRYGate(q, -3.0917360165258096, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.11837021879770009, 1);
  sqcRYGate(q, -0.25098847127683754, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.34876332759023754, 1);
  sqcRYGate(q, -2.614299910010961, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6562272806492837, 1);
  sqcRYGate(q, -1.0629456256789669, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5211793293804023, 1);
  sqcRYGate(q, 1.7778661660136645, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.996261924965518, 2);
  sqcRYGate(q, -2.289377194440007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7609389534204456, 2);
  sqcRYGate(q, -0.07215055684474958, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6220556449730283, 0);
  sqcRYGate(q, 2.652520014353259, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.067773624949478, 0);
  sqcRYGate(q, 1.8252595363571191, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.757305044309396, 0);
  sqcRYGate(q, -2.50433338374343, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2856239472892792, 0);
  sqcRYGate(q, 2.1129027655958312, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.150423357122537, 0);
  sqcRYGate(q, -1.8712959097493427, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.853210786119623, 0);
  sqcRYGate(q, 2.086874131558498, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.46552993103417156, 1);
  sqcRYGate(q, -1.9082920824271683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.34378770278854454, 1);
  sqcRYGate(q, -0.8473531418263685, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8845705172536327, 1);
  sqcRYGate(q, -0.4748405325597661, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0566376517105205, 1);
  sqcRYGate(q, 1.1534515129203071, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6657228212114683, 2);
  sqcRYGate(q, 1.9580927341437704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9066129781073213, 2);
  sqcRYGate(q, 0.025236816182923505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2420193254863454, 0);
  sqcRYGate(q, 2.508300567305624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5730951614089212, 0);
  sqcRYGate(q, -0.9259160958394272, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1232273658183116, 0);
  sqcRYGate(q, -0.35846217377163203, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4648287419693552, 0);
  sqcRYGate(q, -0.8744672417193771, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1807866461073866, 0);
  sqcRYGate(q, 2.1222508426710895, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.193710467017028, 0);
  sqcRYGate(q, 3.0105458239615652, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9679609771527407, 1);
  sqcRYGate(q, 0.20435085403209463, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.362711517941779, 1);
  sqcRYGate(q, -2.325553613953499, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7923609633319566, 1);
  sqcRYGate(q, 0.9504459684052186, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.810012935670531, 1);
  sqcRYGate(q, 0.7471001185007464, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3673455459764448, 2);
  sqcRYGate(q, 3.008596306899801, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7257323770593216, 2);
  sqcRYGate(q, 1.6615272307554294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.211580955328367, 0);
  sqcRYGate(q, -1.0608650209509343, 1);
  sqcRYGate(q, 1.166786504088961, 2);
  sqcRYGate(q, -1.2166670904468078, 3);

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
