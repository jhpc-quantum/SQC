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

  sqcRYGate(q, 9.522976096145481e-05, 0);
  sqcRZGate(q, 0.4864997123278812, 0);
  sqcRYGate(q, 0.0012410392781667667, 1);
  sqcRZGate(q, -2.561693565338949, 1);
  sqcRYGate(q, -1.5697713881901558, 2);
  sqcRZGate(q, -0.0904125251480873, 2);
  sqcRYGate(q, -0.2560805511673818, 3);
  sqcRZGate(q, -0.6923431653099472, 3);
  sqcRYGate(q, -1.3674340976974646, 4);
  sqcRZGate(q, 1.5856320535065107, 4);
  sqcRYGate(q, -1.5710339237348077, 5);
  sqcRZGate(q, -1.0879128384325487, 5);
  sqcRYGate(q, 4.6225973024386716e-05, 6);
  sqcRZGate(q, 1.8268661602679976, 6);
  sqcRYGate(q, 0.00029651408526909506, 7);
  sqcRZGate(q, -3.1093319606738974, 7);
  sqcRYGate(q, -1.0505123588408214, 8);
  sqcRZGate(q, -0.021136171663353135, 8);
  sqcRYGate(q, 3.033026252675838, 9);
  sqcRZGate(q, -1.3442943900779472, 9);
  sqcRYGate(q, 2.8484192415045264, 10);
  sqcRZGate(q, -0.057834506318484004, 10);
  sqcRYGate(q, -0.00026001166332629243, 11);
  sqcRZGate(q, 0.20614309789411855, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.1403146190929094, 0);
  sqcRZGate(q, -0.8000622311259813, 0);
  sqcRYGate(q, -0.0017954196427462743, 1);
  sqcRZGate(q, -0.715046316604352, 1);
  sqcRYGate(q, -1.615237841504747, 2);
  sqcRZGate(q, 1.5602886871266164, 2);
  sqcRYGate(q, 0.007442020877047818, 3);
  sqcRZGate(q, -1.8042063546347151, 3);
  sqcRYGate(q, -1.5710989384170078, 4);
  sqcRZGate(q, -1.7013095514763528, 4);
  sqcRYGate(q, -2.8449874168331055, 5);
  sqcRZGate(q, -2.8642862182071367, 5);
  sqcRYGate(q, -1.620302564802408, 6);
  sqcRZGate(q, 1.5727206341502171, 6);
  sqcRYGate(q, 1.5607091336561718, 7);
  sqcRZGate(q, 0.0010711714702624775, 7);
  sqcRYGate(q, 1.305669747828779, 8);
  sqcRZGate(q, 1.4900270377705214, 8);
  sqcRYGate(q, 1.5759733469601125, 9);
  sqcRZGate(q, -2.889194558824104, 9);
  sqcRYGate(q, 3.010995821897222, 10);
  sqcRZGate(q, -3.0756236404171142, 10);
  sqcRYGate(q, 0.0017653412933325906, 11);
  sqcRZGate(q, 1.0233301631852836, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.0575966897549427, 0);
  sqcRZGate(q, -1.9160771130034102, 0);
  sqcRYGate(q, 2.875265253583102, 1);
  sqcRZGate(q, 2.3659429035617188, 1);
  sqcRYGate(q, -1.820139907922771, 2);
  sqcRZGate(q, 1.30081755375533, 2);
  sqcRYGate(q, 0.0007210612015819962, 3);
  sqcRZGate(q, -0.6486226299220313, 3);
  sqcRYGate(q, 3.138273569564292, 4);
  sqcRZGate(q, -0.22262395184627692, 4);
  sqcRYGate(q, -0.013428143527950631, 5);
  sqcRZGate(q, 0.09526073319393637, 5);
  sqcRYGate(q, -1.5707483168411374, 6);
  sqcRZGate(q, 1.5660184467498155, 6);
  sqcRYGate(q, -1.5641658757144778, 7);
  sqcRZGate(q, 1.5723402980700365, 7);
  sqcRYGate(q, 1.5687003858301392, 8);
  sqcRZGate(q, 3.1008595504172063, 8);
  sqcRYGate(q, -1.312450332893289, 9);
  sqcRZGate(q, 3.080140193610474, 9);
  sqcRYGate(q, 1.5745418039662695, 10);
  sqcRZGate(q, -0.20849520343252512, 10);
  sqcRYGate(q, -0.2521446551992337, 11);
  sqcRZGate(q, -1.5832391330233546, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.045805053300668, 0);
  sqcRZGate(q, -3.1219224966509422, 0);
  sqcRYGate(q, 1.8417041410219444, 1);
  sqcRZGate(q, -1.4747432650097918, 1);
  sqcRYGate(q, -3.088704643943587, 2);
  sqcRZGate(q, -0.931445668897199, 2);
  sqcRYGate(q, -2.906633173015583, 3);
  sqcRZGate(q, -3.0224393657823456, 3);
  sqcRYGate(q, -1.5289432605824524, 4);
  sqcRZGate(q, 1.5709025134843968, 4);
  sqcRYGate(q, -1.5710540879595674, 5);
  sqcRZGate(q, 1.5707972199798625, 5);
  sqcRYGate(q, 0.5400546442611098, 6);
  sqcRZGate(q, 1.5756086602766364, 6);
  sqcRYGate(q, -0.11276677305607397, 7);
  sqcRZGate(q, 1.5690943472325225, 7);
  sqcRYGate(q, 1.5703851876840307, 8);
  sqcRZGate(q, -0.12107795208440432, 8);
  sqcRYGate(q, -1.570715174929318, 9);
  sqcRZGate(q, 3.1059650123409814, 9);
  sqcRYGate(q, 0.002177820302046385, 10);
  sqcRZGate(q, 1.9851798614190788, 10);
  sqcRYGate(q, 3.113161132702641, 11);
  sqcRZGate(q, -2.78972387362569, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.1411684247988347, 0);
  sqcRZGate(q, 0.42468507943483064, 0);
  sqcRYGate(q, 0.09817560556256287, 1);
  sqcRZGate(q, 2.4745052570571144, 1);
  sqcRYGate(q, 0.0006656705100124322, 2);
  sqcRZGate(q, -2.4640075556790215, 2);
  sqcRYGate(q, -0.0013729947249458974, 3);
  sqcRZGate(q, 2.6908788049483463, 3);
  sqcRYGate(q, 1.5717664973967105, 4);
  sqcRZGate(q, -3.104807262181708, 4);
  sqcRYGate(q, 1.570148181216758, 5);
  sqcRZGate(q, 0.11424108520455079, 5);
  sqcRYGate(q, -1.4423565753173715, 6);
  sqcRZGate(q, -0.39866836985058324, 6);
  sqcRYGate(q, -1.5709255154095507, 7);
  sqcRZGate(q, -2.253794243316591, 7);
  sqcRYGate(q, -1.5843539720056476, 8);
  sqcRZGate(q, -2.977285866233903, 8);
  sqcRYGate(q, -1.5718647570860107, 9);
  sqcRZGate(q, -2.077264324435336, 9);
  sqcRYGate(q, 3.047639228581736, 10);
  sqcRZGate(q, -1.358780993548125, 10);
  sqcRYGate(q, 3.1381877911600076, 11);
  sqcRZGate(q, -0.15573523937600342, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.4627249952654768, 0);
  sqcRZGate(q, -0.04286314258411847, 0);
  sqcRYGate(q, 0.5856688990943936, 1);
  sqcRZGate(q, 2.149741637099037, 1);
  sqcRYGate(q, 1.5652679440706372, 2);
  sqcRZGate(q, 3.100262605284018, 2);
  sqcRYGate(q, 3.140018215818258, 3);
  sqcRZGate(q, 2.818139809010191, 3);
  sqcRYGate(q, -1.5630293289904884, 4);
  sqcRZGate(q, -3.139026649874293, 4);
  sqcRYGate(q, 1.5698438675201816, 5);
  sqcRZGate(q, -3.096807726578152, 5);
  sqcRYGate(q, 0.00013544724629088734, 6);
  sqcRZGate(q, 1.939661813788173, 6);
  sqcRYGate(q, 0.0026932090378517515, 7);
  sqcRZGate(q, 0.6831795371391056, 7);
  sqcRYGate(q, 0.0002955493093059758, 8);
  sqcRZGate(q, 1.517991980731109, 8);
  sqcRYGate(q, -0.0023506113374898168, 9);
  sqcRZGate(q, -2.632243096262846, 9);
  sqcRYGate(q, -1.8772169651819466, 10);
  sqcRZGate(q, -2.789489327996246, 10);
  sqcRYGate(q, -0.0004658804730673004, 11);
  sqcRZGate(q, 2.7382869793522855, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.872570145124136, 0);
  sqcRZGate(q, -1.6308290811532047, 0);
  sqcRYGate(q, -0.025497637068284867, 1);
  sqcRZGate(q, -1.4134037906582815, 1);
  sqcRYGate(q, 0.020821878787067157, 2);
  sqcRZGate(q, 1.606861927033026, 2);
  sqcRYGate(q, 3.0830847863825173, 3);
  sqcRZGate(q, 1.5693546785549854, 3);
  sqcRYGate(q, 3.1211384045757384, 4);
  sqcRZGate(q, -0.01953109557554544, 4);
  sqcRYGate(q, -3.1307318605543384, 5);
  sqcRZGate(q, -3.0959900682042, 5);
  sqcRYGate(q, -1.5707329136036068, 6);
  sqcRZGate(q, 0.4134774491470544, 6);
  sqcRYGate(q, 1.553086347297454, 7);
  sqcRZGate(q, 1.5668045885429664, 7);
  sqcRYGate(q, 2.756884956976445, 8);
  sqcRZGate(q, 0.3660980669762397, 8);
  sqcRYGate(q, -3.023715925486752, 9);
  sqcRZGate(q, 3.1128995359458753, 9);
  sqcRYGate(q, -0.03538700332112055, 10);
  sqcRZGate(q, 2.7774157338609773, 10);
  sqcRYGate(q, 0.007292391421911154, 11);
  sqcRZGate(q, 2.5061901223327885, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.812135565526787, 0);
  sqcRZGate(q, -1.6276829657960354, 0);
  sqcRYGate(q, -2.797956789070943, 1);
  sqcRZGate(q, 1.7017461341453293, 1);
  sqcRYGate(q, 1.5515463541040777, 2);
  sqcRZGate(q, 3.1363297599003817, 2);
  sqcRYGate(q, -1.5627979953975535, 3);
  sqcRZGate(q, 3.13903095131647, 3);
  sqcRYGate(q, 1.5764709562359316, 4);
  sqcRZGate(q, -1.5738571880347112, 4);
  sqcRYGate(q, -1.6040376989352625, 5);
  sqcRZGate(q, 3.125665538015324, 5);
  sqcRYGate(q, 3.139318958925131, 6);
  sqcRZGate(q, -1.16237930726692, 6);
  sqcRYGate(q, -1.5654712571181704, 7);
  sqcRZGate(q, 1.557588141823867, 7);
  sqcRYGate(q, 3.1402617072211054, 8);
  sqcRZGate(q, 1.941987553728849, 8);
  sqcRYGate(q, 1.5343389162071803, 9);
  sqcRZGate(q, -3.141377037433445, 9);
  sqcRYGate(q, 1.9114030347500968, 10);
  sqcRZGate(q, 3.1370234416683607, 10);
  sqcRYGate(q, 1.568781477989589, 11);
  sqcRZGate(q, -3.141247581559055, 11);

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
