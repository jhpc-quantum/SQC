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

  sqcRYGate(q, 1.3137944561022366, 0);
  sqcRZGate(q, 0.0016290001653956972, 0);
  sqcRYGate(q, 1.5770723673643883, 1);
  sqcRZGate(q, 1.232281959236741, 1);
  sqcRYGate(q, -2.397792650692198, 2);
  sqcRZGate(q, 0.04331363364587629, 2);
  sqcRYGate(q, -1.8260236065033384, 3);
  sqcRZGate(q, 2.28366286915341, 3);
  sqcRYGate(q, 3.247977463876921e-05, 4);
  sqcRZGate(q, -1.1959606618348628, 4);
  sqcRYGate(q, 2.8733040512562815, 5);
  sqcRZGate(q, 1.7108888780285365, 5);
  sqcRYGate(q, 1.6576180705247925, 6);
  sqcRZGate(q, 2.6054022725674812, 6);
  sqcRYGate(q, -2.803732544831925, 7);
  sqcRZGate(q, -1.8640644084163496, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.574078378181372, 0);
  sqcRZGate(q, -0.2594399297002088, 0);
  sqcRYGate(q, -3.141442277412753, 1);
  sqcRZGate(q, -1.84760445710927, 1);
  sqcRYGate(q, -0.002162192634092317, 2);
  sqcRZGate(q, 2.9345281858410477, 2);
  sqcRYGate(q, 2.4635404065895687, 3);
  sqcRZGate(q, -1.2351493904768178, 3);
  sqcRYGate(q, -0.0010287229615482119, 4);
  sqcRZGate(q, -2.7358629412273956, 4);
  sqcRYGate(q, 2.4152303858210553, 5);
  sqcRZGate(q, 2.2344780282151753, 5);
  sqcRYGate(q, -0.006209109003349589, 6);
  sqcRZGate(q, 1.003143166154151, 6);
  sqcRYGate(q, 3.131349956723013, 7);
  sqcRZGate(q, -1.7370806428635388, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.22346337936369176, 0);
  sqcRZGate(q, -1.319248311640427, 0);
  sqcRYGate(q, -1.086481812477336, 1);
  sqcRZGate(q, -1.6692327850064865, 1);
  sqcRYGate(q, 2.230625200376095, 2);
  sqcRZGate(q, -2.7162271057443337, 2);
  sqcRYGate(q, -0.9446834798498945, 3);
  sqcRZGate(q, 0.12987265721223998, 3);
  sqcRYGate(q, -0.8127721791457305, 4);
  sqcRZGate(q, 0.8420698908690555, 4);
  sqcRYGate(q, 2.450105757013896, 5);
  sqcRZGate(q, -0.07552334138030112, 5);
  sqcRYGate(q, -1.0632618111386023, 6);
  sqcRZGate(q, 2.4371503073130487, 6);
  sqcRYGate(q, 2.44374056557962, 7);
  sqcRZGate(q, 0.17033345328834312, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.0176022033325545, 0);
  sqcRZGate(q, 2.0402363047921046, 0);
  sqcRYGate(q, -1.1874472600616572, 1);
  sqcRZGate(q, 1.7489390919147674, 1);
  sqcRYGate(q, -3.139213138829939, 2);
  sqcRZGate(q, -2.873708060276912, 2);
  sqcRYGate(q, -1.7191863117474744, 3);
  sqcRZGate(q, 1.6743185850073476, 3);
  sqcRYGate(q, -9.860387338449722e-05, 4);
  sqcRZGate(q, 2.299021139208832, 4);
  sqcRYGate(q, -3.1288299462319653, 5);
  sqcRZGate(q, 0.029474620189799513, 5);
  sqcRYGate(q, 0.9417056940873206, 6);
  sqcRZGate(q, 1.0539367886606978, 6);
  sqcRYGate(q, 1.910318377275801, 7);
  sqcRZGate(q, 0.8151857395166664, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.2308334083950445, 0);
  sqcRZGate(q, 1.4462146256612822, 0);
  sqcRYGate(q, -1.4053648878684324, 1);
  sqcRZGate(q, -1.2029692265414804, 1);
  sqcRYGate(q, -0.4491352026979829, 2);
  sqcRZGate(q, -2.4578524143935137, 2);
  sqcRYGate(q, 2.523217022277751, 3);
  sqcRZGate(q, 1.5125921177297919, 3);
  sqcRYGate(q, 1.4158623868498952, 4);
  sqcRZGate(q, -1.1494303439651397, 4);
  sqcRYGate(q, -0.42375396711529767, 5);
  sqcRZGate(q, -0.08762726869959428, 5);
  sqcRYGate(q, -0.003922920978144617, 6);
  sqcRZGate(q, 2.165224475014507, 6);
  sqcRYGate(q, -0.9748737446950972, 7);
  sqcRZGate(q, 1.6697307856388663, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.1412212911915587, 0);
  sqcRZGate(q, 0.794387146817947, 0);
  sqcRYGate(q, -0.030289269929020958, 1);
  sqcRZGate(q, -1.0630424826300684, 1);
  sqcRYGate(q, -0.0003826705859797386, 2);
  sqcRZGate(q, 0.3447724128866744, 2);
  sqcRYGate(q, 0.08454835921049586, 3);
  sqcRZGate(q, 0.705798236059759, 3);
  sqcRYGate(q, -0.03461356010134843, 4);
  sqcRZGate(q, -0.9467108866184, 4);
  sqcRYGate(q, -1.573648649495973, 5);
  sqcRZGate(q, -3.1370035601091284, 5);
  sqcRYGate(q, 0.3760288505203298, 6);
  sqcRZGate(q, 2.6342096084402815, 6);
  sqcRYGate(q, -2.805454228401579, 7);
  sqcRZGate(q, 2.4425194661645055, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.6239508099534232, 0);
  sqcRZGate(q, -1.1000969416664645, 0);
  sqcRYGate(q, -0.47097784319759234, 1);
  sqcRZGate(q, -1.3447085731800932, 1);
  sqcRYGate(q, -0.4739884110654386, 2);
  sqcRZGate(q, 0.6455042719429915, 2);
  sqcRYGate(q, 1.9290771205288353, 3);
  sqcRZGate(q, -0.07199044604220019, 3);
  sqcRYGate(q, 3.099312570045612, 4);
  sqcRZGate(q, 1.371705968985234, 4);
  sqcRYGate(q, 1.522164585668916, 5);
  sqcRZGate(q, -0.5520910301918294, 5);
  sqcRYGate(q, -1.5917810217291055, 6);
  sqcRZGate(q, 1.6553519189912562, 6);
  sqcRYGate(q, -2.5833041504418874, 7);
  sqcRZGate(q, -0.335223396844988, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.14074435400621, 0);
  sqcRZGate(q, 1.6004019181567875, 0);
  sqcRYGate(q, -1.2779557811431517, 1);
  sqcRZGate(q, -3.0905917999988146, 1);
  sqcRYGate(q, 0.0026647159252571125, 2);
  sqcRZGate(q, 2.0570285564353084, 2);
  sqcRYGate(q, -0.16188609797739542, 3);
  sqcRZGate(q, 0.9297806912674397, 3);
  sqcRYGate(q, 1.0485534788550692, 4);
  sqcRZGate(q, -2.032219410253298, 4);
  sqcRYGate(q, 3.1333887201084325, 5);
  sqcRZGate(q, 1.4836220391298358, 5);
  sqcRYGate(q, -0.10224873979417026, 6);
  sqcRZGate(q, -0.1458242125594089, 6);
  sqcRYGate(q, -1.3078620095935056, 7);
  sqcRZGate(q, 2.041477104227876, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.0187659446413315, 0);
  sqcRZGate(q, 2.1429500139504887, 0);
  sqcRYGate(q, 0.014903098301163209, 1);
  sqcRZGate(q, 1.145773327958147, 1);
  sqcRYGate(q, -2.9780309293268723, 2);
  sqcRZGate(q, 0.05599092643999448, 2);
  sqcRYGate(q, -1.8398859950063413, 3);
  sqcRZGate(q, 1.038496837776714, 3);
  sqcRYGate(q, -0.2562055406206065, 4);
  sqcRZGate(q, -0.08109131958477356, 4);
  sqcRYGate(q, -3.137593587398269, 5);
  sqcRZGate(q, 1.8197100773959693, 5);
  sqcRYGate(q, -0.05061485445259879, 6);
  sqcRZGate(q, 2.809720353180955, 6);
  sqcRYGate(q, -0.6889922456506329, 7);
  sqcRZGate(q, 1.8674414369882066, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.140846286103724, 0);
  sqcRZGate(q, -0.9042604575274575, 0);
  sqcRYGate(q, -2.444491981697122, 1);
  sqcRZGate(q, 2.3875020004223964, 1);
  sqcRYGate(q, -0.011724910331736282, 2);
  sqcRZGate(q, 0.7013250553480559, 2);
  sqcRYGate(q, -2.164566035545505, 3);
  sqcRZGate(q, 2.674521423145873, 3);
  sqcRYGate(q, 1.418293050870501, 4);
  sqcRZGate(q, -1.8881725674540117, 4);
  sqcRYGate(q, 0.9089731311480939, 5);
  sqcRZGate(q, 0.008432570453276611, 5);
  sqcRYGate(q, 0.15903353484877147, 6);
  sqcRZGate(q, -1.2313700271092567, 6);
  sqcRYGate(q, -0.23297300492575349, 7);
  sqcRZGate(q, 1.7693512025082792, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4064987413473986, 0);
  sqcRZGate(q, 1.823172501183104, 0);
  sqcRYGate(q, -1.807057014747383, 1);
  sqcRZGate(q, 0.46525495506084, 1);
  sqcRYGate(q, 3.1352170702824718, 2);
  sqcRZGate(q, 0.6520484650140013, 2);
  sqcRYGate(q, 3.1313048131424193, 3);
  sqcRZGate(q, -0.4510101834718805, 3);
  sqcRYGate(q, -3.140023056037654, 4);
  sqcRZGate(q, -2.1160346334601883, 4);
  sqcRYGate(q, -1.4557612472683148, 5);
  sqcRZGate(q, 0.05929960869470374, 5);
  sqcRYGate(q, 3.1389826997244743, 6);
  sqcRZGate(q, 1.0345849834845042, 6);
  sqcRYGate(q, 1.4396361053926718, 7);
  sqcRZGate(q, -3.0114764740899544, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.3954759010690345e-05, 0);
  sqcRZGate(q, -1.7488556625822254, 0);
  sqcRYGate(q, -1.8300041700109935, 1);
  sqcRZGate(q, -0.8018221672620554, 1);
  sqcRYGate(q, -3.1387946013984314, 2);
  sqcRZGate(q, 0.9260585821113141, 2);
  sqcRYGate(q, 1.030413092700896, 3);
  sqcRZGate(q, 2.9605226587262288, 3);
  sqcRYGate(q, 0.000829922262251146, 4);
  sqcRZGate(q, 1.3135308240797203, 4);
  sqcRYGate(q, 2.272192372330633, 5);
  sqcRZGate(q, 2.510281997160791, 5);
  sqcRYGate(q, -2.9700698832958663, 6);
  sqcRZGate(q, -0.09003011558477604, 6);
  sqcRYGate(q, 2.610475235873492, 7);
  sqcRZGate(q, 2.070225579896855, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.6551503396085008, 0);
  sqcRZGate(q, 1.7317078049825714, 0);
  sqcRYGate(q, 3.0904401803070094, 1);
  sqcRZGate(q, -0.7401573061999603, 1);
  sqcRYGate(q, -0.21180458008502728, 2);
  sqcRZGate(q, -0.8907806953597923, 2);
  sqcRYGate(q, -2.936825328797325, 3);
  sqcRZGate(q, 1.0689515991613856, 3);
  sqcRYGate(q, -3.0455804119762444, 4);
  sqcRZGate(q, 2.195454190307868, 4);
  sqcRYGate(q, 3.091156418898057, 5);
  sqcRZGate(q, -2.0916200148281603, 5);
  sqcRYGate(q, 1.54646961689535, 6);
  sqcRZGate(q, -2.8298957154987026, 6);
  sqcRYGate(q, -1.5938485460943415, 7);
  sqcRZGate(q, 2.1572482103079444, 7);

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
