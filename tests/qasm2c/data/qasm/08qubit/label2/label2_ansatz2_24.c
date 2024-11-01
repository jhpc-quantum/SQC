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

  sqcRYGate(q, 2.1337714534761654, 0);
  sqcRZGate(q, 1.324839668486515, 0);
  sqcRYGate(q, 0.19460576803963292, 1);
  sqcRZGate(q, -0.6113466611125437, 1);
  sqcRYGate(q, 2.7121704492259964, 2);
  sqcRZGate(q, -0.5892442832664662, 2);
  sqcRYGate(q, -0.13623089213066303, 3);
  sqcRZGate(q, -2.1150444476554977, 3);
  sqcRYGate(q, 1.4192168138113652, 4);
  sqcRZGate(q, -1.9447516904859112, 4);
  sqcRYGate(q, -0.4791779430433226, 5);
  sqcRZGate(q, -3.015564083681375, 5);
  sqcRYGate(q, -0.8126268284688032, 6);
  sqcRZGate(q, 1.3560636117582157, 6);
  sqcRYGate(q, -0.417058113644076, 7);
  sqcRZGate(q, -1.6062083712201405, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.4962355244458827, 0);
  sqcRZGate(q, 1.4157791362250958, 0);
  sqcRYGate(q, 2.172366034421799, 1);
  sqcRZGate(q, -1.2368119699095912, 1);
  sqcRYGate(q, -0.33423574169035897, 2);
  sqcRZGate(q, -1.671674557645698, 2);
  sqcRYGate(q, -0.5180276320413717, 3);
  sqcRZGate(q, 3.1240002769146513, 3);
  sqcRYGate(q, -0.4020469446026942, 4);
  sqcRZGate(q, -0.46375923813332287, 4);
  sqcRYGate(q, -2.5489977945108695, 5);
  sqcRZGate(q, 0.3608283803027934, 5);
  sqcRYGate(q, 2.4928823284692574, 6);
  sqcRZGate(q, 0.7138444128076848, 6);
  sqcRYGate(q, -1.8477378152982002, 7);
  sqcRZGate(q, 0.8306518908621829, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.40258979384557486, 0);
  sqcRZGate(q, -2.1684482448313807, 0);
  sqcRYGate(q, -1.1725719600804103, 1);
  sqcRZGate(q, -1.7927678903640007, 1);
  sqcRYGate(q, 0.11020585214860468, 2);
  sqcRZGate(q, 1.3717387284123648, 2);
  sqcRYGate(q, 0.34546114832303054, 3);
  sqcRZGate(q, -0.04608732028034357, 3);
  sqcRYGate(q, -0.35194499658255324, 4);
  sqcRZGate(q, -2.8296268416331687, 4);
  sqcRYGate(q, 1.70702532744426, 5);
  sqcRZGate(q, -2.602063274724729, 5);
  sqcRYGate(q, -0.27786558912576176, 6);
  sqcRZGate(q, 2.783857658999237, 6);
  sqcRYGate(q, -2.011937514501941, 7);
  sqcRZGate(q, 0.5125615556011072, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.4783170589114145, 0);
  sqcRZGate(q, -1.5588501397305305, 0);
  sqcRYGate(q, 2.349764696800425, 1);
  sqcRZGate(q, -0.9819666600160682, 1);
  sqcRYGate(q, 2.8134575490562432, 2);
  sqcRZGate(q, -0.6264184236664073, 2);
  sqcRYGate(q, -2.749151063923991, 3);
  sqcRZGate(q, 2.0559335441483237, 3);
  sqcRYGate(q, 0.21027331262730886, 4);
  sqcRZGate(q, -2.123264878503807, 4);
  sqcRYGate(q, 0.41296487709479474, 5);
  sqcRZGate(q, 1.3070832779229482, 5);
  sqcRYGate(q, -2.591878774610229, 6);
  sqcRZGate(q, 0.382599973241508, 6);
  sqcRYGate(q, 1.8100118424528402, 7);
  sqcRZGate(q, -2.729693614679153, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.9907500289025881, 0);
  sqcRZGate(q, 2.960260294739622, 0);
  sqcRYGate(q, 1.2330871148464997, 1);
  sqcRZGate(q, 0.6604786502147066, 1);
  sqcRYGate(q, -2.924107928097527, 2);
  sqcRZGate(q, 1.7265051100330888, 2);
  sqcRYGate(q, 0.9752297578558916, 3);
  sqcRZGate(q, 1.6230145165426326, 3);
  sqcRYGate(q, -1.0740379212209483, 4);
  sqcRZGate(q, -0.1409043652749915, 4);
  sqcRYGate(q, 2.2789452453144006, 5);
  sqcRZGate(q, 0.46205006273329524, 5);
  sqcRYGate(q, 1.0610435214147491, 6);
  sqcRZGate(q, -0.07171250562188725, 6);
  sqcRYGate(q, 1.7218103138773795, 7);
  sqcRZGate(q, -0.03720090640417606, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.22544500381879037, 0);
  sqcRZGate(q, 2.6610724744918235, 0);
  sqcRYGate(q, -0.4212362774824569, 1);
  sqcRZGate(q, 3.089035777716455, 1);
  sqcRYGate(q, 1.8865665052534282, 2);
  sqcRZGate(q, -0.49546452748181347, 2);
  sqcRYGate(q, 1.9486425756966144, 3);
  sqcRZGate(q, 0.7075442157091052, 3);
  sqcRYGate(q, -0.8153380808227134, 4);
  sqcRZGate(q, -2.664200471518786, 4);
  sqcRYGate(q, 2.378756704913251, 5);
  sqcRZGate(q, 0.04951027588035739, 5);
  sqcRYGate(q, -1.3970062681620825, 6);
  sqcRZGate(q, 2.6145076639440794, 6);
  sqcRYGate(q, -1.3357690623409662, 7);
  sqcRZGate(q, 0.8630124018758375, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.6982531031179144, 0);
  sqcRZGate(q, -2.1551948137000174, 0);
  sqcRYGate(q, -2.8142430347210996, 1);
  sqcRZGate(q, -1.0007641472633544, 1);
  sqcRYGate(q, 0.07956275911353305, 2);
  sqcRZGate(q, 1.7865941180617302, 2);
  sqcRYGate(q, -0.8042566201974857, 3);
  sqcRZGate(q, -1.0258597366024809, 3);
  sqcRYGate(q, -0.3826080599182112, 4);
  sqcRZGate(q, -2.4604939839155615, 4);
  sqcRYGate(q, 1.3371324990226408, 5);
  sqcRZGate(q, -0.02479881629671277, 5);
  sqcRYGate(q, 0.5429750459395972, 6);
  sqcRZGate(q, -0.6405315199552127, 6);
  sqcRYGate(q, -0.6623573515117718, 7);
  sqcRZGate(q, -0.6151464389172248, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.2105369944482245, 0);
  sqcRZGate(q, 1.9125402061981625, 0);
  sqcRYGate(q, -2.814247572319656, 1);
  sqcRZGate(q, -1.2659269888006204, 1);
  sqcRYGate(q, 0.6795231503230905, 2);
  sqcRZGate(q, 2.820967667784908, 2);
  sqcRYGate(q, -1.8478763722709897, 3);
  sqcRZGate(q, 1.3944354979885638, 3);
  sqcRYGate(q, 2.4928657036039548, 4);
  sqcRZGate(q, 0.24499048291033412, 4);
  sqcRYGate(q, -0.43615216138637436, 5);
  sqcRZGate(q, 1.8757577241041679, 5);
  sqcRYGate(q, -1.275123150680769, 6);
  sqcRZGate(q, 1.3532544856769553, 6);
  sqcRYGate(q, -0.9621315105249779, 7);
  sqcRZGate(q, 2.7441859499665795, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.1440374384819307, 0);
  sqcRZGate(q, -1.7868397793281912, 0);
  sqcRYGate(q, 2.0738723788757802, 1);
  sqcRZGate(q, 2.7231531583063893, 1);
  sqcRYGate(q, 1.1958913528786148, 2);
  sqcRZGate(q, 0.28961185392874356, 2);
  sqcRYGate(q, -0.8888099020967206, 3);
  sqcRZGate(q, -3.079471505253441, 3);
  sqcRYGate(q, -1.7416550598270697, 4);
  sqcRZGate(q, -2.7543045184758492, 4);
  sqcRYGate(q, -1.5317876009719562, 5);
  sqcRZGate(q, -2.273492805764562, 5);
  sqcRYGate(q, -1.9122661359870579, 6);
  sqcRZGate(q, 2.5048404824039934, 6);
  sqcRYGate(q, 0.07271971259864962, 7);
  sqcRZGate(q, 2.4018049851590044, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.770761265530114, 0);
  sqcRZGate(q, -1.8772590965963865, 0);
  sqcRYGate(q, 1.8946480690780794, 1);
  sqcRZGate(q, -2.028960196863376, 1);
  sqcRYGate(q, 0.9387818139360506, 2);
  sqcRZGate(q, 2.9512724137397233, 2);
  sqcRYGate(q, -0.47725163480249366, 3);
  sqcRZGate(q, -2.0943560715597176, 3);
  sqcRYGate(q, -2.4436191972494528, 4);
  sqcRZGate(q, 2.0099795978392807, 4);
  sqcRYGate(q, 2.268504035239705, 5);
  sqcRZGate(q, -1.0885498277518286, 5);
  sqcRYGate(q, -1.2670307738440965, 6);
  sqcRZGate(q, 2.7925004709756593, 6);
  sqcRYGate(q, 2.506804176995107, 7);
  sqcRZGate(q, -0.7614981757513191, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.3367070682160432, 0);
  sqcRZGate(q, 2.2357311921719454, 0);
  sqcRYGate(q, 0.6379387724864006, 1);
  sqcRZGate(q, -2.061077214960718, 1);
  sqcRYGate(q, 0.11378687085705685, 2);
  sqcRZGate(q, -2.034102898048439, 2);
  sqcRYGate(q, 2.2902732088879096, 3);
  sqcRZGate(q, -1.692237536358392, 3);
  sqcRYGate(q, 2.3097532491254853, 4);
  sqcRZGate(q, 1.6952467109511398, 4);
  sqcRYGate(q, -0.7467078368179045, 5);
  sqcRZGate(q, -0.2077486519589833, 5);
  sqcRYGate(q, 1.4883835499043803, 6);
  sqcRZGate(q, -1.4660371983846938, 6);
  sqcRYGate(q, 2.8730132029631923, 7);
  sqcRZGate(q, 0.8163605762141053, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.2957787030196242, 0);
  sqcRZGate(q, -2.2771185347095164, 0);
  sqcRYGate(q, 0.7936778981487187, 1);
  sqcRZGate(q, -1.9928988320976702, 1);
  sqcRYGate(q, -2.3080662918239043, 2);
  sqcRZGate(q, -0.28068354474931567, 2);
  sqcRYGate(q, -1.2396796843973634, 3);
  sqcRZGate(q, 1.2094824088457647, 3);
  sqcRYGate(q, 0.579440671858063, 4);
  sqcRZGate(q, -0.48586635542549667, 4);
  sqcRYGate(q, 2.410150476143537, 5);
  sqcRZGate(q, 1.712224823853834, 5);
  sqcRYGate(q, 1.6236756982480465, 6);
  sqcRZGate(q, 2.9489908714438346, 6);
  sqcRYGate(q, 1.4942284858235002, 7);
  sqcRZGate(q, 1.0451231915368302, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.43317221626333974, 0);
  sqcRZGate(q, 2.5776581730112067, 0);
  sqcRYGate(q, 0.6278367815113857, 1);
  sqcRZGate(q, -2.9430318186042537, 1);
  sqcRYGate(q, -0.5156784215684924, 2);
  sqcRZGate(q, 2.2373429253714976, 2);
  sqcRYGate(q, 0.9641562776515799, 3);
  sqcRZGate(q, -1.2506435476677593, 3);
  sqcRYGate(q, -2.015925568913077, 4);
  sqcRZGate(q, 0.07486069136503204, 4);
  sqcRYGate(q, -1.1302860523996596, 5);
  sqcRZGate(q, 0.9442904144391349, 5);
  sqcRYGate(q, 0.31607187381039026, 6);
  sqcRZGate(q, 1.2145129831319041, 6);
  sqcRYGate(q, -0.5582338615157478, 7);
  sqcRZGate(q, 0.5355346511850527, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.2470930708517747, 0);
  sqcRZGate(q, 1.67660504981024, 0);
  sqcRYGate(q, 0.7010870356418613, 1);
  sqcRZGate(q, 2.416953624600616, 1);
  sqcRYGate(q, -0.8555661702211008, 2);
  sqcRZGate(q, 0.8546757326204304, 2);
  sqcRYGate(q, -1.9140701189051805, 3);
  sqcRZGate(q, 0.6921370438595558, 3);
  sqcRYGate(q, 1.5703755484086872, 4);
  sqcRZGate(q, 1.6906360555302384, 4);
  sqcRYGate(q, -2.5286827701798393, 5);
  sqcRZGate(q, -2.6226469698442108, 5);
  sqcRYGate(q, -2.4936680671569778, 6);
  sqcRZGate(q, 1.3439883669634523, 6);
  sqcRYGate(q, 1.5241925241813536, 7);
  sqcRZGate(q, -2.4955310951775576, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.7942344332864284, 0);
  sqcRZGate(q, 0.19445863065044475, 0);
  sqcRYGate(q, -0.5396742956530973, 1);
  sqcRZGate(q, 1.212441634741225, 1);
  sqcRYGate(q, -1.8645965431506373, 2);
  sqcRZGate(q, 1.977722084201685, 2);
  sqcRYGate(q, 0.755938566424021, 3);
  sqcRZGate(q, 0.645782871788762, 3);
  sqcRYGate(q, 0.5093590580408208, 4);
  sqcRZGate(q, 2.278301764765477, 4);
  sqcRYGate(q, -2.0232794146237953, 5);
  sqcRZGate(q, -1.1320066588166824, 5);
  sqcRYGate(q, 3.0168851767596125, 6);
  sqcRZGate(q, -0.9128722047792531, 6);
  sqcRYGate(q, -1.4231026096351984, 7);
  sqcRZGate(q, 2.3669593977636083, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.628343549583669, 0);
  sqcRZGate(q, 1.825424077888905, 0);
  sqcRYGate(q, -0.901405614854208, 1);
  sqcRZGate(q, -0.39513397836790093, 1);
  sqcRYGate(q, 1.946879711413565, 2);
  sqcRZGate(q, 2.3415355450285866, 2);
  sqcRYGate(q, -0.9920580908424341, 3);
  sqcRZGate(q, -1.6547639405227512, 3);
  sqcRYGate(q, -1.9744585920294293, 4);
  sqcRZGate(q, -0.2976780402367663, 4);
  sqcRYGate(q, -1.4757430260459228, 5);
  sqcRZGate(q, -3.1087795098574182, 5);
  sqcRYGate(q, 1.9544791057218847, 6);
  sqcRZGate(q, -3.053648742882748, 6);
  sqcRYGate(q, 2.286662232207655, 7);
  sqcRZGate(q, 1.5160044516649611, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.846707060006236, 0);
  sqcRZGate(q, 1.8650697187330225, 0);
  sqcRYGate(q, -0.7569859100002763, 1);
  sqcRZGate(q, -0.9221924019883074, 1);
  sqcRYGate(q, -2.883787558564234, 2);
  sqcRZGate(q, 0.5154095050579184, 2);
  sqcRYGate(q, -0.8767490992299998, 3);
  sqcRZGate(q, 1.3449092522613926, 3);
  sqcRYGate(q, 1.9083700135187591, 4);
  sqcRZGate(q, -2.6842522375581765, 4);
  sqcRYGate(q, -2.840862747465328, 5);
  sqcRZGate(q, -1.937377772704841, 5);
  sqcRYGate(q, -2.7838919408322305, 6);
  sqcRZGate(q, -1.0780289546134716, 6);
  sqcRYGate(q, 1.457615257419469, 7);
  sqcRZGate(q, -2.797175253933475, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.1951969405420309, 0);
  sqcRZGate(q, 1.420016654124641, 0);
  sqcRYGate(q, -2.3087199895983943, 1);
  sqcRZGate(q, 1.674239199875463, 1);
  sqcRYGate(q, -1.9050881233636645, 2);
  sqcRZGate(q, -1.3567060622332123, 2);
  sqcRYGate(q, 1.8651070338715625, 3);
  sqcRZGate(q, 0.3252329293155058, 3);
  sqcRYGate(q, 1.6973587604757832, 4);
  sqcRZGate(q, -1.6337530527106638, 4);
  sqcRYGate(q, 2.7896365072373928, 5);
  sqcRZGate(q, 1.0352057063460531, 5);
  sqcRYGate(q, -2.1777153795630895, 6);
  sqcRZGate(q, 1.24982564594753, 6);
  sqcRYGate(q, 0.7162110136055883, 7);
  sqcRZGate(q, -0.9983623694017286, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.6905646985686382, 0);
  sqcRZGate(q, 1.1542098046886444, 0);
  sqcRYGate(q, 2.090709700033263, 1);
  sqcRZGate(q, -2.049943056841469, 1);
  sqcRYGate(q, 2.1954819404815593, 2);
  sqcRZGate(q, -2.486656235619253, 2);
  sqcRYGate(q, -0.8810733225589918, 3);
  sqcRZGate(q, -0.9927796748890252, 3);
  sqcRYGate(q, -1.4129877726216922, 4);
  sqcRZGate(q, 0.6016070161904938, 4);
  sqcRYGate(q, 2.3829301219046544, 5);
  sqcRZGate(q, -1.3428755335173923, 5);
  sqcRYGate(q, -1.7544888023289291, 6);
  sqcRZGate(q, 2.7512326312808066, 6);
  sqcRYGate(q, -2.640038489519267, 7);
  sqcRZGate(q, 1.6504833220000164, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.213880086735309, 0);
  sqcRZGate(q, -0.04308983253738223, 0);
  sqcRYGate(q, 2.9401103640105197, 1);
  sqcRZGate(q, 0.7549403519986261, 1);
  sqcRYGate(q, -2.4568372122589115, 2);
  sqcRZGate(q, -0.9454685232349112, 2);
  sqcRYGate(q, -2.081625280651779, 3);
  sqcRZGate(q, 2.5061558741315872, 3);
  sqcRYGate(q, 2.2723298660429405, 4);
  sqcRZGate(q, 0.02554957388026935, 4);
  sqcRYGate(q, 2.598992798102738, 5);
  sqcRZGate(q, -2.161989853925723, 5);
  sqcRYGate(q, -2.5135955745714433, 6);
  sqcRZGate(q, 1.214682691570979, 6);
  sqcRYGate(q, -0.07385993697045379, 7);
  sqcRZGate(q, 1.4549952857430748, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.150827285275133, 0);
  sqcRZGate(q, -1.1369802174256165, 0);
  sqcRYGate(q, 0.6852211301268296, 1);
  sqcRZGate(q, 0.4520346628940777, 1);
  sqcRYGate(q, -2.0506256501429814, 2);
  sqcRZGate(q, 2.943361033036983, 2);
  sqcRYGate(q, 2.209980003511047, 3);
  sqcRZGate(q, 0.031137717902495865, 3);
  sqcRYGate(q, 0.828793897551197, 4);
  sqcRZGate(q, 0.8032955056204099, 4);
  sqcRYGate(q, 2.024044626281989, 5);
  sqcRZGate(q, 3.0841983884310005, 5);
  sqcRYGate(q, 2.0495477008581298, 6);
  sqcRZGate(q, -0.8122312803545587, 6);
  sqcRYGate(q, 1.5491399195203046, 7);
  sqcRZGate(q, 0.19537041568063862, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.7444738955594286, 0);
  sqcRZGate(q, -2.7379436384977085, 0);
  sqcRYGate(q, 0.5452851546177963, 1);
  sqcRZGate(q, 0.9694749970226156, 1);
  sqcRYGate(q, -1.5053552630663445, 2);
  sqcRZGate(q, 1.8877641762641129, 2);
  sqcRYGate(q, -1.5782069147972027, 3);
  sqcRZGate(q, 0.9156903209512972, 3);
  sqcRYGate(q, -0.5667066595350825, 4);
  sqcRZGate(q, 0.5356726174863295, 4);
  sqcRYGate(q, -1.783383395477707, 5);
  sqcRZGate(q, 1.1735519074779162, 5);
  sqcRYGate(q, -0.7333820998632241, 6);
  sqcRZGate(q, -0.04414520710934867, 6);
  sqcRYGate(q, 2.1191816516586286, 7);
  sqcRZGate(q, -2.5460262122802835, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.8924062946319995, 0);
  sqcRZGate(q, 1.9354332337077198, 0);
  sqcRYGate(q, 0.5117885849717981, 1);
  sqcRZGate(q, -1.5670173535758556, 1);
  sqcRYGate(q, 1.5429389599553731, 2);
  sqcRZGate(q, 2.606215872376959, 2);
  sqcRYGate(q, -2.797826626291346, 3);
  sqcRZGate(q, -0.3449303870228002, 3);
  sqcRYGate(q, -2.067170763466511, 4);
  sqcRZGate(q, -2.260496637290478, 4);
  sqcRYGate(q, -1.465300402892476, 5);
  sqcRZGate(q, -0.4420306761291613, 5);
  sqcRYGate(q, 0.6253151485445159, 6);
  sqcRZGate(q, -0.9613397301533712, 6);
  sqcRYGate(q, -1.833681799940782, 7);
  sqcRZGate(q, 2.8108869721620486, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.8449446643871923, 0);
  sqcRZGate(q, 0.11173495283962165, 0);
  sqcRYGate(q, 0.23559747088877372, 1);
  sqcRZGate(q, -2.8867012405036885, 1);
  sqcRYGate(q, 2.1687087836077987, 2);
  sqcRZGate(q, 1.7175295451234731, 2);
  sqcRYGate(q, 2.846390923922681, 3);
  sqcRZGate(q, -1.2387033911206646, 3);
  sqcRYGate(q, 1.184501100349876, 4);
  sqcRZGate(q, 2.3426403137074905, 4);
  sqcRYGate(q, 0.9099108786164454, 5);
  sqcRZGate(q, -1.90727158687584, 5);
  sqcRYGate(q, 2.474613058011118, 6);
  sqcRZGate(q, 1.9003417216666332, 6);
  sqcRYGate(q, 2.3617605201493457, 7);
  sqcRZGate(q, -2.5440440505412316, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.567984390114326, 0);
  sqcRZGate(q, -2.611042455168412, 0);
  sqcRYGate(q, -1.66775098794559, 1);
  sqcRZGate(q, -2.8423160286983684, 1);
  sqcRYGate(q, -2.24675444412508, 2);
  sqcRZGate(q, 0.3357446073661902, 2);
  sqcRYGate(q, -2.1620623898865974, 3);
  sqcRZGate(q, -0.12618184360386392, 3);
  sqcRYGate(q, -0.431426109141851, 4);
  sqcRZGate(q, 2.9375553655560735, 4);
  sqcRYGate(q, 0.46806139830625165, 5);
  sqcRZGate(q, -1.7565127824794917, 5);
  sqcRYGate(q, -1.1803514049375035, 6);
  sqcRZGate(q, 0.9979946545826105, 6);
  sqcRYGate(q, -2.3200065300106845, 7);
  sqcRZGate(q, 2.717288697779268, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.0550148103390073, 0);
  sqcRZGate(q, 1.7458528419301977, 0);
  sqcRYGate(q, -1.844986883747179, 1);
  sqcRZGate(q, -0.4815397911934889, 1);
  sqcRYGate(q, -0.9102638052577426, 2);
  sqcRZGate(q, -0.27095979667151215, 2);
  sqcRYGate(q, 0.21275013425573874, 3);
  sqcRZGate(q, 1.7457345545537288, 3);
  sqcRYGate(q, -2.8767585623498086, 4);
  sqcRZGate(q, 1.1293138261387954, 4);
  sqcRYGate(q, 1.5233954372040697, 5);
  sqcRZGate(q, 1.5173137468864812, 5);
  sqcRYGate(q, 0.11025028653209412, 6);
  sqcRZGate(q, 1.7647351475615733, 6);
  sqcRYGate(q, 2.420644996883983, 7);
  sqcRZGate(q, 0.1700532856799341, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.1293847454738728, 0);
  sqcRZGate(q, -1.6825883195836988, 0);
  sqcRYGate(q, -2.0634158927562063, 1);
  sqcRZGate(q, 1.836083856317901, 1);
  sqcRYGate(q, -2.5661739255484153, 2);
  sqcRZGate(q, -2.161077044040054, 2);
  sqcRYGate(q, -0.8110429896028499, 3);
  sqcRZGate(q, 1.8355528124635843, 3);
  sqcRYGate(q, 0.22395475777445592, 4);
  sqcRZGate(q, -1.8847996263751141, 4);
  sqcRYGate(q, -1.12320765002107, 5);
  sqcRZGate(q, 0.7664719667775337, 5);
  sqcRYGate(q, -2.3211347141097924, 6);
  sqcRZGate(q, -0.6913673320702384, 6);
  sqcRYGate(q, 1.5131325348270408, 7);
  sqcRZGate(q, 2.2953725391056166, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.18849520581366352, 0);
  sqcRZGate(q, -1.1420703118188336, 0);
  sqcRYGate(q, -2.335688633484909, 1);
  sqcRZGate(q, -1.1189496236573437, 1);
  sqcRYGate(q, -2.8259471622176098, 2);
  sqcRZGate(q, -1.6619703958677263, 2);
  sqcRYGate(q, -0.04845886180427872, 3);
  sqcRZGate(q, -2.6665650264613543, 3);
  sqcRYGate(q, -2.143693082211375, 4);
  sqcRZGate(q, 1.9393057574313808, 4);
  sqcRYGate(q, -0.1062377651809756, 5);
  sqcRZGate(q, -2.7385203773756657, 5);
  sqcRYGate(q, -1.626286900265277, 6);
  sqcRZGate(q, 2.108538713088116, 6);
  sqcRYGate(q, 0.2981363163716168, 7);
  sqcRZGate(q, 0.20595033272748617, 7);

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
