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

  sqcRYGate(q, -1.5704228940919371, 0);
  sqcRZGate(q, -5.664740058541895e-05, 0);
  sqcRYGate(q, -1.6046100962889067, 1);
  sqcRZGate(q, 1.6149800076088936, 1);
  sqcRYGate(q, -1.5711139331273156, 2);
  sqcRZGate(q, -2.2077943843790138e-05, 2);
  sqcRYGate(q, -1.205648782595121, 3);
  sqcRZGate(q, 0.41575419696673255, 3);
  sqcRYGate(q, 0.01366489021909231, 4);
  sqcRZGate(q, 1.3412156148537564, 4);
  sqcRYGate(q, 2.092648156912677, 5);
  sqcRZGate(q, 0.26483779024361526, 5);
  sqcRYGate(q, 3.058246432295105, 6);
  sqcRZGate(q, -0.3449374786134838, 6);
  sqcRYGate(q, -2.6996958494492147, 7);
  sqcRZGate(q, -2.2099909234428123, 7);
  sqcRYGate(q, -1.5707548799454574, 8);
  sqcRZGate(q, -0.006199925003161688, 8);
  sqcRYGate(q, 0.585210360858949, 9);
  sqcRZGate(q, -1.6512753412429384, 9);
  sqcRYGate(q, 1.5717972164878686, 10);
  sqcRZGate(q, 1.755095897568708, 10);
  sqcRYGate(q, -1.3966548890124342, 11);
  sqcRZGate(q, 0.06265202885866318, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -1.0354611140137129, 0);
  sqcRZGate(q, -0.8373044146642297, 0);
  sqcRYGate(q, 3.1361653856923564, 1);
  sqcRZGate(q, -3.116520803893751, 1);
  sqcRYGate(q, -1.8562369924066098, 2);
  sqcRZGate(q, 2.5087401588807534, 2);
  sqcRYGate(q, 0.5674388291602036, 3);
  sqcRZGate(q, -2.3523046502892475, 3);
  sqcRYGate(q, 1.580375548615031, 4);
  sqcRZGate(q, 3.043733916343093, 4);
  sqcRYGate(q, -0.36075008705361844, 5);
  sqcRZGate(q, 2.130342227889809, 5);
  sqcRYGate(q, -1.652001375350121, 6);
  sqcRZGate(q, -0.04841900033223468, 6);
  sqcRYGate(q, -1.7054437024468738, 7);
  sqcRZGate(q, -1.4163375278046928, 7);
  sqcRYGate(q, -2.6643295054990337, 8);
  sqcRZGate(q, -1.5768163654788996, 8);
  sqcRYGate(q, -0.1500154525840589, 9);
  sqcRZGate(q, 0.8197488934070816, 9);
  sqcRYGate(q, 3.1390500842987525, 10);
  sqcRZGate(q, 1.9011721590110613, 10);
  sqcRYGate(q, 1.156957553221237, 11);
  sqcRZGate(q, -1.748549048431559, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.136987944834337, 0);
  sqcRZGate(q, -0.8401036675512986, 0);
  sqcRYGate(q, 2.6805206364097627, 1);
  sqcRZGate(q, -2.773030575693504, 1);
  sqcRYGate(q, 3.1413784369106694, 2);
  sqcRZGate(q, -1.6296345688594753, 2);
  sqcRYGate(q, 2.844978741586188, 3);
  sqcRZGate(q, -2.527702126470819, 3);
  sqcRYGate(q, 1.0678744276757302, 4);
  sqcRZGate(q, 1.8111969276158097, 4);
  sqcRYGate(q, 1.3469739484964827, 5);
  sqcRZGate(q, 2.3410212844600347, 5);
  sqcRYGate(q, -1.2844958503253352, 6);
  sqcRZGate(q, 0.05594648136672511, 6);
  sqcRYGate(q, 1.6732230383381128, 7);
  sqcRZGate(q, 0.8305718213315377, 7);
  sqcRYGate(q, 1.249073008726044, 8);
  sqcRZGate(q, 1.5712206886687028, 8);
  sqcRYGate(q, -2.6859502082084137, 9);
  sqcRZGate(q, -2.4378034296065305, 9);
  sqcRYGate(q, 3.139132788819343, 10);
  sqcRZGate(q, 2.4216975182570386, 10);
  sqcRYGate(q, -0.4619866874351608, 11);
  sqcRZGate(q, 1.5741261110925961, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 2.261814236678367, 0);
  sqcRZGate(q, -0.7717596551202979, 0);
  sqcRYGate(q, 0.008820580401781799, 1);
  sqcRZGate(q, -0.37932710470611924, 1);
  sqcRYGate(q, 3.1412595861043644, 2);
  sqcRZGate(q, 0.5743647268909732, 2);
  sqcRYGate(q, 1.9117215867054043, 3);
  sqcRZGate(q, 0.39131346285416385, 3);
  sqcRYGate(q, -0.29449229967309687, 4);
  sqcRZGate(q, 1.3540867226820656, 4);
  sqcRYGate(q, -0.3871242682850706, 5);
  sqcRZGate(q, 2.7973322124659457, 5);
  sqcRYGate(q, -3.1273102622465743, 6);
  sqcRZGate(q, 0.013264953157785975, 6);
  sqcRYGate(q, -1.874944181051192, 7);
  sqcRZGate(q, 2.224718497745413, 7);
  sqcRYGate(q, 0.2694324302900264, 8);
  sqcRZGate(q, 1.6142924496451847, 8);
  sqcRYGate(q, -1.6320797743060032, 9);
  sqcRZGate(q, 0.2298751801328658, 9);
  sqcRYGate(q, 0.0029350849837959103, 10);
  sqcRZGate(q, 2.434388363570691, 10);
  sqcRYGate(q, 2.968322555193178, 11);
  sqcRZGate(q, 2.298624101922779, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.1395026129461936, 0);
  sqcRZGate(q, -2.2161196063432813, 0);
  sqcRYGate(q, 0.26038268969337874, 1);
  sqcRZGate(q, -1.564000101661918, 1);
  sqcRYGate(q, -1.7602594404105878, 2);
  sqcRZGate(q, 1.5704749490073746, 2);
  sqcRYGate(q, -2.9476408224523305, 3);
  sqcRZGate(q, 0.8940259355411061, 3);
  sqcRYGate(q, 1.1592170801551331, 4);
  sqcRZGate(q, -1.8989512957289627, 4);
  sqcRYGate(q, -0.8144040230300202, 5);
  sqcRZGate(q, -1.5201645952445348, 5);
  sqcRYGate(q, -0.6368838245050346, 6);
  sqcRZGate(q, -1.4530178652383976, 6);
  sqcRYGate(q, -1.4991542398211106, 7);
  sqcRZGate(q, -0.1580919931821674, 7);
  sqcRYGate(q, 3.090189318543565, 8);
  sqcRZGate(q, -1.5279594687439682, 8);
  sqcRYGate(q, -1.4168554912123348, 9);
  sqcRZGate(q, -3.107561390212424, 9);
  sqcRYGate(q, -1.937125459913411, 10);
  sqcRZGate(q, -2.143142915744635, 10);
  sqcRYGate(q, -0.05739581796169787, 11);
  sqcRZGate(q, 0.7007778259374244, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 0.0011306763430800615, 0);
  sqcRZGate(q, 3.0070967716666455, 0);
  sqcRYGate(q, 0.5572087045852578, 1);
  sqcRZGate(q, -1.5823280529773325, 1);
  sqcRYGate(q, 0.9522493142803077, 2);
  sqcRZGate(q, 1.5755336405056113, 2);
  sqcRYGate(q, -0.1479421783253761, 3);
  sqcRZGate(q, 0.6599269090689237, 3);
  sqcRYGate(q, 2.8643739491984994, 4);
  sqcRZGate(q, 1.1238992054094261, 4);
  sqcRYGate(q, -0.26577719137040207, 5);
  sqcRZGate(q, 1.568817858682043, 5);
  sqcRYGate(q, -2.82866152308577, 6);
  sqcRZGate(q, 1.690353874686261, 6);
  sqcRYGate(q, 0.5151992752617096, 7);
  sqcRZGate(q, 0.11403654572930844, 7);
  sqcRYGate(q, 2.3190115973085375, 8);
  sqcRZGate(q, -1.5729046557636348, 8);
  sqcRYGate(q, 1.1039953888835088, 9);
  sqcRZGate(q, -0.8238647727349565, 9);
  sqcRYGate(q, -0.0034015377498926806, 10);
  sqcRZGate(q, 2.1402981651903383, 10);
  sqcRYGate(q, -0.3280618203905714, 11);
  sqcRZGate(q, 0.029896866489780297, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 0.5365189364294141, 0);
  sqcRZGate(q, 1.5769825064279601, 0);
  sqcRYGate(q, 2.7061550474690894, 1);
  sqcRZGate(q, 1.6721675058697354, 1);
  sqcRYGate(q, -0.21238406215627312, 2);
  sqcRZGate(q, -2.43014775958136, 2);
  sqcRYGate(q, -1.6839314394633036, 3);
  sqcRZGate(q, 1.1920105937551648, 3);
  sqcRYGate(q, 0.3354468068339973, 4);
  sqcRZGate(q, 2.748189330810685, 4);
  sqcRYGate(q, 1.184131050179162, 5);
  sqcRZGate(q, -1.812446336914256, 5);
  sqcRYGate(q, 2.678404917493074, 6);
  sqcRZGate(q, -1.5605069377086895, 6);
  sqcRYGate(q, 0.2027749974202129, 7);
  sqcRZGate(q, -2.6055909096063363, 7);
  sqcRYGate(q, -2.56269360252685, 8);
  sqcRZGate(q, -1.570465816792339, 8);
  sqcRYGate(q, 0.5135902153081833, 9);
  sqcRZGate(q, 2.73048237440881, 9);
  sqcRYGate(q, 1.0755194190464925, 10);
  sqcRZGate(q, -0.9869461758397778, 10);
  sqcRYGate(q, 1.8934809791102336, 11);
  sqcRZGate(q, 2.567628153842598, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -1.0247398823042995, 0);
  sqcRZGate(q, 1.5597734416529414, 0);
  sqcRYGate(q, 2.99804274513644, 1);
  sqcRZGate(q, -1.4789618735620085, 1);
  sqcRYGate(q, -5.199951867238136e-05, 2);
  sqcRZGate(q, 2.42550372292887, 2);
  sqcRYGate(q, -2.977332965477628, 3);
  sqcRZGate(q, 2.40378904454804, 3);
  sqcRYGate(q, -0.009877127460039326, 4);
  sqcRZGate(q, 0.4647889949450799, 4);
  sqcRYGate(q, 1.5754952834832636, 5);
  sqcRZGate(q, 2.219666707055424, 5);
  sqcRYGate(q, -3.038969308206069, 6);
  sqcRZGate(q, -1.4892179031106956, 6);
  sqcRYGate(q, -0.10841262349343593, 7);
  sqcRZGate(q, -1.2264495343424926, 7);
  sqcRYGate(q, 2.608143588988798, 8);
  sqcRZGate(q, -1.5704715256489492, 8);
  sqcRYGate(q, 0.08578578655976521, 9);
  sqcRZGate(q, 1.9171962456989773, 9);
  sqcRYGate(q, 3.1382360256041886, 10);
  sqcRZGate(q, 2.1287344072810575, 10);
  sqcRYGate(q, 0.5269291522782931, 11);
  sqcRZGate(q, 1.9606382849790602, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.0428475682567915, 0);
  sqcRZGate(q, 1.5540718495160228, 0);
  sqcRYGate(q, 1.267567373373661, 1);
  sqcRZGate(q, -0.8794949261928019, 1);
  sqcRYGate(q, 2.3498635031575743, 2);
  sqcRZGate(q, 2.2426079580149505, 2);
  sqcRYGate(q, 1.7200590728381, 3);
  sqcRZGate(q, 1.4514134562078729, 3);
  sqcRYGate(q, 2.250690263602636, 4);
  sqcRZGate(q, -1.5469145669591042, 4);
  sqcRYGate(q, -3.005780656014157, 5);
  sqcRZGate(q, -0.9272973161208221, 5);
  sqcRYGate(q, -0.3178696510550454, 6);
  sqcRZGate(q, 1.5312868975857867, 6);
  sqcRYGate(q, -0.7724966554975632, 7);
  sqcRZGate(q, 2.244934231829049, 7);
  sqcRYGate(q, -0.7007405678039946, 8);
  sqcRZGate(q, -1.567591900473496, 8);
  sqcRYGate(q, 2.5054166507523967, 9);
  sqcRZGate(q, -1.2524443468146105, 9);
  sqcRYGate(q, 0.13541408752473316, 10);
  sqcRZGate(q, 1.6430400771821558, 10);
  sqcRYGate(q, 1.6463181239592508, 11);
  sqcRZGate(q, 2.6811446236971865, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.2582168182323875, 0);
  sqcRZGate(q, -1.5687252884498877, 0);
  sqcRYGate(q, 0.004714910678147888, 1);
  sqcRZGate(q, 0.8888061173965448, 1);
  sqcRYGate(q, 3.1411514416338986, 2);
  sqcRZGate(q, 2.2448380286959786, 2);
  sqcRYGate(q, 0.1649025690800023, 3);
  sqcRZGate(q, 1.848283701630522, 3);
  sqcRYGate(q, 0.7865890686496098, 4);
  sqcRZGate(q, 1.4948726158578305, 4);
  sqcRYGate(q, 0.8894704070381775, 5);
  sqcRZGate(q, 1.4822478424984666, 5);
  sqcRYGate(q, -1.3004945292046086, 6);
  sqcRZGate(q, 1.752631595929979, 6);
  sqcRYGate(q, -1.3372538459622048, 7);
  sqcRZGate(q, 1.8114291016348507, 7);
  sqcRYGate(q, 0.6497663655825727, 8);
  sqcRZGate(q, -1.551404918520114, 8);
  sqcRYGate(q, 1.0441278011050512, 9);
  sqcRZGate(q, 2.478600963994146, 9);
  sqcRYGate(q, -0.062216989051309575, 10);
  sqcRZGate(q, 1.5215583219126103, 10);
  sqcRYGate(q, -0.3424057802873201, 11);
  sqcRZGate(q, 2.564775020170818, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 2.8563426072679494, 0);
  sqcRZGate(q, 1.5681814364723392, 0);
  sqcRYGate(q, -2.868114726053146, 1);
  sqcRZGate(q, -1.5701123739322118, 1);
  sqcRYGate(q, -2.8091209162695816, 2);
  sqcRZGate(q, -1.091402254926756, 2);
  sqcRYGate(q, 0.3833075830696812, 3);
  sqcRZGate(q, -2.1743829767328844, 3);
  sqcRYGate(q, 0.48518197228571924, 4);
  sqcRZGate(q, 1.5304527980977012, 4);
  sqcRYGate(q, 1.7847364578447138, 5);
  sqcRZGate(q, 0.2952248785433555, 5);
  sqcRYGate(q, -0.18707674636676724, 6);
  sqcRZGate(q, 1.374590209632875, 6);
  sqcRYGate(q, 2.5351848107137327, 7);
  sqcRZGate(q, -3.013783058726704, 7);
  sqcRYGate(q, -0.12876994251409535, 8);
  sqcRZGate(q, 1.5543536771478452, 8);
  sqcRYGate(q, -2.6761782433657055, 9);
  sqcRZGate(q, -1.491257828106179, 9);
  sqcRYGate(q, -2.8499091009838455, 10);
  sqcRZGate(q, 0.18233298762207792, 10);
  sqcRYGate(q, -1.4651972963426874, 11);
  sqcRZGate(q, 1.3158489109422495, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -1.6798906925845398, 0);
  sqcRZGate(q, -0.06372032969072952, 0);
  sqcRYGate(q, -0.6671637081215263, 1);
  sqcRZGate(q, 1.6457820970653936, 1);
  sqcRYGate(q, 0.00045251609611796084, 2);
  sqcRZGate(q, 0.4637424690010663, 2);
  sqcRYGate(q, -3.0503685118158397, 3);
  sqcRZGate(q, -0.4929883117382028, 3);
  sqcRYGate(q, 2.9065013516604026, 4);
  sqcRZGate(q, 1.7068585253217723, 4);
  sqcRYGate(q, 1.3682454501850376, 5);
  sqcRZGate(q, 1.9586107859684585, 5);
  sqcRYGate(q, -1.1729288997069744, 6);
  sqcRZGate(q, -1.5318870270959009, 6);
  sqcRYGate(q, 1.644192238530377, 7);
  sqcRZGate(q, 1.6369115002748953, 7);
  sqcRYGate(q, -2.9192003733220373, 8);
  sqcRZGate(q, 0.3782577201270137, 8);
  sqcRYGate(q, -0.03928177215219275, 9);
  sqcRZGate(q, 0.9799894035274708, 9);
  sqcRYGate(q, -0.0015781136513952632, 10);
  sqcRZGate(q, -0.1829347212215238, 10);
  sqcRYGate(q, 0.5567124701394226, 11);
  sqcRZGate(q, 1.8057726949696864, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.7063454659177382, 0);
  sqcRZGate(q, -0.4377168460666627, 0);
  sqcRYGate(q, 3.1326991750689435, 1);
  sqcRZGate(q, 2.6711965274444154, 1);
  sqcRYGate(q, -3.1411558453585835, 2);
  sqcRZGate(q, -2.5975473438697203, 2);
  sqcRYGate(q, -3.0792636388084724, 3);
  sqcRZGate(q, -2.1052455943543156, 3);
  sqcRYGate(q, 3.0917797671731257, 4);
  sqcRZGate(q, -1.7373355299427178, 4);
  sqcRYGate(q, -0.17994786597359302, 5);
  sqcRZGate(q, 1.445341867851597, 5);
  sqcRYGate(q, 1.528483838026263, 6);
  sqcRZGate(q, -0.8922750936464529, 6);
  sqcRYGate(q, -1.5934666417019867, 7);
  sqcRZGate(q, -1.3495690902493207, 7);
  sqcRYGate(q, -3.141337454455099, 8);
  sqcRZGate(q, -1.1984107712174348, 8);
  sqcRYGate(q, 1.5596999351284457, 9);
  sqcRZGate(q, -3.1237603118798183, 9);
  sqcRYGate(q, -1.935794788789063, 10);
  sqcRZGate(q, 0.002591029204649131, 10);
  sqcRYGate(q, -1.586231982193824, 11);
  sqcRZGate(q, -0.8859540730832424, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.5385374620093604, 0);
  sqcRZGate(q, 0.00600032817052293, 0);
  sqcRYGate(q, 0.0002115902962671612, 1);
  sqcRZGate(q, 2.1047668992294652, 1);
  sqcRYGate(q, -0.0011927519908860873, 2);
  sqcRZGate(q, 0.3048790400105869, 2);
  sqcRYGate(q, -0.0010779851706570179, 3);
  sqcRZGate(q, -0.7652213879333559, 3);
  sqcRYGate(q, -3.1414293118440186, 4);
  sqcRZGate(q, 2.866215317494551, 4);
  sqcRYGate(q, 0.0013013659430072266, 5);
  sqcRZGate(q, 0.7765133942587513, 5);
  sqcRYGate(q, 0.0006024907646514648, 6);
  sqcRZGate(q, -0.6746562186844367, 6);
  sqcRYGate(q, 0.0024621337846357483, 7);
  sqcRZGate(q, -0.28286145541397195, 7);
  sqcRYGate(q, 1.5709689608384085, 8);
  sqcRZGate(q, -2.889415249742327, 8);
  sqcRYGate(q, -1.568292233293752, 9);
  sqcRZGate(q, -0.0006640580341619186, 9);
  sqcRYGate(q, -1.5704240208073008, 10);
  sqcRZGate(q, -2.376400085207591, 10);
  sqcRYGate(q, -3.139163901961359, 11);
  sqcRZGate(q, -1.4036239020850854, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.5708630822125462, 0);
  sqcRZGate(q, 1.5829816256135845, 0);
  sqcRYGate(q, 1.5706908774006, 1);
  sqcRZGate(q, -2.96035405337149, 1);
  sqcRYGate(q, 0.06304559264594636, 2);
  sqcRZGate(q, -1.4649734458098977, 2);
  sqcRYGate(q, -1.570884849959337, 3);
  sqcRZGate(q, -1.3841256180317956, 3);
  sqcRYGate(q, 1.5687273168989426, 4);
  sqcRZGate(q, -3.1066721637138754, 4);
  sqcRYGate(q, 1.5708598476355347, 5);
  sqcRZGate(q, -1.3839290748607744, 5);
  sqcRYGate(q, -1.571029741827262, 6);
  sqcRZGate(q, -1.5364453582592779, 6);
  sqcRYGate(q, -1.5709124429643515, 7);
  sqcRZGate(q, 0.18662110383076144, 7);
  sqcRYGate(q, -0.0007145323024495553, 8);
  sqcRZGate(q, -0.09434769670589471, 8);
  sqcRYGate(q, 1.5663981146976553, 9);
  sqcRZGate(q, 1.75756484169509, 9);
  sqcRYGate(q, 0.006360375699344445, 10);
  sqcRZGate(q, -2.179861788284454, 10);
  sqcRYGate(q, -1.5706677508325573, 11);
  sqcRZGate(q, 1.7573255752140349, 11);

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
