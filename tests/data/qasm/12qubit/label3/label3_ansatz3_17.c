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

  sqcRYGate(q, 2.7965990246836014, 0);
  sqcRZGate(q, -2.726451777272767, 0);
  sqcRYGate(q, -2.922191270963307, 1);
  sqcRZGate(q, 0.16878089559084808, 1);
  sqcRYGate(q, 2.6304401458744895, 2);
  sqcRZGate(q, -1.5815161858540903, 2);
  sqcRYGate(q, 1.5181932734205352, 3);
  sqcRZGate(q, 1.0218052593659914, 3);
  sqcRYGate(q, -0.000606377960489901, 4);
  sqcRZGate(q, 0.4106128670154812, 4);
  sqcRYGate(q, 3.1304373279227384, 5);
  sqcRZGate(q, -2.204501182602712, 5);
  sqcRYGate(q, 1.9114518258648565, 6);
  sqcRZGate(q, 1.2632972059459568, 6);
  sqcRYGate(q, 0.4070669711485338, 7);
  sqcRZGate(q, -0.1075861481021887, 7);
  sqcRYGate(q, 1.9828340168439, 8);
  sqcRZGate(q, -0.3330998282944009, 8);
  sqcRYGate(q, 0.47686387713988626, 9);
  sqcRZGate(q, -2.0319800058837068, 9);
  sqcRYGate(q, -0.565071147233874, 10);
  sqcRZGate(q, -2.437932178818569, 10);
  sqcRYGate(q, 2.7304256336784256, 11);
  sqcRZGate(q, 2.590074424961453, 11);
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
  sqcRYGate(q, 2.7391952743171335, 0);
  sqcRZGate(q, 0.04201398776405263, 0);
  sqcRYGate(q, 1.551731365024203, 1);
  sqcRZGate(q, -2.5735178854327523, 1);
  sqcRYGate(q, 0.0032573926848584725, 2);
  sqcRZGate(q, 2.44352737664375, 2);
  sqcRYGate(q, -0.2764666497613234, 3);
  sqcRZGate(q, -1.5494828068610706, 3);
  sqcRYGate(q, -0.00045994686726036344, 4);
  sqcRZGate(q, -0.3895306697045226, 4);
  sqcRYGate(q, -0.002642513027412363, 5);
  sqcRZGate(q, 1.6437490991640509, 5);
  sqcRYGate(q, 2.591702971363464, 6);
  sqcRZGate(q, 1.6146438909366636, 6);
  sqcRYGate(q, 0.7993726661439791, 7);
  sqcRZGate(q, 0.16283669193392714, 7);
  sqcRYGate(q, 0.5358302183313368, 8);
  sqcRZGate(q, -1.4029428969389452, 8);
  sqcRYGate(q, -2.3335375482866656, 9);
  sqcRZGate(q, 0.9976424006671739, 9);
  sqcRYGate(q, 2.5063509785302287, 10);
  sqcRZGate(q, -0.4713967644639494, 10);
  sqcRYGate(q, 2.2685518930815, 11);
  sqcRZGate(q, -2.943049108036936, 11);
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
  sqcRYGate(q, 1.514002095927243, 0);
  sqcRZGate(q, -2.8087796144173205, 0);
  sqcRYGate(q, 1.244704492172393, 1);
  sqcRZGate(q, -1.9767559180803909, 1);
  sqcRYGate(q, -2.7442273995813196, 2);
  sqcRZGate(q, -3.1179399096476645, 2);
  sqcRYGate(q, -1.4715742590854588, 3);
  sqcRZGate(q, 3.0854188720655062, 3);
  sqcRYGate(q, 3.140354915593231, 4);
  sqcRZGate(q, -1.0822673957264122, 4);
  sqcRYGate(q, -1.54366620054917, 5);
  sqcRZGate(q, -2.3450590269619878, 5);
  sqcRYGate(q, 1.5565541397670142, 6);
  sqcRZGate(q, 1.2551814616989452, 6);
  sqcRYGate(q, -2.562349239411412, 7);
  sqcRZGate(q, 0.8066549912207588, 7);
  sqcRYGate(q, -2.767378818811748, 8);
  sqcRZGate(q, -0.11194621809711958, 8);
  sqcRYGate(q, -2.2432518254966105, 9);
  sqcRZGate(q, -2.1569671490555873, 9);
  sqcRYGate(q, 1.8583520757340288, 10);
  sqcRZGate(q, 2.904997504313218, 10);
  sqcRYGate(q, -0.6524074891581169, 11);
  sqcRZGate(q, 3.10198176371932, 11);
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
  sqcRYGate(q, 0.431042394843165, 0);
  sqcRZGate(q, 3.0229917002031397, 0);
  sqcRYGate(q, 2.888375213102881, 1);
  sqcRZGate(q, -2.7007447044140784, 1);
  sqcRYGate(q, -0.4852352096771124, 2);
  sqcRZGate(q, -2.701603751314272, 2);
  sqcRYGate(q, -0.7409028980168063, 3);
  sqcRZGate(q, -2.1409276021770784, 3);
  sqcRYGate(q, -0.0025872002850855225, 4);
  sqcRZGate(q, 2.0072756259145237, 4);
  sqcRYGate(q, -3.1392055382481776, 5);
  sqcRZGate(q, 2.4767894356399767, 5);
  sqcRYGate(q, 0.9737247239606791, 6);
  sqcRZGate(q, -0.28831362709445507, 6);
  sqcRYGate(q, -0.015047340845763145, 7);
  sqcRZGate(q, -2.6335160226647716, 7);
  sqcRYGate(q, 2.398622716701953, 8);
  sqcRZGate(q, 2.618678983586799, 8);
  sqcRYGate(q, 2.2629712924496124, 9);
  sqcRZGate(q, -2.548123953851555, 9);
  sqcRYGate(q, -1.181455401658474, 10);
  sqcRZGate(q, 1.3682410366686126, 10);
  sqcRYGate(q, -1.5779325167769462, 11);
  sqcRZGate(q, 1.1550860589848142, 11);
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
  sqcRYGate(q, 1.426343731978438, 0);
  sqcRZGate(q, -0.21108864898448182, 0);
  sqcRYGate(q, -2.1874679920464697, 1);
  sqcRZGate(q, 0.20943164684709273, 1);
  sqcRYGate(q, -2.2938282124282967, 2);
  sqcRZGate(q, -3.0829147580037133, 2);
  sqcRYGate(q, 2.2213726420783075, 3);
  sqcRZGate(q, -0.32526976662003293, 3);
  sqcRYGate(q, -0.0008101325878786858, 4);
  sqcRZGate(q, -1.181007868053336, 4);
  sqcRYGate(q, -3.0416645016426873, 5);
  sqcRZGate(q, 1.0326335271821474, 5);
  sqcRYGate(q, 2.642879808507504, 6);
  sqcRZGate(q, -1.9808695741482778, 6);
  sqcRYGate(q, -1.760765780293998, 7);
  sqcRZGate(q, 1.6788735554773424, 7);
  sqcRYGate(q, 1.4728970407505209, 8);
  sqcRZGate(q, -2.7251182036655055, 8);
  sqcRYGate(q, 1.2729153747310873, 9);
  sqcRZGate(q, 0.7475241925948523, 9);
  sqcRYGate(q, 1.6847868873322644, 10);
  sqcRZGate(q, -1.465085502258928, 10);
  sqcRYGate(q, 1.6649362250173707, 11);
  sqcRZGate(q, -1.7197146627572595, 11);
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
  sqcRYGate(q, -1.670116578373678, 0);
  sqcRZGate(q, -3.1072760955631695, 0);
  sqcRYGate(q, -0.015515760572704096, 1);
  sqcRZGate(q, -1.5268649732511594, 1);
  sqcRYGate(q, -0.034389916572097334, 2);
  sqcRZGate(q, 1.5150804464220762, 2);
  sqcRYGate(q, -0.1437479560186823, 3);
  sqcRZGate(q, 3.0146466895825577, 3);
  sqcRYGate(q, -1.355307034668355, 4);
  sqcRZGate(q, 2.6395078560937906, 4);
  sqcRYGate(q, -3.1400329111243495, 5);
  sqcRZGate(q, -2.917573187324284, 5);
  sqcRYGate(q, 2.036131054752076, 6);
  sqcRZGate(q, 2.0017535033493594, 6);
  sqcRYGate(q, 0.009495271421761764, 7);
  sqcRZGate(q, -1.3126484424215468, 7);
  sqcRYGate(q, -0.015220523377699418, 8);
  sqcRZGate(q, -0.990604547627119, 8);
  sqcRYGate(q, 2.4519116408838335, 9);
  sqcRZGate(q, 1.1570413707545626, 9);
  sqcRYGate(q, 0.47626302298395634, 10);
  sqcRZGate(q, -3.07320297667978, 10);
  sqcRYGate(q, -2.1493055191102624, 11);
  sqcRZGate(q, 1.1295552894036485, 11);
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
  sqcRYGate(q, -1.6080451873864816, 0);
  sqcRZGate(q, -1.3743665451543583, 0);
  sqcRYGate(q, 0.48473043413109085, 1);
  sqcRZGate(q, 3.109359641070698, 1);
  sqcRYGate(q, 0.49103502405009214, 2);
  sqcRZGate(q, -0.19787493585578633, 2);
  sqcRYGate(q, 0.786976077781322, 3);
  sqcRZGate(q, 1.5730716463690735, 3);
  sqcRYGate(q, -3.1400537681959837, 4);
  sqcRZGate(q, -0.12479595603074055, 4);
  sqcRYGate(q, -2.6862517758818267, 5);
  sqcRZGate(q, 0.7999969881115714, 5);
  sqcRYGate(q, -3.139523102839481, 6);
  sqcRZGate(q, -3.0568604433377122, 6);
  sqcRYGate(q, 1.960056751493557, 7);
  sqcRZGate(q, -1.447433770769238, 7);
  sqcRYGate(q, -2.1469366187289864, 8);
  sqcRZGate(q, -0.7642144708248394, 8);
  sqcRYGate(q, 1.6977506233096005, 9);
  sqcRZGate(q, -1.653421492471538, 9);
  sqcRYGate(q, -2.374986305929538, 10);
  sqcRZGate(q, -2.8112582986839287, 10);
  sqcRYGate(q, -0.7953624513411208, 11);
  sqcRZGate(q, -0.09459722076055649, 11);
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
  sqcRYGate(q, 1.2943259603549793, 0);
  sqcRZGate(q, -0.7761452777756808, 0);
  sqcRYGate(q, -1.7706052146805578, 1);
  sqcRZGate(q, -0.02508212286168998, 1);
  sqcRYGate(q, 0.0011289980537201316, 2);
  sqcRZGate(q, -2.8145081252881132, 2);
  sqcRYGate(q, -1.4069500788630682, 3);
  sqcRZGate(q, -2.571370373593478, 3);
  sqcRYGate(q, -2.8740857339247228, 4);
  sqcRZGate(q, -0.03869774459785022, 4);
  sqcRYGate(q, -0.001702660144051454, 5);
  sqcRZGate(q, -1.1865293161685866, 5);
  sqcRYGate(q, -0.8433378920876429, 6);
  sqcRZGate(q, 1.550347912074236, 6);
  sqcRYGate(q, 0.0077319425919126165, 7);
  sqcRZGate(q, -1.1021094496456012, 7);
  sqcRYGate(q, -0.3493156037783596, 8);
  sqcRZGate(q, -2.7049794872063617, 8);
  sqcRYGate(q, 2.256765673777529, 9);
  sqcRZGate(q, 1.3290941585846616, 9);
  sqcRYGate(q, -0.3318111372805145, 10);
  sqcRZGate(q, -0.9379409652060007, 10);
  sqcRYGate(q, -2.470546117017903, 11);
  sqcRZGate(q, 0.5299104047384261, 11);
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
  sqcRYGate(q, 0.008391610119363272, 0);
  sqcRZGate(q, -0.9165379088990839, 0);
  sqcRYGate(q, -1.3992502737870915, 1);
  sqcRZGate(q, -2.474522565182592, 1);
  sqcRYGate(q, -3.079545999388327, 2);
  sqcRZGate(q, 0.4966108832558651, 2);
  sqcRYGate(q, 2.4698800170640016, 3);
  sqcRZGate(q, 2.7050752440644823, 3);
  sqcRYGate(q, 0.002851207017947388, 4);
  sqcRZGate(q, 2.978806941121, 4);
  sqcRYGate(q, -1.4104133806248473, 5);
  sqcRZGate(q, 0.641374967700507, 5);
  sqcRYGate(q, 0.00042989748138273814, 6);
  sqcRZGate(q, -2.719134016768486, 6);
  sqcRYGate(q, 1.1822740022612692, 7);
  sqcRZGate(q, -0.720360805479462, 7);
  sqcRYGate(q, -0.3045432734003013, 8);
  sqcRZGate(q, -3.0416852318162593, 8);
  sqcRYGate(q, 1.9513139779032453, 9);
  sqcRZGate(q, -1.8656225716082624, 9);
  sqcRYGate(q, 2.273994465154629, 10);
  sqcRZGate(q, -2.0177359319744976, 10);
  sqcRYGate(q, 2.3495433030993125, 11);
  sqcRZGate(q, -1.1963754081164317, 11);
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
  sqcRYGate(q, 3.029157215512493, 0);
  sqcRZGate(q, -1.5783611725431208, 0);
  sqcRYGate(q, 2.6223025127019604, 1);
  sqcRZGate(q, 2.972580488285926, 1);
  sqcRYGate(q, 0.04819224059359023, 2);
  sqcRZGate(q, 3.1213220488282216, 2);
  sqcRYGate(q, -1.8822597654881985, 3);
  sqcRZGate(q, -2.6004697551190334, 3);
  sqcRYGate(q, 1.796719836280979, 4);
  sqcRZGate(q, 2.0905452466842016, 4);
  sqcRYGate(q, -3.14016331786726, 5);
  sqcRZGate(q, -0.25703960874867876, 5);
  sqcRYGate(q, 0.35619463228680054, 6);
  sqcRZGate(q, 0.12150911021957861, 6);
  sqcRYGate(q, -1.5711858660893911, 7);
  sqcRZGate(q, -3.0646626906123178, 7);
  sqcRYGate(q, -2.9035204525495297, 8);
  sqcRZGate(q, 0.6747884573354089, 8);
  sqcRYGate(q, -1.8519952458991482, 9);
  sqcRZGate(q, 3.02381064813413, 9);
  sqcRYGate(q, -2.0633809439013966, 10);
  sqcRZGate(q, -1.1912812663045884, 10);
  sqcRYGate(q, -0.44018575833416396, 11);
  sqcRZGate(q, 0.20053110287093645, 11);
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
  sqcRYGate(q, -0.04102499559483075, 0);
  sqcRZGate(q, -0.5364735532710342, 0);
  sqcRYGate(q, 2.057850356645273, 1);
  sqcRZGate(q, -2.629789159773951, 1);
  sqcRYGate(q, 3.123291571436107, 2);
  sqcRZGate(q, 2.0383669872956487, 2);
  sqcRYGate(q, 0.5208081525924879, 3);
  sqcRZGate(q, -0.79698269415283, 3);
  sqcRYGate(q, -3.1337995723787735, 4);
  sqcRZGate(q, -0.0881643660208562, 4);
  sqcRYGate(q, 0.0003173516297320313, 5);
  sqcRZGate(q, -0.18364319349692418, 5);
  sqcRYGate(q, 3.1380692283128657, 6);
  sqcRZGate(q, -2.2058537822063093, 6);
  sqcRYGate(q, 0.03502585123019841, 7);
  sqcRZGate(q, -0.07955582811190515, 7);
  sqcRYGate(q, -1.4074216926833607, 8);
  sqcRZGate(q, 1.069828217567549, 8);
  sqcRYGate(q, -1.5701207641830668, 9);
  sqcRZGate(q, 1.569975616427486, 9);
  sqcRYGate(q, 0.4139896672152039, 10);
  sqcRZGate(q, 0.3273315761861894, 10);
  sqcRYGate(q, 0.5923324652591315, 11);
  sqcRZGate(q, -2.2377978071713334, 11);
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
  sqcRYGate(q, 2.508145620043122, 0);
  sqcRZGate(q, -2.0990955459968275, 0);
  sqcRYGate(q, -0.865717432878866, 1);
  sqcRZGate(q, 2.0063748929140757, 1);
  sqcRYGate(q, -2.696950296120363, 2);
  sqcRZGate(q, -0.08025730731851223, 2);
  sqcRYGate(q, 2.393473170096512, 3);
  sqcRZGate(q, -1.15566411976517, 3);
  sqcRYGate(q, 0.3710056819580298, 4);
  sqcRZGate(q, -1.1717161688739228, 4);
  sqcRYGate(q, -3.139121875353761, 5);
  sqcRZGate(q, 0.5595824616103222, 5);
  sqcRYGate(q, -1.8409429160311648, 6);
  sqcRZGate(q, 2.5218666518409747, 6);
  sqcRYGate(q, 2.9642989148915837, 7);
  sqcRZGate(q, 3.137219346224329, 7);
  sqcRYGate(q, 0.004817651949961643, 8);
  sqcRZGate(q, -1.0097483399674339, 8);
  sqcRYGate(q, -1.5705370733537576, 9);
  sqcRZGate(q, 1.383277727179442, 9);
  sqcRYGate(q, -0.22200432283535074, 10);
  sqcRZGate(q, -1.6929477905754837, 10);
  sqcRYGate(q, -3.141264784083309, 11);
  sqcRZGate(q, 1.6392025174839402, 11);
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
  sqcRYGate(q, -0.013482998223688838, 0);
  sqcRZGate(q, 2.4057835141729864, 0);
  sqcRYGate(q, -1.2130917810187931, 1);
  sqcRZGate(q, 0.046052962622936455, 1);
  sqcRYGate(q, 2.847078236433479, 2);
  sqcRZGate(q, -0.4954549564599452, 2);
  sqcRYGate(q, -2.4836580103627335, 3);
  sqcRZGate(q, 2.3247194781177316, 3);
  sqcRYGate(q, 1.533982888244863, 4);
  sqcRZGate(q, -1.5049765084371607, 4);
  sqcRYGate(q, -1.571050045459726, 5);
  sqcRZGate(q, 2.0783159988796296, 5);
  sqcRYGate(q, -3.13771574773589, 6);
  sqcRZGate(q, 1.3180331047322813, 6);
  sqcRYGate(q, 1.570662617992733, 7);
  sqcRZGate(q, -0.13307320436526648, 7);
  sqcRYGate(q, 0.0001312203342559469, 8);
  sqcRZGate(q, -0.21655679573256947, 8);
  sqcRYGate(q, 3.060548875753711, 9);
  sqcRZGate(q, 0.09822876531591174, 9);
  sqcRYGate(q, 2.8871998504554917, 10);
  sqcRZGate(q, 0.5272872390973754, 10);
  sqcRYGate(q, -1.570619836529847, 11);
  sqcRZGate(q, -1.5681597463577348, 11);
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
  sqcRYGate(q, -0.756339298606596, 0);
  sqcRZGate(q, -1.0237425980371189, 0);
  sqcRYGate(q, 2.5190916050224055, 1);
  sqcRZGate(q, -2.0545796411964536, 1);
  sqcRYGate(q, -3.1406423175358817, 2);
  sqcRZGate(q, 2.868354674543555, 2);
  sqcRYGate(q, 1.5712214834202527, 3);
  sqcRZGate(q, -3.1403626659081803, 3);
  sqcRYGate(q, 0.05848926429643342, 4);
  sqcRZGate(q, -1.4508941018306392, 4);
  sqcRYGate(q, -3.141056972109976, 5);
  sqcRZGate(q, -1.7630706415219226, 5);
  sqcRYGate(q, 0.0064344407419714145, 6);
  sqcRZGate(q, 1.478807364309837, 6);
  sqcRYGate(q, -0.0004377417759494355, 7);
  sqcRZGate(q, -2.6597426856382334, 7);
  sqcRYGate(q, -1.568732469274213, 8);
  sqcRZGate(q, -3.1366509984244018, 8);
  sqcRYGate(q, -1.571417336923378, 9);
  sqcRZGate(q, -3.140335726593857, 9);
  sqcRYGate(q, 0.0019987264346276916, 10);
  sqcRZGate(q, -1.7292476864359247, 10);
  sqcRYGate(q, -2.6620525926061935, 11);
  sqcRZGate(q, -1.5675097119918937, 11);
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
  sqcRYGate(q, -0.009255912280291767, 0);
  sqcRZGate(q, 2.0850829541458076, 0);
  sqcRYGate(q, 1.5714504325579952, 1);
  sqcRZGate(q, -0.02987416691113598, 1);
  sqcRYGate(q, 1.5682801251484504, 2);
  sqcRZGate(q, 0.016161902956087104, 2);
  sqcRYGate(q, 2.1631380280313355, 3);
  sqcRZGate(q, -3.1265113059435388, 3);
  sqcRYGate(q, 3.0749484685225803, 4);
  sqcRZGate(q, 3.065536146478523, 4);
  sqcRYGate(q, 1.9797242238176709, 5);
  sqcRZGate(q, 0.4196378702844656, 5);
  sqcRYGate(q, -1.579460697809559, 6);
  sqcRZGate(q, -0.2742664875633185, 6);
  sqcRYGate(q, 1.6853318923111296, 7);
  sqcRZGate(q, 1.1658133164957538, 7);
  sqcRYGate(q, 2.1258056863379173, 8);
  sqcRZGate(q, 3.1391576870499547, 8);
  sqcRYGate(q, 1.5706835184113963, 9);
  sqcRZGate(q, 0.4438837654563657, 9);
  sqcRYGate(q, -1.5768953338248657, 10);
  sqcRZGate(q, 0.0025764489650903404, 10);
  sqcRYGate(q, 0.9557438602767839, 11);
  sqcRZGate(q, 1.5671299523093802, 11);
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
  sqcRYGate(q, -0.353173254494519, 0);
  sqcRZGate(q, -1.5581045919691872, 0);
  sqcRYGate(q, -1.4205561163760043, 1);
  sqcRZGate(q, -0.2783036918940232, 1);
  sqcRYGate(q, 0.8627436811332254, 2);
  sqcRZGate(q, 2.2886291541162236, 2);
  sqcRYGate(q, 1.987954356251885, 3);
  sqcRZGate(q, -0.6155475295750011, 3);
  sqcRYGate(q, -3.1370004986487223, 4);
  sqcRZGate(q, -3.0153824328623404, 4);
  sqcRYGate(q, 0.002152757767809084, 5);
  sqcRZGate(q, -2.3123392333031156, 5);
  sqcRYGate(q, -0.027085406115094912, 6);
  sqcRZGate(q, -1.2815146597188027, 6);
  sqcRYGate(q, 3.1409485504343793, 7);
  sqcRZGate(q, -2.9940057361239076, 7);
  sqcRYGate(q, 1.5563126231240865, 8);
  sqcRZGate(q, 3.1380108913727804, 8);
  sqcRYGate(q, -1.5710160674522111, 9);
  sqcRZGate(q, -0.21060333633318237, 9);
  sqcRYGate(q, -1.569401477302439, 10);
  sqcRZGate(q, 0.9508280567103785, 10);
  sqcRYGate(q, 2.3925336748791177, 11);
  sqcRZGate(q, 3.1397201875100413, 11);
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
  sqcRYGate(q, 3.1399572035054186, 0);
  sqcRZGate(q, -1.7456786768486483, 0);
  sqcRYGate(q, -3.1372014184558763, 1);
  sqcRZGate(q, 3.045281629694293, 1);
  sqcRYGate(q, -0.010640126068850009, 2);
  sqcRZGate(q, -2.313994470815647, 2);
  sqcRYGate(q, 0.001185898649396222, 3);
  sqcRZGate(q, -2.4904926847829087, 3);
  sqcRYGate(q, 0.03151973519702178, 4);
  sqcRZGate(q, -0.4405207997503111, 4);
  sqcRYGate(q, 1.8605261164076596, 5);
  sqcRZGate(q, -0.27606812368914097, 5);
  sqcRYGate(q, 3.1387474416514514, 6);
  sqcRZGate(q, 1.5631447971225612, 6);
  sqcRYGate(q, 0.0014434358290793818, 7);
  sqcRZGate(q, -1.504503063973619, 7);
  sqcRYGate(q, -1.2414637646007871, 8);
  sqcRZGate(q, -1.5691529548137035, 8);
  sqcRYGate(q, -3.1408863784325245, 9);
  sqcRZGate(q, 2.9284928020561427, 9);
  sqcRYGate(q, -1.571883948344576, 10);
  sqcRZGate(q, 3.0925429282304266, 10);
  sqcRYGate(q, 1.5683889530210227, 11);
  sqcRZGate(q, -0.5297872892232975, 11);
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
  sqcRYGate(q, -0.7339514430475628, 0);
  sqcRZGate(q, 1.608744668831589, 0);
  sqcRYGate(q, -2.990106602900493, 1);
  sqcRZGate(q, -1.3817746443166088, 1);
  sqcRYGate(q, 2.432810149760612, 2);
  sqcRZGate(q, -0.0187170036211332, 2);
  sqcRYGate(q, -2.1394430023428095, 3);
  sqcRZGate(q, 2.444597013022196, 3);
  sqcRYGate(q, 3.1354710040163964, 4);
  sqcRZGate(q, -0.5272061706948294, 4);
  sqcRYGate(q, 3.1394293348965094, 5);
  sqcRZGate(q, 0.7180867396466634, 5);
  sqcRYGate(q, -0.007232032287570078, 6);
  sqcRZGate(q, 1.4465769194044364, 6);
  sqcRYGate(q, 0.0013893410729837186, 7);
  sqcRZGate(q, 0.6809675683930089, 7);
  sqcRYGate(q, 1.581284450206196, 8);
  sqcRZGate(q, 1.5738608625114203, 8);
  sqcRYGate(q, 0.47553066480552464, 9);
  sqcRZGate(q, -1.5597827555402983, 9);
  sqcRYGate(q, 3.0322076068391812, 10);
  sqcRZGate(q, -1.6201497438237167, 10);
  sqcRYGate(q, 3.1407150411698526, 11);
  sqcRZGate(q, 2.4328700655008046, 11);
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
  sqcRYGate(q, -1.5757455526180284, 0);
  sqcRZGate(q, -1.497251352730047, 0);
  sqcRYGate(q, -1.5165425680441005, 1);
  sqcRZGate(q, 3.0840217115095094, 1);
  sqcRYGate(q, 1.5678571280970282, 2);
  sqcRZGate(q, -1.5733522961548203, 2);
  sqcRYGate(q, -3.1407847823573767, 3);
  sqcRZGate(q, -2.286820203228826, 3);
  sqcRYGate(q, -0.015464830273256146, 4);
  sqcRZGate(q, -0.4316389255269976, 4);
  sqcRYGate(q, -0.7904878657949955, 5);
  sqcRZGate(q, -0.35700584323374474, 5);
  sqcRYGate(q, -2.99059969557473, 6);
  sqcRZGate(q, 0.5810413163654429, 6);
  sqcRYGate(q, 2.874692029365363, 7);
  sqcRZGate(q, 0.13796932979701512, 7);
  sqcRYGate(q, -1.5817075107685683, 8);
  sqcRZGate(q, -0.08603703173158728, 8);
  sqcRYGate(q, 0.23098597491047965, 9);
  sqcRZGate(q, 0.4811742756171302, 9);
  sqcRYGate(q, -1.470862475777895, 10);
  sqcRZGate(q, 1.5698822742064484, 10);
  sqcRYGate(q, -1.570195760527417, 11);
  sqcRZGate(q, -1.5694115903322292, 11);
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
  sqcRYGate(q, 0.07308618093320265, 0);
  sqcRZGate(q, 2.930956072108044, 0);
  sqcRYGate(q, -0.008683319613323803, 1);
  sqcRZGate(q, 0.18517433716158926, 1);
  sqcRYGate(q, -1.570210194109351, 2);
  sqcRZGate(q, 0.25219068470306394, 2);
  sqcRYGate(q, -1.5713510042826704, 3);
  sqcRZGate(q, -2.9359122573208527, 3);
  sqcRYGate(q, 3.140119850383842, 4);
  sqcRZGate(q, -1.0452270220638806, 4);
  sqcRYGate(q, 0.0022387549426969855, 5);
  sqcRZGate(q, 0.9745861145149249, 5);
  sqcRYGate(q, -0.0009997676868866991, 6);
  sqcRZGate(q, 2.1178583773396005, 6);
  sqcRYGate(q, -3.1407760659051727, 7);
  sqcRZGate(q, 2.865810133471742, 7);
  sqcRYGate(q, -0.004765049361460605, 8);
  sqcRZGate(q, 1.679993305162661, 8);
  sqcRYGate(q, -0.004518221334853578, 9);
  sqcRZGate(q, -0.5383199181730474, 9);
  sqcRYGate(q, 1.563597060246714, 10);
  sqcRZGate(q, -2.812561982157078, 10);
  sqcRYGate(q, -2.2114676231596695, 11);
  sqcRZGate(q, -1.4736861407958786, 11);
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
  sqcRYGate(q, 1.600122992155451, 0);
  sqcRZGate(q, -2.948783527584309, 0);
  sqcRYGate(q, -1.5510006103402814, 1);
  sqcRZGate(q, -2.929674116620669, 1);
  sqcRYGate(q, -0.14014616051371842, 2);
  sqcRZGate(q, 1.524414995224222, 2);
  sqcRYGate(q, 3.0138296887618075, 3);
  sqcRZGate(q, 1.6227078360398792, 3);
  sqcRYGate(q, 1.6057046605828198, 4);
  sqcRZGate(q, -2.9443511235425954, 4);
  sqcRYGate(q, 1.552779409438216, 5);
  sqcRZGate(q, 3.0776470622390177, 5);
  sqcRYGate(q, -0.14010908883479978, 6);
  sqcRZGate(q, 1.8333086710825894, 6);
  sqcRYGate(q, -1.8013463812401436, 7);
  sqcRZGate(q, -0.16695180708035068, 7);
  sqcRYGate(q, -1.2368002000181244, 8);
  sqcRZGate(q, -1.617007517881233, 8);
  sqcRYGate(q, 0.39766790009637903, 9);
  sqcRZGate(q, -1.5840147391618042, 9);
  sqcRYGate(q, -1.587055056316326, 10);
  sqcRZGate(q, 3.1050469092289643, 10);
  sqcRYGate(q, -2.9366644829278075, 11);
  sqcRZGate(q, -1.533061845789887, 11);

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
