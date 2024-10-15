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

  sqcRYGate(q, -1.6961900018947134, 0);
  sqcRYGate(q, 2.225771962305994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6392711200868846, 0);
  sqcRYGate(q, -1.2330180649616562, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.112173130252054, 2);
  sqcRYGate(q, 1.2476322030822358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8891988581032102, 2);
  sqcRYGate(q, 0.9947115645736339, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.25668984519107363, 4);
  sqcRYGate(q, 1.8915202091201835, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1349696475038706, 4);
  sqcRYGate(q, 2.5895780329449956, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5109991796020712, 6);
  sqcRYGate(q, 2.98808811720059, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9937661256685066, 6);
  sqcRYGate(q, -2.997097683328007, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7867406116888578, 8);
  sqcRYGate(q, -1.7351207908350768, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.7738277459746522, 8);
  sqcRYGate(q, -1.360140416617444, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9157207734310195, 10);
  sqcRYGate(q, 0.9183034817303602, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5644693927906523, 10);
  sqcRYGate(q, -2.608698056876418, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.1373023976448557, 1);
  sqcRYGate(q, -1.5638483319126122, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8326067463756557, 1);
  sqcRYGate(q, 0.14747196943847615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7537550687018735, 3);
  sqcRYGate(q, 3.0697960867507565, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1362923475916484, 3);
  sqcRYGate(q, 2.2057161418019424, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8002665676524723, 5);
  sqcRYGate(q, -0.8016472444349674, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6069119696199068, 5);
  sqcRYGate(q, 0.026438674821688934, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.06713586791030596, 7);
  sqcRYGate(q, 2.3811197466643015, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.1875156391151929, 7);
  sqcRYGate(q, -2.462713921674681, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.3014167354297701, 9);
  sqcRYGate(q, -0.6232606445658542, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1403583551791328, 9);
  sqcRYGate(q, 3.128131600086722, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.6894385063901587, 0);
  sqcRYGate(q, -2.0982156494442874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7735677060131447, 0);
  sqcRYGate(q, -0.9348796976853062, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6491271985511202, 2);
  sqcRYGate(q, -1.4205988289886191, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6592394960751831, 2);
  sqcRYGate(q, -3.050257555112229, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6832956975753282, 4);
  sqcRYGate(q, -2.626378540824786, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.125579187540495, 4);
  sqcRYGate(q, 2.031590259502228, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3168266131324478, 6);
  sqcRYGate(q, -2.2363719948248284, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.018798679383875, 6);
  sqcRYGate(q, -2.1042579065295595, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4720489377765322, 8);
  sqcRYGate(q, 1.1279603061116639, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.085485345507258, 8);
  sqcRYGate(q, 1.0360618492794824, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.9765871674879762, 10);
  sqcRYGate(q, 2.7553090112151803, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.2488031585859547, 10);
  sqcRYGate(q, 2.0774082501794218, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0127798132814605, 1);
  sqcRYGate(q, 2.3182656836271427, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3941069737491605, 1);
  sqcRYGate(q, -2.2506548398848985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3680138215533832, 3);
  sqcRYGate(q, 1.2311091540132457, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.615098901919293, 3);
  sqcRYGate(q, -1.3109755411249389, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.323710943183933, 5);
  sqcRYGate(q, 1.5468087514950941, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3827476716443403, 5);
  sqcRYGate(q, 1.8371525177720345, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6966527425514695, 7);
  sqcRYGate(q, 1.3936665593659328, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.505462665092371, 7);
  sqcRYGate(q, 2.613778073229292, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.6372540281963524, 9);
  sqcRYGate(q, -2.2637130282234192, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0178351707447613, 9);
  sqcRYGate(q, 1.9840276616148378, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.7272014035679648, 0);
  sqcRYGate(q, 2.9146082770717197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4385534179583346, 0);
  sqcRYGate(q, -1.8289193049728623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.01215484942982035, 2);
  sqcRYGate(q, 0.7504441971537466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.026015897861520365, 2);
  sqcRYGate(q, 3.023280674553828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.74782585568701, 4);
  sqcRYGate(q, -0.7496460890973928, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.012807052833296417, 4);
  sqcRYGate(q, -0.12999948520648807, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0884849493479756, 6);
  sqcRYGate(q, -1.5596831528664845, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.190182579073173, 6);
  sqcRYGate(q, 2.8298268324411135, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5149631578689773, 8);
  sqcRYGate(q, -2.5198276799098256, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4320183951907148, 8);
  sqcRYGate(q, 2.0390922989545377, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.267999216160553, 10);
  sqcRYGate(q, -1.832950499778092, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6160356805881841, 10);
  sqcRYGate(q, -3.071644812807279, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.973305736923774, 1);
  sqcRYGate(q, -2.00173183394077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1165445525718092, 1);
  sqcRYGate(q, 3.019295423970487, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.33846689034397937, 3);
  sqcRYGate(q, 0.46261025614865225, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4244430780169035, 3);
  sqcRYGate(q, 1.5005436991159444, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.610320540952567, 5);
  sqcRYGate(q, 1.2503452952151468, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5747735338221365, 5);
  sqcRYGate(q, 0.6222390146991881, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.685530603729025, 7);
  sqcRYGate(q, -0.3545762282971044, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.804102601665276, 7);
  sqcRYGate(q, -0.4720142930783877, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5063729050373258, 9);
  sqcRYGate(q, -2.4910129805265666, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.725531180187248, 9);
  sqcRYGate(q, -3.0011729986862874, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.023579183124188496, 0);
  sqcRYGate(q, 1.9350510424328302, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.90274153230893, 0);
  sqcRYGate(q, 0.34806032213353877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.577137361696411, 2);
  sqcRYGate(q, 0.6014606544902872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.23305555160240848, 2);
  sqcRYGate(q, 2.8849388284082003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.31053878130853463, 4);
  sqcRYGate(q, -2.204095167350409, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.030005090987951063, 4);
  sqcRYGate(q, -3.134967308078616, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7295463115079056, 6);
  sqcRYGate(q, 1.7274409379024642, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.002951361428181087, 6);
  sqcRYGate(q, -4.0081835932655485e-05, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8873285603575427, 8);
  sqcRYGate(q, -0.6314934365730762, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0535897330353539, 8);
  sqcRYGate(q, -0.622638640468355, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4929670314363264, 10);
  sqcRYGate(q, -3.109085707975381, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.25902155607885236, 10);
  sqcRYGate(q, -1.6314680448083898, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.07219252133487153, 1);
  sqcRYGate(q, -2.7216044919007607, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.02883398223434561, 1);
  sqcRYGate(q, 3.1201493741617297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.183663928674857, 3);
  sqcRYGate(q, -2.0443063286539287, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0014508817102845, 3);
  sqcRYGate(q, -2.4396260491415145, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6306467383136296, 5);
  sqcRYGate(q, -0.025342672422810075, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0272387525082713, 5);
  sqcRYGate(q, -0.5257211931128589, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.10983336013182576, 7);
  sqcRYGate(q, -2.523091273446177, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.1962317109028184, 7);
  sqcRYGate(q, -1.239714580886676, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.2475158989421153, 9);
  sqcRYGate(q, 0.23073710941183875, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.6401302948613701, 9);
  sqcRYGate(q, 3.094298398274821, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.14614468458466678, 0);
  sqcRYGate(q, 0.8165946938303605, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8323561925598222, 0);
  sqcRYGate(q, 0.5336628029294789, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.937090151391019, 2);
  sqcRYGate(q, 1.6156222557552846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17754552057483064, 2);
  sqcRYGate(q, -1.444175236522188, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.17738031621744826, 4);
  sqcRYGate(q, 0.16442564136002158, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4699124796763292, 4);
  sqcRYGate(q, -3.1091494480702284, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.38113201573006, 6);
  sqcRYGate(q, 0.8555818046318654, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0052203509094592765, 6);
  sqcRYGate(q, -0.0012102289675510903, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.842087553621411, 8);
  sqcRYGate(q, -0.06106772966519092, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0924397871464877, 8);
  sqcRYGate(q, 0.09157538070051086, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9430990475101689, 10);
  sqcRYGate(q, -2.1678348445803355, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.069253295441275, 10);
  sqcRYGate(q, -1.5046614728026495, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0999839432842127, 1);
  sqcRYGate(q, 1.2056116771319043, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.14590025294184605, 1);
  sqcRYGate(q, -0.22157389124155827, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.768158256209013, 3);
  sqcRYGate(q, 2.849244548311485, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.038884410252429724, 3);
  sqcRYGate(q, -2.5900012235416074, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.116748491086753, 5);
  sqcRYGate(q, 2.6094562286294867, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.008397171063135, 5);
  sqcRYGate(q, 2.9899138321674346, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.749686348440492, 7);
  sqcRYGate(q, -3.1054680530710956, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4212661999049878, 7);
  sqcRYGate(q, -1.4063645665696605, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5917543655717692, 9);
  sqcRYGate(q, -3.021417421868559, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4275260561955303, 9);
  sqcRYGate(q, -0.11486301116375831, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.36361653089358636, 0);
  sqcRYGate(q, 0.5915385100940167, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.022162217015166, 0);
  sqcRYGate(q, 2.662783528677231, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3361844030136285, 2);
  sqcRYGate(q, -0.5572369255586045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.062352392420996, 2);
  sqcRYGate(q, 0.21017092213485533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13450746595806115, 4);
  sqcRYGate(q, -2.547144376922809, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8033799816485803, 4);
  sqcRYGate(q, -1.4125350485943429, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.590300679135917, 6);
  sqcRYGate(q, 2.92415424479984, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0006398838450108731, 6);
  sqcRYGate(q, 1.9385022042648954, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4433074635996397, 8);
  sqcRYGate(q, 0.5919876556399526, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9697927555061256, 8);
  sqcRYGate(q, 0.7384284249969176, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5644810324566263, 10);
  sqcRYGate(q, -2.4682509218461477, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.14829861049445192, 10);
  sqcRYGate(q, 1.1633446483648004, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.91203074380882, 1);
  sqcRYGate(q, 0.003229798909464329, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6370518281548265, 1);
  sqcRYGate(q, -2.575800692348841, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7079930280275922, 3);
  sqcRYGate(q, -2.919590076564724, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.05798249356190371, 3);
  sqcRYGate(q, -2.031272994592797, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.41457535853820515, 5);
  sqcRYGate(q, 1.6527630640877022, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0570151132174814, 5);
  sqcRYGate(q, 2.766447339885142, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.10308965316387386, 7);
  sqcRYGate(q, -1.6747775698334575, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.265472713802657, 7);
  sqcRYGate(q, -3.134864843560759, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.7462846945334798, 9);
  sqcRYGate(q, -2.25764656583271, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.892614504651962, 9);
  sqcRYGate(q, 0.10293346759231169, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.19815168589167256, 0);
  sqcRYGate(q, 0.37375883769078755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.076096990974124, 0);
  sqcRYGate(q, 1.3040718615136684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.827419590311842, 2);
  sqcRYGate(q, -0.9329700739780119, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0475216240437146, 2);
  sqcRYGate(q, 3.133225900398276, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.901070162577684, 4);
  sqcRYGate(q, 2.0608680664613055, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7298981036839018, 4);
  sqcRYGate(q, 2.7542170811418036, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.465517775508184, 6);
  sqcRYGate(q, -2.784449415726402, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0913779113840336, 6);
  sqcRYGate(q, -0.7105552740649931, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3096016188100084, 8);
  sqcRYGate(q, 2.449711762546851, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.009041846205522, 8);
  sqcRYGate(q, 0.30733495245200426, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.821953766150136, 10);
  sqcRYGate(q, -2.5455617411223135, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.60338599644841, 10);
  sqcRYGate(q, 0.3022467332330349, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.3147542952231144, 1);
  sqcRYGate(q, -0.4038094528683882, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2640205623316215, 1);
  sqcRYGate(q, 1.6934161607141716, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.798636949804238, 3);
  sqcRYGate(q, -1.647101139312103, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.06779452814697517, 3);
  sqcRYGate(q, -0.032421177509267096, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.344762300799281, 5);
  sqcRYGate(q, -1.1885780899712577, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.130601049183753, 5);
  sqcRYGate(q, -2.9044364194688304, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5719219615397996, 7);
  sqcRYGate(q, -0.49542337972523587, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.270275128131817, 7);
  sqcRYGate(q, 0.002113177444994622, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.5809443467807855, 9);
  sqcRYGate(q, -0.3859861506354418, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.6133307383845246, 9);
  sqcRYGate(q, 0.19427656125443526, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2357948283408708, 0);
  sqcRYGate(q, -1.8516612071236214, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6798207305161535, 0);
  sqcRYGate(q, 0.8549488162607134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3794203003497125, 2);
  sqcRYGate(q, 1.9815291552304473, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7155857185034247, 2);
  sqcRYGate(q, -1.098608285381852, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5812081668042206, 4);
  sqcRYGate(q, -1.7424076165731872, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2188986262546173, 4);
  sqcRYGate(q, -2.7335003166083505, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7249316447675884, 6);
  sqcRYGate(q, 1.218248110620161, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.27784256686726305, 6);
  sqcRYGate(q, -0.5162177834062511, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6604525309556436, 8);
  sqcRYGate(q, 0.7156488756343735, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9548683538445841, 8);
  sqcRYGate(q, 3.1055098868101116, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.866406322171704, 10);
  sqcRYGate(q, -2.993560205528467, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9994508268572063, 10);
  sqcRYGate(q, -1.2113159943350622, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.132798497297913, 1);
  sqcRYGate(q, 0.24612049771983016, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.047157392004862686, 1);
  sqcRYGate(q, 1.455769504145315, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9812748173613218, 3);
  sqcRYGate(q, -3.098781376732438, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.066589393004896, 3);
  sqcRYGate(q, -3.137833772935265, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7019214307229271, 5);
  sqcRYGate(q, 1.4059635585553911, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.086323016903286, 5);
  sqcRYGate(q, -1.0760280098891228, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.1608271022203045, 7);
  sqcRYGate(q, -1.1792022654250012, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0004422699559167853, 7);
  sqcRYGate(q, 0.045256811086833326, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.044891197789502, 9);
  sqcRYGate(q, -0.512022402478566, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.67219886655792, 9);
  sqcRYGate(q, -2.7127021381064704, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.4881302091563315, 0);
  sqcRYGate(q, -0.15675263859999866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0577845296585136, 0);
  sqcRYGate(q, 2.636956693396007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.686857808697967, 2);
  sqcRYGate(q, -1.3828606588908772, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9769116374094182, 2);
  sqcRYGate(q, -0.3872373094245187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9107895921903904, 4);
  sqcRYGate(q, -1.3546169561744623, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.044422654796872, 4);
  sqcRYGate(q, 3.110039278772794, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1149499185067606, 6);
  sqcRYGate(q, 1.8223673576445663, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.965063474784705, 6);
  sqcRYGate(q, 3.1156721734418666, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7860254588543373, 8);
  sqcRYGate(q, -0.11293645886576631, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8383701055918713, 8);
  sqcRYGate(q, 1.750148632912981, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9436770136134405, 10);
  sqcRYGate(q, -0.7708223426435259, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.1771720883313543, 10);
  sqcRYGate(q, -1.3720106754315349, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5869277519435132, 1);
  sqcRYGate(q, 2.346499441758607, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1269830013434445, 1);
  sqcRYGate(q, 3.0510646745766326, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5693655784553733, 3);
  sqcRYGate(q, -2.802092952293162, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.053182755413952, 3);
  sqcRYGate(q, 0.02251617874489255, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3027763722857824, 5);
  sqcRYGate(q, -0.849350028244044, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0365100041866263, 5);
  sqcRYGate(q, 1.3686828169528193, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.18931140398215174, 7);
  sqcRYGate(q, -0.3157362899833797, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.16511341059276052, 7);
  sqcRYGate(q, -0.02483748631394198, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.4114682296412426, 9);
  sqcRYGate(q, -1.8753960340303637, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7005097256504826, 9);
  sqcRYGate(q, 0.009225604895061856, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.5833905989573696, 0);
  sqcRYGate(q, -2.855000934627243, 1);
  sqcRYGate(q, 3.1282085733384126, 2);
  sqcRYGate(q, 2.0321511783082276, 3);
  sqcRYGate(q, -1.5112475332783635, 4);
  sqcRYGate(q, -1.9780246710659402, 5);
  sqcRYGate(q, 2.5918507897482863, 6);
  sqcRYGate(q, -2.8964229188611115, 7);
  sqcRYGate(q, 1.4357450220664485, 8);
  sqcRYGate(q, -2.547845570714474, 9);
  sqcRYGate(q, -0.6394917889387601, 10);
  sqcRYGate(q, 0.9933924770552824, 11);

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
