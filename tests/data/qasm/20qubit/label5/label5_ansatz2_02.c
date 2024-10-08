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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -1.5708025303382689, 0);
  sqcRZGate(q, 0.5219617690577434, 0);
  sqcRYGate(q, 1.5707827202546243, 1);
  sqcRZGate(q, 1.834878672557494e-05, 1);
  sqcRYGate(q, 6.08687978953526e-06, 2);
  sqcRZGate(q, -1.617953246748975, 2);
  sqcRYGate(q, 1.570788336075889, 3);
  sqcRZGate(q, 8.452712444126843e-05, 3);
  sqcRYGate(q, -1.5708045837700846, 4);
  sqcRZGate(q, 2.817889737644438, 4);
  sqcRYGate(q, -6.636821801422498e-06, 5);
  sqcRZGate(q, -2.8275487287112813, 5);
  sqcRYGate(q, 1.5707934635015104, 6);
  sqcRZGate(q, -2.4592896841526173, 6);
  sqcRYGate(q, -1.5708642218789137, 7);
  sqcRZGate(q, -1.643917548103935, 7);
  sqcRYGate(q, -3.141510444329623, 8);
  sqcRZGate(q, 0.5728589688723068, 8);
  sqcRYGate(q, -3.1415752458117763, 9);
  sqcRZGate(q, 3.1307468068605453, 9);
  sqcRYGate(q, 0.04119468082574769, 10);
  sqcRZGate(q, -1.5698806876370706, 10);
  sqcRYGate(q, -0.4903177945008821, 11);
  sqcRZGate(q, -1.570921450380645, 11);
  sqcRYGate(q, -1.5486685865778222, 12);
  sqcRZGate(q, -1.5709390829533985, 12);
  sqcRYGate(q, 1.5707914435983754, 13);
  sqcRZGate(q, 2.390460259488994, 13);
  sqcRYGate(q, 1.570784908696269, 14);
  sqcRZGate(q, 1.570368602475013, 14);
  sqcRYGate(q, -1.5746297461691527, 15);
  sqcRZGate(q, 2.4448321081876943, 15);
  sqcRYGate(q, 1.5719475403155052, 16);
  sqcRZGate(q, 1.6807275596014861, 16);
  sqcRYGate(q, 1.3612902058127072, 17);
  sqcRZGate(q, 3.1415915623246193, 17);
  sqcRYGate(q, 0.0013758046712490923, 18);
  sqcRZGate(q, -1.2875330978911605, 18);
  sqcRYGate(q, 1.9493814560256664, 19);
  sqcRZGate(q, -0.21394607651473588, 19);
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
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, 3.1415753387262066, 0);
  sqcRZGate(q, 2.0927577216896562, 0);
  sqcRYGate(q, 0.20701591479893633, 1);
  sqcRZGate(q, -1.5708143756492126, 1);
  sqcRYGate(q, 3.141417572585911, 2);
  sqcRZGate(q, 2.9838156061764805, 2);
  sqcRYGate(q, -0.1068261777920343, 3);
  sqcRZGate(q, 3.1414823637026634, 3);
  sqcRYGate(q, -0.0015127010311820964, 4);
  sqcRZGate(q, -2.8178927172305053, 4);
  sqcRYGate(q, 7.655363484371236e-05, 5);
  sqcRZGate(q, 3.1227023408222547, 5);
  sqcRYGate(q, 0.0029022384009050077, 6);
  sqcRZGate(q, -0.6823017109232996, 6);
  sqcRYGate(q, 0.0008147808559311187, 7);
  sqcRZGate(q, 1.6448292436882275, 7);
  sqcRYGate(q, 3.042573015699148, 8);
  sqcRZGate(q, 2.2066369313479184, 8);
  sqcRYGate(q, -1.5708041115154696, 9);
  sqcRZGate(q, 2.404965530391778, 9);
  sqcRYGate(q, 1.5712162358979482, 10);
  sqcRZGate(q, 3.141584903164751, 10);
  sqcRYGate(q, 1.6116333766519073, 11);
  sqcRZGate(q, -2.4498260543626116, 11);
  sqcRYGate(q, 1.5752413127249945, 12);
  sqcRZGate(q, -0.014902262424341218, 12);
  sqcRYGate(q, -3.141569230920073, 13);
  sqcRZGate(q, -0.752382416013373, 13);
  sqcRYGate(q, 1.5706816854319108, 14);
  sqcRZGate(q, 1.385816024139694, 14);
  sqcRYGate(q, 0.1541099465782274, 15);
  sqcRZGate(q, 2.2616920829746525, 15);
  sqcRYGate(q, -2.99988015619812, 16);
  sqcRZGate(q, 2.0782129422968425, 16);
  sqcRYGate(q, -1.5708131283993498, 17);
  sqcRZGate(q, -1.6299146620757972, 17);
  sqcRYGate(q, -3.1415758429046283, 18);
  sqcRZGate(q, 1.6825919803297937, 18);
  sqcRYGate(q, -3.141182669242789, 19);
  sqcRZGate(q, 2.064324235015404, 19);
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
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, 1.14724475567572, 0);
  sqcRZGate(q, -0.179295837330239, 0);
  sqcRYGate(q, 1.289614209083975, 1);
  sqcRZGate(q, 2.73107097260745, 1);
  sqcRYGate(q, 3.141592239819349, 2);
  sqcRZGate(q, 1.7657906263839003, 2);
  sqcRYGate(q, 1.5707402891256104, 3);
  sqcRZGate(q, 0.5193386956267866, 3);
  sqcRYGate(q, 1.5707979465161055, 4);
  sqcRZGate(q, 0.27554283347786956, 4);
  sqcRYGate(q, -1.0065027291616957e-06, 5);
  sqcRZGate(q, -0.43141429697443634, 5);
  sqcRYGate(q, -1.570798667142147, 6);
  sqcRZGate(q, -0.9486409270364752, 6);
  sqcRYGate(q, 1.571123534920499, 7);
  sqcRZGate(q, -1.7116229169815345, 7);
  sqcRYGate(q, -4.628481926329263e-05, 8);
  sqcRZGate(q, -2.844319489717937, 8);
  sqcRYGate(q, 3.141519828865245, 9);
  sqcRZGate(q, -2.307446287707263, 9);
  sqcRYGate(q, 1.5743949386134883, 10);
  sqcRZGate(q, 2.315351342919409, 10);
  sqcRYGate(q, -0.004928730974871343, 11);
  sqcRZGate(q, -2.261067068953187, 11);
  sqcRYGate(q, 1.5706986534289973, 12);
  sqcRZGate(q, 2.8780187053791684, 12);
  sqcRYGate(q, 1.5686768897397254, 13);
  sqcRZGate(q, -2.5481394859863946, 13);
  sqcRYGate(q, -1.5708028219112304, 14);
  sqcRZGate(q, -3.0813589168310123, 14);
  sqcRYGate(q, -1.5707916564743996, 15);
  sqcRZGate(q, -2.801947700240511, 15);
  sqcRYGate(q, -0.011212543445585865, 16);
  sqcRZGate(q, -0.39652275362732325, 16);
  sqcRYGate(q, -6.171627114518774e-06, 17);
  sqcRZGate(q, 1.6172461652511716, 17);
  sqcRYGate(q, -3.141571806216987, 18);
  sqcRZGate(q, 1.9076338018190393, 18);
  sqcRYGate(q, -6.365178084343581e-05, 19);
  sqcRZGate(q, -0.663944732600183, 19);
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
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, 3.141510544650906, 0);
  sqcRZGate(q, -1.1228388222357948, 0);
  sqcRYGate(q, 0.00021302948093534284, 1);
  sqcRZGate(q, 0.7217139673590259, 1);
  sqcRYGate(q, -3.1415925543948875, 2);
  sqcRZGate(q, -1.2975968413454977, 2);
  sqcRYGate(q, -3.14159203538166, 3);
  sqcRZGate(q, -1.4949643574842595, 3);
  sqcRYGate(q, 1.5716510786134563e-06, 4);
  sqcRZGate(q, -0.3154069814620532, 4);
  sqcRYGate(q, -9.205695201686126e-07, 5);
  sqcRZGate(q, -1.1921351965597813, 5);
  sqcRYGate(q, 7.629194929137383e-07, 6);
  sqcRZGate(q, -2.414632586118254, 6);
  sqcRYGate(q, -5.803554072869588e-07, 7);
  sqcRZGate(q, 1.3633204488348019, 7);
  sqcRYGate(q, 3.861191685672338e-05, 8);
  sqcRZGate(q, -0.8463760312115259, 8);
  sqcRYGate(q, 1.590123308267781, 9);
  sqcRZGate(q, -1.7225311781928652, 9);
  sqcRYGate(q, 3.1409403061644086, 10);
  sqcRZGate(q, 2.0374055578095294, 10);
  sqcRYGate(q, 0.060119244970390895, 11);
  sqcRZGate(q, 3.1090071639893107, 11);
  sqcRYGate(q, -3.1321955796927137, 12);
  sqcRZGate(q, -2.7466472088616, 12);
  sqcRYGate(q, -1.570625501720621, 13);
  sqcRZGate(q, 2.8899573483385245e-06, 13);
  sqcRYGate(q, -3.133512850751133, 14);
  sqcRZGate(q, -0.21167433844730077, 14);
  sqcRYGate(q, -3.0456323979694044, 15);
  sqcRZGate(q, 0.6487114139181696, 15);
  sqcRYGate(q, 1.6119630562063836, 16);
  sqcRZGate(q, 0.9623049164961816, 16);
  sqcRYGate(q, 1.6222466303147236, 17);
  sqcRZGate(q, 2.3497017084362635, 17);
  sqcRYGate(q, 3.140631969690679, 18);
  sqcRZGate(q, -2.0194983678493266, 18);
  sqcRYGate(q, 3.1415740450269745, 19);
  sqcRZGate(q, -1.455540895830149, 19);
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
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, 2.521561329809007e-07, 0);
  sqcRZGate(q, 2.0275477474169135, 0);
  sqcRYGate(q, -3.1415893661493803, 1);
  sqcRZGate(q, 0.3111877974512291, 1);
  sqcRYGate(q, 6.070909730482299e-07, 2);
  sqcRZGate(q, 2.488207607410457, 2);
  sqcRYGate(q, 1.5707953654433053, 3);
  sqcRZGate(q, 1.570795521186338, 3);
  sqcRYGate(q, -1.5707961124616607, 4);
  sqcRZGate(q, 0.9439190092399757, 4);
  sqcRYGate(q, 3.141589031356476, 5);
  sqcRZGate(q, 0.404857901222757, 5);
  sqcRYGate(q, -1.5707946774264896, 6);
  sqcRZGate(q, 1.0223857797121918, 6);
  sqcRYGate(q, 1.570675438927454, 7);
  sqcRZGate(q, 1.57079601247096, 7);
  sqcRYGate(q, -3.187834565853018e-08, 8);
  sqcRZGate(q, -1.6575480372878246, 8);
  sqcRYGate(q, -3.1413235127679973, 9);
  sqcRZGate(q, 2.9899635516630236, 9);
  sqcRYGate(q, 3.1414830197133545, 10);
  sqcRZGate(q, 1.183221004884607, 10);
  sqcRYGate(q, 1.60080267619378e-06, 11);
  sqcRZGate(q, -1.5396925756289326, 11);
  sqcRYGate(q, 4.212685640836703e-06, 12);
  sqcRZGate(q, 1.489557922109932, 12);
  sqcRYGate(q, 1.570650234441671, 13);
  sqcRZGate(q, 1.5707940279994805, 13);
  sqcRYGate(q, 3.1415905353025675, 14);
  sqcRZGate(q, 1.2988258224884541, 14);
  sqcRYGate(q, -3.1857272171365025e-06, 15);
  sqcRZGate(q, 0.659012432885133, 15);
  sqcRYGate(q, 3.141588790328711, 16);
  sqcRZGate(q, 2.5330630442999027, 16);
  sqcRYGate(q, -3.744790045168145e-06, 17);
  sqcRZGate(q, -3.045999122507224, 17);
  sqcRYGate(q, -3.141591704807799, 18);
  sqcRZGate(q, -0.3484451980776153, 18);
  sqcRYGate(q, -4.8579313282150945e-06, 19);
  sqcRZGate(q, -1.0550893734099147, 19);
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
  sqcCZGate(q, 0, 12);
  sqcCZGate(q, 0, 13);
  sqcCZGate(q, 0, 14);
  sqcCZGate(q, 0, 15);
  sqcCZGate(q, 0, 16);
  sqcCZGate(q, 0, 17);
  sqcCZGate(q, 0, 18);
  sqcCZGate(q, 0, 19);
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
  sqcCZGate(q, 1, 12);
  sqcCZGate(q, 1, 13);
  sqcCZGate(q, 1, 14);
  sqcCZGate(q, 1, 15);
  sqcCZGate(q, 1, 16);
  sqcCZGate(q, 1, 17);
  sqcCZGate(q, 1, 18);
  sqcCZGate(q, 1, 19);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 2, 12);
  sqcCZGate(q, 2, 13);
  sqcCZGate(q, 2, 14);
  sqcCZGate(q, 2, 15);
  sqcCZGate(q, 2, 16);
  sqcCZGate(q, 2, 17);
  sqcCZGate(q, 2, 18);
  sqcCZGate(q, 2, 19);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 3, 12);
  sqcCZGate(q, 3, 13);
  sqcCZGate(q, 3, 14);
  sqcCZGate(q, 3, 15);
  sqcCZGate(q, 3, 16);
  sqcCZGate(q, 3, 17);
  sqcCZGate(q, 3, 18);
  sqcCZGate(q, 3, 19);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 4, 12);
  sqcCZGate(q, 4, 13);
  sqcCZGate(q, 4, 14);
  sqcCZGate(q, 4, 15);
  sqcCZGate(q, 4, 16);
  sqcCZGate(q, 4, 17);
  sqcCZGate(q, 4, 18);
  sqcCZGate(q, 4, 19);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 5, 12);
  sqcCZGate(q, 5, 13);
  sqcCZGate(q, 5, 14);
  sqcCZGate(q, 5, 15);
  sqcCZGate(q, 5, 16);
  sqcCZGate(q, 5, 17);
  sqcCZGate(q, 5, 18);
  sqcCZGate(q, 5, 19);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 6, 16);
  sqcCZGate(q, 6, 17);
  sqcCZGate(q, 6, 18);
  sqcCZGate(q, 6, 19);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 7, 16);
  sqcCZGate(q, 7, 17);
  sqcCZGate(q, 7, 18);
  sqcCZGate(q, 7, 19);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 8, 16);
  sqcCZGate(q, 8, 17);
  sqcCZGate(q, 8, 18);
  sqcCZGate(q, 8, 19);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 9, 16);
  sqcCZGate(q, 9, 17);
  sqcCZGate(q, 9, 18);
  sqcCZGate(q, 9, 19);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 10, 16);
  sqcCZGate(q, 10, 17);
  sqcCZGate(q, 10, 18);
  sqcCZGate(q, 10, 19);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 11, 16);
  sqcCZGate(q, 11, 17);
  sqcCZGate(q, 11, 18);
  sqcCZGate(q, 11, 19);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 12, 16);
  sqcCZGate(q, 12, 17);
  sqcCZGate(q, 12, 18);
  sqcCZGate(q, 12, 19);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 13, 16);
  sqcCZGate(q, 13, 17);
  sqcCZGate(q, 13, 18);
  sqcCZGate(q, 13, 19);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 14, 18);
  sqcCZGate(q, 14, 19);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 15, 18);
  sqcCZGate(q, 15, 19);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 18, 19);
  sqcRYGate(q, 2.348454695467386, 0);
  sqcRZGate(q, 1.0988730003108618, 0);
  sqcRYGate(q, -1.5708243666207249, 1);
  sqcRZGate(q, -0.4015909791641332, 1);
  sqcRYGate(q, 2.356192931387335, 2);
  sqcRZGate(q, -0.11636257320348964, 2);
  sqcRYGate(q, 1.5707965212658443, 3);
  sqcRZGate(q, 1.3133540728300734, 3);
  sqcRYGate(q, 3.1415919814132445, 4);
  sqcRZGate(q, 2.398351999987675, 4);
  sqcRYGate(q, -1.3439128754214153e-05, 5);
  sqcRZGate(q, 0.2624121805643833, 5);
  sqcRYGate(q, -2.983262139452593, 6);
  sqcRZGate(q, 2.4712004663869873, 6);
  sqcRYGate(q, 1.5708261132176693, 7);
  sqcRZGate(q, -0.34049130301878244, 7);
  sqcRYGate(q, 2.335852940015406, 8);
  sqcRZGate(q, -0.11638915653982006, 8);
  sqcRYGate(q, 1.5762987270780577, 9);
  sqcRZGate(q, 0.13327582775827995, 9);
  sqcRYGate(q, -1.5718184740931127, 10);
  sqcRZGate(q, -1.6872970179372273, 10);
  sqcRYGate(q, -1.5707724747500267, 11);
  sqcRZGate(q, 0.13224902936902172, 11);
  sqcRYGate(q, -1.5728970536333824, 12);
  sqcRZGate(q, -1.6904055486596556, 12);
  sqcRYGate(q, -1.5708318957191967, 13);
  sqcRZGate(q, -3.009296809743798, 13);
  sqcRYGate(q, -1.5707753639677002, 14);
  sqcRZGate(q, 1.4505613316723993, 14);
  sqcRYGate(q, 1.570840129232348, 15);
  sqcRZGate(q, 1.7030667559921913, 15);
  sqcRYGate(q, 1.5707439106780843, 16);
  sqcRZGate(q, 3.0252467834946306, 16);
  sqcRYGate(q, 1.570846622912092, 17);
  sqcRZGate(q, -1.4385321909385624, 17);
  sqcRYGate(q, 3.14149248616615, 18);
  sqcRZGate(q, 2.1582802015948737, 18);
  sqcRYGate(q, 3.141591453647743, 19);
  sqcRZGate(q, 0.7197363174019956, 19);

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
