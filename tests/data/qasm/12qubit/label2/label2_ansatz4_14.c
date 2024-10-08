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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -1.9703144284008531, 0);
  sqcRZGate(q, -0.5880149512815445, 0);
  sqcRYGate(q, -2.7170557931125563, 1);
  sqcRZGate(q, 1.1812757436317458, 1);
  sqcRYGate(q, -2.955610079976699, 2);
  sqcRZGate(q, 0.5806285097706678, 2);
  sqcRYGate(q, 3.0782932430268444, 3);
  sqcRZGate(q, -0.9149867598178213, 3);
  sqcRYGate(q, 1.5662998505220243, 4);
  sqcRZGate(q, 3.140634978402118, 4);
  sqcRYGate(q, 1.5693695462483706, 5);
  sqcRZGate(q, 3.1374358393670057, 5);
  sqcRYGate(q, -1.5591895957966293, 6);
  sqcRZGate(q, -0.6816144574462211, 6);
  sqcRYGate(q, -1.5319036206580996, 7);
  sqcRZGate(q, 3.113955775458944, 7);
  sqcRYGate(q, -0.8447061091344761, 8);
  sqcRZGate(q, 1.3969080652772359, 8);
  sqcRYGate(q, 1.4141282387685834, 9);
  sqcRZGate(q, 3.0632003087537685, 9);
  sqcRYGate(q, -0.3338705083537137, 10);
  sqcRZGate(q, 0.7845155964800385, 10);
  sqcRYGate(q, -2.9117913655105307, 11);
  sqcRZGate(q, -0.8120251694908474, 11);
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
  sqcRYGate(q, 3.0981467678984305, 0);
  sqcRZGate(q, 1.0664467209531932, 0);
  sqcRYGate(q, 0.10581191379069343, 1);
  sqcRZGate(q, 1.516692955193079, 1);
  sqcRYGate(q, 0.031822019139230585, 2);
  sqcRZGate(q, 1.8489580101438925, 2);
  sqcRYGate(q, 0.028419234004278857, 3);
  sqcRZGate(q, -2.0333065499941423, 3);
  sqcRYGate(q, -1.735282119537062, 4);
  sqcRZGate(q, 2.077585113766655, 4);
  sqcRYGate(q, 1.7329082856439442, 5);
  sqcRZGate(q, -2.0403895721375394, 5);
  sqcRYGate(q, 3.1408755743422345, 6);
  sqcRZGate(q, -2.2337466081616064, 6);
  sqcRYGate(q, -0.0007736789032033925, 7);
  sqcRZGate(q, 1.6191393354141725, 7);
  sqcRYGate(q, 0.005969675426524917, 8);
  sqcRZGate(q, -2.445151892909469, 8);
  sqcRYGate(q, -0.010980883270452324, 9);
  sqcRZGate(q, 2.6241644542623406, 9);
  sqcRYGate(q, 1.9563535811509425, 10);
  sqcRZGate(q, 0.22262201415433314, 10);
  sqcRYGate(q, 1.7056101791989111, 11);
  sqcRZGate(q, -0.2077897181617986, 11);
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
  sqcRYGate(q, 0.8537753082471178, 0);
  sqcRZGate(q, -2.8992692284567685, 0);
  sqcRYGate(q, -0.5375905618405055, 1);
  sqcRZGate(q, -1.428304923604565, 1);
  sqcRYGate(q, -2.2477056497627297, 2);
  sqcRZGate(q, -0.6838390587869767, 2);
  sqcRYGate(q, -0.6861307266574969, 3);
  sqcRZGate(q, 1.9325943115545154, 3);
  sqcRYGate(q, 0.8382810724947811, 4);
  sqcRZGate(q, -2.4426983984755126, 4);
  sqcRYGate(q, -2.4562015987507526, 5);
  sqcRZGate(q, 1.5738001486568647, 5);
  sqcRYGate(q, 2.776831233539036, 6);
  sqcRZGate(q, 3.0488177245594374, 6);
  sqcRYGate(q, 2.868345338471095, 7);
  sqcRZGate(q, 1.1252957656044027, 7);
  sqcRYGate(q, -1.3436785266358275, 8);
  sqcRZGate(q, -1.265387586798509, 8);
  sqcRYGate(q, 0.04174371078983253, 9);
  sqcRZGate(q, 2.562812349190765, 9);
  sqcRYGate(q, -2.399178476847272, 10);
  sqcRZGate(q, -2.7834360195597876, 10);
  sqcRYGate(q, 0.9588137730951991, 11);
  sqcRZGate(q, 2.686816868182423, 11);
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
  sqcRYGate(q, -0.013653099054587987, 0);
  sqcRZGate(q, 0.37849073913055875, 0);
  sqcRYGate(q, -0.03972853748955529, 1);
  sqcRZGate(q, 0.5491359101675677, 1);
  sqcRYGate(q, 0.0014807594567889384, 2);
  sqcRZGate(q, 0.41612843856574605, 2);
  sqcRYGate(q, -0.0013732897181331083, 3);
  sqcRZGate(q, -0.5132331563763621, 3);
  sqcRYGate(q, 0.0010436170546612026, 4);
  sqcRZGate(q, 1.460015412520252, 4);
  sqcRYGate(q, 3.1409055521192153, 5);
  sqcRZGate(q, 0.6216680593770265, 5);
  sqcRYGate(q, -0.001460560567922542, 6);
  sqcRZGate(q, 0.44964400842502467, 6);
  sqcRYGate(q, 3.1414303589722676, 7);
  sqcRZGate(q, -2.5514379789533392, 7);
  sqcRYGate(q, 3.1314518225091654, 8);
  sqcRZGate(q, -0.7469149341421444, 8);
  sqcRYGate(q, -3.131602743999925, 9);
  sqcRZGate(q, 0.32245796166712726, 9);
  sqcRYGate(q, -2.709517351708682, 10);
  sqcRZGate(q, -1.9792656802971444, 10);
  sqcRYGate(q, 1.1535467351330002, 11);
  sqcRZGate(q, 0.4364721645652248, 11);
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
  sqcRYGate(q, -2.434727598234482, 0);
  sqcRZGate(q, 0.5239203711111688, 0);
  sqcRYGate(q, -2.9422736701039818, 1);
  sqcRZGate(q, -1.3317824294024958, 1);
  sqcRYGate(q, -0.5176561887115008, 2);
  sqcRZGate(q, -2.741936022561428, 2);
  sqcRYGate(q, 1.4081085376339966, 3);
  sqcRZGate(q, 1.1630842983430245, 3);
  sqcRYGate(q, -1.7488716244541507, 4);
  sqcRZGate(q, -2.3782594151381224, 4);
  sqcRYGate(q, 0.7908922764798216, 5);
  sqcRZGate(q, -1.256909030054915, 5);
  sqcRYGate(q, -0.3070456662276527, 6);
  sqcRZGate(q, -1.243774671645938, 6);
  sqcRYGate(q, 2.321682433290748, 7);
  sqcRZGate(q, 1.6319795533742194, 7);
  sqcRYGate(q, -1.5029791704569166, 8);
  sqcRZGate(q, 1.7329767618709262, 8);
  sqcRYGate(q, 1.958451072940087, 9);
  sqcRZGate(q, -1.383693420943671, 9);
  sqcRYGate(q, 2.9453775662590127, 10);
  sqcRZGate(q, 1.6590097538339101, 10);
  sqcRYGate(q, 3.092181237892882, 11);
  sqcRZGate(q, -2.695388832526638, 11);
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
  sqcRYGate(q, 1.5811758955308568, 0);
  sqcRZGate(q, 1.6187151552625627, 0);
  sqcRYGate(q, -3.08217473101863, 1);
  sqcRZGate(q, -0.17131234462988132, 1);
  sqcRYGate(q, 0.002654591772262904, 2);
  sqcRZGate(q, 0.9769764074126385, 2);
  sqcRYGate(q, 0.004130087967444397, 3);
  sqcRZGate(q, 1.8505964866283173, 3);
  sqcRYGate(q, 3.14078352096188, 4);
  sqcRZGate(q, 1.1454601609492425, 4);
  sqcRYGate(q, -2.2502491527909282e-05, 5);
  sqcRZGate(q, -0.8181665838300302, 5);
  sqcRYGate(q, 2.565015883814365e-05, 6);
  sqcRZGate(q, 3.0156438671422663, 6);
  sqcRYGate(q, -3.1410990382112733, 7);
  sqcRZGate(q, 1.3801424628620644, 7);
  sqcRYGate(q, 0.005028589015960705, 8);
  sqcRZGate(q, 1.5346465045278816, 8);
  sqcRYGate(q, 0.004058546309126498, 9);
  sqcRZGate(q, -1.5010149411843505, 9);
  sqcRYGate(q, 1.419408792266263, 10);
  sqcRZGate(q, 1.0171788959254522, 10);
  sqcRYGate(q, 1.388315995278634, 11);
  sqcRZGate(q, 0.7355158101623207, 11);
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
  sqcRYGate(q, 1.2724555296801083, 0);
  sqcRZGate(q, 0.9725225409647901, 0);
  sqcRYGate(q, -2.3251985873863927, 1);
  sqcRZGate(q, 1.658485222054858, 1);
  sqcRYGate(q, -1.3388002036436477, 2);
  sqcRZGate(q, -1.9827045732686464, 2);
  sqcRYGate(q, 2.7752946548891058, 3);
  sqcRZGate(q, 1.0630320145957814, 3);
  sqcRYGate(q, -1.3411038206605115, 4);
  sqcRZGate(q, 3.02480234766837, 4);
  sqcRYGate(q, -2.0154000778267225, 5);
  sqcRZGate(q, -1.3725733845703294, 5);
  sqcRYGate(q, -3.001146104117084, 6);
  sqcRZGate(q, -3.10391476423706, 6);
  sqcRYGate(q, -0.5875047915599705, 7);
  sqcRZGate(q, 2.8801233056827154, 7);
  sqcRYGate(q, 0.9122413953927708, 8);
  sqcRZGate(q, 1.9711584095968313, 8);
  sqcRYGate(q, -1.752967322673414, 9);
  sqcRZGate(q, 1.8703275615002448, 9);
  sqcRYGate(q, -1.0525891914506547, 10);
  sqcRZGate(q, 1.3114301470433443, 10);
  sqcRYGate(q, -0.7740831841591724, 11);
  sqcRZGate(q, 3.134620350154258, 11);
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
  sqcRYGate(q, -0.6841313973158057, 0);
  sqcRZGate(q, 1.933834201295482, 0);
  sqcRYGate(q, -1.8412013667766656, 1);
  sqcRZGate(q, -2.036385815356593, 1);
  sqcRYGate(q, 3.0961154059008025, 2);
  sqcRZGate(q, -1.1945356473169935, 2);
  sqcRYGate(q, 0.0018498189488100891, 3);
  sqcRZGate(q, 0.2467327012964793, 3);
  sqcRYGate(q, -3.1253735522590658, 4);
  sqcRZGate(q, 1.977153045184191, 4);
  sqcRYGate(q, 3.1389745490634056, 5);
  sqcRZGate(q, 2.2864047968269947, 5);
  sqcRYGate(q, 0.020183940476150575, 6);
  sqcRZGate(q, -1.0609047002844068, 6);
  sqcRYGate(q, -0.02138875271447075, 7);
  sqcRZGate(q, 1.0006027040569743, 7);
  sqcRYGate(q, -0.1599603158591476, 8);
  sqcRZGate(q, -2.8032796420521864, 8);
  sqcRYGate(q, 1.5626120715335636, 9);
  sqcRZGate(q, 2.0690891066279136, 9);
  sqcRYGate(q, 1.679809479261536, 10);
  sqcRZGate(q, 2.1788352970799645, 10);
  sqcRYGate(q, 0.09303377910080783, 11);
  sqcRZGate(q, 0.0037846570996284967, 11);
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
  sqcRYGate(q, -1.2923493167826416, 0);
  sqcRZGate(q, 1.6030919179092558, 0);
  sqcRYGate(q, 2.9301648696536353, 1);
  sqcRZGate(q, 1.43349689698651, 1);
  sqcRYGate(q, -0.6722852061070473, 2);
  sqcRZGate(q, -3.0329207047219033, 2);
  sqcRYGate(q, -2.471726543803834, 3);
  sqcRZGate(q, -2.9650586173962217, 3);
  sqcRYGate(q, 3.0946868954310456, 4);
  sqcRZGate(q, -2.4880217530655573, 4);
  sqcRYGate(q, -0.7200321099699737, 5);
  sqcRZGate(q, -0.9287364887607922, 5);
  sqcRYGate(q, -3.1197054137868463, 6);
  sqcRZGate(q, -2.342293229281931, 6);
  sqcRYGate(q, 3.1214965087711626, 7);
  sqcRZGate(q, -0.7965951428640565, 7);
  sqcRYGate(q, 1.9080434811656675, 8);
  sqcRZGate(q, 0.6341009769284061, 8);
  sqcRYGate(q, -0.4505358044625316, 9);
  sqcRZGate(q, -1.6993788416843012, 9);
  sqcRYGate(q, 0.9196088076421094, 10);
  sqcRZGate(q, 0.3717586929692809, 10);
  sqcRYGate(q, 0.6593993888397547, 11);
  sqcRZGate(q, -0.5984622609414988, 11);
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
  sqcRYGate(q, 1.6705071990932598, 0);
  sqcRZGate(q, -2.653908020679746, 0);
  sqcRYGate(q, 0.897432402796162, 1);
  sqcRZGate(q, -1.3783442332819034, 1);
  sqcRYGate(q, 2.8630755291811325, 2);
  sqcRZGate(q, 2.4277789469692936, 2);
  sqcRYGate(q, 0.2886582540283982, 3);
  sqcRZGate(q, 0.5946854679080148, 3);
  sqcRYGate(q, -0.0485656822376561, 4);
  sqcRZGate(q, 1.968437997064985, 4);
  sqcRYGate(q, 0.04873779841542983, 5);
  sqcRZGate(q, 0.9748514362130997, 5);
  sqcRYGate(q, -0.09056428528938194, 6);
  sqcRZGate(q, 0.7741307348547557, 6);
  sqcRYGate(q, 3.0554898850606884, 7);
  sqcRZGate(q, -2.3901878360469992, 7);
  sqcRYGate(q, -1.9116458958572187, 8);
  sqcRZGate(q, 3.066599171097106, 8);
  sqcRYGate(q, 0.5151376120697337, 9);
  sqcRZGate(q, 2.4781195524791433, 9);
  sqcRYGate(q, -3.1227947382941617, 10);
  sqcRZGate(q, 2.817828618661495, 10);
  sqcRYGate(q, -3.0930969320777795, 11);
  sqcRZGate(q, 1.2505274470559637, 11);
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
  sqcRYGate(q, -0.8185891792997791, 0);
  sqcRZGate(q, 1.3812643918036853, 0);
  sqcRYGate(q, 0.11918682388376833, 1);
  sqcRZGate(q, -0.3685382276407108, 1);
  sqcRYGate(q, 2.0632402931920852, 2);
  sqcRZGate(q, 2.4260779396373713, 2);
  sqcRYGate(q, 1.0571469924056547, 3);
  sqcRZGate(q, 2.097185537687339, 3);
  sqcRYGate(q, 0.30258136442920325, 4);
  sqcRZGate(q, 1.179260573035915, 4);
  sqcRYGate(q, -0.2602308796541162, 5);
  sqcRZGate(q, -1.269595168811541, 5);
  sqcRYGate(q, -1.5508388031828406, 6);
  sqcRZGate(q, -1.6699210907767323, 6);
  sqcRYGate(q, -1.547612628898886, 7);
  sqcRZGate(q, 3.0742580172481717, 7);
  sqcRYGate(q, -2.482719490280535, 8);
  sqcRZGate(q, -1.7806555521353518, 8);
  sqcRYGate(q, -2.413033835670892, 9);
  sqcRZGate(q, 1.8384916196659153, 9);
  sqcRYGate(q, 1.512444311616976, 10);
  sqcRZGate(q, 2.9214727412042, 10);
  sqcRYGate(q, -2.4081735336555474, 11);
  sqcRZGate(q, -1.4371424210000139, 11);
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
  sqcRYGate(q, -0.396863179710639, 0);
  sqcRZGate(q, -2.4771705264925816, 0);
  sqcRYGate(q, -1.3594685921116658, 1);
  sqcRZGate(q, -1.3272489527282265, 1);
  sqcRYGate(q, -0.002034917156806585, 2);
  sqcRZGate(q, -0.4431695926388776, 2);
  sqcRYGate(q, 0.01529999775470525, 3);
  sqcRZGate(q, 0.213807845004383, 3);
  sqcRYGate(q, -2.440216569697772, 4);
  sqcRZGate(q, -1.3159860028116483, 4);
  sqcRYGate(q, -0.9198473198964038, 5);
  sqcRZGate(q, -0.8682670530509267, 5);
  sqcRYGate(q, -3.120620857853027, 6);
  sqcRZGate(q, -1.1233525501646504, 6);
  sqcRYGate(q, -3.0968864680732837, 7);
  sqcRZGate(q, 0.4126744569759006, 7);
  sqcRYGate(q, 1.5545507221149562, 8);
  sqcRZGate(q, -0.7695609856573105, 8);
  sqcRYGate(q, 1.5808380988433184, 9);
  sqcRZGate(q, 2.6821871942625894, 9);
  sqcRYGate(q, -2.0652614630853305, 10);
  sqcRZGate(q, 1.7506109277888495, 10);
  sqcRYGate(q, -2.086568807504812, 11);
  sqcRZGate(q, -0.8147488226353133, 11);
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
  sqcRYGate(q, 2.418859193261127, 0);
  sqcRZGate(q, 1.188568068233818, 0);
  sqcRYGate(q, -2.6743198795379017, 1);
  sqcRZGate(q, -1.7963019741597501, 1);
  sqcRYGate(q, 1.9655696660903326, 2);
  sqcRZGate(q, -1.8916155061326771, 2);
  sqcRYGate(q, -2.005064162778587, 3);
  sqcRZGate(q, -0.14072803094909858, 3);
  sqcRYGate(q, -1.1410403989297837, 4);
  sqcRZGate(q, 0.5352630900794724, 4);
  sqcRYGate(q, -1.2904192489614879, 5);
  sqcRZGate(q, 3.017280550106583, 5);
  sqcRYGate(q, -3.1414928698689755, 6);
  sqcRZGate(q, 0.1984761688767316, 6);
  sqcRYGate(q, -0.004521234314288675, 7);
  sqcRZGate(q, -1.620051154299058, 7);
  sqcRYGate(q, -1.436027884672934, 8);
  sqcRZGate(q, 1.8346305137747634, 8);
  sqcRYGate(q, 0.8805400040690827, 9);
  sqcRZGate(q, -2.6886806770452685, 9);
  sqcRYGate(q, 3.1120354818243054, 10);
  sqcRZGate(q, -2.3781528545226958, 10);
  sqcRYGate(q, 0.03503747351068587, 11);
  sqcRZGate(q, -0.1289543609067394, 11);
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
  sqcRYGate(q, -1.8176928221830142, 0);
  sqcRZGate(q, -2.962176524428611, 0);
  sqcRYGate(q, -1.8354810089740194, 1);
  sqcRZGate(q, 0.3448132847529797, 1);
  sqcRYGate(q, -3.118995904925749, 2);
  sqcRZGate(q, 2.5058836658605586, 2);
  sqcRYGate(q, 0.052171158014665764, 3);
  sqcRZGate(q, 0.29914301362130225, 3);
  sqcRYGate(q, -0.035460280695718716, 4);
  sqcRZGate(q, -0.8241606298470461, 4);
  sqcRYGate(q, -0.1039047541581466, 5);
  sqcRZGate(q, 2.894568216461462, 5);
  sqcRYGate(q, 3.090359542379025, 6);
  sqcRZGate(q, 1.537969929412286, 6);
  sqcRYGate(q, -3.1398120044432365, 7);
  sqcRZGate(q, 2.2943396482301925, 7);
  sqcRYGate(q, 1.3829309105586474, 8);
  sqcRZGate(q, 1.4268471970852534, 8);
  sqcRYGate(q, -2.0409204422891376, 9);
  sqcRZGate(q, 2.688022469116767, 9);
  sqcRYGate(q, 1.6490320634153839, 10);
  sqcRZGate(q, 2.9327479273130197, 10);
  sqcRYGate(q, 2.776216697219735, 11);
  sqcRZGate(q, 2.9934204837469016, 11);
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
  sqcRYGate(q, -3.044181093977013, 0);
  sqcRZGate(q, 2.1761323257949208, 0);
  sqcRYGate(q, 3.0593891641352458, 1);
  sqcRZGate(q, 1.9473848547377464, 1);
  sqcRYGate(q, 1.4602319271666762, 2);
  sqcRZGate(q, 1.7710028589949636, 2);
  sqcRYGate(q, 1.334302277781197, 3);
  sqcRZGate(q, -1.3551262482810733, 3);
  sqcRYGate(q, 1.5706084560536908, 4);
  sqcRZGate(q, 0.47333977752166856, 4);
  sqcRYGate(q, 1.4999398590201358, 5);
  sqcRZGate(q, -0.768915214997442, 5);
  sqcRYGate(q, 0.08908485817591405, 6);
  sqcRZGate(q, 0.753881414708462, 6);
  sqcRYGate(q, 3.045619996278907, 7);
  sqcRZGate(q, 2.0307186469391842, 7);
  sqcRYGate(q, 3.138760536033499, 8);
  sqcRZGate(q, -1.1676276720725474, 8);
  sqcRYGate(q, 0.0032387165132613405, 9);
  sqcRZGate(q, 2.5266104137312166, 9);
  sqcRYGate(q, -1.8902094083973675, 10);
  sqcRZGate(q, 1.854100489788137, 10);
  sqcRYGate(q, 0.6402134878768565, 11);
  sqcRZGate(q, 3.0932737545398457, 11);
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
  sqcRYGate(q, 0.08219812504446633, 0);
  sqcRZGate(q, -1.5300911568661761, 0);
  sqcRYGate(q, 3.077600750942575, 1);
  sqcRZGate(q, 1.1556665826577452, 1);
  sqcRYGate(q, -1.7382343356998118, 2);
  sqcRZGate(q, -1.4762801938944818, 2);
  sqcRYGate(q, 0.4610791386445927, 3);
  sqcRZGate(q, -1.3573148291768662, 3);
  sqcRYGate(q, -0.04737097465171687, 4);
  sqcRZGate(q, 0.26393524604900487, 4);
  sqcRYGate(q, -3.1320897397606404, 5);
  sqcRZGate(q, -1.99170150785179, 5);
  sqcRYGate(q, 1.7001588898370121, 6);
  sqcRZGate(q, 1.0773306337478403, 6);
  sqcRYGate(q, -1.9036792622259338, 7);
  sqcRZGate(q, -2.9556069922868264, 7);
  sqcRYGate(q, -3.138767581991448, 8);
  sqcRZGate(q, 0.6993607024354496, 8);
  sqcRYGate(q, 3.0781106318563722, 9);
  sqcRZGate(q, -0.9510160960408545, 9);
  sqcRYGate(q, 0.015868949738822913, 10);
  sqcRZGate(q, -1.7583141262039426, 10);
  sqcRYGate(q, 0.703069223869786, 11);
  sqcRZGate(q, -0.10316580084265511, 11);
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
  sqcRYGate(q, 0.24764263376294685, 0);
  sqcRZGate(q, -0.9878042399926833, 0);
  sqcRYGate(q, -2.887492824076648, 1);
  sqcRZGate(q, 2.2411855612074887, 1);
  sqcRYGate(q, -1.5435340296565956, 2);
  sqcRZGate(q, -3.036657048543844, 2);
  sqcRYGate(q, 1.6298704425917032, 3);
  sqcRZGate(q, -2.055448723032867, 3);
  sqcRYGate(q, -0.0011662518122609374, 4);
  sqcRZGate(q, 0.4921559677567765, 4);
  sqcRYGate(q, -3.1401190571828885, 5);
  sqcRZGate(q, -1.141472461923641, 5);
  sqcRYGate(q, 0.0040025719751835, 6);
  sqcRZGate(q, 1.9953383373468196, 6);
  sqcRYGate(q, 3.1360879993524127, 7);
  sqcRZGate(q, 2.0003210417545594, 7);
  sqcRYGate(q, -3.1414636014165387, 8);
  sqcRZGate(q, 2.4614525402594865, 8);
  sqcRYGate(q, 3.1405113298293768, 9);
  sqcRZGate(q, 0.07408927400120854, 9);
  sqcRYGate(q, -0.9976203196270752, 10);
  sqcRZGate(q, -0.36539247968078653, 10);
  sqcRYGate(q, -1.2318576090872035, 11);
  sqcRZGate(q, -3.0948201317929436, 11);
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
  sqcRYGate(q, -2.812385012001413, 0);
  sqcRZGate(q, -1.2930478577895492, 0);
  sqcRYGate(q, 2.8195663651909224, 1);
  sqcRZGate(q, 1.9219754342654576, 1);
  sqcRYGate(q, -1.0381890730733705, 2);
  sqcRZGate(q, -2.0329618000326444, 2);
  sqcRYGate(q, 0.2832093097705304, 3);
  sqcRZGate(q, -2.027764682696599, 3);
  sqcRYGate(q, -2.530440893240692, 4);
  sqcRZGate(q, 2.7838705671199655, 4);
  sqcRYGate(q, 0.6152467836976664, 5);
  sqcRZGate(q, 2.8355701838242915, 5);
  sqcRYGate(q, -0.2652081794334853, 6);
  sqcRZGate(q, 0.5746856361832579, 6);
  sqcRYGate(q, 0.3150920102086644, 7);
  sqcRZGate(q, -1.1333741270645397, 7);
  sqcRYGate(q, 0.041216005543060596, 8);
  sqcRZGate(q, -0.2307565606853785, 8);
  sqcRYGate(q, 0.07821526479392224, 9);
  sqcRZGate(q, 0.5856188610649087, 9);
  sqcRYGate(q, 1.5471933566573675, 10);
  sqcRZGate(q, 3.022584918210684, 10);
  sqcRYGate(q, 0.07395644910733701, 11);
  sqcRZGate(q, -1.5146911449790061, 11);

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
