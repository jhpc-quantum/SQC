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

  sqcRYGate(q, -0.5517486544816581, 0);
  sqcRYGate(q, 2.600683990666033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.992622707661411, 0);
  sqcRYGate(q, -2.1289702129415105, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.05140219318511, 1);
  sqcRYGate(q, -1.6132428395522196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.207180297146966, 1);
  sqcRYGate(q, 1.2461902817667525, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9840001794865523, 2);
  sqcRYGate(q, 0.900353117231071, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1268814254463826, 2);
  sqcRYGate(q, 0.9637842132819188, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3095016339655041, 3);
  sqcRYGate(q, 2.1516838705119894, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.30224552653069914, 3);
  sqcRYGate(q, 1.8774875305079064, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.674355215821553, 4);
  sqcRYGate(q, -0.17232459675042916, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.246954473010226, 4);
  sqcRYGate(q, -0.9661675492749145, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4104387140585427, 5);
  sqcRYGate(q, -2.3831645042467122, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6639141791034464, 5);
  sqcRYGate(q, -2.0621134683512174, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.45966365985896745, 6);
  sqcRYGate(q, 1.3450499512906795, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1090871052991833, 6);
  sqcRYGate(q, 1.9778103996154073, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9174176192406129, 0);
  sqcRYGate(q, -2.9040140462693516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5537972395759932, 0);
  sqcRYGate(q, 0.5440752063151937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.700314457403093, 1);
  sqcRYGate(q, -0.7639505710758856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4479078151427256, 1);
  sqcRYGate(q, 1.8141756129714726, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4491268774329855, 2);
  sqcRYGate(q, 0.49172745212215513, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9357741271498377, 2);
  sqcRYGate(q, -0.6155691470871094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1236393102454638, 3);
  sqcRYGate(q, 3.120783244850962, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.34727758531790354, 3);
  sqcRYGate(q, 2.8642924834369925, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.26962699516821337, 4);
  sqcRYGate(q, -0.7078715430335834, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.738591812323147, 4);
  sqcRYGate(q, 2.5611333174223687, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8231053628888847, 5);
  sqcRYGate(q, 1.48201336505161, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5407196321312506, 5);
  sqcRYGate(q, -2.650768863647686, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.34003202746272115, 6);
  sqcRYGate(q, 0.4600891488422416, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7355520489581955, 6);
  sqcRYGate(q, 0.8483742713178337, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3406070513288278, 0);
  sqcRYGate(q, -2.8137667616491773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.814047676770409, 0);
  sqcRYGate(q, 2.390729667432732, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0902442226292712, 1);
  sqcRYGate(q, -0.15197246581372187, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.157518002971172, 1);
  sqcRYGate(q, -0.13009689643090466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.15566126969052324, 2);
  sqcRYGate(q, 0.029701688114482927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4850781226757301, 2);
  sqcRYGate(q, -3.0251468982788587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.33939830455164, 3);
  sqcRYGate(q, -0.3365621414283814, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.99033543808224, 3);
  sqcRYGate(q, -0.05104828095942082, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.35449290539633743, 4);
  sqcRYGate(q, 2.980089763251058, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.583698244231239, 4);
  sqcRYGate(q, -0.7697344329275824, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.286779055753191, 5);
  sqcRYGate(q, 0.2698833120878925, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.389512541904079, 5);
  sqcRYGate(q, -0.025191137116344058, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.953367194495596, 6);
  sqcRYGate(q, -2.315803091038141, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.03536587291655551, 6);
  sqcRYGate(q, 2.839916518695651, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.996980343905169, 0);
  sqcRYGate(q, 1.6389330470188916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.48048091546895, 0);
  sqcRYGate(q, -0.3100289286747824, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7916455587778266, 1);
  sqcRYGate(q, -2.4877127697238377, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7438852617891725, 1);
  sqcRYGate(q, -2.8942193503213645, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.19178156413668435, 2);
  sqcRYGate(q, 0.6872169965237764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.526455320554976, 2);
  sqcRYGate(q, 3.054997516927087, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1483285302493726, 3);
  sqcRYGate(q, 1.6846748114647871, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9472304697845, 3);
  sqcRYGate(q, 1.7590964518990901, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.073802139850494, 4);
  sqcRYGate(q, 0.7328641362042158, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6942186693222658, 4);
  sqcRYGate(q, -1.0735972961138938, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4861591196778623, 5);
  sqcRYGate(q, -2.0854944015386927, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.133478591617461, 5);
  sqcRYGate(q, -2.0400835903150742, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.036378852315436, 6);
  sqcRYGate(q, 0.7737402319222101, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3141960612338806, 6);
  sqcRYGate(q, 1.6976247146686525, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5981720934467143, 0);
  sqcRYGate(q, 1.852621371247432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3221772331635906, 0);
  sqcRYGate(q, 0.6303110658099101, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7389300195818245, 1);
  sqcRYGate(q, -1.383697127842685, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9148051554811176, 1);
  sqcRYGate(q, 1.8211834661623243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7925347401745175, 2);
  sqcRYGate(q, 2.3075549605266996, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6554507953383304, 2);
  sqcRYGate(q, -1.382280695019867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9031577095161576, 3);
  sqcRYGate(q, -2.4469222686813534, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2429818670566157, 3);
  sqcRYGate(q, -2.4838174591130255, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3817290114556275, 4);
  sqcRYGate(q, 2.389324312108716, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1641965600815105, 4);
  sqcRYGate(q, 1.9899508316551544, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.992876521945924, 5);
  sqcRYGate(q, -1.5485563904255537, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.911154776718957, 5);
  sqcRYGate(q, 1.8089233284248127, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.664051359943985, 6);
  sqcRYGate(q, 2.7159134127988436, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9697789708332536, 6);
  sqcRYGate(q, -2.08315232722734, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.495193653684921, 0);
  sqcRYGate(q, 0.14200487342862753, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4297631801249153, 0);
  sqcRYGate(q, -3.0175166844889616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9027347749371644, 1);
  sqcRYGate(q, 2.287598712470277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.16114475216181834, 1);
  sqcRYGate(q, -1.3934713865995598, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2891231673664905, 2);
  sqcRYGate(q, -0.1621405899077464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3340790044529707, 2);
  sqcRYGate(q, 1.550972149681706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8140840810788463, 3);
  sqcRYGate(q, 2.450747537900178, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6853649880670227, 3);
  sqcRYGate(q, 1.9639352115195097, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0039149219216172, 4);
  sqcRYGate(q, 2.4808104730934906, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6881788584793975, 4);
  sqcRYGate(q, 0.6882613486661331, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.510000251830033, 5);
  sqcRYGate(q, 3.0298327560830347, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5973236538360256, 5);
  sqcRYGate(q, -1.1006830375591248, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7984122193391041, 6);
  sqcRYGate(q, -0.7584880182863961, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0110025078759026, 6);
  sqcRYGate(q, 2.3183112684866, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7643259055316776, 0);
  sqcRYGate(q, -1.8068107929644608, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9578396976960244, 0);
  sqcRYGate(q, -0.9781200730767453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.228333405670278, 1);
  sqcRYGate(q, 1.9839330898860228, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.23146174260621, 1);
  sqcRYGate(q, -0.16160219405374843, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.00234937178931948, 2);
  sqcRYGate(q, 0.7907225738003054, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3811536690616826, 2);
  sqcRYGate(q, 1.80485087317784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6284530355102319, 3);
  sqcRYGate(q, 1.627747728908445, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9710048442845427, 3);
  sqcRYGate(q, -0.20155191920400875, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4471389610528207, 4);
  sqcRYGate(q, -0.695681125754167, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.313454661557547, 4);
  sqcRYGate(q, -1.9209988872413826, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0730851607561747, 5);
  sqcRYGate(q, -2.0387654992547373, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1603715380084785, 5);
  sqcRYGate(q, 1.3110745110537438, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.435549092616257, 6);
  sqcRYGate(q, -2.297468777483127, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6008231888993385, 6);
  sqcRYGate(q, -2.561057469524045, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.43338739729182585, 0);
  sqcRYGate(q, 0.21740867771494182, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4135389606124298, 0);
  sqcRYGate(q, -1.4569299023270803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1375216647819233, 1);
  sqcRYGate(q, -2.24837991270142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.586381219499393, 1);
  sqcRYGate(q, 2.1106036367565286, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3537136413115105, 2);
  sqcRYGate(q, -1.769714329308427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8379617061057284, 2);
  sqcRYGate(q, -2.55155988593608, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9511068169411687, 3);
  sqcRYGate(q, -2.9115429084945457, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3392281847652381, 3);
  sqcRYGate(q, -2.9964662595698135, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7261560731627499, 4);
  sqcRYGate(q, 0.558261392565452, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0336419895786886, 4);
  sqcRYGate(q, 0.007241082714585896, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.49557783817051254, 5);
  sqcRYGate(q, 0.6435004264777016, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0481257909499053, 5);
  sqcRYGate(q, -0.37797615309600197, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1369789236148753, 6);
  sqcRYGate(q, -1.4867691734974935, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7471018215366316, 6);
  sqcRYGate(q, 2.082706920338931, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.540183707320089, 0);
  sqcRYGate(q, 2.4112138438314417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.921436055064657, 0);
  sqcRYGate(q, 2.342997640078988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3895356239846404, 1);
  sqcRYGate(q, 0.5128643863124651, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.47595160641572287, 1);
  sqcRYGate(q, 3.1273183925064485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.677285273457602, 2);
  sqcRYGate(q, -0.8727030346267546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6139529178741991, 2);
  sqcRYGate(q, -0.6794460458027416, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6204701687507521, 3);
  sqcRYGate(q, -3.037716424000873, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5852656525407272, 3);
  sqcRYGate(q, 0.9977177442590719, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1536262446405323, 4);
  sqcRYGate(q, 0.7106594111379324, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1112132272640487, 4);
  sqcRYGate(q, -1.9965070713613653, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4809228759766895, 5);
  sqcRYGate(q, -3.0364809514302946, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1238920820411034, 5);
  sqcRYGate(q, 1.837696800995377, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2266262862782993, 6);
  sqcRYGate(q, -1.7474503698944148, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0549859460614925, 6);
  sqcRYGate(q, 2.0029381660008623, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3263968830317885, 0);
  sqcRYGate(q, 1.4005804184811692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8468196212855843, 0);
  sqcRYGate(q, 2.4853155744162216, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.344864393087255, 1);
  sqcRYGate(q, -0.04153804260817928, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5122451283587552, 1);
  sqcRYGate(q, 0.9289939305877937, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1807587235600665, 2);
  sqcRYGate(q, -2.6683739147808443, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2266885036275514, 2);
  sqcRYGate(q, 0.751910416544634, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6075421203766596, 3);
  sqcRYGate(q, -1.865783241516318, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.113775115948984, 3);
  sqcRYGate(q, 1.929630246104305, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.362867756905288, 4);
  sqcRYGate(q, 2.361564638739793, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2402586991779319, 4);
  sqcRYGate(q, 2.8574822510268123, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1537668659877793, 5);
  sqcRYGate(q, 1.4602145190719913, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9556312323755884, 5);
  sqcRYGate(q, 2.0478209839587134, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8430299546234209, 6);
  sqcRYGate(q, -2.6144036485234126, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.42954111084996605, 6);
  sqcRYGate(q, -1.511850150049912, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7693270696209638, 0);
  sqcRYGate(q, 0.6458142005862699, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.18794478255717983, 0);
  sqcRYGate(q, -1.7801358198460266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3254626339504065, 1);
  sqcRYGate(q, -3.088234607492651, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.899898694521021, 1);
  sqcRYGate(q, -2.3311853602115393, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.02990873793693, 2);
  sqcRYGate(q, 1.8429232894428844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7205190951810045, 2);
  sqcRYGate(q, -0.4074639204074757, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8364800532596501, 3);
  sqcRYGate(q, 2.599994750014395, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8723380900075917, 3);
  sqcRYGate(q, 2.949157634187666, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3867159128616164, 4);
  sqcRYGate(q, 1.6921056706279904, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5017651966312107, 4);
  sqcRYGate(q, 1.4992314258286976, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0908863575823033, 5);
  sqcRYGate(q, -2.0157810473555333, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.17820209830997927, 5);
  sqcRYGate(q, -0.9799812878253632, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.047342625373162, 6);
  sqcRYGate(q, -2.68431176363213, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7368648065282362, 6);
  sqcRYGate(q, 1.5899749035186386, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3083239066259993, 0);
  sqcRYGate(q, 2.3580297976833853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5476254063542467, 0);
  sqcRYGate(q, -0.9193008215108546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.105198802381314, 1);
  sqcRYGate(q, 0.9821785908601172, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.468926700609645, 1);
  sqcRYGate(q, 1.2750338789095323, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4650418965714609, 2);
  sqcRYGate(q, -0.660404451200292, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8665647752413514, 2);
  sqcRYGate(q, 1.4357362488801595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.25780080055242516, 3);
  sqcRYGate(q, -0.20149604838244617, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.904551646918909, 3);
  sqcRYGate(q, -1.2472225195003697, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5894169214605087, 4);
  sqcRYGate(q, 1.7704526857117573, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1185270429032372, 4);
  sqcRYGate(q, -0.050877688532295906, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4427326673012933, 5);
  sqcRYGate(q, 2.8925460711100754, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6677279265899839, 5);
  sqcRYGate(q, 0.2642783797371467, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9074723638466686, 6);
  sqcRYGate(q, 2.784707911312034, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6986211669943967, 6);
  sqcRYGate(q, -1.7376645012419387, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2977812679835923, 0);
  sqcRYGate(q, 2.8913041116752787, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.27931971946002054, 0);
  sqcRYGate(q, -1.8353646702440312, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.927569508874718, 1);
  sqcRYGate(q, -0.7624769905391142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.037746152187841, 1);
  sqcRYGate(q, -0.19235260593601672, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9765547096553633, 2);
  sqcRYGate(q, -0.9003668526921209, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.165245047902838, 2);
  sqcRYGate(q, -2.152099454777252, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5338012079693248, 3);
  sqcRYGate(q, 1.6016329992578557, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8167765429237025, 3);
  sqcRYGate(q, 2.5367334218471616, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0546015707150262, 4);
  sqcRYGate(q, 1.287389861505149, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7183557030380747, 4);
  sqcRYGate(q, -3.007558870317592, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.471703026738544, 5);
  sqcRYGate(q, 1.1999546981967137, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7353677251325235, 5);
  sqcRYGate(q, -2.895463900154701, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.317008875086338, 6);
  sqcRYGate(q, -0.7265218118031735, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.724070128326722, 6);
  sqcRYGate(q, 2.058368205236606, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.356774022765216, 0);
  sqcRYGate(q, -0.28016882729861553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.677998562687165, 0);
  sqcRYGate(q, 3.0750499939372853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21452034734164643, 1);
  sqcRYGate(q, -0.18309633680788825, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.012780012775726, 1);
  sqcRYGate(q, 0.8400031045697451, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3140189031860383, 2);
  sqcRYGate(q, -2.9567682722129756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14174081943916822, 2);
  sqcRYGate(q, -0.012495307008156153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5305788965704137, 3);
  sqcRYGate(q, -1.5784290595839654, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.76990585262806, 3);
  sqcRYGate(q, 1.8088358957729724, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.149544098164214, 4);
  sqcRYGate(q, 1.846949087785661, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2229675306317134, 4);
  sqcRYGate(q, 2.2372991312010058, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1206814971908496, 5);
  sqcRYGate(q, -3.1322186756998636, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8308033509091204, 5);
  sqcRYGate(q, -2.1071992188509556, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0897473146166687, 6);
  sqcRYGate(q, 0.6695023872609411, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.218246300142975, 6);
  sqcRYGate(q, 1.7223082198717596, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.717077196615402, 0);
  sqcRYGate(q, -1.5748776973093854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6325536985102373, 0);
  sqcRYGate(q, 1.9272658218660281, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6508071532548616, 1);
  sqcRYGate(q, -1.6877551925628582, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8993665078666737, 1);
  sqcRYGate(q, 0.6917797556229629, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2569482900361244, 2);
  sqcRYGate(q, 2.400802173612937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2074018459718756, 2);
  sqcRYGate(q, 1.7969299146745605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6926945193847147, 3);
  sqcRYGate(q, 2.4428430149406175, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4833134621832156, 3);
  sqcRYGate(q, -2.539667688140973, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.219396136470771, 4);
  sqcRYGate(q, -2.951078345199756, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4563569760234385, 4);
  sqcRYGate(q, 3.1103368061784784, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.058261674404712, 5);
  sqcRYGate(q, 1.1161056788129944, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7090065780746166, 5);
  sqcRYGate(q, 1.2676178746837286, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.146656097071058, 6);
  sqcRYGate(q, -2.800948981258004, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.057878016402984, 6);
  sqcRYGate(q, 0.9562649585547661, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2354466822585155, 0);
  sqcRYGate(q, 1.8367627444870351, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4616088152868808, 0);
  sqcRYGate(q, -2.239321913218591, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.595495882509559, 1);
  sqcRYGate(q, -1.8799249682456645, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.993733838691636, 1);
  sqcRYGate(q, 1.6446455715576709, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0058461518969772, 2);
  sqcRYGate(q, 0.3470127853230834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8299122722558493, 2);
  sqcRYGate(q, 2.953580595136677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3640190746197611, 3);
  sqcRYGate(q, 0.5568874414063482, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5751778864720019, 3);
  sqcRYGate(q, -0.9717963438296175, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4893427120980394, 4);
  sqcRYGate(q, 1.5497897057513548, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7395288523767043, 4);
  sqcRYGate(q, -2.265872323316346, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.077548768376489, 5);
  sqcRYGate(q, 1.0912141078353303, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7419569075488894, 5);
  sqcRYGate(q, 1.2606909363021912, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3831678892671144, 6);
  sqcRYGate(q, 0.1120404605051023, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4259591542457789, 6);
  sqcRYGate(q, 0.41202250792795425, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4086028544890405, 0);
  sqcRYGate(q, -0.2873669234513381, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2083914360954093, 0);
  sqcRYGate(q, 2.1582792492465517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5896968627016754, 1);
  sqcRYGate(q, 0.8679388579623978, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5229930907384455, 1);
  sqcRYGate(q, 1.6673310721613472, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5035327516220516, 2);
  sqcRYGate(q, 1.0173081551638712, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.13495676790222788, 2);
  sqcRYGate(q, 1.6446070939165072, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8885546516008715, 3);
  sqcRYGate(q, 1.206264515995323, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5809938520937767, 3);
  sqcRYGate(q, -0.3900261277870787, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.695029080781536, 4);
  sqcRYGate(q, -1.079710167579006, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4572764855245701, 4);
  sqcRYGate(q, 1.4476567985977677, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5655322578915136, 5);
  sqcRYGate(q, -2.0642557747683723, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7625986674059044, 5);
  sqcRYGate(q, 2.5402561878476058, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5775810913485997, 6);
  sqcRYGate(q, -2.5137880291486803, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1726860339049447, 6);
  sqcRYGate(q, -1.4542934278610555, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5204622100610141, 0);
  sqcRYGate(q, -1.1120828917603829, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6475120007763182, 0);
  sqcRYGate(q, -2.909830384822855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9191803926400883, 1);
  sqcRYGate(q, -2.906872261642739, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8931703363477863, 1);
  sqcRYGate(q, 1.7415017254436087, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.32900397426649863, 2);
  sqcRYGate(q, 2.029137908457537, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3891107100860944, 2);
  sqcRYGate(q, -0.032623571201869844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.25255725600432133, 3);
  sqcRYGate(q, -3.033071845933839, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.93332038643275, 3);
  sqcRYGate(q, -0.5449662101215254, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8069244028727383, 4);
  sqcRYGate(q, -1.3844071145501293, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.522910645486234, 4);
  sqcRYGate(q, -3.0362512231249212, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1983433156709888, 5);
  sqcRYGate(q, 1.9093595258433198, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8469997434249756, 5);
  sqcRYGate(q, -2.835329785783309, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3397226930753745, 6);
  sqcRYGate(q, 0.6041844270215161, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2082061360517944, 6);
  sqcRYGate(q, 2.7529636279389407, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4044869762363549, 0);
  sqcRYGate(q, 1.6960631531381178, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5543065811774548, 0);
  sqcRYGate(q, -2.409250532182087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2843589029114115, 1);
  sqcRYGate(q, -0.6244956483189847, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9306924388964988, 1);
  sqcRYGate(q, -2.4153020555076963, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3043411341270232, 2);
  sqcRYGate(q, -0.5245434838095866, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.663697967728025, 2);
  sqcRYGate(q, -2.3547941343293277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3081962138487877, 3);
  sqcRYGate(q, -0.941854403285955, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2068557551696797, 3);
  sqcRYGate(q, -1.3377185774769886, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6042281720710374, 4);
  sqcRYGate(q, -2.213402202514902, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6002326047400185, 4);
  sqcRYGate(q, -2.2756126378317645, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0632281477245202, 5);
  sqcRYGate(q, 0.6518755643176262, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7928139998283186, 5);
  sqcRYGate(q, -1.1728941950270364, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3753009229379933, 6);
  sqcRYGate(q, -2.9632946563474474, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.520504390038855, 6);
  sqcRYGate(q, -2.5642800037367435, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.122991923543498, 0);
  sqcRYGate(q, -2.355206680262373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.286421141597166, 0);
  sqcRYGate(q, 1.2543128142345035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7251469505816632, 1);
  sqcRYGate(q, 2.971718070217447, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3090598441018306, 1);
  sqcRYGate(q, -1.7529109216623755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2627835459832728, 2);
  sqcRYGate(q, -1.492773234741657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.190646491444043, 2);
  sqcRYGate(q, -1.2416563611818474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.216474137029678, 3);
  sqcRYGate(q, -1.359473589290233, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.260465948548295, 3);
  sqcRYGate(q, -3.0384458894327557, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.660490515613379, 4);
  sqcRYGate(q, -0.6237117537972825, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.796828382229277, 4);
  sqcRYGate(q, 2.3333085706686103, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.989401500952984, 5);
  sqcRYGate(q, 0.35871048404469524, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4820365617957028, 5);
  sqcRYGate(q, -0.5835577010842181, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4822682986536786, 6);
  sqcRYGate(q, 0.6579970809696902, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1657459767719889, 6);
  sqcRYGate(q, 2.2337016524662108, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.109240958340735, 0);
  sqcRYGate(q, 1.772887388029792, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5910733947375966, 0);
  sqcRYGate(q, 0.16827205155482497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.506745086832784, 1);
  sqcRYGate(q, -0.5684491456752125, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.24208192497545866, 1);
  sqcRYGate(q, -1.5913099972092146, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9775528323957072, 2);
  sqcRYGate(q, -0.6621821752443697, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.42273619850102584, 2);
  sqcRYGate(q, 1.1588931862839098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7119648519371813, 3);
  sqcRYGate(q, 2.7794302243672266, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.070958382276282, 3);
  sqcRYGate(q, -2.967630768305161, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4079902487944402, 4);
  sqcRYGate(q, -0.6333194129724082, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.197578668215833, 4);
  sqcRYGate(q, -0.6592597981522799, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.095266425319721, 5);
  sqcRYGate(q, -1.5939778325157636, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3834972037219035, 5);
  sqcRYGate(q, 2.9066143968206655, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3683371292861028, 6);
  sqcRYGate(q, 1.8291411139918603, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9969009468072482, 6);
  sqcRYGate(q, -2.1545258112629955, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9518237297269307, 0);
  sqcRYGate(q, -1.9532560494684856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9540333234023903, 0);
  sqcRYGate(q, 2.9840923552795475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8988609979714437, 1);
  sqcRYGate(q, -1.1275252016899016, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8068103959591032, 1);
  sqcRYGate(q, 0.921690213961536, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1328551283547785, 2);
  sqcRYGate(q, -2.8393470351203285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.032167699316311, 2);
  sqcRYGate(q, 2.302043965495828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5106531527908267, 3);
  sqcRYGate(q, -2.507614253782493, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.32370751376463325, 3);
  sqcRYGate(q, 1.4076565624896145, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.025984067190183, 4);
  sqcRYGate(q, -2.468592063763842, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.118165695956138, 4);
  sqcRYGate(q, -2.3258849863703026, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6583805455230163, 5);
  sqcRYGate(q, -0.0931466337240936, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6213997258238271, 5);
  sqcRYGate(q, 2.8643298468020175, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6638024693400956, 6);
  sqcRYGate(q, -0.7898191433022668, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1225529318300476, 6);
  sqcRYGate(q, 2.5184507440982324, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5696763936450546, 0);
  sqcRYGate(q, 0.4404896588694252, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5219539656049365, 0);
  sqcRYGate(q, -1.8111034509671633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8909051029028386, 1);
  sqcRYGate(q, 3.138868087019083, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2318505281330019, 1);
  sqcRYGate(q, -0.46003549252250264, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0900257426507887, 2);
  sqcRYGate(q, 3.054281583958243, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5111423922219289, 2);
  sqcRYGate(q, 3.0500103922378936, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.505326798650291, 3);
  sqcRYGate(q, 1.7062245505698874, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7309300249415942, 3);
  sqcRYGate(q, -2.7573097631929637, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.48648461569831264, 4);
  sqcRYGate(q, -3.136602081144176, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3261557472769976, 4);
  sqcRYGate(q, 3.013576152913804, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7038646930942862, 5);
  sqcRYGate(q, -0.9879574728903371, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6250653071439194, 5);
  sqcRYGate(q, -0.5604567896433421, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5206529696335389, 6);
  sqcRYGate(q, 2.567610495363793, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7796707769431679, 6);
  sqcRYGate(q, -0.6581955266336411, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9641460390796146, 0);
  sqcRYGate(q, 0.75549465029719, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9460561638899376, 0);
  sqcRYGate(q, -2.548019363041344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4492071021432698, 1);
  sqcRYGate(q, -2.3264055758087965, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.476252823176558, 1);
  sqcRYGate(q, 1.4647708343041814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9706319515980537, 2);
  sqcRYGate(q, -2.0894269758926254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.571925632359958, 2);
  sqcRYGate(q, -0.19681879751102827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8063501844260088, 3);
  sqcRYGate(q, -1.609607930117341, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7568850370444355, 3);
  sqcRYGate(q, -2.5887144418451333, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8043761985253379, 4);
  sqcRYGate(q, -0.060943639505420144, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3034049678909378, 4);
  sqcRYGate(q, -1.3751483811567502, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.16715884461601166, 5);
  sqcRYGate(q, -0.28463659345621917, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8327485831509789, 5);
  sqcRYGate(q, -1.0849018666365713, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.631726168652929, 6);
  sqcRYGate(q, -2.6512551959158066, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3777834584778343, 6);
  sqcRYGate(q, -1.8526747321184711, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.075784296169367, 0);
  sqcRYGate(q, 0.5213925504644683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4209740807267988, 0);
  sqcRYGate(q, -2.8260629699930546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6278622516369047, 1);
  sqcRYGate(q, 0.2460378304783806, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.905255591559043, 1);
  sqcRYGate(q, 1.688334123685712, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5501743226074614, 2);
  sqcRYGate(q, 0.8165807384960115, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.18593539864080544, 2);
  sqcRYGate(q, 1.9779201175487748, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7012623699437655, 3);
  sqcRYGate(q, 2.9101300720171865, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.669452719362518, 3);
  sqcRYGate(q, 1.828853157561418, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6984046785866096, 4);
  sqcRYGate(q, 1.4758414741265913, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0648985107907534, 4);
  sqcRYGate(q, 2.43805404786834, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.24913061728389962, 5);
  sqcRYGate(q, 0.4812970085932671, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.106854397358889, 5);
  sqcRYGate(q, 1.7970470239726486, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3438848986482173, 6);
  sqcRYGate(q, 2.1692351553811253, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7120895708088653, 6);
  sqcRYGate(q, -2.7936766408235, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0848242893410864, 0);
  sqcRYGate(q, 0.5640611371210876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5160137488808587, 0);
  sqcRYGate(q, 2.0491576557047, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6568465812223173, 1);
  sqcRYGate(q, 1.0516860455703512, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4296402042227578, 1);
  sqcRYGate(q, -1.8813144051514399, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1459451993086263, 2);
  sqcRYGate(q, -0.4914483469533261, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10175520121801807, 2);
  sqcRYGate(q, -1.3426781007348605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5107392203476125, 3);
  sqcRYGate(q, 1.8415480539017637, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9174961165072402, 3);
  sqcRYGate(q, -0.4818177709095748, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4464623392911866, 4);
  sqcRYGate(q, 0.650198511800739, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2635494756275787, 4);
  sqcRYGate(q, 2.074837509433766, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7843121837061835, 5);
  sqcRYGate(q, 0.6572477495822112, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1918536462822473, 5);
  sqcRYGate(q, 2.1583792131852606, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2905901128489779, 6);
  sqcRYGate(q, 0.9204123871673715, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5921956014843452, 6);
  sqcRYGate(q, -1.9133742912883878, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.028644379552979393, 0);
  sqcRYGate(q, 1.9572189301471699, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.742982782532593, 0);
  sqcRYGate(q, -1.586387258466327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.432375540724901, 1);
  sqcRYGate(q, 2.2978208727212635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0106603653650903, 1);
  sqcRYGate(q, 1.0534321995615716, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9051674891090575, 2);
  sqcRYGate(q, 0.7153825047993364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8001317476764211, 2);
  sqcRYGate(q, -2.814539017031585, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0356036019751711, 3);
  sqcRYGate(q, 1.4284243536362027, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4514187972855169, 3);
  sqcRYGate(q, -2.09038485350932, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7070566968426781, 4);
  sqcRYGate(q, 0.2726764743950664, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.32608568980899916, 4);
  sqcRYGate(q, 2.4349847905339224, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2628263829229276, 5);
  sqcRYGate(q, 2.311213695255757, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7780240712476152, 5);
  sqcRYGate(q, -2.148872370116216, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6265568588477044, 6);
  sqcRYGate(q, -2.235994739096096, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.944926654622499, 6);
  sqcRYGate(q, 2.641914675176064, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2052939633787214, 0);
  sqcRYGate(q, -0.20737278109756918, 1);
  sqcRYGate(q, -1.027109973752736, 2);
  sqcRYGate(q, -1.6927951264990335, 3);
  sqcRYGate(q, -1.672740135029069, 4);
  sqcRYGate(q, 0.2691670475576231, 5);
  sqcRYGate(q, 2.1385540179404625, 6);
  sqcRYGate(q, -0.9761922548753789, 7);

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
