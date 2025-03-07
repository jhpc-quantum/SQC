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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -1.3034839551930397, 0);
  sqcRYGate(q, 1.1982183912962752, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6544767519141876, 0);
  sqcRYGate(q, 0.7780047930951701, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1378981360673055, 2);
  sqcRYGate(q, 2.0226341761529474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5744276666017667, 2);
  sqcRYGate(q, -1.794277183642885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.293147299185369, 4);
  sqcRYGate(q, -2.9933640048656063, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.41166175622711, 4);
  sqcRYGate(q, -2.927470087579694, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6026600681907786, 6);
  sqcRYGate(q, 0.7083792197334366, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.134204509332088, 6);
  sqcRYGate(q, 2.2023411110086295, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9122654651361337, 8);
  sqcRYGate(q, -0.895477339340612, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6063412185665946, 8);
  sqcRYGate(q, 0.5849089419613057, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.5380817108295597, 10);
  sqcRYGate(q, -2.5656215166610257, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5468546439332134, 10);
  sqcRYGate(q, 2.0483124343163777, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.37886757525558057, 12);
  sqcRYGate(q, 1.3509640206701985, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5424887105816056, 12);
  sqcRYGate(q, 0.2836172785966973, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.4500121566945214, 14);
  sqcRYGate(q, -1.7043888508811698, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.377951703922946, 14);
  sqcRYGate(q, 2.3570371206641934, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.29042218209829423, 16);
  sqcRYGate(q, 1.5962810696747494, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.0120214954158548, 16);
  sqcRYGate(q, 3.1046551238267157, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.91383486070709, 18);
  sqcRYGate(q, -0.9356717269072676, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.40660248448249986, 18);
  sqcRYGate(q, -2.8996398957331038, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.37714005418754337, 0);
  sqcRYGate(q, -1.5222647554190658, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.698298771569106, 0);
  sqcRYGate(q, 0.027873829427033113, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.698289734374744, 2);
  sqcRYGate(q, 1.0460268114752722, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5371789372743776, 2);
  sqcRYGate(q, -0.16448177431304492, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9313977550090007, 4);
  sqcRYGate(q, -2.961213408678339, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.19352848806222658, 4);
  sqcRYGate(q, 2.5878709632053463, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.540379022604381, 6);
  sqcRYGate(q, 0.13264724731472688, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.5265241881637186, 6);
  sqcRYGate(q, 0.28376202723653243, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.94764552530576, 8);
  sqcRYGate(q, 0.6846908730389458, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.2634590710655885, 8);
  sqcRYGate(q, -2.891286527540363, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.9551385668326988, 10);
  sqcRYGate(q, -2.9989991369908044, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.8415117015087525, 10);
  sqcRYGate(q, -3.073179650146944, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.4985330487791204, 12);
  sqcRYGate(q, -0.9206607009447234, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.6327545207827696, 12);
  sqcRYGate(q, 1.6369578810917063, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.8350263922211472, 14);
  sqcRYGate(q, 2.2076067458150677, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.009124516264297496, 14);
  sqcRYGate(q, -3.134734084583566, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 2.384003922436266, 16);
  sqcRYGate(q, -2.377303479828071, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 1.4877212956688375, 16);
  sqcRYGate(q, 0.11850798939877245, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -2.671125832289967, 1);
  sqcRYGate(q, -3.0624992096910573, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.003826055234746661, 1);
  sqcRYGate(q, -9.377403203064294e-05, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3738258956948899, 3);
  sqcRYGate(q, 1.8407528911576536, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.2666559210117754, 3);
  sqcRYGate(q, -0.0818673961902893, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.40155156373914735, 5);
  sqcRYGate(q, -2.8463054353065664, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.011251017717920765, 5);
  sqcRYGate(q, 2.5314396417568545, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.534792886930506, 7);
  sqcRYGate(q, -1.5905495966377625, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.012120703451971693, 7);
  sqcRYGate(q, 0.4520218921404001, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.7695240207715193, 9);
  sqcRYGate(q, 1.075256799539734, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.573985598236983, 9);
  sqcRYGate(q, 1.531741384895294, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.2483507635421571, 11);
  sqcRYGate(q, -0.28808327943749035, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.6127268067601346, 11);
  sqcRYGate(q, -0.6432747086286891, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.549699199932367, 13);
  sqcRYGate(q, 1.9954063669927973, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.5760253648613372, 13);
  sqcRYGate(q, 1.569954088817363, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.014130199352265116, 15);
  sqcRYGate(q, 0.7429571827168475, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -0.0017267556314407362, 15);
  sqcRYGate(q, -1.5700258837812038, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 1.073353713824611, 17);
  sqcRYGate(q, -2.672188688888159, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 1.2950259168452416, 17);
  sqcRYGate(q, -2.6956780198128767, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 1.692540899045496, 0);
  sqcRYGate(q, 2.712219331701385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2506544200621814, 0);
  sqcRYGate(q, -3.1194852826366986, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4573382215606006, 2);
  sqcRYGate(q, -1.6037222464664993, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5726659144916197, 2);
  sqcRYGate(q, 2.988806614927959, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4754145134006116, 4);
  sqcRYGate(q, 2.8908253295585555, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.141214048469441, 4);
  sqcRYGate(q, -1.569779042366668, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.031862076374339, 6);
  sqcRYGate(q, 3.1304462470541714, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.130245716241146, 6);
  sqcRYGate(q, 2.3481494736224278, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.548068775318485, 8);
  sqcRYGate(q, -2.875433011254323, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6595901172055196, 8);
  sqcRYGate(q, -0.4566701286157428, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.2680007905832156, 10);
  sqcRYGate(q, -0.053721245299007236, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5601791643643779, 10);
  sqcRYGate(q, 0.03964014984992481, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.0070378059935833895, 12);
  sqcRYGate(q, -2.062780044247578, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.8071847544909811, 12);
  sqcRYGate(q, 1.8797907787739674, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.968977724088371, 14);
  sqcRYGate(q, -3.104380392753513, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.6109576436085538, 14);
  sqcRYGate(q, -0.022565227620100714, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.9941949929171745, 16);
  sqcRYGate(q, -3.087332947532366, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.1101566969833017, 16);
  sqcRYGate(q, -3.139857102247409, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.0754334972779027, 18);
  sqcRYGate(q, -1.2862013045376464, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.5792201322939396, 18);
  sqcRYGate(q, 1.7674233769097214, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.947320709407853, 0);
  sqcRYGate(q, 0.02630248616553832, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5802823566654878, 0);
  sqcRYGate(q, -0.10191588607582425, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5463259996164453, 2);
  sqcRYGate(q, 3.128026742380375, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3411259396641697, 2);
  sqcRYGate(q, 1.4461113347187489, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.119266272860807, 4);
  sqcRYGate(q, -3.081593221971534, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5715915853960802, 4);
  sqcRYGate(q, 2.943539401345257, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.603802774169483, 6);
  sqcRYGate(q, 3.1384719691087604, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.5830934007862314, 6);
  sqcRYGate(q, -0.002558486088331391, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.3669172280752857, 8);
  sqcRYGate(q, -1.5267458326706953, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.2477950359478216, 8);
  sqcRYGate(q, -3.136740818759361, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.5722202555963403, 10);
  sqcRYGate(q, -2.754457200344867, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.007419203628398255, 10);
  sqcRYGate(q, 2.6711101333896843, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.6609337161124849, 12);
  sqcRYGate(q, -1.4007720100742127, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -3.139282009352612, 12);
  sqcRYGate(q, -1.297352670104956, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.2204544612698929, 14);
  sqcRYGate(q, 0.6311949609784681, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.01993657851983155, 14);
  sqcRYGate(q, 3.070033291487866, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.9946385460040839, 16);
  sqcRYGate(q, -2.2142035251936343, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -0.13795167631344038, 16);
  sqcRYGate(q, -0.3712314799027929, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -2.4098285654075244, 1);
  sqcRYGate(q, -1.4267543892656336, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.026295031103768036, 1);
  sqcRYGate(q, -1.563425307745118, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8354567262791095, 3);
  sqcRYGate(q, -0.3093114042196401, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7633294887809934, 3);
  sqcRYGate(q, -3.1373506254636254, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.4892241089645193, 5);
  sqcRYGate(q, 1.580527299847471, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.0970544120623615, 5);
  sqcRYGate(q, -1.5377690886758506, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5822996585098341, 7);
  sqcRYGate(q, 1.9093973136147244, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.1316336852791515, 7);
  sqcRYGate(q, -2.63273958994525, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.2499864438381136, 9);
  sqcRYGate(q, 1.573817950797641, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.4604631000823618, 9);
  sqcRYGate(q, 0.012489143686784773, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.6255019237837613, 11);
  sqcRYGate(q, 0.1743857846051391, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.0013636801108911772, 11);
  sqcRYGate(q, 0.08333456759378333, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.8621469053454687, 13);
  sqcRYGate(q, 2.4949840031906048, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -3.129670603542271, 13);
  sqcRYGate(q, -2.7305442542156992, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.5320004661885465, 15);
  sqcRYGate(q, 1.9733956854416639, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -0.017789196755730218, 15);
  sqcRYGate(q, 1.7993276242004461, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -2.5034362809238573, 17);
  sqcRYGate(q, -0.020265646381148555, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -1.315800929269419, 17);
  sqcRYGate(q, 3.140198068915895, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.020272742679874844, 0);
  sqcRYGate(q, 2.2940899192783712, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.002996431299255131, 0);
  sqcRYGate(q, 1.543046193518413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07198835638614544, 2);
  sqcRYGate(q, 2.0980113267238485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.006331053675350716, 2);
  sqcRYGate(q, -0.004810188663368473, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.55601997139753, 4);
  sqcRYGate(q, -0.15834079078313046, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.033106451535411, 4);
  sqcRYGate(q, -2.851616926996958, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0314267759436977, 6);
  sqcRYGate(q, -1.5725888165187758, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.515253376779623, 6);
  sqcRYGate(q, -0.0018189903891118928, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8112237433748035, 8);
  sqcRYGate(q, 2.5626146715356004, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5126280040410804, 8);
  sqcRYGate(q, 0.008472602395762764, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.2944170329263027, 10);
  sqcRYGate(q, 1.6702304501165541, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.020834847541116197, 10);
  sqcRYGate(q, 0.01621598865444724, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.605994714866724, 12);
  sqcRYGate(q, 1.6519268052930083, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5700979553808612, 12);
  sqcRYGate(q, 1.5812491435088654, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.762589677641123, 14);
  sqcRYGate(q, 1.5625818317309594, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5688937504464329, 14);
  sqcRYGate(q, 3.1401988423645104, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.296542799733107, 16);
  sqcRYGate(q, 1.2436953475000316, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.027113571131634, 16);
  sqcRYGate(q, 1.5653147914730807, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.344957762726348, 18);
  sqcRYGate(q, -1.286341532711008, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.011784233100728278, 18);
  sqcRYGate(q, 1.6593300328478362, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.561713336227295, 0);
  sqcRYGate(q, 3.126592905205427, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5963611390317185, 0);
  sqcRYGate(q, 0.6033249427632503, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7525925900045234, 2);
  sqcRYGate(q, -3.1343181368970057, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.7025775504101266, 2);
  sqcRYGate(q, 2.995758604426809, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.6024238932645476, 4);
  sqcRYGate(q, 0.2808011439261415, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.8590008445103527, 4);
  sqcRYGate(q, 2.6630570535078286, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.397187241550017, 6);
  sqcRYGate(q, 0.38968097891240544, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.02586753885125376, 6);
  sqcRYGate(q, 3.0106266726586473, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.023620435373564945, 8);
  sqcRYGate(q, -1.8603437137799907, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.6748825659398987, 8);
  sqcRYGate(q, -0.02644910186231986, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.953892784473146, 10);
  sqcRYGate(q, 1.5791836013988287, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.3218441832157217, 10);
  sqcRYGate(q, -3.1400289821050658, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.028729951795118, 12);
  sqcRYGate(q, 2.873918945017818, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.60843904343141, 12);
  sqcRYGate(q, 0.039393131593125325, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.020949156997227304, 14);
  sqcRYGate(q, 1.1128080260741422, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 3.042928202986223, 14);
  sqcRYGate(q, 0.7404223795511689, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -1.4301933162339402, 16);
  sqcRYGate(q, 0.9466537548083651, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 1.481833941789147, 16);
  sqcRYGate(q, 0.22029317553458008, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.9576174979767916, 1);
  sqcRYGate(q, -1.1105594639109375, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.580808263125043, 1);
  sqcRYGate(q, 3.1375999050926255, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.953647705482462, 3);
  sqcRYGate(q, 1.4117684474375016, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5425185276547828, 3);
  sqcRYGate(q, -3.139136069888463, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.195687058491581, 5);
  sqcRYGate(q, -2.9085581844885935, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.8123674767886069, 5);
  sqcRYGate(q, 0.03404139972417752, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.3168629052657614, 7);
  sqcRYGate(q, 2.546534822578298, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.00017443748747990407, 7);
  sqcRYGate(q, -3.135093910717808, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.34859010237606025, 9);
  sqcRYGate(q, 3.0861481832245157, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.4347303124565816, 9);
  sqcRYGate(q, 3.139817646202031, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.740055856133302, 11);
  sqcRYGate(q, 0.5666091139511327, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.138410675542106, 11);
  sqcRYGate(q, 0.0015194805172464854, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.059827914168621, 13);
  sqcRYGate(q, 1.1333648272209311, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -3.1407486600972434, 13);
  sqcRYGate(q, 3.125004018028546, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.8488462841305114, 15);
  sqcRYGate(q, 1.9237326815787634, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -0.0016906558110756364, 15);
  sqcRYGate(q, -0.681708627322136, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 2.2687464785258054, 17);
  sqcRYGate(q, -0.0757317116911565, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -2.428168278520894, 17);
  sqcRYGate(q, -0.04577874746637267, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 3.123680147095303, 0);
  sqcRYGate(q, 0.6936803627831818, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.892307352844064, 0);
  sqcRYGate(q, 1.7440610845932327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0047159257177585, 2);
  sqcRYGate(q, 1.1790174524481716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4841670704400105, 2);
  sqcRYGate(q, 3.136093609738265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3122155911729199, 4);
  sqcRYGate(q, -0.5746774054124035, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.135401830657827, 4);
  sqcRYGate(q, -3.1377976673927463, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.807482746721347, 6);
  sqcRYGate(q, 2.363306847320568, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.051720403025758095, 6);
  sqcRYGate(q, 3.1409195107020866, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1189934015321996, 8);
  sqcRYGate(q, -0.9532869065139354, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.1085923266515858, 8);
  sqcRYGate(q, 0.41858015119210695, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9494427858488184, 10);
  sqcRYGate(q, 2.976322185296701, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5681327023476912, 10);
  sqcRYGate(q, 1.577872455537297, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.22473851429543013, 12);
  sqcRYGate(q, -2.130863749542285, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.0017009175495414737, 12);
  sqcRYGate(q, 0.005488554707989724, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1356206842476144, 14);
  sqcRYGate(q, 1.8145207239581618, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.005933518864297979, 14);
  sqcRYGate(q, 1.5582384780226062, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.0206329065939808, 16);
  sqcRYGate(q, -2.1641264384174685, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.5956127624242116, 16);
  sqcRYGate(q, 0.03222584923806042, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.24428656565895235, 18);
  sqcRYGate(q, -2.565932437121095, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.5507171438038858, 18);
  sqcRYGate(q, -1.5425876260248712, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.055182237980330784, 0);
  sqcRYGate(q, -1.9202378294566902, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2926739301806105, 0);
  sqcRYGate(q, 2.472535455467214, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3850348592194228, 2);
  sqcRYGate(q, -0.3108953955821834, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.05983493278652628, 2);
  sqcRYGate(q, 3.015436935484727, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6224925242504076, 4);
  sqcRYGate(q, 2.504220050706211, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.760009279337147, 4);
  sqcRYGate(q, 0.351585328606376, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.0209668343007037, 6);
  sqcRYGate(q, 2.9452316012941786, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.011020324621321187, 6);
  sqcRYGate(q, 3.0431950316580267, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.4589417469941781, 8);
  sqcRYGate(q, 2.7832126659289447, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.03483673769691453, 8);
  sqcRYGate(q, -0.046480781049656805, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.6924377893150968, 10);
  sqcRYGate(q, -2.974637030662844, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.005110618102930787, 10);
  sqcRYGate(q, -3.1170441091162164, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.430400526905667, 12);
  sqcRYGate(q, -1.6848092475910017, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.07474708033083743, 12);
  sqcRYGate(q, -3.124750289692935, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.6959400660446091, 14);
  sqcRYGate(q, 2.9340809344408187, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.04514676603850187, 14);
  sqcRYGate(q, 2.4369313131443584, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.5847568881199375, 16);
  sqcRYGate(q, 0.39139630945467463, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.31869435575624205, 16);
  sqcRYGate(q, -0.019241364507280423, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 2.669188724919872, 1);
  sqcRYGate(q, -2.3446668511302278, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1290921714974136, 1);
  sqcRYGate(q, -1.5653749007246605, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7783883121966433, 3);
  sqcRYGate(q, -1.5907914995518249, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.021175141827818992, 3);
  sqcRYGate(q, 3.11608976347722, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.0968763094143288, 5);
  sqcRYGate(q, -0.708759288294814, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.3017769175141818, 5);
  sqcRYGate(q, -0.01892905021246083, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.351456290452088, 7);
  sqcRYGate(q, 1.5735537650342402, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.5724558991331428, 7);
  sqcRYGate(q, 0.003921306132451896, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.6160873361181398, 9);
  sqcRYGate(q, -1.5917858703139567, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.5704335773710518, 9);
  sqcRYGate(q, 0.03949828019645665, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.5761650623069636, 11);
  sqcRYGate(q, -2.074732542105558, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.5716672081329905, 11);
  sqcRYGate(q, 0.06273274569027977, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.4360221700088163, 13);
  sqcRYGate(q, 0.1609090382107816, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.571360308693443, 13);
  sqcRYGate(q, -0.00045665200490585534, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.5717883684926253, 15);
  sqcRYGate(q, -1.5221295092321403, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -1.5702537319995793, 15);
  sqcRYGate(q, -0.2917014214407643, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 1.570926861708343, 17);
  sqcRYGate(q, -1.705883985684212, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 1.5704368885293993, 17);
  sqcRYGate(q, -1.3039356982566117, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -1.520467860291853, 0);
  sqcRYGate(q, -3.1380396487522506, 1);
  sqcRYGate(q, 1.3807371465915734, 2);
  sqcRYGate(q, 1.5612692297353714, 3);
  sqcRYGate(q, 1.6122120418573411, 4);
  sqcRYGate(q, -2.9763047034517793, 5);
  sqcRYGate(q, 1.6117569358426191, 6);
  sqcRYGate(q, -1.7082846733777486, 7);
  sqcRYGate(q, -1.4822497946081963, 8);
  sqcRYGate(q, 1.615916969714858, 9);
  sqcRYGate(q, 1.3398706292640858, 10);
  sqcRYGate(q, 1.5752870314028469, 11);
  sqcRYGate(q, -1.6562653401136733, 12);
  sqcRYGate(q, 2.7065894080180333, 13);
  sqcRYGate(q, 1.5772149567584899, 14);
  sqcRYGate(q, 1.5696569243735476, 15);
  sqcRYGate(q, -2.505206035612826, 16);
  sqcRYGate(q, 1.5708634281622607, 17);
  sqcRYGate(q, -0.3787043007779616, 18);
  sqcRYGate(q, -1.570354859012021, 19);

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
