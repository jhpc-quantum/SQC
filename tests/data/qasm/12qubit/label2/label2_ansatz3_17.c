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

  sqcRYGate(q, 1.503368762484799, 0);
  sqcRZGate(q, 1.541578322121881, 0);
  sqcRYGate(q, 4.3110271785273824e-05, 1);
  sqcRZGate(q, 1.1081674767132732, 1);
  sqcRYGate(q, -3.141453217101637, 2);
  sqcRZGate(q, -1.8066654857710616, 2);
  sqcRYGate(q, 0.9983642668745746, 3);
  sqcRZGate(q, 0.0017627457137524662, 3);
  sqcRYGate(q, -0.48147958361188625, 4);
  sqcRZGate(q, 0.2714354233120657, 4);
  sqcRYGate(q, 0.0044553267291904675, 5);
  sqcRZGate(q, -0.5381278143627111, 5);
  sqcRYGate(q, -3.1407999649901837, 6);
  sqcRZGate(q, -1.5126240339775654, 6);
  sqcRYGate(q, 1.5623283411853865, 7);
  sqcRZGate(q, 1.565378327537131, 7);
  sqcRYGate(q, -0.07903870267681334, 8);
  sqcRZGate(q, -3.0886213205412236, 8);
  sqcRYGate(q, 0.000742338811617491, 9);
  sqcRZGate(q, 2.259830924979574, 9);
  sqcRYGate(q, 2.3868761114356194, 10);
  sqcRZGate(q, 2.0447402830473784, 10);
  sqcRYGate(q, -3.139967211489146, 11);
  sqcRZGate(q, -0.028090504035443477, 11);
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
  sqcRYGate(q, 1.9681389179835955, 0);
  sqcRZGate(q, -0.06427424663910042, 0);
  sqcRYGate(q, 0.0016271745901546418, 1);
  sqcRZGate(q, 0.16460472496863407, 1);
  sqcRYGate(q, 2.8912554408082367, 2);
  sqcRZGate(q, -0.4801415490671985, 2);
  sqcRYGate(q, -2.1402784161369626, 3);
  sqcRZGate(q, 2.9552342465707038, 3);
  sqcRYGate(q, -1.1053547105442458, 4);
  sqcRZGate(q, 1.4450233602401017, 4);
  sqcRYGate(q, -0.0007727409025409081, 5);
  sqcRZGate(q, 1.2604367564989776, 5);
  sqcRYGate(q, -3.095433558180241, 6);
  sqcRZGate(q, -2.413227147336565, 6);
  sqcRYGate(q, -1.0039309358062196, 7);
  sqcRZGate(q, 2.69006006967106, 7);
  sqcRYGate(q, 3.081335127817768, 8);
  sqcRZGate(q, -2.120395929416506, 8);
  sqcRYGate(q, -1.5704586041924427, 9);
  sqcRZGate(q, 2.9034850441295625, 9);
  sqcRYGate(q, -1.152543843990244, 10);
  sqcRZGate(q, 2.246653302009327, 10);
  sqcRYGate(q, 1.6065667151063858, 11);
  sqcRZGate(q, -0.3278364181214013, 11);
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
  sqcRYGate(q, -2.9462864110370073, 0);
  sqcRZGate(q, 1.7402823905304947, 0);
  sqcRYGate(q, 1.5707077792434323, 1);
  sqcRZGate(q, -0.09206083043702955, 1);
  sqcRYGate(q, -3.1411723153766906, 2);
  sqcRZGate(q, 2.4609743344678616, 2);
  sqcRYGate(q, 0.0017443295606032192, 3);
  sqcRZGate(q, 0.8761359334347292, 3);
  sqcRYGate(q, 2.593193116790528, 4);
  sqcRZGate(q, -2.6679630586120666, 4);
  sqcRYGate(q, -1.5712263354490386, 5);
  sqcRZGate(q, 0.9004429993418678, 5);
  sqcRYGate(q, 0.0003432886305523297, 6);
  sqcRZGate(q, -3.025464910696781, 6);
  sqcRYGate(q, 1.3723718795126985, 7);
  sqcRZGate(q, -2.930447483895808, 7);
  sqcRYGate(q, -1.5713224954989977, 8);
  sqcRZGate(q, 2.3972027179075464, 8);
  sqcRYGate(q, 2.5663733338156587, 9);
  sqcRZGate(q, -1.186468745163558, 9);
  sqcRYGate(q, -0.109715097345207, 10);
  sqcRZGate(q, -2.685038691544416, 10);
  sqcRYGate(q, -3.1408230058108932, 11);
  sqcRZGate(q, 3.06188949065267, 11);
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
  sqcRYGate(q, -2.4345231437870503, 0);
  sqcRZGate(q, -3.141425402705052, 0);
  sqcRYGate(q, 2.9892672224868435, 1);
  sqcRZGate(q, 2.9739004514644605, 1);
  sqcRYGate(q, -1.7853043484025397, 2);
  sqcRZGate(q, -0.812490066692538, 2);
  sqcRYGate(q, 1.5707826549751092, 3);
  sqcRZGate(q, 3.137899207539257, 3);
  sqcRYGate(q, 0.8512472645783156, 4);
  sqcRZGate(q, -1.98312604188803, 4);
  sqcRYGate(q, -3.1415767587248915, 5);
  sqcRZGate(q, -1.3401629525773344, 5);
  sqcRYGate(q, -3.1408268599276465, 6);
  sqcRZGate(q, 2.474833595788248, 6);
  sqcRYGate(q, 3.1415772206978225, 7);
  sqcRZGate(q, -1.643288992942039, 7);
  sqcRYGate(q, -3.1401243193371977, 8);
  sqcRZGate(q, 2.409833952970985, 8);
  sqcRYGate(q, -3.1413064527815764, 9);
  sqcRZGate(q, 2.229404129374924, 9);
  sqcRYGate(q, -1.5419342621127567, 10);
  sqcRZGate(q, 2.5723978703828125, 10);
  sqcRYGate(q, -0.03963765313783586, 11);
  sqcRZGate(q, 2.778189233536813, 11);
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
  sqcRYGate(q, -3.138501737685152, 0);
  sqcRZGate(q, -1.7230294473555796, 0);
  sqcRYGate(q, 1.6222356148756472, 1);
  sqcRZGate(q, -0.02361032814363906, 1);
  sqcRYGate(q, -3.141281802558372, 2);
  sqcRZGate(q, 2.2513343005282387, 2);
  sqcRYGate(q, -3.131662797551744, 3);
  sqcRZGate(q, -1.0413060429110534, 3);
  sqcRYGate(q, -1.362969292299189, 4);
  sqcRZGate(q, -3.0127395520732425, 4);
  sqcRYGate(q, 2.624723249151141, 5);
  sqcRZGate(q, -1.7835048710585606, 5);
  sqcRYGate(q, -3.896739050334294e-05, 6);
  sqcRZGate(q, -1.0906921078838385, 6);
  sqcRYGate(q, 2.458727856945994, 7);
  sqcRZGate(q, -2.8618144628309725, 7);
  sqcRYGate(q, 0.023027788208560628, 8);
  sqcRZGate(q, -0.9007583444311624, 8);
  sqcRYGate(q, -2.1365958401229275, 9);
  sqcRZGate(q, 1.71803360417578, 9);
  sqcRYGate(q, -0.42000256993814133, 10);
  sqcRZGate(q, -2.3656676327947634, 10);
  sqcRYGate(q, 3.140991434435034, 11);
  sqcRZGate(q, 2.0426494753512285, 11);
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
  sqcRYGate(q, -0.794729035082038, 0);
  sqcRZGate(q, 0.5142174658723517, 0);
  sqcRYGate(q, 0.1791422815278522, 1);
  sqcRZGate(q, -1.461439605522127, 1);
  sqcRYGate(q, 3.139427805774783, 2);
  sqcRZGate(q, -0.36967971347311346, 2);
  sqcRYGate(q, -2.7708900912893606, 3);
  sqcRZGate(q, 0.10998171988330907, 3);
  sqcRYGate(q, 2.91919778998755, 4);
  sqcRZGate(q, -0.013909547457590259, 4);
  sqcRYGate(q, -3.4072813388519307e-06, 5);
  sqcRZGate(q, -0.0758420270734871, 5);
  sqcRYGate(q, 1.5741662106322645, 6);
  sqcRZGate(q, -0.8968454331070159, 6);
  sqcRYGate(q, 3.1411701143657482, 7);
  sqcRZGate(q, -0.9244042963733633, 7);
  sqcRYGate(q, -3.1410065646290204, 8);
  sqcRZGate(q, -1.9722327476529553, 8);
  sqcRYGate(q, -1.5720082912020255, 9);
  sqcRZGate(q, 2.921351487398543, 9);
  sqcRYGate(q, 1.2354466220302065, 10);
  sqcRZGate(q, 0.7268872783678166, 10);
  sqcRYGate(q, 0.4779314571349771, 11);
  sqcRZGate(q, -2.9738707397242012, 11);
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
  sqcRYGate(q, 0.011272098595605842, 0);
  sqcRZGate(q, 1.0463665941922817, 0);
  sqcRYGate(q, 3.1413308439402834, 1);
  sqcRZGate(q, -0.22853610005673397, 1);
  sqcRYGate(q, 0.0007312711515687907, 2);
  sqcRZGate(q, 0.3273706698038348, 2);
  sqcRYGate(q, 0.008403345351088271, 3);
  sqcRZGate(q, 3.0326785884825305, 3);
  sqcRYGate(q, -1.5704252630690416, 4);
  sqcRZGate(q, 3.0391593507872314, 4);
  sqcRYGate(q, 9.698878857148171e-05, 5);
  sqcRZGate(q, -1.6611585295184268, 5);
  sqcRYGate(q, -3.1415720077352405, 6);
  sqcRZGate(q, -0.8970353328826208, 6);
  sqcRYGate(q, -0.04921258946616225, 7);
  sqcRZGate(q, -2.1816564075688234, 7);
  sqcRYGate(q, 1.88898775164752e-05, 8);
  sqcRZGate(q, -2.2239802578509185, 8);
  sqcRYGate(q, -3.13198228974229, 9);
  sqcRZGate(q, 1.351333021785517, 9);
  sqcRYGate(q, -0.08187921449240587, 10);
  sqcRZGate(q, -3.1006061143864727, 10);
  sqcRYGate(q, -0.00127624546908636, 11);
  sqcRZGate(q, -0.5236379211328702, 11);
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
  sqcRYGate(q, 1.5674282561423964, 0);
  sqcRZGate(q, 0.6934119580807466, 0);
  sqcRYGate(q, -1.6701454308135295, 1);
  sqcRZGate(q, -0.3670067209416539, 1);
  sqcRYGate(q, -3.0953098039467735, 2);
  sqcRZGate(q, -0.256969306152306, 2);
  sqcRYGate(q, -0.3720374600612322, 3);
  sqcRZGate(q, -1.7563857084071748, 3);
  sqcRYGate(q, 2.6434324493960824, 4);
  sqcRZGate(q, 0.14491445850907603, 4);
  sqcRYGate(q, 2.5402818452313628e-05, 5);
  sqcRZGate(q, 2.996384006085215, 5);
  sqcRYGate(q, 1.7845566011006537, 6);
  sqcRZGate(q, -0.4331547665231165, 6);
  sqcRYGate(q, 3.1411696917775, 7);
  sqcRZGate(q, -2.368101546306329, 7);
  sqcRYGate(q, 0.0031838005767795582, 8);
  sqcRZGate(q, -1.9924436078798224, 8);
  sqcRYGate(q, 0.2318036639816894, 9);
  sqcRZGate(q, 1.1845130578158398, 9);
  sqcRYGate(q, 0.7842133919578698, 10);
  sqcRZGate(q, -1.8981915365129174, 10);
  sqcRYGate(q, -0.5266809769791484, 11);
  sqcRZGate(q, -0.14727604653706297, 11);
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
  sqcRYGate(q, 1.507238684527553, 0);
  sqcRZGate(q, 1.4076221110087868, 0);
  sqcRYGate(q, 1.3656947296910955, 1);
  sqcRZGate(q, -2.3622244755028174, 1);
  sqcRYGate(q, -0.05707073109629353, 2);
  sqcRZGate(q, 1.8088308857807345, 2);
  sqcRYGate(q, 0.04956999255545291, 3);
  sqcRZGate(q, 2.4971181444458592, 3);
  sqcRYGate(q, 0.3364676219739273, 4);
  sqcRZGate(q, 3.070161816900389, 4);
  sqcRYGate(q, -2.8221233217624864, 5);
  sqcRZGate(q, -2.857431415249493, 5);
  sqcRYGate(q, -3.1414863643344852, 6);
  sqcRZGate(q, 0.41096111159744103, 6);
  sqcRYGate(q, -0.0024118536220394957, 7);
  sqcRZGate(q, -2.2935795241706036, 7);
  sqcRYGate(q, -2.911854952118727, 8);
  sqcRZGate(q, 2.088804292163263, 8);
  sqcRYGate(q, -0.04106410605108678, 9);
  sqcRZGate(q, -1.1894127002304093, 9);
  sqcRYGate(q, -0.3428306863386574, 10);
  sqcRZGate(q, -1.700219367018831, 10);
  sqcRYGate(q, -3.1358847399099568, 11);
  sqcRZGate(q, 1.0571008379520226, 11);
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
  sqcRYGate(q, 0.36643962288815235, 0);
  sqcRZGate(q, 1.2654328665805137, 0);
  sqcRYGate(q, -1.8838433287490695, 1);
  sqcRZGate(q, 0.021645646287837828, 1);
  sqcRYGate(q, -5.194993320856156e-06, 2);
  sqcRZGate(q, 1.4967832598568371, 2);
  sqcRYGate(q, -3.1404270559462564, 3);
  sqcRZGate(q, -0.9414288002073558, 3);
  sqcRYGate(q, -0.4308088373197032, 4);
  sqcRZGate(q, -2.9815956248285285, 4);
  sqcRYGate(q, 3.1415751962628615, 5);
  sqcRZGate(q, 1.0987965519355676, 5);
  sqcRYGate(q, 3.1402650476806224, 6);
  sqcRZGate(q, -2.4199831257500244, 6);
  sqcRYGate(q, 3.141573470772871, 7);
  sqcRZGate(q, 2.232528010423369, 7);
  sqcRYGate(q, 3.1398729832479466, 8);
  sqcRZGate(q, -2.6266997757708928, 8);
  sqcRYGate(q, 2.9031003627783516, 9);
  sqcRZGate(q, -2.2334916485545877, 9);
  sqcRYGate(q, 3.1293105161296015, 10);
  sqcRZGate(q, -1.468008027578537, 10);
  sqcRYGate(q, -2.8898077414588403, 11);
  sqcRZGate(q, 2.048547252041864, 11);
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
  sqcRYGate(q, 0.20933475754283212, 0);
  sqcRZGate(q, 0.17439206182088532, 0);
  sqcRYGate(q, 3.083673936325647, 1);
  sqcRZGate(q, -0.44279474305984223, 1);
  sqcRYGate(q, -0.47336322125122, 2);
  sqcRZGate(q, -2.6003421757917304, 2);
  sqcRYGate(q, 0.17341806931497292, 3);
  sqcRZGate(q, -2.377014714579098, 3);
  sqcRYGate(q, -0.34156242757576916, 4);
  sqcRZGate(q, -1.8938172835244613, 4);
  sqcRYGate(q, 1.9297587786129133, 5);
  sqcRZGate(q, -1.8392002230996545, 5);
  sqcRYGate(q, -3.1410769949230537, 6);
  sqcRZGate(q, 2.146196747256624, 6);
  sqcRYGate(q, 1.5713189118106181, 7);
  sqcRZGate(q, 2.2941268364990286, 7);
  sqcRYGate(q, 1.5744321725810784, 8);
  sqcRZGate(q, -1.347507674537539, 8);
  sqcRYGate(q, 3.1326234798966115, 9);
  sqcRZGate(q, 2.375842088576298, 9);
  sqcRYGate(q, -1.4769222734599645, 10);
  sqcRZGate(q, 0.7152685502052316, 10);
  sqcRYGate(q, 0.023983802172450552, 11);
  sqcRZGate(q, -0.1376832347207646, 11);
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
  sqcRYGate(q, 3.1358899085500496, 0);
  sqcRZGate(q, -2.491875606652724, 0);
  sqcRYGate(q, 0.4102473069454122, 1);
  sqcRZGate(q, 0.3164052977429624, 1);
  sqcRYGate(q, 0.0002665219148809683, 2);
  sqcRZGate(q, 0.37948486143332705, 2);
  sqcRYGate(q, 3.1412145859574903, 3);
  sqcRZGate(q, 1.214793913307033, 3);
  sqcRYGate(q, 1.592976852248324, 4);
  sqcRZGate(q, 1.2068906170910363, 4);
  sqcRYGate(q, 3.096758327225148, 5);
  sqcRZGate(q, -0.576529543032967, 5);
  sqcRYGate(q, -0.8459782246496266, 6);
  sqcRZGate(q, -0.185533082965506, 6);
  sqcRYGate(q, 3.141592283472171, 7);
  sqcRZGate(q, -1.0227898187617201, 7);
  sqcRYGate(q, 1.570126548306124, 8);
  sqcRZGate(q, -2.1462774445609796, 8);
  sqcRYGate(q, -2.4253044602731584, 9);
  sqcRZGate(q, -1.9337896313351894, 9);
  sqcRYGate(q, -0.0058021513571799195, 10);
  sqcRZGate(q, 2.129192869299951, 10);
  sqcRYGate(q, -1.9585988939528585, 11);
  sqcRZGate(q, -1.500161923914594, 11);
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
  sqcRYGate(q, -0.1940565137760855, 0);
  sqcRZGate(q, -1.6191201544390053, 0);
  sqcRYGate(q, 2.767448907945016, 1);
  sqcRZGate(q, -2.042295006689841, 1);
  sqcRYGate(q, 1.581444058725494, 2);
  sqcRZGate(q, 2.7464091002496573, 2);
  sqcRYGate(q, -0.18856319470341662, 3);
  sqcRZGate(q, 2.909943341094414, 3);
  sqcRYGate(q, -1.494510932095146e-05, 4);
  sqcRZGate(q, -1.2841166276112088, 4);
  sqcRYGate(q, 1.561604182689365, 5);
  sqcRZGate(q, 2.3766323915932244, 5);
  sqcRYGate(q, 0.0008556601594653657, 6);
  sqcRZGate(q, -0.4513514347738674, 6);
  sqcRYGate(q, 2.7487150015430884e-05, 7);
  sqcRZGate(q, 2.4145253789597976, 7);
  sqcRYGate(q, -3.1410384260077726, 8);
  sqcRZGate(q, 0.6815598240974694, 8);
  sqcRYGate(q, 3.141130003327391, 9);
  sqcRZGate(q, 1.3118533342569911, 9);
  sqcRYGate(q, 1.8543955614846848, 10);
  sqcRZGate(q, -0.1502009087759431, 10);
  sqcRYGate(q, 3.074223607052526, 11);
  sqcRZGate(q, -2.605538052442852, 11);
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
  sqcRYGate(q, 3.141573389225043, 0);
  sqcRZGate(q, -2.3889650058520564, 0);
  sqcRYGate(q, -2.8869642718877757, 1);
  sqcRZGate(q, 0.987649048578802, 1);
  sqcRYGate(q, -3.1412215388404126, 2);
  sqcRZGate(q, 0.34234902651625343, 2);
  sqcRYGate(q, -0.00012801498186844738, 3);
  sqcRZGate(q, 1.0345073248972, 3);
  sqcRYGate(q, -1.568733593948633, 4);
  sqcRZGate(q, 0.8310344254111683, 4);
  sqcRYGate(q, 0.002335412138550925, 5);
  sqcRZGate(q, -2.407042221323081, 5);
  sqcRYGate(q, -0.24847801244053383, 6);
  sqcRZGate(q, -2.521201374315789, 6);
  sqcRYGate(q, 3.141589563055787, 7);
  sqcRZGate(q, 2.845221491985828, 7);
  sqcRYGate(q, -0.0027139981536797786, 8);
  sqcRZGate(q, 1.9937424502773746, 8);
  sqcRYGate(q, -0.7347226265140827, 9);
  sqcRZGate(q, 0.35119156056880674, 9);
  sqcRYGate(q, 0.0021397177514739245, 10);
  sqcRZGate(q, 1.558411896084528, 10);
  sqcRYGate(q, 0.006259082461308924, 11);
  sqcRZGate(q, 1.899576850134311, 11);
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
  sqcRYGate(q, -1.0991439808483876, 0);
  sqcRZGate(q, 1.7502944704302774, 0);
  sqcRYGate(q, -1.5067024282590866, 1);
  sqcRZGate(q, -2.9889731434131477, 1);
  sqcRYGate(q, -0.8099932938736041, 2);
  sqcRZGate(q, -2.813804911188007, 2);
  sqcRYGate(q, -2.763785836753795, 3);
  sqcRZGate(q, 0.6321172477158985, 3);
  sqcRYGate(q, -3.1413802222135048, 4);
  sqcRZGate(q, 0.5318065337929018, 4);
  sqcRYGate(q, 0.7356034043739479, 5);
  sqcRZGate(q, 3.1403061415974367, 5);
  sqcRYGate(q, -3.141553052700864, 6);
  sqcRZGate(q, -0.1932290772184262, 6);
  sqcRYGate(q, 0.0002619424800449622, 7);
  sqcRZGate(q, -0.5483669722031879, 7);
  sqcRYGate(q, -3.141315390552922, 8);
  sqcRZGate(q, -1.5119396871267474, 8);
  sqcRYGate(q, 0.007801225562566572, 9);
  sqcRZGate(q, -0.22978805776479785, 9);
  sqcRYGate(q, 2.0544342866792697, 10);
  sqcRZGate(q, -0.3044567751458394, 10);
  sqcRYGate(q, -2.7560996818751144, 11);
  sqcRZGate(q, -2.2797710159032203, 11);
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
  sqcRYGate(q, -5.004963424415365e-05, 0);
  sqcRZGate(q, -2.383692499630526, 0);
  sqcRYGate(q, 0.6693982083402082, 1);
  sqcRZGate(q, 1.7190833628103404, 1);
  sqcRYGate(q, -3.1415628158444533, 2);
  sqcRZGate(q, 2.4685461418458545, 2);
  sqcRYGate(q, -0.00028427950758538997, 3);
  sqcRZGate(q, 0.4959593907216819, 3);
  sqcRYGate(q, -3.1280846791072325, 4);
  sqcRZGate(q, 2.8392928234437993, 4);
  sqcRYGate(q, -0.0418232665115812, 5);
  sqcRZGate(q, 1.5895732031359948, 5);
  sqcRYGate(q, -2.4825589685616163, 6);
  sqcRZGate(q, 2.1646178423346862, 6);
  sqcRYGate(q, -4.517832135324752e-06, 7);
  sqcRZGate(q, 0.1760627751873567, 7);
  sqcRYGate(q, -3.114270295044241, 8);
  sqcRZGate(q, -1.9055347198046344, 8);
  sqcRYGate(q, 3.010462784229639, 9);
  sqcRZGate(q, -2.418535103878922, 9);
  sqcRYGate(q, -0.0031304797278959738, 10);
  sqcRZGate(q, 1.265953396404468, 10);
  sqcRYGate(q, -1.5203683010978146, 11);
  sqcRZGate(q, 2.4371785816819815, 11);
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
  sqcRYGate(q, -0.2577066224076636, 0);
  sqcRZGate(q, 1.196198776765951, 0);
  sqcRYGate(q, -2.440403203943797, 1);
  sqcRZGate(q, -2.1220663492793412, 1);
  sqcRYGate(q, 1.0628241033344228, 2);
  sqcRZGate(q, -2.4748406661544995, 2);
  sqcRYGate(q, -1.4506664216010576, 3);
  sqcRZGate(q, -0.30557355416279286, 3);
  sqcRYGate(q, -0.010873092780652401, 4);
  sqcRZGate(q, 3.139528393823636, 4);
  sqcRYGate(q, -1.5618975614170072, 5);
  sqcRZGate(q, -2.2930992173956053, 5);
  sqcRYGate(q, 3.141433965601007, 6);
  sqcRZGate(q, 0.06583453142097914, 6);
  sqcRYGate(q, -2.918276607026168, 7);
  sqcRZGate(q, 0.7082012659475998, 7);
  sqcRYGate(q, 2.6517480318598636, 8);
  sqcRZGate(q, -2.805918339457227, 8);
  sqcRYGate(q, -1.2651606710237377, 9);
  sqcRZGate(q, 0.4864671924533497, 9);
  sqcRYGate(q, -1.6417831152560747, 10);
  sqcRZGate(q, 1.205170088823113, 10);
  sqcRYGate(q, 0.6011277940881016, 11);
  sqcRZGate(q, -0.14377479708452345, 11);
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
  sqcRYGate(q, 3.1241344616198576, 0);
  sqcRZGate(q, 0.7110241539139297, 0);
  sqcRYGate(q, -0.02856782598109189, 1);
  sqcRZGate(q, -2.0524403258296564, 1);
  sqcRYGate(q, -3.141443979800518, 2);
  sqcRZGate(q, -1.6200346956888494, 2);
  sqcRYGate(q, -3.141340382196349, 3);
  sqcRZGate(q, 0.574858822942205, 3);
  sqcRYGate(q, 1.5656771096019453, 4);
  sqcRZGate(q, 3.005774603373609, 4);
  sqcRYGate(q, -3.1414471752603585, 5);
  sqcRZGate(q, 1.6748280376828912, 5);
  sqcRYGate(q, -3.1413602968505656, 6);
  sqcRZGate(q, 1.965588882321343, 6);
  sqcRYGate(q, -3.1415875350048226, 7);
  sqcRZGate(q, -2.412523134431089, 7);
  sqcRYGate(q, 3.1406383167781566, 8);
  sqcRZGate(q, 1.646823270419027, 8);
  sqcRYGate(q, -3.140170637978313, 9);
  sqcRZGate(q, -2.2027146036473813, 9);
  sqcRYGate(q, -2.43987615111569, 10);
  sqcRZGate(q, 0.03981325246471812, 10);
  sqcRYGate(q, -1.3430718369124044, 11);
  sqcRZGate(q, 0.5836223912282443, 11);
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
  sqcRYGate(q, -0.8619884112736649, 0);
  sqcRZGate(q, -1.509844656166071, 0);
  sqcRYGate(q, 0.2771008712220153, 1);
  sqcRZGate(q, 2.8675352555254197, 1);
  sqcRYGate(q, -1.5948143686972218, 2);
  sqcRZGate(q, 0.6227744990916939, 2);
  sqcRYGate(q, 0.9249459906932533, 3);
  sqcRZGate(q, 2.1715243519204135, 3);
  sqcRYGate(q, -0.16532314602572384, 4);
  sqcRZGate(q, 2.192975083395068, 4);
  sqcRYGate(q, -0.3655585220632485, 5);
  sqcRZGate(q, -2.966644278819748, 5);
  sqcRYGate(q, 0.7254969563891681, 6);
  sqcRZGate(q, -1.1111512455585473, 6);
  sqcRYGate(q, -2.7704234423832035, 7);
  sqcRZGate(q, 1.5695460797258547, 7);
  sqcRYGate(q, -0.3454417673446617, 8);
  sqcRZGate(q, -0.36479258092613076, 8);
  sqcRYGate(q, -3.0809307382964786, 9);
  sqcRZGate(q, 1.0693533001362168, 9);
  sqcRYGate(q, 0.7916319409071455, 10);
  sqcRZGate(q, 3.119717533176397, 10);
  sqcRYGate(q, 0.0015562397007571913, 11);
  sqcRZGate(q, 0.6531967600709828, 11);
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
  sqcRYGate(q, -2.6427572901457417, 0);
  sqcRZGate(q, -0.0009158148358382411, 0);
  sqcRYGate(q, -0.9023509819993416, 1);
  sqcRZGate(q, 0.13283727396545061, 1);
  sqcRYGate(q, -3.229814230892956e-06, 2);
  sqcRZGate(q, 0.879081226622747, 2);
  sqcRYGate(q, 3.141526186352472, 3);
  sqcRZGate(q, -1.210400934619559, 3);
  sqcRYGate(q, 4.3491096951825766e-05, 4);
  sqcRZGate(q, -1.1036290103677835, 4);
  sqcRYGate(q, -3.1415567301913385, 5);
  sqcRZGate(q, -2.1547257136003317, 5);
  sqcRYGate(q, 6.732741525095065e-05, 6);
  sqcRZGate(q, 1.4780252216233596, 6);
  sqcRYGate(q, 3.1415911162125263, 7);
  sqcRZGate(q, 2.653007715879358, 7);
  sqcRYGate(q, 3.1413791263862727, 8);
  sqcRZGate(q, 2.0919825039695814, 8);
  sqcRYGate(q, 3.1404349376647587, 9);
  sqcRZGate(q, 0.968952128353286, 9);
  sqcRYGate(q, -2.514139591947218, 10);
  sqcRZGate(q, 1.7148414842073745, 10);
  sqcRYGate(q, -1.1555751263843304, 11);
  sqcRZGate(q, -2.0912451129660825, 11);
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
  sqcRYGate(q, 1.3576100654886452, 0);
  sqcRZGate(q, -2.034371722580323, 0);
  sqcRYGate(q, 1.4803527785738957, 1);
  sqcRZGate(q, 2.6065246780595097, 1);
  sqcRYGate(q, -0.9643004045928212, 2);
  sqcRZGate(q, 1.3521633463577067, 2);
  sqcRYGate(q, -1.7273753618986687, 3);
  sqcRZGate(q, 2.0010876424833697, 3);
  sqcRYGate(q, 0.9281744869799818, 4);
  sqcRZGate(q, -0.39300457635192737, 4);
  sqcRYGate(q, 0.26657425797496437, 5);
  sqcRZGate(q, -2.658606778211927, 5);
  sqcRYGate(q, 1.5991066861386019, 6);
  sqcRZGate(q, -1.5574246833911225, 6);
  sqcRYGate(q, 0.5777136463675644, 7);
  sqcRZGate(q, -0.8965711816040501, 7);
  sqcRYGate(q, 0.5789302346058484, 8);
  sqcRZGate(q, 3.06028072721786, 8);
  sqcRYGate(q, 1.8826543834639056, 9);
  sqcRZGate(q, 0.9521423999110956, 9);
  sqcRYGate(q, 1.7934314706253476, 10);
  sqcRZGate(q, 2.0612342079332024, 10);
  sqcRYGate(q, -0.2899022262890378, 11);
  sqcRZGate(q, -1.8282529712710804, 11);

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
