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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.09609732239232643, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.06088586113564654, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.04708127809080781, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.41808882334698416, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.41119153766578564, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.6371734805536267, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.6469400194660159, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.0035744502863837542, 0);
  sqcRZGate(q, -0.057282940385415745, 1);
  sqcRZGate(q, -0.0009397876880019795, 2);
  sqcRZGate(q, 0.052940992091553736, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.017051109472751434, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.049274949270369635, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.07472403608483728, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.5538396742915624, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.3498939706142555, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.6655039129236293, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.6396495659701973, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.04810268493981432, 0);
  sqcRZGate(q, -0.03014600745981944, 1);
  sqcRZGate(q, 0.06977084692661746, 2);
  sqcRZGate(q, 0.08625770027025191, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.05423673263669219, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.0202967999778469, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.06812958488591782, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.600551522959803, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.3671204677017257, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.7971610876924347, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.6088459577635184, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.12626246264119131, 0);
  sqcRZGate(q, -0.0898114072193399, 1);
  sqcRZGate(q, 0.10237245973836231, 2);
  sqcRZGate(q, 0.12425375734512359, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.10670220188330781, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.10511713719663113, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.14253340139978415, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.5763606038740794, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.307954935621081, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.8703900445035201, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.6284649389238128, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.008998331965085926, 0);
  sqcRZGate(q, -0.025283163904542275, 1);
  sqcRZGate(q, 0.181223439704661, 2);
  sqcRZGate(q, 0.10381828507132872, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.016598634980728867, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.274131593689446, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.3563402915251084, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.5740916620427611, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.3649178890035584, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.9276240887839988, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.6752745930932144, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.029985974604034356, 0);
  sqcRZGate(q, -0.036809475324245354, 1);
  sqcRZGate(q, 0.27043760808087425, 2);
  sqcRZGate(q, 0.08534817088466463, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.06266982250769304, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.5679826033800435, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.26246430863256875, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.6214323684620489, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.2856473124092903, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.9244793910139008, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.7630071570071313, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.15345817013535915, 0);
  sqcRZGate(q, -0.08671155567032089, 1);
  sqcRZGate(q, 0.2529873957603215, 2);
  sqcRZGate(q, 0.03477555740146138, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.14707640562926935, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.6612847874844203, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.02106739570399088, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.553799158777334, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.2932159683939745, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.9512086498460189, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.7544429029154145, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.08148188893468931, 0);
  sqcRZGate(q, -0.15259714265717686, 1);
  sqcRZGate(q, 0.21136939743739475, 2);
  sqcRZGate(q, -0.046812277498395206, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.1975945247067362, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.6622449157522483, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.08509343082118136, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.5727109831599791, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.23899097731928862, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.9765282914789558, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.7409656245333719, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.0970358797465741, 0);
  sqcRZGate(q, -0.24843654386877756, 1);
  sqcRZGate(q, 0.3334871516459381, 2);
  sqcRZGate(q, -0.01151231024808354, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3189594525821081, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.6533045289533456, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.21188563896336962, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.45897964101078553, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.027529824579727684, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.9209034016257567, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.6872653074797512, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.05084508568469971, 0);
  sqcRZGate(q, -0.229098937450189, 1);
  sqcRZGate(q, 0.3981592267820991, 2);
  sqcRZGate(q, 0.03912723219802239, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.31259439218488577, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.6647889369823955, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.19642951119454122, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.4379740344359449, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.05796345748161421, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.944277552769865, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.6952948831213239, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.0483021035486926, 0);
  sqcRZGate(q, -0.27866173889137974, 1);
  sqcRZGate(q, 0.42160992182634427, 2);
  sqcRZGate(q, 0.10632009639311045, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3924861720439896, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.7863014144130368, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.09469338945185125, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.45858603155872707, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.16401093368309852, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.7267834140399464, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.5266254363619157, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.05046250620748803, 0);
  sqcRZGate(q, -0.24800724145549005, 1);
  sqcRZGate(q, 0.3202403040636454, 2);
  sqcRZGate(q, 0.17900796049773746, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.4227586126333194, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.7622440736251752, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.17318293731428144, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.43634234228966623, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.033629019904671834, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.5444522744389548, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.44744840655873785, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.06722475838555761, 0);
  sqcRZGate(q, -0.27627415095836544, 1);
  sqcRZGate(q, 0.25899276267257015, 2);
  sqcRZGate(q, 0.22571901920259024, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.46050069505570634, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.6289889565050355, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2958550872197282, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.3629173100145973, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.2482037494012199, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.2892804660492313, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.3097611422742254, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.05970857624316199, 0);
  sqcRZGate(q, -0.3539183119319189, 1);
  sqcRZGate(q, 0.13805528706016437, 2);
  sqcRZGate(q, 0.23186118266768313, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.5581565091651006, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.5645931955396459, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.4563426211451651, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.31497364683263945, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.1956706399491252, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.018143163270158833, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.2502310108883959, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.22230761280173866, 0);
  sqcRZGate(q, -0.2838625647975362, 1);
  sqcRZGate(q, 0.042110950942335856, 2);
  sqcRZGate(q, 0.21226749047100588, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.7203655679820681, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.33501103567794965, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6725513428271045, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.04663147862513314, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.03907892677393113, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.15430014522842186, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.10712743771496874, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.257559403076515, 0);
  sqcRZGate(q, -0.2359911489569709, 1);
  sqcRZGate(q, -0.003425091808880683, 2);
  sqcRZGate(q, 0.1640629232693017, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.8650698314403703, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.16209500179267627, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.7980546362022676, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.13862211614585906, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.15372258474417969, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.270056842054159, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.03707424106478534, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.33677831003268116, 0);
  sqcRZGate(q, -0.26461285623549347, 1);
  sqcRZGate(q, 0.02484694745638375, 2);
  sqcRZGate(q, 0.19601676452426914, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.0899307744893607, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.219900705801363, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.917952735690741, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.38439189407225927, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.37341716068374603, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.5267835426806641, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.21829457664760085, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.2890916587720662, 0);
  sqcRZGate(q, -0.3385437022141267, 1);
  sqcRZGate(q, 0.03598193459454662, 2);
  sqcRZGate(q, 0.1933011012517014, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.0697157873701006, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.2450435766022839, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.7923915061924673, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.33786331124622443, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.880837545421352, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.6861379428103177, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.33415916251308875, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.34763782994907366, 0);
  sqcRZGate(q, -0.4307447914189508, 1);
  sqcRZGate(q, 0.04942316761954027, 2);
  sqcRZGate(q, 0.15914346549539019, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.1355195547216355, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.37911181611769645, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.9503459235072947, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.46491060498551057, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 1.2387680065091997, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.9188172860693641, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.459721536004972, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.3219855591412034, 0);
  sqcRZGate(q, -0.5840845005074736, 1);
  sqcRZGate(q, 0.09225445484800754, 2);
  sqcRZGate(q, -0.008361793388546894, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.4541158780224404, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.1296356958794421, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.1664730397647736, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.7082793613345333, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 1.3025936979778752, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.9007779624338836, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5152089482129648, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.21603412614517023, 0);
  sqcRZGate(q, -0.4066659685592353, 1);
  sqcRZGate(q, -0.10140720213360607, 2);
  sqcRZGate(q, -0.0023099948395527503, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.459037327559507, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.14442367368859865, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.401124188324903, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.9525218398426015, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 1.4039064667052121, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 1.000739434667881, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.8287333323318669, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.22893465855385622, 0);
  sqcRZGate(q, -0.20514099991981616, 1);
  sqcRZGate(q, -0.18625647924888253, 2);
  sqcRZGate(q, 0.027926171920417082, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.4150517586269635, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.10208756152025412, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.2381112330857853, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 1.0376373728469026, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 1.3739019252855615, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 1.1549056738654062, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9791873101050784, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.15774512722889625, 0);
  sqcRZGate(q, -0.4797114520281752, 1);
  sqcRZGate(q, -0.009524610103919393, 2);
  sqcRZGate(q, -0.20286178498279495, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.5283661030613478, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.13019243673094072, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.3743953434269975, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 1.0865961820905559, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 1.2877730538911254, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.9764562564679398, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.7035085668540875, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.22571695047292642, 0);
  sqcRZGate(q, -0.378881000196732, 1);
  sqcRZGate(q, -0.08933288957775042, 2);
  sqcRZGate(q, -0.3123509506363004, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.372960820761607, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.20770663063684522, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.540022543710596, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.8733871259237513, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 1.3274819055543368, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.8865734676689913, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9058706106335792, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.4381142889684688, 0);
  sqcRZGate(q, -0.1362220073438968, 1);
  sqcRZGate(q, -0.3376711425745848, 2);
  sqcRZGate(q, -0.12381117476459097, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.494918162319754, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.169996951493076, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.2254236077197518, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.7440582366539511, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.9399365845025812, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.8204178185804716, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9168209015372268, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.4546768508530292, 0);
  sqcRZGate(q, -0.2269871696946636, 1);
  sqcRZGate(q, -0.439162087684407, 2);
  sqcRZGate(q, -0.04956510530137865, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.475715384114866, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.012245480898875439, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.1708384065912951, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.8657492533166282, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.7046572684172162, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.6101704282483226, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5295848313899072, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.6310485321603262, 0);
  sqcRZGate(q, -0.1302093340967455, 1);
  sqcRZGate(q, -0.214921173771602, 2);
  sqcRZGate(q, -0.1433646878095682, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.283527146492717, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.03846932072791503, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.445078728818918, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.46728553435814624, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5954615261023493, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.39745638527731225, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.21669608021283482, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.6430342448655445, 0);
  sqcRZGate(q, -0.07032070321741789, 1);
  sqcRZGate(q, -0.06687949514608935, 2);
  sqcRZGate(q, -0.1771280100349906, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.2022994186713287, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.019166759699881224, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.3770149360245254, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.20150311886097885, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.15003212095732835, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.27753820496606973, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.28628145216588324, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.5262604435673076, 0);
  sqcRZGate(q, 0.06916780708317805, 1);
  sqcRZGate(q, -0.10845398489898442, 2);
  sqcRZGate(q, -0.025506977108586484, 3);

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
