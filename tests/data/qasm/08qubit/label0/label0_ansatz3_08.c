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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.11033941200734879, 0);
  sqcRZGate(q, 1.226269187818958, 0);
  sqcRYGate(q, 0.6996361891290102, 1);
  sqcRZGate(q, -2.8047724774465825, 1);
  sqcRYGate(q, -3.0872640593024125, 2);
  sqcRZGate(q, 1.2364523032595593, 2);
  sqcRYGate(q, -3.135896586621373, 3);
  sqcRZGate(q, 2.342193239586858, 3);
  sqcRYGate(q, -1.722753280169939, 4);
  sqcRZGate(q, -3.090697484006714, 4);
  sqcRYGate(q, -2.255379274051914, 5);
  sqcRZGate(q, 0.6602927332242494, 5);
  sqcRYGate(q, 3.117025520901826, 6);
  sqcRZGate(q, 1.3584102932777231, 6);
  sqcRYGate(q, 1.4935937820717087, 7);
  sqcRZGate(q, -1.2259288607592052, 7);
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
  sqcRYGate(q, -3.08958820999246, 0);
  sqcRZGate(q, 0.1517098583540038, 0);
  sqcRYGate(q, 1.6147122062059929, 1);
  sqcRZGate(q, 3.111382723812922, 1);
  sqcRYGate(q, 2.648150985097532, 2);
  sqcRZGate(q, 1.573632132343553, 2);
  sqcRYGate(q, 3.1412069103035365, 3);
  sqcRZGate(q, -0.26721424860883364, 3);
  sqcRYGate(q, -3.1386906123230505, 4);
  sqcRZGate(q, 1.1099269121649078, 4);
  sqcRYGate(q, 3.1145424584772563, 5);
  sqcRZGate(q, 0.7422499117811485, 5);
  sqcRYGate(q, 1.239200784408412, 6);
  sqcRZGate(q, 1.5597732327596392, 6);
  sqcRYGate(q, 0.08837551637296757, 7);
  sqcRZGate(q, 1.2758139990564297, 7);
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
  sqcRYGate(q, 0.01396908034730239, 0);
  sqcRZGate(q, 2.836334541746887, 0);
  sqcRYGate(q, 0.831351192765553, 1);
  sqcRZGate(q, -1.7771803719971622, 1);
  sqcRYGate(q, 1.040929948782061, 2);
  sqcRZGate(q, 0.8890786400512107, 2);
  sqcRYGate(q, -3.0743857971918502, 3);
  sqcRZGate(q, 2.6989797546328154, 3);
  sqcRYGate(q, -3.140818936507022, 4);
  sqcRZGate(q, -3.0490380768254752, 4);
  sqcRYGate(q, 2.3328784643775182, 5);
  sqcRZGate(q, 1.5198700159017686, 5);
  sqcRYGate(q, 0.029832216434623058, 6);
  sqcRZGate(q, -0.31258470133824723, 6);
  sqcRYGate(q, 1.3492498610270485, 7);
  sqcRZGate(q, -2.3611521745309987, 7);
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
  sqcRYGate(q, 0.014491230455370159, 0);
  sqcRZGate(q, 1.6860039985864155, 0);
  sqcRYGate(q, 1.7548896839174883, 1);
  sqcRZGate(q, 1.5096275294646044, 1);
  sqcRYGate(q, 0.9273714681302438, 2);
  sqcRZGate(q, -1.209628249156666, 2);
  sqcRYGate(q, -1.6077656354045458, 3);
  sqcRZGate(q, 0.503232186248081, 3);
  sqcRYGate(q, 1.5861893478783404, 4);
  sqcRZGate(q, 0.9774122764215819, 4);
  sqcRYGate(q, 1.7533887896705422, 5);
  sqcRZGate(q, 2.6112439507513927, 5);
  sqcRYGate(q, -1.375058065945806, 6);
  sqcRZGate(q, -0.0010460971365518637, 6);
  sqcRYGate(q, 0.14839700811555878, 7);
  sqcRZGate(q, -0.03870028506534328, 7);
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
  sqcRYGate(q, -0.17681837135565084, 0);
  sqcRZGate(q, -2.9806773016717014, 0);
  sqcRYGate(q, -1.3002816266970458, 1);
  sqcRZGate(q, 1.558497470526845, 1);
  sqcRYGate(q, 1.5273759968112153, 2);
  sqcRZGate(q, -1.5042463565976076, 2);
  sqcRYGate(q, 0.00035904074694194523, 3);
  sqcRZGate(q, -0.4946770103330589, 3);
  sqcRYGate(q, -3.1412730944766754, 4);
  sqcRZGate(q, -1.0553476108508173, 4);
  sqcRYGate(q, 0.004359278501716801, 5);
  sqcRZGate(q, 2.908847132732932, 5);
  sqcRYGate(q, -0.0019247308026262289, 6);
  sqcRZGate(q, 2.055891038038565, 6);
  sqcRYGate(q, 2.1225861478488337, 7);
  sqcRZGate(q, -2.1763718603516047, 7);
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
  sqcRYGate(q, 0.005155862338589223, 0);
  sqcRZGate(q, 2.35193102625606, 0);
  sqcRYGate(q, -1.5698897625302128, 1);
  sqcRZGate(q, 1.4745856876366632, 1);
  sqcRYGate(q, 1.6299138591635023, 2);
  sqcRZGate(q, 1.4554599648667228, 2);
  sqcRYGate(q, 2.1960745233544485, 3);
  sqcRZGate(q, 0.5376511186795506, 3);
  sqcRYGate(q, 1.5140913304814116, 4);
  sqcRZGate(q, 2.762665001646185, 4);
  sqcRYGate(q, -0.15142564784806198, 5);
  sqcRZGate(q, 1.1304739273373163, 5);
  sqcRYGate(q, 0.256376416397215, 6);
  sqcRZGate(q, 0.5504394462774463, 6);
  sqcRYGate(q, -2.622627103269149, 7);
  sqcRZGate(q, 1.2396076178720827, 7);
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
  sqcRYGate(q, 3.130463228476599, 0);
  sqcRZGate(q, -2.275489561877623, 0);
  sqcRYGate(q, 0.00816464782242113, 1);
  sqcRZGate(q, 2.020914975946921, 1);
  sqcRYGate(q, -2.9712600690324993, 2);
  sqcRZGate(q, -2.7622142386836557, 2);
  sqcRYGate(q, -3.0757014673809384, 3);
  sqcRZGate(q, 0.048279849977945974, 3);
  sqcRYGate(q, -0.00187252393560744, 4);
  sqcRZGate(q, -2.3936848333706195, 4);
  sqcRYGate(q, -3.1390714545589335, 5);
  sqcRZGate(q, -0.48572025659207707, 5);
  sqcRYGate(q, -1.6507249879637775, 6);
  sqcRZGate(q, -1.2067879895346678, 6);
  sqcRYGate(q, 0.15281497069756397, 7);
  sqcRZGate(q, 0.3266216483548696, 7);
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
  sqcRYGate(q, -3.134050112041681, 0);
  sqcRZGate(q, 1.5087195891243808, 0);
  sqcRYGate(q, -1.6550131547671743, 1);
  sqcRZGate(q, -2.373369215318706, 1);
  sqcRYGate(q, 1.8883733322740979, 2);
  sqcRZGate(q, 1.5519023925446982, 2);
  sqcRYGate(q, 2.4614401031332522, 3);
  sqcRZGate(q, 1.860850908296093, 3);
  sqcRYGate(q, 3.1389399571110475, 4);
  sqcRZGate(q, 0.3975458522838997, 4);
  sqcRYGate(q, -0.08457742278874271, 5);
  sqcRZGate(q, 0.6357574573744619, 5);
  sqcRYGate(q, 3.1107789124063996, 6);
  sqcRZGate(q, -1.0788400389406965, 6);
  sqcRYGate(q, 0.9828932911333692, 7);
  sqcRZGate(q, -3.0140035626924253, 7);
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
  sqcRYGate(q, 1.2266875157961792, 0);
  sqcRZGate(q, -0.48077661717914905, 0);
  sqcRYGate(q, -3.132177978046372, 1);
  sqcRZGate(q, 2.447740395453958, 1);
  sqcRYGate(q, 1.796580389480217, 2);
  sqcRZGate(q, -1.7739842917158386, 2);
  sqcRYGate(q, -3.1412803025096885, 3);
  sqcRZGate(q, -2.7415299194362848, 3);
  sqcRYGate(q, -0.0009185185537630726, 4);
  sqcRZGate(q, -3.139633268322266, 4);
  sqcRYGate(q, 3.075651016084699, 5);
  sqcRZGate(q, 3.004988394776594, 5);
  sqcRYGate(q, -0.04333360530171022, 6);
  sqcRZGate(q, 2.6928885132855456, 6);
  sqcRYGate(q, -2.5685407170859653, 7);
  sqcRZGate(q, -2.7949356674613375, 7);
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
  sqcRYGate(q, 2.7507179900063607, 0);
  sqcRZGate(q, 1.2675244259161298, 0);
  sqcRYGate(q, 1.589141874392225, 1);
  sqcRZGate(q, 0.5706238851066726, 1);
  sqcRYGate(q, -0.017201441289417165, 2);
  sqcRZGate(q, 1.0367952694496083, 2);
  sqcRYGate(q, 0.15470486251231969, 3);
  sqcRZGate(q, -1.975970005560761, 3);
  sqcRYGate(q, 0.0019886235884118975, 4);
  sqcRZGate(q, 1.5505730600315384, 4);
  sqcRYGate(q, 1.7246940537392605, 5);
  sqcRZGate(q, -2.852923394547628, 5);
  sqcRYGate(q, -0.09181582707729063, 6);
  sqcRZGate(q, 0.14380277563147104, 6);
  sqcRYGate(q, -2.321450618563261, 7);
  sqcRZGate(q, -0.6368057299665001, 7);
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
  sqcRYGate(q, -1.6967167474703826, 0);
  sqcRZGate(q, 2.1687085413206635, 0);
  sqcRYGate(q, 0.33674343647182425, 1);
  sqcRZGate(q, -0.06455139143255817, 1);
  sqcRYGate(q, 0.0038008395283277707, 2);
  sqcRZGate(q, -2.459577772571014, 2);
  sqcRYGate(q, 0.00019162457425192514, 3);
  sqcRZGate(q, -1.4836731393308575, 3);
  sqcRYGate(q, -3.1397753997426276, 4);
  sqcRZGate(q, -1.4196536901533587, 4);
  sqcRYGate(q, 3.1063944420863394, 5);
  sqcRZGate(q, -0.6292928429707846, 5);
  sqcRYGate(q, 1.4480634775575965, 6);
  sqcRZGate(q, 1.8066731209014748, 6);
  sqcRYGate(q, -1.4568307962861295, 7);
  sqcRZGate(q, -1.4797782864580702, 7);
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
  sqcRYGate(q, 1.5462895496619464, 0);
  sqcRZGate(q, 0.08669162437929592, 0);
  sqcRYGate(q, 0.13955330356295814, 1);
  sqcRZGate(q, -1.7731852682867686, 1);
  sqcRYGate(q, 1.649016710165398, 2);
  sqcRZGate(q, 2.470861634285537, 2);
  sqcRYGate(q, -0.11773734964489968, 3);
  sqcRZGate(q, 1.4186307284404105, 3);
  sqcRYGate(q, -1.490284084802811, 4);
  sqcRZGate(q, -1.569978750675359, 4);
  sqcRYGate(q, -3.077230287862667, 5);
  sqcRZGate(q, 2.4027021173189715, 5);
  sqcRYGate(q, -1.588871796334697, 6);
  sqcRZGate(q, 1.5615863538778385, 6);
  sqcRYGate(q, -1.5079127041290676, 7);
  sqcRZGate(q, -0.04380482312929511, 7);

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
