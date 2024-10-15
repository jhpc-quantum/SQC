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

  sqcRYGate(q, -0.029200722597373024, 0);
  sqcRZGate(q, 1.6673613680574348, 0);
  sqcRYGate(q, -2.7915787421800884, 1);
  sqcRZGate(q, -2.204546695355489, 1);
  sqcRYGate(q, 1.443207261227184, 2);
  sqcRZGate(q, 1.8996064406349502, 2);
  sqcRYGate(q, -0.6723345242702263, 3);
  sqcRZGate(q, -0.3441630830710176, 3);
  sqcRYGate(q, 2.4275461103854328, 4);
  sqcRZGate(q, -0.1767083614711176, 4);
  sqcRYGate(q, 2.2825498953601544, 5);
  sqcRZGate(q, -1.806638178865527, 5);
  sqcRYGate(q, 0.013168012165310222, 6);
  sqcRZGate(q, -2.7415756158037614, 6);
  sqcRYGate(q, 0.07789972408626289, 7);
  sqcRZGate(q, -0.7892338871944401, 7);
  sqcRYGate(q, 1.5219998523991594, 8);
  sqcRZGate(q, -1.2249426314884955, 8);
  sqcRYGate(q, -1.2722615076132318, 9);
  sqcRZGate(q, -2.941333593979664, 9);
  sqcRYGate(q, 3.0548638959703975, 10);
  sqcRZGate(q, 1.59191069243157, 10);
  sqcRYGate(q, -0.057602172610607454, 11);
  sqcRZGate(q, -2.6375058562819236, 11);
  sqcRYGate(q, 0.5998491975271127, 12);
  sqcRZGate(q, -1.525858084086038, 12);
  sqcRYGate(q, 0.9100886779879147, 13);
  sqcRZGate(q, 1.8706737144918302, 13);
  sqcRYGate(q, -0.7948667504544726, 14);
  sqcRZGate(q, -2.1330314027632657, 14);
  sqcRYGate(q, -0.019542941888849974, 15);
  sqcRZGate(q, -2.153730712083763, 15);
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
  sqcRYGate(q, -3.136784390779031, 0);
  sqcRZGate(q, -0.7002594458180736, 0);
  sqcRYGate(q, 0.006734178522225601, 1);
  sqcRZGate(q, 2.2006895297627347, 1);
  sqcRYGate(q, 2.944991199213333, 2);
  sqcRZGate(q, 1.8753459877303562, 2);
  sqcRYGate(q, 3.1106108509297004, 3);
  sqcRZGate(q, -0.3223173616971483, 3);
  sqcRYGate(q, 3.1212589964238466, 4);
  sqcRZGate(q, -2.0191235429983303, 4);
  sqcRYGate(q, 2.3917841353066076, 5);
  sqcRZGate(q, -2.068565623965232, 5);
  sqcRYGate(q, -1.405897566700148, 6);
  sqcRZGate(q, -1.9555779610796913, 6);
  sqcRYGate(q, -1.6080709263858455, 7);
  sqcRZGate(q, 2.7044966759383615, 7);
  sqcRYGate(q, -1.6509555234820215, 8);
  sqcRZGate(q, 1.5378302751578232, 8);
  sqcRYGate(q, 1.6359318931054272, 9);
  sqcRZGate(q, 0.7089829537656672, 9);
  sqcRYGate(q, 2.3251070054237415, 10);
  sqcRZGate(q, -0.10446640645750627, 10);
  sqcRYGate(q, 0.024118491807372952, 11);
  sqcRZGate(q, -0.40686224274693206, 11);
  sqcRYGate(q, -2.9786590963459614, 12);
  sqcRZGate(q, -1.3857137067960004, 12);
  sqcRYGate(q, 0.2782311235945851, 13);
  sqcRZGate(q, -1.5580630463972793, 13);
  sqcRYGate(q, -0.2958923134184945, 14);
  sqcRZGate(q, 1.7802399908811373, 14);
  sqcRYGate(q, -3.1387976537763445, 15);
  sqcRZGate(q, -1.9015812826263747, 15);
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
  sqcRYGate(q, -2.922169255620624, 0);
  sqcRZGate(q, -0.06975379421364279, 0);
  sqcRYGate(q, -0.36696670391684766, 1);
  sqcRZGate(q, -2.3221873425601185, 1);
  sqcRYGate(q, -1.725464246150497, 2);
  sqcRZGate(q, 0.9036111326731956, 2);
  sqcRYGate(q, 0.8199013562723891, 3);
  sqcRZGate(q, -2.5383381993607004, 3);
  sqcRYGate(q, -1.3313836467367524, 4);
  sqcRZGate(q, 3.0580475609166164, 4);
  sqcRYGate(q, -1.5126811992399185, 5);
  sqcRZGate(q, 1.648837937906559, 5);
  sqcRYGate(q, -3.11742926173619, 6);
  sqcRZGate(q, 1.4565571960711976, 6);
  sqcRYGate(q, 0.008977262428625656, 7);
  sqcRZGate(q, -2.4852350990383525, 7);
  sqcRYGate(q, -3.1368260380483766, 8);
  sqcRZGate(q, -0.061586597988715595, 8);
  sqcRYGate(q, -2.3104340069601808, 9);
  sqcRZGate(q, 2.1427084521689075, 9);
  sqcRYGate(q, -2.9470037119724606, 10);
  sqcRZGate(q, -3.0117255513534635, 10);
  sqcRYGate(q, -0.20914357474857273, 11);
  sqcRZGate(q, -1.1458400924196108, 11);
  sqcRYGate(q, 0.6305410768427128, 12);
  sqcRZGate(q, -1.1451989616461127, 12);
  sqcRYGate(q, -0.8288692230720294, 13);
  sqcRZGate(q, -0.1114951941294482, 13);
  sqcRYGate(q, 0.8155889608626605, 14);
  sqcRZGate(q, -1.7211774355065297, 14);
  sqcRYGate(q, -3.132006644658391, 15);
  sqcRZGate(q, 1.7904674016390185, 15);
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
  sqcRYGate(q, 3.0163534545857518, 0);
  sqcRZGate(q, 2.1299960651575063, 0);
  sqcRYGate(q, 0.015425818032052637, 1);
  sqcRZGate(q, 2.877761564111437, 1);
  sqcRYGate(q, -3.097902766687366, 2);
  sqcRZGate(q, 2.4543968272441297, 2);
  sqcRYGate(q, -1.5610335539726528, 3);
  sqcRZGate(q, 0.08174367153886195, 3);
  sqcRYGate(q, 2.8557537941944275, 4);
  sqcRZGate(q, 1.5421075674258644, 4);
  sqcRYGate(q, 1.6217373498678604, 5);
  sqcRZGate(q, -2.4005624945961213, 5);
  sqcRYGate(q, -2.1073414769116767, 6);
  sqcRZGate(q, 1.919429600481621, 6);
  sqcRYGate(q, 0.4100599376898328, 7);
  sqcRZGate(q, -1.6992635500917705, 7);
  sqcRYGate(q, 1.0473336551554944, 8);
  sqcRZGate(q, 1.5333723723556991, 8);
  sqcRYGate(q, 3.04446834964644, 9);
  sqcRZGate(q, 1.3161927641617013, 9);
  sqcRYGate(q, 1.0804037368840262, 10);
  sqcRZGate(q, 2.7798746818974664, 10);
  sqcRYGate(q, 1.517226012492433, 11);
  sqcRZGate(q, -0.04728905198420108, 11);
  sqcRYGate(q, -1.23130058311458, 12);
  sqcRZGate(q, 0.9332563208766763, 12);
  sqcRYGate(q, 1.9842883323873641, 13);
  sqcRZGate(q, -0.6157903528894337, 13);
  sqcRYGate(q, 1.4260414239779724, 14);
  sqcRZGate(q, -1.0192474034985306, 14);
  sqcRYGate(q, 3.1148832665286115, 15);
  sqcRZGate(q, 2.242142955056301, 15);
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
  sqcRYGate(q, 2.5544140756302514, 0);
  sqcRZGate(q, -2.51406132955997, 0);
  sqcRYGate(q, 3.1405899349290514, 1);
  sqcRZGate(q, 1.0153892881125295, 1);
  sqcRYGate(q, -3.115547599899971, 2);
  sqcRZGate(q, -0.767192831996338, 2);
  sqcRYGate(q, -1.8895087122738339, 3);
  sqcRZGate(q, 2.8256913264361834, 3);
  sqcRYGate(q, 1.7216548854381024, 4);
  sqcRZGate(q, 1.4667159799454375, 4);
  sqcRYGate(q, -0.7496925265209713, 5);
  sqcRZGate(q, -0.22575861866706678, 5);
  sqcRYGate(q, 0.012642168554843026, 6);
  sqcRZGate(q, 1.4143779815117066, 6);
  sqcRYGate(q, -0.09829793504504192, 7);
  sqcRZGate(q, -0.8174392742454618, 7);
  sqcRYGate(q, 3.1408353900988986, 8);
  sqcRZGate(q, 0.020946544215812067, 8);
  sqcRYGate(q, 3.1327887715394866, 9);
  sqcRZGate(q, 3.1241063339143196, 9);
  sqcRYGate(q, 1.627806479677275, 10);
  sqcRZGate(q, 0.6072836094165717, 10);
  sqcRYGate(q, -2.947429534509238, 11);
  sqcRZGate(q, 3.1041879719776673, 11);
  sqcRYGate(q, -0.15689904026697055, 12);
  sqcRZGate(q, -1.8822422043081941, 12);
  sqcRYGate(q, 0.005159798772592872, 13);
  sqcRZGate(q, 3.0955838878322277, 13);
  sqcRYGate(q, 0.00905728822544059, 14);
  sqcRZGate(q, -0.8242232730169898, 14);
  sqcRYGate(q, -1.538257850925521, 15);
  sqcRZGate(q, 1.6240953255601773, 15);
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
  sqcRYGate(q, 0.6417688368983674, 0);
  sqcRZGate(q, 3.0520511899407934, 0);
  sqcRYGate(q, 1.2670040338929554, 1);
  sqcRZGate(q, 2.865584280380564, 1);
  sqcRYGate(q, 3.1259413147363686, 2);
  sqcRZGate(q, 0.30235631987940076, 2);
  sqcRYGate(q, 1.5960536576678697, 3);
  sqcRZGate(q, -2.7717759941361644, 3);
  sqcRYGate(q, 0.11740235408847877, 4);
  sqcRZGate(q, 0.10014932406462139, 4);
  sqcRYGate(q, -1.388769437263769, 5);
  sqcRZGate(q, 3.116473566286248, 5);
  sqcRYGate(q, 1.5443929028012071, 6);
  sqcRZGate(q, 1.5642586961150258, 6);
  sqcRYGate(q, -0.24629897831285866, 7);
  sqcRZGate(q, -1.5577782459711138, 7);
  sqcRYGate(q, 0.2945774423573777, 8);
  sqcRZGate(q, -1.7960529009269024, 8);
  sqcRYGate(q, -3.12912574887386, 9);
  sqcRZGate(q, 0.7323700089315673, 9);
  sqcRYGate(q, 2.6899371417296964, 10);
  sqcRZGate(q, -1.324583062062577, 10);
  sqcRYGate(q, 1.5481317040993137, 11);
  sqcRZGate(q, -2.965665515096767, 11);
  sqcRYGate(q, 0.2277166609075503, 12);
  sqcRZGate(q, 1.4734917533282608, 12);
  sqcRYGate(q, -3.116425842230069, 13);
  sqcRZGate(q, 0.9807122805582473, 13);
  sqcRYGate(q, 1.6073920839193847, 14);
  sqcRZGate(q, 0.004718128104058545, 14);
  sqcRYGate(q, 3.0270231359175295, 15);
  sqcRZGate(q, -1.443901371605162, 15);
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
  sqcRYGate(q, 1.9444809268915089, 0);
  sqcRZGate(q, -0.307735953265138, 0);
  sqcRYGate(q, -1.118006864977045, 1);
  sqcRZGate(q, 2.966520395242074, 1);
  sqcRYGate(q, -0.5006539014095711, 2);
  sqcRZGate(q, 0.1412382812758956, 2);
  sqcRYGate(q, 3.131023139356555, 3);
  sqcRZGate(q, 2.7683493544411943, 3);
  sqcRYGate(q, -1.7252754373951777, 4);
  sqcRZGate(q, -2.244996067792414, 4);
  sqcRYGate(q, -1.5170172125040187, 5);
  sqcRZGate(q, -1.5439735519189801, 5);
  sqcRYGate(q, 3.123686514686873, 6);
  sqcRZGate(q, -3.130893283393413, 6);
  sqcRYGate(q, -3.136617442271761, 7);
  sqcRZGate(q, 0.057921410414219394, 7);
  sqcRYGate(q, -3.1182186115160033, 8);
  sqcRZGate(q, -2.309142869641133, 8);
  sqcRYGate(q, 3.1145422385352193, 9);
  sqcRZGate(q, 0.7840850526473, 9);
  sqcRYGate(q, 1.5218372716971063, 10);
  sqcRZGate(q, 1.52062909807427, 10);
  sqcRYGate(q, -2.965534514179647, 11);
  sqcRZGate(q, 0.1327083743755277, 11);
  sqcRYGate(q, 3.135869309146303, 12);
  sqcRZGate(q, -2.0299301845454134, 12);
  sqcRYGate(q, 0.167255412243236, 13);
  sqcRZGate(q, -0.49368835236373787, 13);
  sqcRYGate(q, -2.950313670565809, 14);
  sqcRZGate(q, 2.5669398817681133, 14);
  sqcRYGate(q, -1.1709299811851108, 15);
  sqcRZGate(q, 1.617880808839154, 15);
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
  sqcRYGate(q, -0.6654254271416322, 0);
  sqcRZGate(q, -1.4494037101708965, 0);
  sqcRYGate(q, -2.442981774707649, 1);
  sqcRZGate(q, -1.6671130618267131, 1);
  sqcRYGate(q, 0.20131729746269644, 2);
  sqcRZGate(q, 2.9166618902864205, 2);
  sqcRYGate(q, 3.130276698988545, 3);
  sqcRZGate(q, -0.1961410244777282, 3);
  sqcRYGate(q, 0.006582470355726677, 4);
  sqcRZGate(q, -2.5055830823612983, 4);
  sqcRYGate(q, 1.478588949608258, 5);
  sqcRZGate(q, -0.16912678352854016, 5);
  sqcRYGate(q, 0.13614319857033944, 6);
  sqcRZGate(q, -0.5670267975851031, 6);
  sqcRYGate(q, 1.6456038870950804, 7);
  sqcRZGate(q, 1.6795269452771506, 7);
  sqcRYGate(q, -0.05013268269025685, 8);
  sqcRZGate(q, 0.09591897514634605, 8);
  sqcRYGate(q, -1.2878833449465885, 9);
  sqcRZGate(q, -0.16520040780132209, 9);
  sqcRYGate(q, 1.6170359464471682, 10);
  sqcRZGate(q, 0.03162136815974393, 10);
  sqcRYGate(q, 2.308470474683412, 11);
  sqcRZGate(q, -0.08361986162633084, 11);
  sqcRYGate(q, -1.4773356833524263, 12);
  sqcRZGate(q, -1.5772387036091364, 12);
  sqcRYGate(q, -1.5194639907109937, 13);
  sqcRZGate(q, 1.6515093170103698, 13);
  sqcRYGate(q, -3.134912080363937, 14);
  sqcRZGate(q, -0.6065288000069712, 14);
  sqcRYGate(q, -2.9400349691361076, 15);
  sqcRZGate(q, -3.064324162218776, 15);
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
  sqcRYGate(q, -1.1280371255949204, 0);
  sqcRZGate(q, -2.561159697606248, 0);
  sqcRYGate(q, 1.445931254232611, 1);
  sqcRZGate(q, 2.5996183695755777, 1);
  sqcRYGate(q, 0.4336457494505094, 2);
  sqcRZGate(q, -1.5511579929131294, 2);
  sqcRYGate(q, -3.136049868944356, 3);
  sqcRZGate(q, -2.3177907804603035, 3);
  sqcRYGate(q, -1.6258936680886027, 4);
  sqcRZGate(q, -0.2633001031021953, 4);
  sqcRYGate(q, -0.05121789044343683, 5);
  sqcRZGate(q, 1.3274237210409627, 5);
  sqcRYGate(q, -0.004708622740591473, 6);
  sqcRZGate(q, 1.4274402385847385, 6);
  sqcRYGate(q, -2.997651303471978, 7);
  sqcRZGate(q, -2.050491231151862, 7);
  sqcRYGate(q, 3.129299532029724, 8);
  sqcRZGate(q, 2.627696533213291, 8);
  sqcRYGate(q, -0.012818100328669814, 9);
  sqcRZGate(q, 1.386816577160336, 9);
  sqcRYGate(q, -1.585997693414865, 10);
  sqcRZGate(q, -3.0793280360993895, 10);
  sqcRYGate(q, -0.06898676017767116, 11);
  sqcRZGate(q, -3.025852608229539, 11);
  sqcRYGate(q, 0.043386332934438866, 12);
  sqcRZGate(q, 2.905410397038857, 12);
  sqcRYGate(q, 3.135735554251638, 13);
  sqcRZGate(q, 1.6411689109434713, 13);
  sqcRYGate(q, 1.6007344854767607, 14);
  sqcRZGate(q, 0.40090967711224657, 14);
  sqcRYGate(q, -2.06247200201123, 15);
  sqcRZGate(q, -2.070241132013783, 15);
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
  sqcRYGate(q, 2.1756639606864434, 0);
  sqcRZGate(q, 1.2445765746093507, 0);
  sqcRYGate(q, -0.45155254332823647, 1);
  sqcRZGate(q, -3.048513867432842, 1);
  sqcRYGate(q, -1.4788316229000698, 2);
  sqcRZGate(q, -3.109620662693414, 2);
  sqcRYGate(q, -0.010167479485967412, 3);
  sqcRZGate(q, 0.9309627865190748, 3);
  sqcRYGate(q, 0.40212408859497106, 4);
  sqcRZGate(q, -2.5689860250935337, 4);
  sqcRYGate(q, 1.7503948279936996, 5);
  sqcRZGate(q, 1.7179703788663214, 5);
  sqcRYGate(q, 1.1806993427297097, 6);
  sqcRZGate(q, -1.886096169143061, 6);
  sqcRYGate(q, 0.48215861362184853, 7);
  sqcRZGate(q, -0.36636292765394257, 7);
  sqcRYGate(q, -0.19039432922018396, 8);
  sqcRZGate(q, -2.1933685986777283, 8);
  sqcRYGate(q, -0.01460810791547651, 9);
  sqcRZGate(q, -2.8929122825693456, 9);
  sqcRYGate(q, -1.6479632420931634, 10);
  sqcRZGate(q, -1.476201114743123, 10);
  sqcRYGate(q, 1.5976026343975454, 11);
  sqcRZGate(q, -0.2879341951398606, 11);
  sqcRYGate(q, -3.095988930820079, 12);
  sqcRZGate(q, -1.7587726640826773, 12);
  sqcRYGate(q, 1.5707847391355358, 13);
  sqcRZGate(q, -1.7314902211673298, 13);
  sqcRYGate(q, -1.556853724410188, 14);
  sqcRZGate(q, 2.210850405319, 14);
  sqcRYGate(q, -1.9682113544007953, 15);
  sqcRZGate(q, -1.7128734437552042, 15);
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
  sqcRYGate(q, 1.597635766456122, 0);
  sqcRZGate(q, 1.549233591903838, 0);
  sqcRYGate(q, 1.604799221436064, 1);
  sqcRZGate(q, -1.471394820016644, 1);
  sqcRYGate(q, -0.014521433354154567, 2);
  sqcRZGate(q, -1.5988251184808986, 2);
  sqcRYGate(q, -0.005400139835864744, 3);
  sqcRZGate(q, 1.5389295555089628, 3);
  sqcRYGate(q, -3.0092880821065853, 4);
  sqcRZGate(q, 0.20402487988267748, 4);
  sqcRYGate(q, 0.19426784354958215, 5);
  sqcRZGate(q, 0.012982157668449013, 5);
  sqcRYGate(q, 0.031560746111208, 6);
  sqcRZGate(q, 0.12596610760863877, 6);
  sqcRYGate(q, 0.0732163331151048, 7);
  sqcRZGate(q, 0.8517724322489331, 7);
  sqcRYGate(q, 0.016167188797350462, 8);
  sqcRZGate(q, 0.6755552898037416, 8);
  sqcRYGate(q, 3.111873458513268, 9);
  sqcRZGate(q, -0.04892961895153469, 9);
  sqcRYGate(q, -1.8440313571994362, 10);
  sqcRZGate(q, -2.3255749515146897, 10);
  sqcRYGate(q, 0.00872836290438038, 11);
  sqcRZGate(q, -2.8594978520794943, 11);
  sqcRYGate(q, -0.09153529193577904, 12);
  sqcRZGate(q, 0.013590332455190025, 12);
  sqcRYGate(q, 0.019142991492175195, 13);
  sqcRZGate(q, 2.456612237709336, 13);
  sqcRYGate(q, 0.06178252630924952, 14);
  sqcRZGate(q, 0.9030256469336368, 14);
  sqcRYGate(q, 1.5675802074386502, 15);
  sqcRZGate(q, 0.02492818413618547, 15);
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
  sqcRYGate(q, -1.6738205912737059, 0);
  sqcRZGate(q, 0.6160550830889339, 0);
  sqcRYGate(q, 0.14851203032964033, 1);
  sqcRZGate(q, -2.361804067582528, 1);
  sqcRYGate(q, 1.5651617405568867, 2);
  sqcRZGate(q, -1.8364435892648068, 2);
  sqcRYGate(q, 0.06504540618314925, 3);
  sqcRZGate(q, 1.468452447799229, 3);
  sqcRYGate(q, -0.9248012860329416, 4);
  sqcRZGate(q, -2.215964705000159, 4);
  sqcRYGate(q, -1.5585152901826635, 5);
  sqcRZGate(q, 0.41609151788983584, 5);
  sqcRYGate(q, -1.5596980393696152, 6);
  sqcRZGate(q, -2.881724387849123, 6);
  sqcRYGate(q, -2.806946089168402, 7);
  sqcRZGate(q, -0.9383880199993042, 7);
  sqcRYGate(q, 1.6346033654613064, 8);
  sqcRZGate(q, -2.2561715521341705, 8);
  sqcRYGate(q, 1.2037770122359681, 9);
  sqcRZGate(q, 0.7874974436092633, 9);
  sqcRYGate(q, -3.088938936290565, 10);
  sqcRZGate(q, 2.9802151357300937, 10);
  sqcRYGate(q, -1.4648999979606445, 11);
  sqcRZGate(q, -2.129299958038935, 11);
  sqcRYGate(q, -1.5980217472364415, 12);
  sqcRZGate(q, 1.8990666412801396, 12);
  sqcRYGate(q, -3.1374609481043283, 13);
  sqcRZGate(q, 2.6970443220483284, 13);
  sqcRYGate(q, -1.55791703863669, 14);
  sqcRZGate(q, 1.7629285817767915, 14);
  sqcRYGate(q, -1.1390336004533674, 15);
  sqcRZGate(q, -2.961310046004153, 15);

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
