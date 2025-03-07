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

  sqcRYGate(q, 1.5431268162769645, 0);
  sqcRYGate(q, 3.090048770833865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.545089930491357, 0);
  sqcRYGate(q, -0.43020859196198735, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6678266715047974, 0);
  sqcRYGate(q, 0.4438676218682856, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6941305402371647, 0);
  sqcRYGate(q, -1.7815800581215058, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9078192752732552, 0);
  sqcRYGate(q, -0.7499227065637287, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9018975260346628, 0);
  sqcRYGate(q, 2.258280143249869, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6754492773233656, 1);
  sqcRYGate(q, 1.1356811938031164, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6266546841574048, 1);
  sqcRYGate(q, -0.05059687634000731, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.204008146118364, 1);
  sqcRYGate(q, -1.1266319441087287, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8040197160514344, 1);
  sqcRYGate(q, 3.0921447170900103, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8428082416907214, 2);
  sqcRYGate(q, -1.9374796056651196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6380024344326828, 2);
  sqcRYGate(q, 0.23157372760056807, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5829800256899196, 0);
  sqcRYGate(q, -0.038024046027662635, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.313657076260906, 0);
  sqcRYGate(q, -0.9160164148001658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.22782788404124688, 0);
  sqcRYGate(q, -1.952298802005516, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.054226546533285756, 0);
  sqcRYGate(q, -1.706736270991135, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.853179487280582, 0);
  sqcRYGate(q, 2.404546322891263, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.970539046687696, 0);
  sqcRYGate(q, -3.139844367886653, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.837712490320226, 1);
  sqcRYGate(q, -1.3317803875235006, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7542578815044756, 1);
  sqcRYGate(q, 1.7717650603285158, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1654013778586683, 1);
  sqcRYGate(q, -1.3252771770970164, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1119784097538066, 1);
  sqcRYGate(q, 1.0266893916221527, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0219694254414249, 2);
  sqcRYGate(q, 0.9032780594403587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0384231406882032, 2);
  sqcRYGate(q, 1.024177837122906, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.371068383573745, 0);
  sqcRYGate(q, 2.3499627183016623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4564635308485285, 0);
  sqcRYGate(q, 0.7051582276307817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5162272875434323, 0);
  sqcRYGate(q, 2.5414993053357144, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1356288620828467, 0);
  sqcRYGate(q, 0.22092968972549087, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0604917059254209, 0);
  sqcRYGate(q, -0.40118092413111306, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4424718861360937, 0);
  sqcRYGate(q, -1.9807246748327743, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.1809083466541007, 1);
  sqcRYGate(q, 3.08098348802498, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6328356073194019, 1);
  sqcRYGate(q, -2.351151351411238, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.203595770341068, 1);
  sqcRYGate(q, -1.6588353757901073, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5096852228543582, 1);
  sqcRYGate(q, 0.8592377747694038, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3049058525438713, 2);
  sqcRYGate(q, 0.1346281033493648, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.39380771637086187, 2);
  sqcRYGate(q, -0.7606462109119834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.283296667435288, 0);
  sqcRYGate(q, 0.9188361371746989, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5683727651537862, 0);
  sqcRYGate(q, 0.9484521191679978, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4130565879512662, 0);
  sqcRYGate(q, 0.16976118646933624, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5657412873695549, 0);
  sqcRYGate(q, -0.1192268528029965, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.02140604964678613, 0);
  sqcRYGate(q, -1.4874748619212939, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1538050036234893, 0);
  sqcRYGate(q, 0.15953724167518138, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8441178980879647, 1);
  sqcRYGate(q, 1.825022147589321, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5502799528154484, 1);
  sqcRYGate(q, -1.7342391671859578, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3337791840442064, 1);
  sqcRYGate(q, 2.2687979542280514, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3096394773160283, 1);
  sqcRYGate(q, -3.0572936359382457, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5584694529182244, 2);
  sqcRYGate(q, -0.8335300395890375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1925825107847885, 2);
  sqcRYGate(q, -1.7169995701823701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0993632205440376, 0);
  sqcRYGate(q, -2.2995828942386, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4167866015970603, 0);
  sqcRYGate(q, 2.011020796220941, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8104907163135318, 0);
  sqcRYGate(q, 1.2966742745508535, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0636016656535454, 0);
  sqcRYGate(q, 1.6710926631018999, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3277676788455195, 0);
  sqcRYGate(q, 1.3990037566323847, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3380618434083702, 0);
  sqcRYGate(q, 1.5038545921468847, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6106433266131905, 1);
  sqcRYGate(q, -1.8269557869750133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.432692180597417, 1);
  sqcRYGate(q, -2.716886538365595, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2110829801832179, 1);
  sqcRYGate(q, -2.0215023066164317, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3616344146421184, 1);
  sqcRYGate(q, 1.2380248733974772, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9101956919028362, 2);
  sqcRYGate(q, 2.3200560697002457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1788000789765045, 2);
  sqcRYGate(q, 0.6764848006293409, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0209881864195194, 0);
  sqcRYGate(q, 1.930357362331901, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4867233647907203, 0);
  sqcRYGate(q, 1.4154460818329522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8784457169531281, 0);
  sqcRYGate(q, 0.9418730268036475, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9942393396981903, 0);
  sqcRYGate(q, -0.39595756228691353, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.28025686338990674, 0);
  sqcRYGate(q, -2.1535430382818186, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6834159716303696, 0);
  sqcRYGate(q, 1.9603908663545724, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4713081571103634, 1);
  sqcRYGate(q, -0.6865610481919863, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9554002937690442, 1);
  sqcRYGate(q, -1.1483820942173555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2352464355582509, 1);
  sqcRYGate(q, -0.4895921766270614, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7107157901170433, 1);
  sqcRYGate(q, -1.2542075310645826, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5282600554083585, 2);
  sqcRYGate(q, 0.6402332430578853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.20602596854603472, 2);
  sqcRYGate(q, -0.3872157273467485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.124961900325923, 0);
  sqcRYGate(q, -2.5920963969944664, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1792649182350268, 0);
  sqcRYGate(q, -0.017635434471000785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6756718852168038, 0);
  sqcRYGate(q, -0.49717162384811386, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8836181951075286, 0);
  sqcRYGate(q, 2.220000449358741, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3884441665395124, 0);
  sqcRYGate(q, 0.21942429791495136, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3332694015440971, 0);
  sqcRYGate(q, 0.4910665278537767, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.775946116929695, 1);
  sqcRYGate(q, 2.291171669876946, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9893646221200423, 1);
  sqcRYGate(q, -1.8670816749228207, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0969863241618025, 1);
  sqcRYGate(q, -0.4151086508173796, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2260190936571063, 1);
  sqcRYGate(q, -1.9102229051215396, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4100970819774483, 2);
  sqcRYGate(q, 2.2669736429267635, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7226361450394647, 2);
  sqcRYGate(q, -0.9068005630443848, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7724713199286583, 0);
  sqcRYGate(q, 1.5028195846477261, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7037099430064586, 0);
  sqcRYGate(q, 0.7075415663225293, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.57296493301274, 0);
  sqcRYGate(q, -2.9055493040364335, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4519349276198366, 0);
  sqcRYGate(q, 0.9901672890782649, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.179902227678717, 0);
  sqcRYGate(q, 2.6601929703439646, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.40608509768164475, 0);
  sqcRYGate(q, -0.5296677319484665, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5316455437010946, 1);
  sqcRYGate(q, 1.311395835056313, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4785409915928265, 1);
  sqcRYGate(q, -1.4287646828668272, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0520873548050869, 1);
  sqcRYGate(q, -0.4438201102971737, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0542795620550747, 1);
  sqcRYGate(q, -1.7421672794835252, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6558387034897115, 2);
  sqcRYGate(q, -2.6171719707491294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.288419832373481, 2);
  sqcRYGate(q, -1.432515751474987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.529342869882548, 0);
  sqcRYGate(q, 1.3239736315788755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3701085026690867, 0);
  sqcRYGate(q, 0.25557088298022695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4431534598345204, 0);
  sqcRYGate(q, -0.19096019533040293, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5580789533854056, 0);
  sqcRYGate(q, 2.2511467501340583, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.621800224466688, 0);
  sqcRYGate(q, 2.5269944428784696, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.08217201723951018, 0);
  sqcRYGate(q, -2.557938879288203, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.006428711516353038, 1);
  sqcRYGate(q, 0.4262931726117939, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5562373415343833, 1);
  sqcRYGate(q, 2.9748021009271963, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.741986789448851, 1);
  sqcRYGate(q, -2.772990869794841, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9218654227281278, 1);
  sqcRYGate(q, -2.5118581106915894, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.10127204095169429, 2);
  sqcRYGate(q, 2.7735921777821617, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2435237931117675, 2);
  sqcRYGate(q, -1.9500835957475653, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9041276703973571, 0);
  sqcRYGate(q, 1.9910476374562593, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1049145433627898, 0);
  sqcRYGate(q, 1.8699958405826127, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.324229841892167, 0);
  sqcRYGate(q, -1.44129828207906, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.316821759410078, 0);
  sqcRYGate(q, 0.6790982862271289, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6711561563441932, 0);
  sqcRYGate(q, 3.02114044190755, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7673264953119832, 0);
  sqcRYGate(q, -0.26264602340241106, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5579383975643486, 1);
  sqcRYGate(q, 0.7675931104345066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4133595453880305, 1);
  sqcRYGate(q, -2.2731063765747646, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1174754064679626, 1);
  sqcRYGate(q, -3.1138658062223086, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9018024352831967, 1);
  sqcRYGate(q, -2.0037402042283574, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.906662899759045, 2);
  sqcRYGate(q, -3.118106033855398, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5694532930714227, 2);
  sqcRYGate(q, 0.5460141489705478, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.384928730998879, 0);
  sqcRYGate(q, 0.5286145271613911, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.006749652232974412, 0);
  sqcRYGate(q, 1.7578189688871775, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.378158230894874, 0);
  sqcRYGate(q, -1.0322088111857184, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.205101714529195, 0);
  sqcRYGate(q, 1.2002772575320373, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.530147861145266, 0);
  sqcRYGate(q, 1.7362047050416107, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.059075161819161, 0);
  sqcRYGate(q, 3.106954465808296, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0412164927538083, 1);
  sqcRYGate(q, -0.9034611039468795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04133279127670164, 1);
  sqcRYGate(q, 0.4543663277515142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3005599627138658, 1);
  sqcRYGate(q, -2.7186788917780937, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5937603146035144, 1);
  sqcRYGate(q, 1.05154450687494, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9099685340931059, 2);
  sqcRYGate(q, -0.38673269337524285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3224108991124384, 2);
  sqcRYGate(q, -2.946378423510925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1016067313769704, 0);
  sqcRYGate(q, -2.2510641170778944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.724606545766545, 0);
  sqcRYGate(q, -1.104773090388032, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9976275902551098, 0);
  sqcRYGate(q, -1.1578573431176673, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9285221243480208, 0);
  sqcRYGate(q, 3.081110266910207, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.037805324900664, 0);
  sqcRYGate(q, -0.09199183253672098, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.25804481984181127, 0);
  sqcRYGate(q, -0.32285742340300594, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.006269145655531, 1);
  sqcRYGate(q, -1.629977803586197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8156359334656091, 1);
  sqcRYGate(q, -2.8707243104349836, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6575046938132716, 1);
  sqcRYGate(q, -2.712599186330637, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1546608922483177, 1);
  sqcRYGate(q, 0.7118609950859207, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.718740853910267, 2);
  sqcRYGate(q, -2.126909481124531, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.671209875256936, 2);
  sqcRYGate(q, -0.7225842134755044, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0226901854502772, 0);
  sqcRYGate(q, 1.7588229030204905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7774793384362266, 0);
  sqcRYGate(q, -0.2245269728659034, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9417167622538147, 0);
  sqcRYGate(q, 1.9277922794205713, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.20178607170455537, 0);
  sqcRYGate(q, -1.327127353977576, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3035754094046805, 0);
  sqcRYGate(q, -2.612584135442309, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.20580226800302, 0);
  sqcRYGate(q, 2.6210240442641473, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1039334096904803, 1);
  sqcRYGate(q, 1.764171597538414, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3171199819461371, 1);
  sqcRYGate(q, 1.8725029517487002, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.987047722455644, 1);
  sqcRYGate(q, -1.8974537550673276, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8637397788966736, 1);
  sqcRYGate(q, 3.0291698398801463, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2714504583953854, 2);
  sqcRYGate(q, 1.0596645549460741, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0611790438342283, 2);
  sqcRYGate(q, -2.6755061565209917, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.011332997316046, 0);
  sqcRYGate(q, -0.39826958098582543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3529409428622796, 0);
  sqcRYGate(q, -1.4593710789726373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4621396614572282, 0);
  sqcRYGate(q, 1.7958064976855503, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1560857699259472, 0);
  sqcRYGate(q, -3.019363399428291, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.06272473527358947, 0);
  sqcRYGate(q, -0.0661255784513388, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.32968276077370184, 0);
  sqcRYGate(q, -2.770377842468647, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7355978771926255, 1);
  sqcRYGate(q, -1.2115753603307748, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6145249346085697, 1);
  sqcRYGate(q, 1.7108826450707373, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1440866957019646, 1);
  sqcRYGate(q, -2.11764855758761, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.677057249435954, 1);
  sqcRYGate(q, 0.05020857679903301, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.687121872026105, 2);
  sqcRYGate(q, 2.4516180277890256, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0423418705215355, 2);
  sqcRYGate(q, 1.8244603220102174, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.83242690160035, 0);
  sqcRYGate(q, -2.3567671733695117, 1);
  sqcRYGate(q, -0.29647894394032726, 2);
  sqcRYGate(q, 1.964734594923117, 3);

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
