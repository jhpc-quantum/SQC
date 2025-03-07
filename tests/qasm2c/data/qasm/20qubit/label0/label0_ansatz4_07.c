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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 1.7716110906322224, 0);
  sqcRZGate(q, -2.7539155906914066, 0);
  sqcRYGate(q, 2.873025093974166, 1);
  sqcRZGate(q, -0.6219606761965331, 1);
  sqcRYGate(q, -3.1403198964009613, 2);
  sqcRZGate(q, 2.1165358794938998, 2);
  sqcRYGate(q, -3.140599247773637, 3);
  sqcRZGate(q, 1.439610931620219, 3);
  sqcRYGate(q, 2.901694901874097, 4);
  sqcRZGate(q, 2.5915580632437325, 4);
  sqcRYGate(q, -1.5972783405407993, 5);
  sqcRZGate(q, -1.6162056919745946, 5);
  sqcRYGate(q, -3.1295264957558913, 6);
  sqcRZGate(q, 1.9349584154296986, 6);
  sqcRYGate(q, 1.570651912618595, 7);
  sqcRZGate(q, 3.0992043083493575, 7);
  sqcRYGate(q, 0.0268999685076947, 8);
  sqcRZGate(q, 3.1232743645399172, 8);
  sqcRYGate(q, 2.892106119762504, 9);
  sqcRZGate(q, -3.0266811060558116, 9);
  sqcRYGate(q, -1.5583753286970659, 10);
  sqcRZGate(q, -3.1413597944094103, 10);
  sqcRYGate(q, 0.2484460229247181, 11);
  sqcRZGate(q, -2.8665757394645053, 11);
  sqcRYGate(q, 0.0003593790873872547, 12);
  sqcRZGate(q, 1.8032282747121413, 12);
  sqcRYGate(q, 3.1412809241641226, 13);
  sqcRZGate(q, 1.852755549725929, 13);
  sqcRYGate(q, -0.03464044145918998, 14);
  sqcRZGate(q, 1.175362803880958, 14);
  sqcRYGate(q, -1.5959833246854764, 15);
  sqcRZGate(q, -1.3623834087415958, 15);
  sqcRYGate(q, -3.138712838819803, 16);
  sqcRZGate(q, -3.002419509978483, 16);
  sqcRYGate(q, 3.137912432022939, 17);
  sqcRZGate(q, 1.6556089860591352, 17);
  sqcRYGate(q, 0.3378067369130812, 18);
  sqcRZGate(q, 0.6262078874346876, 18);
  sqcRYGate(q, -0.8170016485504225, 19);
  sqcRZGate(q, -0.009039347992829681, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.478549352519796, 0);
  sqcRZGate(q, 3.043715785867584, 0);
  sqcRYGate(q, -0.05702701716269143, 1);
  sqcRZGate(q, 0.08834695036871709, 1);
  sqcRYGate(q, 2.7835618663638817, 2);
  sqcRZGate(q, 0.12697533527673333, 2);
  sqcRYGate(q, 1.8762883435927709, 3);
  sqcRZGate(q, 3.1329660357233013, 3);
  sqcRYGate(q, 0.0007121900965412208, 4);
  sqcRZGate(q, -0.6269555290911173, 4);
  sqcRYGate(q, -3.136945855983568, 5);
  sqcRZGate(q, 2.783171372639027, 5);
  sqcRYGate(q, -1.571079232726631, 6);
  sqcRZGate(q, -3.140624460334985, 6);
  sqcRYGate(q, 1.566387268648865, 7);
  sqcRZGate(q, 3.140964360136695, 7);
  sqcRYGate(q, -1.5177575011542985, 8);
  sqcRZGate(q, -0.018991796492469275, 8);
  sqcRYGate(q, -2.9048033280759675, 9);
  sqcRZGate(q, -0.4578740013897815, 9);
  sqcRYGate(q, 1.5849323084313685, 10);
  sqcRZGate(q, -0.8305980943613199, 10);
  sqcRYGate(q, 0.007486726652598641, 11);
  sqcRZGate(q, 1.598812180196897, 11);
  sqcRYGate(q, 0.0002077501557469219, 12);
  sqcRZGate(q, -1.6931476879599536, 12);
  sqcRYGate(q, 0.00022848811639075706, 13);
  sqcRZGate(q, 2.9611051409090745, 13);
  sqcRYGate(q, 0.2524208693260643, 14);
  sqcRZGate(q, -0.2898258332039259, 14);
  sqcRYGate(q, 1.3203520943726448, 15);
  sqcRZGate(q, -1.5962101764202732, 15);
  sqcRYGate(q, 0.25945111881092076, 16);
  sqcRZGate(q, -0.8574369812142972, 16);
  sqcRYGate(q, -3.1335414110723407, 17);
  sqcRZGate(q, -1.6088724263971883, 17);
  sqcRYGate(q, 0.036228201547102046, 18);
  sqcRZGate(q, 2.6613490606092824, 18);
  sqcRYGate(q, -2.266263741467019, 19);
  sqcRZGate(q, -0.3241258541800556, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.0969642442764616, 0);
  sqcRZGate(q, -0.23030920276656544, 0);
  sqcRYGate(q, -0.04863512352493224, 1);
  sqcRZGate(q, -2.9843989918959166, 1);
  sqcRYGate(q, -3.1412556921472636, 2);
  sqcRZGate(q, 1.4340307223015492, 2);
  sqcRYGate(q, -3.1411300335157675, 3);
  sqcRZGate(q, -1.584492085127195, 3);
  sqcRYGate(q, 3.136572723001861, 4);
  sqcRZGate(q, -3.0040655702128483, 4);
  sqcRYGate(q, 0.004545842746030846, 5);
  sqcRZGate(q, 1.9901023508001892, 5);
  sqcRYGate(q, -1.5713134786686564, 6);
  sqcRZGate(q, 0.980517904832335, 6);
  sqcRYGate(q, 1.5700568739741398, 7);
  sqcRZGate(q, -1.5659779623019068, 7);
  sqcRYGate(q, -0.27419205066345054, 8);
  sqcRZGate(q, 0.475298683739725, 8);
  sqcRYGate(q, -0.004943190553965002, 9);
  sqcRZGate(q, 2.3684963014123404, 9);
  sqcRYGate(q, 0.0001360143402306205, 10);
  sqcRZGate(q, -0.7685857611097199, 10);
  sqcRYGate(q, -1.3227970414087924, 11);
  sqcRZGate(q, -1.8707855229239216, 11);
  sqcRYGate(q, 1.5686211468594582, 12);
  sqcRZGate(q, 3.091155428514253, 12);
  sqcRYGate(q, 1.5750034875328742, 13);
  sqcRZGate(q, -3.1338748829478233, 13);
  sqcRYGate(q, 0.015646657788291184, 14);
  sqcRZGate(q, 2.217810018914945, 14);
  sqcRYGate(q, -1.3169002240080638, 15);
  sqcRZGate(q, 0.09099286140569693, 15);
  sqcRYGate(q, 0.2078272641889196, 16);
  sqcRZGate(q, -2.4822520311841014, 16);
  sqcRYGate(q, -1.2862730471772155, 17);
  sqcRZGate(q, 3.1155675193655417, 17);
  sqcRYGate(q, 0.2580177284884835, 18);
  sqcRZGate(q, -1.3608806919137124, 18);
  sqcRYGate(q, 0.037883967593567824, 19);
  sqcRZGate(q, 1.3580639254449771, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.289908765356463, 0);
  sqcRZGate(q, -2.5280734725051532, 0);
  sqcRYGate(q, -0.08047871207764601, 1);
  sqcRZGate(q, 2.7612240955907414, 1);
  sqcRYGate(q, 0.026645624113339136, 2);
  sqcRZGate(q, 1.8153159541516728, 2);
  sqcRYGate(q, 0.3672790383020447, 3);
  sqcRZGate(q, -1.4107971719495724, 3);
  sqcRYGate(q, -2.8454578817571408, 4);
  sqcRZGate(q, 0.10689815308822043, 4);
  sqcRYGate(q, -1.621023300720615, 5);
  sqcRZGate(q, -1.7618835434154319, 5);
  sqcRYGate(q, 0.04721540558287656, 6);
  sqcRZGate(q, -2.546451662456324, 6);
  sqcRYGate(q, -1.53942500283297, 7);
  sqcRZGate(q, -1.5745527692679555, 7);
  sqcRYGate(q, 3.13030491619879, 8);
  sqcRZGate(q, 2.137121933072781, 8);
  sqcRYGate(q, 3.140184728154233, 9);
  sqcRZGate(q, 2.7932182447119414, 9);
  sqcRYGate(q, 3.141115541584008, 10);
  sqcRZGate(q, -1.6458646926044826, 10);
  sqcRYGate(q, -0.03563543926828494, 11);
  sqcRZGate(q, 1.8703222057297824, 11);
  sqcRYGate(q, 1.434522004250184, 12);
  sqcRZGate(q, -3.0817745403557284, 12);
  sqcRYGate(q, -1.7070223715035686, 13);
  sqcRZGate(q, 0.02726771362027325, 13);
  sqcRYGate(q, -3.1388249189379653, 14);
  sqcRZGate(q, 2.199039258119347, 14);
  sqcRYGate(q, 0.004313951765640892, 15);
  sqcRZGate(q, -0.7640054008411354, 15);
  sqcRYGate(q, 0.05165653991708442, 16);
  sqcRZGate(q, -1.8984932754547008, 16);
  sqcRYGate(q, 1.4080122281540675, 17);
  sqcRZGate(q, -0.1685132931614722, 17);
  sqcRYGate(q, -2.9765117778322425, 18);
  sqcRZGate(q, -0.4609616918449247, 18);
  sqcRYGate(q, -0.12857381870433127, 19);
  sqcRZGate(q, -1.579379829374437, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.0382397195074535, 0);
  sqcRZGate(q, 2.2488745812251096, 0);
  sqcRYGate(q, 1.6063084658500912, 1);
  sqcRZGate(q, 0.042609972718716284, 1);
  sqcRYGate(q, -2.4784827494446424, 2);
  sqcRZGate(q, 1.9081886538292858, 2);
  sqcRYGate(q, -0.14880906723373055, 3);
  sqcRZGate(q, -1.1066821111155534, 3);
  sqcRYGate(q, 0.02879390610998646, 4);
  sqcRZGate(q, 2.932057577548939, 4);
  sqcRYGate(q, -2.900749645787711, 5);
  sqcRZGate(q, -0.683474506365818, 5);
  sqcRYGate(q, 1.5694049905670442, 6);
  sqcRZGate(q, -0.3159494844125329, 6);
  sqcRYGate(q, -1.561647022999929, 7);
  sqcRZGate(q, -2.873905656157179, 7);
  sqcRYGate(q, 3.134688152144165, 8);
  sqcRZGate(q, 0.12325408370647038, 8);
  sqcRYGate(q, -0.0005486573074177996, 9);
  sqcRZGate(q, -0.3185211975457554, 9);
  sqcRYGate(q, 0.0009020643944133155, 10);
  sqcRZGate(q, -1.3765587992227344, 10);
  sqcRYGate(q, 1.3230009175178385, 11);
  sqcRZGate(q, 1.5729856352608627, 11);
  sqcRYGate(q, 0.007490642401668508, 12);
  sqcRZGate(q, 3.0963286567486414, 12);
  sqcRYGate(q, 1.7137526661165667, 13);
  sqcRZGate(q, -3.0152161637998924, 13);
  sqcRYGate(q, 0.0067573084571899145, 14);
  sqcRZGate(q, -2.0537294105436557, 14);
  sqcRYGate(q, 3.121040320453655, 15);
  sqcRZGate(q, 1.2167378170794407, 15);
  sqcRYGate(q, -3.100727666268453, 16);
  sqcRZGate(q, -2.9110825264801132, 16);
  sqcRYGate(q, 0.1269352908194614, 17);
  sqcRZGate(q, 0.8703284740406392, 17);
  sqcRYGate(q, 2.6716610648472963, 18);
  sqcRZGate(q, 1.7930831545167996, 18);
  sqcRYGate(q, 1.5960825829656011, 19);
  sqcRZGate(q, -1.7154218433946105, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5566406276007658, 0);
  sqcRZGate(q, 2.9508498576299202, 0);
  sqcRYGate(q, -1.5553261964058747, 1);
  sqcRZGate(q, -0.5167096909043876, 1);
  sqcRYGate(q, -3.1391050853224987, 2);
  sqcRZGate(q, -0.022794015106964993, 2);
  sqcRYGate(q, 3.1408426006504957, 3);
  sqcRZGate(q, -0.08883952687829222, 3);
  sqcRYGate(q, 0.0006338321863745833, 4);
  sqcRZGate(q, 2.680077248453626, 4);
  sqcRYGate(q, 0.00025232466540550013, 5);
  sqcRZGate(q, 0.8344330411270365, 5);
  sqcRYGate(q, -2.0078220227152226, 6);
  sqcRZGate(q, 2.073174037476557, 6);
  sqcRYGate(q, -0.27467320853196303, 7);
  sqcRZGate(q, 1.5653237387510819, 7);
  sqcRYGate(q, -1.8459333245666985, 8);
  sqcRZGate(q, 1.5554340496428585, 8);
  sqcRYGate(q, 0.03547171359523781, 9);
  sqcRZGate(q, 0.14158201747392243, 9);
  sqcRYGate(q, -0.02932394781665426, 10);
  sqcRZGate(q, 1.3757416133627804, 10);
  sqcRYGate(q, -2.2900571813810835, 11);
  sqcRZGate(q, 2.2211417756528062, 11);
  sqcRYGate(q, -1.5892036915102823, 12);
  sqcRZGate(q, 1.6247583074673644, 12);
  sqcRYGate(q, -1.6333256558516538, 13);
  sqcRZGate(q, -3.0037601263989835, 13);
  sqcRYGate(q, 0.14988561561137093, 14);
  sqcRZGate(q, -1.1461819656095276, 14);
  sqcRYGate(q, -3.1195946314369336, 15);
  sqcRZGate(q, -2.5299735956914486, 15);
  sqcRYGate(q, 0.003778876357577055, 16);
  sqcRZGate(q, 1.848707230333714, 16);
  sqcRYGate(q, 0.005080944186038412, 17);
  sqcRZGate(q, 1.3752132270562392, 17);
  sqcRYGate(q, 3.1255242433394863, 18);
  sqcRZGate(q, 1.542527517770436, 18);
  sqcRYGate(q, 1.7845192351934243, 19);
  sqcRZGate(q, -1.5902839767886698, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.783483389889665, 0);
  sqcRZGate(q, 3.000003321673617, 0);
  sqcRYGate(q, 0.1867996265187574, 1);
  sqcRZGate(q, 2.8434446335753383, 1);
  sqcRYGate(q, -1.4328932881738883, 2);
  sqcRZGate(q, 0.7110127075761689, 2);
  sqcRYGate(q, 2.528447124533242, 3);
  sqcRZGate(q, 2.7518094926126557, 3);
  sqcRYGate(q, 3.137211210055522, 4);
  sqcRZGate(q, -2.6529110973207164, 4);
  sqcRYGate(q, 3.122296817761754, 5);
  sqcRZGate(q, -2.0968176718845, 5);
  sqcRYGate(q, 3.136866852834212, 6);
  sqcRZGate(q, -0.4114127384523351, 6);
  sqcRYGate(q, -3.1398687050383436, 7);
  sqcRZGate(q, -1.306269890101766, 7);
  sqcRYGate(q, -3.139861773081044, 8);
  sqcRZGate(q, 1.4466398191772922, 8);
  sqcRYGate(q, 0.0019524114132878033, 9);
  sqcRZGate(q, 1.1805159343934113, 9);
  sqcRYGate(q, -3.1339559364939107, 10);
  sqcRZGate(q, -1.4769029531237547, 10);
  sqcRYGate(q, -2.9067947106302454, 11);
  sqcRZGate(q, 2.259987957498412, 11);
  sqcRYGate(q, 3.1285581369391933, 12);
  sqcRZGate(q, 1.3298506160693189, 12);
  sqcRYGate(q, -0.2764573143866089, 13);
  sqcRZGate(q, 2.7983107508873917, 13);
  sqcRYGate(q, 0.712174042155234, 14);
  sqcRZGate(q, -1.9332017008869267, 14);
  sqcRYGate(q, 0.04637892885591022, 15);
  sqcRZGate(q, -2.6971301462062525, 15);
  sqcRYGate(q, -0.010131909734963251, 16);
  sqcRZGate(q, -1.9747112574025714, 16);
  sqcRYGate(q, 3.1331463767975856, 17);
  sqcRZGate(q, 2.6868785846497714, 17);
  sqcRYGate(q, -0.09642357727758898, 18);
  sqcRZGate(q, 1.0834198647365199, 18);
  sqcRYGate(q, 1.4570456672722059, 19);
  sqcRZGate(q, -2.69958540931744, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -3.1058274099810497, 0);
  sqcRZGate(q, -3.045815489570273, 0);
  sqcRYGate(q, 0.04598776494089055, 1);
  sqcRZGate(q, 2.5413518597202036, 1);
  sqcRYGate(q, -0.0010345503371316342, 2);
  sqcRZGate(q, -2.9825864120051664, 2);
  sqcRYGate(q, 0.006917355330240405, 3);
  sqcRZGate(q, 2.0332738530994936, 3);
  sqcRYGate(q, -3.1413799062951244, 4);
  sqcRZGate(q, -2.047435989981966, 4);
  sqcRYGate(q, -3.1414343449138284, 5);
  sqcRZGate(q, 1.0833959165291396, 5);
  sqcRYGate(q, -0.5254308152543734, 6);
  sqcRZGate(q, -0.3914223141247478, 6);
  sqcRYGate(q, 1.3025110770519348, 7);
  sqcRZGate(q, 1.458068548081152, 7);
  sqcRYGate(q, 3.115946570305605, 8);
  sqcRZGate(q, -1.2284941507408442, 8);
  sqcRYGate(q, 3.065083265350256, 9);
  sqcRZGate(q, 1.0982792348218267, 9);
  sqcRYGate(q, 0.04418468781316658, 10);
  sqcRZGate(q, -2.082428111541428, 10);
  sqcRYGate(q, -2.2239646326828764, 11);
  sqcRZGate(q, -0.5213731586554472, 11);
  sqcRYGate(q, 0.06022865934221455, 12);
  sqcRZGate(q, 0.26117059686495686, 12);
  sqcRYGate(q, 2.7618945430260946, 13);
  sqcRZGate(q, 2.9179903582174194, 13);
  sqcRYGate(q, 0.20517145944607065, 14);
  sqcRZGate(q, -1.1237072453234633, 14);
  sqcRYGate(q, 3.1101945381558487, 15);
  sqcRZGate(q, 0.49102803853137905, 15);
  sqcRYGate(q, 3.1386449762861344, 16);
  sqcRZGate(q, -3.0347100789200785, 16);
  sqcRYGate(q, -0.00041596118574371843, 17);
  sqcRZGate(q, 0.7491980123961005, 17);
  sqcRYGate(q, 1.3497204250051853, 18);
  sqcRZGate(q, -2.8514303889735144, 18);
  sqcRYGate(q, 2.9873007965884155, 19);
  sqcRZGate(q, -1.7087145216692967, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.1136526671501716, 0);
  sqcRZGate(q, -1.5505352317228933, 0);
  sqcRYGate(q, -0.8439571922965401, 1);
  sqcRZGate(q, -0.4279955061802498, 1);
  sqcRYGate(q, 2.8069680642611203, 2);
  sqcRZGate(q, 1.7830327427410124, 2);
  sqcRYGate(q, 3.0218389857104158, 3);
  sqcRZGate(q, -1.8251828124814993, 3);
  sqcRYGate(q, 0.1326474366155379, 4);
  sqcRZGate(q, -3.070442076370933, 4);
  sqcRYGate(q, -1.4418510978688894, 5);
  sqcRZGate(q, -1.5835956530768727, 5);
  sqcRYGate(q, 1.602404284334068, 6);
  sqcRZGate(q, -0.000990838206185174, 6);
  sqcRYGate(q, 1.5721824149368349, 7);
  sqcRZGate(q, 1.6132544045340855, 7);
  sqcRYGate(q, 1.6856278396360826, 8);
  sqcRZGate(q, 1.5424178061097855, 8);
  sqcRYGate(q, 0.026485679746837094, 9);
  sqcRZGate(q, -1.025292711199294, 9);
  sqcRYGate(q, 0.045622072016720985, 10);
  sqcRZGate(q, 0.2729428686632884, 10);
  sqcRYGate(q, -0.1962518908554136, 11);
  sqcRZGate(q, 2.1537821268823807, 11);
  sqcRYGate(q, -1.6620203646129441, 12);
  sqcRZGate(q, 0.006832313230607987, 12);
  sqcRYGate(q, 1.9690166322315021, 13);
  sqcRZGate(q, 2.723563777404027, 13);
  sqcRYGate(q, -0.6860538745093041, 14);
  sqcRZGate(q, -0.4797805271393303, 14);
  sqcRYGate(q, -3.0703146723827586, 15);
  sqcRZGate(q, 2.8205535633245824, 15);
  sqcRYGate(q, 3.0359828352344365, 16);
  sqcRZGate(q, 2.8359557379071476, 16);
  sqcRYGate(q, -0.2602278632272901, 17);
  sqcRZGate(q, 2.7139328826460525, 17);
  sqcRYGate(q, -1.5370335522016039, 18);
  sqcRZGate(q, 2.3169206542679475, 18);
  sqcRYGate(q, 3.054895201303678, 19);
  sqcRZGate(q, 2.4319230179211155, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.003701643360027873, 0);
  sqcRZGate(q, -0.0353862987790059, 0);
  sqcRYGate(q, 2.9896641883556416, 1);
  sqcRZGate(q, -0.09635711564414545, 1);
  sqcRYGate(q, 0.00022400109946903984, 2);
  sqcRZGate(q, 3.1380774746141396, 2);
  sqcRYGate(q, -3.1408851599506256, 3);
  sqcRZGate(q, 1.9738875670708402, 3);
  sqcRYGate(q, -3.1415852969929974, 4);
  sqcRZGate(q, 1.7186359481504159, 4);
  sqcRYGate(q, -2.0680625724800447e-05, 5);
  sqcRZGate(q, 3.1310338823865544, 5);
  sqcRYGate(q, 0.027603584430492916, 6);
  sqcRZGate(q, -1.5687153913898997, 6);
  sqcRYGate(q, -0.02482032255519769, 7);
  sqcRZGate(q, 2.308118408633107, 7);
  sqcRYGate(q, -0.017973658762342026, 8);
  sqcRZGate(q, 2.8509718615013386, 8);
  sqcRYGate(q, -0.0033740700641864407, 9);
  sqcRZGate(q, 1.9203921491524731, 9);
  sqcRYGate(q, -3.1132879489980176, 10);
  sqcRZGate(q, -0.08207901956927888, 10);
  sqcRYGate(q, -3.1325823442615173, 11);
  sqcRZGate(q, 1.2926266534950068, 11);
  sqcRYGate(q, -1.731951154775375, 12);
  sqcRZGate(q, -0.2529381444364296, 12);
  sqcRYGate(q, 3.1310392164679843, 13);
  sqcRZGate(q, -1.658174186286276, 13);
  sqcRYGate(q, 3.139240392581392, 14);
  sqcRZGate(q, 1.3725342067639164, 14);
  sqcRYGate(q, 0.0019237590517278134, 15);
  sqcRZGate(q, 0.06716793000302185, 15);
  sqcRYGate(q, -0.001104648325123369, 16);
  sqcRZGate(q, 0.29428179607159327, 16);
  sqcRYGate(q, -0.004662203166806655, 17);
  sqcRZGate(q, 0.4610594544545865, 17);
  sqcRYGate(q, -1.7636864702552515, 18);
  sqcRZGate(q, 0.9450235312523001, 18);
  sqcRYGate(q, 3.097158419131134, 19);
  sqcRZGate(q, -2.7434076452357767, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.6181874580140478, 0);
  sqcRZGate(q, -2.9956950799234296, 0);
  sqcRYGate(q, 0.469017481688331, 1);
  sqcRZGate(q, 1.4603669921781912, 1);
  sqcRYGate(q, 0.048067459099908394, 2);
  sqcRZGate(q, -1.5414489158130464, 2);
  sqcRYGate(q, 1.9475497633786645, 3);
  sqcRZGate(q, 0.7609060760706434, 3);
  sqcRYGate(q, -1.561192353248404, 4);
  sqcRZGate(q, 0.019766359184960572, 4);
  sqcRYGate(q, -1.4098781894361876, 5);
  sqcRZGate(q, -1.4278417227319062, 5);
  sqcRYGate(q, 1.3750801752764312, 6);
  sqcRZGate(q, 1.5510543362958933, 6);
  sqcRYGate(q, 0.024934064185839766, 7);
  sqcRZGate(q, 0.7947550783797847, 7);
  sqcRYGate(q, -2.7881880765823834, 8);
  sqcRZGate(q, 1.2372582850173843, 8);
  sqcRYGate(q, 1.5576682139939273, 9);
  sqcRZGate(q, 3.121622428804998, 9);
  sqcRYGate(q, 1.5727857509116792, 10);
  sqcRZGate(q, 3.1393647696559546, 10);
  sqcRYGate(q, 1.5603892806351771, 11);
  sqcRZGate(q, -3.1406709148047156, 11);
  sqcRYGate(q, -1.476633653308949, 12);
  sqcRZGate(q, -3.13279039055428, 12);
  sqcRYGate(q, -1.577113346488412, 13);
  sqcRZGate(q, -3.128761365713554, 13);
  sqcRYGate(q, -1.5802942667947657, 14);
  sqcRZGate(q, 0.0028501832293731525, 14);
  sqcRYGate(q, -1.5638745602918522, 15);
  sqcRZGate(q, 3.1402652793803902, 15);
  sqcRYGate(q, 1.5726368893634526, 16);
  sqcRZGate(q, 3.1377601693192285, 16);
  sqcRYGate(q, 1.6146752026482045, 17);
  sqcRZGate(q, 0.010860332990165311, 17);
  sqcRYGate(q, 0.01982891055826652, 18);
  sqcRZGate(q, 2.230116845345835, 18);
  sqcRYGate(q, -1.594962824167097, 19);
  sqcRZGate(q, 3.137139461340767, 19);

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
