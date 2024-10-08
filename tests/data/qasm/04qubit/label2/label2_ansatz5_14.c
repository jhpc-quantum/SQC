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

  sqcRYGate(q, -1.1444771525924973, 0);
  sqcRYGate(q, -1.1230092051139755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9897154444697271, 0);
  sqcRYGate(q, 1.2194754621688189, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.716780442374306, 2);
  sqcRYGate(q, 0.3325815178970446, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9486239938739034, 2);
  sqcRYGate(q, 2.537293595363773, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1175461754184628, 1);
  sqcRYGate(q, -1.674324921004865, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.12117783290031, 1);
  sqcRYGate(q, -2.9999182698603217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.897290200390431, 0);
  sqcRYGate(q, -2.9473047305519007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6388954561168982, 0);
  sqcRYGate(q, -3.10626275802113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7277090318808952, 2);
  sqcRYGate(q, -0.06363837795971991, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0024248936328363567, 2);
  sqcRYGate(q, 1.600255518058725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.794017644598245, 1);
  sqcRYGate(q, -2.9297939797325308, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.780422535901763, 1);
  sqcRYGate(q, -0.17954445361080484, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.32560324112489847, 0);
  sqcRYGate(q, 0.7022049001880323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6052674691623476, 0);
  sqcRYGate(q, -0.38026953786314, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.244438732585068, 2);
  sqcRYGate(q, 2.773620779585158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4736484528978941, 2);
  sqcRYGate(q, 2.3539611512772582, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.34941477222564377, 1);
  sqcRYGate(q, 2.678610852003096, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1481610688358304, 1);
  sqcRYGate(q, -0.1964393496349471, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2157724662864062, 0);
  sqcRYGate(q, 1.8362771748238478, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.557746250981959, 0);
  sqcRYGate(q, -0.8335880751796761, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4932073263774151, 2);
  sqcRYGate(q, 1.9487430773129544, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9196736141763715, 2);
  sqcRYGate(q, 2.378453930278367, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8344601320068445, 1);
  sqcRYGate(q, 0.9087668026949077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9080920227602225, 1);
  sqcRYGate(q, -1.881524781113657, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9227050735945435, 0);
  sqcRYGate(q, 2.1063315593477014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5684407234252464, 0);
  sqcRYGate(q, 0.09194091442116115, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1654216350939057, 2);
  sqcRYGate(q, 2.8835552820939836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.838418431070624, 2);
  sqcRYGate(q, 2.5843468106183045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5664244935977636, 1);
  sqcRYGate(q, 0.36314122350359623, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2213014496236614, 1);
  sqcRYGate(q, -1.3073676938088548, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3158669659511876, 0);
  sqcRYGate(q, -0.595747152871157, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7475614814538056, 0);
  sqcRYGate(q, -1.7265321582866326, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.758470456647332, 2);
  sqcRYGate(q, -1.5380862414612375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0557449732007416, 2);
  sqcRYGate(q, -2.7094768554019613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9839056099095138, 1);
  sqcRYGate(q, 1.8464846704844777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.914213973901182, 1);
  sqcRYGate(q, 1.6850811751599526, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4076368680938196, 0);
  sqcRYGate(q, -0.44894298263599236, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0902340926214196, 0);
  sqcRYGate(q, -0.669929928836016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7000047628608894, 2);
  sqcRYGate(q, 2.1966552666733676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.16297269154320837, 2);
  sqcRYGate(q, -0.3325802655440651, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.467834674934935, 1);
  sqcRYGate(q, -1.243706805640648, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.37211757536590095, 1);
  sqcRYGate(q, 2.8119495526739375, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6911937460178814, 0);
  sqcRYGate(q, 2.9256825891386975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.656630721359707, 0);
  sqcRYGate(q, -0.3398944504767175, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8436015014277252, 2);
  sqcRYGate(q, -1.0388098933899064, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1416231256689677, 2);
  sqcRYGate(q, 1.4105576487346754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.926775370487361, 1);
  sqcRYGate(q, -2.5223136620844264, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4677413669615114, 1);
  sqcRYGate(q, -0.8049540091305643, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.409031465406589, 0);
  sqcRYGate(q, -1.82236089696891, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11048714868124776, 0);
  sqcRYGate(q, 0.8822342975888534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.32472078470716603, 2);
  sqcRYGate(q, -2.4292633263441377, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7554610908245838, 2);
  sqcRYGate(q, 2.9514780766300928, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0645651968574416, 1);
  sqcRYGate(q, 2.69811257618804, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.24725416761715824, 1);
  sqcRYGate(q, -2.2742934156676062, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7717810636770723, 0);
  sqcRYGate(q, 2.580196467385807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.411739076706641, 0);
  sqcRYGate(q, -2.8473150158560734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9345770192005274, 2);
  sqcRYGate(q, 2.9554922533414776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6916970914013285, 2);
  sqcRYGate(q, 0.8871181321690775, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2188327484445418, 1);
  sqcRYGate(q, 3.1118076944084794, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.063383650063806, 1);
  sqcRYGate(q, 2.882954405344449, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.08268640991185273, 0);
  sqcRYGate(q, -2.383433527453822, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7583674758695342, 0);
  sqcRYGate(q, 0.31747904996684806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9868582374724753, 2);
  sqcRYGate(q, 1.8049551131654913, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0825160631024406, 2);
  sqcRYGate(q, 1.749356868198018, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7803753669609357, 1);
  sqcRYGate(q, -2.6344446863704256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5386154355618955, 1);
  sqcRYGate(q, -2.29253145994497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3090920154589565, 0);
  sqcRYGate(q, -2.1016755643153164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15458736335584522, 0);
  sqcRYGate(q, -1.7988483094623051, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2693432375149873, 2);
  sqcRYGate(q, 3.132061021067064, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.674288917175628, 2);
  sqcRYGate(q, 0.3232442574027976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5705947137746366, 1);
  sqcRYGate(q, 2.2465863130574037, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.850006974518401, 1);
  sqcRYGate(q, 1.8065419846333368, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1704158466783035, 0);
  sqcRYGate(q, 0.9344330452200604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.916958959770484, 0);
  sqcRYGate(q, -2.240085278380431, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7674772813216104, 2);
  sqcRYGate(q, -2.9001654466144595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8711241389114202, 2);
  sqcRYGate(q, 3.0314865661670676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.441494004097728, 1);
  sqcRYGate(q, -1.3542231586631086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8001534362774751, 1);
  sqcRYGate(q, -2.868767368021577, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.064813895915015, 0);
  sqcRYGate(q, -2.6427317294656616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.33120692850545375, 0);
  sqcRYGate(q, -1.4896723910881464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0877437731085857, 2);
  sqcRYGate(q, 0.46105027981512947, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.601388120114919, 2);
  sqcRYGate(q, -1.3444263480920542, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.002596322644129, 1);
  sqcRYGate(q, -0.9542552707525397, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.082084123814371, 1);
  sqcRYGate(q, -2.4813802243358634, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7619998351335577, 0);
  sqcRYGate(q, -1.4349930421969574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09701919787760539, 0);
  sqcRYGate(q, -2.8903910182034744, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3187541739394275, 2);
  sqcRYGate(q, 0.571953040624013, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9769743118711639, 2);
  sqcRYGate(q, 1.9520246552068574, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0058014005158924, 1);
  sqcRYGate(q, 0.4086015540650676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9304397391515745, 1);
  sqcRYGate(q, 0.8571180387325477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0784955697376066, 0);
  sqcRYGate(q, 1.9921025327917192, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.27597155065137713, 0);
  sqcRYGate(q, -2.267243753822043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8050084935453903, 2);
  sqcRYGate(q, 2.7602424410883666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.25822645016934087, 2);
  sqcRYGate(q, 1.3068127270799472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.15921435218939, 1);
  sqcRYGate(q, 2.7532194779466215, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.756753413935835, 1);
  sqcRYGate(q, -2.0435063343045363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.824824367888826, 0);
  sqcRYGate(q, -2.1130503013972146, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4647959896025702, 0);
  sqcRYGate(q, 2.2171406392070407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6838469316382287, 2);
  sqcRYGate(q, 2.936806243665557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5057690448148895, 2);
  sqcRYGate(q, 0.3802691414739163, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7672769805377335, 1);
  sqcRYGate(q, -2.631996894937719, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.899376978830933, 1);
  sqcRYGate(q, -0.6333140505222178, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.944039389298127, 0);
  sqcRYGate(q, 3.1410977183568325, 1);
  sqcRYGate(q, -3.0898084276737783, 2);
  sqcRYGate(q, -0.011386995676486043, 3);

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
