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

  sqcRYGate(q, 2.611256892986758, 0);
  sqcRZGate(q, -1.5276180077106933, 0);
  sqcRYGate(q, 2.4102212054936247, 1);
  sqcRZGate(q, -1.8903731720978187, 1);
  sqcRYGate(q, -0.9659250976892539, 2);
  sqcRZGate(q, 0.5522075470984456, 2);
  sqcRYGate(q, -1.7167904764813737, 3);
  sqcRZGate(q, 0.8182116325742478, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.002595894591737, 0);
  sqcRZGate(q, -1.66960600594187, 0);
  sqcRYGate(q, -1.9816202343076297, 1);
  sqcRZGate(q, -0.9159468622609149, 1);
  sqcRYGate(q, -2.3987317426840016, 2);
  sqcRZGate(q, 0.4841346863485833, 2);
  sqcRYGate(q, -0.8983689478311545, 3);
  sqcRZGate(q, 0.33966315791664486, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.20692334528598164, 0);
  sqcRZGate(q, 2.2060429631495833, 0);
  sqcRYGate(q, -0.5166470557148123, 1);
  sqcRZGate(q, -2.77171653855611, 1);
  sqcRYGate(q, -1.2933715533231218, 2);
  sqcRZGate(q, -0.5968765446387135, 2);
  sqcRYGate(q, -1.9463314948719699, 3);
  sqcRZGate(q, 2.6331559158961926, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5204955009983928, 0);
  sqcRZGate(q, -2.2586671279882946, 0);
  sqcRYGate(q, -0.00979268803102116, 1);
  sqcRZGate(q, 0.8065886353809901, 1);
  sqcRYGate(q, 0.7130777397297571, 2);
  sqcRZGate(q, -1.8004009093390876, 2);
  sqcRYGate(q, 2.719297103468651, 3);
  sqcRZGate(q, -2.943746248759553, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5882577546548066, 0);
  sqcRZGate(q, 3.138363235679259, 0);
  sqcRYGate(q, 2.590530778129535, 1);
  sqcRZGate(q, 2.791492949477019, 1);
  sqcRYGate(q, 2.11395830230538, 2);
  sqcRZGate(q, 1.5613301062329354, 2);
  sqcRYGate(q, 0.6696326391117746, 3);
  sqcRZGate(q, -1.3752586046338768, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9955391918796357, 0);
  sqcRZGate(q, -1.2434907321114501, 0);
  sqcRYGate(q, -0.4280154190085339, 1);
  sqcRZGate(q, 0.592980500297129, 1);
  sqcRYGate(q, 1.686652981338779, 2);
  sqcRZGate(q, 1.9449503852619143, 2);
  sqcRYGate(q, 1.873028739601688, 3);
  sqcRZGate(q, -2.0119839345951336, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8133127123951829, 0);
  sqcRZGate(q, -2.5944613905708684, 0);
  sqcRYGate(q, -0.5693715615706907, 1);
  sqcRZGate(q, 2.349061436701414, 1);
  sqcRYGate(q, 1.6207378364385856, 2);
  sqcRZGate(q, -1.202290663320689, 2);
  sqcRYGate(q, 1.8913229717976323, 3);
  sqcRZGate(q, -1.9867510567336464, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.395896767074545, 0);
  sqcRZGate(q, -2.1391469942280494, 0);
  sqcRYGate(q, 1.448383095763259, 1);
  sqcRZGate(q, 2.881922468046082, 1);
  sqcRYGate(q, 1.264852586592968, 2);
  sqcRZGate(q, 2.449437138810647, 2);
  sqcRYGate(q, -0.5584830408936136, 3);
  sqcRZGate(q, -1.286878580126876, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1220593701055046, 0);
  sqcRZGate(q, -0.7156647033069722, 0);
  sqcRYGate(q, -1.272986993698088, 1);
  sqcRZGate(q, 2.043074923398113, 1);
  sqcRYGate(q, -2.2101680742207632, 2);
  sqcRZGate(q, 1.272376605358216, 2);
  sqcRYGate(q, 3.0940523876778085, 3);
  sqcRZGate(q, -2.549475930514497, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1365097980450498, 0);
  sqcRZGate(q, -2.942496927719299, 0);
  sqcRYGate(q, -0.25633485253285127, 1);
  sqcRZGate(q, 0.1368353363190291, 1);
  sqcRYGate(q, -1.4420177150693751, 2);
  sqcRZGate(q, 2.6432251548432992, 2);
  sqcRYGate(q, 2.6960154720775895, 3);
  sqcRZGate(q, 0.17940003057430867, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.522429923673419, 0);
  sqcRZGate(q, -1.7536844172511508, 0);
  sqcRYGate(q, -1.2110730858934513, 1);
  sqcRZGate(q, 0.9832199153026121, 1);
  sqcRYGate(q, 1.6789002352992202, 2);
  sqcRZGate(q, 0.384205308464943, 2);
  sqcRYGate(q, 2.153478049638583, 3);
  sqcRZGate(q, 1.5014970016894802, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8879356092897625, 0);
  sqcRZGate(q, 1.6364816234784048, 0);
  sqcRYGate(q, -3.1037965406431356, 1);
  sqcRZGate(q, 1.5662301748599887, 1);
  sqcRYGate(q, 2.2703014740345786, 2);
  sqcRZGate(q, -2.1108185786099005, 2);
  sqcRYGate(q, -2.1344178644268665, 3);
  sqcRZGate(q, -0.9243123641179888, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8671958611334915, 0);
  sqcRZGate(q, -1.247248257075947, 0);
  sqcRYGate(q, 0.46142032535218025, 1);
  sqcRZGate(q, -0.9242873786324076, 1);
  sqcRYGate(q, -0.5814421040153519, 2);
  sqcRZGate(q, -1.147369941147398, 2);
  sqcRYGate(q, 2.078574093004465, 3);
  sqcRZGate(q, 2.992869269718394, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7135495898990118, 0);
  sqcRZGate(q, -2.729847573303149, 0);
  sqcRYGate(q, -1.485447300390571, 1);
  sqcRZGate(q, -3.121508293167905, 1);
  sqcRYGate(q, -2.803934878883717, 2);
  sqcRZGate(q, 0.07339213400545576, 2);
  sqcRYGate(q, 0.6495384558805359, 3);
  sqcRZGate(q, -2.1971283714145984, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9442372574361158, 0);
  sqcRZGate(q, -2.084120196487975, 0);
  sqcRYGate(q, -0.9851808408581398, 1);
  sqcRZGate(q, 1.2663848491106044, 1);
  sqcRYGate(q, 1.569993561321919, 2);
  sqcRZGate(q, -2.15292361237678, 2);
  sqcRYGate(q, -1.6490371909551296, 3);
  sqcRZGate(q, 1.226072770603461, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0237027683882145, 0);
  sqcRZGate(q, -2.3448650058677445, 0);
  sqcRYGate(q, -2.140440810942824, 1);
  sqcRZGate(q, -2.31932845034605, 1);
  sqcRYGate(q, 2.9085029717546345, 2);
  sqcRZGate(q, -2.7700965352415485, 2);
  sqcRYGate(q, -3.0864420006131557, 3);
  sqcRZGate(q, -2.5965616245344623, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7379203019505933, 0);
  sqcRZGate(q, 0.997332895626335, 0);
  sqcRYGate(q, -0.6479788995211928, 1);
  sqcRZGate(q, 0.5245970685425557, 1);
  sqcRYGate(q, 3.049381196537382, 2);
  sqcRZGate(q, 0.23351667468175474, 2);
  sqcRYGate(q, -3.1333437505089368, 3);
  sqcRZGate(q, 2.2388121522337228, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0377679976832375, 0);
  sqcRZGate(q, -2.98641459342, 0);
  sqcRYGate(q, 0.05919851669144249, 1);
  sqcRZGate(q, -1.926318186348614, 1);
  sqcRYGate(q, -2.5035627850474524, 2);
  sqcRZGate(q, 1.9783178049412278, 2);
  sqcRYGate(q, 1.0202060154769406, 3);
  sqcRZGate(q, 2.2919197264339513, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7496789072402126, 0);
  sqcRZGate(q, 0.7192467821232461, 0);
  sqcRYGate(q, 0.07465588561431336, 1);
  sqcRZGate(q, 0.5916206783655339, 1);
  sqcRYGate(q, -0.8614524405572804, 2);
  sqcRZGate(q, 2.3707760493776657, 2);
  sqcRYGate(q, -1.4141260514869298, 3);
  sqcRZGate(q, 3.106098795868779, 3);

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
