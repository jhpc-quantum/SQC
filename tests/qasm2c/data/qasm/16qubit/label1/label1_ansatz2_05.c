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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -0.0001402341612699587, 0);
  sqcRZGate(q, -2.5808551972486775, 0);
  sqcRYGate(q, -0.0014305041843874723, 1);
  sqcRZGate(q, -0.6401795676689881, 1);
  sqcRYGate(q, 3.138559436647223, 2);
  sqcRZGate(q, 1.079159812599844, 2);
  sqcRYGate(q, 3.083671263921142, 3);
  sqcRZGate(q, 1.6930287008613554, 3);
  sqcRYGate(q, -0.20866639296672587, 4);
  sqcRZGate(q, 1.224094397674788, 4);
  sqcRYGate(q, -0.6804600176671389, 5);
  sqcRZGate(q, 2.780342232776359, 5);
  sqcRYGate(q, -1.570633856795717, 6);
  sqcRZGate(q, -1.908361316961102, 6);
  sqcRYGate(q, 0.5804986007128043, 7);
  sqcRZGate(q, 1.6910894110150112, 7);
  sqcRYGate(q, 3.0234733942961975, 8);
  sqcRZGate(q, -1.710115657553418, 8);
  sqcRYGate(q, -0.05621573116838168, 9);
  sqcRZGate(q, -1.9222855824848928, 9);
  sqcRYGate(q, -0.005502463932719692, 10);
  sqcRZGate(q, -1.6182514098413023, 10);
  sqcRYGate(q, -3.1285587712322656, 11);
  sqcRZGate(q, 3.121526261183417, 11);
  sqcRYGate(q, 1.567838805427737, 12);
  sqcRZGate(q, -1.4518538346788565, 12);
  sqcRYGate(q, 0.009727120720425475, 13);
  sqcRZGate(q, 0.13459939335483992, 13);
  sqcRYGate(q, -1.5697804208515085, 14);
  sqcRZGate(q, -0.00033031046539111486, 14);
  sqcRYGate(q, -1.5686726344429993, 15);
  sqcRZGate(q, -2.1694761535451885, 15);
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
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, 1.1742975535112921e-05, 0);
  sqcRZGate(q, 0.03993644016228349, 0);
  sqcRYGate(q, 3.138009087571441, 1);
  sqcRZGate(q, 0.30616340148279075, 1);
  sqcRYGate(q, 0.00011265236088385584, 2);
  sqcRZGate(q, 0.03947269382685815, 2);
  sqcRYGate(q, 0.00031110737348051206, 3);
  sqcRZGate(q, 1.470361262130182, 3);
  sqcRYGate(q, -3.141124742123325, 4);
  sqcRZGate(q, 1.21198356468225, 4);
  sqcRYGate(q, 3.141209941174476, 5);
  sqcRZGate(q, -0.12953489790832468, 5);
  sqcRYGate(q, -0.00019720304684258506, 6);
  sqcRZGate(q, -2.73000035452674, 6);
  sqcRYGate(q, -0.008223246359504582, 7);
  sqcRZGate(q, -0.5876760263709667, 7);
  sqcRYGate(q, 3.1320722138532675, 8);
  sqcRZGate(q, 0.06983540182586268, 8);
  sqcRYGate(q, -0.04103068475236181, 9);
  sqcRZGate(q, 2.616861598095024, 9);
  sqcRYGate(q, -0.5278207034957605, 10);
  sqcRZGate(q, -2.9090057232075766, 10);
  sqcRYGate(q, 1.5709616962549802, 11);
  sqcRZGate(q, 0.0006104605805967851, 11);
  sqcRYGate(q, 0.5445552729315597, 12);
  sqcRZGate(q, -0.914747826668151, 12);
  sqcRYGate(q, -0.002075368639522957, 13);
  sqcRZGate(q, 1.8032378230685508, 13);
  sqcRYGate(q, 1.6585248335961094, 14);
  sqcRZGate(q, 1.6148423714208555, 14);
  sqcRYGate(q, -3.112896604564627, 15);
  sqcRZGate(q, 3.0872843788529396, 15);
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
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, 0.43875922432956693, 0);
  sqcRZGate(q, 1.9239842253749684, 0);
  sqcRYGate(q, 1.5711643717725137, 1);
  sqcRZGate(q, 0.0001699221598983058, 1);
  sqcRYGate(q, -2.2514341764139614, 2);
  sqcRZGate(q, 1.7215870453707056, 2);
  sqcRYGate(q, -0.24555515447796575, 3);
  sqcRZGate(q, 2.509803996982465, 3);
  sqcRYGate(q, 3.068963919229206, 4);
  sqcRZGate(q, -2.9155835227820694, 4);
  sqcRYGate(q, -3.127911600044097, 5);
  sqcRZGate(q, -2.5616915905027553, 5);
  sqcRYGate(q, 0.006839231340521831, 6);
  sqcRZGate(q, 0.3229008364744361, 6);
  sqcRYGate(q, -3.1405712644604344, 7);
  sqcRZGate(q, -2.2854790863830465, 7);
  sqcRYGate(q, 9.25581005879636e-05, 8);
  sqcRZGate(q, 2.0233227561984055, 8);
  sqcRYGate(q, -0.002225318577627533, 9);
  sqcRZGate(q, -2.2040264147384834, 9);
  sqcRYGate(q, 3.1414022166012945, 10);
  sqcRZGate(q, 0.2244424731073131, 10);
  sqcRYGate(q, 1.5707540338431123, 11);
  sqcRZGate(q, 3.134613096438222, 11);
  sqcRYGate(q, 0.0004518100252132867, 12);
  sqcRZGate(q, -2.3666053030528595, 12);
  sqcRYGate(q, -3.1415570499404484, 13);
  sqcRZGate(q, 0.4108474149729906, 13);
  sqcRYGate(q, 3.138222809704022, 14);
  sqcRZGate(q, -0.2671866400786262, 14);
  sqcRYGate(q, 0.001357162454405092, 15);
  sqcRZGate(q, 2.3902786929431197, 15);
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
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, 3.1415118259553134, 0);
  sqcRZGate(q, 2.723737398322709, 0);
  sqcRYGate(q, -1.5710814523165215, 1);
  sqcRZGate(q, 0.3035686098636212, 1);
  sqcRYGate(q, -3.141467593166512, 2);
  sqcRZGate(q, -1.4849049266273662, 2);
  sqcRYGate(q, 0.0001422881599578079, 3);
  sqcRZGate(q, -0.8593167011106502, 3);
  sqcRYGate(q, -0.00014457795589581813, 4);
  sqcRZGate(q, 2.5366525946027534, 4);
  sqcRYGate(q, -0.00042764378484250187, 5);
  sqcRZGate(q, -1.1845592313842932, 5);
  sqcRYGate(q, 0.0003388950114020517, 6);
  sqcRZGate(q, -1.9560968231916596, 6);
  sqcRYGate(q, 0.0007763111683782853, 7);
  sqcRZGate(q, -1.3937726070866603, 7);
  sqcRYGate(q, 3.141189642224966, 8);
  sqcRZGate(q, 0.018413191122729447, 8);
  sqcRYGate(q, -3.1113641537139047, 9);
  sqcRZGate(q, 3.0466371479290775, 9);
  sqcRYGate(q, -3.064096873382951, 10);
  sqcRZGate(q, 1.2624665465728424, 10);
  sqcRYGate(q, -0.1833653599033248, 11);
  sqcRZGate(q, -1.0737165334680998, 11);
  sqcRYGate(q, -2.793944411675218, 12);
  sqcRZGate(q, 1.9342391196761204, 12);
  sqcRYGate(q, -1.571406371879914, 13);
  sqcRZGate(q, 0.005952044103086251, 13);
  sqcRYGate(q, -1.5391598819768955, 14);
  sqcRZGate(q, -2.9297504463753485, 14);
  sqcRYGate(q, -0.46048699834761003, 15);
  sqcRZGate(q, -2.6299300324152757, 15);
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
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, -0.0001119096868160696, 0);
  sqcRZGate(q, -1.681234261765362, 0);
  sqcRYGate(q, -3.141432397226105, 1);
  sqcRZGate(q, 1.5250382059621588, 1);
  sqcRYGate(q, 0.0003164312649330933, 2);
  sqcRZGate(q, -1.9404098628275346, 2);
  sqcRYGate(q, -3.1414747794337945, 3);
  sqcRZGate(q, -2.487273794062206, 3);
  sqcRYGate(q, 0.0001767512892170643, 4);
  sqcRZGate(q, 1.8450003981031635, 4);
  sqcRYGate(q, 0.0004883336648517978, 5);
  sqcRZGate(q, -1.427269378197171, 5);
  sqcRYGate(q, 0.1828019204450706, 6);
  sqcRZGate(q, -3.11794076565347, 6);
  sqcRYGate(q, 3.140208263658391, 7);
  sqcRZGate(q, 3.0417892459021427, 7);
  sqcRYGate(q, 3.1405634384150822, 8);
  sqcRZGate(q, 0.9190402303660568, 8);
  sqcRYGate(q, 1.5511940351816838, 9);
  sqcRZGate(q, -1.5670652555194406, 9);
  sqcRYGate(q, -3.13743887740539, 10);
  sqcRZGate(q, -1.840299517089185, 10);
  sqcRYGate(q, 0.0018441319095831212, 11);
  sqcRZGate(q, 1.2262799397028266, 11);
  sqcRYGate(q, 0.001098883923009275, 12);
  sqcRZGate(q, 1.177163020150668, 12);
  sqcRYGate(q, -1.5144452129143664, 13);
  sqcRZGate(q, 0.5171523437945594, 13);
  sqcRYGate(q, -0.008931995037562849, 14);
  sqcRZGate(q, 1.6606159372353557, 14);
  sqcRYGate(q, 3.140993051620071, 15);
  sqcRZGate(q, 3.0559089340942105, 15);
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
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, 3.1398682950466448, 0);
  sqcRZGate(q, 2.3483817001424696, 0);
  sqcRYGate(q, -0.008140907789740304, 1);
  sqcRZGate(q, -1.7689459984927263, 1);
  sqcRYGate(q, -3.1354879302118497, 2);
  sqcRZGate(q, 3.118107804913666, 2);
  sqcRYGate(q, 0.004447092959637189, 3);
  sqcRZGate(q, 2.9441015963620223, 3);
  sqcRYGate(q, -3.1340189818107267, 4);
  sqcRZGate(q, 1.9190634241918962, 4);
  sqcRYGate(q, 3.129723832709753, 5);
  sqcRZGate(q, 1.907297839103424, 5);
  sqcRYGate(q, 3.128786939353454, 6);
  sqcRZGate(q, 1.6033751354379158, 6);
  sqcRYGate(q, 0.12805780418041746, 7);
  sqcRZGate(q, 1.6597077182614286, 7);
  sqcRYGate(q, 0.6667754482277639, 8);
  sqcRZGate(q, -1.7733067567807703, 8);
  sqcRYGate(q, 1.5641633935398769, 9);
  sqcRZGate(q, -1.5600615107328295, 9);
  sqcRYGate(q, 0.41561787847693665, 10);
  sqcRZGate(q, -1.7240632260165976, 10);
  sqcRYGate(q, 2.9861648224657067, 11);
  sqcRZGate(q, -1.398518720057569, 11);
  sqcRYGate(q, -0.07246087555189062, 12);
  sqcRZGate(q, 1.5977096285022014, 12);
  sqcRYGate(q, 3.1414674829876614, 13);
  sqcRZGate(q, 0.5129218156387303, 13);
  sqcRYGate(q, 0.0001417700833430402, 14);
  sqcRZGate(q, -1.9706079151257674, 14);
  sqcRYGate(q, -3.137268849380984, 15);
  sqcRZGate(q, 1.2046786184068843, 15);
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
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, -3.1411761868437247, 0);
  sqcRZGate(q, -0.29695989270195605, 0);
  sqcRYGate(q, 3.140095664123563, 1);
  sqcRZGate(q, -2.6534675528726526, 1);
  sqcRYGate(q, -0.0004479883526201362, 2);
  sqcRZGate(q, -2.8295740986401534, 2);
  sqcRYGate(q, 3.1413282097254958, 3);
  sqcRZGate(q, 1.1887238884514044, 3);
  sqcRYGate(q, -3.1411725968151782, 4);
  sqcRZGate(q, -1.5722478641312172, 4);
  sqcRYGate(q, 3.137656096984636, 5);
  sqcRZGate(q, -1.6743528906982164, 5);
  sqcRYGate(q, 1.5634363583217599, 6);
  sqcRZGate(q, -1.269331158101095, 6);
  sqcRYGate(q, -0.0009478609227624446, 7);
  sqcRZGate(q, -0.3353739701705534, 7);
  sqcRYGate(q, 0.0038695039275552603, 8);
  sqcRZGate(q, -2.1960845545862613, 8);
  sqcRYGate(q, 1.5668059724624293, 9);
  sqcRZGate(q, 1.222206816853638, 9);
  sqcRYGate(q, -3.1188105210104777, 10);
  sqcRZGate(q, -0.7055039404075027, 10);
  sqcRYGate(q, 3.0901137653485335, 11);
  sqcRZGate(q, 2.326802893863745, 11);
  sqcRYGate(q, 1.1631755002058763, 12);
  sqcRZGate(q, 1.5714133036878106, 12);
  sqcRYGate(q, 1.5687928213278903, 13);
  sqcRZGate(q, 1.5697069814296152, 13);
  sqcRYGate(q, -1.548302689979849, 14);
  sqcRZGate(q, 1.571598231903739, 14);
  sqcRYGate(q, 1.7483422245337323, 15);
  sqcRZGate(q, -1.5700583226160054, 15);
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
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, 3.229456386133478e-05, 0);
  sqcRZGate(q, 1.9521252017921564, 0);
  sqcRYGate(q, -0.00014635302468715174, 1);
  sqcRZGate(q, -2.6036592438783224, 1);
  sqcRYGate(q, 3.1415801356696087, 2);
  sqcRZGate(q, -2.421010603982902, 2);
  sqcRYGate(q, -3.141375192181173, 3);
  sqcRZGate(q, 0.8101985915392766, 3);
  sqcRYGate(q, -3.140960355367625, 4);
  sqcRZGate(q, -0.45258133151249874, 4);
  sqcRYGate(q, 3.1383328730516777, 5);
  sqcRZGate(q, -1.1079419089801459, 5);
  sqcRYGate(q, -3.115395434144582, 6);
  sqcRZGate(q, 1.9716404740319828, 6);
  sqcRYGate(q, 3.139234917190708, 7);
  sqcRZGate(q, 1.320145444742727, 7);
  sqcRYGate(q, 3.1415466068378453, 8);
  sqcRZGate(q, -0.8445062140004883, 8);
  sqcRYGate(q, 3.139110328578875, 9);
  sqcRZGate(q, -1.9363784862706535, 9);
  sqcRYGate(q, -3.1383351907128048, 10);
  sqcRZGate(q, -2.1405577391644504, 10);
  sqcRYGate(q, -6.999058835330856e-05, 11);
  sqcRZGate(q, -0.7191816261686779, 11);
  sqcRYGate(q, -1.5703094227359626, 12);
  sqcRZGate(q, -0.8563345413539123, 12);
  sqcRYGate(q, 1.5768738653994376, 13);
  sqcRZGate(q, -1.9242734408752398, 13);
  sqcRYGate(q, -1.570887825761707, 14);
  sqcRZGate(q, -0.22443471538157578, 14);
  sqcRYGate(q, -1.5706288970707014, 15);
  sqcRZGate(q, -1.3936068672855955, 15);
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
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 6, 12);
  sqcCZGate(q, 6, 13);
  sqcCZGate(q, 6, 14);
  sqcCZGate(q, 6, 15);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 7, 12);
  sqcCZGate(q, 7, 13);
  sqcCZGate(q, 7, 14);
  sqcCZGate(q, 7, 15);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 8, 12);
  sqcCZGate(q, 8, 13);
  sqcCZGate(q, 8, 14);
  sqcCZGate(q, 8, 15);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 9, 12);
  sqcCZGate(q, 9, 13);
  sqcCZGate(q, 9, 14);
  sqcCZGate(q, 9, 15);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 10, 14);
  sqcCZGate(q, 10, 15);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 11, 14);
  sqcCZGate(q, 11, 15);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 14, 15);
  sqcRYGate(q, -0.34823805819800513, 0);
  sqcRZGate(q, 0.4477542331710893, 0);
  sqcRYGate(q, 2.002114163896394, 1);
  sqcRZGate(q, 0.44592701987746963, 1);
  sqcRYGate(q, 0.8927497531256154, 2);
  sqcRZGate(q, -2.695902455692153, 2);
  sqcRYGate(q, -2.2588272187477596, 3);
  sqcRZGate(q, 0.44551606698346, 3);
  sqcRYGate(q, -0.9507340069761822, 4);
  sqcRZGate(q, 0.4464481358732029, 4);
  sqcRYGate(q, 0.9056865942097445, 5);
  sqcRZGate(q, 0.4408087844646873, 5);
  sqcRYGate(q, -2.875731458649539, 6);
  sqcRZGate(q, -2.6003413265022193, 6);
  sqcRYGate(q, -0.7910388525521727, 7);
  sqcRZGate(q, -2.7014610175672003, 7);
  sqcRYGate(q, 1.1024779416636996, 8);
  sqcRZGate(q, -2.6954568712289477, 8);
  sqcRYGate(q, 1.691872346398809, 9);
  sqcRZGate(q, -2.695894512384961, 9);
  sqcRYGate(q, -0.9231554373869765, 10);
  sqcRZGate(q, 0.44652103508613816, 10);
  sqcRYGate(q, 1.4251615898910408, 11);
  sqcRZGate(q, -2.694170955081337, 11);
  sqcRYGate(q, -1.561633405704697, 12);
  sqcRZGate(q, 2.0242496047183964, 12);
  sqcRYGate(q, -0.03335237305558268, 13);
  sqcRZGate(q, -2.3403814629124566, 13);
  sqcRYGate(q, -1.5613397237223432, 14);
  sqcRZGate(q, 2.020371516358118, 14);
  sqcRYGate(q, -1.5718872401282238, 15);
  sqcRZGate(q, -1.12305932310749, 15);

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
