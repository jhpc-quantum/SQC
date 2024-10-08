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
  q = sqcQuantumCircuit(20);

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.02628500878868445, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.046641432064918366, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.04037261660708603, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.05824009352554934, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.03288518233730859, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.017995989848528758, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.07984052179377941, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.016272500391413588, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.09925096203718889, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.09749237575745931, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.09106264512537991, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, -0.03321387276925317, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, -0.07988147489884012, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, -0.059026317849071225, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, -0.04730656564997276, 15);
  sqcCXGate(q, 14, 15);
  sqcCXGate(q, 15, 16);
  sqcRZGate(q, -0.08696893322996681, 16);
  sqcCXGate(q, 15, 16);
  sqcCXGate(q, 16, 17);
  sqcRZGate(q, -0.06778854905645795, 17);
  sqcCXGate(q, 16, 17);
  sqcCXGate(q, 17, 18);
  sqcRZGate(q, -0.003990501299363697, 18);
  sqcCXGate(q, 17, 18);
  sqcCXGate(q, 18, 19);
  sqcRZGate(q, -0.01305996658601469, 19);
  sqcCXGate(q, 18, 19);
  sqcHGate(q, 0);
  sqcRZGate(q, -1.3962069768051557, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.23697340846750106, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.35811335357071566, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.5603232631681223, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 1.5774081121734358, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -1.4920882446499029, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 1.5430233019038675, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 1.479352488296401, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 1.5688129589530435, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 1.5807493901017189, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 1.5557387726908678, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 1.5729306074520977, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, 1.5550618153547193, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, 1.6151568740990836, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, -1.586365761435066, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, -1.5695951400396333, 15);
  sqcHGate(q, 15);
  sqcHGate(q, 16);
  sqcRZGate(q, -1.5636034164322483, 16);
  sqcHGate(q, 16);
  sqcHGate(q, 17);
  sqcRZGate(q, -1.5492074301737402, 17);
  sqcHGate(q, 17);
  sqcHGate(q, 18);
  sqcRZGate(q, 0.9658784796820347, 18);
  sqcHGate(q, 18);
  sqcHGate(q, 19);
  sqcRZGate(q, 1.6904973538361818, 19);
  sqcHGate(q, 19);
  sqcRZGate(q, 2.050672139262975, 0);
  sqcRZGate(q, 1.1944250969182093, 1);
  sqcRZGate(q, 1.233241737535233, 2);
  sqcRZGate(q, 0.7315846997290517, 3);
  sqcRZGate(q, -0.8688096263415948, 4);
  sqcRZGate(q, 0.7723885195977789, 5);
  sqcRZGate(q, 0.046416742104386344, 6);
  sqcRZGate(q, 1.5073119141335105, 7);
  sqcRZGate(q, -1.5528193451013828, 8);
  sqcRZGate(q, -1.5712924074149424, 9);
  sqcRZGate(q, -1.5711555378349267, 10);
  sqcRZGate(q, 1.57063901310086, 11);
  sqcRZGate(q, -1.576149243610937, 12);
  sqcRZGate(q, 1.4437789528463338, 13);
  sqcRZGate(q, -1.4879031311241246, 14);
  sqcRZGate(q, 1.542130802439916, 15);
  sqcRZGate(q, 1.5006232925239396, 16);
  sqcRZGate(q, 1.6778337428050571, 17);
  sqcRZGate(q, -0.6626484898245688, 18);
  sqcRZGate(q, -0.4400672942025929, 19);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.47710780286048166, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.7554831098523102, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.859623719733546, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.3382712168626164, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -1.524706637478666, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.01706696933016943, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.15562944054069788, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.7616261803477272, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.2210591593326875, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.4821958360969556, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 3.0160289717991566, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, -0.841757397887667, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, -3.0932406422202123, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, -1.3661174922019326, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, 0.07484694191609964, 15);
  sqcCXGate(q, 14, 15);
  sqcCXGate(q, 15, 16);
  sqcRZGate(q, 1.4216574344015642, 16);
  sqcCXGate(q, 15, 16);
  sqcCXGate(q, 16, 17);
  sqcRZGate(q, 0.9214279917954755, 17);
  sqcCXGate(q, 16, 17);
  sqcCXGate(q, 17, 18);
  sqcRZGate(q, -0.006511453707353247, 18);
  sqcCXGate(q, 17, 18);
  sqcCXGate(q, 18, 19);
  sqcRZGate(q, -1.8383960115270417, 19);
  sqcCXGate(q, 18, 19);
  sqcHGate(q, 0);
  sqcRZGate(q, 2.9766771375512917, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.2138193623072263, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 1.3494802883901758, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.6887387728728941, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.020819224607851176, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 2.199139038503747, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.050305772738671005, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.5239244365457465, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.06722944638942793, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 1.7536018798853488, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 1.8640839021236257, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -1.6928622058829574, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, -1.5653079193325823, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, 0.41371149425597636, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, -2.9730349657788127, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, -1.716852954042544, 15);
  sqcHGate(q, 15);
  sqcHGate(q, 16);
  sqcRZGate(q, -0.19345268857602288, 16);
  sqcHGate(q, 16);
  sqcHGate(q, 17);
  sqcRZGate(q, -2.7953490599723088, 17);
  sqcHGate(q, 17);
  sqcHGate(q, 18);
  sqcRZGate(q, -1.3940826881850747, 18);
  sqcHGate(q, 18);
  sqcHGate(q, 19);
  sqcRZGate(q, 2.333053324491621, 19);
  sqcHGate(q, 19);
  sqcRZGate(q, 0.5772550537493056, 0);
  sqcRZGate(q, 0.020262293441630292, 1);
  sqcRZGate(q, 0.008004930852302385, 2);
  sqcRZGate(q, 0.06909427067881183, 3);
  sqcRZGate(q, 0.08530393395751912, 4);
  sqcRZGate(q, 1.9275167874334942, 5);
  sqcRZGate(q, 1.5335025026132298, 6);
  sqcRZGate(q, -0.12083922086439637, 7);
  sqcRZGate(q, 0.023418084608961005, 8);
  sqcRZGate(q, -0.018034904790950886, 9);
  sqcRZGate(q, 0.01138383451977297, 10);
  sqcRZGate(q, -0.008596268663814048, 11);
  sqcRZGate(q, -0.013416353558974149, 12);
  sqcRZGate(q, 0.11259967769819076, 13);
  sqcRZGate(q, 0.11533476005528326, 14);
  sqcRZGate(q, 0.02605632837096035, 15);
  sqcRZGate(q, -3.135525842856414, 16);
  sqcRZGate(q, 0.11533598649490717, 17);
  sqcRZGate(q, 1.219527377320407, 18);
  sqcRZGate(q, -0.5504719902752366, 19);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.7831453753485735, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 1.4687726146580775, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 2.3038234141440714, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.9332780594222039, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.25593163223863324, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.19348370023534445, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 2.851043401888975, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 1.3032779507012935, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.5329665846995496, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.26378351505400743, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.48969902766759066, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, 0.7471062947847282, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, 2.826342728945337, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, -1.5277837871228206, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, 3.032835954976501, 15);
  sqcCXGate(q, 14, 15);
  sqcCXGate(q, 15, 16);
  sqcRZGate(q, 2.301211058972361, 16);
  sqcCXGate(q, 15, 16);
  sqcCXGate(q, 16, 17);
  sqcRZGate(q, -2.321559377325448, 17);
  sqcCXGate(q, 16, 17);
  sqcCXGate(q, 17, 18);
  sqcRZGate(q, 2.355821067033667, 18);
  sqcCXGate(q, 17, 18);
  sqcCXGate(q, 18, 19);
  sqcRZGate(q, 1.1460359413070431, 19);
  sqcCXGate(q, 18, 19);
  sqcHGate(q, 0);
  sqcRZGate(q, -1.681336917650665, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.5693201356911637, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -2.495188501079333, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.09703137052055544, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.05158861262115464, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.4289214060286299, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 1.1797734947228644, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.2804454903712074, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.0482385983481644, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 2.2452327589098893, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 1.0715153861617976, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.7903278166180803, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, -1.6598604179654177, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, -2.180233962587949, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, 1.9278910209139974, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, -1.9133264224468145, 15);
  sqcHGate(q, 15);
  sqcHGate(q, 16);
  sqcRZGate(q, -0.5390748408867869, 16);
  sqcHGate(q, 16);
  sqcHGate(q, 17);
  sqcRZGate(q, 2.9813459697884657, 17);
  sqcHGate(q, 17);
  sqcHGate(q, 18);
  sqcRZGate(q, -0.5291079652021473, 18);
  sqcHGate(q, 18);
  sqcHGate(q, 19);
  sqcRZGate(q, 2.7468458104393436, 19);
  sqcHGate(q, 19);
  sqcRZGate(q, 0.607410020314771, 0);
  sqcRZGate(q, 0.0013341464324316023, 1);
  sqcRZGate(q, -0.11188022175677755, 2);
  sqcRZGate(q, -0.2765815829227972, 3);
  sqcRZGate(q, 0.2645914883733097, 4);
  sqcRZGate(q, 0.16281999645463752, 5);
  sqcRZGate(q, -0.03243121696410303, 6);
  sqcRZGate(q, 0.07536145412082866, 7);
  sqcRZGate(q, -0.002720286469698147, 8);
  sqcRZGate(q, 0.01766213480552429, 9);
  sqcRZGate(q, 0.0012690851536820008, 10);
  sqcRZGate(q, -3.130957257309683, 11);
  sqcRZGate(q, 0.027311411708997643, 12);
  sqcRZGate(q, 0.022139947815166896, 13);
  sqcRZGate(q, 3.117675999351005, 14);
  sqcRZGate(q, -0.014772413406101612, 15);
  sqcRZGate(q, 0.24396140104335254, 16);
  sqcRZGate(q, -3.0833302935121676, 17);
  sqcRZGate(q, 2.015520129492799, 18);
  sqcRZGate(q, -0.15943486704874715, 19);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.5646154470825677, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.3645461658050055, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 2.60891213592269, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.6235642239080198, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -1.4808321300971239, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 2.871629496063943, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.3176072401411138, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.9716530312185234, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.6083231155668176, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.23837434964589954, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 2.4570834004355646, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, -0.21191618967130163, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, 0.490412965773253, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, 2.6201744880963025, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, 2.961398309576343, 15);
  sqcCXGate(q, 14, 15);
  sqcCXGate(q, 15, 16);
  sqcRZGate(q, 1.4413731507454888, 16);
  sqcCXGate(q, 15, 16);
  sqcCXGate(q, 16, 17);
  sqcRZGate(q, 2.9721503616843927, 17);
  sqcCXGate(q, 16, 17);
  sqcCXGate(q, 17, 18);
  sqcRZGate(q, 2.3701894338021128, 18);
  sqcCXGate(q, 17, 18);
  sqcCXGate(q, 18, 19);
  sqcRZGate(q, 0.36165276460211665, 19);
  sqcCXGate(q, 18, 19);
  sqcHGate(q, 0);
  sqcRZGate(q, -1.601951934082918, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.5453572675091922, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 3.054440984352522, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -3.044901249426324, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 3.1165619306505814, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -1.0448244981126429, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.09720644817060851, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -1.9340045650406605, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 3.1234352277912953, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.5428663308596786, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -1.1747021844920282, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -1.2781629432779977, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, 0.2634614202345066, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, 1.8560502739721645, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, -2.8572673544952925, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, -2.052971631484794, 15);
  sqcHGate(q, 15);
  sqcHGate(q, 16);
  sqcRZGate(q, 3.1189953461834947, 16);
  sqcHGate(q, 16);
  sqcHGate(q, 17);
  sqcRZGate(q, -3.049978970118844, 17);
  sqcHGate(q, 17);
  sqcHGate(q, 18);
  sqcRZGate(q, 3.1393799549458175, 18);
  sqcHGate(q, 18);
  sqcHGate(q, 19);
  sqcRZGate(q, -1.5276192056896762, 19);
  sqcHGate(q, 19);
  sqcRZGate(q, 1.5323307073652335, 0);
  sqcRZGate(q, -0.0197688976667815, 1);
  sqcRZGate(q, 3.003893268883792, 2);
  sqcRZGate(q, 2.920941283362278, 3);
  sqcRZGate(q, 0.20041069882752213, 4);
  sqcRZGate(q, -0.04088423359991676, 5);
  sqcRZGate(q, -3.1329658830248563, 6);
  sqcRZGate(q, 3.0064779146673897, 7);
  sqcRZGate(q, -3.108191051195339, 8);
  sqcRZGate(q, -0.041570976576901626, 9);
  sqcRZGate(q, -0.012671225114387393, 10);
  sqcRZGate(q, -0.00618770906141947, 11);
  sqcRZGate(q, -0.03674954998428001, 12);
  sqcRZGate(q, -0.02765560421475224, 13);
  sqcRZGate(q, 3.115597583086167, 14);
  sqcRZGate(q, -3.115804097268091, 15);
  sqcRZGate(q, 0.25301134257206076, 16);
  sqcRZGate(q, -3.0939343762807208, 17);
  sqcRZGate(q, 1.8493719858927489, 18);
  sqcRZGate(q, -0.4147939612198976, 19);

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
