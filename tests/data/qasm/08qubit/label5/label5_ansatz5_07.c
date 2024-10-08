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

  sqcRYGate(q, 0.0654085088284031, 0);
  sqcRYGate(q, 1.5283149571017514, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8763081390148835, 0);
  sqcRYGate(q, 3.0535133695782166, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.902016306862565, 2);
  sqcRYGate(q, -0.8446656682830609, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8366045652360813, 2);
  sqcRYGate(q, -1.0621862328210208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4758339673623877, 4);
  sqcRYGate(q, 0.6343972823481001, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.85712949586918, 4);
  sqcRYGate(q, -2.0154255944348938, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.294728098853362, 6);
  sqcRYGate(q, -3.100851020399166, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3431186341750454, 6);
  sqcRYGate(q, -2.786252934232032, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5948743216684775, 1);
  sqcRYGate(q, 1.0903317406437742, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.510741346865476, 1);
  sqcRYGate(q, -0.5027420933476767, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4068007056924623, 3);
  sqcRYGate(q, 2.18345785847443, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0267452092909406, 3);
  sqcRYGate(q, -1.612071424524856, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.249408275795587, 5);
  sqcRYGate(q, -0.4100013234551176, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6971295135035547, 5);
  sqcRYGate(q, 1.0603684529074848, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7753300987592047, 0);
  sqcRYGate(q, -2.7036204688101244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5112344098145605, 0);
  sqcRYGate(q, 2.233867889326281, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6980200873747173, 2);
  sqcRYGate(q, 1.7262813342353283, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5379461180571172, 2);
  sqcRYGate(q, -1.1077187212990633, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1436969708540399, 4);
  sqcRYGate(q, 0.27451188775179863, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3921536145244007, 4);
  sqcRYGate(q, -1.5857710365828157, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.198802717026887, 6);
  sqcRYGate(q, -1.1431274562827634, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.006686951326726, 6);
  sqcRYGate(q, 2.3748949813184064, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4172837353133368, 1);
  sqcRYGate(q, -0.27701355318051823, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9104952857382895, 1);
  sqcRYGate(q, -1.5669814408584628, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.24531916641597998, 3);
  sqcRYGate(q, 1.3220649599667933, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6946566631224518, 3);
  sqcRYGate(q, -1.8652555333675627, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5668068551999736, 5);
  sqcRYGate(q, -2.804937633853999, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6733929957752363, 5);
  sqcRYGate(q, -2.0418291771994364, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4033681482922882, 0);
  sqcRYGate(q, -0.5241968655837752, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.475613113628185, 0);
  sqcRYGate(q, -1.5533354248280993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4025185659505246, 2);
  sqcRYGate(q, 1.2519172680682322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.37677124094714, 2);
  sqcRYGate(q, -0.9962385276978827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7529688416651434, 4);
  sqcRYGate(q, 2.2245577771538234, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2661598208488787, 4);
  sqcRYGate(q, 2.5067925560587274, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9042663723728372, 6);
  sqcRYGate(q, -0.8423245278602325, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.730259712779973, 6);
  sqcRYGate(q, -1.545327613815302, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.805947642448241, 1);
  sqcRYGate(q, -3.0866017249071986, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2942671748271928, 1);
  sqcRYGate(q, 0.7095337284186458, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.14234126974932115, 3);
  sqcRYGate(q, -0.7736899212533306, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.12922396263056, 3);
  sqcRYGate(q, 0.38827182708945934, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5362621838084918, 5);
  sqcRYGate(q, -2.746221807570222, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3931772052536564, 5);
  sqcRYGate(q, -1.3338050268018822, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5809916056653885, 0);
  sqcRYGate(q, 1.2153342579955537, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09213457121764944, 0);
  sqcRYGate(q, -2.5031397961296715, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.078490641228905, 2);
  sqcRYGate(q, -1.6550473644027752, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3035120032175738, 2);
  sqcRYGate(q, 0.9631034799042217, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8320366095460399, 4);
  sqcRYGate(q, 1.2357931789047443, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6845710815378454, 4);
  sqcRYGate(q, -0.9322364232310197, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4986983445965125, 6);
  sqcRYGate(q, -0.7253328781135338, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.017555492313999, 6);
  sqcRYGate(q, -2.1917468662706012, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.08003478540960884, 1);
  sqcRYGate(q, -1.4186283104761062, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5966872907011574, 1);
  sqcRYGate(q, 2.209262912132785, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9837860669353224, 3);
  sqcRYGate(q, -1.081532427571175, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7580871139881253, 3);
  sqcRYGate(q, 0.8793065763096064, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3492922672683636, 5);
  sqcRYGate(q, -1.8839847105856595, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2162005879285163, 5);
  sqcRYGate(q, 1.5304349684124017, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6897601664625745, 0);
  sqcRYGate(q, -0.5039317296880551, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9775305998145768, 0);
  sqcRYGate(q, -2.11412834737512, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0696602719920616, 2);
  sqcRYGate(q, -2.0365658379771814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8072197147132503, 2);
  sqcRYGate(q, -1.0541566522197203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.09829695454226961, 4);
  sqcRYGate(q, -1.001900940551156, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5247025508137684, 4);
  sqcRYGate(q, -0.9996169319897678, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9267178963145546, 6);
  sqcRYGate(q, 1.0183674638054296, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.383691363976586, 6);
  sqcRYGate(q, 0.02795466531119733, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5982041053247583, 1);
  sqcRYGate(q, 2.4166685098779555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2313330907391906, 1);
  sqcRYGate(q, -0.6939812931894203, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5275544342174739, 3);
  sqcRYGate(q, 1.0366990256316617, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.441163911296329, 3);
  sqcRYGate(q, -2.03977758737644, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4107775593395786, 5);
  sqcRYGate(q, 0.7212838064039971, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.421971654159639, 5);
  sqcRYGate(q, -0.38758912780552723, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.974207813868342, 0);
  sqcRYGate(q, 0.7188863296219165, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1292330284575745, 0);
  sqcRYGate(q, 2.2627637896328485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.500567542661725, 2);
  sqcRYGate(q, -1.979023244045611, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4970482405159484, 2);
  sqcRYGate(q, -0.13027849998869634, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.30117310721359286, 4);
  sqcRYGate(q, -1.0728202958953545, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4934816570442546, 4);
  sqcRYGate(q, -2.458141268857361, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6017970629549643, 6);
  sqcRYGate(q, 0.03373000606792894, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.476981536864135, 6);
  sqcRYGate(q, 1.0853097008753672, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.315571575806934, 1);
  sqcRYGate(q, -1.9579027676848433, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4985939316518024, 1);
  sqcRYGate(q, 1.721759512873276, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9043628816287453, 3);
  sqcRYGate(q, 0.09517035014973807, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.271819937254857, 3);
  sqcRYGate(q, -1.8666903279588272, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.03202035496654847, 5);
  sqcRYGate(q, 0.3795652236664397, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8021668877939917, 5);
  sqcRYGate(q, 2.229995237089492, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.07047176883235115, 0);
  sqcRYGate(q, -1.983430976139885, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.452098020592869, 0);
  sqcRYGate(q, 1.587948340927035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0884494212145615, 2);
  sqcRYGate(q, 2.1092081148717456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.687330976853548, 2);
  sqcRYGate(q, -2.4899011533562443, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7212785133047492, 4);
  sqcRYGate(q, -2.299712406224985, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6024193361667063, 4);
  sqcRYGate(q, -0.11360841658132158, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2973711817184936, 6);
  sqcRYGate(q, -1.439965449991097, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4021627948948252, 6);
  sqcRYGate(q, -1.768074469044801, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6694205566516764, 1);
  sqcRYGate(q, -2.70562616567536, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.843472238768539, 1);
  sqcRYGate(q, -1.4019560228440735, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.726638397607009, 3);
  sqcRYGate(q, -2.2282588112731396, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0539497453290032, 3);
  sqcRYGate(q, -0.05738069152505165, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.2765118335575544, 5);
  sqcRYGate(q, 3.0075997392843212, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.15020218018392031, 5);
  sqcRYGate(q, -1.2264763889438628, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5215571412908653, 0);
  sqcRYGate(q, -0.743924969487661, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9445079603164261, 0);
  sqcRYGate(q, -2.4922840786177605, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.33139461770005746, 2);
  sqcRYGate(q, 0.9742847004670638, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.457017910877641, 2);
  sqcRYGate(q, -2.2901400548276585, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9729876199061902, 4);
  sqcRYGate(q, 2.342706768357001, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.33550912971014935, 4);
  sqcRYGate(q, -0.7918475696532292, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2231415753780945, 6);
  sqcRYGate(q, 1.870115078243896, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0078132912064728, 6);
  sqcRYGate(q, -1.706850045052742, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.07632038747766856, 1);
  sqcRYGate(q, -1.5352353375357533, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7918615754186904, 1);
  sqcRYGate(q, -1.659309245108492, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8574739992008178, 3);
  sqcRYGate(q, -1.5354727240514907, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1150529459204255, 3);
  sqcRYGate(q, -0.3678518811607967, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4607359816054108, 5);
  sqcRYGate(q, -2.161612548156948, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0919269425037958, 5);
  sqcRYGate(q, 2.8310133269489244, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5742245860090468, 0);
  sqcRYGate(q, 3.043608766729209, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.079519987126602, 0);
  sqcRYGate(q, 1.3163654836094585, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.48342469394413, 2);
  sqcRYGate(q, 1.9139006045805464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5569928580717995, 2);
  sqcRYGate(q, -1.2482105640436798, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.952389977828709, 4);
  sqcRYGate(q, 2.562334500905687, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9949407475833583, 4);
  sqcRYGate(q, -3.0141974264805556, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.44580262726728426, 6);
  sqcRYGate(q, -1.3990851706278296, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2166083097662344, 6);
  sqcRYGate(q, 1.1642149852135333, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6043405160014497, 1);
  sqcRYGate(q, 2.688770904610219, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7788071261961117, 1);
  sqcRYGate(q, -2.194046682633175, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6299565170386812, 3);
  sqcRYGate(q, 2.9503163488052695, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2695845462741318, 3);
  sqcRYGate(q, 0.8569002035104214, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.24141915313395315, 5);
  sqcRYGate(q, 2.534932854606337, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1156824477758074, 5);
  sqcRYGate(q, 2.0627630629712224, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1848063417282093, 0);
  sqcRYGate(q, 1.5936743736388899, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7280773655115986, 0);
  sqcRYGate(q, -2.083946276720498, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7227554711600095, 2);
  sqcRYGate(q, -2.9262009897413748, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4342181191325105, 2);
  sqcRYGate(q, 3.098851607602221, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6973331691297721, 4);
  sqcRYGate(q, -0.876864357830474, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0452039838581806, 4);
  sqcRYGate(q, -0.024042731397905474, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8029356968609607, 6);
  sqcRYGate(q, 0.265655221189428, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1094234161070426, 6);
  sqcRYGate(q, 2.7955309477484422, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6750409154015036, 1);
  sqcRYGate(q, -1.1647736716737098, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8611546216115813, 1);
  sqcRYGate(q, -1.0776520815402904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5758556609322403, 3);
  sqcRYGate(q, 0.9582373819813643, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2504942476853138, 3);
  sqcRYGate(q, 0.8126270680824739, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0963894525876943, 5);
  sqcRYGate(q, -1.6459781828247477, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0289935200094265, 5);
  sqcRYGate(q, -2.67876221746466, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3921988832122216, 0);
  sqcRYGate(q, -0.6273666298191944, 1);
  sqcRYGate(q, 2.4906521592812223, 2);
  sqcRYGate(q, -0.08457044266211522, 3);
  sqcRYGate(q, -2.8876222772695344, 4);
  sqcRYGate(q, -2.289409535233175, 5);
  sqcRYGate(q, 1.5730007302298432, 6);
  sqcRYGate(q, -2.9457816194967053, 7);

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
