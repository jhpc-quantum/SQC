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

  sqcRYGate(q, 1.512792885748792, 0);
  sqcRZGate(q, 0.04337213726083445, 0);
  sqcRYGate(q, -0.005373404124368264, 1);
  sqcRZGate(q, 2.3852016009143653, 1);
  sqcRYGate(q, 0.54678964521431, 2);
  sqcRZGate(q, 2.571566670941908, 2);
  sqcRYGate(q, 3.1379817737381135, 3);
  sqcRZGate(q, -1.128796291667997, 3);
  sqcRYGate(q, 1.5706487863974095, 4);
  sqcRZGate(q, 1.5707877410650821, 4);
  sqcRYGate(q, -1.5672389096790882, 5);
  sqcRZGate(q, 1.5717241187069613, 5);
  sqcRYGate(q, -3.1386143616913342, 6);
  sqcRZGate(q, -2.532282375883699, 6);
  sqcRYGate(q, -2.640474244597138, 7);
  sqcRZGate(q, -1.1437474969632822, 7);
  sqcRYGate(q, -0.3608509115185922, 8);
  sqcRZGate(q, 1.7002759808922299, 8);
  sqcRYGate(q, 3.137021326965199, 9);
  sqcRZGate(q, 0.5839937082922879, 9);
  sqcRYGate(q, 3.129365207169943, 10);
  sqcRZGate(q, 2.328987926012875, 10);
  sqcRYGate(q, -1.5863296982380009, 11);
  sqcRZGate(q, -1.5810215297916432, 11);
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
  sqcRYGate(q, 1.606831993644103, 0);
  sqcRZGate(q, 0.29843378084442906, 0);
  sqcRYGate(q, -1.3389915492429187, 1);
  sqcRZGate(q, 0.44670282264680683, 1);
  sqcRYGate(q, 3.1376668069621543, 2);
  sqcRZGate(q, 1.3060633360098222, 2);
  sqcRYGate(q, -0.0020480653394557144, 3);
  sqcRZGate(q, 2.97804869430016, 3);
  sqcRYGate(q, -1.5703208454250548, 4);
  sqcRZGate(q, -0.10863002004420591, 4);
  sqcRYGate(q, 1.5711430435121034, 5);
  sqcRZGate(q, -1.8943140749295408, 5);
  sqcRYGate(q, -1.570954867668504, 6);
  sqcRZGate(q, 3.140421257536373, 6);
  sqcRYGate(q, -3.136425867602473, 7);
  sqcRZGate(q, -2.1027883617905148, 7);
  sqcRYGate(q, -0.011373349618238717, 8);
  sqcRZGate(q, 1.8621608379058066, 8);
  sqcRYGate(q, 0.34932807671982236, 9);
  sqcRZGate(q, -2.151103718737433, 9);
  sqcRYGate(q, -1.5706709814703408, 10);
  sqcRZGate(q, 3.020394332439658, 10);
  sqcRYGate(q, -1.1796742089714156, 11);
  sqcRZGate(q, 1.5596902306354758, 11);
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
  sqcRYGate(q, 1.5571148034355493, 0);
  sqcRZGate(q, -0.05070439671568111, 0);
  sqcRYGate(q, -0.24678473869465106, 1);
  sqcRZGate(q, -0.7705664184029599, 1);
  sqcRYGate(q, 0.43346597873061565, 2);
  sqcRZGate(q, -3.1383495769534906, 2);
  sqcRYGate(q, 0.04048250857878344, 3);
  sqcRZGate(q, 1.70236230981483, 3);
  sqcRYGate(q, -3.129257314689072, 4);
  sqcRZGate(q, -0.8458588440358774, 4);
  sqcRYGate(q, 2.9025129713173174, 5);
  sqcRZGate(q, -0.016451072876753403, 5);
  sqcRYGate(q, 1.5716030975972268, 6);
  sqcRZGate(q, 2.51193672631042, 6);
  sqcRYGate(q, -0.0030069953633211194, 7);
  sqcRZGate(q, 1.7927652437639665, 7);
  sqcRYGate(q, -1.7372259252486089, 8);
  sqcRZGate(q, 1.1165151178003416, 8);
  sqcRYGate(q, 1.5827993581457624, 9);
  sqcRZGate(q, 1.5444989816498251, 9);
  sqcRYGate(q, 3.131121628639654, 10);
  sqcRZGate(q, -0.12650637828940783, 10);
  sqcRYGate(q, -1.5506192686072744, 11);
  sqcRZGate(q, -3.0740071646445823, 11);
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
  sqcRYGate(q, -2.0879654730019404, 0);
  sqcRZGate(q, 1.3484462238157713, 0);
  sqcRYGate(q, 2.5449617478635864, 1);
  sqcRZGate(q, -1.8053156680416054, 1);
  sqcRYGate(q, 1.604402489471947, 2);
  sqcRZGate(q, 0.0026423723645354613, 2);
  sqcRYGate(q, 1.5699385589309303, 3);
  sqcRZGate(q, 0.35542618365282913, 3);
  sqcRYGate(q, 3.1409037901755896, 4);
  sqcRZGate(q, 2.860100269158074, 4);
  sqcRYGate(q, -1.5384706212386572, 5);
  sqcRZGate(q, -3.1408279370582313, 5);
  sqcRYGate(q, 3.141285794706676, 6);
  sqcRZGate(q, -2.306169795251196, 6);
  sqcRYGate(q, 1.4037652584226015, 7);
  sqcRZGate(q, 0.6963617086359246, 7);
  sqcRYGate(q, 1.4501092980299914, 8);
  sqcRZGate(q, -3.0854091736961684, 8);
  sqcRYGate(q, 2.8519990118141467, 9);
  sqcRZGate(q, -1.5022518768190685, 9);
  sqcRYGate(q, 0.7111326611841067, 10);
  sqcRZGate(q, 1.6174615116408646, 10);
  sqcRYGate(q, 2.4105203723959296, 11);
  sqcRZGate(q, 1.6188822906413212, 11);
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
  sqcRYGate(q, -3.138161625745852, 0);
  sqcRZGate(q, 0.15481696271544482, 0);
  sqcRYGate(q, -0.16821552478970592, 1);
  sqcRZGate(q, 2.783363965570735, 1);
  sqcRYGate(q, -3.13974621654946, 2);
  sqcRZGate(q, 1.9761566195335245, 2);
  sqcRYGate(q, -0.004674630299877691, 3);
  sqcRZGate(q, -1.883355077711158, 3);
  sqcRYGate(q, 3.1353950087234614, 4);
  sqcRZGate(q, -1.4194809233548022, 4);
  sqcRYGate(q, -1.570678398581454, 5);
  sqcRZGate(q, -3.123781143895347, 5);
  sqcRYGate(q, 0.003354931420519236, 6);
  sqcRZGate(q, -2.2802698957236567, 6);
  sqcRYGate(q, 0.0001401544160220319, 7);
  sqcRZGate(q, 2.4433078794357543, 7);
  sqcRYGate(q, 0.2868494191219195, 8);
  sqcRZGate(q, 2.449404594613836, 8);
  sqcRYGate(q, 2.7853035024333774, 9);
  sqcRZGate(q, -1.637120709753925, 9);
  sqcRYGate(q, 1.4566838264207211, 10);
  sqcRZGate(q, 3.1060734954773594, 10);
  sqcRYGate(q, -1.5032520633052053, 11);
  sqcRZGate(q, -2.8111378517582133, 11);
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
  sqcRYGate(q, 0.04250659053777639, 0);
  sqcRZGate(q, -1.92865805536176, 0);
  sqcRYGate(q, 0.20432439789936296, 1);
  sqcRZGate(q, -1.255187483621901, 1);
  sqcRYGate(q, -0.002840059628025138, 2);
  sqcRZGate(q, 2.7836543169659236, 2);
  sqcRYGate(q, -1.6264572492717635, 3);
  sqcRZGate(q, 0.025455231111814487, 3);
  sqcRYGate(q, -1.5834707358176168, 4);
  sqcRZGate(q, 1.5760822653387985, 4);
  sqcRYGate(q, 3.1093075866534767, 5);
  sqcRZGate(q, -1.5571570646464208, 5);
  sqcRYGate(q, 1.5798895938777635, 6);
  sqcRZGate(q, 0.0016132713501679776, 6);
  sqcRYGate(q, -1.5704411658907358, 7);
  sqcRZGate(q, -3.121916511603887, 7);
  sqcRYGate(q, 3.1309210027770784, 8);
  sqcRZGate(q, 2.4831781248537323, 8);
  sqcRYGate(q, -1.4498939835754314, 9);
  sqcRZGate(q, 2.3389007815527942, 9);
  sqcRYGate(q, 2.948531067987978, 10);
  sqcRZGate(q, 1.4676112713867555, 10);
  sqcRYGate(q, -1.4146306319039532, 11);
  sqcRZGate(q, 0.0005587519789775895, 11);
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
  sqcRYGate(q, -1.569396427883571, 0);
  sqcRZGate(q, -0.06711241414236624, 0);
  sqcRYGate(q, -1.5733928704269164, 1);
  sqcRZGate(q, -2.345926008731943, 1);
  sqcRYGate(q, -1.5714079621012629, 2);
  sqcRZGate(q, -1.5745137667171303, 2);
  sqcRYGate(q, 1.5655458356323197, 3);
  sqcRZGate(q, 3.1242630920757697, 3);
  sqcRYGate(q, -1.5409112781751757, 4);
  sqcRZGate(q, 0.2473843964982386, 4);
  sqcRYGate(q, 1.5689224034938505, 5);
  sqcRZGate(q, 1.6555585619859354, 5);
  sqcRYGate(q, 2.7072505298560823, 6);
  sqcRZGate(q, -6.497548056572099e-05, 6);
  sqcRYGate(q, -0.4375199651334096, 7);
  sqcRZGate(q, -2.605077169056342, 7);
  sqcRYGate(q, -3.1142895150822296, 8);
  sqcRZGate(q, -1.0190851453927487, 8);
  sqcRYGate(q, -3.133206181067829, 9);
  sqcRZGate(q, -0.33566148279357844, 9);
  sqcRYGate(q, -0.07476246333694103, 10);
  sqcRZGate(q, 0.04933238960439735, 10);
  sqcRYGate(q, -0.017405292200662892, 11);
  sqcRZGate(q, 0.8022350214463438, 11);
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
  sqcRYGate(q, -0.011890863409971253, 0);
  sqcRZGate(q, -3.0683284950499434, 0);
  sqcRYGate(q, -0.0007759795042909801, 1);
  sqcRZGate(q, 2.3603768523754884, 1);
  sqcRYGate(q, 1.5704529674697527, 2);
  sqcRZGate(q, 1.568915264983712, 2);
  sqcRYGate(q, 2.7854657242960053, 3);
  sqcRZGate(q, -1.5828066937761214, 3);
  sqcRYGate(q, -0.06977037264273457, 4);
  sqcRZGate(q, 1.325683806421333, 4);
  sqcRYGate(q, 3.139628671875088, 5);
  sqcRZGate(q, 0.08390707623261484, 5);
  sqcRYGate(q, 1.2400346562145523, 6);
  sqcRZGate(q, -3.1156179655632172, 6);
  sqcRYGate(q, 0.016509368809945357, 7);
  sqcRZGate(q, -1.1850809851753412, 7);
  sqcRYGate(q, -1.827814279955045, 8);
  sqcRZGate(q, 0.1569889182282962, 8);
  sqcRYGate(q, 1.7276718366005424, 9);
  sqcRZGate(q, -0.11095539359066567, 9);
  sqcRYGate(q, 1.5094009472091603, 10);
  sqcRZGate(q, -0.1832579979368498, 10);
  sqcRYGate(q, -0.24637337665879855, 11);
  sqcRZGate(q, 1.7551830252711715, 11);
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
  sqcRYGate(q, 1.5731496646370797, 0);
  sqcRZGate(q, -1.5698399599947281, 0);
  sqcRYGate(q, 1.5600091046804332, 1);
  sqcRZGate(q, 0.00131411406060834, 1);
  sqcRYGate(q, 1.6164142935486399, 2);
  sqcRZGate(q, -1.6190722936906428, 2);
  sqcRYGate(q, -1.5729014153642373, 3);
  sqcRZGate(q, 3.128078201698661, 3);
  sqcRYGate(q, 1.5711369337463976, 4);
  sqcRZGate(q, 2.8303613975999027, 4);
  sqcRYGate(q, 1.5705604142253653, 5);
  sqcRZGate(q, 0.18463051656892304, 5);
  sqcRYGate(q, 0.10477842230435763, 6);
  sqcRZGate(q, 1.7459516257764571, 6);
  sqcRYGate(q, -3.017004662476195, 7);
  sqcRZGate(q, 0.9413954529841215, 7);
  sqcRYGate(q, 1.5642161989801346, 8);
  sqcRZGate(q, 1.6403956932073898, 8);
  sqcRYGate(q, -1.5659918736899958, 9);
  sqcRZGate(q, -1.5747955908955928, 9);
  sqcRYGate(q, -3.0758154258914883, 10);
  sqcRZGate(q, 0.26745184613538364, 10);
  sqcRYGate(q, -3.1381074364455652, 11);
  sqcRZGate(q, 1.0101012356440293, 11);
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
  sqcRYGate(q, -1.7362778960079306, 0);
  sqcRZGate(q, -1.5059591809959976, 0);
  sqcRYGate(q, -1.572421993259714, 1);
  sqcRZGate(q, -0.0024973348540600075, 1);
  sqcRYGate(q, -1.572210229258837, 2);
  sqcRZGate(q, 3.1398104213644156, 2);
  sqcRYGate(q, -1.5766231258579584, 3);
  sqcRZGate(q, -2.986237374742819, 3);
  sqcRYGate(q, 3.14076797194911, 4);
  sqcRZGate(q, -1.8862096326435351, 4);
  sqcRYGate(q, -0.00033711400006186665, 5);
  sqcRZGate(q, 2.934019653916619, 5);
  sqcRYGate(q, -0.0027100652893992105, 6);
  sqcRZGate(q, -1.3594275015210708, 6);
  sqcRYGate(q, -1.7082588124573823, 7);
  sqcRZGate(q, 1.528757999564941, 7);
  sqcRYGate(q, -3.0428979949342527, 8);
  sqcRZGate(q, -1.4953793695991298, 8);
  sqcRYGate(q, 0.5112484086656032, 9);
  sqcRZGate(q, -1.5611309073647415, 9);
  sqcRYGate(q, -3.1364603131819404, 10);
  sqcRZGate(q, 0.9476925548451002, 10);
  sqcRYGate(q, 1.567346188013367, 11);
  sqcRZGate(q, -0.002484023376513988, 11);
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
  sqcRYGate(q, 3.139944478141025, 0);
  sqcRZGate(q, 0.30508070916368, 0);
  sqcRYGate(q, 1.575799054110811, 1);
  sqcRZGate(q, 1.4443758635379877, 1);
  sqcRYGate(q, -1.6171467750339978, 2);
  sqcRZGate(q, 1.5729503264889297, 2);
  sqcRYGate(q, -3.1143248228527582, 3);
  sqcRZGate(q, 1.7262660810222314, 3);
  sqcRYGate(q, 0.5297328353380593, 4);
  sqcRZGate(q, 0.08140528776730617, 4);
  sqcRYGate(q, 1.5714755331262273, 5);
  sqcRZGate(q, -0.3915964940038944, 5);
  sqcRYGate(q, 3.1398098807371815, 6);
  sqcRZGate(q, 0.08608579836307138, 6);
  sqcRYGate(q, 1.5744546027798663, 7);
  sqcRZGate(q, -0.22257630687293967, 7);
  sqcRYGate(q, 1.5697294300730862, 8);
  sqcRZGate(q, 3.141289592235241, 8);
  sqcRYGate(q, 1.5697313817022822, 9);
  sqcRZGate(q, 2.911105569390614, 9);
  sqcRYGate(q, 0.01899166398905387, 10);
  sqcRZGate(q, -1.8724831308058727, 10);
  sqcRYGate(q, -1.542342477279352, 11);
  sqcRZGate(q, -3.1319588859132206, 11);
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
  sqcRYGate(q, 0.004136236360605672, 0);
  sqcRZGate(q, -2.446066999601937, 0);
  sqcRYGate(q, 3.139485395941943, 1);
  sqcRZGate(q, -1.6984171277570903, 1);
  sqcRYGate(q, 1.5698126935749128, 2);
  sqcRZGate(q, -1.6514441932000672, 2);
  sqcRYGate(q, -1.5704814771551547, 3);
  sqcRZGate(q, 0.8459229211784897, 3);
  sqcRYGate(q, -3.134730700930543, 4);
  sqcRZGate(q, 0.7232566317116659, 4);
  sqcRYGate(q, -3.1414912582797303, 5);
  sqcRZGate(q, -1.9573124339920451, 5);
  sqcRYGate(q, 9.40328922022167e-06, 6);
  sqcRZGate(q, 2.3870521569914334, 6);
  sqcRYGate(q, -0.00018413345992565708, 7);
  sqcRZGate(q, -2.709036106143938, 7);
  sqcRYGate(q, -1.5704107964942766, 8);
  sqcRZGate(q, -0.001186488278333897, 8);
  sqcRYGate(q, 0.001122434408932153, 9);
  sqcRZGate(q, -1.3407528235910302, 9);
  sqcRYGate(q, -1.5644309053799468, 10);
  sqcRZGate(q, 1.779960050492213, 10);
  sqcRYGate(q, 2.0697208481192533, 11);
  sqcRZGate(q, -1.642381714227818, 11);
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
  sqcRYGate(q, 0.0002130948276652944, 0);
  sqcRZGate(q, -2.504412638491028, 0);
  sqcRYGate(q, 1.5673294584933295, 1);
  sqcRZGate(q, 0.27415789997938317, 1);
  sqcRYGate(q, -3.113461477711362, 2);
  sqcRZGate(q, -2.0816773495340986, 2);
  sqcRYGate(q, 3.1391610779224894, 3);
  sqcRZGate(q, -2.2932195846993357, 3);
  sqcRYGate(q, 3.0971871132252766, 4);
  sqcRZGate(q, 1.9651984246963676, 4);
  sqcRYGate(q, -1.5306329570431358, 5);
  sqcRZGate(q, -0.9203603955536938, 5);
  sqcRYGate(q, 0.019992292840045778, 6);
  sqcRZGate(q, -2.185803635853723, 6);
  sqcRYGate(q, -1.6561196705966728, 7);
  sqcRZGate(q, 3.0063148458838076, 7);
  sqcRYGate(q, -1.5700710481888285, 8);
  sqcRZGate(q, 1.7584815046204163, 8);
  sqcRYGate(q, 1.5754442779509688, 9);
  sqcRZGate(q, -1.8295475855517964, 9);
  sqcRYGate(q, 0.34281886466036493, 10);
  sqcRZGate(q, 2.9979390298431263, 10);
  sqcRYGate(q, -1.5795966901421403, 11);
  sqcRZGate(q, 0.12509892429047761, 11);
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
  sqcRYGate(q, 1.5857665605518572, 0);
  sqcRZGate(q, 1.569264544175276, 0);
  sqcRYGate(q, -0.003316569290366722, 1);
  sqcRZGate(q, -0.08445302383614005, 1);
  sqcRYGate(q, -1.4340307924706908, 2);
  sqcRZGate(q, -0.48694401384007185, 2);
  sqcRYGate(q, 1.1764290668085484, 3);
  sqcRZGate(q, -0.0024526113194492482, 3);
  sqcRYGate(q, 1.4828189108584411e-05, 4);
  sqcRZGate(q, 0.25080021226790455, 4);
  sqcRYGate(q, 0.0003619418047436898, 5);
  sqcRZGate(q, -2.2314215716973695, 5);
  sqcRYGate(q, 3.1409809785558167, 6);
  sqcRZGate(q, -2.7153553385230627, 6);
  sqcRYGate(q, -3.1411052003952173, 7);
  sqcRZGate(q, 3.013499953102433, 7);
  sqcRYGate(q, 0.03554410389605156, 8);
  sqcRZGate(q, 2.9540686051105975, 8);
  sqcRYGate(q, 3.1410402577749252, 9);
  sqcRZGate(q, -0.2635440793052659, 9);
  sqcRYGate(q, -1.5714549613486364, 10);
  sqcRZGate(q, 1.5713243409509356, 10);
  sqcRYGate(q, -1.570270050518439, 11);
  sqcRZGate(q, -3.1370576217342454, 11);
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
  sqcRYGate(q, 1.5725805647460689, 0);
  sqcRZGate(q, 3.0709906403345633, 0);
  sqcRYGate(q, -1.5700935283351918, 1);
  sqcRZGate(q, -1.570193161393707, 1);
  sqcRYGate(q, -0.2812775787767875, 2);
  sqcRZGate(q, 0.012140343091598796, 2);
  sqcRYGate(q, 1.570767502107741, 3);
  sqcRZGate(q, -1.3841164513654052, 3);
  sqcRYGate(q, 1.571368589914636, 4);
  sqcRZGate(q, -0.4639797384771007, 4);
  sqcRYGate(q, -3.04502077199294, 5);
  sqcRZGate(q, -2.463629573382006, 5);
  sqcRYGate(q, 3.130844333466476, 6);
  sqcRZGate(q, 1.6552093783654482, 6);
  sqcRYGate(q, 1.6547679432825761, 7);
  sqcRZGate(q, -2.425219174386489, 7);
  sqcRYGate(q, 1.5730049734225457, 8);
  sqcRZGate(q, -1.5699032961430004, 8);
  sqcRYGate(q, 3.138880250573199, 9);
  sqcRZGate(q, -1.567041844982306, 9);
  sqcRYGate(q, 1.4707009103921078, 10);
  sqcRZGate(q, 1.9821223142705984, 10);
  sqcRYGate(q, 1.57036505113576, 11);
  sqcRZGate(q, -2.8273949822534723, 11);
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
  sqcRYGate(q, -3.126994052052625, 0);
  sqcRZGate(q, 1.5040585197481056, 0);
  sqcRYGate(q, -1.5713267713008339, 1);
  sqcRZGate(q, 1.5708895002191192, 1);
  sqcRYGate(q, 1.2745749822089287, 2);
  sqcRZGate(q, -2.2336106139990317, 2);
  sqcRYGate(q, -3.1375250568090283, 3);
  sqcRZGate(q, -2.599726548145081, 3);
  sqcRYGate(q, 0.00011509713804880306, 4);
  sqcRZGate(q, -1.1980777505867026, 4);
  sqcRYGate(q, 3.141459028157573, 5);
  sqcRZGate(q, 2.2593134477968406, 5);
  sqcRYGate(q, 0.003232914987783928, 6);
  sqcRZGate(q, -2.6737308326061244, 6);
  sqcRYGate(q, -0.00104027091039774, 7);
  sqcRZGate(q, -0.9619833441502781, 7);
  sqcRYGate(q, 1.571426931827279, 8);
  sqcRZGate(q, 1.6758439425937581, 8);
  sqcRYGate(q, -1.099828512471632, 9);
  sqcRZGate(q, -0.2764978394945654, 9);
  sqcRYGate(q, -3.1408129167471817, 10);
  sqcRZGate(q, 1.9762377466319825, 10);
  sqcRYGate(q, 3.139824760672385, 11);
  sqcRZGate(q, 1.786266882984571, 11);
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
  sqcRYGate(q, 1.5769266458367477, 0);
  sqcRZGate(q, 3.029927080056802, 0);
  sqcRYGate(q, 1.570534280219957, 1);
  sqcRZGate(q, -0.25745483961099325, 1);
  sqcRYGate(q, -0.0011886471381732377, 2);
  sqcRZGate(q, -2.414669209478003, 2);
  sqcRYGate(q, -3.083549363724424, 3);
  sqcRZGate(q, 1.5990604681653466, 3);
  sqcRYGate(q, 0.0008255095984601861, 4);
  sqcRZGate(q, -2.935400010948093, 4);
  sqcRYGate(q, 1.5734469484027402, 5);
  sqcRZGate(q, 2.854531629779847, 5);
  sqcRYGate(q, -1.5702514450680436, 6);
  sqcRZGate(q, 2.264712644996628, 6);
  sqcRYGate(q, 0.00830478270530758, 7);
  sqcRZGate(q, 0.10419244721028954, 7);
  sqcRYGate(q, 0.004537814637363864, 8);
  sqcRZGate(q, 2.1521657505411698, 8);
  sqcRYGate(q, -3.1366889473071407, 9);
  sqcRZGate(q, 2.509609186164681, 9);
  sqcRYGate(q, -1.5711102656630258, 10);
  sqcRZGate(q, -0.888961388153493, 10);
  sqcRYGate(q, -1.5699062483838733, 11);
  sqcRZGate(q, 2.7827137594661018, 11);

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
