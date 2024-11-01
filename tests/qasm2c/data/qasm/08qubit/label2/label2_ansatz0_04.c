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

  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.017126166942572667, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.08381729864865631, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.07355341328011589, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.4699984471956144, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.7277311474724217, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.2540203463107829, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.4255154049002304, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.0085216718396919, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.2743881232459099, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 2.6658814449366117, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -1.9915871425721006, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.09314442266688724, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.0010145887578945699, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.0006142659889752332, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.23311157305594157, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.1408947752865403, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.12980783738343246, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.1130322356386775, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 1.0941710936861266, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.3266812301164457, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.46566951221698577, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, -0.9920062269241657, 0);
  sqcRZGate(q, 0.07528066926637222, 0);
  sqcRXGate(q, 0.40204676799362493, 1);
  sqcRZGate(q, -0.4447296445438382, 1);
  sqcRXGate(q, -0.7834274933847325, 2);
  sqcRZGate(q, -0.4522513209082039, 2);
  sqcRXGate(q, 1.2410021901276578, 3);
  sqcRZGate(q, -0.29519704082992004, 3);
  sqcRXGate(q, -0.36596161432426316, 4);
  sqcRZGate(q, -0.46016453462686785, 4);
  sqcRXGate(q, -0.21227937601696203, 5);
  sqcRZGate(q, -0.21916250412876598, 5);
  sqcRXGate(q, -0.7785407068158472, 6);
  sqcRZGate(q, -0.37799953354994986, 6);
  sqcRXGate(q, 0.007025879123086636, 7);
  sqcRZGate(q, -0.024610409794900753, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.45312624827594944, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.253285089869477, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.24006263271039366, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.29576912849601, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.0893198675875438, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.0065669528103163, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.0005069333898573649, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.000306963377823198, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -6.324689935057861e-05, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 2.771465881398215, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -2.7152163663821933, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -1.1561595361511017, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.0022392854988864536, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.00018387418286123534, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.0051912763821446075, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.16337841917763035, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.010005029361750932, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.23652830425638027, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 1.1332913215522993, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.3174868543603673, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.13459440792474342, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, -1.1923202597502909, 0);
  sqcRZGate(q, 0.36307309071307886, 0);
  sqcRXGate(q, 0.3173986272073435, 1);
  sqcRZGate(q, -0.08659313580377478, 1);
  sqcRXGate(q, -0.6077774191793246, 2);
  sqcRZGate(q, -0.6635345972358598, 2);
  sqcRXGate(q, 0.6989857891439493, 3);
  sqcRZGate(q, 0.05537978301733468, 3);
  sqcRXGate(q, 0.09119906664965709, 4);
  sqcRZGate(q, 0.7385648600788783, 4);
  sqcRXGate(q, -0.3356118364328174, 5);
  sqcRZGate(q, -0.5698862661218423, 5);
  sqcRXGate(q, -0.3392270189732195, 6);
  sqcRZGate(q, -0.40768044938634374, 6);
  sqcRXGate(q, -0.17418733251079918, 7);
  sqcRZGate(q, 0.06841103859212908, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.32846599338792754, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.1774236769586341, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2922700482241226, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.22573491695824377, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.17227825704065644, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.6108786980240626, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.0016438730796623881, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.004944205062017302, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.0035811749433309835, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -2.4267453966675334, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 2.0828337193049338, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.1653554621682152, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.007031795839952968, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.05929186975820712, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.1746829890008006, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.09682917998815453, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.06927409077425961, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.1755106140929625, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.6021384033666465, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.3758938684308289, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.4346051840065055, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, -1.7434901144719015, 0);
  sqcRZGate(q, 0.15599712827109374, 0);
  sqcRXGate(q, 1.3838133532925168, 1);
  sqcRZGate(q, -0.24263682601485362, 1);
  sqcRXGate(q, 0.03901887528932016, 2);
  sqcRZGate(q, -0.2514056924784231, 2);
  sqcRXGate(q, 0.21815350367665937, 3);
  sqcRZGate(q, 0.6121328899910807, 3);
  sqcRXGate(q, -0.5736572457845588, 4);
  sqcRZGate(q, 0.08577833781840818, 4);
  sqcRXGate(q, 0.5344840743128205, 5);
  sqcRZGate(q, -0.053800157611420894, 5);
  sqcRXGate(q, 0.0809359078514937, 6);
  sqcRZGate(q, -0.14417029683939545, 6);
  sqcRXGate(q, -0.5795748901121555, 7);
  sqcRZGate(q, 0.36294735487264307, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.46023443173474854, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3553291644378854, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.7069061052183616, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.7200117080010123, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.4909358095021224, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.6114986398710188, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.0788154439005338, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.8739529683866147, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.020558701550703606, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 3.135417076000633, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 3.1371459560264183, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.019124162510359578, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.4714122533543475, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.8366359091908572, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.30644330786355134, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.008604302946015063, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.012657479058807786, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.007641285805925359, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.005141298061620642, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.6479793939095368, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.2818709331925202, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, -1.1241217548712947, 0);
  sqcRZGate(q, 0.13382387467966012, 0);
  sqcRXGate(q, 1.0929543675040152, 1);
  sqcRZGate(q, -0.33808128260035364, 1);
  sqcRXGate(q, -0.06658824415540798, 2);
  sqcRZGate(q, -0.35264506571019416, 2);
  sqcRXGate(q, 0.2788114023083215, 3);
  sqcRZGate(q, 0.5173571313755597, 3);
  sqcRXGate(q, 0.5050115775616782, 4);
  sqcRZGate(q, -0.7033889430944225, 4);
  sqcRXGate(q, -0.26732455273400796, 5);
  sqcRZGate(q, -0.22600894440589667, 5);
  sqcRXGate(q, 0.455538154284856, 6);
  sqcRZGate(q, -0.010205223890234873, 6);
  sqcRXGate(q, -0.7944284613882799, 7);
  sqcRZGate(q, 0.1661162994261692, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.1949387210386989, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.045061431446709, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.0971021156085252, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.35984428772208066, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.3198288446588309, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.16619499441695645, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.13837348345480283, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.06277327566766329, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.20544837535474322, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 3.090882359907915, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -3.1260367485490566, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.00319964991047233, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.38460650509668176, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.7592927074130787, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.3382914349507647, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.0021739637307080463, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.000179231400472799, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.004879542959962024, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.46198623035713093, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.14394502737538367, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.31777545835572396, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, -1.2298682641738365, 0);
  sqcRZGate(q, 0.016763179016135384, 0);
  sqcRXGate(q, 1.0823820595501046, 1);
  sqcRZGate(q, 0.01631549435132451, 1);
  sqcRXGate(q, 0.07842289184912099, 2);
  sqcRZGate(q, 0.028589814773793264, 2);
  sqcRXGate(q, 0.0338621836797845, 3);
  sqcRZGate(q, 0.25019691905366476, 3);
  sqcRXGate(q, 0.11277204730432758, 4);
  sqcRZGate(q, -0.3608692209546326, 4);
  sqcRXGate(q, 0.2712585232817144, 5);
  sqcRZGate(q, 0.49950686317388343, 5);
  sqcRXGate(q, 0.2356337561877806, 6);
  sqcRZGate(q, 0.05592679972300308, 6);
  sqcRXGate(q, -0.7843830441211499, 7);
  sqcRZGate(q, 0.8828794419739675, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.4207259771109428, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.039708327669758944, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.5053098369333834, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 1.7082689761666137, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.1993822843802417, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.3124072636260024, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.07694584835863158, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.007298063669815493, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.0014903040602446825, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.12108184452913986, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -3.111331373938539, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.06184971179897044, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 1.628253810046405, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.03813025112521874, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.4315258158416481, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.05641591983179853, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.007397965516818761, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.0054612375240002614, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.575159034529702, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.9039995358733719, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.8300797919813689, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, -1.227551929131249, 0);
  sqcRZGate(q, -1.0505761605006132, 0);
  sqcRXGate(q, 0.6447904208801015, 1);
  sqcRZGate(q, 0.4466935743718856, 1);
  sqcRXGate(q, -0.323433974323929, 2);
  sqcRZGate(q, -0.9172349059737147, 2);
  sqcRXGate(q, 0.5624865217457692, 3);
  sqcRZGate(q, 0.029297258859705043, 3);
  sqcRXGate(q, 0.14074699110528105, 4);
  sqcRZGate(q, 0.019983833373890803, 4);
  sqcRXGate(q, 0.12585186230679862, 5);
  sqcRZGate(q, 0.1678148427093079, 5);
  sqcRXGate(q, 1.2974470538290448, 6);
  sqcRZGate(q, 0.06038925613967769, 6);
  sqcRXGate(q, -0.8325615169644627, 7);
  sqcRZGate(q, -0.0782193050001768, 7);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.2630196854355797, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.42928292634708687, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.6193714953372573, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 1.4198065998749116, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.48776121170521003, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.17297350914849852, 2);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.01987598711732174, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.0682588992836387, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.011709461368856432, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 3.043826745824178, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -3.1310363380528754, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.008494511416842578, 4);
  sqcCXGate(q, 3, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.04959071125141452, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcSdgGate(q, 4);
  sqcHGate(q, 4);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.20549286279014492, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 4);
  sqcSGate(q, 4);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.2302224154649371, 5);
  sqcCXGate(q, 4, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.07074467286514104, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcSdgGate(q, 5);
  sqcHGate(q, 5);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.05287584462411841, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 5);
  sqcSGate(q, 5);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.05642425020744429, 6);
  sqcCXGate(q, 5, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.5110756216781148, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcSdgGate(q, 6);
  sqcHGate(q, 6);
  sqcSdgGate(q, 7);
  sqcHGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.9584617404110314, 7);
  sqcCXGate(q, 6, 7);
  sqcHGate(q, 6);
  sqcSGate(q, 6);
  sqcHGate(q, 7);
  sqcSGate(q, 7);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.9959643770339294, 7);
  sqcCXGate(q, 6, 7);
  sqcRXGate(q, -1.3729328540045214, 0);
  sqcRZGate(q, -0.24051998081115428, 0);
  sqcRXGate(q, 0.2839787260257948, 1);
  sqcRZGate(q, 0.6185364719900193, 1);
  sqcRXGate(q, 0.13973095824520843, 2);
  sqcRZGate(q, -1.4882893600123615, 2);
  sqcRXGate(q, -0.011902607209952058, 3);
  sqcRZGate(q, 0.6969986242356561, 3);
  sqcRXGate(q, 0.6871475491014886, 4);
  sqcRZGate(q, -1.609801289480968, 4);
  sqcRXGate(q, -0.738976292132117, 5);
  sqcRZGate(q, 0.5343091858647337, 5);
  sqcRXGate(q, 2.312163545657189, 6);
  sqcRZGate(q, 0.5253977857069353, 6);
  sqcRXGate(q, -0.8373372661890093, 7);
  sqcRZGate(q, 0.47283031672895437, 7);

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
