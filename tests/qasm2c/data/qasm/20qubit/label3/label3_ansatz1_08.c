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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -2.0935631674960553, 0);
  sqcRZGate(q, -1.677801587809916, 0);
  sqcRYGate(q, 2.60555065659295, 1);
  sqcRZGate(q, 2.274048565952649, 1);
  sqcRYGate(q, 1.0207883799201856, 2);
  sqcRZGate(q, 2.299219502759841, 2);
  sqcRYGate(q, 1.9667883681677798, 3);
  sqcRZGate(q, 0.653966960427165, 3);
  sqcRYGate(q, 2.095887300681458, 4);
  sqcRZGate(q, -1.7767254941234745, 4);
  sqcRYGate(q, -0.12947749050962576, 5);
  sqcRZGate(q, 2.6307119665757974, 5);
  sqcRYGate(q, -1.3598992067750997, 6);
  sqcRZGate(q, -2.00345999511927, 6);
  sqcRYGate(q, 1.5724937539924149, 7);
  sqcRZGate(q, 1.5747230227053803, 7);
  sqcRYGate(q, 2.3255669422491128, 8);
  sqcRZGate(q, 0.09401729618904574, 8);
  sqcRYGate(q, 1.5746950122437795, 9);
  sqcRZGate(q, 1.5756038169277593, 9);
  sqcRYGate(q, 2.3938086775151657, 10);
  sqcRZGate(q, 1.6148748965192619, 10);
  sqcRYGate(q, -2.8125268991473718, 11);
  sqcRZGate(q, 2.412229586067123, 11);
  sqcRYGate(q, -3.1413281462890983, 12);
  sqcRZGate(q, 0.23655211763818274, 12);
  sqcRYGate(q, -2.6124720455313084, 13);
  sqcRZGate(q, 0.20299978553483428, 13);
  sqcRYGate(q, 0.6877922212424927, 14);
  sqcRZGate(q, -2.6773494284106594, 14);
  sqcRYGate(q, 2.304357841914676, 15);
  sqcRZGate(q, -2.9342907398602938, 15);
  sqcRYGate(q, -1.0178609451042249, 16);
  sqcRZGate(q, -0.12757430402663436, 16);
  sqcRYGate(q, 2.1413879730253855, 17);
  sqcRZGate(q, 0.8252681350673691, 17);
  sqcRYGate(q, 0.36526332591030647, 18);
  sqcRZGate(q, -2.2698819187965746, 18);
  sqcRYGate(q, 1.2390467782481362, 19);
  sqcRZGate(q, -1.084953516561569, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.723200835488902, 0);
  sqcRZGate(q, 1.6034909042315935, 0);
  sqcRYGate(q, -2.804773695189506, 1);
  sqcRZGate(q, 0.7989213101163495, 1);
  sqcRYGate(q, 2.4680425751200326, 2);
  sqcRZGate(q, -0.485472748532664, 2);
  sqcRYGate(q, 2.4962535973518465, 3);
  sqcRZGate(q, -0.24089776703210752, 3);
  sqcRYGate(q, -2.0214834084684155, 4);
  sqcRZGate(q, 1.6439634564084722, 4);
  sqcRYGate(q, 1.00492514871926, 5);
  sqcRZGate(q, 1.6371898216122625, 5);
  sqcRYGate(q, 3.1313715226367984, 6);
  sqcRZGate(q, 1.1879841242123599, 6);
  sqcRYGate(q, 0.3735513450291342, 7);
  sqcRZGate(q, -1.5692450913536535, 7);
  sqcRYGate(q, 0.32775495945474553, 8);
  sqcRZGate(q, -0.38727717932775496, 8);
  sqcRYGate(q, -0.5011133692932805, 9);
  sqcRZGate(q, 1.572211431771588, 9);
  sqcRYGate(q, -3.1389460407456387, 10);
  sqcRZGate(q, 2.2669988748500307, 10);
  sqcRYGate(q, -1.2747756060542663, 11);
  sqcRZGate(q, 0.6926634318992753, 11);
  sqcRYGate(q, 3.1410009200054367, 12);
  sqcRZGate(q, 1.4413213558025386, 12);
  sqcRYGate(q, 2.028103605076525, 13);
  sqcRZGate(q, 2.0180492541144703, 13);
  sqcRYGate(q, -1.0129703452400267, 14);
  sqcRZGate(q, -1.7461106611612252, 14);
  sqcRYGate(q, -1.5312736154086277, 15);
  sqcRZGate(q, 0.12317468914625454, 15);
  sqcRYGate(q, -1.6721829364111886, 16);
  sqcRZGate(q, 2.5646157768133246, 16);
  sqcRYGate(q, -2.0535416388802883, 17);
  sqcRZGate(q, 2.3086378283128255, 17);
  sqcRYGate(q, -0.2283955768522659, 18);
  sqcRZGate(q, -2.1975904480946546, 18);
  sqcRYGate(q, 1.2802704718212654, 19);
  sqcRZGate(q, 1.6064249171408251, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.3886075073606383, 0);
  sqcRZGate(q, -1.1151046715722757, 0);
  sqcRYGate(q, -1.0561308334081847, 1);
  sqcRZGate(q, 1.7548156760948306, 1);
  sqcRYGate(q, -2.0991532295118756, 2);
  sqcRZGate(q, -0.7057158606609635, 2);
  sqcRYGate(q, -1.9219339627104537, 3);
  sqcRZGate(q, 0.6323606969418332, 3);
  sqcRYGate(q, 0.25546894316838953, 4);
  sqcRZGate(q, 0.5624290947356788, 4);
  sqcRYGate(q, 3.0560856297480963, 5);
  sqcRZGate(q, -0.39403150342577775, 5);
  sqcRYGate(q, 1.69596292590691, 6);
  sqcRZGate(q, -2.5888971327579835, 6);
  sqcRYGate(q, 1.5706970817295964, 7);
  sqcRZGate(q, 0.8057285618944273, 7);
  sqcRYGate(q, 1.0713839121934885, 8);
  sqcRZGate(q, -2.7981881532889603, 8);
  sqcRYGate(q, 1.5547071576315359, 9);
  sqcRZGate(q, 3.032956735294948, 9);
  sqcRYGate(q, -3.1046307515649407, 10);
  sqcRZGate(q, -2.823724181246689, 10);
  sqcRYGate(q, 0.15514185374855557, 11);
  sqcRZGate(q, -0.7476929781765244, 11);
  sqcRYGate(q, -1.5672717306602713, 12);
  sqcRZGate(q, -1.5618993616810801, 12);
  sqcRYGate(q, 1.875338605987306, 13);
  sqcRZGate(q, -1.6851191597611335, 13);
  sqcRYGate(q, -0.0021198948348342132, 14);
  sqcRZGate(q, 1.863374328349063, 14);
  sqcRYGate(q, -1.3761637914681675, 15);
  sqcRZGate(q, -1.4863244856948141, 15);
  sqcRYGate(q, 0.15546832533980656, 16);
  sqcRZGate(q, 0.23655073498061807, 16);
  sqcRYGate(q, -1.7125648810478533, 17);
  sqcRZGate(q, -0.07451894014713556, 17);
  sqcRYGate(q, -2.7987929362612594, 18);
  sqcRZGate(q, -3.025350265946934, 18);
  sqcRYGate(q, -1.703899350221967, 19);
  sqcRZGate(q, 1.9029193029094826, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.283339127744922, 0);
  sqcRZGate(q, -2.22567478147654, 0);
  sqcRYGate(q, -0.9410823383436702, 1);
  sqcRZGate(q, 2.1559531803176464, 1);
  sqcRYGate(q, 2.1121668910087763, 2);
  sqcRZGate(q, 2.8881048222757513, 2);
  sqcRYGate(q, -0.6103780944914163, 3);
  sqcRZGate(q, -1.0181610357667275, 3);
  sqcRYGate(q, -0.8993526941670704, 4);
  sqcRZGate(q, 1.2017069606744197, 4);
  sqcRYGate(q, -0.8336497364468922, 5);
  sqcRZGate(q, 1.3816763559379375, 5);
  sqcRYGate(q, 1.5006716637503612, 6);
  sqcRZGate(q, -2.052224290482929, 6);
  sqcRYGate(q, 1.576230213439123, 7);
  sqcRZGate(q, 3.133702971726233, 7);
  sqcRYGate(q, 3.0166035440512156, 8);
  sqcRZGate(q, -1.8385844336889363, 8);
  sqcRYGate(q, 1.5689534525960278, 9);
  sqcRZGate(q, 0.0026972114672583203, 9);
  sqcRYGate(q, -0.673691968379819, 10);
  sqcRZGate(q, -2.00592645453256, 10);
  sqcRYGate(q, -1.56819708031971, 11);
  sqcRZGate(q, -0.0038340625544739386, 11);
  sqcRYGate(q, -0.6802922599212771, 12);
  sqcRZGate(q, 1.5603019214789484, 12);
  sqcRYGate(q, -0.0007434768758500276, 13);
  sqcRZGate(q, 1.7193531754572509, 13);
  sqcRYGate(q, -1.5479817410494014, 14);
  sqcRZGate(q, 3.0812411795025287, 14);
  sqcRYGate(q, 1.571967093307523, 15);
  sqcRZGate(q, 1.548692725835545, 15);
  sqcRYGate(q, -1.769064680895168, 16);
  sqcRZGate(q, -1.4512561978799914, 16);
  sqcRYGate(q, -2.0500711011070503, 17);
  sqcRZGate(q, 2.9292060272496188, 17);
  sqcRYGate(q, -0.09198150415902345, 18);
  sqcRZGate(q, 2.7235665292306726, 18);
  sqcRYGate(q, 0.5888782767802104, 19);
  sqcRZGate(q, -1.7343564522499157, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.3437439182479136, 0);
  sqcRZGate(q, 1.4674503785089792, 0);
  sqcRYGate(q, -2.111473170128395, 1);
  sqcRZGate(q, 0.9675571050487498, 1);
  sqcRYGate(q, -2.220038414639143, 2);
  sqcRZGate(q, 0.671698168449585, 2);
  sqcRYGate(q, -0.4895382669009198, 3);
  sqcRZGate(q, 2.3672833473931396, 3);
  sqcRYGate(q, 2.406868560932524, 4);
  sqcRZGate(q, 1.961741282918739, 4);
  sqcRYGate(q, -0.44476848876310004, 5);
  sqcRZGate(q, 2.548611888294234, 5);
  sqcRYGate(q, -1.570551087965735, 6);
  sqcRZGate(q, -3.1335435842400514, 6);
  sqcRYGate(q, -1.5542440385916672, 7);
  sqcRZGate(q, 1.452281974472339, 7);
  sqcRYGate(q, -1.9663739444912016, 8);
  sqcRZGate(q, -0.22944810548489808, 8);
  sqcRYGate(q, -1.561012478580019, 9);
  sqcRZGate(q, 2.2475300535617535, 9);
  sqcRYGate(q, 3.125159327059074, 10);
  sqcRZGate(q, -2.071664191563758, 10);
  sqcRYGate(q, 1.4965890754733069, 11);
  sqcRZGate(q, 3.1410862557850723, 11);
  sqcRYGate(q, -1.3192118344383887, 12);
  sqcRZGate(q, -0.00983934174209544, 12);
  sqcRYGate(q, -0.2595011575854776, 13);
  sqcRZGate(q, -1.4849113266153158, 13);
  sqcRYGate(q, -2.1892862054818254, 14);
  sqcRZGate(q, -1.0261531514236162, 14);
  sqcRYGate(q, -2.7332477320645805, 15);
  sqcRZGate(q, 1.2073309273014914, 15);
  sqcRYGate(q, -2.210455119198908, 16);
  sqcRZGate(q, 1.4567856945090496, 16);
  sqcRYGate(q, 2.6770318118932184, 17);
  sqcRZGate(q, 1.76719568123747, 17);
  sqcRYGate(q, -2.6180727691785814, 18);
  sqcRZGate(q, 1.1966785217009692, 18);
  sqcRYGate(q, 0.8734786915746113, 19);
  sqcRZGate(q, 0.08163380235039241, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.8611259494254266, 0);
  sqcRZGate(q, -3.1215496174327, 0);
  sqcRYGate(q, -2.264229403034496, 1);
  sqcRZGate(q, 1.1619703731147686, 1);
  sqcRYGate(q, -2.593658772326416, 2);
  sqcRZGate(q, -2.4442662120185004, 2);
  sqcRYGate(q, 0.17351173112553195, 3);
  sqcRZGate(q, -1.780032912189001, 3);
  sqcRYGate(q, 0.7672639467945332, 4);
  sqcRZGate(q, -1.8966800007865554, 4);
  sqcRYGate(q, -1.56785107912424, 5);
  sqcRZGate(q, 2.83473782542398, 5);
  sqcRYGate(q, -1.6046361402009555, 6);
  sqcRZGate(q, 0.26458925168088854, 6);
  sqcRYGate(q, -2.9193819333645177, 7);
  sqcRZGate(q, -1.6176338107266268, 7);
  sqcRYGate(q, -3.0145516232733285, 8);
  sqcRZGate(q, -3.101621873863646, 8);
  sqcRYGate(q, 3.1396235013727365, 9);
  sqcRZGate(q, -1.0621866490875664, 9);
  sqcRYGate(q, 1.5728628002110498, 10);
  sqcRZGate(q, -0.019187651042068765, 10);
  sqcRYGate(q, 1.5526264384690247, 11);
  sqcRZGate(q, -0.14337495512044016, 11);
  sqcRYGate(q, 1.6594790113999325, 12);
  sqcRZGate(q, -0.11918993521639899, 12);
  sqcRYGate(q, 1.574192303155253, 13);
  sqcRZGate(q, 1.6064253981005425, 13);
  sqcRYGate(q, -0.042383838046215594, 14);
  sqcRZGate(q, 2.6112370537283387, 14);
  sqcRYGate(q, -0.13098382348516857, 15);
  sqcRZGate(q, 1.887821441909031, 15);
  sqcRYGate(q, -1.7401970979751011, 16);
  sqcRZGate(q, -1.3037544854512513, 16);
  sqcRYGate(q, 0.9578729684324161, 17);
  sqcRZGate(q, 2.9479131309039284, 17);
  sqcRYGate(q, -0.9003112950672678, 18);
  sqcRZGate(q, -2.901969466602479, 18);
  sqcRYGate(q, -1.4824008531574382, 19);
  sqcRZGate(q, -0.2212930652759875, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -3.0272678540766664, 0);
  sqcRZGate(q, 2.852943382637337, 0);
  sqcRYGate(q, -1.8188564932467062, 1);
  sqcRZGate(q, 2.1880140483931685, 1);
  sqcRYGate(q, 1.827322768273594, 2);
  sqcRZGate(q, 0.3612298575341332, 2);
  sqcRYGate(q, 2.6709896632787333, 3);
  sqcRZGate(q, -1.7091479358251958, 3);
  sqcRYGate(q, 1.569584660131624, 4);
  sqcRZGate(q, 3.1402683725284453, 4);
  sqcRYGate(q, 3.1317263437536225, 5);
  sqcRZGate(q, 2.8311361269571216, 5);
  sqcRYGate(q, -2.7674745017247173, 6);
  sqcRZGate(q, -2.929636690990308, 6);
  sqcRYGate(q, 1.214536698554693, 7);
  sqcRZGate(q, -1.2076524816737972, 7);
  sqcRYGate(q, 1.2268039122742735, 8);
  sqcRZGate(q, 0.08412250420616495, 8);
  sqcRYGate(q, -0.16707609277557509, 9);
  sqcRZGate(q, -1.9244126187944373, 9);
  sqcRYGate(q, -1.6502121818476712, 10);
  sqcRZGate(q, -1.50160533638297, 10);
  sqcRYGate(q, -1.731934951072899, 11);
  sqcRZGate(q, -0.29630745660640806, 11);
  sqcRYGate(q, -2.895754216453911, 12);
  sqcRZGate(q, -3.116912414494297, 12);
  sqcRYGate(q, -3.1361084728863178, 13);
  sqcRZGate(q, -2.2730592392728672, 13);
  sqcRYGate(q, 1.5719444906074673, 14);
  sqcRZGate(q, 0.009675825726636623, 14);
  sqcRYGate(q, 1.3655983838141128, 15);
  sqcRZGate(q, -1.5511500584467157, 15);
  sqcRYGate(q, 0.10358649293595343, 16);
  sqcRZGate(q, -2.2771971600082086, 16);
  sqcRYGate(q, 0.578618933947209, 17);
  sqcRZGate(q, -2.7653239330220876, 17);
  sqcRYGate(q, -1.197257838152666, 18);
  sqcRZGate(q, -2.3652564523913138, 18);
  sqcRYGate(q, -2.6798291427571908, 19);
  sqcRZGate(q, -2.1248479421352746, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.0084379788643736, 0);
  sqcRZGate(q, -2.5853457757233382, 0);
  sqcRYGate(q, 2.252287418609954, 1);
  sqcRZGate(q, -2.7150036881134576, 1);
  sqcRYGate(q, -2.151269005356068, 2);
  sqcRZGate(q, -1.856177057678014, 2);
  sqcRYGate(q, -1.5706103338538275, 3);
  sqcRZGate(q, 3.139893085222828, 3);
  sqcRYGate(q, -2.3922164096795195, 4);
  sqcRZGate(q, 3.1346563459267514, 4);
  sqcRYGate(q, -2.748762839819952, 5);
  sqcRZGate(q, 1.564066116097629, 5);
  sqcRYGate(q, 1.5933521066848013, 6);
  sqcRZGate(q, 1.5711331230704693, 6);
  sqcRYGate(q, -2.7423855309102803, 7);
  sqcRZGate(q, 1.9122260248133989, 7);
  sqcRYGate(q, 0.24808932254873994, 8);
  sqcRZGate(q, 2.0968198148620223, 8);
  sqcRYGate(q, 3.069988153485017, 9);
  sqcRZGate(q, -1.3946654283594304, 9);
  sqcRYGate(q, 0.0023817874530653927, 10);
  sqcRZGate(q, -1.634744410553047, 10);
  sqcRYGate(q, -0.16619641299930302, 11);
  sqcRZGate(q, -3.0728324078221925, 11);
  sqcRYGate(q, -1.5499538006053193, 12);
  sqcRZGate(q, 3.1386814684522975, 12);
  sqcRYGate(q, 3.141573173892647, 13);
  sqcRZGate(q, 2.4057609520333307, 13);
  sqcRYGate(q, -1.5273700386010338, 14);
  sqcRZGate(q, 2.141046827501163, 14);
  sqcRYGate(q, -1.5674368492632036, 15);
  sqcRZGate(q, 0.9085485043161005, 15);
  sqcRYGate(q, 1.662534220813614, 16);
  sqcRZGate(q, -1.7135133768474602, 16);
  sqcRYGate(q, -0.23025688492896013, 17);
  sqcRZGate(q, 0.8461091802778808, 17);
  sqcRYGate(q, -2.010657999631237, 18);
  sqcRZGate(q, 0.9555852096392723, 18);
  sqcRYGate(q, 1.7628661063965647, 19);
  sqcRZGate(q, -2.176926342344607, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.1404046550774316, 0);
  sqcRZGate(q, -2.2983227110503512, 0);
  sqcRYGate(q, 1.7248032639326458, 1);
  sqcRZGate(q, -0.2214953868541799, 1);
  sqcRYGate(q, -1.572107971520098, 2);
  sqcRZGate(q, -3.1396777504748496, 2);
  sqcRYGate(q, 0.3074749245428814, 3);
  sqcRZGate(q, -3.1387873795206174, 3);
  sqcRYGate(q, 3.0608676902245087, 4);
  sqcRZGate(q, 1.5685351136856205, 4);
  sqcRYGate(q, -1.5673593537063208, 5);
  sqcRZGate(q, -0.5058877763255071, 5);
  sqcRYGate(q, -1.5650403991943074, 6);
  sqcRZGate(q, -1.877740996929645, 6);
  sqcRYGate(q, 1.5466495570524237, 7);
  sqcRZGate(q, -1.5810771816936944, 7);
  sqcRYGate(q, 0.012594199666573935, 8);
  sqcRZGate(q, -0.255764460348443, 8);
  sqcRYGate(q, 0.1690662086845248, 9);
  sqcRZGate(q, -1.8180872047473393, 9);
  sqcRYGate(q, 1.646992302448034, 10);
  sqcRZGate(q, -3.1198910287263493, 10);
  sqcRYGate(q, -1.4898601774598637, 11);
  sqcRZGate(q, 0.018325838933566097, 11);
  sqcRYGate(q, 1.7264789876592888, 12);
  sqcRZGate(q, -0.0010595963798669672, 12);
  sqcRYGate(q, 0.16083874635831963, 13);
  sqcRZGate(q, -0.14656099010038395, 13);
  sqcRYGate(q, 2.4760330664592085, 14);
  sqcRZGate(q, -2.4336907171565607, 14);
  sqcRYGate(q, 3.122716915221317, 15);
  sqcRZGate(q, -2.2086042716259415, 15);
  sqcRYGate(q, -1.5711995632102376, 16);
  sqcRZGate(q, -0.5942101528810557, 16);
  sqcRYGate(q, -0.08658283717174402, 17);
  sqcRZGate(q, 0.3215650730400622, 17);
  sqcRYGate(q, 1.1958169770518063, 18);
  sqcRZGate(q, -2.7588419874803907, 18);
  sqcRYGate(q, -1.498356716357355, 19);
  sqcRZGate(q, 1.3670732651470887, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5839581625614816, 0);
  sqcRZGate(q, -0.4888395620042714, 0);
  sqcRYGate(q, 1.5727888121117646, 1);
  sqcRZGate(q, 0.0015233289544593946, 1);
  sqcRYGate(q, -1.3293270257003558, 2);
  sqcRZGate(q, -1.572845531800559, 2);
  sqcRYGate(q, -2.581555833609461, 3);
  sqcRZGate(q, -3.1328956602214486, 3);
  sqcRYGate(q, 3.068583747403332, 4);
  sqcRZGate(q, -1.5699426524137738, 4);
  sqcRYGate(q, 0.058165070565965336, 5);
  sqcRZGate(q, 0.321037344895523, 5);
  sqcRYGate(q, -0.1734907844590916, 6);
  sqcRZGate(q, 1.8977756173100833, 6);
  sqcRYGate(q, 0.635770286842781, 7);
  sqcRZGate(q, -1.573047714241767, 7);
  sqcRYGate(q, -1.5707931332547282, 8);
  sqcRZGate(q, -1.5606397414877036, 8);
  sqcRYGate(q, 1.5714290352770355, 9);
  sqcRZGate(q, 1.5681520455195352, 9);
  sqcRYGate(q, 1.4969399126993892, 10);
  sqcRZGate(q, 1.5705227231888654, 10);
  sqcRYGate(q, -1.5791064662164045, 11);
  sqcRZGate(q, 2.8102364405710514, 11);
  sqcRYGate(q, -1.4375530251345534, 12);
  sqcRZGate(q, 2.8041551970624563, 12);
  sqcRYGate(q, 0.02424228399197004, 13);
  sqcRZGate(q, 1.1321577865915327, 13);
  sqcRYGate(q, 2.095697963554337, 14);
  sqcRZGate(q, -3.092896036315855, 14);
  sqcRYGate(q, -0.04019710765801676, 15);
  sqcRZGate(q, -1.6037926253013008, 15);
  sqcRYGate(q, -0.012808969165222343, 16);
  sqcRZGate(q, -2.551670423067334, 16);
  sqcRYGate(q, -1.5707004025326468, 17);
  sqcRZGate(q, 3.136282973760921, 17);
  sqcRYGate(q, 1.2565386433215178, 18);
  sqcRZGate(q, -1.2219743506826968, 18);
  sqcRYGate(q, 1.6670613102454088, 19);
  sqcRZGate(q, -2.092110059649976, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5717074264124802, 0);
  sqcRZGate(q, -3.0936148632469553, 0);
  sqcRYGate(q, 2.555369822549317, 1);
  sqcRZGate(q, 1.5344485474387628, 1);
  sqcRYGate(q, -1.5697811856723973, 2);
  sqcRZGate(q, -2.3142596166385148, 2);
  sqcRYGate(q, 0.16710540581382727, 3);
  sqcRZGate(q, 1.5839014130907945, 3);
  sqcRYGate(q, 0.09227190436658496, 4);
  sqcRZGate(q, 0.02769882871688356, 4);
  sqcRYGate(q, -1.568663810181211, 5);
  sqcRZGate(q, -1.5494413473684903, 5);
  sqcRYGate(q, -1.5696952916639941, 6);
  sqcRZGate(q, -1.5878275781487599, 6);
  sqcRYGate(q, -2.9613151396233786, 7);
  sqcRZGate(q, -0.15925682747214331, 7);
  sqcRYGate(q, 2.82136558926513, 8);
  sqcRZGate(q, 3.131752469439909, 8);
  sqcRYGate(q, -0.2390393191096276, 9);
  sqcRZGate(q, -3.124012998885228, 9);
  sqcRYGate(q, -0.3608901170357486, 10);
  sqcRZGate(q, 0.055654804343171715, 10);
  sqcRYGate(q, -1.5692141857920991, 11);
  sqcRZGate(q, 1.4134611142907736, 11);
  sqcRYGate(q, 0.028530449885757925, 12);
  sqcRZGate(q, -1.2482476223712098, 12);
  sqcRYGate(q, 0.0034196688988199493, 13);
  sqcRZGate(q, 0.5989209471205549, 13);
  sqcRYGate(q, 2.1175303384176742, 14);
  sqcRZGate(q, 1.4885755622628338, 14);
  sqcRYGate(q, 0.029111287058093183, 15);
  sqcRZGate(q, -3.118753467137058, 15);
  sqcRYGate(q, 0.11587483048947611, 16);
  sqcRZGate(q, 3.0761472361332944, 16);
  sqcRYGate(q, -0.07657159158061748, 17);
  sqcRZGate(q, 0.023039355582205406, 17);
  sqcRYGate(q, 1.5695869774033095, 18);
  sqcRZGate(q, 0.01759288514013857, 18);
  sqcRYGate(q, 2.584677753541183, 19);
  sqcRZGate(q, 0.5530641268647426, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.7601831796368437, 0);
  sqcRZGate(q, -2.847969488609848, 0);
  sqcRYGate(q, -0.45264276261698294, 1);
  sqcRZGate(q, 0.28193905709794126, 1);
  sqcRYGate(q, 1.588017908277254, 2);
  sqcRZGate(q, -1.3225498408676053, 2);
  sqcRYGate(q, 1.0018362077687202, 3);
  sqcRZGate(q, 0.2375254789772312, 3);
  sqcRYGate(q, -0.6926654886855301, 4);
  sqcRZGate(q, -2.9126264697739903, 4);
  sqcRYGate(q, -1.7510993975155071, 5);
  sqcRZGate(q, -2.892884091399565, 5);
  sqcRYGate(q, 0.7753789368738229, 6);
  sqcRZGate(q, -2.8905542298295557, 6);
  sqcRYGate(q, -3.0879526966147797, 7);
  sqcRZGate(q, 0.09449359586370853, 7);
  sqcRYGate(q, 1.8062705509866084, 8);
  sqcRZGate(q, -2.8993737583383443, 8);
  sqcRYGate(q, 1.7193471568430247, 9);
  sqcRZGate(q, 0.2502195434244233, 9);
  sqcRYGate(q, -2.8856388162962965, 10);
  sqcRZGate(q, -2.8435374584452067, 10);
  sqcRYGate(q, 2.9924403207974604, 11);
  sqcRZGate(q, -3.0506715403265177, 11);
  sqcRYGate(q, -1.8183517718964275, 12);
  sqcRZGate(q, 0.23864521900030145, 12);
  sqcRYGate(q, 1.6530508231860561, 13);
  sqcRZGate(q, 0.26413790544262983, 13);
  sqcRYGate(q, 1.4169669587617442, 14);
  sqcRZGate(q, -2.3674576873771658, 14);
  sqcRYGate(q, -1.5585880772186664, 15);
  sqcRZGate(q, -2.8720471267667107, 15);
  sqcRYGate(q, 3.081150889609633, 16);
  sqcRZGate(q, -2.96384810367523, 16);
  sqcRYGate(q, 0.8599862675966872, 17);
  sqcRZGate(q, 0.23698930940639593, 17);
  sqcRYGate(q, -0.6789147656291507, 18);
  sqcRZGate(q, -2.908335884741893, 18);
  sqcRYGate(q, 1.5571109694834133, 19);
  sqcRZGate(q, 1.8187030842252287, 19);

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
