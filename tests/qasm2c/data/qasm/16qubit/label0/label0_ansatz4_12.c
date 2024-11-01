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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 1.6421365046691392, 0);
  sqcRZGate(q, -1.4739683021262113, 0);
  sqcRYGate(q, -1.4039397862994627, 1);
  sqcRZGate(q, -0.3881635785408165, 1);
  sqcRYGate(q, 2.663841103592284, 2);
  sqcRZGate(q, 2.1472995468029885, 2);
  sqcRYGate(q, -2.738131944861697, 3);
  sqcRZGate(q, -0.2831778634074787, 3);
  sqcRYGate(q, -3.140925012320817, 4);
  sqcRZGate(q, -0.7443474410494133, 4);
  sqcRYGate(q, -3.1328977595188974, 5);
  sqcRZGate(q, 2.9614709037883595, 5);
  sqcRYGate(q, 0.0562473661883649, 6);
  sqcRZGate(q, 2.381350185770034, 6);
  sqcRYGate(q, 0.23509826011024249, 7);
  sqcRZGate(q, -0.10085303365883061, 7);
  sqcRYGate(q, 3.1412898687405018, 8);
  sqcRZGate(q, 0.6100568651082989, 8);
  sqcRYGate(q, 0.004080599448037341, 9);
  sqcRZGate(q, 1.1232574977892655, 9);
  sqcRYGate(q, -1.3557649724631207, 10);
  sqcRZGate(q, -2.412635205787355, 10);
  sqcRYGate(q, -1.5631599566502379, 11);
  sqcRZGate(q, -3.0584474247949043, 11);
  sqcRYGate(q, -0.00319128299920024, 12);
  sqcRZGate(q, 2.1173718989095223, 12);
  sqcRYGate(q, 3.1384779000597405, 13);
  sqcRZGate(q, 0.4856817488484521, 13);
  sqcRYGate(q, 0.4239984247635675, 14);
  sqcRZGate(q, 0.23639008785846394, 14);
  sqcRYGate(q, -2.5416740806593743, 15);
  sqcRZGate(q, -3.1387267673005015, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.1632735232768372, 0);
  sqcRZGate(q, 1.6534283954635338, 0);
  sqcRYGate(q, 0.16619506818485671, 1);
  sqcRZGate(q, -0.9704883278022547, 1);
  sqcRYGate(q, 0.39799643606502144, 2);
  sqcRZGate(q, -2.3043699080103623, 2);
  sqcRYGate(q, 2.991317060067247, 3);
  sqcRZGate(q, 0.6624689397454463, 3);
  sqcRYGate(q, -1.4544179915138153, 4);
  sqcRZGate(q, -1.7189469727934412, 4);
  sqcRYGate(q, 2.5190903606135713, 5);
  sqcRZGate(q, -0.06432074155183805, 5);
  sqcRYGate(q, 1.532184614618692, 6);
  sqcRZGate(q, -1.5388015038228038, 6);
  sqcRYGate(q, 1.7906816319160974, 7);
  sqcRZGate(q, 1.5448105626229376, 7);
  sqcRYGate(q, -1.286874348513028, 8);
  sqcRZGate(q, 1.3235075944650614, 8);
  sqcRYGate(q, 2.153971794325629, 9);
  sqcRZGate(q, 1.1151057120704648, 9);
  sqcRYGate(q, 3.0266671743958553, 10);
  sqcRZGate(q, 2.4006682527484395, 10);
  sqcRYGate(q, -1.4876275466043907, 11);
  sqcRZGate(q, -1.4486611925054387, 11);
  sqcRYGate(q, 0.609282232354137, 12);
  sqcRZGate(q, 0.282375775411519, 12);
  sqcRYGate(q, -1.6808164275269795, 13);
  sqcRZGate(q, 1.22116201099887, 13);
  sqcRYGate(q, 2.8046913354716985, 14);
  sqcRZGate(q, -2.501707021692851, 14);
  sqcRYGate(q, 2.5888818398983706, 15);
  sqcRZGate(q, 1.769463613940659, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.6755010769906873, 0);
  sqcRZGate(q, 1.6181031122876197, 0);
  sqcRYGate(q, -2.2773369837125785, 1);
  sqcRZGate(q, -2.7778280240062054, 1);
  sqcRYGate(q, -3.141496690942691, 2);
  sqcRZGate(q, -1.8890751158473231, 2);
  sqcRYGate(q, 0.001269834345633612, 3);
  sqcRZGate(q, -0.7101763986497797, 3);
  sqcRYGate(q, 1.5748750195702899, 4);
  sqcRZGate(q, 3.1411928186621836, 4);
  sqcRYGate(q, 1.5677394421034327, 5);
  sqcRZGate(q, 0.0038442705008361507, 5);
  sqcRYGate(q, 1.5705687054923354, 6);
  sqcRZGate(q, 1.5860863661568665, 6);
  sqcRYGate(q, -1.5706386008651574, 7);
  sqcRZGate(q, 1.5555695595601327, 7);
  sqcRYGate(q, -1.1451295493396696, 8);
  sqcRZGate(q, -2.7359617779925567, 8);
  sqcRYGate(q, 0.9069196597565616, 9);
  sqcRZGate(q, -2.5661468163765835, 9);
  sqcRYGate(q, 3.141388121332642, 10);
  sqcRZGate(q, 0.2761316860880714, 10);
  sqcRYGate(q, -3.140991018421969, 11);
  sqcRZGate(q, 2.6555827897297726, 11);
  sqcRYGate(q, 3.0753843698739773, 12);
  sqcRZGate(q, 1.681389189853438, 12);
  sqcRYGate(q, 0.868410628130442, 13);
  sqcRZGate(q, 1.6158133049852532, 13);
  sqcRYGate(q, -0.0602471034309513, 14);
  sqcRZGate(q, 0.13091205191475108, 14);
  sqcRYGate(q, 3.1329973728370546, 15);
  sqcRZGate(q, -1.8018133962220029, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.8210867765132375, 0);
  sqcRZGate(q, 1.1436514312222754, 0);
  sqcRYGate(q, 1.5834926629430288, 1);
  sqcRZGate(q, -0.8611404773650442, 1);
  sqcRYGate(q, -2.0644757416476974e-05, 2);
  sqcRZGate(q, 1.4363578411319748, 2);
  sqcRYGate(q, 0.0001251741701465134, 3);
  sqcRZGate(q, -0.6768608867295196, 3);
  sqcRYGate(q, 1.5681880910613624, 4);
  sqcRZGate(q, 0.3574076781609108, 4);
  sqcRYGate(q, 1.5668083735221858, 5);
  sqcRZGate(q, -2.6025593550094492, 5);
  sqcRYGate(q, 1.5719835407387333, 6);
  sqcRZGate(q, -3.12813493488286, 6);
  sqcRYGate(q, 1.57234446456844, 7);
  sqcRZGate(q, 3.1402002893752883, 7);
  sqcRYGate(q, -1.2597837924679745, 8);
  sqcRZGate(q, -1.598398522180616, 8);
  sqcRYGate(q, 0.9959772471436759, 9);
  sqcRZGate(q, -1.836444488193789, 9);
  sqcRYGate(q, -0.004469073551873315, 10);
  sqcRZGate(q, -2.032343830150325, 10);
  sqcRYGate(q, 0.005273438974363168, 11);
  sqcRZGate(q, 2.2278550833365585, 11);
  sqcRYGate(q, 0.2884521154628814, 12);
  sqcRZGate(q, 2.821469898477794, 12);
  sqcRYGate(q, 1.224117932630514, 13);
  sqcRZGate(q, 0.21420293593730386, 13);
  sqcRYGate(q, -1.12088203939887, 14);
  sqcRZGate(q, 1.872889082291545, 14);
  sqcRYGate(q, -3.1306999533261544, 15);
  sqcRZGate(q, -3.0775906655060443, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5903674918500093, 0);
  sqcRZGate(q, 0.2345502432123352, 0);
  sqcRYGate(q, -2.53133452860475, 1);
  sqcRZGate(q, 0.3015867162876033, 1);
  sqcRYGate(q, 2.979244972608643, 2);
  sqcRZGate(q, 0.9424749412582891, 2);
  sqcRYGate(q, 1.9160713444993986, 3);
  sqcRZGate(q, 1.5134065725698687, 3);
  sqcRYGate(q, 0.2424882421435562, 4);
  sqcRZGate(q, -2.698518955649646, 4);
  sqcRYGate(q, -0.30594228501334175, 5);
  sqcRZGate(q, 0.3150905545922473, 5);
  sqcRYGate(q, 1.7411428607205064, 6);
  sqcRZGate(q, 1.088131006757318, 6);
  sqcRYGate(q, -1.2713330419279218, 7);
  sqcRZGate(q, 1.492742377420758, 7);
  sqcRYGate(q, -1.9737838214107128, 8);
  sqcRZGate(q, -2.749325217844837, 8);
  sqcRYGate(q, 0.8423402646365856, 9);
  sqcRZGate(q, 2.3103313454841987, 9);
  sqcRYGate(q, 1.4165052054047482, 10);
  sqcRZGate(q, 1.601230999613577, 10);
  sqcRYGate(q, 0.020123030505299233, 11);
  sqcRZGate(q, -1.0903304688490554, 11);
  sqcRYGate(q, 3.1242505032690464, 12);
  sqcRZGate(q, -1.4561582655068404, 12);
  sqcRYGate(q, -0.04060660005094797, 13);
  sqcRZGate(q, 1.33640978869487, 13);
  sqcRYGate(q, -0.29068160157503703, 14);
  sqcRZGate(q, 1.2426020609921578, 14);
  sqcRYGate(q, -0.004852506734041917, 15);
  sqcRZGate(q, -1.9407481842432617, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.0660067454716984, 0);
  sqcRZGate(q, 0.4740523635190108, 0);
  sqcRYGate(q, 0.2859376123191337, 1);
  sqcRZGate(q, 1.5495323142826412, 1);
  sqcRYGate(q, -3.1409950767697703, 2);
  sqcRZGate(q, -0.030891043815662256, 2);
  sqcRYGate(q, 3.140577939090165, 3);
  sqcRZGate(q, 1.1307391785214904, 3);
  sqcRYGate(q, 3.1405291635725248, 4);
  sqcRZGate(q, -0.4185853432787416, 4);
  sqcRYGate(q, -3.140658682629122, 5);
  sqcRZGate(q, -0.28395253254943986, 5);
  sqcRYGate(q, 2.9349155534650415, 6);
  sqcRZGate(q, 1.973765371016357, 6);
  sqcRYGate(q, 1.528423692482333, 7);
  sqcRZGate(q, -1.4202700803744719, 7);
  sqcRYGate(q, -3.1387965703619405, 8);
  sqcRZGate(q, 0.7077270177312887, 8);
  sqcRYGate(q, -0.0012213476354601127, 9);
  sqcRZGate(q, -1.3974488018474043, 9);
  sqcRYGate(q, 1.9587746833311703, 10);
  sqcRZGate(q, -2.0922943268223175, 10);
  sqcRYGate(q, -2.0005124062914184, 11);
  sqcRZGate(q, 1.247125767023545, 11);
  sqcRYGate(q, -1.1322299428379416, 12);
  sqcRZGate(q, 1.969617728726985, 12);
  sqcRYGate(q, 1.317440868563785, 13);
  sqcRZGate(q, -2.148987264478058, 13);
  sqcRYGate(q, 1.1985075913643914, 14);
  sqcRZGate(q, 0.9080596833170249, 14);
  sqcRYGate(q, 0.0028517440315349836, 15);
  sqcRZGate(q, -0.14852274037519267, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5711797349618926, 0);
  sqcRZGate(q, 2.9612747014653125, 0);
  sqcRYGate(q, -0.4506293887636126, 1);
  sqcRZGate(q, -1.4591570717364062, 1);
  sqcRYGate(q, 0.538376062555213, 2);
  sqcRZGate(q, -1.5322278198496262, 2);
  sqcRYGate(q, -1.7331572937304554, 3);
  sqcRZGate(q, -1.4535754426948477, 3);
  sqcRYGate(q, 1.526365231566859, 4);
  sqcRZGate(q, -2.7642392927913546, 4);
  sqcRYGate(q, -1.5098436839013472, 5);
  sqcRZGate(q, -0.017795353288067486, 5);
  sqcRYGate(q, -0.033600404371458545, 6);
  sqcRZGate(q, 0.23511343402085005, 6);
  sqcRYGate(q, -0.20593752426274975, 7);
  sqcRZGate(q, -0.6456851306167701, 7);
  sqcRYGate(q, -0.003001086801509345, 8);
  sqcRZGate(q, -0.19244865617213502, 8);
  sqcRYGate(q, -3.141379751859934, 9);
  sqcRZGate(q, 1.3812965270555226, 9);
  sqcRYGate(q, 1.091060649950765, 10);
  sqcRZGate(q, 1.7929157998670044, 10);
  sqcRYGate(q, 2.3389830478988336, 11);
  sqcRZGate(q, 0.7798755490497173, 11);
  sqcRYGate(q, 1.9639900116098143, 12);
  sqcRZGate(q, -1.75789219318493, 12);
  sqcRYGate(q, 0.6069545199492401, 13);
  sqcRZGate(q, -0.9754251261304516, 13);
  sqcRYGate(q, 3.053067458465736, 14);
  sqcRZGate(q, 0.17773571379126304, 14);
  sqcRYGate(q, 0.03513735056650618, 15);
  sqcRZGate(q, 1.602594893450308, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.8995511640762572, 0);
  sqcRZGate(q, -2.662140274174345, 0);
  sqcRYGate(q, 1.9853793273972746, 1);
  sqcRZGate(q, 2.0352506570459843, 1);
  sqcRYGate(q, 0.000590385176087338, 2);
  sqcRZGate(q, -2.8159755016809482, 2);
  sqcRYGate(q, -0.0019959034912490235, 3);
  sqcRZGate(q, -2.7022257796570517, 3);
  sqcRYGate(q, 1.5809047778626386, 4);
  sqcRZGate(q, -1.58946380110929, 4);
  sqcRYGate(q, -1.5972040426969913, 5);
  sqcRZGate(q, -1.7747305148057513, 5);
  sqcRYGate(q, -3.085900654119573, 6);
  sqcRZGate(q, -0.5586435724054465, 6);
  sqcRYGate(q, 2.982189869985109, 7);
  sqcRZGate(q, -0.7800761808672441, 7);
  sqcRYGate(q, -0.000745075804658768, 8);
  sqcRZGate(q, 1.3135476191120699, 8);
  sqcRYGate(q, 3.140432136169936, 9);
  sqcRZGate(q, 2.5980349988793576, 9);
  sqcRYGate(q, 1.3337179341002425, 10);
  sqcRZGate(q, 2.6449062962915777, 10);
  sqcRYGate(q, -2.522235251424767, 11);
  sqcRZGate(q, -3.0736882167877155, 11);
  sqcRYGate(q, 0.41157466530024267, 12);
  sqcRZGate(q, -1.197463602858735, 12);
  sqcRYGate(q, 0.30743715292340745, 13);
  sqcRZGate(q, -2.100111672137729, 13);
  sqcRYGate(q, -1.6002276556526818, 14);
  sqcRZGate(q, 1.6009906797806677, 14);
  sqcRYGate(q, 3.1364765310507092, 15);
  sqcRZGate(q, -2.043747872527764, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.332959680563902, 0);
  sqcRZGate(q, 0.5628147341861024, 0);
  sqcRYGate(q, -1.5724758974472328, 1);
  sqcRZGate(q, 0.36189552755103266, 1);
  sqcRYGate(q, 3.1411763312700303, 2);
  sqcRZGate(q, -0.34448733343183857, 2);
  sqcRYGate(q, 0.00031287419145620277, 3);
  sqcRZGate(q, 1.5782396349076138, 3);
  sqcRYGate(q, -0.026892601530970034, 4);
  sqcRZGate(q, 2.5943734667399774, 4);
  sqcRYGate(q, -3.0645173164831387, 5);
  sqcRZGate(q, 1.3467904039062775, 5);
  sqcRYGate(q, -0.03653331514646258, 6);
  sqcRZGate(q, -2.996816593343354, 6);
  sqcRYGate(q, -1.1182023780851342, 7);
  sqcRZGate(q, -1.0974229953470527, 7);
  sqcRYGate(q, 3.1408554618854243, 8);
  sqcRZGate(q, 1.8396632457936881, 8);
  sqcRYGate(q, -3.1408232360427224, 9);
  sqcRZGate(q, 2.332591661974384, 9);
  sqcRYGate(q, 2.717200188940511, 10);
  sqcRZGate(q, -2.341484773493008, 10);
  sqcRYGate(q, 1.0577833129272003, 11);
  sqcRZGate(q, 1.6998734048081348, 11);
  sqcRYGate(q, 3.1201313725609814, 12);
  sqcRZGate(q, -0.7001694146277888, 12);
  sqcRYGate(q, 0.0020167972918025967, 13);
  sqcRZGate(q, -0.9055790388338015, 13);
  sqcRYGate(q, -1.2522586432145353, 14);
  sqcRZGate(q, 1.6800695848192695, 14);
  sqcRYGate(q, -3.138429395300323, 15);
  sqcRZGate(q, -2.0780280720026743, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.8803105409916174, 0);
  sqcRZGate(q, 3.068787480542444, 0);
  sqcRYGate(q, 1.5266818629411631, 1);
  sqcRZGate(q, 1.2275496780460795, 1);
  sqcRYGate(q, 3.110884380021725, 2);
  sqcRZGate(q, 0.6719393938108533, 2);
  sqcRYGate(q, -3.136911839729977, 3);
  sqcRZGate(q, 2.3112507222769447, 3);
  sqcRYGate(q, 2.8488663113696866, 4);
  sqcRZGate(q, -2.2016369672123277, 4);
  sqcRYGate(q, 1.5426884379273615, 5);
  sqcRZGate(q, -1.1654507987322797, 5);
  sqcRYGate(q, 1.236147269204839, 6);
  sqcRZGate(q, 1.5326040268018408, 6);
  sqcRYGate(q, -0.6759705181662953, 7);
  sqcRZGate(q, -2.065961002708537, 7);
  sqcRYGate(q, 3.0861474778263425, 8);
  sqcRZGate(q, 0.5383774061207847, 8);
  sqcRYGate(q, -2.8879384806472603, 9);
  sqcRZGate(q, -0.3451568372233665, 9);
  sqcRYGate(q, -1.9043421806859513, 10);
  sqcRZGate(q, -1.4718398930055903, 10);
  sqcRYGate(q, 2.1529577848728647, 11);
  sqcRZGate(q, 2.9172778223591873, 11);
  sqcRYGate(q, -1.7845676874795184, 12);
  sqcRZGate(q, 2.5002138203153232, 12);
  sqcRYGate(q, -0.7849800815105388, 13);
  sqcRZGate(q, 0.6781072843683139, 13);
  sqcRYGate(q, -1.5754774283250832, 14);
  sqcRZGate(q, -0.0007930956357830284, 14);
  sqcRYGate(q, -3.09839601096931, 15);
  sqcRZGate(q, -1.0909397796434384, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.6622322908458949, 0);
  sqcRZGate(q, 0.8421366746580942, 0);
  sqcRYGate(q, 0.23130794542685615, 1);
  sqcRZGate(q, -0.17500081237696463, 1);
  sqcRYGate(q, -0.011021137994917218, 2);
  sqcRZGate(q, 2.6073794136461546, 2);
  sqcRYGate(q, 1.5989449084478216, 3);
  sqcRZGate(q, 2.3521128258863007, 3);
  sqcRYGate(q, 2.830924223770309, 4);
  sqcRZGate(q, -1.2681142925723679, 4);
  sqcRYGate(q, 3.11591573421081, 5);
  sqcRZGate(q, -0.06972458929331271, 5);
  sqcRYGate(q, -1.5881867925790338, 6);
  sqcRZGate(q, -1.5738774605215782, 6);
  sqcRYGate(q, 1.573003571309628, 7);
  sqcRZGate(q, -0.4273937354084018, 7);
  sqcRYGate(q, -0.0003220562646172328, 8);
  sqcRZGate(q, -1.7984597351380256, 8);
  sqcRYGate(q, -3.1415097090692834, 9);
  sqcRZGate(q, -1.9030395210755942, 9);
  sqcRYGate(q, 0.17968126219299485, 10);
  sqcRZGate(q, 2.5590041828773287, 10);
  sqcRYGate(q, -2.8702476422245686, 11);
  sqcRZGate(q, 1.9706507775022302, 11);
  sqcRYGate(q, -2.0555436745090465, 12);
  sqcRZGate(q, -2.094982150567102, 12);
  sqcRYGate(q, -1.4626601626995321, 13);
  sqcRZGate(q, -2.887952398158734, 13);
  sqcRYGate(q, 0.014750244906487355, 14);
  sqcRZGate(q, -0.3179811139980239, 14);
  sqcRYGate(q, 3.138111714158879, 15);
  sqcRZGate(q, -0.6373483526659491, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.9456178962844084, 0);
  sqcRZGate(q, -0.7284671076065035, 0);
  sqcRYGate(q, -2.406405779442872, 1);
  sqcRZGate(q, 2.386303743437291, 1);
  sqcRYGate(q, -1.6147180884237533, 2);
  sqcRZGate(q, 1.3096098760535957, 2);
  sqcRYGate(q, -1.1980235520439697, 3);
  sqcRZGate(q, -2.53628202753769, 3);
  sqcRYGate(q, -3.1415159785388918, 4);
  sqcRZGate(q, 2.434657605173829, 4);
  sqcRYGate(q, 3.1376456293787314, 5);
  sqcRZGate(q, 2.79407422671444, 5);
  sqcRYGate(q, 2.0857058758721667, 6);
  sqcRZGate(q, -0.6635716291311475, 6);
  sqcRYGate(q, 3.139537409905366, 7);
  sqcRZGate(q, 1.2352597696018044, 7);
  sqcRYGate(q, 3.1406819751033175, 8);
  sqcRZGate(q, 2.8550296923777387, 8);
  sqcRYGate(q, 0.00010704633600168737, 9);
  sqcRZGate(q, -2.0772900507422154, 9);
  sqcRYGate(q, -2.849427234458775, 10);
  sqcRZGate(q, 0.8355478128744734, 10);
  sqcRYGate(q, -2.2422260939850753, 11);
  sqcRZGate(q, -1.7464395849562155, 11);
  sqcRYGate(q, -1.7706744490774209, 12);
  sqcRZGate(q, -2.222831481864062, 12);
  sqcRYGate(q, -0.20656141879167225, 13);
  sqcRZGate(q, 1.717862451069145, 13);
  sqcRYGate(q, -3.1207635760223935, 14);
  sqcRZGate(q, -1.3743433399767515, 14);
  sqcRYGate(q, -3.1404533015717573, 15);
  sqcRZGate(q, -1.707571690093315, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.1396984387232556, 0);
  sqcRZGate(q, 1.212481853120292, 0);
  sqcRYGate(q, 0.0059996234451800134, 1);
  sqcRZGate(q, 0.3396209733517134, 1);
  sqcRYGate(q, 0.0022496850690426244, 2);
  sqcRZGate(q, -0.6628712584333728, 2);
  sqcRYGate(q, 3.1381597674470503, 3);
  sqcRZGate(q, 0.766091840117779, 3);
  sqcRYGate(q, 0.00017039402136731496, 4);
  sqcRZGate(q, 0.5081381706908202, 4);
  sqcRYGate(q, -3.1413040188984493, 5);
  sqcRZGate(q, -0.2918479667111453, 5);
  sqcRYGate(q, 0.07531987843075605, 6);
  sqcRZGate(q, 0.616466060910301, 6);
  sqcRYGate(q, 1.6632667482313392, 7);
  sqcRZGate(q, 0.6144170340721011, 7);
  sqcRYGate(q, 3.1398371573890835, 8);
  sqcRZGate(q, 3.0937421290710714, 8);
  sqcRYGate(q, -0.00033463822380873457, 9);
  sqcRZGate(q, 1.0778935299950012, 9);
  sqcRYGate(q, 1.2953090538435177, 10);
  sqcRZGate(q, 0.0830112342387251, 10);
  sqcRYGate(q, -1.7913820173766464, 11);
  sqcRZGate(q, 1.1852753424717495, 11);
  sqcRYGate(q, -0.8418181674909622, 12);
  sqcRZGate(q, -2.437913742699711, 12);
  sqcRYGate(q, 0.020062508321635697, 13);
  sqcRZGate(q, 1.5988039909974203, 13);
  sqcRYGate(q, 0.039392096914224524, 14);
  sqcRZGate(q, -0.06077139912767304, 14);
  sqcRYGate(q, -0.0098074602657503, 15);
  sqcRZGate(q, -0.8686600084950706, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.046480362492451, 0);
  sqcRZGate(q, 2.56184266929887, 0);
  sqcRYGate(q, -0.889974354161923, 1);
  sqcRZGate(q, 1.4379097044563631, 1);
  sqcRYGate(q, 3.088688495027932, 2);
  sqcRZGate(q, 0.6415873694404013, 2);
  sqcRYGate(q, 0.37880992970231997, 3);
  sqcRZGate(q, -0.1483202461112265, 3);
  sqcRYGate(q, 3.1414037622046953, 4);
  sqcRZGate(q, -1.2179840176781642, 4);
  sqcRYGate(q, 0.0004243970505036177, 5);
  sqcRZGate(q, 2.1450442089688977, 5);
  sqcRYGate(q, -3.097021311828418, 6);
  sqcRZGate(q, -1.6197102792647753, 6);
  sqcRYGate(q, -0.03154840125654079, 7);
  sqcRZGate(q, -2.168837972766614, 7);
  sqcRYGate(q, -2.8886842785172133, 8);
  sqcRZGate(q, 3.030097854079545, 8);
  sqcRYGate(q, -3.110591271877772, 9);
  sqcRZGate(q, -0.11841198780693075, 9);
  sqcRYGate(q, 0.44534509184600934, 10);
  sqcRZGate(q, 0.8615632552098571, 10);
  sqcRYGate(q, -0.5919590076817265, 11);
  sqcRZGate(q, -1.5294661936959253, 11);
  sqcRYGate(q, 2.0306504633285902, 12);
  sqcRZGate(q, 1.1717336513003225, 12);
  sqcRYGate(q, -1.5098302897845515, 13);
  sqcRZGate(q, 2.7265936210815105, 13);
  sqcRYGate(q, -1.260977330161011, 14);
  sqcRZGate(q, -1.1442928737843516, 14);
  sqcRYGate(q, 1.672401172998103, 15);
  sqcRZGate(q, 1.4269352933537776, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.1397180636412574, 0);
  sqcRZGate(q, -2.864275078360744, 0);
  sqcRYGate(q, 0.0024731072122472497, 1);
  sqcRZGate(q, -1.1683771705431487, 1);
  sqcRYGate(q, 1.5677997343780299, 2);
  sqcRZGate(q, -2.6437214322432556, 2);
  sqcRYGate(q, 1.5672501350852883, 3);
  sqcRZGate(q, -0.4913704611727976, 3);
  sqcRYGate(q, -0.0009245921771021486, 4);
  sqcRZGate(q, 0.725668801934213, 4);
  sqcRYGate(q, -3.1413038758602503, 5);
  sqcRZGate(q, -2.713747866214494, 5);
  sqcRYGate(q, 1.5458273492954238, 6);
  sqcRZGate(q, -1.5829096906239044, 6);
  sqcRYGate(q, 1.6655336420595894, 7);
  sqcRZGate(q, 2.6683569440530466, 7);
  sqcRYGate(q, -3.140957911508677, 8);
  sqcRZGate(q, 1.4683175386215823, 8);
  sqcRYGate(q, -0.0007386486788325541, 9);
  sqcRZGate(q, 1.734148167195535, 9);
  sqcRYGate(q, -0.009082356910561806, 10);
  sqcRZGate(q, -2.103381730977454, 10);
  sqcRYGate(q, -3.1353977211318815, 11);
  sqcRZGate(q, 1.4814265438733392, 11);
  sqcRYGate(q, -0.0013977074669595524, 12);
  sqcRZGate(q, -2.162448604812938, 12);
  sqcRYGate(q, -3.1413047449792875, 13);
  sqcRZGate(q, -1.993404325006085, 13);
  sqcRYGate(q, 0.08638934424224766, 14);
  sqcRZGate(q, 0.35202018946089897, 14);
  sqcRYGate(q, 0.26219075842801043, 15);
  sqcRZGate(q, -1.6196163672617425, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.1490473107902819, 0);
  sqcRZGate(q, -1.5715382540388434, 0);
  sqcRYGate(q, -1.70732559560371, 1);
  sqcRZGate(q, 1.5717233429667425, 1);
  sqcRYGate(q, -2.0919699464443484, 2);
  sqcRZGate(q, -0.7014085902919627, 2);
  sqcRYGate(q, 3.113013529006256, 3);
  sqcRZGate(q, -0.539946860097007, 3);
  sqcRYGate(q, 1.5038722479755111, 4);
  sqcRZGate(q, 3.0790587033343133, 4);
  sqcRYGate(q, 0.14546964077086905, 5);
  sqcRZGate(q, -1.907475653157145, 5);
  sqcRYGate(q, 1.3325931115636618, 6);
  sqcRZGate(q, -1.6114034522220033, 6);
  sqcRYGate(q, 3.1305652961992245, 7);
  sqcRZGate(q, -2.2100010423729035, 7);
  sqcRYGate(q, -1.5771717321624665, 8);
  sqcRZGate(q, 3.115065477622452, 8);
  sqcRYGate(q, 1.560930802986174, 9);
  sqcRZGate(q, -0.007292028864787447, 9);
  sqcRYGate(q, -0.288311693585378, 10);
  sqcRZGate(q, 2.589110692972872, 10);
  sqcRYGate(q, 2.919706697109142, 11);
  sqcRZGate(q, -1.493446020158805, 11);
  sqcRYGate(q, 1.499272785778111, 12);
  sqcRZGate(q, 3.076708979900112, 12);
  sqcRYGate(q, -1.2619632282672069, 13);
  sqcRZGate(q, -1.5369145071153143, 13);
  sqcRYGate(q, -2.7108642925220767, 14);
  sqcRZGate(q, 2.428591337293766, 14);
  sqcRYGate(q, 0.10103476299614746, 15);
  sqcRZGate(q, -2.947118252011365, 15);

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
