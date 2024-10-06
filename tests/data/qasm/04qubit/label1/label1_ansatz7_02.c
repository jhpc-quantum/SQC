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

  sqcRYGate(q, -0.36364654304936883, 0);
  sqcRYGate(q, 1.633170361192527, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.139895484710857, 0);
  sqcRYGate(q, -1.423582480065614, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06677479837147882, 0);
  sqcRYGate(q, -2.3208585830516686, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.34343856968773967, 0);
  sqcRYGate(q, 1.4961580205924703, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1365397361768017, 0);
  sqcRYGate(q, -1.0206567831108826, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.593012294039359, 0);
  sqcRYGate(q, -2.0222361179476227, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.390413543912942, 1);
  sqcRYGate(q, 0.22744488766834792, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9717854352630875, 1);
  sqcRYGate(q, -0.8990770590290182, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.723473204388968, 1);
  sqcRYGate(q, 2.0083382121984323, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3454095923614221, 1);
  sqcRYGate(q, -2.056273680904616, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9155051410314692, 2);
  sqcRYGate(q, -1.5986789075366925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.026570887381179, 2);
  sqcRYGate(q, -3.104505663922903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0564490182991313, 0);
  sqcRYGate(q, 3.1359391988307914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.19537803519543792, 0);
  sqcRYGate(q, 0.8776599666623328, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0017739810970605, 0);
  sqcRYGate(q, 0.18386987178181022, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5731585133610813, 0);
  sqcRYGate(q, 0.5123721989250125, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7980832564981306, 0);
  sqcRYGate(q, -2.1236616237957477, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6302298674072295, 0);
  sqcRYGate(q, -0.06629957998073042, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0151567603762706, 1);
  sqcRYGate(q, 1.1771522685864544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.381402771163633, 1);
  sqcRYGate(q, 3.046786464210102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3463749521820056, 1);
  sqcRYGate(q, -2.1816151769836427, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.874335566862026, 1);
  sqcRYGate(q, -1.5911880767633146, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5134058268446415, 2);
  sqcRYGate(q, 1.9400707026653032, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4299507096125872, 2);
  sqcRYGate(q, 1.1296976990637697, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6140938496318578, 0);
  sqcRYGate(q, 2.262844737646048, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9369798376985812, 0);
  sqcRYGate(q, -0.26724840472533273, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11309710131031361, 0);
  sqcRYGate(q, 1.9798918229922522, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5111669656800766, 0);
  sqcRYGate(q, 0.7300091537315065, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3637184048911526, 0);
  sqcRYGate(q, -0.2657717538305242, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9171550851638135, 0);
  sqcRYGate(q, -0.34733939119372514, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2396169785346807, 1);
  sqcRYGate(q, 0.8181286481282379, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3622203658675147, 1);
  sqcRYGate(q, -0.5922601749875744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8978851077711025, 1);
  sqcRYGate(q, 0.5609164806163017, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1010129418824857, 1);
  sqcRYGate(q, 1.1163058053403319, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7385739085861003, 2);
  sqcRYGate(q, 1.9875875876391467, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.151165796231203, 2);
  sqcRYGate(q, 1.6320928454073833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1022575585678727, 0);
  sqcRYGate(q, 2.6936412378744783, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7908109413785684, 0);
  sqcRYGate(q, -2.924944886836244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2249472578781173, 0);
  sqcRYGate(q, -0.4937858987759249, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.740587992351358, 0);
  sqcRYGate(q, -2.3830743960946243, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6028037404003757, 0);
  sqcRYGate(q, -2.5272489829650406, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6526524720329848, 0);
  sqcRYGate(q, 2.952928681102897, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9844797470654254, 1);
  sqcRYGate(q, -0.8110287461090251, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1767523655869354, 1);
  sqcRYGate(q, -0.7582800495629299, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2039074758487875, 1);
  sqcRYGate(q, -1.958854146096157, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.121967990107952, 1);
  sqcRYGate(q, -1.4386238087775889, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7648316653939835, 2);
  sqcRYGate(q, 0.4332745677254858, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.205376909378767, 2);
  sqcRYGate(q, -2.0816771122063384, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7133667386549611, 0);
  sqcRYGate(q, 0.16730675116527394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.008180938282737, 0);
  sqcRYGate(q, 1.6992068533365234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.831571810201603, 0);
  sqcRYGate(q, 1.522369925283398, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8900374965243921, 0);
  sqcRYGate(q, -1.4520662277545495, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.008574766236557174, 0);
  sqcRYGate(q, 1.5875293758475673, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1267590409846404, 0);
  sqcRYGate(q, -3.0202791091493775, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9828366244894013, 1);
  sqcRYGate(q, -1.3436405950248593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2605910702699505, 1);
  sqcRYGate(q, -1.401809538186571, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6268364456668776, 1);
  sqcRYGate(q, 1.692823535406377, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.833666552654463, 1);
  sqcRYGate(q, -2.5248698025737517, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0449716219706486, 2);
  sqcRYGate(q, 0.7461222946695875, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6742809873185753, 2);
  sqcRYGate(q, -2.7683857335891053, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.638500368787426, 0);
  sqcRYGate(q, -2.499246229944556, 1);
  sqcRYGate(q, 0.33743114367660265, 2);
  sqcRYGate(q, -3.057028877061387, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
