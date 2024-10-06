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

  sqcRYGate(q, -0.11977529787888753, 0);
  sqcRZGate(q, -1.5275218600832954, 0);
  sqcRYGate(q, 2.1564548291231564, 1);
  sqcRZGate(q, -0.8868046379373881, 1);
  sqcRYGate(q, -0.34776637550850253, 2);
  sqcRZGate(q, -3.085336891742978, 2);
  sqcRYGate(q, 1.4428086270649627, 3);
  sqcRZGate(q, 0.24254194610011687, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8492847149456164, 0);
  sqcRZGate(q, 1.975310420106891, 0);
  sqcRYGate(q, -2.9018582195446885, 1);
  sqcRZGate(q, -1.2515809033901601, 1);
  sqcRYGate(q, -1.4029589222613055, 2);
  sqcRZGate(q, 2.7227535618872256, 2);
  sqcRYGate(q, -3.1346676866934056, 3);
  sqcRZGate(q, -2.3558965200350914, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.642797321816156, 0);
  sqcRZGate(q, -2.087543315686885, 0);
  sqcRYGate(q, -2.620058095826682, 1);
  sqcRZGate(q, 1.0328513659309257, 1);
  sqcRYGate(q, 0.3022557384052762, 2);
  sqcRZGate(q, 1.1191559058020948, 2);
  sqcRYGate(q, -0.760486253095193, 3);
  sqcRZGate(q, 0.5550228527864681, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5219614863767393, 0);
  sqcRZGate(q, -2.6396267884340494, 0);
  sqcRYGate(q, -1.3654108461393069, 1);
  sqcRZGate(q, 1.093646867697847, 1);
  sqcRYGate(q, -2.541425222944929, 2);
  sqcRZGate(q, -1.7521120978101665, 2);
  sqcRYGate(q, -2.469721816177465, 3);
  sqcRZGate(q, 1.2594393495722496, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0161651578719946, 0);
  sqcRZGate(q, -2.9452164708787776, 0);
  sqcRYGate(q, 0.7362248334874497, 1);
  sqcRZGate(q, -1.1440305783463192, 1);
  sqcRYGate(q, -0.24536044812015204, 2);
  sqcRZGate(q, 2.480270453015148, 2);
  sqcRYGate(q, 1.4024271163264967, 3);
  sqcRZGate(q, 2.0979963814881497, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.478000377730421, 0);
  sqcRZGate(q, -0.9617850031100638, 0);
  sqcRYGate(q, 0.3537789805459092, 1);
  sqcRZGate(q, 1.6303655898329112, 1);
  sqcRYGate(q, -0.5282282334078996, 2);
  sqcRZGate(q, 0.3801099960552632, 2);
  sqcRYGate(q, 3.0016888249204743, 3);
  sqcRZGate(q, -0.7569594043145393, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.164964247918139, 0);
  sqcRZGate(q, -0.5380955398881062, 0);
  sqcRYGate(q, -2.2906483443909478, 1);
  sqcRZGate(q, -1.8145601961339624, 1);
  sqcRYGate(q, -0.17760646001083388, 2);
  sqcRZGate(q, -3.0029711114542574, 2);
  sqcRYGate(q, 2.8513846500328768, 3);
  sqcRZGate(q, 0.5016870053834258, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4714149781163828, 0);
  sqcRZGate(q, -1.4596662745087932, 0);
  sqcRYGate(q, 2.994295890911193, 1);
  sqcRZGate(q, 0.9406644110464842, 1);
  sqcRYGate(q, -0.06748607437492904, 2);
  sqcRZGate(q, 2.7379539919732747, 2);
  sqcRYGate(q, 2.0619716793948273, 3);
  sqcRZGate(q, -1.5795079836776225, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8093095842638753, 0);
  sqcRZGate(q, -0.3754084621170407, 0);
  sqcRYGate(q, -0.04574209317737557, 1);
  sqcRZGate(q, 1.0063287680606028, 1);
  sqcRYGate(q, -2.7382919784985478, 2);
  sqcRZGate(q, -0.2948870243345415, 2);
  sqcRYGate(q, -1.1406823376881956, 3);
  sqcRZGate(q, -1.395011205064058, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.99409838093787, 0);
  sqcRZGate(q, -2.282654323930301, 0);
  sqcRYGate(q, 1.8819150586201143, 1);
  sqcRZGate(q, 2.5919015883163614, 1);
  sqcRYGate(q, 0.839179828507689, 2);
  sqcRZGate(q, -2.6397876097751825, 2);
  sqcRYGate(q, -1.4004211437703633, 3);
  sqcRZGate(q, 1.21360195778478, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0242096066033013, 0);
  sqcRZGate(q, 0.008569799853897386, 0);
  sqcRYGate(q, 2.486580357085217, 1);
  sqcRZGate(q, -2.810377374578289, 1);
  sqcRYGate(q, -1.3432765782720222, 2);
  sqcRZGate(q, 1.6527699512805212, 2);
  sqcRYGate(q, 1.3342754368853436, 3);
  sqcRZGate(q, 3.034294312606597, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.135048670807411, 0);
  sqcRZGate(q, -0.17135997383946136, 0);
  sqcRYGate(q, -1.76878109713636, 1);
  sqcRZGate(q, 2.9521776565951976, 1);
  sqcRYGate(q, 1.3005822505169196, 2);
  sqcRZGate(q, 2.1701181468910384, 2);
  sqcRYGate(q, -0.11139087590308316, 3);
  sqcRZGate(q, -0.13314598581237794, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4761844380922726, 0);
  sqcRZGate(q, 2.963920389510513, 0);
  sqcRYGate(q, -0.7641698321474654, 1);
  sqcRZGate(q, 2.8013253766232804, 1);
  sqcRYGate(q, -0.21057664666752451, 2);
  sqcRZGate(q, -0.4091314964673759, 2);
  sqcRYGate(q, -1.20496104124949, 3);
  sqcRZGate(q, 2.457561812045014, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3085411821831172, 0);
  sqcRZGate(q, -2.9561040553152123, 0);
  sqcRYGate(q, -0.9637438322544024, 1);
  sqcRZGate(q, 1.1749516130153996, 1);
  sqcRYGate(q, -2.7229672480533007, 2);
  sqcRZGate(q, -0.6526706751090803, 2);
  sqcRYGate(q, 1.7975621548761405, 3);
  sqcRZGate(q, -1.0974204274780217, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7547237557741288, 0);
  sqcRZGate(q, -0.1898386371251659, 0);
  sqcRYGate(q, 2.7414171890254924, 1);
  sqcRZGate(q, -1.3327924053036948, 1);
  sqcRYGate(q, -0.30363132529499537, 2);
  sqcRZGate(q, 2.195887354958624, 2);
  sqcRYGate(q, 0.8513781156460363, 3);
  sqcRZGate(q, -0.5566248748508738, 3);

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
