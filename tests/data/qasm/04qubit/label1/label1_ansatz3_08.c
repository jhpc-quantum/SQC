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

  sqcRYGate(q, 1.1589791905221347, 0);
  sqcRZGate(q, -1.01465341935692, 0);
  sqcRYGate(q, -2.1363967754448474, 1);
  sqcRZGate(q, 1.15512203291763, 1);
  sqcRYGate(q, -3.0069149925005796, 2);
  sqcRZGate(q, -3.012711935730166, 2);
  sqcRYGate(q, 1.2748595510110492, 3);
  sqcRZGate(q, -1.6852458497572433, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.537253788524968, 0);
  sqcRZGate(q, 0.16092894994511742, 0);
  sqcRYGate(q, -1.940116816752922, 1);
  sqcRZGate(q, 1.5463601193011969, 1);
  sqcRYGate(q, 2.0369196497197732, 2);
  sqcRZGate(q, 0.6156387407465578, 2);
  sqcRYGate(q, 2.2788880417144313, 3);
  sqcRZGate(q, -1.3944384305998856, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6797819166899601, 0);
  sqcRZGate(q, -2.730368591042128, 0);
  sqcRYGate(q, -2.476967753271361, 1);
  sqcRZGate(q, -0.6205898410287158, 1);
  sqcRYGate(q, -3.054429285502806, 2);
  sqcRZGate(q, -2.6930903899230705, 2);
  sqcRYGate(q, 0.9158363165862795, 3);
  sqcRZGate(q, -0.6311049933478067, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.6851010180399036, 0);
  sqcRZGate(q, -1.3705189765813175, 0);
  sqcRYGate(q, 2.1228288259491825, 1);
  sqcRZGate(q, 1.0554368896847848, 1);
  sqcRYGate(q, 2.286144403929798, 2);
  sqcRZGate(q, 0.7149662824592252, 2);
  sqcRYGate(q, -0.7026553968316361, 3);
  sqcRZGate(q, 1.264819722345194, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.582191371829106, 0);
  sqcRZGate(q, 1.4283002621875325, 0);
  sqcRYGate(q, 1.999052851760486, 1);
  sqcRZGate(q, 2.1492398184857633, 1);
  sqcRYGate(q, 0.0731675009159094, 2);
  sqcRZGate(q, -0.4084852827590471, 2);
  sqcRYGate(q, -2.431480984303001, 3);
  sqcRZGate(q, -0.42426036300550113, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.9804923451619223, 0);
  sqcRZGate(q, -1.815575721459933, 0);
  sqcRYGate(q, -1.5619809250448464, 1);
  sqcRZGate(q, -2.6140862207276787, 1);
  sqcRYGate(q, -0.8757715402903514, 2);
  sqcRZGate(q, 2.9610845638307035, 2);
  sqcRYGate(q, 0.2989720432840359, 3);
  sqcRZGate(q, 2.3997105932194107, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.6143158599975216, 0);
  sqcRZGate(q, -0.7218652408348092, 0);
  sqcRYGate(q, -2.719865784018204, 1);
  sqcRZGate(q, -1.7109211718219015, 1);
  sqcRYGate(q, -1.4623802094908127, 2);
  sqcRZGate(q, 2.7439628376722354, 2);
  sqcRYGate(q, -0.5732364358500623, 3);
  sqcRZGate(q, -1.7671434856666557, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.718621794292837, 0);
  sqcRZGate(q, -1.5493962108560833, 0);
  sqcRYGate(q, -1.9974771992458304, 1);
  sqcRZGate(q, 0.1323293698036539, 1);
  sqcRYGate(q, 0.9756859438067222, 2);
  sqcRZGate(q, 0.5952206625866999, 2);
  sqcRYGate(q, -1.294005177984492, 3);
  sqcRZGate(q, 1.832330667520661, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5031863584072525, 0);
  sqcRZGate(q, -2.4108557961518318, 0);
  sqcRYGate(q, -1.698227772292098, 1);
  sqcRZGate(q, -2.0661997951342936, 1);
  sqcRYGate(q, 2.5059700343631097, 2);
  sqcRZGate(q, 1.4411786216076494, 2);
  sqcRYGate(q, -2.07739725494749, 3);
  sqcRZGate(q, 0.7227584165946661, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.1788620145233268, 0);
  sqcRZGate(q, 2.516240928914948, 0);
  sqcRYGate(q, 0.8430006864981019, 1);
  sqcRZGate(q, 1.7236929671853634, 1);
  sqcRYGate(q, -1.4039134165180451, 2);
  sqcRZGate(q, 0.5391518640844124, 2);
  sqcRYGate(q, 0.17490454229131805, 3);
  sqcRZGate(q, -1.8581826408330322, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.2066373315167374, 0);
  sqcRZGate(q, -2.173407304915531, 0);
  sqcRYGate(q, -2.295109755343046, 1);
  sqcRZGate(q, 2.262079965355464, 1);
  sqcRYGate(q, -2.3084167767865487, 2);
  sqcRZGate(q, 1.416135021189067, 2);
  sqcRYGate(q, -0.9054705885699474, 3);
  sqcRZGate(q, 3.080546012628583, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.5321165604017364, 0);
  sqcRZGate(q, -1.5108508512300525, 0);
  sqcRYGate(q, 0.12485063109937092, 1);
  sqcRZGate(q, 1.2142133957505474, 1);
  sqcRYGate(q, -1.3351356176208329, 2);
  sqcRZGate(q, -1.036184282501691, 2);
  sqcRYGate(q, 0.5682568916097204, 3);
  sqcRZGate(q, 3.044213243099685, 3);

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
