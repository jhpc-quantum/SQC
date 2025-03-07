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

  sqcRYGate(q, -0.8984723216142925, 0);
  sqcRZGate(q, -1.202316252036194, 0);
  sqcRYGate(q, 2.1781720144241863, 1);
  sqcRZGate(q, -2.0100743537760275, 1);
  sqcRYGate(q, 1.2578519492413607, 2);
  sqcRZGate(q, -1.9700925639101436, 2);
  sqcRYGate(q, 1.4375552654054333, 3);
  sqcRZGate(q, -0.16711151947182312, 3);
  sqcRYGate(q, -0.22211355320705814, 4);
  sqcRZGate(q, 3.0488475997449447, 4);
  sqcRYGate(q, -0.788683916459612, 5);
  sqcRZGate(q, 2.869164513129478, 5);
  sqcRYGate(q, 2.9758347239636613, 6);
  sqcRZGate(q, 1.930801196672571, 6);
  sqcRYGate(q, 0.7864473918810715, 7);
  sqcRZGate(q, -1.230570059836548, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.38521622415123713, 0);
  sqcRZGate(q, -2.1929988256090205, 0);
  sqcRYGate(q, 0.37597412189454626, 1);
  sqcRZGate(q, -1.1605483516656183, 1);
  sqcRYGate(q, -1.4951857625962475, 2);
  sqcRZGate(q, -0.9560246158357995, 2);
  sqcRYGate(q, -2.5860018650677903, 3);
  sqcRZGate(q, 1.6963463428922907, 3);
  sqcRYGate(q, -2.5597559863068295, 4);
  sqcRZGate(q, -1.494905612375676, 4);
  sqcRYGate(q, 0.3111833673549936, 5);
  sqcRZGate(q, -0.003028538008076634, 5);
  sqcRYGate(q, -0.06235714808800805, 6);
  sqcRZGate(q, 1.1502272427374765, 6);
  sqcRYGate(q, -1.9086090725044407, 7);
  sqcRZGate(q, -2.688462453237247, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.0266829351154785, 0);
  sqcRZGate(q, 1.3378929745269756, 0);
  sqcRYGate(q, 3.0827588062059856, 1);
  sqcRZGate(q, -2.4903212723219785, 1);
  sqcRYGate(q, -2.174961319041884, 2);
  sqcRZGate(q, -0.18828288584150868, 2);
  sqcRYGate(q, -2.1255342029120445, 3);
  sqcRZGate(q, -2.8902327403736745, 3);
  sqcRYGate(q, -1.4484317774269284, 4);
  sqcRZGate(q, -1.5168080664550185, 4);
  sqcRYGate(q, 2.5701249486070337, 5);
  sqcRZGate(q, -0.9971199805228316, 5);
  sqcRYGate(q, -0.8188557912446632, 6);
  sqcRZGate(q, 1.3059424859795952, 6);
  sqcRYGate(q, 1.1120166696568958, 7);
  sqcRZGate(q, -0.6503629657308286, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.7048612339670901, 0);
  sqcRZGate(q, -2.556738373112335, 0);
  sqcRYGate(q, -2.202211476788538, 1);
  sqcRZGate(q, 2.328373203041995, 1);
  sqcRYGate(q, -2.7824606936114002, 2);
  sqcRZGate(q, 1.9103510991628685, 2);
  sqcRYGate(q, -2.2136790257611048, 3);
  sqcRZGate(q, 1.3876940289388264, 3);
  sqcRYGate(q, 2.2900969753113753, 4);
  sqcRZGate(q, 3.1330616083133336, 4);
  sqcRYGate(q, 2.738073708302742, 5);
  sqcRZGate(q, -1.2135785627783369, 5);
  sqcRYGate(q, 1.4247685118545392, 6);
  sqcRZGate(q, -1.5296887476362888, 6);
  sqcRYGate(q, 0.23773312683269238, 7);
  sqcRZGate(q, -0.3079565384128795, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.622607360423237, 0);
  sqcRZGate(q, 2.8995661489213544, 0);
  sqcRYGate(q, -1.5223503222240344, 1);
  sqcRZGate(q, 2.4398182636533132, 1);
  sqcRYGate(q, 0.36080334257544694, 2);
  sqcRZGate(q, 0.34008123394161655, 2);
  sqcRYGate(q, 1.2872783295181236, 3);
  sqcRZGate(q, -1.3091171404903417, 3);
  sqcRYGate(q, -0.32293464034680774, 4);
  sqcRZGate(q, 0.09467899458617256, 4);
  sqcRYGate(q, -0.12102930523221556, 5);
  sqcRZGate(q, -2.0648647335797934, 5);
  sqcRYGate(q, 2.110072379914425, 6);
  sqcRZGate(q, 2.6084212833797924, 6);
  sqcRYGate(q, -1.034063193725807, 7);
  sqcRZGate(q, 1.6001019940358987, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.9738134647502474, 0);
  sqcRZGate(q, -1.3501298970776796, 0);
  sqcRYGate(q, 1.9704749207534649, 1);
  sqcRZGate(q, 3.0189898819300947, 1);
  sqcRYGate(q, 1.5414673992921815, 2);
  sqcRZGate(q, -2.6969325645622777, 2);
  sqcRYGate(q, 2.597169402139753, 3);
  sqcRZGate(q, 1.192741471867297, 3);
  sqcRYGate(q, 0.8418981322028055, 4);
  sqcRZGate(q, 1.0430156188279065, 4);
  sqcRYGate(q, 1.0641062606936549, 5);
  sqcRZGate(q, -1.3965562573598425, 5);
  sqcRYGate(q, 1.3701749569590544, 6);
  sqcRZGate(q, -2.0176705851226835, 6);
  sqcRYGate(q, -1.9924627885016906, 7);
  sqcRZGate(q, 0.07133856006133323, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1871927634736554, 0);
  sqcRZGate(q, 1.1223820104428226, 0);
  sqcRYGate(q, 2.929383555504031, 1);
  sqcRZGate(q, -1.3597838510417537, 1);
  sqcRYGate(q, 1.3992203346549963, 2);
  sqcRZGate(q, -0.6665578634637351, 2);
  sqcRYGate(q, 1.0210486069184155, 3);
  sqcRZGate(q, 2.5572269132833143, 3);
  sqcRYGate(q, -1.3304276542523548, 4);
  sqcRZGate(q, -1.7697467774390445, 4);
  sqcRYGate(q, -2.953764187056887, 5);
  sqcRZGate(q, 2.3789475527024173, 5);
  sqcRYGate(q, -2.6920766759130066, 6);
  sqcRZGate(q, 0.5717053160297576, 6);
  sqcRYGate(q, -2.7619763269784796, 7);
  sqcRZGate(q, -0.1835888744509493, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.338699225827912, 0);
  sqcRZGate(q, 2.7971570611847585, 0);
  sqcRYGate(q, -0.7859638018582986, 1);
  sqcRZGate(q, -1.367250261201565, 1);
  sqcRYGate(q, -0.21667213908890393, 2);
  sqcRZGate(q, -1.7271679341731068, 2);
  sqcRYGate(q, 1.417929655805281, 3);
  sqcRZGate(q, 2.7843797915216832, 3);
  sqcRYGate(q, 0.9400696623497957, 4);
  sqcRZGate(q, -0.3918965957577223, 4);
  sqcRYGate(q, 0.4126705646772493, 5);
  sqcRZGate(q, 2.7928133064030347, 5);
  sqcRYGate(q, 1.368305995209718, 6);
  sqcRZGate(q, -1.116698637513886, 6);
  sqcRYGate(q, -1.7483287686522146, 7);
  sqcRZGate(q, 0.46148133384467865, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7943808624714883, 0);
  sqcRZGate(q, -2.605490770128523, 0);
  sqcRYGate(q, 2.2540551547984617, 1);
  sqcRZGate(q, 1.1255970442363763, 1);
  sqcRYGate(q, -1.321518155511581, 2);
  sqcRZGate(q, -1.013185427345233, 2);
  sqcRYGate(q, -2.2858582320544296, 3);
  sqcRZGate(q, 0.8569807289455342, 3);
  sqcRYGate(q, -2.621330631967066, 4);
  sqcRZGate(q, -1.394551103658202, 4);
  sqcRYGate(q, 1.5975887903577624, 5);
  sqcRZGate(q, -0.9796734009737338, 5);
  sqcRYGate(q, -2.4956566551698356, 6);
  sqcRZGate(q, 2.5471746275246114, 6);
  sqcRYGate(q, 2.662060510964231, 7);
  sqcRZGate(q, 1.5047541537094151, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.23832586656620783, 0);
  sqcRZGate(q, 1.7441519971720236, 0);
  sqcRYGate(q, -1.9728610617995286, 1);
  sqcRZGate(q, -1.5178489770119599, 1);
  sqcRYGate(q, 2.2870903570536316, 2);
  sqcRZGate(q, -2.797486686889713, 2);
  sqcRYGate(q, -2.1381257467235395, 3);
  sqcRZGate(q, 2.073458702745034, 3);
  sqcRYGate(q, -1.4532831919491862, 4);
  sqcRZGate(q, -2.5633017404729896, 4);
  sqcRYGate(q, -0.3647509692454223, 5);
  sqcRZGate(q, 2.4380094733969573, 5);
  sqcRYGate(q, 1.9835522477302663, 6);
  sqcRZGate(q, -3.0179381584898057, 6);
  sqcRYGate(q, -0.32046935631856854, 7);
  sqcRZGate(q, -0.674077875873831, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5980873907023099, 0);
  sqcRZGate(q, -0.24235470132737294, 0);
  sqcRYGate(q, -0.9250361367172385, 1);
  sqcRZGate(q, -0.686733944417413, 1);
  sqcRYGate(q, 1.3896967502619113, 2);
  sqcRZGate(q, -1.204187022702837, 2);
  sqcRYGate(q, 2.620454755824411, 3);
  sqcRZGate(q, 0.8549022506500866, 3);
  sqcRYGate(q, -1.9704178190988344, 4);
  sqcRZGate(q, -2.6345007290862146, 4);
  sqcRYGate(q, 0.4519827324611388, 5);
  sqcRZGate(q, 1.267487579070984, 5);
  sqcRYGate(q, -0.3181991051082749, 6);
  sqcRZGate(q, 2.3667286524558264, 6);
  sqcRYGate(q, 2.667357073397262, 7);
  sqcRZGate(q, 1.3732719585158222, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.719973276580518, 0);
  sqcRZGate(q, 1.7371163098017548, 0);
  sqcRYGate(q, 2.569748560484371, 1);
  sqcRZGate(q, -1.3893963490816494, 1);
  sqcRYGate(q, -2.452430240517201, 2);
  sqcRZGate(q, 0.2632246482587531, 2);
  sqcRYGate(q, -1.6929249482133317, 3);
  sqcRZGate(q, 2.5189335623707065, 3);
  sqcRYGate(q, 0.4364364301973589, 4);
  sqcRZGate(q, -0.589215872468846, 4);
  sqcRYGate(q, 2.6389070180925533, 5);
  sqcRZGate(q, 1.3506476845483775, 5);
  sqcRYGate(q, 1.5875092780126896, 6);
  sqcRZGate(q, -0.7413635865253443, 6);
  sqcRYGate(q, -1.8207166433211956, 7);
  sqcRZGate(q, 1.1438718110694053, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.0052925678683122, 0);
  sqcRZGate(q, -2.489180411641384, 0);
  sqcRYGate(q, 2.8436859152953646, 1);
  sqcRZGate(q, -1.9345433652618422, 1);
  sqcRYGate(q, -1.9813950642299285, 2);
  sqcRZGate(q, 0.9740177785762762, 2);
  sqcRYGate(q, 1.5957187186932744, 3);
  sqcRZGate(q, 0.8123898856822152, 3);
  sqcRYGate(q, -2.724529276645805, 4);
  sqcRZGate(q, 2.9786830893162892, 4);
  sqcRYGate(q, 2.910192903533556, 5);
  sqcRZGate(q, 2.546647756415499, 5);
  sqcRYGate(q, 1.7073134738771116, 6);
  sqcRZGate(q, 0.056543711102293004, 6);
  sqcRYGate(q, 1.113308406310032, 7);
  sqcRZGate(q, 0.197012085383526, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4122348856399587, 0);
  sqcRZGate(q, 0.9070456759586862, 0);
  sqcRYGate(q, 2.703474251708215, 1);
  sqcRZGate(q, 2.641771045496939, 1);
  sqcRYGate(q, 1.6477489373132896, 2);
  sqcRZGate(q, 2.3987259260689986, 2);
  sqcRYGate(q, -2.9019197646072152, 3);
  sqcRZGate(q, -2.148782866946583, 3);
  sqcRYGate(q, -2.7302143631379834, 4);
  sqcRZGate(q, -2.839704367041295, 4);
  sqcRYGate(q, -2.9060084876086463, 5);
  sqcRZGate(q, -1.5893373090599399, 5);
  sqcRYGate(q, 2.1782514152113315, 6);
  sqcRZGate(q, -2.6240041490549917, 6);
  sqcRYGate(q, 0.26458478051518597, 7);
  sqcRZGate(q, 0.319199605788607, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.6748362449964276, 0);
  sqcRZGate(q, 2.1806584399866473, 0);
  sqcRYGate(q, -1.6036625016252515, 1);
  sqcRZGate(q, -1.5229997766839674, 1);
  sqcRYGate(q, -1.3929396382793318, 2);
  sqcRZGate(q, -1.4093529184569462, 2);
  sqcRYGate(q, 2.5257558553040527, 3);
  sqcRZGate(q, -0.2976116775909859, 3);
  sqcRYGate(q, 2.9437998041716784, 4);
  sqcRZGate(q, 0.18228390328052357, 4);
  sqcRYGate(q, 0.9829951421938423, 5);
  sqcRZGate(q, 0.8745071038161999, 5);
  sqcRYGate(q, 2.1623307047683964, 6);
  sqcRZGate(q, 2.994750233885524, 6);
  sqcRYGate(q, -0.32545085628821285, 7);
  sqcRZGate(q, 2.469766657637426, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6907429109033361, 0);
  sqcRZGate(q, -2.2594181942408067, 0);
  sqcRYGate(q, 0.9364577502372714, 1);
  sqcRZGate(q, 2.791322523671246, 1);
  sqcRYGate(q, 0.7800838494599677, 2);
  sqcRZGate(q, -2.1396083330662607, 2);
  sqcRYGate(q, -1.5307058447434656, 3);
  sqcRZGate(q, -0.8695788786501576, 3);
  sqcRYGate(q, -1.0317493656557897, 4);
  sqcRZGate(q, 0.47630012109715253, 4);
  sqcRYGate(q, 2.1819494780315116, 5);
  sqcRZGate(q, 1.2022778184554, 5);
  sqcRYGate(q, 2.805793618602629, 6);
  sqcRZGate(q, -1.0129559276599176, 6);
  sqcRYGate(q, -1.4407416072565307, 7);
  sqcRZGate(q, 1.0395462827207926, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.496120139521408, 0);
  sqcRZGate(q, 1.1342379498633406, 0);
  sqcRYGate(q, 0.6269788025296852, 1);
  sqcRZGate(q, 0.9991933991198855, 1);
  sqcRYGate(q, -1.6891881381401015, 2);
  sqcRZGate(q, 1.0785038945844283, 2);
  sqcRYGate(q, 1.0232244841628462, 3);
  sqcRZGate(q, -0.6467004037374791, 3);
  sqcRYGate(q, -1.6326402852954485, 4);
  sqcRZGate(q, 1.119629812970547, 4);
  sqcRYGate(q, -2.520411132151882, 5);
  sqcRZGate(q, 2.578572745144803, 5);
  sqcRYGate(q, -0.6755522955861419, 6);
  sqcRZGate(q, -1.8297211474376267, 6);
  sqcRYGate(q, -0.43162015778626556, 7);
  sqcRZGate(q, 0.3536796562924561, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.03906069054531, 0);
  sqcRZGate(q, -0.06402755476428545, 0);
  sqcRYGate(q, 2.55865121423482, 1);
  sqcRZGate(q, -0.1956288490181981, 1);
  sqcRYGate(q, -0.9353537566639558, 2);
  sqcRZGate(q, -0.4538635596136973, 2);
  sqcRYGate(q, -1.4229226222576654, 3);
  sqcRZGate(q, 0.968876057293328, 3);
  sqcRYGate(q, 2.4001726698999786, 4);
  sqcRZGate(q, -0.3059727128807787, 4);
  sqcRYGate(q, -2.8522917247399784, 5);
  sqcRZGate(q, -1.7280805121831326, 5);
  sqcRYGate(q, 1.834331528710687, 6);
  sqcRZGate(q, 1.3495058814952392, 6);
  sqcRYGate(q, -2.3958036264857023, 7);
  sqcRZGate(q, 1.901329075201777, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7492035097714145, 0);
  sqcRZGate(q, 0.017180099427349656, 0);
  sqcRYGate(q, 3.0013009296241737, 1);
  sqcRZGate(q, -0.4872995192917413, 1);
  sqcRYGate(q, -2.282240128709315, 2);
  sqcRZGate(q, 1.9468263442020142, 2);
  sqcRYGate(q, -1.5431070961628377, 3);
  sqcRZGate(q, -0.6821306542600916, 3);
  sqcRYGate(q, 0.2936062749372211, 4);
  sqcRZGate(q, -1.2790267299862912, 4);
  sqcRYGate(q, 1.5534413063720631, 5);
  sqcRZGate(q, 0.1220990149095753, 5);
  sqcRYGate(q, -1.6960641224020692, 6);
  sqcRZGate(q, 0.8730559871415569, 6);
  sqcRYGate(q, -2.6421784170861624, 7);
  sqcRZGate(q, 1.113041609431855, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.388578147348892, 0);
  sqcRZGate(q, -2.529473174874099, 0);
  sqcRYGate(q, 2.538199786116232, 1);
  sqcRZGate(q, 1.9073435322988548, 1);
  sqcRYGate(q, -1.329196948810697, 2);
  sqcRZGate(q, 2.057084885454186, 2);
  sqcRYGate(q, -0.91249659499933, 3);
  sqcRZGate(q, 0.2967262384573468, 3);
  sqcRYGate(q, -2.3634107117427314, 4);
  sqcRZGate(q, -2.016839985207015, 4);
  sqcRYGate(q, -1.3449055817527906, 5);
  sqcRZGate(q, -2.8372965175425358, 5);
  sqcRYGate(q, 0.39575307005959726, 6);
  sqcRZGate(q, 2.143300998331069, 6);
  sqcRYGate(q, 0.48650079571958377, 7);
  sqcRZGate(q, -2.594093396082919, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.2359485983887932, 0);
  sqcRZGate(q, -1.1020652539496139, 0);
  sqcRYGate(q, -2.6697972163602963, 1);
  sqcRZGate(q, -2.9145559316269165, 1);
  sqcRYGate(q, 1.5208651668673885, 2);
  sqcRZGate(q, 2.7365468170464333, 2);
  sqcRYGate(q, 0.40054525458482865, 3);
  sqcRZGate(q, -1.2471286752519595, 3);
  sqcRYGate(q, -1.7929678117070598, 4);
  sqcRZGate(q, -0.1534619456253529, 4);
  sqcRYGate(q, 0.12185010279609809, 5);
  sqcRZGate(q, 2.6213830552578035, 5);
  sqcRYGate(q, -1.7948542468335011, 6);
  sqcRZGate(q, 0.29958371858457256, 6);
  sqcRYGate(q, -2.3194625008063903, 7);
  sqcRZGate(q, -0.1794672393514807, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.16821627593208532, 0);
  sqcRZGate(q, 2.601933301497038, 0);
  sqcRYGate(q, -1.0937584573632675, 1);
  sqcRZGate(q, 1.6449070873504277, 1);
  sqcRYGate(q, 0.3415410108749759, 2);
  sqcRZGate(q, 2.891314335688127, 2);
  sqcRYGate(q, -2.521176106129616, 3);
  sqcRZGate(q, 2.8824669010800257, 3);
  sqcRYGate(q, 3.0920982254796754, 4);
  sqcRZGate(q, 3.11418403048115, 4);
  sqcRYGate(q, -2.977507723286421, 5);
  sqcRZGate(q, -2.9203501747884166, 5);
  sqcRYGate(q, 1.6402558847724562, 6);
  sqcRZGate(q, -2.30424299561177, 6);
  sqcRYGate(q, 1.245590881167522, 7);
  sqcRZGate(q, 1.9784639954526613, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.1021942890478513, 0);
  sqcRZGate(q, 2.664121420154738, 0);
  sqcRYGate(q, 0.9090562339185961, 1);
  sqcRZGate(q, -2.4901080026805538, 1);
  sqcRYGate(q, 2.977345819424065, 2);
  sqcRZGate(q, -3.006731658891835, 2);
  sqcRYGate(q, 1.7053811146204685, 3);
  sqcRZGate(q, -1.1548496068500471, 3);
  sqcRYGate(q, 0.8227215705944264, 4);
  sqcRZGate(q, -1.0919243446638918, 4);
  sqcRYGate(q, 2.6393776425257323, 5);
  sqcRZGate(q, 0.1525703353106105, 5);
  sqcRYGate(q, 2.094884583447203, 6);
  sqcRZGate(q, 2.0798627036436512, 6);
  sqcRYGate(q, -0.9636538717027715, 7);
  sqcRZGate(q, 1.6524646465623665, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9351810053932108, 0);
  sqcRZGate(q, -0.014271604635763867, 0);
  sqcRYGate(q, -1.6036143842234265, 1);
  sqcRZGate(q, 2.0048839226175783, 1);
  sqcRYGate(q, -2.677660684530401, 2);
  sqcRZGate(q, -2.0647099761703487, 2);
  sqcRYGate(q, -2.978931963894736, 3);
  sqcRZGate(q, 1.582985512778994, 3);
  sqcRYGate(q, -2.915099941349708, 4);
  sqcRZGate(q, 0.6902339512427343, 4);
  sqcRYGate(q, -0.40083773231970665, 5);
  sqcRZGate(q, 1.0211168795434915, 5);
  sqcRYGate(q, -2.6376763161494217, 6);
  sqcRZGate(q, -1.7140260352534913, 6);
  sqcRYGate(q, 1.4186391395008116, 7);
  sqcRZGate(q, 0.06192932980409437, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.0856849937190054, 0);
  sqcRZGate(q, -1.2756083194497674, 0);
  sqcRYGate(q, -0.9692893005853637, 1);
  sqcRZGate(q, 2.6272328548166355, 1);
  sqcRYGate(q, -0.9250138765204179, 2);
  sqcRZGate(q, -0.2024522548929495, 2);
  sqcRYGate(q, -1.8165712633369566, 3);
  sqcRZGate(q, -1.915158191027601, 3);
  sqcRYGate(q, -0.32888216977234214, 4);
  sqcRZGate(q, 1.6959942479279453, 4);
  sqcRYGate(q, -0.1750906620209388, 5);
  sqcRZGate(q, 0.8004129608122286, 5);
  sqcRYGate(q, 3.0230462856511777, 6);
  sqcRZGate(q, -1.1542935631486113, 6);
  sqcRYGate(q, -1.4112180397627103, 7);
  sqcRZGate(q, 0.38390522683419004, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.4706149879582857, 0);
  sqcRZGate(q, 1.6809253191094768, 0);
  sqcRYGate(q, -0.5275778889013825, 1);
  sqcRZGate(q, -2.726852585553991, 1);
  sqcRYGate(q, 0.07535738294669603, 2);
  sqcRZGate(q, 1.0602901233085547, 2);
  sqcRYGate(q, -1.4905886828531523, 3);
  sqcRZGate(q, 1.4364957987625735, 3);
  sqcRYGate(q, -2.0980079135180647, 4);
  sqcRZGate(q, -1.7081126508796614, 4);
  sqcRYGate(q, 2.650431711871365, 5);
  sqcRZGate(q, -1.1064855417733188, 5);
  sqcRYGate(q, 0.3107626194055394, 6);
  sqcRZGate(q, 1.2927779050615882, 6);
  sqcRYGate(q, 2.1170522107061664, 7);
  sqcRZGate(q, 1.7759225468703745, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.9431556201527416, 0);
  sqcRZGate(q, -0.8989961092113311, 0);
  sqcRYGate(q, 1.3261380046555162, 1);
  sqcRZGate(q, -0.6856240234580432, 1);
  sqcRYGate(q, -2.369762822488653, 2);
  sqcRZGate(q, -2.1751751407693947, 2);
  sqcRYGate(q, 0.9941385237058328, 3);
  sqcRZGate(q, -1.5093973294031462, 3);
  sqcRYGate(q, 2.111382698417807, 4);
  sqcRZGate(q, 0.3877956682715924, 4);
  sqcRYGate(q, -0.4274415407336125, 5);
  sqcRZGate(q, -1.8118237032616475, 5);
  sqcRYGate(q, -2.1682160464980473, 6);
  sqcRZGate(q, -2.1233602997958645, 6);
  sqcRYGate(q, -2.4990158126597843, 7);
  sqcRZGate(q, 0.2381389851611842, 7);

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
