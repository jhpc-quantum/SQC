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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.212156863748554, 0);
  sqcRZGate(q, -0.5396092483919251, 0);
  sqcRYGate(q, 2.0903962934369584, 1);
  sqcRZGate(q, -0.9043027519692765, 1);
  sqcRYGate(q, 1.1625322060638728, 2);
  sqcRZGate(q, 0.2551905523840814, 2);
  sqcRYGate(q, 0.5892513739364186, 3);
  sqcRZGate(q, -2.586127808491974, 3);
  sqcRYGate(q, 2.0599166696784916, 4);
  sqcRZGate(q, 0.9345191713253043, 4);
  sqcRYGate(q, 1.9154876299592791, 5);
  sqcRZGate(q, -1.4237746816816605, 5);
  sqcRYGate(q, -1.8211382669192946, 6);
  sqcRZGate(q, -3.1381282381934903, 6);
  sqcRYGate(q, 1.5668543848505954, 7);
  sqcRZGate(q, 0.928942984794156, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.670567424838152, 0);
  sqcRZGate(q, -1.6865824036226778, 0);
  sqcRYGate(q, 2.3075068701235866, 1);
  sqcRZGate(q, -1.8356261177743198, 1);
  sqcRYGate(q, 1.2965175384390093, 2);
  sqcRZGate(q, -2.2307372731001394, 2);
  sqcRYGate(q, 0.7963990857812976, 3);
  sqcRZGate(q, -0.0466882412659547, 3);
  sqcRYGate(q, -0.4230965383237742, 4);
  sqcRZGate(q, 1.5794427491903842, 4);
  sqcRYGate(q, 2.1399053736400395, 5);
  sqcRZGate(q, 1.2895560420230678, 5);
  sqcRYGate(q, 1.548337954130469, 6);
  sqcRZGate(q, -0.3136908017727505, 6);
  sqcRYGate(q, -2.0117381970140658, 7);
  sqcRZGate(q, 3.0109532760556315, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.739352997224193, 0);
  sqcRZGate(q, -0.9329095842177741, 0);
  sqcRYGate(q, 1.499773540052796, 1);
  sqcRZGate(q, 1.1667329195604719, 1);
  sqcRYGate(q, 1.6700885095240294, 2);
  sqcRZGate(q, -1.4566030171236166, 2);
  sqcRYGate(q, -2.5002896567858235, 3);
  sqcRZGate(q, -1.1195176618598885, 3);
  sqcRYGate(q, -0.8976581090381854, 4);
  sqcRZGate(q, -1.3281278977257527, 4);
  sqcRYGate(q, -1.3762914289675896, 5);
  sqcRZGate(q, 2.089102415561939, 5);
  sqcRYGate(q, 1.8332881844634774, 6);
  sqcRZGate(q, 2.1927776419250398, 6);
  sqcRYGate(q, -1.4082150995433511, 7);
  sqcRZGate(q, 2.1565868917859836, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.4473914334780438, 0);
  sqcRZGate(q, 1.7338270365636497, 0);
  sqcRYGate(q, -1.994488361912975, 1);
  sqcRZGate(q, 1.0689168158462963, 1);
  sqcRYGate(q, -0.9126030641540646, 2);
  sqcRZGate(q, -2.6466409900557966, 2);
  sqcRYGate(q, 2.6007149274355497, 3);
  sqcRZGate(q, 0.21178343568799946, 3);
  sqcRYGate(q, 2.6920570970119697, 4);
  sqcRZGate(q, -2.099413063130574, 4);
  sqcRYGate(q, 1.6899812957845184, 5);
  sqcRZGate(q, -0.26478418521339636, 5);
  sqcRYGate(q, -1.533298030189617, 6);
  sqcRZGate(q, -3.0887732162616603, 6);
  sqcRYGate(q, 2.586961156025312, 7);
  sqcRZGate(q, -0.926994009492378, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.89733814420575, 0);
  sqcRZGate(q, 1.1032782217604327, 0);
  sqcRYGate(q, -0.4802548184047007, 1);
  sqcRZGate(q, -1.7044699610889305, 1);
  sqcRYGate(q, -1.7986294576420407, 2);
  sqcRZGate(q, 1.9419580591412293, 2);
  sqcRYGate(q, -1.9336542223025228, 3);
  sqcRZGate(q, 2.680935444524434, 3);
  sqcRYGate(q, 0.5833777823017517, 4);
  sqcRZGate(q, -2.8990315033085325, 4);
  sqcRYGate(q, -2.560093846471773, 5);
  sqcRZGate(q, -1.0446400223461607, 5);
  sqcRYGate(q, -2.5061084603015797, 6);
  sqcRZGate(q, 1.058025063754455, 6);
  sqcRYGate(q, -2.854191709065743, 7);
  sqcRZGate(q, 1.0386107553818613, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 3.059772051320473, 0);
  sqcRZGate(q, -1.3284156287842928, 0);
  sqcRYGate(q, 1.4432361080298302, 1);
  sqcRZGate(q, -1.4379923149874607, 1);
  sqcRYGate(q, -1.4953432982113215, 2);
  sqcRZGate(q, -0.7689635640925871, 2);
  sqcRYGate(q, -2.599817854080077, 3);
  sqcRZGate(q, 2.74316903453969, 3);
  sqcRYGate(q, 0.8858088589375814, 4);
  sqcRZGate(q, -2.7179008796304145, 4);
  sqcRYGate(q, -0.20781517015643863, 5);
  sqcRZGate(q, 2.16616224342909, 5);
  sqcRYGate(q, 2.0224826122070736, 6);
  sqcRZGate(q, -2.7526929602461863, 6);
  sqcRYGate(q, 2.4986841803397013, 7);
  sqcRZGate(q, 2.8721177681200767, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.4767355534012188, 0);
  sqcRZGate(q, -2.071315373323918, 0);
  sqcRYGate(q, 0.26431135263298355, 1);
  sqcRZGate(q, -1.7160342836617597, 1);
  sqcRYGate(q, -1.8245719351254952, 2);
  sqcRZGate(q, -2.3831451746748376, 2);
  sqcRYGate(q, 2.395231252742438, 3);
  sqcRZGate(q, 0.61515733056907, 3);
  sqcRYGate(q, -2.642065286514487, 4);
  sqcRZGate(q, -0.8387344565735342, 4);
  sqcRYGate(q, 0.845336097412611, 5);
  sqcRZGate(q, 1.9040551990523815, 5);
  sqcRYGate(q, -0.9662970979537046, 6);
  sqcRZGate(q, -2.8585019344190026, 6);
  sqcRYGate(q, 0.8715274817133478, 7);
  sqcRZGate(q, 2.0282038926903176, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.4696320777924705, 0);
  sqcRZGate(q, 2.1724783545550714, 0);
  sqcRYGate(q, 0.628545882220708, 1);
  sqcRZGate(q, -0.2829324495453785, 1);
  sqcRYGate(q, 0.3505532737488908, 2);
  sqcRZGate(q, -2.4249759509623905, 2);
  sqcRYGate(q, -1.2600430014124786, 3);
  sqcRZGate(q, -0.10291901206583365, 3);
  sqcRYGate(q, -0.11958498443245688, 4);
  sqcRZGate(q, -0.8421230736051182, 4);
  sqcRYGate(q, -2.2974946086259496, 5);
  sqcRZGate(q, -2.877695607721689, 5);
  sqcRYGate(q, 2.3242699972796643, 6);
  sqcRZGate(q, -1.751061841463386, 6);
  sqcRYGate(q, 1.6010959373168736, 7);
  sqcRZGate(q, 2.884134926263023, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.7891606438443741, 0);
  sqcRZGate(q, -1.8779265238521239, 0);
  sqcRYGate(q, 0.5520020188647266, 1);
  sqcRZGate(q, -1.7073272528661747, 1);
  sqcRYGate(q, 2.14206410445792, 2);
  sqcRZGate(q, 0.040521778792398835, 2);
  sqcRYGate(q, 2.9586014392031768, 3);
  sqcRZGate(q, -1.34534347313597, 3);
  sqcRYGate(q, -2.2009037391360957, 4);
  sqcRZGate(q, 0.5939834042258001, 4);
  sqcRYGate(q, 1.2491555888791845, 5);
  sqcRZGate(q, -1.1495943924800835, 5);
  sqcRYGate(q, 2.2569508181407985, 6);
  sqcRZGate(q, 0.46835178222750745, 6);
  sqcRYGate(q, 0.3781728939758944, 7);
  sqcRZGate(q, -0.166950924109897, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.6277608142234374, 0);
  sqcRZGate(q, 0.1110731742672549, 0);
  sqcRYGate(q, 2.604207273030315, 1);
  sqcRZGate(q, 1.3978252256324168, 1);
  sqcRYGate(q, -1.6282531141129324, 2);
  sqcRZGate(q, -0.722245956396347, 2);
  sqcRYGate(q, -1.230437535087342, 3);
  sqcRZGate(q, -0.09649935863363222, 3);
  sqcRYGate(q, 2.4526336881798536, 4);
  sqcRZGate(q, -2.164915779128056, 4);
  sqcRYGate(q, -0.6474748817434902, 5);
  sqcRZGate(q, 0.291256344306591, 5);
  sqcRYGate(q, 0.7553144534466821, 6);
  sqcRZGate(q, 0.35990551324279263, 6);
  sqcRYGate(q, -1.4493134115422572, 7);
  sqcRZGate(q, 3.0829777372812432, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.348916710929204, 0);
  sqcRZGate(q, -3.0220768289225926, 0);
  sqcRYGate(q, 2.0536138498789835, 1);
  sqcRZGate(q, -3.0355879991856147, 1);
  sqcRYGate(q, -0.9948490376654839, 2);
  sqcRZGate(q, -0.3174270597977289, 2);
  sqcRYGate(q, 0.7478319072887417, 3);
  sqcRZGate(q, -1.6491047993051957, 3);
  sqcRYGate(q, -2.4047149626441966, 4);
  sqcRZGate(q, -2.4088474456629076, 4);
  sqcRYGate(q, -1.6271284796837806, 5);
  sqcRZGate(q, 2.5267235122672482, 5);
  sqcRYGate(q, 2.1020574437424218, 6);
  sqcRZGate(q, -2.77852777404261, 6);
  sqcRYGate(q, 2.385311728184296, 7);
  sqcRZGate(q, 2.413409294803228, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.5235400726394404, 0);
  sqcRZGate(q, -0.864060625919971, 0);
  sqcRYGate(q, 0.08274809797500726, 1);
  sqcRZGate(q, 0.448847773324137, 1);
  sqcRYGate(q, -1.3158959867680649, 2);
  sqcRZGate(q, -3.056137403092265, 2);
  sqcRYGate(q, -2.1503564562009894, 3);
  sqcRZGate(q, -2.8141616166428, 3);
  sqcRYGate(q, 2.756691836979477, 4);
  sqcRZGate(q, -0.43887015881044666, 4);
  sqcRYGate(q, -0.6597238305888382, 5);
  sqcRZGate(q, -1.6555503586130769, 5);
  sqcRYGate(q, 2.5601691561201627, 6);
  sqcRZGate(q, 1.9317329309234126, 6);
  sqcRYGate(q, 0.4947982684262626, 7);
  sqcRZGate(q, -1.2077195940934802, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.8817289918032811, 0);
  sqcRZGate(q, 1.137344054940905, 0);
  sqcRYGate(q, -1.8590551539269242, 1);
  sqcRZGate(q, 0.4356948707972364, 1);
  sqcRYGate(q, 0.7164220326616677, 2);
  sqcRZGate(q, 1.8996323064533864, 2);
  sqcRYGate(q, -1.3749518522642217, 3);
  sqcRZGate(q, 1.2982906167201405, 3);
  sqcRYGate(q, -1.365207832694684, 4);
  sqcRZGate(q, 1.1808943434862602, 4);
  sqcRYGate(q, 1.3814538968934926, 5);
  sqcRZGate(q, 0.2963235268509268, 5);
  sqcRYGate(q, 2.164036458348836, 6);
  sqcRZGate(q, 0.8599614725573109, 6);
  sqcRYGate(q, 0.07998756854367528, 7);
  sqcRZGate(q, 0.24240201658545057, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.9311658850943005, 0);
  sqcRZGate(q, -2.8602519665394883, 0);
  sqcRYGate(q, -2.9296707561228676, 1);
  sqcRZGate(q, 2.1687183555091156, 1);
  sqcRYGate(q, -0.9131198274980955, 2);
  sqcRZGate(q, 2.1347581010084102, 2);
  sqcRYGate(q, 0.43880145525449255, 3);
  sqcRZGate(q, -1.2430352855359257, 3);
  sqcRYGate(q, -2.0654169983634576, 4);
  sqcRZGate(q, -2.5541740200072844, 4);
  sqcRYGate(q, -0.5192836397272167, 5);
  sqcRZGate(q, 2.162610511416087, 5);
  sqcRYGate(q, -0.6018156052676297, 6);
  sqcRZGate(q, -1.4687532897178848, 6);
  sqcRYGate(q, -0.20387118698547016, 7);
  sqcRZGate(q, 2.9652563577619313, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.0598817215593364, 0);
  sqcRZGate(q, 0.20185512738495823, 0);
  sqcRYGate(q, -1.4863459481561767, 1);
  sqcRZGate(q, 0.608898189398941, 1);
  sqcRYGate(q, 2.858719250715243, 2);
  sqcRZGate(q, -0.5551330822670426, 2);
  sqcRYGate(q, -1.2083423251551988, 3);
  sqcRZGate(q, 2.795602999680632, 3);
  sqcRYGate(q, -1.7515727015267526, 4);
  sqcRZGate(q, 0.739967587883771, 4);
  sqcRYGate(q, -0.12456410623046654, 5);
  sqcRZGate(q, -2.8036267798548415, 5);
  sqcRYGate(q, 2.118451660013129, 6);
  sqcRZGate(q, -1.305363184943757, 6);
  sqcRYGate(q, -0.520491512711292, 7);
  sqcRZGate(q, -3.0604687732819804, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5866294722713035, 0);
  sqcRZGate(q, -2.9253703730573277, 0);
  sqcRYGate(q, -3.03166898122155, 1);
  sqcRZGate(q, 2.7408772369132537, 1);
  sqcRYGate(q, 2.1263285176285693, 2);
  sqcRZGate(q, 1.2916236461494661, 2);
  sqcRYGate(q, -1.3612798915984943, 3);
  sqcRZGate(q, 1.2233160630641935, 3);
  sqcRYGate(q, -1.7034925385601807, 4);
  sqcRZGate(q, 2.930628209056676, 4);
  sqcRYGate(q, -0.40701908549181864, 5);
  sqcRZGate(q, 0.8768319331578515, 5);
  sqcRYGate(q, -2.0608111835031875, 6);
  sqcRZGate(q, -0.40100662685962263, 6);
  sqcRYGate(q, 1.2068201239469363, 7);
  sqcRZGate(q, 1.1298814916645086, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.8319721894511614, 0);
  sqcRZGate(q, -2.774723736613537, 0);
  sqcRYGate(q, 0.49866944616058867, 1);
  sqcRZGate(q, -0.03921232298667477, 1);
  sqcRYGate(q, -2.2277757432081096, 2);
  sqcRZGate(q, -2.733670308576651, 2);
  sqcRYGate(q, 0.9940635409696023, 3);
  sqcRZGate(q, 2.0168262539685333, 3);
  sqcRYGate(q, 0.1853323657482582, 4);
  sqcRZGate(q, -1.504731730545605, 4);
  sqcRYGate(q, -2.350019639159539, 5);
  sqcRZGate(q, 2.9873866159451525, 5);
  sqcRYGate(q, -1.7936915754726854, 6);
  sqcRZGate(q, 2.769564385063518, 6);
  sqcRYGate(q, 2.1865094306106894, 7);
  sqcRZGate(q, -0.47191047389404517, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.8568837788186228, 0);
  sqcRZGate(q, -1.9760818456460194, 0);
  sqcRYGate(q, 0.9701922102717131, 1);
  sqcRZGate(q, 2.8038561538273776, 1);
  sqcRYGate(q, 2.542902050038831, 2);
  sqcRZGate(q, 0.3065369297508714, 2);
  sqcRYGate(q, -1.5767901697188647, 3);
  sqcRZGate(q, -1.6956571890005971, 3);
  sqcRYGate(q, -0.9247114653221198, 4);
  sqcRZGate(q, 0.41629229431967474, 4);
  sqcRYGate(q, -0.3751781129725013, 5);
  sqcRZGate(q, -1.5741110350631327, 5);
  sqcRYGate(q, -2.5581630647787756, 6);
  sqcRZGate(q, -1.1546890489173194, 6);
  sqcRYGate(q, -1.5261566221153242, 7);
  sqcRZGate(q, 2.5690491486336486, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.214310795146962, 0);
  sqcRZGate(q, 0.27348233792544946, 0);
  sqcRYGate(q, -1.0360118186393503, 1);
  sqcRZGate(q, -0.5692131753079087, 1);
  sqcRYGate(q, -2.1806498625464537, 2);
  sqcRZGate(q, -2.56542455421687, 2);
  sqcRYGate(q, 1.999975659222577, 3);
  sqcRZGate(q, -2.3934282142764367, 3);
  sqcRYGate(q, 0.7756731518934118, 4);
  sqcRZGate(q, 0.663249254871749, 4);
  sqcRYGate(q, 2.282048362139686, 5);
  sqcRZGate(q, -0.5371338661680026, 5);
  sqcRYGate(q, 2.419737071878843, 6);
  sqcRZGate(q, -0.4691211855151325, 6);
  sqcRYGate(q, 2.130158993542798, 7);
  sqcRZGate(q, 0.9902262003506382, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.849496295082175, 0);
  sqcRZGate(q, -2.928892734907597, 0);
  sqcRYGate(q, 2.189025741558819, 1);
  sqcRZGate(q, -1.3087643031844367, 1);
  sqcRYGate(q, 1.0444130792487167, 2);
  sqcRZGate(q, 1.840147965461754, 2);
  sqcRYGate(q, -2.539680240222446, 3);
  sqcRZGate(q, -2.5427617463934333, 3);
  sqcRYGate(q, -2.1254791985082475, 4);
  sqcRZGate(q, 1.173570103931242, 4);
  sqcRYGate(q, 0.1810154350132013, 5);
  sqcRZGate(q, 1.2575815794617036, 5);
  sqcRYGate(q, -2.948135708958636, 6);
  sqcRZGate(q, -0.5626297984705616, 6);
  sqcRYGate(q, 0.6080665773736342, 7);
  sqcRZGate(q, 0.5268401394288987, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.1533721709483977, 0);
  sqcRZGate(q, 0.32654717765341257, 0);
  sqcRYGate(q, -1.2398051745255265, 1);
  sqcRZGate(q, -2.406616674038613, 1);
  sqcRYGate(q, 1.249523005401456, 2);
  sqcRZGate(q, -0.239049871599132, 2);
  sqcRYGate(q, 0.197349026226164, 3);
  sqcRZGate(q, 0.7603143515200887, 3);
  sqcRYGate(q, -2.5109250054565893, 4);
  sqcRZGate(q, 1.2101157541498324, 4);
  sqcRYGate(q, 2.901671009981741, 5);
  sqcRZGate(q, -0.7003875179308885, 5);
  sqcRYGate(q, 0.6478518508799835, 6);
  sqcRZGate(q, 1.292103276379601, 6);
  sqcRYGate(q, 0.004923463256773932, 7);
  sqcRZGate(q, 2.541946728950551, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.22721953602588574, 0);
  sqcRZGate(q, -2.423803522336156, 0);
  sqcRYGate(q, 2.666214824630671, 1);
  sqcRZGate(q, -1.3089138805872864, 1);
  sqcRYGate(q, 2.1950658333413076, 2);
  sqcRZGate(q, -3.0935635357213793, 2);
  sqcRYGate(q, -1.643710634984548, 3);
  sqcRZGate(q, -0.17803484406480294, 3);
  sqcRYGate(q, -2.3576460980569918, 4);
  sqcRZGate(q, 0.6851219537651465, 4);
  sqcRYGate(q, 2.3437309969129343, 5);
  sqcRZGate(q, 1.2847421331521416, 5);
  sqcRYGate(q, -1.0610486255917504, 6);
  sqcRZGate(q, 1.8291451775243548, 6);
  sqcRYGate(q, 2.75154638144238, 7);
  sqcRZGate(q, 0.2717408385202562, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.5400401270869897, 0);
  sqcRZGate(q, -0.41845972636513656, 0);
  sqcRYGate(q, 1.4016415289695772, 1);
  sqcRZGate(q, -1.7633087708008421, 1);
  sqcRYGate(q, 1.0587047700657248, 2);
  sqcRZGate(q, 0.7338752250193622, 2);
  sqcRYGate(q, -1.2171128604878514, 3);
  sqcRZGate(q, -0.33511049332214254, 3);
  sqcRYGate(q, -2.5204257131136476, 4);
  sqcRZGate(q, -0.6946434554414669, 4);
  sqcRYGate(q, 2.141215672364552, 5);
  sqcRZGate(q, 0.1526528383458805, 5);
  sqcRYGate(q, 2.85776336386921, 6);
  sqcRZGate(q, -1.8492118273784546, 6);
  sqcRYGate(q, -1.3598514503134371, 7);
  sqcRZGate(q, 0.6781476020787013, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.7451413163130856, 0);
  sqcRZGate(q, 1.6332806682225225, 0);
  sqcRYGate(q, 1.8686340211017674, 1);
  sqcRZGate(q, 0.24639568727883654, 1);
  sqcRYGate(q, 2.1109645291133097, 2);
  sqcRZGate(q, -2.230299780356204, 2);
  sqcRYGate(q, 2.2672141586685957, 3);
  sqcRZGate(q, 3.02727809674274, 3);
  sqcRYGate(q, 2.5874429548531785, 4);
  sqcRZGate(q, 0.4681736754953132, 4);
  sqcRYGate(q, -1.1669632727591335, 5);
  sqcRZGate(q, 1.6794311632630636, 5);
  sqcRYGate(q, -0.7826979390319948, 6);
  sqcRZGate(q, -1.0504497371820918, 6);
  sqcRYGate(q, -2.176061035428062, 7);
  sqcRZGate(q, -0.6695146197940838, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.8684410143050474, 0);
  sqcRZGate(q, -1.8239219278362215, 0);
  sqcRYGate(q, 1.8843973660964588, 1);
  sqcRZGate(q, 2.6871058075231504, 1);
  sqcRYGate(q, -2.488306455757029, 2);
  sqcRZGate(q, 1.3439795519603588, 2);
  sqcRYGate(q, 0.5755234571803206, 3);
  sqcRZGate(q, 0.3612525078732195, 3);
  sqcRYGate(q, -1.0412922476599036, 4);
  sqcRZGate(q, -0.9611385609461173, 4);
  sqcRYGate(q, -1.016072132814088, 5);
  sqcRZGate(q, -0.2669327225830721, 5);
  sqcRYGate(q, -0.4976036457669429, 6);
  sqcRZGate(q, -3.069386829266478, 6);
  sqcRYGate(q, -1.6053090070512939, 7);
  sqcRZGate(q, -2.873808719382634, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.385324347371567, 0);
  sqcRZGate(q, -2.9886528514253743, 0);
  sqcRYGate(q, -0.9247281088029431, 1);
  sqcRZGate(q, 1.9566254305496917, 1);
  sqcRYGate(q, 1.8788697247170014, 2);
  sqcRZGate(q, 0.6230729855085251, 2);
  sqcRYGate(q, 2.2919650506880513, 3);
  sqcRZGate(q, 0.5128497968541891, 3);
  sqcRYGate(q, 2.10555637061787, 4);
  sqcRZGate(q, 2.14630312111614, 4);
  sqcRYGate(q, 1.959783253579995, 5);
  sqcRZGate(q, 0.7117195232541289, 5);
  sqcRYGate(q, -1.8035214085506424, 6);
  sqcRZGate(q, 0.1310896508497899, 6);
  sqcRYGate(q, -2.0447676220550455, 7);
  sqcRZGate(q, -2.627368799966837, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.3214007110423416, 0);
  sqcRZGate(q, -1.7418178764782208, 0);
  sqcRYGate(q, -0.2690851698941918, 1);
  sqcRZGate(q, 3.0328514730995018, 1);
  sqcRYGate(q, -1.4429274955682898, 2);
  sqcRZGate(q, -0.8120362499962468, 2);
  sqcRYGate(q, -0.27103645840382207, 3);
  sqcRZGate(q, -2.7309270901931204, 3);
  sqcRYGate(q, 2.774417169700047, 4);
  sqcRZGate(q, 0.7865964255020949, 4);
  sqcRYGate(q, 1.4601912465987166, 5);
  sqcRZGate(q, 2.901576712334236, 5);
  sqcRYGate(q, 0.9725827202658053, 6);
  sqcRZGate(q, -1.7904018407034865, 6);
  sqcRYGate(q, -1.2775497337591293, 7);
  sqcRZGate(q, 1.7536955171421598, 7);

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
