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

  sqcRYGate(q, 2.7503612266853534, 0);
  sqcRZGate(q, 2.948842174653023, 0);
  sqcRYGate(q, 2.3905564218767896, 1);
  sqcRZGate(q, -0.04370380330240487, 1);
  sqcRYGate(q, 3.137869390380656, 2);
  sqcRZGate(q, -0.29063907126415334, 2);
  sqcRYGate(q, -3.021046395169021, 3);
  sqcRZGate(q, 1.069644105040818, 3);
  sqcRYGate(q, 0.0013352038798284185, 4);
  sqcRZGate(q, 0.9030764991028436, 4);
  sqcRYGate(q, 0.07801570738370521, 5);
  sqcRZGate(q, 0.08041236373906269, 5);
  sqcRYGate(q, -0.029337739646243418, 6);
  sqcRZGate(q, -2.1019289370973975, 6);
  sqcRYGate(q, 2.5531275636577857, 7);
  sqcRZGate(q, 1.7408944192403657, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.952776180414959, 0);
  sqcRZGate(q, -1.8113145961974406, 0);
  sqcRYGate(q, 2.678384700139986, 1);
  sqcRZGate(q, 3.0693864263183195, 1);
  sqcRYGate(q, 0.0017995462549391455, 2);
  sqcRZGate(q, -1.8869303180578156, 2);
  sqcRYGate(q, -2.7689958684768268, 3);
  sqcRZGate(q, 2.789439259554888, 3);
  sqcRYGate(q, 0.035204600600387076, 4);
  sqcRZGate(q, -1.4879942686397403, 4);
  sqcRYGate(q, -0.06332816809578753, 5);
  sqcRZGate(q, 2.9613792115081496, 5);
  sqcRYGate(q, -0.6555100103378066, 6);
  sqcRZGate(q, -2.3835946122191345, 6);
  sqcRYGate(q, 0.6568104268398316, 7);
  sqcRZGate(q, -2.285395510103066, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.202052172031265, 0);
  sqcRZGate(q, 2.15166761606812, 0);
  sqcRYGate(q, 1.1095320413315797, 1);
  sqcRZGate(q, -1.3035472336534017, 1);
  sqcRYGate(q, -0.18983915677252394, 2);
  sqcRZGate(q, 2.254470857539671, 2);
  sqcRYGate(q, -2.133687769642587, 3);
  sqcRZGate(q, 1.5964175338127993, 3);
  sqcRYGate(q, 3.1282694732904006, 4);
  sqcRZGate(q, -2.7530638922395805, 4);
  sqcRYGate(q, -0.8400618621526099, 5);
  sqcRZGate(q, 1.2430646278724815, 5);
  sqcRYGate(q, -0.04945270680742553, 6);
  sqcRZGate(q, 1.5471564752950737, 6);
  sqcRYGate(q, 1.4285876420791908, 7);
  sqcRZGate(q, 2.4661808837452384, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.391388802188207, 0);
  sqcRZGate(q, 3.1127283434930817, 0);
  sqcRYGate(q, 3.1237527964031675, 1);
  sqcRZGate(q, 2.120055508994777, 1);
  sqcRYGate(q, 3.133084319504059, 2);
  sqcRZGate(q, -0.659608901373586, 2);
  sqcRYGate(q, -2.996596397323265, 3);
  sqcRZGate(q, -2.9063795185137526, 3);
  sqcRYGate(q, -1.2359362174209203, 4);
  sqcRZGate(q, -0.8140649001534914, 4);
  sqcRYGate(q, -0.010688935650694157, 5);
  sqcRZGate(q, -2.718848059377951, 5);
  sqcRYGate(q, -3.139795298554633, 6);
  sqcRZGate(q, 2.8707804583530123, 6);
  sqcRYGate(q, 2.0668919664475105, 7);
  sqcRZGate(q, -1.8158412427384674, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4805234849929194, 0);
  sqcRZGate(q, -1.8491024553114006, 0);
  sqcRYGate(q, 3.04557075696061, 1);
  sqcRZGate(q, 1.1071998647549668, 1);
  sqcRYGate(q, -0.3340987757941432, 2);
  sqcRZGate(q, 1.231417325299108, 2);
  sqcRYGate(q, -2.2732163616547454, 3);
  sqcRZGate(q, 1.545189301049986, 3);
  sqcRYGate(q, 1.0894154294607432, 4);
  sqcRZGate(q, 3.1166712894603945, 4);
  sqcRYGate(q, 3.1178099162868773, 5);
  sqcRZGate(q, -1.8491381638189237, 5);
  sqcRYGate(q, -0.7067488376444645, 6);
  sqcRZGate(q, -1.246887627614254, 6);
  sqcRYGate(q, -0.8089916695727699, 7);
  sqcRZGate(q, -0.8653484214596228, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4061603788137065, 0);
  sqcRZGate(q, -1.0426455487201638, 0);
  sqcRYGate(q, 0.0036792813862778218, 1);
  sqcRZGate(q, -1.860641544220128, 1);
  sqcRYGate(q, 1.319425602963471, 2);
  sqcRZGate(q, -0.15767656788828607, 2);
  sqcRYGate(q, 3.1374722067957883, 3);
  sqcRZGate(q, -1.918589663219518, 3);
  sqcRYGate(q, 1.9445809725849186, 4);
  sqcRZGate(q, -2.4344818346467814, 4);
  sqcRYGate(q, -1.7625717857688097, 5);
  sqcRZGate(q, 2.035114205446148, 5);
  sqcRYGate(q, 0.00886753019544968, 6);
  sqcRZGate(q, -2.1504697092903453, 6);
  sqcRYGate(q, -0.658459467693538, 7);
  sqcRZGate(q, 2.3425585353877225, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7517686222709203, 0);
  sqcRZGate(q, -1.9852881812274523, 0);
  sqcRYGate(q, -3.1415301371566224, 1);
  sqcRZGate(q, -0.3678583220159957, 1);
  sqcRYGate(q, -0.41444773061846796, 2);
  sqcRZGate(q, 0.83537602994364, 2);
  sqcRYGate(q, -2.3949528140861847, 3);
  sqcRZGate(q, -0.2513299553481288, 3);
  sqcRYGate(q, -0.7736969047736203, 4);
  sqcRZGate(q, -2.5240745067889394, 4);
  sqcRYGate(q, -2.0630344396881126, 5);
  sqcRZGate(q, -1.5956031496554113, 5);
  sqcRYGate(q, 3.1366553863178765, 6);
  sqcRZGate(q, 0.03825526843292999, 6);
  sqcRYGate(q, 2.1926828271867915, 7);
  sqcRZGate(q, -0.6682018500943141, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.3815220809549402, 0);
  sqcRZGate(q, -1.4966421848405778, 0);
  sqcRYGate(q, 3.1350567042831763, 1);
  sqcRZGate(q, -1.2236913020526994, 1);
  sqcRYGate(q, 1.8491112216457237, 2);
  sqcRZGate(q, -1.6547434800039353, 2);
  sqcRYGate(q, -0.030430599050302095, 3);
  sqcRZGate(q, -2.424088883336744, 3);
  sqcRYGate(q, 1.323586669343868, 4);
  sqcRZGate(q, 2.0546682153513682, 4);
  sqcRYGate(q, 0.9549241291874112, 5);
  sqcRZGate(q, -1.057434967256255, 5);
  sqcRYGate(q, -3.1373278846206234, 6);
  sqcRZGate(q, 0.790783009154454, 6);
  sqcRYGate(q, -1.5550799945195097, 7);
  sqcRZGate(q, -0.555419440987067, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.1245111606291847, 0);
  sqcRZGate(q, -0.4533240904068548, 0);
  sqcRYGate(q, -3.1379679571353214, 1);
  sqcRZGate(q, -0.05693304166133251, 1);
  sqcRYGate(q, 1.5117843780705407, 2);
  sqcRZGate(q, 0.9798312610812348, 2);
  sqcRYGate(q, -3.1325798263487092, 3);
  sqcRZGate(q, -1.6418881902565965, 3);
  sqcRYGate(q, 1.4206545532695918, 4);
  sqcRZGate(q, -1.1815012851702114, 4);
  sqcRYGate(q, -0.009068529901211337, 5);
  sqcRZGate(q, 2.002473733150552, 5);
  sqcRYGate(q, 2.404473301178303, 6);
  sqcRZGate(q, -0.0904151930560646, 6);
  sqcRYGate(q, -1.0698936959248673, 7);
  sqcRZGate(q, 0.07274581770516352, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.20229930695875709, 0);
  sqcRZGate(q, 2.5784800331418536, 0);
  sqcRYGate(q, 1.5610165479915297, 1);
  sqcRZGate(q, 2.974098752494673, 1);
  sqcRYGate(q, 2.629524775606, 2);
  sqcRZGate(q, -1.1794923618520499, 2);
  sqcRYGate(q, -1.9062538211469495, 3);
  sqcRZGate(q, -0.5126478024539356, 3);
  sqcRYGate(q, 1.3755186561115083, 4);
  sqcRZGate(q, 1.639764011036891, 4);
  sqcRYGate(q, -0.0005210927188664456, 5);
  sqcRZGate(q, 2.608982808205813, 5);
  sqcRYGate(q, 2.928931419242945, 6);
  sqcRZGate(q, -0.3892742671092435, 6);
  sqcRYGate(q, 0.5495313612854451, 7);
  sqcRZGate(q, -0.8153547280830971, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4927849866115859, 0);
  sqcRZGate(q, 1.5064601143623273, 0);
  sqcRYGate(q, 0.6210740185013082, 1);
  sqcRZGate(q, -2.459932602646177, 1);
  sqcRYGate(q, -3.1310523757743733, 2);
  sqcRZGate(q, -2.8205536860565896, 2);
  sqcRYGate(q, 0.12257889345380679, 3);
  sqcRZGate(q, -2.3719809745386184, 3);
  sqcRYGate(q, 3.0869984847597176, 4);
  sqcRZGate(q, -1.5651027456734545, 4);
  sqcRYGate(q, 1.5676131156211486, 5);
  sqcRZGate(q, -0.5277510661816418, 5);
  sqcRYGate(q, -2.9219777694449447, 6);
  sqcRZGate(q, 0.9688452807769332, 6);
  sqcRYGate(q, 1.307057231236316, 7);
  sqcRZGate(q, 0.7454785889317916, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.52839778817642, 0);
  sqcRZGate(q, -2.8869974130774856, 0);
  sqcRYGate(q, 2.9998530375693604, 1);
  sqcRZGate(q, -1.6252422934544448, 1);
  sqcRYGate(q, 0.009521634557229142, 2);
  sqcRZGate(q, 2.3124887853748333, 2);
  sqcRYGate(q, 0.45412979532599984, 3);
  sqcRZGate(q, -1.9229403164245695, 3);
  sqcRYGate(q, 0.1516129510535169, 4);
  sqcRZGate(q, -1.3895671115481714, 4);
  sqcRYGate(q, -3.099103957722229, 5);
  sqcRZGate(q, -1.29817471843865, 5);
  sqcRYGate(q, 1.4669291501081305, 6);
  sqcRZGate(q, -0.28909637066031973, 6);
  sqcRYGate(q, 2.508248857841976, 7);
  sqcRZGate(q, 0.9383865083238104, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.1533502546708725, 0);
  sqcRZGate(q, 1.93160091216334, 0);
  sqcRYGate(q, -0.8622947020881959, 1);
  sqcRZGate(q, 0.6198743355450732, 1);
  sqcRYGate(q, 1.4933672440497685, 2);
  sqcRZGate(q, -2.605841879401837, 2);
  sqcRYGate(q, 0.21599787378310048, 3);
  sqcRZGate(q, -0.931913318853182, 3);
  sqcRYGate(q, -2.5291847623385033, 4);
  sqcRZGate(q, 3.103307184185722, 4);
  sqcRYGate(q, -2.9562345849985743, 5);
  sqcRZGate(q, 1.267934324863738, 5);
  sqcRYGate(q, -3.135426107940861, 6);
  sqcRZGate(q, -0.4396438120070612, 6);
  sqcRYGate(q, -2.8523417855932722, 7);
  sqcRZGate(q, -1.5273335929689937, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.0507107610867013, 0);
  sqcRZGate(q, -0.4794008916367685, 0);
  sqcRYGate(q, 0.0003304369234502502, 1);
  sqcRZGate(q, -0.35254623355308445, 1);
  sqcRYGate(q, -0.004974387626810461, 2);
  sqcRZGate(q, 2.6228793719684744, 2);
  sqcRYGate(q, 0.02026187403774729, 3);
  sqcRZGate(q, -2.347107196587254, 3);
  sqcRYGate(q, -3.0838518638802097, 4);
  sqcRZGate(q, -2.2174484250697217, 4);
  sqcRYGate(q, -2.445557445796678, 5);
  sqcRZGate(q, 2.7243778242672065, 5);
  sqcRYGate(q, -3.037485363248462, 6);
  sqcRZGate(q, -1.0474321786449703, 6);
  sqcRYGate(q, 1.9620423329829024, 7);
  sqcRZGate(q, -0.10031619432917972, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.269547447537269, 0);
  sqcRZGate(q, 1.7552575447837564, 0);
  sqcRYGate(q, -2.3276877471033437, 1);
  sqcRZGate(q, -0.7065412355659325, 1);
  sqcRYGate(q, -1.4452954439158485, 2);
  sqcRZGate(q, 1.2712968867778802, 2);
  sqcRYGate(q, 0.9413066632479525, 3);
  sqcRZGate(q, -0.7117683756649951, 3);
  sqcRYGate(q, 0.011368004572775545, 4);
  sqcRZGate(q, 2.698634971893952, 4);
  sqcRYGate(q, 1.5226679497413862, 5);
  sqcRZGate(q, 2.9164346634861618, 5);
  sqcRYGate(q, -0.4329842924879644, 6);
  sqcRZGate(q, -1.79330012774051, 6);
  sqcRYGate(q, -2.357608465512895, 7);
  sqcRZGate(q, 2.2716023158629746, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.6163086014828387, 0);
  sqcRZGate(q, -0.24815263052118383, 0);
  sqcRYGate(q, -0.017024029291346388, 1);
  sqcRZGate(q, 0.7969609117927824, 1);
  sqcRYGate(q, 3.1386348623907603, 2);
  sqcRZGate(q, -1.3165054282705135, 2);
  sqcRYGate(q, 1.6886687881864102, 3);
  sqcRZGate(q, 0.0021407198578158315, 3);
  sqcRYGate(q, 3.1411755676004125, 4);
  sqcRZGate(q, -1.6776994575649784, 4);
  sqcRYGate(q, -2.5468255898484338, 5);
  sqcRZGate(q, -2.4389033576086563, 5);
  sqcRYGate(q, -3.1414889234688923, 6);
  sqcRZGate(q, -0.7509911439115378, 6);
  sqcRYGate(q, -1.2636063578597147e-05, 7);
  sqcRZGate(q, -1.508152597576162, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7226007341209124, 0);
  sqcRZGate(q, -1.8319883391814944, 0);
  sqcRYGate(q, 0.03144620355363159, 1);
  sqcRZGate(q, -2.3466475760746266, 1);
  sqcRYGate(q, -3.128002465317837, 2);
  sqcRZGate(q, 2.7499679253191367, 2);
  sqcRYGate(q, -1.5200783914367901, 3);
  sqcRZGate(q, -2.144600469469629, 3);
  sqcRYGate(q, -0.0011748596419485224, 4);
  sqcRZGate(q, 2.1043885464501453, 4);
  sqcRYGate(q, -2.9328359490015803, 5);
  sqcRZGate(q, -0.04655460495077434, 5);
  sqcRYGate(q, 2.9796786245197278, 6);
  sqcRZGate(q, -1.3522788556181324, 6);
  sqcRYGate(q, -1.039943859768877, 7);
  sqcRZGate(q, -2.5123657370072614, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.19523977092274158, 0);
  sqcRZGate(q, -0.4585510243567059, 0);
  sqcRYGate(q, -1.0745050904034423, 1);
  sqcRZGate(q, 3.03660177889145, 1);
  sqcRYGate(q, -0.899237454207197, 2);
  sqcRZGate(q, -0.790084904989631, 2);
  sqcRYGate(q, 1.4987474453432168, 3);
  sqcRZGate(q, -0.4598133852373323, 3);
  sqcRYGate(q, 0.0271371484435563, 4);
  sqcRZGate(q, -1.2893228634804015, 4);
  sqcRYGate(q, -0.011291603011370692, 5);
  sqcRZGate(q, -2.3901636416229075, 5);
  sqcRYGate(q, 1.3134508482917848, 6);
  sqcRZGate(q, 1.4316177933217196, 6);
  sqcRYGate(q, -2.5799062174024487, 7);
  sqcRZGate(q, -1.5410240185453574, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.004123879035697442, 0);
  sqcRZGate(q, -0.9924906272703489, 0);
  sqcRYGate(q, 0.15450391575187705, 1);
  sqcRZGate(q, -0.06876270378844841, 1);
  sqcRYGate(q, 0.00953920615194528, 2);
  sqcRZGate(q, -2.6285868954023446, 2);
  sqcRYGate(q, 3.132615041683598, 3);
  sqcRZGate(q, 0.3653830424821817, 3);
  sqcRYGate(q, -0.0014338317904627471, 4);
  sqcRZGate(q, -1.525185702364646, 4);
  sqcRYGate(q, 2.076994958735427, 5);
  sqcRZGate(q, 0.7063968901359147, 5);
  sqcRYGate(q, -3.107666963787652, 6);
  sqcRZGate(q, -1.5649376073098615, 6);
  sqcRYGate(q, -0.0016769213995129206, 7);
  sqcRZGate(q, -2.8954809941000423, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.9320173032333714, 0);
  sqcRZGate(q, 0.9934028985110488, 0);
  sqcRYGate(q, 2.180982487610897, 1);
  sqcRZGate(q, 1.6662044747519769, 1);
  sqcRYGate(q, 1.0080642216588487, 2);
  sqcRZGate(q, 0.8665769651441276, 2);
  sqcRYGate(q, -3.020947621617636, 3);
  sqcRZGate(q, -0.7449166516393434, 3);
  sqcRYGate(q, -3.134877872747116, 4);
  sqcRZGate(q, 0.2821041962379731, 4);
  sqcRYGate(q, -2.5216377237786247, 5);
  sqcRZGate(q, 0.7262320491049358, 5);
  sqcRYGate(q, 1.8447742714075561, 6);
  sqcRZGate(q, -1.1643666046820211, 6);
  sqcRYGate(q, 2.873671550558509, 7);
  sqcRZGate(q, 1.2241296143803684, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.138470245370781, 0);
  sqcRZGate(q, 2.027006977761038, 0);
  sqcRYGate(q, 0.27958027071858726, 1);
  sqcRZGate(q, -3.1059700049816032, 1);
  sqcRYGate(q, -0.041659426852417525, 2);
  sqcRZGate(q, 1.2581666213004903, 2);
  sqcRYGate(q, -0.010442655887481209, 3);
  sqcRZGate(q, -1.6415059143146729, 3);
  sqcRYGate(q, 0.0414959684573466, 4);
  sqcRZGate(q, 1.5366350862535558, 4);
  sqcRYGate(q, 1.9401273828442025, 5);
  sqcRZGate(q, 0.999081719639631, 5);
  sqcRYGate(q, 1.0184032050939014, 6);
  sqcRZGate(q, 1.2126637570107635, 6);
  sqcRYGate(q, 0.00034150994044517295, 7);
  sqcRZGate(q, -0.1717996111858334, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.23722384322974058, 0);
  sqcRZGate(q, 0.20066630211654832, 0);
  sqcRYGate(q, 1.554098056320436, 1);
  sqcRZGate(q, -2.480101533631251, 1);
  sqcRYGate(q, -2.9538402487259403, 2);
  sqcRZGate(q, 1.0823544643956122, 2);
  sqcRYGate(q, 1.3926338698697573, 3);
  sqcRZGate(q, 1.822426446713973, 3);
  sqcRYGate(q, 3.0058426382715706, 4);
  sqcRZGate(q, -2.635776328457869, 4);
  sqcRYGate(q, 2.5956872636665738, 5);
  sqcRZGate(q, -2.1685380874501785, 5);
  sqcRYGate(q, -1.423856031345494, 6);
  sqcRZGate(q, -0.8009135175657657, 6);
  sqcRYGate(q, -0.19266608140391206, 7);
  sqcRZGate(q, 1.758902900370101, 7);

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
