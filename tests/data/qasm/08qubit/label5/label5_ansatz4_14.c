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

  sqcRYGate(q, 2.425416500563722, 0);
  sqcRZGate(q, -0.7238372207569487, 0);
  sqcRYGate(q, -2.1685823648298777, 1);
  sqcRZGate(q, 0.8616544821387647, 1);
  sqcRYGate(q, -2.8207670547015975, 2);
  sqcRZGate(q, 0.805450994688929, 2);
  sqcRYGate(q, -2.1892354322850025, 3);
  sqcRZGate(q, -2.251694332427176, 3);
  sqcRYGate(q, 0.08480563937814446, 4);
  sqcRZGate(q, -0.3152309093332706, 4);
  sqcRYGate(q, 2.601572337649856, 5);
  sqcRZGate(q, -2.8456718087053354, 5);
  sqcRYGate(q, -1.551651998198425, 6);
  sqcRZGate(q, -2.669542637216536, 6);
  sqcRYGate(q, -1.8515377712158676, 7);
  sqcRZGate(q, 0.9822799807011363, 7);
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
  sqcRYGate(q, -0.9525389537442805, 0);
  sqcRZGate(q, -2.1600119042022348, 0);
  sqcRYGate(q, 2.120773524452162, 1);
  sqcRZGate(q, -2.394011709319368, 1);
  sqcRYGate(q, 2.4212343257946785, 2);
  sqcRZGate(q, 2.183077187632323, 2);
  sqcRYGate(q, 1.3390008495717052, 3);
  sqcRZGate(q, 1.9786764929591634, 3);
  sqcRYGate(q, 1.5664754416449593, 4);
  sqcRZGate(q, -0.304856404949998, 4);
  sqcRYGate(q, 1.1873384555369508, 5);
  sqcRZGate(q, -0.21483384611878442, 5);
  sqcRYGate(q, -1.912368644239895, 6);
  sqcRZGate(q, 2.7887671777650844, 6);
  sqcRYGate(q, 1.164355865939906, 7);
  sqcRZGate(q, 0.22676021584772865, 7);
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
  sqcRYGate(q, -0.6704598178628164, 0);
  sqcRZGate(q, -1.4512518165465171, 0);
  sqcRYGate(q, -0.6922273704000946, 1);
  sqcRZGate(q, -2.8581373169329525, 1);
  sqcRYGate(q, 2.6784483855662353, 2);
  sqcRZGate(q, -0.2050095474367566, 2);
  sqcRYGate(q, 0.6067916280615311, 3);
  sqcRZGate(q, -1.98339249478058, 3);
  sqcRYGate(q, -0.4160257267853684, 4);
  sqcRZGate(q, -1.9234586843707975, 4);
  sqcRYGate(q, -0.7568368650244591, 5);
  sqcRZGate(q, 1.5286340766823416, 5);
  sqcRYGate(q, 1.0981269510072225, 6);
  sqcRZGate(q, -0.0796394807649415, 6);
  sqcRYGate(q, 2.8706531340345824, 7);
  sqcRZGate(q, 2.4348530395867085, 7);
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
  sqcRYGate(q, 0.8301733608367963, 0);
  sqcRZGate(q, 3.0633278297277444, 0);
  sqcRYGate(q, -2.2311035140659428, 1);
  sqcRZGate(q, -1.154816416303679, 1);
  sqcRYGate(q, -1.7244958131510684, 2);
  sqcRZGate(q, -0.7078384746590362, 2);
  sqcRYGate(q, 1.465165877495245, 3);
  sqcRZGate(q, -0.1757567824211277, 3);
  sqcRYGate(q, -1.674926206641244, 4);
  sqcRZGate(q, 1.542498547167191, 4);
  sqcRYGate(q, -2.241402930576542, 5);
  sqcRZGate(q, -1.3210529439727896, 5);
  sqcRYGate(q, -1.8797692216091493, 6);
  sqcRZGate(q, 3.071657525711108, 6);
  sqcRYGate(q, -1.3369122471642347, 7);
  sqcRZGate(q, 0.2034750310708953, 7);
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
  sqcRYGate(q, 1.9956626202071155, 0);
  sqcRZGate(q, 2.381735877146386, 0);
  sqcRYGate(q, -2.2198584474234444, 1);
  sqcRZGate(q, 0.9735827659739306, 1);
  sqcRYGate(q, 1.1868002222956822, 2);
  sqcRZGate(q, -1.8305899237202192, 2);
  sqcRYGate(q, 1.2824550733624052, 3);
  sqcRZGate(q, -2.0188122235721275, 3);
  sqcRYGate(q, -1.8634372779859554, 4);
  sqcRZGate(q, -0.9723844259405184, 4);
  sqcRYGate(q, -1.8497633987102784, 5);
  sqcRZGate(q, 3.0264661292397523, 5);
  sqcRYGate(q, 1.6462458081292795, 6);
  sqcRZGate(q, 2.5759130708781255, 6);
  sqcRYGate(q, -1.5197346985698532, 7);
  sqcRZGate(q, -0.17721479862488462, 7);
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
  sqcRYGate(q, 1.8189843816689277, 0);
  sqcRZGate(q, -0.15194268039429296, 0);
  sqcRYGate(q, 2.0727938408888065, 1);
  sqcRZGate(q, 1.2695292749247997, 1);
  sqcRYGate(q, -2.8456621021446464, 2);
  sqcRZGate(q, 2.2881965694626465, 2);
  sqcRYGate(q, 1.9936787494836121, 3);
  sqcRZGate(q, -0.9705498307054689, 3);
  sqcRYGate(q, 3.0650007575877747, 4);
  sqcRZGate(q, -1.8832320549951806, 4);
  sqcRYGate(q, -2.905380504948689, 5);
  sqcRZGate(q, 0.5122039007539847, 5);
  sqcRYGate(q, -1.6662601682621299, 6);
  sqcRZGate(q, -2.9143124074307796, 6);
  sqcRYGate(q, 0.41880056059478976, 7);
  sqcRZGate(q, 0.4760591400204169, 7);
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
  sqcRYGate(q, 1.378597663590047, 0);
  sqcRZGate(q, 2.511765496084453, 0);
  sqcRYGate(q, -2.1301485047974174, 1);
  sqcRZGate(q, 0.23013361229518203, 1);
  sqcRYGate(q, 1.5000503795322535, 2);
  sqcRZGate(q, 1.9934660442573557, 2);
  sqcRYGate(q, -2.380646732169468, 3);
  sqcRZGate(q, -0.7514755817304878, 3);
  sqcRYGate(q, -0.8843079578234662, 4);
  sqcRZGate(q, 1.923274179129459, 4);
  sqcRYGate(q, 0.591297635415942, 5);
  sqcRZGate(q, 0.8549855255085917, 5);
  sqcRYGate(q, -1.8206123542120374, 6);
  sqcRZGate(q, 3.024719214655024, 6);
  sqcRYGate(q, 1.6431601320685438, 7);
  sqcRZGate(q, 0.7661959000581123, 7);
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
  sqcRYGate(q, -1.6470637017130298, 0);
  sqcRZGate(q, 0.2477804547380504, 0);
  sqcRYGate(q, -0.46747024257813585, 1);
  sqcRZGate(q, -1.8779285358018754, 1);
  sqcRYGate(q, 2.2595533812433484, 2);
  sqcRZGate(q, -1.5231784001558868, 2);
  sqcRYGate(q, 3.013610869198563, 3);
  sqcRZGate(q, -2.0616605758790323, 3);
  sqcRYGate(q, -0.6433609812894553, 4);
  sqcRZGate(q, 1.6882718999202193, 4);
  sqcRYGate(q, -2.8189826851282516, 5);
  sqcRZGate(q, 0.17889383477359022, 5);
  sqcRYGate(q, -0.34647464191584876, 6);
  sqcRZGate(q, 2.4442520165961725, 6);
  sqcRYGate(q, -0.2326992316748827, 7);
  sqcRZGate(q, 1.4694193165590024, 7);
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
  sqcRYGate(q, 0.7479941934531897, 0);
  sqcRZGate(q, -2.361953640157242, 0);
  sqcRYGate(q, -0.9564378744621539, 1);
  sqcRZGate(q, -0.023134570556102577, 1);
  sqcRYGate(q, 0.5832524854243228, 2);
  sqcRZGate(q, -2.031161460266028, 2);
  sqcRYGate(q, -2.5291403785444557, 3);
  sqcRZGate(q, -0.46280815941067976, 3);
  sqcRYGate(q, -1.2660391832045432, 4);
  sqcRZGate(q, 1.7636328716089276, 4);
  sqcRYGate(q, 2.3334822609389265, 5);
  sqcRZGate(q, 0.912149513715076, 5);
  sqcRYGate(q, -1.553037804401054, 6);
  sqcRZGate(q, -2.2045264132059623, 6);
  sqcRYGate(q, 1.4705708373673332, 7);
  sqcRZGate(q, 0.6993680272575095, 7);
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
  sqcRYGate(q, -1.7265837680614977, 0);
  sqcRZGate(q, 0.020928589958585677, 0);
  sqcRYGate(q, 1.914861349377149, 1);
  sqcRZGate(q, 1.9877393703967166, 1);
  sqcRYGate(q, 1.6577347591445701, 2);
  sqcRZGate(q, -0.9470572308981058, 2);
  sqcRYGate(q, 2.192637184371306, 3);
  sqcRZGate(q, -0.744613353837311, 3);
  sqcRYGate(q, -1.6458399726200934, 4);
  sqcRZGate(q, -1.3336844842316742, 4);
  sqcRYGate(q, 1.3812775241925097, 5);
  sqcRZGate(q, -2.925868971331419, 5);
  sqcRYGate(q, 0.6457831799282152, 6);
  sqcRZGate(q, -2.4855872698630153, 6);
  sqcRYGate(q, 1.3162074207450958, 7);
  sqcRZGate(q, 0.7202874788988799, 7);
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
  sqcRYGate(q, -1.9039100320732776, 0);
  sqcRZGate(q, 1.3363421527864228, 0);
  sqcRYGate(q, -1.4823090182544307, 1);
  sqcRZGate(q, 1.7094441174684292, 1);
  sqcRYGate(q, 2.0408602679765657, 2);
  sqcRZGate(q, 1.7997146202155516, 2);
  sqcRYGate(q, 2.5738979646398326, 3);
  sqcRZGate(q, -0.1988921122300775, 3);
  sqcRYGate(q, 3.075988237346709, 4);
  sqcRZGate(q, 1.0894317009295922, 4);
  sqcRYGate(q, 3.084499548910972, 5);
  sqcRZGate(q, 0.45217514179025675, 5);
  sqcRYGate(q, -1.9369805425409208, 6);
  sqcRZGate(q, 2.284348932414794, 6);
  sqcRYGate(q, 0.252469581107667, 7);
  sqcRZGate(q, -2.3815732479971428, 7);
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
  sqcRYGate(q, 2.5429438103063458, 0);
  sqcRZGate(q, -2.142495997641407, 0);
  sqcRYGate(q, -2.0285031184941165, 1);
  sqcRZGate(q, 2.755036019694831, 1);
  sqcRYGate(q, 2.907899124037248, 2);
  sqcRZGate(q, 0.016465058995657637, 2);
  sqcRYGate(q, 0.6843119060769256, 3);
  sqcRZGate(q, -2.929767220910378, 3);
  sqcRYGate(q, -0.8293516038735699, 4);
  sqcRZGate(q, -1.5781291682118557, 4);
  sqcRYGate(q, -0.924971603812282, 5);
  sqcRZGate(q, 2.4057052603114, 5);
  sqcRYGate(q, -0.9444626805819295, 6);
  sqcRZGate(q, -0.6675031254169754, 6);
  sqcRYGate(q, -1.6281351246786304, 7);
  sqcRZGate(q, 0.7391561853895595, 7);
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
  sqcRYGate(q, -1.1914400842975326, 0);
  sqcRZGate(q, 0.8039472849459129, 0);
  sqcRYGate(q, 0.8445334332810968, 1);
  sqcRZGate(q, 2.1081384003203336, 1);
  sqcRYGate(q, -2.9419671644563734, 2);
  sqcRZGate(q, 2.9871202735960405, 2);
  sqcRYGate(q, 2.5196306777310724, 3);
  sqcRZGate(q, 1.7417000066969983, 3);
  sqcRYGate(q, 2.979081949159901, 4);
  sqcRZGate(q, 0.9727186415148097, 4);
  sqcRYGate(q, 3.1149877654805977, 5);
  sqcRZGate(q, -0.7877555128839147, 5);
  sqcRYGate(q, -0.3354922403514431, 6);
  sqcRZGate(q, -0.6092371125112802, 6);
  sqcRYGate(q, -1.984895214069994, 7);
  sqcRZGate(q, 0.6527846292039357, 7);
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
  sqcRYGate(q, 1.5058609942458057, 0);
  sqcRZGate(q, -0.31370379293674966, 0);
  sqcRYGate(q, -2.5527352392815374, 1);
  sqcRZGate(q, -0.5766718954022721, 1);
  sqcRYGate(q, 0.49864049313509984, 2);
  sqcRZGate(q, 0.03225551579470665, 2);
  sqcRYGate(q, -1.0225907700280699, 3);
  sqcRZGate(q, 2.8636628022629895, 3);
  sqcRYGate(q, -1.9892994217563433, 4);
  sqcRZGate(q, 2.597441207743081, 4);
  sqcRYGate(q, 0.8007868754083595, 5);
  sqcRZGate(q, 1.903453118381709, 5);
  sqcRYGate(q, -2.04255452849558, 6);
  sqcRZGate(q, -2.4681148544285705, 6);
  sqcRYGate(q, 2.1813797923028595, 7);
  sqcRZGate(q, 2.4155368343753914, 7);
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
  sqcRYGate(q, 1.047075047721452, 0);
  sqcRZGate(q, -2.909045508990963, 0);
  sqcRYGate(q, -1.5141609650501715, 1);
  sqcRZGate(q, 2.9280940496767305, 1);
  sqcRYGate(q, -1.0928486858869302, 2);
  sqcRZGate(q, 2.490657275142517, 2);
  sqcRYGate(q, -2.693805223866853, 3);
  sqcRZGate(q, -1.5533655812814766, 3);
  sqcRYGate(q, -0.402931620434938, 4);
  sqcRZGate(q, -2.2001509970765043, 4);
  sqcRYGate(q, -0.5410565150111476, 5);
  sqcRZGate(q, -2.197698386493556, 5);
  sqcRYGate(q, 2.24302477796003, 6);
  sqcRZGate(q, -1.9496002380815272, 6);
  sqcRYGate(q, -0.7932881383971123, 7);
  sqcRZGate(q, -1.0874718646335122, 7);
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
  sqcRYGate(q, 1.0429874608944352, 0);
  sqcRZGate(q, 2.6498587992834572, 0);
  sqcRYGate(q, -1.9647934410839085, 1);
  sqcRZGate(q, -1.069359990225835, 1);
  sqcRYGate(q, 2.2243398412375277, 2);
  sqcRZGate(q, -2.0508538028003764, 2);
  sqcRYGate(q, 1.6566553983105177, 3);
  sqcRZGate(q, -2.5194885788401833, 3);
  sqcRYGate(q, 2.6339828300703685, 4);
  sqcRZGate(q, -1.1300965008674195, 4);
  sqcRYGate(q, 2.0594393458820752, 5);
  sqcRZGate(q, -1.9380576716346676, 5);
  sqcRYGate(q, 2.3654625239979525, 6);
  sqcRZGate(q, 0.41222562210626984, 6);
  sqcRYGate(q, -1.859109475597529, 7);
  sqcRZGate(q, -2.4200149482685003, 7);
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
  sqcRYGate(q, 1.853096607944333, 0);
  sqcRZGate(q, 0.8876936060310223, 0);
  sqcRYGate(q, 2.11047781883485, 1);
  sqcRZGate(q, -2.9541990714093425, 1);
  sqcRYGate(q, -2.4054865273763064, 2);
  sqcRZGate(q, -3.0225808175519555, 2);
  sqcRYGate(q, -1.5085001956464081, 3);
  sqcRZGate(q, 1.3024470679268048, 3);
  sqcRYGate(q, -1.6010069371543294, 4);
  sqcRZGate(q, -0.26584479078063694, 4);
  sqcRYGate(q, 1.5883594910450762, 5);
  sqcRZGate(q, -1.5495216376360652, 5);
  sqcRYGate(q, 1.8772899070113018, 6);
  sqcRZGate(q, -0.6275583324556016, 6);
  sqcRYGate(q, -2.843970155660581, 7);
  sqcRZGate(q, 2.5085259447931474, 7);
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
  sqcRYGate(q, -1.432946386717707, 0);
  sqcRZGate(q, -0.15237756978917452, 0);
  sqcRYGate(q, -1.4428724101956572, 1);
  sqcRZGate(q, -0.9177973956475346, 1);
  sqcRYGate(q, -0.18746288543597767, 2);
  sqcRZGate(q, -2.8504861782010322, 2);
  sqcRYGate(q, 1.191323492208662, 3);
  sqcRZGate(q, -1.8309973136430313, 3);
  sqcRYGate(q, -3.100073396703753, 4);
  sqcRZGate(q, 0.017728962764603114, 4);
  sqcRYGate(q, -1.5892647132517785, 5);
  sqcRZGate(q, -0.5356035955278126, 5);
  sqcRYGate(q, 1.3224218624418755, 6);
  sqcRZGate(q, -1.2796703555181566, 6);
  sqcRYGate(q, 1.1837194235258857, 7);
  sqcRZGate(q, 0.9507490514122043, 7);

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
