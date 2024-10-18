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

  sqcRYGate(q, -2.6870632729040658, 0);
  sqcRYGate(q, -2.063780739581321, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.30318786824707944, 0);
  sqcRYGate(q, -1.9579066133275327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.006915248863257519, 2);
  sqcRYGate(q, 0.3806063848720057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7915505189758012, 2);
  sqcRYGate(q, -2.177773159256531, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6322371720689282, 1);
  sqcRYGate(q, 1.3639668120563542, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.071568724809308, 1);
  sqcRYGate(q, 1.9807852284208272, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.11340320398932, 0);
  sqcRYGate(q, 1.7001962697838318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.735525754439741, 0);
  sqcRYGate(q, 0.4423099673194546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11286006081195563, 2);
  sqcRYGate(q, -1.9212398778982935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2273690143371976, 2);
  sqcRYGate(q, -1.363504902988609, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7865003686308922, 1);
  sqcRYGate(q, 2.171623528266582, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.40824361084595573, 1);
  sqcRYGate(q, -1.480024986941217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.253913880110148, 0);
  sqcRYGate(q, -0.11962347572406615, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.910213294957229, 0);
  sqcRYGate(q, -1.3333854295396148, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.547874254714129, 2);
  sqcRYGate(q, -0.09611904492757439, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.45616513270540177, 2);
  sqcRYGate(q, -2.381222946897117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.014787605924611022, 1);
  sqcRYGate(q, 2.9583695504633956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.336602037964734, 1);
  sqcRYGate(q, -2.3010569237160827, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5559353642121829, 0);
  sqcRYGate(q, -1.6918739349880632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6267510871817528, 0);
  sqcRYGate(q, 1.3087485828291934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.496332988789163, 2);
  sqcRYGate(q, 1.0146414318544315, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3105181038797349, 2);
  sqcRYGate(q, -1.856807972032472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8039003236394846, 1);
  sqcRYGate(q, -2.6054860769837767, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.989359665340756, 1);
  sqcRYGate(q, 1.360932298029488, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0635489481344744, 0);
  sqcRYGate(q, 1.2433178939066165, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5556451443116472, 0);
  sqcRYGate(q, 2.538672241542612, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8737658501542143, 2);
  sqcRYGate(q, 1.497071588422317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.71872276402851, 2);
  sqcRYGate(q, 1.2870870643263057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5845904425789339, 1);
  sqcRYGate(q, -0.5256368699386719, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5670718513173988, 1);
  sqcRYGate(q, -0.6334050496290075, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7484722188753772, 0);
  sqcRYGate(q, 1.0462622510711546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1267240948165345, 0);
  sqcRYGate(q, -3.007035027017814, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3834580231080533, 2);
  sqcRYGate(q, -2.0310112167327086, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.516535971766647, 2);
  sqcRYGate(q, -2.32061192772555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.01565381590372969, 1);
  sqcRYGate(q, 0.8957818232290805, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.848204811276236, 1);
  sqcRYGate(q, 1.7788363555917102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3946801096067625, 0);
  sqcRYGate(q, -2.6782129153631367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08004798199856467, 0);
  sqcRYGate(q, 0.7943889084250227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.164194858717247, 2);
  sqcRYGate(q, -0.6248910828389816, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2168473358842302, 2);
  sqcRYGate(q, -0.11752713857345455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.885479303403383, 1);
  sqcRYGate(q, -1.111045798365521, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.487756162088229, 1);
  sqcRYGate(q, -1.5073501113428753, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4472980824106323, 0);
  sqcRYGate(q, -1.847381274267936, 1);
  sqcRYGate(q, -2.4329434837811865, 2);
  sqcRYGate(q, 2.2763215703243658, 3);

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
