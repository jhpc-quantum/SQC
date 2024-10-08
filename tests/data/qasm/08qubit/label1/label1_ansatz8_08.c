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

  sqcRYGate(q, 2.7408717969185448, 0);
  sqcRYGate(q, 0.521631888308586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0442265741152044, 0);
  sqcRYGate(q, -0.22414294486986197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5317491168391397, 2);
  sqcRYGate(q, -1.0474647327170339, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2252727630808735, 2);
  sqcRYGate(q, 2.3412761454587394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.813475011606502, 4);
  sqcRYGate(q, 2.7774185098817306, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2378355719432874, 4);
  sqcRYGate(q, -2.1762493281581214, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6417342395462375, 6);
  sqcRYGate(q, 1.2976332933878716, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1770235964697466, 6);
  sqcRYGate(q, 0.4307563717550767, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.782615790642064, 0);
  sqcRYGate(q, -1.7007643137095112, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.857739162137296, 0);
  sqcRYGate(q, -1.9978522029274135, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3917432675825503, 2);
  sqcRYGate(q, 2.6760677170236384, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1400242397284375, 2);
  sqcRYGate(q, -2.8115532130319485, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7018545900399722, 4);
  sqcRYGate(q, -2.119796820254166, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5361906482460668, 4);
  sqcRYGate(q, 0.1545976074148081, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.05535639673616, 1);
  sqcRYGate(q, -0.4177744944240302, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.028340463977066, 1);
  sqcRYGate(q, -1.9762790536558539, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.121907337215443, 3);
  sqcRYGate(q, -0.5925862374607174, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.1483118669633088, 3);
  sqcRYGate(q, -0.7152606943361706, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9810931804956922, 5);
  sqcRYGate(q, -2.806544419365269, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.058188905545452, 5);
  sqcRYGate(q, 2.3294765989498036, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5960566413204247, 0);
  sqcRYGate(q, -0.11359363643537446, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.644669396399426, 0);
  sqcRYGate(q, -0.6145463856882225, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4443169849932778, 2);
  sqcRYGate(q, 1.6246768337439264, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0461195015759106, 2);
  sqcRYGate(q, -1.1983054267593956, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.649949096184228, 4);
  sqcRYGate(q, 2.1333089250805273, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2931473307227064, 4);
  sqcRYGate(q, -2.907968506857243, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.495917921035969, 6);
  sqcRYGate(q, -2.150592465477331, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6820157688962584, 6);
  sqcRYGate(q, 1.9631179958198812, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.193753452218827, 0);
  sqcRYGate(q, 2.424248934989484, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5992449302655074, 0);
  sqcRYGate(q, -1.073945638743788, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.489192714785827, 2);
  sqcRYGate(q, -3.115626349356571, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.954853039986932, 2);
  sqcRYGate(q, 1.6185163838145895, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1890708961420584, 4);
  sqcRYGate(q, -2.270176961828845, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4153631703581337, 4);
  sqcRYGate(q, -1.1169390754302766, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.4852703632049606, 1);
  sqcRYGate(q, 2.816950489647392, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.390458828159727, 1);
  sqcRYGate(q, -0.12408188695138019, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6229255115934818, 3);
  sqcRYGate(q, -3.0967119009627884, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.8435015354268867, 3);
  sqcRYGate(q, -0.5175851296679473, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.38736384909163, 5);
  sqcRYGate(q, 2.0993276429751107, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.000599153752852, 5);
  sqcRYGate(q, 0.008572652535810299, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1345666716617093, 0);
  sqcRYGate(q, -0.4748781176997312, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1717466286850426, 0);
  sqcRYGate(q, 0.6389666215127684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7715512002076181, 2);
  sqcRYGate(q, -2.306945789808419, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8709396147433497, 2);
  sqcRYGate(q, 2.764044760990561, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1893396214428567, 4);
  sqcRYGate(q, -1.1850251378172993, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.18682561713192, 4);
  sqcRYGate(q, 1.8039302008872211, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.830080030933182, 6);
  sqcRYGate(q, 2.8408353968011566, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.577867324818639, 6);
  sqcRYGate(q, -1.783493862327455, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8599622883810767, 0);
  sqcRYGate(q, 2.37845721218467, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.512700648327121, 0);
  sqcRYGate(q, 0.26996178945919524, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2744861617103256, 2);
  sqcRYGate(q, 0.6906644148433578, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.683103046529371, 2);
  sqcRYGate(q, -1.571038960515577, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.110218880772867, 4);
  sqcRYGate(q, 0.0093335651294077, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.46602500703920313, 4);
  sqcRYGate(q, -0.8394621434411995, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.9250937409583089, 1);
  sqcRYGate(q, 1.9246953008061713, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9285321648388054, 1);
  sqcRYGate(q, 1.9027444050411262, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2384599086162111, 3);
  sqcRYGate(q, -0.3344006120682809, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.855093764762194, 3);
  sqcRYGate(q, 0.2701898768527853, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6156965424960212, 5);
  sqcRYGate(q, -0.220485821307092, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.360564782048435, 5);
  sqcRYGate(q, -1.8669903649877893, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.9316403720395954, 0);
  sqcRYGate(q, -0.16052422672793668, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8780790098929925, 0);
  sqcRYGate(q, 2.8711173985573017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.009267947920823, 2);
  sqcRYGate(q, 1.1720327233252863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5690666383013314, 2);
  sqcRYGate(q, 2.840678812611493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.946282284477721, 4);
  sqcRYGate(q, -2.1006442079703485, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.29861093293109686, 4);
  sqcRYGate(q, 2.188965944439107, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.39006735403627485, 6);
  sqcRYGate(q, -0.31783367643998517, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.901004232188609, 6);
  sqcRYGate(q, 0.28143854354877457, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7960751359358342, 0);
  sqcRYGate(q, 1.9206674678318014, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.481550343789556, 0);
  sqcRYGate(q, 2.2463377857054576, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5071183610843222, 2);
  sqcRYGate(q, -1.3653480381945942, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.2030183502362437, 2);
  sqcRYGate(q, -0.6226409315539441, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.1963226448012305, 4);
  sqcRYGate(q, -0.3126536936165861, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.2281110044433587, 4);
  sqcRYGate(q, 1.524824967053527, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.531838065397832, 1);
  sqcRYGate(q, 1.1831780309084827, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4108104644072954, 1);
  sqcRYGate(q, -0.7282488019403005, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1262990840768614, 3);
  sqcRYGate(q, 1.9098679112448969, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.9431270383805037, 3);
  sqcRYGate(q, 0.09426879765200535, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.5726190477667044, 5);
  sqcRYGate(q, 0.17169776915094123, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.1894766074038663, 5);
  sqcRYGate(q, -3.126770542216805, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.44021580826588, 0);
  sqcRYGate(q, 0.7718254908919822, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2762389768747595, 0);
  sqcRYGate(q, 1.6454690293997434, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5134802790990503, 2);
  sqcRYGate(q, -1.1422680113452837, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.27091389986366005, 2);
  sqcRYGate(q, -0.45948190523346355, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.488274137552978, 4);
  sqcRYGate(q, 1.9929419838398854, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8510528687787784, 4);
  sqcRYGate(q, 2.347379935546147, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.873033345450113, 6);
  sqcRYGate(q, 0.9398725281193463, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5296160595094057, 6);
  sqcRYGate(q, -2.2225820107096794, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.27451907766159306, 0);
  sqcRYGate(q, 1.8880688639973409, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3441751306106937, 0);
  sqcRYGate(q, 0.1804759783081016, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7351608110202273, 2);
  sqcRYGate(q, -3.0878340510038766, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.0296054269464636, 2);
  sqcRYGate(q, -0.5245895136203507, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.5517397231292138, 4);
  sqcRYGate(q, -0.5065263205678612, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.136756948008025, 4);
  sqcRYGate(q, -0.9091982971858013, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.753293051870924, 1);
  sqcRYGate(q, -1.5231282989007005, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.142085925214161, 1);
  sqcRYGate(q, -0.9221316266490238, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.514229307134069, 3);
  sqcRYGate(q, 1.6034987112644918, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3574705658452864, 3);
  sqcRYGate(q, -1.203836105790868, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5244210432359426, 5);
  sqcRYGate(q, -1.912365359677931, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.053060465203809144, 5);
  sqcRYGate(q, 1.5404619098969081, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.0775876930792565, 0);
  sqcRYGate(q, 1.7507392921317617, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3647173946028157, 0);
  sqcRYGate(q, -2.218095210569173, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6161245761023444, 2);
  sqcRYGate(q, 1.3952396895050732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.174675567868457, 2);
  sqcRYGate(q, -1.5223440849946508, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22679280159990522, 4);
  sqcRYGate(q, -1.2424166724643344, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9685175350447098, 4);
  sqcRYGate(q, 2.663688015923015, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6500188569246055, 6);
  sqcRYGate(q, -2.7534244320343397, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5059479117819725, 6);
  sqcRYGate(q, 0.172292793782872, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.82031292099545, 0);
  sqcRYGate(q, -2.811204138472972, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5242541785891033, 0);
  sqcRYGate(q, 2.33894501908576, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8232418861825006, 2);
  sqcRYGate(q, -2.055990272561637, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.821748684783451, 2);
  sqcRYGate(q, -1.4567849477818768, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1721579196330838, 4);
  sqcRYGate(q, 3.0631846304678714, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2713733259209565, 4);
  sqcRYGate(q, -1.5034350478748124, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.242489856712176, 1);
  sqcRYGate(q, -2.272427555068251, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.383510603627931, 1);
  sqcRYGate(q, 2.69879793089476, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3200225790904327, 3);
  sqcRYGate(q, 1.4741847693950902, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.4863579442606039, 3);
  sqcRYGate(q, 2.141259394076013, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.6103390578918138, 5);
  sqcRYGate(q, -2.4503143240859084, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.7442367608696747, 5);
  sqcRYGate(q, 0.5389574672708921, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4317223749687564, 0);
  sqcRYGate(q, -1.9562103871584524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7495854959689118, 0);
  sqcRYGate(q, 2.787498921131644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3044458126158522, 2);
  sqcRYGate(q, 0.7048164129071764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.32334835338047796, 2);
  sqcRYGate(q, -1.8249445057086067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8313429319882069, 4);
  sqcRYGate(q, 0.5610749469504482, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7983768774377497, 4);
  sqcRYGate(q, -1.234877551399357, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5371010950224095, 6);
  sqcRYGate(q, -2.6598394403634535, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7450041533494474, 6);
  sqcRYGate(q, 2.116568469130814, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.039694103535664, 0);
  sqcRYGate(q, 0.19500781323267605, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6015319323051984, 0);
  sqcRYGate(q, -0.6880652714151815, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.353158507236971, 2);
  sqcRYGate(q, -0.7729662707652455, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.7774168483937458, 2);
  sqcRYGate(q, 1.287254516910802, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.0112979168661997, 4);
  sqcRYGate(q, -0.8967761382349139, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.826031865828244, 4);
  sqcRYGate(q, 2.524972582801413, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.011033163724387, 1);
  sqcRYGate(q, -2.9926089334848194, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.098219751033945, 1);
  sqcRYGate(q, -0.7032306197933007, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.12235854407308544, 3);
  sqcRYGate(q, -0.8834623168037625, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.2636917323310441, 3);
  sqcRYGate(q, 2.680665284801402, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7394841768337681, 5);
  sqcRYGate(q, 2.084681403599868, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.28820274524346, 5);
  sqcRYGate(q, -2.8525933266471384, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4581752956500855, 0);
  sqcRYGate(q, 1.81486154307219, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2205378225169019, 0);
  sqcRYGate(q, 0.5079058960168723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4780213008684118, 2);
  sqcRYGate(q, -0.6536789133784385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.416856068041769, 2);
  sqcRYGate(q, 1.3534178237626415, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3903455110256351, 4);
  sqcRYGate(q, 2.4379761202683983, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.006093268379402, 4);
  sqcRYGate(q, -3.1038902545737526, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.162838758701868, 6);
  sqcRYGate(q, 2.1245821519152646, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9180833608032688, 6);
  sqcRYGate(q, -0.987500261008023, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6955464527165454, 0);
  sqcRYGate(q, 2.0730809300559754, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9228532141416554, 0);
  sqcRYGate(q, -0.4160075304059725, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5814970820195109, 2);
  sqcRYGate(q, 2.523101970933799, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.079175151457947, 2);
  sqcRYGate(q, -2.039749039643677, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3000691205133743, 4);
  sqcRYGate(q, -0.9701156533864442, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5553281488811308, 4);
  sqcRYGate(q, -2.7178220363911487, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.0638592234155833, 1);
  sqcRYGate(q, 2.734205412227372, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5768277615992505, 1);
  sqcRYGate(q, 1.7781939930248285, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.39648402511761127, 3);
  sqcRYGate(q, -2.017235885175163, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1155423088962992, 3);
  sqcRYGate(q, 2.0066846543891614, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.9673996908320374, 5);
  sqcRYGate(q, -0.47910437466409384, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8809553190211608, 5);
  sqcRYGate(q, 1.0821981913870857, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.7097641960849378, 0);
  sqcRYGate(q, 0.5098360573221923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9046755336944914, 0);
  sqcRYGate(q, -2.8566090623330114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7882076587961793, 2);
  sqcRYGate(q, 0.9627402638178166, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.28572275081006326, 2);
  sqcRYGate(q, -2.5312076775247405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.468185644488905, 4);
  sqcRYGate(q, -2.516737694483869, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.782036407026119, 4);
  sqcRYGate(q, 0.3489278554113645, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2573981346774286, 6);
  sqcRYGate(q, 0.7501910015737216, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2077465431584573, 6);
  sqcRYGate(q, 2.92647482792148, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3611795759428238, 0);
  sqcRYGate(q, -0.12279807713384364, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.03736509570854438, 0);
  sqcRYGate(q, -0.26755541244446135, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.777878644042282, 2);
  sqcRYGate(q, -1.6362576362802908, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.284731534085116, 2);
  sqcRYGate(q, 2.07445745978195, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0633858849744107, 4);
  sqcRYGate(q, -2.4858106998343503, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0063030459934157, 4);
  sqcRYGate(q, -0.20732659068239265, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.8684124507464377, 1);
  sqcRYGate(q, 2.5638577456890395, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.23791743831459478, 1);
  sqcRYGate(q, 1.551678660827338, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9090922306956015, 3);
  sqcRYGate(q, -2.2508568526042487, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.367110579203852, 3);
  sqcRYGate(q, -0.151631316361311, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.05811840919776005, 5);
  sqcRYGate(q, 2.3463281097791246, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.6479634248247885, 5);
  sqcRYGate(q, -1.5233342803818395, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.805972176250749, 0);
  sqcRYGate(q, 0.9783027388812604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9302461948183727, 0);
  sqcRYGate(q, -1.3481569842541672, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7014653720593955, 2);
  sqcRYGate(q, -1.6303926648010032, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.459296962408323, 2);
  sqcRYGate(q, -0.5733330686671871, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.966065150713318, 4);
  sqcRYGate(q, 2.289984859059312, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7100931327618438, 4);
  sqcRYGate(q, 0.8172501680561503, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8123628678659331, 6);
  sqcRYGate(q, 2.689224953079283, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.335945707419428, 6);
  sqcRYGate(q, 1.979055710093026, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.372852388746174, 0);
  sqcRYGate(q, -0.7409311228263249, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3349986772664213, 0);
  sqcRYGate(q, 0.7483080716522332, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.19305687294512, 2);
  sqcRYGate(q, -2.0944116165719624, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.999140076532264, 2);
  sqcRYGate(q, 0.9842890350947562, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5293727023925308, 4);
  sqcRYGate(q, -2.9617796702059707, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.0068706438616895, 4);
  sqcRYGate(q, 0.8989525112610819, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.01682326403512935, 1);
  sqcRYGate(q, 3.1194963776800595, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6851308748010787, 1);
  sqcRYGate(q, 1.8673922199649993, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3680414398402339, 3);
  sqcRYGate(q, 0.82326389417889, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.13346133360488202, 3);
  sqcRYGate(q, -0.950894501061998, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.21574447593762958, 5);
  sqcRYGate(q, 1.9452890845334538, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.240293383059801, 5);
  sqcRYGate(q, 2.7128663174039693, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.6571438575450683, 0);
  sqcRYGate(q, -1.8166299276910927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5811806731756938, 0);
  sqcRYGate(q, -0.6976218701651988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0073289948834567, 2);
  sqcRYGate(q, 0.7611817648921981, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4340614973066459, 2);
  sqcRYGate(q, -0.2749859468841075, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5933185471907096, 4);
  sqcRYGate(q, -1.715171017451576, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3208670204000877, 4);
  sqcRYGate(q, -1.5092513318579996, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.086880597566272, 6);
  sqcRYGate(q, -2.9374899447411167, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.295313827702522, 6);
  sqcRYGate(q, -2.484930027112868, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0134517254459814, 0);
  sqcRYGate(q, 2.858336355598428, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8188196671806303, 0);
  sqcRYGate(q, -0.46439823275169123, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.766971442241581, 2);
  sqcRYGate(q, 1.5675557513628577, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5268354602375176, 2);
  sqcRYGate(q, -1.9235314933094134, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.7225162591568708, 4);
  sqcRYGate(q, 1.7562115231128823, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.6482894171741505, 4);
  sqcRYGate(q, 1.7246889790187465, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.4852455710005694, 1);
  sqcRYGate(q, 1.2499392492081782, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1712065096455493, 1);
  sqcRYGate(q, 2.7812070099683326, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2723802058292577, 3);
  sqcRYGate(q, 2.84419433953972, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.6496624059762329, 3);
  sqcRYGate(q, 0.9471350410233501, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.097499489493677, 5);
  sqcRYGate(q, -2.811451069780949, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.4689072741447327, 5);
  sqcRYGate(q, 1.746159033886537, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.9444804738454566, 0);
  sqcRYGate(q, 2.7210725645996696, 1);
  sqcRYGate(q, 1.8264024103811085, 2);
  sqcRYGate(q, -1.7775992412211528, 3);
  sqcRYGate(q, 2.8537289206179715, 4);
  sqcRYGate(q, 1.7693410050617953, 5);
  sqcRYGate(q, -1.9748825469706626, 6);
  sqcRYGate(q, 1.1603353747636138, 7);

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
