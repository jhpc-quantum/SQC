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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 1.4825573631592441, 0);
  sqcRYGate(q, -0.08260676381535248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7005307987127647, 0);
  sqcRYGate(q, 1.0257165649588245, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8280560601482796, 1);
  sqcRYGate(q, -2.0703343046856233, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2764308639864501, 1);
  sqcRYGate(q, -1.1458470792830135, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.773896124853724, 2);
  sqcRYGate(q, -1.343094706818559, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.18145624895078113, 2);
  sqcRYGate(q, -2.992821413159032, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6677082625616402, 3);
  sqcRYGate(q, 2.1029356418447547, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5393504143648352, 3);
  sqcRYGate(q, 1.2154633318582775, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6327301184526672, 4);
  sqcRYGate(q, -0.11879541819141437, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.381777310434332, 4);
  sqcRYGate(q, 2.2663349266882227, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4510462069896077, 5);
  sqcRYGate(q, -1.3068604948846665, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4636480920544237, 5);
  sqcRYGate(q, 3.1052151158714545, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.933597369576768, 6);
  sqcRYGate(q, -2.495682198576603, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.13557636028049114, 6);
  sqcRYGate(q, -0.12558540046763692, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6032621923329717, 7);
  sqcRYGate(q, 1.2867666750257527, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.7625026071363945, 7);
  sqcRYGate(q, -1.5694720753845974, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.9261256622003293, 8);
  sqcRYGate(q, -1.7334955316959935, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9092242559076968, 8);
  sqcRYGate(q, -0.5358429675932755, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.2020926994970735, 9);
  sqcRYGate(q, -2.1140756915179892, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.1568332019572605, 9);
  sqcRYGate(q, 2.8528494981417003, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.026847182326816, 10);
  sqcRYGate(q, -0.6981612881736039, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.521872303481645, 10);
  sqcRYGate(q, 2.2383937134691747, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7607795133042132, 0);
  sqcRYGate(q, -0.5357701996500823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.892554635806099, 0);
  sqcRYGate(q, 1.3271556760904586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7704026633416117, 1);
  sqcRYGate(q, -2.2366602000627163, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.26324031604780196, 1);
  sqcRYGate(q, -1.867602908258445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.310997450238455, 2);
  sqcRYGate(q, 1.8800048441170898, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.031906923176939, 2);
  sqcRYGate(q, -3.042893069869645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5242379783293503, 3);
  sqcRYGate(q, -2.0898973667836422, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1848198009869133, 3);
  sqcRYGate(q, -3.034602058202231, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0940575314772794, 4);
  sqcRYGate(q, -0.5127601810519229, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.315620763524918, 4);
  sqcRYGate(q, 2.673248307989124, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.38210850325717405, 5);
  sqcRYGate(q, -2.099463973289547, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.28887319373628495, 5);
  sqcRYGate(q, -2.9111664942778286, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8724510226807922, 6);
  sqcRYGate(q, 1.7049748804047302, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0825293838663597, 6);
  sqcRYGate(q, -0.003947352126306126, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.500015070820699, 7);
  sqcRYGate(q, 0.9849879142307321, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.46185521159206, 7);
  sqcRYGate(q, -1.5005234056824543, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.7947882591414153, 8);
  sqcRYGate(q, -0.9067697077522884, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.6837118655864254, 8);
  sqcRYGate(q, 1.6963556122681933, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0769645487827226, 9);
  sqcRYGate(q, -1.2573942828752795, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3392727849335322, 9);
  sqcRYGate(q, 0.48215893425052747, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.2707367292432847, 10);
  sqcRYGate(q, -1.5325388499147028, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.685312886027629, 10);
  sqcRYGate(q, 2.811704707054185, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.548513248399834, 0);
  sqcRYGate(q, -0.11425922320131478, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.464982415477747, 0);
  sqcRYGate(q, 1.1861058962728752, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2523474846874247, 1);
  sqcRYGate(q, 2.19526572128511, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.008224756624982205, 1);
  sqcRYGate(q, 0.688333304388147, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.703588706901063, 2);
  sqcRYGate(q, -2.9161021567774545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.083045849552728, 2);
  sqcRYGate(q, -1.6732164942398218, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9022559016422997, 3);
  sqcRYGate(q, 0.5573737916098662, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.174734847643086, 3);
  sqcRYGate(q, 2.8952135861057227, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8818976209307544, 4);
  sqcRYGate(q, -1.3531243937288746, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2085282358663296, 4);
  sqcRYGate(q, 2.541472173088809, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0360154725601567, 5);
  sqcRYGate(q, -2.1735590318741256, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4113642043606929, 5);
  sqcRYGate(q, 0.6480302202280731, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3644174373315887, 6);
  sqcRYGate(q, 1.9895204832681728, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0063442620426135115, 6);
  sqcRYGate(q, -0.0005474589021297049, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0638136867213293, 7);
  sqcRYGate(q, 2.4855246426199145, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.2529688333790458, 7);
  sqcRYGate(q, 2.9025593207933573, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.9248604611508116, 8);
  sqcRYGate(q, 2.378584588800331, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.5103303692953388, 8);
  sqcRYGate(q, -2.8506150316751735, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.1269179641568994, 9);
  sqcRYGate(q, 0.4418382002139261, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7670714133063221, 9);
  sqcRYGate(q, -1.1344642507461966, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.073101741209218, 10);
  sqcRYGate(q, -1.7019537765355306, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.368231062597505, 10);
  sqcRYGate(q, -3.0401279725726438, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.7632460458696393, 0);
  sqcRYGate(q, 1.616731585456998, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5444515259606266, 0);
  sqcRYGate(q, 1.561009630087856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.334436763702273, 1);
  sqcRYGate(q, 1.9013073244922158, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.906471330137294, 1);
  sqcRYGate(q, 0.6442186153394722, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4469090117719965, 2);
  sqcRYGate(q, -2.6955188009650337, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7979948294000465, 2);
  sqcRYGate(q, -2.4850701562028905, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8270975456418057, 3);
  sqcRYGate(q, 0.6670854248162699, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.716347963539565, 3);
  sqcRYGate(q, -1.565525743332361, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.494294479686222, 4);
  sqcRYGate(q, 1.5970286508853708, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.059500235884538, 4);
  sqcRYGate(q, -0.04552984034335808, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2307831170703554, 5);
  sqcRYGate(q, 1.4207476289415644, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5290977918230162, 5);
  sqcRYGate(q, -0.567271169381832, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.21982186446412372, 6);
  sqcRYGate(q, 1.090137982277131, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.25557973555548674, 6);
  sqcRYGate(q, 0.05691045895278978, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8532360697087022, 7);
  sqcRYGate(q, 2.09680871317694, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.986277961841489, 7);
  sqcRYGate(q, 3.0173505497212365, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.824098661711005, 8);
  sqcRYGate(q, -0.1368819443593517, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.2340330414835334, 8);
  sqcRYGate(q, -2.1956532832067337, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4262141204434968, 9);
  sqcRYGate(q, 1.946164952720726, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9856141567230465, 9);
  sqcRYGate(q, -1.594790946144836, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.997185065465104, 10);
  sqcRYGate(q, 0.3513953480751698, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6586649758496552, 10);
  sqcRYGate(q, 1.2031445838138435, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.811963948445404, 0);
  sqcRYGate(q, 1.450674005990409, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6885446877072594, 0);
  sqcRYGate(q, -1.9519060303633478, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2284671633816164, 1);
  sqcRYGate(q, -1.107787439691981, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7953654554582854, 1);
  sqcRYGate(q, 0.3935398821054559, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3441519793232457, 2);
  sqcRYGate(q, 1.1664467423377969, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4723300948035801, 2);
  sqcRYGate(q, -2.913477184762785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6905263852406651, 3);
  sqcRYGate(q, -2.422278340300579, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3879554567418744, 3);
  sqcRYGate(q, 0.886566246295784, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.543849121870179, 4);
  sqcRYGate(q, -0.2677165359022924, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8021999718185935, 4);
  sqcRYGate(q, -3.0523521889982916, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2971817894412343, 5);
  sqcRYGate(q, -1.1158674627777037, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.709647939676395, 5);
  sqcRYGate(q, -0.09280972874141757, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0013813831952207423, 6);
  sqcRYGate(q, -0.9787279774616671, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0229312613145316, 6);
  sqcRYGate(q, -0.02177137225006831, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9554605523690833, 7);
  sqcRYGate(q, -1.5944817474861797, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.11851699763746329, 7);
  sqcRYGate(q, 0.09528506381089041, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9837303788990583, 8);
  sqcRYGate(q, 1.607806563540683, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9833520606856956, 8);
  sqcRYGate(q, 0.2842401683529605, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.2250056662871813, 9);
  sqcRYGate(q, -1.6917744162474575, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.832141063563642, 9);
  sqcRYGate(q, -0.5602756019297859, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.123075559889412, 10);
  sqcRYGate(q, 3.1302800896096517, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4266600440043868, 10);
  sqcRYGate(q, 0.44734272130653224, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7328324791253706, 0);
  sqcRYGate(q, -2.721593649192463, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.862283125057705, 0);
  sqcRYGate(q, 2.5801314600585488, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4159197654378355, 1);
  sqcRYGate(q, -1.0634606329584941, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.059753167913680856, 1);
  sqcRYGate(q, 1.6918159434122755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.19484055709420298, 2);
  sqcRYGate(q, -2.2364318527184723, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3505898607653184, 2);
  sqcRYGate(q, -1.0687878443254748, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.441613229638138, 3);
  sqcRYGate(q, 1.9842582530715447, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1601435345096904, 3);
  sqcRYGate(q, -0.5231151937674721, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.036455904192538, 4);
  sqcRYGate(q, 0.24932816117107176, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.29616230265372234, 4);
  sqcRYGate(q, -0.03252371395983933, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3544787244733006, 5);
  sqcRYGate(q, -0.5223721623706394, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.707965928823242, 5);
  sqcRYGate(q, 2.6056969897896436, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6079513509640204, 6);
  sqcRYGate(q, 2.900480512685941, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9295807335073256, 6);
  sqcRYGate(q, 3.1193346204223196, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1357659077084774, 7);
  sqcRYGate(q, 0.6066205312411728, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.9563489706356494, 7);
  sqcRYGate(q, 2.4340360665811973, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.0995788438760012, 8);
  sqcRYGate(q, 2.254970725770189, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.849491580579285, 8);
  sqcRYGate(q, 2.363481176457786, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8348990621420755, 9);
  sqcRYGate(q, -2.825360608412968, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.4688837797672227, 9);
  sqcRYGate(q, 1.0456836638192337, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7508353396290168, 10);
  sqcRYGate(q, 1.826905970502854, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.3604504481415294, 10);
  sqcRYGate(q, 2.3371204293286634, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.497301366635985, 0);
  sqcRYGate(q, -0.35982525582219305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.856823523601385, 0);
  sqcRYGate(q, -0.11574025871877325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23705240630321447, 1);
  sqcRYGate(q, 1.7062298629233081, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3370830740678212, 1);
  sqcRYGate(q, 0.5035021062758025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.382763626581767, 2);
  sqcRYGate(q, 1.470726450000228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.012807492447429517, 2);
  sqcRYGate(q, 2.4564974659101524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1410831792308125, 3);
  sqcRYGate(q, -2.982796543759076, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1879762164296572, 3);
  sqcRYGate(q, 0.6381842617646937, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1289173814382583, 4);
  sqcRYGate(q, 2.1936808600425404, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.141328721891792, 4);
  sqcRYGate(q, -0.9579077156944403, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.000430060594712, 5);
  sqcRYGate(q, -0.5259396391461946, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9652867140152026, 5);
  sqcRYGate(q, 1.5325753709469472, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7909705578433819, 6);
  sqcRYGate(q, 1.4582225490393612, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4079219076490808, 6);
  sqcRYGate(q, 1.5481653295684692, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0633456061320796, 7);
  sqcRYGate(q, -1.6495773479713831, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.0460450792358023, 7);
  sqcRYGate(q, -2.726617222501659, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.8415163544913347, 8);
  sqcRYGate(q, -1.8127864144136216, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.815098208834999, 8);
  sqcRYGate(q, -2.215184226046475, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8041723684580466, 9);
  sqcRYGate(q, -0.9970703202403738, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.8914234776270231, 9);
  sqcRYGate(q, -0.0175354234512932, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.572643549326723, 10);
  sqcRYGate(q, 2.2976259043079774, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2995607758349619, 10);
  sqcRYGate(q, -2.4869215644921554, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2105466717400502, 0);
  sqcRYGate(q, -1.836925779077494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.071214107102786, 0);
  sqcRYGate(q, 2.432479666553899, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7613332782138746, 1);
  sqcRYGate(q, 0.42900516528732247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.44906401525909, 1);
  sqcRYGate(q, 2.4244379998677337, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.545716780875293, 2);
  sqcRYGate(q, -0.6646069653411208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8582057931068565, 2);
  sqcRYGate(q, 2.8005976877603116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9924297441092893, 3);
  sqcRYGate(q, -1.1991155921402443, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.01625776840717943, 3);
  sqcRYGate(q, -0.9057595005509894, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5792425636396101, 4);
  sqcRYGate(q, 1.1690039960946077, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.26262553861702165, 4);
  sqcRYGate(q, 0.08898116372593012, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.036009418977373, 5);
  sqcRYGate(q, -2.4796308649418735, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1174564206247886, 5);
  sqcRYGate(q, -2.111372372066884, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.853515575131655, 6);
  sqcRYGate(q, -1.3646785614777661, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9032200267793113, 6);
  sqcRYGate(q, 0.011669535577774505, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.959287371153769, 7);
  sqcRYGate(q, 1.678396035646886, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.8638400344002433, 7);
  sqcRYGate(q, -1.4794981607217546, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.31702143753419587, 8);
  sqcRYGate(q, 0.03851325861744126, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.5451761887503892, 8);
  sqcRYGate(q, 2.7896419685345037, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4129638793488635, 9);
  sqcRYGate(q, -2.5160315261654955, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5956606540327753, 9);
  sqcRYGate(q, 0.7269138378467019, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5152446444357475, 10);
  sqcRYGate(q, 1.5866352439868487, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.060841177286712, 10);
  sqcRYGate(q, -2.5734105280743136, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.348330405937334, 0);
  sqcRYGate(q, -1.5614967248631004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5620551642756872, 0);
  sqcRYGate(q, -1.871961072406239, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4443080327087046, 1);
  sqcRYGate(q, 0.027396332165241365, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9306948419173984, 1);
  sqcRYGate(q, -2.9629417394521065, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7837470509630027, 2);
  sqcRYGate(q, 0.8697524981209882, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.016130515802103673, 2);
  sqcRYGate(q, 3.1168713266614025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8430267855774525, 3);
  sqcRYGate(q, 1.6981031415587462, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.708522040936355, 3);
  sqcRYGate(q, -0.09577186179057584, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.46651331085691794, 4);
  sqcRYGate(q, -0.0558051172530476, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.007704032243248449, 4);
  sqcRYGate(q, 0.00361486530934485, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7288356548005828, 5);
  sqcRYGate(q, 1.9137850950012614, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3567194516464353, 5);
  sqcRYGate(q, -0.5496773779513486, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4906530930977793, 6);
  sqcRYGate(q, -2.475918093577601, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3835646377763355, 6);
  sqcRYGate(q, -0.323641066707852, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9767005187752003, 7);
  sqcRYGate(q, -2.364152605667727, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.03781056099558312, 7);
  sqcRYGate(q, -0.047320218027183, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.9345540108760338, 8);
  sqcRYGate(q, 0.31115228020549096, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.9767686394963437, 8);
  sqcRYGate(q, -0.9885602767105601, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7507722112804547, 9);
  sqcRYGate(q, 2.1779228081468327, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.8458312767802616, 9);
  sqcRYGate(q, 2.383810904985471, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4260400207700406, 10);
  sqcRYGate(q, 3.1134781169342176, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.2749424500731559, 10);
  sqcRYGate(q, 1.7066148634931073, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.3776485865493275, 0);
  sqcRYGate(q, -0.9589971558976879, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4503832637561094, 0);
  sqcRYGate(q, 0.8464576408136985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7026643660325695, 1);
  sqcRYGate(q, -2.676903595753344, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.169052058454509, 1);
  sqcRYGate(q, -1.0704700222688415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0463574272577905, 2);
  sqcRYGate(q, 0.9972901623130461, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06022377017676917, 2);
  sqcRYGate(q, 3.0838992730062387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2326262908062553, 3);
  sqcRYGate(q, 2.7719395675681686, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0883335760573667, 3);
  sqcRYGate(q, -2.2910240065036658, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2044370909331032, 4);
  sqcRYGate(q, -0.6694782866006069, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0719064049368074, 4);
  sqcRYGate(q, -0.022059459429568662, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.295291980372672, 5);
  sqcRYGate(q, -2.38772802027872, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.01792020216478285, 5);
  sqcRYGate(q, 0.44375262880231764, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7823302720528558, 6);
  sqcRYGate(q, 2.954760315897312, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7130872895938123, 6);
  sqcRYGate(q, 0.019907794098815046, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.064083278041463, 7);
  sqcRYGate(q, 1.5523246919221236, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.4017739118436783, 7);
  sqcRYGate(q, -2.823109345278995, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4214940539754815, 8);
  sqcRYGate(q, -1.9478125324791236, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4849397330656515, 8);
  sqcRYGate(q, -0.883460309042683, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.31355613655877346, 9);
  sqcRYGate(q, 1.032037117284274, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.10032551173362796, 9);
  sqcRYGate(q, 0.5748100104318032, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.645089091548146, 10);
  sqcRYGate(q, -0.17764504320624858, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5957782894793056, 10);
  sqcRYGate(q, 0.03205310862818715, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4500632519783112, 0);
  sqcRYGate(q, 1.4116675958408316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3479555134240906, 0);
  sqcRYGate(q, 1.517533166449864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.721703707479301, 1);
  sqcRYGate(q, -2.7598722616332645, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.474423613549096, 1);
  sqcRYGate(q, 0.9446200465487484, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8551609538691904, 2);
  sqcRYGate(q, 2.4146559378464554, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.133265563206835, 2);
  sqcRYGate(q, -1.1352799895423034, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6457116635466014, 3);
  sqcRYGate(q, 3.057403138616139, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.025615043343955257, 3);
  sqcRYGate(q, -3.0442751163578734, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.417156000340522, 4);
  sqcRYGate(q, -1.7024413969885872, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.27112551040001515, 4);
  sqcRYGate(q, -2.609656840400016, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.418116468250357, 5);
  sqcRYGate(q, -1.2055717393318464, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0903414043126594, 5);
  sqcRYGate(q, 0.4652558104339508, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6652599003204873, 6);
  sqcRYGate(q, 1.6957618320826393, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.945207687174232, 6);
  sqcRYGate(q, 3.1327381325140116, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6612260231531089, 7);
  sqcRYGate(q, -0.570936107865534, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.11448368602455185, 7);
  sqcRYGate(q, 1.417959665232772, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.07151688055545836, 8);
  sqcRYGate(q, 1.6097408320260926, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.3317488716296948, 8);
  sqcRYGate(q, -0.042721419039537786, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.147280914310957, 9);
  sqcRYGate(q, 0.16324616790048907, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3403657031627851, 9);
  sqcRYGate(q, 1.6751389880180412, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.6754041003045455, 10);
  sqcRYGate(q, 2.119093888748968, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1667355880918862, 10);
  sqcRYGate(q, -0.059211312507495784, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8305270137250393, 0);
  sqcRYGate(q, -1.0520914480422556, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.635359813704517, 0);
  sqcRYGate(q, -1.1628343645181962, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7622195916136423, 1);
  sqcRYGate(q, -1.8972730833677482, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9455562475422883, 1);
  sqcRYGate(q, 0.17357458282423818, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5378055893380465, 2);
  sqcRYGate(q, -1.5037276215483057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.15166358223002963, 2);
  sqcRYGate(q, 2.660609843152561, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.057614490091924, 3);
  sqcRYGate(q, -2.1882532120558897, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.005827315442533813, 3);
  sqcRYGate(q, -3.1354820371793317, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1835336813700494, 4);
  sqcRYGate(q, -1.5932333196747939, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.390321933787341, 4);
  sqcRYGate(q, 2.077785689976851, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.564913796615575, 5);
  sqcRYGate(q, 1.0402460661310347, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0823336862138301, 5);
  sqcRYGate(q, 2.092213841139607, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6780948146185033, 6);
  sqcRYGate(q, -1.735992770809366, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0962378337261853, 6);
  sqcRYGate(q, -0.9178879558522653, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2787611600572211, 7);
  sqcRYGate(q, -2.7281612653344642, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6370376359102965, 7);
  sqcRYGate(q, -1.3912271071058697, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.1674501090528935, 8);
  sqcRYGate(q, -2.9057333023215905, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.07807736220539496, 8);
  sqcRYGate(q, 0.08041894572735901, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.8730413151569802, 9);
  sqcRYGate(q, -2.6238208118250554, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.5619659973054114, 9);
  sqcRYGate(q, 0.8900275305572861, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.8234289572575593, 10);
  sqcRYGate(q, -2.3970004441539663, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.018281784273461, 10);
  sqcRYGate(q, -3.1028714331949745, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3192609321571789, 0);
  sqcRYGate(q, -0.4594284002616513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3251976139994892, 0);
  sqcRYGate(q, 1.550037099867243, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8631393309229451, 1);
  sqcRYGate(q, -2.244134164727757, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3960097191910124, 1);
  sqcRYGate(q, 1.0828430681633927, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5282775789663043, 2);
  sqcRYGate(q, -0.49136956115518515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.924984934329299, 2);
  sqcRYGate(q, 2.724918743196358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2345272332899677, 3);
  sqcRYGate(q, -1.5843186422228714, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1612782781320963, 3);
  sqcRYGate(q, -1.6008459850874122, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9271443246574987, 4);
  sqcRYGate(q, 1.5692792559151938, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0419827987889496, 4);
  sqcRYGate(q, -3.139585329021964, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5739253502546662, 5);
  sqcRYGate(q, -2.943877028981741, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.00042926897349815363, 5);
  sqcRYGate(q, -1.1617328270886018, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9524664310726907, 6);
  sqcRYGate(q, -0.17294542173871166, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.03683133057574839, 6);
  sqcRYGate(q, 3.134487731830713, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.567220489835277, 7);
  sqcRYGate(q, 0.4177651835396047, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3895755699739465, 7);
  sqcRYGate(q, -0.25383718348932227, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5977366851238652, 8);
  sqcRYGate(q, 2.045685314591492, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.3641681211836065, 8);
  sqcRYGate(q, 0.0909277906413859, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.9767037803844794, 9);
  sqcRYGate(q, 0.8308754506794287, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7143456322183113, 9);
  sqcRYGate(q, 2.868662702661288, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.694763768162403, 10);
  sqcRYGate(q, -0.7320165796179444, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8483010415094405, 10);
  sqcRYGate(q, -0.06483928427181399, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.4346438886324652, 0);
  sqcRYGate(q, 1.8572954932072294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9946338329735416, 0);
  sqcRYGate(q, 2.227264347895722, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4782262059627844, 1);
  sqcRYGate(q, 2.162257944619772, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5129019783171835, 1);
  sqcRYGate(q, 2.0898263937727837, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.932308528855302, 2);
  sqcRYGate(q, 1.5687728141652402, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5151276312941322, 2);
  sqcRYGate(q, 1.572143029131577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5743337486774154, 3);
  sqcRYGate(q, 2.2164995122092854, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.48234945840558463, 3);
  sqcRYGate(q, 0.9465581968774823, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5756658729623743, 4);
  sqcRYGate(q, 1.5708335546390075, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3924128556964614, 4);
  sqcRYGate(q, -2.9675105201136898, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.565749508344178, 5);
  sqcRYGate(q, -0.19002521645931997, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1585808089812002, 5);
  sqcRYGate(q, -1.9377621200864277, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2225399862662925, 6);
  sqcRYGate(q, 2.6488225283203484, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.002132863151777203, 6);
  sqcRYGate(q, 3.139792970278784, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.055880183683699514, 7);
  sqcRYGate(q, -3.0264517606026162, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.0991438718708126, 7);
  sqcRYGate(q, -1.5171266181956462, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.543555066182907, 8);
  sqcRYGate(q, 2.103268142121921, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.5292229066470022, 8);
  sqcRYGate(q, -1.3040991225130265, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4573254744157067, 9);
  sqcRYGate(q, 2.0403504797146743, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.2808322049124467, 9);
  sqcRYGate(q, 2.543633475820933, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.9937399482550633, 10);
  sqcRYGate(q, -0.1768101912442548, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5673665314898135, 10);
  sqcRYGate(q, 0.104547672296059, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.5090855298518977, 0);
  sqcRYGate(q, -1.5353098741334286, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6017932662501622, 0);
  sqcRYGate(q, -0.9554541778505792, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1082959726918677, 1);
  sqcRYGate(q, -1.5639889795008735, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5233790590011199, 1);
  sqcRYGate(q, -1.5653014672355536, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.559151401735568, 2);
  sqcRYGate(q, -1.5719979340540924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4107268217957563, 2);
  sqcRYGate(q, 2.783440751314197, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5694047067569545, 3);
  sqcRYGate(q, 1.572311860928644, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.321654528307496, 3);
  sqcRYGate(q, -2.438076502427893, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6512340628880087, 4);
  sqcRYGate(q, -2.654391298596108, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.130127707253668, 4);
  sqcRYGate(q, 2.3695260381532424, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3163995343942538, 5);
  sqcRYGate(q, -0.4215877711330799, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6456640848723367, 5);
  sqcRYGate(q, -3.133215240436597, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.022724076149979, 6);
  sqcRYGate(q, -0.03629818180149602, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9807128212131038, 6);
  sqcRYGate(q, 0.4340698148281419, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5599074685982828, 7);
  sqcRYGate(q, -1.5560554278919831, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.035047370295179, 7);
  sqcRYGate(q, 1.5233205213331806, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5754649953236344, 8);
  sqcRYGate(q, -2.776518941242786, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1324107888041404, 8);
  sqcRYGate(q, 1.56087597230387, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.3900883868852686, 9);
  sqcRYGate(q, 1.4709257084695824, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5511804856866895, 9);
  sqcRYGate(q, 1.8314532750769619, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.402343705470925, 10);
  sqcRYGate(q, -0.6163902362100104, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.127985969148411, 10);
  sqcRYGate(q, 2.406819146016233, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3134743812022902, 0);
  sqcRYGate(q, -1.5725052125765566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.554292089654891, 0);
  sqcRYGate(q, 1.5617414118586659, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2702250403847621, 1);
  sqcRYGate(q, -0.22086014077552918, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0014552413551152479, 1);
  sqcRYGate(q, 3.133589947155047, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9238526893774504, 2);
  sqcRYGate(q, -2.950406975511002, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0006146883991320352, 2);
  sqcRYGate(q, -1.2610367928830606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.206723667015524, 3);
  sqcRYGate(q, 0.2416332999801865, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1388961627849614, 3);
  sqcRYGate(q, 3.141126727176155, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3316955501437917, 4);
  sqcRYGate(q, -2.9940282160318827, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1158131846880823, 4);
  sqcRYGate(q, 2.39657413471073, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2162939217578375, 5);
  sqcRYGate(q, 1.5758926416808476, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.521237654190199, 5);
  sqcRYGate(q, -0.171303557661071, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3493140560378845, 6);
  sqcRYGate(q, 1.6075852235481551, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.914673845975464, 6);
  sqcRYGate(q, -0.0009040661235690806, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.53706273869999, 7);
  sqcRYGate(q, -1.6427187744942389, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.3792388298569998, 7);
  sqcRYGate(q, -0.002004444663615601, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5398139296331428, 8);
  sqcRYGate(q, -1.572232573634559, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8791556887563505, 8);
  sqcRYGate(q, 2.401783170601881, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.040301564357614, 9);
  sqcRYGate(q, 2.4031050597593673, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.2911143458120655, 9);
  sqcRYGate(q, -3.1099364291984126, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.4583362371333806, 10);
  sqcRYGate(q, 1.6701582435976476, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5478148279715136, 10);
  sqcRYGate(q, -0.6720557424912919, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.130972960773601, 0);
  sqcRYGate(q, -1.2707894483925122, 1);
  sqcRYGate(q, -1.5764571932372553, 2);
  sqcRYGate(q, -0.4451913296192249, 3);
  sqcRYGate(q, 2.533073227008714, 4);
  sqcRYGate(q, -1.560352085574725, 5);
  sqcRYGate(q, 1.3408156963681694, 6);
  sqcRYGate(q, 2.5741992956875714, 7);
  sqcRYGate(q, 1.5363548557743774, 8);
  sqcRYGate(q, 1.093104564015942, 9);
  sqcRYGate(q, -0.793147575475409, 10);
  sqcRYGate(q, 1.5892690559147127, 11);

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
