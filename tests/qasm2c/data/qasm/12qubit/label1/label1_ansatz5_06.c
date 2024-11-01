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

  sqcRYGate(q, -1.385061906291475, 0);
  sqcRYGate(q, -2.9735916365768547, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8365953398806136, 0);
  sqcRYGate(q, 2.3166996764205803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11597581914886135, 2);
  sqcRYGate(q, 2.0825984207682455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5216286600346303, 2);
  sqcRYGate(q, -0.5466729691539661, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.195593941678198, 4);
  sqcRYGate(q, -1.8577349787872741, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.752236449384007, 4);
  sqcRYGate(q, -0.8335175519528786, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0470588596282733, 6);
  sqcRYGate(q, -2.0604062356540638, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1211895766276445, 6);
  sqcRYGate(q, 2.6071478041942715, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6198627398691747, 8);
  sqcRYGate(q, 0.9386904754620009, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5544055346402392, 8);
  sqcRYGate(q, -1.4928100190329454, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0457377530189844, 10);
  sqcRYGate(q, 1.2844116379054071, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.130954442748128, 10);
  sqcRYGate(q, 1.9376447384541138, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.19697503665994898, 1);
  sqcRYGate(q, 0.6832925441746348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.000466933983503, 1);
  sqcRYGate(q, 2.6964259382614686, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.026290067951052265, 3);
  sqcRYGate(q, 1.6740180987162443, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.39549189071539015, 3);
  sqcRYGate(q, 2.7844834312075335, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.510675824741978, 5);
  sqcRYGate(q, -2.1534466694337366, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5848546737994749, 5);
  sqcRYGate(q, -2.1315477671093843, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9367491361332202, 7);
  sqcRYGate(q, -1.2113832927585235, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.027517357480730534, 7);
  sqcRYGate(q, -0.5564804225699299, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.5567623171927374, 9);
  sqcRYGate(q, -1.5879212189901672, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.0759699416469406, 9);
  sqcRYGate(q, 0.6476147096217773, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.2498413354403866, 0);
  sqcRYGate(q, 2.4624580479243297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8638253671675067, 0);
  sqcRYGate(q, -2.4329963913896937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6522868946467888, 2);
  sqcRYGate(q, -2.107427262905916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3690098727428443, 2);
  sqcRYGate(q, -0.46534551647855427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.93125804162381, 4);
  sqcRYGate(q, 1.4315938134955868, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8413222153943831, 4);
  sqcRYGate(q, 1.0692386422623015, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.123841289666218, 6);
  sqcRYGate(q, -0.07260632381425684, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6876814555100011, 6);
  sqcRYGate(q, -1.0517852103911247, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.469588601224741, 8);
  sqcRYGate(q, 2.299639495510796, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.1815662075519826, 8);
  sqcRYGate(q, 0.4295959649320373, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9549518702538728, 10);
  sqcRYGate(q, -2.8083462741438514, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.457396355938007, 10);
  sqcRYGate(q, 2.6502027812642037, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2460983794281324, 1);
  sqcRYGate(q, 1.0491794794239846, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0449518318718067, 1);
  sqcRYGate(q, 0.03341712212458056, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5358583262632202, 3);
  sqcRYGate(q, 1.0932971552519326, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0824505503218953, 3);
  sqcRYGate(q, 0.3564132975597808, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5765461693070661, 5);
  sqcRYGate(q, -1.5422970840798742, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.37363796189054793, 5);
  sqcRYGate(q, 2.2562345588233583, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5900995080194313, 7);
  sqcRYGate(q, 2.61456661481419, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.544289156888882, 7);
  sqcRYGate(q, 2.7586620149360517, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.039394521759657, 9);
  sqcRYGate(q, 1.2702949841969364, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.6027579260998164, 9);
  sqcRYGate(q, -2.8130779473775434, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.554411015285729, 0);
  sqcRYGate(q, -0.2846352484413227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.21261472933021694, 0);
  sqcRYGate(q, -1.2065910870558982, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3720723546669817, 2);
  sqcRYGate(q, 2.871521377931828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9772946528383284, 2);
  sqcRYGate(q, -2.8877802908363375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1855250651025884, 4);
  sqcRYGate(q, 2.020631111906974, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4848201139787367, 4);
  sqcRYGate(q, -2.5719741764896686, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9471669544662404, 6);
  sqcRYGate(q, -2.3374518089737846, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.35391174573759837, 6);
  sqcRYGate(q, 0.27249256990297255, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4570967296220134, 8);
  sqcRYGate(q, -1.4460977147688978, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0829129048703248, 8);
  sqcRYGate(q, -2.4683449361235956, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8944112351095557, 10);
  sqcRYGate(q, -1.9548633221518381, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.05083899175358149, 10);
  sqcRYGate(q, 2.875214819321044, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.49572125037754594, 1);
  sqcRYGate(q, -1.2070584319779507, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.88391364586414, 1);
  sqcRYGate(q, 1.4974082691790391, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.363348147002833, 3);
  sqcRYGate(q, 1.6101576018725667, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.08983250334032586, 3);
  sqcRYGate(q, -2.1973923148493704, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4873592086482668, 5);
  sqcRYGate(q, 2.8604160734706103, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.1253032151175183, 5);
  sqcRYGate(q, -1.2188833549926614, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.28762510601554514, 7);
  sqcRYGate(q, 0.35245284617260086, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.3395731690940158, 7);
  sqcRYGate(q, 1.4045688793984712, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.4995156666301632, 9);
  sqcRYGate(q, 0.19671006161520027, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4808222351637019, 9);
  sqcRYGate(q, -1.9452807555018934, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.28334658510841937, 0);
  sqcRYGate(q, -2.9539810691528254, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0549306353235335, 0);
  sqcRYGate(q, 3.1300732599554286, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6733651624697945, 2);
  sqcRYGate(q, -2.0697291617369826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1034832012865745, 2);
  sqcRYGate(q, 2.468894320215289, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.865201203691484, 4);
  sqcRYGate(q, -3.007967875380674, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.09044545158701123, 4);
  sqcRYGate(q, 2.2922098766142676, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.23324215411317, 6);
  sqcRYGate(q, -2.486273173011096, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1674539410489089, 6);
  sqcRYGate(q, 2.9335423092083266, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7470814009915614, 8);
  sqcRYGate(q, -0.06660753862055115, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.04589806845369087, 8);
  sqcRYGate(q, 3.1272968697045918, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.293607764666083, 10);
  sqcRYGate(q, 1.8879600143472706, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1800003718814913, 10);
  sqcRYGate(q, 0.006554228438589327, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.251722712487372, 1);
  sqcRYGate(q, -2.2108815362689174, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8059538032960023, 1);
  sqcRYGate(q, -2.6305223244389264, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7501645654302669, 3);
  sqcRYGate(q, 0.4684244373592259, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.08279085663499242, 3);
  sqcRYGate(q, 0.02046243291163563, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5095801576906593, 5);
  sqcRYGate(q, 0.5874559681738013, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9874269687833537, 5);
  sqcRYGate(q, 2.955123282606674, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9578895461758785, 7);
  sqcRYGate(q, -0.33708456879682874, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.32882006495934935, 7);
  sqcRYGate(q, 0.7437622382481477, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.051632023891783, 9);
  sqcRYGate(q, -2.1914305078205065, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5690203766455446, 9);
  sqcRYGate(q, 1.9721309494673962, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.7358758604316789, 0);
  sqcRYGate(q, 0.6016134229572677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1705067136010682, 0);
  sqcRYGate(q, -2.4417526114938544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5426461873521113, 2);
  sqcRYGate(q, -3.070228117242491, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1100865799603947, 2);
  sqcRYGate(q, -0.7141166254036477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3703673291624444, 4);
  sqcRYGate(q, -0.5900534987401475, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2511887033459548, 4);
  sqcRYGate(q, -2.7425710394412874, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.14328812960274026, 6);
  sqcRYGate(q, 1.630004969293829, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.605764116369488, 6);
  sqcRYGate(q, -2.7487997194659908, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0996486084515364, 8);
  sqcRYGate(q, -2.1235073770168214, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.651044565171614, 8);
  sqcRYGate(q, 2.5172607651300947, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.4116515630596771, 10);
  sqcRYGate(q, -0.07640162454702182, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3121491026217762, 10);
  sqcRYGate(q, -3.008976639197441, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.3244256747745724, 1);
  sqcRYGate(q, -1.1795688962665771, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.055142123116673, 1);
  sqcRYGate(q, -1.5444347988965086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2486718892134974, 3);
  sqcRYGate(q, -2.742003530205763, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0592338361615217, 3);
  sqcRYGate(q, 1.4714532999292476, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1496651834651911, 5);
  sqcRYGate(q, 0.6207473510994737, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1264412430470196, 5);
  sqcRYGate(q, 3.096885913626814, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.110725157214799, 7);
  sqcRYGate(q, -1.124409155163828, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.6189260405665165, 7);
  sqcRYGate(q, -2.055262539753569, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.1258581623642154, 9);
  sqcRYGate(q, 2.3289999517257183, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.0171281862934625, 9);
  sqcRYGate(q, 3.00768959680933, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.308284939215066, 0);
  sqcRYGate(q, 2.0266997176306223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.77118074680436, 0);
  sqcRYGate(q, 0.3086872120129672, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7142653494899076, 2);
  sqcRYGate(q, -1.5739730309549604, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.114661708960891, 2);
  sqcRYGate(q, -0.6390237955370379, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8172553189992632, 4);
  sqcRYGate(q, 0.21956294423409295, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5703480234500138, 4);
  sqcRYGate(q, -2.976718164357835, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4719810193344223, 6);
  sqcRYGate(q, 2.659862261057337, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.089980026899899, 6);
  sqcRYGate(q, -1.5178558899565537, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.022817255551331787, 8);
  sqcRYGate(q, 2.952737673304136, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.01777109941447055, 8);
  sqcRYGate(q, 0.11562437176250967, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.164131169547849, 10);
  sqcRYGate(q, -2.190555095363764, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6040022924854416, 10);
  sqcRYGate(q, -0.6991142499059775, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5534498895566535, 1);
  sqcRYGate(q, -1.2468210616838513, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.832305717711469, 1);
  sqcRYGate(q, 2.910514969540423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.03705220395576035, 3);
  sqcRYGate(q, 2.4139520195290647, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.16071525493372485, 3);
  sqcRYGate(q, -3.1406879225454363, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.20188558433680726, 5);
  sqcRYGate(q, 1.4727128905464228, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.1143427994752173, 5);
  sqcRYGate(q, -3.1410070269609855, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9795940441776221, 7);
  sqcRYGate(q, -0.36874712346205485, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.2798395974834222, 7);
  sqcRYGate(q, -2.2519603834885435, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9530448485500354, 9);
  sqcRYGate(q, -2.6001430150924087, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9562347460954924, 9);
  sqcRYGate(q, -0.25052727255629614, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.4073909802141564, 0);
  sqcRYGate(q, -3.0068669592700843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23094497459470217, 0);
  sqcRYGate(q, -1.4663648221106171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.634285648577812, 2);
  sqcRYGate(q, 2.917373893967874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6693300718791224, 2);
  sqcRYGate(q, -1.7132798042838973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1030627906953754, 4);
  sqcRYGate(q, -0.45542598889904545, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.101657021782832, 4);
  sqcRYGate(q, 0.0855907064846617, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3022313437780928, 6);
  sqcRYGate(q, -1.5982922383906544, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9694414587103015, 6);
  sqcRYGate(q, -1.6038008775623365, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4762622229138047, 8);
  sqcRYGate(q, -1.756352422286236, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4251164030805175, 8);
  sqcRYGate(q, 2.933740983816489, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5617782305693835, 10);
  sqcRYGate(q, -2.5415795153193526, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6738312297012161, 10);
  sqcRYGate(q, 2.632930018495963, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2307085679723198, 1);
  sqcRYGate(q, 3.0760266074537874, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1327830913512233, 1);
  sqcRYGate(q, -1.6278736114875827, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.580030321026217, 3);
  sqcRYGate(q, 0.18386955020695517, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5468543675479802, 3);
  sqcRYGate(q, -0.17086979361793997, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.03346194122445745, 5);
  sqcRYGate(q, 0.14024792980541712, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3399096207168825, 5);
  sqcRYGate(q, -0.11779623184106659, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6460675058158287, 7);
  sqcRYGate(q, -0.46692436385582514, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.02544981939796047, 7);
  sqcRYGate(q, 1.5083170227171996, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.1655588958154066, 9);
  sqcRYGate(q, 0.309981544136523, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.5711951969730333, 9);
  sqcRYGate(q, 1.5220326943309566, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.8559390711254644, 0);
  sqcRYGate(q, 0.30013474303769144, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.02898393217600148, 0);
  sqcRYGate(q, 2.6153664768033114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.898920572514599, 2);
  sqcRYGate(q, 0.18596409825333282, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9321750960215254, 2);
  sqcRYGate(q, 2.7768090501754874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5903182321923346, 4);
  sqcRYGate(q, -2.9937600888412548, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.05742455566567435, 4);
  sqcRYGate(q, -2.890945049603559, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.492625582792859, 6);
  sqcRYGate(q, 0.8486028677465294, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.18229296347658636, 6);
  sqcRYGate(q, 0.5663476279871924, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1281879007031237, 8);
  sqcRYGate(q, 0.44675471623271695, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.24704742313740358, 8);
  sqcRYGate(q, 2.802543128981921, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8003761304340034, 10);
  sqcRYGate(q, -1.2667617363942212, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5662555586844304, 10);
  sqcRYGate(q, 3.141517062271685, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.4135764696823051, 1);
  sqcRYGate(q, -1.9851138407950306, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.03635132180151, 1);
  sqcRYGate(q, 3.0049014696789724, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8751652830987728, 3);
  sqcRYGate(q, -1.2166891526022292, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.555199953850425, 3);
  sqcRYGate(q, -3.134085975696352, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1853389223815487, 5);
  sqcRYGate(q, 1.926177510878376, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.41032272643412787, 5);
  sqcRYGate(q, -2.92458601454685, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.65537493745222, 7);
  sqcRYGate(q, 0.454098292557477, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.08140110308893703, 7);
  sqcRYGate(q, -0.06980144060952961, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.09728490059948512, 9);
  sqcRYGate(q, -0.6805685609975692, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2523921679532535, 9);
  sqcRYGate(q, -0.5973494320368099, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.8804062758342059, 0);
  sqcRYGate(q, -1.0636956894385738, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.40989165384262055, 0);
  sqcRYGate(q, -2.0948034407592258, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6185430221622772, 2);
  sqcRYGate(q, 1.324851055505361, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.024648406588106755, 2);
  sqcRYGate(q, -2.328904684306351, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2697909231884552, 4);
  sqcRYGate(q, 1.533258749630595, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.09295933453113124, 4);
  sqcRYGate(q, 2.9340217399702593, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.762072121801347, 6);
  sqcRYGate(q, -1.9263491117726566, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9957469101637733, 6);
  sqcRYGate(q, -2.7973677826930032, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9034547105386266, 8);
  sqcRYGate(q, 3.0418856055040897, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1088653528557826, 8);
  sqcRYGate(q, 2.51815543855376, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0799664335351666, 10);
  sqcRYGate(q, 0.09292828007551551, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7198874164952809, 10);
  sqcRYGate(q, 2.6242257036568306, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8873933491531982, 1);
  sqcRYGate(q, -1.052792282769797, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0835223337592823, 1);
  sqcRYGate(q, -0.09596756570785273, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.939381360539719, 3);
  sqcRYGate(q, 1.1330425887064868, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1484878937886487, 3);
  sqcRYGate(q, -0.4333217338583984, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9587786348889884, 5);
  sqcRYGate(q, -0.777142089768301, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.814850327315855, 5);
  sqcRYGate(q, 0.20725354936526716, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6686054700279822, 7);
  sqcRYGate(q, -2.9018667575934263, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.04539784086175125, 7);
  sqcRYGate(q, 2.753604025839518, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.6494626453674064, 9);
  sqcRYGate(q, -1.5414083648139787, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.926218936976615, 9);
  sqcRYGate(q, -0.2283994486748897, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.4751735073272379, 0);
  sqcRYGate(q, 1.9347051096093446, 1);
  sqcRYGate(q, 0.4741467207039864, 2);
  sqcRYGate(q, -1.5825029455967181, 3);
  sqcRYGate(q, -1.5770153633006208, 4);
  sqcRYGate(q, 2.7334580142670637, 5);
  sqcRYGate(q, 2.4523934774469933, 6);
  sqcRYGate(q, -2.1302216564641556, 7);
  sqcRYGate(q, -2.429590477992099, 8);
  sqcRYGate(q, -1.7985576173374158, 9);
  sqcRYGate(q, 0.07304052999731425, 10);
  sqcRYGate(q, 1.4028541702178348, 11);

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
