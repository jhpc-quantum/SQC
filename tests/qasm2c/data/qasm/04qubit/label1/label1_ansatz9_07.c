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

  sqcRYGate(q, -0.32347160615332626, 0);
  sqcRYGate(q, 1.2019441687708632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.274863231839464, 0);
  sqcRYGate(q, -2.1579810770755685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7983979501122703, 2);
  sqcRYGate(q, 3.0212153984735877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8253239145660702, 2);
  sqcRYGate(q, -2.0141883601419277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0016366301489376387, 0);
  sqcRYGate(q, 0.09824601422154919, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.310862859520338, 0);
  sqcRYGate(q, 2.24510103082699, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3072207713788169, 1);
  sqcRYGate(q, -2.226618912813687, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2525510391560085, 1);
  sqcRYGate(q, 0.3179009073735432, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.486162150519969, 0);
  sqcRYGate(q, 1.5767281499658798, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6346274792920126, 0);
  sqcRYGate(q, -1.5558557516976972, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8311295859707197, 1);
  sqcRYGate(q, -2.1148656520013818, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5951250930234089, 1);
  sqcRYGate(q, 0.4029450380669344, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5386385992251257, 0);
  sqcRYGate(q, 2.4641055183675884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5775631818987024, 0);
  sqcRYGate(q, 2.625931599743351, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.13735735896811363, 2);
  sqcRYGate(q, 1.9260260521596102, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1247155149397232, 2);
  sqcRYGate(q, -1.8227413108751414, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.885100121764995, 0);
  sqcRYGate(q, -1.743308215644948, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.766180090004414, 0);
  sqcRYGate(q, -1.2275763600076617, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.773419287347966, 1);
  sqcRYGate(q, -1.8989448632757138, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2911284681419186, 1);
  sqcRYGate(q, 1.6838362815576886, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2204247611226613, 0);
  sqcRYGate(q, -1.467664093803694, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.854261143280267, 0);
  sqcRYGate(q, 2.277569884487999, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7353324064244173, 1);
  sqcRYGate(q, 1.7661012259378113, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0884228234454811, 1);
  sqcRYGate(q, 0.03724341982388957, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1278998666726068, 0);
  sqcRYGate(q, -1.5976334169894315, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2549979303060983, 0);
  sqcRYGate(q, -2.631958505507495, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8145191658627686, 2);
  sqcRYGate(q, -0.4649284254948611, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.215523371572903, 2);
  sqcRYGate(q, -0.4120737330474693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.498161898804071, 0);
  sqcRYGate(q, 1.4104768458834478, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8857247459480257, 0);
  sqcRYGate(q, 2.671120824356006, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3502207915163324, 1);
  sqcRYGate(q, 1.3752131263319889, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9231496349551622, 1);
  sqcRYGate(q, -3.107322323463168, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4928163048024057, 0);
  sqcRYGate(q, 2.7834469109273345, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7840307693465645, 0);
  sqcRYGate(q, -0.35226156661910085, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3523008362560436, 1);
  sqcRYGate(q, 0.9172744627488174, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.834545772739919, 1);
  sqcRYGate(q, 1.136706615442142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.354640165139519, 0);
  sqcRYGate(q, 1.819199655192623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1174163309894949, 0);
  sqcRYGate(q, -0.7425918873114894, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6052429342967462, 2);
  sqcRYGate(q, -2.0813410540009967, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2541338992911193, 2);
  sqcRYGate(q, -2.8503103027384933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.983352617434113, 0);
  sqcRYGate(q, -1.3728178874784847, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0457485221976528, 0);
  sqcRYGate(q, -2.098446864509312, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7660814819521353, 1);
  sqcRYGate(q, 0.7653343834630393, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.46928612089898736, 1);
  sqcRYGate(q, -0.0032458572418221365, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5602153899316287, 0);
  sqcRYGate(q, 0.2599076715183042, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8657714622661619, 0);
  sqcRYGate(q, -2.9204941534956212, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4147865942801325, 1);
  sqcRYGate(q, 2.645975359469535, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6260574051741894, 1);
  sqcRYGate(q, 2.6606231586199596, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9130157494873004, 0);
  sqcRYGate(q, 2.1394355545696486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.19580894188018347, 0);
  sqcRYGate(q, 1.4235061418333974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.608117925862143, 2);
  sqcRYGate(q, 2.368502464693581, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5199380071484567, 2);
  sqcRYGate(q, -2.3687323530962656, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.44589525401741875, 0);
  sqcRYGate(q, -1.6641352413389254, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.099788587906925, 0);
  sqcRYGate(q, 1.426294447992455, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1068707439839516, 1);
  sqcRYGate(q, 1.265816148072554, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.20217724467593348, 1);
  sqcRYGate(q, -0.28048229159048965, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6455624843564713, 0);
  sqcRYGate(q, -0.8402339428547188, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0081232164167504, 0);
  sqcRYGate(q, -2.3131113552517153, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7599572234864544, 1);
  sqcRYGate(q, -2.408584943406693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4984983114238235, 1);
  sqcRYGate(q, -1.1164081758215723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.241706819350652, 0);
  sqcRYGate(q, -0.7320238128586949, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4001177630100621, 0);
  sqcRYGate(q, 0.30301326209191687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8483831546960197, 2);
  sqcRYGate(q, -2.460130549271297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7564890485867551, 2);
  sqcRYGate(q, -2.972603732114183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0949850625864581, 0);
  sqcRYGate(q, 0.5126323063831331, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4493285774896157, 0);
  sqcRYGate(q, 2.760578127967998, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.22483731309904798, 1);
  sqcRYGate(q, -1.5718901029161216, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.346710503678612, 1);
  sqcRYGate(q, -1.2934925126289487, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4120628438034517, 0);
  sqcRYGate(q, -2.77564156614571, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9838251295803806, 0);
  sqcRYGate(q, 0.2155833107020372, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.060803153686571, 1);
  sqcRYGate(q, 1.6967105734910133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2329488422282173, 1);
  sqcRYGate(q, -0.7194860551676092, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3481350294706647, 0);
  sqcRYGate(q, 2.6592060919035583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7900357104743247, 0);
  sqcRYGate(q, -2.596415429967105, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.05656537169407259, 2);
  sqcRYGate(q, -2.3833643952191097, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5827803723975475, 2);
  sqcRYGate(q, 0.7169310588581513, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2399377663255171, 0);
  sqcRYGate(q, 1.29547755252889, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1758207345519576, 0);
  sqcRYGate(q, 0.14227713657267826, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.27748801933066813, 1);
  sqcRYGate(q, -2.404727263011375, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9999402507840833, 1);
  sqcRYGate(q, 1.3741727808490365, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8783772994996233, 0);
  sqcRYGate(q, -1.8058917825732959, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4604236679491853, 0);
  sqcRYGate(q, 1.3816142800602644, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0396630884670905, 1);
  sqcRYGate(q, -3.0354732014526458, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5766464108171013, 1);
  sqcRYGate(q, -0.9172455865435429, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.31553888378804756, 0);
  sqcRYGate(q, 2.2660543766431265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3495359628644183, 0);
  sqcRYGate(q, 2.284895389830065, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6540059376696457, 2);
  sqcRYGate(q, -0.5923280875518763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5529130854487788, 2);
  sqcRYGate(q, 1.820994552808859, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5233812529767441, 0);
  sqcRYGate(q, 0.3551649662790375, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8042074351461785, 0);
  sqcRYGate(q, -1.018986571821228, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6753122346106615, 1);
  sqcRYGate(q, -0.8192099614758158, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.497661823978826, 1);
  sqcRYGate(q, -1.7793506717350396, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.07205852059538231, 0);
  sqcRYGate(q, 2.9390954003857956, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.961273915195819, 0);
  sqcRYGate(q, 0.8848051428226041, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1304461023367534, 1);
  sqcRYGate(q, -1.8278755456518725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7174824602665857, 1);
  sqcRYGate(q, 0.9897110021233442, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.09996578862640604, 0);
  sqcRYGate(q, 2.257808070917252, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2686710349576407, 0);
  sqcRYGate(q, -1.290821996614798, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2052681244951033, 2);
  sqcRYGate(q, 0.20842714936900453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1705982602810898, 2);
  sqcRYGate(q, 0.8863343879867793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.666671394582028, 0);
  sqcRYGate(q, -0.17487358958001548, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8936657328265066, 0);
  sqcRYGate(q, -1.9994152709602206, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9878601985803512, 1);
  sqcRYGate(q, -2.594904617081592, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8388304430225935, 1);
  sqcRYGate(q, 2.7909726365554826, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1909802278307797, 0);
  sqcRYGate(q, -2.7182550309945, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2840507559871701, 0);
  sqcRYGate(q, 0.9745595212112182, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.201864513078176, 1);
  sqcRYGate(q, 0.34978381177051615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.128725256543458, 1);
  sqcRYGate(q, -3.0014526155321555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7900162277377583, 0);
  sqcRYGate(q, 1.7861276596669287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9040157930241562, 0);
  sqcRYGate(q, 2.754830250390751, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.500571922615448, 2);
  sqcRYGate(q, -0.5861333631713175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.122854143748609, 2);
  sqcRYGate(q, 2.81964700336714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5337545230717291, 0);
  sqcRYGate(q, 2.3140579585789216, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6020988093670017, 0);
  sqcRYGate(q, -0.7094464865175972, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2100539047761343, 1);
  sqcRYGate(q, 2.5587299188366495, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.249765732400853, 1);
  sqcRYGate(q, 2.7321383287560344, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5936805866461193, 0);
  sqcRYGate(q, -0.5006325769161647, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.046616101415311, 0);
  sqcRYGate(q, 2.1731574850903375, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6329448311730541, 1);
  sqcRYGate(q, -2.976497121864235, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9572514120732977, 1);
  sqcRYGate(q, 1.252587935385415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8859802014919373, 0);
  sqcRYGate(q, -0.4054735440083679, 1);
  sqcRYGate(q, 1.3657038780711908, 2);
  sqcRYGate(q, -0.9313522003149904, 3);

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
