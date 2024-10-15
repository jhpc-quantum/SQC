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

  sqcRYGate(q, 1.5716489975993746, 0);
  sqcRZGate(q, -1.5937891568028657, 0);
  sqcRYGate(q, 1.5726493789013691, 1);
  sqcRZGate(q, 1.0410873441553354, 1);
  sqcRYGate(q, 2.236268025523959, 2);
  sqcRZGate(q, 1.5631047434296659, 2);
  sqcRYGate(q, 2.7147411261066803, 3);
  sqcRZGate(q, -1.5581087216689653, 3);
  sqcRYGate(q, -1.570230379276641, 4);
  sqcRZGate(q, -1.5756702313898632, 4);
  sqcRYGate(q, -1.5601921531204235, 5);
  sqcRZGate(q, 3.0747762390769804, 5);
  sqcRYGate(q, -3.1382904359000094, 6);
  sqcRZGate(q, 1.8656014791905253, 6);
  sqcRYGate(q, -3.076562714442264, 7);
  sqcRZGate(q, -1.3979232819918754, 7);
  sqcRYGate(q, -1.9334140514113471, 8);
  sqcRZGate(q, -0.6206609422761566, 8);
  sqcRYGate(q, 2.9270700884502454, 9);
  sqcRZGate(q, 0.7314305451644466, 9);
  sqcRYGate(q, -3.1218149540465046, 10);
  sqcRZGate(q, -1.9778834951054869, 10);
  sqcRYGate(q, -0.5400241493172907, 11);
  sqcRZGate(q, -1.9936086381452878, 11);
  sqcRYGate(q, -3.076364555252163, 12);
  sqcRZGate(q, 0.01792481809991831, 12);
  sqcRYGate(q, -3.101130031840334, 13);
  sqcRZGate(q, 2.7369010448784175, 13);
  sqcRYGate(q, -0.6474297800314881, 14);
  sqcRZGate(q, 2.2942208271267406, 14);
  sqcRYGate(q, -1.7814358212512507, 15);
  sqcRZGate(q, 2.2245604268961054, 15);
  sqcRYGate(q, 0.3891526759118573, 16);
  sqcRZGate(q, 1.1395290044433766, 16);
  sqcRYGate(q, -2.436556408392295, 17);
  sqcRZGate(q, 2.2720557091802576, 17);
  sqcRYGate(q, -2.052989109751929, 18);
  sqcRZGate(q, 2.0020315638918627, 18);
  sqcRYGate(q, 3.139621643786322, 19);
  sqcRZGate(q, 2.2390675616896782, 19);
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
  sqcRYGate(q, 2.915834017470039, 0);
  sqcRZGate(q, -2.0800002666283293, 0);
  sqcRYGate(q, -0.0042277923190325375, 1);
  sqcRZGate(q, 0.6356997763746483, 1);
  sqcRYGate(q, 1.5637272252685186, 2);
  sqcRZGate(q, 0.1549077809209968, 2);
  sqcRYGate(q, 1.5618729160273963, 3);
  sqcRZGate(q, -2.9638680470129266, 3);
  sqcRYGate(q, -0.657582221627713, 4);
  sqcRZGate(q, 1.4641509841292901, 4);
  sqcRYGate(q, -3.1399502552636713, 5);
  sqcRZGate(q, 2.277958328999742, 5);
  sqcRYGate(q, -3.139893505213707, 6);
  sqcRZGate(q, 2.5259374334306965, 6);
  sqcRYGate(q, -0.0503731377401388, 7);
  sqcRZGate(q, -1.4421762442242967, 7);
  sqcRYGate(q, 2.2172120637347073, 8);
  sqcRZGate(q, -0.05573595742947201, 8);
  sqcRYGate(q, 2.849276235330878, 9);
  sqcRZGate(q, 1.9327243190575993, 9);
  sqcRYGate(q, -0.07245077572751768, 10);
  sqcRZGate(q, -1.1977941655799127, 10);
  sqcRYGate(q, 1.6133447926695794, 11);
  sqcRZGate(q, 0.33821918770812504, 11);
  sqcRYGate(q, -2.9745500866351318, 12);
  sqcRZGate(q, 2.276895789902163, 12);
  sqcRYGate(q, -0.002168814732973652, 13);
  sqcRZGate(q, 1.6072583837740178, 13);
  sqcRYGate(q, 1.913245955493779, 14);
  sqcRZGate(q, -1.6247131007427527, 14);
  sqcRYGate(q, 0.7151572492577019, 15);
  sqcRZGate(q, -3.1382747816278935, 15);
  sqcRYGate(q, -1.141572143533356, 16);
  sqcRZGate(q, -2.1031926303071695, 16);
  sqcRYGate(q, 1.3240001669467425, 17);
  sqcRZGate(q, -1.9686358201522725, 17);
  sqcRYGate(q, -2.205591983575971, 18);
  sqcRZGate(q, -0.27834856903102523, 18);
  sqcRYGate(q, 3.1402605318623515, 19);
  sqcRZGate(q, 2.6754609394470954, 19);
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
  sqcRYGate(q, 3.1384631121586466, 0);
  sqcRZGate(q, 2.6303660128315927, 0);
  sqcRYGate(q, -1.3982105402821787, 1);
  sqcRZGate(q, -0.5449308697039901, 1);
  sqcRYGate(q, -2.9829999437925623, 2);
  sqcRZGate(q, 2.7829960210209164, 2);
  sqcRYGate(q, 0.22405734521241705, 3);
  sqcRZGate(q, -2.611872855879056, 3);
  sqcRYGate(q, 2.3073958383507382, 4);
  sqcRZGate(q, 0.6521409047019482, 4);
  sqcRYGate(q, 1.1284239959516231, 5);
  sqcRZGate(q, -0.6253556798171034, 5);
  sqcRYGate(q, 2.633766339111789, 6);
  sqcRZGate(q, -0.9850970568094614, 6);
  sqcRYGate(q, 0.14543897408875228, 7);
  sqcRZGate(q, -1.6843893676246173, 7);
  sqcRYGate(q, -0.3912290152526049, 8);
  sqcRZGate(q, 2.6440768564493156, 8);
  sqcRYGate(q, 3.0747974030060283, 9);
  sqcRZGate(q, 1.9900860502261546, 9);
  sqcRYGate(q, 3.0310277773300234, 10);
  sqcRZGate(q, -1.2316940708700983, 10);
  sqcRYGate(q, 1.7666669355817026, 11);
  sqcRZGate(q, 0.033637386630616106, 11);
  sqcRYGate(q, 3.0481110562336187, 12);
  sqcRZGate(q, 3.0116593529580897, 12);
  sqcRYGate(q, -3.133152771439854, 13);
  sqcRZGate(q, 1.9656564651918593, 13);
  sqcRYGate(q, 0.5252376632561117, 14);
  sqcRZGate(q, 1.9331231121027512, 14);
  sqcRYGate(q, -2.607525869023859, 15);
  sqcRZGate(q, 2.97620270705447, 15);
  sqcRYGate(q, 2.813200799323858, 16);
  sqcRZGate(q, -0.4915039034198516, 16);
  sqcRYGate(q, -1.3960598198437149, 17);
  sqcRZGate(q, 1.756502672075217, 17);
  sqcRYGate(q, -1.0716053698024581, 18);
  sqcRZGate(q, 0.8563339765451183, 18);
  sqcRYGate(q, 1.5691489128679157, 19);
  sqcRZGate(q, -1.5922361662641076, 19);
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
  sqcRYGate(q, -1.6121841552229599, 0);
  sqcRZGate(q, 2.7183294887751757, 0);
  sqcRYGate(q, 1.5603846638966896, 1);
  sqcRZGate(q, 1.844820596325194, 1);
  sqcRYGate(q, -0.006093710637218308, 2);
  sqcRZGate(q, 0.9550863249761817, 2);
  sqcRYGate(q, -0.1162779061107031, 3);
  sqcRZGate(q, 2.2203738647391336, 3);
  sqcRYGate(q, 0.006346039721707152, 4);
  sqcRZGate(q, -0.7832625801489322, 4);
  sqcRYGate(q, -1.6417323185612556, 5);
  sqcRZGate(q, 0.355177615818377, 5);
  sqcRYGate(q, -0.0027367326681053683, 6);
  sqcRZGate(q, -1.8617486731104824, 6);
  sqcRYGate(q, -0.4584713564205636, 7);
  sqcRZGate(q, 1.9996054071781801, 7);
  sqcRYGate(q, 1.5530363661534135, 8);
  sqcRZGate(q, -0.5840608304836188, 8);
  sqcRYGate(q, -0.007204688125205357, 9);
  sqcRZGate(q, 2.705666091355697, 9);
  sqcRYGate(q, -1.7122149757272793, 10);
  sqcRZGate(q, 2.9452681990308007, 10);
  sqcRYGate(q, -1.5691350088363525, 11);
  sqcRZGate(q, 2.0900540305196396, 11);
  sqcRYGate(q, -2.7922848520808037, 12);
  sqcRZGate(q, 2.440090298958367, 12);
  sqcRYGate(q, 3.141555996655941, 13);
  sqcRZGate(q, -1.427442538745097, 13);
  sqcRYGate(q, -2.6661463934056604, 14);
  sqcRZGate(q, -1.194835462453958, 14);
  sqcRYGate(q, 1.1133972432901427, 15);
  sqcRZGate(q, 2.8108767660175924, 15);
  sqcRYGate(q, -2.8615690891149264, 16);
  sqcRZGate(q, 2.402046191827033, 16);
  sqcRYGate(q, -1.576322102972834, 17);
  sqcRZGate(q, -3.1166394482540025, 17);
  sqcRYGate(q, 0.0002233968192328718, 18);
  sqcRZGate(q, 1.1115477326506014, 18);
  sqcRYGate(q, 2.237152471045202, 19);
  sqcRZGate(q, -1.5764936248700314, 19);
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
  sqcRYGate(q, 1.6436702475669511, 0);
  sqcRZGate(q, 0.4905164612064503, 0);
  sqcRYGate(q, 0.08365211031124085, 1);
  sqcRZGate(q, -0.2745434253176489, 1);
  sqcRYGate(q, 0.004254697479426638, 2);
  sqcRZGate(q, 2.589603455821539, 2);
  sqcRYGate(q, -0.05589852689874362, 3);
  sqcRZGate(q, 0.39199766075284, 3);
  sqcRYGate(q, -1.5158509326349172, 4);
  sqcRZGate(q, 1.4170847152601391, 4);
  sqcRYGate(q, -3.094750377254867, 5);
  sqcRZGate(q, -2.859232657871172, 5);
  sqcRYGate(q, -3.0990222002863037, 6);
  sqcRZGate(q, -0.8879697141093144, 6);
  sqcRYGate(q, 3.1404860591023955, 7);
  sqcRZGate(q, 1.921471596600003, 7);
  sqcRYGate(q, -0.3351969767381453, 8);
  sqcRZGate(q, 0.19429133719600336, 8);
  sqcRYGate(q, -0.7495500847639623, 9);
  sqcRZGate(q, 0.2679905382280659, 9);
  sqcRYGate(q, 0.0033377005139278992, 10);
  sqcRZGate(q, 1.424347349245604, 10);
  sqcRYGate(q, 0.06831301758583198, 11);
  sqcRZGate(q, -0.724827968214691, 11);
  sqcRYGate(q, -3.1398338666053482, 12);
  sqcRZGate(q, 3.1304978900218856, 12);
  sqcRYGate(q, 2.9113076838590906, 13);
  sqcRZGate(q, -0.18758349639276625, 13);
  sqcRYGate(q, -1.5118145874644378, 14);
  sqcRZGate(q, -2.9850209353638038, 14);
  sqcRYGate(q, 1.5681418779830205, 15);
  sqcRZGate(q, 0.0010915823058512688, 15);
  sqcRYGate(q, 1.5754347930929797, 16);
  sqcRZGate(q, -1.894455309642402, 16);
  sqcRYGate(q, -0.26680687993601904, 17);
  sqcRZGate(q, -1.5702536804084835, 17);
  sqcRYGate(q, -2.7717463119238466, 18);
  sqcRZGate(q, 1.9949439089570358, 18);
  sqcRYGate(q, 2.262813395704418, 19);
  sqcRZGate(q, -1.5448852881203534, 19);
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
  sqcRYGate(q, -0.03620578613169468, 0);
  sqcRZGate(q, 2.7192769481798775, 0);
  sqcRYGate(q, 1.0123574249252423, 1);
  sqcRZGate(q, 0.16043839853740938, 1);
  sqcRYGate(q, -1.5712111329308496, 2);
  sqcRZGate(q, 3.0816529863792215, 2);
  sqcRYGate(q, 1.6693183579400508, 3);
  sqcRZGate(q, 1.4801039184010456, 3);
  sqcRYGate(q, -0.016781348824455738, 4);
  sqcRZGate(q, -3.0076610294057793, 4);
  sqcRYGate(q, -2.2878722382861003, 5);
  sqcRZGate(q, 2.2207449614513246, 5);
  sqcRYGate(q, 0.2618689183434624, 6);
  sqcRZGate(q, 1.6263614349107505, 6);
  sqcRYGate(q, -1.1797218330705597, 7);
  sqcRZGate(q, -0.014424121076816255, 7);
  sqcRYGate(q, 1.5007890936618486, 8);
  sqcRZGate(q, 0.017205859521333425, 8);
  sqcRYGate(q, 3.1391863422207034, 9);
  sqcRZGate(q, -0.2871011988029522, 9);
  sqcRYGate(q, -2.473580864265973, 10);
  sqcRZGate(q, -0.6410257632601981, 10);
  sqcRYGate(q, 1.7292812650473761, 11);
  sqcRZGate(q, 1.0651821689511072, 11);
  sqcRYGate(q, 2.774545777597155, 12);
  sqcRZGate(q, -2.4330949901748857, 12);
  sqcRYGate(q, 0.02656694669471893, 13);
  sqcRZGate(q, -1.616890271074503, 13);
  sqcRYGate(q, 0.5301507141393422, 14);
  sqcRZGate(q, -3.0709172102423454, 14);
  sqcRYGate(q, 2.9595057883881775, 15);
  sqcRZGate(q, -1.5679053802527771, 15);
  sqcRYGate(q, -3.1408870916957006, 16);
  sqcRZGate(q, 1.2436546680110485, 16);
  sqcRYGate(q, 2.9695248280729176, 17);
  sqcRZGate(q, -1.5367561909788294, 17);
  sqcRYGate(q, 2.604463064520228, 18);
  sqcRZGate(q, -0.459822708771703, 18);
  sqcRYGate(q, 1.6211631149408874, 19);
  sqcRZGate(q, 0.2541815205595938, 19);
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
  sqcRYGate(q, -1.595668914887417, 0);
  sqcRZGate(q, 2.80273701206075, 0);
  sqcRYGate(q, -0.0007564070337899222, 1);
  sqcRZGate(q, 3.0312332161545936, 1);
  sqcRYGate(q, -1.5748602889257706, 2);
  sqcRZGate(q, -1.7246154451238498, 2);
  sqcRYGate(q, 0.7040665527926406, 3);
  sqcRZGate(q, 2.880366995665129, 3);
  sqcRYGate(q, 1.498483397258646, 4);
  sqcRZGate(q, -0.6717071542587671, 4);
  sqcRYGate(q, -3.124409276845947, 5);
  sqcRZGate(q, -2.6989224869183106, 5);
  sqcRYGate(q, -2.684666078954701, 6);
  sqcRZGate(q, 2.178498975046712, 6);
  sqcRYGate(q, -1.5964489995611846, 7);
  sqcRZGate(q, 3.141482528305395, 7);
  sqcRYGate(q, -2.8355330403067835, 8);
  sqcRZGate(q, 3.1223115825860566, 8);
  sqcRYGate(q, -0.020129898569616455, 9);
  sqcRZGate(q, 0.24821989023930946, 9);
  sqcRYGate(q, 0.005126853414961468, 10);
  sqcRZGate(q, 0.30719709519257027, 10);
  sqcRYGate(q, -0.037100836326139586, 11);
  sqcRZGate(q, -2.644751200220989, 11);
  sqcRYGate(q, 0.00026574750878527453, 12);
  sqcRZGate(q, -2.93795199768385, 12);
  sqcRYGate(q, 0.30826178001653104, 13);
  sqcRZGate(q, -0.12530143146033526, 13);
  sqcRYGate(q, -0.6883628051919858, 14);
  sqcRZGate(q, -0.16006605280820008, 14);
  sqcRYGate(q, -0.7082016244821786, 15);
  sqcRZGate(q, 1.563080130439846, 15);
  sqcRYGate(q, 1.5790145279720083, 16);
  sqcRZGate(q, 2.971976275146426, 16);
  sqcRYGate(q, 1.641437949466936, 17);
  sqcRZGate(q, -0.013798580593557652, 17);
  sqcRYGate(q, -0.16918607518403572, 18);
  sqcRZGate(q, 0.11134213296579709, 18);
  sqcRYGate(q, 3.1414719774263893, 19);
  sqcRZGate(q, 1.8372832477764316, 19);
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
  sqcRYGate(q, -2.38564611039673, 0);
  sqcRZGate(q, 2.6811759702333813, 0);
  sqcRYGate(q, 1.5314595082369262, 1);
  sqcRZGate(q, 1.7413250281439001, 1);
  sqcRYGate(q, 3.138190126972487, 2);
  sqcRZGate(q, 2.9430196836390663, 2);
  sqcRYGate(q, 0.00128453789397605, 3);
  sqcRZGate(q, -1.3173160234503216, 3);
  sqcRYGate(q, 3.1411585839115808, 4);
  sqcRZGate(q, -1.0382768120505248, 4);
  sqcRYGate(q, -3.115613035271281, 5);
  sqcRZGate(q, -0.2792431288988345, 5);
  sqcRYGate(q, 3.1215686136769873, 6);
  sqcRZGate(q, -1.2151696178346567, 6);
  sqcRYGate(q, 2.2584353288957297, 7);
  sqcRZGate(q, 1.6922817925175302, 7);
  sqcRYGate(q, -1.5567727988902067, 8);
  sqcRZGate(q, -0.5993717003138119, 8);
  sqcRYGate(q, 2.623488041920279, 9);
  sqcRZGate(q, 2.4887690701091114, 9);
  sqcRYGate(q, -1.5913876593045702, 10);
  sqcRZGate(q, -1.5207327162473776, 10);
  sqcRYGate(q, 1.531416366887414, 11);
  sqcRZGate(q, -2.9437692983942894, 11);
  sqcRYGate(q, -2.9481584791308197, 12);
  sqcRZGate(q, -2.135015522330975, 12);
  sqcRYGate(q, 1.5208910233655537, 13);
  sqcRZGate(q, 1.4748457255984349, 13);
  sqcRYGate(q, -1.571042144757687, 14);
  sqcRZGate(q, 1.5673618032463499, 14);
  sqcRYGate(q, -3.1272774405923194, 15);
  sqcRZGate(q, -3.1372771384507034, 15);
  sqcRYGate(q, -3.102774051813126, 16);
  sqcRZGate(q, -0.10274539095710929, 16);
  sqcRYGate(q, 2.5936467083636994, 17);
  sqcRZGate(q, 1.5784219249983464, 17);
  sqcRYGate(q, -0.018448491729639242, 18);
  sqcRZGate(q, -0.1169389301102992, 18);
  sqcRYGate(q, 1.559105142899714, 19);
  sqcRZGate(q, 0.6130418107775005, 19);
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
  sqcRYGate(q, -0.6395076918037148, 0);
  sqcRZGate(q, 1.8883756073568936, 0);
  sqcRYGate(q, -3.1351627558916846, 1);
  sqcRZGate(q, 0.17064956101573575, 1);
  sqcRYGate(q, -0.09548749247857646, 2);
  sqcRZGate(q, 2.7514385534534425, 2);
  sqcRYGate(q, -2.694580208226713, 3);
  sqcRZGate(q, -1.5602982514355501, 3);
  sqcRYGate(q, -0.06946482616956905, 4);
  sqcRZGate(q, 0.26224302807491523, 4);
  sqcRYGate(q, 1.5923221486500116, 5);
  sqcRZGate(q, -0.28761523946024786, 5);
  sqcRYGate(q, -3.105531308962279, 6);
  sqcRZGate(q, -1.2769411039057945, 6);
  sqcRYGate(q, -0.2537736011770587, 7);
  sqcRZGate(q, -1.5311418444306515, 7);
  sqcRYGate(q, -2.9077151543158397, 8);
  sqcRZGate(q, 1.752254111406618, 8);
  sqcRYGate(q, -3.1373927283081255, 9);
  sqcRZGate(q, -0.9566341040212788, 9);
  sqcRYGate(q, -1.5742169252466998, 10);
  sqcRZGate(q, -3.12950633607618, 10);
  sqcRYGate(q, 3.1167768529355726, 11);
  sqcRZGate(q, -1.3025406788914176, 11);
  sqcRYGate(q, -0.11093570059455261, 12);
  sqcRZGate(q, 1.5620307953399144, 12);
  sqcRYGate(q, -0.001799002924413706, 13);
  sqcRZGate(q, 1.5207227794269287, 13);
  sqcRYGate(q, 1.577801850614865, 14);
  sqcRZGate(q, 0.0686081300174921, 14);
  sqcRYGate(q, 3.0172616070793294, 15);
  sqcRZGate(q, 1.6470644121528704, 15);
  sqcRYGate(q, 2.4444714720505303, 16);
  sqcRZGate(q, -0.15257783668983027, 16);
  sqcRYGate(q, -0.7967650521654903, 17);
  sqcRZGate(q, -1.4748979956887052, 17);
  sqcRYGate(q, 1.5591499510330424, 18);
  sqcRZGate(q, -3.1392230422619973, 18);
  sqcRYGate(q, -2.8683380140573522, 19);
  sqcRZGate(q, 3.05661353376184, 19);
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
  sqcRYGate(q, -1.9008673065341413, 0);
  sqcRZGate(q, 2.2431325362695924, 0);
  sqcRYGate(q, -1.5304776557294646, 1);
  sqcRZGate(q, 2.787534137255888, 1);
  sqcRYGate(q, 0.0012049941440697154, 2);
  sqcRZGate(q, 2.0022380391677146, 2);
  sqcRYGate(q, -0.017295410006551215, 3);
  sqcRZGate(q, -1.332625856198842, 3);
  sqcRYGate(q, -3.1110841882456683, 4);
  sqcRZGate(q, 0.2861862402203883, 4);
  sqcRYGate(q, 3.0721964889566404, 5);
  sqcRZGate(q, -2.5309014417258924, 5);
  sqcRYGate(q, 3.1238183653287757, 6);
  sqcRZGate(q, -2.655452462733805, 6);
  sqcRYGate(q, -0.011123048883386666, 7);
  sqcRZGate(q, -0.14588740879226778, 7);
  sqcRYGate(q, 0.4550520957420277, 8);
  sqcRZGate(q, 1.844391786917544, 8);
  sqcRYGate(q, -0.5208576025939724, 9);
  sqcRZGate(q, 0.5313052592135257, 9);
  sqcRYGate(q, -1.5626174672835402, 10);
  sqcRZGate(q, -3.132296790721669, 10);
  sqcRYGate(q, 0.06470608899349539, 11);
  sqcRZGate(q, -0.39280706333068893, 11);
  sqcRYGate(q, -2.8447558759506157, 12);
  sqcRZGate(q, -1.7745416289042355, 12);
  sqcRYGate(q, -1.6212366745498121, 13);
  sqcRZGate(q, 2.1939003290997805, 13);
  sqcRYGate(q, -0.030058631997999383, 14);
  sqcRZGate(q, -0.16403653276137675, 14);
  sqcRYGate(q, -3.093449404213065, 15);
  sqcRZGate(q, 0.06234638471612331, 15);
  sqcRYGate(q, -3.1081662812716035, 16);
  sqcRZGate(q, -0.07438271393168085, 16);
  sqcRYGate(q, 3.056712403838876, 17);
  sqcRZGate(q, 0.1295178081240778, 17);
  sqcRYGate(q, -1.5845009765639406, 18);
  sqcRZGate(q, 0.021981219570215094, 18);
  sqcRYGate(q, -2.4350414325260155, 19);
  sqcRZGate(q, -3.0382620338978263, 19);
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
  sqcRYGate(q, -0.0005686618930829113, 0);
  sqcRZGate(q, -1.4650501446883721, 0);
  sqcRYGate(q, 3.0778387219894627, 1);
  sqcRZGate(q, 1.3248894571828862, 1);
  sqcRYGate(q, 1.5755135318499622, 2);
  sqcRZGate(q, -0.02307690977451405, 2);
  sqcRYGate(q, -0.051488616955099334, 3);
  sqcRZGate(q, 1.3506314153161654, 3);
  sqcRYGate(q, -0.005695056605971749, 4);
  sqcRZGate(q, -0.39226751123381476, 4);
  sqcRYGate(q, 3.1330486662079027, 5);
  sqcRZGate(q, -2.1918106724975255, 5);
  sqcRYGate(q, 3.135510960222742, 6);
  sqcRZGate(q, 3.137922512286121, 6);
  sqcRYGate(q, -1.5634245616678706, 7);
  sqcRZGate(q, -2.803892983138528, 7);
  sqcRYGate(q, -0.003393783708378173, 8);
  sqcRZGate(q, -2.614760875430075, 8);
  sqcRYGate(q, 3.1309000012818267, 9);
  sqcRZGate(q, 2.131151683781262, 9);
  sqcRYGate(q, -1.5746849329660044, 10);
  sqcRZGate(q, -0.7248809581549098, 10);
  sqcRYGate(q, 3.1336478223163957, 11);
  sqcRZGate(q, 1.99848096647972, 11);
  sqcRYGate(q, 0.007236940923402102, 12);
  sqcRZGate(q, 1.0632681822603314, 12);
  sqcRYGate(q, -0.012479038449905028, 13);
  sqcRZGate(q, 1.3522264771963055, 13);
  sqcRYGate(q, 0.0007098229876438822, 14);
  sqcRZGate(q, -2.4654888888279847, 14);
  sqcRYGate(q, -1.5714430602363514, 15);
  sqcRZGate(q, 1.9644542659678415, 15);
  sqcRYGate(q, 0.014732782090472796, 16);
  sqcRZGate(q, 1.0745357257288424, 16);
  sqcRYGate(q, 1.565686477293479, 17);
  sqcRZGate(q, 2.1956772526545008, 17);
  sqcRYGate(q, 3.1279717385945833, 18);
  sqcRZGate(q, -2.8418804511060927, 18);
  sqcRYGate(q, 3.1323846833991325, 19);
  sqcRZGate(q, 3.1404915059671326, 19);

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
