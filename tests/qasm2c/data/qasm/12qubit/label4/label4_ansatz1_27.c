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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 3.0718019836078847, 0);
  sqcRZGate(q, 0.1828300174101607, 0);
  sqcRYGate(q, -2.5927079468196053, 1);
  sqcRZGate(q, -1.0783305911369885, 1);
  sqcRYGate(q, -2.4284077837589417, 2);
  sqcRZGate(q, -0.2389514307912091, 2);
  sqcRYGate(q, 0.896430658642972, 3);
  sqcRZGate(q, 2.061605619037633, 3);
  sqcRYGate(q, 0.010180985343807503, 4);
  sqcRZGate(q, 0.9089458630539096, 4);
  sqcRYGate(q, 1.3924215144755037, 5);
  sqcRZGate(q, -2.790261781392398, 5);
  sqcRYGate(q, 0.4532045326466365, 6);
  sqcRZGate(q, 1.7595329252721723, 6);
  sqcRYGate(q, -2.0532687589054657, 7);
  sqcRZGate(q, 1.9334082806558621, 7);
  sqcRYGate(q, -2.507478803914345, 8);
  sqcRZGate(q, 0.45014022364825723, 8);
  sqcRYGate(q, -1.2149562690081923, 9);
  sqcRZGate(q, -2.562432324856308, 9);
  sqcRYGate(q, 1.6889997667722816, 10);
  sqcRZGate(q, -0.9694083941104116, 10);
  sqcRYGate(q, -2.9925548379725773, 11);
  sqcRZGate(q, 1.3240351372192207, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.2416785186003403, 0);
  sqcRZGate(q, -1.885119814356604, 0);
  sqcRYGate(q, -0.11403139222363468, 1);
  sqcRZGate(q, -0.620884172812837, 1);
  sqcRYGate(q, -0.4456314758117736, 2);
  sqcRZGate(q, -1.25412267223843, 2);
  sqcRYGate(q, -2.1266906573093367, 3);
  sqcRZGate(q, 1.175750340291261, 3);
  sqcRYGate(q, 0.03996824610514871, 4);
  sqcRZGate(q, -1.707724582943083, 4);
  sqcRYGate(q, -2.046598858937544, 5);
  sqcRZGate(q, -1.6808841498681353, 5);
  sqcRYGate(q, -0.017722466229286304, 6);
  sqcRZGate(q, 1.5523798528925765, 6);
  sqcRYGate(q, -3.13394801025821, 7);
  sqcRZGate(q, 1.9647823634044403, 7);
  sqcRYGate(q, 2.0639049878832507, 8);
  sqcRZGate(q, 1.8058047523608824, 8);
  sqcRYGate(q, 1.3928358424350264, 9);
  sqcRZGate(q, -1.8331383426920445, 9);
  sqcRYGate(q, -0.7958806521527091, 10);
  sqcRZGate(q, 2.5695040294291855, 10);
  sqcRYGate(q, 0.5567798559636029, 11);
  sqcRZGate(q, 3.1052922599200885, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.383160171957809, 0);
  sqcRZGate(q, -2.255027534713619, 0);
  sqcRYGate(q, 3.097138322688796, 1);
  sqcRZGate(q, -2.3891835176624747, 1);
  sqcRYGate(q, 0.2676085688527605, 2);
  sqcRZGate(q, 1.524099622530561, 2);
  sqcRYGate(q, 0.7690915940712462, 3);
  sqcRZGate(q, -1.5642832935366038, 3);
  sqcRYGate(q, -0.008314471574456308, 4);
  sqcRZGate(q, 0.3880879735446901, 4);
  sqcRYGate(q, -0.012995682255752209, 5);
  sqcRZGate(q, 0.3539886312048495, 5);
  sqcRYGate(q, -1.9819776288635271, 6);
  sqcRZGate(q, 0.46003059363051074, 6);
  sqcRYGate(q, 1.2310598803438653, 7);
  sqcRZGate(q, -2.1310391097696955, 7);
  sqcRYGate(q, -1.5467520863570359, 8);
  sqcRZGate(q, 2.02765012454947, 8);
  sqcRYGate(q, 1.3321253370249087, 9);
  sqcRZGate(q, -2.6836926834985757, 9);
  sqcRYGate(q, -0.5150233500221669, 10);
  sqcRZGate(q, -2.944646695614713, 10);
  sqcRYGate(q, 1.1450538848380898, 11);
  sqcRZGate(q, -0.972324498295056, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.415032245312202, 0);
  sqcRZGate(q, 2.487718620143357, 0);
  sqcRYGate(q, -0.331815375782948, 1);
  sqcRZGate(q, -0.8977179630548422, 1);
  sqcRYGate(q, 1.6088589938111169, 2);
  sqcRZGate(q, -1.8101044613426582, 2);
  sqcRYGate(q, -1.8108599958714917, 3);
  sqcRZGate(q, 1.7775921102407988, 3);
  sqcRYGate(q, -1.9714100087438462, 4);
  sqcRZGate(q, 1.3746621325144652, 4);
  sqcRYGate(q, -2.7614765547971847, 5);
  sqcRZGate(q, -0.753720614665788, 5);
  sqcRYGate(q, -2.3773518900756834, 6);
  sqcRZGate(q, 2.4854885156959834, 6);
  sqcRYGate(q, 2.5423086826782666, 7);
  sqcRZGate(q, -0.9908945648943949, 7);
  sqcRYGate(q, -2.482826854870663, 8);
  sqcRZGate(q, 0.24601409238308228, 8);
  sqcRYGate(q, -2.217861631289161, 9);
  sqcRZGate(q, -0.07205937123424722, 9);
  sqcRYGate(q, -0.010201658522274393, 10);
  sqcRZGate(q, -3.132807138495144, 10);
  sqcRYGate(q, -2.5366730658709082, 11);
  sqcRZGate(q, -0.9150868141566589, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.052216315830362, 0);
  sqcRZGate(q, -0.9505744698206922, 0);
  sqcRYGate(q, 1.2904037386033673, 1);
  sqcRZGate(q, 0.2578538522450008, 1);
  sqcRYGate(q, 2.1721963752919775, 2);
  sqcRZGate(q, 2.5804476198466815, 2);
  sqcRYGate(q, -3.0907356105164845, 3);
  sqcRZGate(q, 2.1102577539392167, 3);
  sqcRYGate(q, -3.1229838189021395, 4);
  sqcRZGate(q, 2.7729717176689954, 4);
  sqcRYGate(q, -1.8067559519620264, 5);
  sqcRZGate(q, -0.0008089282125363083, 5);
  sqcRYGate(q, 2.8725747655026743, 6);
  sqcRZGate(q, 2.592124959836251, 6);
  sqcRYGate(q, 0.03309642585045136, 7);
  sqcRZGate(q, 0.2904444562711834, 7);
  sqcRYGate(q, 0.7467838574400124, 8);
  sqcRZGate(q, -1.7990529647906683, 8);
  sqcRYGate(q, 2.534766793242763, 9);
  sqcRZGate(q, 2.4644474536416374, 9);
  sqcRYGate(q, 0.03651933317235687, 10);
  sqcRZGate(q, -2.1644807596829345, 10);
  sqcRYGate(q, -1.1582131266712743, 11);
  sqcRZGate(q, -0.2681630142048348, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.7982980084017837, 0);
  sqcRZGate(q, 2.0913624944567806, 0);
  sqcRYGate(q, 0.4053092024145453, 1);
  sqcRZGate(q, -0.12852695683417004, 1);
  sqcRYGate(q, -1.8314996399645578, 2);
  sqcRZGate(q, -3.021000226711252, 2);
  sqcRYGate(q, -1.0354653469020958, 3);
  sqcRZGate(q, 0.6932841231272115, 3);
  sqcRYGate(q, 1.4028576202606207, 4);
  sqcRZGate(q, -0.1299395035355051, 4);
  sqcRYGate(q, -0.5918846876024044, 5);
  sqcRZGate(q, 2.6190549646791252, 5);
  sqcRYGate(q, 3.1363090477759434, 6);
  sqcRZGate(q, -2.529652107931226, 6);
  sqcRYGate(q, -1.9993566740660436, 7);
  sqcRZGate(q, 2.4167866451912383, 7);
  sqcRYGate(q, -1.2448210557852892, 8);
  sqcRZGate(q, -2.3954266153416572, 8);
  sqcRYGate(q, 1.8218958405774235, 9);
  sqcRZGate(q, -2.9456338402928046, 9);
  sqcRYGate(q, -0.5072448954945586, 10);
  sqcRZGate(q, -1.789686021783674, 10);
  sqcRYGate(q, 0.33015174226628563, 11);
  sqcRZGate(q, 0.10625220677503311, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.2557278517150703, 0);
  sqcRZGate(q, 0.8598759791812594, 0);
  sqcRYGate(q, -1.3267633625314779, 1);
  sqcRZGate(q, 1.2764629163225476, 1);
  sqcRYGate(q, 0.8511020280424662, 2);
  sqcRZGate(q, 2.6652376391416963, 2);
  sqcRYGate(q, 3.1118376842860367, 3);
  sqcRZGate(q, -0.7593577422288769, 3);
  sqcRYGate(q, -0.048827875763876705, 4);
  sqcRZGate(q, -1.9733105794086228, 4);
  sqcRYGate(q, -2.050796833100241, 5);
  sqcRZGate(q, 1.984669674490763, 5);
  sqcRYGate(q, -1.2348957195965755, 6);
  sqcRZGate(q, -0.3330213789583431, 6);
  sqcRYGate(q, 3.0416129618142316, 7);
  sqcRZGate(q, 0.4564942056575089, 7);
  sqcRYGate(q, -0.030483844050715518, 8);
  sqcRZGate(q, 2.846647488582468, 8);
  sqcRYGate(q, -1.0878910663170862, 9);
  sqcRZGate(q, -0.4908037849998585, 9);
  sqcRYGate(q, -1.5920337343467503, 10);
  sqcRZGate(q, -0.002223509332115014, 10);
  sqcRYGate(q, 0.02333170574302108, 11);
  sqcRZGate(q, 1.8844243781237038, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.0480179778327514, 0);
  sqcRZGate(q, -1.9603808499639737, 0);
  sqcRYGate(q, -2.6834862396248513, 1);
  sqcRZGate(q, -2.9442225002918816, 1);
  sqcRYGate(q, 1.02524382248306, 2);
  sqcRZGate(q, 2.726721690204436, 2);
  sqcRYGate(q, -0.6343097830548885, 3);
  sqcRZGate(q, 1.0595749653866742, 3);
  sqcRYGate(q, -0.568552801703933, 4);
  sqcRZGate(q, 1.6849058504871381, 4);
  sqcRYGate(q, -0.008700357855283152, 5);
  sqcRZGate(q, 2.4549693221905655, 5);
  sqcRYGate(q, -3.14127858404589, 6);
  sqcRZGate(q, -2.0713822206632795, 6);
  sqcRYGate(q, 2.0515914051750697, 7);
  sqcRZGate(q, -0.493524304216117, 7);
  sqcRYGate(q, -0.7260084060850596, 8);
  sqcRZGate(q, -3.079597971032784, 8);
  sqcRYGate(q, 1.1599763144927018, 9);
  sqcRZGate(q, -1.809334626941772, 9);
  sqcRYGate(q, 1.659407290348732, 10);
  sqcRZGate(q, 2.4654447200061695, 10);
  sqcRYGate(q, -1.49226366115614, 11);
  sqcRZGate(q, 2.4454446334167965, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.670161664359991, 0);
  sqcRZGate(q, 0.2664059293135132, 0);
  sqcRYGate(q, 2.3556811684475125, 1);
  sqcRZGate(q, 0.9810716426350544, 1);
  sqcRYGate(q, 0.5765866981011605, 2);
  sqcRZGate(q, -1.496239427401033, 2);
  sqcRYGate(q, -2.279268519687534, 3);
  sqcRZGate(q, 3.0893829977213705, 3);
  sqcRYGate(q, 3.109117971834541, 4);
  sqcRZGate(q, 2.97651738560845, 4);
  sqcRYGate(q, 1.2145992055715782, 5);
  sqcRZGate(q, -1.3209670695169204, 5);
  sqcRYGate(q, 2.110816577201809, 6);
  sqcRZGate(q, -1.6708269310269936, 6);
  sqcRYGate(q, 2.1407254066060566, 7);
  sqcRZGate(q, 0.045673929060929375, 7);
  sqcRYGate(q, -2.220238792093486, 8);
  sqcRZGate(q, -0.1852408666334, 8);
  sqcRYGate(q, 1.53426411692618, 9);
  sqcRZGate(q, -1.6288497419426546, 9);
  sqcRYGate(q, 2.306622523352411, 10);
  sqcRZGate(q, 1.455679887464344, 10);
  sqcRYGate(q, -1.2264035747247777, 11);
  sqcRZGate(q, -1.2473438077525643, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.5050296810016429, 0);
  sqcRZGate(q, -1.091231691840945, 0);
  sqcRYGate(q, -0.039377696248437566, 1);
  sqcRZGate(q, -1.5955934582192521, 1);
  sqcRYGate(q, -2.1403384309331663, 2);
  sqcRZGate(q, -2.46618231428285, 2);
  sqcRYGate(q, 2.098057599997826, 3);
  sqcRZGate(q, 3.104284192028161, 3);
  sqcRYGate(q, -3.1291577980452536, 4);
  sqcRZGate(q, 0.37905603637009433, 4);
  sqcRYGate(q, 0.002791501714615495, 5);
  sqcRZGate(q, 0.9711156186476902, 5);
  sqcRYGate(q, 2.328003198003757, 6);
  sqcRZGate(q, 3.1122727525035168, 6);
  sqcRYGate(q, 2.226729871875768, 7);
  sqcRZGate(q, -0.6526564657875662, 7);
  sqcRYGate(q, -1.8665917946230204, 8);
  sqcRZGate(q, 1.4614638189353153, 8);
  sqcRYGate(q, -2.423668515157487, 9);
  sqcRZGate(q, -0.7368571616128184, 9);
  sqcRYGate(q, 1.2221351860894947, 10);
  sqcRZGate(q, -2.936571393128419, 10);
  sqcRYGate(q, -0.3047094962140278, 11);
  sqcRZGate(q, -1.0278408371866181, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.02974819532186057, 0);
  sqcRZGate(q, -1.1731125638318165, 0);
  sqcRYGate(q, 1.5899743431324749, 1);
  sqcRZGate(q, -1.7296987136718034, 1);
  sqcRYGate(q, -0.030952383737158584, 2);
  sqcRZGate(q, 2.59785330449534, 2);
  sqcRYGate(q, 2.060788641195171, 3);
  sqcRZGate(q, -0.47232257070037365, 3);
  sqcRYGate(q, 2.416885306307852, 4);
  sqcRZGate(q, -3.0384274444420143, 4);
  sqcRYGate(q, -0.00130269397840177, 5);
  sqcRZGate(q, 1.9929644488062106, 5);
  sqcRYGate(q, -2.2487529978253527, 6);
  sqcRZGate(q, 2.573741741695307, 6);
  sqcRYGate(q, -0.028093065131174433, 7);
  sqcRZGate(q, 0.47107424788738056, 7);
  sqcRYGate(q, 0.10147580403724543, 8);
  sqcRZGate(q, -1.506917224539161, 8);
  sqcRYGate(q, -0.04916237230851994, 9);
  sqcRZGate(q, 2.1075418239975674, 9);
  sqcRYGate(q, -1.1880904960282468, 10);
  sqcRZGate(q, -2.6157167021714267, 10);
  sqcRYGate(q, -1.2476353540437484, 11);
  sqcRZGate(q, 2.609849270774708, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.9151952992386065, 0);
  sqcRZGate(q, 1.8834481430877172, 0);
  sqcRYGate(q, 2.0319453173422373, 1);
  sqcRZGate(q, 0.0018363014534235936, 1);
  sqcRYGate(q, -1.2778163969820422, 2);
  sqcRZGate(q, 1.492740570423969, 2);
  sqcRYGate(q, 2.911702737187905, 3);
  sqcRZGate(q, -2.876732844965514, 3);
  sqcRYGate(q, 0.11116465348314547, 4);
  sqcRZGate(q, 3.117425768624563, 4);
  sqcRYGate(q, -1.058870124294877, 5);
  sqcRZGate(q, 1.280767110543798, 5);
  sqcRYGate(q, 0.8058759724482698, 6);
  sqcRZGate(q, 0.3265162128555866, 6);
  sqcRYGate(q, 1.5713662679586733, 7);
  sqcRZGate(q, 3.049393648500514, 7);
  sqcRYGate(q, 1.4865683541744967, 8);
  sqcRZGate(q, -2.3113779292774765, 8);
  sqcRYGate(q, -0.03935021302335947, 9);
  sqcRZGate(q, -1.6323725055712013, 9);
  sqcRYGate(q, -1.333261843851644, 10);
  sqcRZGate(q, -1.2218630287682313, 10);
  sqcRYGate(q, 2.964277920195779, 11);
  sqcRZGate(q, 2.6619011502596894, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.026171626431590767, 0);
  sqcRZGate(q, -0.6119646679424786, 0);
  sqcRYGate(q, -3.096220603239987, 1);
  sqcRZGate(q, 1.5663234860347606, 1);
  sqcRYGate(q, 3.13328979466478, 2);
  sqcRZGate(q, -1.717830113440219, 2);
  sqcRYGate(q, -0.0015833217737668546, 3);
  sqcRZGate(q, 1.2129365873527638, 3);
  sqcRYGate(q, 0.16536448240795848, 4);
  sqcRZGate(q, 1.305135185196809, 4);
  sqcRYGate(q, -0.0007710707054089383, 5);
  sqcRZGate(q, 1.9028723079700152, 5);
  sqcRYGate(q, 3.1366389986416774, 6);
  sqcRZGate(q, -1.435706960933543, 6);
  sqcRYGate(q, 0.026760579098482243, 7);
  sqcRZGate(q, -2.9913667856598183, 7);
  sqcRYGate(q, 0.1860756130721983, 8);
  sqcRZGate(q, 1.4009478322944133, 8);
  sqcRYGate(q, -0.08707010130128356, 9);
  sqcRZGate(q, -2.108648445618183, 9);
  sqcRYGate(q, 1.87916872192769, 10);
  sqcRZGate(q, -0.8167274410260594, 10);
  sqcRYGate(q, 0.8970156253881234, 11);
  sqcRZGate(q, -3.127066407097483, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.8735723739353132, 0);
  sqcRZGate(q, -0.9406038857412025, 0);
  sqcRYGate(q, -1.3322894904705198, 1);
  sqcRZGate(q, 2.810827890772907, 1);
  sqcRYGate(q, -2.078778811285267, 2);
  sqcRZGate(q, -1.4308353462544254, 2);
  sqcRYGate(q, 0.9537106365978322, 3);
  sqcRZGate(q, -0.4670208402668965, 3);
  sqcRYGate(q, -0.001950793079904289, 4);
  sqcRZGate(q, -1.1806699192115495, 4);
  sqcRYGate(q, -2.1961655805799043, 5);
  sqcRZGate(q, -2.7309873795358013, 5);
  sqcRYGate(q, -2.750981375359058, 6);
  sqcRZGate(q, 0.593875306852147, 6);
  sqcRYGate(q, 2.6321283555799075, 7);
  sqcRZGate(q, -3.002618024222628, 7);
  sqcRYGate(q, -0.45682098927751497, 8);
  sqcRZGate(q, -1.551692956042649, 8);
  sqcRYGate(q, 2.3141501603070602, 9);
  sqcRZGate(q, 2.766122484595609, 9);
  sqcRYGate(q, 0.7956533352819263, 10);
  sqcRZGate(q, 1.5920898549985525, 10);
  sqcRYGate(q, -1.7379615863249065, 11);
  sqcRZGate(q, 2.1128679014858656, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.250813981025738, 0);
  sqcRZGate(q, -0.2249300709109825, 0);
  sqcRYGate(q, 2.84794072216013, 1);
  sqcRZGate(q, -1.329340544082386, 1);
  sqcRYGate(q, 3.1382183106487305, 2);
  sqcRZGate(q, -1.0603705904237066, 2);
  sqcRYGate(q, 1.5989492168453925, 3);
  sqcRZGate(q, 3.1162462559255033, 3);
  sqcRYGate(q, -0.5371605777491629, 4);
  sqcRZGate(q, 0.09891416216695009, 4);
  sqcRYGate(q, -3.1106339208565044, 5);
  sqcRZGate(q, 0.22946394332376507, 5);
  sqcRYGate(q, -0.05669381193201417, 6);
  sqcRZGate(q, 2.2405056608571203, 6);
  sqcRYGate(q, -1.9668386390573458, 7);
  sqcRZGate(q, -0.011060707691536997, 7);
  sqcRYGate(q, -0.3118176931726123, 8);
  sqcRZGate(q, 0.25863787357299556, 8);
  sqcRYGate(q, 3.079941028094618, 9);
  sqcRZGate(q, -0.29064920813861495, 9);
  sqcRYGate(q, 2.6127806302628493, 10);
  sqcRZGate(q, 3.09699787933417, 10);
  sqcRYGate(q, -1.5033215788627032, 11);
  sqcRZGate(q, -1.8172099386660847, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.7770153220388885, 0);
  sqcRZGate(q, 1.5000205421017672, 0);
  sqcRYGate(q, -0.9407370481332604, 1);
  sqcRZGate(q, 3.0727266956276984, 1);
  sqcRYGate(q, -1.4423998924443346, 2);
  sqcRZGate(q, 2.8560274336907914, 2);
  sqcRYGate(q, -0.48019819642841816, 3);
  sqcRZGate(q, 2.159993231256324, 3);
  sqcRYGate(q, 0.10486666067215278, 4);
  sqcRZGate(q, -0.41969247737103554, 4);
  sqcRYGate(q, 2.998732823655463, 5);
  sqcRZGate(q, 2.865977418884972, 5);
  sqcRYGate(q, 3.1403702768767308, 6);
  sqcRZGate(q, -0.3968815342740157, 6);
  sqcRYGate(q, -1.6086155882646203, 7);
  sqcRZGate(q, -3.0341495919886103, 7);
  sqcRYGate(q, -0.6724319385951324, 8);
  sqcRZGate(q, 2.466663784099898, 8);
  sqcRYGate(q, -1.8733816060781434, 9);
  sqcRZGate(q, 0.15732284259762663, 9);
  sqcRYGate(q, -2.4752545716681835, 10);
  sqcRZGate(q, -0.31334370236239495, 10);
  sqcRYGate(q, 2.6057096202615133, 11);
  sqcRZGate(q, 1.3615811768555293, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.034656111834192316, 0);
  sqcRZGate(q, 3.0465427006311723, 0);
  sqcRYGate(q, 1.556090683060824, 1);
  sqcRZGate(q, 0.9246165289136175, 1);
  sqcRYGate(q, 3.1363186116209936, 2);
  sqcRZGate(q, 0.27232026516015745, 2);
  sqcRYGate(q, 0.7501533898595695, 3);
  sqcRZGate(q, 3.0248042577992607, 3);
  sqcRYGate(q, 1.1023379308819978, 4);
  sqcRZGate(q, 1.5278142723622976, 4);
  sqcRYGate(q, 1.6501806235007095, 5);
  sqcRZGate(q, -0.6060042265801533, 5);
  sqcRYGate(q, 0.01047696468936099, 6);
  sqcRZGate(q, 0.402232883076068, 6);
  sqcRYGate(q, -2.06811813093475, 7);
  sqcRZGate(q, -2.775707360693635, 7);
  sqcRYGate(q, -2.567304557111073, 8);
  sqcRZGate(q, -1.6211424626775761, 8);
  sqcRYGate(q, -0.04982293967278206, 9);
  sqcRZGate(q, 2.820701944083318, 9);
  sqcRYGate(q, 2.7802266816380135, 10);
  sqcRZGate(q, -2.19815530925825, 10);
  sqcRYGate(q, 0.9338550294106889, 11);
  sqcRZGate(q, 2.2135384511659826, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.445110668984844, 0);
  sqcRZGate(q, 2.5618347061154148, 0);
  sqcRYGate(q, -0.635730645111118, 1);
  sqcRZGate(q, 2.5228851369807574, 1);
  sqcRYGate(q, -1.7729168513678992, 2);
  sqcRZGate(q, -3.094199510575885, 2);
  sqcRYGate(q, -2.899973644297988, 3);
  sqcRZGate(q, 3.0645017657581253, 3);
  sqcRYGate(q, 0.01537970104761648, 4);
  sqcRZGate(q, 2.0531505607326253, 4);
  sqcRYGate(q, -3.1271616710469807, 5);
  sqcRZGate(q, 1.0523117293405546, 5);
  sqcRYGate(q, -2.7338481598560924, 6);
  sqcRZGate(q, -1.2490993728467803, 6);
  sqcRYGate(q, 0.9452830993892616, 7);
  sqcRZGate(q, 0.19401835961765368, 7);
  sqcRYGate(q, -1.649202461420852, 8);
  sqcRZGate(q, 0.7871818479389487, 8);
  sqcRYGate(q, -1.4010352962667594, 9);
  sqcRZGate(q, 1.5579966064383601, 9);
  sqcRYGate(q, 0.9509413269827517, 10);
  sqcRZGate(q, 1.5572438688749957, 10);
  sqcRYGate(q, 2.7607477543616716, 11);
  sqcRZGate(q, 2.804093189809433, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.09773322106058213, 0);
  sqcRZGate(q, 1.1264830705818172, 0);
  sqcRYGate(q, 0.9236810500760667, 1);
  sqcRZGate(q, -1.731077751547215, 1);
  sqcRYGate(q, 2.076871153540423, 2);
  sqcRZGate(q, 0.07489705103484312, 2);
  sqcRYGate(q, -1.336858276251322, 3);
  sqcRZGate(q, -1.2925553786374835, 3);
  sqcRYGate(q, -0.37715897168535323, 4);
  sqcRZGate(q, 2.0116671393043557, 4);
  sqcRYGate(q, -0.894374280460209, 5);
  sqcRZGate(q, -0.12454637387831814, 5);
  sqcRYGate(q, 3.1412526947728985, 6);
  sqcRZGate(q, 1.8965182502429294, 6);
  sqcRYGate(q, -0.4686398109858771, 7);
  sqcRZGate(q, 0.2234458373104653, 7);
  sqcRYGate(q, -3.067298237013159, 8);
  sqcRZGate(q, -0.07967174168819252, 8);
  sqcRYGate(q, 0.759500150849334, 9);
  sqcRZGate(q, -0.7179916997150456, 9);
  sqcRYGate(q, -2.3835779467982094, 10);
  sqcRZGate(q, -2.1170573603121436, 10);
  sqcRYGate(q, 1.0090448360919502, 11);
  sqcRZGate(q, -1.5499118505413314, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.1799228234729857, 0);
  sqcRZGate(q, 0.029561579394349554, 0);
  sqcRYGate(q, -3.1147684266485465, 1);
  sqcRZGate(q, 1.462214847234777, 1);
  sqcRYGate(q, -2.5184700653893706, 2);
  sqcRZGate(q, -3.1394655661393225, 2);
  sqcRYGate(q, -3.1374128036327145, 3);
  sqcRZGate(q, -2.9197438176402173, 3);
  sqcRYGate(q, -3.1410811664940366, 4);
  sqcRZGate(q, -0.7349584475321471, 4);
  sqcRYGate(q, 1.8349154781695187, 5);
  sqcRZGate(q, -3.098951466997937, 5);
  sqcRYGate(q, -2.309613207809725, 6);
  sqcRZGate(q, 1.1214337226460547, 6);
  sqcRYGate(q, 2.4796180410240103, 7);
  sqcRZGate(q, -3.107867431699516, 7);
  sqcRYGate(q, -3.132730786364649, 8);
  sqcRZGate(q, -2.763671086167583, 8);
  sqcRYGate(q, -2.081522409502874, 9);
  sqcRZGate(q, 2.215292790733053, 9);
  sqcRYGate(q, -2.483019470349645, 10);
  sqcRZGate(q, -1.3622638566708343, 10);
  sqcRYGate(q, 0.8382420683340832, 11);
  sqcRZGate(q, 2.7330317421107, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.1352705053837915, 0);
  sqcRZGate(q, 0.9661060492605132, 0);
  sqcRYGate(q, -1.3355478744750282, 1);
  sqcRZGate(q, 1.5637605505295564, 1);
  sqcRYGate(q, 2.3476084628714013, 2);
  sqcRZGate(q, 3.0610554463607955, 2);
  sqcRYGate(q, 1.6458048760946962, 3);
  sqcRZGate(q, -2.8724292759440755, 3);
  sqcRYGate(q, 2.699750262071435, 4);
  sqcRZGate(q, -0.0023953996934670536, 4);
  sqcRYGate(q, 2.028489775307894, 5);
  sqcRZGate(q, -3.0091837036319724, 5);
  sqcRYGate(q, 3.1354709144522293, 6);
  sqcRZGate(q, -1.0445211452896537, 6);
  sqcRYGate(q, -3.037138865081282, 7);
  sqcRZGate(q, -0.5792861357060817, 7);
  sqcRYGate(q, -0.06609713974290177, 8);
  sqcRZGate(q, -1.378700860392162, 8);
  sqcRYGate(q, -1.4014250791558522, 9);
  sqcRZGate(q, 2.9200116761859123, 9);
  sqcRYGate(q, -1.411182903279411, 10);
  sqcRZGate(q, 1.4720861518023713, 10);
  sqcRYGate(q, 0.6410778007548917, 11);
  sqcRZGate(q, -3.102441015034719, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.7298340038695068, 0);
  sqcRZGate(q, 1.0261806286643558, 0);
  sqcRYGate(q, 2.9590823081948496, 1);
  sqcRZGate(q, -2.681432687826947, 1);
  sqcRYGate(q, 2.794879675607776, 2);
  sqcRZGate(q, -3.0329015394074927, 2);
  sqcRYGate(q, 0.0012751320915525, 3);
  sqcRZGate(q, 1.3520107383331454, 3);
  sqcRYGate(q, 1.5681802350309804, 4);
  sqcRZGate(q, 0.008066660214550903, 4);
  sqcRYGate(q, 2.8609100608687377, 5);
  sqcRZGate(q, 0.3142905579212731, 5);
  sqcRYGate(q, -0.002782278809465907, 6);
  sqcRZGate(q, 0.7891274833400068, 6);
  sqcRYGate(q, -1.5300470295211879, 7);
  sqcRZGate(q, 2.490577338892307, 7);
  sqcRYGate(q, -3.1278431025810747, 8);
  sqcRZGate(q, -1.7819019095273594, 8);
  sqcRYGate(q, 1.2517185257654309, 9);
  sqcRZGate(q, 2.214940163092336, 9);
  sqcRYGate(q, 2.617698398479435, 10);
  sqcRZGate(q, 0.26608112856262794, 10);
  sqcRYGate(q, -0.7109892964716007, 11);
  sqcRZGate(q, -1.1708778082538496, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.3494358083542248, 0);
  sqcRZGate(q, 0.2787843880276874, 0);
  sqcRYGate(q, -0.2042874501954897, 1);
  sqcRZGate(q, -0.8671991141332213, 1);
  sqcRYGate(q, 1.721036428217941, 2);
  sqcRZGate(q, 0.00698222626477017, 2);
  sqcRYGate(q, -1.5979348018363686, 3);
  sqcRZGate(q, 0.002508233142938624, 3);
  sqcRYGate(q, -3.0271912020205645, 4);
  sqcRZGate(q, 0.012650588007065077, 4);
  sqcRYGate(q, -1.3366318808107014, 5);
  sqcRZGate(q, 1.4718697257640008, 5);
  sqcRYGate(q, -0.034546268967454025, 6);
  sqcRZGate(q, -2.867640630228166, 6);
  sqcRYGate(q, 0.03382650284267186, 7);
  sqcRZGate(q, -1.3067651241439622, 7);
  sqcRYGate(q, 3.1348188097785066, 8);
  sqcRZGate(q, -2.2247843111903647, 8);
  sqcRYGate(q, 1.5120899738522091, 9);
  sqcRZGate(q, 1.0054246713352404, 9);
  sqcRYGate(q, -0.050758218927570375, 10);
  sqcRZGate(q, 2.6926095429715233, 10);
  sqcRYGate(q, 2.3383840122464377, 11);
  sqcRZGate(q, -0.3593993564869928, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.014840464443323, 0);
  sqcRZGate(q, 2.2792274073741177, 0);
  sqcRYGate(q, 0.03682245963178943, 1);
  sqcRZGate(q, -1.2177921946744554, 1);
  sqcRYGate(q, -0.08911673261998221, 2);
  sqcRZGate(q, 3.1237813800372716, 2);
  sqcRYGate(q, 0.7959968079194014, 3);
  sqcRZGate(q, -0.981973168452674, 3);
  sqcRYGate(q, -0.3838671033668774, 4);
  sqcRZGate(q, -0.005062321569842479, 4);
  sqcRYGate(q, -0.00018665738495040533, 5);
  sqcRZGate(q, 1.7043600099932714, 5);
  sqcRYGate(q, 0.0009615281559023359, 6);
  sqcRZGate(q, 1.1113972941506163, 6);
  sqcRYGate(q, 0.5041706837742244, 7);
  sqcRZGate(q, -2.4048057025232703, 7);
  sqcRYGate(q, 0.0020619459639119597, 8);
  sqcRZGate(q, 1.835234304584316, 8);
  sqcRYGate(q, -1.0515752258026037, 9);
  sqcRZGate(q, -1.2968791860891553, 9);
  sqcRYGate(q, 0.8843566095236357, 10);
  sqcRZGate(q, 0.4349613535193351, 10);
  sqcRYGate(q, -1.1283630234304105, 11);
  sqcRZGate(q, -1.6186388637222286, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.3210651779817324, 0);
  sqcRZGate(q, 2.0476702721410054, 0);
  sqcRYGate(q, 0.8868140974876626, 1);
  sqcRZGate(q, 1.97973807189909, 1);
  sqcRYGate(q, 1.5038567208175149, 2);
  sqcRZGate(q, 3.1386566671694505, 2);
  sqcRYGate(q, 3.1414255785049816, 3);
  sqcRZGate(q, -0.9871257529891899, 3);
  sqcRYGate(q, -0.7118846767605873, 4);
  sqcRZGate(q, 0.0004372898206863595, 4);
  sqcRYGate(q, -2.8901746787585716, 5);
  sqcRZGate(q, 0.034123497093646364, 5);
  sqcRYGate(q, -1.6992890213944936, 6);
  sqcRZGate(q, -3.1091222003968744, 6);
  sqcRYGate(q, -3.1009656973386766, 7);
  sqcRZGate(q, -1.3391465930285635, 7);
  sqcRYGate(q, 1.5656092353036843, 8);
  sqcRZGate(q, -1.546722177148586, 8);
  sqcRYGate(q, 0.4474352883286353, 9);
  sqcRZGate(q, 2.284611652529303, 9);
  sqcRYGate(q, 2.7320649709217513, 10);
  sqcRZGate(q, -2.2902685412620647, 10);
  sqcRYGate(q, 2.016492173901983, 11);
  sqcRZGate(q, 1.476300320878077, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.161729375276611, 0);
  sqcRZGate(q, -0.24922560783214465, 0);
  sqcRYGate(q, 0.018427675320107362, 1);
  sqcRZGate(q, 2.9199744339851006, 1);
  sqcRYGate(q, 1.5041257845149707, 2);
  sqcRZGate(q, -3.122183558414883, 2);
  sqcRYGate(q, 1.5411094745705785, 3);
  sqcRZGate(q, 1.4482732056011907, 3);
  sqcRYGate(q, 1.899938220133489, 4);
  sqcRZGate(q, 3.137757194409162, 4);
  sqcRYGate(q, 2.554919912590167, 5);
  sqcRZGate(q, -1.7251921424261614, 5);
  sqcRYGate(q, -1.570506686169457, 6);
  sqcRZGate(q, 3.14156049737351, 6);
  sqcRYGate(q, -0.4960592314684744, 7);
  sqcRZGate(q, 3.136262529653512, 7);
  sqcRYGate(q, -2.315913250160187, 8);
  sqcRZGate(q, 3.1223773725847814, 8);
  sqcRYGate(q, 1.5805770620744761, 9);
  sqcRZGate(q, -1.4040839208807956, 9);
  sqcRYGate(q, -1.6061867807058907, 10);
  sqcRZGate(q, 1.7132262416758866, 10);
  sqcRYGate(q, 2.3637683593208343, 11);
  sqcRZGate(q, -0.19569402413551895, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.9232778517737614, 0);
  sqcRZGate(q, -0.10012625942357353, 0);
  sqcRYGate(q, -0.18087648190984487, 1);
  sqcRZGate(q, 1.3456197742653728, 1);
  sqcRYGate(q, -1.3823170659753163, 2);
  sqcRZGate(q, -1.6880399369534356, 2);
  sqcRYGate(q, -2.8225760763365964, 3);
  sqcRZGate(q, -2.99163755340203, 3);
  sqcRYGate(q, -0.7289577437449908, 4);
  sqcRZGate(q, -2.6384828615511977, 4);
  sqcRYGate(q, 0.0016277885507046776, 5);
  sqcRZGate(q, 1.7273719252360153, 5);
  sqcRYGate(q, -1.826088295298894, 6);
  sqcRZGate(q, 1.1468699828658249, 6);
  sqcRYGate(q, -1.565162196010294, 7);
  sqcRZGate(q, 0.00026636613022829465, 7);
  sqcRYGate(q, 1.5656483033535311, 8);
  sqcRZGate(q, 3.1319118849314624, 8);
  sqcRYGate(q, 3.1072124847169023, 9);
  sqcRZGate(q, 1.7739844385361014, 9);
  sqcRYGate(q, 3.077391776911251, 10);
  sqcRZGate(q, -0.8449324655106586, 10);
  sqcRYGate(q, 3.126533859435569, 11);
  sqcRZGate(q, 1.9134029643954795, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.474709993921517, 0);
  sqcRZGate(q, -3.0811985696599122, 0);
  sqcRYGate(q, -0.07744450705756238, 1);
  sqcRZGate(q, 1.9074017930254836, 1);
  sqcRYGate(q, -3.1399648890742724, 2);
  sqcRZGate(q, -1.7063864857839148, 2);
  sqcRYGate(q, 0.0008911035385184007, 3);
  sqcRZGate(q, -1.6023837752924472, 3);
  sqcRYGate(q, 3.1385528743521958, 4);
  sqcRZGate(q, -2.638152446953508, 4);
  sqcRYGate(q, 2.8963077077685755, 5);
  sqcRZGate(q, 0.051112906393840696, 5);
  sqcRYGate(q, 3.141538502139682, 6);
  sqcRZGate(q, -1.9945568065820591, 6);
  sqcRYGate(q, -0.305427653616868, 7);
  sqcRZGate(q, -3.127258780020682, 7);
  sqcRYGate(q, 1.5655865454376754, 8);
  sqcRZGate(q, -2.490310863243279, 8);
  sqcRYGate(q, 1.5773680254465434, 9);
  sqcRZGate(q, 3.120187475945528, 9);
  sqcRYGate(q, -2.295898050073837, 10);
  sqcRZGate(q, 0.0740006446111275, 10);
  sqcRYGate(q, 2.570502325763951, 11);
  sqcRZGate(q, -0.05588856239252582, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.3841853940317588, 0);
  sqcRZGate(q, 0.9562393706609906, 0);
  sqcRYGate(q, -3.093823996706098, 1);
  sqcRZGate(q, -1.4199306097220263, 1);
  sqcRYGate(q, 0.7322006143992752, 2);
  sqcRZGate(q, -0.3493971353900751, 2);
  sqcRYGate(q, -2.2179606302411554, 3);
  sqcRZGate(q, 0.39909415849214835, 3);
  sqcRYGate(q, 2.3791433857515445, 4);
  sqcRZGate(q, 0.5049355526258088, 4);
  sqcRYGate(q, -0.07789334856937749, 5);
  sqcRZGate(q, -0.04960374339818059, 5);
  sqcRYGate(q, -1.607988229531787, 6);
  sqcRZGate(q, -3.107944735535348, 6);
  sqcRYGate(q, 1.6439817857830443, 7);
  sqcRZGate(q, -0.006737107753829535, 7);
  sqcRYGate(q, -3.103144948223221, 8);
  sqcRZGate(q, -2.482490910352003, 8);
  sqcRYGate(q, -1.571096508357966, 9);
  sqcRZGate(q, -1.045218618831667, 9);
  sqcRYGate(q, 0.19381994541885664, 10);
  sqcRZGate(q, 1.607812463983974, 10);
  sqcRYGate(q, 0.6689260103284376, 11);
  sqcRZGate(q, -2.925450151111573, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.7729192532690976, 0);
  sqcRZGate(q, -0.6757988020794254, 0);
  sqcRYGate(q, 1.6189152839202336, 1);
  sqcRZGate(q, -1.5932836685178353, 1);
  sqcRYGate(q, -3.1351123383138826, 2);
  sqcRZGate(q, -1.957132636503813, 2);
  sqcRYGate(q, 1.5754058989141617, 3);
  sqcRZGate(q, -1.5651457552593628, 3);
  sqcRYGate(q, 3.140501834441187, 4);
  sqcRZGate(q, -1.0685230679496254, 4);
  sqcRYGate(q, 0.5479916650469528, 5);
  sqcRZGate(q, 1.5701395542205832, 5);
  sqcRYGate(q, -3.1266780665282967, 6);
  sqcRZGate(q, 1.605064713354561, 6);
  sqcRYGate(q, 0.0530566063889486, 7);
  sqcRZGate(q, 1.5785607606192364, 7);
  sqcRYGate(q, 3.1161785675629656, 8);
  sqcRZGate(q, 1.5788455248043833, 8);
  sqcRYGate(q, -0.0001764584954735741, 9);
  sqcRZGate(q, -0.5255062930491388, 9);
  sqcRYGate(q, 1.5710529232368442, 10);
  sqcRZGate(q, 1.5707630879899304, 10);
  sqcRYGate(q, -1.5988005641545537, 11);
  sqcRZGate(q, 3.124160960681109, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.573857618339241, 0);
  sqcRZGate(q, 2.9060166214454206, 0);
  sqcRYGate(q, -1.5733019710909675, 1);
  sqcRZGate(q, 2.855695063988138, 1);
  sqcRYGate(q, -1.5705877377821418, 2);
  sqcRZGate(q, 2.9519387547838205, 2);
  sqcRYGate(q, 1.5659427373873256, 3);
  sqcRZGate(q, 2.2701182413043686, 3);
  sqcRYGate(q, 1.5690617931789073, 4);
  sqcRZGate(q, -0.19002804523003597, 4);
  sqcRYGate(q, 1.5731988789271136, 5);
  sqcRZGate(q, 2.992591993943859, 5);
  sqcRYGate(q, -1.5711081622452987, 6);
  sqcRZGate(q, 3.136622940391993, 6);
  sqcRYGate(q, 1.5561720668701922, 7);
  sqcRZGate(q, 0.43612104561883086, 7);
  sqcRYGate(q, 1.5941058601644673, 8);
  sqcRZGate(q, -1.714000862922979, 8);
  sqcRYGate(q, 1.570928139659041, 9);
  sqcRZGate(q, -0.08195560053041444, 9);
  sqcRYGate(q, 1.57068334648589, 10);
  sqcRZGate(q, 1.3560229233160426, 10);
  sqcRYGate(q, -0.0036106852529555786, 11);
  sqcRZGate(q, 1.4690709601937861, 11);

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
