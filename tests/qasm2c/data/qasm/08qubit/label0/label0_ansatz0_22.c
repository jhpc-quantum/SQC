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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.07401642552532299, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.0896670060001725, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.03125810811456152, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.05570181014723419, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.07845691980833769, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.028968677534692986, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.07515309725767647, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.14976661365526325, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.5004922699614235, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.06552744289866134, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.4020705060011533, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.3590567748357436, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.3439247033240496, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.05512383756530479, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.8849060070360611, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.1334872695753537, 0);
  sqcRZGate(q, 0.03326552392887079, 1);
  sqcRZGate(q, -0.05820327040855787, 2);
  sqcRZGate(q, -0.05072093299385124, 3);
  sqcRZGate(q, 0.025851453147575854, 4);
  sqcRZGate(q, -0.10946581112923663, 5);
  sqcRZGate(q, -0.015763844445646043, 6);
  sqcRZGate(q, 0.03345371752578242, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.026542708005504047, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.11702126780378048, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.130031060403811, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.018948713229539046, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.005401295439553737, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.036297065057422015, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.014651870768356922, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.1728763192709837, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.5682366152747265, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.22523938295159138, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.4387929496019167, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.42863919662850064, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.30663164061094994, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.05987074541900872, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.8233188008618125, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.2016904202607388, 0);
  sqcRZGate(q, 0.1588900507572944, 1);
  sqcRZGate(q, 0.0780688528924372, 2);
  sqcRZGate(q, -0.12500003934279816, 3);
  sqcRZGate(q, 0.16135921484565632, 4);
  sqcRZGate(q, -0.14740114442632918, 5);
  sqcRZGate(q, -0.04507955172145524, 6);
  sqcRZGate(q, 0.093183206312575, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.06843328419607282, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.21017442232409625, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.1420694986906543, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.018824382064380252, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.06794108141340434, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.06396995092880842, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.07324862066098078, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.14704327439460407, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.5370729471293147, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.2568001702108827, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.38081019861499527, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.46237994834176194, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.4337565410831695, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.16169562008314572, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.8460099762088273, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.19129307886033547, 0);
  sqcRZGate(q, 0.1587946990284506, 1);
  sqcRZGate(q, 0.08706139520454802, 2);
  sqcRZGate(q, -0.10396061959445208, 3);
  sqcRZGate(q, 0.30270898495630455, 4);
  sqcRZGate(q, -0.25026801200901033, 5);
  sqcRZGate(q, -0.11698626623870619, 6);
  sqcRZGate(q, 0.23097040873873623, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.1147725749621782, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.22378481766542377, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.18370820903740065, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.016351659703772354, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.21524105504466612, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.07910421309871732, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.10310236958146254, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.231037661383377, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.6237384703857476, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.40749236151314416, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3672969994975979, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.35426260993325975, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.3546700405730313, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.28087355178877144, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.7802430453011091, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.12078702571991323, 0);
  sqcRZGate(q, 0.14613630475314907, 1);
  sqcRZGate(q, -0.04192569558212642, 2);
  sqcRZGate(q, -0.12583549216089623, 3);
  sqcRZGate(q, 0.3734891924106817, 4);
  sqcRZGate(q, -0.32894512542901216, 5);
  sqcRZGate(q, -0.19427591131591654, 6);
  sqcRZGate(q, 0.28320412869236294, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.05225871271120754, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.08403161362938019, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.05535098783371014, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.01844334057285903, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.4166562311294425, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.01593045089955809, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.028191018803281828, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2640509839955379, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.6176063851330481, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.5157616946461643, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2624820929948215, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.2852552204124768, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.1248220274122407, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.25910877604353666, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.7172082726041756, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.07535682272238846, 0);
  sqcRZGate(q, 0.017697692808628367, 1);
  sqcRZGate(q, -0.025800480635915335, 2);
  sqcRZGate(q, -0.083077400202351, 3);
  sqcRZGate(q, 0.3510177247393554, 4);
  sqcRZGate(q, -0.3115631732423923, 5);
  sqcRZGate(q, -0.20787426567712847, 6);
  sqcRZGate(q, 0.12905295065995598, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.04215986877867163, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.022410901162744103, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.24796902953409589, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.022357418965644398, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.36009116310183914, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.08399947375960745, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.011074972273960417, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.37401905049622114, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.606942088498718, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.37124282535669245, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.19899681813366454, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.27802324611587076, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.06834917897425137, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.2033753707226501, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.568656797427097, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.011347532692414041, 0);
  sqcRZGate(q, 0.0376257813005408, 1);
  sqcRZGate(q, -0.03460285742296743, 2);
  sqcRZGate(q, -0.09936932073056355, 3);
  sqcRZGate(q, 0.2094364159463536, 4);
  sqcRZGate(q, -0.2589652980320757, 5);
  sqcRZGate(q, -0.21238174982673538, 6);
  sqcRZGate(q, 0.08995310553485535, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.1101147551177128, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.00613560615179017, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.38841245316172684, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.006301462305529398, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.2518500564776439, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.15296493363898547, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.004344332948813125, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2868825794867519, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.5101145414652505, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.19933730907902486, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2785084100211161, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.35825674718171296, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.056178877651810795, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.25394917802407957, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.5887120659164842, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.009121739205746307, 0);
  sqcRZGate(q, 0.02584019749307837, 1);
  sqcRZGate(q, 0.010931080853324096, 2);
  sqcRZGate(q, -0.0014758284643786187, 3);
  sqcRZGate(q, 0.24378505884262863, 4);
  sqcRZGate(q, -0.09226795973407859, 5);
  sqcRZGate(q, -0.11131153750838381, 6);
  sqcRZGate(q, -0.11948358961018565, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.12277591956605187, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.0358450082792569, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.31568449537249055, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.0006248892563076954, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.07054294759917873, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.04831072751003122, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.1531227450671425, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.33563313666845984, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.40247820496443326, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.029022862721024216, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5066594394709251, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.24592180665128155, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.04295501073824553, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.15934335874956618, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.48026040356047484, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.031604398911682124, 0);
  sqcRZGate(q, 0.00774729764092744, 1);
  sqcRZGate(q, 0.07830053084697841, 2);
  sqcRZGate(q, -0.1336930565429516, 3);
  sqcRZGate(q, 0.018559731155444962, 4);
  sqcRZGate(q, -0.04627329508658714, 5);
  sqcRZGate(q, -0.11687555899629085, 6);
  sqcRZGate(q, -0.0683906405909149, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.013095378642318748, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.0851290589013625, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.0026180160722042074, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.021054743091848797, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.13009741142529815, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.14587139856776765, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.36688967206130096, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.27523232533388914, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.27884010212474086, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.03839865428455195, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3877478727557423, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.13125916958225695, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.09223890536109378, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.023848929440774568, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.40971171180525146, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.06062547716276801, 0);
  sqcRZGate(q, 0.08000619012761043, 1);
  sqcRZGate(q, 0.007457640919182257, 2);
  sqcRZGate(q, -0.24709226816143542, 3);
  sqcRZGate(q, -0.12260584369535686, 4);
  sqcRZGate(q, -0.005500856714193556, 5);
  sqcRZGate(q, -0.10576486040456859, 6);
  sqcRZGate(q, 0.07885614984228512, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.06168515983794555, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.0535868276079767, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.25259151544578473, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.0715045807983486, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.033838524863346375, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.12880823068358768, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.24024240395271662, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2939080241701778, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.10990574968263209, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.15279205937144208, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.22989991278820082, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.11618397429823397, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.17084240594502298, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.13809979758460836, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.47581260301607986, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.07443035857407407, 0);
  sqcRZGate(q, 0.07342167245655325, 1);
  sqcRZGate(q, -0.02987661591517951, 2);
  sqcRZGate(q, -0.26301704585345664, 3);
  sqcRZGate(q, -0.1332360243067937, 4);
  sqcRZGate(q, -0.056339922861185165, 5);
  sqcRZGate(q, -0.10984426712569835, 6);
  sqcRZGate(q, 0.14471388811651759, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.16462147512489714, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.01142372084243383, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2801215660287465, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.06566434422517888, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.048325026089048206, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.06054533920465853, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.1352003405494382, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.26865045312344166, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.008522292902415528, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.15133912837479727, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2203953890673875, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.10337541745949876, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.1170847142357836, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.28573203404931347, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.4127095064972651, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.16079042817002168, 0);
  sqcRZGate(q, 0.09827138337376222, 1);
  sqcRZGate(q, -0.07798993006056083, 2);
  sqcRZGate(q, -0.32533656575760417, 3);
  sqcRZGate(q, -0.15440694649283104, 4);
  sqcRZGate(q, -0.008464850556849503, 5);
  sqcRZGate(q, -0.13676655001734495, 6);
  sqcRZGate(q, 0.21087011495848812, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.12745264743756757, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.2233008838557667, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.38835218289116014, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.026466376869380526, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.0806811080703172, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.06085439471056289, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.011479723175114394, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.20176432876909284, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.24383480550137152, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.05398119242343783, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.28179136399084104, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.22375334612713144, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.022921134076193013, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.27668280648437843, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.37800536458923006, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.08990412486681122, 0);
  sqcRZGate(q, 0.05601534371321236, 1);
  sqcRZGate(q, -0.008342943391810713, 2);
  sqcRZGate(q, -0.46687377938349256, 3);
  sqcRZGate(q, -0.11123813962319865, 4);
  sqcRZGate(q, 0.07899762247848596, 5);
  sqcRZGate(q, -0.060544990695619944, 6);
  sqcRZGate(q, 0.19448632906949068, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.019063208818985093, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.3659632515422958, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.49957340065042427, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.11012323560721424, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.39286523505285653, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.04837147485780495, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.1303560407278026, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.17658929910927093, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5087628565789519, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.16750623671756812, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.17423826848162863, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.10228431313952842, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.052271405173734686, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.4256526930132962, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.33542834885597156, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.10253255416078781, 0);
  sqcRZGate(q, -0.04045278849845274, 1);
  sqcRZGate(q, -0.05561122034925451, 2);
  sqcRZGate(q, -0.20041914374282296, 3);
  sqcRZGate(q, -0.09431081834823074, 4);
  sqcRZGate(q, 0.1085227784626101, 5);
  sqcRZGate(q, 0.06348233233858834, 6);
  sqcRZGate(q, 0.06844447183035185, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.02411283827448328, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.41294696508465484, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6415918456648317, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.2310719601943278, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.586061260517944, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.1122286279179629, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.34047095236780756, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.1535506328651143, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.6112587890121761, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.1004202967233873, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.022687119220554677, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.5449019244222301, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.4845393602367981, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.4023635273355664, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.11455534524941188, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.04156013492036716, 0);
  sqcRZGate(q, -0.22434256637471697, 1);
  sqcRZGate(q, 0.013570967582861396, 2);
  sqcRZGate(q, 0.10656419431447993, 3);
  sqcRZGate(q, 0.09062498813138575, 4);
  sqcRZGate(q, -0.03937772772407487, 5);
  sqcRZGate(q, 0.0168553798445234, 6);
  sqcRZGate(q, 0.15498256854873813, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.07063685865907353, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.3972811124748241, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6337207520022415, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.20681489464702735, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.5361168026109541, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.19687092190970226, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.14764475492461554, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.1150851326118469, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.7909449366275654, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.3149527389860452, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.7529744500128492, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.4233677275112163, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.6966510693130792, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.10806957837056326, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.13923495855407222, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.002233847787699497, 0);
  sqcRZGate(q, -0.11631512702593289, 1);
  sqcRZGate(q, 0.03193578405666957, 2);
  sqcRZGate(q, 0.28402422191947496, 3);
  sqcRZGate(q, -0.06257828941588386, 4);
  sqcRZGate(q, -0.0824187053332516, 5);
  sqcRZGate(q, 0.06980433289485975, 6);
  sqcRZGate(q, 0.09368928329295646, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.1699331884816012, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.18665266836124572, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.007241997894180681, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.007204749703620027, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.41702752963183404, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.014757474403958405, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.017256796490129397, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.18140338533353007, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.8469585213533085, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.9525772884691389, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5865859392875682, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.6752762799144099, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.9608077812140764, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.18480385604254626, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.08519201009995082, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.04924737139864576, 0);
  sqcRZGate(q, 0.032112779650008416, 1);
  sqcRZGate(q, -0.059723988928614455, 2);
  sqcRZGate(q, -0.2723690163447348, 3);
  sqcRZGate(q, -0.10430748206795926, 4);
  sqcRZGate(q, 0.011070954424928052, 5);
  sqcRZGate(q, -0.01495452707377082, 6);
  sqcRZGate(q, 0.12365309394991902, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.10365934379080122, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.08360831904178552, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.028192801340554973, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.000560898198949785, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.5004953849778849, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.13812459928056445, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.0945325842999098, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.21802064504764135, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.873226811081085, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.9456665374830686, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.7647882952271691, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.5133000984613455, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 1.0182939846748402, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.2982431805397037, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.03270070553583924, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.0763626874308135, 0);
  sqcRZGate(q, 0.1272174059072398, 1);
  sqcRZGate(q, 0.047683140706730076, 2);
  sqcRZGate(q, -0.38503031851741776, 3);
  sqcRZGate(q, 0.12991425180633165, 4);
  sqcRZGate(q, 0.011538300551754036, 5);
  sqcRZGate(q, -0.08290791537173507, 6);
  sqcRZGate(q, 0.13453978737796282, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.1818623268106858, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.1869291861503261, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.03734257561646977, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.02622204805043079, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.3907584809287527, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.0742070880362163, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.18436165718082564, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4205638316611102, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.7754559348754667, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.8858168187977951, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.6585535511703805, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.6689446069000753, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 1.0963390286921817, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.19606586480475588, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.09104354118349348, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.02611456289670739, 0);
  sqcRZGate(q, 0.5230031622480317, 1);
  sqcRZGate(q, 0.14636784968024666, 2);
  sqcRZGate(q, 0.46432390834284215, 3);
  sqcRZGate(q, 0.004437115940293999, 4);
  sqcRZGate(q, -0.025066258008875398, 5);
  sqcRZGate(q, -0.06004692720628116, 6);
  sqcRZGate(q, 0.275107262160928, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.12233231122882061, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.43762784671279936, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.011654352372564738, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.06495481699326575, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.5344960711476101, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.048942743433835874, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.2446705062126822, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2878893901325402, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.7199591103157308, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.4045176719255385, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3527104239534854, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.17048750612866756, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.688696641749732, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.23618685845628684, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.22250597720035997, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.11820683127059363, 0);
  sqcRZGate(q, 0.4174815798665491, 1);
  sqcRZGate(q, -0.032520578957131424, 2);
  sqcRZGate(q, 0.43086180459731394, 3);
  sqcRZGate(q, -0.1191408841081125, 4);
  sqcRZGate(q, -0.07722414483573864, 5);
  sqcRZGate(q, 0.02175758933917186, 6);
  sqcRZGate(q, 0.42401044092564305, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.03781989570730345, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.7927861568959846, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.29131500611369104, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.12161832269795128, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.8346775372161948, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.09109406873314134, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.21205017048001107, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.08934114438949768, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.8926893625273821, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.17767232948412828, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.09971984247685382, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.1010180992878218, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.5138885242589831, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.20838967187755683, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.2776863403651087, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.15142891991180985, 0);
  sqcRZGate(q, 0.3236242108260578, 1);
  sqcRZGate(q, 0.12493947016969223, 2);
  sqcRZGate(q, 0.439370295563521, 3);
  sqcRZGate(q, 0.01127502146112401, 4);
  sqcRZGate(q, -0.3965493262559717, 5);
  sqcRZGate(q, 0.02226239662076418, 6);
  sqcRZGate(q, 0.5292103614188717, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.2610077965937174, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.547777187601962, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.48206280892950437, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.03904848117272379, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.8617485643690466, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.0017924026387842323, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.02297370098295487, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.3853397453633843, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.9357302691191588, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.43884716990717554, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.19439953574853194, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.456710692977511, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.049046005119658995, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.37776852301242503, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.2493407976739598, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.12891869843908088, 0);
  sqcRZGate(q, 0.1557466801510267, 1);
  sqcRZGate(q, 0.005811685553789023, 2);
  sqcRZGate(q, 0.42553537715791145, 3);
  sqcRZGate(q, 0.05495682708631227, 4);
  sqcRZGate(q, -0.3262960214438117, 5);
  sqcRZGate(q, 0.018997188214849137, 6);
  sqcRZGate(q, 0.6872559657476816, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3007845004001621, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.01336900238223523, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.24210255522875732, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.12131432311615052, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.6448873511086687, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.26159171827440525, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.16639411012217056, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.12284967290986251, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.7176653037944625, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.3768758009880152, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.12208171643861038, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.5553424490046643, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.022751372555671622, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.11579095133782126, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.1500211716060903, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.20943565229937952, 0);
  sqcRZGate(q, -0.10752586309613965, 1);
  sqcRZGate(q, 0.04035499472383335, 2);
  sqcRZGate(q, -0.0016148037165206479, 3);
  sqcRZGate(q, 0.0558114174182061, 4);
  sqcRZGate(q, -0.4563845240540093, 5);
  sqcRZGate(q, 0.021183883645149542, 6);
  sqcRZGate(q, 0.7760276134775422, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.5342945238584808, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.4745988688058068, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.07888164230728253, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.25522030435919146, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.5676537244080717, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.2598762581044503, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.15675915693332046, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.32795926824496413, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.33400854863299534, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.3151954890783929, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.4681210116690456, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.34730883691478776, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.13194966991482798, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.7217111950857861, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.06554148300859654, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.16383549585434443, 0);
  sqcRZGate(q, -0.055129545453699455, 1);
  sqcRZGate(q, -0.06361054225383908, 2);
  sqcRZGate(q, -0.04541757503638572, 3);
  sqcRZGate(q, -0.07121011977055487, 4);
  sqcRZGate(q, -0.7715158812315416, 5);
  sqcRZGate(q, 0.10269388282259376, 6);
  sqcRZGate(q, 0.6882011108305631, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.03170098652144319, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.1346905218957834, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.2874153058607201, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.0633981175508667, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.029244276714986625, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.08801067887839695, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.6596142789764661, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.5627404306615627, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.1578556959383206, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.5796890941394783, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.027997395783455798, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.3234781759900943, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.20629801960012042, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.04956991684605058, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.6391497474761629, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.2160410492045034, 0);
  sqcRZGate(q, -0.028243198827127766, 1);
  sqcRZGate(q, -0.03610218828224575, 2);
  sqcRZGate(q, 0.06550442229966401, 3);
  sqcRZGate(q, -0.045414903213700404, 4);
  sqcRZGate(q, -0.5917956646216965, 5);
  sqcRZGate(q, 0.0026371727375324367, 6);
  sqcRZGate(q, 0.37915884390549204, 7);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.6524003009462677, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.37651950026397285, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.04674286498329241, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.09734953120310663, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.15856474615367547, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.22945198059022823, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.22247836448061414, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.2165981445230088, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.1400142315686374, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.03593358340496161, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.11752648988006809, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.2581678322611406, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.09743731707305352, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.009148002656262701, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.5708422508162705, 7);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.17963025509472255, 0);
  sqcRZGate(q, 0.09128942411337604, 1);
  sqcRZGate(q, 0.0755623228073675, 2);
  sqcRZGate(q, -0.048196725603120806, 3);
  sqcRZGate(q, 0.11005151344850758, 4);
  sqcRZGate(q, -0.5003861567487591, 5);
  sqcRZGate(q, -0.10085914475137131, 6);
  sqcRZGate(q, 0.3770553424141167, 7);

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
