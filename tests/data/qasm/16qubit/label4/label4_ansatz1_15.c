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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -0.07617792325569574, 0);
  sqcRZGate(q, 0.12980613091826854, 0);
  sqcRYGate(q, 2.341862486863004, 1);
  sqcRZGate(q, -2.777284587204886, 1);
  sqcRYGate(q, 1.4354348635834642, 2);
  sqcRZGate(q, -2.7272636477640906, 2);
  sqcRYGate(q, 1.6242243759077475, 3);
  sqcRZGate(q, 1.2877771310666217, 3);
  sqcRYGate(q, 2.9748404881691677, 4);
  sqcRZGate(q, 0.05206527928669813, 4);
  sqcRYGate(q, -1.8753908424721235, 5);
  sqcRZGate(q, 0.7975272279213014, 5);
  sqcRYGate(q, -1.2994637766451003, 6);
  sqcRZGate(q, 0.67773797488332, 6);
  sqcRYGate(q, 0.378914723824176, 7);
  sqcRZGate(q, 0.49892404064693363, 7);
  sqcRYGate(q, -1.7615147891742595, 8);
  sqcRZGate(q, 1.0237479989086227, 8);
  sqcRYGate(q, 1.1187632832514067, 9);
  sqcRZGate(q, 1.4280788369135606, 9);
  sqcRYGate(q, -3.139024837463219, 10);
  sqcRZGate(q, 0.17896695534072377, 10);
  sqcRYGate(q, 1.720757073879665, 11);
  sqcRZGate(q, -2.3728468176433632, 11);
  sqcRYGate(q, 2.3185672561255264, 12);
  sqcRZGate(q, -1.2344430891046834, 12);
  sqcRYGate(q, 1.6500497796489313, 13);
  sqcRZGate(q, -2.190830689890422, 13);
  sqcRYGate(q, 2.6567663200274643, 14);
  sqcRZGate(q, -2.598652474771692, 14);
  sqcRYGate(q, 0.7371182069425004, 15);
  sqcRZGate(q, -1.3956405577236564, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.027836609799232, 0);
  sqcRZGate(q, -1.114223932380117, 0);
  sqcRYGate(q, 1.3670440608650027, 1);
  sqcRZGate(q, -1.1709806746309432, 1);
  sqcRYGate(q, -2.765570095770526, 2);
  sqcRZGate(q, 2.5404259745174436, 2);
  sqcRYGate(q, 0.13976851257530354, 3);
  sqcRZGate(q, 0.3534368264873198, 3);
  sqcRYGate(q, 0.06644242881802231, 4);
  sqcRZGate(q, -1.0489990736548878, 4);
  sqcRYGate(q, 1.95950291939727, 5);
  sqcRZGate(q, -0.7317599002244703, 5);
  sqcRYGate(q, 0.9131873081650201, 6);
  sqcRZGate(q, -1.223830744795178, 6);
  sqcRYGate(q, 0.03588446708198906, 7);
  sqcRZGate(q, 1.8843197634339592, 7);
  sqcRYGate(q, 1.2156735064363766, 8);
  sqcRZGate(q, 0.741452433109119, 8);
  sqcRYGate(q, -1.4624461471617227, 9);
  sqcRZGate(q, -2.7006830321768547, 9);
  sqcRYGate(q, -3.13785904665856, 10);
  sqcRZGate(q, -1.7655712094106428, 10);
  sqcRYGate(q, 2.990199746801044, 11);
  sqcRZGate(q, 2.2522397931657623, 11);
  sqcRYGate(q, 2.8733055789696604, 12);
  sqcRZGate(q, -0.39720262996528133, 12);
  sqcRYGate(q, 0.28479157492844753, 13);
  sqcRZGate(q, 2.579795127323521, 13);
  sqcRYGate(q, -3.0796127903999757, 14);
  sqcRZGate(q, 1.612533043762352, 14);
  sqcRYGate(q, 1.3172706563050127, 15);
  sqcRZGate(q, -2.1233178717919254, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.2726881873659082, 0);
  sqcRZGate(q, 2.2225894956687027, 0);
  sqcRYGate(q, 2.3553312596518183, 1);
  sqcRZGate(q, 0.00582857006444204, 1);
  sqcRYGate(q, -0.839373853909479, 2);
  sqcRZGate(q, -2.5104967069105224, 2);
  sqcRYGate(q, 2.9715876861069765, 3);
  sqcRZGate(q, -2.288820670250919, 3);
  sqcRYGate(q, -3.132527343950216, 4);
  sqcRZGate(q, -1.6532119437695139, 4);
  sqcRYGate(q, 2.3604007761037216, 5);
  sqcRZGate(q, -1.525295345021907, 5);
  sqcRYGate(q, 1.326429393763105, 6);
  sqcRZGate(q, 1.2287929111080134, 6);
  sqcRYGate(q, -3.13687801995447, 7);
  sqcRZGate(q, -1.0852541751795355, 7);
  sqcRYGate(q, -1.8232083685857783, 8);
  sqcRZGate(q, 0.28810568247502927, 8);
  sqcRYGate(q, 1.9174207195835633, 9);
  sqcRZGate(q, 2.2952360809134915, 9);
  sqcRYGate(q, -3.1410251156268325, 10);
  sqcRZGate(q, -2.3021818435721517, 10);
  sqcRYGate(q, 0.6247629384648743, 11);
  sqcRZGate(q, 0.04294070534499372, 11);
  sqcRYGate(q, 1.038024396704834, 12);
  sqcRZGate(q, 1.9261748494198276, 12);
  sqcRYGate(q, -0.5585570479731122, 13);
  sqcRZGate(q, -3.109430576108556, 13);
  sqcRYGate(q, -1.6626401051605608, 14);
  sqcRZGate(q, -2.6097237016194783, 14);
  sqcRYGate(q, 1.9419193073556862, 15);
  sqcRZGate(q, -1.61049632961827, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.04158740632349467, 0);
  sqcRZGate(q, 0.2076404504633777, 0);
  sqcRYGate(q, 0.01384917647298913, 1);
  sqcRZGate(q, -2.388328308577441, 1);
  sqcRYGate(q, 0.29172458701389226, 2);
  sqcRZGate(q, 0.8601112517415895, 2);
  sqcRYGate(q, -3.0919113692643636, 3);
  sqcRZGate(q, -2.5998031457089996, 3);
  sqcRYGate(q, -0.03130806637886363, 4);
  sqcRZGate(q, -1.7472531466970904, 4);
  sqcRYGate(q, -0.7339332613009262, 5);
  sqcRZGate(q, -0.7407286652739069, 5);
  sqcRYGate(q, -2.733712008757389, 6);
  sqcRZGate(q, -2.5096261154109007, 6);
  sqcRYGate(q, 1.5445131817543318, 7);
  sqcRZGate(q, -1.1444530633833268, 7);
  sqcRYGate(q, -1.6001614571048997, 8);
  sqcRZGate(q, 0.3695794184997807, 8);
  sqcRYGate(q, 1.0331166846301216, 9);
  sqcRZGate(q, -1.017420446189444, 9);
  sqcRYGate(q, -0.05940848096405329, 10);
  sqcRZGate(q, -0.7397262804539606, 10);
  sqcRYGate(q, -1.8440654332496558, 11);
  sqcRZGate(q, 2.0132635462257014, 11);
  sqcRYGate(q, 0.5728248120226853, 12);
  sqcRZGate(q, -3.1169399401661586, 12);
  sqcRYGate(q, 0.6686330414535995, 13);
  sqcRZGate(q, -2.5176454549733616, 13);
  sqcRYGate(q, 0.05688923767044015, 14);
  sqcRZGate(q, -0.639024728224716, 14);
  sqcRYGate(q, -0.7075489217758573, 15);
  sqcRZGate(q, 0.7579642610825691, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.0985882512748715, 0);
  sqcRZGate(q, -1.0687848632629577, 0);
  sqcRYGate(q, 1.808132952231917, 1);
  sqcRZGate(q, -2.9465265558446276, 1);
  sqcRYGate(q, -2.646296311522909, 2);
  sqcRZGate(q, -0.684972243373859, 2);
  sqcRYGate(q, -3.0689120439857747, 3);
  sqcRZGate(q, 0.08180971171400442, 3);
  sqcRYGate(q, 1.740731531165853, 4);
  sqcRZGate(q, -2.361497074861853, 4);
  sqcRYGate(q, 0.8131778227025204, 5);
  sqcRZGate(q, 2.266177107659688, 5);
  sqcRYGate(q, -2.275824183491091, 6);
  sqcRZGate(q, -2.588670608818601, 6);
  sqcRYGate(q, 3.112864498209858, 7);
  sqcRZGate(q, -1.1644598454549862, 7);
  sqcRYGate(q, 1.6484192962403175, 8);
  sqcRZGate(q, 1.5911806920320029, 8);
  sqcRYGate(q, -3.067613748149213, 9);
  sqcRZGate(q, 1.7893856734503184, 9);
  sqcRYGate(q, -0.006348067817976055, 10);
  sqcRZGate(q, 0.7655929105147089, 10);
  sqcRYGate(q, 0.05014779710790673, 11);
  sqcRZGate(q, 1.3451857435980186, 11);
  sqcRYGate(q, 1.6670999005557539, 12);
  sqcRZGate(q, 1.3934175372160185, 12);
  sqcRYGate(q, 2.608161290302925, 13);
  sqcRZGate(q, 1.9272910126218423, 13);
  sqcRYGate(q, -0.09105822172383693, 14);
  sqcRZGate(q, 1.2093741725038347, 14);
  sqcRYGate(q, -1.568470605568359, 15);
  sqcRZGate(q, 0.1434419980093811, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.7293214537526451, 0);
  sqcRZGate(q, 2.9495419701290992, 0);
  sqcRYGate(q, 2.802507515559512, 1);
  sqcRZGate(q, -1.7480132176447654, 1);
  sqcRYGate(q, -0.6358937250936343, 2);
  sqcRZGate(q, 2.0009703767802005, 2);
  sqcRYGate(q, -0.5802627243259382, 3);
  sqcRZGate(q, 2.8083118507368154, 3);
  sqcRYGate(q, 0.007853228548022138, 4);
  sqcRZGate(q, 2.173457546510552, 4);
  sqcRYGate(q, 0.016149706927327756, 5);
  sqcRZGate(q, 2.6297281265251575, 5);
  sqcRYGate(q, -0.49282304547800493, 6);
  sqcRZGate(q, -2.608467679837223, 6);
  sqcRYGate(q, 0.024392153627151636, 7);
  sqcRZGate(q, -0.042547284086051455, 7);
  sqcRYGate(q, -1.5778135101860276, 8);
  sqcRZGate(q, 1.8367064119051193, 8);
  sqcRYGate(q, 0.08302617996074435, 9);
  sqcRZGate(q, 0.25023972141946577, 9);
  sqcRYGate(q, 3.0805068250204273, 10);
  sqcRZGate(q, -1.117409099215953, 10);
  sqcRYGate(q, 0.03218284176392917, 11);
  sqcRZGate(q, 2.727191586136749, 11);
  sqcRYGate(q, 3.133778107802819, 12);
  sqcRZGate(q, 1.9169878190889726, 12);
  sqcRYGate(q, 0.02906897863484037, 13);
  sqcRZGate(q, 3.0075844689762348, 13);
  sqcRYGate(q, -3.11515439267145, 14);
  sqcRZGate(q, 0.6630501329485519, 14);
  sqcRYGate(q, 0.8960038940644158, 15);
  sqcRZGate(q, -2.1821414158516745, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.2570277561270625, 0);
  sqcRZGate(q, 1.6479557292287375, 0);
  sqcRYGate(q, 2.5997022456931744, 1);
  sqcRZGate(q, 1.6943287709597714, 1);
  sqcRYGate(q, -1.570001980543049, 2);
  sqcRZGate(q, -1.7824231975478642, 2);
  sqcRYGate(q, -0.018434783891254785, 3);
  sqcRZGate(q, 0.31918099956471213, 3);
  sqcRYGate(q, -1.7592742751873385, 4);
  sqcRZGate(q, 2.7771084116852833, 4);
  sqcRYGate(q, -2.0735636467060456, 5);
  sqcRZGate(q, -2.2274349796720645, 5);
  sqcRYGate(q, 0.6654368226285428, 6);
  sqcRZGate(q, 2.365592304726556, 6);
  sqcRYGate(q, -1.600339468346812, 7);
  sqcRZGate(q, 3.1224006659467944, 7);
  sqcRYGate(q, -1.5559882120739772, 8);
  sqcRZGate(q, 2.7369071974183847, 8);
  sqcRYGate(q, -1.6426795932695695, 9);
  sqcRZGate(q, -1.6809227904407644, 9);
  sqcRYGate(q, 1.5711083184124384, 10);
  sqcRZGate(q, 1.5627298128660625, 10);
  sqcRYGate(q, 0.01687164669442406, 11);
  sqcRZGate(q, -1.855568902655239, 11);
  sqcRYGate(q, 2.167005787517624, 12);
  sqcRZGate(q, -2.649076786985025, 12);
  sqcRYGate(q, -2.309773857405699, 13);
  sqcRZGate(q, -2.757552211340849, 13);
  sqcRYGate(q, 0.3208162876929005, 14);
  sqcRZGate(q, 0.20427075108302833, 14);
  sqcRYGate(q, 0.8963239204975868, 15);
  sqcRZGate(q, 2.108353839454314, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.8125919987072963, 0);
  sqcRZGate(q, 1.1653891815743345, 0);
  sqcRYGate(q, -2.4562157841923806, 1);
  sqcRZGate(q, -2.349717651188948, 1);
  sqcRYGate(q, 0.014245134302600162, 2);
  sqcRZGate(q, 2.7041562311599137, 2);
  sqcRYGate(q, -1.6833878228342172, 3);
  sqcRZGate(q, 2.519797908089489, 3);
  sqcRYGate(q, -2.548162381046833, 4);
  sqcRZGate(q, -0.5831636283928052, 4);
  sqcRYGate(q, -2.0930708004418674, 5);
  sqcRZGate(q, 1.9492688863985714, 5);
  sqcRYGate(q, -1.6906929850131567, 6);
  sqcRZGate(q, 2.1638959221734844, 6);
  sqcRYGate(q, -1.7210146887600706, 7);
  sqcRZGate(q, 1.6505758573989926, 7);
  sqcRYGate(q, 1.079309301485679, 8);
  sqcRZGate(q, -2.780024168007186, 8);
  sqcRYGate(q, -1.9807495721466786, 9);
  sqcRZGate(q, -0.09435357223392711, 9);
  sqcRYGate(q, 1.5370635668511827, 10);
  sqcRZGate(q, -1.5018438162443255, 10);
  sqcRYGate(q, -0.003421881032254604, 11);
  sqcRZGate(q, -2.4743855061856324, 11);
  sqcRYGate(q, -1.6673136095094152, 12);
  sqcRZGate(q, 2.890011485148699, 12);
  sqcRYGate(q, -0.23459636675189263, 13);
  sqcRZGate(q, 0.07503228807779458, 13);
  sqcRYGate(q, -3.0071710973588752, 14);
  sqcRZGate(q, -0.08033375094482499, 14);
  sqcRYGate(q, 1.7152423448364233, 15);
  sqcRZGate(q, -2.3768367180227234, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.1965316915397652, 0);
  sqcRZGate(q, -3.08561669551774, 0);
  sqcRYGate(q, 1.7309714915610641, 1);
  sqcRZGate(q, -2.1196080558210926, 1);
  sqcRYGate(q, 0.32285090918861997, 2);
  sqcRZGate(q, -1.0662053698287774, 2);
  sqcRYGate(q, -2.788667566909728, 3);
  sqcRZGate(q, -1.9908234741488338, 3);
  sqcRYGate(q, -1.3467002477612775, 4);
  sqcRZGate(q, 2.639051799838874, 4);
  sqcRYGate(q, -3.086883137464243, 5);
  sqcRZGate(q, -2.1995041442658874, 5);
  sqcRYGate(q, -0.9710509951718926, 6);
  sqcRZGate(q, -2.3481220888996637, 6);
  sqcRYGate(q, 1.7986610184957614, 7);
  sqcRZGate(q, 1.98416019277487, 7);
  sqcRYGate(q, 0.011650560538387878, 8);
  sqcRZGate(q, -0.4327399947270962, 8);
  sqcRYGate(q, 3.120091552555403, 9);
  sqcRZGate(q, -1.5870588892587865, 9);
  sqcRYGate(q, 3.139765435026779, 10);
  sqcRZGate(q, -1.5008913176095595, 10);
  sqcRYGate(q, -1.5676215658014208, 11);
  sqcRZGate(q, 3.138240364117306, 11);
  sqcRYGate(q, 2.4530694404314257, 12);
  sqcRZGate(q, 3.1056696139305306, 12);
  sqcRYGate(q, 2.1378389803336564, 13);
  sqcRZGate(q, -1.2069169687426238, 13);
  sqcRYGate(q, 1.5575763991247698, 14);
  sqcRZGate(q, 1.1816825518367982, 14);
  sqcRYGate(q, 1.0537751158863717, 15);
  sqcRZGate(q, -1.222891111777666, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.4191510090688766, 0);
  sqcRZGate(q, -2.661729371745194, 0);
  sqcRYGate(q, 1.6243421678408474, 1);
  sqcRZGate(q, 1.3495046905326138, 1);
  sqcRYGate(q, -3.0300527963490227, 2);
  sqcRZGate(q, 0.5075994760186155, 2);
  sqcRYGate(q, 3.1132130929967934, 3);
  sqcRZGate(q, -1.0331338074665153, 3);
  sqcRYGate(q, 3.106803249319271, 4);
  sqcRZGate(q, 1.631721240219789, 4);
  sqcRYGate(q, -3.133978760856396, 5);
  sqcRZGate(q, -0.7773092112658755, 5);
  sqcRYGate(q, -3.1391953390274936, 6);
  sqcRZGate(q, 3.003929859373724, 6);
  sqcRYGate(q, -3.112929862314564, 7);
  sqcRZGate(q, 2.0005990614509814, 7);
  sqcRYGate(q, 2.0921511130583, 8);
  sqcRZGate(q, -0.00291001037967726, 8);
  sqcRYGate(q, 1.683118702153502, 9);
  sqcRZGate(q, 0.3007405618102601, 9);
  sqcRYGate(q, -1.0663302246328312, 10);
  sqcRZGate(q, 3.1411356114480684, 10);
  sqcRYGate(q, -1.754378821286169, 11);
  sqcRZGate(q, -3.1386351431013533, 11);
  sqcRYGate(q, 1.5549208867291586, 12);
  sqcRZGate(q, -0.057169467792664186, 12);
  sqcRYGate(q, -0.31357445451613764, 13);
  sqcRZGate(q, 0.3846026831266025, 13);
  sqcRYGate(q, 0.03110021329600787, 14);
  sqcRZGate(q, -1.0260409394136394, 14);
  sqcRYGate(q, 2.6060767155606226, 15);
  sqcRZGate(q, 2.5681860955501827, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.7944872461430244, 0);
  sqcRZGate(q, 0.00020011228554773746, 0);
  sqcRYGate(q, -1.6010692167430631, 1);
  sqcRZGate(q, 1.3705016252229465, 1);
  sqcRYGate(q, 2.9674107326003507, 2);
  sqcRZGate(q, 2.260600262368146, 2);
  sqcRYGate(q, 0.5306996232546197, 3);
  sqcRZGate(q, 2.718069251455359, 3);
  sqcRYGate(q, -0.5992294831420031, 4);
  sqcRZGate(q, -2.1385122743006173, 4);
  sqcRYGate(q, 0.1879287470156363, 5);
  sqcRZGate(q, -0.2365215161720558, 5);
  sqcRYGate(q, -0.7300346507839705, 6);
  sqcRZGate(q, -2.1617874092658185, 6);
  sqcRYGate(q, -2.1814866437018487, 7);
  sqcRZGate(q, -2.982995876292102, 7);
  sqcRYGate(q, 3.140008484184659, 8);
  sqcRZGate(q, -0.003445957544957245, 8);
  sqcRYGate(q, -0.0033065372818681382, 9);
  sqcRZGate(q, -1.4582411284642722, 9);
  sqcRYGate(q, 1.5791514134915294, 10);
  sqcRZGate(q, 0.05929045781400107, 10);
  sqcRYGate(q, 0.008317487576867677, 11);
  sqcRZGate(q, 3.138568778447987, 11);
  sqcRYGate(q, 0.0006265637847704397, 12);
  sqcRZGate(q, -2.3058145318167536, 12);
  sqcRYGate(q, 0.7018018059667765, 13);
  sqcRZGate(q, -3.105438800191128, 13);
  sqcRYGate(q, -3.0401301257978726, 14);
  sqcRZGate(q, -2.8189695058004514, 14);
  sqcRYGate(q, -2.2747392289574675, 15);
  sqcRZGate(q, 1.173267261726294, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.391624034534472, 0);
  sqcRZGate(q, 1.9666628854915502, 0);
  sqcRYGate(q, -1.5693344234605398, 1);
  sqcRZGate(q, 2.6287802429670077, 1);
  sqcRYGate(q, -0.6479494962583794, 2);
  sqcRZGate(q, 0.1550938812665111, 2);
  sqcRYGate(q, 0.9810238126481041, 3);
  sqcRZGate(q, -0.03446630729755995, 3);
  sqcRYGate(q, -2.3880850137732677, 4);
  sqcRZGate(q, 0.016886194107591738, 4);
  sqcRYGate(q, 1.3402394661259605, 5);
  sqcRZGate(q, -1.5341623870088077, 5);
  sqcRYGate(q, -3.1329665371754163, 6);
  sqcRZGate(q, -1.3171665907501475, 6);
  sqcRYGate(q, -1.5683946450213189, 7);
  sqcRZGate(q, 0.06568291988048591, 7);
  sqcRYGate(q, 1.5017858391583587, 8);
  sqcRZGate(q, -3.1076297664196137, 8);
  sqcRYGate(q, -1.2012279442194145, 9);
  sqcRZGate(q, -3.1317510702127165, 9);
  sqcRYGate(q, -0.025975635439971615, 10);
  sqcRZGate(q, 3.0824432347747326, 10);
  sqcRYGate(q, 1.554412193182236, 11);
  sqcRZGate(q, 1.0939564704737197, 11);
  sqcRYGate(q, -0.009769353246641188, 12);
  sqcRZGate(q, 2.3664745805201464, 12);
  sqcRYGate(q, -1.2841140190821052, 13);
  sqcRZGate(q, -0.18836837447363664, 13);
  sqcRYGate(q, 0.009671900579500736, 14);
  sqcRZGate(q, 3.0188664692687515, 14);
  sqcRYGate(q, 1.533025892287552, 15);
  sqcRZGate(q, -0.4512069064774863, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.3637450984061692, 0);
  sqcRZGate(q, -2.70105626431868, 0);
  sqcRYGate(q, 2.87464824126917, 1);
  sqcRZGate(q, 1.0141235715932304, 1);
  sqcRYGate(q, -1.5951873537003793, 2);
  sqcRZGate(q, -2.830057628870484, 2);
  sqcRYGate(q, -3.0449887069095625, 3);
  sqcRZGate(q, -0.021522087232567877, 3);
  sqcRYGate(q, 2.431772024836935, 4);
  sqcRZGate(q, -0.05456502778518525, 4);
  sqcRYGate(q, -0.0008418448244141707, 5);
  sqcRZGate(q, 1.5365726972317337, 5);
  sqcRYGate(q, -2.684790793862958, 6);
  sqcRZGate(q, -3.1407970383916006, 6);
  sqcRYGate(q, 0.5750267754053714, 7);
  sqcRZGate(q, -1.6381561886999139, 7);
  sqcRYGate(q, -2.9030398545495073, 8);
  sqcRZGate(q, 3.1345426947234936, 8);
  sqcRYGate(q, -1.9365175993901345, 9);
  sqcRZGate(q, 0.001327260466035077, 9);
  sqcRYGate(q, -2.0822662930873626, 10);
  sqcRZGate(q, 0.0037142325566845713, 10);
  sqcRYGate(q, -0.0025255841885751806, 11);
  sqcRZGate(q, -1.0562472391288509, 11);
  sqcRYGate(q, -1.7922967299444053, 12);
  sqcRZGate(q, -1.7972464123492315, 12);
  sqcRYGate(q, -0.6989661164594381, 13);
  sqcRZGate(q, 0.12080043812687347, 13);
  sqcRYGate(q, 1.5599369448518392, 14);
  sqcRZGate(q, 0.18600915995813597, 14);
  sqcRYGate(q, 0.3970073156573424, 15);
  sqcRZGate(q, -0.3737107067516654, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.6598073847652612, 0);
  sqcRZGate(q, -0.9693258221314797, 0);
  sqcRYGate(q, 0.8866015240090062, 1);
  sqcRZGate(q, 0.10471454002740363, 1);
  sqcRYGate(q, 2.939867289587398, 2);
  sqcRZGate(q, 0.287727828232752, 2);
  sqcRYGate(q, 1.558811983646373, 3);
  sqcRZGate(q, -0.005710644088063433, 3);
  sqcRYGate(q, 3.072288009849703, 4);
  sqcRZGate(q, 3.090315705018737, 4);
  sqcRYGate(q, -1.3043436355819518, 5);
  sqcRZGate(q, -0.0846941623489501, 5);
  sqcRYGate(q, 1.5233644750364226, 6);
  sqcRZGate(q, -3.1364290797689818, 6);
  sqcRYGate(q, -1.5685074343021586, 7);
  sqcRZGate(q, -3.1030137325309552, 7);
  sqcRYGate(q, -0.43063835645474136, 8);
  sqcRZGate(q, 0.001443842048461337, 8);
  sqcRYGate(q, 1.5941620975173694, 9);
  sqcRZGate(q, 0.02546937547027462, 9);
  sqcRYGate(q, 2.4970916016150473, 10);
  sqcRZGate(q, 0.017531576708692233, 10);
  sqcRYGate(q, -0.0023053373439365127, 11);
  sqcRZGate(q, 3.1410102487876825, 11);
  sqcRYGate(q, -0.002841553227054829, 12);
  sqcRZGate(q, 2.153529227482188, 12);
  sqcRYGate(q, -0.4896547032751455, 13);
  sqcRZGate(q, -1.1815653527791357, 13);
  sqcRYGate(q, -3.095248809612616, 14);
  sqcRZGate(q, -2.833279491406324, 14);
  sqcRYGate(q, 1.4660227677484512, 15);
  sqcRZGate(q, -1.5393813105383654, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.592113863972413, 0);
  sqcRZGate(q, 1.4156331099188504, 0);
  sqcRYGate(q, -2.8598663440799306, 1);
  sqcRZGate(q, 0.11194924917408265, 1);
  sqcRYGate(q, 2.198368162200027, 2);
  sqcRZGate(q, -3.0526670355331165, 2);
  sqcRYGate(q, -0.729615454794831, 3);
  sqcRZGate(q, 2.4826929912010027, 3);
  sqcRYGate(q, -1.5439651970072061, 4);
  sqcRZGate(q, -1.9524571415090568, 4);
  sqcRYGate(q, 1.6813028274460198, 5);
  sqcRZGate(q, -3.1066515532024708, 5);
  sqcRYGate(q, -1.560059985046795, 6);
  sqcRZGate(q, -1.2506780236722728, 6);
  sqcRYGate(q, -1.4760548265238063, 7);
  sqcRZGate(q, 3.107280012135253, 7);
  sqcRYGate(q, -0.5201875257001127, 8);
  sqcRZGate(q, 0.06955528005578505, 8);
  sqcRYGate(q, 2.231717212068303, 9);
  sqcRZGate(q, 0.6737881247082418, 9);
  sqcRYGate(q, 1.5995824768534121, 10);
  sqcRZGate(q, -0.0026301679265856763, 10);
  sqcRYGate(q, -2.3921376728688224, 11);
  sqcRZGate(q, -2.058156901799083, 11);
  sqcRYGate(q, 0.8716417848443438, 12);
  sqcRZGate(q, -1.9603160803492168, 12);
  sqcRYGate(q, -2.989586851223013, 13);
  sqcRZGate(q, 0.48725870457294507, 13);
  sqcRYGate(q, 0.9125319686085822, 14);
  sqcRZGate(q, -0.527516911113201, 14);
  sqcRYGate(q, -0.14096619628118076, 15);
  sqcRZGate(q, 2.9052016082417733, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.526630566240902, 0);
  sqcRZGate(q, -2.329744688656789, 0);
  sqcRYGate(q, 1.5602526566006927, 1);
  sqcRZGate(q, -2.3368586546628154, 1);
  sqcRYGate(q, -2.1198349033599637, 2);
  sqcRZGate(q, 1.4664532677204658, 2);
  sqcRYGate(q, 3.0161916618327154, 3);
  sqcRZGate(q, 2.484481335487851, 3);
  sqcRYGate(q, -0.003574749307317524, 4);
  sqcRZGate(q, -1.0879487763860547, 4);
  sqcRYGate(q, -1.8792934526654834, 5);
  sqcRZGate(q, 0.19086526677711022, 5);
  sqcRYGate(q, 3.1359423957012598, 6);
  sqcRZGate(q, -2.995613567900255, 6);
  sqcRYGate(q, -1.6628929436667557, 7);
  sqcRZGate(q, -0.17776704200165971, 7);
  sqcRYGate(q, 0.027621659445161484, 8);
  sqcRZGate(q, 3.0561503797010703, 8);
  sqcRYGate(q, 0.009576592426753305, 9);
  sqcRZGate(q, -0.6470417339304898, 9);
  sqcRYGate(q, 3.016391482520911, 10);
  sqcRZGate(q, -1.9426877280333281, 10);
  sqcRYGate(q, 3.14082709897963, 11);
  sqcRZGate(q, -2.0681631620735104, 11);
  sqcRYGate(q, 3.14128847540938, 12);
  sqcRZGate(q, -1.5480929221004667, 12);
  sqcRYGate(q, 3.138082057628946, 13);
  sqcRZGate(q, 2.662068012543355, 13);
  sqcRYGate(q, -3.130300364735099, 14);
  sqcRZGate(q, -1.5830052204660134, 14);
  sqcRYGate(q, 0.20481520999428693, 15);
  sqcRZGate(q, -0.07831552953901078, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.1208332880142757, 0);
  sqcRZGate(q, -1.7831059452874776, 0);
  sqcRYGate(q, 0.12665734331442796, 1);
  sqcRZGate(q, -2.225084318654848, 1);
  sqcRYGate(q, 3.1267152318089932, 2);
  sqcRZGate(q, 0.9498243058756131, 2);
  sqcRYGate(q, -2.9172187484619445, 3);
  sqcRZGate(q, 0.009645485158954694, 3);
  sqcRYGate(q, -3.138294296841963, 4);
  sqcRZGate(q, -2.3537577934200757, 4);
  sqcRYGate(q, -1.5036310611403862, 5);
  sqcRZGate(q, 2.8568297403041285, 5);
  sqcRYGate(q, -3.124304335511887, 6);
  sqcRZGate(q, -2.3591973628267646, 6);
  sqcRYGate(q, 2.2009607671214577, 7);
  sqcRZGate(q, -1.1847280097691737, 7);
  sqcRYGate(q, 0.05742273846913549, 8);
  sqcRZGate(q, -3.0374430122497706, 8);
  sqcRYGate(q, 0.9884804660387964, 9);
  sqcRZGate(q, -0.019939051866881625, 9);
  sqcRYGate(q, -3.1251178736723, 10);
  sqcRZGate(q, 1.200559066468698, 10);
  sqcRYGate(q, 2.200594070066292, 11);
  sqcRZGate(q, 0.020650094104897043, 11);
  sqcRYGate(q, 1.0060441765621997, 12);
  sqcRZGate(q, 2.825185569458656, 12);
  sqcRYGate(q, -2.9751453223252544, 13);
  sqcRZGate(q, 1.743733744460742, 13);
  sqcRYGate(q, -1.882007211867754, 14);
  sqcRZGate(q, 0.961075525295576, 14);
  sqcRYGate(q, -3.0339509882034976, 15);
  sqcRZGate(q, 2.8593236831981, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.13817901987851897, 0);
  sqcRZGate(q, -0.747639521951374, 0);
  sqcRYGate(q, 3.1322291077219266, 1);
  sqcRZGate(q, 0.1349161807110768, 1);
  sqcRYGate(q, 2.9457482285781365, 2);
  sqcRZGate(q, -2.032575741986012, 2);
  sqcRYGate(q, 1.460358283663689, 3);
  sqcRZGate(q, 1.4962811403039806, 3);
  sqcRYGate(q, 3.1374917536105555, 4);
  sqcRZGate(q, -0.8860183043848977, 4);
  sqcRYGate(q, 2.8194574754107005, 5);
  sqcRZGate(q, -1.855265395834175, 5);
  sqcRYGate(q, -0.01209294621757806, 6);
  sqcRZGate(q, -0.9586401252682073, 6);
  sqcRYGate(q, 0.05120388608981149, 7);
  sqcRZGate(q, -0.48756627278118086, 7);
  sqcRYGate(q, -0.002071574917346553, 8);
  sqcRZGate(q, -1.6600650960757486, 8);
  sqcRYGate(q, -1.5477685437648079, 9);
  sqcRZGate(q, -1.5628821717277255, 9);
  sqcRYGate(q, 1.36323003324805, 10);
  sqcRZGate(q, 1.5714543816076842, 10);
  sqcRYGate(q, -1.5542368347930298, 11);
  sqcRZGate(q, 1.5711805541096728, 11);
  sqcRYGate(q, 1.6336305971176923, 12);
  sqcRZGate(q, -1.566207315707844, 12);
  sqcRYGate(q, 3.1383022416384776, 13);
  sqcRZGate(q, 2.31022529943976, 13);
  sqcRYGate(q, -1.5279665279111248, 14);
  sqcRZGate(q, -1.5474688746501084, 14);
  sqcRYGate(q, 0.004020844600279701, 15);
  sqcRZGate(q, -2.345421902897609, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.7970630375996224, 0);
  sqcRZGate(q, -0.033829239469554295, 0);
  sqcRYGate(q, 1.4873119064113565, 1);
  sqcRZGate(q, 0.7060491564833364, 1);
  sqcRYGate(q, -1.5696817012399773, 2);
  sqcRZGate(q, 1.2996860505438406, 2);
  sqcRYGate(q, 1.5606259977532222, 3);
  sqcRZGate(q, 1.5815085961070758, 3);
  sqcRYGate(q, 1.5768687216534447, 4);
  sqcRZGate(q, 2.8684765746952063, 4);
  sqcRYGate(q, -1.3835787528520775, 5);
  sqcRZGate(q, 1.9899167044144601, 5);
  sqcRYGate(q, 1.548992047033698, 6);
  sqcRZGate(q, -1.8413013469035042, 6);
  sqcRYGate(q, -1.7157243951713295, 7);
  sqcRZGate(q, -0.058971396803973675, 7);
  sqcRYGate(q, 1.571413004048719, 8);
  sqcRZGate(q, -0.2751735837166462, 8);
  sqcRYGate(q, 1.572585022183456, 9);
  sqcRZGate(q, -1.5448906446583281, 9);
  sqcRYGate(q, -1.5701249892526956, 10);
  sqcRZGate(q, 2.896878371962986, 10);
  sqcRYGate(q, 1.5687244410366064, 11);
  sqcRZGate(q, -0.9664325423223331, 11);
  sqcRYGate(q, 1.570332688526008, 12);
  sqcRZGate(q, 1.3361899591688877, 12);
  sqcRYGate(q, 1.5713087860036667, 13);
  sqcRZGate(q, 1.9508847112432608, 13);
  sqcRYGate(q, -1.5293991381425034, 14);
  sqcRZGate(q, 2.2963847734589655, 14);
  sqcRYGate(q, -0.0045769183415774115, 15);
  sqcRZGate(q, 3.0979903189327063, 15);

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
