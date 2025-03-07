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

  sqcRYGate(q, -3.137936553492826, 0);
  sqcRZGate(q, -0.32693585704224143, 0);
  sqcRYGate(q, -0.0005733563408799002, 1);
  sqcRZGate(q, -2.826496025131737, 1);
  sqcRYGate(q, 1.5654661267190626, 2);
  sqcRZGate(q, -0.02643662014818826, 2);
  sqcRYGate(q, -1.5761760555378426, 3);
  sqcRZGate(q, 2.9137546460906276, 3);
  sqcRYGate(q, 1.0784651901296627e-05, 4);
  sqcRZGate(q, 1.7913828014244384, 4);
  sqcRYGate(q, 7.099725326803217e-05, 5);
  sqcRZGate(q, -1.3440910774269348, 5);
  sqcRYGate(q, -1.571599803877256, 6);
  sqcRZGate(q, 0.5126297936009608, 6);
  sqcRYGate(q, 1.5782905429188867, 7);
  sqcRZGate(q, 2.748334373730696, 7);
  sqcRYGate(q, 6.287798111603847e-05, 8);
  sqcRZGate(q, -0.16480656808699484, 8);
  sqcRYGate(q, 1.0212991364610957e-05, 9);
  sqcRZGate(q, -0.8315418948442408, 9);
  sqcRYGate(q, -0.050614058116165594, 10);
  sqcRZGate(q, 1.540743892580974, 10);
  sqcRYGate(q, -2.177376001172709, 11);
  sqcRZGate(q, -0.3910193753009539, 11);
  sqcRYGate(q, 0.0017109770336671986, 12);
  sqcRZGate(q, 1.506746516087108, 12);
  sqcRYGate(q, -0.0023092628989536124, 13);
  sqcRZGate(q, -2.0454180723855404, 13);
  sqcRYGate(q, -2.139398898879521, 14);
  sqcRZGate(q, -2.4067677934806357, 14);
  sqcRYGate(q, -1.2167677785807935, 15);
  sqcRZGate(q, -2.054177100044755, 15);
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
  sqcRYGate(q, 3.0341965338570773, 0);
  sqcRZGate(q, -1.1726840730439492, 0);
  sqcRYGate(q, -0.2425228802553489, 1);
  sqcRZGate(q, -2.604728238276645, 1);
  sqcRYGate(q, -1.668899783489185, 2);
  sqcRZGate(q, -2.416936770652705, 2);
  sqcRYGate(q, -3.0444611332804388, 3);
  sqcRZGate(q, 0.19307724778806712, 3);
  sqcRYGate(q, 0.07808459920021348, 4);
  sqcRZGate(q, -0.19633722504890816, 4);
  sqcRYGate(q, -0.35339898921669466, 5);
  sqcRZGate(q, -1.9427356561977218, 5);
  sqcRYGate(q, 2.443882028234329, 6);
  sqcRZGate(q, -0.2638701614839949, 6);
  sqcRYGate(q, -0.9765466614710803, 7);
  sqcRZGate(q, 0.8838785176672653, 7);
  sqcRYGate(q, -0.0037202738804209545, 8);
  sqcRZGate(q, -1.303670331187998, 8);
  sqcRYGate(q, 3.140165460856656, 9);
  sqcRZGate(q, 3.0321102295429005, 9);
  sqcRYGate(q, 1.5034155315805802, 10);
  sqcRZGate(q, 2.1856640174478246, 10);
  sqcRYGate(q, 0.891123762803427, 11);
  sqcRZGate(q, 0.2650178150299247, 11);
  sqcRYGate(q, 3.0953831961519396, 12);
  sqcRZGate(q, 2.8580219293085256, 12);
  sqcRYGate(q, 3.1366884901370486, 13);
  sqcRZGate(q, 0.3775536485834321, 13);
  sqcRYGate(q, 1.9571475567795724, 14);
  sqcRZGate(q, 2.4786415501458685, 14);
  sqcRYGate(q, 0.24648993933787722, 15);
  sqcRZGate(q, -1.3553984493839373, 15);
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
  sqcRYGate(q, -1.4891329274443565, 0);
  sqcRZGate(q, 0.35656552774293093, 0);
  sqcRYGate(q, 1.334352331781934, 1);
  sqcRZGate(q, -1.4352973151334671, 1);
  sqcRYGate(q, -3.1353476584278335, 2);
  sqcRZGate(q, -0.6993455758531404, 2);
  sqcRYGate(q, -0.005493108552458035, 3);
  sqcRZGate(q, -1.8818081946872285, 3);
  sqcRYGate(q, 2.75747548691436, 4);
  sqcRZGate(q, 1.637001855689991, 4);
  sqcRYGate(q, 1.4247707420569435, 5);
  sqcRZGate(q, -1.81098179076508, 5);
  sqcRYGate(q, -2.9844423705372356, 6);
  sqcRZGate(q, -2.1082295415494157, 6);
  sqcRYGate(q, -2.979415500528409, 7);
  sqcRZGate(q, -1.0536494520016308, 7);
  sqcRYGate(q, -0.009253639343363334, 8);
  sqcRZGate(q, 2.061568139148048, 8);
  sqcRYGate(q, -3.1383946074893236, 9);
  sqcRZGate(q, 1.5149520510164014, 9);
  sqcRYGate(q, -2.9952346674920958, 10);
  sqcRZGate(q, 0.7311676927409464, 10);
  sqcRYGate(q, -0.05429094133385582, 11);
  sqcRZGate(q, -1.9825520797180936, 11);
  sqcRYGate(q, 3.14057226053894, 12);
  sqcRZGate(q, -1.7566496395862494, 12);
  sqcRYGate(q, 0.0009328019665479914, 13);
  sqcRZGate(q, 0.7666890558531031, 13);
  sqcRYGate(q, 3.0766048904833485, 14);
  sqcRZGate(q, -1.4121653333669222, 14);
  sqcRYGate(q, 2.1176559527374508, 15);
  sqcRZGate(q, 2.2902255148171293, 15);
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
  sqcRYGate(q, 1.4523628358664342, 0);
  sqcRZGate(q, -0.35251443332840643, 0);
  sqcRYGate(q, -0.2096610080081056, 1);
  sqcRZGate(q, -2.212908462250172, 1);
  sqcRYGate(q, 2.6342571696445574, 2);
  sqcRZGate(q, -2.656168207211921, 2);
  sqcRYGate(q, -2.677335854460903, 3);
  sqcRZGate(q, -1.219053349799655, 3);
  sqcRYGate(q, 3.1314720589852154, 4);
  sqcRZGate(q, 2.7771853532484907, 4);
  sqcRYGate(q, 2.892118091852999, 5);
  sqcRZGate(q, 1.3472056987751295, 5);
  sqcRYGate(q, -2.8558374847172248, 6);
  sqcRZGate(q, 0.3164209976965813, 6);
  sqcRYGate(q, -2.8541654265364276, 7);
  sqcRZGate(q, -3.093196261943022, 7);
  sqcRYGate(q, -3.133187497950847, 8);
  sqcRZGate(q, -2.1635005814036035, 8);
  sqcRYGate(q, 3.138606660667616, 9);
  sqcRZGate(q, 0.992339566517558, 9);
  sqcRYGate(q, -2.7999841533073755, 10);
  sqcRZGate(q, 1.6183743477490304, 10);
  sqcRYGate(q, 2.6165405909776647, 11);
  sqcRZGate(q, -1.8356732111761185, 11);
  sqcRYGate(q, 1.6408215857167834, 12);
  sqcRZGate(q, 3.0661210526428273, 12);
  sqcRYGate(q, -2.0951757887019244, 13);
  sqcRZGate(q, 2.544706987109069, 13);
  sqcRYGate(q, 2.505853341576996, 14);
  sqcRZGate(q, -1.170495450809951, 14);
  sqcRYGate(q, -1.606608291437448, 15);
  sqcRZGate(q, 1.7810741422746013, 15);
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
  sqcRYGate(q, 2.546717601434333, 0);
  sqcRZGate(q, -1.8687926110865578, 0);
  sqcRYGate(q, 0.5717155895142998, 1);
  sqcRZGate(q, 0.1764743206986612, 1);
  sqcRYGate(q, 2.7317501220954923, 2);
  sqcRZGate(q, 3.110345011680307, 2);
  sqcRYGate(q, -1.1944530372538287, 3);
  sqcRZGate(q, 1.4803277136583146, 3);
  sqcRYGate(q, 2.0993935022518406, 4);
  sqcRZGate(q, 0.3231201990822614, 4);
  sqcRYGate(q, 0.0064490442976086184, 5);
  sqcRZGate(q, 1.4345506609580223, 5);
  sqcRYGate(q, -0.06266774680499676, 6);
  sqcRZGate(q, 0.6935849920957224, 6);
  sqcRYGate(q, 3.0379310882547514, 7);
  sqcRZGate(q, 1.0645802321456126, 7);
  sqcRYGate(q, -3.1318340256951847, 8);
  sqcRZGate(q, 1.7815576874587957, 8);
  sqcRYGate(q, 3.139653523392927, 9);
  sqcRZGate(q, 0.32095250280599286, 9);
  sqcRYGate(q, -0.018301674150829506, 10);
  sqcRZGate(q, 1.5435932433803106, 10);
  sqcRYGate(q, 0.0039054172675072607, 11);
  sqcRZGate(q, -0.5531149286953739, 11);
  sqcRYGate(q, -1.5519141777429326, 12);
  sqcRZGate(q, 1.6241964714492303, 12);
  sqcRYGate(q, -1.6313121423697856, 13);
  sqcRZGate(q, 2.065965655342632, 13);
  sqcRYGate(q, 0.9899997254120192, 14);
  sqcRZGate(q, 2.083999793459798, 14);
  sqcRYGate(q, -2.1074800527056547, 15);
  sqcRZGate(q, -2.0779687273794436, 15);
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
  sqcRYGate(q, 3.1373528135365185, 0);
  sqcRZGate(q, 2.681582894156796, 0);
  sqcRYGate(q, 8.826022192633333e-05, 1);
  sqcRZGate(q, -1.7190250480661695, 1);
  sqcRYGate(q, 0.3429558616840023, 2);
  sqcRZGate(q, 1.1827142502041745, 2);
  sqcRYGate(q, 0.37840616332994775, 3);
  sqcRZGate(q, -0.008378574206749256, 3);
  sqcRYGate(q, -3.1329199078442036, 4);
  sqcRZGate(q, -1.9871064714852578, 4);
  sqcRYGate(q, 3.1248835692848966, 5);
  sqcRZGate(q, 2.152996117092714, 5);
  sqcRYGate(q, 1.042825375249551, 6);
  sqcRZGate(q, 2.426708668703156, 6);
  sqcRYGate(q, 1.0431359801667865, 7);
  sqcRZGate(q, 2.0281680851090385, 7);
  sqcRYGate(q, 1.5856582011163898, 8);
  sqcRZGate(q, -2.4554169981177485, 8);
  sqcRYGate(q, 1.5726274497267392, 9);
  sqcRZGate(q, 0.3069405361365866, 9);
  sqcRYGate(q, 0.48537761431920584, 10);
  sqcRZGate(q, 1.6109370818979245, 10);
  sqcRYGate(q, 0.02073408524109698, 11);
  sqcRZGate(q, -2.9818660210449774, 11);
  sqcRYGate(q, 0.0887560754314244, 12);
  sqcRZGate(q, 0.028679656927734776, 12);
  sqcRYGate(q, -0.04782798569939404, 13);
  sqcRZGate(q, 2.5655126916786246, 13);
  sqcRYGate(q, 2.805217195572641, 14);
  sqcRZGate(q, -2.073014474945044, 14);
  sqcRYGate(q, 0.3254380621794056, 15);
  sqcRZGate(q, 0.08733882312953156, 15);
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
  sqcRYGate(q, 1.705729769095367, 0);
  sqcRZGate(q, 2.2062847632953715, 0);
  sqcRYGate(q, 1.8550843147834573, 1);
  sqcRZGate(q, 2.2315525455954415, 1);
  sqcRYGate(q, 0.9284516273759795, 2);
  sqcRZGate(q, -0.7251841855353075, 2);
  sqcRYGate(q, 0.2195640957217302, 3);
  sqcRZGate(q, 0.2449043557405117, 3);
  sqcRYGate(q, 0.9401698387922188, 4);
  sqcRZGate(q, 2.563643891173418, 4);
  sqcRYGate(q, 2.1386368832480356, 5);
  sqcRZGate(q, -1.6897903521732327, 5);
  sqcRYGate(q, -3.1398580635305398, 6);
  sqcRZGate(q, 0.09165878455053988, 6);
  sqcRYGate(q, -3.141539648985514, 7);
  sqcRZGate(q, 2.5148640858517406, 7);
  sqcRYGate(q, 0.004666340380616418, 8);
  sqcRZGate(q, -2.188258079642366, 8);
  sqcRYGate(q, 0.00418283022321989, 9);
  sqcRZGate(q, 1.2600183916955894, 9);
  sqcRYGate(q, -1.4827341395586275, 10);
  sqcRZGate(q, -3.1037878783063344, 10);
  sqcRYGate(q, 1.4806196801342402, 11);
  sqcRZGate(q, 3.1304309733902813, 11);
  sqcRYGate(q, -3.0430838809173184, 12);
  sqcRZGate(q, -2.667212625593198, 12);
  sqcRYGate(q, 0.8648235600154219, 13);
  sqcRZGate(q, -0.10681663782578178, 13);
  sqcRYGate(q, 2.19207416898426, 14);
  sqcRZGate(q, 2.325236789918078, 14);
  sqcRYGate(q, 0.906628229883112, 15);
  sqcRZGate(q, -0.8673279282077315, 15);
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
  sqcRYGate(q, -2.2028351771254813, 0);
  sqcRZGate(q, -3.046934274012099, 0);
  sqcRYGate(q, -2.175378632057899, 1);
  sqcRZGate(q, 0.9419289322179153, 1);
  sqcRYGate(q, 3.094715080934418, 2);
  sqcRZGate(q, -2.7422824472359806, 2);
  sqcRYGate(q, 3.101861184036137, 3);
  sqcRZGate(q, 0.05384487628814454, 3);
  sqcRYGate(q, -3.1254135268519696, 4);
  sqcRZGate(q, 0.989310503851529, 4);
  sqcRYGate(q, -0.004772799201492539, 5);
  sqcRZGate(q, -2.257408297215263, 5);
  sqcRYGate(q, 3.135392717048643, 6);
  sqcRZGate(q, 0.8279691651441459, 6);
  sqcRYGate(q, -3.1394966910063595, 7);
  sqcRZGate(q, 0.5177326118406125, 7);
  sqcRYGate(q, -3.0028933173803263, 8);
  sqcRZGate(q, 0.07727642208166967, 8);
  sqcRYGate(q, -2.238292549007042, 9);
  sqcRZGate(q, -3.123775392149688, 9);
  sqcRYGate(q, -1.5948330546922247, 10);
  sqcRZGate(q, -2.186447769026805, 10);
  sqcRYGate(q, 1.5736068489704325, 11);
  sqcRZGate(q, -0.09314659914307288, 11);
  sqcRYGate(q, -0.0010953291057305137, 12);
  sqcRZGate(q, -1.985933412377964, 12);
  sqcRYGate(q, 0.004590638446265939, 13);
  sqcRZGate(q, 1.0734622766485193, 13);
  sqcRYGate(q, -1.2888913614152075, 14);
  sqcRZGate(q, 0.6583099009632863, 14);
  sqcRYGate(q, 2.942910112629287, 15);
  sqcRZGate(q, -0.7799027249191849, 15);
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
  sqcRYGate(q, 2.985524386631515, 0);
  sqcRZGate(q, -1.5920634998606145, 0);
  sqcRYGate(q, 0.2536765020938816, 1);
  sqcRZGate(q, -2.459458423663938, 1);
  sqcRYGate(q, 1.5640654835946926, 2);
  sqcRZGate(q, -1.8329229536411835, 2);
  sqcRYGate(q, -1.5898417349429, 3);
  sqcRZGate(q, -0.5209461963848695, 3);
  sqcRYGate(q, -1.973037245706365, 4);
  sqcRZGate(q, 1.5837199560640198, 4);
  sqcRYGate(q, 2.3363725579019494, 5);
  sqcRZGate(q, -0.3297542088698968, 5);
  sqcRYGate(q, 1.60796514674527, 6);
  sqcRZGate(q, 2.9291909368332747, 6);
  sqcRYGate(q, 1.5939039364278123, 7);
  sqcRZGate(q, 0.21249850952705193, 7);
  sqcRYGate(q, 1.5659763917520682, 8);
  sqcRZGate(q, 0.41812526888858254, 8);
  sqcRYGate(q, 1.6273408079916543, 9);
  sqcRZGate(q, 2.556935887991604, 9);
  sqcRYGate(q, -3.0690018905353424, 10);
  sqcRZGate(q, 2.6947308151227563, 10);
  sqcRYGate(q, -3.1236639666510793, 11);
  sqcRZGate(q, 0.4279448591363189, 11);
  sqcRYGate(q, -0.49823751859432885, 12);
  sqcRZGate(q, -1.5117110017383237, 12);
  sqcRYGate(q, 0.008631957769804188, 13);
  sqcRZGate(q, 2.2689045422212857, 13);
  sqcRYGate(q, 0.8556586352108967, 14);
  sqcRZGate(q, 0.752021841473936, 14);
  sqcRYGate(q, -1.0652198105868287, 15);
  sqcRZGate(q, -0.41304915445526175, 15);
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
  sqcRYGate(q, -2.393848138833116, 0);
  sqcRZGate(q, 2.8226299885835684, 0);
  sqcRYGate(q, -0.8208802534852712, 1);
  sqcRZGate(q, -0.909609492264776, 1);
  sqcRYGate(q, -2.246882485029034, 2);
  sqcRZGate(q, 0.9389844843032265, 2);
  sqcRYGate(q, -0.6689776886658603, 3);
  sqcRZGate(q, -0.9094778612942226, 3);
  sqcRYGate(q, 0.5030460287162729, 4);
  sqcRZGate(q, 0.8256578782287639, 4);
  sqcRYGate(q, 2.383203753249821, 5);
  sqcRZGate(q, -0.09674281240741411, 5);
  sqcRYGate(q, -0.8156355962282973, 6);
  sqcRZGate(q, -0.008558776204356217, 6);
  sqcRYGate(q, -2.326639674204218, 7);
  sqcRZGate(q, 2.7034435257435057, 7);
  sqcRYGate(q, -0.0017860064486072923, 8);
  sqcRZGate(q, -0.0895814214668128, 8);
  sqcRYGate(q, -3.138324595028924, 9);
  sqcRZGate(q, 1.071712961062942, 9);
  sqcRYGate(q, 0.00043746996866822485, 10);
  sqcRZGate(q, -1.6460457758133151, 10);
  sqcRYGate(q, 0.00727763880877319, 11);
  sqcRZGate(q, 2.985087520050673, 11);
  sqcRYGate(q, -0.733712652903341, 12);
  sqcRZGate(q, -0.04173749825166873, 12);
  sqcRYGate(q, -0.800569223601785, 13);
  sqcRZGate(q, -0.06566837690097138, 13);
  sqcRYGate(q, 2.0984365938756193, 14);
  sqcRZGate(q, -1.1783016436995284, 14);
  sqcRYGate(q, -1.0404871625287742, 15);
  sqcRZGate(q, 1.2227888133388736, 15);
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
  sqcRYGate(q, 1.3929536570615308, 0);
  sqcRZGate(q, 1.6931457224416262, 0);
  sqcRYGate(q, 2.989844070940442, 1);
  sqcRZGate(q, 0.7883966211339678, 1);
  sqcRYGate(q, 3.123486896991569, 2);
  sqcRZGate(q, -2.5751073969363345, 2);
  sqcRYGate(q, 3.1069632869496107, 3);
  sqcRZGate(q, -1.7011814629103368, 3);
  sqcRYGate(q, 1.554569180922356, 4);
  sqcRZGate(q, -0.0022987229426529865, 4);
  sqcRYGate(q, -1.509751379497584, 5);
  sqcRZGate(q, 3.131681748011479, 5);
  sqcRYGate(q, 0.0367250250306137, 6);
  sqcRZGate(q, -2.517919720973393, 6);
  sqcRYGate(q, -3.1065657020438158, 7);
  sqcRZGate(q, 2.6808215761466694, 7);
  sqcRYGate(q, 0.00037454559505501947, 8);
  sqcRZGate(q, 1.5589374728722207, 8);
  sqcRYGate(q, -3.141274955318838, 9);
  sqcRZGate(q, 2.5432871720762686, 9);
  sqcRYGate(q, -1.55895714840382, 10);
  sqcRZGate(q, 1.5599795085914252, 10);
  sqcRYGate(q, 1.551058786819495, 11);
  sqcRZGate(q, -1.572270871032038, 11);
  sqcRYGate(q, 1.576035343133885, 12);
  sqcRZGate(q, 0.07290050926947966, 12);
  sqcRYGate(q, -1.5843658727752006, 13);
  sqcRZGate(q, 2.9798805253603162, 13);
  sqcRYGate(q, 1.2158162160322306, 14);
  sqcRZGate(q, -1.3492487657772294, 14);
  sqcRYGate(q, -1.227060350297144, 15);
  sqcRZGate(q, 1.3528207851522511, 15);
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
  sqcRYGate(q, -0.16260556742069682, 0);
  sqcRZGate(q, -1.8340557895598186, 0);
  sqcRYGate(q, -3.0908144521372343, 1);
  sqcRZGate(q, -3.040169687051467, 1);
  sqcRYGate(q, 0.02841692776237191, 2);
  sqcRZGate(q, 1.6333334592574802, 2);
  sqcRYGate(q, -0.022140983464618458, 3);
  sqcRZGate(q, 2.850905863437677, 3);
  sqcRYGate(q, 1.5623007602263188, 4);
  sqcRZGate(q, -3.0761002164743196, 4);
  sqcRYGate(q, 1.5715380879412422, 5);
  sqcRZGate(q, -2.187483476551209, 5);
  sqcRYGate(q, 0.5843916899755648, 6);
  sqcRZGate(q, 2.711409096765842, 6);
  sqcRYGate(q, 0.8392679186378941, 7);
  sqcRZGate(q, -0.03298437135854461, 7);
  sqcRYGate(q, 1.3549791858508353, 8);
  sqcRZGate(q, 0.1907634663916351, 8);
  sqcRYGate(q, 2.954945161365202, 9);
  sqcRZGate(q, -1.9576223404323754, 9);
  sqcRYGate(q, 1.5803236604648216, 10);
  sqcRZGate(q, -1.8054239835117283, 10);
  sqcRYGate(q, -1.5775722164856174, 11);
  sqcRZGate(q, 0.01463152883062531, 11);
  sqcRYGate(q, 1.6761097938183147, 12);
  sqcRZGate(q, -0.41436912773722584, 12);
  sqcRYGate(q, -1.7225455728928085, 13);
  sqcRZGate(q, 1.639692852155046, 13);
  sqcRYGate(q, -0.10014774831805351, 14);
  sqcRZGate(q, 2.2381990522373254, 14);
  sqcRYGate(q, 3.05075067266347, 15);
  sqcRZGate(q, -0.5701506995905941, 15);
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
  sqcRYGate(q, 0.48538430833359797, 0);
  sqcRZGate(q, 0.42719681493116823, 0);
  sqcRYGate(q, 1.2593947570854396, 1);
  sqcRZGate(q, -1.9465376088289006, 1);
  sqcRYGate(q, -1.4578542622483637, 2);
  sqcRZGate(q, 1.6267895810826554, 2);
  sqcRYGate(q, -1.4811380420306373, 3);
  sqcRZGate(q, 1.337457291220062, 3);
  sqcRYGate(q, -0.0057114933622861835, 4);
  sqcRZGate(q, -0.9053117031616413, 4);
  sqcRYGate(q, -0.0529873512857062, 5);
  sqcRZGate(q, -0.2909466970464827, 5);
  sqcRYGate(q, 3.095926439972441, 6);
  sqcRZGate(q, -1.5562206714667157, 6);
  sqcRYGate(q, -0.004185209534008559, 7);
  sqcRZGate(q, 1.2877148574292694, 7);
  sqcRYGate(q, -3.0954701282038517, 8);
  sqcRZGate(q, -1.3834067378684, 8);
  sqcRYGate(q, -0.010021993876324171, 9);
  sqcRZGate(q, 0.9299382631374025, 9);
  sqcRYGate(q, 0.057091834892889326, 10);
  sqcRZGate(q, -2.909055558558886, 10);
  sqcRYGate(q, -3.1303825345976892, 11);
  sqcRZGate(q, -0.653464587332273, 11);
  sqcRYGate(q, 1.3385471429494835, 12);
  sqcRZGate(q, -3.001107602700179, 12);
  sqcRYGate(q, -1.5356089941232387, 13);
  sqcRZGate(q, -1.2305726022087002, 13);
  sqcRYGate(q, 2.639941731669992, 14);
  sqcRZGate(q, -0.22255993014008887, 14);
  sqcRYGate(q, 0.5013333308965073, 15);
  sqcRZGate(q, 3.08668815860191, 15);
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
  sqcRYGate(q, -1.4850640671590472, 0);
  sqcRZGate(q, -2.0488471586796027, 0);
  sqcRYGate(q, -3.1290337164235638, 1);
  sqcRZGate(q, 0.012894769549000245, 1);
  sqcRYGate(q, -0.022038387042748298, 2);
  sqcRZGate(q, -1.143467996585778, 2);
  sqcRYGate(q, -0.023542590243373237, 3);
  sqcRZGate(q, 1.2330031399494237, 3);
  sqcRYGate(q, -3.093997256519636, 4);
  sqcRZGate(q, 2.4273627628397847, 4);
  sqcRYGate(q, 0.044512476608979945, 5);
  sqcRZGate(q, -1.84736254455329, 5);
  sqcRYGate(q, -1.5755179332641518, 6);
  sqcRZGate(q, 1.861223404628581, 6);
  sqcRYGate(q, -1.5659005212009283, 7);
  sqcRZGate(q, 0.07014591812813183, 7);
  sqcRYGate(q, -1.5528382928793798, 8);
  sqcRZGate(q, 0.3283445951101017, 8);
  sqcRYGate(q, -1.6714568704356538, 9);
  sqcRZGate(q, 2.3382379974673086, 9);
  sqcRYGate(q, -3.1409629857212296, 10);
  sqcRZGate(q, 1.8506097242727328, 10);
  sqcRYGate(q, -3.1365685784719317, 11);
  sqcRZGate(q, -1.9071529715718658, 11);
  sqcRYGate(q, -3.139674094249793, 12);
  sqcRZGate(q, -3.1083105614611655, 12);
  sqcRYGate(q, -0.0024807010591771927, 13);
  sqcRZGate(q, 0.015430002738685111, 13);
  sqcRYGate(q, -1.4132001983711122, 14);
  sqcRZGate(q, 0.2856069052631067, 14);
  sqcRYGate(q, 1.4257687650838213, 15);
  sqcRZGate(q, 0.3697583390289223, 15);
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
  sqcRYGate(q, 2.692644637240023, 0);
  sqcRZGate(q, -0.6844984307810001, 0);
  sqcRYGate(q, 1.1830534498044178, 1);
  sqcRZGate(q, -0.16937835232732576, 1);
  sqcRYGate(q, 1.3891895482601369, 2);
  sqcRZGate(q, -1.7234829533372704, 2);
  sqcRYGate(q, 2.0471517621083146, 3);
  sqcRZGate(q, 1.2211181267091977, 3);
  sqcRYGate(q, 3.0839871652754742, 4);
  sqcRZGate(q, -1.9745278913477726, 4);
  sqcRYGate(q, -0.006603013844968652, 5);
  sqcRZGate(q, 0.479190477297624, 5);
  sqcRYGate(q, 1.5733144175565217, 6);
  sqcRZGate(q, -0.03944745097245761, 6);
  sqcRYGate(q, -1.5730942504966885, 7);
  sqcRZGate(q, 3.0960062927086116, 7);
  sqcRYGate(q, -0.0034410294661491037, 8);
  sqcRZGate(q, -1.705871912006606, 8);
  sqcRYGate(q, 3.1410454803949945, 9);
  sqcRZGate(q, 2.470808705250195, 9);
  sqcRYGate(q, -1.5728917834504523, 10);
  sqcRZGate(q, -0.027426934617475224, 10);
  sqcRYGate(q, -1.5736662202904048, 11);
  sqcRZGate(q, -0.01956115135535434, 11);
  sqcRYGate(q, 1.1768164977947424, 12);
  sqcRZGate(q, -2.8946599534253257, 12);
  sqcRYGate(q, 0.22957286107957559, 13);
  sqcRZGate(q, 1.8830877353829738, 13);
  sqcRYGate(q, 2.9402002947734442, 14);
  sqcRZGate(q, -0.7387818826044725, 14);
  sqcRYGate(q, -0.2110493608007732, 15);
  sqcRZGate(q, -1.4072485893777182, 15);

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
