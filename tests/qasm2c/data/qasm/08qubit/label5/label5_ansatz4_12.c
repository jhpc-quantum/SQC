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

  sqcRYGate(q, 0.423129710383513, 0);
  sqcRZGate(q, -2.523802976354582, 0);
  sqcRYGate(q, 0.1456621036317829, 1);
  sqcRZGate(q, 2.128284030679005, 1);
  sqcRYGate(q, 2.957539386686255, 2);
  sqcRZGate(q, 1.8635497310869615, 2);
  sqcRYGate(q, -2.8705696485739325, 3);
  sqcRZGate(q, 1.2625327320361146, 3);
  sqcRYGate(q, 0.18902296507091715, 4);
  sqcRZGate(q, -1.884914590510598, 4);
  sqcRYGate(q, 0.7923257937582241, 5);
  sqcRZGate(q, -1.6764337595116827, 5);
  sqcRYGate(q, 1.3898693209601387, 6);
  sqcRZGate(q, -1.0540606202402023, 6);
  sqcRYGate(q, -0.710032788649154, 7);
  sqcRZGate(q, -0.37400182522568254, 7);
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
  sqcRYGate(q, 2.413678637335477, 0);
  sqcRZGate(q, -2.8403353830803786, 0);
  sqcRYGate(q, 3.0447963694661992, 1);
  sqcRZGate(q, -1.279479058024565, 1);
  sqcRYGate(q, 1.4908754596644034, 2);
  sqcRZGate(q, -2.804832578578619, 2);
  sqcRYGate(q, 1.5496871282772684, 3);
  sqcRZGate(q, 1.535162901204056, 3);
  sqcRYGate(q, -0.3801829875280278, 4);
  sqcRZGate(q, 1.5431269711656208, 4);
  sqcRYGate(q, -0.8746654940622155, 5);
  sqcRZGate(q, -1.7415613142461233, 5);
  sqcRYGate(q, -1.8530318311252556, 6);
  sqcRZGate(q, 3.0485022075998853, 6);
  sqcRYGate(q, 0.13047917471148462, 7);
  sqcRZGate(q, -2.167512975108325, 7);
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
  sqcRYGate(q, 0.8275494386813165, 0);
  sqcRZGate(q, -1.6157165897493588, 0);
  sqcRYGate(q, 2.867393278380113, 1);
  sqcRZGate(q, 2.7380294917633496, 1);
  sqcRYGate(q, 2.8412650320978603, 2);
  sqcRZGate(q, 0.7255478232991477, 2);
  sqcRYGate(q, 1.607730355985515, 3);
  sqcRZGate(q, 0.6164982102419722, 3);
  sqcRYGate(q, -1.6908333111040148, 4);
  sqcRZGate(q, -0.5691034644429802, 4);
  sqcRYGate(q, 0.4274906982798604, 5);
  sqcRZGate(q, 0.7501053996788221, 5);
  sqcRYGate(q, 2.3237890603690317, 6);
  sqcRZGate(q, -0.7549544471572787, 6);
  sqcRYGate(q, 2.989446500975551, 7);
  sqcRZGate(q, 1.9751304908277707, 7);
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
  sqcRYGate(q, 2.990274328855672, 0);
  sqcRZGate(q, -2.6248103029909102, 0);
  sqcRYGate(q, 3.0414971387601284, 1);
  sqcRZGate(q, 2.6842410111472486, 1);
  sqcRYGate(q, -0.521525931648848, 2);
  sqcRZGate(q, -0.20282475281715232, 2);
  sqcRYGate(q, -0.3480489173195675, 3);
  sqcRZGate(q, -2.0924675914147937, 3);
  sqcRYGate(q, -0.12264005572884451, 4);
  sqcRZGate(q, 0.7793667972889, 4);
  sqcRYGate(q, -3.091993391000879, 5);
  sqcRZGate(q, -2.8943850481525875, 5);
  sqcRYGate(q, -1.2686320076376063, 6);
  sqcRZGate(q, -2.1771004541218355, 6);
  sqcRYGate(q, -2.477212218013441, 7);
  sqcRZGate(q, -2.63865126211053, 7);
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
  sqcRYGate(q, 0.8506213939222056, 0);
  sqcRZGate(q, 2.745254236595215, 0);
  sqcRYGate(q, 2.8531954591692803, 1);
  sqcRZGate(q, -0.5796890769265177, 1);
  sqcRYGate(q, -2.2030320720596075, 2);
  sqcRZGate(q, 1.9132190067704093, 2);
  sqcRYGate(q, -1.4699953775355181, 3);
  sqcRZGate(q, -1.1645711533858056, 3);
  sqcRYGate(q, 1.745983729048739, 4);
  sqcRZGate(q, 1.3905147756902565, 4);
  sqcRYGate(q, 2.2969265715938465, 5);
  sqcRZGate(q, -1.7506827375018976, 5);
  sqcRYGate(q, -1.1265183098974543, 6);
  sqcRZGate(q, -0.9687744540716414, 6);
  sqcRYGate(q, 1.9412249640918404, 7);
  sqcRZGate(q, -2.8952718347144604, 7);
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
  sqcRYGate(q, -2.5148068688571987, 0);
  sqcRZGate(q, -3.041969930158567, 0);
  sqcRYGate(q, 1.4202262696086372, 1);
  sqcRZGate(q, 2.1038701725434366, 1);
  sqcRYGate(q, 0.5983438815659152, 2);
  sqcRZGate(q, -1.6474059815857878, 2);
  sqcRYGate(q, 2.936977150752269, 3);
  sqcRZGate(q, -2.6535694900897258, 3);
  sqcRYGate(q, -1.189476051889155, 4);
  sqcRZGate(q, -1.0398399109873242, 4);
  sqcRYGate(q, 1.9603595280144643, 5);
  sqcRZGate(q, 1.167028223297964, 5);
  sqcRYGate(q, 1.125295144343566, 6);
  sqcRZGate(q, -0.5185649471369898, 6);
  sqcRYGate(q, 2.280124621997082, 7);
  sqcRZGate(q, 3.0223974752449947, 7);
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
  sqcRYGate(q, 0.38640317401115, 0);
  sqcRZGate(q, -2.667906936751241, 0);
  sqcRYGate(q, -2.4269367864999976, 1);
  sqcRZGate(q, -2.8909451693049326, 1);
  sqcRYGate(q, 2.8276917894826332, 2);
  sqcRZGate(q, 2.5874496321898155, 2);
  sqcRYGate(q, 0.13509044314993268, 3);
  sqcRZGate(q, 1.3482278158565866, 3);
  sqcRYGate(q, 1.964449383732739, 4);
  sqcRZGate(q, 2.3018795203501874, 4);
  sqcRYGate(q, 1.6245881015314412, 5);
  sqcRZGate(q, -1.2069793700087283, 5);
  sqcRYGate(q, 1.7636900285369086, 6);
  sqcRZGate(q, -2.8787292039627133, 6);
  sqcRYGate(q, 2.71613091192536, 7);
  sqcRZGate(q, 0.01823986281627832, 7);
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
  sqcRYGate(q, 2.926806675234872, 0);
  sqcRZGate(q, -0.8983554628671024, 0);
  sqcRYGate(q, 2.3671824711071605, 1);
  sqcRZGate(q, -2.681541327638256, 1);
  sqcRYGate(q, -0.0373787584395952, 2);
  sqcRZGate(q, 0.2863115576804698, 2);
  sqcRYGate(q, 2.64105112841534, 3);
  sqcRZGate(q, -1.7647741223775784, 3);
  sqcRYGate(q, -2.3032776411265927, 4);
  sqcRZGate(q, -1.8420014387648542, 4);
  sqcRYGate(q, -1.7076475928228418, 5);
  sqcRZGate(q, 2.727277299336152, 5);
  sqcRYGate(q, -0.9769828323231852, 6);
  sqcRZGate(q, 0.04010190349805669, 6);
  sqcRYGate(q, -2.6613414168878897, 7);
  sqcRZGate(q, 1.5325527390161728, 7);
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
  sqcRYGate(q, -0.4471789848432426, 0);
  sqcRZGate(q, -0.31497320118307304, 0);
  sqcRYGate(q, -1.1009861458225532, 1);
  sqcRZGate(q, -2.290509472462727, 1);
  sqcRYGate(q, -0.13133723634455752, 2);
  sqcRZGate(q, -1.3885493955354606, 2);
  sqcRYGate(q, -0.07753408998287978, 3);
  sqcRZGate(q, -1.640930123007717, 3);
  sqcRYGate(q, -1.5993321582412614, 4);
  sqcRZGate(q, -2.646890573203943, 4);
  sqcRYGate(q, -1.8725762829809234, 5);
  sqcRZGate(q, -0.4625700227697607, 5);
  sqcRYGate(q, -1.321600949349503, 6);
  sqcRZGate(q, 0.1720667421720812, 6);
  sqcRYGate(q, -1.8467530999443296, 7);
  sqcRZGate(q, -2.376355328684112, 7);
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
  sqcRYGate(q, 1.3424671228981966, 0);
  sqcRZGate(q, 1.5155619060265142, 0);
  sqcRYGate(q, -1.6545688499849458, 1);
  sqcRZGate(q, 1.8101235971980534, 1);
  sqcRYGate(q, 0.6483066827461472, 2);
  sqcRZGate(q, 1.6215299207128142, 2);
  sqcRYGate(q, 0.485168424373315, 3);
  sqcRZGate(q, -1.3885213838902013, 3);
  sqcRYGate(q, 1.4739336898266346, 4);
  sqcRZGate(q, 2.2042372756413817, 4);
  sqcRYGate(q, 3.0171586726309267, 5);
  sqcRZGate(q, -1.8948785307427745, 5);
  sqcRYGate(q, 1.6666182299271255, 6);
  sqcRZGate(q, -2.772201078061486, 6);
  sqcRYGate(q, 2.0123510157580196, 7);
  sqcRZGate(q, -1.1862857905779831, 7);
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
  sqcRYGate(q, 0.2816119863307711, 0);
  sqcRZGate(q, 1.6773649953098664, 0);
  sqcRYGate(q, -2.5023600879770043, 1);
  sqcRZGate(q, -2.0959534092114014, 1);
  sqcRYGate(q, 2.83761239144012, 2);
  sqcRZGate(q, -0.8858604984155908, 2);
  sqcRYGate(q, -1.8716651698158262, 3);
  sqcRZGate(q, 1.362831057096523, 3);
  sqcRYGate(q, -0.1011448806360056, 4);
  sqcRZGate(q, -2.9245248155849737, 4);
  sqcRYGate(q, -0.6726547686676928, 5);
  sqcRZGate(q, -2.3627055452964862, 5);
  sqcRYGate(q, 1.8454355516242353, 6);
  sqcRZGate(q, -2.6730059308118497, 6);
  sqcRYGate(q, 1.5215647690842937, 7);
  sqcRZGate(q, -0.608365241345692, 7);
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
  sqcRYGate(q, -1.240255522064394, 0);
  sqcRZGate(q, -1.8913437039610494, 0);
  sqcRYGate(q, 1.5314571889427482, 1);
  sqcRZGate(q, 0.2941526777033685, 1);
  sqcRYGate(q, 0.09484048019862445, 2);
  sqcRZGate(q, -0.8739087418465438, 2);
  sqcRYGate(q, -0.4761710801853172, 3);
  sqcRZGate(q, -0.149322974788296, 3);
  sqcRYGate(q, -0.5062244133842642, 4);
  sqcRZGate(q, -2.2790583279971135, 4);
  sqcRYGate(q, 2.6824971865981992, 5);
  sqcRZGate(q, -1.7817205090535486, 5);
  sqcRYGate(q, -2.3595718635437812, 6);
  sqcRZGate(q, 1.490530439369456, 6);
  sqcRYGate(q, -2.56142329963535, 7);
  sqcRZGate(q, -0.7357809818111053, 7);
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
  sqcRYGate(q, -1.255306148990302, 0);
  sqcRZGate(q, 1.2159235177167758, 0);
  sqcRYGate(q, 0.5010933505605971, 1);
  sqcRZGate(q, -0.27628939916500705, 1);
  sqcRYGate(q, -1.6416609246020937, 2);
  sqcRZGate(q, -0.5469394885479948, 2);
  sqcRYGate(q, 0.08173627491252976, 3);
  sqcRZGate(q, -2.3838787855980397, 3);
  sqcRYGate(q, -1.2612468411471536, 4);
  sqcRZGate(q, 2.907651943046306, 4);
  sqcRYGate(q, -2.6957899725714722, 5);
  sqcRZGate(q, -1.6668885508706834, 5);
  sqcRYGate(q, 0.9246650580016543, 6);
  sqcRZGate(q, 2.3760137086933772, 6);
  sqcRYGate(q, -0.48020629542898813, 7);
  sqcRZGate(q, -1.6427788964642882, 7);
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
  sqcRYGate(q, -2.8093031585311476, 0);
  sqcRZGate(q, -0.6902014781054842, 0);
  sqcRYGate(q, -0.8883103839923568, 1);
  sqcRZGate(q, -1.3379713890425982, 1);
  sqcRYGate(q, -3.098751488497897, 2);
  sqcRZGate(q, 2.5666879460411742, 2);
  sqcRYGate(q, 0.20229175454386272, 3);
  sqcRZGate(q, 2.994385333513549, 3);
  sqcRYGate(q, 1.5812575433857585, 4);
  sqcRZGate(q, -0.0065395804861809745, 4);
  sqcRYGate(q, -1.542532106112458, 5);
  sqcRZGate(q, 2.9193311604576384, 5);
  sqcRYGate(q, 3.1259497768708178, 6);
  sqcRZGate(q, 1.3714756435537603, 6);
  sqcRYGate(q, -2.256671897751592, 7);
  sqcRZGate(q, 2.6791979473275975, 7);
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
  sqcRYGate(q, -1.552495631438548, 0);
  sqcRZGate(q, -1.6889075878483093, 0);
  sqcRYGate(q, 2.018888057564711, 1);
  sqcRZGate(q, -1.437174805775349, 1);
  sqcRYGate(q, -0.30783693683237523, 2);
  sqcRZGate(q, -1.588805128423454, 2);
  sqcRYGate(q, 2.9816194609745654, 3);
  sqcRZGate(q, 2.1165229600182407, 3);
  sqcRYGate(q, -1.6141822454571937, 4);
  sqcRZGate(q, 2.008591736104106, 4);
  sqcRYGate(q, -1.5317706535969728, 5);
  sqcRZGate(q, -3.1370794816169654, 5);
  sqcRYGate(q, -2.191468228045211, 6);
  sqcRZGate(q, 1.9427208127165787, 6);
  sqcRYGate(q, 1.637856007553496, 7);
  sqcRZGate(q, 2.4874507379040613, 7);
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
  sqcRYGate(q, 0.7564301125338844, 0);
  sqcRZGate(q, -0.3259750677484554, 0);
  sqcRYGate(q, -1.7719508515002032, 1);
  sqcRZGate(q, 1.989277377886408, 1);
  sqcRYGate(q, -1.6098878784888475, 2);
  sqcRZGate(q, 1.0015548644489076, 2);
  sqcRYGate(q, 3.047581208582722, 3);
  sqcRZGate(q, 0.9503511846732007, 3);
  sqcRYGate(q, 0.1127854775883197, 4);
  sqcRZGate(q, 0.5925278386238843, 4);
  sqcRYGate(q, -1.6906103673745474, 5);
  sqcRZGate(q, -2.4718426141556646, 5);
  sqcRYGate(q, 2.082122504972506, 6);
  sqcRZGate(q, -0.44571568676846685, 6);
  sqcRYGate(q, -2.8863755168337843, 7);
  sqcRZGate(q, 2.02344253994489, 7);

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
