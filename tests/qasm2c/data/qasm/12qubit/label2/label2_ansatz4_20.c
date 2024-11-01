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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.451035222247971, 0);
  sqcRZGate(q, 0.41439882114926263, 0);
  sqcRYGate(q, 1.278549218306282, 1);
  sqcRZGate(q, 2.5332217465938567, 1);
  sqcRYGate(q, -3.140668867639474, 2);
  sqcRZGate(q, 0.33920872379869316, 2);
  sqcRYGate(q, 0.0003553861766641343, 3);
  sqcRZGate(q, 0.5720984514657577, 3);
  sqcRYGate(q, -1.5725910095609874, 4);
  sqcRZGate(q, 2.9722698753668046, 4);
  sqcRYGate(q, 1.5641557442825933, 5);
  sqcRZGate(q, 0.34710102365157536, 5);
  sqcRYGate(q, 0.0008125313023219505, 6);
  sqcRZGate(q, 1.4646009715058748, 6);
  sqcRYGate(q, -3.140827973303051, 7);
  sqcRZGate(q, -0.7253243154481623, 7);
  sqcRYGate(q, 0.0017833838705296756, 8);
  sqcRZGate(q, 2.9559424939809054, 8);
  sqcRYGate(q, 0.0018776162965518858, 9);
  sqcRZGate(q, -0.749992233076421, 9);
  sqcRYGate(q, -1.5739287798666743, 10);
  sqcRZGate(q, -0.031010823138882596, 10);
  sqcRYGate(q, -1.5689671797717593, 11);
  sqcRZGate(q, -2.655625509159345, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.5111078329327023, 0);
  sqcRZGate(q, 0.1736599616144998, 0);
  sqcRYGate(q, 0.44833396103737183, 1);
  sqcRZGate(q, -0.1360474156624996, 1);
  sqcRYGate(q, -3.12910587400484, 2);
  sqcRZGate(q, 2.588878275782047, 2);
  sqcRYGate(q, 3.090285178227716, 3);
  sqcRZGate(q, -1.3236591726292986, 3);
  sqcRYGate(q, 2.7380252418052744, 4);
  sqcRZGate(q, -2.312885455193758, 4);
  sqcRYGate(q, -0.4500944730595444, 5);
  sqcRZGate(q, 1.1168127444381484, 5);
  sqcRYGate(q, -3.1403022937046954, 6);
  sqcRZGate(q, -1.8139059154919095, 6);
  sqcRYGate(q, -0.019520291763287286, 7);
  sqcRZGate(q, 2.1372598549771507, 7);
  sqcRYGate(q, -1.2071782275122045, 8);
  sqcRZGate(q, -2.3456089236395905, 8);
  sqcRYGate(q, 0.4021347578891685, 9);
  sqcRZGate(q, 2.3783181670803786, 9);
  sqcRYGate(q, 2.952733582874187, 10);
  sqcRZGate(q, 3.002999571544422, 10);
  sqcRYGate(q, 1.2544991400532242, 11);
  sqcRZGate(q, 0.4708251309367881, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.9847583005164458, 0);
  sqcRZGate(q, 2.009276303192511, 0);
  sqcRYGate(q, 0.02253315318511362, 1);
  sqcRZGate(q, 2.2548124754938073, 1);
  sqcRYGate(q, 3.1406189208712076, 2);
  sqcRZGate(q, 1.9544549901664707, 2);
  sqcRYGate(q, -0.0007086709134356455, 3);
  sqcRZGate(q, 3.0800292125362065, 3);
  sqcRYGate(q, -3.0876122912874755, 4);
  sqcRZGate(q, 1.3985782649285499, 4);
  sqcRYGate(q, -0.00867399682503045, 5);
  sqcRZGate(q, -2.547866696408038, 5);
  sqcRYGate(q, 0.0031725746286666023, 6);
  sqcRZGate(q, -1.0522103125078015, 6);
  sqcRYGate(q, 3.141111458812778, 7);
  sqcRZGate(q, -2.245940687902874, 7);
  sqcRYGate(q, -0.014212954955843383, 8);
  sqcRZGate(q, 2.9454740721942296, 8);
  sqcRYGate(q, -3.1240255684616125, 9);
  sqcRZGate(q, 2.435118653895257, 9);
  sqcRYGate(q, -3.139625238118386, 10);
  sqcRZGate(q, -1.3865944426542356, 10);
  sqcRYGate(q, 0.0046699442816777025, 11);
  sqcRZGate(q, -1.807750753716011, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.4632554386970738, 0);
  sqcRZGate(q, 0.18416120045067785, 0);
  sqcRYGate(q, 1.8413113802106307, 1);
  sqcRZGate(q, -1.7053353668461098, 1);
  sqcRYGate(q, 1.7933411013658747, 2);
  sqcRZGate(q, 1.8468376921993181, 2);
  sqcRYGate(q, 1.5095329996831033, 3);
  sqcRZGate(q, 2.2657193862871576, 3);
  sqcRYGate(q, -2.2688465683543373, 4);
  sqcRZGate(q, 1.700771414451726, 4);
  sqcRYGate(q, 3.0161214543945536, 5);
  sqcRZGate(q, 0.4129142261735374, 5);
  sqcRYGate(q, 3.1104612718431652, 6);
  sqcRZGate(q, -1.9994746182893435, 6);
  sqcRYGate(q, 3.125352092718815, 7);
  sqcRZGate(q, 0.18213449406684032, 7);
  sqcRYGate(q, -2.75610120094667, 8);
  sqcRZGate(q, 2.319067937539795, 8);
  sqcRYGate(q, -2.0205031083728993, 9);
  sqcRZGate(q, -0.5476673500550086, 9);
  sqcRYGate(q, 2.890025701537073, 10);
  sqcRZGate(q, 1.571482714419389, 10);
  sqcRYGate(q, -2.891148444860462, 11);
  sqcRZGate(q, -1.5071666511864876, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.0773996548674694, 0);
  sqcRZGate(q, -1.7685608334188192, 0);
  sqcRYGate(q, -2.692845885022474, 1);
  sqcRZGate(q, -2.1108006521362146, 1);
  sqcRYGate(q, -0.054073605577585226, 2);
  sqcRZGate(q, -0.323163520364047, 2);
  sqcRYGate(q, 0.20318883459358617, 3);
  sqcRZGate(q, -2.826910639333778, 3);
  sqcRYGate(q, 3.0200106156288715, 4);
  sqcRZGate(q, -1.613631997032361, 4);
  sqcRYGate(q, -3.0235459042741843, 5);
  sqcRZGate(q, 1.2924955604246315, 5);
  sqcRYGate(q, -0.4391090943030136, 6);
  sqcRZGate(q, 2.085062562522678, 6);
  sqcRYGate(q, -2.9752836263329487, 7);
  sqcRZGate(q, -2.5563368345712387, 7);
  sqcRYGate(q, -2.5837568051859208, 8);
  sqcRZGate(q, -3.0161264842298876, 8);
  sqcRYGate(q, 0.00848950893335676, 9);
  sqcRZGate(q, 2.682664717390353, 9);
  sqcRYGate(q, 1.0999760671087409, 10);
  sqcRZGate(q, 1.3943158532265363, 10);
  sqcRYGate(q, 2.0383924498171226, 11);
  sqcRZGate(q, 1.734596535198347, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.012628425960741652, 0);
  sqcRZGate(q, 3.100269014954739, 0);
  sqcRYGate(q, 2.6994477710244777, 1);
  sqcRZGate(q, -1.6711162259661867, 1);
  sqcRYGate(q, 0.01578284020382851, 2);
  sqcRZGate(q, -1.2623183215061813, 2);
  sqcRYGate(q, 0.00965375796497625, 3);
  sqcRZGate(q, 0.585329363452089, 3);
  sqcRYGate(q, 2.993139907324237, 4);
  sqcRZGate(q, -2.217682741024493, 4);
  sqcRYGate(q, 2.9914780041413924, 5);
  sqcRZGate(q, -2.3751683055430513, 5);
  sqcRYGate(q, 0.04413472401321095, 6);
  sqcRZGate(q, -0.6866883777896092, 6);
  sqcRYGate(q, -3.1314141039333117, 7);
  sqcRZGate(q, 0.9950837502113743, 7);
  sqcRYGate(q, 1.660487046813564, 8);
  sqcRZGate(q, 1.6041413602907728, 8);
  sqcRYGate(q, 1.1632140295556965, 9);
  sqcRZGate(q, -1.7586603470339615, 9);
  sqcRYGate(q, 2.7106229574624816, 10);
  sqcRZGate(q, 1.2271434901633587, 10);
  sqcRYGate(q, 0.45657931597996176, 11);
  sqcRZGate(q, 1.1637058234904494, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.546712545900708, 0);
  sqcRZGate(q, -2.672157043800305, 0);
  sqcRYGate(q, 2.798004952745216, 1);
  sqcRZGate(q, -2.913635220510286, 1);
  sqcRYGate(q, 1.104566502154734, 2);
  sqcRZGate(q, 0.0895942927572913, 2);
  sqcRYGate(q, 1.5447522097977882, 3);
  sqcRZGate(q, -2.4638233485200747, 3);
  sqcRYGate(q, 1.1359872698979967, 4);
  sqcRZGate(q, 0.3224083925123322, 4);
  sqcRYGate(q, 1.6552942188028328, 5);
  sqcRZGate(q, 3.1322126141378677, 5);
  sqcRYGate(q, 1.7576718003214689, 6);
  sqcRZGate(q, -3.128930701343513, 6);
  sqcRYGate(q, -1.3527317622349555, 7);
  sqcRZGate(q, 0.4586011526534208, 7);
  sqcRYGate(q, 0.0312983354530072, 8);
  sqcRZGate(q, 1.6319831091616217, 8);
  sqcRYGate(q, -0.3283591877064088, 9);
  sqcRZGate(q, -1.4555494890150937, 9);
  sqcRYGate(q, 2.8927287890321796, 10);
  sqcRZGate(q, 0.9055077702962357, 10);
  sqcRYGate(q, 0.2138231038948195, 11);
  sqcRZGate(q, -2.860659128298678, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.6212322762797307, 0);
  sqcRZGate(q, 2.244395930438243, 0);
  sqcRYGate(q, -1.1228321856587478, 1);
  sqcRZGate(q, 1.7059470006212258, 1);
  sqcRYGate(q, 0.0010486724467733462, 2);
  sqcRZGate(q, -0.325870467231909, 2);
  sqcRYGate(q, 0.0005903687857644613, 3);
  sqcRZGate(q, 2.9912668136231, 3);
  sqcRYGate(q, -3.1108871154103386, 4);
  sqcRZGate(q, -1.479268472505157, 4);
  sqcRYGate(q, -3.1109719579986588, 5);
  sqcRZGate(q, -2.144205265388445, 5);
  sqcRYGate(q, 3.14125814491039, 6);
  sqcRZGate(q, 1.5481370375972918, 6);
  sqcRYGate(q, 3.1415021818407363, 7);
  sqcRZGate(q, 2.804704619401214, 7);
  sqcRYGate(q, -1.223030156962091, 8);
  sqcRZGate(q, 1.2220280127954208, 8);
  sqcRYGate(q, -1.221012722847832, 9);
  sqcRZGate(q, -1.2130733312146336, 9);
  sqcRYGate(q, -0.05353543067294364, 10);
  sqcRZGate(q, -1.405334379202558, 10);
  sqcRYGate(q, 0.02611698823192924, 11);
  sqcRZGate(q, -1.5935667142917187, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.990607841128403, 0);
  sqcRZGate(q, -1.2088007075589795, 0);
  sqcRYGate(q, 1.6544889565916163, 1);
  sqcRZGate(q, -1.2039804207359444, 1);
  sqcRYGate(q, 1.7121021707833834, 2);
  sqcRZGate(q, 1.3283956271466855, 2);
  sqcRYGate(q, -1.1955972794827048, 3);
  sqcRZGate(q, -2.125911639110991, 3);
  sqcRYGate(q, -0.3745435600295295, 4);
  sqcRZGate(q, -0.8092351191622225, 4);
  sqcRYGate(q, 1.1017475848603155, 5);
  sqcRZGate(q, -2.495281923500101, 5);
  sqcRYGate(q, -3.0612870204655036, 6);
  sqcRZGate(q, 0.8085948190954744, 6);
  sqcRYGate(q, -0.05315185300658776, 7);
  sqcRZGate(q, 0.8053335622739857, 7);
  sqcRYGate(q, 0.6619516281925932, 8);
  sqcRZGate(q, 1.1110589009427088, 8);
  sqcRYGate(q, 0.8240063376318796, 9);
  sqcRZGate(q, 2.9133687325683977, 9);
  sqcRYGate(q, -2.0381638733405283, 10);
  sqcRZGate(q, 2.512836467839641, 10);
  sqcRYGate(q, 1.02760104688008, 11);
  sqcRZGate(q, -1.034085193963472, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.39065677353164846, 0);
  sqcRZGate(q, 1.40521219571131, 0);
  sqcRYGate(q, 0.4374659839462295, 1);
  sqcRZGate(q, 2.556559383743173, 1);
  sqcRYGate(q, 1.5376966176605593, 2);
  sqcRZGate(q, -1.7022780271337816, 2);
  sqcRYGate(q, -2.9885432774885707, 3);
  sqcRZGate(q, -2.4450724166267475, 3);
  sqcRYGate(q, -1.5569031743673467, 4);
  sqcRZGate(q, 1.1782554913920045, 4);
  sqcRYGate(q, -2.2761936315460902, 5);
  sqcRZGate(q, -2.2374253327150995, 5);
  sqcRYGate(q, -2.417706527785726, 6);
  sqcRZGate(q, 1.1735794888648199, 6);
  sqcRYGate(q, -1.9379978996144143, 7);
  sqcRZGate(q, 0.635223665900618, 7);
  sqcRYGate(q, -3.1393662918125793, 8);
  sqcRZGate(q, -1.6238747029166931, 8);
  sqcRYGate(q, 0.0005754944055439094, 9);
  sqcRZGate(q, 2.7573374111300226, 9);
  sqcRYGate(q, 0.8043427263474429, 10);
  sqcRZGate(q, -2.4334394395754546, 10);
  sqcRYGate(q, -3.1357329272887604, 11);
  sqcRZGate(q, 2.0291483821192564, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.2421751538106314, 0);
  sqcRZGate(q, 3.1148651605076823, 0);
  sqcRYGate(q, -0.8412052657523129, 1);
  sqcRZGate(q, -2.2494663323801305, 1);
  sqcRYGate(q, -0.008286542153887133, 2);
  sqcRZGate(q, -3.0820599882595423, 2);
  sqcRYGate(q, 3.107421604708034, 3);
  sqcRZGate(q, 1.2614282456981423, 3);
  sqcRYGate(q, -0.00800166174301905, 4);
  sqcRZGate(q, 0.4668457352404769, 4);
  sqcRYGate(q, 0.013549299090184905, 5);
  sqcRZGate(q, 1.3108903111006311, 5);
  sqcRYGate(q, 3.096045430411591, 6);
  sqcRZGate(q, -1.7152799495427926, 6);
  sqcRYGate(q, 3.141477423800086, 7);
  sqcRZGate(q, 0.6035571218788075, 7);
  sqcRYGate(q, -2.981917122223187, 8);
  sqcRZGate(q, -1.8128098641903003, 8);
  sqcRYGate(q, -0.20969347288309415, 9);
  sqcRZGate(q, -0.8400901829351141, 9);
  sqcRYGate(q, 1.7605377018221637, 10);
  sqcRZGate(q, 2.863696187285823, 10);
  sqcRYGate(q, 2.2454009264595762, 11);
  sqcRZGate(q, -0.26414873126461474, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.1282458800843935, 0);
  sqcRZGate(q, -1.6246991598611507, 0);
  sqcRYGate(q, 1.9687678920032519, 1);
  sqcRZGate(q, -1.8134369430612458, 1);
  sqcRYGate(q, 3.1033448770918475, 2);
  sqcRZGate(q, 3.028112152938114, 2);
  sqcRYGate(q, 3.089729693415032, 3);
  sqcRZGate(q, 1.731183529101178, 3);
  sqcRYGate(q, -0.18902834844423455, 4);
  sqcRZGate(q, 0.3458391865289716, 4);
  sqcRYGate(q, -0.9873649461675302, 5);
  sqcRZGate(q, 1.8035845941270523, 5);
  sqcRYGate(q, -1.7401615702045035, 6);
  sqcRZGate(q, 1.150741871980468, 6);
  sqcRYGate(q, -0.3486447020230569, 7);
  sqcRZGate(q, 1.615525099425855, 7);
  sqcRYGate(q, 0.04315067317813437, 8);
  sqcRZGate(q, -1.5214899214169633, 8);
  sqcRYGate(q, -0.03435732520032079, 9);
  sqcRZGate(q, -1.9543320818545247, 9);
  sqcRYGate(q, 0.037645533837873835, 10);
  sqcRZGate(q, 0.6606128482608146, 10);
  sqcRYGate(q, -2.331275026593715, 11);
  sqcRZGate(q, 1.7608017639644598, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.880412026317494, 0);
  sqcRZGate(q, -2.8586935334850216, 0);
  sqcRYGate(q, -1.6181554856758518, 1);
  sqcRZGate(q, -1.5171646243555665, 1);
  sqcRYGate(q, 2.189186920836262, 2);
  sqcRZGate(q, 1.837611936422709, 2);
  sqcRYGate(q, 2.2463683698853574, 3);
  sqcRZGate(q, 1.687566542136799, 3);
  sqcRYGate(q, 1.6039303776298937, 4);
  sqcRZGate(q, -1.5960332916790811, 4);
  sqcRYGate(q, 1.6276474776570964, 5);
  sqcRZGate(q, -1.5110465379737819, 5);
  sqcRYGate(q, -0.05465263937918938, 6);
  sqcRZGate(q, 1.6219203627826597, 6);
  sqcRYGate(q, 1.6886092644412467, 7);
  sqcRZGate(q, 1.5545143708389046, 7);
  sqcRYGate(q, -0.06863561982028266, 8);
  sqcRZGate(q, -0.9867809356478145, 8);
  sqcRYGate(q, 0.054724644191062835, 9);
  sqcRZGate(q, -1.1029273695151867, 9);
  sqcRYGate(q, 1.243809525409727, 10);
  sqcRZGate(q, -2.5508309408206236, 10);
  sqcRYGate(q, 1.840799426182903, 11);
  sqcRZGate(q, -2.1667589475902416, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.19699525834219772, 0);
  sqcRZGate(q, -1.578063322362976, 0);
  sqcRYGate(q, -0.15339503226504192, 1);
  sqcRZGate(q, 2.9085391599609265, 1);
  sqcRYGate(q, -2.030646866511882, 2);
  sqcRZGate(q, -0.4009540946765686, 2);
  sqcRYGate(q, 1.262811699679575, 3);
  sqcRZGate(q, 2.7955072090414417, 3);
  sqcRYGate(q, 1.614890456104547, 4);
  sqcRZGate(q, -0.8762339734134024, 4);
  sqcRYGate(q, 1.601730519738644, 5);
  sqcRZGate(q, 0.9920348704902509, 5);
  sqcRYGate(q, -0.6722111797851922, 6);
  sqcRZGate(q, -1.2382517665034916, 6);
  sqcRYGate(q, -2.635208202075833, 7);
  sqcRZGate(q, -1.7432343951439755, 7);
  sqcRYGate(q, 0.006585465103342791, 8);
  sqcRZGate(q, -1.482472807492806, 8);
  sqcRYGate(q, -6.680408300052676e-05, 9);
  sqcRZGate(q, 0.912218231102143, 9);
  sqcRYGate(q, -2.666152389407158, 10);
  sqcRZGate(q, 1.9343925708424852, 10);
  sqcRYGate(q, -2.4332327494095547, 11);
  sqcRZGate(q, -2.4120891782539076, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.073828233282585, 0);
  sqcRZGate(q, -1.3824235030876553, 0);
  sqcRYGate(q, 0.014138242168250367, 1);
  sqcRZGate(q, -2.788697726889371, 1);
  sqcRYGate(q, -3.038527444159506, 2);
  sqcRZGate(q, -2.154533737878327, 2);
  sqcRYGate(q, -2.9902616982851122, 3);
  sqcRZGate(q, -0.3244795836925398, 3);
  sqcRYGate(q, -2.591025780036004, 4);
  sqcRZGate(q, -2.7084212523379456, 4);
  sqcRYGate(q, 2.516151869556116, 5);
  sqcRZGate(q, -1.84584916430555, 5);
  sqcRYGate(q, -2.211564306030838, 6);
  sqcRZGate(q, 1.9093705742681857, 6);
  sqcRYGate(q, -2.500759485975214, 7);
  sqcRZGate(q, -1.3402090206898905, 7);
  sqcRYGate(q, -1.786502256739288, 8);
  sqcRZGate(q, -1.9014533598227146, 8);
  sqcRYGate(q, -1.8859711734950853, 9);
  sqcRZGate(q, -1.4461824849220895, 9);
  sqcRYGate(q, -3.049560687495538, 10);
  sqcRZGate(q, -1.8871398551947205, 10);
  sqcRYGate(q, 0.9139727645464522, 11);
  sqcRZGate(q, -3.1298618261033258, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.081146239093665, 0);
  sqcRZGate(q, -1.5621697445668943, 0);
  sqcRYGate(q, 3.130692415680616, 1);
  sqcRZGate(q, 1.381606721902716, 1);
  sqcRYGate(q, -2.82523680686589, 2);
  sqcRZGate(q, 0.4240256006012365, 2);
  sqcRYGate(q, -2.6325196844244614, 3);
  sqcRZGate(q, 2.2443189402515067, 3);
  sqcRYGate(q, 2.6693667583087137, 4);
  sqcRZGate(q, -1.695553517204937, 4);
  sqcRYGate(q, -0.036334738253024836, 5);
  sqcRZGate(q, -1.9223790026167373, 5);
  sqcRYGate(q, -0.3932302391992396, 6);
  sqcRZGate(q, 1.3486270615772706, 6);
  sqcRYGate(q, -0.35840634524446274, 7);
  sqcRZGate(q, -1.5195332800052033, 7);
  sqcRYGate(q, -3.1193399217328914, 8);
  sqcRZGate(q, 0.20253202548970975, 8);
  sqcRYGate(q, 0.011927983406448739, 9);
  sqcRZGate(q, -2.1146225839265984, 9);
  sqcRYGate(q, 3.1364616322360344, 10);
  sqcRZGate(q, -0.6569736043897378, 10);
  sqcRYGate(q, 0.6620582489010154, 11);
  sqcRZGate(q, -2.1592952298239605, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.0213208114077874, 0);
  sqcRZGate(q, -1.5263334405225235, 0);
  sqcRYGate(q, 2.64362096736042, 1);
  sqcRZGate(q, -1.4308920933576, 1);
  sqcRYGate(q, -0.06690259021867817, 2);
  sqcRZGate(q, -0.7119174810389179, 2);
  sqcRYGate(q, -3.088946083328716, 3);
  sqcRZGate(q, 0.28684177628039104, 3);
  sqcRYGate(q, 3.050853237908132, 4);
  sqcRZGate(q, 0.10430769506743279, 4);
  sqcRYGate(q, 2.1362504232836064, 5);
  sqcRZGate(q, -1.505140168539877, 5);
  sqcRYGate(q, -3.128094232856314, 6);
  sqcRZGate(q, -2.5778488652513945, 6);
  sqcRYGate(q, -0.02328428907006774, 7);
  sqcRZGate(q, 2.343569026279401, 7);
  sqcRYGate(q, 0.01889879736349639, 8);
  sqcRZGate(q, 0.8483039657074903, 8);
  sqcRYGate(q, -0.09325367645035809, 9);
  sqcRZGate(q, 2.069391274787579, 9);
  sqcRYGate(q, 1.4563837785384735, 10);
  sqcRZGate(q, -1.397343152202744, 10);
  sqcRYGate(q, -1.2143869048832787, 11);
  sqcRZGate(q, -2.0070585433352535, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.353093524293117, 0);
  sqcRZGate(q, 0.6425864938305992, 0);
  sqcRYGate(q, -2.64015308559665, 1);
  sqcRZGate(q, -2.6635202483343865, 1);
  sqcRYGate(q, 3.1415240125102297, 2);
  sqcRZGate(q, 0.33048530201858295, 2);
  sqcRYGate(q, 3.1406335347879097, 3);
  sqcRZGate(q, 2.7478139061860447, 3);
  sqcRYGate(q, -1.1871913988475138, 4);
  sqcRZGate(q, 1.7894016248600095, 4);
  sqcRYGate(q, -1.918970616479206, 5);
  sqcRZGate(q, -1.0655202099896635, 5);
  sqcRYGate(q, -0.05373531911733576, 6);
  sqcRZGate(q, -1.7154853085213293, 6);
  sqcRYGate(q, -0.054566446336718144, 7);
  sqcRZGate(q, 2.72890302930805, 7);
  sqcRYGate(q, -0.003733708259185533, 8);
  sqcRZGate(q, 0.5434171619376578, 8);
  sqcRYGate(q, -3.1364371687646244, 9);
  sqcRZGate(q, -1.7840060716900568, 9);
  sqcRYGate(q, 2.5962466004286266, 10);
  sqcRZGate(q, -2.6905906251945506, 10);
  sqcRYGate(q, 1.303483270811662, 11);
  sqcRZGate(q, -2.493637411688315, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.865881828970449, 0);
  sqcRZGate(q, 2.668192157494445, 0);
  sqcRYGate(q, -0.9017484466901955, 1);
  sqcRZGate(q, -2.3731122976448744, 1);
  sqcRYGate(q, -1.6883105798297962, 2);
  sqcRZGate(q, 0.8165008882333072, 2);
  sqcRYGate(q, -1.7230625811239841, 3);
  sqcRZGate(q, -1.9774684827124986, 3);
  sqcRYGate(q, 0.6959894165347837, 4);
  sqcRZGate(q, 2.598784596900043, 4);
  sqcRYGate(q, -0.09521642420029508, 5);
  sqcRZGate(q, 0.8875078337384926, 5);
  sqcRYGate(q, -1.564160944451007, 6);
  sqcRZGate(q, -1.6586889817139436, 6);
  sqcRYGate(q, -1.4453158966177455, 7);
  sqcRZGate(q, 3.1232574859892024, 7);
  sqcRYGate(q, 0.42021252245844387, 8);
  sqcRZGate(q, 0.2003109985418486, 8);
  sqcRYGate(q, -0.8358680189602765, 9);
  sqcRZGate(q, -0.30926608418473983, 9);
  sqcRYGate(q, 0.2698124447851704, 10);
  sqcRZGate(q, -1.2000308689492236, 10);
  sqcRYGate(q, -0.8281132533063601, 11);
  sqcRZGate(q, -2.0949127836930455, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.3565860995519845, 0);
  sqcRZGate(q, 1.466331906754081, 0);
  sqcRYGate(q, -0.8043306572452158, 1);
  sqcRZGate(q, 1.5656806433101467, 1);
  sqcRYGate(q, 3.119634003327081, 2);
  sqcRZGate(q, -0.14815731035658783, 2);
  sqcRYGate(q, -3.1254964977333106, 3);
  sqcRZGate(q, -0.22085493014877233, 3);
  sqcRYGate(q, 0.04855176224266877, 4);
  sqcRZGate(q, -2.538044996108878, 4);
  sqcRYGate(q, -3.1291627843484777, 5);
  sqcRZGate(q, 2.942088990529631, 5);
  sqcRYGate(q, 3.1413645286801612, 6);
  sqcRZGate(q, 0.7906375704280065, 6);
  sqcRYGate(q, -3.140778870738634, 7);
  sqcRZGate(q, 0.9680653288167081, 7);
  sqcRYGate(q, -3.140585730289252, 8);
  sqcRZGate(q, -2.9020627100063883, 8);
  sqcRYGate(q, -3.1406017834621274, 9);
  sqcRZGate(q, 2.8250237138754515, 9);
  sqcRYGate(q, -0.0931933550057639, 10);
  sqcRZGate(q, 0.691381939976108, 10);
  sqcRYGate(q, -3.007037292527758, 11);
  sqcRZGate(q, -1.345656502399664, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.3162538431061632, 0);
  sqcRZGate(q, -1.1087079813930436, 0);
  sqcRYGate(q, 0.7959453213264593, 1);
  sqcRZGate(q, 2.3920928862464352, 1);
  sqcRYGate(q, -3.1005140672357387, 2);
  sqcRZGate(q, -1.1174720852885238, 2);
  sqcRYGate(q, 3.098627753923155, 3);
  sqcRZGate(q, 1.380055122657807, 3);
  sqcRYGate(q, 1.7364077391084098, 4);
  sqcRZGate(q, -1.1828832174652286, 4);
  sqcRYGate(q, 2.867902986717216, 5);
  sqcRZGate(q, 2.405504050834108, 5);
  sqcRYGate(q, 0.8373010920135746, 6);
  sqcRZGate(q, -1.1385709912922561, 6);
  sqcRYGate(q, 1.2608973756146524, 7);
  sqcRZGate(q, -3.0989478578851424, 7);
  sqcRYGate(q, 0.4403823769689231, 8);
  sqcRZGate(q, 2.7414388908180842, 8);
  sqcRYGate(q, -0.9040846616120717, 9);
  sqcRZGate(q, -2.4234746402732936, 9);
  sqcRYGate(q, -1.3930591264971035, 10);
  sqcRZGate(q, 2.4963689879388116, 10);
  sqcRYGate(q, -0.7391522039794429, 11);
  sqcRZGate(q, -0.48262978382020394, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.3020177515206117, 0);
  sqcRZGate(q, -0.904170613600631, 0);
  sqcRYGate(q, 0.21966462646152873, 1);
  sqcRZGate(q, -0.3895191123816888, 1);
  sqcRYGate(q, -2.523665951239548, 2);
  sqcRZGate(q, 2.0686726097102124, 2);
  sqcRYGate(q, -2.0212205550555677, 3);
  sqcRZGate(q, -1.3951901880934026, 3);
  sqcRYGate(q, 3.103309874317396, 4);
  sqcRZGate(q, 2.525637298575893, 4);
  sqcRYGate(q, 0.023054744895313752, 5);
  sqcRZGate(q, 2.9768985494694506, 5);
  sqcRYGate(q, 1.6001009597708207, 6);
  sqcRZGate(q, -3.0439669537532774, 6);
  sqcRYGate(q, 1.6191157151812414, 7);
  sqcRZGate(q, 0.023225086927901373, 7);
  sqcRYGate(q, 0.04032665519524385, 8);
  sqcRZGate(q, 1.4704478732462574, 8);
  sqcRYGate(q, 3.1395104422994096, 9);
  sqcRZGate(q, -2.3936799801633417, 9);
  sqcRYGate(q, 0.7455690619528532, 10);
  sqcRZGate(q, -1.1644556863323432, 10);
  sqcRYGate(q, -2.0336428413802756, 11);
  sqcRZGate(q, -0.10206733450144423, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.32215770641462, 0);
  sqcRZGate(q, 0.6921682850243542, 0);
  sqcRYGate(q, -1.310797202327005, 1);
  sqcRZGate(q, 1.078645444165309, 1);
  sqcRYGate(q, -3.014129732904609, 2);
  sqcRZGate(q, 0.3529450624640156, 2);
  sqcRYGate(q, -0.1887180042744676, 3);
  sqcRZGate(q, 1.552176988722729, 3);
  sqcRYGate(q, -3.0565499774502967, 4);
  sqcRZGate(q, 1.7139952518209662, 4);
  sqcRYGate(q, 0.08893157578594908, 5);
  sqcRZGate(q, -1.4414023953640738, 5);
  sqcRYGate(q, -1.5272894626242222, 6);
  sqcRZGate(q, 1.5639255290020166, 6);
  sqcRYGate(q, 1.4615491352677155, 7);
  sqcRZGate(q, -3.0920332555044645, 7);
  sqcRYGate(q, -3.126279770771135, 8);
  sqcRZGate(q, 0.4840169133386958, 8);
  sqcRYGate(q, 3.130488228891514, 9);
  sqcRZGate(q, -3.08942767888363, 9);
  sqcRYGate(q, -0.12875696172639017, 10);
  sqcRZGate(q, -1.4176173846580564, 10);
  sqcRYGate(q, -3.0033875970326878, 11);
  sqcRZGate(q, -1.6169701997719441, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.0021529642829988555, 0);
  sqcRZGate(q, 0.9627967272568779, 0);
  sqcRYGate(q, -3.0675666209718266, 1);
  sqcRZGate(q, -0.43115439966948715, 1);
  sqcRYGate(q, 3.0750864968529124, 2);
  sqcRZGate(q, 0.2104157761750052, 2);
  sqcRYGate(q, -0.4122169579093986, 3);
  sqcRZGate(q, -1.5466264737240936, 3);
  sqcRYGate(q, 1.775809575737724, 4);
  sqcRZGate(q, 1.7169782243837348, 4);
  sqcRYGate(q, 1.3254949346062999, 5);
  sqcRZGate(q, -1.441179704553341, 5);
  sqcRYGate(q, -0.6285705155599789, 6);
  sqcRZGate(q, 2.6976979561897028, 6);
  sqcRYGate(q, 2.3141257200628655, 7);
  sqcRZGate(q, 2.425370675753311, 7);
  sqcRYGate(q, 1.478381828084684, 8);
  sqcRZGate(q, 0.8711158624745887, 8);
  sqcRYGate(q, 1.6653364408684563, 9);
  sqcRZGate(q, -2.2898458104907724, 9);
  sqcRYGate(q, -0.6308453913448586, 10);
  sqcRZGate(q, -1.94009786134187, 10);
  sqcRYGate(q, 0.7430618336949623, 11);
  sqcRZGate(q, 1.0958170003537593, 11);

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
