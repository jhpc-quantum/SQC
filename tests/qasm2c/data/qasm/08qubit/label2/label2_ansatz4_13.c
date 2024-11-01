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

  sqcRYGate(q, 0.17445934356208145, 0);
  sqcRZGate(q, 1.5044992953563074, 0);
  sqcRYGate(q, -0.3900339450528545, 1);
  sqcRZGate(q, -0.6964456046048078, 1);
  sqcRYGate(q, -1.298580357921951, 2);
  sqcRZGate(q, -0.5204065224613821, 2);
  sqcRYGate(q, 2.1624751945193585, 3);
  sqcRZGate(q, 0.054943418213246, 3);
  sqcRYGate(q, -1.3630956477219014, 4);
  sqcRZGate(q, -2.3734751336585957, 4);
  sqcRYGate(q, -1.603631711527032, 5);
  sqcRZGate(q, 0.41490248099379573, 5);
  sqcRYGate(q, 1.5618181322506866, 6);
  sqcRZGate(q, -1.5812996957734873, 6);
  sqcRYGate(q, 0.0687639266433957, 7);
  sqcRZGate(q, 0.5850633741839539, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.120438571117031, 0);
  sqcRZGate(q, -1.6483339099688787, 0);
  sqcRYGate(q, 2.07030525918326, 1);
  sqcRZGate(q, 1.1566896088950727, 1);
  sqcRYGate(q, 9.25191957374949e-05, 2);
  sqcRZGate(q, 1.8020294915745858, 2);
  sqcRYGate(q, -0.0001395828643096825, 3);
  sqcRZGate(q, 3.052709978452311, 3);
  sqcRYGate(q, 0.0017314195147721853, 4);
  sqcRZGate(q, -2.6853809217956, 4);
  sqcRYGate(q, 0.0014151674230420046, 5);
  sqcRZGate(q, 0.29558214667796534, 5);
  sqcRYGate(q, 1.5959638233658042, 6);
  sqcRZGate(q, 1.5079985488990602, 6);
  sqcRYGate(q, 0.018664624580050138, 7);
  sqcRZGate(q, 0.7309589416522985, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4675677669851976, 0);
  sqcRZGate(q, -0.02301032508846745, 0);
  sqcRYGate(q, -0.5839122367175682, 1);
  sqcRZGate(q, 2.0702020217428565, 1);
  sqcRYGate(q, 0.44807769324918995, 2);
  sqcRZGate(q, -0.4007904529793401, 2);
  sqcRYGate(q, -0.6142563070928019, 3);
  sqcRZGate(q, 1.8735745566459066, 3);
  sqcRYGate(q, 1.281073091952643, 4);
  sqcRZGate(q, -1.9348398992357578, 4);
  sqcRYGate(q, -2.6669710664583652, 5);
  sqcRZGate(q, 2.5760683741986035, 5);
  sqcRYGate(q, 1.7688496678129786, 6);
  sqcRZGate(q, -1.5315969122160935, 6);
  sqcRYGate(q, 1.4792539449603104, 7);
  sqcRZGate(q, 0.7254795868357808, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6601007276918591, 0);
  sqcRZGate(q, -2.392184052070508, 0);
  sqcRYGate(q, 1.0744277295692755, 1);
  sqcRZGate(q, -2.0146253370697615, 1);
  sqcRYGate(q, 0.010868248666752811, 2);
  sqcRZGate(q, 2.7054410251389727, 2);
  sqcRYGate(q, 0.02876295683177066, 3);
  sqcRZGate(q, -3.0462823454119152, 3);
  sqcRYGate(q, -3.138263567153645, 4);
  sqcRZGate(q, -1.577201594151341, 4);
  sqcRYGate(q, -0.0017654899931764945, 5);
  sqcRZGate(q, 1.4438707041969634, 5);
  sqcRYGate(q, -0.3115851565769416, 6);
  sqcRZGate(q, -1.143325270196871, 6);
  sqcRYGate(q, -2.6304568549333145, 7);
  sqcRZGate(q, -1.3207014381991105, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.3173276135667136, 0);
  sqcRZGate(q, -2.7584955063539685, 0);
  sqcRYGate(q, -0.9079665631837806, 1);
  sqcRZGate(q, 0.4780552597249776, 1);
  sqcRYGate(q, 2.301633610569865, 2);
  sqcRZGate(q, 1.5995995441895159, 2);
  sqcRYGate(q, 2.8844764801918914, 3);
  sqcRZGate(q, -3.1269908273700957, 3);
  sqcRYGate(q, 2.1522234012368093, 4);
  sqcRZGate(q, 0.0835311232166376, 4);
  sqcRYGate(q, 3.131908036831508, 5);
  sqcRZGate(q, -0.7327926839765359, 5);
  sqcRYGate(q, -3.0071105883836013, 6);
  sqcRZGate(q, 2.515036090193034, 6);
  sqcRYGate(q, 0.6279525554633674, 7);
  sqcRZGate(q, -1.1590090252441225, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.3636642705267512, 0);
  sqcRZGate(q, -3.022796879709273, 0);
  sqcRYGate(q, 1.9815722709074652, 1);
  sqcRZGate(q, -0.22646202057774525, 1);
  sqcRYGate(q, 0.00033148163130825026, 2);
  sqcRZGate(q, 2.8079467246554817, 2);
  sqcRYGate(q, -3.1414725182036998, 3);
  sqcRZGate(q, -1.3424018802543056, 3);
  sqcRYGate(q, 0.0014498171968299663, 4);
  sqcRZGate(q, -2.0411026109846997, 4);
  sqcRYGate(q, -0.0018273693525556222, 5);
  sqcRZGate(q, 0.8649600698067205, 5);
  sqcRYGate(q, 3.0962001439532294, 6);
  sqcRZGate(q, -2.7203388024192154, 6);
  sqcRYGate(q, -3.029516115342598, 7);
  sqcRZGate(q, -0.15390749693633946, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.048884054244486594, 0);
  sqcRZGate(q, 1.227220385768792, 0);
  sqcRYGate(q, -2.8437976953664443, 1);
  sqcRZGate(q, -1.4884652511365104, 1);
  sqcRYGate(q, -1.0248216993363704, 2);
  sqcRZGate(q, 1.544023444194503, 2);
  sqcRYGate(q, -0.5945072129076135, 3);
  sqcRZGate(q, 1.3479238970195127, 3);
  sqcRYGate(q, 0.9465593301106777, 4);
  sqcRZGate(q, -2.550268194534154, 4);
  sqcRYGate(q, 0.9529969487075971, 5);
  sqcRZGate(q, -2.3122631125467867, 5);
  sqcRYGate(q, -0.3532820433166464, 6);
  sqcRZGate(q, -1.635982956404559, 6);
  sqcRYGate(q, -1.1083212560345241, 7);
  sqcRZGate(q, 2.997356675994468, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.2557906516431153, 0);
  sqcRZGate(q, -0.42343045121987405, 0);
  sqcRYGate(q, -0.6202914009917624, 1);
  sqcRZGate(q, 1.098865895308446, 1);
  sqcRYGate(q, -2.3384234149767074, 2);
  sqcRZGate(q, 3.0727476830867384, 2);
  sqcRYGate(q, 2.6093514463016145, 3);
  sqcRZGate(q, -0.12894640573832739, 3);
  sqcRYGate(q, -3.137848758486876, 4);
  sqcRZGate(q, 0.02743189167688076, 4);
  sqcRYGate(q, 3.137345947577256, 5);
  sqcRZGate(q, -2.4740786576256473, 5);
  sqcRYGate(q, -3.010341172630227, 6);
  sqcRZGate(q, 1.606450149299942, 6);
  sqcRYGate(q, 0.49329604519624143, 7);
  sqcRZGate(q, -2.547226787793734, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.45828067935136063, 0);
  sqcRZGate(q, -0.9999977134196031, 0);
  sqcRYGate(q, 2.3525225035606536, 1);
  sqcRZGate(q, 0.12750200177576418, 1);
  sqcRYGate(q, 1.4721563607048767, 2);
  sqcRZGate(q, -0.08457202133197761, 2);
  sqcRYGate(q, 2.3688300402047227, 3);
  sqcRZGate(q, 0.6673045571651969, 3);
  sqcRYGate(q, -0.007784378966062927, 4);
  sqcRZGate(q, 2.5948538277587736, 4);
  sqcRYGate(q, 2.8926627646184238, 5);
  sqcRZGate(q, 0.009623309750594444, 5);
  sqcRYGate(q, 1.157291419428219, 6);
  sqcRZGate(q, -0.06288276750740102, 6);
  sqcRYGate(q, 0.31439244399579724, 7);
  sqcRZGate(q, -1.7396290883190408, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6048184616616732, 0);
  sqcRZGate(q, 3.0998286353790623, 0);
  sqcRYGate(q, 0.6603344441603909, 1);
  sqcRZGate(q, 1.4043671991544593, 1);
  sqcRYGate(q, -1.8350199122847872, 2);
  sqcRZGate(q, -0.5873737507519096, 2);
  sqcRYGate(q, 1.5723231202326762, 3);
  sqcRZGate(q, 2.2960712550088487, 3);
  sqcRYGate(q, -1.5688697427926641, 4);
  sqcRZGate(q, 3.0823906908113723, 4);
  sqcRYGate(q, -1.5673104792725265, 5);
  sqcRZGate(q, 3.072300793311758, 5);
  sqcRYGate(q, 1.495452575551604, 6);
  sqcRZGate(q, 1.8179884829642186, 6);
  sqcRYGate(q, -1.629162333347098, 7);
  sqcRZGate(q, -1.5244690267177006, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.5976801042354467, 0);
  sqcRZGate(q, -2.4619287160452346, 0);
  sqcRYGate(q, 0.546078580565283, 1);
  sqcRZGate(q, -2.506176843657427, 1);
  sqcRYGate(q, 2.4080878982974485, 2);
  sqcRZGate(q, 2.1548012506498146, 2);
  sqcRYGate(q, -0.9804921872567771, 3);
  sqcRZGate(q, 2.6872064652027583, 3);
  sqcRYGate(q, -1.5724188633453005, 4);
  sqcRZGate(q, 2.2627740568538224, 4);
  sqcRYGate(q, -1.57483726338788, 5);
  sqcRZGate(q, -0.8758141532861901, 5);
  sqcRYGate(q, -1.474530566122586, 6);
  sqcRZGate(q, 1.2515503254189444, 6);
  sqcRYGate(q, -2.7537999797903807, 7);
  sqcRZGate(q, -1.8233200129101705, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.23966782060129888, 0);
  sqcRZGate(q, -3.048950525332431, 0);
  sqcRYGate(q, 2.9013073054992926, 1);
  sqcRZGate(q, 2.298484152469242, 1);
  sqcRYGate(q, 1.3897455908418772, 2);
  sqcRZGate(q, 1.2393837604321138, 2);
  sqcRYGate(q, -1.9703291312777091, 3);
  sqcRZGate(q, -0.08967147026624528, 3);
  sqcRYGate(q, 3.0606215423627425, 4);
  sqcRZGate(q, -1.9419596134703871, 4);
  sqcRYGate(q, 0.0917095920044592, 5);
  sqcRZGate(q, -2.2560333383312017, 5);
  sqcRYGate(q, -0.27367415282202134, 6);
  sqcRZGate(q, 1.8257759211596882, 6);
  sqcRYGate(q, -1.6891377281346476, 7);
  sqcRZGate(q, 0.025318518409844337, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1315106842260083, 0);
  sqcRZGate(q, 0.4737993106426881, 0);
  sqcRYGate(q, -3.035687681345126, 1);
  sqcRZGate(q, 3.1006096715455485, 1);
  sqcRYGate(q, -1.6513508984944114, 2);
  sqcRZGate(q, 2.6817099087742413, 2);
  sqcRYGate(q, 3.102366216803053, 3);
  sqcRZGate(q, 2.7703623341608092, 3);
  sqcRYGate(q, 0.35703072016516213, 4);
  sqcRZGate(q, -0.42047977324006336, 4);
  sqcRYGate(q, 1.7611447652599113, 5);
  sqcRZGate(q, -1.1123079866160266, 5);
  sqcRYGate(q, -1.129783113790169, 6);
  sqcRZGate(q, -1.2273056557538728, 6);
  sqcRYGate(q, -1.2350734210686367, 7);
  sqcRZGate(q, -1.7675289822515916, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.735152874240562, 0);
  sqcRZGate(q, 0.3007569712837208, 0);
  sqcRYGate(q, -0.6330337502815846, 1);
  sqcRZGate(q, -2.2061167804957735, 1);
  sqcRYGate(q, -3.1225586872434667, 2);
  sqcRZGate(q, -1.8845730766556503, 2);
  sqcRYGate(q, 0.004896947452915471, 3);
  sqcRZGate(q, -0.6903619052902057, 3);
  sqcRYGate(q, 2.012726688335145, 4);
  sqcRZGate(q, -2.784330052665955, 4);
  sqcRYGate(q, -1.024296092634834, 5);
  sqcRZGate(q, -2.9972069351837285, 5);
  sqcRYGate(q, -1.4003339099989531, 6);
  sqcRZGate(q, 0.6310269980846084, 6);
  sqcRYGate(q, -1.411462857110008, 7);
  sqcRZGate(q, -0.9419244557099793, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.053210320671364, 0);
  sqcRZGate(q, 1.2048020187092152, 0);
  sqcRYGate(q, 2.031427247803797, 1);
  sqcRZGate(q, 0.15749751316651395, 1);
  sqcRYGate(q, -0.008671434382781729, 2);
  sqcRZGate(q, -0.8093531176705939, 2);
  sqcRYGate(q, 0.009717072085068614, 3);
  sqcRZGate(q, -1.9688635798844742, 3);
  sqcRYGate(q, 0.15100803225077986, 4);
  sqcRZGate(q, -2.1226134977629627, 4);
  sqcRYGate(q, -1.7989750509433051, 5);
  sqcRZGate(q, -0.08629170750528381, 5);
  sqcRYGate(q, -3.1335325291640133, 6);
  sqcRZGate(q, -1.6047350426926874, 6);
  sqcRYGate(q, -3.1169221783020276, 7);
  sqcRZGate(q, 0.7244939036064457, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.0725604459736887, 0);
  sqcRZGate(q, 3.091285748978876, 0);
  sqcRYGate(q, -2.0050964707683505, 1);
  sqcRZGate(q, -2.038983776623346, 1);
  sqcRYGate(q, -0.002557842964843182, 2);
  sqcRZGate(q, 0.3811090176994325, 2);
  sqcRYGate(q, 0.004897602135575774, 3);
  sqcRZGate(q, -0.5948826938442346, 3);
  sqcRYGate(q, -0.7517830744696189, 4);
  sqcRZGate(q, -1.073536934026861, 4);
  sqcRYGate(q, 0.9064638482628782, 5);
  sqcRZGate(q, -3.0649460330789, 5);
  sqcRYGate(q, 0.03461631664279263, 6);
  sqcRZGate(q, -2.043582978192199, 6);
  sqcRYGate(q, -3.1154047601511765, 7);
  sqcRZGate(q, 0.5551878565583913, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7317685822674698, 0);
  sqcRZGate(q, -1.5550267794423946, 0);
  sqcRYGate(q, -2.6434629326000185, 1);
  sqcRZGate(q, -1.495393219601855, 1);
  sqcRYGate(q, 3.040559304174655, 2);
  sqcRZGate(q, -0.35116038297690755, 2);
  sqcRYGate(q, -2.981829451365138, 3);
  sqcRZGate(q, 2.832873458513637, 3);
  sqcRYGate(q, 1.1225255132522864, 4);
  sqcRZGate(q, 3.127424854613845, 4);
  sqcRYGate(q, 0.6134460042913252, 5);
  sqcRZGate(q, 1.3041749662261104, 5);
  sqcRYGate(q, -2.455818312581087, 6);
  sqcRZGate(q, 0.20952544416825203, 6);
  sqcRYGate(q, 2.438426967013344, 7);
  sqcRZGate(q, -2.9172672121746293, 7);

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
