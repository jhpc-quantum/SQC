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

  sqcRYGate(q, 0.1394329691237104, 0);
  sqcRYGate(q, 1.6567187998307875, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.980661778911099, 0);
  sqcRYGate(q, -0.6888408919807497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6675995229109521, 2);
  sqcRYGate(q, -1.4303846487187772, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3069254456404442, 2);
  sqcRYGate(q, -0.6707644499215041, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.426158621105878, 4);
  sqcRYGate(q, 2.9941097888802295, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3809984121129677, 4);
  sqcRYGate(q, 1.1122853958866061, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7347678687787274, 6);
  sqcRYGate(q, 1.1041632947052262, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3799005468685683, 6);
  sqcRYGate(q, 2.546603734107565, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.014347696759391, 8);
  sqcRYGate(q, 1.61214480992793, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.8799710046323654, 8);
  sqcRYGate(q, 2.9523071478496385, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.341491644172433, 10);
  sqcRYGate(q, -0.43035533924990993, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.890163493917459, 10);
  sqcRYGate(q, -2.7890259121789764, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0134856642526087, 0);
  sqcRYGate(q, -1.7230962958714473, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.1755839318748933, 0);
  sqcRYGate(q, -0.46201099901557896, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4554468932859652, 2);
  sqcRYGate(q, 0.0032224950495258753, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.0005733270110468425, 2);
  sqcRYGate(q, -0.0018147684410258472, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3412700323740356, 4);
  sqcRYGate(q, -2.770074672879269, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.08956807072479744, 4);
  sqcRYGate(q, 2.569135537377677, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.565227867811343, 6);
  sqcRYGate(q, -0.5869066754118952, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.8615006423503093, 6);
  sqcRYGate(q, -0.005798993927501606, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.0106714054377453, 8);
  sqcRYGate(q, 1.3310335536077105, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.7293474198185796, 8);
  sqcRYGate(q, -1.4844833060136429, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.4095850052616505, 1);
  sqcRYGate(q, 0.6634012901454847, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8792001908114315, 1);
  sqcRYGate(q, -1.8577354537577242, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.12111261004728954, 3);
  sqcRYGate(q, 2.5154487906397374, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5717578422804044, 3);
  sqcRYGate(q, -0.0014127473407699043, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5693303672915568, 5);
  sqcRYGate(q, -0.24190601088835353, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.003021400953151663, 5);
  sqcRYGate(q, -1.5563193838955438, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.9550233345241415, 7);
  sqcRYGate(q, -2.367707700431031, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.9171737299901446, 7);
  sqcRYGate(q, -0.32300725371899797, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.6789055574091805, 9);
  sqcRYGate(q, -0.06595114509582078, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.5978620172832363, 9);
  sqcRYGate(q, 2.3863223683954846, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.525468496092282, 0);
  sqcRYGate(q, -0.06519057414516372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.04399866228314143, 0);
  sqcRYGate(q, -3.061635612348508, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5603983904096366, 2);
  sqcRYGate(q, -2.8523383322410485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1410343995843113, 2);
  sqcRYGate(q, 3.1341084454334736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2668874378424038, 4);
  sqcRYGate(q, 3.0137898516193764, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1373480042531745, 4);
  sqcRYGate(q, -1.571649553348899, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.20183676712365542, 6);
  sqcRYGate(q, 1.451229652973021, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.14828907586981277, 6);
  sqcRYGate(q, -1.5362024763266158, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8121358825566043, 8);
  sqcRYGate(q, 2.385718410914358, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5054672559088482, 8);
  sqcRYGate(q, -1.6983495372161614, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.159477355298483, 10);
  sqcRYGate(q, -1.5918442498368872, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3606346761685053, 10);
  sqcRYGate(q, -0.45377775021945777, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.26449042133371214, 0);
  sqcRYGate(q, 2.160419594752988, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5510815227629542, 0);
  sqcRYGate(q, -0.21851873555891022, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.565333847993589, 2);
  sqcRYGate(q, -2.257879058800578, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.785081821166102e-05, 2);
  sqcRYGate(q, 3.141282992567315, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.1910927750760254, 4);
  sqcRYGate(q, -1.5408251128124002, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5701899166043063, 4);
  sqcRYGate(q, 0.04512194470034725, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.9431008559340892, 6);
  sqcRYGate(q, -0.1859587110265277, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.5728252609178905, 6);
  sqcRYGate(q, -0.009407547978107722, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.5747759923580311, 8);
  sqcRYGate(q, -1.1575824373104286, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.5700034204704207, 8);
  sqcRYGate(q, 3.0577674894188456, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.2727987344368557, 1);
  sqcRYGate(q, 1.9848822557226307, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5710737065565814, 1);
  sqcRYGate(q, 1.8597254104815244, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3042558594327076, 3);
  sqcRYGate(q, 3.014786181436855, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7511663186216158, 3);
  sqcRYGate(q, -0.49021735449968157, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.324554734040329, 5);
  sqcRYGate(q, 1.7977653664429616, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 9.261128170549438e-05, 5);
  sqcRYGate(q, -3.137842311178627, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.1131727978947863, 7);
  sqcRYGate(q, -0.7738427204050587, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.29924624840916836, 7);
  sqcRYGate(q, 3.1308688832694327, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.038626916248792, 9);
  sqcRYGate(q, -0.5252582788900357, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.415943654462478, 9);
  sqcRYGate(q, 0.2305825212889837, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.2900719450353995, 0);
  sqcRYGate(q, 3.0292495755649957, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1393493987410706, 0);
  sqcRYGate(q, 0.24209335700305346, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4433863381521848, 2);
  sqcRYGate(q, 0.36842605246692633, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5705584818614509, 2);
  sqcRYGate(q, 1.570839217038567, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0747098706787166, 4);
  sqcRYGate(q, 0.7538139807782693, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5575015152278215, 4);
  sqcRYGate(q, 1.5701339606463334, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.766815739655495, 6);
  sqcRYGate(q, -2.1454415409844994, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1398844524955396, 6);
  sqcRYGate(q, 1.5702477235256773, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.568158959220355, 8);
  sqcRYGate(q, -1.9655066097668648, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5716254678831982, 8);
  sqcRYGate(q, -2.4016077799026405, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.00012798382791334717, 10);
  sqcRYGate(q, -0.21657400143127692, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1411912811101668, 10);
  sqcRYGate(q, 1.5708653823697525, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.12856417745661, 0);
  sqcRYGate(q, -1.9527406514421803, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5713437587331232, 0);
  sqcRYGate(q, -2.8234287237162734, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.571216129204726, 2);
  sqcRYGate(q, 0.00016022695972869768, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5711557373211782, 2);
  sqcRYGate(q, 3.0540525678745767, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5656633574162493, 4);
  sqcRYGate(q, 3.0573336178914525, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5709594704382637, 4);
  sqcRYGate(q, 0.029576340649045716, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5706446089346775, 6);
  sqcRYGate(q, 0.0003299551595928831, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.570765592638488, 6);
  sqcRYGate(q, -2.7189742659300666, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.8334142207887403, 8);
  sqcRYGate(q, 2.5585712127548983, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.5708434170489403, 8);
  sqcRYGate(q, -3.140289208497754, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.015817472570664, 1);
  sqcRYGate(q, 0.5588043860613618, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1414843064297333, 1);
  sqcRYGate(q, 1.5708406938585502, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0683693071111398, 3);
  sqcRYGate(q, 1.5688960361222468, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5708155268057589, 3);
  sqcRYGate(q, -3.135504189945736, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5720020516682642, 5);
  sqcRYGate(q, 1.6736812932662595, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5707805877403456, 5);
  sqcRYGate(q, 0.3188058647484677, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.570807404449889, 7);
  sqcRYGate(q, 3.140701724383711, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.5708361586328328, 7);
  sqcRYGate(q, 0.7333453772142527, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.5708186511853508, 9);
  sqcRYGate(q, 0.230720346774552, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.5707882958004036, 9);
  sqcRYGate(q, 1.3900369685091964, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.5712457858992055, 0);
  sqcRYGate(q, 0.00031328019972161596, 1);
  sqcRYGate(q, 1.5710137848852392, 2);
  sqcRYGate(q, 1.5099361661192807, 3);
  sqcRYGate(q, 1.5758970920095337, 4);
  sqcRYGate(q, 1.572051288456275, 5);
  sqcRYGate(q, 1.5708654780896962, 6);
  sqcRYGate(q, -1.570758446132909, 7);
  sqcRYGate(q, 1.3081103078871354, 8);
  sqcRYGate(q, -1.5708058814082566, 9);
  sqcRYGate(q, -1.570788809839067, 10);
  sqcRYGate(q, 1.5708500452516727, 11);

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
