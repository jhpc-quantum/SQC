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

  sqcRYGate(q, 1.746189002759813, 0);
  sqcRYGate(q, -0.7610771906820365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7155372710179684, 0);
  sqcRYGate(q, 2.1155461656984524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11495411109796107, 1);
  sqcRYGate(q, -1.9152996928792214, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3301874557541612, 1);
  sqcRYGate(q, -0.09329362765703486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5558944788755045, 2);
  sqcRYGate(q, -1.1653586117917722, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.16887198168180453, 2);
  sqcRYGate(q, -0.7215283154972135, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2638695147559864, 0);
  sqcRYGate(q, -2.8629323670545195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4009916976257413, 0);
  sqcRYGate(q, 0.2065708229212877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.921624616683892, 1);
  sqcRYGate(q, -1.7943751018115828, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3298738114676454, 1);
  sqcRYGate(q, 2.70364980586614, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.60860522935494, 2);
  sqcRYGate(q, -0.5388094172627049, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4298818581350927, 2);
  sqcRYGate(q, 0.9686436185093177, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.936814417324002, 0);
  sqcRYGate(q, -0.6011920516996949, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3359211865378064, 0);
  sqcRYGate(q, 0.7658634224994512, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.025254510117725285, 1);
  sqcRYGate(q, 1.3538547729049895, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.611395162721589, 1);
  sqcRYGate(q, 1.2619628109347696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3009224242727586, 2);
  sqcRYGate(q, 1.6631637192846753, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7383712503307747, 2);
  sqcRYGate(q, -0.9453471678445905, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7634006839213736, 0);
  sqcRYGate(q, -1.2728941669378453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1818070452335037, 0);
  sqcRYGate(q, -1.0624400966229886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.075790101044031, 1);
  sqcRYGate(q, -1.2124345960780594, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5002669983021875, 1);
  sqcRYGate(q, -0.815195933770749, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7080492075043574, 2);
  sqcRYGate(q, -0.525632252134549, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.281314847569492, 2);
  sqcRYGate(q, -0.8501930329603118, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3209206210207096, 0);
  sqcRYGate(q, 1.0827365121306103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4058661356360522, 0);
  sqcRYGate(q, -1.1412799592956304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5367407345279702, 1);
  sqcRYGate(q, -0.2657131009575835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0245347176173976, 1);
  sqcRYGate(q, -2.2667403994639557, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.927893870634488, 2);
  sqcRYGate(q, -0.7647493985762991, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.24274396632799203, 2);
  sqcRYGate(q, -2.8609393440846276, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2990155020777543, 0);
  sqcRYGate(q, 2.6376701774275193, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.509989657592928, 0);
  sqcRYGate(q, -0.5047934147943989, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2883476145185306, 1);
  sqcRYGate(q, 2.111322170574077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8432796548541504, 1);
  sqcRYGate(q, -3.139382578452442, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.38935731812603236, 2);
  sqcRYGate(q, 3.1261889905736853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3876642119646556, 2);
  sqcRYGate(q, 0.13464236651911263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0102926261168852, 0);
  sqcRYGate(q, 2.658883223387084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5535457462266224, 0);
  sqcRYGate(q, -0.4709521462334358, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.010779717556633, 1);
  sqcRYGate(q, 3.0811707175001897, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4731909943827581, 1);
  sqcRYGate(q, 2.484190494607735, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5065960448694242, 2);
  sqcRYGate(q, 2.9781928952396464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1348401122582935, 2);
  sqcRYGate(q, 2.858395701438935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9724120442126694, 0);
  sqcRYGate(q, 1.8290270093481222, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2843232275309271, 0);
  sqcRYGate(q, 2.0488257703385786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3764821872741973, 1);
  sqcRYGate(q, 0.42413357100747184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.39728138915268385, 1);
  sqcRYGate(q, -0.15740216057933054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1438130019805788, 2);
  sqcRYGate(q, 2.4104385142834404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8289004751406708, 2);
  sqcRYGate(q, 2.385508694544017, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.33154248903290995, 0);
  sqcRYGate(q, -0.6840949326461718, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.480630275708979, 0);
  sqcRYGate(q, -2.8220834665116015, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.042549962107273, 1);
  sqcRYGate(q, -2.1910146380364974, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1173532154172987, 1);
  sqcRYGate(q, -2.294832634844462, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8240392399900376, 2);
  sqcRYGate(q, -2.291718163028016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8727159910777726, 2);
  sqcRYGate(q, 1.213081309337877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.001904362845961, 0);
  sqcRYGate(q, 2.590819261003854, 1);
  sqcRYGate(q, -0.5178760160453594, 2);
  sqcRYGate(q, -1.0502918578740188, 3);

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
