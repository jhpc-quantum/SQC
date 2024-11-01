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

  sqcRYGate(q, 2.779688719670402, 0);
  sqcRYGate(q, -0.3552607194991692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.19255536947786567, 0);
  sqcRYGate(q, -0.5048181302574024, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8248356926583836, 1);
  sqcRYGate(q, -1.4902803366722805, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1526405670731243, 1);
  sqcRYGate(q, -1.2589947315210281, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.064566371283442, 2);
  sqcRYGate(q, -1.6733345587237727, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.682551035586796, 2);
  sqcRYGate(q, 1.3574323155101735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7108859646671972, 0);
  sqcRYGate(q, -3.0703396666086062, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17067168378875044, 0);
  sqcRYGate(q, -1.985834626472847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8073003120741705, 1);
  sqcRYGate(q, -2.614875081796885, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.30006943960263, 1);
  sqcRYGate(q, 0.9516103013247239, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7532132047619162, 2);
  sqcRYGate(q, -2.561000597863606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0115348466635163, 2);
  sqcRYGate(q, -0.7233779246015146, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5109082568405807, 0);
  sqcRYGate(q, 1.2675741385018853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7103459414391011, 0);
  sqcRYGate(q, 2.0153523864996536, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5612439655755295, 1);
  sqcRYGate(q, 0.16363357796490333, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7841436492601916, 1);
  sqcRYGate(q, -1.2386092199750243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.793857603757753, 2);
  sqcRYGate(q, 0.5712511809196208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.17125626491189233, 2);
  sqcRYGate(q, -0.3712460076459791, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.973963919694162, 0);
  sqcRYGate(q, -1.029253701260715, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2030414482226315, 0);
  sqcRYGate(q, -2.9320624496322214, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0035171351212025664, 1);
  sqcRYGate(q, -0.9291714014387402, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6981776226649532, 1);
  sqcRYGate(q, -0.6830675903325034, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.996248124489778, 2);
  sqcRYGate(q, -2.7913002222248533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.589949710501014, 2);
  sqcRYGate(q, -1.155933404378265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2811185010195745, 0);
  sqcRYGate(q, 2.1769636354702473, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7230853784512663, 0);
  sqcRYGate(q, 2.690800886430599, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.296342715958756, 1);
  sqcRYGate(q, -2.8428936599137016, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4054930483571195, 1);
  sqcRYGate(q, -2.960145312603055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4771299686121201, 2);
  sqcRYGate(q, 1.8292769688273982, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.074765128931186, 2);
  sqcRYGate(q, -0.4608518773293877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8789857235581234, 0);
  sqcRYGate(q, 1.1462741127112057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.19936537994137016, 0);
  sqcRYGate(q, -2.9343823835048863, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.52887718339049, 1);
  sqcRYGate(q, -0.015173223510958955, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9191284116813407, 1);
  sqcRYGate(q, -2.5651296028087978, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.43724387626266026, 2);
  sqcRYGate(q, 2.728545758996321, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.827094547897246, 2);
  sqcRYGate(q, 0.7026296663408491, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1394586933738982, 0);
  sqcRYGate(q, 0.1724252010784274, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6419003187967909, 0);
  sqcRYGate(q, -2.3546168457414347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1705164926461338, 1);
  sqcRYGate(q, 0.09406888251142743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5178016009319109, 1);
  sqcRYGate(q, 0.7849022013967683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2830874304250983, 2);
  sqcRYGate(q, -1.3406457582002784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3206815456293888, 2);
  sqcRYGate(q, -3.0951755696538052, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7501802459192692, 0);
  sqcRYGate(q, 2.6298817761330953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6302674496061673, 0);
  sqcRYGate(q, 1.5298580434712656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.31892642753414796, 1);
  sqcRYGate(q, -1.2224658222082938, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9875860204973996, 1);
  sqcRYGate(q, 2.837226725940952, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3903356243537024, 2);
  sqcRYGate(q, -1.8484237773602965, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.16695271586719168, 2);
  sqcRYGate(q, -0.15043150298926733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.210426483551701, 0);
  sqcRYGate(q, 0.4666879741037713, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.21558273109377, 0);
  sqcRYGate(q, 1.1869851139347762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.36036954389311, 1);
  sqcRYGate(q, -1.2507531912314231, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3908415305507138, 1);
  sqcRYGate(q, 1.1035640340108648, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0050114510462058, 2);
  sqcRYGate(q, 1.8686787862099739, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.799923974512249, 2);
  sqcRYGate(q, -2.972295814429605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.446534702943028, 0);
  sqcRYGate(q, -0.914962797348373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5628528153837662, 0);
  sqcRYGate(q, 0.41163079805540814, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.771949444229813, 1);
  sqcRYGate(q, -3.073383135343914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1447740010903766, 1);
  sqcRYGate(q, -2.8003783247898983, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9075566093428993, 2);
  sqcRYGate(q, -0.2245834464616383, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8843841905789596, 2);
  sqcRYGate(q, -1.1114341711814877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.47598939895288966, 0);
  sqcRYGate(q, -2.9549119265900248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.563673965629779, 0);
  sqcRYGate(q, -0.3210775661780627, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0589227195995479, 1);
  sqcRYGate(q, -2.1417961204482827, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.46643468476697, 1);
  sqcRYGate(q, 1.3269118269505444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4182470209633256, 2);
  sqcRYGate(q, 1.2800499606562268, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0443961547242964, 2);
  sqcRYGate(q, -2.365110368379463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8520146820064696, 0);
  sqcRYGate(q, -0.38534490313953146, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7753421812653634, 0);
  sqcRYGate(q, 2.0375670348499613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0202920657593335, 1);
  sqcRYGate(q, -0.6701427681583363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.29933900967270244, 1);
  sqcRYGate(q, 0.8277400979548863, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8736850941522398, 2);
  sqcRYGate(q, 2.907038798689945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7308739780005648, 2);
  sqcRYGate(q, 1.9419613294015416, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0650062676644585, 0);
  sqcRYGate(q, 0.5508699746786396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7588948798723862, 0);
  sqcRYGate(q, 3.0104584655178983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0636071842003085, 1);
  sqcRYGate(q, 2.06301513366288, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.249314697834895, 1);
  sqcRYGate(q, 0.9863314192311232, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10216114135927246, 2);
  sqcRYGate(q, -2.8892284832115207, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.041709718747582336, 2);
  sqcRYGate(q, -2.6253033109765638, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0648055900085653, 0);
  sqcRYGate(q, -2.1183503914146327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9184782755872272, 0);
  sqcRYGate(q, -1.7227733484209877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5301064936430633, 1);
  sqcRYGate(q, -2.7440963649135077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14804099298624315, 1);
  sqcRYGate(q, -2.585524790413144, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7293161257599026, 2);
  sqcRYGate(q, 1.2993478270906518, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3177121699626277, 2);
  sqcRYGate(q, -2.476129824376735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9353138031497554, 0);
  sqcRYGate(q, 2.948293396282794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.29198659416799, 0);
  sqcRYGate(q, -2.9104723647660045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4566810775396126, 1);
  sqcRYGate(q, -0.5707053563127831, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5902063924546432, 1);
  sqcRYGate(q, -1.208725691279696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03377106784913141, 2);
  sqcRYGate(q, -1.7905528132650357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.19534662965127517, 2);
  sqcRYGate(q, 2.5547104400640714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4771441892951283, 0);
  sqcRYGate(q, -2.128313274136123, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6418801303039778, 0);
  sqcRYGate(q, -1.6689215353805933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6462501452542435, 1);
  sqcRYGate(q, 0.8400778257851741, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7000769468110897, 1);
  sqcRYGate(q, 2.712463008669388, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0881488801534487, 2);
  sqcRYGate(q, 1.0527175917555784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.369640102762304, 2);
  sqcRYGate(q, -0.20987234726133844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.792227747092608, 0);
  sqcRYGate(q, 1.1727427488400475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9765720732466844, 0);
  sqcRYGate(q, 2.0741208733092007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2461962079404296, 1);
  sqcRYGate(q, 2.0908519912787846, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.459503624723275, 1);
  sqcRYGate(q, -1.9857374863053376, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7024134893836314, 2);
  sqcRYGate(q, -2.0705835234574144, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7175831257204526, 2);
  sqcRYGate(q, 0.403441252841799, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.907896533062185, 0);
  sqcRYGate(q, -2.409654427435359, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0241620503870212, 0);
  sqcRYGate(q, -0.9286728019440338, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5037018369242343, 1);
  sqcRYGate(q, 1.5550763868736304, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9248622241752509, 1);
  sqcRYGate(q, -1.120977783806812, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3935503753812206, 2);
  sqcRYGate(q, -0.2955450595348008, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2668928256456464, 2);
  sqcRYGate(q, 0.6876979377717651, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.15862603652009177, 0);
  sqcRYGate(q, -0.3275198729579649, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.227990298531398, 0);
  sqcRYGate(q, -0.5767639836441099, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.331748953971645, 1);
  sqcRYGate(q, -2.6164669264735947, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5518852578437876, 1);
  sqcRYGate(q, 0.24046714162921065, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7796899663156713, 2);
  sqcRYGate(q, -2.66330277576448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.66674289811621, 2);
  sqcRYGate(q, -2.5740156656886937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3764943723176453, 0);
  sqcRYGate(q, 0.8404601745641846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2143932282683226, 0);
  sqcRYGate(q, -0.2617276076760034, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1226865684285974, 1);
  sqcRYGate(q, -1.6590947448275761, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.873628043491361, 1);
  sqcRYGate(q, 1.8622885032338203, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7379021392179625, 2);
  sqcRYGate(q, 0.1472264908857701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6679928148582954, 2);
  sqcRYGate(q, 2.717833638184853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7547817709940452, 0);
  sqcRYGate(q, 2.2407126429536324, 1);
  sqcRYGate(q, 0.4004343694841648, 2);
  sqcRYGate(q, 2.264805190308416, 3);

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
