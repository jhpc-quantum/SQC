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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.01150192054083896, 0);
  sqcRZGate(q, 1.7525203672650527, 0);
  sqcRYGate(q, 1.562185915790208, 1);
  sqcRZGate(q, 2.6541963998394005, 1);
  sqcRYGate(q, 2.1737008821950905, 2);
  sqcRZGate(q, 0.5338154174683111, 2);
  sqcRYGate(q, -1.595563091359859, 3);
  sqcRZGate(q, -1.0958032724465578, 3);
  sqcRYGate(q, -1.5936193781057497, 4);
  sqcRZGate(q, -2.6339757439824685, 4);
  sqcRYGate(q, -1.5693074877129918, 5);
  sqcRZGate(q, 1.5759422052656777, 5);
  sqcRYGate(q, 1.8846138329864195, 6);
  sqcRZGate(q, -3.1342871504094423, 6);
  sqcRYGate(q, 0.002834702243851903, 7);
  sqcRZGate(q, -2.274703457525616, 7);
  sqcRYGate(q, -1.571605686590038, 8);
  sqcRZGate(q, 3.1340642087829322, 8);
  sqcRYGate(q, 3.1185444527755504, 9);
  sqcRZGate(q, -2.4015078290766962, 9);
  sqcRYGate(q, -1.7151498739273894, 10);
  sqcRZGate(q, -3.1383803388138993, 10);
  sqcRYGate(q, 3.1345618988368185, 11);
  sqcRZGate(q, -2.98410774021786, 11);
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
  sqcRYGate(q, -1.3435722857084658, 0);
  sqcRZGate(q, -1.3685530184183952, 0);
  sqcRYGate(q, 0.06085269508257198, 1);
  sqcRZGate(q, -2.6218608913370813, 1);
  sqcRYGate(q, 2.5623648626565987, 2);
  sqcRZGate(q, 0.5169908061170644, 2);
  sqcRYGate(q, -2.9691908201782833, 3);
  sqcRZGate(q, 2.74030532426585, 3);
  sqcRYGate(q, 3.1403334462658496, 4);
  sqcRZGate(q, 2.6172877534563965, 4);
  sqcRYGate(q, 1.130693554860006, 5);
  sqcRZGate(q, -1.5761622269252324, 5);
  sqcRYGate(q, -0.955217954513615, 6);
  sqcRZGate(q, 3.131331093873805, 6);
  sqcRYGate(q, 1.5691212385231528, 7);
  sqcRZGate(q, -1.564161449873235, 7);
  sqcRYGate(q, -1.5622860228358277, 8);
  sqcRZGate(q, 3.1181881878639968, 8);
  sqcRYGate(q, -3.1373164419015582, 9);
  sqcRZGate(q, -2.3114111611142922, 9);
  sqcRYGate(q, -1.5762233259976266, 10);
  sqcRZGate(q, -2.8484843978566134, 10);
  sqcRYGate(q, -1.5632055269247627, 11);
  sqcRZGate(q, 2.679455736165696, 11);
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
  sqcRYGate(q, 0.013429288364511936, 0);
  sqcRZGate(q, 0.40647987773585276, 0);
  sqcRYGate(q, 1.5419768867838077, 1);
  sqcRZGate(q, 0.545947425468608, 1);
  sqcRYGate(q, -1.1895510873766764, 2);
  sqcRZGate(q, 1.3492065345575748, 2);
  sqcRYGate(q, 2.1355469902659516, 3);
  sqcRZGate(q, 2.0263422798532478, 3);
  sqcRYGate(q, 0.005569999360153752, 4);
  sqcRZGate(q, 1.8967293728470882, 4);
  sqcRYGate(q, 1.5906961662919077, 5);
  sqcRZGate(q, -3.011613244803977, 5);
  sqcRYGate(q, 1.5693950157385617, 6);
  sqcRZGate(q, 2.880462717708473, 6);
  sqcRYGate(q, -3.1408064385751553, 7);
  sqcRZGate(q, -2.3763732095152093, 7);
  sqcRYGate(q, 0.29285377264343904, 8);
  sqcRZGate(q, 1.596214241940378, 8);
  sqcRYGate(q, -1.5705128302517801, 9);
  sqcRZGate(q, -3.0766240717016298, 9);
  sqcRYGate(q, 0.0032682380787258936, 10);
  sqcRZGate(q, -0.565585262222351, 10);
  sqcRYGate(q, -2.6760049262912076, 11);
  sqcRZGate(q, 2.6359114861326773, 11);
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
  sqcRYGate(q, -3.0854875265758164, 0);
  sqcRZGate(q, 0.9420296287270371, 0);
  sqcRYGate(q, 1.5630961910636205, 1);
  sqcRZGate(q, -0.25062217734134185, 1);
  sqcRYGate(q, -1.2384473710614448, 2);
  sqcRZGate(q, -0.4431445278353991, 2);
  sqcRYGate(q, 2.038112077587817, 3);
  sqcRZGate(q, 3.044423294621994, 3);
  sqcRYGate(q, -3.138999211115474, 4);
  sqcRZGate(q, 0.6947562632951518, 4);
  sqcRYGate(q, 1.3137419587839538, 5);
  sqcRZGate(q, -1.958085197061499, 5);
  sqcRYGate(q, -1.2789915447799283, 6);
  sqcRZGate(q, -0.6259215176876323, 6);
  sqcRYGate(q, 3.140539162530857, 7);
  sqcRZGate(q, 0.7196982555685043, 7);
  sqcRYGate(q, -1.574508061367009, 8);
  sqcRZGate(q, 1.5890377185990934, 8);
  sqcRYGate(q, 1.5934474995168666, 9);
  sqcRZGate(q, 2.7853328877337162, 9);
  sqcRYGate(q, -3.1232727297872342, 10);
  sqcRZGate(q, 3.087921350108788, 10);
  sqcRYGate(q, 1.5428397086459809, 11);
  sqcRZGate(q, 0.0005881723399552286, 11);
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
  sqcRYGate(q, -0.8705228889943655, 0);
  sqcRZGate(q, -0.6251496213456146, 0);
  sqcRYGate(q, 0.0008491467402187425, 1);
  sqcRZGate(q, 0.2592111127368826, 1);
  sqcRYGate(q, -3.1342010267446985, 2);
  sqcRZGate(q, -1.3118149769470167, 2);
  sqcRYGate(q, -2.9905734568515188, 3);
  sqcRZGate(q, -0.09292561128230314, 3);
  sqcRYGate(q, 3.1282070626829985, 4);
  sqcRZGate(q, 2.414989361228004, 4);
  sqcRYGate(q, -0.017623118979966223, 5);
  sqcRZGate(q, 1.9534067869169078, 5);
  sqcRYGate(q, -1.570153800408999, 6);
  sqcRZGate(q, 1.7819911779008777, 6);
  sqcRYGate(q, 3.1362476503655476, 7);
  sqcRZGate(q, 2.179554421537768, 7);
  sqcRYGate(q, 0.021652505006606378, 8);
  sqcRZGate(q, 0.2825643725531366, 8);
  sqcRYGate(q, -3.126684052177283, 9);
  sqcRZGate(q, 2.6806109459856384, 9);
  sqcRYGate(q, -1.5640409504398145, 10);
  sqcRZGate(q, 1.5806382814717421, 10);
  sqcRYGate(q, 1.6475524480916126, 11);
  sqcRZGate(q, -0.0023994734574772636, 11);
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
  sqcRYGate(q, -1.5238922100270758, 0);
  sqcRZGate(q, -1.4985153995855391, 0);
  sqcRYGate(q, 1.5592392033499145, 1);
  sqcRZGate(q, 1.010602304557327, 1);
  sqcRYGate(q, -1.9554376361947376, 2);
  sqcRZGate(q, 0.3278498665313405, 2);
  sqcRYGate(q, 1.1047152248202297, 3);
  sqcRZGate(q, -2.615344905248554, 3);
  sqcRYGate(q, -1.5777641804932099, 4);
  sqcRZGate(q, -1.4997902175910385, 4);
  sqcRYGate(q, 1.3056261214149802, 5);
  sqcRZGate(q, -2.3517353935696335, 5);
  sqcRYGate(q, 3.1277135603383295, 6);
  sqcRZGate(q, -2.66675902418372, 6);
  sqcRYGate(q, -3.141011443360342, 7);
  sqcRZGate(q, 1.9946601508490622, 7);
  sqcRYGate(q, 3.136275931590292, 8);
  sqcRZGate(q, -1.4372491353638794, 8);
  sqcRYGate(q, -1.1349743116716884, 9);
  sqcRZGate(q, 1.9035284920681304, 9);
  sqcRYGate(q, 1.5398436265211546, 10);
  sqcRZGate(q, -1.5667126666391447, 10);
  sqcRYGate(q, -1.5718779462136951, 11);
  sqcRZGate(q, -1.6177100863607858, 11);
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
  sqcRYGate(q, -2.4336634011330083, 0);
  sqcRZGate(q, -3.036696953997278, 0);
  sqcRYGate(q, -2.8965709887941387, 1);
  sqcRZGate(q, 1.3967153781255723, 1);
  sqcRYGate(q, 1.564958974682436, 2);
  sqcRZGate(q, -1.5481078484107584, 2);
  sqcRYGate(q, -0.9681236287196509, 3);
  sqcRZGate(q, 0.07530555603435207, 3);
  sqcRYGate(q, 1.5146708447137758, 4);
  sqcRZGate(q, -0.7336055874556049, 4);
  sqcRYGate(q, 3.1338258183309504, 5);
  sqcRZGate(q, -2.2686273755355653, 5);
  sqcRYGate(q, -2.9084498019155407, 6);
  sqcRZGate(q, 0.09354628392222165, 6);
  sqcRYGate(q, 1.3010261457180876, 7);
  sqcRZGate(q, -2.178140444565849, 7);
  sqcRYGate(q, -0.33770871302810507, 8);
  sqcRZGate(q, 0.016354306124815032, 8);
  sqcRYGate(q, 1.1943635555382501, 9);
  sqcRZGate(q, -0.24046266039992537, 9);
  sqcRYGate(q, -2.270276063565631, 10);
  sqcRZGate(q, -1.1601111573115412, 10);
  sqcRYGate(q, -0.6807344324532082, 11);
  sqcRZGate(q, 2.526833029807235, 11);
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
  sqcRYGate(q, -1.5641958737989716, 0);
  sqcRZGate(q, -0.0061343718503863364, 0);
  sqcRYGate(q, -1.5972615181402519, 1);
  sqcRZGate(q, -0.7193545147101424, 1);
  sqcRYGate(q, 3.140246511865907, 2);
  sqcRZGate(q, -3.1174841886009452, 2);
  sqcRYGate(q, 0.00577410138719987, 3);
  sqcRZGate(q, 3.0650700533877524, 3);
  sqcRYGate(q, 3.136363300144731, 4);
  sqcRZGate(q, 1.72446561132133, 4);
  sqcRYGate(q, 3.1403615903020867, 5);
  sqcRZGate(q, -2.803942686779993, 5);
  sqcRYGate(q, 3.1379245278482344, 6);
  sqcRZGate(q, -3.0446242146958578, 6);
  sqcRYGate(q, 0.0022294003322401792, 7);
  sqcRZGate(q, -1.0210431770940938, 7);
  sqcRYGate(q, 3.128888789281284, 8);
  sqcRZGate(q, -0.26506089674858474, 8);
  sqcRYGate(q, 2.9318299433761443, 9);
  sqcRZGate(q, 1.1114175848712406, 9);
  sqcRYGate(q, 0.10358958900519966, 10);
  sqcRZGate(q, -1.9374729584603352, 10);
  sqcRYGate(q, 3.1097047035479166, 11);
  sqcRZGate(q, -0.3679650733916374, 11);
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
  sqcRYGate(q, 1.5789270733203165, 0);
  sqcRZGate(q, 1.5674968763575163, 0);
  sqcRYGate(q, 3.136890197827782, 1);
  sqcRZGate(q, -2.2850818223145173, 1);
  sqcRYGate(q, 1.5681190352753465, 2);
  sqcRZGate(q, -2.856942472797071, 2);
  sqcRYGate(q, 0.027302182047816807, 3);
  sqcRZGate(q, -1.1808481211579167, 3);
  sqcRYGate(q, -1.0678126597060207, 4);
  sqcRZGate(q, -1.7640109884780886, 4);
  sqcRYGate(q, 3.1338195860433786, 5);
  sqcRZGate(q, 1.2975015876728702, 5);
  sqcRYGate(q, 0.23324802451992352, 6);
  sqcRZGate(q, 1.5504750885877714, 6);
  sqcRYGate(q, -1.2840273077782018, 7);
  sqcRZGate(q, -1.7249646402391279, 7);
  sqcRYGate(q, -0.4985311756244304, 8);
  sqcRZGate(q, -2.246207224850435, 8);
  sqcRYGate(q, 1.0821987253638357, 9);
  sqcRZGate(q, 0.5162755592690719, 9);
  sqcRYGate(q, 0.872599769353845, 10);
  sqcRZGate(q, 2.462728692257822, 10);
  sqcRYGate(q, -3.1022402505280966, 11);
  sqcRZGate(q, -1.2526391747772792, 11);
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
  sqcRYGate(q, 1.5699773884727506, 0);
  sqcRZGate(q, -1.8789301267625165, 0);
  sqcRYGate(q, 1.601976647152017, 1);
  sqcRZGate(q, -1.367382620309681, 1);
  sqcRYGate(q, -0.003468531291841437, 2);
  sqcRZGate(q, -2.431096362760655, 2);
  sqcRYGate(q, -1.574309224188214, 3);
  sqcRZGate(q, -0.002569671489421466, 3);
  sqcRYGate(q, 0.03363030040789477, 4);
  sqcRZGate(q, -0.29609489574657566, 4);
  sqcRYGate(q, -3.141256145989089, 5);
  sqcRZGate(q, 0.2772018512024414, 5);
  sqcRYGate(q, -3.1324811930811896, 6);
  sqcRZGate(q, -0.27453919966744594, 6);
  sqcRYGate(q, 1.5347681021954536, 7);
  sqcRZGate(q, 3.14006206759094, 7);
  sqcRYGate(q, 0.023792549723939387, 8);
  sqcRZGate(q, -2.7946718537893807, 8);
  sqcRYGate(q, 1.75439486275611, 9);
  sqcRZGate(q, 0.13418830336375698, 9);
  sqcRYGate(q, -1.5095778777910884, 10);
  sqcRZGate(q, -1.1293473436700991, 10);
  sqcRYGate(q, -1.6859516296866128, 11);
  sqcRZGate(q, 0.10253376480196419, 11);
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
  sqcRYGate(q, -3.063352475243976, 0);
  sqcRZGate(q, 1.4361876727801546, 0);
  sqcRYGate(q, -3.138604994063872, 1);
  sqcRZGate(q, -2.3139617364132734, 1);
  sqcRYGate(q, -1.567245052120114, 2);
  sqcRZGate(q, 1.565852475633211, 2);
  sqcRYGate(q, -0.6292860520096262, 3);
  sqcRZGate(q, -0.01273368475261538, 3);
  sqcRYGate(q, -2.341130972752736, 4);
  sqcRZGate(q, 0.811404065528559, 4);
  sqcRYGate(q, -3.1401174073798304, 5);
  sqcRZGate(q, 0.3714972557844722, 5);
  sqcRYGate(q, 0.00045124401071549956, 6);
  sqcRZGate(q, -2.5337600863723857, 6);
  sqcRYGate(q, -2.8584547722900084, 7);
  sqcRZGate(q, -1.2479481931144676, 7);
  sqcRYGate(q, -3.1344945061396827, 8);
  sqcRZGate(q, 0.622989271449356, 8);
  sqcRYGate(q, 3.111316747223339, 9);
  sqcRZGate(q, -3.0295749739913376, 9);
  sqcRYGate(q, -2.8776208633599785, 10);
  sqcRZGate(q, -0.2472325302325444, 10);
  sqcRYGate(q, 0.8035844569359399, 11);
  sqcRZGate(q, -0.181078369805783, 11);
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
  sqcRYGate(q, 0.005161344518286093, 0);
  sqcRZGate(q, -3.104630985342418, 0);
  sqcRYGate(q, 1.5404418729273681, 1);
  sqcRZGate(q, 0.03236871524718854, 1);
  sqcRYGate(q, -0.046623525234773505, 2);
  sqcRZGate(q, 3.1326580871495757, 2);
  sqcRYGate(q, 0.896981222861859, 3);
  sqcRZGate(q, -0.5379486502002198, 3);
  sqcRYGate(q, 1.5701576038852405, 4);
  sqcRZGate(q, 0.06321154527686544, 4);
  sqcRYGate(q, -0.02887610746885229, 5);
  sqcRZGate(q, -1.7962746788903874, 5);
  sqcRYGate(q, -2.9180401983687614, 6);
  sqcRZGate(q, -1.4285866796866313, 6);
  sqcRYGate(q, -0.29052795731474035, 7);
  sqcRZGate(q, -1.184212895598831, 7);
  sqcRYGate(q, 0.035331595231252955, 8);
  sqcRZGate(q, 2.0655495973967843, 8);
  sqcRYGate(q, 1.721270935157318, 9);
  sqcRZGate(q, -3.0915180501286654, 9);
  sqcRYGate(q, 3.136527486828037, 10);
  sqcRZGate(q, 2.853333386923018, 10);
  sqcRYGate(q, 0.10459352688787961, 11);
  sqcRZGate(q, 0.8312479651161944, 11);
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
  sqcRYGate(q, 0.07687971974309882, 0);
  sqcRZGate(q, -0.08868578048981668, 0);
  sqcRYGate(q, -1.5784240575580537, 1);
  sqcRZGate(q, 2.4538883793264774, 1);
  sqcRYGate(q, 1.5711387369119505, 2);
  sqcRZGate(q, 1.2231359619744184, 2);
  sqcRYGate(q, -0.0026012846432479364, 3);
  sqcRZGate(q, 1.7635944227997555, 3);
  sqcRYGate(q, -3.1257052498027385, 4);
  sqcRZGate(q, -3.1299480080964655, 4);
  sqcRYGate(q, 3.1384504476903747, 5);
  sqcRZGate(q, 1.6580751002704046, 5);
  sqcRYGate(q, 0.0010343428842807256, 6);
  sqcRZGate(q, -0.7536752243069129, 6);
  sqcRYGate(q, 0.0009973960331483955, 7);
  sqcRZGate(q, -0.6758876892274416, 7);
  sqcRYGate(q, 1.5586990510816594, 8);
  sqcRZGate(q, 3.0584533464028527, 8);
  sqcRYGate(q, 3.032056507598819, 9);
  sqcRZGate(q, -0.978310906639834, 9);
  sqcRYGate(q, 0.24806506097568448, 10);
  sqcRZGate(q, -0.335519591228234, 10);
  sqcRYGate(q, -0.035379566344370575, 11);
  sqcRZGate(q, -0.767401020478653, 11);
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
  sqcRYGate(q, 1.5210917258218632, 0);
  sqcRZGate(q, 2.2061851800637866, 0);
  sqcRYGate(q, -0.07375614276523912, 1);
  sqcRZGate(q, 1.249330271664539, 1);
  sqcRYGate(q, -1.6069033905786085, 2);
  sqcRZGate(q, 2.162578576951482, 2);
  sqcRYGate(q, -3.09400675137847, 3);
  sqcRZGate(q, -1.3671810629774537, 3);
  sqcRYGate(q, 1.5351688393892668, 4);
  sqcRZGate(q, -2.508998476580088, 4);
  sqcRYGate(q, -0.003771570038068004, 5);
  sqcRZGate(q, 1.2884514198974173, 5);
  sqcRYGate(q, 0.08775589323632893, 6);
  sqcRZGate(q, -1.814354303295623, 6);
  sqcRYGate(q, -1.6239576912281404, 7);
  sqcRZGate(q, -2.6788209359851, 7);
  sqcRYGate(q, -1.5074004794493696, 8);
  sqcRZGate(q, -0.9194997080197441, 8);
  sqcRYGate(q, 0.015096896346265747, 9);
  sqcRZGate(q, -0.2253193466208101, 9);
  sqcRYGate(q, -1.500622199430698, 10);
  sqcRZGate(q, -2.4913757715859273, 10);
  sqcRYGate(q, -0.03492207370634226, 11);
  sqcRZGate(q, 0.42145998265774326, 11);

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
