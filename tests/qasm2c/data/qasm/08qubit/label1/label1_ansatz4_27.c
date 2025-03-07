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

  sqcRYGate(q, 1.144860167316775, 0);
  sqcRZGate(q, 1.4474376921670933, 0);
  sqcRYGate(q, -1.5711820093433655, 1);
  sqcRZGate(q, -0.43255928361478985, 1);
  sqcRYGate(q, 1.5771252938320686, 2);
  sqcRZGate(q, 1.5242282479831168, 2);
  sqcRYGate(q, 0.1110321789178883, 3);
  sqcRZGate(q, 1.7587967483013507, 3);
  sqcRYGate(q, -0.3896368371282234, 4);
  sqcRZGate(q, 0.09105703944557526, 4);
  sqcRYGate(q, 1.6595689814087118, 5);
  sqcRZGate(q, 1.1467765762834663, 5);
  sqcRYGate(q, -2.147713429995517, 6);
  sqcRZGate(q, 2.0789320302138576, 6);
  sqcRYGate(q, 2.633201978622482, 7);
  sqcRZGate(q, -2.62100502850546, 7);
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
  sqcRYGate(q, 1.4652655171880327, 0);
  sqcRZGate(q, -0.9016221003637127, 0);
  sqcRYGate(q, 2.0412848330122126, 1);
  sqcRZGate(q, -0.12154104508673531, 1);
  sqcRYGate(q, 2.1492649497455814, 2);
  sqcRZGate(q, 0.22618487405494037, 2);
  sqcRYGate(q, -2.1046035747606, 3);
  sqcRZGate(q, 1.137978586084373, 3);
  sqcRYGate(q, -1.6922422165674116, 4);
  sqcRZGate(q, -1.3282095973020223, 4);
  sqcRYGate(q, -1.8420248188251118, 5);
  sqcRZGate(q, -0.37625807032952, 5);
  sqcRYGate(q, -2.2932254694090717, 6);
  sqcRZGate(q, -1.8307481227055113, 6);
  sqcRYGate(q, 2.252311085710877, 7);
  sqcRZGate(q, 1.0892586368786614, 7);
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
  sqcRYGate(q, 0.8038471693479385, 0);
  sqcRZGate(q, 1.3246598834328935, 0);
  sqcRYGate(q, -1.9212606286282405, 1);
  sqcRZGate(q, -1.1537363216654972, 1);
  sqcRYGate(q, 2.835658886510874, 2);
  sqcRZGate(q, 0.5737448096397513, 2);
  sqcRYGate(q, -1.1127558657818375, 3);
  sqcRZGate(q, 1.3328582481010183, 3);
  sqcRYGate(q, 1.1676967299201562, 4);
  sqcRZGate(q, -1.2683472674130227, 4);
  sqcRYGate(q, -1.8536176465781797, 5);
  sqcRZGate(q, -0.2772188701902998, 5);
  sqcRYGate(q, -0.137247070517994, 6);
  sqcRZGate(q, 2.4426793258432267, 6);
  sqcRYGate(q, -0.3657137823449364, 7);
  sqcRZGate(q, 1.900376581674789, 7);
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
  sqcRYGate(q, -2.966348045816475, 0);
  sqcRZGate(q, -2.9667695497115214, 0);
  sqcRYGate(q, -1.0028102778657253, 1);
  sqcRZGate(q, 0.5696415185210784, 1);
  sqcRYGate(q, 1.7436483658729087, 2);
  sqcRZGate(q, -0.3246678896494907, 2);
  sqcRYGate(q, 0.6201117444504336, 3);
  sqcRZGate(q, -2.96397692523341, 3);
  sqcRYGate(q, 3.032881998292716, 4);
  sqcRZGate(q, 1.5829481221828363, 4);
  sqcRYGate(q, -1.224391343261714, 5);
  sqcRZGate(q, 1.2096671056263117, 5);
  sqcRYGate(q, -1.4743015058086621, 6);
  sqcRZGate(q, 2.9418513282790535, 6);
  sqcRYGate(q, 1.4325790904960423, 7);
  sqcRZGate(q, -0.7175805639576174, 7);
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
  sqcRYGate(q, -1.9639747149294884, 0);
  sqcRZGate(q, 0.7055060119961104, 0);
  sqcRYGate(q, 0.4868885544328938, 1);
  sqcRZGate(q, 0.2760106881902544, 1);
  sqcRYGate(q, 2.7065899211604916, 2);
  sqcRZGate(q, -3.0989694520818016, 2);
  sqcRYGate(q, -2.8039450213250072, 3);
  sqcRZGate(q, 0.32917813219785386, 3);
  sqcRYGate(q, 1.9231462169262916, 4);
  sqcRZGate(q, 1.0421027216162837, 4);
  sqcRYGate(q, -2.7386712826841517, 5);
  sqcRZGate(q, 2.4092262864149214, 5);
  sqcRYGate(q, -0.20246387421343215, 6);
  sqcRZGate(q, 2.0866170444505197, 6);
  sqcRYGate(q, -0.8994167595115732, 7);
  sqcRZGate(q, 2.385611887221302, 7);
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
  sqcRYGate(q, -1.7197321574337519, 0);
  sqcRZGate(q, 2.1125468319677054, 0);
  sqcRYGate(q, -1.255029344830768, 1);
  sqcRZGate(q, 2.933642458663136, 1);
  sqcRYGate(q, 2.5732258415492746, 2);
  sqcRZGate(q, 1.9313192102757313, 2);
  sqcRYGate(q, 2.9330738640139784, 3);
  sqcRZGate(q, -1.1663813428238188, 3);
  sqcRYGate(q, -1.0989018761473446, 4);
  sqcRZGate(q, -2.3934013132173426, 4);
  sqcRYGate(q, 0.2469782873068173, 5);
  sqcRZGate(q, 1.4733142649931519, 5);
  sqcRYGate(q, -1.8967681622483115, 6);
  sqcRZGate(q, 1.7991738811478142, 6);
  sqcRYGate(q, 2.3755911407652937, 7);
  sqcRZGate(q, 0.46728982435648875, 7);
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
  sqcRYGate(q, 1.5176529627789466, 0);
  sqcRZGate(q, 1.936629768153965, 0);
  sqcRYGate(q, 1.7077702916872506, 1);
  sqcRZGate(q, -2.679336837622982, 1);
  sqcRYGate(q, -1.6186677897316284, 2);
  sqcRZGate(q, 3.00082696642798, 2);
  sqcRYGate(q, -1.2041479907022712, 3);
  sqcRZGate(q, -0.7076789234080101, 3);
  sqcRYGate(q, 2.083591075597943, 4);
  sqcRZGate(q, 2.077611873402942, 4);
  sqcRYGate(q, -2.0873508820514406, 5);
  sqcRZGate(q, 1.699701929122826, 5);
  sqcRYGate(q, -2.972398277196262, 6);
  sqcRZGate(q, 2.9812011655118433, 6);
  sqcRYGate(q, 2.2370139350223663, 7);
  sqcRZGate(q, 1.4322123293020377, 7);
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
  sqcRYGate(q, 0.23434902056406504, 0);
  sqcRZGate(q, 2.335847294281215, 0);
  sqcRYGate(q, 0.15247906923057922, 1);
  sqcRZGate(q, 2.8145992956303245, 1);
  sqcRYGate(q, -2.1239602305603116, 2);
  sqcRZGate(q, -2.799717659276551, 2);
  sqcRYGate(q, -2.9606539359856225, 3);
  sqcRZGate(q, 1.6665661038537447, 3);
  sqcRYGate(q, -2.9382321297328704, 4);
  sqcRZGate(q, 0.6767787819040753, 4);
  sqcRYGate(q, -1.1039098440959567, 5);
  sqcRZGate(q, -2.855488565481795, 5);
  sqcRYGate(q, 2.8157793606318844, 6);
  sqcRZGate(q, -2.4576620901202646, 6);
  sqcRYGate(q, 2.1440213320251464, 7);
  sqcRZGate(q, -2.081312613766956, 7);
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
  sqcRYGate(q, -0.2767275656652279, 0);
  sqcRZGate(q, -2.409640527339175, 0);
  sqcRYGate(q, 1.437007261440482, 1);
  sqcRZGate(q, 2.345949844220276, 1);
  sqcRYGate(q, -2.2954703929982467, 2);
  sqcRZGate(q, 3.0029317598249174, 2);
  sqcRYGate(q, 0.006715690415767028, 3);
  sqcRZGate(q, -2.3081869344603474, 3);
  sqcRYGate(q, -2.7263678966836067, 4);
  sqcRZGate(q, 2.809135084822181, 4);
  sqcRYGate(q, -3.0725272967388784, 5);
  sqcRZGate(q, -1.8119935748660398, 5);
  sqcRYGate(q, -2.0844480234018543, 6);
  sqcRZGate(q, 1.3879561563901182, 6);
  sqcRYGate(q, 2.2642990963053737, 7);
  sqcRZGate(q, 0.8273432693859579, 7);
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
  sqcRYGate(q, -0.43419428526115583, 0);
  sqcRZGate(q, 2.9588263635699428, 0);
  sqcRYGate(q, -2.681085242192135, 1);
  sqcRZGate(q, 1.6106587794359546, 1);
  sqcRYGate(q, -1.6778135868350725, 2);
  sqcRZGate(q, -0.7932375365065383, 2);
  sqcRYGate(q, -0.9775010784587558, 3);
  sqcRZGate(q, 2.482910079370446, 3);
  sqcRYGate(q, -0.194253699187982, 4);
  sqcRZGate(q, 1.7993021115970707, 4);
  sqcRYGate(q, 2.8702547199569612, 5);
  sqcRZGate(q, -2.1499702295662337, 5);
  sqcRYGate(q, -2.821828670266113, 6);
  sqcRZGate(q, 2.8610527554770178, 6);
  sqcRYGate(q, 0.9765584251886441, 7);
  sqcRZGate(q, 2.8399815130971975, 7);
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
  sqcRYGate(q, -0.1115601952973158, 0);
  sqcRZGate(q, 1.9002609755677549, 0);
  sqcRYGate(q, 1.6613019371603093, 1);
  sqcRZGate(q, 1.7329993750205857, 1);
  sqcRYGate(q, -0.17730267474112585, 2);
  sqcRZGate(q, -1.8601786053362606, 2);
  sqcRYGate(q, -0.5407885767410701, 3);
  sqcRZGate(q, -2.8446073587821443, 3);
  sqcRYGate(q, 1.9195932747069127, 4);
  sqcRZGate(q, -2.8227403291470123, 4);
  sqcRYGate(q, 0.6979328235055249, 5);
  sqcRZGate(q, 1.577893381494083, 5);
  sqcRYGate(q, 2.4489905593774086, 6);
  sqcRZGate(q, -2.540062152401581, 6);
  sqcRYGate(q, 1.541066999604024, 7);
  sqcRZGate(q, -2.6085588799069384, 7);
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
  sqcRYGate(q, -2.9904304002126074, 0);
  sqcRZGate(q, 2.632133473874834, 0);
  sqcRYGate(q, 1.1573595046224767, 1);
  sqcRZGate(q, 1.8562860441192381, 1);
  sqcRYGate(q, 2.4013619086480738, 2);
  sqcRZGate(q, -0.9566659692571368, 2);
  sqcRYGate(q, -0.8812419790946375, 3);
  sqcRZGate(q, -0.8822794139746212, 3);
  sqcRYGate(q, -0.2849031160105395, 4);
  sqcRZGate(q, 0.13723351292067057, 4);
  sqcRYGate(q, -0.37352020635665095, 5);
  sqcRZGate(q, 2.5756655086599762, 5);
  sqcRYGate(q, -0.5245725022763744, 6);
  sqcRZGate(q, -0.2233267875720708, 6);
  sqcRYGate(q, 2.418372883803793, 7);
  sqcRZGate(q, 1.7023038097074787, 7);
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
  sqcRYGate(q, -1.7349542735024714, 0);
  sqcRZGate(q, 1.7748060355204065, 0);
  sqcRYGate(q, -1.6318554145555593, 1);
  sqcRZGate(q, 2.9841770184574323, 1);
  sqcRYGate(q, 0.2702240385683081, 2);
  sqcRZGate(q, -0.9464010584305891, 2);
  sqcRYGate(q, -2.9515914222196216, 3);
  sqcRZGate(q, -2.3497486842100583, 3);
  sqcRYGate(q, -0.46610804746531187, 4);
  sqcRZGate(q, -2.4709738418183833, 4);
  sqcRYGate(q, 0.4664918345613064, 5);
  sqcRZGate(q, 2.795580916157274, 5);
  sqcRYGate(q, -0.45236788180357923, 6);
  sqcRZGate(q, -0.2993996427479566, 6);
  sqcRYGate(q, -2.9522640032956993, 7);
  sqcRZGate(q, -2.2022754026864595, 7);
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
  sqcRYGate(q, 1.0179089572939013, 0);
  sqcRZGate(q, -2.1430974757733114, 0);
  sqcRYGate(q, 2.4952171072319085, 1);
  sqcRZGate(q, 3.1109289680803967, 1);
  sqcRYGate(q, -1.9888547488753163, 2);
  sqcRZGate(q, -1.9549991442740842, 2);
  sqcRYGate(q, 2.877762193040629, 3);
  sqcRZGate(q, -2.731768981768901, 3);
  sqcRYGate(q, 0.5888258940496076, 4);
  sqcRZGate(q, -2.7596479059839054, 4);
  sqcRYGate(q, 0.47138677349585134, 5);
  sqcRZGate(q, 2.4686966999156725, 5);
  sqcRYGate(q, 0.03927734825411644, 6);
  sqcRZGate(q, -1.1003290539593902, 6);
  sqcRYGate(q, -1.130209376721005, 7);
  sqcRZGate(q, -2.5192684029464107, 7);
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
  sqcRYGate(q, -2.1482003340576847, 0);
  sqcRZGate(q, 0.7272767286685654, 0);
  sqcRYGate(q, 2.8788205955117796, 1);
  sqcRZGate(q, -2.714944494395835, 1);
  sqcRYGate(q, -0.7709164490110288, 2);
  sqcRZGate(q, -1.9675429784455574, 2);
  sqcRYGate(q, -1.4375660246637272, 3);
  sqcRZGate(q, 1.951260907642606, 3);
  sqcRYGate(q, -1.8191209244840412, 4);
  sqcRZGate(q, 0.12339406356400141, 4);
  sqcRYGate(q, -0.6818785345930207, 5);
  sqcRZGate(q, 1.5200040489313347, 5);
  sqcRYGate(q, 3.0450869439219272, 6);
  sqcRZGate(q, -0.9566018134648129, 6);
  sqcRYGate(q, -2.531913011886204, 7);
  sqcRZGate(q, -0.5755140412426185, 7);
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
  sqcRYGate(q, 2.7196231892348477, 0);
  sqcRZGate(q, -0.9772790733015561, 0);
  sqcRYGate(q, -0.2721382669245752, 1);
  sqcRZGate(q, 0.05344613573454194, 1);
  sqcRYGate(q, 2.9739843383216367, 2);
  sqcRZGate(q, 2.282117191299382, 2);
  sqcRYGate(q, 2.0451822609913615, 3);
  sqcRZGate(q, -0.34754798287413274, 3);
  sqcRYGate(q, -0.6728807291186302, 4);
  sqcRZGate(q, 3.1079852486764246, 4);
  sqcRYGate(q, 1.412189302425112, 5);
  sqcRZGate(q, 1.008166537102583, 5);
  sqcRYGate(q, 1.2879502617186063, 6);
  sqcRZGate(q, -0.6406853344348853, 6);
  sqcRYGate(q, -0.9429526220116486, 7);
  sqcRZGate(q, -2.1770045467548638, 7);
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
  sqcRYGate(q, 1.3340424629524872, 0);
  sqcRZGate(q, 2.8175520180401445, 0);
  sqcRYGate(q, -2.1420524264503467, 1);
  sqcRZGate(q, 2.5595049810919273, 1);
  sqcRYGate(q, -1.9940523121292009, 2);
  sqcRZGate(q, 0.702303503472729, 2);
  sqcRYGate(q, -3.0754171373336856, 3);
  sqcRZGate(q, 0.632709709278144, 3);
  sqcRYGate(q, 1.2937093673919238, 4);
  sqcRZGate(q, -1.2526932217718298, 4);
  sqcRYGate(q, 0.20753614023371283, 5);
  sqcRZGate(q, 1.5329615284741225, 5);
  sqcRYGate(q, -1.2260772431346914, 6);
  sqcRZGate(q, -2.4790396099341283, 6);
  sqcRYGate(q, 1.2936850299912948, 7);
  sqcRZGate(q, -1.513391678434326, 7);
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
  sqcRYGate(q, 2.913314716986338, 0);
  sqcRZGate(q, 1.9108164793383597, 0);
  sqcRYGate(q, -2.8988031943793553, 1);
  sqcRZGate(q, -1.1005699840382057, 1);
  sqcRYGate(q, 0.39260234655281306, 2);
  sqcRZGate(q, -3.070503130391537, 2);
  sqcRYGate(q, 0.7031603433377134, 3);
  sqcRZGate(q, 2.5302317463768995, 3);
  sqcRYGate(q, -2.39319505981586, 4);
  sqcRZGate(q, 0.6137197905074121, 4);
  sqcRYGate(q, -0.2267052481931726, 5);
  sqcRZGate(q, -0.0879445889616699, 5);
  sqcRYGate(q, -0.18795683112437975, 6);
  sqcRZGate(q, 2.674339051076972, 6);
  sqcRYGate(q, -2.6295550842557147, 7);
  sqcRZGate(q, -0.8519355829038132, 7);
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
  sqcRYGate(q, -0.9393474174131643, 0);
  sqcRZGate(q, -2.5579038036295847, 0);
  sqcRYGate(q, -0.3157765147295181, 1);
  sqcRZGate(q, -2.9312596512663136, 1);
  sqcRYGate(q, -0.5257661310901546, 2);
  sqcRZGate(q, -0.8384466471075172, 2);
  sqcRYGate(q, -1.1464465841985627, 3);
  sqcRZGate(q, 1.9092499944123955, 3);
  sqcRYGate(q, -1.9448643151091358, 4);
  sqcRZGate(q, 2.4043890305609903, 4);
  sqcRYGate(q, -0.3306201189229192, 5);
  sqcRZGate(q, 1.2783337467398763, 5);
  sqcRYGate(q, 1.6035715889545066, 6);
  sqcRZGate(q, -1.1108662278070618, 6);
  sqcRYGate(q, -1.4282034876990772, 7);
  sqcRZGate(q, -1.6397207837116865, 7);
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
  sqcRYGate(q, 1.8189097630196773, 0);
  sqcRZGate(q, -0.008769220529734945, 0);
  sqcRYGate(q, -0.32402535839653074, 1);
  sqcRZGate(q, 2.838805650059225, 1);
  sqcRYGate(q, 0.5087146646866989, 2);
  sqcRZGate(q, 3.1047500633582295, 2);
  sqcRYGate(q, -0.9800329656530583, 3);
  sqcRZGate(q, -2.2899099458092538, 3);
  sqcRYGate(q, 1.2881723356753998, 4);
  sqcRZGate(q, -1.3352810084495823, 4);
  sqcRYGate(q, -1.6129463868035776, 5);
  sqcRZGate(q, 0.0574568746256121, 5);
  sqcRYGate(q, -1.3082014451231532, 6);
  sqcRZGate(q, -0.7392911084116802, 6);
  sqcRYGate(q, -2.4570054191966864, 7);
  sqcRZGate(q, 0.16005233509437017, 7);
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
  sqcRYGate(q, -2.423157554814179, 0);
  sqcRZGate(q, -1.6434250251502256, 0);
  sqcRYGate(q, -2.5640872192015602, 1);
  sqcRZGate(q, -2.840925316693492, 1);
  sqcRYGate(q, -0.5023378384437859, 2);
  sqcRZGate(q, -1.403174645628339, 2);
  sqcRYGate(q, 1.930531442990079, 3);
  sqcRZGate(q, -3.0777180206839216, 3);
  sqcRYGate(q, 0.7755395261837039, 4);
  sqcRZGate(q, 3.0674292502379554, 4);
  sqcRYGate(q, 0.11816754453995199, 5);
  sqcRZGate(q, 2.474487571996145, 5);
  sqcRYGate(q, -0.034247079039985834, 6);
  sqcRZGate(q, 0.5735788320240198, 6);
  sqcRYGate(q, 1.7671099192204844, 7);
  sqcRZGate(q, -2.469938005621696, 7);
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
  sqcRYGate(q, -2.839391332016594, 0);
  sqcRZGate(q, 0.372441614559777, 0);
  sqcRYGate(q, -1.1667189542514533, 1);
  sqcRZGate(q, 2.5967942827017154, 1);
  sqcRYGate(q, 1.3334675342824065, 2);
  sqcRZGate(q, 3.02406127805519, 2);
  sqcRYGate(q, -1.7586831640123535, 3);
  sqcRZGate(q, -2.027591024865166, 3);
  sqcRYGate(q, -1.685847795409619, 4);
  sqcRZGate(q, -2.8557414715434652, 4);
  sqcRYGate(q, -1.3890237785647466, 5);
  sqcRZGate(q, -2.0428855090971973, 5);
  sqcRYGate(q, 0.7205801311130826, 6);
  sqcRZGate(q, 2.0534898730858506, 6);
  sqcRYGate(q, 0.08654436127706688, 7);
  sqcRZGate(q, -2.679149543265709, 7);
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
  sqcRYGate(q, -2.7382660063389763, 0);
  sqcRZGate(q, 0.4782103460415392, 0);
  sqcRYGate(q, -0.8002975524804989, 1);
  sqcRZGate(q, -0.4233142985308147, 1);
  sqcRYGate(q, 1.7019675620350254, 2);
  sqcRZGate(q, -0.9956606749826182, 2);
  sqcRYGate(q, -1.1332386500382368, 3);
  sqcRZGate(q, 1.3291793996898822, 3);
  sqcRYGate(q, 2.199810361080802, 4);
  sqcRZGate(q, -2.2700910080477947, 4);
  sqcRYGate(q, -0.5621143908492119, 5);
  sqcRZGate(q, 1.30400944095414, 5);
  sqcRYGate(q, -0.07789856611580043, 6);
  sqcRZGate(q, -2.2345285313998158, 6);
  sqcRYGate(q, -2.055358934908795, 7);
  sqcRZGate(q, 1.3137907853201591, 7);
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
  sqcRYGate(q, -2.3791239753336955, 0);
  sqcRZGate(q, 2.6002317141978075, 0);
  sqcRYGate(q, 1.4185327147817315, 1);
  sqcRZGate(q, -0.1113012989198694, 1);
  sqcRYGate(q, 1.3137121410935384, 2);
  sqcRZGate(q, -2.121324252445054, 2);
  sqcRYGate(q, 0.0648421221542792, 3);
  sqcRZGate(q, 1.4823056804474453, 3);
  sqcRYGate(q, 1.8244019381899017, 4);
  sqcRZGate(q, -1.9939038311622754, 4);
  sqcRYGate(q, -1.5948653289527521, 5);
  sqcRZGate(q, -2.5745348180304704, 5);
  sqcRYGate(q, -2.393533289696479, 6);
  sqcRZGate(q, -1.6213387466628852, 6);
  sqcRYGate(q, -1.9131277281130612, 7);
  sqcRZGate(q, -0.0015973575397065787, 7);
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
  sqcRYGate(q, 2.6545936029103996, 0);
  sqcRZGate(q, -2.1390740834717947, 0);
  sqcRYGate(q, 0.6146368411165462, 1);
  sqcRZGate(q, 2.4834936982753804, 1);
  sqcRYGate(q, -0.791261492814031, 2);
  sqcRZGate(q, -1.9170143202690657, 2);
  sqcRYGate(q, -2.0094481747498447, 3);
  sqcRZGate(q, 2.1576268158690306, 3);
  sqcRYGate(q, 1.3019206303150432, 4);
  sqcRZGate(q, -0.1571746303514914, 4);
  sqcRYGate(q, 1.3916488150889759, 5);
  sqcRZGate(q, -0.6851101770576689, 5);
  sqcRYGate(q, 0.4058354656289927, 6);
  sqcRZGate(q, 0.8497716471503434, 6);
  sqcRYGate(q, 0.3435321749981126, 7);
  sqcRZGate(q, 1.239689298294544, 7);
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
  sqcRYGate(q, -2.6769787126815245, 0);
  sqcRZGate(q, 2.9947008359020866, 0);
  sqcRYGate(q, 2.9809742219561746, 1);
  sqcRZGate(q, 0.7808697583058885, 1);
  sqcRYGate(q, 0.938972581069537, 2);
  sqcRZGate(q, 0.5320378481162327, 2);
  sqcRYGate(q, -2.428915242590157, 3);
  sqcRZGate(q, 0.5425396383839846, 3);
  sqcRYGate(q, 1.4885404845585555, 4);
  sqcRZGate(q, -1.93829098229059, 4);
  sqcRYGate(q, 1.4180152711145788, 5);
  sqcRZGate(q, 2.5184538016516007, 5);
  sqcRYGate(q, 2.2780256552944183, 6);
  sqcRZGate(q, 2.1006590246421024, 6);
  sqcRYGate(q, 1.4580614871457502, 7);
  sqcRZGate(q, -2.8946731845241325, 7);
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
  sqcRYGate(q, 2.0977951559436896, 0);
  sqcRZGate(q, 0.1900554456991577, 0);
  sqcRYGate(q, -2.7972937924057484, 1);
  sqcRZGate(q, -0.4890728956209669, 1);
  sqcRYGate(q, -0.1529650948818642, 2);
  sqcRZGate(q, -2.6269280132785906, 2);
  sqcRYGate(q, 2.2340586611125888, 3);
  sqcRZGate(q, 2.296201191178667, 3);
  sqcRYGate(q, 1.9759872002036538, 4);
  sqcRZGate(q, -2.078827293402515, 4);
  sqcRYGate(q, 0.22081278323954656, 5);
  sqcRZGate(q, 1.0504696220472836, 5);
  sqcRYGate(q, 2.104568893765529, 6);
  sqcRZGate(q, -2.911225690272638, 6);
  sqcRYGate(q, 2.2398287133844033, 7);
  sqcRZGate(q, -0.23118962217889039, 7);
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
  sqcRYGate(q, -1.462374197506428, 0);
  sqcRZGate(q, -1.067463077672321, 0);
  sqcRYGate(q, 1.8279922078850546, 1);
  sqcRZGate(q, -1.5126156508475084, 1);
  sqcRYGate(q, 1.9731272516776395, 2);
  sqcRZGate(q, -1.6609423226042113, 2);
  sqcRYGate(q, -0.34285652631328745, 3);
  sqcRZGate(q, -1.12715851403485, 3);
  sqcRYGate(q, -1.0420756338247594, 4);
  sqcRZGate(q, -0.12474740024828802, 4);
  sqcRYGate(q, -2.9963109934234176, 5);
  sqcRZGate(q, 1.6335189053077983, 5);
  sqcRYGate(q, -2.4709000857829477, 6);
  sqcRZGate(q, 2.8625484654742084, 6);
  sqcRYGate(q, -1.4558423066616255, 7);
  sqcRZGate(q, -2.2371666770291228, 7);
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
  sqcRYGate(q, 2.9643798610205705, 0);
  sqcRZGate(q, 1.267470971894972, 0);
  sqcRYGate(q, -2.9011086722016497, 1);
  sqcRZGate(q, 1.9759094981647385, 1);
  sqcRYGate(q, -1.7665321412889732, 2);
  sqcRZGate(q, -1.1284967071632952, 2);
  sqcRYGate(q, 0.7693815294633085, 3);
  sqcRZGate(q, 2.777122110483531, 3);
  sqcRYGate(q, -2.8170627025334145, 4);
  sqcRZGate(q, 0.4428474455271641, 4);
  sqcRYGate(q, 0.27418863707331953, 5);
  sqcRZGate(q, -0.8941727857994516, 5);
  sqcRYGate(q, 1.9533136478157378, 6);
  sqcRZGate(q, -0.7632017552693925, 6);
  sqcRYGate(q, 2.883427383470606, 7);
  sqcRZGate(q, -2.6810617277854876, 7);
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
  sqcRYGate(q, 3.049903502410833, 0);
  sqcRZGate(q, 2.2676729829034166, 0);
  sqcRYGate(q, -2.473272749048275, 1);
  sqcRZGate(q, 2.9409437321749365, 1);
  sqcRYGate(q, 2.562779222432901, 2);
  sqcRZGate(q, -2.3177375918793004, 2);
  sqcRYGate(q, -2.639952267782057, 3);
  sqcRZGate(q, 2.8083743420599463, 3);
  sqcRYGate(q, 1.0008070786351055, 4);
  sqcRZGate(q, 1.901570960394156, 4);
  sqcRYGate(q, 0.04424710906258082, 5);
  sqcRZGate(q, -0.41574668318117386, 5);
  sqcRYGate(q, -1.0386580323885326, 6);
  sqcRZGate(q, -2.514788723998955, 6);
  sqcRYGate(q, -0.4315246343898123, 7);
  sqcRZGate(q, -0.8241074533901313, 7);
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
  sqcRYGate(q, 0.270636968808856, 0);
  sqcRZGate(q, 0.41323042363949347, 0);
  sqcRYGate(q, 1.5322077860874288, 1);
  sqcRZGate(q, 0.9783526060989924, 1);
  sqcRYGate(q, -2.375855330873695, 2);
  sqcRZGate(q, 1.0651325214332885, 2);
  sqcRYGate(q, 0.24117209141852095, 3);
  sqcRZGate(q, 1.612512906236926, 3);
  sqcRYGate(q, 1.3173840418485376, 4);
  sqcRZGate(q, 1.962266310777384, 4);
  sqcRYGate(q, -2.5222774540400548, 5);
  sqcRZGate(q, -2.2788759323888295, 5);
  sqcRYGate(q, -1.6870172923891307, 6);
  sqcRZGate(q, 2.292005449238593, 6);
  sqcRYGate(q, 2.2267878649354778, 7);
  sqcRZGate(q, -1.3060613876387297, 7);

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
