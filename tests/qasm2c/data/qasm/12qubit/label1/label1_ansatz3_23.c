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

  sqcRYGate(q, 2.4832477617309046, 0);
  sqcRZGate(q, -2.5200263100956737, 0);
  sqcRYGate(q, 2.097364595893049, 1);
  sqcRZGate(q, -1.9718700266521407, 1);
  sqcRYGate(q, 2.178530871395017, 2);
  sqcRZGate(q, 1.0567875707083554, 2);
  sqcRYGate(q, 3.0610142606631605, 3);
  sqcRZGate(q, 2.6037131191350835, 3);
  sqcRYGate(q, -0.06725451442615174, 4);
  sqcRZGate(q, -1.860455958866992, 4);
  sqcRYGate(q, -2.2752989354413176, 5);
  sqcRZGate(q, 1.7711645900731445, 5);
  sqcRYGate(q, -0.1915812368248462, 6);
  sqcRZGate(q, 0.9233866825613823, 6);
  sqcRYGate(q, -2.980311484024314, 7);
  sqcRZGate(q, -0.7775067528604197, 7);
  sqcRYGate(q, -0.3388270860724875, 8);
  sqcRZGate(q, 1.372513286292945, 8);
  sqcRYGate(q, -2.994157465117947, 9);
  sqcRZGate(q, 1.5790680400837944, 9);
  sqcRYGate(q, -2.6164165591886936, 10);
  sqcRZGate(q, 2.271460061097488, 10);
  sqcRYGate(q, -3.1228820177538337, 11);
  sqcRZGate(q, 1.5891144943956084, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.03868334329608114, 0);
  sqcRZGate(q, -0.12647993705340352, 0);
  sqcRYGate(q, -3.00283718315848, 1);
  sqcRZGate(q, 1.892059760290768, 1);
  sqcRYGate(q, 3.1331738880323097, 2);
  sqcRZGate(q, -2.070944807839907, 2);
  sqcRYGate(q, 0.0007935450400404775, 3);
  sqcRZGate(q, -2.534396880766059, 3);
  sqcRYGate(q, -0.01864626349958905, 4);
  sqcRZGate(q, 1.0513891790231744, 4);
  sqcRYGate(q, 0.13767450204978182, 5);
  sqcRZGate(q, 2.637197059798058, 5);
  sqcRYGate(q, -2.935991896802283, 6);
  sqcRZGate(q, -1.562922625300958, 6);
  sqcRYGate(q, 0.49602161436848746, 7);
  sqcRZGate(q, -2.2036276484398574, 7);
  sqcRYGate(q, 2.748551020458008, 8);
  sqcRZGate(q, -2.027394640651269, 8);
  sqcRYGate(q, -1.1594674408285115, 9);
  sqcRZGate(q, -2.474813688493223, 9);
  sqcRYGate(q, 0.37144860636142446, 10);
  sqcRZGate(q, -1.7127273417137445, 10);
  sqcRYGate(q, -3.0821926500440515, 11);
  sqcRZGate(q, -2.400564702581099, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.3714208988543684, 0);
  sqcRZGate(q, 1.7366729456895103, 0);
  sqcRYGate(q, 2.4109869169410385, 1);
  sqcRZGate(q, -2.2805841452062503, 1);
  sqcRYGate(q, -0.9962744177886682, 2);
  sqcRZGate(q, -2.5551885365827136, 2);
  sqcRYGate(q, 0.08199539923630983, 3);
  sqcRZGate(q, -2.3268752090055917, 3);
  sqcRYGate(q, -0.1974223841856828, 4);
  sqcRZGate(q, -2.913920945935357, 4);
  sqcRYGate(q, 1.1963061693481376, 5);
  sqcRZGate(q, -1.163100249737912, 5);
  sqcRYGate(q, -2.9386272813160295, 6);
  sqcRZGate(q, -1.240816174243478, 6);
  sqcRYGate(q, 3.0998732375341316, 7);
  sqcRZGate(q, 2.435502374975587, 7);
  sqcRYGate(q, -3.0730306254191664, 8);
  sqcRZGate(q, -1.1975967015593234, 8);
  sqcRYGate(q, -0.6343324526569214, 9);
  sqcRZGate(q, 2.153976100331026, 9);
  sqcRYGate(q, -1.7699297952756539, 10);
  sqcRZGate(q, 3.1242450288116586, 10);
  sqcRYGate(q, 0.04384176095151915, 11);
  sqcRZGate(q, -2.191310577136618, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.752382229547699, 0);
  sqcRZGate(q, -1.7808319333867388, 0);
  sqcRYGate(q, -2.869205796517349, 1);
  sqcRZGate(q, -3.093798091303008, 1);
  sqcRYGate(q, 3.112988105897089, 2);
  sqcRZGate(q, -2.312033023511945, 2);
  sqcRYGate(q, -3.1248107419415057, 3);
  sqcRZGate(q, 0.5930510515064534, 3);
  sqcRYGate(q, 1.7078029111293418, 4);
  sqcRZGate(q, 2.8109742076079183, 4);
  sqcRYGate(q, 1.667965465082917, 5);
  sqcRZGate(q, 0.27791340681156496, 5);
  sqcRYGate(q, 2.82694545028864, 6);
  sqcRZGate(q, -0.5812837738517195, 6);
  sqcRYGate(q, 0.20238989953461123, 7);
  sqcRZGate(q, -0.16597903507665904, 7);
  sqcRYGate(q, 0.3040908161211755, 8);
  sqcRZGate(q, 1.3617676059242678, 8);
  sqcRYGate(q, 0.7868330326178433, 9);
  sqcRZGate(q, 0.2703510587051934, 9);
  sqcRYGate(q, 0.279831898473752, 10);
  sqcRZGate(q, 2.87305372950445, 10);
  sqcRYGate(q, 0.09607133991196459, 11);
  sqcRZGate(q, -1.8457415036270461, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.118020635059904, 0);
  sqcRZGate(q, 1.0063384609352257, 0);
  sqcRYGate(q, -2.1647003206697133, 1);
  sqcRZGate(q, -0.14889339032678173, 1);
  sqcRYGate(q, 0.008260761428209865, 2);
  sqcRZGate(q, 1.5496703148032744, 2);
  sqcRYGate(q, 0.8415790065264267, 3);
  sqcRZGate(q, -2.919668429983978, 3);
  sqcRYGate(q, -1.1853389189172574, 4);
  sqcRZGate(q, -2.5815358578264864, 4);
  sqcRYGate(q, 0.9222565486123502, 5);
  sqcRZGate(q, -1.7323414729968334, 5);
  sqcRYGate(q, 2.183905382085289, 6);
  sqcRZGate(q, -0.33939323052858894, 6);
  sqcRYGate(q, -2.9311760242416307, 7);
  sqcRZGate(q, 0.1046773126319968, 7);
  sqcRYGate(q, -0.40000161491597463, 8);
  sqcRZGate(q, 1.953809828714034, 8);
  sqcRYGate(q, 1.1326536066552437, 9);
  sqcRZGate(q, 1.5340115775065837, 9);
  sqcRYGate(q, 2.688363622435746, 10);
  sqcRZGate(q, 2.32591834285364, 10);
  sqcRYGate(q, 0.11386778720253775, 11);
  sqcRZGate(q, -2.4932610065791994, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -3.0016336328623723, 0);
  sqcRZGate(q, -3.023251040238284, 0);
  sqcRYGate(q, 2.2131356403085443, 1);
  sqcRZGate(q, 2.6277398870667747, 1);
  sqcRYGate(q, -1.9226396694447132, 2);
  sqcRZGate(q, 0.1360219148982422, 2);
  sqcRYGate(q, 0.007344623008498807, 3);
  sqcRZGate(q, -1.8600677906118162, 3);
  sqcRYGate(q, -1.916476301678503, 4);
  sqcRZGate(q, -1.4038569084781174, 4);
  sqcRYGate(q, -0.0235266569951591, 5);
  sqcRZGate(q, -0.08981051688199407, 5);
  sqcRYGate(q, 0.08108586936608025, 6);
  sqcRZGate(q, 1.262000007637833, 6);
  sqcRYGate(q, 2.6005196945629336, 7);
  sqcRZGate(q, -0.4291771289762118, 7);
  sqcRYGate(q, 3.0261382328141986, 8);
  sqcRZGate(q, -2.4633649440858556, 8);
  sqcRYGate(q, 2.8982626468058115, 9);
  sqcRZGate(q, -2.4013817069366885, 9);
  sqcRYGate(q, -2.0731951069309904, 10);
  sqcRZGate(q, -1.3032728446989583, 10);
  sqcRYGate(q, -2.427197051058846, 11);
  sqcRZGate(q, 2.7261625529676374, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -3.1171988094100507, 0);
  sqcRZGate(q, 3.038284479573686, 0);
  sqcRYGate(q, 1.574463601537167, 1);
  sqcRZGate(q, 2.0685462851091168, 1);
  sqcRYGate(q, 3.135816071191288, 2);
  sqcRZGate(q, -0.6139012383995998, 2);
  sqcRYGate(q, 1.828434975404468, 3);
  sqcRZGate(q, 2.722650738419646, 3);
  sqcRYGate(q, 0.00453256771062515, 4);
  sqcRZGate(q, -1.2381014230906944, 4);
  sqcRYGate(q, 0.1648969910405966, 5);
  sqcRZGate(q, 0.22439415913075142, 5);
  sqcRYGate(q, -2.4710579922199827, 6);
  sqcRZGate(q, -2.453177108785065, 6);
  sqcRYGate(q, -2.2164513382273903, 7);
  sqcRZGate(q, 2.917181685060203, 7);
  sqcRYGate(q, 0.41814187929907476, 8);
  sqcRZGate(q, 2.6325865389617245, 8);
  sqcRYGate(q, -3.0965832345997417, 9);
  sqcRZGate(q, 3.139191557336363, 9);
  sqcRYGate(q, 0.0362108632918648, 10);
  sqcRZGate(q, -2.2285407519836777, 10);
  sqcRYGate(q, -0.13429531812722942, 11);
  sqcRZGate(q, 0.48140759880066053, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.5219583060362165, 0);
  sqcRZGate(q, -3.0501976005809057, 0);
  sqcRYGate(q, 2.768251447942399, 1);
  sqcRZGate(q, 2.451488285541559, 1);
  sqcRYGate(q, -1.4307168398572117, 2);
  sqcRZGate(q, 0.7228387445439538, 2);
  sqcRYGate(q, -3.1314833841057483, 3);
  sqcRZGate(q, 3.107295118780128, 3);
  sqcRYGate(q, -1.8473350855790471, 4);
  sqcRZGate(q, 1.747771446770832, 4);
  sqcRYGate(q, -3.1357914307156185, 5);
  sqcRZGate(q, 1.1353185590111954, 5);
  sqcRYGate(q, -0.016491091901169205, 6);
  sqcRZGate(q, 1.8330497213659136, 6);
  sqcRYGate(q, -0.5616227432373592, 7);
  sqcRZGate(q, -3.056938209010194, 7);
  sqcRYGate(q, 0.07486412606217563, 8);
  sqcRZGate(q, -2.7401968770846516, 8);
  sqcRYGate(q, 0.8914034433567506, 9);
  sqcRZGate(q, 2.7948795510013618, 9);
  sqcRYGate(q, 2.1187011443941945, 10);
  sqcRZGate(q, -2.5050704257182805, 10);
  sqcRYGate(q, 2.379434390814772, 11);
  sqcRZGate(q, -0.33693717935741935, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.1491373136609075, 0);
  sqcRZGate(q, -0.14215180676894246, 0);
  sqcRYGate(q, -0.7064607402070404, 1);
  sqcRZGate(q, -2.198365333257386, 1);
  sqcRYGate(q, 2.0581082636745887, 2);
  sqcRZGate(q, 2.700679849560686, 2);
  sqcRYGate(q, -1.898502368508019, 3);
  sqcRZGate(q, -0.3726318725483893, 3);
  sqcRYGate(q, -2.922827555416422, 4);
  sqcRZGate(q, -1.0406662523626886, 4);
  sqcRYGate(q, 2.814065883608501, 5);
  sqcRZGate(q, -1.7029009940274866, 5);
  sqcRYGate(q, 1.5357112327807823, 6);
  sqcRZGate(q, 0.2310192749557567, 6);
  sqcRYGate(q, 0.9521650679264693, 7);
  sqcRZGate(q, 2.4768796222111757, 7);
  sqcRYGate(q, 2.068332096076624, 8);
  sqcRZGate(q, -1.8521441268852052, 8);
  sqcRYGate(q, -2.0039930793705016, 9);
  sqcRZGate(q, 1.3823392838541455, 9);
  sqcRYGate(q, 0.8828594918058074, 10);
  sqcRZGate(q, 0.2707624456968435, 10);
  sqcRYGate(q, 3.0050605290103154, 11);
  sqcRZGate(q, -1.0481522416714792, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.9655758003963141, 0);
  sqcRZGate(q, -1.5193283692217596, 0);
  sqcRYGate(q, 0.22214530356339351, 1);
  sqcRZGate(q, 1.8602439368511223, 1);
  sqcRYGate(q, 0.28636062209620256, 2);
  sqcRZGate(q, 0.04230337734929979, 2);
  sqcRYGate(q, 3.134215929432715, 3);
  sqcRZGate(q, -1.7489737748859193, 3);
  sqcRYGate(q, -0.016053464555498387, 4);
  sqcRZGate(q, -0.8375800327415241, 4);
  sqcRYGate(q, -0.004124535881058929, 5);
  sqcRZGate(q, 2.8586217395260913, 5);
  sqcRYGate(q, 0.010133228686923346, 6);
  sqcRZGate(q, -0.6357286249332061, 6);
  sqcRYGate(q, -0.38034096207463536, 7);
  sqcRZGate(q, 1.3512938970656778, 7);
  sqcRYGate(q, -0.14352284975176488, 8);
  sqcRZGate(q, -1.4871827294061286, 8);
  sqcRYGate(q, 0.13432199228475825, 9);
  sqcRZGate(q, 2.194916503789686, 9);
  sqcRYGate(q, 1.824521118689776, 10);
  sqcRZGate(q, 2.6477766502494755, 10);
  sqcRYGate(q, 0.11711283881112915, 11);
  sqcRZGate(q, 2.930888534799396, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.1666283633915535, 0);
  sqcRZGate(q, -0.4764476325416575, 0);
  sqcRYGate(q, -2.995900754648427, 1);
  sqcRZGate(q, -1.4006968904446913, 1);
  sqcRYGate(q, -1.1937878623928375, 2);
  sqcRZGate(q, 1.1377685007464795, 2);
  sqcRYGate(q, -1.846866885370444, 3);
  sqcRZGate(q, -3.1118643595217037, 3);
  sqcRYGate(q, -0.051955958495836015, 4);
  sqcRZGate(q, -2.6594705217019623, 4);
  sqcRYGate(q, -2.217321083719259, 5);
  sqcRZGate(q, 3.0582450023827783, 5);
  sqcRYGate(q, -2.4143673469868223, 6);
  sqcRZGate(q, -0.21985051437536587, 6);
  sqcRYGate(q, -1.3660760444234148, 7);
  sqcRZGate(q, 2.6957026334333323, 7);
  sqcRYGate(q, 1.6455246234872127, 8);
  sqcRZGate(q, -0.22657688005295107, 8);
  sqcRYGate(q, 3.044453505251915, 9);
  sqcRZGate(q, -2.1007662078347296, 9);
  sqcRYGate(q, 1.5608641881159402, 10);
  sqcRZGate(q, -1.1655874424930994, 10);
  sqcRYGate(q, -0.1174990928979982, 11);
  sqcRZGate(q, -1.3804028750754302, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.002208982037146302, 0);
  sqcRZGate(q, -0.30212368507966303, 0);
  sqcRYGate(q, -2.0589312981196124, 1);
  sqcRZGate(q, 2.2915090833596388, 1);
  sqcRYGate(q, 1.2771808869298766, 2);
  sqcRZGate(q, -1.1907314084196063, 2);
  sqcRYGate(q, 0.015224668034306887, 3);
  sqcRZGate(q, -2.223176790223384, 3);
  sqcRYGate(q, 3.135375693948713, 4);
  sqcRZGate(q, -2.5379893737701646, 4);
  sqcRYGate(q, -0.0008256641018768506, 5);
  sqcRZGate(q, -1.1353810240882911, 5);
  sqcRYGate(q, -1.594617146265235, 6);
  sqcRZGate(q, -2.9081823630863366, 6);
  sqcRYGate(q, 1.8254056699031604, 7);
  sqcRZGate(q, 2.3306016596789867, 7);
  sqcRYGate(q, 1.8780425123726037, 8);
  sqcRZGate(q, 1.036481119773885, 8);
  sqcRYGate(q, 1.5732967597603773, 9);
  sqcRZGate(q, -1.8350918597756816, 9);
  sqcRYGate(q, -0.7718729921263057, 10);
  sqcRZGate(q, -0.5393094638048339, 10);
  sqcRYGate(q, -3.05681437255422, 11);
  sqcRZGate(q, -2.526520166914779, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.9847218792299888, 0);
  sqcRZGate(q, 2.983828933111149, 0);
  sqcRYGate(q, -2.590700331361994, 1);
  sqcRZGate(q, -1.8747702522202383, 1);
  sqcRYGate(q, -1.5303463076171255, 2);
  sqcRZGate(q, 0.23941393515989928, 2);
  sqcRYGate(q, -0.9346207856442758, 3);
  sqcRZGate(q, -2.8452615701484274, 3);
  sqcRYGate(q, -3.1413962307059893, 4);
  sqcRZGate(q, 0.291246927505977, 4);
  sqcRYGate(q, 3.0767968663660286, 5);
  sqcRZGate(q, 2.9416348307888533, 5);
  sqcRYGate(q, -3.0939881536287754, 6);
  sqcRZGate(q, -2.9128171430156677, 6);
  sqcRYGate(q, 0.009298238050679, 7);
  sqcRZGate(q, 0.756339839392955, 7);
  sqcRYGate(q, 3.141081558403639, 8);
  sqcRZGate(q, 1.9743354218722713, 8);
  sqcRYGate(q, 0.07126023626309141, 9);
  sqcRZGate(q, 2.069543900432392, 9);
  sqcRYGate(q, 0.7797481887251958, 10);
  sqcRZGate(q, 1.5132236715948855, 10);
  sqcRYGate(q, 3.1126919265894757, 11);
  sqcRZGate(q, -2.2613905774951615, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.4241777863952567, 0);
  sqcRZGate(q, 1.7781257758534614, 0);
  sqcRYGate(q, 1.5378221831172478, 1);
  sqcRZGate(q, 1.967767646873991, 1);
  sqcRYGate(q, -2.3016924704421133, 2);
  sqcRZGate(q, 2.492729182632129, 2);
  sqcRYGate(q, -3.085777474391816, 3);
  sqcRZGate(q, 0.11659099359385823, 3);
  sqcRYGate(q, -0.003236394527458682, 4);
  sqcRZGate(q, 1.451319396067299, 4);
  sqcRYGate(q, -3.141071577670147, 5);
  sqcRZGate(q, 0.5929092055542737, 5);
  sqcRYGate(q, 1.5960454303385951, 6);
  sqcRZGate(q, -3.0402983996169053, 6);
  sqcRYGate(q, 1.9256429594363322, 7);
  sqcRZGate(q, -2.9191937043266587, 7);
  sqcRYGate(q, -1.0369382910964493, 8);
  sqcRZGate(q, -2.5118140360322374, 8);
  sqcRYGate(q, -0.019964987111824147, 9);
  sqcRZGate(q, 2.8889953353814715, 9);
  sqcRYGate(q, 1.4604043928272528, 10);
  sqcRZGate(q, -2.147655061587308, 10);
  sqcRYGate(q, -0.006963553992404998, 11);
  sqcRZGate(q, 2.161486752368469, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.432571836178428, 0);
  sqcRZGate(q, -2.070137052082932, 0);
  sqcRYGate(q, 0.14215067211055477, 1);
  sqcRZGate(q, 0.77795903587357, 1);
  sqcRYGate(q, 2.7339996085135088, 2);
  sqcRZGate(q, 1.336164652851508, 2);
  sqcRYGate(q, 0.2152590191344137, 3);
  sqcRZGate(q, -0.13333549091243316, 3);
  sqcRYGate(q, 2.3735864923930845, 4);
  sqcRZGate(q, 1.297563247039465, 4);
  sqcRYGate(q, 0.5054927063571638, 5);
  sqcRZGate(q, 1.670529426017287, 5);
  sqcRYGate(q, 3.082076847464004, 6);
  sqcRZGate(q, 1.1480533480428197, 6);
  sqcRYGate(q, 2.1312945033979465, 7);
  sqcRZGate(q, -1.5182297463054912, 7);
  sqcRYGate(q, -1.5917650458814174, 8);
  sqcRZGate(q, -1.9501589549600655, 8);
  sqcRYGate(q, 1.0871183459585545, 9);
  sqcRZGate(q, 1.174827700851763, 9);
  sqcRYGate(q, 2.9495634289622172, 10);
  sqcRZGate(q, -3.107664331069572, 10);
  sqcRYGate(q, 0.029301590748590733, 11);
  sqcRZGate(q, -2.6145843513450604, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.47470624818897555, 0);
  sqcRZGate(q, 0.17124983796432436, 0);
  sqcRYGate(q, 1.677692375737224, 1);
  sqcRZGate(q, -0.1498613335436465, 1);
  sqcRYGate(q, 2.491591554772978, 2);
  sqcRZGate(q, 0.06054125764438457, 2);
  sqcRYGate(q, -3.099957540288313, 3);
  sqcRZGate(q, -2.0177118231572226, 3);
  sqcRYGate(q, -3.052083952601079, 4);
  sqcRZGate(q, -3.0381542372834454, 4);
  sqcRYGate(q, 3.141392175668438, 5);
  sqcRZGate(q, 2.3399966488069004, 5);
  sqcRYGate(q, -0.01178836849225094, 6);
  sqcRZGate(q, 1.374387303120562, 6);
  sqcRYGate(q, -2.79371895302112, 7);
  sqcRZGate(q, 2.871038289298779, 7);
  sqcRYGate(q, 0.8849994293820584, 8);
  sqcRZGate(q, 2.6394697145342736, 8);
  sqcRYGate(q, 1.8434339076982325, 9);
  sqcRZGate(q, 2.259822498975576, 9);
  sqcRYGate(q, 1.5424920509227258, 10);
  sqcRZGate(q, 1.9459852423914752, 10);
  sqcRYGate(q, -0.002661603509932497, 11);
  sqcRZGate(q, -1.117735072964984, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.8173382271852354, 0);
  sqcRZGate(q, -1.5802842102768555, 0);
  sqcRYGate(q, 0.6971347420375089, 1);
  sqcRZGate(q, 0.16948394462603925, 1);
  sqcRYGate(q, -0.06691121914615739, 2);
  sqcRZGate(q, -2.0084537663511033, 2);
  sqcRYGate(q, -1.758482508790978, 3);
  sqcRZGate(q, 0.2335568676672537, 3);
  sqcRYGate(q, 2.8023048444371894, 4);
  sqcRZGate(q, -3.100307237302139, 4);
  sqcRYGate(q, -0.1763004886875343, 5);
  sqcRZGate(q, -2.216920353684527, 5);
  sqcRYGate(q, -0.10298786962644702, 6);
  sqcRZGate(q, -0.7486757324089758, 6);
  sqcRYGate(q, -0.6850601232520946, 7);
  sqcRZGate(q, 0.18428760095155397, 7);
  sqcRYGate(q, 2.3783732131674906, 8);
  sqcRZGate(q, -0.19959065117178817, 8);
  sqcRYGate(q, -2.649114272224171, 9);
  sqcRZGate(q, 2.425809299247926, 9);
  sqcRYGate(q, 2.0115171547479322, 10);
  sqcRZGate(q, -0.13982011130210892, 10);
  sqcRYGate(q, 2.954532923995455, 11);
  sqcRZGate(q, 0.17487722398152436, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.815934527531252, 0);
  sqcRZGate(q, -0.7207288785178984, 0);
  sqcRYGate(q, -1.8768580805916235, 1);
  sqcRZGate(q, -2.909710394409371, 1);
  sqcRYGate(q, 0.5592063933858878, 2);
  sqcRZGate(q, -1.6446085218625603, 2);
  sqcRYGate(q, 3.1411609575785895, 3);
  sqcRZGate(q, 1.471932058243505, 3);
  sqcRYGate(q, -0.09558614712685372, 4);
  sqcRZGate(q, 2.332495363521384, 4);
  sqcRYGate(q, -3.1400376819314544, 5);
  sqcRZGate(q, -2.4903080641151543, 5);
  sqcRYGate(q, -3.1406547117340424, 6);
  sqcRZGate(q, -2.689970799253369, 6);
  sqcRYGate(q, -0.3530683969871359, 7);
  sqcRZGate(q, 0.3615062460751304, 7);
  sqcRYGate(q, -2.7748249458510963, 8);
  sqcRZGate(q, 1.544041860873875, 8);
  sqcRYGate(q, 2.7702727523552086, 9);
  sqcRZGate(q, 1.2176052747186428, 9);
  sqcRYGate(q, 2.3985207051429938, 10);
  sqcRZGate(q, -2.537996840594836, 10);
  sqcRYGate(q, -3.0787384568945404, 11);
  sqcRZGate(q, -2.5281114304035777, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.985614337575511, 0);
  sqcRZGate(q, -2.5360105697135693, 0);
  sqcRYGate(q, 2.9249712492855457, 1);
  sqcRZGate(q, -0.8342700749738192, 1);
  sqcRYGate(q, -2.8317439212332594, 2);
  sqcRZGate(q, -1.1098715215220787, 2);
  sqcRYGate(q, -2.5827068294601325, 3);
  sqcRZGate(q, -1.986836928235564, 3);
  sqcRYGate(q, -1.7564533310749217, 4);
  sqcRZGate(q, 2.8212829814732143, 4);
  sqcRYGate(q, 2.395097137986221, 5);
  sqcRZGate(q, -2.945721919883875, 5);
  sqcRYGate(q, -2.118722012017541, 6);
  sqcRZGate(q, 2.0712335194199314, 6);
  sqcRYGate(q, 1.02969192927533, 7);
  sqcRZGate(q, 1.0288453549437058, 7);
  sqcRYGate(q, -0.05836519516531791, 8);
  sqcRZGate(q, -2.808090088300001, 8);
  sqcRYGate(q, -2.0181660530367176, 9);
  sqcRZGate(q, -2.089526712138559, 9);
  sqcRYGate(q, -1.0146738378094309, 10);
  sqcRZGate(q, 0.4212424471794493, 10);
  sqcRYGate(q, -0.391296630241983, 11);
  sqcRZGate(q, 3.0651593077740995, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.1356562996146581, 0);
  sqcRZGate(q, 0.23773707668960853, 0);
  sqcRYGate(q, 1.440698842414136, 1);
  sqcRZGate(q, 1.1248876813263653, 1);
  sqcRYGate(q, -1.0290338348733024, 2);
  sqcRZGate(q, -0.3107602853304716, 2);
  sqcRYGate(q, -3.135342141442483, 3);
  sqcRZGate(q, -0.20733108057488572, 3);
  sqcRYGate(q, -0.013868719841123145, 4);
  sqcRZGate(q, 0.32419709946699427, 4);
  sqcRYGate(q, 3.1317577331347604, 5);
  sqcRZGate(q, -0.7969486970228059, 5);
  sqcRYGate(q, 0.00014344112768066084, 6);
  sqcRZGate(q, -0.9181032518311889, 6);
  sqcRYGate(q, -0.21604671280627147, 7);
  sqcRZGate(q, -0.7326319298945556, 7);
  sqcRYGate(q, 0.011161510260138563, 8);
  sqcRZGate(q, -1.9780901352243891, 8);
  sqcRYGate(q, 2.483488475249012, 9);
  sqcRZGate(q, 0.09628396588238265, 9);
  sqcRYGate(q, 0.9907519656864068, 10);
  sqcRZGate(q, 2.655395265537796, 10);
  sqcRYGate(q, 0.045452883472160824, 11);
  sqcRZGate(q, 0.32428162187642146, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.22449827645170814, 0);
  sqcRZGate(q, -3.0845566962433564, 0);
  sqcRYGate(q, 1.7607185601092368, 1);
  sqcRZGate(q, -3.0905411191398486, 1);
  sqcRYGate(q, 2.996167033195405, 2);
  sqcRZGate(q, 2.961382900901713, 2);
  sqcRYGate(q, 0.2028262663101841, 3);
  sqcRZGate(q, 2.3588341269949593, 3);
  sqcRYGate(q, 1.9849833701868587, 4);
  sqcRZGate(q, -1.9090314227024425, 4);
  sqcRYGate(q, -2.8766278382855135, 5);
  sqcRZGate(q, -1.8147822782752068, 5);
  sqcRYGate(q, 0.634198537853549, 6);
  sqcRZGate(q, 1.1508714192574487, 6);
  sqcRYGate(q, -0.2097706364624239, 7);
  sqcRZGate(q, -0.7382564739838751, 7);
  sqcRYGate(q, -1.1822633272269307, 8);
  sqcRZGate(q, -1.6066635287728874, 8);
  sqcRYGate(q, 1.346151079967222, 9);
  sqcRZGate(q, 2.1459763502536604, 9);
  sqcRYGate(q, 0.8178593571699126, 10);
  sqcRZGate(q, -0.8063078202448138, 10);
  sqcRYGate(q, -3.0368608945494415, 11);
  sqcRZGate(q, 2.72759518137392, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.0645413403363087, 0);
  sqcRZGate(q, -2.4985003424299776, 0);
  sqcRYGate(q, -1.128005245377322, 1);
  sqcRZGate(q, -2.8036444529583866, 1);
  sqcRYGate(q, -1.6572421960633599, 2);
  sqcRZGate(q, 2.2701349983949233, 2);
  sqcRYGate(q, -0.0125970127624635, 3);
  sqcRZGate(q, -0.5810886015270266, 3);
  sqcRYGate(q, 3.09349777646623, 4);
  sqcRZGate(q, -2.4342113032128627, 4);
  sqcRYGate(q, 0.015309180803134346, 5);
  sqcRZGate(q, -2.8297700068442473, 5);
  sqcRYGate(q, 0.0007330566666926563, 6);
  sqcRZGate(q, 0.9211517690393277, 6);
  sqcRYGate(q, -0.06439995547439825, 7);
  sqcRZGate(q, 2.8087935859768387, 7);
  sqcRYGate(q, 3.1335622152769025, 8);
  sqcRZGate(q, 2.8119929283514553, 8);
  sqcRYGate(q, 1.8303863071213593, 9);
  sqcRZGate(q, -0.5776987725508913, 9);
  sqcRYGate(q, -0.4064852874529566, 10);
  sqcRZGate(q, -2.837121901148506, 10);
  sqcRYGate(q, 1.48585151890215, 11);
  sqcRZGate(q, 2.7363604258397376, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.25761281618330845, 0);
  sqcRZGate(q, -2.095654562933177, 0);
  sqcRYGate(q, 1.1234263509785487, 1);
  sqcRZGate(q, 0.5850070264516186, 1);
  sqcRYGate(q, 1.4815112008990425, 2);
  sqcRZGate(q, -1.527026230404835, 2);
  sqcRYGate(q, -0.4459260278457755, 3);
  sqcRZGate(q, -2.651959314990853, 3);
  sqcRYGate(q, 1.0494413524965003, 4);
  sqcRZGate(q, -2.2850178828251027, 4);
  sqcRYGate(q, -0.021420244895337778, 5);
  sqcRZGate(q, 1.8376300411392883, 5);
  sqcRYGate(q, -2.0239484497956006, 6);
  sqcRZGate(q, 1.7747607469684512, 6);
  sqcRYGate(q, -1.4686651409829, 7);
  sqcRZGate(q, -3.0516651109037944, 7);
  sqcRYGate(q, 0.1573213033024645, 8);
  sqcRZGate(q, 1.7391465304674383, 8);
  sqcRYGate(q, 1.2791508819084714, 9);
  sqcRZGate(q, 2.879776782687471, 9);
  sqcRYGate(q, -1.9933190257661586, 10);
  sqcRZGate(q, 2.063480653019319, 10);
  sqcRYGate(q, -2.3818999158052283, 11);
  sqcRZGate(q, -1.0193866660727737, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.4561487019911297, 0);
  sqcRZGate(q, 1.9016265233133334, 0);
  sqcRYGate(q, 1.3672419059342067, 1);
  sqcRZGate(q, -0.27034142159810354, 1);
  sqcRYGate(q, 0.12864663526446507, 2);
  sqcRZGate(q, 0.695474041592612, 2);
  sqcRYGate(q, -3.1352123385962503, 3);
  sqcRZGate(q, 3.087542966438252, 3);
  sqcRYGate(q, 0.0019293644179067078, 4);
  sqcRZGate(q, 0.0636633669095313, 4);
  sqcRYGate(q, -0.04690557117161986, 5);
  sqcRZGate(q, 1.5082065540866276, 5);
  sqcRYGate(q, -0.022158298374009178, 6);
  sqcRZGate(q, -1.5119836709500631, 6);
  sqcRYGate(q, 3.1402133220411423, 7);
  sqcRZGate(q, -2.85187676479913, 7);
  sqcRYGate(q, 3.0634202963945882, 8);
  sqcRZGate(q, -1.0314539557890876, 8);
  sqcRYGate(q, -0.18992453663463496, 9);
  sqcRZGate(q, 0.5450705559595246, 9);
  sqcRYGate(q, -0.8192677854855279, 10);
  sqcRZGate(q, -1.0602138283133504, 10);
  sqcRYGate(q, -1.5652356084741612, 11);
  sqcRZGate(q, -2.3743648425574237, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.5081508098615837, 0);
  sqcRZGate(q, -0.18156104177421836, 0);
  sqcRYGate(q, 2.6358094558616605, 1);
  sqcRZGate(q, 0.2377523178209655, 1);
  sqcRYGate(q, -1.677111223995385, 2);
  sqcRZGate(q, -0.7357953779739217, 2);
  sqcRYGate(q, -0.06665567979489659, 3);
  sqcRZGate(q, -0.13316974024938233, 3);
  sqcRYGate(q, 0.5147727698435443, 4);
  sqcRZGate(q, 2.7354364604328794, 4);
  sqcRYGate(q, 0.7923163399408667, 5);
  sqcRZGate(q, 1.811682844984431, 5);
  sqcRYGate(q, 2.558679571198494, 6);
  sqcRZGate(q, -1.6918561933167702, 6);
  sqcRYGate(q, 2.9073932998914427, 7);
  sqcRZGate(q, -2.7021002441060626, 7);
  sqcRYGate(q, -2.998419099238598, 8);
  sqcRZGate(q, -0.9008771550704031, 8);
  sqcRYGate(q, 1.3860389311497698, 9);
  sqcRZGate(q, 2.3064608935012743, 9);
  sqcRYGate(q, -2.7603183697463214, 10);
  sqcRZGate(q, 0.2419547591857363, 10);
  sqcRYGate(q, -1.0735462640929923, 11);
  sqcRZGate(q, 1.5237549545572806, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.804009039526248, 0);
  sqcRZGate(q, -1.6765566711915412, 0);
  sqcRYGate(q, -1.4395742441686414, 1);
  sqcRZGate(q, -1.8958795249533131, 1);
  sqcRYGate(q, 0.13533331545202554, 2);
  sqcRZGate(q, -1.9169569605344126, 2);
  sqcRYGate(q, -3.1092920856981174, 3);
  sqcRZGate(q, 3.0581775442789336, 3);
  sqcRYGate(q, -3.1370524623582665, 4);
  sqcRZGate(q, -2.214689474568938, 4);
  sqcRYGate(q, -3.1067079572547303, 5);
  sqcRZGate(q, 0.2308740439655388, 5);
  sqcRYGate(q, 0.012363492246518986, 6);
  sqcRZGate(q, -2.175183087785771, 6);
  sqcRYGate(q, 3.1378569416946775, 7);
  sqcRZGate(q, -1.4413331127842235, 7);
  sqcRYGate(q, -3.0870411442766494, 8);
  sqcRZGate(q, -2.2431339508302734, 8);
  sqcRYGate(q, 3.0772272506766156, 9);
  sqcRZGate(q, -0.940934393019055, 9);
  sqcRYGate(q, 2.3942779046360307, 10);
  sqcRZGate(q, 0.09667790645401553, 10);
  sqcRYGate(q, 1.9216470272674924, 11);
  sqcRZGate(q, 0.468683115049081, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.5299208677932785, 0);
  sqcRZGate(q, -0.44732578912553844, 0);
  sqcRYGate(q, 0.5371171200964628, 1);
  sqcRZGate(q, 1.0742808052180537, 1);
  sqcRYGate(q, -2.472821055471519, 2);
  sqcRZGate(q, 1.014619515703079, 2);
  sqcRYGate(q, 2.142259183074905, 3);
  sqcRZGate(q, 0.31692862261235266, 3);
  sqcRYGate(q, 1.2253017444617198, 4);
  sqcRZGate(q, -2.733474153495497, 4);
  sqcRYGate(q, 1.1577624105908555, 5);
  sqcRZGate(q, 3.121334232506842, 5);
  sqcRYGate(q, 1.8095420211369415, 6);
  sqcRZGate(q, 1.5762545704647342, 6);
  sqcRYGate(q, -1.3591807686898016, 7);
  sqcRZGate(q, 1.9432033795101515, 7);
  sqcRYGate(q, 2.2405027872205294, 8);
  sqcRZGate(q, 2.7694366348986867, 8);
  sqcRYGate(q, -1.979051896279838, 9);
  sqcRZGate(q, -1.86241766350619, 9);
  sqcRYGate(q, -1.8291089552975155, 10);
  sqcRZGate(q, 2.817811282348178, 10);
  sqcRYGate(q, -0.8470178747018684, 11);
  sqcRZGate(q, 0.547427550972551, 11);

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
