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

  sqcRYGate(q, -1.8346050671361238, 0);
  sqcRZGate(q, -0.003079145870630739, 0);
  sqcRYGate(q, 0.5947312178415645, 1);
  sqcRZGate(q, 0.10399178784903995, 1);
  sqcRYGate(q, -0.9082144954831586, 2);
  sqcRZGate(q, 1.5042011383502227, 2);
  sqcRYGate(q, -1.6645549149670877, 3);
  sqcRZGate(q, -2.2217978123929876, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8953265593028094, 0);
  sqcRZGate(q, -1.133517243939922, 0);
  sqcRYGate(q, -0.6734335544788657, 1);
  sqcRZGate(q, -2.461072949546944, 1);
  sqcRYGate(q, 0.37108316161001276, 2);
  sqcRZGate(q, 2.448886792816468, 2);
  sqcRYGate(q, 0.5380164455493144, 3);
  sqcRZGate(q, 3.001043827229892, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7542718759966842, 0);
  sqcRZGate(q, 0.02634196887743066, 0);
  sqcRYGate(q, -2.54221756363679, 1);
  sqcRZGate(q, -2.1395413680807103, 1);
  sqcRYGate(q, 0.2027899025435502, 2);
  sqcRZGate(q, 2.18727677121227, 2);
  sqcRYGate(q, -1.496532567315705, 3);
  sqcRZGate(q, -2.8792625053754928, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3757199181913782, 0);
  sqcRZGate(q, 1.3436417301600807, 0);
  sqcRYGate(q, 2.186241405139723, 1);
  sqcRZGate(q, -2.6681885124652043, 1);
  sqcRYGate(q, 2.585040944106695, 2);
  sqcRZGate(q, -0.4491060967334606, 2);
  sqcRYGate(q, 0.07294622252661474, 3);
  sqcRZGate(q, 2.2806365848143986, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.853636719530376, 0);
  sqcRZGate(q, -0.20777485599600976, 0);
  sqcRYGate(q, -0.3745858883511452, 1);
  sqcRZGate(q, -0.22498151136592168, 1);
  sqcRYGate(q, 0.014333643251899453, 2);
  sqcRZGate(q, 1.6328705552916807, 2);
  sqcRYGate(q, -0.3168806985010626, 3);
  sqcRZGate(q, -2.7452864922559885, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.157106974899662, 0);
  sqcRZGate(q, -1.5195718696005693, 0);
  sqcRYGate(q, 2.072467780477864, 1);
  sqcRZGate(q, 2.5273741796513502, 1);
  sqcRYGate(q, -1.574702854688336, 2);
  sqcRZGate(q, 0.20575782248545177, 2);
  sqcRYGate(q, 0.8841272859483791, 3);
  sqcRZGate(q, -1.2157949989918413, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.259054228858917, 0);
  sqcRZGate(q, 2.1203930705968213, 0);
  sqcRYGate(q, -3.125806216360191, 1);
  sqcRZGate(q, -1.0758384707437119, 1);
  sqcRYGate(q, 1.5596056838001058, 2);
  sqcRZGate(q, -2.941448622070863, 2);
  sqcRYGate(q, -2.4428915750239844, 3);
  sqcRZGate(q, -0.9621454126780941, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1287011234038067, 0);
  sqcRZGate(q, -1.9151552064698771, 0);
  sqcRYGate(q, -2.5197902500093132, 1);
  sqcRZGate(q, 1.6655505243584023, 1);
  sqcRYGate(q, -2.6948165376680073, 2);
  sqcRZGate(q, -2.218173607855542, 2);
  sqcRYGate(q, 0.2283632849814006, 3);
  sqcRZGate(q, -0.7093507219619761, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.872330428265441, 0);
  sqcRZGate(q, -2.1395743233577313, 0);
  sqcRYGate(q, -2.825250308445584, 1);
  sqcRZGate(q, 0.3309470398280302, 1);
  sqcRYGate(q, 2.141289694729063, 2);
  sqcRZGate(q, -1.565001814836536, 2);
  sqcRYGate(q, -1.9378344442630633, 3);
  sqcRZGate(q, -0.8662413227668464, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9594808436617943, 0);
  sqcRZGate(q, -2.7112715147243445, 0);
  sqcRYGate(q, -0.505195960288626, 1);
  sqcRZGate(q, 0.9374215229184149, 1);
  sqcRYGate(q, -2.8857737969495783, 2);
  sqcRZGate(q, -0.5089195094287229, 2);
  sqcRYGate(q, 2.4432156767643276, 3);
  sqcRZGate(q, 2.9559998154814426, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.062861486042829, 0);
  sqcRZGate(q, -0.2854089045395284, 0);
  sqcRYGate(q, -0.35461707106762574, 1);
  sqcRZGate(q, 1.7636842528580905, 1);
  sqcRYGate(q, -2.8049705422841464, 2);
  sqcRZGate(q, -2.991279986489225, 2);
  sqcRYGate(q, -0.02848908084559554, 3);
  sqcRZGate(q, 2.034411050317005, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.853619833153675, 0);
  sqcRZGate(q, 0.8177222966231286, 0);
  sqcRYGate(q, -0.7420292413672431, 1);
  sqcRZGate(q, 2.751886451013015, 1);
  sqcRYGate(q, -2.7762814521235692, 2);
  sqcRZGate(q, 2.9750771599597985, 2);
  sqcRYGate(q, 1.4527120732567353, 3);
  sqcRZGate(q, -0.7338100167692405, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.87385831876214, 0);
  sqcRZGate(q, 2.983183849910732, 0);
  sqcRYGate(q, 0.9102551152676231, 1);
  sqcRZGate(q, 1.6558493916381096, 1);
  sqcRYGate(q, -0.28942220736621826, 2);
  sqcRZGate(q, -2.2935492474891714, 2);
  sqcRYGate(q, 2.5621185960518673, 3);
  sqcRZGate(q, 2.802552222504956, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4803420493832419, 0);
  sqcRZGate(q, 2.8669582402860914, 0);
  sqcRYGate(q, 0.030964546054173696, 1);
  sqcRZGate(q, 2.329989600559325, 1);
  sqcRYGate(q, 0.7049706872509365, 2);
  sqcRZGate(q, 2.354862049679922, 2);
  sqcRYGate(q, -2.1015872935980133, 3);
  sqcRZGate(q, -1.5075978856679324, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.725877496632185, 0);
  sqcRZGate(q, -2.1304414412874597, 0);
  sqcRYGate(q, -1.5908215334873619, 1);
  sqcRZGate(q, -1.1261451567723286, 1);
  sqcRYGate(q, 1.0087707973778084, 2);
  sqcRZGate(q, 0.0021728980738611133, 2);
  sqcRYGate(q, -0.7265556289633633, 3);
  sqcRZGate(q, -0.2695876461441867, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.781598004529015, 0);
  sqcRZGate(q, -0.6328128570909799, 0);
  sqcRYGate(q, 1.4069961206994324, 1);
  sqcRZGate(q, -2.8343178502631323, 1);
  sqcRYGate(q, 3.0199760151430874, 2);
  sqcRZGate(q, -1.149090593483976, 2);
  sqcRYGate(q, -2.8728179957901703, 3);
  sqcRZGate(q, 0.6889185584783907, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0797573564212115, 0);
  sqcRZGate(q, -2.8908032137251904, 0);
  sqcRYGate(q, 2.1036796335941528, 1);
  sqcRZGate(q, -2.047865251015243, 1);
  sqcRYGate(q, 0.7458656063723081, 2);
  sqcRZGate(q, -0.23091566649071626, 2);
  sqcRYGate(q, 3.0204179907392503, 3);
  sqcRZGate(q, -0.30227872450198756, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3374856666121172, 0);
  sqcRZGate(q, -2.462907545256812, 0);
  sqcRYGate(q, 2.62275916684239, 1);
  sqcRZGate(q, -2.342653921795604, 1);
  sqcRYGate(q, 2.903490569844743, 2);
  sqcRZGate(q, 0.9878040226278154, 2);
  sqcRYGate(q, -0.7596510867242642, 3);
  sqcRZGate(q, -2.743655564757305, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1435966144427074, 0);
  sqcRZGate(q, 1.7440277708631253, 0);
  sqcRYGate(q, -0.9097573037483929, 1);
  sqcRZGate(q, 3.0336195438268674, 1);
  sqcRYGate(q, 2.1435854325834063, 2);
  sqcRZGate(q, 1.8003930291591703, 2);
  sqcRYGate(q, 0.8554329578873795, 3);
  sqcRZGate(q, 2.6785436020420392, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6748508767044612, 0);
  sqcRZGate(q, -2.5728412716980897, 0);
  sqcRYGate(q, 1.0091341957817779, 1);
  sqcRZGate(q, 0.49279627947533966, 1);
  sqcRYGate(q, -2.7598312940278578, 2);
  sqcRZGate(q, -0.21588851464210101, 2);
  sqcRYGate(q, -2.9422596354997226, 3);
  sqcRZGate(q, 2.8043750487374046, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7116820568280362, 0);
  sqcRZGate(q, -1.0972488000416183, 0);
  sqcRYGate(q, 2.3633847626239732, 1);
  sqcRZGate(q, -0.18915330756381812, 1);
  sqcRYGate(q, -2.1245637370859605, 2);
  sqcRZGate(q, 1.54557850275474, 2);
  sqcRYGate(q, -0.43061559501852487, 3);
  sqcRZGate(q, -1.6977662454579985, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.756078549567566, 0);
  sqcRZGate(q, -0.9423611741789482, 0);
  sqcRYGate(q, -2.1923619939217334, 1);
  sqcRZGate(q, -0.037425077764032366, 1);
  sqcRYGate(q, -0.5850837450769677, 2);
  sqcRZGate(q, -1.6739797215432883, 2);
  sqcRYGate(q, 0.19955334352474097, 3);
  sqcRZGate(q, -1.285157717001988, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.31587652970204816, 0);
  sqcRZGate(q, -1.8583084732913293, 0);
  sqcRYGate(q, -1.9664450050768574, 1);
  sqcRZGate(q, -0.27810839476177124, 1);
  sqcRYGate(q, 1.285931561228786, 2);
  sqcRZGate(q, -0.23753522722627185, 2);
  sqcRYGate(q, 2.0691165552724775, 3);
  sqcRZGate(q, 2.040352412448798, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1384920704436903, 0);
  sqcRZGate(q, -1.9839178533332396, 0);
  sqcRYGate(q, 0.48707818131989455, 1);
  sqcRZGate(q, -2.302948676159256, 1);
  sqcRYGate(q, -1.6173730882979873, 2);
  sqcRZGate(q, -1.352671130671836, 2);
  sqcRYGate(q, -0.08218057361398481, 3);
  sqcRZGate(q, -0.49923826761126994, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7503951865178635, 0);
  sqcRZGate(q, -2.7897476929299234, 0);
  sqcRYGate(q, -0.4250541677659459, 1);
  sqcRZGate(q, -0.8208178890699109, 1);
  sqcRYGate(q, -1.4019542863118195, 2);
  sqcRZGate(q, 0.8263576486366819, 2);
  sqcRYGate(q, -1.862986572232404, 3);
  sqcRZGate(q, -2.6408118819671715, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.038965773711449, 0);
  sqcRZGate(q, -3.1071081057769128, 0);
  sqcRYGate(q, -1.6089999380125075, 1);
  sqcRZGate(q, 2.6845638193121784, 1);
  sqcRYGate(q, -0.6949030143911877, 2);
  sqcRZGate(q, -1.2927279044749582, 2);
  sqcRYGate(q, -2.1165524371910545, 3);
  sqcRZGate(q, 1.7015798098300374, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.815698975192706, 0);
  sqcRZGate(q, -1.0401633428247896, 0);
  sqcRYGate(q, 0.3761846031150613, 1);
  sqcRZGate(q, -0.8645861130612326, 1);
  sqcRYGate(q, -0.22039609736696253, 2);
  sqcRZGate(q, -2.678715816462576, 2);
  sqcRYGate(q, -2.2608208621909354, 3);
  sqcRZGate(q, -0.09910423050829922, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.428652865713141, 0);
  sqcRZGate(q, -1.4707948666529855, 0);
  sqcRYGate(q, -1.8976308797575863, 1);
  sqcRZGate(q, -1.176613948818641, 1);
  sqcRYGate(q, 0.7758458093800514, 2);
  sqcRZGate(q, -1.1766286313255916, 2);
  sqcRYGate(q, -1.9683164483833178, 3);
  sqcRZGate(q, -1.5585572986057308, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3024810548623935, 0);
  sqcRZGate(q, 2.118078103623807, 0);
  sqcRYGate(q, 2.9817942464957903, 1);
  sqcRZGate(q, -1.9734577828398379, 1);
  sqcRYGate(q, 2.0355076106229393, 2);
  sqcRZGate(q, 1.41547888847178, 2);
  sqcRYGate(q, -2.9752469794922116, 3);
  sqcRZGate(q, 0.41199374242784864, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.715705038528278, 0);
  sqcRZGate(q, -0.03265546408839389, 0);
  sqcRYGate(q, 0.7235425507197633, 1);
  sqcRZGate(q, 0.8031551840134996, 1);
  sqcRYGate(q, 2.246242710035682, 2);
  sqcRZGate(q, 1.1051874472416396, 2);
  sqcRYGate(q, -2.128089658226198, 3);
  sqcRZGate(q, 2.6773453890601795, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2073481920243685, 0);
  sqcRZGate(q, 0.2560329534478232, 0);
  sqcRYGate(q, 0.4568809170099907, 1);
  sqcRZGate(q, 3.0358059020926396, 1);
  sqcRYGate(q, 0.7977594009007304, 2);
  sqcRZGate(q, 0.34806627562374715, 2);
  sqcRYGate(q, 2.8295825586819627, 3);
  sqcRZGate(q, -0.05453617726903791, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.475254972266838, 0);
  sqcRZGate(q, -1.9572575219498531, 0);
  sqcRYGate(q, 1.885655479789997, 1);
  sqcRZGate(q, 1.1546065496402915, 1);
  sqcRYGate(q, -2.8104792824025804, 2);
  sqcRZGate(q, -1.4301895000182885, 2);
  sqcRYGate(q, -1.0380566337529702, 3);
  sqcRZGate(q, -0.8728275420643486, 3);

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
