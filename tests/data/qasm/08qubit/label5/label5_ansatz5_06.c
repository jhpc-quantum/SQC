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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.680980556454444, 0);
  sqcRYGate(q, 2.3231327203899705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4515747320925714, 0);
  sqcRYGate(q, -1.5859023309586193, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.512744610689067, 2);
  sqcRYGate(q, 1.1837585903297128, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6593519064192455, 2);
  sqcRYGate(q, 1.7866933494561084, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1408705218014803, 4);
  sqcRYGate(q, -1.5799811928735452, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.537729045891189, 4);
  sqcRYGate(q, 1.0626394769245238, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0549745943114663, 6);
  sqcRYGate(q, -2.3929591902030536, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.26533956274474146, 6);
  sqcRYGate(q, 1.0888441836039071, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4736635693389504, 1);
  sqcRYGate(q, -1.5653619040522386, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.22827606984688306, 1);
  sqcRYGate(q, -1.1896950990876483, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1762384283598264, 3);
  sqcRYGate(q, 1.0478225606865585, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.32343584562604, 3);
  sqcRYGate(q, -1.0371257284590243, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5130030635117784, 5);
  sqcRYGate(q, 0.008964585536471503, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0148730263659616, 5);
  sqcRYGate(q, 1.6852173254915266, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9130391132430682, 0);
  sqcRYGate(q, 2.902889055259239, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8374570845511847, 0);
  sqcRYGate(q, -1.983290587331652, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3198257623691705, 2);
  sqcRYGate(q, -1.7666731411822238, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1034411834135058, 2);
  sqcRYGate(q, 2.1885294242523377, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.292889297514073, 4);
  sqcRYGate(q, 1.5606320750879945, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.434929973310977, 4);
  sqcRYGate(q, 1.9952626031452827, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3556753991586232, 6);
  sqcRYGate(q, 1.9917700985838467, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.18919818785228681, 6);
  sqcRYGate(q, 1.2459369800621864, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2902648624905195, 1);
  sqcRYGate(q, 0.8122077456257517, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.285211552475896, 1);
  sqcRYGate(q, -1.2053424308351375, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.674733035582924, 3);
  sqcRYGate(q, 2.476231964711332, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4402469011149028, 3);
  sqcRYGate(q, 1.1551465256531805, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.268295701379487, 5);
  sqcRYGate(q, 0.20912695375109536, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2001925217557907, 5);
  sqcRYGate(q, -2.2317072246871623, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.141916396138028, 0);
  sqcRYGate(q, -2.9132478175194514, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20698699212812596, 0);
  sqcRYGate(q, 1.5331792542007268, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2397190427027267, 2);
  sqcRYGate(q, -1.579719947515984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3556785194141923, 2);
  sqcRYGate(q, -1.9984092370921547, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6640662643266277, 4);
  sqcRYGate(q, -2.573244696503201, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1394601613047186, 4);
  sqcRYGate(q, 1.012036186054182, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.794360325088662, 6);
  sqcRYGate(q, 3.0009601863975877, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5200812852885774, 6);
  sqcRYGate(q, -1.4582033663289797, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5970230413039701, 1);
  sqcRYGate(q, 0.7791271674828888, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.901197329388789, 1);
  sqcRYGate(q, -2.1251786320747144, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5409413311980883, 3);
  sqcRYGate(q, 2.000458283154501, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4360746037329513, 3);
  sqcRYGate(q, -0.1824962463560781, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.075824849212056, 5);
  sqcRYGate(q, -0.7651315640884301, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.436486317985786, 5);
  sqcRYGate(q, -2.402020473547234, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4832917279544695, 0);
  sqcRYGate(q, 1.38456883373433, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.13526119370492595, 0);
  sqcRYGate(q, 1.8795806849196537, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.766098393563387, 2);
  sqcRYGate(q, -2.1456516786303683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8187690298318695, 2);
  sqcRYGate(q, -0.8255440087352611, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7327482068322668, 4);
  sqcRYGate(q, -1.2239495922927093, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.239386418972928, 4);
  sqcRYGate(q, 1.7830104543804275, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4325201969246768, 6);
  sqcRYGate(q, -0.5453012791382896, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.254676590610333, 6);
  sqcRYGate(q, 0.23993344866419414, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.09159878305621973, 1);
  sqcRYGate(q, -2.1358278782564675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3357241599279819, 1);
  sqcRYGate(q, -2.9121376680214848, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.871869967514808, 3);
  sqcRYGate(q, 0.23063345982551192, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0685604779354856, 3);
  sqcRYGate(q, 0.42014783597644967, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5879591095464485, 5);
  sqcRYGate(q, -1.8980895281055186, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6867649253377657, 5);
  sqcRYGate(q, -1.0763502273951122, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.548451650708495, 0);
  sqcRYGate(q, 0.7953165080875333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3535380614237689, 0);
  sqcRYGate(q, 1.5876717529593378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1225256479863006, 2);
  sqcRYGate(q, 2.0055473224269393, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4375532707542833, 2);
  sqcRYGate(q, -2.1920386141661536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4193059950322358, 4);
  sqcRYGate(q, -1.476901007983762, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6728834268540433, 4);
  sqcRYGate(q, 1.7711821000993933, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9683513309689027, 6);
  sqcRYGate(q, 0.5699804125865809, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5514279424525342, 6);
  sqcRYGate(q, -2.096339507795931, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3358022812641486, 1);
  sqcRYGate(q, 0.5327995131821615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.37246770875658, 1);
  sqcRYGate(q, -2.2119208173392826, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.316611664094876, 3);
  sqcRYGate(q, 0.8275116048343945, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.28194346885000726, 3);
  sqcRYGate(q, 0.3871769013194922, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.14382548340556944, 5);
  sqcRYGate(q, 0.4923202417463629, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3628647561704463, 5);
  sqcRYGate(q, -2.373352167824628, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3415998192989402, 0);
  sqcRYGate(q, 0.4057054893016955, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7210530141805505, 0);
  sqcRYGate(q, 0.5580415471390622, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4541157161825608, 2);
  sqcRYGate(q, 1.3318426352972539, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9834716786434177, 2);
  sqcRYGate(q, 1.017634759924617, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3573496292977237, 4);
  sqcRYGate(q, 1.3912646631318284, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.38766366385180356, 4);
  sqcRYGate(q, -2.7708513747496557, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.434016742159131, 6);
  sqcRYGate(q, -2.652331957505407, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7640123617372252, 6);
  sqcRYGate(q, -1.9984131429267682, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2990092358740002, 1);
  sqcRYGate(q, -0.35983522664466633, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4539927351602544, 1);
  sqcRYGate(q, -1.4007414338292923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7131620192459467, 3);
  sqcRYGate(q, -2.4969824796102587, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2301756906144865, 3);
  sqcRYGate(q, 1.1513100591853365, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8091087477326973, 5);
  sqcRYGate(q, -2.20289752519557, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.63002789263271, 5);
  sqcRYGate(q, 2.0064596690355767, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6020724748893387, 0);
  sqcRYGate(q, 2.1895419545019403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.480842623434208, 0);
  sqcRYGate(q, 1.4988294482836109, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7412747283116132, 2);
  sqcRYGate(q, 2.100960916839334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.346551827632074, 2);
  sqcRYGate(q, -2.10463260653781, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.420262168561019, 4);
  sqcRYGate(q, -2.845667436421339, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.47881500807578714, 4);
  sqcRYGate(q, -0.486375855677676, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9929067025797709, 6);
  sqcRYGate(q, -2.561388106802686, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5231835401748012, 6);
  sqcRYGate(q, 0.5870104689303735, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0531259546660356, 1);
  sqcRYGate(q, -2.7312041382363246, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.39095796613991673, 1);
  sqcRYGate(q, -1.5957256190074194, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7014681094653357, 3);
  sqcRYGate(q, -0.25541100592531407, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.319265495696933, 3);
  sqcRYGate(q, 2.620776465497706, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.57920916296194, 5);
  sqcRYGate(q, -0.43451004544924104, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8271252286585168, 5);
  sqcRYGate(q, 1.7591128203167439, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5141708384410866, 0);
  sqcRYGate(q, 1.5064442512297918, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0917725165372039, 0);
  sqcRYGate(q, 0.2684865365748905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.06315726456301834, 2);
  sqcRYGate(q, 1.8676273128784615, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.214512899330005, 2);
  sqcRYGate(q, 0.8952487264935396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0030925137131543, 4);
  sqcRYGate(q, 0.018465049651910048, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4412186460749288, 4);
  sqcRYGate(q, -2.4818055641762906, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.096111933134047, 6);
  sqcRYGate(q, -1.778666678297971, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.853177695458444, 6);
  sqcRYGate(q, -2.87019707560624, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1383944173189358, 1);
  sqcRYGate(q, -2.7347076428724035, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1543710394593893, 1);
  sqcRYGate(q, -2.475113940672778, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.316106039799599, 3);
  sqcRYGate(q, -0.4821679650544837, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.811790241377507, 3);
  sqcRYGate(q, 0.31594110673525133, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.720726431078878, 5);
  sqcRYGate(q, -2.675092245551646, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6631048172264677, 5);
  sqcRYGate(q, 2.2391558762619703, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.917626673431088, 0);
  sqcRYGate(q, -1.6983046508546458, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0346961565593205, 0);
  sqcRYGate(q, -2.47340844509638, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.00188749014505, 2);
  sqcRYGate(q, 2.8471920820419556, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2360642599307106, 2);
  sqcRYGate(q, 2.3038023611495597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6560419973084786, 4);
  sqcRYGate(q, 1.6598878277026687, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6226400003855916, 4);
  sqcRYGate(q, 2.7744705029150993, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9668744980709336, 6);
  sqcRYGate(q, 1.6279223262037474, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3630500569282778, 6);
  sqcRYGate(q, 2.824171591318525, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0960302974581833, 1);
  sqcRYGate(q, 0.9008968110067028, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9546839825582114, 1);
  sqcRYGate(q, 1.6311067957221186, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3779777806527647, 3);
  sqcRYGate(q, 2.4371516823536066, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5424498455443638, 3);
  sqcRYGate(q, -2.7684760030542286, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1155328345983966, 5);
  sqcRYGate(q, -1.6059455016389164, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6126500951772815, 5);
  sqcRYGate(q, 0.8899141211672504, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8761687279935934, 0);
  sqcRYGate(q, 2.5421985145048582, 1);
  sqcRYGate(q, -2.41070508085737, 2);
  sqcRYGate(q, -1.588263951536578, 3);
  sqcRYGate(q, 0.20514417371495083, 4);
  sqcRYGate(q, 1.0696296162076795, 5);
  sqcRYGate(q, 1.4308559851201386, 6);
  sqcRYGate(q, -0.519616742039714, 7);

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
