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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -2.401019841073936, 0);
  sqcRYGate(q, 1.4101543668137035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1023279411450524, 0);
  sqcRYGate(q, 0.485740146983063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.248976515070488, 0);
  sqcRYGate(q, -1.895260465697304, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6973121415596675, 0);
  sqcRYGate(q, -0.013994749774087545, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5007888119615552, 0);
  sqcRYGate(q, 1.9887778257952329, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.34038841730840536, 0);
  sqcRYGate(q, -2.5006038141113685, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3427147053640641, 1);
  sqcRYGate(q, 1.2652028275500304, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.02202365675728475, 1);
  sqcRYGate(q, -2.8366970692542774, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3514810286421886, 1);
  sqcRYGate(q, -2.7016581755513727, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.37280790265549585, 1);
  sqcRYGate(q, 2.012726926661443, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8276149452064105, 2);
  sqcRYGate(q, 1.6123339310715785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.408824739237242, 2);
  sqcRYGate(q, -1.097015471054177, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0808888240383228, 0);
  sqcRYGate(q, -2.1794048714890204, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5235815484615873, 0);
  sqcRYGate(q, -2.0574602597628724, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0115530915096027, 0);
  sqcRYGate(q, 2.206937640448875, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8095221027434887, 0);
  sqcRYGate(q, 0.26748331782491785, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.00028450027494, 0);
  sqcRYGate(q, -2.408634963187138, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6177124888657879, 0);
  sqcRYGate(q, 2.4320615251719335, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9140305368746637, 1);
  sqcRYGate(q, -1.9888609685102314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0959955927972396, 1);
  sqcRYGate(q, -2.731584491714146, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.727104143020468, 1);
  sqcRYGate(q, -1.5930564926509412, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.19847782980213946, 1);
  sqcRYGate(q, 2.817495562991965, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.868742931067242, 2);
  sqcRYGate(q, 0.6613590924547472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.11581240090534806, 2);
  sqcRYGate(q, 1.525206575629367, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.13042964547667, 0);
  sqcRYGate(q, -2.1009865457915784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7157379565430437, 0);
  sqcRYGate(q, 1.8457832181431406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.932426023182783, 0);
  sqcRYGate(q, 1.3182530543736684, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4652170030864191, 0);
  sqcRYGate(q, 2.6183105525177233, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.14829385456756033, 0);
  sqcRYGate(q, -2.9155206844614803, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.38477182193326787, 0);
  sqcRYGate(q, -0.27240522661509914, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.619974176621143, 1);
  sqcRYGate(q, -2.691553458767102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0554933501430304, 1);
  sqcRYGate(q, 1.5581951174544342, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0336352741133394, 1);
  sqcRYGate(q, 1.0893496419207649, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6136805931982368, 1);
  sqcRYGate(q, -0.4509025283841294, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9453399140998942, 2);
  sqcRYGate(q, 2.5909670063997505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14966056739247335, 2);
  sqcRYGate(q, -1.37955940252715, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7608415949095377, 0);
  sqcRYGate(q, -0.6777935510307581, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2969621869471828, 0);
  sqcRYGate(q, 2.9113474396702648, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.908118805444107, 0);
  sqcRYGate(q, 2.9437206897830808, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.710824249869308, 0);
  sqcRYGate(q, -3.097327037707536, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7945926467864108, 0);
  sqcRYGate(q, 1.800111864698502, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.962587209205619, 0);
  sqcRYGate(q, -1.7511717753523826, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4477440452469745, 1);
  sqcRYGate(q, 1.9109536296664094, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0263290812632313, 1);
  sqcRYGate(q, 1.0332770830558196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.402310472202416, 1);
  sqcRYGate(q, -0.40235976394447, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4741413936733574, 1);
  sqcRYGate(q, -0.1691097293396767, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4717647275347314, 2);
  sqcRYGate(q, 2.229623583553888, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5433007114654056, 2);
  sqcRYGate(q, 2.609229108625449, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.882490032701064, 0);
  sqcRYGate(q, 2.786697667587553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.294845453252953, 0);
  sqcRYGate(q, -0.9732343317254109, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.934072388786712, 0);
  sqcRYGate(q, 0.5102208818640284, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9539519444820437, 0);
  sqcRYGate(q, 0.9259396733928433, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1647277934469624, 0);
  sqcRYGate(q, 2.76812914985208, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5307650411556857, 0);
  sqcRYGate(q, -1.151918201974432, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6232535597353237, 1);
  sqcRYGate(q, -2.67630526121056, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.27193693730415, 1);
  sqcRYGate(q, 2.55855979096784, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.643783952824295, 1);
  sqcRYGate(q, 1.6478776417415815, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0559449397926364, 1);
  sqcRYGate(q, -2.064917378293487, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6590525056972911, 2);
  sqcRYGate(q, -1.3180928969902321, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9571771802509357, 2);
  sqcRYGate(q, 1.0453724627524934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.154914650773606, 0);
  sqcRYGate(q, 0.8997576778295615, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1290778093509433, 0);
  sqcRYGate(q, 2.522990553313279, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4426039129674497, 0);
  sqcRYGate(q, 2.2442059126697966, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.61204538396085, 0);
  sqcRYGate(q, -0.3744615556372951, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8064291886334662, 0);
  sqcRYGate(q, 2.873028217098255, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8229830586960563, 0);
  sqcRYGate(q, -2.1796339593672918, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.63412384027581, 1);
  sqcRYGate(q, -1.3347661274030553, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4136151645737156, 1);
  sqcRYGate(q, 2.861732678481176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.666465583377007, 1);
  sqcRYGate(q, 0.33900905452866414, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.404693122022266, 1);
  sqcRYGate(q, -0.9591841237394458, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2560664812186575, 2);
  sqcRYGate(q, 3.116257688887326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.43531745562616203, 2);
  sqcRYGate(q, -2.4485237175115078, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.280411674193067, 0);
  sqcRYGate(q, 0.04421695841329672, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8102675488244319, 0);
  sqcRYGate(q, -2.3987986949674904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.29097335532382, 0);
  sqcRYGate(q, 3.0938662773090875, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.299842790177561, 0);
  sqcRYGate(q, 0.03719613179526856, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7821411026574676, 0);
  sqcRYGate(q, 2.825618850199037, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2631334723416447, 0);
  sqcRYGate(q, -2.156163804387818, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2921628864170964, 1);
  sqcRYGate(q, 1.653208321342308, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3444881899571174, 1);
  sqcRYGate(q, -0.9377066004982576, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.880670323292794, 1);
  sqcRYGate(q, -2.2637827940779296, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.44037656382892987, 1);
  sqcRYGate(q, 2.583536656485946, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8855274692734348, 2);
  sqcRYGate(q, -0.4017852438223513, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8675813477924361, 2);
  sqcRYGate(q, 0.33471765164220435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17110703494116739, 0);
  sqcRYGate(q, -0.20643488443825006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6045028610278367, 0);
  sqcRYGate(q, -1.7671605707213722, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.661347136956425, 0);
  sqcRYGate(q, 3.0928457654125383, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5293253661898233, 0);
  sqcRYGate(q, -1.0375139340025856, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8878689125723405, 0);
  sqcRYGate(q, -2.981486394560143, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.280694154426616, 0);
  sqcRYGate(q, 3.1251631393051618, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.14323324607137525, 1);
  sqcRYGate(q, -2.2370165092068994, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.613641658728988, 1);
  sqcRYGate(q, 1.1779782261157594, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7515758557830495, 1);
  sqcRYGate(q, 1.075292384566492, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.0655871953447269, 1);
  sqcRYGate(q, 0.0789007282262708, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.02854308676182349, 2);
  sqcRYGate(q, 0.9295407314905119, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4421001636225075, 2);
  sqcRYGate(q, 2.0379621416779616, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6162425330321211, 0);
  sqcRYGate(q, -0.4473332023375486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1389260294453218, 0);
  sqcRYGate(q, -2.349654245045402, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6051572271272482, 0);
  sqcRYGate(q, 1.4796824435462081, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.384572484165144, 0);
  sqcRYGate(q, -2.2657979883330546, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.254055776143433, 0);
  sqcRYGate(q, -0.23503144343435256, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5687519692399929, 0);
  sqcRYGate(q, -1.4340612966128017, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5815578426221073, 1);
  sqcRYGate(q, 1.06477782860566, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.191612955578116, 1);
  sqcRYGate(q, -2.526008177450406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.378878400150303, 1);
  sqcRYGate(q, 1.1868205632776974, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9550054792892784, 1);
  sqcRYGate(q, 0.02907875328719452, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7247780610160415, 2);
  sqcRYGate(q, 2.017732433796496, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.555594620743435, 2);
  sqcRYGate(q, 2.142712743403222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2509003919192019, 0);
  sqcRYGate(q, -0.2755451862815086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.019516569375119, 0);
  sqcRYGate(q, -2.277674385149318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.164032237172358, 0);
  sqcRYGate(q, 2.4826549377311986, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1589084759562975, 0);
  sqcRYGate(q, -1.5769709319334502, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.024691159853606436, 0);
  sqcRYGate(q, 1.4163359844159293, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7702469657493802, 0);
  sqcRYGate(q, 0.18636860321830856, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7933561588043141, 1);
  sqcRYGate(q, -0.37671022157572237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.975414931942144, 1);
  sqcRYGate(q, 0.3781416078864561, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.30839342280778315, 1);
  sqcRYGate(q, 1.683252291881513, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.70486285799004, 1);
  sqcRYGate(q, 1.9152075170782041, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5187120743584606, 2);
  sqcRYGate(q, -2.388769134293026, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4098043891846803, 2);
  sqcRYGate(q, -2.2071842774474435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7269468587562813, 0);
  sqcRYGate(q, -1.284647953424141, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1669027699167336, 0);
  sqcRYGate(q, 1.079895575723401, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.78376735692453, 0);
  sqcRYGate(q, -2.321725413436998, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6854739692131258, 0);
  sqcRYGate(q, -2.641272266208596, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.12266715078894483, 0);
  sqcRYGate(q, 3.0810228255917527, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0528282751845, 0);
  sqcRYGate(q, -3.067246514485668, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0076372051267164, 1);
  sqcRYGate(q, -1.2948754543747294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8973549846044913, 1);
  sqcRYGate(q, -0.3729427743523477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6185266766355478, 1);
  sqcRYGate(q, 0.6949368233786846, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8841027324632922, 1);
  sqcRYGate(q, 1.9661790010371512, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.09234656729303481, 2);
  sqcRYGate(q, -2.1161074646759124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9140307157753327, 2);
  sqcRYGate(q, -2.9897787096413566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9394586822997588, 0);
  sqcRYGate(q, 0.7904452136266513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.951606868566678, 0);
  sqcRYGate(q, -1.3668402269806088, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1738105676813644, 0);
  sqcRYGate(q, -1.8469975358930038, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6433851831660766, 0);
  sqcRYGate(q, 0.8254203161667154, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8890296106236937, 0);
  sqcRYGate(q, -2.23626352254037, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3812126120597927, 0);
  sqcRYGate(q, -2.2021709426166582, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2545477355452335, 1);
  sqcRYGate(q, 0.9338637699282772, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1236925808058769, 1);
  sqcRYGate(q, -0.6217658464909102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5232101103113882, 1);
  sqcRYGate(q, 2.955106586532087, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.08320881525382262, 1);
  sqcRYGate(q, -1.4848862268123675, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7290861277636496, 2);
  sqcRYGate(q, -1.2812372424451353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2287472802249018, 2);
  sqcRYGate(q, -2.805332648617374, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8061018804848223, 0);
  sqcRYGate(q, 1.0830162084835708, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6777901538211575, 0);
  sqcRYGate(q, 0.05132154400878797, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.046173030789664615, 0);
  sqcRYGate(q, -0.2399053987120654, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7378944836486196, 0);
  sqcRYGate(q, -2.1381933027676148, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9671718559361615, 0);
  sqcRYGate(q, 1.359762909024692, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4406494543114086, 0);
  sqcRYGate(q, -1.6110465517494663, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3074819734853822, 1);
  sqcRYGate(q, -0.20114514201807168, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6669626449774846, 1);
  sqcRYGate(q, 0.8428684723025017, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3420936151880865, 1);
  sqcRYGate(q, -2.666431753878495, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0157928350905046, 1);
  sqcRYGate(q, -2.313192837471473, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3425445135740487, 2);
  sqcRYGate(q, -2.609812201061006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.17165788504738563, 2);
  sqcRYGate(q, -2.577885201135866, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.23319396107823112, 0);
  sqcRYGate(q, -2.6942898064438277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8498788353286897, 0);
  sqcRYGate(q, 2.8711820462894364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9810895870954965, 0);
  sqcRYGate(q, -2.742513733367736, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.251648992019761, 0);
  sqcRYGate(q, 1.9454290639882026, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1139057093130607, 0);
  sqcRYGate(q, 2.6238099145960216, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.168435159556563, 0);
  sqcRYGate(q, -0.7707128524836229, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0383453929343887, 1);
  sqcRYGate(q, -0.5498266549026551, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.128037041719557, 1);
  sqcRYGate(q, 0.6021868358645941, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5941486069181456, 1);
  sqcRYGate(q, -2.746767284283534, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2761908741744423, 1);
  sqcRYGate(q, -1.4369341736609857, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5174306374582107, 2);
  sqcRYGate(q, 0.11764879317196533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5491737044671214, 2);
  sqcRYGate(q, 1.6219197476683265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1010378116967448, 0);
  sqcRYGate(q, 0.6746998033503205, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6086005652516127, 0);
  sqcRYGate(q, 1.7760167775386453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0924988028245797, 0);
  sqcRYGate(q, -1.6664064670450385, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.652264910265501, 0);
  sqcRYGate(q, 3.1277450119349712, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9659470921948037, 0);
  sqcRYGate(q, -3.0642871906798375, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.1270198937093165, 0);
  sqcRYGate(q, 1.0749002041586104, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2740842830684238, 1);
  sqcRYGate(q, -1.6885502755200779, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.363232752933549, 1);
  sqcRYGate(q, 0.0814563283052987, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7964228835446676, 1);
  sqcRYGate(q, 2.8763094382338585, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6408812414190241, 1);
  sqcRYGate(q, -1.0629001765749881, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2088706201934114, 2);
  sqcRYGate(q, 1.7356152857391791, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6331250059162431, 2);
  sqcRYGate(q, -1.3487654927215569, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8935232461166809, 0);
  sqcRYGate(q, 2.4907938518526778, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2365525576574803, 0);
  sqcRYGate(q, -0.08604260123330042, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0907288159819326, 0);
  sqcRYGate(q, 0.025223844606423955, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8603533812446036, 0);
  sqcRYGate(q, -0.7787086847515756, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7528298187205853, 0);
  sqcRYGate(q, -3.009910096078695, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5108763517012929, 0);
  sqcRYGate(q, -3.0560944350192143, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2058096347010236, 1);
  sqcRYGate(q, 2.5681967083360098, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.40289037640414094, 1);
  sqcRYGate(q, 2.6916764876623884, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9213880209182586, 1);
  sqcRYGate(q, -0.8328783936689849, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8813712767155637, 1);
  sqcRYGate(q, 1.4267282769677907, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1238312139141464, 2);
  sqcRYGate(q, 2.576258266498409, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4507846783353928, 2);
  sqcRYGate(q, -1.7966836384461642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2445946239506436, 0);
  sqcRYGate(q, -2.741834545990502, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.424195821304522, 0);
  sqcRYGate(q, -0.5357444139993169, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9354687697942534, 0);
  sqcRYGate(q, -2.6068339095402253, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4531451104328994, 0);
  sqcRYGate(q, -1.3940020505862614, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.340590342694683, 0);
  sqcRYGate(q, -3.068306254658292, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4529043210735388, 0);
  sqcRYGate(q, 0.7481901839877292, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9967356393819533, 1);
  sqcRYGate(q, -0.24663509426151542, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6299312600648062, 1);
  sqcRYGate(q, -0.7843641045348315, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6482933228177634, 1);
  sqcRYGate(q, -0.6838704025001734, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7229766372130775, 1);
  sqcRYGate(q, -0.5559653192064307, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.730106650916747, 2);
  sqcRYGate(q, 1.166992990614809, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0141927901804342, 2);
  sqcRYGate(q, 2.3388456875873525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4946192087633223, 0);
  sqcRYGate(q, -0.04549502667872574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3487354979746398, 0);
  sqcRYGate(q, -2.0070316562735684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5173567531409173, 0);
  sqcRYGate(q, 0.6895667777195695, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9165995228085424, 0);
  sqcRYGate(q, -0.8164555429204221, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0743856304500081, 0);
  sqcRYGate(q, 1.198140697303569, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3892633122177367, 0);
  sqcRYGate(q, 2.8660894417245935, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1113141612928246, 1);
  sqcRYGate(q, -1.0260052445802337, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2613702287790494, 1);
  sqcRYGate(q, 0.7769193992868899, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7292301512651859, 1);
  sqcRYGate(q, -1.2354531678052103, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6308557591542971, 1);
  sqcRYGate(q, -2.3502525585928793, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8273430312544867, 2);
  sqcRYGate(q, -0.807524982733878, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9216747351382684, 2);
  sqcRYGate(q, 2.1494023375402977, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.369940202357521, 0);
  sqcRYGate(q, 0.07938381599660811, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.253296173451883, 0);
  sqcRYGate(q, 3.024109666903763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6642624036354068, 0);
  sqcRYGate(q, 1.2185141454302313, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9593103739013773, 0);
  sqcRYGate(q, -0.5508806962372963, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8764771223734948, 0);
  sqcRYGate(q, 0.012998681264123846, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5966901442572026, 0);
  sqcRYGate(q, 1.9113080589631184, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.738440552433378, 1);
  sqcRYGate(q, 1.1874172811090942, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9892616432466738, 1);
  sqcRYGate(q, -1.9141140048784935, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9398945259701286, 1);
  sqcRYGate(q, 2.5840948440269393, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2006841993980424, 1);
  sqcRYGate(q, -2.981396732682608, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.23677927159848303, 2);
  sqcRYGate(q, 0.15972877141753106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9395098675225659, 2);
  sqcRYGate(q, -3.0749733433154693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1141185456087994, 0);
  sqcRYGate(q, 1.3729717698098935, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.090430455324436, 0);
  sqcRYGate(q, 2.089678864610402, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5686083175220307, 0);
  sqcRYGate(q, -1.7903534780793187, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8123644180258256, 0);
  sqcRYGate(q, -0.8355364208302485, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0860689177136633, 0);
  sqcRYGate(q, 1.3202008729977746, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.35210934250233983, 0);
  sqcRYGate(q, 2.4782879729377654, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4131090987762305, 1);
  sqcRYGate(q, -2.2126422446347824, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7591212334461455, 1);
  sqcRYGate(q, 1.636531554665222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.30266174641043353, 1);
  sqcRYGate(q, -2.9056191645975153, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.14699251266568594, 1);
  sqcRYGate(q, -0.29224575029271715, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7300825501190573, 2);
  sqcRYGate(q, 1.1599382456059724, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1850805060092666, 2);
  sqcRYGate(q, -2.4188030639877405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.24640352647316277, 0);
  sqcRYGate(q, -2.5769969625957043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7139703822027217, 0);
  sqcRYGate(q, -2.2049415798522585, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.482961582838062, 0);
  sqcRYGate(q, -2.2492118421526266, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6820561946725512, 0);
  sqcRYGate(q, -1.7080512986686258, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6721729491933681, 0);
  sqcRYGate(q, -1.0928144240892375, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5226281608065513, 0);
  sqcRYGate(q, -2.791643628141493, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6892808219537097, 1);
  sqcRYGate(q, -1.038153010850273, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4326532442711537, 1);
  sqcRYGate(q, 0.647561886033072, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7895813802299703, 1);
  sqcRYGate(q, 2.861829527991098, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4299407088344538, 1);
  sqcRYGate(q, -2.3076740981357307, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9036508736174015, 2);
  sqcRYGate(q, 1.078101325304221, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2138276549899205, 2);
  sqcRYGate(q, 1.5118548978911528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2219541270765095, 0);
  sqcRYGate(q, -1.0983075929898105, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4415796569564173, 0);
  sqcRYGate(q, 2.479879611830629, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.557033256673737, 0);
  sqcRYGate(q, -2.346525410445772, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2783387187469094, 0);
  sqcRYGate(q, 2.2341707576138736, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3589324812150583, 0);
  sqcRYGate(q, 2.9447766504829618, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3576614590040592, 0);
  sqcRYGate(q, -0.2586206094037869, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0270522147239083, 1);
  sqcRYGate(q, 0.7182359554841934, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8410243193596223, 1);
  sqcRYGate(q, 2.9212483220729912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0858008776365784, 1);
  sqcRYGate(q, 1.1017700336581726, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4308798563540566, 1);
  sqcRYGate(q, 1.488462028318649, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.18401238040103163, 2);
  sqcRYGate(q, -2.832026083504148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0010444758247248032, 2);
  sqcRYGate(q, -2.908533167043955, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.827370703363796, 0);
  sqcRYGate(q, -0.7409570193703576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5600734703884165, 0);
  sqcRYGate(q, 2.0785809492017457, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6645274618259283, 0);
  sqcRYGate(q, -2.729606645298119, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7898013125887697, 0);
  sqcRYGate(q, 1.4139195665535924, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9875061318911341, 0);
  sqcRYGate(q, 2.959263695047179, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9181193709673954, 0);
  sqcRYGate(q, 2.6606347240458343, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.49520516196786174, 1);
  sqcRYGate(q, -0.23298909911448185, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4664202296318649, 1);
  sqcRYGate(q, -2.092370874367128, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5949553249299111, 1);
  sqcRYGate(q, -2.1048653752642426, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4234959868450643, 1);
  sqcRYGate(q, -2.786643133715842, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4775435006045081, 2);
  sqcRYGate(q, -0.14083743852652475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0493769137468596, 2);
  sqcRYGate(q, -3.119051774995454, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1933167395679543, 0);
  sqcRYGate(q, -0.9034021234260906, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6936177767410554, 0);
  sqcRYGate(q, 0.8081146000627514, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7221326490187017, 0);
  sqcRYGate(q, 2.174999266123876, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0729131426086522, 0);
  sqcRYGate(q, -1.995358433350404, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.331625537195587, 0);
  sqcRYGate(q, -0.6068783293825897, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6366420345144399, 0);
  sqcRYGate(q, 0.5364450623754956, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.511966825732874, 1);
  sqcRYGate(q, 1.1795600754895066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.865101388711934, 1);
  sqcRYGate(q, -2.2301123247165338, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2905272711815277, 1);
  sqcRYGate(q, 0.6565884079835435, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.396925232998765, 1);
  sqcRYGate(q, -2.732268632109648, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7962734438696888, 2);
  sqcRYGate(q, -1.4623831639445903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.236035714450728, 2);
  sqcRYGate(q, -1.00196298639701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8682260138227265, 0);
  sqcRYGate(q, -2.702322426915586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.085949039341266, 0);
  sqcRYGate(q, 0.8011464546334919, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1794661944340152, 0);
  sqcRYGate(q, -2.3461005092346556, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.700427164892399, 0);
  sqcRYGate(q, -0.9269152507266334, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.16104375595193868, 0);
  sqcRYGate(q, -1.3625983318477575, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.827517436848152, 0);
  sqcRYGate(q, -2.405217857288096, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.243652536842225, 1);
  sqcRYGate(q, 1.9680839213360146, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3880274319744027, 1);
  sqcRYGate(q, 1.082770321706963, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1527262471766355, 1);
  sqcRYGate(q, -1.8267755583063192, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8329663474816718, 1);
  sqcRYGate(q, -2.050253164227463, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0568894571501217, 2);
  sqcRYGate(q, -2.607219798976614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9955499510768977, 2);
  sqcRYGate(q, 0.777389727769175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6808252429180595, 0);
  sqcRYGate(q, 0.5688717958664693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9210268714340396, 0);
  sqcRYGate(q, -2.6018116283425043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.193660072063281, 0);
  sqcRYGate(q, 0.39490581907582367, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5697461650562881, 0);
  sqcRYGate(q, -0.9183777697013454, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.814471423991036, 0);
  sqcRYGate(q, 2.5127946379603046, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5315425598029382, 0);
  sqcRYGate(q, -2.281713064362884, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.22740374580710135, 1);
  sqcRYGate(q, -1.0815103199589442, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0970054753858705, 1);
  sqcRYGate(q, 1.4571683413534968, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.49615159649112606, 1);
  sqcRYGate(q, 0.43743467725985946, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8878939223232654, 1);
  sqcRYGate(q, 2.59343078514216, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9058436469394104, 2);
  sqcRYGate(q, -0.6490938279652054, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3449825421902473, 2);
  sqcRYGate(q, -2.7288522993940676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.052822804617909, 0);
  sqcRYGate(q, -0.26771106493186014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07709273853455301, 0);
  sqcRYGate(q, -1.5933302013050357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8902151265817428, 0);
  sqcRYGate(q, -1.199994019322519, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.671506769225995, 0);
  sqcRYGate(q, -0.31379408756820165, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3871866903652483, 0);
  sqcRYGate(q, 0.6709297036193984, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.149108288187476, 0);
  sqcRYGate(q, -2.2328790014166957, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8451179004902563, 1);
  sqcRYGate(q, -1.2043729525196807, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7718386142953237, 1);
  sqcRYGate(q, 0.6031479130066181, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4978940056400303, 1);
  sqcRYGate(q, 2.8854638995861457, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.21544575256509102, 1);
  sqcRYGate(q, -1.704060710065253, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3224487022175366, 2);
  sqcRYGate(q, -0.8937033136054462, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2875285130959204, 2);
  sqcRYGate(q, -2.998155129774355, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.036584493578213494, 0);
  sqcRYGate(q, 2.690316606408455, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.008654486766229041, 0);
  sqcRYGate(q, 1.889321263491081, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3303109099116535, 0);
  sqcRYGate(q, -2.0593259901940972, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6281685255773654, 0);
  sqcRYGate(q, -1.7292078859944446, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6514288625708028, 0);
  sqcRYGate(q, 0.17530952144492584, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0272287029589418, 0);
  sqcRYGate(q, 1.8802543579395248, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7929288732231266, 1);
  sqcRYGate(q, 2.481387635200954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4738034587971552, 1);
  sqcRYGate(q, -1.0459305646561123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.48482436965003184, 1);
  sqcRYGate(q, 0.28469302828375653, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7297510252804882, 1);
  sqcRYGate(q, 2.7427167590295407, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9133455052930531, 2);
  sqcRYGate(q, 2.4157146266651894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.268609643824268, 2);
  sqcRYGate(q, 0.7378643134377878, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.065030734277257, 0);
  sqcRYGate(q, -0.4947430918413696, 1);
  sqcRYGate(q, 0.22011689233485401, 2);
  sqcRYGate(q, -2.4591551334887893, 3);

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
