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

  sqcRYGate(q, 1.602610907753319, 0);
  sqcRZGate(q, -2.5142184600389177, 0);
  sqcRYGate(q, -2.2291563122012388, 1);
  sqcRZGate(q, -0.30961058231060773, 1);
  sqcRYGate(q, -2.6416837384788048, 2);
  sqcRZGate(q, 2.3270186048380115, 2);
  sqcRYGate(q, 0.0880559478933937, 3);
  sqcRZGate(q, 2.470130192925404, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.8826131420366212, 0);
  sqcRZGate(q, -3.134589668555615, 0);
  sqcRYGate(q, 2.664952730531761, 1);
  sqcRZGate(q, -1.071523734230901, 1);
  sqcRYGate(q, -3.073880970686478, 2);
  sqcRZGate(q, -1.6802729494468032, 2);
  sqcRYGate(q, 1.024857818714306, 3);
  sqcRZGate(q, 1.1196479746864654, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.522391155280378, 0);
  sqcRZGate(q, -2.0354320279355873, 0);
  sqcRYGate(q, -2.554547052812855, 1);
  sqcRZGate(q, 2.929941920843314, 1);
  sqcRYGate(q, -0.7861568657475811, 2);
  sqcRZGate(q, -0.2577709638750677, 2);
  sqcRYGate(q, -2.5694781719925213, 3);
  sqcRZGate(q, -3.083124826228715, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0005075333605855, 0);
  sqcRZGate(q, 0.721111797309109, 0);
  sqcRYGate(q, -1.6775921363939543, 1);
  sqcRZGate(q, 1.0082730793339838, 1);
  sqcRYGate(q, -2.03178923834378, 2);
  sqcRZGate(q, -1.942635972346589, 2);
  sqcRYGate(q, -1.35286682633392, 3);
  sqcRZGate(q, 0.25523853128193924, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9742944391345452, 0);
  sqcRZGate(q, 3.129499641874855, 0);
  sqcRYGate(q, -1.4486966061147104, 1);
  sqcRZGate(q, 1.498459280330991, 1);
  sqcRYGate(q, 0.8070662185121922, 2);
  sqcRZGate(q, 0.1414721435039082, 2);
  sqcRYGate(q, 1.8988442440485853, 3);
  sqcRZGate(q, 0.8782109978232597, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5424246066315241, 0);
  sqcRZGate(q, 2.2000126936969484, 0);
  sqcRYGate(q, -0.7069163508196562, 1);
  sqcRZGate(q, -0.36681236188230604, 1);
  sqcRYGate(q, -1.0176951787767168, 2);
  sqcRZGate(q, 0.08514585289839093, 2);
  sqcRYGate(q, 0.3718275921300398, 3);
  sqcRZGate(q, -0.4714637508675514, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0186063325037473, 0);
  sqcRZGate(q, -2.565590341492476, 0);
  sqcRYGate(q, -1.6514646477194699, 1);
  sqcRZGate(q, -0.8888927460377013, 1);
  sqcRYGate(q, -2.7269721929847743, 2);
  sqcRZGate(q, 1.040126534908649, 2);
  sqcRYGate(q, 1.0031352986602746, 3);
  sqcRZGate(q, 1.692622302572879, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3653007562901767, 0);
  sqcRZGate(q, 0.9117510072264094, 0);
  sqcRYGate(q, -1.8258509747022564, 1);
  sqcRZGate(q, 0.647504323838813, 1);
  sqcRYGate(q, 0.7542269202750898, 2);
  sqcRZGate(q, -0.6901323837478551, 2);
  sqcRYGate(q, -0.9078886693329129, 3);
  sqcRZGate(q, 1.593964244280227, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.057384897492621, 0);
  sqcRZGate(q, -1.7650987532879996, 0);
  sqcRYGate(q, 1.022337185519091, 1);
  sqcRZGate(q, 0.6439659046022986, 1);
  sqcRYGate(q, -1.5247599464938713, 2);
  sqcRZGate(q, 0.17683714431067402, 2);
  sqcRYGate(q, 1.9669633675116935, 3);
  sqcRZGate(q, 2.366308576566826, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4761217611001918, 0);
  sqcRZGate(q, 0.592272114503227, 0);
  sqcRYGate(q, -2.207767229525518, 1);
  sqcRZGate(q, 1.5493706341758209, 1);
  sqcRYGate(q, -1.2809406328861106, 2);
  sqcRZGate(q, 3.0069811087002325, 2);
  sqcRYGate(q, -0.2118409617139794, 3);
  sqcRZGate(q, -2.2458005953136757, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7170918687638999, 0);
  sqcRZGate(q, 0.7898603789724018, 0);
  sqcRYGate(q, 2.4899029986232173, 1);
  sqcRZGate(q, -0.31733655571785346, 1);
  sqcRYGate(q, -1.3210920707718463, 2);
  sqcRZGate(q, -1.1755788111297951, 2);
  sqcRYGate(q, -2.5315121096498236, 3);
  sqcRZGate(q, -1.7606252827258375, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9902483953153194, 0);
  sqcRZGate(q, -2.1606489475689257, 0);
  sqcRYGate(q, -2.173417274683098, 1);
  sqcRZGate(q, 0.5981968871851769, 1);
  sqcRYGate(q, 0.7561593909509624, 2);
  sqcRZGate(q, 2.018331660619312, 2);
  sqcRYGate(q, 2.6597053284096424, 3);
  sqcRZGate(q, 1.7767666270914884, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5035927526630783, 0);
  sqcRZGate(q, 1.204215407272418, 0);
  sqcRYGate(q, 2.675927021589207, 1);
  sqcRZGate(q, -1.2720577044753165, 1);
  sqcRYGate(q, -0.29641315719338035, 2);
  sqcRZGate(q, -2.241333013973094, 2);
  sqcRYGate(q, -3.0823050115426414, 3);
  sqcRZGate(q, 1.7714632983687293, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6050668675292608, 0);
  sqcRZGate(q, 0.144791481800888, 0);
  sqcRYGate(q, 2.6996546814163014, 1);
  sqcRZGate(q, 2.5033732029764866, 1);
  sqcRYGate(q, -1.47822482641875, 2);
  sqcRZGate(q, -0.5113543521520243, 2);
  sqcRYGate(q, -2.804474620385372, 3);
  sqcRZGate(q, 2.009950067374268, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.3040117086982854, 0);
  sqcRZGate(q, -1.9034195763590012, 0);
  sqcRYGate(q, -1.871958672973435, 1);
  sqcRZGate(q, 1.8876320894785121, 1);
  sqcRYGate(q, -1.6351642798998272, 2);
  sqcRZGate(q, -2.3344038265746554, 2);
  sqcRYGate(q, -2.721387898752773, 3);
  sqcRZGate(q, 0.9008412508472725, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.207410872634969, 0);
  sqcRZGate(q, 2.9379244876792012, 0);
  sqcRYGate(q, -1.2020285227551089, 1);
  sqcRZGate(q, 0.6274192584998987, 1);
  sqcRYGate(q, 2.5554353077658227, 2);
  sqcRZGate(q, 1.7248678760504959, 2);
  sqcRYGate(q, 0.29079044849716384, 3);
  sqcRZGate(q, -0.2827660012091666, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6910885514110117, 0);
  sqcRZGate(q, 0.3516377007965199, 0);
  sqcRYGate(q, -3.0767858841851776, 1);
  sqcRZGate(q, -0.5239983032350625, 1);
  sqcRYGate(q, -2.6990565052310638, 2);
  sqcRZGate(q, -0.7149342459443124, 2);
  sqcRYGate(q, 2.0539023180405187, 3);
  sqcRZGate(q, -0.6236022833390997, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2138789171708695, 0);
  sqcRZGate(q, 1.25682316994662, 0);
  sqcRYGate(q, 1.0315790970098364, 1);
  sqcRZGate(q, 0.9141762846553538, 1);
  sqcRYGate(q, 1.95423258769093, 2);
  sqcRZGate(q, -2.921213948541535, 2);
  sqcRYGate(q, -0.5247997910599945, 3);
  sqcRZGate(q, -1.2239228068791714, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7890993483700126, 0);
  sqcRZGate(q, 3.0812268635992863, 0);
  sqcRYGate(q, 0.9519784026654525, 1);
  sqcRZGate(q, 0.2653261410162182, 1);
  sqcRYGate(q, 0.937704946899224, 2);
  sqcRZGate(q, 2.0767706644989543, 2);
  sqcRYGate(q, 0.048185529889955045, 3);
  sqcRZGate(q, 2.0005127207011633, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6071853742135405, 0);
  sqcRZGate(q, 1.9701688056147786, 0);
  sqcRYGate(q, -1.637965809044658, 1);
  sqcRZGate(q, -2.359239117768516, 1);
  sqcRYGate(q, -0.7554528976244193, 2);
  sqcRZGate(q, 0.8975708261007201, 2);
  sqcRYGate(q, 1.9715969541875689, 3);
  sqcRZGate(q, 2.2195821293336566, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7797499385216417, 0);
  sqcRZGate(q, -2.5346031242022846, 0);
  sqcRYGate(q, -0.03768534663419141, 1);
  sqcRZGate(q, -0.8472861768148903, 1);
  sqcRYGate(q, -2.258775592757856, 2);
  sqcRZGate(q, -1.698530334411166, 2);
  sqcRYGate(q, 2.6939046113764453, 3);
  sqcRZGate(q, 2.659719929448758, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2967366000072804, 0);
  sqcRZGate(q, -1.7106017955493495, 0);
  sqcRYGate(q, -0.8229855339044398, 1);
  sqcRZGate(q, 0.33415927526336914, 1);
  sqcRYGate(q, 1.8213144326042263, 2);
  sqcRZGate(q, 1.5541160479946785, 2);
  sqcRYGate(q, 2.2747719794482846, 3);
  sqcRZGate(q, 0.2911893892357117, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.790860729042623, 0);
  sqcRZGate(q, -1.1223223362339114, 0);
  sqcRYGate(q, -1.7275182920744365, 1);
  sqcRZGate(q, 2.336154743940503, 1);
  sqcRYGate(q, -2.3338806181513956, 2);
  sqcRZGate(q, -1.8176515065640302, 2);
  sqcRYGate(q, -2.4327571795355016, 3);
  sqcRZGate(q, -1.8840021976699273, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6965977065229616, 0);
  sqcRZGate(q, -0.2390299557348197, 0);
  sqcRYGate(q, -1.84656726466148, 1);
  sqcRZGate(q, 1.1736364984171335, 1);
  sqcRYGate(q, 1.493870137771152, 2);
  sqcRZGate(q, -2.3176747635249852, 2);
  sqcRYGate(q, -0.7893855215486442, 3);
  sqcRZGate(q, -0.5202339342458873, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9059124742821283, 0);
  sqcRZGate(q, -0.4109344627427989, 0);
  sqcRYGate(q, -2.4206638684991497, 1);
  sqcRZGate(q, -0.5431920627049273, 1);
  sqcRYGate(q, -1.4860245094160696, 2);
  sqcRZGate(q, 2.822600952018909, 2);
  sqcRYGate(q, 1.126753177594349, 3);
  sqcRZGate(q, 1.3660868525805365, 3);

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
