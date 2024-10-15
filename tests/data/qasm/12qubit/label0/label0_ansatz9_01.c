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

  sqcRYGate(q, -2.284745833025709, 0);
  sqcRYGate(q, 1.8925145846985973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4357343588265996, 0);
  sqcRYGate(q, 2.257618580569974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.794525017889525, 2);
  sqcRYGate(q, -0.2056490020579584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09744512887677073, 2);
  sqcRYGate(q, -0.2734729325030676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3224265373898274, 4);
  sqcRYGate(q, -0.9274692175697075, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3137587488543534, 4);
  sqcRYGate(q, 1.0393847340911861, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1351455326972535, 6);
  sqcRYGate(q, 1.4430663869733888, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.007304780060884752, 6);
  sqcRYGate(q, 1.9608701895988245, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.11740259829236876, 8);
  sqcRYGate(q, 1.4434843267361597, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0776029110414855, 8);
  sqcRYGate(q, -0.16891590573957702, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.618614064332502, 10);
  sqcRYGate(q, -0.8529491333648507, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6469632346289078, 10);
  sqcRYGate(q, 1.5963459135843585, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.094100246608894, 0);
  sqcRYGate(q, 1.192433841599807, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2719675928556713, 0);
  sqcRYGate(q, -2.3450573023401087, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5071191618281847, 2);
  sqcRYGate(q, 1.1404459108201603, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.525776328814354, 2);
  sqcRYGate(q, 1.3859138468938124, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6885427084758229, 4);
  sqcRYGate(q, -1.4341371987419693, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.039558835336590305, 4);
  sqcRYGate(q, 0.006043800504529309, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.4688218828902215, 6);
  sqcRYGate(q, 2.1767723346399035, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.6700078298166545, 6);
  sqcRYGate(q, -2.485068749558791, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.9113016891498331, 8);
  sqcRYGate(q, -0.5698534396014532, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.7728733331643336, 8);
  sqcRYGate(q, 0.9236718376507159, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.16620719871273248, 1);
  sqcRYGate(q, -0.8972925659507158, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9732384811155335, 1);
  sqcRYGate(q, 0.1687656701010289, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6801047335200555, 3);
  sqcRYGate(q, 0.23804494030358506, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.9759531374278563, 3);
  sqcRYGate(q, -0.17654612060081315, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.2504468400868802, 5);
  sqcRYGate(q, 1.2201630933076464, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1207118517187085, 5);
  sqcRYGate(q, 0.5346662764873206, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.979468763557464, 7);
  sqcRYGate(q, 2.477052993986435, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.121456572293599, 7);
  sqcRYGate(q, -0.0076325782604395025, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.525362464546063, 9);
  sqcRYGate(q, 3.0051502379370114, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.6064439512211885, 9);
  sqcRYGate(q, 1.4201135819991744, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.5507846104252332, 0);
  sqcRYGate(q, -1.098250218876058, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5032651365729217, 0);
  sqcRYGate(q, 0.9775856572425056, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2355120421304162, 1);
  sqcRYGate(q, 2.5777518639554553, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5159333694242392, 1);
  sqcRYGate(q, 0.3357019885521, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.025676898038827, 2);
  sqcRYGate(q, 2.1579382030556884, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.8485620094024178, 2);
  sqcRYGate(q, 2.5657820955921347, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.692307364924153, 3);
  sqcRYGate(q, 1.1362908374481333, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9964253454726006, 3);
  sqcRYGate(q, -1.9990259993465358, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1134105105300622, 4);
  sqcRYGate(q, 2.1545731135212165, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.0390382262759954, 4);
  sqcRYGate(q, 2.5753234399507314, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.329795949762441, 5);
  sqcRYGate(q, -2.954326731364425, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.00041635533212147635, 5);
  sqcRYGate(q, -0.002045549867381702, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0429848796849543, 6);
  sqcRYGate(q, 2.809205338398243, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -0.654953240973577, 6);
  sqcRYGate(q, -0.5445697212858311, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -2.5641833585087626, 7);
  sqcRYGate(q, 2.8440206559573276, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.021118010262537904, 7);
  sqcRYGate(q, 0.007480231877417864, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.121440841342026, 8);
  sqcRYGate(q, -1.294639724924202, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.6951011779535339, 8);
  sqcRYGate(q, -3.0874121595901, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.4173238572541136, 9);
  sqcRYGate(q, 0.46515873761242776, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.8910464239758893, 9);
  sqcRYGate(q, -1.6488109888443647, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.7281614214846106, 0);
  sqcRYGate(q, -0.26649242762549274, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8881152920631157, 0);
  sqcRYGate(q, -2.240917322871106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1414869673445467, 2);
  sqcRYGate(q, -2.5736542805408167, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9568589390731517, 2);
  sqcRYGate(q, -0.9252204522343742, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3253428823292017, 4);
  sqcRYGate(q, -0.004777015153189623, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9950217234854167, 4);
  sqcRYGate(q, 1.8186238131214683, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4841575127641733, 6);
  sqcRYGate(q, 1.8730071346405115, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1301583285201007, 6);
  sqcRYGate(q, 1.5898525947688642, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3187145374264737, 8);
  sqcRYGate(q, -0.8560560707755307, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.323650870193199, 8);
  sqcRYGate(q, 1.4011252916287917, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.865880186698533, 10);
  sqcRYGate(q, -2.406585266300283, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.9538128193872335, 10);
  sqcRYGate(q, 0.6616725075838142, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.8385616725109326, 0);
  sqcRYGate(q, 2.7580015298913496, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3816174356177493, 0);
  sqcRYGate(q, 0.8819084479629273, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2594767868297776, 2);
  sqcRYGate(q, 3.0378893807228944, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.6292179654162173, 2);
  sqcRYGate(q, -2.835300944931385, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.5140131443928686, 4);
  sqcRYGate(q, -1.7394238394020443, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.0009081025905368634, 4);
  sqcRYGate(q, 2.9017072207896057, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.2263334206187135, 6);
  sqcRYGate(q, -2.5888593417474834, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.1398452051944497, 6);
  sqcRYGate(q, -2.9809276605341495e-05, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.4139755965303973, 8);
  sqcRYGate(q, -1.9288445191924288, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.022559663049379, 8);
  sqcRYGate(q, 1.412081749234254, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.5511085644508293, 1);
  sqcRYGate(q, -1.2510406216114647, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1765646875018536, 1);
  sqcRYGate(q, -0.6679015003992518, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.415897078697085, 3);
  sqcRYGate(q, -0.37865083333528204, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.8768271924257838, 3);
  sqcRYGate(q, -2.1481656697179803, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3401643988412508, 5);
  sqcRYGate(q, -0.2688273336591287, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.141390824207039, 5);
  sqcRYGate(q, 3.141118753821344, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.306121443771429, 7);
  sqcRYGate(q, -1.4220911528530538, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.002589162715149307, 7);
  sqcRYGate(q, -3.1412937862121484, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.5801381248083914, 9);
  sqcRYGate(q, 2.646295808177615, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.07446863037590123, 9);
  sqcRYGate(q, -0.2417427741924385, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.015416864767894722, 0);
  sqcRYGate(q, 2.4008323213211797, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3635449171257434, 0);
  sqcRYGate(q, 1.3737388892180071, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.90895807567016, 1);
  sqcRYGate(q, -1.2927030926577825, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1104485886303618, 1);
  sqcRYGate(q, 1.0278071360232162, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.459038924742324, 2);
  sqcRYGate(q, 2.4487458343165067, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.3711425390837233, 2);
  sqcRYGate(q, 1.347648365145605, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.1493511035052422, 3);
  sqcRYGate(q, -1.9435031965123155, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1389987115875444, 3);
  sqcRYGate(q, -0.0018480306677135516, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4177702360704664, 4);
  sqcRYGate(q, -0.4964015377534732, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.1407978661312805, 4);
  sqcRYGate(q, -0.007424961384830033, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.991758244767771, 5);
  sqcRYGate(q, 1.6061503647900004, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.140974639075756, 5);
  sqcRYGate(q, -0.05304248516895908, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4228808137444102, 6);
  sqcRYGate(q, -1.3144262242759057, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.005092256429887421, 6);
  sqcRYGate(q, 8.391843983446279e-05, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 2.7452992861071412, 7);
  sqcRYGate(q, 2.691656246706886, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.141329064350589, 7);
  sqcRYGate(q, -3.1415781150071638, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6332008401150393, 8);
  sqcRYGate(q, -1.5703028094159321, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.22643405769549038, 8);
  sqcRYGate(q, 2.7386498478188264, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -1.5141935095785088, 9);
  sqcRYGate(q, -2.6246891520231816, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7261127652486923, 9);
  sqcRYGate(q, -0.9130370304018538, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.625742063197454, 0);
  sqcRYGate(q, 0.5073205002695831, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9832456767403671, 0);
  sqcRYGate(q, 1.1668879860166963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5512815104807236, 2);
  sqcRYGate(q, -1.1831655039520679, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10759457893222812, 2);
  sqcRYGate(q, -2.8677993144518115, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7899545348393896, 4);
  sqcRYGate(q, -1.453652896148487, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2347115011840213, 4);
  sqcRYGate(q, -1.5832274564949027, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6987572846145964, 6);
  sqcRYGate(q, 1.2259373213554037, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.107212412812447, 6);
  sqcRYGate(q, -3.127733731371664, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5302876594025476, 8);
  sqcRYGate(q, 0.8872966193231724, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.551462802340314, 8);
  sqcRYGate(q, 1.5972359305781474, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.777472860468908, 10);
  sqcRYGate(q, -1.2529810483588146, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.4811460305950041, 10);
  sqcRYGate(q, -1.7537778000660973, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6679874257250972, 0);
  sqcRYGate(q, 3.044647119790528, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5425516552854395, 0);
  sqcRYGate(q, -0.09233463265415026, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5175136557592204, 2);
  sqcRYGate(q, -1.3484068665428275, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.035999154617268096, 2);
  sqcRYGate(q, 3.1385963293293355, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.9890336592238863, 4);
  sqcRYGate(q, -1.9055567072685133, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.1415481504568654, 4);
  sqcRYGate(q, 1.3080928767013904, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5464841994066735, 6);
  sqcRYGate(q, 1.7538230289266845, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.001048914619234028, 6);
  sqcRYGate(q, -6.688854163249992e-05, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.7970654291638689, 8);
  sqcRYGate(q, -0.7170470101909243, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.5644369807140038, 8);
  sqcRYGate(q, 2.3315988813789357, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.4437560874632327, 1);
  sqcRYGate(q, -0.923155275952385, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5327956491207846, 1);
  sqcRYGate(q, -2.9756970446289657, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8107895546559476, 3);
  sqcRYGate(q, -2.1585785274489466, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.63907189261952, 3);
  sqcRYGate(q, 3.064711988858465, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3394537413617071, 5);
  sqcRYGate(q, 2.1154755982819555, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1401326094122006, 5);
  sqcRYGate(q, -0.6660036561388811, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.1596013220257603, 7);
  sqcRYGate(q, -2.595307208675881, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.1391792243896743, 7);
  sqcRYGate(q, 4.010202342782046e-05, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.0184634227070266, 9);
  sqcRYGate(q, 2.8572133167746387, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.9007153411075999, 9);
  sqcRYGate(q, 1.137005981209016, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.606554176237304, 0);
  sqcRYGate(q, 2.561409362037876, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.119811396400941, 0);
  sqcRYGate(q, 2.9288284458352587, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6856865764577698, 1);
  sqcRYGate(q, -3.1232065341459982, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.51001557254056, 1);
  sqcRYGate(q, -2.1704793184100306, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.961796573228846, 2);
  sqcRYGate(q, 0.39848466514645686, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.001029672682691167, 2);
  sqcRYGate(q, -0.00016036936555732738, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.49217415538435816, 3);
  sqcRYGate(q, -1.6501491514023807, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6189128542755595, 3);
  sqcRYGate(q, -0.010858876365735348, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5012357672744345, 4);
  sqcRYGate(q, -1.2817208730560863, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -3.137943269004984, 4);
  sqcRYGate(q, -0.6983869950219053, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.6433879926035541, 5);
  sqcRYGate(q, -1.7435441556853923, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.13779718555126, 5);
  sqcRYGate(q, -0.7192754687068188, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8658932600927969, 6);
  sqcRYGate(q, -0.15425055725399486, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 3.141548278546514, 6);
  sqcRYGate(q, -3.1411876908151672, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.7429673743617764, 7);
  sqcRYGate(q, -2.625851061316077, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1410214542217862, 7);
  sqcRYGate(q, -3.1413777509934127, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4916349753782001, 8);
  sqcRYGate(q, -2.997024689503528, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.5841659588203614, 8);
  sqcRYGate(q, 1.4756557049529988, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.1306837632216462, 9);
  sqcRYGate(q, 2.4126371548680803, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.8545113479799111, 9);
  sqcRYGate(q, 1.2882822363221962, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.731171936636594, 0);
  sqcRYGate(q, -2.0202464629271413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6743782074258988, 0);
  sqcRYGate(q, 0.352999303874554, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8959183155760817, 2);
  sqcRYGate(q, 0.7500759466454239, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7625957788727762, 2);
  sqcRYGate(q, 1.5788636760031451, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7080462525446293, 4);
  sqcRYGate(q, -0.1327510108403125, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.017197391635902, 4);
  sqcRYGate(q, -0.7971836599725024, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.664912804767015, 6);
  sqcRYGate(q, -0.8437350707662132, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3375828803369787, 6);
  sqcRYGate(q, 0.0017042091008807603, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.230590921485981, 8);
  sqcRYGate(q, 1.0549377201361825, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7582621114801225, 8);
  sqcRYGate(q, -0.021204553431313222, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.4337590049726394, 10);
  sqcRYGate(q, -0.14782212707743375, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.023539134207136, 10);
  sqcRYGate(q, 1.3733166838191102, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.680353852398465, 0);
  sqcRYGate(q, -0.5297488195558504, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0819027254522537, 0);
  sqcRYGate(q, 0.04238835080149416, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0433337891789751, 2);
  sqcRYGate(q, -0.8768176848054747, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.1238468543685176, 2);
  sqcRYGate(q, -3.1379955006442315, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.563695168540456, 4);
  sqcRYGate(q, -0.4062560487161058, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.1361365045510268, 4);
  sqcRYGate(q, -0.6335615465326097, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.045203234590331, 6);
  sqcRYGate(q, -2.5215450879614645, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.139390965665702, 6);
  sqcRYGate(q, 3.137455601288684, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.3211094564628061, 8);
  sqcRYGate(q, -0.10450040454685096, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.788583392849087, 8);
  sqcRYGate(q, -0.1173219266272107, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.2431436021438502, 1);
  sqcRYGate(q, 0.5799088320070513, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.781004388704653, 1);
  sqcRYGate(q, -2.7761053872304244, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8556425103621219, 3);
  sqcRYGate(q, -0.11269250739094439, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.033386028645290715, 3);
  sqcRYGate(q, -0.006523085928662768, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8245139482819466, 5);
  sqcRYGate(q, 0.8219155233316767, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.050680529926117275, 5);
  sqcRYGate(q, 0.18828793800515836, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.3932600479448882, 7);
  sqcRYGate(q, -2.0038618154979195, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.00412062405240927, 7);
  sqcRYGate(q, -3.006192863236322, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.49377566019563646, 9);
  sqcRYGate(q, -1.6754542793405536, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.3376498895095017, 9);
  sqcRYGate(q, 3.1354206989542766, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.914575074181131, 0);
  sqcRYGate(q, -2.3691035366797726, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.039281790693992, 0);
  sqcRYGate(q, 0.5656031995611093, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0770266204199217, 1);
  sqcRYGate(q, 0.43357245380964626, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.699112779124535, 1);
  sqcRYGate(q, -1.7300366084335241, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6477963465788923, 2);
  sqcRYGate(q, 1.4506856851375218, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -3.1395363294972856, 2);
  sqcRYGate(q, 0.0025853727894713974, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.148001599840414, 3);
  sqcRYGate(q, -2.7727967096929547, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.2549359671364809, 3);
  sqcRYGate(q, 0.00479080073434663, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4605516191553374, 4);
  sqcRYGate(q, 2.0386881814459823, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -3.1357237396356448, 4);
  sqcRYGate(q, 0.00033148893739642915, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.5360826050606544, 5);
  sqcRYGate(q, 0.2811686029475463, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.22120047408566482, 5);
  sqcRYGate(q, 0.6224513959300966, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9545295709637291, 6);
  sqcRYGate(q, -0.09476500650807917, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -3.129419249278274, 6);
  sqcRYGate(q, 0.019980287249550196, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -1.0937438907147614, 7);
  sqcRYGate(q, -2.9135952109954535, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.9942762545449426, 7);
  sqcRYGate(q, -2.72016772011958, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.4396978836301144, 8);
  sqcRYGate(q, 1.5744175768411806, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 3.045969443298919, 8);
  sqcRYGate(q, -0.08573182352473907, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.688068538422876, 9);
  sqcRYGate(q, -0.7342663895940488, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9613929427539016, 9);
  sqcRYGate(q, -0.43987310422817316, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.1214771404202981, 0);
  sqcRYGate(q, 1.4074880064984558, 1);
  sqcRYGate(q, -0.9095501037220542, 2);
  sqcRYGate(q, -1.4843030689568284, 3);
  sqcRYGate(q, -1.972117974272349, 4);
  sqcRYGate(q, 3.086303759048168, 5);
  sqcRYGate(q, 3.1397233223599597, 6);
  sqcRYGate(q, -3.135921158943421, 7);
  sqcRYGate(q, -0.005663008210375525, 8);
  sqcRYGate(q, 0.006433626872235174, 9);
  sqcRYGate(q, 2.1111451892226905, 10);
  sqcRYGate(q, 0.6966910378633129, 11);

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
