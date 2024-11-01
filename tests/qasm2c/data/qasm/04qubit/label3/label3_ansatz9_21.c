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

  sqcRYGate(q, 2.6713473515157085, 0);
  sqcRYGate(q, 2.762435220116652, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3295743641856363, 0);
  sqcRYGate(q, 0.6382634693840329, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4512289953804283, 2);
  sqcRYGate(q, -2.1179753457685795, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7886724892968653, 2);
  sqcRYGate(q, 1.46576563488662, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6254818984557664, 0);
  sqcRYGate(q, -2.177192337942432, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7561437811638911, 0);
  sqcRYGate(q, 2.4360695496657767, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2530363027844933, 1);
  sqcRYGate(q, -3.0467775913965105, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.546671602862296, 1);
  sqcRYGate(q, -0.598232130137844, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.989641146169637, 0);
  sqcRYGate(q, 1.214784688444631, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2213689775817929, 0);
  sqcRYGate(q, -0.739213229543517, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.682502801667999, 1);
  sqcRYGate(q, 1.8227750680384744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.758103859223191, 1);
  sqcRYGate(q, -1.159207335777355, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6659543826794687, 0);
  sqcRYGate(q, -1.4658626209936543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2094367512813253, 0);
  sqcRYGate(q, -1.9165942465311676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7605107641665595, 2);
  sqcRYGate(q, -3.094076707095303, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1130701532299696, 2);
  sqcRYGate(q, -2.743582757173364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.27163644909954704, 0);
  sqcRYGate(q, -2.2877591274704447, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.14369488076288, 0);
  sqcRYGate(q, 0.6293075825835515, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6489185203594132, 1);
  sqcRYGate(q, -2.8802312260338754, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1861838594584397, 1);
  sqcRYGate(q, 2.8237272283481945, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8341641890446212, 0);
  sqcRYGate(q, -1.8404859799251303, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.15139776704796137, 0);
  sqcRYGate(q, 0.5178244918015241, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.924991377733938, 1);
  sqcRYGate(q, -0.3922189720055008, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5166367591083405, 1);
  sqcRYGate(q, -1.6603798349542538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3695822146935273, 0);
  sqcRYGate(q, -0.3246935772448696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2174305727456121, 0);
  sqcRYGate(q, 1.9211039558136396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.882484239084709, 2);
  sqcRYGate(q, 0.007748028156607099, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3892459628674072, 2);
  sqcRYGate(q, 2.158126749160524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6959269221878492, 0);
  sqcRYGate(q, -0.536758034834093, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4466522074754087, 0);
  sqcRYGate(q, -3.1211366664375007, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.650563971183394, 1);
  sqcRYGate(q, 2.406650780385504, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6445845173058125, 1);
  sqcRYGate(q, 2.9227125207850366, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.778081156617285, 0);
  sqcRYGate(q, -0.7912480630777027, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.18999423051908973, 0);
  sqcRYGate(q, -2.1468822733430972, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7481622073563106, 1);
  sqcRYGate(q, 0.565985989365589, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5812328762521944, 1);
  sqcRYGate(q, 2.689333895863034, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8065278695603766, 0);
  sqcRYGate(q, 0.9573155888342938, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04730377786970204, 0);
  sqcRYGate(q, 1.8962525458150548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.35910985282457464, 2);
  sqcRYGate(q, 2.6372559371600457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0727462155634712, 2);
  sqcRYGate(q, -2.280715961753094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.640452307196218, 0);
  sqcRYGate(q, 1.4746189855044456, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1598818007393232, 0);
  sqcRYGate(q, -1.8709194233824564, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.787023271098371, 1);
  sqcRYGate(q, -2.3617834917265785, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0368517641408133, 1);
  sqcRYGate(q, -2.4535783123486565, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4443978374382072, 0);
  sqcRYGate(q, 0.3860132342697362, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9739621235129785, 0);
  sqcRYGate(q, -1.8420527783666316, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3985890732274262, 1);
  sqcRYGate(q, 0.5974274473722794, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.00409876640721694, 1);
  sqcRYGate(q, -0.8152262707346055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.776184667729521, 0);
  sqcRYGate(q, -1.8689736495234106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9848916808819206, 0);
  sqcRYGate(q, 1.6511010796124583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0802899398455557, 2);
  sqcRYGate(q, -2.165977711271631, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6872509822925676, 2);
  sqcRYGate(q, 1.6721560889105735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6089592899778337, 0);
  sqcRYGate(q, 2.8235423409348117, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7607305206045858, 0);
  sqcRYGate(q, -2.3872630191320536, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.05626965135295148, 1);
  sqcRYGate(q, 0.11359762492568404, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1273202244939102, 1);
  sqcRYGate(q, 1.2446665996708706, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0525117131949204, 0);
  sqcRYGate(q, 2.8246452442894436, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.259019952111652, 0);
  sqcRYGate(q, 1.5635951749780626, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2629685826351789, 1);
  sqcRYGate(q, -2.325412254949417, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.21724504782314644, 1);
  sqcRYGate(q, -0.8533745748464846, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5444776459901016, 0);
  sqcRYGate(q, -1.7708543577370464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0276140086287406, 0);
  sqcRYGate(q, 2.711968137203316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8431483758257747, 2);
  sqcRYGate(q, 0.03394659329265436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6651186138262073, 2);
  sqcRYGate(q, -1.5055807791372104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0067778557814817, 0);
  sqcRYGate(q, 2.747694793416008, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5334310409535883, 0);
  sqcRYGate(q, -0.8402561256403303, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.13547949073189428, 1);
  sqcRYGate(q, -1.6775950802690112, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.012589389242664, 1);
  sqcRYGate(q, -0.04381232560913377, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0488202606918584, 0);
  sqcRYGate(q, -0.023303391408683538, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5925446472486262, 0);
  sqcRYGate(q, -0.06454130692601419, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6682720814750046, 1);
  sqcRYGate(q, 0.9633844045006592, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4133459026972597, 1);
  sqcRYGate(q, -1.694520894391333, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0396800667863049, 0);
  sqcRYGate(q, 2.2101393417028374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11690271287679412, 0);
  sqcRYGate(q, 0.4839069762442696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6620073149214978, 2);
  sqcRYGate(q, -0.02994883795036074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2454481058155578, 2);
  sqcRYGate(q, -1.246316373468427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7126604185099428, 0);
  sqcRYGate(q, -1.0589201577947014, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5405919669984556, 0);
  sqcRYGate(q, -1.0868522730418264, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7109393820563152, 1);
  sqcRYGate(q, 0.23818950581815232, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.588094910439171, 1);
  sqcRYGate(q, 0.24534752605382543, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9203781310782966, 0);
  sqcRYGate(q, 3.111692815317366, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2866460743875874, 0);
  sqcRYGate(q, -0.16726627832727647, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6812591776676893, 1);
  sqcRYGate(q, -2.703606869571155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5757538575986905, 1);
  sqcRYGate(q, 1.4177252182375832, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7628715634557865, 0);
  sqcRYGate(q, -0.7417675322524111, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4211794468459857, 0);
  sqcRYGate(q, -2.1530846154320313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.595147969293909, 2);
  sqcRYGate(q, -0.06688746788622536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4684303658297564, 2);
  sqcRYGate(q, 2.9852766120089105, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6392981319099613, 0);
  sqcRYGate(q, 1.597651582736187, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3216674981827339, 0);
  sqcRYGate(q, -0.23492844448320283, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.880733321305306, 1);
  sqcRYGate(q, 1.4143259875278102, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.36982497654470325, 1);
  sqcRYGate(q, 0.01743323905014863, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2525561284720328, 0);
  sqcRYGate(q, 2.1667418687083515, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5916496759374934, 0);
  sqcRYGate(q, -1.3469252856592309, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.547935249316585, 1);
  sqcRYGate(q, -0.12613393938733442, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3422403697418641, 1);
  sqcRYGate(q, -2.526090149525795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.837271721803611, 0);
  sqcRYGate(q, -3.1231550445743967, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9060939706700983, 0);
  sqcRYGate(q, -2.3805057083423664, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7999407054173981, 2);
  sqcRYGate(q, -3.060490030196264, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7152400638427352, 2);
  sqcRYGate(q, 1.6997542270901131, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2355367231014398, 0);
  sqcRYGate(q, 1.9450721977595693, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5092464984553777, 0);
  sqcRYGate(q, -2.4745381559733044, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.43454486284351024, 1);
  sqcRYGate(q, -2.9304851450879474, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.716514862073547, 1);
  sqcRYGate(q, 1.4788156747818202, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7081681379639146, 0);
  sqcRYGate(q, 0.48951227682129417, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4458584484630097, 0);
  sqcRYGate(q, 2.1433521108657754, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9249401923355735, 1);
  sqcRYGate(q, -2.3303554707393634, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4640444303747522, 1);
  sqcRYGate(q, -2.478442407584377, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6815819245729067, 0);
  sqcRYGate(q, -2.898097886823548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4401309882065455, 0);
  sqcRYGate(q, -2.2539648404985986, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1024260724785684, 2);
  sqcRYGate(q, 0.7546492203930804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4332696045839353, 2);
  sqcRYGate(q, 0.6996856868577565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1536318397059155, 0);
  sqcRYGate(q, -3.139751271088836, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.175914158024475, 0);
  sqcRYGate(q, -2.491022120507739, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1287733017015742, 1);
  sqcRYGate(q, 0.8916960110821393, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.05640436925409, 1);
  sqcRYGate(q, -3.0699468862441384, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.983088719861993, 0);
  sqcRYGate(q, -2.611048634268251, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7642796140983485, 0);
  sqcRYGate(q, -2.8310544626204126, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7226180440286694, 1);
  sqcRYGate(q, 0.7216255737951048, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1935698899723484, 1);
  sqcRYGate(q, -0.9618128928505464, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8539571719403405, 0);
  sqcRYGate(q, 0.016627356316782027, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.13996020693584316, 0);
  sqcRYGate(q, 2.522404355571453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.553735827763699, 2);
  sqcRYGate(q, -1.1638136739780247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07368021014515147, 2);
  sqcRYGate(q, -0.13426332747911607, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4775143635273045, 0);
  sqcRYGate(q, -0.7844587377204295, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4950550536627767, 0);
  sqcRYGate(q, 0.5946884382882631, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6667784256143223, 1);
  sqcRYGate(q, -2.5234100780647437, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5638456191331924, 1);
  sqcRYGate(q, 1.053412401261654, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9943604310939125, 0);
  sqcRYGate(q, -2.298059880792664, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.648268447322529, 0);
  sqcRYGate(q, -0.7615979993449997, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4399197793237885, 1);
  sqcRYGate(q, -1.8309170574736102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1229261843862626, 1);
  sqcRYGate(q, 1.8984281072440012, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.023426859479635, 0);
  sqcRYGate(q, -0.2950277377282795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.62002698518651, 0);
  sqcRYGate(q, -1.4036832259406942, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5203768823135198, 2);
  sqcRYGate(q, -0.9559547975913016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08203563361320043, 2);
  sqcRYGate(q, -3.0786796212829706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.868371965496237, 0);
  sqcRYGate(q, 1.8006533590256832, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.08517587127289848, 0);
  sqcRYGate(q, 0.1418834052370661, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.91926200696545, 1);
  sqcRYGate(q, -0.27650298272789425, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.096044822626758, 1);
  sqcRYGate(q, -0.6590689892806658, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.224331548772069, 0);
  sqcRYGate(q, 0.2926858304050688, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.373040195282324, 0);
  sqcRYGate(q, 2.5129749448759497, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6311613935398475, 1);
  sqcRYGate(q, -0.2527434466905776, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.027171476806112, 1);
  sqcRYGate(q, 0.14165938110062282, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8632558237398813, 0);
  sqcRYGate(q, 0.8488519949341722, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1552365983848327, 0);
  sqcRYGate(q, -0.3131150725795165, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7287789481354228, 2);
  sqcRYGate(q, -1.0037048385822107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.563313035970701, 2);
  sqcRYGate(q, 1.8426437351572602, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4455375508873614, 0);
  sqcRYGate(q, 1.973078504544604, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3683418575936406, 0);
  sqcRYGate(q, 3.035346254013119, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8273462991398981, 1);
  sqcRYGate(q, -0.3174500230928775, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9478634270164292, 1);
  sqcRYGate(q, 2.3869405686620593, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.155970695277657, 0);
  sqcRYGate(q, -0.9889349319444883, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.813705927592694, 0);
  sqcRYGate(q, -0.1239345937555223, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9852040184919808, 1);
  sqcRYGate(q, -0.7744657432525286, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9717927729565634, 1);
  sqcRYGate(q, -2.8458869366461292, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.23311091575729564, 0);
  sqcRYGate(q, 2.0066218734984806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.569200837290012, 0);
  sqcRYGate(q, -0.2860852365954898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8880655654052172, 2);
  sqcRYGate(q, 1.489225028202754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5650664877572575, 2);
  sqcRYGate(q, -2.7226159906493366, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.953564279795908, 0);
  sqcRYGate(q, 0.3326087347331528, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6811948435540276, 0);
  sqcRYGate(q, 3.060753119130339, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0699498675155215, 1);
  sqcRYGate(q, -2.5361639786788763, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4153168552904001, 1);
  sqcRYGate(q, 0.8003612644617873, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9235660526857964, 0);
  sqcRYGate(q, -2.3073945987660496, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.055258177797329, 0);
  sqcRYGate(q, 1.4296541053714686, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3225267773369356, 1);
  sqcRYGate(q, -1.9125475596629826, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3686809768025476, 1);
  sqcRYGate(q, -2.84957286140563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.16085167398907263, 0);
  sqcRYGate(q, -1.5012904794297877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0526741648736655, 0);
  sqcRYGate(q, -2.0968516079115522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3219665667791354, 2);
  sqcRYGate(q, -1.4123225171809946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7866971130288936, 2);
  sqcRYGate(q, 1.4568089589743698, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2185862176505653, 0);
  sqcRYGate(q, 2.7144049759473514, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.16213701912179515, 0);
  sqcRYGate(q, -0.24509066642189925, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2665974140475686, 1);
  sqcRYGate(q, -1.4379147944726887, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1163659981473115, 1);
  sqcRYGate(q, 2.555438770208077, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.476834437834878, 0);
  sqcRYGate(q, 1.4589271163407096, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3809168381564084, 0);
  sqcRYGate(q, -1.2259814010840115, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8510727228311694, 1);
  sqcRYGate(q, 2.818547323606497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.944244063749541, 1);
  sqcRYGate(q, 0.6954559516507133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9747821547744433, 0);
  sqcRYGate(q, -0.03361611237629362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0011705070051644, 0);
  sqcRYGate(q, -2.8145182040612617, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.76701725836321, 2);
  sqcRYGate(q, 1.0117140897464383, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6187716801572827, 2);
  sqcRYGate(q, -0.29843052399948444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.85690807364706, 0);
  sqcRYGate(q, -0.7565553650596462, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.403112372978847, 0);
  sqcRYGate(q, 1.7220823630116104, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4806055397028759, 1);
  sqcRYGate(q, 3.084804473742446, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.336336372619703, 1);
  sqcRYGate(q, -0.8086789218660294, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.463551047740236, 0);
  sqcRYGate(q, -1.051402150262165, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8019015751221527, 0);
  sqcRYGate(q, 2.965992646777653, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4708239967615223, 1);
  sqcRYGate(q, 0.4176322701177667, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7590269704779029, 1);
  sqcRYGate(q, -0.6986649451486772, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3235441257376008, 0);
  sqcRYGate(q, -1.5996261420730793, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2568891757162162, 0);
  sqcRYGate(q, 1.8409300947634382, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1746064962945035, 2);
  sqcRYGate(q, -1.756093363900044, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.071954084110333, 2);
  sqcRYGate(q, -1.2068436580155701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0717854206638875, 0);
  sqcRYGate(q, -0.6360622730398209, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9509741348461793, 0);
  sqcRYGate(q, -2.95509657134754, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5861871705083823, 1);
  sqcRYGate(q, 0.9148163003778884, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.674564699666007, 1);
  sqcRYGate(q, 0.3421424215484583, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.459355352909167, 0);
  sqcRYGate(q, -2.5661821150142727, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6185464041891517, 0);
  sqcRYGate(q, -2.070559509521484, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.928857577160705, 1);
  sqcRYGate(q, -1.255176153299371, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0145519366323607, 1);
  sqcRYGate(q, 2.9974742436596493, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4965034408650335, 0);
  sqcRYGate(q, 1.6780381875622934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0805786801944484, 0);
  sqcRYGate(q, 1.169732501495585, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6901597669454134, 2);
  sqcRYGate(q, -1.8446857718150431, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5391525669792738, 2);
  sqcRYGate(q, 0.9983111799172947, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5796137654150525, 0);
  sqcRYGate(q, 2.0522271375780132, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0320585362679884, 0);
  sqcRYGate(q, 2.190876921638052, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1076261399033984, 1);
  sqcRYGate(q, -1.3588944177420617, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.540007672105126, 1);
  sqcRYGate(q, 1.39740281445087, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2951938365459155, 0);
  sqcRYGate(q, 1.870059503265833, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.344670481115596, 0);
  sqcRYGate(q, -3.0953546868627133, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8501144743008306, 1);
  sqcRYGate(q, -0.522696263280216, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9563738259599457, 1);
  sqcRYGate(q, 1.2565687875679632, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4244653827680227, 0);
  sqcRYGate(q, -1.2670515336058674, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0743399745289834, 0);
  sqcRYGate(q, 2.8908179556411158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.604942946322794, 2);
  sqcRYGate(q, 2.2459920184578888, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2452289045109923, 2);
  sqcRYGate(q, -0.3068086937849116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8596577892796615, 0);
  sqcRYGate(q, 1.6581730370189538, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.27513319728617763, 0);
  sqcRYGate(q, -1.1220763796301831, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2754535205765594, 1);
  sqcRYGate(q, 0.6338991596432206, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9965654522401255, 1);
  sqcRYGate(q, 2.9529292623391776, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8162353673156053, 0);
  sqcRYGate(q, 1.485963544325685, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4183393773541262, 0);
  sqcRYGate(q, 1.0037684792780954, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9738446251339586, 1);
  sqcRYGate(q, 1.3073207483290696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3653628526404145, 1);
  sqcRYGate(q, 1.6194049817800247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9370850466078149, 0);
  sqcRYGate(q, 1.6156973704190962, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7735082666152202, 0);
  sqcRYGate(q, 0.9532281553235489, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9232449827694706, 2);
  sqcRYGate(q, 1.056003647126663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7221324166093748, 2);
  sqcRYGate(q, 1.5871792559558386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7376874192516523, 0);
  sqcRYGate(q, -2.7479066544537694, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.993332678379856, 0);
  sqcRYGate(q, -1.7110179636466132, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.162704077857875, 1);
  sqcRYGate(q, 1.7992673117694382, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1301863737567217, 1);
  sqcRYGate(q, -1.0003317711939177, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.18279723894428465, 0);
  sqcRYGate(q, 2.1179688619760917, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1637977631005025, 0);
  sqcRYGate(q, -2.760693369772224, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.285427798004565, 1);
  sqcRYGate(q, 0.2649313542611923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.37624932509723974, 1);
  sqcRYGate(q, 2.4467339935541728, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.11127890670656893, 0);
  sqcRYGate(q, -1.27961067039416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9222462837821452, 0);
  sqcRYGate(q, -1.3211977203112513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.432601528280677, 2);
  sqcRYGate(q, 2.2393974580616725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.039046163850096, 2);
  sqcRYGate(q, 2.3712084981935755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.970848944364114, 0);
  sqcRYGate(q, 2.787868362020749, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.812812678212716, 0);
  sqcRYGate(q, 1.7276558477806196, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3958352081867638, 1);
  sqcRYGate(q, 1.8296603484173506, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8550936457467393, 1);
  sqcRYGate(q, -1.1952758080720036, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.28126440856162127, 0);
  sqcRYGate(q, -2.276425829373383, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.33477339211261115, 0);
  sqcRYGate(q, 0.7199019966727596, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.20834524136020188, 1);
  sqcRYGate(q, -3.114634740176078, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4608575042228482, 1);
  sqcRYGate(q, 1.640712192118188, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.975419166770438, 0);
  sqcRYGate(q, 1.7137294957295683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7073069536768299, 0);
  sqcRYGate(q, -2.8359702473980475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.466015824114764, 2);
  sqcRYGate(q, 1.9073433292815605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9327451916902484, 2);
  sqcRYGate(q, -1.2512434979660307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.074402386314657, 0);
  sqcRYGate(q, -2.6390012647386962, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7242191293686023, 0);
  sqcRYGate(q, 0.4931516966979116, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8908716426643837, 1);
  sqcRYGate(q, 2.660587999306969, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.656982495532572, 1);
  sqcRYGate(q, 0.20493548324374114, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1895303764669385, 0);
  sqcRYGate(q, -0.5716777287406547, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6411953067851731, 0);
  sqcRYGate(q, 1.0156419745810277, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.070946099038122, 1);
  sqcRYGate(q, 0.6394820818563769, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9565270644570685, 1);
  sqcRYGate(q, -0.18842330188438375, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9558558164950681, 0);
  sqcRYGate(q, 2.2407794624552464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5354033145076118, 0);
  sqcRYGate(q, -1.52406103600664, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4036320549213674, 2);
  sqcRYGate(q, 1.5220601231228317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.42095269487851983, 2);
  sqcRYGate(q, -1.489733189038274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9629055616872035, 0);
  sqcRYGate(q, 2.1899459398506376, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.444652537633505, 0);
  sqcRYGate(q, 3.1199583596370735, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1388526759195763, 1);
  sqcRYGate(q, -0.37175322717188486, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.696031737473197, 1);
  sqcRYGate(q, -1.677436526952401, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.418210432123007, 0);
  sqcRYGate(q, 2.4773711982385906, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9814723396466452, 0);
  sqcRYGate(q, -0.2597572544973281, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2193471819489261, 1);
  sqcRYGate(q, -2.7886882397884567, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9510255689835434, 1);
  sqcRYGate(q, -1.941767513165085, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.09272150657553165, 0);
  sqcRYGate(q, -1.1336641126579012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1308083286610726, 0);
  sqcRYGate(q, 0.4088755663782623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.119644251654429, 2);
  sqcRYGate(q, 1.3622995801074653, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6916404035056816, 2);
  sqcRYGate(q, -1.0768028422842002, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.973081003241365, 0);
  sqcRYGate(q, 0.3960283522413022, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.672154837608705, 0);
  sqcRYGate(q, 3.1258978382234424, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3836488002274554, 1);
  sqcRYGate(q, 2.194868908120995, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8758364811582364, 1);
  sqcRYGate(q, -2.0235078484865516, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5252435791774666, 0);
  sqcRYGate(q, 1.2921356988089658, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5921981466299066, 0);
  sqcRYGate(q, -2.32949301423018, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.032252282400539, 1);
  sqcRYGate(q, -1.9504213831695694, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4760018229284282, 1);
  sqcRYGate(q, -2.9698222386930846, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8146927727870716, 0);
  sqcRYGate(q, 0.8205232966274159, 1);
  sqcRYGate(q, -0.31036769503023265, 2);
  sqcRYGate(q, 0.09993816117955578, 3);

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
