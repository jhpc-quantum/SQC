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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 0.1614156384370684, 0);
  sqcRYGate(q, 2.2580777146250464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.28679980092216995, 0);
  sqcRYGate(q, 1.6140089293263156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3784202273175628, 2);
  sqcRYGate(q, -3.1014011376432884, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7255927481730237, 2);
  sqcRYGate(q, -1.3172889828025207, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4775866248413341, 0);
  sqcRYGate(q, -0.24242931657600927, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4758643337192843, 0);
  sqcRYGate(q, -0.23603321113169431, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9592405900345797, 1);
  sqcRYGate(q, -2.988862463979906, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1874815180885507, 1);
  sqcRYGate(q, 2.6793495688574533, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8224323739356967, 0);
  sqcRYGate(q, 1.0687770186688863, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9970564963339008, 0);
  sqcRYGate(q, 3.040906553181844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.343745689507497, 2);
  sqcRYGate(q, -2.489398393027004, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3163161717054095, 2);
  sqcRYGate(q, 0.17042112604062096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5153232262781673, 0);
  sqcRYGate(q, 0.5819976698230535, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.928939646722209, 0);
  sqcRYGate(q, -3.127494902129273, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3915685328807292, 1);
  sqcRYGate(q, 2.465248399748795, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.879533835134028, 1);
  sqcRYGate(q, 2.872684754323372, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0349131970925054, 0);
  sqcRYGate(q, 2.3958768214597685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3972348625673674, 0);
  sqcRYGate(q, 0.39263608576983755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0976921385605936, 2);
  sqcRYGate(q, 2.916043456618656, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9816640424856501, 2);
  sqcRYGate(q, -3.101669218042006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6388741664312336, 0);
  sqcRYGate(q, -2.6275776709950667, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.260275897521389, 0);
  sqcRYGate(q, -1.137541129897117, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4434513197164276, 1);
  sqcRYGate(q, -1.663261553196784, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.430208576314817, 1);
  sqcRYGate(q, 1.3887244607770672, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7074791640213978, 0);
  sqcRYGate(q, 1.2051206423861185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.98037034065333, 0);
  sqcRYGate(q, 3.1345045338837227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5571397145783648, 2);
  sqcRYGate(q, 0.38184024201492317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3607983018753051, 2);
  sqcRYGate(q, -1.3125328018253473, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.33954045752129, 0);
  sqcRYGate(q, 1.6513624399495164, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.110142030564922, 0);
  sqcRYGate(q, -0.6394492564111464, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.883718511511199, 1);
  sqcRYGate(q, 2.171226588300192, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.477068495538934, 1);
  sqcRYGate(q, -0.4055792268353935, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.091506511305501, 0);
  sqcRYGate(q, -2.869958666775188, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0922604435181538, 0);
  sqcRYGate(q, -1.1561367091046812, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.36591357092556764, 2);
  sqcRYGate(q, -2.009994940206934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9578518229998363, 2);
  sqcRYGate(q, -0.47554024879680057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.120937862746466, 0);
  sqcRYGate(q, 1.0671430175475294, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.70724491777867, 0);
  sqcRYGate(q, 0.6038521398924503, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0324412621625374, 1);
  sqcRYGate(q, 0.5398510285387088, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4270505351984575, 1);
  sqcRYGate(q, -2.0440590931348743, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.613823956989604, 0);
  sqcRYGate(q, -2.6911045669189804, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.411844259270772, 0);
  sqcRYGate(q, -2.137316549810834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.793495588363374, 2);
  sqcRYGate(q, -2.3313790411274944, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4611543086925605, 2);
  sqcRYGate(q, -0.15195194875727935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.560508016900785, 0);
  sqcRYGate(q, 1.547289399344904, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4538046082586433, 0);
  sqcRYGate(q, 1.4189493321247797, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3261699251701531, 1);
  sqcRYGate(q, 2.37231707327131, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6020082982735957, 1);
  sqcRYGate(q, 1.8016020588143762, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.623893098376817, 0);
  sqcRYGate(q, -0.2850276258154132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.160709229638477, 0);
  sqcRYGate(q, 2.600042549889715, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7835626037011305, 2);
  sqcRYGate(q, -0.7243136553536296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9806968514755033, 2);
  sqcRYGate(q, 0.5176569308440158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6108960522243834, 0);
  sqcRYGate(q, 2.639625279121155, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8410674807646625, 0);
  sqcRYGate(q, -1.3205542364907399, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4104031836596738, 1);
  sqcRYGate(q, -0.0469929080967593, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.016233110053613, 1);
  sqcRYGate(q, -2.0269246913477525, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8762834272583635, 0);
  sqcRYGate(q, 1.5635326661117508, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0853062583865283, 0);
  sqcRYGate(q, -1.7281249642480132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8357925262240453, 2);
  sqcRYGate(q, 1.910956354824987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1909082515368455, 2);
  sqcRYGate(q, 0.12171791493609696, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1699140051186303, 0);
  sqcRYGate(q, 1.9905976162432617, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9894558501230644, 0);
  sqcRYGate(q, 2.3668458824154865, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.778152900230693, 1);
  sqcRYGate(q, 1.4025847707514119, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8952972320350785, 1);
  sqcRYGate(q, 1.303857159389766, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9490639939289143, 0);
  sqcRYGate(q, 1.115701328901996, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5994823531920432, 0);
  sqcRYGate(q, -2.930126240613212, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4521584876204736, 2);
  sqcRYGate(q, 2.9954593706039754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3952625406029313, 2);
  sqcRYGate(q, -2.622176384535158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3221375247362417, 0);
  sqcRYGate(q, -2.3173602849345376, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4074148945449725, 0);
  sqcRYGate(q, 3.000208193154709, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.534475322016611, 1);
  sqcRYGate(q, 1.8376756365048388, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7410132754605909, 1);
  sqcRYGate(q, -2.270791354176197, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.868289923073922, 0);
  sqcRYGate(q, -2.440291497946908, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5624422630559642, 0);
  sqcRYGate(q, 0.7986329825207018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4492042149932596, 2);
  sqcRYGate(q, 2.410791825676403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7445455842822382, 2);
  sqcRYGate(q, 2.9756078824739447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.43637702408590917, 0);
  sqcRYGate(q, 2.4594443612871144, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7005534611303798, 0);
  sqcRYGate(q, -2.0821622557844197, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1765683723264524, 1);
  sqcRYGate(q, 0.11448366163891478, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4987741003958197, 1);
  sqcRYGate(q, -0.6160109149616012, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2594072974458229, 0);
  sqcRYGate(q, 0.23894353668965884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6893679074586005, 0);
  sqcRYGate(q, 1.1726648628152099, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7478019443435818, 2);
  sqcRYGate(q, 2.375459993508642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.013233347851492, 2);
  sqcRYGate(q, 1.099894406611357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.202273127798633, 0);
  sqcRYGate(q, 1.4882312605406511, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6291916087623335, 0);
  sqcRYGate(q, 1.089308200480797, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7869912146243667, 1);
  sqcRYGate(q, 0.5386468200988529, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0413520695183385, 1);
  sqcRYGate(q, 2.505331873005643, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7765255226448566, 0);
  sqcRYGate(q, -1.9663409906530145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.17185030038989116, 0);
  sqcRYGate(q, -2.7291040444808408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1992947809097815, 2);
  sqcRYGate(q, -2.35990950752322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3994200599570954, 2);
  sqcRYGate(q, -2.572367977157812, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0862067725023556, 0);
  sqcRYGate(q, -1.8668380929142048, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.924190697789872, 0);
  sqcRYGate(q, 0.22793557600528747, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4178271186896196, 1);
  sqcRYGate(q, -0.16426576086910674, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8171906798841002, 1);
  sqcRYGate(q, -1.9753162999220004, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.264119463268469, 0);
  sqcRYGate(q, -1.5470507857007583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.51117313983473, 0);
  sqcRYGate(q, 1.8665535713207024, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7708923376968944, 2);
  sqcRYGate(q, 1.0329105686663764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1721198027915967, 2);
  sqcRYGate(q, -1.733785169169754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7764401737984556, 0);
  sqcRYGate(q, 1.9987506967983188, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.489929431199929, 0);
  sqcRYGate(q, -3.041262106769502, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7511570024175143, 1);
  sqcRYGate(q, -2.360494801457995, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8297790283844972, 1);
  sqcRYGate(q, 1.66183616937142, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3938090676894023, 0);
  sqcRYGate(q, 1.8544137044159648, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4787566991240073, 0);
  sqcRYGate(q, -0.7915374198161835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0132806135211654, 2);
  sqcRYGate(q, -1.130004829011515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1595068215667617, 2);
  sqcRYGate(q, 1.4962097932937057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0409573509974823, 0);
  sqcRYGate(q, -0.9579224050920275, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.229559903462766, 0);
  sqcRYGate(q, -0.17981162259067707, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.498592995397461, 1);
  sqcRYGate(q, -2.8279616467539745, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1922751309223676, 1);
  sqcRYGate(q, -0.4189587116652725, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0829716656907904, 0);
  sqcRYGate(q, -0.7129643866901283, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.519827211699191, 0);
  sqcRYGate(q, 1.5075904086890546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.116730857648692, 2);
  sqcRYGate(q, 0.2016450989612908, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7949619509994177, 2);
  sqcRYGate(q, 1.610659467487539, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9758902605538076, 0);
  sqcRYGate(q, -2.357308330752119, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.082511335317484, 0);
  sqcRYGate(q, 2.4854044556506785, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.02675342667273739, 1);
  sqcRYGate(q, 2.4465568397502024, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0291371546758432, 1);
  sqcRYGate(q, -1.3506770961433814, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.849325397620047, 0);
  sqcRYGate(q, 1.2558022974246947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8265931282465848, 0);
  sqcRYGate(q, 0.8442685323451169, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3673268050783207, 2);
  sqcRYGate(q, 1.698236319575828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.023439304876599, 2);
  sqcRYGate(q, -1.2326105181921303, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5336426732203408, 0);
  sqcRYGate(q, -2.0799880503283497, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.626348091353035, 0);
  sqcRYGate(q, -0.19566883597388962, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8421980731748189, 1);
  sqcRYGate(q, -3.0802327777125416, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1718815568894096, 1);
  sqcRYGate(q, 1.3983102644005165, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2796353862395267, 0);
  sqcRYGate(q, -0.5813711342135033, 1);
  sqcRYGate(q, 0.5402923492922067, 2);
  sqcRYGate(q, -1.8016028458514919, 3);

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
