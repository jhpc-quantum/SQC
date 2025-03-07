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

  sqcRYGate(q, -0.6721315088575206, 0);
  sqcRYGate(q, 0.5870440610577994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.613831682434595, 0);
  sqcRYGate(q, -2.91895855225331, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8850249774341954, 2);
  sqcRYGate(q, -2.690690075913042, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.114722920320496, 2);
  sqcRYGate(q, 0.8931175084081504, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7784893022444372, 4);
  sqcRYGate(q, 0.5720652230041577, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.748925626624912, 4);
  sqcRYGate(q, -1.9040219943791712, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.137258628360817, 6);
  sqcRYGate(q, -2.317564484400025, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.739411800099146, 6);
  sqcRYGate(q, 1.4547253998604743, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3302911012173321, 8);
  sqcRYGate(q, 0.199441705139496, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.4415787724489046, 8);
  sqcRYGate(q, -0.4190839020784214, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8212944202034249, 10);
  sqcRYGate(q, 2.5373115510626865, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.7510584454018914, 10);
  sqcRYGate(q, -0.353177613179045, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6667094377039193, 12);
  sqcRYGate(q, 3.1141682522095806, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.8161112428517256, 12);
  sqcRYGate(q, 2.064983225160049, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.2022325075191362, 14);
  sqcRYGate(q, -2.3327943309914994, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.1264409236357222, 14);
  sqcRYGate(q, 3.1149615971110256, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.005625816678081565, 16);
  sqcRYGate(q, -2.2941569483399267, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.7456292182305848, 16);
  sqcRYGate(q, 0.5682758168238742, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.034025163791515475, 18);
  sqcRYGate(q, 2.1415014124987453, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.953272396467423, 18);
  sqcRYGate(q, -2.6017035406354916, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.8434658758213809, 1);
  sqcRYGate(q, -2.043853598799254, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1239677877138954, 1);
  sqcRYGate(q, 1.0537376077813174, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3890040856649426, 3);
  sqcRYGate(q, -0.6624498346147548, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5713048476396534, 3);
  sqcRYGate(q, 1.5527036973126187, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8538957147600359, 5);
  sqcRYGate(q, -1.5109906536953217, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6163526157985295, 5);
  sqcRYGate(q, 1.5895221995975062, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7136543163516595, 7);
  sqcRYGate(q, -2.3075064270317505, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.1992299981415755, 7);
  sqcRYGate(q, 3.0908590087681436, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.3185504840064963, 9);
  sqcRYGate(q, -2.2073444960091693, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5536709945010578, 9);
  sqcRYGate(q, 3.0009539632473987, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.141680480739767, 11);
  sqcRYGate(q, -3.036853591984446, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6261634498526363, 11);
  sqcRYGate(q, -1.091963174680262, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.265965798831279, 13);
  sqcRYGate(q, -0.6250532290458868, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.1111104715637428, 13);
  sqcRYGate(q, -1.537952044119701, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.9145467525664257, 15);
  sqcRYGate(q, -1.37224004015469, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.6821415089784377, 15);
  sqcRYGate(q, 0.368112275285724, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.059157015013981, 17);
  sqcRYGate(q, -1.807016980374506, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.2548143982828597, 17);
  sqcRYGate(q, -2.7802407567217267, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.3927596616595364, 0);
  sqcRYGate(q, 0.6965158606621463, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.85390223224522, 0);
  sqcRYGate(q, 2.89259738724778, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3415580496458563, 2);
  sqcRYGate(q, 2.4014814244940874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3196691473955946, 2);
  sqcRYGate(q, -1.5570250120368638, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4576983792379024, 4);
  sqcRYGate(q, 2.74904404126731, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.05101861742969857, 4);
  sqcRYGate(q, -1.5720195492010243, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5665960725633323, 6);
  sqcRYGate(q, -1.6962290742872526, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5233786071239417, 6);
  sqcRYGate(q, -1.4996786887709692, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6452969696847621, 8);
  sqcRYGate(q, 2.0941708039995275, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.478751346521016, 8);
  sqcRYGate(q, -0.7376381904673259, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.38896656341942537, 10);
  sqcRYGate(q, 2.0734649169799546, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.39254815587489017, 10);
  sqcRYGate(q, 1.5439264497511744, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5700028328244973, 12);
  sqcRYGate(q, -1.5648903146959219, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.21295775093443, 12);
  sqcRYGate(q, 1.5973261537071304, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5373637852190054, 14);
  sqcRYGate(q, 1.4861055941589552, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.2100564393731983, 14);
  sqcRYGate(q, 1.6369141773094629, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.264173473424095, 16);
  sqcRYGate(q, -1.857042741593881, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.5088790335964202, 16);
  sqcRYGate(q, 1.624918301596715, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.5101346767568247, 18);
  sqcRYGate(q, -1.84743536223381, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.3884376017892384, 18);
  sqcRYGate(q, 1.3815485864626922, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.9316617634049136, 1);
  sqcRYGate(q, -1.0514933919496725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.643326864508411, 1);
  sqcRYGate(q, -0.6743926450476243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6294723161729616, 3);
  sqcRYGate(q, 3.1277163689766496, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.121415551420921, 3);
  sqcRYGate(q, 1.067638684646129, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3044679910310915, 5);
  sqcRYGate(q, -1.6915267574949513, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8085259398467386, 5);
  sqcRYGate(q, -1.5755280110806327, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5698480757937339, 7);
  sqcRYGate(q, -1.6332106818503196, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.754841398303762, 7);
  sqcRYGate(q, 2.7582758826438485, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.4240258751711954, 9);
  sqcRYGate(q, -1.7625742890690326, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6118810801064978, 9);
  sqcRYGate(q, -0.9753002815073584, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5314859012450412, 11);
  sqcRYGate(q, -1.5314756969414776, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.80439693047758, 11);
  sqcRYGate(q, -2.769876660968873, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.0139057632219153, 13);
  sqcRYGate(q, -1.398584292358498, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.3593740837594048, 13);
  sqcRYGate(q, -0.039839032997839814, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5544975922744246, 15);
  sqcRYGate(q, -1.5242359690209946, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5405445163831724, 15);
  sqcRYGate(q, -2.87789966561524, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5389446190667257, 17);
  sqcRYGate(q, -1.4811574480802443, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.46361386702070884, 17);
  sqcRYGate(q, 1.5500722876810284, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.5882485377170409, 0);
  sqcRYGate(q, 1.5723762558683978, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3093722916814112, 0);
  sqcRYGate(q, 1.4042502316003276, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5514066645451017, 2);
  sqcRYGate(q, -1.6072828743149838, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2775961633909882, 2);
  sqcRYGate(q, -1.5589222151816893, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.609318206625093, 4);
  sqcRYGate(q, 1.9461644413539325, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6084986368380716, 4);
  sqcRYGate(q, 2.830202892191151, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.089681645065152, 6);
  sqcRYGate(q, -0.5969818585749677, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.13706862398389, 6);
  sqcRYGate(q, 1.4982301708378098, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.57084649637034, 8);
  sqcRYGate(q, 1.7698365955456379, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5121186921617478, 8);
  sqcRYGate(q, -1.4826499699187723, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.559201869057265, 10);
  sqcRYGate(q, 1.6072935203119554, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5892090193227513, 10);
  sqcRYGate(q, -1.623060167303631, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8277810341525642, 12);
  sqcRYGate(q, -0.1381207306606189, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.7538113838445417, 12);
  sqcRYGate(q, 0.040615262598658164, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.6886474681623868, 14);
  sqcRYGate(q, -1.5827726882480304, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.4748218977586856, 14);
  sqcRYGate(q, 0.08416600105967804, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5660515635674308, 16);
  sqcRYGate(q, -1.5511096113747649, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.562288152936497, 16);
  sqcRYGate(q, 1.2433408290189432, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.5738383791375758, 18);
  sqcRYGate(q, 1.6831622890467095, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.55469998925326, 18);
  sqcRYGate(q, -1.507752449230173, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.5545261136325035, 1);
  sqcRYGate(q, -2.346964385315114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3785481477488393, 1);
  sqcRYGate(q, -1.585770922069365, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6079619951057758, 3);
  sqcRYGate(q, -2.873084349130633, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.11900329988595, 3);
  sqcRYGate(q, -1.5412816519655674, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1267530117841154, 5);
  sqcRYGate(q, -1.5772858904325033, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.527946720434418, 5);
  sqcRYGate(q, 1.4845290247653882, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.544205112115536, 7);
  sqcRYGate(q, -1.3079407421260392, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.024979290822887634, 7);
  sqcRYGate(q, -2.7396265503954895, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5994075864246315, 9);
  sqcRYGate(q, -1.1803851497150264, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.2197483271049743, 9);
  sqcRYGate(q, 1.63704033219986, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5574363734093146, 11);
  sqcRYGate(q, 1.8443624649257544, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.6961591249634935, 11);
  sqcRYGate(q, -1.5326310134233714, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6166223646207518, 13);
  sqcRYGate(q, 2.386289597017931, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.040582082336461, 13);
  sqcRYGate(q, -1.3389116074862573, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5891227325143786, 15);
  sqcRYGate(q, -1.5714903032352179, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.6921931881818553, 15);
  sqcRYGate(q, 2.671731705530323, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.57899072626146, 17);
  sqcRYGate(q, -1.3934211019670135, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.560732453503852, 17);
  sqcRYGate(q, 1.7878680728975107, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.424463279008329, 0);
  sqcRYGate(q, 0.5242636446135923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1230942771078025, 0);
  sqcRYGate(q, -1.5371994398705544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8428436358976215, 2);
  sqcRYGate(q, 1.888288382563088, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0213678582854544, 2);
  sqcRYGate(q, -0.07397063509332025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.26182822878054246, 4);
  sqcRYGate(q, 2.9145439291334463, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -8.978041333998672e-05, 4);
  sqcRYGate(q, 0.0545852120961619, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5812292920131699, 6);
  sqcRYGate(q, 1.5732672103600682, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5618865879816797, 6);
  sqcRYGate(q, -1.5226904689036864, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8293589057938764, 8);
  sqcRYGate(q, -2.6766243237227685, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1410387977693217, 8);
  sqcRYGate(q, -1.5668369871359908, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.1345214819388545, 10);
  sqcRYGate(q, 0.35761522791511874, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.086454784874094, 10);
  sqcRYGate(q, -3.112765586232256, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.524359987882112, 12);
  sqcRYGate(q, -1.554497535412558, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.670994725161088, 12);
  sqcRYGate(q, -0.3058906270370061, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.7122496677442793, 14);
  sqcRYGate(q, -1.555844069961171, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.4142450693643038, 14);
  sqcRYGate(q, -1.4706263401983228, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5689868968808716, 16);
  sqcRYGate(q, 1.5657765427564687, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.478012000322365, 16);
  sqcRYGate(q, 1.7249089038946543, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.00667240916561, 18);
  sqcRYGate(q, -0.31386156829875933, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.5820632075790861, 18);
  sqcRYGate(q, 2.917018605536311, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.5594330160550576, 1);
  sqcRYGate(q, -1.3924628256320608, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7778130572713366, 1);
  sqcRYGate(q, -0.23294114009613853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3124256784327653, 3);
  sqcRYGate(q, -1.552902165970271, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5700314678947005, 3);
  sqcRYGate(q, 3.1086877378766493, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9115198707515915, 5);
  sqcRYGate(q, 2.9682210292331095, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.02167875629480953, 5);
  sqcRYGate(q, -1.6497607309795468, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2977855424246334, 7);
  sqcRYGate(q, -0.1667821211740943, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.119630540310404, 7);
  sqcRYGate(q, 3.1382961939412684, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.7452392583790046, 9);
  sqcRYGate(q, -2.5058949174358798, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.3762616104085783, 9);
  sqcRYGate(q, -3.1357310183787455, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.3653368413222634, 11);
  sqcRYGate(q, 1.0207818856317015, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.0280967511530585, 11);
  sqcRYGate(q, 1.5805654065407317, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.1566527451372277, 13);
  sqcRYGate(q, -0.9536458202875099, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.0010791457258125803, 13);
  sqcRYGate(q, -3.1201960136925937, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.4980035661503512, 15);
  sqcRYGate(q, -0.4027798144625825, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -3.125303096712805, 15);
  sqcRYGate(q, 3.116633455938042, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.524084384775656, 17);
  sqcRYGate(q, 1.0056167904988857, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.01913196160288586, 17);
  sqcRYGate(q, -2.2540189454444413, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.001319569519715071, 0);
  sqcRYGate(q, -1.5860565105484405, 1);
  sqcRYGate(q, -1.360273563547901, 2);
  sqcRYGate(q, 2.5086237601841725, 3);
  sqcRYGate(q, 0.020029382982800895, 4);
  sqcRYGate(q, 1.477779182554353, 5);
  sqcRYGate(q, -1.3903053808642456, 6);
  sqcRYGate(q, 2.854074144676144, 7);
  sqcRYGate(q, -1.739912812611899, 8);
  sqcRYGate(q, -1.5742812059852442, 9);
  sqcRYGate(q, 2.7533907887292592, 10);
  sqcRYGate(q, -1.5424117863623632, 11);
  sqcRYGate(q, 2.5486827357217887, 12);
  sqcRYGate(q, 1.9385736717485802, 13);
  sqcRYGate(q, 2.5325060448879575, 14);
  sqcRYGate(q, -1.498131571235996, 15);
  sqcRYGate(q, 1.1627625551568004, 16);
  sqcRYGate(q, -1.5237439839170577, 17);
  sqcRYGate(q, 0.991573584428011, 18);
  sqcRYGate(q, -1.5377057517465618, 19);

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
