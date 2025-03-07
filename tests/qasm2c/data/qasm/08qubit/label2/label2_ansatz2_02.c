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

  sqcRYGate(q, -8.603355583503002e-07, 0);
  sqcRZGate(q, -2.0065216847021903, 0);
  sqcRYGate(q, 0.0036770022404959547, 1);
  sqcRZGate(q, -3.1415685484152087, 1);
  sqcRYGate(q, 1.4707393103467959e-06, 2);
  sqcRZGate(q, -0.45176723842022776, 2);
  sqcRYGate(q, -0.00013010351692521735, 3);
  sqcRZGate(q, 2.0047667684982535, 3);
  sqcRYGate(q, -1.5707964261197553, 4);
  sqcRZGate(q, 9.403774354765915e-07, 4);
  sqcRYGate(q, 1.6373999105785284, 5);
  sqcRZGate(q, -2.2888292815892406, 5);
  sqcRYGate(q, 1.5732455554836722, 6);
  sqcRZGate(q, -1.2544708388083423, 6);
  sqcRYGate(q, -1.570796318772417, 7);
  sqcRZGate(q, 3.141592545391574, 7);
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
  sqcRYGate(q, 1.570796333815939, 0);
  sqcRZGate(q, 2.332507771844886, 0);
  sqcRYGate(q, 1.5707963163294112, 1);
  sqcRZGate(q, 1.5703960926694291, 1);
  sqcRYGate(q, 3.1415926341912472, 2);
  sqcRZGate(q, 1.1524298470928744, 2);
  sqcRYGate(q, 0.06682428575617619, 3);
  sqcRZGate(q, 3.141587448728022, 3);
  sqcRYGate(q, 0.19887704921964944, 4);
  sqcRZGate(q, 2.0148726917273088, 4);
  sqcRYGate(q, 9.5409095148824e-06, 5);
  sqcRZGate(q, -2.423559863485427, 5);
  sqcRYGate(q, -3.1415925243032636, 6);
  sqcRZGate(q, 0.3164057326327816, 6);
  sqcRYGate(q, -1.3719146882281368, 7);
  sqcRZGate(q, -1.5726085172810693, 7);
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
  sqcRYGate(q, -1.5705338558043378, 0);
  sqcRZGate(q, -1.6611920177422128, 0);
  sqcRYGate(q, -2.379875626922731, 1);
  sqcRZGate(q, 0.451418637682232, 1);
  sqcRYGate(q, 2.2569845032904823e-06, 2);
  sqcRZGate(q, -1.7780787162224723, 2);
  sqcRYGate(q, 1.5733350694214678, 3);
  sqcRZGate(q, -1.5707989406637186, 3);
  sqcRYGate(q, 3.1349476082915753, 4);
  sqcRZGate(q, 1.9652265329236869, 4);
  sqcRYGate(q, 0.8097624099837895, 5);
  sqcRZGate(q, -1.5707961924678533, 5);
  sqcRYGate(q, 0.01706700267036158, 6);
  sqcRZGate(q, 3.1415124517757365, 6);
  sqcRYGate(q, 0.7854508197713398, 7);
  sqcRZGate(q, -0.04828278392198725, 7);
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
  sqcRYGate(q, -2.2691504807786716e-07, 0);
  sqcRZGate(q, -0.6479313711814978, 0);
  sqcRYGate(q, 7.966166570838594e-08, 1);
  sqcRZGate(q, -1.9945233359010803, 1);
  sqcRYGate(q, -1.570796256991492, 2);
  sqcRZGate(q, -2.9882649819752105, 2);
  sqcRYGate(q, 1.5707975862217953, 3);
  sqcRZGate(q, -1.0171582115603555, 3);
  sqcRYGate(q, -1.5708342288879875, 4);
  sqcRZGate(q, -1.5707981994652631, 4);
  sqcRYGate(q, -1.5707591878546552, 5);
  sqcRZGate(q, 2.9324948071629966, 5);
  sqcRYGate(q, -1.5707983315098573, 6);
  sqcRZGate(q, -0.00022541455761789607, 6);
  sqcRYGate(q, 1.5707824583067538, 7);
  sqcRZGate(q, -1.5710767673354065, 7);
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
  sqcRYGate(q, -1.2536512366858058e-07, 0);
  sqcRZGate(q, -2.2871461139350537, 0);
  sqcRYGate(q, 3.1415925768190016, 1);
  sqcRZGate(q, -0.5051550432022982, 1);
  sqcRYGate(q, 3.1415924659834196, 2);
  sqcRZGate(q, 1.7241172678074956, 2);
  sqcRYGate(q, -1.7327780037781742e-07, 3);
  sqcRZGate(q, 0.50156383340424, 3);
  sqcRYGate(q, 1.5707963551965782, 4);
  sqcRZGate(q, 1.570759745279708, 4);
  sqcRYGate(q, 4.419204487015644e-08, 5);
  sqcRZGate(q, 2.236238791334836, 5);
  sqcRYGate(q, 1.570796320110747, 6);
  sqcRZGate(q, -1.570778333333907, 6);
  sqcRYGate(q, -1.5707963252554011, 7);
  sqcRZGate(q, -1.5707603027340493, 7);
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
  sqcRYGate(q, 3.1415923477260246, 0);
  sqcRZGate(q, 0.9909058296523744, 0);
  sqcRYGate(q, 3.1415923353415542, 1);
  sqcRZGate(q, 1.9124587781822813, 1);
  sqcRYGate(q, 1.5707870512355697, 2);
  sqcRZGate(q, -2.2690634231056754, 2);
  sqcRYGate(q, 3.141579164296451, 3);
  sqcRZGate(q, -2.782113327825411, 3);
  sqcRYGate(q, 1.5708144841368492, 4);
  sqcRZGate(q, -0.6982729839017898, 4);
  sqcRYGate(q, -4.102705352337921e-05, 5);
  sqcRZGate(q, -2.7252914326287225, 5);
  sqcRYGate(q, 1.5708323727851718, 6);
  sqcRZGate(q, 0.8725672862808924, 6);
  sqcRYGate(q, -1.5707783377628068, 7);
  sqcRZGate(q, -0.6982294088457097, 7);

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
