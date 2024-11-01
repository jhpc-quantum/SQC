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

  sqcRYGate(q, -1.7931595599885295, 0);
  sqcRYGate(q, -2.9176985737770957, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3783607451429547, 0);
  sqcRYGate(q, -1.821458483608045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8259016073059742, 2);
  sqcRYGate(q, 1.4825275856226623, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9577923144424823, 2);
  sqcRYGate(q, -0.10835504710578457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0565835608116343, 4);
  sqcRYGate(q, -0.703406296745789, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.826850480165386, 4);
  sqcRYGate(q, -2.3524067324307656, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7492084244621058, 6);
  sqcRYGate(q, 1.9699554367645957, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.121035164572618, 6);
  sqcRYGate(q, 2.142141063189698, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4362583317502695, 8);
  sqcRYGate(q, 2.8102645875498955, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.4187211774452995, 8);
  sqcRYGate(q, -0.8843591879648451, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.07995061692807916, 10);
  sqcRYGate(q, 2.6889964602878407, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0260970541036538, 10);
  sqcRYGate(q, -1.162869298722949, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0226714634758354, 12);
  sqcRYGate(q, 2.0566415726664706, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.0129113287269083, 12);
  sqcRYGate(q, -1.1711023423347813, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.8972109389679304, 14);
  sqcRYGate(q, -1.8857276689085258, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.022372767803842, 14);
  sqcRYGate(q, -3.0748533145399923, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.0953248457680997, 16);
  sqcRYGate(q, 0.04314918339100071, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.02641825781823739, 16);
  sqcRYGate(q, -2.6800235063443805, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.3289346015306487, 18);
  sqcRYGate(q, 3.007972942106541, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.906614259695985, 18);
  sqcRYGate(q, 2.3510584944810247, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.703780704248823, 1);
  sqcRYGate(q, -1.2374740267905953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03919069112589568, 1);
  sqcRYGate(q, 3.0452612247047677, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.060103279584859, 3);
  sqcRYGate(q, 1.154972951995866, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3411293399276631, 3);
  sqcRYGate(q, -2.245849140138259, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.112957207929478, 5);
  sqcRYGate(q, 1.295642529384587, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0159171615474065, 5);
  sqcRYGate(q, 0.012462307662541252, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8176130011720701, 7);
  sqcRYGate(q, -2.3202753846369477, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.4779353205317465, 7);
  sqcRYGate(q, -2.9610033931602975, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.490541882906969, 9);
  sqcRYGate(q, -2.714041894643496, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.6856516537634364, 9);
  sqcRYGate(q, 0.7275483840945423, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.5475966799953866, 11);
  sqcRYGate(q, 1.5219710946720288, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.197874382521066, 11);
  sqcRYGate(q, 1.1418806884283441, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.8693773275366371, 13);
  sqcRYGate(q, -2.215532271252143, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.0056232762117511825, 13);
  sqcRYGate(q, 0.0078045673549704125, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.6491088194541135, 15);
  sqcRYGate(q, -0.30775809778322727, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.365284035493832, 15);
  sqcRYGate(q, 2.222844105997777, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.6174663340186128, 17);
  sqcRYGate(q, -1.8028875297008407, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.3902679924692989, 17);
  sqcRYGate(q, -2.87751522479573, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.6440045357089303, 0);
  sqcRYGate(q, 2.5180970371332996, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7156075240237216, 0);
  sqcRYGate(q, 1.3476880591063667, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7310933573872355, 2);
  sqcRYGate(q, 2.5242890803828333, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.535783025798519, 2);
  sqcRYGate(q, 1.7484292215084585, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7863375905185714, 4);
  sqcRYGate(q, -1.2556464845570932, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3245328923989708, 4);
  sqcRYGate(q, 0.7179754359880346, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7609155164295642, 6);
  sqcRYGate(q, -1.5270803422460224, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0729690569207833, 6);
  sqcRYGate(q, 2.25360943199581, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.228211428707219, 8);
  sqcRYGate(q, 2.913373155620366, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.33280720819363907, 8);
  sqcRYGate(q, 1.9929340188456168, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.8571404101079048, 10);
  sqcRYGate(q, 2.0064031483741784, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8872178653245371, 10);
  sqcRYGate(q, -0.016299243327149104, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0454344150882986, 12);
  sqcRYGate(q, -3.003427429896172, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.7580521076933726, 12);
  sqcRYGate(q, 2.19604093653889, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.989176208485481, 14);
  sqcRYGate(q, 3.1293013088598878, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.123366704439303, 14);
  sqcRYGate(q, 0.20719782230275108, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.6047531797324046, 16);
  sqcRYGate(q, 1.4157534153933597, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.4428468980031741, 16);
  sqcRYGate(q, -3.1218423574082337, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.578995459756595, 18);
  sqcRYGate(q, -0.1654051056143944, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.6788181125365178, 18);
  sqcRYGate(q, 1.1545082198750698, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.4867493395963414, 1);
  sqcRYGate(q, -2.166549544063521, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.23573495863632649, 1);
  sqcRYGate(q, 2.9629882855423024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6269581882026107, 3);
  sqcRYGate(q, -2.9737287520498157, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6854112650630064, 3);
  sqcRYGate(q, -0.11770960368027336, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9128326827612273, 5);
  sqcRYGate(q, 0.671930548446845, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4255204380228101, 5);
  sqcRYGate(q, -0.6791868410984605, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5844681449892675, 7);
  sqcRYGate(q, 0.4715199053600756, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.8494188599313612, 7);
  sqcRYGate(q, 0.20042129677982778, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9202104555437131, 9);
  sqcRYGate(q, -0.1116243057182178, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9199843489631316, 9);
  sqcRYGate(q, -0.3806665168529664, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.3228821376538713, 11);
  sqcRYGate(q, 0.25882314445684784, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5122587592785113, 11);
  sqcRYGate(q, 0.44231085307490137, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.1211411529846922, 13);
  sqcRYGate(q, 0.9678287447807641, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.0237151361310786, 13);
  sqcRYGate(q, -0.3276770134231795, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.7042501053079238, 15);
  sqcRYGate(q, 1.361158676610689, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.37617036806044, 15);
  sqcRYGate(q, -2.1434191359218957, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.5867420549008187, 17);
  sqcRYGate(q, 0.5292336359718011, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 3.131869434254444, 17);
  sqcRYGate(q, 1.4453998616081085, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.0808081513057033, 0);
  sqcRYGate(q, -1.7281493211332133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2996951966204458, 0);
  sqcRYGate(q, -0.4801567690269649, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.210722588598509, 2);
  sqcRYGate(q, -1.2715651326327428, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6860586348665323, 2);
  sqcRYGate(q, -3.1168970199939796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.018826782908762496, 4);
  sqcRYGate(q, -0.377568856653218, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.03856327191728408, 4);
  sqcRYGate(q, 1.121416583908541, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.23070473797278, 6);
  sqcRYGate(q, 0.3884702951215786, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.1087439023865091, 6);
  sqcRYGate(q, 3.066188280594233, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.236474343900418, 8);
  sqcRYGate(q, 1.3848729465223857, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.4282596115610655, 8);
  sqcRYGate(q, 0.04773523628939103, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5220330279978969, 10);
  sqcRYGate(q, 2.7533179495524114, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.8732338935378586, 10);
  sqcRYGate(q, -1.4486049333185058, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.2508564734864802, 12);
  sqcRYGate(q, 2.846271987045646, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.091958380061813, 12);
  sqcRYGate(q, -0.6658171975474874, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.551627198182811, 14);
  sqcRYGate(q, -1.5712206638838035, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.06538068927703823, 14);
  sqcRYGate(q, 3.1355470291941043, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5136664882490534, 16);
  sqcRYGate(q, -2.5546506499789774, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.2128382959337216, 16);
  sqcRYGate(q, 2.4752542615892867, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.6634121489874059, 18);
  sqcRYGate(q, 1.5182641705086795, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.526445282267052, 18);
  sqcRYGate(q, -1.7175413249384066, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -3.0525370023917784, 1);
  sqcRYGate(q, 0.9132194699844115, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.25584301466410414, 1);
  sqcRYGate(q, 1.2803589879858253, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.138981050342763, 3);
  sqcRYGate(q, -2.6263336588838717, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.031063462424037423, 3);
  sqcRYGate(q, 0.06851318596484565, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9377328605010296, 5);
  sqcRYGate(q, 1.0031359685989019, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7546807103088593, 5);
  sqcRYGate(q, -0.012914164018003564, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5689335583994204, 7);
  sqcRYGate(q, 1.670657357848933, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.01807899433976739, 7);
  sqcRYGate(q, -0.10879553646586171, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.4657887519308597, 9);
  sqcRYGate(q, -1.8400249439073324, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.3681697755056792, 9);
  sqcRYGate(q, 1.0670129346614408, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.624333571817953, 11);
  sqcRYGate(q, -2.4748433334837383, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.13148493410209205, 11);
  sqcRYGate(q, 0.1350200037903564, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.9539921479716185, 13);
  sqcRYGate(q, 2.0518468642286747, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.0173169496322227, 13);
  sqcRYGate(q, -2.6474612355508165, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.9673851253610799, 15);
  sqcRYGate(q, -1.784022174311705, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.3255664824273004, 15);
  sqcRYGate(q, -1.7599877101184818, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.08936716270006075, 17);
  sqcRYGate(q, 1.6572591608474747, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 3.0840752919010033, 17);
  sqcRYGate(q, -0.09406660451367485, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.8611777592122494, 0);
  sqcRYGate(q, 2.6225608451489015, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3061995520487475, 0);
  sqcRYGate(q, 2.1642242539937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4813521710844402, 2);
  sqcRYGate(q, 0.4596597127605931, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0706869465381255, 2);
  sqcRYGate(q, 1.714839892324901, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7412486031093435, 4);
  sqcRYGate(q, 3.030594121208759, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7876635649261106, 4);
  sqcRYGate(q, -3.0653524544030972, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8657319152841536, 6);
  sqcRYGate(q, 2.52520191728039, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.404802774334116, 6);
  sqcRYGate(q, -2.490584113313782, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3994559420854547, 8);
  sqcRYGate(q, 2.0340672844702423, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.420890905929817, 8);
  sqcRYGate(q, 2.252455616114228, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.155083066495786, 10);
  sqcRYGate(q, 0.058193463043251015, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.0028716592882404857, 10);
  sqcRYGate(q, 0.0007256493082723657, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.32344549860794, 12);
  sqcRYGate(q, -1.363612680652399, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.4446837371173746, 12);
  sqcRYGate(q, -0.5633208611643689, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.3792954412777456, 14);
  sqcRYGate(q, -2.8940698466101726, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.06601644962325696, 14);
  sqcRYGate(q, 1.0622114114033732, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.3023312376639762, 16);
  sqcRYGate(q, -0.22045645661584068, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.0890036025153447, 16);
  sqcRYGate(q, 0.05080126180663829, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.7589000316147376, 18);
  sqcRYGate(q, 2.920609652457752, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.0350475191236397, 18);
  sqcRYGate(q, 2.4597507112349026, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.09497266715546276, 1);
  sqcRYGate(q, -2.3428576887400547, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.070105145918939, 1);
  sqcRYGate(q, 3.041821106026678, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6137153556370654, 3);
  sqcRYGate(q, -2.1965938954881183, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.04445454571546659, 3);
  sqcRYGate(q, 0.07993122159954842, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.317489393424548, 5);
  sqcRYGate(q, -0.3659497491205084, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0777346304672437, 5);
  sqcRYGate(q, 0.05974191447577759, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2458036118387676, 7);
  sqcRYGate(q, 0.011754295047950005, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5182299305599205, 7);
  sqcRYGate(q, 3.1334885211936387, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.82781088169122, 9);
  sqcRYGate(q, 0.687884310697543, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.2110051880500317, 9);
  sqcRYGate(q, 3.1064556537575934, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.21459744519602086, 11);
  sqcRYGate(q, -2.376467346106462, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.124316092496694, 11);
  sqcRYGate(q, 2.95056120761355, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.326541818870089, 13);
  sqcRYGate(q, 1.343106202825953, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.0312226394228432, 13);
  sqcRYGate(q, 3.061774356999633, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.925981466012372, 15);
  sqcRYGate(q, 1.866366713593319, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.2547369474688683, 15);
  sqcRYGate(q, -0.05480868610283984, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.438768420195838, 17);
  sqcRYGate(q, -2.6297784893466782, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -3.1405520606187594, 17);
  sqcRYGate(q, 3.096310533328863, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.9145958827051555, 0);
  sqcRYGate(q, 1.936982228741031, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4784398596987371, 0);
  sqcRYGate(q, -0.7430012398468584, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.21134118705225013, 2);
  sqcRYGate(q, -1.9042532195526718, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6795622799677664, 2);
  sqcRYGate(q, 0.11283606399110757, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0833041259776555, 4);
  sqcRYGate(q, -2.970608431860451, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1035336062903456, 4);
  sqcRYGate(q, 0.6787378820741712, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5655057278773363, 6);
  sqcRYGate(q, 0.1684678691903727, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.04353924670052, 6);
  sqcRYGate(q, -0.6266695963494291, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.09991392155622147, 8);
  sqcRYGate(q, 2.2387962040647356, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.140793091525145, 8);
  sqcRYGate(q, 3.129429693480419, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.982469219652642, 10);
  sqcRYGate(q, 1.3165928955140431, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.001294185217045829, 10);
  sqcRYGate(q, 0.023551005014061488, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.292816776920777, 12);
  sqcRYGate(q, -1.538537473802866, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.9328875478203604, 12);
  sqcRYGate(q, 2.9983314686743117, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.9297301192742902, 14);
  sqcRYGate(q, -2.3253123665004605, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.1060176250199674, 14);
  sqcRYGate(q, -0.5942651865058216, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.0075615138004022, 16);
  sqcRYGate(q, -0.6535655023117729, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.15754386452485813, 16);
  sqcRYGate(q, -0.06387336729216653, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.5695093903205908, 18);
  sqcRYGate(q, -1.6557728106997347, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.5139630275860051, 18);
  sqcRYGate(q, 0.499532030891535, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.8102096514773827, 1);
  sqcRYGate(q, 1.8466155310933885, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.010276478990610906, 1);
  sqcRYGate(q, 3.046968441573052, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1524921822672853, 3);
  sqcRYGate(q, 0.7032741025648149, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.04246171353466188, 3);
  sqcRYGate(q, -0.05777484655400311, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9489672515065006, 5);
  sqcRYGate(q, 2.522419783570217, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.030670401559242503, 5);
  sqcRYGate(q, 0.029295004311385323, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0972500895816544, 7);
  sqcRYGate(q, -0.23606987664011858, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.621412878769982, 7);
  sqcRYGate(q, -3.110768892317954, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.7243234926680304, 9);
  sqcRYGate(q, -1.494494039705112, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3379213028776795, 9);
  sqcRYGate(q, -3.1079146968500524, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9998087533223847, 11);
  sqcRYGate(q, 1.7276417190092725, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.089527016060054, 11);
  sqcRYGate(q, -3.027721353449821, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.0296126725216934, 13);
  sqcRYGate(q, -0.21753756370513838, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.1003506519617763, 13);
  sqcRYGate(q, 3.0587142582086164, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.8529900068181915, 15);
  sqcRYGate(q, -0.7605959313944791, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.09362381786683, 15);
  sqcRYGate(q, 3.1125621542675157, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.8766534619946338, 17);
  sqcRYGate(q, -2.8965584013835617, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.02444916595866714, 17);
  sqcRYGate(q, 3.0876711171360975, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.251916926746934, 0);
  sqcRYGate(q, 3.0635506948281965, 1);
  sqcRYGate(q, -0.14225022097391626, 2);
  sqcRYGate(q, 1.7910985046943069, 3);
  sqcRYGate(q, 0.3451817872739216, 4);
  sqcRYGate(q, 0.9578987640331109, 5);
  sqcRYGate(q, 2.372890890704835, 6);
  sqcRYGate(q, 1.9345599968747473, 7);
  sqcRYGate(q, -1.2877449553244917, 8);
  sqcRYGate(q, 2.0038943052801015, 9);
  sqcRYGate(q, -2.7179709627686117, 10);
  sqcRYGate(q, -3.138647921015517, 11);
  sqcRYGate(q, -1.4037397311548383, 12);
  sqcRYGate(q, 3.0793409415031308, 13);
  sqcRYGate(q, -2.5814634307904423, 14);
  sqcRYGate(q, -2.4557565993269788, 15);
  sqcRYGate(q, -1.4303186006199193, 16);
  sqcRYGate(q, 2.6272182730525295, 17);
  sqcRYGate(q, -2.5064065075616218, 18);
  sqcRYGate(q, -2.6612786472917134, 19);

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
