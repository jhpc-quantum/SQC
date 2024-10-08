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

  sqcRYGate(q, 2.777244076464318, 0);
  sqcRYGate(q, -2.483093207882393, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4662574088412064, 0);
  sqcRYGate(q, 2.831486048138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4430453931789138, 1);
  sqcRYGate(q, -0.8338088960495263, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4326504712088841, 1);
  sqcRYGate(q, -0.022765492651975805, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1346494802387976, 2);
  sqcRYGate(q, 0.24517690115700885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5948172563447409, 2);
  sqcRYGate(q, -2.019397529360667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0262479674719494, 3);
  sqcRYGate(q, -1.6611970881801108, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.419461667830701, 3);
  sqcRYGate(q, 2.1359653327659265, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.26154123611742724, 4);
  sqcRYGate(q, 0.6278580110159098, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6498342902369942, 4);
  sqcRYGate(q, 0.7992397651151615, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3673970571673095, 5);
  sqcRYGate(q, 0.7784804243919101, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4352990856730394, 5);
  sqcRYGate(q, 0.019525624152840315, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8042154980718599, 6);
  sqcRYGate(q, -2.518232693623102, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4012419701644733, 6);
  sqcRYGate(q, 1.5404783719075015, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7902319040551664, 0);
  sqcRYGate(q, 0.07952148094045253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.668224213666517, 0);
  sqcRYGate(q, -1.2012278376306753, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4029427165988382, 1);
  sqcRYGate(q, -1.6479441462848872, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3470334624054576, 1);
  sqcRYGate(q, 1.728576461370502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4616454767125389, 2);
  sqcRYGate(q, 0.6552406773782335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.692903623461888, 2);
  sqcRYGate(q, -2.8733383014695435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7962849756307389, 3);
  sqcRYGate(q, -2.4487379369183886, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0506571022412068, 3);
  sqcRYGate(q, 0.40152306514653235, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.25338299841760925, 4);
  sqcRYGate(q, -0.1353576108525072, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9884982251056975, 4);
  sqcRYGate(q, 0.9872320892444657, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4347137049364454, 5);
  sqcRYGate(q, -0.34660858015058066, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4728727312187424, 5);
  sqcRYGate(q, -2.8470787764599255, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5735278137231941, 6);
  sqcRYGate(q, 2.025827540660827, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.205138013103005, 6);
  sqcRYGate(q, 2.023809554848863, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.685323749732308, 0);
  sqcRYGate(q, 1.3273748060921158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8327915039378602, 0);
  sqcRYGate(q, -2.982804593225985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6331322649282204, 1);
  sqcRYGate(q, 0.050036453351176666, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7539214076861223, 1);
  sqcRYGate(q, 0.09259231005532342, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9601300557018781, 2);
  sqcRYGate(q, 2.6447338683903103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6024299436871356, 2);
  sqcRYGate(q, 0.6508559124594804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9904353869719347, 3);
  sqcRYGate(q, -2.6172992263468267, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2824113537716597, 3);
  sqcRYGate(q, -1.5821438619362445, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7497033947267484, 4);
  sqcRYGate(q, 1.4060305627998828, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7442691204219156, 4);
  sqcRYGate(q, 3.0146041115056157, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3131436618915977, 5);
  sqcRYGate(q, -1.9475069275943326, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.66175376949221, 5);
  sqcRYGate(q, -2.9314334930491444, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.055371462909432484, 6);
  sqcRYGate(q, 1.5713952867734005, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.019889963698482, 6);
  sqcRYGate(q, -0.06831280495907262, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9174584288737266, 0);
  sqcRYGate(q, 2.2914477572185645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3275978320180137, 0);
  sqcRYGate(q, -0.056855313079899085, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07987919887361716, 1);
  sqcRYGate(q, 0.20305237121831343, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3322628344769499, 1);
  sqcRYGate(q, 1.675813104378604, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0656241430921334, 2);
  sqcRYGate(q, 2.8566267733518935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.007274920612477429, 2);
  sqcRYGate(q, -0.6109089646068124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3334532539945196, 3);
  sqcRYGate(q, -0.9738148811286909, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9741336488551469, 3);
  sqcRYGate(q, 0.28083107798921975, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.590026989475091, 4);
  sqcRYGate(q, 2.130358040391343, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9309370737654943, 4);
  sqcRYGate(q, 1.393551761915449, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.323954432227236, 5);
  sqcRYGate(q, 2.3909883018265896, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4193721876563186, 5);
  sqcRYGate(q, 3.012260952011025, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9145852262205258, 6);
  sqcRYGate(q, 2.7367646183044223, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3639613745562338, 6);
  sqcRYGate(q, 2.7980457853621363, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.634005298625795, 0);
  sqcRYGate(q, -1.5708132755980826, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4011506318387505, 0);
  sqcRYGate(q, 1.2317694202006386, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2352384098489457, 1);
  sqcRYGate(q, 1.7943506286477433, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6652667756844126, 1);
  sqcRYGate(q, 2.775238889065788, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1675041488666, 2);
  sqcRYGate(q, 1.6945724731362342, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.445780905549222, 2);
  sqcRYGate(q, 2.1819719913574396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1800149050811717, 3);
  sqcRYGate(q, -0.8367264632868894, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.270014968695519, 3);
  sqcRYGate(q, -1.0386842851492564, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0021637760406144, 4);
  sqcRYGate(q, -3.099309024461706, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.509644044986815, 4);
  sqcRYGate(q, -1.2808331937705608, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1283909376571746, 5);
  sqcRYGate(q, 2.638865352367418, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1794192089303337, 5);
  sqcRYGate(q, 2.2292353582332867, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0028850144340159816, 6);
  sqcRYGate(q, 2.9213793603648246, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3530106055442621, 6);
  sqcRYGate(q, 2.627686191896378, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7470242259720394, 0);
  sqcRYGate(q, 0.08663055571558687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1415284602172493, 0);
  sqcRYGate(q, 1.4260986288680337, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5718457044126977, 1);
  sqcRYGate(q, 2.041284153897822, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8950790246836062, 1);
  sqcRYGate(q, 1.6484022709754529, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7572823192349709, 2);
  sqcRYGate(q, 0.6318257347590561, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4546473965667186, 2);
  sqcRYGate(q, -2.7216038681585624, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7610576943992002, 3);
  sqcRYGate(q, 3.0913544113920044, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1596289290734452, 3);
  sqcRYGate(q, -2.463457783242743, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2471396634221934, 4);
  sqcRYGate(q, -3.0090658430310504, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1565046759787254, 4);
  sqcRYGate(q, 2.537316519048807, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.11642800531315, 5);
  sqcRYGate(q, -2.4463556549648553, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5376412492100329, 5);
  sqcRYGate(q, 2.097984190529081, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.14653073484311907, 6);
  sqcRYGate(q, 3.015123027586659, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.113339292957408, 6);
  sqcRYGate(q, -2.8105288050492923, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0623175109033094, 0);
  sqcRYGate(q, 0.007749519661034654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2837326477036215, 0);
  sqcRYGate(q, -1.8326792407332366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8842319552620301, 1);
  sqcRYGate(q, -1.1518253404624372, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9933540226518214, 1);
  sqcRYGate(q, 0.9904223667045056, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4209075597359444, 2);
  sqcRYGate(q, -2.0645551618856013, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1723178295318926, 2);
  sqcRYGate(q, -1.4357546955610445, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.281669488237964, 3);
  sqcRYGate(q, -1.9951401858956355, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.07995653075386411, 3);
  sqcRYGate(q, -1.9091321753815658, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0808385719905065, 4);
  sqcRYGate(q, -0.04486801364566251, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5099675622033046, 4);
  sqcRYGate(q, -0.48286881724180397, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1011662793108572, 5);
  sqcRYGate(q, -0.012719206137886485, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.513472559332415, 5);
  sqcRYGate(q, -0.0880482816253275, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8731045038109925, 6);
  sqcRYGate(q, 0.7494073633697509, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.415929917957558, 6);
  sqcRYGate(q, 1.4344926434875296, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0611906103495905, 0);
  sqcRYGate(q, -1.9972368383852794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7413322954068784, 0);
  sqcRYGate(q, -2.0089789731916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7180455245592441, 1);
  sqcRYGate(q, 1.1395862535570886, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5189954387554592, 1);
  sqcRYGate(q, -1.322505518811668, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9923395927387928, 2);
  sqcRYGate(q, 0.4126027940084045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4179184030929974, 2);
  sqcRYGate(q, -2.4847192627609567, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5846810150589343, 3);
  sqcRYGate(q, 0.982303790737084, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.261579069944661, 3);
  sqcRYGate(q, -1.7029462581418375, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1582137484844557, 4);
  sqcRYGate(q, -2.453318164617551, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8060215844502734, 4);
  sqcRYGate(q, 1.5106501198278162, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.909042113172639, 5);
  sqcRYGate(q, 0.725673468711558, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3698149975527373, 5);
  sqcRYGate(q, -1.601912113259143, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8108453633422874, 6);
  sqcRYGate(q, 1.9546516868488055, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5375765157916765, 6);
  sqcRYGate(q, 0.5320399123504388, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.12939923659386032, 0);
  sqcRYGate(q, 2.5474032109554936, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3572348955244165, 0);
  sqcRYGate(q, -2.05726906205647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8336309376762614, 1);
  sqcRYGate(q, 1.615913833499859, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.071411585205641, 1);
  sqcRYGate(q, 1.9663237502636015, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0547041610533536, 2);
  sqcRYGate(q, 1.3338827748607907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.231901738532866, 2);
  sqcRYGate(q, -2.5570871052292765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5285421174656414, 3);
  sqcRYGate(q, -0.3585900870113701, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5724670455861123, 3);
  sqcRYGate(q, -2.27408798010043, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7547466279757142, 4);
  sqcRYGate(q, 0.9027992157337001, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.04269249962310795, 4);
  sqcRYGate(q, -2.5863818313342906, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8639631019672507, 5);
  sqcRYGate(q, -1.1652018802902182, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4931208321683656, 5);
  sqcRYGate(q, 2.3299302799501223, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6883108822381416, 6);
  sqcRYGate(q, -1.7021543052350048, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.1228422666942741, 6);
  sqcRYGate(q, 0.3479865405246718, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2528544343601848, 0);
  sqcRYGate(q, 0.48998014623736985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06265721474599152, 0);
  sqcRYGate(q, 2.946851829700104, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6177203418421904, 1);
  sqcRYGate(q, -0.8726021474772203, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2528202975443063, 1);
  sqcRYGate(q, 1.9146334418896451, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8918629850349173, 2);
  sqcRYGate(q, -0.9777120465507795, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6268033227245557, 2);
  sqcRYGate(q, 0.5763807589974399, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.271442348214645, 3);
  sqcRYGate(q, -2.831389721478467, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5763222583873358, 3);
  sqcRYGate(q, 2.2017302666961447, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5243890098034734, 4);
  sqcRYGate(q, -2.3293896991591905, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.186886376092808, 4);
  sqcRYGate(q, -2.8962004027306207, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4725001053033917, 5);
  sqcRYGate(q, 1.3205073413040944, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7734180070402292, 5);
  sqcRYGate(q, -0.6966879630818594, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6947597986428544, 6);
  sqcRYGate(q, 1.0667144894708178, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4817982026498093, 6);
  sqcRYGate(q, -0.5705465186851775, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2661998815345785, 0);
  sqcRYGate(q, 1.0957594876704484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.089668729808726, 0);
  sqcRYGate(q, -2.173668326176915, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.872447208442509, 1);
  sqcRYGate(q, -3.0694677589213084, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.383138590852416, 1);
  sqcRYGate(q, 3.0216985477904457, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6847121514352983, 2);
  sqcRYGate(q, 0.4398024414255969, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.903022299563073, 2);
  sqcRYGate(q, 0.7051115079509856, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5901685202634148, 3);
  sqcRYGate(q, 2.8466739431557393, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1755147491315187, 3);
  sqcRYGate(q, -2.94132108596691, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.10360666723616523, 4);
  sqcRYGate(q, 2.038065609612163, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.18128501539658792, 4);
  sqcRYGate(q, 0.819293887032471, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2155081647291297, 5);
  sqcRYGate(q, 1.500302531456438, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7763299999442063, 5);
  sqcRYGate(q, -3.08505024867545, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.16991635935479896, 6);
  sqcRYGate(q, -2.880386946100468, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6959554088062966, 6);
  sqcRYGate(q, -0.08848852717062528, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.549760200493444, 0);
  sqcRYGate(q, -2.0979642847248776, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5601089033161752, 0);
  sqcRYGate(q, 3.110790695378394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0290782950315591, 1);
  sqcRYGate(q, 2.2236221587486362, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6803130412218032, 1);
  sqcRYGate(q, -1.0330519617807683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5294446434240365, 2);
  sqcRYGate(q, -1.0095249406662186, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1299529572144147, 2);
  sqcRYGate(q, 0.4384038443325279, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2873784971675071, 3);
  sqcRYGate(q, 0.4946199353997312, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3991594057083463, 3);
  sqcRYGate(q, -1.9718637435931923, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.35748920948594154, 4);
  sqcRYGate(q, 1.1893364209493855, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6993290209587064, 4);
  sqcRYGate(q, -0.15910972297964676, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9114223674168453, 5);
  sqcRYGate(q, -1.6682040841822534, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1798498164121574, 5);
  sqcRYGate(q, 1.0027494639509698, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0992364221464932, 6);
  sqcRYGate(q, -1.0239318222573264, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4283744824374072, 6);
  sqcRYGate(q, 2.1359851411502193, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0526429063348095, 0);
  sqcRYGate(q, 0.13886408249064738, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.033386495213306, 0);
  sqcRYGate(q, 2.852246126961324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.331011970324631, 1);
  sqcRYGate(q, 1.1164055798928043, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3569809609837096, 1);
  sqcRYGate(q, -2.8447098301455243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0366469805537033, 2);
  sqcRYGate(q, 2.190120035707751, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9751488742693835, 2);
  sqcRYGate(q, 1.9239818198518195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.425302406997168, 3);
  sqcRYGate(q, 2.1021708796789245, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.13140981119489936, 3);
  sqcRYGate(q, 1.967601645907216, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2903363389511417, 4);
  sqcRYGate(q, 1.3641948518751068, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.126049368308535, 4);
  sqcRYGate(q, -1.571161769050558, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.339743532889764, 5);
  sqcRYGate(q, -2.977459344025914, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3237157508091966, 5);
  sqcRYGate(q, 2.3849347328757013, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.32364844610929455, 6);
  sqcRYGate(q, 1.421118640420202, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8880782479131475, 6);
  sqcRYGate(q, 2.3323851127220583, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6259169722286239, 0);
  sqcRYGate(q, 1.4965805434335282, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7659669809798708, 0);
  sqcRYGate(q, -3.036410546677526, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.027445231853718, 1);
  sqcRYGate(q, -1.1997800756211483, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.369365262401725, 1);
  sqcRYGate(q, 1.8039999326725251, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.732304797529488, 2);
  sqcRYGate(q, -0.38924671108780373, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7775594623042008, 2);
  sqcRYGate(q, 1.0150307373694485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5557592682522947, 3);
  sqcRYGate(q, -0.02072610028435154, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5309998779319963, 3);
  sqcRYGate(q, 0.08063271453714727, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3608720861528294, 4);
  sqcRYGate(q, 2.23596613190453, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7843956295092799, 4);
  sqcRYGate(q, -2.0665141823328765, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.122150951189255, 5);
  sqcRYGate(q, -1.2036882410973613, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1670725139625464, 5);
  sqcRYGate(q, 0.17001747818846535, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.015696378352434922, 6);
  sqcRYGate(q, 1.613837938550529, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2931448054605337, 6);
  sqcRYGate(q, 2.1684401501545008, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.623091890668642, 0);
  sqcRYGate(q, 2.257308994506215, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6716297937388567, 0);
  sqcRYGate(q, 2.613158286134018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9348658200787436, 1);
  sqcRYGate(q, -0.9486863045063259, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.07546181977206423, 1);
  sqcRYGate(q, -2.453699036257882, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6447418892473884, 2);
  sqcRYGate(q, 0.17916920729520158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4561098996642878, 2);
  sqcRYGate(q, 0.8446523604964025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14044844726196715, 3);
  sqcRYGate(q, -0.5927358479392026, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.11192319736892, 3);
  sqcRYGate(q, -0.410065839198535, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0049253114083492, 4);
  sqcRYGate(q, -0.6035243369200156, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7045590393190766, 4);
  sqcRYGate(q, -0.44315328850410174, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.06261132446022975, 5);
  sqcRYGate(q, 0.7144371279312675, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0095324182715326, 5);
  sqcRYGate(q, 0.9897720926606627, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.915483072926592, 6);
  sqcRYGate(q, -1.763169840684963, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4195542480454741, 6);
  sqcRYGate(q, 1.2941406461590408, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7175350015594847, 0);
  sqcRYGate(q, -1.6745733402138248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.04855232769862994, 0);
  sqcRYGate(q, 1.5345007892668263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0518803357428883, 1);
  sqcRYGate(q, -2.5381291709651856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6847001466693987, 1);
  sqcRYGate(q, -0.19026944643852683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5707489689823252, 2);
  sqcRYGate(q, 1.1152430202213832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8484898105475197, 2);
  sqcRYGate(q, -1.7634083236481048, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.914795443480136, 3);
  sqcRYGate(q, 1.7925294635908111, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8554051470087467, 3);
  sqcRYGate(q, 0.016769101258145902, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.142332602847562, 4);
  sqcRYGate(q, -1.031566776321573, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5620584972060838, 4);
  sqcRYGate(q, -0.17415477176891883, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5381685841656473, 5);
  sqcRYGate(q, -0.699230418742645, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.575547714360133, 5);
  sqcRYGate(q, 2.396964025386273, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6847056187500677, 6);
  sqcRYGate(q, -2.6311830783870915, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.791499693422647, 6);
  sqcRYGate(q, 2.727636974535255, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.014955401717797301, 0);
  sqcRYGate(q, -1.803211433452911, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.82887144788425, 0);
  sqcRYGate(q, -1.4689623246634844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2917810813326875, 1);
  sqcRYGate(q, -2.3119310668601445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3029988431498754, 1);
  sqcRYGate(q, -2.846355320849585, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.107049236348077, 2);
  sqcRYGate(q, -2.5046348906276665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.918616787172538, 2);
  sqcRYGate(q, 2.358523858580654, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.693250782162549, 3);
  sqcRYGate(q, 0.5462404513285399, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7414830230203249, 3);
  sqcRYGate(q, 0.21479927702266696, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.698615797645855, 4);
  sqcRYGate(q, -0.2535583706480695, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8666191324363606, 4);
  sqcRYGate(q, 2.4126289917155517, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.325471238728759, 5);
  sqcRYGate(q, -2.942393815079203, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1271367045040694, 5);
  sqcRYGate(q, 2.0587156032571574, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.14079818301636, 6);
  sqcRYGate(q, 1.7259566888061897, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.925152846532149, 6);
  sqcRYGate(q, -1.4565797153270912, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0036668945878406, 0);
  sqcRYGate(q, 1.6831997314133451, 1);
  sqcRYGate(q, -2.0158793867156, 2);
  sqcRYGate(q, 0.5509772612785975, 3);
  sqcRYGate(q, 0.6152361226467523, 4);
  sqcRYGate(q, 3.1137942607879148, 5);
  sqcRYGate(q, 2.5589112928845372, 6);
  sqcRYGate(q, -1.0897072870985411, 7);

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
