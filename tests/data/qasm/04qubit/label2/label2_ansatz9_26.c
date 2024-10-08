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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -2.132872653502462, 0);
  sqcRYGate(q, -0.26485704762180795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.362200513856666, 0);
  sqcRYGate(q, -1.4640701438988852, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4107040402397555, 2);
  sqcRYGate(q, -1.1150771616843835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6481792764885119, 2);
  sqcRYGate(q, 1.8113205410541031, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0712950541763284, 0);
  sqcRYGate(q, 2.0283637884824266, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3162701086926822, 0);
  sqcRYGate(q, 1.0379961689045036, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3657971122313337, 1);
  sqcRYGate(q, -1.4165063886345104, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3290325536541667, 1);
  sqcRYGate(q, 2.4587651483239505, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2250713847961094, 0);
  sqcRYGate(q, -0.5672999363572906, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.001400700821501566, 0);
  sqcRYGate(q, 3.0442221959300415, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0553280405117276, 1);
  sqcRYGate(q, -3.0365551773909782, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.663247227264824, 1);
  sqcRYGate(q, 0.14224296721458712, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7168315731934516, 0);
  sqcRYGate(q, -0.8009917968102707, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2595813893778653, 0);
  sqcRYGate(q, 1.978230626654665, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.442755149743826, 2);
  sqcRYGate(q, 0.40020146812358104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7836749030906236, 2);
  sqcRYGate(q, -2.5043716815217736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7352448208045073, 0);
  sqcRYGate(q, 0.6579110890850526, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.650602163374568, 0);
  sqcRYGate(q, 0.7721336071670396, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1225831304308036, 1);
  sqcRYGate(q, 0.9335446824723252, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8185501638027164, 1);
  sqcRYGate(q, 0.19785259260844754, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.026413384988164, 0);
  sqcRYGate(q, 0.8726713524804134, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.07324266199846861, 0);
  sqcRYGate(q, 2.0013166473642903, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4000056982083846, 1);
  sqcRYGate(q, 0.2234579914319444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1923110985273704, 1);
  sqcRYGate(q, -3.0267224797421988, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.453386971299544, 0);
  sqcRYGate(q, -2.7307971024813535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2320842712677855, 0);
  sqcRYGate(q, 0.10311501036338687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6295895443729065, 2);
  sqcRYGate(q, 0.4349990653762283, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8766365845368682, 2);
  sqcRYGate(q, 1.9853234204446863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8109019324020459, 0);
  sqcRYGate(q, 0.306543512928228, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8741491977405764, 0);
  sqcRYGate(q, 1.4747884820906576, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4892017401211967, 1);
  sqcRYGate(q, 0.16436603315371198, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5020493916654916, 1);
  sqcRYGate(q, -0.39552441707698804, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9627485729189083, 0);
  sqcRYGate(q, 0.26979736577758207, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5553394609878866, 0);
  sqcRYGate(q, 0.7014371516992256, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.029516724504842884, 1);
  sqcRYGate(q, 2.556966086447052, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.418069611449278, 1);
  sqcRYGate(q, -1.2007564887958326, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5666059462413289, 0);
  sqcRYGate(q, 0.5849058730959253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.523150411238568, 0);
  sqcRYGate(q, -0.6364673652295181, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5514291504821962, 2);
  sqcRYGate(q, 2.502426837625131, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6664603114616929, 2);
  sqcRYGate(q, -2.452385398687867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.030741635542654, 0);
  sqcRYGate(q, -1.2841623333131356, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.47389954056018624, 0);
  sqcRYGate(q, -0.028872967069321638, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3412096029763703, 1);
  sqcRYGate(q, 1.2456604273534135, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.05283892772598722, 1);
  sqcRYGate(q, -0.05786329506618528, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.636103054425277, 0);
  sqcRYGate(q, 2.309861808823649, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.056293775781921, 0);
  sqcRYGate(q, -2.4472800453610066, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.795865596793313, 1);
  sqcRYGate(q, 1.0043382999194403, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.598566926509811, 1);
  sqcRYGate(q, 1.5926634504599335, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4994559466212069, 0);
  sqcRYGate(q, 2.676347535237122, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.634715312908248, 0);
  sqcRYGate(q, -1.873027456370688, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.04451807898112695, 2);
  sqcRYGate(q, 0.24025597350332448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5046839046687692, 2);
  sqcRYGate(q, 0.750958984103217, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09958239468707504, 0);
  sqcRYGate(q, 2.9130104831867225, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.267921387974285, 0);
  sqcRYGate(q, -0.1966420918404772, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3735795047618839, 1);
  sqcRYGate(q, 2.39558911552206, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1719833556797674, 1);
  sqcRYGate(q, -1.7617175445052577, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5717087812400394, 0);
  sqcRYGate(q, -2.163142834382871, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.130031476307144, 0);
  sqcRYGate(q, 2.523526186207816, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2807785661729913, 1);
  sqcRYGate(q, 1.0936008328410356, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.893325535341047, 1);
  sqcRYGate(q, -2.8348542308490696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.258996222591784, 0);
  sqcRYGate(q, 1.8182529693046572, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7944214813363795, 0);
  sqcRYGate(q, -2.7541317706174384, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8267766505968703, 2);
  sqcRYGate(q, -3.092636459517433, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0752077391354016, 2);
  sqcRYGate(q, 0.7494955883563699, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6670880339439096, 0);
  sqcRYGate(q, -2.1017274631591967, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9814672367139465, 0);
  sqcRYGate(q, -3.114753019980208, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.49133273912208963, 1);
  sqcRYGate(q, -1.27418608790029, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9956228469402133, 1);
  sqcRYGate(q, -0.9539433641334742, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2419290950716135, 0);
  sqcRYGate(q, 3.0784516955172414, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8309784604736827, 0);
  sqcRYGate(q, -0.26193908314218284, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8427480254970026, 1);
  sqcRYGate(q, -0.4315115437754586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7934820337387837, 1);
  sqcRYGate(q, 0.3082200330152123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.167106905787096, 0);
  sqcRYGate(q, 1.2813813055494594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9114804632244687, 0);
  sqcRYGate(q, -1.0578973757528851, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4421170156947776, 2);
  sqcRYGate(q, 2.6768755127955135, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.12705105343612022, 2);
  sqcRYGate(q, -1.6218661784386659, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6279974706855582, 0);
  sqcRYGate(q, -0.04562313247781358, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9081360913266013, 0);
  sqcRYGate(q, 2.1649734857231597, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6690761771739038, 1);
  sqcRYGate(q, 2.683155901129455, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.241593191588735, 1);
  sqcRYGate(q, 1.484477992001568, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.35316759754565663, 0);
  sqcRYGate(q, 1.7436218236056267, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6086157077934478, 0);
  sqcRYGate(q, 0.8439253125444701, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1817976871827467, 1);
  sqcRYGate(q, 0.004644697184211796, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1598848331851874, 1);
  sqcRYGate(q, 0.30474231359472514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4017959378108977, 0);
  sqcRYGate(q, 0.9967050958973115, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3817297260729852, 0);
  sqcRYGate(q, 3.0254659398581305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7984262943686353, 2);
  sqcRYGate(q, -2.2768820403627616, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.091511672639141, 2);
  sqcRYGate(q, -2.3052169648120775, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8942702030070313, 0);
  sqcRYGate(q, 1.0741466227959606, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.694546084986245, 0);
  sqcRYGate(q, -3.0036211095056937, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6766184332498772, 1);
  sqcRYGate(q, 2.518346685319445, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2026136683386414, 1);
  sqcRYGate(q, -1.6262139163746188, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.368031620200254, 0);
  sqcRYGate(q, 0.892056643355498, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5370008691201011, 0);
  sqcRYGate(q, -3.0776394304211294, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4867359849988575, 1);
  sqcRYGate(q, -1.4320187750217968, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6767149061661337, 1);
  sqcRYGate(q, 3.0263145790350716, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5795849681524866, 0);
  sqcRYGate(q, -1.3596988413275886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0016545963819319, 0);
  sqcRYGate(q, 2.115511333149298, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2664289419488464, 2);
  sqcRYGate(q, 2.859855213586924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.838913037292608, 2);
  sqcRYGate(q, 0.7286324020612759, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.13046854447223932, 0);
  sqcRYGate(q, 0.3155067128147637, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4585811695871964, 0);
  sqcRYGate(q, 0.8369133933137904, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9505454325687734, 1);
  sqcRYGate(q, -3.0823898509025733, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3889465611997687, 1);
  sqcRYGate(q, -1.4873351054544284, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6340867684478546, 0);
  sqcRYGate(q, 1.8398774860326501, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2148386501932493, 0);
  sqcRYGate(q, 1.304479736020837, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.11724279855335151, 1);
  sqcRYGate(q, 1.9705533487035671, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6532919492288576, 1);
  sqcRYGate(q, 2.188753665797017, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0715770426145501, 0);
  sqcRYGate(q, -2.5911473770456475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.054283220089788, 0);
  sqcRYGate(q, -0.3854856778649251, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3081285093312696, 2);
  sqcRYGate(q, -0.36535404907343794, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.60803021589338, 2);
  sqcRYGate(q, 1.793463818382775, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3174096041443146, 0);
  sqcRYGate(q, -2.950828080985539, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3613745682816107, 0);
  sqcRYGate(q, -2.275257688026536, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4100980483846406, 1);
  sqcRYGate(q, 0.4747201519753456, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9090947005340718, 1);
  sqcRYGate(q, -1.3078485129569362, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.307922196978176, 0);
  sqcRYGate(q, 0.6942147853213941, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7761065720376736, 0);
  sqcRYGate(q, -2.1546411303699395, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9422046913481126, 1);
  sqcRYGate(q, -1.2544076911718784, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2394247462403634, 1);
  sqcRYGate(q, -2.1579158863739316, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3396932576314686, 0);
  sqcRYGate(q, -0.8975954442537145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2713187339662317, 0);
  sqcRYGate(q, -1.4420862818969014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7931161186358944, 2);
  sqcRYGate(q, -1.9028728216857136, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4334031562847835, 2);
  sqcRYGate(q, 0.22363747709243023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1550546192100244, 0);
  sqcRYGate(q, -0.2613315172583101, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1666329087323106, 0);
  sqcRYGate(q, 0.7476617367072231, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7013277231939243, 1);
  sqcRYGate(q, 3.125252929417457, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1265448287735222, 1);
  sqcRYGate(q, -2.6339747811954197, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9404402678076251, 0);
  sqcRYGate(q, -1.4825463475625242, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.278412569839662, 0);
  sqcRYGate(q, -0.48028907195855824, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9665477439224324, 1);
  sqcRYGate(q, -1.3549002875904366, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.24414992335125116, 1);
  sqcRYGate(q, 2.9466822260677996, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5401180292717385, 0);
  sqcRYGate(q, 2.9470715606453064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6180217187432769, 0);
  sqcRYGate(q, -0.38572725899573973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.316391669984326, 2);
  sqcRYGate(q, 0.5538561047067742, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.711220108255632, 2);
  sqcRYGate(q, -0.43204656810139186, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7847226569801766, 0);
  sqcRYGate(q, 1.1966216364649742, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7618610681949192, 0);
  sqcRYGate(q, -3.109571083152851, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6566185979516987, 1);
  sqcRYGate(q, 2.5101998523154703, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.548072169877681, 1);
  sqcRYGate(q, -0.7065516034739778, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.338669938738686, 0);
  sqcRYGate(q, -0.7993962417837442, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8192875227317415, 0);
  sqcRYGate(q, 2.543898503165702, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2022105179714914, 1);
  sqcRYGate(q, -1.6984221518316625, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4092568251102153, 1);
  sqcRYGate(q, -2.793249636738338, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3308309248023276, 0);
  sqcRYGate(q, 2.5190521616448733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8634219042771296, 0);
  sqcRYGate(q, -0.7643948234808295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4772481924712082, 2);
  sqcRYGate(q, -1.440253594348381, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.16231240575347808, 2);
  sqcRYGate(q, -0.3093788023092836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1862436439305917, 0);
  sqcRYGate(q, 1.7082684130959738, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0529451921735233, 0);
  sqcRYGate(q, 1.4589065794622522, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8555923358585424, 1);
  sqcRYGate(q, -0.635553978071688, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6654020486186516, 1);
  sqcRYGate(q, -0.9345683072048665, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.026772318554265873, 0);
  sqcRYGate(q, -2.258347093459359, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0019919521356178, 0);
  sqcRYGate(q, 0.6671257351840634, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7786234976579807, 1);
  sqcRYGate(q, -0.4380161940161935, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4345973080001269, 1);
  sqcRYGate(q, 0.8756300925550526, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0687048269376143, 0);
  sqcRYGate(q, 0.41674013592285003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6698828849654517, 0);
  sqcRYGate(q, -2.7546159706968854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4757707133689093, 2);
  sqcRYGate(q, -1.5847371404155624, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.354416693584008, 2);
  sqcRYGate(q, 1.6300120117271781, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5438627775467246, 0);
  sqcRYGate(q, 0.7925038317523141, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9787375949168307, 0);
  sqcRYGate(q, -0.16114776543952747, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0564418381607363, 1);
  sqcRYGate(q, 0.18623454707356535, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1453221005036687, 1);
  sqcRYGate(q, 0.9365059775914979, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9273725493253329, 0);
  sqcRYGate(q, -1.394928577828984, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.32013191288924947, 0);
  sqcRYGate(q, 1.238395853845141, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6809134172065154, 1);
  sqcRYGate(q, 3.111583730462237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.784112350383295, 1);
  sqcRYGate(q, 1.4679555339120869, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3642274078253174, 0);
  sqcRYGate(q, -1.6747040832909343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2389249403951081, 0);
  sqcRYGate(q, 1.8702270643335765, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.071967072374555, 2);
  sqcRYGate(q, -0.4131386856655004, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2789559733001445, 2);
  sqcRYGate(q, 1.7401550437031759, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5065501549424276, 0);
  sqcRYGate(q, 0.13593829265379934, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6295159985242815, 0);
  sqcRYGate(q, 0.1436768981165093, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.182845632929813, 1);
  sqcRYGate(q, -0.5062791484483091, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.991923439818316, 1);
  sqcRYGate(q, 0.5062101350526236, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6233297249264496, 0);
  sqcRYGate(q, -1.1395421576210063, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6250544353896603, 0);
  sqcRYGate(q, 0.12068061241330952, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8871403937025191, 1);
  sqcRYGate(q, -0.21352294426219487, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2455082293091735, 1);
  sqcRYGate(q, -1.983147168719019, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8092989210853423, 0);
  sqcRYGate(q, -2.995122699152865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.39834733606943, 0);
  sqcRYGate(q, 1.012080144510234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6419114845450045, 2);
  sqcRYGate(q, -0.30635476574743414, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.567790718499543, 2);
  sqcRYGate(q, 1.2231651150431075, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.870066311008645, 0);
  sqcRYGate(q, 0.031095650658697373, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.689345419698412, 0);
  sqcRYGate(q, 2.4159832889910082, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.924055268517435, 1);
  sqcRYGate(q, 2.8059380766349067, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8818067533976193, 1);
  sqcRYGate(q, 0.9939939228754229, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.20261472109873147, 0);
  sqcRYGate(q, 0.8187165847296431, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.32802961161772354, 0);
  sqcRYGate(q, -2.9586951260177643, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7059414019609154, 1);
  sqcRYGate(q, -0.5380790438013675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8475722997917883, 1);
  sqcRYGate(q, 0.49770884590702297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7782018717392134, 0);
  sqcRYGate(q, 1.1712249505696677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0800434042362106, 0);
  sqcRYGate(q, 1.3985491036537119, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.016830169208207197, 2);
  sqcRYGate(q, 1.2936608843867248, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0895828756891195, 2);
  sqcRYGate(q, -2.152999013157718, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.343536705527973, 0);
  sqcRYGate(q, -0.2820275065460932, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3785450362240135, 0);
  sqcRYGate(q, -2.7648158682028807, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.371290113747395, 1);
  sqcRYGate(q, 2.2931436320598038, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6218195753710978, 1);
  sqcRYGate(q, -1.152533214283575, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4578796425017853, 0);
  sqcRYGate(q, 1.624494454774263, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3025940336139679, 0);
  sqcRYGate(q, -1.6534676931825132, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4729962609648182, 1);
  sqcRYGate(q, -0.5582335910580368, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0415062239687853, 1);
  sqcRYGate(q, 2.8531701641012903, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7543152411731078, 0);
  sqcRYGate(q, 0.4320802312887803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3765772026936522, 0);
  sqcRYGate(q, -1.475749772321354, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7614865633913037, 2);
  sqcRYGate(q, -0.3143952959632097, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4746810282355582, 2);
  sqcRYGate(q, 0.3502886948976931, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4054372689101138, 0);
  sqcRYGate(q, 0.7898570879332691, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8984168435204086, 0);
  sqcRYGate(q, 0.7456742955906258, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2303895741094708, 1);
  sqcRYGate(q, -0.21267211717034837, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0733023465659333, 1);
  sqcRYGate(q, 0.9723736775532457, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7216034438257104, 0);
  sqcRYGate(q, 2.023694351653864, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8845992852238993, 0);
  sqcRYGate(q, -0.9482390546099442, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.31115385672986395, 1);
  sqcRYGate(q, 1.3508590035480381, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3859188849088664, 1);
  sqcRYGate(q, -3.0784937840534052, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.135590384938411, 0);
  sqcRYGate(q, -0.3195204652555093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7215071682906231, 0);
  sqcRYGate(q, -2.0444390225170923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.40765325733373636, 2);
  sqcRYGate(q, -2.805991292735827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4895712782907253, 2);
  sqcRYGate(q, 1.440849370060489, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9396586830218263, 0);
  sqcRYGate(q, -1.9927730382087088, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.10851568311243, 0);
  sqcRYGate(q, 1.8204320856389848, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2219017445646545, 1);
  sqcRYGate(q, 0.6483672784841314, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3218159507385385, 1);
  sqcRYGate(q, 1.5207767523209643, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0672717045931241, 0);
  sqcRYGate(q, 0.1550014569161624, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.187898502376203, 0);
  sqcRYGate(q, 1.841361433997232, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8710588378379827, 1);
  sqcRYGate(q, 2.4111189997100033, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4579218697154649, 1);
  sqcRYGate(q, -0.13722475316535565, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1535187603653743, 0);
  sqcRYGate(q, 0.8575410027335311, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1403035676043127, 0);
  sqcRYGate(q, 0.1585508926219957, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5529816095026385, 2);
  sqcRYGate(q, -1.558302432430742, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7008080009833302, 2);
  sqcRYGate(q, -2.3776963099584347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.176082560335405, 0);
  sqcRYGate(q, 2.4206860650268944, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.09653253091544389, 0);
  sqcRYGate(q, 2.705747419526547, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0459607123147006, 1);
  sqcRYGate(q, 0.45231329222045286, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1341230123395871, 1);
  sqcRYGate(q, -0.6429685183812168, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.410090353460828, 0);
  sqcRYGate(q, 1.618903865477606, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5692871243625484, 0);
  sqcRYGate(q, -1.9618795020545812, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.020984359673409406, 1);
  sqcRYGate(q, -0.12515492836326228, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3153401665707883, 1);
  sqcRYGate(q, -0.015464670458664289, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.15181507420881876, 0);
  sqcRYGate(q, 1.2258897062530345, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.48112945690914705, 0);
  sqcRYGate(q, -2.5417535142208787, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3204728654473321, 2);
  sqcRYGate(q, 1.560352443515026, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.769443516823268, 2);
  sqcRYGate(q, 0.07093143669707204, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1206003812472285, 0);
  sqcRYGate(q, 0.21581840201559022, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8565458314209302, 0);
  sqcRYGate(q, 1.9806972523985695, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8783120885781277, 1);
  sqcRYGate(q, -2.294185381866928, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.533626171862675, 1);
  sqcRYGate(q, 0.7633273779326295, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2274869403984474, 0);
  sqcRYGate(q, -1.620789926228288, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9902822555784465, 0);
  sqcRYGate(q, -0.537513617367458, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.129249617245211, 1);
  sqcRYGate(q, 0.013531750331264192, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.881964148990627, 1);
  sqcRYGate(q, -2.3633484489852186, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4151446895541383, 0);
  sqcRYGate(q, -2.6202400803306602, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.016569225443630868, 0);
  sqcRYGate(q, -1.5710530987604059, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5583217710298793, 2);
  sqcRYGate(q, 0.06514135897571993, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2581776942512835, 2);
  sqcRYGate(q, -2.5601322917108122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.803415515996589, 0);
  sqcRYGate(q, -0.16477213446832484, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.75518763996525, 0);
  sqcRYGate(q, -1.3059869679464375, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.32282162621960175, 1);
  sqcRYGate(q, -1.366127894118506, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.14520449878739417, 1);
  sqcRYGate(q, 2.400651607265291, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9200699684929994, 0);
  sqcRYGate(q, 2.881404010904986, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.336428591301094, 0);
  sqcRYGate(q, -1.6867762674532918, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1985333130700182, 1);
  sqcRYGate(q, 1.491474395983495, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4524539228479707, 1);
  sqcRYGate(q, 2.0306600707787883, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.972051613639163, 0);
  sqcRYGate(q, -1.1780115555112238, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5703728734825797, 0);
  sqcRYGate(q, 0.6760226756227699, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.31775482055184234, 2);
  sqcRYGate(q, -2.628554101329159, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5308962536712406, 2);
  sqcRYGate(q, -2.3343414788767145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3739192892378973, 0);
  sqcRYGate(q, -2.368862818719313, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5791127905863165, 0);
  sqcRYGate(q, -2.8179718266194627, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9585336011427072, 1);
  sqcRYGate(q, 2.4447155583372835, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3942101566833007, 1);
  sqcRYGate(q, -0.9580086820288094, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5937599957431283, 0);
  sqcRYGate(q, -1.5198332594079667, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4063070395468183, 0);
  sqcRYGate(q, -2.7203142118896566, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6739595166215567, 1);
  sqcRYGate(q, 3.1214147615550454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0635800315453518, 1);
  sqcRYGate(q, 2.07067187659152, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.20399265552181234, 0);
  sqcRYGate(q, 3.1188633809606756, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1078491197213687, 0);
  sqcRYGate(q, 0.08697390461041392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.06437437311342897, 2);
  sqcRYGate(q, -0.13568807054430362, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9027803384692178, 2);
  sqcRYGate(q, 1.8927079204351323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4207930040675647, 0);
  sqcRYGate(q, -1.5608407708413727, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0840483950995106, 0);
  sqcRYGate(q, 1.6087872969296892, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8353115881519635, 1);
  sqcRYGate(q, 2.836962488689931, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3764781462674873, 1);
  sqcRYGate(q, 2.89988429268518, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.107339352736745, 0);
  sqcRYGate(q, -0.7731236594814868, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8169880191227019, 0);
  sqcRYGate(q, 1.8986321124578884, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2434963017400391, 1);
  sqcRYGate(q, 1.6367579096205178, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3323110064298773, 1);
  sqcRYGate(q, -0.33484071325271164, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7289962771858894, 0);
  sqcRYGate(q, 1.9661811069355224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.009833386476287, 0);
  sqcRYGate(q, 0.7362076609488879, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4703040710751658, 2);
  sqcRYGate(q, 2.5850614021232134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.142663258834962, 2);
  sqcRYGate(q, -2.852964733687972, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6195247265307213, 0);
  sqcRYGate(q, 2.882184105046995, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.286672438246845, 0);
  sqcRYGate(q, -1.3060712730846067, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6015401664423505, 1);
  sqcRYGate(q, -2.2164796411199674, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.17957669970246298, 1);
  sqcRYGate(q, 1.6297147748676393, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.48953097627335, 0);
  sqcRYGate(q, -1.8452255730280838, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0716940925455893, 0);
  sqcRYGate(q, -0.4588176471068577, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3999833209914855, 1);
  sqcRYGate(q, -2.3767499259835505, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5300517041301185, 1);
  sqcRYGate(q, 0.4560702967940289, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.474537677430008, 0);
  sqcRYGate(q, 1.236264562274008, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8663014369015323, 0);
  sqcRYGate(q, 1.6621243183055054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.59007534013693, 2);
  sqcRYGate(q, 0.362656848410106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.937525844431713, 2);
  sqcRYGate(q, -3.060457952885923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2087631726182533, 0);
  sqcRYGate(q, -0.7964793245996996, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.991189042635832, 0);
  sqcRYGate(q, 2.39220987264793, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6144524602770818, 1);
  sqcRYGate(q, 0.233524759951457, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.379956302906362, 1);
  sqcRYGate(q, -1.346225902876906, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8618526563652593, 0);
  sqcRYGate(q, -0.34103358466437417, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.28774068916032824, 0);
  sqcRYGate(q, -1.287180377625317, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5768235145646843, 1);
  sqcRYGate(q, -0.8684416422524808, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5918101780542147, 1);
  sqcRYGate(q, -0.08862830917592479, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.721218213975817, 0);
  sqcRYGate(q, -3.1056849525173025, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.840019975691063, 0);
  sqcRYGate(q, -1.4507427334073564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5502979676350637, 2);
  sqcRYGate(q, -0.8392276796532947, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7998014623828442, 2);
  sqcRYGate(q, -0.6045958774479088, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.502523321839093, 0);
  sqcRYGate(q, 1.6207051967364328, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.734661471631943, 0);
  sqcRYGate(q, -1.6893026914509708, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.09028381378314626, 1);
  sqcRYGate(q, -0.16413690117271784, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5361317861148809, 1);
  sqcRYGate(q, -0.12833437149056282, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2555797208851166, 0);
  sqcRYGate(q, -3.0581218101785237, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.23166103307224198, 0);
  sqcRYGate(q, 0.9267851145169832, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.078245839512442, 1);
  sqcRYGate(q, 0.19296755543045763, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2522596054498851, 1);
  sqcRYGate(q, -0.40953920149789386, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2020054850863826, 0);
  sqcRYGate(q, 1.7549930159190916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8595981435154219, 0);
  sqcRYGate(q, -1.4804770604645183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2685216393303502, 2);
  sqcRYGate(q, 2.3186441513016463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8668174569790414, 2);
  sqcRYGate(q, -0.5794647467833851, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.625082330042348, 0);
  sqcRYGate(q, -1.4225105668944016, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9233499293439511, 0);
  sqcRYGate(q, -0.7986366873911814, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.308995858750524, 1);
  sqcRYGate(q, -0.46101255916449563, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.335310233843167, 1);
  sqcRYGate(q, 1.3717804939302523, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4249573553523387, 0);
  sqcRYGate(q, 2.187737038208028, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2391094038223427, 0);
  sqcRYGate(q, 0.3586718257232979, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3662562360096153, 1);
  sqcRYGate(q, -0.31829928715574507, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0348952363421065, 1);
  sqcRYGate(q, -0.7433753429663783, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.42800213257739816, 0);
  sqcRYGate(q, 1.4097956542089827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7973074130911475, 0);
  sqcRYGate(q, 0.6919238004246745, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9840475659718326, 2);
  sqcRYGate(q, 1.0887093533564822, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17621369044265628, 2);
  sqcRYGate(q, 1.4146943757035582, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3103172003326966, 0);
  sqcRYGate(q, -2.7283010855851613, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.244260144202757, 0);
  sqcRYGate(q, 0.2642830608461986, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.71674873587876, 1);
  sqcRYGate(q, -0.6767476068660127, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1072271421905944, 1);
  sqcRYGate(q, 2.0376308216389787, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8855147967456833, 0);
  sqcRYGate(q, 0.20275382072970416, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1215173003688843, 0);
  sqcRYGate(q, -2.48905637134579, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0252573987577396, 1);
  sqcRYGate(q, -2.5912493631085187, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4827182954069795, 1);
  sqcRYGate(q, -1.1414402278995202, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9172913570206624, 0);
  sqcRYGate(q, -1.4317768536480928, 1);
  sqcRYGate(q, 0.22960845754007586, 2);
  sqcRYGate(q, 1.7862588430514572, 3);

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
