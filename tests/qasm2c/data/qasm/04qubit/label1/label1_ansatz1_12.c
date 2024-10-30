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

  sqcRYGate(q, -1.1751012488211974, 0);
  sqcRZGate(q, -1.8216315150638946, 0);
  sqcRYGate(q, 1.7372639379448565, 1);
  sqcRZGate(q, -1.2440895644850247, 1);
  sqcRYGate(q, -0.1464822396301178, 2);
  sqcRZGate(q, 1.185571249884811, 2);
  sqcRYGate(q, 2.393521042107113, 3);
  sqcRZGate(q, -0.5465567530096482, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.021948684225685, 0);
  sqcRZGate(q, 0.4736485981420202, 0);
  sqcRYGate(q, 2.387269929604987, 1);
  sqcRZGate(q, -2.850036664025085, 1);
  sqcRYGate(q, 0.05134858876805211, 2);
  sqcRZGate(q, 0.37198510715422517, 2);
  sqcRYGate(q, -0.5741394905378243, 3);
  sqcRZGate(q, 1.5278821305545716, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1842903732148655, 0);
  sqcRZGate(q, 1.0193582899413054, 0);
  sqcRYGate(q, 0.08345190365499784, 1);
  sqcRZGate(q, -1.1813917928084168, 1);
  sqcRYGate(q, 2.56230860076222, 2);
  sqcRZGate(q, -2.5344600149841865, 2);
  sqcRYGate(q, 1.7165723576336394, 3);
  sqcRZGate(q, -1.0304478710495781, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.054916585413613, 0);
  sqcRZGate(q, -1.22595533929026, 0);
  sqcRYGate(q, 2.8318904852222593, 1);
  sqcRZGate(q, 0.20999726626932524, 1);
  sqcRYGate(q, 2.5125134289637057, 2);
  sqcRZGate(q, -2.3237389957028034, 2);
  sqcRYGate(q, -2.8690912480553843, 3);
  sqcRZGate(q, 1.933198538174145, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9936837201919992, 0);
  sqcRZGate(q, -2.8450247504103796, 0);
  sqcRYGate(q, 0.783109686467987, 1);
  sqcRZGate(q, 1.114576970368769, 1);
  sqcRYGate(q, -0.2423639588634492, 2);
  sqcRZGate(q, 0.9968593804544011, 2);
  sqcRYGate(q, -1.7796793714220545, 3);
  sqcRZGate(q, -1.3681473789951522, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.678347202197339, 0);
  sqcRZGate(q, 2.973171981318717, 0);
  sqcRYGate(q, 1.9545950355586692, 1);
  sqcRZGate(q, -2.732078693745049, 1);
  sqcRYGate(q, -0.45810628425363037, 2);
  sqcRZGate(q, -0.04750613098096205, 2);
  sqcRYGate(q, 1.1426290926504834, 3);
  sqcRZGate(q, -2.8666646081435583, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.8052637676619274, 0);
  sqcRZGate(q, -2.5568223131290777, 0);
  sqcRYGate(q, -1.4689938194389223, 1);
  sqcRZGate(q, -1.8311221880774164, 1);
  sqcRYGate(q, 0.08043193115536784, 2);
  sqcRZGate(q, 1.8491001800296774, 2);
  sqcRYGate(q, -0.7575482887896249, 3);
  sqcRZGate(q, 1.49906998131834, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.652264675944017, 0);
  sqcRZGate(q, -1.7023099306208636, 0);
  sqcRYGate(q, -0.3780558540057033, 1);
  sqcRZGate(q, 0.6300523032871791, 1);
  sqcRYGate(q, -2.9344281177507727, 2);
  sqcRZGate(q, 0.5361086759067478, 2);
  sqcRYGate(q, -1.0443226301790887, 3);
  sqcRZGate(q, -2.9653523506313597, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9418872499411304, 0);
  sqcRZGate(q, 1.5539651399499834, 0);
  sqcRYGate(q, -2.8736782603117623, 1);
  sqcRZGate(q, 2.3346784708429604, 1);
  sqcRYGate(q, -1.3803422582952969, 2);
  sqcRZGate(q, 2.166927382148594, 2);
  sqcRYGate(q, 1.4573089784878983, 3);
  sqcRZGate(q, -2.353460005106529, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1299359736878063, 0);
  sqcRZGate(q, 2.070810624670644, 0);
  sqcRYGate(q, -0.6280719817295841, 1);
  sqcRZGate(q, -1.4108304329421764, 1);
  sqcRYGate(q, 1.9016837456445863, 2);
  sqcRZGate(q, -1.6114977680809028, 2);
  sqcRYGate(q, 1.759794693193105, 3);
  sqcRZGate(q, -1.1264516589428375, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.696167567310843, 0);
  sqcRZGate(q, -1.1256770966345346, 0);
  sqcRYGate(q, -2.1938748015693523, 1);
  sqcRZGate(q, -0.6923900299076848, 1);
  sqcRYGate(q, 1.5358260459317075, 2);
  sqcRZGate(q, -0.8515438941489729, 2);
  sqcRYGate(q, -1.5218435419720684, 3);
  sqcRZGate(q, 0.9599691816617673, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1272370261284177, 0);
  sqcRZGate(q, -1.5604642281608676, 0);
  sqcRYGate(q, 2.524098428392925, 1);
  sqcRZGate(q, 1.6132372995937443, 1);
  sqcRYGate(q, 2.337511026388803, 2);
  sqcRZGate(q, 2.198665613488916, 2);
  sqcRYGate(q, 2.9487338677364328, 3);
  sqcRZGate(q, 3.0037487327034347, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.712567278290668, 0);
  sqcRZGate(q, -2.3942580829416253, 0);
  sqcRYGate(q, -2.4642708026460647, 1);
  sqcRZGate(q, -0.5966694776096725, 1);
  sqcRYGate(q, 1.6679814532475037, 2);
  sqcRZGate(q, -0.010119626776632994, 2);
  sqcRYGate(q, -0.5510202636932781, 3);
  sqcRZGate(q, 1.1481738394723053, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8614356560380969, 0);
  sqcRZGate(q, 2.7762119620557506, 0);
  sqcRYGate(q, 1.646894269068721, 1);
  sqcRZGate(q, 0.8408489465704897, 1);
  sqcRYGate(q, 2.4178443865579, 2);
  sqcRZGate(q, 1.4555653786997298, 2);
  sqcRYGate(q, -0.2027712662627436, 3);
  sqcRZGate(q, 0.9449953211649871, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7951991408333564, 0);
  sqcRZGate(q, 2.6699307119684557, 0);
  sqcRYGate(q, 1.8016196928818644, 1);
  sqcRZGate(q, -3.020692495763948, 1);
  sqcRYGate(q, 2.081383891186902, 2);
  sqcRZGate(q, 2.520380367492146, 2);
  sqcRYGate(q, 1.0822434790025737, 3);
  sqcRZGate(q, -1.4775723266418348, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6317756939891059, 0);
  sqcRZGate(q, 2.7608240911745927, 0);
  sqcRYGate(q, 1.5939512783235614, 1);
  sqcRZGate(q, 2.0344243283696812, 1);
  sqcRYGate(q, 2.1303851857489384, 2);
  sqcRZGate(q, 3.070638778966484, 2);
  sqcRYGate(q, -1.6430103033377004, 3);
  sqcRZGate(q, -2.741119451126501, 3);

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
