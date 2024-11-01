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

  sqcRYGate(q, -0.6890359141739305, 0);
  sqcRYGate(q, -0.533664147809251, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.014534916463237, 0);
  sqcRYGate(q, 2.8136394701065486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9640073985945143, 2);
  sqcRYGate(q, -1.8416669231907363, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11371822556670708, 2);
  sqcRYGate(q, -0.6814586805930515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.77070888402696, 4);
  sqcRYGate(q, 2.1921792718218054, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.979441290416819, 4);
  sqcRYGate(q, -2.4266388829162153, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.380755102500806, 6);
  sqcRYGate(q, 3.015966045225573, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3203536694780837, 6);
  sqcRYGate(q, -1.1237871178999317, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3758537555229244, 1);
  sqcRYGate(q, 2.123967459535579, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7712158497025398, 1);
  sqcRYGate(q, 2.2214737204689445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7308521332089067, 3);
  sqcRYGate(q, 1.2204563358395537, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5971217599201184, 3);
  sqcRYGate(q, -0.8191135120665649, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2374179364758735, 5);
  sqcRYGate(q, 2.705531730955395, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.184364661334664, 5);
  sqcRYGate(q, -0.6723198371884292, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.809264830167524, 0);
  sqcRYGate(q, 0.5161654095927956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0218296318616795, 0);
  sqcRYGate(q, 1.3827908514741922, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0025061208951271396, 2);
  sqcRYGate(q, -1.898846454718659, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.131839029840318, 2);
  sqcRYGate(q, 2.6077529942874587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0447476232912227, 4);
  sqcRYGate(q, -2.4929815077651636, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3899615440834018, 4);
  sqcRYGate(q, -2.4813737044854265, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8099431406681625, 6);
  sqcRYGate(q, -1.863384331301803, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0787793116935973, 6);
  sqcRYGate(q, 2.060428367878153, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6463638142893195, 1);
  sqcRYGate(q, 0.770698658134223, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.334877154955004, 1);
  sqcRYGate(q, 0.8256140392763449, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2469883789417704, 3);
  sqcRYGate(q, 0.47856494355031987, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8837451217480793, 3);
  sqcRYGate(q, 2.079398854973995, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.074706912469586, 5);
  sqcRYGate(q, 2.314383392247072, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5327326559216775, 5);
  sqcRYGate(q, 0.39426553144150844, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6823550835572297, 0);
  sqcRYGate(q, -2.002959906492853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0951612231587904, 0);
  sqcRYGate(q, -2.6969461320444363, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.075614171205912, 2);
  sqcRYGate(q, -2.315395953752738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.876964819306565, 2);
  sqcRYGate(q, 2.251337161429233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0145031166205598, 4);
  sqcRYGate(q, -2.1035710441477353, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.790549829998878, 4);
  sqcRYGate(q, 2.077142816831145, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0024017407122923, 6);
  sqcRYGate(q, 1.1608316342898908, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8691058798408271, 6);
  sqcRYGate(q, 2.2743158421474154, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.851962246349084, 1);
  sqcRYGate(q, 1.0916454748777298, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.824477783931918, 1);
  sqcRYGate(q, -1.002313341641294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7270389264431364, 3);
  sqcRYGate(q, -2.6733258648374942, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8801901249770143, 3);
  sqcRYGate(q, 2.40050303756228, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5173414118728386, 5);
  sqcRYGate(q, 0.913731779766591, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9751366344963017, 5);
  sqcRYGate(q, 0.3821658268731945, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.005044169466426495, 0);
  sqcRYGate(q, 0.9703405390544138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7395422725428666, 0);
  sqcRYGate(q, -1.710999451894664, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6414003922532014, 2);
  sqcRYGate(q, -1.2973277612987955, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3066594531414215, 2);
  sqcRYGate(q, 1.8766741220227086, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.841879128848568, 4);
  sqcRYGate(q, 1.0522196618451085, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2628285906121466, 4);
  sqcRYGate(q, -1.550092513282335, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0440418442643207, 6);
  sqcRYGate(q, -2.1072566933696018, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5227090021196645, 6);
  sqcRYGate(q, 0.4144149228022824, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0448798984579444, 1);
  sqcRYGate(q, -0.947484008100032, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3847365522377722, 1);
  sqcRYGate(q, -2.7984705851726783, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.12387966276173935, 3);
  sqcRYGate(q, -2.0563087863712735, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.337412037026501, 3);
  sqcRYGate(q, -3.045244520366753, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0558554385713905, 5);
  sqcRYGate(q, -0.5444142444840956, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.39290445466034996, 5);
  sqcRYGate(q, 0.8823971039134035, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.062195979654552, 0);
  sqcRYGate(q, 2.862698834600591, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.255889348923299, 0);
  sqcRYGate(q, -0.869430063513378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6646699071358286, 2);
  sqcRYGate(q, -1.181015553442731, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.501812350303227, 2);
  sqcRYGate(q, -1.5600143283130057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2912913216057893, 4);
  sqcRYGate(q, 1.4772135691446753, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8983735528413748, 4);
  sqcRYGate(q, 0.4155139949195359, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.501344326837553, 6);
  sqcRYGate(q, -0.19261187232214283, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.228680163108363, 6);
  sqcRYGate(q, 1.1914611303428468, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7916313654288869, 1);
  sqcRYGate(q, -1.994661432900056, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5628668781963704, 1);
  sqcRYGate(q, 1.7742897695715574, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.804284296890132, 3);
  sqcRYGate(q, 2.106824778100894, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7108941367502306, 3);
  sqcRYGate(q, 1.2243824259569873, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.43287340641722577, 5);
  sqcRYGate(q, 0.07147386413293155, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8716981338314254, 5);
  sqcRYGate(q, 0.07160347098385866, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.807303056148145, 0);
  sqcRYGate(q, -1.7985347252645028, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7866530765255444, 0);
  sqcRYGate(q, -1.3156429455918701, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.121317998409498, 2);
  sqcRYGate(q, 2.357656642887091, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7128446598318305, 2);
  sqcRYGate(q, 1.401658548327168, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.441319947533827, 4);
  sqcRYGate(q, -0.9324454760155582, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.25081263693717815, 4);
  sqcRYGate(q, 0.1560659752569649, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5178535413391953, 6);
  sqcRYGate(q, -1.478245179241437, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.73849866623023, 6);
  sqcRYGate(q, 2.2753376826516076, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7546006671309118, 1);
  sqcRYGate(q, -0.5512246873074593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2258595022755516, 1);
  sqcRYGate(q, -0.5106725210955254, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.516173354281591, 3);
  sqcRYGate(q, 0.47520210301797405, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3961020045054648, 3);
  sqcRYGate(q, 2.477354656300452, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7202259168902776, 5);
  sqcRYGate(q, -1.917923611739924, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0023574417742722176, 5);
  sqcRYGate(q, 3.0702281890211904, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7390926111925025, 0);
  sqcRYGate(q, 0.1008403708045158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3636423590596838, 0);
  sqcRYGate(q, 0.36670338561161187, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2119227727121906, 2);
  sqcRYGate(q, -1.288148221260274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.334309093746187, 2);
  sqcRYGate(q, 1.0537456112477974, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7106772403788275, 4);
  sqcRYGate(q, 1.6072822512125189, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.35409264589545764, 4);
  sqcRYGate(q, -2.572234875012259, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6700542600722743, 6);
  sqcRYGate(q, -2.323778700457038, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3645509096003823, 6);
  sqcRYGate(q, -1.1384405044680284, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.373621050380769, 1);
  sqcRYGate(q, -0.0420442215330743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3988633160052064, 1);
  sqcRYGate(q, -1.5568407399018815, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5824905384513577, 3);
  sqcRYGate(q, 2.4960672977719494, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.13045893582672852, 3);
  sqcRYGate(q, 0.9551093583099366, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7059897712070227, 5);
  sqcRYGate(q, -2.158722027955962, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.518563030165046, 5);
  sqcRYGate(q, -0.21773574183912425, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2934395511284099, 0);
  sqcRYGate(q, -2.626407035793628, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2926560969436656, 0);
  sqcRYGate(q, 0.37957584557843976, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8737266267316445, 2);
  sqcRYGate(q, -1.8352836912122994, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8631883947574175, 2);
  sqcRYGate(q, -2.0478445488487216, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.717138960474278, 4);
  sqcRYGate(q, 2.7334963791806866, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.014129916878256488, 4);
  sqcRYGate(q, 2.3904716105097172, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1971492153850676, 6);
  sqcRYGate(q, -2.233640027540935, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1235915739458617, 6);
  sqcRYGate(q, 1.5399414410861882, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8672160207555021, 1);
  sqcRYGate(q, 3.021576045074583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.24678783567048, 1);
  sqcRYGate(q, 0.9388038112274355, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9545901026788151, 3);
  sqcRYGate(q, 1.9946286560880029, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.743916118540798, 3);
  sqcRYGate(q, -0.8463608819392947, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3546228631533483, 5);
  sqcRYGate(q, -2.600215251774837, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9397833746236515, 5);
  sqcRYGate(q, -2.6210074993762436, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8709207901773808, 0);
  sqcRYGate(q, 1.9461593037578482, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9696989548142234, 0);
  sqcRYGate(q, 1.3863927052365719, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5870377574542993, 2);
  sqcRYGate(q, -1.3837203232859276, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8440304938702985, 2);
  sqcRYGate(q, 0.7994702297498812, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.227207946913845, 4);
  sqcRYGate(q, 0.31634190476409074, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3316963469255685, 4);
  sqcRYGate(q, -0.8566549597277482, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8298720593280193, 6);
  sqcRYGate(q, 2.8792126787533205, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0594243918073127, 6);
  sqcRYGate(q, -2.770844377244673, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6576430506611568, 1);
  sqcRYGate(q, -0.8472726225954625, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7156017486104691, 1);
  sqcRYGate(q, 0.9579090436434746, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.055719989248633, 3);
  sqcRYGate(q, -0.1885031379614903, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0779995550028554, 3);
  sqcRYGate(q, 0.7174463264375142, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4998149985829228, 5);
  sqcRYGate(q, -0.1904649393047568, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.595134284660977, 5);
  sqcRYGate(q, 1.166206156206186, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8580357759206905, 0);
  sqcRYGate(q, 2.8340230855643993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.697818402708377, 0);
  sqcRYGate(q, -1.8259298134922755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6749902400769434, 2);
  sqcRYGate(q, 0.4615152274510254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10299686244116382, 2);
  sqcRYGate(q, 0.20902161257939333, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.413898175011478, 4);
  sqcRYGate(q, -0.2682363292016303, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2168252193212882, 4);
  sqcRYGate(q, -0.06791714004040461, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4215740067058542, 6);
  sqcRYGate(q, 2.877240599531706, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.504340654258855, 6);
  sqcRYGate(q, -1.5703359690626737, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5166260826025892, 1);
  sqcRYGate(q, -0.6691147734190244, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0298125794996924, 1);
  sqcRYGate(q, -1.2998649672986875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1970842513179116, 3);
  sqcRYGate(q, -2.2126886371399443, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4051200099197216, 3);
  sqcRYGate(q, -1.0051356087056726, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.942122018713122, 5);
  sqcRYGate(q, -1.5450771212043397, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.130982109500411, 5);
  sqcRYGate(q, 3.0949340419916376, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.36283822140019595, 0);
  sqcRYGate(q, 0.8644021502776089, 1);
  sqcRYGate(q, 0.4427054586071533, 2);
  sqcRYGate(q, 1.3808395206144182, 3);
  sqcRYGate(q, 0.22587827983102374, 4);
  sqcRYGate(q, -2.6351126777270455, 5);
  sqcRYGate(q, 2.0485301739036834, 6);
  sqcRYGate(q, 0.8845655792770835, 7);

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
