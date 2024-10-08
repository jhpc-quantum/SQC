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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 2.9077291889020014, 0);
  sqcRYGate(q, 0.9572928841283188, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7871918519108974, 0);
  sqcRYGate(q, -0.6591817186980853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7166461241562567, 2);
  sqcRYGate(q, 2.5687371373124805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.082520979695076, 2);
  sqcRYGate(q, -1.054181272336585, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4705806831515473, 4);
  sqcRYGate(q, -1.3184676082122389, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9441646810920021, 4);
  sqcRYGate(q, 0.704949710336007, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6018112930873483, 6);
  sqcRYGate(q, -0.8926901573626146, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.226401278684774, 6);
  sqcRYGate(q, 2.023665319548127, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.019437439926115404, 1);
  sqcRYGate(q, 1.4409243845634645, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9242651172797062, 1);
  sqcRYGate(q, -0.9076359182507758, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7916215800759114, 3);
  sqcRYGate(q, 1.5892688050970651, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.665701478263605, 3);
  sqcRYGate(q, -0.2347620118465752, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8754030460633002, 5);
  sqcRYGate(q, 1.1692877162846846, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0467445084596179, 5);
  sqcRYGate(q, -1.874409335474403, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7865179748205438, 0);
  sqcRYGate(q, 1.9742257099556182, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6868407427143461, 0);
  sqcRYGate(q, 1.4388354513757777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0996827135472858, 2);
  sqcRYGate(q, -0.17611471445865146, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.46030511469740754, 2);
  sqcRYGate(q, 2.860465107062233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.134272766407119, 4);
  sqcRYGate(q, 0.27714873399770545, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1410564069385967, 4);
  sqcRYGate(q, 1.4523755534095875, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5585971679906594, 6);
  sqcRYGate(q, -0.6822045081132139, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.356546777418911, 6);
  sqcRYGate(q, -1.7754495009620301, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.1668909896047701, 1);
  sqcRYGate(q, 2.1675489838586675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1384414009988326, 1);
  sqcRYGate(q, -3.13735848759301, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0419008073937315, 3);
  sqcRYGate(q, -0.5984813166248022, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.123226922038976, 3);
  sqcRYGate(q, -0.030163530557977047, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.879561685821217, 5);
  sqcRYGate(q, 1.7487027281798497, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.895269050002986, 5);
  sqcRYGate(q, 0.04300093620700984, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.592150439132788, 0);
  sqcRYGate(q, -0.031187342866684453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4586375758467744, 0);
  sqcRYGate(q, -1.380394320240983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9675966194768065, 2);
  sqcRYGate(q, -1.8653884210089606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9423888102935285, 2);
  sqcRYGate(q, -1.3579303882045606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.238742712214374, 4);
  sqcRYGate(q, -2.04406026557616, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5121878809490963, 4);
  sqcRYGate(q, 0.8101285831489676, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7337379073059365, 6);
  sqcRYGate(q, -2.4845386801842655, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1408080457818333, 6);
  sqcRYGate(q, -2.9866163152587, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5269441111553537, 1);
  sqcRYGate(q, -1.3892946073477104, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.136284924031225, 1);
  sqcRYGate(q, -1.496665214404013, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3080625855558208, 3);
  sqcRYGate(q, -0.3640404990374664, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4079994851885616, 3);
  sqcRYGate(q, 0.10780963615719548, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7979012801505627, 5);
  sqcRYGate(q, -1.3126441668368898, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3990327051767508, 5);
  sqcRYGate(q, 2.502306895531902, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7118718356534763, 0);
  sqcRYGate(q, 0.9686329902844891, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0010203067783445263, 0);
  sqcRYGate(q, -1.1508866075034234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6858276008838713, 2);
  sqcRYGate(q, 1.5836771667496725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0351193290083374, 2);
  sqcRYGate(q, -0.34865817031473156, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10651152481257686, 4);
  sqcRYGate(q, 1.5736566985683798, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1284073506261003, 4);
  sqcRYGate(q, -2.849656394686973, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2537936475825124, 6);
  sqcRYGate(q, 2.542056638798485, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.474085829867443, 6);
  sqcRYGate(q, -2.7213238370571453, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1623617298420292, 1);
  sqcRYGate(q, 2.0377540759368884, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.516107831829307, 1);
  sqcRYGate(q, -0.40971433841950855, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.630871704039551, 3);
  sqcRYGate(q, 0.23479290346099016, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5642975677918383, 3);
  sqcRYGate(q, -0.22869078773265242, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.29996096192803723, 5);
  sqcRYGate(q, -0.7049028686581229, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.140315502294107, 5);
  sqcRYGate(q, -0.001942134661280015, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.387918829942089, 0);
  sqcRYGate(q, -1.1175617698865414, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.935882266759846, 0);
  sqcRYGate(q, 0.5298185418754685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6484048496470738, 2);
  sqcRYGate(q, 1.6377103997202793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.14126927527504, 2);
  sqcRYGate(q, 0.08637349319746777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9532445562731895, 4);
  sqcRYGate(q, 1.3003898264741875, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1300551894213073, 4);
  sqcRYGate(q, 2.9583626082640273, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8224505644755142, 6);
  sqcRYGate(q, 2.201857346568943, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.06186089333257198, 6);
  sqcRYGate(q, -2.3438499195962708, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0839803815676863, 1);
  sqcRYGate(q, -2.155307240784743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.37428860792967333, 1);
  sqcRYGate(q, 0.3536081461777542, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.221816009318518, 3);
  sqcRYGate(q, 0.14569652192526453, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3118825947491021, 3);
  sqcRYGate(q, -2.8659375500156883, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.28394693988512876, 5);
  sqcRYGate(q, 1.0046138565096252, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4020152878672336, 5);
  sqcRYGate(q, 3.1414874306945406, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5565899627648392, 0);
  sqcRYGate(q, -2.1196093354805563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.36455249422896, 0);
  sqcRYGate(q, -2.665514099070338, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1794181862788995, 2);
  sqcRYGate(q, -1.4194789164868225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07887919636477836, 2);
  sqcRYGate(q, -3.1407065402430323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0981014996942684, 4);
  sqcRYGate(q, -2.882038608800837, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2548369208475023, 4);
  sqcRYGate(q, -0.012356431580312268, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2042886678950877, 6);
  sqcRYGate(q, 0.5145232448211079, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7341181475476484, 6);
  sqcRYGate(q, -1.8993385626263493, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6650788324551651, 1);
  sqcRYGate(q, 1.125838387245036, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.13328083538700852, 1);
  sqcRYGate(q, -2.5667056700422735, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0305074127885234, 3);
  sqcRYGate(q, -2.272006886792714, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1106619419219395, 3);
  sqcRYGate(q, 3.1150061004766485, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5501159809515581, 5);
  sqcRYGate(q, -1.3915187436482979, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1387720849578553, 5);
  sqcRYGate(q, 0.07012250788228958, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4947313823762887, 0);
  sqcRYGate(q, 0.8764495721590073, 1);
  sqcRYGate(q, -1.6208955552601854, 2);
  sqcRYGate(q, 2.644552013830264, 3);
  sqcRYGate(q, 2.507074969949342, 4);
  sqcRYGate(q, 3.116330242430351, 5);
  sqcRYGate(q, -0.7699144629210433, 6);
  sqcRYGate(q, -2.861571950454965, 7);

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
