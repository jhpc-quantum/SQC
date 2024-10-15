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

  sqcRYGate(q, -0.4991672500947027, 0);
  sqcRYGate(q, 2.9340278363096557, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0893042082853667, 0);
  sqcRYGate(q, 1.454861951186591, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7795803003858923, 2);
  sqcRYGate(q, 2.259673410089163, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2248971963471584, 2);
  sqcRYGate(q, -2.2398511281971225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7445792542614518, 1);
  sqcRYGate(q, -0.6543275552659042, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5533330932378986, 1);
  sqcRYGate(q, 1.2605697393567796, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0649733196101714, 0);
  sqcRYGate(q, 0.5066155474868196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6058075604602262, 0);
  sqcRYGate(q, -0.5359653115368413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6223083037269448, 2);
  sqcRYGate(q, 1.281332298695224, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8809972237781313, 2);
  sqcRYGate(q, 0.6348106102711383, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.812992585268193, 1);
  sqcRYGate(q, -0.9787831041444776, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.131811887450633, 1);
  sqcRYGate(q, -1.6367133398728049, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9474943450429331, 0);
  sqcRYGate(q, 2.44298953500176, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9484529464300118, 0);
  sqcRYGate(q, 0.5846098581333452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2913261111665477, 2);
  sqcRYGate(q, 1.0256247605655726, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8543463362294075, 2);
  sqcRYGate(q, 1.084577288549328, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9042233115257448, 1);
  sqcRYGate(q, -1.3374185983765816, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3733120402735435, 1);
  sqcRYGate(q, -3.0156667717807943, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2128607588535294, 0);
  sqcRYGate(q, -2.2573714849649424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6300817822748828, 0);
  sqcRYGate(q, 0.912040426785909, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.328089337291069, 2);
  sqcRYGate(q, -3.0266900532143715, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9057409536862551, 2);
  sqcRYGate(q, 2.9658773653161985, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2941676826327355, 1);
  sqcRYGate(q, -2.0269603215017717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.984759687198738, 1);
  sqcRYGate(q, -0.47434656499440475, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6253306231673212, 0);
  sqcRYGate(q, 2.339683077124498, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.89746376471441, 0);
  sqcRYGate(q, -2.422037089791622, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5898060661327484, 2);
  sqcRYGate(q, 2.2414844850039994, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.34588866676965324, 2);
  sqcRYGate(q, -0.7260234318057881, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.088289033761482, 1);
  sqcRYGate(q, -1.1255863651576807, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8460273021097204, 1);
  sqcRYGate(q, -1.160601406752031, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.842846232754077, 0);
  sqcRYGate(q, -0.7308639728572333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3977577724083085, 0);
  sqcRYGate(q, -1.9697101267304997, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1602280517869152, 2);
  sqcRYGate(q, -0.6748151835413907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.63686359299176, 2);
  sqcRYGate(q, 1.4334604457429394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1154825480310406, 1);
  sqcRYGate(q, -2.143069853727976, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4347492521574141, 1);
  sqcRYGate(q, 1.8371272926958293, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.513693828026663, 0);
  sqcRYGate(q, -1.6412507633510245, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9831399585477972, 0);
  sqcRYGate(q, 0.47686455767468444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.35529185111148637, 2);
  sqcRYGate(q, -2.1573908432870015, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8437793150522381, 2);
  sqcRYGate(q, -3.1013516030223394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8160724053084143, 1);
  sqcRYGate(q, 2.5870932051919917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7729971325091611, 1);
  sqcRYGate(q, 0.7462718422571504, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1415840544210054, 0);
  sqcRYGate(q, -2.969978126691644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6603729432775998, 0);
  sqcRYGate(q, 2.732780778212795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5512582484187067, 2);
  sqcRYGate(q, -2.7084223582166276, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8101300498263144, 2);
  sqcRYGate(q, 0.04135206563893848, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6774608364901002, 1);
  sqcRYGate(q, 1.1118918204521326, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5757731476455337, 1);
  sqcRYGate(q, -2.3420500777189295, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.213846467500715, 0);
  sqcRYGate(q, 1.9824619242024886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8824668638624207, 0);
  sqcRYGate(q, -1.470162681902269, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.228503932113707, 2);
  sqcRYGate(q, -2.85853004110952, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.32902368217076194, 2);
  sqcRYGate(q, 2.3269170216757877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.244995162868705, 1);
  sqcRYGate(q, 2.1088340065910316, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.911308491840586, 1);
  sqcRYGate(q, -1.5095359874827752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2797113825764859, 0);
  sqcRYGate(q, -0.8483370799552635, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4453053182926452, 0);
  sqcRYGate(q, 2.5338316549038544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0841601477518006, 2);
  sqcRYGate(q, 1.423792629183448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.36422687608054644, 2);
  sqcRYGate(q, 0.7181891344371145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.868424986056594, 1);
  sqcRYGate(q, 1.4386270014103393, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5388413582529357, 1);
  sqcRYGate(q, 0.744758634189643, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8555386286844455, 0);
  sqcRYGate(q, -1.7984175338071813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0019981904287083, 0);
  sqcRYGate(q, 2.6518270811739284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9699239454913107, 2);
  sqcRYGate(q, -2.988983786206795, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4818422053591402, 2);
  sqcRYGate(q, 2.0044542866257133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9184136758993917, 1);
  sqcRYGate(q, -2.412730302449288, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7196628732465564, 1);
  sqcRYGate(q, 0.16254267424344082, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8364605750918905, 0);
  sqcRYGate(q, -0.9661225333967601, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.39505314864364, 0);
  sqcRYGate(q, -0.32508498638365424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8815060106093728, 2);
  sqcRYGate(q, -2.373756286149907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22921615681905524, 2);
  sqcRYGate(q, 0.12671438837526594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5499041785652072, 1);
  sqcRYGate(q, 1.760382443222646, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3926523434984288, 1);
  sqcRYGate(q, 3.04711291211211, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9053438357754153, 0);
  sqcRYGate(q, -0.16993533933128338, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4613786730528515, 0);
  sqcRYGate(q, 1.7110216786848218, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9726780021104311, 2);
  sqcRYGate(q, 2.5873268591744054, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1045679186797654, 2);
  sqcRYGate(q, 2.0609692338233176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8186011015015495, 1);
  sqcRYGate(q, -0.9094512537891628, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6112466510542003, 1);
  sqcRYGate(q, -0.9825378540533549, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0777631197264288, 0);
  sqcRYGate(q, -2.030774043807952, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7669857894354983, 0);
  sqcRYGate(q, 1.7465704491577307, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1784878932275626, 2);
  sqcRYGate(q, 0.009044472637483203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.35467613463454534, 2);
  sqcRYGate(q, -1.5681566298469738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3400819879129982, 1);
  sqcRYGate(q, -0.24003728848436356, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2170291799323731, 1);
  sqcRYGate(q, 1.0434742280307674, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3686409545362355, 0);
  sqcRYGate(q, 2.146294182824132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.42557977117414497, 0);
  sqcRYGate(q, 2.024699121924322, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1907714616908427, 2);
  sqcRYGate(q, -0.2796287289540231, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1769542199212886, 2);
  sqcRYGate(q, -1.106715577643286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.587101026563506, 1);
  sqcRYGate(q, -0.8914557785422312, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.917926430025642, 1);
  sqcRYGate(q, 0.5768958980079782, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3595039578275037, 0);
  sqcRYGate(q, -1.743456266575179, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8063180480295075, 0);
  sqcRYGate(q, 0.770001103731869, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.130539100031781, 2);
  sqcRYGate(q, -2.2811947890598425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0947145923074952, 2);
  sqcRYGate(q, 1.547010434055263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8693424869516253, 1);
  sqcRYGate(q, -1.5625285455930644, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3907808890480338, 1);
  sqcRYGate(q, -1.4880976964734394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.122552847070037, 0);
  sqcRYGate(q, -2.893498095573652, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.16580362601314813, 0);
  sqcRYGate(q, -2.6423516898739825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6060191548294176, 2);
  sqcRYGate(q, -2.1007572737279334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.082286106638148, 2);
  sqcRYGate(q, -2.832795832655892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0184204697143397, 1);
  sqcRYGate(q, -0.5235525065592531, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4167986651111599, 1);
  sqcRYGate(q, 1.0019493331811002, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8222590880759997, 0);
  sqcRYGate(q, -1.4732064865244858, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8844196514075161, 0);
  sqcRYGate(q, -2.753333827831375, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3972559322281817, 2);
  sqcRYGate(q, -1.5466995556994219, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0159128493493768, 2);
  sqcRYGate(q, -1.3994236688497763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7416981842691532, 1);
  sqcRYGate(q, 1.0710677150888186, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.927349535740045, 1);
  sqcRYGate(q, -0.4745114284164825, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8050438319712088, 0);
  sqcRYGate(q, -2.9013674499748516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.768738809026126, 0);
  sqcRYGate(q, -1.4020734990965076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2280749998621339, 2);
  sqcRYGate(q, -0.35304357854694224, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6460680995097832, 2);
  sqcRYGate(q, 0.8805180985947043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8426416914867114, 1);
  sqcRYGate(q, -0.584342550771896, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.094857678638405, 1);
  sqcRYGate(q, -2.3949231808708014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1127204546885059, 0);
  sqcRYGate(q, 1.7102193212178332, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8850709061878136, 0);
  sqcRYGate(q, 2.5474984109700185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.18759733675518767, 2);
  sqcRYGate(q, 1.4628380535121055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.074035354647548, 2);
  sqcRYGate(q, -0.3164813127404168, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.011713387832418525, 1);
  sqcRYGate(q, 2.349043356996016, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7830001319073414, 1);
  sqcRYGate(q, 2.297880297681937, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6521428443929225, 0);
  sqcRYGate(q, -2.5307786713228464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0738262765579445, 0);
  sqcRYGate(q, 0.018640036763679646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6078778805716336, 2);
  sqcRYGate(q, -2.976371839357856, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4773855183433646, 2);
  sqcRYGate(q, 2.336124023641792, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8335521734678673, 1);
  sqcRYGate(q, 1.3541918338011465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.46749303687244304, 1);
  sqcRYGate(q, 2.7586827223942954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2092738935916687, 0);
  sqcRYGate(q, -0.7019702724259266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7601004576616024, 0);
  sqcRYGate(q, 2.8614804597527796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3780933051329525, 2);
  sqcRYGate(q, 0.23627044831499425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.48664155815948174, 2);
  sqcRYGate(q, 2.224621821970639, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4147096610777363, 1);
  sqcRYGate(q, -0.07627438114938341, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9124044811221674, 1);
  sqcRYGate(q, -0.24726989496898089, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5584484497391764, 0);
  sqcRYGate(q, -1.2425631094577856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1192044904785, 0);
  sqcRYGate(q, 1.7003607092158781, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5242246267839438, 2);
  sqcRYGate(q, -0.26624133858406385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.670977432954385, 2);
  sqcRYGate(q, 1.8744451097393402, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.483006027646541, 1);
  sqcRYGate(q, -1.7328048374907459, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9583501570080744, 1);
  sqcRYGate(q, -2.2266464398898664, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.69267103856515, 0);
  sqcRYGate(q, -0.7926646209308279, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5569130948471708, 0);
  sqcRYGate(q, -0.7460479949636545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.443945332032496, 2);
  sqcRYGate(q, 0.12780160078092173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0135866366588377, 2);
  sqcRYGate(q, -0.8494650622560527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1624451524332677, 1);
  sqcRYGate(q, -1.1802509830700736, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2513861792466715, 1);
  sqcRYGate(q, 0.4414530652161278, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2025711551501475, 0);
  sqcRYGate(q, -1.6316423483520142, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.684161513572402, 0);
  sqcRYGate(q, 1.6558038735852991, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.630968844905926, 2);
  sqcRYGate(q, -2.488145789188751, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4498807749590048, 2);
  sqcRYGate(q, -1.5579688739636663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.661426207104586, 1);
  sqcRYGate(q, 0.964707501895095, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1068810322954903, 1);
  sqcRYGate(q, 2.7469887085444022, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9923047054384986, 0);
  sqcRYGate(q, 0.05993864397654125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6389438976281596, 0);
  sqcRYGate(q, -0.5707033752259133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.149810026236474, 2);
  sqcRYGate(q, -1.790287097434343, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.99820730685978, 2);
  sqcRYGate(q, -2.7532391722569542, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.816871763098287, 1);
  sqcRYGate(q, -0.6227797411236402, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0513122599845843, 1);
  sqcRYGate(q, -2.089386799201262, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0332934439667705, 0);
  sqcRYGate(q, 1.9635848312329145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6351626728012452, 0);
  sqcRYGate(q, 2.9082520919611903, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8801131164466448, 2);
  sqcRYGate(q, 0.3930768950533494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07833972079748097, 2);
  sqcRYGate(q, 1.1827964846405619, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3303366777746521, 1);
  sqcRYGate(q, -2.9074882209920623, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.104278650115962, 1);
  sqcRYGate(q, 2.3891735509086605, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3838890896351987, 0);
  sqcRYGate(q, -0.9936973035861243, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6360942698668217, 0);
  sqcRYGate(q, 1.5356766169680933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.251573226262213, 2);
  sqcRYGate(q, -1.6919510534613347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4066823100455688, 2);
  sqcRYGate(q, -2.665047407258825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8110179246781888, 1);
  sqcRYGate(q, -2.4781736103043195, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.805041601985121, 1);
  sqcRYGate(q, 1.9083512188534257, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.604193854995005, 0);
  sqcRYGate(q, 1.2156023806634861, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4716068877427642, 0);
  sqcRYGate(q, -2.4523887972578526, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7664699217474729, 2);
  sqcRYGate(q, -3.036822830689621, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6041037143841335, 2);
  sqcRYGate(q, -1.0685270105037024, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0795195756336495, 1);
  sqcRYGate(q, 1.6972951595818477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7708958267895776, 1);
  sqcRYGate(q, 1.4302260998975038, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3678570954265088, 0);
  sqcRYGate(q, -0.19147342864053576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.257253324269039, 0);
  sqcRYGate(q, 3.0780791229528317, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.319751650169744, 2);
  sqcRYGate(q, 2.674814786919255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6106629615585575, 2);
  sqcRYGate(q, 0.2725890708160845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.43031979458985187, 1);
  sqcRYGate(q, -0.8105522537372805, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.533728917330583, 1);
  sqcRYGate(q, 1.8343571679769486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8761459659476064, 0);
  sqcRYGate(q, -2.1628400575212527, 1);
  sqcRYGate(q, 1.97750602279402, 2);
  sqcRYGate(q, -3.0429831658464885, 3);

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
