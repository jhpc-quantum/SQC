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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -1.905791185391525, 0);
  sqcRZGate(q, 1.1927485193871146, 0);
  sqcRYGate(q, 1.5709303059933577, 1);
  sqcRZGate(q, -2.2832930133401725, 1);
  sqcRYGate(q, 1.5683449765030393, 2);
  sqcRZGate(q, -2.9425424706153245, 2);
  sqcRYGate(q, -0.9952223887527161, 3);
  sqcRZGate(q, -0.05632266422548594, 3);
  sqcRYGate(q, 1.1513822923951418, 4);
  sqcRZGate(q, -0.0042424911452627785, 4);
  sqcRYGate(q, 0.0019756146994707397, 5);
  sqcRZGate(q, 0.4497274208533927, 5);
  sqcRYGate(q, -2.066258043801599, 6);
  sqcRZGate(q, 0.8964403364734091, 6);
  sqcRYGate(q, 1.827974542515258, 7);
  sqcRZGate(q, 0.6695525218224515, 7);
  sqcRYGate(q, -0.04876406157026171, 8);
  sqcRZGate(q, 2.483113493590592, 8);
  sqcRYGate(q, 2.7689118630122667, 9);
  sqcRZGate(q, 2.4051167540912286, 9);
  sqcRYGate(q, 1.872433264994748, 10);
  sqcRZGate(q, -0.3837230680045538, 10);
  sqcRYGate(q, 3.0815286107292015, 11);
  sqcRZGate(q, 2.3182368783381437, 11);
  sqcRYGate(q, -1.0269564289761834, 12);
  sqcRZGate(q, 1.7574723709364934, 12);
  sqcRYGate(q, 3.126503238519481, 13);
  sqcRZGate(q, -0.8704571619477894, 13);
  sqcRYGate(q, 0.4502662285186245, 14);
  sqcRZGate(q, -2.6396806324221678, 14);
  sqcRYGate(q, 1.8038697430921469, 15);
  sqcRZGate(q, 2.399789377161941, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.6376350733400917, 0);
  sqcRZGate(q, -3.0129411702549707, 0);
  sqcRYGate(q, 0.027584610876496107, 1);
  sqcRZGate(q, -0.7019122549712935, 1);
  sqcRYGate(q, 2.132686605841724, 2);
  sqcRZGate(q, 1.9360405355845565, 2);
  sqcRYGate(q, -1.5745630692982502, 3);
  sqcRZGate(q, -2.7869766515047094, 3);
  sqcRYGate(q, -1.3214254308805835, 4);
  sqcRZGate(q, -0.16981423967984366, 4);
  sqcRYGate(q, 3.1285538143383236, 5);
  sqcRZGate(q, 0.6779827841293083, 5);
  sqcRYGate(q, -3.124228209249374, 6);
  sqcRZGate(q, -2.84184742196479, 6);
  sqcRYGate(q, 0.05378987197933337, 7);
  sqcRZGate(q, 2.2822257171001317, 7);
  sqcRYGate(q, -1.7629902293240232, 8);
  sqcRZGate(q, -2.717703732414489, 8);
  sqcRYGate(q, -1.5014352014161383, 9);
  sqcRZGate(q, -1.6633499878163471, 9);
  sqcRYGate(q, -1.7476357414104644, 10);
  sqcRZGate(q, 1.2625198440503784, 10);
  sqcRYGate(q, -1.070676165018404, 11);
  sqcRZGate(q, 2.1088960438072064, 11);
  sqcRYGate(q, 1.27589680700157, 12);
  sqcRZGate(q, -0.5751214868208452, 12);
  sqcRYGate(q, 0.0029111431255524067, 13);
  sqcRZGate(q, -1.5155494046967268, 13);
  sqcRYGate(q, 1.0074366320314514, 14);
  sqcRZGate(q, -1.0846343679078645, 14);
  sqcRYGate(q, 1.7637384862901455, 15);
  sqcRZGate(q, 2.0688581617368884, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.2831490029878986, 0);
  sqcRZGate(q, 0.7455868628032309, 0);
  sqcRYGate(q, -0.0017381050294646982, 1);
  sqcRZGate(q, -2.3851275414239943, 1);
  sqcRYGate(q, 0.20804977142907702, 2);
  sqcRZGate(q, -2.04085307054405, 2);
  sqcRYGate(q, 2.8817523202995865, 3);
  sqcRZGate(q, -0.10532308639806408, 3);
  sqcRYGate(q, -1.610710229198502, 4);
  sqcRZGate(q, 1.6789992952310926, 4);
  sqcRYGate(q, 3.112575953505987, 5);
  sqcRZGate(q, -0.18100469368098882, 5);
  sqcRYGate(q, 0.589015147993778, 6);
  sqcRZGate(q, -2.9575039275136485, 6);
  sqcRYGate(q, -2.5776675161325877, 7);
  sqcRZGate(q, 1.798964425491024, 7);
  sqcRYGate(q, 3.0883225265088945, 8);
  sqcRZGate(q, 0.9097818257411294, 8);
  sqcRYGate(q, -3.139641238174317, 9);
  sqcRZGate(q, 1.5219716309635007, 9);
  sqcRYGate(q, -0.028733481628772112, 10);
  sqcRZGate(q, 1.0645409149058018, 10);
  sqcRYGate(q, -0.9048296124111292, 11);
  sqcRZGate(q, -0.0071167599920620725, 11);
  sqcRYGate(q, 1.1000468975565867, 12);
  sqcRZGate(q, -0.4058263845677432, 12);
  sqcRYGate(q, 2.316515161114833, 13);
  sqcRZGate(q, -2.5011306722232196, 13);
  sqcRYGate(q, -0.7008959158834935, 14);
  sqcRZGate(q, -3.1105494099691886, 14);
  sqcRYGate(q, -1.4858301742710789, 15);
  sqcRZGate(q, -0.5087791388621633, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.23487356464388043, 0);
  sqcRZGate(q, -0.48600570691944966, 0);
  sqcRYGate(q, 1.083319538410148, 1);
  sqcRZGate(q, -0.6325748831378988, 1);
  sqcRYGate(q, -2.4664039597440444, 2);
  sqcRZGate(q, -0.893731511973786, 2);
  sqcRYGate(q, -3.0373691540591143, 3);
  sqcRZGate(q, 2.7934804406990685, 3);
  sqcRYGate(q, -1.6524415906021428, 4);
  sqcRZGate(q, 0.02744535493328826, 4);
  sqcRYGate(q, 3.140554046911013, 5);
  sqcRZGate(q, 2.987537350917111, 5);
  sqcRYGate(q, -0.007529766115324545, 6);
  sqcRZGate(q, -1.8687165417568785, 6);
  sqcRYGate(q, -1.5334945055929465, 7);
  sqcRZGate(q, -1.5509747987325107, 7);
  sqcRYGate(q, 2.8765921585497423, 8);
  sqcRZGate(q, -0.03421647256343884, 8);
  sqcRYGate(q, -1.5436763172312258, 9);
  sqcRZGate(q, 2.675201193140843, 9);
  sqcRYGate(q, 0.6511389590517652, 10);
  sqcRZGate(q, 2.402469224039161, 10);
  sqcRYGate(q, -1.1030469207660005, 11);
  sqcRZGate(q, -0.9897049023147632, 11);
  sqcRYGate(q, -3.1245521040092994, 12);
  sqcRZGate(q, -1.2105828408590225, 12);
  sqcRYGate(q, 0.0184057812830119, 13);
  sqcRZGate(q, -0.5907004722410218, 13);
  sqcRYGate(q, 1.7074263350505325, 14);
  sqcRZGate(q, -2.82654039761244, 14);
  sqcRYGate(q, -2.3295228230828577, 15);
  sqcRZGate(q, -0.0727027590860212, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.128654865195062, 0);
  sqcRZGate(q, -1.083433495640568, 0);
  sqcRYGate(q, -3.136768119291452, 1);
  sqcRZGate(q, -1.2746945036865105, 1);
  sqcRYGate(q, -1.6863036807495098, 2);
  sqcRZGate(q, 0.9071611718062381, 2);
  sqcRYGate(q, 1.388121624883559, 3);
  sqcRZGate(q, -2.7330116392369694, 3);
  sqcRYGate(q, 2.9150029570153664, 4);
  sqcRZGate(q, 1.2510853705272678, 4);
  sqcRYGate(q, -1.5670872513978473, 5);
  sqcRZGate(q, 1.5760755849927095, 5);
  sqcRYGate(q, 3.1375805647965467, 6);
  sqcRZGate(q, -2.234180646809277, 6);
  sqcRYGate(q, 1.5887474163562116, 7);
  sqcRZGate(q, 0.1835707941083946, 7);
  sqcRYGate(q, -0.0013012872096345163, 8);
  sqcRZGate(q, 2.3911602009790203, 8);
  sqcRYGate(q, 0.00016254014002559103, 9);
  sqcRZGate(q, -2.5841250479472664, 9);
  sqcRYGate(q, -1.6273818183987272, 10);
  sqcRZGate(q, 1.5857092742944259, 10);
  sqcRYGate(q, 0.918181131134987, 11);
  sqcRZGate(q, -0.8014089386657082, 11);
  sqcRYGate(q, -1.7397267378000596, 12);
  sqcRZGate(q, 1.9009172699868229, 12);
  sqcRYGate(q, 2.8484901916493426, 13);
  sqcRZGate(q, 2.3178875684461704, 13);
  sqcRYGate(q, -2.8518655109633775, 14);
  sqcRZGate(q, 1.587933081793034, 14);
  sqcRYGate(q, 0.6358851119960269, 15);
  sqcRZGate(q, 1.3850462817428406, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5638144940581822, 0);
  sqcRZGate(q, 1.153431579833585, 0);
  sqcRYGate(q, -1.6085961339281425, 1);
  sqcRZGate(q, 2.715324267679297, 1);
  sqcRYGate(q, 1.520668869129205, 2);
  sqcRZGate(q, -2.386478808017561, 2);
  sqcRYGate(q, -1.9702211087007766, 3);
  sqcRZGate(q, -1.442958597970786, 3);
  sqcRYGate(q, -1.791031294105732, 4);
  sqcRZGate(q, -3.1395364445390745, 4);
  sqcRYGate(q, -1.5515066249239131, 5);
  sqcRZGate(q, 0.0012298325945135523, 5);
  sqcRYGate(q, 1.5633290182085655, 6);
  sqcRZGate(q, -2.72566309373834, 6);
  sqcRYGate(q, -1.018103045653035, 7);
  sqcRZGate(q, -2.659745615879349, 7);
  sqcRYGate(q, 1.5698342861130632, 8);
  sqcRZGate(q, -0.09314497136947697, 8);
  sqcRYGate(q, -1.337221206890257, 9);
  sqcRZGate(q, 1.5350585805963788, 9);
  sqcRYGate(q, 1.5035710962313409, 10);
  sqcRZGate(q, 0.5177522866872319, 10);
  sqcRYGate(q, 0.028692914480001438, 11);
  sqcRZGate(q, 1.535209544998942, 11);
  sqcRYGate(q, -0.10452856389526133, 12);
  sqcRZGate(q, 0.6586597658535188, 12);
  sqcRYGate(q, -0.12078831808402794, 13);
  sqcRZGate(q, 2.7360963385422417, 13);
  sqcRYGate(q, -1.1040272727665847, 14);
  sqcRZGate(q, 0.14918157294188017, 14);
  sqcRYGate(q, 1.553225177618888, 15);
  sqcRZGate(q, -0.6633754745951491, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.0955322039150324, 0);
  sqcRZGate(q, -2.5361081310529356, 0);
  sqcRYGate(q, 3.108756493281732, 1);
  sqcRZGate(q, 2.0030852267343997, 1);
  sqcRYGate(q, 1.6243016713692588, 2);
  sqcRZGate(q, 0.6551174476110685, 2);
  sqcRYGate(q, -3.108900536828956, 3);
  sqcRZGate(q, 1.8543393461323987, 3);
  sqcRYGate(q, 0.5366679148377917, 4);
  sqcRZGate(q, 0.3525551826741635, 4);
  sqcRYGate(q, 0.555904671111741, 5);
  sqcRZGate(q, 3.140924816300195, 5);
  sqcRYGate(q, 0.005310786111314201, 6);
  sqcRZGate(q, -0.4162434207027444, 6);
  sqcRYGate(q, 2.7471943656903046, 7);
  sqcRZGate(q, -1.680126035685043, 7);
  sqcRYGate(q, -0.0007182208281513168, 8);
  sqcRZGate(q, 0.10906429112867902, 8);
  sqcRYGate(q, -1.5712297568183367, 9);
  sqcRZGate(q, 0.4965977585327864, 9);
  sqcRYGate(q, -1.7850709851229485, 10);
  sqcRZGate(q, -1.4552155628856678, 10);
  sqcRYGate(q, -0.0006732332942630016, 11);
  sqcRZGate(q, -2.071966815856724, 11);
  sqcRYGate(q, 1.9583539438741475, 12);
  sqcRZGate(q, 2.2686541272759, 12);
  sqcRYGate(q, -1.454598961763317, 13);
  sqcRZGate(q, 0.21428414726441108, 13);
  sqcRYGate(q, -0.9910197202103133, 14);
  sqcRZGate(q, -0.06203029980532318, 14);
  sqcRYGate(q, -1.281954450380911, 15);
  sqcRZGate(q, -1.0612904346445635, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.3916724233177515, 0);
  sqcRZGate(q, -0.1357543853984443, 0);
  sqcRYGate(q, -3.0451878754597335, 1);
  sqcRZGate(q, -0.3826859996131704, 1);
  sqcRYGate(q, 2.8242619786520398, 2);
  sqcRZGate(q, -1.111685156771854, 2);
  sqcRYGate(q, 0.014332063527228378, 3);
  sqcRZGate(q, -0.17692434092742462, 3);
  sqcRYGate(q, 2.5969503331764874, 4);
  sqcRZGate(q, -2.764429696307809, 4);
  sqcRYGate(q, 1.5952609588513333, 5);
  sqcRZGate(q, 3.081257975796134, 5);
  sqcRYGate(q, -1.5633763709042974, 6);
  sqcRZGate(q, -0.0006340458314317843, 6);
  sqcRYGate(q, -3.129463469964723, 7);
  sqcRZGate(q, -1.6778435781444099, 7);
  sqcRYGate(q, -1.5713489492396284, 8);
  sqcRZGate(q, 2.393099328566553, 8);
  sqcRYGate(q, 1.5831721501788074, 9);
  sqcRZGate(q, -1.3243970510368428, 9);
  sqcRYGate(q, -0.6163535924740784, 10);
  sqcRZGate(q, -1.6509906168733979, 10);
  sqcRYGate(q, 0.000935184152706993, 11);
  sqcRZGate(q, -1.032144266732026, 11);
  sqcRYGate(q, -0.9132261822714263, 12);
  sqcRZGate(q, 3.0930252611991595, 12);
  sqcRYGate(q, 3.1364681468671236, 13);
  sqcRZGate(q, -2.3874387499222385, 13);
  sqcRYGate(q, 1.9176904744267684, 14);
  sqcRZGate(q, 2.795450240338181, 14);
  sqcRYGate(q, -1.226528175171251, 15);
  sqcRZGate(q, 2.5627242224853672, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.651407001382331, 0);
  sqcRZGate(q, -1.6464603088637784, 0);
  sqcRYGate(q, 3.134471356656476, 1);
  sqcRZGate(q, 2.4372813712393584, 1);
  sqcRYGate(q, 1.8458323788462923, 2);
  sqcRZGate(q, -0.3186959028896279, 2);
  sqcRYGate(q, -0.014041218379529317, 3);
  sqcRZGate(q, -2.956189847074515, 3);
  sqcRYGate(q, 0.0023679003102419216, 4);
  sqcRZGate(q, 3.1041312274337343, 4);
  sqcRYGate(q, 0.007124576345721093, 5);
  sqcRZGate(q, -3.0812917733402942, 5);
  sqcRYGate(q, -1.6712867908678488, 6);
  sqcRZGate(q, -3.1339675953370585, 6);
  sqcRYGate(q, -1.571344902418361, 7);
  sqcRZGate(q, -0.0006225361162741035, 7);
  sqcRYGate(q, -0.0013293850105478113, 8);
  sqcRZGate(q, -2.392995582357435, 8);
  sqcRYGate(q, 0.00390270135858642, 9);
  sqcRZGate(q, -2.2906530553790363, 9);
  sqcRYGate(q, 1.5710229794963273, 10);
  sqcRZGate(q, -2.825911843660085, 10);
  sqcRYGate(q, 1.5692171308297291, 11);
  sqcRZGate(q, -3.1390216956268353, 11);
  sqcRYGate(q, 2.2344254245129154, 12);
  sqcRZGate(q, -2.0407855395044985, 12);
  sqcRYGate(q, -1.6821255154412527, 13);
  sqcRZGate(q, 2.330871537477442, 13);
  sqcRYGate(q, 0.8195022117308626, 14);
  sqcRZGate(q, -2.1569466391047563, 14);
  sqcRYGate(q, 0.7468459559281447, 15);
  sqcRZGate(q, 1.2285737426866596, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.27475224316510927, 0);
  sqcRZGate(q, 1.5035448948112222, 0);
  sqcRYGate(q, 1.3092080170347584, 1);
  sqcRZGate(q, -2.5035873429446953, 1);
  sqcRYGate(q, -3.10608814930213, 2);
  sqcRZGate(q, 0.46249331074727973, 2);
  sqcRYGate(q, 0.004628783650288661, 3);
  sqcRZGate(q, -1.5241860890684722, 3);
  sqcRYGate(q, 1.8052137419595304, 4);
  sqcRZGate(q, -2.954574371904729, 4);
  sqcRYGate(q, -1.5936454219757685, 5);
  sqcRZGate(q, 3.138004791882143, 5);
  sqcRYGate(q, -1.5734066785592535, 6);
  sqcRZGate(q, 1.574225863983555, 6);
  sqcRYGate(q, -1.5625612227635848, 7);
  sqcRZGate(q, 2.8125550716280214, 7);
  sqcRYGate(q, -1.5712670689583503, 8);
  sqcRZGate(q, -0.0662310395961124, 8);
  sqcRYGate(q, 3.141473462329296, 9);
  sqcRZGate(q, 1.091163119703011, 9);
  sqcRYGate(q, 3.139721609388123, 10);
  sqcRZGate(q, -1.2722138659638982, 10);
  sqcRYGate(q, 2.6042820110407936, 11);
  sqcRZGate(q, 1.46465346785467, 11);
  sqcRYGate(q, -0.002587548073512913, 12);
  sqcRZGate(q, -1.123157905238493, 12);
  sqcRYGate(q, -3.1023624221863026, 13);
  sqcRZGate(q, -0.804579896512216, 13);
  sqcRYGate(q, 1.5568113471692575, 14);
  sqcRZGate(q, 0.5544663073521497, 14);
  sqcRYGate(q, -2.5890399857106714, 15);
  sqcRZGate(q, -2.751615254715729, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.936053704536849, 0);
  sqcRZGate(q, -2.790276851137534, 0);
  sqcRYGate(q, 3.140046853683981, 1);
  sqcRZGate(q, 0.10294051565727115, 1);
  sqcRYGate(q, 0.7179064086128575, 2);
  sqcRZGate(q, 1.6452829176819252, 2);
  sqcRYGate(q, -3.137686328272095, 3);
  sqcRZGate(q, -2.5063255893974876, 3);
  sqcRYGate(q, -2.6600497621684602, 4);
  sqcRZGate(q, -3.133072735735965, 4);
  sqcRYGate(q, 1.5053678316493952, 5);
  sqcRZGate(q, 0.015129447535288776, 5);
  sqcRYGate(q, -1.368191581763278, 6);
  sqcRZGate(q, -3.1398507518035115, 6);
  sqcRYGate(q, 3.035740803028635, 7);
  sqcRZGate(q, -2.1320729609724385, 7);
  sqcRYGate(q, -1.5706941472350193, 8);
  sqcRZGate(q, 2.8232472045690384, 8);
  sqcRYGate(q, -1.57538859718038, 9);
  sqcRZGate(q, 8.280355190315447e-05, 9);
  sqcRYGate(q, 1.4939828853723407, 10);
  sqcRZGate(q, 3.141425524156863, 10);
  sqcRYGate(q, -0.005664541566391179, 11);
  sqcRZGate(q, -1.4609930271198177, 11);
  sqcRYGate(q, 1.583979304533935, 12);
  sqcRZGate(q, -3.140231663784007, 12);
  sqcRYGate(q, -1.6529796609955394, 13);
  sqcRZGate(q, -0.013680197215329313, 13);
  sqcRYGate(q, 3.130047763155256, 14);
  sqcRZGate(q, 0.560008724334641, 14);
  sqcRYGate(q, -0.011539543985690237, 15);
  sqcRZGate(q, 2.277380575183942, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.2823159818300565, 0);
  sqcRZGate(q, -2.0832248751560805, 0);
  sqcRYGate(q, -2.917971829302421, 1);
  sqcRZGate(q, -0.3175454974700185, 1);
  sqcRYGate(q, 2.380325821209444, 2);
  sqcRZGate(q, -2.245017091322892, 2);
  sqcRYGate(q, -1.6801090418341051, 3);
  sqcRZGate(q, 0.0011592867588822926, 3);
  sqcRYGate(q, -1.7139913619040144, 4);
  sqcRZGate(q, -1.7241820135811308, 4);
  sqcRYGate(q, 0.034417991024912276, 5);
  sqcRZGate(q, -0.015523898168773406, 5);
  sqcRYGate(q, -3.0238850148746295, 6);
  sqcRZGate(q, -1.514984403515769, 6);
  sqcRYGate(q, 0.00013250709139574817, 7);
  sqcRZGate(q, -1.3697928118821572, 7);
  sqcRYGate(q, -0.0006247738479370213, 8);
  sqcRZGate(q, 2.376192494714557, 8);
  sqcRYGate(q, 1.5707364286469414, 9);
  sqcRZGate(q, -0.0010259328830652947, 9);
  sqcRYGate(q, -1.5670440562409889, 10);
  sqcRZGate(q, -0.0010394661978718744, 10);
  sqcRYGate(q, 1.84663282054212, 11);
  sqcRZGate(q, -3.140917857969806, 11);
  sqcRYGate(q, -1.742980988509375, 12);
  sqcRZGate(q, 3.1391543304189304, 12);
  sqcRYGate(q, 1.7629719919152136, 13);
  sqcRZGate(q, -2.1371818885623948, 13);
  sqcRYGate(q, -1.4643222432379446, 14);
  sqcRZGate(q, -0.2506411794513612, 14);
  sqcRYGate(q, 1.30344940524369, 15);
  sqcRZGate(q, -1.8912937778733918, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.6860694409191102, 0);
  sqcRZGate(q, -2.9941212433603166, 0);
  sqcRYGate(q, -1.2741293072251736, 1);
  sqcRZGate(q, 0.09527528152587365, 1);
  sqcRYGate(q, -1.46163736241082, 2);
  sqcRZGate(q, -1.8761911163353033, 2);
  sqcRYGate(q, 0.31234440527590834, 3);
  sqcRZGate(q, 1.7741099906162152, 3);
  sqcRYGate(q, 3.136381064275735, 4);
  sqcRZGate(q, 1.4185783340534635, 4);
  sqcRYGate(q, -2.882702612961402, 5);
  sqcRZGate(q, 3.135312780595177, 5);
  sqcRYGate(q, 1.5781211005655902, 6);
  sqcRZGate(q, -0.09674244515968411, 6);
  sqcRYGate(q, 2.329834568190428, 7);
  sqcRZGate(q, 3.093375813527536, 7);
  sqcRYGate(q, -0.0002105712311605456, 8);
  sqcRZGate(q, 1.0846327074597957, 8);
  sqcRYGate(q, -2.4374506465109538, 9);
  sqcRZGate(q, -0.632334799173313, 9);
  sqcRYGate(q, -2.581514483143416, 10);
  sqcRZGate(q, 2.634097326850802, 10);
  sqcRYGate(q, -0.30285627997419223, 11);
  sqcRZGate(q, -3.140680418817565, 11);
  sqcRYGate(q, -0.2824053294603406, 12);
  sqcRZGate(q, 3.127766084857174, 12);
  sqcRYGate(q, -0.002664377464149048, 13);
  sqcRZGate(q, 2.078003901346733, 13);
  sqcRYGate(q, 3.028148409290616, 14);
  sqcRZGate(q, 1.7160796249397965, 14);
  sqcRYGate(q, -1.9030424016715342, 15);
  sqcRZGate(q, -1.3698613195286686, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.3549873775401888, 0);
  sqcRZGate(q, 1.568703411626636, 0);
  sqcRYGate(q, -0.0009071586884189892, 1);
  sqcRZGate(q, -0.09550596090029177, 1);
  sqcRYGate(q, -3.140738595926609, 2);
  sqcRZGate(q, -3.1334541525066815, 2);
  sqcRYGate(q, 3.140645493364398, 3);
  sqcRZGate(q, -2.9407885720083646, 3);
  sqcRYGate(q, 1.7316390110239697, 4);
  sqcRZGate(q, 1.5778577991487241, 4);
  sqcRYGate(q, -0.007531698506056728, 5);
  sqcRZGate(q, 1.5766307098566106, 5);
  sqcRYGate(q, -0.0014715203793228746, 6);
  sqcRZGate(q, 3.035709551980152, 6);
  sqcRYGate(q, -2.538950361634489, 7);
  sqcRZGate(q, 1.5698846068841394, 7);
  sqcRYGate(q, -1.576859389392862, 8);
  sqcRZGate(q, -1.570658579640778, 8);
  sqcRYGate(q, 0.00046315324738444025, 9);
  sqcRZGate(q, -0.9392384387220174, 9);
  sqcRYGate(q, -0.005675201579383504, 10);
  sqcRZGate(q, 2.0727846607623714, 10);
  sqcRYGate(q, -1.2978316237598655, 11);
  sqcRZGate(q, -1.571077699169129, 11);
  sqcRYGate(q, -1.407698061072389, 12);
  sqcRZGate(q, 1.5733173478187226, 12);
  sqcRYGate(q, 0.1578593357565462, 13);
  sqcRZGate(q, 1.6316334383474413, 13);
  sqcRYGate(q, -1.5808252363182456, 14);
  sqcRZGate(q, 1.5568825146008973, 14);
  sqcRYGate(q, -1.5125161725564427, 15);
  sqcRZGate(q, -1.5010758776619695, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.5745171190586142, 0);
  sqcRZGate(q, -1.2813882989830803, 0);
  sqcRYGate(q, 2.527493014425819, 1);
  sqcRZGate(q, -0.8206900102965865, 1);
  sqcRYGate(q, 0.3394048377396759, 2);
  sqcRZGate(q, 1.8202045824910817, 2);
  sqcRYGate(q, 1.5693462068461206, 3);
  sqcRZGate(q, 0.9370979471862552, 3);
  sqcRYGate(q, 1.5716189781547965, 4);
  sqcRZGate(q, 0.5317718665159338, 4);
  sqcRYGate(q, -1.5741346958369389, 5);
  sqcRZGate(q, 0.9349935993316416, 5);
  sqcRYGate(q, -1.5704956339648954, 6);
  sqcRZGate(q, 0.4973042486312119, 6);
  sqcRYGate(q, 1.5707973454773, 7);
  sqcRZGate(q, 0.9765393727231073, 7);
  sqcRYGate(q, 1.5708681466030674, 8);
  sqcRZGate(q, 2.140714978320056, 8);
  sqcRYGate(q, -1.5707238365075107, 9);
  sqcRZGate(q, 0.9589136377876585, 9);
  sqcRYGate(q, 1.537859607689788, 10);
  sqcRZGate(q, -0.8852596809379172, 10);
  sqcRYGate(q, 1.5706747667699554, 11);
  sqcRZGate(q, -0.5424920710279428, 11);
  sqcRYGate(q, -1.5661834468334161, 12);
  sqcRZGate(q, 2.104055487647619, 12);
  sqcRYGate(q, 1.5753680896662232, 13);
  sqcRZGate(q, -0.5767318563822306, 13);
  sqcRYGate(q, 1.571482875823743, 14);
  sqcRZGate(q, -2.5634706252102477, 14);
  sqcRYGate(q, -1.5672214509279065, 15);
  sqcRZGate(q, -0.6023352944258334, 15);

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
