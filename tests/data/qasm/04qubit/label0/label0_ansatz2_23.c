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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -3.0589452076203463, 0);
  sqcRZGate(q, 2.4470724515642863, 0);
  sqcRYGate(q, -0.3892645168037694, 1);
  sqcRZGate(q, 2.197726306416443, 1);
  sqcRYGate(q, 2.6553426375930353, 2);
  sqcRZGate(q, -1.6259128840588513, 2);
  sqcRYGate(q, 1.4732482602767583, 3);
  sqcRZGate(q, -1.0750247577306684, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.08994213959294584, 0);
  sqcRZGate(q, -2.5269469729198875, 0);
  sqcRYGate(q, 0.4980556283258558, 1);
  sqcRZGate(q, 2.154281178312721, 1);
  sqcRYGate(q, -2.7960218931898995, 2);
  sqcRZGate(q, -0.7338351043237026, 2);
  sqcRYGate(q, 0.968072273935529, 3);
  sqcRZGate(q, -2.0306308583818096, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.5153113188580751, 0);
  sqcRZGate(q, 2.4890619145415456, 0);
  sqcRYGate(q, -1.6923467715594311, 1);
  sqcRZGate(q, -3.092608685479055, 1);
  sqcRYGate(q, -2.426022476815135, 2);
  sqcRZGate(q, 1.655339816190426, 2);
  sqcRYGate(q, -1.6479327952097138, 3);
  sqcRZGate(q, 0.4966960874075035, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.7222827695320944, 0);
  sqcRZGate(q, -1.101453222070563, 0);
  sqcRYGate(q, 2.1933486489218614, 1);
  sqcRZGate(q, 2.103773624624743, 1);
  sqcRYGate(q, -1.5051080185943344, 2);
  sqcRZGate(q, 0.3318432425387412, 2);
  sqcRYGate(q, -0.5693030049479226, 3);
  sqcRZGate(q, 2.4599217938243765, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2602243201823211, 0);
  sqcRZGate(q, 2.8598912128630753, 0);
  sqcRYGate(q, 0.7428749986749388, 1);
  sqcRZGate(q, 0.22739676125329616, 1);
  sqcRYGate(q, 1.7343818603143526, 2);
  sqcRZGate(q, 0.7923395843669948, 2);
  sqcRYGate(q, 0.39991777947205437, 3);
  sqcRZGate(q, 0.3124949217835735, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.1565332664442978, 0);
  sqcRZGate(q, 2.5566672398948733, 0);
  sqcRYGate(q, 1.1179148320642964, 1);
  sqcRZGate(q, 0.8411792922219767, 1);
  sqcRYGate(q, 0.19464540102990568, 2);
  sqcRZGate(q, 2.469366388659769, 2);
  sqcRYGate(q, 0.4955446115344948, 3);
  sqcRZGate(q, 1.4013365055402085, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.9221704520383538, 0);
  sqcRZGate(q, 0.8504306778403112, 0);
  sqcRYGate(q, -0.6483523965351745, 1);
  sqcRZGate(q, 1.1494777537453493, 1);
  sqcRYGate(q, 2.746064624316576, 2);
  sqcRZGate(q, -2.5329316309262087, 2);
  sqcRYGate(q, -1.2457232576962998, 3);
  sqcRZGate(q, 2.1315159786274833, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.7737148295804813, 0);
  sqcRZGate(q, 1.9975196466062233, 0);
  sqcRYGate(q, 0.1050725653439659, 1);
  sqcRZGate(q, 2.1283772903234204, 1);
  sqcRYGate(q, -1.7989739433607652, 2);
  sqcRZGate(q, -2.5181766692069094, 2);
  sqcRYGate(q, 0.5154166833719085, 3);
  sqcRZGate(q, -2.0514405610152306, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4894477130876462, 0);
  sqcRZGate(q, -2.1396913576952308, 0);
  sqcRYGate(q, -0.3434296612708994, 1);
  sqcRZGate(q, -2.4717680097056878, 1);
  sqcRYGate(q, -3.1179021169801313, 2);
  sqcRZGate(q, -0.00850133869897865, 2);
  sqcRYGate(q, -1.2416488771797862, 3);
  sqcRZGate(q, -0.5136080606798644, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.7786007301545532, 0);
  sqcRZGate(q, -1.7380237697156975, 0);
  sqcRYGate(q, -3.1141203648624685, 1);
  sqcRZGate(q, 3.045095909221136, 1);
  sqcRYGate(q, 2.9164600629565776, 2);
  sqcRZGate(q, 3.1137083113845954, 2);
  sqcRYGate(q, -2.6303135081320996, 3);
  sqcRZGate(q, 1.26998982371397, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.8509603505623619, 0);
  sqcRZGate(q, -3.06985039507604, 0);
  sqcRYGate(q, -0.4857867083984544, 1);
  sqcRZGate(q, 0.9546327671236393, 1);
  sqcRYGate(q, -0.20751195429354574, 2);
  sqcRZGate(q, 1.3149732625070598, 2);
  sqcRYGate(q, -0.28020222470904904, 3);
  sqcRZGate(q, -2.9541617261830275, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.16913321881444254, 0);
  sqcRZGate(q, 2.187630406289178, 0);
  sqcRYGate(q, 0.9652465194518234, 1);
  sqcRZGate(q, -1.9201794496665705, 1);
  sqcRYGate(q, 0.7715575962486795, 2);
  sqcRZGate(q, -1.2064257877916906, 2);
  sqcRYGate(q, -0.7548154855004128, 3);
  sqcRZGate(q, 2.18840088846898, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.5641550037461356, 0);
  sqcRZGate(q, 1.5205326496578668, 0);
  sqcRYGate(q, 2.737352279861153, 1);
  sqcRZGate(q, 0.7697161059140705, 1);
  sqcRYGate(q, 2.4601274410151146, 2);
  sqcRZGate(q, 0.8662042897324935, 2);
  sqcRYGate(q, -1.437389307955782, 3);
  sqcRZGate(q, 0.031570516236199, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.1638722154976557, 0);
  sqcRZGate(q, 1.1601288584817833, 0);
  sqcRYGate(q, 0.13801738987453963, 1);
  sqcRZGate(q, -2.0057275096239247, 1);
  sqcRYGate(q, -0.026011820223536652, 2);
  sqcRZGate(q, -1.1321141051875145, 2);
  sqcRYGate(q, -2.774901044862502, 3);
  sqcRZGate(q, 0.15042596823295995, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.025855168753324165, 0);
  sqcRZGate(q, 0.3890114098378188, 0);
  sqcRYGate(q, -2.1324910050185935, 1);
  sqcRZGate(q, 0.0407621314737483, 1);
  sqcRYGate(q, 1.8612916767940908, 2);
  sqcRZGate(q, 3.072274360840603, 2);
  sqcRYGate(q, 1.8530587442993722, 3);
  sqcRZGate(q, 0.4730731325858856, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.6001796473253806, 0);
  sqcRZGate(q, -0.10051947148449346, 0);
  sqcRYGate(q, -0.2866720890642238, 1);
  sqcRZGate(q, -2.2577268742495966, 1);
  sqcRYGate(q, 1.4315646667641264, 2);
  sqcRZGate(q, -0.6170730789650152, 2);
  sqcRYGate(q, 2.2514792196950575, 3);
  sqcRZGate(q, 2.7168379094871944, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.09534809827699943, 0);
  sqcRZGate(q, 0.47580664030922026, 0);
  sqcRYGate(q, -1.468626531294709, 1);
  sqcRZGate(q, -1.1898499260538857, 1);
  sqcRYGate(q, 1.1561039706272014, 2);
  sqcRZGate(q, 3.12617863640637, 2);
  sqcRYGate(q, 0.39340662807215665, 3);
  sqcRZGate(q, 0.5746956763776153, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.531284501715639, 0);
  sqcRZGate(q, 1.5887991581398744, 0);
  sqcRYGate(q, -1.2450762793197272, 1);
  sqcRZGate(q, -0.9410229152263876, 1);
  sqcRYGate(q, 2.6284569724767173, 2);
  sqcRZGate(q, -0.5248075311995164, 2);
  sqcRYGate(q, -0.20367777636640572, 3);
  sqcRZGate(q, 3.048776961822969, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2592365567729407, 0);
  sqcRZGate(q, -2.6437032014484916, 0);
  sqcRYGate(q, -2.8767429969687703, 1);
  sqcRZGate(q, 2.5094605740258427, 1);
  sqcRYGate(q, -2.9594816827418935, 2);
  sqcRZGate(q, -0.5200665664137993, 2);
  sqcRYGate(q, 1.325269750998161, 3);
  sqcRZGate(q, 2.4228562330648873, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.47671215188572, 0);
  sqcRZGate(q, 0.44159445947335385, 0);
  sqcRYGate(q, -1.2942621005942052, 1);
  sqcRZGate(q, -3.015259043052428, 1);
  sqcRYGate(q, -2.8172361988547285, 2);
  sqcRZGate(q, -1.1965555617134884, 2);
  sqcRYGate(q, -2.9752469711494176, 3);
  sqcRZGate(q, 2.6879689199986943, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.7379994331927362, 0);
  sqcRZGate(q, -1.5264437614700532, 0);
  sqcRYGate(q, 2.382320770781001, 1);
  sqcRZGate(q, 0.9226983692006687, 1);
  sqcRYGate(q, -0.4925730811623561, 2);
  sqcRZGate(q, 0.8571235580885812, 2);
  sqcRYGate(q, -1.4665054549530117, 3);
  sqcRZGate(q, -3.0787179512941902, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.8291515667876506, 0);
  sqcRZGate(q, -2.072063038882918, 0);
  sqcRYGate(q, 2.1543618432964493, 1);
  sqcRZGate(q, 2.093644784275769, 1);
  sqcRYGate(q, -0.13686839305766846, 2);
  sqcRZGate(q, 0.04474063798258285, 2);
  sqcRYGate(q, 2.778035102656355, 3);
  sqcRZGate(q, 1.5426139847202007, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.9180122007408178, 0);
  sqcRZGate(q, 2.223835377418797, 0);
  sqcRYGate(q, 2.0631031004297817, 1);
  sqcRZGate(q, -2.740141905922496, 1);
  sqcRYGate(q, -0.8407689067051995, 2);
  sqcRZGate(q, 2.4459373017908206, 2);
  sqcRYGate(q, -1.953918075236345, 3);
  sqcRZGate(q, -1.5672228571773754, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.775268816690913, 0);
  sqcRZGate(q, -2.6234357945337448, 0);
  sqcRYGate(q, 1.7123685989850808, 1);
  sqcRZGate(q, 2.0472564477387927, 1);
  sqcRYGate(q, 2.8953067959350016, 2);
  sqcRZGate(q, -0.972913547530011, 2);
  sqcRYGate(q, -0.5042619751811362, 3);
  sqcRZGate(q, 2.849255099548753, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.8643060268074187, 0);
  sqcRZGate(q, 1.6569712193275852, 0);
  sqcRYGate(q, 2.0195894188737036, 1);
  sqcRZGate(q, 2.08566826673932, 1);
  sqcRYGate(q, 2.809376211039486, 2);
  sqcRZGate(q, 0.6861187486569751, 2);
  sqcRYGate(q, 2.0512843439422275, 3);
  sqcRZGate(q, -1.4243299870525483, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4681358154348372, 0);
  sqcRZGate(q, 2.2644948788040127, 0);
  sqcRYGate(q, -2.1067541224782516, 1);
  sqcRZGate(q, -0.4353972000816362, 1);
  sqcRYGate(q, 2.072081428087558, 2);
  sqcRZGate(q, -0.12556400386860833, 2);
  sqcRYGate(q, 1.3354179029013358, 3);
  sqcRZGate(q, 0.8886410825755453, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.0773306485351393, 0);
  sqcRZGate(q, 1.4536723001681615, 0);
  sqcRYGate(q, 1.6991380623182197, 1);
  sqcRZGate(q, 0.7943016385157474, 1);
  sqcRYGate(q, -1.1051923063891547, 2);
  sqcRZGate(q, -1.086566658987754, 2);
  sqcRYGate(q, 2.3628306935392063, 3);
  sqcRZGate(q, 1.2046020428369324, 3);

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
