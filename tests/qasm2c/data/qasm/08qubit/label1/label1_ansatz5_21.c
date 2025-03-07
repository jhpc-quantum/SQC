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

  sqcRYGate(q, -2.3395033650878148, 0);
  sqcRYGate(q, 0.8393817819646208, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.451920586721572, 0);
  sqcRYGate(q, 2.496911931466959, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.22278873221666848, 2);
  sqcRYGate(q, -2.385261578033371, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.11655902173031674, 2);
  sqcRYGate(q, 2.830798111849199, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.749383513425635, 4);
  sqcRYGate(q, -0.3444799748968748, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.227165270988435, 4);
  sqcRYGate(q, -2.699175245085896, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1645409850198885, 6);
  sqcRYGate(q, 1.7398503972761725, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6808729676438127, 6);
  sqcRYGate(q, -0.890105317805842, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4249437541716616, 1);
  sqcRYGate(q, -0.5978914333901624, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8249274278372418, 1);
  sqcRYGate(q, -1.1743680991076004, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0833108340541486, 3);
  sqcRYGate(q, 2.0607652702615242, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.010777927882196892, 3);
  sqcRYGate(q, -1.9905760223796936, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7458569359714877, 5);
  sqcRYGate(q, -1.36573147605985, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8606806963238978, 5);
  sqcRYGate(q, 1.3845469700659034, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4373351394511549, 0);
  sqcRYGate(q, 0.7126764214120085, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.304733962278658, 0);
  sqcRYGate(q, 3.0612939811368114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.043841021790524855, 2);
  sqcRYGate(q, -1.2546265167464528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3190916496696179, 2);
  sqcRYGate(q, 1.1945840043658285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0460845550592284, 4);
  sqcRYGate(q, 2.867944720795508, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6390954393582859, 4);
  sqcRYGate(q, 1.2390263090815703, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4170686426984905, 6);
  sqcRYGate(q, 1.2421216439319478, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9139383835452062, 6);
  sqcRYGate(q, -0.30316393698990207, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0125244332335377, 1);
  sqcRYGate(q, 2.6473846921339166, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4723097203873463, 1);
  sqcRYGate(q, 2.4489970964839634, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5015953101081436, 3);
  sqcRYGate(q, -1.2376994804672985, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6099691259972259, 3);
  sqcRYGate(q, 2.1188302218883273, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0099469848514637, 5);
  sqcRYGate(q, -2.1940252297835654, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9672166762190235, 5);
  sqcRYGate(q, -0.815945714748189, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.414822998669144, 0);
  sqcRYGate(q, -2.597527046613087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0488488143977612, 0);
  sqcRYGate(q, 2.9192485530922174, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.057480588347255335, 2);
  sqcRYGate(q, -0.78488282189684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.271803632568585, 2);
  sqcRYGate(q, -2.372250359436835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5716073721832813, 4);
  sqcRYGate(q, -1.3054831563018023, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2002259625461322, 4);
  sqcRYGate(q, 1.5415376155762048, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.14507662655712486, 6);
  sqcRYGate(q, -1.676005631555319, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.07620643814310252, 6);
  sqcRYGate(q, -1.5671452203552216, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.423763920808182, 1);
  sqcRYGate(q, 0.6797060823725527, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0893117228311455, 1);
  sqcRYGate(q, -1.3438646500434668, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6484025570252715, 3);
  sqcRYGate(q, 2.950291887168016, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.539953303588786, 3);
  sqcRYGate(q, -1.4021408028146805, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7678759953736279, 5);
  sqcRYGate(q, 0.9634931632938626, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9650311253093875, 5);
  sqcRYGate(q, 2.3225126844872195, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.40600939290104066, 0);
  sqcRYGate(q, 2.8563623067146415, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8286961834238566, 0);
  sqcRYGate(q, 0.5993906421567058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3354604248883475, 2);
  sqcRYGate(q, 2.455230686568717, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.388655489541479, 2);
  sqcRYGate(q, -2.3530833630112657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6209762679092236, 4);
  sqcRYGate(q, 0.3240220539796894, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3533587785368164, 4);
  sqcRYGate(q, -0.4958719554474185, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5002059208398317, 6);
  sqcRYGate(q, 1.0220125874639825, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0797484623369236, 6);
  sqcRYGate(q, -0.5088476101115722, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2037838020044216, 1);
  sqcRYGate(q, -2.0359128713641423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.007741902435995485, 1);
  sqcRYGate(q, -0.6611092447113355, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2621832362221053, 3);
  sqcRYGate(q, 0.508803325643294, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9580555075699184, 3);
  sqcRYGate(q, 1.1192363893483943, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.03543837246241517, 5);
  sqcRYGate(q, 2.3440764324724763, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.12850951380020348, 5);
  sqcRYGate(q, -2.695411904163256, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3681288048781424, 0);
  sqcRYGate(q, 3.1025949582743655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.636186106039208, 0);
  sqcRYGate(q, 1.5870260484283898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4934993933970775, 2);
  sqcRYGate(q, 0.08512286250731986, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1200936186565302, 2);
  sqcRYGate(q, -2.801133279930975, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.129168475295457, 4);
  sqcRYGate(q, 2.6285843182117254, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4617708147905764, 4);
  sqcRYGate(q, -0.8003577101183249, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.844815026725661, 6);
  sqcRYGate(q, 0.5965919305668406, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6464551783270367, 6);
  sqcRYGate(q, -2.0211457085227815, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8118168522974053, 1);
  sqcRYGate(q, 0.7650812014707373, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.890746108711923, 1);
  sqcRYGate(q, 0.4187427370608756, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.980206303252191, 3);
  sqcRYGate(q, 2.3975059757982993, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2494281349927565, 3);
  sqcRYGate(q, -2.1297647159161373, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1242179194306994, 5);
  sqcRYGate(q, -2.856664275782174, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.406252402918671, 5);
  sqcRYGate(q, 0.9460551966651521, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7088967487453885, 0);
  sqcRYGate(q, 0.6857981446024711, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.282456275277527, 0);
  sqcRYGate(q, 2.159001450119571, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.05209821474886045, 2);
  sqcRYGate(q, -1.0603960912762227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9738374487299923, 2);
  sqcRYGate(q, 2.33638616782209, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.83761033094122, 4);
  sqcRYGate(q, -1.2683229806781888, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3168550184555476, 4);
  sqcRYGate(q, 2.8379120843001897, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3912724474686595, 6);
  sqcRYGate(q, -0.146831802930208, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3535406719417953, 6);
  sqcRYGate(q, -2.1634906396580798, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0039764811692455, 1);
  sqcRYGate(q, -2.347069483082316, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.037337099709709, 1);
  sqcRYGate(q, -1.5679211545434732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5624048314608086, 3);
  sqcRYGate(q, 1.8736306285681392, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4167683452695918, 3);
  sqcRYGate(q, -1.4972990630325858, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8634004177586196, 5);
  sqcRYGate(q, 0.2649719710162035, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6080758447547017, 5);
  sqcRYGate(q, -0.4468211909924802, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.021974278084211, 0);
  sqcRYGate(q, -2.949865753287121, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5638017246831604, 0);
  sqcRYGate(q, -0.9572033412991559, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.701102066707843, 2);
  sqcRYGate(q, 0.0061171151583518935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1792539517968894, 2);
  sqcRYGate(q, 1.832021865187329, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0579790291335254, 4);
  sqcRYGate(q, 0.8459681006731103, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3504843721905462, 4);
  sqcRYGate(q, -0.30725811433554456, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6320086083832344, 6);
  sqcRYGate(q, 1.8005070022003868, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.36840939761705616, 6);
  sqcRYGate(q, -1.8415710100054286, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8874949512734602, 1);
  sqcRYGate(q, -1.5342468363676025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3390492164835948, 1);
  sqcRYGate(q, -1.110286303994669, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1067073925997157, 3);
  sqcRYGate(q, 3.0099811186476777, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9175582870843186, 3);
  sqcRYGate(q, -1.7801732014979086, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.17031309980534548, 5);
  sqcRYGate(q, 1.3002296046093484, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5035578234047122, 5);
  sqcRYGate(q, 1.2070104894422666, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6975036740065583, 0);
  sqcRYGate(q, -0.08747148871428992, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5813972040500828, 0);
  sqcRYGate(q, -2.5820099006239907, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7802962649630596, 2);
  sqcRYGate(q, -2.3294138491306566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.277339031228417, 2);
  sqcRYGate(q, -1.7731687557782614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.686905072886325, 4);
  sqcRYGate(q, 0.8479321594032658, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.611301357872974, 4);
  sqcRYGate(q, 1.933101692716619, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9121384777368604, 6);
  sqcRYGate(q, 3.139184959412374, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3801639420003697, 6);
  sqcRYGate(q, 2.946356766451558, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2277836756432247, 1);
  sqcRYGate(q, -0.6934466644759809, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4527325512299538, 1);
  sqcRYGate(q, 0.6904156182030787, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9580165977950825, 3);
  sqcRYGate(q, 1.6180714203532602, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.004663839051456619, 3);
  sqcRYGate(q, -2.6704235305428017, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.07232160054282562, 5);
  sqcRYGate(q, -2.405105891351376, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.250966380894968, 5);
  sqcRYGate(q, -1.0639015904861164, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2992284974935593, 0);
  sqcRYGate(q, -2.95720777306923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23184212591547748, 0);
  sqcRYGate(q, 1.5712250508507049, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4208551855819604, 2);
  sqcRYGate(q, -0.09547485988786789, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.28878828495335024, 2);
  sqcRYGate(q, 0.7182977963823118, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3185558095885956, 4);
  sqcRYGate(q, 2.185379960766722, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5393679199691594, 4);
  sqcRYGate(q, 0.42043631169785245, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1109116743206968, 6);
  sqcRYGate(q, -2.41377851948618, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9142177623770786, 6);
  sqcRYGate(q, 3.034488052873839, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.333034594273229, 1);
  sqcRYGate(q, 0.7074273564618432, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1635542011979354, 1);
  sqcRYGate(q, 0.6707104090153653, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.658602482951947, 3);
  sqcRYGate(q, -0.44564600512736735, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.47573655500387085, 3);
  sqcRYGate(q, -0.40957251337124245, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.20486387662468547, 5);
  sqcRYGate(q, -0.21574069377521532, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7769690661576929, 5);
  sqcRYGate(q, 0.03039627829759883, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5214633273664386, 0);
  sqcRYGate(q, 0.8623892639120706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2654222450443875, 0);
  sqcRYGate(q, 1.144835156849215, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6809799530814638, 2);
  sqcRYGate(q, -0.7225796971840195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14615918384416826, 2);
  sqcRYGate(q, 1.8332847427755974, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.978223243833145, 4);
  sqcRYGate(q, 2.0550088144751433, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8721421551057262, 4);
  sqcRYGate(q, -1.9372787255962631, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7613290565074666, 6);
  sqcRYGate(q, -2.1218441881778927, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9940843967379633, 6);
  sqcRYGate(q, -3.1049204848500525, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5882379696913156, 1);
  sqcRYGate(q, -2.159745574517142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.640778917424205, 1);
  sqcRYGate(q, -1.4980249489314879, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2561785425520648, 3);
  sqcRYGate(q, 3.0946502745356788, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.00403551792108, 3);
  sqcRYGate(q, -0.629855479433254, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.18809542846827, 5);
  sqcRYGate(q, -0.40927350481777275, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8790684746075628, 5);
  sqcRYGate(q, 1.5442373219516172, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2348186953369673, 0);
  sqcRYGate(q, -2.897025391654676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1940995089819857, 0);
  sqcRYGate(q, -1.7790192362612371, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6584985488044638, 2);
  sqcRYGate(q, -3.1041674909281753, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.538282991209645, 2);
  sqcRYGate(q, -0.36279493706288424, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.85785803077605, 4);
  sqcRYGate(q, -0.0552697890108916, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5603652330983553, 4);
  sqcRYGate(q, 1.3096627051698997, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.887143836229443, 6);
  sqcRYGate(q, 3.140024797002203, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.106179193231461, 6);
  sqcRYGate(q, 1.7761683792514495, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4053636593538125, 1);
  sqcRYGate(q, -2.5071607588405027, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9833772521073516, 1);
  sqcRYGate(q, -0.24152489979973435, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2302277483804267, 3);
  sqcRYGate(q, -2.7457463532408184, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0447948804254648, 3);
  sqcRYGate(q, -2.3130154204494495, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.522073802682278, 5);
  sqcRYGate(q, -1.1167898056146566, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1927939790766517, 5);
  sqcRYGate(q, 1.210616564589733, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8917207903088495, 0);
  sqcRYGate(q, -1.6428015090944925, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.726697599185643, 0);
  sqcRYGate(q, 1.4338762359733677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.411222445588754, 2);
  sqcRYGate(q, 3.102918487145964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7940243079580419, 2);
  sqcRYGate(q, 1.9903992225215283, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5698619448437467, 4);
  sqcRYGate(q, 1.0172298123805472, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.085518867563529, 4);
  sqcRYGate(q, -2.3922760911307623, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.09337744203926057, 6);
  sqcRYGate(q, 1.0977873695099296, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.36212286028897106, 6);
  sqcRYGate(q, -2.7027718309147053, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.323983657842252, 1);
  sqcRYGate(q, 1.88595173499256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6933742371396303, 1);
  sqcRYGate(q, -2.5261572118072695, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7814822852524281, 3);
  sqcRYGate(q, 1.2416837647075634, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.291921425056091, 3);
  sqcRYGate(q, -1.9012719169087142, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.140378187010036, 5);
  sqcRYGate(q, -0.9192502871376291, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6953838819974947, 5);
  sqcRYGate(q, 1.125040015168218, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.804006408811638, 0);
  sqcRYGate(q, 1.099487569497646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7484439704792396, 0);
  sqcRYGate(q, -0.02012127899855365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8102443369707375, 2);
  sqcRYGate(q, -2.5114777424587267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.906153991245611, 2);
  sqcRYGate(q, 1.1149785843331168, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2343705451008404, 4);
  sqcRYGate(q, -0.028164544823956916, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.592489663795544, 4);
  sqcRYGate(q, 2.3378020850662375, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6432831424869593, 6);
  sqcRYGate(q, -2.128006282907939, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7838766469293343, 6);
  sqcRYGate(q, -0.7073671804634662, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9392075769871457, 1);
  sqcRYGate(q, 2.5510796284529245, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1556006346441086, 1);
  sqcRYGate(q, 1.3236275720372688, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.067748564495009, 3);
  sqcRYGate(q, 1.5389641355110808, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8801912987678007, 3);
  sqcRYGate(q, -1.5097203194681044, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4168268481810378, 5);
  sqcRYGate(q, -2.719732240178408, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.003045862273545, 5);
  sqcRYGate(q, -2.754871633928572, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8748347410762656, 0);
  sqcRYGate(q, 2.9807047190482936, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1682397732883936, 0);
  sqcRYGate(q, -1.8109644346011242, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.087941611274018, 2);
  sqcRYGate(q, -0.4737419557411771, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6521541938902695, 2);
  sqcRYGate(q, -0.7731971189309808, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.694377927408506, 4);
  sqcRYGate(q, 2.9219672225405104, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.348142788149353, 4);
  sqcRYGate(q, -1.2158986960049685, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5550624176907228, 6);
  sqcRYGate(q, 1.9683356556681666, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.476928242722388, 6);
  sqcRYGate(q, -2.441034137273423, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.529327496706662, 1);
  sqcRYGate(q, -2.3196231415258284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8643373504961493, 1);
  sqcRYGate(q, 0.1838500071565221, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6418907344462381, 3);
  sqcRYGate(q, -0.7215696104904551, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8834285978701003, 3);
  sqcRYGate(q, -2.124620490094976, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8213324933563966, 5);
  sqcRYGate(q, -3.0582749984366324, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.048033920326753, 5);
  sqcRYGate(q, 0.005746966563642708, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6730493814958542, 0);
  sqcRYGate(q, -2.7099555920390674, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.25375409333563, 0);
  sqcRYGate(q, -1.4236996175558587, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9416639521033492, 2);
  sqcRYGate(q, 2.039191598390242, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.219577957622004, 2);
  sqcRYGate(q, -2.394382877912588, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1319932038846794, 4);
  sqcRYGate(q, 1.3167569891861932, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.033124607762668, 4);
  sqcRYGate(q, 2.9969410959878267, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9496695477260766, 6);
  sqcRYGate(q, -2.1518487480976165, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6720277529937854, 6);
  sqcRYGate(q, 0.6839949345772087, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2721958077149753, 1);
  sqcRYGate(q, 0.9930513802401723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7708565012001278, 1);
  sqcRYGate(q, -0.30255010232201945, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8749404020137073, 3);
  sqcRYGate(q, 1.0107447873364528, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.485154414777162, 3);
  sqcRYGate(q, 1.939849702974934, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3224994264090193, 5);
  sqcRYGate(q, -2.5372919309910054, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.022044839014004006, 5);
  sqcRYGate(q, 1.6345188796035792, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3901093004565062, 0);
  sqcRYGate(q, 1.5923417045734833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2189642765592794, 0);
  sqcRYGate(q, 1.8967745989660338, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3827178710858646, 2);
  sqcRYGate(q, -1.3255064858946373, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6413132167595386, 2);
  sqcRYGate(q, 2.6636241922328097, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3483734517874724, 4);
  sqcRYGate(q, -3.0520017395727854, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4977535846250884, 4);
  sqcRYGate(q, 1.771731330876662, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8722747096103772, 6);
  sqcRYGate(q, 2.7184452714560137, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6138552817458756, 6);
  sqcRYGate(q, -0.07390662145725657, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8173431159437003, 1);
  sqcRYGate(q, 0.3742948242377242, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3722430238435654, 1);
  sqcRYGate(q, 1.091274760215101, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9350548778052676, 3);
  sqcRYGate(q, 2.2712987830209093, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9012857083480421, 3);
  sqcRYGate(q, -0.6931758199571143, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2909005409811747, 5);
  sqcRYGate(q, 2.540907212059595, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.576285770196928, 5);
  sqcRYGate(q, -2.557026323712136, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9341864708191883, 0);
  sqcRYGate(q, 1.0233336125623536, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2851161549595221, 0);
  sqcRYGate(q, -0.30312255360069645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04904393190850537, 2);
  sqcRYGate(q, -0.904924680229395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.572354631561345, 2);
  sqcRYGate(q, -3.027215936372118, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8700283843286862, 4);
  sqcRYGate(q, -0.2464744337299205, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2600421421631095, 4);
  sqcRYGate(q, 2.306825477773436, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0086595452037455, 6);
  sqcRYGate(q, -2.03681245551577, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.928543893807844, 6);
  sqcRYGate(q, -1.5653469825337343, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.08632399165696081, 1);
  sqcRYGate(q, -1.0428644005076952, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0368739299853305, 1);
  sqcRYGate(q, 2.0084025550882383, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4113464982753314, 3);
  sqcRYGate(q, -1.833663387740602, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1703698817188224, 3);
  sqcRYGate(q, -2.246915337183993, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.658999678022986, 5);
  sqcRYGate(q, 0.518142546365147, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7889762450791169, 5);
  sqcRYGate(q, 2.2174771806251123, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4818755477029897, 0);
  sqcRYGate(q, 1.0577223024176012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1315011413987213, 0);
  sqcRYGate(q, -0.762989215931599, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2168635967766708, 2);
  sqcRYGate(q, -0.7699423412681213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.573824110273975, 2);
  sqcRYGate(q, 1.884014416434593, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.99171431614652, 4);
  sqcRYGate(q, -0.843456765238594, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.796174116450364, 4);
  sqcRYGate(q, -2.693216338134913, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5269306581674726, 6);
  sqcRYGate(q, -1.6188965172224652, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0662125386056913, 6);
  sqcRYGate(q, 1.0760901722951761, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9295859556426377, 1);
  sqcRYGate(q, 0.0793607999758644, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.04577449272545344, 1);
  sqcRYGate(q, 1.1700609126169725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5270263385369485, 3);
  sqcRYGate(q, 0.8424138405651688, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5784074303450248, 3);
  sqcRYGate(q, 1.6445345254390205, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.635164395987232, 5);
  sqcRYGate(q, -2.014175346664541, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6067159930283808, 5);
  sqcRYGate(q, -1.5228178820137757, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8289442820496014, 0);
  sqcRYGate(q, -0.16926988098373738, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17968486631316757, 0);
  sqcRYGate(q, -0.8397947012055146, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.072323236952023, 2);
  sqcRYGate(q, 1.4972872778675903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1787540773036467, 2);
  sqcRYGate(q, 2.7796842751768924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6429433787109766, 4);
  sqcRYGate(q, -2.3947665390713118, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5304589816248946, 4);
  sqcRYGate(q, -0.005434302898457325, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.653788010243799, 6);
  sqcRYGate(q, -0.13749019745427338, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1144373191654515, 6);
  sqcRYGate(q, -2.522594889562384, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7296044706227065, 1);
  sqcRYGate(q, -0.06053604998944433, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1477707814706228, 1);
  sqcRYGate(q, 1.0401274504557458, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6722351014738202, 3);
  sqcRYGate(q, -0.8890345982769965, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3883855610782683, 3);
  sqcRYGate(q, -0.7026818321060826, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.07686725930841032, 5);
  sqcRYGate(q, -1.2806513935811223, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8121073179535452, 5);
  sqcRYGate(q, -0.422821365782838, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7243389075750746, 0);
  sqcRYGate(q, 1.5668316306042773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5606924969968454, 0);
  sqcRYGate(q, 2.402058509774166, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.043970167841443, 2);
  sqcRYGate(q, 2.1681143542821286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5001839199411022, 2);
  sqcRYGate(q, 1.0696248053942154, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1940827317131841, 4);
  sqcRYGate(q, -2.2458555002500855, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8897195007017187, 4);
  sqcRYGate(q, -1.5690287554555225, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8278747982731458, 6);
  sqcRYGate(q, -0.10553469418999928, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.35769709352863277, 6);
  sqcRYGate(q, -2.384898660479901, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.170351336112781, 1);
  sqcRYGate(q, 0.8614772890425171, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2342848131975721, 1);
  sqcRYGate(q, 2.2977546326858067, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.08925063653534, 3);
  sqcRYGate(q, -1.1214852545416467, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3107621662081739, 3);
  sqcRYGate(q, 0.35170799059113883, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.943824185487066, 5);
  sqcRYGate(q, 0.11109150983556138, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2088266269248769, 5);
  sqcRYGate(q, 0.8427081115193531, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7728958722766057, 0);
  sqcRYGate(q, -0.11513373674022986, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4476942277976448, 0);
  sqcRYGate(q, -0.5856667168870828, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3107197460329365, 2);
  sqcRYGate(q, 1.0840604866067358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.852573064189764, 2);
  sqcRYGate(q, 2.9952408816878773, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3887817501838917, 4);
  sqcRYGate(q, 2.2185518318990587, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5946343190276027, 4);
  sqcRYGate(q, 1.1352378358160466, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.12658235391773864, 6);
  sqcRYGate(q, 2.211666462668716, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3082881225952074, 6);
  sqcRYGate(q, -1.5852874797455965, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2672233065146079, 1);
  sqcRYGate(q, 2.1487089224643805, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9604701288471675, 1);
  sqcRYGate(q, 2.289834124767041, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2505536761937686, 3);
  sqcRYGate(q, -1.2767505781725994, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.966561972987244, 3);
  sqcRYGate(q, -1.1413359135729972, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0837401215514078, 5);
  sqcRYGate(q, -1.0910279982336917, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3606589997518306, 5);
  sqcRYGate(q, 1.3902646717205125, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6869536139688999, 0);
  sqcRYGate(q, 1.3875067440582223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.475510627226813, 0);
  sqcRYGate(q, -1.6328509920344305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5708205571509948, 2);
  sqcRYGate(q, 0.5276881952916659, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9151098728272786, 2);
  sqcRYGate(q, 1.9788235271541037, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8769536762533656, 4);
  sqcRYGate(q, -1.153059661101003, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0451922900690096, 4);
  sqcRYGate(q, 0.20977571452184487, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.05340632447254112, 6);
  sqcRYGate(q, -2.987835262287646, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4295724951292916, 6);
  sqcRYGate(q, 2.9320494998549878, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.19133555763038315, 1);
  sqcRYGate(q, 0.709777547148791, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5418557500604946, 1);
  sqcRYGate(q, -1.0429150988941467, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0324930326672623, 3);
  sqcRYGate(q, 0.9034328552729507, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.38550281027187, 3);
  sqcRYGate(q, 1.2443007331560099, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.535701451756161, 5);
  sqcRYGate(q, 0.8515883343038766, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2973555393462721, 5);
  sqcRYGate(q, -1.679470094167354, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6065913995560104, 0);
  sqcRYGate(q, 1.670943416157268, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7589586749831296, 0);
  sqcRYGate(q, -2.536124869027834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8989114655897565, 2);
  sqcRYGate(q, -0.4283898287468171, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6111220711881622, 2);
  sqcRYGate(q, 0.46266675195984863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7335596686431636, 4);
  sqcRYGate(q, 2.4805284020660343, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4047519595860662, 4);
  sqcRYGate(q, 0.758982545169405, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.64043519173235, 6);
  sqcRYGate(q, -0.5046993533596813, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.294764943991629, 6);
  sqcRYGate(q, -0.8902280523402498, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5454512994056127, 1);
  sqcRYGate(q, -0.6975809252388948, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5931463791404159, 1);
  sqcRYGate(q, 2.193845173145019, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.941318487384191, 3);
  sqcRYGate(q, 2.942653247476346, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4900280741554774, 3);
  sqcRYGate(q, -2.3673270020984774, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5341927417263435, 5);
  sqcRYGate(q, -0.40227102772712087, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.420467023940408, 5);
  sqcRYGate(q, -2.0627124886008605, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9958690776315584, 0);
  sqcRYGate(q, -1.3069478544444015, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3581132209767737, 0);
  sqcRYGate(q, -0.09253402705849467, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9082020742290307, 2);
  sqcRYGate(q, -2.769977226043815, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.139665407295974, 2);
  sqcRYGate(q, 2.1099514346393473, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4748752556185096, 4);
  sqcRYGate(q, 2.3646443915220487, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6107997374816665, 4);
  sqcRYGate(q, 1.0734682123251602, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8832540811372205, 6);
  sqcRYGate(q, -2.55674864187806, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3221616540476182, 6);
  sqcRYGate(q, 2.7513370209616017, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.973323147124417, 1);
  sqcRYGate(q, -2.385565551942537, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.23673839212899703, 1);
  sqcRYGate(q, -3.093226274915815, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0823462800099692, 3);
  sqcRYGate(q, 0.022008622538799573, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3139998488107576, 3);
  sqcRYGate(q, 0.7578949100572946, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.320777214443562, 5);
  sqcRYGate(q, 1.2260788030722427, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9960573421082689, 5);
  sqcRYGate(q, -1.1282033309679358, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1372282813871628, 0);
  sqcRYGate(q, 1.025719869771506, 1);
  sqcRYGate(q, -0.6365614910167509, 2);
  sqcRYGate(q, 2.5123830835110335, 3);
  sqcRYGate(q, -1.8011061569535665, 4);
  sqcRYGate(q, 0.003164693189731238, 5);
  sqcRYGate(q, -1.3097525273378867, 6);
  sqcRYGate(q, -1.9880993023445297, 7);

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
