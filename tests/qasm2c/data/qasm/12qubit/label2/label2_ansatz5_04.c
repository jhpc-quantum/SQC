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

  sqcRYGate(q, -1.7598842117514446, 0);
  sqcRYGate(q, -2.4474895550098874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9101339538341957, 0);
  sqcRYGate(q, -2.690830410743808, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8260138525770463, 2);
  sqcRYGate(q, -0.13729195613013623, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.303119497009415, 2);
  sqcRYGate(q, 2.1788863316462255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.98386425069216, 4);
  sqcRYGate(q, 3.1162762555421857, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.221513025340137, 4);
  sqcRYGate(q, 2.147446419549633, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6950791345117439, 6);
  sqcRYGate(q, 0.14286273677032124, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5448473025603517, 6);
  sqcRYGate(q, -1.7038751001406114, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.915784950549637, 8);
  sqcRYGate(q, -1.0054008385554472, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.984637483704522, 8);
  sqcRYGate(q, 2.3657675285032447, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.6298328020779906, 10);
  sqcRYGate(q, -2.332477625363084, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9615157857946874, 10);
  sqcRYGate(q, -1.8111928046361863, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8768350999295862, 1);
  sqcRYGate(q, -2.851560619051507, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7783950920408969, 1);
  sqcRYGate(q, -0.17646546843954258, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6375690268746963, 3);
  sqcRYGate(q, -0.8597782856442935, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9339277401910069, 3);
  sqcRYGate(q, -2.538875367131301, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2318532627951195, 5);
  sqcRYGate(q, -2.9542586613867723, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2303683320963144, 5);
  sqcRYGate(q, 2.8444835712773155, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0841845875359564, 7);
  sqcRYGate(q, -0.01823361613171008, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.1385600752168246, 7);
  sqcRYGate(q, -2.110755663323441, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.13804149274064642, 9);
  sqcRYGate(q, -2.234042776354779, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.10053195808678757, 9);
  sqcRYGate(q, -0.7257255896976625, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.3465352888696445, 0);
  sqcRYGate(q, 1.1896781710239281, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3105965712056404, 0);
  sqcRYGate(q, -3.1414253170369064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.04109583387071946, 2);
  sqcRYGate(q, 1.6905035897551572, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8681877335065593, 2);
  sqcRYGate(q, 2.7972693317863007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.140196686363172, 4);
  sqcRYGate(q, 2.535853051197477, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.662505734413626, 4);
  sqcRYGate(q, 2.993020481471711, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8678911755211782, 6);
  sqcRYGate(q, 1.6359709769168276, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0947833755498566, 6);
  sqcRYGate(q, -0.036205845358497454, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.525925803800289, 8);
  sqcRYGate(q, -0.8290601403684662, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.6660638088426336, 8);
  sqcRYGate(q, 1.3823423561786612, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6417607697662114, 10);
  sqcRYGate(q, 2.689287190166709, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.413687083255766, 10);
  sqcRYGate(q, -0.22131004524880996, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5433334044111445, 1);
  sqcRYGate(q, -2.78533831056215, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2957589169154446, 1);
  sqcRYGate(q, -1.59554210671032, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.142340843493984, 3);
  sqcRYGate(q, 2.551015179967182, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1183113814445544, 3);
  sqcRYGate(q, -2.97314385620089, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.02401334834633, 5);
  sqcRYGate(q, -0.26975840644436655, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0580664306216163, 5);
  sqcRYGate(q, -2.981106585290077, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.05879211425982604, 7);
  sqcRYGate(q, -1.6135456968877353, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.6824878698277344, 7);
  sqcRYGate(q, 1.7654247055470857, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.7565518984916504, 9);
  sqcRYGate(q, -2.182607170142057, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.618759878257988, 9);
  sqcRYGate(q, 3.1318578810913054, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.7584713001641221, 0);
  sqcRYGate(q, 2.9302659871615093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.018098932026807, 0);
  sqcRYGate(q, -0.6829197303298301, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.299159156062682, 2);
  sqcRYGate(q, 1.8371568276000048, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5605726440664709, 2);
  sqcRYGate(q, -0.23545485860670434, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.24163678270252917, 4);
  sqcRYGate(q, -1.397701344651404, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.955941514575807, 4);
  sqcRYGate(q, 0.013656688132561712, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5489202784005025, 6);
  sqcRYGate(q, 1.4950238851825643, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.014275879777950529, 6);
  sqcRYGate(q, -0.003710528286828758, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3606533324435923, 8);
  sqcRYGate(q, -1.77002839738105, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7770592358237307, 8);
  sqcRYGate(q, -0.5221469011664368, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.422686795428234, 10);
  sqcRYGate(q, -1.6992930058512448, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5532798519842624, 10);
  sqcRYGate(q, 2.6768654222150157, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.117780260165066, 1);
  sqcRYGate(q, 0.002076690246776625, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6455695913990644, 1);
  sqcRYGate(q, 1.1590087797183015, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.147279354084921, 3);
  sqcRYGate(q, 2.029386542283157, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.28098473735021107, 3);
  sqcRYGate(q, -2.0347386446630087, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4411609625725446, 5);
  sqcRYGate(q, 1.4778716923424697, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.975350529218733, 5);
  sqcRYGate(q, -2.8815275026268683, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.236497596174103, 7);
  sqcRYGate(q, -2.7674105121313244, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.1194910283172109, 7);
  sqcRYGate(q, -2.015624272599669, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.1794511480322157, 9);
  sqcRYGate(q, -1.8121326397942914, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.041619677614164, 9);
  sqcRYGate(q, 3.097341513008685, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.7074989552986417, 0);
  sqcRYGate(q, 1.3254078116294012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.21648988185550877, 0);
  sqcRYGate(q, 1.4585901201094629, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07730555294565933, 2);
  sqcRYGate(q, -0.5307725643229234, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.988537748774127, 2);
  sqcRYGate(q, -0.04755032860169522, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.936324366611493, 4);
  sqcRYGate(q, 1.2277082653256564, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3556980922673103, 4);
  sqcRYGate(q, 1.1127160101320326, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1537591087674999, 6);
  sqcRYGate(q, 1.519354964497266, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1216750661997117, 6);
  sqcRYGate(q, -2.8653801198878672, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4927507770012349, 8);
  sqcRYGate(q, -0.1274953090367381, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9748550087255607, 8);
  sqcRYGate(q, 1.9797652693648082, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.3073698862513301, 10);
  sqcRYGate(q, -1.756247693647718, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.858358443221428, 10);
  sqcRYGate(q, -1.1158354947339533, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.4655081615135157, 1);
  sqcRYGate(q, -2.37716418289681, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.63121058768913, 1);
  sqcRYGate(q, 2.980098887304633, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.113887673480753, 3);
  sqcRYGate(q, 1.0091160288134038, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.010381519274257985, 3);
  sqcRYGate(q, -3.135490065684847, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0083364439258666, 5);
  sqcRYGate(q, -1.8367512378481097, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.06071826163402591, 5);
  sqcRYGate(q, -3.084768670335273, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0817249690496107, 7);
  sqcRYGate(q, -2.3555721048953733, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.0626852000488043, 7);
  sqcRYGate(q, -0.03736999935024608, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.6544045009847231, 9);
  sqcRYGate(q, 1.9365615687568505, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.030536748443312334, 9);
  sqcRYGate(q, -0.001938599818337409, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9753559118057353, 0);
  sqcRYGate(q, -1.347133634165151, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3015209512486743, 0);
  sqcRYGate(q, 1.0613352487009808, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3860424308748092, 2);
  sqcRYGate(q, -1.9477655064290262, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9223513928075935, 2);
  sqcRYGate(q, 0.12916495948348763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2771293653402944, 4);
  sqcRYGate(q, 0.13550945860143906, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.27322011633171606, 4);
  sqcRYGate(q, -0.6937865079225034, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.485048992622474, 6);
  sqcRYGate(q, 2.191604402726247, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0637736372215545, 6);
  sqcRYGate(q, -2.451833437984499, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8267824684809106, 8);
  sqcRYGate(q, 2.462802595147508, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0893367917955006, 8);
  sqcRYGate(q, 2.5280367390436034, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.9552803515504475, 10);
  sqcRYGate(q, 3.0241569165593334, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.3961860830759854, 10);
  sqcRYGate(q, -0.6650654030258468, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4022618707249999, 1);
  sqcRYGate(q, -2.0487212938384545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.477322767893733, 1);
  sqcRYGate(q, 0.9757145610391227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2078101832385517, 3);
  sqcRYGate(q, -2.6014622827369203, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.003729717375233094, 3);
  sqcRYGate(q, 3.1306398207582236, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3185659179716267, 5);
  sqcRYGate(q, 0.3064908841983591, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1338735208161554, 5);
  sqcRYGate(q, -0.06405462121596832, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9745599880957747, 7);
  sqcRYGate(q, -3.1022340010089753, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.8722134984604729, 7);
  sqcRYGate(q, 2.9489143124905817, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.302594668553941, 9);
  sqcRYGate(q, 0.617915296037352, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4792761237124386, 9);
  sqcRYGate(q, -3.113340781906501, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9669284032019734, 0);
  sqcRYGate(q, 3.068703598631537, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.279685402262843, 0);
  sqcRYGate(q, 1.0239976734501308, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.907974753995241, 2);
  sqcRYGate(q, 0.19392692649023768, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.994765276648017, 2);
  sqcRYGate(q, -1.85432797308433, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7817749615612364, 4);
  sqcRYGate(q, -3.040926535127501, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9820162898403564, 4);
  sqcRYGate(q, -2.641114248478238, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2628919574951, 6);
  sqcRYGate(q, -1.9364635702684527, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.343211892356907, 6);
  sqcRYGate(q, -1.9203967118066192, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7190048237993452, 8);
  sqcRYGate(q, -3.0756846963368667, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.125859934443662, 8);
  sqcRYGate(q, -2.941866718078174, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6773327784163785, 10);
  sqcRYGate(q, 2.0192542228247854, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.905622852443885, 10);
  sqcRYGate(q, -0.7251739136957215, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9546579777911646, 1);
  sqcRYGate(q, -1.82091529226655, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2519489218921471, 1);
  sqcRYGate(q, -0.9547065513534961, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.220064243574207, 3);
  sqcRYGate(q, 1.534132748577978, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.37841728834391, 3);
  sqcRYGate(q, 0.0010657203105948199, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6260326145950859, 5);
  sqcRYGate(q, 1.1693725466144524, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1405519667644195, 5);
  sqcRYGate(q, 3.0838913583714844, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2060047836709187, 7);
  sqcRYGate(q, -1.478830540988949, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.106785839133687, 7);
  sqcRYGate(q, -0.3208118708081258, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.4651894939010451, 9);
  sqcRYGate(q, 2.1174123195872245, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3497688586115384, 9);
  sqcRYGate(q, -3.0771428467293944, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.02692229437787411, 0);
  sqcRYGate(q, 0.4487273471683917, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6336966969969273, 0);
  sqcRYGate(q, -2.8482290508699397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3356812239484563, 2);
  sqcRYGate(q, 2.3752931396555477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.004339717297952461, 2);
  sqcRYGate(q, -1.6574429634750523, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5630906425358884, 4);
  sqcRYGate(q, -2.4119728587467626, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.007221953451358232, 4);
  sqcRYGate(q, -2.717804112746722, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.908949362713833, 6);
  sqcRYGate(q, 1.2849254670228785, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3418499114526314, 6);
  sqcRYGate(q, -0.6364559637374159, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.39892905273372226, 8);
  sqcRYGate(q, -2.293657416999419, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.132357818891403, 8);
  sqcRYGate(q, -0.17767350729089507, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7142486395289191, 10);
  sqcRYGate(q, 2.8436024233419817, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6432412707800097, 10);
  sqcRYGate(q, 1.117807451210239, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.66879871193426, 1);
  sqcRYGate(q, 2.218440377392914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.139997203101359, 1);
  sqcRYGate(q, -1.332530752585658, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.659765194088932, 3);
  sqcRYGate(q, 1.5809105073612923, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7869514468315035, 3);
  sqcRYGate(q, 0.11904735491579288, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2893258270055323, 5);
  sqcRYGate(q, 0.7770386954007087, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.120274304069047, 5);
  sqcRYGate(q, 0.11188264989065377, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8640847860228336, 7);
  sqcRYGate(q, -1.1624101604819215, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.00958840217044853, 7);
  sqcRYGate(q, 0.3737073411664422, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.700378644477075, 9);
  sqcRYGate(q, -0.8521284876179704, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.1967862514156593, 9);
  sqcRYGate(q, -0.0018512900901370697, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4896227058861093, 0);
  sqcRYGate(q, -0.6854437949889017, 1);
  sqcRYGate(q, 2.397436875124307, 2);
  sqcRYGate(q, 2.0825048918045055, 3);
  sqcRYGate(q, -2.807359962858809, 4);
  sqcRYGate(q, 1.6071996018711585, 5);
  sqcRYGate(q, 0.7621359239076383, 6);
  sqcRYGate(q, -2.3366873461441338, 7);
  sqcRYGate(q, -1.363908739226832, 8);
  sqcRYGate(q, 2.0021435465676785, 9);
  sqcRYGate(q, -1.7977211367835713, 10);
  sqcRYGate(q, 0.5749165680120676, 11);

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
