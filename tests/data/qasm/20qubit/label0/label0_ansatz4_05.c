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

  sqcRYGate(q, 2.2176088026285043, 0);
  sqcRZGate(q, 0.4014319063019558, 0);
  sqcRYGate(q, 2.8213380789589246, 1);
  sqcRZGate(q, 1.1448211924638896, 1);
  sqcRYGate(q, -3.1415468345621274, 2);
  sqcRZGate(q, -0.5886974894390189, 2);
  sqcRYGate(q, -3.1391191111542978, 3);
  sqcRZGate(q, -0.5635713383481583, 3);
  sqcRYGate(q, 1.598537280974356, 4);
  sqcRZGate(q, 2.8659522482352786, 4);
  sqcRYGate(q, -2.9059215612692797, 5);
  sqcRZGate(q, -1.287024239129111, 5);
  sqcRYGate(q, -0.00020346918458005048, 6);
  sqcRZGate(q, 1.671219045403145, 6);
  sqcRYGate(q, 3.140792202488783, 7);
  sqcRZGate(q, -1.8727752646970937, 7);
  sqcRYGate(q, -0.290609184272431, 8);
  sqcRZGate(q, 3.111456054902552, 8);
  sqcRYGate(q, 1.009540509996378, 9);
  sqcRZGate(q, 3.1237595048525977, 9);
  sqcRYGate(q, -3.1242460553496763, 10);
  sqcRZGate(q, 1.1609235208801796, 10);
  sqcRYGate(q, -0.01731661908507398, 11);
  sqcRZGate(q, 2.2335856908097442, 11);
  sqcRYGate(q, 1.7989340141456516, 12);
  sqcRZGate(q, 2.4325648415298007, 12);
  sqcRYGate(q, 0.2207536488144281, 13);
  sqcRZGate(q, 0.33730670717689726, 13);
  sqcRYGate(q, 1.7123352028052334, 14);
  sqcRZGate(q, 2.2348895062551075, 14);
  sqcRYGate(q, 3.1078678460097255, 15);
  sqcRZGate(q, 2.178791172792817, 15);
  sqcRYGate(q, -1.110295203561546, 16);
  sqcRZGate(q, 2.6607862780266944, 16);
  sqcRYGate(q, -0.3028721615820494, 17);
  sqcRZGate(q, -1.8272970295082334, 17);
  sqcRYGate(q, 3.0907820314679295, 18);
  sqcRZGate(q, 2.264574665209362, 18);
  sqcRYGate(q, -0.1468228438237924, 19);
  sqcRZGate(q, 1.082140153849939, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.0316812422361075, 0);
  sqcRZGate(q, 2.5819180599599147, 0);
  sqcRYGate(q, -2.014653781482694, 1);
  sqcRZGate(q, 2.3546574602762536, 1);
  sqcRYGate(q, -2.8390498132241646, 2);
  sqcRZGate(q, -1.3649916379613738, 2);
  sqcRYGate(q, 1.5586360173712768, 3);
  sqcRZGate(q, -1.9695634626513512, 3);
  sqcRYGate(q, -1.533650891642243, 4);
  sqcRZGate(q, 1.2451733542874124, 4);
  sqcRYGate(q, -0.047005343502701843, 5);
  sqcRZGate(q, -0.2444398705075918, 5);
  sqcRYGate(q, 3.1380833877096026, 6);
  sqcRZGate(q, -2.856571027104053, 6);
  sqcRYGate(q, -1.573438733795971, 7);
  sqcRZGate(q, -3.103963751920953, 7);
  sqcRYGate(q, 2.9872592708156787, 8);
  sqcRZGate(q, 0.6843374373088611, 8);
  sqcRYGate(q, -2.176114609131597, 9);
  sqcRZGate(q, -1.7583076776600373, 9);
  sqcRYGate(q, 2.7857333779900273, 10);
  sqcRZGate(q, -3.107643136924345, 10);
  sqcRYGate(q, -0.103088042641381, 11);
  sqcRZGate(q, -0.3779528505472306, 11);
  sqcRYGate(q, 3.0989416027357453, 12);
  sqcRZGate(q, -2.213072935637761, 12);
  sqcRYGate(q, 0.24488778102922623, 13);
  sqcRZGate(q, -1.0614802933589018, 13);
  sqcRYGate(q, -3.1413438258653055, 14);
  sqcRZGate(q, -0.9399455349559592, 14);
  sqcRYGate(q, -0.0005716214730954473, 15);
  sqcRZGate(q, 1.446440795039213, 15);
  sqcRYGate(q, -3.1399513721156946, 16);
  sqcRZGate(q, -2.0530913878658703, 16);
  sqcRYGate(q, 0.0006724035012112806, 17);
  sqcRZGate(q, 1.8398839821142914, 17);
  sqcRYGate(q, 1.598111711147355, 18);
  sqcRZGate(q, 0.0014071410137826454, 18);
  sqcRYGate(q, -0.2572684843281789, 19);
  sqcRZGate(q, -0.7996688791209682, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.553751165888508, 0);
  sqcRZGate(q, 1.547178686283233, 0);
  sqcRYGate(q, 3.0194430662142926, 1);
  sqcRZGate(q, 2.7368326201153734, 1);
  sqcRYGate(q, 3.1118960609551203, 2);
  sqcRZGate(q, 0.7815152797142513, 2);
  sqcRYGate(q, -3.138392175685443, 3);
  sqcRZGate(q, 2.7870053547537323, 3);
  sqcRYGate(q, 0.028627618812698152, 4);
  sqcRZGate(q, 2.4027655454471657, 4);
  sqcRYGate(q, 2.9295996976318057, 5);
  sqcRZGate(q, -2.706035158195052, 5);
  sqcRYGate(q, 0.2770073493885006, 6);
  sqcRZGate(q, 0.06034522574939233, 6);
  sqcRYGate(q, -3.1382049405397208, 7);
  sqcRZGate(q, 0.03826282024493377, 7);
  sqcRYGate(q, -0.00012122499459438511, 8);
  sqcRZGate(q, 0.9115362350852673, 8);
  sqcRYGate(q, 0.00020242943224603766, 9);
  sqcRZGate(q, -2.9054712878010776, 9);
  sqcRYGate(q, 1.453068773535331, 10);
  sqcRZGate(q, 0.8897174752150628, 10);
  sqcRYGate(q, -0.1504145544576697, 11);
  sqcRZGate(q, 1.4915112834418496, 11);
  sqcRYGate(q, 0.6779199676156048, 12);
  sqcRZGate(q, -0.5222539230847332, 12);
  sqcRYGate(q, 3.1023645829241833, 13);
  sqcRZGate(q, -2.6553634897900267, 13);
  sqcRYGate(q, -1.4473905031327146, 14);
  sqcRZGate(q, -0.8310746383730635, 14);
  sqcRYGate(q, 1.6065537819255002, 15);
  sqcRZGate(q, 2.9421210879821538, 15);
  sqcRYGate(q, -3.0988668481763253, 16);
  sqcRZGate(q, 2.012842707439638, 16);
  sqcRYGate(q, -1.581387603286627, 17);
  sqcRZGate(q, -1.409873332245299, 17);
  sqcRYGate(q, 1.6271362748756448, 18);
  sqcRZGate(q, 1.0522245298455888, 18);
  sqcRYGate(q, 3.1282343036047653, 19);
  sqcRZGate(q, -1.8441684577783437, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5805639139982, 0);
  sqcRZGate(q, -0.1330270791918308, 0);
  sqcRYGate(q, -0.03193869395297266, 1);
  sqcRZGate(q, -1.58960245109275, 1);
  sqcRYGate(q, -3.1360162005367096, 2);
  sqcRZGate(q, 3.078317726224186, 2);
  sqcRYGate(q, -0.001194661047287049, 3);
  sqcRZGate(q, -1.6778024148977275, 3);
  sqcRYGate(q, -0.29646692622457493, 4);
  sqcRZGate(q, -0.11003893043866597, 4);
  sqcRYGate(q, -0.11546893579624838, 5);
  sqcRZGate(q, -2.6130332811811585, 5);
  sqcRYGate(q, -1.5783054664773033, 6);
  sqcRZGate(q, 0.27092233573712843, 6);
  sqcRYGate(q, -1.57101451685155, 7);
  sqcRZGate(q, -2.158619435461083, 7);
  sqcRYGate(q, 3.055603019686808, 8);
  sqcRZGate(q, -1.2713738958855503, 8);
  sqcRYGate(q, 0.23701342598309338, 9);
  sqcRZGate(q, 2.8713149955841724, 9);
  sqcRYGate(q, 1.4222216938683285, 10);
  sqcRZGate(q, 2.6384192392307853, 10);
  sqcRYGate(q, -0.5967734739278674, 11);
  sqcRZGate(q, 1.7260900373661245, 11);
  sqcRYGate(q, 0.00023664086318273242, 12);
  sqcRZGate(q, 0.33854066465372035, 12);
  sqcRYGate(q, 3.141517124951775, 13);
  sqcRZGate(q, 1.3571550092580438, 13);
  sqcRYGate(q, -0.0011872914462003334, 14);
  sqcRZGate(q, -1.1612287689257565, 14);
  sqcRYGate(q, 8.155446715374381e-05, 15);
  sqcRZGate(q, -3.04976779559486, 15);
  sqcRYGate(q, 0.0007878159661842687, 16);
  sqcRZGate(q, 3.0391181190700842, 16);
  sqcRYGate(q, -2.7556326036885834, 17);
  sqcRZGate(q, -2.7596862120052545, 17);
  sqcRYGate(q, -1.7071044697866933, 18);
  sqcRZGate(q, 0.9814979409218968, 18);
  sqcRYGate(q, -3.1364402620766176, 19);
  sqcRZGate(q, 1.3004678518216373, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.4700127265122145, 0);
  sqcRZGate(q, -1.0185411896412706, 0);
  sqcRYGate(q, -0.4861594665124935, 1);
  sqcRZGate(q, 1.0283168876726734, 1);
  sqcRYGate(q, 3.079246933302468, 2);
  sqcRZGate(q, -2.2222675347559155, 2);
  sqcRYGate(q, -0.14357537371924678, 3);
  sqcRZGate(q, 0.6053242091904137, 3);
  sqcRYGate(q, 1.2800760071513937, 4);
  sqcRZGate(q, -0.00545259521750975, 4);
  sqcRYGate(q, 2.5105491927404695, 5);
  sqcRZGate(q, 0.0007731841845228673, 5);
  sqcRYGate(q, -3.1406044463874903, 6);
  sqcRZGate(q, -0.3172599210156465, 6);
  sqcRYGate(q, 0.048766114498693364, 7);
  sqcRZGate(q, -2.59463591523207, 7);
  sqcRYGate(q, -0.0012907279627505375, 8);
  sqcRZGate(q, -0.11550371165860529, 8);
  sqcRYGate(q, 0.0003233033577784722, 9);
  sqcRZGate(q, -1.372560800998078, 9);
  sqcRYGate(q, -1.3148471158332817, 10);
  sqcRZGate(q, -1.2295326939130584, 10);
  sqcRYGate(q, 1.0453457952811718, 11);
  sqcRZGate(q, 1.5285968758756203, 11);
  sqcRYGate(q, -0.4763728712506872, 12);
  sqcRZGate(q, -2.0745510658454585, 12);
  sqcRYGate(q, -3.113250431557927, 13);
  sqcRZGate(q, 0.4568886743539196, 13);
  sqcRYGate(q, 1.5538400740422602, 14);
  sqcRZGate(q, 0.29920931180418364, 14);
  sqcRYGate(q, -1.5754203028345235, 15);
  sqcRZGate(q, 2.7441229032267653, 15);
  sqcRYGate(q, 3.140422263417303, 16);
  sqcRZGate(q, -2.3303486001352827, 16);
  sqcRYGate(q, -2.842942053406476, 17);
  sqcRZGate(q, 1.7575891535543589, 17);
  sqcRYGate(q, 3.11477002710542, 18);
  sqcRZGate(q, -2.323880864178538, 18);
  sqcRYGate(q, 3.140385316183473, 19);
  sqcRZGate(q, -1.023982819936072, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.14010118671215013, 0);
  sqcRZGate(q, 1.2790963311717656, 0);
  sqcRYGate(q, -1.5724341930625296, 1);
  sqcRZGate(q, 0.07150120249190108, 1);
  sqcRYGate(q, -3.1413649104414727, 2);
  sqcRZGate(q, 0.05386162797332349, 2);
  sqcRYGate(q, -6.403935581111854e-05, 3);
  sqcRZGate(q, -0.5436599340797782, 3);
  sqcRYGate(q, -0.37002878997190874, 4);
  sqcRZGate(q, 3.1359798193860375, 4);
  sqcRYGate(q, 2.9177706616288375, 5);
  sqcRZGate(q, 0.16987978669812426, 5);
  sqcRYGate(q, 3.1410755838052187, 6);
  sqcRZGate(q, -2.157901681439816, 6);
  sqcRYGate(q, 0.000291181805660731, 7);
  sqcRZGate(q, -0.0438277943750752, 7);
  sqcRYGate(q, -3.133971428732033, 8);
  sqcRZGate(q, -1.4030429401557027, 8);
  sqcRYGate(q, -0.04607437836242845, 9);
  sqcRZGate(q, 1.5799363799949953, 9);
  sqcRYGate(q, 2.4480681462259652, 10);
  sqcRZGate(q, -0.7319327392223284, 10);
  sqcRYGate(q, -2.3751194353836507, 11);
  sqcRZGate(q, -2.7898259233033706, 11);
  sqcRYGate(q, -0.025686665253247497, 12);
  sqcRZGate(q, 2.2164647784915323, 12);
  sqcRYGate(q, 0.05084711410312559, 13);
  sqcRZGate(q, -1.6729387719455695, 13);
  sqcRYGate(q, -9.16287089580692e-06, 14);
  sqcRZGate(q, -1.8829413376134807, 14);
  sqcRYGate(q, 3.1402193014806294, 15);
  sqcRZGate(q, 2.7879552491577786, 15);
  sqcRYGate(q, 1.5713734103171182, 16);
  sqcRZGate(q, 1.5778213684379827, 16);
  sqcRYGate(q, -1.5707497423776795, 17);
  sqcRZGate(q, -1.3230542641134022, 17);
  sqcRYGate(q, -1.5507929729746994, 18);
  sqcRZGate(q, 1.6222813474863411, 18);
  sqcRYGate(q, -0.01693494518068992, 19);
  sqcRZGate(q, -2.8990674230528213, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.607882853590533, 0);
  sqcRZGate(q, 0.08712142357930405, 0);
  sqcRYGate(q, 0.8581273288316726, 1);
  sqcRZGate(q, 1.6183223582816852, 1);
  sqcRYGate(q, 2.8661530113843083, 2);
  sqcRZGate(q, -0.05905661956675878, 2);
  sqcRYGate(q, -3.078334906609273, 3);
  sqcRZGate(q, 0.717806810846782, 3);
  sqcRYGate(q, 1.8773643276734586, 4);
  sqcRZGate(q, -0.8549855453975778, 4);
  sqcRYGate(q, -2.583228909793321, 5);
  sqcRZGate(q, -1.7528128331508546, 5);
  sqcRYGate(q, 1.5787257931976493, 6);
  sqcRZGate(q, -3.138455581365341, 6);
  sqcRYGate(q, -1.6034137476495856, 7);
  sqcRZGate(q, 0.09477949824610032, 7);
  sqcRYGate(q, -0.2313699024933285, 8);
  sqcRZGate(q, 1.2609440847686129, 8);
  sqcRYGate(q, 3.11317127852859, 9);
  sqcRZGate(q, 1.1015133024150856, 9);
  sqcRYGate(q, -2.7836410900267703, 10);
  sqcRZGate(q, 1.6651015983292867, 10);
  sqcRYGate(q, 2.514720654462893, 11);
  sqcRZGate(q, 0.35803817654903375, 11);
  sqcRYGate(q, 1.3359540646236905, 12);
  sqcRZGate(q, -0.959866823018522, 12);
  sqcRYGate(q, 0.9548035604985885, 13);
  sqcRZGate(q, -0.2583809363966296, 13);
  sqcRYGate(q, 0.052603154566274846, 14);
  sqcRZGate(q, -1.2346197991077672, 14);
  sqcRYGate(q, 2.9184610048150392, 15);
  sqcRZGate(q, 0.9162328264476464, 15);
  sqcRYGate(q, -1.0503794607462895, 16);
  sqcRZGate(q, 1.5679432591937355, 16);
  sqcRYGate(q, 0.01007208017392116, 17);
  sqcRZGate(q, 2.88481932958088, 17);
  sqcRYGate(q, -1.0491198749079165, 18);
  sqcRZGate(q, -1.1472129054573363, 18);
  sqcRYGate(q, -0.05480841985945773, 19);
  sqcRZGate(q, 1.2910034572809335, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.57354385553487, 0);
  sqcRZGate(q, -2.2988157063758115, 0);
  sqcRYGate(q, 1.5640908455831104, 1);
  sqcRZGate(q, 1.5574164035355347, 1);
  sqcRYGate(q, -0.0020318127598217828, 2);
  sqcRZGate(q, 1.601586790273088, 2);
  sqcRYGate(q, 3.141290308995163, 3);
  sqcRZGate(q, -0.8545832253965954, 3);
  sqcRYGate(q, -3.1286678438722197, 4);
  sqcRZGate(q, 1.788604001888559, 4);
  sqcRYGate(q, 0.011710937327667554, 5);
  sqcRZGate(q, -1.773231434926144, 5);
  sqcRYGate(q, 1.65649892661501, 6);
  sqcRZGate(q, 1.0313114783247732, 6);
  sqcRYGate(q, -1.5709595037280777, 7);
  sqcRZGate(q, -2.4369421533295603, 7);
  sqcRYGate(q, -3.1413875062944228, 8);
  sqcRZGate(q, -0.29815678599426426, 8);
  sqcRYGate(q, -0.0012340103584760345, 9);
  sqcRZGate(q, 0.4848146640097486, 9);
  sqcRYGate(q, -3.1087737675007356, 10);
  sqcRZGate(q, 0.049848937364043173, 10);
  sqcRYGate(q, -0.020923126176763063, 11);
  sqcRZGate(q, -2.446163614605942, 11);
  sqcRYGate(q, -0.010573809138014806, 12);
  sqcRZGate(q, 2.3135983449714814, 12);
  sqcRYGate(q, 0.05202029002518582, 13);
  sqcRZGate(q, -1.469749851519519, 13);
  sqcRYGate(q, -0.002013041222391032, 14);
  sqcRZGate(q, -0.3207937301458561, 14);
  sqcRYGate(q, 3.135759223777995, 15);
  sqcRZGate(q, 2.501783693758699, 15);
  sqcRYGate(q, -1.577206088517494, 16);
  sqcRZGate(q, 1.5908809335208438, 16);
  sqcRYGate(q, -1.5716923558044085, 17);
  sqcRZGate(q, 1.5681949720885209, 17);
  sqcRYGate(q, -3.1332589890367877, 18);
  sqcRZGate(q, -2.6696421386049023, 18);
  sqcRYGate(q, -3.1369736003831115, 19);
  sqcRZGate(q, -0.18542943726216746, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.086978487385148, 0);
  sqcRZGate(q, 0.9081973822765435, 0);
  sqcRYGate(q, 1.9759245268222132, 1);
  sqcRZGate(q, -2.773724279373076, 1);
  sqcRYGate(q, 1.584176961301476, 2);
  sqcRZGate(q, 0.0999147885114695, 2);
  sqcRYGate(q, 1.6012383471470333, 3);
  sqcRZGate(q, 1.558545797348783, 3);
  sqcRYGate(q, -1.571058660937637, 4);
  sqcRZGate(q, -3.1384687340681863, 4);
  sqcRYGate(q, -1.5706202433350491, 5);
  sqcRZGate(q, 3.141090780237608, 5);
  sqcRYGate(q, -0.0005894174803406925, 6);
  sqcRZGate(q, 2.110107397976588, 6);
  sqcRYGate(q, 3.136843807632648, 7);
  sqcRZGate(q, 2.2732253102337516, 7);
  sqcRYGate(q, 1.5827320096234516, 8);
  sqcRZGate(q, 3.139695514623281, 8);
  sqcRYGate(q, -1.539149817082919, 9);
  sqcRZGate(q, 0.006349746216520735, 9);
  sqcRYGate(q, 0.7387416246841854, 10);
  sqcRZGate(q, 2.297103269322624, 10);
  sqcRYGate(q, 2.62241536207869, 11);
  sqcRZGate(q, 2.100546348878485, 11);
  sqcRYGate(q, -1.6846022128670572, 12);
  sqcRZGate(q, 0.1766306595488434, 12);
  sqcRYGate(q, -1.3210453972668408, 13);
  sqcRZGate(q, 2.258744691442497, 13);
  sqcRYGate(q, 1.633264985644093, 14);
  sqcRZGate(q, -1.5813351291956392, 14);
  sqcRYGate(q, 1.5722598715765024, 15);
  sqcRZGate(q, 3.13714257998392, 15);
  sqcRYGate(q, -1.5682591660925445, 16);
  sqcRZGate(q, 3.141124114136849, 16);
  sqcRYGate(q, 0.44672601669640527, 17);
  sqcRZGate(q, 1.5718088918339506, 17);
  sqcRYGate(q, 1.570682838401746, 18);
  sqcRZGate(q, -3.1415461158107725, 18);
  sqcRYGate(q, -1.5708231902424297, 19);
  sqcRZGate(q, -2.3553084644300073e-05, 19);

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
