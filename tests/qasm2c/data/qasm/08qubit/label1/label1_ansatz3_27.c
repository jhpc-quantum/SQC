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

  sqcRYGate(q, 0.5269547605063171, 0);
  sqcRZGate(q, -1.8733137471054517, 0);
  sqcRYGate(q, -0.16075895396728246, 1);
  sqcRZGate(q, 0.46559198960615067, 1);
  sqcRYGate(q, 0.9033751040897089, 2);
  sqcRZGate(q, -0.3968274326417127, 2);
  sqcRYGate(q, 0.9157897402648815, 3);
  sqcRZGate(q, -1.6209445606818078, 3);
  sqcRYGate(q, -2.2859758088440985, 4);
  sqcRZGate(q, -0.5823369558244327, 4);
  sqcRYGate(q, -1.7671451757318937, 5);
  sqcRZGate(q, -3.067433454303168, 5);
  sqcRYGate(q, 0.31949603461726, 6);
  sqcRZGate(q, 2.5154627908139418, 6);
  sqcRYGate(q, -0.7339452015986438, 7);
  sqcRZGate(q, -1.6663070972597707, 7);
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
  sqcRYGate(q, 0.3079854381634935, 0);
  sqcRZGate(q, 1.346963328716663, 0);
  sqcRYGate(q, -2.482729880806585, 1);
  sqcRZGate(q, -0.23259727803890673, 1);
  sqcRYGate(q, -2.48175764296686, 2);
  sqcRZGate(q, -2.7347451236852818, 2);
  sqcRYGate(q, -1.0133452516051111, 3);
  sqcRZGate(q, -1.4299241406874603, 3);
  sqcRYGate(q, -2.429341926926811, 4);
  sqcRZGate(q, 1.87877627257432, 4);
  sqcRYGate(q, -2.0920548618539723, 5);
  sqcRZGate(q, 2.2336670363754205, 5);
  sqcRYGate(q, 1.0608755210448015, 6);
  sqcRZGate(q, -2.489088350529848, 6);
  sqcRYGate(q, 0.7940731222588112, 7);
  sqcRZGate(q, 1.5995595229566015, 7);
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
  sqcRYGate(q, 2.1100748445326527, 0);
  sqcRZGate(q, 1.0935370426390696, 0);
  sqcRYGate(q, 0.2296987189980397, 1);
  sqcRZGate(q, -0.10544765884147497, 1);
  sqcRYGate(q, 0.43706224036536534, 2);
  sqcRZGate(q, 2.310576337281482, 2);
  sqcRYGate(q, -2.6871366341223366, 3);
  sqcRZGate(q, 1.244073855736443, 3);
  sqcRYGate(q, -0.6476125274125061, 4);
  sqcRZGate(q, 0.5579406296024905, 4);
  sqcRYGate(q, 1.3617558326086323, 5);
  sqcRZGate(q, -2.095145061868314, 5);
  sqcRYGate(q, 1.805567607104905, 6);
  sqcRZGate(q, -0.8022086979257459, 6);
  sqcRYGate(q, 0.9887686762533806, 7);
  sqcRZGate(q, -2.0100069309957096, 7);
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
  sqcRYGate(q, 2.2383483099656947, 0);
  sqcRZGate(q, 0.3972931836697045, 0);
  sqcRYGate(q, 1.4854865809056672, 1);
  sqcRZGate(q, 2.693267457236195, 1);
  sqcRYGate(q, 2.697006360835768, 2);
  sqcRZGate(q, 1.8125992963524136, 2);
  sqcRYGate(q, -1.5068838532839548, 3);
  sqcRZGate(q, -0.5367033255578555, 3);
  sqcRYGate(q, 1.5666025825183274, 4);
  sqcRZGate(q, 0.9318269757246339, 4);
  sqcRYGate(q, 0.34568081702857095, 5);
  sqcRZGate(q, -2.7882718154479726, 5);
  sqcRYGate(q, -0.7778807574542709, 6);
  sqcRZGate(q, 2.8257161028831406, 6);
  sqcRYGate(q, 0.5219965589953715, 7);
  sqcRZGate(q, 1.596982276182544, 7);
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
  sqcRYGate(q, -0.5071283937044392, 0);
  sqcRZGate(q, 1.8570627776233193, 0);
  sqcRYGate(q, 1.8058685692843943, 1);
  sqcRZGate(q, -1.0363621105067007, 1);
  sqcRYGate(q, -2.0331117359663833, 2);
  sqcRZGate(q, -1.0756252421326191, 2);
  sqcRYGate(q, 2.513308582548679, 3);
  sqcRZGate(q, 1.5591911707588144, 3);
  sqcRYGate(q, -1.823975705929071, 4);
  sqcRZGate(q, 2.003840028094385, 4);
  sqcRYGate(q, -2.5357967204973217, 5);
  sqcRZGate(q, 0.9477967353256159, 5);
  sqcRYGate(q, -0.4990864732378748, 6);
  sqcRZGate(q, 1.1154107038791228, 6);
  sqcRYGate(q, 1.4912979428395037, 7);
  sqcRZGate(q, -2.749599304607387, 7);
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
  sqcRYGate(q, -0.8697816572113319, 0);
  sqcRZGate(q, 1.8336327050669254, 0);
  sqcRYGate(q, -2.5324696718725517, 1);
  sqcRZGate(q, -1.347570148843088, 1);
  sqcRYGate(q, -1.2972364165526757, 2);
  sqcRZGate(q, 2.694997390544566, 2);
  sqcRYGate(q, -2.0335824119085304, 3);
  sqcRZGate(q, -2.982974105982591, 3);
  sqcRYGate(q, 0.906699563456663, 4);
  sqcRZGate(q, 1.939850195995195, 4);
  sqcRYGate(q, 2.8924633629064327, 5);
  sqcRZGate(q, -1.2605007716215253, 5);
  sqcRYGate(q, -2.168743227003822, 6);
  sqcRZGate(q, -0.25083111672352415, 6);
  sqcRYGate(q, 0.4133099077995226, 7);
  sqcRZGate(q, 2.2346778329633397, 7);
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
  sqcRYGate(q, -2.0680391752897287, 0);
  sqcRZGate(q, 1.6619884221748054, 0);
  sqcRYGate(q, 1.5514328925096919, 1);
  sqcRZGate(q, 2.3005666893362955, 1);
  sqcRYGate(q, -2.0929400439047328, 2);
  sqcRZGate(q, -0.9507869114449465, 2);
  sqcRYGate(q, -2.002146894839698, 3);
  sqcRZGate(q, 2.6492232763461403, 3);
  sqcRYGate(q, 1.8726494941525007, 4);
  sqcRZGate(q, -1.6119143488515664, 4);
  sqcRYGate(q, 1.122530161769894, 5);
  sqcRZGate(q, -0.4538725333208493, 5);
  sqcRYGate(q, -1.7997210529075247, 6);
  sqcRZGate(q, -2.061294198148696, 6);
  sqcRYGate(q, -2.621658546655247, 7);
  sqcRZGate(q, -0.3705877167952814, 7);
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
  sqcRYGate(q, 1.868819157094907, 0);
  sqcRZGate(q, 2.755492997126392, 0);
  sqcRYGate(q, 0.2883085104866332, 1);
  sqcRZGate(q, 2.1231612453305337, 1);
  sqcRYGate(q, -0.4361484319075686, 2);
  sqcRZGate(q, 2.129258485561066, 2);
  sqcRYGate(q, -1.0393655253574459, 3);
  sqcRZGate(q, -1.4995697969920019, 3);
  sqcRYGate(q, -1.4808440811221768, 4);
  sqcRZGate(q, 1.2283242256876867, 4);
  sqcRYGate(q, 0.8521051240710058, 5);
  sqcRZGate(q, -0.46042061610579993, 5);
  sqcRYGate(q, -2.4532216511804625, 6);
  sqcRZGate(q, 0.33220279120932883, 6);
  sqcRYGate(q, 1.098410002343975, 7);
  sqcRZGate(q, 2.549681317952217, 7);
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
  sqcRYGate(q, 1.8117573129643947, 0);
  sqcRZGate(q, -2.748982075628405, 0);
  sqcRYGate(q, 2.3781329165345046, 1);
  sqcRZGate(q, -0.8041134184495048, 1);
  sqcRYGate(q, -2.188025444002405, 2);
  sqcRZGate(q, 2.6456741222280957, 2);
  sqcRYGate(q, 0.29069746580172584, 3);
  sqcRZGate(q, -0.40687722030078105, 3);
  sqcRYGate(q, -1.164017457765914, 4);
  sqcRZGate(q, -0.6349410512523282, 4);
  sqcRYGate(q, 0.7191851237812434, 5);
  sqcRZGate(q, -1.3954859825545176, 5);
  sqcRYGate(q, -3.0087406829104726, 6);
  sqcRZGate(q, 0.7449939153685251, 6);
  sqcRYGate(q, 2.057350251465183, 7);
  sqcRZGate(q, -1.7203408820197, 7);
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
  sqcRYGate(q, -0.25076665416995736, 0);
  sqcRZGate(q, 2.138599014298163, 0);
  sqcRYGate(q, 0.4594113555905105, 1);
  sqcRZGate(q, -1.0862789907148331, 1);
  sqcRYGate(q, 1.3203753823624365, 2);
  sqcRZGate(q, 1.4443076916744646, 2);
  sqcRYGate(q, 0.6685744378593911, 3);
  sqcRZGate(q, 0.6720522053589556, 3);
  sqcRYGate(q, -0.48008384728629405, 4);
  sqcRZGate(q, 2.8997093101799676, 4);
  sqcRYGate(q, 0.551289949295092, 5);
  sqcRZGate(q, -2.7488486617379224, 5);
  sqcRYGate(q, 1.1927508037474812, 6);
  sqcRZGate(q, 2.478874921677108, 6);
  sqcRYGate(q, -0.8911204373770651, 7);
  sqcRZGate(q, -0.04119326597462545, 7);
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
  sqcRYGate(q, 0.47063899500165096, 0);
  sqcRZGate(q, -2.2378933375046013, 0);
  sqcRYGate(q, -2.6525898248356623, 1);
  sqcRZGate(q, 1.1809704726071715, 1);
  sqcRYGate(q, -0.05592366105624257, 2);
  sqcRZGate(q, -2.7576387857843936, 2);
  sqcRYGate(q, 2.2074066620129775, 3);
  sqcRZGate(q, -2.6813642232362027, 3);
  sqcRYGate(q, -2.163333895490619, 4);
  sqcRZGate(q, -1.9524183551554475, 4);
  sqcRYGate(q, 1.954799706699285, 5);
  sqcRZGate(q, -3.051706929900307, 5);
  sqcRYGate(q, 2.0317575897405744, 6);
  sqcRZGate(q, 2.060831011933981, 6);
  sqcRYGate(q, -0.13662723779519315, 7);
  sqcRZGate(q, -2.1381191259862637, 7);
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
  sqcRYGate(q, 2.462816676581839, 0);
  sqcRZGate(q, -1.1619155921182642, 0);
  sqcRYGate(q, 0.30090532433490697, 1);
  sqcRZGate(q, -1.934031238645235, 1);
  sqcRYGate(q, -1.2730832786915807, 2);
  sqcRZGate(q, -1.109414960699303, 2);
  sqcRYGate(q, 1.011703372706502, 3);
  sqcRZGate(q, 0.8994221843147091, 3);
  sqcRYGate(q, 1.096119095496704, 4);
  sqcRZGate(q, -1.3330060174612257, 4);
  sqcRYGate(q, 1.9125925378094444, 5);
  sqcRZGate(q, 0.670124006970863, 5);
  sqcRYGate(q, -0.3562348336313421, 6);
  sqcRZGate(q, -0.07958920592517416, 6);
  sqcRYGate(q, 2.1240986430883484, 7);
  sqcRZGate(q, 2.920903083105081, 7);
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
  sqcRYGate(q, 0.20181447946329634, 0);
  sqcRZGate(q, -0.1941829455300281, 0);
  sqcRYGate(q, -2.7475204627646104, 1);
  sqcRZGate(q, 0.19805769503923187, 1);
  sqcRYGate(q, -2.453886472048167, 2);
  sqcRZGate(q, -2.248868158174986, 2);
  sqcRYGate(q, -1.310198149926656, 3);
  sqcRZGate(q, -1.7733594161873136, 3);
  sqcRYGate(q, -2.0215574592718646, 4);
  sqcRZGate(q, -2.697847669741952, 4);
  sqcRYGate(q, -0.7497988240442036, 5);
  sqcRZGate(q, -1.0198581274066116, 5);
  sqcRYGate(q, -2.77091764924065, 6);
  sqcRZGate(q, -0.13110714921855757, 6);
  sqcRYGate(q, 1.8835023082104851, 7);
  sqcRZGate(q, -0.9606061948158385, 7);
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
  sqcRYGate(q, 0.567605990034259, 0);
  sqcRZGate(q, 0.19860869110621276, 0);
  sqcRYGate(q, -2.4423976044429576, 1);
  sqcRZGate(q, 2.263884330483537, 1);
  sqcRYGate(q, 0.8062666961469482, 2);
  sqcRZGate(q, -3.114982926527898, 2);
  sqcRYGate(q, -0.518252060147697, 3);
  sqcRZGate(q, -1.2143241866265209, 3);
  sqcRYGate(q, 2.003032126661656, 4);
  sqcRZGate(q, -0.8754537376477862, 4);
  sqcRYGate(q, -0.917472453752914, 5);
  sqcRZGate(q, 1.0355525734910944, 5);
  sqcRYGate(q, -2.376383987800758, 6);
  sqcRZGate(q, -0.9512151789576851, 6);
  sqcRYGate(q, 0.3142685170650884, 7);
  sqcRZGate(q, -2.5305673207622306, 7);
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
  sqcRYGate(q, 0.4498762085736485, 0);
  sqcRZGate(q, 2.1901821809175113, 0);
  sqcRYGate(q, -1.544037627216614, 1);
  sqcRZGate(q, -1.7913105148192079, 1);
  sqcRYGate(q, -2.1869278499712212, 2);
  sqcRZGate(q, -0.36568257878901544, 2);
  sqcRYGate(q, -2.0583263884241947, 3);
  sqcRZGate(q, -2.6124185002852944, 3);
  sqcRYGate(q, 1.254292511218055, 4);
  sqcRZGate(q, -1.4426639043220237, 4);
  sqcRYGate(q, 2.3328766576263553, 5);
  sqcRZGate(q, 0.4854642014117526, 5);
  sqcRYGate(q, 2.139581466875251, 6);
  sqcRZGate(q, 0.5814478365305065, 6);
  sqcRYGate(q, -0.29190807710308153, 7);
  sqcRZGate(q, -2.1861687650596897, 7);
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
  sqcRYGate(q, 0.7891854286075457, 0);
  sqcRZGate(q, -1.5747342838412974, 0);
  sqcRYGate(q, 1.428980545338475, 1);
  sqcRZGate(q, -2.9903851477014896, 1);
  sqcRYGate(q, -2.349672554493867, 2);
  sqcRZGate(q, 2.3408440652442604, 2);
  sqcRYGate(q, 1.7413185672313016, 3);
  sqcRZGate(q, -2.214478267103673, 3);
  sqcRYGate(q, -0.4325100605058037, 4);
  sqcRZGate(q, -2.9785189940817958, 4);
  sqcRYGate(q, 2.9481903297654695, 5);
  sqcRZGate(q, -1.8288972691581848, 5);
  sqcRYGate(q, -2.3607266664458684, 6);
  sqcRZGate(q, -1.1671005428553913, 6);
  sqcRYGate(q, -1.3583137150158908, 7);
  sqcRZGate(q, 1.6800912072080003, 7);
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
  sqcRYGate(q, 1.0323048827084005, 0);
  sqcRZGate(q, 0.01515347696307856, 0);
  sqcRYGate(q, 0.42268102256042384, 1);
  sqcRZGate(q, 2.053468414517267, 1);
  sqcRYGate(q, 1.7742360393894305, 2);
  sqcRZGate(q, -1.4830623968868224, 2);
  sqcRYGate(q, -0.9352768993192706, 3);
  sqcRZGate(q, -2.8025616405125, 3);
  sqcRYGate(q, 1.4808261142140675, 4);
  sqcRZGate(q, 0.5496146674450689, 4);
  sqcRYGate(q, 2.701229263031448, 5);
  sqcRZGate(q, -0.39794582589239064, 5);
  sqcRYGate(q, -2.9673848346644283, 6);
  sqcRZGate(q, 1.962553881285257, 6);
  sqcRYGate(q, -2.3723611152069886, 7);
  sqcRZGate(q, 2.7155374748700427, 7);
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
  sqcRYGate(q, 2.7661114205387456, 0);
  sqcRZGate(q, -3.034224546942446, 0);
  sqcRYGate(q, 1.4392403336758988, 1);
  sqcRZGate(q, -0.3962038952472753, 1);
  sqcRYGate(q, 2.226049811524403, 2);
  sqcRZGate(q, -0.05945881145068909, 2);
  sqcRYGate(q, 1.2054727658700068, 3);
  sqcRZGate(q, -1.3787744864305447, 3);
  sqcRYGate(q, 3.0666257676815096, 4);
  sqcRZGate(q, 0.8630077637485271, 4);
  sqcRYGate(q, 0.4881978936405129, 5);
  sqcRZGate(q, 1.1276428931476785, 5);
  sqcRYGate(q, 2.6157594459050832, 6);
  sqcRZGate(q, -0.8646270449131084, 6);
  sqcRYGate(q, -0.8030531722217447, 7);
  sqcRZGate(q, 0.039660105539278234, 7);
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
  sqcRYGate(q, 0.96157917289525, 0);
  sqcRZGate(q, -2.8555255271466495, 0);
  sqcRYGate(q, 1.3244826882016403, 1);
  sqcRZGate(q, 2.710334164078918, 1);
  sqcRYGate(q, -2.195238026324944, 2);
  sqcRZGate(q, 2.9930986388352836, 2);
  sqcRYGate(q, -2.443666218959389, 3);
  sqcRZGate(q, 2.1644804375549342, 3);
  sqcRYGate(q, 0.28102513775406524, 4);
  sqcRZGate(q, -1.2594562537642764, 4);
  sqcRYGate(q, -1.2296475221385297, 5);
  sqcRZGate(q, 1.4860526497284976, 5);
  sqcRYGate(q, 0.5134753756329937, 6);
  sqcRZGate(q, -2.549249363330568, 6);
  sqcRYGate(q, 1.957036547026073, 7);
  sqcRZGate(q, -0.5946831645199645, 7);
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
  sqcRYGate(q, -2.2119379938631996, 0);
  sqcRZGate(q, 2.2491937254426126, 0);
  sqcRYGate(q, -0.9072445120028421, 1);
  sqcRZGate(q, 0.5527168494703283, 1);
  sqcRYGate(q, 0.5523063102978983, 2);
  sqcRZGate(q, -0.2256207146771108, 2);
  sqcRYGate(q, 1.9888025467273736, 3);
  sqcRZGate(q, 3.108290092143353, 3);
  sqcRYGate(q, -0.3184410547876544, 4);
  sqcRZGate(q, 2.8722468926459364, 4);
  sqcRYGate(q, -1.684129381147681, 5);
  sqcRZGate(q, 1.8153549605657437, 5);
  sqcRYGate(q, -2.528325980917533, 6);
  sqcRZGate(q, 0.5376894545450596, 6);
  sqcRYGate(q, -0.6196311642181662, 7);
  sqcRZGate(q, -1.0693597617706185, 7);
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
  sqcRYGate(q, 0.17455924949260776, 0);
  sqcRZGate(q, -3.002612204758942, 0);
  sqcRYGate(q, 2.2913364112690844, 1);
  sqcRZGate(q, -2.467116848098593, 1);
  sqcRYGate(q, -1.769258240123991, 2);
  sqcRZGate(q, 1.7828101940235601, 2);
  sqcRYGate(q, -0.5122025223431831, 3);
  sqcRZGate(q, 2.821333585962864, 3);
  sqcRYGate(q, 2.125445586689956, 4);
  sqcRZGate(q, 1.408811142580375, 4);
  sqcRYGate(q, 1.0305252220516579, 5);
  sqcRZGate(q, -2.762942857105227, 5);
  sqcRYGate(q, 1.1552243808406726, 6);
  sqcRZGate(q, 1.8959091665618661, 6);
  sqcRYGate(q, -2.1947166641298823, 7);
  sqcRZGate(q, 2.001468635170666, 7);
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
  sqcRYGate(q, 2.3329568605770947, 0);
  sqcRZGate(q, 1.7146545947051175, 0);
  sqcRYGate(q, -1.442462141431131, 1);
  sqcRZGate(q, -0.11219035599051175, 1);
  sqcRYGate(q, -2.195015841898324, 2);
  sqcRZGate(q, 1.2009674325903636, 2);
  sqcRYGate(q, -1.997214985488415, 3);
  sqcRZGate(q, 0.2859753123118969, 3);
  sqcRYGate(q, 0.137763510303647, 4);
  sqcRZGate(q, -0.8363879804210812, 4);
  sqcRYGate(q, -0.46109973841316165, 5);
  sqcRZGate(q, -0.4532105176330638, 5);
  sqcRYGate(q, 1.2368399022504084, 6);
  sqcRZGate(q, 2.253755230276246, 6);
  sqcRYGate(q, 1.26811458897627, 7);
  sqcRZGate(q, 2.447837599450832, 7);
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
  sqcRYGate(q, 2.8037151285771067, 0);
  sqcRZGate(q, 2.770697895381656, 0);
  sqcRYGate(q, -2.0227264915738745, 1);
  sqcRZGate(q, 1.2861497516407878, 1);
  sqcRYGate(q, 2.869039514612157, 2);
  sqcRZGate(q, -2.428642028634701, 2);
  sqcRYGate(q, -0.6004514074511214, 3);
  sqcRZGate(q, 1.9768816161408822, 3);
  sqcRYGate(q, -1.0960093005329758, 4);
  sqcRZGate(q, 2.1718520378475885, 4);
  sqcRYGate(q, -0.9904784902641415, 5);
  sqcRZGate(q, -2.3927692521120236, 5);
  sqcRYGate(q, -0.8631556852590396, 6);
  sqcRZGate(q, 0.7020998947019487, 6);
  sqcRYGate(q, 2.4411529123049482, 7);
  sqcRZGate(q, 1.911705957899384, 7);
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
  sqcRYGate(q, -0.29089606827041603, 0);
  sqcRZGate(q, -1.356758787130887, 0);
  sqcRYGate(q, 1.9466855118925657, 1);
  sqcRZGate(q, 1.2379215052201786, 1);
  sqcRYGate(q, 2.9594569803020283, 2);
  sqcRZGate(q, 1.9127660045329586, 2);
  sqcRYGate(q, 0.8165233532878594, 3);
  sqcRZGate(q, -1.986085439859342, 3);
  sqcRYGate(q, 1.2426956662136526, 4);
  sqcRZGate(q, -2.021524378568442, 4);
  sqcRYGate(q, -2.7862531389110115, 5);
  sqcRZGate(q, -1.9163803479868449, 5);
  sqcRYGate(q, -2.538279407710556, 6);
  sqcRZGate(q, -2.4581772371740738, 6);
  sqcRYGate(q, -2.9170193926734878, 7);
  sqcRZGate(q, -1.014971940630648, 7);
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
  sqcRYGate(q, -2.85265243954648, 0);
  sqcRZGate(q, 2.6807029997531227, 0);
  sqcRYGate(q, 1.0655205564188837, 1);
  sqcRZGate(q, -1.7229258457767997, 1);
  sqcRYGate(q, -2.4912768576776103, 2);
  sqcRZGate(q, -1.5304652796643927, 2);
  sqcRYGate(q, -0.899678001641341, 3);
  sqcRZGate(q, 0.16139286315674184, 3);
  sqcRYGate(q, -2.289125195217866, 4);
  sqcRZGate(q, -0.8466705301023874, 4);
  sqcRYGate(q, 0.5866332695536247, 5);
  sqcRZGate(q, -2.876908251017471, 5);
  sqcRYGate(q, -1.9676873841919829, 6);
  sqcRZGate(q, -2.8626289261805824, 6);
  sqcRYGate(q, -0.24229217671204586, 7);
  sqcRZGate(q, -1.8948533450002858, 7);
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
  sqcRYGate(q, -2.170987699390474, 0);
  sqcRZGate(q, 0.8073850570365222, 0);
  sqcRYGate(q, -2.994499507385146, 1);
  sqcRZGate(q, 1.0783541562361476, 1);
  sqcRYGate(q, -0.39247019794087906, 2);
  sqcRZGate(q, -0.35052302942441477, 2);
  sqcRYGate(q, 0.06204946556607281, 3);
  sqcRZGate(q, -1.9397000913931495, 3);
  sqcRYGate(q, 1.5070540830443901, 4);
  sqcRZGate(q, -0.7355959087860595, 4);
  sqcRYGate(q, -2.0820524933942215, 5);
  sqcRZGate(q, -2.8622553646579867, 5);
  sqcRYGate(q, -1.2462834910392226, 6);
  sqcRZGate(q, 0.014503868299136968, 6);
  sqcRYGate(q, -1.0459145002843289, 7);
  sqcRZGate(q, 0.9230801449359699, 7);
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
  sqcRYGate(q, -1.1384384117387953, 0);
  sqcRZGate(q, 0.08931795081743492, 0);
  sqcRYGate(q, 1.763109829357632, 1);
  sqcRZGate(q, 0.028125498099868192, 1);
  sqcRYGate(q, 2.3648267260175255, 2);
  sqcRZGate(q, -1.334139759527072, 2);
  sqcRYGate(q, -1.5727440669612134, 3);
  sqcRZGate(q, -2.3994340840568453, 3);
  sqcRYGate(q, 2.846142812842939, 4);
  sqcRZGate(q, 1.0842072947261272, 4);
  sqcRYGate(q, 0.37167894328801104, 5);
  sqcRZGate(q, -2.625464406505249, 5);
  sqcRYGate(q, -1.7971938387626762, 6);
  sqcRZGate(q, -2.8447529307759907, 6);
  sqcRYGate(q, -0.43022593063938375, 7);
  sqcRZGate(q, 2.1344098212741454, 7);
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
  sqcRYGate(q, -1.3788679849628442, 0);
  sqcRZGate(q, 1.4423692602981646, 0);
  sqcRYGate(q, -2.110681373786681, 1);
  sqcRZGate(q, -0.8834540873968826, 1);
  sqcRYGate(q, 2.129625455137511, 2);
  sqcRZGate(q, 1.0858655020231944, 2);
  sqcRYGate(q, -1.9181914900164907, 3);
  sqcRZGate(q, -3.05527980356357, 3);
  sqcRYGate(q, -1.0006058969440357, 4);
  sqcRZGate(q, -0.9042017499179189, 4);
  sqcRYGate(q, 1.2691745972387052, 5);
  sqcRZGate(q, 1.0876339787940128, 5);
  sqcRYGate(q, 1.1966137361198863, 6);
  sqcRZGate(q, -1.1254115281418027, 6);
  sqcRYGate(q, 0.40191309119638036, 7);
  sqcRZGate(q, 0.22219716929573874, 7);
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
  sqcRYGate(q, -0.5710509131193399, 0);
  sqcRZGate(q, 0.10911295693709543, 0);
  sqcRYGate(q, 1.5329218916799057, 1);
  sqcRZGate(q, 3.0254456127832796, 1);
  sqcRYGate(q, -2.5356461185876187, 2);
  sqcRZGate(q, 2.1071281555215657, 2);
  sqcRYGate(q, -2.284224197141472, 3);
  sqcRZGate(q, 0.4057837283546011, 3);
  sqcRYGate(q, 2.8186325669992227, 4);
  sqcRZGate(q, -3.1084653716322723, 4);
  sqcRYGate(q, -1.0120029248087663, 5);
  sqcRZGate(q, 0.7775355313925411, 5);
  sqcRYGate(q, -0.2148498585209211, 6);
  sqcRZGate(q, 1.849179156506688, 6);
  sqcRYGate(q, -1.1308340485990707, 7);
  sqcRZGate(q, 2.369494054156238, 7);
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
  sqcRYGate(q, -2.1896495400229172, 0);
  sqcRZGate(q, 0.18049721804390992, 0);
  sqcRYGate(q, -0.5192327314766789, 1);
  sqcRZGate(q, -0.3422421953287209, 1);
  sqcRYGate(q, -0.7001048079169458, 2);
  sqcRZGate(q, -0.9035035308924346, 2);
  sqcRYGate(q, 1.554749271179196, 3);
  sqcRZGate(q, -2.9222551865767348, 3);
  sqcRYGate(q, 2.061875350873346, 4);
  sqcRZGate(q, -1.3537924869655555, 4);
  sqcRYGate(q, -1.6177287863965075, 5);
  sqcRZGate(q, 2.269584461429575, 5);
  sqcRYGate(q, -0.31324744956962375, 6);
  sqcRZGate(q, -1.1018364517511938, 6);
  sqcRYGate(q, 1.902812691509446, 7);
  sqcRZGate(q, -2.104044574288099, 7);
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
  sqcRYGate(q, -1.8682128627627534, 0);
  sqcRZGate(q, 1.3416335163815163, 0);
  sqcRYGate(q, 2.3577682804899602, 1);
  sqcRZGate(q, -0.050391001784336434, 1);
  sqcRYGate(q, 0.2762155401232276, 2);
  sqcRZGate(q, 2.4909397427374027, 2);
  sqcRYGate(q, -1.060580186789813, 3);
  sqcRZGate(q, 2.5926247467141903, 3);
  sqcRYGate(q, -0.856652930626113, 4);
  sqcRZGate(q, 2.376932506008099, 4);
  sqcRYGate(q, -0.9460102544079744, 5);
  sqcRZGate(q, -0.018154089113980254, 5);
  sqcRYGate(q, 1.3586537011953377, 6);
  sqcRZGate(q, 2.107045862545901, 6);
  sqcRYGate(q, 0.6444418450664884, 7);
  sqcRZGate(q, 1.9433616031853167, 7);

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
