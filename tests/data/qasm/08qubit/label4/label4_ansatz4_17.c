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

  sqcRYGate(q, 2.3458214267533912, 0);
  sqcRZGate(q, 0.7952727258410536, 0);
  sqcRYGate(q, 2.1205257097229433, 1);
  sqcRZGate(q, -1.342511993002038, 1);
  sqcRYGate(q, 2.267785049617477, 2);
  sqcRZGate(q, -1.8692071566339568, 2);
  sqcRYGate(q, -2.2512509102889187, 3);
  sqcRZGate(q, 1.3884237340518466, 3);
  sqcRYGate(q, 2.9431938387350467, 4);
  sqcRZGate(q, -1.9306924842775297, 4);
  sqcRYGate(q, 3.0773061565579636, 5);
  sqcRZGate(q, -2.303141687680305, 5);
  sqcRYGate(q, -1.6757054468390669, 6);
  sqcRZGate(q, 1.0780532586670235, 6);
  sqcRYGate(q, -0.35386960620835683, 7);
  sqcRZGate(q, -1.8144918281361335, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.214563648611595, 0);
  sqcRZGate(q, -2.0105039571421215, 0);
  sqcRYGate(q, 1.3370859065320886, 1);
  sqcRZGate(q, 1.9556453536942513, 1);
  sqcRYGate(q, 0.9277590163384914, 2);
  sqcRZGate(q, 2.9271539525067936, 2);
  sqcRYGate(q, -2.5364089498548763, 3);
  sqcRZGate(q, 1.4603572710788146, 3);
  sqcRYGate(q, 0.8638144611538052, 4);
  sqcRZGate(q, 0.5790167461239806, 4);
  sqcRYGate(q, -2.2146438139088787, 5);
  sqcRZGate(q, -0.6128075510373888, 5);
  sqcRYGate(q, -2.985804908756118, 6);
  sqcRZGate(q, 0.34264899231186785, 6);
  sqcRYGate(q, 0.9838611735346526, 7);
  sqcRZGate(q, 3.1339255804481834, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.779972329442293, 0);
  sqcRZGate(q, 1.1518614703295869, 0);
  sqcRYGate(q, 1.0293050409321571, 1);
  sqcRZGate(q, 1.5126569403563994, 1);
  sqcRYGate(q, -2.708188556645376, 2);
  sqcRZGate(q, 1.670570003244818, 2);
  sqcRYGate(q, -0.1815528265241868, 3);
  sqcRZGate(q, -1.351489067861136, 3);
  sqcRYGate(q, -2.88047599610584, 4);
  sqcRZGate(q, -1.1105168788338675, 4);
  sqcRYGate(q, -2.6583408696766626, 5);
  sqcRZGate(q, 0.012204339956568333, 5);
  sqcRYGate(q, -0.5756251484762107, 6);
  sqcRZGate(q, -2.5613680460127832, 6);
  sqcRYGate(q, 1.3562244369449248, 7);
  sqcRZGate(q, -0.03729494755820806, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.8747814595534154, 0);
  sqcRZGate(q, -3.0643466374928727, 0);
  sqcRYGate(q, -2.443529323104561, 1);
  sqcRZGate(q, -3.1036550916295793, 1);
  sqcRYGate(q, -2.054238025776635, 2);
  sqcRZGate(q, -1.4036336490265162, 2);
  sqcRYGate(q, -0.7439735912380177, 3);
  sqcRZGate(q, 2.2803194985886988, 3);
  sqcRYGate(q, 3.0863935290517253, 4);
  sqcRZGate(q, -0.15458208882397528, 4);
  sqcRYGate(q, -2.4062961745243987, 5);
  sqcRZGate(q, 1.7035212184239064, 5);
  sqcRYGate(q, 1.8420877586688496, 6);
  sqcRZGate(q, 3.058599527268319, 6);
  sqcRYGate(q, -1.9285434937444323, 7);
  sqcRZGate(q, 2.305347958595577, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.9363343806539555, 0);
  sqcRZGate(q, 0.6557745291631115, 0);
  sqcRYGate(q, -1.1277610551310793, 1);
  sqcRZGate(q, -1.6084461606230454, 1);
  sqcRYGate(q, 2.9362207645602725, 2);
  sqcRZGate(q, -1.9130719157718559, 2);
  sqcRYGate(q, -0.30676396012741397, 3);
  sqcRZGate(q, 2.023307046261595, 3);
  sqcRYGate(q, -2.0755269047768916, 4);
  sqcRZGate(q, 2.2532619554955957, 4);
  sqcRYGate(q, -1.335717233493842, 5);
  sqcRZGate(q, 1.070127813701308, 5);
  sqcRYGate(q, 1.498143882218824, 6);
  sqcRZGate(q, -2.159951909336365, 6);
  sqcRYGate(q, -1.6196645611682647, 7);
  sqcRZGate(q, -1.1817680986163834, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.1916273451950326, 0);
  sqcRZGate(q, 1.094761401131998, 0);
  sqcRYGate(q, -0.8304993047028394, 1);
  sqcRZGate(q, -2.468449543968148, 1);
  sqcRYGate(q, -1.9217678292943061, 2);
  sqcRZGate(q, -3.1041505107909497, 2);
  sqcRYGate(q, -3.0485585402210735, 3);
  sqcRZGate(q, -2.77164185095306, 3);
  sqcRYGate(q, 2.1873419833642105, 4);
  sqcRZGate(q, -0.4941578285744547, 4);
  sqcRYGate(q, 1.0852068310500043, 5);
  sqcRZGate(q, -2.3034171553055893, 5);
  sqcRYGate(q, -2.885150148748332, 6);
  sqcRZGate(q, 2.7970459136838772, 6);
  sqcRYGate(q, 2.7066158532317677, 7);
  sqcRZGate(q, -1.9211966885760239, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.0604433214857654, 0);
  sqcRZGate(q, 1.9722122263521489, 0);
  sqcRYGate(q, -2.023986608744038, 1);
  sqcRZGate(q, -1.3733500699052135, 1);
  sqcRYGate(q, 2.3089019559309727, 2);
  sqcRZGate(q, -2.3246154669120203, 2);
  sqcRYGate(q, 0.31591187931475656, 3);
  sqcRZGate(q, -0.4225420662634285, 3);
  sqcRYGate(q, 0.6664055915551098, 4);
  sqcRZGate(q, 2.8559037673352297, 4);
  sqcRYGate(q, 2.542158065995202, 5);
  sqcRZGate(q, 0.5953265441408631, 5);
  sqcRYGate(q, 0.3022084847629743, 6);
  sqcRZGate(q, -1.8811920315007447, 6);
  sqcRYGate(q, -2.9722084948812175, 7);
  sqcRZGate(q, -2.631880546437351, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.831708339529001, 0);
  sqcRZGate(q, -1.1001238653488965, 0);
  sqcRYGate(q, 2.745632619387687, 1);
  sqcRZGate(q, -1.440773512321205, 1);
  sqcRYGate(q, -2.4453636503316223, 2);
  sqcRZGate(q, -1.5906778621070163, 2);
  sqcRYGate(q, 2.814319255113545, 3);
  sqcRZGate(q, -1.3293614773385913, 3);
  sqcRYGate(q, 1.9345434708029063, 4);
  sqcRZGate(q, -0.45836367368214775, 4);
  sqcRYGate(q, 1.4047555483690362, 5);
  sqcRZGate(q, 1.1582673474069116, 5);
  sqcRYGate(q, -0.874972350388547, 6);
  sqcRZGate(q, 0.5588818024871809, 6);
  sqcRYGate(q, 0.8093823004321903, 7);
  sqcRZGate(q, 1.9163915245412826, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.1864465793072214, 0);
  sqcRZGate(q, -1.7309740542622327, 0);
  sqcRYGate(q, -1.1392804868347763, 1);
  sqcRZGate(q, 1.4633786088106089, 1);
  sqcRYGate(q, -1.6494531129587031, 2);
  sqcRZGate(q, -1.4641142357694, 2);
  sqcRYGate(q, -0.27001038729741256, 3);
  sqcRZGate(q, 2.721963067893277, 3);
  sqcRYGate(q, -0.07530086508546674, 4);
  sqcRZGate(q, 1.211136088149508, 4);
  sqcRYGate(q, 2.9286631188969108, 5);
  sqcRZGate(q, -0.575693421441791, 5);
  sqcRYGate(q, -1.6667051737967777, 6);
  sqcRZGate(q, 0.14333911502022456, 6);
  sqcRYGate(q, 0.8612408594724416, 7);
  sqcRZGate(q, -0.27110385562339717, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.494526081959461, 0);
  sqcRZGate(q, 1.3188114487301066, 0);
  sqcRYGate(q, 1.0183555937008462, 1);
  sqcRZGate(q, -0.7180869143492199, 1);
  sqcRYGate(q, -1.6971063306890604, 2);
  sqcRZGate(q, -1.3030706417499152, 2);
  sqcRYGate(q, -0.480731656421291, 3);
  sqcRZGate(q, 0.772246710154625, 3);
  sqcRYGate(q, -1.872130254225609, 4);
  sqcRZGate(q, 0.6383695901452073, 4);
  sqcRYGate(q, -2.1180106780111556, 5);
  sqcRZGate(q, -2.8275246261400535, 5);
  sqcRYGate(q, 2.2244952560664184, 6);
  sqcRZGate(q, -1.7744368909563644, 6);
  sqcRYGate(q, -1.5407857610218665, 7);
  sqcRZGate(q, -0.31257753106957953, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6774243514930101, 0);
  sqcRZGate(q, -1.3389478441784308, 0);
  sqcRYGate(q, -0.10277106544277763, 1);
  sqcRZGate(q, -2.344500092700734, 1);
  sqcRYGate(q, 1.1808213136562156, 2);
  sqcRZGate(q, 2.1151973001664395, 2);
  sqcRYGate(q, -1.2337932074274214, 3);
  sqcRZGate(q, 2.2234926311162555, 3);
  sqcRYGate(q, 0.8623699881145362, 4);
  sqcRZGate(q, 2.7509152356119264, 4);
  sqcRYGate(q, -1.1405870969254974, 5);
  sqcRZGate(q, -0.6695076598457713, 5);
  sqcRYGate(q, 1.3900818543014557, 6);
  sqcRZGate(q, 1.7407934540154468, 6);
  sqcRYGate(q, -0.6949635601566939, 7);
  sqcRZGate(q, 2.822301630455533, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.44199441926468, 0);
  sqcRZGate(q, -1.3909973978936607, 0);
  sqcRYGate(q, 2.799960138104974, 1);
  sqcRZGate(q, 1.3802770199901042, 1);
  sqcRYGate(q, -1.7691290115279514, 2);
  sqcRZGate(q, 2.734635871605326, 2);
  sqcRYGate(q, 0.46834244365308475, 3);
  sqcRZGate(q, -1.7751539632033548, 3);
  sqcRYGate(q, 2.5350227697827337, 4);
  sqcRZGate(q, -3.018704181083704, 4);
  sqcRYGate(q, -2.0857375656693597, 5);
  sqcRZGate(q, 2.905849885216934, 5);
  sqcRYGate(q, 2.424827578341095, 6);
  sqcRZGate(q, -1.6157089828246791, 6);
  sqcRYGate(q, 0.10910274621145977, 7);
  sqcRZGate(q, -2.604710967727235, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.5647732378501327, 0);
  sqcRZGate(q, -0.4343945721670875, 0);
  sqcRYGate(q, 0.6859083082876213, 1);
  sqcRZGate(q, 1.9052780971480465, 1);
  sqcRYGate(q, 1.4130698189608923, 2);
  sqcRZGate(q, -0.4288253446633326, 2);
  sqcRYGate(q, -2.0483114815227075, 3);
  sqcRZGate(q, 0.12101284636606646, 3);
  sqcRYGate(q, -1.443494155197035, 4);
  sqcRZGate(q, -1.5363849503632823, 4);
  sqcRYGate(q, -1.3383903584556638, 5);
  sqcRZGate(q, -2.7743261063092706, 5);
  sqcRYGate(q, -2.543848442241797, 6);
  sqcRZGate(q, -1.782301207794797, 6);
  sqcRYGate(q, -2.7974897109815147, 7);
  sqcRZGate(q, -1.3859130025439264, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.110274698153268, 0);
  sqcRZGate(q, 2.2450401420799153, 0);
  sqcRYGate(q, 2.270341372568237, 1);
  sqcRZGate(q, 1.504497552901759, 1);
  sqcRYGate(q, 1.8450886845398804, 2);
  sqcRZGate(q, -2.9314887061229067, 2);
  sqcRYGate(q, -1.363144388368178, 3);
  sqcRZGate(q, -2.007957380319284, 3);
  sqcRYGate(q, -2.1977595482432104, 4);
  sqcRZGate(q, 1.2327044121812059, 4);
  sqcRYGate(q, -1.9130891924067104, 5);
  sqcRZGate(q, -2.423929734923034, 5);
  sqcRYGate(q, 1.9589434472643734, 6);
  sqcRZGate(q, -2.7658059431933326, 6);
  sqcRYGate(q, 2.4664682449612454, 7);
  sqcRZGate(q, 2.8125694053655086, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.21486718949902528, 0);
  sqcRZGate(q, 2.3537972068670507, 0);
  sqcRYGate(q, 2.115113187943118, 1);
  sqcRZGate(q, 0.2659617232968916, 1);
  sqcRYGate(q, 1.4837850935335521, 2);
  sqcRZGate(q, -0.2953240978803748, 2);
  sqcRYGate(q, -0.7859643643661969, 3);
  sqcRZGate(q, 1.031393465803982, 3);
  sqcRYGate(q, 1.4699199852566947, 4);
  sqcRZGate(q, 0.6885341845237515, 4);
  sqcRYGate(q, 2.691106489395262, 5);
  sqcRZGate(q, 0.6870215914331212, 5);
  sqcRYGate(q, 3.1353130946086196, 6);
  sqcRZGate(q, -2.7903624965309057, 6);
  sqcRYGate(q, 3.093657029699733, 7);
  sqcRZGate(q, -0.30705471486365804, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.869152477444155, 0);
  sqcRZGate(q, -1.0134620060547286, 0);
  sqcRYGate(q, 3.076839433158467, 1);
  sqcRZGate(q, -2.464920074733294, 1);
  sqcRYGate(q, 1.7847220457511022, 2);
  sqcRZGate(q, -2.567887280813613, 2);
  sqcRYGate(q, 2.1479988403002697, 3);
  sqcRZGate(q, -1.8374892403830145, 3);
  sqcRYGate(q, -3.0477237084496047, 4);
  sqcRZGate(q, -2.9139832517675104, 4);
  sqcRYGate(q, 0.41736695472444146, 5);
  sqcRZGate(q, 0.8143878012948189, 5);
  sqcRYGate(q, 1.05129988284675, 6);
  sqcRZGate(q, 1.813620535549749, 6);
  sqcRYGate(q, -1.7190395615175138, 7);
  sqcRZGate(q, -1.3300853294918087, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1357145577953494, 0);
  sqcRZGate(q, 1.3909807601394943, 0);
  sqcRYGate(q, -0.6463195917226459, 1);
  sqcRZGate(q, 1.3582792876990633, 1);
  sqcRYGate(q, 2.689773141039057, 2);
  sqcRZGate(q, 1.9791243423992402, 2);
  sqcRYGate(q, -2.019316504591756, 3);
  sqcRZGate(q, -1.343531284452065, 3);
  sqcRYGate(q, -1.274515728412669, 4);
  sqcRZGate(q, 0.8305468906179118, 4);
  sqcRYGate(q, -0.4538147106790238, 5);
  sqcRZGate(q, 1.9688629769634178, 5);
  sqcRYGate(q, -2.974977746055005, 6);
  sqcRZGate(q, 1.7975211690580846, 6);
  sqcRYGate(q, -0.6961956399031627, 7);
  sqcRZGate(q, -1.879664980845683, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.7271876088805422, 0);
  sqcRZGate(q, 1.5932206218270402, 0);
  sqcRYGate(q, 1.9369349590401619, 1);
  sqcRZGate(q, -1.664428899827442, 1);
  sqcRYGate(q, 1.0897401073498134, 2);
  sqcRZGate(q, 1.0932296836435027, 2);
  sqcRYGate(q, 1.4881522810501844, 3);
  sqcRZGate(q, -1.5263479159808169, 3);
  sqcRYGate(q, 0.6669345210220641, 4);
  sqcRZGate(q, -0.9717524835855401, 4);
  sqcRYGate(q, 0.48084163091771615, 5);
  sqcRZGate(q, 0.8787456536107143, 5);
  sqcRYGate(q, 1.9939320320269127, 6);
  sqcRZGate(q, -1.506824735359443, 6);
  sqcRYGate(q, -2.6724762220975555, 7);
  sqcRZGate(q, 1.3419706444797959, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.7929307700451576, 0);
  sqcRZGate(q, -2.9986953696946466, 0);
  sqcRYGate(q, -2.2645628492515364, 1);
  sqcRZGate(q, -1.927941916337523, 1);
  sqcRYGate(q, 2.6116364738237476, 2);
  sqcRZGate(q, -2.0366239469446388, 2);
  sqcRYGate(q, -0.7504755296442123, 3);
  sqcRZGate(q, 1.9428145253827065, 3);
  sqcRYGate(q, -0.17646691884587185, 4);
  sqcRZGate(q, -1.6840874303005435, 4);
  sqcRYGate(q, 1.9685731861469495, 5);
  sqcRZGate(q, 0.9621896319487531, 5);
  sqcRYGate(q, 2.8555713482995597, 6);
  sqcRZGate(q, -1.5380101941992557, 6);
  sqcRYGate(q, -1.7108068752547245, 7);
  sqcRZGate(q, -0.1478505855291319, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6857505723780335, 0);
  sqcRZGate(q, 1.469035434714522, 0);
  sqcRYGate(q, -0.4571462687047516, 1);
  sqcRZGate(q, -0.6602321750680984, 1);
  sqcRYGate(q, -1.174717126743091, 2);
  sqcRZGate(q, 1.7525209314834789, 2);
  sqcRYGate(q, 3.0377418534960756, 3);
  sqcRZGate(q, 2.8055381334317775, 3);
  sqcRYGate(q, -1.9159097856754164, 4);
  sqcRZGate(q, 0.3451025136493804, 4);
  sqcRYGate(q, 1.1856729277642657, 5);
  sqcRZGate(q, -0.20693551938098412, 5);
  sqcRYGate(q, -0.4453162638856485, 6);
  sqcRZGate(q, -3.1090325831319587, 6);
  sqcRYGate(q, 1.7719049440937207, 7);
  sqcRZGate(q, 1.2593517616701833, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.3675211863858592, 0);
  sqcRZGate(q, -0.9029419597718354, 0);
  sqcRYGate(q, 3.0863095969099863, 1);
  sqcRZGate(q, 1.4485837517763318, 1);
  sqcRYGate(q, 0.12713557925989052, 2);
  sqcRZGate(q, -1.5536113153661062, 2);
  sqcRYGate(q, -1.633165180158144, 3);
  sqcRZGate(q, 0.7596359788136686, 3);
  sqcRYGate(q, 1.529928861527714, 4);
  sqcRZGate(q, -1.7920499518397905, 4);
  sqcRYGate(q, 0.09147191719520986, 5);
  sqcRZGate(q, 0.2809610801104174, 5);
  sqcRYGate(q, -1.0441069609148534, 6);
  sqcRZGate(q, 3.063361932660979, 6);
  sqcRYGate(q, 0.8613368201196759, 7);
  sqcRZGate(q, 1.8871923219991178, 7);

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
