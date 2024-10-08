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

  sqcRYGate(q, 0.4697999341791832, 0);
  sqcRYGate(q, -2.36420522225266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.367012157878501, 0);
  sqcRYGate(q, 2.921727730164335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8008088755824933, 2);
  sqcRYGate(q, -2.6787306551888777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6032068356150504, 2);
  sqcRYGate(q, 2.5634814327837803, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4556054674090149, 0);
  sqcRYGate(q, 0.4486437274145212, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.501814710275049, 0);
  sqcRYGate(q, 1.1206664721705488, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.951411864480734, 1);
  sqcRYGate(q, -0.5436284843540591, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5469254340062686, 1);
  sqcRYGate(q, -0.9950001737301146, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8518499146505711, 0);
  sqcRYGate(q, 2.449825387452007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5704277174803885, 0);
  sqcRYGate(q, 1.5190642692480445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6195359428663973, 2);
  sqcRYGate(q, -1.1510889171321261, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9303677801147672, 2);
  sqcRYGate(q, 1.0892142097607271, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8176186396621854, 0);
  sqcRYGate(q, 2.8448379000884403, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4083088971207394, 0);
  sqcRYGate(q, 0.6320495616633517, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4153741005041267, 1);
  sqcRYGate(q, -1.9824951035038156, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7743061622057859, 1);
  sqcRYGate(q, 1.5644375813873133, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.471886556961179, 0);
  sqcRYGate(q, -2.2178917723436014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9896459520950012, 0);
  sqcRYGate(q, 2.529955619413902, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.144514178983262, 2);
  sqcRYGate(q, -3.1000607888040967, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5551263857922804, 2);
  sqcRYGate(q, -0.38391431545838284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7551460346062258, 0);
  sqcRYGate(q, 1.3832358528461288, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2077917143370107, 0);
  sqcRYGate(q, -0.810382115721187, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.780249860894954, 1);
  sqcRYGate(q, 1.8715248078052795, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0731355572079053, 1);
  sqcRYGate(q, -0.9659214272704632, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.701662711093312, 0);
  sqcRYGate(q, -1.2493065286101033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10813013852880891, 0);
  sqcRYGate(q, -2.161746150437472, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6539715795236369, 2);
  sqcRYGate(q, -3.0706069168989094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.123324702871854, 2);
  sqcRYGate(q, -2.806564852879173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17621608694368424, 0);
  sqcRYGate(q, -2.091217205875399, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1276275215793197, 0);
  sqcRYGate(q, 0.7395424306556285, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8604037613251547, 1);
  sqcRYGate(q, -2.8852945251608797, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.04380327391383, 1);
  sqcRYGate(q, 2.8609727501536146, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8466405530726728, 0);
  sqcRYGate(q, -1.88704555746503, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09540903309666593, 0);
  sqcRYGate(q, 0.4614268491113372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.940192246569357, 2);
  sqcRYGate(q, -0.5269154678054849, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2584100213416617, 2);
  sqcRYGate(q, -1.5557794826317108, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.379486304241342, 0);
  sqcRYGate(q, -0.16187171899471497, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.26882154276466286, 0);
  sqcRYGate(q, 1.8020188754007893, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7629266327096444, 1);
  sqcRYGate(q, -0.017190022754159106, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3550780648475926, 1);
  sqcRYGate(q, 2.3001171051072924, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.638592689709177, 0);
  sqcRYGate(q, -0.5679288039296475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5479230610261792, 0);
  sqcRYGate(q, -2.9060376799473993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7952213205880008, 2);
  sqcRYGate(q, 2.3889609004575068, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5441859881330906, 2);
  sqcRYGate(q, 3.070142715449577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7689664816806303, 0);
  sqcRYGate(q, -0.7564709875788136, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.22610996807635497, 0);
  sqcRYGate(q, -2.186288857763903, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.790860628459833, 1);
  sqcRYGate(q, 0.4411950333210734, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.609573289917966, 1);
  sqcRYGate(q, 2.7552951967424577, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.606030530666774, 0);
  sqcRYGate(q, 1.0019185906915216, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0030649313334706672, 0);
  sqcRYGate(q, 1.8127014724348791, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4002623361739426, 2);
  sqcRYGate(q, 2.6194765316649966, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0328424810438418, 2);
  sqcRYGate(q, -2.2970664790607263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7283669337269427, 0);
  sqcRYGate(q, 1.383736956899459, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9015309215797096, 0);
  sqcRYGate(q, -1.523711907969449, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.712396757223822, 1);
  sqcRYGate(q, -2.3718733339782347, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.047850377449911, 1);
  sqcRYGate(q, -2.6076946757179953, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5323751598393648, 0);
  sqcRYGate(q, 0.32079973027535935, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.083126224393452, 0);
  sqcRYGate(q, -1.806827127829943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5677263912250226, 2);
  sqcRYGate(q, 0.6187955339349442, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.025873402169522226, 2);
  sqcRYGate(q, -0.7870928374791322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8851772332973372, 0);
  sqcRYGate(q, -1.9580026485754791, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1380902956072279, 0);
  sqcRYGate(q, 1.6792801246677398, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9903327399626027, 1);
  sqcRYGate(q, -2.097875345830311, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5578055322346771, 1);
  sqcRYGate(q, 1.6703761012200984, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.539114746640174, 0);
  sqcRYGate(q, 2.8708054261525913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6891156720763263, 0);
  sqcRYGate(q, -2.3950578867423555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07147436346184753, 2);
  sqcRYGate(q, 0.025502189961597033, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.91949437435662, 2);
  sqcRYGate(q, 1.3045689316961349, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.050395708227775, 0);
  sqcRYGate(q, 2.6913635996777296, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2473754806332247, 0);
  sqcRYGate(q, 1.5114562284575177, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1857797090851792, 1);
  sqcRYGate(q, -2.2657958621894454, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.12728455855122933, 1);
  sqcRYGate(q, -0.9301078222211121, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5920371990655349, 0);
  sqcRYGate(q, -1.7187150055826965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.76186510379315, 0);
  sqcRYGate(q, 2.456197217435291, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9026855308122461, 2);
  sqcRYGate(q, 0.036006939617108984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5791037826883294, 2);
  sqcRYGate(q, -1.777968063289435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.908524171557744, 0);
  sqcRYGate(q, 2.7252651613092476, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5180859373217706, 0);
  sqcRYGate(q, -0.7854636670057779, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.09498240981387285, 1);
  sqcRYGate(q, -1.7188508005596435, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9718498086684573, 1);
  sqcRYGate(q, -0.14432884391333856, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3330875498086736, 0);
  sqcRYGate(q, 0.08002716859357407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7196179081010878, 0);
  sqcRYGate(q, 0.20993920106414543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7711421732077383, 2);
  sqcRYGate(q, 0.7943141995971752, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5472163576434994, 2);
  sqcRYGate(q, -1.7532491469068177, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6989233617981937, 0);
  sqcRYGate(q, 2.3969982614280387, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.08832759682463516, 0);
  sqcRYGate(q, 0.47422286756499865, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5873545909979736, 1);
  sqcRYGate(q, -0.03826626444175041, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0882637590693571, 1);
  sqcRYGate(q, -1.3508519059618944, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3805448575636756, 0);
  sqcRYGate(q, -0.9841436331671236, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.409954245913326, 0);
  sqcRYGate(q, -0.9581959384128566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6007207291634877, 2);
  sqcRYGate(q, 0.4092316804401341, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.253588344663074, 2);
  sqcRYGate(q, 0.11953702017442763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7314685676672052, 0);
  sqcRYGate(q, 3.056329799212283, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5349690826751488, 0);
  sqcRYGate(q, -0.04438268679362789, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.733640368444763, 1);
  sqcRYGate(q, -2.9523397887289233, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6499403973853113, 1);
  sqcRYGate(q, 1.4369504908617103, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.503968348802089, 0);
  sqcRYGate(q, -0.4758487430153291, 1);
  sqcRYGate(q, 1.6908637186415432, 2);
  sqcRYGate(q, -2.437813394700894, 3);

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
