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

  sqcRYGate(q, 2.15064206235399, 0);
  sqcRZGate(q, 0.693108161427889, 0);
  sqcRYGate(q, 1.3817664248360453, 1);
  sqcRZGate(q, 1.7283146811878822, 1);
  sqcRYGate(q, -2.613388845672393, 2);
  sqcRZGate(q, -1.0005470079303296, 2);
  sqcRYGate(q, 0.2769643741457932, 3);
  sqcRZGate(q, -0.05668297787436285, 3);
  sqcRYGate(q, -2.6758546705264648, 4);
  sqcRZGate(q, -2.05413737155123, 4);
  sqcRYGate(q, 1.21344592425121, 5);
  sqcRZGate(q, 1.6652154440479556, 5);
  sqcRYGate(q, -1.395969957997055, 6);
  sqcRZGate(q, -0.8928421390240526, 6);
  sqcRYGate(q, -2.974836391379237, 7);
  sqcRZGate(q, -2.560693515204511, 7);
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
  sqcRYGate(q, 2.0811313119519284, 0);
  sqcRZGate(q, 0.58090172931235, 0);
  sqcRYGate(q, 1.3330129930556833, 1);
  sqcRZGate(q, -0.3707916321924376, 1);
  sqcRYGate(q, -2.879343565135457, 2);
  sqcRZGate(q, -1.8726579930537526, 2);
  sqcRYGate(q, 1.7654195176615417, 3);
  sqcRZGate(q, -2.8886918762218636, 3);
  sqcRYGate(q, -0.7048223496827806, 4);
  sqcRZGate(q, 3.0511664822816145, 4);
  sqcRYGate(q, 0.8643650343261662, 5);
  sqcRZGate(q, 1.928341720615113, 5);
  sqcRYGate(q, 0.5481594647100287, 6);
  sqcRZGate(q, -1.7063185968653614, 6);
  sqcRYGate(q, -1.2901923152734014, 7);
  sqcRZGate(q, 1.6704816994235907, 7);
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
  sqcRYGate(q, 1.9411357647439917, 0);
  sqcRZGate(q, -2.2659325959869503, 0);
  sqcRYGate(q, 1.680492621483121, 1);
  sqcRZGate(q, 1.563910698101055, 1);
  sqcRYGate(q, 0.6360324276941285, 2);
  sqcRZGate(q, -1.8177007814216353, 2);
  sqcRYGate(q, 0.8079261295350247, 3);
  sqcRZGate(q, -2.4282132898497193, 3);
  sqcRYGate(q, -1.8194563526969956, 4);
  sqcRZGate(q, -2.5253771882917166, 4);
  sqcRYGate(q, 0.5520408382926373, 5);
  sqcRZGate(q, 0.3748682461632198, 5);
  sqcRYGate(q, -0.0893091269633062, 6);
  sqcRZGate(q, 0.5354676851857174, 6);
  sqcRYGate(q, 0.38767115042182887, 7);
  sqcRZGate(q, -2.6295226447227433, 7);
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
  sqcRYGate(q, 0.9492195332719164, 0);
  sqcRZGate(q, -1.2694217034193245, 0);
  sqcRYGate(q, 2.5884015958362276, 1);
  sqcRZGate(q, 0.34791906131358713, 1);
  sqcRYGate(q, -1.4819165115259427, 2);
  sqcRZGate(q, -2.466753875967318, 2);
  sqcRYGate(q, 0.7283793079715881, 3);
  sqcRZGate(q, 2.941895517136423, 3);
  sqcRYGate(q, 2.4347874749556526, 4);
  sqcRZGate(q, 2.239535877208625, 4);
  sqcRYGate(q, -1.4515350336649229, 5);
  sqcRZGate(q, -2.88168023080005, 5);
  sqcRYGate(q, -2.106205520496979, 6);
  sqcRZGate(q, -0.2287768841227673, 6);
  sqcRYGate(q, 2.7667541675453955, 7);
  sqcRZGate(q, -0.7382160537751012, 7);
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
  sqcRYGate(q, -2.125650156728173, 0);
  sqcRZGate(q, 3.1345134974855755, 0);
  sqcRYGate(q, 0.7158766520779807, 1);
  sqcRZGate(q, 0.9822197394220824, 1);
  sqcRYGate(q, 2.2033557456499375, 2);
  sqcRZGate(q, 0.47008112062478263, 2);
  sqcRYGate(q, 1.3884556559633001, 3);
  sqcRZGate(q, 1.5732170286257574, 3);
  sqcRYGate(q, 0.45649478278277883, 4);
  sqcRZGate(q, -1.0494310586314455, 4);
  sqcRYGate(q, -2.97328138628069, 5);
  sqcRZGate(q, -1.7852836082204169, 5);
  sqcRYGate(q, 0.21170835209288708, 6);
  sqcRZGate(q, -0.08708654870971815, 6);
  sqcRYGate(q, 0.27602291578542626, 7);
  sqcRZGate(q, 0.4022470231909618, 7);
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
  sqcRYGate(q, -0.9831981331563915, 0);
  sqcRZGate(q, -2.4235614138360826, 0);
  sqcRYGate(q, 2.277196275820889, 1);
  sqcRZGate(q, -2.8887901470009556, 1);
  sqcRYGate(q, 0.40660983952792934, 2);
  sqcRZGate(q, -2.5709909971297216, 2);
  sqcRYGate(q, 2.271083876196137, 3);
  sqcRZGate(q, -2.121324412988108, 3);
  sqcRYGate(q, 0.2590722228132131, 4);
  sqcRZGate(q, -1.4657611312408527, 4);
  sqcRYGate(q, -0.5932305761113863, 5);
  sqcRZGate(q, 0.5223020923945088, 5);
  sqcRYGate(q, -1.3804394193639622, 6);
  sqcRZGate(q, -2.278240961908161, 6);
  sqcRYGate(q, 1.9893194754506192, 7);
  sqcRZGate(q, 1.121882244081599, 7);
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
  sqcRYGate(q, -0.7583375062131843, 0);
  sqcRZGate(q, 0.30763999715122786, 0);
  sqcRYGate(q, 0.8172582447256327, 1);
  sqcRZGate(q, -0.2527318680588814, 1);
  sqcRYGate(q, 1.204465417104475, 2);
  sqcRZGate(q, -2.8918291564351093, 2);
  sqcRYGate(q, -0.6530914421432672, 3);
  sqcRZGate(q, 0.3850847275720353, 3);
  sqcRYGate(q, -1.7315253772399641, 4);
  sqcRZGate(q, -0.4458301032229958, 4);
  sqcRYGate(q, -2.062807749740401, 5);
  sqcRZGate(q, -2.2978291434080997, 5);
  sqcRYGate(q, 2.532261422680786, 6);
  sqcRZGate(q, -1.059508297963692, 6);
  sqcRYGate(q, 0.6792643228179784, 7);
  sqcRZGate(q, -2.0397407491698383, 7);
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
  sqcRYGate(q, 1.7918440169003214, 0);
  sqcRZGate(q, -2.1977232477339417, 0);
  sqcRYGate(q, -2.9011358530504605, 1);
  sqcRZGate(q, 1.1529626956252619, 1);
  sqcRYGate(q, -1.7033741741282489, 2);
  sqcRZGate(q, 0.8697327210205279, 2);
  sqcRYGate(q, 0.3540655621768389, 3);
  sqcRZGate(q, 0.17508629708957624, 3);
  sqcRYGate(q, 2.54258580119978, 4);
  sqcRZGate(q, 1.436530701551507, 4);
  sqcRYGate(q, -0.13619974906718738, 5);
  sqcRZGate(q, -0.8259170029882236, 5);
  sqcRYGate(q, -2.2517223956399595, 6);
  sqcRZGate(q, 2.2732281382757282, 6);
  sqcRYGate(q, 0.2871704605798632, 7);
  sqcRZGate(q, 1.500435973228333, 7);
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
  sqcRYGate(q, -2.933156311389756, 0);
  sqcRZGate(q, -1.3342659042234137, 0);
  sqcRYGate(q, 2.9293540971588263, 1);
  sqcRZGate(q, 2.15348260339272, 1);
  sqcRYGate(q, 0.8211270087659986, 2);
  sqcRZGate(q, -2.2407476409327294, 2);
  sqcRYGate(q, 1.3692461434432965, 3);
  sqcRZGate(q, 2.118878656459266, 3);
  sqcRYGate(q, -0.4898377514883095, 4);
  sqcRZGate(q, 3.041295202849932, 4);
  sqcRYGate(q, -2.071515126583718, 5);
  sqcRZGate(q, -0.43319864372155004, 5);
  sqcRYGate(q, -2.5481255454082135, 6);
  sqcRZGate(q, -1.2888395101838037, 6);
  sqcRYGate(q, 1.7407572057672982, 7);
  sqcRZGate(q, 2.3963001529120764, 7);
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
  sqcRYGate(q, -1.5664671669326453, 0);
  sqcRZGate(q, 2.504188729138353, 0);
  sqcRYGate(q, 2.3184188027728796, 1);
  sqcRZGate(q, 2.662944385473868, 1);
  sqcRYGate(q, -1.7827520516869897, 2);
  sqcRZGate(q, 0.24278313599935064, 2);
  sqcRYGate(q, 0.8060999910437988, 3);
  sqcRZGate(q, 2.0505920481709063, 3);
  sqcRYGate(q, 0.742214952392774, 4);
  sqcRZGate(q, 2.701441677685772, 4);
  sqcRYGate(q, -1.1278896771381746, 5);
  sqcRZGate(q, 1.7579930793683902, 5);
  sqcRYGate(q, -0.1325285412013579, 6);
  sqcRZGate(q, 3.1334395519502234, 6);
  sqcRYGate(q, 1.1602782676532204, 7);
  sqcRZGate(q, 2.1326892255036682, 7);
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
  sqcRYGate(q, -2.9935126797796734, 0);
  sqcRZGate(q, -2.577335086601672, 0);
  sqcRYGate(q, 0.08210231649522427, 1);
  sqcRZGate(q, 0.6854842070380567, 1);
  sqcRYGate(q, 1.33543752437709, 2);
  sqcRZGate(q, -2.01091630057398, 2);
  sqcRYGate(q, -1.0492613625365648, 3);
  sqcRZGate(q, 0.720560239702892, 3);
  sqcRYGate(q, 1.0306039329657928, 4);
  sqcRZGate(q, -0.09439876238274003, 4);
  sqcRYGate(q, 2.2646101873194837, 5);
  sqcRZGate(q, 0.2711049919376097, 5);
  sqcRYGate(q, 1.1989333494198036, 6);
  sqcRZGate(q, 1.61997058299665, 6);
  sqcRYGate(q, -0.7367921517778484, 7);
  sqcRZGate(q, -0.10446608996571288, 7);
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
  sqcRYGate(q, -1.9412999965029416, 0);
  sqcRZGate(q, 3.1237338765092817, 0);
  sqcRYGate(q, -2.6127812262952173, 1);
  sqcRZGate(q, -1.8773741867601617, 1);
  sqcRYGate(q, -1.4696864634403939, 2);
  sqcRZGate(q, -0.49473578648962313, 2);
  sqcRYGate(q, -2.5119352006718856, 3);
  sqcRZGate(q, -0.0443799129261464, 3);
  sqcRYGate(q, -2.8598950185956755, 4);
  sqcRZGate(q, 1.0761807418705565, 4);
  sqcRYGate(q, 1.4510714826879296, 5);
  sqcRZGate(q, 2.41237455525632, 5);
  sqcRYGate(q, -0.1912222715059171, 6);
  sqcRZGate(q, 0.9641857728106562, 6);
  sqcRYGate(q, 1.0485876683416002, 7);
  sqcRZGate(q, 0.3862570087416644, 7);
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
  sqcRYGate(q, 2.293464711683484, 0);
  sqcRZGate(q, 0.6227984044245404, 0);
  sqcRYGate(q, 2.0123271077297815, 1);
  sqcRZGate(q, 2.438255063014311, 1);
  sqcRYGate(q, 2.914315809767601, 2);
  sqcRZGate(q, 0.17809670512523915, 2);
  sqcRYGate(q, -1.403894700979591, 3);
  sqcRZGate(q, 3.0095452323797387, 3);
  sqcRYGate(q, 2.254096098870971, 4);
  sqcRZGate(q, -0.36161547224270363, 4);
  sqcRYGate(q, -2.1139897933652225, 5);
  sqcRZGate(q, -1.7897621686139393, 5);
  sqcRYGate(q, -1.7504710707406774, 6);
  sqcRZGate(q, -2.671076180497031, 6);
  sqcRYGate(q, -2.167434296740508, 7);
  sqcRZGate(q, 1.1589552421491467, 7);
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
  sqcRYGate(q, -0.2123077255180225, 0);
  sqcRZGate(q, -2.7429918850774744, 0);
  sqcRYGate(q, 1.501146715310143, 1);
  sqcRZGate(q, 0.4379742346823461, 1);
  sqcRYGate(q, 0.46941577950829766, 2);
  sqcRZGate(q, -2.777346282570339, 2);
  sqcRYGate(q, 1.360068207881843, 3);
  sqcRZGate(q, 2.0458001447917815, 3);
  sqcRYGate(q, -0.2552245859879569, 4);
  sqcRZGate(q, 0.16219954389158311, 4);
  sqcRYGate(q, -0.6505053457550583, 5);
  sqcRZGate(q, 1.7561506475129036, 5);
  sqcRYGate(q, -1.731849687165382, 6);
  sqcRZGate(q, 1.218014262395677, 6);
  sqcRYGate(q, -1.0280519961289605, 7);
  sqcRZGate(q, -1.5519514941694066, 7);
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
  sqcRYGate(q, -0.3415549188942294, 0);
  sqcRZGate(q, -2.6319383484142227, 0);
  sqcRYGate(q, 0.40842146067995877, 1);
  sqcRZGate(q, 2.279435035650612, 1);
  sqcRYGate(q, 0.6879604721891779, 2);
  sqcRZGate(q, 2.751979098987149, 2);
  sqcRYGate(q, 0.8386072556698673, 3);
  sqcRZGate(q, -1.7181656455321184, 3);
  sqcRYGate(q, 2.063396453943276, 4);
  sqcRZGate(q, 1.5763714026495732, 4);
  sqcRYGate(q, -2.686808068727157, 5);
  sqcRZGate(q, -1.76542784411075, 5);
  sqcRYGate(q, -2.6699618678958177, 6);
  sqcRZGate(q, 2.590304148891116, 6);
  sqcRYGate(q, 2.5515426080482486, 7);
  sqcRZGate(q, 0.5340266431298515, 7);
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
  sqcRYGate(q, -2.314678776370426, 0);
  sqcRZGate(q, -0.40872899120229267, 0);
  sqcRYGate(q, 0.593640206672406, 1);
  sqcRZGate(q, 2.874035000481332, 1);
  sqcRYGate(q, -0.9143114463118325, 2);
  sqcRZGate(q, 1.2111629947229157, 2);
  sqcRYGate(q, 2.0886003445977224, 3);
  sqcRZGate(q, 1.307240886438139, 3);
  sqcRYGate(q, -0.12420924101578609, 4);
  sqcRZGate(q, -3.0176653697024296, 4);
  sqcRYGate(q, 2.5001422092652, 5);
  sqcRZGate(q, -1.0470265296644143, 5);
  sqcRYGate(q, -2.7282596438094555, 6);
  sqcRZGate(q, -2.365585605982083, 6);
  sqcRYGate(q, -2.1254789935892346, 7);
  sqcRZGate(q, -3.030594713639574, 7);
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
  sqcRYGate(q, -2.2467302803682614, 0);
  sqcRZGate(q, 1.9276827943920942, 0);
  sqcRYGate(q, -1.1452172232497835, 1);
  sqcRZGate(q, 1.6100023009028694, 1);
  sqcRYGate(q, -1.9387750584142804, 2);
  sqcRZGate(q, 2.664371359658339, 2);
  sqcRYGate(q, 2.7669635492030578, 3);
  sqcRZGate(q, 1.4864037071947234, 3);
  sqcRYGate(q, 2.7261997859931055, 4);
  sqcRZGate(q, 2.501083303727273, 4);
  sqcRYGate(q, -0.6548478915162954, 5);
  sqcRZGate(q, -0.6951111979753652, 5);
  sqcRYGate(q, 2.7021494610854497, 6);
  sqcRZGate(q, 0.6288193871471934, 6);
  sqcRYGate(q, 2.281567055377293, 7);
  sqcRZGate(q, -1.789984607116756, 7);
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
  sqcRYGate(q, 1.3024054760801675, 0);
  sqcRZGate(q, -1.174924224541945, 0);
  sqcRYGate(q, 1.8829199985884577, 1);
  sqcRZGate(q, -1.9213431827767498, 1);
  sqcRYGate(q, 2.6351938895951403, 2);
  sqcRZGate(q, 0.8026924918580371, 2);
  sqcRYGate(q, 1.0057131431172062, 3);
  sqcRZGate(q, 0.6587178120402815, 3);
  sqcRYGate(q, -2.3577357054240218, 4);
  sqcRZGate(q, 0.2712434912656576, 4);
  sqcRYGate(q, 0.3178338073966149, 5);
  sqcRZGate(q, -2.2333322692984225, 5);
  sqcRYGate(q, -1.8681864184472625, 6);
  sqcRZGate(q, -1.7656214315376273, 6);
  sqcRYGate(q, 2.380301258832042, 7);
  sqcRZGate(q, 0.5916144944068654, 7);
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
  sqcRYGate(q, 2.8120410736289085, 0);
  sqcRZGate(q, -2.780870119019133, 0);
  sqcRYGate(q, -0.4927107288792943, 1);
  sqcRZGate(q, -0.6185048567399847, 1);
  sqcRYGate(q, 2.798800495411352, 2);
  sqcRZGate(q, -2.6005518207518, 2);
  sqcRYGate(q, 0.42458352470146826, 3);
  sqcRZGate(q, 0.875779795524835, 3);
  sqcRYGate(q, 0.28157439994776556, 4);
  sqcRZGate(q, -0.10977137049503587, 4);
  sqcRYGate(q, -1.421936865761892, 5);
  sqcRZGate(q, 3.031355999624415, 5);
  sqcRYGate(q, 2.327352901065581, 6);
  sqcRZGate(q, -2.5896936545047677, 6);
  sqcRYGate(q, 1.2228116544703234, 7);
  sqcRZGate(q, 2.8303654930487605, 7);
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
  sqcRYGate(q, -1.7431543694654827, 0);
  sqcRZGate(q, 1.0226214094634614, 0);
  sqcRYGate(q, 1.5622407968834318, 1);
  sqcRZGate(q, 1.7415634040559338, 1);
  sqcRYGate(q, 0.6829329834703446, 2);
  sqcRZGate(q, 1.9587003787744681, 2);
  sqcRYGate(q, -0.7234356724567119, 3);
  sqcRZGate(q, 0.13777044506533792, 3);
  sqcRYGate(q, 1.8207368727367195, 4);
  sqcRZGate(q, -2.944194236364083, 4);
  sqcRYGate(q, 0.4280385589846751, 5);
  sqcRZGate(q, 0.05700577580970556, 5);
  sqcRYGate(q, 1.815376437449967, 6);
  sqcRZGate(q, -1.2616527586165864, 6);
  sqcRYGate(q, -2.417054052289704, 7);
  sqcRZGate(q, 1.7506924632409386, 7);
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
  sqcRYGate(q, -1.2661019588278828, 0);
  sqcRZGate(q, 0.6061986477942205, 0);
  sqcRYGate(q, 1.0110456333556623, 1);
  sqcRZGate(q, 1.4262644278171024, 1);
  sqcRYGate(q, 2.784654567384665, 2);
  sqcRZGate(q, -1.374899946636022, 2);
  sqcRYGate(q, 1.1154804085727363, 3);
  sqcRZGate(q, 2.373748013858311, 3);
  sqcRYGate(q, 2.064216524581221, 4);
  sqcRZGate(q, -0.35024516045791015, 4);
  sqcRYGate(q, -2.1091872327821504, 5);
  sqcRZGate(q, 3.0409918463593684, 5);
  sqcRYGate(q, 1.6788430857134644, 6);
  sqcRZGate(q, 3.099860189537414, 6);
  sqcRYGate(q, -2.8170919889092993, 7);
  sqcRZGate(q, 2.551566886460461, 7);
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
  sqcRYGate(q, 2.2561261790685485, 0);
  sqcRZGate(q, 1.460146813597517, 0);
  sqcRYGate(q, 0.6163852978499826, 1);
  sqcRZGate(q, -2.7387231922664586, 1);
  sqcRYGate(q, 2.351514135044719, 2);
  sqcRZGate(q, -2.9917890804294016, 2);
  sqcRYGate(q, -0.18789589416000632, 3);
  sqcRZGate(q, 0.9315024150339443, 3);
  sqcRYGate(q, 0.511968536573272, 4);
  sqcRZGate(q, 0.03064057586716788, 4);
  sqcRYGate(q, -1.164899977622401, 5);
  sqcRZGate(q, 2.6717921779446834, 5);
  sqcRYGate(q, 2.536733667234462, 6);
  sqcRZGate(q, -2.5617165323026225, 6);
  sqcRYGate(q, 1.7267704372770596, 7);
  sqcRZGate(q, 2.7170255588288197, 7);
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
  sqcRYGate(q, 1.681229188060174, 0);
  sqcRZGate(q, 1.7457688572391283, 0);
  sqcRYGate(q, 1.9081962214601944, 1);
  sqcRZGate(q, 2.4034522893533388, 1);
  sqcRYGate(q, -1.7032066456447703, 2);
  sqcRZGate(q, -2.93220096265604, 2);
  sqcRYGate(q, 0.7816826611692235, 3);
  sqcRZGate(q, -0.3815259941453278, 3);
  sqcRYGate(q, -2.609859406449486, 4);
  sqcRZGate(q, -0.15318571286523142, 4);
  sqcRYGate(q, 0.9282309206494423, 5);
  sqcRZGate(q, -0.5951049912254777, 5);
  sqcRYGate(q, -1.5576853027626045, 6);
  sqcRZGate(q, -1.432130199110768, 6);
  sqcRYGate(q, 1.9225976595979573, 7);
  sqcRZGate(q, 2.368906668502494, 7);
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
  sqcRYGate(q, -0.6983466926365046, 0);
  sqcRZGate(q, -3.0185321481673855, 0);
  sqcRYGate(q, -0.43830209492781697, 1);
  sqcRZGate(q, -2.0644042463634866, 1);
  sqcRYGate(q, -1.7192897948311898, 2);
  sqcRZGate(q, -1.321012858879363, 2);
  sqcRYGate(q, -2.504849138168816, 3);
  sqcRZGate(q, -1.9133957175890268, 3);
  sqcRYGate(q, 0.3162469884195138, 4);
  sqcRZGate(q, -0.31014109091282904, 4);
  sqcRYGate(q, -0.11733931649455695, 5);
  sqcRZGate(q, 2.6827772895191, 5);
  sqcRYGate(q, -0.1096603667863759, 6);
  sqcRZGate(q, 0.025853914026920454, 6);
  sqcRYGate(q, 0.7556928599774725, 7);
  sqcRZGate(q, -2.94262234033657, 7);
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
  sqcRYGate(q, 2.1807553923488006, 0);
  sqcRZGate(q, 2.853769987748716, 0);
  sqcRYGate(q, -2.507520735827198, 1);
  sqcRZGate(q, -2.622547674529996, 1);
  sqcRYGate(q, 2.1926583932610493, 2);
  sqcRZGate(q, 1.1203735185112125, 2);
  sqcRYGate(q, -2.3279131201176844, 3);
  sqcRZGate(q, -1.913167896519436, 3);
  sqcRYGate(q, 2.204976794030304, 4);
  sqcRZGate(q, 2.182194562764052, 4);
  sqcRYGate(q, 1.6883023969770294, 5);
  sqcRZGate(q, -1.8589545738870354, 5);
  sqcRYGate(q, -0.6531731252211612, 6);
  sqcRZGate(q, 2.816312864788704, 6);
  sqcRYGate(q, -0.6855898856530801, 7);
  sqcRZGate(q, 1.9716311578760375, 7);
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
  sqcRYGate(q, -0.5266830136875582, 0);
  sqcRZGate(q, -1.357489870000407, 0);
  sqcRYGate(q, 0.17444184006722654, 1);
  sqcRZGate(q, 2.3493122480145083, 1);
  sqcRYGate(q, 1.134917710049346, 2);
  sqcRZGate(q, -1.4100051402901919, 2);
  sqcRYGate(q, -1.3217600380515346, 3);
  sqcRZGate(q, -1.852836554527094, 3);
  sqcRYGate(q, 2.351724926920734, 4);
  sqcRZGate(q, 0.4455780909225214, 4);
  sqcRYGate(q, 1.3263677807610152, 5);
  sqcRZGate(q, 0.17620406593116741, 5);
  sqcRYGate(q, -0.6399285354001725, 6);
  sqcRZGate(q, 1.2645450813250394, 6);
  sqcRYGate(q, 0.6265691723805356, 7);
  sqcRZGate(q, 1.4892401655065868, 7);
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
  sqcRYGate(q, 0.665014111399004, 0);
  sqcRZGate(q, -0.18437906258511838, 0);
  sqcRYGate(q, 1.1543285420447233, 1);
  sqcRZGate(q, 3.0418457024591907, 1);
  sqcRYGate(q, -2.9170662176575064, 2);
  sqcRZGate(q, 2.0499256680736737, 2);
  sqcRYGate(q, 0.5626661369312415, 3);
  sqcRZGate(q, -0.2968316746459178, 3);
  sqcRYGate(q, 1.480249903104145, 4);
  sqcRZGate(q, -1.598691099531702, 4);
  sqcRYGate(q, -0.2726329649852648, 5);
  sqcRZGate(q, 1.8211773213298421, 5);
  sqcRYGate(q, 2.4778797854125396, 6);
  sqcRZGate(q, 2.4623791587960002, 6);
  sqcRYGate(q, -0.6647738093199708, 7);
  sqcRZGate(q, 1.172710328728221, 7);

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
