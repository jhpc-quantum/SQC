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

  sqcRYGate(q, 2.9974145214474657, 0);
  sqcRYGate(q, 2.7101385918885117, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9078626831174326, 0);
  sqcRYGate(q, 1.2405986820265953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7634530468687333, 0);
  sqcRYGate(q, 2.760550347398155, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5844148655575777, 0);
  sqcRYGate(q, -2.3912852225297168, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.26156618348504423, 0);
  sqcRYGate(q, -1.3810228977091166, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9667013479704627, 0);
  sqcRYGate(q, -0.7363105728854977, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0637575935678607, 1);
  sqcRYGate(q, 2.3843954190076575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2073075082970357, 1);
  sqcRYGate(q, 3.083389149355448, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2889436588644685, 1);
  sqcRYGate(q, -0.5600877532446793, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.287183905996282, 1);
  sqcRYGate(q, 0.8372493404667974, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.108132244988472, 2);
  sqcRYGate(q, 1.9065691442580537, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8334856660680068, 2);
  sqcRYGate(q, 0.11228373772665125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.980629034671172, 0);
  sqcRYGate(q, 3.0099674829128706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6804922309017045, 0);
  sqcRYGate(q, 2.2789897677749584, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.12968671197105214, 0);
  sqcRYGate(q, 1.3638051039137902, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0946537960080676, 0);
  sqcRYGate(q, 0.13804603393488968, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3052833237348684, 0);
  sqcRYGate(q, 2.0282723449775526, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.793636891205571, 0);
  sqcRYGate(q, -2.4817805707815506, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0161020095313202, 1);
  sqcRYGate(q, 1.672278544240502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14500187309998755, 1);
  sqcRYGate(q, 2.241095563307192, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9705227076633447, 1);
  sqcRYGate(q, -2.9161344190324843, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0681617217258936, 1);
  sqcRYGate(q, -2.430848150809732, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.02895417314839222, 2);
  sqcRYGate(q, 1.9492009838897248, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.36630199878222847, 2);
  sqcRYGate(q, -2.7495740907586343, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3511557067851123, 0);
  sqcRYGate(q, 0.6405962243152342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0673616855608574, 0);
  sqcRYGate(q, 0.12415125042620367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.054328651057378, 0);
  sqcRYGate(q, -0.2303865113554844, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.39329638205996437, 0);
  sqcRYGate(q, -2.0557910744599948, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0353535233834568, 0);
  sqcRYGate(q, 1.9340986357933918, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9836755023375388, 0);
  sqcRYGate(q, -0.9597121709045009, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8480553627950355, 1);
  sqcRYGate(q, -1.8202814053602419, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7260009323021386, 1);
  sqcRYGate(q, 1.3595444434484794, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6752768545947267, 1);
  sqcRYGate(q, 1.7061143297337749, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.06661974584743201, 1);
  sqcRYGate(q, -1.255940393019742, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.148978368847282, 2);
  sqcRYGate(q, -1.858042883167308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.594603338228966, 2);
  sqcRYGate(q, -0.3884482470763677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2059239579156076, 0);
  sqcRYGate(q, 2.478976260320302, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3545985500832898, 0);
  sqcRYGate(q, -1.681338367654031, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7842450512452475, 0);
  sqcRYGate(q, 1.058024302170334, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6650816150449483, 0);
  sqcRYGate(q, -3.0348825233273384, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.041825251834725, 0);
  sqcRYGate(q, 2.2909595984051965, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.050217165182042, 0);
  sqcRYGate(q, 2.1383064893416783, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.906062296534602, 1);
  sqcRYGate(q, 1.605945360980372, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8985894432117454, 1);
  sqcRYGate(q, -0.07902739732511957, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4014188607744065, 1);
  sqcRYGate(q, -2.710225830677683, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.419155340598836, 1);
  sqcRYGate(q, -0.4936491984169621, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5136065369479601, 2);
  sqcRYGate(q, -2.3833039014437594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1853458563037673, 2);
  sqcRYGate(q, -1.2689747053134024, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0141755490159938, 0);
  sqcRYGate(q, 2.379711455295159, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7614561645520332, 0);
  sqcRYGate(q, 2.4492124141858955, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6117589662436222, 0);
  sqcRYGate(q, 1.8496841560672068, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2950731424560282, 0);
  sqcRYGate(q, 0.3510146250726427, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2987724282114801, 0);
  sqcRYGate(q, -2.0443929363598303, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6813839401520516, 0);
  sqcRYGate(q, -1.8138650134906773, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.16519442773682957, 1);
  sqcRYGate(q, 2.1482466987928266, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5919927758311427, 1);
  sqcRYGate(q, 2.0603975872853395, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2962197847535393, 1);
  sqcRYGate(q, 0.37947719141497593, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7635969142406803, 1);
  sqcRYGate(q, 1.608989814599532, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2735338226103234, 2);
  sqcRYGate(q, -2.277410804007335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.11621746277226, 2);
  sqcRYGate(q, -0.22903401566052026, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.185782641106241, 0);
  sqcRYGate(q, 3.060766454849195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2465838767404325, 0);
  sqcRYGate(q, 1.4048846760518963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3783814099152618, 0);
  sqcRYGate(q, -1.3741791511935892, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.054682443660993, 0);
  sqcRYGate(q, 2.7916082566281135, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1925349142749728, 0);
  sqcRYGate(q, 1.9800823143718276, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4766161229642004, 0);
  sqcRYGate(q, -1.0562745862055187, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.021063266112613, 1);
  sqcRYGate(q, -2.0806268022570773, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.36919344562132483, 1);
  sqcRYGate(q, 1.8757877545991568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5801593260588565, 1);
  sqcRYGate(q, -0.5206245316498422, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.872006460454803, 1);
  sqcRYGate(q, 2.7524678959618285, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2554725746513545, 2);
  sqcRYGate(q, -1.4219128698365475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.264425600511613, 2);
  sqcRYGate(q, -0.5299199298778543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5997660359430821, 0);
  sqcRYGate(q, 0.47371532315214804, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3374378049798112, 0);
  sqcRYGate(q, 2.367613033643213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.814020691477121, 0);
  sqcRYGate(q, 2.6204610987583186, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.071309676813221, 0);
  sqcRYGate(q, 2.8132519544708323, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2685520360438298, 0);
  sqcRYGate(q, -0.26165724845602334, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2880978303007096, 0);
  sqcRYGate(q, -2.3172895986465623, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2633536100976972, 1);
  sqcRYGate(q, -2.781664747947138, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2820403124933204, 1);
  sqcRYGate(q, -0.32149219771336135, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7440891374341332, 1);
  sqcRYGate(q, -0.4195160529311064, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1484751114833331, 1);
  sqcRYGate(q, -0.5036674267127362, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9616192969906842, 2);
  sqcRYGate(q, -2.224676276496174, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.840887645824094, 2);
  sqcRYGate(q, -0.775503462526098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3549229004387149, 0);
  sqcRYGate(q, -1.818954516352874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3400665747963565, 0);
  sqcRYGate(q, 2.9342690493075287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.99549815672956, 0);
  sqcRYGate(q, -2.7760716640974654, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2828211026020782, 0);
  sqcRYGate(q, 1.6962972715430409, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6580958409549396, 0);
  sqcRYGate(q, -2.2933274577899336, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2314811056904051, 0);
  sqcRYGate(q, 0.060228850493996, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4551170258756982, 1);
  sqcRYGate(q, -0.9717990525394694, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.952796903091205, 1);
  sqcRYGate(q, 1.2252522718638215, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.156308286624391, 1);
  sqcRYGate(q, 0.3543479382221495, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1722008597373225, 1);
  sqcRYGate(q, -0.5293800678919833, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.091489488015635, 2);
  sqcRYGate(q, 1.9329305025899766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.17871571898312677, 2);
  sqcRYGate(q, -0.1194818464044928, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5956404979702217, 0);
  sqcRYGate(q, 2.878100045756608, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.456892399958676, 0);
  sqcRYGate(q, -1.5261163045119266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.243802595182094, 0);
  sqcRYGate(q, -0.8353642987076727, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5150748511041905, 0);
  sqcRYGate(q, -1.7709698490806867, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4401837157290833, 0);
  sqcRYGate(q, -0.42198768730620456, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.18583059146779402, 0);
  sqcRYGate(q, -2.069515178078582, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5382605150862199, 1);
  sqcRYGate(q, -1.8058964257228933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5402959731785346, 1);
  sqcRYGate(q, -2.307838418237902, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5024784193103494, 1);
  sqcRYGate(q, -0.4565425754108411, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3976653189227042, 1);
  sqcRYGate(q, 0.12604693562643726, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5224460669451836, 2);
  sqcRYGate(q, 0.5538775132175426, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9426448023625165, 2);
  sqcRYGate(q, 1.6047818315854614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8512846368538414, 0);
  sqcRYGate(q, 1.8124376902990953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.093696679414051, 0);
  sqcRYGate(q, 0.5768791121051579, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.29227094550684524, 0);
  sqcRYGate(q, 2.224509619670232, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9321901836029638, 0);
  sqcRYGate(q, 1.1264835327622797, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.42048891071633676, 0);
  sqcRYGate(q, -0.8872754027791161, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9512330476497997, 0);
  sqcRYGate(q, -2.615388114215416, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1081063571965357, 1);
  sqcRYGate(q, -2.0124836808492126, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.514651694501581, 1);
  sqcRYGate(q, 0.7196370000566038, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.747296289114333, 1);
  sqcRYGate(q, 3.107796670552852, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.25207268678898564, 1);
  sqcRYGate(q, 1.2683236716111723, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1322068272873955, 2);
  sqcRYGate(q, -0.7772200460511758, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4462635820226035, 2);
  sqcRYGate(q, 1.509115608020316, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8163503039499691, 0);
  sqcRYGate(q, -1.195105207200571, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.958347557586484, 0);
  sqcRYGate(q, 0.930133429896239, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9730035745771595, 0);
  sqcRYGate(q, 0.8524305003860755, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.25146598062684333, 0);
  sqcRYGate(q, -2.5045761358254466, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.579685425432844, 0);
  sqcRYGate(q, -1.0105341133517836, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.06495187776752331, 0);
  sqcRYGate(q, 1.4604055120342283, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.12089166289650102, 1);
  sqcRYGate(q, -0.7316440172207592, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7898717845090264, 1);
  sqcRYGate(q, -0.8952458862563534, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4494218309100315, 1);
  sqcRYGate(q, -1.4094499582465083, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1981724281899529, 1);
  sqcRYGate(q, -0.9211689283719402, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.24242067544178436, 2);
  sqcRYGate(q, -1.2849013471377386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5189087348655157, 2);
  sqcRYGate(q, -2.4417807481793994, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.692398497702434, 0);
  sqcRYGate(q, -2.187861079012581, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0110388786994027, 0);
  sqcRYGate(q, 0.39849437354805356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.075628471456207, 0);
  sqcRYGate(q, 1.133337437852398, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.22004810880803805, 0);
  sqcRYGate(q, 1.7092509936343108, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8230340281235673, 0);
  sqcRYGate(q, -1.836573007860378, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.250990640939214, 0);
  sqcRYGate(q, -2.351999911157193, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.675668208008294, 1);
  sqcRYGate(q, -1.816925556389642, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8538764027860317, 1);
  sqcRYGate(q, -2.7368317610584163, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6858833560292554, 1);
  sqcRYGate(q, -2.3560104806113564, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.107419064280891, 1);
  sqcRYGate(q, 2.4653662369333267, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6685666276186729, 2);
  sqcRYGate(q, 0.26583029661137303, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.014629377598464, 2);
  sqcRYGate(q, -0.7234626408219735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.41731305520244, 0);
  sqcRYGate(q, -1.010222858166817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6041200087579595, 0);
  sqcRYGate(q, -0.31811963317417113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9842944442815238, 0);
  sqcRYGate(q, 2.7083710630209503, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4420656200532203, 0);
  sqcRYGate(q, 0.7378231673088695, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4869855875168607, 0);
  sqcRYGate(q, 2.6664530133149342, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.244482551508587, 0);
  sqcRYGate(q, -1.8185290929107898, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2556930209264534, 1);
  sqcRYGate(q, 0.8386721661419747, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9318529532340298, 1);
  sqcRYGate(q, -0.04804930810924102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9306232506155059, 1);
  sqcRYGate(q, -1.866957528964482, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8072504796511293, 1);
  sqcRYGate(q, 0.8251431928916002, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4703108649937344, 2);
  sqcRYGate(q, 2.1751141055213377, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7892096207023, 2);
  sqcRYGate(q, 0.9628019653062537, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8381378803593087, 0);
  sqcRYGate(q, -3.1261580187305427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.803939536476529, 0);
  sqcRYGate(q, 0.772816517762852, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7809681728009443, 0);
  sqcRYGate(q, -0.04256667816894222, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1124315758465728, 0);
  sqcRYGate(q, -1.1308646198041927, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.432711811064016, 0);
  sqcRYGate(q, 1.9616835436590776, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5283490587625974, 0);
  sqcRYGate(q, 0.8347471952558403, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.694477074238371, 1);
  sqcRYGate(q, 2.4815557595523408, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3781818575032982, 1);
  sqcRYGate(q, -0.5053843644190765, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.054222960295871, 1);
  sqcRYGate(q, 2.6186669542721694, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0872180526134367, 1);
  sqcRYGate(q, 1.1928115390828946, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.022038123291840517, 2);
  sqcRYGate(q, -1.7505168134926736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.534101304949937, 2);
  sqcRYGate(q, 2.310759192465218, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5678026098842324, 0);
  sqcRYGate(q, 1.743257340486723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7421896757062345, 0);
  sqcRYGate(q, -1.5763710420093089, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.288778071449558, 0);
  sqcRYGate(q, 1.534353192097356, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5843080566750205, 0);
  sqcRYGate(q, 3.1019416410291907, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4096041909300503, 0);
  sqcRYGate(q, -1.418833220602784, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.01676999107396604, 0);
  sqcRYGate(q, -2.812546731786326, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6773317459455606, 1);
  sqcRYGate(q, 0.6830148773787181, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3505764514370449, 1);
  sqcRYGate(q, -2.426828044374509, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.005331953811348, 1);
  sqcRYGate(q, 2.578611371634254, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2513388757645156, 1);
  sqcRYGate(q, 2.9311976595324016, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6556382786650898, 2);
  sqcRYGate(q, -0.10473851622189878, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2885464861477276, 2);
  sqcRYGate(q, 2.0597861685051466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.365696757224319, 0);
  sqcRYGate(q, -2.291158819908817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4265347930671446, 0);
  sqcRYGate(q, -1.6803279907918864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.884825752841079, 0);
  sqcRYGate(q, -1.1737654479910713, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.05261770410420885, 0);
  sqcRYGate(q, -1.7347169912193798, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.102287589760937, 0);
  sqcRYGate(q, 1.6282461277364133, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2974281046284575, 0);
  sqcRYGate(q, -2.971275205936877, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7677357521874484, 1);
  sqcRYGate(q, 2.020291850164797, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8402092487125552, 1);
  sqcRYGate(q, -0.4736669241134466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5443393698386108, 1);
  sqcRYGate(q, -0.16187776325614808, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3023123065586759, 1);
  sqcRYGate(q, -3.0731772510120994, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9064249961925395, 2);
  sqcRYGate(q, -0.18679831045251208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9727182457744923, 2);
  sqcRYGate(q, 1.4342323541210031, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1300156447051295, 0);
  sqcRYGate(q, 1.6979481414711386, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8281575362564305, 0);
  sqcRYGate(q, -0.8899966646077823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0076961980871406, 0);
  sqcRYGate(q, -1.7681684753948161, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8498212495830795, 0);
  sqcRYGate(q, 2.7979224692201354, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4453150227719371, 0);
  sqcRYGate(q, 3.0280565785069955, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2809553204698314, 0);
  sqcRYGate(q, 1.129810712399876, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.854193939647185, 1);
  sqcRYGate(q, 1.871203425120523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8328318328943745, 1);
  sqcRYGate(q, 0.015005592809806068, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.25642664228337486, 1);
  sqcRYGate(q, -0.9515463671351033, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.418249551007354, 1);
  sqcRYGate(q, -1.2279742219657335, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.62942845930578, 2);
  sqcRYGate(q, 2.58886157752242, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4919751226297321, 2);
  sqcRYGate(q, 0.04426164113524589, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9144722592862573, 0);
  sqcRYGate(q, -2.294284975105333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8316916052143323, 0);
  sqcRYGate(q, -0.4591363789916585, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5894442807067524, 0);
  sqcRYGate(q, -2.0973881481452965, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.649297263901559, 0);
  sqcRYGate(q, -1.0199096367762497, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.494130660345913, 0);
  sqcRYGate(q, -2.534767760486883, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.516818019972387, 0);
  sqcRYGate(q, -2.8210757281041494, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9008970825104292, 1);
  sqcRYGate(q, -0.7624131027795755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1961003637769396, 1);
  sqcRYGate(q, -1.9462371066973958, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0591875019792134, 1);
  sqcRYGate(q, 3.0020808018049636, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5594097711085508, 1);
  sqcRYGate(q, 2.414957184610095, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8396567448910424, 2);
  sqcRYGate(q, -0.4219184761405525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2018623399128778, 2);
  sqcRYGate(q, -0.2930822965748465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5183111520660444, 0);
  sqcRYGate(q, -0.04211164679600988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.565781867904649, 0);
  sqcRYGate(q, 0.3287665015341812, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.632955337496879, 0);
  sqcRYGate(q, -2.5051368613385634, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.36100089493050774, 0);
  sqcRYGate(q, 0.4452347770048451, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0865800722863537, 0);
  sqcRYGate(q, 1.662641007750282, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2054573846493524, 0);
  sqcRYGate(q, -1.2522247482901119, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7597527196568976, 1);
  sqcRYGate(q, -2.9922174383783093, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.027688714825362, 1);
  sqcRYGate(q, 1.2782185936612092, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7633087130928975, 1);
  sqcRYGate(q, 0.8086504123191465, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.333453478615358, 1);
  sqcRYGate(q, -0.8429004186533451, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3377152791862237, 2);
  sqcRYGate(q, -1.201636429335106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6824573610081766, 2);
  sqcRYGate(q, 0.09120166699680254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.04683637967609205, 0);
  sqcRYGate(q, 1.0374311637037126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0282764964015048, 0);
  sqcRYGate(q, 0.06670436068261054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5600905352485146, 0);
  sqcRYGate(q, -2.2275964462290516, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0623412296008343, 0);
  sqcRYGate(q, -2.244178684792982, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2890639922900755, 0);
  sqcRYGate(q, -0.7078958745840653, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.44070410608373317, 0);
  sqcRYGate(q, 2.2299776087533654, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8660647222186997, 1);
  sqcRYGate(q, 2.6390852405945835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9625938778137844, 1);
  sqcRYGate(q, 3.0098468792870072, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9759188988841712, 1);
  sqcRYGate(q, 2.986966614324988, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9031933731726167, 1);
  sqcRYGate(q, -2.089359690020207, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2753112602865624, 2);
  sqcRYGate(q, -0.4715043520885962, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9243514311718178, 2);
  sqcRYGate(q, 0.3169106017796887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0687778550946538, 0);
  sqcRYGate(q, -2.4166759474130557, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5700122543793942, 0);
  sqcRYGate(q, -0.7027861047330616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5106963364241341, 0);
  sqcRYGate(q, -2.7664407997084415, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7810013184260371, 0);
  sqcRYGate(q, 0.662657668557454, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1776354479026807, 0);
  sqcRYGate(q, -1.2701779117410021, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.02887073300232057, 0);
  sqcRYGate(q, -0.026370998816195982, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.17671564921094074, 1);
  sqcRYGate(q, 2.7336211822002676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0415971329664009, 1);
  sqcRYGate(q, 1.5546194807038294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3863896783150036, 1);
  sqcRYGate(q, 2.9444127613407702, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2973286807983209, 1);
  sqcRYGate(q, -3.090279915422316, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.574348533196149, 2);
  sqcRYGate(q, -2.2820661816571777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8727201874335115, 2);
  sqcRYGate(q, -2.7469359344561117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2277055664413052, 0);
  sqcRYGate(q, 2.9519210865128027, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1307637828753485, 0);
  sqcRYGate(q, 2.3798849254341774, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1869197821116604, 0);
  sqcRYGate(q, 0.5238401041271822, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2596161697728645, 0);
  sqcRYGate(q, 2.7201457766066564, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5855586967456174, 0);
  sqcRYGate(q, -2.223632386559652, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.883359529134966, 0);
  sqcRYGate(q, -2.905768259727355, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.35149694559600064, 1);
  sqcRYGate(q, 0.298575615336917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8084617241828018, 1);
  sqcRYGate(q, -1.5581961853082777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9770068888383818, 1);
  sqcRYGate(q, 1.9824603197369814, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.20461486613440108, 1);
  sqcRYGate(q, 0.26875632940393057, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7076026986254367, 2);
  sqcRYGate(q, 1.4052965641354493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3996932453555933, 2);
  sqcRYGate(q, -0.25821225355992894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17361131227978, 0);
  sqcRYGate(q, 2.2131276957122483, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6632645993773522, 0);
  sqcRYGate(q, -0.0907061756759804, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8744795683489253, 0);
  sqcRYGate(q, -1.6507990714214298, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.711811868968526, 0);
  sqcRYGate(q, -0.240871548957815, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.128006048767651, 0);
  sqcRYGate(q, 0.49569651638713985, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.089731092071915, 0);
  sqcRYGate(q, -2.9440229771625797, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9519176453128327, 1);
  sqcRYGate(q, 1.7242567945363163, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.060037525162005, 1);
  sqcRYGate(q, 0.45458181994823077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.309582859239847, 1);
  sqcRYGate(q, 2.3869049044006316, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5681975995487436, 1);
  sqcRYGate(q, 0.14232759929614325, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6705096547533049, 2);
  sqcRYGate(q, 0.2931667641086251, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6129771841175735, 2);
  sqcRYGate(q, 1.340942073013832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.32607541928756123, 0);
  sqcRYGate(q, -0.014771799659786033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4176960705207218, 0);
  sqcRYGate(q, 0.00876610840833525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4344728968260707, 0);
  sqcRYGate(q, 1.1101027403088874, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5456601162558012, 0);
  sqcRYGate(q, 1.0448532587217754, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.346686937550775, 0);
  sqcRYGate(q, -1.0371787924183238, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2746362534144717, 0);
  sqcRYGate(q, -2.5246983950803426, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7463885244549394, 1);
  sqcRYGate(q, 2.4438702146583804, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0425751944433399, 1);
  sqcRYGate(q, 2.6863627991380947, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8555468672182693, 1);
  sqcRYGate(q, 1.842467474196028, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.063015929165478, 1);
  sqcRYGate(q, 2.4234113897610805, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.26289427366708273, 2);
  sqcRYGate(q, 1.1727830510880006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3913040929391227, 2);
  sqcRYGate(q, -2.9895926435847207, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.34137265718357135, 0);
  sqcRYGate(q, -0.6983780494304649, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2556477295691195, 0);
  sqcRYGate(q, -2.3291888765649986, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8421981604875106, 0);
  sqcRYGate(q, -0.8073838147806239, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.913360697812784, 0);
  sqcRYGate(q, -3.1010629627736934, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.011854833678480777, 0);
  sqcRYGate(q, 0.8709363935543969, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7815781808504818, 0);
  sqcRYGate(q, 2.797627917425615, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.791722973219851, 1);
  sqcRYGate(q, 2.855180169205693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.565700680393199, 1);
  sqcRYGate(q, -2.2367685588442447, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1637428882968646, 1);
  sqcRYGate(q, -0.5139287397570804, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0602260531757661, 1);
  sqcRYGate(q, -0.2381594053174281, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8293823938926277, 2);
  sqcRYGate(q, 2.6372729242988995, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3585723832054633, 2);
  sqcRYGate(q, -1.715932677655391, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8970516635777445, 0);
  sqcRYGate(q, -0.7457556731184914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1775395314266985, 0);
  sqcRYGate(q, -2.2320972902392917, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.653892313533001, 0);
  sqcRYGate(q, -1.2946775184521444, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4098472166767126, 0);
  sqcRYGate(q, -1.4522463477473833, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6408237304586204, 0);
  sqcRYGate(q, -2.237187395057107, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7326643080134945, 0);
  sqcRYGate(q, -2.3112737045339484, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.752223220601213, 1);
  sqcRYGate(q, -0.3425527513148472, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7855198118768176, 1);
  sqcRYGate(q, -1.6310020003381505, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.002243221141861, 1);
  sqcRYGate(q, 0.7117153346732653, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5016524107290294, 1);
  sqcRYGate(q, 0.7231957327229496, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.16354089528448412, 2);
  sqcRYGate(q, -0.9113783981316905, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9836298417619975, 2);
  sqcRYGate(q, 2.538640683045001, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.929849700269633, 0);
  sqcRYGate(q, 3.1067489406117677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0205878170587734, 0);
  sqcRYGate(q, -0.01256198171080253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.617619902780443, 0);
  sqcRYGate(q, 2.0176349585539937, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.23234601952600364, 0);
  sqcRYGate(q, -2.189126497956474, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3448510660784831, 0);
  sqcRYGate(q, 3.085160799556994, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3811380294005158, 0);
  sqcRYGate(q, -2.7237036463174498, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9063067308147503, 1);
  sqcRYGate(q, 0.6793305672751142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1299748143373125, 1);
  sqcRYGate(q, 1.1419798665036898, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9754546740685432, 1);
  sqcRYGate(q, 1.445810517881135, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4557788334688895, 1);
  sqcRYGate(q, -2.16063649157568, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.094057667558685, 2);
  sqcRYGate(q, -1.206114870185809, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.48800293556232055, 2);
  sqcRYGate(q, -0.75690899220538, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8743409532004336, 0);
  sqcRYGate(q, 2.5647512815735927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.043732540873941, 0);
  sqcRYGate(q, -1.6400417873288224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7557449470959836, 0);
  sqcRYGate(q, 0.02251488090414533, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2543880917429697, 0);
  sqcRYGate(q, -1.5077239386722674, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4376672565227393, 0);
  sqcRYGate(q, -1.5344835285601883, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4763899768475417, 0);
  sqcRYGate(q, 1.5473399693252112, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.726985271946381, 1);
  sqcRYGate(q, 1.839970167728346, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5660553777759283, 1);
  sqcRYGate(q, 1.402926700205027, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.72666396990725, 1);
  sqcRYGate(q, -1.9676818543209893, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.487904239280688, 1);
  sqcRYGate(q, 2.6901666519421994, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.117328300357143, 2);
  sqcRYGate(q, 0.18543391683831345, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.20596001945288922, 2);
  sqcRYGate(q, 3.094290872501553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7544471582981989, 0);
  sqcRYGate(q, 2.996626314724864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7981887587470265, 0);
  sqcRYGate(q, 0.06553423313299478, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4972203607920078, 0);
  sqcRYGate(q, -0.8025967099972351, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9901209809200053, 0);
  sqcRYGate(q, 1.6133462196586823, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.490265309493492, 0);
  sqcRYGate(q, 1.1478719636964152, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0988163911211983, 0);
  sqcRYGate(q, -2.7502174206324854, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4295297835557685, 1);
  sqcRYGate(q, 0.8356831078253268, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9300456028207331, 1);
  sqcRYGate(q, 0.9617672555626746, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5064814687018813, 1);
  sqcRYGate(q, 0.28063425252251495, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9199824166798534, 1);
  sqcRYGate(q, 0.036339081053949125, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.823711254352627, 2);
  sqcRYGate(q, 0.9275116055107473, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.12413009731892248, 2);
  sqcRYGate(q, 1.888767175540312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2558540857080613, 0);
  sqcRYGate(q, -0.17440442804284484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06872929375374692, 0);
  sqcRYGate(q, -2.993928138387873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4999451821111904, 0);
  sqcRYGate(q, -2.8319238541895, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6389582970942087, 0);
  sqcRYGate(q, 0.5013359113434455, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7951871722193833, 0);
  sqcRYGate(q, 0.522738699832134, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.972354818388972, 0);
  sqcRYGate(q, 1.948684809706485, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0781671562856059, 1);
  sqcRYGate(q, 0.12592090587269422, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.11882057083579, 1);
  sqcRYGate(q, 1.723738929545699, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5896638375746236, 1);
  sqcRYGate(q, 0.10765860818177764, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2829547860590624, 1);
  sqcRYGate(q, -0.32838477853153414, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.131230748468576, 2);
  sqcRYGate(q, 0.18100987092440324, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.558769819073363, 2);
  sqcRYGate(q, 0.6271726171881478, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.03651808623145403, 0);
  sqcRYGate(q, 2.5108925870888523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4799151653196287, 0);
  sqcRYGate(q, -1.2344138635572675, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6335861349237708, 0);
  sqcRYGate(q, 0.43632716032820706, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0716779374762107, 0);
  sqcRYGate(q, -0.7963059799600576, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3638061526545178, 0);
  sqcRYGate(q, 2.6331079912901494, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.1476797011963453, 0);
  sqcRYGate(q, -2.4825209421242453, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2906639287327013, 1);
  sqcRYGate(q, -1.2715557570726386, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.697094353089895, 1);
  sqcRYGate(q, 0.19818234557795877, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2388668399653149, 1);
  sqcRYGate(q, 1.1960000305692042, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.04049924446105896, 1);
  sqcRYGate(q, -0.2704655686052795, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6086166804264177, 2);
  sqcRYGate(q, 2.24097791152429, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9568837731118416, 2);
  sqcRYGate(q, -2.630185519834345, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5443751146231337, 0);
  sqcRYGate(q, 0.7208044879497598, 1);
  sqcRYGate(q, -2.6265328698490693, 2);
  sqcRYGate(q, 1.713094270256555, 3);

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
