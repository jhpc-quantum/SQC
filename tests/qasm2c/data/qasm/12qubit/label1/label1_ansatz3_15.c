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

  sqcRYGate(q, -0.5998473881609635, 0);
  sqcRZGate(q, 2.0282517286008876, 0);
  sqcRYGate(q, -2.5724608512914955, 1);
  sqcRZGate(q, -0.746793762722672, 1);
  sqcRYGate(q, -1.633495040299668, 2);
  sqcRZGate(q, 0.9245931266220326, 2);
  sqcRYGate(q, -0.39449978792122486, 3);
  sqcRZGate(q, -0.3910556681058176, 3);
  sqcRYGate(q, 2.884005378735643, 4);
  sqcRZGate(q, -2.4623347763380865, 4);
  sqcRYGate(q, -0.9172333678160136, 5);
  sqcRZGate(q, -1.4667989021164454, 5);
  sqcRYGate(q, 3.050953333132305, 6);
  sqcRZGate(q, -2.407986966732, 6);
  sqcRYGate(q, -2.2233735724421084, 7);
  sqcRZGate(q, -0.13501887538191226, 7);
  sqcRYGate(q, -0.7008529396540504, 8);
  sqcRZGate(q, 2.0135153618072428, 8);
  sqcRYGate(q, -0.7195634414338707, 9);
  sqcRZGate(q, -0.7124618040840761, 9);
  sqcRYGate(q, 2.8903389383339304, 10);
  sqcRZGate(q, -2.0558954955971123, 10);
  sqcRYGate(q, 1.2083451099065838, 11);
  sqcRZGate(q, -2.4967456301294066, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.409255507029419, 0);
  sqcRZGate(q, -1.3675756216343422, 0);
  sqcRYGate(q, 0.05289342854173196, 1);
  sqcRZGate(q, -1.5833312623370475, 1);
  sqcRYGate(q, -2.331530911511292, 2);
  sqcRZGate(q, 2.282117917718246, 2);
  sqcRYGate(q, 1.586945563295473, 3);
  sqcRZGate(q, 1.7140530612584834, 3);
  sqcRYGate(q, 3.0913869392977626, 4);
  sqcRZGate(q, -1.3287404025295622, 4);
  sqcRYGate(q, -3.1122347726765254, 5);
  sqcRZGate(q, -1.9307942760178047, 5);
  sqcRYGate(q, 2.2033849345673246, 6);
  sqcRZGate(q, -2.3902858774149265, 6);
  sqcRYGate(q, -0.002956863891161454, 7);
  sqcRZGate(q, 2.0244029786869793, 7);
  sqcRYGate(q, -1.2302980869314626, 8);
  sqcRZGate(q, 0.30229315990484196, 8);
  sqcRYGate(q, 3.0460182825246425, 9);
  sqcRZGate(q, 1.5927550257147232, 9);
  sqcRYGate(q, -0.6721203989198496, 10);
  sqcRZGate(q, 1.462551091769982, 10);
  sqcRYGate(q, 1.3727075722514803, 11);
  sqcRZGate(q, -0.4230506439018944, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.7372443306217578, 0);
  sqcRZGate(q, 0.18377745648046506, 0);
  sqcRYGate(q, -1.2599513910493556, 1);
  sqcRZGate(q, 1.4866760952821356, 1);
  sqcRYGate(q, 2.5020201048366437, 2);
  sqcRZGate(q, 0.22171623089898043, 2);
  sqcRYGate(q, 0.25782644546003564, 3);
  sqcRZGate(q, -1.8606505382051695, 3);
  sqcRYGate(q, 0.05387594729637955, 4);
  sqcRZGate(q, 1.2360468127129183, 4);
  sqcRYGate(q, 2.908753477765868, 5);
  sqcRZGate(q, 2.064656003849536, 5);
  sqcRYGate(q, 3.0978012362202665, 6);
  sqcRZGate(q, 0.5031098953586843, 6);
  sqcRYGate(q, -0.9987150270394031, 7);
  sqcRZGate(q, 2.505935664231934, 7);
  sqcRYGate(q, 0.08332034457713056, 8);
  sqcRZGate(q, -1.4862301365671051, 8);
  sqcRYGate(q, 1.2736493093317138, 9);
  sqcRZGate(q, -2.2131587222838127, 9);
  sqcRYGate(q, 0.412061715257944, 10);
  sqcRZGate(q, 2.2139124601857607, 10);
  sqcRYGate(q, -1.576685720979836, 11);
  sqcRZGate(q, -0.08942126205590915, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.0724029085217763, 0);
  sqcRZGate(q, -0.06304638866996902, 0);
  sqcRYGate(q, 0.9060570940435092, 1);
  sqcRZGate(q, -1.1743415000686737, 1);
  sqcRYGate(q, 2.1832687190743485, 2);
  sqcRZGate(q, -1.973481150013478, 2);
  sqcRYGate(q, 0.2777206245676576, 3);
  sqcRZGate(q, 0.17049898852476805, 3);
  sqcRYGate(q, 3.038096790830094, 4);
  sqcRZGate(q, -1.839111949860986, 4);
  sqcRYGate(q, -3.1301163736030335, 5);
  sqcRZGate(q, 2.168782723717789, 5);
  sqcRYGate(q, 0.8758468088841703, 6);
  sqcRZGate(q, 0.5877828815927302, 6);
  sqcRYGate(q, -3.13738728492546, 7);
  sqcRZGate(q, 1.9803076976868976, 7);
  sqcRYGate(q, -0.5334954608563578, 8);
  sqcRZGate(q, -3.02056883256393, 8);
  sqcRYGate(q, -0.25195711661244863, 9);
  sqcRZGate(q, 2.8700155934995135, 9);
  sqcRYGate(q, 1.1800973798501975, 10);
  sqcRZGate(q, 1.9447220648579693, 10);
  sqcRYGate(q, 0.1424579878558845, 11);
  sqcRZGate(q, 1.2773183688420857, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.827634398433125, 0);
  sqcRZGate(q, -1.5298886930281466, 0);
  sqcRYGate(q, 0.19134615390976073, 1);
  sqcRZGate(q, 0.6212395747588813, 1);
  sqcRYGate(q, 1.2562460884179216, 2);
  sqcRZGate(q, 0.09687538155820086, 2);
  sqcRYGate(q, -2.8385673106665146, 3);
  sqcRZGate(q, 0.5955703302798359, 3);
  sqcRYGate(q, -1.3704631488531271, 4);
  sqcRZGate(q, -1.3803114243562842, 4);
  sqcRYGate(q, -0.027799106726644318, 5);
  sqcRZGate(q, -3.0860472521958573, 5);
  sqcRYGate(q, 0.1652539401159663, 6);
  sqcRZGate(q, -2.5294144825902967, 6);
  sqcRYGate(q, 0.5844356792898467, 7);
  sqcRZGate(q, 2.6600257041234574, 7);
  sqcRYGate(q, -0.1000080642356902, 8);
  sqcRZGate(q, -0.07182089594512464, 8);
  sqcRYGate(q, 0.5410103713105423, 9);
  sqcRZGate(q, 0.08124103091566656, 9);
  sqcRYGate(q, -2.2602442516435706, 10);
  sqcRZGate(q, -2.5162161399820597, 10);
  sqcRYGate(q, 3.109891118958699, 11);
  sqcRZGate(q, 0.4835382173143236, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.2986963398342721, 0);
  sqcRZGate(q, -0.8444069877535073, 0);
  sqcRYGate(q, -2.3300827297902793, 1);
  sqcRZGate(q, 2.5373895153476433, 1);
  sqcRYGate(q, -2.993426146163773, 2);
  sqcRZGate(q, 0.8680794794868474, 2);
  sqcRYGate(q, -2.1201069272123334, 3);
  sqcRZGate(q, 0.15309701855546243, 3);
  sqcRYGate(q, 0.004253232511632454, 4);
  sqcRZGate(q, 1.0526611412381288, 4);
  sqcRYGate(q, -3.0378141419435867, 5);
  sqcRZGate(q, 2.9678642983190473, 5);
  sqcRYGate(q, -0.0135872843016741, 6);
  sqcRZGate(q, 2.736186740490821, 6);
  sqcRYGate(q, 3.130182376936497, 7);
  sqcRZGate(q, -2.285992853940884, 7);
  sqcRYGate(q, -2.876711336202132, 8);
  sqcRZGate(q, 0.22326701084239797, 8);
  sqcRYGate(q, -2.889002873575296, 9);
  sqcRZGate(q, 0.6577689458429439, 9);
  sqcRYGate(q, -0.0034307026503217486, 10);
  sqcRZGate(q, 1.777318315088924, 10);
  sqcRYGate(q, 1.5118245276170648, 11);
  sqcRZGate(q, 2.782369064403418, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.790586985191218, 0);
  sqcRZGate(q, -0.7203435826292796, 0);
  sqcRYGate(q, 2.4624444778999677, 1);
  sqcRZGate(q, -2.403418711359163, 1);
  sqcRYGate(q, 3.0878237980512395, 2);
  sqcRZGate(q, 0.056290052616858155, 2);
  sqcRYGate(q, 0.6783311005986654, 3);
  sqcRZGate(q, -1.487907334033202, 3);
  sqcRYGate(q, 1.203005943105264, 4);
  sqcRZGate(q, -1.813093668594652, 4);
  sqcRYGate(q, 0.48802291801487835, 5);
  sqcRZGate(q, 3.0009918660230563, 5);
  sqcRYGate(q, -0.15488894067850298, 6);
  sqcRZGate(q, -1.9605126745592094, 6);
  sqcRYGate(q, -1.5399967268953696, 7);
  sqcRZGate(q, -2.1301318521371906, 7);
  sqcRYGate(q, -0.09644350587349315, 8);
  sqcRZGate(q, -1.5889605773527766, 8);
  sqcRYGate(q, 1.6286344059121327, 9);
  sqcRZGate(q, -1.120853980622053, 9);
  sqcRYGate(q, -0.3160390835511748, 10);
  sqcRZGate(q, -2.5697583307415033, 10);
  sqcRYGate(q, -0.8768587216192749, 11);
  sqcRZGate(q, 1.4196514173559975, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.902021471233135, 0);
  sqcRZGate(q, -0.4216701572352628, 0);
  sqcRYGate(q, -1.8192490494288842, 1);
  sqcRZGate(q, 1.1966622435442364, 1);
  sqcRYGate(q, -2.7485198798700248, 2);
  sqcRZGate(q, -2.2543518685178263, 2);
  sqcRYGate(q, -2.295869923422094, 3);
  sqcRZGate(q, -1.8698492468386627, 3);
  sqcRYGate(q, 0.04452079429576075, 4);
  sqcRZGate(q, 1.7985180249489372, 4);
  sqcRYGate(q, -0.005859957941617644, 5);
  sqcRZGate(q, 2.620581298420584, 5);
  sqcRYGate(q, -3.0891319671747834, 6);
  sqcRZGate(q, -0.7112255266194545, 6);
  sqcRYGate(q, -3.1414543617148594, 7);
  sqcRZGate(q, -0.047318507297216435, 7);
  sqcRYGate(q, 1.513649249684436, 8);
  sqcRZGate(q, -0.7237544970643432, 8);
  sqcRYGate(q, 1.387291970501484, 9);
  sqcRZGate(q, -0.04856566821503965, 9);
  sqcRYGate(q, 1.9763294354103285, 10);
  sqcRZGate(q, 0.7088041079830366, 10);
  sqcRYGate(q, -1.1389838119243205, 11);
  sqcRZGate(q, 2.6313240883620153, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.4729911925591548, 0);
  sqcRZGate(q, -0.6909250000961344, 0);
  sqcRYGate(q, -2.2152309347984547, 1);
  sqcRZGate(q, 1.8432278806838873, 1);
  sqcRYGate(q, 2.764939561453384, 2);
  sqcRZGate(q, 2.309246657120484, 2);
  sqcRYGate(q, -0.44784975647974884, 3);
  sqcRZGate(q, -1.0373213611763212, 3);
  sqcRYGate(q, 1.7455717203802343, 4);
  sqcRZGate(q, -2.0086039864758463, 4);
  sqcRYGate(q, -2.956970449679806, 5);
  sqcRZGate(q, 1.6497560550575987, 5);
  sqcRYGate(q, 0.030396847331211955, 6);
  sqcRZGate(q, -2.408845686678504, 6);
  sqcRYGate(q, -0.07315736331851053, 7);
  sqcRZGate(q, 2.582296245759651, 7);
  sqcRYGate(q, 0.07806787396852205, 8);
  sqcRZGate(q, 0.02584935390963587, 8);
  sqcRYGate(q, -1.0691345558816536, 9);
  sqcRZGate(q, 3.080005164930009, 9);
  sqcRYGate(q, -1.1672493781899576, 10);
  sqcRZGate(q, 2.765026243360602, 10);
  sqcRYGate(q, 2.9235781993024523, 11);
  sqcRZGate(q, 2.226958457587744, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.8877175813035313, 0);
  sqcRZGate(q, -0.3281722385283653, 0);
  sqcRYGate(q, 2.879977750763347, 1);
  sqcRZGate(q, 1.819773467094432, 1);
  sqcRYGate(q, 1.4033437699823894, 2);
  sqcRZGate(q, 3.015002978260611, 2);
  sqcRYGate(q, 2.863853417465821, 3);
  sqcRZGate(q, 1.9640165205747737, 3);
  sqcRYGate(q, 0.0049586269170909915, 4);
  sqcRZGate(q, -1.3864945067899965, 4);
  sqcRYGate(q, 1.3138015659386777, 5);
  sqcRZGate(q, -0.230907868390247, 5);
  sqcRYGate(q, 0.1365400246984274, 6);
  sqcRZGate(q, 2.6361299587497378, 6);
  sqcRYGate(q, -2.411186616532082, 7);
  sqcRZGate(q, -0.9378820369339937, 7);
  sqcRYGate(q, 1.4327859427798544, 8);
  sqcRZGate(q, 1.9028609776264975, 8);
  sqcRYGate(q, 1.6751166634239656, 9);
  sqcRZGate(q, -1.8859119889700733, 9);
  sqcRYGate(q, 0.998414855526054, 10);
  sqcRZGate(q, -0.27340444585659307, 10);
  sqcRYGate(q, -2.2135746990754406, 11);
  sqcRZGate(q, -1.6520903010837238, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.4737866834354684, 0);
  sqcRZGate(q, 1.7704746775356197, 0);
  sqcRYGate(q, 2.059870066858161, 1);
  sqcRZGate(q, 2.2765388706448277, 1);
  sqcRYGate(q, -1.5123463854772599, 2);
  sqcRZGate(q, -1.4140241051797084, 2);
  sqcRYGate(q, 3.105102902999044, 3);
  sqcRZGate(q, 1.6070847442986878, 3);
  sqcRYGate(q, -0.03844408611147948, 4);
  sqcRZGate(q, 3.016794390617392, 4);
  sqcRYGate(q, -0.00012826371596473177, 5);
  sqcRZGate(q, -2.752136532462716, 5);
  sqcRYGate(q, 0.0005358886376880534, 6);
  sqcRZGate(q, 2.456333921072526, 6);
  sqcRYGate(q, 0.015593301290648459, 7);
  sqcRZGate(q, 0.9422459337101641, 7);
  sqcRYGate(q, -2.148981985256167, 8);
  sqcRZGate(q, 0.6880628034226489, 8);
  sqcRYGate(q, 0.4192988281743322, 9);
  sqcRZGate(q, -2.0159063133255914, 9);
  sqcRYGate(q, -1.0244159914378028, 10);
  sqcRZGate(q, 0.9484349659846795, 10);
  sqcRYGate(q, -0.927470083682584, 11);
  sqcRZGate(q, 0.058834022810248854, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.8291901922172666, 0);
  sqcRZGate(q, 1.047915243023069, 0);
  sqcRYGate(q, -2.661392491225774, 1);
  sqcRZGate(q, -0.1677490307702012, 1);
  sqcRYGate(q, 0.7697487758165593, 2);
  sqcRZGate(q, -0.27733579834438254, 2);
  sqcRYGate(q, 2.591986355827796, 3);
  sqcRZGate(q, -1.7647758482593654, 3);
  sqcRYGate(q, 3.1265958710224604, 4);
  sqcRZGate(q, -0.9875518662068253, 4);
  sqcRYGate(q, -1.1110286544805223, 5);
  sqcRZGate(q, -1.9773901758279095, 5);
  sqcRYGate(q, 3.138461855776698, 6);
  sqcRZGate(q, 1.3956032500602862, 6);
  sqcRYGate(q, -0.7309028899814294, 7);
  sqcRZGate(q, -1.3075242196849644, 7);
  sqcRYGate(q, -0.009558545712226696, 8);
  sqcRZGate(q, 3.053731166918704, 8);
  sqcRYGate(q, 2.5868788775970972, 9);
  sqcRZGate(q, 0.35858980392908996, 9);
  sqcRYGate(q, 0.8135091692097198, 10);
  sqcRZGate(q, 1.391250572750835, 10);
  sqcRYGate(q, -1.8280571933472824, 11);
  sqcRZGate(q, 0.47092405552817757, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.4661247690633565, 0);
  sqcRZGate(q, -1.3346885824420558, 0);
  sqcRYGate(q, 1.432196342622131, 1);
  sqcRZGate(q, -1.599232493175009, 1);
  sqcRYGate(q, -1.4933676717602182, 2);
  sqcRZGate(q, -2.7383504448726317, 2);
  sqcRYGate(q, 0.41854957338493115, 3);
  sqcRZGate(q, 3.06450694150688, 3);
  sqcRYGate(q, 0.18988849075891248, 4);
  sqcRZGate(q, -0.23465881374888312, 4);
  sqcRYGate(q, 2.9283981721822827, 5);
  sqcRZGate(q, 3.0281972121938576, 5);
  sqcRYGate(q, -2.8410553741880125, 6);
  sqcRZGate(q, -2.044590426880627, 6);
  sqcRYGate(q, -1.3965996376856635, 7);
  sqcRZGate(q, 1.6589798037241508, 7);
  sqcRYGate(q, 1.700743732665143, 8);
  sqcRZGate(q, 2.9902832887849855, 8);
  sqcRYGate(q, 0.18355408720034738, 9);
  sqcRZGate(q, -0.6240355354625918, 9);
  sqcRYGate(q, -0.38365860958897263, 10);
  sqcRZGate(q, 1.9255150599572821, 10);
  sqcRYGate(q, -2.6943141883963917, 11);
  sqcRZGate(q, 0.0213152787919002, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.5128081622493834, 0);
  sqcRZGate(q, -2.6028916536336224, 0);
  sqcRYGate(q, 1.2071949094427887, 1);
  sqcRZGate(q, -2.1901312075197183, 1);
  sqcRYGate(q, 0.3088630378103397, 2);
  sqcRZGate(q, 1.3559260013897556, 2);
  sqcRYGate(q, 1.4842213329066167, 3);
  sqcRZGate(q, -0.4452958351717964, 3);
  sqcRYGate(q, 3.124160174900056, 4);
  sqcRZGate(q, 1.9938308471455126, 4);
  sqcRYGate(q, 0.07429863399206393, 5);
  sqcRZGate(q, 0.15772293578778593, 5);
  sqcRYGate(q, -0.030362158711995768, 6);
  sqcRZGate(q, -1.9677986154986522, 6);
  sqcRYGate(q, 3.136402441110012, 7);
  sqcRZGate(q, 1.5852197296861446, 7);
  sqcRYGate(q, -0.01761745059087172, 8);
  sqcRZGate(q, -2.303879704564805, 8);
  sqcRYGate(q, -0.5034531337489696, 9);
  sqcRZGate(q, -0.6592704821882575, 9);
  sqcRYGate(q, -1.142567477950104, 10);
  sqcRZGate(q, 2.947959527246761, 10);
  sqcRYGate(q, 1.9485279644539215, 11);
  sqcRZGate(q, -2.394077000347047, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.7261913441105359, 0);
  sqcRZGate(q, 0.35142634103938786, 0);
  sqcRYGate(q, -1.993928262061397, 1);
  sqcRZGate(q, 2.88732341828344, 1);
  sqcRYGate(q, 1.402029064498488, 2);
  sqcRZGate(q, 3.05951551294395, 2);
  sqcRYGate(q, 0.031565189347459034, 3);
  sqcRZGate(q, 1.8049625193272087, 3);
  sqcRYGate(q, -0.6812522674775424, 4);
  sqcRZGate(q, 2.997649186107589, 4);
  sqcRYGate(q, -0.8458641608029938, 5);
  sqcRZGate(q, -1.1972708154586602, 5);
  sqcRYGate(q, 2.4838510585635967, 6);
  sqcRZGate(q, 0.004434500326770917, 6);
  sqcRYGate(q, 1.9143917521799168, 7);
  sqcRZGate(q, 0.5488678138935388, 7);
  sqcRYGate(q, -2.8416987529758755, 8);
  sqcRZGate(q, -0.7680404369272683, 8);
  sqcRYGate(q, 0.8551368796010257, 9);
  sqcRZGate(q, 0.29880716195291884, 9);
  sqcRYGate(q, -0.10469637389960813, 10);
  sqcRZGate(q, -2.6207632978960267, 10);
  sqcRYGate(q, -1.5530542320763938, 11);
  sqcRZGate(q, 0.11947586979115085, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.5137751952968417, 0);
  sqcRZGate(q, -0.16694906086538422, 0);
  sqcRYGate(q, 0.3149951919868533, 1);
  sqcRZGate(q, -0.9691980108687076, 1);
  sqcRYGate(q, 2.0632240532546233, 2);
  sqcRZGate(q, 2.324959208813638, 2);
  sqcRYGate(q, -0.07757236658641363, 3);
  sqcRZGate(q, -0.9799816057478762, 3);
  sqcRYGate(q, 3.119962940999122, 4);
  sqcRZGate(q, 2.6691526706470152, 4);
  sqcRYGate(q, 0.0009922411196612302, 5);
  sqcRZGate(q, 1.4083549606746708, 5);
  sqcRYGate(q, 3.1384606472092687, 6);
  sqcRZGate(q, 0.23733212433146547, 6);
  sqcRYGate(q, 0.0006131972136644848, 7);
  sqcRZGate(q, -1.7840367815782472, 7);
  sqcRYGate(q, -3.107435803658749, 8);
  sqcRZGate(q, -2.427886416876956, 8);
  sqcRYGate(q, -1.784719540263196, 9);
  sqcRZGate(q, -2.145358583488408, 9);
  sqcRYGate(q, -1.4866691549253552, 10);
  sqcRZGate(q, -0.024273347830782832, 10);
  sqcRYGate(q, -1.5409282199787275, 11);
  sqcRZGate(q, -0.6421729312230383, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.9376140263352, 0);
  sqcRZGate(q, -0.617871838081796, 0);
  sqcRYGate(q, -2.281213360272513, 1);
  sqcRZGate(q, 1.9925669742390733, 1);
  sqcRYGate(q, -2.8070385144345416, 2);
  sqcRZGate(q, -0.8447171126453153, 2);
  sqcRYGate(q, -0.14049966925664936, 3);
  sqcRZGate(q, -2.985954746305763, 3);
  sqcRYGate(q, -0.5354524546586328, 4);
  sqcRZGate(q, 1.5318628978263398, 4);
  sqcRYGate(q, -1.1009490715231725, 5);
  sqcRZGate(q, -0.040612320124225144, 5);
  sqcRYGate(q, 0.5227678269081251, 6);
  sqcRZGate(q, 1.7727069478749211, 6);
  sqcRYGate(q, -0.16849813827872492, 7);
  sqcRZGate(q, 1.2309990583412798, 7);
  sqcRYGate(q, 2.908424355288274, 8);
  sqcRZGate(q, 2.2708875127903525, 8);
  sqcRYGate(q, 3.0596149253133387, 9);
  sqcRZGate(q, 1.0043680513794646, 9);
  sqcRYGate(q, 1.7838619809780647, 10);
  sqcRZGate(q, 3.092524742563674, 10);
  sqcRYGate(q, -3.077847765978014, 11);
  sqcRZGate(q, 1.2886264961511724, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.8674996356708649, 0);
  sqcRZGate(q, -0.23919609893063667, 0);
  sqcRYGate(q, -1.9042873564882843, 1);
  sqcRZGate(q, -0.2738023713315414, 1);
  sqcRYGate(q, 0.597512108653675, 2);
  sqcRZGate(q, 1.6133941472823354, 2);
  sqcRYGate(q, 0.09430922399640362, 3);
  sqcRZGate(q, 2.6444070567872697, 3);
  sqcRYGate(q, -3.1087272359299147, 4);
  sqcRZGate(q, -0.16166790683470042, 4);
  sqcRYGate(q, -3.1311833980313155, 5);
  sqcRZGate(q, 2.490530880150792, 5);
  sqcRYGate(q, 0.0541489605664951, 6);
  sqcRZGate(q, 0.024867822690791463, 6);
  sqcRYGate(q, -3.141147061448188, 7);
  sqcRZGate(q, -1.5588936159066797, 7);
  sqcRYGate(q, 0.013571229983755373, 8);
  sqcRZGate(q, -2.098384141968878, 8);
  sqcRYGate(q, -1.7327699652878388, 9);
  sqcRZGate(q, -1.7055325243279558, 9);
  sqcRYGate(q, -1.4094301917900793, 10);
  sqcRZGate(q, -3.0562662174684387, 10);
  sqcRYGate(q, 1.5470840352571997, 11);
  sqcRZGate(q, -2.91487707848126, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.894341664486013, 0);
  sqcRZGate(q, -2.6371913044092583, 0);
  sqcRYGate(q, 3.0784841672088046, 1);
  sqcRZGate(q, -0.3437220108000467, 1);
  sqcRYGate(q, 2.6985925524873595, 2);
  sqcRZGate(q, 1.3135626703612913, 2);
  sqcRYGate(q, 1.7253456068030237, 3);
  sqcRZGate(q, -2.007812312795767, 3);
  sqcRYGate(q, 1.6720530809483576, 4);
  sqcRZGate(q, -0.9527326629887044, 4);
  sqcRYGate(q, -0.2517676723131501, 5);
  sqcRZGate(q, 1.7962762270024157, 5);
  sqcRYGate(q, -1.5983058872050275, 6);
  sqcRZGate(q, -0.7985431381120768, 6);
  sqcRYGate(q, 1.6347662042260365, 7);
  sqcRZGate(q, 0.12693535446559331, 7);
  sqcRYGate(q, 1.5241232715984854, 8);
  sqcRZGate(q, 0.1402986738282186, 8);
  sqcRYGate(q, -2.907682452911521, 9);
  sqcRZGate(q, -1.5584213088250183, 9);
  sqcRYGate(q, -1.4042311089285902, 10);
  sqcRZGate(q, -0.10935468832773215, 10);
  sqcRYGate(q, 3.0540445876830176, 11);
  sqcRZGate(q, -1.3192759540534968, 11);

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
