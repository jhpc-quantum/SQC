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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -2.4703707842313407, 0);
  sqcRYGate(q, 1.5243945137702843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3991066395700041, 0);
  sqcRYGate(q, 2.5931615823400986, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.167064025753394, 1);
  sqcRYGate(q, -0.5410529686414267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7952872266606805, 1);
  sqcRYGate(q, 2.5877141122793783, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5919051482578057, 2);
  sqcRYGate(q, -0.25766182237255725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.027122098822201, 2);
  sqcRYGate(q, 1.073359515574155, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.986666767865781, 3);
  sqcRYGate(q, 0.8922620731727409, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2334722432686116, 3);
  sqcRYGate(q, -0.7822603456608725, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2763511023213576, 4);
  sqcRYGate(q, 2.1118117705535076, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.36050552677933023, 4);
  sqcRYGate(q, -2.4949450241885387, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0283719183455458, 5);
  sqcRYGate(q, 0.15426345615641246, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0431530803727767, 5);
  sqcRYGate(q, 1.5380834823740104, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5579638329550063, 6);
  sqcRYGate(q, 2.4022454496853, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1413104135294656, 6);
  sqcRYGate(q, -1.5644745069839532, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.185573515445505, 7);
  sqcRYGate(q, -1.4681842736824295, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.881280138343565, 7);
  sqcRYGate(q, 3.050785419849504, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.054393049942716, 8);
  sqcRYGate(q, 0.33236208239223247, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.15075365179799766, 8);
  sqcRYGate(q, 1.464356054424698, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.18269755634975046, 9);
  sqcRYGate(q, -2.837291033520914, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4523861063524055, 9);
  sqcRYGate(q, -1.3962937404060511, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.05728104566814841, 10);
  sqcRYGate(q, 2.1964017481190097, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5890176680930894, 10);
  sqcRYGate(q, 1.5949025005709012, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.707224709647014, 11);
  sqcRYGate(q, 1.5647841966281646, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6143199047991903, 11);
  sqcRYGate(q, -3.1241762070065455, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6975524440292775, 12);
  sqcRYGate(q, -0.6204641938161739, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.1358579281473387, 12);
  sqcRYGate(q, -0.4189609978741338, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.477747906721577, 13);
  sqcRYGate(q, 0.8209794200869114, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.7141528561177894, 13);
  sqcRYGate(q, -1.6146148325696874, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.9558235625431265, 14);
  sqcRYGate(q, 2.87489156208041, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.944642080501772, 14);
  sqcRYGate(q, -3.116020508692238, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.9047189860608693, 0);
  sqcRYGate(q, -1.1430720224175397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1768775121529464, 0);
  sqcRYGate(q, 1.4452153500803864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1202923611442266, 1);
  sqcRYGate(q, -1.4232303180845074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4536265933360504, 1);
  sqcRYGate(q, -0.06444858545404573, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.741506238412823, 2);
  sqcRYGate(q, -1.6533946228408887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4171160097119977, 2);
  sqcRYGate(q, 1.4592259361440254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.21573207366164185, 3);
  sqcRYGate(q, 1.2773354713027405, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6033854641480618, 3);
  sqcRYGate(q, 1.9719162577234037, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.27778714688632894, 4);
  sqcRYGate(q, 1.5721265137460616, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9846738481760349, 4);
  sqcRYGate(q, 0.006254922001670771, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0139583422250027, 5);
  sqcRYGate(q, -1.4028664901113714, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5062707693314448, 5);
  sqcRYGate(q, -2.944570258821566, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4767789575719634, 6);
  sqcRYGate(q, 1.7541482445546661, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.22566548635246, 6);
  sqcRYGate(q, 0.5015204590623341, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.691185737331155, 7);
  sqcRYGate(q, -1.4788628007426865, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.866814506765402, 7);
  sqcRYGate(q, -0.4631836515382153, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.384534246633027, 8);
  sqcRYGate(q, 1.5698594008039297, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.000481901746001, 8);
  sqcRYGate(q, -2.440849417151869, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.7186642332881155, 9);
  sqcRYGate(q, -0.8510867978241148, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.8616654968815256, 9);
  sqcRYGate(q, -0.07938164712776176, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.3994191097694557, 10);
  sqcRYGate(q, 3.086559744351491, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.660409517212156, 10);
  sqcRYGate(q, -1.5976265752675516, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2368814758049416, 11);
  sqcRYGate(q, 2.4726651240177384, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.3453677036177324, 11);
  sqcRYGate(q, -0.29416584514707, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.9755429205725012, 12);
  sqcRYGate(q, -1.8778818940048034, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.268764583258762, 12);
  sqcRYGate(q, 3.080778665555466, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.790711255313903, 13);
  sqcRYGate(q, 0.6384436212117963, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.7862295576483094, 13);
  sqcRYGate(q, -3.0474021896120576, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.30199131793404455, 14);
  sqcRYGate(q, -0.594174402536178, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.566961153969839, 14);
  sqcRYGate(q, 2.7542892993714907, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5077458745121364, 0);
  sqcRYGate(q, -1.7045284677422812, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.432511391380649, 0);
  sqcRYGate(q, -2.3524927529043262, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.740064133934534, 1);
  sqcRYGate(q, -2.894281940195256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7422126362685537, 1);
  sqcRYGate(q, 0.10355166109049563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0636929058287867, 2);
  sqcRYGate(q, -1.8678937984891002, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.26863264396693864, 2);
  sqcRYGate(q, -0.14770434423470302, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2718011539614062, 3);
  sqcRYGate(q, -1.8154160737148133, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1375725631015734, 3);
  sqcRYGate(q, 0.642442208698081, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0604135094553084, 4);
  sqcRYGate(q, -1.712961030462362, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5865503123994902, 4);
  sqcRYGate(q, 2.978775511380255, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9379119678869414, 5);
  sqcRYGate(q, 1.6940308902420709, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6501611253096273, 5);
  sqcRYGate(q, -0.1677168554264366, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.267418382866153, 6);
  sqcRYGate(q, 1.4771623450013336, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4958408114189066, 6);
  sqcRYGate(q, -3.1374492307651156, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5635047509064464, 7);
  sqcRYGate(q, -3.002138350622626, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1320442062132696, 7);
  sqcRYGate(q, 0.7384829067448537, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.5758870368547115, 8);
  sqcRYGate(q, -0.7166419732404704, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.11757674864920542, 8);
  sqcRYGate(q, 2.359896202036095, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.082317063039267, 9);
  sqcRYGate(q, -2.9055451076075105, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.1346334241045601, 9);
  sqcRYGate(q, -0.8664809293311112, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.8329456899618011, 10);
  sqcRYGate(q, 3.0704522936079113, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2590072009348736, 10);
  sqcRYGate(q, 2.479558338139991, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.04417043809860753, 11);
  sqcRYGate(q, 1.5909702720624586, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.649183151329717, 11);
  sqcRYGate(q, -0.5979497940849896, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.419336112939946, 12);
  sqcRYGate(q, 1.6270245185008296, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.114685912092702, 12);
  sqcRYGate(q, 0.06464659006627657, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.6577069311122266, 13);
  sqcRYGate(q, 1.0817922216037599, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.4154119380324284, 13);
  sqcRYGate(q, -2.1273117296123214, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.141540201132904, 14);
  sqcRYGate(q, 1.8261151494213363, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.4948966439387736, 14);
  sqcRYGate(q, 0.09572253380393693, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.3409724477684766, 0);
  sqcRYGate(q, -0.5076721244948633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7084689270198785, 0);
  sqcRYGate(q, -2.825052131443345, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6316403405128515, 1);
  sqcRYGate(q, 1.562372225960619, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.35663810793334494, 1);
  sqcRYGate(q, 0.3835981952435112, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.36758251783135926, 2);
  sqcRYGate(q, -1.638541915082734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.320272701389299, 2);
  sqcRYGate(q, -0.1552865445885049, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9833443293901607, 3);
  sqcRYGate(q, -0.5447862980295158, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.138193890012598, 3);
  sqcRYGate(q, -2.1685796143288236, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6521828988196727, 4);
  sqcRYGate(q, 0.23351414541599255, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.03905079193346, 4);
  sqcRYGate(q, 2.9791698779128217, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9507677131576328, 5);
  sqcRYGate(q, -2.4038088567720326, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.09351373831254996, 5);
  sqcRYGate(q, -0.7981975203890074, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9828618845962476, 6);
  sqcRYGate(q, -0.7610208358075745, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.034309003031573, 6);
  sqcRYGate(q, -0.7745523973675192, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.290746951849828, 7);
  sqcRYGate(q, 1.8265078045774368, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.579850091790652, 7);
  sqcRYGate(q, -3.09703867623021, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5474843029940148, 8);
  sqcRYGate(q, -1.3046677335934174, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5866943775679365, 8);
  sqcRYGate(q, 1.3470219414104827, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9822283041355764, 9);
  sqcRYGate(q, 2.1012115213380587, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.7638680885633287, 9);
  sqcRYGate(q, -3.1310118581811484, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5547768162001305, 10);
  sqcRYGate(q, 0.956787149473814, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8935961002844384, 10);
  sqcRYGate(q, -1.7124481758494996, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4779894210533548, 11);
  sqcRYGate(q, -0.9228162568262858, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.9095974311572474, 11);
  sqcRYGate(q, 1.1173776318831994, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.479501840707831, 12);
  sqcRYGate(q, -2.353394084759137, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5298597408784034, 12);
  sqcRYGate(q, -1.2128511381296905, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.02960460404371383, 13);
  sqcRYGate(q, 0.7145420153290892, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.7902521121217148, 13);
  sqcRYGate(q, -2.998759082370809, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.0382366000632537, 14);
  sqcRYGate(q, 0.5858500715115117, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.9460803671559761, 14);
  sqcRYGate(q, -0.3236721745154121, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.313958844880859, 0);
  sqcRYGate(q, 2.385103591443665, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7002498761968354, 0);
  sqcRYGate(q, 0.9075584220328, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0779888743909463, 1);
  sqcRYGate(q, 0.6373522608112632, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9402344625680983, 1);
  sqcRYGate(q, -0.8243639407353278, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0399666578429203, 2);
  sqcRYGate(q, -1.5602542690625611, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1395680255936544, 2);
  sqcRYGate(q, -3.116376811072804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1033400672827702, 3);
  sqcRYGate(q, -0.982553600709778, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.03509064645710325, 3);
  sqcRYGate(q, 1.6418195157518365, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.972009356302056, 4);
  sqcRYGate(q, 2.5974584860299, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.938158943414332, 4);
  sqcRYGate(q, -0.5833908633041203, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3161103848154236, 5);
  sqcRYGate(q, 1.666029052540292, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.034462951014079, 5);
  sqcRYGate(q, -3.1349424736282905, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6844399362911104, 6);
  sqcRYGate(q, -2.7682698404362482, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.007872966147849603, 6);
  sqcRYGate(q, 0.797650824338586, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.639431340710547, 7);
  sqcRYGate(q, -1.2424880302864905, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.253323516906225, 7);
  sqcRYGate(q, 1.675628244264872, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.899227689577335, 8);
  sqcRYGate(q, 2.536187797131782, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.080112880407461, 8);
  sqcRYGate(q, -0.39881354553699333, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.497526525881837, 9);
  sqcRYGate(q, -1.537587986107586, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.6303994813760525, 9);
  sqcRYGate(q, -0.037995406047794056, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.4114802525034209, 10);
  sqcRYGate(q, -2.5515671029113043, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9945413964402636, 10);
  sqcRYGate(q, -0.104834984726114, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.8308394926792952, 11);
  sqcRYGate(q, -0.31807706934457336, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.124588732150524, 11);
  sqcRYGate(q, 3.0474378388986323, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.010719904802723, 12);
  sqcRYGate(q, -0.30347136701155725, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.9267215004757476, 12);
  sqcRYGate(q, 1.7757285559539358, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.4110920194367496, 13);
  sqcRYGate(q, -2.5873502027990263, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.8931572358465193, 13);
  sqcRYGate(q, 2.5441852915675036, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.6369297742143454, 14);
  sqcRYGate(q, 1.2155864896723991, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.8492247813227647, 14);
  sqcRYGate(q, -1.520776624058481, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.21958083805792228, 0);
  sqcRYGate(q, 1.3541333995780391, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.641861745429516, 0);
  sqcRYGate(q, -2.83170795781027, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0272931855052887, 1);
  sqcRYGate(q, 2.5309536461991713, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.22752761320747616, 1);
  sqcRYGate(q, 0.3788597860938001, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5814885148291413, 2);
  sqcRYGate(q, 2.3869234376112987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9672749050281118, 2);
  sqcRYGate(q, -3.0103000772834245, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6186288979733803, 3);
  sqcRYGate(q, -1.6841544285758017, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.092277078686884, 3);
  sqcRYGate(q, -3.107705393163366, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2686898362265442, 4);
  sqcRYGate(q, 0.2883617550033595, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1123475088148709, 4);
  sqcRYGate(q, 2.5133235457075984, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0694861305020638, 5);
  sqcRYGate(q, -0.16979937111841004, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.06745931942040784, 5);
  sqcRYGate(q, 2.941473356292918, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8170439949429755, 6);
  sqcRYGate(q, 2.282127063670214, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0073343295217581685, 6);
  sqcRYGate(q, -3.0487485003568007, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.06589708034011217, 7);
  sqcRYGate(q, 0.9970274768854468, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.2639674549334261, 7);
  sqcRYGate(q, 1.3559997415299023, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.7049464858462633, 8);
  sqcRYGate(q, 1.9336532897924936, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.869035748070968, 8);
  sqcRYGate(q, 2.5373633662068604, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6081900787842205, 9);
  sqcRYGate(q, -1.0969407780114544, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.03669158549351675, 9);
  sqcRYGate(q, -3.064853334550641, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.436995118166658, 10);
  sqcRYGate(q, -1.2450748459157062, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.237265142003334, 10);
  sqcRYGate(q, 0.11501968841317818, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.2551992966276595, 11);
  sqcRYGate(q, 0.563169350772334, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.587899351961073, 11);
  sqcRYGate(q, 2.911623181122033, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5854976938329257, 12);
  sqcRYGate(q, -1.8870943254933898, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.412155720925441, 12);
  sqcRYGate(q, -1.8579651348460566, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.6666764158128606, 13);
  sqcRYGate(q, 1.4220630657194375, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.8164399707293575, 13);
  sqcRYGate(q, -0.17989124235699006, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.4834813694147018, 14);
  sqcRYGate(q, -1.4625579785254912, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.421975749144059, 14);
  sqcRYGate(q, -2.262815977199062, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.1069189157744077, 0);
  sqcRYGate(q, -0.7715717345180173, 1);
  sqcRYGate(q, 1.4607393198247194, 2);
  sqcRYGate(q, -2.459507007215397, 3);
  sqcRYGate(q, 0.3508231500808742, 4);
  sqcRYGate(q, -1.5028287811912975, 5);
  sqcRYGate(q, -0.03729400231134061, 6);
  sqcRYGate(q, -0.020910572385258733, 7);
  sqcRYGate(q, 1.453751575609019, 8);
  sqcRYGate(q, 1.7372173600983767, 9);
  sqcRYGate(q, 2.2329415574374796, 10);
  sqcRYGate(q, -1.3610035698492233, 11);
  sqcRYGate(q, 1.564420572630183, 12);
  sqcRYGate(q, 1.78192042493714, 13);
  sqcRYGate(q, -1.308606708643019, 14);
  sqcRYGate(q, -1.5250427212195667, 15);

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
