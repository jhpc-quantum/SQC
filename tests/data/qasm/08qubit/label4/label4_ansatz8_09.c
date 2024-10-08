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

  sqcRYGate(q, -2.6849628411703588, 0);
  sqcRYGate(q, -1.6978222251318105, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7399583419926747, 0);
  sqcRYGate(q, 1.2141443818116988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1713051446571576, 2);
  sqcRYGate(q, 1.7924065967859804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7948232850158123, 2);
  sqcRYGate(q, -2.0486711785135334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.417138177243304, 4);
  sqcRYGate(q, -0.6842976817094931, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.055755229834337, 4);
  sqcRYGate(q, 2.899548191795123, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.786642988787809, 6);
  sqcRYGate(q, 1.5898936071125245, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5413901710277758, 6);
  sqcRYGate(q, -2.192896778867371, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1182497647025618, 0);
  sqcRYGate(q, -1.3947381220805566, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3595627691004848, 0);
  sqcRYGate(q, -0.1867201387468107, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.11305215345737588, 2);
  sqcRYGate(q, -0.8055174193186726, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0890038578113037, 2);
  sqcRYGate(q, 1.8328590219804417, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.6220130807621131, 4);
  sqcRYGate(q, -0.9908937092384156, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7199674940237708, 4);
  sqcRYGate(q, -2.8296462790748302, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.647108089744358, 1);
  sqcRYGate(q, 2.0914128675034656, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4753405886774744, 1);
  sqcRYGate(q, 1.4743343684646497, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6782646159210755, 3);
  sqcRYGate(q, -0.5802692603630751, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.6919804464675785, 3);
  sqcRYGate(q, 2.431325876657089, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.19349579759518587, 5);
  sqcRYGate(q, -0.3874436506261656, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.3896194041733594, 5);
  sqcRYGate(q, 0.6174687584362912, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.33361323935360576, 0);
  sqcRYGate(q, -3.0135390938209596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4982730987862269, 0);
  sqcRYGate(q, 3.102632905617563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8115879622740687, 2);
  sqcRYGate(q, -1.8066762262096028, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7063572687743632, 2);
  sqcRYGate(q, -0.186084041593368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.44096410427965554, 4);
  sqcRYGate(q, -0.9206150495676778, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9072007828197766, 4);
  sqcRYGate(q, 0.7587932518904474, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6280401126148352, 6);
  sqcRYGate(q, -3.1052089485339494, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0358818878620033, 6);
  sqcRYGate(q, -0.5506710358072395, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6220032474995087, 0);
  sqcRYGate(q, -2.52239733381067, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1968339246604591, 0);
  sqcRYGate(q, 1.6816677417529722, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9782024554753614, 2);
  sqcRYGate(q, -2.9872883618434343, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.44517543803473897, 2);
  sqcRYGate(q, -2.399140957726172, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.3088845440842323, 4);
  sqcRYGate(q, 3.130365250240786, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.7226381384337044, 4);
  sqcRYGate(q, -1.5712064052936299, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.8787756789681191, 1);
  sqcRYGate(q, -1.5087014246549115, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7175959960096092, 1);
  sqcRYGate(q, -2.5494707493654993, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5406553112401493, 3);
  sqcRYGate(q, 2.9534441644959024, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.9995374757010681, 3);
  sqcRYGate(q, 1.3189112659531848, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.23829206673364478, 5);
  sqcRYGate(q, -1.244266164047784, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.7389867625012376, 5);
  sqcRYGate(q, 1.9728351528383405, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.38108637811551543, 0);
  sqcRYGate(q, -2.214728423090973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8618254216066913, 0);
  sqcRYGate(q, 1.0332705396897715, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8402832499959453, 2);
  sqcRYGate(q, -0.07363242231621728, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7313807089932447, 2);
  sqcRYGate(q, 0.287308248598329, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3644011251338624, 4);
  sqcRYGate(q, -0.26459858895219984, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7488488489923988, 4);
  sqcRYGate(q, -0.13655885611849164, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8808414038208126, 6);
  sqcRYGate(q, 1.2705651215803382, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4692845224875149, 6);
  sqcRYGate(q, -0.25287921864242247, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.594631361546452, 0);
  sqcRYGate(q, -0.038040172241939445, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.631070573699773, 0);
  sqcRYGate(q, -2.0856779685821722, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4660722464740328, 2);
  sqcRYGate(q, 2.9301309681215097, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1048228317419397, 2);
  sqcRYGate(q, -0.06760901229070633, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.764004408619937, 4);
  sqcRYGate(q, 0.8764122335963345, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.753182362814975, 4);
  sqcRYGate(q, -2.0272729119741992, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.0929168814295191, 1);
  sqcRYGate(q, -2.053442635240386, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2052367008848617, 1);
  sqcRYGate(q, 0.9744583689156894, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.560602368630034, 3);
  sqcRYGate(q, -2.847374152484339, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2454900378076714, 3);
  sqcRYGate(q, 2.228236553949432, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8014339011899327, 5);
  sqcRYGate(q, -2.902176988592443, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.9145381074834624, 5);
  sqcRYGate(q, 1.1285557787611171, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.4757033314873292, 0);
  sqcRYGate(q, 0.769824673180671, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3597449317751154, 0);
  sqcRYGate(q, -2.374290052721282, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1021431076372776, 2);
  sqcRYGate(q, 0.25418456891482766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.35467188093850527, 2);
  sqcRYGate(q, 1.5345400970050296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.271796799709327, 4);
  sqcRYGate(q, -0.7882060156391004, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9504834509805938, 4);
  sqcRYGate(q, -0.38175934340951656, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.500236907916305, 6);
  sqcRYGate(q, 1.902068657874489, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9953374298493096, 6);
  sqcRYGate(q, 1.5664892225732694, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.20686223509880133, 0);
  sqcRYGate(q, -1.184317796018576, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0295126296628467, 0);
  sqcRYGate(q, 3.035776367881956, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.12492477880563485, 2);
  sqcRYGate(q, -2.8266703017290506, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.6957122148500137, 2);
  sqcRYGate(q, 0.4268003522710222, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5471302511808076, 4);
  sqcRYGate(q, 0.8097794673699871, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.621749492126896, 4);
  sqcRYGate(q, -0.9664173424149792, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.083578341626808, 1);
  sqcRYGate(q, 3.059159230779694, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.633449840882512, 1);
  sqcRYGate(q, -0.6692070206486188, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.039183840484967, 3);
  sqcRYGate(q, -2.4063863783479413, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.583924592199033, 3);
  sqcRYGate(q, 2.1737816200830844, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.155900362700301, 5);
  sqcRYGate(q, -2.8567471794705694, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.384625335150407, 5);
  sqcRYGate(q, -1.5824330199052945, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.510203299947066, 0);
  sqcRYGate(q, -2.6934735252007003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2988761155048967, 0);
  sqcRYGate(q, -1.6055521541685926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6680048790252979, 2);
  sqcRYGate(q, -1.9744668802666177, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2922198104072993, 2);
  sqcRYGate(q, 2.063681816367812, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8373881977399471, 4);
  sqcRYGate(q, -0.9776392247896344, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4572701274533926, 4);
  sqcRYGate(q, -1.3110246612708734, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3554525549883927, 6);
  sqcRYGate(q, -2.263871274749864, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.07533713320670861, 6);
  sqcRYGate(q, -1.3573138889048737, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.797703462737473, 0);
  sqcRYGate(q, 2.7762578044270496, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.012810619466274, 0);
  sqcRYGate(q, -0.4485173010617052, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9750834895956653, 2);
  sqcRYGate(q, 0.5042065201705981, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.7356188169778806, 2);
  sqcRYGate(q, 0.8151881464289514, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.4258181288956693, 4);
  sqcRYGate(q, 2.623055217272266, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.1980399748014436, 4);
  sqcRYGate(q, 0.7775613319393156, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.3295548980656813, 1);
  sqcRYGate(q, -3.011316245989153, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3387790432214509, 1);
  sqcRYGate(q, 2.04015114294664, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0236155278209984, 3);
  sqcRYGate(q, -2.9312336015604097, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.08127976208581704, 3);
  sqcRYGate(q, -1.8164703250568062, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.4027080800401115, 5);
  sqcRYGate(q, -0.4046856260764816, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.005380450916292, 5);
  sqcRYGate(q, 2.6215439887189294, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.0225765877450077, 0);
  sqcRYGate(q, 0.11855513000498473, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4252087779961475, 0);
  sqcRYGate(q, 1.597011021096539, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9989009227951584, 2);
  sqcRYGate(q, 0.7606422516557646, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.202243830399045, 2);
  sqcRYGate(q, -2.829077881013015, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1039179548707905, 4);
  sqcRYGate(q, -3.113896746757515, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1383589816077713, 4);
  sqcRYGate(q, 0.09251948872405873, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8129159913241529, 6);
  sqcRYGate(q, -1.8989668204318466, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.972810420831329, 6);
  sqcRYGate(q, -2.1240871037315636, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2858648272452013, 0);
  sqcRYGate(q, 2.6849467010200803, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.639763361781921, 0);
  sqcRYGate(q, -0.24631945201735483, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.029220047594308, 2);
  sqcRYGate(q, 2.4262434124074743, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.0647812623240132, 2);
  sqcRYGate(q, -0.7560067319349741, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1712747706494337, 4);
  sqcRYGate(q, -2.0562831711247687, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.1126111206665268, 4);
  sqcRYGate(q, -2.437618672883049, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.337845001646998, 1);
  sqcRYGate(q, -2.589458738261875, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.020235853209224, 1);
  sqcRYGate(q, 2.667903261279018, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9114724571778083, 3);
  sqcRYGate(q, 1.2679187175816704, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.9972735229988813, 3);
  sqcRYGate(q, -2.4120559994564896, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7124977390698128, 5);
  sqcRYGate(q, -0.8059779739296289, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7444202855159163, 5);
  sqcRYGate(q, 2.44266575653017, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.4614527302555067, 0);
  sqcRYGate(q, -1.480290246328428, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.413619173231974, 0);
  sqcRYGate(q, -2.1902581428095083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6870067339731758, 2);
  sqcRYGate(q, 0.5128929950045524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.43885086518356176, 2);
  sqcRYGate(q, -0.6026620852765369, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.273858923676059, 4);
  sqcRYGate(q, -2.3215582381266264, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1498977660783325, 4);
  sqcRYGate(q, 0.9012846621095365, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3594247698795838, 6);
  sqcRYGate(q, -1.0315532619769305, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0319869559720661, 6);
  sqcRYGate(q, -0.0651658545474705, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1718784773003712, 0);
  sqcRYGate(q, -1.521626474254587, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.490816215294152, 0);
  sqcRYGate(q, 2.230095197890516, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.17913241181056705, 2);
  sqcRYGate(q, 1.6609477147988843, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.2958329995163838, 2);
  sqcRYGate(q, 0.13933867351069296, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.1162316944567334, 4);
  sqcRYGate(q, -0.43878084002858597, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4510003411893049, 4);
  sqcRYGate(q, -1.0833336820532216, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3572567591020732, 1);
  sqcRYGate(q, -0.2115841110762142, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4485807808719713, 1);
  sqcRYGate(q, 2.7729683865972548, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7331390895670706, 3);
  sqcRYGate(q, -0.574514432396634, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6432120321666023, 3);
  sqcRYGate(q, 0.8494362176781829, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.3218576499904655, 5);
  sqcRYGate(q, 0.34300777396267595, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.5447623123809477, 5);
  sqcRYGate(q, -2.169516510224853, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.3737429697198165, 0);
  sqcRYGate(q, -1.3382647892264623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0583752724764857, 0);
  sqcRYGate(q, -0.14512360286049653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.43687889209623165, 2);
  sqcRYGate(q, 0.7129135505183265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5423331910916167, 2);
  sqcRYGate(q, -1.357798032463183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14105465280903393, 4);
  sqcRYGate(q, -2.6625032655646983, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9952394087457845, 4);
  sqcRYGate(q, 2.9100538670163276, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9271640820208766, 6);
  sqcRYGate(q, 0.100090119608085, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.723351009204756, 6);
  sqcRYGate(q, 0.11643801978419964, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.666906819664804, 0);
  sqcRYGate(q, 2.3166196991533767, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5800285614483868, 0);
  sqcRYGate(q, -1.3071084330052951, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5324503899853277, 2);
  sqcRYGate(q, 1.1621749099449499, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5668243945257789, 2);
  sqcRYGate(q, 1.2198119943594774, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.4472828166173457, 4);
  sqcRYGate(q, -1.7916982360615172, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.9866409792633506, 4);
  sqcRYGate(q, -1.8558691252056603, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.5264323377523645, 1);
  sqcRYGate(q, 1.2558219146066463, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.056328341646639, 1);
  sqcRYGate(q, -2.6085957012520677, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7263171065946592, 3);
  sqcRYGate(q, 1.781103595390496, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.9968432095691515, 3);
  sqcRYGate(q, 1.0108515289425903, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.135158205594882, 5);
  sqcRYGate(q, -2.598120942009581, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.119808590174516, 5);
  sqcRYGate(q, 1.5306777124691457, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.476782530277256, 0);
  sqcRYGate(q, -0.19672920752767817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5885502638361239, 0);
  sqcRYGate(q, -0.8433257896932874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9544098286468063, 2);
  sqcRYGate(q, -0.7523065063925437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4547730862595945, 2);
  sqcRYGate(q, -0.9892621459683629, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.960676683622291, 4);
  sqcRYGate(q, -2.511708371138397, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0649358190101266, 4);
  sqcRYGate(q, 1.921384219913324, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2274027714489247, 6);
  sqcRYGate(q, -0.6508334374936118, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3567810946284684, 6);
  sqcRYGate(q, -1.366998532971932, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2742960017177083, 0);
  sqcRYGate(q, 1.3373002589031344, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5836500974203815, 0);
  sqcRYGate(q, 0.7525206995452525, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.087702771316532, 2);
  sqcRYGate(q, 1.4289206842449975, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5901780989734629, 2);
  sqcRYGate(q, -1.7544884842107573, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.0979490557560185, 4);
  sqcRYGate(q, -2.6697244255981127, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.364763858998154, 4);
  sqcRYGate(q, -0.026843253742796946, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.8442557548249674, 1);
  sqcRYGate(q, -1.9116716554186353, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.714107545054632, 1);
  sqcRYGate(q, 1.6884734451759946, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7298383439070588, 3);
  sqcRYGate(q, -1.601733247119874, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.0624600988471786, 3);
  sqcRYGate(q, 0.27479068335482904, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7931979557225316, 5);
  sqcRYGate(q, 0.8939105816489947, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.3957490301019013, 5);
  sqcRYGate(q, 1.9267398586492614, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.529263440335418, 0);
  sqcRYGate(q, 1.5421143588196704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.884385754618751, 0);
  sqcRYGate(q, 2.6997635741202446, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8025501931042518, 2);
  sqcRYGate(q, 1.9775970049506544, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0092038224937745, 2);
  sqcRYGate(q, 2.703152543428098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.112601804155866, 4);
  sqcRYGate(q, 1.8053229512878826, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6851724639840535, 4);
  sqcRYGate(q, -0.9199021247888642, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6082347776486556, 6);
  sqcRYGate(q, 2.3885641126716455, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7141610297795173, 6);
  sqcRYGate(q, -2.6353321490293924, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0505627117245786, 0);
  sqcRYGate(q, -2.5949787685224464, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5264379989222521, 0);
  sqcRYGate(q, -2.8927202173794626, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7574639792809776, 2);
  sqcRYGate(q, -2.784637194227065, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.426054209453269, 2);
  sqcRYGate(q, -1.9374575707862118, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.505319438322001, 4);
  sqcRYGate(q, 2.3642312331347224, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2118285287647046, 4);
  sqcRYGate(q, 0.6190232137695952, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.8535322665774447, 1);
  sqcRYGate(q, 1.8573568494835628, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2692842340153936, 1);
  sqcRYGate(q, -0.5938580608913673, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.818339859636886, 3);
  sqcRYGate(q, -2.136525379530662, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.751508073932287, 3);
  sqcRYGate(q, 0.5191951114322215, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.24322075314808075, 5);
  sqcRYGate(q, -0.9175668803216459, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.9454594222720485, 5);
  sqcRYGate(q, -0.06310685954655566, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.24741533591382137, 0);
  sqcRYGate(q, -0.7802334579865908, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7428615003506565, 0);
  sqcRYGate(q, 1.37501563380074, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.350517019191406, 2);
  sqcRYGate(q, 2.5848737681291265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.04475946502488348, 2);
  sqcRYGate(q, 1.3106530983254945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5425555158674955, 4);
  sqcRYGate(q, -2.7219899257724665, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8205125992387, 4);
  sqcRYGate(q, -1.9312906017059692, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6658980191771837, 6);
  sqcRYGate(q, -1.8721751007038518, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7434080007050747, 6);
  sqcRYGate(q, 2.1988680768131976, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8235221845158398, 0);
  sqcRYGate(q, 1.3439458600056797, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0207745907836285, 0);
  sqcRYGate(q, 0.49665591858914043, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1765536874343083, 2);
  sqcRYGate(q, 1.4296759555291931, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.434531822604491, 2);
  sqcRYGate(q, -0.45787815447488905, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.9790440676636131, 4);
  sqcRYGate(q, -0.39882058830978195, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.14681582781432828, 4);
  sqcRYGate(q, 2.464959961865008, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.3479490701259111, 1);
  sqcRYGate(q, 1.652134243674005, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5831184038703218, 1);
  sqcRYGate(q, -1.7068952594475757, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.545768027908264, 3);
  sqcRYGate(q, 1.2539511854425651, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.5744235292786, 3);
  sqcRYGate(q, -1.569366944593388, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.2369801188390331, 5);
  sqcRYGate(q, 1.4238564941876177, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.322165994395687, 5);
  sqcRYGate(q, -2.048764829343426, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.4685985788660294, 0);
  sqcRYGate(q, 2.832196755748478, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.35120313095265415, 0);
  sqcRYGate(q, 0.5053286118904383, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6016203168462883, 2);
  sqcRYGate(q, -0.8351724497051903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.197981681014104, 2);
  sqcRYGate(q, 0.018939056534175405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8820700366960412, 4);
  sqcRYGate(q, 0.9536835375904769, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.070135988839227, 4);
  sqcRYGate(q, -1.1661706561405687, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.01347196878237, 6);
  sqcRYGate(q, -2.5416162460277376, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4888913198239724, 6);
  sqcRYGate(q, -2.1277228471457583, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1533694461267894, 0);
  sqcRYGate(q, -1.596662260136442, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.340311963664793, 0);
  sqcRYGate(q, 0.3508936659763468, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.777717621037709, 2);
  sqcRYGate(q, -1.4125911721085347, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5374402804109237, 2);
  sqcRYGate(q, 2.7481113877022847, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.5105580133665785, 4);
  sqcRYGate(q, 3.0198737869205217, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.1301808318952404, 4);
  sqcRYGate(q, 0.622079802381899, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.7198166876216607, 1);
  sqcRYGate(q, -1.3066842684046884, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5450084311316017, 1);
  sqcRYGate(q, 0.8219508690100574, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6036978108652185, 3);
  sqcRYGate(q, -1.1170281980621133, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7282646472334484, 3);
  sqcRYGate(q, 2.3265803211654568, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3235967077968858, 5);
  sqcRYGate(q, 2.8861236670044783, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.4665125995393358, 5);
  sqcRYGate(q, 2.723455610540606, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7453108522250647, 0);
  sqcRYGate(q, 1.589394917364677, 1);
  sqcRYGate(q, -1.682305157543988, 2);
  sqcRYGate(q, 1.7846427023546436, 3);
  sqcRYGate(q, -1.103863592203593, 4);
  sqcRYGate(q, 0.26882350086315027, 5);
  sqcRYGate(q, 2.17865434479124, 6);
  sqcRYGate(q, -0.8988789047151347, 7);

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
