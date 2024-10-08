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

  sqcRYGate(q, -1.1536754819753252, 0);
  sqcRYGate(q, -2.7546857339999598, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04557480753747711, 0);
  sqcRYGate(q, -2.2948089141299506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2770060765629889, 0);
  sqcRYGate(q, 1.0742896800099935, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1686806078979068, 0);
  sqcRYGate(q, 0.8384446695517704, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6818822536318843, 0);
  sqcRYGate(q, -2.799080329037413, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7738591878691436, 0);
  sqcRYGate(q, 0.5857457637347782, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5323185274885708, 1);
  sqcRYGate(q, -2.7534234617757063, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1140242473584039, 1);
  sqcRYGate(q, -3.026133210053889, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8204341937896951, 1);
  sqcRYGate(q, -1.6419187364475305, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0906015271405733, 1);
  sqcRYGate(q, 1.245273199706223, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.11765945103216, 2);
  sqcRYGate(q, 0.8325786725863036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.024134909834755, 2);
  sqcRYGate(q, 1.754763401257387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.590513440558146, 0);
  sqcRYGate(q, 1.851216472709032, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4105680037398285, 0);
  sqcRYGate(q, 1.701808466602638, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2223529553493668, 0);
  sqcRYGate(q, -1.8943177095380224, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.569504776901869, 0);
  sqcRYGate(q, 0.278075982711262, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2963431785960013, 0);
  sqcRYGate(q, -2.525689060926725, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.027200468004274, 0);
  sqcRYGate(q, -1.9554857359893907, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.933842450020337, 1);
  sqcRYGate(q, 0.6378387005709661, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.623553285110285, 1);
  sqcRYGate(q, -1.536788963579329, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7746603730514687, 1);
  sqcRYGate(q, 0.6212196490378363, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3417427326318778, 1);
  sqcRYGate(q, 1.6349942755950635, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1054216689895906, 2);
  sqcRYGate(q, -2.72483511578495, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5551800568137564, 2);
  sqcRYGate(q, 1.4753879788385147, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9479652687770468, 0);
  sqcRYGate(q, 2.5135552268192645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6757356380940454, 0);
  sqcRYGate(q, -2.016975017744946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6252163194129701, 0);
  sqcRYGate(q, 0.24859809786157533, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1304609095704783, 0);
  sqcRYGate(q, 1.2459172960629354, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.05756671139730733, 0);
  sqcRYGate(q, 3.048471136817953, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0380042597364183, 0);
  sqcRYGate(q, -2.9612177961352555, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2540033466369005, 1);
  sqcRYGate(q, -0.885747094763107, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.041925632679996, 1);
  sqcRYGate(q, -2.4221128810450088, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8282024937999966, 1);
  sqcRYGate(q, -0.8300481575806726, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2498693677992962, 1);
  sqcRYGate(q, -1.8463262720984766, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7253320273073016, 2);
  sqcRYGate(q, -2.4340796432116423, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.105537567610596, 2);
  sqcRYGate(q, 0.985901738837988, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7347635504273824, 0);
  sqcRYGate(q, -2.4108827715872354, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9140518285326723, 0);
  sqcRYGate(q, -1.7319189137933177, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4255440265900798, 0);
  sqcRYGate(q, 0.37332310465461566, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.265840819659428, 0);
  sqcRYGate(q, 0.7337618554892265, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5675308867887727, 0);
  sqcRYGate(q, 0.2474744714929331, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0337789786552352, 0);
  sqcRYGate(q, -1.2381366700004017, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.40645463527402725, 1);
  sqcRYGate(q, 1.9444739266571784, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.725869589800477, 1);
  sqcRYGate(q, -2.0368370690798736, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4173045082504627, 1);
  sqcRYGate(q, 2.9573626341246806, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5584065674289775, 1);
  sqcRYGate(q, -1.3607527075026118, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4276800850786673, 2);
  sqcRYGate(q, -1.65338037721071, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4785698049909168, 2);
  sqcRYGate(q, 1.8055550953070327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.443942839297309, 0);
  sqcRYGate(q, -3.0107421959163845, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6539299272565584, 0);
  sqcRYGate(q, -0.10659700456161902, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5158944519375304, 0);
  sqcRYGate(q, 0.9635470432899381, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6772497479455741, 0);
  sqcRYGate(q, -1.4481255047955401, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4985131044836395, 0);
  sqcRYGate(q, 2.1076384130122774, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.949353216979049, 0);
  sqcRYGate(q, -1.7899952057309128, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.03961588794451565, 1);
  sqcRYGate(q, 2.5541716267737398, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9679922438890882, 1);
  sqcRYGate(q, -2.673296475921049, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5360397909498267, 1);
  sqcRYGate(q, 0.865523717442116, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7495322738839034, 1);
  sqcRYGate(q, 1.2735598292417116, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9580116600423878, 2);
  sqcRYGate(q, 2.066323499090241, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4148468571551804, 2);
  sqcRYGate(q, -1.09433106406855, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9733853521948284, 0);
  sqcRYGate(q, -1.1382774926454682, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7387666196605043, 0);
  sqcRYGate(q, -3.1252973817783367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3657107256205347, 0);
  sqcRYGate(q, -1.0980274212973797, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.33249829855584556, 0);
  sqcRYGate(q, -2.9920895765574653, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0258010275457936, 0);
  sqcRYGate(q, -1.2808285189004776, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1949649700096883, 0);
  sqcRYGate(q, -2.8361145129852, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.08559899350824907, 1);
  sqcRYGate(q, 0.9874635935303351, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10221697791950046, 1);
  sqcRYGate(q, 2.1125975766483718, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.616164176233149, 1);
  sqcRYGate(q, -2.9354079662745995, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.41057643058793386, 1);
  sqcRYGate(q, -0.09176507678901971, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.239261360988234, 2);
  sqcRYGate(q, -2.3027449774636666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6698088567406616, 2);
  sqcRYGate(q, -0.12285417175102699, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0612035686826458, 0);
  sqcRYGate(q, 0.7875311308956955, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04753642002316916, 0);
  sqcRYGate(q, -1.947263996746688, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.838193196868252, 0);
  sqcRYGate(q, -2.2051021839932963, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0514716814801317, 0);
  sqcRYGate(q, -0.9323409903036823, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.005723280533065, 0);
  sqcRYGate(q, -1.0295512825802933, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3281164818122106, 0);
  sqcRYGate(q, -3.074001330737254, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9397635389744465, 1);
  sqcRYGate(q, -3.126723473333479, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4454376731530216, 1);
  sqcRYGate(q, -2.888413148435031, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.278789315887453, 1);
  sqcRYGate(q, -1.9915100054235741, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.029143376589487, 1);
  sqcRYGate(q, 0.9223145656004723, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3619772302404272, 2);
  sqcRYGate(q, -2.7307900253995983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3180662866270119, 2);
  sqcRYGate(q, 1.3043374008175141, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1939289731694416, 0);
  sqcRYGate(q, -2.7720568386357733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7008947417660764, 0);
  sqcRYGate(q, 0.7608204247007055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0553196382425662, 0);
  sqcRYGate(q, 1.0970203824423759, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6147342606270325, 0);
  sqcRYGate(q, 1.849332614621296, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.204087317891738, 0);
  sqcRYGate(q, 0.30268022898052305, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6400314429336411, 0);
  sqcRYGate(q, 2.0716358189866817, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8258370616860362, 1);
  sqcRYGate(q, -3.014697410108204, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0723246523525023, 1);
  sqcRYGate(q, 0.8886878555353936, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.20075490749127575, 1);
  sqcRYGate(q, -1.6694029786888638, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6211654033397648, 1);
  sqcRYGate(q, 0.14862299843397864, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8070287384922006, 2);
  sqcRYGate(q, -1.2179661686696361, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.420822747112379, 2);
  sqcRYGate(q, 2.938463469042558, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0676164763292268, 0);
  sqcRYGate(q, 0.3060974019104216, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2652369742394, 0);
  sqcRYGate(q, -0.4131482963463933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.195102233232827, 0);
  sqcRYGate(q, 1.3313914962085085, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.023478039818995, 0);
  sqcRYGate(q, 2.694883119147375, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.34849086826142617, 0);
  sqcRYGate(q, -2.807692163431425, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8056718669696115, 0);
  sqcRYGate(q, 0.8077373065560502, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5706366921692894, 1);
  sqcRYGate(q, -0.8313224770426455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.321418836442427, 1);
  sqcRYGate(q, 1.8394000467186593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4023028917077907, 1);
  sqcRYGate(q, -0.7227509057152346, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1369177467746496, 1);
  sqcRYGate(q, -2.6347027964600573, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.747457569100809, 2);
  sqcRYGate(q, -2.4449624941075854, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7709886550713005, 2);
  sqcRYGate(q, -1.0364858069623508, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9564612691415721, 0);
  sqcRYGate(q, 2.8532799529864366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.082169066540193, 0);
  sqcRYGate(q, 1.0992547865766689, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3815578102089416, 0);
  sqcRYGate(q, 1.5334966666749157, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.250261174178263, 0);
  sqcRYGate(q, 0.1434723436726493, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7735381912358044, 0);
  sqcRYGate(q, -2.0428655121772774, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.885243448537583, 0);
  sqcRYGate(q, 2.445164141283869, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7218754840733732, 1);
  sqcRYGate(q, -2.4395246579307455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.255178100156328, 1);
  sqcRYGate(q, -1.2599455122294918, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.802870153081129, 1);
  sqcRYGate(q, 2.5809758121321456, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.296375875420153, 1);
  sqcRYGate(q, -3.049022764619407, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.972060280927798, 2);
  sqcRYGate(q, -2.558502920601689, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5856613910661492, 2);
  sqcRYGate(q, 1.829278497786442, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7836581384977759, 0);
  sqcRYGate(q, -0.8056537797498899, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.852326333427662, 0);
  sqcRYGate(q, 0.7052046727093186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0503656465494267, 0);
  sqcRYGate(q, -0.26378506570584753, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6454232742316481, 0);
  sqcRYGate(q, 0.6513316469278356, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6897472062253158, 0);
  sqcRYGate(q, -2.0303704760473757, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7418332980445648, 0);
  sqcRYGate(q, 1.6126826201842972, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1118594066660274, 1);
  sqcRYGate(q, 0.8053036059359053, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5003766567779965, 1);
  sqcRYGate(q, -0.5808631787882339, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.714447459092737, 1);
  sqcRYGate(q, -1.857965975078681, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.16534804456467256, 1);
  sqcRYGate(q, -1.1345561451314081, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0833906598323138, 2);
  sqcRYGate(q, -2.984728536457268, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0674197812117567, 2);
  sqcRYGate(q, 1.9842321083301018, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6214384388183114, 0);
  sqcRYGate(q, -0.7411898479149137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7278421057818885, 0);
  sqcRYGate(q, 0.9908651973213336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5584087802413435, 0);
  sqcRYGate(q, -1.378892675356313, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3866011376010896, 0);
  sqcRYGate(q, -0.11201101950427095, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.009359874120445, 0);
  sqcRYGate(q, -1.8705725984638706, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4003633633295394, 0);
  sqcRYGate(q, 1.9358913725048605, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.251217484576206, 1);
  sqcRYGate(q, -2.539445419385484, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0421700305691832, 1);
  sqcRYGate(q, 0.2530765796685748, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8657381182337687, 1);
  sqcRYGate(q, -2.6748238323680957, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.006510711680533632, 1);
  sqcRYGate(q, 0.08865971477613144, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1464390792821098, 2);
  sqcRYGate(q, -1.0569477867747312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6101709229256534, 2);
  sqcRYGate(q, -1.951337228382208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3949710618721805, 0);
  sqcRYGate(q, 1.3304501851814183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8937906777218076, 0);
  sqcRYGate(q, -2.747157663777373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7841562622001472, 0);
  sqcRYGate(q, 2.7525523486076895, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1591580835153725, 0);
  sqcRYGate(q, -2.506292063308031, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.183396113600001, 0);
  sqcRYGate(q, -0.5999696258951852, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8224590891973125, 0);
  sqcRYGate(q, 1.1146767413853385, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.881593488203905, 1);
  sqcRYGate(q, -2.3227421605899714, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9266092517527014, 1);
  sqcRYGate(q, -1.1748037213148566, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3491710634825527, 1);
  sqcRYGate(q, -2.3696074985556765, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.826169153310532, 1);
  sqcRYGate(q, 0.777665825003538, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.31569136627824, 2);
  sqcRYGate(q, 1.4678379245981832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5269044654452193, 2);
  sqcRYGate(q, -1.226376322947555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1119803839206215, 0);
  sqcRYGate(q, -0.8016170140640424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5875541162046966, 0);
  sqcRYGate(q, 1.3521379540013179, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9699376004957707, 0);
  sqcRYGate(q, -0.9630778434106698, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.869938587140556, 0);
  sqcRYGate(q, 1.9415870455260391, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.046550388315835, 0);
  sqcRYGate(q, -2.015942616872998, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2733983034835203, 0);
  sqcRYGate(q, 0.7343248902255533, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.0023183396326071914, 1);
  sqcRYGate(q, -1.7188971455667206, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8439830009746734, 1);
  sqcRYGate(q, -1.5748328778110272, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8270306385892381, 1);
  sqcRYGate(q, 1.886180132507552, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.30765446291388887, 1);
  sqcRYGate(q, 0.43148359240010414, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7897806625208847, 2);
  sqcRYGate(q, -1.5871814691961474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4437821445275572, 2);
  sqcRYGate(q, -0.911724691216922, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9191228470386852, 0);
  sqcRYGate(q, -0.8925013897690404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.964404402096057, 0);
  sqcRYGate(q, -2.0924930023329775, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.25652521318331706, 0);
  sqcRYGate(q, -0.141753048761296, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.07221457203084646, 0);
  sqcRYGate(q, 0.153478319828496, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8942651112941957, 0);
  sqcRYGate(q, -0.5295748429825771, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.970889255103619, 0);
  sqcRYGate(q, -1.0390621167760337, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4293831254081035, 1);
  sqcRYGate(q, -2.4773286333733586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.08400968514943052, 1);
  sqcRYGate(q, -0.7572733630250343, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7459216196979108, 1);
  sqcRYGate(q, 0.3951744365667146, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.651508238404186, 1);
  sqcRYGate(q, 2.252449335621302, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8783743714579471, 2);
  sqcRYGate(q, 1.6090848153776438, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7639369158082684, 2);
  sqcRYGate(q, 0.4642436467321973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.728673614993185, 0);
  sqcRYGate(q, 2.700329715710779, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4092739672703658, 0);
  sqcRYGate(q, 2.696803598387335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1715600292802923, 0);
  sqcRYGate(q, 1.4451191587196535, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9273660216739268, 0);
  sqcRYGate(q, -2.4873773865401825, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8756138234775741, 0);
  sqcRYGate(q, -2.774643115484606, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4185988105340237, 0);
  sqcRYGate(q, -0.8260729645031939, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.1054333843554187, 1);
  sqcRYGate(q, -1.331805648324478, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.49104630159340523, 1);
  sqcRYGate(q, -2.1907508009079524, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.550366306443479, 1);
  sqcRYGate(q, -1.3458187313218133, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.051444167745838, 1);
  sqcRYGate(q, 0.10596507302500147, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.19502178495395306, 2);
  sqcRYGate(q, -0.9877586308493517, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4038191578584207, 2);
  sqcRYGate(q, 1.8173295719161748, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6055990050612099, 0);
  sqcRYGate(q, -1.2905338987838773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.128579343820806, 0);
  sqcRYGate(q, 2.090850556263721, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6534087619282403, 0);
  sqcRYGate(q, 2.8283800926434552, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8132011102778773, 0);
  sqcRYGate(q, -1.0145392481141426, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1974350370541025, 0);
  sqcRYGate(q, 2.0691916340206173, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9619996612433552, 0);
  sqcRYGate(q, -1.6624142814196483, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.164038208266298, 1);
  sqcRYGate(q, -1.5311148981747311, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9848116497227644, 1);
  sqcRYGate(q, -2.0015146096075362, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2316753538422865, 1);
  sqcRYGate(q, -2.082046558635434, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4830364110839471, 1);
  sqcRYGate(q, 1.2320613953690067, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4461223808095287, 2);
  sqcRYGate(q, 2.519785008387465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.926001644031824, 2);
  sqcRYGate(q, 1.9238422729680869, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.710302427285721, 0);
  sqcRYGate(q, -3.077254311436573, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0921246235655087, 0);
  sqcRYGate(q, -3.113883284452188, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8388156680002227, 0);
  sqcRYGate(q, -3.1028360398808243, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.32766162209722965, 0);
  sqcRYGate(q, -0.6958062319542826, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5516980020124411, 0);
  sqcRYGate(q, -1.5567454802682619, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7029646904822378, 0);
  sqcRYGate(q, 0.06019640455033659, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7540172803581529, 1);
  sqcRYGate(q, 1.2644160866525114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.737392562966907, 1);
  sqcRYGate(q, 2.6646874669602933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4138213891815772, 1);
  sqcRYGate(q, -1.1667439224523086, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6319141146468, 1);
  sqcRYGate(q, 1.4410999122908628, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4191643575869173, 2);
  sqcRYGate(q, 0.44366530613607114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0850851613006958, 2);
  sqcRYGate(q, 1.2686229846812713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6232077813344492, 0);
  sqcRYGate(q, -2.108411291077482, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3396183517571014, 0);
  sqcRYGate(q, -2.3666763106873994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4604783494255535, 0);
  sqcRYGate(q, 2.5694937048854425, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1676254620603723, 0);
  sqcRYGate(q, 1.2784362213733038, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.355898554103367, 0);
  sqcRYGate(q, 0.9676933615299061, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7528076780070239, 0);
  sqcRYGate(q, -0.10016651868711346, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1217247168051987, 1);
  sqcRYGate(q, 0.07935880113582883, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1308571181867375, 1);
  sqcRYGate(q, -0.9342850417696226, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08639407537206023, 1);
  sqcRYGate(q, 2.622876092759987, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3781553883701396, 1);
  sqcRYGate(q, -1.5540873087865013, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8027323601653635, 2);
  sqcRYGate(q, -0.873433396036262, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.797525519732381, 2);
  sqcRYGate(q, -2.631228633423496, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2288967643778199, 0);
  sqcRYGate(q, 0.585436692738826, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1738925491231025, 0);
  sqcRYGate(q, 1.128687393550159, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.97553078795649, 0);
  sqcRYGate(q, 1.3480567182787757, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3333942337634115, 0);
  sqcRYGate(q, 1.594759001828163, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6473984218387112, 0);
  sqcRYGate(q, 2.8281267000304537, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9753325828700322, 0);
  sqcRYGate(q, -2.596219044422648, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6775524518213802, 1);
  sqcRYGate(q, 2.4648765742147942, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5477627017828197, 1);
  sqcRYGate(q, -0.6186307270808422, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.34902254867416005, 1);
  sqcRYGate(q, 1.512623122098713, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8910483426875038, 1);
  sqcRYGate(q, -1.1710626464992266, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1212092946082164, 2);
  sqcRYGate(q, -1.2537927295071043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.830600616926007, 2);
  sqcRYGate(q, -1.2312089605526786, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0700602167299877, 0);
  sqcRYGate(q, -0.10998399748326369, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4396604377915194, 0);
  sqcRYGate(q, -3.0551783403451283, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.41463152874070364, 0);
  sqcRYGate(q, 3.084952370799505, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2019356371953536, 0);
  sqcRYGate(q, -0.597804827800025, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6292586768489956, 0);
  sqcRYGate(q, 0.40335078895606014, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.06314998551336874, 0);
  sqcRYGate(q, 3.108665574626188, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8186476899935309, 1);
  sqcRYGate(q, 1.0833191135710027, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6425039894136626, 1);
  sqcRYGate(q, -0.9401740141444593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8828378180523854, 1);
  sqcRYGate(q, 1.1188541259472338, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.484765209631807, 1);
  sqcRYGate(q, 2.3752388252920267, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1302086710517538, 2);
  sqcRYGate(q, 1.1595760021753014, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6442177263969606, 2);
  sqcRYGate(q, 2.3699671671944507, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6516032814501678, 0);
  sqcRYGate(q, 2.8378711057734405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2287828888946866, 0);
  sqcRYGate(q, -0.6065272164924851, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.117412016551048, 0);
  sqcRYGate(q, -1.2883267163617684, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5116510407391637, 0);
  sqcRYGate(q, -1.9496532074451132, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8494050416227941, 0);
  sqcRYGate(q, 2.972933871888661, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9674085000941863, 0);
  sqcRYGate(q, 0.20392499976645165, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.09574985706638181, 1);
  sqcRYGate(q, 2.7040711810127593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9756835333257667, 1);
  sqcRYGate(q, 3.1346920048076257, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2405829798568444, 1);
  sqcRYGate(q, 1.5709999224750586, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.077613498236931, 1);
  sqcRYGate(q, -1.1294312799868935, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7877735899055853, 2);
  sqcRYGate(q, -2.0238937263594745, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.936426613024468, 2);
  sqcRYGate(q, 0.694598333307658, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3592196809028587, 0);
  sqcRYGate(q, -0.3621217393642668, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0581021600582243, 0);
  sqcRYGate(q, 2.319911357790737, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5007345393083646, 0);
  sqcRYGate(q, 2.0967739370238228, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1721683944318164, 0);
  sqcRYGate(q, -1.03768092933188, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.678440740044522, 0);
  sqcRYGate(q, 1.9172046102921876, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.1644867318211869, 0);
  sqcRYGate(q, -3.0998621215103683, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8497994529524595, 1);
  sqcRYGate(q, 3.0703698676790125, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7268777175835757, 1);
  sqcRYGate(q, 1.119276571278509, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.28303829549448434, 1);
  sqcRYGate(q, -0.7052335208079444, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5938341647477077, 1);
  sqcRYGate(q, -1.533254157613813, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7374628996772703, 2);
  sqcRYGate(q, 0.3189337523621507, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.46756398857449744, 2);
  sqcRYGate(q, 1.3003948986564062, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8160564027754054, 0);
  sqcRYGate(q, 1.952802685754146, 1);
  sqcRYGate(q, 1.567946476871101, 2);
  sqcRYGate(q, 1.9641236265015545, 3);

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
