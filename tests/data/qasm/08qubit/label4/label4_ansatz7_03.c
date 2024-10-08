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

  sqcRYGate(q, -0.8123204524835854, 0);
  sqcRYGate(q, -1.256496459205457, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7321587474238878, 0);
  sqcRYGate(q, -2.628110535279013, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.902639226313694, 0);
  sqcRYGate(q, -1.8089484027296772, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9954907611057605, 0);
  sqcRYGate(q, 0.6064756925114341, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7343579387777361, 0);
  sqcRYGate(q, 1.9001195534380235, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2466186897754576, 0);
  sqcRYGate(q, -1.8830253557176615, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.641185815243988, 0);
  sqcRYGate(q, 1.78706641219273, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 1.3067278866448166, 0);
  sqcRYGate(q, 1.1136047424584574, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -0.5909951430431633, 0);
  sqcRYGate(q, 0.9446440403178722, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -2.229867175741758, 0);
  sqcRYGate(q, 1.9878574256328465, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 2.06279345027977, 0);
  sqcRYGate(q, -2.4627289982494642, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -2.164580676277665, 0);
  sqcRYGate(q, 1.0666801563083261, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -2.9091112117545195, 0);
  sqcRYGate(q, 1.635298744846328, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 2.834145577103981, 0);
  sqcRYGate(q, 0.436625908889094, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -0.5273419058572589, 1);
  sqcRYGate(q, 1.0994341081651995, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6683486483237685, 1);
  sqcRYGate(q, 1.652032207652276, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.42990947501352306, 1);
  sqcRYGate(q, 0.27910796549113664, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.308459724040315, 1);
  sqcRYGate(q, 0.9133595866915186, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3130858031109272, 1);
  sqcRYGate(q, -1.239826707824541, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 2.475023271210157, 1);
  sqcRYGate(q, -2.920415668294002, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 1.7541401837395378, 1);
  sqcRYGate(q, 0.8658852410479501, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -2.1991399980604966, 1);
  sqcRYGate(q, -1.8121836718160278, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 2.4716581546958603, 1);
  sqcRYGate(q, -0.8127825361934385, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 0.6938747521756798, 1);
  sqcRYGate(q, -0.7017825868034591, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -1.3166473575551925, 1);
  sqcRYGate(q, -1.1538954402668031, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 0.6892747690475046, 1);
  sqcRYGate(q, 2.2380405569891346, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 1.1284640845590603, 2);
  sqcRYGate(q, 1.8601547172294353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9297575405393439, 2);
  sqcRYGate(q, 2.0113672176308164, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.330708356162143, 2);
  sqcRYGate(q, 2.7015352116866227, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.4275435656822971, 2);
  sqcRYGate(q, 2.6467179950596393, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.01974745404644906, 2);
  sqcRYGate(q, -1.6763089676672667, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.3973897485834513, 2);
  sqcRYGate(q, 1.1307619033991512, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.501729703425605, 2);
  sqcRYGate(q, 2.5848015816352805, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 2.0860099654780626, 2);
  sqcRYGate(q, -2.426318095611875, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 2.365906240149398, 2);
  sqcRYGate(q, 2.717460284089449, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 2.1638317942368923, 2);
  sqcRYGate(q, 0.22852509566827695, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -1.0826807340493199, 3);
  sqcRYGate(q, -2.2010299150935966, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0839016000246655, 3);
  sqcRYGate(q, -2.6956700305067476, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9415075761591045, 3);
  sqcRYGate(q, -2.859199557648619, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.901565395468523, 3);
  sqcRYGate(q, 1.5313175212885104, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.775211893121782, 3);
  sqcRYGate(q, 0.19673107391196568, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -2.521268184752401, 3);
  sqcRYGate(q, 0.12375013892565494, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -2.413971686070992, 3);
  sqcRYGate(q, 0.255291661333127, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 1.1582966411803692, 3);
  sqcRYGate(q, 1.8343372387098011, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -1.4343599396759696, 4);
  sqcRYGate(q, -3.0067769147107497, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.309765487351075, 4);
  sqcRYGate(q, -1.1610243754211245, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5203188245760841, 4);
  sqcRYGate(q, -2.1290496520939524, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.5624994880943595, 4);
  sqcRYGate(q, 0.1751540757050858, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.926205179921715, 4);
  sqcRYGate(q, -0.28567843034960383, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.9303020079121378, 4);
  sqcRYGate(q, 3.0516947920839557, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.809008067381685, 5);
  sqcRYGate(q, -2.2751125017910967, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.199275035782371, 5);
  sqcRYGate(q, -3.057947064210325, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.13403076852352233, 5);
  sqcRYGate(q, -0.4574538181942689, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.40677488212782925, 5);
  sqcRYGate(q, -2.414169356242821, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.6485627938309257, 6);
  sqcRYGate(q, 0.6032034983702305, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.89826867612142, 6);
  sqcRYGate(q, -1.612785998328533, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6036983395990467, 0);
  sqcRYGate(q, -1.5763204667270436, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9829266737851875, 0);
  sqcRYGate(q, -2.332125776843287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11028741359811267, 0);
  sqcRYGate(q, -1.5562397442240767, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.280677223475111, 0);
  sqcRYGate(q, -0.32069565213824625, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7071984291019717, 0);
  sqcRYGate(q, -0.4104363674703899, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.724910861854796, 0);
  sqcRYGate(q, 0.5415536827503821, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5883032752177622, 0);
  sqcRYGate(q, 2.4440387840569335, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -2.366253404755884, 0);
  sqcRYGate(q, -0.9148436535375737, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -2.7225395025095924, 0);
  sqcRYGate(q, -0.5640924793442225, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -2.5001080270718825, 0);
  sqcRYGate(q, -2.525419475617332, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 2.1314608606108245, 0);
  sqcRYGate(q, -0.385207382411628, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -0.706714128819537, 0);
  sqcRYGate(q, 1.5469507667527906, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -2.3363128062283187, 0);
  sqcRYGate(q, -0.7219358075557322, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -2.5138288992758575, 0);
  sqcRYGate(q, 1.331779574228827, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 1.2128217268623738, 1);
  sqcRYGate(q, 1.742139728144852, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2686993718570478, 1);
  sqcRYGate(q, 1.2558741862701024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5602296466137586, 1);
  sqcRYGate(q, -2.324969774506778, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3508857197528936, 1);
  sqcRYGate(q, -0.743900333752181, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.118233440515068, 1);
  sqcRYGate(q, -2.756969946254471, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -3.057094088977401, 1);
  sqcRYGate(q, 0.33877630186942403, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -0.22990906328809316, 1);
  sqcRYGate(q, -1.3047227250108444, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -1.6925179495048213, 1);
  sqcRYGate(q, 0.0004829414680065369, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 2.521178652189396, 1);
  sqcRYGate(q, 1.105624574113968, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 1.827941524689534, 1);
  sqcRYGate(q, 0.887218341250133, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 0.8039828775344091, 1);
  sqcRYGate(q, -0.37939286063208844, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 0.2681472128581283, 1);
  sqcRYGate(q, -2.110332365322848, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -0.5899283286680017, 2);
  sqcRYGate(q, -0.5218837369505449, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6872660870537703, 2);
  sqcRYGate(q, -3.0200098198057783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8930449658855338, 2);
  sqcRYGate(q, 2.20737717356574, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.46278730137041624, 2);
  sqcRYGate(q, -0.7993875049395266, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.2696662337789429, 2);
  sqcRYGate(q, 0.1470561659529692, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.7371562968260568, 2);
  sqcRYGate(q, 0.6029743359731334, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.056175077505905585, 2);
  sqcRYGate(q, -1.487768000676431, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 1.5858836671916943, 2);
  sqcRYGate(q, 0.23026044429765635, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 2.71475353198863, 2);
  sqcRYGate(q, -2.5766028812383928, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 1.8372574369835803, 2);
  sqcRYGate(q, -2.369320064361126, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 2.2814662395494096, 3);
  sqcRYGate(q, 0.081278157853232, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.624015691181736, 3);
  sqcRYGate(q, 0.39691018456460986, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.782118239086088, 3);
  sqcRYGate(q, 2.7027791687026355, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.1959222178231226, 3);
  sqcRYGate(q, -1.3306736192721518, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.3004007861881997, 3);
  sqcRYGate(q, 0.5710668805988117, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 1.5421323756952274, 3);
  sqcRYGate(q, -1.9874794039911423, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 2.122288502670452, 3);
  sqcRYGate(q, 0.12389808639781741, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -2.6255209949113842, 3);
  sqcRYGate(q, 0.281435413001331, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 0.36781793784921035, 4);
  sqcRYGate(q, -1.6464832545583548, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3640820122102018, 4);
  sqcRYGate(q, -0.3283023548262971, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1767493413140921, 4);
  sqcRYGate(q, 2.5192887896113842, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.530760589357736, 4);
  sqcRYGate(q, 1.3439757844831597, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.6620542361715738, 4);
  sqcRYGate(q, -2.067860308709597, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.04458794055505244, 4);
  sqcRYGate(q, 0.35017103828827073, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.020406229929807, 5);
  sqcRYGate(q, 2.9586466624541563, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.17885563030491, 5);
  sqcRYGate(q, -1.592106021804275, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8100911363312662, 5);
  sqcRYGate(q, -2.1426255096295987, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.3812522874794668, 5);
  sqcRYGate(q, -0.7469922205899167, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.34051662652508563, 6);
  sqcRYGate(q, 0.12146423394929103, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2564155483746582, 6);
  sqcRYGate(q, -2.4627373041915113, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7098454051392271, 0);
  sqcRYGate(q, -1.6341374745523956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4224532196917474, 0);
  sqcRYGate(q, -1.4050129518151002, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7621125705527168, 0);
  sqcRYGate(q, 1.1176119277635939, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.36615015874469, 0);
  sqcRYGate(q, 1.5432635587644485, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2983064929987496, 0);
  sqcRYGate(q, -0.4662593809469583, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.09072190720349216, 0);
  sqcRYGate(q, 2.7592071431225564, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8226358068446054, 0);
  sqcRYGate(q, 1.1103395116201957, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 1.3626026095198043, 0);
  sqcRYGate(q, 0.6549731591600378, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -2.459173582255499, 0);
  sqcRYGate(q, -1.621967605770044, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 2.043578318978045, 0);
  sqcRYGate(q, 2.6556388585314448, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -1.0458982801200598, 0);
  sqcRYGate(q, -1.869718836118688, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 3.0774463387866575, 0);
  sqcRYGate(q, -1.5672982385195118, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -1.4585533218503608, 0);
  sqcRYGate(q, 0.05039690483837855, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 1.3945135949817786, 0);
  sqcRYGate(q, 0.9608927695461872, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 0.012459862529568431, 1);
  sqcRYGate(q, 0.4045573893845056, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0682645047978965, 1);
  sqcRYGate(q, 0.9546893634485956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.611183695940444, 1);
  sqcRYGate(q, 2.903106021494971, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1035445212213413, 1);
  sqcRYGate(q, -3.1291430206195385, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2962324050414713, 1);
  sqcRYGate(q, 2.454021654475652, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -0.11872983861776996, 1);
  sqcRYGate(q, 1.3644604538233036, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 1.9118214274486487, 1);
  sqcRYGate(q, -0.6316623727454129, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 0.580574308683245, 1);
  sqcRYGate(q, 0.8195986103519042, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 1.0733397784165422, 1);
  sqcRYGate(q, -1.3575995438780215, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 1.050250580836914, 1);
  sqcRYGate(q, 1.8598681259056526, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -0.4731184957535657, 1);
  sqcRYGate(q, 0.5976528254900105, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 1.0618723463538338, 1);
  sqcRYGate(q, -2.5988785750146675, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 1.269048523787127, 2);
  sqcRYGate(q, -0.8710139758795119, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.974387896725534, 2);
  sqcRYGate(q, -1.1987409942155418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.712096873245657, 2);
  sqcRYGate(q, 0.417206388901385, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.825741600814522, 2);
  sqcRYGate(q, -1.4933819289929735, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.8158766889886522, 2);
  sqcRYGate(q, -0.2784119895139265, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.2247007176682532, 2);
  sqcRYGate(q, 1.9976954052603981, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.393697938127546, 2);
  sqcRYGate(q, -1.242506771438217, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -1.8067919759452518, 2);
  sqcRYGate(q, 0.10386508648601252, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -1.102759462956856, 2);
  sqcRYGate(q, -0.874693394296443, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 1.6600601907108725, 2);
  sqcRYGate(q, -0.005861008711723505, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 3.1218019419442107, 3);
  sqcRYGate(q, -0.6450204966392485, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.97110122954682, 3);
  sqcRYGate(q, 2.0125019542292906, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2890037226432283, 3);
  sqcRYGate(q, 1.1323702462773584, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.4421357839671987, 3);
  sqcRYGate(q, 0.5177285217929395, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.13285293398882825, 3);
  sqcRYGate(q, -2.3092698895275694, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 0.058010253415733175, 3);
  sqcRYGate(q, 1.2376843276661973, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 1.9438154951845434, 3);
  sqcRYGate(q, -1.1416084652321732, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 0.7843205918194588, 3);
  sqcRYGate(q, -1.7486120784658583, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 2.6957017509499943, 4);
  sqcRYGate(q, 0.03775543679505233, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.036618658901796, 4);
  sqcRYGate(q, -1.5701696772712999, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0590690791208706, 4);
  sqcRYGate(q, 2.8781328019418035, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3836846752827443, 4);
  sqcRYGate(q, 0.6376155849793461, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7413326187661669, 4);
  sqcRYGate(q, -3.0607484955700195, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.5431108949754071, 4);
  sqcRYGate(q, -0.9370850577735306, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.1582469306893781, 5);
  sqcRYGate(q, -3.055423163549008, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6817594418371975, 5);
  sqcRYGate(q, -1.4918189187475752, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5777954753850115, 5);
  sqcRYGate(q, -1.4084116440949064, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7156283023712546, 5);
  sqcRYGate(q, 0.5021137154499532, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5541767243645848, 6);
  sqcRYGate(q, -0.40932132696574797, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.10932385852411412, 6);
  sqcRYGate(q, -1.542287956045316, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8370952027652736, 0);
  sqcRYGate(q, 2.4959007647967475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8846953149128776, 0);
  sqcRYGate(q, 2.8573466428776886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.365596071425974, 0);
  sqcRYGate(q, -0.13913359305366638, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9397352905561487, 0);
  sqcRYGate(q, 1.5775477179000328, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2977764182076212, 0);
  sqcRYGate(q, -2.7466577350127124, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.05778321606050005, 0);
  sqcRYGate(q, 2.444155433301186, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1147100499798044, 0);
  sqcRYGate(q, 2.1377769143478647, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 1.7690132853227651, 0);
  sqcRYGate(q, -1.063194851455127, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 1.3235884894213044, 0);
  sqcRYGate(q, 1.7872330465115978, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -2.022083548563554, 0);
  sqcRYGate(q, -1.5892297790772862, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 1.1138098825143004, 0);
  sqcRYGate(q, -1.2940974257573608, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 0.015628739034402858, 0);
  sqcRYGate(q, -0.9918734905069472, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -2.677538563110469, 0);
  sqcRYGate(q, 1.3407452394849058, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -0.3554439411212673, 0);
  sqcRYGate(q, -1.764500389645658, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -1.4573123620667052, 1);
  sqcRYGate(q, 0.31539774262651, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.756433393919236, 1);
  sqcRYGate(q, 2.77504555885007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6416857115694629, 1);
  sqcRYGate(q, -0.6525635965986343, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6391366317796958, 1);
  sqcRYGate(q, 0.6701443674057054, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7730008980533332, 1);
  sqcRYGate(q, 2.524093473416934, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 0.6001767393486058, 1);
  sqcRYGate(q, 3.099858468133114, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 2.7889072701093105, 1);
  sqcRYGate(q, 0.7648497354576912, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -1.078353379667182, 1);
  sqcRYGate(q, 2.5783544690641444, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 3.126132294100815, 1);
  sqcRYGate(q, 0.7762297861247907, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 2.6901823970821748, 1);
  sqcRYGate(q, 1.9728669953737126, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -1.2823630438735076, 1);
  sqcRYGate(q, 3.00377692767897, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -2.151062398600935, 1);
  sqcRYGate(q, -0.4205275117730175, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -0.4692569605937899, 2);
  sqcRYGate(q, -2.229051088082409, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.446943947499149, 2);
  sqcRYGate(q, 1.053527740093867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.622362459227115, 2);
  sqcRYGate(q, 1.1999437821580754, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.8629951867108683, 2);
  sqcRYGate(q, -2.5023819456404444, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.42594165135242457, 2);
  sqcRYGate(q, 1.022203353788969, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.0827593147588086, 2);
  sqcRYGate(q, 0.14895217039812614, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.585700859647734, 2);
  sqcRYGate(q, 2.4979271663862965, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 1.856046249402862, 2);
  sqcRYGate(q, -0.31913020686965504, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 3.060883923091244, 2);
  sqcRYGate(q, -0.44564842242897357, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 0.3230525469175559, 2);
  sqcRYGate(q, -0.4748432685734816, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 0.8567655686272122, 3);
  sqcRYGate(q, 0.9753681045300286, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.443436883006394, 3);
  sqcRYGate(q, 2.4206288209090228, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0176010144608045, 3);
  sqcRYGate(q, 2.7557957660328913, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.367326954144855, 3);
  sqcRYGate(q, -3.1007704010942474, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.4135553402800305, 3);
  sqcRYGate(q, -0.8099057068918957, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -1.974512005154532, 3);
  sqcRYGate(q, 2.50968755379894, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -0.06528581017887514, 3);
  sqcRYGate(q, 1.4096596135623667, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -0.33721580758747915, 3);
  sqcRYGate(q, -2.2108656374532263, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 2.804662822505931, 4);
  sqcRYGate(q, 3.030315028826847, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8745178178389043, 4);
  sqcRYGate(q, 0.3260817710328711, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4299323136630944, 4);
  sqcRYGate(q, 0.36503633951328673, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.8244933123527218, 4);
  sqcRYGate(q, -0.2755595708903171, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.10775496708688571, 4);
  sqcRYGate(q, -2.2868853789888504, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.6281755535435334, 4);
  sqcRYGate(q, -0.01686413674642573, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.032107125200362, 5);
  sqcRYGate(q, -1.282173732844826, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.007886132198287, 5);
  sqcRYGate(q, 1.6433252536571388, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.219943394826867, 5);
  sqcRYGate(q, -1.8906284646627665, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.9144347594264147, 5);
  sqcRYGate(q, -0.8050088719053319, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.2950907848467965, 6);
  sqcRYGate(q, 2.2305094072647265, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7388727847324562, 6);
  sqcRYGate(q, 2.3617686633118202, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3000066562587063, 0);
  sqcRYGate(q, 2.9627413460582335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11182908891988586, 0);
  sqcRYGate(q, 2.4162858359637767, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4929260532035076, 0);
  sqcRYGate(q, -0.10448329529926514, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7950263515208879, 0);
  sqcRYGate(q, -0.32300908688580293, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3074581671076726, 0);
  sqcRYGate(q, -0.334114404062043, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5727178340929786, 0);
  sqcRYGate(q, 3.08893763816161, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.07621694170103625, 0);
  sqcRYGate(q, 0.8536119248077858, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 2.584432280782183, 0);
  sqcRYGate(q, 2.4029494183460027, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, -1.7401174143249216, 0);
  sqcRYGate(q, -0.3705999808262641, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -0.25615265123506425, 0);
  sqcRYGate(q, -2.4889756072865072, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, -2.7243845399590345, 0);
  sqcRYGate(q, 0.6649128628796586, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 2.0035443328106464, 0);
  sqcRYGate(q, 0.4583273508077599, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -2.8225911931155623, 0);
  sqcRYGate(q, -2.6229316950863244, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 2.1605978443387572, 0);
  sqcRYGate(q, -2.3131963651258554, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, -0.1579063979933057, 1);
  sqcRYGate(q, 2.355136474154458, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1491939243242073, 1);
  sqcRYGate(q, -0.6744704380409778, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6962685648833835, 1);
  sqcRYGate(q, 2.367167944844374, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4812163475165532, 1);
  sqcRYGate(q, 1.744357171829538, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.07689876548207884, 1);
  sqcRYGate(q, 0.5058751797102836, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 2.3739898339995658, 1);
  sqcRYGate(q, 2.1493843476613836, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 1.0700950947967967, 1);
  sqcRYGate(q, 2.3064563768265005, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 1.157178138541739, 1);
  sqcRYGate(q, 2.9138327495216827, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -1.6390789735866358, 1);
  sqcRYGate(q, 3.1104448033179373, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -1.2723487131364948, 1);
  sqcRYGate(q, -0.7802623387308723, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 1.59480909014286, 1);
  sqcRYGate(q, -1.4544936226738454, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -1.3680715015723361, 1);
  sqcRYGate(q, 0.12210490643071722, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, -2.3698787789474873, 2);
  sqcRYGate(q, -1.0777883141107587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7810260594010581, 2);
  sqcRYGate(q, 1.9051380826725932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.565248404221469, 2);
  sqcRYGate(q, 3.125498272830693, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.039715938050694, 2);
  sqcRYGate(q, 0.5146277449958876, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.5978324694024977, 2);
  sqcRYGate(q, -2.4767078605964263, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.6087408662699074, 2);
  sqcRYGate(q, -0.6510687218952143, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.09646015267834862, 2);
  sqcRYGate(q, 0.08534383903158194, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 1.6236177060039079, 2);
  sqcRYGate(q, -0.65443786578488, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -1.2430839050875597, 2);
  sqcRYGate(q, -2.2489498786470787, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -0.26186378252550213, 2);
  sqcRYGate(q, 0.24598916764722342, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, 0.5093077113779829, 3);
  sqcRYGate(q, 1.9141134909927364, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7179946498821302, 3);
  sqcRYGate(q, -2.9234123786624506, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5440834339615099, 3);
  sqcRYGate(q, -0.056327331563652557, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.11063838564256745, 3);
  sqcRYGate(q, -0.5497353436636657, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.902407061684596, 3);
  sqcRYGate(q, -0.924498675497631, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 2.93268060146388, 3);
  sqcRYGate(q, -0.8763188084073787, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 0.18932227577382843, 3);
  sqcRYGate(q, 3.1025557514081643, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -2.969414744969705, 3);
  sqcRYGate(q, 0.8027018500710932, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, -0.9231413005648097, 4);
  sqcRYGate(q, 1.9456698048416767, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8649814670545735, 4);
  sqcRYGate(q, 2.8266962212585836, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1016222547264123, 4);
  sqcRYGate(q, 2.3460394111400618, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.41842538674496854, 4);
  sqcRYGate(q, -0.22601217031574897, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.2991088679015989, 4);
  sqcRYGate(q, 2.849956348861194, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.7556055094010603, 4);
  sqcRYGate(q, -2.239276052797403, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.3828317768278264, 5);
  sqcRYGate(q, -0.06583986492703396, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.05216574718653888, 5);
  sqcRYGate(q, -0.35768838531235936, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.510271224824181, 5);
  sqcRYGate(q, 0.08811552308621184, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.06696464385188851, 5);
  sqcRYGate(q, -1.138778918648465, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.072161689816318, 6);
  sqcRYGate(q, -3.0908338219848037, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8387233817353446, 6);
  sqcRYGate(q, 3.01703103843527, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2122503155883988, 0);
  sqcRYGate(q, -1.0526322830818584, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6123433612441348, 0);
  sqcRYGate(q, 3.12366750492185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2353818733954984, 0);
  sqcRYGate(q, 2.5737940758516147, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.742711260681392, 0);
  sqcRYGate(q, -0.28846367154186936, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6194988647176536, 0);
  sqcRYGate(q, -0.9508249122987356, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.994961695518832, 0);
  sqcRYGate(q, -0.2004062848331032, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9599006634036127, 0);
  sqcRYGate(q, -2.528623549664572, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 2.9492629994263933, 0);
  sqcRYGate(q, -1.0883080768746574, 4);
  sqcCXGate(q, 0, 4);
  sqcRYGate(q, 0.173175231861153, 0);
  sqcRYGate(q, -1.4662413473205964, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 2.7254047832346644, 0);
  sqcRYGate(q, 0.6948849798713839, 5);
  sqcCXGate(q, 0, 5);
  sqcRYGate(q, 0.2689030816770666, 0);
  sqcRYGate(q, 2.7688425847558675, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, -1.4543842637598747, 0);
  sqcRYGate(q, 2.412842112208439, 6);
  sqcCXGate(q, 0, 6);
  sqcRYGate(q, 1.8244096216907408, 0);
  sqcRYGate(q, -0.2836954074977778, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 1.6141797331629983, 0);
  sqcRYGate(q, -2.021780388967202, 7);
  sqcCXGate(q, 0, 7);
  sqcRYGate(q, 0.467103656457299, 1);
  sqcRYGate(q, 1.218401976593443, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2674500753607068, 1);
  sqcRYGate(q, 1.9716761511382002, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.832470998718214, 1);
  sqcRYGate(q, 2.481565155129783, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1919442166478245, 1);
  sqcRYGate(q, -3.0163361234367247, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5527872386973934, 1);
  sqcRYGate(q, -1.5168888178519184, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, 3.078724010756991, 1);
  sqcRYGate(q, 0.23475050341618342, 4);
  sqcCXGate(q, 1, 4);
  sqcRYGate(q, -0.11987313911519369, 1);
  sqcRYGate(q, -1.382718926369931, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, -2.7236949066586837, 1);
  sqcRYGate(q, -2.1845735383665357, 5);
  sqcCXGate(q, 1, 5);
  sqcRYGate(q, 0.18826065990633353, 1);
  sqcRYGate(q, 0.12822412227355842, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, -0.14680748608806207, 1);
  sqcRYGate(q, 1.894358575663817, 6);
  sqcCXGate(q, 1, 6);
  sqcRYGate(q, 2.2299372166403897, 1);
  sqcRYGate(q, -0.15948487724099997, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 2.7939328524479503, 1);
  sqcRYGate(q, 1.6358807754222209, 7);
  sqcCXGate(q, 1, 7);
  sqcRYGate(q, 0.6529979374159698, 2);
  sqcRYGate(q, -1.0650408261713409, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.004629570074667, 2);
  sqcRYGate(q, -1.7604114151910393, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8707304961802302, 2);
  sqcRYGate(q, 2.7447563878780166, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.7263809842543516, 2);
  sqcRYGate(q, -1.5422102002132625, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.83948385253747, 2);
  sqcRYGate(q, -3.0497902699995496, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.9127322927357133, 2);
  sqcRYGate(q, 2.2495973089638097, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.6162404146396976, 2);
  sqcRYGate(q, -1.867172246109427, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, 3.031977939659965, 2);
  sqcRYGate(q, -0.9913138695999597, 6);
  sqcCXGate(q, 2, 6);
  sqcRYGate(q, -0.1444648833033186, 2);
  sqcRYGate(q, 1.5241600332741683, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -1.7052886547245467, 2);
  sqcRYGate(q, -2.7032137286544735, 7);
  sqcCXGate(q, 2, 7);
  sqcRYGate(q, -1.2375831968019746, 3);
  sqcRYGate(q, 2.4404963632779824, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.804143173401467, 3);
  sqcRYGate(q, 1.50585056569632, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8165136501087271, 3);
  sqcRYGate(q, 1.7653753069417872, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.186314537227933, 3);
  sqcRYGate(q, 0.027429943802852304, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.151302464091993, 3);
  sqcRYGate(q, 0.34556533272628265, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, -1.1193555837560123, 3);
  sqcRYGate(q, -0.20909620462395367, 6);
  sqcCXGate(q, 3, 6);
  sqcRYGate(q, 0.41659915850982365, 3);
  sqcRYGate(q, 2.7785783271840296, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 1.9615941500223002, 3);
  sqcRYGate(q, -0.8996654674885649, 7);
  sqcCXGate(q, 3, 7);
  sqcRYGate(q, 0.7805033188109824, 4);
  sqcRYGate(q, -0.16759045843121356, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9406006424165883, 4);
  sqcRYGate(q, -0.4704914224463135, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.34751455389475616, 4);
  sqcRYGate(q, 2.8316011329904054, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.30466101954413016, 4);
  sqcRYGate(q, 0.17082167098644704, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.618660595893868, 4);
  sqcRYGate(q, 1.705479265467842, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.18657203669068, 4);
  sqcRYGate(q, 0.60360107030536, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.5098998007356927, 5);
  sqcRYGate(q, 0.46412092994269194, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9320409860924217, 5);
  sqcRYGate(q, 2.3152460348178194, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.520249683108392, 5);
  sqcRYGate(q, 1.5290093647847165, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.988042181298575, 5);
  sqcRYGate(q, -1.5435660479226048, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.1106239895545595, 6);
  sqcRYGate(q, -3.0688557359784254, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8408152668316333, 6);
  sqcRYGate(q, 0.8482919781194518, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3746198127115808, 0);
  sqcRYGate(q, -2.241646732431825, 1);
  sqcRYGate(q, 1.9891521476812626, 2);
  sqcRYGate(q, 0.4278813062601472, 3);
  sqcRYGate(q, -2.138609950736048, 4);
  sqcRYGate(q, 1.8067495864818737, 5);
  sqcRYGate(q, 1.6270163533799158, 6);
  sqcRYGate(q, 0.4524445963072754, 7);

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
