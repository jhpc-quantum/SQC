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

  sqcRYGate(q, -1.2253759584165262, 0);
  sqcRYGate(q, 2.379634853411659, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6294519770072204, 0);
  sqcRYGate(q, 1.65130817561618, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7409435129226395, 1);
  sqcRYGate(q, -2.1356662880042285, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8152151766550944, 1);
  sqcRYGate(q, 1.4948344305763694, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.501404922592883, 2);
  sqcRYGate(q, 1.7285446691231907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.011971486947143, 2);
  sqcRYGate(q, 1.4262029703197003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0726578670451008, 3);
  sqcRYGate(q, -0.13555710450742842, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8157441231392317, 3);
  sqcRYGate(q, -1.7917610700505453, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.515579736767229, 4);
  sqcRYGate(q, -0.3918135607246965, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.32686185005337, 4);
  sqcRYGate(q, -2.7681131620867894, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.483016811652955, 5);
  sqcRYGate(q, -0.37297291436210994, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.061394113352841, 5);
  sqcRYGate(q, -1.6003549757876163, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7691627933939351, 6);
  sqcRYGate(q, -0.7652937433461249, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.714143272526665, 6);
  sqcRYGate(q, -2.1908505472294717, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5960626171844998, 0);
  sqcRYGate(q, 2.4784067341667866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.507565675217285, 0);
  sqcRYGate(q, -2.6865138387394203, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6528886919393817, 1);
  sqcRYGate(q, -0.39776005905093825, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.622736200253106, 1);
  sqcRYGate(q, 1.7923928635998179, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4638614736006794, 2);
  sqcRYGate(q, -1.1761670297352604, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6781392574971336, 2);
  sqcRYGate(q, -2.7467151432577204, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2131477587457153, 3);
  sqcRYGate(q, -1.1928497037259413, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.923666720224594, 3);
  sqcRYGate(q, -0.3014370180895004, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0989503853615878, 4);
  sqcRYGate(q, 1.3129508200651019, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.00877699386182173, 4);
  sqcRYGate(q, 2.40906323306975, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.709413450785668, 5);
  sqcRYGate(q, -3.014738939306612, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1967948920255296, 5);
  sqcRYGate(q, 2.175182910402074, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.284601081715822, 6);
  sqcRYGate(q, 0.19266705558757374, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.156289722529834, 6);
  sqcRYGate(q, 0.2954409653295471, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0879501073725923, 0);
  sqcRYGate(q, -0.3146682189007545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7180910152489082, 0);
  sqcRYGate(q, -3.0178837035930326, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6484934861300182, 1);
  sqcRYGate(q, 0.9043180100767295, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4045748676915935, 1);
  sqcRYGate(q, 2.207688905002578, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.413813874004339, 2);
  sqcRYGate(q, -1.7618130636570792, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3135533525672098, 2);
  sqcRYGate(q, 3.0542736347478976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.134841496913615, 3);
  sqcRYGate(q, -1.3255584150799695, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5065170949307713, 3);
  sqcRYGate(q, 1.7732000854236352, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.602649671825673, 4);
  sqcRYGate(q, -1.2181422870396876, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8822872526549956, 4);
  sqcRYGate(q, 0.1741075082550621, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6645916579077469, 5);
  sqcRYGate(q, -2.148107300997908, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.38206071414881476, 5);
  sqcRYGate(q, -2.8991331236953757, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.224290895549836, 6);
  sqcRYGate(q, 0.3223232108747931, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9576647439765342, 6);
  sqcRYGate(q, 0.5849613560226778, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2712443199220349, 0);
  sqcRYGate(q, 2.463859796736061, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0213324228113123, 0);
  sqcRYGate(q, -1.513364813328776, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.300476902616452, 1);
  sqcRYGate(q, 0.9237354176391888, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.279702429190861, 1);
  sqcRYGate(q, 2.1438966015873953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.725733098879358, 2);
  sqcRYGate(q, -2.0185441603602676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3961147266711667, 2);
  sqcRYGate(q, -0.5561119466030064, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4568701438666715, 3);
  sqcRYGate(q, 1.007068562612098, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4235554464705708, 3);
  sqcRYGate(q, -0.595001771541677, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.00827871630754411, 4);
  sqcRYGate(q, 0.7229372523098423, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2420633366334588, 4);
  sqcRYGate(q, -2.6579361313034897, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4506210123930283, 5);
  sqcRYGate(q, 2.579029487623628, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0714109844251554, 5);
  sqcRYGate(q, 0.7976275841748816, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.696015061785844, 6);
  sqcRYGate(q, 2.1262777442796956, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.23227973830803, 6);
  sqcRYGate(q, -2.0186119147492603, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9125549142993665, 0);
  sqcRYGate(q, -0.6945789277002268, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9352962101832418, 0);
  sqcRYGate(q, -3.0059909075479827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8213305105526376, 1);
  sqcRYGate(q, 1.895878028870263, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2395545485226585, 1);
  sqcRYGate(q, 0.5651489828837972, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0308092087843386, 2);
  sqcRYGate(q, -1.9688065349195263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7874984180093858, 2);
  sqcRYGate(q, -1.3955650426654627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.450619645677929, 3);
  sqcRYGate(q, 0.03025089845464013, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.794883400160912, 3);
  sqcRYGate(q, -2.373618086542507, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0005310905287672, 4);
  sqcRYGate(q, -1.8324146108226191, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5167352903718894, 4);
  sqcRYGate(q, -0.8163104133114398, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3991327485806324, 5);
  sqcRYGate(q, -1.1114190796981465, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9520162547066517, 5);
  sqcRYGate(q, -0.8179577959732658, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9242849431754081, 6);
  sqcRYGate(q, -0.8973035609141418, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.27633848055019783, 6);
  sqcRYGate(q, 2.842277200213674, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1964652888978167, 0);
  sqcRYGate(q, -2.6113759405703743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9861572493944157, 0);
  sqcRYGate(q, -1.561518493411132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3181339034469985, 1);
  sqcRYGate(q, -0.30575591205216845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6222385257052981, 1);
  sqcRYGate(q, -2.4786801677352464, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8461303874082988, 2);
  sqcRYGate(q, 1.0212107852300254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9763388558508277, 2);
  sqcRYGate(q, -0.7869781607372317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.174417318027159, 3);
  sqcRYGate(q, -0.9974212177434949, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5515394766285926, 3);
  sqcRYGate(q, -0.37661246359184086, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8771961860745674, 4);
  sqcRYGate(q, -2.165944387840912, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.839193904501867, 4);
  sqcRYGate(q, 1.2673750741603858, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3286291792545028, 5);
  sqcRYGate(q, 0.20514332385370349, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6928416341556378, 5);
  sqcRYGate(q, 1.8360756965639773, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.712186051908063, 6);
  sqcRYGate(q, -1.721812010393209, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8065265828711585, 6);
  sqcRYGate(q, -0.46065237731415226, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1955325046455094, 0);
  sqcRYGate(q, 1.3870486789209062, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9195810865872596, 0);
  sqcRYGate(q, -1.8984881566422243, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2931459666996417, 1);
  sqcRYGate(q, 3.0097753330724415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.20469404348399323, 1);
  sqcRYGate(q, 1.7299823322476786, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.776310912378789, 2);
  sqcRYGate(q, -1.6533637075107053, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9478772926600838, 2);
  sqcRYGate(q, 0.2446807168492766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9528997106609, 3);
  sqcRYGate(q, 1.9706212068129207, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5882258110861387, 3);
  sqcRYGate(q, 2.5595071981969912, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.648559162872436, 4);
  sqcRYGate(q, 1.9542031410607814, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.552079171064643, 4);
  sqcRYGate(q, -0.8227509832247124, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2306092931474848, 5);
  sqcRYGate(q, 2.9760901088231915, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.134189207756241, 5);
  sqcRYGate(q, 0.5030127479908527, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5639777583588995, 6);
  sqcRYGate(q, -1.274561231331198, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8262752789298957, 6);
  sqcRYGate(q, 1.1755361508382343, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0792410039085594, 0);
  sqcRYGate(q, -2.804904511689709, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5767724197121078, 0);
  sqcRYGate(q, -1.495839421001853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0767890441232026, 1);
  sqcRYGate(q, 2.1829755450900956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7311382013279957, 1);
  sqcRYGate(q, -0.06699191535626953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1611796914215926, 2);
  sqcRYGate(q, -0.1742205571378881, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.499188875853204, 2);
  sqcRYGate(q, 2.9229019969500136, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.421833774157586, 3);
  sqcRYGate(q, 2.906948869501072, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.642781298887993, 3);
  sqcRYGate(q, 1.9358208963463506, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6837204518727232, 4);
  sqcRYGate(q, 0.7959089777872396, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9779792107062972, 4);
  sqcRYGate(q, -1.598150835909369, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.56379312599093, 5);
  sqcRYGate(q, -2.9857520672536575, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4623082830180784, 5);
  sqcRYGate(q, -0.7036776198620114, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0002360947908684, 6);
  sqcRYGate(q, 2.4813331986875937, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4153548543521177, 6);
  sqcRYGate(q, -1.7717630855950457, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2110474789908228, 0);
  sqcRYGate(q, -1.4465625913091804, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7594777052588921, 0);
  sqcRYGate(q, -0.051336562229127594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.133977603271684, 1);
  sqcRYGate(q, 1.9900282401718723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6562723750860298, 1);
  sqcRYGate(q, 2.4349354434213355, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7072250071537944, 2);
  sqcRYGate(q, -3.127947251328086, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.27909360457556254, 2);
  sqcRYGate(q, 2.418339877889677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13985934091509478, 3);
  sqcRYGate(q, -3.046721218084017, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.938880111487426, 3);
  sqcRYGate(q, -2.405742002160283, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.13830366579986, 4);
  sqcRYGate(q, 2.059371396722008, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5510253680839803, 4);
  sqcRYGate(q, -0.7603274339516847, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.97010847435652, 5);
  sqcRYGate(q, 2.586218826469855, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2079707037576295, 5);
  sqcRYGate(q, 2.28145498150944, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.37798778347405726, 6);
  sqcRYGate(q, 2.816460994972437, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.39500840313364005, 6);
  sqcRYGate(q, 0.20386992346406796, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5804742937327636, 0);
  sqcRYGate(q, -1.3042049822142696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.15456526627052458, 0);
  sqcRYGate(q, -2.991508533750278, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7614756437716932, 1);
  sqcRYGate(q, -1.7063440652360058, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.708617684919538, 1);
  sqcRYGate(q, -1.2026673651603668, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3695130087202294, 2);
  sqcRYGate(q, -1.409088352747558, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9074681539573044, 2);
  sqcRYGate(q, -0.9620891821203448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.817614422799828, 3);
  sqcRYGate(q, 2.72200285009231, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.415331122212582, 3);
  sqcRYGate(q, -1.4432044855880188, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7652330484758413, 4);
  sqcRYGate(q, 1.8340587300941293, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8087278829953406, 4);
  sqcRYGate(q, -1.8454599680367465, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.46293923840572315, 5);
  sqcRYGate(q, -0.2993023463380478, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.06273132381663435, 5);
  sqcRYGate(q, -0.9024760699395813, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.640829504447069, 6);
  sqcRYGate(q, -0.6916478514242304, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.33266454394569844, 6);
  sqcRYGate(q, -0.42847344088892386, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6472155098664618, 0);
  sqcRYGate(q, -1.7053948726220383, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6201987222060934, 0);
  sqcRYGate(q, -1.1119969526581528, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5086176892131102, 1);
  sqcRYGate(q, -0.46878233613969833, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1169027540133199, 1);
  sqcRYGate(q, -2.5309038266356776, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.762652357332113, 2);
  sqcRYGate(q, 1.4417802744695418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0604624042579154, 2);
  sqcRYGate(q, 0.966633995631609, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.251053362624064, 3);
  sqcRYGate(q, 2.319565363268511, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3128133014502978, 3);
  sqcRYGate(q, -1.9015640165477898, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.2082208937908705, 4);
  sqcRYGate(q, 0.06168551300861491, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5757715201532612, 4);
  sqcRYGate(q, -1.9275126546570212, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.248804909414061, 5);
  sqcRYGate(q, 0.9855698339353509, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.816180012143239, 5);
  sqcRYGate(q, 2.133641004154289, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.14227729980932832, 6);
  sqcRYGate(q, -0.3335692455832654, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8347934033225304, 6);
  sqcRYGate(q, -0.22650350418198537, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.002409634726344479, 0);
  sqcRYGate(q, 2.11427823728975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.317332096274429, 0);
  sqcRYGate(q, 1.4613081532761454, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6864120619958165, 1);
  sqcRYGate(q, -2.793806208506575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.905331424912663, 1);
  sqcRYGate(q, -2.3392205652009275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.225023629685887, 2);
  sqcRYGate(q, -1.336918094643882, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.008723875753213, 2);
  sqcRYGate(q, -2.8063438153671703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.40370967020580706, 3);
  sqcRYGate(q, 3.075610508105477, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4033448120786458, 3);
  sqcRYGate(q, 1.973741740730373, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8600724313207087, 4);
  sqcRYGate(q, 2.0515366154401047, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8998330802413186, 4);
  sqcRYGate(q, 0.18515775624219, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7903341460526927, 5);
  sqcRYGate(q, -2.3305160362667423, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5256581720281432, 5);
  sqcRYGate(q, 0.8793752371742709, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.411846183765291, 6);
  sqcRYGate(q, -2.1470938456998443, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6260644647808586, 6);
  sqcRYGate(q, 0.5230061507993007, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3379503833220734, 0);
  sqcRYGate(q, 1.1571069488686785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6769038344653193, 0);
  sqcRYGate(q, 1.7692660953416466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.129347234070291, 1);
  sqcRYGate(q, 2.800260721434779, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8331375745896845, 1);
  sqcRYGate(q, -1.1675633856986636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7241424169309635, 2);
  sqcRYGate(q, -1.9953211492013945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.054243124407519, 2);
  sqcRYGate(q, 1.4849376045814147, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5668915158266215, 3);
  sqcRYGate(q, 0.7010617150458467, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4312668494315575, 3);
  sqcRYGate(q, 2.2434535746962077, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.054284042318687, 4);
  sqcRYGate(q, -2.802530859783589, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9185640559294388, 4);
  sqcRYGate(q, 1.279095152261231, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.013258172704356, 5);
  sqcRYGate(q, -1.8576551983348617, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3917934891224988, 5);
  sqcRYGate(q, 1.690776684506379, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.095901382600155, 6);
  sqcRYGate(q, -2.160579681461501, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5218981065103914, 6);
  sqcRYGate(q, 1.5744932579022528, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.045890151604435, 0);
  sqcRYGate(q, 0.29304768804031234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1831688257229631, 0);
  sqcRYGate(q, -0.03729999682495762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0649179488823073, 1);
  sqcRYGate(q, -2.245410479579218, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5313010561573175, 1);
  sqcRYGate(q, 1.0437291162975169, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0335330184544085, 2);
  sqcRYGate(q, -2.4578545112841597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9995008912201362, 2);
  sqcRYGate(q, -2.685110056051748, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0661393701013684, 3);
  sqcRYGate(q, 1.7727459736090427, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4775850032385456, 3);
  sqcRYGate(q, 1.411753239854436, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8663883634327556, 4);
  sqcRYGate(q, -2.7083141230244436, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7775431950294905, 4);
  sqcRYGate(q, -2.773438832400412, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5756687439907338, 5);
  sqcRYGate(q, -1.0870525575989882, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.339297318369967, 5);
  sqcRYGate(q, 0.7738580502843782, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9833650189189416, 6);
  sqcRYGate(q, 0.3389722258731567, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4337739158988896, 6);
  sqcRYGate(q, 2.905669751264736, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.27051616071245177, 0);
  sqcRYGate(q, 2.8914411944658376, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.350611593804897, 0);
  sqcRYGate(q, -2.5250244993792306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.024647909336886688, 1);
  sqcRYGate(q, 2.259089694613986, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2522982983319437, 1);
  sqcRYGate(q, 0.04500385562200381, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4084078232266373, 2);
  sqcRYGate(q, -2.1393188366067637, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.507126307744373, 2);
  sqcRYGate(q, 0.27282059988320534, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4468184663045442, 3);
  sqcRYGate(q, -2.238998111251644, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5859192322590534, 3);
  sqcRYGate(q, 1.8712228864423537, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6858343870788115, 4);
  sqcRYGate(q, -3.0676135909598052, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6245408115733997, 4);
  sqcRYGate(q, 1.513798522357999, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5154623666678937, 5);
  sqcRYGate(q, 1.8530209482299185, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8284068840449044, 5);
  sqcRYGate(q, -1.6282049225631012, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.545798559935962, 6);
  sqcRYGate(q, -2.43496923405868, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5601252552251275, 6);
  sqcRYGate(q, 2.7049739214789925, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5888431824548551, 0);
  sqcRYGate(q, 0.8191987554563388, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.470635580574526, 0);
  sqcRYGate(q, -0.4829263596447413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9172670441532826, 1);
  sqcRYGate(q, 2.0892318792385502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4405027548309701, 1);
  sqcRYGate(q, 2.9012748351323334, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.094098465783157, 2);
  sqcRYGate(q, -2.5103172499284296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5265976932876812, 2);
  sqcRYGate(q, -2.7565786971541466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4097878644622865, 3);
  sqcRYGate(q, 2.3466535404672624, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.724838950108266, 3);
  sqcRYGate(q, 2.3702420934739776, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.946024962948023, 4);
  sqcRYGate(q, -1.8400568242095066, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6027501935485828, 4);
  sqcRYGate(q, -2.041642453374876, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6398846125806994, 5);
  sqcRYGate(q, 2.8581133084165002, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6256141490119635, 5);
  sqcRYGate(q, 1.4861474572080764, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2259998402024186, 6);
  sqcRYGate(q, -0.05409450516018666, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0034036693161137, 6);
  sqcRYGate(q, 2.92290824916349, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.98708694443774, 0);
  sqcRYGate(q, -1.5976559919547801, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.803932522913713, 0);
  sqcRYGate(q, -2.6578160338482535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.02866340059225614, 1);
  sqcRYGate(q, -1.1846355227703838, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.316760945045813, 1);
  sqcRYGate(q, 2.9673466081437327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1819592039594884, 2);
  sqcRYGate(q, -3.1126709161808312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7206689071821146, 2);
  sqcRYGate(q, 0.2704027539416709, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2171059096504164, 3);
  sqcRYGate(q, -1.3067922031557353, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.34815401105669475, 3);
  sqcRYGate(q, 1.0252334292913305, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4480686848559836, 4);
  sqcRYGate(q, 2.7320774038750257, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3021556432676458, 4);
  sqcRYGate(q, 1.4027376066287296, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8029906175526156, 5);
  sqcRYGate(q, 0.9365477411669909, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9172973280300596, 5);
  sqcRYGate(q, 0.8184511553901759, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4460352057801682, 6);
  sqcRYGate(q, -1.6479310868273638, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1510142561444177, 6);
  sqcRYGate(q, 2.428843231105766, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0526064432345934, 0);
  sqcRYGate(q, 1.5207056743689944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.243272274370387, 0);
  sqcRYGate(q, 1.7716585035542158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1870183140386734, 1);
  sqcRYGate(q, -2.8499034814057405, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0635015776868617, 1);
  sqcRYGate(q, -0.7593681279924239, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5171435224176371, 2);
  sqcRYGate(q, -2.1764794517660864, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9174858783233217, 2);
  sqcRYGate(q, -0.3922599915358649, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5648933540388752, 3);
  sqcRYGate(q, 2.6005912626560694, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0119008012111577, 3);
  sqcRYGate(q, 3.1293322675202266, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.99745001627059, 4);
  sqcRYGate(q, -1.6291633381916915, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7979392214732748, 4);
  sqcRYGate(q, -0.7232261896343938, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.261197922591283, 5);
  sqcRYGate(q, 0.15322903672294874, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5939576654719465, 5);
  sqcRYGate(q, 1.9762355942189753, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6160098671298107, 6);
  sqcRYGate(q, -1.9752934313741235, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8134361801916494, 6);
  sqcRYGate(q, 0.6662558353546517, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.061955692465938, 0);
  sqcRYGate(q, 1.727455240660751, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6404388742663807, 0);
  sqcRYGate(q, -1.5872823447914586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9636765089994661, 1);
  sqcRYGate(q, -2.8959021890211067, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6083069934825632, 1);
  sqcRYGate(q, -1.5529019971557876, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8256163158899623, 2);
  sqcRYGate(q, -0.8614144665787715, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0315458170772267, 2);
  sqcRYGate(q, 0.731493352399265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0746825826600777, 3);
  sqcRYGate(q, -0.46272940560440246, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2136789502116103, 3);
  sqcRYGate(q, 1.8460160144319113, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.284556111918493, 4);
  sqcRYGate(q, 1.3202313169315245, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7985434002607408, 4);
  sqcRYGate(q, -1.6523008383394544, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9783848195714713, 5);
  sqcRYGate(q, -2.8513069449493047, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.17477640208213213, 5);
  sqcRYGate(q, 2.0246058290516586, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2247972976999469, 6);
  sqcRYGate(q, 1.203039156947594, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.12775270298508892, 6);
  sqcRYGate(q, -1.6780217528450876, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.702519970262474, 0);
  sqcRYGate(q, -0.3341807282542947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8634652042146307, 0);
  sqcRYGate(q, 2.4981151541609954, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4356714820306348, 1);
  sqcRYGate(q, -0.5225309473417941, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.22512559049527414, 1);
  sqcRYGate(q, -2.3822591270963795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0289885437331563, 2);
  sqcRYGate(q, -1.4083827177538812, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1847307729365537, 2);
  sqcRYGate(q, 0.8080699124298975, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.303735975611688, 3);
  sqcRYGate(q, 1.391725638394953, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.954035987505701, 3);
  sqcRYGate(q, -2.2009997321543637, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3598797277977075, 4);
  sqcRYGate(q, -3.054524160747806, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2873570327141122, 4);
  sqcRYGate(q, 2.425072957730749, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.828248085987863, 5);
  sqcRYGate(q, -1.2854396453895376, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8627331964611935, 5);
  sqcRYGate(q, -0.36181833723478807, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0180754982154705, 6);
  sqcRYGate(q, -0.27773807215758045, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4602861232273874, 6);
  sqcRYGate(q, 2.401153463478808, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.251366016849154, 0);
  sqcRYGate(q, -1.8740972167147623, 1);
  sqcRYGate(q, 1.6012332226773638, 2);
  sqcRYGate(q, -0.439587398928624, 3);
  sqcRYGate(q, 0.28420850335686804, 4);
  sqcRYGate(q, -0.5803699335462923, 5);
  sqcRYGate(q, 1.3094051145876426, 6);
  sqcRYGate(q, -0.020519948102399432, 7);

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
