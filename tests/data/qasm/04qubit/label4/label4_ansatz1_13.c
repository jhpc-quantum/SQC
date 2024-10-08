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

  sqcRYGate(q, -2.3206762176180074, 0);
  sqcRZGate(q, -0.4968190714909407, 0);
  sqcRYGate(q, -2.1911179752327907, 1);
  sqcRZGate(q, -0.8310891311400611, 1);
  sqcRYGate(q, 3.0173856108751314, 2);
  sqcRZGate(q, 1.1881449417911565, 2);
  sqcRYGate(q, 1.5895545336030676, 3);
  sqcRZGate(q, 0.5892166887033392, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1462517016590361, 0);
  sqcRZGate(q, -0.48649493299557994, 0);
  sqcRYGate(q, -1.2173860024838041, 1);
  sqcRZGate(q, -1.1364872792774188, 1);
  sqcRYGate(q, 0.2400359999100168, 2);
  sqcRZGate(q, -1.6820218882984925, 2);
  sqcRYGate(q, 0.5126366131173015, 3);
  sqcRZGate(q, 1.4468199460819662, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2626468937714526, 0);
  sqcRZGate(q, -0.6720016776778168, 0);
  sqcRYGate(q, 0.09644821854485146, 1);
  sqcRZGate(q, 2.8904367258615657, 1);
  sqcRYGate(q, 0.26288739567544184, 2);
  sqcRZGate(q, 2.314083583914746, 2);
  sqcRYGate(q, 0.27241644481690924, 3);
  sqcRZGate(q, -1.1381455668464788, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1632078034712654, 0);
  sqcRZGate(q, -2.9451123076378805, 0);
  sqcRYGate(q, -1.3821282619881747, 1);
  sqcRZGate(q, -0.6089215278523011, 1);
  sqcRYGate(q, 2.8918013760001653, 2);
  sqcRZGate(q, -1.4561269471588973, 2);
  sqcRYGate(q, 0.3756910473809638, 3);
  sqcRZGate(q, 0.13273456993117794, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3060692808559098, 0);
  sqcRZGate(q, 1.1671435213413206, 0);
  sqcRYGate(q, -1.844653912937903, 1);
  sqcRZGate(q, 1.7102887661316042, 1);
  sqcRYGate(q, -1.9864703603811158, 2);
  sqcRZGate(q, -0.1522621756274426, 2);
  sqcRYGate(q, -2.1289586287587525, 3);
  sqcRZGate(q, -2.8545538859030035, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.341740756484049, 0);
  sqcRZGate(q, 3.043405802805905, 0);
  sqcRYGate(q, 2.9290952982284337, 1);
  sqcRZGate(q, -1.5335616072801779, 1);
  sqcRYGate(q, 1.317276252876586, 2);
  sqcRZGate(q, 0.7022615150349807, 2);
  sqcRYGate(q, -0.8277713526902827, 3);
  sqcRZGate(q, -2.8184065134200305, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2757083235448476, 0);
  sqcRZGate(q, -1.5038521658159727, 0);
  sqcRYGate(q, 1.0724570537296423, 1);
  sqcRZGate(q, 2.5550556269720563, 1);
  sqcRYGate(q, 1.170633025841221, 2);
  sqcRZGate(q, 1.4229534302054427, 2);
  sqcRYGate(q, -0.9813054700270386, 3);
  sqcRZGate(q, -1.359889073901453, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0170866560735243, 0);
  sqcRZGate(q, -2.034587130271278, 0);
  sqcRYGate(q, -2.198314794293389, 1);
  sqcRZGate(q, 2.3313473552356108, 1);
  sqcRYGate(q, 2.345869219928153, 2);
  sqcRZGate(q, -2.5356079282210278, 2);
  sqcRYGate(q, -0.4498230573329751, 3);
  sqcRZGate(q, 0.5864788080373868, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.043640729344625, 0);
  sqcRZGate(q, 1.5559927084276282, 0);
  sqcRYGate(q, -0.1501961127386037, 1);
  sqcRZGate(q, 0.38784928996614265, 1);
  sqcRYGate(q, 2.0460953497150767, 2);
  sqcRZGate(q, 2.2703872546757013, 2);
  sqcRYGate(q, 0.10293835631719084, 3);
  sqcRZGate(q, 0.33068002053333156, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0274603398856377, 0);
  sqcRZGate(q, 1.2485312941280515, 0);
  sqcRYGate(q, 1.356655272835239, 1);
  sqcRZGate(q, -2.511804900189411, 1);
  sqcRYGate(q, 0.33327504341374503, 2);
  sqcRZGate(q, -2.6501909720133585, 2);
  sqcRYGate(q, 2.9226030338883535, 3);
  sqcRZGate(q, -1.7877834725325097, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.07253546924726884, 0);
  sqcRZGate(q, -1.1704743749349074, 0);
  sqcRYGate(q, 2.5874900915751833, 1);
  sqcRZGate(q, -2.3681294311194776, 1);
  sqcRYGate(q, 2.5805726932872566, 2);
  sqcRZGate(q, -2.977454272294368, 2);
  sqcRYGate(q, -0.4179068004785724, 3);
  sqcRZGate(q, 1.5036347035889728, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.75812517793349, 0);
  sqcRZGate(q, 0.8340481496305345, 0);
  sqcRYGate(q, 2.6942923688160514, 1);
  sqcRZGate(q, 2.380290766343831, 1);
  sqcRYGate(q, 1.0457019304410462, 2);
  sqcRZGate(q, -1.4216394251192677, 2);
  sqcRYGate(q, 2.7135261989321773, 3);
  sqcRZGate(q, -2.8942202727080306, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0793156308045795, 0);
  sqcRZGate(q, -2.8669223883199537, 0);
  sqcRYGate(q, -2.195422633600648, 1);
  sqcRZGate(q, 2.0136004784745936, 1);
  sqcRYGate(q, -1.15442480400164, 2);
  sqcRZGate(q, 0.21785223303829393, 2);
  sqcRYGate(q, 2.0806029980758343, 3);
  sqcRZGate(q, -1.500691167688761, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0367912063969453, 0);
  sqcRZGate(q, -2.360139013120395, 0);
  sqcRYGate(q, -2.0387673284981256, 1);
  sqcRZGate(q, 0.5371000256404251, 1);
  sqcRYGate(q, -2.4552030583119038, 2);
  sqcRZGate(q, 2.8283242579094208, 2);
  sqcRYGate(q, -1.8641922662656412, 3);
  sqcRZGate(q, -0.15948209372471658, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2174329499310947, 0);
  sqcRZGate(q, -0.6602047103008502, 0);
  sqcRYGate(q, 1.440066304234832, 1);
  sqcRZGate(q, 0.8887224636728913, 1);
  sqcRYGate(q, -2.0068106073041108, 2);
  sqcRZGate(q, 0.9526627179322742, 2);
  sqcRYGate(q, 1.8177108034637977, 3);
  sqcRZGate(q, 2.2761346567809775, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0411661606374425, 0);
  sqcRZGate(q, -2.90582956164901, 0);
  sqcRYGate(q, 0.1699955919054812, 1);
  sqcRZGate(q, 1.5026096541286535, 1);
  sqcRYGate(q, 1.153575196050288, 2);
  sqcRZGate(q, -2.087761144750385, 2);
  sqcRYGate(q, 0.10659139006320117, 3);
  sqcRZGate(q, 1.4322363371929772, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5740782932866021, 0);
  sqcRZGate(q, 0.990755175276536, 0);
  sqcRYGate(q, -2.4240597852442116, 1);
  sqcRZGate(q, 3.096740789746139, 1);
  sqcRYGate(q, 2.5240638969052758, 2);
  sqcRZGate(q, 0.5158742752519049, 2);
  sqcRYGate(q, 0.2919841921011095, 3);
  sqcRZGate(q, -0.34366579908401285, 3);

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
