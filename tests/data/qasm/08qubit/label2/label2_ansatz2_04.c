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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 1.5522975923683415, 0);
  sqcRZGate(q, 0.17001094813831744, 0);
  sqcRYGate(q, 1.647849438840379, 1);
  sqcRZGate(q, -0.06782802550990992, 1);
  sqcRYGate(q, -3.1090209250502845, 2);
  sqcRZGate(q, -3.0299724416554317, 2);
  sqcRYGate(q, -3.1340567313566257, 3);
  sqcRZGate(q, -0.4631477680173548, 3);
  sqcRYGate(q, 3.1415904912891666, 4);
  sqcRZGate(q, 1.9399567236162953, 4);
  sqcRYGate(q, -5.433619270297772e-07, 5);
  sqcRZGate(q, -0.1923896158447622, 5);
  sqcRYGate(q, 1.557506807881026e-05, 6);
  sqcRZGate(q, -1.9646290457212627, 6);
  sqcRYGate(q, -3.1415866440916034, 7);
  sqcRZGate(q, -2.9925225947945306, 7);
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
  sqcRYGate(q, -2.7420864588897818, 0);
  sqcRZGate(q, 2.719889166493852, 0);
  sqcRYGate(q, 1.1427000252914439, 1);
  sqcRZGate(q, -2.2384164709850776, 1);
  sqcRYGate(q, -2.297343039847117, 2);
  sqcRZGate(q, 2.2569682355166565, 2);
  sqcRYGate(q, -3.0329146642713054, 3);
  sqcRZGate(q, -2.856755668984174, 3);
  sqcRYGate(q, 1.5710998298346235, 4);
  sqcRZGate(q, -3.141120934955111, 4);
  sqcRYGate(q, -3.1415876564694045, 5);
  sqcRZGate(q, 1.778857287005376, 5);
  sqcRYGate(q, -3.1415307717618406, 6);
  sqcRZGate(q, -1.4834320621895287, 6);
  sqcRYGate(q, 3.1414061411543397, 7);
  sqcRZGate(q, 2.206410621724727, 7);
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
  sqcRYGate(q, 3.645321108081134e-06, 0);
  sqcRZGate(q, -1.2832240146210054, 0);
  sqcRYGate(q, -3.141590753305368, 1);
  sqcRZGate(q, -1.6334721798786154, 1);
  sqcRYGate(q, 5.40299219773388e-05, 2);
  sqcRZGate(q, -0.699830491317599, 2);
  sqcRYGate(q, -2.419638265117046e-05, 3);
  sqcRZGate(q, -1.4693290605415843, 3);
  sqcRYGate(q, -1.570809000745963, 4);
  sqcRZGate(q, 1.5772466500638656, 4);
  sqcRYGate(q, -0.046645256588725204, 5);
  sqcRZGate(q, 2.6712504443943246, 5);
  sqcRYGate(q, 1.4670760535055258, 6);
  sqcRZGate(q, 1.2965739038178943, 6);
  sqcRYGate(q, -1.9070902530948786e-05, 7);
  sqcRZGate(q, -1.586138773720788, 7);
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
  sqcRYGate(q, 3.1415821667609167, 0);
  sqcRZGate(q, -1.8855454231387414, 0);
  sqcRYGate(q, -2.1124989691696187e-05, 1);
  sqcRZGate(q, 2.534452315879947, 1);
  sqcRYGate(q, -3.1415327896137053, 2);
  sqcRZGate(q, 1.5186501251370768, 2);
  sqcRYGate(q, 5.576499748606294e-06, 3);
  sqcRZGate(q, 0.8409649683095335, 3);
  sqcRYGate(q, 3.1415756050070085, 4);
  sqcRZGate(q, 0.3242577412542969, 4);
  sqcRYGate(q, 3.0886228844668513, 5);
  sqcRZGate(q, -1.3251250898114102, 5);
  sqcRYGate(q, 0.536872039719567, 6);
  sqcRZGate(q, -2.390823029926567, 6);
  sqcRYGate(q, 1.5707997193390077, 7);
  sqcRZGate(q, 3.1413092319368063, 7);
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
  sqcRYGate(q, -1.5624797957242054, 0);
  sqcRZGate(q, 1.670406907609743, 0);
  sqcRYGate(q, -1.578967171417842, 1);
  sqcRZGate(q, 1.6618969156315397, 1);
  sqcRYGate(q, -1.5658771922555026, 2);
  sqcRZGate(q, 1.4629159523240878, 2);
  sqcRYGate(q, 1.5716477375074662, 3);
  sqcRZGate(q, -0.4644967116624985, 3);
  sqcRYGate(q, -0.1213009419581212, 4);
  sqcRZGate(q, 1.351815598523018, 4);
  sqcRYGate(q, 1.216933760838644e-05, 5);
  sqcRZGate(q, -0.9726653742797943, 5);
  sqcRYGate(q, -3.1412775983852415, 6);
  sqcRZGate(q, -1.1342659302014433, 6);
  sqcRYGate(q, 1.5706754820170383, 7);
  sqcRZGate(q, -1.3880546430989649, 7);
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
  sqcRYGate(q, 2.6758002755607935, 0);
  sqcRZGate(q, 1.68306312575013, 0);
  sqcRYGate(q, 0.46529377890957524, 1);
  sqcRZGate(q, 1.5930297131640974, 1);
  sqcRYGate(q, 2.6658743828693487, 2);
  sqcRZGate(q, -1.6890301690361562, 2);
  sqcRYGate(q, 1.6368119465890745, 3);
  sqcRZGate(q, 1.864771220418052, 3);
  sqcRYGate(q, -1.5697432586993758, 4);
  sqcRZGate(q, 1.5750866540500965, 4);
  sqcRYGate(q, -2.332929107673465e-05, 5);
  sqcRZGate(q, -0.884275670034314, 5);
  sqcRYGate(q, -1.989404142267237e-06, 6);
  sqcRZGate(q, -3.030613337563258, 6);
  sqcRYGate(q, -3.141590124776838, 7);
  sqcRZGate(q, 1.6680055639908937, 7);
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
  sqcRYGate(q, 0.034593810472422715, 0);
  sqcRZGate(q, 1.9053871328350884, 0);
  sqcRYGate(q, 0.007345526168347938, 1);
  sqcRZGate(q, -1.6226993109546701, 1);
  sqcRYGate(q, 0.8043762655780577, 2);
  sqcRZGate(q, 2.2676056658081847, 2);
  sqcRYGate(q, -3.016881778416778, 3);
  sqcRZGate(q, -0.22432245363332015, 3);
  sqcRYGate(q, -1.515773185184515, 4);
  sqcRZGate(q, -2.7007150913514493, 4);
  sqcRYGate(q, 1.570785783830215, 5);
  sqcRZGate(q, 0.0006752885741176939, 5);
  sqcRYGate(q, 1.57125651373915, 6);
  sqcRZGate(q, 3.140284267524746, 6);
  sqcRYGate(q, -1.5703515169694329, 7);
  sqcRZGate(q, 3.1408781938007193, 7);
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
  sqcRYGate(q, -5.431590024303108e-07, 0);
  sqcRZGate(q, -1.4689712214632014, 0);
  sqcRYGate(q, -3.141592539292396, 1);
  sqcRZGate(q, -1.061102200838553, 1);
  sqcRYGate(q, -0.0002690256371786206, 2);
  sqcRZGate(q, 1.316157977649035, 2);
  sqcRYGate(q, -3.1413130029626117, 3);
  sqcRZGate(q, -1.694035541264146, 3);
  sqcRYGate(q, -3.140848455846315, 4);
  sqcRZGate(q, -2.311674371427161, 4);
  sqcRYGate(q, 1.5711207965117668, 5);
  sqcRZGate(q, -1.1833410475755084, 5);
  sqcRYGate(q, -1.570501441912695, 6);
  sqcRZGate(q, -1.1834813030347393, 6);
  sqcRYGate(q, -1.570501810092595, 7);
  sqcRZGate(q, -1.1834820219612359, 7);

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
