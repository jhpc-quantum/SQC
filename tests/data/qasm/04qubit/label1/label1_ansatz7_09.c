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

  sqcRYGate(q, -2.0654282482868287, 0);
  sqcRYGate(q, 2.218737448832642, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7719620765100693, 0);
  sqcRYGate(q, 2.303958824536285, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.787295230692074, 0);
  sqcRYGate(q, 0.09368904899392129, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.311572580511569, 0);
  sqcRYGate(q, -0.03398926766942427, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1941972781887533, 0);
  sqcRYGate(q, 0.8480661208758288, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0342555778793234, 0);
  sqcRYGate(q, 1.223676321074036, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8590619481006927, 1);
  sqcRYGate(q, -0.4335984108465873, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10462691348345478, 1);
  sqcRYGate(q, 2.9251180589922274, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7902073702064687, 1);
  sqcRYGate(q, -2.7119471038394636, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.326575767742697, 1);
  sqcRYGate(q, 1.8779803888056028, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8981748434739774, 2);
  sqcRYGate(q, -1.3821206307363552, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7949385397994214, 2);
  sqcRYGate(q, 0.9552585111798411, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7758502747370906, 0);
  sqcRYGate(q, -2.842780864858812, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2494153526830978, 0);
  sqcRYGate(q, -2.7158677447042705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0518063530478123, 0);
  sqcRYGate(q, -0.4287125188953853, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6631209515377564, 0);
  sqcRYGate(q, -0.4954758278366656, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.676901759321424, 0);
  sqcRYGate(q, 2.44867755304183, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7666952457925384, 0);
  sqcRYGate(q, 2.6592221007856773, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3968797621002578, 1);
  sqcRYGate(q, 1.6381048178966433, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.38530892037824654, 1);
  sqcRYGate(q, -3.029789815102552, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.440025733680427, 1);
  sqcRYGate(q, 1.499897113760606, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1018717710287755, 1);
  sqcRYGate(q, 0.5237245424628328, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2446981306678353, 2);
  sqcRYGate(q, 0.5260329742186212, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2586728156615985, 2);
  sqcRYGate(q, 0.6941384057344688, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.887097091119796, 0);
  sqcRYGate(q, -0.5560297840322921, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8581380459184949, 0);
  sqcRYGate(q, -2.733648706742497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7277925882316785, 0);
  sqcRYGate(q, -0.9208357553759576, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.652752693772508, 0);
  sqcRYGate(q, 2.86380386682589, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1572023193000005, 0);
  sqcRYGate(q, -1.619690710004885, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.15863275606428065, 0);
  sqcRYGate(q, 1.7612866756270904, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2747046489861074, 1);
  sqcRYGate(q, -3.134131267813982, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1363525781253987, 1);
  sqcRYGate(q, 2.586168912059593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1368569432664906, 1);
  sqcRYGate(q, 2.2242828394002223, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1631236170085515, 1);
  sqcRYGate(q, 0.49839990767567455, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2701544283088384, 2);
  sqcRYGate(q, 2.228572347751655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3959557298777954, 2);
  sqcRYGate(q, -1.5479988499845312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.716771180217136, 0);
  sqcRYGate(q, -1.3145338005338507, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2657726554599844, 0);
  sqcRYGate(q, -0.8276302254778238, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.461990996468773, 0);
  sqcRYGate(q, -0.5573522255377705, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4024542338012076, 0);
  sqcRYGate(q, 0.06772491222709398, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.111952722524695, 0);
  sqcRYGate(q, 1.6039840629345743, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1883358214367634, 0);
  sqcRYGate(q, 2.7108960286859123, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8630128324295803, 1);
  sqcRYGate(q, 1.4134636722674014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.216557139355954, 1);
  sqcRYGate(q, -0.6742446845631882, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5968358065378752, 1);
  sqcRYGate(q, 2.7317142211799825, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2739326490701517, 1);
  sqcRYGate(q, -0.004717855566289231, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9611448121313697, 2);
  sqcRYGate(q, -1.6267005330832465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.610302885393419, 2);
  sqcRYGate(q, -1.7129335755110555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0730871387826986, 0);
  sqcRYGate(q, 2.8748210966533407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9899856823046402, 0);
  sqcRYGate(q, 0.0834470182281084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0323620297284553, 0);
  sqcRYGate(q, -2.9750722435822325, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.26827361118252474, 0);
  sqcRYGate(q, 2.087100217246541, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.106078342314442, 0);
  sqcRYGate(q, -0.45535239215435364, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8763558322129343, 0);
  sqcRYGate(q, 1.4515131483994912, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.15635370760431133, 1);
  sqcRYGate(q, -3.0987481937257346, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.952822884713716, 1);
  sqcRYGate(q, -0.9296337481924121, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.217275759203134, 1);
  sqcRYGate(q, 0.2643697133257348, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2821167194557184, 1);
  sqcRYGate(q, -2.128690378393136, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4700459953033942, 2);
  sqcRYGate(q, 1.3116806371004717, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6722587220905334, 2);
  sqcRYGate(q, -0.3778155276858086, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.833697922716608, 0);
  sqcRYGate(q, -1.6397928211384443, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.466439283011408, 0);
  sqcRYGate(q, -0.10627905707326947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5173263181629837, 0);
  sqcRYGate(q, -2.7956405084776623, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.862124354818331, 0);
  sqcRYGate(q, 2.6779237505839877, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1315925402111127, 0);
  sqcRYGate(q, -0.4196938492877192, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8458817174495603, 0);
  sqcRYGate(q, -1.4729238803263194, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.59668166616079, 1);
  sqcRYGate(q, 0.7372078088166302, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6029533898700522, 1);
  sqcRYGate(q, -2.6838286943163383, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.06324986167888991, 1);
  sqcRYGate(q, 1.079121223820667, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1954522463423176, 1);
  sqcRYGate(q, 1.6610803592110692, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0034397517910003, 2);
  sqcRYGate(q, -1.2317715340675972, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.117184080749153, 2);
  sqcRYGate(q, -1.2477491110217689, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0241347905483034, 0);
  sqcRYGate(q, -2.2832938180363955, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.705151911627138, 0);
  sqcRYGate(q, 0.5343280995640115, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6495471968817448, 0);
  sqcRYGate(q, 0.21130303037847864, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0299015064836041, 0);
  sqcRYGate(q, 3.0647670563877534, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.43935301873528926, 0);
  sqcRYGate(q, -2.3994997219846925, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.23716777879721251, 0);
  sqcRYGate(q, 0.8592899078678087, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3102945642478392, 1);
  sqcRYGate(q, 2.8833542837131665, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4810468423991026, 1);
  sqcRYGate(q, -3.0226055378440115, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0702524892459355, 1);
  sqcRYGate(q, -1.234297938854791, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0230711018835248, 1);
  sqcRYGate(q, -0.7751544429531946, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8074201684242386, 2);
  sqcRYGate(q, 0.252544102067894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.05917205753080257, 2);
  sqcRYGate(q, 2.3010251903411123, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7078986096731876, 0);
  sqcRYGate(q, 0.9481667129365616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7870897231554373, 0);
  sqcRYGate(q, -1.8501119758001088, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.390263547049681, 0);
  sqcRYGate(q, 3.1177819497520063, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5661357707341903, 0);
  sqcRYGate(q, -1.58934054877588, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5580080129865586, 0);
  sqcRYGate(q, 1.2387683796480256, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7538108094416947, 0);
  sqcRYGate(q, 1.5920614882159292, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.895529293574168, 1);
  sqcRYGate(q, -1.2118692239465485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1837917899456074, 1);
  sqcRYGate(q, 2.7152423619482096, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6548935986668712, 1);
  sqcRYGate(q, -3.0874362263770183, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.944055677027566, 1);
  sqcRYGate(q, -1.5107067404849697, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.889249649844104, 2);
  sqcRYGate(q, -0.6088842090310695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1617411831447697, 2);
  sqcRYGate(q, -0.041365235393937994, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.689962092794829, 0);
  sqcRYGate(q, -2.957278521706612, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5967543230577306, 0);
  sqcRYGate(q, -0.2819701530087473, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2278298606616973, 0);
  sqcRYGate(q, -0.7910536166101919, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7355844934109816, 0);
  sqcRYGate(q, -1.8434159027994248, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5001003400510333, 0);
  sqcRYGate(q, 0.8576556481264213, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9298357602943995, 0);
  sqcRYGate(q, 1.9286821082435432, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9709091250117208, 1);
  sqcRYGate(q, -3.063291554746552, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8862348375294458, 1);
  sqcRYGate(q, 1.6893722662216086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3371688589462538, 1);
  sqcRYGate(q, -1.7567978898673873, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1839043362375246, 1);
  sqcRYGate(q, -2.6169138244849024, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6634382274481925, 2);
  sqcRYGate(q, -2.7006633472982755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.369313021159818, 2);
  sqcRYGate(q, -3.1387916354614065, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.12353689670923007, 0);
  sqcRYGate(q, 1.207424719783548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6997612493050279, 0);
  sqcRYGate(q, 2.946570100612893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1509084474009375, 0);
  sqcRYGate(q, -1.3495628117316534, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9567488895338339, 0);
  sqcRYGate(q, -1.5380186446575452, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1473944299069163, 0);
  sqcRYGate(q, 1.1810312667499576, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0966942851871466, 0);
  sqcRYGate(q, 0.4938375168992124, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.1409038785821244, 1);
  sqcRYGate(q, 1.1688046974180777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0287035252256547, 1);
  sqcRYGate(q, -2.6857740057046446, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6224998258728709, 1);
  sqcRYGate(q, 1.2640918578714615, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1137816356619585, 1);
  sqcRYGate(q, 1.2945988002542996, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7382559677620356, 2);
  sqcRYGate(q, -0.19086764508303541, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.017358766748479068, 2);
  sqcRYGate(q, -1.2303556269078026, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.145277902072249, 0);
  sqcRYGate(q, -1.9050230462276523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2715424720020616, 0);
  sqcRYGate(q, 0.08824427755611454, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4665116417126622, 0);
  sqcRYGate(q, 0.35309319290749297, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.017080584729291637, 0);
  sqcRYGate(q, 0.2649548034667424, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2494114344565508, 0);
  sqcRYGate(q, -0.018095912890337292, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7790099458686317, 0);
  sqcRYGate(q, -2.736823969913605, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0526603180937908, 1);
  sqcRYGate(q, 2.719666665657268, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1425460234934102, 1);
  sqcRYGate(q, 0.5443577190513831, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5295245333869785, 1);
  sqcRYGate(q, 1.9648362049084414, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2378086723833734, 1);
  sqcRYGate(q, -2.760066035434365, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.680297711886136, 2);
  sqcRYGate(q, -2.2540035788440482, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.308550505480354, 2);
  sqcRYGate(q, 1.306040940629412, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8387892079537154, 0);
  sqcRYGate(q, -1.3725900071847708, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3962453788765217, 0);
  sqcRYGate(q, 0.3605323025934207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3025016815544757, 0);
  sqcRYGate(q, 2.717984600194693, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.060353336579764, 0);
  sqcRYGate(q, 1.3501341043044428, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9956724229029783, 0);
  sqcRYGate(q, -1.3504757262607425, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1322998726592364, 0);
  sqcRYGate(q, 1.6575666048148852, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.543662620886546, 1);
  sqcRYGate(q, -2.247412561930687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.118873724677603, 1);
  sqcRYGate(q, 0.8080644047166736, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9227190382578402, 1);
  sqcRYGate(q, -1.5674939537719386, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8731926243829573, 1);
  sqcRYGate(q, -1.6257265136141772, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5351272127167035, 2);
  sqcRYGate(q, 1.2749415954911583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.869303655290481, 2);
  sqcRYGate(q, 0.14506671281905312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5293145225256568, 0);
  sqcRYGate(q, 1.9524437532200063, 1);
  sqcRYGate(q, 2.3174436875277786, 2);
  sqcRYGate(q, 0.21585970457889037, 3);

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
