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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -3.0471995594392443, 0);
  sqcRYGate(q, 2.241669433753401, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4825212600807917, 0);
  sqcRYGate(q, 2.921941269553279, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8244847843483396, 1);
  sqcRYGate(q, 1.8252446112860459, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.216245005418163, 1);
  sqcRYGate(q, 2.5211467769594544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7360335455235427, 2);
  sqcRYGate(q, -0.11598504797248665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.45333854248292, 2);
  sqcRYGate(q, 1.5790063788633557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3040720822755028, 0);
  sqcRYGate(q, -0.2985059612149792, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.45258962203354164, 0);
  sqcRYGate(q, -3.080890065461071, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5204191923130415, 1);
  sqcRYGate(q, 2.258508897651425, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.538909373839056, 1);
  sqcRYGate(q, -1.7899625755151314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05724359294701301, 2);
  sqcRYGate(q, -1.7281519935155896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8045341486601278, 2);
  sqcRYGate(q, -0.7513446735701209, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.360338736550199, 0);
  sqcRYGate(q, 1.7194754642523593, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3538764122532052, 0);
  sqcRYGate(q, 1.2828896916445407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6590747546960207, 1);
  sqcRYGate(q, -2.4808715563536694, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8418057404809514, 1);
  sqcRYGate(q, -0.47431865696286746, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6393826526625384, 2);
  sqcRYGate(q, 1.4769587105196518, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.864099079421728, 2);
  sqcRYGate(q, 0.2610603995457703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9980676407510054, 0);
  sqcRYGate(q, 1.0360355850674634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1525066112685503, 0);
  sqcRYGate(q, -2.4630550511498144, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6624945205586308, 1);
  sqcRYGate(q, -1.9439477806055758, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7016975882268084, 1);
  sqcRYGate(q, 2.1613280023555483, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.36023245050760627, 2);
  sqcRYGate(q, -2.9236975127897575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4545783448533562, 2);
  sqcRYGate(q, 2.116897962506945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.17552681673753145, 0);
  sqcRYGate(q, -0.5980616071840483, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0846379760281932, 0);
  sqcRYGate(q, 2.6558141516440856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.231339017111399, 1);
  sqcRYGate(q, -2.3778554163692114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2837602290414081, 1);
  sqcRYGate(q, -1.5016576441775065, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4138802765702065, 2);
  sqcRYGate(q, -0.5433975694736892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6526622174974173, 2);
  sqcRYGate(q, 2.4491230718018007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0427366144786934, 0);
  sqcRYGate(q, 1.9927358891910911, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4211679662607204, 0);
  sqcRYGate(q, 2.033960655977215, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3632053128604674, 1);
  sqcRYGate(q, -0.6720539646715, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.263325162428597, 1);
  sqcRYGate(q, 3.136246688045585, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7498006809976094, 2);
  sqcRYGate(q, 0.5044695260342464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8428304709465202, 2);
  sqcRYGate(q, 3.099017266521345, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.502135234678546, 0);
  sqcRYGate(q, -0.18012531552922972, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7297556033524139, 0);
  sqcRYGate(q, 1.4656801805629982, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6412572823170684, 1);
  sqcRYGate(q, -2.167860694659757, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.48494468783195266, 1);
  sqcRYGate(q, -3.1110404394246114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9097239998228074, 2);
  sqcRYGate(q, -0.1626811585670762, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8610779375774653, 2);
  sqcRYGate(q, 2.77046249395723, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6594830934877973, 0);
  sqcRYGate(q, -2.1446048403110822, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7805540687885975, 0);
  sqcRYGate(q, -2.1587419233642873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4514994003359742, 1);
  sqcRYGate(q, 0.8505899295738049, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2481890323531708, 1);
  sqcRYGate(q, 2.086620115894362, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.514111100773267, 2);
  sqcRYGate(q, -1.510081243985578, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.489783145302189, 2);
  sqcRYGate(q, -0.7394826624640788, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9339930028164485, 0);
  sqcRYGate(q, 1.3184071406604225, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3683807427371901, 0);
  sqcRYGate(q, -2.875186396853314, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.208494391121005, 1);
  sqcRYGate(q, -1.9047905321905683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6762141206520815, 1);
  sqcRYGate(q, 1.1713142176321392, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4633984920223364, 2);
  sqcRYGate(q, 2.018736299410465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4246627347823433, 2);
  sqcRYGate(q, 1.7623947060040417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.757324006252298, 0);
  sqcRYGate(q, -3.119993671289743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8880408452695635, 0);
  sqcRYGate(q, 2.8637228459458868, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.19625677887084222, 1);
  sqcRYGate(q, 1.5500277904564541, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9760593634699815, 1);
  sqcRYGate(q, -1.1862843179145268, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5691871031267466, 2);
  sqcRYGate(q, 1.8741107132619004, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.323887797833736, 2);
  sqcRYGate(q, 0.37485060124500336, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.641100531952661, 0);
  sqcRYGate(q, -2.0137328015371985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7427562397786156, 0);
  sqcRYGate(q, -1.6066138243683707, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8936357469741623, 1);
  sqcRYGate(q, 2.257063257164729, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2802271342597544, 1);
  sqcRYGate(q, 2.7659427629264415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.008146976878186, 2);
  sqcRYGate(q, -2.0268112622338252, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5480116418755594, 2);
  sqcRYGate(q, -0.4624241566750302, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.750054536545042, 0);
  sqcRYGate(q, 0.4072919261861321, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3434398678271684, 0);
  sqcRYGate(q, -2.1140181128707276, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.021175272277955237, 1);
  sqcRYGate(q, 1.1365004689360765, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8656274227787251, 1);
  sqcRYGate(q, 2.0616038840189557, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4295664146988796, 2);
  sqcRYGate(q, -0.7469281750405267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7678838724182242, 2);
  sqcRYGate(q, -1.7462221776549227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0237466653474607, 0);
  sqcRYGate(q, -2.5219801297115194, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7076821140583713, 0);
  sqcRYGate(q, -0.5257674535901103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15467227813830764, 1);
  sqcRYGate(q, -1.629261891095691, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.095852301964916, 1);
  sqcRYGate(q, -0.005437393381810374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.16173859119794, 2);
  sqcRYGate(q, 2.1149531414459597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.694054805954292, 2);
  sqcRYGate(q, -1.879996924633157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.21246572792237758, 0);
  sqcRYGate(q, -3.1129084201906134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.292762233711227, 0);
  sqcRYGate(q, 2.445060636045484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5860711124612958, 1);
  sqcRYGate(q, 1.3926818523403448, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.063760528960045, 1);
  sqcRYGate(q, -2.8041162616374944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6953399221541927, 2);
  sqcRYGate(q, -3.0850735775490388, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9181304725430532, 2);
  sqcRYGate(q, 1.8962199198815965, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3936451716288698, 0);
  sqcRYGate(q, 0.5384441124423324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.881312191794259, 0);
  sqcRYGate(q, 1.3514544758709663, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.24660704331546057, 1);
  sqcRYGate(q, -3.0430673618143014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3730047763317408, 1);
  sqcRYGate(q, 1.0250034549333407, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3930051559129542, 2);
  sqcRYGate(q, 0.5893322191083574, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.910310890123945, 2);
  sqcRYGate(q, -2.5462676588509, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0462430812779298, 0);
  sqcRYGate(q, 0.5879498316166263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.057688460908994814, 0);
  sqcRYGate(q, -2.11839515321335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7986321041611424, 1);
  sqcRYGate(q, -1.4578265907025747, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.711242064196146, 1);
  sqcRYGate(q, -0.699075354421482, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.678358276672189, 2);
  sqcRYGate(q, 2.485484280340615, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6201255617920562, 2);
  sqcRYGate(q, 2.973593681556893, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4097436670924202, 0);
  sqcRYGate(q, 1.8176748106856317, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.519440425348978, 0);
  sqcRYGate(q, -2.1132226411426656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9860595689535945, 1);
  sqcRYGate(q, 1.2082479896256153, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10169864440851839, 1);
  sqcRYGate(q, -2.5509339328037846, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8092999182831062, 2);
  sqcRYGate(q, -0.23810605815881747, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.493987969417969, 2);
  sqcRYGate(q, -2.156061135998255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5586501846104897, 0);
  sqcRYGate(q, 3.012240891470491, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2323813048593415, 0);
  sqcRYGate(q, 0.5546573130446653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5100613512391536, 1);
  sqcRYGate(q, -0.6544177932088817, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.829059886303503, 1);
  sqcRYGate(q, -0.7605952157387843, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6965533249487341, 2);
  sqcRYGate(q, -0.6232529168825532, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.16244752875604274, 2);
  sqcRYGate(q, 0.6351661920564762, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9103105593168004, 0);
  sqcRYGate(q, -1.4241646191510648, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7178903732696217, 0);
  sqcRYGate(q, 0.34001339033427325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5776111017560033, 1);
  sqcRYGate(q, 0.9775099652270054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9014721427663952, 1);
  sqcRYGate(q, -1.2680676979405976, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.538989407866092, 2);
  sqcRYGate(q, -1.7541275979083553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3707835841387324, 2);
  sqcRYGate(q, 2.5254055623528235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6270602201681523, 0);
  sqcRYGate(q, -0.8572057968123618, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.821834561439504, 0);
  sqcRYGate(q, 0.3049831898557379, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4460097786647426, 1);
  sqcRYGate(q, -2.6303879625156408, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.22792590053014017, 1);
  sqcRYGate(q, 0.6723084122059522, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6668904302976424, 2);
  sqcRYGate(q, 0.9917459197732381, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.02070658180277, 2);
  sqcRYGate(q, 1.6239665254329938, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4545367748522059, 0);
  sqcRYGate(q, 1.568184953743045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.007983607997456, 0);
  sqcRYGate(q, 2.956930514470029, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8869677192646739, 1);
  sqcRYGate(q, 0.12379513315896683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6193091651693976, 1);
  sqcRYGate(q, -0.0009047471106207183, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.111422698178615, 2);
  sqcRYGate(q, 2.6063680678528525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7341831441812605, 2);
  sqcRYGate(q, -2.2237377580724766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5704941934453607, 0);
  sqcRYGate(q, -0.16619370675274403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.19662365975246282, 0);
  sqcRYGate(q, -0.721787141739876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.013932787779671, 1);
  sqcRYGate(q, -2.0458263880483876, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1798155340800305, 1);
  sqcRYGate(q, -0.5059534769749501, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.172787609617319, 2);
  sqcRYGate(q, 2.3811380473696033, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9851366356688382, 2);
  sqcRYGate(q, 2.5739653159580604, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3976567359700227, 0);
  sqcRYGate(q, 1.0404495185904112, 1);
  sqcRYGate(q, 0.051537502729885006, 2);
  sqcRYGate(q, 0.18842903359171184, 3);

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
