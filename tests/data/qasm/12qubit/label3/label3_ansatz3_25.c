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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 2.943514086621431, 0);
  sqcRZGate(q, -1.396383237212659, 0);
  sqcRYGate(q, -0.0727839622997255, 1);
  sqcRZGate(q, 2.8336814897496723, 1);
  sqcRYGate(q, 2.9786119837769673, 2);
  sqcRZGate(q, 2.2106376621372696, 2);
  sqcRYGate(q, -1.602295068033973, 3);
  sqcRZGate(q, -1.0697183107983097, 3);
  sqcRYGate(q, 0.0035597358287492694, 4);
  sqcRZGate(q, -0.9702251051279613, 4);
  sqcRYGate(q, -1.572987956665891, 5);
  sqcRZGate(q, -1.6291537723281495, 5);
  sqcRYGate(q, 0.09484924751960921, 6);
  sqcRZGate(q, -0.8408330365435825, 6);
  sqcRYGate(q, 0.0030977455420497795, 7);
  sqcRZGate(q, 0.8543331067605417, 7);
  sqcRYGate(q, -1.5199276800637336, 8);
  sqcRZGate(q, 0.07396783500046408, 8);
  sqcRYGate(q, 1.4919891676500197, 9);
  sqcRZGate(q, 1.5112189979575126, 9);
  sqcRYGate(q, 0.46919636165385015, 10);
  sqcRZGate(q, 1.8689012031025163, 10);
  sqcRYGate(q, 2.6052851733675313, 11);
  sqcRZGate(q, -1.3521426496766198, 11);
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
  sqcRYGate(q, -3.0736560634668675, 0);
  sqcRZGate(q, -2.5872216512104127, 0);
  sqcRYGate(q, -1.414877658946529, 1);
  sqcRZGate(q, -1.3699456093787734, 1);
  sqcRYGate(q, 3.0994182504646246, 2);
  sqcRZGate(q, 2.0231611709500505, 2);
  sqcRYGate(q, 3.0515035981752687, 3);
  sqcRZGate(q, -2.196876248044439, 3);
  sqcRYGate(q, -3.0821611397104203, 4);
  sqcRZGate(q, -0.8324569473590756, 4);
  sqcRYGate(q, -1.155725751600346, 5);
  sqcRZGate(q, 2.277990570544741, 5);
  sqcRYGate(q, -2.787091569354394, 6);
  sqcRZGate(q, 2.5286565301849917, 6);
  sqcRYGate(q, -2.853574444051294, 7);
  sqcRZGate(q, -1.2930012643212854, 7);
  sqcRYGate(q, 0.9174683165594809, 8);
  sqcRZGate(q, 1.214953069369761, 8);
  sqcRYGate(q, -0.7118386580095476, 9);
  sqcRZGate(q, 0.2506090952259805, 9);
  sqcRYGate(q, -1.191987457869839, 10);
  sqcRZGate(q, 0.1363963194276981, 10);
  sqcRYGate(q, -1.644475581678069, 11);
  sqcRZGate(q, -0.3515468000715609, 11);
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
  sqcRYGate(q, 0.878036102761703, 0);
  sqcRZGate(q, 1.924661426764989, 0);
  sqcRYGate(q, 1.8582824909725157, 1);
  sqcRZGate(q, -0.019560176753525838, 1);
  sqcRYGate(q, 1.4818080002300968, 2);
  sqcRZGate(q, 2.9373126563682868, 2);
  sqcRYGate(q, -0.18311086955724765, 3);
  sqcRZGate(q, 1.03143367916243, 3);
  sqcRYGate(q, -1.452080463135065, 4);
  sqcRZGate(q, -2.680500042306356, 4);
  sqcRYGate(q, 3.0878349622906662, 5);
  sqcRZGate(q, -2.8860960466940626, 5);
  sqcRYGate(q, 0.053773783919213614, 6);
  sqcRZGate(q, 0.5249107880824146, 6);
  sqcRYGate(q, -2.887091328757228, 7);
  sqcRZGate(q, -2.0759302437487133, 7);
  sqcRYGate(q, -0.7170189554569415, 8);
  sqcRZGate(q, 0.08499539398132593, 8);
  sqcRYGate(q, -1.3035793075714424, 9);
  sqcRZGate(q, 0.3745522630882252, 9);
  sqcRYGate(q, 3.0171749015218925, 10);
  sqcRZGate(q, 1.2748668505685377, 10);
  sqcRYGate(q, -2.5698457814543887, 11);
  sqcRZGate(q, 0.183921322639756, 11);
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
  sqcRYGate(q, -0.006048369089924677, 0);
  sqcRZGate(q, 1.4393290123410916, 0);
  sqcRYGate(q, -2.1447418191855716, 1);
  sqcRZGate(q, 0.7087854470553988, 1);
  sqcRYGate(q, -0.001606745091525507, 2);
  sqcRZGate(q, 0.1255141175846637, 2);
  sqcRYGate(q, -0.255051396294347, 3);
  sqcRZGate(q, 0.3658179316303807, 3);
  sqcRYGate(q, -3.1297367608291426, 4);
  sqcRZGate(q, -1.7997241158960922, 4);
  sqcRYGate(q, -0.0016076864075755175, 5);
  sqcRZGate(q, -0.5385011448450584, 5);
  sqcRYGate(q, -1.2133955793051279, 6);
  sqcRZGate(q, -0.6574698496158251, 6);
  sqcRYGate(q, -0.6594899363802167, 7);
  sqcRZGate(q, -2.882380181555869, 7);
  sqcRYGate(q, 0.8600990282354306, 8);
  sqcRZGate(q, -3.1249516178142707, 8);
  sqcRYGate(q, 3.1001836125716724, 9);
  sqcRZGate(q, 2.5725847342234123, 9);
  sqcRYGate(q, 1.2137113526894414, 10);
  sqcRZGate(q, -0.8756611040737896, 10);
  sqcRYGate(q, -2.181398374424859, 11);
  sqcRZGate(q, -0.665884602146902, 11);
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
  sqcRYGate(q, -0.2886051299441341, 0);
  sqcRZGate(q, -1.9052892968109034, 0);
  sqcRYGate(q, -2.151732037835023, 1);
  sqcRZGate(q, 2.005282856663948, 1);
  sqcRYGate(q, -2.1227160570963806, 2);
  sqcRZGate(q, -0.4226748211290258, 2);
  sqcRYGate(q, -0.5903242730716602, 3);
  sqcRZGate(q, -1.0675033593736378, 3);
  sqcRYGate(q, -2.5195946948973273, 4);
  sqcRZGate(q, -2.4084541505949333, 4);
  sqcRYGate(q, 0.0011904721352467007, 5);
  sqcRZGate(q, 0.28970109532649513, 5);
  sqcRYGate(q, 3.0856349793096007, 6);
  sqcRZGate(q, -3.121790541812466, 6);
  sqcRYGate(q, 2.224547729973364, 7);
  sqcRZGate(q, -2.903798897006055, 7);
  sqcRYGate(q, -1.6919399058483338, 8);
  sqcRZGate(q, -0.09568553181195068, 8);
  sqcRYGate(q, -1.5978856711881728, 9);
  sqcRZGate(q, -0.3250261752930231, 9);
  sqcRYGate(q, 1.889392364906664, 10);
  sqcRZGate(q, -2.714168229198119, 10);
  sqcRYGate(q, -1.273379716237857, 11);
  sqcRZGate(q, -0.012635608325801686, 11);
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
  sqcRYGate(q, 3.141170177989413, 0);
  sqcRZGate(q, -2.1960221139002405, 0);
  sqcRYGate(q, -0.08602734715279817, 1);
  sqcRZGate(q, 2.7185188458957183, 1);
  sqcRYGate(q, 3.1409272229432603, 2);
  sqcRZGate(q, 2.9210006608031125, 2);
  sqcRYGate(q, -3.134539962571387, 3);
  sqcRZGate(q, 1.7658845675703583, 3);
  sqcRYGate(q, -0.04210414123568729, 4);
  sqcRZGate(q, 2.074661391862313, 4);
  sqcRYGate(q, -0.00030303519310821193, 5);
  sqcRZGate(q, 2.6679051557229454, 5);
  sqcRYGate(q, -0.5368307581380458, 6);
  sqcRZGate(q, -0.8938313744933684, 6);
  sqcRYGate(q, 1.641551119222905, 7);
  sqcRZGate(q, -0.9252666730503194, 7);
  sqcRYGate(q, 1.3295140219059807, 8);
  sqcRZGate(q, 0.45262847641160936, 8);
  sqcRYGate(q, 2.5348475699189885, 9);
  sqcRZGate(q, 2.401152858722945, 9);
  sqcRYGate(q, -1.261098015103628, 10);
  sqcRZGate(q, -0.3713200559483323, 10);
  sqcRYGate(q, 1.6755235468495107, 11);
  sqcRZGate(q, -0.510505807702889, 11);
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
  sqcRYGate(q, 0.2071701337433458, 0);
  sqcRZGate(q, 0.6185437349662252, 0);
  sqcRYGate(q, 1.997595120634501, 1);
  sqcRZGate(q, 0.6922224613232987, 1);
  sqcRYGate(q, 2.6171672508307355, 2);
  sqcRZGate(q, 0.05038338584357455, 2);
  sqcRYGate(q, 1.1307565480838218, 3);
  sqcRZGate(q, -2.7888855147051896, 3);
  sqcRYGate(q, -2.1856216783517053, 4);
  sqcRZGate(q, -0.040027056988558296, 4);
  sqcRYGate(q, -2.5752454557944175, 5);
  sqcRZGate(q, 2.1433912362291503, 5);
  sqcRYGate(q, 3.072489828635119, 6);
  sqcRZGate(q, -0.7287406777540272, 6);
  sqcRYGate(q, 2.936755376276869, 7);
  sqcRZGate(q, -1.5730382625996109, 7);
  sqcRYGate(q, 0.20715975751924542, 8);
  sqcRZGate(q, -1.0932206054573035, 8);
  sqcRYGate(q, -2.3786440953283003, 9);
  sqcRZGate(q, 0.4930817606808029, 9);
  sqcRYGate(q, -2.613063060584602, 10);
  sqcRZGate(q, 0.3176607020777453, 10);
  sqcRYGate(q, 0.48002111924219193, 11);
  sqcRZGate(q, 1.1160661397146, 11);
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
  sqcRYGate(q, 1.4197068570562137, 0);
  sqcRZGate(q, -1.555496939483925, 0);
  sqcRYGate(q, 0.06746837031165143, 1);
  sqcRZGate(q, -1.6509952784385558, 1);
  sqcRYGate(q, 3.126294426646352, 2);
  sqcRZGate(q, -0.45042162701110033, 2);
  sqcRYGate(q, 0.0019166996035471229, 3);
  sqcRZGate(q, 2.7515122926184357, 3);
  sqcRYGate(q, -2.9257511055315555, 4);
  sqcRZGate(q, -0.9575125056489941, 4);
  sqcRYGate(q, -0.0006233278558110477, 5);
  sqcRZGate(q, -2.199171291777689, 5);
  sqcRYGate(q, -2.4144518301746642, 6);
  sqcRZGate(q, 0.12337672474032658, 6);
  sqcRYGate(q, -0.2815725482404945, 7);
  sqcRZGate(q, 0.9243671611816414, 7);
  sqcRYGate(q, 1.2664580842277486, 8);
  sqcRZGate(q, 0.46611521016524426, 8);
  sqcRYGate(q, -1.7999606336698566, 9);
  sqcRZGate(q, -1.6092954846958545, 9);
  sqcRYGate(q, 0.23218136736855435, 10);
  sqcRZGate(q, -0.6501724588489763, 10);
  sqcRYGate(q, 1.954601209094184, 11);
  sqcRZGate(q, 0.12511499008166369, 11);
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
  sqcRYGate(q, 0.6304443926240495, 0);
  sqcRZGate(q, -1.0605244314444064, 0);
  sqcRYGate(q, -2.4622102396592718, 1);
  sqcRZGate(q, -1.3346871075958004, 1);
  sqcRYGate(q, 0.008690076897450718, 2);
  sqcRZGate(q, -2.93227007538136, 2);
  sqcRYGate(q, 0.6970874201802326, 3);
  sqcRZGate(q, 1.7939218508466255, 3);
  sqcRYGate(q, -1.0542195307188829, 4);
  sqcRZGate(q, 2.0774265646828494, 4);
  sqcRYGate(q, -2.690281100982515, 5);
  sqcRZGate(q, 1.920914871096607, 5);
  sqcRYGate(q, 3.0957665788373445, 6);
  sqcRZGate(q, 2.1755081442836666, 6);
  sqcRYGate(q, 2.631070409955184, 7);
  sqcRZGate(q, 1.4785227693002883, 7);
  sqcRYGate(q, 0.5876828521469362, 8);
  sqcRZGate(q, -2.251455919763557, 8);
  sqcRYGate(q, 3.024803539924736, 9);
  sqcRZGate(q, 1.600340701906432, 9);
  sqcRYGate(q, -2.9141556868756986, 10);
  sqcRZGate(q, -2.0629716623010923, 10);
  sqcRYGate(q, 1.5264594122034278, 11);
  sqcRZGate(q, -0.43826710457284085, 11);
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
  sqcRYGate(q, 2.4701879532947273, 0);
  sqcRZGate(q, -2.2463049283045917, 0);
  sqcRYGate(q, 3.0021626455325063, 1);
  sqcRZGate(q, 2.4430974653298687, 1);
  sqcRYGate(q, 3.127223065756599, 2);
  sqcRZGate(q, -1.5601011287197712, 2);
  sqcRYGate(q, 0.0077365380009499765, 3);
  sqcRZGate(q, -1.798255217173292, 3);
  sqcRYGate(q, -0.014119550632343271, 4);
  sqcRZGate(q, -0.44177228479921826, 4);
  sqcRYGate(q, -0.0011973486517566911, 5);
  sqcRZGate(q, 1.684437551292779, 5);
  sqcRYGate(q, -2.996245162010079, 6);
  sqcRZGate(q, -1.3745646054845002, 6);
  sqcRYGate(q, -0.8809710376444253, 7);
  sqcRZGate(q, 0.5943534815149257, 7);
  sqcRYGate(q, 2.5115954711902932, 8);
  sqcRZGate(q, 1.9525733854010785, 8);
  sqcRYGate(q, -0.6476357966414094, 9);
  sqcRZGate(q, 0.037340298958544196, 9);
  sqcRYGate(q, -2.6662116007066823, 10);
  sqcRZGate(q, 1.6132143433702695, 10);
  sqcRYGate(q, 2.360743792684204, 11);
  sqcRZGate(q, -0.26440879208800006, 11);
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
  sqcRYGate(q, -1.5013404005771784, 0);
  sqcRZGate(q, -1.474174504342446, 0);
  sqcRYGate(q, -1.808412517908038, 1);
  sqcRZGate(q, 2.1889852450380136, 1);
  sqcRYGate(q, 0.01912466508014532, 2);
  sqcRZGate(q, 0.773695558805835, 2);
  sqcRYGate(q, -0.20176546608958035, 3);
  sqcRZGate(q, 2.849005728546899, 3);
  sqcRYGate(q, 3.0636280220524443, 4);
  sqcRZGate(q, 0.7486038783678275, 4);
  sqcRYGate(q, -1.6821316740774122, 5);
  sqcRZGate(q, 0.6239916245089603, 5);
  sqcRYGate(q, -3.0938658846481046, 6);
  sqcRZGate(q, 0.24266851355138727, 6);
  sqcRYGate(q, -0.5485973680311084, 7);
  sqcRZGate(q, -0.17205802591073915, 7);
  sqcRYGate(q, -1.0029968107118492, 8);
  sqcRZGate(q, 2.3706358278872464, 8);
  sqcRYGate(q, -1.3282204104662125, 9);
  sqcRZGate(q, 3.037787431880049, 9);
  sqcRYGate(q, 0.6998312581219386, 10);
  sqcRZGate(q, 0.8894222171990656, 10);
  sqcRYGate(q, -2.208609337312084, 11);
  sqcRZGate(q, -3.1396265265600363, 11);
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
  sqcRYGate(q, 2.011847002583359, 0);
  sqcRZGate(q, 3.073167172591128, 0);
  sqcRYGate(q, 3.128921137471692, 1);
  sqcRZGate(q, -1.7258639842479986, 1);
  sqcRYGate(q, -0.0060111341952078234, 2);
  sqcRZGate(q, -0.05355213037445594, 2);
  sqcRYGate(q, -0.08234441185387897, 3);
  sqcRZGate(q, 2.0937964898626253, 3);
  sqcRYGate(q, 0.7132749639037652, 4);
  sqcRZGate(q, -2.7101377083526432, 4);
  sqcRYGate(q, 0.001391355845030695, 5);
  sqcRZGate(q, 0.9069152671254541, 5);
  sqcRYGate(q, -2.6965402538010084, 6);
  sqcRZGate(q, -1.4210733825905422, 6);
  sqcRYGate(q, -0.0040319027694293635, 7);
  sqcRZGate(q, 2.2653521383148814, 7);
  sqcRYGate(q, -0.609777412802182, 8);
  sqcRZGate(q, 1.059723556926653, 8);
  sqcRYGate(q, -1.5441727298655081, 9);
  sqcRZGate(q, 2.1083280751695948, 9);
  sqcRYGate(q, 0.7916473299096802, 10);
  sqcRZGate(q, -1.6229875213453377, 10);
  sqcRYGate(q, 1.1033401980161068, 11);
  sqcRZGate(q, 1.0477423570888422, 11);
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
  sqcRYGate(q, 2.4118710084595185, 0);
  sqcRZGate(q, 2.0006426393830132, 0);
  sqcRYGate(q, -0.990387812053112, 1);
  sqcRZGate(q, -0.6960037229693228, 1);
  sqcRYGate(q, 0.015183757264837644, 2);
  sqcRZGate(q, -2.4434305277491633, 2);
  sqcRYGate(q, 3.0869133440082934, 3);
  sqcRZGate(q, -1.107406552864366, 3);
  sqcRYGate(q, 0.3103481184117558, 4);
  sqcRZGate(q, 2.770881013001919, 4);
  sqcRYGate(q, 2.9665458055407012, 5);
  sqcRZGate(q, 0.11348486580685346, 5);
  sqcRYGate(q, 2.9960052113274647, 6);
  sqcRZGate(q, -1.3332944947142547, 6);
  sqcRYGate(q, -0.06435302347430569, 7);
  sqcRZGate(q, 1.6330090335137692, 7);
  sqcRYGate(q, 1.2832670553709278, 8);
  sqcRZGate(q, 1.9353661408732812, 8);
  sqcRYGate(q, 1.4781507919481218, 9);
  sqcRZGate(q, 0.14620017594025034, 9);
  sqcRYGate(q, 1.572606072258357, 10);
  sqcRZGate(q, 0.7048986832381271, 10);
  sqcRYGate(q, 1.3699219815355665, 11);
  sqcRZGate(q, -1.5576029950088257, 11);
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
  sqcRYGate(q, -1.1341162069147455, 0);
  sqcRZGate(q, 1.1159009432473048, 0);
  sqcRYGate(q, -3.1067280572841556, 1);
  sqcRZGate(q, -2.652080261854615, 1);
  sqcRYGate(q, 1.1348086489340248, 2);
  sqcRZGate(q, 0.011053012789779021, 2);
  sqcRYGate(q, 2.8232997020330735, 3);
  sqcRZGate(q, -3.1202326330833303, 3);
  sqcRYGate(q, -0.7879308754139689, 4);
  sqcRZGate(q, -1.034991805775737, 4);
  sqcRYGate(q, 3.135644628728202, 5);
  sqcRZGate(q, 0.040999865341589725, 5);
  sqcRYGate(q, -2.6920372885940425, 6);
  sqcRZGate(q, 1.0372105862579035, 6);
  sqcRYGate(q, 3.104484321693938, 7);
  sqcRZGate(q, -2.0240778721425166, 7);
  sqcRYGate(q, -2.2287580653693064, 8);
  sqcRZGate(q, 2.6051817044243504, 8);
  sqcRYGate(q, -0.33741807932923895, 9);
  sqcRZGate(q, -0.4522372571567024, 9);
  sqcRYGate(q, -2.2941760090607626, 10);
  sqcRZGate(q, 2.873723488364321, 10);
  sqcRYGate(q, -2.55027073468556, 11);
  sqcRZGate(q, 0.9587435332948527, 11);
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
  sqcRYGate(q, -2.2561859761033514, 0);
  sqcRZGate(q, 0.3429869564222017, 0);
  sqcRYGate(q, 1.604005165608329, 1);
  sqcRZGate(q, -1.6423832599904524, 1);
  sqcRYGate(q, 1.5748443029412247, 2);
  sqcRZGate(q, 2.8320607837573504, 2);
  sqcRYGate(q, -0.0009668648987171125, 3);
  sqcRZGate(q, -1.3765384419105509, 3);
  sqcRYGate(q, 0.011560551762494094, 4);
  sqcRZGate(q, 0.15500406902706929, 4);
  sqcRYGate(q, -1.5422122866624557, 5);
  sqcRZGate(q, 0.16707115260705227, 5);
  sqcRYGate(q, 2.964185082055796, 6);
  sqcRZGate(q, 1.334159991093837, 6);
  sqcRYGate(q, 2.9379665865018487, 7);
  sqcRZGate(q, 0.24395945915842263, 7);
  sqcRYGate(q, -1.5347901352999074, 8);
  sqcRZGate(q, -2.3422085706252287, 8);
  sqcRYGate(q, 0.7705486312928777, 9);
  sqcRZGate(q, -0.40717116941921727, 9);
  sqcRYGate(q, 1.7204941967955367, 10);
  sqcRZGate(q, 1.6317047989998583, 10);
  sqcRYGate(q, -1.201126337610245, 11);
  sqcRZGate(q, -1.9752654727662495, 11);
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
  sqcRYGate(q, -0.008821400577172511, 0);
  sqcRZGate(q, -0.3397385363389756, 0);
  sqcRYGate(q, 0.017614807703984603, 1);
  sqcRZGate(q, 0.14018059219012183, 1);
  sqcRYGate(q, 3.1240630075863174, 2);
  sqcRZGate(q, 0.04780196286813664, 2);
  sqcRYGate(q, 2.7777289876168654, 3);
  sqcRZGate(q, 1.8425123129672174, 3);
  sqcRYGate(q, 0.0015905716157957885, 4);
  sqcRZGate(q, 2.7528898304897957, 4);
  sqcRYGate(q, 3.1328265893917946, 5);
  sqcRZGate(q, -0.4771829044339677, 5);
  sqcRYGate(q, -2.6789046986601566, 6);
  sqcRZGate(q, -2.82431541156049, 6);
  sqcRYGate(q, 0.03184927090200828, 7);
  sqcRZGate(q, 2.6052235868327234, 7);
  sqcRYGate(q, 0.36475007892755684, 8);
  sqcRZGate(q, 2.240739271152136, 8);
  sqcRYGate(q, -1.8106008288338211, 9);
  sqcRZGate(q, 2.0610993347768525, 9);
  sqcRYGate(q, 2.1535251480900754, 10);
  sqcRZGate(q, -0.3971713691866059, 10);
  sqcRYGate(q, 2.3791699174114456, 11);
  sqcRZGate(q, 3.131259578697233, 11);
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
  sqcRYGate(q, -2.2924829369428563, 0);
  sqcRZGate(q, 0.7675218326838396, 0);
  sqcRYGate(q, 1.5825233951651958, 1);
  sqcRZGate(q, -1.5724996030044542, 1);
  sqcRYGate(q, 3.1358653254564803, 2);
  sqcRZGate(q, 1.9941505514851443, 2);
  sqcRYGate(q, 0.007330880441228659, 3);
  sqcRZGate(q, -1.1000475060276989, 3);
  sqcRYGate(q, -1.556413531558448, 4);
  sqcRZGate(q, -0.8865243470860346, 4);
  sqcRYGate(q, -0.5863304725183128, 5);
  sqcRZGate(q, 1.3990377851009035, 5);
  sqcRYGate(q, 2.8334204511734034, 6);
  sqcRZGate(q, -1.7538722490867458, 6);
  sqcRYGate(q, 2.9090778360570164, 7);
  sqcRZGate(q, 0.10694237361074023, 7);
  sqcRYGate(q, -2.732558427853882, 8);
  sqcRZGate(q, -0.6870605288859827, 8);
  sqcRYGate(q, -1.378485637670957, 9);
  sqcRZGate(q, 0.11250727729948107, 9);
  sqcRYGate(q, 2.109771471905298, 10);
  sqcRZGate(q, 1.8140288562038807, 10);
  sqcRYGate(q, -1.2386844677681976, 11);
  sqcRZGate(q, -1.2778722872321149, 11);
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
  sqcRYGate(q, 1.002040617449324, 0);
  sqcRZGate(q, -1.6959523847016085, 0);
  sqcRYGate(q, 1.5657266968025318, 1);
  sqcRZGate(q, 0.6820911457529704, 1);
  sqcRYGate(q, 1.301171990794616, 2);
  sqcRZGate(q, 2.463434265409779, 2);
  sqcRYGate(q, 0.011888762701150551, 3);
  sqcRZGate(q, 1.887195533482478, 3);
  sqcRYGate(q, 3.1402533506816974, 4);
  sqcRZGate(q, -2.14477888637984, 4);
  sqcRYGate(q, -3.1408383871313195, 5);
  sqcRZGate(q, 0.038739765102364765, 5);
  sqcRYGate(q, 0.0013144855423501411, 6);
  sqcRZGate(q, 1.5924179878909115, 6);
  sqcRYGate(q, 3.107770889714408, 7);
  sqcRZGate(q, 0.9500816831367986, 7);
  sqcRYGate(q, 2.844826420341562, 8);
  sqcRZGate(q, -0.7397519703160745, 8);
  sqcRYGate(q, -1.7874917681536087, 9);
  sqcRZGate(q, 1.6079472181986805, 9);
  sqcRYGate(q, -3.043445359430307, 10);
  sqcRZGate(q, -0.725382483555757, 10);
  sqcRYGate(q, -2.1006700893082284, 11);
  sqcRZGate(q, 1.9255073606707265, 11);
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
  sqcRYGate(q, -1.0917376015145355, 0);
  sqcRZGate(q, 0.42347648456789266, 0);
  sqcRYGate(q, -0.03276495199647831, 1);
  sqcRZGate(q, 2.60040054276432, 1);
  sqcRYGate(q, 3.0902822406567476, 2);
  sqcRZGate(q, 2.8432788539911122, 2);
  sqcRYGate(q, 3.139270235833248, 3);
  sqcRZGate(q, 1.4913836836865677, 3);
  sqcRYGate(q, 2.0168779709249356, 4);
  sqcRZGate(q, -1.4158117726884694, 4);
  sqcRYGate(q, 2.537884017020798, 5);
  sqcRZGate(q, 1.6234589976159557, 5);
  sqcRYGate(q, 2.5174087918997423, 6);
  sqcRZGate(q, -2.966829693169279, 6);
  sqcRYGate(q, -1.6171111341994944, 7);
  sqcRZGate(q, -2.8907539983019683, 7);
  sqcRYGate(q, 1.4087606870803775, 8);
  sqcRZGate(q, -1.6085416643693145, 8);
  sqcRYGate(q, 2.5715669261048886, 9);
  sqcRZGate(q, -1.8994718308151526, 9);
  sqcRYGate(q, 1.6781906575277403, 10);
  sqcRZGate(q, 2.1581180349733886, 10);
  sqcRYGate(q, 1.1801888061279664, 11);
  sqcRZGate(q, -0.28852839316216, 11);
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
  sqcRYGate(q, -1.8805872274466848, 0);
  sqcRZGate(q, -1.759370076399876, 0);
  sqcRYGate(q, 3.1396075733417397, 1);
  sqcRZGate(q, -1.6320738006843056, 1);
  sqcRYGate(q, 2.114894464219554, 2);
  sqcRZGate(q, 2.5441553622077318, 2);
  sqcRYGate(q, -0.009480589929941167, 3);
  sqcRZGate(q, 0.49479753426893314, 3);
  sqcRYGate(q, 3.1412406685054575, 4);
  sqcRZGate(q, 1.110690175316023, 4);
  sqcRYGate(q, -0.0009744027046236782, 5);
  sqcRZGate(q, -2.5523131118274027, 5);
  sqcRYGate(q, 0.0009536932359317518, 6);
  sqcRZGate(q, -1.5527015846647043, 6);
  sqcRYGate(q, -3.095375438708695, 7);
  sqcRZGate(q, 1.2927232803895854, 7);
  sqcRYGate(q, 3.114995324440014, 8);
  sqcRZGate(q, -0.6948942978628346, 8);
  sqcRYGate(q, -1.625204788344542, 9);
  sqcRZGate(q, 0.07711263764345588, 9);
  sqcRYGate(q, -2.1926961174311566, 10);
  sqcRZGate(q, 2.6845481528410544, 10);
  sqcRYGate(q, 2.3630916978820338, 11);
  sqcRZGate(q, 1.7300055224683017, 11);
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
  sqcRYGate(q, 1.2862708230138225, 0);
  sqcRZGate(q, 3.005793164766808, 0);
  sqcRYGate(q, -0.7031401168344633, 1);
  sqcRZGate(q, -1.1848059937910165, 1);
  sqcRYGate(q, 0.05531874084282595, 2);
  sqcRZGate(q, -1.9320613740350687, 2);
  sqcRYGate(q, 0.005235052803541761, 3);
  sqcRZGate(q, 0.7290675830158131, 3);
  sqcRYGate(q, -2.1963991810742414, 4);
  sqcRZGate(q, 1.5846883701275116, 4);
  sqcRYGate(q, 0.9266647535493401, 5);
  sqcRZGate(q, -1.3960037561903462, 5);
  sqcRYGate(q, -2.5553410597780726, 6);
  sqcRZGate(q, 1.0041234663554024, 6);
  sqcRYGate(q, 1.1520772634809884, 7);
  sqcRZGate(q, -2.681054086828481, 7);
  sqcRYGate(q, -0.9510041978371905, 8);
  sqcRZGate(q, -0.5859569584710114, 8);
  sqcRYGate(q, 1.9459802238297854, 9);
  sqcRZGate(q, -0.8740969212356188, 9);
  sqcRYGate(q, 0.34038108887749813, 10);
  sqcRZGate(q, 0.36140754785799517, 10);
  sqcRYGate(q, -1.6935267594689007, 11);
  sqcRZGate(q, 2.2684361738350174, 11);
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
  sqcRYGate(q, -2.83992878125127, 0);
  sqcRZGate(q, -0.4255874350034149, 0);
  sqcRYGate(q, 1.7626909755391806, 1);
  sqcRZGate(q, -1.056396090589949, 1);
  sqcRYGate(q, 1.3579272101259587, 2);
  sqcRZGate(q, 1.4073143426995725, 2);
  sqcRYGate(q, 3.1355258866810805, 3);
  sqcRZGate(q, 2.747980184492993, 3);
  sqcRYGate(q, -0.000598244967793739, 4);
  sqcRZGate(q, -0.07383231237725507, 4);
  sqcRYGate(q, -0.0009863388102263153, 5);
  sqcRZGate(q, -1.2441508810627087, 5);
  sqcRYGate(q, -0.0010221479178857962, 6);
  sqcRZGate(q, 2.7734713006660376, 6);
  sqcRYGate(q, 0.03245193385178456, 7);
  sqcRZGate(q, -1.5411264216774239, 7);
  sqcRYGate(q, -0.3146225166121015, 8);
  sqcRZGate(q, -0.18326384850625255, 8);
  sqcRYGate(q, 0.0981949477694668, 9);
  sqcRZGate(q, 2.0372952644837707, 9);
  sqcRYGate(q, -2.177618170294922, 10);
  sqcRZGate(q, -2.5114425364313817, 10);
  sqcRYGate(q, 1.5990742437826866, 11);
  sqcRZGate(q, 1.1924302168173813, 11);
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
  sqcRYGate(q, -0.014375538087546387, 0);
  sqcRZGate(q, -1.9086008888251111, 0);
  sqcRYGate(q, 2.6327166173403067, 1);
  sqcRZGate(q, 2.0797235786030837, 1);
  sqcRYGate(q, 1.3055903974285163, 2);
  sqcRZGate(q, -0.009997904357536669, 2);
  sqcRYGate(q, 0.018682664378490088, 3);
  sqcRZGate(q, 2.833666659324745, 3);
  sqcRYGate(q, 1.547778858617268, 4);
  sqcRZGate(q, 1.455630427794079, 4);
  sqcRYGate(q, 0.984692414197936, 5);
  sqcRZGate(q, 2.702835841190135, 5);
  sqcRYGate(q, 0.706158433168067, 6);
  sqcRZGate(q, 2.8164574866603607, 6);
  sqcRYGate(q, 1.6051479642001205, 7);
  sqcRZGate(q, -0.2955169476455169, 7);
  sqcRYGate(q, 1.0149057014762142, 8);
  sqcRZGate(q, 1.971003863701478, 8);
  sqcRYGate(q, -1.482853261480031, 9);
  sqcRZGate(q, 2.645348558485148, 9);
  sqcRYGate(q, 1.5140936008073842, 10);
  sqcRZGate(q, 2.8577122270278084, 10);
  sqcRYGate(q, 1.0642048429968514, 11);
  sqcRZGate(q, -0.30813685030913524, 11);
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
  sqcRYGate(q, 3.042490355417255, 0);
  sqcRZGate(q, 2.702102411620918, 0);
  sqcRYGate(q, 1.8403675409141933, 1);
  sqcRZGate(q, 1.9594236538940104, 1);
  sqcRYGate(q, 1.571120836573729, 2);
  sqcRZGate(q, -0.5629908841547687, 2);
  sqcRYGate(q, 0.0013405657890830972, 3);
  sqcRZGate(q, 3.023368726170706, 3);
  sqcRYGate(q, -0.0011044266329474084, 4);
  sqcRZGate(q, -0.23234026866357801, 4);
  sqcRYGate(q, -3.138512265141333, 5);
  sqcRZGate(q, 1.9419865658311568, 5);
  sqcRYGate(q, 0.0022141688788271667, 6);
  sqcRZGate(q, 2.418099550350029, 6);
  sqcRYGate(q, -3.1372447898041576, 7);
  sqcRZGate(q, -0.8406816969719771, 7);
  sqcRYGate(q, -1.3827964178329517, 8);
  sqcRZGate(q, -2.1471590421346995, 8);
  sqcRYGate(q, -1.3417396532783137, 9);
  sqcRZGate(q, 0.16118559091222856, 9);
  sqcRYGate(q, -2.5929967789195385, 10);
  sqcRZGate(q, 1.144192992715836, 10);
  sqcRYGate(q, -1.2118293798062936, 11);
  sqcRZGate(q, 1.8254349246188672, 11);
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
  sqcRYGate(q, 3.138759866226814, 0);
  sqcRZGate(q, -1.3202243138723766, 0);
  sqcRYGate(q, 1.5285777250248578, 1);
  sqcRZGate(q, -1.5166132582335683, 1);
  sqcRYGate(q, 1.1585297233216458, 2);
  sqcRZGate(q, -0.6296246425482696, 2);
  sqcRYGate(q, -0.005477666012036587, 3);
  sqcRZGate(q, -2.8382891740128398, 3);
  sqcRYGate(q, 1.6758720714388857, 4);
  sqcRZGate(q, -3.035607763891042, 4);
  sqcRYGate(q, 2.1193983544469335, 5);
  sqcRZGate(q, 1.6066837479007363, 5);
  sqcRYGate(q, 0.03963753399809691, 6);
  sqcRZGate(q, -2.833997983600469, 6);
  sqcRYGate(q, 2.6806997148259772, 7);
  sqcRZGate(q, 1.2094277418558423, 7);
  sqcRYGate(q, -0.234441859757756, 8);
  sqcRZGate(q, -0.7016012570259575, 8);
  sqcRYGate(q, -1.5877638962154974, 9);
  sqcRZGate(q, 1.3266186153232369, 9);
  sqcRYGate(q, 0.7979403906202611, 10);
  sqcRZGate(q, -0.40169627336480335, 10);
  sqcRYGate(q, 0.9152333613852651, 11);
  sqcRZGate(q, 0.7528483663424899, 11);
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
  sqcRYGate(q, -2.8286526425065377, 0);
  sqcRZGate(q, 2.839008963223834, 0);
  sqcRYGate(q, 0.638630365305473, 1);
  sqcRZGate(q, 3.110226257676503, 1);
  sqcRYGate(q, -2.9233009190161066, 2);
  sqcRZGate(q, -2.332133701698196, 2);
  sqcRYGate(q, -3.141453748594077, 3);
  sqcRZGate(q, -2.241007666754058, 3);
  sqcRYGate(q, -3.13387515262781, 4);
  sqcRZGate(q, -0.4458724442846451, 4);
  sqcRYGate(q, -0.0005131228207485563, 5);
  sqcRZGate(q, 3.1232288884890567, 5);
  sqcRYGate(q, 0.006335644740377511, 6);
  sqcRZGate(q, 3.120558593853225, 6);
  sqcRYGate(q, -0.014467851550110242, 7);
  sqcRZGate(q, 1.937943542839414, 7);
  sqcRYGate(q, 0.7124284831483234, 8);
  sqcRZGate(q, -2.553811681186701, 8);
  sqcRYGate(q, 1.5532280188297398, 9);
  sqcRZGate(q, 2.4166343741924092, 9);
  sqcRYGate(q, -1.2774623834375365, 10);
  sqcRZGate(q, 2.717656355681314, 10);
  sqcRYGate(q, -1.7757825756402816, 11);
  sqcRZGate(q, -1.262683271264274, 11);
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
  sqcRYGate(q, -0.0011143163170376912, 0);
  sqcRZGate(q, 2.941412849136468, 0);
  sqcRYGate(q, 0.5974310410682584, 1);
  sqcRZGate(q, 0.10390030233582803, 1);
  sqcRYGate(q, -2.0725724793239357, 2);
  sqcRZGate(q, 1.4237002818436122, 2);
  sqcRYGate(q, 0.0022940250224762647, 3);
  sqcRZGate(q, -1.7845574734938143, 3);
  sqcRYGate(q, -3.035763859896395, 4);
  sqcRZGate(q, -1.3212072074283658, 4);
  sqcRYGate(q, 1.6656360966095156, 5);
  sqcRZGate(q, 0.6873749386057009, 5);
  sqcRYGate(q, 0.08803186027459785, 6);
  sqcRZGate(q, 1.0559430043457727, 6);
  sqcRYGate(q, 1.5052358283714895, 7);
  sqcRZGate(q, 1.6870871356974468, 7);
  sqcRYGate(q, -3.0810504189870804, 8);
  sqcRZGate(q, 1.3681823422762815, 8);
  sqcRYGate(q, -1.1530623273238225, 9);
  sqcRZGate(q, 1.0418980397313813, 9);
  sqcRYGate(q, -3.12297718173827, 10);
  sqcRZGate(q, -2.020657709797907, 10);
  sqcRYGate(q, 1.1139370309822052, 11);
  sqcRZGate(q, 1.3226795723008937, 11);
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
  sqcRYGate(q, -2.970186052526656, 0);
  sqcRZGate(q, 2.4822913891824774, 0);
  sqcRYGate(q, 1.08103253187668, 1);
  sqcRZGate(q, -0.0734738777621543, 1);
  sqcRYGate(q, -1.6613383467351186, 2);
  sqcRZGate(q, -1.6878658814626828, 2);
  sqcRYGate(q, 3.1403330981201187, 3);
  sqcRZGate(q, -2.191860994015948, 3);
  sqcRYGate(q, 3.141522881069402, 4);
  sqcRZGate(q, 1.1108156709275683, 4);
  sqcRYGate(q, 0.0018729354731927828, 5);
  sqcRZGate(q, 2.086963877896769, 5);
  sqcRYGate(q, -3.106905562490721, 6);
  sqcRZGate(q, -0.3127232965331084, 6);
  sqcRYGate(q, -3.1316519759176935, 7);
  sqcRZGate(q, -0.483909286322441, 7);
  sqcRYGate(q, -2.0077511942245225, 8);
  sqcRZGate(q, -1.0483051258510097, 8);
  sqcRYGate(q, -1.484601391186317, 9);
  sqcRZGate(q, -3.1217095363822147, 9);
  sqcRYGate(q, 1.709952543603566, 10);
  sqcRZGate(q, 0.8292743070972902, 10);
  sqcRYGate(q, -1.2616904382832237, 11);
  sqcRZGate(q, 2.8080016603766302, 11);
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
  sqcRYGate(q, -1.5399042936142413, 0);
  sqcRZGate(q, -2.732105332205067, 0);
  sqcRYGate(q, 1.68763239021063, 1);
  sqcRZGate(q, 2.719041619472922, 1);
  sqcRYGate(q, -1.8800752543374375, 2);
  sqcRZGate(q, 0.8479662983566243, 2);
  sqcRYGate(q, 1.1728232189907348, 3);
  sqcRZGate(q, -1.2621306654769675, 3);
  sqcRYGate(q, -1.1027116018141818, 4);
  sqcRZGate(q, 2.8350128799557304, 4);
  sqcRYGate(q, 1.734607177522458, 5);
  sqcRZGate(q, -0.6639562812582502, 5);
  sqcRYGate(q, 1.4704430376833395, 6);
  sqcRZGate(q, -1.2170459086970125, 6);
  sqcRYGate(q, -0.6346896562249293, 7);
  sqcRZGate(q, 0.08247899433509621, 7);
  sqcRYGate(q, 0.5968840167871236, 8);
  sqcRZGate(q, 0.44553180773021883, 8);
  sqcRYGate(q, -2.3874136729096986, 9);
  sqcRZGate(q, 0.9951119967906468, 9);
  sqcRYGate(q, -0.7404810038672427, 10);
  sqcRZGate(q, -2.2977298391686496, 10);
  sqcRYGate(q, 1.8527283011324984, 11);
  sqcRZGate(q, 2.565437374412112, 11);

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
