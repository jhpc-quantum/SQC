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

  sqcRYGate(q, -1.3560970758260593, 0);
  sqcRYGate(q, -0.7675998246940994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4153398883341417, 0);
  sqcRYGate(q, -1.5191570996973849, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4228388119284, 1);
  sqcRYGate(q, 1.2196287237290346, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.343560416322173, 1);
  sqcRYGate(q, 2.354971360310769, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7321662844828065, 2);
  sqcRYGate(q, 2.926902692448708, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.073134841111508, 2);
  sqcRYGate(q, -1.3581440103972995, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.146790372114598, 3);
  sqcRYGate(q, -0.5406148317875106, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.030458988742944, 3);
  sqcRYGate(q, 2.9547600241177236, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.03913089411824, 4);
  sqcRYGate(q, -0.9419066894744281, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.238674446513951, 4);
  sqcRYGate(q, 1.8272270742236938, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5066481712094495, 5);
  sqcRYGate(q, -1.112934101458701, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0924175931668882, 5);
  sqcRYGate(q, 3.1409371901915955, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6386730732193753, 6);
  sqcRYGate(q, -2.6902762441475945, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.33503918660654725, 6);
  sqcRYGate(q, 0.9896880594468973, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.06169692074981537, 0);
  sqcRYGate(q, 1.1621855909121726, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.024386888637676, 0);
  sqcRYGate(q, 2.1187392145721438, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3421569500271815, 1);
  sqcRYGate(q, -2.6030153973855277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7522646420283183, 1);
  sqcRYGate(q, -3.0804217859395573, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.75863607612871, 2);
  sqcRYGate(q, -0.30642842430018435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5807574671084748, 2);
  sqcRYGate(q, -1.284442358949573, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.208558521864259, 3);
  sqcRYGate(q, 2.844273040858774, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.887833836021156, 3);
  sqcRYGate(q, 3.081772270899884, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2647375119716422, 4);
  sqcRYGate(q, -1.84306571033814, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8091303849530243, 4);
  sqcRYGate(q, 2.488562678785431, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7381893275504113, 5);
  sqcRYGate(q, 0.7277709324663846, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9541516894238957, 5);
  sqcRYGate(q, -1.5440912703818066, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7506162629229247, 6);
  sqcRYGate(q, -1.1673710531831647, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.831115452869881, 6);
  sqcRYGate(q, 0.8062414396904155, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6376294365128992, 0);
  sqcRYGate(q, 2.732088746728568, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.38671587375305005, 0);
  sqcRYGate(q, 2.521098954822011, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9669139178751012, 1);
  sqcRYGate(q, 0.8669570744541291, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.30921967418880403, 1);
  sqcRYGate(q, 2.0969093912901124, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.031918846485514685, 2);
  sqcRYGate(q, 0.4470399025707979, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.188905118849915, 2);
  sqcRYGate(q, -2.1278607561445844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.46160754912552, 3);
  sqcRYGate(q, -0.11315435671069096, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5820261086495568, 3);
  sqcRYGate(q, -0.2859783550024294, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1892854189356914, 4);
  sqcRYGate(q, 0.6356205005719691, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6434225084822183, 4);
  sqcRYGate(q, 0.3697628130864352, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1272248250826773, 5);
  sqcRYGate(q, 1.608183508337719, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4161780334071423, 5);
  sqcRYGate(q, -0.015902517165307276, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5791137914296203, 6);
  sqcRYGate(q, 0.6570186947790165, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8366690712255234, 6);
  sqcRYGate(q, -2.3236781908168562, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9830397303034267, 0);
  sqcRYGate(q, 3.0732271470329704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07307779295324467, 0);
  sqcRYGate(q, -0.041975377952439, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2093075823725936, 1);
  sqcRYGate(q, 1.6734528247987814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1070892190544226, 1);
  sqcRYGate(q, 1.9241250696472867, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7948619351684679, 2);
  sqcRYGate(q, 2.4819692824122104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.030197023407683, 2);
  sqcRYGate(q, -2.516573189545175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5601517783677368, 3);
  sqcRYGate(q, -1.9120254900551616, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6613165084388295, 3);
  sqcRYGate(q, -0.44464909865190183, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9966631470670757, 4);
  sqcRYGate(q, -2.502873247466746, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.297647988250461, 4);
  sqcRYGate(q, -1.6038975149948862, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8216765815299931, 5);
  sqcRYGate(q, -1.5891247041687215, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7663123095303668, 5);
  sqcRYGate(q, 1.437961959825265, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.293798700981671, 6);
  sqcRYGate(q, 1.101926071711592, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8764256005240268, 6);
  sqcRYGate(q, 3.1286566883825073, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5262020913674448, 0);
  sqcRYGate(q, -2.766214826936954, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7253184866957406, 0);
  sqcRYGate(q, -0.15674900739008651, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4838798943624527, 1);
  sqcRYGate(q, -0.6818725087515807, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.16084589553977624, 1);
  sqcRYGate(q, -1.8516657504304899, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.96281771076375, 2);
  sqcRYGate(q, -2.789727106083857, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.207842762097695, 2);
  sqcRYGate(q, -0.5415852628113589, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.913509658920967, 3);
  sqcRYGate(q, 2.160599157110305, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9340014055509167, 3);
  sqcRYGate(q, 0.4796012825716831, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7432001704057081, 4);
  sqcRYGate(q, 1.5060483945724756, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.97945008868072, 4);
  sqcRYGate(q, 1.1453825872019179, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9380939264955317, 5);
  sqcRYGate(q, 0.8186882292753301, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.22926047513103276, 5);
  sqcRYGate(q, 1.277768981424554, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4894457497433855, 6);
  sqcRYGate(q, -2.7560415474897515, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.23543104953884786, 6);
  sqcRYGate(q, 3.123884135347498, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5658353313653193, 0);
  sqcRYGate(q, -2.5628719836727494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9964051804217364, 0);
  sqcRYGate(q, 1.3759248933320638, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3809341445316936, 1);
  sqcRYGate(q, 0.8119977068240685, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.545322978320412, 1);
  sqcRYGate(q, 0.7576839710650107, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4723602637275295, 2);
  sqcRYGate(q, 2.7938258249092294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.022174863624988994, 2);
  sqcRYGate(q, -0.2192434342927048, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.68483182067346, 3);
  sqcRYGate(q, 1.0121723309516977, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4298284608963672, 3);
  sqcRYGate(q, 1.5147708544782947, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5438888150594994, 4);
  sqcRYGate(q, 2.069123947568204, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9822554196844664, 4);
  sqcRYGate(q, -1.6185198631313857, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9869604786355479, 5);
  sqcRYGate(q, -0.8889466441599696, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0377599249773199, 5);
  sqcRYGate(q, 0.2690036530021774, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.203078510468142, 6);
  sqcRYGate(q, -1.9284905819180327, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9568251354355186, 6);
  sqcRYGate(q, 3.081568619612342, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.790719837684781, 0);
  sqcRYGate(q, 1.6314994794859141, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.163879304045728, 0);
  sqcRYGate(q, -2.182150761069564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.365641205347986, 1);
  sqcRYGate(q, -1.519964830353447, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1904575690805013, 1);
  sqcRYGate(q, 3.1101137977898885, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2660248754432033, 2);
  sqcRYGate(q, 0.7541697811919719, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.733740182802076, 2);
  sqcRYGate(q, 1.9342283839249197, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.497123159406793, 3);
  sqcRYGate(q, -1.0283502107822924, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.983246764780504, 3);
  sqcRYGate(q, 0.49911643381182297, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.036802286334455, 4);
  sqcRYGate(q, 0.13088228512921188, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4229284113087761, 4);
  sqcRYGate(q, 1.599807247423869, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9208407602658534, 5);
  sqcRYGate(q, -2.256430018488518, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.024520736457482428, 5);
  sqcRYGate(q, -1.9702806176442946, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.94665312047609, 6);
  sqcRYGate(q, -0.6401118501944545, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2397221576876105, 6);
  sqcRYGate(q, -1.817579541004193, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.005673454011335899, 0);
  sqcRYGate(q, 2.2110098466764763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.61622994934219, 0);
  sqcRYGate(q, -2.0378867140810493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.33463503209186785, 1);
  sqcRYGate(q, -0.5660437296857648, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.011113085635021669, 1);
  sqcRYGate(q, -2.1314383679506324, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.138712228729254, 2);
  sqcRYGate(q, 2.6883094226645863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4242422338172833, 2);
  sqcRYGate(q, -0.6535792375897431, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.653518320108938, 3);
  sqcRYGate(q, -2.143474469860566, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7868231447017474, 3);
  sqcRYGate(q, -3.1263626685068893, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3280953646252196, 4);
  sqcRYGate(q, 2.045853712280569, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.44115760309075736, 4);
  sqcRYGate(q, 0.017183095386633915, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2173923660991046, 5);
  sqcRYGate(q, 1.6150865827265273, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.46700004259490674, 5);
  sqcRYGate(q, -0.0024029930720397275, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1830948172995157, 6);
  sqcRYGate(q, 0.7186122850679668, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.132423030537909, 6);
  sqcRYGate(q, -1.2480078335698206, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4572726684403823, 0);
  sqcRYGate(q, 1.4926400451060857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.211959304229644, 0);
  sqcRYGate(q, 0.13229475839654456, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8536731308574161, 1);
  sqcRYGate(q, -0.40276328677826, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4501257469815707, 1);
  sqcRYGate(q, 2.3806397152585212, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7646195415183241, 2);
  sqcRYGate(q, -1.83257088240107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8650496523444358, 2);
  sqcRYGate(q, -2.4837617119830453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3325178153952067, 3);
  sqcRYGate(q, 2.5547125421126426, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.614342846041319, 3);
  sqcRYGate(q, 3.062044792878801, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.351602099802824, 4);
  sqcRYGate(q, -3.0005409393953775, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6796047902192938, 4);
  sqcRYGate(q, -2.888073662365786, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.294983918776614, 5);
  sqcRYGate(q, -3.083033649172837, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4174786613611131, 5);
  sqcRYGate(q, 3.1275015290431316, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.21451553549803154, 6);
  sqcRYGate(q, -0.6902992646898255, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5692304526896587, 6);
  sqcRYGate(q, -0.33262081982967207, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3290601078404001, 0);
  sqcRYGate(q, 1.66918200095206, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.097319387889578, 0);
  sqcRYGate(q, 1.475189809108917, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.36015304763313993, 1);
  sqcRYGate(q, 1.9848079294076362, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9506855894591845, 1);
  sqcRYGate(q, -1.5693051002981724, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9823919124943794, 2);
  sqcRYGate(q, -1.1868155057058898, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.778375739120706, 2);
  sqcRYGate(q, 2.2467612694206647, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9353621728360508, 3);
  sqcRYGate(q, -2.2748633683814106, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6247749204322259, 3);
  sqcRYGate(q, 2.9941607704834303, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.519605147526448, 4);
  sqcRYGate(q, -0.9326764488343792, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0796257494436494, 4);
  sqcRYGate(q, -1.033052641962309, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.506552388980003, 5);
  sqcRYGate(q, 0.9423062555308815, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.130660654832683, 5);
  sqcRYGate(q, 0.01071483863452057, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0351529504300956, 6);
  sqcRYGate(q, -1.9596623659999954, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9912771927523543, 6);
  sqcRYGate(q, -0.4244432023266693, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7108190365357068, 0);
  sqcRYGate(q, 0.40086669596432567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8253899948565793, 0);
  sqcRYGate(q, 0.3076384842077857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4639543832379882, 1);
  sqcRYGate(q, 0.14633854506598395, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.113090079198296, 1);
  sqcRYGate(q, -0.44884474216733855, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.44267246837785196, 2);
  sqcRYGate(q, 0.7530294996006948, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.963332018091322, 2);
  sqcRYGate(q, -1.815407551793541, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7625690460108201, 3);
  sqcRYGate(q, -2.89810892826193, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.06396458708802832, 3);
  sqcRYGate(q, -3.1213143798717775, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.29719894577191486, 4);
  sqcRYGate(q, 2.3591334973053866, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.500244903685521, 4);
  sqcRYGate(q, 1.390401244032253, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.18286084334729003, 5);
  sqcRYGate(q, 2.77786033793283, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1663586256191003, 5);
  sqcRYGate(q, 2.066681984325576, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3516990225193175, 6);
  sqcRYGate(q, -2.339844970333875, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5431467977587685, 6);
  sqcRYGate(q, -0.6412637690855636, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6559852125377201, 0);
  sqcRYGate(q, 1.3050089979339872, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8336603733733052, 0);
  sqcRYGate(q, 2.565214266607136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4038740082033865, 1);
  sqcRYGate(q, 1.882749156649359, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.352177354058633, 1);
  sqcRYGate(q, -0.2535510818571694, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3998570501035075, 2);
  sqcRYGate(q, -2.774297569963467, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.023909698138225133, 2);
  sqcRYGate(q, 0.5171903874623498, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6248782150458201, 3);
  sqcRYGate(q, 0.43081131458227057, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1157780481652555, 3);
  sqcRYGate(q, -2.1382394588606615, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.283088496720179, 4);
  sqcRYGate(q, 2.517764433564408, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0197182763428647, 4);
  sqcRYGate(q, 0.16609452631371963, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1167522595746844, 5);
  sqcRYGate(q, -1.886311022014389, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6196891728614036, 5);
  sqcRYGate(q, 1.0858924727517287, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9999889508948874, 6);
  sqcRYGate(q, 0.958234689219137, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0392281417264306, 6);
  sqcRYGate(q, 2.9404139573191546, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7824070473246522, 0);
  sqcRYGate(q, 2.670097204724549, 1);
  sqcRYGate(q, 0.6324680924082005, 2);
  sqcRYGate(q, 1.3429183180320634, 3);
  sqcRYGate(q, -2.177086039629103, 4);
  sqcRYGate(q, -2.3529122208655786, 5);
  sqcRYGate(q, -1.8218124766803598, 6);
  sqcRYGate(q, -2.3040860590985828, 7);

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
