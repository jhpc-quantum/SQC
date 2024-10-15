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

  sqcRYGate(q, 1.3039367946868314, 0);
  sqcRZGate(q, 0.1667849420761529, 0);
  sqcRYGate(q, 0.08492236822958255, 1);
  sqcRZGate(q, 0.8964813524120236, 1);
  sqcRYGate(q, 0.2765240294614446, 2);
  sqcRZGate(q, 2.1356232772584036, 2);
  sqcRYGate(q, -0.7756239111109995, 3);
  sqcRZGate(q, 2.1781235100779135, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8048698900670228, 0);
  sqcRZGate(q, -2.857856258818679, 0);
  sqcRYGate(q, 2.58465515956656, 1);
  sqcRZGate(q, 2.548645465345536, 1);
  sqcRYGate(q, -1.815945371824318, 2);
  sqcRZGate(q, -3.10267416093763, 2);
  sqcRYGate(q, -2.303767477725196, 3);
  sqcRZGate(q, 2.3216078092859327, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.2952863361825973, 0);
  sqcRZGate(q, -0.33497306104148217, 0);
  sqcRYGate(q, 1.5459181920222667, 1);
  sqcRZGate(q, -0.366408715896938, 1);
  sqcRYGate(q, 1.154420191509856, 2);
  sqcRZGate(q, 2.9784421821148634, 2);
  sqcRYGate(q, 0.35631897998024353, 3);
  sqcRZGate(q, 2.684827359174399, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.4035133377027262, 0);
  sqcRZGate(q, -2.956095790722207, 0);
  sqcRYGate(q, 2.9391619707578007, 1);
  sqcRZGate(q, 1.2612435431016795, 1);
  sqcRYGate(q, -0.9471662486103041, 2);
  sqcRZGate(q, -0.43765209378510406, 2);
  sqcRYGate(q, -0.0763271005127315, 3);
  sqcRZGate(q, 2.1611751604225278, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.5105031224971173, 0);
  sqcRZGate(q, 0.3530078155448234, 0);
  sqcRYGate(q, -1.5798298178855485, 1);
  sqcRZGate(q, -2.1726739469230694, 1);
  sqcRYGate(q, 1.1989587828033548, 2);
  sqcRZGate(q, -1.7098338039702101, 2);
  sqcRYGate(q, 1.1506818307738924, 3);
  sqcRZGate(q, -1.4633412802800183, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.0582151624540366, 0);
  sqcRZGate(q, 2.3123147961881094, 0);
  sqcRYGate(q, -1.3293975117837946, 1);
  sqcRZGate(q, -2.594453358124457, 1);
  sqcRYGate(q, -0.5202077188508117, 2);
  sqcRZGate(q, 0.5148506715912892, 2);
  sqcRYGate(q, 0.6284188855551562, 3);
  sqcRZGate(q, -2.538707355405552, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.8035704308972296, 0);
  sqcRZGate(q, -1.7019272763542623, 0);
  sqcRYGate(q, -2.6148394684059566, 1);
  sqcRZGate(q, 2.218761374368223, 1);
  sqcRYGate(q, 1.453154886106975, 2);
  sqcRZGate(q, 1.1341816795178596, 2);
  sqcRYGate(q, -3.074435788808991, 3);
  sqcRZGate(q, 0.8264805384710106, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7117472019207716, 0);
  sqcRZGate(q, -0.8312773007827257, 0);
  sqcRYGate(q, 1.3673702428151053, 1);
  sqcRZGate(q, 1.2097801602129266, 1);
  sqcRYGate(q, 1.5710564934303435, 2);
  sqcRZGate(q, 0.3617720406938334, 2);
  sqcRYGate(q, -2.292780608008202, 3);
  sqcRZGate(q, 1.4121232877751648, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.10850506408319749, 0);
  sqcRZGate(q, -0.332465170181079, 0);
  sqcRYGate(q, 0.37154841028972474, 1);
  sqcRZGate(q, 3.0982878596388477, 1);
  sqcRYGate(q, -2.9798561243704302, 2);
  sqcRZGate(q, -1.55529315959929, 2);
  sqcRYGate(q, -0.5227576374489856, 3);
  sqcRZGate(q, 0.9292783484694818, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.25284517735799655, 0);
  sqcRZGate(q, -0.8706996906584329, 0);
  sqcRYGate(q, -1.9669295432527674, 1);
  sqcRZGate(q, 2.637920783419461, 1);
  sqcRYGate(q, 1.2905604195670781, 2);
  sqcRZGate(q, 0.9209293808805645, 2);
  sqcRYGate(q, -2.942674255409199, 3);
  sqcRZGate(q, -2.758605571482054, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.336021284041041, 0);
  sqcRZGate(q, -0.8369718103432843, 0);
  sqcRYGate(q, -1.1319375551479185, 1);
  sqcRZGate(q, -1.4939091492036913, 1);
  sqcRYGate(q, 2.481605277752096, 2);
  sqcRZGate(q, 0.3209577515211448, 2);
  sqcRYGate(q, -2.0137071610595276, 3);
  sqcRZGate(q, -2.0399574925642225, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.081093924288956, 0);
  sqcRZGate(q, -2.4008121909312194, 0);
  sqcRYGate(q, 2.959743706021799, 1);
  sqcRZGate(q, 2.433834334632258, 1);
  sqcRYGate(q, 2.3446241944482904, 2);
  sqcRZGate(q, -1.8231247899028205, 2);
  sqcRYGate(q, 2.6255379674052697, 3);
  sqcRZGate(q, -2.7674801523578427, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.523294423623411, 0);
  sqcRZGate(q, -1.2029737735350023, 0);
  sqcRYGate(q, 2.859946095084919, 1);
  sqcRZGate(q, -1.5626909375821851, 1);
  sqcRYGate(q, 1.0308564159031568, 2);
  sqcRZGate(q, 1.8341288320674556, 2);
  sqcRYGate(q, -3.024004223807856, 3);
  sqcRZGate(q, -2.4913137331294797, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.23571247695810646, 0);
  sqcRZGate(q, -0.7061621229724359, 0);
  sqcRYGate(q, 1.9599769565867629, 1);
  sqcRZGate(q, 0.5400551466226, 1);
  sqcRYGate(q, -2.3466357955644934, 2);
  sqcRZGate(q, 2.3412775026670736, 2);
  sqcRYGate(q, -2.864727777899615, 3);
  sqcRZGate(q, 3.0094832170160966, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9183436265670588, 0);
  sqcRZGate(q, -2.196971464337423, 0);
  sqcRYGate(q, 2.7171132846935047, 1);
  sqcRZGate(q, 2.918894306007923, 1);
  sqcRYGate(q, 1.0365355450276672, 2);
  sqcRZGate(q, 1.4344455479811122, 2);
  sqcRYGate(q, -3.1260386835643073, 3);
  sqcRZGate(q, 1.662069066871239, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.936396303385474, 0);
  sqcRZGate(q, -0.1497150418066738, 0);
  sqcRYGate(q, 0.6762846355484724, 1);
  sqcRZGate(q, -0.6427338450606401, 1);
  sqcRYGate(q, -1.3711707929734605, 2);
  sqcRZGate(q, -1.1049786719507582, 2);
  sqcRYGate(q, 1.865288740025977, 3);
  sqcRZGate(q, 2.887453497795841, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.1272543894666631, 0);
  sqcRZGate(q, 0.2735850546993239, 0);
  sqcRYGate(q, -3.0261345834658373, 1);
  sqcRZGate(q, 0.6026884316990097, 1);
  sqcRYGate(q, -1.0484362741913413, 2);
  sqcRZGate(q, 1.2533474707613577, 2);
  sqcRYGate(q, 1.1319983048013817, 3);
  sqcRZGate(q, 0.8297965893419867, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.17362308959104492, 0);
  sqcRZGate(q, 2.637461591390582, 0);
  sqcRYGate(q, -1.6912044141425722, 1);
  sqcRZGate(q, 0.3188495554070209, 1);
  sqcRYGate(q, 0.15017967918289238, 2);
  sqcRZGate(q, -1.03593010843662, 2);
  sqcRYGate(q, 1.6391016333580408, 3);
  sqcRZGate(q, 1.8810863515919474, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.7497901511399347, 0);
  sqcRZGate(q, 0.1623757206428065, 0);
  sqcRYGate(q, 0.7188138593271658, 1);
  sqcRZGate(q, -2.3485379695611677, 1);
  sqcRYGate(q, 0.44016650065936336, 2);
  sqcRZGate(q, -1.1961663880239444, 2);
  sqcRYGate(q, 0.19604340598234757, 3);
  sqcRZGate(q, 1.4960761467458612, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7246169594106773, 0);
  sqcRZGate(q, 2.298254408429202, 0);
  sqcRYGate(q, -2.3743184902456123, 1);
  sqcRZGate(q, -2.077117838684911, 1);
  sqcRYGate(q, -0.785635498154865, 2);
  sqcRZGate(q, 0.06222472742523521, 2);
  sqcRYGate(q, -0.6750594666689205, 3);
  sqcRZGate(q, -2.3701938055760676, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.11263353050344271, 0);
  sqcRZGate(q, -3.1374714280660476, 0);
  sqcRYGate(q, 2.097802387538712, 1);
  sqcRZGate(q, 0.8945001989651605, 1);
  sqcRYGate(q, -1.4208642706095074, 2);
  sqcRZGate(q, -3.1365496199756855, 2);
  sqcRYGate(q, 0.7415847249490666, 3);
  sqcRZGate(q, 0.4296823664180538, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.10128455749735732, 0);
  sqcRZGate(q, 2.8223770361336107, 0);
  sqcRYGate(q, 3.0364406528192758, 1);
  sqcRZGate(q, -2.355714199482961, 1);
  sqcRYGate(q, 1.9656807731803747, 2);
  sqcRZGate(q, 1.8136600306620834, 2);
  sqcRYGate(q, -2.70465947528625, 3);
  sqcRZGate(q, -1.0984974700663241, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.0466680728089441, 0);
  sqcRZGate(q, 2.451494513726192, 0);
  sqcRYGate(q, 0.2292487695076053, 1);
  sqcRZGate(q, -1.8326312956520632, 1);
  sqcRYGate(q, -1.265583248614816, 2);
  sqcRZGate(q, 1.9434243272983078, 2);
  sqcRYGate(q, -0.6711565097503794, 3);
  sqcRZGate(q, 1.1051524830463766, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5778176221243438, 0);
  sqcRZGate(q, 0.9589711486248326, 0);
  sqcRYGate(q, -1.13661608654995, 1);
  sqcRZGate(q, 2.9729688374601766, 1);
  sqcRYGate(q, -0.9315462963227683, 2);
  sqcRZGate(q, 1.7016599291383319, 2);
  sqcRYGate(q, -2.1132569816487847, 3);
  sqcRZGate(q, -2.1960135713857962, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8692376741834078, 0);
  sqcRZGate(q, -1.392388819289775, 0);
  sqcRYGate(q, -2.7182720615367124, 1);
  sqcRZGate(q, 2.572309245897191, 1);
  sqcRYGate(q, 2.8449369824620074, 2);
  sqcRZGate(q, 2.653881996972569, 2);
  sqcRYGate(q, -0.3716113983550722, 3);
  sqcRZGate(q, -2.5415086399575633, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.608752153427675, 0);
  sqcRZGate(q, -1.6371469126571236, 0);
  sqcRYGate(q, 1.451422517267867, 1);
  sqcRZGate(q, -0.1409288174986063, 1);
  sqcRYGate(q, 2.284125983688156, 2);
  sqcRZGate(q, -1.3065108686594238, 2);
  sqcRYGate(q, -0.7878316553846457, 3);
  sqcRZGate(q, 2.8073369613241965, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.0999644446091463, 0);
  sqcRZGate(q, -1.6048204486851292, 0);
  sqcRYGate(q, 1.6533363619620627, 1);
  sqcRZGate(q, -2.228208083025421, 1);
  sqcRYGate(q, 0.09945021720517884, 2);
  sqcRZGate(q, -2.4016959524575023, 2);
  sqcRYGate(q, 1.6190808909656491, 3);
  sqcRZGate(q, 1.6724121527356939, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.9514794086741927, 0);
  sqcRZGate(q, 2.0553620831359183, 0);
  sqcRYGate(q, 2.3891305580140356, 1);
  sqcRZGate(q, 0.6188112286956747, 1);
  sqcRYGate(q, -2.7871799905250016, 2);
  sqcRZGate(q, -2.129758056905852, 2);
  sqcRYGate(q, 0.9778837752577902, 3);
  sqcRZGate(q, 2.7022186451283687, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.1022569720693394, 0);
  sqcRZGate(q, 1.60506297011021, 0);
  sqcRYGate(q, -0.17192423776679558, 1);
  sqcRZGate(q, -0.6267635447874476, 1);
  sqcRYGate(q, -2.138614145439283, 2);
  sqcRZGate(q, 1.8242208779932163, 2);
  sqcRYGate(q, -3.103237553837526, 3);
  sqcRZGate(q, -1.4133770878602494, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5028096121423902, 0);
  sqcRZGate(q, -1.559580292964771, 0);
  sqcRYGate(q, -2.908864916057672, 1);
  sqcRZGate(q, -1.4280076806850361, 1);
  sqcRYGate(q, -0.19210831470121192, 2);
  sqcRZGate(q, -2.3484224876945925, 2);
  sqcRYGate(q, 0.6312034038561978, 3);
  sqcRZGate(q, 0.7095193749093439, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.631985913595504, 0);
  sqcRZGate(q, -2.0558799869098117, 0);
  sqcRYGate(q, -0.8905161613789805, 1);
  sqcRZGate(q, -3.0536103639706647, 1);
  sqcRYGate(q, -1.0435982157465244, 2);
  sqcRZGate(q, 0.47698451435974487, 2);
  sqcRYGate(q, 1.0029194544473627, 3);
  sqcRZGate(q, 2.2478133621063527, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.047856956683197, 0);
  sqcRZGate(q, -3.0372842976807135, 0);
  sqcRYGate(q, -1.9358448815628095, 1);
  sqcRZGate(q, 0.04130588190959995, 1);
  sqcRYGate(q, 0.8408552679641615, 2);
  sqcRZGate(q, -1.3232081383587602, 2);
  sqcRYGate(q, 2.086774975547072, 3);
  sqcRZGate(q, 2.543616093165358, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.1815583131104024, 0);
  sqcRZGate(q, -0.4079055032750852, 0);
  sqcRYGate(q, 2.4481054755004643, 1);
  sqcRZGate(q, 2.980182304939084, 1);
  sqcRYGate(q, 1.5770277021247059, 2);
  sqcRZGate(q, 0.8112464603825442, 2);
  sqcRYGate(q, -0.19425566901862829, 3);
  sqcRZGate(q, 1.642585758707996, 3);

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
