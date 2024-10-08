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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 2.045003362822291, 0);
  sqcRZGate(q, -0.7846108357854995, 0);
  sqcRYGate(q, 0.9471427854952491, 1);
  sqcRZGate(q, 1.1600227193858519, 1);
  sqcRYGate(q, 0.4703778445898671, 2);
  sqcRZGate(q, 1.3835669548862188, 2);
  sqcRYGate(q, 1.3449124591074089, 3);
  sqcRZGate(q, 0.8573563419101363, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.34623885208893324, 0);
  sqcRZGate(q, -0.3065671093290645, 0);
  sqcRYGate(q, -1.9281878128717136, 1);
  sqcRZGate(q, 1.2824317506378557, 1);
  sqcRYGate(q, 0.9932353880659959, 2);
  sqcRZGate(q, -0.683724591039712, 2);
  sqcRYGate(q, 2.4999837441111374, 3);
  sqcRZGate(q, -1.6457933392475272, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.436695065803315, 0);
  sqcRZGate(q, 0.5999494201288531, 0);
  sqcRYGate(q, -2.074571466370072, 1);
  sqcRZGate(q, 2.824766577010706, 1);
  sqcRYGate(q, -0.860372029272626, 2);
  sqcRZGate(q, 1.4443540975202023, 2);
  sqcRYGate(q, -0.1450000762323176, 3);
  sqcRZGate(q, -2.735650831801129, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.3851580872863973, 0);
  sqcRZGate(q, -0.36182966790307625, 0);
  sqcRYGate(q, -1.948274059872101, 1);
  sqcRZGate(q, -0.8779060659704342, 1);
  sqcRYGate(q, 2.6124079323288654, 2);
  sqcRZGate(q, -0.18977321391648214, 2);
  sqcRYGate(q, -0.22146216045959655, 3);
  sqcRZGate(q, -1.969155291973678, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.3605656907579379, 0);
  sqcRZGate(q, -1.016410710129306, 0);
  sqcRYGate(q, -2.8264966166723364, 1);
  sqcRZGate(q, -0.37305171951901345, 1);
  sqcRYGate(q, 2.327821512920291, 2);
  sqcRZGate(q, -1.9366082263438553, 2);
  sqcRYGate(q, 2.054723816289706, 3);
  sqcRZGate(q, 0.6019360896113772, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.4324818436955122, 0);
  sqcRZGate(q, 1.4925327636505044, 0);
  sqcRYGate(q, 0.335448473517394, 1);
  sqcRZGate(q, 0.18677800939607447, 1);
  sqcRYGate(q, 2.1065861260844265, 2);
  sqcRZGate(q, 0.787752041773838, 2);
  sqcRYGate(q, -0.996557359883425, 3);
  sqcRZGate(q, 1.5221943201622292, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5868059175461964, 0);
  sqcRZGate(q, 2.251710154451695, 0);
  sqcRYGate(q, 0.16779143934052296, 1);
  sqcRZGate(q, 1.8711710690791499, 1);
  sqcRYGate(q, -0.05458436164973534, 2);
  sqcRZGate(q, -1.3651076646403404, 2);
  sqcRYGate(q, -2.355961151211, 3);
  sqcRZGate(q, 2.597015026383568, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.2833447300670695, 0);
  sqcRZGate(q, 1.3726205914499143, 0);
  sqcRYGate(q, -1.8824405205507257, 1);
  sqcRZGate(q, 1.8266330383827247, 1);
  sqcRYGate(q, 1.9358926325041206, 2);
  sqcRZGate(q, -2.572438493872736, 2);
  sqcRYGate(q, 2.157811249043351, 3);
  sqcRZGate(q, 0.06804472814118512, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8616236901020016, 0);
  sqcRZGate(q, 2.552722397908718, 0);
  sqcRYGate(q, 1.474525045248705, 1);
  sqcRZGate(q, 0.5940622445341901, 1);
  sqcRYGate(q, 2.0729679583648, 2);
  sqcRZGate(q, -3.097539555426706, 2);
  sqcRYGate(q, 2.4013674285340643, 3);
  sqcRZGate(q, 2.524414988897934, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.2883660930739484, 0);
  sqcRZGate(q, 1.632563950383946, 0);
  sqcRYGate(q, -1.5317625561848152, 1);
  sqcRZGate(q, 0.3076278901656016, 1);
  sqcRYGate(q, 1.8368149747235165, 2);
  sqcRZGate(q, -2.7849689097765937, 2);
  sqcRYGate(q, 1.08853800675972, 3);
  sqcRZGate(q, 1.9304999900022393, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.354433367634536, 0);
  sqcRZGate(q, 1.7576507194720052, 0);
  sqcRYGate(q, -2.379599240131109, 1);
  sqcRZGate(q, -2.8437728322378466, 1);
  sqcRYGate(q, -2.9079831543546333, 2);
  sqcRZGate(q, 1.1544774531148265, 2);
  sqcRYGate(q, -0.987986767128792, 3);
  sqcRZGate(q, 2.222992464208076, 3);

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
