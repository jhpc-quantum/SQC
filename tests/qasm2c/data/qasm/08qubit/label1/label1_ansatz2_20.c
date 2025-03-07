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

  sqcRYGate(q, 0.18650016182259233, 0);
  sqcRZGate(q, -2.2112143631462926, 0);
  sqcRYGate(q, 2.6075885502180665, 1);
  sqcRZGate(q, -1.636884142597955, 1);
  sqcRYGate(q, 2.326878193410698, 2);
  sqcRZGate(q, -1.8653647765540269, 2);
  sqcRYGate(q, -0.7688055014072989, 3);
  sqcRZGate(q, 1.9167952879168013, 3);
  sqcRYGate(q, -2.477602213799079, 4);
  sqcRZGate(q, 1.2406460993286998, 4);
  sqcRYGate(q, -0.836107748512651, 5);
  sqcRZGate(q, 1.9050803008083816, 5);
  sqcRYGate(q, -0.814801035355131, 6);
  sqcRZGate(q, -2.598397291635054, 6);
  sqcRYGate(q, 1.8163456155662838, 7);
  sqcRZGate(q, 3.0986482219878932, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.4130858301619798, 0);
  sqcRZGate(q, 1.3459019943521566, 0);
  sqcRYGate(q, 0.9303437127905702, 1);
  sqcRZGate(q, -2.0787202335784443, 1);
  sqcRYGate(q, 2.0646857560444722, 2);
  sqcRZGate(q, 2.547034108582307, 2);
  sqcRYGate(q, 1.8842763317649875, 3);
  sqcRZGate(q, -2.992731675846792, 3);
  sqcRYGate(q, 2.7097323905543487, 4);
  sqcRZGate(q, 3.005502667402638, 4);
  sqcRYGate(q, 2.3786925608956206, 5);
  sqcRZGate(q, 1.03532178921989, 5);
  sqcRYGate(q, -2.413995371002947, 6);
  sqcRZGate(q, 1.9811842952318715, 6);
  sqcRYGate(q, 2.023982230447431, 7);
  sqcRZGate(q, 0.4039366218417939, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.0684043801205796, 0);
  sqcRZGate(q, -0.6862699318703189, 0);
  sqcRYGate(q, 1.00716244002053, 1);
  sqcRZGate(q, -1.7315565106184199, 1);
  sqcRYGate(q, 2.6122172098720613, 2);
  sqcRZGate(q, 3.0871913287482835, 2);
  sqcRYGate(q, 2.189429622679949, 3);
  sqcRZGate(q, -3.0468149326703893, 3);
  sqcRYGate(q, 2.441984844859771, 4);
  sqcRZGate(q, 2.8776681403211652, 4);
  sqcRYGate(q, 1.7922920082870053, 5);
  sqcRZGate(q, -2.2094868886678656, 5);
  sqcRYGate(q, 2.023573114680757, 6);
  sqcRZGate(q, -1.939034480485664, 6);
  sqcRYGate(q, -2.0076350376409415, 7);
  sqcRZGate(q, -0.8546197244475415, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.9485887668124597, 0);
  sqcRZGate(q, -0.987166135939038, 0);
  sqcRYGate(q, 0.14637863464691225, 1);
  sqcRZGate(q, -0.8724668537521056, 1);
  sqcRYGate(q, 2.967507640559158, 2);
  sqcRZGate(q, 0.10596838060492342, 2);
  sqcRYGate(q, -1.684468035737554, 3);
  sqcRZGate(q, -1.2808677060661353, 3);
  sqcRYGate(q, -1.2543827432808092, 4);
  sqcRZGate(q, -0.7686671311371196, 4);
  sqcRYGate(q, 1.8216940125040928, 5);
  sqcRZGate(q, 2.4248547139605883, 5);
  sqcRYGate(q, 2.693117758311877, 6);
  sqcRZGate(q, 1.8731739004643648, 6);
  sqcRYGate(q, -2.1786876351839766, 7);
  sqcRZGate(q, -2.4251434578186877, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.0997782833869794, 0);
  sqcRZGate(q, 2.7110452759756725, 0);
  sqcRYGate(q, 1.1868022342312416, 1);
  sqcRZGate(q, 1.1594504960260192, 1);
  sqcRYGate(q, 0.44861468507317065, 2);
  sqcRZGate(q, 0.09125091247692918, 2);
  sqcRYGate(q, 0.30132132653171123, 3);
  sqcRZGate(q, -2.104629604558081, 3);
  sqcRYGate(q, 2.4442549496299044, 4);
  sqcRZGate(q, -2.727043276465819, 4);
  sqcRYGate(q, -2.1580054798377573, 5);
  sqcRZGate(q, -1.139585496421766, 5);
  sqcRYGate(q, 0.5201626250869289, 6);
  sqcRZGate(q, 0.7769106422422576, 6);
  sqcRYGate(q, -1.063774052389764, 7);
  sqcRZGate(q, 0.31286817225451236, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.9050685608295268, 0);
  sqcRZGate(q, 1.28165494400649, 0);
  sqcRYGate(q, -1.725081575352064, 1);
  sqcRZGate(q, 0.8369629949371582, 1);
  sqcRYGate(q, -0.4749402404556822, 2);
  sqcRZGate(q, -2.44077368560637, 2);
  sqcRYGate(q, 2.473093379242789, 3);
  sqcRZGate(q, -1.4875454308494716, 3);
  sqcRYGate(q, 0.30589453680597284, 4);
  sqcRZGate(q, 0.6141087051190696, 4);
  sqcRYGate(q, -0.5648906220894003, 5);
  sqcRZGate(q, 0.24400709012398633, 5);
  sqcRYGate(q, -0.4659049226182049, 6);
  sqcRZGate(q, 1.4758918875117581, 6);
  sqcRYGate(q, 1.9043308008761706, 7);
  sqcRZGate(q, -2.1119940819766057, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.023784165013533, 0);
  sqcRZGate(q, -2.6499150364714805, 0);
  sqcRYGate(q, -1.6018738245269997, 1);
  sqcRZGate(q, 0.927147488230005, 1);
  sqcRYGate(q, -1.346422571814285, 2);
  sqcRZGate(q, -2.7460590153894953, 2);
  sqcRYGate(q, -1.424106278665694, 3);
  sqcRZGate(q, -0.03109648943914589, 3);
  sqcRYGate(q, 2.992568472154307, 4);
  sqcRZGate(q, 2.6875399376233546, 4);
  sqcRYGate(q, -1.2843498188924267, 5);
  sqcRZGate(q, 2.343327007897307, 5);
  sqcRYGate(q, 2.3735313376895926, 6);
  sqcRZGate(q, -2.7378734272406837, 6);
  sqcRYGate(q, 2.6881558925073787, 7);
  sqcRZGate(q, -1.4732286403659811, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.361371780481777, 0);
  sqcRZGate(q, -1.137192095398539, 0);
  sqcRYGate(q, -0.586921202105061, 1);
  sqcRZGate(q, -1.8986934810526916, 1);
  sqcRYGate(q, -2.3660208249322947, 2);
  sqcRZGate(q, -2.4445489874469026, 2);
  sqcRYGate(q, 2.443088394545321, 3);
  sqcRZGate(q, 1.6157559494783054, 3);
  sqcRYGate(q, 0.5567459879450904, 4);
  sqcRZGate(q, -1.0558590972577953, 4);
  sqcRYGate(q, -0.8008770999439756, 5);
  sqcRZGate(q, 2.9074882663916735, 5);
  sqcRYGate(q, 1.4303314059826828, 6);
  sqcRZGate(q, -0.025577833914572835, 6);
  sqcRYGate(q, -1.0288412397059072, 7);
  sqcRZGate(q, -1.841148454356059, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.5403044918845952, 0);
  sqcRZGate(q, -2.286496222210599, 0);
  sqcRYGate(q, 0.32537908776502905, 1);
  sqcRZGate(q, -1.4737702074245664, 1);
  sqcRYGate(q, -2.8941855780949965, 2);
  sqcRZGate(q, 1.5181492681029782, 2);
  sqcRYGate(q, -2.8662576904500323, 3);
  sqcRZGate(q, -0.062156140683236646, 3);
  sqcRYGate(q, 1.3342699222318875, 4);
  sqcRZGate(q, 3.1237501021747947, 4);
  sqcRYGate(q, -2.6682771794485634, 5);
  sqcRZGate(q, -2.218182616090157, 5);
  sqcRYGate(q, -1.2821233073293001, 6);
  sqcRZGate(q, -0.33040627547299467, 6);
  sqcRYGate(q, 0.7673146742104346, 7);
  sqcRZGate(q, -2.7709135580109887, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.1051848833895175, 0);
  sqcRZGate(q, -1.0452874273185824, 0);
  sqcRYGate(q, -0.865312895959527, 1);
  sqcRZGate(q, -0.08841427991282201, 1);
  sqcRYGate(q, -1.4576733594345237, 2);
  sqcRZGate(q, -2.123148402602011, 2);
  sqcRYGate(q, -2.019044224440688, 3);
  sqcRZGate(q, -0.26982190549693447, 3);
  sqcRYGate(q, -0.7580465266748719, 4);
  sqcRZGate(q, -2.005149719684773, 4);
  sqcRYGate(q, 3.1275328065376855, 5);
  sqcRZGate(q, 3.137371302107229, 5);
  sqcRYGate(q, 0.5002270543017024, 6);
  sqcRZGate(q, 0.5249535339489221, 6);
  sqcRYGate(q, 2.409068649421395, 7);
  sqcRZGate(q, -1.6844311881662026, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.0381595105341679, 0);
  sqcRZGate(q, 2.541176703886819, 0);
  sqcRYGate(q, 2.263690169413888, 1);
  sqcRZGate(q, -2.700414020547155, 1);
  sqcRYGate(q, -1.6715689231784339, 2);
  sqcRZGate(q, -1.9756641547286362, 2);
  sqcRYGate(q, 0.5240716965120444, 3);
  sqcRZGate(q, 1.2335593559679097, 3);
  sqcRYGate(q, -0.522837713364272, 4);
  sqcRZGate(q, -1.5221356500646657, 4);
  sqcRYGate(q, 1.3161040933366994, 5);
  sqcRZGate(q, 0.5935738313855211, 5);
  sqcRYGate(q, 0.8305733280447773, 6);
  sqcRZGate(q, 2.9960308287767043, 6);
  sqcRYGate(q, -0.6894052698352358, 7);
  sqcRZGate(q, 2.9945902706431053, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.0664409636823404, 0);
  sqcRZGate(q, -2.2828337450509597, 0);
  sqcRYGate(q, 1.8506281646303284, 1);
  sqcRZGate(q, -2.836129568564565, 1);
  sqcRYGate(q, -1.4985730249393177, 2);
  sqcRZGate(q, -0.4810982504789674, 2);
  sqcRYGate(q, -2.3420223436158625, 3);
  sqcRZGate(q, -2.536488777135976, 3);
  sqcRYGate(q, 2.5735099803794226, 4);
  sqcRZGate(q, -2.029609150029337, 4);
  sqcRYGate(q, -0.15598499412645614, 5);
  sqcRZGate(q, -0.9591855287984363, 5);
  sqcRYGate(q, 1.7380066672942938, 6);
  sqcRZGate(q, 2.270383660110183, 6);
  sqcRYGate(q, 1.6876655659555961, 7);
  sqcRZGate(q, 0.598548750825417, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.9796933465294009, 0);
  sqcRZGate(q, -1.8592343879271496, 0);
  sqcRYGate(q, -1.52198862950454, 1);
  sqcRZGate(q, -1.1872742924872965, 1);
  sqcRYGate(q, 1.7189313898879877, 2);
  sqcRZGate(q, 2.070392376601795, 2);
  sqcRYGate(q, -1.442383027776697, 3);
  sqcRZGate(q, -2.0515218758825857, 3);
  sqcRYGate(q, 2.5860598708422597, 4);
  sqcRZGate(q, 0.4782167945855386, 4);
  sqcRYGate(q, -1.0542071254159648, 5);
  sqcRZGate(q, 1.8705134244950115, 5);
  sqcRYGate(q, -2.6419189367524436, 6);
  sqcRZGate(q, -0.3961542741547257, 6);
  sqcRYGate(q, -2.6496524177964758, 7);
  sqcRZGate(q, 1.243038746502408, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.906224684586746, 0);
  sqcRZGate(q, -2.3070214121084196, 0);
  sqcRYGate(q, -2.878488214527255, 1);
  sqcRZGate(q, 1.8062714635825, 1);
  sqcRYGate(q, -2.6247011355632313, 2);
  sqcRZGate(q, -0.20894691176513894, 2);
  sqcRYGate(q, -1.9214883105508003, 3);
  sqcRZGate(q, 1.0183237300634413, 3);
  sqcRYGate(q, -1.6729244960197087, 4);
  sqcRZGate(q, 1.5518291357219829, 4);
  sqcRYGate(q, 0.916633935006676, 5);
  sqcRZGate(q, -2.45139207757201, 5);
  sqcRYGate(q, -2.115068462006186, 6);
  sqcRZGate(q, -1.1222443696094229, 6);
  sqcRYGate(q, -1.944153288872446, 7);
  sqcRZGate(q, -1.7568841905939048, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.9659834830741763, 0);
  sqcRZGate(q, -2.8425412102738283, 0);
  sqcRYGate(q, -0.17244419830814997, 1);
  sqcRZGate(q, -0.00039150873603688296, 1);
  sqcRYGate(q, -1.461461111951045, 2);
  sqcRZGate(q, 2.809704054823563, 2);
  sqcRYGate(q, 0.9669731278517872, 3);
  sqcRZGate(q, -0.06272182245423992, 3);
  sqcRYGate(q, 2.253995782648351, 4);
  sqcRZGate(q, -0.41941946199368285, 4);
  sqcRYGate(q, 1.169028090214786, 5);
  sqcRZGate(q, -1.7963769264093, 5);
  sqcRYGate(q, -1.5095634261481115, 6);
  sqcRZGate(q, -0.455152771257759, 6);
  sqcRYGate(q, 1.516152856035127, 7);
  sqcRZGate(q, -1.1408499788268365, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.6787249724469238, 0);
  sqcRZGate(q, 2.5842031869159996, 0);
  sqcRYGate(q, -2.4592177692435224, 1);
  sqcRZGate(q, 0.8647215868509033, 1);
  sqcRYGate(q, -2.064623929673016, 2);
  sqcRZGate(q, 1.3808639758275874, 2);
  sqcRYGate(q, -2.7658594726329975, 3);
  sqcRZGate(q, -0.8093281382673451, 3);
  sqcRYGate(q, -2.5013286719195884, 4);
  sqcRZGate(q, -0.5293452484867414, 4);
  sqcRYGate(q, -0.7140157312919141, 5);
  sqcRZGate(q, 2.7146054092557996, 5);
  sqcRYGate(q, 2.1423756554506412, 6);
  sqcRZGate(q, 1.4291828199649768, 6);
  sqcRYGate(q, -0.2185164260233541, 7);
  sqcRZGate(q, -0.3040373852360403, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.1928784870783815, 0);
  sqcRZGate(q, 2.5563534110470303, 0);
  sqcRYGate(q, 0.38854223020712997, 1);
  sqcRZGate(q, 1.2993914598308924, 1);
  sqcRYGate(q, -1.2917345063433743, 2);
  sqcRZGate(q, -0.03575232839771339, 2);
  sqcRYGate(q, -0.5254532757902348, 3);
  sqcRZGate(q, 1.1410316208645561, 3);
  sqcRYGate(q, -0.5639035912460724, 4);
  sqcRZGate(q, -0.78287322873338, 4);
  sqcRYGate(q, 0.8066653786128513, 5);
  sqcRZGate(q, -1.0253361459220613, 5);
  sqcRYGate(q, -0.24893472752680068, 6);
  sqcRZGate(q, 1.2364216354815245, 6);
  sqcRYGate(q, 0.26249131394719494, 7);
  sqcRZGate(q, 0.2315110196894091, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.06121835825343998, 0);
  sqcRZGate(q, 1.0418055257667147, 0);
  sqcRYGate(q, -0.7385697071131831, 1);
  sqcRZGate(q, 2.4813345450120057, 1);
  sqcRYGate(q, 2.776303669844122, 2);
  sqcRZGate(q, -1.0377943694912422, 2);
  sqcRYGate(q, -2.9208166950408954, 3);
  sqcRZGate(q, -1.6963135905528288, 3);
  sqcRYGate(q, -0.5650724376171363, 4);
  sqcRZGate(q, -3.088970987048671, 4);
  sqcRYGate(q, 2.720623819426827, 5);
  sqcRZGate(q, 0.3461050362107668, 5);
  sqcRYGate(q, -0.8497962353498236, 6);
  sqcRZGate(q, -2.7212441604044963, 6);
  sqcRYGate(q, 0.9335442931306313, 7);
  sqcRZGate(q, 2.40776276082806, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.4594197144194041, 0);
  sqcRZGate(q, 1.0125855800181798, 0);
  sqcRYGate(q, 2.204682888087313, 1);
  sqcRZGate(q, -1.301021303825597, 1);
  sqcRYGate(q, -2.687550406898346, 2);
  sqcRZGate(q, -2.822106427689984, 2);
  sqcRYGate(q, 1.4571805622988956, 3);
  sqcRZGate(q, 0.022749571399513616, 3);
  sqcRYGate(q, -2.699884272879714, 4);
  sqcRZGate(q, 1.475902462518593, 4);
  sqcRYGate(q, 2.3898535705042203, 5);
  sqcRZGate(q, 2.3156106339886264, 5);
  sqcRYGate(q, 0.31810379825519064, 6);
  sqcRZGate(q, -0.3792873423252763, 6);
  sqcRYGate(q, -1.8317861276817458, 7);
  sqcRZGate(q, -2.2423040238191887, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.6573729081810642, 0);
  sqcRZGate(q, -1.1639900174133526, 0);
  sqcRYGate(q, -2.8974395572085156, 1);
  sqcRZGate(q, 1.7940276875277785, 1);
  sqcRYGate(q, -2.0180969079413416, 2);
  sqcRZGate(q, 1.0516866200246175, 2);
  sqcRYGate(q, 0.5516554572509187, 3);
  sqcRZGate(q, 1.3138749121915965, 3);
  sqcRYGate(q, 0.22784366139693102, 4);
  sqcRZGate(q, 1.21441305766365, 4);
  sqcRYGate(q, -0.8139734610750609, 5);
  sqcRZGate(q, -2.4008596081129148, 5);
  sqcRYGate(q, 0.5892156817932493, 6);
  sqcRZGate(q, 0.5074931724985495, 6);
  sqcRYGate(q, 1.2776194294884873, 7);
  sqcRZGate(q, -2.082135249375437, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.3452600664518934, 0);
  sqcRZGate(q, 0.157356837175743, 0);
  sqcRYGate(q, 0.8532497404524354, 1);
  sqcRZGate(q, 0.16562550257297723, 1);
  sqcRYGate(q, 0.5926201076814124, 2);
  sqcRZGate(q, -0.8131444671972368, 2);
  sqcRYGate(q, 2.781502832471718, 3);
  sqcRZGate(q, 0.6865776254730172, 3);
  sqcRYGate(q, -1.466094733784928, 4);
  sqcRZGate(q, -1.2039356473152216, 4);
  sqcRYGate(q, 0.17583245603736408, 5);
  sqcRZGate(q, 1.3670144747155417, 5);
  sqcRYGate(q, -2.7576076013978432, 6);
  sqcRZGate(q, -0.24785990392819102, 6);
  sqcRYGate(q, -2.7229482806765555, 7);
  sqcRZGate(q, 1.2227399222301418, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.4774045410994399, 0);
  sqcRZGate(q, 1.6689279695986696, 0);
  sqcRYGate(q, -1.7022120429992307, 1);
  sqcRZGate(q, 3.0030281429269468, 1);
  sqcRYGate(q, 3.0135766151944656, 2);
  sqcRZGate(q, -1.3540672306658443, 2);
  sqcRYGate(q, -2.4158248885530655, 3);
  sqcRZGate(q, 0.6742683731995069, 3);
  sqcRYGate(q, -0.783094501859442, 4);
  sqcRZGate(q, 2.0247090724452317, 4);
  sqcRYGate(q, 2.1208580639238246, 5);
  sqcRZGate(q, -1.9140405628981458, 5);
  sqcRYGate(q, 3.1089442877285696, 6);
  sqcRZGate(q, 2.540887273375345, 6);
  sqcRYGate(q, -0.48273384761888766, 7);
  sqcRZGate(q, 2.5834706391997866, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.837158341119219, 0);
  sqcRZGate(q, -0.5113952351047784, 0);
  sqcRYGate(q, -0.9165536575500814, 1);
  sqcRZGate(q, 1.332259123623274, 1);
  sqcRYGate(q, -2.676337817900274, 2);
  sqcRZGate(q, 2.984504713702184, 2);
  sqcRYGate(q, -1.8178065504800327, 3);
  sqcRZGate(q, 1.3423693931231568, 3);
  sqcRYGate(q, -1.5537594024050039, 4);
  sqcRZGate(q, 3.1256042310201204, 4);
  sqcRYGate(q, 0.18321060503236364, 5);
  sqcRZGate(q, -0.9886611894370709, 5);
  sqcRYGate(q, 1.3352402940055499, 6);
  sqcRZGate(q, 1.7149463330209604, 6);
  sqcRYGate(q, -0.7744959346179846, 7);
  sqcRZGate(q, 0.5225906427556108, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.6632089953130267, 0);
  sqcRZGate(q, 0.09100209079689392, 0);
  sqcRYGate(q, 2.2522878935155237, 1);
  sqcRZGate(q, -0.6133838196766227, 1);
  sqcRYGate(q, 2.7782232633155557, 2);
  sqcRZGate(q, -2.518248500663536, 2);
  sqcRYGate(q, -2.546611131693559, 3);
  sqcRZGate(q, -3.0808571445956052, 3);
  sqcRYGate(q, -2.9705843679235593, 4);
  sqcRZGate(q, -2.873415532651108, 4);
  sqcRYGate(q, 0.4532361136461781, 5);
  sqcRZGate(q, 0.20309913364400306, 5);
  sqcRYGate(q, -1.9859399477624955, 6);
  sqcRZGate(q, 2.251708050736795, 6);
  sqcRYGate(q, 1.1881832705192268, 7);
  sqcRZGate(q, -2.5778413214292577, 7);

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
