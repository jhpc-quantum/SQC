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

  sqcRYGate(q, -0.9992249389133354, 0);
  sqcRZGate(q, 3.1239018896843196, 0);
  sqcRYGate(q, -3.094408115273203, 1);
  sqcRZGate(q, -2.483160517217092, 1);
  sqcRYGate(q, 0.005331936626697984, 2);
  sqcRZGate(q, 3.138529187848754, 2);
  sqcRYGate(q, 1.5708000988930069, 3);
  sqcRZGate(q, 0.298854148507961, 3);
  sqcRYGate(q, -1.5707982232113635, 4);
  sqcRZGate(q, 1.4288650675577657, 4);
  sqcRYGate(q, -3.141484775500783, 5);
  sqcRZGate(q, 3.0483570699684006, 5);
  sqcRYGate(q, 1.7096952259473852, 6);
  sqcRZGate(q, 2.3624073874013054, 6);
  sqcRYGate(q, -1.365653140654693, 7);
  sqcRZGate(q, -0.32808810078169875, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.966649885694066, 0);
  sqcRZGate(q, -2.6240217003237505, 0);
  sqcRYGate(q, 2.356835206634795, 1);
  sqcRZGate(q, 0.022113896334743366, 1);
  sqcRYGate(q, 1.570766635126148, 2);
  sqcRZGate(q, 0.758857287471493, 2);
  sqcRYGate(q, -1.9910851044501396, 3);
  sqcRZGate(q, 1.3673898097141928, 3);
  sqcRYGate(q, 0.9312619114621248, 4);
  sqcRZGate(q, 2.0783150089747657, 4);
  sqcRYGate(q, -1.5707899476309455, 5);
  sqcRZGate(q, 0.7904575711135585, 5);
  sqcRYGate(q, -2.0508187852419715, 6);
  sqcRZGate(q, -0.6740503332554013, 6);
  sqcRYGate(q, -2.6981389631640327, 7);
  sqcRZGate(q, 2.1320424471496855, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.089465942950769, 0);
  sqcRZGate(q, 1.8878428847941064, 0);
  sqcRYGate(q, 1.5708064207255499, 1);
  sqcRZGate(q, 0.29318037647343953, 1);
  sqcRYGate(q, 0.09745673603421512, 2);
  sqcRZGate(q, 3.078043062888471, 2);
  sqcRYGate(q, 3.1404194354392527, 3);
  sqcRZGate(q, -1.094574441922055, 3);
  sqcRYGate(q, -2.0046142063229, 4);
  sqcRZGate(q, -3.094870278425484, 4);
  sqcRYGate(q, -3.1410365816102077, 5);
  sqcRZGate(q, -1.08255569949515, 5);
  sqcRYGate(q, 1.5708472604494235, 6);
  sqcRZGate(q, 0.012210670708559836, 6);
  sqcRYGate(q, -1.6174078211045908, 7);
  sqcRZGate(q, -2.834162529329846, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5708135563843193, 0);
  sqcRZGate(q, -1.9961568695102292, 0);
  sqcRYGate(q, 0.560011968265008, 1);
  sqcRZGate(q, 1.6837335771462962, 1);
  sqcRYGate(q, -1.884768194261266, 2);
  sqcRZGate(q, 1.9908174095836921, 2);
  sqcRYGate(q, 3.1397408394399737, 3);
  sqcRZGate(q, 2.142844454014642, 3);
  sqcRYGate(q, 1.508264724512506, 4);
  sqcRZGate(q, -1.5869142074533995, 4);
  sqcRYGate(q, 0.044870081414229906, 5);
  sqcRZGate(q, 3.079950326056006, 5);
  sqcRYGate(q, -1.8311745791818055, 6);
  sqcRZGate(q, 2.976562593899991, 6);
  sqcRYGate(q, 1.570782615981825, 7);
  sqcRZGate(q, -0.19838101484210924, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4846331390535212, 0);
  sqcRZGate(q, -2.135362818712785, 0);
  sqcRYGate(q, -3.059218856372979, 1);
  sqcRZGate(q, 1.4147454883319464, 1);
  sqcRYGate(q, -1.0662281493792434, 2);
  sqcRZGate(q, 2.0012908106342637, 2);
  sqcRYGate(q, -1.1073074145342352, 3);
  sqcRZGate(q, 2.076487387004269, 3);
  sqcRYGate(q, -2.0081535275600917, 4);
  sqcRZGate(q, -2.2861985571654104, 4);
  sqcRYGate(q, -0.6055317293624844, 5);
  sqcRZGate(q, -3.096816335394083, 5);
  sqcRYGate(q, 1.6557279147721022, 6);
  sqcRZGate(q, -1.053930455877902, 6);
  sqcRYGate(q, -2.3443942594641447, 7);
  sqcRZGate(q, -1.5024216029298278, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.141538031630699, 0);
  sqcRZGate(q, -0.6237483973786453, 0);
  sqcRYGate(q, -0.053087734303041145, 1);
  sqcRZGate(q, 2.8829410402065223, 1);
  sqcRYGate(q, -0.022125174682591897, 2);
  sqcRZGate(q, -1.3915215985719431, 2);
  sqcRYGate(q, -3.0769597418460513, 3);
  sqcRZGate(q, 1.2088335180096905, 3);
  sqcRYGate(q, 0.006475654811067244, 4);
  sqcRZGate(q, 1.053649347036978, 4);
  sqcRYGate(q, 3.133535050259534, 5);
  sqcRZGate(q, -1.10672168900096, 5);
  sqcRYGate(q, 0.5139200171678482, 6);
  sqcRZGate(q, -3.1291073785075967, 6);
  sqcRYGate(q, 3.1412474231137897, 7);
  sqcRZGate(q, -1.2900983608789076, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.685360115002287, 0);
  sqcRZGate(q, -1.7764474660957088, 0);
  sqcRYGate(q, 0.8965728863302335, 1);
  sqcRZGate(q, 1.393927869686739, 1);
  sqcRYGate(q, 1.187119510468749, 2);
  sqcRZGate(q, -2.5542134496521016, 2);
  sqcRYGate(q, -2.376346833719897, 3);
  sqcRZGate(q, -2.3234797796987183, 3);
  sqcRYGate(q, 2.2356483867128243, 4);
  sqcRZGate(q, 2.6675510493033454, 4);
  sqcRYGate(q, -2.979816952149395, 5);
  sqcRZGate(q, 0.9228796488830265, 5);
  sqcRYGate(q, -1.0163818431291576, 6);
  sqcRZGate(q, -2.8860026736784268, 6);
  sqcRYGate(q, 0.38120456993566804, 7);
  sqcRZGate(q, 1.2504559723050903, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.0005722740989266839, 0);
  sqcRZGate(q, 0.16478341045233966, 0);
  sqcRYGate(q, 1.649993795411241, 1);
  sqcRZGate(q, -0.0006368369926930129, 1);
  sqcRYGate(q, 0.015792764097029472, 2);
  sqcRZGate(q, -0.006824148903117336, 2);
  sqcRYGate(q, -0.06265993446528376, 3);
  sqcRZGate(q, 0.14981187654294548, 3);
  sqcRYGate(q, 0.0032271359593840643, 4);
  sqcRZGate(q, 2.776056486171445, 4);
  sqcRYGate(q, 0.01446019009641941, 5);
  sqcRZGate(q, -2.744030476820582, 5);
  sqcRYGate(q, 0.44607294373130696, 6);
  sqcRZGate(q, 2.675050515159724, 6);
  sqcRYGate(q, -8.889554228560436e-05, 7);
  sqcRZGate(q, -3.1109049938170705, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5589468778570943, 0);
  sqcRZGate(q, 2.5722265624178817, 0);
  sqcRYGate(q, 1.4784284791791096, 1);
  sqcRZGate(q, -2.1323647493795894, 1);
  sqcRYGate(q, 0.013589541580668829, 2);
  sqcRZGate(q, -0.016149365077802978, 2);
  sqcRYGate(q, 3.0797517133612566, 3);
  sqcRZGate(q, 2.8903658877953142, 3);
  sqcRYGate(q, -1.6032881497986269, 4);
  sqcRZGate(q, -1.2657283046525925, 4);
  sqcRYGate(q, 0.21776520415468692, 5);
  sqcRZGate(q, -1.5268572384907781, 5);
  sqcRYGate(q, 2.639862931927429, 6);
  sqcRZGate(q, -1.0108156915182451, 6);
  sqcRYGate(q, 1.0486613158621707, 7);
  sqcRZGate(q, 0.9297711512175475, 7);

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
