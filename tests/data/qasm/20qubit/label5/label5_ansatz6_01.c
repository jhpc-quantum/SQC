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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 1.3298978810047384, 0);
  sqcRYGate(q, 0.6156608482807786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.45388817385122243, 0);
  sqcRYGate(q, 1.339722527126145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4607832423454599, 1);
  sqcRYGate(q, 1.7702451683494784, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.169291306269634, 1);
  sqcRYGate(q, -2.2722424879785406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.056658550010920634, 2);
  sqcRYGate(q, -2.7245495053871003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.03714560780572551, 2);
  sqcRYGate(q, 2.6479866830759913, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8404499143727353, 3);
  sqcRYGate(q, 1.2788335728789568, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.759843385156258, 3);
  sqcRYGate(q, -1.7071973248183623, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6123231971029757, 4);
  sqcRYGate(q, -2.930760902960711, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9580662489666416, 4);
  sqcRYGate(q, -1.2264978456965125, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6182508763272567, 5);
  sqcRYGate(q, -2.656814063009252, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6675076167229923, 5);
  sqcRYGate(q, 2.6417287208901614, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7594297237945106, 6);
  sqcRYGate(q, 2.614771521885342, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6795789427077183, 6);
  sqcRYGate(q, -1.2279392157625413, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2205395544029405, 7);
  sqcRYGate(q, -2.4983593049831567, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.3583269981154826, 7);
  sqcRYGate(q, -0.812027741072086, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.455523304736104, 8);
  sqcRYGate(q, -3.0290133596301203, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5561508359944218, 8);
  sqcRYGate(q, -1.5342093645626385, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.154297679005701, 9);
  sqcRYGate(q, 2.967562890364791, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9231551372375248, 9);
  sqcRYGate(q, -2.362901455486254, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4414155258005874, 10);
  sqcRYGate(q, 2.7366739599933743, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.9605700391858896, 10);
  sqcRYGate(q, -1.4890302219826541, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6716247554907282, 11);
  sqcRYGate(q, -0.8415425358714694, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5652708708292835, 11);
  sqcRYGate(q, 0.5305615405386286, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.1041458605291545, 12);
  sqcRYGate(q, -2.0181242600234173, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.9644653485351133, 12);
  sqcRYGate(q, -1.4210030093893995, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.1093980537054877, 13);
  sqcRYGate(q, -0.011997111687720441, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.8685906758475603, 13);
  sqcRYGate(q, -1.1733506490429662, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.3499253792140693, 14);
  sqcRYGate(q, 2.9357625729075068, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.3337238218889746, 14);
  sqcRYGate(q, -1.541365119513344, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.2021765314029014, 15);
  sqcRYGate(q, -2.1897662931440864, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.689255535552654, 15);
  sqcRYGate(q, -1.28038880103806, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.1538182348502066, 16);
  sqcRYGate(q, 0.09530448692130411, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.268803567030937, 16);
  sqcRYGate(q, 2.5343016234990183, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.03765497601080359, 17);
  sqcRYGate(q, 2.323342642625349, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.6906517535444388, 17);
  sqcRYGate(q, 0.20752990300406626, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.0207609101721538, 18);
  sqcRYGate(q, -0.6245788803553989, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.4938746505874878, 18);
  sqcRYGate(q, 3.117110560803067, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.6507864310795424, 0);
  sqcRYGate(q, 2.207472552896422, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6712409324197086, 0);
  sqcRYGate(q, 1.0694289950488893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0913893820360223, 1);
  sqcRYGate(q, 1.2416663997331698, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.381537682971635, 1);
  sqcRYGate(q, 0.5007388572361586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3109820829779535, 2);
  sqcRYGate(q, 2.9541647741391976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9697313409002923, 2);
  sqcRYGate(q, 1.4938039826943128, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6409791981235453, 3);
  sqcRYGate(q, 3.0268239844760396, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.031294396779646405, 3);
  sqcRYGate(q, 3.126741815330395, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.1333046316333484, 4);
  sqcRYGate(q, -1.4761118483396274, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.67890777528876, 4);
  sqcRYGate(q, -1.020983470792248, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6534624562281754, 5);
  sqcRYGate(q, -2.961279315514872, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.102178007825031, 5);
  sqcRYGate(q, -1.984354478757983, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0128788419188552, 6);
  sqcRYGate(q, -1.5780279935719883, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6340366792489718, 6);
  sqcRYGate(q, -1.2501036688755454, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8522467161115515, 7);
  sqcRYGate(q, -1.9528172608897394, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.028277127860531, 7);
  sqcRYGate(q, 0.8535207307842901, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.3670978348235603, 8);
  sqcRYGate(q, 1.562103239626028, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.9363742423280765, 8);
  sqcRYGate(q, 1.1670567218422496, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5994027614624475, 9);
  sqcRYGate(q, -1.5770780651562886, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7989180701888001, 9);
  sqcRYGate(q, 1.884411515901211, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.582314977495428, 10);
  sqcRYGate(q, 1.611147778213942, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.221856372439886, 10);
  sqcRYGate(q, -1.98508482238204, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5745978338474025, 11);
  sqcRYGate(q, -1.5801101983153023, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.9796679970760717, 11);
  sqcRYGate(q, 2.370728790553654, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.4731781806528563, 12);
  sqcRYGate(q, -1.5726883560583815, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.331910418534196, 12);
  sqcRYGate(q, 0.05902773183809984, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5553857609732846, 13);
  sqcRYGate(q, -1.5599002990580317, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.2933724764405707, 13);
  sqcRYGate(q, 2.555038009133949, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5247121421969458, 14);
  sqcRYGate(q, -1.5363060037810339, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.8051442758459536, 14);
  sqcRYGate(q, -0.6917731767678446, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5965158112746405, 15);
  sqcRYGate(q, -1.4830312276222442, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.5913395635225625, 15);
  sqcRYGate(q, 1.1307568060024602, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.2288381288575687, 16);
  sqcRYGate(q, 1.3149160695332593, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.0135372711006383, 16);
  sqcRYGate(q, 0.106421231965203, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.5970137506688182, 17);
  sqcRYGate(q, -2.234202639633336, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.3349522296541605, 17);
  sqcRYGate(q, 2.1826066130495074, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.5095857936112909, 18);
  sqcRYGate(q, 2.5181222812558373, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.5784979596171222, 18);
  sqcRYGate(q, -2.3914511584577687, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.749106603691995, 0);
  sqcRYGate(q, 1.4716910974773532, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1864309908307213, 0);
  sqcRYGate(q, 1.4927350506443142, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5436125841510187, 1);
  sqcRYGate(q, 1.3981073609517383, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.661005675504769, 1);
  sqcRYGate(q, -1.0748660671740407, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.171438035803714, 2);
  sqcRYGate(q, -0.0006350005410483226, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5751912043321967, 2);
  sqcRYGate(q, -0.2777974990534777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4024345182337754, 3);
  sqcRYGate(q, 1.4494933650321906, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3131528329745374, 3);
  sqcRYGate(q, 1.5965956345577172, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5929282289918734, 4);
  sqcRYGate(q, -1.5087476457035691, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5942454187301198, 4);
  sqcRYGate(q, 0.8089723439142394, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5825879375193848, 5);
  sqcRYGate(q, 1.579957536190726, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.016570114586559, 5);
  sqcRYGate(q, 1.058540852573464, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5728122918971645, 6);
  sqcRYGate(q, 1.5791591667233682, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1787215851454063, 6);
  sqcRYGate(q, -0.8355629736291688, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.56460163683184, 7);
  sqcRYGate(q, 1.595947569675059, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.610190440808423, 7);
  sqcRYGate(q, 2.4358887746499835, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5554284910045535, 8);
  sqcRYGate(q, 1.5846906258070677, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.077461194911436, 8);
  sqcRYGate(q, -0.6490655028139622, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.554448341215695, 9);
  sqcRYGate(q, 1.5668609740730555, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.5508705559547273, 9);
  sqcRYGate(q, 1.89905047624511, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5520493124440744, 10);
  sqcRYGate(q, 2.690902024782782, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1067495720305125, 10);
  sqcRYGate(q, 1.6647396756395152, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4639499953417259, 11);
  sqcRYGate(q, -1.4648210511795385, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.8994280841449005, 11);
  sqcRYGate(q, -3.1325017033807314, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5666274641269071, 12);
  sqcRYGate(q, 1.5776050322634287, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.789360451997314, 12);
  sqcRYGate(q, -1.6955581905163364, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5571141574956133, 13);
  sqcRYGate(q, 1.5391296013039497, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.8871212726741402, 13);
  sqcRYGate(q, -0.6698582588374906, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5853308076822747, 14);
  sqcRYGate(q, 1.5130343998802065, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.703277626766554, 14);
  sqcRYGate(q, 1.8684556177956864, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5740173091428582, 15);
  sqcRYGate(q, -1.190656227592834, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.6084085141070568, 15);
  sqcRYGate(q, -2.0735403391917515, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.5776074710723595, 16);
  sqcRYGate(q, -1.5391049349107426, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.6221415492958844, 16);
  sqcRYGate(q, 2.5125979747444354, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.6012969610498178, 17);
  sqcRYGate(q, -1.760926585569138, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.8341808784863356, 17);
  sqcRYGate(q, 1.1425456590007714, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.9812604249771537, 18);
  sqcRYGate(q, 0.9223085794788636, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.36581357976849, 18);
  sqcRYGate(q, -0.5925398593876448, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.6449060128828314, 0);
  sqcRYGate(q, 1.6466645897738936, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6932647937212553, 0);
  sqcRYGate(q, -1.0647173382939057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7624730592126494, 1);
  sqcRYGate(q, -0.7143946888246798, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4619397698329386, 1);
  sqcRYGate(q, 0.05182659263493322, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9333045817273566, 2);
  sqcRYGate(q, 1.5658772909023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4058909798263628, 2);
  sqcRYGate(q, -0.7686654091013968, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5766270040939059, 3);
  sqcRYGate(q, 1.5734927960627623, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7786920877538211, 3);
  sqcRYGate(q, 1.8827098519954983, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8350759745904494, 4);
  sqcRYGate(q, 1.5670092724149918, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9276989241672602, 4);
  sqcRYGate(q, 0.003718921808697928, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5637085911347397, 5);
  sqcRYGate(q, 1.5701267067118418, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8970864020446578, 5);
  sqcRYGate(q, -2.153617479334687, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5765652628493, 6);
  sqcRYGate(q, -1.576192005349614, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.330810424453725, 6);
  sqcRYGate(q, -2.2842301432337533, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5772196159739815, 7);
  sqcRYGate(q, 1.5773281090391311, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.652166528839133, 7);
  sqcRYGate(q, 0.5490413658976282, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.573533804415475, 8);
  sqcRYGate(q, -1.5630857611034124, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.5501982000159744, 8);
  sqcRYGate(q, -2.455813425273556, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5745070201233715, 9);
  sqcRYGate(q, 1.5716311769626676, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.1304659391903924, 9);
  sqcRYGate(q, 0.911360900857683, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.977711277615129, 10);
  sqcRYGate(q, 0.32137521811523057, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.281080392836419, 10);
  sqcRYGate(q, -3.132937520780745, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5301390596333884, 11);
  sqcRYGate(q, 1.5364681104627387, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.3458572175133194, 11);
  sqcRYGate(q, -0.5761756267586923, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.601717657308277, 12);
  sqcRYGate(q, 1.5681512366751242, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.738431742942725, 12);
  sqcRYGate(q, 1.6006085237478196, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5705257010406477, 13);
  sqcRYGate(q, 1.5705729021287347, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.6308077470352151, 13);
  sqcRYGate(q, -1.4602423157458042, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5613643455784916, 14);
  sqcRYGate(q, 1.5704376460365195, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.538368212798657, 14);
  sqcRYGate(q, -0.895615006255511, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5767033384482243, 15);
  sqcRYGate(q, 1.5684734234162536, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.5455522301151126, 15);
  sqcRYGate(q, 2.3757874674715134, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5707535283726815, 16);
  sqcRYGate(q, 1.5557954620532177, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.5971686182183351, 16);
  sqcRYGate(q, -0.814565212450484, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.8435427835554727, 17);
  sqcRYGate(q, -2.5992111275409346, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 3.0161628798409823, 17);
  sqcRYGate(q, 3.131838823376208, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.723076960446278, 18);
  sqcRYGate(q, 1.0457904662245296, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.7910961662721276, 18);
  sqcRYGate(q, 2.3572023287496706, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.5991810689369617, 0);
  sqcRYGate(q, 0.10841356322163076, 1);
  sqcRYGate(q, 1.5812983790351103, 2);
  sqcRYGate(q, 1.5765479937505988, 3);
  sqcRYGate(q, -0.8419508722246567, 4);
  sqcRYGate(q, -1.576099549655276, 5);
  sqcRYGate(q, 1.5753896903080633, 6);
  sqcRYGate(q, -1.5701710389607635, 7);
  sqcRYGate(q, -1.5812011923222924, 8);
  sqcRYGate(q, 1.5742285928368467, 9);
  sqcRYGate(q, -0.13800904673210646, 10);
  sqcRYGate(q, -1.6058962684610023, 11);
  sqcRYGate(q, -1.5683150335131586, 12);
  sqcRYGate(q, -1.5701056214965834, 13);
  sqcRYGate(q, -1.5871179180375834, 14);
  sqcRYGate(q, -1.560630482951564, 15);
  sqcRYGate(q, -1.5697754732348566, 16);
  sqcRYGate(q, -0.31548283030095675, 17);
  sqcRYGate(q, 0.996289024720201, 18);
  sqcRYGate(q, 1.0752945545205916, 19);

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
