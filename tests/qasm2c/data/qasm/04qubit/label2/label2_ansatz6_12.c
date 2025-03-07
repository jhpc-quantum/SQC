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

  sqcRYGate(q, -1.5977791579836558, 0);
  sqcRYGate(q, 1.9611827027050035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2541236314672091, 0);
  sqcRYGate(q, 0.533600583699429, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.012574949227993, 1);
  sqcRYGate(q, 0.7255128976147678, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9936467073396034, 1);
  sqcRYGate(q, 1.0280822635973053, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8415529103553421, 2);
  sqcRYGate(q, -2.141367004336871, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1408444133293827, 2);
  sqcRYGate(q, 2.8893339743811377, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6522148041219813, 0);
  sqcRYGate(q, 2.4605606550973427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.004782580099463196, 0);
  sqcRYGate(q, -0.7083475038237035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.28278101974116565, 1);
  sqcRYGate(q, 1.2847319198658118, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0204378921102384, 1);
  sqcRYGate(q, -1.5407666724811184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4279860937316156, 2);
  sqcRYGate(q, -1.4786533638673012, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0575933238053725, 2);
  sqcRYGate(q, -3.0839627875141957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.842506982706234, 0);
  sqcRYGate(q, 3.000944861522206, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.024359079073969, 0);
  sqcRYGate(q, 2.2053424925085405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.31443800336725486, 1);
  sqcRYGate(q, 2.0699715209524623, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.297137001760092, 1);
  sqcRYGate(q, -1.2001555808032343, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.407787348170066, 2);
  sqcRYGate(q, 2.0055445721438026, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.35645469051686524, 2);
  sqcRYGate(q, -2.7242984321361265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.300297150828822, 0);
  sqcRYGate(q, 2.6914395805069353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.90993179093104, 0);
  sqcRYGate(q, -0.9071116729330815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23095281609147802, 1);
  sqcRYGate(q, 2.3858417618077863, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.861858241278206, 1);
  sqcRYGate(q, -2.496883786466934, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5590479230057452, 2);
  sqcRYGate(q, 2.1879385395441235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0115519019260901, 2);
  sqcRYGate(q, 2.9909961264443625, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4480170714064773, 0);
  sqcRYGate(q, 1.1281097794773993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2891533179080807, 0);
  sqcRYGate(q, 2.1187726659877866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.951055710125951, 1);
  sqcRYGate(q, -1.5136676647789598, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.851951177480093, 1);
  sqcRYGate(q, -0.8203738025197049, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9784000873302947, 2);
  sqcRYGate(q, 2.182324429005727, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5125014972194011, 2);
  sqcRYGate(q, 2.1729988819601207, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9128072532777134, 0);
  sqcRYGate(q, 0.5973618738771883, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.228188362050445, 0);
  sqcRYGate(q, -2.103467348028905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.452004536258668, 1);
  sqcRYGate(q, 1.5164973369613752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4881496673784005, 1);
  sqcRYGate(q, -2.9892577125855393, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6401996422857825, 2);
  sqcRYGate(q, 1.5347533712593862, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8303736622410373, 2);
  sqcRYGate(q, -2.498663822950127, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.911436048283756, 0);
  sqcRYGate(q, -1.129757299867407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.22833679824674705, 0);
  sqcRYGate(q, -0.49439595304848155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.49344163458514734, 1);
  sqcRYGate(q, -1.9355487599008336, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6702032145760228, 1);
  sqcRYGate(q, -2.9146524038487724, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.958444171949289, 2);
  sqcRYGate(q, 1.923053796070415, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0692029521062885, 2);
  sqcRYGate(q, -0.8717184478700317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0124225844055286, 0);
  sqcRYGate(q, -1.964104470163453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7995700020838409, 0);
  sqcRYGate(q, -2.221538150665562, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3913727688406823, 1);
  sqcRYGate(q, 1.927746813220594, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6419531853004399, 1);
  sqcRYGate(q, 0.007651443658081604, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9391521985133154, 2);
  sqcRYGate(q, -2.4415805618479802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1533715027600211, 2);
  sqcRYGate(q, -1.1656999753411719, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.35874452560753667, 0);
  sqcRYGate(q, 1.729588687647741, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8385334396351718, 0);
  sqcRYGate(q, 0.39850072121372104, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1746353701164853, 1);
  sqcRYGate(q, 0.5931810023862203, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9988321925750316, 1);
  sqcRYGate(q, 1.7674041054820122, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3709046644053964, 2);
  sqcRYGate(q, -0.3517416265580495, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8354806018307412, 2);
  sqcRYGate(q, 1.134078488491241, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.25087709952365156, 0);
  sqcRYGate(q, -1.5827291077393637, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0273625511034616, 0);
  sqcRYGate(q, -2.220818255264388, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.388350615145093, 1);
  sqcRYGate(q, -1.3839647264269455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7874033130697211, 1);
  sqcRYGate(q, 1.4870228373178636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.450727426003536, 2);
  sqcRYGate(q, 3.0380997994303907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1265596059950092, 2);
  sqcRYGate(q, 0.7736776872466073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4025187927840344, 0);
  sqcRYGate(q, 2.645229964020027, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8763715948741795, 0);
  sqcRYGate(q, 2.842823662464066, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.111804425993265, 1);
  sqcRYGate(q, -0.42584142573752753, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9864736587009431, 1);
  sqcRYGate(q, -2.150295127411842, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6648170285435635, 2);
  sqcRYGate(q, 0.7820957155945777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8473210036221115, 2);
  sqcRYGate(q, 1.3769133388807901, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.567507016214936, 0);
  sqcRYGate(q, -0.698564579190629, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9497651487495236, 0);
  sqcRYGate(q, 1.284886869854534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5415632874201748, 1);
  sqcRYGate(q, 1.1334538281735256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7789521046439123, 1);
  sqcRYGate(q, -2.465583841190414, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2536621156365184, 2);
  sqcRYGate(q, -2.4438196402315002, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2041976119492341, 2);
  sqcRYGate(q, 1.2576443421595822, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.04738393700115662, 0);
  sqcRYGate(q, -2.850889656083324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.156405931832576, 0);
  sqcRYGate(q, -1.9347648961099169, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.21347625188611286, 1);
  sqcRYGate(q, 0.23180906812398552, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.366117605014846, 1);
  sqcRYGate(q, -0.7594784245100561, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.80704500649669, 2);
  sqcRYGate(q, 1.3562943294843848, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5970999570017126, 2);
  sqcRYGate(q, 1.0720895239575672, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.401674237831725, 0);
  sqcRYGate(q, 1.012873734883101, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7809024693112367, 0);
  sqcRYGate(q, 0.71101421029147, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.279607006771581, 1);
  sqcRYGate(q, 0.5776242318283381, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2163798259773615, 1);
  sqcRYGate(q, -3.036534582637216, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7907885830800474, 2);
  sqcRYGate(q, 2.58345291127734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6710390538143904, 2);
  sqcRYGate(q, 2.0294608799995095, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0426210280309136, 0);
  sqcRYGate(q, -2.8167853794930795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8640679449845208, 0);
  sqcRYGate(q, 1.129205604986815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.773076778839414, 1);
  sqcRYGate(q, -1.8335091042416813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.140265423262145, 1);
  sqcRYGate(q, 3.113265390891541, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3361101698530127, 2);
  sqcRYGate(q, 0.07702184229596971, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.918872803873982, 2);
  sqcRYGate(q, -0.3815308384167216, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.46564019874678014, 0);
  sqcRYGate(q, -0.8965073234119609, 1);
  sqcRYGate(q, 2.1640083646447748, 2);
  sqcRYGate(q, -0.254417774990612, 3);

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
