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

  sqcRYGate(q, -0.38383856557326945, 0);
  sqcRYGate(q, -0.43634194546366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5487174708118037, 0);
  sqcRYGate(q, 2.479289544703612, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6844345079714051, 0);
  sqcRYGate(q, -3.041010131903525, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5332759367622324, 0);
  sqcRYGate(q, -1.9504977044601581, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.932815949490137, 0);
  sqcRYGate(q, -3.044953365117068, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6938814814375214, 0);
  sqcRYGate(q, 2.8430641128070637, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.098136771070896, 0);
  sqcRYGate(q, -2.486676511288871, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 2.8062519067435843, 0);
  sqcRYGate(q, 0.9878079882981158, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 0.7158190129325561, 0);
  sqcRYGate(q, 0.4588906590092865, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 0.1307165781067683, 0);
  sqcRYGate(q, 2.486608812108376, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 2.395106088184616, 0);
  sqcRYGate(q, -1.8971559206083741, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -2.0826021695657158, 0);
  sqcRYGate(q, 0.8067599198204531, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -0.21111813307930652, 0);
  sqcRYGate(q, 1.4056479139212057, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -1.0840984485995162, 0);
  sqcRYGate(q, 1.6878990884910294, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 1.084261700376154, 1);
  sqcRYGate(q, 0.9663306074451761, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3399321325321172, 1);
  sqcRYGate(q, -1.6776506311846142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9153444277077205, 1);
  sqcRYGate(q, 1.1177803253031167, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1228111479188563, 1);
  sqcRYGate(q, 1.9971491469626157, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.000508182297687, 1);
  sqcRYGate(q, -3.117947385601017, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 1.6335929617009373, 1);
  sqcRYGate(q, 0.7499752973807278, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -2.9913051359358973, 1);
  sqcRYGate(q, -2.252914118321094, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 2.5631185053597707, 1);
  sqcRYGate(q, 1.3163908831373803, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -2.3349914509821286, 1);
  sqcRYGate(q, -1.0146766507363365, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -1.1570771827607222, 1);
  sqcRYGate(q, -0.6598193821087844, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 2.181895281247199, 1);
  sqcRYGate(q, -0.1842995889839978, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -1.0563475468334156, 1);
  sqcRYGate(q, -2.7113635068936133, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 0.23292909083799646, 2);
  sqcRYGate(q, -1.6484575712200202, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2680175460856513, 2);
  sqcRYGate(q, -2.983136432072227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.105351248219518, 2);
  sqcRYGate(q, 2.284178317948011, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6018312162340056, 2);
  sqcRYGate(q, -0.3611502946631516, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0408032423217952, 2);
  sqcRYGate(q, 0.05641560076310019, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.966620437278298, 2);
  sqcRYGate(q, 0.6966994507458715, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.42900195981781675, 2);
  sqcRYGate(q, -0.13799094787503388, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -1.52999153286428, 2);
  sqcRYGate(q, 2.182138053084053, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 1.4994847297866538, 2);
  sqcRYGate(q, -1.6383604054640568, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -0.7731900237671222, 2);
  sqcRYGate(q, -1.2063874435001796, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -0.8596718908976877, 3);
  sqcRYGate(q, -3.0010180599312006, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.298474421358598, 3);
  sqcRYGate(q, 2.6360657958300036, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.50718303477108, 3);
  sqcRYGate(q, 3.0758321856586264, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.8760604248641393, 3);
  sqcRYGate(q, 2.990171880879946, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.811904305518592, 3);
  sqcRYGate(q, -1.3438906214192405, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 2.310384839634748, 3);
  sqcRYGate(q, -3.1143679307379624, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -2.0751472061067946, 3);
  sqcRYGate(q, -2.0497635252541464, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 2.98832258210643, 3);
  sqcRYGate(q, 1.3278970087219524, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 3.112363838224781, 4);
  sqcRYGate(q, 1.2236471467457015, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.737169706307836, 4);
  sqcRYGate(q, 1.8515105439525958, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.112787866523912, 4);
  sqcRYGate(q, 2.6014431232829507, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.33756971736973096, 4);
  sqcRYGate(q, -2.2825948326182814, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.007546736235362, 4);
  sqcRYGate(q, -1.156982804799964, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.4316316278740593, 4);
  sqcRYGate(q, 1.1850719241915633, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.0061435897205646, 5);
  sqcRYGate(q, -0.8999396470833867, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.32316519797554794, 5);
  sqcRYGate(q, 3.085912035985209, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9525558064892499, 5);
  sqcRYGate(q, -1.9592713800415371, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4999272519054168, 5);
  sqcRYGate(q, -0.7064125458977115, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.3865909151442587, 6);
  sqcRYGate(q, 2.299644546912435, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3569361273777633, 6);
  sqcRYGate(q, -1.863575034672172, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0690071568984347, 0);
  sqcRYGate(q, -1.6608844329933528, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11735120285635059, 0);
  sqcRYGate(q, 0.84032713290801, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9141222859754663, 0);
  sqcRYGate(q, -2.463957659761611, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.79957519655539, 0);
  sqcRYGate(q, 0.9502437387157849, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.003447569634079, 0);
  sqcRYGate(q, 2.9578968349759953, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.049311747282456, 0);
  sqcRYGate(q, -0.32567330687977625, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6101155449801693, 0);
  sqcRYGate(q, -0.6008985379049205, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -2.5187894240594964, 0);
  sqcRYGate(q, -0.7641480374241328, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -2.2152417869727388, 0);
  sqcRYGate(q, 2.431099801000796, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 1.975511170079114, 0);
  sqcRYGate(q, -0.4047821555696025, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -2.291526685086867, 0);
  sqcRYGate(q, -1.3740329685071417, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 1.4162932787378386, 0);
  sqcRYGate(q, 0.5879507931435537, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 1.1087418420373538, 0);
  sqcRYGate(q, 2.2467151594735215, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 1.7665281653190004, 0);
  sqcRYGate(q, 2.8372411549274372, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -2.1651715894236236, 1);
  sqcRYGate(q, 1.203087644745467, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6784465904092617, 1);
  sqcRYGate(q, -0.95710811043367, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2558940233970874, 1);
  sqcRYGate(q, 1.5973445594857114, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9955648264850216, 1);
  sqcRYGate(q, -1.834261940611639, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1747769809182813, 1);
  sqcRYGate(q, -1.0867447024980539, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -0.844529191746223, 1);
  sqcRYGate(q, 1.8707958337047659, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -2.62804655287832, 1);
  sqcRYGate(q, -2.1984831193784826, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 0.5309308814733891, 1);
  sqcRYGate(q, 1.0677162039136154, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 0.501274351726177, 1);
  sqcRYGate(q, 3.030460944592352, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 2.5192874189905186, 1);
  sqcRYGate(q, 1.7526659596036032, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 1.4680119635718967, 1);
  sqcRYGate(q, 0.7801188931123277, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 1.4517438768876278, 1);
  sqcRYGate(q, 1.267369178891359, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 0.10120475877413194, 2);
  sqcRYGate(q, -1.1550881387669036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0052253091259113, 2);
  sqcRYGate(q, 2.498984751570482, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7582612108553181, 2);
  sqcRYGate(q, 2.7897085002345254, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.8476342325898425, 2);
  sqcRYGate(q, 1.7861529884059768, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7989224540495794, 2);
  sqcRYGate(q, 1.4400570366692824, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.1596163462413447, 2);
  sqcRYGate(q, -0.908936744132439, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.8825155130411969, 2);
  sqcRYGate(q, 0.6460648089777619, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 2.526776381523071, 2);
  sqcRYGate(q, -2.166852740120455, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -2.0075073741874987, 2);
  sqcRYGate(q, -2.383163607641369, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 0.22494543220310703, 2);
  sqcRYGate(q, 0.6471021810439321, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -1.134383279659679, 3);
  sqcRYGate(q, -1.0289797317566967, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5414119658550176, 3);
  sqcRYGate(q, 0.7388879740605248, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9497466029222584, 3);
  sqcRYGate(q, -3.105552389819485, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.26123773526663, 3);
  sqcRYGate(q, 1.666390058440179, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.16355905370944124, 3);
  sqcRYGate(q, -2.7629682006030594, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 2.1709632667887417, 3);
  sqcRYGate(q, 0.345175063015667, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 2.9361099949077065, 3);
  sqcRYGate(q, -0.5261658947483762, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 1.0530905658902459, 3);
  sqcRYGate(q, -2.0928229502268096, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 1.6486276694891204, 4);
  sqcRYGate(q, 0.3810693206815757, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.565756474956514, 4);
  sqcRYGate(q, 0.8531255629067037, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3788780815561763, 4);
  sqcRYGate(q, -2.955845938410796, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.6140489966553826, 4);
  sqcRYGate(q, 0.9449030785720105, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.583853504375902, 4);
  sqcRYGate(q, -1.9155165856095393, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.8406417603719896, 4);
  sqcRYGate(q, 2.206704609393677, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.453749547031479, 5);
  sqcRYGate(q, 2.4576653803341317, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5721991445772439, 5);
  sqcRYGate(q, 2.073727673525698, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.16477423042930184, 5);
  sqcRYGate(q, -2.9862930015108256, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.8599275268750769, 5);
  sqcRYGate(q, -1.565822035807976, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.599348665073741, 6);
  sqcRYGate(q, 0.9886668605256155, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5485202637975646, 6);
  sqcRYGate(q, -1.758481529641257, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.658448971097525, 0);
  sqcRYGate(q, -2.8676854888603573, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7994884814370082, 0);
  sqcRYGate(q, -2.834776868738445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8777700745809833, 0);
  sqcRYGate(q, 1.2818734658733741, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.600860664128362, 0);
  sqcRYGate(q, -1.0685150136741282, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.317929943517972, 0);
  sqcRYGate(q, 2.513307970195438, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7388600933695122, 0);
  sqcRYGate(q, 1.6891842818701415, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.126064907848515, 0);
  sqcRYGate(q, 2.4377371152123475, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -2.9867186211276384, 0);
  sqcRYGate(q, 0.002550473969878176, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 2.9793535290757607, 0);
  sqcRYGate(q, 1.3775444459779864, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -2.883270447091239, 0);
  sqcRYGate(q, -1.4609024787000573, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 1.4925968802721683, 0);
  sqcRYGate(q, 0.4879331800533411, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 2.483335884684167, 0);
  sqcRYGate(q, -1.4098223877200784, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -1.149280705403948, 0);
  sqcRYGate(q, 2.0687051106906824, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 1.980168441394333, 0);
  sqcRYGate(q, -1.7284298205935036, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -0.44399444354191436, 1);
  sqcRYGate(q, 1.578531994813577, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1186178929327093, 1);
  sqcRYGate(q, -0.5495992242189187, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9493764058934004, 1);
  sqcRYGate(q, 1.7392891176289789, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.096703105282728, 1);
  sqcRYGate(q, 2.850179154253121, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9080084834919167, 1);
  sqcRYGate(q, -2.2382949283198847, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 2.322257490199573, 1);
  sqcRYGate(q, -2.8911409657016773, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -2.8370846322909795, 1);
  sqcRYGate(q, -1.7164654964723676, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -2.8289661619590003, 1);
  sqcRYGate(q, -0.3145703623243632, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 0.353402402559575, 1);
  sqcRYGate(q, 0.328638392146277, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 1.8058480402823316, 1);
  sqcRYGate(q, 1.8304339589631002, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -0.1659377892788676, 1);
  sqcRYGate(q, 2.5644354338197366, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 2.0005455294573338, 1);
  sqcRYGate(q, -0.8107065050925315, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -2.3524633371392962, 2);
  sqcRYGate(q, 2.451136465201477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.16678471434521125, 2);
  sqcRYGate(q, 0.3586267808780814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.590462870649746, 2);
  sqcRYGate(q, 1.9016716676611738, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.8691251595486378, 2);
  sqcRYGate(q, 2.8067662660843404, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.719298615536325, 2);
  sqcRYGate(q, -2.4377168561011118, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.5330229852495882, 2);
  sqcRYGate(q, 0.7960420340274564, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.4171832505905502, 2);
  sqcRYGate(q, 0.13957101702709007, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 1.2526042697240103, 2);
  sqcRYGate(q, 0.8927170820145909, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 0.5718445157443321, 2);
  sqcRYGate(q, -0.8559817819597174, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -3.0559777951477494, 2);
  sqcRYGate(q, -2.1614695657359846, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 0.7137001592545795, 3);
  sqcRYGate(q, 2.3177920636436116, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.214468888136108, 3);
  sqcRYGate(q, 0.19857004601749928, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3990158980384568, 3);
  sqcRYGate(q, -2.716309150898483, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2492477718520494, 3);
  sqcRYGate(q, -1.5638134030461404, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.27426763687256, 3);
  sqcRYGate(q, -1.9267154375116244, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -2.6289442930084768, 3);
  sqcRYGate(q, -2.8107423346041753, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -0.473376215152426, 3);
  sqcRYGate(q, -2.861114190722732, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 1.125398438655381, 3);
  sqcRYGate(q, 0.04580228909012262, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -1.7131850432192994, 4);
  sqcRYGate(q, -1.1751688752306564, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6784030876528209, 4);
  sqcRYGate(q, 1.8715527264531788, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3570621864649415, 4);
  sqcRYGate(q, 2.526083647433661, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.9081452253012374, 4);
  sqcRYGate(q, -0.24703481552717585, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.32647500154778175, 4);
  sqcRYGate(q, 0.8704786514246061, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.0272323999723993, 4);
  sqcRYGate(q, 0.12947565748209655, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.8540540927361648, 5);
  sqcRYGate(q, 0.12451636550901223, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.09509619194648, 5);
  sqcRYGate(q, -0.5160768682827818, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.975741635413646, 5);
  sqcRYGate(q, -2.717909007502797, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.16918446436772427, 5);
  sqcRYGate(q, 1.262873417964717, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.33441625804037, 6);
  sqcRYGate(q, 2.625785678540371, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8447851013437093, 6);
  sqcRYGate(q, 0.7795697623978611, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.442701515793813, 0);
  sqcRYGate(q, -0.9407997805660253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6962010044683489, 0);
  sqcRYGate(q, -2.9610227842846353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4965198281339758, 0);
  sqcRYGate(q, 0.9877143367912617, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.826375227105859, 0);
  sqcRYGate(q, -0.2566757707457894, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7412813217751093, 0);
  sqcRYGate(q, -0.06646594851855259, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5152536456172303, 0);
  sqcRYGate(q, 1.9338709202010973, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3779369744406917, 0);
  sqcRYGate(q, -1.7844208940968231, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 1.8461639590027286, 0);
  sqcRYGate(q, -1.3397096548358371, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 1.3209086722260857, 0);
  sqcRYGate(q, 1.5438048349895173, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 2.660970957646332, 0);
  sqcRYGate(q, -2.612649193159837, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 2.198380249624025, 0);
  sqcRYGate(q, 1.3444886423040077, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -2.933860916043848, 0);
  sqcRYGate(q, -3.114253076959896, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -2.4998232931715907, 0);
  sqcRYGate(q, -0.3560004060028816, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -0.17481510251195018, 0);
  sqcRYGate(q, -2.641755277753021, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -0.2000699340341364, 1);
  sqcRYGate(q, 2.8433749818488145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.019232154037171028, 1);
  sqcRYGate(q, -1.7076985176503587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.990530819219346, 1);
  sqcRYGate(q, 1.1387359580321075, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4422157793541484, 1);
  sqcRYGate(q, 0.07156772932472677, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1701561846974846, 1);
  sqcRYGate(q, 2.889216624659407, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -0.9679766770758507, 1);
  sqcRYGate(q, -2.6283226356641562, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 1.0059987047484444, 1);
  sqcRYGate(q, -1.9553919068493775, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -1.8431136544359732, 1);
  sqcRYGate(q, 1.7691253439856487, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 0.4012850887297396, 1);
  sqcRYGate(q, -0.4874465526266935, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -1.9831128418599542, 1);
  sqcRYGate(q, 1.3582341755374343, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -1.4313666123923405, 1);
  sqcRYGate(q, 0.588296414766627, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -1.7235352303010592, 1);
  sqcRYGate(q, -2.36917462715825, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -1.454696294243, 2);
  sqcRYGate(q, -0.8790656342159826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5045510760458966, 2);
  sqcRYGate(q, -1.3209017573790496, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.338130838412009, 2);
  sqcRYGate(q, -3.069259391391628, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1559941240726674, 2);
  sqcRYGate(q, -2.377628487024018, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9740681471603168, 2);
  sqcRYGate(q, 2.1120083566244396, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.8208939219808005, 2);
  sqcRYGate(q, 0.13459138424793507, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.5771183497528032, 2);
  sqcRYGate(q, -0.07125958547551738, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 1.8609473587302876, 2);
  sqcRYGate(q, 1.331803859740072, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 1.2219539701354059, 2);
  sqcRYGate(q, -2.900499513763504, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -1.5467700692710373, 2);
  sqcRYGate(q, 2.736348738886141, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -2.757207432019315, 3);
  sqcRYGate(q, -2.1497195967017664, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7277423741442806, 3);
  sqcRYGate(q, -1.6735264028362238, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9139040762599637, 3);
  sqcRYGate(q, 1.2209828020661186, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.091073270819671, 3);
  sqcRYGate(q, -2.017770179518174, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.0547373145680297, 3);
  sqcRYGate(q, 2.86124035659424, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 1.5719914149762273, 3);
  sqcRYGate(q, 0.5819001834090055, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -1.7060559718875945, 3);
  sqcRYGate(q, -2.429654953238529, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 1.591604837028013, 3);
  sqcRYGate(q, -1.2119650648497473, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 1.6120729202386312, 4);
  sqcRYGate(q, 2.9797482943719897, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.24790227556839017, 4);
  sqcRYGate(q, 0.4895718551579815, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.630605196160822, 4);
  sqcRYGate(q, -1.466468192165691, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.0115881219755756, 4);
  sqcRYGate(q, 3.0659174410078784, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.0131076591191466, 4);
  sqcRYGate(q, -2.4989446312652226, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.3418702981793116, 4);
  sqcRYGate(q, 2.5782229276606308, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.1820372321500443, 5);
  sqcRYGate(q, -2.3382848097317805, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.35891165209798337, 5);
  sqcRYGate(q, 1.7790816646158427, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2608967279265899, 5);
  sqcRYGate(q, -0.06810772053061571, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.790287789331467, 5);
  sqcRYGate(q, 0.29752867136045413, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7813745646068906, 6);
  sqcRYGate(q, -1.0562081180871221, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.1865720412845649, 6);
  sqcRYGate(q, 1.1828422376055707, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.420911426134643, 0);
  sqcRYGate(q, 1.9813829590050016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1267954898684933, 0);
  sqcRYGate(q, 2.323073268433316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.761008256536467, 0);
  sqcRYGate(q, 2.146811155854115, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0470310868352226, 0);
  sqcRYGate(q, 1.257806618070517, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4870885479397874, 0);
  sqcRYGate(q, 2.483081175757829, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1501366145913248, 0);
  sqcRYGate(q, 0.37066145550180596, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.72298965530572, 0);
  sqcRYGate(q, 2.295227954763346, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -0.3072342055452957, 0);
  sqcRYGate(q, -1.692864481447013, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 0.7973633401384388, 0);
  sqcRYGate(q, 1.314336328595078, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -0.20062437379628673, 0);
  sqcRYGate(q, 2.885685256337752, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 0.08892840809930558, 0);
  sqcRYGate(q, 2.503720340538485, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 1.613847202019012, 0);
  sqcRYGate(q, 0.37199300681725916, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -0.9270689322245959, 0);
  sqcRYGate(q, -2.681679133111693, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 0.8423991778524513, 0);
  sqcRYGate(q, -2.625303025881802, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 1.120604179055266, 1);
  sqcRYGate(q, -3.0550031134426097, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7346715015516178, 1);
  sqcRYGate(q, -1.7236744772604728, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7822788827613307, 1);
  sqcRYGate(q, -0.5496771319057646, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.32021004232879857, 1);
  sqcRYGate(q, -2.1763610130586772, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2762370365306186, 1);
  sqcRYGate(q, 0.6722935224900597, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 2.050539997496309, 1);
  sqcRYGate(q, -0.8988780762683823, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 1.5499861266492276, 1);
  sqcRYGate(q, 2.518100034203776, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 1.3874409616358214, 1);
  sqcRYGate(q, 2.06175334727957, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -0.6013800423965474, 1);
  sqcRYGate(q, -1.6753432992586939, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 0.5763511461568918, 1);
  sqcRYGate(q, 0.2590915465657182, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -3.01378336350482, 1);
  sqcRYGate(q, 3.0526758833118164, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 2.651628403784069, 1);
  sqcRYGate(q, 0.7743569030263817, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -1.821209848063261, 2);
  sqcRYGate(q, 2.0145650213934383, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3992272736436067, 2);
  sqcRYGate(q, 3.134380139990533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0319977372612477, 2);
  sqcRYGate(q, 1.9121199451264246, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.627837497791766, 2);
  sqcRYGate(q, -2.9033663097407927, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.438953784815348, 2);
  sqcRYGate(q, 0.94052967621709, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.08305959018009813, 2);
  sqcRYGate(q, 0.44272490008648896, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.4284111121728331, 2);
  sqcRYGate(q, 0.3747400554649947, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 0.033406234036258, 2);
  sqcRYGate(q, 1.054045340895501, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 3.0898440255575492, 2);
  sqcRYGate(q, -0.1900931532863419, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -1.6235293065127605, 2);
  sqcRYGate(q, 1.8484954425669962, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -1.6015556527008084, 3);
  sqcRYGate(q, 0.8276806656088608, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.354022899237682, 3);
  sqcRYGate(q, 1.239281378558461, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.327971100779916, 3);
  sqcRYGate(q, 2.7540430971304555, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2923058087859465, 3);
  sqcRYGate(q, 0.16303924971585637, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9252459236346142, 3);
  sqcRYGate(q, -2.356343870662075, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -3.054217990225371, 3);
  sqcRYGate(q, -1.8500146463799105, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 1.7459671741877987, 3);
  sqcRYGate(q, -0.4397206130450589, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -1.1937815406201802, 3);
  sqcRYGate(q, -3.0823593414405503, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 2.9174957086994757, 4);
  sqcRYGate(q, -2.8567009041449083, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.113860142227498, 4);
  sqcRYGate(q, 2.8344340301922393, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1161056121662005, 4);
  sqcRYGate(q, 0.39023614316079214, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.107192561950922, 4);
  sqcRYGate(q, -1.4960326747598656, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.564469413468223, 4);
  sqcRYGate(q, -2.4391138242322383, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.7231829661855214, 4);
  sqcRYGate(q, -0.08812815462632263, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.4051583776161658, 5);
  sqcRYGate(q, -0.21886665181135642, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6881928615502888, 5);
  sqcRYGate(q, 1.2928363287771383, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.926061634832598, 5);
  sqcRYGate(q, 2.767639083017943, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.9514853121650084, 5);
  sqcRYGate(q, 1.3985427431915625, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.9201100358688032, 6);
  sqcRYGate(q, 2.876272348908007, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7453075390643007, 6);
  sqcRYGate(q, 1.4078838850500883, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.983415563966904, 0);
  sqcRYGate(q, 2.283940023329605, 1);
  sqcRYGate(q, -3.1054942802852863, 2);
  sqcRYGate(q, -1.621740673694643, 3);
  sqcRYGate(q, -1.9080481770964965, 4);
  sqcRYGate(q, -2.5044329155634375, 5);
  sqcRYGate(q, 2.395283887962925, 6);
  sqcRYGate(q, -2.5997310179038147, 7);

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
