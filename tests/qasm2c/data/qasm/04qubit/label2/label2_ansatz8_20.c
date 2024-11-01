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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 1.8686723132966803, 0);
  sqcRYGate(q, 1.8032034863460433, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1825270635269143, 0);
  sqcRYGate(q, 0.2809817719983567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.42004664245564693, 2);
  sqcRYGate(q, 1.9870144956017466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0477343072346985, 2);
  sqcRYGate(q, 1.1635565622039454, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5125421789636029, 0);
  sqcRYGate(q, -0.9247444848249218, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2384807228092702, 0);
  sqcRYGate(q, -2.739674131511487, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0390982148778223, 1);
  sqcRYGate(q, -2.0434149148811565, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.985564814186724, 1);
  sqcRYGate(q, 0.5235411298104542, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8101575883823628, 0);
  sqcRYGate(q, 3.076884115727906, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.058164905754784786, 0);
  sqcRYGate(q, 1.3093407357302966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1100935385562525, 2);
  sqcRYGate(q, -0.8384440298692968, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7226968470106501, 2);
  sqcRYGate(q, 1.3004437516250702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0021395599020897, 0);
  sqcRYGate(q, -1.1126006500812284, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0318749139908663, 0);
  sqcRYGate(q, 0.8050399843290127, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8293963010617489, 1);
  sqcRYGate(q, 0.6724195103441214, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1949572268314048, 1);
  sqcRYGate(q, -2.3374038763015856, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3616827319562645, 0);
  sqcRYGate(q, -1.28283775938082, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.13735486254584384, 0);
  sqcRYGate(q, 1.3412880654425225, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.03954460884634706, 2);
  sqcRYGate(q, -0.851037871305647, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9014565917120452, 2);
  sqcRYGate(q, -1.0900037870351067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.472006455663725, 0);
  sqcRYGate(q, -1.5767764376274247, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1309797202050414, 0);
  sqcRYGate(q, -1.2572555685480327, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3805669573809363, 1);
  sqcRYGate(q, -1.403871946907768, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9248069135752752, 1);
  sqcRYGate(q, -2.2449326721823173, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8854833730566924, 0);
  sqcRYGate(q, -1.9111901579797728, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0491656370898172, 0);
  sqcRYGate(q, 0.4825378111177372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0976950129662013, 2);
  sqcRYGate(q, 1.06808325961802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09694598955244883, 2);
  sqcRYGate(q, 1.9237741825566905, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3665714142743406, 0);
  sqcRYGate(q, -1.7679271341491152, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.25254847637084, 0);
  sqcRYGate(q, -2.05072044091643, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.95713125525022, 1);
  sqcRYGate(q, -1.8982425836480183, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6964994326807856, 1);
  sqcRYGate(q, -2.659035102181054, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0813782645691297, 0);
  sqcRYGate(q, -2.241197585687451, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9017716877002075, 0);
  sqcRYGate(q, 2.680659309497132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3951699330588277, 2);
  sqcRYGate(q, 0.1449092195631536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.118686375507232, 2);
  sqcRYGate(q, -0.7420732487541, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.303974651685648, 0);
  sqcRYGate(q, -1.343320123251383, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4005383290941562, 0);
  sqcRYGate(q, 0.19333603482285794, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0952585411919182, 1);
  sqcRYGate(q, 2.7712198450793557, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1004773796715048, 1);
  sqcRYGate(q, 0.5416460832434887, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3219109692754785, 0);
  sqcRYGate(q, 3.1181502827615897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9639906733452523, 0);
  sqcRYGate(q, -1.688873182832985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4933469988073504, 2);
  sqcRYGate(q, 0.601879280566119, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.132034698365189, 2);
  sqcRYGate(q, 0.08676420462531542, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.133935812876638, 0);
  sqcRYGate(q, -1.8339743262874861, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0387532757700972, 0);
  sqcRYGate(q, 0.6096403224104607, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1634043408965473, 1);
  sqcRYGate(q, 2.13695340722629, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8498534138754565, 1);
  sqcRYGate(q, 0.9986859282936911, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2666148702205433, 0);
  sqcRYGate(q, -2.891299395346978, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8644989528767648, 0);
  sqcRYGate(q, 0.875204127004799, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.107145805942236, 2);
  sqcRYGate(q, -0.30695666997037385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2196250230565362, 2);
  sqcRYGate(q, -1.0166190889777635, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6990938443590764, 0);
  sqcRYGate(q, 2.2436564963767296, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5316112881980897, 0);
  sqcRYGate(q, 0.9913633596455116, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5994824121222962, 1);
  sqcRYGate(q, 2.579529664195354, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5070228838050053, 1);
  sqcRYGate(q, -1.0833668431542591, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2557615560456568, 0);
  sqcRYGate(q, 2.6109742605679416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8002467525401262, 0);
  sqcRYGate(q, 0.8258291044101446, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11487791585470998, 2);
  sqcRYGate(q, -1.8265377990589138, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.368549325786512, 2);
  sqcRYGate(q, 2.0813394221849024, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6401001205799303, 0);
  sqcRYGate(q, 1.4966497612598306, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3620461246580873, 0);
  sqcRYGate(q, -1.1376380439307852, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0933108100175932, 1);
  sqcRYGate(q, 1.6638228027234456, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5676184570201777, 1);
  sqcRYGate(q, -3.1235453743086277, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3075706608026535, 0);
  sqcRYGate(q, -1.3638282815935412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2284685548412213, 0);
  sqcRYGate(q, -3.0164015492554905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9824794340079643, 2);
  sqcRYGate(q, 0.66817897457553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3626028119372255, 2);
  sqcRYGate(q, -2.0655216546381014, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0468257937055148, 0);
  sqcRYGate(q, 2.5378049718892934, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.073431415833584, 0);
  sqcRYGate(q, -2.672991417890597, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4114632453908615, 1);
  sqcRYGate(q, -0.614544489287867, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4972919357709032, 1);
  sqcRYGate(q, 2.242239830082606, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0177247824719398, 0);
  sqcRYGate(q, -2.2312396186042838, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0544389590730763, 0);
  sqcRYGate(q, -1.7754004188320507, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.963179646587358, 2);
  sqcRYGate(q, -1.3592146091054387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.19672789719881603, 2);
  sqcRYGate(q, -1.405515148573125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.061963583132643, 0);
  sqcRYGate(q, 1.25328844629421, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4146186831150342, 0);
  sqcRYGate(q, -2.9133164380789824, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7705644241437062, 1);
  sqcRYGate(q, 1.8237515703869343, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0494111612058907, 1);
  sqcRYGate(q, -0.76923542344356, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.493606547823776, 0);
  sqcRYGate(q, -0.01953671283314729, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.47758279417844296, 0);
  sqcRYGate(q, -3.0950824844715, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3297226491254746, 2);
  sqcRYGate(q, -0.0032465636918638267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.075213094052875, 2);
  sqcRYGate(q, 1.4121455304290575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.029911428319305, 0);
  sqcRYGate(q, 1.5741736581165562, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6129111040620592, 0);
  sqcRYGate(q, -0.5860942021281064, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8836238064798803, 1);
  sqcRYGate(q, -1.9772256850659173, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9645898848772925, 1);
  sqcRYGate(q, 2.897295974170771, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6501036798741358, 0);
  sqcRYGate(q, 2.967075056548179, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3225462186186832, 0);
  sqcRYGate(q, 1.221527598410586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7989618218279986, 2);
  sqcRYGate(q, 2.0936201087207142, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9368312748212437, 2);
  sqcRYGate(q, 0.2234425606673769, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14440812414082316, 0);
  sqcRYGate(q, -1.304352171285195, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.142933657861002, 0);
  sqcRYGate(q, -1.355555937392234, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5430402820485396, 1);
  sqcRYGate(q, 2.5209819942547624, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7742253996301887, 1);
  sqcRYGate(q, 0.016245547431961604, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8114101714126978, 0);
  sqcRYGate(q, -2.0940765236925287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5316400918525837, 0);
  sqcRYGate(q, -0.6573065983123918, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6749055093530982, 2);
  sqcRYGate(q, -2.323608463704036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6041435038958394, 2);
  sqcRYGate(q, -1.4346827532099502, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.183671107527488, 0);
  sqcRYGate(q, -2.339440296427834, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.025116623332651, 0);
  sqcRYGate(q, 3.035349592406853, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7321584147204971, 1);
  sqcRYGate(q, -0.5039014035871752, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4576036276213546, 1);
  sqcRYGate(q, -2.513347392221594, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.781788306173228, 0);
  sqcRYGate(q, 3.0331973686617952, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5254282573431466, 0);
  sqcRYGate(q, 1.971127722852657, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9899560532257402, 2);
  sqcRYGate(q, -0.5331169575177471, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3822573452943, 2);
  sqcRYGate(q, -0.5415691642925481, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.362301485498239, 0);
  sqcRYGate(q, 0.4368133823563723, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.778265476073586, 0);
  sqcRYGate(q, -0.006677069254176438, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6896722293460817, 1);
  sqcRYGate(q, -2.540946253718273, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4456805975244446, 1);
  sqcRYGate(q, 0.28064464977417225, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1093135209684293, 0);
  sqcRYGate(q, 1.980601867155947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2584838724170728, 0);
  sqcRYGate(q, -1.0619900710032524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.857349165842575, 2);
  sqcRYGate(q, -3.027329675704474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.102653904088481, 2);
  sqcRYGate(q, 1.1760145889745082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9850670424523402, 0);
  sqcRYGate(q, 0.7045935687743703, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.021631958457991, 0);
  sqcRYGate(q, -1.18960412226615, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.168390149582648, 1);
  sqcRYGate(q, -1.4346824439134498, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7287065816751204, 1);
  sqcRYGate(q, 0.4939746184952716, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1019636709849949, 0);
  sqcRYGate(q, 1.2827233837435612, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.205227839671301, 0);
  sqcRYGate(q, 0.09442072783222155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7317252466322952, 2);
  sqcRYGate(q, -2.228314057897553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7347768463332054, 2);
  sqcRYGate(q, -2.2168272250470125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6395935449358943, 0);
  sqcRYGate(q, -0.4381166953066584, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0357162297880786, 0);
  sqcRYGate(q, 2.197852414766591, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.092374350668236, 1);
  sqcRYGate(q, 2.265372215219786, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7029028380245093, 1);
  sqcRYGate(q, 3.0625071747183723, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8549676911119116, 0);
  sqcRYGate(q, -2.9662825439235707, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.758875042282797, 0);
  sqcRYGate(q, -2.2914255301900295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2320605537350584, 2);
  sqcRYGate(q, -0.5212046399676891, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.08096669712337, 2);
  sqcRYGate(q, 0.26899461387745294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1858145718092281, 0);
  sqcRYGate(q, -2.659395427153107, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5501958536173976, 0);
  sqcRYGate(q, -0.7588824310166038, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7099039246077669, 1);
  sqcRYGate(q, -2.3481004456030607, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.036269391919641, 1);
  sqcRYGate(q, 0.846629849197843, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1552191700601617, 0);
  sqcRYGate(q, -1.373024271748692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.04102707025152874, 0);
  sqcRYGate(q, -0.03934669784095846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.20642301894609894, 2);
  sqcRYGate(q, 2.3973223011040563, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09939693798668298, 2);
  sqcRYGate(q, 1.8721120680512546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3842784278641957, 0);
  sqcRYGate(q, 3.0866952800337453, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.297592248283639, 0);
  sqcRYGate(q, -2.6013325205153706, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3955210313399244, 1);
  sqcRYGate(q, -2.0500444767109327, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9623564855353806, 1);
  sqcRYGate(q, 2.8546836757258554, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.345856111497948, 0);
  sqcRYGate(q, -3.0696764471517866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.953641419637946, 0);
  sqcRYGate(q, 2.380160178806646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2972266164130681, 2);
  sqcRYGate(q, 0.6268632556145137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0866741335159995, 2);
  sqcRYGate(q, 2.6028979329860293, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8201327330246038, 0);
  sqcRYGate(q, -2.689217550673345, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0189078200642774, 0);
  sqcRYGate(q, -2.8403763737348844, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6013646534533805, 1);
  sqcRYGate(q, 0.07490517898094406, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8562684889360155, 1);
  sqcRYGate(q, -1.826268142953176, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8064290815729187, 0);
  sqcRYGate(q, 2.1459267218367097, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.45944182235223435, 0);
  sqcRYGate(q, 0.4867605565495694, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5317208256745003, 2);
  sqcRYGate(q, 1.6946104356780127, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4115589421325927, 2);
  sqcRYGate(q, -0.19818997399723415, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.15420530563935664, 0);
  sqcRYGate(q, 2.559279477491414, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0064636946016277, 0);
  sqcRYGate(q, -0.15289921750534052, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.694113006158851, 1);
  sqcRYGate(q, -1.7610506187880455, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.801014063213276, 1);
  sqcRYGate(q, -0.1992879585885343, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1094819993027967, 0);
  sqcRYGate(q, 0.32417122363972517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6261047967264144, 0);
  sqcRYGate(q, -2.7618007200613164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0178561773535755, 2);
  sqcRYGate(q, 1.7140913022530988, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3451612974874085, 2);
  sqcRYGate(q, 0.10434399038551852, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4180953500191729, 0);
  sqcRYGate(q, 2.4630317515504645, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.43953521268750334, 0);
  sqcRYGate(q, 0.5180677093276733, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.602865912424142, 1);
  sqcRYGate(q, 0.3570249246051835, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6971085673080104, 1);
  sqcRYGate(q, 1.2918429934675841, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.19559804222485636, 0);
  sqcRYGate(q, -0.10959867514245046, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7480419629743271, 0);
  sqcRYGate(q, 0.13007048091014806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1598464426482353, 2);
  sqcRYGate(q, 0.9436055986525105, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.322824732990113, 2);
  sqcRYGate(q, 1.1898082757759578, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.493908788060184, 0);
  sqcRYGate(q, -0.8768099618100988, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4307511723444497, 0);
  sqcRYGate(q, -2.5539026513300622, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.296300313224343, 1);
  sqcRYGate(q, 2.7358143486090363, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.06138888127597042, 1);
  sqcRYGate(q, 2.4528110611174725, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.356955932898817, 0);
  sqcRYGate(q, 1.5195120890081513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5811665677901274, 0);
  sqcRYGate(q, 2.4923846753765457, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08963472994762138, 2);
  sqcRYGate(q, 1.2945131785576642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7246760600031061, 2);
  sqcRYGate(q, -3.0132197835531214, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3259750303472737, 0);
  sqcRYGate(q, -0.4841622887981458, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.12160284002134514, 0);
  sqcRYGate(q, -2.48615769135215, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.025076759117964, 1);
  sqcRYGate(q, -0.6947396736929674, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0992351466197774, 1);
  sqcRYGate(q, 3.035532434778071, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.014566570118992102, 0);
  sqcRYGate(q, 0.9719241161770567, 1);
  sqcRYGate(q, -1.728139744742355, 2);
  sqcRYGate(q, 2.742165769071262, 3);

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
