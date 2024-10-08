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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.061162706342421706, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.05601037397166856, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.0980529227411777, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.046954628049436814, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.05970588503652021, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.030435326201179017, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.06932359075160635, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.08472796113307456, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.02612447440711488, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.09621708394396962, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.05560513510137946, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.71921282337146, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.0901541177552076, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.08150571628721351, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.15457164500604137, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.8756501218171573, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.6767663169580227, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.7403390337612575, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.5667368623762715, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.17519641161776695, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.44253207882137224, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.5287886655985423, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.9088572698880218, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.11331052255416661, 0);
  sqcRZGate(q, -0.22927560624165474, 1);
  sqcRZGate(q, -0.2562421327349426, 2);
  sqcRZGate(q, -0.3619106373328137, 3);
  sqcRZGate(q, -0.26309172844580675, 4);
  sqcRZGate(q, 0.08620510839845892, 5);
  sqcRZGate(q, -0.16523404562868924, 6);
  sqcRZGate(q, -0.20398327832508126, 7);
  sqcRZGate(q, -0.0674532029861164, 8);
  sqcRZGate(q, -0.09712998467028114, 9);
  sqcRZGate(q, 0.168217426358887, 10);
  sqcRZGate(q, -0.14751751800704252, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.26462642217949095, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.30267585843774975, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.08146470333485567, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.23276500424615548, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.5598315869773056, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.23279178755574645, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.047965451451843916, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.09119598455210487, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.15382698860968302, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.1259598002863209, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.14295664015949922, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.7887642577318434, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.08285826858745308, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.08043499770156266, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.407465488919639, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.5580394664083218, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.5199325550330881, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.45446752675220486, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.5667147611144956, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.23485744082722554, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.5989593667960816, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.7657615729031716, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.6897174080521317, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.21169253410357416, 0);
  sqcRZGate(q, -0.1729946166928094, 1);
  sqcRZGate(q, -0.15461107601360652, 2);
  sqcRZGate(q, 0.0624883361804751, 3);
  sqcRZGate(q, -0.3120877601922535, 4);
  sqcRZGate(q, -0.032238436178263864, 5);
  sqcRZGate(q, -0.19063102949397107, 6);
  sqcRZGate(q, -0.3865995537511583, 7);
  sqcRZGate(q, 0.003982474975157159, 8);
  sqcRZGate(q, -0.10555232334760989, 9);
  sqcRZGate(q, 0.03697257918315167, 10);
  sqcRZGate(q, -0.1698150301389121, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.27353296378342223, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.16176070272458806, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.15780553705521938, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.3440258795909082, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -1.1858726153764234, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.2689984108637436, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.1096695545703565, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.03786160053836323, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.2850386777887921, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.08175061668835885, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.07267809728706957, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.7219210365364134, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.11138122692577766, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.18939466017348033, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.24988746896308192, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.6945556081767534, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.3742482176074001, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.28882322788352444, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.4219852772002442, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.5870697059814607, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.414218771727776, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.9990255661226558, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.4690156758418013, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.032905365022031216, 0);
  sqcRZGate(q, -0.16538205062387745, 1);
  sqcRZGate(q, -0.1931132749676497, 2);
  sqcRZGate(q, 0.13041031561059174, 3);
  sqcRZGate(q, -0.6451739149814598, 4);
  sqcRZGate(q, -0.1007000326444329, 5);
  sqcRZGate(q, 0.21536865807069952, 6);
  sqcRZGate(q, -0.5604564641661847, 7);
  sqcRZGate(q, 0.02825162709693802, 8);
  sqcRZGate(q, -0.11478893104672863, 9);
  sqcRZGate(q, -0.32659713372566834, 10);
  sqcRZGate(q, -0.24273865424323662, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.05797978071596786, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.11370496540673701, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.04215067574308742, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.3797252531992377, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.5269211375361663, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.14688931726782062, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.33395546418655153, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.10394334789463226, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.2814195266796501, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.09106878725720503, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.014029312681429963, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.5472967719195462, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.34795453935640974, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.21662017860333022, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3283601436929968, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.6640426835545081, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.5252370152932244, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.21280630103748735, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.15087832936423187, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.5346483306448068, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.42091349616300716, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.8106228277390131, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.5848519240105505, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.16992403873828182, 0);
  sqcRZGate(q, -0.10326172079580796, 1);
  sqcRZGate(q, -0.1845388401990946, 2);
  sqcRZGate(q, 0.10021794877050617, 3);
  sqcRZGate(q, -0.13692842319294368, 4);
  sqcRZGate(q, 0.1518189596323887, 5);
  sqcRZGate(q, -0.19374105512953455, 6);
  sqcRZGate(q, -0.5503527620326063, 7);
  sqcRZGate(q, 0.002577052568177885, 8);
  sqcRZGate(q, -0.07965168755408499, 9);
  sqcRZGate(q, -0.295770433771122, 10);
  sqcRZGate(q, -0.23507385072579737, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.3360474219107656, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.19196587327302606, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.014070840294772078, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.21779417634663836, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.5973986347766951, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.4719585363286843, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.5530913604716166, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.019061274127314728, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.5261265658864682, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.22404843030654897, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.5473744871700184, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4192362482716007, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.32867489811125616, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.45073599597503416, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.35683234787188295, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.3624691142154274, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.4124925517857881, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.05087006803183317, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.630636170782985, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.17624103544758205, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.15688966710941946, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.5026736690253215, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.5270755348141939, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.15279096012373417, 0);
  sqcRZGate(q, -0.06855439876616977, 1);
  sqcRZGate(q, 0.07578470984837012, 2);
  sqcRZGate(q, 0.18592184215485716, 3);
  sqcRZGate(q, -0.03874104643278441, 4);
  sqcRZGate(q, -0.07215687783948323, 5);
  sqcRZGate(q, -0.4555779963928127, 6);
  sqcRZGate(q, -0.05636289700955641, 7);
  sqcRZGate(q, 0.0529592444655011, 8);
  sqcRZGate(q, -0.1663069810979388, 9);
  sqcRZGate(q, -0.01691434631883385, 10);
  sqcRZGate(q, -0.01055243822599296, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.24974745825293315, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.19677318476095765, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.09357356586336245, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.04647230693857543, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.3598350969960388, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.04816238681609184, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.07393069583298507, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.28263283055724686, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.6294046247717856, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.08049304653826232, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.31025521301516923, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.3651969946544871, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.15510091739306753, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.44220301546406077, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.22847123628905136, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.031548718396507594, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.5822161897781589, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.03434041865573851, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.3105732092732834, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.27262344623701823, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.20038990388836447, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.5900634424571457, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.5626102153849362, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.054337179592947836, 0);
  sqcRZGate(q, 0.0086813465717522, 1);
  sqcRZGate(q, 0.08050634384333119, 2);
  sqcRZGate(q, 0.11615962013892953, 3);
  sqcRZGate(q, 0.10077750491181843, 4);
  sqcRZGate(q, 0.06572057377786886, 5);
  sqcRZGate(q, -0.47197818955509313, 6);
  sqcRZGate(q, 0.2659351113190034, 7);
  sqcRZGate(q, 0.036701643384139115, 8);
  sqcRZGate(q, -0.1430928177891167, 9);
  sqcRZGate(q, 0.09287845765625581, 10);
  sqcRZGate(q, 0.06410222685903827, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.017978968954369463, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.23564394393329058, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.0410632505057786, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.02214074886763509, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.305441955276072, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.3841340530927132, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.012798739866412666, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.20730529695837546, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.3327833041028159, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.03483107971222412, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.06724123770031049, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4325295004642137, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.2596930222417581, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.49920398419472156, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.04962068028598134, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.3179467226311261, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.32842890561921023, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.16003098190249823, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.15137294144077998, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.46436002504258905, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.5623284135702175, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.6984897455735037, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.4103497781486236, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.16472100402986445, 0);
  sqcRZGate(q, -0.012384508479428758, 1);
  sqcRZGate(q, -0.126556838314412, 2);
  sqcRZGate(q, 0.08681558904737223, 3);
  sqcRZGate(q, 0.3356641266372631, 4);
  sqcRZGate(q, 0.09383106300644506, 5);
  sqcRZGate(q, -0.34219658804892616, 6);
  sqcRZGate(q, 0.5815379284096657, 7);
  sqcRZGate(q, 0.09952624868046135, 8);
  sqcRZGate(q, 0.29871246455175965, 9);
  sqcRZGate(q, 0.0722067595506871, 10);
  sqcRZGate(q, 0.05338565140583457, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.12464568637861449, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.45773123312367753, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.1493369233122103, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.015490660952339239, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.00957997492297459, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.10629997235512574, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.02622073649416159, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.5027638137292162, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.107405395880097, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.003089932226285352, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.43872093343102697, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2620352491192868, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.3011443842345437, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.6708516086552906, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.046114723286296816, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.12021140558504621, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.22092334294717902, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.32940069185832854, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.07734602598895218, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.2539096963370353, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.5660591594048051, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.7156380210452193, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.09563627486649572, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.22701986683042896, 0);
  sqcRZGate(q, -0.04468254923963098, 1);
  sqcRZGate(q, -0.2747742326899282, 2);
  sqcRZGate(q, 0.1718817371233533, 3);
  sqcRZGate(q, 0.4136722299395791, 4);
  sqcRZGate(q, 0.07810336496528103, 5);
  sqcRZGate(q, -0.0006216104919060245, 6);
  sqcRZGate(q, 0.7571068936885732, 7);
  sqcRZGate(q, 0.25393850502441473, 8);
  sqcRZGate(q, 0.523965490706506, 9);
  sqcRZGate(q, -0.19758180940109132, 10);
  sqcRZGate(q, 0.0469442270997729, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.04485734142578067, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.03346373739955678, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.139538779604138, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.1254181231376055, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.13593407187253623, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.283718324743808, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.03573118165967243, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.3083335278499093, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.07921567283036687, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.01688253018954613, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.48247294203375424, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2862941656139467, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.3075258645650155, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.7941431949070796, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.1448429016189607, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.009473378447822256, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.0948953003549502, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.20373357430863942, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.06795861484471083, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.29601730575629587, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.6988447439694302, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.5112732550012095, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.1571792273949315, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.4162501526629053, 0);
  sqcRZGate(q, -0.06311535470512589, 1);
  sqcRZGate(q, 0.01621389064074708, 2);
  sqcRZGate(q, 0.30083205948633096, 3);
  sqcRZGate(q, 0.4347003898909568, 4);
  sqcRZGate(q, 0.25660256820943844, 5);
  sqcRZGate(q, 0.14457774805025284, 6);
  sqcRZGate(q, 0.8250888451104075, 7);
  sqcRZGate(q, 0.4433319593481917, 8);
  sqcRZGate(q, 0.038708901811376394, 9);
  sqcRZGate(q, -0.177804093291057, 10);
  sqcRZGate(q, 0.07442257386884957, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.4452359661582867, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.05581674548317232, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.015933900803721163, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.17100098291644117, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.04927787169748332, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.2452743936054897, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.01856371684925549, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.4780311971806101, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.40242420560322534, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.5520556730099596, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.26154754092044635, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4742688992824788, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.06044472276238915, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.9750549086972311, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.22463689262938932, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.04309913677579435, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.07465278972465736, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.10584381024739573, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.022720720859737257, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.4342893676541513, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.004365351296204333, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.3189119653588334, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.02482971654341501, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.41190283919950993, 0);
  sqcRZGate(q, 0.2220280000459704, 1);
  sqcRZGate(q, 0.5333133427004539, 2);
  sqcRZGate(q, 0.17838629783405602, 3);
  sqcRZGate(q, 0.4976264169034879, 4);
  sqcRZGate(q, 0.11698534428553639, 5);
  sqcRZGate(q, 0.3090468073329209, 6);
  sqcRZGate(q, 0.32916695929773965, 7);
  sqcRZGate(q, 0.20858254888386124, 8);
  sqcRZGate(q, -0.18261921946789722, 9);
  sqcRZGate(q, 0.14077561102539268, 10);
  sqcRZGate(q, 0.08442155400961592, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.8371008627379772, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.40242513839497707, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.041071579487577545, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.20197992493456807, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.006954218452256312, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.2026905682339299, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.4402351388171587, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 1.1141297021215808, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.42787844872745295, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.6262221380014683, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.19101660587432198, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4829104937486651, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.6171395251307804, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.2705102681821826, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2048519603700284, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.02609239455376957, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.04439811534274423, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.6491425315716713, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.008271071057401675, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.29689475398701903, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.007941549043707691, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.3502939366083291, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.09754452479630908, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.5585990821183603, 0);
  sqcRZGate(q, -0.0825633652184153, 1);
  sqcRZGate(q, 0.23587512117587747, 2);
  sqcRZGate(q, 0.29958046497753515, 3);
  sqcRZGate(q, 0.4128764477295821, 4);
  sqcRZGate(q, 0.1817467848128034, 5);
  sqcRZGate(q, 0.6743985283589649, 6);
  sqcRZGate(q, 0.46397489299945643, 7);
  sqcRZGate(q, 0.27577029357217525, 8);
  sqcRZGate(q, 0.6515050994519026, 9);
  sqcRZGate(q, 0.026701055720005567, 10);
  sqcRZGate(q, -0.08388283436239453, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.38347369953841576, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.20785260438771702, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.3137900544044784, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.3454503884657066, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.188781750483802, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.1872026396467024, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.14017599457227403, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.7153098519850504, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.9919491905806234, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.8192901116462095, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.2669116771774245, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.6838589230622225, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.8198390860333606, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.03452436198088278, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.4372176348395609, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.06773724968055256, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.09263090936119257, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.30554653697012885, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.3180711160833746, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.695615383903727, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.002221730382765114, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.6954486050053009, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.013614425844455586, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.19903837177244638, 0);
  sqcRZGate(q, -0.002610376744037751, 1);
  sqcRZGate(q, 0.33284071459005543, 2);
  sqcRZGate(q, -0.03257430149836424, 3);
  sqcRZGate(q, 0.0030293873420283203, 4);
  sqcRZGate(q, 0.4375531732514826, 5);
  sqcRZGate(q, 0.8097174894940571, 6);
  sqcRZGate(q, -0.06719093086491588, 7);
  sqcRZGate(q, 0.4698971783162327, 8);
  sqcRZGate(q, 0.30670005025205027, 9);
  sqcRZGate(q, -0.17157894038454968, 10);
  sqcRZGate(q, -0.16325180520747318, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.18970139774144668, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.15455072429510847, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3531761900221678, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.41123254308204626, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.877322461132843, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.24448209739889448, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.16130431778776858, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.0028327106775568483, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 1.452687819773236, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.09267935784890777, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.5327298629404317, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.40655655006927394, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.5556000558150972, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.627679478127936, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.5780085010147403, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.04006097238540037, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.022584995236087275, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.541576818342724, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.46235825239998246, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -1.108788460106726, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.0010182835899238201, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.056808187984128775, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.1819217666784512, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.16666324532583135, 0);
  sqcRZGate(q, -0.028321255378140144, 1);
  sqcRZGate(q, 0.39898647899166856, 2);
  sqcRZGate(q, 0.14939705212710827, 3);
  sqcRZGate(q, -0.05635497697102858, 4);
  sqcRZGate(q, 0.5110641994849648, 5);
  sqcRZGate(q, 0.797243515839821, 6);
  sqcRZGate(q, 0.024827630813314624, 7);
  sqcRZGate(q, 0.8132915978145422, 8);
  sqcRZGate(q, -0.05839766438430104, 9);
  sqcRZGate(q, 0.11518515617382001, 10);
  sqcRZGate(q, 0.2786674052330703, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3979914488537777, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.01067827436010528, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.668049424631868, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.029382906451063076, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.8982816820841396, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.19764875302703871, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.08244060137543739, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.19751693702872997, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.5449744383815063, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.7987128171790797, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.7253221595129233, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.24639418302587107, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.14834943456766747, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.7422178277138104, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.22696368629105607, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.32411438916300517, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.12248532768049351, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -1.101521601103222, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.0011996893924824258, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -1.4640670157180804, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -1.0114173385300476, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 1.3905704433297423, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.8854065524408303, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.18150606522750443, 0);
  sqcRZGate(q, -0.04253685853745401, 1);
  sqcRZGate(q, 0.17431214582321977, 2);
  sqcRZGate(q, 0.59626815532581, 3);
  sqcRZGate(q, -0.1022912896307727, 4);
  sqcRZGate(q, 0.36564590678538883, 5);
  sqcRZGate(q, 1.2732430084274933, 6);
  sqcRZGate(q, -0.034067724920845005, 7);
  sqcRZGate(q, -0.15861638081309115, 8);
  sqcRZGate(q, 0.04809474543077781, 9);
  sqcRZGate(q, 0.1130518274747591, 10);
  sqcRZGate(q, 0.9955055036444186, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.4662841483918319, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.6566483754736354, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.8302254748301126, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.36721332837396836, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.35093787417014227, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.023034782801079564, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.1916628529209919, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.14937225272538213, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.010909668923006459, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.5722630190467523, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.7531658310236006, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.045343643521315605, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.8237678846230675, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.506019698746174, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.06297980332673767, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.0312745680991879, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.36014884581801315, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.744789701889799, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 1.9902443151754814, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.31962424919428306, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.702439662887342, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -0.72769070316284, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.7575661851330434, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.23200810908944206, 0);
  sqcRZGate(q, -0.1398501979596965, 1);
  sqcRZGate(q, -0.013858846637373424, 2);
  sqcRZGate(q, 1.121134092393428, 3);
  sqcRZGate(q, 0.022418953199811187, 4);
  sqcRZGate(q, 0.004852352388942345, 5);
  sqcRZGate(q, 0.648153539681367, 6);
  sqcRZGate(q, 0.006469542819964685, 7);
  sqcRZGate(q, 0.27048964190601416, 8);
  sqcRZGate(q, -0.24364101082168904, 9);
  sqcRZGate(q, -0.001194528483930011, 10);
  sqcRZGate(q, 0.8259995761382914, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.4106149746154055, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.4436519659218934, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.0741407514296354, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.2805694481433626, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.17519626877608882, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.2537317573844681, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.02507373859585217, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.27856728350652615, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.1394859946599765, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.04624747789173421, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.620098168587601, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, -1.5396796472069387, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.17185078457112374, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.5861952521807487, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.00571542117995873, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.40196119800815516, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.2642009579383051, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.05160426760287705, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.5630222183289411, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.9307601497628039, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.1530369327103371, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -0.8640440329092476, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 1.5736362152153314, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.05929914647430502, 0);
  sqcRZGate(q, 0.13601208209768134, 1);
  sqcRZGate(q, 0.020577722687865348, 2);
  sqcRZGate(q, 1.3112337226546837, 3);
  sqcRZGate(q, -0.0016873657455968838, 4);
  sqcRZGate(q, 0.3220009188494396, 5);
  sqcRZGate(q, 0.43633004928869284, 6);
  sqcRZGate(q, 0.010369908031122036, 7);
  sqcRZGate(q, 0.10089792997292608, 8);
  sqcRZGate(q, 0.227686376490381, 9);
  sqcRZGate(q, 0.010475032501952263, 10);
  sqcRZGate(q, 0.22108026479566942, 11);

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
