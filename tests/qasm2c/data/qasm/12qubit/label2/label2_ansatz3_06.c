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

  sqcRYGate(q, 1.9509810687004423, 0);
  sqcRZGate(q, 3.1276579705075016, 0);
  sqcRYGate(q, -2.364622976000848, 1);
  sqcRZGate(q, 0.016770736969652186, 1);
  sqcRYGate(q, -2.343281509827671, 2);
  sqcRZGate(q, -3.103734120541816, 2);
  sqcRYGate(q, 0.00011382664633963202, 3);
  sqcRZGate(q, -0.32284280281866123, 3);
  sqcRYGate(q, -3.1415746237038062, 4);
  sqcRZGate(q, -1.8980394007415284, 4);
  sqcRYGate(q, -2.923538238177053, 5);
  sqcRZGate(q, -0.16347425190102619, 5);
  sqcRYGate(q, 1.9195796034963453, 6);
  sqcRZGate(q, -1.8945702788540046, 6);
  sqcRYGate(q, -0.00012892573364542415, 7);
  sqcRZGate(q, 0.20717846528785608, 7);
  sqcRYGate(q, -2.8652507936044458e-05, 8);
  sqcRZGate(q, 2.179499871760868, 8);
  sqcRYGate(q, -0.03400913418222137, 9);
  sqcRZGate(q, -0.04217933263629093, 9);
  sqcRYGate(q, 1.695553079057513, 10);
  sqcRZGate(q, 3.0670402186767523, 10);
  sqcRYGate(q, -0.048951105212665616, 11);
  sqcRZGate(q, -2.8332948785499754, 11);
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
  sqcRYGate(q, 1.7146186530681033, 0);
  sqcRZGate(q, -1.3595979873337027, 0);
  sqcRYGate(q, 1.5187883895582688, 1);
  sqcRZGate(q, 1.6706577548339003, 1);
  sqcRYGate(q, 0.42437563205540924, 2);
  sqcRZGate(q, -3.0975411714559464, 2);
  sqcRYGate(q, 4.932339003804742e-05, 3);
  sqcRZGate(q, -2.1730072936171783, 3);
  sqcRYGate(q, 1.645112974255905, 4);
  sqcRZGate(q, 1.5797497334921646, 4);
  sqcRYGate(q, 1.7859913677048196, 5);
  sqcRZGate(q, 3.106379982933098, 5);
  sqcRYGate(q, -0.8519142305774453, 6);
  sqcRZGate(q, 0.4250663204487948, 6);
  sqcRYGate(q, -0.00012073031879999974, 7);
  sqcRZGate(q, 1.2329346022182, 7);
  sqcRYGate(q, 1.5745398710737266, 8);
  sqcRZGate(q, 1.8167959450215614, 8);
  sqcRYGate(q, -1.5367585266976345, 9);
  sqcRZGate(q, 0.2886743550531224, 9);
  sqcRYGate(q, 1.9275043267890375, 10);
  sqcRZGate(q, 2.828841121820578, 10);
  sqcRYGate(q, 1.5764793526226493, 11);
  sqcRZGate(q, 1.2322734551348784, 11);
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
  sqcRYGate(q, -1.3568612345863462, 0);
  sqcRZGate(q, -2.266677604950486, 0);
  sqcRYGate(q, 1.768781691536563, 1);
  sqcRZGate(q, 0.45285794260588824, 1);
  sqcRYGate(q, 0.1264707772988385, 2);
  sqcRZGate(q, -1.0768918276128976, 2);
  sqcRYGate(q, -0.019027998692378967, 3);
  sqcRZGate(q, 1.7330397602171843, 3);
  sqcRYGate(q, 3.14157626797719, 4);
  sqcRZGate(q, 0.2604435364691202, 4);
  sqcRYGate(q, -1.570795593736194, 5);
  sqcRZGate(q, -1.2377392842222896, 5);
  sqcRYGate(q, 1.570773360680536, 6);
  sqcRZGate(q, -1.5673972591470955, 6);
  sqcRYGate(q, 1.5708469753188379, 7);
  sqcRZGate(q, 2.962194775102525, 7);
  sqcRYGate(q, -3.141440502396399, 8);
  sqcRZGate(q, 0.2400584559059911, 8);
  sqcRYGate(q, 3.1098570248249007, 9);
  sqcRZGate(q, -1.6959701065983597, 9);
  sqcRYGate(q, -1.571148000885166, 10);
  sqcRZGate(q, 2.895305831452912, 10);
  sqcRYGate(q, -0.04499816173962512, 11);
  sqcRZGate(q, -0.6232049209404718, 11);
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
  sqcRYGate(q, 0.30369101461875836, 0);
  sqcRZGate(q, 0.09516933457391108, 0);
  sqcRYGate(q, 1.5606208879031553, 1);
  sqcRZGate(q, -0.10596000185386463, 1);
  sqcRYGate(q, 0.003333373505385274, 2);
  sqcRZGate(q, 0.9971968298866781, 2);
  sqcRYGate(q, -1.600427558223694, 3);
  sqcRZGate(q, -1.5690380026186703, 3);
  sqcRYGate(q, 9.115208331245128e-06, 4);
  sqcRZGate(q, -2.0693741080166608, 4);
  sqcRYGate(q, 0.4873955478195342, 5);
  sqcRZGate(q, -0.12219627015518421, 5);
  sqcRYGate(q, -1.5707936164763483, 6);
  sqcRZGate(q, -1.5688105945257833, 6);
  sqcRYGate(q, 1.5684957165061144, 7);
  sqcRZGate(q, -1.5700476417908493, 7);
  sqcRYGate(q, -1.5708236656800525, 8);
  sqcRZGate(q, 1.6867276525815196, 8);
  sqcRYGate(q, -0.38336632797173475, 9);
  sqcRZGate(q, -1.0025314845510211, 9);
  sqcRYGate(q, -3.02455966979919, 10);
  sqcRZGate(q, 2.9107210547366766, 10);
  sqcRYGate(q, -0.02024044786585044, 11);
  sqcRZGate(q, 0.4873448738751742, 11);
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
  sqcRYGate(q, 1.765098399055945, 0);
  sqcRZGate(q, -2.9030630856854533, 0);
  sqcRYGate(q, -1.5646795627430823, 1);
  sqcRZGate(q, -1.0254577149015978, 1);
  sqcRYGate(q, 0.003402597977917716, 2);
  sqcRZGate(q, -0.20707581889178212, 2);
  sqcRYGate(q, 3.020153941453231, 3);
  sqcRZGate(q, -1.692567892660314, 3);
  sqcRYGate(q, -0.00023699170193314245, 4);
  sqcRZGate(q, -1.7388445098318928, 4);
  sqcRYGate(q, -3.1415892309667517, 5);
  sqcRZGate(q, 3.01876879357179, 5);
  sqcRYGate(q, 1.5707703156895905, 6);
  sqcRZGate(q, -1.6724958525297409, 6);
  sqcRYGate(q, -3.141459854436872, 7);
  sqcRZGate(q, 1.5715982275010476, 7);
  sqcRYGate(q, -0.00630780261076147, 8);
  sqcRZGate(q, -0.2031351103920347, 8);
  sqcRYGate(q, -1.0686956305783177e-06, 9);
  sqcRZGate(q, 3.001476595509251, 9);
  sqcRYGate(q, 0.048700550776137774, 10);
  sqcRZGate(q, 1.3797987178285114, 10);
  sqcRYGate(q, -0.03812980952940492, 11);
  sqcRZGate(q, -1.0939220848653912, 11);
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
  sqcRYGate(q, 0.009667114971407587, 0);
  sqcRZGate(q, -1.9121922471309976, 0);
  sqcRYGate(q, -1.5195484891401383, 1);
  sqcRZGate(q, -1.922163310680252, 1);
  sqcRYGate(q, -3.1100422864225963, 2);
  sqcRZGate(q, -0.036846772910735126, 2);
  sqcRYGate(q, -1.89268479870264, 3);
  sqcRZGate(q, 1.3302940065370796, 3);
  sqcRYGate(q, -3.141539025203893, 4);
  sqcRZGate(q, -3.0235819548453535, 4);
  sqcRYGate(q, -2.658165316098235, 5);
  sqcRZGate(q, -1.0447497196583826, 5);
  sqcRYGate(q, -0.02044795085702796, 6);
  sqcRZGate(q, -1.572948553781627, 6);
  sqcRYGate(q, -1.5707954001308915, 7);
  sqcRZGate(q, -1.6269741020266504, 7);
  sqcRYGate(q, -5.9800379930585734e-05, 8);
  sqcRZGate(q, 2.8216203850445005, 8);
  sqcRYGate(q, -1.4068539834944014, 9);
  sqcRZGate(q, -1.0411762381819196, 9);
  sqcRYGate(q, 1.6751994527750795, 10);
  sqcRZGate(q, -1.979462142445966, 10);
  sqcRYGate(q, -1.5580568476015264, 11);
  sqcRZGate(q, -2.971827777535964, 11);
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
  sqcRYGate(q, -0.10187339826690422, 0);
  sqcRZGate(q, 1.8150566324138229, 0);
  sqcRYGate(q, -0.023741428267411102, 1);
  sqcRZGate(q, -0.7002570255178757, 1);
  sqcRYGate(q, 3.942284849856037e-05, 2);
  sqcRZGate(q, -0.24707502677365858, 2);
  sqcRYGate(q, 3.140713932929228, 3);
  sqcRZGate(q, 2.9454377292116285, 3);
  sqcRYGate(q, -0.6709410901019406, 4);
  sqcRZGate(q, 2.1671393007194775, 4);
  sqcRYGate(q, 3.1415926385831487, 5);
  sqcRZGate(q, 2.144965480956494, 5);
  sqcRYGate(q, 3.1389171843785766, 6);
  sqcRZGate(q, -1.664417594743778, 6);
  sqcRYGate(q, 3.093464669886585, 7);
  sqcRZGate(q, -1.623979583619163, 7);
  sqcRYGate(q, -3.1367670962509315, 8);
  sqcRZGate(q, 2.731659823602357, 8);
  sqcRYGate(q, -1.5707769483746539, 9);
  sqcRZGate(q, -1.7685596830237102, 9);
  sqcRYGate(q, 0.0011926898176852774, 10);
  sqcRZGate(q, -2.310965085475047, 10);
  sqcRYGate(q, -1.0953967433867158, 11);
  sqcRZGate(q, 0.28875950458344146, 11);
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
  sqcRYGate(q, -0.008979995282844475, 0);
  sqcRZGate(q, -1.6842628386684393, 0);
  sqcRYGate(q, 0.874166134606825, 1);
  sqcRZGate(q, 2.3932394719315435, 1);
  sqcRYGate(q, 3.1414718046507617, 2);
  sqcRZGate(q, -3.1388230349714012, 2);
  sqcRYGate(q, -1.6853623136133526, 3);
  sqcRZGate(q, -1.2409606237306225, 3);
  sqcRYGate(q, -2.134479010187635e-06, 4);
  sqcRZGate(q, 0.9747601531014488, 4);
  sqcRYGate(q, -0.0006573599265564667, 5);
  sqcRZGate(q, -2.317366944105617, 5);
  sqcRYGate(q, -3.096270275027751, 6);
  sqcRZGate(q, -3.134293211826139, 6);
  sqcRYGate(q, 1.5723530952902918, 7);
  sqcRZGate(q, -2.5092267320048145, 7);
  sqcRYGate(q, -1.5712955749393263, 8);
  sqcRZGate(q, 1.608271232519382, 8);
  sqcRYGate(q, -0.06075423024293037, 9);
  sqcRZGate(q, -0.12217995347656263, 9);
  sqcRYGate(q, 2.9717083653963603, 10);
  sqcRZGate(q, -0.31320762459600543, 10);
  sqcRYGate(q, 1.7991590006435898, 11);
  sqcRZGate(q, 3.1110197349703066, 11);
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
  sqcRYGate(q, -1.7610388574264828, 0);
  sqcRZGate(q, 2.7427127180741886, 0);
  sqcRYGate(q, 1.5710575620304357, 1);
  sqcRZGate(q, 0.03538422878853358, 1);
  sqcRYGate(q, -0.16113781934012902, 2);
  sqcRZGate(q, 2.0896857622807925, 2);
  sqcRYGate(q, -0.0020261381896821704, 3);
  sqcRZGate(q, 2.689337015953897, 3);
  sqcRYGate(q, -0.6705211613233537, 4);
  sqcRZGate(q, -2.522770509820737, 4);
  sqcRYGate(q, -3.113199785232438, 5);
  sqcRZGate(q, -2.1938043677445034, 5);
  sqcRYGate(q, 1.5707733687163623, 6);
  sqcRZGate(q, -0.7324693112315055, 6);
  sqcRYGate(q, 3.138509748399374, 7);
  sqcRZGate(q, -2.531654692280756, 7);
  sqcRYGate(q, -0.004974276797223275, 8);
  sqcRZGate(q, -0.08330215224916286, 8);
  sqcRYGate(q, -2.1883853581705637e-05, 9);
  sqcRZGate(q, 0.36392094150730525, 9);
  sqcRYGate(q, -0.038029239802819144, 10);
  sqcRZGate(q, -1.802959201003791, 10);
  sqcRYGate(q, -0.5261431143477306, 11);
  sqcRZGate(q, -2.599048541426234, 11);
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
  sqcRYGate(q, -0.0008992925166353416, 0);
  sqcRZGate(q, 2.36268866837746, 0);
  sqcRYGate(q, -3.065006991966168, 1);
  sqcRZGate(q, 1.986931797266223, 1);
  sqcRYGate(q, -0.005339728957389959, 2);
  sqcRZGate(q, -0.06521486785830177, 2);
  sqcRYGate(q, 0.016920437647098517, 3);
  sqcRZGate(q, 2.5198594963151795, 3);
  sqcRYGate(q, 0.010744188513944859, 4);
  sqcRZGate(q, -1.0370252014179289, 4);
  sqcRYGate(q, 3.131244461348125, 5);
  sqcRZGate(q, 2.0944296761757526, 5);
  sqcRYGate(q, -3.1314966452356314, 6);
  sqcRZGate(q, -1.156523971511208, 6);
  sqcRYGate(q, -1.577727355287177, 7);
  sqcRZGate(q, 1.1524904435765653, 7);
  sqcRYGate(q, 1.585349575457689, 8);
  sqcRZGate(q, -1.9930514297114375, 8);
  sqcRYGate(q, 3.1260035882138872, 9);
  sqcRZGate(q, -0.16926522795245713, 9);
  sqcRYGate(q, 2.9610108263448676, 10);
  sqcRZGate(q, 1.0126037515524942, 10);
  sqcRYGate(q, 2.6943677117307114, 11);
  sqcRZGate(q, 2.6428942664316537, 11);

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
