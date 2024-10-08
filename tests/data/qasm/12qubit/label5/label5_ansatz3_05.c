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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 1.6035809902448115, 0);
  sqcRZGate(q, 1.0761236871528173, 0);
  sqcRYGate(q, 3.1404610331271887, 1);
  sqcRZGate(q, -2.2940142844539735, 1);
  sqcRYGate(q, -1.5214122923159952, 2);
  sqcRZGate(q, 1.5207591897368866, 2);
  sqcRYGate(q, 1.3582392462853978, 3);
  sqcRZGate(q, 0.001320529799853769, 3);
  sqcRYGate(q, 1.555265222792774, 4);
  sqcRZGate(q, -0.5869104189074381, 4);
  sqcRYGate(q, -7.900356484649296e-05, 5);
  sqcRZGate(q, -1.7473555961007454, 5);
  sqcRYGate(q, -1.587368434778119, 6);
  sqcRZGate(q, -1.0135268788102243, 6);
  sqcRYGate(q, 3.1404974301527324, 7);
  sqcRZGate(q, -1.0921205518776294, 7);
  sqcRYGate(q, 2.290974561544939, 8);
  sqcRZGate(q, 1.6265525175184001, 8);
  sqcRYGate(q, -3.1409056307788754, 9);
  sqcRZGate(q, 0.0898989567984751, 9);
  sqcRYGate(q, -3.1415798538183934, 10);
  sqcRZGate(q, 1.444930917770158, 10);
  sqcRYGate(q, 2.2656227694818183, 11);
  sqcRZGate(q, 2.9309322787206065, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.00022747872511263978, 0);
  sqcRZGate(q, -1.0761823445511658, 0);
  sqcRYGate(q, 0.0011451693998753, 1);
  sqcRZGate(q, -0.6918052731235981, 1);
  sqcRYGate(q, -3.128976998149416, 2);
  sqcRZGate(q, -1.3446399391990123, 2);
  sqcRYGate(q, -1.5803967921200588, 3);
  sqcRZGate(q, 2.8679281023744347, 3);
  sqcRYGate(q, -0.017349753874685625, 4);
  sqcRZGate(q, -2.985713842512246, 4);
  sqcRYGate(q, -3.1415520929544987, 5);
  sqcRZGate(q, -2.5595221613637986, 5);
  sqcRYGate(q, 1.2522636856418465, 6);
  sqcRZGate(q, -0.7622162855637845, 6);
  sqcRYGate(q, 0.782846577531481, 7);
  sqcRZGate(q, 0.00398003369049782, 7);
  sqcRYGate(q, -2.2774338501828217, 8);
  sqcRZGate(q, 0.02448976855526297, 8);
  sqcRYGate(q, -3.1405848059552968, 9);
  sqcRZGate(q, 2.065697783619296, 9);
  sqcRYGate(q, -3.141582562566496, 10);
  sqcRZGate(q, -2.885226463281807, 10);
  sqcRYGate(q, 2.853688945766264, 11);
  sqcRZGate(q, 2.4429416229513117, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.6035918329105598, 0);
  sqcRZGate(q, -2.0547822070694233, 0);
  sqcRYGate(q, 1.5709672534616252, 1);
  sqcRZGate(q, 0.7266443240735331, 1);
  sqcRYGate(q, 1.7223254074294672, 2);
  sqcRZGate(q, -1.4973207937818664, 2);
  sqcRYGate(q, -1.6236785901519148, 3);
  sqcRZGate(q, -0.029834123708477135, 3);
  sqcRYGate(q, -1.6157338289398746, 4);
  sqcRZGate(q, 1.5561296425121416, 4);
  sqcRYGate(q, -1.5707984102294779, 5);
  sqcRZGate(q, 2.5239383777169464, 5);
  sqcRYGate(q, 1.5704455914368032, 6);
  sqcRZGate(q, 1.5810858447612874, 6);
  sqcRYGate(q, 1.5710074477655942, 7);
  sqcRZGate(q, 1.5990619905131522, 7);
  sqcRYGate(q, 1.5709740614555436, 8);
  sqcRZGate(q, 1.1137919399978902, 8);
  sqcRYGate(q, -1.5708673659897343, 9);
  sqcRZGate(q, -2.3189509259256726, 9);
  sqcRYGate(q, 3.1415714186757744, 10);
  sqcRZGate(q, 0.05827570141093563, 10);
  sqcRYGate(q, 2.128247961055496, 11);
  sqcRZGate(q, 0.8264017241610725, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 3.141582990882484, 0);
  sqcRZGate(q, -2.3727697529016885, 0);
  sqcRYGate(q, 3.0727436242900446, 1);
  sqcRZGate(q, -0.8428896108084887, 1);
  sqcRYGate(q, -1.5708788539597078, 2);
  sqcRZGate(q, -1.6225663411957072, 2);
  sqcRYGate(q, -1.5708071687072866, 3);
  sqcRZGate(q, 7.338714365090482e-07, 3);
  sqcRYGate(q, -1.570806823288371, 4);
  sqcRZGate(q, -1.4855448277726921, 4);
  sqcRYGate(q, -7.76540786961988e-06, 5);
  sqcRZGate(q, -0.8251862133183553, 5);
  sqcRYGate(q, -0.03494087014496522, 6);
  sqcRZGate(q, -1.5809070516840347, 6);
  sqcRYGate(q, -1.5708321368590643, 7);
  sqcRZGate(q, 3.1415916800771697, 7);
  sqcRYGate(q, 1.5706585056971099, 8);
  sqcRZGate(q, -2.606562013793392, 8);
  sqcRYGate(q, -6.595377837825822e-05, 9);
  sqcRZGate(q, 1.2899935607435609, 9);
  sqcRYGate(q, -1.5708109865622535, 10);
  sqcRZGate(q, 3.079061340277889, 10);
  sqcRYGate(q, 3.139464320605892, 11);
  sqcRZGate(q, -0.5192423555915111, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -3.140352592118606, 0);
  sqcRZGate(q, 1.2545033109230497, 0);
  sqcRYGate(q, 1.5707929751326803, 1);
  sqcRZGate(q, -1.5707862865496898, 1);
  sqcRYGate(q, -1.5707503644716854, 2);
  sqcRZGate(q, 0.10150239028344998, 2);
  sqcRYGate(q, 1.565101284493164, 3);
  sqcRZGate(q, -0.00015511975299098424, 3);
  sqcRYGate(q, 1.5803480864739001, 4);
  sqcRZGate(q, 1.5735261552754778, 4);
  sqcRYGate(q, -2.105558539315778e-06, 5);
  sqcRZGate(q, -0.19467545295663857, 5);
  sqcRYGate(q, -1.5707600952461014, 6);
  sqcRZGate(q, 0.03140426845679608, 6);
  sqcRYGate(q, -1.5673504587932552, 7);
  sqcRZGate(q, 2.001238623838048e-05, 7);
  sqcRYGate(q, 4.6685389769946236e-06, 8);
  sqcRZGate(q, -0.5348608997664126, 8);
  sqcRYGate(q, -3.141574987025159, 9);
  sqcRZGate(q, 2.114456463724321, 9);
  sqcRYGate(q, -1.5707944763266397, 10);
  sqcRZGate(q, -0.0016768885637939066, 10);
  sqcRYGate(q, -1.6333348077596384, 11);
  sqcRZGate(q, -1.5708097658517304, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.5708020138418446, 0);
  sqcRZGate(q, -3.1399518784974254, 0);
  sqcRYGate(q, 1.57070270907861, 1);
  sqcRZGate(q, -3.139317785079599, 1);
  sqcRYGate(q, 4.0419403126006474e-05, 2);
  sqcRZGate(q, 1.4691693966164867, 2);
  sqcRYGate(q, 1.572549579851728, 3);
  sqcRZGate(q, -1.5707503233769566, 3);
  sqcRYGate(q, 3.1145951943263603, 4);
  sqcRZGate(q, -3.0280557098435184, 4);
  sqcRYGate(q, -3.141510330230502, 5);
  sqcRZGate(q, 1.5040621343865155, 5);
  sqcRYGate(q, -3.1415558090428903, 6);
  sqcRZGate(q, -1.5297671029022588, 6);
  sqcRYGate(q, 1.5708002239923438, 7);
  sqcRZGate(q, -0.6952499529021451, 7);
  sqcRYGate(q, 0.11300394139501968, 8);
  sqcRZGate(q, -1.5708338041304521, 8);
  sqcRYGate(q, 1.5708072963592878, 9);
  sqcRZGate(q, -2.8139787999315047e-05, 9);
  sqcRYGate(q, -2.7900909408947085, 10);
  sqcRZGate(q, -0.8141440768018204, 10);
  sqcRYGate(q, 1.5714940478087143, 11);
  sqcRZGate(q, 1.5707481266739185, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.5707896397751082, 0);
  sqcRZGate(q, 0.7261667108057859, 0);
  sqcRYGate(q, 1.5707974259246633, 1);
  sqcRZGate(q, 2.0810961837437656, 1);
  sqcRYGate(q, 1.5708024111636656, 2);
  sqcRZGate(q, 1.5724340298660886, 2);
  sqcRYGate(q, 1.5713226855106828, 3);
  sqcRZGate(q, -4.629632622421553e-05, 3);
  sqcRYGate(q, -3.0558269629381356, 4);
  sqcRZGate(q, -0.3174385122781386, 4);
  sqcRYGate(q, 1.5708186974919265, 5);
  sqcRZGate(q, 0.03163939232149583, 5);
  sqcRYGate(q, 1.3358240442678753, 6);
  sqcRZGate(q, -5.891321387707649e-05, 6);
  sqcRYGate(q, -1.3600805717712196e-05, 7);
  sqcRZGate(q, -0.8814899898031134, 7);
  sqcRYGate(q, 1.57083752227963, 8);
  sqcRZGate(q, -2.612424211107373, 8);
  sqcRYGate(q, 1.570762948268469, 9);
  sqcRZGate(q, -0.019362236444644413, 9);
  sqcRYGate(q, -1.5707511054937195, 10);
  sqcRZGate(q, -3.1415014160483987, 10);
  sqcRYGate(q, 1.570342033257913, 11);
  sqcRZGate(q, 1.5707948712676558, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.4623281161973978e-05, 0);
  sqcRZGate(q, -0.7746759022522018, 0);
  sqcRYGate(q, -3.1415641753268675, 1);
  sqcRZGate(q, -1.0604971039608797, 1);
  sqcRYGate(q, 1.5707895098809974, 2);
  sqcRZGate(q, -0.025622029550820814, 2);
  sqcRYGate(q, -1.5790046907442283, 3);
  sqcRZGate(q, 3.1415569341249947, 3);
  sqcRYGate(q, 3.141580130207443, 4);
  sqcRZGate(q, 2.712999397102349, 4);
  sqcRYGate(q, 3.1268315551214334, 5);
  sqcRZGate(q, 2.3577503839714953, 5);
  sqcRYGate(q, 0.06320372060040758, 6);
  sqcRZGate(q, -0.042571317638673216, 6);
  sqcRYGate(q, -1.4936936843845672e-05, 7);
  sqcRZGate(q, 0.4038222950418549, 7);
  sqcRYGate(q, 7.75429985454438e-05, 8);
  sqcRZGate(q, -2.100152035197726, 8);
  sqcRYGate(q, -1.5707839794680336, 9);
  sqcRZGate(q, -2.9955808098950643, 9);
  sqcRYGate(q, -1.5706376310009007, 10);
  sqcRZGate(q, 1.5256330858490967, 10);
  sqcRYGate(q, 1.5707831738965679, 11);
  sqcRZGate(q, 2.75448948717374e-05, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.3604455656735204, 0);
  sqcRZGate(q, 0.4623572061101781, 0);
  sqcRYGate(q, 1.5708057020163126, 1);
  sqcRZGate(q, 1.4276367343596772, 1);
  sqcRYGate(q, -2.2475532677549477e-05, 2);
  sqcRZGate(q, 2.078848304767614, 2);
  sqcRYGate(q, -1.5707832896997869, 3);
  sqcRZGate(q, -1.7139436399823582, 3);
  sqcRYGate(q, -1.5707402515369273, 4);
  sqcRZGate(q, -1.0397922151998855, 4);
  sqcRYGate(q, -3.141577063150391, 5);
  sqcRZGate(q, -0.9586394200902156, 5);
  sqcRYGate(q, 2.868179894926918, 6);
  sqcRZGate(q, -2.651885666114084, 6);
  sqcRYGate(q, -0.00014106183764342643, 7);
  sqcRZGate(q, 2.600389661072684, 7);
  sqcRYGate(q, 1.5707961777042856, 8);
  sqcRZGate(q, -1.0395457164064876, 8);
  sqcRYGate(q, 3.141542822000369, 9);
  sqcRZGate(q, -3.138295090115494, 9);
  sqcRYGate(q, -1.7133050557838203e-05, 10);
  sqcRZGate(q, -0.9943947716983259, 10);
  sqcRYGate(q, 1.5707131033682433, 11);
  sqcRZGate(q, -0.14319562186412452, 11);

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
