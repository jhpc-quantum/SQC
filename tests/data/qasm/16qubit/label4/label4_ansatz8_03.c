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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -1.5381794154594208, 0);
  sqcRYGate(q, -0.611157756120546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07575294793143428, 0);
  sqcRYGate(q, 0.0620689366382665, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3273346516033309, 2);
  sqcRYGate(q, 1.9522934314785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4038581269277441, 2);
  sqcRYGate(q, -1.4144297993288886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.15264878873094292, 4);
  sqcRYGate(q, -2.1270708238438583, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6286865288449364, 4);
  sqcRYGate(q, 0.3569389889372454, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9532391220515188, 6);
  sqcRYGate(q, -1.6029135854068521, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.794568786276283, 6);
  sqcRYGate(q, -0.1084310075717907, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0936560742747963, 8);
  sqcRYGate(q, 0.11482334355700807, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1339112975032863, 8);
  sqcRYGate(q, 3.0898331226995177, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.981628721005981, 10);
  sqcRYGate(q, 1.6955367956678566, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.05386854682073285, 10);
  sqcRYGate(q, 2.996041194596515, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5001378027310724, 12);
  sqcRYGate(q, 2.5393259454734807, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.7431302773010144, 12);
  sqcRYGate(q, 2.2645852041685584, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.958730206512304, 14);
  sqcRYGate(q, 0.795409557708318, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.3844924354126152, 14);
  sqcRYGate(q, -1.298303728512436, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.2976500812790617, 0);
  sqcRYGate(q, 2.696543962374751, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.003919842319697331, 0);
  sqcRYGate(q, -3.117802052700974, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.131184023637731, 2);
  sqcRYGate(q, -2.952572168331072, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.1191955752699094, 2);
  sqcRYGate(q, 0.8845068675052886, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.641103122534211, 4);
  sqcRYGate(q, 0.7872414293380183, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.1997754143409303, 4);
  sqcRYGate(q, 0.3898732115827661, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.1480125896477054, 6);
  sqcRYGate(q, 3.1104204119036067, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.546144501271307, 6);
  sqcRYGate(q, 1.5554237300399008, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.5625719576499507, 8);
  sqcRYGate(q, 0.019958233597465735, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.19496075747084649, 8);
  sqcRYGate(q, -1.5454295609583157, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.361738751185567, 10);
  sqcRYGate(q, -3.0090401093239945, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.3290837729606935, 10);
  sqcRYGate(q, 0.0017901913678919359, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.5563764379853104, 12);
  sqcRYGate(q, -0.6407757301142665, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.7029410644235883, 12);
  sqcRYGate(q, -1.8685338502813025, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.2046092822222336, 1);
  sqcRYGate(q, -2.2053048915111257, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.510180106711855, 1);
  sqcRYGate(q, 1.5876537658906336, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.36932025454678197, 3);
  sqcRYGate(q, -2.5976687754315497, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.911624441604388, 3);
  sqcRYGate(q, 1.4348875314885126, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.00767500809356, 5);
  sqcRYGate(q, -0.1087409168405795, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.5493232607516467, 5);
  sqcRYGate(q, 1.831814409550077, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5608225029909799, 7);
  sqcRYGate(q, -2.1515516981722627, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.80853236697749, 7);
  sqcRYGate(q, 0.24047191019539496, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.41088270951639716, 9);
  sqcRYGate(q, 0.7842368055021898, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.11847270176837732, 9);
  sqcRYGate(q, 0.07055394661407544, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.085186407509756, 11);
  sqcRYGate(q, -2.928914465033182, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.5093862250046872, 11);
  sqcRYGate(q, -0.011642783617044294, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.1895068409524878, 13);
  sqcRYGate(q, -0.9306451225287367, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.3008453964774755, 13);
  sqcRYGate(q, -2.7883751787161875, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.6419381705403184, 0);
  sqcRYGate(q, 3.031029636876577, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6752890387248691, 0);
  sqcRYGate(q, 1.8345447517273241, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5562210359306647, 2);
  sqcRYGate(q, 0.722526244480584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4558081243184426, 2);
  sqcRYGate(q, 1.6951726119571067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3679974262711676, 4);
  sqcRYGate(q, -1.474813267727944, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.799578508632231, 4);
  sqcRYGate(q, -1.1962471338641292, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.031877979586165, 6);
  sqcRYGate(q, 0.3424927818097393, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.462958062673224, 6);
  sqcRYGate(q, -2.993969514602753, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2118267169433574, 8);
  sqcRYGate(q, 2.060294822819956, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.515413769212417, 8);
  sqcRYGate(q, 1.5712367242326761, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.4786121317879255, 10);
  sqcRYGate(q, 0.09383353437473688, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.824551027324444, 10);
  sqcRYGate(q, -2.096195653833625, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.402626766649121, 12);
  sqcRYGate(q, 2.233562181474948, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.551267082569809, 12);
  sqcRYGate(q, -2.189132838391889, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.9850843643646789, 14);
  sqcRYGate(q, 0.7891542880764382, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.25407102328419917, 14);
  sqcRYGate(q, -2.2269028932684387, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.8142146219187723, 0);
  sqcRYGate(q, 0.09090850875002232, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.004650325241501108, 0);
  sqcRYGate(q, 0.7644964868078008, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.045538951616673, 2);
  sqcRYGate(q, -2.1321077335304857, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.688385128548003, 2);
  sqcRYGate(q, 1.693064444336133, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5277962508742985, 4);
  sqcRYGate(q, 0.6864890182657817, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.3412657836409614, 4);
  sqcRYGate(q, -0.00020926647142349705, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.452863504168854, 6);
  sqcRYGate(q, 2.4743882246493762, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.1329132256305376, 6);
  sqcRYGate(q, 3.0917876494887655, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.4869322049843086, 8);
  sqcRYGate(q, 3.1070251111337046, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.5987251910097768, 8);
  sqcRYGate(q, 1.5601747541111308, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.282075824511428, 10);
  sqcRYGate(q, 1.675017989503038, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.007756483714885577, 10);
  sqcRYGate(q, -3.133817437296199, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.234729599799601, 12);
  sqcRYGate(q, 2.6937896473418603, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -3.060372899260361, 12);
  sqcRYGate(q, 2.9519049968314652, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.3521363369097426, 1);
  sqcRYGate(q, 0.05536283056545255, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.452150949301133, 1);
  sqcRYGate(q, -1.7502384422693178, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3264148551217447, 3);
  sqcRYGate(q, -1.0121641271550164, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3888686764783174, 3);
  sqcRYGate(q, -3.0072320660101792, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.20847774344840087, 5);
  sqcRYGate(q, 0.004104101224860076, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.008301095765908428, 5);
  sqcRYGate(q, -3.140090273537007, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5530104117868662, 7);
  sqcRYGate(q, -2.40066809768184, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.1335229200471866, 7);
  sqcRYGate(q, -0.12402054370148008, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.6766850024464066, 9);
  sqcRYGate(q, 0.10440570488423417, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.06106216059748851, 9);
  sqcRYGate(q, -3.1091585126988397, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.2842874403775033, 11);
  sqcRYGate(q, 2.135684665177809, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.3921077437351546, 11);
  sqcRYGate(q, 0.040678459579263096, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.5030936364193526, 13);
  sqcRYGate(q, -1.4340387467106943, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.974273426431236, 13);
  sqcRYGate(q, -3.0539419024163625, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.7201871772388184, 0);
  sqcRYGate(q, 2.224919735107032, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.076681318058779, 0);
  sqcRYGate(q, 0.049292131032625086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7836125507782743, 2);
  sqcRYGate(q, 0.5233520454489353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1094781877775857, 2);
  sqcRYGate(q, 0.726084464972045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.03581523895912131, 4);
  sqcRYGate(q, 2.1013285440854674, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.006176419842286229, 4);
  sqcRYGate(q, 0.0028850597575225123, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2556592449980382, 6);
  sqcRYGate(q, -1.3583324334595788, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7927804124920037, 6);
  sqcRYGate(q, -2.4203488403525277, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.37878403616990197, 8);
  sqcRYGate(q, -2.353101979105322, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6051367866799409, 8);
  sqcRYGate(q, 0.1964973489355799, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0532511302029564, 10);
  sqcRYGate(q, -1.7545084294427153, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1380516345525638, 10);
  sqcRYGate(q, 2.8637294372393227, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5174451822360897, 12);
  sqcRYGate(q, -2.0147954638401915, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5980836589203748, 12);
  sqcRYGate(q, -0.8571207070008171, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.2223098549395783, 14);
  sqcRYGate(q, -2.269304872364259, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.6923104085659382, 14);
  sqcRYGate(q, -0.5138186399062056, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.8475823185772857, 0);
  sqcRYGate(q, -1.6082083412063, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1387789417072613, 0);
  sqcRYGate(q, 0.013526686480109795, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.524548348431734, 2);
  sqcRYGate(q, 0.6634202152726623, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1409390778817325, 2);
  sqcRYGate(q, 1.304266612062112, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.8357284151358444, 4);
  sqcRYGate(q, 1.136868531688837, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.8989077576632765, 4);
  sqcRYGate(q, -0.4549642352708414, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.6942270280645157, 6);
  sqcRYGate(q, -1.9587009647805864, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.42380116333867424, 6);
  sqcRYGate(q, 3.12472482356381, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.04435532659359845, 8);
  sqcRYGate(q, -1.8701156132735965, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.8204655854380105, 8);
  sqcRYGate(q, -1.5498139400208808, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.73171055003289, 10);
  sqcRYGate(q, -1.7971905793215905, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.10758400661449306, 10);
  sqcRYGate(q, 3.1397989080555195, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.498205974809746, 12);
  sqcRYGate(q, -1.3269362364029664, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.8890490013495188, 12);
  sqcRYGate(q, 2.316836981351243, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.7437517846029063, 1);
  sqcRYGate(q, -1.2446969322375407, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.003910258552412671, 1);
  sqcRYGate(q, 0.5138971630870276, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8027360806942916, 3);
  sqcRYGate(q, -2.3135405211694433, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7510781212417816, 3);
  sqcRYGate(q, 3.1130375615735675, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.969671830750781, 5);
  sqcRYGate(q, -0.17426756054317405, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1125572736425613, 5);
  sqcRYGate(q, 0.101286566242762, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7919708532981333, 7);
  sqcRYGate(q, -3.04966782132883, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.001054102432783706, 7);
  sqcRYGate(q, -3.1394329025944874, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.5828947468929542, 9);
  sqcRYGate(q, 2.1242026707471524, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.001996768785631756, 9);
  sqcRYGate(q, 1.503971606588622, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.45165343858251283, 11);
  sqcRYGate(q, 2.0009769984977757, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.715983560924351, 11);
  sqcRYGate(q, -3.125417596174568, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.7370362868897932, 13);
  sqcRYGate(q, 0.886049905259287, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.7840783845245827, 13);
  sqcRYGate(q, 2.816268182262553, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.7933950259023992, 0);
  sqcRYGate(q, -2.141030666723568, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5244606766757434, 0);
  sqcRYGate(q, 1.458993023475787, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.787377869238691, 2);
  sqcRYGate(q, -1.5018561078024915, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8275622253843786, 2);
  sqcRYGate(q, 1.0208727403736224, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8575372182290444, 4);
  sqcRYGate(q, 2.846893425507705, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7417681258080542, 4);
  sqcRYGate(q, -0.26663939699451156, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1140097803089204, 6);
  sqcRYGate(q, -2.5258688635051674, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9989785349551457, 6);
  sqcRYGate(q, 0.08701923427564395, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7033940710099653, 8);
  sqcRYGate(q, -0.21994986331940827, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5101193497642236, 8);
  sqcRYGate(q, -0.1867525713284435, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6673053257187789, 10);
  sqcRYGate(q, -1.53012519699629, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5617544606907368, 10);
  sqcRYGate(q, -3.0344948572862247, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.3789160106553826, 12);
  sqcRYGate(q, -1.6189875259785096, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.851053750501519, 12);
  sqcRYGate(q, -2.6235528422854, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.20890257486438926, 14);
  sqcRYGate(q, -0.1002093444156777, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.8033848736419704, 14);
  sqcRYGate(q, -0.5995187736386375, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.814029161928595, 0);
  sqcRYGate(q, -0.501270171211081, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.39039570631860426, 0);
  sqcRYGate(q, -1.2050529336377918, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8596116050628215, 2);
  sqcRYGate(q, 1.4254267994020307, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1367909234232467, 2);
  sqcRYGate(q, 0.0028769368614005586, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.2928705790716899, 4);
  sqcRYGate(q, -2.662288631528787, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5848091561681985, 4);
  sqcRYGate(q, 1.5297117762209105, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4734096097801979, 6);
  sqcRYGate(q, 1.180834354482399, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.131797750534586, 6);
  sqcRYGate(q, -3.1229725365988967, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.585228326095442, 8);
  sqcRYGate(q, 0.4182305532321484, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.5938400345984718, 8);
  sqcRYGate(q, 0.9404114408114124, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.6699768723110715, 10);
  sqcRYGate(q, -2.8709401269087707, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.1377984329676263, 10);
  sqcRYGate(q, -3.138775874115823, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.6935423729206489, 12);
  sqcRYGate(q, -2.511032841415976, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.3269619788862705, 12);
  sqcRYGate(q, 2.0263467902346233, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.8114232721246555, 1);
  sqcRYGate(q, 0.19164291128386335, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.007837929331431681, 1);
  sqcRYGate(q, 3.122356414311292, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.076260776429062, 3);
  sqcRYGate(q, -2.5935476780691293, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.0036222537337672854, 3);
  sqcRYGate(q, 3.137118911783403, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9252741833491712, 5);
  sqcRYGate(q, -2.618514147345256, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.060544990365924665, 5);
  sqcRYGate(q, 2.9888906607732526, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.12538230184184257, 7);
  sqcRYGate(q, 1.8069320449049968, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.043127975234104, 7);
  sqcRYGate(q, 0.09844606994961769, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.0023571804301807, 9);
  sqcRYGate(q, -1.6667983112394351, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.0931907852569704, 9);
  sqcRYGate(q, -0.08273931515194556, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.039267288621450014, 11);
  sqcRYGate(q, -0.6907209896183425, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -3.1391607839431166, 11);
  sqcRYGate(q, 0.665542986094498, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.3969944019923204, 13);
  sqcRYGate(q, 0.6367949238677504, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.1073322152690155, 13);
  sqcRYGate(q, -1.5254782322408025, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -3.0425250277250884, 0);
  sqcRYGate(q, -2.4171647906673845, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6797544897104435, 0);
  sqcRYGate(q, 2.992528961514542, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.097026240786829, 2);
  sqcRYGate(q, 1.4476827560098398, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3744723805202406, 2);
  sqcRYGate(q, -3.137880301124268, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4201119266033047, 4);
  sqcRYGate(q, 1.5216492862743398, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3084935484810634, 4);
  sqcRYGate(q, -2.9984533208366098, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.16489915486919837, 6);
  sqcRYGate(q, 2.894609932680039, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.07602500449374273, 6);
  sqcRYGate(q, -1.5756628055383224, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.376306387210543, 8);
  sqcRYGate(q, 0.845558062560257, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1357639649981173, 8);
  sqcRYGate(q, 3.0908961874528558, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.794529510092868, 10);
  sqcRYGate(q, 2.7838604279864017, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1384907021406137, 10);
  sqcRYGate(q, -0.016226046110945802, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6714417236352234, 12);
  sqcRYGate(q, 0.6187646525559247, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.131304469413407, 12);
  sqcRYGate(q, 1.6129274916656664, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.1980593418514283, 14);
  sqcRYGate(q, 2.657142848109071, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.0437542491159335, 14);
  sqcRYGate(q, -0.5068734043828896, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.3932396920914655, 0);
  sqcRYGate(q, -0.9557455422653343, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8537798076532663, 0);
  sqcRYGate(q, -2.729083653573271, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5356015378886303, 2);
  sqcRYGate(q, -1.3266065953549164, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.3738183659230492, 2);
  sqcRYGate(q, -0.0020672661555427916, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.03880333998661545, 4);
  sqcRYGate(q, 3.0365073480703977, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5117209882811905, 4);
  sqcRYGate(q, 1.461616844000372, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.112549777218102, 6);
  sqcRYGate(q, 2.3234879707055316, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.7852660557205158, 6);
  sqcRYGate(q, 3.06453530645317, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.5769366982049153, 8);
  sqcRYGate(q, -0.1367057795878241, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.5612458327394885, 8);
  sqcRYGate(q, 0.7099645770537433, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.528550846157836, 10);
  sqcRYGate(q, -2.5302964461343036, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.009502358076625583, 10);
  sqcRYGate(q, -0.08299519837070514, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.31349210455267773, 12);
  sqcRYGate(q, 2.666567406449923, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.2577187120313065, 12);
  sqcRYGate(q, -3.039451490061424, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.798469939957256, 1);
  sqcRYGate(q, -1.1288444094593395, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.129203042755966, 1);
  sqcRYGate(q, -0.10238244999593836, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.072018405413246, 3);
  sqcRYGate(q, -0.049821055705589146, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.590332460036165, 3);
  sqcRYGate(q, 0.4303336902505273, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5709554886921542, 5);
  sqcRYGate(q, 2.4652890669491634, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5697455587157125, 5);
  sqcRYGate(q, -1.5884189125957282, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.1030224714602506, 7);
  sqcRYGate(q, -2.347590122327913, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.5669138510190341, 7);
  sqcRYGate(q, 0.004222382309012385, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.5954994145460157, 9);
  sqcRYGate(q, 2.16715687389252, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.14074308944354, 9);
  sqcRYGate(q, -3.1396284929087623, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.6241060804549834, 11);
  sqcRYGate(q, -1.1529789419015994, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -3.1356438419013655, 11);
  sqcRYGate(q, 3.0817622239015643, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.17166405835374213, 13);
  sqcRYGate(q, -0.889124212179266, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.864772444771136, 13);
  sqcRYGate(q, -1.5889867027663953, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.214402625403263, 0);
  sqcRYGate(q, -0.8398172934152477, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.129331351580467, 0);
  sqcRYGate(q, 0.0721293369285636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2967626937630625, 2);
  sqcRYGate(q, 1.5705059365664285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5674204982362565, 2);
  sqcRYGate(q, 1.571507820000161, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1277705438039205, 4);
  sqcRYGate(q, -1.570367825481059, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5676320409156483, 4);
  sqcRYGate(q, -1.572133199351402, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5431770891638927, 6);
  sqcRYGate(q, 2.040010049919716, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5705655652682804, 6);
  sqcRYGate(q, 1.5713518280973613, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5619722936997718, 8);
  sqcRYGate(q, -2.1698024340215447, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5716518063518894, 8);
  sqcRYGate(q, 1.5704697487514858, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.695700080189473, 10);
  sqcRYGate(q, 1.5795534918924807, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5711780510743694, 10);
  sqcRYGate(q, 0.0140452599532539, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.8214831686093778, 12);
  sqcRYGate(q, -1.2886376330569504, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.4217302535984153, 12);
  sqcRYGate(q, -1.5926632329484127, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.008552948060802399, 14);
  sqcRYGate(q, 0.9676657422477846, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.03999027177580672, 14);
  sqcRYGate(q, 1.6018548198037774, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.9227819004967142, 0);
  sqcRYGate(q, 2.534500503132278, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.010580845743606737, 0);
  sqcRYGate(q, 0.004492691830156586, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6140226291270213, 2);
  sqcRYGate(q, 1.6007051677357573, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0461840774871036, 2);
  sqcRYGate(q, 3.0464545974795967, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5398005731679885, 4);
  sqcRYGate(q, -1.5305879790876702, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.1028757338031348, 4);
  sqcRYGate(q, -3.0490031619567612, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.7440684948927431, 6);
  sqcRYGate(q, -1.536157277960882, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.0008278624251012445, 6);
  sqcRYGate(q, -3.1388182302363337, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.099010008446657, 8);
  sqcRYGate(q, 2.7264073176238326, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.5699818278571616, 8);
  sqcRYGate(q, -0.016660588110648966, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.5605782675132598, 10);
  sqcRYGate(q, 1.5528239572084523, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.5717836630246949, 10);
  sqcRYGate(q, -3.0731914245983583, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.5341599055874768, 12);
  sqcRYGate(q, 0.2307966722731368, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.5713655792776977, 12);
  sqcRYGate(q, 3.135473149171578, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.5025979088719073, 1);
  sqcRYGate(q, -1.7308627810218935, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5665889216201165, 1);
  sqcRYGate(q, 0.0006047716181319723, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.568522329613149, 3);
  sqcRYGate(q, -0.002846565151592983, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.57211712738199, 3);
  sqcRYGate(q, -3.1075534996916905, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.596034255931539, 5);
  sqcRYGate(q, -1.5573240818462741, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5705744850329726, 5);
  sqcRYGate(q, -3.112560990601513, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5500083453357316, 7);
  sqcRYGate(q, -1.563825706403059, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.572079041352205, 7);
  sqcRYGate(q, 3.0896575747803356, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.602128782617101, 9);
  sqcRYGate(q, -3.1317249817611903, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.5706042679838241, 9);
  sqcRYGate(q, 3.0885894083906065, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.01398370477869637, 11);
  sqcRYGate(q, 3.1161274772652967, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.5708329276770474, 11);
  sqcRYGate(q, 0.00019386067317414668, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.570373662299567, 13);
  sqcRYGate(q, 1.1369948531778444, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.5708774403544359, 13);
  sqcRYGate(q, 1.7114059316701278, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.631585634449104, 0);
  sqcRYGate(q, -0.5514359540633809, 1);
  sqcRYGate(q, -1.5618174438390044, 2);
  sqcRYGate(q, 1.5728496788667898, 3);
  sqcRYGate(q, 1.5712714980589713, 4);
  sqcRYGate(q, -1.5453940722150037, 5);
  sqcRYGate(q, -0.7852120292678882, 6);
  sqcRYGate(q, 1.5492619502051657, 7);
  sqcRYGate(q, -1.563845317993749, 8);
  sqcRYGate(q, 1.5395618212705608, 9);
  sqcRYGate(q, 1.5603542750897839, 10);
  sqcRYGate(q, 3.12732989262197, 11);
  sqcRYGate(q, -1.5342222131016732, 12);
  sqcRYGate(q, 1.5706417670911141, 13);
  sqcRYGate(q, 1.5709860446999535, 14);
  sqcRYGate(q, -1.5710437082150162, 15);

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
