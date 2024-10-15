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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -0.9539427900834117, 0);
  sqcRYGate(q, 3.123978155807561, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.206775801575274, 0);
  sqcRYGate(q, -1.7041594735720107, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7531485015704433, 2);
  sqcRYGate(q, -1.6785910162941802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.374364121311662, 2);
  sqcRYGate(q, 1.9673662565858399, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.092686009977129, 0);
  sqcRYGate(q, 0.044646137883980856, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.649628729303024, 0);
  sqcRYGate(q, -0.1148128405530531, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.653763593523257, 1);
  sqcRYGate(q, 0.3984129149469053, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.26386632793926973, 1);
  sqcRYGate(q, -0.21021593888859577, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0135941286835743, 0);
  sqcRYGate(q, 2.6532741508770834, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6420339045672627, 0);
  sqcRYGate(q, 0.599763576628869, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.03502872763096225, 1);
  sqcRYGate(q, -0.03091425007232478, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8792036116710191, 1);
  sqcRYGate(q, -2.0210944721855864, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1135750429960067, 0);
  sqcRYGate(q, 2.3965846885395163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9512233069422336, 0);
  sqcRYGate(q, 2.3136046970846396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3701313677758193, 2);
  sqcRYGate(q, 0.2957469719607042, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3222621538406276, 2);
  sqcRYGate(q, -2.6635833416471484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.18192859226684965, 0);
  sqcRYGate(q, 2.0324581112255853, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2011731067674227, 0);
  sqcRYGate(q, 2.084023158871962, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0275547001097403, 1);
  sqcRYGate(q, -0.9827136700222118, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5124381867428118, 1);
  sqcRYGate(q, -0.6659728541295031, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2285759720654266, 0);
  sqcRYGate(q, 1.4717016275496997, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4799867452648416, 0);
  sqcRYGate(q, -2.60474639044064, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2971072094321423, 1);
  sqcRYGate(q, 2.7546816138221915, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.02612197615159051, 1);
  sqcRYGate(q, -0.9307502039777018, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9612545634774823, 0);
  sqcRYGate(q, -0.10975492521907348, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9941511432868877, 0);
  sqcRYGate(q, -0.7290410992898373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.63778541281724, 2);
  sqcRYGate(q, -1.611561225319113, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8782556597731332, 2);
  sqcRYGate(q, 2.652933669327078, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9311292534796523, 0);
  sqcRYGate(q, 2.4144828740324105, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8659359375197634, 0);
  sqcRYGate(q, -2.9301528492468316, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2377521303690258, 1);
  sqcRYGate(q, 1.628693615758629, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1064880206567747, 1);
  sqcRYGate(q, 1.2724312217412779, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.424094223019168, 0);
  sqcRYGate(q, 1.0681595062513418, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7178693481873376, 0);
  sqcRYGate(q, -2.0756054599312237, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8689283602536098, 1);
  sqcRYGate(q, 1.524712494513859, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7997303307087833, 1);
  sqcRYGate(q, -1.294171720163487, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0820086067188046, 0);
  sqcRYGate(q, -2.2914304374147583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7280348907547085, 0);
  sqcRYGate(q, -0.2491094929140898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6256913926403994, 2);
  sqcRYGate(q, -0.4235919898474058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.20475469515153363, 2);
  sqcRYGate(q, -0.5084626399828913, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.632184994622913, 0);
  sqcRYGate(q, 2.9858688815702776, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0926679292397283, 0);
  sqcRYGate(q, -2.560315332022902, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.24916410580566892, 1);
  sqcRYGate(q, 2.5235842929688705, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5333494452548234, 1);
  sqcRYGate(q, -3.0846204569211073, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5384238960864847, 0);
  sqcRYGate(q, 1.154435915635526, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1645502038055424, 0);
  sqcRYGate(q, -0.40640317033627427, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.841389398549887, 1);
  sqcRYGate(q, -0.0792022922509652, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.830630007665158, 1);
  sqcRYGate(q, -0.2712174100036118, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6611948500375728, 0);
  sqcRYGate(q, -2.718265189355638, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23801892418137438, 0);
  sqcRYGate(q, 1.0518552462179265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5445161626378154, 2);
  sqcRYGate(q, -0.5128142197144124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.047371706372957, 2);
  sqcRYGate(q, -0.9942181149926209, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.91352290303142, 0);
  sqcRYGate(q, -1.0870547366481915, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.026161205546370244, 0);
  sqcRYGate(q, 3.003211835231749, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.760762513406326, 1);
  sqcRYGate(q, -1.5611011001726531, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3450041955385457, 1);
  sqcRYGate(q, -1.753494361190027, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.16313437256983487, 0);
  sqcRYGate(q, -1.270770316494979, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.20896323234715738, 0);
  sqcRYGate(q, -1.56702001596952, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6742615991126173, 1);
  sqcRYGate(q, 0.07829181606703274, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9263062187039197, 1);
  sqcRYGate(q, -1.0244202827282427, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9415420704997197, 0);
  sqcRYGate(q, -2.368659311679031, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3226793355467166, 0);
  sqcRYGate(q, -1.527931123081749, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1036589689033196, 2);
  sqcRYGate(q, 1.003960463790529, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6251206879016133, 2);
  sqcRYGate(q, 0.6311157430836359, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4938335950594448, 0);
  sqcRYGate(q, 2.8708197506237245, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.37594456398759224, 0);
  sqcRYGate(q, -0.776795223054874, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8341003183320277, 1);
  sqcRYGate(q, 2.7068867692831247, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.669109426747684, 1);
  sqcRYGate(q, -2.6775771587556134, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.049816961645246, 0);
  sqcRYGate(q, -0.14658478422470014, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4384713929556066, 0);
  sqcRYGate(q, -0.07839311071785254, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8758475780656283, 1);
  sqcRYGate(q, -2.1805559789243434, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4303541601848007, 1);
  sqcRYGate(q, -2.77067696101398, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.370382644201795, 0);
  sqcRYGate(q, -0.47436546539440916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9244600449762004, 0);
  sqcRYGate(q, -1.459400956434692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.733976377603821, 2);
  sqcRYGate(q, 1.2217089136464363, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3053431322077245, 2);
  sqcRYGate(q, 1.6745840952812538, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4652032439278662, 0);
  sqcRYGate(q, -1.893423217342443, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.268016181482009, 0);
  sqcRYGate(q, -0.6639592791776252, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.16397086901861435, 1);
  sqcRYGate(q, 0.9697564489486603, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0617152748439365, 1);
  sqcRYGate(q, 0.5832399381413351, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7799532068335857, 0);
  sqcRYGate(q, -2.280399923456974, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.462885226327514, 0);
  sqcRYGate(q, -2.130454978457335, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.10576103991074161, 1);
  sqcRYGate(q, 2.793222607028696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.027312812458632, 1);
  sqcRYGate(q, 0.8888896680509433, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3590986571623995, 0);
  sqcRYGate(q, 2.0394287347409525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.145046388567351, 0);
  sqcRYGate(q, -2.7286283089620773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1710128313700325, 2);
  sqcRYGate(q, -2.7136532478997655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.999973063569457, 2);
  sqcRYGate(q, 2.4139906360819596, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1190939128989745, 0);
  sqcRYGate(q, -0.14875558970561897, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8006536474526285, 0);
  sqcRYGate(q, 1.0482547552886228, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5081894957449642, 1);
  sqcRYGate(q, 1.0612007440360687, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2534687964782747, 1);
  sqcRYGate(q, -2.6698286172019996, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8055532198898074, 0);
  sqcRYGate(q, -0.1988607784144881, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9458882796450454, 0);
  sqcRYGate(q, 0.5943891376554554, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.735828848462432, 1);
  sqcRYGate(q, -1.8881943051672136, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9749835330244911, 1);
  sqcRYGate(q, 2.5478353319989466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.377388056586291, 0);
  sqcRYGate(q, -2.7665281886389366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8621266487725814, 0);
  sqcRYGate(q, -0.6781847139195829, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3828733346963054, 2);
  sqcRYGate(q, 2.0763250872196206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9847529516513926, 2);
  sqcRYGate(q, -1.3117483193008876, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2266013984276516, 0);
  sqcRYGate(q, 2.922841566752345, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3361611727425688, 0);
  sqcRYGate(q, -2.5496583471386254, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0041568194827573, 1);
  sqcRYGate(q, -1.4460171387003793, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.216542996096301, 1);
  sqcRYGate(q, -2.727768226692953, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.32989640749569843, 0);
  sqcRYGate(q, 0.9583656318445648, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3121341576831842, 0);
  sqcRYGate(q, -1.3409162047602172, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4612988629797787, 1);
  sqcRYGate(q, 0.5937399563939971, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.148774201048, 1);
  sqcRYGate(q, -3.0852958175378045, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0914447715013456, 0);
  sqcRYGate(q, -0.9718023093774888, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1940296280654588, 0);
  sqcRYGate(q, 1.1324879585586207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.909977937893056, 2);
  sqcRYGate(q, -0.33388729371748305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1118802465087407, 2);
  sqcRYGate(q, 0.5503252911592363, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2221136544975852, 0);
  sqcRYGate(q, 0.3063257560083272, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.772422120661095, 0);
  sqcRYGate(q, 0.01739604463347536, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.589846392454115, 1);
  sqcRYGate(q, 1.858992249589871, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8112302164581094, 1);
  sqcRYGate(q, -0.09472584930687855, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5779494098227755, 0);
  sqcRYGate(q, 2.3519702049389863, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.120732610966627, 0);
  sqcRYGate(q, 0.6562956305847202, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9141148362830691, 1);
  sqcRYGate(q, -2.167407930421397, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5187625266643927, 1);
  sqcRYGate(q, 0.9480644601501561, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5804069570461832, 0);
  sqcRYGate(q, -2.64793937378288, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7991398575653267, 0);
  sqcRYGate(q, -1.9161432120943942, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7841571590065941, 2);
  sqcRYGate(q, 0.7818937380096763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.36559782467773244, 2);
  sqcRYGate(q, -1.9581448917469089, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.04096623874507, 0);
  sqcRYGate(q, -1.4570485535265085, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4781034436424925, 0);
  sqcRYGate(q, 0.4244631888455768, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.492980038842109, 1);
  sqcRYGate(q, -2.245278430494043, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6634253653636633, 1);
  sqcRYGate(q, 1.2083514029731908, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5242953539021493, 0);
  sqcRYGate(q, -1.009973930676599, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1741327924276856, 0);
  sqcRYGate(q, -0.3602657310678119, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.13040576027341, 1);
  sqcRYGate(q, -2.7190743941828304, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7321302167651913, 1);
  sqcRYGate(q, 1.3035820160999068, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3038245088655815, 0);
  sqcRYGate(q, 0.5002675010197001, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9505720474964416, 0);
  sqcRYGate(q, -2.0422467459265268, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.344942377867882, 2);
  sqcRYGate(q, -2.502829007135252, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6390083691903713, 2);
  sqcRYGate(q, 1.6146640682117184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6883018272726558, 0);
  sqcRYGate(q, -2.9687089686096266, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.33469035488974513, 0);
  sqcRYGate(q, -2.4522797651328876, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2831695227551139, 1);
  sqcRYGate(q, 2.446852552459999, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4996160713564084, 1);
  sqcRYGate(q, -0.8874952709069295, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7078408493060047, 0);
  sqcRYGate(q, -2.57045977120888, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.996106218758406, 0);
  sqcRYGate(q, 1.6943464907888437, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7944630971569895, 1);
  sqcRYGate(q, 2.7937303344114572, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.458239032257164, 1);
  sqcRYGate(q, -2.9636378425675143, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5372807547109771, 0);
  sqcRYGate(q, -2.938523606963763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7207405235257733, 0);
  sqcRYGate(q, -0.276501861943375, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9434254337066328, 2);
  sqcRYGate(q, -1.0939242098146225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6620675539049259, 2);
  sqcRYGate(q, -0.8936447585912201, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.24976566914890783, 0);
  sqcRYGate(q, -1.1116221217179876, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5457215540897307, 0);
  sqcRYGate(q, -1.6195819655541286, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7804887948140604, 1);
  sqcRYGate(q, -1.0498479988794676, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.12586684942303883, 1);
  sqcRYGate(q, 2.2393196911003015, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4098474781910912, 0);
  sqcRYGate(q, -0.8769034886715383, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9137215502242513, 0);
  sqcRYGate(q, -1.4696510132249512, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6353526818005113, 1);
  sqcRYGate(q, -1.3887305399513643, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.115539570316072, 1);
  sqcRYGate(q, -0.07089099598298709, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.77715689221436, 0);
  sqcRYGate(q, 1.3317032726453844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6507715447257854, 0);
  sqcRYGate(q, 2.714960322872932, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6732871577174926, 2);
  sqcRYGate(q, -3.1153544856371456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.822757886984529, 2);
  sqcRYGate(q, -1.131750988639448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.662866489209569, 0);
  sqcRYGate(q, -2.580902103569152, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6815898063638588, 0);
  sqcRYGate(q, 1.4439367001391223, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5335656287139202, 1);
  sqcRYGate(q, 1.2426414751342731, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3203117559795308, 1);
  sqcRYGate(q, 0.44411907047491184, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.134754926499833, 0);
  sqcRYGate(q, 1.5974007597680584, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2012004265009857, 0);
  sqcRYGate(q, 1.1824609882596215, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.02724029410612694, 1);
  sqcRYGate(q, -0.02670798768891816, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3318526647434943, 1);
  sqcRYGate(q, -1.1318736964012155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.959448371447436, 0);
  sqcRYGate(q, 1.3425511573695241, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.005456525228769, 0);
  sqcRYGate(q, 0.15501547496344192, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1787061712520348, 2);
  sqcRYGate(q, -0.44281523269055467, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6104248199394248, 2);
  sqcRYGate(q, -0.9768378105279956, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.063949151359364, 0);
  sqcRYGate(q, 2.981276093643822, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1083006351989626, 0);
  sqcRYGate(q, 1.1791271463968451, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1782432536668033, 1);
  sqcRYGate(q, -1.821032661382037, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1311507534895755, 1);
  sqcRYGate(q, 0.28561945411282497, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1131581146911462, 0);
  sqcRYGate(q, -1.0311951426858075, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.787479918235913, 0);
  sqcRYGate(q, -2.310552430544761, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4788396500163211, 1);
  sqcRYGate(q, 2.5812759663227416, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6656791197102534, 1);
  sqcRYGate(q, 2.5951138628523176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4526160922200638, 0);
  sqcRYGate(q, -0.7188020677611718, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.909572811997709, 0);
  sqcRYGate(q, -1.4320449919435878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9796707594077287, 2);
  sqcRYGate(q, -1.1101705648857305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0940836251093904, 2);
  sqcRYGate(q, 0.07247246569520183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.966990019679136, 0);
  sqcRYGate(q, 1.3747791380054117, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6366693423454215, 0);
  sqcRYGate(q, 2.2403464724175532, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0375278399464967, 1);
  sqcRYGate(q, 0.7695007553366695, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6711774927242509, 1);
  sqcRYGate(q, 1.4791805763348522, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7246279330194332, 0);
  sqcRYGate(q, 2.1101516144385295, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7560138946489983, 0);
  sqcRYGate(q, 1.1778782861458383, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9598523322258067, 1);
  sqcRYGate(q, -2.637667691175501, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.685306960570523, 1);
  sqcRYGate(q, 0.4914194943888026, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.692438116790911, 0);
  sqcRYGate(q, -0.22373798464020506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1830613534030334, 0);
  sqcRYGate(q, 1.6926925218198736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.030493345518456394, 2);
  sqcRYGate(q, 1.868465664344108, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4117657541058195, 2);
  sqcRYGate(q, 1.786816415658697, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.570502218130173, 0);
  sqcRYGate(q, 0.9148886248447168, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.960867332119044, 0);
  sqcRYGate(q, 1.157457596802785, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4150474937572146, 1);
  sqcRYGate(q, -1.543277445204025, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.19346587641438323, 1);
  sqcRYGate(q, 1.1762279040102293, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4727665466304242, 0);
  sqcRYGate(q, 2.6092648942881325, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.028515428236154886, 0);
  sqcRYGate(q, 0.22370039694510258, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.897127493122433, 1);
  sqcRYGate(q, -0.7367056945576799, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7875360611619238, 1);
  sqcRYGate(q, -1.0930893486094755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7235872136816122, 0);
  sqcRYGate(q, -2.392408081351404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9395749492603784, 0);
  sqcRYGate(q, 2.8472747828385194, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6461606966779976, 2);
  sqcRYGate(q, -0.15873989298290628, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0534007597881314, 2);
  sqcRYGate(q, 2.614242101520257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6512684073693245, 0);
  sqcRYGate(q, 1.990527508684468, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.14137624360843226, 0);
  sqcRYGate(q, 3.036364499085637, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2357608844055916, 1);
  sqcRYGate(q, -1.2549492428714455, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.616678940038768, 1);
  sqcRYGate(q, 1.0920907440927572, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.062097008241932, 0);
  sqcRYGate(q, -1.2907882197838294, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3626219631793006, 0);
  sqcRYGate(q, 2.7342005531156963, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3642910049562507, 1);
  sqcRYGate(q, -0.8874199812529994, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.518187931496912, 1);
  sqcRYGate(q, -2.415175672481481, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0518245508475417, 0);
  sqcRYGate(q, 2.1348740849665013, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0052617894916169305, 0);
  sqcRYGate(q, 2.2893472994959483, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3443296457028038, 2);
  sqcRYGate(q, -3.0153891264892487, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7898878907169483, 2);
  sqcRYGate(q, 0.486939405447111, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2685564248097774, 0);
  sqcRYGate(q, 2.3350970885444076, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2955959126960472, 0);
  sqcRYGate(q, 1.9579819492936854, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.691184960923503, 1);
  sqcRYGate(q, 2.442695747943754, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.057852409719101, 1);
  sqcRYGate(q, -1.1226491136123764, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0555397008445646, 0);
  sqcRYGate(q, 1.5204225632938588, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9800589587145758, 0);
  sqcRYGate(q, 1.8409680855577868, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7056322391013987, 1);
  sqcRYGate(q, 1.8027109628092042, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6884811012771994, 1);
  sqcRYGate(q, 2.3286258927243524, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8623527746772779, 0);
  sqcRYGate(q, -1.4585587273140772, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1094811098261013, 0);
  sqcRYGate(q, 2.273843455620297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.480280232439703, 2);
  sqcRYGate(q, -2.86924897328078, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09549539996916144, 2);
  sqcRYGate(q, -1.2860503592533896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.32703336021362706, 0);
  sqcRYGate(q, 1.6319480809690594, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.021379590191944475, 0);
  sqcRYGate(q, -2.9545286322887985, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4268371000043454, 1);
  sqcRYGate(q, -0.0011418037408992276, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1408868363741718, 1);
  sqcRYGate(q, 0.4681764018055194, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6131918436958848, 0);
  sqcRYGate(q, -2.410144043512698, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6835426975711023, 0);
  sqcRYGate(q, -1.8584761746263445, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.708677778654633, 1);
  sqcRYGate(q, 2.836709338340681, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8688962853614557, 1);
  sqcRYGate(q, 1.9471755023943393, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0250382390972543, 0);
  sqcRYGate(q, 1.0285947598170173, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4632963308346498, 0);
  sqcRYGate(q, -2.110492885602541, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09837274767041126, 2);
  sqcRYGate(q, 1.2150080629281241, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.25212600117573736, 2);
  sqcRYGate(q, 0.29975499079863877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9762082868632367, 0);
  sqcRYGate(q, -0.5715488924468294, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8854035956831758, 0);
  sqcRYGate(q, 2.3981420784851077, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9847625825389321, 1);
  sqcRYGate(q, 2.491454339511266, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0214486131468057, 1);
  sqcRYGate(q, 1.416444209863684, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.641737744496632, 0);
  sqcRYGate(q, 2.7839727229856517, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5170985645819406, 0);
  sqcRYGate(q, 1.5296790714132658, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9374200406163973, 1);
  sqcRYGate(q, 0.7728917227645693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.053383023449779, 1);
  sqcRYGate(q, -0.7414569860057879, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8654598620824672, 0);
  sqcRYGate(q, 0.35824353166593337, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.71426762372813, 0);
  sqcRYGate(q, 1.4081045392395533, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3357425538958347, 2);
  sqcRYGate(q, 0.9184626972026299, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0688150023863754, 2);
  sqcRYGate(q, 2.438603002198946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5407546529352456, 0);
  sqcRYGate(q, 1.7640479708787193, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3254253523611847, 0);
  sqcRYGate(q, -2.0994849863373286, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.034567706475386144, 1);
  sqcRYGate(q, 0.3980871638136563, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.884420084453799, 1);
  sqcRYGate(q, 2.5450962460003708, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.21836072858424418, 0);
  sqcRYGate(q, 0.013993875651856058, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0160302762598274, 0);
  sqcRYGate(q, -0.3447378418216491, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8282414560166194, 1);
  sqcRYGate(q, -0.08421563182097636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1003011510749072, 1);
  sqcRYGate(q, -0.5991026541261723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4367287865611029, 0);
  sqcRYGate(q, 1.0288478139297883, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7846884204849136, 0);
  sqcRYGate(q, -0.28170347528903417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5916138100918222, 2);
  sqcRYGate(q, 2.486051524803269, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.742198842801638, 2);
  sqcRYGate(q, 1.6173983134848395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5840230812678175, 0);
  sqcRYGate(q, -0.7890712724443238, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.03429837836539345, 0);
  sqcRYGate(q, 1.4437497100208723, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6519521667546404, 1);
  sqcRYGate(q, -2.690205803201705, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7948605569049074, 1);
  sqcRYGate(q, -2.4790748722788263, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.873349213566472, 0);
  sqcRYGate(q, 3.0027406833154826, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5105630557126956, 0);
  sqcRYGate(q, 0.5694945519532961, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.05748322180383614, 1);
  sqcRYGate(q, -0.5751556646203334, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5919763694465254, 1);
  sqcRYGate(q, 1.9880125132936486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0029743324856861, 0);
  sqcRYGate(q, -2.9387056525458335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8074975393109867, 0);
  sqcRYGate(q, 1.4541170247512551, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0431790776254934, 2);
  sqcRYGate(q, 1.6186343576560114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3936612910607042, 2);
  sqcRYGate(q, -0.23678404861275595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0739703258403837, 0);
  sqcRYGate(q, -3.0726148832964597, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5767940640716942, 0);
  sqcRYGate(q, 2.5699801841413374, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4324605054503823, 1);
  sqcRYGate(q, -0.07750947040296055, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2755073898008744, 1);
  sqcRYGate(q, 1.969654811098776, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.591479584565008, 0);
  sqcRYGate(q, -0.6857717698855037, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.772077255508948, 0);
  sqcRYGate(q, 1.8259828748594535, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2748671449621902, 1);
  sqcRYGate(q, 1.8964484601449059, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3146974293206473, 1);
  sqcRYGate(q, -1.2793586647926338, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6806580575051475, 0);
  sqcRYGate(q, -2.077490511164669, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0283853248591805, 0);
  sqcRYGate(q, -0.2899315496473673, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.787291780335442, 2);
  sqcRYGate(q, 1.5305738029297062, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1618017905665914, 2);
  sqcRYGate(q, 2.645471355093454, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9201846921494719, 0);
  sqcRYGate(q, -2.972925484401123, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.29566653937116133, 0);
  sqcRYGate(q, 1.9667322378135474, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2498150080152337, 1);
  sqcRYGate(q, -2.566248980512595, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7565385171678525, 1);
  sqcRYGate(q, -2.393525418703548, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.41528209552220763, 0);
  sqcRYGate(q, 0.8816941106406633, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1225833005877233, 0);
  sqcRYGate(q, 2.5471586502692958, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8446053433227134, 1);
  sqcRYGate(q, -1.0391753351033808, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7556102535036655, 1);
  sqcRYGate(q, -1.8087563793927979, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.819915520877947, 0);
  sqcRYGate(q, 1.111305810328337, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.61021945187304, 0);
  sqcRYGate(q, 3.0331115335883676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04469994501957364, 2);
  sqcRYGate(q, -0.25463510240949283, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8282578261531395, 2);
  sqcRYGate(q, -2.6506008722454113, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.662560324992932, 0);
  sqcRYGate(q, 0.07274864231223344, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0718192056650953, 0);
  sqcRYGate(q, 2.8208063477985945, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.331024628023975, 1);
  sqcRYGate(q, 2.5501279504952907, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2236153158774306, 1);
  sqcRYGate(q, -3.0837559223970548, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6602874600695712, 0);
  sqcRYGate(q, 2.937924517061802, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.1438134518820562, 0);
  sqcRYGate(q, 1.7149068275337795, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5922517120092177, 1);
  sqcRYGate(q, -2.303992318923066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6990187300143926, 1);
  sqcRYGate(q, 0.960888882501541, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.254278737038848, 0);
  sqcRYGate(q, 1.298725179878653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.521907186850606, 0);
  sqcRYGate(q, -1.9734791513402643, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6741698160689582, 2);
  sqcRYGate(q, 2.9549776354206756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7662117557856623, 2);
  sqcRYGate(q, -0.318806959297001, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.29047568822390696, 0);
  sqcRYGate(q, -3.000537533918458, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.618101247905221, 0);
  sqcRYGate(q, -1.7871952263578126, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.509603493978832, 1);
  sqcRYGate(q, 1.8582449577738074, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.833932628745904, 1);
  sqcRYGate(q, 1.3192999482913095, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.427970977136821, 0);
  sqcRYGate(q, -2.6406290717651433, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1043191329571416, 0);
  sqcRYGate(q, 1.2648936121209784, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9220922229259889, 1);
  sqcRYGate(q, 0.10522033984462986, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7435899215385167, 1);
  sqcRYGate(q, -2.3773342505780004, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9945015915603816, 0);
  sqcRYGate(q, -0.10072786510832912, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6905495919987725, 0);
  sqcRYGate(q, -1.0089399618295452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.781977045679045, 2);
  sqcRYGate(q, -1.7154460226306512, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0718226935390813, 2);
  sqcRYGate(q, -0.2190659918040847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9408083051593323, 0);
  sqcRYGate(q, -2.7011607023216886, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1294401854728136, 0);
  sqcRYGate(q, -0.26336238514689114, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.864509374733588, 1);
  sqcRYGate(q, -0.4940979914690079, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7504645499508191, 1);
  sqcRYGate(q, 2.3221949240970448, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5663575156751461, 0);
  sqcRYGate(q, 3.078922171806187, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1639937187235887, 0);
  sqcRYGate(q, 2.069368206143421, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6051378697915577, 1);
  sqcRYGate(q, -1.65002133434335, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1232059781857853, 1);
  sqcRYGate(q, 2.8643750143785, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8519570846179391, 0);
  sqcRYGate(q, 1.2157901652099623, 1);
  sqcRYGate(q, 2.5502045344976882, 2);
  sqcRYGate(q, -0.28903372930044835, 3);

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
