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

  sqcRYGate(q, -0.14645453873590797, 0);
  sqcRZGate(q, -2.2122431772118425, 0);
  sqcRYGate(q, -2.930320214427636, 1);
  sqcRZGate(q, -2.878532969895945, 1);
  sqcRYGate(q, -2.001008220280988, 2);
  sqcRZGate(q, -0.7689128994972894, 2);
  sqcRYGate(q, 0.021800328576668804, 3);
  sqcRZGate(q, 0.028036395640493872, 3);
  sqcRYGate(q, 0.000383841861801848, 4);
  sqcRZGate(q, -2.472910405809119, 4);
  sqcRYGate(q, -1.5595330219591828, 5);
  sqcRZGate(q, -0.40559102600322594, 5);
  sqcRYGate(q, -3.1223325234200554, 6);
  sqcRZGate(q, -2.3565642904580053, 6);
  sqcRYGate(q, 1.598862475162306, 7);
  sqcRZGate(q, -0.5818286803339037, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.8918326027617303, 0);
  sqcRZGate(q, 1.206743187916305, 0);
  sqcRYGate(q, 1.9992457527838932, 1);
  sqcRZGate(q, 1.3118427837919242, 1);
  sqcRYGate(q, 2.253319210227221, 2);
  sqcRZGate(q, 0.12533103202240792, 2);
  sqcRYGate(q, -0.0007280036999240667, 3);
  sqcRZGate(q, -1.1820142556223332, 3);
  sqcRYGate(q, 0.4832591785297229, 4);
  sqcRZGate(q, -0.15463450458081596, 4);
  sqcRYGate(q, 0.004824424977749264, 5);
  sqcRZGate(q, -1.0325904430868915, 5);
  sqcRYGate(q, 1.2267333423072717, 6);
  sqcRZGate(q, 1.130648831611121, 6);
  sqcRYGate(q, -0.44828120631467266, 7);
  sqcRZGate(q, 1.8252298650979124, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.06740394932175953, 0);
  sqcRZGate(q, -1.1234634694513694, 0);
  sqcRYGate(q, -1.3480495551567908, 1);
  sqcRZGate(q, 1.188788256835815, 1);
  sqcRYGate(q, 3.0081901360788854, 2);
  sqcRZGate(q, 1.5526078257077351, 2);
  sqcRYGate(q, -0.4857377192430735, 3);
  sqcRZGate(q, 2.569515274687719, 3);
  sqcRYGate(q, 3.119991723509535, 4);
  sqcRZGate(q, -2.7315157974507938, 4);
  sqcRYGate(q, -0.07494488689857458, 5);
  sqcRZGate(q, -2.964646825473186, 5);
  sqcRYGate(q, 0.02856120750996283, 6);
  sqcRZGate(q, -2.0230944488506575, 6);
  sqcRYGate(q, 0.6440357015872451, 7);
  sqcRZGate(q, 0.10834795773281536, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.475677959452265, 0);
  sqcRZGate(q, 2.4066262736699024, 0);
  sqcRYGate(q, -0.026552125813842524, 1);
  sqcRZGate(q, 0.2974997397813235, 1);
  sqcRYGate(q, 0.6944371198206606, 2);
  sqcRZGate(q, 2.299865575902815, 2);
  sqcRYGate(q, -0.00017970893325358617, 3);
  sqcRZGate(q, -2.9744997027333553, 3);
  sqcRYGate(q, 2.760306494193036, 4);
  sqcRZGate(q, -1.5035175251641322, 4);
  sqcRYGate(q, -0.0027396183930221696, 5);
  sqcRZGate(q, 2.302528550882979, 5);
  sqcRYGate(q, -0.021051741509106655, 6);
  sqcRZGate(q, -0.9638940785998643, 6);
  sqcRYGate(q, -2.2958316113451382, 7);
  sqcRZGate(q, -1.818721742805474, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.0503508339893526, 0);
  sqcRZGate(q, 3.117774593140709, 0);
  sqcRYGate(q, -1.2853769430029673, 1);
  sqcRZGate(q, -0.8548605221298313, 1);
  sqcRYGate(q, 2.9643953450667064, 2);
  sqcRZGate(q, 0.7437408311622234, 2);
  sqcRYGate(q, -2.7876094180848603, 3);
  sqcRZGate(q, -1.9161119357160301, 3);
  sqcRYGate(q, 3.0078060534842996, 4);
  sqcRZGate(q, -0.27633257803559275, 4);
  sqcRYGate(q, -1.6909120367970283, 5);
  sqcRZGate(q, -0.43834502573284634, 5);
  sqcRYGate(q, -2.9527229689158108, 6);
  sqcRZGate(q, 2.8485432865014455, 6);
  sqcRYGate(q, 1.7364609249019534, 7);
  sqcRZGate(q, -0.9835280105712286, 7);

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
