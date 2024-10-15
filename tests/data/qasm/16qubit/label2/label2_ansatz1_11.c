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

  sqcRYGate(q, 1.0466152439404448, 0);
  sqcRZGate(q, -0.7483770829179165, 0);
  sqcRYGate(q, 0.5717539015960593, 1);
  sqcRZGate(q, -1.134210139187666, 1);
  sqcRYGate(q, 0.01736882384777046, 2);
  sqcRZGate(q, -3.0438462618196227, 2);
  sqcRYGate(q, 0.00176426733881474, 3);
  sqcRZGate(q, -1.2916563595718689, 3);
  sqcRYGate(q, -0.5778834561234405, 4);
  sqcRZGate(q, -3.139354569138037, 4);
  sqcRYGate(q, 3.140212783086121, 5);
  sqcRZGate(q, 0.6300000799187636, 5);
  sqcRYGate(q, -0.19903016012668623, 6);
  sqcRZGate(q, -0.4180463060112505, 6);
  sqcRYGate(q, 3.141342479867887, 7);
  sqcRZGate(q, 0.474146243125559, 7);
  sqcRYGate(q, -1.525133979040446, 8);
  sqcRZGate(q, 2.333434474088847e-06, 8);
  sqcRYGate(q, 1.5707969005919553, 9);
  sqcRZGate(q, 0.2508734777954007, 9);
  sqcRYGate(q, 1.5700828063514682, 10);
  sqcRZGate(q, -2.129090006609609, 10);
  sqcRYGate(q, 0.010024445981808986, 11);
  sqcRZGate(q, 2.6009877462227946, 11);
  sqcRYGate(q, -0.0005979270221567745, 12);
  sqcRZGate(q, 1.03686995605028, 12);
  sqcRYGate(q, -0.6093984402025159, 13);
  sqcRZGate(q, 3.1160692723562717, 13);
  sqcRYGate(q, 0.18214684691772032, 14);
  sqcRZGate(q, 0.01885909672919706, 14);
  sqcRYGate(q, 3.1342478962735183, 15);
  sqcRZGate(q, 0.13296898021883805, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.6884549313293208, 0);
  sqcRZGate(q, 2.48992571012241, 0);
  sqcRYGate(q, -2.767084850664757, 1);
  sqcRZGate(q, -2.396206068014031, 1);
  sqcRYGate(q, 3.088069186201385, 2);
  sqcRZGate(q, -0.20873430557642259, 2);
  sqcRYGate(q, -1.1783161065848218, 3);
  sqcRZGate(q, 1.0150951930495746, 3);
  sqcRYGate(q, -2.565100143655427, 4);
  sqcRZGate(q, 1.7987892779386776, 4);
  sqcRYGate(q, 0.7939949120162711, 5);
  sqcRZGate(q, -1.0823192970966693, 5);
  sqcRYGate(q, 0.08238901343929327, 6);
  sqcRZGate(q, -2.021580112630617, 6);
  sqcRYGate(q, -3.1415314023319034, 7);
  sqcRZGate(q, -0.3199627567403205, 7);
  sqcRYGate(q, -1.570793916038553, 8);
  sqcRZGate(q, -3.1279816279455415, 8);
  sqcRYGate(q, 0.005479987411646018, 9);
  sqcRZGate(q, -2.7968941265279996, 9);
  sqcRYGate(q, -3.1386056658194184, 10);
  sqcRZGate(q, 1.2082327131587294, 10);
  sqcRYGate(q, -1.5952205191717503, 11);
  sqcRZGate(q, -1.5386265410246098, 11);
  sqcRYGate(q, 0.0009416212689228096, 12);
  sqcRZGate(q, -2.384581006259771, 12);
  sqcRYGate(q, 3.140413256174676, 13);
  sqcRZGate(q, 0.3568043760051989, 13);
  sqcRYGate(q, 3.0978300832698222, 14);
  sqcRZGate(q, 1.0058322341391615, 14);
  sqcRYGate(q, 3.1229306869655247, 15);
  sqcRZGate(q, 2.9198523044278843, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.310819842739043, 0);
  sqcRZGate(q, -3.048269727472826, 0);
  sqcRYGate(q, 0.06482291625669134, 1);
  sqcRZGate(q, -1.0723499924658997, 1);
  sqcRYGate(q, 0.00437938704249774, 2);
  sqcRZGate(q, 1.8120620872127413, 2);
  sqcRYGate(q, 0.912259222360456, 3);
  sqcRZGate(q, -0.8865393701564209, 3);
  sqcRYGate(q, -0.0009235275881653848, 4);
  sqcRZGate(q, 2.710073214856312, 4);
  sqcRYGate(q, 2.54465568647959, 5);
  sqcRZGate(q, -0.5743193936716046, 5);
  sqcRYGate(q, -1.1097238965464757, 6);
  sqcRZGate(q, 2.9198699554877425, 6);
  sqcRYGate(q, -1.5715861896685865, 7);
  sqcRZGate(q, -1.9716435113975308, 7);
  sqcRYGate(q, -0.05338549507469543, 8);
  sqcRZGate(q, -3.119127705743228, 8);
  sqcRYGate(q, -1.6329341977054848, 9);
  sqcRZGate(q, -1.9989560431705211, 9);
  sqcRYGate(q, 0.02864663977620019, 10);
  sqcRZGate(q, -3.085432407444675, 10);
  sqcRYGate(q, -1.4677026347257818, 11);
  sqcRZGate(q, 0.028369110089798255, 11);
  sqcRYGate(q, -1.907184834944452, 12);
  sqcRZGate(q, 2.2880919196325302, 12);
  sqcRYGate(q, -2.4833612922387682, 13);
  sqcRZGate(q, 2.39273019643063, 13);
  sqcRYGate(q, -0.20112544649399658, 14);
  sqcRZGate(q, -2.3328623943859714, 14);
  sqcRYGate(q, -0.01222922900551193, 15);
  sqcRZGate(q, 0.17122525193913551, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.082081108273285, 0);
  sqcRZGate(q, 0.8740687534332405, 0);
  sqcRYGate(q, 0.029421076700618443, 1);
  sqcRZGate(q, -1.742694003447128, 1);
  sqcRYGate(q, 3.117741341847645, 2);
  sqcRZGate(q, -2.7204568714241266, 2);
  sqcRYGate(q, -1.9004478707861097, 3);
  sqcRZGate(q, -2.416930643299389, 3);
  sqcRYGate(q, -0.0005966385157782155, 4);
  sqcRZGate(q, 2.2912637141457823, 4);
  sqcRYGate(q, 0.9173726267310289, 5);
  sqcRZGate(q, -0.2500775523454672, 5);
  sqcRYGate(q, 1.5701752764510237, 6);
  sqcRZGate(q, 3.054339877226049, 6);
  sqcRYGate(q, 3.1179121250737056, 7);
  sqcRZGate(q, -3.018195803857385, 7);
  sqcRYGate(q, 3.135313835966648, 8);
  sqcRZGate(q, 1.4206157799095005, 8);
  sqcRYGate(q, 0.04514603406251272, 9);
  sqcRZGate(q, 2.6767547768959865, 9);
  sqcRYGate(q, 0.0628189904604044, 10);
  sqcRZGate(q, -1.6059416540699336, 10);
  sqcRYGate(q, 2.0712995684002236, 11);
  sqcRZGate(q, -3.097561147436269, 11);
  sqcRYGate(q, 0.00014875441241990472, 12);
  sqcRZGate(q, 0.8584509798691434, 12);
  sqcRYGate(q, -0.028754441747747883, 13);
  sqcRZGate(q, -0.3370604190005988, 13);
  sqcRYGate(q, 0.046251173331358864, 14);
  sqcRZGate(q, 0.052215013452696114, 14);
  sqcRYGate(q, -1.6069365644744495, 15);
  sqcRZGate(q, 2.3221593504144167, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.5540720617814054, 0);
  sqcRZGate(q, 0.8588198618753874, 0);
  sqcRYGate(q, -2.719749653623773, 1);
  sqcRZGate(q, -1.9643273353801673, 1);
  sqcRYGate(q, -3.1254265835286157, 2);
  sqcRZGate(q, 2.9445058558256023, 2);
  sqcRYGate(q, -0.37882394898229216, 3);
  sqcRZGate(q, -2.139602340049931, 3);
  sqcRYGate(q, 2.657096323706032, 4);
  sqcRZGate(q, 0.011705930176115934, 4);
  sqcRYGate(q, -1.5712364956064961, 5);
  sqcRZGate(q, 1.2393674064048454, 5);
  sqcRYGate(q, -1.1122981668220895, 6);
  sqcRZGate(q, 1.7277573825807195, 6);
  sqcRYGate(q, 1.8889334955375874, 7);
  sqcRZGate(q, -2.170954102117788, 7);
  sqcRYGate(q, -0.07001589750032976, 8);
  sqcRZGate(q, 2.323407529891178, 8);
  sqcRYGate(q, -2.660922940513215, 9);
  sqcRZGate(q, 1.07039298004279, 9);
  sqcRYGate(q, -3.060021120856075, 10);
  sqcRZGate(q, 1.70270713489548, 10);
  sqcRYGate(q, 2.286424070370441, 11);
  sqcRZGate(q, -2.0804037315263084, 11);
  sqcRYGate(q, -2.5135173006571176, 12);
  sqcRZGate(q, 1.1315110242848445, 12);
  sqcRYGate(q, 0.2802390379122519, 13);
  sqcRZGate(q, -2.6271421911812642, 13);
  sqcRYGate(q, -3.1364278163478176, 14);
  sqcRZGate(q, -2.690984935127129, 14);
  sqcRYGate(q, 0.044073067651419606, 15);
  sqcRZGate(q, -1.773205565317596, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.0616999193841092, 0);
  sqcRZGate(q, -2.3849958851418105, 0);
  sqcRYGate(q, -0.3494620040718628, 1);
  sqcRZGate(q, -1.4815029671885434, 1);
  sqcRYGate(q, 3.14056950252791, 2);
  sqcRZGate(q, -2.1571357930457644, 2);
  sqcRYGate(q, 0.01820374426072124, 3);
  sqcRZGate(q, 0.09748053430273496, 3);
  sqcRYGate(q, 1.4138326884948826, 4);
  sqcRZGate(q, -0.03561307609609861, 4);
  sqcRYGate(q, -3.0838574388040487, 5);
  sqcRZGate(q, -2.555042634981618, 5);
  sqcRYGate(q, 2.0993605691856203, 6);
  sqcRZGate(q, 1.8363741909868354, 6);
  sqcRYGate(q, 2.8388388576013037, 7);
  sqcRZGate(q, -1.6120173971363512, 7);
  sqcRYGate(q, 0.05467187345463161, 8);
  sqcRZGate(q, 1.9187606187294837, 8);
  sqcRYGate(q, -3.015318775839898, 9);
  sqcRZGate(q, -2.828400691929973, 9);
  sqcRYGate(q, 0.2247496004407955, 10);
  sqcRZGate(q, -0.12311136243017379, 10);
  sqcRYGate(q, -2.1820029528576654, 11);
  sqcRZGate(q, 0.8438231747208889, 11);
  sqcRYGate(q, -1.6395424625079915, 12);
  sqcRZGate(q, 2.5991739983944186, 12);
  sqcRYGate(q, 1.5506082600215707, 13);
  sqcRZGate(q, -0.6178644678260135, 13);
  sqcRYGate(q, -3.0134235556760895, 14);
  sqcRZGate(q, 1.2798637245323725, 14);
  sqcRYGate(q, 2.1132246788375486, 15);
  sqcRZGate(q, -0.1721938724324133, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.9260965018163985, 0);
  sqcRZGate(q, 2.70296444897187, 0);
  sqcRYGate(q, 0.4044034459804555, 1);
  sqcRZGate(q, -2.900573365508473, 1);
  sqcRYGate(q, -3.137970574035406, 2);
  sqcRZGate(q, 0.04376385140869133, 2);
  sqcRYGate(q, 1.4162131535748073, 3);
  sqcRZGate(q, -0.10525174263918036, 3);
  sqcRYGate(q, -1.479949587722201, 4);
  sqcRZGate(q, -3.124788309593729, 4);
  sqcRYGate(q, 0.007452466823614608, 5);
  sqcRZGate(q, 1.4647943121684244, 5);
  sqcRYGate(q, 0.17609565723298734, 6);
  sqcRZGate(q, -2.9416614316545338, 6);
  sqcRYGate(q, -0.03503887276185225, 7);
  sqcRZGate(q, 2.655779220955601, 7);
  sqcRYGate(q, 0.009302563396746732, 8);
  sqcRZGate(q, -0.986690053577154, 8);
  sqcRYGate(q, 1.9473829385766184, 9);
  sqcRZGate(q, 0.36604341218856434, 9);
  sqcRYGate(q, 0.384652810887558, 10);
  sqcRZGate(q, -0.8339447329351403, 10);
  sqcRYGate(q, 2.8535702300549355, 11);
  sqcRZGate(q, -1.0982731963302543, 11);
  sqcRYGate(q, 2.569199926705644, 12);
  sqcRZGate(q, 2.2287201152757876, 12);
  sqcRYGate(q, 0.054307702266865654, 13);
  sqcRZGate(q, 2.9981491833922775, 13);
  sqcRYGate(q, -1.5682412069632576, 14);
  sqcRZGate(q, -0.03877027275920054, 14);
  sqcRYGate(q, 3.07945711638579, 15);
  sqcRZGate(q, 1.3853941446211335, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.5032139561134112, 0);
  sqcRZGate(q, -0.7663122216042807, 0);
  sqcRYGate(q, -0.8815656462613566, 1);
  sqcRZGate(q, -1.6296963352450948, 1);
  sqcRYGate(q, -1.3173428975321435, 2);
  sqcRZGate(q, 0.3747879818961887, 2);
  sqcRYGate(q, -0.007607791169592702, 3);
  sqcRZGate(q, -3.047376908794063, 3);
  sqcRYGate(q, 2.3421431797076013, 4);
  sqcRZGate(q, -1.9138281962680967, 4);
  sqcRYGate(q, -3.14122887378202, 5);
  sqcRZGate(q, 0.6139038633529985, 5);
  sqcRYGate(q, -1.1652261204019354, 6);
  sqcRZGate(q, 0.9355416097340923, 6);
  sqcRYGate(q, -2.3968423189255286, 7);
  sqcRZGate(q, -0.8326022449273422, 7);
  sqcRYGate(q, 0.1541849624500156, 8);
  sqcRZGate(q, 1.0664804339000984, 8);
  sqcRYGate(q, -2.893525945594406, 9);
  sqcRZGate(q, 2.4393423176196376, 9);
  sqcRYGate(q, -1.3039977949972366, 10);
  sqcRZGate(q, 2.4358256418072517, 10);
  sqcRYGate(q, 0.007441736571013102, 11);
  sqcRZGate(q, -2.540423128552517, 11);
  sqcRYGate(q, -0.23530603634728556, 12);
  sqcRZGate(q, 3.027820158282597, 12);
  sqcRYGate(q, 3.130177036985102, 13);
  sqcRZGate(q, 2.9638663720994853, 13);
  sqcRYGate(q, 3.042540949715087, 14);
  sqcRZGate(q, 2.3643185803429114, 14);
  sqcRYGate(q, -1.8263052800507775, 15);
  sqcRZGate(q, -1.3987063987738226, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.5884521084607286, 0);
  sqcRZGate(q, -0.7015626640875672, 0);
  sqcRYGate(q, 0.0972334508632711, 1);
  sqcRZGate(q, 1.163310158257855, 1);
  sqcRYGate(q, -0.10309186284330592, 2);
  sqcRZGate(q, 2.7019239890300386, 2);
  sqcRYGate(q, 0.7291817507819552, 3);
  sqcRZGate(q, 0.5699228499183404, 3);
  sqcRYGate(q, 0.15862749579439256, 4);
  sqcRZGate(q, -0.8134700869694673, 4);
  sqcRYGate(q, 0.267670485223562, 5);
  sqcRZGate(q, -2.980679753695179, 5);
  sqcRYGate(q, -3.041612615190536, 6);
  sqcRZGate(q, 0.4936781877379825, 6);
  sqcRYGate(q, -0.0665180698729066, 7);
  sqcRZGate(q, 0.0286180337192592, 7);
  sqcRYGate(q, 0.0017211097568434752, 8);
  sqcRZGate(q, 2.228304383658851, 8);
  sqcRYGate(q, -0.0391755653726193, 9);
  sqcRZGate(q, -1.6066631066929622, 9);
  sqcRYGate(q, -0.01298244280803958, 10);
  sqcRZGate(q, 0.8409880447416578, 10);
  sqcRYGate(q, 0.010870966722166106, 11);
  sqcRZGate(q, -0.9423420825824098, 11);
  sqcRYGate(q, -2.234798103205425, 12);
  sqcRZGate(q, -0.056071515955478546, 12);
  sqcRYGate(q, -2.193125177019417, 13);
  sqcRZGate(q, 1.3997809739019023, 13);
  sqcRYGate(q, 0.005371178274054422, 14);
  sqcRZGate(q, 0.4301781667968445, 14);
  sqcRYGate(q, 2.075381990840248, 15);
  sqcRZGate(q, 2.8197448553054056, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.2123837775878297, 0);
  sqcRZGate(q, 1.6976182413090153, 0);
  sqcRYGate(q, -3.089116514616635, 1);
  sqcRZGate(q, -2.501863200842686, 1);
  sqcRYGate(q, 0.33700372445231963, 2);
  sqcRZGate(q, -2.754321898984638, 2);
  sqcRYGate(q, 0.3853094919772371, 3);
  sqcRZGate(q, -1.4821182365264693, 3);
  sqcRYGate(q, -0.010915523490537631, 4);
  sqcRZGate(q, 0.34730078298841605, 4);
  sqcRYGate(q, 3.0726324465798536, 5);
  sqcRZGate(q, -0.7167762176549787, 5);
  sqcRYGate(q, 0.25319829764402413, 6);
  sqcRZGate(q, -1.8924833791305211, 6);
  sqcRYGate(q, -2.5678853473324548, 7);
  sqcRZGate(q, 3.051528137742984, 7);
  sqcRYGate(q, 0.12387883420832783, 8);
  sqcRZGate(q, -2.122287908651413, 8);
  sqcRYGate(q, 0.14369617418186317, 9);
  sqcRZGate(q, -2.1689387100437907, 9);
  sqcRYGate(q, -1.6938816462236375, 10);
  sqcRZGate(q, 0.285771508204164, 10);
  sqcRYGate(q, -0.30076630811130567, 11);
  sqcRZGate(q, 2.163762786030814, 11);
  sqcRYGate(q, 3.0910868207155304, 12);
  sqcRZGate(q, -0.2061935901593115, 12);
  sqcRYGate(q, 1.6629309771160024, 13);
  sqcRZGate(q, -3.1283580076017024, 13);
  sqcRYGate(q, 3.1377665010021216, 14);
  sqcRZGate(q, 2.5728936183515208, 14);
  sqcRYGate(q, -2.5772011749309365, 15);
  sqcRZGate(q, 2.9632755562246422, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.12471719910800097, 0);
  sqcRZGate(q, 1.4182041892934363, 0);
  sqcRYGate(q, 2.3831754407157546, 1);
  sqcRZGate(q, -1.914575234955537, 1);
  sqcRYGate(q, 3.0656376110184573, 2);
  sqcRZGate(q, 0.2692998128220929, 2);
  sqcRYGate(q, 0.7117412907484879, 3);
  sqcRZGate(q, -1.9710874232589886, 3);
  sqcRYGate(q, -3.036328827368693, 4);
  sqcRZGate(q, 1.702571512520647, 4);
  sqcRYGate(q, -1.5911929985105395, 5);
  sqcRZGate(q, -1.5967582591565685, 5);
  sqcRYGate(q, -1.4145331288185385, 6);
  sqcRZGate(q, 2.628665058988508, 6);
  sqcRYGate(q, -0.4532760810911691, 7);
  sqcRZGate(q, -1.5928946851074703, 7);
  sqcRYGate(q, 3.1113359642926772, 8);
  sqcRZGate(q, 2.490328417667999, 8);
  sqcRYGate(q, -3.092641884769693, 9);
  sqcRZGate(q, -1.5498006916862626, 9);
  sqcRYGate(q, -3.0179674117976782, 10);
  sqcRZGate(q, 3.040239997665527, 10);
  sqcRYGate(q, 3.1188073403252337, 11);
  sqcRZGate(q, -0.9835832240704109, 11);
  sqcRYGate(q, -3.1400782194695234, 12);
  sqcRZGate(q, 1.2281467760322382, 12);
  sqcRYGate(q, 1.2640784313811064, 13);
  sqcRZGate(q, 3.124855631809083, 13);
  sqcRYGate(q, 3.141531445387147, 14);
  sqcRZGate(q, -2.1635969606412853, 14);
  sqcRYGate(q, -1.774920527823315, 15);
  sqcRZGate(q, -1.4360357873552367, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.22570104537812166, 0);
  sqcRZGate(q, 1.0341479847430237, 0);
  sqcRYGate(q, -0.006804433547996487, 1);
  sqcRZGate(q, -0.5435982527674638, 1);
  sqcRYGate(q, 3.1404853639817545, 2);
  sqcRZGate(q, 0.07405891779358204, 2);
  sqcRYGate(q, -2.752844901974276, 3);
  sqcRZGate(q, 0.26876749973283576, 3);
  sqcRYGate(q, -3.1243257798020814, 4);
  sqcRZGate(q, -2.724771218299915, 4);
  sqcRYGate(q, -0.019450790514763838, 5);
  sqcRZGate(q, 1.8349133051752364, 5);
  sqcRYGate(q, 1.7355690544933529, 6);
  sqcRZGate(q, -3.0187377758313856, 6);
  sqcRYGate(q, 2.5111176608104127, 7);
  sqcRZGate(q, -2.9085215096359343, 7);
  sqcRYGate(q, -0.03916542975554925, 8);
  sqcRZGate(q, -1.9760398169591473, 8);
  sqcRYGate(q, 3.0683599479567674, 9);
  sqcRZGate(q, -1.3626113212637911, 9);
  sqcRYGate(q, -0.4584574150095131, 10);
  sqcRZGate(q, -0.8315936980505149, 10);
  sqcRYGate(q, 2.831766855077852, 11);
  sqcRZGate(q, -1.2458525736324277, 11);
  sqcRYGate(q, 3.1340051941629024, 12);
  sqcRZGate(q, 2.462626199733246, 12);
  sqcRYGate(q, 1.4729456296389078, 13);
  sqcRZGate(q, -0.26150002538046885, 13);
  sqcRYGate(q, 1.7654690966475937, 14);
  sqcRZGate(q, 2.626341572836696, 14);
  sqcRYGate(q, 1.4127926966751145, 15);
  sqcRZGate(q, 1.340727773492956, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.2208920212236665, 0);
  sqcRZGate(q, -0.4310016891724521, 0);
  sqcRYGate(q, -0.9394836107627711, 1);
  sqcRZGate(q, -2.070935636284733, 1);
  sqcRYGate(q, -1.4046695497140753, 2);
  sqcRZGate(q, 0.22744791429270028, 2);
  sqcRYGate(q, -1.809402551289245, 3);
  sqcRZGate(q, 0.9841339487261268, 3);
  sqcRYGate(q, -2.531123833341404, 4);
  sqcRZGate(q, -1.9229750059416584, 4);
  sqcRYGate(q, 2.6644393423952693, 5);
  sqcRZGate(q, 2.2141111732325593, 5);
  sqcRYGate(q, 2.6764052289147857, 6);
  sqcRZGate(q, 0.39169612168235723, 6);
  sqcRYGate(q, 1.4146341118927022, 7);
  sqcRZGate(q, 3.04152481966533, 7);
  sqcRYGate(q, 0.04200658503253685, 8);
  sqcRZGate(q, -0.6291574466893732, 8);
  sqcRYGate(q, 3.046592810890892, 9);
  sqcRZGate(q, 2.1318101909183946, 9);
  sqcRYGate(q, -1.6910405913485498, 10);
  sqcRZGate(q, -2.818852104695604, 10);
  sqcRYGate(q, 0.19946737764143965, 11);
  sqcRZGate(q, -2.9377736512334494, 11);
  sqcRYGate(q, -0.5266042611620954, 12);
  sqcRZGate(q, -0.7224108063280091, 12);
  sqcRYGate(q, -0.14527724687930618, 13);
  sqcRZGate(q, -1.9912734697721506, 13);
  sqcRYGate(q, -0.00011234961155501884, 14);
  sqcRZGate(q, -2.6729453788926105, 14);
  sqcRYGate(q, 1.655125625400452, 15);
  sqcRZGate(q, -3.141570130177205, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5147126316818467, 0);
  sqcRZGate(q, -1.4143978804124764, 0);
  sqcRYGate(q, -3.0635011997630666, 1);
  sqcRZGate(q, -0.13261748175740917, 1);
  sqcRYGate(q, 2.942760714275901, 2);
  sqcRZGate(q, -1.476314989119036, 2);
  sqcRYGate(q, 3.0722245217585034, 3);
  sqcRZGate(q, -3.081696338617472, 3);
  sqcRYGate(q, -0.00045385420860455383, 4);
  sqcRZGate(q, -2.933620028846187, 4);
  sqcRYGate(q, -3.1391162678167435, 5);
  sqcRZGate(q, 2.9474603989683237, 5);
  sqcRYGate(q, -0.017909130281764225, 6);
  sqcRZGate(q, -0.13693416573833073, 6);
  sqcRYGate(q, 2.5313673453978107, 7);
  sqcRZGate(q, 1.399377410422618, 7);
  sqcRYGate(q, -3.0941244018951273, 8);
  sqcRZGate(q, -0.9129090272810743, 8);
  sqcRYGate(q, 0.10560369810797532, 9);
  sqcRZGate(q, 1.753007954052706, 9);
  sqcRYGate(q, 0.007946434397413242, 10);
  sqcRZGate(q, -0.07601914337598271, 10);
  sqcRYGate(q, -3.0936871467945117, 11);
  sqcRZGate(q, 1.1820670454257545, 11);
  sqcRYGate(q, -0.011706124762548953, 12);
  sqcRZGate(q, 2.9991079774142357, 12);
  sqcRYGate(q, -0.01425741134897951, 13);
  sqcRZGate(q, -1.5920836126699935, 13);
  sqcRYGate(q, 0.32717175228081796, 14);
  sqcRZGate(q, 0.11711499993821899, 14);
  sqcRYGate(q, 1.6261521760125135, 15);
  sqcRZGate(q, -1.3273677626601739, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.4412298932964147, 0);
  sqcRZGate(q, -3.1088465070503455, 0);
  sqcRYGate(q, 1.4786337086645993, 1);
  sqcRZGate(q, -0.8614003114982268, 1);
  sqcRYGate(q, 3.0646345352951876, 2);
  sqcRZGate(q, -0.950781466960329, 2);
  sqcRYGate(q, -0.05307113520853142, 3);
  sqcRZGate(q, 1.170808790843954, 3);
  sqcRYGate(q, -1.7570086310843742, 4);
  sqcRZGate(q, 3.074383918376988, 4);
  sqcRYGate(q, -0.3233115704156395, 5);
  sqcRZGate(q, -0.3890052649295646, 5);
  sqcRYGate(q, 2.1705618195517307, 6);
  sqcRZGate(q, -2.5688875342970965, 6);
  sqcRYGate(q, -1.504289584576233, 7);
  sqcRZGate(q, -2.822725776011587, 7);
  sqcRYGate(q, 3.0013484651087308, 8);
  sqcRZGate(q, -0.431888763445733, 8);
  sqcRYGate(q, -3.121339565783673, 9);
  sqcRZGate(q, 0.9489754205131035, 9);
  sqcRYGate(q, -1.3669317029445747, 10);
  sqcRZGate(q, -2.6996376594139515, 10);
  sqcRYGate(q, 2.1778485464676143, 11);
  sqcRZGate(q, 1.5768767156651222, 11);
  sqcRYGate(q, -1.4188533192375914, 12);
  sqcRZGate(q, -3.028539191473409, 12);
  sqcRYGate(q, -1.5677361136682997, 13);
  sqcRZGate(q, -0.182380712226438, 13);
  sqcRYGate(q, 1.1606662091260365, 14);
  sqcRZGate(q, 0.3830773866471051, 14);
  sqcRYGate(q, -2.7697511407194186, 15);
  sqcRZGate(q, 0.6794002058451918, 15);

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
