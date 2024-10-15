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

  sqcRYGate(q, 2.5623380291131617, 0);
  sqcRZGate(q, 0.8834033316409856, 0);
  sqcRYGate(q, 2.44571334599046, 1);
  sqcRZGate(q, -0.05249678155024562, 1);
  sqcRYGate(q, 2.6615013464879946, 2);
  sqcRZGate(q, -2.3655184615597467, 2);
  sqcRYGate(q, 1.0543818445066364, 3);
  sqcRZGate(q, -2.0544467818526746, 3);
  sqcRYGate(q, -1.3089677859162034, 4);
  sqcRZGate(q, -2.6041355202366128, 4);
  sqcRYGate(q, -1.978950234084266, 5);
  sqcRZGate(q, 0.8706229111028894, 5);
  sqcRYGate(q, 2.93926902915995, 6);
  sqcRZGate(q, -3.073291358126168, 6);
  sqcRYGate(q, -0.8588932119748824, 7);
  sqcRZGate(q, -2.5442518005732326, 7);
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
  sqcRYGate(q, 1.6031268727384855, 0);
  sqcRZGate(q, 2.10994143416126, 0);
  sqcRYGate(q, 2.916272941214474, 1);
  sqcRZGate(q, -0.6908987242175161, 1);
  sqcRYGate(q, -3.025108685866511, 2);
  sqcRZGate(q, 0.6232931197961394, 2);
  sqcRYGate(q, 1.5174936065301636, 3);
  sqcRZGate(q, -1.6248326481254707, 3);
  sqcRYGate(q, 1.3463678914403514, 4);
  sqcRZGate(q, -0.4007302684821347, 4);
  sqcRYGate(q, -1.4217016913586837, 5);
  sqcRZGate(q, 3.122421484223951, 5);
  sqcRYGate(q, -1.470010644092262, 6);
  sqcRZGate(q, -2.0652603748626692, 6);
  sqcRYGate(q, -2.594490439896221, 7);
  sqcRZGate(q, 1.8949241888377648, 7);
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
  sqcRYGate(q, 2.95929633118089, 0);
  sqcRZGate(q, -0.7005820111412587, 0);
  sqcRYGate(q, 1.8094462330176206, 1);
  sqcRZGate(q, 2.758069210643645, 1);
  sqcRYGate(q, -0.6603163788245912, 2);
  sqcRZGate(q, 0.6540236446192152, 2);
  sqcRYGate(q, 1.5017886414899047, 3);
  sqcRZGate(q, -1.3205250211057022, 3);
  sqcRYGate(q, 0.8300572031680118, 4);
  sqcRZGate(q, 0.6348753690271494, 4);
  sqcRYGate(q, 0.8521361896300849, 5);
  sqcRZGate(q, -2.402897122101084, 5);
  sqcRYGate(q, 1.3210803000905298, 6);
  sqcRZGate(q, -2.1605896263261473, 6);
  sqcRYGate(q, -0.4926964306838819, 7);
  sqcRZGate(q, -1.5473498531456018, 7);
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
  sqcRYGate(q, -2.2181327437762315, 0);
  sqcRZGate(q, -0.9885206730219922, 0);
  sqcRYGate(q, -2.5308855195432853, 1);
  sqcRZGate(q, -0.8836855928290346, 1);
  sqcRYGate(q, -2.4019303255383293, 2);
  sqcRZGate(q, -3.014644584546954, 2);
  sqcRYGate(q, -0.7563257873720303, 3);
  sqcRZGate(q, 0.37619127986445644, 3);
  sqcRYGate(q, 2.204266731673174, 4);
  sqcRZGate(q, 2.5914595462193533, 4);
  sqcRYGate(q, -0.9215702125545467, 5);
  sqcRZGate(q, -1.3642302595194213, 5);
  sqcRYGate(q, 0.7237990800037927, 6);
  sqcRZGate(q, 1.0157911256159435, 6);
  sqcRYGate(q, 0.6782950062263776, 7);
  sqcRZGate(q, 2.924668683154344, 7);
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
  sqcRYGate(q, -2.5377445174745277, 0);
  sqcRZGate(q, 1.505391716038793, 0);
  sqcRYGate(q, 2.4027244225398223, 1);
  sqcRZGate(q, -2.024487302107981, 1);
  sqcRYGate(q, -0.5021582262356121, 2);
  sqcRZGate(q, 2.0396206597841537, 2);
  sqcRYGate(q, 2.676862701134449, 3);
  sqcRZGate(q, 0.5348525540309418, 3);
  sqcRYGate(q, 1.2969482648214639, 4);
  sqcRZGate(q, 0.5761841958622492, 4);
  sqcRYGate(q, 2.573404161979424, 5);
  sqcRZGate(q, 1.1691234786691116, 5);
  sqcRYGate(q, 2.325982181940116, 6);
  sqcRZGate(q, 1.7402839089825755, 6);
  sqcRYGate(q, 0.5185838846370663, 7);
  sqcRZGate(q, 1.1228225335809339, 7);
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
  sqcRYGate(q, 0.013062349729043396, 0);
  sqcRZGate(q, -1.8441176141429043, 0);
  sqcRYGate(q, -0.6873271637231424, 1);
  sqcRZGate(q, -2.9043434605955105, 1);
  sqcRYGate(q, -0.03678998218924916, 2);
  sqcRZGate(q, 1.3802542971387028, 2);
  sqcRYGate(q, -0.9529334050303317, 3);
  sqcRZGate(q, 1.8303867915565568, 3);
  sqcRYGate(q, -1.4101133122480976, 4);
  sqcRZGate(q, 0.33724523186814565, 4);
  sqcRYGate(q, 1.4850503467318217, 5);
  sqcRZGate(q, -1.2576826337900469, 5);
  sqcRYGate(q, 1.10016239769124, 6);
  sqcRZGate(q, 0.0990173587213911, 6);
  sqcRYGate(q, 2.9027432084842686, 7);
  sqcRZGate(q, 2.845443638629768, 7);
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
  sqcRYGate(q, 2.8749029234867707, 0);
  sqcRZGate(q, 1.8792149809244643, 0);
  sqcRYGate(q, 0.6299774238159115, 1);
  sqcRZGate(q, 0.6409827179046206, 1);
  sqcRYGate(q, 2.6318120587437592, 2);
  sqcRZGate(q, 2.1176288469241245, 2);
  sqcRYGate(q, 1.1779516396974241, 3);
  sqcRZGate(q, -2.865074260080822, 3);
  sqcRYGate(q, 0.2497471539837251, 4);
  sqcRZGate(q, 0.46174781494508554, 4);
  sqcRYGate(q, -1.5198549880577783, 5);
  sqcRZGate(q, 1.285618392659942, 5);
  sqcRYGate(q, -0.8512638906463197, 6);
  sqcRZGate(q, 1.6663658870672982, 6);
  sqcRYGate(q, 1.139458069600611, 7);
  sqcRZGate(q, 3.0668915905168093, 7);
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
  sqcRYGate(q, 0.3166514606052795, 0);
  sqcRZGate(q, -0.7867352392888726, 0);
  sqcRYGate(q, -0.7959800529046959, 1);
  sqcRZGate(q, -1.2497592402334412, 1);
  sqcRYGate(q, 1.1815037276102487, 2);
  sqcRZGate(q, 0.11465962824259679, 2);
  sqcRYGate(q, -2.02577204124685, 3);
  sqcRZGate(q, -0.22725271685351556, 3);
  sqcRYGate(q, 2.7595504136350755, 4);
  sqcRZGate(q, -0.43077961473966486, 4);
  sqcRYGate(q, -0.362747462004112, 5);
  sqcRZGate(q, 2.541596356165575, 5);
  sqcRYGate(q, -0.9958591131003667, 6);
  sqcRZGate(q, -0.6481113496820985, 6);
  sqcRYGate(q, -0.3985961976623673, 7);
  sqcRZGate(q, 2.2269859136514607, 7);
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
  sqcRYGate(q, 0.7800479065499966, 0);
  sqcRZGate(q, -0.5801242215698525, 0);
  sqcRYGate(q, -2.4948463416898425, 1);
  sqcRZGate(q, -0.6926504633456192, 1);
  sqcRYGate(q, 2.0462706217714057, 2);
  sqcRZGate(q, 1.9290178040956676, 2);
  sqcRYGate(q, 0.8446671094397816, 3);
  sqcRZGate(q, -0.9005007724337667, 3);
  sqcRYGate(q, -3.1145507061496702, 4);
  sqcRZGate(q, 0.49776222896349565, 4);
  sqcRYGate(q, -1.2176551775684887, 5);
  sqcRZGate(q, 1.1405445195199588, 5);
  sqcRYGate(q, -2.4769459306029336, 6);
  sqcRZGate(q, 2.4608185576047554, 6);
  sqcRYGate(q, 1.6743420838134444, 7);
  sqcRZGate(q, 0.5162789705745068, 7);
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
  sqcRYGate(q, -0.4621543175585181, 0);
  sqcRZGate(q, -1.6510848244014307, 0);
  sqcRYGate(q, 0.4237282642031079, 1);
  sqcRZGate(q, -0.9129016307214521, 1);
  sqcRYGate(q, -1.2328899455635733, 2);
  sqcRZGate(q, 0.8588323560938224, 2);
  sqcRYGate(q, 0.8866600886736062, 3);
  sqcRZGate(q, -0.9630372799700613, 3);
  sqcRYGate(q, 1.1967935124817366, 4);
  sqcRZGate(q, 1.4054561631362616, 4);
  sqcRYGate(q, 1.178131727832611, 5);
  sqcRZGate(q, 0.8849511467976168, 5);
  sqcRYGate(q, 1.5584290062228048, 6);
  sqcRZGate(q, 2.677199377793807, 6);
  sqcRYGate(q, -0.4361411175639507, 7);
  sqcRZGate(q, -1.4711782458318874, 7);
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
  sqcRYGate(q, -0.2669662838627348, 0);
  sqcRZGate(q, -2.672678340831339, 0);
  sqcRYGate(q, -1.4390508392582448, 1);
  sqcRZGate(q, -0.7643718617323365, 1);
  sqcRYGate(q, 0.886715211297301, 2);
  sqcRZGate(q, -2.8397834410765945, 2);
  sqcRYGate(q, 0.9956963454423594, 3);
  sqcRZGate(q, 1.7897866773295918, 3);
  sqcRYGate(q, 0.2523748216588008, 4);
  sqcRZGate(q, -1.5283685183513456, 4);
  sqcRYGate(q, -1.0871593068213548, 5);
  sqcRZGate(q, -1.459425862970126, 5);
  sqcRYGate(q, 1.8567943250976962, 6);
  sqcRZGate(q, 2.8826393668072168, 6);
  sqcRYGate(q, -1.3975805473938487, 7);
  sqcRZGate(q, -0.5174316541884644, 7);
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
  sqcRYGate(q, -1.595184651854531, 0);
  sqcRZGate(q, 0.6954584337511882, 0);
  sqcRYGate(q, -1.285873190878264, 1);
  sqcRZGate(q, -1.4068288347532936, 1);
  sqcRYGate(q, -0.28651129751200066, 2);
  sqcRZGate(q, 1.5537596005988146, 2);
  sqcRYGate(q, -2.9501189628666404, 3);
  sqcRZGate(q, 3.0991649929000142, 3);
  sqcRYGate(q, 1.8659261689207733, 4);
  sqcRZGate(q, 0.26853431855790055, 4);
  sqcRYGate(q, 1.3969847559538935, 5);
  sqcRZGate(q, 0.16417213427917154, 5);
  sqcRYGate(q, -2.735772973010493, 6);
  sqcRZGate(q, -0.43994087001227955, 6);
  sqcRYGate(q, -2.2981600260742425, 7);
  sqcRZGate(q, -2.846719837876994, 7);
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
  sqcRYGate(q, 0.052265703861451136, 0);
  sqcRZGate(q, 2.0898445756569632, 0);
  sqcRYGate(q, 1.1197931046648464, 1);
  sqcRZGate(q, 2.4341891803877718, 1);
  sqcRYGate(q, 1.5889336251270247, 2);
  sqcRZGate(q, 0.2827669510965026, 2);
  sqcRYGate(q, -2.596215848956418, 3);
  sqcRZGate(q, -2.42414735964166, 3);
  sqcRYGate(q, 2.6050009132878342, 4);
  sqcRZGate(q, 1.056968937590853, 4);
  sqcRYGate(q, 0.39327737127597684, 5);
  sqcRZGate(q, -1.2437303377322664, 5);
  sqcRYGate(q, -1.2437861804837158, 6);
  sqcRZGate(q, 0.7296644916442138, 6);
  sqcRYGate(q, -2.4089176228560176, 7);
  sqcRZGate(q, 0.40727699504365433, 7);
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
  sqcRYGate(q, 2.1877585749618547, 0);
  sqcRZGate(q, 2.5591677760328824, 0);
  sqcRYGate(q, -1.7239694194975437, 1);
  sqcRZGate(q, -1.5225954785945621, 1);
  sqcRYGate(q, 0.9899413424572225, 2);
  sqcRZGate(q, -0.6311214035311966, 2);
  sqcRYGate(q, 0.31607707845974836, 3);
  sqcRZGate(q, -0.6229119349339906, 3);
  sqcRYGate(q, -2.9602316698365425, 4);
  sqcRZGate(q, 1.566041533182951, 4);
  sqcRYGate(q, 1.5649808315987732, 5);
  sqcRZGate(q, 1.1874467432704483, 5);
  sqcRYGate(q, -1.5617685372609982, 6);
  sqcRZGate(q, 0.19406910141901348, 6);
  sqcRYGate(q, 2.795506519047391, 7);
  sqcRZGate(q, 1.5833468980731054, 7);
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
  sqcRYGate(q, 2.186929127350907, 0);
  sqcRZGate(q, 1.556539811770701, 0);
  sqcRYGate(q, -2.34698813944555, 1);
  sqcRZGate(q, -0.29965901815343443, 1);
  sqcRYGate(q, 1.1527909516518902, 2);
  sqcRZGate(q, 2.1220546129244626, 2);
  sqcRYGate(q, -2.761421243413897, 3);
  sqcRZGate(q, 1.5907709028584345, 3);
  sqcRYGate(q, -0.8681517894653765, 4);
  sqcRZGate(q, 0.5333336439032518, 4);
  sqcRYGate(q, -1.8403097354239193, 5);
  sqcRZGate(q, -0.9042708643359865, 5);
  sqcRYGate(q, 1.378039929415129, 6);
  sqcRZGate(q, 1.2397626074528523, 6);
  sqcRYGate(q, 3.030143526042995, 7);
  sqcRZGate(q, -1.6661106341649683, 7);
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
  sqcRYGate(q, 2.9257254092587925, 0);
  sqcRZGate(q, -0.7995821906890612, 0);
  sqcRYGate(q, 1.460096918031914, 1);
  sqcRZGate(q, -0.32529553329325983, 1);
  sqcRYGate(q, 2.5859093929694077, 2);
  sqcRZGate(q, -1.2671631540656307, 2);
  sqcRYGate(q, -2.0710375589038055, 3);
  sqcRZGate(q, 1.9320620204269583, 3);
  sqcRYGate(q, 2.211824139736019, 4);
  sqcRZGate(q, -1.3089326586950345, 4);
  sqcRYGate(q, 1.7935237046594217, 5);
  sqcRZGate(q, 1.0098191887054158, 5);
  sqcRYGate(q, -1.553446038120834, 6);
  sqcRZGate(q, 1.737613463364676, 6);
  sqcRYGate(q, 2.6041101795321064, 7);
  sqcRZGate(q, 1.914478573490138, 7);
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
  sqcRYGate(q, 2.603663516737071, 0);
  sqcRZGate(q, -2.3819892412230375, 0);
  sqcRYGate(q, 2.672677405105256, 1);
  sqcRZGate(q, -0.06687948038659552, 1);
  sqcRYGate(q, 2.075841419634642, 2);
  sqcRZGate(q, -0.38427996796879077, 2);
  sqcRYGate(q, -1.4709443992462923, 3);
  sqcRZGate(q, -0.5273510507501742, 3);
  sqcRYGate(q, 2.415268192773642, 4);
  sqcRZGate(q, -1.5957720851434418, 4);
  sqcRYGate(q, 1.440676253170218, 5);
  sqcRZGate(q, 1.4858657869605345, 5);
  sqcRYGate(q, 0.84418063855412, 6);
  sqcRZGate(q, 1.5648548278756893, 6);
  sqcRYGate(q, -2.613993629985386, 7);
  sqcRZGate(q, -2.802355446551993, 7);
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
  sqcRYGate(q, -1.0680926502650896, 0);
  sqcRZGate(q, -2.2281058580563933, 0);
  sqcRYGate(q, 2.762755692556208, 1);
  sqcRZGate(q, -0.9019779562450001, 1);
  sqcRYGate(q, -1.9728553902467745, 2);
  sqcRZGate(q, -0.09213481603424432, 2);
  sqcRYGate(q, -1.77087423154589, 3);
  sqcRZGate(q, -1.2466975532454192, 3);
  sqcRYGate(q, 1.3056217382856417, 4);
  sqcRZGate(q, 2.5804555431327882, 4);
  sqcRYGate(q, -0.2630922888634496, 5);
  sqcRZGate(q, 1.4057803411517806, 5);
  sqcRYGate(q, 1.1239612890075983, 6);
  sqcRZGate(q, -0.4611435655317679, 6);
  sqcRYGate(q, -2.2488279515482095, 7);
  sqcRZGate(q, -1.0672913948013818, 7);
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
  sqcRYGate(q, 1.9352367866642082, 0);
  sqcRZGate(q, 0.411157217441941, 0);
  sqcRYGate(q, 1.2026876185878956, 1);
  sqcRZGate(q, -1.3020281166724406, 1);
  sqcRYGate(q, -1.9196553152450944, 2);
  sqcRZGate(q, -1.5096488673531265, 2);
  sqcRYGate(q, 1.7803708963352225, 3);
  sqcRZGate(q, -0.5299491673357785, 3);
  sqcRYGate(q, -1.2764882207334853, 4);
  sqcRZGate(q, -0.38997426919343764, 4);
  sqcRYGate(q, -2.7963040475416716, 5);
  sqcRZGate(q, 1.5198210646445718, 5);
  sqcRYGate(q, 0.36457932877818894, 6);
  sqcRZGate(q, -1.5633594954144767, 6);
  sqcRYGate(q, -1.3424906704130422, 7);
  sqcRZGate(q, 1.1530307810598943, 7);
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
  sqcRYGate(q, -2.498422329722773, 0);
  sqcRZGate(q, -1.2532604755202348, 0);
  sqcRYGate(q, -1.7222774456620122, 1);
  sqcRZGate(q, 2.888811612689352, 1);
  sqcRYGate(q, 1.7671082152247937, 2);
  sqcRZGate(q, -1.927314016429813, 2);
  sqcRYGate(q, -1.87823176939352, 3);
  sqcRZGate(q, 1.896138799302908, 3);
  sqcRYGate(q, 0.3426110617445035, 4);
  sqcRZGate(q, -0.7363828994641173, 4);
  sqcRYGate(q, -2.1316351712895307, 5);
  sqcRZGate(q, 0.09556962011141729, 5);
  sqcRYGate(q, -2.4359133897682868, 6);
  sqcRZGate(q, -2.6551511265226884, 6);
  sqcRYGate(q, -1.8859841427545945, 7);
  sqcRZGate(q, -2.9536255901491577, 7);
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
  sqcRYGate(q, -2.4596759421693104, 0);
  sqcRZGate(q, -0.1435690364352204, 0);
  sqcRYGate(q, -0.5336713609466983, 1);
  sqcRZGate(q, -0.44854336086694874, 1);
  sqcRYGate(q, 1.7933067224146946, 2);
  sqcRZGate(q, -1.2243527075292997, 2);
  sqcRYGate(q, 0.6681876753864779, 3);
  sqcRZGate(q, -0.016292767755601036, 3);
  sqcRYGate(q, 0.5199869897365756, 4);
  sqcRZGate(q, 2.379505878882926, 4);
  sqcRYGate(q, 1.232231639333028, 5);
  sqcRZGate(q, 0.7772911613918142, 5);
  sqcRYGate(q, 1.5525296225497174, 6);
  sqcRZGate(q, 2.019069358025421, 6);
  sqcRYGate(q, 0.46861595010362983, 7);
  sqcRZGate(q, -2.0788091492617062, 7);
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
  sqcRYGate(q, 2.786143354012076, 0);
  sqcRZGate(q, -3.0889911450999867, 0);
  sqcRYGate(q, 0.8684210169123691, 1);
  sqcRZGate(q, -0.21240438432156328, 1);
  sqcRYGate(q, 0.5087219116023339, 2);
  sqcRZGate(q, -3.002853113217156, 2);
  sqcRYGate(q, 2.2125129578305476, 3);
  sqcRZGate(q, 0.35602608879614905, 3);
  sqcRYGate(q, 2.3070911380642314, 4);
  sqcRZGate(q, 0.15877348797219337, 4);
  sqcRYGate(q, 2.687024491644221, 5);
  sqcRZGate(q, 1.4035030077611288, 5);
  sqcRYGate(q, -2.0357294197387703, 6);
  sqcRZGate(q, 1.013507598271075, 6);
  sqcRYGate(q, -1.4376300411575866, 7);
  sqcRZGate(q, 1.4304658560558252, 7);
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
  sqcRYGate(q, 2.178789870723694, 0);
  sqcRZGate(q, -2.7018992298035793, 0);
  sqcRYGate(q, -0.9873740591821036, 1);
  sqcRZGate(q, 1.3559579890856064, 1);
  sqcRYGate(q, 1.281665238255113, 2);
  sqcRZGate(q, 1.7134758647487423, 2);
  sqcRYGate(q, 2.110627669417446, 3);
  sqcRZGate(q, 1.0262288574459335, 3);
  sqcRYGate(q, -2.574924880143359, 4);
  sqcRZGate(q, 2.1572768432729363, 4);
  sqcRYGate(q, -0.8226553474277436, 5);
  sqcRZGate(q, -0.9013348983585008, 5);
  sqcRYGate(q, 3.0089908827951315, 6);
  sqcRZGate(q, 2.115342388803856, 6);
  sqcRYGate(q, 1.5405905425944597, 7);
  sqcRZGate(q, 0.7152898836848243, 7);
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
  sqcRYGate(q, -2.0299195145203175, 0);
  sqcRZGate(q, 1.1656139582663345, 0);
  sqcRYGate(q, -0.7063739908220108, 1);
  sqcRZGate(q, 2.506270689251078, 1);
  sqcRYGate(q, -1.6044881425719344, 2);
  sqcRZGate(q, 2.0851580341085834, 2);
  sqcRYGate(q, -0.9261527939102933, 3);
  sqcRZGate(q, 2.061596169736224, 3);
  sqcRYGate(q, -2.833522086056016, 4);
  sqcRZGate(q, 1.4293267826678275, 4);
  sqcRYGate(q, 1.3332383277286322, 5);
  sqcRZGate(q, -1.182039075974897, 5);
  sqcRYGate(q, -2.363062738034853, 6);
  sqcRZGate(q, 0.6726138041149786, 6);
  sqcRYGate(q, -2.2541340021456993, 7);
  sqcRZGate(q, -2.201624580529651, 7);
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
  sqcRYGate(q, -2.2462350240173157, 0);
  sqcRZGate(q, 0.21452770790477696, 0);
  sqcRYGate(q, -1.0394826966720276, 1);
  sqcRZGate(q, 0.5718919149202392, 1);
  sqcRYGate(q, 0.09367603758576326, 2);
  sqcRZGate(q, 0.783393193742823, 2);
  sqcRYGate(q, 0.1354411679514171, 3);
  sqcRZGate(q, -3.058961417974592, 3);
  sqcRYGate(q, -2.185766205795674, 4);
  sqcRZGate(q, -2.7500987729039004, 4);
  sqcRYGate(q, 1.3019166196622782, 5);
  sqcRZGate(q, 0.03169623851336656, 5);
  sqcRYGate(q, -0.42199072161114515, 6);
  sqcRZGate(q, -2.47556915885524, 6);
  sqcRYGate(q, -1.7630251317616747, 7);
  sqcRZGate(q, -0.2322562925264821, 7);
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
  sqcRYGate(q, -2.7776663299815025, 0);
  sqcRZGate(q, -0.6093369803715847, 0);
  sqcRYGate(q, 1.7045896209715758, 1);
  sqcRZGate(q, -1.6369798008732461, 1);
  sqcRYGate(q, -0.5872349572968911, 2);
  sqcRZGate(q, 1.1931821781065404, 2);
  sqcRYGate(q, 1.3235690848065738, 3);
  sqcRZGate(q, 0.14494709202445488, 3);
  sqcRYGate(q, 1.9924506553808, 4);
  sqcRZGate(q, 2.185878551482751, 4);
  sqcRYGate(q, -2.2393660324652513, 5);
  sqcRZGate(q, 2.8710438383987666, 5);
  sqcRYGate(q, -1.5854396408397342, 6);
  sqcRZGate(q, 1.5509439453771758, 6);
  sqcRYGate(q, 1.2803494314739323, 7);
  sqcRZGate(q, -0.5220674991525608, 7);
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
  sqcRYGate(q, 2.861900111529827, 0);
  sqcRZGate(q, -2.602899428222266, 0);
  sqcRYGate(q, 0.052665886767252694, 1);
  sqcRZGate(q, -1.5865905958581499, 1);
  sqcRYGate(q, 2.197595225675236, 2);
  sqcRZGate(q, 2.626584256215252, 2);
  sqcRYGate(q, -2.6512637458989685, 3);
  sqcRZGate(q, 0.9913703096525212, 3);
  sqcRYGate(q, 0.832600932369903, 4);
  sqcRZGate(q, -2.1758408801028457, 4);
  sqcRYGate(q, 2.882984402570929, 5);
  sqcRZGate(q, 2.116005408018882, 5);
  sqcRYGate(q, -1.0232742594683244, 6);
  sqcRZGate(q, 3.0998509424159884, 6);
  sqcRYGate(q, -2.967569082010779, 7);
  sqcRZGate(q, 0.782604456275494, 7);
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
  sqcRYGate(q, 1.6272016388921449, 0);
  sqcRZGate(q, -2.961916117592235, 0);
  sqcRYGate(q, -0.24563646661242175, 1);
  sqcRZGate(q, -0.2122010334199207, 1);
  sqcRYGate(q, 1.558138691850556, 2);
  sqcRZGate(q, -1.1054502373538053, 2);
  sqcRYGate(q, 1.4432665810557097, 3);
  sqcRZGate(q, -2.260551100656793, 3);
  sqcRYGate(q, 0.5529357271091948, 4);
  sqcRZGate(q, -1.175197780378463, 4);
  sqcRYGate(q, 2.2112239557758193, 5);
  sqcRZGate(q, -2.9211838530118084, 5);
  sqcRYGate(q, 0.553148683751493, 6);
  sqcRZGate(q, -0.7537815789405622, 6);
  sqcRYGate(q, -1.7348578552935272, 7);
  sqcRZGate(q, -2.2919124460510405, 7);
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
  sqcRYGate(q, 2.376643798203047, 0);
  sqcRZGate(q, -1.6440750536682596, 0);
  sqcRYGate(q, -0.6108471466674965, 1);
  sqcRZGate(q, 2.282191816566031, 1);
  sqcRYGate(q, -0.6660788445336275, 2);
  sqcRZGate(q, -0.3063158506338084, 2);
  sqcRYGate(q, -2.7636679029312337, 3);
  sqcRZGate(q, 0.3212998019423576, 3);
  sqcRYGate(q, 1.8594187362345789, 4);
  sqcRZGate(q, 1.8046571540226655, 4);
  sqcRYGate(q, -0.3573416804733178, 5);
  sqcRZGate(q, 0.1403729967676819, 5);
  sqcRYGate(q, -1.0474520400416647, 6);
  sqcRZGate(q, -0.16198046655054466, 6);
  sqcRYGate(q, 2.8343884045876884, 7);
  sqcRZGate(q, -1.5804523440552096, 7);
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
  sqcRYGate(q, 0.09655138894033842, 0);
  sqcRZGate(q, 2.8179979432761453, 0);
  sqcRYGate(q, 1.2686276554305176, 1);
  sqcRZGate(q, -0.3820747379664185, 1);
  sqcRYGate(q, -2.4137178847939254, 2);
  sqcRZGate(q, -1.7611038022983447, 2);
  sqcRYGate(q, -2.7812225165471105, 3);
  sqcRZGate(q, -2.044020920037857, 3);
  sqcRYGate(q, 1.1451677356686856, 4);
  sqcRZGate(q, 3.0538159518406216, 4);
  sqcRYGate(q, -1.9298301140000709, 5);
  sqcRZGate(q, 0.27821946549452997, 5);
  sqcRYGate(q, -0.8617716380023615, 6);
  sqcRZGate(q, -0.025769418447852743, 6);
  sqcRYGate(q, -2.411940561211995, 7);
  sqcRZGate(q, 0.7999583905473836, 7);
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
  sqcRYGate(q, 1.1335424435322716, 0);
  sqcRZGate(q, 2.43259396819937, 0);
  sqcRYGate(q, 2.8556444269633032, 1);
  sqcRZGate(q, -2.9967460662144636, 1);
  sqcRYGate(q, -2.8166137501054136, 2);
  sqcRZGate(q, -2.817109019347468, 2);
  sqcRYGate(q, -0.9209944451724438, 3);
  sqcRZGate(q, -0.2455844397310294, 3);
  sqcRYGate(q, 2.355068086963139, 4);
  sqcRZGate(q, 0.42908623898606546, 4);
  sqcRYGate(q, -1.7441665661487733, 5);
  sqcRZGate(q, -2.8792594837373358, 5);
  sqcRYGate(q, 3.0477468956312643, 6);
  sqcRZGate(q, 1.8532568949996648, 6);
  sqcRYGate(q, 0.5834895961213471, 7);
  sqcRZGate(q, 2.603083780416903, 7);

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
