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

  sqcRYGate(q, 0.08670374352588557, 0);
  sqcRZGate(q, 0.4269012155905911, 0);
  sqcRYGate(q, 0.23223209205215103, 1);
  sqcRZGate(q, -2.4082220233715264, 1);
  sqcRYGate(q, 0.5284018751608599, 2);
  sqcRZGate(q, -0.029298918841627497, 2);
  sqcRYGate(q, 1.0142604210622705, 3);
  sqcRZGate(q, 0.9028422829739183, 3);
  sqcRYGate(q, -2.099126866290863, 4);
  sqcRZGate(q, -1.5132866043269353, 4);
  sqcRYGate(q, -0.9771269934333369, 5);
  sqcRZGate(q, -0.438995935246548, 5);
  sqcRYGate(q, -1.0956557535069535, 6);
  sqcRZGate(q, 2.3153758421068433, 6);
  sqcRYGate(q, -2.4271163765532053, 7);
  sqcRZGate(q, 2.0416696365376357, 7);
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
  sqcRYGate(q, 0.45783593849578175, 0);
  sqcRZGate(q, 0.8283232904177649, 0);
  sqcRYGate(q, 1.1957949508021688, 1);
  sqcRZGate(q, -3.044311426410781, 1);
  sqcRYGate(q, 0.858503353094366, 2);
  sqcRZGate(q, -1.842258333646232, 2);
  sqcRYGate(q, -1.3568170887067317, 3);
  sqcRZGate(q, 2.625528326011102, 3);
  sqcRYGate(q, -2.6768227614965663, 4);
  sqcRZGate(q, 1.8183745197880392, 4);
  sqcRYGate(q, 2.473802930160894, 5);
  sqcRZGate(q, -1.9957784868750812, 5);
  sqcRYGate(q, -0.29446248382916895, 6);
  sqcRZGate(q, -1.636828146354413, 6);
  sqcRYGate(q, -0.8965171555212176, 7);
  sqcRZGate(q, -0.969095063149191, 7);
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
  sqcRYGate(q, 2.7262085683171193, 0);
  sqcRZGate(q, 1.0428579138700842, 0);
  sqcRYGate(q, 2.4765775163378643, 1);
  sqcRZGate(q, -1.7073207061354017, 1);
  sqcRYGate(q, -2.4851439328006646, 2);
  sqcRZGate(q, -1.1812082231334387, 2);
  sqcRYGate(q, 3.043836464432427, 3);
  sqcRZGate(q, 2.2149051799186807, 3);
  sqcRYGate(q, 2.021750502359204, 4);
  sqcRZGate(q, 0.871107881066286, 4);
  sqcRYGate(q, 1.3922686658390715, 5);
  sqcRZGate(q, -0.8164590951535362, 5);
  sqcRYGate(q, -0.1282843722660866, 6);
  sqcRZGate(q, 1.5816468271489785, 6);
  sqcRYGate(q, 1.0521203525140121, 7);
  sqcRZGate(q, 0.5331597386043522, 7);
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
  sqcRYGate(q, 2.857667220865776, 0);
  sqcRZGate(q, -0.5091452660561666, 0);
  sqcRYGate(q, -2.631218608132368, 1);
  sqcRZGate(q, 2.321443195162874, 1);
  sqcRYGate(q, -1.6333962066720806, 2);
  sqcRZGate(q, -2.2177180489795383, 2);
  sqcRYGate(q, -2.977505992988821, 3);
  sqcRZGate(q, -1.0371650291365961, 3);
  sqcRYGate(q, -2.1321588599125896, 4);
  sqcRZGate(q, 2.082697079217632, 4);
  sqcRYGate(q, 1.7954351027400612, 5);
  sqcRZGate(q, 3.116562643180601, 5);
  sqcRYGate(q, -1.4606985803165293, 6);
  sqcRZGate(q, 0.6652505870767965, 6);
  sqcRYGate(q, 0.26871179789449506, 7);
  sqcRZGate(q, 1.7724400474770423, 7);
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
  sqcRYGate(q, -0.9233297403951894, 0);
  sqcRZGate(q, -0.927719426178117, 0);
  sqcRYGate(q, -0.4260878966839528, 1);
  sqcRZGate(q, 1.2328279523156682, 1);
  sqcRYGate(q, -1.0315780953837441, 2);
  sqcRZGate(q, -0.8885462088358249, 2);
  sqcRYGate(q, -1.393300000266216, 3);
  sqcRZGate(q, 2.863949830898462, 3);
  sqcRYGate(q, 2.253388128064098, 4);
  sqcRZGate(q, 1.1730507082346682, 4);
  sqcRYGate(q, -1.6004046218804078, 5);
  sqcRZGate(q, -0.42377246390004275, 5);
  sqcRYGate(q, -0.058439147700210185, 6);
  sqcRZGate(q, 2.8696797746963867, 6);
  sqcRYGate(q, -2.258732302633276, 7);
  sqcRZGate(q, -0.6007716236778872, 7);
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
  sqcRYGate(q, -2.995736000565763, 0);
  sqcRZGate(q, -2.2230875845404507, 0);
  sqcRYGate(q, 1.1956921309621211, 1);
  sqcRZGate(q, 0.8702366099254041, 1);
  sqcRYGate(q, -2.936789645744652, 2);
  sqcRZGate(q, -2.3890775800687742, 2);
  sqcRYGate(q, 3.0632114987913277, 3);
  sqcRZGate(q, -1.2978802798134128, 3);
  sqcRYGate(q, -2.9707982783062996, 4);
  sqcRZGate(q, -0.5580185238150639, 4);
  sqcRYGate(q, -0.6737931426360556, 5);
  sqcRZGate(q, 1.8849457736641408, 5);
  sqcRYGate(q, 0.3338175267852277, 6);
  sqcRZGate(q, 2.860739739396654, 6);
  sqcRYGate(q, 0.8772296645492464, 7);
  sqcRZGate(q, 2.5595738497273373, 7);
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
  sqcRYGate(q, 0.8695157674334086, 0);
  sqcRZGate(q, 1.6966122209261083, 0);
  sqcRYGate(q, 1.8668689032921213, 1);
  sqcRZGate(q, 2.6594351686364828, 1);
  sqcRYGate(q, -1.236332144504102, 2);
  sqcRZGate(q, 0.8137315758556491, 2);
  sqcRYGate(q, 1.4876510691961213, 3);
  sqcRZGate(q, -0.9611741542879244, 3);
  sqcRYGate(q, -2.3071346932234955, 4);
  sqcRZGate(q, -2.0352766165217853, 4);
  sqcRYGate(q, -0.7911050333847652, 5);
  sqcRZGate(q, 0.41418517472397837, 5);
  sqcRYGate(q, 0.8747550429353725, 6);
  sqcRZGate(q, 0.9217148500317757, 6);
  sqcRYGate(q, 1.560749264675827, 7);
  sqcRZGate(q, -1.4713211644488329, 7);
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
  sqcRYGate(q, -1.1369834141092734, 0);
  sqcRZGate(q, 0.7467031305853188, 0);
  sqcRYGate(q, -0.5429428463554391, 1);
  sqcRZGate(q, -0.8644627709477755, 1);
  sqcRYGate(q, 1.7439051777030417, 2);
  sqcRZGate(q, -2.5847454713325995, 2);
  sqcRYGate(q, -2.790733645600983, 3);
  sqcRZGate(q, -0.3514404720171225, 3);
  sqcRYGate(q, -1.4827270873126732, 4);
  sqcRZGate(q, -1.7492645437588217, 4);
  sqcRYGate(q, 2.7602089332979793, 5);
  sqcRZGate(q, -2.1658557063049244, 5);
  sqcRYGate(q, -0.5772595090865711, 6);
  sqcRZGate(q, 2.843318358063481, 6);
  sqcRYGate(q, -0.3236667184067539, 7);
  sqcRZGate(q, 0.20734560256707546, 7);
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
  sqcRYGate(q, 0.30266077858751395, 0);
  sqcRZGate(q, 2.715862805019123, 0);
  sqcRYGate(q, -0.16251521684723222, 1);
  sqcRZGate(q, 0.827799404348927, 1);
  sqcRYGate(q, -1.4442311505945349, 2);
  sqcRZGate(q, -2.122781661901885, 2);
  sqcRYGate(q, 0.3280409084048301, 3);
  sqcRZGate(q, -1.0404345518229927, 3);
  sqcRYGate(q, 2.0249820838710333, 4);
  sqcRZGate(q, 2.4849994806097397, 4);
  sqcRYGate(q, -2.7731179900865923, 5);
  sqcRZGate(q, -2.2898805852539716, 5);
  sqcRYGate(q, 1.0505109653584448, 6);
  sqcRZGate(q, 1.7876680595138426, 6);
  sqcRYGate(q, -0.6609988182583155, 7);
  sqcRZGate(q, -2.3615745655854923, 7);
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
  sqcRYGate(q, -0.24036232436874894, 0);
  sqcRZGate(q, -2.9413520971081075, 0);
  sqcRYGate(q, 0.7470716503783891, 1);
  sqcRZGate(q, 0.5292155481445615, 1);
  sqcRYGate(q, 2.115313102352524, 2);
  sqcRZGate(q, -1.255303455562397, 2);
  sqcRYGate(q, -1.1269904064026628, 3);
  sqcRZGate(q, -0.8471281512394883, 3);
  sqcRYGate(q, -2.304896808416982, 4);
  sqcRZGate(q, 1.1252921538138185, 4);
  sqcRYGate(q, -1.1188229876645281, 5);
  sqcRZGate(q, -2.1702554497878843, 5);
  sqcRYGate(q, 1.8523646522817372, 6);
  sqcRZGate(q, -1.683144475746073, 6);
  sqcRYGate(q, -2.247944879678023, 7);
  sqcRZGate(q, 1.0413172142403404, 7);
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
  sqcRYGate(q, 1.3600091876942466, 0);
  sqcRZGate(q, -1.0100811019571945, 0);
  sqcRYGate(q, -1.2404266748706485, 1);
  sqcRZGate(q, 0.06298191416324705, 1);
  sqcRYGate(q, -0.29745426312926954, 2);
  sqcRZGate(q, 0.33792329900075124, 2);
  sqcRYGate(q, -2.3501224641121774, 3);
  sqcRZGate(q, 0.3671916180516052, 3);
  sqcRYGate(q, -2.6228177695809856, 4);
  sqcRZGate(q, -2.8191636655068173, 4);
  sqcRYGate(q, -1.8434168026123894, 5);
  sqcRZGate(q, -1.445073762121563, 5);
  sqcRYGate(q, 3.026338274533492, 6);
  sqcRZGate(q, 1.4360048817213238, 6);
  sqcRYGate(q, 2.038698526304977, 7);
  sqcRZGate(q, -2.8442611576460313, 7);
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
  sqcRYGate(q, -0.6350259362303348, 0);
  sqcRZGate(q, -0.3738864492450436, 0);
  sqcRYGate(q, 0.6590788663906594, 1);
  sqcRZGate(q, 2.045814284997911, 1);
  sqcRYGate(q, 1.5820166750368072, 2);
  sqcRZGate(q, -2.5830913999549234, 2);
  sqcRYGate(q, 2.9658038671276015, 3);
  sqcRZGate(q, -0.5651106738663662, 3);
  sqcRYGate(q, -0.44148622655964487, 4);
  sqcRZGate(q, 2.3299435899442797, 4);
  sqcRYGate(q, -1.4611407219344268, 5);
  sqcRZGate(q, 0.2939372049506474, 5);
  sqcRYGate(q, -0.3496743778781566, 6);
  sqcRZGate(q, -2.7686528358331333, 6);
  sqcRYGate(q, -1.737455901779951, 7);
  sqcRZGate(q, -3.0845885891124274, 7);
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
  sqcRYGate(q, -0.5581602576306864, 0);
  sqcRZGate(q, 0.21978212608789172, 0);
  sqcRYGate(q, -1.272367001408079, 1);
  sqcRZGate(q, 1.3869963774377578, 1);
  sqcRYGate(q, -2.0026555519872105, 2);
  sqcRZGate(q, 1.2339345136721762, 2);
  sqcRYGate(q, 0.6926282555061206, 3);
  sqcRZGate(q, 2.531548823277407, 3);
  sqcRYGate(q, -0.280569379979574, 4);
  sqcRZGate(q, 0.7366569327347926, 4);
  sqcRYGate(q, -0.6005859652228609, 5);
  sqcRZGate(q, 2.018055712986369, 5);
  sqcRYGate(q, -1.4640171628601084, 6);
  sqcRZGate(q, 0.20084069126335002, 6);
  sqcRYGate(q, -0.23159559399672425, 7);
  sqcRZGate(q, -0.08506554403988886, 7);
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
  sqcRYGate(q, -2.8168733397961145, 0);
  sqcRZGate(q, 0.8600833631304, 0);
  sqcRYGate(q, -0.8754855919371067, 1);
  sqcRZGate(q, -2.306516251198621, 1);
  sqcRYGate(q, -2.7056417296850674, 2);
  sqcRZGate(q, -1.039095348315308, 2);
  sqcRYGate(q, 0.5602436522793087, 3);
  sqcRZGate(q, 2.8958740247068726, 3);
  sqcRYGate(q, 3.091002447276997, 4);
  sqcRZGate(q, 0.353711352527031, 4);
  sqcRYGate(q, 2.693100975398659, 5);
  sqcRZGate(q, -2.9988532991301877, 5);
  sqcRYGate(q, 1.6235409051756613, 6);
  sqcRZGate(q, 1.6335121569615068, 6);
  sqcRYGate(q, 0.2145104404070972, 7);
  sqcRZGate(q, -1.4720865661489728, 7);
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
  sqcRYGate(q, -2.2048479384276205, 0);
  sqcRZGate(q, 1.17173698889591, 0);
  sqcRYGate(q, -2.760856405133123, 1);
  sqcRZGate(q, -0.3815738590321623, 1);
  sqcRYGate(q, -1.1905957999364434, 2);
  sqcRZGate(q, -0.651041369445487, 2);
  sqcRYGate(q, 2.5382251407818006, 3);
  sqcRZGate(q, 2.9632251237919554, 3);
  sqcRYGate(q, -1.9614262052789373, 4);
  sqcRZGate(q, 0.0025761632045835374, 4);
  sqcRYGate(q, -1.9569175933237875, 5);
  sqcRZGate(q, 1.3490790616599524, 5);
  sqcRYGate(q, 1.8427487798218953, 6);
  sqcRZGate(q, -0.1902259783065325, 6);
  sqcRYGate(q, 0.27801020912353963, 7);
  sqcRZGate(q, 1.4267490319511484, 7);
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
  sqcRYGate(q, -1.9997616386883308, 0);
  sqcRZGate(q, 1.254227526584872, 0);
  sqcRYGate(q, -0.3655245124091939, 1);
  sqcRZGate(q, -3.033017709589181, 1);
  sqcRYGate(q, 0.8301907881815603, 2);
  sqcRZGate(q, -2.572671541261049, 2);
  sqcRYGate(q, -0.47031465192491595, 3);
  sqcRZGate(q, -2.458404570903919, 3);
  sqcRYGate(q, 2.3731833786703738, 4);
  sqcRZGate(q, -1.4583714953337432, 4);
  sqcRYGate(q, 1.9063725135028973, 5);
  sqcRZGate(q, 2.6677276586419336, 5);
  sqcRYGate(q, 3.0016894576798188, 6);
  sqcRZGate(q, -0.32669180711887985, 6);
  sqcRYGate(q, 2.437953920381717, 7);
  sqcRZGate(q, 1.7074934669665496, 7);
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
  sqcRYGate(q, -0.7219137197048138, 0);
  sqcRZGate(q, -2.756881839565997, 0);
  sqcRYGate(q, -2.611966342448983, 1);
  sqcRZGate(q, 0.6788217253947932, 1);
  sqcRYGate(q, -1.6905266691996206, 2);
  sqcRZGate(q, -2.245654263231307, 2);
  sqcRYGate(q, -2.863651269169483, 3);
  sqcRZGate(q, 0.12466882903360686, 3);
  sqcRYGate(q, 0.2739163350859772, 4);
  sqcRZGate(q, 0.5823184871306962, 4);
  sqcRYGate(q, 0.32582312619625053, 5);
  sqcRZGate(q, -1.2840488618868464, 5);
  sqcRYGate(q, 2.318563814586481, 6);
  sqcRZGate(q, 2.947657822170018, 6);
  sqcRYGate(q, -0.26145793226686803, 7);
  sqcRZGate(q, 1.0747229453109357, 7);
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
  sqcRYGate(q, -1.8958750007264833, 0);
  sqcRZGate(q, 1.0641493179359045, 0);
  sqcRYGate(q, 2.6070276673596293, 1);
  sqcRZGate(q, 1.294730723692136, 1);
  sqcRYGate(q, -0.9757652854804549, 2);
  sqcRZGate(q, -0.07639050305613893, 2);
  sqcRYGate(q, -1.4161253978273747, 3);
  sqcRZGate(q, 2.475393133067853, 3);
  sqcRYGate(q, 1.37270693105003, 4);
  sqcRZGate(q, 1.138426215247163, 4);
  sqcRYGate(q, -0.986236512243812, 5);
  sqcRZGate(q, 0.4365415266035129, 5);
  sqcRYGate(q, -1.0156714390001729, 6);
  sqcRZGate(q, 2.937203090359405, 6);
  sqcRYGate(q, -0.22878492166085765, 7);
  sqcRZGate(q, 1.9147396435709787, 7);
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
  sqcRYGate(q, -2.806906374134604, 0);
  sqcRZGate(q, 2.160884355414263, 0);
  sqcRYGate(q, -1.1842281153978877, 1);
  sqcRZGate(q, -0.691034935711344, 1);
  sqcRYGate(q, 0.4862928658894594, 2);
  sqcRZGate(q, 0.9118490864417126, 2);
  sqcRYGate(q, -1.3628941129546819, 3);
  sqcRZGate(q, 0.8276331265436054, 3);
  sqcRYGate(q, 1.0060200031305484, 4);
  sqcRZGate(q, 2.987245377481872, 4);
  sqcRYGate(q, -1.50584647051943, 5);
  sqcRZGate(q, -1.7479126792038917, 5);
  sqcRYGate(q, -1.876997343565897, 6);
  sqcRZGate(q, 1.5796757501998913, 6);
  sqcRYGate(q, 1.96599170902741, 7);
  sqcRZGate(q, 0.8079936178937845, 7);
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
  sqcRYGate(q, 2.4915559308638207, 0);
  sqcRZGate(q, -1.895589301216134, 0);
  sqcRYGate(q, -2.691668596780324, 1);
  sqcRZGate(q, -1.832725832504864, 1);
  sqcRYGate(q, -1.1791076027840728, 2);
  sqcRZGate(q, -1.3979213967217454, 2);
  sqcRYGate(q, 0.9279239251452687, 3);
  sqcRZGate(q, 2.3664936808493002, 3);
  sqcRYGate(q, -0.43750890524388186, 4);
  sqcRZGate(q, -2.9708989189342305, 4);
  sqcRYGate(q, -0.3859827490801533, 5);
  sqcRZGate(q, -2.5564991613667387, 5);
  sqcRYGate(q, -2.7186773615847337, 6);
  sqcRZGate(q, 2.8640324282455247, 6);
  sqcRYGate(q, 0.4470305717408154, 7);
  sqcRZGate(q, -2.0872275723215377, 7);
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
  sqcRYGate(q, -2.092296921844526, 0);
  sqcRZGate(q, 1.2226051008859775, 0);
  sqcRYGate(q, -0.6634761707302506, 1);
  sqcRZGate(q, -0.6286158594918775, 1);
  sqcRYGate(q, 1.7961195352933517, 2);
  sqcRZGate(q, -0.24509504183049227, 2);
  sqcRYGate(q, -2.6318465422672643, 3);
  sqcRZGate(q, 2.4071658730492307, 3);
  sqcRYGate(q, 2.8329711484694546, 4);
  sqcRZGate(q, 1.7174285713146025, 4);
  sqcRYGate(q, -2.540464861613258, 5);
  sqcRZGate(q, -0.2189706534492857, 5);
  sqcRYGate(q, 2.2133021708022937, 6);
  sqcRZGate(q, 1.8367408168159234, 6);
  sqcRYGate(q, -3.042386561015393, 7);
  sqcRZGate(q, -2.0566770592448966, 7);
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
  sqcRYGate(q, -0.914541967851564, 0);
  sqcRZGate(q, -0.06885120969105467, 0);
  sqcRYGate(q, 2.5608540190799647, 1);
  sqcRZGate(q, 1.389871902708698, 1);
  sqcRYGate(q, -0.3497900108835523, 2);
  sqcRZGate(q, 3.1209857872477595, 2);
  sqcRYGate(q, -2.321328391050489, 3);
  sqcRZGate(q, 1.1260909256078637, 3);
  sqcRYGate(q, 1.804098951665526, 4);
  sqcRZGate(q, -2.2639728719803456, 4);
  sqcRYGate(q, 2.8568977892776637, 5);
  sqcRZGate(q, -0.17617258357559698, 5);
  sqcRYGate(q, 0.3721958230409491, 6);
  sqcRZGate(q, -1.0206379622321107, 6);
  sqcRYGate(q, -1.941156937949567, 7);
  sqcRZGate(q, -0.27942682413334197, 7);
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
  sqcRYGate(q, -0.2753621063349998, 0);
  sqcRZGate(q, -0.9057623176289463, 0);
  sqcRYGate(q, 1.642146433691586, 1);
  sqcRZGate(q, 1.951097874207505, 1);
  sqcRYGate(q, 2.267763372225173, 2);
  sqcRZGate(q, -1.9868836566488035, 2);
  sqcRYGate(q, 1.0847297817003323, 3);
  sqcRZGate(q, 0.9882687317302498, 3);
  sqcRYGate(q, 2.0174069585435532, 4);
  sqcRZGate(q, -1.9097017229495532, 4);
  sqcRYGate(q, 1.4197587298784344, 5);
  sqcRZGate(q, 0.936642629215327, 5);
  sqcRYGate(q, 0.5274078073763077, 6);
  sqcRZGate(q, -1.3171871782388662, 6);
  sqcRYGate(q, -0.17721417882004303, 7);
  sqcRZGate(q, 3.1027009532554635, 7);
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
  sqcRYGate(q, -0.32224289477085044, 0);
  sqcRZGate(q, 2.761182058200178, 0);
  sqcRYGate(q, -2.2414783926789514, 1);
  sqcRZGate(q, -2.9591447690833586, 1);
  sqcRYGate(q, 1.2760659142864896, 2);
  sqcRZGate(q, -2.747023518007533, 2);
  sqcRYGate(q, 2.2163032984294464, 3);
  sqcRZGate(q, -1.5898901814238362, 3);
  sqcRYGate(q, -2.910532507128945, 4);
  sqcRZGate(q, 1.2398445763699852, 4);
  sqcRYGate(q, -1.3507754999112285, 5);
  sqcRZGate(q, 2.9899160169880923, 5);
  sqcRYGate(q, 0.38159765267551765, 6);
  sqcRZGate(q, -2.5743192167589055, 6);
  sqcRYGate(q, -2.4047410122216597, 7);
  sqcRZGate(q, -1.4764956835258412, 7);
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
  sqcRYGate(q, 0.9931914774585353, 0);
  sqcRZGate(q, -2.5376707491998407, 0);
  sqcRYGate(q, -1.1739893136229664, 1);
  sqcRZGate(q, 1.6226027993484342, 1);
  sqcRYGate(q, -2.6001790767032325, 2);
  sqcRZGate(q, 0.9567235142058755, 2);
  sqcRYGate(q, -1.0974225902840775, 3);
  sqcRZGate(q, 2.471602842579637, 3);
  sqcRYGate(q, -0.4496883225127206, 4);
  sqcRZGate(q, -2.8166991071908996, 4);
  sqcRYGate(q, -1.2394153754788348, 5);
  sqcRZGate(q, -2.4362825064829563, 5);
  sqcRYGate(q, 2.9374753435156706, 6);
  sqcRZGate(q, -2.4059600369712753, 6);
  sqcRYGate(q, 0.7630011140373584, 7);
  sqcRZGate(q, -1.7700287308864988, 7);
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
  sqcRYGate(q, 0.4104668622018055, 0);
  sqcRZGate(q, -2.47808871555939, 0);
  sqcRYGate(q, 2.054490480529247, 1);
  sqcRZGate(q, -2.406867448118457, 1);
  sqcRYGate(q, -2.4772279016722702, 2);
  sqcRZGate(q, 1.8483063417035313, 2);
  sqcRYGate(q, -2.412337130725732, 3);
  sqcRZGate(q, 0.8517535981128358, 3);
  sqcRYGate(q, -1.086261448905752, 4);
  sqcRZGate(q, 0.5158814232831718, 4);
  sqcRYGate(q, 0.8840534701044849, 5);
  sqcRZGate(q, -2.9001329693219486, 5);
  sqcRYGate(q, 1.754269198502148, 6);
  sqcRZGate(q, -2.2418073316614677, 6);
  sqcRYGate(q, -2.0447800791382744, 7);
  sqcRZGate(q, -2.3053663021756736, 7);

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
