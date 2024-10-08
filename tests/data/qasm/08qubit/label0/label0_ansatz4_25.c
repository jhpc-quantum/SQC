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

  sqcRYGate(q, 2.09578023627156, 0);
  sqcRZGate(q, -0.24485277382073445, 0);
  sqcRYGate(q, -3.095618352614263, 1);
  sqcRZGate(q, -0.4215684102819103, 1);
  sqcRYGate(q, -1.7878135587778186, 2);
  sqcRZGate(q, -0.4020280468286153, 2);
  sqcRYGate(q, 1.3604901947754513, 3);
  sqcRZGate(q, -2.1362311582380684, 3);
  sqcRYGate(q, -0.5207081091819313, 4);
  sqcRZGate(q, -1.2268364064999124, 4);
  sqcRYGate(q, -2.6657565606344806, 5);
  sqcRZGate(q, 2.6233643452595463, 5);
  sqcRYGate(q, -1.1311350623728131, 6);
  sqcRZGate(q, -2.873464716755953, 6);
  sqcRYGate(q, 2.011614018544629, 7);
  sqcRZGate(q, -2.2120247745406836, 7);
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
  sqcRYGate(q, 2.718119034907379, 0);
  sqcRZGate(q, -1.9074394009905284, 0);
  sqcRYGate(q, 1.1478272344355473, 1);
  sqcRZGate(q, -2.1079815446082453, 1);
  sqcRYGate(q, 1.9493049366856035, 2);
  sqcRZGate(q, 2.461052104555941, 2);
  sqcRYGate(q, 0.7522138698415979, 3);
  sqcRZGate(q, 2.0426462032011106, 3);
  sqcRYGate(q, 2.058812059747006, 4);
  sqcRZGate(q, 0.4562929288018651, 4);
  sqcRYGate(q, 0.6302481450371342, 5);
  sqcRZGate(q, 0.21971380021256814, 5);
  sqcRYGate(q, -2.787044880207315, 6);
  sqcRZGate(q, 1.739105376711839, 6);
  sqcRYGate(q, -0.8520873424204833, 7);
  sqcRZGate(q, -1.2812204496686914, 7);
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
  sqcRYGate(q, -0.7806760534891453, 0);
  sqcRZGate(q, -0.548055958943097, 0);
  sqcRYGate(q, -0.7031153350279077, 1);
  sqcRZGate(q, -1.7804927045307712, 1);
  sqcRYGate(q, 1.656886066233354, 2);
  sqcRZGate(q, -2.4243555700405723, 2);
  sqcRYGate(q, 2.4537603072888032, 3);
  sqcRZGate(q, -1.97202994632998, 3);
  sqcRYGate(q, -1.2336513148528274, 4);
  sqcRZGate(q, 0.7878469819910981, 4);
  sqcRYGate(q, 1.8824689068338083, 5);
  sqcRZGate(q, -2.5622331944684316, 5);
  sqcRYGate(q, 2.066434777788544, 6);
  sqcRZGate(q, -0.007330185557163028, 6);
  sqcRYGate(q, -1.2699826230147822, 7);
  sqcRZGate(q, 1.5138859392990582, 7);
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
  sqcRYGate(q, 0.9441781015188447, 0);
  sqcRZGate(q, 0.8732959639869894, 0);
  sqcRYGate(q, -2.8824589568541352, 1);
  sqcRZGate(q, -1.054627784481081, 1);
  sqcRYGate(q, 0.4980263439341019, 2);
  sqcRZGate(q, 2.642704007586142, 2);
  sqcRYGate(q, 0.7527740940253763, 3);
  sqcRZGate(q, -3.0366576963307828, 3);
  sqcRYGate(q, -2.891616335207931, 4);
  sqcRZGate(q, -3.109312580058584, 4);
  sqcRYGate(q, 0.04789333741659456, 5);
  sqcRZGate(q, 1.228801181743708, 5);
  sqcRYGate(q, 2.6308079636133233, 6);
  sqcRZGate(q, -2.938729251218281, 6);
  sqcRYGate(q, 2.2024491891524622, 7);
  sqcRZGate(q, -0.6281668743244326, 7);
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
  sqcRYGate(q, -0.4939687586876956, 0);
  sqcRZGate(q, 1.0580439915733755, 0);
  sqcRYGate(q, 0.4266671683098515, 1);
  sqcRZGate(q, 2.953599369905748, 1);
  sqcRYGate(q, 2.1012191006471492, 2);
  sqcRZGate(q, 1.4095227314521024, 2);
  sqcRYGate(q, 1.2230465351949884, 3);
  sqcRZGate(q, 0.10702005029768291, 3);
  sqcRYGate(q, -0.4939914542240178, 4);
  sqcRZGate(q, -1.4016373797424955, 4);
  sqcRYGate(q, -2.411441005719072, 5);
  sqcRZGate(q, -1.9517626405764195, 5);
  sqcRYGate(q, 0.8571124523677369, 6);
  sqcRZGate(q, -1.5492387328342687, 6);
  sqcRYGate(q, -1.8824163543880048, 7);
  sqcRZGate(q, -2.9050909075908944, 7);
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
  sqcRYGate(q, -2.982066926211009, 0);
  sqcRZGate(q, -0.8960880829549034, 0);
  sqcRYGate(q, -1.891144624083121, 1);
  sqcRZGate(q, -0.8925367221496233, 1);
  sqcRYGate(q, 0.2009112772723555, 2);
  sqcRZGate(q, -0.8612064555126199, 2);
  sqcRYGate(q, -2.728251156450378, 3);
  sqcRZGate(q, -1.1350155151334522, 3);
  sqcRYGate(q, -2.1392804889803236, 4);
  sqcRZGate(q, -1.878939746109884, 4);
  sqcRYGate(q, 0.23844967581134568, 5);
  sqcRZGate(q, 1.8776358068816064, 5);
  sqcRYGate(q, 1.5261010428353987, 6);
  sqcRZGate(q, -1.9307254465703039, 6);
  sqcRYGate(q, -1.4677644656850184, 7);
  sqcRZGate(q, 1.2141527847492, 7);
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
  sqcRYGate(q, 1.5330099632666485, 0);
  sqcRZGate(q, 3.120262634192527, 0);
  sqcRYGate(q, 0.5963668906093049, 1);
  sqcRZGate(q, -2.239511972873019, 1);
  sqcRYGate(q, 2.997523127842052, 2);
  sqcRZGate(q, 1.8377307777169374, 2);
  sqcRYGate(q, -2.2810982846765873, 3);
  sqcRZGate(q, 1.2571966403001014, 3);
  sqcRYGate(q, -0.8332346899918734, 4);
  sqcRZGate(q, 2.5362103435478662, 4);
  sqcRYGate(q, -1.7303476337039103, 5);
  sqcRZGate(q, -1.8837407831397606, 5);
  sqcRYGate(q, 2.6117526090350225, 6);
  sqcRZGate(q, -0.7800411497264186, 6);
  sqcRYGate(q, 2.943190425619611, 7);
  sqcRZGate(q, -1.3432790224084066, 7);
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
  sqcRYGate(q, 1.5010590088970077, 0);
  sqcRZGate(q, -0.9104967172977649, 0);
  sqcRYGate(q, -1.925927638590144, 1);
  sqcRZGate(q, -1.402619598213767, 1);
  sqcRYGate(q, -1.9280213493251204, 2);
  sqcRZGate(q, -1.8987143798939234, 2);
  sqcRYGate(q, 0.9677152257469093, 3);
  sqcRZGate(q, -0.7499278454863977, 3);
  sqcRYGate(q, 0.41874004738485215, 4);
  sqcRZGate(q, -2.5080570915946816, 4);
  sqcRYGate(q, 1.9865329886949312, 5);
  sqcRZGate(q, -2.2758667006270503, 5);
  sqcRYGate(q, 2.53654170883047, 6);
  sqcRZGate(q, -0.9417616547189197, 6);
  sqcRYGate(q, -1.6807622520924996, 7);
  sqcRZGate(q, 2.4069724555990253, 7);
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
  sqcRYGate(q, 2.847376035258018, 0);
  sqcRZGate(q, 2.2451060270274774, 0);
  sqcRYGate(q, 0.2398414117147455, 1);
  sqcRZGate(q, 0.2763460390345118, 1);
  sqcRYGate(q, 1.5250860137941897, 2);
  sqcRZGate(q, -1.1741938537809118, 2);
  sqcRYGate(q, -3.0039349150853005, 3);
  sqcRZGate(q, -1.8429444188145774, 3);
  sqcRYGate(q, -0.993618919328064, 4);
  sqcRZGate(q, -3.022022658825054, 4);
  sqcRYGate(q, 0.7891165926887371, 5);
  sqcRZGate(q, 2.5465754622733323, 5);
  sqcRYGate(q, -1.467228206448516, 6);
  sqcRZGate(q, 1.8753704644067337, 6);
  sqcRYGate(q, -2.1371499735495565, 7);
  sqcRZGate(q, -1.6286072742392987, 7);
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
  sqcRYGate(q, -0.4145400504904698, 0);
  sqcRZGate(q, 2.7654477329401326, 0);
  sqcRYGate(q, -1.5417492861773365, 1);
  sqcRZGate(q, 1.3221953765487806, 1);
  sqcRYGate(q, 0.3583209969303253, 2);
  sqcRZGate(q, -1.3507611352012088, 2);
  sqcRYGate(q, -0.45267957700904704, 3);
  sqcRZGate(q, 0.5020830981156785, 3);
  sqcRYGate(q, 2.558106109567328, 4);
  sqcRZGate(q, 1.337767403080937, 4);
  sqcRYGate(q, 2.8180011004471344, 5);
  sqcRZGate(q, 1.2173889323752258, 5);
  sqcRYGate(q, 2.747639479470573, 6);
  sqcRZGate(q, -0.5098383173908252, 6);
  sqcRYGate(q, 0.415956304131082, 7);
  sqcRZGate(q, -1.5009580723093852, 7);
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
  sqcRYGate(q, -1.2935582562242756, 0);
  sqcRZGate(q, -0.15741957627373804, 0);
  sqcRYGate(q, 0.47804899155452807, 1);
  sqcRZGate(q, -2.0475595579249415, 1);
  sqcRYGate(q, -0.9356451938893082, 2);
  sqcRZGate(q, -1.6307876875023144, 2);
  sqcRYGate(q, -0.17051888722960928, 3);
  sqcRZGate(q, -0.8192137202388204, 3);
  sqcRYGate(q, 0.5792211578099898, 4);
  sqcRZGate(q, 0.5033378059989104, 4);
  sqcRYGate(q, 0.35932375080572826, 5);
  sqcRZGate(q, 2.997093856583761, 5);
  sqcRYGate(q, 2.3505884419118352, 6);
  sqcRZGate(q, -2.250237502393757, 6);
  sqcRYGate(q, 0.40604078025574086, 7);
  sqcRZGate(q, 1.9940484597183312, 7);
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
  sqcRYGate(q, -1.6066200118092189, 0);
  sqcRZGate(q, -2.671124933304683, 0);
  sqcRYGate(q, -2.849715684154643, 1);
  sqcRZGate(q, 1.348329599272487, 1);
  sqcRYGate(q, 1.4190933218342396, 2);
  sqcRZGate(q, 0.98315753808488, 2);
  sqcRYGate(q, 0.17650574371860372, 3);
  sqcRZGate(q, 3.078229216277902, 3);
  sqcRYGate(q, 1.902309184652107, 4);
  sqcRZGate(q, 0.03277908025217078, 4);
  sqcRYGate(q, 0.7815199268960532, 5);
  sqcRZGate(q, 0.970409075017833, 5);
  sqcRYGate(q, -0.4334460961161252, 6);
  sqcRZGate(q, 2.994845407062157, 6);
  sqcRYGate(q, 2.8786476162776142, 7);
  sqcRZGate(q, -2.8013248628589933, 7);
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
  sqcRYGate(q, 1.9537758435323749, 0);
  sqcRZGate(q, -2.2308565169427466, 0);
  sqcRYGate(q, -0.9265271502428298, 1);
  sqcRZGate(q, 0.15997235566772586, 1);
  sqcRYGate(q, 2.622438280623944, 2);
  sqcRZGate(q, 1.0535879331168843, 2);
  sqcRYGate(q, 1.2673980455182547, 3);
  sqcRZGate(q, -0.15998428999726058, 3);
  sqcRYGate(q, -1.0535223791944945, 4);
  sqcRZGate(q, 1.2100820088525313, 4);
  sqcRYGate(q, -2.743794104953039, 5);
  sqcRZGate(q, -1.3737363860957963, 5);
  sqcRYGate(q, -0.1146331402628732, 6);
  sqcRZGate(q, -1.7334992437792094, 6);
  sqcRYGate(q, -3.035328099549611, 7);
  sqcRZGate(q, 0.6574334845311087, 7);
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
  sqcRYGate(q, 1.5947327373804887, 0);
  sqcRZGate(q, -0.6172064067129033, 0);
  sqcRYGate(q, -0.9358431966691123, 1);
  sqcRZGate(q, -0.4842671357593638, 1);
  sqcRYGate(q, 0.8879228055535001, 2);
  sqcRZGate(q, 2.032698698670343, 2);
  sqcRYGate(q, 1.9187471632206945, 3);
  sqcRZGate(q, 1.509807403361794, 3);
  sqcRYGate(q, 2.605873121239122, 4);
  sqcRZGate(q, -2.3172734995734277, 4);
  sqcRYGate(q, -2.7424839965698378, 5);
  sqcRZGate(q, 2.0802105439280125, 5);
  sqcRYGate(q, -2.714516264777274, 6);
  sqcRZGate(q, 2.8300370288910286, 6);
  sqcRYGate(q, -1.846418588324751, 7);
  sqcRZGate(q, 2.5512614858578524, 7);
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
  sqcRYGate(q, 0.47356631615659417, 0);
  sqcRZGate(q, 0.21305681004615626, 0);
  sqcRYGate(q, -3.062246838735602, 1);
  sqcRZGate(q, 2.56462771744618, 1);
  sqcRYGate(q, 2.190352515732959, 2);
  sqcRZGate(q, 0.7504509224757046, 2);
  sqcRYGate(q, 0.6974235730759819, 3);
  sqcRZGate(q, -1.6834891643143615, 3);
  sqcRYGate(q, 2.8943638835598127, 4);
  sqcRZGate(q, 2.484764277178727, 4);
  sqcRYGate(q, 0.24958940925563208, 5);
  sqcRZGate(q, -0.42103803558454156, 5);
  sqcRYGate(q, 0.23202324139632857, 6);
  sqcRZGate(q, 0.3815464766142541, 6);
  sqcRYGate(q, -1.1652427516040271, 7);
  sqcRZGate(q, -3.0108089677130163, 7);
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
  sqcRYGate(q, 1.397117269812393, 0);
  sqcRZGate(q, -1.5385356796247676, 0);
  sqcRYGate(q, -0.6795113332934006, 1);
  sqcRZGate(q, -1.6611044359113025, 1);
  sqcRYGate(q, 2.203557183590557, 2);
  sqcRZGate(q, -0.33299824432508096, 2);
  sqcRYGate(q, 2.99978823557789, 3);
  sqcRZGate(q, -0.21150823150365977, 3);
  sqcRYGate(q, 1.3666713119059484, 4);
  sqcRZGate(q, -1.1363503261296173, 4);
  sqcRYGate(q, 1.415914189058178, 5);
  sqcRZGate(q, 1.0847528815488063, 5);
  sqcRYGate(q, -1.6656180809167491, 6);
  sqcRZGate(q, -1.8062797823605434, 6);
  sqcRYGate(q, -1.269112124055722, 7);
  sqcRZGate(q, -2.9085372682373674, 7);
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
  sqcRYGate(q, -1.839855582063614, 0);
  sqcRZGate(q, 1.9483702116636694, 0);
  sqcRYGate(q, 0.07400057762957761, 1);
  sqcRZGate(q, -2.824122828098351, 1);
  sqcRYGate(q, -1.481129298938077, 2);
  sqcRZGate(q, -2.1809652428164545, 2);
  sqcRYGate(q, 0.771409092280697, 3);
  sqcRZGate(q, -3.0574344992214137, 3);
  sqcRYGate(q, 2.1786076070540075, 4);
  sqcRZGate(q, -2.7427590489449307, 4);
  sqcRYGate(q, 0.7767944161575278, 5);
  sqcRZGate(q, 0.18805447082119733, 5);
  sqcRYGate(q, 1.430766944845141, 6);
  sqcRZGate(q, -2.0843842476691936, 6);
  sqcRYGate(q, 1.9045340074947, 7);
  sqcRZGate(q, 2.9341656201224424, 7);
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
  sqcRYGate(q, 2.851060457648753, 0);
  sqcRZGate(q, -1.1347399826067859, 0);
  sqcRYGate(q, -1.311574895937657, 1);
  sqcRZGate(q, 1.6839004883473234, 1);
  sqcRYGate(q, 1.443040467431703, 2);
  sqcRZGate(q, 2.578222602376648, 2);
  sqcRYGate(q, 0.8153037116927404, 3);
  sqcRZGate(q, -2.3281975201772163, 3);
  sqcRYGate(q, 0.4962677513599986, 4);
  sqcRZGate(q, 1.2771259204390555, 4);
  sqcRYGate(q, 1.550638939113503, 5);
  sqcRZGate(q, -1.424653294521086, 5);
  sqcRYGate(q, -2.05524241389858, 6);
  sqcRZGate(q, 2.6045850511790323, 6);
  sqcRYGate(q, 2.029379700981657, 7);
  sqcRZGate(q, 2.0660337576971495, 7);
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
  sqcRYGate(q, 2.167060646803517, 0);
  sqcRZGate(q, -1.8602601850629137, 0);
  sqcRYGate(q, -2.475832422710999, 1);
  sqcRZGate(q, 2.5272581556195712, 1);
  sqcRYGate(q, -2.778305625348485, 2);
  sqcRZGate(q, 1.5150390051991147, 2);
  sqcRYGate(q, 2.4196953064801714, 3);
  sqcRZGate(q, -2.2509096372293818, 3);
  sqcRYGate(q, 2.164973881450316, 4);
  sqcRZGate(q, 1.6819043427752012, 4);
  sqcRYGate(q, 0.7107534983908643, 5);
  sqcRZGate(q, 1.89821734322563, 5);
  sqcRYGate(q, -2.4339124561463823, 6);
  sqcRZGate(q, 2.1330296131559567, 6);
  sqcRYGate(q, 2.553710201670275, 7);
  sqcRZGate(q, -1.6877791003980063, 7);
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
  sqcRYGate(q, -2.274745670217075, 0);
  sqcRZGate(q, 1.046380647240389, 0);
  sqcRYGate(q, -2.431604131220153, 1);
  sqcRZGate(q, 2.6010176097821165, 1);
  sqcRYGate(q, 1.4646185402360201, 2);
  sqcRZGate(q, 1.129935403494916, 2);
  sqcRYGate(q, -0.8296946608183139, 3);
  sqcRZGate(q, -0.9077705618838791, 3);
  sqcRYGate(q, -0.8024014279863493, 4);
  sqcRZGate(q, 2.6677017118523927, 4);
  sqcRYGate(q, 1.7965186314037414, 5);
  sqcRZGate(q, -0.4253644523171758, 5);
  sqcRYGate(q, 1.8765456661523028, 6);
  sqcRZGate(q, 1.4503169913603866, 6);
  sqcRYGate(q, 2.5589694544950787, 7);
  sqcRZGate(q, 0.5503048963019461, 7);
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
  sqcRYGate(q, 2.0869490615391797, 0);
  sqcRZGate(q, -2.4354227247198756, 0);
  sqcRYGate(q, 2.370670979409436, 1);
  sqcRZGate(q, -2.993005217329403, 1);
  sqcRYGate(q, 0.7499423358303413, 2);
  sqcRZGate(q, 0.8135216930679565, 2);
  sqcRYGate(q, 2.7979344667615687, 3);
  sqcRZGate(q, -2.024122002447206, 3);
  sqcRYGate(q, 0.5623530367832301, 4);
  sqcRZGate(q, 2.2676386478095214, 4);
  sqcRYGate(q, 2.4340814599296423, 5);
  sqcRZGate(q, 2.7290074500682238, 5);
  sqcRYGate(q, 1.0186616670134558, 6);
  sqcRZGate(q, 2.913573089994979, 6);
  sqcRYGate(q, -2.178579174999196, 7);
  sqcRZGate(q, 0.32333354782170093, 7);
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
  sqcRYGate(q, 0.18908579444682694, 0);
  sqcRZGate(q, 0.42717622601933686, 0);
  sqcRYGate(q, 1.3377278697190227, 1);
  sqcRZGate(q, 2.767307587311268, 1);
  sqcRYGate(q, -1.6679593712151022, 2);
  sqcRZGate(q, 0.7662507244314245, 2);
  sqcRYGate(q, -0.9312214768914094, 3);
  sqcRZGate(q, -0.9013718865270173, 3);
  sqcRYGate(q, -2.257026380143961, 4);
  sqcRZGate(q, 2.837373469944298, 4);
  sqcRYGate(q, -0.8028886086140563, 5);
  sqcRZGate(q, 1.6247592044783137, 5);
  sqcRYGate(q, 2.455018120708282, 6);
  sqcRZGate(q, -1.0060853580688178, 6);
  sqcRYGate(q, -0.5214752139753068, 7);
  sqcRZGate(q, -0.9585455713072989, 7);
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
  sqcRYGate(q, 2.0400839430428297, 0);
  sqcRZGate(q, 2.789901842837902, 0);
  sqcRYGate(q, 0.8791637981912813, 1);
  sqcRZGate(q, -3.09941273734808, 1);
  sqcRYGate(q, -2.680324425415521, 2);
  sqcRZGate(q, -2.415253970808839, 2);
  sqcRYGate(q, 2.844324084068975, 3);
  sqcRZGate(q, 2.7271703265945053, 3);
  sqcRYGate(q, -0.7156060644584201, 4);
  sqcRZGate(q, -3.012814536868574, 4);
  sqcRYGate(q, -2.6525254109302336, 5);
  sqcRZGate(q, 2.389996916684781, 5);
  sqcRYGate(q, -1.1506285087793495, 6);
  sqcRZGate(q, -1.5982561949866758, 6);
  sqcRYGate(q, 1.3408430722824716, 7);
  sqcRZGate(q, 0.9539030769466453, 7);
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
  sqcRYGate(q, 2.6004818232138738, 0);
  sqcRZGate(q, 2.0952407641593256, 0);
  sqcRYGate(q, -0.4059054758155032, 1);
  sqcRZGate(q, 2.9832660161535287, 1);
  sqcRYGate(q, 0.03931753406414136, 2);
  sqcRZGate(q, 0.1556661810512543, 2);
  sqcRYGate(q, -2.9231936684288162, 3);
  sqcRZGate(q, 0.3784302336133347, 3);
  sqcRYGate(q, -2.4726316651420484, 4);
  sqcRZGate(q, -1.4668759955821822, 4);
  sqcRYGate(q, -0.5692103988367234, 5);
  sqcRZGate(q, 2.7373908858875464, 5);
  sqcRYGate(q, -2.7342517235661186, 6);
  sqcRZGate(q, 2.8738921326167355, 6);
  sqcRYGate(q, 2.428712781659571, 7);
  sqcRZGate(q, 1.4757256398261267, 7);
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
  sqcRYGate(q, -0.9185295057357249, 0);
  sqcRZGate(q, 2.709833459528551, 0);
  sqcRYGate(q, 2.3376452475928455, 1);
  sqcRZGate(q, -1.785407092617624, 1);
  sqcRYGate(q, -1.243863290851356, 2);
  sqcRZGate(q, -2.0552019920087314, 2);
  sqcRYGate(q, -0.47538356788775227, 3);
  sqcRZGate(q, 0.9044628722713774, 3);
  sqcRYGate(q, -2.6422791323782344, 4);
  sqcRZGate(q, 2.486524538204746, 4);
  sqcRYGate(q, -1.8631755674507067, 5);
  sqcRZGate(q, -2.3058293840610173, 5);
  sqcRYGate(q, 1.9646803150940666, 6);
  sqcRZGate(q, 2.38090522259039, 6);
  sqcRYGate(q, -2.547524246613168, 7);
  sqcRZGate(q, 3.111745550916245, 7);
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
  sqcRYGate(q, 2.704990480958069, 0);
  sqcRZGate(q, 0.6985290544531408, 0);
  sqcRYGate(q, 0.07531979891514505, 1);
  sqcRZGate(q, 1.4137821964296176, 1);
  sqcRYGate(q, 0.7669961067705682, 2);
  sqcRZGate(q, -1.5548965812212436, 2);
  sqcRYGate(q, 0.8307036546151765, 3);
  sqcRZGate(q, -2.8188009275986885, 3);
  sqcRYGate(q, 1.0706445989699676, 4);
  sqcRZGate(q, 0.8888797759516716, 4);
  sqcRYGate(q, -1.388365357663669, 5);
  sqcRZGate(q, 1.2781084592618308, 5);
  sqcRYGate(q, 2.3794536857513027, 6);
  sqcRZGate(q, -0.9172891261750885, 6);
  sqcRYGate(q, -1.973625556678188, 7);
  sqcRZGate(q, -2.6549606070843126, 7);
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
  sqcRYGate(q, -0.9613630573901372, 0);
  sqcRZGate(q, 1.1104984989575142, 0);
  sqcRYGate(q, 1.6509232962449572, 1);
  sqcRZGate(q, -3.0768581204524454, 1);
  sqcRYGate(q, 1.2730547697818633, 2);
  sqcRZGate(q, 2.750282334897094, 2);
  sqcRYGate(q, -2.96971031832573, 3);
  sqcRZGate(q, -2.8804702320777884, 3);
  sqcRYGate(q, -2.611959466737088, 4);
  sqcRZGate(q, 1.0926686740433924, 4);
  sqcRYGate(q, 1.028618651137423, 5);
  sqcRZGate(q, 1.1508992708855734, 5);
  sqcRYGate(q, 1.63439551678583, 6);
  sqcRZGate(q, 2.4165059649095912, 6);
  sqcRYGate(q, -1.3655063629764923, 7);
  sqcRZGate(q, -2.520256912257949, 7);
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
  sqcRYGate(q, -1.371756151686042, 0);
  sqcRZGate(q, 2.0620540129330656, 0);
  sqcRYGate(q, 1.1169001806764083, 1);
  sqcRZGate(q, 2.1275695756649187, 1);
  sqcRYGate(q, -1.3736246366030649, 2);
  sqcRZGate(q, -0.14049743441298634, 2);
  sqcRYGate(q, -2.4361846670701905, 3);
  sqcRZGate(q, -0.652269833537499, 3);
  sqcRYGate(q, -2.568956080858965, 4);
  sqcRZGate(q, -2.319585299940881, 4);
  sqcRYGate(q, 1.5489368995536337, 5);
  sqcRZGate(q, 0.07746390420907634, 5);
  sqcRYGate(q, 0.22117054864649432, 6);
  sqcRZGate(q, -0.5534541040693475, 6);
  sqcRYGate(q, 0.23779428575235165, 7);
  sqcRZGate(q, -1.7632873788226329, 7);
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
  sqcRYGate(q, 2.6862897177140423, 0);
  sqcRZGate(q, -0.6526951885016583, 0);
  sqcRYGate(q, 2.1168572493383726, 1);
  sqcRZGate(q, -1.2694888732131817, 1);
  sqcRYGate(q, 1.152824822557613, 2);
  sqcRZGate(q, 1.8919271817333387, 2);
  sqcRYGate(q, -1.9438733565328925, 3);
  sqcRZGate(q, -2.1075460003615456, 3);
  sqcRYGate(q, 2.457057863284811, 4);
  sqcRZGate(q, -0.35933645725620417, 4);
  sqcRYGate(q, 1.2578809485551794, 5);
  sqcRZGate(q, 0.9344233104334788, 5);
  sqcRYGate(q, 0.9179684132896302, 6);
  sqcRZGate(q, 1.1242802856967868, 6);
  sqcRYGate(q, -0.7668789131872424, 7);
  sqcRZGate(q, -1.2643345920872668, 7);

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
