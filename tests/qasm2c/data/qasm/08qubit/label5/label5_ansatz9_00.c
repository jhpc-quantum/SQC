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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.21093663141050012, 0);
  sqcRYGate(q, -2.2832219938481044, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1755848608270134, 0);
  sqcRYGate(q, 1.9157435702263133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10146027200857068, 2);
  sqcRYGate(q, 3.0016087035071, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8074288774505547, 2);
  sqcRYGate(q, -2.2369668075947367, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3375092181663564, 4);
  sqcRYGate(q, 2.3781473259708186, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.145412272149647, 4);
  sqcRYGate(q, -3.0681173470960665, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.327330003485027, 6);
  sqcRYGate(q, -2.764359599987207, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1555761162717264, 6);
  sqcRYGate(q, 2.9679713141670088, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6006431262508274, 0);
  sqcRYGate(q, 1.4314341808507494, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1415308913058695, 0);
  sqcRYGate(q, -2.5749299685674236, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4235647782985514, 2);
  sqcRYGate(q, -1.2062845308939147, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.660055102213343, 2);
  sqcRYGate(q, -2.3376828882012735, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.191907820820659, 4);
  sqcRYGate(q, -0.2796926177887809, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.553375238233116, 4);
  sqcRYGate(q, -0.5720845229136691, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2865972791560338, 1);
  sqcRYGate(q, 0.28782015178063736, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3673967954315964, 1);
  sqcRYGate(q, -2.3137987122298007, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1153610871037998, 3);
  sqcRYGate(q, 2.534966009423955, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.8823028738361713, 3);
  sqcRYGate(q, 2.624994227175942, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.9568758611952048, 5);
  sqcRYGate(q, -1.3006922366639802, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.1242840700637515, 5);
  sqcRYGate(q, -1.6183461802288814, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7908068561552826, 0);
  sqcRYGate(q, -0.7127841684660607, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4054466328941975, 0);
  sqcRYGate(q, 0.927973399948006, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7076460865229783, 1);
  sqcRYGate(q, 2.117431085264575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9984622874793976, 1);
  sqcRYGate(q, 2.24292730027785, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2879865628548781, 2);
  sqcRYGate(q, -0.9420105886056056, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.861492068205998, 2);
  sqcRYGate(q, -2.843588598287871, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.579014949701541, 3);
  sqcRYGate(q, 1.2467713376402378, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8035070509281194, 3);
  sqcRYGate(q, -2.3298684193022394, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.20339268810484043, 4);
  sqcRYGate(q, -1.1189408048529597, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.21270764281971835, 4);
  sqcRYGate(q, -0.578037560419724, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.6143500670488353, 5);
  sqcRYGate(q, 1.0057985304847352, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.285896340638805, 5);
  sqcRYGate(q, 1.3664180849676466, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9772353700791043, 0);
  sqcRYGate(q, -2.998710403931491, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3157218464275706, 0);
  sqcRYGate(q, 0.7602712035626695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1816742853394615, 2);
  sqcRYGate(q, -0.02433639045523428, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.323075922676851, 2);
  sqcRYGate(q, -2.8122676837949827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4760455703895348, 4);
  sqcRYGate(q, 0.3838057017084989, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8127388236760416, 4);
  sqcRYGate(q, 1.408999087327555, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.29024155007827, 6);
  sqcRYGate(q, -3.0016207227980782, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.830530719136193, 6);
  sqcRYGate(q, -1.4596347010646102, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.388644958513363, 0);
  sqcRYGate(q, -2.4730097524585273, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2578785508149063, 0);
  sqcRYGate(q, 2.648588840242029, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.523621883459584, 2);
  sqcRYGate(q, -2.964936864199731, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5101287089026734, 2);
  sqcRYGate(q, -1.3723065790260813, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.4646502313118988, 4);
  sqcRYGate(q, -0.16381768452149092, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.2007445908527057, 4);
  sqcRYGate(q, 1.7487673072163668, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.3266401840433337, 1);
  sqcRYGate(q, -2.5616433615838385, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1402641465133883, 1);
  sqcRYGate(q, 2.976815116888382, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1700304329643574, 3);
  sqcRYGate(q, 1.6241084514784496, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.3420412413371343, 3);
  sqcRYGate(q, 0.2854598558834134, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8088185039541287, 5);
  sqcRYGate(q, 1.330489505569341, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.2501329699677823, 5);
  sqcRYGate(q, 2.8459620327814363, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.027144539810781, 0);
  sqcRYGate(q, -1.545626164471846, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7360524907687847, 0);
  sqcRYGate(q, -1.4392728624195463, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.38019180444840034, 1);
  sqcRYGate(q, 0.9936312345390086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.877893142595809, 1);
  sqcRYGate(q, -1.2194404904358078, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7984495845647166, 2);
  sqcRYGate(q, -2.116251509640918, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.22401186334785508, 2);
  sqcRYGate(q, -2.922453957066793, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.850641434355313, 3);
  sqcRYGate(q, 0.4252263998874062, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9059214887827607, 3);
  sqcRYGate(q, 2.7730441720280816, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9237198160290307, 4);
  sqcRYGate(q, 1.6545248650796527, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.5218460401556047, 4);
  sqcRYGate(q, -1.4345923465709358, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.9040433351590078, 5);
  sqcRYGate(q, 0.22540676877618365, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0008883168007126, 5);
  sqcRYGate(q, 2.5773367234852165, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9834631410117722, 0);
  sqcRYGate(q, 0.45101678152607483, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.636617894452792, 0);
  sqcRYGate(q, -0.7613942901959769, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9905816923052866, 2);
  sqcRYGate(q, -0.9454734885680107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.680773616062593, 2);
  sqcRYGate(q, -2.417899659629749, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9318053990319957, 4);
  sqcRYGate(q, -2.886011173372146, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.481562975806286, 4);
  sqcRYGate(q, -0.07729593260560816, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2361505220603253, 6);
  sqcRYGate(q, 2.3507552820011717, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5373552449829324, 6);
  sqcRYGate(q, -0.16332853510337042, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3506181651262015, 0);
  sqcRYGate(q, -2.73347116687155, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.759095080717834, 0);
  sqcRYGate(q, 3.0621968247746145, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3226959449320894, 2);
  sqcRYGate(q, -0.41572472873465666, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1579177873522797, 2);
  sqcRYGate(q, 0.18534416858870006, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.7478933024262036, 4);
  sqcRYGate(q, -0.2422255313517505, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.08329659850591248, 4);
  sqcRYGate(q, -1.4256733980813259, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5142004845544141, 1);
  sqcRYGate(q, -2.5468119284402584, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4657756033273133, 1);
  sqcRYGate(q, -1.6611080286215363, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.13863027918214765, 3);
  sqcRYGate(q, -0.09886325116467534, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.2027253537008198, 3);
  sqcRYGate(q, 0.24233064388044573, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5459545072558161, 5);
  sqcRYGate(q, 0.8793434171645218, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.43430543845238073, 5);
  sqcRYGate(q, -1.9946736122531004, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.784246783483571, 0);
  sqcRYGate(q, 2.551823993146538, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8652170092894851, 0);
  sqcRYGate(q, 2.2237823317763903, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7936363645818947, 1);
  sqcRYGate(q, 0.7192896414668429, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.17641306465941486, 1);
  sqcRYGate(q, -0.5442773501844531, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4481636362885173, 2);
  sqcRYGate(q, -0.804571098531491, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.476650255640842, 2);
  sqcRYGate(q, 2.5620668051172255, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.7891936558711388, 3);
  sqcRYGate(q, -2.915129208671748, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4879974295027072, 3);
  sqcRYGate(q, 2.8394164083345657, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7878105570772789, 4);
  sqcRYGate(q, 0.8923788528915235, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.5229239308969944, 4);
  sqcRYGate(q, 0.4642719581987426, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.559833125430214, 5);
  sqcRYGate(q, 1.3070795150454568, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3396197315272953, 5);
  sqcRYGate(q, 2.763279657227386, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5941045778394586, 0);
  sqcRYGate(q, 2.155038502247817, 1);
  sqcRYGate(q, 2.882096813392471, 2);
  sqcRYGate(q, 1.5529446081791543, 3);
  sqcRYGate(q, -1.0844600603323684, 4);
  sqcRYGate(q, -0.24026557716272193, 5);
  sqcRYGate(q, -1.7742474731460387, 6);
  sqcRYGate(q, -1.5316665352323948, 7);

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
