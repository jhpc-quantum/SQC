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

  sqcRYGate(q, -1.4214789389696205, 0);
  sqcRYGate(q, 3.065952305736988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.49817848163518924, 0);
  sqcRYGate(q, 2.6352286463661616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8921914487582014, 2);
  sqcRYGate(q, 1.4504442388025796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2112351225718603, 2);
  sqcRYGate(q, 0.96864043484676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.738661915956447, 4);
  sqcRYGate(q, 0.43664079643150533, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3791797490899165, 4);
  sqcRYGate(q, 0.8691626183121213, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7202611241520084, 6);
  sqcRYGate(q, -1.3251737473693206, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0736407912106647, 6);
  sqcRYGate(q, 2.316076428228289, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.455507809324337, 1);
  sqcRYGate(q, 1.1974883236530074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4366075054739302, 1);
  sqcRYGate(q, 0.6736390843214718, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5659354338149987, 3);
  sqcRYGate(q, -0.9582851690294201, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4809629874459218, 3);
  sqcRYGate(q, -0.9228023873328235, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8459559491765993, 5);
  sqcRYGate(q, -1.3395542384487857, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.05826537178204205, 5);
  sqcRYGate(q, -0.13178628379737636, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2810041181439749, 0);
  sqcRYGate(q, -0.4605421949698183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.638598571718212, 0);
  sqcRYGate(q, -2.447995489971073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9630931851577147, 2);
  sqcRYGate(q, 2.4122245769758304, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6363231222353695, 2);
  sqcRYGate(q, 0.2780109702818061, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9146383651560338, 4);
  sqcRYGate(q, 1.5378767086947276, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.892986935493394, 4);
  sqcRYGate(q, -2.688997763334262, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3944613121297107, 6);
  sqcRYGate(q, 2.9769963404190944, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9466411804298369, 6);
  sqcRYGate(q, -0.4321931037582365, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.594390671987568, 1);
  sqcRYGate(q, 0.29423338183786996, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4950631353176052, 1);
  sqcRYGate(q, 0.14736697933005483, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5912912609919643, 3);
  sqcRYGate(q, -0.13075002135949987, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.907406836325884, 3);
  sqcRYGate(q, -1.048675503919621, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.80565718878721, 5);
  sqcRYGate(q, 1.0814451107963858, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.990355615460193, 5);
  sqcRYGate(q, -1.7052752911169549, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.132301074798415, 0);
  sqcRYGate(q, -1.386653886957174, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9320673983874563, 0);
  sqcRYGate(q, -0.5632528000454707, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1379486935896974, 2);
  sqcRYGate(q, 0.26407197165388147, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.64346382102221, 2);
  sqcRYGate(q, 1.6040723786635098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3002493988792048, 4);
  sqcRYGate(q, -0.9745787821484151, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0447316295751743, 4);
  sqcRYGate(q, -0.39261793756594277, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2229026302851227, 6);
  sqcRYGate(q, -1.4265722860815524, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4250197196444008, 6);
  sqcRYGate(q, -2.976335193391448, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.21957611255153786, 1);
  sqcRYGate(q, 2.5048792896607917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.596404437104029, 1);
  sqcRYGate(q, 2.6661010159658445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.01464847116699574, 3);
  sqcRYGate(q, 1.4394776127287647, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5623523345470962, 3);
  sqcRYGate(q, -2.70189114949896, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0739880903351464, 5);
  sqcRYGate(q, -2.7396323698767255, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.748848062931701, 5);
  sqcRYGate(q, -2.187333997245166, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.044605265348567, 0);
  sqcRYGate(q, -1.3239045717935762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6353471238696002, 0);
  sqcRYGate(q, 0.8847486009049645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.091276950645708, 2);
  sqcRYGate(q, 0.3482143788741003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.05396199189787625, 2);
  sqcRYGate(q, 0.42291299672868826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9839515133068848, 4);
  sqcRYGate(q, -2.0931486893469056, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.544512427984362, 4);
  sqcRYGate(q, -0.017698225182925853, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.41505119469218865, 6);
  sqcRYGate(q, 0.32297060362635577, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2310502319955199, 6);
  sqcRYGate(q, -0.08271769831774951, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9206960764037364, 1);
  sqcRYGate(q, -0.15820690010284014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0483413972071536, 1);
  sqcRYGate(q, -2.80872367310315, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.34377708356391956, 3);
  sqcRYGate(q, 0.4374316389061097, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.350091331875917, 3);
  sqcRYGate(q, 2.925551835523462, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6401098188056977, 5);
  sqcRYGate(q, -0.23721458168305812, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.532656847206578, 5);
  sqcRYGate(q, -0.18522440847508648, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7093545587385575, 0);
  sqcRYGate(q, -0.16127275122244428, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2875874564272806, 0);
  sqcRYGate(q, 1.4222895128998223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1609708693483629, 2);
  sqcRYGate(q, -0.17248797681452388, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0512299438873303, 2);
  sqcRYGate(q, 0.7603690761693223, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0450790697481638, 4);
  sqcRYGate(q, -0.6733812795588943, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.013115551667588043, 4);
  sqcRYGate(q, 3.1392596766967844, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5601696597537442, 6);
  sqcRYGate(q, 0.5440983732669288, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.602685885110148, 6);
  sqcRYGate(q, 0.5283350690733002, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0735855800946124, 1);
  sqcRYGate(q, -1.5877982278103433, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.612081905300077, 1);
  sqcRYGate(q, -2.783402595649816, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0377745047241715, 3);
  sqcRYGate(q, -1.330354341641172, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8489606651331768, 3);
  sqcRYGate(q, 0.10220755162191608, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1304755115183696, 5);
  sqcRYGate(q, 1.2988501075449745, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.139011008721419, 5);
  sqcRYGate(q, 3.062148870881, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6465952699609367, 0);
  sqcRYGate(q, -1.6640627144724491, 1);
  sqcRYGate(q, 0.03599137643145089, 2);
  sqcRYGate(q, 1.5849431122550692, 3);
  sqcRYGate(q, 1.9110264661937488, 4);
  sqcRYGate(q, -1.3392278280637164, 5);
  sqcRYGate(q, 2.880910100176487, 6);
  sqcRYGate(q, 1.6092232888469242, 7);

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
