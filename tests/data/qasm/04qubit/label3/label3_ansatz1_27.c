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

  sqcRYGate(q, 1.5117214847031037, 0);
  sqcRZGate(q, 0.11977009318731824, 0);
  sqcRYGate(q, -2.318898791828393, 1);
  sqcRZGate(q, 2.2216445125829045, 1);
  sqcRYGate(q, 2.2485805486831705, 2);
  sqcRZGate(q, -0.9375469206787076, 2);
  sqcRYGate(q, -3.1410298423764176, 3);
  sqcRZGate(q, -0.13262564248880532, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5836299063099515, 0);
  sqcRZGate(q, 0.4288969816615529, 0);
  sqcRYGate(q, 2.917231723989758, 1);
  sqcRZGate(q, -2.07417209830943, 1);
  sqcRYGate(q, -3.1064248446471048, 2);
  sqcRZGate(q, -0.28218938054399056, 2);
  sqcRYGate(q, -0.7365038321035879, 3);
  sqcRZGate(q, 2.423901185562243, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.05616340408108967, 0);
  sqcRZGate(q, 1.6190629368527725, 0);
  sqcRYGate(q, -2.601486982334194, 1);
  sqcRZGate(q, 1.451468174092975, 1);
  sqcRYGate(q, -1.8445754898336952, 2);
  sqcRZGate(q, 1.8897009084312342, 2);
  sqcRYGate(q, -2.9789002345427678, 3);
  sqcRZGate(q, 1.4991120217705456, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2599330742178507, 0);
  sqcRZGate(q, 0.12267580032648662, 0);
  sqcRYGate(q, 0.09942573890910555, 1);
  sqcRZGate(q, 2.207434465039924, 1);
  sqcRYGate(q, -1.687790669122375, 2);
  sqcRZGate(q, 2.0684959020481792, 2);
  sqcRYGate(q, 1.8603065594138444, 3);
  sqcRZGate(q, 0.13192858743051605, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.131125721966242, 0);
  sqcRZGate(q, -1.7083260677561922, 0);
  sqcRYGate(q, -0.2136606108548288, 1);
  sqcRZGate(q, 1.2549929416089984, 1);
  sqcRYGate(q, 2.9784827691073317, 2);
  sqcRZGate(q, 0.9735494022004652, 2);
  sqcRYGate(q, -0.5303096896827733, 3);
  sqcRZGate(q, 1.5248745651593514, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.723405982415077, 0);
  sqcRZGate(q, 0.47489626776955224, 0);
  sqcRYGate(q, -0.9987403752113223, 1);
  sqcRZGate(q, 0.23318346510090304, 1);
  sqcRYGate(q, -1.3258517996552652, 2);
  sqcRZGate(q, -2.4954768371870393, 2);
  sqcRYGate(q, 0.013068153728217785, 3);
  sqcRZGate(q, -1.4798023079374918, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.895629592705626, 0);
  sqcRZGate(q, 0.9090212576671642, 0);
  sqcRYGate(q, -0.6078509640410726, 1);
  sqcRZGate(q, 2.118993264574695, 1);
  sqcRYGate(q, 1.7957436786512413, 2);
  sqcRZGate(q, 1.5895052667854679, 2);
  sqcRYGate(q, -3.0998515632884187, 3);
  sqcRZGate(q, 2.0091758135351228, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2660459067326073, 0);
  sqcRZGate(q, 1.3744807062139, 0);
  sqcRYGate(q, -2.2020588660029627, 1);
  sqcRZGate(q, 2.562527796788369, 1);
  sqcRYGate(q, -1.0031377732518585, 2);
  sqcRZGate(q, -2.0246301431819935, 2);
  sqcRYGate(q, 1.670189632370212, 3);
  sqcRZGate(q, -0.3486674922336137, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2254238425908586, 0);
  sqcRZGate(q, -0.2434539575636797, 0);
  sqcRYGate(q, 2.2356369342326903, 1);
  sqcRZGate(q, -0.3104217225069448, 1);
  sqcRYGate(q, -2.019151627945707, 2);
  sqcRZGate(q, -2.233427236449254, 2);
  sqcRYGate(q, -2.41362818102302, 3);
  sqcRZGate(q, -0.7267571298878702, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8460869171500682, 0);
  sqcRZGate(q, -2.112519305888847, 0);
  sqcRYGate(q, -0.428496016626118, 1);
  sqcRZGate(q, -2.7824442766539423, 1);
  sqcRYGate(q, 1.0262943273595528, 2);
  sqcRZGate(q, 0.6996277367830022, 2);
  sqcRYGate(q, -2.4409502678445727, 3);
  sqcRZGate(q, -3.046479106926262, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.176603926936684, 0);
  sqcRZGate(q, 1.6646083563623564, 0);
  sqcRYGate(q, -2.0195438739312292, 1);
  sqcRZGate(q, -2.732689331172974, 1);
  sqcRYGate(q, 2.046223227625231, 2);
  sqcRZGate(q, 1.84925229836412, 2);
  sqcRYGate(q, -2.383997497018016, 3);
  sqcRZGate(q, 1.6349322513183535, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.08038431486692942, 0);
  sqcRZGate(q, 1.745930309583122, 0);
  sqcRYGate(q, 2.814499301444904, 1);
  sqcRZGate(q, -2.1318799249851055, 1);
  sqcRYGate(q, -0.1823158921177754, 2);
  sqcRZGate(q, -1.092033542480293, 2);
  sqcRYGate(q, -0.3731896610875163, 3);
  sqcRZGate(q, -2.4448682650227003, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.19072268882032709, 0);
  sqcRZGate(q, 0.8726713682742329, 0);
  sqcRYGate(q, -0.2644588845647533, 1);
  sqcRZGate(q, 0.7787074369256162, 1);
  sqcRYGate(q, -0.10768454783140591, 2);
  sqcRZGate(q, 0.11533303087865812, 2);
  sqcRYGate(q, 1.9619241338572375, 3);
  sqcRZGate(q, -2.9724938121631843, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0678617118274614, 0);
  sqcRZGate(q, 2.8516096303442153, 0);
  sqcRYGate(q, 1.125994122686091, 1);
  sqcRZGate(q, -0.9809109550499278, 1);
  sqcRYGate(q, 2.3508495646161127, 2);
  sqcRZGate(q, -0.8738908165945188, 2);
  sqcRYGate(q, 1.4841492909211267, 3);
  sqcRZGate(q, 1.3071033783006074, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6857858820984872, 0);
  sqcRZGate(q, 0.18416770859669904, 0);
  sqcRYGate(q, -0.8736072052528943, 1);
  sqcRZGate(q, -0.875312810823618, 1);
  sqcRYGate(q, 0.8055759845010506, 2);
  sqcRZGate(q, -2.0154518886280304, 2);
  sqcRYGate(q, -1.272143162047211, 3);
  sqcRZGate(q, -1.8421249162122821, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3272012030460418, 0);
  sqcRZGate(q, -2.1616842666081606, 0);
  sqcRYGate(q, 3.128102676406784, 1);
  sqcRZGate(q, 1.7351544297360983, 1);
  sqcRYGate(q, 1.9755459767861538, 2);
  sqcRZGate(q, -2.5792176430492537, 2);
  sqcRYGate(q, -0.22355398174793936, 3);
  sqcRZGate(q, 1.4385162745009803, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5431041351763505, 0);
  sqcRZGate(q, -0.10819875480301545, 0);
  sqcRYGate(q, -2.4013464189392266, 1);
  sqcRZGate(q, -0.6698482332979249, 1);
  sqcRYGate(q, -2.9406311362652597, 2);
  sqcRZGate(q, -2.128565297917347, 2);
  sqcRYGate(q, -0.67019809829337, 3);
  sqcRZGate(q, -2.177920953383315, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9777706353119453, 0);
  sqcRZGate(q, -0.4665414657128712, 0);
  sqcRYGate(q, 1.902779437333867, 1);
  sqcRZGate(q, -1.5045853255470374, 1);
  sqcRYGate(q, 2.49176716046178, 2);
  sqcRZGate(q, 0.8156467980000998, 2);
  sqcRYGate(q, -1.180979525073126, 3);
  sqcRZGate(q, -2.101554316865993, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0665172670863927, 0);
  sqcRZGate(q, -1.8062417055552196, 0);
  sqcRYGate(q, -2.556400887673115, 1);
  sqcRZGate(q, 3.0933283635464197, 1);
  sqcRYGate(q, -0.5330961940675143, 2);
  sqcRZGate(q, -1.4768354653250393, 2);
  sqcRYGate(q, -1.3669761621767407, 3);
  sqcRZGate(q, 2.0356161389843273, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.080292904043331, 0);
  sqcRZGate(q, -1.8614408516875196, 0);
  sqcRYGate(q, 0.5869405536634624, 1);
  sqcRZGate(q, 1.3261598915717183, 1);
  sqcRYGate(q, 2.4116809855444377, 2);
  sqcRZGate(q, -3.0558409832915587, 2);
  sqcRYGate(q, 0.5909549505709213, 3);
  sqcRZGate(q, 1.2150603542492382, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7504341522954205, 0);
  sqcRZGate(q, -1.1487968043852548, 0);
  sqcRYGate(q, 1.2362740198616242, 1);
  sqcRZGate(q, 1.259442789973992, 1);
  sqcRYGate(q, 1.5127014694926482, 2);
  sqcRZGate(q, 0.5159161055956947, 2);
  sqcRYGate(q, 3.052942185227682, 3);
  sqcRZGate(q, 2.5516185738625214, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.08250365164559, 0);
  sqcRZGate(q, -3.063744690808583, 0);
  sqcRYGate(q, -1.6339022605747537, 1);
  sqcRZGate(q, 0.16162937764312418, 1);
  sqcRYGate(q, 2.239887842910182, 2);
  sqcRZGate(q, -1.5467870128240309, 2);
  sqcRYGate(q, -0.3538653052800411, 3);
  sqcRZGate(q, -1.3493297955574222, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.22567443727529124, 0);
  sqcRZGate(q, -0.09174532058575569, 0);
  sqcRYGate(q, 1.956357429322632, 1);
  sqcRZGate(q, -2.5644842296254775, 1);
  sqcRYGate(q, 1.826902399204947, 2);
  sqcRZGate(q, 0.6682174351903334, 2);
  sqcRYGate(q, -1.8240076149949864, 3);
  sqcRZGate(q, -1.2250512301469874, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8837029736729285, 0);
  sqcRZGate(q, 0.9992371777237383, 0);
  sqcRYGate(q, 2.4037855828173105, 1);
  sqcRZGate(q, 0.12754533035830587, 1);
  sqcRYGate(q, 1.8572673511459934, 2);
  sqcRZGate(q, 0.7539934873183451, 2);
  sqcRYGate(q, 2.6071221127546833, 3);
  sqcRZGate(q, 2.805710015636487, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0227540677463076, 0);
  sqcRZGate(q, 2.864278632060902, 0);
  sqcRYGate(q, -1.6064228626624515, 1);
  sqcRZGate(q, -1.5470365241054056, 1);
  sqcRYGate(q, 2.1713930293239443, 2);
  sqcRZGate(q, 2.013863209443011, 2);
  sqcRYGate(q, -2.9392240434822408, 3);
  sqcRZGate(q, -2.296848852502086, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8347570165543869, 0);
  sqcRZGate(q, -1.4884766731627972, 0);
  sqcRYGate(q, 1.7426478016609002, 1);
  sqcRZGate(q, -2.899963174713096, 1);
  sqcRYGate(q, 0.5739579400465173, 2);
  sqcRZGate(q, -1.1791071465407004, 2);
  sqcRYGate(q, 1.9709451168588208, 3);
  sqcRZGate(q, 0.35159919712582616, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.330199286594634, 0);
  sqcRZGate(q, -2.429228710537852, 0);
  sqcRYGate(q, 2.9774573608907358, 1);
  sqcRZGate(q, 0.005318138739185408, 1);
  sqcRYGate(q, 0.10927912949923346, 2);
  sqcRZGate(q, -2.584267578572933, 2);
  sqcRYGate(q, 0.4157827786154973, 3);
  sqcRZGate(q, -2.7262327414309806, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.31240534083966676, 0);
  sqcRZGate(q, -2.6190855500931254, 0);
  sqcRYGate(q, 0.39645926012724186, 1);
  sqcRZGate(q, 0.3648977317296174, 1);
  sqcRYGate(q, -2.585518242333884, 2);
  sqcRZGate(q, 1.6720390983715365, 2);
  sqcRYGate(q, -2.5574557512233143, 3);
  sqcRZGate(q, -1.4012870424056227, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5001479136926568, 0);
  sqcRZGate(q, 1.941486806225603, 0);
  sqcRYGate(q, -1.0978523219457612, 1);
  sqcRZGate(q, 0.8260760523286437, 1);
  sqcRYGate(q, -3.075788816751096, 2);
  sqcRZGate(q, 0.5386066427288502, 2);
  sqcRYGate(q, 1.2995003114350379, 3);
  sqcRZGate(q, -1.8058887265207424, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1060568365776993, 0);
  sqcRZGate(q, 1.9438198915628413, 0);
  sqcRYGate(q, -1.6956919917025803, 1);
  sqcRZGate(q, 1.0020652872861993, 1);
  sqcRYGate(q, -1.5209017864699739, 2);
  sqcRZGate(q, 0.8307836965594123, 2);
  sqcRYGate(q, -0.047707164012905826, 3);
  sqcRZGate(q, 1.9951744017430149, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.612417223677103, 0);
  sqcRZGate(q, -2.3863691583823288, 0);
  sqcRYGate(q, 0.9532706816247052, 1);
  sqcRZGate(q, -1.2288902271880622, 1);
  sqcRYGate(q, -3.140900534296918, 2);
  sqcRZGate(q, -2.335884712375608, 2);
  sqcRYGate(q, 0.5221923022878628, 3);
  sqcRZGate(q, -2.958522381610657, 3);

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
