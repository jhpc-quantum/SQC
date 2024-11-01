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

  sqcRYGate(q, -1.5625318483369672, 0);
  sqcRYGate(q, 1.2349274431133046, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7982822060167165, 0);
  sqcRYGate(q, -1.9135828818398304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3304003532935933, 2);
  sqcRYGate(q, 0.5669687881541765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.23080657305371616, 2);
  sqcRYGate(q, 1.0452259518952136, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8768078284321483, 0);
  sqcRYGate(q, -0.48400892532170214, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.48267121033025884, 0);
  sqcRYGate(q, -0.2635771925680963, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7757871864233574, 1);
  sqcRYGate(q, 1.5720979414817071, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6184296138271455, 1);
  sqcRYGate(q, 2.7647243051593535, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9335396462635162, 0);
  sqcRYGate(q, -1.74862223258524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.30140601424176566, 0);
  sqcRYGate(q, -0.7000254154323295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5520215133735213, 2);
  sqcRYGate(q, -2.103989381300437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4779442632685145, 2);
  sqcRYGate(q, 3.02775296959831, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3593284031402892, 0);
  sqcRYGate(q, 2.4702121560620443, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2805249272775017, 0);
  sqcRYGate(q, -2.117964099428659, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2325141558740977, 1);
  sqcRYGate(q, -0.47378978918395015, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1406846252595342, 1);
  sqcRYGate(q, -1.612522794890532, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.225752912361491, 0);
  sqcRYGate(q, -1.7034342280094343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4786626072890323, 0);
  sqcRYGate(q, 0.007015864806063199, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0135142825681847, 2);
  sqcRYGate(q, -0.39744348684664915, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1647234525842, 2);
  sqcRYGate(q, -1.2671870621590253, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.087730705878691, 0);
  sqcRYGate(q, 2.176847411238896, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7266204739055493, 0);
  sqcRYGate(q, 2.8604062040234464, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.509049790464553, 1);
  sqcRYGate(q, -0.6300300713380026, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.012464604785675348, 1);
  sqcRYGate(q, 0.2754341636942721, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.056049082078631546, 0);
  sqcRYGate(q, 0.6570184460777206, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.29617924859558764, 0);
  sqcRYGate(q, 1.0933374687606063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.934431089824238, 2);
  sqcRYGate(q, -0.9504227379339839, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06415145711142056, 2);
  sqcRYGate(q, 1.2815237053767934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0262523108835735, 0);
  sqcRYGate(q, 1.8583902455773955, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1950379933018604, 0);
  sqcRYGate(q, -1.387324068085408, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4794225941408298, 1);
  sqcRYGate(q, -2.413260545043873, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6709910126687806, 1);
  sqcRYGate(q, -0.41030137223441693, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.043225843901375, 0);
  sqcRYGate(q, 0.03546790303912318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09709688087629154, 0);
  sqcRYGate(q, -0.4662285398065533, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9847028457361255, 2);
  sqcRYGate(q, 0.04542419890946281, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5841003354101404, 2);
  sqcRYGate(q, -1.961790197901134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4188719483436163, 0);
  sqcRYGate(q, -0.39257527111581947, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2192700377131045, 0);
  sqcRYGate(q, 1.0009017206976445, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8675103378791302, 1);
  sqcRYGate(q, -2.6884055586544298, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3346460342187099, 1);
  sqcRYGate(q, -1.7364117328288866, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.117379079631893, 0);
  sqcRYGate(q, 0.88070626262295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7168874062588718, 0);
  sqcRYGate(q, -2.2614872978175513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0665720114553725, 2);
  sqcRYGate(q, -2.3398498159192456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8806164497862555, 2);
  sqcRYGate(q, 0.5142651588502477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6281816182259685, 0);
  sqcRYGate(q, 2.929076536932148, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3767673934638576, 0);
  sqcRYGate(q, 1.529432422873673, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8541874869471113, 1);
  sqcRYGate(q, 2.0503092208063363, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3466120636414276, 1);
  sqcRYGate(q, -1.7157477035839968, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2576667296297073, 0);
  sqcRYGate(q, -1.896145455219469, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2916971975843814, 0);
  sqcRYGate(q, -0.8338111263718506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.067831850634441, 2);
  sqcRYGate(q, -2.468005776320126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.039542735602536946, 2);
  sqcRYGate(q, 1.4874749066376807, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6282962096546081, 0);
  sqcRYGate(q, 2.182485150277386, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8361876296747233, 0);
  sqcRYGate(q, 1.77663982869135, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5653775607871836, 1);
  sqcRYGate(q, -1.8134105100049644, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2201819274144112, 1);
  sqcRYGate(q, 0.23280146862974183, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1663452442378537, 0);
  sqcRYGate(q, -2.899666220194767, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5748132851822656, 0);
  sqcRYGate(q, 2.448038121910756, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.45413807150686686, 2);
  sqcRYGate(q, -1.659073247102349, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5522975754332399, 2);
  sqcRYGate(q, -3.0709983369699896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.35411827820661, 0);
  sqcRYGate(q, -0.4454484741923803, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3060141687003277, 0);
  sqcRYGate(q, 2.137672519748012, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6856056468902707, 1);
  sqcRYGate(q, 1.3488663943839585, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8944855813508941, 1);
  sqcRYGate(q, -0.1789616617027834, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.39731057372599216, 0);
  sqcRYGate(q, 1.7399400740141326, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.257362315264031, 0);
  sqcRYGate(q, -1.313448475150111, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3045387283149887, 2);
  sqcRYGate(q, 0.9128177701675497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.905141479889401, 2);
  sqcRYGate(q, 1.674540666411857, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.803022357724599, 0);
  sqcRYGate(q, -0.21471299796090726, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5903675895071716, 0);
  sqcRYGate(q, -0.23907171421818016, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3229673833573865, 1);
  sqcRYGate(q, 2.012013126866849, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3044960806592485, 1);
  sqcRYGate(q, -0.5053475788081281, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7967015601324867, 0);
  sqcRYGate(q, 0.30513198733216385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7948715523199628, 0);
  sqcRYGate(q, -0.6127648950418498, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4725620435548041, 2);
  sqcRYGate(q, -2.433787635408344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6584102478319265, 2);
  sqcRYGate(q, 2.502394056480677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5368099348512413, 0);
  sqcRYGate(q, 0.20894821906992628, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7925817698646906, 0);
  sqcRYGate(q, 2.9185614178517056, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.878679277029554, 1);
  sqcRYGate(q, -1.8683709170666534, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.783847000930256, 1);
  sqcRYGate(q, 2.494978883899433, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.267561509532533, 0);
  sqcRYGate(q, -2.077149696286174, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8404345547362126, 0);
  sqcRYGate(q, 0.7601796496447948, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8908256923881006, 2);
  sqcRYGate(q, -0.9663454367992859, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2090689157735177, 2);
  sqcRYGate(q, -2.2986142371559035, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1697196908993823, 0);
  sqcRYGate(q, 1.1146770651889315, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.466008518556281, 0);
  sqcRYGate(q, 1.8178118143576707, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4822069400376465, 1);
  sqcRYGate(q, 0.5343807083092544, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1755828518780582, 1);
  sqcRYGate(q, 2.1924155364900493, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5173862747727913, 0);
  sqcRYGate(q, -0.04351755681568261, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5055594816335219, 0);
  sqcRYGate(q, 3.049049290974455, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8234402954734317, 2);
  sqcRYGate(q, -0.19813392830292442, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.96194034582963, 2);
  sqcRYGate(q, 1.2929735476107715, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.942038618440813, 0);
  sqcRYGate(q, -2.7169577988589118, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4357680434038453, 0);
  sqcRYGate(q, -1.1534060035632283, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1358222103123716, 1);
  sqcRYGate(q, -2.138991146234808, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8343573056369002, 1);
  sqcRYGate(q, 2.35504802769454, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.19296350601621803, 0);
  sqcRYGate(q, -1.362878998223925, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8760187435621702, 0);
  sqcRYGate(q, 0.01610637713244009, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.048001563080042, 2);
  sqcRYGate(q, 0.20394801184833433, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8865307593465865, 2);
  sqcRYGate(q, -0.5900602601731598, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.877432683180652, 0);
  sqcRYGate(q, -3.112170050150022, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.83553779030416, 0);
  sqcRYGate(q, 1.5766744655444478, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8556200100243667, 1);
  sqcRYGate(q, -0.8304053865046468, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3126389943247347, 1);
  sqcRYGate(q, -2.751745173507971, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.21501677638840544, 0);
  sqcRYGate(q, -2.7991971719606386, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.280479520054266, 0);
  sqcRYGate(q, -2.2102981050693185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7870743481528493, 2);
  sqcRYGate(q, -1.7882662345457427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4540253231651685, 2);
  sqcRYGate(q, -1.179114242428236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5680706339946369, 0);
  sqcRYGate(q, 1.4845168671286677, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0708778770425877, 0);
  sqcRYGate(q, 3.0625307453138366, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.828791006882999, 1);
  sqcRYGate(q, -2.7990214158615254, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3965084950509565, 1);
  sqcRYGate(q, 2.7494364948560186, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2513800157657877, 0);
  sqcRYGate(q, 1.1824764395189185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2780141787732476, 0);
  sqcRYGate(q, -1.3304303782656985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3645789619379167, 2);
  sqcRYGate(q, -2.783894083169571, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.683833768437251, 2);
  sqcRYGate(q, 0.30041704415520787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1192472562448257, 0);
  sqcRYGate(q, 1.9474193915793132, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.557375977781202, 0);
  sqcRYGate(q, -0.17676699332001444, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0866291998525455, 1);
  sqcRYGate(q, 0.8730556294032282, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.791640081044073, 1);
  sqcRYGate(q, -1.8061498028101726, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.862030851940395, 0);
  sqcRYGate(q, -0.21233762416837726, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7248257314340814, 0);
  sqcRYGate(q, -2.383904022181128, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8272520300066075, 2);
  sqcRYGate(q, 0.9200127095420125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3674628458250044, 2);
  sqcRYGate(q, -2.4360375606860925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.530927455616726, 0);
  sqcRYGate(q, -1.2596848342540676, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4364869985325146, 0);
  sqcRYGate(q, 2.375727305393747, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.09253728382044954, 1);
  sqcRYGate(q, -2.1117673385617577, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.125800604441954, 1);
  sqcRYGate(q, -1.1211214045677258, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0485325656980817, 0);
  sqcRYGate(q, 1.1815534775116436, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5189407148420497, 0);
  sqcRYGate(q, -1.7040477712925721, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.636610078601504, 2);
  sqcRYGate(q, 2.6606136981034396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.019632125073427, 2);
  sqcRYGate(q, 1.1935275484700316, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.69153194791277, 0);
  sqcRYGate(q, -1.0616145695713746, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.712107636212185, 0);
  sqcRYGate(q, -1.0624350939338028, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.327219944014451, 1);
  sqcRYGate(q, 1.2347352328695553, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1614164083759673, 1);
  sqcRYGate(q, -0.8803610113746201, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7753923781073317, 0);
  sqcRYGate(q, 2.218892761122637, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3175196166044056, 0);
  sqcRYGate(q, 1.797207507450236, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.844825930258194, 2);
  sqcRYGate(q, 1.7182517704023228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2752665206418692, 2);
  sqcRYGate(q, -2.7996683160617084, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.121859379769493, 0);
  sqcRYGate(q, -1.6462022291132765, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.19993494033979786, 0);
  sqcRYGate(q, 0.8733551078596214, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.465690952306145, 1);
  sqcRYGate(q, -2.307614268348483, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.13546138716685707, 1);
  sqcRYGate(q, 2.3899417035361834, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.677192289028861, 0);
  sqcRYGate(q, -0.2295754694964046, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3069918416374895, 0);
  sqcRYGate(q, 1.8987272029374758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.612594963832181, 2);
  sqcRYGate(q, -0.11472763107739249, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1322420878489954, 2);
  sqcRYGate(q, -1.2508902423687616, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.061321622996497, 0);
  sqcRYGate(q, -1.6095441505144492, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.991545861322589, 0);
  sqcRYGate(q, -1.581975290527723, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0675574512588044, 1);
  sqcRYGate(q, 1.042683836675874, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6035766259217831, 1);
  sqcRYGate(q, 2.6558921752739493, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.275514130142481, 0);
  sqcRYGate(q, -0.8864464178212424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10105659452275426, 0);
  sqcRYGate(q, 0.1682584817411006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6768061968444876, 2);
  sqcRYGate(q, 2.576213198608222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1056907534393892, 2);
  sqcRYGate(q, 1.3881985395875684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6903856787285596, 0);
  sqcRYGate(q, 2.953790862537009, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.87144694189391, 0);
  sqcRYGate(q, -2.286531695529909, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.1510415097901289, 1);
  sqcRYGate(q, 1.8118041314903306, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2698970440554553, 1);
  sqcRYGate(q, -0.4714106030303633, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4182222392960935, 0);
  sqcRYGate(q, 2.650971847977779, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.772544905874466, 0);
  sqcRYGate(q, 1.587607327540658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3243684858776503, 2);
  sqcRYGate(q, -1.270720870896621, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.414790076992971, 2);
  sqcRYGate(q, -1.0908518561052158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2337570242509575, 0);
  sqcRYGate(q, 0.9640590950578368, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.058151212487002, 0);
  sqcRYGate(q, 1.2763402177317982, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.985833099955273, 1);
  sqcRYGate(q, -2.3234355479023767, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3431673656443028, 1);
  sqcRYGate(q, -1.3096327612983725, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9531557106982251, 0);
  sqcRYGate(q, -0.27566681434140616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7082265143714632, 0);
  sqcRYGate(q, -1.7873113266640035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.12387572470824007, 2);
  sqcRYGate(q, 2.76779952352535, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4279683653571165, 2);
  sqcRYGate(q, 1.174134393559469, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7220884847947806, 0);
  sqcRYGate(q, 1.3235241706984224, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.081993620574159, 0);
  sqcRYGate(q, 1.9117306980964681, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1817361414003917, 1);
  sqcRYGate(q, 2.8808867453067672, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.32671732975079776, 1);
  sqcRYGate(q, 2.955208422175942, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1502822692144012, 0);
  sqcRYGate(q, 2.8194359442016945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9620762593683807, 0);
  sqcRYGate(q, 1.5966739727765489, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.400489943607575, 2);
  sqcRYGate(q, 2.8008771237634993, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7914365570470925, 2);
  sqcRYGate(q, 1.0804974477536595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3190983069038325, 0);
  sqcRYGate(q, -0.33430649755261416, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.393743757288243, 0);
  sqcRYGate(q, 1.3315216832448844, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.934950001415074, 1);
  sqcRYGate(q, -0.46287147880535373, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4503358681978766, 1);
  sqcRYGate(q, 1.2839638371131872, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1122379158666513, 0);
  sqcRYGate(q, -1.9965506449081447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3702652454062711, 0);
  sqcRYGate(q, -1.5729069776097087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3787010466461185, 2);
  sqcRYGate(q, 0.12393557614286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4321913885800848, 2);
  sqcRYGate(q, -2.2726762644329, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2651330285620125, 0);
  sqcRYGate(q, 0.24220983056105272, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.338559733517257, 0);
  sqcRYGate(q, -1.4697193316417039, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7534410626850592, 1);
  sqcRYGate(q, 0.7660891732000227, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.466142824481867, 1);
  sqcRYGate(q, -0.6122118365489824, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5325654946251506, 0);
  sqcRYGate(q, -0.5878875969572864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5826145736910648, 0);
  sqcRYGate(q, -1.0334914178568748, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8181425816618226, 2);
  sqcRYGate(q, 2.718808924364439, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8394856125630284, 2);
  sqcRYGate(q, 2.601681198112938, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.26085066617062264, 0);
  sqcRYGate(q, -0.8726833316985457, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6430682149599998, 0);
  sqcRYGate(q, 1.4125716663026027, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5244758662273468, 1);
  sqcRYGate(q, -2.617188021571756, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.441848763580964, 1);
  sqcRYGate(q, 2.7407496874504225, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6972528932998467, 0);
  sqcRYGate(q, -0.49507638085206285, 1);
  sqcRYGate(q, 2.2161595207997804, 2);
  sqcRYGate(q, 0.790592453423229, 3);

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
