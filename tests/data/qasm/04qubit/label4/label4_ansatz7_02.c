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

  sqcRYGate(q, -1.6420017186380529, 0);
  sqcRYGate(q, -2.6023407839829757, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.723052028546866, 0);
  sqcRYGate(q, -2.8568289439055112, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.434651956202918, 0);
  sqcRYGate(q, -0.05014696495705644, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6957716430253256, 0);
  sqcRYGate(q, 1.055615925702974, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4155585680949963, 0);
  sqcRYGate(q, 1.7591886023775667, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9056784023826961, 0);
  sqcRYGate(q, -1.6005434257745916, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4010043957454384, 1);
  sqcRYGate(q, -3.1287876146957307, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.245873857297779, 1);
  sqcRYGate(q, -1.2431648229273247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3764929689770664, 1);
  sqcRYGate(q, -1.3856948596266643, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5886992713908503, 1);
  sqcRYGate(q, 0.15317605478304472, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1096138365688537, 2);
  sqcRYGate(q, -1.30616655953601, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9892081111784163, 2);
  sqcRYGate(q, -0.8548037116707258, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.19117698250509, 0);
  sqcRYGate(q, -0.22021756516720004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1614564466632848, 0);
  sqcRYGate(q, 2.3764202259259197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4398959678247687, 0);
  sqcRYGate(q, -0.33989837439223786, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7350222741458425, 0);
  sqcRYGate(q, -0.7120365917360282, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.567107781277522, 0);
  sqcRYGate(q, 0.07543515921822375, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6523012053432113, 0);
  sqcRYGate(q, 0.1793278470423725, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8864890010955017, 1);
  sqcRYGate(q, -0.031361776729464275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0872878990240875, 1);
  sqcRYGate(q, 2.957856869952874, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0531712468507823, 1);
  sqcRYGate(q, 1.9334818002921652, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8620804858874953, 1);
  sqcRYGate(q, 1.3269578589564395, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8339966488689218, 2);
  sqcRYGate(q, -0.3572601157089537, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8375390637936967, 2);
  sqcRYGate(q, -2.491129506879048, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10599716424976435, 0);
  sqcRYGate(q, 2.802782973860231, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1169531747571884, 0);
  sqcRYGate(q, 2.390617314046311, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4460364576378177, 0);
  sqcRYGate(q, 2.3900745489181525, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1902716168349539, 0);
  sqcRYGate(q, -1.081705612191096, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4938737302014393, 0);
  sqcRYGate(q, -1.1804104690451909, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1900939878150576, 0);
  sqcRYGate(q, 0.11009493340731957, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3918661773653875, 1);
  sqcRYGate(q, 1.2762322028922926, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.065834144114129, 1);
  sqcRYGate(q, 0.6038312191017781, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5191711822627685, 1);
  sqcRYGate(q, -1.4628784979489176, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.619907339925243, 1);
  sqcRYGate(q, 2.5325871593099407, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9016630765238354, 2);
  sqcRYGate(q, 0.32173534739632365, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.33334337784445195, 2);
  sqcRYGate(q, 1.3543323251556165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.31308268236195297, 0);
  sqcRYGate(q, -1.6556154598795194, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8148916579373957, 0);
  sqcRYGate(q, 1.7875334841090824, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2875608234050153, 0);
  sqcRYGate(q, -0.9466267797225543, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7078127825342682, 0);
  sqcRYGate(q, -0.1589267283464677, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6981241687592198, 0);
  sqcRYGate(q, -2.946329540795033, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.674822005725375, 0);
  sqcRYGate(q, -0.9623883304682231, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7693259813689475, 1);
  sqcRYGate(q, -0.9816720699049863, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6795770058718071, 1);
  sqcRYGate(q, 2.798212237234976, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9011607429958415, 1);
  sqcRYGate(q, -1.8508962838770078, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.847110332371549, 1);
  sqcRYGate(q, -3.042958753532527, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8314940270176665, 2);
  sqcRYGate(q, 0.4669644663201647, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.868492299430851, 2);
  sqcRYGate(q, -0.08409138146189399, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7124161385233352, 0);
  sqcRYGate(q, -3.1379205654591082, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6287005485468931, 0);
  sqcRYGate(q, 1.7618481092934724, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8381819538623163, 0);
  sqcRYGate(q, 2.332725641939841, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6613281983064816, 0);
  sqcRYGate(q, -2.3047850098533673, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5649193457249053, 0);
  sqcRYGate(q, 1.2676471994945537, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.163090914388234, 0);
  sqcRYGate(q, -1.259081413833826, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0794113532602867, 1);
  sqcRYGate(q, 1.1068164426262266, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9645394626194435, 1);
  sqcRYGate(q, 0.6165318605477575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.212836280550021, 1);
  sqcRYGate(q, -0.03449531151059392, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9891320514996299, 1);
  sqcRYGate(q, -1.3666186569810514, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6159752182490491, 2);
  sqcRYGate(q, -0.9340374130811733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2788537659910513, 2);
  sqcRYGate(q, -0.5432353320725231, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5188974532932935, 0);
  sqcRYGate(q, -2.9074711212104263, 1);
  sqcRYGate(q, -0.49767385548518206, 2);
  sqcRYGate(q, 0.41607902677722747, 3);

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
