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
  sqcInitialize(NULL, NULL);

  sqcQC* q;
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.3782074055555693, 0);
  sqcRYGate(q, -2.018809981314919, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.358729078257783, 0);
  sqcRYGate(q, -1.8620115066893916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6455935110831899, 2);
  sqcRYGate(q, -2.9416549925133832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.36166983923515167, 2);
  sqcRYGate(q, -0.6007015564979675, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.616134303320254, 4);
  sqcRYGate(q, -2.111246996307188, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0515440151413962, 4);
  sqcRYGate(q, 2.5455721809157814, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.04776970105060003, 6);
  sqcRYGate(q, -2.1795822097963153, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.058297744907417, 6);
  sqcRYGate(q, -2.1511268502176444, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.34299796511962755, 0);
  sqcRYGate(q, -2.478049343827176, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5678754967020894, 0);
  sqcRYGate(q, -1.5678624601319062, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2970634036199056, 2);
  sqcRYGate(q, -2.2884247486484606, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.217513049647372, 2);
  sqcRYGate(q, 0.5977059950943221, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2028788721843935, 4);
  sqcRYGate(q, -0.47652572823529304, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7288183915252155, 4);
  sqcRYGate(q, -1.8156024627893095, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.18571232495375123, 1);
  sqcRYGate(q, 0.28380925931631573, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5728951518130891, 1);
  sqcRYGate(q, 1.5738057754097297, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0734617874830013, 3);
  sqcRYGate(q, -0.4441538024459337, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2100516601706257, 3);
  sqcRYGate(q, -1.3397638518003891, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.08293842977238697, 5);
  sqcRYGate(q, 2.2053880520066342, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.6486222452104715, 5);
  sqcRYGate(q, 2.611599367458653, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8664996055226933, 0);
  sqcRYGate(q, -3.097828051467514, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15250358421445812, 0);
  sqcRYGate(q, -0.02065344523685475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.629153542585973, 2);
  sqcRYGate(q, 0.8602905898397565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4732443562827065, 2);
  sqcRYGate(q, -3.0535084123737213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2531203018992876, 4);
  sqcRYGate(q, -2.12950943084242, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5804709503022507, 4);
  sqcRYGate(q, 1.9942131100713079, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7588065567857245, 6);
  sqcRYGate(q, -1.2281423205827995, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.513791004187678, 6);
  sqcRYGate(q, 0.9818942441770202, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.107325001701549, 0);
  sqcRYGate(q, 0.5532220355581892, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.0005463138559127501, 0);
  sqcRYGate(q, 3.1410731447762887, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7680212728013096, 2);
  sqcRYGate(q, 0.7434353225790389, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.17586726084462628, 2);
  sqcRYGate(q, 0.3582138742485205, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7625516237123526, 4);
  sqcRYGate(q, -2.5488415295634237, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.45965738764803615, 4);
  sqcRYGate(q, -0.3434109987187218, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.8729329817827667, 1);
  sqcRYGate(q, 3.016920511656075, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5644634604226164, 1);
  sqcRYGate(q, -0.6982741372507046, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1204537901446416, 3);
  sqcRYGate(q, -2.5214361855280636, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1364558579255997, 3);
  sqcRYGate(q, -3.113183503506714, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9642311463988422, 5);
  sqcRYGate(q, 1.731313416948768, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.6809936099267331, 5);
  sqcRYGate(q, -0.16182752103683062, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5784180886507191, 0);
  sqcRYGate(q, 1.3749430994790641, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.005355938022985285, 0);
  sqcRYGate(q, 0.007551951510718847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.730206363041911, 2);
  sqcRYGate(q, 2.9045469416404335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1373482144765457, 2);
  sqcRYGate(q, -1.5745618868509659, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7278822851428886, 4);
  sqcRYGate(q, -2.0648905963250987, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.622034393687282, 4);
  sqcRYGate(q, -1.0244951030206906, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.393797207862045, 6);
  sqcRYGate(q, 2.8222368904748643, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8519623959631204, 6);
  sqcRYGate(q, -2.0098703292848374, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1296446247300493, 0);
  sqcRYGate(q, 0.1851668347324127, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5189157837017524, 0);
  sqcRYGate(q, 0.19796245386568953, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.017543255830550653, 2);
  sqcRYGate(q, 2.5730691086061097, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1411319360122243, 2);
  sqcRYGate(q, -1.8072610772357226e-05, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.005731782648173327, 4);
  sqcRYGate(q, 0.6804154329989197, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.7683051725052229, 4);
  sqcRYGate(q, -0.4046444352333687, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.68198099815345, 1);
  sqcRYGate(q, -2.502805924993359, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.00014573147573049283, 1);
  sqcRYGate(q, -0.6792875414807071, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.24073340193960657, 3);
  sqcRYGate(q, -1.0668850263103875, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5714234627306967, 3);
  sqcRYGate(q, 1.922956231157082, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.003305863982944678, 5);
  sqcRYGate(q, -0.22703518717652368, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.570981674457112, 5);
  sqcRYGate(q, -1.5727272114452286, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.514145829208945, 0);
  sqcRYGate(q, 1.2922616022409636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5654957217574847, 0);
  sqcRYGate(q, -3.0776852208904053, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.20182324740818558, 2);
  sqcRYGate(q, 1.1386242946885892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0009107064673954516, 2);
  sqcRYGate(q, 0.0005634731816943628, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9118480578863322, 4);
  sqcRYGate(q, -1.814499702955868, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9884790264115306, 4);
  sqcRYGate(q, 1.8124217526453064, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2659585967062916, 6);
  sqcRYGate(q, 1.5743334362713044, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.348856499940744, 6);
  sqcRYGate(q, 1.5716481541925829, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6260118693434176, 0);
  sqcRYGate(q, -2.7982170675345066, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0806790524925174, 0);
  sqcRYGate(q, -3.141011039693307, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9197027390584313, 2);
  sqcRYGate(q, -1.9848420341492048, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.572363984768475, 2);
  sqcRYGate(q, 3.139152024581118, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.044217076688598485, 4);
  sqcRYGate(q, -0.0003499271026727868, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5774560586690756, 4);
  sqcRYGate(q, -0.00410809981765059, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5673062465201868, 1);
  sqcRYGate(q, -1.1294051918913048, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5754642871841318, 1);
  sqcRYGate(q, 1.5616250098813902, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.031173085893699937, 3);
  sqcRYGate(q, -2.2025263880480654, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5701881022774862, 3);
  sqcRYGate(q, 3.1406912956734425, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.6998173726695627, 5);
  sqcRYGate(q, 3.138945392562716, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.566788115436758, 5);
  sqcRYGate(q, -0.003050296200505281, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.201511987769055, 0);
  sqcRYGate(q, 1.5740453793584188, 1);
  sqcRYGate(q, -1.0403203923024265, 2);
  sqcRYGate(q, 3.1141562412592267, 3);
  sqcRYGate(q, 3.1013998805235055, 4);
  sqcRYGate(q, -0.4382167761993845, 5);
  sqcRYGate(q, -1.5674170095707378, 6);
  sqcRYGate(q, 1.5740566586251719, 7);

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
