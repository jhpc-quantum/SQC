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

  sqcRYGate(q, 0.03763562252823811, 0);
  sqcRYGate(q, -2.3037219702425515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.210396009198537, 0);
  sqcRYGate(q, 0.3791704509795988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8733454178349562, 1);
  sqcRYGate(q, 1.898087700295131, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.027287020880226, 1);
  sqcRYGate(q, -1.5085238087980555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6020885961355869, 2);
  sqcRYGate(q, -1.1131966165296896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9789420334603292, 2);
  sqcRYGate(q, 2.2904759516850834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9643540362549186, 3);
  sqcRYGate(q, -3.133841834011767, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9533542106373982, 3);
  sqcRYGate(q, -0.5055770340873506, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5377068297381764, 4);
  sqcRYGate(q, 0.5917861337780916, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8482747267031947, 4);
  sqcRYGate(q, 0.5569039472509892, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7778646502637372, 5);
  sqcRYGate(q, -1.4263308216514226, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.921018433469622, 5);
  sqcRYGate(q, -3.0208285757592677, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6142269797024303, 6);
  sqcRYGate(q, 2.92061395736039, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0374708285796028, 6);
  sqcRYGate(q, -1.5985967972418786, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.03369429717042483, 0);
  sqcRYGate(q, 1.1349990064463382, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2235193339709696, 0);
  sqcRYGate(q, -0.7556172649037318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.437718343802176, 1);
  sqcRYGate(q, 0.9378351859054748, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6885793496367505, 1);
  sqcRYGate(q, -0.5391934818542756, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8656875333107639, 2);
  sqcRYGate(q, 0.09132389568451148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.639244357838163, 2);
  sqcRYGate(q, -0.6770974623996133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2830540313586556, 3);
  sqcRYGate(q, -1.3940221979502354, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4547696619094168, 3);
  sqcRYGate(q, 1.6442422723064005, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5307782896357287, 4);
  sqcRYGate(q, 0.6455867011594342, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.36929619958718, 4);
  sqcRYGate(q, 0.4005221490336754, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8822710127864863, 5);
  sqcRYGate(q, -1.5813175972406945, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8796795854008709, 5);
  sqcRYGate(q, -2.205693372291871, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.18077384012886, 6);
  sqcRYGate(q, 0.018891627236988562, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.37966004010079, 6);
  sqcRYGate(q, -1.8712887330331558, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.791942653610007, 0);
  sqcRYGate(q, -2.2570275078160016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.28301077076120773, 0);
  sqcRYGate(q, -2.4167116979313077, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1767023409504986, 1);
  sqcRYGate(q, 2.688222737042689, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.17490837320605193, 1);
  sqcRYGate(q, -2.1264147462470837, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7943028468905315, 2);
  sqcRYGate(q, 1.6256064197175704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.100630331944049, 2);
  sqcRYGate(q, 0.5381219343544288, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.40298776175888346, 3);
  sqcRYGate(q, -1.3376578511312658, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5701430413453128, 3);
  sqcRYGate(q, -0.16599355813835465, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7077536675988718, 4);
  sqcRYGate(q, -2.951123393957146, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9371436517602705, 4);
  sqcRYGate(q, -1.9101191632874248, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5058264947393312, 5);
  sqcRYGate(q, -0.9775374206469928, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.241037528195407, 5);
  sqcRYGate(q, 0.34376872169124884, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2120155698172717, 6);
  sqcRYGate(q, 2.5524357020689306, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8353546055574164, 6);
  sqcRYGate(q, 0.580474664466124, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.44258621997343, 0);
  sqcRYGate(q, -1.7599240941458136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7962951921432653, 0);
  sqcRYGate(q, -2.6293568590102563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.322665657610033, 1);
  sqcRYGate(q, 1.1286117616705544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.776750533714048, 1);
  sqcRYGate(q, -0.9155922744151423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.402464337718564, 2);
  sqcRYGate(q, -1.2531806119100541, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0251307358771644, 2);
  sqcRYGate(q, 2.513365935376964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.48623641933303563, 3);
  sqcRYGate(q, 0.2749874518321522, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0859390819339128, 3);
  sqcRYGate(q, -3.0420381255972733, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0570436116123827, 4);
  sqcRYGate(q, 2.3214487264928145, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8407711210128896, 4);
  sqcRYGate(q, -1.1908482476592122, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.021827773688239, 5);
  sqcRYGate(q, -2.4441270290973836, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7936063672170572, 5);
  sqcRYGate(q, 0.17930296258555467, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.458145683561973, 6);
  sqcRYGate(q, 2.8970478466080944, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9277464894533678, 6);
  sqcRYGate(q, 2.875895155641354, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5453554055724492, 0);
  sqcRYGate(q, -1.4102342484110926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.019156998772539957, 0);
  sqcRYGate(q, -0.6515171615249453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2924159653045812, 1);
  sqcRYGate(q, -1.6977297017002835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6749862397179698, 1);
  sqcRYGate(q, 1.1223390189544407, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05946429891995511, 2);
  sqcRYGate(q, 2.47231662108327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.795816451308915, 2);
  sqcRYGate(q, -2.393597834260272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0733229308917847, 3);
  sqcRYGate(q, -2.7567600808569437, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.73712021349705, 3);
  sqcRYGate(q, 0.9589348426635684, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.070484091635402, 4);
  sqcRYGate(q, 1.9561779296606172, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.908709277851835, 4);
  sqcRYGate(q, -1.1290088620664167, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.053462309765834534, 5);
  sqcRYGate(q, 2.0472607583794122, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.05746870306356211, 5);
  sqcRYGate(q, -3.070821577383972, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5906654667006821, 6);
  sqcRYGate(q, -2.4383248991129984, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8413641649463577, 6);
  sqcRYGate(q, -2.300285275855804, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7624507251263646, 0);
  sqcRYGate(q, 1.2994448507306773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9070760318719836, 0);
  sqcRYGate(q, -0.6217527390780004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5415183770681393, 1);
  sqcRYGate(q, -1.280835976092196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.129764920862515, 1);
  sqcRYGate(q, -1.6486956663071621, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3423764674758223, 2);
  sqcRYGate(q, 0.42229809402091334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9549691282556818, 2);
  sqcRYGate(q, 0.00602078797356076, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6743356691335332, 3);
  sqcRYGate(q, -2.1092418291544575, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1923913811513143, 3);
  sqcRYGate(q, 1.3545925380791286, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6059967566790245, 4);
  sqcRYGate(q, 3.0048719726608404, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.362948891370837, 4);
  sqcRYGate(q, 2.986992876577609, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2145375311510747, 5);
  sqcRYGate(q, -0.09865340822252797, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1824126312267262, 5);
  sqcRYGate(q, -2.8316367681139183, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.323824549479433, 6);
  sqcRYGate(q, -2.4621746188408946, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5176812523927842, 6);
  sqcRYGate(q, -1.3613105533511, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8290919709996043, 0);
  sqcRYGate(q, 2.435322982972115, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7034611032567762, 0);
  sqcRYGate(q, -0.36238395317417904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5096875499117699, 1);
  sqcRYGate(q, 2.879612180591663, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3555560944822649, 1);
  sqcRYGate(q, -2.263711998482162, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.22674293340442192, 2);
  sqcRYGate(q, -0.7672763701792668, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7753514788610074, 2);
  sqcRYGate(q, -1.4002035293413924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.078171630711017, 3);
  sqcRYGate(q, 1.8825134110239734, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.979029583762995, 3);
  sqcRYGate(q, -0.8473371151850798, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.727219068395193, 4);
  sqcRYGate(q, 1.308556334271766, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9647391527627793, 4);
  sqcRYGate(q, 0.5161274390566657, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2917186463842174, 5);
  sqcRYGate(q, -1.4498035916200946, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.604829542076618, 5);
  sqcRYGate(q, -1.2005919914241066, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2502388153740545, 6);
  sqcRYGate(q, -0.04775553662967269, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4657471503355675, 6);
  sqcRYGate(q, 3.05133067262802, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.447031856160157, 0);
  sqcRYGate(q, -3.107594297992771, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.34158722709662226, 0);
  sqcRYGate(q, -1.7476347920914712, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.955593188802241, 1);
  sqcRYGate(q, -2.306589529175231, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2607547702210224, 1);
  sqcRYGate(q, 0.581898768777928, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.202790228707869, 2);
  sqcRYGate(q, 1.5973971264308264, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.545457732452923, 2);
  sqcRYGate(q, -1.5158748216090618, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4520252303168964, 3);
  sqcRYGate(q, -1.9689678128044479, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0220672993508915, 3);
  sqcRYGate(q, 2.302158994871652, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7802606307676707, 4);
  sqcRYGate(q, 2.604687925037347, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4015818468454802, 4);
  sqcRYGate(q, 0.9958601843232389, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8991372035009872, 5);
  sqcRYGate(q, 1.5450232179203125, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2720693092340482, 5);
  sqcRYGate(q, 1.019268066847114, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5926031470581323, 6);
  sqcRYGate(q, -1.2009268339757933, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.956358686075359, 6);
  sqcRYGate(q, 0.3267323733706712, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8203430275405258, 0);
  sqcRYGate(q, 2.5218764891538736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.675261407432302, 0);
  sqcRYGate(q, -1.7030545844880276, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.081723890515573, 1);
  sqcRYGate(q, 1.5042446854003515, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4816760751997693, 1);
  sqcRYGate(q, 2.853592155043825, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.709297434434446, 2);
  sqcRYGate(q, -1.5259496117241316, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9053513320156856, 2);
  sqcRYGate(q, -1.1004114090154955, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.05917930815215211, 3);
  sqcRYGate(q, -2.9298816653041033, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4666310653618577, 3);
  sqcRYGate(q, -0.9271480924650188, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.545909904811361, 4);
  sqcRYGate(q, -2.6562453864167748, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.861404480797549, 4);
  sqcRYGate(q, -1.637899062182994, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.47094387500559876, 5);
  sqcRYGate(q, -1.598595535926341, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.24317054666188562, 5);
  sqcRYGate(q, 0.6237036515976753, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.017353982096464, 6);
  sqcRYGate(q, 1.4188195376630648, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.359424900647238, 6);
  sqcRYGate(q, -2.7485399264693067, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.693256637616147, 0);
  sqcRYGate(q, -0.2510194560253198, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.991003009506659, 0);
  sqcRYGate(q, 1.6680143052292216, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.003260748338047, 1);
  sqcRYGate(q, 1.806162238918391, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7847013053047558, 1);
  sqcRYGate(q, 0.678599346754229, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4078115567263199, 2);
  sqcRYGate(q, -2.488907228027716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.412613684115256, 2);
  sqcRYGate(q, -1.3898066884852267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9683279015549777, 3);
  sqcRYGate(q, -0.4127823837461166, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6857786434265907, 3);
  sqcRYGate(q, 1.7795335298030832, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5521244257669737, 4);
  sqcRYGate(q, -1.80324388697038, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4447675679285754, 4);
  sqcRYGate(q, 1.4747355556607664, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.054730065396371146, 5);
  sqcRYGate(q, 0.9052548097768272, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1406599882276476, 5);
  sqcRYGate(q, 2.3678234979842196, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.256588234808496, 6);
  sqcRYGate(q, -2.0343061502202313, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6588993675480874, 6);
  sqcRYGate(q, 0.05830643554076698, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2395849124528837, 0);
  sqcRYGate(q, -2.2605111823971753, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.454427912091301, 0);
  sqcRYGate(q, 1.4721311728889361, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8342787464613224, 1);
  sqcRYGate(q, 0.6650726393017328, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6212100219515264, 1);
  sqcRYGate(q, 2.7698177860894697, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8110023977215528, 2);
  sqcRYGate(q, -0.937632327121309, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9993131701337217, 2);
  sqcRYGate(q, 0.36335775951643523, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2465241279279873, 3);
  sqcRYGate(q, 0.43989495711435134, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2620559092048884, 3);
  sqcRYGate(q, 2.804036421655312, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0717697745735655, 4);
  sqcRYGate(q, 1.5849341634002272, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7884112248942765, 4);
  sqcRYGate(q, 1.0976619693200798, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8386515410873074, 5);
  sqcRYGate(q, -2.9826940084313147, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.657018898923311, 5);
  sqcRYGate(q, -0.7729436217352024, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.09525223986808, 6);
  sqcRYGate(q, -0.6610886772301674, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3375610914541025, 6);
  sqcRYGate(q, 0.6697660202000248, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3699492424153354, 0);
  sqcRYGate(q, -1.070382905383229, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.075149002667959, 0);
  sqcRYGate(q, 2.1794293762769668, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3170962269716955, 1);
  sqcRYGate(q, 1.9779495667289773, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2622902011227266, 1);
  sqcRYGate(q, 1.9458785166660484, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4730583245477895, 2);
  sqcRYGate(q, -2.344853056051429, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.073380098698391, 2);
  sqcRYGate(q, 1.608627611930551, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5426459524693512, 3);
  sqcRYGate(q, -2.4515856575290385, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3616217976815672, 3);
  sqcRYGate(q, 0.2678939691825075, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6705936227782043, 4);
  sqcRYGate(q, -1.3484315062121937, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0119070072345746, 4);
  sqcRYGate(q, 0.5087455173110713, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6989665678597128, 5);
  sqcRYGate(q, 0.30200946385298166, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9687732329030929, 5);
  sqcRYGate(q, -2.767871508628014, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7854395101145344, 6);
  sqcRYGate(q, -2.566898985568924, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5126962153318663, 6);
  sqcRYGate(q, 2.082968618310174, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8778855282425004, 0);
  sqcRYGate(q, 1.5078329202073337, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.05853493897833407, 0);
  sqcRYGate(q, -2.222234050187346, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.390658235287634, 1);
  sqcRYGate(q, -2.9408089233265535, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1187432725995023, 1);
  sqcRYGate(q, 1.8135280858954923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.01153057879923811, 2);
  sqcRYGate(q, -3.0124331013138366, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.023583115201036977, 2);
  sqcRYGate(q, -2.2354127987802626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.573140415150461, 3);
  sqcRYGate(q, 1.3989554549091334, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.670253476324487, 3);
  sqcRYGate(q, 0.2642859603782231, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.901938817354261, 4);
  sqcRYGate(q, -2.7678828070853814, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8025294568804644, 4);
  sqcRYGate(q, -3.0752250013735964, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.550002151565156, 5);
  sqcRYGate(q, -1.3764976390864296, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6439861541383047, 5);
  sqcRYGate(q, 1.9657181228053617, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9990129227130837, 6);
  sqcRYGate(q, 2.4255800104245164, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1906434854075598, 6);
  sqcRYGate(q, 2.169454975916038, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8901278871724916, 0);
  sqcRYGate(q, 2.04604497044648, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3389157300745511, 0);
  sqcRYGate(q, 1.2509632331262557, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7577562078833604, 1);
  sqcRYGate(q, 0.5701036940445849, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.11833203520358904, 1);
  sqcRYGate(q, -1.0297904412007304, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.658144726779152, 2);
  sqcRYGate(q, -0.5147200224950153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.10232950295538, 2);
  sqcRYGate(q, 0.742224150910927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2635473961693932, 3);
  sqcRYGate(q, 3.1413047414421515, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5103571649210563, 3);
  sqcRYGate(q, 0.4747965133449261, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.526095193084934, 4);
  sqcRYGate(q, -0.46011247943340994, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7581457952253038, 4);
  sqcRYGate(q, 2.2544349536978245, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8941693628618511, 5);
  sqcRYGate(q, -0.47931206465708165, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5836671757720941, 5);
  sqcRYGate(q, -1.2713109454023275, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.20712032693405913, 6);
  sqcRYGate(q, -1.4650908546181196, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.317026632868997, 6);
  sqcRYGate(q, -1.557148911885599, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.614150979895967, 0);
  sqcRYGate(q, -1.4647693703962252, 1);
  sqcRYGate(q, 1.3615322333037456, 2);
  sqcRYGate(q, -1.3325501795594616, 3);
  sqcRYGate(q, -1.9282655817937622, 4);
  sqcRYGate(q, 3.0291462110124603, 5);
  sqcRYGate(q, -2.8188675960746634, 6);
  sqcRYGate(q, 1.9938457404853156, 7);

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
