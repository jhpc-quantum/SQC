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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -0.5097963988728438, 0);
  sqcRZGate(q, 1.4442938886868613, 0);
  sqcRYGate(q, -1.1102149410188638, 1);
  sqcRZGate(q, 0.049686894454758594, 1);
  sqcRYGate(q, 0.8224458774125575, 2);
  sqcRZGate(q, 2.471658184334831, 2);
  sqcRYGate(q, -0.0009583943356184045, 3);
  sqcRZGate(q, -1.4440605655426477, 3);
  sqcRYGate(q, -2.3547702159096224, 4);
  sqcRZGate(q, -1.5090475417834486, 4);
  sqcRYGate(q, -2.9537651546000867, 5);
  sqcRZGate(q, -1.5521321235620258, 5);
  sqcRYGate(q, 0.4419279704531238, 6);
  sqcRZGate(q, 1.715908972377763, 6);
  sqcRYGate(q, 1.4651607587209012, 7);
  sqcRZGate(q, 0.9625067509040557, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6110954626321636, 0);
  sqcRZGate(q, 0.15113006719177235, 0);
  sqcRYGate(q, 2.098141096124391, 1);
  sqcRZGate(q, 1.1568594211553893, 1);
  sqcRYGate(q, 0.0511212758888339, 2);
  sqcRZGate(q, 0.17531685728817042, 2);
  sqcRYGate(q, -3.140822952851551, 3);
  sqcRZGate(q, 2.469432389138716, 3);
  sqcRYGate(q, 0.035880233662251904, 4);
  sqcRZGate(q, -0.036777225917114985, 4);
  sqcRYGate(q, 3.107246749890066, 5);
  sqcRZGate(q, -3.0615844489709176, 5);
  sqcRYGate(q, -0.8833456286031929, 6);
  sqcRZGate(q, 0.012487774823531698, 6);
  sqcRYGate(q, -1.5765036792362315, 7);
  sqcRZGate(q, 1.565788572801618, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.537002700591505, 0);
  sqcRZGate(q, 1.5462408531006453, 0);
  sqcRYGate(q, -2.8379103083763515, 1);
  sqcRZGate(q, 0.6792366809363402, 1);
  sqcRYGate(q, -1.5646078481587549, 2);
  sqcRZGate(q, 1.1322622993698264, 2);
  sqcRYGate(q, 1.5700868442604712, 3);
  sqcRZGate(q, 1.5722301070740254, 3);
  sqcRYGate(q, 0.9580475350556626, 4);
  sqcRZGate(q, -2.7685897922817335, 4);
  sqcRYGate(q, 0.3518844439593451, 5);
  sqcRZGate(q, -3.0978219671450384, 5);
  sqcRYGate(q, -0.7191439026880583, 6);
  sqcRZGate(q, -0.17292334028486384, 6);
  sqcRYGate(q, 2.0593871010265934, 7);
  sqcRZGate(q, 1.4442052285142468, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1386491248025847, 0);
  sqcRZGate(q, -1.1812797509898587, 0);
  sqcRYGate(q, 1.5693907229102504, 1);
  sqcRZGate(q, 1.6471159382918337, 1);
  sqcRYGate(q, 1.5708859732689957, 2);
  sqcRZGate(q, 1.5603048103448989, 2);
  sqcRYGate(q, 0.25860165549446257, 3);
  sqcRZGate(q, 0.006289421353161186, 3);
  sqcRYGate(q, 0.0005986584133658352, 4);
  sqcRZGate(q, 0.7967722436542086, 4);
  sqcRYGate(q, 0.0003316835343563085, 5);
  sqcRZGate(q, 1.498424833907396, 5);
  sqcRYGate(q, 0.48389463350523304, 6);
  sqcRZGate(q, -0.6043896859694335, 6);
  sqcRYGate(q, -1.5724843480570403, 7);
  sqcRZGate(q, 0.8743802014994776, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.973080791564284, 0);
  sqcRZGate(q, -1.6557232296428441, 0);
  sqcRYGate(q, 3.1379239832675725, 1);
  sqcRZGate(q, 1.6448014555950974, 1);
  sqcRYGate(q, 0.2625172341800908, 2);
  sqcRZGate(q, 1.9540893670711512, 2);
  sqcRYGate(q, -3.0065759525960734, 3);
  sqcRZGate(q, 1.649640572467395, 3);
  sqcRYGate(q, 0.00042724525426464437, 4);
  sqcRZGate(q, 0.5529659502899174, 4);
  sqcRYGate(q, -1.5700116417698933, 5);
  sqcRZGate(q, -0.6595580366556364, 5);
  sqcRYGate(q, -1.580012282378107, 6);
  sqcRZGate(q, 0.03184037194183426, 6);
  sqcRYGate(q, 2.8338585178098223, 7);
  sqcRZGate(q, 1.4401835146881508, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.0006269384578145704, 0);
  sqcRZGate(q, 0.674951958788605, 0);
  sqcRYGate(q, -1.5680187331551654, 1);
  sqcRZGate(q, 2.3503288512313034, 1);
  sqcRYGate(q, -3.1381141739977316, 2);
  sqcRZGate(q, 1.9424139459831784, 2);
  sqcRYGate(q, -0.020831084698631513, 3);
  sqcRZGate(q, 1.5010163932773612, 3);
  sqcRYGate(q, -3.1260996701210653, 4);
  sqcRZGate(q, -1.7708150600528727, 4);
  sqcRYGate(q, -0.0007973735462147857, 5);
  sqcRZGate(q, -2.482976149567648, 5);
  sqcRYGate(q, -1.5708707162725117, 6);
  sqcRZGate(q, 0.002405023172099341, 6);
  sqcRYGate(q, -1.5707009972422172, 7);
  sqcRZGate(q, -0.0010194268363000242, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1415228382692044, 0);
  sqcRZGate(q, 0.8410640548864928, 0);
  sqcRYGate(q, -0.0003878913509627324, 1);
  sqcRZGate(q, -0.5554645063268735, 1);
  sqcRYGate(q, -1.5698676622114212, 2);
  sqcRZGate(q, 1.7892313916602642, 2);
  sqcRYGate(q, -1.5704140125828971, 3);
  sqcRZGate(q, -1.3585288625973382, 3);
  sqcRYGate(q, -3.140771203072178, 4);
  sqcRZGate(q, -1.7543723196796215, 4);
  sqcRYGate(q, -1.5723445624718737, 5);
  sqcRZGate(q, 0.1690857002723716, 5);
  sqcRYGate(q, 1.571437986991496, 6);
  sqcRZGate(q, -1.0472411193969533, 6);
  sqcRYGate(q, -1.5696321651819432, 7);
  sqcRZGate(q, -1.9569444732395331, 7);

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
