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

  sqcRYGate(q, -0.7426482339840934, 0);
  sqcRZGate(q, -2.8865185445287636, 0);
  sqcRYGate(q, 1.094945856872453, 1);
  sqcRZGate(q, 1.5394050406993092, 1);
  sqcRYGate(q, -1.6455918230501254, 2);
  sqcRZGate(q, -0.41220403236100106, 2);
  sqcRYGate(q, 0.19754789762441938, 3);
  sqcRZGate(q, -0.4730062029032868, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.38575939461792785, 0);
  sqcRZGate(q, -1.467612087892575, 0);
  sqcRYGate(q, -1.4258281036949851, 1);
  sqcRZGate(q, -2.1894259727403473, 1);
  sqcRYGate(q, 2.4238994602891752, 2);
  sqcRZGate(q, 1.722625183896894, 2);
  sqcRYGate(q, -0.1467760746828244, 3);
  sqcRZGate(q, 0.47264733859390023, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5775653639796408, 0);
  sqcRZGate(q, -2.8733566285229264, 0);
  sqcRYGate(q, -0.4310167355896319, 1);
  sqcRZGate(q, 2.53810361251574, 1);
  sqcRYGate(q, -2.6042301744455125, 2);
  sqcRZGate(q, -0.6541798748234893, 2);
  sqcRYGate(q, -0.6766067510467708, 3);
  sqcRZGate(q, 1.2685288369253054, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4659843962626975, 0);
  sqcRZGate(q, -0.3043177903145722, 0);
  sqcRYGate(q, 1.5372036262680917, 1);
  sqcRZGate(q, 0.0006313568723552691, 1);
  sqcRYGate(q, 2.1163420885652813, 2);
  sqcRZGate(q, 2.615561668145461, 2);
  sqcRYGate(q, 0.14249756166310323, 3);
  sqcRZGate(q, 0.5759495027549465, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.536441949764147, 0);
  sqcRZGate(q, -1.5098292135931695, 0);
  sqcRYGate(q, -2.18049733493244, 1);
  sqcRZGate(q, 0.8190458511159466, 1);
  sqcRYGate(q, -0.8828534859297533, 2);
  sqcRZGate(q, -2.862535291275568, 2);
  sqcRYGate(q, 2.6033674494501136, 3);
  sqcRZGate(q, 2.7471988586582965, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.976727740953159, 0);
  sqcRZGate(q, -1.2554657108099077, 0);
  sqcRYGate(q, 0.6946428477010347, 1);
  sqcRZGate(q, -2.8269511692625118, 1);
  sqcRYGate(q, -1.0841156622843693, 2);
  sqcRZGate(q, 2.1914622122168863, 2);
  sqcRYGate(q, 0.6922975874422087, 3);
  sqcRZGate(q, -0.292366183688532, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.027357923857514, 0);
  sqcRZGate(q, 2.731332358013612, 0);
  sqcRYGate(q, -0.9236545542032046, 1);
  sqcRZGate(q, 2.424907625031672, 1);
  sqcRYGate(q, 1.6816337932934446, 2);
  sqcRZGate(q, 1.3826640135107562, 2);
  sqcRYGate(q, -2.443850354581229, 3);
  sqcRZGate(q, -0.006915941228539779, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.39589391428672355, 0);
  sqcRZGate(q, -1.3565518023559457, 0);
  sqcRYGate(q, 1.5117841851300753, 1);
  sqcRZGate(q, -2.82689282956117, 1);
  sqcRYGate(q, -3.077657540869822, 2);
  sqcRZGate(q, -1.7090061036210729, 2);
  sqcRYGate(q, -2.143386257919163, 3);
  sqcRZGate(q, 1.1860141497895658, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8454427632761525, 0);
  sqcRZGate(q, -1.8338738386419922, 0);
  sqcRYGate(q, 2.6400549344493767, 1);
  sqcRZGate(q, 1.3867064724033515, 1);
  sqcRYGate(q, -2.4158672247518376, 2);
  sqcRZGate(q, 0.28373527804232074, 2);
  sqcRYGate(q, 1.1725163498910278, 3);
  sqcRZGate(q, 1.299145242476066, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0386028257688067, 0);
  sqcRZGate(q, -0.8166979473425062, 0);
  sqcRYGate(q, -1.0192725166751968, 1);
  sqcRZGate(q, -1.4127847188765728, 1);
  sqcRYGate(q, 2.280609584808322, 2);
  sqcRZGate(q, 2.9640445706560823, 2);
  sqcRYGate(q, 1.7624303863533377, 3);
  sqcRZGate(q, 0.1396763466127693, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4683664191940538, 0);
  sqcRZGate(q, 2.0160249129600576, 0);
  sqcRYGate(q, 2.609867535772138, 1);
  sqcRZGate(q, -2.4306751441939243, 1);
  sqcRYGate(q, -1.7835179953779188, 2);
  sqcRZGate(q, 0.039762790808441466, 2);
  sqcRYGate(q, 0.05764396553530026, 3);
  sqcRZGate(q, 0.6389197200283644, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4998758021193169, 0);
  sqcRZGate(q, 1.8983377269625212, 0);
  sqcRYGate(q, 3.1384630747521043, 1);
  sqcRZGate(q, -1.2297451349872048, 1);
  sqcRYGate(q, -2.728009777524711, 2);
  sqcRZGate(q, 2.1975594684897883, 2);
  sqcRYGate(q, -3.1176711788375884, 3);
  sqcRZGate(q, -1.2235989085886736, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.861990963747877, 0);
  sqcRZGate(q, 1.6155181901431837, 0);
  sqcRYGate(q, 0.7941933751792803, 1);
  sqcRZGate(q, 2.460401089845933, 1);
  sqcRYGate(q, 0.28597682755964443, 2);
  sqcRZGate(q, 1.1473334408769589, 2);
  sqcRYGate(q, 2.5049885642444947, 3);
  sqcRZGate(q, -2.059537074850489, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8261518921860875, 0);
  sqcRZGate(q, -0.9708993249265565, 0);
  sqcRYGate(q, 2.7435905721385865, 1);
  sqcRZGate(q, 0.3919259418647538, 1);
  sqcRYGate(q, 2.7781670980652553, 2);
  sqcRZGate(q, -1.1707786658725072, 2);
  sqcRYGate(q, 0.018155322855771597, 3);
  sqcRZGate(q, 1.7063653430668915, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.22655080766298852, 0);
  sqcRZGate(q, 2.697193628397342, 0);
  sqcRYGate(q, 0.22602960283998644, 1);
  sqcRZGate(q, 0.8532152792450238, 1);
  sqcRYGate(q, -1.9466235747819571, 2);
  sqcRZGate(q, 2.1023445309731947, 2);
  sqcRYGate(q, -1.248273977698374, 3);
  sqcRZGate(q, 0.9624223153890102, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.08699833617461154, 0);
  sqcRZGate(q, 2.2176114334212746, 0);
  sqcRYGate(q, 0.23236482496040883, 1);
  sqcRZGate(q, 0.6927011940689376, 1);
  sqcRYGate(q, -2.2792448725072694, 2);
  sqcRZGate(q, 1.3563735625313766, 2);
  sqcRYGate(q, 0.586723833692794, 3);
  sqcRZGate(q, -2.057485338642281, 3);

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
