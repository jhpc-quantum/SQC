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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 3.1160111809330404, 0);
  sqcRYGate(q, -2.8922059150470036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4335212262907676, 0);
  sqcRYGate(q, -1.2993767906152351, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.380549307679858, 1);
  sqcRYGate(q, -2.489406093253758, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8779544224303804, 1);
  sqcRYGate(q, -2.1617368031673827, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.27792632301854, 2);
  sqcRYGate(q, 1.3141560606358793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.60519266948303, 2);
  sqcRYGate(q, -2.103463940237691, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.34357504966160235, 3);
  sqcRYGate(q, -0.2760152621045382, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6477986881181352, 3);
  sqcRYGate(q, 0.3297504176739864, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.07859930510139446, 4);
  sqcRYGate(q, -2.4933424541159517, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0343079163564566, 4);
  sqcRYGate(q, 2.050062843403313, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9400975489371528, 5);
  sqcRYGate(q, 0.39857177743060457, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1132746127063626, 5);
  sqcRYGate(q, -0.621550461094932, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.129802060238106, 6);
  sqcRYGate(q, -2.5432922843812835, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9774744836820145, 6);
  sqcRYGate(q, -2.2248637919076835, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.36673798099579025, 7);
  sqcRYGate(q, -3.1292812745187586, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5881228346503677, 7);
  sqcRYGate(q, 1.6592134779630225, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.4869862498748097, 8);
  sqcRYGate(q, 2.248999616417306, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.627692524329503, 8);
  sqcRYGate(q, -2.8346119994703565, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.619877011998577, 9);
  sqcRYGate(q, -2.6149453925592443, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.0382348688757226, 9);
  sqcRYGate(q, 0.9490805817906602, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.3294595978389676, 10);
  sqcRYGate(q, -1.6135517452597554, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4250353289006101, 10);
  sqcRYGate(q, -0.006924008012006483, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5976329623382972, 11);
  sqcRYGate(q, 1.018618411239271, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.4914465145190203, 11);
  sqcRYGate(q, -0.8047436886723496, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.6254232743264698, 12);
  sqcRYGate(q, -1.5512928970154034, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.13546866884628, 12);
  sqcRYGate(q, 3.1108527459622963, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.455352557818328, 13);
  sqcRYGate(q, -3.0737912969543304, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.8303045863175615, 13);
  sqcRYGate(q, -1.4560289738724395, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.3847298334415637, 14);
  sqcRYGate(q, 0.9355750063109406, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.6490082911593659, 14);
  sqcRYGate(q, -3.131095145596341, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.6240429121516944, 15);
  sqcRYGate(q, -2.363464560317834, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.19276009215413126, 15);
  sqcRYGate(q, 0.196235972400629, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.7225832122387326, 16);
  sqcRYGate(q, -0.3469375017461483, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.2066843385936474, 16);
  sqcRYGate(q, -1.1240094207101947, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.436850193396267, 17);
  sqcRYGate(q, 1.5858160235835834, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.852547469863079, 17);
  sqcRYGate(q, -0.30767086579090197, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.7607395047907337, 18);
  sqcRYGate(q, -1.9158939696951396, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.0070341433638348, 18);
  sqcRYGate(q, -3.0467722654518847, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.9661834730425349, 0);
  sqcRYGate(q, 2.266167475046465, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3219318876659223, 0);
  sqcRYGate(q, 2.427550232541794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.218555075341987, 1);
  sqcRYGate(q, -1.941233365474737, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6218035835536226, 1);
  sqcRYGate(q, -1.619907833952725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3313168437526057, 2);
  sqcRYGate(q, 2.5595295392472712, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9688098576087043, 2);
  sqcRYGate(q, 1.8434704426126558, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3944551002394476, 3);
  sqcRYGate(q, 2.571809290187163, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.25298754159860337, 3);
  sqcRYGate(q, -2.775141433236647, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7002008804465456, 4);
  sqcRYGate(q, -2.0750533962215885, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.99281648902371, 4);
  sqcRYGate(q, 2.720990744036276, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.38807268014439195, 5);
  sqcRYGate(q, -1.2695640213331485, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.78581091426214, 5);
  sqcRYGate(q, 0.18349160142402532, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6403586198002662, 6);
  sqcRYGate(q, 3.0485436898801797, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5552719496523872, 6);
  sqcRYGate(q, -1.186658152648838, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.15888154349812392, 7);
  sqcRYGate(q, 1.2478131953554663, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.13077409679476, 7);
  sqcRYGate(q, 2.724007005358702, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.2035238304692832, 8);
  sqcRYGate(q, 0.8152229957831896, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6635210567264647, 8);
  sqcRYGate(q, 2.3442244247664985, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.1281248689336517, 9);
  sqcRYGate(q, 1.2900942158951523, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9899226279093662, 9);
  sqcRYGate(q, -0.6757628384464146, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4517775346368138, 10);
  sqcRYGate(q, 0.7700989908242103, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8300326885151446, 10);
  sqcRYGate(q, -2.7273191383133066, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.428280639753269, 11);
  sqcRYGate(q, 0.7939632210932237, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.0602978298669758, 11);
  sqcRYGate(q, -2.7415420700784745, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.7845697724682656, 12);
  sqcRYGate(q, -2.848377539808787, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.3176986293243491, 12);
  sqcRYGate(q, -3.1294122216126454, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5162510917187415, 13);
  sqcRYGate(q, 2.709523641617428, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.0107493254915845, 13);
  sqcRYGate(q, 1.0834932910562038, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.7894125156854983, 14);
  sqcRYGate(q, -2.0414904154814684, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.147625514606714, 14);
  sqcRYGate(q, -0.03064489536326054, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.1340236203084908, 15);
  sqcRYGate(q, -2.22577342789649, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.616940412822414, 15);
  sqcRYGate(q, -0.11471682294494215, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.2249807207453438, 16);
  sqcRYGate(q, -2.523334429494932, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.057054237193151384, 16);
  sqcRYGate(q, -0.07014136988056308, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.0409338888231847, 17);
  sqcRYGate(q, -0.061741813965373815, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.904361773437275, 17);
  sqcRYGate(q, -1.9047971906691155, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.4542359789697086, 18);
  sqcRYGate(q, 0.4570928473009279, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.243183201638132, 18);
  sqcRYGate(q, 0.776327970209575, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.3079509928057065, 0);
  sqcRYGate(q, 1.8768197642981854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.139081759062863, 0);
  sqcRYGate(q, -3.042052967058897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7919226655047882, 1);
  sqcRYGate(q, -1.9381180777355311, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.131260584417728, 1);
  sqcRYGate(q, -2.355232458667114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3992966905512962, 2);
  sqcRYGate(q, 2.1630780407876617, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7100819857949855, 2);
  sqcRYGate(q, -2.4251999604023284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.941731902477033, 3);
  sqcRYGate(q, 2.620638199299082, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.09672799137964105, 3);
  sqcRYGate(q, -0.8320225595248756, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.18267628735248653, 4);
  sqcRYGate(q, 3.027234429327469, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0792189567607082, 4);
  sqcRYGate(q, -0.7752932451050888, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6181814544221722, 5);
  sqcRYGate(q, -1.1713294915906145, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.015759645933456135, 5);
  sqcRYGate(q, 3.0424198273521292, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.12640139797260375, 6);
  sqcRYGate(q, -1.5384023711321464, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4163149299653772, 6);
  sqcRYGate(q, 3.098995751459474, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.096325703251453, 7);
  sqcRYGate(q, -1.4871742093160047, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.4376159920355165, 7);
  sqcRYGate(q, -2.3482322947243675, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.975312956686243, 8);
  sqcRYGate(q, 1.792849404000533, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.4401902815228393, 8);
  sqcRYGate(q, -2.653224874858234, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.5937625606248162, 9);
  sqcRYGate(q, -2.0346045951672647, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.8405953512791307, 9);
  sqcRYGate(q, 0.5443855577921451, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.511721707480269, 10);
  sqcRYGate(q, -0.22653211786561506, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.3476281005792567, 10);
  sqcRYGate(q, -2.587174642184417, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3726034899493618, 11);
  sqcRYGate(q, 2.5685717425696057, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.8341037295787472, 11);
  sqcRYGate(q, 1.7660139745200547, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.4173979903079053, 12);
  sqcRYGate(q, 2.728792800522646, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5399965911777214, 12);
  sqcRYGate(q, -2.2167669755029373, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.037565743219915376, 13);
  sqcRYGate(q, -1.1421210592516111, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.9236894263394966, 13);
  sqcRYGate(q, -2.8563291165606763, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.5429266973648028, 14);
  sqcRYGate(q, 1.167360584194091, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5138542967895958, 14);
  sqcRYGate(q, 1.9311468702165568, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.3345447991477792, 15);
  sqcRYGate(q, -1.4109816448526422, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.1076071912663763, 15);
  sqcRYGate(q, -0.16003810467017573, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.12594591884095, 16);
  sqcRYGate(q, -2.337070915765236, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.1541934368591382, 16);
  sqcRYGate(q, 2.20515600216958, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.8878442325448526, 17);
  sqcRYGate(q, -1.4765055231075337, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.5032675771551709, 17);
  sqcRYGate(q, 3.076402590979125, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.1829500220264215, 18);
  sqcRYGate(q, -0.7180218468741266, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.471879970402637, 18);
  sqcRYGate(q, -0.06954914994588379, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.3901824052000056, 0);
  sqcRYGate(q, 0.6569622721831596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4341532266947795, 0);
  sqcRYGate(q, -0.14560275644434229, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0772766955082964, 1);
  sqcRYGate(q, -3.0877519101940156, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6127719212137738, 1);
  sqcRYGate(q, 0.023903436590741123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0593294260233472, 2);
  sqcRYGate(q, -1.5087720246766798, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.364348105379421, 2);
  sqcRYGate(q, -0.006426657449554934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8616906770619117, 3);
  sqcRYGate(q, -2.429750602528618, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0881645455531426, 3);
  sqcRYGate(q, 0.2157710147300652, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.859015744809171, 4);
  sqcRYGate(q, 0.5460245939685276, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6120199010133858, 4);
  sqcRYGate(q, -1.6370174056411946, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7948975878259468, 5);
  sqcRYGate(q, -2.2571313509225917, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8715819313530409, 5);
  sqcRYGate(q, 1.7193117354113525, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.374628650243264, 6);
  sqcRYGate(q, 3.0903107257608315, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.012653182925804439, 6);
  sqcRYGate(q, 3.099557001411626, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.982408880319925, 7);
  sqcRYGate(q, -2.3700485366759296, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.966780521220565, 7);
  sqcRYGate(q, 2.5435183454280565, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.37376831108383246, 8);
  sqcRYGate(q, 2.1518875645019486, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.11951886223632784, 8);
  sqcRYGate(q, 0.3986820438620844, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.521514242748494, 9);
  sqcRYGate(q, -0.035625035533620064, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.30617263353947377, 9);
  sqcRYGate(q, -2.9089942043678367, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2262085348539749, 10);
  sqcRYGate(q, 1.8397108334890548, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7035171240302598, 10);
  sqcRYGate(q, 0.739398730001219, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.0769442502505484, 11);
  sqcRYGate(q, 1.5780560350967459, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.21463321222615317, 11);
  sqcRYGate(q, 2.5925498883044096, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.5733337009721513, 12);
  sqcRYGate(q, 1.7846503257641322, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.9271541335814693, 12);
  sqcRYGate(q, -0.8195847334997577, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.815848999279015, 13);
  sqcRYGate(q, 0.7939840177537731, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.05766607412289993, 13);
  sqcRYGate(q, 0.37126027371625003, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.49696991576998606, 14);
  sqcRYGate(q, -2.4161529579065024, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.6186907651833824, 14);
  sqcRYGate(q, 2.1871978572075186, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.489543228948416, 15);
  sqcRYGate(q, 0.4653332832139601, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.23238656618425946, 15);
  sqcRYGate(q, 2.9573374682439693, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.0331369538320452, 16);
  sqcRYGate(q, 1.9818450139368395, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.131249687797874, 16);
  sqcRYGate(q, 2.8553274356261085, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.5184824768943992, 17);
  sqcRYGate(q, -0.22008574425725905, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -3.085786574363606, 17);
  sqcRYGate(q, 3.093097740924544, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.5311564657540953, 18);
  sqcRYGate(q, -1.2247665852093625, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.3284976632846488, 18);
  sqcRYGate(q, 0.8883411380562913, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.5606494268689327, 0);
  sqcRYGate(q, 1.078226731895091, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.00038573708449174404, 0);
  sqcRYGate(q, 1.7677118583887192, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23880593834056807, 1);
  sqcRYGate(q, 0.17213737474318336, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.460944394273239, 1);
  sqcRYGate(q, 0.60385301411279, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6916388982504906, 2);
  sqcRYGate(q, 2.677672105128818, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1998992123451231, 2);
  sqcRYGate(q, 1.7191142265522272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7150004055437, 3);
  sqcRYGate(q, -2.413465803275115, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.049896021960760706, 3);
  sqcRYGate(q, 0.12810720531219832, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0047807309661834, 4);
  sqcRYGate(q, -0.47632277974864845, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3253239806797746, 4);
  sqcRYGate(q, 2.871177063746441, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0388625943606273, 5);
  sqcRYGate(q, -2.363514169850317, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5932250503910936, 5);
  sqcRYGate(q, -2.0742150282103458, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.47414829343528, 6);
  sqcRYGate(q, 2.1332986147470896, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.12642695665849324, 6);
  sqcRYGate(q, 0.16409522928907894, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.583152272433866, 7);
  sqcRYGate(q, 3.135428983514265, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.937668154830116, 7);
  sqcRYGate(q, 2.8028544591362454, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9763469148207267, 8);
  sqcRYGate(q, -2.8936708651799288, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.2801296555310338, 8);
  sqcRYGate(q, -3.1271569318972445, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.1262072519751607, 9);
  sqcRYGate(q, 1.584243431817618, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.35694812381085494, 9);
  sqcRYGate(q, 1.3999870896730622, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.24092068830122, 10);
  sqcRYGate(q, -2.3949825204807693, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.918736210310313, 10);
  sqcRYGate(q, 3.098124069071909, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.953108390343841, 11);
  sqcRYGate(q, 1.465591399875887, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.90517631000081, 11);
  sqcRYGate(q, -0.43714133106354525, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.5495625879629564, 12);
  sqcRYGate(q, 2.0583339772313676, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.0662618613878614, 12);
  sqcRYGate(q, -0.011920593877675856, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.8592459638959751, 13);
  sqcRYGate(q, 2.5960804429128332, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.5485724490557127, 13);
  sqcRYGate(q, 2.334761949270429, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5957926887474942, 14);
  sqcRYGate(q, 0.5519570175845132, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.979243727298722, 14);
  sqcRYGate(q, 0.8667076195918088, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.19395482470072112, 15);
  sqcRYGate(q, 1.6431126463511179, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.0992054796840485, 15);
  sqcRYGate(q, 1.6687583995011277, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.8156197699991201, 16);
  sqcRYGate(q, -2.5954435918171317, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.8804343183118952, 16);
  sqcRYGate(q, -1.6132124514222999, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.02549153030745277, 17);
  sqcRYGate(q, 0.06928199285370962, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.6835341771037937, 17);
  sqcRYGate(q, -0.49414270009491124, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.061590723838727, 18);
  sqcRYGate(q, -2.8796603002558596, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.9522287971283125, 18);
  sqcRYGate(q, 0.6686893758705418, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.0585040076491232, 0);
  sqcRYGate(q, -0.8004490181081844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0100545275186232, 0);
  sqcRYGate(q, 3.036800782900179, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.057738762012816, 1);
  sqcRYGate(q, -0.990423462221436, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8439070743344725, 1);
  sqcRYGate(q, 2.275049379892091, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6296646928475726, 2);
  sqcRYGate(q, -1.2157560801608416, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6428658938850869, 2);
  sqcRYGate(q, 0.5192629957491528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.576569396471251, 3);
  sqcRYGate(q, -1.829671963131049, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8597764674470185, 3);
  sqcRYGate(q, -0.010161533087288498, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.150115099584891, 4);
  sqcRYGate(q, -0.1519428625726574, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.18100205637852262, 4);
  sqcRYGate(q, -1.788054719660603, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8397928149638014, 5);
  sqcRYGate(q, -0.007982405313089216, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6101997371386986, 5);
  sqcRYGate(q, 1.6577452323626876, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.27656447004035345, 6);
  sqcRYGate(q, -0.6758567886270295, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.06696939412933478, 6);
  sqcRYGate(q, -0.05575513352138931, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5827492336397767, 7);
  sqcRYGate(q, -1.2795751322442301, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.7043755245602616, 7);
  sqcRYGate(q, -0.25396398021783995, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.10684496961281603, 8);
  sqcRYGate(q, -1.0060259239740514, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.954519875944102, 8);
  sqcRYGate(q, -3.131814911494785, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.9543297874776346, 9);
  sqcRYGate(q, 2.7668899702578185, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.7935531579551274, 9);
  sqcRYGate(q, -0.838295999462048, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.851828931987244, 10);
  sqcRYGate(q, -1.9425249939424942, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.4749411411046083, 10);
  sqcRYGate(q, 0.062469966813939876, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1081190752379797, 11);
  sqcRYGate(q, 0.4838580717544456, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.4959828584569725, 11);
  sqcRYGate(q, -2.5974287320004885, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.9992127512956706, 12);
  sqcRYGate(q, -2.6139857114112375, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.09373788817174844, 12);
  sqcRYGate(q, 3.090185804533687, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.5869769301413534, 13);
  sqcRYGate(q, 0.13914981911031, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.096315406057961, 13);
  sqcRYGate(q, -0.0812149537991278, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.936757129754421, 14);
  sqcRYGate(q, 2.0873635313651997, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.09318178084628581, 14);
  sqcRYGate(q, -3.0398818740535174, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.4704025822397193, 15);
  sqcRYGate(q, -2.6685255511521975, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.059431858512134, 15);
  sqcRYGate(q, 1.0663856870404302, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.6818834615370584, 16);
  sqcRYGate(q, -2.627476797240913, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.0426095156557547, 16);
  sqcRYGate(q, -1.6068476334707649, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.770396380363919, 17);
  sqcRYGate(q, -2.414877089053677, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.0744260204094618, 17);
  sqcRYGate(q, -2.91331072760531, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.5971484934674631, 18);
  sqcRYGate(q, 0.6901851595716657, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.122870672163801, 18);
  sqcRYGate(q, 2.4288684894300125, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.9986880405118221, 0);
  sqcRYGate(q, -0.19710768025369782, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5064667500341686, 0);
  sqcRYGate(q, 1.7746916267816832, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1158658552868503, 1);
  sqcRYGate(q, 0.07561302157915595, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1349641517799607, 1);
  sqcRYGate(q, 0.7867432836613586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6367911748520175, 2);
  sqcRYGate(q, -0.0878019036784154, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5832454677291592, 2);
  sqcRYGate(q, -2.4599717002791412, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1108407966947906, 3);
  sqcRYGate(q, -0.5972839130134076, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.010512427245385552, 3);
  sqcRYGate(q, -0.042338598762752255, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7724276452968263, 4);
  sqcRYGate(q, -2.4246493884085116, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.971919153671967, 4);
  sqcRYGate(q, 0.5575955988962885, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6167816237314039, 5);
  sqcRYGate(q, 0.6099742110570462, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2013134925561215, 5);
  sqcRYGate(q, -1.5841933454556452, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9275832453391917, 6);
  sqcRYGate(q, -2.217018033304341, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0602883620946555, 6);
  sqcRYGate(q, 2.990057758318056, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.014744697904725, 7);
  sqcRYGate(q, 0.4554784111813159, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.21570904472034433, 7);
  sqcRYGate(q, 2.9130840127691826, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.433791216581915, 8);
  sqcRYGate(q, -0.9817557149827572, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.680064807715838, 8);
  sqcRYGate(q, 3.035655248585705, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7753156799453926, 9);
  sqcRYGate(q, 1.2542903014130555, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.140950536193692, 9);
  sqcRYGate(q, -2.383706052557994, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.1435360116816691, 10);
  sqcRYGate(q, -3.076970343802246, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0977054648614786, 10);
  sqcRYGate(q, 0.23508842581301703, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.10880944797798, 11);
  sqcRYGate(q, -2.8330008794512507, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.7300817970906204, 11);
  sqcRYGate(q, -0.8089189932040342, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.3886270966884835, 12);
  sqcRYGate(q, 1.1925896923847101, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.5446197057102724, 12);
  sqcRYGate(q, 0.6240199844665701, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.078901372980204, 13);
  sqcRYGate(q, 2.118581331454849, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.9034487033952914, 13);
  sqcRYGate(q, 0.1929849004932835, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.357627565605383, 14);
  sqcRYGate(q, 2.974188878390642, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.07859050556511, 14);
  sqcRYGate(q, 0.18478028734934163, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.9116863715308927, 15);
  sqcRYGate(q, 1.9403026431375752, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.8581508904726, 15);
  sqcRYGate(q, -1.1935325246733601, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.5345964374339601, 16);
  sqcRYGate(q, 1.3371941497565898, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.1771462971536435, 16);
  sqcRYGate(q, 0.6589506419033713, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.931638815662944, 17);
  sqcRYGate(q, 0.7597414574562177, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.9437686578237225, 17);
  sqcRYGate(q, -0.8368623228650138, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.9730334631702235, 18);
  sqcRYGate(q, 1.787557271185906, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.8191308674309195, 18);
  sqcRYGate(q, -1.9262904959801703, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.3689295769448249, 0);
  sqcRYGate(q, 2.0312862303384622, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5027712655366694, 0);
  sqcRYGate(q, 0.524469414622959, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.651803757748701, 1);
  sqcRYGate(q, -2.774436012255277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4887967503960993, 1);
  sqcRYGate(q, 0.49130175605522286, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2980839638043777, 2);
  sqcRYGate(q, -2.611341866436069, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.23774382682083317, 2);
  sqcRYGate(q, 2.6538373025019903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.966330777318066, 3);
  sqcRYGate(q, -0.09722150017887783, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.046964791185001076, 3);
  sqcRYGate(q, -3.103332819150915, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3160712500189713, 4);
  sqcRYGate(q, 1.3965391747661373, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.05598573684227922, 4);
  sqcRYGate(q, 1.3768232553759696, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.13088261284366107, 5);
  sqcRYGate(q, 1.2119710595140756, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9224951396291943, 5);
  sqcRYGate(q, 0.28650767179287656, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6169269238978483, 6);
  sqcRYGate(q, 0.36937001826890103, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0596487367008502, 6);
  sqcRYGate(q, 0.20591131073792238, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.130856827089021, 7);
  sqcRYGate(q, -0.08780222863581177, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.03129746401710687, 7);
  sqcRYGate(q, 2.852465447079516, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.311231560644155, 8);
  sqcRYGate(q, -1.982371478446896, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.21276364906699108, 8);
  sqcRYGate(q, 2.992917008550699, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.864724728071663, 9);
  sqcRYGate(q, -1.8022830141416417, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.20143459295937172, 9);
  sqcRYGate(q, 0.41295802243821544, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.8111020995464893, 10);
  sqcRYGate(q, 2.234712886062514, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.4650055575189677, 10);
  sqcRYGate(q, 3.133888308775456, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.3766907972356277, 11);
  sqcRYGate(q, 0.9239144525158153, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.077070685539061, 11);
  sqcRYGate(q, -3.1052019682555594, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.1995664509950392, 12);
  sqcRYGate(q, -0.45016449020589544, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.9478037209013532, 12);
  sqcRYGate(q, -0.4777172267683225, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.1192899836698915, 13);
  sqcRYGate(q, -1.161315519047485, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.25105102899649884, 13);
  sqcRYGate(q, 2.9205732213660656, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.0835085563559588, 14);
  sqcRYGate(q, 2.9058177754715038, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.9227984924995436, 14);
  sqcRYGate(q, 2.831978551041314, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.0323461496553286, 15);
  sqcRYGate(q, -1.6223682101332828, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.3678478811860053, 15);
  sqcRYGate(q, 2.9737487515156857, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.4512110526881197, 16);
  sqcRYGate(q, 0.8683545736416199, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.37855814240110025, 16);
  sqcRYGate(q, -2.3956816699843784, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.063852095763233, 17);
  sqcRYGate(q, 1.7503451329846136, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.8830822453637057, 17);
  sqcRYGate(q, 0.17926627477732993, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.9970006600614529, 18);
  sqcRYGate(q, -1.0156975302760103, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.6374482317098584, 18);
  sqcRYGate(q, -1.6634897438132896, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.3304897934587832, 0);
  sqcRYGate(q, 0.995988929289064, 1);
  sqcRYGate(q, -1.4293054231219067, 2);
  sqcRYGate(q, 1.2084095375699757, 3);
  sqcRYGate(q, -2.5811089143744943, 4);
  sqcRYGate(q, 0.680322313325858, 5);
  sqcRYGate(q, 0.9792574716502518, 6);
  sqcRYGate(q, 0.9044734793882261, 7);
  sqcRYGate(q, -1.6090885486936415, 8);
  sqcRYGate(q, 0.48274062400508194, 9);
  sqcRYGate(q, -3.028125809996918, 10);
  sqcRYGate(q, -0.024731918281872822, 11);
  sqcRYGate(q, -2.6883758908467548, 12);
  sqcRYGate(q, -0.8606894968269502, 13);
  sqcRYGate(q, 1.7539524275462401, 14);
  sqcRYGate(q, -1.7088059756406384, 15);
  sqcRYGate(q, 1.5455678432054372, 16);
  sqcRYGate(q, -1.3550128722217138, 17);
  sqcRYGate(q, -0.9477425132736368, 18);
  sqcRYGate(q, 1.8483834633553782, 19);

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
