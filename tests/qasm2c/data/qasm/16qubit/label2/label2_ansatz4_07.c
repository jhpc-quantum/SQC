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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -1.6087775518999932, 0);
  sqcRZGate(q, -0.17590403078999375, 0);
  sqcRYGate(q, -1.5162593626034164, 1);
  sqcRZGate(q, -0.6446119092935922, 1);
  sqcRYGate(q, 0.0018179581188542745, 2);
  sqcRZGate(q, 0.4419963639253743, 2);
  sqcRYGate(q, 0.0018938431917279175, 3);
  sqcRZGate(q, -1.1104030892886252, 3);
  sqcRYGate(q, 3.139964418096377, 4);
  sqcRZGate(q, 1.4096276840215305, 4);
  sqcRYGate(q, -0.046585131291394244, 5);
  sqcRZGate(q, -0.07897268889276905, 5);
  sqcRYGate(q, -1.5329189355580066, 6);
  sqcRZGate(q, -0.7035260477591511, 6);
  sqcRYGate(q, -1.5922673017444096, 7);
  sqcRZGate(q, 2.1389965016325383, 7);
  sqcRYGate(q, -3.141348051886585, 8);
  sqcRZGate(q, 0.6524688023485412, 8);
  sqcRYGate(q, 7.204342003497288e-05, 9);
  sqcRZGate(q, 0.9289308678549008, 9);
  sqcRYGate(q, -1.570835873884021, 10);
  sqcRZGate(q, 1.2335030759301242, 10);
  sqcRYGate(q, -1.5686105237756554, 11);
  sqcRZGate(q, -1.8665563621188088, 11);
  sqcRYGate(q, 3.1415150344793017, 12);
  sqcRZGate(q, 1.6376026013726124, 12);
  sqcRYGate(q, -3.1414955788788053, 13);
  sqcRZGate(q, -2.3749375342017056, 13);
  sqcRYGate(q, -1.7400650591162785, 14);
  sqcRZGate(q, 2.992215985974044, 14);
  sqcRYGate(q, 1.6597805127137517, 15);
  sqcRZGate(q, -0.10186116437095372, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.8219513502094766, 0);
  sqcRZGate(q, -0.056961185736877695, 0);
  sqcRYGate(q, -2.8997085073449567, 1);
  sqcRZGate(q, -2.522068167900691, 1);
  sqcRYGate(q, 1.5543334550091445, 2);
  sqcRZGate(q, -0.006326901701606324, 2);
  sqcRYGate(q, 1.5874423236655097, 3);
  sqcRZGate(q, 0.061134206215049426, 3);
  sqcRYGate(q, 1.6097519186094447, 4);
  sqcRZGate(q, -2.7417342927520094, 4);
  sqcRYGate(q, 3.1250663664654272, 5);
  sqcRZGate(q, 1.2549821398115482, 5);
  sqcRYGate(q, 2.6013214446279243, 6);
  sqcRZGate(q, -1.839709775627651, 6);
  sqcRYGate(q, -2.112168269894668, 7);
  sqcRZGate(q, 0.38029401063335333, 7);
  sqcRYGate(q, -1.5715570586270617, 8);
  sqcRZGate(q, -3.126898514869847, 8);
  sqcRYGate(q, -1.4549271860515658, 9);
  sqcRZGate(q, -3.0911497658399645, 9);
  sqcRYGate(q, -1.2919734686643203, 10);
  sqcRZGate(q, -1.5190715989846424, 10);
  sqcRYGate(q, -1.8918554402933325, 11);
  sqcRZGate(q, -0.051789321651563136, 11);
  sqcRYGate(q, 1.5692955169993987, 12);
  sqcRZGate(q, 0.026255959679115648, 12);
  sqcRYGate(q, -1.5170054933196742, 13);
  sqcRZGate(q, -2.2166101020529174, 13);
  sqcRYGate(q, -0.6210102397482133, 14);
  sqcRZGate(q, 0.8820746753365771, 14);
  sqcRYGate(q, 2.1591850816178226, 15);
  sqcRZGate(q, 0.23640290629895458, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.0366291196781443, 0);
  sqcRZGate(q, -0.652843687908729, 0);
  sqcRYGate(q, -2.6397987392576514, 1);
  sqcRZGate(q, -0.8421494318509412, 1);
  sqcRYGate(q, -1.5749207337365245, 2);
  sqcRZGate(q, 1.601691147230718, 2);
  sqcRYGate(q, 1.5712839054850232, 3);
  sqcRZGate(q, 2.3169654053670072, 3);
  sqcRYGate(q, 3.1415298678006263, 4);
  sqcRZGate(q, -1.3097023352854587, 4);
  sqcRYGate(q, 3.141588121670106, 5);
  sqcRZGate(q, 1.255137509042063, 5);
  sqcRYGate(q, -0.00332079858617007, 6);
  sqcRZGate(q, 2.7382764204770442, 6);
  sqcRYGate(q, 0.0016113552088800327, 7);
  sqcRZGate(q, -2.6243388372120426, 7);
  sqcRYGate(q, 0.4829905585967973, 8);
  sqcRZGate(q, -0.12744709050093125, 8);
  sqcRYGate(q, 0.47211093650965447, 9);
  sqcRZGate(q, -1.7669006408177124, 9);
  sqcRYGate(q, -1.9087875820390838, 10);
  sqcRZGate(q, 1.4981453501132362, 10);
  sqcRYGate(q, 1.2185792125709272, 11);
  sqcRZGate(q, 2.0550046311859336, 11);
  sqcRYGate(q, 1.5256974120847755, 12);
  sqcRZGate(q, -0.0834686567847495, 12);
  sqcRYGate(q, 0.03416260300827023, 13);
  sqcRZGate(q, -0.2799800452591441, 13);
  sqcRYGate(q, -0.2557123377532964, 14);
  sqcRZGate(q, -2.5409245679848094, 14);
  sqcRYGate(q, 2.6338912224421804, 15);
  sqcRZGate(q, 1.99305885162157, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.8059337743993087, 0);
  sqcRZGate(q, -1.8838224011328384, 0);
  sqcRYGate(q, -2.2980665844833306, 1);
  sqcRZGate(q, -1.7751009484767186, 1);
  sqcRYGate(q, 0.013749854509714589, 2);
  sqcRZGate(q, -0.9600191254595875, 2);
  sqcRYGate(q, -0.0010389199332256527, 3);
  sqcRZGate(q, -0.02095794219314025, 3);
  sqcRYGate(q, -2.7316890628022854, 4);
  sqcRZGate(q, -0.02521937731258017, 4);
  sqcRYGate(q, -3.120234860683495, 5);
  sqcRZGate(q, -1.1848459210149296, 5);
  sqcRYGate(q, -1.2439641887756308, 6);
  sqcRZGate(q, -2.717926914777027, 6);
  sqcRYGate(q, 2.3826900601336294, 7);
  sqcRZGate(q, 2.297116107309829, 7);
  sqcRYGate(q, -3.1155372903918033, 8);
  sqcRZGate(q, 1.3303565774362989, 8);
  sqcRYGate(q, -2.60339538115727, 9);
  sqcRZGate(q, -2.6312928570599277, 9);
  sqcRYGate(q, 2.529208787850935, 10);
  sqcRZGate(q, -2.8760617537773427, 10);
  sqcRYGate(q, -2.4553465831988692, 11);
  sqcRZGate(q, 0.4884928120975601, 11);
  sqcRYGate(q, 3.1155225331055516, 12);
  sqcRZGate(q, 0.038999998037079216, 12);
  sqcRYGate(q, -0.03158724489675952, 13);
  sqcRZGate(q, -2.5967088781967966, 13);
  sqcRYGate(q, 2.7141437093360943, 14);
  sqcRZGate(q, 1.7162643185691406, 14);
  sqcRYGate(q, -0.42913461677223563, 15);
  sqcRZGate(q, -1.4602182871899245, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.2552631549655484, 0);
  sqcRZGate(q, 1.1803699082339452, 0);
  sqcRYGate(q, -2.777472367605809, 1);
  sqcRZGate(q, 0.004572356815952497, 1);
  sqcRYGate(q, 3.137062663253118, 2);
  sqcRZGate(q, -0.9494225834808981, 2);
  sqcRYGate(q, 3.1358160587983663, 3);
  sqcRZGate(q, -2.428153854926547, 3);
  sqcRYGate(q, -0.027852695515983683, 4);
  sqcRZGate(q, -0.05874798257101865, 4);
  sqcRYGate(q, 0.00046593187791099666, 5);
  sqcRZGate(q, 1.4680499831652651, 5);
  sqcRYGate(q, -3.0850291188060606, 6);
  sqcRZGate(q, -1.149251503446688, 6);
  sqcRYGate(q, -0.019822519544662853, 7);
  sqcRZGate(q, -2.2219940178942954, 7);
  sqcRYGate(q, -0.04913412360270186, 8);
  sqcRZGate(q, 2.1434397123308395, 8);
  sqcRYGate(q, 0.0017786623330835376, 9);
  sqcRZGate(q, 0.42860997829285186, 9);
  sqcRYGate(q, -2.0549498631679004, 10);
  sqcRZGate(q, 1.5667099228935604, 10);
  sqcRYGate(q, 0.009864931319927184, 11);
  sqcRZGate(q, 1.2853726012000388, 11);
  sqcRYGate(q, 3.0894355878048834, 12);
  sqcRZGate(q, 1.1486400801896377, 12);
  sqcRYGate(q, 0.007808710664956031, 13);
  sqcRZGate(q, 1.934720015029984, 13);
  sqcRYGate(q, -1.1485882420373288, 14);
  sqcRZGate(q, -0.2884299452614772, 14);
  sqcRYGate(q, 1.7152572755178186, 15);
  sqcRZGate(q, 1.4605829746779788, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.7600015016180368, 0);
  sqcRZGate(q, 0.8351178476508263, 0);
  sqcRYGate(q, -2.6178548525635725, 1);
  sqcRZGate(q, -1.986213125182848, 1);
  sqcRYGate(q, 0.9548871036958911, 2);
  sqcRZGate(q, -1.548378849413588, 2);
  sqcRYGate(q, -2.1429900487143043, 3);
  sqcRZGate(q, -0.7703046645565198, 3);
  sqcRYGate(q, 0.318095888157532, 4);
  sqcRZGate(q, 0.2269921764879014, 4);
  sqcRYGate(q, -1.5290688516628643, 5);
  sqcRZGate(q, 1.4768601930879317, 5);
  sqcRYGate(q, -3.121525312553713, 6);
  sqcRZGate(q, -0.1305171933325605, 6);
  sqcRYGate(q, 3.1406100387110487, 7);
  sqcRZGate(q, -2.1052876941402316, 7);
  sqcRYGate(q, 0.01071698153194147, 8);
  sqcRZGate(q, -2.1770827105197106, 8);
  sqcRYGate(q, -0.0015381582069388497, 9);
  sqcRZGate(q, -2.7024498157932992, 9);
  sqcRYGate(q, 1.5508832628355476, 10);
  sqcRZGate(q, 1.2773331516609376, 10);
  sqcRYGate(q, -1.578076071461071, 11);
  sqcRZGate(q, -3.1357317518716794, 11);
  sqcRYGate(q, -0.07616562677363674, 12);
  sqcRZGate(q, 2.159598012672924, 12);
  sqcRYGate(q, -1.6274419666183415, 13);
  sqcRZGate(q, -1.821739456926724, 13);
  sqcRYGate(q, -1.2678565864158724, 14);
  sqcRZGate(q, 2.2370762147120153, 14);
  sqcRYGate(q, 0.1755435424834692, 15);
  sqcRZGate(q, -0.4599470172067681, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.09686543010374596, 0);
  sqcRZGate(q, -1.2824120138884916, 0);
  sqcRYGate(q, -0.03213498234363055, 1);
  sqcRZGate(q, -2.8262082040719916, 1);
  sqcRYGate(q, 1.5636534671903932, 2);
  sqcRZGate(q, 1.8953236512366507, 2);
  sqcRYGate(q, 0.00062394564645112, 3);
  sqcRZGate(q, 0.3255248443400953, 3);
  sqcRYGate(q, -0.0013246605499545572, 4);
  sqcRZGate(q, -2.78352737603704, 4);
  sqcRYGate(q, -0.0016668869644613665, 5);
  sqcRZGate(q, 0.0805222113522809, 5);
  sqcRYGate(q, -0.013220939452896374, 6);
  sqcRZGate(q, -2.6664847894670554, 6);
  sqcRYGate(q, 0.038119825522293246, 7);
  sqcRZGate(q, 1.9944481705420587, 7);
  sqcRYGate(q, -1.5810064578254064, 8);
  sqcRZGate(q, -1.604064006317408, 8);
  sqcRYGate(q, 1.508213887421313, 9);
  sqcRZGate(q, -1.6605974713184684, 9);
  sqcRYGate(q, -3.093208867408155, 10);
  sqcRZGate(q, 2.1015481758421335, 10);
  sqcRYGate(q, -0.0004104894883045981, 11);
  sqcRZGate(q, -1.2832298738976622, 11);
  sqcRYGate(q, -3.090443487275162, 12);
  sqcRZGate(q, -1.546627050406829, 12);
  sqcRYGate(q, 3.1398241494295083, 13);
  sqcRZGate(q, -0.1977355210154865, 13);
  sqcRYGate(q, 3.097908450376849, 14);
  sqcRZGate(q, 2.142362231090517, 14);
  sqcRYGate(q, 0.03546210056265405, 15);
  sqcRZGate(q, 0.13877229282302894, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.1411727964372607, 0);
  sqcRZGate(q, -2.8470626624056887, 0);
  sqcRYGate(q, -0.0006695042476139292, 1);
  sqcRZGate(q, -0.17287918559822332, 1);
  sqcRYGate(q, 3.1376591101069455, 2);
  sqcRZGate(q, 0.3232627648084181, 2);
  sqcRYGate(q, 0.0027575551939949734, 3);
  sqcRZGate(q, 2.0349927709311784, 3);
  sqcRYGate(q, 0.0013150083586657146, 4);
  sqcRZGate(q, 0.4700841070046095, 4);
  sqcRYGate(q, -1.567109104431279, 5);
  sqcRZGate(q, 2.0587615532375096, 5);
  sqcRYGate(q, -1.5456484816660154, 6);
  sqcRZGate(q, 0.23432951582810174, 6);
  sqcRYGate(q, -0.7195933790747711, 7);
  sqcRZGate(q, -0.12198005447809823, 7);
  sqcRYGate(q, 3.1248039653951514, 8);
  sqcRZGate(q, 0.13011520446934421, 8);
  sqcRYGate(q, -3.095425980330856, 9);
  sqcRZGate(q, 1.8266584340742378, 9);
  sqcRYGate(q, 0.028002650835518925, 10);
  sqcRZGate(q, -0.5093707230842595, 10);
  sqcRYGate(q, -0.012736821808054443, 11);
  sqcRZGate(q, 2.869076863390049, 11);
  sqcRYGate(q, -1.5589190395217651, 12);
  sqcRZGate(q, 1.9475488463063506, 12);
  sqcRYGate(q, 1.5754211304948846, 13);
  sqcRZGate(q, 2.5654697367845736, 13);
  sqcRYGate(q, 2.318496207712756, 14);
  sqcRZGate(q, -0.3851620153020128, 14);
  sqcRYGate(q, -1.9371276985710955, 15);
  sqcRZGate(q, 2.2292554820829165, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.7505371794553564, 0);
  sqcRZGate(q, 2.2070918265856783, 0);
  sqcRYGate(q, -2.823092803084634, 1);
  sqcRZGate(q, 0.6835024686072773, 1);
  sqcRYGate(q, 1.5635810631297142, 2);
  sqcRZGate(q, 1.4030507739216782, 2);
  sqcRYGate(q, -0.5648653114973066, 3);
  sqcRZGate(q, -0.011034889513654328, 3);
  sqcRYGate(q, 7.156629197670946e-05, 4);
  sqcRZGate(q, 0.0743826690060212, 4);
  sqcRYGate(q, 3.141533162601127, 5);
  sqcRZGate(q, -0.19115952765536015, 5);
  sqcRYGate(q, 3.1385542157648287, 6);
  sqcRZGate(q, 0.21391916065123665, 6);
  sqcRYGate(q, -0.00451693358669658, 7);
  sqcRZGate(q, 0.12703523535460892, 7);
  sqcRYGate(q, -0.060428286610419095, 8);
  sqcRZGate(q, -0.10302924226393095, 8);
  sqcRYGate(q, -3.1380491347611184, 9);
  sqcRZGate(q, -2.6914095616268634, 9);
  sqcRYGate(q, -1.6042153534011252, 10);
  sqcRZGate(q, -3.0510046302926734, 10);
  sqcRYGate(q, -0.5145231965865733, 11);
  sqcRZGate(q, 0.32101805609252493, 11);
  sqcRYGate(q, 0.00514387470031428, 12);
  sqcRZGate(q, 2.49535188022371, 12);
  sqcRYGate(q, -0.01982643208743884, 13);
  sqcRZGate(q, -0.689581964346823, 13);
  sqcRYGate(q, 1.6486525511222057, 14);
  sqcRZGate(q, 1.9770066811075984, 14);
  sqcRYGate(q, -0.5458234236847058, 15);
  sqcRZGate(q, -0.4694431950054389, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.5625794389778092, 0);
  sqcRZGate(q, -0.582640587316968, 0);
  sqcRYGate(q, -1.578671573903799, 1);
  sqcRZGate(q, -0.7205530832830762, 1);
  sqcRYGate(q, 1.5661593665971196, 2);
  sqcRZGate(q, -6.895010283666098e-06, 2);
  sqcRYGate(q, 1.1885319013763938, 3);
  sqcRZGate(q, -2.7362058931944246, 3);
  sqcRYGate(q, -3.140968725131709, 4);
  sqcRZGate(q, 1.838029961538206, 4);
  sqcRYGate(q, -0.003735771681225408, 5);
  sqcRZGate(q, -2.461466468859824, 5);
  sqcRYGate(q, 1.542455331668691, 6);
  sqcRZGate(q, -0.3539230559988766, 6);
  sqcRYGate(q, -0.7177252780587211, 7);
  sqcRZGate(q, -1.6681989184553048, 7);
  sqcRYGate(q, 1.562436967502532, 8);
  sqcRZGate(q, -0.27196271331257404, 8);
  sqcRYGate(q, -2.791107861928014, 9);
  sqcRZGate(q, 1.09095002624316, 9);
  sqcRYGate(q, -0.01778057427895252, 10);
  sqcRZGate(q, 0.12977919336399868, 10);
  sqcRYGate(q, -0.0036968968422000847, 11);
  sqcRZGate(q, 3.012634866502221, 11);
  sqcRYGate(q, 0.002545843538400483, 12);
  sqcRZGate(q, -1.0166767544398543, 12);
  sqcRYGate(q, -0.002850540560958237, 13);
  sqcRZGate(q, 3.042844076758881, 13);
  sqcRYGate(q, 0.2197446232404449, 14);
  sqcRZGate(q, 1.8755496652721275, 14);
  sqcRYGate(q, -1.5967912597416891, 15);
  sqcRZGate(q, -0.4497198755143952, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.0058509435164583, 0);
  sqcRZGate(q, 1.6363138471664564, 0);
  sqcRYGate(q, -0.006067815145177846, 1);
  sqcRZGate(q, 1.7754798361779676, 1);
  sqcRYGate(q, -1.5607544401334759, 2);
  sqcRZGate(q, -2.087195997302125, 2);
  sqcRYGate(q, 0.005658913212760908, 3);
  sqcRZGate(q, -0.9162013417002761, 3);
  sqcRYGate(q, -3.1344608808992946, 4);
  sqcRZGate(q, 1.7400442045139908, 4);
  sqcRYGate(q, -3.137707380730298, 5);
  sqcRZGate(q, -0.47652939904307334, 5);
  sqcRYGate(q, -1.5954652641743783, 6);
  sqcRZGate(q, 2.667694079277319, 6);
  sqcRYGate(q, 1.6003849555750236, 7);
  sqcRZGate(q, -0.48054927991128693, 7);
  sqcRYGate(q, 2.7039207507932166, 8);
  sqcRZGate(q, -2.241436670492897, 8);
  sqcRYGate(q, -1.6893995964354067, 9);
  sqcRZGate(q, 2.71557876678265, 9);
  sqcRYGate(q, -0.6175269984438576, 10);
  sqcRZGate(q, -2.1735839989233376, 10);
  sqcRYGate(q, -0.6056613140350634, 11);
  sqcRZGate(q, -2.1797671576315114, 11);
  sqcRYGate(q, -0.6224011963903159, 12);
  sqcRZGate(q, -2.1916012667250078, 12);
  sqcRYGate(q, 0.6249443997031214, 13);
  sqcRZGate(q, 0.9269078056007347, 13);
  sqcRYGate(q, 2.169586237414271, 14);
  sqcRZGate(q, -3.036045143023594, 14);
  sqcRYGate(q, -0.07595780591017931, 15);
  sqcRZGate(q, -1.433102325818692, 15);

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
