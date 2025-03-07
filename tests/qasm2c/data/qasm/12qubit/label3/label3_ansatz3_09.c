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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -1.5584624638005886, 0);
  sqcRZGate(q, 2.7729828021699006, 0);
  sqcRYGate(q, -2.777729370279623, 1);
  sqcRZGate(q, -2.099567659004098, 1);
  sqcRYGate(q, 1.5702409587366821, 2);
  sqcRZGate(q, 1.572325309298099, 2);
  sqcRYGate(q, 3.1410540763264003, 3);
  sqcRZGate(q, 1.9848797582341215, 3);
  sqcRYGate(q, -1.3346353893705771, 4);
  sqcRZGate(q, 2.562778325411608, 4);
  sqcRYGate(q, 1.591378834309154e-05, 5);
  sqcRZGate(q, 3.1308131806284387, 5);
  sqcRYGate(q, 1.570855164658087, 6);
  sqcRZGate(q, 1.570625430068854, 6);
  sqcRYGate(q, 4.283148973137937e-05, 7);
  sqcRZGate(q, -2.2081611088744717, 7);
  sqcRYGate(q, -3.1415054402103295, 8);
  sqcRZGate(q, 0.004797810275005118, 8);
  sqcRYGate(q, 0.2799841475286776, 9);
  sqcRZGate(q, -1.8469964557883571, 9);
  sqcRYGate(q, -1.9206757051707872, 10);
  sqcRZGate(q, 3.108446085934609, 10);
  sqcRYGate(q, 1.544787436425586, 11);
  sqcRZGate(q, 1.8221322791178667, 11);
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
  sqcRYGate(q, -3.140183613770428, 0);
  sqcRZGate(q, -2.0349676631744167, 0);
  sqcRYGate(q, 0.3353820137013024, 1);
  sqcRZGate(q, -0.02377145194772748, 1);
  sqcRYGate(q, 1.585362144936548, 2);
  sqcRZGate(q, 0.0010020539522181265, 2);
  sqcRYGate(q, 0.0008630748791682653, 3);
  sqcRZGate(q, 1.2067495245347628, 3);
  sqcRYGate(q, -1.4190278086752703, 4);
  sqcRZGate(q, -2.279883930728304, 4);
  sqcRYGate(q, 1.570731698360218, 5);
  sqcRZGate(q, 2.0665935907541266, 5);
  sqcRYGate(q, -1.6254859521021559, 6);
  sqcRZGate(q, -1.0046894050930177e-05, 6);
  sqcRYGate(q, -1.5708006666621293, 7);
  sqcRZGate(q, -0.00018545803599323563, 7);
  sqcRYGate(q, 1.50180954313561, 8);
  sqcRZGate(q, -0.33655178600955704, 8);
  sqcRYGate(q, 1.5826785996306993, 9);
  sqcRZGate(q, -1.4057720615805922, 9);
  sqcRYGate(q, 3.0494344641612634, 10);
  sqcRZGate(q, 2.1983595220791496, 10);
  sqcRYGate(q, -1.3081315258639847, 11);
  sqcRZGate(q, 1.6151085427609566, 11);
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
  sqcRYGate(q, -1.581821613705939, 0);
  sqcRZGate(q, -0.5630536672257445, 0);
  sqcRYGate(q, -0.49783717870594807, 1);
  sqcRZGate(q, -1.1922388035964255, 1);
  sqcRYGate(q, 0.034232507065398265, 2);
  sqcRZGate(q, -1.5920948356786109, 2);
  sqcRYGate(q, -0.0005903955173574005, 3);
  sqcRZGate(q, 1.2347904857401186, 3);
  sqcRYGate(q, 3.1415146518236505, 4);
  sqcRZGate(q, 0.8609445731136819, 4);
  sqcRYGate(q, -8.329635080350783e-05, 5);
  sqcRZGate(q, -2.0667294213771896, 5);
  sqcRYGate(q, 1.571391808476858, 6);
  sqcRZGate(q, -3.0993791018605936, 6);
  sqcRYGate(q, 1.571392410656227, 7);
  sqcRZGate(q, 1.5636852940174806, 7);
  sqcRYGate(q, -3.1412943057145917, 8);
  sqcRZGate(q, -2.206252009472774, 8);
  sqcRYGate(q, 0.003094407634511853, 9);
  sqcRZGate(q, -0.2526807811663318, 9);
  sqcRYGate(q, 0.017416009047968493, 10);
  sqcRZGate(q, -2.2597552977129727, 10);
  sqcRYGate(q, -0.27560990500962035, 11);
  sqcRZGate(q, -2.511856297314377, 11);
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
  sqcRYGate(q, -3.13368845548542, 0);
  sqcRZGate(q, -2.473260021290728, 0);
  sqcRYGate(q, -1.1359291122718398, 1);
  sqcRZGate(q, -0.03584451467683283, 1);
  sqcRYGate(q, 1.5636063474930502, 2);
  sqcRZGate(q, -2.151557247523714, 2);
  sqcRYGate(q, -3.14130195907248, 3);
  sqcRZGate(q, -0.4052575611389538, 3);
  sqcRYGate(q, -1.57087979842367, 4);
  sqcRZGate(q, 1.57078917880221, 4);
  sqcRYGate(q, 1.5729934174791866, 5);
  sqcRZGate(q, -3.066704696703113, 5);
  sqcRYGate(q, -0.007678265163636233, 6);
  sqcRZGate(q, 3.098387589740431, 6);
  sqcRYGate(q, -1.530863450748174, 7);
  sqcRZGate(q, 1.5944344313136494, 7);
  sqcRYGate(q, 0.0011677726626616054, 8);
  sqcRZGate(q, -1.6238929158752518, 8);
  sqcRYGate(q, 1.5579634951898633, 9);
  sqcRZGate(q, -1.5603401903292373, 9);
  sqcRYGate(q, 1.5601183240267573, 10);
  sqcRZGate(q, 1.6926982956857843, 10);
  sqcRYGate(q, 2.7914360776816753, 11);
  sqcRZGate(q, -2.496083115389374, 11);
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
  sqcRYGate(q, -3.1386299523557386, 0);
  sqcRZGate(q, -1.9126461788469553, 0);
  sqcRYGate(q, -1.7208719031893505, 1);
  sqcRZGate(q, 0.5453228517067545, 1);
  sqcRYGate(q, 3.1407910092221707, 2);
  sqcRZGate(q, 2.8313334050294783, 2);
  sqcRYGate(q, -2.974361872291284, 3);
  sqcRZGate(q, 2.733179571946017, 3);
  sqcRYGate(q, 1.5708327600463539, 4);
  sqcRZGate(q, -0.40405178847651246, 4);
  sqcRYGate(q, 1.553929071729243e-05, 5);
  sqcRZGate(q, -1.5011634171629993, 5);
  sqcRYGate(q, 1.8221692145995132, 6);
  sqcRZGate(q, 1.5946269245987887, 6);
  sqcRYGate(q, 3.090866665824571, 7);
  sqcRZGate(q, 0.015424082214012815, 7);
  sqcRYGate(q, 0.00026802326396915306, 8);
  sqcRZGate(q, -2.8214659329811584, 8);
  sqcRYGate(q, -3.0803961743729498, 9);
  sqcRZGate(q, 1.1618932331195782, 9);
  sqcRYGate(q, -0.0014246091797014415, 10);
  sqcRZGate(q, -1.8728771411154632, 10);
  sqcRYGate(q, 1.790287110729681, 11);
  sqcRZGate(q, -0.5586093176825274, 11);
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
  sqcRYGate(q, 1.5706803977407047, 0);
  sqcRZGate(q, -1.5716211060916527, 0);
  sqcRYGate(q, 0.7863040170516724, 1);
  sqcRZGate(q, -0.03193586507001508, 1);
  sqcRYGate(q, -1.571485579889413, 2);
  sqcRZGate(q, 2.8394464684030765, 2);
  sqcRYGate(q, -0.0004869995533526507, 3);
  sqcRZGate(q, -2.744181288778787, 3);
  sqcRYGate(q, -1.4596585057091717e-05, 4);
  sqcRZGate(q, 1.7779066092572329, 4);
  sqcRYGate(q, -6.373839019868653e-05, 5);
  sqcRZGate(q, 2.6483284158989155, 5);
  sqcRYGate(q, 0.054848040630086026, 6);
  sqcRZGate(q, 2.8757601481454285, 6);
  sqcRYGate(q, 1.5446305191631626, 7);
  sqcRZGate(q, 0.15709006224919617, 7);
  sqcRYGate(q, 1.5709751307069146, 8);
  sqcRZGate(q, 1.376556960655046, 8);
  sqcRYGate(q, 3.0659661363543105, 9);
  sqcRZGate(q, -1.3898090555074107, 9);
  sqcRYGate(q, -2.988977996404904, 10);
  sqcRZGate(q, 2.054252699054202, 10);
  sqcRYGate(q, 0.510086659157257, 11);
  sqcRZGate(q, 0.7921601417406281, 11);
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
  sqcRYGate(q, 0.3307909342435833, 0);
  sqcRZGate(q, -1.570404269078602, 0);
  sqcRYGate(q, 3.137485167205178, 1);
  sqcRZGate(q, -2.066865105984072, 1);
  sqcRYGate(q, -1.5682623855254834, 2);
  sqcRZGate(q, 1.5679921232166079, 2);
  sqcRYGate(q, 1.5695082149341772, 3);
  sqcRZGate(q, 1.6729922480199608, 3);
  sqcRYGate(q, 0.4717520550352016, 4);
  sqcRZGate(q, -0.7640547063113143, 4);
  sqcRYGate(q, 4.620300765625477e-05, 5);
  sqcRZGate(q, 2.9526852798126515, 5);
  sqcRYGate(q, 2.1889892079096276, 6);
  sqcRZGate(q, 0.620197167505891, 6);
  sqcRYGate(q, 1.5206737778117079, 7);
  sqcRZGate(q, 1.6285735119619744, 7);
  sqcRYGate(q, -0.00011390731162735315, 8);
  sqcRZGate(q, 1.0261363981652059, 8);
  sqcRYGate(q, -0.06347217600769758, 9);
  sqcRZGate(q, 2.545822903349124, 9);
  sqcRYGate(q, 1.6165344042219931, 10);
  sqcRZGate(q, 1.6382606865605602, 10);
  sqcRYGate(q, -0.24375986190407595, 11);
  sqcRZGate(q, 2.096806042625266, 11);
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
  sqcRYGate(q, -1.5728392304190477, 0);
  sqcRZGate(q, 1.7992890173852858, 0);
  sqcRYGate(q, 1.6209954597694263, 1);
  sqcRZGate(q, -1.587721539448374, 1);
  sqcRYGate(q, 0.49341253271405605, 2);
  sqcRZGate(q, -1.8547791026598341, 2);
  sqcRYGate(q, 1.3204468963635494, 3);
  sqcRZGate(q, -3.021396696584487, 3);
  sqcRYGate(q, 0.0005778471061477219, 4);
  sqcRZGate(q, -2.4244845983109538, 4);
  sqcRYGate(q, -3.1403711734752404, 5);
  sqcRZGate(q, 2.1638322339168465, 5);
  sqcRYGate(q, 0.0005997546115154809, 6);
  sqcRZGate(q, -1.0171188428669393, 6);
  sqcRYGate(q, 0.0006930752841407539, 7);
  sqcRZGate(q, 2.8040054635831044, 7);
  sqcRYGate(q, 0.0009976795326076045, 8);
  sqcRZGate(q, 2.133847664290273, 8);
  sqcRYGate(q, -1.5702088003511223, 9);
  sqcRZGate(q, 3.13313579610427, 9);
  sqcRYGate(q, 1.6074336569847152, 10);
  sqcRZGate(q, -0.1558615252856576, 10);
  sqcRYGate(q, -0.0792596099327029, 11);
  sqcRZGate(q, 2.0162647012455053, 11);
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
  sqcRYGate(q, 3.141549938706471, 0);
  sqcRZGate(q, 0.12214326527555919, 0);
  sqcRYGate(q, 1.5699447259404513, 1);
  sqcRZGate(q, 1.5943744674828024, 1);
  sqcRYGate(q, -3.138439902956282, 2);
  sqcRZGate(q, 1.2870737233078131, 2);
  sqcRYGate(q, -3.085773291335743, 3);
  sqcRZGate(q, 0.05514670632349539, 3);
  sqcRYGate(q, -0.5305908686201162, 4);
  sqcRZGate(q, 1.8073898729247468, 4);
  sqcRYGate(q, 1.57021657067998, 5);
  sqcRZGate(q, -1.1996158491463946, 5);
  sqcRYGate(q, 2.485582001847046, 6);
  sqcRZGate(q, 0.042310989120263036, 6);
  sqcRYGate(q, 2.120864577270013, 7);
  sqcRZGate(q, 2.7118306386030855, 7);
  sqcRYGate(q, -3.134749267727754, 8);
  sqcRZGate(q, 0.3205910241841554, 8);
  sqcRYGate(q, -2.910384187687353, 9);
  sqcRZGate(q, -0.8091807744602222, 9);
  sqcRYGate(q, 0.8603625216237027, 10);
  sqcRZGate(q, -0.16820293128013206, 10);
  sqcRYGate(q, 1.5607983559884082, 11);
  sqcRZGate(q, 1.570041459391815, 11);
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
  sqcRYGate(q, -0.00014885654421464443, 0);
  sqcRZGate(q, -0.9891254438964568, 0);
  sqcRYGate(q, -1.571610699843336, 1);
  sqcRZGate(q, 1.9297433949916272, 1);
  sqcRYGate(q, -1.1372142198974409, 2);
  sqcRZGate(q, -2.744496379700317, 2);
  sqcRYGate(q, -1.5709152711116219, 3);
  sqcRZGate(q, -0.18228978085195036, 3);
  sqcRYGate(q, 1.5707802804461877, 4);
  sqcRZGate(q, -0.43906141868550863, 4);
  sqcRYGate(q, 0.0006761176583358619, 5);
  sqcRZGate(q, -1.9500364530794598, 5);
  sqcRYGate(q, -3.141247819532443, 6);
  sqcRZGate(q, 1.0585420246020047, 6);
  sqcRYGate(q, -3.1415699461587616, 7);
  sqcRZGate(q, 2.9677844956443735, 7);
  sqcRYGate(q, 0.00019124429473152272, 8);
  sqcRZGate(q, 2.360411240015911, 8);
  sqcRYGate(q, 3.141285530992855, 9);
  sqcRZGate(q, -0.804687763857391, 9);
  sqcRYGate(q, -1.5678977145463229, 10);
  sqcRZGate(q, 1.5686762606384141, 10);
  sqcRYGate(q, 1.5702362319569438, 11);
  sqcRZGate(q, -1.5000358512544831, 11);
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
  sqcRYGate(q, -0.02320667902301732, 0);
  sqcRZGate(q, 2.6033623853474777, 0);
  sqcRYGate(q, -1.5706224450825612, 1);
  sqcRZGate(q, -2.4187774263096014, 1);
  sqcRYGate(q, 1.5707212517484457, 2);
  sqcRZGate(q, -1.604219637250588, 2);
  sqcRYGate(q, -3.1259549237181177, 3);
  sqcRZGate(q, -1.7528951698065747, 3);
  sqcRYGate(q, -3.140808460944488, 4);
  sqcRZGate(q, 2.7029420660468655, 4);
  sqcRYGate(q, -0.06083327435465513, 5);
  sqcRZGate(q, -2.4876158277370934, 5);
  sqcRYGate(q, 3.141508672654473, 6);
  sqcRZGate(q, 0.49179082589696366, 6);
  sqcRYGate(q, 2.2228509992626106, 7);
  sqcRZGate(q, -1.8139984214853406, 7);
  sqcRYGate(q, -3.110665213773212, 8);
  sqcRZGate(q, -2.662712976544259, 8);
  sqcRYGate(q, -1.5690542320782517, 9);
  sqcRZGate(q, -2.2841844866692886, 9);
  sqcRYGate(q, -2.636239987224944, 10);
  sqcRZGate(q, -2.44070379327692, 10);
  sqcRYGate(q, 3.055156775995715, 11);
  sqcRZGate(q, 0.06372472884989067, 11);
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
  sqcRYGate(q, 0.07626755056195568, 0);
  sqcRZGate(q, 0.6933768245999039, 0);
  sqcRYGate(q, -3.141391906477108, 1);
  sqcRZGate(q, 2.3079232977757753, 1);
  sqcRYGate(q, -3.0926883491674513, 2);
  sqcRZGate(q, -1.3089365877768167, 2);
  sqcRYGate(q, 1.5704667995498687, 3);
  sqcRZGate(q, -0.08167103531452467, 3);
  sqcRYGate(q, -1.570778852671914, 4);
  sqcRZGate(q, 3.1365213095283955, 4);
  sqcRYGate(q, -3.1412725334719163, 5);
  sqcRZGate(q, 0.6583411981874522, 5);
  sqcRYGate(q, 3.1414919185497814, 6);
  sqcRZGate(q, -1.7410889324095926, 6);
  sqcRYGate(q, 0.00010247887719039284, 7);
  sqcRZGate(q, 2.207075301483851, 7);
  sqcRYGate(q, -0.0010784027422557777, 8);
  sqcRZGate(q, 2.858822454142554, 8);
  sqcRYGate(q, -3.1404773912744197, 9);
  sqcRZGate(q, -2.109086856362401, 9);
  sqcRYGate(q, -3.1347816137888853, 10);
  sqcRZGate(q, -0.8626110104990898, 10);
  sqcRYGate(q, -1.4480046132977193, 11);
  sqcRZGate(q, 3.0215677019126197, 11);
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
  sqcRYGate(q, -0.024041467316398113, 0);
  sqcRZGate(q, 0.9815117568419814, 0);
  sqcRYGate(q, 1.5701763639628121, 1);
  sqcRZGate(q, 1.6670524093267884, 1);
  sqcRYGate(q, -0.004048000459015988, 2);
  sqcRZGate(q, -0.2534086598503554, 2);
  sqcRYGate(q, -3.129704044644351, 3);
  sqcRZGate(q, 0.017500180589182446, 3);
  sqcRYGate(q, 1.5139955836809138, 4);
  sqcRZGate(q, 0.04225466341352902, 4);
  sqcRYGate(q, 1.571406740216923, 5);
  sqcRZGate(q, 1.6690310250684854, 5);
  sqcRYGate(q, 3.1362257646894425, 6);
  sqcRZGate(q, -1.4934622334142356, 6);
  sqcRYGate(q, -0.33783325568684663, 7);
  sqcRZGate(q, 0.35619519898400775, 7);
  sqcRYGate(q, 0.02380643217752798, 8);
  sqcRZGate(q, -2.0647011749886883, 8);
  sqcRYGate(q, 0.002009744526992713, 9);
  sqcRZGate(q, 1.5399798661170294, 9);
  sqcRYGate(q, -1.5622265158049817, 10);
  sqcRZGate(q, 1.5569160214983784, 10);
  sqcRYGate(q, -0.08376098114514678, 11);
  sqcRZGate(q, 1.6616732595334163, 11);

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
