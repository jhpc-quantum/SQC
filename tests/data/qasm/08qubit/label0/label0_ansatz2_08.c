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

  sqcRYGate(q, -1.5700242060523788, 0);
  sqcRZGate(q, -1.7517032363075238, 0);
  sqcRYGate(q, 1.6409735502489387, 1);
  sqcRZGate(q, -1.6372551121893995, 1);
  sqcRYGate(q, -0.02662859118125362, 2);
  sqcRZGate(q, -1.8324744201218337, 2);
  sqcRYGate(q, -1.5995398051557752, 3);
  sqcRZGate(q, -1.7125117734437678, 3);
  sqcRYGate(q, -3.141537247207987, 4);
  sqcRZGate(q, 0.5865750227396764, 4);
  sqcRYGate(q, 3.1030102404542044, 5);
  sqcRZGate(q, -1.676825921818974, 5);
  sqcRYGate(q, -1.6190755931289686, 6);
  sqcRZGate(q, 1.5709233077849936, 6);
  sqcRYGate(q, -0.004416833415898047, 7);
  sqcRZGate(q, -2.0856815877631094, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.00014200347801285318, 0);
  sqcRZGate(q, 0.1908189309472581, 0);
  sqcRYGate(q, -0.009627604281062222, 1);
  sqcRZGate(q, 1.5695414234388425, 1);
  sqcRYGate(q, -0.0021844910465681155, 2);
  sqcRZGate(q, 1.1322753841169935, 2);
  sqcRYGate(q, 0.0020577401714065857, 3);
  sqcRZGate(q, 0.140220374711606, 3);
  sqcRYGate(q, 0.0027453030892482934, 4);
  sqcRZGate(q, -2.338662376206452, 4);
  sqcRYGate(q, 3.0487565717693346, 5);
  sqcRZGate(q, 3.021717418989231, 5);
  sqcRYGate(q, 2.8946291091228487, 6);
  sqcRZGate(q, 1.9300492800084004, 6);
  sqcRYGate(q, -3.1414099160426154, 7);
  sqcRZGate(q, -2.1253426141413376, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.0503592965200967, 0);
  sqcRZGate(q, -1.4099567379880273, 0);
  sqcRYGate(q, -2.818891225030618, 1);
  sqcRZGate(q, 2.6667684153273106, 1);
  sqcRYGate(q, 1.556132944007806, 2);
  sqcRZGate(q, 2.8277832699857997, 2);
  sqcRYGate(q, 1.4999654914600424, 3);
  sqcRZGate(q, -0.6468034244498674, 3);
  sqcRYGate(q, -1.5708748906114913, 4);
  sqcRZGate(q, -3.1385532139489536, 4);
  sqcRYGate(q, 1.5681371444656866, 5);
  sqcRZGate(q, 0.01492321868068558, 5);
  sqcRYGate(q, -2.8151073487965212, 6);
  sqcRZGate(q, 0.3719556506643411, 6);
  sqcRYGate(q, -3.13014996133767, 7);
  sqcRZGate(q, -3.04841232050168, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.00020587633235358282, 0);
  sqcRZGate(q, -1.7228962968710952, 0);
  sqcRYGate(q, 3.1412939209090243, 1);
  sqcRZGate(q, 2.8918852089744624, 1);
  sqcRYGate(q, -0.001035362016103214, 2);
  sqcRZGate(q, 1.2291344140653855, 2);
  sqcRYGate(q, -3.1415346041408037, 3);
  sqcRZGate(q, -0.6353965393773019, 3);
  sqcRYGate(q, -1.5688329758393667, 4);
  sqcRZGate(q, -3.101852682572023, 4);
  sqcRYGate(q, 3.139479435724044, 5);
  sqcRZGate(q, 1.8125121056134104, 5);
  sqcRYGate(q, -1.5738490457391476, 6);
  sqcRZGate(q, -1.7010799582429397, 6);
  sqcRYGate(q, 1.5709987039965223, 7);
  sqcRZGate(q, 1.6381562751357037, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.9289959914185104, 0);
  sqcRZGate(q, 1.4067706875402637, 0);
  sqcRYGate(q, 3.1414939231186567, 1);
  sqcRZGate(q, 0.15579090185221903, 1);
  sqcRYGate(q, -3.110287510812438, 2);
  sqcRZGate(q, 2.4850500636290755, 2);
  sqcRYGate(q, -1.6061266481050511, 3);
  sqcRZGate(q, -3.124586028473936, 3);
  sqcRYGate(q, 1.575764554038135, 4);
  sqcRZGate(q, 0.5884726314284151, 4);
  sqcRYGate(q, 2.7538338179115867, 5);
  sqcRZGate(q, -1.1448295253759722, 5);
  sqcRYGate(q, -2.5195594830581647, 6);
  sqcRZGate(q, -1.556564960816065, 6);
  sqcRYGate(q, -1.5700148148894866, 7);
  sqcRZGate(q, 0.007987416246018985, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.1379209594799446, 0);
  sqcRZGate(q, -1.7354888382860807, 0);
  sqcRYGate(q, -1.5711982058360263, 1);
  sqcRZGate(q, 1.5709455215296029, 1);
  sqcRYGate(q, 1.8002994213786092, 2);
  sqcRZGate(q, -1.5375798695102825, 2);
  sqcRYGate(q, -2.986854909460034, 3);
  sqcRZGate(q, 0.0924556915969097, 3);
  sqcRYGate(q, -0.001480078766894266, 4);
  sqcRZGate(q, -0.731070398467768, 4);
  sqcRYGate(q, -1.626297802096971, 5);
  sqcRZGate(q, -2.801094837490592, 5);
  sqcRYGate(q, 0.2359737910310112, 6);
  sqcRZGate(q, -1.5794926163821619, 6);
  sqcRYGate(q, 0.2340687383294986, 7);
  sqcRZGate(q, -1.5572566481669368, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.3427765344408245, 0);
  sqcRZGate(q, 1.5731911751728853, 0);
  sqcRYGate(q, -1.3365171616011386, 1);
  sqcRZGate(q, 1.6357509400303665, 1);
  sqcRYGate(q, -1.57577642178253, 2);
  sqcRZGate(q, -3.081491015970518, 2);
  sqcRYGate(q, -0.18312536531449106, 3);
  sqcRZGate(q, -0.07552032806790747, 3);
  sqcRYGate(q, 0.0025293529128475037, 4);
  sqcRZGate(q, -0.6238793387509382, 4);
  sqcRYGate(q, -3.1378302467354913, 5);
  sqcRZGate(q, -2.813058008071581, 5);
  sqcRYGate(q, -0.04353183183922837, 6);
  sqcRZGate(q, -1.9986183223051626, 6);
  sqcRYGate(q, -3.07347620770069, 7);
  sqcRZGate(q, -1.5687235850344958, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.6665936478368195, 0);
  sqcRZGate(q, 1.5617497142161731, 0);
  sqcRYGate(q, 0.02628915440583025, 1);
  sqcRZGate(q, 1.5057153476609217, 1);
  sqcRYGate(q, -1.5763151512942324, 2);
  sqcRZGate(q, 3.1273603627091475, 2);
  sqcRYGate(q, 1.5438343958589407, 3);
  sqcRZGate(q, -2.8191993927797774, 3);
  sqcRYGate(q, 3.140474081222635, 4);
  sqcRZGate(q, 1.2620660359599352, 4);
  sqcRYGate(q, -0.5635811466624663, 5);
  sqcRZGate(q, -1.2058116833487853, 5);
  sqcRYGate(q, 3.118920804056793, 6);
  sqcRZGate(q, -1.839070099205478, 6);
  sqcRYGate(q, 2.954016203665212, 7);
  sqcRZGate(q, 1.9427420662880692, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.006749870762602, 0);
  sqcRZGate(q, -1.5685010614718056, 0);
  sqcRYGate(q, 1.6065883793468292, 1);
  sqcRZGate(q, 2.4591885263852884, 1);
  sqcRYGate(q, -1.5324004892949663, 2);
  sqcRZGate(q, 1.2959720751704693, 2);
  sqcRYGate(q, -3.131193555687173, 3);
  sqcRZGate(q, -3.025012770406377, 3);
  sqcRYGate(q, 3.140852862938177, 4);
  sqcRZGate(q, 0.3445118885800778, 4);
  sqcRYGate(q, 0.03235071642430902, 5);
  sqcRZGate(q, 2.8355512176920596, 5);
  sqcRYGate(q, -0.194019589437608, 6);
  sqcRZGate(q, 1.8789978011051245, 6);
  sqcRYGate(q, 3.1414225818442367, 7);
  sqcRZGate(q, 1.4260405832717173, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.9177909208376396, 0);
  sqcRZGate(q, -1.5678321725540931, 0);
  sqcRYGate(q, 3.141369457175757, 1);
  sqcRZGate(q, -2.295307569796309, 1);
  sqcRYGate(q, 0.05188795934138082, 2);
  sqcRZGate(q, 0.5312679490508199, 2);
  sqcRYGate(q, 1.5645377521273782, 3);
  sqcRZGate(q, -0.4978853484889348, 3);
  sqcRYGate(q, -1.571150145033621, 4);
  sqcRZGate(q, 1.5119877502462806, 4);
  sqcRYGate(q, 1.2028725950651342, 5);
  sqcRZGate(q, -0.1647575604257323, 5);
  sqcRYGate(q, -2.1375241901327993, 6);
  sqcRZGate(q, 1.8259887078007933, 6);
  sqcRYGate(q, 0.06973841273484371, 7);
  sqcRZGate(q, 2.110954542623646, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.004913980946902541, 0);
  sqcRZGate(q, -1.5608268771051386, 0);
  sqcRYGate(q, 0.00011732087154925352, 1);
  sqcRZGate(q, 2.107976475934792, 1);
  sqcRYGate(q, 3.1415076122836414, 2);
  sqcRZGate(q, 0.26653742434387284, 2);
  sqcRYGate(q, -3.140846871024571, 3);
  sqcRZGate(q, 1.0681313965053614, 3);
  sqcRYGate(q, -3.0885123260872627, 4);
  sqcRZGate(q, 0.8293965819370479, 4);
  sqcRYGate(q, 1.56914945955235, 5);
  sqcRZGate(q, -0.0001547565487154401, 5);
  sqcRYGate(q, -1.5711381427161366, 6);
  sqcRZGate(q, -0.026133777301284265, 6);
  sqcRYGate(q, 1.5690310075948704, 7);
  sqcRZGate(q, 3.1255976647377937, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.5679981244857386, 0);
  sqcRZGate(q, -1.5706932906333417, 0);
  sqcRYGate(q, 0.002872714952971478, 1);
  sqcRZGate(q, 2.6462360751744356, 1);
  sqcRYGate(q, -1.5750977093188432, 2);
  sqcRZGate(q, 1.5697743312384047, 2);
  sqcRYGate(q, 1.5646392739853283, 3);
  sqcRZGate(q, -1.5607659332941106, 3);
  sqcRYGate(q, 0.013903677730519703, 4);
  sqcRZGate(q, -2.4183390153672084, 4);
  sqcRYGate(q, 1.1899389279305743, 5);
  sqcRZGate(q, 0.007219764804816897, 5);
  sqcRYGate(q, 0.10054340658499948, 6);
  sqcRZGate(q, 0.025361206928368563, 6);
  sqcRYGate(q, 0.03851723554222808, 7);
  sqcRZGate(q, -3.125843613935021, 7);

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
