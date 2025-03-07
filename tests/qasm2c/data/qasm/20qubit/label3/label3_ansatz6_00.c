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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -2.8842536029562575, 0);
  sqcRYGate(q, 0.022871129429076653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8014950604198496, 0);
  sqcRYGate(q, 0.3480361006682203, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.659662314504536, 1);
  sqcRYGate(q, -3.1386480832808252, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6042638512032832, 1);
  sqcRYGate(q, -1.3396072983457161, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7593409634737459, 2);
  sqcRYGate(q, 0.04419339556807582, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6084758157877284, 2);
  sqcRYGate(q, 1.412355743288214, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7431236382058164, 3);
  sqcRYGate(q, 0.056957344753836736, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6280727429783045, 3);
  sqcRYGate(q, -1.5276284086051328, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.238764268181912, 4);
  sqcRYGate(q, -2.0241325898741076, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2592815284233896, 4);
  sqcRYGate(q, -1.8268609137606684, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.933721425440094, 5);
  sqcRYGate(q, -2.3349762013460866, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9391393699505617, 5);
  sqcRYGate(q, -3.002004363094974, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6933517872417703, 6);
  sqcRYGate(q, 1.0603791610420386, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3474955412030084, 6);
  sqcRYGate(q, 1.5624403471148283, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4919470401915103, 7);
  sqcRYGate(q, -2.5327892324613224, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.6303119628104631, 7);
  sqcRYGate(q, 0.5757014626349549, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.32127287295979, 8);
  sqcRYGate(q, 2.757361583325467, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.6037272374430884, 8);
  sqcRYGate(q, 2.6533503209999676, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.3164062322369725, 9);
  sqcRYGate(q, -1.5406053502786685, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.4933878349868826, 9);
  sqcRYGate(q, -1.5611864146335304, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.2571973814539129, 10);
  sqcRYGate(q, 3.0499170104250584, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9890482284332593, 10);
  sqcRYGate(q, 1.5507362968248442, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5331040849795992, 11);
  sqcRYGate(q, -1.6728517466882886, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.8684988251114363, 11);
  sqcRYGate(q, -0.4136194451035946, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.8877571233307897, 12);
  sqcRYGate(q, -0.600497623985575, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.079482606099928, 12);
  sqcRYGate(q, -1.2995641094956651, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.5038347904575255, 13);
  sqcRYGate(q, 2.889391863843649, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5525124256214466, 13);
  sqcRYGate(q, -1.7825144238880508, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.563336100776527, 14);
  sqcRYGate(q, 1.4674367874573855, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.6459589413143245, 14);
  sqcRYGate(q, 0.6648920374816596, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.0195195126556225, 15);
  sqcRYGate(q, -2.4002352930823667, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.9437191372568243, 15);
  sqcRYGate(q, 2.297753570163234, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -3.1219813654349577, 16);
  sqcRYGate(q, -0.5660104322460491, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.9772347944491302, 16);
  sqcRYGate(q, 1.4226097461905316, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.21245207576198818, 17);
  sqcRYGate(q, -3.0496672930023476, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.7047842334766221, 17);
  sqcRYGate(q, -1.4433156281193196, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.17169950666817968, 18);
  sqcRYGate(q, 1.0135081068993435, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 3.088277855977741, 18);
  sqcRYGate(q, -2.5762458047032677, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.8982958391922065, 0);
  sqcRYGate(q, 0.07427162774910112, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.997633809927061, 0);
  sqcRYGate(q, 1.061639131764804, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4892888438774632, 1);
  sqcRYGate(q, 0.04888327113148324, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4428711222769424, 1);
  sqcRYGate(q, -1.3160226991769894, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.796515737158841, 2);
  sqcRYGate(q, -0.4607269328570691, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8660810559605934, 2);
  sqcRYGate(q, 1.1617222446969515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.24433924160681, 3);
  sqcRYGate(q, -2.0523122332341983, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8377810352509139, 3);
  sqcRYGate(q, -0.15617529837401084, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4383644299267662, 4);
  sqcRYGate(q, 3.089870249614765, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.801376371212989, 4);
  sqcRYGate(q, -1.8319244641468542, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4290300521301953, 5);
  sqcRYGate(q, 2.0325353278012184, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.10469463302555089, 5);
  sqcRYGate(q, -1.5337524574451447, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.996312800237616, 6);
  sqcRYGate(q, -0.07375915898604557, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5558847036589736, 6);
  sqcRYGate(q, 0.4329348451795015, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6123004372250345, 7);
  sqcRYGate(q, -1.0609525483934732, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5033803283041367, 7);
  sqcRYGate(q, -1.3052174619602308, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.0754954606348193, 8);
  sqcRYGate(q, -0.3081097288938688, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.23273511538571243, 8);
  sqcRYGate(q, -2.749080877236287, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0072522072986554, 9);
  sqcRYGate(q, -0.0377000397985301, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.9683978451369262, 9);
  sqcRYGate(q, 0.41691581894990987, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.013975103789519494, 10);
  sqcRYGate(q, 3.0464330655817067, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5577995204816568, 10);
  sqcRYGate(q, 1.535085253172189, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.15557633747649383, 11);
  sqcRYGate(q, -2.5437123180974868, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5722781359489542, 11);
  sqcRYGate(q, 1.58382332339313, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5494930322857128, 12);
  sqcRYGate(q, -0.06918206442957182, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5931535772223455, 12);
  sqcRYGate(q, 2.7792059435601097, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5839477911385043, 13);
  sqcRYGate(q, -3.0358617808918016, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5732282826778734, 13);
  sqcRYGate(q, 1.5598891646596718, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.543724793513963, 14);
  sqcRYGate(q, 0.00568139324938688, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.615682522446029, 14);
  sqcRYGate(q, -2.7002534000084557, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.563355265132382, 15);
  sqcRYGate(q, 0.6210879607121536, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5718291257552433, 15);
  sqcRYGate(q, 1.5590681006278408, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.479980712154477, 16);
  sqcRYGate(q, 3.0669966183482753, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.6581177598714198, 16);
  sqcRYGate(q, -2.830500779936306, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.5546955633605524, 17);
  sqcRYGate(q, 3.094156081575445, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.5586046941128564, 17);
  sqcRYGate(q, 1.5677143082892118, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.7900018612911908, 18);
  sqcRYGate(q, -0.5174104064531742, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.41549298111281, 18);
  sqcRYGate(q, 0.5704672805711972, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.7636498064392816, 0);
  sqcRYGate(q, 2.7585457985528388, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.865465896586281, 0);
  sqcRYGate(q, 2.443043376437224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7402783059161715, 1);
  sqcRYGate(q, -0.09029389954553059, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5524863688034145, 1);
  sqcRYGate(q, 1.469994705320245, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0432541253840855, 2);
  sqcRYGate(q, -0.2206094414773334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.019620126782446706, 2);
  sqcRYGate(q, -3.1024240371100356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.173570204413127, 3);
  sqcRYGate(q, -1.3550485907137109, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.1471006220195905, 3);
  sqcRYGate(q, -1.4602719756626736, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.978893605386439, 4);
  sqcRYGate(q, -2.61502309120331, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0427777154704212, 4);
  sqcRYGate(q, -3.1232014811704527, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9331062040052869, 5);
  sqcRYGate(q, 0.020107789242209986, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.555109074100647, 5);
  sqcRYGate(q, -1.6401513709102327, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6799876407181848, 6);
  sqcRYGate(q, 0.03577679509265064, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9467418944477686, 6);
  sqcRYGate(q, 3.1222451926716306, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0728110444626013, 7);
  sqcRYGate(q, -0.07109229637645242, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6183271692603138, 7);
  sqcRYGate(q, 1.3077262515192176, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.4498234356450963, 8);
  sqcRYGate(q, 2.885499669352737, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0919608021641256, 8);
  sqcRYGate(q, -3.0505316533836244, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.284656730687381, 9);
  sqcRYGate(q, 3.076009377631532, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5812049290421575, 9);
  sqcRYGate(q, -0.014305189826688823, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9665759856688325, 10);
  sqcRYGate(q, 0.00024300143492883564, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6595483453024138, 10);
  sqcRYGate(q, 3.1306484765119804, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1149410641792783, 11);
  sqcRYGate(q, -0.002521485041828064, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.603558363687336, 11);
  sqcRYGate(q, 1.5649934018861127, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6665152294648746, 12);
  sqcRYGate(q, -0.005323434447730868, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5230411347115291, 12);
  sqcRYGate(q, 3.116081735877996, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1295516339982865, 13);
  sqcRYGate(q, 3.1403156768556006, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.568198036756038, 13);
  sqcRYGate(q, 1.568481555055655, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.3706662371620941, 14);
  sqcRYGate(q, -0.0012046919783776058, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5436146171574117, 14);
  sqcRYGate(q, 3.136011414279411, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.1156508009095982, 15);
  sqcRYGate(q, -3.1410929005972967, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.6219792407555955, 15);
  sqcRYGate(q, 1.5705603571498994, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.582097832152277, 16);
  sqcRYGate(q, -0.014418583313158706, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.5579465132414223, 16);
  sqcRYGate(q, -0.01866512276706178, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.990433404082971, 17);
  sqcRYGate(q, -3.1246749585989937, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.6854564249411066, 17);
  sqcRYGate(q, 1.5702368645516462, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.2329281890247312, 18);
  sqcRYGate(q, 1.525204781560839, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.1635865080080494, 18);
  sqcRYGate(q, 2.9639914273741135, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.18588125025195446, 0);
  sqcRYGate(q, 1.2818675591488837, 1);
  sqcRYGate(q, 2.175130619343518, 2);
  sqcRYGate(q, -0.2826466382064793, 3);
  sqcRYGate(q, -1.2668836356333002, 4);
  sqcRYGate(q, -0.22519629952370046, 5);
  sqcRYGate(q, 1.9232592106144504, 6);
  sqcRYGate(q, -0.31612408879433024, 7);
  sqcRYGate(q, 1.2516530715630712, 8);
  sqcRYGate(q, 0.7127205886845828, 9);
  sqcRYGate(q, -0.2579573911481683, 10);
  sqcRYGate(q, 2.852038337394353, 11);
  sqcRYGate(q, -3.1324633547797265, 12);
  sqcRYGate(q, 2.850432944691223, 13);
  sqcRYGate(q, 0.0885061257787643, 14);
  sqcRYGate(q, -0.291808689578418, 15);
  sqcRYGate(q, 3.04633171500803, 16);
  sqcRYGate(q, 2.8512360959132033, 17);
  sqcRYGate(q, 0.8097409838229171, 18);
  sqcRYGate(q, 2.8864455388151424, 19);

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
