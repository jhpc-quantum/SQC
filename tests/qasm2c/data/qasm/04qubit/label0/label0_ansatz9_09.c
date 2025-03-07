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

  sqcRYGate(q, 1.3192450002530993, 0);
  sqcRYGate(q, 0.44083445120476306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.482962263236953, 0);
  sqcRYGate(q, 1.2791725200485413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0147567700127262, 2);
  sqcRYGate(q, 2.342072760843505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1253727816766, 2);
  sqcRYGate(q, -0.7467430818123527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1746477186684583, 0);
  sqcRYGate(q, 2.2258025488537876, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.14016654085551128, 0);
  sqcRYGate(q, -0.456821637162105, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8655934450030298, 1);
  sqcRYGate(q, -0.2922977870149719, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6070249938348863, 1);
  sqcRYGate(q, 0.5711028679098812, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8639348378413947, 0);
  sqcRYGate(q, -2.772564701722196, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7531050075420822, 0);
  sqcRYGate(q, -2.4472462065645675, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6198462641256323, 1);
  sqcRYGate(q, 0.5177739822643002, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.236745159227396, 1);
  sqcRYGate(q, -1.65611588325284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4969322211769933, 0);
  sqcRYGate(q, 1.470279328305506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.040686634331615755, 0);
  sqcRYGate(q, 1.8803410917363383, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4035293233968744, 2);
  sqcRYGate(q, 1.8214837786652005, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6221953400459059, 2);
  sqcRYGate(q, -0.6362938375411051, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2602762278300634, 0);
  sqcRYGate(q, -2.8062868082326786, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9363406882581056, 0);
  sqcRYGate(q, 3.1170914855825584, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1360363451514779, 1);
  sqcRYGate(q, -0.07782349192909699, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7321242122467027, 1);
  sqcRYGate(q, -2.765190466354456, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8369490379756377, 0);
  sqcRYGate(q, -2.1083225454696617, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8080301762268521, 0);
  sqcRYGate(q, 1.3769794436186338, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5945825781589407, 1);
  sqcRYGate(q, -1.2650580114125645, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.02793636010171152, 1);
  sqcRYGate(q, -0.42034144534749013, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6736760726899793, 0);
  sqcRYGate(q, 1.9800458395456646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.364252612647336, 0);
  sqcRYGate(q, 2.4400889075034233, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0572749331315503, 2);
  sqcRYGate(q, -1.0610423865606686, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5046116958526174, 2);
  sqcRYGate(q, 2.3617855921134923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.636821147695611, 0);
  sqcRYGate(q, -2.4318732197583897, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1206450130506702, 0);
  sqcRYGate(q, -0.41970023490388847, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.146083598594233, 1);
  sqcRYGate(q, 0.31982788596141765, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7744146060243906, 1);
  sqcRYGate(q, -1.0392332927564751, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.364204369301035, 0);
  sqcRYGate(q, -1.4436558976793066, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.614508968446058, 0);
  sqcRYGate(q, 1.4711595475045498, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9814798429547203, 1);
  sqcRYGate(q, -0.015698195497699314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.566917346310853, 1);
  sqcRYGate(q, 0.9841901977903333, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6398498140138864, 0);
  sqcRYGate(q, -0.5026182252153317, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5049915418337583, 0);
  sqcRYGate(q, 1.3761107235881005, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.224549070030049, 2);
  sqcRYGate(q, -1.4671427847410021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1263445249112203, 2);
  sqcRYGate(q, 0.2290348694629112, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2254351853326433, 0);
  sqcRYGate(q, 0.8107533783062247, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.419281806103805, 0);
  sqcRYGate(q, 2.1866006092866956, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5514175757998943, 1);
  sqcRYGate(q, 0.8984754570619461, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.062288334208355944, 1);
  sqcRYGate(q, 2.3067861365208153, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7063881723913624, 0);
  sqcRYGate(q, -2.346972907079373, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8440174755573222, 0);
  sqcRYGate(q, -2.2752071231614703, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6909097222439624, 1);
  sqcRYGate(q, -2.582441351864052, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.40757872730198597, 1);
  sqcRYGate(q, -0.4047760234033238, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08705153668862042, 0);
  sqcRYGate(q, 2.9673005541320947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2810952469071024, 0);
  sqcRYGate(q, 2.7636906838166584, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.179691019751571, 2);
  sqcRYGate(q, -3.095866257967691, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.190012216879535, 2);
  sqcRYGate(q, -3.0346898212222655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7741560411592663, 0);
  sqcRYGate(q, -0.6615053506813574, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.985092696881419, 0);
  sqcRYGate(q, -0.49840475100767456, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.805939621387284, 1);
  sqcRYGate(q, 2.457922468488694, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5951105886005992, 1);
  sqcRYGate(q, -2.095733251150938, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.261944715486952, 0);
  sqcRYGate(q, 2.3146998759774235, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9102581963159961, 0);
  sqcRYGate(q, 0.6501100791877858, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0521142662509406, 1);
  sqcRYGate(q, -2.2824039242298633, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9338693447826283, 1);
  sqcRYGate(q, 2.5696760252074493, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.932845293911169, 0);
  sqcRYGate(q, -0.5220031693481142, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7548393183434325, 0);
  sqcRYGate(q, 3.002623436417486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6582398936147191, 2);
  sqcRYGate(q, -1.5065923359357374, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6498246740591718, 2);
  sqcRYGate(q, 1.334727422539875, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8194317939835687, 0);
  sqcRYGate(q, -2.1172433485039432, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6716235617061717, 0);
  sqcRYGate(q, 0.7337581909444637, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.15341813389076, 1);
  sqcRYGate(q, 2.7627831687780264, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0564513370176565, 1);
  sqcRYGate(q, 1.738008430346354, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1635006514371897, 0);
  sqcRYGate(q, -1.1526730395622684, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3187322854694097, 0);
  sqcRYGate(q, 3.0721389958640506, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.62071932332441, 1);
  sqcRYGate(q, 1.9019820031856232, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6049536485492681, 1);
  sqcRYGate(q, 1.6973168896403088, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.05819130675225947, 0);
  sqcRYGate(q, -1.436874273350388, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.051300760229853, 0);
  sqcRYGate(q, -2.5160844866989307, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2004937704145588, 2);
  sqcRYGate(q, 1.5689057202451584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.90078427486701, 2);
  sqcRYGate(q, 0.2447792488238507, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9215037310187988, 0);
  sqcRYGate(q, -2.140647515109899, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4954174256988741, 0);
  sqcRYGate(q, 0.7658335334387316, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.14756571055813783, 1);
  sqcRYGate(q, 0.587638956855149, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.41630243034022585, 1);
  sqcRYGate(q, 2.3789522874792977, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1636882745718165, 0);
  sqcRYGate(q, -0.47638942631735226, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.18900034695358112, 0);
  sqcRYGate(q, 0.028415989688802767, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9500170158706016, 1);
  sqcRYGate(q, 2.8765677785465456, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5397707012139461, 1);
  sqcRYGate(q, 1.3027753130661752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9046673800952538, 0);
  sqcRYGate(q, -2.414104063009683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1284312680769713, 0);
  sqcRYGate(q, 0.5620382576274637, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9182657586724545, 2);
  sqcRYGate(q, -1.4158023798877295, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.227931839237952, 2);
  sqcRYGate(q, 0.8648970236837945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6256124259247233, 0);
  sqcRYGate(q, -3.1104438448422544, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4388204635559934, 0);
  sqcRYGate(q, 2.1215109968829244, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.328951047382197, 1);
  sqcRYGate(q, 2.6507041133688283, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7625630627621227, 1);
  sqcRYGate(q, -0.08077181661437915, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.803491027575982, 0);
  sqcRYGate(q, 0.6844903104827951, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.041233343986441, 0);
  sqcRYGate(q, 0.2129153603665577, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8614044208866191, 1);
  sqcRYGate(q, 2.4861543265009156, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.971519197148032, 1);
  sqcRYGate(q, -0.6306444090979934, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3036658393449603, 0);
  sqcRYGate(q, -0.41757008228691284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9087832214728158, 0);
  sqcRYGate(q, -1.3980407477339445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.707713927876022, 2);
  sqcRYGate(q, -3.072445652167231, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.011956722393509, 2);
  sqcRYGate(q, -1.0476081648618711, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9085105761443133, 0);
  sqcRYGate(q, -1.4831826982455985, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7342738835352789, 0);
  sqcRYGate(q, 1.193022458526032, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5043652134257117, 1);
  sqcRYGate(q, -0.8421916604076403, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.134251660962579, 1);
  sqcRYGate(q, 1.8006656203910074, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2590494283307843, 0);
  sqcRYGate(q, 0.2594594653980379, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8849381462988237, 0);
  sqcRYGate(q, 0.47000816711632964, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7113483919681638, 1);
  sqcRYGate(q, 0.4568487769553035, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5600792285790837, 1);
  sqcRYGate(q, 2.7428186036433715, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2615499605673559, 0);
  sqcRYGate(q, -1.3542410458811631, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5632949640109752, 0);
  sqcRYGate(q, -2.78089117397923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3208670086248744, 2);
  sqcRYGate(q, 2.4340360203415834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9190671813905151, 2);
  sqcRYGate(q, -3.1033430289273274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.46724821937087846, 0);
  sqcRYGate(q, 1.4377405795134472, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3846435117968765, 0);
  sqcRYGate(q, -0.6701493658402784, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9092532823551638, 1);
  sqcRYGate(q, -2.1994558383998766, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.894339113071176, 1);
  sqcRYGate(q, -2.020866425967364, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7587382359105312, 0);
  sqcRYGate(q, 1.2140256447146731, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9614042114092518, 0);
  sqcRYGate(q, -2.5441205030339655, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7688147225817081, 1);
  sqcRYGate(q, 0.20707290346720664, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6161599783305745, 1);
  sqcRYGate(q, -2.4880692228060157, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7751690310051176, 0);
  sqcRYGate(q, 0.8473578811667055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.281803567622801, 0);
  sqcRYGate(q, 0.401621032496226, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.408663678312005, 2);
  sqcRYGate(q, -3.0871953506381296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7471755692484843, 2);
  sqcRYGate(q, -2.53268197557543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8622013605185331, 0);
  sqcRYGate(q, -0.7205583584222301, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2256199007120294, 0);
  sqcRYGate(q, 0.4853532785993613, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.127922123259868, 1);
  sqcRYGate(q, 0.7713357504364122, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3141534507737633, 1);
  sqcRYGate(q, 3.124059024095817, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7761581538540215, 0);
  sqcRYGate(q, -1.540391202850172, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5589780841678169, 0);
  sqcRYGate(q, -1.1288342478761866, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.396159092071285, 1);
  sqcRYGate(q, -0.8122860384951629, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.037471513114798, 1);
  sqcRYGate(q, -0.5897852209399255, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0412601747381893, 0);
  sqcRYGate(q, 0.5051358718685748, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9984535473794374, 0);
  sqcRYGate(q, -2.7751225696887993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3271403384608, 2);
  sqcRYGate(q, 0.24668642714947975, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8081333398929873, 2);
  sqcRYGate(q, 1.570136235454763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.653955180688607, 0);
  sqcRYGate(q, -2.5802124010715084, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1738993269110383, 0);
  sqcRYGate(q, 2.4329200082016915, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2899880511643085, 1);
  sqcRYGate(q, 1.8363059903872374, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.977563821121616, 1);
  sqcRYGate(q, -0.7545676861019492, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8464734917604817, 0);
  sqcRYGate(q, -0.6595472666203559, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.09570163407417631, 0);
  sqcRYGate(q, -2.9464071803005076, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.37581619283946943, 1);
  sqcRYGate(q, 0.7194589198234018, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.15598096712407, 1);
  sqcRYGate(q, -1.1118684823814995, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5800353660923881, 0);
  sqcRYGate(q, 2.300219182192115, 1);
  sqcRYGate(q, 2.102767268053273, 2);
  sqcRYGate(q, 2.755747355466044, 3);

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
