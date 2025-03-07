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

  sqcRYGate(q, 1.494010703588569, 0);
  sqcRYGate(q, -1.6027986824812852, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3159105157080804, 0);
  sqcRYGate(q, -0.9527287496892102, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.045769277293863375, 1);
  sqcRYGate(q, 0.5984121509160438, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.064307494283259, 1);
  sqcRYGate(q, 2.855135302011889, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7584210238976075, 2);
  sqcRYGate(q, -2.406297576308117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0085881852358951, 2);
  sqcRYGate(q, -1.80053173151473, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.15839909164630495, 0);
  sqcRYGate(q, -2.7964452109607647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.25723040826063404, 0);
  sqcRYGate(q, -1.075972817080725, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.926992208977565, 1);
  sqcRYGate(q, 2.1944414023988994, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8848108414393008, 1);
  sqcRYGate(q, -2.882464242560204, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6573572523093859, 2);
  sqcRYGate(q, 2.354551164513912, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7888019505825055, 2);
  sqcRYGate(q, -1.1916051514843418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.910795633124199, 0);
  sqcRYGate(q, 1.0160876543977553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7645322345135215, 0);
  sqcRYGate(q, 1.3492538903423474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0850714528470835, 1);
  sqcRYGate(q, 1.4230465217855108, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6121390519257692, 1);
  sqcRYGate(q, -0.5988358725457662, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2968284329295607, 2);
  sqcRYGate(q, 0.1773703776598829, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.02758898124684647, 2);
  sqcRYGate(q, -0.9686044917453458, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.07556109046359, 0);
  sqcRYGate(q, 0.03227367025245265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0045647407850082, 0);
  sqcRYGate(q, -2.3926074165752445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1499853554357689, 1);
  sqcRYGate(q, 2.856596502256544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7935810507235432, 1);
  sqcRYGate(q, -2.916919101435406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3601556737909792, 2);
  sqcRYGate(q, 1.7032361015605595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.912849745189407, 2);
  sqcRYGate(q, 1.4218653759013735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6191529796825002, 0);
  sqcRYGate(q, 2.8494768652174653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.084671458975286, 0);
  sqcRYGate(q, 2.955239911601972, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.781945817240726, 1);
  sqcRYGate(q, -2.0330027536008703, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8147591029182193, 1);
  sqcRYGate(q, 2.7099439049785743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0340657238263091, 2);
  sqcRYGate(q, 2.2224942981670406, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9482952402941811, 2);
  sqcRYGate(q, -2.664738974321998, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5334371569555465, 0);
  sqcRYGate(q, 0.7375180081482253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.891511136569498, 0);
  sqcRYGate(q, 3.107898912281767, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2090346830099694, 1);
  sqcRYGate(q, 0.35888523667700056, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1420441888269217, 1);
  sqcRYGate(q, 2.8936950172003018, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2795633354857885, 2);
  sqcRYGate(q, 0.2828090019124945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22156742794723172, 2);
  sqcRYGate(q, 2.812907827655621, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3403052498526935, 0);
  sqcRYGate(q, 2.6957069000190383, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2659150950325, 0);
  sqcRYGate(q, -0.5135215957602055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.708228892550822, 1);
  sqcRYGate(q, 2.725680597124229, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.476710765511284, 1);
  sqcRYGate(q, -2.8658810557628587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.864274796450792, 2);
  sqcRYGate(q, 3.0654460920251454, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7348318673537686, 2);
  sqcRYGate(q, -0.365510736877311, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0460240919265669, 0);
  sqcRYGate(q, 2.2120763824004817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0108010321014995, 0);
  sqcRYGate(q, 2.8561560352899686, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8227811681562995, 1);
  sqcRYGate(q, 3.0752259441655645, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5918347727387543, 1);
  sqcRYGate(q, -1.8899172378326048, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.978453287477183, 2);
  sqcRYGate(q, 2.064722147236198, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.466566780834393, 2);
  sqcRYGate(q, 2.946113807045863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.68867358353235, 0);
  sqcRYGate(q, 0.2498478220349494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4462318091007476, 0);
  sqcRYGate(q, -0.3428572793253979, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.970847845834432, 1);
  sqcRYGate(q, 1.1491674998091135, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.87585400868699, 1);
  sqcRYGate(q, 1.7401236356003098, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4839927628562597, 2);
  sqcRYGate(q, 2.293157102630905, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5347545219834169, 2);
  sqcRYGate(q, -0.9984827657434864, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0596028876987817, 0);
  sqcRYGate(q, -0.03698558630908443, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0004939357332887, 0);
  sqcRYGate(q, 1.093420177354294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.43888680581081374, 1);
  sqcRYGate(q, 0.10748406450537348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6666503454181965, 1);
  sqcRYGate(q, 0.6962124661572123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9841802374866075, 2);
  sqcRYGate(q, 0.4558649865173017, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7997623273248673, 2);
  sqcRYGate(q, -2.3479030135503933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1964879434647333, 0);
  sqcRYGate(q, -2.818345836511559, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6191508041914888, 0);
  sqcRYGate(q, 2.5158043926171727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5645576236313827, 1);
  sqcRYGate(q, 1.261687397832465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.53482950726301, 1);
  sqcRYGate(q, 1.3110009524876796, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7721863803941007, 2);
  sqcRYGate(q, 1.1768080105430825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8061473570246287, 2);
  sqcRYGate(q, 0.14696638751592822, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.390142085005478, 0);
  sqcRYGate(q, 1.0273568088609522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04961766656315546, 0);
  sqcRYGate(q, 0.12524680084117712, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4056009790584336, 1);
  sqcRYGate(q, -1.7765149319680926, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1038613613273345, 1);
  sqcRYGate(q, 1.072321574720559, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2463780297656166, 2);
  sqcRYGate(q, 1.2067668218126701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.922038049160109, 2);
  sqcRYGate(q, 2.6853491830080793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4770539335854818, 0);
  sqcRYGate(q, 2.9690573404022667, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0031019591142354, 0);
  sqcRYGate(q, -2.63993517512971, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2149661219338865, 1);
  sqcRYGate(q, -0.08141312681149261, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.39665735999483775, 1);
  sqcRYGate(q, 1.1164107895417363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6356988703311872, 2);
  sqcRYGate(q, 2.690536116545303, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2025578564279247, 2);
  sqcRYGate(q, -2.5363125072570947, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.12474248862828788, 0);
  sqcRYGate(q, -2.828614594583467, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3986706038982666, 0);
  sqcRYGate(q, 2.2634171515147266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7514960193977704, 1);
  sqcRYGate(q, -0.7044664947915358, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1233837454369597, 1);
  sqcRYGate(q, 1.5074650553189262, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5228465963837641, 2);
  sqcRYGate(q, -2.708684335146289, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.055096312330638, 2);
  sqcRYGate(q, -1.9506018358462436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9448561660386527, 0);
  sqcRYGate(q, -0.8368969772279725, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0890721064215274, 0);
  sqcRYGate(q, 2.888753633189225, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20498443959962298, 1);
  sqcRYGate(q, -1.5932318390465454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9825952287357117, 1);
  sqcRYGate(q, 0.009322082863251424, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.703501387490236, 2);
  sqcRYGate(q, 1.230717370337925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0761208187167437, 2);
  sqcRYGate(q, -1.5783980943639158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5034871365857283, 0);
  sqcRYGate(q, -0.7125168711886163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7333344385800349, 0);
  sqcRYGate(q, -2.8444626596474634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.012483426655213, 1);
  sqcRYGate(q, 0.8687553550909345, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2838204253893788, 1);
  sqcRYGate(q, 0.6882612249304706, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.337876623740153, 2);
  sqcRYGate(q, 1.9633014711799677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.231496261287236, 2);
  sqcRYGate(q, -2.3039413316242108, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7504829118527558, 0);
  sqcRYGate(q, -0.5371560386324967, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5516909116135666, 0);
  sqcRYGate(q, -0.5269740158156626, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.716834338742658, 1);
  sqcRYGate(q, -1.7954993650480502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.924451850350679, 1);
  sqcRYGate(q, 2.8472428639608967, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0601132601889023, 2);
  sqcRYGate(q, 3.04284082541703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07355553942181522, 2);
  sqcRYGate(q, 2.317761677220692, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0409890958783594, 0);
  sqcRYGate(q, 2.44027846178776, 1);
  sqcRYGate(q, 1.574051571693949, 2);
  sqcRYGate(q, 1.6273444586735972, 3);

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
