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

  sqcRYGate(q, 1.3379086478421582, 0);
  sqcRZGate(q, -1.9287523380482967, 0);
  sqcRYGate(q, -0.7343341943174099, 1);
  sqcRZGate(q, -2.593687789546118, 1);
  sqcRYGate(q, 1.0393973508006136, 2);
  sqcRZGate(q, -1.2165903385084098, 2);
  sqcRYGate(q, -2.7600653620049025, 3);
  sqcRZGate(q, 1.2921617694129142, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.2839959555176055, 0);
  sqcRZGate(q, -0.01640499126907002, 0);
  sqcRYGate(q, -1.1775628900548194, 1);
  sqcRZGate(q, 0.624878213863858, 1);
  sqcRYGate(q, 0.477906789127748, 2);
  sqcRZGate(q, -0.10508584052147928, 2);
  sqcRYGate(q, 2.5436624046122334, 3);
  sqcRZGate(q, -0.5581036025998524, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6027053375262499, 0);
  sqcRZGate(q, -0.788648725522612, 0);
  sqcRYGate(q, -1.5354087113669488, 1);
  sqcRZGate(q, 1.427202685924751, 1);
  sqcRYGate(q, 2.7881545949587903, 2);
  sqcRZGate(q, -2.01112196684781, 2);
  sqcRYGate(q, 2.269869807436842, 3);
  sqcRZGate(q, 1.4515916342118576, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9664021857282356, 0);
  sqcRZGate(q, -2.7757207040829415, 0);
  sqcRYGate(q, -3.051661299494901, 1);
  sqcRZGate(q, -1.3523986797503138, 1);
  sqcRYGate(q, 2.3315768050805543, 2);
  sqcRZGate(q, 0.6394402108556837, 2);
  sqcRYGate(q, 2.2801384588195637, 3);
  sqcRZGate(q, -0.3476749058274503, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.0420069242724135, 0);
  sqcRZGate(q, 0.8542644147516669, 0);
  sqcRYGate(q, -1.2630811374305577, 1);
  sqcRZGate(q, 2.9575345973710774, 1);
  sqcRYGate(q, 1.9783964723966634, 2);
  sqcRZGate(q, 2.7575735073444005, 2);
  sqcRYGate(q, 1.1482015992101653, 3);
  sqcRZGate(q, 0.6478976725577666, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.3154805176513578, 0);
  sqcRZGate(q, 3.0917895495120913, 0);
  sqcRYGate(q, -2.706283611916308, 1);
  sqcRZGate(q, -2.5072755803853117, 1);
  sqcRYGate(q, 0.10032268234449315, 2);
  sqcRZGate(q, -2.602405882837743, 2);
  sqcRYGate(q, -2.454788905590332, 3);
  sqcRZGate(q, 1.6119054307123069, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.9259582119464205, 0);
  sqcRZGate(q, 1.8015538130434512, 0);
  sqcRYGate(q, 0.2683302609506512, 1);
  sqcRZGate(q, -2.1186900942848217, 1);
  sqcRYGate(q, -2.5581725439773266, 2);
  sqcRZGate(q, -0.12268219510896738, 2);
  sqcRYGate(q, -2.2573265407194656, 3);
  sqcRZGate(q, 0.8550801940674964, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.2510941416372539, 0);
  sqcRZGate(q, -1.5267076145879184, 0);
  sqcRYGate(q, -1.0148051194543455, 1);
  sqcRZGate(q, -1.1322129035187496, 1);
  sqcRYGate(q, 1.9461759459905201, 2);
  sqcRZGate(q, 2.4164751024563063, 2);
  sqcRYGate(q, 2.803920954878916, 3);
  sqcRZGate(q, -1.5655674431626034, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5282422870735388, 0);
  sqcRZGate(q, -3.1018783468151563, 0);
  sqcRYGate(q, -2.0986483242056533, 1);
  sqcRZGate(q, -2.4479380988356043, 1);
  sqcRYGate(q, -0.5005784632003031, 2);
  sqcRZGate(q, -2.8706848210777527, 2);
  sqcRYGate(q, -1.3374266488243265, 3);
  sqcRZGate(q, -1.0862409213517026, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8399437329142279, 0);
  sqcRZGate(q, 0.8211727442813235, 0);
  sqcRYGate(q, 0.13389745503192874, 1);
  sqcRZGate(q, -2.3748207160733585, 1);
  sqcRYGate(q, 0.8434305723170896, 2);
  sqcRZGate(q, -1.2313553990841726, 2);
  sqcRYGate(q, -0.684315367085569, 3);
  sqcRZGate(q, 1.64304470650619, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.335391815253336, 0);
  sqcRZGate(q, 0.8622797032409482, 0);
  sqcRYGate(q, 0.923604088811632, 1);
  sqcRZGate(q, -0.9633253617163103, 1);
  sqcRYGate(q, -0.1864421586736995, 2);
  sqcRZGate(q, -1.2092658710484434, 2);
  sqcRYGate(q, 2.3537767048002003, 3);
  sqcRZGate(q, 0.5930079641659676, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.1614367988871983, 0);
  sqcRZGate(q, 1.9750489575908894, 0);
  sqcRYGate(q, 2.1974451663742176, 1);
  sqcRZGate(q, 1.962793346852349, 1);
  sqcRYGate(q, 1.3609668013006164, 2);
  sqcRZGate(q, -2.2781686205244744, 2);
  sqcRYGate(q, -0.2580069674641452, 3);
  sqcRZGate(q, -1.2472349093547286, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.533677218043438, 0);
  sqcRZGate(q, -2.0653812941665306, 0);
  sqcRYGate(q, -0.9483530816494756, 1);
  sqcRZGate(q, 0.5354989929575042, 1);
  sqcRYGate(q, 1.5284860262875408, 2);
  sqcRZGate(q, -1.2014257983943262, 2);
  sqcRYGate(q, 1.571357739246386, 3);
  sqcRZGate(q, 0.06303293315823671, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.2424707715492548, 0);
  sqcRZGate(q, 3.1029061187763505, 0);
  sqcRYGate(q, -1.5466694736167714, 1);
  sqcRZGate(q, -2.179202396654283, 1);
  sqcRYGate(q, -1.0509774732042039, 2);
  sqcRZGate(q, -1.8427891748050511, 2);
  sqcRYGate(q, -0.6245191233812342, 3);
  sqcRZGate(q, 0.6001453107776681, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.37612646643172026, 0);
  sqcRZGate(q, -1.5524029030207394, 0);
  sqcRYGate(q, -1.5545613830080487, 1);
  sqcRZGate(q, 1.6491158493892666, 1);
  sqcRYGate(q, 1.916210088935874, 2);
  sqcRZGate(q, -2.221112673815669, 2);
  sqcRYGate(q, -0.12735205966902619, 3);
  sqcRZGate(q, 2.0222029989806316, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8078119395115397, 0);
  sqcRZGate(q, 0.9171975842563507, 0);
  sqcRYGate(q, -0.850911166893836, 1);
  sqcRZGate(q, -1.7176116528970296, 1);
  sqcRYGate(q, -2.611912434002, 2);
  sqcRZGate(q, -0.12548049600794897, 2);
  sqcRYGate(q, 1.056785589035343, 3);
  sqcRZGate(q, -2.3095148447519547, 3);

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
