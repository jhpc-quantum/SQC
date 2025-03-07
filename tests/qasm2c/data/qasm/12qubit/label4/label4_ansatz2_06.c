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

  sqcRYGate(q, 4.552918971281466e-07, 0);
  sqcRZGate(q, -2.4751431352096334, 0);
  sqcRYGate(q, -1.570796210554171, 1);
  sqcRZGate(q, -3.1415921527116435, 1);
  sqcRYGate(q, -1.5708001487007661, 2);
  sqcRZGate(q, 2.451917933046713, 2);
  sqcRYGate(q, 3.141592352338461, 3);
  sqcRZGate(q, 2.054631705353148, 3);
  sqcRYGate(q, 1.570796098824296, 4);
  sqcRZGate(q, -3.0184765199296055e-07, 4);
  sqcRYGate(q, -1.5707962818140153, 5);
  sqcRZGate(q, -1.4622637213999958, 5);
  sqcRYGate(q, 3.1415926076292284, 6);
  sqcRZGate(q, -0.3853871676828523, 6);
  sqcRYGate(q, 1.5707963119205184, 7);
  sqcRZGate(q, -1.5707972831042574, 7);
  sqcRYGate(q, -3.1415926204119544, 8);
  sqcRZGate(q, -1.812245750367276, 8);
  sqcRYGate(q, 1.5707966297658307, 9);
  sqcRZGate(q, 3.14159262837091, 9);
  sqcRYGate(q, -1.570710985926178, 10);
  sqcRZGate(q, 1.6312256215152514, 10);
  sqcRYGate(q, 1.4958818312386466, 11);
  sqcRZGate(q, -6.488497983132222e-07, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.1415926192969033, 0);
  sqcRZGate(q, -2.183476657593176, 0);
  sqcRYGate(q, 0.4404302413268662, 1);
  sqcRZGate(q, -3.1415895534901708, 1);
  sqcRYGate(q, -3.1415915406024904, 2);
  sqcRZGate(q, -0.7989145235976417, 2);
  sqcRYGate(q, 3.1415924517070626, 3);
  sqcRZGate(q, 0.6834317260454119, 3);
  sqcRYGate(q, 2.076004623933417, 4);
  sqcRZGate(q, 1.7236196065918425, 4);
  sqcRYGate(q, 1.3681395572007204e-08, 5);
  sqcRZGate(q, -0.10853315899390735, 5);
  sqcRYGate(q, 1.5707955025213165, 6);
  sqcRZGate(q, 3.1415925878529136, 6);
  sqcRYGate(q, 1.5707962559203397, 7);
  sqcRZGate(q, 1.5734782704629744, 7);
  sqcRYGate(q, 1.570796273084401, 8);
  sqcRZGate(q, 1.570796424804529, 8);
  sqcRYGate(q, 2.236094159642012, 9);
  sqcRZGate(q, -3.141592326995838, 9);
  sqcRYGate(q, -4.8799646990005385e-08, 10);
  sqcRZGate(q, 1.5103669668247965, 10);
  sqcRYGate(q, 1.4854159512628557, 11);
  sqcRZGate(q, 5.409533256894861e-07, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.5707993801133815, 0);
  sqcRZGate(q, -3.20527622221789e-08, 0);
  sqcRYGate(q, -1.570787613715865, 1);
  sqcRZGate(q, -1.7483102585187245, 1);
  sqcRYGate(q, 1.4664792434709895, 2);
  sqcRZGate(q, -0.7603292943709333, 2);
  sqcRYGate(q, -3.141592083522183, 3);
  sqcRZGate(q, 0.42717521024916305, 3);
  sqcRYGate(q, -1.959220814917728e-06, 4);
  sqcRZGate(q, -1.723587454745275, 4);
  sqcRYGate(q, 1.1373165107096366, 5);
  sqcRZGate(q, 2.485202885293172, 5);
  sqcRYGate(q, 1.5214004241360128, 6);
  sqcRZGate(q, -1.5707962588204123, 6);
  sqcRYGate(q, 3.7335663360948956e-07, 7);
  sqcRZGate(q, -1.0299461306480406, 7);
  sqcRYGate(q, 1.5707962653117529, 8);
  sqcRZGate(q, 3.092196618057997, 8);
  sqcRYGate(q, -1.5707962841395224, 9);
  sqcRZGate(q, -1.684978495594802, 9);
  sqcRYGate(q, 1.5707960639366165, 10);
  sqcRZGate(q, -1.174929707763602, 10);
  sqcRYGate(q, 1.570796400829478, 11);
  sqcRZGate(q, -1.5707918705641664, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -1.570796350609095, 0);
  sqcRZGate(q, 1.948075874471618, 0);
  sqcRYGate(q, -1.5707964887379213, 1);
  sqcRZGate(q, 1.5707964125269112, 1);
  sqcRYGate(q, 1.570796415119056, 2);
  sqcRZGate(q, 1.5707963144853156, 2);
  sqcRYGate(q, 5.4281781196221676e-08, 3);
  sqcRZGate(q, -1.7048998386380765, 3);
  sqcRYGate(q, 1.5707961594709567, 4);
  sqcRZGate(q, -1.570796329312247, 4);
  sqcRYGate(q, 3.1415914418953537, 5);
  sqcRZGate(q, 2.4851986517674565, 5);
  sqcRYGate(q, -1.57079651714389, 6);
  sqcRZGate(q, -1.3029005859241554, 6);
  sqcRYGate(q, 3.1415926239403986, 7);
  sqcRZGate(q, 0.06950046368583251, 7);
  sqcRYGate(q, -1.5707959220267602, 8);
  sqcRZGate(q, 2.9556482496623384, 8);
  sqcRYGate(q, -1.5707964588922885, 9);
  sqcRZGate(q, 3.1415923925540428, 9);
  sqcRYGate(q, 1.5707964602758884, 10);
  sqcRZGate(q, -3.1415923468528923, 10);
  sqcRYGate(q, 1.5707962747648576, 11);
  sqcRZGate(q, -2.645662659680548, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.8917922484671413e-07, 0);
  sqcRZGate(q, -2.4684346652968956, 0);
  sqcRYGate(q, -1.570796261294077, 1);
  sqcRZGate(q, 1.2826255957172992, 1);
  sqcRYGate(q, -1.5707963930012336, 2);
  sqcRZGate(q, -1.1702843822907356, 2);
  sqcRYGate(q, 2.620568097077902e-07, 3);
  sqcRZGate(q, -0.9852151741176435, 3);
  sqcRYGate(q, -1.8598420211750955, 4);
  sqcRZGate(q, 2.7734989779808332, 4);
  sqcRYGate(q, 0.28904259704171675, 5);
  sqcRZGate(q, 3.5791471741930536e-06, 5);
  sqcRYGate(q, -3.141592504666054, 6);
  sqcRZGate(q, 1.8386922562850065, 6);
  sqcRYGate(q, -1.693652877585036e-08, 7);
  sqcRZGate(q, 1.991534688754517, 7);
  sqcRYGate(q, -3.1415925881399276, 8);
  sqcRZGate(q, 2.2550245852985986, 8);
  sqcRYGate(q, -2.5875773546001044, 9);
  sqcRZGate(q, 0.9449305971051737, 9);
  sqcRYGate(q, 1.3840508095472936, 10);
  sqcRZGate(q, 1.6219209270662152, 10);
  sqcRYGate(q, -3.1415926076433864, 11);
  sqcRZGate(q, -1.0748661033394156, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.5707965617057034, 0);
  sqcRZGate(q, -0.8852247897851947, 0);
  sqcRYGate(q, 1.690766637764553, 1);
  sqcRZGate(q, 0.7825913465770946, 1);
  sqcRYGate(q, 1.5708016243323553, 2);
  sqcRZGate(q, -2.579770820300536, 2);
  sqcRYGate(q, -0.0029313987853720747, 3);
  sqcRZGate(q, -3.0470900254500286, 3);
  sqcRYGate(q, -2.005129756499826, 4);
  sqcRZGate(q, -0.7418605863082517, 4);
  sqcRYGate(q, 1.5707965384475173, 5);
  sqcRZGate(q, 2.2305550559176344, 5);
  sqcRYGate(q, 1.5707963512696077, 6);
  sqcRZGate(q, -1.7266275356732317, 6);
  sqcRYGate(q, 3.092347519758575, 7);
  sqcRZGate(q, -2.3377072137919703, 7);
  sqcRYGate(q, 3.355992701514765e-07, 8);
  sqcRZGate(q, -0.8701714690858449, 8);
  sqcRYGate(q, -2.5952065119128065e-07, 9);
  sqcRZGate(q, 0.8365908575409398, 9);
  sqcRYGate(q, -3.141586050303685, 10);
  sqcRZGate(q, 0.05112280901210372, 10);
  sqcRYGate(q, 1.57080262497767, 11);
  sqcRZGate(q, -1.5707964787821889, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -4.599925041592567e-08, 0);
  sqcRZGate(q, 1.5062189250161093, 0);
  sqcRYGate(q, -2.2349401489775344e-08, 1);
  sqcRZGate(q, -0.6531881408035922, 1);
  sqcRYGate(q, 3.073740284520454e-08, 2);
  sqcRZGate(q, 0.42688036021320475, 2);
  sqcRYGate(q, 1.3472774710356092e-07, 3);
  sqcRZGate(q, -0.007953904732739936, 3);
  sqcRYGate(q, -1.5707963735862842, 4);
  sqcRZGate(q, 2.781443626023483, 4);
  sqcRYGate(q, 1.570796133399731, 5);
  sqcRZGate(q, 1.1771977069760489, 5);
  sqcRYGate(q, 1.355763910027008e-07, 6);
  sqcRZGate(q, 1.2660742957813493, 6);
  sqcRYGate(q, -3.1415925263882873, 7);
  sqcRZGate(q, -0.2729842261155226, 7);
  sqcRYGate(q, 1.5707954572488543, 8);
  sqcRZGate(q, -1.1811414219860312, 8);
  sqcRYGate(q, 2.548468046825468, 9);
  sqcRZGate(q, -2.8891346039789094, 9);
  sqcRYGate(q, 1.570796365871572, 10);
  sqcRZGate(q, 1.430725067459647, 10);
  sqcRYGate(q, -1.5707906142229318, 11);
  sqcRZGate(q, 0.5157006756627358, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.1415903787718165, 0);
  sqcRZGate(q, -2.520589746346015, 0);
  sqcRYGate(q, -3.14159263330195, 1);
  sqcRZGate(q, 1.9857726862117744, 1);
  sqcRYGate(q, 3.1415916322317954, 2);
  sqcRZGate(q, 0.9886928888729907, 2);
  sqcRYGate(q, -2.3371056201426654e-08, 3);
  sqcRZGate(q, -1.4203850865804037, 3);
  sqcRYGate(q, 9.680643842102654e-09, 4);
  sqcRZGate(q, -2.781443679831299, 4);
  sqcRYGate(q, 1.8115756361680724e-07, 5);
  sqcRZGate(q, -1.175434742407169, 5);
  sqcRYGate(q, 1.5671955862141869, 6);
  sqcRZGate(q, 0.004360472623782029, 6);
  sqcRYGate(q, -1.1133224031567579e-07, 7);
  sqcRZGate(q, -0.6122437853292801, 7);
  sqcRYGate(q, -3.1415924841584904, 8);
  sqcRZGate(q, 0.3896550752944007, 8);
  sqcRYGate(q, -1.5707968886906332, 9);
  sqcRZGate(q, 1.3485248088785374e-08, 9);
  sqcRYGate(q, -1.923328551797436, 10);
  sqcRZGate(q, 2.1573176844924546e-07, 10);
  sqcRYGate(q, 1.5124418264384152e-07, 11);
  sqcRZGate(q, -2.086497153298623, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -2.9892449236391054, 0);
  sqcRZGate(q, -3.1415839784433235, 0);
  sqcRYGate(q, -3.1415509712946244, 1);
  sqcRZGate(q, -2.7814849732517555, 1);
  sqcRYGate(q, 0.152357316258815, 2);
  sqcRZGate(q, -3.141590808485608, 2);
  sqcRYGate(q, -3.1414760672368813, 3);
  sqcRZGate(q, -1.3359386103827964, 3);
  sqcRYGate(q, -1.5707960249846318, 4);
  sqcRZGate(q, 1.3015933688122097, 4);
  sqcRYGate(q, -1.5707962058037355, 5);
  sqcRZGate(q, -1.5707969845406249, 5);
  sqcRYGate(q, -1.5707965736783442, 6);
  sqcRZGate(q, 1.570797066015399, 6);
  sqcRYGate(q, -1.5707961578915013, 7);
  sqcRZGate(q, -1.570794858545427, 7);
  sqcRYGate(q, -1.5707962571363654, 8);
  sqcRZGate(q, -2.0267268863399077, 8);
  sqcRYGate(q, 1.6493157261899791, 9);
  sqcRZGate(q, 3.1415895085963097, 9);
  sqcRYGate(q, 1.5253863817089268, 10);
  sqcRZGate(q, -3.526276191534761e-07, 10);
  sqcRYGate(q, -1.5707964461756887, 11);
  sqcRZGate(q, -2.1802018989901932, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.5707966988926736, 0);
  sqcRZGate(q, 2.7046521894805946, 0);
  sqcRYGate(q, 1.4540177337441067, 1);
  sqcRZGate(q, 2.3738654187490855, 1);
  sqcRYGate(q, 1.570796157193105, 2);
  sqcRZGate(q, -1.8893398984767045, 2);
  sqcRYGate(q, 1.5708120906337837, 3);
  sqcRZGate(q, -2.318970013718268, 3);
  sqcRYGate(q, -3.1415925179865596, 4);
  sqcRZGate(q, 3.0355872738105907, 4);
  sqcRYGate(q, 1.701892258334845, 5);
  sqcRZGate(q, -2.318968718902675, 5);
  sqcRYGate(q, 1.570796144085584, 6);
  sqcRZGate(q, 1.7339931379902178, 6);
  sqcRYGate(q, -1.5707963591419922, 7);
  sqcRZGate(q, 0.8226235027390826, 7);
  sqcRYGate(q, -1.1407519527307581e-07, 8);
  sqcRZGate(q, -0.9516690633384367, 8);
  sqcRYGate(q, 3.0737636910387174, 9);
  sqcRZGate(q, -2.318972010211317, 9);
  sqcRYGate(q, -1.570796406973953, 10);
  sqcRZGate(q, -1.4075996163553848, 10);
  sqcRYGate(q, -3.1415916324422812, 11);
  sqcRZGate(q, 1.7840146916022912, 11);

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
