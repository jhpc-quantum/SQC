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

  sqcRYGate(q, -2.8856030199643725, 0);
  sqcRYGate(q, 1.120742636880992, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6194901845770904, 0);
  sqcRYGate(q, 2.0587446497873927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8720315456128704, 1);
  sqcRYGate(q, 2.4380800844653057, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.136966912462084, 1);
  sqcRYGate(q, 1.8433363392049564, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.734361618897511, 2);
  sqcRYGate(q, -0.043240574025325884, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.136633754383458, 2);
  sqcRYGate(q, 1.150548230293884, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9291282832220644, 3);
  sqcRYGate(q, 3.106363696617315, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.103596321364833, 3);
  sqcRYGate(q, -1.0747748462671283, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8679738537979877, 4);
  sqcRYGate(q, 3.0814369063617364, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.19931046502808059, 4);
  sqcRYGate(q, 2.2033687817369136, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2724492878636235, 5);
  sqcRYGate(q, -2.4124034710183837, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.707259757300985, 5);
  sqcRYGate(q, -0.10554375382148934, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0799689159062194, 6);
  sqcRYGate(q, 3.0876654243633355, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4898421176405534, 6);
  sqcRYGate(q, 1.5539330043962778, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.788822036251739, 7);
  sqcRYGate(q, -1.5572944410708558, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.3077577609385935, 7);
  sqcRYGate(q, 0.007947675016231948, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5285649585896124, 8);
  sqcRYGate(q, -0.5389330283497228, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.427462342720059, 8);
  sqcRYGate(q, 0.41894992613831133, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6012083550230071, 9);
  sqcRYGate(q, 2.066586814746495, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.45456747734285496, 9);
  sqcRYGate(q, 3.0842725588484714, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.0578859799368097, 10);
  sqcRYGate(q, 0.007013317725686995, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5857528079328835, 10);
  sqcRYGate(q, 1.5876153511614042, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.8691907303580875, 11);
  sqcRYGate(q, -3.030183525175298, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.2918935438044414, 11);
  sqcRYGate(q, -1.5797494645934134, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.2005020201495507, 12);
  sqcRYGate(q, 1.0225163908239736, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.6254647355718412, 12);
  sqcRYGate(q, 1.5851561553438538, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.4803271704156544, 13);
  sqcRYGate(q, -1.6965011478078722, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.0853095853188357, 13);
  sqcRYGate(q, 2.904954690262013, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.3317174189014063, 14);
  sqcRYGate(q, 0.10564350028368441, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.3750756007283993, 14);
  sqcRYGate(q, 1.3526563813459473, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.728697771971393, 15);
  sqcRYGate(q, 1.8705287757006959, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.1366089293136783, 15);
  sqcRYGate(q, -1.6035203981301143, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.7115419484928625, 16);
  sqcRYGate(q, 1.4152473530001386, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.05050928939625, 16);
  sqcRYGate(q, 1.0896878916457187, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.5062317296690972, 17);
  sqcRYGate(q, 1.9671578664244151, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.6479119825707165, 17);
  sqcRYGate(q, -2.170102145688457, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 3.060510751491868, 18);
  sqcRYGate(q, -1.7739906823102254, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.8031197822447526, 18);
  sqcRYGate(q, 0.9801628251048511, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.09575497081783, 0);
  sqcRYGate(q, -0.8614008476578583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2617353635065367, 0);
  sqcRYGate(q, -1.3573182596030877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2814134045387877, 1);
  sqcRYGate(q, -1.402842400230747, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.161971736993067, 1);
  sqcRYGate(q, 2.4710480608937497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3069537496318524, 2);
  sqcRYGate(q, 0.6513478756325429, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2130345476077355, 2);
  sqcRYGate(q, 2.5493022108055694, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5128728349746846, 3);
  sqcRYGate(q, 1.6523574495669955, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.451350413960998, 3);
  sqcRYGate(q, -2.4310891187665735, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.854168443073826, 4);
  sqcRYGate(q, 1.4715425086623712, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.46074756289289165, 4);
  sqcRYGate(q, -1.8910940991134044, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.594033155527577, 5);
  sqcRYGate(q, -0.09511575215999438, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.805498621964496, 5);
  sqcRYGate(q, -1.5863869187526467, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.553048123650161, 6);
  sqcRYGate(q, -2.5083212056250312, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5540743451685723, 6);
  sqcRYGate(q, 1.5763406262635131, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1185659620638235, 7);
  sqcRYGate(q, 0.07330937406869234, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1370453987831817, 7);
  sqcRYGate(q, 0.25359579922404407, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.1192153280419876, 8);
  sqcRYGate(q, -2.7084375911003318, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7010273646613538, 8);
  sqcRYGate(q, -1.9009394221847955, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.1924819357536025, 9);
  sqcRYGate(q, 3.0066480059532292, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9417525478442779, 9);
  sqcRYGate(q, 1.582463166404182, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.963606519964193, 10);
  sqcRYGate(q, -1.9592801274526608, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.1403167843614757, 10);
  sqcRYGate(q, -0.34349202723975125, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.0172795705460764, 11);
  sqcRYGate(q, -1.5363810373630555, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.730456038736417, 11);
  sqcRYGate(q, 0.03727078796667805, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.07415189461331106, 12);
  sqcRYGate(q, -0.1402920357755342, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.4646717824078976, 12);
  sqcRYGate(q, -0.11674540725876435, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.2837807061386721, 13);
  sqcRYGate(q, 1.5126911348255783, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.9104303085223489, 13);
  sqcRYGate(q, -1.2983353979448893, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.907576425395831, 14);
  sqcRYGate(q, -2.194874828409638, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.23349537450102373, 14);
  sqcRYGate(q, 3.1369185391019085, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.1976076047737303, 15);
  sqcRYGate(q, -2.5795471717454563, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.7326761484831117, 15);
  sqcRYGate(q, -2.3955660591599335, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.8681234131242603, 16);
  sqcRYGate(q, -0.13936142376064353, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.4762674259197577, 16);
  sqcRYGate(q, 1.5854748057500014, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.7288404282333873, 17);
  sqcRYGate(q, 1.578146354509506, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.276040971921998, 17);
  sqcRYGate(q, -2.7252008051620624, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.731977340928223, 18);
  sqcRYGate(q, -0.004009050481195153, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.1454985626780512, 18);
  sqcRYGate(q, -0.9865380029200628, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.9211944549541746, 0);
  sqcRYGate(q, -0.6560894204678966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8665035770413895, 0);
  sqcRYGate(q, 2.1333197738729552, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3523855644627045, 1);
  sqcRYGate(q, -2.348069212842674, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.88662929646756, 1);
  sqcRYGate(q, -2.8950814756172294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.038969617098437, 2);
  sqcRYGate(q, -1.3431441414069978, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.084758478444943, 2);
  sqcRYGate(q, -0.8287165056445867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5921562200703603, 3);
  sqcRYGate(q, -2.675189845391905, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9634605932645877, 3);
  sqcRYGate(q, -0.045217410381566125, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.009062913305075812, 4);
  sqcRYGate(q, -3.1328181129898924, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5910952173474184, 4);
  sqcRYGate(q, 1.5510680470842084, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.165805319806279, 5);
  sqcRYGate(q, -1.663718284674821, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.501816523395351, 5);
  sqcRYGate(q, 1.5449630274438544, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9875388732547181, 6);
  sqcRYGate(q, 1.571116232872449, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.800351775983697, 6);
  sqcRYGate(q, -1.8075688355653954, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5762809254384773, 7);
  sqcRYGate(q, 0.8028911567405688, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.004279803254929604, 7);
  sqcRYGate(q, -0.3663315490205957, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7554452700949944, 8);
  sqcRYGate(q, 0.9751248148938699, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1013998005573113, 8);
  sqcRYGate(q, 1.5685696136451561, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.8842669006309425, 9);
  sqcRYGate(q, 1.6474902352846357, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.27154876799085625, 9);
  sqcRYGate(q, 1.6280228958018075, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4925376650074674, 10);
  sqcRYGate(q, -0.8441661063424074, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.007303314474174094, 10);
  sqcRYGate(q, -2.1421365029969026, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5246726357299554, 11);
  sqcRYGate(q, 2.8875354397765465, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.0005141178973908616, 11);
  sqcRYGate(q, -0.002826388162698381, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.6519149986525433, 12);
  sqcRYGate(q, 0.22283366413318184, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.05710882983814035, 12);
  sqcRYGate(q, 3.0585925876830315, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.16055558174228812, 13);
  sqcRYGate(q, -2.7176978441636335, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.20982783202043573, 13);
  sqcRYGate(q, 2.20610168647414, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.4505394185169615, 14);
  sqcRYGate(q, -0.23402873100109683, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.19895232174792188, 14);
  sqcRYGate(q, 0.0189684513145707, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.022549529023772854, 15);
  sqcRYGate(q, 1.266579357284039, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.7530814749786225, 15);
  sqcRYGate(q, -1.3804503979278142, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5510844998215252, 16);
  sqcRYGate(q, -0.4971593782874128, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.081261549773236, 16);
  sqcRYGate(q, -0.5889091561174631, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.9954394280894303, 17);
  sqcRYGate(q, -2.7279387010436786, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.21090059127782879, 17);
  sqcRYGate(q, 0.15149311851687042, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.2585651805968687, 18);
  sqcRYGate(q, 3.0531578848629892, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.88249312325301, 18);
  sqcRYGate(q, -2.9739271463911527, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.9008553913521267, 0);
  sqcRYGate(q, -2.66683849196559, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7022250546030476, 0);
  sqcRYGate(q, 0.5739269684606522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4036363568622544, 1);
  sqcRYGate(q, -2.0965997941729064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.26391428121802, 1);
  sqcRYGate(q, 2.7221500451089287, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1963661788103488, 2);
  sqcRYGate(q, -3.0918350618148764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.008715105038507625, 2);
  sqcRYGate(q, 0.6347686121071705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9927179958608074, 3);
  sqcRYGate(q, -0.0015118140726765577, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6019762693807926, 3);
  sqcRYGate(q, 0.019345016719015493, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4119022219578719, 4);
  sqcRYGate(q, -1.5484194457179885, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.571159132819667, 4);
  sqcRYGate(q, 0.03998364010489208, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.20525973411742537, 5);
  sqcRYGate(q, 1.5865776060368342, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5838152104980043, 5);
  sqcRYGate(q, 0.03443211784641864, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1352646712798804, 6);
  sqcRYGate(q, 3.127671199341736, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6060822156585293, 6);
  sqcRYGate(q, -1.5733028885719271, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8747630991575488, 7);
  sqcRYGate(q, 3.112951904533464, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5898727310743563, 7);
  sqcRYGate(q, 3.140510301443395, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.43039459958602233, 8);
  sqcRYGate(q, -1.5713684205886178, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.569963589669702, 8);
  sqcRYGate(q, -0.0013630377208116455, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7971637822370194, 9);
  sqcRYGate(q, -3.038541415207412, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5758566497236055, 9);
  sqcRYGate(q, 1.5415732710610843, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5686404557217266, 10);
  sqcRYGate(q, 0.9438581519125826, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.4517427892836654, 10);
  sqcRYGate(q, -2.9161056560085195, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5693114101582015, 11);
  sqcRYGate(q, 3.0546226618484185, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.1370203868758666, 11);
  sqcRYGate(q, -2.774616398250282, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.7740390694646798, 12);
  sqcRYGate(q, -1.8048220044446328, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.02343036219570216, 12);
  sqcRYGate(q, -1.5789595585191676, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.8957206182495427, 13);
  sqcRYGate(q, 0.3427409920426773, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.10453629524372, 13);
  sqcRYGate(q, -1.5617437780091676, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.4610753975785971, 14);
  sqcRYGate(q, -2.192361573902229, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.1565116265552513, 14);
  sqcRYGate(q, 1.4899019197391374, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.2349232479777745, 15);
  sqcRYGate(q, -1.90193357586495, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.356955272731578, 15);
  sqcRYGate(q, 0.2608246943291821, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.7406941049214462, 16);
  sqcRYGate(q, 2.859021766976573, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.753275169238737, 16);
  sqcRYGate(q, -1.727487223027751, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.33727123752913685, 17);
  sqcRYGate(q, 1.6553791093311725, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.551937520166873, 17);
  sqcRYGate(q, 0.31617451368255345, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.56342023426659, 18);
  sqcRYGate(q, -0.44999988028473853, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.7489408571430448, 18);
  sqcRYGate(q, 1.0731072871392258, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.8157018048342553, 0);
  sqcRYGate(q, 0.07807936927956759, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6912626071223533, 0);
  sqcRYGate(q, 0.7046456494993634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.962448117271092, 1);
  sqcRYGate(q, 2.3666137213766634, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6051284461460487, 1);
  sqcRYGate(q, -2.6367547478450266, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8212589933693533, 2);
  sqcRYGate(q, 2.459447691283126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6297957715090892, 2);
  sqcRYGate(q, -0.31128915520324885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.03509422107936989, 3);
  sqcRYGate(q, -3.0482930203142353, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0941580816382315, 3);
  sqcRYGate(q, 1.571724738303869, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6105164633537228, 4);
  sqcRYGate(q, -1.3344840873354735, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.559626904097298, 4);
  sqcRYGate(q, -0.3806663840722403, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.22801597732096848, 5);
  sqcRYGate(q, -1.3924509037413062, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5568390820203368, 5);
  sqcRYGate(q, 1.580727831053975, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.00516276038972541, 6);
  sqcRYGate(q, 2.493988298297523, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6683729842488777, 6);
  sqcRYGate(q, 1.5681850789695344, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.58216626304326, 7);
  sqcRYGate(q, -0.3906233758315251, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1377726173202043, 7);
  sqcRYGate(q, -1.5698003068803765, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4996395081561897, 8);
  sqcRYGate(q, -3.0096595498175445, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1397144232402825, 8);
  sqcRYGate(q, 0.3022916248879514, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.041832415125915, 9);
  sqcRYGate(q, 1.545093519240081, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5797378058394895, 9);
  sqcRYGate(q, -1.7394933659819451, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.0699910765934315, 10);
  sqcRYGate(q, -0.048379797764701596, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.9968459148677087, 10);
  sqcRYGate(q, -1.3296714365703515, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5877653639074905, 11);
  sqcRYGate(q, 0.11849932624452553, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.6799251941696207, 11);
  sqcRYGate(q, 3.1373437092114593, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.024213702607728, 12);
  sqcRYGate(q, 3.1149279935156393, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5752388773440982, 12);
  sqcRYGate(q, -2.2826779826283454, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.2171896098838024, 13);
  sqcRYGate(q, 3.0314078155024347, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5684216425280173, 13);
  sqcRYGate(q, 1.6655127422414475, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.0015165493127460297, 14);
  sqcRYGate(q, -2.5849670272239114, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.2342690328698538, 14);
  sqcRYGate(q, -1.5993657855729257, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.3598900596850711, 15);
  sqcRYGate(q, -0.06524866404140983, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.523306686793017, 15);
  sqcRYGate(q, 3.135496760476036, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.615871059173354, 16);
  sqcRYGate(q, -1.7983177709427434, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.1203459179805906, 16);
  sqcRYGate(q, 2.070760753035341, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.813649627097163, 17);
  sqcRYGate(q, 0.47818113624285447, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.3120690064580134, 17);
  sqcRYGate(q, 1.0601804600367484, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.19049688683925, 18);
  sqcRYGate(q, 1.2707358068258048, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.4897397804711936, 18);
  sqcRYGate(q, -1.037637123125505, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.8377379824815963, 0);
  sqcRYGate(q, -1.7955529336896572, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.942959535458927, 0);
  sqcRYGate(q, 2.012834656789341, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.138875316652949, 1);
  sqcRYGate(q, 2.5405121025827047, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5961537282230587, 1);
  sqcRYGate(q, 2.4810640529233394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5777816102115123, 2);
  sqcRYGate(q, 0.8822915753041505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.138389010529485, 2);
  sqcRYGate(q, 1.570039215015601, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2795885475259228, 3);
  sqcRYGate(q, 2.0013207714648735, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3456720985355703, 3);
  sqcRYGate(q, -2.368266909755115, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8231676460818056, 4);
  sqcRYGate(q, -3.122735474421497, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.46066804780021, 4);
  sqcRYGate(q, -3.1313134915343164, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5604612937395146, 5);
  sqcRYGate(q, -2.5181063533066568, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0027379857480296366, 5);
  sqcRYGate(q, 1.860594027372171, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.119102106959999, 6);
  sqcRYGate(q, 1.5687202212557416, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.667852957690371, 6);
  sqcRYGate(q, -3.118446099477078, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5460312099905167, 7);
  sqcRYGate(q, -1.600753123172275, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.8387924248795124, 7);
  sqcRYGate(q, -0.0006285567573147688, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.4793973196317234, 8);
  sqcRYGate(q, 0.2977851595521903, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.1016918994306952, 8);
  sqcRYGate(q, -1.376325005959483, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6295881148138311, 9);
  sqcRYGate(q, 1.109384556667388, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.003250541957813269, 9);
  sqcRYGate(q, -0.29233928559144395, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.5491299335128295, 10);
  sqcRYGate(q, 2.7806958027309245, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.006898219595136894, 10);
  sqcRYGate(q, -1.6625807046730916, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.151423482942951, 11);
  sqcRYGate(q, 1.7462390830458505, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.8466458740572205, 11);
  sqcRYGate(q, -1.4979815611281495, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.02586139297361, 12);
  sqcRYGate(q, 0.08357276896160519, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.6088709567468598, 12);
  sqcRYGate(q, -2.9495793728137696, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1157364704751194, 13);
  sqcRYGate(q, 0.6895876756847956, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.026499789336485335, 13);
  sqcRYGate(q, 1.571058832814085, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.855651911202843, 14);
  sqcRYGate(q, 2.1338728567277947, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.0740254336177784, 14);
  sqcRYGate(q, 3.1373294371429528, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.0446422592844513, 15);
  sqcRYGate(q, 0.09564063754278218, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.2138583696456209, 15);
  sqcRYGate(q, -0.02434757283418157, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.9508830416180034, 16);
  sqcRYGate(q, 1.4122369278887907, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.91508812147656, 16);
  sqcRYGate(q, -0.22342357881732394, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.577420071147485, 17);
  sqcRYGate(q, 1.850103287508627, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.5701496015471237, 17);
  sqcRYGate(q, -1.900806740788627, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.9210208214335323, 18);
  sqcRYGate(q, 1.0961659638770838, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.427290501605829, 18);
  sqcRYGate(q, 1.1885733637828295, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.907461364181192, 0);
  sqcRYGate(q, 2.6162761154500953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6302932693206225, 0);
  sqcRYGate(q, -1.3687001849717735, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.21719716955386484, 1);
  sqcRYGate(q, 1.5570157144872727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.840759481639191, 1);
  sqcRYGate(q, 1.5730005598231127, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.327147580330117, 2);
  sqcRYGate(q, 1.1118174294931682, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.88425266779658, 2);
  sqcRYGate(q, -0.004788723995871039, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2059525137640554, 3);
  sqcRYGate(q, 3.0899140484515897, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0804128221298073, 3);
  sqcRYGate(q, -3.0801090207320083, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0436903574376095, 4);
  sqcRYGate(q, 1.5742843154089865, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6605922101706883, 4);
  sqcRYGate(q, 0.01649410856997413, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.823855989542234, 5);
  sqcRYGate(q, 0.9190482601532635, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.022834106856115, 5);
  sqcRYGate(q, 3.050434915290392, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1470693864339196, 6);
  sqcRYGate(q, -0.32371831992284866, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0021624777289589326, 6);
  sqcRYGate(q, -3.1171340735081485, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2183983117704427, 7);
  sqcRYGate(q, 2.873859790786598, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.008269502103709515, 7);
  sqcRYGate(q, -0.0006222621985223498, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.27454988464141034, 8);
  sqcRYGate(q, 2.422045146810331, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.6503222550280527, 8);
  sqcRYGate(q, -1.4157221578116639, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0393572015848203, 9);
  sqcRYGate(q, 0.8822789318638137, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.135471847392192, 9);
  sqcRYGate(q, -3.0994529433016877, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.965951115352059, 10);
  sqcRYGate(q, 2.9521636411662935, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1402945550224604, 10);
  sqcRYGate(q, -3.140682251600659, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.2991319541653532, 11);
  sqcRYGate(q, 3.0479970357922888, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5706132599996305, 11);
  sqcRYGate(q, 3.054979854847666, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.091509523256441, 12);
  sqcRYGate(q, 1.5975081944322527, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.04326227037647851, 12);
  sqcRYGate(q, 0.2828299319296903, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5413374332289171, 13);
  sqcRYGate(q, 2.034366749568288, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.011877880722949818, 13);
  sqcRYGate(q, 1.5719350587804595, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.614616290717098, 14);
  sqcRYGate(q, 0.9569783359242008, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.28905296683227, 14);
  sqcRYGate(q, -1.5701865028762443, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.0513985883751003, 15);
  sqcRYGate(q, -1.8895987930503535, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.407134688549165, 15);
  sqcRYGate(q, 0.06832556796192178, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.745977458818711, 16);
  sqcRYGate(q, 1.0612984481917707, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.36833884222320123, 16);
  sqcRYGate(q, 1.6499490157923784, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.4706806482037087, 17);
  sqcRYGate(q, -0.9249649210168781, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.312609035453334, 17);
  sqcRYGate(q, -2.908252616434653, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.7317133574853107, 18);
  sqcRYGate(q, 2.636441422905708, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.34174080984001, 18);
  sqcRYGate(q, -2.214930741380765, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.137331885689738, 0);
  sqcRYGate(q, 2.4381712606963144, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.002592837842106732, 0);
  sqcRYGate(q, -1.563210712392138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6064919087706446, 1);
  sqcRYGate(q, 0.7495453135238334, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.121905076776946, 1);
  sqcRYGate(q, 0.0015712942209944458, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9370290022192513, 2);
  sqcRYGate(q, -1.22585218657985, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8679074682879024, 2);
  sqcRYGate(q, -0.006532029577712706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2775273147120103, 3);
  sqcRYGate(q, 2.8508974848413984, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1487661053775438, 3);
  sqcRYGate(q, -1.4843139280684121, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4801715783041836, 4);
  sqcRYGate(q, 1.4504463876255755, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.069458571431789, 4);
  sqcRYGate(q, -0.028385654383539335, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3640924632957774, 5);
  sqcRYGate(q, -1.441161422755475, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.667569255848152, 5);
  sqcRYGate(q, -1.6801558841322413, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9795640742541776, 6);
  sqcRYGate(q, 1.5110607212786862, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3523380032169481, 6);
  sqcRYGate(q, -3.139741104031383, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1393891306011215, 7);
  sqcRYGate(q, -1.4419262556435941, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6087967370343266, 7);
  sqcRYGate(q, -1.5724033462658582, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.032468189546089515, 8);
  sqcRYGate(q, -2.5806271939520533, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.587254834419996, 8);
  sqcRYGate(q, -1.5679110206379145, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.0004248161632496001, 9);
  sqcRYGate(q, 1.6942766949281578, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5701613852060945, 9);
  sqcRYGate(q, 1.5724414582885826, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9143551238417391, 10);
  sqcRYGate(q, -0.10777047735371734, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.30439078713976947, 10);
  sqcRYGate(q, 0.00785586696714802, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1404715867032755, 11);
  sqcRYGate(q, -0.08636407604610273, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5690610113487606, 11);
  sqcRYGate(q, -1.582002570753553, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.1378348254466566, 12);
  sqcRYGate(q, -0.004684945977251825, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5802853628080573, 12);
  sqcRYGate(q, -0.007657081203135796, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.054556317862534, 13);
  sqcRYGate(q, 3.1415264708174426, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5463579901058218, 13);
  sqcRYGate(q, 1.5337407152944527, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.013496211226159183, 14);
  sqcRYGate(q, 2.704838432347824, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.1397699461959143, 14);
  sqcRYGate(q, 1.5558105576720644, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.3881683510576273, 15);
  sqcRYGate(q, -0.7402570963421823, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.9503322682214805, 15);
  sqcRYGate(q, 0.3122354342673546, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.6596285436279022, 16);
  sqcRYGate(q, -0.6653496948986249, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.9542406160868335, 16);
  sqcRYGate(q, -1.3802621073642134, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.5231498143781295, 17);
  sqcRYGate(q, -2.1586224580954987, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.8316459134484908, 17);
  sqcRYGate(q, 1.3772509475575667, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.0477847337511657, 18);
  sqcRYGate(q, -0.3899828754740948, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.620294972417201, 18);
  sqcRYGate(q, 1.4363786356872525, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.401193032678125, 0);
  sqcRYGate(q, 2.1186044528443118, 1);
  sqcRYGate(q, -3.00629613708987, 2);
  sqcRYGate(q, -2.630598955445818, 3);
  sqcRYGate(q, 1.5484347508131577, 4);
  sqcRYGate(q, 1.12432017420819, 5);
  sqcRYGate(q, 0.9582078456494093, 6);
  sqcRYGate(q, 2.9875131999464624, 7);
  sqcRYGate(q, -0.16245552896925997, 8);
  sqcRYGate(q, 1.417544280078947, 9);
  sqcRYGate(q, 2.0784638080485234, 10);
  sqcRYGate(q, 1.7894941909731246, 11);
  sqcRYGate(q, 0.9569225490470388, 12);
  sqcRYGate(q, 1.7994454660013863, 13);
  sqcRYGate(q, 3.0495975589949387, 14);
  sqcRYGate(q, -2.551857285017462, 15);
  sqcRYGate(q, 0.7695157912225392, 16);
  sqcRYGate(q, 0.7250209825980498, 17);
  sqcRYGate(q, 0.7146473883745255, 18);
  sqcRYGate(q, 0.5303393089196111, 19);

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
