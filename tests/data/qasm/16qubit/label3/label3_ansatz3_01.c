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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -1.5707595290709429, 0);
  sqcRZGate(q, -1.5709099257590653, 0);
  sqcRYGate(q, -1.1366069415296023, 1);
  sqcRZGate(q, -2.661126526407523, 1);
  sqcRYGate(q, 0.16516203598194412, 2);
  sqcRZGate(q, -2.33109028506159, 2);
  sqcRYGate(q, 0.004428122669293266, 3);
  sqcRZGate(q, 3.022427318745695, 3);
  sqcRYGate(q, -1.57082536710362, 4);
  sqcRZGate(q, -1.5598973737999433, 4);
  sqcRYGate(q, 1.589094766885557, 5);
  sqcRZGate(q, -1.4013329452408578, 5);
  sqcRYGate(q, -0.3485051583084764, 6);
  sqcRZGate(q, 3.134002368019034, 6);
  sqcRYGate(q, 0.01034089288542095, 7);
  sqcRZGate(q, 2.3481319282887108, 7);
  sqcRYGate(q, 1.57077826046767, 8);
  sqcRZGate(q, -1.570672384399213, 8);
  sqcRYGate(q, 0.053956389428943284, 9);
  sqcRZGate(q, -3.138674934133194, 9);
  sqcRYGate(q, 0.23192962211659207, 10);
  sqcRZGate(q, -0.47834436902586897, 10);
  sqcRYGate(q, 2.380198257603397, 11);
  sqcRZGate(q, -0.6385512992015219, 11);
  sqcRYGate(q, 1.5708547265638018, 12);
  sqcRZGate(q, 0.0004114890036867958, 12);
  sqcRYGate(q, -0.029888042821065497, 13);
  sqcRZGate(q, 2.4377690195886923, 13);
  sqcRYGate(q, 1.5707407834399607, 14);
  sqcRZGate(q, -3.1415222436242325, 14);
  sqcRYGate(q, 2.173809787372007, 15);
  sqcRZGate(q, 0.07630911067443868, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.4987081746126574, 0);
  sqcRZGate(q, -1.5708847107834003, 0);
  sqcRYGate(q, 1.570751970700275, 1);
  sqcRZGate(q, -0.0001940984713362744, 1);
  sqcRYGate(q, 2.5403084438875947, 2);
  sqcRZGate(q, 2.638473913968736, 2);
  sqcRYGate(q, -2.7396711253509967, 3);
  sqcRZGate(q, 0.8899613342995423, 3);
  sqcRYGate(q, -0.03058544093442972, 4);
  sqcRZGate(q, -1.5751595829678857, 4);
  sqcRYGate(q, -1.5645407511536655, 5);
  sqcRZGate(q, -0.001312274666096987, 5);
  sqcRYGate(q, 0.2229016810027957, 6);
  sqcRZGate(q, -0.22812389075225425, 6);
  sqcRYGate(q, 0.5419376959350117, 7);
  sqcRZGate(q, 0.02744713968205188, 7);
  sqcRYGate(q, -2.3323128961178985, 8);
  sqcRZGate(q, -1.5694102142248365, 8);
  sqcRYGate(q, 1.5704064040659889, 9);
  sqcRZGate(q, 3.1412257903139613, 9);
  sqcRYGate(q, 0.24511463465569777, 10);
  sqcRZGate(q, 1.249002038672102, 10);
  sqcRYGate(q, 0.5594440541886119, 11);
  sqcRZGate(q, -1.113566586582422, 11);
  sqcRYGate(q, 2.9131326023587776, 12);
  sqcRZGate(q, -8.530261006622908e-05, 12);
  sqcRYGate(q, 1.570878495193499, 13);
  sqcRZGate(q, 1.0846401863903417, 13);
  sqcRYGate(q, 1.6807320874226361, 14);
  sqcRZGate(q, -3.791993797985783e-05, 14);
  sqcRYGate(q, -1.5708080367455803, 15);
  sqcRZGate(q, -1.5707650415218772, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.5212913685178736, 0);
  sqcRZGate(q, -3.141577292552676, 0);
  sqcRYGate(q, 0.8880134606757045, 1);
  sqcRZGate(q, 6.024403888358303e-05, 1);
  sqcRYGate(q, -2.7194260123131784, 2);
  sqcRZGate(q, -0.9745107787801173, 2);
  sqcRYGate(q, 2.4072354135952074, 3);
  sqcRZGate(q, -1.7307333432101002, 3);
  sqcRYGate(q, -1.2625362099835202, 4);
  sqcRZGate(q, -1.5954123879922923, 4);
  sqcRYGate(q, 2.506240450584263, 5);
  sqcRZGate(q, -1.5710544836987002, 5);
  sqcRYGate(q, -2.6958476675640015, 6);
  sqcRZGate(q, 1.7527914607831048, 6);
  sqcRYGate(q, 0.2856809014923171, 7);
  sqcRZGate(q, 2.528193409542062, 7);
  sqcRYGate(q, 0.021167525938194487, 8);
  sqcRZGate(q, 3.1403268326814713, 8);
  sqcRYGate(q, 0.04738448340136954, 9);
  sqcRZGate(q, -3.1411933910739624, 9);
  sqcRYGate(q, -2.8993730146318955, 10);
  sqcRZGate(q, -0.7626775604090168, 10);
  sqcRYGate(q, 2.8695755660952287, 11);
  sqcRZGate(q, 2.3105108753247783, 11);
  sqcRYGate(q, -0.6371081841383601, 12);
  sqcRZGate(q, 7.614222460446719e-05, 12);
  sqcRYGate(q, 3.1401330926917583, 13);
  sqcRZGate(q, 2.648401894042284, 13);
  sqcRYGate(q, 2.5851505575523688, 14);
  sqcRZGate(q, -8.352387713833902e-05, 14);
  sqcRYGate(q, 1.5859782065667434, 15);
  sqcRZGate(q, -1.570271246075553, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.570865793894454, 0);
  sqcRZGate(q, -0.37695591140028256, 0);
  sqcRYGate(q, -1.5708455334773084, 1);
  sqcRZGate(q, -2.6759178362931753, 1);
  sqcRYGate(q, -0.021624049093059483, 2);
  sqcRZGate(q, -2.2108795744860092, 2);
  sqcRYGate(q, 2.9982608539463036, 3);
  sqcRZGate(q, 0.9464113455504989, 3);
  sqcRYGate(q, -0.009363243321374342, 4);
  sqcRZGate(q, 1.60489094684044, 4);
  sqcRYGate(q, -0.022774291186486335, 5);
  sqcRZGate(q, -1.559296909103967, 5);
  sqcRYGate(q, -3.0049734583913064, 6);
  sqcRZGate(q, 2.1489708904646956, 6);
  sqcRYGate(q, -2.6549369635975872, 7);
  sqcRZGate(q, -1.0558416327130322, 7);
  sqcRYGate(q, 1.57085274976209, 8);
  sqcRZGate(q, -1.763393791122677, 8);
  sqcRYGate(q, 1.5704258495187178, 9);
  sqcRZGate(q, 2.656729249415522, 9);
  sqcRYGate(q, 0.1576531032537387, 10);
  sqcRZGate(q, -0.6128595090013232, 10);
  sqcRYGate(q, -2.881194676656784, 11);
  sqcRZGate(q, 1.8264995720339225, 11);
  sqcRYGate(q, 3.0571298104128735, 12);
  sqcRZGate(q, -2.0345108316551737, 12);
  sqcRYGate(q, -3.1224381011361775, 13);
  sqcRZGate(q, -1.5625336425025065, 13);
  sqcRYGate(q, 1.1219867759711022, 14);
  sqcRZGate(q, 1.5596780815254767, 14);
  sqcRYGate(q, 1.570625943093808, 15);
  sqcRZGate(q, 2.6232192113298183, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.5612222278579102, 0);
  sqcRZGate(q, 2.7069568456485027, 0);
  sqcRYGate(q, -1.5804153966595762, 1);
  sqcRZGate(q, 2.7069431249504845, 1);
  sqcRYGate(q, 1.5612973138609663, 2);
  sqcRZGate(q, 2.7069368257057667, 2);
  sqcRYGate(q, -1.5611613748800899, 3);
  sqcRZGate(q, -0.4345902137837232, 3);
  sqcRYGate(q, -1.694805278227088, 4);
  sqcRZGate(q, -2.0044422299580162, 4);
  sqcRYGate(q, -0.980410723086993, 5);
  sqcRZGate(q, -2.011823583601635, 5);
  sqcRYGate(q, 1.5612818722257351, 6);
  sqcRZGate(q, 2.706898325879956, 6);
  sqcRYGate(q, 1.5611535434284178, 7);
  sqcRZGate(q, 2.707011860363113, 7);
  sqcRYGate(q, 1.5613141395844758, 8);
  sqcRZGate(q, 2.706943330352345, 8);
  sqcRYGate(q, -1.5611591676477046, 9);
  sqcRZGate(q, -0.4346464131302249, 9);
  sqcRYGate(q, 1.5802695625193215, 10);
  sqcRZGate(q, -0.43467135677645036, 10);
  sqcRYGate(q, 1.5610408276776466, 11);
  sqcRZGate(q, 2.7070006150249375, 11);
  sqcRYGate(q, 3.130997127474192, 12);
  sqcRZGate(q, 2.2435213415720234, 12);
  sqcRYGate(q, -0.6795880608391487, 13);
  sqcRZGate(q, -2.0172907509321734, 13);
  sqcRYGate(q, -1.0364812094224063, 14);
  sqcRZGate(q, 1.1420467995051755, 14);
  sqcRYGate(q, -1.5803369796656197, 15);
  sqcRZGate(q, 2.7069986740867638, 15);

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
