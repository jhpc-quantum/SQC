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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 1.6285369705792772, 0);
  sqcRZGate(q, -1.5685205113919913, 0);
  sqcRYGate(q, -3.109092871931429, 1);
  sqcRZGate(q, 2.5213345244268823, 1);
  sqcRYGate(q, 1.5706767633256045, 2);
  sqcRZGate(q, 2.708074004914045, 2);
  sqcRYGate(q, -1.5705255101409528, 3);
  sqcRZGate(q, 2.4947058136795253, 3);
  sqcRYGate(q, -3.1288500895971145, 4);
  sqcRZGate(q, 2.7066970359441935, 4);
  sqcRYGate(q, -3.09660678634555, 5);
  sqcRZGate(q, 0.3831616072376889, 5);
  sqcRYGate(q, -1.4716111521509123, 6);
  sqcRZGate(q, 2.0482988912510374, 6);
  sqcRYGate(q, -1.4393702919846056, 7);
  sqcRZGate(q, -0.6434144397903477, 7);
  sqcRYGate(q, 1.5764248161982817, 8);
  sqcRZGate(q, 3.1391669353509712, 8);
  sqcRYGate(q, 1.552510935122196, 9);
  sqcRZGate(q, 0.043075925177706906, 9);
  sqcRYGate(q, -0.023419032378720627, 10);
  sqcRZGate(q, -2.4052049429766047, 10);
  sqcRYGate(q, 1.5595514975651144, 11);
  sqcRZGate(q, -2.174799585375247, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5707193293690176, 0);
  sqcRZGate(q, 1.383620933424706, 0);
  sqcRYGate(q, 3.1352600853535892, 1);
  sqcRZGate(q, -0.6723958359977361, 1);
  sqcRYGate(q, -0.004096379214753163, 2);
  sqcRZGate(q, -2.7120393317835805, 2);
  sqcRYGate(q, 3.140670084490308, 3);
  sqcRZGate(q, -0.6510275025754434, 3);
  sqcRYGate(q, -3.098635736770017, 4);
  sqcRZGate(q, -2.532652600387555, 4);
  sqcRYGate(q, -3.0980819378493063, 5);
  sqcRZGate(q, -1.2600600749223378, 5);
  sqcRYGate(q, -3.1413187805759084, 6);
  sqcRZGate(q, 0.1751682796464893, 6);
  sqcRYGate(q, 0.0006062704533788045, 7);
  sqcRZGate(q, -0.35465275633651766, 7);
  sqcRYGate(q, -1.5930099171165537, 8);
  sqcRZGate(q, -0.00040821902461285475, 8);
  sqcRYGate(q, -1.5925033612881068, 9);
  sqcRZGate(q, -0.041382166833312084, 9);
  sqcRYGate(q, -1.5668182643718387, 10);
  sqcRZGate(q, 2.732756604328439, 10);
  sqcRYGate(q, -3.129513524901249, 11);
  sqcRZGate(q, -0.6167664625993363, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.03148170787145066, 0);
  sqcRZGate(q, -1.5075697815519575, 0);
  sqcRYGate(q, 1.5629493857194152, 1);
  sqcRZGate(q, -0.6006174325011523, 1);
  sqcRYGate(q, -1.5757461462909985, 2);
  sqcRZGate(q, -1.3751100892861166, 2);
  sqcRYGate(q, 1.5628378018985676, 3);
  sqcRZGate(q, 2.5499038164686954, 3);
  sqcRYGate(q, 0.01636319753265238, 4);
  sqcRZGate(q, -0.20080621711899924, 4);
  sqcRYGate(q, -3.1381258755547585, 5);
  sqcRZGate(q, 3.0471727976341927, 5);
  sqcRYGate(q, 0.18805051517422447, 6);
  sqcRZGate(q, -0.0009876233923513666, 6);
  sqcRYGate(q, 0.2764161067066562, 7);
  sqcRZGate(q, -2.789025444015866, 7);
  sqcRYGate(q, 1.5706076092333836, 8);
  sqcRZGate(q, 2.0393214324031774, 8);
  sqcRYGate(q, -1.5951567152736446, 9);
  sqcRZGate(q, 0.5147162122660731, 9);
  sqcRYGate(q, 1.5100745159437903, 10);
  sqcRZGate(q, 1.8137855086503565, 10);
  sqcRYGate(q, -2.5602922529924297, 11);
  sqcRZGate(q, -1.651887323666772, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.714033902428934, 0);
  sqcRZGate(q, -2.0524497996454185, 0);
  sqcRYGate(q, -1.298515367151843, 1);
  sqcRZGate(q, 1.8586705648587758, 1);
  sqcRYGate(q, -3.0841141681612347, 2);
  sqcRZGate(q, -2.765769868992777, 2);
  sqcRYGate(q, -0.06591126974059541, 3);
  sqcRZGate(q, 0.37502042417179554, 3);
  sqcRYGate(q, 1.69649404659723, 4);
  sqcRZGate(q, -3.14060458672922, 4);
  sqcRYGate(q, -1.5710328269992688, 5);
  sqcRZGate(q, 3.1153371516109756, 5);
  sqcRYGate(q, -1.0507953397889127, 6);
  sqcRZGate(q, 0.8766485876316423, 6);
  sqcRYGate(q, -1.18229004490878, 7);
  sqcRZGate(q, 1.6459949135233702, 7);
  sqcRYGate(q, -1.618971544189448, 8);
  sqcRZGate(q, -2.739424181658812, 8);
  sqcRYGate(q, -1.5707226000238945, 9);
  sqcRZGate(q, -2.40171490161537, 9);
  sqcRYGate(q, 0.49578222919659876, 10);
  sqcRZGate(q, 3.0372780108298674, 10);
  sqcRYGate(q, 3.0066496920915924, 11);
  sqcRZGate(q, -0.17046090443386772, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.0371019005517166, 0);
  sqcRZGate(q, -1.5067720195634324, 0);
  sqcRYGate(q, 1.572332111080639, 1);
  sqcRZGate(q, 1.4821714122275766, 1);
  sqcRYGate(q, 0.6690824860212823, 2);
  sqcRZGate(q, 0.22546964901394073, 2);
  sqcRYGate(q, 2.3224041061824607, 3);
  sqcRZGate(q, -1.3070162903231008, 3);
  sqcRYGate(q, -0.3000889748332328, 4);
  sqcRZGate(q, 1.569642656737341, 4);
  sqcRYGate(q, -2.828468542300549, 5);
  sqcRZGate(q, -1.2336676118540426, 5);
  sqcRYGate(q, 3.1142344347304145, 6);
  sqcRZGate(q, -2.8394753107636195, 6);
  sqcRYGate(q, 0.04007662904365539, 7);
  sqcRZGate(q, -2.94078563159842, 7);
  sqcRYGate(q, -0.0012393526447427305, 8);
  sqcRZGate(q, -1.9493588120672565, 8);
  sqcRYGate(q, 0.0016119782592007841, 9);
  sqcRZGate(q, -0.437551876724819, 9);
  sqcRYGate(q, -1.5819923365566826, 10);
  sqcRZGate(q, -3.1128752241217366, 10);
  sqcRYGate(q, -0.16583546578234554, 11);
  sqcRZGate(q, 1.6921161800566926, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.1415798110040423, 0);
  sqcRZGate(q, 0.6884719179163347, 0);
  sqcRYGate(q, -1.5654497654481867, 1);
  sqcRZGate(q, -1.5117276170859573, 1);
  sqcRYGate(q, 3.140294964231247, 2);
  sqcRZGate(q, -2.8707793235128483, 2);
  sqcRYGate(q, 0.004877498597407343, 3);
  sqcRZGate(q, -1.8656811024508475, 3);
  sqcRYGate(q, -1.5717378177759036, 4);
  sqcRZGate(q, -1.4008246460522926, 4);
  sqcRYGate(q, -3.1391239762888445, 5);
  sqcRZGate(q, 1.644069119242552, 5);
  sqcRYGate(q, 2.53432600387154, 6);
  sqcRZGate(q, 2.244185610817418, 6);
  sqcRYGate(q, -0.9857096425211536, 7);
  sqcRZGate(q, 1.49661188807303, 7);
  sqcRYGate(q, 1.5630382689142117, 8);
  sqcRZGate(q, -1.5787083155605581, 8);
  sqcRYGate(q, -0.02560540674941942, 9);
  sqcRZGate(q, -0.31027457600128633, 9);
  sqcRYGate(q, 0.9931916893026959, 10);
  sqcRZGate(q, 2.4771309998512363, 10);
  sqcRYGate(q, 1.480004183455943, 11);
  sqcRZGate(q, 2.431139154903165, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.041418732969126, 0);
  sqcRZGate(q, 1.2579474953041547, 0);
  sqcRYGate(q, -1.9147923073962905, 1);
  sqcRZGate(q, 0.7392558524656889, 1);
  sqcRYGate(q, -0.507313948700646, 2);
  sqcRZGate(q, -2.8402224179467424, 2);
  sqcRYGate(q, 2.4920013311875837, 3);
  sqcRZGate(q, -2.7926094836155864, 3);
  sqcRYGate(q, 1.7518865050662915, 4);
  sqcRZGate(q, -2.9350232981167315, 4);
  sqcRYGate(q, 2.9590746774270857, 5);
  sqcRZGate(q, -0.0876481148293351, 5);
  sqcRYGate(q, -0.0016730774372228766, 6);
  sqcRZGate(q, 1.0473793112206442, 6);
  sqcRYGate(q, -0.009238906231474608, 7);
  sqcRZGate(q, -1.3273728729231489, 7);
  sqcRYGate(q, -1.5725402064535523, 8);
  sqcRZGate(q, -2.972154347500708, 8);
  sqcRYGate(q, -1.5732447744046523, 9);
  sqcRZGate(q, -2.9720212689988075, 9);
  sqcRYGate(q, 0.153797154899725, 10);
  sqcRZGate(q, 0.8067679413183209, 10);
  sqcRYGate(q, 0.1519382273374683, 11);
  sqcRZGate(q, 0.8696906189235909, 11);

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
